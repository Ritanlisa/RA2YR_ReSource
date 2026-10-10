// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct INIClass;  // fix_fwd_type_supply
struct ObjectTypeClass;  // fix_fwd_type_supply
struct AnimClass;  // fix_fwd_type_supply
struct OverlayTypeClass;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct TaskForceClass;  // fix_fwd_type_supply

struct ScriptTypeClass {
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
    char arrayIndex[4];  // 0x24
    bool isGlobal;  // 0x28
    char actionsCount[4];  // 0x2C
    char scriptActions[400];  // 0x30
    unsigned int alignmentPadding;  // 0x33
    unsigned int UINameLabel;  // 0x3D
    void * UIName;  // 0x60
    unsigned int Name;  // 0x64
    unsigned int tail_95;  // 0x95
// --- flat members (END) ---
    ScriptTypeClass * ddtor(char a2, int a1, int a3);
    TaskForceClass * ReadINI(char * a1, int a2, void *a3);
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetObjectSize();
    int GetTypeIdentifier();
    int LoadTypeData(AbstractTypeClass * aP0, int aP1);
    int SaveToINI(TechnoTypeClass * aP0, int * a1, int aP2);
    unsigned int *  Constructor(char * Source, void *a1 = 0, void *a2 = 0, void *a3 = 0);  // 0x6916b0
    static double AbstractClass(...);  // plateau: C2039/C3861 stub
    static double vfptr(...);  // plateau: C2039/C3861 stub
};

} // namespace gamemd
