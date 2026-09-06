#pragma once

#include <cstdint>

namespace gamemd {

// IDA: Checksummer 0x4A1D30+
// CRC32-based checksum accumulator used by AbstractClass::calculateChecksum
class Checksummer {
public:
    void Add_WORD(uint16_t value);
    void Add_float(float value);
    void Add_double(double value);
    int Add_Buffer(const uint8_t* buf, int len);
    int HashString(const char* str);
};

} // namespace gamemd

