#pragma once

#include <cstdint>

namespace gamemd {

// sizeof ~0x310 (dtor 0x68C8D0 shows access at +772=0x304, +780=0x30C)
// color scheme / palette management class
struct ColorScheme
{
    // 0x68C8D0 Destructor
    void Destructor();

    // Large member layout - exact structure undetermined
    uint8_t     data[0x310];        // +0x000..+0x30F
};
} // namespace gamemd
