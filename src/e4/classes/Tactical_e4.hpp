// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Coord;  // fix_fwd_type_supply
struct InfantryClass;  // fix_fwd_type_supply
struct AbstractTypeClass;  // fix_fwd_type_supply
struct ConnectionPointClass;  // fix_fwd_type_supply
struct AnimClass;  // fix_fwd_type_supply
struct FacingStruct;  // fix_fwd_type_supply
struct ParticleSystemClass;  // fix_fwd_type_supply
struct HouseClass;  // fix_fwd_type_supply
struct BuildingTypeClass;  // fix_fwd_type_supply
struct ScenarioClass;  // fix_fwd_type_supply
struct MouseClass;  // fix_fwd_type_supply
struct Tactical {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    bool IsAllocated;  // 0x13
    unsigned int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    unsigned int alignmentPadding;  // 0x33
// --- flat members (END) ---
    void * ConstructTacticalSurface();  // 0x42A6D0
    int CreateTacticalLightSurface(Tactical *aP1, int *a2, unsigned int *a3, unsigned int *a4, int *a5, int a6, int a7);  // G57w10-S raw 0x00484050 IUnknown 占位清除
ScenarioClass * * CalculateTacticalLighting(int * a1, IUnknown * aP2, int * a3, int * a4, IUnknown * aP5, int * a6, long long a8, void *a8_2);
    unsigned int * MouseMove(unsigned int *aP1, unsigned int *aP2, void *a3 = 0);  // 0x4A91B0
    int IsCellVisible(IUnknown * aP1);  // G57w10-S raw 0x00568350 IUnknown 占位清除
    void * GetCellData(void *a1 = 0);  // 0x58C2A0
    int MouseOver(MouseClass * aP0, MouseClass * aP1, MouseClass * aP2, MouseClass * aP3, MouseClass * aP4, MouseClass * aP5);  // 0x692300
    MouseClass * * HandleTacticalMouseInput(int _28, unsigned int * a2, int a4, MouseClass * aP4, void *a5_1);  // 0x6930A0
    int UpdateUIVisibility();  // 0x6A6610
    void DisplayTacticalOverlayText(wchar_t * String);  // 0x6D4E20
    unsigned int SetTacticalPosition(int *aP1, void *a2 = 0);  // 0x6D6070
    unsigned int * PixelToCell(unsigned int *aP1, int *aP2);  // 0x6D6590
    int AddCellToDrawList(int aP1, void *a2 = 0);  // 0x6DA7D0
    void* DrawTacticalConnectorLines();  // 0x6DB210
    int DrawOverlay(int * a1, BuildingTypeClass * aP2, int a4, int a5);  // 0x6DBB60
    Tactical *  UpdateView(char a2);  // 0x6DC470
    char * SetCellTransform(int a2, int aP2, int a4, int aP4, int a6, int a7, void *a7_1 = 0);  // 0x4A35F0
    int  Init(unsigned int * a2, void *a1 = 0);  // 0x6E4970
    char  SelectObject(int a2, void *a2_2 = 0);  // 0x4F4450
    int *  ScrollMap(int a2);  // 0x6DA560
    int  InitMap(int a2, int a2_x = 0);  // 0x6DBD20
    int  UpdateMapView(int * a2, int a3);  // 0x6DBE00
    int  ddtor(unsigned int * a2);  // 0x6DBCE0
    int StubReturn56();  // 0x6DC450
    int StubReturn3608();  // 0x6DC460
    int UpdateUIVisibility(void *a1_1);
    int Init(unsigned int * a2, void *a2_2, void *a3_1, void *a4_1, void *a5_1, void *a6_1, void *a7_1, void *a8_1);
    char __pad_10[32];  // 0x10 (ml)
    void* q034;  // 0x34 (offset-truth) [X30:type_map]
    unsigned int u32_1178;  // 0x1178 (offset-truth)
    unsigned char u32_117A;  // 0x117A (offset-truth)
    unsigned int u32_117C;  // 0x117C (offset-truth)
    unsigned char u32_146;  // 0x146 (offset-truth)

    unsigned char Tactical_field_0x2[4];  /* char[4] */  // X10 supply (member_lookup)
    CellClass * ptr_3;  // X10 supply (member_lookup)
    unsigned char q070;  // X10 supply (member_lookup)
    bool q074;  // X10 supply (member_lookup)
    unsigned int q0A4;  // X10 supply (member_lookup)
    int q0F4;  // X10 supply (member_lookup)
    int q0F8;  // X10 supply (member_lookup)
    bool q105;  // X10 supply (member_lookup)
    unsigned char q1198;  // X10 supply (member_lookup)
    unsigned int u32_1174;  // X10 supply (member_lookup)
    unsigned int u32_1176;  // X10 supply (member_lookup)
    unsigned int u32_1180;  // X10 supply (member_lookup)
    unsigned int u32_1181;  // X10 supply (member_lookup)
    unsigned int u32_11AC;  // X10 supply (member_lookup)
    unsigned int u32_24;  // X10 supply (member_lookup)
    unsigned int u32_28;  // X10 supply (member_lookup)
    unsigned int u32_2C;  // X10 supply (member_lookup)
    unsigned int u32_38;  // X10 supply (member_lookup)
    unsigned int u32_3C;  // X10 supply (member_lookup)
    unsigned int u32_68;  // X10 supply (member_lookup)
    unsigned int u32_72;  // X10 supply (member_lookup)
    unsigned int u32_B0;  // X10 supply (member_lookup)
    unsigned int u32_B4;  // X10 supply (member_lookup)
    unsigned int u32_D7D;  // X10 supply (member_lookup)
    int u32_DE4;  // X10 supply (member_lookup)
    unsigned int u32_E0;  // X10 supply (member_lookup)
    unsigned int u32_BC;  // 0xBC
    unsigned int u32_64;  // 0x64
    unsigned int q04C;  // 0x4C
    int __pad_010;  // 0x10 [X30:type_map]
    unsigned char __pad_017;  // 0x17 [X30:canon]
    unsigned char __pad_020;  // 0x20 [X30:canon]
    unsigned char __pad_037;  // 0x37 [X30:canon]
    unsigned int AbstractClass_1;  // [X30:default]
    unsigned int GetCellDatav32;  // [X30:default]
    unsigned int GetCellDatav44;  // [X30:default]
    unsigned int HouseClass_6C;  // [X30:default]
    char Tactical_field_0x11B[4];  // 0x11B [X30:member_lookup]
    unsigned int abstractFlags;  // [X30:default]
    unsigned int dominatorRed;  // [X30:default]
    unsigned int needsSave;  // [X30:default]
    int u16_26;  // 0x26 [X30:type_map]
    unsigned int uniqueId;  // [X30:default]
};
} // namespace gamemd
