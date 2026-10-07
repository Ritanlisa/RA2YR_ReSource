#pragma once

#include <cstdint>
#include <cstring>
#include <string>
#include <type_traits>
#include <functional>

namespace gamemd
{

// ============================================================================
// HashTable — generic hash table (chained, ~27 methods)
// 0x5256F0 (dtor), 0x52B390 (BinarySearch), 0x52B4F0 (BinarySearchAlt)
// Used by: INIClass, RadarClass, WDT loading, ScenarioClass
// ============================================================================
// G42.32o: template HashTable removed -- zero instantiations; collided (C2990)
// with the real binary non-template gamemd::HashTable (utility_ext.hpp).
// ============================================================================
// Hash — hashing utility (3 methods)
// ============================================================================
class Hash
{
public:
    Hash(); // no binary equivalent (5DAC00h belongs to WideString::Hash)

    // IDA 0x69D8C0
    static uint32_t ComputeHashSHA1(const void* data, uint32_t size);  // 0x476D80

    // IDA 0x52B720
    static int InsertOrdered(void* table, const void* entry, int a2); // 0x4F4410

    // IDA 0x69D8C0 area
    void Reset();

    uint32_t    hash_state_0;       // 0x00
    uint32_t    hash_state_4;       // 0x04
};

// ============================================================================
// SHA1 — SHA-1 hash computation (6 methods)
// ============================================================================
// CSP: SHA1 matched via T1
class SHA1
{
public:
    // unmatched: no callgraph reference and no git history record
    SHA1();

    // IDA 0x69D8C0
    // wrapper: delegates to SHA1::ProcessBlock at 0x69D8C0
    void Init();

    // IDA 0x69DA00
    int Process(int a2, int a3);  // 0x69D960

    // IDA 0x69DC00
    int Compute(char *a2, int a1); // 0x69D9E0

    // IDA 0x69D8C0 area
    int Transform(int *a1, unsigned int *a2); // 0x69DB30

    // IDA 0x69D8C0 area
    // design: no binary equivalent found in IDA
    void PadMessage();

    // IDA 0x69D8C0 area
    // design: static function, no direct binary match in IDA
    static void DigestToHex(const uint8_t digest[20], char hex[41]);

    uint32_t    state[5];       // 0x00
    uint64_t    count;          // 0x14
    uint8_t     buffer[64];     // 0x1C
    uint8_t     buffer_index;   // 0x5C
    uint8_t     _pad_5D[3];     // 0x5D
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int ComputeThunk(int a1);  // 0x69e9e0 -- SHA1::ComputeThunk
    // === SYMBOL-ANCHOR (END) ===
public:  // g57c5 W4b supply slot
    unsigned int SHA1_field_0x04;  // 0x4 g57c5 W4b (self-desc vocab, ml slot witness)
};

// ============================================================================
// CRC32 — CRC-32 checksum (1 method)
// ============================================================================
// CSP: CRC32 matched via T1
class CRC32
{
public:
    // unmatched: no callgraph reference and no git history record
    CRC32();

    // IDA 0x69E000
    static uint32_t Compute(unsigned __int8 *a1, int a2, int a3); // 0x4A1FB0

    uint32_t    m_CRC;          // 0x00
    uint32_t    m_Count;        // 0x04
};

// G42.32o: hash_table.inl removed with the template (template-only members)

} // namespace gamemd
