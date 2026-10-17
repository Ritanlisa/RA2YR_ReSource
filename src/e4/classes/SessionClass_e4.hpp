// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

// G42.33: under GAMEMD_TREE_UNIVERSE the e4 fwd for AbstractClass is
// suppressed (tree owns it as ra2::game::AbstractClass). Bridge the name so
// the pointer members below resolve; guarded to keep non-tree TUs on the
// e4-local fwd.
#ifdef GAMEMD_TREE_UNIVERSE
namespace ra2 { namespace game { class AbstractClass; } }
namespace gamemd {
#ifndef GAMEMD_USING_AbstractClass
#define GAMEMD_USING_AbstractClass
// G57c4: using-bridge dropped -- native flat gamemd::AbstractClass
// carrier is the truth in e4 TUs (C2874).
#endif
} // namespace gamemd
#endif // GAMEMD_TREE_UNIVERSE

namespace gamemd {
struct MPGameModeClass;  // fix_fwd_type_supply
struct CampaignClass;  // fix_fwd_type_supply
struct RandomStruct;  // fix_fwd_type_supply
struct IPXManagerClass;  // fix_fwd_type_supply
struct Coord;  // fix_fwd_type_supply
struct TypeList_flat;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct MixFileClass;  // fix_fwd_type_supply

struct SessionClass {
    char GameMode[4];  // 0x0
    MPGameModeClass* MPGameMode;  // 0x4
    unsigned int SessionClass_field_08;  // 0x8
    unsigned int SessionClass_field_0C;  // 0xC
    unsigned int SessionClass_field_10;  // 0x10
    unsigned int unknown_14;  // 0x14
    char Config[28];  // 0x18
    unsigned int UniqueID;  // 0x34
    int Handle[5];  // 0x38
    int PlayerColor;  // 0x4C
    char __pad_50[272];  // 0x50
    int unknown_160;  // 0x160
    unsigned int SessionClass_field_164;  // 0x164
    unsigned int SessionClass_field_168;  // 0x168
    AbstractClass* unknown_16C;  // 0x16C
    unsigned int SessionClass_field_170;  // 0x170
    int idxSide;  // 0x174
    int idxSide2;  // 0x178
    int Color;  // 0x17C
    int Color2;  // 0x180
    int Side;  // 0x184
    int Side2;  // 0x188
    char SkirmishPreferences[124];  // 0x18C
    char LANPreferences[124];  // 0x208
    char WOLPreferences[124];  // 0x284
    int MuteSWLaunches;  // 0x300
    unsigned int SessionClass_field_304;  // 0x304
    bool WOLLimitResolution;  // 0x308
    unsigned char __pad_309;  // 0x309
    char __pad_30A[2];  // 0x30A
    char LastNickSlot[4];  // 0x30C
    char SessionClass_field_310[920];  // 0x310
    char ScenarioFilename[514];  // 0x6A8
    char unknown_8AA[8034];  // 0x8AA
    char UnknownVector_280C[24];  // 0x280C
    char UnknownVector_2824[24];  // 0x2824
    char __pad_283C[24];  // 0x283C
    char unknown_2854[2180];  // 0x2854
    bool CurrentlyInGame;  // 0x30D8
    char __pad_30D9[3];  // 0x30D9
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int GetPlayerColorScheme();
    AbstractClass * * BuildLobbyPlayerList();
    AbstractClass * * LoadMapSelection(char **a1);
    AbstractClass * * LoadMissionList();
    CampaignClass * * loadSettings();
    Coord * * BuildLaunchString();
    ObjectClass * * ParseGameInfo(char * Source, void * aP2, void * aP3, void * aP4, const char * a5, void * aP6, int a8);
    SessionClass();
    static void * Constructor(void *aP1);
    TypeList_flat * QueryInterface(char a2);
    VectorClass_flat * validateGame(char a2);
    char AddRef(int a2);
    char GetGameSpeed(void *a1 = 0);
    char Release(int a2, unsigned int * a3);
    char addPlayer(int a2, unsigned int * a3);
    int AssignColor(int a2, char aP2);
    int AssignSide(int a2, char aP2);
    int CreateConnections();
    int Destruct(void *a1 = 0);
    int GetOption();
    int GetOption(void *a1 = 0);  // G42.33 b3 static-form sync
    int GetOption2();
    int GetPlayerColor();
    int GetPlayerColor(void *a1 = 0);  // G42.33 b3 static-form sync
    int GetPlayerSide();
    int GetPlayerSide(void *a1 = 0);  // G42.33 b3 static-form sync
    int  IsValidHouse(void * a2);
    MixFileClass * LoadGameSession(int aP1, const char **aP2);
    int Read(unsigned int * a2, void *a2_2, void *a1 = 0);
    int Seek(int a2, void *a2_2, void *a3);
    int SetField(void *a1 = 0, void *a2 = 0);
    int SetOption(int aP1);
    int SetOption(int aP1, void *a2 = 0);  // G42.33 b3 static-form sync
    int SetOption2(int aP1);
    int SetPlayerColor(int a2, void *a2_1 = 0);
    int SetPlayerOption(int aP1);
    int  findPlayer(unsigned int * a2);
    int initInternet();
    int initLAN(int a2, wchar_t * Source, unsigned int * a4);
    unsigned int * GetEntry(unsigned int *aP1);
    MixFileClass * Load(void *a1, void *a2, void *a3, void *a4);
    unsigned int * saveSettings();
    unsigned int Write(int a2);
    unsigned int initPlayers();
    unsigned int updatePlayer(int a2);
    void ** ResetSystemWOL_Reset(char a2);
    void SetInstance();
    void SetupNetwork();
    void ddtor(void *a1 = 0);
    void removePlayer();
    int FindObjectCell(TechnoClass * aP1, char aP2);
    int IsAlliedWithObjectSimpleHouse(unsigned char * a2);
    unsigned int * FindNearestObjectAtCell(unsigned int * a2);
    void * DrawObject(void ** Block, char a2);
    void* * CalculateObjectPlacementPosition(int *a2);
    void ** RemoveObjectArray(void *a1 = 0);
    int Unlink(void *a1 = 0);
    char CheckState(IUnknown * aP1, int a3);
    int LoadObject(ObjectClass * aP1, int aP1a);
    int SaveObject(TechnoTypeClass * aP0, int * a1, int aP2);
    int ddtor(int a1, unsigned int * a2);
    SessionClass * DtorWithDelete(void ** Block, char a2);
    SessionClass * * Constructor(int aP1, unsigned int * a2, ReferenceCounted * aP3, const char ** a4, ReferenceCounted * aP5);
    wchar_t * ParseGameInfo();
    static unsigned int GetPlayerColorScheme(ObjectClass * aP0);
    TypeList_flat * QueryInterface(unsigned int * Block, char a2);
    VectorClass_flat * validateGame(unsigned int * Block, char a2);
};

} // namespace gamemd
