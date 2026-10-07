// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct FactoryClass {
    static char RemoveItem(void *aP1, int a2);  // 0x63F000 raw: char __thiscall FactoryClass::RemoveItem(FactoryClass*, int)  // G57w10 r5 D-classbody supply (raw-anchored)

// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    void* uniqueId;  // 0x10
    unsigned int q011;  // 0x11
    bool IsAllocated;  // 0x13
    void* abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    unsigned int production;  // 0x24
    unsigned int u32_28;  // 0x28
    bool q02B;  // 0x2B
    unsigned int u32_2D;  // 0x2D
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    unsigned int queuedCount;  // 0x34
    unsigned int queuedCapacity;  // 0x38
    unsigned char q03A;  // 0x3A
    TechnoClass* object;  // 0x3C
    bool onHold;  // 0x40
    void* q044;  // 0x44
    void* q048;  // 0x48
    unsigned int q04C;  // 0x4C
    int u32_50;  // 0x50
    unsigned int q054;  // 0x54
    void* q058;  // 0x58
    unsigned int q05C;  // 0x5C
    char originalBalance[4];  // 0x64
    char specialItem[4];  // 0x68
    bool isSuspended;  // 0x70
    unsigned int *__pad_42;
    unsigned int u32_288;
    unsigned int owner;
    unsigned int q02C;
    unsigned int queuedObjects;
    unsigned int Debug;
    unsigned int balance;
    void* RemoveItemAt_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon FactoryClass::RemoveItemAt is a method)
    static unsigned int RemoveItemAt(...);  // w18j3 C2597 static-call supply (w16g4 convention)
// --- flat members (END) ---
    AbstractClass * * Stat(int * a2);
    static char GetFlag();
    char RemoveOneFromQueue(char a2);
    int CountType(int a2);  // G57w10-S raw 0x004CA670 IUnknown 占位清除
    int DemandProduction(int a2, void * a3, char a4);
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
    static char AbandonProduction(FactoryClass * aP1);  // G57w10-S raw 0x4C9FF0 (was C2597 interim stub)
    int ClearObjects();  // 0x635120
    wchar_t * ResetProductionTimers();  // 0x6b0c80
    unsigned int * CompleteItem();  // 0x71abc0
    int * RemoveFromArrays(char a2);  // 0x63d9c0
    void * CopyTo(void ** Block, char a2);
    static int FindOrCreate(...);  // w18j2 C3861 static supply
};

} // namespace gamemd
