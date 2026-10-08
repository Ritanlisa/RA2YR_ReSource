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
    void* q010;  // 0x10
    unsigned int q011;  // 0x11
    bool IsAllocated;  // 0x13
    unsigned int u32_14;  // 0x14
    unsigned int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    unsigned char q020;  // 0x20
    void* q024;  // 0x24
    void* q028;  // 0x28
    bool q02B;  // 0x2B
    void* q02C;  // 0x2C
    unsigned char q031;  // 0x31
    unsigned char needsSave;  // 0x32
    unsigned int alignmentPadding;  // 0x33
    unsigned int u32_34;  // 0x34
    unsigned char __pad_34[113];  // 0x34
    void* q038;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03C;  // 0x3C
    HouseClass* Owner;  // 0x44
    unsigned int q04C;  // 0x4C
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    bool q064;  // 0x64
    void* q068;  // 0x68
    void* q06C;  // 0x6C
    unsigned int q74;  // 0x74
    unsigned int SuperClass_field_0x78;  // 0x78
    int q080;  // 0x80
    unsigned char q08A;  // 0x8A
    void* q08C;  // 0x8C
    void * q090;  // 0x90
    char q098[4];  // 0x98
    unsigned int q0A4;  // 0xA4
    void* q0AC;  // 0xAC
    void* q0B0;  // 0xB0
    unsigned char q0B4;  // 0xB4
    unsigned char q0BD;  // 0xBD
    void* q0C4;  // 0xC4
    unsigned char q0D0;  // 0xD0
    void* q0D8;  // 0xD8
    void* q0E0;  // 0xE0
    AbstractClass* q0E4;  // 0xE4
    unsigned char q0F0;  // 0xF0
    void* q0F4;  // 0xF4
    void* q0F8;  // 0xF8
    bool q100;  // 0x100
    AnimClass* Animation;  // 0x104
    unsigned int q10C;  // 0x10C
    char q114[4];  // 0x114
    unsigned int q128;  // 0x128
    unsigned int q12C;  // 0x12C
    unsigned int q130;  // 0x130
    unsigned int q138;  // 0x138
    unsigned int q13C;  // 0x13C
    unsigned int q140;  // 0x140
    void * q144;  // 0x144
    unsigned int q150;  // 0x150
    unsigned char q154;  // 0x154
    void* q158;  // 0x158
    unsigned int q164;  // 0x164
    unsigned int q168;  // 0x168
    unsigned int q1AC;  // 0x1AC
    unsigned int q1B0;  // 0x1B0
    unsigned char q1EC;  // 0x1EC
    void* q20C;  // 0x20C
    unsigned char q258;  // 0x258
    bool q264;  // 0x264
    unsigned char q26C;  // 0x26C
    void* q280;  // 0x280
    void* q2A0;  // 0x2A0
    ObjectClass* q2B4;  // 0x2B4
    unsigned int q300;  // 0x300
    unsigned int q308;  // 0x308
    void * q324;  // 0x324
    unsigned char q33C;  // 0x33C
    unsigned char q340;  // 0x340
    BuildingTypeClass* q520;  // 0x520
    unsigned char q5B8;  // 0x5B8
    unsigned char q698;  // 0x698
    void* q7B0;  // 0x7B0
    void* qBC0;  // 0xBC0
    void* qBF0;  // 0xBF0
    unsigned char qE08;  // 0xE08
    unsigned int DestinationCoords;
    unsigned int Height;
    unsigned int SuperClass_field_0x0;
    unsigned int SuperClass_field_0x24;
    unsigned int SuperClass_field_0x28;
    unsigned int SuperClass_field_0x2C;
    unsigned int SuperClass_field_0x30;
    unsigned int SuperClass_field_0x38;
    unsigned int SuperClass_field_0x4;
    unsigned int SuperClass_field_0x60;
    unsigned int SuperClass_field_0x68;
    unsigned int SuperClass_field_0x6C;
    unsigned int SuperClass_field_0x70;
    unsigned int SuperClass_field_0x7C;
    unsigned int SuperClass_field_0x8;
    unsigned int *__pad_3C;
    unsigned int *__pad_C;
    unsigned int Accel;
    unsigned int Crash;
    unsigned int CurrentHeight;
    unsigned int Deviation;
    unsigned int NoWobbles;
    unsigned int Wobbles;
    unsigned int SetCurrentFrame_slot;
    unsigned int q030;
    unsigned int q060;
    unsigned int q07C;
    unsigned int u32_7C;
    unsigned int AdvanceCountdown_slot;
    unsigned int q078;
    unsigned int ChronoMapCoords;
// --- flat members (END) ---
    static wchar_t * SetCurrentFrame(SuperClass *pThis);  // G57w19k2 raw thiscall static-form supply (member SetCurrentFrame -> SetCurrentFrame_slot)
    static void AdvanceCountdown(SuperClass *pThis);  // G57w19k2 raw thiscall static-form supply (member AdvanceCountdown -> AdvanceCountdown_slot)
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
    _DWORD * Construct(int aP1);
    void Constructor(int a2, int *a3, int a4, void *a5, unsigned int *a6, int a7);
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
    int SetFieldX();  // 0x6ce270
    char RemoveFromPointerArray(int a2);  // 0x6ce320
    int Constructor(void *a1, void *a2, void *a3);
    int Construct(int a2, CCINIClass * aP2, void *a3, void *a4, void *a5, void *a6);
    int AnnounceReady(DynamicVector * aP1, void *a2, void * aEvaForceshield, void * aEvaIroncurtain, void * aEvaNuclearmiss, void * aEvaPsychicdomi, void * aEvaReinforceme, void * aEvaSpyplanerea);
    wchar_t * NameReadiness(void * aTxtHold);
};

} // namespace gamemd
