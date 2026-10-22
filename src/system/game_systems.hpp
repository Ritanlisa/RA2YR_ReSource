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
    unsigned int u32_10;  // 0x10 (offset-truth)
    unsigned int u32_14;  // 0x14 (offset-truth)
    unsigned int u32_4;  // 0x4 (offset-truth)
    unsigned int u32_8;  // 0x8 (offset-truth)
    unsigned int u32_C;  // 0xC (offset-truth)
    unsigned char u32_D;  // 0xD (offset-truth)
    unsigned int *q000;  // 0x0 (canon-mt)
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
     int32_t GetField(const char* name);  // 0x69ACC0
    // IDA 0x48B2A0 area
     void SetDescriptionWStr(const wchar_t* desc);  // 0x69ACD0
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

// GameMode utility class removed: clashed with enums.hpp GameMode enum;
// IDA 0x5D5DE0 is __thiscall (member) - re-model in translation pass (C line).

// ============================================================================
// GameSettings — game settings management (3 methods)
// IDA: Read, sub_5FB050, FindFlagged
// ============================================================================
class GameSettings
{
public:
    // IDA 0x5FB050
     int Read();  // 0x5FA620
    // IDA 0x5FB050 area
    // design: static function, no direct binary match in IDA
    static void sub_5FB050();
    // IDA 0x5FB050 area
    static int32_t FindFlagged(int32_t flag);  // 0x7931A0
    // clamp-store [this+0xC] = min(value, 255); this = settings global @0xA83D10
    // (2026-09-07 归位：原 TechnoTypeClass::CheckFlag 误挂；3/3 调用方
    //  Options::SetScoreVolume/GameSettings::Read/AudioOptionsClass::ApplySettings
    //  均传 offset 0xA83D10，写入 score volume 0-255 int)
    void SetScoreVolume(int value);  // 0x721290

    static int32_t  s_Settings[32]; // 0x00
};

// ============================================================================
// SkirmishSetup — skirmish setup dialog (2 methods)
// IDA: DlgProc, sub_608260
// ============================================================================
// CSP: SkirmishSetup matched via T1
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
     void Start(int32_t frames);  // 0x55E160
    // IDA 0x48B2A0 area
     bool Check();  // 0x55F6C0

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
#ifndef GAMEMD_CAPTUREMANAGER_DECLARED  // G42.34: first-wins (misc_ext.hpp twin)
#define GAMEMD_CAPTUREMANAGER_DECLARED

#endif

// ============================================================================
// Queue — generic queue (1 method)
// IDA: GetNext
// ============================================================================
#ifndef GAMEMD_G2_Queue_DEF  // g57a5 W2d: twin-definition guard (game_systems Queue)
#define GAMEMD_G2_Queue_DEF 1
class Queue
{
public:
    // IDA 0x48B2A0 area
    static void* GetNext();  // 0x407470

    static void*   s_Head;         // 0x00
    static void*   s_Tail;         // 0x04
};
#endif  // GAMEMD_G2_Queue_DEF


// ============================================================================
// Random — random number generation (4 methods)
// IDA: Gaussian, State, Range
// ============================================================================

// === Batch-generated MISSING class stubs ===

// 1 methods in IDA
class GameInit
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~GameInit() = default;

    virtual void InitMultiplayerModes(int a2, int a3); // 0x5D86D0


    unsigned int u32_10;  // X10 supply (member_lookup)
    unsigned int u32_14;  // X10 supply (member_lookup)
    unsigned int u32_4;  // X10 supply (member_lookup)
    unsigned int u32_8;  // X10 supply (member_lookup)
    unsigned int u32_C;  // X10 supply (member_lookup)
    unsigned int u32_D;  // X10 supply (member_lookup)
};
// 1 methods in IDA
class GameLobby
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~GameLobby() = default;

    virtual int DlgProc(int a2, HWND hWnd, UINT, WPARAM, unsigned int a6); // 0x5E1CA0  // g57c5 W5f: raw int 真值同步 (C2562)

};
// 2 methods in IDA
// CSP: GameOption_WorldDominationTour matched via T1
class GameOption_WorldDominationTour
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~GameOption_WorldDominationTour() = default;

    virtual void QueryInterface(); // 0x766A60
    void* Constructor(); // 0x767300

    uint8_t u32_4[4];

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
};
// 4 methods in IDA
// CSP: GameOptions matched via T1
class GameOptions
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~GameOptions() = default;

    virtual void GameSpeedChanged(); // 0x4E1DE0
    virtual void ReadSettings(); // 0x5B8CE0
    virtual void SaveLoad(int a2); // 0x6812E0
    virtual void GetEntry(); // 0x777B50

    uint8_t GameOptions_field_0x04[4];
    uint8_t GameOptions_field_0x08[4];
    uint8_t q00C[4];
public:  // g57c5 W4b supply slot
    unsigned char *__pad_0;  // 0x0 g57c5 W4b (self-desc vocab, ml slot witness)

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q008;  // X10 supply (member_lookup)
    unsigned char u32_108[4];  /* wchar_t */  // X10 supply (member_lookup)
    unsigned int u32_188;  // X10 supply (member_lookup)
    unsigned int u32_18C;  // X10 supply (member_lookup)
    int u32_3D8;  // X10 supply (member_lookup)
    int u32_3E0;  // X10 supply (member_lookup)
    int u32_3E8;  // X10 supply (member_lookup)
    unsigned int u32_3F0;  // X10 supply (member_lookup)
    unsigned int u32_4;  // X10 supply (member_lookup)
};
// 2 methods in IDA
class GameOptionsClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~GameOptionsClass() = default;

    virtual char *UnlockMovieIfNeeded_MoviesList(void *a2); // 0x5FBF80  // G57w8: raw fn_5F.c 签名对齐 (char* thiscall(this, void*))
    virtual void PopulateMovieList(HWND hWnd); // 0x5FC000

    uint8_t q004[4];
};
// 1 methods in IDA
class GameResult
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~GameResult() = default;

    virtual void CalcScore(); // 0x4C6210


    unsigned int u32_34;  // X10 supply (member_lookup)
    unsigned int u32_38;  // X10 supply (member_lookup)
    unsigned int u32_3C;  // X10 supply (member_lookup)
    unsigned int u32_40;  // X10 supply (member_lookup)
};
// 1 methods in IDA
class GameScreen
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~GameScreen() = default;

    virtual void DlgProc(int a2, int a3, int a4, HWND hWnd, UINT Msg, WPARAM wParam, unsigned int a8); // 0x60D540  // [w14e3] raw param restore

};
// 7 methods in IDA
// CSP: GameSetup matched via T1
class GameSetup
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~GameSetup() = default;

    virtual void ParseCoordTriple(); // 0x477440
    virtual void FormatToString(); // 0x477510
    virtual void GetColorTooltip(); // 0x4E42A0
    virtual void DisplayPlayers(); // 0x5DAFE0
    virtual void CompareWideString(); // 0x5E2670
    // +2 more virtual methods

    uint8_t u32_4[4];
    uint8_t ptr_8[4];
    uint8_t GameSetup_field_0x0C[4];
    uint8_t u32_10[4];
    uint8_t u32_14[4];
    uint8_t u32_18[4];
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

    int Reset(); // 0x680FF0


    unsigned int u32_108;  // X10 supply (member_lookup)
    unsigned int u32_188;  // X10 supply (member_lookup)
    unsigned int u32_18C;  // X10 supply (member_lookup)
    unsigned int u32_190;  // X10 supply (member_lookup)
    unsigned int u32_294;  // X10 supply (member_lookup)
    unsigned int u32_2D4;  // X10 supply (member_lookup)
    unsigned int u32_3D8;  // X10 supply (member_lookup)
    unsigned int u32_3DC;  // X10 supply (member_lookup)
    unsigned int u32_3E0;  // X10 supply (member_lookup)
    unsigned int u32_3E4;  // X10 supply (member_lookup)
    unsigned int u32_3E8;  // X10 supply (member_lookup)
    unsigned int u32_3EC;  // X10 supply (member_lookup)
    unsigned int u32_3F0;  // X10 supply (member_lookup)
    unsigned int u32_4;  // X10 supply (member_lookup)
    unsigned int u32_8;  // X10 supply (member_lookup)
};
// 12 methods in IDA
// 3 methods in IDA
// CSP: LoadProgressMgr matched via T1
class LoadProgressMgr
{
public:
    virtual ~LoadProgressMgr() = default; // 0x552AA0

    int GetInstance(); // 0x552A40
    virtual void Destroy(); // 0x552AA0
    virtual void ReleaseBuffer(); // 0x554370

    uint8_t LoadProgressMgr_field_0x04[4];
    uint8_t q008[4];
};
// 1 methods in IDA
// CSP: LoadSaveDialog matched via T1
class LoadSaveDialog
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~LoadSaveDialog() = default;

    virtual void FillList(); // 0x5596A0


    unsigned int u32_10;  // X10 supply (member_lookup)
    unsigned int u32_20;  // X10 supply (member_lookup)
    unsigned int u32_24;  // X10 supply (member_lookup)
    unsigned int u32_28;  // X10 supply (member_lookup)
    unsigned int u32_2C;  // X10 supply (member_lookup)
    unsigned int u32_30;  // X10 supply (member_lookup)
    unsigned int u32_34;  // X10 supply (member_lookup)
    unsigned int u32_4;  // X10 supply (member_lookup)
    unsigned int u32_8;  // X10 supply (member_lookup)
};
// 6 methods in IDA
class LoadScreen
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~LoadScreen() = default;

    virtual void RenderLoop(); // 0x4B6C30
    virtual void InitVtable(); // 0x4BA2F0
    void* Constructor(); // 0x4BA340
    virtual void RenderProgressBackground(); // 0x643400
    virtual void Render(); // 0x643AE0
    // +1 more virtual methods

    uint8_t LoadScreen_field_0x04[4];
    uint8_t LoadScreen_field_0x08[4];
    uint8_t LoadScreen_field_0x0C[4];
    uint8_t q010[4];
    uint8_t q014[4];
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int IsActive();  // 0x643e60 -- LoadScreen::IsActive
    // === SYMBOL-ANCHOR (END) ===

    int q004;  // X10 supply (member_lookup)
    int q008;  // X10 supply (member_lookup)
    int q00C;  // X10 supply (member_lookup)
    unsigned int u32_54;  // X10 supply (member_lookup)
    unsigned int u32_71;  // X10 supply (member_lookup)
    unsigned int u32_74;  // X10 supply (member_lookup)
    unsigned char u8_D;  // X10 supply (member_lookup)
};
// 16 methods in IDA
// CSP: LoadingScreen matched via T1
class LoadingScreen
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~LoadingScreen() = default;

    virtual void Render(); // 0x552D60
    virtual void AdjustForResolution(); // 0x554100
    virtual void CalcProgressBarRect(); // 0x554150
    virtual void GetValue(); // 0x642B20
    virtual void FindLoadScreenAnim(); // 0x642B30
    // +11 more virtual methods

    uint8_t LoadingScreen_field_0x04[4];
    uint8_t q008[4];
    uint8_t LoadingScreen_field_0x0C[4];
    uint8_t LoadingScreen_field_0x10[4];
    uint8_t q014[4];
    uint8_t LoadingScreen_field_0x18[4];
    uint8_t LoadingScreen_field_0x1C[4];
    uint8_t LoadingScreen_field_0x20[4];
    uint8_t q024[4];
    uint8_t q028[4];
    uint8_t LoadingScreen_field_0x2C[4];
    uint8_t LoadingScreen_field_0x30[4];
    uint8_t q034[4];
    uint8_t q038[4];
    uint8_t LoadingScreen_field_0x3C[4];
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int GetColorScheme();  // 0x642b60 -- LoadingScreen::GetColorScheme
    void* GetBackgroundImage(int a1);  // 0x72b2f0 -- LoadingScreen::GetBackgroundImage
    void* GetOverlayImage(int a1);  // 0x72b310 -- LoadingScreen::GetOverlayImage
    int ReleaseAnimObjects();  // 0x72b390 -- LoadingScreen::ReleaseAnimObjects
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int FreeResources3();  // 0x72def0
    void DestroyFileTrees();  // 0x72ef60
    void CleanupObjects();  // 0x72f140
    void* LoadSHPs();  // 0x72fa10
    int FreeResources();  // 0x730400
    void FreeResources2();  // 0x730530
    // === FUNCS-MOVE (END) ===

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q004;  // X10 supply (member_lookup)
    int q00C;  // X10 supply (member_lookup)
    int q010;  // X10 supply (member_lookup)
    int q018;  // X10 supply (member_lookup)
    int q01C;  // X10 supply (member_lookup)
    int q020;  // X10 supply (member_lookup)
    int q02C;  // X10 supply (member_lookup)
    int q030;  // X10 supply (member_lookup)
    int q03C;  // X10 supply (member_lookup)
    unsigned char q084;  // X10 supply (member_lookup)
    bool u32_200;  // X10 supply (member_lookup)
    bool u32_201;  // X10 supply (member_lookup)
    bool u32_202;  // X10 supply (member_lookup)
    unsigned int u32_44;  // X10 supply (member_types)
    unsigned int u32_48;  // X10 supply (member_types)
    unsigned int u32_4C;  // X10 supply (member_types)

    unsigned int u32_80;  // X10 supply (member_lookup)
};
// 7 methods in IDA
// CSP: MultiplayerGameMode matched via T1
class MultiplayerGameMode
{
public:
    virtual ~MultiplayerGameMode() = default;  // 0x5D5D20

    int Construct(); // 0x5D5B60
    virtual void Dtor(); // 0x5D5D20
    virtual void GetFirst(); // 0x5D5E10
    virtual void ListGet(); // 0x5D5ED0
    virtual void Find(); // 0x5D5F30
    // +2 more virtual methods

    uint8_t MultiplayerGameMode_field_0x04[4];
    uint8_t MultiplayerGameMode_field_0x08[4];
    uint8_t MultiplayerGameMode_field_0x0C[4];
    uint8_t MultiplayerGameMode_field_0x10[4];
    uint8_t q014[4];
    uint8_t MultiplayerGameMode_field_0x18[4];
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* QueryInterface(int a1);  // 0x5d7f20 -- MultiplayerGameMode::QueryInterface
    void* ConstructMultiplayerGameModeVectorClass(int a1, int a2);  // 0x5d89f0 -- MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass
    // === SYMBOL-ANCHOR (END) ===

    int q010;  // X10 supply (member_lookup)
    int q018;  // X10 supply (member_lookup)
    unsigned char q020;  // X10 supply (member_lookup)
    ObjectClass* q044;  // X10 supply (member_lookup)
    ObjectClass* q048;  // X10 supply (member_lookup)
    unsigned int u32_15;  // X10 supply (member_lookup)
    unsigned int u32_38;  // X10 supply (member_lookup)
    unsigned int u32_8;  // X10 supply (member_lookup)
    unsigned int u32_C;  // X10 supply (member_lookup)
    void* ptr_0;  // X10 supply (csp_canon_members)
};
// 1 methods in IDA
class SaveLoad
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SaveLoad() = default;

    virtual void StreamVector(); // 0x67A770


    unsigned int u32_10;  // X10 supply (member_lookup)
    unsigned int u32_4;  // X10 supply (member_lookup)
};
// 3 methods in IDA
// CSP: SaveLoadDialog matched via T1
class SaveLoadDialog
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SaveLoadDialog() = default;

    virtual void DlgProc(); // 0x558DD0
    int LookupDialogHash(); // 0x608380
    int FindDialogTemplate(); // 0x6083E0

    uint8_t SaveLoadDialog_field_0x04[4];
    uint8_t SaveLoadDialog_field_0x08[4];

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q004;  // X10 supply (member_lookup)
    int q008;  // X10 supply (member_lookup)
    unsigned int u32_10;  // X10 supply (member_lookup)
    unsigned int u32_14;  // X10 supply (member_lookup)
    unsigned int u32_18;  // X10 supply (member_lookup)
    unsigned int u32_20;  // X10 supply (member_lookup)
    unsigned int u32_24;  // X10 supply (member_lookup)
    unsigned int u32_30;  // X10 supply (member_lookup)
    unsigned int u32_C;  // X10 supply (member_lookup)
};
// 3 methods in IDA
class SkirmishDialog
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SkirmishDialog() = default;

    virtual void FillComboBoxes(); // 0x4E3B90
    virtual void HandleGameStart(); // 0x5B9A60
    virtual void Show(); // 0x5E68A0

    uint8_t q004[4];
    uint8_t SkirmishDialog_field_0x08[4];

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q008;  // X10 supply (member_lookup)
};
// 2 methods in IDA
// CSP: SkirmishMapGen matched via T1
class SkirmishMapGen
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SkirmishMapGen() = default;

    virtual void DlgProc(); // 0x596300
    int LookupDialogHash(); // 0x6067A0

    uint8_t q004[4];
};
// 1 methods in IDA
class SkirmishVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SkirmishVector() = default;

    virtual void PushBack(); // 0x5EEE40


    unsigned int u32_10;  // X10 supply (member_lookup)
    unsigned int u32_14;  // X10 supply (member_lookup)
    unsigned int u32_20;  // X10 supply (member_lookup)
    unsigned int u32_4;  // X10 supply (member_lookup)
    unsigned int u32_8;  // X10 supply (member_lookup)
    unsigned int u32_D;  // X10 supply (member_lookup)
};
// 1 methods in IDA
class SyncDelayClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SyncDelayClass() = default;

    virtual void ProcessNetworkSync(); // 0x55DEE0

};

} // namespace gamemd
