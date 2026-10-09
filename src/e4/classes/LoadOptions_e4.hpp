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
    unsigned int GetFlag252_ph;  // w18j3: filler renamed (no offset truth; canon LoadOptions::GetFlag252 is a method)
    static unsigned int GetFlag252(...);  // w18j3 C2597 static-call supply (w16g4 convention)
    static int GetFlag99(LoadOptions *pThis);  // G57w19k2 raw thiscall static-form supply (member GetFlag99 -> GetFlag99_slot)
    static int GetFlag98(LoadOptions *pThis);  // G57w19k2 raw thiscall static-form supply (member GetFlag98 -> GetFlag98_slot)
    DynamicVector * vt00(char a2, int a1);
    LoadOptions * QueryInterface(char a2, int a3, int a1);
    VectorClass_flat * Constructor_VectorClass_FileEntryClass___(char a2, int a1);
    static void * Constructor(void *aP1);  // 0x558740 raw: _DWORD *__thiscall LoadOptions::LoadOptions(LoadOptions*) -- site form (W20L4 T2; def=gap debt)
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
    char Check();  // 0x559c20
};
#endif  // GAMEMD_CORE_OWNS_LOADOPTIONS

} // namespace gamemd
