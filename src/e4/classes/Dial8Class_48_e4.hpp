// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Dial8Class_48 {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    int q008;  // 0x8
    bool q00C;  // 0xC
    bool IsAllocated;  // 0xD
    int q010;  // 0x10
    bool IsInitialized;  // 0x12
    unsigned int __pad_0;
    unsigned int m_1;
    unsigned int m_10;
    unsigned int m_8;
    unsigned int m_C;
// --- flat members (END) ---
    void ClearBuffer();  // 0x4A7D20
    int Seek(int a2);  // 0x4A7D70
    char AddRef(int a2);  // 0x4A7D80
    char Release(int a2, unsigned int * a3);  // 0x4A7DC0
    void ddtor();  // 0x4A7E70
    int Read(unsigned int * a2);  // 0x4A7EA0
    char SetCapacity(int a2, unsigned int * a3);  // 0x4A7F00
    int FindItem(unsigned int * a2);  // 0x4A7FB0
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);  // 0x4A8030
    DynamicVector * Constructor_VectorClass_DiskLaserClass___(char a2);  // 0x4A8080
    unsigned int PointerToIndex(int a2);  // 0x4A7D50
    unsigned int Write(int a2);  // 0x4A7EE0
};
} // namespace gamemd
