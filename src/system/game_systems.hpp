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
    static void FillPlayerNames();  // 0x46F600
    // IDA 0x48B2A0 area
    static void SetupAllSpawnLocations();  // 0x46F8F0
    // IDA 0x48B2A0 area
    static void ReadSettings();  // 0x596C70
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
    static bool CheckDuplicate(const char* name);  // 0x5E9560
    // IDA 0x48B2A0 area
    static int32_t GetField(const char* name);  // 0x69ACC0
    // IDA 0x48B2A0 area
    static void SetDescriptionWStr(const wchar_t* desc);  // 0x69ACD0
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
    static bool IsValid(int32_t mode);  // 0x5D5DE0
    // IDA 0x48B2A0 area
    static void ReadFlagsFromINI();  // 0x6B8CA0

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
    static void Read();  // 0x5FA620
    // IDA 0x5FB050 area
    static void sub_5FB050();
    // IDA 0x5FB050 area
    static int32_t FindFlagged(int32_t flag);  // 0x7931A0

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
    static int32_t DlgProc(HWND hDlg, UINT msg, WPARAM wParam, LPARAM lParam);  // 0x5E6920
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
    static void Start(int32_t frames);  // 0x55E160
    // IDA 0x48B2A0 area
    static bool Check();  // 0x55F6C0

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
    static void Thunk();  // 0x77D710

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
    static bool CheckLauncher();  // 0x49F5C0
    // IDA 0x48B2A0 area
    static void NotifyLauncher();  // 0x49F620
    // IDA 0x48B2A0 area
    static bool CheckProtectedData();  // 0x49F7A0

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
    static void FreeAll();  // 0x472140

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
    static void* GetNext();  // 0x407470

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
    static float Gaussian();  // 0x5980C0
    // IDA 0x48B2A0 area
    static uint32_t State();  // 0x65C780
    // IDA 0x48B2A0 area
    static int32_t Range(int32_t min, int32_t max);  // 0x65C7E0
    // IDA 0x48B2A0 area
    static void Seed(uint32_t seed);

    static uint32_t s_Seed;         // 0x00
    static uint32_t s_State[4];     // 0x04
};


// === Batch-generated MISSING class stubs ===

// 1 methods in IDA
class GameInit
{
public:
    virtual ~GameInit() = default;

    virtual void InitMultiplayerModes() {} // IDA: 0x5D86D0

};
// 1 methods in IDA
class GameLobby
{
public:
    virtual ~GameLobby() = default;

    virtual void DlgProc() {} // IDA: 0x5E1CA0

};
// 2 methods in IDA
class GameOption_WorldDominationTour
{
public:
    virtual ~GameOption_WorldDominationTour() = default;

    virtual void QueryInterface() {} // IDA: 0x766A60
    virtual void Constructor() {} // IDA: 0x767300

    uint8_t GameOption_WorldDominationTour_field_0x04[4];
};
// 4 methods in IDA
class GameOptions
{
public:
    virtual ~GameOptions() = default;

    virtual void GameSpeedChanged() {} // IDA: 0x4E1DE0
    virtual void ReadSettings() {} // IDA: 0x5B8CE0
    virtual void SaveLoad() {} // IDA: 0x6812E0
    virtual void GetEntry() {} // IDA: 0x777B50

    uint8_t GameOptions_field_0x04[4];
    uint8_t GameOptions_field_0x08[4];
    uint8_t GameOptions_field_0x0C[4];
};
// 2 methods in IDA
class GameOptionsClass
{
public:
    virtual ~GameOptionsClass() = default;

    virtual void UnlockMovieIfNeeded_MoviesList() {} // IDA: 0x5FBF80
    virtual void PopulateMovieList() {} // IDA: 0x5FC000

    uint8_t GameOptionsClass_field_0x04[4];
};
// 1 methods in IDA
class GameResult
{
public:
    virtual ~GameResult() = default;

    virtual void CalcScore() {} // IDA: 0x4C6210

};
// 1 methods in IDA
class GameScreen
{
public:
    virtual ~GameScreen() = default;

    virtual void DlgProc() {} // IDA: 0x60D540

};
// 7 methods in IDA
class GameSetup
{
public:
    virtual ~GameSetup() = default;

    virtual void sub_477440() {} // IDA: 0x477440
    virtual void FormatToString() {} // IDA: 0x477510
    virtual void GetColorTooltip() {} // IDA: 0x4E42A0
    virtual void DisplayPlayers() {} // IDA: 0x5DAFE0
    virtual void CompareWideString() {} // IDA: 0x5E2670
    // +2 more virtual methods

    uint8_t GameSetup_field_0x04[4];
    uint8_t GameSetup_field_0x08[4];
    uint8_t GameSetup_field_0x0C[4];
    uint8_t GameSetup_field_0x10[4];
    uint8_t GameSetup_field_0x14[4];
    uint8_t GameSetup_field_0x18[4];
};
// 1 methods in IDA
class GameState
{
public:
    virtual ~GameState() = default;

    virtual void Reset() {} // IDA: 0x680FF0

};
// 12 methods in IDA
class LoadGame
{
public:
    virtual ~LoadGame() = default;

    virtual void LoadIteratedData() {} // IDA: 0x4136C0
    virtual void ClearAllSlots() {} // IDA: 0x413800
    virtual void DeserializePointerArrays() {} // IDA: 0x439260
    virtual void LoadBlock68() {} // IDA: 0x4C6320
    virtual void CleanupArray() {} // IDA: 0x54E6F0
    // +7 more virtual methods

    uint8_t LoadGame_field_0x04[4];
    uint8_t LoadGame_field_0x08[4];
    uint8_t LoadGame_field_0x0C[4];
    uint8_t LoadGame_field_0x10[4];
    uint8_t LoadGame_field_0x14[4];
    uint8_t LoadGame_field_0x18[4];
    uint8_t LoadGame_field_0x1C[4];
    uint8_t LoadGame_field_0x20[4];
    uint8_t LoadGame_field_0x24[4];
    uint8_t LoadGame_field_0x28[4];
    uint8_t LoadGame_field_0x2C[4];
};
// 3 methods in IDA
class LoadProgressMgr
{
public:
    virtual ~LoadProgressMgr() = default;

    virtual void GetInstance() {} // IDA: 0x552A40
    virtual void Destroy() {} // IDA: 0x552AA0
    virtual void ReleaseBuffer() {} // IDA: 0x554370

    uint8_t LoadProgressMgr_field_0x04[4];
    uint8_t LoadProgressMgr_field_0x08[4];
};
// 1 methods in IDA
class LoadSaveDialog
{
public:
    virtual ~LoadSaveDialog() = default;

    virtual void FillList() {} // IDA: 0x5596A0

};
// 6 methods in IDA
class LoadScreen
{
public:
    virtual ~LoadScreen() = default;

    virtual void RenderLoop() {} // IDA: 0x4B6C30
    virtual void InitVtable() {} // IDA: 0x4BA2F0
    virtual void Constructor() {} // IDA: 0x4BA340
    virtual void RenderProgressBackground() {} // IDA: 0x643400
    virtual void Render() {} // IDA: 0x643AE0
    // +1 more virtual methods

    uint8_t LoadScreen_field_0x04[4];
    uint8_t LoadScreen_field_0x08[4];
    uint8_t LoadScreen_field_0x0C[4];
    uint8_t LoadScreen_field_0x10[4];
    uint8_t LoadScreen_field_0x14[4];
};
// 16 methods in IDA
class LoadingScreen
{
public:
    virtual ~LoadingScreen() = default;

    virtual void Render() {} // IDA: 0x552D60
    virtual void AdjustForResolution() {} // IDA: 0x554100
    virtual void sub_554150() {} // IDA: 0x554150
    virtual void GetValue() {} // IDA: 0x642B20
    virtual void FindLoadScreenAnim() {} // IDA: 0x642B30
    // +11 more virtual methods

    uint8_t LoadingScreen_field_0x04[4];
    uint8_t LoadingScreen_field_0x08[4];
    uint8_t LoadingScreen_field_0x0C[4];
    uint8_t LoadingScreen_field_0x10[4];
    uint8_t LoadingScreen_field_0x14[4];
    uint8_t LoadingScreen_field_0x18[4];
    uint8_t LoadingScreen_field_0x1C[4];
    uint8_t LoadingScreen_field_0x20[4];
    uint8_t LoadingScreen_field_0x24[4];
    uint8_t LoadingScreen_field_0x28[4];
    uint8_t LoadingScreen_field_0x2C[4];
    uint8_t LoadingScreen_field_0x30[4];
    uint8_t LoadingScreen_field_0x34[4];
    uint8_t LoadingScreen_field_0x38[4];
    uint8_t LoadingScreen_field_0x3C[4];
};
// 7 methods in IDA
class MultiplayerGameMode
{
public:
    virtual ~MultiplayerGameMode() = default;  // 0x5D5D20

    virtual void Construct() {} // IDA: 0x5D5B60
    virtual void Dtor() {} // IDA: 0x5D5D20
    virtual void GetFirst() {} // IDA: 0x5D5E10
    virtual void ListGet() {} // IDA: 0x5D5ED0
    virtual void Find() {} // IDA: 0x5D5F30
    // +2 more virtual methods

    uint8_t MultiplayerGameMode_field_0x04[4];
    uint8_t MultiplayerGameMode_field_0x08[4];
    uint8_t MultiplayerGameMode_field_0x0C[4];
    uint8_t MultiplayerGameMode_field_0x10[4];
    uint8_t MultiplayerGameMode_field_0x14[4];
    uint8_t MultiplayerGameMode_field_0x18[4];
};
// 1 methods in IDA
class SaveLoad
{
public:
    virtual ~SaveLoad() = default;

    virtual void StreamVector() {} // IDA: 0x67A770

};
// 3 methods in IDA
class SaveLoadDialog
{
public:
    virtual ~SaveLoadDialog() = default;

    virtual void DlgProc() {} // IDA: 0x558DD0
    virtual void LookupDialogHash() {} // IDA: 0x608380
    virtual void FindDialogTemplate() {} // IDA: 0x6083E0

    uint8_t SaveLoadDialog_field_0x04[4];
    uint8_t SaveLoadDialog_field_0x08[4];
};
// 3 methods in IDA
class SkirmishDialog
{
public:
    virtual ~SkirmishDialog() = default;

    virtual void FillComboBoxes() {} // IDA: 0x4E3B90
    virtual void HandleGameStart() {} // IDA: 0x5B9A60
    virtual void Show() {} // IDA: 0x5E68A0

    uint8_t SkirmishDialog_field_0x04[4];
    uint8_t SkirmishDialog_field_0x08[4];
};
// 2 methods in IDA
class SkirmishMapGen
{
public:
    virtual ~SkirmishMapGen() = default;

    virtual void DlgProc() {} // IDA: 0x596300
    virtual void LookupDialogHash() {} // IDA: 0x6067A0

    uint8_t SkirmishMapGen_field_0x04[4];
};
// 1 methods in IDA
class SkirmishVector
{
public:
    virtual ~SkirmishVector() = default;

    virtual void PushBack() {} // IDA: 0x5EEE40

};
// 1 methods in IDA
class SyncDelayClass
{
public:
    virtual ~SyncDelayClass() = default;

    virtual void ProcessNetworkSync() {} // IDA: 0x55DEE0

};

} // namespace gamemd
