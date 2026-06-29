// ============================================================================
// HashTable<K,V> — out-of-line template method implementations
// ============================================================================

// --- Entry constructors ---

template <typename K, typename V>
HashTable<K,V>::Entry::Entry()
    : next(nullptr), hash(0)
{
}

template <typename K, typename V>
HashTable<K,V>::Entry::Entry(const K& k, const V& v, uint32_t h)
    : key(k), value(v), next(nullptr), hash(h)
{
}

// --- Constructor / Destructor ---

template <typename K, typename V>
HashTable<K,V>::HashTable()
    : m_Buckets(nullptr), m_Count(0), m_Capacity(0),
      m_GrowThreshold(0), m_Sorted(false), m_LastFound(nullptr)
{
    Grow(); // initial allocation
}

template <typename K, typename V>
HashTable<K,V>::~HashTable()
{
    DestroyHashTableINIClass();
}

// --- Core Operations ---

template <typename K, typename V>
bool HashTable<K,V>::Insert(const K& key, const V& value)
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

    Entry* entry = new Entry(key, value, h);
    entry->next = m_Buckets[index];
    m_Buckets[index] = entry;
    ++m_Count;

    if (m_Count > m_GrowThreshold)
        Grow();
    return true;
}

template <typename K, typename V>
V* HashTable<K,V>::Lookup(const K& key)
{
    Entry* e = Find(key);
    return e ? &e->value : nullptr;
}

template <typename K, typename V>
V* HashTable<K,V>::LookupString(const char* key)
{
    for (uint32_t i = 0; i < m_Capacity; ++i) {
        for (Entry* e = m_Buckets[i]; e; e = e->next) {
            if (CompareStringKey(e->key, key))
                return &e->value;
        }
    }
    return nullptr;
}

template <typename K, typename V>
V* HashTable<K,V>::FindString(const char* key)
{
    return LookupString(key);
}

template <typename K, typename V>
typename HashTable<K,V>::Entry* HashTable<K,V>::FindChunk(const K& key)
{
    return Find(key);
}

template <typename K, typename V>
typename HashTable<K,V>::Entry* HashTable<K,V>::Find(const K& key)
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

template <typename K, typename V>
typename HashTable<K,V>::Entry* HashTable<K,V>::FindAndMark(const K& key)
{
    Entry* e = Find(key);
    if (e) m_LastFound = e;
    return e;
}

template <typename K, typename V>
typename HashTable<K,V>::Entry* HashTable<K,V>::LookupAndMark(const K& key)
{
    return FindAndMark(key);
}

template <typename K, typename V>
V HashTable<K,V>::Get(const K& key)
{
    Entry* e = Find(key);
    if (e) return e->value;
    return V{};
}

template <typename K, typename V>
bool HashTable<K,V>::BinarySearch(int* key)
{
    if (!m_Sorted || m_Count == 0 || !key) return false;
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

template <typename K, typename V>
typename HashTable<K,V>::Entry* HashTable<K,V>::BinarySearchAlt(int* key)
{
    if (BinarySearch(key))
        return m_LastFound;
    return nullptr;
}

template <typename K, typename V>
uint32_t HashTable<K,V>::ComputeHash(const K& key)
{
    return GetHash(key);
}

// --- Mutation ---

template <typename K, typename V>
void HashTable<K,V>::Clear()
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

template <typename K, typename V>
bool HashTable<K,V>::Remove(const K& key)
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

template <typename K, typename V>
typename HashTable<K,V>::Entry* HashTable<K,V>::RemoveEntry(const K& key)
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

template <typename K, typename V>
typename HashTable<K,V>::Entry* HashTable<K,V>::RemoveHashTableEntry(const K& key)
{
    return RemoveEntry(key);
}

template <typename K, typename V>
void HashTable<K,V>::RemoveAndResize()
{
    if (m_Count < m_Capacity / 4)
        Shrink();
}

// --- Resize ---

template <typename K, typename V>
void HashTable<K,V>::Grow()
{
    uint32_t new_cap = (m_Capacity == 0) ? 16 : m_Capacity * 2;
    RebuildTo(new_cap);
}

template <typename K, typename V>
void HashTable<K,V>::Grow2()
{
    Grow();
}

template <typename K, typename V>
void HashTable<K,V>::Shrink()
{
    uint32_t new_cap = m_Capacity / 2;
    if (new_cap < 4) new_cap = 4;
    RebuildTo(new_cap);
}

template <typename K, typename V>
void HashTable<K,V>::Shrink2()
{
    Shrink();
}

template <typename K, typename V>
void HashTable<K,V>::Rebuild()
{
    RebuildTo(m_Capacity);
}

template <typename K, typename V>
void HashTable<K,V>::Rebuild2()
{
    Rebuild();
}

template <typename K, typename V>
void HashTable<K,V>::RebuildEx()
{
    Rebuild();
}

template <typename K, typename V>
void HashTable<K,V>::CleanupAndResize()
{
    Clear();
    Shrink();
}

template <typename K, typename V>
void HashTable<K,V>::DestroyHashTableINIClass()
{
    Clear();
    delete[] m_Buckets;
    m_Buckets = nullptr;
    m_Capacity = 0;
    m_GrowThreshold = 0;
}

template <typename K, typename V>
typename HashTable<K,V>::Entry* HashTable<K,V>::FindWOLHashTableEntry(const K& key)
{
    return Find(key);
}

// --- Accessors ---

template <typename K, typename V>
uint32_t HashTable<K,V>::GetCount() const
{
    return m_Count;
}

template <typename K, typename V>
uint32_t HashTable<K,V>::GetCapacity() const
{
    return m_Capacity;
}

template <typename K, typename V>
typename HashTable<K,V>::Entry** HashTable<K,V>::GetBuckets()
{
    return m_Buckets;
}

template <typename K, typename V>
typename HashTable<K,V>::Entry* HashTable<K,V>::GetLastFound() const
{
    return m_LastFound;
}

// --- Private Helpers ---

template <typename K, typename V>
void HashTable<K,V>::RebuildTo(uint32_t new_capacity)
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

template <typename K, typename V>
uint32_t HashTable<K,V>::HashString(const char* str)
{
    uint32_t hash = 2166136261u; // FNV offset basis
    while (*str) {
        hash ^= static_cast<uint8_t>(*str++);
        hash *= 16777619u; // FNV prime
    }
    return hash;
}

template <typename K, typename V>
uint32_t HashTable<K,V>::GetHash(const K& key)
{
    if constexpr (std::is_same_v<K, const char*>) {
        return HashString(key);
    } else if constexpr (std::is_same_v<K, std::string>) {
        return HashString(key.c_str());
    } else {
        return static_cast<uint32_t>(std::hash<K>{}(key));
    }
}

template <typename K, typename V>
bool HashTable<K,V>::CompareStringKey(const K& key, const char* str)
{
    if constexpr (std::is_same_v<K, const char*>) {
        return strcmp(key, str) == 0;
    }
    return false; // default: no string comparison
}

template <typename K, typename V>
int HashTable<K,V>::CompareSorted(const K& a, int b)
{
    if (static_cast<int>(a) < b) return -1;
    if (static_cast<int>(a) > b) return 1;
    return 0;
}
