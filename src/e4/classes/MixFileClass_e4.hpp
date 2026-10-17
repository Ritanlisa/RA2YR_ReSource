// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
class Bootstrap;  // G42.36 fwd supply
struct MixHeaderData;  // fix_fwd_type_supply

struct MixFileClass {
    void* vtable1;  // 0x0
    void* Previous;  // 0x4
    bool Blowfish;  // 0x8
    bool Encryption;  // 0x9
    unsigned char __pad_00A;  // 0xA
    char __pad_B[1];  // 0xB
    int CountFiles;  // 0xC
    int FileSize;  // 0x10
    int FileStartOffset;  // 0x14
    MixHeaderData* Headers;  // 0x18
    void* __pad_01C;  // 0x1C
    int q020;  // 0x20
    int MixFileClass_field_24;  // 0x24
    unsigned char* MemoryData;  // 0x28
    int MemoryDataSize;  // 0x2C
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int GetPixelData(void *aP1, int a2, unsigned int a3);
    static void CleanupCache();
    void DestroyCache();
    static void * CacheNode_Dtor(MixFileClass * aP1, char a2);
    unsigned int * FromFile(char *a1, int a2);  // was C2597 interim stub, := truth 0x0x5b3c20
    static int GetSubFile(MixFileClass * aP1, unsigned int a2);
    static char ** LoadSubFile(MixFileClass * aP1);
    void sub_5B3F50();  // 0x5B3F50
};

} // namespace gamemd
