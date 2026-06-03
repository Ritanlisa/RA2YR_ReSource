// InitRules + RulesClass members — IDA 0x52CD70 (1728B)
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
    // Initializes DynamicVectorClass<CCINIClass*> for multi-file INI chain

    // IDA 0x52CDB2: FindFirstFileA("RULEMD*.INI") loop
    // For each matching file:
    //   CCFileClass::Construct + INIClass::Construct + CCINIClass::Load
    // RULESMD.INI gets priority (inserted at front of vector)

    // IDA 0x52D0DF: if multiple INIs, show DialogBox(user chooses mod)
    // IDA 0x52D0FA: CCINIClass_INI_Rules = chosen INI

    // IDA 0x52D0FF: RulesClass::ReadColors(CCINIClass_INI_Rules)
    // IDA 0x52D111: RulesClass::ReadColorAdd(CCINIClass_INI_Rules)
    // IDA 0x52D121: RulesClass::ReadMovies(&CCINIClass_INI_Art)
    // IDA 0x52D132: RulesClass::ReadMiscINI(CCINIClass_INI_Rules)
    // IDA 0x52D144: ReadMultiplayerSettings(CCINIClass_INI_Rules)

    // IDA 0x52D159-0x52D20D: Copy RulesClass settings → global variables
    // g_Rules_Bases, MultiEngineer, AlliesAllowed, BridgeDestruction,
    // Bases, Crates, CTF, HarvesterTruce, ShortGame, SWAllowed, FOW, MCVRedeploy

    // IDA 0x52D231-0x52D317: Load LANGRULE.INI + RulesClass::Addition(lang_ini)
    // IDA 0x52D363-0x52D3A5: Load AIMD.INI (AI rules)

    // IDA 0x52D408: Cleanup DynamicVectorClass → return 1

    // Stub: TODO — full INI loading chain
    return true;
}

} // namespace gamemd

