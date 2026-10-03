// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
class Block;  // G42.36 fwd supply

struct FactoryClass {
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
    unsigned int q01A;  // 0x1A
    int referenceCount;  // 0x1C
    bool q01D;  // 0x1D
    void * NeedsSaveOrLink;  // 0x20
    unsigned int production;  // 0x24
    bool q027;  // 0x27
    unsigned int u32_28;  // 0x28
    bool q02B;  // 0x2B
    unsigned int q2C;  // 0x2C
    unsigned int u32_2D;  // 0x2D
    bool q02F;  // 0x2F
    unsigned int q30;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    unsigned int queuedCount;  // 0x34
    unsigned int queuedCapacity;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    TechnoClass* object;  // 0x3C
    unsigned int q03D;  // 0x3D
    char q03E[4];  // 0x3E
    bool onHold;  // 0x40
    bool isDifferent;  // 0x41
    bool q042;  // 0x42
    void* q044;  // 0x44
    void* q048;  // 0x48
    bool q04A;  // 0x4A
    unsigned int q04C;  // 0x4C
    unsigned char u8_4D;  // 0x4D
    unsigned char q04F;  // 0x4F
    int u32_50;  // 0x50
    unsigned int q054;  // 0x54
    void* q058;  // 0x58
    unsigned int q05C;  // 0x5C
    unsigned char u8_5D;  // 0x5D
    unsigned char m_align_5E;  // 0x5E
    void* p60;  // regen name
    char originalBalance[4];  // 0x64
    char specialItem[4];  // 0x68
    unsigned int q6C;  // 0x6C
    bool isSuspended;  // 0x70
    bool isManual;  // 0x71
    unsigned char align72;  // 0x72
    unsigned int NeedsSaveOrLink8;
    unsigned int *__pad_42;
    unsigned int u32_288;
    unsigned int vtable21;
    unsigned int vtable22;
    unsigned int vtable23;
    unsigned int vtable24;
    unsigned int owner;
    unsigned int q02C;
    unsigned int queuedObjects;
    unsigned int Debug;
    unsigned int balance;
    void* RemoveItemAt;  // 0x0 (no offset truth)
// --- flat members (END) ---
    AbstractClass * * Stat(int * a2);
    char GetFlag();
    char RemoveOneFromQueue(char a2);
    int CountType(IUnknown * aP1);
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
    static double AbandonProduction(...);  // C2597 interim stub
    int ClearObjects();  // 0x635120
    wchar_t * ResetProductionTimers();  // 0x6b0c80
    unsigned int * CompleteItem();  // 0x71abc0
    int * RemoveFromArrays(char a2);  // 0x63d9c0
    void * CopyTo(void ** Block, char a2);
};

} // namespace gamemd
