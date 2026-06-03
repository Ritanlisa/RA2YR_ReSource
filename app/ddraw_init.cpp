#include <windows.h>
#include <ddraw.h>
#include <cstdio>

#include "gamemd/core/ddraw_init.hpp"
#include "cmdline.hpp"

namespace gamemd {

// IDA: 0x8A0094 — g_lpDirectDraw7
LPDIRECTDRAW7 g_lpDirectDraw7 = nullptr;

// IDA: 0xA8ED80 — g_DDraw_Active
bool g_DDraw_Active = false;

// IDA: 0x8A00A4 — g_DisplayWidth
int g_DisplayWidth = 0;

// IDA: 0x8A00A8 — g_DisplayHeight
int g_DisplayHeight = 0;

// IDA: 0x8A00AC — g_DisplayBPP
int g_DisplayBPP = 0;

// IDA: 0x8A00B0 — g_DDraw_ErrorCallback (function pointer, NULL = MessageBox fallback)
// TODO: implement error callback mechanism
void (*g_DDraw_ErrorCallback)(int) = nullptr;

// IDA: 0x89FC90 — g_DDraw_Palette (IDirectDrawPalette*)
LPDIRECTDRAWPALETTE g_DDraw_Palette = nullptr;

// IDA: 0x89FC94 — g_DDraw_PaletteEntries (256 COLORENTRY = 1024 bytes)
PALETTEENTRY g_DDraw_PaletteEntries[256] = {};

// IDA: 0x8205D4 — g_DDraw_UseHWBlit
bool g_DDraw_UseHWBlit = false;

// Local DDraw context for the simplified API
static DDrawContext g_ddraw;

// ============================================================
// IDA: DDraw_Initialize @ 0x4A42F0
// ============================================================
int DDraw_Initialize(int a1, DWORD width, DWORD height, DWORD bpp)
{
    (void)a1;

    if (!g_lpDirectDraw7) {
        // IDA: DirectDrawCreate(0, &g_lpDirectDraw7, 0)
        // For IDirectDraw7, we create IDirectDraw first then QueryInterface
        LPDIRECTDRAW dd1 = nullptr;
        HRESULT hr = DirectDrawCreate(nullptr, &dd1, nullptr);
        if (SUCCEEDED(hr) && dd1) {
            hr = dd1->QueryInterface(IID_IDirectDraw7, (LPVOID*)&g_lpDirectDraw7);
            dd1->Release();
        }
        if (!g_lpDirectDraw7) {
            if (g_DDraw_ErrorCallback)
                g_DDraw_ErrorCallback(hr);
            else {
                char buf[80];
                sprintf(buf, "DDRAW.DLL Error code = %08X", hr);
                MessageBoxA(nullptr, buf, "Direct X", MB_OK | MB_ICONEXCLAMATION);
            }
            return 0; // failure
        }

        DWORD coop = g_DDraw_Initialized
            ? DDSCL_NORMAL
            : DDSCL_EXCLUSIVE | DDSCL_FULLSCREEN;

        hr = g_lpDirectDraw7->SetCooperativeLevel(nullptr, coop);
        if (FAILED(hr)) {
            if (g_DDraw_ErrorCallback)
                g_DDraw_ErrorCallback(hr);
            else {
                char buf[80];
                sprintf(buf, "DDRAW.DLL Error code = %08X", hr);
                MessageBoxA(nullptr, buf, "Direct X", MB_OK | MB_ICONEXCLAMATION);
            }
        }
    }

    HRESULT hr = g_lpDirectDraw7->SetDisplayMode(width, height, bpp, 0, 0);
    if (FAILED(hr)) {
        return 0; // IDA: "SetDisplayMode failed"
    }

    g_DisplayWidth  = width;
    g_DisplayHeight = height;
    g_DisplayBPP    = bpp;

    if (bpp == 8) {
        hr = g_lpDirectDraw7->CreatePalette(
            DDPCAPS_8BIT | DDPCAPS_ALLOW256, // 0x44
            g_DDraw_PaletteEntries,
            &g_DDraw_Palette,
            nullptr);
        if (FAILED(hr)) {
            if (g_DDraw_ErrorCallback)
                g_DDraw_ErrorCallback(hr);
            else {
                char buf[80];
                sprintf(buf, "DDRAW.DLL Error code = %08X", hr);
                MessageBoxA(nullptr, buf, "Direct X", MB_OK | MB_ICONEXCLAMATION);
            }
            return 0;
        }
    }

    // IDA: DDraw::CapabilityCheck @ 0x4A3E40 — detect HW blit capabilities
    // TODO: full capability check (probe surface, test Blit, etc.)
    g_DDraw_UseHWBlit = true;

    return 1; // success
}

// ============================================================
// Simplified DDraw API (game_loop.cpp compatibility)
// ============================================================

bool DDraw_Init(HWND hwnd, int width, int height, bool windowed)
{
    g_ddraw.hwnd     = hwnd;
    g_ddraw.width    = width;
    g_ddraw.height   = height;
    g_ddraw.windowed = windowed;

    if (windowed) {
        g_DDraw_Initialized = 1;
    }

    int result = DDraw_Initialize(0, width, height, 16);
    if (!result) return false;

    g_ddraw.dd = g_lpDirectDraw7;

    DWORD coop_flags = DDSCL_NORMAL;
    if (!windowed) {
        coop_flags = DDSCL_EXCLUSIVE | DDSCL_FULLSCREEN;
    }

    if (!windowed) {
        DDSURFACEDESC2 desc = {};
        desc.dwSize            = sizeof(desc);
        desc.dwFlags           = DDSD_CAPS | DDSD_BACKBUFFERCOUNT;
        desc.ddsCaps.dwCaps    = DDSCAPS_PRIMARYSURFACE | DDSCAPS_FLIP | DDSCAPS_COMPLEX;
        desc.dwBackBufferCount = 1;
        HRESULT hr = g_lpDirectDraw7->CreateSurface(&desc, &g_ddraw.primary, nullptr);
        if (FAILED(hr)) return false;

        DDSCAPS2 caps = { DDSCAPS_BACKBUFFER, 0, 0, 0 };
        hr = g_ddraw.primary->GetAttachedSurface(&caps, &g_ddraw.back_buffer);
        if (FAILED(hr)) return false;
    } else {
        DDSURFACEDESC2 desc = {};
        desc.dwSize         = sizeof(desc);
        desc.dwFlags        = DDSD_CAPS;
        desc.ddsCaps.dwCaps = DDSCAPS_PRIMARYSURFACE;
        HRESULT hr = g_lpDirectDraw7->CreateSurface(&desc, &g_ddraw.primary, nullptr);
        if (FAILED(hr)) return false;

        hr = g_lpDirectDraw7->CreateClipper(0, &g_ddraw.clipper, nullptr);
        if (FAILED(hr)) return false;
        g_ddraw.clipper->SetHWnd(0, hwnd);
        g_ddraw.primary->SetClipper(g_ddraw.clipper);

        desc.dwFlags        = DDSD_WIDTH | DDSD_HEIGHT | DDSD_CAPS;
        desc.dwWidth        = width;
        desc.dwHeight       = height;
        desc.ddsCaps.dwCaps = DDSCAPS_OFFSCREENPLAIN | DDSCAPS_SYSTEMMEMORY;
        hr = g_lpDirectDraw7->CreateSurface(&desc, &g_ddraw.back_buffer, nullptr);
        if (FAILED(hr)) return false;
    }

    return true;
}

void DDraw_Shutdown()
{
    if (g_ddraw.back_buffer) { g_ddraw.back_buffer->Release(); g_ddraw.back_buffer = nullptr; }
    if (g_ddraw.clipper)     { g_ddraw.clipper->Release();     g_ddraw.clipper     = nullptr; }
    if (g_ddraw.primary)     { g_ddraw.primary->Release();     g_ddraw.primary     = nullptr; }
    if (g_lpDirectDraw7)     { g_lpDirectDraw7->Release();     g_lpDirectDraw7     = nullptr; }
}

DDrawContext* DDraw_GetContext()
{
    return &g_ddraw;
}

void DDraw_Flip()
{
    if (!g_ddraw.primary) return;

    DDrawContext* ctx = &g_ddraw;
    if (!ctx->windowed) {
        ctx->primary->Flip(nullptr, DDFLIP_WAIT);
    } else {
        RECT rc;
        GetClientRect(ctx->hwnd, &rc);
        POINT pt = { 0, 0 };
        ClientToScreen(ctx->hwnd, &pt);
        OffsetRect(&rc, pt.x, pt.y);
        ctx->primary->Blt(&rc, ctx->back_buffer, nullptr, DDBLT_WAIT, nullptr);
    }
}

} // namespace gamemd
