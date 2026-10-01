// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TechnoClass;  // fix_fwd_type_supply
struct HouseClass;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct ScenarioClass;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply

struct CaptureManagerClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    void* uniqueId;  // 0x10
    unsigned int q011;  // 0x11
    bool IsInitialized;  // 0x12
    bool IsAllocated;  // 0x13
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    unsigned int q01A;  // 0x1A
    int referenceCount;  // 0x1C
    bool q01D;  // 0x1D
    void * NeedsSaveOrLink;  // 0x20
    unsigned int controlNodes;  // 0x24
    unsigned int controlNodeCount;  // 0x28
    bool q02B;  // 0x2B
    unsigned int controlNodeCapacity;  // 0x2C
    TechnoClass* owner;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    HouseClass* originalOwner;  // 0x34
    bool CaptureManagerClass_field_30;  // 0x38
    bool CaptureManagerClass_field_31;  // 0x39
    unsigned char pad_32;  // 0x3A
    unsigned int q03B;  // 0x3B
    void* q03C;  // 0x3C
    unsigned int q03D;  // 0x3D
    bool CaptureManagerClass_field_40;  // 0x40
    bool CaptureManagerClass_field_41;  // 0x41
    unsigned char pad_42;  // 0x42
    unsigned int overloadLimit;  // 0x44
    unsigned int overloadCount;  // 0x48
    bool q04A;  // 0x4A
    unsigned int linkCount;  // 0x4C
    unsigned char q04F;  // 0x4F
    char CaptureManagerClass_field_2C[4];  // 0x50
    unsigned int *__pad_3C;
// --- flat members (END) ---
    void DecideUnitFate(IUnknown * aP1, void *a2);
    void FreeUnit(IUnknown * aP0, int _28, IUnknown * a2, IUnknown * aP1, int _34, IUnknown ** a5);
    CaptureManagerClass(void * aP1, int a3, char a4);
    CaptureManagerClass * ddtor(char a2);
    DynamicVector * QueryInterface(char a2);
    ScenarioClass * * HandleOverload();
    TechnoClass * * LoadFromStream(int a1, int * a2);
    VectorClass_flat * Constructor_VectorClass_ControlNode___(char a2);
    char AddMember(TechnoClass * aP1, void *a2, void *a3);
    char AddRef(int a2);
    char Release(int a2, unsigned int * a3);
    char SetCapacity(int a2, unsigned int * a3);
    bool CanCapture(unsigned int * a2, void *a2_2);
    int CannotControlAnyMore();
    int Capture(unsigned int * a2);
    int DrawLinks(int a1, ...);
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetObjectSize();
    int GetOriginalOwner(int a2);
    int GetTypeIdentifier();
    int IndexOf(unsigned int * a2);
    int IsOverloading(bool * a2);
    int NeedsToDrawLinks();
    int PowerDrainUpdate(int a2);
    int SaveToINI(TechnoTypeClass * aP0, int * a1, int aP2);
    unsigned int * Constructor_473140(int a2, int a3);
    unsigned int LoadTypeData(int a2);
    unsigned int PointerToIndex(int a2);
    void Destroy(void *a1);
    void* CaptureUnit(int a2);
};

} // namespace gamemd
