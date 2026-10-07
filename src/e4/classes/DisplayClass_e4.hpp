// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct Coord;  // fix_fwd_type_supply
struct HouseClass;  // fix_fwd_type_supply
struct AbstractTypeClass;  // fix_fwd_type_supply
struct ParticleSystemClass;  // fix_fwd_type_supply
struct BuildingTypeClass;  // fix_fwd_type_supply
struct Tactical;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply

struct DisplayClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    AbstractClass * ptr_4;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned char __pad_8[25];  // 0x8
    unsigned int q00C;  // 0xC
    bool IsAllocated;  // 0xD
    int Count;  // 0x10
    unsigned char __pad_10[5];  // 0x10
    int CapacityIncrement;  // 0x14
    unsigned int q018;  // 0x18
    unsigned int q01C;  // 0x1C
    unsigned int q020;  // 0x20
    unsigned int outBuffer;  // 0x24
    unsigned int q028;  // 0x28
    bool q02B;  // 0x2B
    unsigned int q02C;  // 0x2C
    AbstractClass* q030;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int q038;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03C;  // 0x3C
    unsigned char DisplayClass_field_0xC[1];  // 0xC
    unsigned int q040;  // 0x40
    unsigned int q044;  // 0x44
    unsigned int q048;  // 0x48
    AbstractClass* q04C;  // 0x4C
    DynamicVector * q050;  // 0x50
    unsigned int q054;  // 0x54
    unsigned int q058;  // 0x58
    unsigned char q05C;  // 0x5C
    unsigned int q060;  // 0x60
    void* q064;  // 0x64
    unsigned char q078;  // 0x78
    unsigned int q07C;  // 0x7C
    void* q08C;  // 0x8C
    unsigned char q090;  // 0x90
    unsigned int q0A4;  // 0xA4
    unsigned int q0B0;  // 0xB0
    unsigned int q0B4;  // 0xB4
    unsigned int q0D8;  // 0xD8
    unsigned char q0E0;  // 0xE0
    ObjectClass* q0E4;  // 0xE4
    unsigned char q0F0;  // 0xF0
    unsigned int q0F4;  // 0xF4
    unsigned int q0F8;  // 0xF8
    unsigned int q100;  // 0x100
    unsigned int q104;  // 0x104
    unsigned int q10C;  // 0x10C
    unsigned int CellIterator_NextY;  // 0x110
    unsigned int q128;  // 0x128
    void* q12C;  // 0x12C
    void* q130;  // 0x130
    void* q140;  // 0x140
    unsigned char q144;  // 0x144
    unsigned int Crates;  // 0x148
    HouseClass* q150;  // 0x150
    unsigned int q164;  // 0x164
    unsigned int q168;  // 0x168
    unsigned int q20C;  // 0x20C
    bool q258;  // 0x258
    unsigned int q264;  // 0x264
    unsigned int q280;  // 0x280
    AbstractClass* q2B4;  // 0x2B4
    unsigned int q2E4;  // 0x2E4
    void* q300;  // 0x300
    unsigned int q308;  // 0x308
    unsigned char q324;  // 0x324
    unsigned int q340;  // 0x340
    BuildingTypeClass* q520;  // 0x520
    unsigned int u32_70C;  // 0x70C
    unsigned int u32_710;  // 0x710
    unsigned char q730;  // 0x730
    void* q11D4;  // 0x11D4
    void* q11D8;  // 0x11D8
    void* q11DC;  // 0x11DC
    void* q11E0;  // 0x11E0
    unsigned int DisplayClass_field_0x0;
    unsigned int DisplayClass_field_0x11A8;
    unsigned int DisplayClass_field_0x11B0;
    unsigned int DisplayClass_field_0x11D0;
    unsigned int DisplayClass_field_0x12C;
    unsigned int DisplayClass_field_0x130;
    unsigned int DisplayClass_field_0x134;
    unsigned int DisplayClass_field_0x140;
    unsigned int *__pad_1198;
    unsigned int __pad_11AC;
    unsigned int *__pad_11B4;
    unsigned int *__pad_41E;
    unsigned int MapClass;
// --- flat members (END) ---
    DisplayClass * Read(char * Block, char a2);
    HWND Render(void *a1, void *a2);
    char UpdateCellPassability(__int16 *a2, int a3);  // G57w10-S raw 0x004A9890 IUnknown 占位清除
    char ProcessCellReveal(__int16 *a2, int a3);  // G57w10-S raw 0x004A9DD0 IUnknown 占位清除
    unsigned int DisplayClass_field_0x11D4;  // 0x11D4
    unsigned int DisplayClass_field_0x11D8;  // 0x11D8
    unsigned int DisplayClass_field_0x11DC;  // 0x11DC
    unsigned int DisplayClass_field_0x11E0;  // 0x11E0
    int SetCoordVisible(DisplayClass *aP1, unsigned int *a2, char a3);  // G57w10-S raw 0x004A9840 IUnknown 占位清除
    char ddtor(void *a1);
    int * processDisplayMode(char a2);
    int AdvanceFrameCounter();
    int ExitMode();
    int GetCoordDelta(AbstractClass * aP1);
    int GetSurface(unsigned int * a1);
    int InitViewBounds(unsigned int * a2);
    int InsertPriorityText(int a2);
    int LoadTypeData();
    int ProcessTacticalMouseInput(char a2, int a3, int a4);
    int ReadFromBuffer(void * a1, signed int Size);
    int RenderStatusText(IUnknown * aP1, char a3);
    bool RevealFogCell(__int16 *a2, int a3);  // G57w10-S raw 0x004AA050 IUnknown 占位清除
    int ScrollTacticalView(int a2, int a3);  // G57w10-S raw 0x006D8530 IUnknown 占位清除
    int SetSize();
    int SetSurface(unsigned int * a1);
    int UpdateDisplayTimer();
    int checkScreenBounds(int a2);
    unsigned int * loc_4AEB50(MouseClass * aP1);
    unsigned int * updateRenderState(char a2);
    void * Draw(int a2);
    void Update(int a2);
    void Update(PowerClass * aP1, int a3, void *a3_2, void *a4);
};

} // namespace gamemd
