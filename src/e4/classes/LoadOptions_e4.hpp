// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct FileEntryClass;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply

#ifndef GAMEMD_CORE_OWNS_LOADOPTIONS  // G42.4: core owns in mixed TUs
struct LoadOptions {
    void * extension;  // 0x0
    void* __pad_004;  // 0x4
    void* Capacity;  // 0x8
    unsigned int m_C;  // 0xC
    unsigned int max_entries;  // 0x10
    int field_14;  // 0x14
    FileEntryClass** entries;  // 0x18
    unsigned int count;  // 0x1C
    unsigned char is_active;  // 0x20
    unsigned char owns_memory;  // 0x21
    unsigned char __pad_022;  // 0x22
    char __pad_23[11];  // 0x23
    unsigned short pad_2E;  // 0x2E
    unsigned int capacity;  // 0x30
    unsigned int grow_step;  // 0x34
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static unsigned int GetFlag252(LoadOptions *p_this);  // x4:ida@0x6812d0
    static int GetFlag99(LoadOptions *pThis);
    static int GetFlag98(LoadOptions *pThis);
    DynamicVector * vt00(char a2, int a1);
    LoadOptions * QueryInterface(char a2, int a3, int a1);
    VectorClass_flat * Constructor_VectorClass_FileEntryClass___(char a2, int a1);
    static void * Constructor(void *aP1);
    bool ddtor(LPCSTR lpFileName);
    char * GetData(void *a1);
    char AddRef(LPCCH lpMultiByteStr);
    char Read(wchar_t * Destination, int a2, void *a3 = 0);
    char Release(LPCCH lpMultiByteStr, wchar_t * Source);
    char vt01(int a2);
    char vt02(int a2, unsigned int * a3);
    int vt04(unsigned int * a2);
    int vt06(int a2);
    unsigned int vt05(int a2);
    wchar_t * Close(void *a1, void *a2);
    wchar_t * Open(void *a1, void *a2, void *a3);
    wchar_t * Seek(void *a1, void *a2, void *a3);
    wchar_t * Write(void *a1 = 0);
    char * GetDataPtr(void);
    void** GetEntries(void);
    void SetExtension(const char *);
    void SetMode(uint32_t);
     int Cleanup(void *a1 = 0, void *a2 = 0);
    static int Run(LoadOptions * aP1);
    char Check(void *a1 = 0, void *a2 = 0, void *a3 = 0);  // 0x559c20
};
#endif  // GAMEMD_CORE_OWNS_LOADOPTIONS

} // namespace gamemd
