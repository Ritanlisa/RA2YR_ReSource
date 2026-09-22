// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ScriptAction {
    void* vfptr;  // minimal E2 declaration
    IUnknown * InitActionFields(int a2, int a3, char a4, char a5, int a6, char a7, int a8, char a9, int a10, char a11);  // 0x4C6860
    int CreatePlacementAction(AbstractClass * aP1, const void * a2);  // 0x633FA0
    unsigned int * GetCoords(unsigned int * a2);  // 0x6343C0
    unsigned int * GetScreenPos(unsigned int * a2);  // 0x634400
    BOOL GetActionCoordinates(int a2, int a3, int a4);  // 0x634550
    unsigned int * FindItemByValue(int a2);  // 0x6346B0
    int FindSquadMember();  // 0x6349B0
    int FindBuildingMatch(AbstractClass * aP1);  // 0x634CC0
    int PlaceObject(AbstractClass * aP1);  // 0x634E10
    int DecrementRefCount(int a2);  // 0x6351E0
    AbstractClass * Constructor(AbstractClass * aP1);  // 0x635F20
    BOOL Check();  // 0x636570
    int ClearBuildingState();  // 0x636CE0
    char DispatchBuilding();  // 0x637E00
    char IsBuildingTypeMatch();  // 0x638C70
    int ExecutePlacement(int a1, int a2, int a3, long long a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29);  // 0x639A50
    char HitTest(MouseClass * aP0, int a2);  // 0x63A8E0
    char ProcessIdleAction();  // 0x63B550
    int DrawPlacementMarker();  // 0x63CE40
    int Serialize(char * Buffer);  // 0x6DD300
    const char * ParseScriptActionParams();  // 0x6DD5B0
    unsigned int * ReadParameter();  // 0x6E1830
    int GetActionTypeInfo();  // 0x6E3B60
    IUnknown * CopyStringField(char * Source);  // 0x6E4790
    unsigned char * GetWaypointCoords(IUnknown * aP1);  // 0x6E6AB0
    int ExecuteMissionCmd();  // 0x6FFBE0
    ObjectClass * GetArgumentString(int a2);  // 0x721270
    bool SetField10();  // 0x637DB0
    int ClassifyAction(int * a1, char * a2);  // 0x638CE0
    void * CopyStructField(void * a2, const void * a3);  // 0x6E47C0
};
} // namespace gamemd
