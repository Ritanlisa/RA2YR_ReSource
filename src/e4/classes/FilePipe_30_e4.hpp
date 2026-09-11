// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct FilePipe_30 {
    void* vfptr;  // minimal E2 declaration
    void ddtor();  // 0x4778A0
    unsigned int Write(int a2);  // 0x4778D0
    TypeList * QueryInterface(char a2);  // 0x477A70
    char Release(int a2, unsigned int * a3);  // 0x478140
    int Read(unsigned int * a2);  // 0x4781F0
    void Clear();  // 0x4B9BE0
    unsigned int GetCount(int a2);  // 0x4B9C10
    void Clear_0();  // 0x4B9C40
    unsigned int GetCount_0(int a2);  // 0x4B9C70
    char SetCapacity(int a2, unsigned int * a3);  // 0x4B9E20
    int FindItemIndex(unsigned int * a2);  // 0x4B9ED0
    char SetCapacity_0(int a2, unsigned int * a3);  // 0x4BA080
    int FindItemIndex_0(unsigned int * a2);  // 0x4BA130
    DynamicVector * Destructor(char a2);  // 0x4BA160
    DynamicVector * Destructor_0(char a2);  // 0x4BA200
    DynamicVector * Destructor_1(char a2);  // 0x4BA2A0
};
} // namespace gamemd
