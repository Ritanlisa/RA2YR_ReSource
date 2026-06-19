#pragma once

#include <cstdint>

namespace gamemd {

// IDA: Checksummer 0x4A1D30+
// CRC32-based checksum accumulator used by AbstractClass::calculateChecksum
class Checksummer
{
public:
    // 0x4A1D30 Add_WORD (uint16)
    void Add_WORD(uint16_t);
    // 0x4A1D70 Add_float
    void Add_float(float);
    // 0x4A1D90 Add_double
    void Add_double(double);
    // 0x4A1DE0 Add_Buffer
    int Add_Buffer(const uint8_t* buf, int len);
    // 0x5F9E80 HashString
    static int HashString(const char* str);

    uint32_t  crcValue;     // +0x00 (this+0)
    uint32_t  bytePos;      // +0x04 (this+1)
    uint32_t  state;        // +0x08 (this+2)
    uint8_t   buffer[4];    // +0x08 (same as state, partial input)

protected:
    Checksummer() noexcept = default;
};

} // namespace gamemd
