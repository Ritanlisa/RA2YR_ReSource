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
    void * ptr_0;  // 0x0
    void * ptr_4;  // 0x4
    void * ptr_8;  // 0x8
    unsigned int q00C;  // 0xC
    unsigned int __pad_010;  // 0x10
    char __pad_14[3];  // 0x14
    unsigned char __pad_017;  // 0x17
    unsigned int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    unsigned char __pad_020;  // 0x20
    char __pad_21[3];  // 0x21
    unsigned int u32_24;  // 0x24
    unsigned int u32_28;  // 0x28
    unsigned int u32_2C;  // 0x2C
    int q030;  // 0x30
    unsigned int u32_34;  // 0x34
    unsigned int u32_38;  // 0x38
    unsigned int u32_3C;  // 0x3C
    bool BlinkState;  // 0x40
    char __pad_41[3];  // 0x41
    HouseClass * Owner;  // 0x44
    void * BlinkTimer;  // 0x48
    void* __pad_04C;  // 0x4C
    int SpecialSoundDuration;  // 0x50
    char SpecialSoundLocation[4];  // 0x54
    unsigned char __pad_058;  // 0x58
    char __pad_59[7];  // 0x59
    int q060;  // 0x60
    char __pad_64[2];  // 0x64
    unsigned char __pad_066;  // 0x66
    char __pad_67[1];  // 0x67
    unsigned int u32_68;  // 0x68
    unsigned char u32_6C;  // 0x6C
    bool Granted;  // 0x6D
    bool OneTime;  // 0x6E
    bool IsCharged;  // 0x6F
    int q070;  // 0x70
    unsigned int u32_74;  // 0x74
    unsigned int u32_78;  // 0x78
    unsigned int u32_7C;  // 0x7C
    char __pad_80[16];  // 0x80
    void * q090;  // 0x90
    char __pad_94[2];  // 0x94
    bool CanHold;  // 0x96
    char __pad_97[3];  // 0x97
    unsigned char __pad_09A;  // 0x9A
    char __pad_9B[21];  // 0x9B
    int q0B0;  // 0xB0
    char __pad_B4[16];  // 0xB4
    int q0C4;  // 0xC4
    char __pad_C8[60];  // 0xC8
    AnimClass * Animation;  // 0x104
    bool AnimationGotInvalid;  // 0x108
    char __pad_109[3];  // 0x109
    unsigned char __pad_10C;  // 0x10C
    char __pad_10D[5];  // 0x10D
    bool IsOnHold;  // 0x112
    char __pad_113[3];  // 0x113
    unsigned char ReadinessFrame;  // 0x116
    char __pad_117[3];  // 0x117
    unsigned char __pad_11A;  // 0x11A
    char __pad_11B[5];  // 0x11B
    int CameoChargeState;  // 0x120
    char ChargeDrainState[4];  // 0x124
    unsigned char __pad_128;  // 0x128
    char __pad_129[75];  // 0x129
    int q174;  // 0x174
    char __pad_178[132];  // 0x178
    int q1FC;  // 0x1FC
    char __pad_200[152];  // 0x200
    int q298;  // 0x298
    char __pad_29C[140];  // 0x29C
    int q328;  // 0x328
    char __pad_32C[4];  // 0x32C
    int q330;  // 0x330
    char __pad_334[20];  // 0x334
    int q348;  // 0x348
    int q34C;  // 0x34C
    char __pad_350[844];  // 0x350
    int q69C;  // 0x69C
    char __pad_6A0[1452];  // 0x6A0
    int qC4C;  // 0xC4C
    char __pad_C50[24];  // 0xC50
    int qC68;  // 0xC68
    char __pad_C6C[812];  // 0xC6C
    int qF98;  // 0xF98
    char __pad_F9C[76];  // 0xF9C
    int qFE8;  // 0xFE8
    union {
        struct { unsigned char __pad_6C; unsigned char Granted; unsigned char OneTime; unsigned char IsCharged; };  // 0x6C
    };
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static wchar_t * SetCurrentFrame(SuperClass *pThis);
    static void AdvanceCountdown(SuperClass *pThis);
    AbstractClass * * Reset(void *a1, void *a2);
    AbstractClass * * StartTimer(int aP1, char aP2, char aP3);
    char StopPreclickAnim(int aP1);  // G57w10-S raw 0x006CB830 IUnknown 占位清除
    SuperClass * * CleanupMembers(void *a1);
    bool ShouldDrawProgress();
    bool ShouldFlashTab();
    char CanFire();
    char SetOnHold(char aP1);
    char SetReadiness(char a2);
    int AnnounceReady(DynamicVector * aP1, void *a2);
    int ClickFire(int a2, short * a3);
    int Construct(int a2, CCINIClass * aP2, void *a3, void *a4, void *a5, void *a6, void *a7 = 0, void *a8 = 0, void *a9 = 0);
    int Constructor(void *a1, void *a2, void *a3, void *a4 = 0, void *a5 = 0, void *a6 = 0);
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
};

} // namespace gamemd
