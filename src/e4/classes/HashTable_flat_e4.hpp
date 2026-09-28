// GENERATED template-collision flat carrier (mechanical).
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct HashTable_flat {
// --- flat members (BEGIN) ---
    unsigned int u32_4;  // 0x4
    unsigned int u32_C;  // 0xC
    unsigned int u32_18;  // 0x18
    unsigned int HashTable_field_0x04;
    unsigned int HashTable_field_0x08;
    unsigned int HashTable_field_0x0C;
    unsigned int HashTable_field_0x14;
    unsigned int HashTable_field_0x18;
    unsigned int HashTable_field_0x20;
    unsigned int HashTable_field_0x30;
    unsigned int __pad_0;
    unsigned int q01C;
    unsigned int u32_234;
    unsigned int u32_238;
    unsigned int u32_244;
    unsigned int u32_250;
    unsigned int u32_25C;
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
