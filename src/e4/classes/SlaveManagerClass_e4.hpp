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
    unsigned int q01A;  // 0x1A
    int referenceCount;  // 0x1C
    bool q01D;  // 0x1D
    void * NeedsSaveOrLink;  // 0x20
    TechnoClass* master;  // 0x24
    HouseClass* house;  // 0x28
    bool q02B;  // 0x2B
    HouseClass* slaveOwner;  // 0x2C
    char slaveType[4];  // 0x30
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    char slaveCount[4];  // 0x34
    unsigned int slaves;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    char slaveVectorCount[4];  // 0x3C
    unsigned int q03D;  // 0x3D
    char slaveVectorCapacity[4];  // 0x40
    bool q042;  // 0x42
    char creationFrame[4];  // 0x44
    unsigned char u8_45;  // 0x45
    void* q048;  // 0x48
    bool q04A;  // 0x4A
    unsigned int q04C;  // 0x4C
    unsigned char q04F;  // 0x4F
    void* q050;  // 0x50
    char SlaveManagerClass_field_54[4];  // 0x54
    char SlaveManagerClass_field_58[4];  // 0x58
    char SlaveManagerClass_field_5C[4];  // 0x5C
    char SlaveManagerClass_field_60[4];  // 0x60
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
