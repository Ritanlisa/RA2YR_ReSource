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
    // design: static function, no direct binary match in IDA
    static void WriteSettings();
    // IDA 0x48B2A0 area
    // design: static function, no direct binary match in IDA
    static void SelectMap(const char* mapName);
    // IDA 0x48B2A0 area
    // design: static function, no direct binary match in IDA
    static void SetupAI();
    // IDA 0x48B2A0 area
    // design: static function, no direct binary match in IDA
    static void SetupColors();
    // IDA 0x48B2A0 area
    // design: static function, no direct binary match in IDA
    static void StartGame();

    static int32_t  s_PlayerCount;  // 0x00
    static int32_t  s_MapSize;      // 0x04
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int RandomizeSettings(int a1);  // 0x597260 -- Skirmish::RandomizeSettings
    int RenderPreview();  // 0x640710 -- Skirmish::RenderPreview
    int EnableSpawnButtons();  // 0x6acd60 -- Skirmish::EnableSpawnButtons
    int SetupGame();  // 0x6ae6e0 -- Skirmish::SetupGame
    // === SYMBOL-ANCHOR (END) ===
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
    // design: static function, no direct binary match in IDA
    static const wchar_t* GetDescription();

    static char     m_Name[64];     // 0x00
    static int32_t  m_Value;        // 0x40
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* SetDigest(int a1);  // 0x69ad80 -- GameOption::SetDigest
    // === SYMBOL-ANCHOR (END) ===
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
    // design: static function, no direct binary match in IDA
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
    // design: no binary equivalent found in IDA
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
    // design: static function, no direct binary match in IDA
    static void Seed(uint32_t seed);

    static uint32_t s_Seed;         // 0x00
    static uint32_t s_State[4];     // 0x04
};


// === Batch-generated MISSING class stubs ===

// 1 methods in IDA
class GameInit
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~GameInit() = default;

    virtual void InitMultiplayerModes() {} // 0x5D86D0

};
// 1 methods in IDA
class GameLobby
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~GameLobby() = default;

    virtual void DlgProc() {} // 0x5E1CA0

};
// 2 methods in IDA
class GameOption_WorldDominationTour
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~GameOption_WorldDominationTour() = default;

    virtual void QueryInterface() {} // 0x766A60
    virtual void Constructor() {} // 0x767300

    uint8_t GameOption_WorldDominationTour_field_0x04[4];
};
// 4 methods in IDA
class GameOptions
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~GameOptions() = default;

    virtual void GameSpeedChanged() {} // 0x4E1DE0
    virtual void ReadSettings() {} // 0x5B8CE0
    virtual void SaveLoad() {} // 0x6812E0
    virtual void GetEntry() {} // 0x777B50

    uint8_t GameOptions_field_0x04[4];
    uint8_t GameOptions_field_0x08[4];
    uint8_t GameOptions_field_0x0C[4];
};
// 2 methods in IDA
class GameOptionsClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~GameOptionsClass() = default;

    virtual void UnlockMovieIfNeeded_MoviesList() {} // 0x5FBF80
    virtual void PopulateMovieList() {} // 0x5FC000

    uint8_t GameOptionsClass_field_0x04[4];
};
// 1 methods in IDA
class GameResult
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~GameResult() = default;

    virtual void CalcScore() {} // 0x4C6210

};
// 1 methods in IDA
class GameScreen
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~GameScreen() = default;

    virtual void DlgProc() {} // 0x60D540

};
// 7 methods in IDA
class GameSetup
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~GameSetup() = default;

    virtual void sub_477440() {} // 0x477440
    virtual void FormatToString() {} // 0x477510
    virtual void GetColorTooltip() {} // 0x4E42A0
    virtual void DisplayPlayers() {} // 0x5DAFE0
    virtual void CompareWideString() {} // 0x5E2670
    // +2 more virtual methods

    uint8_t GameSetup_field_0x04[4];
    uint8_t GameSetup_field_0x08[4];
    uint8_t GameSetup_field_0x0C[4];
    uint8_t GameSetup_field_0x10[4];
    uint8_t GameSetup_field_0x14[4];
    uint8_t GameSetup_field_0x18[4];
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int LookupDialogHash();  // 0x60d320 -- GameSetup::LookupDialogHash
    int WriteINI(int a1, int a2);  // 0x698f90 -- GameSetup::WriteINI
    // === SYMBOL-ANCHOR (END) ===
};
// 1 methods in IDA
class GameState
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~GameState() = default;

    virtual void Reset() {} // 0x680FF0

};
// 12 methods in IDA
class LoadGame
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~LoadGame() = default;

    virtual void LoadIteratedData() {} // 0x4136C0
    virtual void ClearAllSlots() {} // 0x413800
    virtual void DeserializePointerArrays() {} // 0x439260
    virtual void LoadBlock68() {} // 0x4C6320
    virtual void CleanupArray() {} // 0x54E6F0
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
    virtual ~LoadProgressMgr() = default; // 0x552AA0

    virtual void GetInstance() {} // 0x552A40
    virtual void Destroy() {} // 0x552AA0
    virtual void ReleaseBuffer() {} // 0x554370

    uint8_t LoadProgressMgr_field_0x04[4];
    uint8_t LoadProgressMgr_field_0x08[4];
};
// 1 methods in IDA
class LoadSaveDialog
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~LoadSaveDialog() = default;

    virtual void FillList() {} // 0x5596A0

};
// 6 methods in IDA
class LoadScreen
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~LoadScreen() = default;

    virtual void RenderLoop() {} // 0x4B6C30
    virtual void InitVtable() {} // 0x4BA2F0
    virtual void Constructor() {} // 0x4BA340
    virtual void RenderProgressBackground() {} // 0x643400
    virtual void Render() {} // 0x643AE0
    // +1 more virtual methods

    uint8_t LoadScreen_field_0x04[4];
    uint8_t LoadScreen_field_0x08[4];
    uint8_t LoadScreen_field_0x0C[4];
    uint8_t LoadScreen_field_0x10[4];
    uint8_t LoadScreen_field_0x14[4];
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int IsActive();  // 0x643e60 -- LoadScreen::IsActive
    // === SYMBOL-ANCHOR (END) ===
};
// 16 methods in IDA
class LoadingScreen
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~LoadingScreen() = default;

    virtual void Render() {} // 0x552D60
    virtual void AdjustForResolution() {} // 0x554100
    virtual void sub_554150() {} // 0x554150
    virtual void GetValue() {} // 0x642B20
    virtual void FindLoadScreenAnim() {} // 0x642B30
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
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int GetColorScheme();  // 0x642b60 -- LoadingScreen::GetColorScheme
    void* GetBackgroundImage(int a1);  // 0x72b2f0 -- LoadingScreen::GetBackgroundImage
    void* GetOverlayImage(int a1);  // 0x72b310 -- LoadingScreen::GetOverlayImage
    int ReleaseAnimObjects();  // 0x72b390 -- LoadingScreen::ReleaseAnimObjects
    // === SYMBOL-ANCHOR (END) ===
};
// 7 methods in IDA
class MultiplayerGameMode
{
public:
    virtual ~MultiplayerGameMode() = default;  // 0x5D5D20

    virtual void Construct() {} // 0x5D5B60
    virtual void Dtor() {} // 0x5D5D20
    virtual void GetFirst() {} // 0x5D5E10
    virtual void ListGet() {} // 0x5D5ED0
    virtual void Find() {} // 0x5D5F30
    // +2 more virtual methods

    uint8_t MultiplayerGameMode_field_0x04[4];
    uint8_t MultiplayerGameMode_field_0x08[4];
    uint8_t MultiplayerGameMode_field_0x0C[4];
    uint8_t MultiplayerGameMode_field_0x10[4];
    uint8_t MultiplayerGameMode_field_0x14[4];
    uint8_t MultiplayerGameMode_field_0x18[4];
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* QueryInterface(int a1);  // 0x5d7f20 -- MultiplayerGameMode::QueryInterface
    void* ConstructMultiplayerGameModeVectorClass(int a1, int a2);  // 0x5d89f0 -- MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass
    // === SYMBOL-ANCHOR (END) ===
};
// 1 methods in IDA
class SaveLoad
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SaveLoad() = default;

    virtual void StreamVector() {} // 0x67A770

};
// 3 methods in IDA
class SaveLoadDialog
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SaveLoadDialog() = default;

    virtual void DlgProc() {} // 0x558DD0
    virtual void LookupDialogHash() {} // 0x608380
    virtual void FindDialogTemplate() {} // 0x6083E0

    uint8_t SaveLoadDialog_field_0x04[4];
    uint8_t SaveLoadDialog_field_0x08[4];
};
// 3 methods in IDA
class SkirmishDialog
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SkirmishDialog() = default;

    virtual void FillComboBoxes() {} // 0x4E3B90
    virtual void HandleGameStart() {} // 0x5B9A60
    virtual void Show() {} // 0x5E68A0

    uint8_t SkirmishDialog_field_0x04[4];
    uint8_t SkirmishDialog_field_0x08[4];
};
// 2 methods in IDA
class SkirmishMapGen
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SkirmishMapGen() = default;

    virtual void DlgProc() {} // 0x596300
    virtual void LookupDialogHash() {} // 0x6067A0

    uint8_t SkirmishMapGen_field_0x04[4];
};
// 1 methods in IDA
class SkirmishVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SkirmishVector() = default;

    virtual void PushBack() {} // 0x5EEE40

};
// 1 methods in IDA
class SyncDelayClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SyncDelayClass() = default;

    virtual void ProcessNetworkSync() {} // 0x55DEE0

};

} // namespace gamemd
