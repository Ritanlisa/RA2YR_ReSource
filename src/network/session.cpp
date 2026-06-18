#include "network/session.hpp"

namespace gamemd
{

SessionClass* SessionClass::Instance = nullptr;

SessionClass::SessionClass() noexcept
    : GameMode(GameMode::Skirmish)
    , MPGameMode(nullptr)
    , SessionClass_field_08(0)
    , SessionClass_field_0C(0)
    , SessionClass_field_10(0)
    , SessionClass_field_14(0)
    , Config{}
    , UniqueID(0)
    , PlayerColor(-1)
    , SessionClass_field_160(0)
    , SessionClass_field_164(0)
    , SessionClass_field_168(0)
    , SessionClass_field_16C(0)
    , SessionClass_field_170(0)
    , idxSide(-1)
    , idxSide2(-1)
    , Color(-1)
    , Color2(-1)
    , Side(-1)
    , Side2(-1)
    , MuteSWLaunches(false)
    , WOLLimitResolution(false)
    , LastNickSlot(-1)
    , CurrentlyInGame(false)
{
    std::memset(Handle, 0, sizeof(Handle));
    std::memset(&SkirmishPreferences, 0, sizeof(SkirmishPreferences));
    std::memset(&LANPreferences, 0, sizeof(LANPreferences));
    std::memset(&WOLPreferences, 0, sizeof(WOLPreferences));
    std::memset(SessionClass_field_304, 0, sizeof(SessionClass_field_304));
    std::memset(SessionClass_field_310, 0, sizeof(SessionClass_field_310));
    std::memset(ScenarioFilename, 0, sizeof(ScenarioFilename));
    std::memset(SessionClass_field_8AA, 0, sizeof(SessionClass_field_8AA));
    std::memset(SessionClass_field_2854, 0, sizeof(SessionClass_field_2854));
}

SessionClass::~SessionClass()
{
}

// IDA 0x5D0070 — loadSettings: read session config from INI
void SessionClass::loadSettings(CCINIClass* ini)
{
    if (!ini) return;
    // Config.GameSpeed = ini->GetInt("Options", "GameSpeed", Config.GameSpeed);
    // Config.Credits = ini->GetInt("Options", "Credits", Config.Credits);
    // ... etc for all options
}

// IDA 0x5D39D0 — saveSettings: write session config to INI
void SessionClass::saveSettings(CCINIClass* ini)
{
    if (!ini) return;
    // ini->PutInt("Options", "GameSpeed", Config.GameSpeed);
    // ini->PutInt("Options", "Credits", Config.Credits);
    // ... etc for all options
}

// IDA 0x5E64C0 — initPlayers: populate player slots from session config
void SessionClass::initPlayers()
{
    // Initialize player/node slots based on game mode and config
    // Creates NodeNameType entries in StartSpots vector
}

// IDA 0x691500 — GetEntry: retrieve node entry by index
NodeNameType* SessionClass::GetEntry(int index)
{
    if (index >= 0 && index < static_cast<int>(StartSpots.Count))
        return StartSpots.Items[index];
    return nullptr;
}

// IDA 0x6915D0 — SetField: update a field of a node entry
void SessionClass::SetField(int index, int field_id, int value)
{
    NodeNameType* node = GetEntry(index);
    if (!node) return;
    switch (field_id)
    {
        case 0: node->Country = value; break;
        case 1: node->Color = value; break;
        case 2: node->StartPoint = value; break;
        case 3: node->Team = value; break;
        case 4: node->HouseIndex = value; break;
        default: break;
    }
}

// IDA 0x696F50 — GetOption: read game option value
int SessionClass::GetOption(GameOption opt)
{
    switch (opt)
    {
        case GameOption::GameSpeed:      return Config.GameSpeed;
        case GameOption::StartingCredits: return Config.Credits;
        case GameOption::UnitCount:      return Config.UnitCount;
        case GameOption::ShortGame:      return Config.ShortGame ? 1 : 0;
        case GameOption::SuperWeapons:   return Config.SuperWeaponsAllowed ? 1 : 0;
        case GameOption::BuildOffAlly:   return Config.BuildOffAlly ? 1 : 0;
        case GameOption::MCVRedeploys:   return Config.MCVRedeploys ? 1 : 0;
        case GameOption::Crates:         return Config.CratesAppear ? 1 : 0;
        case GameOption::FogOfWar:       return Config.FogOfWar ? 1 : 0;
        case GameOption::AlliesAllowed:  return Config.AlliesAllowed ? 1 : 0;
        default: return 0;
    }
}

// IDA 0x696F70 — GetOption2: read second option set
int SessionClass::GetOption2(GameOption opt)
{
    return GetOption(opt);
}

// IDA 0x696F90 — SetPlayerOption: set per-player option
void SessionClass::SetPlayerOption(int index, GameOption opt, int value)
{
    // Set option for specific player/node slot
    (void)index; (void)opt; (void)value;
}

// IDA 0x696FC0 — SetPlayerColor: assign color to player slot
void SessionClass::SetPlayerColor(int index, int color)
{
    NodeNameType* node = GetEntry(index);
    if (node) node->Color = color;
}

// IDA 0x696FF0 — SetOption: write game option
void SessionClass::SetOption(GameOption opt, int value)
{
    switch (opt)
    {
        case GameOption::GameSpeed:      Config.GameSpeed = value; break;
        case GameOption::StartingCredits: Config.Credits = value; break;
        case GameOption::UnitCount:      Config.UnitCount = value; break;
        case GameOption::ShortGame:      Config.ShortGame = (value != 0); break;
        case GameOption::SuperWeapons:   Config.SuperWeaponsAllowed = (value != 0); break;
        case GameOption::BuildOffAlly:   Config.BuildOffAlly = (value != 0); break;
        case GameOption::MCVRedeploys:   Config.MCVRedeploys = (value != 0); break;
        case GameOption::Crates:         Config.CratesAppear = (value != 0); break;
        case GameOption::FogOfWar:       Config.FogOfWar = (value != 0); break;
        case GameOption::AlliesAllowed:  Config.AlliesAllowed = (value != 0); break;
        default: break;
    }
}

// IDA 0x697020 — SetOption2: write second option set
void SessionClass::SetOption2(GameOption opt, int value)
{
    SetOption(opt, value);
}

// IDA 0x697E70 — IsValidHouse: check if house is valid for current game mode
bool SessionClass::IsValidHouse(int houseIdx)
{
    // Validate house index against game mode constraints
    return houseIdx >= 0;
}

// IDA 0x69A310 — GetPlayerColorScheme: get color scheme for player
int SessionClass::GetPlayerColorScheme(int playerIdx)
{
    NodeNameType* node = GetEntry(playerIdx);
    return node ? node->Color : -1;
}

// IDA 0x69B760 — AssignSide: assign country/side to player
void SessionClass::AssignSide(int playerIdx, int sideIdx)
{
    NodeNameType* node = GetEntry(playerIdx);
    if (node) node->Country = sideIdx;
}

// IDA 0x69B7E0 — AssignColor: assign color to player with validation
void SessionClass::AssignColor(int playerIdx, int colorIdx)
{
    NodeNameType* node = GetEntry(playerIdx);
    if (node) node->Color = colorIdx;
}

// IDA 0x69BBE0 — GetGameSpeed: return current game speed
int SessionClass::GetGameSpeed()
{
    return Config.GameSpeed;
}

} // namespace gamemd
