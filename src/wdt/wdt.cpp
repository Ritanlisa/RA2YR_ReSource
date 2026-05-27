#include "gamemd/wdt/wdt.hpp"

#include <cstring>

namespace gamemd {
namespace wdt {

// --- State ---

State::State()
    : Players(0)
    , AIPlayers(0)
    , GameSpeed(0)
    , StartingCredits(0)
    , SuperWeapons(false)
    , BuildOffAlly(false)
    , FogOfWar(false)
    , MCVRedeploys(false)
    , AlliesAllowed(false)
    , ShortGame(false)
    , Crates(false)
    , MultiEngineer(false)
    , Bridies(false)
    , ScenIndex(0)
    , MapIndex(0)
    , LastSave(0)
    , align_34(0)
{
}

State::~State()
{
}

WDTError State::LoadConfig()
{
    // TODO: read game settings from config file
    return { 0, "" };
}

WDTError State::SaveConfig()
{
    // TODO: write game settings to config file
    return { 0, "" };
}

// --- Map ---

Map::Map()
    : Width(0)
    , Height(0)
    , Name(nullptr)
    , Description(nullptr)
    , CellData(nullptr)
    , MaxPlayers(0)
    , AllowNaval(false)
{
    std::memset(&align_1D, 0, sizeof(align_1D));
}

Map::~Map()
{
}

WDTError Map::Load()
{
    return { 0, "" };
}

WDTError Map::Draw()
{
    return { 0, "" };
}

void Map::Update()
{
}

// --- Territory ---

Territory::Territory()
    : OwnerIndex(-1)
    , IncomePerTurn(0)
    , Center{}
    , align_58(0)
{
    std::memset(Name, 0, sizeof(Name));
}

Territory::~Territory()
{
}

WDTError Territory::Attach(int player)
{
    (void)player;
    return { 0, "" };
}

WDTError Territory::Detach()
{
    return { 0, "" };
}

int Territory::Owner() const
{
    return OwnerIndex;
}

int Territory::Income() const
{
    return IncomePerTurn;
}

// --- Conflict ---

Conflict::Conflict()
    : Attacker(nullptr)
    , Defender(nullptr)
    , Outcome(0)
    , align_C(0)
{
}

Conflict::~Conflict()
{
}

WDTError Conflict::Resolve()
{
    return { 0, "" };
}

void Conflict::Update()
{
}

// --- Campaign ---

Campaign::Campaign()
{
}

Campaign::~Campaign()
{
}

WDTError Campaign::Start()
{
    return { 0, "" };
}

WDTError Campaign::End()
{
    return { 0, "" };
}

void Campaign::Update()
{
}

WDTError Campaign::Save(const char* filename)
{
    (void)filename;
    return { 0, "" };
}

WDTError Campaign::Load(const char* filename)
{
    (void)filename;
    return { 0, "" };
}

// --- History ---

History::History()
{
}

History::~History()
{
}

void History::Record(const char* event)
{
    (void)event;
    Entry entry = {};
    entry.Frame = 0;
    std::strncpy(entry.Text, event ? event : "", sizeof(entry.Text) - 1);
    m_entries.push_back(entry);
}

void History::Clear()
{
    m_entries.clear();
}

// TODO: complete WDT implementations

} // namespace wdt
} // namespace gamemd
