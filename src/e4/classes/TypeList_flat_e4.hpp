// GENERATED template-collision flat carrier (mechanical).
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CCINIClass;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply

struct TypeList_flat {
// --- flat members (BEGIN) ---
    unsigned int u32_4;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned int u32_C;  // 0xC
    unsigned int u32_D;  // 0xD
    unsigned int u32_10;  // 0x10
    unsigned int u32_14;  // 0x14
    unsigned int u32_18;  // 0x18
    unsigned int u32_34;  // 0x34
// --- flat members (END) ---
    void* DynamicVectorClass;  // 0x0 (no offset truth)
    void* unknown_18;  // 0x0 (no offset truth)
CCINIClass * BuildingTypeConstructor();
CCINIClass * ConstructSmudge();
CCINIClass * VoxelAnimConstructor();
DynamicVector * Construct(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6);
TypeList_flat * QueryInterface(unsigned int * Block, char a2);
char AddRef(int a2);
char PushBack(VectorClass_flat * aP1);
char Release(int a2, unsigned int * a3);
int * CopyAircraft(VectorClass_flat * aP1);
int * CopyInfantry(CCINIClass * aP1);
int Clear(int a2);
int GetSize(unsigned int * a2);
unsigned int * AnimTypeCopy(VectorClass_flat * aP1);
unsigned int * BuildingTypeCopy(VectorClass_flat * aP1);
unsigned int * Copy(unsigned int * a2, void *a2_2);
unsigned int * CopyConstructor(VectorClass_flat * aP1);
unsigned int * CopyVoxelAnim(VectorClass_flat * aP1);
unsigned int * InfantryConstructor();
unsigned int * ParticleConstructor(int a2, int a3);
unsigned int * TechnoTypeConstructor(int a2, int a3);
unsigned int GetCapacity(int a2);
void InfantryCleanup();
void ddtor();
    int * CopyFull(VectorClass * aP1);
    unsigned char m_1;  // 0x1 (offset-truth)
    unsigned int m_10;  // 0x10 (offset-truth)
    unsigned int m_8;  // 0x8 (offset-truth)
    unsigned int m_C;  // 0xC (offset-truth)
};

} // namespace gamemd
