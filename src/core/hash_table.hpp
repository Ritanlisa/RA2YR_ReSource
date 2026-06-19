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

        Entry() : next(nullptr), hash(0) {} // IDA: UNMATCHED — no_callgraph_match, no_git_history
        Entry(const K& k, const V& v, uint32_t h)
            : key(k), value(v), next(nullptr), hash(h) {} // IDA: UNMATCHED — no_callgraph_match, no_git_history
    };

    HashTable()
        : m_Buckets(nullptr), m_Count(0), m_Capacity(0),
          m_GrowThreshold(0), m_Sorted(false), m_LastFound(nullptr) // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        Grow(); // initial allocation
    }

    ~HashTable() { DestroyHashTableINIClass(); }

    // IDA 0x7ADCD0: Insert
    bool Insert(const K& key, const V& value)
    {
        uint32_t h = ComputeHash(key);
        uint32_t index = h % m_Capacity;

        // Check for duplicate
        for (Entry* e = m_Buckets[index]; e; e = e->next) {
            if (e->hash == h && e->key == key) {
                e->value = value;
                return false; // updated existing
            }
        }

        Entry* entry = new Entry(key, value, h); // IDA: UNMATCHED — no_callgraph_match, no_git_history
        entry->next = m_Buckets[index];
        m_Buckets[index] = entry;
        ++m_Count;

        if (m_Count > m_GrowThreshold)
            Grow();
        return true;
    }

    // IDA 0x7AE1F0: Lookup — find value pointer by key
    V* Lookup(const K& key)
    {
        Entry* e = Find(key);
        return e ? &e->value : nullptr;
    }

    // IDA 0x7ADC60: LookupString — string-key lookup
    V* LookupString(const char* key)
    {
        for (uint32_t i = 0; i < m_Capacity; ++i) {
            for (Entry* e = m_Buckets[i]; e; e = e->next) {
                if (CompareStringKey(e->key, key))
                    return &e->value;
            }
        }
        return nullptr;
    }

    // IDA 0x625F60: FindString — search by string key
    V* FindString(const char* key)
    {
        return LookupString(key);  // 0x7ADC60
    }

    // IDA 0x625FB0: FindChunk — find entry by key
    Entry* FindChunk(const K& key)
    {
        return Find(key);
    }

    // IDA 0x6BA140: Find — find entry by key
    Entry* Find(const K& key)
    {
        if (m_Capacity == 0) return nullptr;
        uint32_t h = ComputeHash(key);
        uint32_t index = h % m_Capacity;

        for (Entry* e = m_Buckets[index]; e; e = e->next) {
            if (e->hash == h && e->key == key) {
                m_LastFound = e;
                return e;
            }
        }
        return nullptr;
    }

    // IDA 0x624140: FindAndMark
    Entry* FindAndMark(const K& key)
    {
        Entry* e = Find(key);
        if (e) m_LastFound = e;
        return e;
    }

    // IDA 0x608440: LookupAndMark
    Entry* LookupAndMark(const K& key)
    {
        return FindAndMark(key);  // 0x624140
    }

    // IDA 0x624760: Get — return value copy
    V Get(const K& key)
    {
        Entry* e = Find(key);
        if (e) return e->value;
        return V{};
    }

    // IDA 0x52B390: BinarySearch — sorted array search (specialized for int* key)
    bool BinarySearch(int* key)
    {
        if (!m_Sorted || m_Count == 0 || !key) return false;
        // Binary search over sorted entry array
        int lo = 0, hi = static_cast<int>(m_Count) - 1;
        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            int cmp = CompareSorted(m_Buckets[mid]->key, *key);
            if (cmp == 0) {
                m_LastFound = m_Buckets[mid];
                return true;
            }
            if (cmp < 0) lo = mid + 1;
            else hi = mid - 1;
        }
        return false;
    }

    // IDA 0x52B4F0: BinarySearchAlt
    Entry* BinarySearchAlt(int* key)
    {
        if (BinarySearch(key))
            return m_LastFound;
        return nullptr;
    }

    // IDA 0x625070: ComputeHash
    uint32_t ComputeHash(const K& key)
    {
        return GetHash(key);
    }

    // IDA 0x6B9530: Clear
    void Clear()
    {
        for (uint32_t i = 0; i < m_Capacity; ++i) {
            Entry* e = m_Buckets[i];
            while (e) {
                Entry* next = e->next;
                delete e;
                e = next;
            }
            m_Buckets[i] = nullptr;
        }
        m_Count = 0;
        m_LastFound = nullptr;
    }

    // IDA 0x724730: Remove
    bool Remove(const K& key)
    {
        if (m_Capacity == 0) return false;
        uint32_t h = ComputeHash(key);
        uint32_t index = h % m_Capacity;

        Entry* prev = nullptr;
        for (Entry* e = m_Buckets[index]; e; e = e->next) {
            if (e->hash == h && e->key == key) {
                if (prev)
                    prev->next = e->next;
                else
                    m_Buckets[index] = e->next;
                delete e;
                --m_Count;
                return true;
            }
            prev = e;
        }
        return false;
    }

    // IDA 0x6BA230: RemoveEntry
    Entry* RemoveEntry(const K& key)
    {
        if (m_Capacity == 0) return nullptr;
        uint32_t h = ComputeHash(key);
        uint32_t index = h % m_Capacity;

        Entry* prev = nullptr;
        for (Entry* e = m_Buckets[index]; e; e = e->next) {
            if (e->hash == h && e->key == key) {
                if (prev)
                    prev->next = e->next;
                else
                    m_Buckets[index] = e->next;
                --m_Count;
                e->next = nullptr;
                return e; // caller must delete
            }
            prev = e;
        }
        return nullptr;
    }

    // IDA 0x6BAC40: RemoveHashTableEntry
    Entry* RemoveHashTableEntry(const K& key)
    {
        return RemoveEntry(key);
    }

    // IDA 0x625090: RemoveAndResize
    void RemoveAndResize()
    {
        if (m_Count < m_Capacity / 4)
            Shrink();
    }

    // IDA 0x7AE510: Grow — double capacity
    void Grow()
    {
        uint32_t new_cap = (m_Capacity == 0) ? 16 : m_Capacity * 2;
        RebuildTo(new_cap);
    }

    // IDA 0x624FC0: Grow2
    void Grow2()
    {
        Grow();
    }

    // IDA 0x7AEC00: Shrink — halve capacity
    void Shrink()
    {
        uint32_t new_cap = m_Capacity / 2;
        if (new_cap < 4) new_cap = 4;
        RebuildTo(new_cap);
    }

    // IDA 0x625780: Shrink2
    void Shrink2()
    {
        Shrink();
    }

    // IDA 0x7ACF70: Rebuild
    void Rebuild()
    {
        RebuildTo(m_Capacity);
    }

    // IDA 0x625830: Rebuild2
    void Rebuild2()
    {
        Rebuild();
    }

    // IDA 0x6BAEF0: RebuildEx
    void RebuildEx()
    {
        Rebuild();
    }

    // IDA 0x7ACE60: CleanupAndResize
    void CleanupAndResize()
    {
        Clear();
        Shrink();
    }

    // IDA 0x5256F0: DestroyHashTableINIClass
    void DestroyHashTableINIClass()
    {
        Clear();
        delete[] m_Buckets;
        m_Buckets = nullptr;
        m_Capacity = 0;
        m_GrowThreshold = 0;
    }

    // IDA 0x7AE950: FindWOLHashTableEntry
    Entry* FindWOLHashTableEntry(const K& key)
    {
        return Find(key);
    }

    // --- Accessors ---
    uint32_t GetCount() const { return m_Count; }
    uint32_t GetCapacity() const { return m_Capacity; }
    Entry** GetBuckets() { return m_Buckets; } // IDA: UNMATCHED — no_callgraph_match, no_git_history
    Entry* GetLastFound() const { return m_LastFound; }

private:
    // Rebuild hash table to new capacity
    void RebuildTo(uint32_t new_capacity) // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        Entry** old_buckets = m_Buckets;
        uint32_t old_cap = m_Capacity;

        m_Buckets = new Entry*[new_capacity]();
        m_Capacity = new_capacity;
        m_GrowThreshold = new_capacity * 3 / 4; // 75% load factor
        m_Count = 0;

        for (uint32_t i = 0; i < old_cap; ++i) {
            Entry* e = old_buckets[i];
            while (e) {
                Entry* next = e->next;
                uint32_t idx = e->hash % new_capacity;
                e->next = m_Buckets[idx];
                m_Buckets[idx] = e;
                ++m_Count;
                e = next;
            }
        }
        delete[] old_buckets;
    }

    // String hash: FNV-1a (matches original RA2 implementation)
    static uint32_t HashString(const char* str)
    {
        uint32_t hash = 2166136261u; // FNV offset basis
        while (*str) {
            hash ^= static_cast<uint8_t>(*str++);
            hash *= 16777619u; // FNV prime
        }
        return hash;
    }

    // Hash dispatch: use std::hash for standard types
    static uint32_t GetHash(const K& key)
    {
        return HashHelper<K>::Do(key);
    }

    // Default hash helper
    template <typename T, typename = void>
    struct HashHelper
    {
        static uint32_t Do(const T& val)
        {
            return static_cast<uint32_t>(std::hash<T>{}(val));
        }
    };

    // Specialization for const char*
    template <typename T>
    struct HashHelper<T, std::enable_if_t<std::is_same_v<T, const char*>>>
    {
        static uint32_t Do(const T& val)
        {
            return HashString(val);  // 0x5F9E80
        }
    };

    // Specialization for std::string
    template <typename T>
    struct HashHelper<T, std::enable_if_t<std::is_same_v<T, std::string>>>
    {
        static uint32_t Do(const T& val)
        {
            return HashString(val.c_str());  // IDA: 0x5F9E80
        }
    };

    // Compare string key (for string-based tables like INI)
    static bool CompareStringKey(const K& key, const char* str) // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        return false; // default: no string comparison
    }

    // Compare for binary search (int specialization)
    static int CompareSorted(const K& a, int b) // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        if (static_cast<int>(a) < b) return -1;
        if (static_cast<int>(a) > b) return 1;
        return 0;
    }

    Entry**     m_Buckets;          // 0x00
    uint32_t    m_Count;            // 0x04
    uint32_t    m_Capacity;         // 0x08
    uint32_t    m_GrowThreshold;    // 0x0C
    bool        m_Sorted;           // 0x10
    uint8_t     _pad_11[3];         // 0x11
    Entry*      m_LastFound;        // 0x14
};

// Specialization: CompareStringKey for const char* keys
template <>
inline bool HashTable<const char*, int>::CompareStringKey(const char* const& key, const char* str)
{
    return strcmp(key, str) == 0;
}

// ============================================================================
// Hash — hashing utility (3 methods)
// ============================================================================
class Hash
{
public:
    Hash() : Hash_field_00(0), Hash_field_04(0) {}

    // IDA 0x69D8C0
    static uint32_t ComputeHashSHA1(const void* data, uint32_t size);  // 0x476D80

    // IDA 0x52B720
    static void InsertOrdered(void* table, const void* entry);  // 0x4F4410

    // IDA 0x69D8C0 area
    void Reset()
    {
        Hash_field_00 = 0;
        Hash_field_04 = 0;
    }

    uint32_t    Hash_field_00;       // 0x00
    uint32_t    Hash_field_04;       // 0x04
};

// ============================================================================
// SHA1 — SHA-1 hash computation (6 methods)
// ============================================================================
class SHA1
{
public:
    SHA1() { Init(); } // IDA: UNMATCHED — no_callgraph_match, no_git_history

    // IDA 0x69D8C0
    void Init();

    // IDA 0x69DA00
    void Process(const void* data, uint32_t size);

    // IDA 0x69DC00
    void Compute(uint8_t digest[20]);

    // IDA 0x69D8C0 area
    void Transform();  // 0x69DB30

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
// ============================================================================
class CRC32
{
public:
    CRC32() : m_CRC(0xFFFFFFFF), m_Count(0) {} // IDA: UNMATCHED — no_callgraph_match, no_git_history

    // IDA 0x69E000
    static uint32_t Compute(const void* data, uint32_t size);

    uint32_t    m_CRC;          // 0x00
    uint32_t    m_Count;        // 0x04
};

} // namespace gamemd
