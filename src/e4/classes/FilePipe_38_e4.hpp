// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct FilePipe_38 {
    void* vfptr;  // minimal E2 declaration
    char Release(int a2, char * a3);  // 0x478340
    int Seek(int a2, int a3);  // 0x477960
    char AddRef(int a2);  // 0x4782E0
    void ddtor();  // 0x478440
    int Read(unsigned char * a2);  // 0x478470
    unsigned int Write(int a2);  // 0x4784C0
    VectorClass * QueryInterface(char a2);  // 0x4786D0
};
} // namespace gamemd
