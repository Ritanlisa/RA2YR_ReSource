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
    bool IsAllocated;  // 0xD
    bool IsInitialized;  // 0x12
    int Count;  // 0x16
    unsigned int CapacityIncrement;  // 0x20
    CellStruct * ptr_24;  // 0x24
    unsigned int CellIterator_NextY;  // 0x110
    unsigned int CellIterator_CurrentY;  // 0x114
    unsigned int CellIterator_NextCell;  // 0x118
    unsigned int ZoneIterator_X;  // 0x11C
    unsigned int ZoneIterator_Y;  // 0x120
    unsigned int MapCoordBounds;  // 0x124
    unsigned int MaxLevel;  // 0x138
    unsigned int MaxWidth;  // 0x13C
    unsigned int Crates;  // 0x148
    CampaignClass * ptr_1264;  // 0x1264
    unsigned int FoundationTypePixels;  // 0x1278
    unsigned int RadarSizeFactor;  // 0x1488
    unsigned int IsAvailableNow;  // 0x14D8
    TimerStruct * ptr_5788;  // 0x5788
    unsigned int tail_1600D;  // 0x1600D
// --- flat members (END) ---
    int MouseClass_field_0x70;  // 0x70 (G57W14E1 til supply)
    void* HandleClick_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon MouseClass::HandleClick is a method)
    static unsigned int HandleClick(MouseClass *p_this);  // x4:ida@0x5bdf50
    char LoadCursors();
    char ToggleContextGadget(int a1, int a2);
     int DrawCursor(LPSTREAM pStm);
    static void CalcConfiningRect(MouseClass * aP1);
     unsigned int * Construct(int a2, int a3, void *a1 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0, void *a9 = 0);
    void * LoadTypeData(void *a1 = 0);  // 0x5bdf30
    unsigned char m_8[64];  // pad compile-supply (G41.47)
    unsigned char m_10[64];  // pad compile-supply (G41.47)
    unsigned char m_1[64];  // pad compile-supply (G41.47)
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
