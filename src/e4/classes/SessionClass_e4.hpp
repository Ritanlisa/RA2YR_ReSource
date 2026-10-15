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
    void* ptr_53;  // 0x53
    void* ptr_63;  // 0x63
    CampaignClass * ptr_67;  // 0x67
    AbstractClass * ptr_57;  // 0x87
    unsigned int SessionClass_field_160;  // 0x160
    unsigned int SessionClass_field_164;  // 0x164
    unsigned int SessionClass_field_168;  // 0x168
    AbstractClass* SessionClass_field_16C;  // 0x16C [X30:type_map]
    unsigned int SessionClass_field_170;  // 0x170
    int idxSide;  // 0x174 [X30:type_map]
    int idxSide2;  // 0x178 [X30:type_map]
    int Color;  // 0x17C [X30:type_map]
    int Color2;  // 0x180 [X30:type_map]
    int Side;  // 0x184 [X30:type_map]
    void* Side2;  // 0x188 [X30:type_map]
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
    AbstractClass* unknown_16C;  // 0x16C (G57W14E1 til supply) [X30:type_map]
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
    unsigned int q_307A;  // +0x307A flat supply (three-ban reform)
    unsigned int q_307E;  // +0x307E flat supply (three-ban reform)
    unsigned int q_3082;  // +0x3082 flat supply (three-ban reform)
    unsigned int q_3086;  // +0x3086 flat supply (three-ban reform)
    char unknown_2854[2180];  // 0x2854 (W13A til SessionClass size 12508 tail; compile-stride carrier, appended at end)
    char __pad_50[272];  // 0x50 (ml)
    int unknown_14;  // 0x14 (ml)

    unsigned char __pad_050;  // X10 supply (csp_canon_members)
    unsigned char __pad_057;  // X10 supply (csp_canon_members)
    unsigned char __pad_283C;  // X10 supply (csp_canon_members)
    unsigned char __pad_89AC;  // X10 supply (member_lookup)
    void* q030;  // X10 supply (member_lookup)
    CampaignClass* q058;  // X10 supply (member_lookup)
    unsigned char q05C;  // X10 supply (member_lookup)
    unsigned int q060;  // X10 supply (member_lookup)
    unsigned char q228[4];  /* Tactical */  // X10 supply (member_lookup)
    CampaignClass * q339;  // X10 supply (member_lookup)
    unsigned int q8D0;  // X10 supply (member_lookup)
    unsigned int q8FC;  // X10 supply (member_lookup)
    unsigned int q8FD;  // X10 supply (member_lookup)
    unsigned char q908;  // X10 supply (member_lookup)
    unsigned int q928;  // X10 supply (member_lookup)
    unsigned int u32_144;  // X10 supply (member_lookup)
    unsigned int u32_15C;  // X10 supply (member_lookup)
    unsigned int u32_190;  // X10 supply (member_lookup)
    unsigned int u32_194;  // X10 supply (member_lookup)
    unsigned int u32_198;  // X10 supply (member_lookup)
    unsigned int u32_19F0;  // X10 supply (member_lookup)
    unsigned int u32_19F4;  // X10 supply (member_lookup)
    unsigned int u32_1A20;  // X10 supply (member_lookup)
    unsigned int u32_1A24;  // X10 supply (member_lookup)
    unsigned int u32_1A28;  // X10 supply (member_lookup)
    unsigned int u32_1A4;  // X10 supply (member_lookup)
    unsigned int u32_1A70;  // X10 supply (member_lookup)
    unsigned int u32_1A74;  // X10 supply (member_lookup)
    unsigned int u32_1C;  // X10 supply (member_lookup)
    unsigned int u32_1EDA;  // X10 supply (member_lookup)
    unsigned int u32_1FBC;  // X10 supply (member_lookup)
    unsigned int u32_20C;  // X10 supply (member_lookup)
    unsigned int u32_210;  // X10 supply (member_lookup)
    unsigned int u32_214;  // X10 supply (member_lookup)
    unsigned int u32_218;  // X10 supply (member_lookup)
    unsigned int u32_2340;  // X10 supply (member_lookup)
    unsigned int u32_2354;  // X10 supply (member_lookup)
    unsigned int u32_23C0;  // X10 supply (member_lookup)
    unsigned int u32_23C4;  // X10 supply (member_lookup)
    unsigned int u32_23D8;  // X10 supply (member_lookup)
    unsigned int u32_24;  // X10 supply (member_lookup)
    unsigned int u32_25D8;  // X10 supply (member_lookup)
    unsigned int u32_2808;  // X10 supply (member_lookup)
    unsigned int u32_2810;  // X10 supply (member_lookup)
    unsigned int u32_2814;  // X10 supply (member_lookup)
    unsigned int u32_281C;  // X10 supply (member_lookup)
    unsigned int u32_2820;  // X10 supply (member_lookup)
    unsigned int u32_282C;  // X10 supply (member_lookup)
    unsigned int u32_2834;  // X10 supply (member_lookup)
    unsigned int u32_2838;  // X10 supply (member_lookup)
    unsigned int u32_2840;  // X10 supply (member_lookup)
    unsigned int u32_2844;  // X10 supply (member_lookup)
    unsigned int u32_284C;  // X10 supply (member_lookup)
    unsigned int u32_2850;  // X10 supply (member_lookup)
    unsigned int u32_287C;  // X10 supply (member_lookup)
    unsigned int u32_288;  // X10 supply (member_lookup)
    unsigned int u32_2880;  // X10 supply (member_lookup)
    unsigned int u32_2884;  // X10 supply (member_lookup)
    unsigned int u32_2888;  // X10 supply (member_lookup)
    unsigned int u32_288C;  // X10 supply (member_lookup)
    unsigned int u32_2890;  // X10 supply (member_lookup)
    unsigned int u32_2894;  // X10 supply (member_lookup)
    unsigned int u32_2898;  // X10 supply (member_lookup)
    unsigned int u32_289C;  // X10 supply (member_lookup)
    unsigned int u32_28C;  // X10 supply (member_lookup)
    unsigned int u32_28F8;  // X10 supply (member_lookup)
    unsigned int u32_28FC;  // X10 supply (member_lookup)
    unsigned int u32_290;  // X10 supply (member_lookup)
    unsigned int u32_2900;  // X10 supply (member_lookup)
    unsigned int u32_2904;  // X10 supply (member_lookup)
    unsigned int u32_290C;  // X10 supply (member_lookup)
    unsigned int u32_2910;  // X10 supply (member_lookup)
    unsigned int u32_2914;  // X10 supply (member_lookup)
    unsigned int u32_2918;  // X10 supply (member_lookup)
    unsigned int u32_291C;  // X10 supply (member_lookup)
    unsigned int u32_2924;  // X10 supply (member_lookup)
    unsigned int u32_2928;  // X10 supply (member_lookup)
    unsigned int u32_292C;  // X10 supply (member_lookup)
    unsigned int u32_2930;  // X10 supply (member_lookup)
    unsigned int u32_2934;  // X10 supply (member_lookup)
    unsigned int u32_293C;  // X10 supply (member_lookup)
    unsigned int u32_294;  // X10 supply (member_lookup)
    unsigned int u32_2940;  // X10 supply (member_lookup)
    unsigned int u32_2964;  // X10 supply (member_lookup)
    unsigned int u32_2984;  // X10 supply (member_lookup)
    unsigned int u32_2A4;  // X10 supply (member_lookup)
    unsigned int u32_2FF0;  // X10 supply (member_lookup)
    unsigned int u32_2FF4;  // X10 supply (member_lookup)
    unsigned int u32_301C;  // X10 supply (member_lookup)
    unsigned int u32_3048;  // X10 supply (member_lookup)
    unsigned int u32_306E;  // X10 supply (member_lookup)
    unsigned int u32_3070;  // X10 supply (member_lookup)
    unsigned int u32_3074;  // X10 supply (member_lookup)
    unsigned int u32_308C;  // X10 supply (member_lookup)
    unsigned int u32_3094;  // X10 supply (member_lookup)
    unsigned int u32_309C;  // X10 supply (member_lookup)
    unsigned int u32_30A0;  // X10 supply (member_lookup)
    unsigned int u32_30A4;  // X10 supply (member_lookup)
    unsigned int u32_30A8;  // X10 supply (member_lookup)
    unsigned int u32_30AC;  // X10 supply (member_lookup)
    unsigned int u32_30B0;  // X10 supply (member_lookup)
    unsigned int u32_30B4;  // X10 supply (member_lookup)
    unsigned int u32_30B8;  // X10 supply (member_lookup)
    unsigned int u32_30BC;  // X10 supply (member_lookup)
    unsigned int u32_30C0;  // X10 supply (member_lookup)
    unsigned int u32_30CC;  // X10 supply (member_lookup)
    unsigned int u32_30D0;  // X10 supply (member_lookup)
    unsigned int u32_30D4;  // X10 supply (member_lookup)
    unsigned int u32_314;  // X10 supply (member_lookup)
    unsigned int u32_318;  // X10 supply (member_lookup)
    unsigned int u32_31C;  // X10 supply (member_lookup)
    unsigned int u32_330;  // X10 supply (member_lookup)
    unsigned int u32_334;  // X10 supply (member_lookup)
    unsigned int u32_338;  // X10 supply (member_lookup)
    unsigned int u32_39C;  // X10 supply (member_lookup)
    unsigned int u32_3A0;  // X10 supply (member_lookup)
    unsigned int u32_3C;  // X10 supply (member_lookup)
    unsigned int u32_48;  // X10 supply (member_lookup)
    unsigned int u32_4B;  // X10 supply (member_lookup)
    unsigned int u32_520;  // X10 supply (member_lookup)
    unsigned int u32_54;  // X10 supply (member_lookup)
    int u32_5B;  // X10 supply (member_lookup)
    int u32_5F;  // X10 supply (member_lookup)
    unsigned int u32_64;  // X10 supply (member_lookup)
    unsigned int u32_680;  // X10 supply (member_lookup)
    unsigned int u32_684;  // X10 supply (member_lookup)
    unsigned int u32_688;  // X10 supply (member_lookup)
    unsigned int u32_68C;  // X10 supply (member_lookup)
    unsigned int u32_690;  // X10 supply (member_lookup)
    unsigned int u32_694;  // X10 supply (member_lookup)
    unsigned int u32_698;  // X10 supply (member_lookup)
    unsigned int u32_6A0;  // X10 supply (member_lookup)
    unsigned int u32_6A4;  // X10 supply (member_lookup)
    unsigned int u32_7B60;  // X10 supply (member_lookup)
    unsigned int u32_7B64;  // X10 supply (member_lookup)
    unsigned int u32_7F00;  // X10 supply (member_lookup)
    unsigned int u32_7F04;  // X10 supply (member_lookup)
    unsigned int u32_84;  // X10 supply (member_lookup)
    unsigned int u32_870;  // X10 supply (member_lookup)
    unsigned int u32_874;  // X10 supply (member_lookup)
    unsigned int u32_878;  // X10 supply (member_lookup)
    unsigned int u32_87C;  // X10 supply (member_lookup)
    unsigned char u32_88[4];  /* String */  // X10 supply (member_lookup)
    unsigned int u32_880;  // X10 supply (member_lookup)
    unsigned int u32_8CC;  // X10 supply (member_lookup)
    unsigned int u32_8D4;  // X10 supply (member_lookup)
    unsigned int u32_8F0;  // X10 supply (member_lookup)
    unsigned int u32_8F4;  // X10 supply (member_lookup)
    unsigned int u32_8F50;  // X10 supply (member_lookup)
    unsigned int u32_8F54;  // X10 supply (member_lookup)
    unsigned int u32_8F58;  // X10 supply (member_lookup)
    unsigned int u32_8F8;  // X10 supply (member_lookup)
    unsigned int u32_900;  // X10 supply (member_lookup)
    unsigned int u32_904;  // X10 supply (member_lookup)
    unsigned int u32_A060;  // X10 supply (member_lookup)
    unsigned int u32_A064;  // X10 supply (member_lookup)
    unsigned int u32_A0C0;  // X10 supply (member_lookup)
    unsigned int u32_A0C4;  // X10 supply (member_lookup)
    unsigned int u32_A120;  // X10 supply (member_lookup)
    unsigned int u32_A124;  // X10 supply (member_lookup)
    unsigned int u32_A1E0;  // X10 supply (member_lookup)
    unsigned int u32_A420;  // X10 supply (member_lookup)
    unsigned int u32_A424;  // X10 supply (member_lookup)
    unsigned int u32_A480;  // X10 supply (member_lookup)
    unsigned int u32_A484;  // X10 supply (member_lookup)
    unsigned int u32_A4E0;  // X10 supply (member_lookup)
    unsigned int u32_A4E4;  // X10 supply (member_lookup)
    unsigned int u32_A5A0;  // X10 supply (member_lookup)
    unsigned int u32_A60;  // X10 supply (member_lookup)
    unsigned int u32_A64;  // X10 supply (member_lookup)
    unsigned int u32_A68;  // X10 supply (member_lookup)
    unsigned int u32_A6C;  // X10 supply (member_lookup)
    unsigned int u32_A70;  // X10 supply (member_lookup)
    unsigned int u32_BD20;  // X10 supply (member_lookup)
    unsigned int u32_C060;  // X10 supply (member_lookup)
    unsigned int u32_C1B0;  // X10 supply (member_lookup)
    unsigned int u32_C1E0;  // X10 supply (member_lookup)
    unsigned int u32_C240;  // X10 supply (member_lookup)
    unsigned int u32_C260;  // X10 supply (member_lookup)
    unsigned int u32_C320;  // X10 supply (member_lookup)
    int u8_19;  // X10 supply (member_lookup)
    int u8_1A;  // X10 supply (member_lookup)
    char u8_241;  // X10 supply (member_lookup)
    char u8_245;  // X10 supply (member_lookup)
    char u8_4F;  // X10 supply (member_lookup)
    unsigned char __pad_06B;  // 0x6B [X30:canon]
    unsigned char __pad_08B;  // 0x8B [X30:canon]
    unsigned char __pad_309;  // 0x309 [X30:canon]
    unsigned char __pad_30D9;  // 0x30D9 [X30:canon]
};

} // namespace gamemd
