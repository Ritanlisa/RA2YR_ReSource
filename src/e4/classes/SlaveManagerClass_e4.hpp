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
    bool IsAllocated;  // 0x13
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    TechnoClass* master;  // 0x24
    unsigned int q28;  // 0x28
    HouseClass* slaveOwner;  // 0x2C
    char slaveType[4];  // 0x30
    unsigned int alignmentPadding;  // 0x33
    char slaveCount[4];  // 0x34
    void *q38;  // 0x38
    char slaveVectorCount[4];  // 0x3C
    char slaveVectorCapacity[4];  // 0x40
    char creationFrame[4];  // 0x44
    char SlaveManagerClass_field_54[4];  // 0x54
    char SlaveManagerClass_field_58[4];  // 0x58
    char SlaveManagerClass_field_5C[4];  // 0x5C
    char SlaveManagerClass_field_60[4];  // 0x60
// --- flat members (END) ---
    AbstractClass * * LoadManager(unsigned int * a1, int a2);
    SlaveManagerClass * ProcessOrders(char a2);
    int AssignTask(AbstractClass * aP1);
    int Check(void *a1 = 0, void *a2 = 0, void *a3 = 0);
    int CheckIsOne();
    int Constructor(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0);
    int IsMasterHarvester();
    int LostSlave(int aP1, void *a1 = 0);
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
    void* ctor(TechnoClass * aP1, int a3, int a4, int a5, int a6, void *a1 = 0, void *a2 = 0, void *a7 = 0);
    wchar_t * CreateSlave(wchar_t ** a2);
    static int ProcessSlaves(SlaveManagerClass *aP1, int *p_SlaveManagerClass_field_5C, int a3);
    SlaveManagerClass * ProcessOrders(void * Block, char a2);

    HouseClass* house;  // X10 supply (csp_canon_members)
    unsigned int slaves;  // X10 supply (csp_canon_members)
    unsigned int u32_AC;  // X10 supply (member_lookup)
};

} // namespace gamemd
