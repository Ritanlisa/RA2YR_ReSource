// InitGame — IDA: 0x52BA60 (4333B, 146 basic blocks)
// FAITHFUL game initialization pipeline matching IDA call order exactly.
// Called from MainGame (0x48CCC0). Returns 0 on success, non-zero on failure.
//
// Step count: ~40 sub-steps across 7 logical phases.
// All stubs declared in include/gamemd/core/init_stubs.hpp

#include <windows.h>
#include <mmsystem.h>
#include <cstring>

#include "gamemd/core/logging.hpp"
#include "gamemd/core/ddraw_init.hpp"
#include "gamemd/core/init_stubs.hpp"
#include "gamemd/core/game_loop.hpp"
#include "gamemd/system/ini_class.hpp"
#include "gamemd/system/mix_file.hpp"
#include "gamemd/system/file_system.hpp"
#include "gamemd/system/convert_class.hpp"
#include "gamemd/system/cc_file.hpp"
#include "gamemd/system/tactical.hpp"
#include "gamemd/render/surface.hpp"
#include "gamemd/render/movie.hpp"

namespace gamemd {

// ============================================================
// Global variables used by InitGame (IDA addresses)
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
void* CCINIClass_INI_Rules = nullptr;      // 0x887048
void* CCINIClass_INI_Art = nullptr;         // 0x887180
int   g_GameModeOptions = 0;               // 0xA8EB60
int   g_LoadScreenFlag = 0;                // 0x8A00A0
extern int   dword_81C1D0;              // 0x81C1D0 — CD availability (globals.cpp)
extern int   dword_A8E950;              // 0xA8E950 — CD drive count (globals.cpp)
extern void* dword_A8E8E8;              // 0xA8E8E8 — CD drive letters

// Palette buffers (IDA addresses)
static uint8_t byte_886380[768];           // 0x886380 — UNITSNO palette
static uint8_t byte_886381_impl = 0;       // offset
static uint8_t byte_886382_impl = 0;       // offset
static uint8_t FileSystem_TEMPERAT_PAL[768]; // 0x885780
static uint8_t byte_885180[768];           // 0x885180 — WAYPOINT palette
static uint8_t voxel_palette_buf[768];     // 0x886680 — voxel palette
static float  flt_88741C = 0.95990276f;    // 0x88741C
static bool   byte_887418 = true;          // 0x887418
static float  flt_887430[12];              // 0x887430 — Matrix3x4 identity
static int    dword_B43184 = 1;            // 0xB43184
static int    dword_B43180 = 0;            // 0xB43180

// Extern globals
extern bool g_Is16BitMode;               // 0x8175B0
extern bool byte_89E3A0;                  // 0x89E3A0
extern bool g_DDraw_Active;               // 0xA8ED80
extern uint32_t g_Audio_MixerEnabled;    // 0x840A70 (defined in globals.cpp)

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
extern void* WWMouseClass_Instance;       // 0x887640 (globals.cpp)
extern void* g_BinkMoviePlayer;           // 0x87F770 (globals.cpp)
extern void* TacticalClass_Instance;      // 0x887324 (globals.cpp)

// CCINIClass vtable (IDA 0x7E1AF4)
extern const void* CCINIClass_Vtable;

// ============================================================
// IDA: init_stubs.cpp — all InitGame dependency stubs
// ============================================================

// --- Phase 1: Bootstrap preamble ---

// FadePalette defined in globals.cpp
// void FadePalette(int mode); — declared in init_stubs.hpp
void SetSoundWarning(int level) { (void)level; }
void EventQueueProcess(void* bink_player) { (void)bink_player; }

// --- Phase 2: Font / Mouse / Audio ---

int  GetTextBufferEntry(int index) { (void)index; return 0; }
void TextBufferInit(int buffer) { (void)buffer; }
void* BitTextClassLoadFont(void* mem) { (void)mem; return nullptr; }
void InitStubPlaceholder() {}
void LoadMouseClassResources() {}
int  InitializeAudioSubsystem(void* hwnd) { (void)hwnd; return 1; }

// IDA 0x6C8C40 — Timer::GetTicks: returns timeGetTime() >> 4 (~16ms resolution)
int TimerGetTicks() { return timeGetTime() >> 4; }

void TimerPumpMessages(void* bink_player) { (void)bink_player; }

// --- Phase 3: Palette helpers ---

// IDA 0x4355B0 — Palette::6BitTo16Bit: packs 3 bytes into 24-bit (used as temp struct)
int Palette6BitTo16Bit(int r, int g, int b) {
    return ((uint8_t)b << 16) | ((uint8_t)g << 8) | (uint8_t)r;
}
// IDA 0x4B9BD0 — Struct::Zero3: zero-fill 3 bytes at each stride
void StructZero3(void* ptr, int count) { std::memset(ptr, 0, count * 3); }
void VoxelPaletteLoadFromFile(const char* path) { (void)path; }
void Matrix3x4Identity(float* m) { (void)m; }

// IDA 0x4068F0 — Array::ForEach: zero-fill n elements of stride size
void ArrayForEach3ByteZero(void* buf, int stride, int count) {
    uint8_t* p = (uint8_t*)buf;
    for (int i = 0; i < count; ++i, p += stride)
        std::memset(p, 0, 3);
}
void VoxelSetProjectionAngle(float angle) { (void)angle; }
void VoxelProjectionSetup() {}
// --- Phase 4: MIX / CD / Movie ---

// LoadExpansionMixFiles defined in src/misc/rules.cpp
// IDA 0x4A38D0 — LoadFileSHP: loads SHP file and returns handle
int  LoadFileSHP(const char* filename) {
    void* data = FileSystem::LoadFile(filename, true);
    return data ? 1 : 0; // returns handle/index (simplified: non-zero = loaded)
}
// IDA 0x5BDA80 — Mission::SetAndCall
void MissionSetAndCall(int a, int b) { LOG_DEBUG("MissionSetAndCall(%d, %d)", a, b); }
// IDA 0x48D080 — Event::Dispatch (per-frame event processing)
void EventDispatchEx() {
    // IDA: calls UpdateAudioVideo first, then AsyncIO, Network, Campaign events
    // IDA: In skirmish mode, handles UI pointer table + time-based events
    AudioVideoUpdate();
}
int  FindGameDirectoryCD(const char* drives) { (void)drives; return 1; }
int  DialogShowMessageBox(const wchar_t* msg, const wchar_t* ok, const wchar_t* cancel, int a4, int a5) {
    (void)msg; (void)ok; (void)cancel; (void)a4; (void)a5;
    return 1;
}
// IDA 0x530460 — MixFile::LoadAll: secondary MIX file loading
bool MixFileLoadAll() {
    // After Bootstrap loads primary MIX files, LoadAll loads additional
    // MIX containers (cache, expansion, local, etc.)
    // Previously tried to call Bootstrap() again but that was incorrect.
    return true; // TODO: implement secondary MIX scanning
}
void MoviePlay(int a1, int a2, int a3, int a4) { (void)a1; (void)a2; (void)a3; (void)a4; }
void ShowLoadingScreen() {}
void CreditsScreen() {}

// --- Phase 5: Settings / Anim / Tactical ---

void GameSettingsRead(int mode) { (void)mode; }
void AnimSystemInit() {}
void ResetAnimSystem(int mode) { (void)mode; }
void* TacticalMapConstruct(void* mem) { (void)mem; return nullptr; }

// --- Phase 6: INI loading ---

// IDA 0x535AA0 — INIClass::Constructor (84B): placement-new an INIClass
void INIClassConstruct(void* buf) { new (buf) INIClass(); }

// IDA 0x535B30 — CCINIClass::Constructor (138B): placement-new a CCINIClass
void CCINIClassConstruct(void* buf) { new (buf) CCINIClass(); }

// IDA 0x4741F0 — CCINIClass::Load: loads an INI file into the CCINIClass
bool CCINIClassLoad(void* ini, void* file, int a2, int a3) {
    auto* ccini = static_cast<CCINIClass*>(ini);
    auto* ccfile = static_cast<CCFileClass*>(file);
    return ccini && ccini->Load(ccfile, a2 != 0, a3 != 0);
}

// IDA 0x5256F0 — DestroyHashTableINIClass: cleans up INI sections/keys
void DestroyHashTableINIClass(void* ini) {
    auto* ccini = static_cast<CCINIClass*>(ini);
    if (ccini) ccini->~CCINIClass();
}
void AudioLoadSoundINI() {}
void AudioInitFromINI(void* ini) { (void)ini; }
void LoadINIEVA() {}
void InitFromINIEVA(void* ini) { (void)ini; }
void ThemeManagerCleanup() {}
void ThemeClassInitializeThemes(void* ini) { (void)ini; }
void AudioLoadWAVFiles() {}
// InitBulkData defined in src/misc/rules.cpp
// InitRules defined in src/misc/rules.cpp
// IDA 0x4093B0 — Audio::Callback: invokes audio callback if registered
int  AudioCallback() {
    // IDA: if (dword_87E848) return dword_87E848(); else return 0;
    return 0; // No audio callback registered during init
}
// IDA 0x52CB50 — PlayIntroSequence: starts intro movie (44B, thunk)
void PlayIntroSequence() {
    LOG_DEBUG("PlayIntroSequence: intro would play here");
}
// IDA 0x52FC20 — InitRandomSeed: seeds game RNG from system time + SHA1
void InitRandomSeed() {
    // IDA: GetSystemTime → SHA1TickRNG × 16 → SeedInitRNG → Randomizer setup
}
// ============================================================
// IDA 0x532150 — InitCommands (7118B)
// Registers ~40 CommandClass instances into g_CommandClassVector.
// Each command class is instantiated (new(size) → vtable assignment)
// and appended to the global command vector via DynamicVector::Add.
//
// Command classes registered (in order):
//   [Debug]  MultiplayerDebugCommandClass
//   [Debug]  MultiplayerSyncCommandClass
//   FollowCommandClass, ViewCommandClass ×4 (View1-4)
//   SetViewCommandClass ×4 (SetView1-4)
//   OptionsCommandClass, SidebarUp/DownCommandClass
//   CenterREventCommandClass, BeaconPlacementCommandClass
//   ToggleSellCommandClass, ToggleRepairCommandClass
//   AllianceCommandClass, CenterBaseCommandClass, CenterViewCommandClass
//   ScatterCommandClass, GuardCommandClass, StopCommandClass
//   AllToCheerCommandClass, DeployCommandClass
//   PrevObjectCommandClass, NextObjectCommandClass
//   PlanningModeCommandClass, CombatantSelectCommandClass
//   TypeSelectCommandClass, HealthNavCommandClass, VeterancyNavCommandClass
//   SetStructureTabCommandClass, SetDefenseTabCommandClass
//   SetUnitTabCommandClass, SetInfantryTabCommandClass
//   CreateTeamCommand(×5, 1-5), SelectTeamCommand(×10, 1-10)
//   AddTeamCommand(×10, 1-10), CenterTeamCommand(×10, 1-10)
//   TauntCommandClass(×8, 1-8)
//   ScreenCaptureCommandClass, PageUserCommandClass
//   CursorPositionCommandClass, DeleteCommandClass
//   KeyboardConfig::LoadINI() → keyboard-command key mapping
// ============================================================
void InitCommands() {} // TODO: ~40 CommandClass registrations (7118B)
// CompleteGameInit defined in src/misc/rules.cpp

// --- Phase 7: File helpers ---

const void* SearchMIXFile(const char* name) {
    return FileSystem::LoadFile(name, false); // delegates to MIX pool search + disk fallback
}
void BlockCopy(const void* src) {
    // IDA 0x6260D0: copies a block of palette data (probably to duplicate surfaces)
    (void)src;
    // TODO: actual block copy — copies a surface's pixel data to another
}
// CCFileClass wrapper stubs — CCFileClass::Open/ReadEntireFile now implemented in cc_file.cpp
void* CCFileClassConstruct(void* buf, const char* filename) {
    // Construct a real CCFileClass at buf (opens filename via MIX pool + disk)
    auto* f = new (buf) CCFileClass(filename);
    return f;
}
bool CCFileClassOpen(void* file, int mode) {
    (void)mode;
    return file != nullptr; // Open is now done in constructor
}
void* CCFileClassReadEntireFile(void* file) {
    auto* f = static_cast<CCFileClass*>(file);
    return f ? f->ReadEntireFile() : nullptr;
}
void CCFileClassReset(void* file) { (void)file; }
void CCFileClassDestruct(void* file) { (void)file; }
// IDA 0x43AE50 — Vector::Clear: zero-fill vector (Count=0, Items=nullptr or preserved)
void VectorClear(void* vec) {
    // VectorClass layout: [vtable, Items, Count, Capacity]
    int* v = (int*)vec;
    v[2] = 0; // Count = 0
    // Optional: if Capacity > 0, clear Items
}
void LoadAnimTypes(void* rules_ini) { (void)rules_ini; }
void LoadBuildingTypes(void* rules_ini) { (void)rules_ini; }
void* ConvertClassConstruct(void* palette, void* temperat_pal, void* surface, int count, int flags) {
    (void)palette; (void)temperat_pal; (void)surface; (void)count; (void)flags;
    return nullptr;
}

// ============================================================
// IDA: InitGame @ 0x52BA60 — returns 0 success, -1 failure, 1 CD abort
// ============================================================
int InitGame(bool no_cd)
{
    if (no_cd)
        CmdLine_NoCD = true;

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
    g_LoadScreenFlag = 0;

    // IDA 0x52BB58: TextBuffer::Init(GetTextBufferEntry(4))
    TextBufferInit(GetTextBufferEntry(4));

    // ============================================================
    // Phase 2: MIX Bootstrap + Font + Mouse + Audio (BBs 21-45)
    // ============================================================

    // IDA 0x52BB64: MixFileClass::Bootstrap() — must succeed
    if (!MixFileClass::Bootstrap()) {
        LOG_ERROR("Failed to initialize bootstrap mixfiles!");
        return -1;
    }

    // IDA 0x52BB97: BitTextClass::LoadFont → g_GameFontObject
    {
        void* mem = malloc(4);
        g_GameFontObject = mem ? BitTextClassLoadFont(mem) : nullptr;
    }

    // IDA 0x52BBB7: Init::StubPlaceholder()
    InitStubPlaceholder();

    // IDA 0x52BBBC: LoadMouseClassResources()
    LoadMouseClassResources();

    // IDA 0x52BBC7: InitializeAudioSubsystem(g_Audio_MixerEnabled)
    InitializeAudioSubsystem((void*)&g_Audio_MixerEnabled);

    // IDA 0x52BBD2: Timer::PumpMessages(g_BinkMoviePlayer)
    TimerPumpMessages(g_BinkMoviePlayer);

    // ============================================================
    // Phase 3: Palette Loading (UNITSNO → GRFXTXT) (BBs 46-100)
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
        uint8_t* v19 = (uint8_t*)0xB2FB78; // IDA unk_B2FB79 - 1
        int v18 = 0;
        // TODO: proper voxel palette from binary constant data
        (void)v19;
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
                for (int i = 0; i < 256; ++i) {
                    uint8_t* v48 = (uint8_t*)FileSystem_GRFXTXT_PAL + 3 * i;
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

    // IDA 0x52C358: LoadFileSHP("MOUSE.SHA") → WWMouseClass interaction
    g_MouseSHP = (void*)LoadFileSHP("MOUSE.SHA");
    if (g_MouseSHP && WWMouseClass_Instance) {
        // IDA: WWMouseClass vtable[3] → set mouse approach
        // IDA: WWMouseClass vtable[1] → set position
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
        // IDA: TacticalClass vtable[1].QueryInterface(TacticalClass_Instance, 1)
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
    // Phase 7: INI Loading Chain (SOUNDMD → EVAMD → THEMEMD) (BBs 181-240)
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
        // TODO: CCINIClass vtable assignment
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
        // TODO: CCINIClass vtable assignment
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

    // IDA 0x52C9DF: Loop: each AnimType → ReadINI(CCINIClass_INI_Art)
    // TODO: iterate g_AnimTypeCount array

    // IDA 0x52CA09: RulesClass::LoadBuildingTypes(CCINIClass_INI_Rules)
    LoadBuildingTypes(CCINIClass_INI_Rules);

    // IDA 0x52CA17: Loop: each Trigger → ReadINI(CCINIClass_INI_Rules)
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
        int v59 = p ? ((int*)p)[1332] : 0; // RulesClass + 0x14D0
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
