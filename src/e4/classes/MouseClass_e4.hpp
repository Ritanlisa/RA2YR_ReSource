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
    void* HandleClick_ph;  // 0x0
    int MouseClass_field_0x4;  // 0x4
    int MouseClass_field_0x8;  // 0x8
    int MouseClass_field_0xC;  // 0xC
    unsigned int q_10;  // 0x10
    int MouseClass_field_0x14;  // 0x14
    char __pad_18[8];  // 0x18
    unsigned int CapacityIncrement;  // 0x20
    unsigned int u32_24;  // 0x24
    int MouseClass_field_0x28;  // 0x28
    char __pad_2C[1];  // 0x2C
    char MouseClass_field_0x2D[4];  // 0x2D
    char __pad_31[7];  // 0x31
    int MouseClass_field_0x38;  // 0x38
    char __pad_3C[4];  // 0x3C
    unsigned int q_40;  // 0x40
    char __pad_44[28];  // 0x44
    unsigned int q_60;  // 0x60
    char __pad_64[4];  // 0x64
    int MouseClass_field_0x68;  // 0x68
    char __pad_6C[4];  // 0x6C
    CampaignClass* MouseClass_field_0x70;  // 0x70
    char __pad_74[12];  // 0x74
    unsigned int q_80;  // 0x80
    char __pad_84[28];  // 0x84
    unsigned int q_A0;  // 0xA0
    char __pad_A4[44];  // 0xA4
    unsigned int q_D0;  // 0xD0
    char __pad_D4[40];  // 0xD4
    int MouseClass_field_0xFC;  // 0xFC
    unsigned int q_100;  // 0x100
    char __pad_104[8];  // 0x104
    int MouseClass_field_0x10C;  // 0x10C
    unsigned int CellIterator_NextY;  // 0x110
    unsigned int CellIterator_CurrentY;  // 0x114
    char CellIterator_NextCell[3];  // 0x118
    char u32_11B[4];  // 0x11B
    char __pad_11F[1];  // 0x11F
    unsigned int ZoneIterator_Y;  // 0x120
    unsigned int MapCoordBounds;  // 0x124
    char __pad_128[16];  // 0x128
    unsigned int MaxLevel;  // 0x138
    unsigned int MaxWidth;  // 0x13C
    int MouseClass_field_0x140;  // 0x140
    char __pad_144[4];  // 0x144
    unsigned int Crates;  // 0x148
    char __pad_14C[16];  // 0x14C
    int MouseClass_field_0x15C;  // 0x15C
    char __pad_160[112];  // 0x160
    int MouseClass_field_0x1D0;  // 0x1D0
    char __pad_1D4[996];  // 0x1D4
    void* q5B8;  // 0x5B8
    char __pad_5BC[192];  // 0x5BC
    unsigned int u32_67C;  // 0x67C
    char __pad_680[2808];  // 0x680
    int MouseClass_field_0x1178;  // 0x1178
    int MouseClass_field_0x117C;  // 0x117C
    char __pad_1180[32];  // 0x1180
    int MouseClass_field_0x11A0;  // 0x11A0
    int MouseClass_field_0x11A4;  // 0x11A4
    int MouseClass_field_0x11A8;  // 0x11A8
    char __pad_11AC[172];  // 0x11AC
    int MouseClass_field_0x1258;  // 0x1258
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static unsigned int HandleClick(MouseClass *p_this);  // x4:ida@0x5bdf50
    char LoadCursors();
    char ToggleContextGadget(int a1, int a2);
     int DrawCursor(LPSTREAM pStm);
    static void CalcConfiningRect(MouseClass * aP1);
     unsigned int * Construct(int a2, int a3, void *a1 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0, void *a9 = 0);
    void * LoadTypeData(void *a1 = 0);  // 0x5bdf30
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
