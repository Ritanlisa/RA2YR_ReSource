// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TagTypeClass;  // fix_fwd_type_supply
struct TriggerTypeClass;  // fix_fwd_type_supply
struct Coord;  // fix_fwd_type_supply
struct AnimClass;  // fix_fwd_type_supply
struct ScenarioClass;  // fix_fwd_type_supply

struct TActionClass {
    void* ptr_0;  // 0x0
    void* ptr_4;  // 0x4
    void* ptr_8;  // 0x8
    void* ptr_C;  // 0xC
    int uniqueId;  // 0x10
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    int idxArray;  // 0x24
    void* TActionClass_field_28;  // 0x28
    AbstractClass* TActionClass_field_2C;  // 0x2C
    void* TActionClass_field_30;  // 0x30
    void* TActionClass_field_34;  // 0x34
    void* TActionClass_field_38;  // 0x38
    AbstractClass* TActionClass_field_3C;  // 0x3C
    void* TActionClass_field_40;  // 0x40
    AbstractClass * TActionClass_field_44;  // 0x44
    void* TActionClass_field_48;  // 0x48
    AbstractClass* TActionClass_field_4C;  // 0x4C
    void* TActionClass_field_50;  // 0x50
    unsigned char TActionClass_field_54;  // 0x54
    char pad_55[24];  // 0x55
    unsigned char TActionClass_field_6D;  // 0x6D
    char pad_6E[73];  // 0x6E
    unsigned char __pad_0B7;  // 0xB7
    void* TActionClass_field_90;  // 0xB8
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    char ConvertHouseUnits(int a2, int _14, unsigned int *a3, int aP4);  // G57w10-S raw 0x006E0B60 IUnknown 占位清除
    char CreateWeaponImpactAtWaypoint(int a2, int a3, int a4, int aP4);  // G57w10-S raw 0x006E2390 IUnknown 占位清除
    char executeGeneticMutatorAction(int a2, int a3, int a4, int aP4);  // G57w10-S raw 0x006E4150 IUnknown 占位清除
    char executeEscortAction(int a2, int a3, int a4, int aP4);  // G57w10-S raw 0x006E2290 IUnknown 占位清除
    AnimClass * * executeRetreatAction(AbstractClass * aP1, int a3, int a4, AbstractClass * aP4);
    ScenarioClass * * SpawnMeteorShower(AbstractClass * aP1, int a3, int a4, AbstractClass * aP4);
    TActionClass();
    char CreateNukeEffect(AbstractClass * aP1, int a3, int a4, AbstractClass * aP4);
    char PlayAudioAtRandomWP(int a2, int a3, int a4, int a5);
    char RevealTileTypeAtWaypoint(int a2, int a3, int a4, int aP4);  // G57w10-S raw 0x006E11C0 IUnknown 占位清除
    char RevealWaypointArea(int a2, int a3, int a4, int aP4);  // G57w10-S raw 0x006E0FE0 IUnknown 占位清除
    char executeCaptureAction(void *a1, int _C, unsigned int *a3, int aP4);  // G57w10-S raw 0x006E0CA0 IUnknown 占位清除
char executeChronoSphereAction(int a2, int a3, int a4, IUnknown * aP4);
char executeChronoshiftAction(int a2, int a3, int a4, IUnknown * aP4);
char executeCloseGateAction(int a2, int _C, unsigned int * a3, IUnknown * aP4);
char executeDominatorAction(unsigned int * a1, int a3, int a4, IUnknown * aP4);
char executeEMPulseAction(int a2, int a3, int a4, IUnknown * aP4);
    char executeEnterAction(int a2, int _10, unsigned int *a3, int aP4);  // G57w10-S raw 0x006E0AA0 IUnknown 占位清除
char executeExplodeAction(int a2, int a3, int a4, IUnknown * aP4);
    char executeFollowAction(int a2, int a3, int a4, int aP4);  // G57w10-S raw 0x006E21E0 IUnknown 占位清除
char executeForceShieldAction(int a2, int a3, int a4, IUnknown * aP4);
    char executeGuardAreaAction(int a2, int a3, int a4, int aP4);  // G57w10-S raw 0x006E1980 IUnknown 占位清除
char executeJumpjetAction(int a2, int _C, unsigned int * a3, IUnknown * aP4);
char executeLightningAction(int a2, int a3, int a4, IUnknown * aP4);
    char executeLoadAction(int a2, int a3, int a4, int aP4);  // G57w10-S raw 0x006E2520 IUnknown 占位清除
char executeOpenGateAction(int a2, int _C, unsigned int * a3, IUnknown * aP4);
    char executePatrolAction(void *a1, int a3, int a4, int aP4);  // G57w10-S raw 0x006E1A40 IUnknown 占位清除
char executePlaceBeaconAction(int a2, int _C, unsigned int * a3, IUnknown * aP4);
char executePsychicDominatorAction(int a2, int a3, int a4, IUnknown * aP4);
char executeRevealAction(unsigned int * a1, int a3, int a4, IUnknown * aP4);
    char executeSabotageAction(unsigned int *a1, int _C, unsigned int *a3, int aP4);  // G57w10-S raw 0x006E0D00 IUnknown 占位清除
    char executeScatterAction(int a2, int a3, int a4, int aP4);  // G57w10-S raw 0x006E1A70 IUnknown 占位清除
char executeSelfDestructAction(int a2, int a3, int a4, IUnknown * aP4);
char executeSpyPlaneAction(int a2, int a3, int a4, IUnknown * aP4);
char executeUnloadAction(int a2, int a3, int a4, IUnknown * aP4);
char executeWeatherStormAction(unsigned int * a1, int a3, int a4, IUnknown * aP4);
    int ExecuteAction(int a2, int a3);
    int SaveLoad_Prefix(AbstractClass * aP0, int aP1);
    int SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2);
    int Stub();
    int StubReturn148();
    int StubReturn47();
    int Validate(int a2);
    int ddtor(int a1, unsigned int * a2);
    int executeAirstrikeAction();
    int executeAttackAction(int a2);
    int executeBuildAction();
    int executeDeployAction(int a2);
    int executeGuardAction(int a2);
    int executeHuntAction(int a2);
    char executeIronCurtainAction(int a2, int a3, int a4, int aP4);  // G57w10-S raw 0x006E42D0 IUnknown 占位清除
    int executeMoveAction(int a2);
    char executeNukeAction(int a2, int a3, int a4, int aP4);  // G57w10-S raw 0x006E4320 IUnknown 占位清除
    char executeParadropAction(int a2, int a3, int a4, int aP4);  // G57w10-S raw 0x006E36E0 IUnknown 占位清除
    int executeRepairAction(int a2);
    int executeSellAction();
    unsigned int * executeHarvestAction(int a2, MouseClass * aP2);
    void executeDetonateAction();
};

} // namespace gamemd
