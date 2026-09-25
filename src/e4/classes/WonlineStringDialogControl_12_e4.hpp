// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct WonlineStringDialogControl_12 {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    int q008;  // 0x8
    bool q00C;  // 0xC
    bool IsAllocated;  // 0xD
    int q010;  // 0x10
    bool IsInitialized;  // 0x12
    int Count;  // 0x16
    bool q018;  // 0x18
    unsigned char q01C;  // 0x1C
    bool q024;  // 0x24
    unsigned char q028;  // 0x28
    int q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q04C;  // 0x4C
    unsigned char q050;  // 0x50
    bool q054;  // 0x54
    unsigned int q0042;
// --- flat members (END) ---
    CreateGameDialogControl * Constructor_WonlineStringDialogControl(char a2);  // 0x7AC630
    void ClearBuffer();  // 0x7AC970
    int Seek(int a2);  // 0x7AC9C0
    char AddRef(int a2);  // 0x7AD090
    char Release(int a2,  unsigned int * a3);    // 0x7AD0D0
    void ddtor();  // 0x7AD180
    int Read(unsigned int * a2);  // 0x7AD1B0
    char SetCapacity(int a2,  unsigned int * a3);    // 0x7AD210
    int FindItem(unsigned int * a2);  // 0x7AD2C0
    VectorClass_flat * QueryInterface(char a2);  // 0x7AD370
    DynamicVector * Constructor_VectorClass_tConnInfoStruct___(char a2);  // 0x7AD3C0
    unsigned int PointerToIndex(int a2);  // 0x7AC9A0
    unsigned int Write(int a2);  // 0x7AD1F0
};
} // namespace gamemd
