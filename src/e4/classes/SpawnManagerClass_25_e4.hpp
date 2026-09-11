// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct SpawnManagerClass_25 {
    void* vfptr;  // minimal E2 declaration
    void ddtor();  // 0x6B8160
    unsigned int LoadState(int a2);  // 0x6B8190
    int SaveState(int a2);  // 0x6B81B0
    char AddRef(int a2);  // 0x6B8220
    char Release(int a2, unsigned int * a3);  // 0x6B8400
    int Spawn(unsigned int * a2);  // 0x6B84B0
    DynamicVector * QueryInterface(char a2);  // 0x6B8790
};
} // namespace gamemd
