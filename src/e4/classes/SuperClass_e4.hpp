// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct HouseClass;  // fix_fwd_type_supply
struct Coord;  // fix_fwd_type_supply
struct AnimClass;  // fix_fwd_type_supply
struct InfantryClass;  // fix_fwd_type_supply
struct AbstractTypeClass;  // fix_fwd_type_supply
struct ConnectionPointClass;  // fix_fwd_type_supply
struct FacingStruct;  // fix_fwd_type_supply
struct ParticleSystemClass;  // fix_fwd_type_supply
struct BuildingTypeClass;  // fix_fwd_type_supply
struct Tactical;  // fix_fwd_type_supply
struct ObjectTypeClass;  // fix_fwd_type_supply
struct WeaponTypeClass;  // fix_fwd_type_supply

struct SuperClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    bool IsAllocated;  // 0x13
    unsigned int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    unsigned char needsSave;  // 0x32
    unsigned int alignmentPadding;  // 0x33
    int CustomChargeTime;  // 0x36
    bool BlinkState;  // 0x40
    HouseClass* Owner;  // 0x44
    char BlinkTimer[4];  // 0x48
    int SpecialSoundDuration;  // 0x50
    char SpecialSoundLocation[4];  // 0x54
    char ChronoMapCoords[4];  // 0x62
    void* Granted;  // 0x6D
    void* OneTime;  // 0x6E
    void* IsCharged;  // 0x6F
    bool CanHold;  // 0x96
    AnimClass* Animation;  // 0x104
    bool AnimationGotInvalid;  // 0x108
    bool IsOnHold;  // 0x112
    int ReadinessFrame;  // 0x116
    int CameoChargeState;  // 0x120
    char ChargeDrainState[4];  // 0x124
// --- flat members (END) ---
    static wchar_t * SetCurrentFrame(SuperClass *pThis);
    static void AdvanceCountdown(SuperClass *pThis);
    AbstractClass * * Reset(void *a1, void *a2);
    AbstractClass * * StartTimer(int a2, char a3, char a4);
    char StopPreclickAnim(int a2);  // G57w10-S raw 0x006CB830 IUnknown 占位清除
    SuperClass * * CleanupMembers(void *a1);
    bool ShouldDrawProgress();
    bool ShouldFlashTab();
    char CanFire();
    char SetOnHold(char aP1);
    char SetReadiness(char a2);
    int AnnounceReady(DynamicVector * aP1, void *a2);
    int ClickFire(int a2, short * a3);
    unsigned int * Construct(int aP1, void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0);
    void* Constructor(int a2, int *a3, int a4, void *a5, unsigned int *a6, int a7);
    int LoadFromStream(AbstractClass * aP0, int aP1);
    int Lose();
    int PowerDrainUpdate(int * a2);
    int SaveState(TechnoTypeClass * aP0, int * a1, int aP2);
    int SetCharge(int a2);
    int SetRechargeTime(int a2);
    int StubReturn128();
    int StubReturn57();
    int ddtor(int a1, unsigned int * a2);
    long long ExecuteAction(unsigned int a2, int a3);
    void * LaunchPsychicDominator(int a2);
    void ** CreateChronoAnim(AbstractClass * aP1, SuperClass * aP2, int a4);
    void Launch(int ecx0, int a2, short * aP3, char a4);
    void ResetRechargeTime();
    wchar_t * NameReadiness();
    int SetFieldX(void *a1 = 0);  // 0x6ce270
    char  RemoveFromPointerArray(int a2);  // 0x6ce320
    int Constructor(void *a1, void *a2, void *a3, void *a4 = 0);
    int Construct(int a2, CCINIClass * aP2, void *a3, void *a4, void *a5, void *a6);
    int AnnounceReady(DynamicVector * aP1, void *a2, void * aEvaForceshield, void * aEvaIroncurtain, void * aEvaNuclearmiss, void * aEvaPsychicdomi, void * aEvaReinforceme, void * aEvaSpyplanerea);
    wchar_t * NameReadiness(void * aTxtHold);
    unsigned int q00C;  // 0xC (offset-truth)
    static double SuperClass_field_0x6C(...);  // plateau: C2039/C3861 stub
    static double __pad_04C(...);  // plateau: C2039/C3861 stub
    static double u32_24(...);  // plateau: C2039/C3861 stub
    static double u32_28(...);  // plateau: C2039/C3861 stub
    static double u32_2C(...);  // plateau: C2039/C3861 stub
    static double u32_38(...);  // plateau: C2039/C3861 stub
    static double u32_68(...);  // plateau: C2039/C3861 stub
    static double u32_6C(...);  // plateau: C2039/C3861 stub
    static double u32_74(...);  // plateau: C2039/C3861 stub
    static double u32_78(...);  // plateau: C2039/C3861 stub
    static double u32_7C(...);  // plateau: C2039/C3861 stub
};

} // namespace gamemd
