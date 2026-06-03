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
