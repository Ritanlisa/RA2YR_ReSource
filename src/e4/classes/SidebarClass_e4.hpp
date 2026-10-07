// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct HouseClass;  // fix_fwd_type_supply
struct AbstractTypeClass;  // fix_fwd_type_supply
struct ParticleSystemClass;  // fix_fwd_type_supply
struct BuildingTypeClass;  // fix_fwd_type_supply
struct Coord;  // fix_fwd_type_supply
struct GadgetClass;  // fix_fwd_type_supply

struct SidebarClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* q004;  // 0x4
    void* q008;  // 0x8
    unsigned int q00C;  // 0xC
    unsigned int q00D;  // 0xD
    unsigned int q010;  // 0x10
    void* q014;  // 0x14
    unsigned int q018;  // 0x18
    void* q01C;  // 0x1C
    unsigned int u32_20;  // 0x20
    unsigned int u32_24;  // 0x24
    unsigned int u32_28;  // 0x28
    bool q02B;  // 0x2B
    unsigned int u32_2C;  // 0x2C
    unsigned char q031;  // 0x31
    void* q034;  // 0x34
    void* q038;  // 0x38
    unsigned char q03A;  // 0x3A
    void* q03C;  // 0x3C
    unsigned int q040;  // 0x40
    unsigned int q044;  // 0x44
    TechnoClass * q048;  // 0x48
    unsigned int u32_4C;  // 0x4C
    DynamicVector * q050;  // 0x50
    void* q054;  // 0x54
    void* q058;  // 0x58
    void* q05C;  // 0x5C
    void* q060;  // 0x60
    void* q064;  // 0x64
    void* q068;  // 0x68
    void* q06C;  // 0x6C
    unsigned char q078;  // 0x78
    unsigned int u32_7C;  // 0x7C
    void* q080;  // 0x80
    void* q08C;  // 0x8C
    unsigned char q090;  // 0x90
    void* q098;  // 0x98
    unsigned int q0A4;  // 0xA4
    void* q0AC;  // 0xAC
    unsigned int q0B0;  // 0xB0
    void* q0B4;  // 0xB4
    unsigned int u32_D0;  // 0xD0
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
    unsigned int q144;  // 0x144
    unsigned int Crates;  // 0x148
    HouseClass* q150;  // 0x150
    unsigned int q154;  // 0x154
    unsigned char q158;  // 0x158
    unsigned int q164;  // 0x164
    unsigned int q168;  // 0x168
    unsigned int u32_1A0;  // 0x1A0
    unsigned int u32_1D4;  // 0x1D4
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
    void* q520;  // 0x520
    unsigned char q5B0;  // 0x5B0
    void* q5B8;  // 0x5B8
    unsigned char q730;  // 0x730
    unsigned int q11D4;  // 0x11D4
    unsigned int q11D8;  // 0x11D8
    unsigned int q11DC;  // 0x11DC
    unsigned int q11E0;  // 0x11E0
    unsigned int q14E4;  // 0x14E4
    void* q14EC;  // 0x14EC
    unsigned int SidebarClass_field_0x5C;
    unsigned int SidebarClass_field_0x68;
    unsigned int *__pad_CD2;
    unsigned int calcSidebarRect_ph;  // w18j3: filler renamed (no offset truth; canon SidebarClass::calcSidebarRect is a method)
    static unsigned int calcSidebarRect(...);  // w18j3 C2597 static-call supply (w16g4 convention)
    unsigned int InitButtons_ph;  // w18j3: filler renamed (no offset truth; canon SidebarClass::InitButtons is a method)
    static unsigned int InitButtons(...);  // w18j3 C2597 static-call supply (w16g4 convention)
    void* GetProductionState_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon SidebarClass::GetProductionState is a method)
    static unsigned int GetProductionState(...);  // w18j3 C2597 static-call supply (w16g4 convention)
// --- flat members (END) ---
    static GadgetClass * LoadResources(void *a1);
    static int CalcBounds(char a1);
    int InitPositions();
    int Redraw(char a2);
    int SwitchTab(int a2);
    int deselect();
    int draw();
    int draw2();
    int initButtons2();
    int select();
    void * LoadAssets();
    void CreateScrollButtons();
    int UpdateStrips(int *a2, unsigned int *a3);  // 0x6a7780
    int AddCameo(int a2, int a3);  // 0x6a6300
    int LoadButtonSHPs();  // 0x6d02b0
    int ReadButtonList();  // 0x674650
    GadgetClass * LoadResources(void *a1, void * aSidegdi1Shp, void * aSidegdi2Shp, void * aSidegdi3Shp);
    static int updateStripVisibility(...);
    static int initializeStrip(...);
    static int updateStripPosition(...);  // w16g4 C3861 static supply (raw 0x006AB9E0)  // w16g4 C3861 static supply (raw 0x006AB990)  // w16g4 C3861 static supply (raw 0x006AB990)
};

} // namespace gamemd
