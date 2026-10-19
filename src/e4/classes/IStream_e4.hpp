// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct IStream {
    char __pad_0[4];  // 0x0
    void* IStream_field_00;  // 0x4
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int Read(void * pstm, void * cb, void *a3 = 0);
};


// supplied (R_fix, C2039 IStreamVtbl x18): SaveGame_e4.cpp lpVtbl 载体
struct IStreamVtbl {
    char QueryInterface[4];  // 0x0
    char AddRef[4];  // 0x4
    char Release[4];  // 0x8
    char Read[4];  // 0xC
    char __pad_10[4];  // 0x10
    char Seek[4];  // 0x14
    char SetSize[4];  // 0x18
    char CopyTo[4];  // 0x1C
    char Commit[4];  // 0x20
    char Revert[4];  // 0x24
    char LockRegion[4];  // 0x28
    char UnlockRegion[4];  // 0x2C
    char Stat[4];  // 0x30
    char Clone[4];  // 0x34
    int Write(void *aP0, void *aP1, int aP2, int aP3);  // COM IStream::Write 形态
};
} // namespace gamemd
