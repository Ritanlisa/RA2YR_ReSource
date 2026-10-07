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
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    int uniqueId;  // 0x10
    unsigned int q011;  // 0x11
    bool IsAllocated;  // 0x13
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    unsigned int idxArray;  // 0x24
    void* TActionClass_field_28;  // 0x28
    bool q02B;  // 0x2B
    void* TActionClass_field_2C;  // 0x2C
    void* TActionClass_field_30;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    void* TActionClass_field_34;  // 0x34
    void* TActionClass_field_38;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q44;  // 0x44
    void* TActionClass_field_48;  // 0x48
    void* TActionClass_field_4C;  // 0x4C
    void* TActionClass_field_50;  // 0x50
    char Bounds[4];  // 0x52
    unsigned char TActionClass_field_54;  // 0x54
    unsigned char pad_55;  // 0x55
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    void* q060;  // 0x60
    void* q064;  // 0x64
    int Waypoint;  // 0x68
    ObjectClass* q06C;  // 0x6C
    unsigned char pad_6E;  // 0x6E
    unsigned char q078;  // 0x78
    void* q07C;  // 0x7C
    void* q08C;  // 0x8C
    void* Value;  // 0x90
    void* q098;  // 0x98
    unsigned int q0A4;  // 0xA4
    void* q0AC;  // 0xAC
    void* q0B0;  // 0xB0
    unsigned int u32_10C;
    unsigned int TActionClass_field_44;
    unsigned int Debug;
// --- flat members (END) ---
    char ConvertHouseUnits(int a2, int a3, unsigned int *a4, int a5);  // G57w10-S raw 0x006E0B60 IUnknown 占位清除
    char CreateWeaponImpactAtWaypoint(int a2, int a3, int a4, int a5);  // G57w10-S raw 0x006E2390 IUnknown 占位清除
    char executeGeneticMutatorAction(int a2, int a3, int a4, int a5);  // G57w10-S raw 0x006E4150 IUnknown 占位清除
    char executeEscortAction(int a2, int a3, int a4, int a5);  // G57w10-S raw 0x006E2290 IUnknown 占位清除
    AnimClass * * executeRetreatAction(AbstractClass * aP1, int a3, int a4, AbstractClass * aP4);
    ScenarioClass * * SpawnMeteorShower(AbstractClass * aP1, int a3, int a4, AbstractClass * aP4);
    TActionClass();
    char CreateNukeEffect(AbstractClass * aP1, int a3, int a4, AbstractClass * aP4);
    char PlayAudioAtRandomWP(int a2, int a3, int a4, int a5);
    char RevealTileTypeAtWaypoint(int a2, int a3, int a4, int a5);  // G57w10-S raw 0x006E11C0 IUnknown 占位清除
    char RevealWaypointArea(int a2, int a3, int a4, int a5);  // G57w10-S raw 0x006E0FE0 IUnknown 占位清除
    char executeCaptureAction(void *a2, int a3, unsigned int *a4, int a5);  // G57w10-S raw 0x006E0CA0 IUnknown 占位清除
    char executeChronoSphereAction(int a2, int a3, int a4, int a5);  // G57w10-S raw 0x006E43A0 IUnknown 占位清除
    char executeChronoshiftAction(int a2, int a3, int a4, int a5);  // G57w10-S raw 0x006E2F00 IUnknown 占位清除
    char executeCloseGateAction(int a2, int a3, unsigned int *a4, int a5);  // G57w10-S raw 0x006E32A0 IUnknown 占位清除
    char executeDominatorAction(unsigned int *a2, int a3, int a4, int a5);  // G57w10-S raw 0x006E4460 IUnknown 占位清除
    char executeEMPulseAction(int a2, int a3, int a4, int a5);  // G57w10-S raw 0x006E4560 IUnknown 占位清除
    char executeEnterAction(int a2, int a3, unsigned int *a4, int a5);  // G57w10-S raw 0x006E0AA0 IUnknown 占位清除
    char executeExplodeAction(int a2, int a3, int a4, int a5);  // G57w10-S raw 0x006E2EB0 IUnknown 占位清除
    char executeFollowAction(int a2, int a3, int a4, int a5);  // G57w10-S raw 0x006E21E0 IUnknown 占位清除
    char executeForceShieldAction(int a2, int a3, int a4, int a5);  // G57w10-S raw 0x006E4200 IUnknown 占位清除
    char executeGuardAreaAction(int a2, int a3, int a4, int a5);  // G57w10-S raw 0x006E1980 IUnknown 占位清除
    char executeJumpjetAction(int a2, int a3, unsigned int *a4, int a5);  // G57w10-S raw 0x006E31E0 IUnknown 占位清除
    char executeLightningAction(int a2, int a3, int a4, int a5);  // G57w10-S raw 0x006E3B40 IUnknown 占位清除
    char executeLoadAction(int a2, int a3, int a4, int a5);  // G57w10-S raw 0x006E2520 IUnknown 占位清除
    char executeOpenGateAction(int a2, int a3, unsigned int *a4, int a5);  // G57w10-S raw 0x006E3240 IUnknown 占位清除
    char executePatrolAction(void *a2, int a3, int a4, int a5);  // G57w10-S raw 0x006E1A40 IUnknown 占位清除
    char executePlaceBeaconAction(int a2, int a3, unsigned int *a4, int a5);  // G57w10-S raw 0x006E3180 IUnknown 占位清除
    char executePsychicDominatorAction(int a2, int a3, int a4, int a5);  // G57w10-S raw 0x006E4100 IUnknown 占位清除
    char executeRevealAction(unsigned int *a2, int a3, int a4, int a5);  // G57w10-S raw 0x006E44E0 IUnknown 占位清除
    char executeSabotageAction(unsigned int *a2, int a3, unsigned int *a4, int a5);  // G57w10-S raw 0x006E0D00 IUnknown 占位清除
    char executeScatterAction(int a2, int a3, int a4, int a5);  // G57w10-S raw 0x006E1A70 IUnknown 占位清除
    char executeSelfDestructAction(int a2, int a3, int a4, int a5);  // G57w10-S raw 0x006E2E60 IUnknown 占位清除
    char executeSpyPlaneAction(int a2, int a3, int a4, int a5);  // G57w10-S raw 0x006E4360 IUnknown 占位清除
    char executeUnloadAction(int a2, int a3, int a4, int a5);  // G57w10-S raw 0x006E2AF0 IUnknown 占位清除
    char executeWeatherStormAction(unsigned int *a2, int a3, int a4, int a5);  // G57w10-S raw 0x006E43E0 IUnknown 占位清除
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
    char executeIronCurtainAction(int a2, int a3, int a4, int a5);  // G57w10-S raw 0x006E42D0 IUnknown 占位清除
    int executeMoveAction(int a2);
    char executeNukeAction(int a2, int a3, int a4, int a5);  // G57w10-S raw 0x006E4320 IUnknown 占位清除
    char executeParadropAction(int a2, int a3, int a4, int a5);  // G57w10-S raw 0x006E36E0 IUnknown 占位清除
    int executeRepairAction(int a2);
    int executeSellAction();
    unsigned int * executeHarvestAction(int a2, MouseClass * aP2);
    void executeDetonateAction();
};

} // namespace gamemd
