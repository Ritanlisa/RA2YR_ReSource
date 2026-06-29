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

    explicit rc_ptr(T* ptr) noexcept;
    rc_ptr(const rc_ptr& other) noexcept;
    rc_ptr(rc_ptr&& other) noexcept;
    ~rc_ptr();

    rc_ptr& operator=(const rc_ptr& other) noexcept;
    rc_ptr& operator=(rc_ptr&& other) noexcept;

    T* get() const noexcept;
    T* operator->() const noexcept;
    T& operator*() const noexcept;
    explicit operator bool() const noexcept;

    void reset(T* ptr = nullptr) noexcept;

    T* release() noexcept;

private:
    T* ptr = nullptr;
};

class State
{
public:
    State();
    // unmatched: no callgraph reference and no git history record
    virtual ~State();

    // design: inline accessor, inlined at all call sites
    void AddRef() noexcept;
    // design: inline accessor, inlined at all call sites
    void Release() noexcept;

    virtual WDTError LoadConfig();
    // wrapper: delegates to RandomMap::LoadConfig at 0x5981F0
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
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int SetIfChanged(int a1);  // 0x4F3A90
    // --- gap2 auto-generated stub declarations (END) ---
};

class Map
{
public:
    Map();
    // unmatched: no callgraph reference and no git history record
    virtual ~Map();

    // design: virtual function, no binary implementation matched in IDA
    virtual WDTError Load();
    // design: virtual function, no binary implementation matched in IDA
    virtual WDTError Draw();
    // design: virtual function, no binary implementation matched in IDA
    virtual void    updateLogic();

    // design: inline accessor, inlined at all call sites
    void AddRef();
    // design: inline accessor, inlined at all call sites
    void Release();

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
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int GetInvalidCoord();  // 0x4104C0
    bool CanScroll();  // 0x4F28B0
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int IsCellFlag(int a1);  // 0x535be0
    // === FUNCS-MOVE (END) ===
};

class Territory
{
public:
    // unmatched: no callgraph reference and no git history record
    Territory();
    // unmatched: no callgraph reference and no git history record
    virtual ~Territory();

    virtual WDTError Attach(int player);
    // unmatched: no callgraph reference and no git history record
    virtual WDTError Detach();
    // unmatched: no callgraph reference and no git history record
    virtual int      Owner() const;
    // unmatched: no callgraph reference and no git history record
    virtual int      Income() const;

    void AddRef();
    void Release();

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
    // unmatched: no callgraph reference and no git history record
    Conflict();
    // unmatched: no callgraph reference and no git history record
    virtual ~Conflict();

    // unmatched: no callgraph reference and no git history record
    virtual WDTError Resolve();
    // design: virtual function, no binary implementation matched in IDA
    virtual void     updateLogic();

    // design: inline accessor, inlined at all call sites
    void AddRef();
    // design: inline accessor, inlined at all call sites
    void Release();

    Territory*    Attacker;
    Territory*    Defender;
    int           Outcome;
    uint32_t      referenceCount = 0;
    uint32_t      align_C;
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int GetOwnerHouse();  // 0x76BFE0
    // --- gap2 auto-generated stub declarations (END) ---
};

class Campaign
{
public:
    Campaign();
    // unmatched: no callgraph reference and no git history record
    virtual ~Campaign();

    virtual WDTError Start();
    virtual WDTError End();
    // wrapper: delegates to LightningStorm::End at 0x53A090
    virtual void     updateLogic();
    // wrapper: delegates to LightningStorm::End at 0x53A090
    virtual WDTError Save(const char* filename);
    // wrapper: delegates to LightningStorm::End at 0x53A090
    virtual WDTError Load(const char* filename);

    rc_ptr<State>   state;
    rc_ptr<Map>     map;
    std::vector<rc_ptr<Territory>> territories;
    std::vector<rc_ptr<Conflict>>  conflicts;
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void SetupMovie();  // 0x5C2500
    // --- gap2 auto-generated stub declarations (END) ---
};

class History
{
public:
    // unmatched: no callgraph reference and no git history record
    History();
    // unmatched: no callgraph reference and no git history record
    virtual ~History();

    // unmatched: no callgraph reference and no git history record
    virtual void Record(const char* event);
    virtual void Clear();

    struct Entry
    {
        int         Frame;
        char        Text[256];
    };

    std::vector<Entry> entries;
};

#include "wdt.inl"

} // namespace wdt
} // namespace gamemd
