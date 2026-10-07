// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
#ifndef GAMEMD_TREE_UNIVERSE  // G42.33 批 3: 宏 TU 内由树头 using 提供
class TechnoClass;
#endif
struct BuildingClass;  // fix_fwd_type_supply
struct StartingTechnoStruct;  // fix_fwd_type_supply
struct CampaignClass;  // fix_fwd_type_supply
#ifndef GAMEMD_TREE_UNIVERSE  // G42.33 批 3: 宏 TU 内由树头 using 提供
struct AbstractClass;
#endif
struct SuperClass;  // fix_fwd_type_supply
struct ObjectClass;  // fix_fwd_type_supply
struct BuildingTypeClass;  // fix_fwd_type_supply
struct Coord;  // fix_fwd_type_supply
struct Tactical;  // fix_fwd_type_supply
struct ObjectTypeClass;  // fix_fwd_type_supply
struct WeaponTypeClass;  // fix_fwd_type_supply
struct AbstractTypeClass;  // fix_fwd_type_supply
struct FactoryClass;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct AngerStruct;  // fix_fwd_type_supply
struct ScoutStruct;  // fix_fwd_type_supply
struct TimerStruct;  // fix_fwd_type_supply
#ifndef GAMEMD_TREE_UNIVERSE
struct CellStruct;  // fix_fwd_type_supply
#endif // GAMEMD_TREE_UNIVERSE
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorCursor;  // fix_fwd_type_supply

#ifndef GAMEMD_G2_HouseClass_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_HouseClass_DEF 1
struct HouseClass {
    static int ClearLowPowerTargets(void *aP1);  // 0x4FC6D0 raw: int __thiscall HouseClass::ClearLowPowerTargets(HouseClass*)  // G57w10 r5 D-classbody supply (raw-anchored)
    static void * ClampToUsableCell(void *aP1, void *a2);  // 0x586E50 raw 3-param (HouseClass*, _DWORD*, __int16*) site 2-arg form  // G57w10 r5 D-classbody supply (raw-anchored)

    static int SetCombatPower(void *aP1, int a2);  // 0x4F6EC0 raw: int SetCombatPower(int*, int)

    static char GetColor(void *aP1);  // 0x50B840 raw: char GetColor(char*)
    static int GetTransitionCount(void *aP1);  // 0x50DA80 raw: int GetTransitionCount(HouseClass*)

// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    void* uniqueId;  // 0x10
    bool IsAllocated;  // 0x13
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    char relatedTagsCount[4];  // 0x30
    unsigned int alignmentPadding;  // 0x33
    char relatedTagsCapacity[4];  // 0x34
    int arrayIndex;  // 0x36
    char buildingsCount[4];  // 0x48
    BuildingClass** unitRepairStations;  // 0x50
    char repairStationsCount[4];  // 0x54
    char absorbersCount[4];  // 0x6C
    char absorbersCapacity[4];  // 0x70
    BuildingClass** bunkers;  // 0x74
    char bunkersCount[4];  // 0x78
    char bunkersCapacity[4];  // 0x7C
    BuildingClass** occupiables;  // 0x80
    char occupiablesCount[4];  // 0x84
    char psychicDetectionCount[4];  // 0xA8
    unsigned int q0BD;  // 0xBD
    double firepowerMultiplier;  // 0xE0
    CampaignClass* q0E4;  // 0xE4
    double airspeedMultiplier;  // 0xF0
    unsigned int q0F4;  // 0xF4
    double armorMultiplier;  // 0xF8
    unsigned int q104;  // 0x104
    unsigned int q10C;  // 0x10C
    CampaignClass* q114;  // 0x114
    unsigned int techLevel;  // 0x12C
    unsigned int q13C;  // 0x13C
    void* q140;  // 0x140
    void* q144;  // 0x144
    unsigned int u32_14C;  // 0x14C
    void* q150;  // 0x150
    unsigned int q154;  // 0x154
    unsigned int q158;  // 0x158
    unsigned int q19C;  // 0x19C
    void* q1AC;  // 0x1AC
    void* q1B0;  // 0x1B0
    char sideIndex[4];  // 0x1E8
    bool currentPlayer;  // 0x1EC
    bool playerControl;  // 0x1ED
    bool production;  // 0x1EE
    bool hasThreatNode;  // 0x1FB
    bool recheckTechTree;  // 0x1FC
    void* planningPaths;  // 0x210
    SuperClass** supers;  // 0x254
    char supersCount[4];  // 0x258
    char lastBuiltInfantryType[4];  // 0x264
    void* q280;  // 0x280
    unsigned int q2A0;  // 0x2A0
    char radarBlackoutTimer[12];  // 0x2B0
    int unitAltOwner;  // 0x2C8 (G57W14E1 til supply)
    unsigned int aircraftAltOwner;  // 0x2CC
    char poweredUnitCenters[4];  // 0x2D8
    int q300;  // 0x300
    char q308[4];  // 0x308
    unsigned int balance;  // 0x30C
    char builtInfantryTypes[2056];  // 0x328
    unsigned char q33C;  // 0x33C
    unsigned int q340;  // 0x340
    void* q520;  // 0x520
    unsigned char q5B8;  // 0x5B8
    unsigned char q698;  // 0x698
    void* qBF0;  // 0xBF0
    void* qE08;  // 0xE08
    void * ptr_1220;  // 0x1220
    void * ptr_1258;  // 0x1258
    unsigned int u32_1488;  // 0x1488
    unsigned char q14E4;  // 0x14E4
    void* q14EC;  // 0x14EC
    void* q14F4;  // 0x14F4
    int numWarFactories;  // 0x5380 (int32_t per canon)
    int numConYards;  // 0x5384
    char powerOutput[4];  // 0x53A4
    char powerDrain[4];  // 0x53A8
    char ourFlagCoords[4];  // 0x53DC
    char killedBuildingsOfHouses[80];  // 0x5434
    unsigned char q5488;  // 0x5488
    unsigned int HouseClass_field_548C;  // 0x548C
    char siloMoney[4];  // 0x54E8
    char preferredTargetType[4];  // 0x54EC
    char preferredTargetCell[4];  // 0x54F0
    char preferredDefensiveCell[4];  // 0x54F4
    char preferredDefensiveCell2[4];  // 0x54F8
    char preferredDefensiveCellStartTime[4];  // 0x54FC
    char enemyHouseIndex[4];  // 0x5600
    int angerNodesCount;  // 0x5608 (G57W14E1 til supply)
    int scoutNodesCount;  // 0x5614 (G57W14E1 til supply)
    char dropshipData[132];  // 0x5658
    char color[3];  // 0x56E1
    char base[80];  // 0x56E8
    char HouseClass_field_timer_B[12];  // 0x5770
    unsigned int HouseClass_field_160B4;
    unsigned int CheckWinCondition_ph;  // w18j3: filler renamed (no offset truth; canon HouseClass::CheckWinCondition is a method)
    static unsigned int CheckWinCondition(...);  // w18j3 C2597 static-call supply (w16g4 convention)
    void* AccumulateScore_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon HouseClass::AccumulateScore is a method)
    static unsigned int AccumulateScore(...);  // w18j3 C2597 static-call supply (w16g4 convention)

// --- flat members (END) ---
    AbstractClass * * AIDecision(ObjectClass * aP0, int * a1);
    AbstractClass * * AutoBuildScanAndSort(int a2, unsigned int * a3);
    AbstractClass * * FindStartPositions(void *a1);
    AbstractClass * * SaveLoad_Prefix(int a1, LPSTREAM pStm);
    BOOL GainedPoweredCenter(int a2);
    CellStruct * * UpdateAITryFireSW(void *a1);
    VectorClass_flat * vt_00_(char a2);
    VectorCursor * vt_placeholder_07(char a2);
    char DroppedFlag(UnitClass * aP1, int a3);
    static char IonSensitivesShouldBeOffline(...);
    char PickedUpFlag(ObjectClass * aP1, char a3);
    char ReshroudMap();
    char Set(void *a1, void *a2, void *a3);
    char UpdateAllSilos(int a2, int a3);
    int GiveTiberium_Storage(float a2, int a3);  // G57w10-S raw 0x004F9610 (was C2597 interim stub)
    int COMStub_Ret1_1(int a1);
    static int NetworkConvert(void *aP0);  // 0x749100 G42.33 b5 static-form sync
    static int IncrementStat(void *aP0, unsigned int aP1);  // 0x749020 G42.33 b7 static-form sync
    int COMStub_Ret1_2(int a1);
    int CanAlly(HouseClass * aP1);
    int CanDetect();
    int CreatePowerOutage(int a2);
    int CreateRadarOutage(int a2);
    int DestroyAllBuildings();
    int DestroyAllNonBuildingsNaval();
    int DestroyAllNonBuildingsNonNaval();
    int startingAllies;  // 0x90200
    unsigned int plainName;  // 0x90096
    int FailedToPlaceNode(int a1);
    int GetCameoTypeIndex(int a2);
    int GetInfSelfHealStep();
    int GetRepairStepAmount();
    static int GetStatus(HouseClass * aP1, int a2);  // G57w10-S raw 0x006ABC60 (was C2597 interim stub)
    int GetUnitSelfHealStep();
    int InitAlliances();
    int IsAlliedWith(HouseClass *other);  // G57w4: raw fn_4F.c other@[ebp+4]
    int IsCellOccupied(int a2, char a3);  // G57w10-S raw 0x004FBE40 IUnknown 占位清除
    int MakeAlly(int a2, char a3);
    int PrerequisitesForTechnoTypeAreListed(int a1, VectorClass_flat * aP1, TechnoTypeClass * aP2);
    static int QueryInterface(CCINIClass * aP0, const void * a1, unsigned int * a2);
    int QueryInterface_Dispatch();
    int QueryInterface_Helper();
    static int RespawnStartingForces(TechnoClass * aP0, void ** a1, unsigned int * a2, int a4);
    static int RevealShroudForAllies(char a1, int a2);
    int SetPrimaryFactory(int a2);
    int UpdatePower(double a2);
    int sub_5092F0(int a2);
    int vt_04_(int * a2);
    int vt_placeholder_00();
    int vt_placeholder_01();
    int vt_placeholder_02();
    std::locale::facet * initAngerStruct(char a2);
    unsigned int * SDDTORAllAndTriggers();
    unsigned int * vt_placeholder_09();
    unsigned int * vt_placeholder_10();
    unsigned int vt_05_(int a2);
    void * CanTogglePower();
    void ** PsiWarn(InfantryClass * aP0, int a2, int arg0, void * a3);
    void AcquiredThreatNode();
    int Construct(int aP1);
    void LostPoweredCenter(int a2, void *a2_2);
    int ResetObjectOrders(char a1, int a2);
    void vt_03_();
    static int CalcProductionSpeed(HouseClass * aP1);  // G57w10-S raw 0x006F47A0 (was C2597 interim stub)
     int FindByName();  // G57w10-S raw 0x0050C170 (was C2597 interim stub)
    static char FindType15(HouseClass * aP1);  // G57w10-S raw 0x00726FE0 (was C2597 interim stub)
    static unsigned int * FirstBuildableFromArray(HouseClass * aP1, int a2);  // G57w10-S raw 0x005051E0 (was C2597 interim stub)
    static unsigned int * GetCurrentOption(HouseClass * aP1, unsigned int *a2);  // G57w10-S raw 0x0050DEF0 (was C2597 interim stub)
    static int GetMaxBuildLevel(HouseClass * aP1);  // G57w10-S raw 0x006E8780 (was C2597 interim stub)
    static unsigned int * GetStartCoords(HouseClass * aP1, unsigned int *a2);  // G57w10-S raw 0x0050DF30 (was C2597 interim stub)
    int IsAllied(int a1);  // was C2597 interim stub, := truth 0x0x4f9a10
    static int ProcessPowerDrain(HouseClass * aP1, int a2);  // G57w10-S raw 0x004F9790 (was C2597 interim stub)
    static char ShouldDisableCameo(HouseClass * aP1, int a2);  // G57w10-S raw 0x0050B370 (was C2597 interim stub)
    static int UpdateProduction(HouseClass * aP1, int a2, int a3, int a4);  // G57w10-S raw 0x00509140 (was C2597 interim stub)
    static int GetPowerRatio(HouseClass * aP1);  // G57w10-S raw 0x004FCE30 (was C2597 interim stub)
    bool FindType24();  // 0x726fb0
    int HasType26Building();  // 0x726f50
    int HasType25Building();  // 0x726f80
    int AddPower(int a1);  // 0x4f9950
    int HasPower();  // 0x717880
    char AIBuildBase();  // 0x50a5c0
    void SetPrimaryTechBuilding();  // 0x50c210
    int UpdateAllTypes();  // 0x6e57f0
    int DecrementUnitCount(unsigned char *a2);  // 0x4ff550
    int CanBuild(int a2, char a3, char a4);  // 0x4f7870
    int CalculateCostMultipliers();  // 0x50bf60
    int FindOwner();  // 0x502d30
    int SetMapSeed(int a2);  // 0x50e000
    char SetAlliance(HouseClass *a2, char a3);  // 0x4f9f90
    int HandleAlliance(int a2, char a3);  // 0x4f9b70
    unsigned int * ClearStatArray();  // 0x748fd0
    int SaveToINI(char *a2); // N_fix R5 supply (cache truth)
    int sub_63CF10();  // 0x63CF10
    int sub_63CFC0();
    static int CheckDefeat(...);
    static int ProcessPower(...);  // w16g4 C3861 static supply (raw 0x00425410)  // w16g4 C3861 static supply (raw 0x004FCBD0)  // 0x63CFC0
    // --- W16G3 supply (BEGIN) ---
    static int InitStatArray(void *aP1, unsigned int a2);  // W16G3 static-form (HouseClass_e4 0x4f639c x10)
    static int initDropshipData(void *aP1);
    static char ClearPrimaryFactory();
    static char checkAutoProduction();  // w18j2 C3861 static supply (raw 0x00483460)  // w18j2 C3861 static supply (raw 0x00740E20)  // W16G3 static-form (0x4f5c0f)
    // --- W16G3 supply (END) ---

};
#endif  // GAMEMD_G2_HouseClass_DEF

} // namespace gamemd
