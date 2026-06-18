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

enum class GameOption
{
    GameSpeed      = 0,
    StartingCredits = 1,
    UnitCount      = 2,
    ShortGame      = 3,
    SuperWeapons   = 4,
    BuildOffAlly   = 5,
    MCVRedeploys   = 6,
    Crates         = 7,
    FogOfWar       = 8,
    AlliesAllowed  = 9,
    CaptureTheFlag = 10,
    AICount        = 11,
    PlayerCount    = 12,
};

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

    bool IsCampaign()  const { return GameMode == GameMode::Campaign; }
    bool IsSkirmish()  const { return GameMode == GameMode::Skirmish; }
    bool IsMultiplayer() const { return GameMode == GameMode::Internet || GameMode == GameMode::Skirmish; }

    // IDA-confirmed methods
    void loadSettings(CCINIClass* ini);                     // 0x5D0070
    void saveSettings(CCINIClass* ini);                     // 0x5D39D0
    void initPlayers();                                      // 0x5E64C0
    NodeNameType* GetEntry(int index);                       // 0x691500
    void SetField(int index, int field_id, int value);       // 0x6915D0
    int  GetOption(GameOption opt);                          // 0x696F50
    int  GetOption2(GameOption opt);                         // 0x696F70
    void SetPlayerOption(int index, GameOption opt, int value); // 0x696F90
    void SetPlayerColor(int index, int color);               // 0x696FC0
    void SetOption(GameOption opt, int value);               // 0x696FF0
    void SetOption2(GameOption opt, int value);              // 0x697020
    bool IsValidHouse(int houseIdx);                         // 0x697E70
    int  GetPlayerColorScheme(int playerIdx);                // 0x69A310
    void AssignSide(int playerIdx, int sideIdx);             // 0x69B760
    void AssignColor(int playerIdx, int colorIdx);           // 0x69B7E0
    int  GetGameSpeed();                                     // 0x69BBE0

protected:
    SessionClass() noexcept;
    ~SessionClass() noexcept;
};

} // namespace gamemd
