// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
class Bootstrap;  // G42.36 fwd supply
struct MixHeaderData;  // fix_fwd_type_supply

struct MixFileClass {
    static int GetPixelData(void *aP1, int a2, unsigned int a3);  // 0x69E860 raw: int GetPixelData(MixFileClass*, int, unsigned int)

// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* Previous;  // 0x4
    bool Blowfish;  // 0x8
    int CountFiles;  // 0xC
    unsigned int u32_D;  // 0xD
    int FileSize;  // 0x10
    unsigned int q01C;  // 0x1C
    int q020;  // 0x20
    int MixFileClass_field_24;  // 0x24
// --- flat members (END) ---
    void CleanupCache();
    void DestroyCache();
    static void * CacheNode_Dtor(MixFileClass * aP1, char a2);  // G57w10-S raw 0x0069E930 (was C2597 interim stub)
    unsigned int * FromFile(char *aP1, int a3);  // was C2597 interim stub, := truth 0x0x5b3c20
    static int GetSubFile(MixFileClass * aP1, unsigned int a2);  // G57w10-S raw 0x0069E740 (was C2597 interim stub)
    static char ** LoadSubFile(MixFileClass * aP1);  // G57w10-S raw 0x0069E580 (was C2597 interim stub)
// G57c4 stray-statement sweep: dropped 'if ( ! Bootstrap());' (pseudocode line leaked into class body)
};

} // namespace gamemd
