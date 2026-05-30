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
#include "gamemd/render/movie.hpp"
#include "gamemd/render/bink_control.hpp"
#include "gamemd/render/font_render.hpp"
#include "gamemd/system/file_system.hpp"
#include "gamemd/ui/gadget.hpp"

namespace gamemd {

enum class MenuState {
    Reset=-1, MainMenu=0, Campaign=1, Skirmish=2, Multiplayer=3, CampaignSub=4,
    Options=5, ExitConfirm=6, StartScenario=7, WOLInternet=8, SaveLoadGame=9,
    QuickMatch=10, NetworkGame5=11, CampaignInit=13, CampaignLoadCD=14,
    CampaignIntro=15, NetworkGameFlow=16, NetworkGameFlow2=17, MenuIdle=18
};

enum { GMODE_MENU=0, GMODE_CAMPAIGN=1, GMODE_CAMPAIGN_SUB=2, GMODE_INTERNET=3, GMODE_SKIRMISH=4, GMODE_SKIRMISH_SETUP=5 };

// DlgItem IDs from template 0xE2
enum {
    DLG_BINK_PLAYER    = 1818,
    DLG_VERSION_LABEL  = 1821,
    CMD_CAMPAIGN       = 1667,
    CMD_SKIRMISH       = 1668,
    CMD_MULTIPLAYER    = 1400,
    CMD_OPTIONS        = 1372,
    CMD_EXIT           = 1006,
    CMD_MOVIES         = 1670,
    CMD_GROUPBOX       = 1684,
    CMD_STATUSBAR      = 1685,
};

static int g_GameMode = 0;
static MenuState g_MenuState = MenuState::MenuIdle;
static int GameFlags_EAC = 0;
static bool GameFlags_Init = false;
static uint8_t g_palette[256][4];

static HWND g_menuDlg = nullptr;
static HWND g_binkCtrl = nullptr;
static HWND g_buttons[6] = {};
static MenuState g_menuResult = MenuState::MenuIdle;

// forward declarations
static MenuState MainMenu_Screen();
static MenuState Campaign_Screen(int);
static MenuState Multiplayer_Screen(int);
static MenuState Skirmish_Setup_Screen();
static void      Options_Screen_Dialog();
static char      ShowExitDialog();
static bool      Game_Frame_Loop();
static bool      Game_Frame_Check();
static void      Main_Game_Frame();

void AudioVideo_Update() {}
char Event_Dispatch() { AudioVideo_Update(); return 0; }

// ---- palette ----
static bool PaletteLoaded() {
    for (int i=0;i<256;i++) if (g_palette[i][0]||g_palette[i][1]||g_palette[i][2]) return true;
    return false;
}
static void LoadMenuPalette() {
    const char* names[]={"TEMPERAT.PAL","temperat.pal","temperat","unitsno.pal","unitsno","anim.pal","mousepal.pal",nullptr};
    void* d=nullptr;
    for(int i=0;names[i]&&!d;i++) d=FileSystem::LoadFile(names[i],false);
    if(!d) d=FileSystem::LoadFirstPalette();
    if(d){
        uint8_t* r=(uint8_t*)d;
        for(int j=0;j<256;j++){g_palette[j][0]=r[j*3]<<2;g_palette[j][1]=r[j*3+1]<<2;g_palette[j][2]=r[j*3+2]<<2;}
        free(d);LOG_INFO("Palette loaded");return;
    }
    LOG_WARN("No palette");
    for(int i=0;i<256;i++) g_palette[i][0]=g_palette[i][1]=g_palette[i][2]=(uint8_t)i;
}

// ---- dialog template 0xE2 layout conversion ----
// Dialog: 533×369 dialog units. Button area: x=425, all buttons 108×23.
// BINK: (0,0) 304×266. Version: (425,357) 108×10. StatusBar: (2,355) 303×12.
struct MenuLayout {
    int dialogW, dialogH;     // dialog size in dialog units (533, 369)
    int screenW, screenH;     // screen size in pixels
    int offsetX, offsetY;     // centering offset

    // pixel positions converted from dialog units at 8pt MS Sans Serif
    // hDialogUnit = avgCharWidth/4 ≈ 8/4*scale; vDialogUnit = charHeight/8 ≈ 13/8*scale
    // At original 800×600: 533×369 dlu → 533*(800/533?) ≈ 800px wide... 
    // Actually the original dialog fills the screen; dlu→px scales with font.
    // Simplified: use proportions. BINK 304/533≈57% width, 266/369≈72% height.

    int bikX, bikY, bikW, bikH;
    int btnX, btnW, btnH;

    void Compute(int scrW, int scrH) {
        screenW = scrW; screenH = scrH;

        // Dialog fills screen at 800×600, centered on larger screens
        // Original: DlgItem 1818 pos = ((nWidth-800)/2, (nHeight-600)/2) with NOSIZE
        // So BINK stays at 800×600 layout size, centered
        dialogW = (scrW > 800) ? 800 : scrW;
        dialogH = (scrH > 600) ? 600 : scrH;
        offsetX = (scrW - dialogW) / 2;
        offsetY = (scrH - dialogH) / 2;

        // BINK: 304×266 dialog units. Scale to pixels.
        // At 800×600: dialog=533×369 dlu. 1 dlu_X ≈ 800/533 ≈ 1.5px. 1 dlu_Y ≈ 600/369 ≈ 1.63px.
        // BINK px: 304*1.5=456px, 266*1.63=433px
        float dluX = (float)dialogW / 533.0f;
        float dluY = (float)dialogH / 369.0f;
        bikW = (int)(304.0f * dluX);
        bikH = (int)(266.0f * dluY);
        bikX = offsetX;
        bikY = offsetY;

        // Buttons: x=425 dlu, w=108, h=23
        btnX = offsetX + (int)(425.0f * dluX);
        btnW = (int)(108.0f * dluX);
        btnH = (int)(23.0f * dluY);
    }

    int BtnY(int yDLU) const { return offsetY + (int)((float)yDLU * (float)dialogH / 369.0f); }
};

// ---- DlgProc for the main menu dialog ----
static LRESULT CALLBACK MainMenuDlgProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    switch (msg) {
    case WM_COMMAND:
        switch (LOWORD(wParam)) {
        case CMD_CAMPAIGN:    g_menuResult = MenuState::Campaign; break;
        case CMD_SKIRMISH:    g_menuResult = MenuState::Skirmish; break;
        case CMD_MULTIPLAYER: g_menuResult = MenuState::Multiplayer; break;
        case CMD_OPTIONS:     g_menuResult = MenuState::Options; break;
        case CMD_MOVIES:      g_menuResult = MenuState::CampaignSub; break;
        case CMD_EXIT:        g_menuResult = MenuState::ExitConfirm; break;
        default: return 1;
        }
        DestroyWindow(hWnd);
        return 0;
    case WM_KEYDOWN:
        if (wParam == VK_ESCAPE) {
            g_menuResult = MenuState::ExitConfirm;
            DestroyWindow(hWnd);
            return 0;
        }
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    }
    return DefWindowProcA(hWnd, msg, wParam, lParam);
}

static HWND CreateMenuButton(HWND parent, int id, const char* text, int x, int y, int w, int h)
{
    return CreateWindowExA(0, "BUTTON", text,
        WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON | BS_TEXT,
        x, y, w, h, parent, (HMENU)(UINT_PTR)id, GetModuleHandleA(nullptr), nullptr);
}

// ---- MainMenu_Screen — uses Win32 dialog + subclassed BINK control ----
static MenuState MainMenu_Screen()
{
    DDrawContext* ctx = DDraw_GetContext();
    if (!ctx || !ctx->back_buffer) {
        LOG_ERROR("[MENU] DDraw not available");
        return MenuState::MenuIdle;
    }

    if (!PaletteLoaded()) LoadMenuPalette();

    MenuLayout lay;
    lay.Compute(ctx->width, ctx->height);
    LOG_DEBUG("[MENU] Layout: dialog=%d/%d offset=(%d,%d) bik=(%d,%d,%d,%d) btnX=%d",
              lay.dialogW, lay.dialogH, lay.offsetX, lay.offsetY,
              lay.bikX, lay.bikY, lay.bikW, lay.bikH, lay.btnX);

    // Register dialog window class
    WNDCLASSEXA wc = {};
    wc.cbSize = sizeof(wc);
    wc.lpfnWndProc = MainMenuDlgProc;
    wc.hInstance = GetModuleHandleA(nullptr);
    wc.lpszClassName = "RA2MenuDlg";
    wc.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
    RegisterClassExA(&wc);

    HWND dlg = CreateWindowExA(WS_EX_TOPMOST, "RA2MenuDlg", "",
        WS_POPUP | WS_VISIBLE,
        lay.offsetX, lay.offsetY, lay.dialogW, lay.dialogH,
        ctx->hwnd, nullptr, GetModuleHandleA(nullptr), nullptr);

    if (!dlg) {
        LOG_ERROR("[MENU] Failed to create dialog window, err=%lu", GetLastError());
        return MenuState::MenuIdle;
    }
    g_menuDlg = dlg;

    // Create BINK control (DlgItem 1818 — subclassed STATIC)
    g_binkCtrl = CreateWindowExA(0, "STATIC", "",
        WS_CHILD | WS_VISIBLE | SS_BITMAP,
        lay.bikX - lay.offsetX, lay.bikY - lay.offsetY, lay.bikW, lay.bikH,
        dlg, (HMENU)(UINT_PTR)DLG_BINK_PLAYER, GetModuleHandleA(nullptr), nullptr);

    if (g_binkCtrl) {
        // Subclass with BINK player
        SetWindowSubclass(g_binkCtrl, BinkPlayerControl::WindowProc, 0, 0);

        // BINKM_INIT: create BinkMovieHandle + DDraw surface
        SendMessageA(g_binkCtrl, BINKM_INIT, 1, 0);

        // BINKM_OPEN: open ra2ts_l.bik (wide) or ra2ts_s.bik (narrow)
        const char* bikName = (ctx->width > 640) ? "ra2ts_l.bik" : "ra2ts_s.bik";
        LOG_DEBUG("[MENU] Opening BINK '%s'...", bikName);

        // Try MIX → disk extraction first
        uint32_t bikHash = (ctx->width > 640) ? 0x33665128 : 0xC1E6E166;
        void* bikData = FileSystem::LoadByHash(bikHash);
        if (bikData) {
            uint32_t sz = *(const uint32_t*)((const uint8_t*)bikData + 4);
            if (sz < 100 || sz > 64*1024*1024) sz = 8*1024*1024;
            FILE* fp = nullptr;
            if (fopen_s(&fp, bikName, "wb") == 0 && fp) {
                fwrite(bikData, 1, sz, fp); fclose(fp);
            }
            free(bikData);
        }
        SendMessageA(g_binkCtrl, BINKM_OPEN, 0, (LPARAM)bikName);
    }

    // Create buttons from template 0xE2 layout — IDs: 1667(125),1668(152),1400(179),1670(206),1372(233),1006(330)
    struct BtnDef { int id; int yDLU; const char* text; };
    static const BtnDef btns[] = {
        {CMD_CAMPAIGN,     125, "Single Player"},
        {CMD_SKIRMISH,     152, "Skirmish"},
        {CMD_MULTIPLAYER,  179, "Multiplayer"},
        {CMD_MOVIES,       206, "Movies"},
        {CMD_OPTIONS,      233, "Options"},
        {CMD_EXIT,         330, "Exit"},
    };
    for (int i = 0; i < 6; i++) {
        int by = lay.BtnY(btns[i].yDLU) - lay.offsetY;
        g_buttons[i] = CreateMenuButton(dlg, btns[i].id, btns[i].text,
            lay.btnX - lay.offsetX, by, lay.btnW, lay.btnH);
    }

    ShowWindow(dlg, SW_SHOW);
    UpdateWindow(dlg);

    // === Main menu loop: render BINK + pump dialog messages ===
    g_menuResult = MenuState::MenuIdle;
    int loopCount = 0;

    while (g_menuResult == MenuState::MenuIdle) {
        ++loopCount;

        // Render BINK frame (into DDraw surface, matching sub_432E40)
        BinkPlayerControl* binkCtrl = BinkPlayerControl::FromHwnd(g_binkCtrl);
        if (binkCtrl && binkCtrl->IsPlaying()) {
            BinkMovieHandle* movie = binkCtrl->Movie();
            if (movie) {
                movie->AdvanceFrame();
                // Render BINK directly to back-buffer
                DDSURFACEDESC2 desc = {};
                desc.dwSize = sizeof(desc);
                if (SUCCEEDED(ctx->back_buffer->Lock(nullptr, &desc, DDLOCK_WAIT, nullptr))) {
                    movie->RenderFrameRaw(desc.lpSurface, desc.lPitch,
                                          ctx->height, lay.bikX, lay.bikY);
                    ctx->back_buffer->Unlock(nullptr);
                }
            }
        }

        // Fill button area with dark background
        if (!binkCtrl || !binkCtrl->IsPlaying()) {
            DDSURFACEDESC2 desc = {};
            desc.dwSize = sizeof(desc);
            if (SUCCEEDED(ctx->back_buffer->Lock(nullptr, &desc, DDLOCK_WAIT, nullptr))) {
                auto* buf = (uint16_t*)desc.lpSurface;
                int pitch = desc.lPitch / 2;
                for (int y = 0; y < ctx->height; y++)
                    for (int x = 0; x < ctx->width; x++)
                        buf[y * pitch + x] = 0x1082;
                ctx->back_buffer->Unlock(nullptr);
            }
        }

        DDraw_Flip();

        // Pump messages
        MSG msg;
        while (PeekMessageA(&msg, nullptr, 0, 0, PM_REMOVE)) {
            if (msg.message == WM_QUIT) {
                g_menuResult = MenuState::ExitConfirm;
                break;
            }
            TranslateMessage(&msg);
            DispatchMessageA(&msg);
        }
        Event_Dispatch();

        if (loopCount > 3600) break; // 60s timeout
    }

    LOG_DEBUG("[MENU] MainMenu exit: result=%d loops=%d", (int)g_menuResult, loopCount);

    // Cleanup BINK
    if (g_binkCtrl) {
        SendMessageA(g_binkCtrl, BINKM_CLOSE, 0, 0);
        DestroyWindow(g_binkCtrl);
        g_binkCtrl = nullptr;
    }
    if (dlg) {
        DestroyWindow(dlg);
        g_menuDlg = nullptr;
    }
    for (int i = 0; i < 6; i++) g_buttons[i] = nullptr;
    UnregisterClassA("RA2MenuDlg", GetModuleHandleA(nullptr));

    MenuState result = g_menuResult;
    g_menuResult = MenuState::MenuIdle;
    return result;
}

// ---- Campaign_Screen (IDA 0x60D380) ----
static MenuState Campaign_Screen(int arg) {
    DDrawContext* ctx = DDraw_GetContext();
    if (!ctx || !ctx->back_buffer) return MenuState::MenuIdle;

    DialogClass dlg(0, 0, ctx->width, ctx->height);
    int cx = ctx->width / 2 - 100;
    int y0 = ctx->height / 2 - 110;

    TextButtonClass btnLoad(1673, "Load Game", cx, y0);
    TextButtonClass btnNew(1674, "New Campaign", cx, y0 + 40);
    TextButtonClass btnStart(1672, "Start Scenario", cx, y0 + 80);
    TextButtonClass btnSkirmish(1401, "Skirmish", cx, y0 + 120);
    TextButtonClass btnBack(1670, "Back", cx, y0 + 180);
    LabelClass lblTitle(0, "Campaign Menu", cx, y0 - 30, 255, 255, 100);

    MenuState result = MenuState::MenuIdle;
    btnLoad.Callback  = [&]() { result = MenuState::WOLInternet; dlg.m_finished = true; };
    btnNew.Callback   = [&]() { result = MenuState::SaveLoadGame; dlg.m_finished = true; };
    btnStart.Callback = [&]() { result = MenuState::StartScenario; dlg.m_finished = true; };
    btnSkirmish.Callback = [&]() { g_GameMode = GMODE_SKIRMISH_SETUP; result = MenuState::NetworkGame5; dlg.m_finished = true; };
    btnBack.Callback  = [&]() { result = MenuState::MenuIdle; dlg.m_finished = true; };

    dlg.AddGadget(&lblTitle);
    dlg.AddGadget(&btnLoad); dlg.AddGadget(&btnNew);
    dlg.AddGadget(&btnStart); dlg.AddGadget(&btnSkirmish);
    dlg.AddGadget(&btnBack);

    DSurface dlgSurf(ctx->width, ctx->height, false, false);
    TextRenderer text; text.Init(ctx->width, ctx->height);

    while (!dlg.IsFinished()) {
        MSG msg;
        while (PeekMessageA(&msg, nullptr, 0, 0, PM_REMOVE)) {
            if (msg.message == WM_QUIT) return MenuState::StartScenario;
            if (msg.message == WM_KEYDOWN && msg.wParam == VK_ESCAPE) { dlg.m_finished = true; break; }
            if (msg.message == WM_LBUTTONDOWN) dlg.OnMouseClick(LOWORD(msg.lParam), HIWORD(msg.lParam));
            else { TranslateMessage(&msg); DispatchMessageA(&msg); }
        }
        dlg.OnRender(&dlgSurf, &text);
        ctx->back_buffer->Blt(nullptr, dlgSurf.Surface, nullptr, DDBLT_WAIT, nullptr);
        DDraw_Flip();
        Event_Dispatch();
    }
    return result;
}

// ---- Options_Screen_Dialog ----
static void Options_Screen_Dialog() {
    DDrawContext* ctx = DDraw_GetContext();
    if (!ctx || !ctx->back_buffer) return;

    DialogClass dlg(0, 0, ctx->width, ctx->height);
    int cx = ctx->width / 2 - 120;
    int y0 = ctx->height / 2 - 150;

    static int g_Speed = 2, g_Scroll = 0, g_MCVDeploy = 1, g_SoundVol = 7, g_MusicVol = 7;
    LabelClass lblTitle(0, "Options", cx + 20, y0, 255, 255, 100);
    LabelClass lblSpeed(0, "Game Speed", cx, y0 + 50, 180, 180, 180);
    TextButtonClass btnSpeed0(1295, "< Slower", cx, y0 + 70, 100, 28);
    TextButtonClass btnSpeed1(0, "Faster >", cx + 140, y0 + 70, 100, 28);
    LabelClass lblSpeedVal(0, "", cx + 100, y0 + 76, 255, 255, 255);

    LabelClass lblMCV(0, "MCV Auto-Deploy", cx, y0 + 110, 180, 180, 180);
    TextButtonClass btnMCV(1540, "", cx, y0 + 130, 200, 28);
    LabelClass lblScroll(0, "Scroll Mode", cx, y0 + 170, 180, 180, 180);
    TextButtonClass btnScroll(1537, "", cx, y0 + 190, 200, 28);
    LabelClass lblSound(0, "Sound Volume", cx, y0 + 230, 180, 180, 180);
    TextButtonClass btnSoundDown(0, "<", cx, y0 + 250, 40, 28);
    TextButtonClass btnSoundUp(0, ">", cx + 150, y0 + 250, 40, 28);
    LabelClass lblSoundVal(0, "", cx + 50, y0 + 256, 255, 255, 255);
    LabelClass lblMusic(0, "Music Volume", cx, y0 + 290, 180, 180, 180);
    TextButtonClass btnMusicDown(0, "<", cx, y0 + 310, 40, 28);
    TextButtonClass btnMusicUp(0, ">", cx + 150, y0 + 310, 40, 28);
    LabelClass lblMusicVal(0, "", cx + 50, y0 + 316, 255, 255, 255);
    TextButtonClass btnOK(0, "OK", cx, y0 + 360, 90, 32);
    TextButtonClass btnCancel(0, "Cancel", cx + 150, y0 + 360, 90, 32);

    int saveSpeed = g_Speed, saveScroll = g_Scroll, saveMCV = g_MCVDeploy;
    int saveSound = g_SoundVol, saveMusic = g_MusicVol;

    auto updateLabels = [&]() {
        static char buf[32];
        sprintf(buf, "%d / 4", g_Speed); lblSpeedVal.Text = buf;
        btnMCV.Text = g_MCVDeploy ? "Enabled" : "Disabled";
        btnScroll.Text = g_Scroll ? "Screen Edge" : "Middle Mouse";
        sprintf(buf, "%d / 10", g_SoundVol); lblSoundVal.Text = buf;
        sprintf(buf, "%d / 10", g_MusicVol); lblMusicVal.Text = buf;
    };
    updateLabels();

    btnSpeed0.Callback = [&]() { if (g_Speed > 0) g_Speed--; updateLabels(); };
    btnSpeed1.Callback = [&]() { if (g_Speed < 4) g_Speed++; updateLabels(); };
    btnMCV.Callback = [&]() { g_MCVDeploy = !g_MCVDeploy; updateLabels(); };
    btnScroll.Callback = [&]() { g_Scroll = !g_Scroll; updateLabels(); };
    btnSoundDown.Callback = [&]() { if (g_SoundVol > 0) g_SoundVol--; updateLabels(); };
    btnSoundUp.Callback = [&]() { if (g_SoundVol < 10) g_SoundVol++; updateLabels(); };
    btnMusicDown.Callback = [&]() { if (g_MusicVol > 0) g_MusicVol--; updateLabels(); };
    btnMusicUp.Callback = [&]() { if (g_MusicVol < 10) g_MusicVol++; updateLabels(); };
    btnOK.Callback = [&]() { dlg.m_finished = true; };
    btnCancel.Callback = [&]() {
        g_Speed = saveSpeed; g_Scroll = saveScroll; g_MCVDeploy = saveMCV;
        g_SoundVol = saveSound; g_MusicVol = saveMusic;
        dlg.m_finished = true;
    };

    dlg.AddGadget(&lblTitle);
    dlg.AddGadget(&lblSpeed); dlg.AddGadget(&btnSpeed0); dlg.AddGadget(&btnSpeed1); dlg.AddGadget(&lblSpeedVal);
    dlg.AddGadget(&lblMCV); dlg.AddGadget(&btnMCV);
    dlg.AddGadget(&lblScroll); dlg.AddGadget(&btnScroll);
    dlg.AddGadget(&lblSound); dlg.AddGadget(&btnSoundDown); dlg.AddGadget(&btnSoundUp); dlg.AddGadget(&lblSoundVal);
    dlg.AddGadget(&lblMusic); dlg.AddGadget(&btnMusicDown); dlg.AddGadget(&btnMusicUp); dlg.AddGadget(&lblMusicVal);
    dlg.AddGadget(&btnOK); dlg.AddGadget(&btnCancel);

    DSurface dlgSurf(ctx->width, ctx->height, false, false);
    TextRenderer text; text.Init(ctx->width, ctx->height);

    while (!dlg.IsFinished()) {
        MSG msg;
        while (PeekMessageA(&msg, nullptr, 0, 0, PM_REMOVE)) {
            if (msg.message == WM_QUIT) return;
            if (msg.message == WM_KEYDOWN && msg.wParam == VK_ESCAPE) { dlg.m_finished = true; break; }
            if (msg.message == WM_LBUTTONDOWN) dlg.OnMouseClick(LOWORD(msg.lParam), HIWORD(msg.lParam));
            else { TranslateMessage(&msg); DispatchMessageA(&msg); }
        }
        dlg.OnRender(&dlgSurf, &text);
        ctx->back_buffer->Blt(nullptr, dlgSurf.Surface, nullptr, DDBLT_WAIT, nullptr);
        DDraw_Flip();
        Event_Dispatch();
    }
}

// ---- Multiplayer_Screen ----
static MenuState Multiplayer_Screen(int mode) { LOG_INFO("Multiplayer: mode=%d", mode); return MenuState::MenuIdle; }

// ---- Skirmish_Setup_Screen ----
static MenuState Skirmish_Setup_Screen() {
    DDrawContext* ctx = DDraw_GetContext();
    if (!ctx || !ctx->back_buffer) return MenuState::MenuIdle;

    DialogClass dlg(0, 0, ctx->width, ctx->height);
    int cx = ctx->width / 2 - 100;
    int y0 = ctx->height / 2 - 100;

    TextButtonClass btnStart(1559, "Start Game", cx, y0);
    TextButtonClass btnCancel(1472, "Cancel", cx, y0 + 50);
    LabelClass lblTitle(0, "Skirmish Setup", cx, y0 - 30, 255, 255, 100);

    MenuState result = MenuState::Campaign;
    btnStart.Callback = [&]() { result = MenuState::Campaign; dlg.m_finished = true; };
    btnCancel.Callback = [&]() { result = MenuState::MenuIdle; dlg.m_finished = true; };

    dlg.AddGadget(&lblTitle);
    dlg.AddGadget(&btnStart); dlg.AddGadget(&btnCancel);

    DSurface dlgSurf(ctx->width, ctx->height, false, false);
    TextRenderer text; text.Init(ctx->width, ctx->height);

    while (!dlg.IsFinished()) {
        MSG msg;
        while (PeekMessageA(&msg, nullptr, 0, 0, PM_REMOVE)) {
            if (msg.message == WM_QUIT) return MenuState::StartScenario;
            if (msg.message == WM_KEYDOWN && msg.wParam == VK_ESCAPE) { dlg.m_finished = true; result = MenuState::MenuIdle; break; }
            if (msg.message == WM_LBUTTONDOWN) dlg.OnMouseClick(LOWORD(msg.lParam), HIWORD(msg.lParam));
            else { TranslateMessage(&msg); DispatchMessageA(&msg); }
        }
        dlg.OnRender(&dlgSurf, &text);
        ctx->back_buffer->Blt(nullptr, dlgSurf.Surface, nullptr, DDBLT_WAIT, nullptr);
        DDraw_Flip();
        Event_Dispatch();
    }
    return result;
}

// ---- ShowExitDialog ----
static char ShowExitDialog() {
    DDrawContext* ctx = DDraw_GetContext();
    if (!ctx || !ctx->back_buffer) return 1;

    DialogClass dlg(0, 0, ctx->width, ctx->height);
    int cx = ctx->width / 2 - 100;
    int y0 = ctx->height / 2 - 40;

    LabelClass lblTitle(0, "Are you sure you want to quit?", cx - 20, y0, 255, 200, 200);
    TextButtonClass btnYes(0, "Yes", cx, y0 + 40, 90, 32);
    TextButtonClass btnNo(0, "No", cx + 110, y0 + 40, 90, 32);

    char result = 0;
    btnYes.Callback = [&]() { result = 1; dlg.m_finished = true; };
    btnNo.Callback = [&]() { result = 0; dlg.m_finished = true; };

    dlg.AddGadget(&lblTitle);
    dlg.AddGadget(&btnYes); dlg.AddGadget(&btnNo);

    DSurface dlgSurf(ctx->width, ctx->height, false, false);
    TextRenderer text; text.Init(ctx->width, ctx->height);

    while (!dlg.IsFinished()) {
        MSG msg;
        while (PeekMessageA(&msg, nullptr, 0, 0, PM_REMOVE)) {
            if (msg.message == WM_QUIT) { result = 1; return result; }
            if (msg.message == WM_KEYDOWN && msg.wParam == VK_ESCAPE) { result = 0; dlg.m_finished = true; break; }
            if (msg.message == WM_LBUTTONDOWN) dlg.OnMouseClick(LOWORD(msg.lParam), HIWORD(msg.lParam));
            else { TranslateMessage(&msg); DispatchMessageA(&msg); }
        }
        dlg.OnRender(&dlgSurf, &text);
        ctx->back_buffer->Blt(nullptr, dlgSurf.Surface, nullptr, DDBLT_WAIT, nullptr);
        DDraw_Flip();
        Event_Dispatch();
    }
    return result;
}

// ---- stubs ----
static bool Game_Frame_Loop(){return true;}
static bool Game_Frame_Check(){return false;}
static void Main_Game_Frame(){Event_Dispatch();}

// ---- Menu_Select (IDA 0x52D9A0) ----
char Menu_Select(){
    g_MenuState=MenuState::MenuIdle;g_GameMode=0;
    while(true){
        Event_Dispatch();
        switch(g_MenuState){
        case MenuState::Reset: case MenuState::MainMenu: g_MenuState=MenuState::MenuIdle; break;
        case MenuState::Campaign: g_MenuState=Campaign_Screen(1); break;
        case MenuState::Skirmish: g_GameMode=GMODE_SKIRMISH; g_MenuState=MenuState::NetworkGameFlow; Multiplayer_Screen(2); break;
        case MenuState::Multiplayer: g_GameMode=GMODE_INTERNET; g_MenuState=MenuState::NetworkGameFlow; Multiplayer_Screen(1); break;
        case MenuState::CampaignSub: g_MenuState=Campaign_Screen(1); break;
        case MenuState::Options: Options_Screen_Dialog(); g_MenuState=MenuState::MenuIdle; break;
        case MenuState::ExitConfirm: g_MenuState=ShowExitDialog()?MenuState::StartScenario:MenuState::MenuIdle; break;
        case MenuState::StartScenario: Event_Dispatch(); return 0;
        case MenuState::WOLInternet: Event_Dispatch(); g_MenuState=MenuState::MenuIdle; Event_Dispatch(); Event_Dispatch(); return 1;
        case MenuState::SaveLoadGame: g_MenuState=MenuState::Campaign; break;
        case MenuState::QuickMatch: g_MenuState=MenuState::Campaign; break;
        case MenuState::NetworkGame5: g_GameMode=GMODE_SKIRMISH_SETUP; goto L81;
        case MenuState::CampaignInit: g_MenuState=MenuState::CampaignSub; break;
        case MenuState::CampaignLoadCD: g_MenuState=MenuState::CampaignSub; break;
        case MenuState::CampaignIntro: Event_Dispatch(); g_MenuState=MenuState::CampaignSub; break;
        case MenuState::NetworkGameFlow: case MenuState::NetworkGameFlow2: goto L81;
        case MenuState::MenuIdle: g_MenuState=MainMenu_Screen(); break;
        }continue;
    L81:switch(g_GameMode){
        case GMODE_MENU: g_MenuState=MenuState::MenuIdle; break;
        case GMODE_CAMPAIGN: case GMODE_CAMPAIGN_SUB: return 1;
        case GMODE_INTERNET: return 1;
        case GMODE_SKIRMISH: g_MenuState=Skirmish_Setup_Screen(); break;
        case GMODE_SKIRMISH_SETUP: g_MenuState=Skirmish_Setup_Screen(); break;
        }
    }
}

void Main_Game(){
    LOG_INFO("Main_Game: entering");
    int r;
    for(r=Menu_Select();r;r=Menu_Select()){
        LOG_INFO("Menu_Select=%d GameMode=%d",r,g_GameMode);
        GameFlags_EAC=0;GameFlags_Init=true;
        while(true){if(Game_Frame_Loop()&&Game_Frame_Check())break;Main_Game_Frame();}
        Event_Dispatch();
    }
    LOG_INFO("Main_Game: exiting");
}

} // namespace gamemd
