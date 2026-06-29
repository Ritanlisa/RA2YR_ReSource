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

        // unmatched: no callgraph reference and no git history record
        Entry();
        // unmatched: no callgraph reference and no git history record
        Entry(const K& k, const V& v, uint32_t h);
    };

    // unmatched: no callgraph reference and no git history record
    HashTable();

    ~HashTable();

    // IDA 0x7ADCD0: Insert
    bool Insert(const K& key, const V& value);

    // IDA 0x7AE1F0: Lookup — find value pointer by key
    V* Lookup(const K& key);

    V* LookupString(const char* key);

    // IDA 0x625F60: FindString — search by string key
    V* FindString(const char* key);

    // IDA 0x625FB0: FindChunk — find entry by key
    Entry* FindChunk(const K& key);

    // IDA 0x6BA140: Find — find entry by key
    Entry* Find(const K& key);

    Entry* FindAndMark(const K& key);

    // IDA 0x608440: LookupAndMark
    Entry* LookupAndMark(const K& key);

    // IDA 0x624760: Get — return value copy
    V Get(const K& key);

    // IDA 0x52B390: BinarySearch — sorted array search (specialized for int* key)
    bool BinarySearch(int* key);

    // IDA 0x52B4F0: BinarySearchAlt
    Entry* BinarySearchAlt(int* key);

    // IDA 0x625070: ComputeHash
    uint32_t ComputeHash(const K& key);

    // IDA 0x6B9530: Clear
    void Clear();

    // IDA 0x724730: Remove
    bool Remove(const K& key);

    // IDA 0x6BA230: RemoveEntry
    Entry* RemoveEntry(const K& key);

    // IDA 0x6BAC40: RemoveHashTableEntry
    Entry* RemoveHashTableEntry(const K& key);

    // IDA 0x625090: RemoveAndResize
    void RemoveAndResize();

    // IDA 0x7AE510: Grow — double capacity
    void Grow();

    // IDA 0x624FC0: Grow2
    void Grow2();

    // IDA 0x7AEC00: Shrink — halve capacity
    void Shrink();

    // IDA 0x625780: Shrink2
    void Shrink2();

    // IDA 0x7ACF70: Rebuild
    void Rebuild();

    // IDA 0x625830: Rebuild2
    void Rebuild2();

    // IDA 0x6BAEF0: RebuildEx
    void RebuildEx();

    // IDA 0x7ACE60: CleanupAndResize
    void CleanupAndResize();

    // IDA 0x5256F0: DestroyHashTableINIClass
    void DestroyHashTableINIClass();

    // IDA 0x7AE950: FindWOLHashTableEntry
    Entry* FindWOLHashTableEntry(const K& key);

    // --- Accessors ---
    // design: inline accessor, inlined at all call sites
    uint32_t GetCount() const;
    // design: inline accessor, inlined at all call sites
    uint32_t GetCapacity() const;
    // unmatched: no callgraph reference and no git history record
    Entry** GetBuckets();
    // design: inline accessor, inlined at all call sites
    Entry* GetLastFound() const;

private:
    // Rebuild hash table to new capacity
    // unmatched: no callgraph reference and no git history record
    void RebuildTo(uint32_t new_capacity);

    // String hash: FNV-1a (matches original RA2 implementation)
    static uint32_t HashString(const char* str);

    // Hash dispatch: uses if constexpr for K=const char* / K=std::string / default
    static uint32_t GetHash(const K& key);

    // Compare string key (for string-based tables like INI)
    // unmatched: no callgraph reference and no git history record
    static bool CompareStringKey(const K& key, const char* str);

    // Compare for binary search (int specialization)
    // unmatched: no callgraph reference and no git history record
    static int CompareSorted(const K& a, int b);

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
// ============================================================================
class Hash
{
public:
    Hash(); // 0x5dac00

    // IDA 0x69D8C0
    static uint32_t ComputeHashSHA1(const void* data, uint32_t size);  // 0x476D80

    // IDA 0x52B720
    static void InsertOrdered(void* table, const void* entry);  // 0x4F4410

    // IDA 0x69D8C0 area
    void Reset();

    uint32_t    hash_state_0;       // 0x00
    uint32_t    hash_state_4;       // 0x04
};

// ============================================================================
// SHA1 — SHA-1 hash computation (6 methods)
// ============================================================================
class SHA1
{
public:
    // unmatched: no callgraph reference and no git history record
    SHA1();

    // IDA 0x69D8C0
    // wrapper: delegates to SHA1::ProcessBlock at 0x69D8C0
    void Init();

    // IDA 0x69DA00
    void Process(const void* data, uint32_t size);  // 0x69D960

    // IDA 0x69DC00
    void Compute(uint8_t digest[20]);  // 0x69D9E0

    // IDA 0x69D8C0 area
    void Transform();  // 0x69DB30

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
};

// ============================================================================
// CRC32 — CRC-32 checksum (1 method)
// ============================================================================
class CRC32
{
public:
    // unmatched: no callgraph reference and no git history record
    CRC32();

    // IDA 0x69E000
    static uint32_t Compute(const void* data, uint32_t size);  // 0x4A1FB0

    uint32_t    m_CRC;          // 0x00
    uint32_t    m_Count;        // 0x04
};

#include "hash_table.inl"

} // namespace gamemd
