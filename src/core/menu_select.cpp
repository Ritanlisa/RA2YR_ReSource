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

enum class MenuState {
    Reset=-1, MainMenu=0, Campaign=1, Skirmish=2, Multiplayer=3, CampaignSub=4,
    Options=5, ExitConfirm=6, StartScenario=7, WOLInternet=8, SaveLoadGame=9,
    QuickMatch=10, NetworkGame5=11, CampaignInit=13, CampaignLoadCD=14,
    CampaignIntro=15, NetworkGameFlow=16, NetworkGameFlow2=17, MenuIdle=18
};

enum { GMODE_MENU=0, GMODE_CAMPAIGN=1, GMODE_CAMPAIGN_SUB=2, GMODE_MULTIPLAYER=3, GMODE_SKIRMISH=4, GMODE_NETWORK_CAMPAIGN=5 };

static int g_GameMode = 0;
static MenuState g_MenuState = MenuState::MenuIdle;
static int GameFlags_EAC = 0;
static bool GameFlags_Init = false;
static uint8_t g_palette[256][4];

// forward declarations
static MenuState MainMenu_Screen();
static MenuState Campaign_Screen(int);
static MenuState Multiplayer_Screen(int);
static void      Options_Screen();
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
    ShpImage* btnSHP = LoadUIButton(0x0D2B157D);  // button00.shp
    ShpImage* tabSHP = LoadUIButton(0x16CD9EF9);   // tabs.shp
    int btnW=200, btnH=30;
    if (btnSHP) { btnW=btnSHP->GetWidth(); btnH=btnSHP->GetHeight(); }
    else if (tabSHP) { btnW=tabSHP->GetWidth(); btnH=tabSHP->GetHeight(); }
    int cx=ctx->width/2-100,wb=btnW,hb=btnH,y0=ctx->height/2-50;
    MenuButton btns[]={
        {cx,y0,200,hb,"Campaign",MenuState::Campaign},
        {cx,y0+40,wb,hb,"Skirmish",MenuState::Skirmish},
        {cx,y0+80,wb,hb,"Multiplayer",MenuState::Multiplayer},
        {cx,y0+120,wb,hb,"Options",MenuState::Options},
        {cx,y0+180,wb,hb,"Exit",MenuState::ExitConfirm},
    }; const int BN=5;
    int frame=0,fc=0;
    MenuState result=MenuState::MenuIdle; bool done=false;
    while(!done){
        // Fill black + red border + colored buttons
        DDSURFACEDESC2 fdesc={}; fdesc.dwSize=sizeof(fdesc);
        if(SUCCEEDED(surf.Surface->Lock(nullptr,&fdesc,DDLOCK_WAIT,nullptr))){
            uint16_t* buf=(uint16_t*)fdesc.lpSurface;
            int pitch=fdesc.lPitch/2;
            // Clear
            for(int y=0;y<ctx->height;y++)
                for(int x=0;x<ctx->width;x++)
                    buf[y*pitch+x]=0x0000;
            // Red border
            for(int x=0;x<ctx->width;x++){buf[0*pitch+x]=0xF800; buf[(ctx->height-1)*pitch+x]=0xF800;}
            for(int y=0;y<ctx->height;y++){buf[y*pitch+0]=0xF800; buf[y*pitch+ctx->width-1]=0xF800;}
            // Green buttons or SHP button graphics
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

        if(has_bg&&bg.GetFrameCount()>0){
            int bx=(ctx->width-bg.GetWidth())/2, by=(ctx->height-bg.GetHeight())/2;
            if(frame>=bg.GetFrameCount())frame=0;
            bg.RenderToSurface(&surf,frame,bx,by,g_palette);
        }
        // Memcpy to back buffer
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
    bg.Free(); delete btnSHP; delete tabSHP; return result;
}

// ---- stubs ----
static MenuState Campaign_Screen(int){return MenuState::MenuIdle;}
static MenuState Multiplayer_Screen(int){return MenuState::MenuIdle;}
static void      Options_Screen(){}
static char      ShowExitDialog(){return 1;}
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
        case MenuState::Multiplayer: g_GameMode=GMODE_MULTIPLAYER; g_MenuState=MenuState::NetworkGameFlow; Multiplayer_Screen(1); break;
        case MenuState::CampaignSub: g_MenuState=Campaign_Screen(1); break;
        case MenuState::Options: Options_Screen(); g_MenuState=MenuState::MenuIdle; break;
        case MenuState::ExitConfirm: g_MenuState=ShowExitDialog()?MenuState::StartScenario:MenuState::MenuIdle; break;
        case MenuState::StartScenario: Event_Dispatch(); return 0;
        case MenuState::WOLInternet: Event_Dispatch(); g_MenuState=MenuState::MenuIdle; Event_Dispatch(); Event_Dispatch(); return 1;
        case MenuState::SaveLoadGame: g_MenuState=MenuState::Campaign; break;
        case MenuState::QuickMatch: g_MenuState=MenuState::Campaign; break;
        case MenuState::NetworkGame5: g_GameMode=GMODE_NETWORK_CAMPAIGN; goto L81;
        case MenuState::CampaignInit: g_MenuState=MenuState::CampaignSub; break;
        case MenuState::CampaignLoadCD: g_MenuState=MenuState::CampaignSub; break;
        case MenuState::CampaignIntro: Event_Dispatch(); g_MenuState=MenuState::CampaignSub; break;
        case MenuState::NetworkGameFlow: case MenuState::NetworkGameFlow2: goto L81;
        case MenuState::MenuIdle: g_MenuState=MainMenu_Screen(); break;
        }continue;
L81:    switch(g_GameMode){
        case GMODE_MENU: case GMODE_CAMPAIGN: case GMODE_CAMPAIGN_SUB: g_MenuState=MenuState::MenuIdle; break;
        case GMODE_MULTIPLAYER: return 1;
        case GMODE_SKIRMISH: g_MenuState=MenuState::NetworkGame5; break;
        case GMODE_NETWORK_CAMPAIGN: g_MenuState=MenuState::Campaign; break;
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
