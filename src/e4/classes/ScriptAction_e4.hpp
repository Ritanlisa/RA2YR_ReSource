// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CampaignClass;  // fix_fwd_type_supply
struct ScriptAction {
    char __pad_0[2];  // 0x0
    unsigned char u8_2;  // 0x2
    char __pad_3[1];  // 0x3
    int u32_4;  // 0x4
    int u32_8;  // 0x8
    char u32_C[1];  // 0xC
    unsigned char u8_D;  // 0xD
    char __pad_E[2];  // 0xE
    unsigned char u32_10;  // 0x10
    unsigned char u8_11;  // 0x11
    char __pad_12[2];  // 0x12
    int q014;  // 0x14
    int u32_18;  // 0x18
    char u32_1C[1];  // 0x1C
    unsigned char u8_1D;  // 0x1D
    char __pad_1E[1];  // 0x1E
    unsigned char u8_1F;  // 0x1F
    char __pad_20[4];  // 0x20
    int q024;  // 0x24
    char __pad_28[4];  // 0x28
    unsigned char q02C;  // 0x2C
    char __pad_2D[3];  // 0x2D
    int q030;  // 0x30
    char q034[4];  // 0x34
    unsigned int u32_38;  // 0x38
    unsigned int u32_3C;  // 0x3C
    unsigned int u32_40;  // 0x40
    ObjectClass * u32_44;  // 0x44
    ObjectClass * u32_48;  // 0x48
    AbstractClass * q04C;  // 0x4C
    unsigned int u32_50;  // 0x50
    char __pad_54[25];  // 0x54
    unsigned char q06D;  // 0x6D
    char __pad_6E[2];  // 0x6E
    int q070;  // 0x70
    int q074;  // 0x74
    char __pad_78[9];  // 0x78
    unsigned char u8_81;  // 0x81
    char __pad_82[1];  // 0x82
    unsigned char u8_83;  // 0x83
    char __pad_84[8];  // 0x84
    int q08C;  // 0x8C
    unsigned char q090[4];  // 0x90
    int q094;  // 0x94
    unsigned char q098;  // 0x98
    unsigned char u8_99;  // 0x99
    char __pad_9A[2];  // 0x9A
    char __pad_9C[12];  // 0x9C
    int q0A8;  // 0xA8
    char __pad_AC[4];  // 0xAC
    int q0B0;  // 0xB0
    unsigned int u32_B4;  // 0xB4
    char __pad_B8[508];  // 0xB8
    unsigned int u32_2B4;  // 0x2B4
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    void*  InitActionFields(int a2, int a3, char a4, char a5, int a6, char a7, int a8, char a9, int a10, char a11, void *a1 = 0);  // 0x4C6860
    int  CreatePlacementAction(unsigned int * a2, void * a3);  // 0x633FA0
    unsigned int *  GetCoords(unsigned int * a2, void *a1 = 0);  // 0x6343C0
    unsigned int * GetScreenPos(unsigned int *a2);  // 0x634400
    BOOL  GetActionCoordinates(int a2, int a3, int a4, void *a1 = 0);  // 0x634550
    unsigned int *  FindItemByValue(int a2);  // 0x6346B0
    int FindSquadMember(void *a1 = 0);  // 0x6349B0
    int  FindBuildingMatch(unsigned int * a2);  // 0x634CC0
    int  PlaceObject(unsigned int * a2, void *a1 = 0);  // 0x634E10
    int  DecrementRefCount(int a2, void *a1 = 0);  // 0x6351E0
    unsigned int *  Constructor(int a2, void *a1 = 0, void *a3 = 0, void *a4 = 0);  // 0x635F20
    int Check(void *a1 = 0, void *a2 = 0, void *a3 = 0);  // 0x636570
    int ClearBuildingState();  // 0x636CE0
    char DispatchBuilding();  // 0x637E00
    char IsBuildingTypeMatch();  // 0x638C70
    static int  ExecutePlacement(int a1, int a2, int a3, int64_t a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29);  // 0x639A50
    char  HitTest(int a1, int a2);
    char ProcessIdleAction();  // 0x63B550
    int DrawPlacementMarker();  // 0x63CE40
    int  Serialize(char * Buffer);  // 0x6DD300
    const char * ParseScriptActionParams();  // 0x6DD5B0
    unsigned int * ReadParameter();  // 0x6E1830
    int GetActionTypeInfo();  // 0x6E3B60
    void*  CopyStringField(char * Destination, char * Source);  // 0x6E4790
    unsigned char *  GetWaypointCoords(unsigned int * a2);  // 0x6E6AB0
    int ExecuteMissionCmd();  // 0x6FFBE0
    ObjectClass *  GetArgumentString(int a2);  // 0x721270
    bool SetField10();  // 0x637DB0
    static int ClassifyAction(int *a1, char *a2);  // 0x638CE0
    void *  CopyStructField(void * a2, void * a3);  // 0x6E47C0
};
} // namespace gamemd
