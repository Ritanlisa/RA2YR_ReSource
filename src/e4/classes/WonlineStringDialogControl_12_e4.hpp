// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct WonlineStringDialogControl_12 {
    void* vfptr;  // minimal E2 declaration
    CreateGameDialogControl * Constructor_WonlineStringDialogControl(char a2);  // 0x7AC630
    void ClearBuffer();  // 0x7AC970
    unsigned int PointerToIndex(int a2);  // 0x7AC9A0
    int Seek(int a2);  // 0x7AC9C0
    char AddRef(int a2);  // 0x7AD090
    char Release(int a2, unsigned int * a3);  // 0x7AD0D0
    void ddtor();  // 0x7AD180
    int Read(unsigned int * a2);  // 0x7AD1B0
    unsigned int Write(int a2);  // 0x7AD1F0
    char SetCapacity(int a2, unsigned int * a3);  // 0x7AD210
    int FindItem(unsigned int * a2);  // 0x7AD2C0
    VectorClass * QueryInterface(char a2);  // 0x7AD370
    DynamicVector * Constructor_VectorClass_tConnInfoStruct___(char a2);  // 0x7AD3C0
};
} // namespace gamemd
