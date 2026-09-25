// GENERATED template-collision flat carrier (mechanical).
#pragma once

namespace gamemd {

struct VectorClass_flat {
    unsigned int u32_24;
    unsigned int u32_2580;
    unsigned int u32_2590;
    unsigned int u32_28;
    unsigned int u32_2C;
    unsigned int u32_38;
    unsigned int v6;
    unsigned int __pad_03C;
    unsigned int q038;
    unsigned int q045;
    unsigned int vtable0;
    void* vfptr;
    void* vtable1;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned int tail_E;  // 0xE
    void* q010;  // 0x10
    unsigned int q011;  // 0x11
    unsigned int u32_14;  // 0x14
    unsigned char q015;  // 0x15
    bool q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned int q020;  // 0x20
    AbstractClass* q024;  // 0x24
    ObjectClass* q028;  // 0x28
    BufferIOFileClass* q02A;  // 0x2A
    bool q02B;  // 0x2B
    unsigned int q02C;  // 0x2C
    bool q02D;  // 0x2D
    CampaignClass* q030;  // 0x30
    unsigned char q034;  // 0x34
    unsigned char __pad_038;  // 0x38
    ObjectClass* q040;  // 0x40
    unsigned int q044;  // 0x44
    CampaignClass* q048;  // 0x48
    unsigned char q04C;  // 0x4C
    unsigned int q050;  // 0x50
    AbstractClass* q054;  // 0x54
    unsigned char q058;  // 0x58
    ObjectClass* q064;  // 0x64
    unsigned int q068;  // 0x68
    unsigned int q080;  // 0x80
    AbstractClass* q084;  // 0x84
    unsigned char q088;  // 0x88
    unsigned int q096;  // 0x96
    unsigned int u32_98;  // 0x98
    unsigned char q09A;  // 0x9A
    unsigned int u32_9C;  // 0x9C
    unsigned int u32_AC;  // 0xAC
    unsigned int u32_D8;  // 0xD8
    unsigned int u32_E4;  // 0xE4
    unsigned int u32_E8;  // 0xE8
    ObjectClass* q100;  // 0x100
    unsigned int q104;  // 0x104
    unsigned int u32_110;  // 0x110
    CampaignClass* q114;  // 0x114
    unsigned char q118;  // 0x118
    unsigned char q130;  // 0x130
    unsigned int u32_140;  // 0x140
    unsigned int q150;  // 0x150
    unsigned char q154;  // 0x154
    unsigned int u32_184;  // 0x184
    unsigned int u32_194;  // 0x194
    unsigned int u32_1B0;  // 0x1B0
    AbstractClass * ptr_218;  // 0x218
    unsigned int u32_21C;  // 0x21C
    unsigned int q228;  // 0x228
    unsigned int u32_240;  // 0x240
    unsigned char q280;  // 0x280
    unsigned int u32_2AC;  // 0x2AC
    unsigned int q320;  // 0x320
    unsigned int q338;  // 0x338
    unsigned char q340;  // 0x340
    unsigned int q370;  // 0x370
    unsigned int q388;  // 0x388
    unsigned int u32_3D5;  // 0x3D5
    unsigned int u32_3F8;  // 0x3F8
    unsigned int q404;  // 0x404
    char u32_46C;  // 0x46C
    unsigned int u32_470;  // 0x470
    unsigned int q534;  // 0x534
    unsigned int q540;  // 0x540
    unsigned char u8_5A4;  // 0x5A4
    unsigned int q684;  // 0x684
    unsigned int u32_69C;  // 0x69C
    unsigned int u32_6C4;  // 0x6C4
    unsigned int q800;  // 0x800
    unsigned int q824;  // 0x824
    unsigned int q880;  // 0x880
    unsigned int q904;  // 0x904
    unsigned int q960;  // 0x960
    unsigned char q964;  // 0x964
    unsigned int q1028;  // 0x1028
    unsigned int q1074;  // 0x1074
    AbstractClass * q1334;  // 0x1334
    unsigned int q1344;  // 0x1344
    unsigned int q1378;  // 0x1378
    unsigned int q1398;  // 0x1398
    unsigned char q1444;  // 0x1444
    unsigned int q1574;  // 0x1574
    unsigned int q1668;  // 0x1668
    unsigned int q2048;  // 0x2048
    unsigned int q2084;  // 0x2084
    unsigned int q2308;  // 0x2308
    unsigned int q2400;  // 0x2400
    unsigned char q2404;  // 0x2404
    void* q2584;  // 0x2584
    unsigned char q2588;  // 0x2588
    void* q2590;  // 0x2590
    unsigned char q2594;  // 0x2594
    unsigned char __pad_2598;  // 0x2598
    unsigned char q4024;  // 0x4024
    unsigned char q4028;  // 0x4028
    unsigned char q402C;  // 0x402C
    unsigned char __pad_4030;  // 0x4030
    unsigned int q4118;  // 0x4118
    unsigned char q411C;  // 0x411C
    unsigned char q4120;  // 0x4120
    unsigned char q4124;  // 0x4124
    unsigned char __pad_4128;  // 0x4128
    unsigned int q4914;  // 0x4914
    unsigned char __pad_4918;  // 0x4918
    unsigned int q4984;  // 0x4984
    unsigned char q4988;  // 0x4988
    unsigned char __pad_498C;  // 0x498C
    unsigned char q5188;  // 0x5188
    unsigned char __pad_518C;  // 0x518C
VectorClass_flat * QueryInterface(unsigned int * Block, char a2);
VectorClass_flat * vt00(unsigned int * Block, char a2);
char AddRef(int v4);
char Append(VectorClass_flat * aP1);
char AppendCopy(DynamicVector * aP1);
char EraseAt(IUnknown * aP1);
char InsertAt(IUnknown * aP1, int a3);
char PushBack(VectorClass_flat * aP1);
char PushBack2(unsigned int * a2);
char PushBackCopy(AbstractClass * aP1);
char Release(int a2, char * a3);
char RemoveAt(int a2);
char Resize(int a2, unsigned int * a3);
char ResizeEx(int a2, unsigned int * a3);
char Shrink();
char vt02(int a2, unsigned int * a3);
int * ScalarDtor(char a2);
int Check(Pipe * aP1, int aP2);
int Clear(int v4, int a3);
int GetAt(int a2);
int GetAtChecked(IUnknown * aP1);
int GetAt_Copy(int a2);
int GetCount();
int GetSize(unsigned int * a2);
int LoadStream(TechnoTypeClass * aP1);
int RemoveElement();
int RemoveItem(ObjectClass * aP1);
int RemoveObjectById();
int SaveLoad(TechnoTypeClass * aP1);
int vt04(unsigned int * a2);
unsigned int * BuildingConstructor(int a2, int a3);
unsigned int * BuildingTypeConstructor(TechnoTypeClass * aP1, TechnoTypeClass * aP2);
unsigned int * CellConstructor(IUnknown * aP1, IUnknown * aP2);
unsigned int * Construct(int a2, int a3);
unsigned int * ConstructHSV(int a2, int a3);
unsigned int * ConstructSubzone(int a2, int a3);
unsigned int * ConstructorWithVtable(TechnoTypeClass * aP1, TechnoTypeClass * aP2);
unsigned int * Copy(VectorClass_flat * aP1);
unsigned int * CopyAssign(VectorClass_flat * aP1);
unsigned int * CopyBuilding(VectorClass_flat * aP1);
unsigned int * CopyConstructor(InfantryTypeClass * aP1);
unsigned int * CopyDefault(VectorClass_flat * aP1);
unsigned int * CopyParticle(DynamicVector * aP1);
unsigned int * CopySmudge(CCINIClass * aP1);
unsigned int * PointConstructor(MapClass * aP1, MapClass * aP2);
unsigned int * WstringConstructor(int a2, unsigned int * a3);
unsigned int GetCapacity(int a2);
unsigned int GetIndex(int a2);
unsigned int vt05(int a2);
void Cleanup();
void Cleanup2();
void Cleanup3();
void Cleanup4();
void Cleanup5();
void CleanupSubzone();
void CleanupTyped();
void ClearAndFree();
void ClearAndFree2();
void ClearAndFree3();
void ClearAndFree4();
void Destroy();
void Destructor();
void Dtor();
void ddtor();
};

} // namespace gamemd
