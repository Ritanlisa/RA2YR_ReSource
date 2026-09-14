// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct DynamicVectorClass_PAD {
    void* vfptr;  // minimal E2 declaration
    void ddtor();  // 0x49E950
    int Clear(int a2);  // 0x49E9A0
    void Clear_49E9B0();  // 0x49E9B0
    char AddRef(int a2);  // 0x49EA30
    char Remove(int a2, unsigned int * a3);  // 0x49EA70
    int GetSize(unsigned int * a2);  // 0x49EB20
    char SetCapacity(int a2, unsigned int * a3);  // 0x49ED30
    int FindItemIndex(unsigned int * a2);  // 0x49EDE0
    DynamicVector * Add(char a2);  // 0x49EE10
    DynamicVector * Destructor(char a2);  // 0x49F040
    unsigned int Get(int a2);  // 0x49E980
    unsigned int GetCount(int a2);  // 0x49E9E0
};
} // namespace gamemd
