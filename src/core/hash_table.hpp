#pragma once

#include <cstdint>
#include <cstring>
#include <functional>

namespace gamemd
{

// ============================================================================
// HashTable — generic hash table (chained, 27 methods)
// IDA: 0x5256F0 (dtor), 0x52B390 (BinarySearch), 0x52B4F0 (BinarySearchAlt)
// Used by: INIClass, RadarClass, WDT loading, ScenarioClass
// ============================================================================
template <typename K, typename V>
class HashTable
{
public:
    struct Entry
    {
        K           key;        // 0x00
        V           value;      // 0x04
        Entry*      next;       // 0x08
        uint32_t    hash;       // 0x0C
    };

    HashTable() = default;

    // IDA 0x7ADCD0
    bool Insert(const K& key, const V& value);
    // IDA 0x7AE1F0
    V* Lookup(const K& key);
    // IDA 0x7ADCD0 area
    V* LookupString(const char* key);       // 0x7ADC60
    // IDA 0x625F60
    V* FindString(const char* key);
    // IDA 0x625FB0
    Entry* FindChunk(const K& key);
    // IDA 0x6BA140
    Entry* Find(const K& key);
    // IDA 0x624140
    Entry* FindAndMark(const K& key);
    // IDA 0x608440
    Entry* LookupAndMark(const K& key);
    // IDA 0x624760
    V Get(const K& key);

    // IDA 0x52B390
    bool BinarySearch(int* key);
    // IDA 0x52B4F0
    Entry* BinarySearchAlt(int* key);
    // IDA 0x625070
    uint32_t ComputeHash(const K& key);

    // IDA 0x6B9530
    void Clear();
    // IDA 0x724730
    bool Remove(const K& key);
    // IDA 0x6BA230
    Entry* RemoveEntry(const K& key);
    // IDA 0x6BAC40
    Entry* RemoveHashTableEntry(const K& key);
    // IDA 0x625090
    void RemoveAndResize();

    // IDA 0x7AE510
    void Grow();
    // IDA 0x624FC0
    void Grow2();
    // IDA 0x7AEC00
    void Shrink();
    // IDA 0x625780
    void Shrink2();

    // IDA 0x7ACF70
    void Rebuild();
    // IDA 0x625830
    void Rebuild2();
    // IDA 0x6BAEF0
    void RebuildEx();

    // IDA 0x7ACE60
    void CleanupAndResize();

    // IDA 0x5256F0
    void DestroyHashTableINIClass();
    // IDA 0x7AE950
    Entry* FindWOLHashTableEntry(const K& key);

    Entry**     m_Buckets;          // 0x00
    uint32_t    m_Count;            // 0x04
    uint32_t    m_Capacity;         // 0x08
    uint32_t    m_GrowThreshold;    // 0x0C
    bool        m_Sorted;           // 0x10
    uint8_t     _pad_11[3];         // 0x11
    Entry*      m_LastFound;        // 0x14
};

// ============================================================================
// Hash — hashing utility (3 methods)
// IDA 0x69D8C0 (ComputeHashSHA1), 0x52B720 (InsertOrdered)
// ============================================================================
class Hash
{
public:
    // IDA 0x69D8C0
    static uint32_t ComputeHashSHA1(const void* data, uint32_t size);
    // IDA 0x52B720
    static void InsertOrdered(void* table, const void* entry);
    // IDA 0x69D8C0 area
    void Reset();

    uint32_t    Hash_field_00;       // 0x00
    uint32_t    Hash_field_04;       // 0x04
};

// ============================================================================
// SHA1 — SHA-1 hash computation (6 methods)
// IDA 0x69D8C0 (sub_69D8C0), 0x69DA00 (Process), 0x69DC00 (Compute)
// ============================================================================
class SHA1
{
public:
    // IDA 0x69D8C0
    void Init();
    // IDA 0x69DA00
    void Process(const void* data, uint32_t size);
    // IDA 0x69DC00
    void Compute(uint8_t digest[20]);
    // IDA 0x69D8C0 area
    void Transform();
    // IDA 0x69D8C0 area
    void PadMessage();
    // IDA 0x69D8C0 area
    static void DigestToHex(const uint8_t digest[20], char hex[41]);

    uint32_t    state[5];       // 0x00
    uint64_t    count;          // 0x14
    uint8_t     buffer[64];     // 0x1C
    uint8_t     buffer_index;   // 0x5C
    uint8_t     _pad_5D[3];     // 0x5D
};

// ============================================================================
// CRC32 — CRC-32 checksum (1 method)
// IDA 0x69E000 (Compute)
// ============================================================================
class CRC32
{
public:
    // IDA 0x69E000
    static uint32_t Compute(const void* data, uint32_t size);

    uint32_t    m_CRC;          // 0x00
    uint32_t    m_Count;        // 0x04
};

} // namespace gamemd
