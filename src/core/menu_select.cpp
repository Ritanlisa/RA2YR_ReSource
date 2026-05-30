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
#include "gamemd/system/file_system.hpp"
#include "gamemd/ui/gadget.hpp"

namespace gamemd {

// MenuState — matches IDA Menu_Select (0x52D9A0) 19-case switch
enum class MenuState {
    Reset=-1, MainMenu=0, Campaign=1, Skirmish=2, Multiplayer=3, CampaignSub=4,
    Options=5, ExitConfirm=6, StartScenario=7, WOLInternet=8, SaveLoadGame=9,
    QuickMatch=10, NetworkGame5=11, CampaignInit=13, CampaignLoadCD=14,
    CampaignIntro=15, NetworkGameFlow=16, NetworkGameFlow2=17, MenuIdle=18
};

// GMODE values confirmed from IDA Menu_Select (0x52D9A0) case 16/17 GameMode_Current dispatch
enum { GMODE_MENU=0, GMODE_CAMPAIGN=1, GMODE_CAMPAIGN_SUB=2, GMODE_INTERNET=3, GMODE_SKIRMISH=4, GMODE_SKIRMISH_SETUP=5 };

// DlgItem IDs — matches IDA MainMenu_DlgProc (0x531F60)
enum {
    DLG_BINK_PLAYER    = 1818,   // BINK video player control
    DLG_VERSION_LABEL  = 1821,   // Version info label
    CMD_CAMPAIGN       = 1667,   // 0x683
    CMD_SKIRMISH       = 1668,
    CMD_MULTIPLAYER    = 1400,   // 0x578
    CMD_OPTIONS        = 1372,   // 0x55C
    CMD_EXIT           = 1006,   // 0x3EE
};

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

// ---- palette loading ----
static bool PaletteLoaded() {
    for (int i=0;i<256;i++) if (g_palette[i][0]||g_palette[i][1]||g_palette[i][2]) return true;
    return false;
}

static void LoadMenuPalette() {
    const char* names[]={"TEMPERAT.PAL","temperat.pal","temperat","unitsno.pal","unitsno","anim.pal","mousepal.pal",nullptr};
    void* d=nullptr;
    for(int i=0;names[i]&&!d;i++) d=FileSystem::LoadFile(names[i],false);
    if(!d) d=FileSystem::LoadFirstPalette(); // content-based fallback
    if(d){
        uint8_t* r=(uint8_t*)d;
        for(int j=0;j<256;j++){g_palette[j][0]=r[j*3]<<2;g_palette[j][1]=r[j*3+1]<<2;g_palette[j][2]=r[j*3+2]<<2;}
        free(d);LOG_INFO("Palette loaded");return;
    }
    LOG_WARN("No palette");
    for(int i=0;i<256;i++) g_palette[i][0]=g_palette[i][1]=g_palette[i][2]=(uint8_t)i;
}

// ---- Event_Dispatch (IDA 0x48D080) ----
void AudioVideo_Update() {}
char Event_Dispatch(){ AudioVideo_Update(); return 0; }

// ---- message pump ----
void Dialog_MessageLoop() {
    MSG msg;
    while(PeekMessageA(&msg,nullptr,0,0,PM_REMOVE)){
        if(msg.message==WM_QUIT)break;
        TranslateMessage(&msg);DispatchMessageA(&msg);
    }
}
char Dialog_PumpMessages(){Dialog_MessageLoop();Event_Dispatch();return 0;}

// ---- main menu ----
// button SHPs are rendered with baked-in text — no separate text labels needed
static const uint32_t kMenuButtonHashes[] = {
    0x0D2B157D, // button00.shp — Campaign
    0x77EB461D, // button02.shp — Skirmish
    0x4A8B6FAD, // button03.shp — Multiplayer
    0x304B3CCD, // button01.shp — Options
    0xF8ABB3BD, // button04.shp — Exit
};
static const int kMenuButtonCount = 5;

static bool LoadMenuBackground(ShpImage& img) {
    uint32_t candidates[] = {
        0x7241327F, 0x316453C0, 0x44836963, 0x07A608DC,
        0x1C71240A, 0x668DD8FB,
    };
    void* data = nullptr;
    for (int i = 0; i < 6 && !data; i++) data = FileSystem::LoadByHash(candidates[i]);
    // Skip expensive full MIX scan — use a dark background if no candidate found
    if (!data) {
        LOG_DEBUG("[MENU] No background SHP found, using dark background");
        return false;
    }
    bool ok = img.LoadFromMemory((const uint8_t*)data, 1073741824);
    free(data);
    if (ok) LOG_DEBUG("[MENU] Background loaded: %dx%d %df", img.GetWidth(), img.GetHeight(), img.GetFrameCount());
    return ok;
}

static bool LoadMenuButtons(ShpImage* out[5]) {
    for (int i = 0; i < kMenuButtonCount; i++) {
        void* data = FileSystem::LoadByHash(kMenuButtonHashes[i]);
        if (!data) { LOG_WARN("menu button %d not found", i); continue; }
        out[i] = new ShpImage();
        LOG_DEBUG("[MENU] btn[%d] hash=0x%08X size from MIX: checking raw bytes...",
                  i, kMenuButtonHashes[i]);
        // Print first 16 bytes for format diagnosis
        auto* raw = (const uint8_t*)data;
        LOG_DEBUG("[MENU]   raw[0..3]=%02X%02X%02X%02X [4..7]=%02X%02X%02X%02X",
                  raw[0],raw[1],raw[2],raw[3], raw[4],raw[5],raw[6],raw[7]);
        uint16_t f0 = *(const uint16_t*)(raw+0);
        uint16_t f4 = *(const uint16_t*)(raw+4);
        LOG_DEBUG("[MENU]   frames@0=%u frames@4=%u w@2=%u h@6=%u",
                  f0, f4, *(uint16_t*)(raw+2), *(uint16_t*)(raw+6));
        bool ok = out[i]->LoadFromMemory(raw, 3384);
        LOG_DEBUG("[MENU]   LoadFromMemory: %s", ok ? "OK" : "FAILED");
        if (!ok) { delete out[i]; out[i] = nullptr; }
        free(data);
    }
    // Check if at least 3 buttons loaded (minimum usable)
    int loaded = 0;
    for (int i = 0; i < kMenuButtonCount; i++) if (out[i]) loaded++;
    return loaded >= 3;
}

static void FreeMenuButtons(ShpImage* btns[5]) {
    for (int i = 0; i < kMenuButtonCount; i++) { delete btns[i]; btns[i] = nullptr; }
}

static MenuState MainMenu_Screen() {
    DDrawContext* ctx = DDraw_GetContext();
    LOG_DEBUG("[MENU] MainMenu_Screen entry: ctx=%p", (void*)ctx);
    if (!ctx || !ctx->back_buffer) {
        LOG_ERROR("[MENU] DDrawContext or back_buffer is null! ctx=%p bb=%p",
                  (void*)ctx, ctx ? (void*)ctx->back_buffer : nullptr);
        return MenuState::StartScenario;
    }
    LOG_DEBUG("[MENU] Screen: %dx%d, back_buffer=%p dd=%p",
              ctx->width, ctx->height, (void*)ctx->back_buffer, (void*)ctx->dd);

    if (!PaletteLoaded()) {
        LOG_DEBUG("[MENU] Palette not loaded, loading...");
        LoadMenuPalette();
        LOG_DEBUG("[MENU] Palette loaded: %s", PaletteLoaded() ? "OK" : "FAILED");
    }

    ShpImage* btnSHPs[kMenuButtonCount] = {};
    bool haveButtons = LoadMenuButtons(btnSHPs);
    LOG_DEBUG("[MENU] SHP buttons: haveButtons=%d", haveButtons);

    ShpImage bgImg;
    bool hasBg = false;
    LOG_DEBUG("[MENU] Loading background SHP...");
    hasBg = LoadMenuBackground(bgImg);
    LOG_DEBUG("[MENU] Background SHP: hasBg=%d w=%d h=%d frames=%d",
              hasBg, hasBg ? bgImg.GetWidth() : 0, hasBg ? bgImg.GetHeight() : 0,
              hasBg ? bgImg.GetFrameCount() : 0);
    fflush(nullptr);

    DialogClass dlg(0, 0, ctx->width, ctx->height);
    LOG_DEBUG("[MENU] Dialog created: %dx%d", ctx->width, ctx->height);

    // Use SHP buttons if available, fallback to TextButtonClass
    MenuState states[] = {MenuState::Campaign, MenuState::Skirmish,
                          MenuState::Multiplayer, MenuState::Options,
                          MenuState::ExitConfirm};
    const char* colors[] = {"[Campaign]","[Skirmish]","[Multiplayer]","[Options]","[Exit]"};

    if (haveButtons) {
        LOG_DEBUG("[MENU] Creating SHP buttons...");
        bool anyValid = false;
        for (int i = 0; i < kMenuButtonCount; i++) {
            if (!btnSHPs[i]) continue;
            int bw = btnSHPs[i]->GetWidth(), bh = btnSHPs[i]->GetHeight();
            // Validate: button SHPs must have reasonable dimensions
            if (bw < 20 || bh < 10 || bw > 800 || bh > 200) {
                LOG_WARN("[MENU] btn[%d] invalid size %dx%d, skipping SHP", i, bw, bh);
                continue;
            }
            anyValid = true;
            int bx = (ctx->width - bw) / 2;
            int by = ctx->height/2 - 120 + i * (bh + 4);
            auto* btn = new ShpButtonClass(kMenuButtonHashes[i], bx, by,
                                           btnSHPs[i], g_palette);
            MenuState s = states[i];
            btn->Callback = [&dlg, s]() { dlg.Finish(static_cast<int>(s)); };
            dlg.AddGadget(btn);
            LOG_DEBUG("[MENU]   btn[%d] %dx%d at (%d,%d) pal=%p", i, bw, bh, bx, by, (void*)g_palette);
        }
        if (!anyValid) {
            LOG_WARN("[MENU] No valid SHP buttons, falling back to text");
            haveButtons = false;
        }
    }
    if (!haveButtons) {
        // Text buttons: RA2/YR places them right-side, vertically stacked near bottom
        // For 2560x1600: buttons at x=1750, from y=1250 upward
        int bx = ctx->width * 2 / 3;       // Right-side, ~66% of screen width
        int by = ctx->height * 3 / 4 - 40; // Start near bottom, 75% of height
        for (int i = 0; i < kMenuButtonCount; i++) {
            auto* btn = new TextButtonClass(0, colors[i], bx, by + i * 40, 200, 32);
            MenuState s = states[i];
            btn->Callback = [&dlg, s]() { dlg.Finish(static_cast<int>(s)); };
            dlg.AddGadget(btn);
        }
    }

    // Disable dark background fill when BINK is playing
    dlg.m_draw_background = false;

    MenuState result = MenuState::MenuIdle;
    int frame = 0, fc = 0;
    DSurface dlgSurf(ctx->width, ctx->height, false, false);
    LOG_DEBUG("[MENU] DSurface created: Allocated=%d Surface=%p",
              dlgSurf.Allocated, (void*)dlgSurf.Surface);
    TextRenderer text;
    bool textOk = text.Init(ctx->width, ctx->height);
    LOG_DEBUG("[MENU] TextRenderer::Init: %s", textOk ? "OK" : "FAILED");

    // Try BINK background (uses exact hash from XCC db)
    MovieHandle* bikBg = nullptr;
    {
        uint32_t bikHash = (ctx->width > 640) ? 0x33665128 : 0xC1E6E166;
        const char* bikName = (ctx->width > 640) ? "ra2ts_l.bik" : "ra2ts_s.bik";
        void* bikData = FileSystem::LoadByHash(bikHash);
        if (bikData) {
            uint32_t bikFileSize = *(const uint32_t*)((const uint8_t*)bikData + 4);
            if (bikFileSize < 100 || bikFileSize > 64*1024*1024) bikFileSize = 8*1024*1024;
            char tempPath[MAX_PATH];
            GetTempPathA(sizeof(tempPath), tempPath);
            strcat_s(tempPath, bikName);
            FILE* fp = nullptr;
            if (fopen_s(&fp, tempPath, "wb") == 0 && fp) {
                fwrite(bikData, 1, bikFileSize, fp);
                fclose(fp);
                bikBg = MoviePlayer::CreateMovie(tempPath, &dlgSurf);
                DeleteFileA(tempPath);
            }
            free(bikData);
        }
        if (!bikBg) bikBg = MoviePlayer::CreateMovie(bikName, &dlgSurf);
        LOG_DEBUG("[MENU] BINK background '%s': %s", bikName, bikBg ? "loaded" : "not found");
    }

    int loopCount = 0;
    while (!dlg.IsFinished()) {
        loopCount++;

        // === 1. Render BINK background to dlgSurf ===
        if (bikBg && bikBg->IsPlaying()) {
            bikBg->AdvanceFrame();
            bikBg->RenderFrame(&dlgSurf);
        }

        // === 2. Lock dlgSurf, draw button rectangles manually ===
        DDSURFACEDESC2 surfDesc = {};
        surfDesc.dwSize = sizeof(surfDesc);
        if (SUCCEEDED(dlgSurf.Surface->Lock(nullptr, &surfDesc, DDLOCK_WAIT, nullptr))) {
            uint16_t* buf = (uint16_t*)surfDesc.lpSurface;
            int pitch = surfDesc.lPitch / 2;

            // Dark navy background (only if no BINK)
            if (!bikBg || !bikBg->IsPlaying()) {
                uint16_t bg = 0x1082;
                for (int y = 0; y < ctx->height; y++)
                    for (int x = 0; x < ctx->width; x++)
                        buf[y * pitch + x] = bg;
            }

            // Draw button rectangles
            for (auto* g : dlg.Gadgets()) {
                auto* btn = dynamic_cast<TextButtonClass*>(g);
                if (!btn || !btn->Visible) continue;
                int bx = btn->X, by = btn->Y, bw = btn->Width, bh = btn->Height;
                uint16_t fill = btn->Hovered ? 0xF800 : 0x07E0;
                uint16_t border = 0xFFFF;

                for (int y = by; y < by + bh && y < ctx->height; y++) {
                    for (int x = bx; x < bx + bw && x < ctx->width; x++) {
                        bool isBorder = (y == by || y == by + bh - 1 || x == bx || x == bx + bw - 1);
                        buf[y * pitch + x] = isBorder ? border : fill;
                    }
                }
            }

            dlgSurf.Surface->Unlock(nullptr);
        }

        // === 3. Draw text using GDI DIB (bypass TextRenderer Lock issues) ===
        if (textOk) {
            // Use TextRenderer to rasterize text to its internal DIB (m_bits),
            // then manually copy to dlgSurf. This avoids DDraw surface lock issues.
            for (auto* g : dlg.Gadgets()) {
                auto* btn = dynamic_cast<TextButtonClass*>(g);
                if (!btn || !btn->Visible || btn->Text.empty()) continue;
                int tw = (int)btn->Text.length() * 8;
                int tx = btn->X + (btn->Width - tw) / 2;
                int ty = btn->Y + (btn->Height - 16) / 2;
                if (tx < 0) tx = btn->X + 2;
                if (ty < 0) ty = btn->Y + 2;
                
                // Manual text: write a simple pixel pattern that's definitely visible
                // Draw a bright white rectangle as text placeholder
                DDSURFACEDESC2 txtDesc = {};
                txtDesc.dwSize = sizeof(txtDesc);
                if (SUCCEEDED(dlgSurf.Surface->Lock(nullptr, &txtDesc, DDLOCK_WAIT, nullptr))) {
                    uint16_t* tbuf = (uint16_t*)txtDesc.lpSurface;
                    int tpitch = txtDesc.lPitch / 2;
                    // Draw white pixels in a cross pattern to mark each button
                    for (int dy = 0; dy < 14; dy++) {
                        for (int dx = 0; dx < tw && tx+dx < ctx->width; dx++) {
                            if (ty+dy >= 0 && ty+dy < ctx->height)
                                tbuf[(ty+dy)*tpitch + (tx+dx)] = 0xFFFF; // white
                        }
                    }
                    dlgSurf.Surface->Unlock(nullptr);
                }
            }
        }

        // === 4. Copy dlgSurf → back_buffer + flip ===
        DDSURFACEDESC2 sd = {}, dd = {};
        sd.dwSize = sizeof(sd); dd.dwSize = sizeof(dd);
        if (SUCCEEDED(dlgSurf.Surface->Lock(nullptr, &sd, DDLOCK_WAIT, nullptr)) &&
            SUCCEEDED(ctx->back_buffer->Lock(nullptr, &dd, DDLOCK_WAIT, nullptr))) {
            auto* s = (uint8_t*)sd.lpSurface;
            auto* d = (uint8_t*)dd.lpSurface;
            for (int y = 0; y < ctx->height && y < (int)sd.dwHeight; y++)
                memcpy(d + y * dd.lPitch, s + y * sd.lPitch, ctx->width * 2);
            ctx->back_buffer->Unlock(nullptr);
            dlgSurf.Surface->Unlock(nullptr);
        }
        DDraw_Flip();

        // Messages
        MSG msg;
        while (PeekMessageA(&msg, nullptr, 0, 0, PM_REMOVE)) {
            if (msg.message == WM_QUIT) { result = MenuState::StartScenario; dlg.Finish(0); break; }
            if (msg.message == WM_KEYDOWN && msg.wParam == VK_ESCAPE) {
                result = MenuState::StartScenario; dlg.Finish(0); break;
            }
            if (msg.message == WM_LBUTTONDOWN) {
                int mx = LOWORD(msg.lParam), my = HIWORD(msg.lParam);
                for (auto* g : dlg.Gadgets()) {
                    auto* btn = dynamic_cast<TextButtonClass*>(g);
                    if (!btn || !btn->Visible) continue;
                    if (mx >= btn->X && mx < btn->X+btn->Width && my >= btn->Y && my < btn->Y+btn->Height)
                        { btn->OnClick(mx, my); break; }
                }
            }
            if (msg.message == WM_MOUSEMOVE) {
                int mx = LOWORD(msg.lParam), my = HIWORD(msg.lParam);
                for (auto* g : dlg.Gadgets()) {
                    auto* btn = dynamic_cast<TextButtonClass*>(g);
                    if (!btn || !btn->Visible) continue;
                    bool inside = (mx >= btn->X && mx < btn->X+btn->Width && my >= btn->Y && my < btn->Y+btn->Height);
                    if (inside) btn->OnMouseEnter();
                    else        btn->OnMouseLeave();
                }
            }
            TranslateMessage(&msg);
            DispatchMessageA(&msg);
        }
        Event_Dispatch();
    }

    result = static_cast<MenuState>(dlg.GetResult());
    LOG_DEBUG("[MENU] MainMenu_Screen exit: result=%d loops=%d", static_cast<int>(result), loopCount);
    if (bikBg) { bikBg->Stop(); delete bikBg; }
    bgImg.Free();
    dlg.ClearGadgets();
    FreeMenuButtons(btnSHPs);
    return result;
}

// ---- Campaign_Screen (IDA 0x60D380: generic dialog wrapper reused by 4 callers) ----
// Creates a dialog with LoadGame/NewGame/StartScenario/Back buttons
// Matching CampaignMenu_DlgProc (IDA 0x52D640) control IDs:
//   1673=Load, 1674=NewGame, 1672=StartScenario, 1401=Skirmish, 1670=Back
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
    TextRenderer text;
    text.Init(ctx->width, ctx->height);

    while (!dlg.IsFinished()) {
        MSG msg;
        while (PeekMessageA(&msg, nullptr, 0, 0, PM_REMOVE)) {
            if (msg.message == WM_QUIT) return MenuState::StartScenario;
            if (msg.message == WM_KEYDOWN && msg.wParam == VK_ESCAPE) { dlg.m_finished = true; break; }
            if (msg.message == WM_LBUTTONDOWN)
                dlg.OnMouseClick(LOWORD(msg.lParam), HIWORD(msg.lParam));
            else { TranslateMessage(&msg); DispatchMessageA(&msg); }
        }
        dlg.OnRender(&dlgSurf, &text);
        ctx->back_buffer->Blt(nullptr, dlgSurf.Surface, nullptr, DDBLT_WAIT, nullptr);
        DDraw_Flip();
        Event_Dispatch();
    }
    return result;
}

// ---- Options_Screen_Dialog (IDA 0x55FC80) + Options_Screen_Save (0x55FAA0) ----
// Settings controls matching IDA DlgItem IDs:
//   1295=Speed, 1540=MCV Deploy, 1537=Scroll, 1327=Sound Vol, 1330=Music Vol
static void Options_Screen_Dialog() {
    DDrawContext* ctx = DDraw_GetContext();
    if (!ctx || !ctx->back_buffer) return;

    DialogClass dlg(0, 0, ctx->width, ctx->height);
    int cx = ctx->width / 2 - 120;
    int y0 = ctx->height / 2 - 150;

    static int g_Speed = 2;       // IDA: dword_A8EB64, 0-4 slider
    static int g_Scroll = 0;      // IDA: byte_A8EB7E
    static int g_MCVDeploy = 1;   // IDA: MCV_DeployModeEnabled
    static int g_SoundVol = 7;    // IDA: flt_A8EBA0 (0.0-1.0)
    static int g_MusicVol = 7;

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

    // Copy current settings to temp vars (IDA: qmemcpy(&unk_ABCE70, dword_A8EB60, 0xB8u))
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
    TextRenderer text;
    text.Init(ctx->width, ctx->height);

    while (!dlg.IsFinished()) {
        MSG msg;
        while (PeekMessageA(&msg, nullptr, 0, 0, PM_REMOVE)) {
            if (msg.message == WM_QUIT) return;
            if (msg.message == WM_KEYDOWN && msg.wParam == VK_ESCAPE) { dlg.m_finished = true; break; }
            if (msg.message == WM_LBUTTONDOWN)
                dlg.OnMouseClick(LOWORD(msg.lParam), HIWORD(msg.lParam));
            else { TranslateMessage(&msg); DispatchMessageA(&msg); }
        }
        dlg.OnRender(&dlgSurf, &text);
        ctx->back_buffer->Blt(nullptr, dlgSurf.Surface, nullptr, DDBLT_WAIT, nullptr);
        DDraw_Flip();
        Event_Dispatch();
    }
}

// ---- Multiplayer_Screen (IDA 0x53F1F0: stores config, dispatches to network init) ----
static MenuState Multiplayer_Screen(int mode) {
    LOG_INFO("Multiplayer_Screen: mode=%d", mode);
    return MenuState::MenuIdle;
}

// ---- Skirmish_Setup_Screen (IDA 0x6AE2C0: game setup for skirmish) ----
// Dialog template 0x102, DlgProc at 0x6AE3F0
// Exit codes: 1472 (0x5C0) = cancel, 1559 (0x617) = start game
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
    TextRenderer text;
    text.Init(ctx->width, ctx->height);

    while (!dlg.IsFinished()) {
        MSG msg;
        while (PeekMessageA(&msg, nullptr, 0, 0, PM_REMOVE)) {
            if (msg.message == WM_QUIT) return MenuState::StartScenario;
            if (msg.message == WM_KEYDOWN && msg.wParam == VK_ESCAPE) { dlg.m_finished = true; result = MenuState::MenuIdle; break; }
            if (msg.message == WM_LBUTTONDOWN)
                dlg.OnMouseClick(LOWORD(msg.lParam), HIWORD(msg.lParam));
            else { TranslateMessage(&msg); DispatchMessageA(&msg); }
        }
        dlg.OnRender(&dlgSurf, &text);
        ctx->back_buffer->Blt(nullptr, dlgSurf.Surface, nullptr, DDBLT_WAIT, nullptr);
        DDraw_Flip();
        Event_Dispatch();
    }
    return result;
}

// ---- ShowExitDialog (IDA Menu_Select case 6: "GUI:ExitAreYouSure") ----
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
    TextRenderer text;
    text.Init(ctx->width, ctx->height);

    while (!dlg.IsFinished()) {
        MSG msg;
        while (PeekMessageA(&msg, nullptr, 0, 0, PM_REMOVE)) {
            if (msg.message == WM_QUIT) { result = 1; return result; }
            if (msg.message == WM_KEYDOWN && msg.wParam == VK_ESCAPE) { result = 0; dlg.m_finished = true; break; }
            if (msg.message == WM_LBUTTONDOWN)
                dlg.OnMouseClick(LOWORD(msg.lParam), HIWORD(msg.lParam));
            else { TranslateMessage(&msg); DispatchMessageA(&msg); }
        }
        dlg.OnRender(&dlgSurf, &text);
        ctx->back_buffer->Blt(nullptr, dlgSurf.Surface, nullptr, DDBLT_WAIT, nullptr);
        DDraw_Flip();
        Event_Dispatch();
    }
    return result;
}

// ---- stubs for in-game logic (not yet implemented) ----
static bool      Game_Frame_Loop(){return true;}
static bool      Game_Frame_Check(){return false;}
static void      Main_Game_Frame(){Event_Dispatch();}

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
L81:    switch(g_GameMode){
        case GMODE_MENU: g_MenuState=MenuState::MenuIdle; break;
        case GMODE_CAMPAIGN: case GMODE_CAMPAIGN_SUB: return 1;
        case GMODE_INTERNET: return 1;
        case GMODE_SKIRMISH: g_MenuState=Skirmish_Setup_Screen(); break;
        case GMODE_SKIRMISH_SETUP: g_MenuState=Skirmish_Setup_Screen(); break;
        }
    }
}

// ---- Main_Game (IDA 0x48CCC0) ----
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
