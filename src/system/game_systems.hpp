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


// === Batch-generated MISSING class stubs ===

// 1 methods in IDA
class GameInit
{
public:
    virtual ~GameInit() = default;

    virtual void InitMultiplayerModes() {} // 0x5d86d0

};
// 1 methods in IDA
class GameLobby
{
public:
    virtual ~GameLobby() = default;

    virtual void DlgProc() {} // 0x5e1ca0

};
// 2 methods in IDA
class GameOption_WorldDominationTour
{
public:
    virtual ~GameOption_WorldDominationTour() = default;

    virtual void QueryInterface() {} // 0x766a60
    virtual void Constructor() {} // 0x767300

    uint8_t GameOption_WorldDominationTour_field_0x04[4];
};
// 4 methods in IDA
class GameOptions
{
public:
    virtual ~GameOptions() = default;

    virtual void GameSpeedChanged() {} // 0x4e1de0
    virtual void ReadSettings() {} // 0x5b8ce0
    virtual void SaveLoad() {} // 0x6812e0
    virtual void GetEntry() {} // 0x777b50

    uint8_t GameOptions_field_0x04[4];
    uint8_t GameOptions_field_0x08[4];
    uint8_t GameOptions_field_0x0C[4];
};
// 2 methods in IDA
class GameOptionsClass
{
public:
    virtual ~GameOptionsClass() = default;

    virtual void UnlockMovieIfNeeded_MoviesList() {} // 0x5fbf80
    virtual void PopulateMovieList() {} // 0x5fc000

    uint8_t GameOptionsClass_field_0x04[4];
};
// 1 methods in IDA
class GameResult
{
public:
    virtual ~GameResult() = default;

    virtual void CalcScore() {} // 0x4c6210

};
// 1 methods in IDA
class GameScreen
{
public:
    virtual ~GameScreen() = default;

    virtual void DlgProc() {} // 0x60d540

};
// 7 methods in IDA
class GameSetup
{
public:
    virtual ~GameSetup() = default;

    virtual void sub_477440() {} // 0x477440
    virtual void FormatToString() {} // 0x477510
    virtual void GetColorTooltip() {} // 0x4e42a0
    virtual void DisplayPlayers() {} // 0x5dafe0
    virtual void CompareWideString() {} // 0x5e2670
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

    virtual void Reset() {} // 0x680ff0

};
// 12 methods in IDA
class LoadGame
{
public:
    virtual ~LoadGame() = default;

    virtual void LoadIteratedData() {} // 0x4136c0
    virtual void ClearAllSlots() {} // 0x413800
    virtual void DeserializePointerArrays() {} // 0x439260
    virtual void LoadBlock68() {} // 0x4c6320
    virtual void CleanupArray() {} // 0x54e6f0
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

    virtual void GetInstance() {} // 0x552a40
    virtual void Destroy() {} // 0x552aa0
    virtual void ReleaseBuffer() {} // 0x554370

    uint8_t LoadProgressMgr_field_0x04[4];
    uint8_t LoadProgressMgr_field_0x08[4];
};
// 1 methods in IDA
class LoadSaveDialog
{
public:
    virtual ~LoadSaveDialog() = default;

    virtual void FillList() {} // 0x5596a0

};
// 6 methods in IDA
class LoadScreen
{
public:
    virtual ~LoadScreen() = default;

    virtual void RenderLoop() {} // 0x4b6c30
    virtual void InitVtable() {} // 0x4ba2f0
    virtual void Constructor() {} // 0x4ba340
    virtual void RenderProgressBackground() {} // 0x643400
    virtual void Render() {} // 0x643ae0
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

    virtual void Render() {} // 0x552d60
    virtual void AdjustForResolution() {} // 0x554100
    virtual void sub_554150() {} // 0x554150
    virtual void GetValue() {} // 0x642b20
    virtual void FindLoadScreenAnim() {} // 0x642b30
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
    virtual ~MultiplayerGameMode() = default;

    virtual void Construct() {} // 0x5d5b60
    virtual void Dtor() {} // 0x5d5d20
    virtual void GetFirst() {} // 0x5d5e10
    virtual void ListGet() {} // 0x5d5ed0
    virtual void Find() {} // 0x5d5f30
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

    virtual void StreamVector() {} // 0x67a770

};
// 3 methods in IDA
class SaveLoadDialog
{
public:
    virtual ~SaveLoadDialog() = default;

    virtual void DlgProc() {} // 0x558dd0
    virtual void LookupDialogHash() {} // 0x608380
    virtual void FindDialogTemplate() {} // 0x6083e0

    uint8_t SaveLoadDialog_field_0x04[4];
    uint8_t SaveLoadDialog_field_0x08[4];
};
// 3 methods in IDA
class SkirmishDialog
{
public:
    virtual ~SkirmishDialog() = default;

    virtual void FillComboBoxes() {} // 0x4e3b90
    virtual void HandleGameStart() {} // 0x5b9a60
    virtual void Show() {} // 0x5e68a0

    uint8_t SkirmishDialog_field_0x04[4];
    uint8_t SkirmishDialog_field_0x08[4];
};
// 2 methods in IDA
class SkirmishMapGen
{
public:
    virtual ~SkirmishMapGen() = default;

    virtual void DlgProc() {} // 0x596300
    virtual void LookupDialogHash() {} // 0x6067a0

    uint8_t SkirmishMapGen_field_0x04[4];
};
// 1 methods in IDA
class SkirmishVector
{
public:
    virtual ~SkirmishVector() = default;

    virtual void PushBack() {} // 0x5eee40

};
// 1 methods in IDA
class SyncDelayClass
{
public:
    virtual ~SyncDelayClass() = default;

    virtual void ProcessNetworkSync() {} // 0x55dee0

};

} // namespace gamemd