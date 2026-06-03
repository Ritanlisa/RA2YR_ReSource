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

// 0x7B2720: Dropout counter
void sub_7B2720(int value) { (void)value; }

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

// 0x69BAB0: WTFMode::Init
void WTFMode_Init(int* mode) { (void)mode; }

// 0x69BB40: WTFMode::Shutdown
void WTFMode_Shutdown(int* mode) { (void)mode; }

// 0x48E0B0: DumpNetworkStats
void DumpNetworkStats() {}

// 0x532100: ScreenSaver::Process
void ScreenSaver_Process(bool enable) { (void)enable; }

// 0x5F0070: CleanupCampaignResources
void CleanupCampaignResources() {}

// 0x5DA720: Network::ShutdownInterface
void NetworkShutdownInterface() {}

// 0x7241A0: Tooltip::Enable
void Tooltip_Enable(bool enable) { (void)enable; }

// 0x55D360: Game_Frame_Loop (declared in menu_select.cpp — stub here)
bool Game_Frame_Loop() { return false; }

// 0x55CFD0: Game_Frame_Check
bool Game_Frame_Check() { return false; }

// 0x48C8B0: Main_Game_Frame
void Main_Game_Frame() {}

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

} // namespace gamemd
