#pragma once

#include <unknwn.h>
#include <cstdint>
#include <vector>
#include <memory>
#include <string>

#include "core/enums.hpp"
#include "core/math.hpp"
#include "fundamentals.hpp"

namespace gamemd
{
namespace wdt
{

enum class GameOption : int
{
    None           = 0,
    StartingCredits = 1,
    GameSpeed      = 2,
    SuperWeapons   = 3,
    BuildOffAlly   = 4,
    FogOfWar       = 5,
    MCVRedeploys   = 6,
    AlliesAllowed  = 7,
    ShortGame      = 8,
    Crates         = 9,
    MultiEngineer  = 10,
    Bridies        = 11
};

struct WDTError
{
    int     Code;
    char    Message[256];
};

template <typename T>
class rc_ptr
{
public:
    rc_ptr() noexcept = default;

    explicit rc_ptr(T* ptr) noexcept
        : ptr(ptr) // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        if (ptr) { ptr->AddRef(); }
    }

    rc_ptr(const rc_ptr& other) noexcept
        : ptr(other.ptr) // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        if (ptr) { ptr->AddRef(); }
    }

    rc_ptr(rc_ptr&& other) noexcept
        : ptr(other.ptr) // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        other.ptr = nullptr;
    }

    ~rc_ptr()
    {
        if (ptr) { ptr->Release(); }
    }

    rc_ptr& operator=(const rc_ptr& other) noexcept // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        if (this != &other)
        {
            if (ptr) { ptr->Release(); }
            ptr = other.ptr;
            if (ptr) { ptr->AddRef(); }
        }
        return *this;
    }

    rc_ptr& operator=(rc_ptr&& other) noexcept // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        if (this != &other)
        {
            if (ptr) { ptr->Release(); }
            ptr = other.ptr;
            other.ptr = nullptr;
        }
        return *this;
    }

    T* get() const noexcept { return ptr; } // IDA: UNMATCHED — no_callgraph_match, no_git_history
    T* operator->() const noexcept { return ptr; } // IDA: UNMATCHED — no_callgraph_match, no_git_history
    T& operator*() const noexcept { return *ptr; } // IDA: UNMATCHED — no_callgraph_match, no_git_history
    explicit operator bool() const noexcept { return ptr != nullptr; } // IDA: UNMATCHED — no_callgraph_match, no_git_history

    void reset(T* ptr = nullptr) noexcept
    {
        if (ptr) { ptr->Release(); }
        ptr = ptr;
        if (ptr) { ptr->AddRef(); }
    }

    T* release() noexcept // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        T* tmp = ptr;
        ptr = nullptr;
        return tmp;
    }

private:
    T* ptr = nullptr;
};

class State
{
public:
    State();
    virtual ~State(); // IDA: UNMATCHED — no_callgraph_match, no_git_history

    void AddRef() noexcept {}
    void Release() noexcept {}

    virtual WDTError LoadConfig();
    virtual WDTError SaveConfig();

    int             Players;
    int             AIPlayers;
    int             GameSpeed;
    int             StartingCredits;
    bool            SuperWeapons;
    bool            BuildOffAlly;
    bool            FogOfWar;
    bool            MCVRedeploys;
    bool            AlliesAllowed;
    bool            ShortGame;
    bool            Crates;
    bool            MultiEngineer;
    bool            Bridies;
    int             ScenIndex;
    int             MapIndex;
    int             LastSave;
    uint32_t        align_34;
};

class Map
{
public:
    Map();
    virtual ~Map(); // IDA: UNMATCHED — no_callgraph_match, no_git_history

    virtual WDTError Load();
    virtual WDTError Draw();
    virtual void    updateLogic();

    void AddRef() noexcept { ++refcount; }
    void Release() noexcept { if (--refcount == 0) delete this; }

    int         Width;
    int         Height;
    char*       Name;
    char*       Description;
    uint32_t*   CellData;
    int         MaxPlayers;
    bool        AllowNaval;
    uint8_t     align_1D[3];

protected:
    rc_ptr<IUnknown> renderTarget;
    int              refcount = 0;
};

class Territory
{
public:
    Territory(); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual ~Territory(); // IDA: UNMATCHED — no_callgraph_match, no_git_history

    virtual WDTError Attach(int player);
    virtual WDTError Detach(); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual int      Owner() const; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual int      Income() const; // IDA: UNMATCHED — no_callgraph_match, no_git_history

    void AddRef() { ++referenceCount; }
    void Release() { if (--referenceCount == 0) delete this; }

    char        Name[64];
    int         OwnerIndex;
    int         IncomePerTurn;
    CellStruct  Center;
    uint32_t    referenceCount = 0;
    uint32_t    align_58;
};

class Conflict
{
public:
    Conflict(); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual ~Conflict(); // IDA: UNMATCHED — no_callgraph_match, no_git_history

    virtual WDTError Resolve(); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual void     updateLogic();

    void AddRef() { ++referenceCount; }
    void Release() { if (--referenceCount == 0) delete this; }

    Territory*    Attacker;
    Territory*    Defender;
    int           Outcome;
    uint32_t      referenceCount = 0;
    uint32_t      align_C;
};

class Campaign
{
public:
    Campaign();
    virtual ~Campaign(); // IDA: UNMATCHED — no_callgraph_match, no_git_history

    virtual WDTError Start();  // 0x7CD80F
    virtual WDTError End();  // 0x53A090
    virtual void     updateLogic();
    virtual WDTError Save(const char* filename);
    virtual WDTError Load(const char* filename);

    rc_ptr<State>   state;
    rc_ptr<Map>     map;
    std::vector<rc_ptr<Territory>> territories;
    std::vector<rc_ptr<Conflict>>  conflicts;
};

class History
{
public:
    History(); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual ~History(); // IDA: UNMATCHED — no_callgraph_match, no_git_history

    virtual void Record(const char* event); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual void Clear();

    struct Entry
    {
        int         Frame;
        char        Text[256];
    };

    std::vector<Entry> entries;
};

} // namespace wdt
} // namespace gamemd
