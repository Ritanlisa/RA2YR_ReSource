#pragma once

#include "fundamentals.hpp"
#include "core/vector.hpp"

namespace gamemd
{

class GenericNode
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~GenericNode() = default;

    GenericNode() = default;

protected:
    // design: inline accessor, inlined at all call sites
    explicit GenericNode(const noinit_t&) noexcept {}

public:
    GenericNode* Next = nullptr;
    GenericNode* Previous = nullptr;
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void* Constructor();  // 0x40E320
    // --- gap2 auto-generated stub declarations (END) ---
};

template <typename T>
class Node : public GenericNode
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Node() override = default;

    Node() = default;

protected:
    explicit Node(const noinit_t&) noexcept : GenericNode(noinit_t()) {}
};

template <typename T>
class LinkedList
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~LinkedList() = default;

    LinkedList() = default;

protected:
    // design: inline accessor, inlined at all call sites
    explicit LinkedList(const noinit_t&) noexcept {}

public:
    GenericNode Head;
    GenericNode Tail;
};

struct MixHeaderData
{
    uint32_t ID;
    uint32_t Offset;
    uint32_t Size;
};

class MixFileClass : public Node<MixFileClass*>
{
public:
    struct GenericMixFiles
    {
        MixFileClass* RA2MD              = nullptr;
        MixFileClass* RA2                = nullptr;
        MixFileClass* LANGUAGE           = nullptr;
        MixFileClass* LANGMD             = nullptr;
        MixFileClass* THEATER_TEMPERAT   = nullptr;
        MixFileClass* THEATER_TEMPERATMD = nullptr;
        MixFileClass* THEATER_TEM        = nullptr;
        MixFileClass* GENERIC            = nullptr;
        MixFileClass* GENERMD            = nullptr;
        MixFileClass* THEATER_ISOTEMP    = nullptr;
        MixFileClass* THEATER_ISOTEM     = nullptr;
        MixFileClass* ISOGEN             = nullptr;
        MixFileClass* ISOGENMD           = nullptr;
        MixFileClass* MOVIES02D          = nullptr;
        MixFileClass* MixFileClass_field_1          = nullptr;
        MixFileClass* MAIN               = nullptr;
        MixFileClass* CONQMD             = nullptr;
        MixFileClass* CONQUER            = nullptr;
        MixFileClass* CAMEOMD            = nullptr;
        MixFileClass* CAMEO              = nullptr;
        MixFileClass* CACHEMD            = nullptr;
        MixFileClass* CACHE              = nullptr;
        MixFileClass* LOCALMD            = nullptr;
        MixFileClass* LOCAL              = nullptr;
        MixFileClass* NTRLMD             = nullptr;
        MixFileClass* NEUTRAL            = nullptr;
        MixFileClass* MAPSMD02D          = nullptr;
        MixFileClass* MAPS02D            = nullptr;
        MixFileClass* MixFileClass_field_2          = nullptr;
        MixFileClass* MixFileClass_field_3          = nullptr;
        MixFileClass* SIDEC02DMD         = nullptr;
        MixFileClass* SIDEC02D           = nullptr;
        MixFileClass* MULTI              = nullptr;
        MixFileClass* MULTIMD            = nullptr;
    };

    // Global search pool -- all loaded MIX files (including sub-MIX)
    // design: static function, no direct binary match in IDA
    static DynamicVectorClass<MixFileClass*>& GetMixPool();

    static LinkedList<MixFileClass*>& MIXes;
    static DynamicVectorClass<MixFileClass*>& Array;
    static DynamicVectorClass<MixFileClass*>& Array_Alt;
    static DynamicVectorClass<MixFileClass*>& Maps;
    static DynamicVectorClass<MixFileClass*>& Movies;
    static MixFileClass& MULTIMD;
    static MixFileClass& MULTI;
    static GenericMixFiles& Generics;

    static bool Bootstrap();  // IDA: MixFileClass::Bootstrap @ 0x5301A0 -- returns bool  // 0x5301A0

    // unmatched: no callgraph reference and no git history record
    static uint32_t ComputeID(const char* filename);

    virtual ~MixFileClass() override
    {
        if (Headers)
            free(Headers);
        if (MemoryData)
            free(MemoryData);
    }

    // unmatched: no callgraph reference and no git history record
    MixFileClass() noexcept : Node(noinit_t()) {}
    // unmatched: no callgraph reference and no git history record
    explicit MixFileClass(const char* pFileName) noexcept;

    // Memory-backed constructor: takes ownership of data buffer
    // unmatched: no callgraph reference and no git history record
    MixFileClass(const uint8_t* data, int dataSize, const char* name) noexcept;

    // design: no binary equivalent found in IDA
    int  FindIndex(uint32_t id) const;
    // design: no binary equivalent found in IDA
    int  FindIndex(const char* filename) const;
    // design: no binary equivalent found in IDA
    int  GetSize(int index) const;
    // design: no binary equivalent found in IDA
    int  GetSize(const char* filename) const;
    // design: no binary equivalent found in IDA
    uint32_t GetFileID(int index) const {
        return (index >= 0 && index < CountFiles) ? Headers[index].ID : 0;
    }
    // unmatched: no callgraph reference and no git history record
    bool Extract(int index, void* buffer, int buffer_size) const;
    // unmatched: no callgraph reference and no git history record
    bool Extract(const char* filename, void* buffer, int buffer_size) const;
    // unmatched: no callgraph reference and no git history record
    bool Peek(int index, void* buffer, int size) const;
    // design: no binary equivalent found in IDA
    bool IsValid() const;
    // unmatched: no callgraph reference and no git history record
    void DumpEntries() const;

protected:
    // unmatched: no callgraph reference and no git history record
    explicit MixFileClass(const noinit_t&) noexcept : Node(noinit_t()) {}

public:
    const char* FileName = nullptr;
    bool Blowfish = false;
    bool Encryption = false;
    int CountFiles = 0;
    int FileSize = 0;
    int FileStartOffset = 0;
    MixHeaderData* Headers = nullptr;
    int MixFileClass_field_24 = 0;

    // Memory-backed data (for sub-MIX files): non-null = read from memory, not disk
    uint8_t* MemoryData = nullptr;
    int      MemoryDataSize = 0;
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void* FromFile(void* a1, int a2);  // 0x5B3C20
    void LinkIntoPool();  // 0x5B4590
    void* UnlinkFromPool(int a1);  // 0x5B4610
    void* LoadSubFile();  // 0x69E580
    int GetSubFile(int a1);  // 0x69E740
    int GetPixelData(int a1, int a2);  // 0x69E860
    void* CacheNode_Dtor(int a1);  // 0x69E930
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int LoadSide();  // 0x534fa0 -- MixFile::LoadSide
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    void CleanupCache();  // 0x69e210
    void DestroyCache();  // 0x69e180
    // === FUNCS-MOVE (END) ===
};

} // namespace gamemd
