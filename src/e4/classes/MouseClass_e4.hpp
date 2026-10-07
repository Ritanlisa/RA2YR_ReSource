// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once
#ifndef GAMEMD_E4_FLAT_MouseClass
#define GAMEMD_E4_FLAT_MouseClass 1  // G57c2: suppress minimal_carriers.hpp twin
#endif



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CampaignClass;  // fix_fwd_type_supply
struct Coord;  // fix_fwd_type_supply
struct AbstractTypeClass;  // fix_fwd_type_supply
struct ParticleSystemClass;  // fix_fwd_type_supply
struct HouseClass;  // fix_fwd_type_supply
struct BuildingTypeClass;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct AnimClass;  // fix_fwd_type_supply
struct OverlayTypeClass;  // fix_fwd_type_supply
struct TimerStruct;  // fix_fwd_type_supply

struct MouseClass {
// --- flat members (BEGIN) ---
    void* q000;  // 0x0
    unsigned char __pad_0[87];  // 0x0
    unsigned int u16_2;  // 0x2
    unsigned int u32_4;  // 0x4
    unsigned int u32_8;  // 0x8
    void* q00C;  // 0xC
    bool IsAllocated;  // 0xD
    int q010;  // 0x10
    bool IsInitialized;  // 0x12
    int q014;  // 0x14
    int Count;  // 0x16
    unsigned int q018;  // 0x18
    unsigned int q01C;  // 0x1C
    unsigned int CapacityIncrement;  // 0x20
    unsigned int q028;  // 0x28
    bool q02B;  // 0x2B
    unsigned int u32_2C;  // 0x2C
    unsigned int q030;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int q034;  // 0x34
    unsigned int u32_38;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03C;  // 0x3C
    unsigned int q040;  // 0x40
    unsigned int q044;  // 0x44
    unsigned int u32_48;  // 0x48
    unsigned int u32_4C;  // 0x4C
    unsigned int u32_50;  // 0x50
    unsigned int u32_54;  // 0x54
    unsigned int q058;  // 0x58
    unsigned int q05C;  // 0x5C
    unsigned int q060;  // 0x60
    unsigned int q064;  // 0x64
    unsigned int q068;  // 0x68
    unsigned int q06C;  // 0x6C
    int MouseClass_field_0x70;  // 0x70 (G57W14E1 til supply)
    unsigned int q078;  // 0x78
    unsigned int q07C;  // 0x7C
    unsigned int q080;  // 0x80
    unsigned int q08C;  // 0x8C
    unsigned int q090;  // 0x90
    unsigned char q098;  // 0x98
    unsigned int q0A4;  // 0xA4
    void* q0AC;  // 0xAC
    unsigned int q0B0;  // 0xB0
    unsigned int q0B4;  // 0xB4
    unsigned int u32_D4;  // 0xD4
    unsigned int q0D8;  // 0xD8
    unsigned char q0E0;  // 0xE0
    unsigned int q0E4;  // 0xE4
    unsigned char q0F0;  // 0xF0
    unsigned int q0F4;  // 0xF4
    unsigned int q0F8;  // 0xF8
    unsigned int q100;  // 0x100
    unsigned int q104;  // 0x104
    unsigned int q10C;  // 0x10C
    unsigned int CellIterator_NextY;  // 0x110
    unsigned int q128;  // 0x128
    unsigned char q12C;  // 0x12C
    void* q130;  // 0x130
    unsigned int q140;  // 0x140
    unsigned int q144;  // 0x144
    unsigned int Crates;  // 0x148
    unsigned int q150;  // 0x150
    unsigned int q154;  // 0x154
    unsigned char q158;  // 0x158
    unsigned int q164;  // 0x164
    unsigned int q168;  // 0x168
    unsigned char q19C;  // 0x19C
    unsigned int u32_1C0;  // 0x1C0
    unsigned int q20C;  // 0x20C
    void* q258;  // 0x258
    unsigned int q264;  // 0x264
    unsigned int q280;  // 0x280
    AbstractClass* q2B4;  // 0x2B4
    unsigned int q2E4;  // 0x2E4
    unsigned char q300;  // 0x300
    unsigned int q308;  // 0x308
    unsigned int q324;  // 0x324
    unsigned int q340;  // 0x340
    unsigned int q520;  // 0x520
    unsigned char q5B0;  // 0x5B0
    void* q5B8;  // 0x5B8
    unsigned int u32_67C;  // 0x67C
    unsigned char q730;  // 0x730
    unsigned int q11D4;  // 0x11D4
    unsigned int q11D8;  // 0x11D8
    unsigned int q11DC;  // 0x11DC
    unsigned int q11E0;  // 0x11E0
    unsigned int q14E4;  // 0x14E4
    void* q14EC;  // 0x14EC
    unsigned char q5488;  // 0x5488
    unsigned int _base;
    unsigned int _bufsiz;
    unsigned int _cnt;
    unsigned int _file;
    unsigned int _flag;
    unsigned int _ptr;
    unsigned int field_0;
    unsigned int *__pad_74;
    void* HandleClick_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon MouseClass::HandleClick is a method)
    static unsigned int HandleClick(...);  // w18j3 C2597 static-call supply (w16g4 convention)
// --- flat members (END) ---
    char LoadCursors();
    char ToggleContextGadget(int a1, int a2);
     int DrawCursor(LPSTREAM pStm);  // G57w10-S raw 0x005BE6D0 (was C2597 interim stub)
    static void CalcConfiningRect(MouseClass * aP1);  // G57w10-S raw 0x007B8960 (was C2597 interim stub)
     unsigned int * Construct(int a2, int a3);  // G57w10-S raw 0x007B8730 (was C2597 interim stub)
    void * LoadTypeData();  // 0x5bdf30
    unsigned char m_8[64];  // pad compile-supply (G41.47)
    unsigned char m_10[64];  // pad compile-supply (G41.47)
    unsigned char m_1[64];  // pad compile-supply (G41.47)
    int GetPosition();  // 0x5bdaa0
    int ReleaseSubsystem();
    int ReleaseChannel();
    void DestroyAll(void * Block);
    int Reset();
    int ResetChannel(int a2, int a3);
    int ResetChannel2(int a2, int a3);
    int SetupPlayback();
    int SelectRandom();
    void CleanupChannels();
    int ReadStreamAndSyncPosition();
    int SetPlaybackCallback();
    int ProcessCallback(void *a1_1);
    void InitNodeFields();
    int GetChannel();
    int ReadStreamAndReturn(void *a1_1);
    int ReadSamples(const void * a2, void *a2_2);
    MouseClass * * DrawWaveform(IUnknown * aP1, IUnknown * aP2, IUnknown * aP3, IUnknown * aP4, int a6, int a7, int a8);
    int SetFlag4C();
    int ProcessStream();
    void Destructor(unsigned int * Block);
    int CheckFormatChanged(int a1, const void * a2);
    int InitListAndCounters(void *a1_1);
    int UpdateTimers();
    int UpdateCountdowners();
    char * Constructor(uint64_t);
    unsigned int q_80;  // +0x80 flat supply (P5 provenance)
    unsigned int q_10;  // +0x10 flat supply (P5 provenance)
    unsigned int q_A0;  // +0xA0 flat supply (P5 provenance)
    unsigned int q_D0;  // +0xD0 flat supply (P5 provenance)
    unsigned int q_100;  // +0x100 flat supply (P5 provenance)
    unsigned int q_30;  // +0x30 flat supply (P5 provenance)
    unsigned int q_40;  // +0x40 flat supply (P5 provenance)
    unsigned int q_60;  // +0x60 flat supply (P5 provenance)
};

} // namespace gamemd
