// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

namespace gamemd {

struct Checksummer {
    int Add_Buffer(uint8_t * state, int a3);
    int Add_double(int a2, int a3);
    int Add_float(int a2);
    static int Add_WORD(...);  // 0x4a1d30
    unsigned int crcValue;  // 0x0
    unsigned int state;  // 0x8
    unsigned int bytePos;  // 0x4
    unsigned char buffer;  // 0x12
};

} // namespace gamemd
