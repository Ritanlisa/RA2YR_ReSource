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
// --- flat members (BEGIN) ---
    char GameMode[4];  // 0x0
    MPGameModeClass* MPGameMode;  // 0x4
    unsigned int SessionClass_field_08;  // 0x8
    unsigned int SessionClass_field_0C;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned int SessionClass_field_10;  // 0x10
    unsigned int unknown_0C;  // 0x12
    unsigned int SessionClass_field_14;  // 0x14
    unsigned int unknown_10;  // 0x16
    char Config[28];  // 0x18
    AbstractClass * ptr_28;  // 0x28
    unsigned int UniqueID;  // 0x34
    char Handle;  // 0x38
    CampaignClass * ptr_44;  // 0x44
    char PlayerColor[4];  // 0x4C
    void* ptr_53;  // 0x53
    void* ptr_63;  // 0x63
    CampaignClass * ptr_67;  // 0x67
    AbstractClass * ptr_57;  // 0x87
    unsigned int SessionClass_field_160;  // 0x160
    unsigned int SessionClass_field_164;  // 0x164
    unsigned int SessionClass_field_168;  // 0x168
    unsigned int SessionClass_field_16C;  // 0x16C
    unsigned int SessionClass_field_170;  // 0x170
    char idxSide[4];  // 0x174
    char idxSide2[4];  // 0x178
    char Color[4];  // 0x17C
    char Color2[4];  // 0x180
    char Side[4];  // 0x184
    char Side2[4];  // 0x188
    char SkirmishPreferences[124];  // 0x18C
    char LANPreferences[124];  // 0x208
    char WOLPreferences[124];  // 0x284
    bool MuteSWLaunches;  // 0x300
    unsigned char SessionClass_field_304;  // 0x304
    bool WOLLimitResolution;  // 0x308
    char LastNickSlot[4];  // 0x30C
    unsigned char SessionClass_field_310;  // 0x310
    IPXManagerClass * ptr_398;  // 0x398
    char ScenarioFilename;  // 0x6A8
    unsigned char SessionClass_field_8AA;  // 0x8AA
    unsigned char UnknownVector_280C;  // 0x280C
    unsigned char UnknownVector_2824;  // 0x2824
    unsigned int StartSpots;  // 0x2828
    unsigned char SessionClass_field_2854;  // 0x2854
    bool CurrentlyInGame;  // 0x30D8
// --- flat members (END) ---
    int PlayerColor;  // 0x4C (G57w18j4: blob->scalar, member_lookup int@76; raw fn_5D scalar compare)
    int unknown_160;  // 0x160 (G57W14E1 til supply)
    int unknown_16C;  // 0x16C (G57W14E1 til supply)
    char unknown_8AA[8034];  // 0x8AA (G57W14E1 til supply)
    void* unknown_08;  // 0x0 (no offset truth)
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
    static int GetOption(int *aP1);  // G42.33 b3 static-form sync
    int GetOption2();
    int GetPlayerColor();
    static int GetPlayerColor(void *aP1);  // G42.33 b3 static-form sync
    int GetPlayerSide();
    static int GetPlayerSide(int *aP1);  // G42.33 b3 static-form sync
    int  IsValidHouse(void * a2);
    MixFileClass * LoadGameSession(int aP1, const char **aP2);
    int Read(unsigned int * a2, void *a2_2, void *a1 = 0);
    int Seek(int a2, void *a2_2, void *a3);
    int SetField(void *a1 = 0, void *a2 = 0);
    int SetOption(int aP1);
    static int SetOption(int *aP1, int aP2);  // G42.33 b3 static-form sync
    int SetOption2(int aP1);
    int SetPlayerColor(int a2, void *a1 = 0);
    int SetPlayerOption(int aP1);
    int  findPlayer(unsigned int * a2);
    int initInternet();
    int initLAN(int a2, wchar_t * Source, unsigned int * a4);
    unsigned int * GetEntry(unsigned int *aP1);
    MixFileClass * Load(void *a1, void *a2, void *a3, void *a4);
    unsigned int * saveSettings();
    static int GetPlayerColorScheme(unsigned int a1);
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
    unsigned int q_307A;  // +0x307A flat supply (three-ban reform)
    unsigned int q_307E;  // +0x307E flat supply (three-ban reform)
    unsigned int q_3082;  // +0x3082 flat supply (three-ban reform)
    unsigned int q_3086;  // +0x3086 flat supply (three-ban reform)
    char unknown_2854[2180];  // 0x2854 (W13A til SessionClass size 12508 tail; compile-stride carrier, appended at end)
    char __pad_50[272];  // 0x50 (ml)
    int unknown_14;  // 0x14 (ml)
};

} // namespace gamemd
