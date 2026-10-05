// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
class Bootstrap;  // G42.36 fwd supply
struct MixHeaderData;  // fix_fwd_type_supply

struct MixFileClass {
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
    static double CacheNode_Dtor(...);  // C2597 interim stub
    unsigned int * FromFile(char *aP1, int a3);  // was C2597 interim stub, := truth 0x0x5b3c20
    static double GetSubFile(...);  // C2597 interim stub
    static double LoadSubFile(...);  // C2597 interim stub
    if ( ! Bootstrap());
};

} // namespace gamemd
