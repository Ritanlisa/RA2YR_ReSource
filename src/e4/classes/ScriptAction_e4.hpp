// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CampaignClass;  // fix_fwd_type_supply
struct ScriptAction {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    void *__pad_0;  // 0x0 vfptr slot witness (raw *(u32*)this->__pad_0 + 8 vt call)
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

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q014;  // X10 supply (member_lookup)
    unsigned char q02C;  // X10 supply (member_lookup)
    int q030;  // X10 supply (member_lookup)
    unsigned char q034[60];  /* char[60] */  // X10 supply (member_lookup)
    AbstractClass* q04C;  // X10 supply (member_lookup)
    CampaignClass* q050;  // X10 supply (member_lookup)
    unsigned char q054;  // X10 supply (member_lookup)
    ObjectClass* q06D;  // X10 supply (member_lookup)
    int q08C;  // X10 supply (member_lookup)
    unsigned char q090[4];  /* char[4] */  // X10 supply (member_lookup)
    int q094;  // X10 supply (member_lookup)
    int q098;  // X10 supply (member_lookup)
    int q0A8;  // X10 supply (member_lookup)
    int q0B0;  // X10 supply (member_lookup)
    int u32_10;  // X10 supply (member_lookup)
    int u32_18;  // X10 supply (member_lookup)
    unsigned char u32_1C[8];  /* char[8] */  // X10 supply (member_lookup)
    unsigned int u32_38;  // X10 supply (member_lookup)
    unsigned int u32_3C;  // X10 supply (member_lookup)
    int u32_4;  // X10 supply (member_lookup)
    unsigned int u32_40;  // X10 supply (member_lookup)
    unsigned int u32_43;  // X10 supply (member_lookup)
    ObjectClass * u32_44;  // X10 supply (member_lookup)
    ObjectClass * u32_48;  // X10 supply (member_lookup)
    int u32_8;  // X10 supply (member_lookup)
    unsigned char u32_C[4];  /* char[4] */  // X10 supply (member_lookup)
    int u8_11;  // X10 supply (member_lookup)
    int u8_1D;  // X10 supply (member_lookup)
    int u8_81;  // X10 supply (member_lookup)
    int u8_83;  // X10 supply (member_lookup)
    int u8_99;  // X10 supply (member_lookup)
    int u8_D;  // X10 supply (member_lookup)
};
} // namespace gamemd
