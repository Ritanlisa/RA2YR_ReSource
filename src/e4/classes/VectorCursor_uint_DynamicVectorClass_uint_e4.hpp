// GENERATED flat e4 class -- G42.33 b3 core/supplied carrier (体表类名无 ____13 后缀;
// ____13 变体为其 4 个 e4 TU 用户保留, 两结构独立)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorCursor_uint_DynamicVectorClass_uint {
    unsigned int u32_4;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned int u32_C;  // 0xC
    unsigned int q018;  // 0x18
    unsigned int q024;  // 0x24
    unsigned int q054;  // 0x54
    unsigned int q084;  // 0x84
    unsigned int q774;  // 0x774
    unsigned int q1908;  // 0x1908
    unsigned int q6408;  // 0x6408
    unsigned int *__pad_0;  // G42.33 b3 flat-carrier vocab
    unsigned int m_1[4];  // G42.33 b3 flat-carrier vocab
    void Remove();  // 0x4F42D0
    void Count(int a2, int a3);  // 0x4F4BB0
    void Add(void *a1_1, void *a2_1, void *a3_1);  // 0x4F42A0
    void Get(void *a1_1, void *a2_1);  // 0x4F42E0
    unsigned int * ddtor();  // 0x4F4000 G42.33 b3 supplied-body sync
    int AddRef();  // G42.33 b3 supplied-body sync
    unsigned int * Release();  // G42.33 b3 supplied-body sync

    unsigned int q008;  // G42.39 data supply (counter)
};
} // namespace gamemd
