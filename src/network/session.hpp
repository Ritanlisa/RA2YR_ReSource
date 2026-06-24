#pragma once

#include <cstdint>
#include <windows.h>

#include "core/enums.hpp"
#include "core/vector.hpp"
#include "fundamentals.hpp"

namespace gamemd
{

class MPGameModeClass;
class CCINIClass;
class HouseClass;
struct NodeNameType;
struct GameTypePreferencesStruct;

struct PlayerData
{
    uint8_t  Data[10];
    uint8_t  padding_A[2];
};

#pragma pack(push, 1)
struct NodeNameType
{
    wchar_t     Name[20];
    PlayerData  PlayerInfo;
    char        Serial[23];
    int32_t     Country;
    int32_t     InitialCountry;
    int32_t     Color;
    int32_t     InitialColor;
    int32_t     StartPoint;
    int32_t     InitialStartPoint;
    int32_t     Team;
    int32_t     InitialTeam;
    uint32_t    NodeNameType_field_6B;
    int32_t     HouseIndex;
    int32_t     Time;
    uint32_t    NodeNameType_field_77;
    int32_t     Clan;
    uint32_t    NodeNameType_field_7F;
    uint8_t     NodeNameType_field_byte_83;
    uint8_t     NodeNameType_field_byte_84;
};
#pragma pack(pop)

struct GameTypePreferencesStruct
{
    uint32_t  idxMPMode;
    uint32_t  idxScenario;
    int32_t   GameSpeed;
    int32_t   Credits;
    int32_t   UnitCount;
    bool      ShortGame;
    bool      SuperWeapons;
    bool      BuildOffAlly;
    bool      MCVRepacks;
    bool      CratesAppear;
    uint32_t  GameTypePreferencesStruct_field_1C[0x18];
};

struct GameModeOptionsClass
{
    // TODO: complete GameModeOptionsClass (AICount, players, starting credit, etc.)
    int32_t   GameSpeed;
    int32_t   Credits;
    int32_t   UnitCount;
    bool      ShortGame;
    bool      SuperWeaponsAllowed;
    bool      BuildOffAlly;
    bool      MCVRedeploys;
    bool      CratesAppear;
    bool      AlliesAllowed;
    bool      FogOfWar;
    bool      CaptureTheFlag;
    uint32_t  AICount;
    uint32_t  PlayerCount;
};

class SessionClass
{
public:
    static SessionClass* Instance;

    GameMode                     GameMode;
    MPGameModeClass*             MPGameMode;
    uint32_t                     SessionClass_field_08;
    uint32_t                     SessionClass_field_0C;
    uint32_t                     SessionClass_field_10;
    uint32_t                     SessionClass_field_14;
    GameModeOptionsClass         Config;
    uint32_t                     UniqueID;
    char                         Handle[20];
    int32_t                      PlayerColor;
    uint32_t                     SessionClass_field_160;
    uint32_t                     SessionClass_field_164;
    uint32_t                     SessionClass_field_168;
    uint32_t                     SessionClass_field_16C;
    uint32_t                     SessionClass_field_170;
    int32_t                      idxSide;
    int32_t                      idxSide2;
    int32_t                      Color;
    int32_t                      Color2;
    int32_t                      Side;
    int32_t                      Side2;
    GameTypePreferencesStruct    SkirmishPreferences;
    GameTypePreferencesStruct    LANPreferences;
    GameTypePreferencesStruct    WOLPreferences;
    bool                         MuteSWLaunches;
    uint8_t                      SessionClass_field_304[4];
    bool                         WOLLimitResolution;
    int32_t                      LastNickSlot;
    uint8_t                      SessionClass_field_310[0x398];
    char                         ScenarioFilename[0x202];
    uint8_t                      SessionClass_field_8AA[0x1F62];
    DynamicVectorClass<NodeNameType*> UnknownVector_280C;
    DynamicVectorClass<NodeNameType*> UnknownVector_2824;
    DynamicVectorClass<NodeNameType*> StartSpots;
    uint8_t                      SessionClass_field_2854[0x884];
    bool                         CurrentlyInGame;

    // design: no binary equivalent found in IDA
    bool IsCampaign() const;
    // unmatched: no callgraph reference and no git history record
    bool IsSkirmish() const;
    bool IsMultiplayer() const;

    // TODO: complete SessionClass members

protected:
    SessionClass() noexcept; // 0x6970A0
    ~SessionClass() noexcept;
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int initLAN(int a1, int a2, int a3);  // 0x540dc0 -- SessionClass::initLAN
    int initInternet();  // 0x540e70 -- SessionClass::initInternet
    void* Load();  // 0x552cc0 -- SessionClass::Load
    bool LoadGameSession(int a1, int a2);  // 0x5adf20 -- SessionClass::LoadGameSession
    int LoadMapSelection(int a1);  // 0x5ceef0 -- SessionClass::LoadMapSelection
    void loadSettings();  // 0x5d0070 -- SessionClass::loadSettings
    int initPlayers();  // 0x5e64c0 -- SessionClass::initPlayers
    int BuildLobbyPlayerList();  // 0x663b40 -- SessionClass::BuildLobbyPlayerList
    void* GetEntry(int a1);  // 0x691500 -- SessionClass::GetEntry
    int SetField();  // 0x6915d0 -- SessionClass::SetField
    int GetPlayerSide();  // 0x696f10 -- SessionClass::GetPlayerSide
    int GetOption();  // 0x696f50 -- SessionClass::GetOption
    int GetOption2();  // 0x696f70 -- SessionClass::GetOption2
    int SetPlayerOption(int a1);  // 0x696f90 -- SessionClass::SetPlayerOption
    int SetPlayerColor(int a1);  // 0x696fc0 -- SessionClass::SetPlayerColor
    int SetOption(int a1);  // 0x696ff0 -- SessionClass::SetOption
    int SetOption2(int a1);  // 0x697020 -- SessionClass::SetOption2
    int CreateConnections();  // 0x697b70 -- SessionClass::CreateConnections
    int IsValidHouse(int a1);  // 0x697e70 -- SessionClass::IsValidHouse
    void* LoadMissionList();  // 0x699980 -- SessionClass::LoadMissionList
    void* ParseGameInfo(int a1, int a2, int a3, int a4, int a5, int a6, int a7);  // 0x69a980 -- SessionClass::ParseGameInfo
    int AssignSide(int a1, int a2);  // 0x69b760 -- SessionClass::AssignSide
    int AssignColor(int a1, int a2);  // 0x69b7e0 -- SessionClass::AssignColor
    int GetGameSpeed();  // 0x69bbe0 -- SessionClass::GetGameSpeed
    void SetupNetwork();  // 0x69bd60 -- SessionClass::SetupNetwork
    void ddtor();  // 0x69c4a0 -- SessionClass::ddtor
    int Write(int a1);  // 0x69c4d0 -- SessionClass::Write
    int Seek(int a1);  // 0x69c4f0 -- SessionClass::Seek
    void* QueryInterface(int a1);  // 0x69c6c0 -- SessionClass::QueryInterface
    int AddRef(int a1);  // 0x69c710 -- SessionClass::AddRef
    int addPlayer(int a1, int a2);  // 0x69c750 -- SessionClass::addPlayer
    void removePlayer();  // 0x69c800 -- SessionClass::removePlayer
    int findPlayer(int a1);  // 0x69c830 -- SessionClass::findPlayer
    int updatePlayer(int a1);  // 0x69c870 -- SessionClass::updatePlayer
    int Release(int a1, int a2);  // 0x69c890 -- SessionClass::Release
    int Read(int a1);  // 0x69c940 -- SessionClass::Read
    void* validateGame(int a1);  // 0x69d460 -- SessionClass::validateGame
    int RemoveTeam(int a1);  // 0x5d1d80 -- Session::RemoveTeam
    int PrepareGame();  // 0x5e74e0 -- Session::PrepareGame
    int StartGame();  // 0x5ed370 -- Session::StartGame
    int GetPlayerOption();  // 0x69b700 -- Session::GetPlayerOption
    // === SYMBOL-ANCHOR (END) ===
};

} // namespace gamemd
