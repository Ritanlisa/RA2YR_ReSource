#include "networkclass.hpp"

// 0x00639FD0
int  NetworkClass::ExecutePlanningModeCmd(char *this)
{
    char v1; // al
    wchar_t *StringCSF; // eax
    wchar_t *v3; // eax
    v1 = *this;
    if ( *this == 9 )
    if ( !g_PlanningModeActive )
    g_PlanningModeActive = 1;
    StringCSF = GetStringCSF((wchar_t *)g_Str_MSG_PlanningModeNoDeploy, 0, g_Str_File_PlanMgr_cpp, 3233);
    LABEL_10:
    AddMessageListPlayerMessage(StringCSF, 480);
    PlayVocClass(RulesClass_Instance->Scorches1[3], 0x2000, 1.0, 0);
    else if ( v1 == 6 )
    if ( !g_PlanningModeActive )
    g_PlanningModeActive = 1;
    v3 = GetStringCSF(g_Str_MSG_PlanningModeNoStop, 0, g_Str_File_PlanMgr_cpp, 3233);
    AddMessageListPlayerMessage(v3, 480);
    PlayVocClass(RulesClass_Instance->Scorches1[3], 0x2000, 1.0, 0);
    else if ( v1 == 7 && !g_PlanningModeActive )
    g_PlanningModeActive = 1;
    StringCSF = GetStringCSF(g_Str_MSG_PlanningModeNoScatter, 0, g_Str_File_PlanMgr_cpp, 3233);
    goto LABEL_10;
    return PlayVocClass(RulesClass_Instance->Scorches1[3], 0x2000, 1.0, 0);
}

int  NetworkClass::RecordEvent(#377 *this)
{
    uint8_t *WaypointCoords; // eax
    int result; // eax
    char *v3; // edi
    uint8_t v4[8]; // [esp+8h] [ebp-78h] BYREF
    char v5[108]; // [esp+10h] [ebp-70h] BYREF
    __int16 v6; // [esp+7Ch] [ebp-4h]
    char v7; // [esp+7Eh] [ebp-2h]
    unsigned __int8 v8; // [esp+84h] [ebp+4h]
    WaypointCoords = ScriptAction::GetWaypointCoords(v4, this);
    EventClass::Add(v5, *((uint32_t *)HouseClass_Player + 12), v8, *(uint32_t *)WaypointCoords, WaypointCoords[4]);
    if ( FactoryClass::GetFlag() )
    result = NetworkClass::ExecutePlanningModeCmd(v5);
    LOBYTE(result) = 0;
    else
    if ( Networking_LastEventIndex < 128 )
    v3 = &g_NetworkPacketIndex[111 * Networking_NextPacketIndex];
    qmemcpy(v3, v5, 0x6Cu);
    v3 += 108;
    *(_WORD *)v3 = v6;
    v3[2] = v7;
    g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime();
    Networking_NextPacketIndex = ((uint8_t)Networking_NextPacketIndex + 1) & 0x7F;
    result = ++Networking_LastEventIndex;
    LOBYTE(result) = 1;
    return result;
}

