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
    unsigned int ;  // 0x24
    unsigned int ;  // 0x28
    bool q02B;  // 0x2B
    unsigned int ;  // 0x2C
    unsigned int slaveType;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    unsigned int slaveCount;  // 0x34
    void* ;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    unsigned int slaveVectorCount;  // 0x3C
    unsigned int q03D;  // 0x3D
    char slaveVectorCapacity[4];  // 0x40
    bool q042;  // 0x42
    char creationFrame[4];  // 0x44
    unsigned char u8_45;  // 0x45
    void* q048;  // 0x48
    bool q04A;  // 0x4A
    unsigned int q04C;  // 0x4C
    unsigned char q04F;  // 0x4F
    unsigned int ;  // 0x50
    unsigned int SlaveManagerClass_field_54;  // 0x54
    unsigned int SlaveManagerClass_field_58;  // 0x58
    unsigned int SlaveManagerClass_field_5C;  // 0x5C
    unsigned int SlaveManagerClass_field_60;  // 0x60
    unsigned int __pad_48;
    unsigned int abstractFlags6;
    unsigned int nextArrayIndex0;
    unsigned int uniqueId0;
    unsigned int vtable0;
    unsigned int vtable46;
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
    int LostSlave(ObjectClass * aP1);
    int SaveManager(TechnoTypeClass * aP0, int * a1, int aP2);
    int SetOwner(TechnoClass * aP1);
    int ShouldWakeUpNow();
    int StubReturn100();
    int StubReturn72();
    int UpdateSlaves();
    int VtableDispatch();
    int ddtor(int a1, unsigned int * a2);
    long long Calc2DDistance();
    void Constructor_SlaveManagerClass();
    void* ctor(TechnoClass * aP1, int a3, int a4, int a5, int a6);
    wchar_t * CreateSlave(wchar_t ** a2);
    static double ProcessSlaves(...);  // C2597 interim stub
};

} // namespace gamemd
