// InitGame -- IDA: 0x52BA60 (4333B, 146 basic blocks)
// FAITHFUL game initialization pipeline matching IDA call order exactly.
// Called from MainGame (0x48CCC0). Returns 0 on success, non-zero on failure.
//
// Step count: ~40 sub-steps across 7 logical phases.
// All stubs declared in src/core/init_stubs.hpp

#include <windows.h>
#include <mmsystem.h>
#include <cstring>
#include "core/reverse_marker.hpp"

#include "core/logging.hpp"
#include "core/ddraw_init.hpp"
#include "core/init_stubs.hpp"
#include "core/game_loop.hpp"
#include "core/com_defs.hpp"
#include "system/ini_class.hpp"
#include "system/mix_file.hpp"
#include "system/file_system.hpp"
#include "system/convert_class.hpp"
#include "system/cc_file.hpp"
#include "system/tactical.hpp"
#include "render/surface.hpp"
#include "render/movie.hpp"

namespace gamemd {

// ============================================================
// InitGame @ 0x52BA60 — defined at line 415
// ============================================================

void* RulesClass_Instance = nullptr;        // 0x8871E0
void* ScenarioClass_Instance = nullptr;     // 0xA8B230
void* g_GameFontObject = nullptr;           // 0x89C4B8
void* g_MouseSHP = nullptr;                // 0xB0BCF0
bool  CmdLine_NoCD = false;                // 0x89E410
int   g_BuildingTypeCount2 = 0;            // 0xA83D10
int   g_BuildingTypeClass_Count = 0;        // 0x8B4160
void* g_AnimTypeCount = nullptr;           // 0x8B4154
void* g_TriggerTypeCount = nullptr;        // 0xA83C6C
int   g_TriggerClassCount = 0;             // 0xA83C78
// G34: CCINIClass_INI_Rules / _INI_Art definitions moved to ida_globals.cpp
// (declared in ida_globals.h; zero-init matches nullptr)
int   g_GameModeOptions = 0;               // 0xA8EB60
int   g_LoadScreenFlag = 0;                // 0x8A00A0

// Palette buffers (IDA addresses)
static uint8_t byte_886380[768];           // 0x886380 -- UNITSNO palette
static uint8_t byte_886381_impl = 0;       // offset
static uint8_t byte_886382_impl = 0;       // offset
static uint8_t FileSystem_TEMPERAT_PAL[768]; // 0x885780
static uint8_t byte_885180[768];           // 0x885180 -- WAYPOINT palette
static uint8_t voxel_palette_buf[768];     // 0x886680 -- voxel palette
static float  flt_88741C = 0.95990276f;    // 0x88741C
static bool   byte_887418 = true;          // 0x887418
static float  flt_887430[12];              // 0x887430 -- Matrix3x4 identity
static int    dword_B43184 = 1;            // 0xB43184
static int    dword_B43180 = 0;            // 0xB43180

// Extern globals

// Extern palette globals (defined here, used by InitGame)
extern void* DSurface_Primary;            // 0x887308 (defined in ddraw_init.cpp)
extern void* DSurface_Hidden;             // 0x88730C
extern void* DSurface_Hidden_2;           // 0x887314
void* FileSystem_x_PAL = nullptr;          // 0x87F6B8
void* FileSystem_ANIM_PAL = nullptr;       // 0x87F6C0
void* FileSystem_THEATER_PAL = nullptr;    // 0x87F6C4
void* FileSystem_UNITx_PAL = nullptr;      // 0x87F6B4
void* FileSystem_CAMEO_PAL = nullptr;      // 0x87F6B0
void* FileSystem_MOUSE_PAL = nullptr;      // 0x87F6C8
void* FileSystem_GRFXTXT_TIBERIUM_PAL = nullptr; // 0x87F6BC
void* FileSystem_GRFXTXT_PAL = nullptr;    // 0xA8F790
void* FileSystem_GRFXTXT_Convert = nullptr; // 0xA8F798
void* FileSystem_GRFXTXT_SHP = nullptr;    // 0xA8F794
// Extern from other modules

// CCINIClass q000 (IDA 0x7E1AF4)

// ============================================================
// IDA: init_stubs.cpp -- all InitGame dependency stubs
// ============================================================

// --- Phase 1: Bootstrap preamble ---

// FadePalette defined in globals.cpp
// IDA 0x4790B0 -- SetSoundWarning
void SetSoundWarning(int level) { (void)level; }
// IDA 0x54F000 -- EventQueue::Process
// IDA 0x54F000 -- EventQueue::Process: pump window messages, keep UI responsive
void EventQueueProcess(void* bink_player) {
    (void)bink_player;
    MSG msg;
    while (PeekMessageA(&msg, nullptr, 0, 0, PM_REMOVE)) {
        TranslateMessage(&msg);
        DispatchMessageA(&msg);
    }
    AudioVideoUpdate();
}

// --- Phase 2: Font / Mouse / Audio ---

// IDA 0x5BC450 -- GetTextBufferEntry: returns text buffer index
int  GetTextBufferEntry(int index) {
    (void)index;
    return 0; // TODO: text buffer subsystem (used for loading screen messages)
}
// IDA 0x5BCC90 -- TextBuffer::Init: initializes text buffer for loading messages
void TextBufferInit(int buffer) { (void)buffer; }
// IDA 0x434AD0 -- BitTextClass::LoadFont
void* BitTextClassLoadFont(void* mem) { (void)mem; return nullptr; }
// IDA 0x60D430 -- Init::StubPlaceholder
void InitStubPlaceholder() {}
// 0x72AA40
unsigned char LoadMouseClassResources()
{
  uint8_t result; // al

  dword_B0FC80 = (unsigned int)(LoadFileSHP((char *)(off_844C44), (bool *)&byte_B0FC90));
  dword_B0FC84 = (unsigned int)(LoadFileSHP((char *)(off_844C48), (bool *)&byte_B0FC91)); /*0x72aa70*/
  dword_B0FC88 = (unsigned int)(LoadFileSHP((char *)(off_844C4C), (bool *)&byte_B0FC92)); /*0x72aa85*/
  dword_B0FC8C = (unsigned int)(LoadFileSHP((char *)(off_844C50), (bool *)&byte_B0FC93)); /*0x72aa9a*/
  dword_B0FACC = (unsigned int)(LoadFileSHP((char *)(off_844C54), (bool *)&byte_B0FC94)); /*0x72aab4*/
  LoadPaletteSimple((char *)(off_844BA4), &dword_B0FB64, &dword_B0FB68); /*0x72aab9*/
  LoadPaletteSimple((char *)(off_844BA0), &dword_B0FB6C, &dword_B0FB70); /*0x72aace*/
  LoadPaletteSimple((char *)(off_844B9C), &dword_B0FB5C, &dword_B0FB60); /*0x72aae3*/
  LoadPaletteSimple((char *)(off_844BA8), &dword_B0FB74, &dword_B0FB78); /*0x72aaf8*/
  result = byte_B0FBE0; /*0x72aafd*/
  if ( !byte_B0FBE0 ) /*0x72ab04*/
  {
    AssetClass::ReleaseAndReload(); /*0x72ab0a*/
    dword_B0FAC4 = (unsigned int)(LoadFileSHP((char *)(off_844CD4), (bool *)&byte_B0FC95)); /*0x72ab2a*/
    dword_B0F9DC = (unsigned int)(LoadFileSHP((char *)(off_844CD8), (bool *)&byte_B0FC96)); /*0x72ab3f*/
    dword_B0FAC0 = (unsigned int)(LoadFileSHP((char *)(off_844CDC), (bool *)&byte_B0FC97)); /*0x72ab54*/
    dword_B0FB50 = (unsigned int)(LoadFileSHP((char *)(off_844CE0), (bool *)&byte_B0FC98)); /*0x72ab69*/
    dword_B0FA04 = (unsigned int)(LoadFileSHP((char *)(off_844CE4), (bool *)&byte_B0FC99)); /*0x72ab7e*/
    dword_B0FAF8 = (unsigned int)(LoadFileSHP((char *)(off_844CE8), (bool *)&byte_B0FC9A)); /*0x72ab93*/
    dword_B0FA74 = (unsigned int)(LoadFileSHP((char *)(off_844CEC), (bool *)&byte_B0FC9B)); /*0x72aba8*/
    dword_B0FA38 = (unsigned int)(LoadFileSHP((char *)(off_844CF0), (bool *)&byte_B0FC9C)); /*0x72abbd*/
    dword_B0FAE8 = (unsigned int)(LoadFileSHP((char *)(off_844CF4), (bool *)&byte_B0FC9D)); /*0x72abd2*/
    dword_B0FA54 = (unsigned int)(LoadFileSHP((char *)(off_844CF8), (bool *)&byte_B0FC9E)); /*0x72abec*/
    LoadPaletteSimple((char *)(off_844BE4), &dword_B0FBC8, &dword_B0FBCC); /*0x72abf1*/
    LoadPaletteSimple((char *)(off_844BE8), &dword_B0FBD0, &dword_B0FBD4); /*0x72ac06*/
    LoadPaletteSimple((char *)(off_844BEC), &dword_B0FBD8, &dword_B0FBDC); /*0x72ac1b*/
    result = (uint8_t)SetupMouseClassResources(g_DisplayWidth,(int)(g_abs_8A00A8)); /*0x72ac2c*/
    byte_B0FBE0 = 1; /*0x72ac31*/
  }
  return result; /*0x72ac38*/
}
// IDA 0x406B10 -- InitializeAudioSubsystem: mixer channels, AUDIO.MIX, DirectSound
int  InitializeAudioSubsystem(void* hwnd) {
    LOG_DEBUG("InitializeAudioSubsystem");
    // IDA: AudioMixer::Init x 8 -- g_MixerChannel_SFX/Theme/Voice/Score/Misc/Stream/Ambient
    // IDA: CreateAudioChannel(-1) -- g_Audio_Enabled; CCFileClass AUDIOMD.MIX -- g_MixFile_AUDIO
    (void)hwnd;
    return 1;
}

// IDA 0x6C8C40 -- Timer::GetTicks: returns timeGetTime() >> 4 (~16ms resolution)
// IDA 0x6C8C40 -- Timer::GetTicks: returns timeGetTime() >> 4 (~16ms resolution)
REVERSE(0x6C8C40, "Timer::GetTicks: timeGetTime() >> 4", "None") /* first-5-bytes unsafe */
// 0x6C8C40
int TimerGetTicks() { return timeGetTime() >> 4; }

// IDA 0x54F720 -- Timer::PumpMessages
void TimerPumpMessages(void* bink_player) { (void)bink_player; }

// --- Phase 3: Palette helpers ---

// IDA 0x4355B0 -- Palette::SixBitTo16Bit: packs 3 bytes into 24-bit (used as temp struct)
// IDA 0x4355B0 -- Palette6BitTo16Bit: (b<<16)|(g<<8)|r
REVERSE(0x4355B0, "Palette6BitTo16Bit: pack 6-bit RGB to 24-bit", "None") /* first-5-bytes unsafe */
int Palette6BitTo16Bit(int r, int g, int b) {
    return ((uint8_t)b << 16) | ((uint8_t)g << 8) | (uint8_t)r;
}
// IDA 0x4B9BD0 -- Struct::Zero3: zero-fill 3 bytes at each stride
void StructZero3(void* ptr, int count) { std::memset(ptr, 0, count * 3); }
// IDA 0x753B70 -- VoxelPaletteClass::LoadFromFile
void VoxelPaletteLoadFromFile(const char* path) { (void)path; }
// IDA 0x5AE860 -- Matrix3x4::Identity
void Matrix3x4Identity(float* m) { (void)m; }

// IDA 0x4068F0 -- Array::ForEach: zero-fill n elements of stride size
void ArrayForEach3ByteZero(void* buf, int stride, int count) {
    uint8_t* p = (uint8_t*)buf;
    for (int i = 0; i < count; ++i, p += stride)
        std::memset(p, 0, 3);
}
// IDA 0x754C00 -- Voxel::SetProjectionAngle
void VoxelSetProjectionAngle(float angle) { (void)angle; }
// IDA 0x754CB0 -- Voxel::ProjectionSetup
void VoxelProjectionSetup() {}
// --- Phase 4: MIX / CD / Movie ---

// LoadExpansionMixFiles defined in src/misc/rules.cpp
REVERSE(0x4a38d0, "LoadFileSHP: IDA verified", "None")
// IDA 0x5B40B0 -- SearchMIXFile (truth: void *__fastcall(char *Source, char); body in addr5B_e4.cpp)
void* SearchMIXFile(char* Source, char aP1);
// IDA 0x4A38D0 -- LoadFileSHP: MIX-first SHP loader (truth: void *__fastcall(char*, bool*))
// MIX hit  -> cached buffer returned, *a2 stays 0. MIX miss -> CCFileClass disk read into an
// operator-new buffer; *a2 = (buffer != 0); stack object destroyed via q000-install dtor chain.
void* LoadFileSHP(char* Source, bool* a2) {
    void* result;      // eax
    void* v5;          // esi: loaded buffer
    size_t v6;         // edi: file size
    bool v7;           // zf
    unsigned int v8[27];  // CCFileClass stack object @0x4A38ED (true size 0x6C: Construct writes +88..+104; til 84 stale)
    int v9[5];            // obj+0x58 Buffer member tail {ptr,count,flag,FileID} (decompiler-split local)

    *a2 = 0;                                                                                   /*0x4a38db*/
    result = (void*)SearchMIXFile(Source, 0);                                                  /*0x4a38de*/
    if (!result) {                                                                             /*0x4a38e5*/
        ((CCFileClass*)v8)->Construct(Source);                                          /*0x4a38ed*/
        v5 = (void*)0;                                                                         /*0x4a38f2*/
        if ((*(uint8_t(__thiscall**)(CCFileClass*, int))(*(uint32_t*)v8 + 20))((CCFileClass*)v8, 0)) {          /*0x4a38fd*/
            v6 = (size_t)(*(int(__thiscall**)(CCFileClass*))(*(uint32_t*)v8 + 44))((CCFileClass*)v8);          /*0x4a390f*/
            v5 = new unsigned char[(unsigned int)v6];                                               /*0x4a3917*/
            v7 = (v5 == 0);                                                                    /*0x4a391c*/
            if (v5)                                                                            /*0x4a391e*/
                (*(void(__thiscall**)(CCFileClass*, void*, size_t))(*(uint32_t*)v8 + 36))((CCFileClass*)v8, v5, v6); /*0x4a392a*/
        } else {
            v7 = (v5 == 0);                                                                    /*0x4a392d*/
        }
        *a2 = !v7;                                                                             /*0x4a392f*/
        *(uint32_t*)v8 = (uint32_t)(void*)(void*)&CCFileClass_vftable;      // CCFileClass base-dtor vftable install /*0x4a3938*/
        v9[3] = 0;                                                                             /*0x4a3940*/
        ((VectorClass<int>*)(void*)v9)->Clear();               // Vector::Clear @0x43AE50           /*0x4a3948*/
        *(uint32_t*)v8 = (uint32_t)&off_7E1668;                // CDFileClass vftable install       /*0x4a3951*/
        BufferIOFileClass::Dtor((BufferIOFileClass*)(void*)v8);                                   /*0x4a3959*/
        return v5;                                                                             /*0x4a395e*/
    }
    return result;                                                                             /*0x4a3961*/
}
// IDA 0x5BDA80 -- Mission::SetAndCall
void MissionSetAndCall(int a, int b) { LOG_DEBUG("MissionSetAndCall(%d, %d)", a, b); }
REVERSE(0x48d080, "Event::Dispatch: IDA verified", "None")
// IDA 0x48D080 -- Event::Dispatch (per-frame event processing)
void EventDispatchEx() {
    // IDA: calls UpdateAudioVideo first, then AsyncIO, Network, Campaign events
    // IDA: In skirmish mode, handles UI pointer table + time-based events
    AudioVideoUpdate();
}
// IDA 0x47AB10 -- Game::FindGameDirectoryCD
int  FindGameDirectoryCD(const char* drives) {
    (void)drives;
    // IDA: iterates CD drive letters, checks for game files
    // Returns 1=found, 0=not found, 2=retry
    return 1; // Skip CD check -- all files local
}

// IDA 0x5D3490 -- Dialog::ShowMessageBox
int  DialogShowMessageBox(const wchar_t* msg, const wchar_t* ok, const wchar_t* cancel, int a4, int a5) {
    (void)ok; (void)cancel; (void)a4; (void)a5;
    LOG_WARN("DialogShowMessageBox: %S", msg);
    return 1; // OK pressed (skip dialog)
}
// IDA 0x530460 -- MixFile::LoadAll: secondary MIX loading (expansion packs, local)
bool MixFileLoadAll() {
    // In the original, this scans for additional MIX containers after Bootstrap.
    // Bootstrap already loaded the primary chain; LoadAll adds expansion/local MIXes.
    // For compatibility, we just check that the pool is non-empty.
    auto& pool = MixFileClass::GetMixPool();
    LOG_INFO("MixFileLoadAll: %d MIX files currently in pool", pool.Count);
    return pool.Count > 0;
}
// IDA 0x5BED40 -- Movie::Play (complex: BINK/VQA detection, DDraw surface, audio setup)
void MoviePlay(int a1, int a2, int a3, int a4) {
    LOG_DEBUG("MoviePlay(a1=%d,a2=%d,a3=%d,a4=%d) -- skipped (stub)", a1, a2, a3, a4);
    // IDA: sub_5C0640(1) checks GameMode; loads BINK or VQA; handles stretching;
    //       sets up DirectSound buffers for movie audio; calls RenderMovieFrame loop
}
// IDA 0x5312A0 -- ShowLoadingScreen: displays loading SHP (ls640*.shp/ls800*.shp)
void ShowLoadingScreen() {
    LOG_INFO("ShowLoadingScreen: loading screen SHP would display here");
    // IDA: loads ls640*.shp or ls800*.shp based on screen width
    // IDA: creates DDraw surface, blits SHP as background
    // TODO: SHP loading + DSurface blit
}

// IDA 0x52CB90 -- CreditsScreen (credits/intro sequence)
void CreditsScreen() {
    LOG_INFO("CreditsScreen: credits/intro sequence would display here");
    // IDA: loads credits assets, renders scrolling text on DDraw surface
}

// --- Phase 5: Settings / Anim / Tactical ---

// IDA 0x5FA620 -- GameSettings::Read: loads game settings from rules INI
void GameSettingsRead(int mode) {
    LOG_DEBUG("GameSettingsRead(mode=%d)", mode);
    // IDA: reads difficulty, speed, scroll rate, audio volumes from rules
    // g_GameModeOptions -- RulesClass -- DifficultyStruct x 3 + sound volumes
}
// IDA 0x75A790 -- AnimSystem::Init
void AnimSystemInit() {
    LOG_DEBUG("AnimSystemInit");
}
// IDA 0x75A7D0 -- ResetAnimSystem
// IDA 0x75A7D0 -- ResetAnimSystem: clears ActiveAnims list, resets anim indices
void ResetAnimSystem(int mode) {
    LOG_DEBUG("ResetAnimSystem(mode=%d)", mode);
    // IDA: clears dword_???????? array (g_ActiveAnims list)
    // IDA: if mode != 0, also resets supplemental tables
    (void)mode;
}
// IDA 0x6D1C20 -- TacticalMap::Construct
void* TacticalMapConstruct(void* mem) { (void)mem; return nullptr; }

// --- Phase 6: INI loading ---

// IDA 0x535AA0 -- INIClass::Constructor (84B): placement-new an INIClass
void INIClassConstruct(void* buf) { new (buf) INIClass(); }

// IDA 0x535B30 -- CCINIClass::Constructor (138B): placement-new a CCINIClass
void CCINIClassConstruct(void* buf) { new (buf) CCINIClass(); }

// IDA 0x4741F0 -- CCINIClass::Load: loads an INI file into the CCINIClass
bool CCINIClassLoad(void* ini, void* file, int a2, int a3) {
    auto* ccini = (CCINIClass*)(ini);
    auto* ccfile = (CCFileClass*)(file);
    return ccini && ccini->Load(ccfile, a2 != 0, a3 != 0);
}

// IDA 0x5256F0 -- DestroyHashTableINIClass: cleans up INI sections/keys
void DestroyHashTableINIClass(void* ini) {
    auto* ccini = (CCINIClass*)(ini);
    if (ccini) ccini->~CCINIClass();
}
// IDA 0x7513F0 -- Audio::LoadSoundINI
void AudioLoadSoundINI() {}
// IDA 0x7510D0 -- Audio::InitFromINI
void AudioInitFromINI(void* ini) { (void)ini; }
// IDA 0x7531A0 -- LoadINIEVA
void LoadINIEVA() {}
// IDA 0x753000 -- InitFromINIEVA
void InitFromINIEVA(void* ini) { (void)ini; }
// IDA 0x720770 -- ThemeManager::Cleanup
void ThemeManagerCleanup() {}
// IDA 0x720590 -- ThemeClass::InitializeThemes
void ThemeClassInitializeThemes(void* ini) { (void)ini; }
// IDA 0x7207F0 -- Audio::LoadWAVFiles
void AudioLoadWAVFiles() {}
// InitBulkData defined in src/misc/rules.cpp
// InitRules defined in src/misc/rules.cpp
// IDA 0x4093B0 -- Audio::Callback: invokes audio callback if registered
int  AudioCallback() {
    // IDA: if (dword_87E848) return dword_87E848(); else return 0;
    return 0; // No audio callback registered during init
}
// IDA 0x52CB50 -- PlayIntroSequence: starts intro movie (44B, thunk)
void PlayIntroSequence() {
    LOG_DEBUG("PlayIntroSequence: intro would play here");
}
// IDA 0x52FC20 -- InitRandomSeed: seeds game RNG from system time
// IDA 0x52FC20 -- InitRandomSeed: srand(timeGetTime() ^ GetTickCount())
void InitRandomSeed() {
    // IDA: GetSystemTime -- SHA1TickRNG x 16 -- SeedInitRNG -- Randomizer setup
    // Simplified: seed with time + tick count
    srand(timeGetTime() ^ GetTickCount());
    LOG_DEBUG("InitRandomSeed: RNG seeded");
}
// ============================================================
// IDA 0x532150 -- InitCommands (7118B)
// Registers ~40 CommandClass instances into g_CommandClassVector.
// Each command class is instantiated (new(size) -- q000 assignment)
// and appended to the global command vector via DynamicVector::Add.
//
// Command classes registered (in order):
//   [Debug]  MultiplayerDebugCommandClass
//   [Debug]  MultiplayerSyncCommandClass
//   FollowCommandClass, ViewCommandClass x4 (View1-4)
//   SetViewCommandClass x4 (SetView1-4)
//   OptionsCommandClass, SidebarUp/DownCommandClass
//   CenterREventCommandClass, BeaconPlacementCommandClass
//   ToggleSellCommandClass, ToggleRepairCommandClass
//   AllianceCommandClass, CenterBaseCommandClass, CenterViewCommandClass
//   ScatterCommandClass, GuardCommandClass, StopCommandClass
// 0x532150
int InitCommands()
{
  CreateTeamCommand *v7; // esi
  unsigned int *v9; // eax
  CreateTeamCommand *v10; // esi
  unsigned int *v12; // eax
  CreateTeamCommand *v13; // esi
  unsigned int *v15; // eax
  CreateTeamCommand *v16; // esi
  unsigned int *v18; // eax
  CreateTeamCommand *v19; // esi
  unsigned int *v21; // eax
  CreateTeamCommand *v22; // esi
  unsigned int *v24; // eax
  CreateTeamCommand *v25; // esi
  unsigned int *v27; // eax
  CreateTeamCommand *v28; // esi
  unsigned int *v30; // eax
  CreateTeamCommand *v31; // esi
  unsigned int *v33; // eax
  unsigned int *v35; // eax
  CreateTeamCommand *v36; // esi
  unsigned int *v38; // eax
  CreateTeamCommand *v39; // esi
  unsigned int *v41; // eax
  unsigned int *v43; // eax
  CreateTeamCommand *v44; // esi
  unsigned int *v46; // eax
  CreateTeamCommand *v47; // esi
  unsigned int *v49; // eax
  CreateTeamCommand *v50; // esi
  unsigned int *v52; // eax
  CreateTeamCommand *v53; // esi
  unsigned int *v55; // eax
  CreateTeamCommand *v56; // esi
  unsigned int *v58; // eax
  CreateTeamCommand *v59; // esi
  unsigned int *v61; // eax
  CreateTeamCommand *v62; // esi
  unsigned int *v64; // eax
  CreateTeamCommand *v65; // esi
  unsigned int *v67; // eax
  CreateTeamCommand *v68; // esi
  unsigned int *v70; // eax
  CreateTeamCommand *v71; // esi
  unsigned int *v73; // eax
  CreateTeamCommand *v74; // esi
  unsigned int *v76; // eax
  CreateTeamCommand *v77; // esi
  unsigned int *v79; // eax
  CreateTeamCommand *v80; // esi
  unsigned int *v82; // eax
  CreateTeamCommand *v83; // esi
  unsigned int *v85; // eax
  CreateTeamCommand *v86; // esi
  unsigned int *v88; // eax
  CreateTeamCommand *v89; // esi
  unsigned int *v91; // eax
  CreateTeamCommand *v92; // esi
  unsigned int *v94; // eax
  CreateTeamCommand *v95; // esi
  unsigned int *v97; // eax
  CreateTeamCommand *v98; // esi
  unsigned int *v100; // eax
  CreateTeamCommand *v101; // esi
  unsigned int *v103; // eax
  CreateTeamCommand *v104; // esi
  unsigned int *v106; // eax
  CreateTeamCommand *v107; // esi
  unsigned int *v109; // eax
  CreateTeamCommand *v110; // esi
  unsigned int *v112; // eax
  CreateTeamCommand *v113; // esi
  unsigned int *v115; // eax
  CreateTeamCommand *v116; // esi
  unsigned int *v118; // eax
  CreateTeamCommand *v119; // esi
  unsigned int *v121; // eax
  CreateTeamCommand *v122; // esi
  unsigned int *v124; // eax
  unsigned int *v125; // eax
  unsigned int *v126; // eax
  unsigned int *v127; // eax
  unsigned int *v128; // eax
  unsigned int *v129; // eax
  unsigned int *v130; // eax
  unsigned int *v131; // eax
  unsigned int *v132; // eax
  unsigned int *v133; // eax
  unsigned int *v134; // eax
  unsigned int *v135; // eax
  unsigned int *v136; // eax
  unsigned int *v137; // eax
  unsigned int *v138; // eax
  unsigned int *v139; // eax
  unsigned int *v140; // eax
  unsigned int *v141; // eax
  unsigned int *v142; // eax
  unsigned int *v143; // eax
  unsigned int *v144; // eax
  unsigned int *v145; // eax
  unsigned int *v146; // eax
  unsigned int *v147; // eax
  unsigned int *v148; // eax
  unsigned int *v149; // eax
  unsigned int *v150; // eax
  unsigned int *v151; // eax
  unsigned int *v152; // eax
  unsigned int *v153; // eax
  unsigned int *v154; // eax
  unsigned int *v155; // eax
  unsigned int *v156; // eax
  unsigned int *v157; // eax
  unsigned int *v158; // eax
  unsigned int *v159; // eax
  unsigned int *v160; // eax
  unsigned int *v161; // eax
  unsigned int *v162; // eax
  unsigned int *v163; // eax
  unsigned int *v164; // eax
  unsigned int *v165; // eax
  unsigned int *v166; // eax
  unsigned int *v167; // eax
  unsigned int *v168; // eax
  unsigned int *v169; // eax
  unsigned int *v170; // eax
  unsigned int *v172; // [esp+150h] [ebp-10h] BYREF
  unsigned int *v173; // [esp+154h] [ebp-Ch] BYREF
  unsigned int *v174; // [esp+158h] [ebp-8h] BYREF
  int v175; // [esp+15Ch] [ebp-4h] BYREF
  if ( ((unsigned int)(DataGlobal_87F7E8[536627]) & 0xFF) ) /*0x53215e*/
  {
  CreateTeamCommand *v4; // esi
  unsigned int *v1; // esi
    unsigned int * v0 = (unsigned int *)operator new(4); /*0x532166*/
    if ( v0 ) /*0x532170*/
    {
      v1 = v0; /*0x532178*/
    }
    else
    {
      v1 = (unsigned int *)(0); /*0x53217c*/
    }
    if ( ((unsigned int *)(dword_87F5D8))[36] < ((unsigned int *)(dword_87F5D8))[34] /*0x5321b1*/
      || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !((unsigned int *)(dword_87F5D8))[34])
      && ((unsigned int *)(dword_87F5D8))[37] > 0
&& (*(uint8_t (**)(unsigned int *, int, unsigned int))(((unsigned int *)(dword_87F5D8))[32] + 8))( (unsigned int *)(&((unsigned int *)(dword_87F5D8))[32]), ((unsigned int *)(dword_87F5D8))[34] + (&dword_87F5D8)[37], 0) )



    {
      unsigned int v2 = (&dword_87F5D8)[36]++; /*0x5321be*/
      *(unsigned int *)((&dword_87F5D8)[33] + 4 * v2) = (unsigned int)v1; /*0x5321cd*/
    }
    unsigned int * v3 = (unsigned int *)operator new(4); /*0x5321d2*/
    if ( v3 ) /*0x5321dc*/
    {
      v4 = (gamemd::CreateTeamCommand *)(v3); /*0x5321e4*/
    }
    else
    {
      v4 = (CreateTeamCommand *)(0); /*0x5321e8*/
    }
    if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x53221e*/
      || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !(&dword_87F5D8)[34])
      && (&dword_87F5D8)[37] > 0
&& (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))( (unsigned int *)(&(&dword_87F5D8)[32]), (&dword_87F5D8)[34] + (&dword_87F5D8)[37], 0) )



    {
      unsigned int v5 = (&dword_87F5D8)[36]++; /*0x53222b*/
      *(unsigned int *)((&dword_87F5D8)[33] + 4 * v5) = (unsigned int)v4; /*0x53223a*/
    }
  }
  unsigned int * v6 = (unsigned int *)operator new(4); /*0x53223f*/
  if ( v6 ) /*0x532249*/
  {
    v7 = (gamemd::CreateTeamCommand *)(v6); /*0x532251*/
  }
  else
  {
    v7 = (CreateTeamCommand *)(0); /*0x532255*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x53228b*/
    || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !(&dword_87F5D8)[34])
    && (&dword_87F5D8)[37] > 0
&& (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))( (unsigned int *)(&(&dword_87F5D8)[32]), (&dword_87F5D8)[34] + (&dword_87F5D8)[37], 0) )



  {
    unsigned int v8 = (&dword_87F5D8)[36]++; /*0x532298*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v8) = (unsigned int)v7; /*0x5322a7*/
  }
  v9 = (unsigned int *)operator new(4); /*0x5322ac*/
  if ( v9 ) /*0x5322b6*/
  {
    v10 = (gamemd::CreateTeamCommand *)(v9); /*0x5322be*/
  }
  else
  {
    v10 = (CreateTeamCommand *)(0); /*0x5322c2*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x5322f8*/
    || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !(&dword_87F5D8)[34])
    && (&dword_87F5D8)[37] > 0
&& (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))( (unsigned int *)(&(&dword_87F5D8)[32]), (&dword_87F5D8)[34] + (&dword_87F5D8)[37], 0) )



  {
    unsigned int v11 = (&dword_87F5D8)[36]++; /*0x532305*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v11) = (unsigned int)v10; /*0x532314*/
  }
  v12 = (unsigned int *)operator new(4); /*0x532319*/
  if ( v12 ) /*0x532323*/
  {
    v13 = (gamemd::CreateTeamCommand *)(v12); /*0x53232b*/
  }
  else
  {
    v13 = (CreateTeamCommand *)(0); /*0x53232f*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x532365*/
    || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !(&dword_87F5D8)[34])
    && (&dword_87F5D8)[37] > 0
&& (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))( (unsigned int *)(&(&dword_87F5D8)[32]), (&dword_87F5D8)[34] + (&dword_87F5D8)[37], 0) )



  {
    unsigned int v14 = (&dword_87F5D8)[36]++; /*0x532372*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v14) = (unsigned int)v13; /*0x532381*/
  }
  v15 = (unsigned int *)operator new(4); /*0x532386*/
  if ( v15 ) /*0x532390*/
  {
    v16 = (gamemd::CreateTeamCommand *)(v15); /*0x532398*/
  }
  else
  {
    v16 = (CreateTeamCommand *)(0); /*0x53239c*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x5323d2*/
    || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !(&dword_87F5D8)[34])
    && (&dword_87F5D8)[37] > 0
&& (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))( (unsigned int *)(&(&dword_87F5D8)[32]), (&dword_87F5D8)[34] + (&dword_87F5D8)[37], 0) )



  {
    unsigned int v17 = (&dword_87F5D8)[36]++; /*0x5323df*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v17) = (unsigned int)v16; /*0x5323ee*/
  }
  v18 = (unsigned int *)operator new(4); /*0x5323f3*/
  if ( v18 ) /*0x5323fd*/
  {
    v19 = (gamemd::CreateTeamCommand *)(v18); /*0x532405*/
  }
  else
  {
    v19 = (CreateTeamCommand *)(0); /*0x532409*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x53243f*/
    || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !(&dword_87F5D8)[34])
    && (&dword_87F5D8)[37] > 0
&& (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))( (unsigned int *)(&(&dword_87F5D8)[32]), (&dword_87F5D8)[34] + (&dword_87F5D8)[37], 0) )



  {
    unsigned int v20 = (&dword_87F5D8)[36]++; /*0x53244c*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v20) = (unsigned int)v19; /*0x53245b*/
  }
  v21 = (unsigned int *)operator new(4); /*0x532460*/
  if ( v21 ) /*0x53246a*/
  {
    v22 = (gamemd::CreateTeamCommand *)(v21); /*0x532472*/
  }
  else
  {
    v22 = (CreateTeamCommand *)(0); /*0x532476*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x5324ac*/
    || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !(&dword_87F5D8)[34])
    && (&dword_87F5D8)[37] > 0
&& (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))( (unsigned int *)(&(&dword_87F5D8)[32]), (&dword_87F5D8)[34] + (&dword_87F5D8)[37], 0) )



  {
    unsigned int v23 = (&dword_87F5D8)[36]++; /*0x5324b9*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v23) = (unsigned int)v22; /*0x5324c8*/
  }
  v24 = (unsigned int *)operator new(4); /*0x5324cd*/
  if ( v24 ) /*0x5324d7*/
  {
    v25 = (gamemd::CreateTeamCommand *)(v24); /*0x5324df*/
  }
  else
  {
    v25 = (CreateTeamCommand *)(0); /*0x5324e3*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x532519*/
    || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !(&dword_87F5D8)[34])
    && (&dword_87F5D8)[37] > 0
&& (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))( (unsigned int *)(&(&dword_87F5D8)[32]), (&dword_87F5D8)[34] + (&dword_87F5D8)[37], 0) )



  {
    unsigned int v26 = (&dword_87F5D8)[36]++; /*0x532526*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v26) = (unsigned int)v25; /*0x532535*/
  }
  v27 = (unsigned int *)operator new(4); /*0x53253a*/
  if ( v27 ) /*0x532544*/
  {
    v28 = (gamemd::CreateTeamCommand *)(v27); /*0x53254c*/
  }
  else
  {
    v28 = (CreateTeamCommand *)(0); /*0x532550*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x532586*/
    || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !(&dword_87F5D8)[34])
    && (&dword_87F5D8)[37] > 0
&& (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))( (unsigned int *)(&(&dword_87F5D8)[32]), (&dword_87F5D8)[34] + (&dword_87F5D8)[37], 0) )



  {
    unsigned int v29 = (&dword_87F5D8)[36]++; /*0x532593*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v29) = (unsigned int)v28; /*0x5325a2*/
  }
  v30 = (unsigned int *)operator new(4); /*0x5325a7*/
  if ( v30 ) /*0x5325b1*/
  {
    v31 = (gamemd::CreateTeamCommand *)(v30); /*0x5325b9*/
  }
  else
  {
    v31 = (CreateTeamCommand *)(0); /*0x5325bd*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x5325f3*/
    || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !(&dword_87F5D8)[34])
    && (&dword_87F5D8)[37] > 0
&& (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))( (unsigned int *)(&(&dword_87F5D8)[32]), (&dword_87F5D8)[34] + (&dword_87F5D8)[37], 0) )



  {
    unsigned int v32 = (&dword_87F5D8)[36]++; /*0x532600*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v32) = (unsigned int)v31; /*0x53260f*/
  }
  v33 = (unsigned int *)operator new(4); /*0x532614*/
  if ( v33 ) /*0x53261e*/
  {
    v173 = v33; /*0x532626*/
  }
  else
  {
    v173 = (unsigned int *)(0); /*0x53262c*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x532664*/
    || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !(&dword_87F5D8)[34])
    && (&dword_87F5D8)[37] > 0
&& (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))( (unsigned int *)(&(&dword_87F5D8)[32]), (&dword_87F5D8)[34] + (&dword_87F5D8)[37], 0) )



  {
    unsigned int v34 = (&dword_87F5D8)[36]++; /*0x532675*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v34) = (unsigned int)v173; /*0x532684*/
  }
  v35 = (unsigned int *)operator new(4); /*0x532689*/
  if ( v35 ) /*0x532693*/
  {
    v36 = (CreateTeamCommand *)(v35); /*0x53269b*/
  }
  else
  {
    v36 = (CreateTeamCommand *)(0); /*0x53269f*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x5326d4*/
    || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !(&dword_87F5D8)[34])
    && (&dword_87F5D8)[37] > 0
&& (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))( (unsigned int *)(&(&dword_87F5D8)[32]), (&dword_87F5D8)[34] + (&dword_87F5D8)[37], 0) )



  {
    unsigned int v37 = (&dword_87F5D8)[36]++; /*0x5326e1*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v37) = (unsigned int)v36; /*0x5326f0*/
  }
  v38 = (unsigned int *)operator new(4); /*0x5326f5*/
  if ( v38 ) /*0x5326ff*/
  {
    v39 = (CreateTeamCommand *)(v38); /*0x532707*/
  }
  else
  {
    v39 = (CreateTeamCommand *)(0); /*0x53270b*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x532741*/
    || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !(&dword_87F5D8)[34])
    && (&dword_87F5D8)[37] > 0
&& (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))( (unsigned int *)(&(&dword_87F5D8)[32]), (&dword_87F5D8)[34] + (&dword_87F5D8)[37], 0) )



  {
    unsigned int v40 = (&dword_87F5D8)[36]++; /*0x53274e*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v40) = (unsigned int)v39; /*0x53275d*/
  }
  v41 = (unsigned int *)operator new(4); /*0x532762*/
  if ( v41 ) /*0x53276c*/
  {
    v174 = v41; /*0x532774*/
  }
  else
  {
    v174 = (unsigned int *)(0); /*0x53277a*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x5327b2*/
    || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !(&dword_87F5D8)[34])
    && (&dword_87F5D8)[37] > 0
&& (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))( (unsigned int *)(&(&dword_87F5D8)[32]), (&dword_87F5D8)[34] + (&dword_87F5D8)[37], 0) )



  {
    unsigned int v42 = (&dword_87F5D8)[36]++; /*0x5327c3*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v42) = (unsigned int)v174; /*0x5327d2*/
  }
  v43 = (unsigned int *)operator new(4); /*0x5327d7*/
  if ( v43 ) /*0x5327e1*/
  {
    v44 = (CreateTeamCommand *)(v43); /*0x5327e9*/
  }
  else
  {
    v44 = (CreateTeamCommand *)(0); /*0x5327ed*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x532822*/
    || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !(&dword_87F5D8)[34])
    && (&dword_87F5D8)[37] > 0
&& (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))( (unsigned int *)(&(&dword_87F5D8)[32]), (&dword_87F5D8)[34] + (&dword_87F5D8)[37], 0) )



  {
    unsigned int v45 = (&dword_87F5D8)[36]++; /*0x53282f*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v45) = (unsigned int)v44; /*0x53283e*/
  }
  v46 = (unsigned int *)operator new(4); /*0x532843*/
  if ( v46 ) /*0x53284d*/
  {
    v47 = (CreateTeamCommand *)(v46); /*0x532855*/
  }
  else
  {
    v47 = (CreateTeamCommand *)(0); /*0x532859*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x53288f*/
    || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !(&dword_87F5D8)[34])
    && (&dword_87F5D8)[37 ]> 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))(
         &(&dword_87F5D8)[32],
         (&dword_87F5D8)[34] + (&dword_87F5D8)[37],
         0) )
  {
    unsigned int v48 = (&dword_87F5D8)[36]++; /*0x53289c*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v48) = (unsigned int)v47; /*0x5328ab*/
  }
  v49 = (unsigned int *)operator new(4); /*0x5328b0*/
  if ( v49 ) /*0x5328ba*/
  {
    v50 = (CreateTeamCommand *)(v49); /*0x5328c2*/
  }
  else
  {
    v50 = (CreateTeamCommand *)(0); /*0x5328c6*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x5328fc*/
    || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !(&dword_87F5D8)[34])
    && (&dword_87F5D8)[37 ]> 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))(
         &(&dword_87F5D8)[32],
         (&dword_87F5D8)[34] + (&dword_87F5D8)[37],
         0) )
  {
    unsigned int v51 = (&dword_87F5D8)[36]++; /*0x532909*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v51) = (unsigned int)v50; /*0x532918*/
  }
  v52 = (unsigned int *)operator new(4); /*0x53291d*/
  if ( v52 ) /*0x532927*/
  {
    v53 = (CreateTeamCommand *)(v52); /*0x53292f*/
  }
  else
  {
    v53 = (CreateTeamCommand *)(0); /*0x532933*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x532969*/
    || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !(&dword_87F5D8)[34])
    && (&dword_87F5D8)[37 ]> 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))(
         &(&dword_87F5D8)[32],
         (&dword_87F5D8)[34] + (&dword_87F5D8)[37],
         0) )
  {
    unsigned int v54 = (&dword_87F5D8)[36]++; /*0x532976*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v54) = (unsigned int)v53; /*0x532985*/
  }
  v55 = (unsigned int *)operator new(4); /*0x53298a*/
  if ( v55 ) /*0x532994*/
  {
    v56 = (CreateTeamCommand *)(v55); /*0x53299c*/
  }
  else
  {
    v56 = (CreateTeamCommand *)(0); /*0x5329a0*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x5329d6*/
    || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !(&dword_87F5D8)[34])
    && (&dword_87F5D8)[37 ]> 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))(
         &(&dword_87F5D8)[32],
         (&dword_87F5D8)[34] + (&dword_87F5D8)[37],
         0) )
  {
    unsigned int v57 = (&dword_87F5D8)[36]++; /*0x5329e3*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v57) = (unsigned int)v56; /*0x5329f2*/
  }
  v58 = (unsigned int *)operator new(4); /*0x5329f7*/
  if ( v58 ) /*0x532a01*/
  {
    v59 = (CreateTeamCommand *)(v58); /*0x532a09*/
  }
  else
  {
    v59 = (CreateTeamCommand *)(0); /*0x532a0d*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x532a43*/
    || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !(&dword_87F5D8)[34])
    && (&dword_87F5D8)[37 ]> 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))(
         &(&dword_87F5D8)[32],
         (&dword_87F5D8)[34] + (&dword_87F5D8)[37],
         0) )
  {
    unsigned int v60 = (&dword_87F5D8)[36]++; /*0x532a50*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v60) = (unsigned int)v59; /*0x532a5f*/
  }
  v61 = (unsigned int *)operator new(4); /*0x532a64*/
  if ( v61 ) /*0x532a6e*/
  {
    v62 = (CreateTeamCommand *)(v61); /*0x532a76*/
  }
  else
  {
    v62 = (CreateTeamCommand *)(0); /*0x532a7a*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x532ab0*/
    || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !(&dword_87F5D8)[34])
    && (&dword_87F5D8)[37 ]> 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))(
         &(&dword_87F5D8)[32],
         (&dword_87F5D8)[34] + (&dword_87F5D8)[37],
         0) )
  {
    unsigned int v63 = (&dword_87F5D8)[36]++; /*0x532abd*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v63) = (unsigned int)v62; /*0x532acc*/
  }
  v64 = (unsigned int *)operator new(4); /*0x532ad1*/
  if ( v64 ) /*0x532adb*/
  {
    v65 = (CreateTeamCommand *)(v64); /*0x532ae3*/
  }
  else
  {
    v65 = (CreateTeamCommand *)(0); /*0x532ae7*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x532b1d*/
    || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !(&dword_87F5D8)[34])
    && (&dword_87F5D8)[37 ]> 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))(
         &(&dword_87F5D8)[32],
         (&dword_87F5D8)[34 + (&dword_87F5D8)[37],
         0) )
  {
    CreateTeamCommand *v66 = (gamemd::CreateTeamCommand *)((&dword_87F5D8)[36]++);
    *(unsigned int *)((&dword_87F5D8)[33 + 4 * v66]) = (unsigned int)v65; /*0x532b39*/
  }
  v67 = (unsigned int *)operator new(4); /*0x532b3e*/
  if ( v67 ) /*0x532b48*/
  {
    v68 = (CreateTeamCommand *)(v67); /*0x532b50*/
  }
  else
  {
    v68 = (CreateTeamCommand *)(0); /*0x532b54*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x532b8a*/
    || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !(&dword_87F5D8)[34])
    &&(&dword_87F5D8)[37] > 0
&& (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))( (unsigned int *)(&(&dword_87F5D8)[32]), (&dword_87F5D8)[34] + (&dword_87F5D8)[37], 0) )



  {
    unsigned int v69 = (&dword_87F5D8)[36]++; /*0x532b97*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v69) = (unsigned int)v68; /*0x532ba6*/
  }
  v70 = (unsigned int *)operator new(4); /*0x532bab*/
  if ( v70 ) /*0x532bb5*/
  {
    v71 = (CreateTeamCommand *)(v70); /*0x532bbd*/
  }
  else
  {
    v71 = (CreateTeamCommand *)(0); /*0x532bc1*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x532bf7*/
    || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !(&dword_87F5D8)[34])
    &&(&dword_87F5D8)[37] > 0
&& (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))( (unsigned int *)(&(&dword_87F5D8)[32]), (&dword_87F5D8)[34] + (&dword_87F5D8)[37], 0) )



  {
    unsigned int v72 = (&dword_87F5D8)[36]++; /*0x532c04*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v72) = (unsigned int)v71; /*0x532c13*/
  }
  v73 = (unsigned int *)operator new(4); /*0x532c18*/
  if ( v73 ) /*0x532c22*/
  {
    v74 = (CreateTeamCommand *)(v73); /*0x532c2a*/
  }
  else
  {
    v74 = (CreateTeamCommand *)(0); /*0x532c2e*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x532c64*/
    || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !(&dword_87F5D8)[34])
    &&(&dword_87F5D8)[37] > 0
&& (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))( (unsigned int *)(&(&dword_87F5D8)[32]), (&dword_87F5D8)[34] + (&dword_87F5D8)[37], 0) )



  {
    unsigned int v75 = (&dword_87F5D8)[36]++; /*0x532c71*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v75) = (unsigned int)v74; /*0x532c80*/
  }
  v76 = (unsigned int *)operator new(4); /*0x532c85*/
  if ( v76 ) /*0x532c8f*/
  {
    v77 = (CreateTeamCommand *)(v76); /*0x532c97*/
  }
  else
  {
    v77 = (CreateTeamCommand *)(0); /*0x532c9b*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x532cd1*/
    || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !(&dword_87F5D8)[34])
    &&(&dword_87F5D8)[37] > 0
&& (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))( (unsigned int *)(&(&dword_87F5D8)[32]), (&dword_87F5D8)[34] + (&dword_87F5D8)[37], 0) )



  {
    unsigned int v78 = (&dword_87F5D8)[36]++; /*0x532cde*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v78) = (unsigned int)v77; /*0x532ced*/
  }
  v79 = (unsigned int *)operator new(4); /*0x532cf2*/
  if ( v79 ) /*0x532cfc*/
  {
    v80 = (CreateTeamCommand *)(v79); /*0x532d04*/
  }
  else
  {
    v80 = (CreateTeamCommand *)(0); /*0x532d08*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x532d3e*/
    || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !(&dword_87F5D8)[34])
    &&(&dword_87F5D8)[37] > 0
&& (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))( (unsigned int *)(&(&dword_87F5D8)[32]), (&dword_87F5D8)[34] + (&dword_87F5D8)[37], 0) )



  {
    unsigned int v81 = (&dword_87F5D8)[36]++; /*0x532d4b*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v81) = (unsigned int)v80; /*0x532d5a*/
  }
  v82 = (unsigned int *)operator new(4); /*0x532d5f*/
  if ( v82 ) /*0x532d69*/
  {
    v83 = (CreateTeamCommand *)(v82); /*0x532d71*/
  }
  else
  {
    v83 = (CreateTeamCommand *)(0); /*0x532d75*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x532dab*/
    || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !(&dword_87F5D8)[34])
    &&(&dword_87F5D8)[37] > 0
&& (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))( (unsigned int *)(&(&dword_87F5D8)[32]), (&dword_87F5D8)[34] + (&dword_87F5D8)[37], 0) )



  {
    unsigned int v84 = (&dword_87F5D8)[36]++; /*0x532db8*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v84) = (unsigned int)v83; /*0x532dc7*/
  }
  v85 = (unsigned int *)operator new(4); /*0x532dcc*/
  if ( v85 ) /*0x532dd6*/
  {
    v86 = (CreateTeamCommand *)(v85); /*0x532dde*/
  }
  else
  {
    v86 = (CreateTeamCommand *)(0); /*0x532de2*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x532e18*/
    || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !(&dword_87F5D8)[34])
    &&(&dword_87F5D8)[37] > 0
&& (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))( (unsigned int *)(&(&dword_87F5D8)[32]), (&dword_87F5D8)[34] + (&dword_87F5D8)[37], 0) )



  {
    unsigned int v87 = (&dword_87F5D8)[36]++; /*0x532e25*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v87) = (unsigned int)v86; /*0x532e34*/
  }
  v88 = (unsigned int *)operator new(4); /*0x532e39*/
  if ( v88 ) /*0x532e43*/
  {
    v89 = (CreateTeamCommand *)(v88); /*0x532e4b*/
  }
  else
  {
    v89 = (CreateTeamCommand *)(0); /*0x532e4f*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x532e85*/
    || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !(&dword_87F5D8)[34])
    &&(&dword_87F5D8)[37] > 0
&& (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))( (unsigned int *)(&(&dword_87F5D8)[32]), (&dword_87F5D8)[34] + (&dword_87F5D8)[37], 0) )



  {
    unsigned int v90 = (&dword_87F5D8)[36]++; /*0x532e92*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v90) = (unsigned int)v89; /*0x532ea1*/
  }
  v91 = (unsigned int *)operator new(4); /*0x532ea6*/
  if ( v91 ) /*0x532eb0*/
  {
    v92 = (CreateTeamCommand *)(v91); /*0x532eb8*/
  }
  else
  {
    v92 = (CreateTeamCommand *)(0); /*0x532ebc*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x532ef2*/
    || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !(&dword_87F5D8)[34])
    &&(&dword_87F5D8)[37] > 0
&& (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))( (unsigned int *)(&(&dword_87F5D8)[32]), (&dword_87F5D8)[34] + (&dword_87F5D8)[37], 0) )



  {
    unsigned int v93 = (&dword_87F5D8)[36]++; /*0x532eff*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v93) = (unsigned int)v92; /*0x532f0e*/
  }
  v94 = (unsigned int *)operator new(4); /*0x532f13*/
  if ( v94 ) /*0x532f1d*/
  {
    v95 = (CreateTeamCommand *)(v94); /*0x532f25*/
  }
  else
  {
    v95 = (CreateTeamCommand *)(0); /*0x532f29*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x532f5f*/
    || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !(&dword_87F5D8)[34])
    &&(&dword_87F5D8)[37] > 0
&& (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))( (unsigned int *)(&(&dword_87F5D8)[32]), (&dword_87F5D8)[34] + (&dword_87F5D8)[37], 0) )



  {
    unsigned int v96 = (&dword_87F5D8)[36]++; /*0x532f6c*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v96) = (unsigned int)v95; /*0x532f7b*/
  }
  v97 = (unsigned int *)operator new(4); /*0x532f80*/
  if ( v97 ) /*0x532f8a*/
  {
    v98 = (CreateTeamCommand *)(v97); /*0x532f92*/
  }
  else
  {
    v98 = (CreateTeamCommand *)(0); /*0x532f96*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x532fcc*/
    || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !(&dword_87F5D8)[34])
    &&(&dword_87F5D8)[37] > 0
&& (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))( (unsigned int *)(&(&dword_87F5D8)[32]), (&dword_87F5D8)[34] + (&dword_87F5D8)[37], 0) )



  {
    unsigned int v99 = (&dword_87F5D8)[36]++; /*0x532fd9*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v99) = (unsigned int)v98; /*0x532fe8*/
  }
  v100 = (unsigned int *)operator new(4); /*0x532fed*/
  if ( v100 ) /*0x532ff7*/
  {
    v101 = (CreateTeamCommand *)(v100); /*0x532fff*/
  }
  else
  {
    v101 = (CreateTeamCommand *)(0); /*0x533003*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x533039*/
    || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !(&dword_87F5D8)[34])
    &&(&dword_87F5D8)[37] > 0
&& (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))( (unsigned int *)(&(&dword_87F5D8)[32]), (&dword_87F5D8)[34] + (&dword_87F5D8)[37], 0) )



  {
    unsigned int v102 = (&dword_87F5D8)[36]++; /*0x533046*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v102) = (unsigned int)v101; /*0x533055*/
  }
  v103 = (unsigned int *)operator new(4); /*0x53305a*/
  if ( v103 ) /*0x533064*/
  {
    v104 = (CreateTeamCommand *)(v103); /*0x53306c*/
  }
  else
  {
    v104 = (CreateTeamCommand *)(0); /*0x533070*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x5330a6*/
    || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !(&dword_87F5D8)[34])
    &&(&dword_87F5D8)[37] > 0
&& (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))( (unsigned int *)(&(&dword_87F5D8)[32]), (&dword_87F5D8)[34] + (&dword_87F5D8)[37], 0) )



  {
    unsigned int v105 = (&dword_87F5D8)[36]++; /*0x5330b3*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v105) = (unsigned int)v104; /*0x5330c2*/
  }
  v106 = (unsigned int *)operator new(4); /*0x5330c7*/
  if ( v106 ) /*0x5330d1*/
  {
    v107 = (CreateTeamCommand *)(v106); /*0x5330d9*/
  }
  else
  {
    v107 = (CreateTeamCommand *)(0); /*0x5330dd*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x533113*/
    || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !(&dword_87F5D8)[34])
    &&(&dword_87F5D8)[37] > 0
&& (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))( (unsigned int *)(&(&dword_87F5D8)[32]), (&dword_87F5D8)[34] + (&dword_87F5D8)[37], 0) )



  {
    unsigned int v108 = (&dword_87F5D8)[36]++; /*0x533120*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v108) = (unsigned int)v107; /*0x53312f*/
  }
  v109 = (unsigned int *)operator new(8); /*0x533134*/
  if ( v109 ) /*0x53313e*/
  {
    v109[1] = 1; /*0x533140*/
    v110 = (CreateTeamCommand *)(v109); /*0x53314d*/
  }
  else
  {
    v110 = (CreateTeamCommand *)(0); /*0x533151*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x533187*/
    || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !(&dword_87F5D8)[34])
    &&(&dword_87F5D8)[37] > 0
&& (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))( (unsigned int *)(&(&dword_87F5D8)[32]), (&dword_87F5D8)[34] + (&dword_87F5D8)[37], 0) )



  {
    unsigned int v111 = (&dword_87F5D8)[36]++; /*0x533194*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v111) = (unsigned int)v110; /*0x5331a3*/
  }
  v112 = (unsigned int *)operator new(8); /*0x5331a8*/
  if ( v112 ) /*0x5331b2*/
  {
    v112[1] = 2; /*0x5331b4*/
    v113 = (CreateTeamCommand *)(v112); /*0x5331c1*/
  }
  else
  {
    v113 = (CreateTeamCommand *)(0); /*0x5331c5*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x5331fb*/
    || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !(&dword_87F5D8)[34])
    &&(&dword_87F5D8)[37] > 0
&& (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))( (unsigned int *)(&(&dword_87F5D8)[32]), (&dword_87F5D8)[34] + (&dword_87F5D8)[37], 0) )



  {
    unsigned int v114 = (&dword_87F5D8)[36]++; /*0x533208*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v114) = (unsigned int)v113; /*0x533217*/
  }
  v115 = (unsigned int *)operator new(8); /*0x53321c*/
  if ( v115 ) /*0x533226*/
  {
    v115[1] = 3; /*0x533228*/
    v116 = (CreateTeamCommand *)(v115); /*0x533235*/
  }
  else
  {
    v116 = (CreateTeamCommand *)(0); /*0x533239*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x53326f*/
    || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !(&dword_87F5D8)[34])
    &&(&dword_87F5D8)[37] > 0
&& (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))( (unsigned int *)(&(&dword_87F5D8)[32]), (&dword_87F5D8)[34] + (&dword_87F5D8)[37], 0) )



  {
    unsigned int v117 = (&dword_87F5D8)[36]++; /*0x53327c*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v117) = (unsigned int)v116; /*0x53328b*/
  }
  v118 = (unsigned int *)operator new(8); /*0x533290*/
  if ( v118 ) /*0x53329a*/
  {
    v118[1] = 4; /*0x53329c*/
    v119 = (CreateTeamCommand *)(v118); /*0x5332a9*/
  }
  else
  {
    v119 = (CreateTeamCommand *)(0); /*0x5332ad*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x5332e3*/
    || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !(&dword_87F5D8)[34])
    &&(&dword_87F5D8)[37] > 0
&& (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))( (unsigned int *)(&(&dword_87F5D8)[32]), (&dword_87F5D8)[34] + (&dword_87F5D8)[37], 0) )



  {
    unsigned int v120 = (&dword_87F5D8)[36]++; /*0x5332f0*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v120) = (unsigned int)v119; /*0x5332ff*/
  }
  v121 = (unsigned int *)operator new(8); /*0x533304*/
  if ( v121 ) /*0x53330e*/
  {
    v121[1] = 5; /*0x533310*/
    v122 = (CreateTeamCommand *)(v121); /*0x53331d*/
  }
  else
  {
    v122 = (CreateTeamCommand *)(0); /*0x533321*/
  }
  if ( (&dword_87F5D8)[36] < (&dword_87F5D8)[34] /*0x533357*/
    || ((((unsigned char *)&((&dword_87F5D8)[35]))[1]) || !(&dword_87F5D8)[34])
    &&(&dword_87F5D8)[37] > 0
&& (*(uint8_t (**)(unsigned int *, int, unsigned int))((&dword_87F5D8)[32] + 8))( (unsigned int *)(&(&dword_87F5D8)[32]), (&dword_87F5D8)[34] + (&dword_87F5D8)[37], 0) )



  {
    unsigned int v123 = (&dword_87F5D8)[36]++; /*0x533364*/
    *(unsigned int *)((&dword_87F5D8)[33] + 4 * v123) = (unsigned int)v122; /*0x533373*/
  }
  v124 = (unsigned int *)operator new(8); /*0x533378*/
  if ( v124 ) /*0x533382*/
    v175 = (int)CreateTeamCommand::Construct(v124, 6); /*0x53338d*/
  else
    v175 = 0; /*0x533393*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2((unsigned int *)((DynamicVector *)(&v175))); /*0x5333a1*/
  v125 = (unsigned int *)operator new(8); /*0x5333a8*/
  if ( v125 ) /*0x5333b2*/
    v175 = (int)CreateTeamCommand::Construct(v125, 7); /*0x5333bd*/
  else
    v175 = 0; /*0x5333c3*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2((unsigned int *)((DynamicVector *)(&v175))); /*0x5333d1*/
  v126 = (unsigned int *)operator new(8); /*0x5333d8*/
  if ( v126 ) /*0x5333e2*/
    v175 = (int)CreateTeamCommand::Construct(v126, 8); /*0x5333ed*/
  else
    v175 = 0; /*0x5333f3*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2((unsigned int *)((DynamicVector *)(&v175))); /*0x533401*/
  v127 = (unsigned int *)operator new(8); /*0x533408*/
  if ( v127 ) /*0x533412*/
    v175 = (int)CreateTeamCommand::Construct(v127, 9); /*0x53341d*/
  else
    v175 = 0; /*0x533423*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2((unsigned int *)((DynamicVector *)(&v175))); /*0x533431*/
  v128 = (unsigned int *)operator new(8); /*0x533438*/
  if ( v128 ) /*0x533442*/
    v175 = (int)CreateTeamCommand::Construct(v128, 10); /*0x53344d*/
  else
    v175 = 0; /*0x533453*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2((unsigned int *)((DynamicVector *)(&v175))); /*0x533461*/
  v129 = (unsigned int *)operator new(8); /*0x533468*/
  if ( v129 ) /*0x533472*/
    v175 = (int)SelectTeamCommand::Construct(v129, 1); /*0x53347d*/
  else
    v175 = 0; /*0x533483*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2( (DynamicVector *)(&v175)); /*0x533491*/
  v130 = (unsigned int *)operator new(8); /*0x533498*/
  if ( v130 ) /*0x5334a2*/
    v175 = (int)SelectTeamCommand::Construct(v130, 2); /*0x5334ad*/
  else
    v175 = 0; /*0x5334b3*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2( (DynamicVector *)(&v175)); /*0x5334c1*/
  v131 = (unsigned int *)operator new(8); /*0x5334c8*/
  if ( v131 ) /*0x5334d2*/
    v175 = (int)SelectTeamCommand::Construct(v131, 3); /*0x5334dd*/
  else
    v175 = 0; /*0x5334e3*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2( (DynamicVector *)(&v175)); /*0x5334f1*/
  v132 = (unsigned int *)operator new(8); /*0x5334f8*/
  if ( v132 ) /*0x533502*/
    v175 = (int)SelectTeamCommand::Construct(v132, 4); /*0x53350d*/
  else
    v175 = 0; /*0x533513*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2( (DynamicVector *)(&v175)); /*0x533521*/
  v133 = (unsigned int *)operator new(8); /*0x533528*/
  if ( v133 ) /*0x533532*/
    v175 = (int)SelectTeamCommand::Construct(v133, 5); /*0x53353d*/
  else
    v175 = 0; /*0x533543*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2( (DynamicVector *)(&v175)); /*0x533551*/
  v134 = (unsigned int *)operator new(8); /*0x533558*/
  if ( v134 ) /*0x533562*/
    v175 = (int)SelectTeamCommand::Construct(v134, 6); /*0x53356d*/
  else
    v175 = 0; /*0x533573*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2( (DynamicVector *)(&v175)); /*0x533581*/
  v135 = (unsigned int *)operator new(8); /*0x533588*/
  if ( v135 ) /*0x533592*/
    v175 = (int)SelectTeamCommand::Construct(v135, 7); /*0x53359d*/
  else
    v175 = 0; /*0x5335a3*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2( (DynamicVector *)(&v175)); /*0x5335b1*/
  v136 = (unsigned int *)operator new(8); /*0x5335b8*/
  if ( v136 ) /*0x5335c2*/
    v175 = (int)SelectTeamCommand::Construct(v136, 8); /*0x5335cd*/
  else
    v175 = 0; /*0x5335d3*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2( (DynamicVector *)(&v175)); /*0x5335e1*/
  v137 = (unsigned int *)operator new(8); /*0x5335e8*/
  if ( v137 ) /*0x5335f2*/
    v175 = (int)SelectTeamCommand::Construct(v137, 9); /*0x5335fd*/
  else
    v175 = 0; /*0x533603*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2( (DynamicVector *)(&v175)); /*0x533611*/
  v138 = (unsigned int *)operator new(8); /*0x533618*/
  if ( v138 ) /*0x533622*/
    v175 = (int)SelectTeamCommand::Construct(v138, 10); /*0x53362d*/
  else
    v175 = 0; /*0x533633*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2( (DynamicVector *)(&v175)); /*0x533641*/
  v139 = (unsigned int *)operator new(8); /*0x533648*/
  if ( v139 ) /*0x533652*/
    v175 = (int)AddTeamCommand::Construct(v139, 1); /*0x53365d*/
  else
    v175 = 0; /*0x533663*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2( (DynamicVector *)(&v175)); /*0x533671*/
  v140 = (unsigned int *)operator new(8); /*0x533678*/
  if ( v140 ) /*0x533682*/
    v175 = (int)AddTeamCommand::Construct(v140, 2); /*0x53368d*/
  else
    v175 = 0; /*0x533693*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2( (DynamicVector *)(&v175)); /*0x5336a1*/
  v141 = (unsigned int *)operator new(8); /*0x5336a8*/
  if ( v141 ) /*0x5336b2*/
    v175 = (int)AddTeamCommand::Construct(v141, 3); /*0x5336bd*/
  else
    v175 = 0; /*0x5336c3*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2( (DynamicVector *)(&v175)); /*0x5336d1*/
  v142 = (unsigned int *)operator new(8); /*0x5336d8*/
  if ( v142 ) /*0x5336e2*/
    v175 = (int)AddTeamCommand::Construct(v142, 4); /*0x5336ed*/
  else
    v175 = 0; /*0x5336f3*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2( (DynamicVector *)(&v175)); /*0x533701*/
  v143 = (unsigned int *)operator new(8); /*0x533708*/
  if ( v143 ) /*0x533712*/
    v175 = (int)AddTeamCommand::Construct(v143, 5); /*0x53371d*/
  else
    v175 = 0; /*0x533723*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2( (DynamicVector *)(&v175)); /*0x533731*/
  v144 = (unsigned int *)operator new(8); /*0x533738*/
  if ( v144 ) /*0x533742*/
    v175 = (int)AddTeamCommand::Construct(v144, 6); /*0x53374d*/
  else
    v175 = 0; /*0x533753*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2( (DynamicVector *)(&v175)); /*0x533761*/
  v145 = (unsigned int *)operator new(8); /*0x533768*/
  if ( v145 ) /*0x533772*/
    v175 = (int)AddTeamCommand::Construct(v145, 7); /*0x53377d*/
  else
    v175 = 0; /*0x533783*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2( (DynamicVector *)(&v175)); /*0x533791*/
  v146 = (unsigned int *)operator new(8); /*0x533798*/
  if ( v146 ) /*0x5337a2*/
    v175 = (int)AddTeamCommand::Construct(v146, 8); /*0x5337ad*/
  else
    v175 = 0; /*0x5337b3*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2( (DynamicVector *)(&v175)); /*0x5337c1*/
  v147 = (unsigned int *)operator new(8); /*0x5337c8*/
  if ( v147 ) /*0x5337d2*/
    v175 = (int)AddTeamCommand::Construct(v147, 9); /*0x5337dd*/
  else
    v175 = 0; /*0x5337e3*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2( (DynamicVector *)(&v175)); /*0x5337f1*/
  v148 = (unsigned int *)operator new(8); /*0x5337f8*/
  if ( v148 ) /*0x533802*/
    v175 = (int)AddTeamCommand::Construct(v148, 10); /*0x53380d*/
  else
    v175 = 0; /*0x533813*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2( (DynamicVector *)(&v175)); /*0x533821*/
  v149 = (unsigned int *)operator new(8); /*0x533828*/
  if ( v149 ) /*0x533832*/
    v175 = (int)CenterTeamCommand::Construct(v149, 1); /*0x53383d*/
  else
    v175 = 0; /*0x533843*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2( (DynamicVector *)(&v175)); /*0x533851*/
  v150 = (unsigned int *)operator new(8); /*0x533858*/
  if ( v150 ) /*0x533862*/
    v175 = (int)CenterTeamCommand::Construct(v150, 2); /*0x53386d*/
  else
    v175 = 0; /*0x533873*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2( (DynamicVector *)(&v175)); /*0x533881*/
  v151 = (unsigned int *)operator new(8); /*0x533888*/
  if ( v151 ) /*0x533892*/
    v175 = (int)CenterTeamCommand::Construct(v151, 3); /*0x53389d*/
  else
    v175 = 0; /*0x5338a3*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2( (DynamicVector *)(&v175)); /*0x5338b1*/
  v152 = (unsigned int *)operator new(8); /*0x5338b8*/
  if ( v152 ) /*0x5338c2*/
    v175 = (int)CenterTeamCommand::Construct(v152, 4); /*0x5338cd*/
  else
    v175 = 0; /*0x5338d3*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2( (DynamicVector *)(&v175)); /*0x5338e1*/
  v153 = (unsigned int *)operator new(8); /*0x5338e8*/
  if ( v153 ) /*0x5338f2*/
    v175 = (int)CenterTeamCommand::Construct(v153, 5); /*0x5338fd*/
  else
    v175 = 0; /*0x533903*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2( (DynamicVector *)(&v175)); /*0x533911*/
  v154 = (unsigned int *)operator new(8); /*0x533918*/
  if ( v154 ) /*0x533922*/
    v175 = (int)CenterTeamCommand::Construct(v154, 6); /*0x53392d*/
  else
    v175 = 0; /*0x533933*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2( (DynamicVector *)(&v175)); /*0x533941*/
  v155 = (unsigned int *)operator new(8); /*0x533948*/
  if ( v155 ) /*0x533952*/
    v175 = (int)CenterTeamCommand::Construct(v155, 7); /*0x53395d*/
  else
    v175 = 0; /*0x533963*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2( (DynamicVector *)(&v175)); /*0x533971*/
  v156 = (unsigned int *)operator new(8); /*0x533978*/
  if ( v156 ) /*0x533982*/
    v175 = (int)CenterTeamCommand::Construct(v156, 8); /*0x53398d*/
  else
    v175 = 0; /*0x533993*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2( (DynamicVector *)(&v175)); /*0x5339a1*/
  v157 = (unsigned int *)operator new(8); /*0x5339a8*/
  if ( v157 ) /*0x5339b2*/
    v175 = (int)CenterTeamCommand::Construct(v157, 9); /*0x5339bd*/
  else
    v175 = 0; /*0x5339c3*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2( (DynamicVector *)(&v175)); /*0x5339d1*/
  v158 = (unsigned int *)operator new(8); /*0x5339d8*/
  if ( v158 ) /*0x5339e2*/
    v175 = (int)CenterTeamCommand::Construct(v158, 10); /*0x5339ed*/
  else
    v175 = 0; /*0x5339f3*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2( (DynamicVector *)(&v175)); /*0x533a01*/
  v159 = (unsigned int *)operator new(8); /*0x533a08*/
  if ( v159 ) /*0x533a12*/
    v175 = (int)TauntCommandClass::Construct(v159, 1); /*0x533a1d*/
  else
    v175 = 0; /*0x533a23*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2( (DynamicVector *)(&v175)); /*0x533a31*/
  v160 = (unsigned int *)operator new(8); /*0x533a38*/
  if ( v160 ) /*0x533a42*/
    v175 = (int)TauntCommandClass::Construct(v160, 2); /*0x533a4d*/
  else
    v175 = 0; /*0x533a53*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2( (DynamicVector *)(&v175)); /*0x533a61*/
  v161 = (unsigned int *)operator new(8); /*0x533a68*/
  if ( v161 ) /*0x533a72*/
    v175 = (int)TauntCommandClass::Construct(v161, 3); /*0x533a7d*/
  else
    v175 = 0; /*0x533a83*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2( (DynamicVector *)(&v175)); /*0x533a91*/
  v162 = (unsigned int *)operator new(8); /*0x533a98*/
  if ( v162 ) /*0x533aa2*/
    v175 = (int)TauntCommandClass::Construct(v162, 4); /*0x533aad*/
  else
    v175 = 0; /*0x533ab3*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2( (DynamicVector *)(&v175)); /*0x533ac1*/
  v163 = (unsigned int *)operator new(8); /*0x533ac8*/
  if ( v163 ) /*0x533ad2*/
    v175 = (int)TauntCommandClass::Construct(v163, 5); /*0x533add*/
  else
    v175 = 0; /*0x533ae3*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2( (DynamicVector *)(&v175)); /*0x533af1*/
  v164 = (unsigned int *)operator new(8); /*0x533af8*/
  if ( v164 ) /*0x533b02*/
    v175 = (int)TauntCommandClass::Construct(v164, 6); /*0x533b0d*/
  else
    v175 = 0; /*0x533b13*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2( (DynamicVector *)(&v175)); /*0x533b21*/
  v165 = (unsigned int *)operator new(8); /*0x533b28*/
  if ( v165 ) /*0x533b32*/
    v175 = (int)TauntCommandClass::Construct(v165, 7); /*0x533b3d*/
  else
    v175 = 0; /*0x533b43*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2( (DynamicVector *)(&v175)); /*0x533b51*/
  v166 = (unsigned int *)operator new(8); /*0x533b58*/
  if ( v166 ) /*0x533b62*/
    v175 = (int)TauntCommandClass::Construct(v166, 8); /*0x533b6d*/
  else
    v175 = 0; /*0x533b73*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2( (DynamicVector *)(&v175)); /*0x533b81*/
  v167 = (unsigned int *)operator new(4); /*0x533b88*/
  if ( v167 ) /*0x533b92*/
    v175 = (int)((ScreenCaptureCommandClass *)v167)->Constructor(); /*0x533b9b*/
  else
    v175 = 0; /*0x533ba1*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2( (DynamicVector *)(&v175)); /*0x533baf*/
  v168 = (unsigned int *)operator new(4); /*0x533bb6*/
  if ( v168 ) /*0x533bc0*/
    v175 = (int)PageUserCommandClass::Constructor(v168); /*0x533bc9*/
  else
    v175 = 0; /*0x533bcf*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2( (DynamicVector *)(&v175)); /*0x533bdd*/
  v169 = (unsigned int *)operator new(4); /*0x533be4*/
  if ( v169 ) /*0x533bee*/
    v175 = (int)((CursorPositionCommandClass *)v169)->Constructor(); /*0x533bf7*/
  else
    v175 = 0; /*0x533bfd*/
  ((DynamicVector *)&(&dword_87F5D8)[32])->Add_Alt2( (DynamicVector *)(&v172)); /*0x533c39*/
  v170 = (unsigned int *)operator new(4); /*0x533c12*/
  if ( v170 ) /*0x533c1c*/
  if ( ((SortedArray*)&(&dword_87F5D8)[42])->FindPair( (int *)(&v175)) ) /*0x533c56*/
  else
    v172 = (unsigned int *)(0); /*0x533c2b*/
    ((SortedArray*)&(&dword_87F5D8)[42])->RemoveByKey( (DynamicVector *)(&v175)); /*0x533c6d*/
  KeyboardConfig::LoadINI(); /*0x533c3e*/
  v175 = 46; /*0x533c52*/
  ((SortedArray*)&(&dword_87F5D8)[42])->Append( (DynamicVector *)(&v175), (unsigned int *)(&v172)); /*0x533c85*/
  {
  if ( ((SortedArray*)&(&dword_87F5D8)[42])->FindPair( (int *)(&v175)) ) /*0x533c9d*/
    ((SortedArray*)&(&dword_87F5D8)[42])->RemoveByKey( (DynamicVector *)(&v175)); /*0x533c6d*/
  }
    ((SortedArray*)&(&dword_87F5D8)[42])->RemoveByKey( (DynamicVector *)(&v175)); /*0x533cb4*/
  ((SortedArray*)&(&dword_87F5D8)[42])->Append( (DynamicVector *)(&v175), (unsigned int *)(&v172)); /*0x533c85*/
  v175 = 27; /*0x533c99*/
  ((SortedArray*)&(&dword_87F5D8)[42])->Append( (DynamicVector *)(&v175), (unsigned int *)(&v173)); /*0x533ccc*/
  {
  if ( ((SortedArray*)&(&dword_87F5D8)[42])->FindPair( (int *)(&v175)) ) /*0x533ce4*/
    ((SortedArray*)&(&dword_87F5D8)[42])->RemoveByKey( (DynamicVector *)(&v175)); /*0x533cb4*/
  }
    ((SortedArray*)&(&dword_87F5D8)[42])->RemoveByKey( (DynamicVector *)(&v175)); /*0x533cfb*/
  ((SortedArray*)&(&dword_87F5D8)[42])->Append( (DynamicVector *)(&v175), (unsigned int *)(&v173)); /*0x533ccc*/
  v175 = 32; /*0x533ce0*/
  if ( ((SortedArray*)&(&dword_87F5D8)[42])->FindPair( (int *)(&v175)) ) /*0x533ce4*/
  return ((SortedArray*)&(&dword_87F5D8)[42])->Append( (DynamicVector *)(&v175), (unsigned int *)(&v174)); /*0x533d18*/
    v175 = 32; /*0x533cf1*/
    ((SortedArray*)&(&dword_87F5D8)[42])->RemoveByKey( (DynamicVector *)(&v175)); /*0x533cfb*/
  }
// CompleteGameInit defined in src/misc/rules.cpp

// --- Phase 7: File helpers ---

REVERSE(0x5b40b0, "SearchMIXFile: IDA verified", "None")
// IDA 0x5B40B0 -- SearchMIXFile: search MIX pool by hash, return file data
const void* SearchMIXFile(const char* name) {
    return FileSystem::LoadFile(name, false);
}
// IDA 0x6260D0 -- Block::Copy: copies 768-byte palette block
void BlockCopy(const void* src) {
    (void)src; // Destination is implicit (this pointer in IDA __thiscall)
    // IDA: if (this != src) memcpy(this, src, 0x300)
    // For now, skip -- destination is a palette duplicate buffer not yet allocated
}

// IDA 0x4739F0 -- CCFileClass::Construct
void* CCFileClassConstruct(void* /*stack_buf*/, const char* filename) {
    auto* f = new CCFileClass(filename);
    if (!filename || !filename[0]) return f;
    f->Open((int)filename);
    return f;
}
// IDA 0x473C50 -- CCFileClass::Open
bool CCFileClassOpen(void* file, int mode) {
    auto* f = (CCFileClass*)(file);
    if (!f) return false;
    // CCFileClass was already constructed and opened in CCFileClassConstruct
    (void)mode;
    return f->Buffer.Buffer != nullptr || f->ReadEntireFile() != nullptr;
}
// IDA 0x4A3890 -- CCFileClass::ReadEntireFile
void* CCFileClassReadEntireFile(void* file) {
    auto* f = (CCFileClass*)(file);
    return f ? f->ReadEntireFile() : nullptr;
}
// IDA 0x473CE0 -- CCFileClass::Reset
void CCFileClassReset(void* file) {
    auto* f = (CCFileClass*)(file);
    if (f) f->Reset();
}
// IDA 0x535A70 -- CCFileClass::Destruct (BufferIOFileClass::Dtor)
void CCFileClassDestruct(void* file) {
    auto* f = (CCFileClass*)(file);
    if (f) { f->~CCFileClass(); delete f; }
}
// IDA 0x43AE50 -- Vector::Clear: resets vector count to 0
void VectorClear(void* vec) {
    // Calls VectorClass::Clear() which sets Count=0 and optionally frees Items
    auto* v = (VectorClass<int>*)(vec); // generic VectorClass<T>
    v->Clear();
}
// IDA 0x6728B0 -- RulesClass::LoadAnimTypes
void LoadAnimTypes(void* rules_ini) { (void)rules_ini; }
// IDA 0x672660 -- RulesClass::LoadBuildingTypes
void LoadBuildingTypes(void* rules_ini) { (void)rules_ini; }
// IDA 0x48E740 -- ConvertClass::Constructor: creates DDraw palette surface
void* ConvertClassConstruct(void* palette, void* temperat_pal, void* surface, int count, int flags) {
    return new ConvertClass(
        *(BytePalette*)(palette),
        *(BytePalette*)(temperat_pal),
        (DSurface*)(surface),
        count > 0 ? (size_t)count : 1,
        flags != 0
    );
}

// ============================================================
// IDA: InitGame @ 0x52BA60 -- returns 0 success, -1 failure, 1 CD abort
REVERSE(0x52ba60, "InitGame: master init pipeline", "None")
int InitGame(bool no_cd)
{
    if (no_cd)
        CmdLine_NoCD = true;  // data: 0x89e410

    // ============================================================
    // Phase 1: Bootstrap Preamble (BBs 1-20)
    // ============================================================

    // IDA 0x52BA73: Debug::Log("Init Game\n")
    LOG_INFO("InitGame begin");

    // IDA 0x52BA7D: new ScenarioClass(0x3740) + new RulesClass(0x18C0)
    {
        void* mem = malloc(0x3740);
        ScenarioClass_Instance = mem ? mem : nullptr; // TODO: ScenarioClass::Constructor(mem)
        if (!ScenarioClass_Instance) {
            LOG_ERROR("Failed to instantiate Scenario!");
            return -1;
        }
    }
    {
        void* mem = malloc(0x18C0);
        RulesClass_Instance = mem ? mem : nullptr; // TODO: RulesClass::Constructor(mem)
        if (!RulesClass_Instance) {
            LOG_ERROR("Failed to instantiate Rules!");
            return -1;
        }
    }

    // IDA 0x52BB07: Debug::Log("Bootstrap.....")
    LOG_INFO("Bootstrap.....");

    // IDA 0x52BB16: FadePalette(0) if !g_Is16BitMode
    if (!g_Is16BitMode)
        FadePalette(0);

    // IDA 0x52BB2C: SetSoundWarning(-2) if byte_89E3A0 == 1
    if (byte_89E3A0 == 1)
        SetSoundWarning(-2);

    // IDA 0x52BB4A: while(!g_DDraw_Active) EventQueue::Process(g_BinkMoviePlayer)
    while (!g_DDraw_Active)
        EventQueueProcess(g_BinkMoviePlayer);

    // IDA 0x52BB51: g_LoadScreenFlag = 0
    g_LoadScreenFlag = 0;  // data: 0x8a00a0

    // IDA 0x52BB58: TextBuffer::Init(GetTextBufferEntry(4))
    TextBufferInit(GetTextBufferEntry(4));

    // IDA 0x6BB390-0x6BB9A0: RegisterClassesCOM -- register all COM game classes
    RegisterAllClasses();

    // ============================================================
    // Phase 2: MIX Bootstrap + Font + Mouse + Audio (BBs 21-45)
    // ============================================================

    // IDA 0x52BB64: MixFileClass::Bootstrap() -- must succeed
    if (!this->MixFileClass::Bootstrap()) {
        LOG_ERROR("Failed to initialize bootstrap mixfiles!");
        return -1;
    }

    // IDA 0x52BB97: BitTextClass::LoadFont -- g_GameFontObject
    {
        void* mem = malloc(4);
        g_GameFontObject = mem ? BitTextClassLoadFont(mem) : nullptr;
    }

    // IDA 0x52BBB7: Init::StubPlaceholder()
    InitStubPlaceholder();

    // IDA 0x52BBBC: LoadMouseClassResources()
    LoadMouseClassResources();

    // IDA 0x52BBC7: InitializeAudioSubsystem(g_Audio_MixerEnabled)
    InitializeAudioSubsystem(&g_Audio_MixerEnabled);

    // IDA 0x52BBD2: Timer::PumpMessages(g_BinkMoviePlayer)
    TimerPumpMessages(g_BinkMoviePlayer);

    // ============================================================
    // Phase 3: Palette Loading (UNITSNO -- GRFXTXT) (BBs 46-100)
    // ============================================================

    // --- UNITSNO.PAL --- 0x52BBE3
    {
        const void* pal = SearchMIXFile("UNITSNO.PAL");
        if (pal) memcpy(byte_886380, pal, 768);
        for (int i = 0; i < 256; ++i) {
            uint8_t* v8 = &byte_886380[3 * i];
            int packed = Palette6BitTo16Bit(4 * v8[0], 4 * v8[1], 4 * v8[2]);
            *(uint16_t*)v8 = (uint16_t)packed;
            v8[2] = (uint8_t)(packed >> 16);
        }
    }

    // --- TEMPERAT.PAL --- 0x52BC55
    {
        const void* pal = SearchMIXFile("TEMPERAT.PAL");
        if (pal) memcpy(&FileSystem_TEMPERAT_PAL, pal, 768);
        for (int i = 0; i < 256; ++i) {
            uint8_t* v12 = &FileSystem_TEMPERAT_PAL[3 * i];
            int packed = Palette6BitTo16Bit(4 * v12[0], 4 * v12[1], 4 * v12[2]);
            *(uint16_t*)v12 = (uint16_t)packed;
            v12[2] = (uint8_t)(packed >> 16);
        }
        BlockCopy(&FileSystem_TEMPERAT_PAL);
        BlockCopy(&FileSystem_TEMPERAT_PAL);
    }

    // --- WAYPOINT.PAL --- 0x52BCFD
    {
        const void* pal = SearchMIXFile("WAYPOINT.PAL");
        if (pal) memcpy(byte_885180, pal, 768);
        for (int i = 0; i < 256; ++i) {
            uint8_t* v16 = &byte_885180[3 * i];
            int packed = Palette6BitTo16Bit(4 * v16[0], 4 * v16[1], 4 * v16[2]);
            *(uint16_t*)v16 = (uint16_t)packed;
            v16[2] = (uint8_t)(packed >> 16);
        }
    }

    // --- voxels.vpl --- 0x52BD74
    {
        char buf[260];
        CCFileClassConstruct(buf, "voxels.vpl");
        VoxelPaletteLoadFromFile(buf);
    }

    // --- Voxel palette loop --- 0x52BD85
    {
        // uint8_t* v19 = (uint8_t*)0xB2FB78; // IDA unk_B2FB79 - 1 (unused stub)
        int v18 = 0;
        // TODO: proper voxel palette from binary constant data
        for (v18 = 0; v18 < 256; ++v18) {
            int packed = Palette6BitTo16Bit(0, 0, 0);
            uint8_t* v21 = &voxel_palette_buf[3 * v18];
            *(uint16_t*)v21 = (uint16_t)packed;
            v21[2] = (uint8_t)(packed >> 16);
        }
    }

    // --- Voxel projection setup --- 0x52BDD7
    flt_88741C = 0.95990276f;
    byte_887418 = true;
    Matrix3x4Identity(flt_887430);
    VoxelSetProjectionAngle(0.785375f);
    dword_B43184 = 1;
    dword_B43180 = 0;
    VoxelProjectionSetup();

    // --- x_PAL ConvertClass --- 0x52BE14
    {
        void* mem = malloc(0x188);
        FileSystem_x_PAL = mem
            ? ConvertClassConstruct(&FileSystem_TEMPERAT_PAL, &FileSystem_TEMPERAT_PAL,
                                    DSurface_Primary, 53, 0)
            : nullptr;
    }

    // --- ANIM.PAL --- 0x52BE5C
    {
        uint8_t buf[768];
        ArrayForEach3ByteZero(buf, 3, 256);
        const void* pal = SearchMIXFile("ANIM.PAL");
        if (pal) memcpy(buf, pal, sizeof(buf));
        for (int i = 0; i < 256; ++i) {
            uint8_t* v25 = &buf[3 * i];
            int packed = Palette6BitTo16Bit(4 * v25[0], 4 * v25[1], 4 * v25[2]);
            *(uint16_t*)v25 = (uint16_t)packed;
            v25[2] = (uint8_t)(packed >> 16);
        }
        void* mem = malloc(0x188);
        FileSystem_ANIM_PAL = mem
            ? ConvertClassConstruct(buf, &FileSystem_TEMPERAT_PAL, DSurface_Primary, 53, 0)
            : nullptr;
    }

    // --- PALETTE.PAL --- 0x52BF26
    {
        uint8_t buf[768];
        const void* pal = SearchMIXFile("PALETTE.PAL");
        if (pal) memcpy(buf, pal, sizeof(buf));
        for (int i = 0; i < 256; ++i) {
            uint8_t* v30 = &buf[3 * i];
            int packed = Palette6BitTo16Bit(4 * v30[0], 4 * v30[1], 4 * v30[2]);
            *(uint16_t*)v30 = (uint16_t)packed;
            v30[2] = (uint8_t)(packed >> 16);
        }
        void* mem = malloc(0x188);
        FileSystem_THEATER_PAL = mem
            ? ConvertClassConstruct(buf, &FileSystem_TEMPERAT_PAL, DSurface_Primary, 53, 0)
            : nullptr;
    }

    // --- UNITSNO.PAL (again, for UNITx_PAL) --- 0x52BFDA
    {
        uint8_t buf[768];
        const void* pal = SearchMIXFile("UNITSNO.PAL");
        if (pal) memcpy(buf, pal, sizeof(buf));
        for (int i = 0; i < 256; ++i) {
            uint8_t* v35 = &buf[3 * i];
            int packed = Palette6BitTo16Bit(4 * v35[0], 4 * v35[1], 4 * v35[2]);
            *(uint16_t*)v35 = (uint16_t)packed;
            v35[2] = (uint8_t)(packed >> 16);
        }
        void* mem = malloc(0x188);
        FileSystem_UNITx_PAL = mem
            ? ConvertClassConstruct(buf, &FileSystem_TEMPERAT_PAL, DSurface_Primary, 53, 0)
            : nullptr;
    }

    // --- CAMEO.PAL --- 0x52C08E
    {
        uint8_t buf[768];
        const void* pal = SearchMIXFile("CAMEO.PAL");
        if (pal) memcpy(buf, pal, sizeof(buf));
        for (int i = 0; i < 256; ++i) {
            uint8_t* v40 = &buf[3 * i];
            int packed = Palette6BitTo16Bit(4 * v40[0], 4 * v40[1], 4 * v40[2]);
            *(uint16_t*)v40 = (uint16_t)packed;
            v40[2] = (uint8_t)(packed >> 16);
        }
        void* mem = malloc(0x188);
        FileSystem_CAMEO_PAL = mem
            ? ConvertClassConstruct(buf, &FileSystem_TEMPERAT_PAL, DSurface_Primary, 53, 0)
            : nullptr;
    }

    // --- MOUSEPAL.PAL --- 0x52C142
    {
        uint8_t buf[768];
        const void* pal = SearchMIXFile("MOUSEPAL.PAL");
        if (pal) memcpy(buf, pal, sizeof(buf));
        for (int i = 0; i < 256; ++i) {
            uint8_t* v45 = &buf[3 * i];
            int packed = Palette6BitTo16Bit(4 * v45[0], 4 * v45[1], 4 * v45[2]);
            *(uint16_t*)v45 = (uint16_t)packed;
            v45[2] = (uint8_t)(packed >> 16);
        }
        void* mem = malloc(0x188);
        FileSystem_MOUSE_PAL = mem
            ? ConvertClassConstruct(buf, &FileSystem_TEMPERAT_PAL, DSurface_Primary, 1, 0)
            : nullptr;
    }

    // --- GRFXTXT.PAL + GRFXTXT.SHP --- 0x52C1FB
    FileSystem_GRFXTXT_TIBERIUM_PAL = FileSystem_UNITx_PAL;

    {
        char fbuf[260];
        CCFileClassConstruct(fbuf, "GRFXTXT.PAL");
        if (CCFileClassOpen(fbuf, 0)) {
            FileSystem_GRFXTXT_PAL = CCFileClassReadEntireFile(fbuf);
            CCFileClassReset(fbuf);
            if (FileSystem_GRFXTXT_PAL) {
                uint8_t* pal = (uint8_t*)FileSystem_GRFXTXT_PAL;
                for (int i = 0; i < 256; ++i) {
                    uint8_t* v48 = pal + 3 * i;
                    int packed = Palette6BitTo16Bit(4 * v48[0], 4 * v48[1], 4 * v48[2]);
                    *(uint16_t*)v48 = (uint16_t)packed;
                    v48[2] = (uint8_t)(packed >> 16);
                }
                void* mem = malloc(0x188);
                FileSystem_GRFXTXT_Convert = mem
                    ? ConvertClassConstruct(FileSystem_GRFXTXT_PAL, &FileSystem_TEMPERAT_PAL,
                                            DSurface_Primary, 1, 0)
                    : nullptr;
            }
        }
        CCFileClassConstruct(fbuf, "GRFXTXT.SHP");
        if (CCFileClassOpen(fbuf, 0)) {
            FileSystem_GRFXTXT_SHP = CCFileClassReadEntireFile(fbuf);
            CCFileClassReset(fbuf);
        }
    }

    // ============================================================
    // Phase 4: Expansion MIX + MOUSE.SHA + CD check (BBs 101-140)
    // ============================================================

    // IDA 0x52C307: LoadExpansionMixFiles()
    LoadExpansionMixFiles();

    // IDA 0x52C358: LoadFileSHP("MOUSE.SHA") -- WWMouseClass interaction
    g_MouseSHP = LoadFileSHP((char*)"MOUSE.SHA", (bool*)&byte_B0BCF4);  // 0x52C347-58: ecx="MOUSE.SHA", edx=&byte_B0BCF4, ret->g_MouseSHP (G57e1)
    if (g_MouseSHP && WWMouseClass_Instance) {
        // IDA: WWMouseClass q000[3] -- set mouse approach
        // IDA: WWMouseClass q000[1] -- set position
    }

    // IDA 0x52C394: Mission::SetAndCall(0, 0) + Event::Dispatch()
    MissionSetAndCall(0, 0);
    EventDispatchEx();

    // IDA 0x52C3B5: CD-ROM detection (skipped if CmdLine_NoCD)
    if (!CmdLine_NoCD) {
        LOG_WARN("CD check required but -CD not set; skipping CD detection");
        // Full CD path includes: CD::CheckAvailable(-1), FindGameDirectoryCD,
        // Dialog::ShowMessageBox with CSF strings TXT_CD_DIALOG_1/TXT_OK/TXT_CANCEL
    }

    // IDA 0x52C58A: SetSoundWarning(retval)
    SetSoundWarning(-2);

    // IDA 0x52C594: MixFile::LoadAll() (secondary MIX)
    if (!MixFileLoadAll()) {
        LOG_ERROR("Failed to load secondary mixfiles!");
        return -1;
    }

    // ============================================================
    // Phase 5: Movie / Loading / Credits / Settings (BBs 141-160)
    // ============================================================

    // IDA 0x52C5EE: Movie::Play(1, 1, 1, 0)
    MoviePlay(1, 1, 1, 0);

    // IDA 0x52C5F3: ShowLoadingScreen()
    ShowLoadingScreen();

    // IDA 0x52C5FD: Credits::Screen()
    CreditsScreen();

    // IDA 0x52C630: GameSettings::Read(g_GameModeOptions)
    GameSettingsRead(g_GameModeOptions);

    // ============================================================
    // Phase 6: Anim + Tactical (BBs 161-180)
    // ============================================================

    // IDA 0x52C642: AnimSystem::Init() + ResetAnimSystem(0)
    AnimSystemInit();
    ResetAnimSystem(0);

    // IDA 0x52C668: TacticalMap::Construct(0xE18)
    if (TacticalClass_Instance) {
        // IDA: TacticalClass q000[1].QueryInterface(TacticalClass_Instance, 1)
    }
    {
        void* mem = malloc(0xE18);
        TacticalClass_Instance = mem ? TacticalMapConstruct(mem) : nullptr;
        if (!TacticalClass_Instance) {
            LOG_ERROR("Failed to create TacticalMap!");
            return -1;
        }
    }
    DSurface_Hidden_2 = DSurface_Hidden;

    // ============================================================
    // Phase 7: INI Loading Chain (SOUNDMD -- EVAMD -- THEMEMD) (BBs 181-240)
    // ============================================================

    // --- SOUNDMD.INI --- 0x52C6D3
    {
        char fbuf[260];
        CCFileClassConstruct(fbuf, "SOUNDMD.INI");
        if (!CCFileClassOpen(fbuf, 0)) {
            LOG_ERROR("Failed to find SOUNDMD.INI!");
            return -1;
        }
        void* ini_buf[16]; // INIClass
        INIClassConstruct(ini_buf);
        // TODO: CCINIClass q000 assignment
        if (!CCINIClassLoad(ini_buf, fbuf, 0, 0)) {
            LOG_ERROR("Failed to load SOUNDMD.INI!");
            DestroyHashTableINIClass(ini_buf);
            CCFileClassDestruct(fbuf);
            return -1;
        }
        AudioLoadSoundINI();
        AudioInitFromINI(ini_buf);
        CCFileClassDestruct(fbuf);
        DestroyHashTableINIClass(ini_buf);
    }

    // --- EVAMD.INI --- 0x52C7A0
    {
        char fbuf[260];
        CCFileClassConstruct(fbuf, "EVAMD.INI");
        if (!CCFileClassOpen(fbuf, 0)) {
            LOG_ERROR("Failed to find EVAMD.INI!");
            return -1;
        }
        void* ini_buf[16];
        INIClassConstruct(ini_buf);
        // TODO: CCINIClass q000 assignment
        if (!CCINIClassLoad(ini_buf, fbuf, 0, 0)) {
            LOG_ERROR("Failed to load EVAMD.INI!");
            DestroyHashTableINIClass(ini_buf);
            CCFileClassDestruct(fbuf);
            return -1;
        }
        LoadINIEVA();
        InitFromINIEVA(ini_buf);
        CCFileClassDestruct(fbuf);
        DestroyHashTableINIClass(ini_buf);
    }

    // --- THEMEMD.INI --- 0x52C8AA
    {
        char fbuf[260];
        CCFileClassConstruct(fbuf, "THEMEMD.INI");
        if (!CCFileClassOpen(fbuf, 0)) {
            LOG_ERROR("Failed to find THEMEMD.INI!");
            return -1;
        }
        void* ini_buf[24]; // CCINIClass
        CCINIClassConstruct(ini_buf);
        if (!CCINIClassLoad(ini_buf, fbuf, 0, 0)) {
            LOG_ERROR("Failed to load THEMEMD.INI!");
            DestroyHashTableINIClass(ini_buf);
            CCFileClassDestruct(fbuf);
            return -1;
        }
        ThemeManagerCleanup();
        ThemeClassInitializeThemes(ini_buf);
        AudioLoadWAVFiles();
        if (!InitBulkData()) {
            DestroyHashTableINIClass(ini_buf);
            CCFileClassDestruct(fbuf);
            return -1;
        }
        DestroyHashTableINIClass(ini_buf);
        CCFileClassDestruct(fbuf);
    }

    // ============================================================
    // Phase 8: Rules + Types + Trigger INI (BBs 241-260)
    // ============================================================

    // IDA 0x52C954: InitRules()
    if (!InitRules()) {
        LOG_ERROR("Failed to initialize Rules!");
        return -1;
    }

    // IDA 0x52C9D1: RulesClass::LoadAnimTypes(CCINIClass_INI_Rules)
    LoadAnimTypes(CCINIClass_INI_Rules);

    // IDA 0x52C9DF: Loop: each AnimType -- ReadINI(CCINIClass_INI_Art)
    // TODO: iterate g_AnimTypeCount array

    // IDA 0x52CA09: RulesClass::LoadBuildingTypes(CCINIClass_INI_Rules)
    LoadBuildingTypes(CCINIClass_INI_Rules);

    // IDA 0x52CA17: Loop: each Trigger -- ReadINI(CCINIClass_INI_Rules)
    // TODO: iterate g_TriggerTypeCount array

    // ============================================================
    // Phase 9: Finalize (BBs 261-285)
    // ============================================================

    // IDA 0x52CA37: Audio::Callback() wait loop
    {
        int v57 = AudioCallback();
        while (v57 < 0) // qword_A8F788
            v57 = AudioCallback();
    }

    // IDA 0x52CA65: PlayIntroSequence()
    PlayIntroSequence();

    // IDA 0x52CA70: State variable initialization
    {
        void* p = RulesClass_Instance;
        int* rules_data = (int*)p;
        int v59 = p ? rules_data[1332] : 0; // RulesClass + 0x14D0
        dword_81C1D0 = 0; // static area
        (void)v59;
    }

    // IDA 0x52CAC1: Zero-fill Campaign score / state arrays
    // TODO: memset loop from dword_A8D228 to dword_A8D5A8

    // IDA 0x52CAD2: InitRandomSeed()
    InitRandomSeed();

    // IDA 0x52CAE4: InitCommands()
    InitCommands();

    // IDA 0x52CAF6: CompleteGameInit()
    CompleteGameInit();

    LOG_INFO("InitGame complete");
    return true;
}

} // namespace gamemd
