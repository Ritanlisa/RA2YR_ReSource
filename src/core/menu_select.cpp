#include <windows.h>
#include <commctrl.h>
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

static int g_GameMode = 0;
static MenuState g_MenuState = MenuState::MenuIdle;
static int GameFlags_EAC = 0;
static bool GameFlags_Init = false;
static uint8_t g_palette[256][4];

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

// ---- menu layout from DIAGLOGEX template 0xE2 ----
// Dialog: 533×369 dlu, BINK (0,0) 304×266, buttons x=425 w=108 h=23
struct MenuLayout {
    int offsetX, offsetY;
    int bikX, bikY, bikW, bikH;
    int btnX, btnW, btnH;

    void Compute(int scrW, int scrH) {
        int dlgW = (scrW > 800) ? 800 : scrW;
        int dlgH = (scrH > 600) ? 600 : scrH;
        offsetX = (scrW - dlgW) / 2;
        offsetY = (scrH - dlgH) / 2;
        float dluX = (float)dlgW / 533.0f;
        float dluY = (float)dlgH / 369.0f;
        bikW = (int)(304.0f * dluX);
        bikH = (int)(266.0f * dluY);
        bikX = offsetX;
        bikY = offsetY;
        btnX = offsetX + (int)(425.0f * dluX);
        btnW = (int)(108.0f * dluX);
        btnH = (int)(23.0f * dluY);
    }
    int BtnY(int yDLU) const {
        float dluY = (float)((offsetY + (offsetY - (offsetY-600 > 0 ? 600 : 600)))  ) / 369.0f;
        // simpler: proportion
        int dlgH = 600; // original
        return offsetY + (int)((float)yDLU * ((float)dlgH / 369.0f * 0)); // wrong
    }
};

// ---- SHP button lookup (button00-04.shp from expandmd01.mix) ----
// XCC hash IDs: button00=0x0D2B157D, button01=0x304B3CCD, button02=0x77EB461D, button03=0x4A8B6FAD, button04=0xF8ABB3BD
// Button layout from template 0xE2: Campaign(1667,y=125), Skirmish(1668,y=152), Multiplayer(1400,y=179), Movies(1670,y=206), Options(1372,y=233), Exit(1006,y=330)

static const uint32_t kMenuBtnHashes[] = {
    0x0D2B157D, // button00.shp → Campaign
    0x77EB461D, // button02.shp → Skirmish (WWOnline)
    0x4A8B6FAD, // button03.shp → Multiplayer (Network)
    0x304B3CCD, // button01.shp → Movies/Options?
    0x304B3CCD, // button01.shp → Options
    0xF8ABB3BD, // button04.shp → Exit
};
static const int kMenuBtnY[]   = {125, 152, 179, 206, 233, 330};
static const MenuState kBtnStates[] = {
    MenuState::Campaign, MenuState::Skirmish, MenuState::Multiplayer,
    MenuState::CampaignSub, MenuState::Options, MenuState::ExitConfirm
};

static void DrawShpToBuffer(ShpImage* img, int frame, uint16_t* buf, int pitch,
                            int scrW, int scrH, int dx, int dy)
{
    if (!img || !buf) return;
    int iw = img->GetWidth(), ih = img->GetHeight();
    const uint8_t* src = img->GetPixelData(frame);
    if (!src) return;
    for (int y = 0; y < ih && dy+y < scrH; y++) {
        for (int x = 0; x < iw && dx+x < scrW; x++) {
            uint8_t ci = src[y * iw + x];
            if (ci == 0) continue; // transparent
            auto& p = g_palette[ci];
            uint16_t rgb = (uint16_t)((p[0] >> 3) << 11) | ((p[1] >> 2) << 5) | (p[2] >> 3);
            buf[(dy+y) * pitch + (dx+x)] = rgb;
        }
    }
}

// ---- MainMenu_Screen — Win32 dialog on DDraw surface (IDA 0x531CC0 + 0x531F60) ----
// Original: Dialog_Create(0xE2, MainMenu_DlgProc, 0) with DIALOGEX template
// Controls: 6 BUTTONs + 3 STATICs (BINK=1818, StatusBar=1685, Version=1821)

struct MainMenuData {
    MenuState* state;
    HWND      binkDlgItem;
};

// Button definitions from DIALOGEX template 0xE2
// (id, "CSF_Key", y_dlu, target_state)
static const struct { int id; const char* text; int yDLU; MenuState target; } kMenuButtons[] = {
    {1667, "Campaign",    125, MenuState::Campaign},      // GUI:SinglePlayer
    {1668, "Skirmish",    152, MenuState::Skirmish},       // GUI:WWOnline
    {1400, "Network",     179, MenuState::Multiplayer},    // GUI:Network
    {1670, "Movies",      206, MenuState::CampaignSub},    // GUI:MoviesAndCredits
    {1372, "Options",     233, MenuState::Options},        // GUI:Options
    {1006, "Exit Game",   330, MenuState::ExitConfirm},    // GUI:ExitGame
};

static INT_PTR CALLBACK MainMenu_DlgProc_Impl(HWND hDlg, UINT msg, WPARAM wParam, LPARAM lParam)
{
    auto* data = (MainMenuData*)GetWindowLongPtrA(hDlg, GWLP_USERDATA);

    if (msg == WM_ERASEBKGND)
        return TRUE;

    if (msg == WM_CTLCOLORBTN) {
        static HBRUSH s_btnBrush = CreateSolidBrush(RGB(48, 48, 72));
        HDC hdc = (HDC)wParam;
        SetTextColor(hdc, RGB(200, 200, 220));
        SetBkColor(hdc, RGB(48, 48, 72));
        SetBkMode(hdc, OPAQUE);
        return (INT_PTR)s_btnBrush;
    }

    if (msg == WM_CTLCOLORSTATIC) {
        HWND hCtrl = (HWND)lParam;
        DWORD id = GetDlgCtrlID(hCtrl);
        if (id == 1821) {
            SetTextColor((HDC)wParam, RGB(180, 180, 200));
            SetBkMode((HDC)wParam, TRANSPARENT);
            return (INT_PTR)GetStockObject(NULL_BRUSH);
        }
        SetBkMode((HDC)wParam, TRANSPARENT);
        return (INT_PTR)GetStockObject(NULL_BRUSH);
    }

    if (msg == WM_DRAWITEM) {
        auto* di = (DRAWITEMSTRUCT*)lParam;
        if (di->CtlType == ODT_BUTTON) {
            HDC dc = di->hDC;
            RECT& r = di->rcItem;
            int w = r.right - r.left, h = r.bottom - r.top;
            bool pressed = (di->itemState & ODS_SELECTED) != 0;
            bool hover   = (di->itemState & ODS_HOTLIGHT) != 0;

            COLORREF bg = pressed ? RGB(60, 60, 100) : (hover ? RGB(55, 55, 90) : RGB(48, 48, 72));
            COLORREF border = hover ? RGB(120, 140, 200) : RGB(80, 80, 120);
            HBRUSH bgBrush = CreateSolidBrush(bg);
            FillRect(dc, &r, bgBrush);
            DeleteObject(bgBrush);

            HPEN pen = CreatePen(PS_SOLID, 1, border);
            HPEN oldPen = (HPEN)SelectObject(dc, pen);
            HBRUSH nullBr = (HBRUSH)GetStockObject(NULL_BRUSH);
            HBRUSH oldBr = (HBRUSH)SelectObject(dc, nullBr);
            Rectangle(dc, r.left, r.top, r.right, r.bottom);
            SelectObject(dc, oldPen);
            SelectObject(dc, oldBr);
            DeleteObject(pen);

            if (pressed) OffsetRect(&r, 1, 1);

            char text[64];
            GetWindowTextA(di->hwndItem, text, sizeof(text));
            SetBkMode(dc, TRANSPARENT);
            SetTextColor(dc, RGB(200, 200, 220));
            HFONT font = (HFONT)GetStockObject(DEFAULT_GUI_FONT);
            HFONT oldFont = (HFONT)SelectObject(dc, font);
            DrawTextA(dc, text, -1, &r, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
            SelectObject(dc, oldFont);
            return TRUE;
        }
    }

    if (msg == WM_COMMAND) {
        WORD code = HIWORD(wParam);
        DWORD id = LOWORD(wParam);
        if (code == BN_CLICKED && data && data->state) {
            for (auto& btn : kMenuButtons) {
                if ((DWORD)btn.id == id) {
                    *data->state = btn.target;
                    return 0;
                }
            }
        }
    }

    if (msg == WM_CLOSE && data && data->binkDlgItem) {
        SendMessageA(data->binkDlgItem, BINKM_CLOSE, 0, 0);
    }

    return DefWindowProcA(hDlg, msg, wParam, lParam);
}

static MenuState MainMenu_Screen()
{
    DDrawContext* ctx = DDraw_GetContext();
    if (!ctx || !ctx->back_buffer) {
        LOG_ERROR("[MENU] DDraw not available");
        return MenuState::MenuIdle;
    }

    // Layout scales from 533×369 dialog units
    int dlgW = (ctx->width > 800) ? 800 : ctx->width;
    int dlgH = (ctx->height > 600) ? 600 : ctx->height;
    int offX = (ctx->width - dlgW) / 2;
    int offY = (ctx->height - dlgH) / 2;
    float dluX = (float)dlgW / 533.0f;
    float dluY = (float)dlgH / 369.0f;
    int bikX = offX, bikY = offY;
    int bikW = (int)(304.0f * dluX), bikH = (int)(266.0f * dluY);
    int btnX = offX + (int)(425.0f * dluX);
    int btnW = (int)(108.0f * dluX);
    int btnH = (int)(23.0f * dluY);

    // Register a temp window class for the dialog container
    static const char* DIALOG_CLASS = "RA2MainMenuDlg";
    WNDCLASSA wc = {};
    wc.style         = CS_HREDRAW | CS_VREDRAW;
    wc.lpfnWndProc   = DefWindowProcA;
    wc.hInstance     = g_hInstance;
    wc.hbrBackground = (HBRUSH)GetStockObject(NULL_BRUSH);
    wc.lpszClassName = DIALOG_CLASS;
    if (!GetClassInfoA(g_hInstance, DIALOG_CLASS, &wc))
        RegisterClassA(&wc);

    // Create child dialog window (no background — DDraw shows through)
    HWND hDlg = CreateWindowExA(0, DIALOG_CLASS, "", WS_CHILD | WS_CLIPCHILDREN | WS_CLIPSIBLINGS,
        offX, offY, dlgW, dlgH, g_hWnd, nullptr, g_hInstance, nullptr);
    if (!hDlg) {
        LOG_ERROR("[MENU] CreateWindowExA(DIALOG) failed: %d", GetLastError());
        return MenuState::MenuIdle;
    }

    // Static controls: BINK area (1818), StatusBar (1685), Version (1821)
    HWND hBink = CreateWindowExA(0, "STATIC", "",
        WS_CHILD | WS_VISIBLE, bikX - offX, bikY - offY, bikW, bikH, hDlg, (HMENU)1818, g_hInstance, nullptr);
    CreateWindowExA(0, "STATIC", "", WS_CHILD, 2, 355, 303, 12, hDlg, (HMENU)1685, g_hInstance, nullptr);
    HWND hVersion = CreateWindowExA(0, "STATIC", "Yuri's Revenge", WS_CHILD | WS_VISIBLE,
        425, 357, 108, 10, hDlg, (HMENU)1821, g_hInstance, nullptr);

    // Subclass BINK control
    SetWindowSubclass(hBink, BinkPlayerControl::WindowProc, 0, 0);
    SendMessageA(hBink, BINKM_INIT, 1, 0);

    // Load BINK file to disk for binkw32.dll
    const char* bikName = (ctx->width > 640) ? "ra2ts_l.bik" : "ra2ts_s.bik";
    uint32_t bikHash = (ctx->width > 640) ? 0x33665128 : 0xC1E6E166;
    void* bikData = FileSystem::LoadByHash(bikHash);
    if (bikData) {
        const auto* head = (const uint32_t*)bikData;
        uint32_t sz = head[1];
        if (sz < 100 || sz > 64*1024*1024) sz = 8*1024*1024;
        FILE* fp = nullptr;
        if (fopen_s(&fp, bikName, "wb") == 0 && fp) { fwrite(bikData, 1, sz, fp); fclose(fp); }
        free(bikData);
    }
    SendMessageA(hBink, BINKM_OPEN, 0, (LPARAM)bikName);

    // Create BUTTON controls
    for (auto& btn : kMenuButtons) {
        int by = (int)((float)btn.yDLU * dluY);
        CreateWindowExA(0, "BUTTON", btn.text,
            WS_CHILD | WS_VISIBLE | BS_OWNERDRAW | BS_NOTIFY,
            btnX - offX, by, btnW, btnH,
            hDlg, (HMENU)(INT_PTR)btn.id, g_hInstance, nullptr);
    }

    MenuState result = MenuState::MenuIdle;
    MainMenuData data = { &result, hBink };
    SetWindowLongPtrA(hDlg, GWLP_USERDATA, (LONG_PTR)&data);
    SetWindowLongPtrA(hDlg, GWLP_WNDPROC, (LONG_PTR)MainMenu_DlgProc_Impl);

    ShowWindow(hDlg, SW_SHOW);
    SetFocus(g_hWnd);

    int loopCount = 0;
    bool reachedEnd = false;

    while (!reachedEnd) {
        ++loopCount;

        // BINK frame advance (may throttle to 30 fps)
        BinkPlayerControl* bikCtrl = BinkPlayerControl::FromHwnd(hBink);
        bool newFrame = false;
        if (bikCtrl && bikCtrl->IsPlaying()) {
            BinkMovieHandle* movie = bikCtrl->Movie();
            if (movie) newFrame = movie->AdvanceFrame();
        }

        // Render BINK to DDraw back buffer (only on new frame or fallback)
        if (newFrame || !(bikCtrl && bikCtrl->IsPlaying())) {
            DDSURFACEDESC2 desc = {};
            desc.dwSize = sizeof(desc);
            if (SUCCEEDED(ctx->back_buffer->Lock(nullptr, &desc, DDLOCK_WAIT, nullptr))) {
                auto* buf = (uint16_t*)desc.lpSurface;
                int pitch = desc.lPitch / 2;

                if (bikCtrl && bikCtrl->IsPlaying()) {
                    BinkMovieHandle* m = bikCtrl->Movie();
                    if (m) m->RenderFrameRaw(desc.lpSurface, desc.lPitch, ctx->height, bikX, bikY);
                } else {
                    for (int y = 0; y < ctx->height; y++)
                        for (int x = 0; x < ctx->width; x++)
                            buf[y * pitch + x] = 0x1082;
                }

                ctx->back_buffer->Unlock(nullptr);
            }
            DDraw_Flip();
        }

        // Message pump — Win32 BUTTON controls handle their own rendering via GDI
        MSG msg;
        while (PeekMessageA(&msg, nullptr, 0, 0, PM_REMOVE)) {
            if (msg.message == WM_QUIT) { result = MenuState::ExitConfirm; reachedEnd = true; break; }
            if (msg.message == WM_KEYDOWN && msg.wParam == VK_ESCAPE) { result = MenuState::ExitConfirm; reachedEnd = true; break; }
            if (!IsDialogMessageA(hDlg, &msg)) {
                TranslateMessage(&msg); DispatchMessageA(&msg);
            }
        }
        Event_Dispatch();
        if (loopCount > 7200) break;
    }

    LOG_DEBUG("[MENU] MainMenu exit: result=%d loops=%d", (int)result, loopCount);

    if (hBink) {
        SendMessageA(hBink, BINKM_CLOSE, 0, 0);
    }
    DestroyWindow(hDlg);
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
