// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct AbstractClass;  // fix_fwd_type_supply
struct CampaignClass;  // fix_fwd_type_supply
struct ObjectClass;  // fix_fwd_type_supply
struct ScriptAction {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned int u32_3;  // 0x3
    unsigned int u32_4;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned int u32_C;  // 0xC
    unsigned char u8_D;  // 0xD
    unsigned int u32_E;  // 0xE
    unsigned int u32_10;  // 0x10
    unsigned int u32_13;  // 0x13
    void* q014;  // 0x14
    unsigned int u32_18;  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned int q020;  // 0x20
    void* q024;  // 0x24
    unsigned int u32_28;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char u8_2D;  // 0x2D
    void* q030;  // 0x30
    unsigned char q034;  // 0x34
    unsigned int u32_38;  // 0x38
    unsigned int u32_3C;  // 0x3C
    unsigned int u32_40;  // 0x40
    unsigned int u32_44;  // 0x44
    unsigned int u32_48;  // 0x48
    AbstractClass* q04C;  // 0x4C
    CampaignClass* q050;  // 0x50
    unsigned char q054;  // 0x54
    unsigned int q058;  // 0x58
    unsigned int u32_5C;  // 0x5C
    unsigned int q060;  // 0x60
    unsigned int q064;  // 0x64
    unsigned int q068;  // 0x68
    unsigned char u8_6C;  // 0x6C
    ObjectClass* q06D;  // 0x6D
    void* q070;  // 0x70
    void* q074;  // 0x74
    unsigned char q078;  // 0x78
    unsigned int u32_7C;  // 0x7C
    CampaignClass* q080;  // 0x80
    unsigned char u8_81;  // 0x81
    unsigned char u8_83;  // 0x83
    unsigned char q084;  // 0x84
    unsigned int q088;  // 0x88
    void* q08C;  // 0x8C
    ObjectClass* q090;  // 0x90
    void* q094;  // 0x94
    void* q098;  // 0x98
    unsigned char q09C;  // 0x9C
    unsigned int u16_A4;  // 0xA4
    unsigned char u8_A6;  // 0xA6
    void* q0A8;  // 0xA8
    unsigned char q0AC;  // 0xAC
    void* q0B0;  // 0xB0
// --- flat members (END) ---
    void*  InitActionFields(int a2, int a3, char a4, char a5, int a6, char a7, int a8, char a9, int a10, char a11);  // 0x4C6860
    int CreatePlacementAction(unsigned int *a2, const void *a3);  // 0x633FA0
    unsigned int * GetCoords(unsigned int *a2);  // 0x6343C0
    unsigned int *  GetScreenPos(unsigned int * a2);  // 0x634400
    BOOL GetActionCoordinates(int a2, int a3, int a4);  // 0x634550
    unsigned int *  FindItemByValue(int a2);  // 0x6346B0
    int FindSquadMember(void *a1 = 0);  // 0x6349B0
    int FindBuildingMatch(unsigned int *a2);  // 0x634CC0
    int  PlaceObject(void * aP1, void *a1 = 0);  // 0x634E10
    int DecrementRefCount(int a2);  // 0x6351E0
    AbstractClass * Constructor(int a2);  // 0x635F20
    BOOL Check(void *a1 = 0, void *a2 = 0, void *a3 = 0);  // 0x636570
    int ClearBuildingState();  // 0x636CE0
    char DispatchBuilding();  // 0x637E00
    char IsBuildingTypeMatch();  // 0x638C70
    int  ExecutePlacement(int a1, int a2, int a3, int64_t a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29);  // 0x639A50
    char  HitTest(void * aP0, int a2);  // 0x63A8E0
    char ProcessIdleAction(void *a1 = 0);  // 0x63B550
    int DrawPlacementMarker();  // 0x63CE40
    int  Serialize(char * Buffer);  // 0x6DD300
    const char * ParseScriptActionParams();  // 0x6DD5B0
    unsigned int * ReadParameter();  // 0x6E1830
    int GetActionTypeInfo();  // 0x6E3B60
    void*  CopyStringField(char * Destination, char * Source);  // 0x6E4790
    unsigned char *  GetWaypointCoords(void * aP1, void *a1 = 0);  // 0x6E6AB0
    int ExecuteMissionCmd();  // 0x6FFBE0
    ObjectClass *  GetArgumentString(int a2);  // 0x721270
    bool SetField10();  // 0x637DB0
    static int ClassifyAction(int *a1, char *a2);  // 0x638CE0
    void * CopyStructField(void *a2, const void *a3);  // 0x6E47C0
};
} // namespace gamemd
