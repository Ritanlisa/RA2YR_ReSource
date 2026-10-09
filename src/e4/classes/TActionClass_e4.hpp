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
    unsigned int q01A;  // 0x1A
    int referenceCount;  // 0x1C
    bool q01D;  // 0x1D
    unsigned int q01E;  // 0x1E
    void * NeedsSaveOrLink;  // 0x20
    char idxArray[4];  // 0x24
    void* TActionClass_field_28;  // 0x28
    bool q02B;  // 0x2B
    void* TActionClass_field_2C;  // 0x2C
    void* TActionClass_field_30;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    void* TActionClass_field_34;  // 0x34
    void* TActionClass_field_38;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    void* TActionClass_field_3C;  // 0x3C
    unsigned int q03D;  // 0x3D
    void* TActionClass_field_40;  // 0x40
    bool q042;  // 0x42
    AbstractClass * TActionClass_field_44;  // 0x44
    unsigned char q045;  // 0x45
    void* q046;  // 0x46
    void* TActionClass_field_48;  // 0x48
    bool q04A;  // 0x4A
    void* TActionClass_field_4C;  // 0x4C
    unsigned char q04F;  // 0x4F
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
    unsigned char TActionClass_field_6D;  // 0x6D
    unsigned char pad_6E;  // 0x6E
    void* q070;  // 0x70
    bool q074;  // 0x74
    TagTypeClass* TagType;  // 0x76
    unsigned char q078;  // 0x78
    void* q07C;  // 0x7C
    TriggerTypeClass* TriggerType;  // 0x80
    unsigned int TechnoID;  // 0x84
    void* q088;  // 0x88
    void* q08C;  // 0x8C
    void* Value;  // 0x90
    void* q098;  // 0x98
    Coord* q09C;  // 0x9C
    unsigned int q0A4;  // 0xA4
    unsigned int q0A8;  // 0xA8
    unsigned char q0A9;  // 0xA9
    unsigned char q0AA;  // 0xAA
    unsigned int q0AB;  // 0xAB
    void* q0AC;  // 0xAC
    void* q0B0;  // 0xB0
    unsigned char q0B7;  // 0xB7
    void* TActionClass_field_90;  // 0xB8
    unsigned char q0B9;  // 0xB9
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
char executeChronoSphereAction(int a2, int a3, int a4, IUnknown * aP4);  // 0x006e43a0 g57w12-r raw-sync (def-form)
char executeChronoshiftAction(int a2, int a3, int a4, IUnknown * aP4);  // 0x006e2f00 g57w12-r raw-sync (def-form)
char executeCloseGateAction(int a2, int _C, unsigned int * a3, IUnknown * aP4);  // 0x006e32a0 g57w12-r raw-sync (def-form)
char executeDominatorAction(unsigned int * a1, int a3, int a4, IUnknown * aP4);  // 0x006e4460 g57w12-r raw-sync (def-form)
char executeEMPulseAction(int a2, int a3, int a4, IUnknown * aP4);  // 0x006e4560 g57w12-r raw-sync (def-form)
    char executeEnterAction(int a2, int a3, unsigned int *a4, int a5);  // G57w10-S raw 0x006E0AA0 IUnknown 占位清除
char executeExplodeAction(int a2, int a3, int a4, IUnknown * aP4);  // 0x006e2eb0 g57w12-r raw-sync (def-form)
    char executeFollowAction(int a2, int a3, int a4, int a5);  // G57w10-S raw 0x006E21E0 IUnknown 占位清除
char executeForceShieldAction(int a2, int a3, int a4, IUnknown * aP4);  // 0x006e4200 g57w12-r raw-sync (def-form)
    char executeGuardAreaAction(int a2, int a3, int a4, int a5);  // G57w10-S raw 0x006E1980 IUnknown 占位清除
char executeJumpjetAction(int a2, int _C, unsigned int * a3, IUnknown * aP4);  // 0x006e31e0 g57w12-r raw-sync (def-form)
char executeLightningAction(int a2, int a3, int a4, IUnknown * aP4);  // 0x006e3b40 g57w12-r raw-sync (def-form)
    char executeLoadAction(int a2, int a3, int a4, int a5);  // G57w10-S raw 0x006E2520 IUnknown 占位清除
char executeOpenGateAction(int a2, int _C, unsigned int * a3, IUnknown * aP4);  // 0x006e3240 g57w12-r raw-sync (def-form)
    char executePatrolAction(void *a2, int a3, int a4, int a5);  // G57w10-S raw 0x006E1A40 IUnknown 占位清除
char executePlaceBeaconAction(int a2, int _C, unsigned int * a3, IUnknown * aP4);  // 0x006e3180 g57w12-r raw-sync (def-form)
char executePsychicDominatorAction(int a2, int a3, int a4, IUnknown * aP4);  // 0x006e4100 g57w12-r raw-sync (def-form)
char executeRevealAction(unsigned int * a1, int a3, int a4, IUnknown * aP4);  // 0x006e44e0 g57w12-r raw-sync (def-form)
    char executeSabotageAction(unsigned int *a2, int a3, unsigned int *a4, int a5);  // G57w10-S raw 0x006E0D00 IUnknown 占位清除
    char executeScatterAction(int a2, int a3, int a4, int a5);  // G57w10-S raw 0x006E1A70 IUnknown 占位清除
char executeSelfDestructAction(int a2, int a3, int a4, IUnknown * aP4);  // 0x006e2e60 g57w12-r raw-sync (def-form)
char executeSpyPlaneAction(int a2, int a3, int a4, IUnknown * aP4);  // 0x006e4360 g57w12-r raw-sync (def-form)
char executeUnloadAction(int a2, int a3, int a4, IUnknown * aP4);  // 0x006e2af0 g57w12-r raw-sync (def-form)
char executeWeatherStormAction(unsigned int * a1, int a3, int a4, IUnknown * aP4);  // 0x006e43e0 g57w12-r raw-sync (def-form)
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
    unsigned int u32_10C;  // 0x10C (offset-truth)
    unsigned char u32_1F7;  // 0x1F7 (offset-truth)
    unsigned int u32_1F8;  // 0x1F8 (offset-truth)
    unsigned int u32_298;  // 0x298 (offset-truth)
    unsigned int u32_53A0;  // 0x53A0 (offset-truth)
    unsigned int u32_5494;  // 0x5494 (offset-truth)
    unsigned int u32_54F0;  // 0x54F0 (offset-truth)
    unsigned int u32_54F4;  // 0x54F4 (offset-truth)
    unsigned int u32_54FC;  // 0x54FC (offset-truth)
};

} // namespace gamemd
