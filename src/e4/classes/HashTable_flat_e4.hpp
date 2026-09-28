// GENERATED template-collision flat carrier (mechanical).
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct HashTable_flat {
// --- flat members (BEGIN) ---
    unsigned int u32_4;  // 0x4
    unsigned int u32_C;  // 0xC
    unsigned int u32_18;  // 0x18
// --- flat members (END) ---
AbstractClass * * FindWOLHashTableEntry(const char ** a2, void * a3);
AbstractClass * * Grow();
AbstractClass * * Grow2();
AbstractClass * * Insert(ObjectClass * aP1, void * a2);
AbstractClass * * Lookup(ObjectClass * aP1, TechnoTypeClass * aP2);
AbstractClass * * RebuildEx();
AbstractClass * * RemoveAndResize(unsigned int * a2, unsigned char * a3);
AbstractClass * * RemoveHashTableEntry(ObjectClass * aP1, void * a2);
CampaignClass * * Clear();
CampaignClass * * RemoveEntry(const char * a2);
ObjectClass * * Remove(int a2);
int ComputeHash(int a2);
int Find(const char * a1, ConvertClass * aP2);
int FindChunk(char * Str1, void * a2, CCINIClass * aP3);
int FindString(char * Str1, IUnknown * aP2);
int Get(IUnknown * aP1, IUnknown * result);
int LookupString(const char ** a2, unsigned int * a3);
unsigned int CleanupAndResize();
unsigned int Rebuild();
void Rebuild2();
void Shrink();
void Shrink2();
};

} // namespace gamemd
