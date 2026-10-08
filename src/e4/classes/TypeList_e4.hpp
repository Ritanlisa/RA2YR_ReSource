// G57w10 D-类体 supply: bare TypeList carrier (raw fn_47/51/52/5A/67/71; canon TypeList size=28).
// Dedicated header: NOT in _tree_full (C2990 vs core/vector.hpp template<TypeList> in TUs
// co-including both, e.g. e4/classes/supplied_bodies.cpp). e4-universe consumers only.
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
// TypeList  size=28  (bare-template collapse name; e4 corpus static-form qualified calls)
struct TypeList {
    void* DynamicVectorClass;  // 0x0 vfptr (raw member name; TiberiumClass_e4.cpp v24 site 0x721c21)
    unsigned int Items;              // 0x4  (til VectorClass.Items)
    unsigned int Capacity;           // 0x8  (til VectorClass.Capacity)
    unsigned char IsInitialized;     // 0xC  (til VectorClass.IsInitialized char[1])
    unsigned char IsAllocated;       // 0xD  (til VectorClass.IsAllocated char[1])
    unsigned char __tail_E[2];       // 0xE  (til VectorClass tail char[2]; 布局守卫: 4+4+1+1+2+4+4=20 取代 q004[20])
    int Count;                       // 0x10 (til DynamicVectorClass.Count)
    int CapacityIncrement;           // 0x14 (til DynamicVectorClass.CapacityIncrement)
    int unknown_18;            // 0x18 (canon char[4] int; site 0x721c10)
    static unsigned int * Copy(TypeList *aP1, void *a2);  // 0x478720 raw: _DWORD* Copy(TypeList*, _DWORD*)
    static unsigned int * TechnoTypeConstructor(TypeList *aP1, int a2, int a3);  // 0x478790
    static unsigned int * CopyConstructor(TypeList *aP1, void *a2);  // 0x513740
    static unsigned int * AnimTypeCopy(TypeList *aP1, void *a2);  // 0x5255F0
    static unsigned int * BuildingTypeConstructor(TypeList *aP1);  // 0x5AC400
    static unsigned int * BuildingTypeCopy(TypeList *aP1, void *a2);  // 0x5AD660
    static void InfantryCleanup(TypeList *aP1);  // 0x67A030
    static int * CopyFull(TypeList *aP1, int *a2);  // 0x67A090
    static int * CopyAircraft(TypeList *aP1, int *a2);  // 0x67A110
    static int * CopyInfantry(TypeList *aP1, int *a2);  // 0x67A290
    static unsigned int * VoxelAnimConstructor(TypeList *aP1);  // 0x67A390
    static unsigned int * Construct(TypeList *aP1);  // 0x67A4F0
    static unsigned int * ConstructSmudge(TypeList *aP1);  // 0x67A600
    static unsigned int * InfantryConstructor(TypeList *aP1);  // 0x67A820
    static unsigned int * CopyVoxelAnim(TypeList *aP1, void *a2);  // 0x67C1F0
    static unsigned int * ParticleConstructor(TypeList *aP1, int a2, int a3);  // 0x717C70
    static char PushBack(TypeList *aP1, void *a2);  // 0x717CD0
};
} // namespace gamemd
