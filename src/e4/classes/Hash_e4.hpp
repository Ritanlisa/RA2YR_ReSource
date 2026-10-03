// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

namespace gamemd {

struct Hash {
    int __thiscall ComputeHashSHA1();
    int InsertOrdered(int a2);
    int Reset(void *a1 = 0, void *a2 = 0);
    int Reset();  // 0x5565F0 G42.33 b3 arity sync (全树 0-arg 调用)
    unsigned int m_Next;  // +4 G42.33 b3 flat-carrier vocab
    unsigned int m_Prev;  // +8 G42.33 b3 flat-carrier vocab
};

} // namespace gamemd
