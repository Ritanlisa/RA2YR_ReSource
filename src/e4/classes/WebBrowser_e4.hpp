// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct WebBrowser {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
// --- flat members (END) ---
    int LoadURLFromRegistry(const char * a2);  // 0x773600
    int ShowDialog(void *a1 = 0);  // 0x773E90
    int GoForward();  // 0x7740A0
    bool OpenURL(void *a1_1);  // 0x551630
    int QueryInterface();  // 0x773A40
    int AddRef(void *a1_1);  // 0x773AA0
    int Release(void *a1_1);  // 0x773AB0
    int Write(void *a1 = 0);  // 0x773B10
    int Clone();  // 0x773BC0
    int Navigate();  // 0x773D20
    int GoBack();  // 0x773D40
    int Stat();  // 0x773BB0
    int StubReturnFalse();  // 0x773B40
    int SetSize();  // 0x773B50
    int CopyTo();  // 0x773B60
    int Commit();  // 0x773B70
    int Revert();  // 0x773B80
    int LockRegion();  // 0x773B90
    int UnlockRegion();  // 0x773BA0
    int COMStub_Return0();  // 0x773B00
    int WebBrowser___vt03();
    unsigned int *q000;  // 0x0 (offset-truth)
    unsigned int u32_40C;  // 0x40C (offset-truth)
    unsigned char u32_42;  // 0x42 (offset-truth)

    unsigned char q00C[4];  /* char[4] */  // X10 supply (member_lookup)
    unsigned int u32_8;  // X10 supply (member_lookup)
    int __pad_004;  // 0x4 [X30:type_map]
    void* WebBrowser_field_0x8;  // 0x8 [X30:type_map]
    int __pad_0;  // 0x0 [X30:type_map]
};
} // namespace gamemd
