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

// IDA: 0x433180 — BinkMovieClass::SetPosition (109B)
extern void BinkMovie_AdjustSurfaceFormat(int*, int);
extern void BinkCopyToBuffer(void*, int, int, int, int, int, int);
extern void* BinkMovie_BlitToTarget(void*, int);

void* BinkMovieClass_SetPosition(int* self, int surface, int x, int y)
{
    BinkMovie_AdjustSurfaceFormat(self, surface);

    int locked = (*(int(__thiscall**)(int, int, int))(*(uintptr_t*)surface + 92))(surface, 0, 0);
    if (locked) {
        int w = (*(int(__thiscall**)(int))(*(uintptr_t*)surface + 116))(surface);
        int h = (*(int(__thiscall**)(int))(*(uintptr_t*)surface + 128))(surface);
        BinkCopyToBuffer((void*)self[1], locked, w, h, x, y, self[2] | 0x80000000);
        (*(void(__thiscall**)(int))(*(uintptr_t*)surface + 96))(surface);
    }
    return BinkMovie_BlitToTarget(self, surface);
}

// IDA: 0x433330 — BinkMovie::AdjustSurfaceFormat (170B)
void BinkMovie_AdjustSurfaceFormat(int* self, int surface)
{
    int* ctx = reinterpret_cast<int*>(self[8]);
    if (!ctx || !*ctx)
        return;

    int v9  = ctx[9];   // offset 36
    int v10 = ctx[10];  // offset 40
    int v11 = ctx[11];  // offset 44 = width
    int v12 = ctx[12];  // offset 48 = height

    if (v11 <= 0 || v12 <= 0)
        return;

    // Get surface rect via vtable[30]
    int* target_surf = reinterpret_cast<int*>(ctx[4]);  // offset 16
    int* rect = (*(int*(__thiscall**)(int, void*))(*(uintptr_t*)target_surf + 120))(target_surf, nullptr);

    int v13 = rect[0];  // X
    int v14 = rect[1];  // Y
    int v6  = rect[3];  // Height

    // Center calculation
    int64_t v7 = self[6] - rect[2];  // Width diff
    int v8 = self[7] - v6 + v10;

    int new_x = v9 + self[4] + static_cast<int>((v7 - (v7 >> 32)) >> 1);
    int new_y = self[5] + v8;

    int dest[4] = { new_x, new_y, v11, v12 };
    // vtable[5] = offset 20 → SetDestRect
    (*(int(__thiscall**)(int, int*, int))(*(uintptr_t*)surface + 20))(surface, dest, 0);
}

// IDA: 0x4331F0 — BinkMovie::RenderSingleFrame (125B)
void* BinkMovie_RenderSingleFrame(int* self, int surface, int x, int y, bool adjust)
{
    if (adjust)
        BinkMovie_AdjustSurfaceFormat(self, surface);

    int locked = (*(int(__thiscall**)(int, int, int))(*(uintptr_t*)surface + 92))(surface, 0, 0);
    if (locked) {
        int w = (*(int(__thiscall**)(int))(*(uintptr_t*)surface + 116))(surface);
        int h = (*(int(__thiscall**)(int))(*(uintptr_t*)surface + 128))(surface);
        int flags = self[2];
        if (adjust) flags |= 0x80000000;
        BinkCopyToBuffer((void*)self[1], locked, w, h, x, y, flags);
        (*(void(__thiscall**)(int))(*(uintptr_t*)surface + 96))(surface);
    }
    return BinkMovie_BlitToTarget(self, surface);
}

// IDA: 0x433270 — BinkMovie::BlitToTarget (192B)
void* BinkMovie_BlitToTarget(int* self, int surface)
{
    int* ctx = reinterpret_cast<int*>(self[8]);
    if (!ctx || !*ctx)
        return nullptr;

    int* v4 = ctx + 5;  // dest rect in ctx
    if (ctx[7] <= 0 || ctx[8] <= 0)
        return nullptr;

    int src_surface = ctx[4];
    // vtable[30] → GetRect
    int* src_rect = (*(int*(__thiscall**)(int, void*))(*(uintptr_t*)src_surface + 120))(src_surface, nullptr);
    int w13 = src_rect[2];   // Width
    int h14 = src_rect[3];   // Height

    int dest[4];
    dest[0] = ctx[9]  + self[4] + ((self[6] - w13) / 2);   // centered X
    dest[1] = ctx[10] + self[5] + (self[7] - h14);          // adjusted Y
    dest[2] = ctx[11];  // width
    dest[3] = ctx[12];  // height

    // vtable[2] → Blit
    using BlitFn = void*(__thiscall*)(int, int*, int, int*, int, int);
    return (*(BlitFn*)(*(uintptr_t*)surface + 8))(surface, dest, src_surface, v4, 1, 1);
}

// IDA: 0x767EF0 — MSFrameAnim::Draw (138B)
extern uint8_t byte_8487BD;  // IDA 0x8487BD
extern void RenderScoreScreen(int, int*, int);  // IDA 0x72E450

void MSFrameAnim_Draw(int surface, int* rect)
{
    if (!byte_8487BD) return;
    int w = (*(int(__thiscall**)(int))(*(uintptr_t*)surface + 124))(surface);
    int h = (*(int(__thiscall**)(int))(*(uintptr_t*)surface + 128))(surface);
    int r[4];
    if (rect) { r[0]=rect[0]; r[1]=rect[1]; r[2]=rect[2]; r[3]=rect[3]; }
    else      { r[0]=0; r[1]=0; r[2]=w; r[3]=h; }
    RenderScoreScreen(surface, r, 1);
}

// IDA: 0x4348F0 — FontRenderer::InitContext (157B)
extern int sub_434840(int*, int*, int*);  // IDA 0x434840

void FontRenderer_InitContext(int* ctx, int* surface)
{
    // vtable[23]=Lock → get locked buffer
    ctx[3] = (*(int(__thiscall**)(int*, int, int))(*(uintptr_t*)surface + 92))(surface, 0, 0);
    // vtable[29]=GetPitch → pitch in bytes, >> 1 for WORD pitch
    ctx[4] = (*(int(__thiscall**)(int*))(*(uintptr_t*)surface + 116))(surface) >> 1;

    int v10 = 0;
    int v11 = 0;
    // vtable[31]=GetWidth
    int v12 = (*(int(__thiscall**)(int*))(*(uintptr_t*)surface + 124))(surface) - 1;
    // vtable[32]=GetHeight
    int v4  = (*(int(__thiscall**)(int*))(*(uintptr_t*)surface + 128))(surface);

    int flags = ctx[13] | ctx[15] | ctx[14];
    int result = v4 - 1;

    if (ctx[12] | flags)
    {
        sub_434840(ctx + 12, ctx + 12, &v10);
        return;
    }

    ctx[15] = result;
    ctx[12] = v10;
    ctx[13] = v11;
    ctx[14] = v12;
}

// IDA: 0x4336C0 — BinkMovieClass::ReleaseRenderSurface (169B)
// Bit-stream unpacker: unpacks bits from compressed source, skip every 7th bit.
unsigned int BinkMovie_UnpackBits(const uint8_t* src, uint8_t* dst, int count)
{
    const uint8_t* s = src;
    uint8_t* d = dst;
    int bit_pos = 0;
    int byte_pos = 0;
    *d = *s & 1;  // first bit
    int remaining = count - 1;

    if (count == 1)
        return (unsigned int)(count + 7) >> 3;

    while (remaining > 0)
    {
        // Every 7 bits, skip one bit in source (BINK compressed format)
        if (((bit_pos + 1) % 7) == 0) {
            ++bit_pos;
            if (bit_pos == 8) { bit_pos = 0; ++s; }
        }
        ++bit_pos;
        if (bit_pos == 8) { bit_pos = 0; ++s; }

        uint8_t bit = ((1 << bit_pos) & *s) != 0;
        ++byte_pos;
        if (byte_pos == 8) { ++d; byte_pos = 0; *d = 0; }

        --remaining;
        *d |= bit << byte_pos;
    }

    return (unsigned int)(count + 7) >> 3;
}

} // namespace gamemd
