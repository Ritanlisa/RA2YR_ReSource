#include "createteamcommand.hpp"

char * CreateTeamCommand::_vt01(uint32_t *this)
{
    sprintf(byte_A8F5B4, "TeamCreate_%d", *(this + 1));
    return byte_A8F5B4;
}

void  CreateTeamCommand::_vt08(char **this, int a2)
{
    CreateTeamCommand::performAction_246(*(this + 1));
}

// 0x00535CF0
int  CreateTeamCommand::vt02(void *this)
{
    return (*(int (__thiscall **)(void *))(*(uint32_t *)this + 16))(this);
}

char *CreateTeamCommand::sub_535D20()
{
    return aStructuretab;
}

char __stdcall CreateTeamCommand::sub_535D90(int a1)
{
    int v1; // eax
    int v2; // eax
    uint32_t *v4; // [esp-4h] [ebp-4h]
    LOBYTE(v1) = PlayerClass::HasPlayers(dword_880D2C);
    if ( (uint8_t)v1 )
    SidebarClass::SwitchTab((int)&MapClass_Instance, 0);
    v1 = sub_7342A0();
    if ( v1 )
    v4 = (uint32_t *)v1;
    v2 = (*(int (__thiscall **)(int, uint32_t, uint32_t))(*(uint32_t *)v1 + 400))(v1, 0, 0);
    LOBYTE(v1) = BuildingPlacement::Activate((int)HouseClass_Player, v2, v4);
    return v1;
}

char *CreateTeamCommand::sub_535DE0()
{
    return aDefensetab;
}

char __stdcall CreateTeamCommand::sub_535E50(int a1)
{
    int v1; // eax
    int v2; // eax
    uint32_t *v4; // [esp-4h] [ebp-4h]
    LOBYTE(v1) = PlayerClass::HasPlayers(dword_881CC0);
    if ( (uint8_t)v1 )
    SidebarClass::SwitchTab((int)&MapClass_Instance, 1);
    v1 = sub_7342B0();
    if ( v1 )
    v4 = (uint32_t *)v1;
    v2 = (*(int (__thiscall **)(int, uint32_t, uint32_t))(*(uint32_t *)v1 + 400))(v1, 0, 0);
    LOBYTE(v1) = BuildingPlacement::Activate((int)HouseClass_Player, v2, v4);
    return v1;
}

char *CreateTeamCommand::sub_535EA0()
{
    return aInfantrytab;
}

int __stdcall CreateTeamCommand::sub_535F10(int a1)
{
    int result; // eax
    result = PlayerClass::HasPlayers(dword_882C54);
    if ( (uint8_t)result )
    return SidebarClass::SwitchTab((int)&MapClass_Instance, 2);
    return result;
}

char *CreateTeamCommand::sub_535F30()
{
    return aUnittab;
}

int __stdcall CreateTeamCommand::sub_535FA0(int a1)
{
    int result; // eax
    result = PlayerClass::HasPlayers(dword_883BE8);
    if ( (uint8_t)result )
    return SidebarClass::SwitchTab((int)&MapClass_Instance, 3);
    return result;
}

char *CreateTeamCommand::sub_5365A0()
{
    return aNextobject;
}

uint8_t *__stdcall CreateTeamCommand::sub_536610(int a1)
{
    uint8_t *v1; // eax
    uint8_t *result; // eax
    uint8_t *v3; // esi
    TacticalClass::SetObserverMode(&MapClass_Instance, 0);
    TacticalClass::SetDisplayMode(&MapClass_Instance, 0, 0);
    BuildingClass::TogglePower2(&MapClass_Instance, 0);
    BuildingClass::TogglePower(&MapClass_Instance, 0);
    if ( g_SelectionManager )
    v1 = *(uint8_t **)g_ObjectClass_CurrentCount;
    else
    v1 = 0;
    result = sub_4AA2B0(v1);
    v3 = result;
    if ( result )
    MapClass::UnselectAll_ClearLimboLaunchers();
    (*(void (__thiscall **)(uint8_t *))(*(uint32_t *)v3 + 332))(v3);
    TacticalClass::InterpolateView();
    return (uint8_t *)MapClass::MarkForRedraw(&MapClass_Instance, 1);
    return result;
}

char *CreateTeamCommand::sub_5366A0()
{
    return g_INI_Key_PlanningMode;
}

char __stdcall CreateTeamCommand::sub_536730(int a1)
{
    return 1;
}

unsigned int __stdcall CreateTeamCommand::sub_536740(int a1)
{
    return ((unsigned int)~a1 >> 11) & 1;
}

int __stdcall CreateTeamCommand::sub_536750(__int16 a1)
{
    if ( (a1 & 0x800) != 0 )
    return sub_731A70(0);
    else
    return sub_731A50(0);
}

char *CreateTeamCommand::sub_536770()
{
    return aCombatantselec;
}

int __stdcall CreateTeamCommand::sub_5367E0(unsigned int a1)
{
    return (a1 >> 8) & 1;
}

int __stdcall CreateTeamCommand::sub_5367F0(unsigned int a1)
{
    unsigned int v1; // ecx
    v1 = a1 >> 8;
    LOBYTE(v1) = (a1 & 0x100) == 0;
    return ((int (__thiscall *)(unsigned int))loc_732280)(v1);
}

char *CreateTeamCommand::sub_536810()
{
    return g_INI_Key_TypeSelect;
}

int __stdcall CreateTeamCommand::sub_536880(unsigned int a1)
{
    return (a1 >> 8) & 1;
}

char __stdcall CreateTeamCommand::sub_536890(int a1)
{
    return 1;
}

unsigned int __stdcall CreateTeamCommand::sub_5368A0(int a1)
{
    return ((unsigned int)~a1 >> 11) & 1;
}

char __stdcall CreateTeamCommand::sub_5368B0(__int16 a1)
{
    if ( (a1 & 0x800) != 0 )
    return sub_732CC0();
    else
    return sub_732CA0();
}

char *CreateTeamCommand::sub_5368D0()
{
    return aHealthnav;
}

int __stdcall CreateTeamCommand::sub_536940(unsigned int a1)
{
    return (a1 >> 8) & 1;
}

int __stdcall CreateTeamCommand::sub_536950(__int16 a1)
{
    return UpdateUnitHealthTooltip((a1 & 0x100) == 0);
}

char *CreateTeamCommand::sub_536970()
{
    return aVeterancynav;
}

int __stdcall CreateTeamCommand::sub_5369E0(unsigned int a1)
{
    return (a1 >> 8) & 1;
}

int __stdcall CreateTeamCommand::sub_5369F0(__int16 a1)
{
    return DrawUnitExperiencePopup((a1 & 0x100) == 0);
}

char *CreateTeamCommand::sub_536A10()
{
    return aPreviousobject;
}

uint8_t *__stdcall CreateTeamCommand::sub_536A80(int a1)
{
    uint8_t *v1; // eax
    uint8_t *result; // eax
    uint8_t *v3; // esi
    TacticalClass::SetObserverMode(&MapClass_Instance, 0);
    TacticalClass::SetDisplayMode(&MapClass_Instance, 0, 0);
    BuildingClass::TogglePower2(&MapClass_Instance, 0);
    BuildingClass::TogglePower(&MapClass_Instance, 0);
    if ( g_SelectionManager )
    v1 = *(uint8_t **)g_ObjectClass_CurrentCount;
    else
    v1 = 0;
    result = sub_4AA380(v1);
    v3 = result;
    if ( result )
    MapClass::UnselectAll_ClearLimboLaunchers();
    (*(void (__thiscall **)(uint8_t *))(*(uint32_t *)v3 + 332))(v3);
    TacticalClass::InterpolateView();
    return (uint8_t *)MapClass::MarkForRedraw(&MapClass_Instance, 1);
    return result;
}

char *CreateTeamCommand::sub_536B10()
{
    return aStopobject;
}

char *CreateTeamCommand::sub_536B90()
{
    return aAlltocheer;
}

char *CreateTeamCommand::sub_536C10()
{
    return aDeployobject;
}

char __stdcall CreateTeamCommand::sub_536C80(int a1)
{
    return ProcessSelectionExperience();
}

char *CreateTeamCommand::sub_536C90()
{
    return aGuardobject;
}

char __stdcall CreateTeamCommand::sub_536D00(int a1)
{
    return GetFactoryData();
}

char *CreateTeamCommand::sub_536D10()
{
    return aScatterobject;
}

char *CreateTeamCommand::sub_536D90()
{
    return aCenterview;
}

char *CreateTeamCommand::sub_536E30()
{
    return aCenterbase;
}

int __stdcall CreateTeamCommand::sub_536EA0(int a1)
{
    return TAction::CenterOnStartCoords();
}

char *CreateTeamCommand::sub_536EB0()
{
    return aTogglealliance;
}

char *__stdcall CreateTeamCommand::sub_536F20(int a1)
{
    return sub_7318F0();
}

char *CreateTeamCommand::sub_536F30()
{
    return aTogglerepair;
}

char *CreateTeamCommand::sub_536FB0()
{
    return aTogglesell;
}

char __stdcall CreateTeamCommand::sub_537020(int a1)
{
    return BuildingClass::TogglePower(&MapClass_Instance, -1);
}

char *CreateTeamCommand::sub_537030()
{
    return aPlacebeacon;
}

int __stdcall CreateTeamCommand::sub_5370A0(int a1)
{
    int result; // eax
    result = GameMode_Current[0];
    if ( GameMode_Current[0] )
    if ( GameMode_Current[0] != 5 )
    return sub_731A30();
    return result;
}

char *CreateTeamCommand::sub_5370C0()
{
    return aCenteronradare;
}

unsigned __int16 __stdcall CreateTeamCommand::sub_537130(int a1)
{
    return sub_734120();
}

char *CreateTeamCommand::sub_537140()
{
    return aSidebarup;
}

char __stdcall CreateTeamCommand::sub_5371B0(int a1)
{
    return CreateTeamCommand::performAction_245(&MapClass_Instance, 1, -1);
}

char *CreateTeamCommand::sub_5371D0()
{
    return aSidebardown;
}

char __stdcall CreateTeamCommand::sub_537240(int a1)
{
    return CreateTeamCommand::performAction_245(&MapClass_Instance, 0, -1);
}

char __stdcall CreateTeamCommand::sub_5372D0(int a1)
{
    return sub_647040();
}

char *CreateTeamCommand::sub_5372E0()
{
    return aView1;
}

uint32_t *__stdcall CreateTeamCommand::sub_537350(int a1)
{
    int v1; // eax
    uint32_t *result; // eax
    int v3; // [esp+0h] [ebp-10h] BYREF
    int v4[2]; // [esp+4h] [ebp-Ch] BYREF
    int GroundHeight; // [esp+Ch] [ebp-4h]
    v1 = (*((__int16 *)ScenarioClass_Instance + 6728) << 8) + 128;
    v4[0] = (*((__int16 *)ScenarioClass_Instance + 6727) << 8) + 128;
    v4[1] = v1;
    GroundHeight = 0;
    GroundHeight = Cell::GetGroundHeight(v4);
    Tactical::SetTacticalPosition((int)TacticalClass_Instance, v4);
    result = (uint32_t *)g_RadarBlipManager;
    if ( g_RadarBlipManager )
    return Tactical::MouseMove((int)&MapClass_Instance, &v3, &word_A8F2F8);
    return result;
}

char *CreateTeamCommand::sub_5373D0()
{
    return aView2;
}

uint32_t *__stdcall CreateTeamCommand::sub_537440(int a1)
{
    int v1; // eax
    uint32_t *result; // eax
    int v3; // [esp+0h] [ebp-10h] BYREF
    int v4[2]; // [esp+4h] [ebp-Ch] BYREF
    int GroundHeight; // [esp+Ch] [ebp-4h]
    v1 = (*((__int16 *)ScenarioClass_Instance + 6730) << 8) + 128;
    v4[0] = (*((__int16 *)ScenarioClass_Instance + 6729) << 8) + 128;
    v4[1] = v1;
    GroundHeight = 0;
    GroundHeight = Cell::GetGroundHeight(v4);
    Tactical::SetTacticalPosition((int)TacticalClass_Instance, v4);
    result = (uint32_t *)g_RadarBlipManager;
    if ( g_RadarBlipManager )
    return Tactical::MouseMove((int)&MapClass_Instance, &v3, &word_A8F2F8);
    return result;
}

char *CreateTeamCommand::sub_5374C0()
{
    return aView3;
}

uint32_t *__stdcall CreateTeamCommand::sub_537530(int a1)
{
    int v1; // eax
    uint32_t *result; // eax
    int v3; // [esp+0h] [ebp-10h] BYREF
    int v4[2]; // [esp+4h] [ebp-Ch] BYREF
    int GroundHeight; // [esp+Ch] [ebp-4h]
    v1 = (*((__int16 *)ScenarioClass_Instance + 6732) << 8) + 128;
    v4[0] = (*((__int16 *)ScenarioClass_Instance + 6731) << 8) + 128;
    v4[1] = v1;
    GroundHeight = 0;
    GroundHeight = Cell::GetGroundHeight(v4);
    Tactical::SetTacticalPosition((int)TacticalClass_Instance, v4);
    result = (uint32_t *)g_RadarBlipManager;
    if ( g_RadarBlipManager )
    return Tactical::MouseMove((int)&MapClass_Instance, &v3, &word_A8F2F8);
    return result;
}

char *CreateTeamCommand::sub_5375B0()
{
    return aView4;
}

char *CreateTeamCommand::sub_5376A0()
{
    return aSetview1;
}

void *__stdcall CreateTeamCommand::sub_537710(int a1)
{
    int *v1; // eax
    int v2; // edx
    void *result; // eax
    int v4[2]; // [esp+0h] [ebp-10h] BYREF
    int v5[2]; // [esp+8h] [ebp-8h] BYREF
    v1 = ObjectClass::ComputeDelta(TacticalClass_Instance, v4);
    v5[0] = *v1;
    v5[1] = v1[1];
    v2 = *Tactical::PixelToCell((int)TacticalClass_Instance, v4, v5);
    result = ScenarioClass_Instance;
    *(uint32_t *)((char *)ScenarioClass_Instance + 13454) = v2;
    return result;
}

char *CreateTeamCommand::sub_537760()
{
    return aSetview2;
}

void *__stdcall CreateTeamCommand::sub_5377D0(int a1)
{
    int *v1; // eax
    int v2; // edx
    void *result; // eax
    int v4[2]; // [esp+0h] [ebp-10h] BYREF
    int v5[2]; // [esp+8h] [ebp-8h] BYREF
    v1 = ObjectClass::ComputeDelta(TacticalClass_Instance, v4);
    v5[0] = *v1;
    v5[1] = v1[1];
    v2 = *Tactical::PixelToCell((int)TacticalClass_Instance, v4, v5);
    result = ScenarioClass_Instance;
    *(uint32_t *)((char *)ScenarioClass_Instance + 13458) = v2;
    return result;
}

char *CreateTeamCommand::sub_537820()
{
    return aSetview3;
}

void *__stdcall CreateTeamCommand::sub_537890(int a1)
{
    int *v1; // eax
    int v2; // edx
    void *result; // eax
    int v4[2]; // [esp+0h] [ebp-10h] BYREF
    int v5[2]; // [esp+8h] [ebp-8h] BYREF
    v1 = ObjectClass::ComputeDelta(TacticalClass_Instance, v4);
    v5[0] = *v1;
    v5[1] = v1[1];
    v2 = *Tactical::PixelToCell((int)TacticalClass_Instance, v4, v5);
    result = ScenarioClass_Instance;
    *(uint32_t *)((char *)ScenarioClass_Instance + 13462) = v2;
    return result;
}

char *CreateTeamCommand::sub_5378E0()
{
    return aSetview4;
}

void *__stdcall CreateTeamCommand::sub_537950(int a1)
{
    int *v1; // eax
    int v2; // edx
    void *result; // eax
    int v4[2]; // [esp+0h] [ebp-10h] BYREF
    int v5[2]; // [esp+8h] [ebp-8h] BYREF
    v1 = ObjectClass::ComputeDelta(TacticalClass_Instance, v4);
    v5[0] = *v1;
    v5[1] = v1[1];
    v2 = *Tactical::PixelToCell((int)TacticalClass_Instance, v4, v5);
    result = ScenarioClass_Instance;
    *(uint32_t *)((char *)ScenarioClass_Instance + 13466) = v2;
    return result;
}

char *CreateTeamCommand::sub_5379A0()
{
    return aFollow;
}

bool __stdcall CreateTeamCommand::sub_537A10(int a1)
{
    if ( !g_SelectionManager || MapClass::GetScrollMode((int)&MapClass_Instance) )
    return MapClass::SetScrollMode((int)&MapClass_Instance, 0);
    else
    return MapClass::SetScrollMode((int)&MapClass_Instance, *(uint32_t *)g_ObjectClass_CurrentCount);
}

char *CreateTeamCommand::sub_537AB0()
{
    return aExtrasynccheck;
}

int __stdcall CreateTeamCommand::sub_537AF0(int a1)
{
    bool v1; // zf
    char *v2; // ecx
    char *v3; // eax
    v1 = byte_B04880 != 0;
    byte_B04880 = byte_B04880 == 0;
    v2 = aExtraSyncInfoO;
    if ( v1 )
    v2 = aExtraSyncInfoO_0;
    v3 = CharToWideString(v2);
    return MessageListClass::AddMessage(g_GameNetworkObject, 0, 0, (wchar_t *)v3, 3, 16454, 150, 0);
}

char *CreateTeamCommand::sub_537E80()
{
    return aCursorcheat;
}

bool __stdcall CreateTeamCommand::sub_537EF0(int a1)
{
    bool result; // al
    result = byte_A8F7D8 == 0;
    byte_A8F7D8 = byte_A8F7D8 == 0;
    return result;
}

void  CreateTeamCommand::sub_5384C0(int this)
{
    void *v2; // eax
    v2 = *(void **)(this + 4);
    *(uint32_t *)(this + 16) = 0;
    if ( v2 && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(v2);
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

unsigned int  CreateTeamCommand::sub_5384F0(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

char  CreateTeamCommand::sub_5386A0(void *this, int a2, uint32_t *a3)
{
    uint32_t *v4; // edi
    int v5; // ecx
    int i; // eax
    int v7; // eax
    if ( a2 )
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    *((uint8_t *)this + 12) = 1;
    if ( !v4 )
    return 0;
    if ( *((uint32_t *)this + 1) )
    v5 = *((uint32_t *)this + 2);
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(uint32_t *)(*((uint32_t *)this + 1) + 4 * i - 4) )
    ++i;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v4;
    *((uint32_t *)this + 2) = a2;
    *((uint8_t *)this + 13) = a3 == 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    v7 = *((uint32_t *)this + 2);
    if ( v7 < *((uint32_t *)this + 4) )
    *((uint32_t *)this + 4) = v7;
    return 1;
}

int  CreateTeamCommand::sub_538750(int *this, uint32_t *a2)
{
    int v2; // edx
    int result; // eax
    uint32_t *i; // ecx
    v2 = *(this + 4);
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (uint32_t *)*(this + 1); *i != *a2; ++i )
    if ( ++result >= v2 )
    return -1;
    return result;
}

char * CreateTeamCommand::sub_538A20(uint32_t *Block, char a2)
{
    int v3; // eax
    char *v4; // ebp
    uint32_t *v5; // esi
    int v6; // eax
    int v7; // edi
    if ( (a2 & 2) != 0 )
    v3 = *(Block - 1);
    v4 = (char *)(Block - 1);
    v5 = Block + 2 * v3;
    v6 = v3 - 1;
    if ( v6 >= 0 )
    v7 = v6 + 1;
    do
    v5 -= 2;
    *v5 = &rc_ptr<WDTTerritory>::`vftable';
    ComPtr::Release(v5);
    --v7;
    while ( v7 );
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(v4);
    return v4;
    else
    *Block = &rc_ptr<WDTTerritory>::`vftable';
    ComPtr::Release(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (char *)Block;
}

uint32_t * CreateTeamCommand::sub_538AE0(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<CCINIClass *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

