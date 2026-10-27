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
    void * HandleClick_ph;  // 0x0
    int u32_4;  // 0x4
    int u32_8;  // 0x8
    unsigned char q00C;  // 0xC
    bool IsAllocated;  // 0xD
    char __pad_E[2];  // 0xE
    unsigned int q_10;  // 0x10
    int q014;  // 0x14
    char __pad_18[4];  // 0x18
    unsigned int q01C;  // 0x1C
    unsigned int CapacityIncrement;  // 0x20
    unsigned int ptr_24;  // 0x24
    int MouseClass_field_0x28;  // 0x28
    char __pad_2C[1];  // 0x2C
    char MouseClass_field_0x2D[4];  // 0x2D
    char __pad_31[3];  // 0x31
    unsigned int u32_34;  // 0x34
    int MouseClass_field_0x38;  // 0x38
    char __pad_3C[4];  // 0x3C
    unsigned int q_40;  // 0x40
    char __pad_44[4];  // 0x44
    CampaignClass * u32_48;  // 0x48
    unsigned int somecount_4C;  // 0x4C
    unsigned int u32_50;  // 0x50
    unsigned int u32_54;  // 0x54
    unsigned int u32_58;  // 0x58
    unsigned int q05C;  // 0x5C
    unsigned int q_60;  // 0x60
    char __pad_64[4];  // 0x64
    int q068;  // 0x68
    char __pad_6C[4];  // 0x6C
    CampaignClass * LevelAndPassabilityStruct2pointer_70;  // 0x70
    char __pad_74[12];  // 0x74
    unsigned int q_80;  // 0x80
    char __pad_84[12];  // 0x84
    unsigned int q090;  // 0x90
    unsigned int q094;  // 0x94
    char __pad_98[8];  // 0x98
    unsigned int q_A0;  // 0xA0
    char __pad_A4[44];  // 0xA4
    unsigned int q_D0;  // 0xD0
    char __pad_D4[4];  // 0xD4
    unsigned int q0D8;  // 0xD8
    unsigned int q0DC;  // 0xDC
    char __pad_E0[4];  // 0xE0
    unsigned int q0E4;  // 0xE4
    char __pad_E8[12];  // 0xE8
    unsigned int q0F4;  // 0xF4
    unsigned int q0F8;  // 0xF8
    int q0FC;  // 0xFC
    unsigned int q_100;  // 0x100
    char __pad_104[8];  // 0x104
    int q10C;  // 0x10C
    unsigned int CellIterator_NextY;  // 0x110
    unsigned int CellIterator_CurrentY;  // 0x114
    char CellIterator_NextCell[3];  // 0x118
    char q11B[4];  // 0x11B
    char __pad_11F[1];  // 0x11F
    unsigned int ZoneIterator_Y;  // 0x120
    unsigned int MapCoordBounds;  // 0x124
    char __pad_128[16];  // 0x128
    unsigned int MaxLevel;  // 0x138
    unsigned int MaxWidth;  // 0x13C
    int q140;  // 0x140
    char __pad_144[4];  // 0x144
    unsigned int Crates;  // 0x148
    char __pad_14C[16];  // 0x14C
    int q15C;  // 0x15C
    char __pad_160[112];  // 0x160
    int q1D0;  // 0x1D0
    char __pad_1D4[996];  // 0x1D4
    void * q5B8;  // 0x5B8
    char __pad_5BC[192];  // 0x5BC
    unsigned int u32_67C;  // 0x67C
    char __pad_680[2780];  // 0x680
    unsigned int u32_115C;  // 0x115C
    unsigned int q1160;  // 0x1160
    unsigned int q1164;  // 0x1164
    char __pad_1168[4];  // 0x1168
    unsigned int q116C;  // 0x116C
    char __pad_1170[4];  // 0x1170
    unsigned short u32_1174;  // 0x1174
    unsigned short u16_1176;  // 0x1176
    unsigned short u32_1178;  // 0x1178
    unsigned short u32_117A;  // 0x117A
    int u32_117C;  // 0x117C
    char __pad_1180[32];  // 0x1180
    int MouseClass_field_0x11A0;  // 0x11A0
    int MouseClass_field_0x11A4;  // 0x11A4
    int MouseClass_field_0x11A8;  // 0x11A8
    char __pad_11AC[16];  // 0x11AC
    unsigned int q11BC;  // 0x11BC
    char __pad_11C0[152];  // 0x11C0
    int q1258;  // 0x1258
    char __pad_125C[17084];  // 0x125C
    unsigned int u32_5518;  // 0x5518
    char __pad_551C[64];  // 0x551C
    unsigned char u8_555C;  // 0x555C
    char __pad_555D[3];  // 0x555D
    unsigned int u32_5560;  // 0x5560
    unsigned int u32_5564;  // 0x5564
    unsigned int u32_5568;  // 0x5568
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static unsigned int HandleClick(MouseClass *p_this);  // x4:ida@0x5bdf50
    char LoadCursors();
    char ToggleContextGadget(int a1, int a2);
     int DrawCursor(LPSTREAM pStm);
    static void CalcConfiningRect(MouseClass * aP1);
     unsigned int * Construct(int a2, int a3, void *a1 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0, void *a9 = 0);
    void * LoadTypeData();  // 0x5bdf30
    int GetPosition(void *a1 = 0);  // 0x5bdaa0
    int ReleaseSubsystem();
    int ReleaseChannel(void *a1 = 0);
    void DestroyAll(void * Block);
    int Reset(void *a1 = 0, void *a2 = 0);
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
    int SetFlag4C(void *a1 = 0);
    int ProcessStream();
    void Destructor(unsigned int * Block);
    int CheckFormatChanged(int a1, const void * a2);
    int InitListAndCounters(void *a1_1);
    int UpdateTimers();
    int UpdateCountdowners();
    char * Constructor(uint64_t, void *a1 = 0, void *a2 = 0, void *a3 = 0);
};

} // namespace gamemd
