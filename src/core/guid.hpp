#pragma once

#include <cstdint>
#include <cstring>

namespace gamemd
{

// COM GUID structure (16 bytes)
// IAID: IID compares two GUIDs for equality (0x53EE70)
// Used extensively in network code for game/player identification
class GUID
{
public:
    uint32_t Data1;  // +0x00
    uint16_t Data2;  // +0x04
    uint16_t Data3;  // +0x06
    uint8_t  Data4[8]; // +0x08

    // 0x53EE70 - Compare two GUIDs
    // Takes a pointer to another GUID, returns true if equal
    // Supports two comparison modes controlled by dword_828140
    static bool __fastcall Compare(const GUID& a, const GUID& b) noexcept;
};

} // namespace gamemd
