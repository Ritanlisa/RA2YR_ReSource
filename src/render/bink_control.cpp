#include "gamemd/render/bink_control.hpp"
#include "gamemd/render/surface.hpp"
#include "gamemd/core/ddraw_init.hpp"
#include "gamemd/core/logging.hpp"
#include <cstdlib>
#include <cstring>

namespace gamemd
{

BinkPlayerControl* BinkPlayerControl::FromHwnd(HWND h)
{
    return (BinkPlayerControl*)GetPropA(h, "__bink_ctrl");
}

void BinkPlayerControl::Init(HWND hWnd)
{
    m_hWnd = hWnd;
    SetPropA(hWnd, "__bink_ctrl", this);

    DDrawContext* ctx = DDrawGetContext();
    if (!ctx || !ctx->dd) {
        LOG_ERROR("BinkControl: DDraw not available");
        return;
    }

    DDSURFACEDESC2 desc = {};
    desc.dwSize = sizeof(desc);
    desc.dwFlags = DDSD_WIDTH | DDSD_HEIGHT | DDSD_CAPS;
    desc.dwWidth  = 640;
    desc.dwHeight = 480;
    desc.ddsCaps.dwCaps = DDSCAPS_OFFSCREENPLAIN | DDSCAPS_SYSTEMMEMORY;

    HRESULT hr = ctx->dd->CreateSurface(&desc, &m_surface, nullptr);
    if (FAILED(hr) || !m_surface) {
        LOG_ERROR("BinkControl: CreateSurface failed hr=0x%08X", hr);
        return;
    }
    LOG_DEBUG("BinkControl: 640x480 offscreen surface created");
}

void BinkPlayerControl::OpenBink(const char* filename)
{
    if (!filename || !*filename) {
        LOG_ERROR("BinkControl: empty filename");
        return;
    }
    if (!m_surface) {
        LOG_ERROR("BinkControl: no surface for BINK render");
        return;
    }

    DSurface ds(640, 480, false, false);
    ds.Surface = m_surface;
    ds.Allocated = false;

    m_movie = std::make_unique<BinkMovieHandle>();
    if (!m_movie->OpenFromFile(filename, &ds)) {
        LOG_ERROR("BinkControl: OpenFromFile('%s') failed", filename);
        m_movie.reset();
        return;
    }
    m_playing = true;
    LOG_INFO("BinkControl: opened '%s' %dx%d %df", filename, m_movie->GetWidth(), m_movie->GetHeight(), m_movie->GetTotalFrames());
}

void BinkPlayerControl::CloseBink()
{
    m_playing = false;
    if (m_movie) {
        m_movie->Stop();
        m_movie.reset();
    }
    if (m_surface) {
        m_surface->Release();
        m_surface = nullptr;
    }
}

LRESULT CALLBACK BinkPlayerControl::WindowProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam, UINT_PTR uIdSubclass, DWORD_PTR dwRefData)
{
    BinkPlayerControl* self = (BinkPlayerControl*)dwRefData;
    if (!self && msg != BINKM_INIT) {
        self = FromHwnd(hWnd);
    }

    switch (msg) {
    case WM_DESTROY:
        if (self) {
            RemovePropA(hWnd, "__bink_ctrl");
            self->CloseBink();
            delete self;
        }
        break;

    case BINKM_INIT:
        if (!self) {
            self = new BinkPlayerControl();
            self->Init(hWnd);
            SetWindowSubclass(hWnd, WindowProc, 0, (DWORD_PTR)self);
        } else {
            self->Init(hWnd);
        }
        return 0;

    case BINKM_OPEN:
        if (self) self->OpenBink((const char*)lParam);
        return 0;

    case BINKM_CLOSE:
        if (self) self->CloseBink();
        return 0;

    default:
        break;
    }

    return DefSubclassProc(hWnd, msg, wParam, lParam);
}

} // namespace gamemd

// IDA: 0x6C9930 — BinkMovie::FreeSurfaceBuffer (15B)
// Frees an allocated buffer at this+5 (offset 20) if non-null.
// Used by FreeSurfaceTracker to clean up individual surface entries.
namespace {
void BinkMovie_FreeSurfaceBuffer(void** obj)
{
    if (obj[5])  // field at DWORD offset 5 → byte offset 20
    {
        operator delete(obj[5]);
    }
}
} // anonymous namespace

namespace gamemd
{

// IDA: 0x6C9AE0 — BinkMovie::FreeSurfaceTracker (83B)
// Iterates through a surface tracker array, frees each surface buffer
// via BinkMovie_FreeSurfaceBuffer, then calls destructors on sub-objects.
int BinkMovie_FreeSurfaceTracker(int* tracker)
{
    int result = *tracker;

    if (*tracker)
    {
        // Iterate through surface array
        int count = *(int*)(*tracker + 16);  // array size at offset 16
        for (int i = 0; i < count; ++i)
        {
            int* array_base = *(int**)(*tracker + 4);  // array pointer at offset 4
            void* entry = *(void**)(array_base + i);     // array[i]
            if (entry)
            {
                BinkMovie_FreeSurfaceBuffer(entry);       // free surface buffer
                operator delete(entry);                   // free the entry itself
            }
        }

        if (*tracker)
            result = (**(int(__thiscall***)(int, int))*tracker)(*tracker, 1);  // vtable dtor
    }

    // Call destructor on sub-object at tracker+4
    int(__thiscall*** sub_obj)(int, int) = *(int(__thiscall****)(int, int))(tracker + 4);
    if (sub_obj)
        return (**sub_obj)(sub_obj, 1);  // vtable dtor

    return result;
}

// IDA: 0x434B90 — FontRenderer::DrawText (88B)
// Thin wrapper: InitContext → SetField → RenderText → Cleanup
extern void FontRenderer_InitContext(void* ctx, int* surface);    // IDA 0x4348F0
extern void Field_Int_Set(void* ctx, int x);                      // IDA 0x434110
extern int  FontClass_RenderText(void* ctx, const wchar_t* text, int x, int y, int a6, int a7); // IDA 0x434500
extern void BufferIO_Cleanup(void* ctx, int surface);             // IDA 0x434990

int FontRenderer_DrawText(void* ctx, int* surface, const wchar_t* text, int x, int y, int a6, int a7)
{
    if (!ctx)
        return x;

    FontRenderer_InitContext(ctx, surface);
    Field_Int_Set(ctx, x);
    int result = FontClass_RenderText(ctx, text, x, y, a6, a7);
    BufferIO_Cleanup(ctx, (int)surface);
    return result;
}

} // namespace gamemd
