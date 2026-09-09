// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct VectorClass_ptr_AirstrikeClass {
    void* vfptr;  // minimal E2 declaration
    void Destroy();  // 0x41DDE0
    unsigned int GetItemIndex(int a2);  // 0x41DE10
    int Get(int a2);  // 0x41DE30
    char Add(int a2);  // 0x41DE40
    char Release(int a2, unsigned int * a3);  // 0x41DE80
    void Remove();  // 0x41DF30
    int GetSize(unsigned int * a2);  // 0x41DF60
    unsigned int GetCapacity(int a2);  // 0x41DFA0
    char SetCapacity(int a2, unsigned int * a3);  // 0x41DFC0
    int FindItemIndex(unsigned int * a2);  // 0x41E070
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x41E0A0
};
} // namespace gamemd
