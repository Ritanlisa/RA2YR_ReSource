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
    bool IsAllocated;  // 0xD
    unsigned int unknown_0C;  // 0x12
    unsigned int unknown_10;  // 0x16
    char Config[28];  // 0x18
    unsigned char u8_1A;  // 0x1A
    unsigned int u32_1C;  // 0x1C
    unsigned int u32_20;  // 0x20
    void* q024;  // 0x24
    void * ptr_28;  // 0x28
    void* q02C;  // 0x2C
    void* q030;  // 0x30
    char Handle;  // 0x38
    unsigned int u32_3C;  // 0x3C
    void * q040;  // 0x40
    unsigned int u32_48;  // 0x48
    unsigned int u32_49;  // 0x49
    unsigned int u32_4B;  // 0x4B
    int PlayerColor;  // 0x4C (G57w18j4: blob->scalar, member_lookup int@76; raw fn_5D scalar compare)
    unsigned int u32_4F;  // 0x4F
    unsigned int u32_50;  // 0x50
    void* ptr_53;  // 0x53
    unsigned int u32_54;  // 0x54
    CampaignClass* q058;  // 0x58
    unsigned int u32_5B;  // 0x5B
    unsigned char q05C;  // 0x5C
    unsigned int u32_5F;  // 0x5F
    unsigned int q060;  // 0x60
    void* ptr_63;  // 0x63
    unsigned int u32_64;  // 0x64
    CampaignClass * ptr_67;  // 0x67
    CampaignClass * q068;  // 0x68
    unsigned int u32_70;  // 0x70
    unsigned int u32_80;  // 0x80
    unsigned int u32_84;  // 0x84
    unsigned int u32_88;  // 0x88
    unsigned char q08C;  // 0x8C
    unsigned char q098;  // 0x98
    RandomStruct* q0AC;  // 0xAC
    unsigned int u32_D0;  // 0xD0
    unsigned int u32_D4;  // 0xD4
    unsigned int u32_D8;  // 0xD8
    char q0E4[4];  // 0xE4
    unsigned int q100;  // 0x100
    CampaignClass * q104;  // 0x104
    unsigned int u32_108;  // 0x108
    unsigned int u32_110;  // 0x110
    unsigned int q114;  // 0x114
    unsigned int q128;  // 0x128
    unsigned int q130;  // 0x130
    unsigned char q140;  // 0x140
    unsigned int q144;  // 0x144
    unsigned int q150;  // 0x150
    unsigned char q154;  // 0x154
    int unknown_160;  // 0x160 (G57W14E1 til supply)
    int unknown_16C;  // 0x16C (G57W14E1 til supply)
    int idxSide;  // 0x174
    int idxSide2;  // 0x178
    int Color;  // 0x17C
    int Color2;  // 0x180
    int Side;  // 0x184
    int Side2;  // 0x188
    char SkirmishPreferences[124];  // 0x18C
    unsigned int u32_19C;  // 0x19C
    unsigned int u32_1B8;  // 0x1B8
    char q258[4];  // 0x258
    unsigned int q264;  // 0x264
    int q280;  // 0x280
    char WOLPreferences[124];  // 0x284
    unsigned int u32_288;  // 0x288
    unsigned int u32_294;  // 0x294
    unsigned int u32_2BC;  // 0x2BC
    unsigned int q324;  // 0x324
    unsigned char q340;  // 0x340
    char q520[4];  // 0x520
    unsigned int u32_690;  // 0x690
    char unknown_8AA[8034];  // 0x8AA (G57W14E1 til supply)
    unsigned int StartSpots;  // 0x2828
    bool CurrentlyInGame;  // 0x30D8
    unsigned int *__pad_50;
    unsigned int unknown_14;
    void* unknown_08;  // 0x0 (no offset truth)
// --- flat members (END) ---
    int GetPlayerColorScheme();  // G57w19k2 C2661 supply (raw thiscall form; arity per verbatim raw call sites)
    AbstractClass * * BuildLobbyPlayerList();
    AbstractClass * * LoadMapSelection(char **a1);
    AbstractClass * * LoadMissionList();
    CampaignClass * * loadSettings();
    Coord * * BuildLaunchString();
    ObjectClass * * ParseGameInfo(char * Source, void * aP2, void * aP3, void * aP4, const char * a5, void * aP6, int a8);
    SessionClass();
    TypeList_flat * QueryInterface(char a2);
    VectorClass_flat * validateGame(char a2);
    char AddRef(int a2);
    char GetGameSpeed();
    char Release(int a2, unsigned int * a3);
    char addPlayer(int a2, unsigned int * a3);
    int AssignColor(int a2, char aP2);
    int AssignSide(int a2, char aP2);
    int CreateConnections();
    int Destruct();
    int GetOption();
    static int GetOption(int *aP1);  // G42.33 b3 static-form sync
    int GetOption2();
    int GetPlayerColor();
    static int GetPlayerColor(void *aP1);  // G42.33 b3 static-form sync
    int GetPlayerSide();
    static int GetPlayerSide(int *aP1);  // G42.33 b3 static-form sync
    int  IsValidHouse(void * a2);
    MixFileClass * LoadGameSession(int aP1, const char **aP2);
    int Read(unsigned int * a2, void *a2_2);
    int Seek(int a2, void *a2_2, void *a3);
    int SetField();
    int SetOption(int aP1);
    static int SetOption(int *aP1, int aP2);  // G42.33 b3 static-form sync
    int SetOption2(int aP1);
    int SetPlayerColor(int a2);
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
    void ddtor(void *a1);  // G42.40c truth 0x69C4A0: void __thiscall ddtor(this)
    void removePlayer();
    int FindObjectCell(TechnoClass * aP1, char aP2);
    int IsAlliedWithObjectSimpleHouse(unsigned char * a2);
    unsigned int * FindNearestObjectAtCell(unsigned int * a2);
    void * DrawObject(void ** Block, char a2);
    void* * CalculateObjectPlacementPosition(int *a2);
    void ** RemoveObjectArray();
    int Unlink();
    char CheckState(IUnknown * aP1, int a3);
    int LoadObject(ObjectClass * aP1, int aP1a);
    int SaveObject(TechnoTypeClass * aP0, int * a1, int aP2);
    int ddtor(int a1, unsigned int * a2);
    SessionClass * DtorWithDelete(void ** Block, char a2);
    SessionClass * * Constructor(int aP1, unsigned int * a2, ReferenceCounted * aP3, const char ** a4, ReferenceCounted * aP5);
    ObjectClass * * ParseGameInfo(wchar_t * Destination, char * Source, CampaignScore * aP2, CCINIClass * aP3, CampaignScore * aP4, const char * a5, CampaignScore * aP6, int a8);
    static unsigned int GetPlayerColorScheme(ObjectClass * aP0);
    TypeList_flat * QueryInterface(unsigned int * Block, char a2);
    VectorClass_flat * validateGame(unsigned int * Block, char a2);
    unsigned int q_307A;  // +0x307A flat supply (three-ban reform)
    unsigned int q_307E;  // +0x307E flat supply (three-ban reform)
    unsigned int q_3082;  // +0x3082 flat supply (three-ban reform)
    unsigned int q_3086;  // +0x3086 flat supply (three-ban reform)
    char unknown_2854[2180];  // 0x2854 (W13A til SessionClass size 12508 tail; compile-stride carrier, appended at end)
};

} // namespace gamemd
