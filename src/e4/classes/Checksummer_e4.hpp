// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

namespace gamemd {

struct Checksummer {
    int Add_Buffer(uint8_t * state, int a3);
    static int Add_Buffer(void *aP0, unsigned char *aP1, int aP2);  // 0x4A1DE0 G42.35 static-form sync (ui/supplied site 0x4A1DCC)
    int Add_double(int a2, int a3);
    int Add_float(int a2);
    static int Add_WORD(Checksummer * aP1, __int16 a2);  // G57w10-S raw 0x004A1D30 (was C2597 interim stub)
    unsigned int crcValue;  // 0x0
    unsigned int state;  // 0x8
    unsigned int bytePos;  // 0x4
    unsigned char buffer;  // 0x12
};

} // namespace gamemd
