// IDA: ParseCommandLine @ 0x52F620 (1531B)
// FAITHFUL TRANSLATION from IDA decompilation
// Handles: -JABBER, -STR, -NOSTR, -NOAUDIO, -RECORD, -PLAY,
//          -?, -NOINTRO(hash), -CD, -DESTNET, -SOCKET,
//          -MPDEBUG, -DROP=, -SPEEDCONTROL, -DLINK1,
//          -NETGEAR, -NOROUTER, -STEALTH, -MESSAGES,
//          -ATTRACT, -%dX%d, -480, -16, -WIN, -X/-O
// NOTE: -SPAWN is NOT handled here (handled by injected spawner DLL via hook)

#pragma once

#include <windows.h>
#include <cstdint>

namespace gamemd {

// Legacy config struct for game_loop.cpp compatibility
struct GameConfig {
    bool no_cd = false;
    bool spawn_mode = false;
    bool windowed = false;
    bool enable_log = false;
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void* Constructor();  // 0x5D67B0
    int BuildChecksum();  // 0x77E7A0
    // --- gap2 auto-generated stub declarations (END) ---
};

// --- Global variables (IDA addresses) ---

// data: 0xA8E960: g_IntroMovieObject
extern int  g_IntroMovieObject;

// data: 0xA8ED6B: ArmageddonMode
extern bool ArmageddonMode;

// data: 0x840A70: g_Audio_MixerEnabled
extern uint32_t g_Audio_MixerEnabled;

// data: 0xA8F784: dword_A8F784 (record/playback mode)
extern int  dword_A8F784;

// data: 0x89E3A0: byte_89E3A0 (CD mode flag)
extern bool byte_89E3A0;

// data: 0xA8D600/A8D604/A8D608: dest IP address
extern uint32_t dword_A8D600;
extern uint32_t dword_A8D604;
extern uint32_t dword_A8D608;
extern bool dword_A8D5FC;

// data: 0xB04880, 0xA8B8B4: MP debug flags
extern bool byte_B04880;
extern bool byte_A8B8B4;

// data: 0xA8EDDC: byte_A8EDDC (speed control)
extern bool byte_A8EDDC;

// data: 0xB77E18: dword_B77E18 (router type)
extern int  dword_B77E18;

// data: 0xA8E2C8: byte_A8E2C8 (no router)
extern bool byte_A8E2C8;

// data: 0xA8D60C: byte_A8D60C (stealth)
extern bool byte_A8D60C;

// data: 0xA8D60D: byte_A8D60D (messages)
extern bool byte_A8D60D;

// data: 0xA8D5F8: g_NetworkEventPending
extern int  g_NetworkEventPending;

// data: 0xA8EB84/A8EB88: g_CommandLineFlags / g_CommandLineParam
extern int  g_CommandLineFlags;
extern int  g_CommandLineParam;

// data: 0x8175B0: g_Is16BitMode
extern bool g_Is16BitMode;

// data: 0x89F978: g_DDraw_Initialized (window mode)
extern int  g_DDraw_Initialized;

// data: 0xA8ED64: byte_A8ED64 (-XQ / -OQ flag)
extern bool byte_A8ED64;

// Forward declarations
void RestartNetworkSession(int mode);
void ToggleNetworkSession(int enable);
void ResetIntroFlags(int* obj);           // 0x6B8AE0 (ScenarioClass::ResetIntroFlags)
void FindGameDirectoryCD(const char* path); // 0x47AB10 (Game::FindGameDirectoryCD)
void NetworkAssignAddress(void* addr, void* port, int arg); // 0x53ECE0 (NetworkAddress::Assign)
void NetworkGetField(int port);           // 0x542430 (Network::GetField)
// IDA 0x7B2720 -- SessionClass::SetInstance
struct SessionClass;
void SessionClassSetInstance(int value);  // 0x7B2720
int  HashString(const char* str);         // 0x5F9E80 (Checksummer::HashString)
const wchar_t* GetCSFString(const wchar_t* key, const char* file, int line);

// IDA: ParseCommandLine @ 0x52F620
// Returns 1 on success, 0 on unrecognized argument
int ParseCommandLine(int argc, char** argv);  // 0x52F620

} // namespace gamemd
