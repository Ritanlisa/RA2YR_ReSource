// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct SlaveManagerClass {
    unsigned int ptr_0;  // 0x0
    void * ptr_4;  // 0x4
    void * ptr_8;  // 0x8
    void* vtable4;  // 0xC
    int uniqueId;  // 0x10
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    TechnoClass* master;  // 0x24
    HouseClass* house;  // 0x28
    HouseClass* slaveOwner;  // 0x2C
    int slaveType;  // 0x30
    int slaveCount;  // 0x34
    unsigned int slaves;  // 0x38
    int slaveVectorCount;  // 0x3C
    int slaveVectorCapacity;  // 0x40
    int creationFrame;  // 0x44
    unsigned int __pad_48;  // 0x48
    char __pad_4C[8];  // 0x4C
    int SlaveManagerClass_field_54;  // 0x54
    int SlaveManagerClass_field_58;  // 0x58
    int SlaveManagerClass_field_5C;  // 0x5C
    int SlaveManagerClass_field_60;  // 0x60
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    AbstractClass * * LoadManager(unsigned int * a1, int a2);
    SlaveManagerClass * ProcessOrders(char a2);
    int AssignTask(AbstractClass * aP1);
    int Check(void *a1 = 0, void *a2 = 0, void *a3 = 0);
    int CheckIsOne();
    int Constructor(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0);
    int IsMasterHarvester();
    int LostSlave(int aP1, void *a2 = 0);
    int SaveManager(TechnoTypeClass * aP0, int * a1, int aP2);
    int SetOwner(TechnoClass * aP1);
    int ShouldWakeUpNow();
    int StubReturn100();
    int StubReturn72();
    char UpdateSlaves();
    int VtableDispatch();
    int ddtor(int a1, unsigned int * result);
    long long Calc2DDistance();
    void Constructor_SlaveManagerClass();
    void* ctor(TechnoClass * aP1, int a3, int a4, int a5, int a6, void *a6_1 = 0, void *a7 = 0, void *a8 = 0);
    wchar_t * CreateSlave(wchar_t ** a2);
    static int ProcessSlaves(SlaveManagerClass *aP1, int *p_SlaveManagerClass_field_5C, int a3);
    SlaveManagerClass * ProcessOrders(void * Block, char a2);
};

} // namespace gamemd
