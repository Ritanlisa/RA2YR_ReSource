// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct SlaveManagerClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    int uniqueId;  // 0x10
    unsigned int q011;  // 0x11
    bool IsAllocated;  // 0x13
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    bool q02B;  // 0x2B
    unsigned int slaveType;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    unsigned int slaveCount;  // 0x34
    unsigned char q03A;  // 0x3A
    unsigned int slaveVectorCount;  // 0x3C
    unsigned int slaveVectorCapacity;  // 0x40
    unsigned int creationFrame;  // 0x44
    unsigned char u8_45;  // 0x45
    void* q048;  // 0x48
    unsigned int q04C;  // 0x4C
    unsigned int SlaveManagerClass_field_54;  // 0x54
    unsigned int SlaveManagerClass_field_58;  // 0x58
    unsigned int SlaveManagerClass_field_5C;  // 0x5C
    unsigned int SlaveManagerClass_field_60;  // 0x60
    unsigned int *__pad_48;
    unsigned int house;
    unsigned int q050;
    unsigned int slaveOwner;
    unsigned int slaves;
    unsigned int master;
// --- flat members (END) ---
    AbstractClass * * LoadManager(unsigned int * a1, int a2);
    SlaveManagerClass * ProcessOrders(char a2);
    int AssignTask(AbstractClass * aP1);
    int Check();
    int CheckIsOne();
    int Constructor();
    int IsMasterHarvester();
    int LostSlave(int aP1);
    int SaveManager(TechnoTypeClass * aP0, int * a1, int aP2);
    int SetOwner(TechnoClass * aP1);
    int ShouldWakeUpNow();
    int StubReturn100();
    int StubReturn72();
    char UpdateSlaves();
    int VtableDispatch();
    int ddtor(int a1, unsigned int * a2);
    long long Calc2DDistance();
    void Constructor_SlaveManagerClass();
    void* ctor(TechnoClass * aP1, int a3, int a4, int a5, int a6);
    wchar_t * CreateSlave(wchar_t ** a2);
    static int ProcessSlaves(SlaveManagerClass *aP1, int *p_SlaveManagerClass_field_5C, int a3);  // G57w10-S raw 0x006AF6C0 (was C2597 interim stub)
    SlaveManagerClass * ProcessOrders(void * Block, char a2);
};

} // namespace gamemd
