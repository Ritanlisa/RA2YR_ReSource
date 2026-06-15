#pragma once

#include <cstdint>
#include <windows.h>

#include "..\core\enums.hpp"
#include "..\core\vector.hpp"
#include "..\fundamentals.hpp"

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
    uint32_t    sessionField_6B;
    int32_t     HouseIndex;
    int32_t     Time;
    uint32_t    sessionField_77;
    int32_t     Clan;
    uint32_t    sessionField_7F;
    uint8_t     sessionField_byte_83;
    uint8_t     sessionField_byte_84;
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
    uint32_t  sessionField_fields[0x18];
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
    uint32_t                     sessionField_08;
    uint32_t                     sessionField_0C;
    uint32_t                     sessionField_10;
    uint32_t                     sessionField_14;
    GameModeOptionsClass         Config;
    uint32_t                     UniqueID;
    char                         Handle[20];
    int32_t                      PlayerColor;
    uint32_t                     sessionField_160;
    uint32_t                     sessionField_164;
    uint32_t                     sessionField_168;
    uint32_t                     sessionField_16C;
    uint32_t                     sessionField_170;
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
    uint8_t                      sessionField_304[4];
    bool                         WOLLimitResolution;
    int32_t                      LastNickSlot;
    uint8_t                      sessionField_310[0x398];
    char                         ScenarioFilename[0x202];
    uint8_t                      sessionField_8AA[0x1F62];
    DynamicVectorClass<NodeNameType*> UnknownVector_280C;
    DynamicVectorClass<NodeNameType*> UnknownVector_2824;
    DynamicVectorClass<NodeNameType*> StartSpots;
    uint8_t                      sessionField_2854[0x884];
    bool                         CurrentlyInGame;

    bool IsCampaign()  const { return GameMode == GameMode::Campaign; }
    bool IsSkirmish()  const { return GameMode == GameMode::Skirmish; }
    bool IsMultiplayer() const { return GameMode == GameMode::Internet || GameMode == GameMode::Skirmish; }

    // TODO: complete SessionClass members

protected:
    SessionClass() noexcept;
    ~SessionClass() noexcept;
};

} // namespace gamemd
