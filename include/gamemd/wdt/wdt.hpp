#pragma once

#include <unknwn.h>
#include <cstdint>
#include <vector>
#include <memory>
#include <string>

#include "..\core\enums.hpp"
#include "..\core\math.hpp"
#include "..\fundamentals.hpp"

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
        : m_ptr(ptr)
    {
        if (m_ptr) { m_ptr->AddRef(); }
    }

    rc_ptr(const rc_ptr& other) noexcept
        : m_ptr(other.m_ptr)
    {
        if (m_ptr) { m_ptr->AddRef(); }
    }

    rc_ptr(rc_ptr&& other) noexcept
        : m_ptr(other.m_ptr)
    {
        other.m_ptr = nullptr;
    }

    ~rc_ptr()
    {
        if (m_ptr) { m_ptr->Release(); }
    }

    rc_ptr& operator=(const rc_ptr& other) noexcept
    {
        if (this != &other)
        {
            if (m_ptr) { m_ptr->Release(); }
            m_ptr = other.m_ptr;
            if (m_ptr) { m_ptr->AddRef(); }
        }
        return *this;
    }

    rc_ptr& operator=(rc_ptr&& other) noexcept
    {
        if (this != &other)
        {
            if (m_ptr) { m_ptr->Release(); }
            m_ptr = other.m_ptr;
            other.m_ptr = nullptr;
        }
        return *this;
    }

    T* get() const noexcept { return m_ptr; }
    T* operator->() const noexcept { return m_ptr; }
    T& operator*() const noexcept { return *m_ptr; }
    explicit operator bool() const noexcept { return m_ptr != nullptr; }

    void reset(T* ptr = nullptr) noexcept
    {
        if (m_ptr) { m_ptr->Release(); }
        m_ptr = ptr;
        if (m_ptr) { m_ptr->AddRef(); }
    }

    T* release() noexcept
    {
        T* tmp = m_ptr;
        m_ptr = nullptr;
        return tmp;
    }

private:
    T* m_ptr = nullptr;
};

class State
{
public:
    State();
    virtual ~State();

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
    virtual ~Map();

    virtual WDTError Load();
    virtual WDTError Draw();
    virtual void    Update();

    void AddRef() noexcept { ++m_refcount; }
    void Release() noexcept { if (--m_refcount == 0) delete this; }

    int         Width;
    int         Height;
    char*       Name;
    char*       Description;
    uint32_t*   CellData;
    int         MaxPlayers;
    bool        AllowNaval;
    uint8_t     align_1D[3];

protected:
    rc_ptr<IUnknown> m_render_target;
    int              m_refcount = 0;
};

class Territory
{
public:
    Territory();
    virtual ~Territory();

    virtual WDTError Attach(int player);
    virtual WDTError Detach();
    virtual int      Owner() const;
    virtual int      Income() const;

    void AddRef() { ++m_ref_count; }
    void Release() { if (--m_ref_count == 0) delete this; }

    char        Name[64];
    int         OwnerIndex;
    int         IncomePerTurn;
    CellStruct  Center;
    uint32_t    m_ref_count = 0;
    uint32_t    align_58;
};

class Conflict
{
public:
    Conflict();
    virtual ~Conflict();

    virtual WDTError Resolve();
    virtual void     Update();

    void AddRef() { ++m_ref_count; }
    void Release() { if (--m_ref_count == 0) delete this; }

    Territory*    Attacker;
    Territory*    Defender;
    int           Outcome;
    uint32_t      m_ref_count = 0;
    uint32_t      align_C;
};

class Campaign
{
public:
    Campaign();
    virtual ~Campaign();

    virtual WDTError Start();
    virtual WDTError End();
    virtual void     Update();
    virtual WDTError Save(const char* filename);
    virtual WDTError Load(const char* filename);

    rc_ptr<State>   m_state;
    rc_ptr<Map>     m_map;
    std::vector<rc_ptr<Territory>> m_territories;
    std::vector<rc_ptr<Conflict>>  m_conflicts;
};

class History
{
public:
    History();
    virtual ~History();

    virtual void Record(const char* event);
    virtual void Clear();

    struct Entry
    {
        int         Frame;
        char        Text[256];
    };

    std::vector<Entry> m_entries;
};

} // namespace wdt
} // namespace gamemd
