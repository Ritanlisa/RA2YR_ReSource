// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct WebBrowser {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    unsigned int u32_4;  // 0x4
    void* q008;  // 0x8
    unsigned char q00C;  // 0xC
    void* q010;  // 0x10
// --- flat members (END) ---
    int LoadURLFromRegistry(const char * a2);  // 0x773600
    int ShowDialog();  // 0x773E90
    int GoForward();  // 0x7740A0
    bool OpenURL(void *a1_1);  // 0x551630
    int QueryInterface();  // 0x773A40
    int AddRef(void *a1_1);  // 0x773AA0
    int Release(void *a1_1);  // 0x773AB0
    int Write();  // 0x773B10
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
};
} // namespace gamemd
