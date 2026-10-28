// G57w10 D-类体 supply: bare TypeList carrier (raw fn_47/51/52/5A/67/71; canon TypeList size=28).
// Dedicated header: NOT in _tree_full (C2990 vs core/vector.hpp template<TypeList> in TUs
// co-including both, e.g. e4/classes/supplied_bodies.cpp). e4-universe consumers only.
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
// TypeList  size=28  (bare-template collapse name; e4 corpus static-form qualified calls)
struct TypeList {
    void * DynamicVectorClass;  // 0x0
    void * Items;  // 0x4
    void * Capacity;  // 0x8
    void * IsInitialized;  // 0xC
    void * Count;  // 0x10
    int CapacityIncrement;  // 0x14
    int unknown_18;  // 0x18
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static unsigned int * Copy(TypeList *aP1, void *a2);
    static unsigned int *  TechnoTypeConstructor(int a2, int a3);  // 0x478790
    static unsigned int *  CopyConstructor(unsigned int * a2);  // 0x513740
    static unsigned int *  AnimTypeCopy(unsigned int * a2);  // 0x5255F0
    static unsigned int * BuildingTypeConstructor(TypeList *aP1);  // 0x5AC400
    unsigned int *  BuildingTypeCopy(unsigned int * a2);  // 0x5AD660
    static void InfantryCleanup(TypeList *aP1);  // 0x67A030
    static int *  CopyFull(int * a2);  // 0x67A090
    static int *  CopyAircraft(int * a2);  // 0x67A110
    static int *  CopyInfantry(int * a2);  // 0x67A290
    static unsigned int * VoxelAnimConstructor(TypeList *aP1);  // 0x67A390
    static unsigned int * Construct(TypeList *aP1);  // 0x67A4F0
    static unsigned int * ConstructSmudge(TypeList *aP1);  // 0x67A600
    static unsigned int * InfantryConstructor(TypeList *aP1);  // 0x67A820
    static unsigned int *  CopyVoxelAnim(unsigned int * a2);  // 0x67C1F0
    static unsigned int *  ParticleConstructor(int a2, int a3);  // 0x717C70
    static char  PushBack(unsigned int * a2);  // 0x717CD0
};
} // namespace gamemd
