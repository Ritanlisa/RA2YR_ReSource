// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

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
    AbstractClass * * ConvertHouseUnits(int a2, int _14, unsigned int * a3, IUnknown * aP4);
    AbstractClass * * CreateWeaponImpactAtWaypoint(int a2, int a3, int a4, IUnknown * aP4);
    AbstractClass * * executeGeneticMutatorAction(int a2, int a3, int a4, IUnknown * aP4);
    AnimClass * * executeEscortAction(int a2, int a3, int a4, IUnknown * aP4);
    AnimClass * * executeRetreatAction(AbstractClass * aP1, int a3, int a4, AbstractClass * aP4);
    ScenarioClass * * SpawnMeteorShower(AbstractClass * aP1, int a3, int a4, AbstractClass * aP4);
    TActionClass();
    char CreateNukeEffect(AbstractClass * aP1, int a3, int a4, AbstractClass * aP4);
    char PlayAudioAtRandomWP(int a2, int a3, int a4, int a5);
    char RevealTileTypeAtWaypoint(int a2, int a3, int a4, IUnknown * aP4);
    char RevealWaypointArea(int a2, int a3, int a4, IUnknown * aP4);
    char executeCaptureAction(void * a1, int _C, unsigned int * a3, IUnknown * aP4);
    char executeChronoSphereAction(int a2, int a3, int a4, IUnknown * aP4);
    char executeChronoshiftAction(int a2, int a3, int a4, IUnknown * aP4);
    char executeCloseGateAction(int a2, int _C, unsigned int * a3, IUnknown * aP4);
    char executeDominatorAction(unsigned int * a1, int a3, int a4, IUnknown * aP4);
    char executeEMPulseAction(int a2, int a3, int a4, IUnknown * aP4);
    char executeEnterAction(int a2, int _10, unsigned int * a3, IUnknown * aP4);
    char executeExplodeAction(int a2, int a3, int a4, IUnknown * aP4);
    char executeFollowAction(int a2, int a3, int a4, IUnknown * aP4);
    char executeForceShieldAction(int a2, int a3, int a4, IUnknown * aP4);
    char executeGuardAreaAction(int a2, int a3, int a4, IUnknown * aP4);
    char executeJumpjetAction(int a2, int _C, unsigned int * a3, IUnknown * aP4);
    char executeLightningAction(int a2, int a3, int a4, IUnknown * aP4);
    char executeLoadAction(int a2, int a3, int a4, IUnknown * aP4);
    char executeOpenGateAction(int a2, int _C, unsigned int * a3, IUnknown * aP4);
    char executePatrolAction(void * a1, int a3, int a4, IUnknown * aP4);
    char executePlaceBeaconAction(int a2, int _C, unsigned int * a3, IUnknown * aP4);
    char executePsychicDominatorAction(int a2, int a3, int a4, IUnknown * aP4);
    char executeRevealAction(unsigned int * a1, int a3, int a4, IUnknown * aP4);
    char executeSabotageAction(unsigned int * a1, int _C, unsigned int * a3, IUnknown * aP4);
    char executeScatterAction(int a2, int a3, int a4, IUnknown * aP4);
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
    int executeIronCurtainAction(int a2, int a3, int a4, IUnknown * aP4);
    int executeMoveAction(int a2);
    int executeNukeAction(int a2, int a3, int a4, IUnknown * aP4);
    int executeParadropAction(int a2, int a3, int a4, IUnknown * aP4);
    int executeRepairAction(int a2);
    int executeSellAction();
    unsigned int * executeHarvestAction(int a2, MouseClass * aP2);
    void executeDetonateAction();
};

} // namespace gamemd
