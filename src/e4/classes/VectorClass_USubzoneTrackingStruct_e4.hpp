// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct VectorClass_USubzoneTrackingStruct {
    void* vfptr;  // minimal E2 declaration
    int Clear(int a2, int a3);  // 0x588E10
    char AddRef(int a2);  // 0x5896F0
    char Release(int a2, int * a3);  // 0x589740
    void ddtor();  // 0x589960
    int GetSize(int a2);  // 0x5899E0
    unsigned int GetCapacity(int a2);  // 0x589A30
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x58A470
    unsigned int * SetCapacity(unsigned int * a2);  // 0x58AD10
};
} // namespace gamemd
