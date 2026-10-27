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
#pragma pack(push, 1)  // X60: binary-packed layout
    char GameMode[4];  // 0x0
    MPGameModeClass * MPGameMode;  // 0x4
    unsigned int SessionClass_field_08;  // 0x8
    unsigned char SessionClass_field_0C;  // 0xC
    bool IsAllocated;  // 0xD
    char __pad_E[2];  // 0xE
    unsigned int SessionClass_field_10;  // 0x10
    unsigned int unknown_14;  // 0x14
    char Config[28];  // 0x18
    unsigned int UniqueID;  // 0x34
    int Handle[5];  // 0x38
    int PlayerColor;  // 0x4C
    char __pad_50[3];  // 0x50
    unsigned char ptr_53;  // 0x53
    unsigned short u32_54;  // 0x54
    unsigned char q056;  // 0x56
    unsigned char u8_57;  // 0x57
    char q058[3];  // 0x58
    unsigned char u32_5B;  // 0x5B
    char q05C[3];  // 0x5C
    unsigned char u32_5F;  // 0x5F
    unsigned char q060;  // 0x60
    unsigned char u8_61;  // 0x61
    char __pad_62[1];  // 0x62
    unsigned char ptr_63;  // 0x63
    char u32_64[3];  // 0x64
    CampaignClass * ptr_67;  // 0x67
    char __pad_6B[25];  // 0x6B
    char u32_84[3];  // 0x84
    unsigned char SessionClass_field_087;  // 0x87
    unsigned int u32_88;  // 0x88
    char __pad_8C[54];  // 0x8C
    unsigned int SessionClass_field_0C2;  // 0xC2
    char __pad_C6[30];  // 0xC6
    unsigned char q0E4;  // 0xE4
    unsigned char q0E5;  // 0xE5
    unsigned char q0E6;  // 0xE6
    unsigned char q0E7;  // 0xE7
    unsigned char q0E8;  // 0xE8
    char __pad_E9[23];  // 0xE9
    unsigned char SessionClass_field_100;  // 0x100
    unsigned char SessionClass_field_101;  // 0x101
    unsigned char SessionClass_field_102;  // 0x102
    unsigned char SessionClass_field_103;  // 0x103
    unsigned int SessionClass_field_104;  // 0x104
    unsigned char unknown_108;  // 0x108
    unsigned int unknown_109;  // 0x109
    char __pad_10D[53];  // 0x10D
    unsigned char SessionClass_field_142;  // 0x142
    unsigned char SessionClass_field_143;  // 0x143
    unsigned int u32_144;  // 0x144
    unsigned char u8_148;  // 0x148
    char __pad_149[18];  // 0x149
    uint8_t u8_15B;  // 0x15B
    unsigned int u32_15C;  // 0x15C
    int unknown_160;  // 0x160
    unsigned int SessionClass_field_164;  // 0x164
    unsigned int SessionClass_field_168;  // 0x168
    AbstractClass * unknown_16C;  // 0x16C
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
    char SessionClass_field_310[4];  // 0x310
    unsigned int u32_314;  // 0x314
    unsigned int u32_318;  // 0x318
    unsigned int u32_31C;  // 0x31C
    char __pad_320[16];  // 0x320
    unsigned int u32_330;  // 0x330
    unsigned int u32_334;  // 0x334
    unsigned char u32_338;  // 0x338
    unsigned int q339;  // 0x339
    char __pad_33D[91];  // 0x33D
    IPXManagerClass * ptr_398;  // 0x398
    unsigned int u32_39C;  // 0x39C
    unsigned int u32_3A0;  // 0x3A0
    char __pad_3A4[208];  // 0x3A4
    unsigned int q474;  // 0x474
    char __pad_478[168];  // 0x478
    unsigned int u32_520;  // 0x520
    char __pad_524[344];  // 0x524
    unsigned char q67C;  // 0x67C
    unsigned char q67D;  // 0x67D
    char __pad_67E[2];  // 0x67E
    unsigned int u32_680;  // 0x680
    unsigned int u32_684;  // 0x684
    unsigned char u32_688;  // 0x688
    unsigned char q689;  // 0x689
    unsigned char q68A;  // 0x68A
    char __pad_68B[1];  // 0x68B
    unsigned int u32_68C;  // 0x68C
    unsigned int u32_690;  // 0x690
    unsigned int u32_694;  // 0x694
    unsigned int u32_698;  // 0x698
    unsigned char q69C;  // 0x69C
    unsigned char q69D;  // 0x69D
    char __pad_69E[2];  // 0x69E
    unsigned int u32_6A0;  // 0x6A0
    unsigned int u32_6A4;  // 0x6A4
    char ScenarioFilename[514];  // 0x6A8
    char unknown_8AA[8034];  // 0x8AA
    char UnknownVector_280C[24];  // 0x280C
    char UnknownVector_2824[24];  // 0x2824
    char __pad_283C[4];  // 0x283C
    unsigned int u32_2840;  // 0x2840
    unsigned int u32_2844;  // 0x2844
    unsigned char q2848;  // 0x2848
    unsigned char q2849;  // 0x2849
    char __pad_284A[2];  // 0x284A
    unsigned int u32_284C;  // 0x284C
    unsigned int u32_2850;  // 0x2850
    char unknown_2854[36];  // 0x2854
    unsigned char q2878;  // 0x2878
    char __pad_2879[3];  // 0x2879
    unsigned int u32_287C;  // 0x287C
    unsigned int u32_2880;  // 0x2880
    unsigned int u32_2884;  // 0x2884
    unsigned int u32_2888;  // 0x2888
    unsigned int u32_288C;  // 0x288C
    unsigned int u32_2890;  // 0x2890
    unsigned int u32_2894;  // 0x2894
    unsigned int u32_2898;  // 0x2898
    unsigned int u32_289C;  // 0x289C
    char __pad_28A0[88];  // 0x28A0
    unsigned int u32_28F8;  // 0x28F8
    unsigned int u32_28FC;  // 0x28FC
    unsigned int u32_2900;  // 0x2900
    unsigned int u32_2904;  // 0x2904
    unsigned char q2908;  // 0x2908
    unsigned char q2909;  // 0x2909
    char __pad_290A[2];  // 0x290A
    unsigned int u32_290C;  // 0x290C
    unsigned int u32_2910;  // 0x2910
    unsigned int u32_2914;  // 0x2914
    unsigned int u32_2918;  // 0x2918
    unsigned int u32_291C;  // 0x291C
    unsigned char q2920;  // 0x2920
    unsigned char q2921;  // 0x2921
    char __pad_2922[2];  // 0x2922
    unsigned int u32_2924;  // 0x2924
    unsigned int u32_2928;  // 0x2928
    unsigned int u32_292C;  // 0x292C
    unsigned int u32_2930;  // 0x2930
    unsigned int u32_2934;  // 0x2934
    unsigned char q2938;  // 0x2938
    unsigned char q2939;  // 0x2939
    char __pad_293A[2];  // 0x293A
    unsigned int u32_293C;  // 0x293C
    unsigned int u32_2940;  // 0x2940
    char __pad_2944[32];  // 0x2944
    unsigned int u32_2964;  // 0x2964
    unsigned char q2968;  // 0x2968
    char __pad_2969[3];  // 0x2969
    unsigned int Waypoint_296C;  // 0x296C
    char __pad_2970[8];  // 0x2970
    unsigned int Waypoint_2978;  // 0x2978
    char __pad_297C[8];  // 0x297C
    unsigned short u32_2984;  // 0x2984
    char __pad_2986[2];  // 0x2986
    unsigned int Waypoint_2988;  // 0x2988
    char __pad_298C[1468];  // 0x298C
    unsigned char q2F48;  // 0x2F48
    char __pad_2F49[167];  // 0x2F49
    unsigned int u32_2FF0;  // 0x2FF0
    unsigned int u32_2FF4;  // 0x2FF4
    char __pad_2FF8[32];  // 0x2FF8
    unsigned char q3018;  // 0x3018
    char __pad_3019[3];  // 0x3019
    unsigned int u32_301C;  // 0x301C
    char __pad_3020[40];  // 0x3020
    unsigned int u32_3048;  // 0x3048
    char __pad_304C[32];  // 0x304C
    unsigned char q306C;  // 0x306C
    char __pad_306D[1];  // 0x306D
    unsigned short u32_306E;  // 0x306E
    unsigned short u32_3070;  // 0x3070
    char __pad_3072[2];  // 0x3072
    unsigned int u32_3074;  // 0x3074
    unsigned char q3078;  // 0x3078
    char __pad_3079[1];  // 0x3079
    unsigned short q_307A;  // 0x307A
    char __pad_307C[2];  // 0x307C
    unsigned int q_307E;  // 0x307E
    unsigned int q_3082;  // 0x3082
    unsigned int q_3086;  // 0x3086
    char __pad_308A[2];  // 0x308A
    unsigned int u32_308C;  // 0x308C
    unsigned char q3090;  // 0x3090
    char __pad_3091[3];  // 0x3091
    unsigned int u32_3094;  // 0x3094
    unsigned char q3098;  // 0x3098
    char __pad_3099[3];  // 0x3099
    unsigned int u32_309C;  // 0x309C
    unsigned int u32_30A0;  // 0x30A0
    unsigned int u32_30A4;  // 0x30A4
    unsigned int u32_30A8;  // 0x30A8
    unsigned int u32_30AC;  // 0x30AC
    unsigned int u32_30B0;  // 0x30B0
    unsigned int u32_30B4;  // 0x30B4
    unsigned int u32_30B8;  // 0x30B8
    unsigned int u32_30BC;  // 0x30BC
    unsigned int u32_30C0;  // 0x30C0
    char __pad_30C4[4];  // 0x30C4
    unsigned char q30C8;  // 0x30C8
    char __pad_30C9[3];  // 0x30C9
    unsigned int u32_30CC;  // 0x30CC
    unsigned int u32_30D0;  // 0x30D0
    unsigned int u32_30D4;  // 0x30D4
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
    int GetGameSpeed();
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
#pragma pack(pop)
};

} // namespace gamemd
