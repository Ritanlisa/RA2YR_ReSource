#pragma once

#include "..\fundamentals.hpp"
#include "..\core\vector.hpp"

namespace gamemd
{

class GenericNode
{
public:
    virtual ~GenericNode() = default;

    GenericNode() = default;

protected:
    explicit GenericNode(const noinit_t&) noexcept {}

public:
    GenericNode* Next = nullptr;
    GenericNode* Previous = nullptr;
};

template <typename T>
class Node : public GenericNode
{
public:
    virtual ~Node() override = default;

    Node() = default;

protected:
    explicit Node(const noinit_t&) noexcept : GenericNode(noinit_t()) {}
};

template <typename T>
class LinkedList
{
public:
    virtual ~LinkedList() = default;

    LinkedList() = default;

protected:
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
        MixFileClass* UNKNOWN_1          = nullptr;
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
        MixFileClass* UNKNOWN_2          = nullptr;
        MixFileClass* UNKNOWN_3          = nullptr;
        MixFileClass* SIDEC02DMD         = nullptr;
        MixFileClass* SIDEC02D           = nullptr;
    };

    static LinkedList<MixFileClass*>& MIXes;
    static DynamicVectorClass<MixFileClass*>& Array;
    static DynamicVectorClass<MixFileClass*>& Array_Alt;
    static DynamicVectorClass<MixFileClass*>& Maps;
    static DynamicVectorClass<MixFileClass*>& Movies;
    static MixFileClass& MULTIMD;
    static MixFileClass& MULTI;
    static GenericMixFiles& Generics;

    static void Bootstrap();

    virtual ~MixFileClass() override = default;

    MixFileClass() noexcept : Node(noinit_t()) {}
    explicit MixFileClass(const char* pFileName) noexcept;

protected:
    explicit MixFileClass(const noinit_t&) noexcept : Node(noinit_t()) {}

public:
    const char* FileName = nullptr;
    bool Blowfish = false;
    bool Encryption = false;
    int CountFiles = 0;
    int FileSize = 0;
    int FileStartOffset = 0;
    MixHeaderData* Headers = nullptr;
    int field_24 = 0;
};

} // namespace gamemd
