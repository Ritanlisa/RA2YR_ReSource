#include <windows.h>
#include <cstdint>
#include <cstdio>
#include <cstring>

#include "gamemd/core/logging.hpp"
#include "gamemd/core/ddraw_init.hpp"
#include "gamemd/core/game_loop.hpp"
#include "gamemd/render/shp_render.hpp"
#include "gamemd/render/text_render.hpp"
#include "gamemd/render/surface.hpp"
#include "gamemd/system/file_system.hpp"

namespace gamemd {

// ==============================================================
//  Menu state machine (matching IDA 0x52D9A0 case values)
// ==============================================================

enum class MenuState {
    Reset            = -1,
    MainMenu         = 0,
    Campaign         = 1,
    Skirmish         = 2,
    Multiplayer      = 3,
    CampaignSub      = 4,
    Options          = 5,
    ExitConfirm      = 6,
    StartScenario    = 7,
    WOLInternet      = 8,
    SaveLoadGame     = 9,
    QuickMatch       = 10,
    NetworkGame5     = 11,
    CampaignInit     = 13,
    CampaignLoadCD   = 14,
    CampaignIntro    = 15,
    NetworkGameFlow  = 16,
    NetworkGameFlow2 = 17,
    MenuIdle         = 18
};

// Game mode constants (IDA byte_A8B238 / GameMode_Current)
enum {
    GMODE_MENU             = 0,
    GMODE_CAMPAIGN         = 1,
    GMODE_CAMPAIGN_SUB     = 2,
    GMODE_MULTIPLAYER      = 3,
    GMODE_SKIRMISH         = 4,
    GMODE_NETWORK_CAMPAIGN = 5
};

// ==============================================================
//  Global state
// ==============================================================

static int  g_GameResult   = 0;
static int  g_GameMode     = 0;
static MenuState g_MenuState = MenuState::MenuIdle;
static int  GameFlags_EAC   = 0;
static bool GameFlags_Init  = false;

// ==============================================================
//  Palette (shared across menu screens)
// ==============================================================

static uint8_t g_palette[256][4];

static void LoadMenuPalette()
{
    const char* names[] = {
        "TEMPERAT.PAL", "temperat.pal", "temperat",
        "unitsno.pal", "unitsno",
        "anim.pal", "anim",
        "mousepal.pal", "mousepal",
        nullptr
    };
    void* pal_data = nullptr;
    for (int i = 0; names[i]; ++i) {
        pal_data = FileSystem::LoadFile(names[i], false);
        if (pal_data) { LOG_INFO("Loaded PAL: %s", names[i]); break; }
    }
    if (pal_data) {
        uint8_t* raw = static_cast<uint8_t*>(pal_data);
        for (int i = 0; i < 256; ++i) {
            g_palette[i][0] = raw[i * 3 + 0] << 2;
            g_palette[i][1] = raw[i * 3 + 1] << 2;
            g_palette[i][2] = raw[i * 3 + 2] << 2;
            g_palette[i][3] = 0;
        }
        free(pal_data);
        LOG_INFO("Palette loaded");
    } else {
        for (int i = 0; i < 256; ++i) {
            g_palette[i][0] = static_cast<uint8_t>(i);
            g_palette[i][1] = static_cast<uint8_t>(i);
            g_palette[i][2] = static_cast<uint8_t>(i);
        }
        LOG_WARN("No palette found in MIX");
    }
}

static bool PaletteLoaded()
{
    for (int i = 0; i < 256; ++i)
        if (g_palette[i][0] || g_palette[i][1] || g_palette[i][2])
            return true;
    return false;
}

// ==============================================================
//  Forward declarations
// ==============================================================

static MenuState MainMenu_Screen();
static MenuState Campaign_Screen(int);
static MenuState Multiplayer_Screen(int);
static void      Options_Screen();
static char      ShowExitDialog();
static bool      Game_Frame_Loop();
static bool      Game_Frame_Check();
static void      Main_Game_Frame();

// ==============================================================
//  AudioVideo_Update (IDA 0x406F70)
// ==============================================================

void AudioVideo_Update()
{
    // TODO: Movie, VocClass, ThemeClass, audio processing
}

// ==============================================================
//  Event_Dispatch (IDA 0x48D080)
// ==============================================================

char Event_Dispatch()
{
    AudioVideo_Update();
    return 0;
}

// ==============================================================
//  Dialog_MessageLoop (IDA 0x5D4D50)
// ==============================================================

void Dialog_MessageLoop()
{
    MSG msg;
    while (PeekMessageA(&msg, nullptr, 0, 0, PM_REMOVE)) {
        if (msg.message == WM_QUIT) break;
        TranslateMessage(&msg);
        DispatchMessageA(&msg);
    }
}

// ==============================================================
//  Dialog_PumpMessages (IDA 0x623120)
// ==============================================================

char Dialog_PumpMessages()
{
    Dialog_MessageLoop();
    if (!g_GameMode || g_GameMode == GMODE_NETWORK_CAMPAIGN)
        Event_Dispatch();
    return 0;
}

// ==============================================================
//  MainMenu_Screen (IDA 0x531CC0)
//  Renders menu via DirectDraw: SHP background + text buttons
// ==============================================================

struct MenuButton {
    int id;
    int x, y, w, h;
    const char* text;
    MenuState state;
};

static bool LoadMenuBackground(ShpImage& img)
{
    const char* names[] = {
        "Ra2ts_l", "ra2ts_l", "Ra2ts_l.shp", "ra2ts_l.shp",
        "Ra2ts_s", "ra2ts_s", "Ra2ts_s.shp", "ra2ts_s.shp",
        "ls800yr", "ls800yr.shp",
        "ls640yr", "ls640yr.shp",
        "ls800bg", "ls800bg.shp",
        "ls640bg", "ls640bg.shp",
        "logo", "logo.shp",
        "title", "title.shp",
        nullptr
    };
    void* data = nullptr;
    for (int i = 0; names[i]; ++i) {
        data = FileSystem::LoadFile(names[i], true);
        if (data) { LOG_INFO("Loaded SHP: %s", names[i]); break; }
    }
    if (!data) { LOG_WARN("No background SHP found"); return false; }

    bool ok = img.LoadFromMemory(static_cast<const uint8_t*>(data), 1073741824);
    free(data);
    LOG_INFO("SHP frames=%d size=%dx%d", img.GetFrameCount(), img.GetWidth(), img.GetHeight());
    return ok;
}

static MenuState MainMenu_Screen()
{
    DDrawContext* ctx = DDraw_GetContext();
    if (!ctx || !ctx->back_buffer) return MenuState::StartScenario;

    DSurface surf(ctx->width, ctx->height, true, false);
    if (!surf.Allocated) return MenuState::StartScenario;

    if (!PaletteLoaded()) LoadMenuPalette();

    ShpImage bg;
    bool has_bg = LoadMenuBackground(bg);

    TextRenderer text;
    text.Init(ctx->width, ctx->height);

    int cx = ctx->width / 2 - 100;
    int wb = 200, hb = 30, y0 = ctx->height / 2 - 50;
    MenuButton buttons[] = {
        { 0x683, cx, y0,         wb, hb, "Campaign",    MenuState::Campaign },
        { 1668,  cx, y0 + 40,    wb, hb, "Skirmish",    MenuState::Skirmish },
        { 0x578, cx, y0 + 80,    wb, hb, "Multiplayer", MenuState::Multiplayer },
        { 0x55C, cx, y0 + 120,   wb, hb, "Options",     MenuState::Options },
        { 0x3EE, cx, y0 + 180,   wb, hb, "Exit",        MenuState::ExitConfirm },
    };
    const int btn_count = 5;

    int frame = 0;
    int frame_counter = 0;
    MenuState result = MenuState::MenuIdle;
    bool done = false;

    while (!done) {
        // Render SHP background to offscreen surface
        surf.FillRect({0, 0, ctx->width, ctx->height}, 0x0000);

        if (has_bg && bg.GetFrameCount() > 0) {
            int bg_x = (ctx->width - bg.GetWidth()) / 2;
            int bg_y = (ctx->height - bg.GetHeight()) / 2;
            if (frame >= bg.GetFrameCount()) frame = 0;
            bg.RenderToSurface(&surf, frame, bg_x, bg_y, g_palette);
        }

        // Text: title, buttons, footer
        text.DrawText(&surf, cx, 20, "Yuri's Revenge", 255, 50, 50);
        for (int i = 0; i < btn_count; ++i)
            text.DrawText(&surf, buttons[i].x + 10, buttons[i].y + 4,
                          buttons[i].text, 255, 220, 50);
        text.DrawText(&surf, 10, ctx->height - 30, "RA2YR ReSource", 100, 100, 100);

        // Blit to back buffer
        DDSURFACEDESC2 desc = {};
        desc.dwSize = sizeof(desc);
        if (SUCCEEDED(ctx->back_buffer->Lock(nullptr, &desc, DDLOCK_WAIT, nullptr))) {
            DDSURFACEDESC2 src_desc = {};
            src_desc.dwSize = sizeof(src_desc);
            if (SUCCEEDED(surf.Surface->Lock(nullptr, &src_desc, DDLOCK_WAIT, nullptr))) {
                uint8_t* dst = static_cast<uint8_t*>(desc.lpSurface);
                uint8_t* src = static_cast<uint8_t*>(src_desc.lpSurface);
                for (int y = 0; y < ctx->height; ++y)
                    memcpy(dst + y * desc.lPitch, src + y * src_desc.lPitch, ctx->width * 2);
                surf.Surface->Unlock(nullptr);
            }
            ctx->back_buffer->Unlock(nullptr);
        }
        DDraw_Flip();

        // Animate
        ++frame_counter;
        if (has_bg && frame_counter >= 8) {
            frame_counter = 0;
            frame = (frame + 1) % bg.GetFrameCount();
        }

        // Input
        MSG msg;
        while (PeekMessageA(&msg, nullptr, 0, 0, PM_REMOVE)) {
            if (msg.message == WM_QUIT) {
                result = MenuState::StartScenario;
                done = true; break;
            }
            switch (msg.message) {
            case WM_KEYDOWN:
                if (static_cast<int>(msg.wParam) == VK_ESCAPE) {
                    result = MenuState::StartScenario;
                    done = true;
                }
                break;
            case WM_LBUTTONDOWN: {
                int mx = LOWORD(msg.lParam);
                int my = HIWORD(msg.lParam);
                for (int i = 0; i < btn_count; ++i) {
                    if (mx >= buttons[i].x && mx < buttons[i].x + buttons[i].w &&
                        my >= buttons[i].y && my < buttons[i].y + buttons[i].h) {
                        LOG_INFO("MainMenu: %s -> state %d", buttons[i].text,
                            static_cast<int>(buttons[i].state));
                        result = buttons[i].state;
                        done = true;
                        break;
                    }
                }
                break;
            }
            default:
                TranslateMessage(&msg);
                DispatchMessageA(&msg);
                break;
            }
        }
        if (!done) Event_Dispatch();
    }

    bg.Free();
    text.Shutdown();
    return result;
}

// ==============================================================
//  Stub screen functions
// ==============================================================

static MenuState Campaign_Screen(int)   { return MenuState::MenuIdle; }
static MenuState Multiplayer_Screen(int) { return MenuState::MenuIdle; }
static void      Options_Screen()        {}
static char      ShowExitDialog()        { return 1; }

// ==============================================================
//  Game frame stubs
// ==============================================================

static bool Game_Frame_Loop()   { return true; }
static bool Game_Frame_Check()  { return false; }
static void Main_Game_Frame()   { Event_Dispatch(); }

// ==============================================================
//  Menu_Select (IDA 0x52D9A0)
// ==============================================================

char Menu_Select()
{
    g_MenuState = MenuState::MenuIdle;
    g_GameMode  = 0;

    while (true) {
        Event_Dispatch();

        switch (g_MenuState) {
        case MenuState::Reset:
        case MenuState::MainMenu:
            g_MenuState = MenuState::MenuIdle;
            break;
        case MenuState::Campaign:
            g_MenuState = Campaign_Screen(1);
            break;
        case MenuState::Skirmish:
            g_GameMode = GMODE_SKIRMISH;
            g_MenuState = MenuState::NetworkGameFlow;
            Multiplayer_Screen(2);
            break;
        case MenuState::Multiplayer:
            g_GameMode = GMODE_MULTIPLAYER;
            g_MenuState = MenuState::NetworkGameFlow;
            Multiplayer_Screen(1);
            break;
        case MenuState::CampaignSub:
            g_MenuState = Campaign_Screen(1);
            break;
        case MenuState::Options:
            Options_Screen();
            g_MenuState = MenuState::MenuIdle;
            break;
        case MenuState::ExitConfirm:
            g_MenuState = ShowExitDialog() ? MenuState::StartScenario : MenuState::MenuIdle;
            break;
        case MenuState::StartScenario:
            Event_Dispatch();
            return 0;
        case MenuState::WOLInternet:
            Event_Dispatch();
            g_MenuState = MenuState::MenuIdle;
            Event_Dispatch();
            Event_Dispatch();
            return 1;
        case MenuState::SaveLoadGame:
            g_MenuState = MenuState::Campaign;
            break;
        case MenuState::QuickMatch:
            g_MenuState = MenuState::Campaign;
            break;
        case MenuState::NetworkGame5:
            g_GameMode = GMODE_NETWORK_CAMPAIGN;
            goto LABEL81;
        case MenuState::CampaignInit:
            g_MenuState = MenuState::CampaignSub;
            break;
        case MenuState::CampaignLoadCD:
            g_MenuState = MenuState::CampaignSub;
            break;
        case MenuState::CampaignIntro:
            Event_Dispatch();
            g_MenuState = MenuState::CampaignSub;
            break;
        case MenuState::NetworkGameFlow:
        case MenuState::NetworkGameFlow2:
            goto LABEL81;
        case MenuState::MenuIdle:
            g_MenuState = MainMenu_Screen();
            break;
        }
        continue;

    LABEL81:
        switch (g_GameMode) {
        case GMODE_MENU:
        case GMODE_CAMPAIGN:
        case GMODE_CAMPAIGN_SUB:
            g_MenuState = MenuState::MenuIdle;
            break;
        case GMODE_MULTIPLAYER: return 1;
        case GMODE_SKIRMISH:    g_MenuState = MenuState::NetworkGame5; break;
        case GMODE_NETWORK_CAMPAIGN: g_MenuState = MenuState::Campaign; break;
        }
    }
}

// ==============================================================
//  Main_Game (IDA 0x48CCC0)
// ==============================================================

void Main_Game()
{
    LOG_INFO("Main_Game: entering");

    int result;
    for (result = Menu_Select(); result; result = Menu_Select()) {
        LOG_INFO("Main_Game: Menu_Select=%d GameMode=%d", result, g_GameMode);
        GameFlags_EAC = 0;
        GameFlags_Init = true;
        while (true) {
            if (Game_Frame_Loop() && Game_Frame_Check()) break;
            Main_Game_Frame();
        }
        Event_Dispatch();
        LOG_INFO("Main_Game: game loop finished, back to menu");
    }
    LOG_INFO("Main_Game: exiting");
}

} // namespace gamemd
