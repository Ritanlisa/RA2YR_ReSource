// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct UnitTypeClass;  // fix_fwd_type_supply
struct AnimTypeClass;  // fix_fwd_type_supply
struct ParticleSystemTypeClass;  // fix_fwd_type_supply
struct WeaponTypeClass;  // fix_fwd_type_supply
struct BuildingTypeClass;  // fix_fwd_type_supply
struct InfantryTypeClass;  // fix_fwd_type_supply
struct WarheadTypeClass;  // fix_fwd_type_supply
struct BulletTypeClass;  // fix_fwd_type_supply
struct SHPStruct;  // fix_fwd_type_supply
struct INIClass;  // fix_fwd_type_supply

struct RulesClass {
    static int Addition(void *aP1);  // 0x668BF0 raw: int __thiscall RulesClass::Addition(RulesClass*)  // G57w10 r5 D-classbody supply (raw-anchored)

// --- flat members (BEGIN) ---
    unsigned int DetailMinFrameRateNormal;  // 0x0
    void *q4;  // 0x4
    unsigned int DetailBufferZoneWidth;  // 0x8
    char AmmoCrateDamage[4];  // 0xC
    UnitTypeClass* LargeVisceroid;  // 0x10
    UnitTypeClass* SmallVisceroid;  // 0x14
    char AttackingAircraftSightRange[4];  // 0x18
    unsigned int q01C;  // 0x1C
    double TunnelSpeed;  // 0x20
    unsigned int q024;  // 0x24
    double TiberiumHeal;  // 0x28
    char SelfHealInfantryFrames[4];  // 0x30
    char SelfHealInfantryAmount[4];  // 0x34
    char SelfHealUnitFrames[4];  // 0x38
    char SelfHealUnitAmount[4];  // 0x3C
    bool FreeMCV;  // 0x40
    bool BerzerkAllowed;  // 0x41
    char PoseDir[4];  // 0x44
    AnimTypeClass* InfantryBrute;  // 0x94
    unsigned char q0A0;  // 0xA0
    unsigned int q0AC;  // 0xAC
    unsigned int u32_B0;  // 0xB0
    unsigned int q0B4;  // 0xB4
    unsigned int q0C4;  // 0xC4
    double AITriggerTrackRecordCoefficient;  // 0xD0
    unsigned int u32_D4;  // 0xD4
    char AircraftFogReveal[4];  // 0xDC
    char BaseUnderAttackSound[4];  // 0xF0
    char GUIMoveInSound[4];  // 0x10C
    char GUICheckboxSound[4];  // 0x11C
    char DefaultChronoSound[4];  // 0x140
    char ExecutePlanSound[4];  // 0x14C
    char BombTickingSound[4];  // 0x17C
    char SpySatDeactivationSound[4];  // 0x194
    char UpgradeVeteranSound[4];  // 0x198
    char BunkerWallsUpSound[4];  // 0x1B0
    char EnterBioReactorSound[4];  // 0x1E0
    unsigned char __pad_240[505];  // 0x240
    unsigned char q258;  // 0x258
    unsigned int q264;  // 0x264
    int q280;  // 0x280
    unsigned int WeatherConBolts[4];  // 0x288..0x297 G42.33 supply ([3]@0x294 per asm 0x729a26 mov ecx,[edx+294h])
    void * q2A0;  // 0x2A0
    int q300;  // 0x300
    int q308;  // 0x308
    int q324;  // 0x324
    int q340;  // 0x340
    int q520;  // 0x520
    char MovieOn[4];  // 0x6AC
    char MovieOff[4];  // 0x6B0
    char GenericClick[4];  // 0x6C0
    unsigned int StopSound;  // 0x6D4
    char ShellButtonSlideSound[4];  // 0x700
    unsigned int q730;  // 0x730
    double ChargeToDrainRatio;  // 0x760
    char FlightLevel[4];  // 0x770
    unsigned int HarvesterUnit;  // 0x7DC
    InfantryTypeClass* Engineer;  // 0x858
    SHPStruct* CHRONOSK_SHP;  // 0x8C8
    double TurboBoost;  // 0x9A0
    double AirstripRatio;  // 0x9C0
    double HelipadRatio;  // 0x9CC
    double TeslaRatio;  // 0x9D8
    char DefenseLimit[4];  // 0x9F8
    double WarRatio;  // 0x9FC
    char InfantryBaseMult[4];  // 0xA2C
    char AutoCrush[4];  // 0xA7C
    char Aircraft[4];  // 0xA88
    char Harvester[4];  // 0xA8C
    char SellBack[4];  // 0xA90
    char UnitCount[4];  // 0xABC
    char GameSpeed[4];  // 0xACC
    char AIPlayers[4];  // 0xAD0
    char Players[4];  // 0xAD4
    bool BridgeDestruction;  // 0xAD8
    bool Shroud;  // 0xADA
    bool Bases;  // 0xADB
    bool Crates;  // 0xADD
    bool ShortGame;  // 0xAE2
    bool FogOfWar;  // 0xAE3
    char SovietSurvivorDivisor[4];  // 0xB1C
    double AutocreateTime;  // 0xB2C
    char Normal[80];  // 0xB9C
    void * qBC0;  // 0xBC0
    unsigned char q11D4;  // 0x11D4
    unsigned int q11DC;  // 0x11DC
    unsigned char q11E0;  // 0x11E0
    unsigned int u32_1488;  // 0x1488
    double DamageDelay;  // 0x168C
    double RepairRate;  // 0x16B8
    double IRepairRate;  // 0x16C8
    float EngineerCaptureLevel;  // 0x17A4
    float TalkBubbleTime;  // 0x17A8
    char ColorAdd[48];  // 0x1814
    char LaserTargetColor[4];  // 0x1844
    char IronCurtainColor[4];  // 0x1848
    char BerserkColor[4];  // 0x184C
    char ForceShieldColor[4];  // 0x1850
    float FallBackCoefficient;  // 0x1858
    char CrewCount[4];  // 0x185C
    unsigned int DetailMinFrameRateMovie;
// --- flat members (END) ---
    INIClass * * ReadMovies();
    INIClass * * ReadPowerupsSection();
    INIClass * * readDifficulty();
    RulesClass();
    double GetFiringDistance();
    int DTOR(void *a1);
    int ReadColorAdd();
    int ReadColors();
    int ReadSidesList();
    int  readAI(unsigned int * a2);
    int  readAnimations(TechnoTypeClass * aP1);
    int readCombatDamage(int a2);
    int readCrateRules();
    int readGeneralSection(TechnoTypeClass * aP1);
    int readOverlayTypes();
    int  readParticleSystems(TechnoTypeClass * aP1);
    int readRadiation();
    int readSmudgeTypes();
    int readSpecialWeapons();
    int  readTerrainTypes(TechnoTypeClass * aP1);
    int readWarheads();
    int sub_674500();
    unsigned int * InitINIChain(int a2, int a3);
    unsigned int * readIQ(int a2, int a3);
    unsigned int * readParticles();
    void * LoadTypeList(int a1, unsigned char *** edx0, INIClass * aP1, unsigned char * a2, unsigned int * a5);
    void *  readAircraftTypes(int * a2);
    void * readBuildingTypes(int * a2);
    void * readSuperWeaponTypes(int * a2);
    void readCountries();
    void readInfantryTypes();
    void readMaximums();
    void readVehicleTypes();
    void* readAudioVisual();
     int SaveLoad_Prefix(int *a2);  // G57w10-S raw 0x00674730 (was C2597 interim stub)
    static int SaveLoad_Prefix_0(RulesClass * aP1, int i);  // G57w10-S raw 0x00675210 (was C2597 interim stub)
    int ReadDataList();  // 0x672440
    int LoadCountries();  // 0x6722f0
    int Reset();  // 0x74e6b0
    int IsTypeBuildable(unsigned int a2);  // 0x721140
    INIClass * * ReadPowerupsSection(void * aPowerups);
    INIClass * * readDifficulty(void * aClimb, void * aCruiseheight, void * aJumpjetcontrol, void * aTurnrate, void * aWobbledeviatio, void * aWobblesperseco);
    INIClass * * ReadMovies(void * aMovies);
    int readSpecialWeapons(void * aAlliedwalltran, void * aWallmodel, void * aWallpenetrator);
    int ReadColors(void * aColors);
    int ReadColorAdd(void * aColoradd);
    int readCrateRules(void * aInfantrytypes);
    int readRadiation(void * aAircrafttypes);
    int ReadSidesList(void * aSuperweapontyp);

    int ResetRules();  // G42.39 supply
};

} // namespace gamemd
