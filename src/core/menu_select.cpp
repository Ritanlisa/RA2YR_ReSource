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
struct MenuButton { int x,y,w,h; const char* text; MenuState state; };

static bool LoadMenuBackground(ShpImage& img) {
    // Try XCC-known loading screen SHPs by CRC32 hash
    uint32_t candidates[] = {
        0x7241327F, // ls800yr.shp
        0x316453C0, // ls640yr.shp
        0x44836963, // ls800bg.shp
        0x07A608DC, // ls640bg.shp
        0x1C71240A, // logo.shp
        0x668DD8FB, // title.shp
    };
    void* data=nullptr;
    for(int i=0;i<6 && !data;i++) data=FileSystem::LoadByHash(candidates[i]);
    if(!data) data=FileSystem::LoadFirstSHP();
    if(!data){LOG_WARN("No SHP");return false;}
    bool ok=img.LoadFromMemory((const uint8_t*)data,1073741824);
    free(data);
    LOG_INFO("SHP %dx%d %df",img.GetWidth(),img.GetHeight(),img.GetFrameCount());
    return ok;
}

// Load a UI SHP button by XCC hash
static ShpImage* LoadUIButton(uint32_t hash) {
    void* data = FileSystem::LoadByHash(hash);
    if (!data) return nullptr;
    auto* img = new ShpImage();
    if (!img->LoadFromMemory((const uint8_t*)data, 1073741824)) { delete img; free(data); return nullptr; }
    free(data);
    return img;
}

static MenuState MainMenu_Screen() {
    DDrawContext* ctx=DDraw_GetContext();
    if(!ctx||!ctx->back_buffer) return MenuState::StartScenario;
    DSurface surf(ctx->width,ctx->height,true,false);
    if(!surf.Allocated) return MenuState::StartScenario;
    if(!PaletteLoaded()) LoadMenuPalette();
    ShpImage bg; bool has_bg=LoadMenuBackground(bg);

    // Try to load button SHP graphics by XCC hash
    // buttonxx.shp buttons from expandmd01.mix:
    // 0x0D2B157D = button00.shp, ~0x6A = button02.shp, etc.
    ShpImage* btnSHP = LoadUIButton(0x0D2B157D);  // button00.shp
    int btnW=200, btnH=30;
    if (btnSHP) { btnW=btnSHP->GetWidth(); btnH=btnSHP->GetHeight(); }
    int cx=ctx->width/2-100,wb=btnW,hb=btnH,y0=ctx->height/2-50;

    // Button layout matching original MainMenu_DlgProc (0x531F60)
    // IDs from IDA: 1667=Campaign, 1668=Skirmish, 1400=Multiplayer, 1372=Options, 1006=Exit
    MenuButton btns[]={
        {cx,y0,200,hb,"Campaign",   MenuState::Campaign},
        {cx,y0+40,wb,hb,"Skirmish",  MenuState::Skirmish},
        {cx,y0+80,wb,hb,"Multiplayer",MenuState::Multiplayer},
        {cx,y0+120,wb,hb,"Options",  MenuState::Options},
        {cx,y0+180,wb,hb,"Exit",     MenuState::ExitConfirm},
    }; const int BN=5;

    // BINK movie background (matches SendMessage 0x4E4 with "Ra2ts_l"/"Ra2ts_s")
    // In original: ra2ts_l.bik (800x600+) or ra2ts_s.bik (640x480)
    bool has_bink = false;
    {
        const char* bik_name = (ctx->width > 640) ? "ra2ts_l.bik" : "ra2ts_s.bik";
        MovieType mt = MoviePlayer::DetectFormat(bik_name);
        has_bink = (mt != MovieType::Unknown);
        if (has_bink)
            LOG_INFO("BINK background: %s (format=%d)", bik_name, static_cast<int>(mt));
    }

    int frame=0,fc=0;
    MenuState result=MenuState::MenuIdle; bool done=false;
    while(!done){
        // Fill black + red border + colored buttons
        DDSURFACEDESC2 fdesc={}; fdesc.dwSize=sizeof(fdesc);
        if(SUCCEEDED(surf.Surface->Lock(nullptr,&fdesc,DDLOCK_WAIT,nullptr))){
            uint16_t* buf=(uint16_t*)fdesc.lpSurface;
            int pitch=fdesc.lPitch/2;
            for(int y=0;y<ctx->height;y++)
                for(int x=0;x<ctx->width;x++)
                    buf[y*pitch+x]=0x0000;
            // Red border
            for(int x=0;x<ctx->width;x++){buf[0*pitch+x]=0xF800; buf[(ctx->height-1)*pitch+x]=0xF800;}
            for(int y=0;y<ctx->height;y++){buf[y*pitch+0]=0xF800; buf[y*pitch+ctx->width-1]=0xF800;}

            // SHP button graphics or green/blue fills
            for(int i=0;i<BN;i++){
                if(btnSHP && btnSHP->GetFrameCount()>0)
                    btnSHP->RenderToSurface(&surf, 0, btns[i].x, btns[i].y, g_palette);
                else {
                    uint16_t color=i==4?0x001F:0x07E0;
                    for(int y=btns[i].y;y<btns[i].y+btns[i].h;y++)
                        for(int x=btns[i].x;x<btns[i].x+btns[i].w;x++)
                            if(y>=0&&y<ctx->height&&x>=0&&x<ctx->width)buf[y*pitch+x]=color;
                }
            }
            surf.Surface->Unlock(nullptr);
        }

        // Render background SHP if available
        if(has_bg&&bg.GetFrameCount()>0){
            int bx=(ctx->width-bg.GetWidth())/2, by=(ctx->height-bg.GetHeight())/2;
            if(frame>=bg.GetFrameCount())frame=0;
            bg.RenderToSurface(&surf,frame,bx,by,g_palette);
        }
        // Memcpy to back buffer + flip
        DDSURFACEDESC2 desc={},src_desc={};
        desc.dwSize=sizeof(desc); src_desc.dwSize=sizeof(src_desc);
        if(SUCCEEDED(ctx->back_buffer->Lock(nullptr,&desc,DDLOCK_WAIT,nullptr))){
            if(SUCCEEDED(surf.Surface->Lock(nullptr,&src_desc,DDLOCK_WAIT,nullptr))){
                uint8_t* dst=(uint8_t*)desc.lpSurface, *src=(uint8_t*)src_desc.lpSurface;
                for(int y=0;y<ctx->height;y++) memcpy(dst+y*desc.lPitch,src+y*src_desc.lPitch,ctx->width*2);
                surf.Surface->Unlock(nullptr);
            }ctx->back_buffer->Unlock(nullptr);
        }DDraw_Flip();
        fc++;if(has_bg&&fc>=8){fc=0;frame=(frame+1)%bg.GetFrameCount();}
        MSG msg;
        while(PeekMessageA(&msg,nullptr,0,0,PM_REMOVE)){
            if(msg.message==WM_QUIT){result=MenuState::StartScenario;done=true;break;}
            if(msg.message==WM_KEYDOWN&&msg.wParam==VK_ESCAPE){result=MenuState::StartScenario;done=true;break;}
            if(msg.message==WM_LBUTTONDOWN){
                int mx=LOWORD(msg.lParam),my=HIWORD(msg.lParam);
                for(int i=0;i<BN;i++){
                    if(mx>=btns[i].x&&mx<btns[i].x+btns[i].w&&my>=btns[i].y&&my<btns[i].y+btns[i].h){
                        result=btns[i].state;done=true;break;
                    }
                }
            }else{TranslateMessage(&msg);DispatchMessageA(&msg);}
        }if(!done)Event_Dispatch();
    }
    bg.Free(); delete btnSHP; return result;
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
