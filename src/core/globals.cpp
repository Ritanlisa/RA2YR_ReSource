// Global variable definitions and stub functions required by
// the faithful IDA translations of core game functions.
// IDA address annotations refer to the original gamemd.exe binary.

#include <windows.h>
#include <cstdint>
#include <cstring>

#include "gamemd/core/vector.hpp"
#include "gamemd/object/object.hpp"

namespace gamemd {

using ra2::game::ObjectClass;

DynamicVectorClass<ObjectClass*> g_current_objects;
DynamicVectorClass<ObjectClass*>& CurrentObjects = g_current_objects;

// ============================================================
// Command line globals (ParseCommandLine @ 0x52F620)
// ============================================================

int  g_IntroMovieObject    = 0;   // 0xA8E960
bool ArmageddonMode        = false; // 0xA8ED6B
uint32_t g_Audio_MixerEnabled = 1; // 0x840A70 (default: audio enabled)
int  dword_A8F784          = 0;   // 0xA8F784 (record/playback: 0=normal, 1=record, 2=play)
bool byte_89E3A0           = false; // 0x89E3A0 (-CD flag)
uint32_t dword_A8D600      = 0;   // 0xA8D600 (dest IP net)
uint32_t dword_A8D604      = 0;   // 0xA8D604
uint32_t dword_A8D608      = 0;   // 0xA8D608
bool dword_A8D5FC           = false; // 0xA8D5FC (-DESTNET set)
bool byte_B04880           = false; // 0xB04880 (MP debug)
bool byte_A8B8B4           = false; // 0xA8B8B4 (MP debug 2)
bool byte_A8EDDC           = false; // 0xA8EDDC (-SPEEDCONTROL)
int  dword_B77E18          = 0;   // 0xB77E18 (router: 0=default, 1=DLINK1, 2=NETGEAR)
bool byte_A8E2C8           = true;  // 0xA8E2C8 (no router, default: router enabled)
bool byte_A8D60C           = false; // 0xA8D60C (-STEALTH)
bool byte_A8D60D           = true;  // 0xA8D60D (-MESSAGES, default: messages)
int  g_NetworkEventPending = 0;   // 0xA8D5F8 (network event flags)
int  g_CommandLineFlags    = 0;   // 0xA8EB84
int  g_CommandLineParam    = 0;   // 0xA8EB88
bool g_Is16BitMode         = false; // 0x8175B0
int  g_DDraw_Initialized   = 0;   // 0x89F978 (window mode flag)
bool byte_A8ED64           = false; // 0xA8ED64 (-XQ / -OQ)

// 0xA8ED80 — g_DDraw_Active (defined in ddraw_init.cpp, declared here for core access)
extern bool g_DDraw_Active;

// ============================================================
// Stub functions (TODO: full IDA translation)
// ============================================================

// 0x734F50: RestartNetworkSession
void RestartNetworkSession(int mode) { (void)mode; }

// 0x734F80: ToggleNetworkSession
void ToggleNetworkSession(int enable) { (void)enable; }

// 0x6B8AE0: ScenarioClass::ResetIntroFlags
void ResetIntroFlags(int* obj) { (void)obj; }

// 0x47AB10: Game::FindGameDirectoryCD
void FindGameDirectoryCD(const char* path) { (void)path; }

// 0x53ECE0: NetworkAddress::Assign
void NetworkAssignAddress(void* addr, void* port, int arg) { (void)addr; (void)port; (void)arg; }

// 0x542430: Network::GetField
void NetworkGetField(int port) { (void)port; }

// IDA 0x7B2720 — SessionClass::SetInstance (defined in app/cmdline.cpp)

// ============================================================
// MainGame (0x48CCC0) — required global variables
// ============================================================

// 0x81D4E0: g_MenuReturnState — next MenuSelect state
int  g_MenuReturnState = 1;

// 0xA8E7AC: IKnowWhatImDoing — developer skip flag
bool IKnowWhatImDoing = false;

// 0xA8B238: GameMode_Current — current game mode (0=menu, 1/2=campaign, 3=internet, 4=skirmish, 5=setup)
int  GameMode_Current = 0;

// 0xA8EDA0: g_MainGameState — in-game UI state (0=idle, 1-9=UI screens)
int  g_MainGameState = 0;

// 0xA8ED9C: g_GameActive — game active flag
bool g_GameActive = false;

// 0xA8ED84: CurrentFrame — frame counter
int  CurrentFrame = 0;

// 0x822CFC: g_GameLoopActive — game loop running flag
bool g_GameLoopActive = true;

// 0xA8F900: g_SkirmishInitFlag — skirmish initialized
bool g_SkirmishInitFlag = false;

// 0xB0BDB8: g_SkirmishSettings — skirmish config pointer
int  g_SkirmishSettings = 0;

// 0xB0BD78: g_SkirmishFlag — skirmish mode flag
bool g_SkirmishFlag = false;

// 0xA8EB80: byte_A8EB80 — toolbar option flag
bool byte_A8EB80 = false;

// ============================================================
// MainGame stub functions
// ============================================================

// 0x4A3C30: FadePalette
void FadePalette(int mode) { (void)mode; }

// 0x6C87F0: InitSkirmishSettings
void InitSkirmishSettings() {}

// 0x69BAB0: WTFMode::Init (see game_loop.hpp struct)
// 0x69BB40: WTFMode::Shutdown (see game_loop.hpp struct)

// 0x48E0B0: DumpNetworkStats
void DumpNetworkStats() {}

// 0x532100: ScreenSaver::Process (see game_loop.hpp struct)

// 0x5F0070: CleanupCampaignResources
void CleanupCampaignResources() {}

// 0x5DA720: Network::ShutdownInterface
void NetworkShutdownInterface() {}

// IDA: 0x6E6FF0 — BuildingLoadQueue_FindObject
// These globals are used by all object constructors (Unit/Infantry/Aircraft/Building)
// for orderly post-construction initialization via binary search queue

// 0xB0E840: BuildingLoadQueue_Array — array of (id, object*) pairs
void* BuildingLoadQueue_Array = nullptr;

// 0xB0E844: BuildingLoadQueue_Count — number of entries in queue
int BuildingLoadQueue_Count = 0;

// 0xB0E848: BuildingLoadQueue_Capacity — allocated capacity
int BuildingLoadQueue_Capacity = 0;

// 0xB0E84C: BuildingLoadQueue_Dirty — queue needs resort
bool BuildingLoadQueue_Dirty = false;

// 0xB0E850: BuildingLoadQueue_Active — cached active entry
void* BuildingLoadQueue_Active = nullptr;

// ============================================================
// GameFrameLoop (0x55D360) — required global variables
// ============================================================

// 0xA8E9A0: WTFMode — game loop control flag
int WTFMode = 0;

// 0xABCD58: byte_ABCD58 — frame processing active flag
bool byte_ABCD58 = false;

// 0xA8E378: g_FramePresent_State — frame presentation state
int g_FramePresent_State = 0;

// 0xA8B55C: dword_A8B55C — frame start timestamp (timeGetTime)
int dword_A8B55C = 0;

// 0xA8B550: g_ScenarioState — scenario state counter
int g_ScenarioState = 30;

// 0xA8B558: dword_A8B558 — game speed setting (FPS)
int dword_A8B558 = 0;

// 0x887328: g_TacticalState — tactical render state
int g_TacticalState = -1;

// 0xABCD04: dword_ABCE04 — frame sync delay
int dword_ABCE04 = 0;

// 0x88732C: dword_88732C — timer high-precision data
int dword_88732C = 0;

// 0x887330: dword_887330 — frame interval (ms)
int dword_887330 = 33;

// 0x887348: dword_887348 — frame timer start
int dword_887348 = 0;

// 0x88734C: dword_88734C — frame timer value
int dword_88734C = 0;

// 0x887350: dwMilliseconds — frame delay milliseconds
int dwMilliseconds = 2;

// 0xA8ED72: byte_A8ED72 — high precision timer flag
bool byte_A8ED72 = false;

// 0xA8B560: ArgList — argument list for timing
int ArgList = 0;

// 0xA8B564: dword_A8B564 — frame counter
int dword_A8B564 = 0;

// 0xA83D14: dword_A83D14 — theme queue state
int dword_A83D14 = 0;

// 0xA83D18: dword_A83D18 — theme queue backup
int dword_A83D18 = 0;

// 0xA8EBA5: byte_A8EBA5 — theme enabled flag
bool byte_A8EBA5 = false;

// 0xA8EC08: BombListClass_Array
void* BombListClass_Array = nullptr;

// 0xA8EC0C: dword_A8EC0C
int dword_A8EC0C = 0;

// 0xA8EC00: dword_A8EC00 — mouse input flags
int dword_A8EC00 = 0;

// 0xA8EC04: dword_A8EC04 — mouse input flags 2
int dword_A8EC04 = 0;

// 0x87F8DC: g_Cell_PositionLUT — cell position lookup table
int g_Cell_PositionLUT = 0;

// 0x87F8E0: g_CellPositionOffset — cell position offset
int g_CellPositionOffset = 0;

// 0xABCE14: dword_ABCE14 — input flags
int dword_ABCE14 = 0;

// 0xB07784: dword_B07784 — mouse update frame counter
int dword_B07784 = 0;

// ============================================================

// 0x5F9E80: Checksummer::HashString
int HashString(const char* str) {
    // Simplified CRC-like hash — full implementation would use the 256-entry table @ 0x81F7B4
    if (!str) return 0;
    int hash = 0;
    while (*str) {
        hash = ((hash >> 8) & 0x00FFFFFF) ^ (hash ^ (unsigned char)toupper(*str)) * 0x100;
        ++str;
    }
    return hash;
}

// 0x734E60: GetStringCSF — returns "TXT_KEY" as placeholder
const wchar_t* GetCSFString(const wchar_t* key, const char* file, int line) {
    (void)file; (void)line;
    if (!key) return L"";
    return key; // Return key as placeholder until CSF is implemented
}

// IDA: 0x55D360 — GameFrameLoop stub
bool GameFrameLoop() { return false; }

// IDA: 0x55CFD0 — GameFrameCheck stub
bool GameFrameCheck() { return false; }

// IDA: 0x48C8B0 — MainGameFrame stub
void MainGameFrame() {}

// IDA: 0x87F7E8 — MapClass_Instance (global tactical map)
void* MapClass_Instance = nullptr;

// IDA: 0x4F42F0 — MapClass::MarkForRedraw (see system/map.hpp)

// IDA: Scene/Scenario related globals
void* TacticalClass_Instance = nullptr; // 0x887324
void* DSurface_Hidden = nullptr;        // 0x88730C
void* DSurface_Hidden_2 = nullptr;      // 0x887314
void* DSurface_Primary = nullptr;       // 0x887308

// IDA: 0xA8ED9D — byte_A8ED9D (network state flag)
bool byte_A8ED9D = false;

// IDA: 0x822CF2 — MoveFeedback (UI feedback flag)
int MoveFeedback = 1;

// IDA: 0xA83D48/49 — game state flags
bool byte_A83D48 = false;
bool byte_A83D49 = false;

// IDA: 0x8B41C0 — byte_8B41C0 (restart flag)
bool byte_8B41C0 = false;

// IDA: 0xA8ECD0 — g_NetResponseActive
bool g_NetResponseActive = false;

// IDA: 0xA8ECB8 — ObjectClass_CurrentObjects (global object list)
void* ObjectClass_CurrentObjects = nullptr;

// IDA: 0xA8ECBC — g_ObjectClass_CurrentCount
void* g_ObjectClass_CurrentCount = nullptr;

// IDA: 0xA8ECC8 — g_SelectionManager (selection count)
int   g_SelectionManager = 0;

// IDA: 0xA8E368-A8E374 — Object placement pool system
int   g_PlacementCellPool = 0;    // 0xA8E370
int   dword_A8E368 = 0;
int   dword_A8E374 = 0;
void* dword_A8E360 = nullptr;    // 0xA8E360
void* dword_A8E364 = nullptr;    // 0xA8E364
bool  byte_A8E36D = false;       // 0xA8E36D

// IDA: Object AlphaShape pool globals
int   g_AlphaShapePool = 0;       // 0xB0F730
void* dword_B0F724 = nullptr;     // 0xB0F724
int   dword_B0F728 = 0;           // 0xB0F728
bool  byte_B0F72D = false;        // 0xB0F72D
int   dword_B0F734 = 0;           // 0xB0F734

// IDA: Anim pool globals
int   g_AnimTypePool = 0;         // 0xB0F678
void* g_AnimManager = nullptr;     // 0xB0F680
bool  g_AnimPoolLocked = false;    // 0xB0F67D
int   g_AnimManagerConfig = 0;     // 0xB0F684
void* g_AnimPoolManager = nullptr; // 0xB0F670

// IDA: Laser draw globals
int   g_LaserDrawConfig = 0;       // 0xB0F6A8
void* g_DiskLaserManager = nullptr; // 0xB0F698
void* dword_B0F69C = nullptr;      // 0xB0F69C
int   dword_B0F6A0 = 0;            // 0xB0F6A0
bool  byte_B0F6A5 = false;         // 0xB0F6A5
int   dword_B0F6AC = 0;            // 0xB0F6AC

// IDA: Cell/Map globals
void* g_Shroud_CellArray = nullptr; // 0x87F924
int   dword_87F928 = 0;             // 0x87F928
int   g_Map_GlobalCellIndex = 0;     // 0xABDC74

// IDA: 0xA8E950 — dword_A8E950 (CD drive count)
int   dword_A8E950 = 0;

// IDA: 0xA8E8E8 — dword_A8E8E8 (CD drive letters array)
int   dword_A8E8E8 = 0;

// IDA: 0x81C1D0 — dword_81C1D0 (CD availability flag)
int   dword_81C1D0 = 0;

// IDA: 0xB0F6D8 — Foot object pool state
int   dword_B0F6D8 = 0;
void* dword_B0F6CC = nullptr;
int   dword_B0F6D0 = 0;
bool  byte_B0F6D5 = false;
int   dword_B0F6DC = 0;
void* dword_B0F6C8 = nullptr;

// IDA: 0x887640 — WWMouseClass_Instance
void* WWMouseClass_Instance = nullptr;

// IDA: 0x87F770 — g_BinkMoviePlayer
void* g_BinkMoviePlayer = nullptr;

} // namespace gamemd
