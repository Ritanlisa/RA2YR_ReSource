#pragma once

#include "fundamentals.hpp"
#include "core/vector.hpp"

namespace gamemd
{

class GenericNode
{
public:
    virtual ~GenericNode() = default; // IDA: NOT_FOUND

    GenericNode() = default;

protected:
    explicit GenericNode(const noinit_t&) noexcept {} // IDA: NOT_FOUND

public:
    GenericNode* Next = nullptr;
    GenericNode* Previous = nullptr;
};

template <typename T>
class Node : public GenericNode
{
public:
    virtual ~Node() override = default; // IDA: UNMATCHED — defaulted_special_member, default_dtor, no_callgraph_match

    Node() = default;

protected:
    explicit Node(const noinit_t&) noexcept : GenericNode(noinit_t()) {}
};

template <typename T>
class LinkedList
{
public:
    virtual ~LinkedList() = default; // IDA: NOT_FOUND

    LinkedList() = default;

protected:
    explicit LinkedList(const noinit_t&) noexcept {} // IDA: NOT_FOUND

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
    static DynamicVectorClass<MixFileClass*>& GetMixPool(); // IDA: NOT_FOUND

    static LinkedList<MixFileClass*>& MIXes;
    static DynamicVectorClass<MixFileClass*>& Array;
    static DynamicVectorClass<MixFileClass*>& Array_Alt;
    static DynamicVectorClass<MixFileClass*>& Maps;
    static DynamicVectorClass<MixFileClass*>& Movies;
    static MixFileClass& MULTIMD;
    static MixFileClass& MULTI;
    static GenericMixFiles& Generics;

    static bool Bootstrap();  // IDA: MixFileClass::Bootstrap @ 0x5301A0 -- returns bool  // 0x5301A0

    static uint32_t ComputeID(const char* filename); // IDA: UNMATCHED — no_callgraph_match, no_git_history

    virtual ~MixFileClass() override
    {
        if (Headers)
            free(Headers);
        if (MemoryData)
            free(MemoryData);
    }

    MixFileClass() noexcept : Node(noinit_t()) {} // IDA: UNMATCHED — no_callgraph_match, no_git_history
    explicit MixFileClass(const char* pFileName) noexcept; // IDA: UNMATCHED — no_callgraph_match, no_git_history

    // Memory-backed constructor: takes ownership of data buffer
    MixFileClass(const uint8_t* data, int dataSize, const char* name) noexcept; // IDA: UNMATCHED — no_callgraph_match, no_git_history

    int  FindIndex(uint32_t id) const; // IDA: NOT_FOUND
    int  FindIndex(const char* filename) const; // IDA: NOT_FOUND
    int  GetSize(int index) const; // IDA: NOT_FOUND
    int  GetSize(const char* filename) const; // IDA: NOT_FOUND
    uint32_t GetFileID(int index) const { // IDA: NOT_FOUND
        return (index >= 0 && index < CountFiles) ? Headers[index].ID : 0;
    }
    bool Extract(int index, void* buffer, int buffer_size) const; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    bool Extract(const char* filename, void* buffer, int buffer_size) const; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    bool Peek(int index, void* buffer, int size) const; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    bool IsValid() const; // IDA: NOT_FOUND
    void DumpEntries() const; // IDA: UNMATCHED — no_callgraph_match, no_git_history

protected:
    explicit MixFileClass(const noinit_t&) noexcept : Node(noinit_t()) {} // IDA: UNMATCHED — no_callgraph_match, no_git_history

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
};

} // namespace gamemd
