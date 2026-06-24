#pragma once

#include <cstdint>

namespace gamemd {

// IDA: Checksummer 0x4A1D30+
// CRC32-based checksum accumulator used by AbstractClass::calculateChecksum
class Checksummer
{
public:
    void Add_WORD(uint16_t);  // 0x4A1D30
    void Add_float(float);  // 0x4A1D70
    void Add_double(double);  // 0x4A1D90
    int Add_Buffer(const uint8_t* buf, int len);  // 0x4A1DE0
    static int HashString(const char* str);  // 0x5F9E80

    uint32_t  crcValue;     // +0x00 (this+0)
    uint32_t  bytePos;      // +0x04 (this+1)
    uint32_t  state;        // +0x08 (this+2)
    uint8_t   buffer[4];    // +0x08 (same as state, partial input)

protected:
    // design: default constructor (compiler-generated), no callgraph reference
    Checksummer() noexcept = default;
};

} // namespace gamemd
