#pragma once

#include <cstdint>
#include <windows.h>
#include "core/enums.hpp"
#include "core/math.hpp"

namespace gamemd
{

class HouseClass;

// ============================================================================
// Skirmish — skirmish game setup (8 methods)
// IDA: FillPlayerNames, SetupAllSpawnLocations, ReadSettings
// ============================================================================
class Skirmish
{
public:
    // IDA 0x48B2A0 area
    static void FillPlayerNames();
    // IDA 0x48B2A0 area
    static void SetupAllSpawnLocations();
    // IDA 0x48B2A0 area
    static void ReadSettings();
    // IDA 0x48B2A0 area
    static void WriteSettings();
    // IDA 0x48B2A0 area
    static void SelectMap(const char* mapName);
    // IDA 0x48B2A0 area
    static void SetupAI();
    // IDA 0x48B2A0 area
    static void SetupColors();
    // IDA 0x48B2A0 area
    static void StartGame();

    static int32_t  s_PlayerCount;  // 0x00
    static int32_t  s_MapSize;      // 0x04
};

// ============================================================================
// GameOption — game option management (4 methods)
// IDA: CheckDuplicate, GetField, SetDescriptionWStr
// ============================================================================
class GameOption
{
public:
    // IDA 0x48B2A0 area
    static bool CheckDuplicate(const char* name);
    // IDA 0x48B2A0 area
    static int32_t GetField(const char* name);
    // IDA 0x48B2A0 area
    static void SetDescriptionWStr(const wchar_t* desc);
    // IDA 0x48B2A0 area
    static const wchar_t* GetDescription();

    static char     m_Name[64];     // 0x00
    static int32_t  m_Value;        // 0x40
};

// ============================================================================
// GameMode — game mode utilities (2 methods)
// IDA: IsValid, ReadFlagsFromINI
// ============================================================================
class GameMode
{
public:
    // IDA 0x48B2A0 area
    static bool IsValid(int32_t mode);
    // IDA 0x48B2A0 area
    static void ReadFlagsFromINI();

    static int32_t  s_CurrentMode;  // 0x00
    static int32_t  s_Flags;        // 0x04
};

// ============================================================================
// GameSettings — game settings management (3 methods)
// IDA: Read, sub_5FB050, FindFlagged
// ============================================================================
class GameSettings
{
public:
    // IDA 0x5FB050
    static void Read();
    // IDA 0x5FB050 area
    static void sub_5FB050();
    // IDA 0x5FB050 area
    static int32_t FindFlagged(int32_t flag);

    static int32_t  s_Settings[32]; // 0x00
};

// ============================================================================
// SkirmishSetup — skirmish setup dialog (2 methods)
// IDA: DlgProc, sub_608260
// ============================================================================
class SkirmishSetup
{
public:
    // IDA 0x608260
    static int32_t DlgProc(HWND hDlg, UINT msg, WPARAM wParam, LPARAM lParam);
    // IDA 0x608260 area
    void sub_608260();

    int32_t     SkirmishSetup_field_00;       // 0x00
    int32_t     SkirmishSetup_field_04;       // 0x04
};

// ============================================================================
// SyncDelay — network sync delay (2 methods)
// IDA: Start, Check
// ============================================================================
class SyncDelay
{
public:
    // IDA 0x48B2A0 area
    static void Start(int32_t frames);
    // IDA 0x48B2A0 area
    static bool Check();

    static int32_t  s_DelayFrames;  // 0x00
    static int32_t  s_CurrentFrame; // 0x04
};

// ============================================================================
// GameLoop — game loop management (1 method)
// IDA: Thunk
// ============================================================================
class GameLoop
{
public:
    // IDA 0x48B2A0 area
    static void Thunk();

    static bool     s_Running;      // 0x00
};

// ============================================================================
// CopyProtection — copy protection / SafeDisc (3 methods)
// IDA: CheckLauncher, NotifyLauncher, CheckProtectedData
// ============================================================================
class CopyProtection
{
public:
    // IDA 0x48B2A0 area
    static bool CheckLauncher();
    // IDA 0x48B2A0 area
    static void NotifyLauncher();
    // IDA 0x48B2A0 area
    static bool CheckProtectedData();

    static bool     s_LauncherOK;   // 0x00
    static bool     s_DataOK;       // 0x01
};

// ============================================================================
// CaptureManager — capture flag manager (1 method)
// IDA: FreeAll
// ============================================================================
class CaptureManager
{
public:
    // IDA 0x48B2A0 area
    static void FreeAll();

    static int32_t  s_Count;        // 0x00
};

// ============================================================================
// Queue — generic queue (1 method)
// IDA: GetNext
// ============================================================================
class Queue
{
public:
    // IDA 0x48B2A0 area
    static void* GetNext();

    static void*   s_Head;         // 0x00
    static void*   s_Tail;         // 0x04
};

// ============================================================================
// Random — random number generation (4 methods)
// IDA: Gaussian, State, Range
// ============================================================================
class Random
{
public:
    // IDA 0x48B2A0 area
    static float Gaussian();
    // IDA 0x48B2A0 area
    static uint32_t State();
    // IDA 0x48B2A0 area
    static int32_t Range(int32_t min, int32_t max);
    // IDA 0x48B2A0 area
    static void Seed(uint32_t seed);

    static uint32_t s_Seed;         // 0x00
    static uint32_t s_State[4];     // 0x04
};

} // namespace gamemd
