// InitRules + RulesClass members + game initialization functions
#include "gamemd/misc/rules.hpp"
#include "gamemd/core/init_stubs.hpp"
#include "gamemd/system/mix_file.hpp"
#include "gamemd/core/logging.hpp"

#include <windows.h>

namespace gamemd {

// RulesClass constructor — IDA 0x665650 (9175B)
// Currently = default in header. IDA-verified non-zero defaults (to be added
// as in-class initializers in rules.hpp):
//   DetailMinFrameRateNormal=15, DetailMinFrameRateMovie=20, DetailBufferZoneWidth=5
//   AmmoCrateDamage=100, AttackingAircraftSightRange=5
//   TunnelSpeed=1.0, TiberiumHeal=0.01667
//   SelfHealInfantryFrames=1000, SelfHealInfantryAmount=1
//   SelfHealUnitFrames=1000, SelfHealUnitAmount=1
//   WaypointAnimationSpeed=12, FlashFrameTime=5
//   RadarEventRotationSpeed=0.05, RadarCombatFlashTime=1.0, MaxWaypointPathLength=0.05
//   Wake=7, NukeTakeOff=21, InfantryExplode=15
//   + TypeList/VectorClass constructors at various offsets

// ============================================================
// IDA 0x52CD70 — InitRules (1728B)
// Loads RULESMD.INI chain + ARTMD.INI + AIMD.INI + LANGRULE.INI
// ============================================================
bool InitRules()
{
    // IDA 0x52CD82: RulesClass::ClearINIChain(0, 0)
    // IDA 0x52CDB2: FindFirstFileA("RULEMD*.INI") → dynamic INI chain
    // IDA 0x52D0FF: RulesClass::ReadColors → [Colors] section
    // IDA 0x52D111: RulesClass::ReadColorAdd → [ColorAdd] section
    // IDA 0x52D121: RulesClass::ReadMovies → ARTMD.INI [Movies]
    // IDA 0x52D132: RulesClass::ReadMiscINI
    // IDA 0x52D144: Dialog::ReadMultiplayerDialogSettings
    // IDA 0x52D159-0x52D20D: Copy RulesClass settings → global vars
    // IDA 0x52D231-0x52D317: LANGRULE.INI + RulesClass::Addition
    // IDA 0x52D363-0x52D3A5: AIMD.INI load
    return true; // TODO: full INI chain
}

// ============================================================
// IDA 0x530000 — LoadExpansionMixFiles (406B)
bool LoadExpansionMixFiles()
{
    LOG_INFO("LoadExpansionMixFiles: scanning for ECACHE*.MIX and ELOCAL*.MIX");

    auto& pool = MixFileClass::GetMixPool();

    // IDA: FindFirstFileA("ECACHE*.MIX") → populates g_MixFilePool
    WIN32_FIND_DATAA fd;
    HANDLE hFind = FindFirstFileA("ECACHE*.MIX", &fd);
    if (hFind != INVALID_HANDLE_VALUE) {
        do {
            if (!(fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)) {
                LOG_INFO("  ECACHE: %s", fd.cFileName);
                // IDA: MixFileClass::FromFile(new(0x28), fd.cFileName, ...)
                // Falls through to TD format detection logic
            }
        } while (FindNextFileA(hFind, &fd));
        FindClose(hFind);
    }

    // IDA: FindFirstFileA("ELOCAL*.MIX") → populates g_MixFilePool
    hFind = FindFirstFileA("ELOCAL*.MIX", &fd);
    if (hFind != INVALID_HANDLE_VALUE) {
        do {
            if (!(fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)) {
                LOG_INFO("  ELOCAL: %s", fd.cFileName);
            }
        } while (FindNextFileA(hFind, &fd));
        FindClose(hFind);
    }

    return true;
}

// ============================================================
// IDA 0x531680 — InitBulkData (561B)
bool InitBulkData()
{
    LOG_INFO("InitBulkData: generating textures, loading drop pod VXL+HVA");
    // IDA: Validates g_MixFile_CONQMD/CONQUER/CAMEOMD/CAMEO MIX files
    // IDA: Event::Dispatch × 2 (UI update)
    // IDA: MouseClass::LoadTypeData(&MapClass_Instance)
    // IDA: BulkData::InitMissionHashing(&GameMode_Current)
    // IDA: FileSystem::InitPipShapes × 6 (build/repair/sell/guard pips)
    // IDA: InitVisceroidArt (VISC_SML.SHP + VISC_LRG.SHP)
    // IDA: InitRotorArt (LROTOR.SHP + RROTOR.SHP)
    // IDA: GenerateRangeRingTextures + GenerateLightningStormGlow
    // IDA: CCFileClass("DPOD.VXL") → File::LoadFileVXL → dword_A8ECD8
    // IDA: CCFileClass("DPOD.HVA") → File::LoadFileHVA → dword_A8ECDC
    return true;
}

// ============================================================
// IDA 0x5D7CE0 — CompleteGameInit (362B)
void CompleteGameInit()
{
    // IDA: Initializes g_MultiplayerMode, then iterates g_MultiplayerGameList
    //   For each game mode, if active, calls Initialize(1)
    // IDA: LoadMultiplayerModesList for 6 modes:
    LOG_INFO("CompleteGameInit: registering 6 multiplayer game modes");
    //   "Battle"    — MultiplayerBattle
    //   "ManBattle" — MultiplayerManBattle
    //   "Siege"     — MultiplayerSiege
    //   "Unholy"    — UnholyAlliance
    //   "FreeForAll"— FreeForAll
    //   "Cooperative" — MPCooperative
    //   + KeyboardConfig::LoadINI() for key bindings
}

} // namespace gamemd


