#include <windows.h>
#include <ddraw.h>

#include "gamemd/core/ddraw_init.hpp"

namespace gamemd {

struct DDrawContext {
    LPDIRECTDRAW7        dd;
    LPDIRECTDRAWSURFACE7 primary;
    LPDIRECTDRAWSURFACE7 back_buffer;
    LPDIRECTDRAWCLIPPER  clipper;
    HWND                 hwnd;
    int                  width;
    int                  height;
    bool                 windowed;
};

static DDrawContext g_ddraw;

bool DDraw_Init(HWND hwnd, int width, int height, bool windowed)
{
    g_ddraw.hwnd     = hwnd;
    g_ddraw.width    = width;
    g_ddraw.height   = height;
    g_ddraw.windowed = windowed;

    HRESULT hr = DirectDrawCreateEx(nullptr,
        reinterpret_cast<LPVOID*>(&g_ddraw.dd),
        IID_IDirectDraw7, nullptr);
    if (FAILED(hr)) return false;

    DWORD coop_flags = DDSCL_NORMAL;
    if (!windowed) {
        coop_flags = DDSCL_EXCLUSIVE | DDSCL_FULLSCREEN;
    }
    hr = g_ddraw.dd->SetCooperativeLevel(hwnd, coop_flags);
    if (FAILED(hr)) return false;

    if (!windowed) {
        g_ddraw.dd->SetDisplayMode(width, height, 16, 0, 0);

        DDSURFACEDESC2 desc = {};
        desc.dwSize            = sizeof(desc);
        desc.dwFlags           = DDSD_CAPS | DDSD_BACKBUFFERCOUNT;
        desc.ddsCaps.dwCaps    = DDSCAPS_PRIMARYSURFACE | DDSCAPS_FLIP | DDSCAPS_COMPLEX;
        desc.dwBackBufferCount = 1;
        hr = g_ddraw.dd->CreateSurface(&desc, &g_ddraw.primary, nullptr);
        if (FAILED(hr)) return false;

        DDSCAPS2 caps = { DDSCAPS_BACKBUFFER, 0, 0, 0 };
        hr = g_ddraw.primary->GetAttachedSurface(&caps, &g_ddraw.back_buffer);
        if (FAILED(hr)) return false;
    } else {
        DDSURFACEDESC2 desc = {};
        desc.dwSize         = sizeof(desc);
        desc.dwFlags        = DDSD_CAPS;
        desc.ddsCaps.dwCaps = DDSCAPS_PRIMARYSURFACE;
        hr = g_ddraw.dd->CreateSurface(&desc, &g_ddraw.primary, nullptr);
        if (FAILED(hr)) return false;

        hr = g_ddraw.dd->CreateClipper(0, &g_ddraw.clipper, nullptr);
        if (FAILED(hr)) return false;
        g_ddraw.clipper->SetHWnd(0, hwnd);
        g_ddraw.primary->SetClipper(g_ddraw.clipper);

        desc.dwFlags        = DDSD_WIDTH | DDSD_HEIGHT | DDSD_CAPS;
        desc.dwWidth        = width;
        desc.dwHeight       = height;
        desc.ddsCaps.dwCaps = DDSCAPS_OFFSCREENPLAIN | DDSCAPS_SYSTEMMEMORY;
        hr = g_ddraw.dd->CreateSurface(&desc, &g_ddraw.back_buffer, nullptr);
        if (FAILED(hr)) return false;
    }

    return true;
}

void DDraw_Shutdown()
{
    if (g_ddraw.back_buffer) { g_ddraw.back_buffer->Release(); g_ddraw.back_buffer = nullptr; }
    if (g_ddraw.clipper)     { g_ddraw.clipper->Release();     g_ddraw.clipper     = nullptr; }
    if (g_ddraw.primary)     { g_ddraw.primary->Release();     g_ddraw.primary     = nullptr; }
    if (g_ddraw.dd)          { g_ddraw.dd->Release();          g_ddraw.dd          = nullptr; }
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
