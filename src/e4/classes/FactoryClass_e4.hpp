// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct FactoryClass {
    void * ptr_0;  // 0x0
    void * ptr_4;  // 0x4
    void * ptr_8;  // 0x8
    void * ptr_C;  // 0xC
    void* uniqueId;  // 0x10
    void* abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    int production[3];  // 0x24
    TechnoTypeClass** queuedObjects;  // 0x30
    int queuedCount;  // 0x34
    int queuedCapacity;  // 0x38
    TechnoClass* object;  // 0x3C
    bool onHold;  // 0x40
    bool isDifferent;  // 0x41
    char __pad_42[2];  // 0x42
    unsigned int q044;  // 0x44
    unsigned int u32_48;  // 0x48
    char __pad_4C[4];  // 0x4C
    int u32_50;  // 0x50
    char __pad_54[4];  // 0x54
    unsigned int q058;  // 0x58
    char __pad_5C[2];  // 0x5C
    char m_align_5E[2];  // 0x5E
    int balance;  // 0x60
    int originalBalance;  // 0x64
    int specialItem;  // 0x68
    HouseClass* owner;  // 0x6C
    bool isSuspended;  // 0x70
    bool isManual;  // 0x71
    char align72[2];  // 0x72
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static char RemoveItem(void *aP1, int a2);
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
};

} // namespace gamemd
