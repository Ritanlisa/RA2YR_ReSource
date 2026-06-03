#include "gamemd/ui/menu_screen.hpp"
#include "gamemd/ui/gadget.hpp"
#include "gamemd/render/text_render.hpp"
#include "gamemd/render/shp_render.hpp"
#include "gamemd/system/file_system.hpp"
#include "gamemd/core/ddraw_init.hpp"

#include <windows.h>
#include <cstdio>
#include <memory>
#include <cstdlib>
#include <cstring>

namespace gamemd {

static uint8_t g_palette[256][4];

static bool LoadMenuBackground(ShpImage& img)
{
    const char* shp_names[] = {
        "ls800yr.shp", "ls640yr.shp", "ls800bg.shp", "ls640bg.shp",
        "logo.shp", "title.shp", nullptr
    };

    void* shp_data = nullptr;
    int   shp_size = 0;
    for (int i = 0; shp_names[i]; ++i) {
        shp_data = FileSystem::LoadFileWithSize(shp_names[i], &shp_size, true);
        if (shp_data) break;
    }

    if (!shp_data) {
        OutputDebugStringA("[gamemd] Menu: no background SHP found in MIX files\n");
        return false;
    }

    bool ok = img.LoadFromMemory(static_cast<const uint8_t*>(shp_data), shp_size);
    free(shp_data);

    char buf[128];
    snprintf(buf, sizeof(buf), "[gamemd] Menu: loaded SHP %dx%d, %d frames\n",
        img.GetWidth(), img.GetHeight(), img.GetFrameCount());
    OutputDebugStringA(buf);
    return ok;
}

static bool LoadMenuPalette()
{
    const char* pal_names[] = {
        "temperat.pal",
        "unitsno.pal",
        "anim.pal",
        "mousepal.pal",
        nullptr
    };

    void* pal_data = nullptr;
    for (int i = 0; pal_names[i]; ++i) {
        pal_data = FileSystem::LoadFile(pal_names[i], false);
        if (pal_data) break;
    }

    if (!pal_data) {
        OutputDebugStringA("[gamemd] Menu: no palette found in MIX files\n");
        for (int i = 0; i < 256; ++i) {
            g_palette[i][0] = static_cast<uint8_t>(i);
            g_palette[i][1] = static_cast<uint8_t>(i);
            g_palette[i][2] = static_cast<uint8_t>(i);
            g_palette[i][3] = 0;
        }
        return false;
    }

    uint8_t* raw = static_cast<uint8_t*>(pal_data);
    for (int i = 0; i < 256; ++i) {
        g_palette[i][0] = raw[i * 3 + 0] << 2;
        g_palette[i][1] = raw[i * 3 + 1] << 2;
        g_palette[i][2] = raw[i * 3 + 2] << 2;
        g_palette[i][3] = 0;
    }
    free(pal_data);

    OutputDebugStringA("[gamemd] Menu: palette loaded\n");
    return true;
}

class MainMenuDialog : public DialogClass {
public:
    ShpImage* bg_image;

    MainMenuDialog(int screen_w, int screen_h, ShpImage* bg)
        : DialogClass((screen_w - 300) / 2, (screen_h - 330) / 2, 300, 330)
        , bg_image(bg)
    {
        int btn_w = 200;
        int btn_h = 36;
        int start_x = (300 - btn_w) / 2;
        int start_y = 50 + 40;
        int gap = 46;

        auto* btn_skirmish = new TextButtonClass(1, "Skirmish (Coming Soon)",
            start_x, start_y, btn_w, btn_h);
        btn_skirmish->Enabled = false;
        btn_skirmish->R = 160; btn_skirmish->G = 160; btn_skirmish->B = 160;
        AddGadget(btn_skirmish);

        auto* btn_campaign = new TextButtonClass(2, "Campaign (Coming Soon)",
            start_x, start_y + gap, btn_w, btn_h);
        btn_campaign->Enabled = false;
        btn_campaign->R = 160; btn_campaign->G = 160; btn_campaign->B = 160;
        AddGadget(btn_campaign);

        auto* btn_network = new TextButtonClass(3, "Network (Coming Soon)",
            start_x, start_y + gap * 2, btn_w, btn_h);
        btn_network->Enabled = false;
        btn_network->R = 160; btn_network->G = 160; btn_network->B = 160;
        AddGadget(btn_network);

        auto* btn_options = new TextButtonClass(4, "Options (Coming Soon)",
            start_x, start_y + gap * 3, btn_w, btn_h);
        btn_options->Enabled = false;
        btn_options->R = 160; btn_options->G = 160; btn_options->B = 160;
        AddGadget(btn_options);

        auto* btn_exit = new TextButtonClass(5, "Exit",
            start_x, start_y + gap * 4, btn_w, btn_h);
        btn_exit->Callback = [this]() {
            m_finished = true;
            m_result = -1;
        };
        AddGadget(btn_exit);

        AddGadget(new LabelClass(0, "Yuri's Revenge",
            0, 10, 255, 220, 50));
    }

    void OnRender(DSurface* surface, TextRenderer* text) override
    {
        if (!surface) return;

        DDrawContext* ctx = DDrawGetContext();
        RectangleStruct full = { 0, 0, ctx->width, ctx->height };
        surface->FillRect(full, 0x0000);

        if (bg_image && bg_image->GetFrameCount() > 0) {
            int bx = (ctx->width - bg_image->GetWidth()) / 2;
            int by = (ctx->height - bg_image->GetHeight()) / 2;
            bg_image->RenderToSurface(surface, 0, bx, by, g_palette);
        }

        DrawBackground(surface);
        for (auto* g : m_gadgets) {
            if (g && g->Visible) g->Draw(surface, text);
        }

        char buf[256]{};
        snprintf(buf, sizeof(buf), "Build: RA2YR ReSource Phase 1");
        text->DrawText(surface, 10, ctx->height - 30, buf, 100, 100, 100);
    }
};

MenuResult ShowMainMenu()
{
    DDrawContext* ctx = DDrawGetContext();
    if (!ctx || !ctx->back_buffer) return MenuResult::Exit;

    DSurface back_surface(ctx->width, ctx->height, true, false);
    if (!back_surface.Allocated) return MenuResult::Exit;

    TextRenderer text_render;
    if (!text_render.Init(ctx->width, ctx->height)) return MenuResult::Exit;

    LoadMenuPalette();

    ShpImage bg_img;
    LoadMenuBackground(bg_img);

    MainMenuDialog menu(ctx->width, ctx->height, &bg_img);

    MSG msg = {};
    while (!menu.IsFinished()) {
        while (PeekMessageA(&msg, nullptr, 0, 0, PM_REMOVE)) {
            if (msg.message == WM_QUIT) return MenuResult::Exit;

            switch (msg.message) {
            case WM_LBUTTONDOWN: {
                int mx = LOWORD(msg.lParam);
                int my = HIWORD(msg.lParam);
                menu.OnMouseClick(mx, my);
                break;
            }
            case WM_MOUSEMOVE: {
                int mx = LOWORD(msg.lParam);
                int my = HIWORD(msg.lParam);
                menu.OnMouseMove(mx, my);
                break;
            }
            case WM_KEYDOWN:
                if (static_cast<int>(msg.wParam) == VK_ESCAPE) return MenuResult::Exit;
                menu.OnKeyDown(static_cast<int>(msg.wParam));
                break;
            default:
                TranslateMessage(&msg);
                DispatchMessageA(&msg);
                break;
            }
        }

        menu.OnRender(&back_surface, &text_render);

        DDSURFACEDESC2 desc = {};
        desc.dwSize = sizeof(desc);
        if (SUCCEEDED(ctx->back_buffer->Lock(nullptr, &desc, DDLOCK_WAIT, nullptr))) {
            DDSURFACEDESC2 src_desc = {};
            src_desc.dwSize = sizeof(src_desc);
            if (SUCCEEDED(back_surface.Surface->Lock(nullptr, &src_desc, DDLOCK_WAIT, nullptr))) {
                uint8_t* dst = static_cast<uint8_t*>(desc.lpSurface);
                uint8_t* src = static_cast<uint8_t*>(src_desc.lpSurface);
                for (int y = 0; y < ctx->height; ++y) {
                    memcpy(dst + y * desc.lPitch,
                           src + y * src_desc.lPitch,
                           ctx->width * 2);
                }
                back_surface.Surface->Unlock(nullptr);
            }
            ctx->back_buffer->Unlock(nullptr);
        }

        DDrawFlip();

        RectangleStruct clr = { 0, 0, ctx->width, ctx->height };
        back_surface.FillRect(clr, 0x0000);

        menu.OnUpdate();
    }

    bg_img.Free();
    text_render.Shutdown();
    return menu.GetResult() == -1 ? MenuResult::Exit : MenuResult::None;
}

} // namespace gamemd
