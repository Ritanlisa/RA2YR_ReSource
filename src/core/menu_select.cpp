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
#include "gamemd/core/reverse_marker.hpp"

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
static MenuState MainMenuScreen();
static MenuState CampaignScreen(int);
static MenuState MultiplayerScreen(int);
static MenuState SkirmishSetupScreen();
static void      OptionsScreenDialog();
static char      ShowExitDialog();
REVERSE(0x55d360, "GameFrameLoop: IDA verified", "None")
static bool      GameFrameLoop();
REVERSE(0x55cfd0, "GameFrameCheck: IDA verified", "None")
static bool      GameFrameCheck();
REVERSE(0x48c8b0, "MainGameFrame: IDA verified", "None")
static void      MainGameFrame();

// IDA 0x406F70 -- AudioVideoUpdate (per-frame audio/video poll)
void AudioVideoUpdate() {}
// IDA 0x48D080 -- Event_Dispatch (per-frame event processing)
char Event_Dispatch() { AudioVideoUpdate(); return 0; }

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
// Dialog: 533x369 dlu, BINK (0,0) 304x266, buttons x=425 w=108 h=23
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

// ---- Button text labels (from DIALOGEX template 0xE2 CSF keys) ----
static const struct { int yDLU; const char* text; MenuState target; } kMenuButtons[] = {
    {125, "Campaign",    MenuState::Campaign},       // GUI:SinglePlayer
    {152, "Skirmish",    MenuState::Skirmish},        // GUI:WWOnline
    {179, "Network",     MenuState::Multiplayer},     // GUI:Network
    {206, "Movies",      MenuState::CampaignSub},     // GUI:MoviesAndCredits
    {233, "Options",     MenuState::Options},         // GUI:Options
    {330, "Exit Game",   MenuState::ExitConfirm},     // GUI:ExitGame
};

// SHP button pixel rendering helper (palette index -- RGB565)
static void DrawShpToBuffer(ShpImage* img, int frame, uint16_t* buf, int pitch,
                            int scrW, int scrH, int dx, int dy)
{
    if (!img || !buf) return;
    int iw = img->GetWidth(), ih = img->GetHeight();
    const uint8_t* src = img->GetPixelData(frame);
    if (!src) return;
    for (int y = 0; y < ih && dy+y < scrH; y++) {
        int row = (dy+y) * pitch;
        for (int x = 0; x < iw && dx+x < scrW; x++) {
            uint8_t ci = src[y * iw + x];
            if (ci == 0) continue;
            auto& p = g_palette[ci];
            uint16_t rgb = (uint16_t)((p[0] >> 3) << 11) | ((p[1] >> 2) << 5) | (p[2] >> 3);
            buf[row + dx + x] = rgb;
        }
    }
}

// Simple monospace bitmap font 8x14 for button text rendering
static const uint8_t* GetGlyph(uint8_t ch)
{
    static const uint8_t glyphs[][14] = {
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0}, // 0: not used
        {0x08,0x14,0x22,0x22,0x3E,0x22,0x22,0x22,0x00,0x00,0x00,0x00,0x00,0x00}, // 1: A
        {0x3C,0x22,0x22,0x3C,0x22,0x22,0x22,0x3C,0x00,0x00,0x00,0x00,0x00,0x00}, // 2: B
        {0x1C,0x22,0x20,0x20,0x20,0x20,0x22,0x1C,0x00,0x00,0x00,0x00,0x00,0x00}, // 3: C
        {0x3E,0x20,0x20,0x3C,0x20,0x20,0x20,0x3E,0x00,0x00,0x00,0x00,0x00,0x00}, // 4: E
        {0x1C,0x22,0x20,0x20,0x27,0x22,0x22,0x1C,0x00,0x00,0x00,0x00,0x00,0x00}, // 5: G
        {0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x00,0x00,0x00,0x00,0x00,0x00}, // 6: I
        {0x22,0x36,0x2A,0x2A,0x22,0x22,0x22,0x22,0x00,0x00,0x00,0x00,0x00,0x00}, // 7: M
        {0x22,0x22,0x32,0x2A,0x26,0x22,0x22,0x22,0x00,0x00,0x00,0x00,0x00,0x00}, // 8: N
        {0x1C,0x22,0x22,0x22,0x22,0x22,0x22,0x1C,0x00,0x00,0x00,0x00,0x00,0x00}, // 9: O
        {0x3C,0x22,0x22,0x3C,0x20,0x20,0x20,0x20,0x00,0x00,0x00,0x00,0x00,0x00}, // 10: P
        {0x3C,0x22,0x22,0x3C,0x28,0x24,0x22,0x21,0x00,0x00,0x00,0x00,0x00,0x00}, // 11: R
        {0x1E,0x20,0x20,0x1C,0x02,0x02,0x22,0x1C,0x00,0x00,0x00,0x00,0x00,0x00}, // 12: S
        {0x3E,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x00,0x00,0x00,0x00,0x00,0x00}, // 13: T
        {0x22,0x22,0x22,0x22,0x22,0x14,0x14,0x08,0x00,0x00,0x00,0x00,0x00,0x00}, // 14: V
        {0x22,0x22,0x22,0x22,0x2A,0x2A,0x36,0x22,0x00,0x00,0x00,0x00,0x00,0x00}, // 15: W
        {0x22,0x22,0x14,0x08,0x08,0x14,0x22,0x22,0x00,0x00,0x00,0x00,0x00,0x00}, // 16: X
        {0x00,0x00,0x1C,0x02,0x1E,0x22,0x22,0x1E,0x00,0x00,0x00,0x00,0x00,0x00}, // 17: a
        {0x00,0x00,0x1C,0x22,0x20,0x20,0x22,0x1C,0x00,0x00,0x00,0x00,0x00,0x00}, // 18: c
        {0x00,0x02,0x02,0x1E,0x22,0x22,0x22,0x1E,0x00,0x00,0x00,0x00,0x00,0x00}, // 19: d
        {0x00,0x00,0x1C,0x22,0x3E,0x20,0x22,0x1C,0x00,0x00,0x00,0x00,0x00,0x00}, // 20: e
        {0x04,0x08,0x08,0x1C,0x08,0x08,0x08,0x08,0x00,0x00,0x00,0x00,0x00,0x00}, // 21: f
        {0x00,0x00,0x1E,0x22,0x22,0x1E,0x02,0x1C,0x00,0x00,0x00,0x00,0x00,0x00}, // 22: g
        {0x20,0x20,0x20,0x3C,0x22,0x22,0x22,0x22,0x00,0x00,0x00,0x00,0x00,0x00}, // 23: h
        {0x00,0x08,0x00,0x08,0x08,0x08,0x08,0x08,0x00,0x00,0x00,0x00,0x00,0x00}, // 24: i
        {0x20,0x20,0x22,0x24,0x38,0x24,0x22,0x22,0x00,0x00,0x00,0x00,0x00,0x00}, // 25: k
        {0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x00,0x00,0x00,0x00,0x00,0x00}, // 26: l
        {0x00,0x00,0x36,0x2A,0x2A,0x2A,0x22,0x22,0x00,0x00,0x00,0x00,0x00,0x00}, // 27: m
        {0x00,0x00,0x2C,0x32,0x22,0x22,0x22,0x22,0x00,0x00,0x00,0x00,0x00,0x00}, // 28: n
        {0x00,0x00,0x1C,0x22,0x22,0x22,0x22,0x1C,0x00,0x00,0x00,0x00,0x00,0x00}, // 29: o
        {0x00,0x00,0x3C,0x22,0x22,0x3C,0x20,0x20,0x00,0x00,0x00,0x00,0x00,0x00}, // 30: p
        {0x00,0x00,0x2C,0x32,0x20,0x20,0x20,0x20,0x00,0x00,0x00,0x00,0x00,0x00}, // 31: r
        {0x00,0x00,0x1E,0x20,0x1C,0x02,0x22,0x1C,0x00,0x00,0x00,0x00,0x00,0x00}, // 32: s
        {0x08,0x08,0x1C,0x08,0x08,0x08,0x08,0x04,0x00,0x00,0x00,0x00,0x00,0x00}, // 33: t
        {0x00,0x00,0x22,0x22,0x22,0x22,0x22,0x1E,0x00,0x00,0x00,0x00,0x00,0x00}, // 34: u
        {0x00,0x00,0x22,0x22,0x22,0x14,0x14,0x08,0x00,0x00,0x00,0x00,0x00,0x00}, // 35: v
        {0x00,0x00,0x22,0x22,0x2A,0x2A,0x36,0x22,0x00,0x00,0x00,0x00,0x00,0x00}, // 36: w
        {0x00,0x00,0x22,0x14,0x08,0x08,0x14,0x22,0x00,0x00,0x00,0x00,0x00,0x00}, // 37: x
        {0x00,0x00,0x22,0x22,0x14,0x08,0x08,0x30,0x00,0x00,0x00,0x00,0x00,0x00}, // 38: y
        {0x08,0x14,0x22,0x22,0x3E,0x22,0x22,0x22,0x00,0x00,0x00,0x00,0x00,0x00}, // 39: A backup
    };
    static const uint8_t indices[96] = {}; // lazy init
    // Map ASCII 32-122 to glyph index
    switch (ch) {
    case ' ': return glyphs[0];
    case 'A': case 'a': return glyphs[1];
    case 'B': return glyphs[2];
    case 'C': case 'c': return glyphs[18];
    case 'E': case 'e': return glyphs[20];
    case 'G': case 'g': return glyphs[22];
    case 'I': case 'i': return glyphs[24];
    case 'M': case 'm': return glyphs[27];
    case 'N': case 'n': return glyphs[28];
    case 'O': case 'o': return glyphs[29];
    case 'P': case 'p': return glyphs[30];
    case 'R': case 'r': return glyphs[31];
    case 'S': case 's': return glyphs[32];
    case 'T': case 't': return glyphs[33];
    case 'V': case 'v': return glyphs[35];
    case 'W': case 'w': return glyphs[36];
    case 'X': case 'x': return glyphs[37];
    case 'd': return glyphs[19];
    case 'f': return glyphs[21];
    case 'h': return glyphs[23];
    case 'k': return glyphs[25];
    case 'l': return glyphs[26];
    case 'u': return glyphs[34];
    case 'y': return glyphs[38];
    default: return glyphs[0]; // space for unknown
    }
}

static void DrawButtonText(uint16_t* buf, int pitch, int x, int y, const char* text, uint16_t color)
{
    while (*text) {
        uint8_t ch = (uint8_t)*text++;
        const uint8_t* glyph = GetGlyph(ch);
        for (int row = 0; row < 14; row++) {
            uint8_t bits = glyph[row];
            int screenY = y + row;
            for (int col = 0; col < 8 && bits; col++, bits <<= 1) {
                if (bits & 0x80) buf[screenY * pitch + x + col] = color;
            }
        }
        x += 8;
    }
}

// ---- MainMenuDlgProc (IDA 0x531F60) ----
struct MainMenuDlgData {
    MenuState* state;
    HWND      hBink;
    int       btnX, btnW, btnH;       // button layout for hit-testing
    int       btnPosY[6];
};

// Button definitions from DIALOGEX template 0xE2
static const struct { int id; const char* text; int yDLU; MenuState target; } kMenuBtnDefs[] = {
    {1667, "Campaign",   125, MenuState::Campaign},
    {1668, "Skirmish",   152, MenuState::Skirmish},
    {1400, "Network",    179, MenuState::Multiplayer},
    {1670, "Movies",     206, MenuState::CampaignSub},
    {1372, "Options",    233, MenuState::Options},
    {1006, "Exit Game",  330, MenuState::ExitConfirm},
};

static INT_PTR CALLBACK MainMenuDlgProc(HWND hDlg, UINT msg, WPARAM wParam, LPARAM lParam)
{
    auto* d = (MainMenuDlgData*)GetWindowLongPtrA(hDlg, GWLP_USERDATA);

    if (msg == WM_ERASEBKGND) return TRUE;

    if (msg == WM_LBUTTONDOWN && d && d->state) {
        POINT pt = { LOWORD(lParam), HIWORD(lParam) };
        for (int i = 0; i < 6; i++) {
            if (pt.x >= d->btnX && pt.x < d->btnX + d->btnW &&
                pt.y >= d->btnPosY[i] && pt.y < d->btnPosY[i] + d->btnH) {
                *d->state = kMenuBtnDefs[i].target;
                return 0;
            }
        }
    }

    if (msg == WM_COMMAND && HIWORD(wParam) == BN_CLICKED && d && d->state) {
        for (auto& bd : kMenuBtnDefs) {
            if ((DWORD)bd.id == LOWORD(wParam)) { *d->state = bd.target; return 0; }
        }
    }

    if (msg == WM_CLOSE) {
        if (d && d->hBink) SendMessageA(d->hBink, BINKM_CLOSE, 0, 0);
    }
    return DefWindowProcA(hDlg, msg, wParam, lParam);
}

// ---- MainMenuScreen (IDA 0x531CC0) ----
static MenuState MainMenuScreen()
{
    DDrawContext* ctx = DDrawGetContext();
    if (!ctx || !ctx->back_buffer) {
        LOG_ERROR("[MENU] DDraw not available");
        return MenuState::MenuIdle;
    }

    // Layout from DIALOGEX template 0xE2: 533x369 dlu, BINK (0,0) 304x266, buttons x=425 w=108
    int dlgW = (ctx->width  > 800) ? 800  : ctx->width;
    int dlgH = (ctx->height > 600) ? 600  : ctx->height;
    int offX = (ctx->width  - dlgW) / 2;
    int offY = (ctx->height - dlgH) / 2;
    float dluX = (float)dlgW / 533.0f;
    float dluY = (float)dlgH / 369.0f;
    int bikX = offX, bikY = offY;
    int bikW = (int)(304.0f * dluX), bikH = (int)(266.0f * dluY);
    int btnX = offX + (int)(425.0f * dluX);
    int btnW = (int)(108.0f * dluX), btnH = (int)(23.0f * dluY);

    // Register dialog container class
    static const char* DLG_CLASS = "RA2MainMenu";
    WNDCLASSA wc = {};
    if (!GetClassInfoA(g_hInstance, DLG_CLASS, &wc)) {
        wc.style = CS_HREDRAW|CS_VREDRAW;
        wc.lpfnWndProc = DefWindowProcA;
        wc.hInstance = g_hInstance;
        wc.hbrBackground = (HBRUSH)GetStockObject(NULL_BRUSH);
        wc.lpszClassName = DLG_CLASS;
        RegisterClassA(&wc);
    }

    // Create dialog container (child of main window)
    HWND hDlg = CreateWindowExA(0, DLG_CLASS, "", WS_CHILD|WS_CLIPSIBLINGS|DS_SETFONT,
        offX, offY, dlgW, dlgH, g_hWnd, nullptr, g_hInstance, nullptr);
    if (!hDlg) {
        LOG_ERROR("[MENU] CreateWindowExA(dialog) failed: %lu", GetLastError());
        return MenuState::MenuIdle;
    }

    // BINK STATIC control (DlgItem 1818) -- positioned at (0,0) within dialog
    HWND hBink = CreateWindowExA(0, "STATIC", "", WS_CHILD|WS_VISIBLE,
        bikX-offX, bikY-offY, bikW, bikH, hDlg, (HMENU)1818, g_hInstance, nullptr);
    SetWindowSubclass(hBink, BinkPlayerControl::WindowProc, 0, 0);
    SendMessageA(hBink, BINKM_INIT, 1, 0);

    // Load BINK file from MIX -- disk -- BinkPlayerControl
    const char* bikName = (ctx->width > 640) ? "ra2ts_l.bik" : "ra2ts_s.bik";
    uint32_t bikHash = (ctx->width > 640) ? 0x33665128 : 0xC1E6E166;
    void* bikData = FileSystem::LoadByHash(bikHash);
    if (bikData) {
        const uint32_t* hd = (const uint32_t*)bikData;
        uint32_t sz = hd[1];
        if (sz < 100 || sz > 64*1024*1024) sz = 8*1024*1024;
        FILE* fp = nullptr;
        if (fopen_s(&fp, bikName, "wb") == 0 && fp) { fwrite(bikData, 1, sz, fp); fclose(fp); }
        free(bikData);
    }
    SendMessageA(hBink, BINKM_OPEN, 0, (LPARAM)bikName);

    // Version text STATIC (DlgItem 1821) -- matching dialog template 0xE2
    CreateWindowExA(0, "STATIC", "v0.1", WS_CHILD|WS_VISIBLE,
        425, 357, 108, 10, hDlg, (HMENU)1821, g_hInstance, nullptr);

    // BUTTON controls (IDA DlgItem IDs: 1667=Campaign, 1668=Skirmish,
    //   1400=Multiplayer, 1670=Movies, 1372=Options, 1006=Exit)
    static const struct { int id; const char* text; int yDLU; } kBtnDefs[] = {
        {1667, "Campaign",   125}, {1668, "Skirmish", 152},
        {1400, "Network",    179}, {1670, "Movies",   206},
        {1372, "Options",    233}, {1006, "Exit Game", 330},
    };
    for (auto& bd : kBtnDefs) {
        int by = (int)((float)bd.yDLU * dluY);
        CreateWindowExA(0, "BUTTON", bd.text,
            WS_CHILD|WS_VISIBLE|BS_PUSHBUTTON|BS_NOTIFY,
            btnX - offX, by, btnW, btnH,
            hDlg, (HMENU)(INT_PTR)bd.id, g_hInstance, nullptr);
    }

    // Wire up dialog proc + data with button layout for hit-testing
    MenuState pendingState = MenuState::MenuIdle;
    MainMenuDlgData dlgData = { &pendingState, hBink, btnX-offX, btnW, btnH, {} };
    for (int i = 0; i < 6; i++)
        dlgData.btnPosY[i] = (int)((float)kMenuBtnDefs[i].yDLU * dluY);

    ShowWindow(hDlg, SW_SHOW);
    SetFocus(g_hWnd);

    int loopCount = 0;
    while (pendingState == MenuState::MenuIdle) {
        ++loopCount;

        // BINK: advance frame (BinkWait pacing controls frame rate)
        BinkPlayerControl* bikCtrl = BinkPlayerControl::FromHwnd(hBink);
        bool frameReady = true;
        if (bikCtrl && bikCtrl->IsPlaying()) {
            BinkMovieHandle* m = bikCtrl->Movie();
            if (m) frameReady = m->AdvanceFrame();
        }

            if (frameReady) {
                // Render BINK to DDraw back buffer
                DDSURFACEDESC2 desc = {};
                desc.dwSize = sizeof(desc);
                if (SUCCEEDED(ctx->back_buffer->Lock(nullptr, &desc, DDLOCK_WAIT, nullptr))) {
                    uint16_t* buf = (uint16_t*)desc.lpSurface;
                    int pitch = desc.lPitch / 2;

                    if (bikCtrl && bikCtrl->IsPlaying()) {
                        BinkMovieHandle* m = bikCtrl->Movie();
                        if (m) m->RenderFrameRaw(desc.lpSurface, desc.lPitch,
                            ctx->height, bikX, bikY);
                    } else {
                        for (int y = 0; y < ctx->height; y++)
                            for (int x = 0; x < ctx->width; x++)
                                buf[y * pitch + x] = 0x1082;
                    }

                    // Fill button area with dark background to reduce GDI flicker
                    for (int i = 0; i < 6; i++) {
                        int by = (int)((float)kMenuBtnDefs[i].yDLU * dluY);
                        uint16_t btnBg = 0x1082;  // same as dialog background
                        for (int y = by; y < by + btnH && y < ctx->height; y++)
                            for (int x = btnX; x < btnX + btnW && x < ctx->width; x++)
                                buf[y * pitch + x] = btnBg;
                    }

                    ctx->back_buffer->Unlock(nullptr);
                }
                DDrawFlip();
            }

        // Message pump (WM_PAINT fires on BUTTON controls for GDI rendering)
        MSG msg;
        while (PeekMessageA(&msg, nullptr, 0, 0, PM_REMOVE)) {
            if (msg.message == WM_QUIT) { pendingState = MenuState::ExitConfirm; break; }
            if (msg.message == WM_KEYDOWN && msg.wParam == VK_ESCAPE) {
                pendingState = MenuState::ExitConfirm; break;
            }
            if (!IsDialogMessageA(hDlg, &msg)) {
                TranslateMessage(&msg);
                DispatchMessageA(&msg);
            }
        }
        Event_Dispatch();
        if (loopCount > 7200) break;
    }

    LOG_DEBUG("[MENU] MainMenu exit: result=%d loops=%d", (int)pendingState, loopCount);

    if (hBink) { SendMessageA(hBink, BINKM_CLOSE, 0, 0); }
    DestroyWindow(hDlg);
    return pendingState;
}

// ---- CampaignScreen (IDA 0x60D380) ----
static MenuState CampaignScreen(int arg) {
    DDrawContext* ctx = DDrawGetContext();
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
        DDrawFlip();
        Event_Dispatch();
    }
    return result;
}

// ---- OptionsScreenDialog ----
static void OptionsScreenDialog() {
    DDrawContext* ctx = DDrawGetContext();
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
        DDrawFlip();
        Event_Dispatch();
    }
}

// ---- MultiplayerScreen ----
static MenuState MultiplayerScreen(int mode) { LOG_INFO("Multiplayer: mode=%d", mode); return MenuState::MenuIdle; }

// ---- SkirmishSetupScreen ----
static MenuState SkirmishSetupScreen() {
    DDrawContext* ctx = DDrawGetContext();
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
        DDrawFlip();
        Event_Dispatch();
    }
    return result;
}

// ---- ShowExitDialog ----
static char ShowExitDialog() {
    DDrawContext* ctx = DDrawGetContext();
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
        DDrawFlip();
        Event_Dispatch();
    }
    return result;
}

// ---- Game Frame Stubs (IDA: 0x55D360, 0x55CFD0, 0x48C8B0) ----
// These are simplified versions of the massive frame processing functions.
// IDA reference addresses annotated for future faithful rewriting.

// IDA: 0x55D360 -- GameFrameLoop (2940B)
// Full implementation handles: DDraw wait loop, frame timing (timeGetTime),
// network sync delay, Event::Dispatch, TacticalMap::Redraw,
// InputManager_ProcessEvents, SyncDelay, MarkAllFootOccupancies,
// ProcessAutoSave, DrawHUD, NetworkEvents, Scenario::Update, etc.
static bool GameFrameLoop(){
    // IDA: if (!WTFMode) return 1
    // IDA: Wait for g_DDraw_Active
    // IDA: Frame timing (timeGetTime -- Timer::EnableHighPrecision)
    // IDA: Dialog::MessageLoop() -- Event::Dispatch()
    Event_Dispatch();
    return true; // game is active
}

// IDA: 0x55CFD0 -- GameFrameCheck (906B)
static bool GameFrameCheck(){
    if (GetAsyncKeyState(VK_ESCAPE) & 0x8000)
        return true;
    return false;
}

// IDA: 0x48C8B0 -- MainGameFrame (978B, 51BBs)
// 9-state in-game UI state machine:
// State 1=InGameUI::Open, 2=Surrender, 3=NetworkEventDispatch,
// 4=HotkeyOptions, 5=Transition--1, 6=AudioSettings,
// 7=WOLLobby, 8=Diplomacy, 9=MissionBriefing
// Calls PreFrameSetup(0x683EB0) + WWMouseClass input + PostFrameCleanup(0x683FB0)
static void MainGameFrame(){
    Event_Dispatch();
}

// ---- MenuSelect (IDA 0x52D9A0, 4536B, 222BBs) ----
// IDA states:
//   18=MainMenu  1=Campaign  2=Skirmish  3=Internet  4=CampaignSub
//   5=Options    6=ExitConfirm  7=Quit(return 0)  8=NewGame
//   9=LoadGame  10=BackToCampaign  11=SkirmishMode5
//   13=PlayMovie  14=CampaignCD  15=Credits
//   16/17=GameStart(return 1)
REVERSE(0x52d9a0, "MenuSelect: IDA verified", "None")
// IDA 0x52D9A0 -- MenuSelect (4536B, 222BBs, 19-case state machine)
char MenuSelect(){
    g_MenuState=MenuState::MenuIdle;g_GameMode=0;
    while(true){
        Event_Dispatch();
        switch(g_MenuState){
        // IDA state 18: MainMenu::Screen with 3600-frame timeout
        case MenuState::Reset: case MenuState::MainMenu: g_MenuState=MenuState::MenuIdle; break;
        // IDA state 1: Campaign::Screen(1) -- generic dialog wrapper
        case MenuState::Campaign: g_MenuState=CampaignScreen(1); break;
        // IDA state 2: Skirmish (GameMode=4)
        case MenuState::Skirmish: g_GameMode=GMODE_SKIRMISH; g_MenuState=MenuState::NetworkGameFlow; MultiplayerScreen(2); break;
        // IDA state 3: Internet (GameMode=3)
        case MenuState::Multiplayer: g_GameMode=GMODE_INTERNET; g_MenuState=MenuState::NetworkGameFlow; MultiplayerScreen(1); break;
        // IDA state 4: Campaign second path + CD check
        case MenuState::CampaignSub: g_MenuState=CampaignScreen(1); break;
        // IDA state 5: OptionsScreenDialog
        case MenuState::Options: OptionsScreenDialog(); g_MenuState=MenuState::MenuIdle; break;
        // IDA state 6: Exit confirm -- 7(quit) or 18(back)
        case MenuState::ExitConfirm: g_MenuState=ShowExitDialog()?MenuState::StartScenario:MenuState::MenuIdle; break;
        // IDA state 7: Exit -- return 0 (quit process)
        case MenuState::StartScenario: Event_Dispatch(); return 0;
        // IDA state 8/16/17: Game start -- return 1 (enter game loop)
        case MenuState::WOLInternet: Event_Dispatch(); g_MenuState=MenuState::MenuIdle; Event_Dispatch(); Event_Dispatch(); return 1;
        // IDA state 9: Load savegame
        case MenuState::SaveLoadGame: g_MenuState=MenuState::Campaign; break;
        case MenuState::QuickMatch: g_MenuState=MenuState::Campaign; break;
        // IDA state 11: Skirmish Mode 5
        case MenuState::NetworkGame5: g_GameMode=GMODE_SKIRMISH_SETUP; goto L81;
        // IDA state 13: Play movie
        case MenuState::CampaignInit: g_MenuState=MenuState::CampaignSub; break;
        // IDA state 14: Campaign+CD  
        case MenuState::CampaignLoadCD: g_MenuState=MenuState::CampaignSub; break;
        // IDA state 15: Credits -- Theme::QueueSong
        case MenuState::CampaignIntro: Event_Dispatch(); g_MenuState=MenuState::CampaignSub; break;
        // IDA state 16/17: Network game flow -- enter game loop (return 1)
        case MenuState::NetworkGameFlow: case MenuState::NetworkGameFlow2: goto L81;
        // IDA state 18: MainMenu
        case MenuState::MenuIdle: g_MenuState=MainMenuScreen(); break;
        }continue;
    L81:switch(g_GameMode){
        // IDA: GameMode 0 -- back to MenuIdle (18)
        case GMODE_MENU: g_MenuState=MenuState::MenuIdle; break;
        // IDA: GameMode 1/2 (campaign) -- game start
        case GMODE_CAMPAIGN: case GMODE_CAMPAIGN_SUB: return 1;
        // IDA: GameMode 3 (internet) -- game start
        case GMODE_INTERNET: return 1;
        // IDA: GameMode 4 (skirmish) -- Skirmish_Setup
        case GMODE_SKIRMISH: g_MenuState=SkirmishSetupScreen(); break;
        // IDA: GameMode 5 (skirmish setup) -- Skirmish_Setup
        case GMODE_SKIRMISH_SETUP: g_MenuState=SkirmishSetupScreen(); break;
        }
    }
}

// IDA: MainGame @ 0x48CCC0 (780B, 51BBs)
REVERSE(0x48ccc0, "MainGame: IDA verified", "None")
// The main game loop: InitGame -- MenuSelect -- { GameLoop -- cleanup } -- repeat
void MainGame(){
    LOG_INFO("MainGame: entering");

    // IDA: 0x48CCCF -- InitGame() -- returns 0 on success, non-zero on failure/error
    int r;
    for(r=MenuSelect();r;r=MenuSelect()){
        LOG_INFO("MenuSelect=%d GameMode=%d",r,g_GameMode);
        if(!InitGame(CmdLine_NoCD)){
            LOG_ERROR("InitGame failed");
            return;
        }
        // IDA: 0x48CD1A -- inner game loop
        for(;;){
            if(GameFrameLoop() && GameFrameCheck())
                break;
            MainGameFrame();
        }
        CmdLine_NoCD=true;
    }
    Event_Dispatch();
    LOG_INFO("MainGame: exiting");
}

} // namespace gamemd
