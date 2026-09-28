// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct LoadOptions {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    unsigned int q00C;  // 0xC
    void* IsAllocated;  // 0xD
    unsigned int max_entries;  // 0x10
    bool IsInitialized;  // 0x12
    unsigned int q014;  // 0x14
    FileEntryClass** entries;  // 0x18
    unsigned int count;  // 0x1C
    unsigned char is_active;  // 0x20
    unsigned char owns_memory;  // 0x21
    unsigned int q024;  // 0x24
    int q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned int u32_2D;  // 0x2D
    unsigned char pad_2E;  // 0x2E
    unsigned int capacity;  // 0x30
    unsigned int grow_step;  // 0x34
// --- flat members (END) ---
    DynamicVector * vt00(char a2);
    LoadOptions * QueryInterface(char a2);
    VectorClass_flat * Constructor_VectorClass_FileEntryClass___(char a2);
    bool ddtor(LPCSTR lpFileName);
    char * GetData();
    char AddRef(LPCCH lpMultiByteStr);
    char Read(wchar_t * Destination, int a2);
    char Release(LPCCH lpMultiByteStr, wchar_t * Source);
    char vt01(int a2);
    char vt02(int a2, unsigned int * a3);
    int vt04(unsigned int * a2);
    int vt06(int a2);
    unsigned int vt05(int a2);
    wchar_t * Close();
    wchar_t * Open();
    wchar_t * Seek();
    wchar_t * Write();
    char * GetDataPtr(void);
    gamemd::void** GetEntries(void);
    void SetExtension(const char *);
    void SetMode(uint32_t);
    static double Cleanup(...);  // C2597 interim stub
    static double Run(...);  // C2597 interim stub
};

} // namespace gamemd
