// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct FactoryClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    void* uniqueId;  // 0x10
    bool IsAllocated;  // 0x13
    void* abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    unsigned int production;  // 0x24
    TechnoTypeClass** queuedObjects;  // 0x30
    unsigned int alignmentPadding;  // 0x33
    int queuedCount;  // 0x34 [X30:type_map]
    int queuedCapacity;  // 0x38 [X30:type_map]
    TechnoClass* object;  // 0x3C
    unsigned int q02C;  // 0x2C
    bool onHold;  // 0x40
    bool isDifferent;  // 0x41
    unsigned char m_align_5E;  // 0x5E
    int balance;  // 0x60 [X30:type_map]
int originalBalance;  // 0x64 [X35-L7 kind=int]
    int specialItem;  // 0x68 [X30:type_map]
    HouseClass* owner;  // 0x6C
    int q060;  // 0x60
    unsigned int q058;  // 0x58
    unsigned int u32_58;  // 0x58
    unsigned int u32_54;  // 0x54
    bool isSuspended;  // 0x70
    bool isManual;  // 0x71
    unsigned char align72;  // 0x72
// --- flat members (END) ---
    static char RemoveItem(void *aP1, int a2);
    void* RemoveItemAt_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon FactoryClass::RemoveItemAt is a method)
    static unsigned int RemoveItemAt(int p0);  // x4:signals@0x63dfd0
    AbstractClass * * Stat(int * a2);
    static char GetFlag();
    char RemoveOneFromQueue(char a2);
    int CountType(int aP1);  // G57w10-S raw 0x004CA670 IUnknown 占位清除
    int DemandProduction(int a2, void *a3, char a4);
    int FinishProduction(int a2);
    int GetBuildTimeFrames();
    int GetState(void *a1);
    int HasProgressChanged();
    int IsQueued(int a2);
    int LoadFromStream(int a1, int * a2);
    int Revert(int a2, int a3);
    int Seek(int * a1, int * a2, int a3);
    int SetObject(int a2);
    int StartProduction(char a2);
    int StartProduction_2();
    int StubReturn116();
    int StubReturn12();
    int UpdateProduction();
    int ddtor(int a1, unsigned int * a2);
    void * CopyTo(char a2);
    static char AbandonProduction(FactoryClass * aP1);
    int ClearObjects(void *a1 = 0);  // 0x635120
    wchar_t * ResetProductionTimers();  // 0x6b0c80
    unsigned int * CompleteItem();  // 0x71abc0
    int *  RemoveFromArrays(char a2, void *a1 = 0);  // 0x63d9c0
    void * CopyTo(void ** Block, char a2);
    static int FindOrCreate(char *Source);  // x4:ida@0x6b5910
    char __pad_42[28];  // 0x42 (ml)
    unsigned int u32_288;  // 0x288 (offset-truth)

    void* q044;  // X10 supply (member_lookup)
    unsigned int q05C;  // X10 supply (member_lookup)
    unsigned int u32_4D;  // X10 supply (member_lookup)
    int u32_50;  // X10 supply (member_lookup)
    unsigned int u32_B;  // X10 supply (member_lookup)
    char u32_E;  // X10 supply (member_lookup)

    unsigned int u32_48;  // X10 supply (member_lookup)
    int u8_D;  // X10 supply (member_lookup)
    unsigned char __pad_042;  // 0x42 [X30:canon]
    unsigned int HouseClass_6C;  // [X30:default]
    int q050;  // 0x50 [X30:type_map]
    int u32_44;  // 0x44 [X30:type_map]
    int u8_5D;  // 0x5D [X30:type_map]
    unsigned int uniqueId2;  // [X30:default]
    unsigned int uniqueId4;  // [X30:default]
    unsigned int uniqueId5;  // [X30:default]


    void * vfptr;  // 0x0 [X55 W3 supply (render vocab)]
    void * vfptr1;  // 0x4 [X55 W3 supply (render vocab)]
    void * vfptr2;  // 0x8 [X55 W3 supply (render vocab)]
    void * vfptr3;  // 0xC [X55 W3 supply (render vocab)]
};

} // namespace gamemd
