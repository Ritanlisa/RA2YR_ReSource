// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct FileEntryClass;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply

#ifndef GAMEMD_CORE_OWNS_LOADOPTIONS  // G42.4: core owns in mixed TUs
struct LoadOptions {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    unsigned int q00C;  // 0xC
    void* IsAllocated;  // 0xD
    bool IsInitialized;  // 0x12
    unsigned int q014;  // 0x14
    unsigned int count;  // 0x1C
    unsigned int q024;  // 0x24
    unsigned char q02C;  // 0x2C
    unsigned int GetFlag252;
    unsigned int GetFlag98;
    unsigned int GetFlag99;
    unsigned int *__pad_0;
    unsigned int __pad_4;
    unsigned int m_0;
    unsigned int *m_1;
    unsigned int m_10;
    unsigned int m_8;
    unsigned int m_C;
    unsigned int q028;
    unsigned int u32_2D;
// --- flat members (END) ---
    DynamicVector * vt00(char a2, int a1);
    LoadOptions * QueryInterface(char a2, int a3, int a1);
    VectorClass_flat * Constructor_VectorClass_FileEntryClass___(char a2, int a1);
    bool ddtor(LPCSTR lpFileName);
    char * GetData(void *a1);
    char AddRef(LPCCH lpMultiByteStr);
    char Read(wchar_t * Destination, int a2);
    char Release(LPCCH lpMultiByteStr, wchar_t * Source);
    char vt01(int a2);
    char vt02(int a2, unsigned int * a3);
    int vt04(unsigned int * a2);
    int vt06(int a2);
    unsigned int vt05(int a2);
    wchar_t * Close(void *a1, void *a2);
    wchar_t * Open(void *a1, void *a2, void *a3);
    wchar_t * Seek(void *a1, void *a2, void *a3);
    wchar_t * Write();
    char * GetDataPtr(void);
    void** GetEntries(void);
    void SetExtension(const char *);
    void SetMode(uint32_t);
     int Cleanup();  // G57w10-S raw 0x00558790 (was C2597 interim stub)
    static int Run(LoadOptions * aP1);  // G57w10-S raw 0x005587F0 (was C2597 interim stub)
    // G42.35a: m_10[64] pad removed -- collides with generator-owned
    // `unsigned int m_10;` in the flat block (C2040); no user anywhere.
    char Check();  // 0x559c20
};
#endif  // GAMEMD_CORE_OWNS_LOADOPTIONS

} // namespace gamemd
