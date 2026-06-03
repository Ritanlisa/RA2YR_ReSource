// InitRules + RulesClass members + game initialization functions
#include "gamemd/misc/rules.hpp"
#include "gamemd/core/init_stubs.hpp"

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
// Scans for ECACHE*.MIX and ELOCAL*.MIX in current directory,
// adds each found file to the MIX pool via MixFileClass::FromFile.
// ============================================================
bool LoadExpansionMixFiles()
{
    // IDA phase 1: FindFirstFileA("ECACHE*.MIX") → for each file:
    //   MixFileClass::FromFile(0x28 bytes) → add to g_MixFilePool
    //   ReturnTrue(0) — validate MIX

    // IDA phase 2: FindFirstFileA("ELOCAL*.MIX") → same pattern
    //   These are local/expansion MIX files (mod containers)

    return true; // TODO: FindFirstFile + MixFileClass::FromFile loop
}

// ============================================================
// IDA 0x531680 — InitBulkData (561B)
// Validates MIX files loaded, generates range rings and lightning
// glow textures, loads drop pod VXL+HVA models.
// ============================================================
bool InitBulkData()
{
    // IDA: Check g_MixFile_CONQMD, CONQUER, CAMEOMD, CAMEO all valid
    // IDA: Event::Dispatch() × 2 (allow UI updates)
    // IDA: MouseClass::LoadTypeData(&MapClass_Instance)
    // IDA: BulkData::InitMissionHashing(&GameMode_Current)
    // IDA: FileSystem::InitPipShapes() × 6 (various pip types)
    // IDA: GenerateRangeRingTextures()
    // IDA: GenerateLightningStormGlow()
    // IDA: CCFileClass("DPOD.VXL") → File::LoadFileVXL → dword_A8ECD8
    // IDA: CCFileClass("DPOD.HVA") → File::LoadFileHVA → dword_A8ECDC
    return true; // TODO: full bulk data initialization
}

// ============================================================
// IDA 0x5D7CE0 — CompleteGameInit (362B)
// Registers 6 multiplayer game modes (Battle, ManBattle, Siege,
// Unholy, FreeForAll, Cooperative) via MultiplayerGameMode::Initializer.
// ============================================================
void CompleteGameInit()
{
    // IDA 0x5D7CE5: for (i = 0; ; ++i)
    //   if (!(g_MultiplayerMode & 1))
    //     g_MultiplayerMode |= 1
    //     GameInit::sub_5D86D0(0, 0)
    //     atexit(MultiplayerConfig::Cleanup)
    //   if (i >= g_MultiplayerGameList) break
    //   vtb[i] → Initialize(1) — activate multiplayer mode

    // IDA 0x5D7D45: LoadMultiplayerModesList "Battle"
    // IDA 0x5D7D6C: LoadMultiplayerModesList "ManBattle"
    // IDA 0x5D7D98: LoadMultiplayerModesList "Siege"
    // IDA 0x5D7DC4: LoadMultiplayerModesList "Unholy"
    // IDA 0x5D7DF0: LoadMultiplayerModesList "FreeForAll"
    // IDA 0x5D7E1C: LoadMultiplayerModesList "Cooperative"
    // TODO: full multiplayer mode registration
}

} // namespace gamemd


