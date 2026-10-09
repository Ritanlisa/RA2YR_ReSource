// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CreateGameDialogControl;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct WonlineStringDialogControl_12 {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    int q008;  // 0x8
    bool q00C;  // 0xC
    bool IsAllocated;  // 0xD
    int q010;  // 0x10
    bool IsInitialized;  // 0x12
// --- flat members (END) ---
    void * Constructor_WonlineStringDialogControl(DialogControl_OwnerDraw * Block, char a2);  // 0x7AC630
    void ClearBuffer(void *a1_1);  // 0x7AC970
    int Seek(int a2, void *a2_2, void *a3_1);  // 0x7AC9C0
    char AddRef(int a2);  // 0x7AD090
    char Release(int a2, unsigned int * a3);  // 0x7AD0D0
    void ddtor();  // 0x7AD180
    int Read(unsigned int * a2, void *a2_2);  // 0x7AD1B0
    char SetCapacity(int a2, unsigned int * a3);  // 0x7AD210
    int FindItem(unsigned int * a2);  // 0x7AD2C0
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);  // 0x7AD370
    DynamicVector * Constructor_VectorClass_tConnInfoStruct___(unsigned int * Block, char a2);  // 0x7AD3C0
    unsigned int PointerToIndex(int a2);  // 0x7AC9A0
    unsigned int Write(int a2);  // 0x7AD1F0
    unsigned char m_1;  // 0x1 (offset-truth)
    unsigned int m_10;  // 0x10 (offset-truth)
    unsigned int m_8;  // 0x8 (offset-truth)
    unsigned int m_C;  // 0xC (offset-truth)
};
} // namespace gamemd
