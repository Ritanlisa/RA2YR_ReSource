// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/CreateTeamCommand_e4.hpp"

// 0x535C00
namespace gamemd {
unsigned int * CreateTeamCommand::Construct(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall CreateTeamCommand_Constructor(_DWORD *this, int a2)
{
  *(this + 1) = a2; /*0x535c06*/
  *this = &CreateTeamCommandClass::`vftable'; /*0x535c09*/
  return this; /*0x535c0f*/
}
}
} // namespace gamemd

// 0x535C20
namespace gamemd {
ObjectClass * CreateTeamCommand::AddRef()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ObjectClass *__thiscall CreateTeamCommand::AddRef(_DWORD *this)
{
  sprintf(&HouseClass_Player.__pad_5568[25344], &stru_826F84, (INIClass *)*(this + 1)); /*0x535c2e*/
  return (ObjectClass *)&HouseClass_Player.__pad_5568[25344]; /*0x535c3b*/
}
}
} // namespace gamemd

// 0x535C40
namespace gamemd {
wchar_t * CreateTeamCommand::Release()
{
{
    wchar_t *StringCSF;
    const wchar_t *v3;
    v3 = *(this + 1);
    StringCSF = GetStringCSF(DataGlobal_826F94, 0, g_Str_File_Init_CPP, 6165);
    swprintf(&g_TeamCommandBuffer, (const size_t)StringCSF, v3);
    return &g_TeamCommandBuffer;
}
}
} // namespace gamemd

// 0x535C70
namespace gamemd {
wchar_t * CreateTeamCommand::ddtor()
{
{
    return GetStringCSF(g_Str_TXT_TEAM, 0, g_Str_File_Init_CPP, 6167);
}
}
} // namespace gamemd

// 0x535C90
namespace gamemd {
wchar_t * CreateTeamCommand::Read()
{
{
    wchar_t *StringCSF;
    const wchar_t *v3;
    v3 = *(this + 1);
    StringCSF = GetStringCSF(DataGlobal_826FB0, 0, g_Str_File_Init_CPP, 6169);
    swprintf(&g_TeamCommandBuffer, (const size_t)StringCSF, v3);
    return &g_TeamCommandBuffer;
}
}
} // namespace gamemd

// 0x535CC0
namespace gamemd {
void CreateTeamCommand::Undo(int a2)
{
{
    CreateTeamCommand::performAction_246(*(this + 1));
}
}
} // namespace gamemd

// 0x535CD0
namespace gamemd {
CreateTeamCommand * CreateTeamCommand::performAction_0(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CreateTeamCommand *__thiscall CreateTeamCommand::performAction_0(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &CommandClass::`vftable'; /*0x535cd9*/
  if ( (a2 & 1) != 0 ) /*0x535cdf*/
    __3_YAXPAX_Z(this); /*0x535ce2*/
  return (CreateTeamCommand *)this; /*0x535cec*/
}
}
} // namespace gamemd

// 0x535CF0
namespace gamemd {
int CreateTeamCommand::vt02()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall CreateTeamCommand::vt02(void *this)
{
  return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 16))(this);
}
}
} // namespace gamemd

// 0x535D00
namespace gamemd {
CommandClass * CreateTeamCommand::performAction_1(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CommandClass *__thiscall CreateTeamCommand::performAction_1(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &CommandClass::`vftable'; /*0x535d09*/
  if ( (a2 & 1) != 0 ) /*0x535d0f*/
    __3_YAXPAX_Z(this); /*0x535d12*/
  return (CommandClass *)this; /*0x535d1c*/
}
}
} // namespace gamemd

// 0x535D20
namespace gamemd {
char * CreateTeamCommand::performAction_2()
{
{
    return DataGlobal_826FC8;
}
}
} // namespace gamemd

// 0x535D30
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_3()
{
{
    return GetStringCSF(DataGlobal_826FD8, 0, g_Str_File_Init_CPP, 6186);
}
}
} // namespace gamemd

// 0x535D50
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_4()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 6188);
}
}
} // namespace gamemd

// 0x535D70
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_5()
{
{
    return GetStringCSF(DataGlobal_826FFC, 0, g_Str_File_Init_CPP, 6190);
}
}
} // namespace gamemd

// 0x535D90
namespace gamemd {
char CreateTeamCommand::performAction_6()
{
{
    int _7342A0;
    int v2;
    int *v4;
    LOBYTE(_7342A0) = PlayerClass::HasPlayers(&DataGlobal_87F8E4.__pad_125C[492]);
    if ( (char)_7342A0 )
  {
    SidebarClass::SwitchTab((int)&DataGlobal_87F7E8, 0);
    _7342A0 = UI_Create_7342A0();
    if ( _7342A0 )
    {
    v4 = (int *)_7342A0;
    v2 = (*(int (__thiscall **)(int, int, int))(*(int *)(_7342A0) + 400))(_7342A0, 0, 0);
    LOBYTE(_7342A0) = BuildingPlacement::Activate((int)HouseClass_Player, v2, v4);
    }
  }
    return _7342A0;
}
}
} // namespace gamemd

// 0x535DE0
namespace gamemd {
char * CreateTeamCommand::performAction_7()
{
{
    return DataGlobal_827014;
}
}
} // namespace gamemd

// 0x535DF0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_8()
{
{
    return GetStringCSF(DataGlobal_827020, 0, g_Str_File_Init_CPP, 6212);
}
}
} // namespace gamemd

// 0x535E10
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_9()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 6214);
}
}
} // namespace gamemd

// 0x535E30
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_10()
{
{
    return GetStringCSF(aTxtDefenseTabD, 0, g_Str_File_Init_CPP, 6216);
}
}
} // namespace gamemd

// 0x535E50
namespace gamemd {
char CreateTeamCommand::performAction_11()
{
{
    int _7342B0;
    int v2;
    int *v4;
    LOBYTE(_7342B0) = PlayerClass::HasPlayers(&DataGlobal_87F8E4.__pad_125C[4480]);
    if ( (char)_7342B0 )
  {
    SidebarClass::SwitchTab((int)&DataGlobal_87F7E8, 1);
    _7342B0 = UI_Create_7342B0();
    if ( _7342B0 )
    {
    v4 = (int *)_7342B0;
    v2 = (*(int (__thiscall **)(int, int, int))(*(int *)(_7342B0) + 400))(_7342B0, 0, 0);
    LOBYTE(_7342B0) = BuildingPlacement::Activate((int)HouseClass_Player, v2, v4);
    }
  }
    return _7342B0;
}
}
} // namespace gamemd

// 0x535EB0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_13()
{
{
    return GetStringCSF(aTxtInfantryTab, 0, g_Str_File_Init_CPP, 6238);
}
}
} // namespace gamemd

// 0x535ED0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_14()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 6240);
}
}
} // namespace gamemd

// 0x535EF0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_15()
{
{
    return GetStringCSF(aTxtInfantryTab_0, 0, g_Str_File_Init_CPP, 6242);
}
}
} // namespace gamemd

// 0x535F10
namespace gamemd {
int CreateTeamCommand::performAction_16()
{
{
    int result;
    result = PlayerClass::HasPlayers(&DataGlobal_87F8E4.__pad_125C[8468]);
    if ( (char)result )
    return SidebarClass::SwitchTab((int)&DataGlobal_87F7E8, 2);
    return result;
}
}
} // namespace gamemd

// 0x535F40
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_18()
{
{
    return GetStringCSF(aTxtUnitTab, 0, g_Str_File_Init_CPP, 6259);
}
}
} // namespace gamemd

// 0x535F60
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_19()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 6261);
}
}
} // namespace gamemd

// 0x535F80
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_20()
{
{
    return GetStringCSF(aTxtUnitTabDesc, 0, g_Str_File_Init_CPP, 6263);
}
}
} // namespace gamemd

// 0x535FA0
namespace gamemd {
int CreateTeamCommand::performAction_21()
{
{
    int result;
    result = PlayerClass::HasPlayers(&DataGlobal_87F8E4.__pad_125C[12456]);
    if ( (char)result )
    return SidebarClass::SwitchTab((int)&DataGlobal_87F7E8, 3);
    return result;
}
}
} // namespace gamemd

// 0x536090
namespace gamemd {
SelectTeamCommand * CreateTeamCommand::performAction_22(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
SelectTeamCommand *__thiscall CreateTeamCommand::performAction_22(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &CommandClass::`vftable'; /*0x536099*/
  if ( (a2 & 1) != 0 ) /*0x53609f*/
    __3_YAXPAX_Z(this); /*0x5360a2*/
  return (SelectTeamCommand *)this; /*0x5360ac*/
}
}
} // namespace gamemd

// 0x536180
namespace gamemd {
AddTeamCommand * CreateTeamCommand::performAction_23(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
AddTeamCommand *__thiscall CreateTeamCommand::performAction_23(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &CommandClass::`vftable'; /*0x536189*/
  if ( (a2 & 1) != 0 ) /*0x53618f*/
    __3_YAXPAX_Z(this); /*0x536192*/
  return (AddTeamCommand *)this; /*0x53619c*/
}
}
} // namespace gamemd

// 0x536270
namespace gamemd {
CenterTeamCommand * CreateTeamCommand::performAction_24(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CenterTeamCommand *__thiscall CreateTeamCommand::performAction_24(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &CommandClass::`vftable'; /*0x536279*/
  if ( (a2 & 1) != 0 ) /*0x53627f*/
    __3_YAXPAX_Z(this); /*0x536282*/
  return (CenterTeamCommand *)this; /*0x53628c*/
}
}
} // namespace gamemd

// 0x536580
namespace gamemd {
TauntCommandClass * CreateTeamCommand::performAction_25(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
TauntCommandClass *__thiscall CreateTeamCommand::performAction_25(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &CommandClass::`vftable'; /*0x536589*/
  if ( (a2 & 1) != 0 ) /*0x53658f*/
    __3_YAXPAX_Z(this); /*0x536592*/
  return (TauntCommandClass *)this; /*0x53659c*/
}
}
} // namespace gamemd

// 0x5365A0
namespace gamemd {
char * CreateTeamCommand::performAction_26()
{
{
    return DataGlobal_827234;
}
}
} // namespace gamemd

// 0x5365B0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_27()
{
{
    return GetStringCSF(DataGlobal_827240, 0, g_Str_File_Init_CPP, 6526);
}
}
} // namespace gamemd

// 0x5365D0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_28()
{
{
    return GetStringCSF(g_Str_TXT_SELECTION, 0, g_Str_File_Init_CPP, 6528);
}
}
} // namespace gamemd

// 0x5365F0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_29()
{
{
    return GetStringCSF(aTxtNextObjectD, 0, g_Str_File_Init_CPP, 6530);
}
}
} // namespace gamemd

// 0x536610
namespace gamemd {
unsigned char * CreateTeamCommand::performAction_30()
{
{
    char *v1;
    char *result;
    char *v3;
    TacticalClass::SetObserverMode(&DataGlobal_87F7E8, 0);
    TacticalClass::SetDisplayMode(&DataGlobal_87F7E8, 0, 0);
    BuildingClass::TogglePower2(&DataGlobal_87F7E8, 0);
    BuildingClass::TogglePower(&DataGlobal_87F7E8, 0);
    if ( *(int *)&g_NetworkPlayerBuffer.__pad_14B0[476] )
    v1 = **(char ***)&g_NetworkPlayerBuffer.__pad_14B0[464];
    else
    v1 = 0;
    result = sub_4AA2B0(v1);
    v3 = result;
    if ( result )
  {
    MapClass::UnselectAll_ClearLimboLaunchers();
    (*(void (__thiscall **)(char *))(*(int *)(v3) + 332))(v3);
    TacticalClass::InterpolateView();
    return (char *)MapClass::MarkForRedraw(&DataGlobal_87F7E8, 1);
  }
    return result;
}
}
} // namespace gamemd

// 0x5366B0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_32()
{
{
    return GetStringCSF(aCmndPlanningmo, 0, g_Str_File_Init_CPP, 6580);
}
}
} // namespace gamemd

// 0x5366D0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_33()
{
{
    return GetStringCSF(g_Str_TXT_CONTROL, 0, g_Str_File_Init_CPP, 6582);
}
}
} // namespace gamemd

// 0x5366F0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_34()
{
{
    return GetStringCSF(aCmndPlanningmo_0, 0, g_Str_File_Init_CPP, 6584);
}
}
} // namespace gamemd

// 0x536710
namespace gamemd {
BOOL CreateTeamCommand::performAction_35()
{
{
    char v2;
    return (v2 & 7) != 0;
}
}
} // namespace gamemd

// 0x536740
namespace gamemd {
unsigned int CreateTeamCommand::performAction_37()
{
{
    int v2;
    return ((unsigned int)~v2 >> 11) & 1;
}
}
} // namespace gamemd

// 0x536750
namespace gamemd {
int CreateTeamCommand::performAction_38()
{
{
    char v2;
    if ( (v2 & 8) != 0 )
    return UI_Create_731A70(0);
    else
    return UI_Create_731A50(0);
}
}
} // namespace gamemd

// 0x536780
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_40()
{
{
    return GetStringCSF(aCmndCombatants, 0, g_Str_File_Init_CPP, 6664);
}
}
} // namespace gamemd

// 0x5367A0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_41()
{
{
    return GetStringCSF(g_Str_TXT_SELECTION, 0, g_Str_File_Init_CPP, 6666);
}
}
} // namespace gamemd

// 0x5367C0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_42()
{
{
    return GetStringCSF(aCmndCombatants_0, 0, g_Str_File_Init_CPP, 6668);
}
}
} // namespace gamemd

// 0x5367E0
namespace gamemd {
int CreateTeamCommand::performAction_43()
{
{
    unsigned int v2;
    return (v2 >> 8) & 1;
}
}
} // namespace gamemd

// 0x5367F0
namespace gamemd {
int CreateTeamCommand::performAction_44()
{
{
    unsigned int v1;
    unsigned int v3;
    v1 = v3 >> 8;
    LOBYTE(v1) = (v3 & 0x100) == 0;
    return ((int (__thiscall *)(unsigned int))loc_732280)(v1);
}
}
} // namespace gamemd

// 0x536820
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_46()
{
{
    return GetStringCSF(aCmndTypeselect, 0, g_Str_File_Init_CPP, 6690);
}
}
} // namespace gamemd

// 0x536840
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_47()
{
{
    return GetStringCSF(g_Str_TXT_SELECTION, 0, g_Str_File_Init_CPP, 6692);
}
}
} // namespace gamemd

// 0x536860
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_48()
{
{
    return GetStringCSF(aCmndTypeselect_0, 0, g_Str_File_Init_CPP, 6694);
}
}
} // namespace gamemd

// 0x536880
namespace gamemd {
int CreateTeamCommand::performAction_49()
{
{
    unsigned int v2;
    return (v2 >> 8) & 1;
}
}
} // namespace gamemd

// 0x5368A0
namespace gamemd {
unsigned int CreateTeamCommand::performAction_51()
{
{
    int v2;
    return ((unsigned int)~v2 >> 11) & 1;
}
}
} // namespace gamemd

// 0x5368B0
namespace gamemd {
char CreateTeamCommand::performAction_52()
{
{
    char v2;
    if ( (v2 & 8) != 0 )
    return UI_Create_732CC0();
    else
    return UI_Create_732CA0();
}
}
} // namespace gamemd

// 0x5368E0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_54()
{
{
    return GetStringCSF(aCmndHealthnavi, 0, g_Str_File_Init_CPP, 6728);
}
}
} // namespace gamemd

// 0x536900
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_55()
{
{
    return GetStringCSF(g_Str_TXT_SELECTION, 0, g_Str_File_Init_CPP, 6730);
}
}
} // namespace gamemd

// 0x536920
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_56()
{
{
    return GetStringCSF(aCmndHealthnavi_0, 0, g_Str_File_Init_CPP, 6732);
}
}
} // namespace gamemd

// 0x536940
namespace gamemd {
int CreateTeamCommand::performAction_57()
{
{
    unsigned int v2;
    return (v2 >> 8) & 1;
}
}
} // namespace gamemd

// 0x536950
namespace gamemd {
int CreateTeamCommand::performAction_58()
{
{
    HealthNavCommandClass *v1;
    unsigned int v3;
    v1 = (HealthNavCommandClass *)(v3 >> 8);
    LOBYTE(v1) = (v3 & 0x100) == 0;
    return UpdateUnitHealthTooltip(v1);
}
}
} // namespace gamemd

// 0x536980
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_60()
{
{
    return GetStringCSF(aCmndVetnavigat, 0, g_Str_File_Init_CPP, 6754);
}
}
} // namespace gamemd

// 0x5369A0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_61()
{
{
    return GetStringCSF(g_Str_TXT_SELECTION, 0, g_Str_File_Init_CPP, 6756);
}
}
} // namespace gamemd

// 0x5369C0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_62()
{
{
    return GetStringCSF(aCmndVetnavigat_0, 0, g_Str_File_Init_CPP, 6758);
}
}
} // namespace gamemd

// 0x5369E0
namespace gamemd {
int CreateTeamCommand::performAction_63()
{
{
    unsigned int v2;
    return (v2 >> 8) & 1;
}
}
} // namespace gamemd

// 0x5369F0
namespace gamemd {
int CreateTeamCommand::performAction_64()
{
{
    VeterancyNavCommandClass *v1;
    unsigned int v3;
    v1 = (VeterancyNavCommandClass *)(v3 >> 8);
    LOBYTE(v1) = (v3 & 0x100) == 0;
    return DrawUnitExperiencePopup(v1);
}
}
} // namespace gamemd

// 0x536A20
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_66()
{
{
    return GetStringCSF(aTxtPrevObject, 0, g_Str_File_Init_CPP, 6817);
}
}
} // namespace gamemd

// 0x536A40
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_67()
{
{
    return GetStringCSF(g_Str_TXT_SELECTION, 0, g_Str_File_Init_CPP, 6819);
}
}
} // namespace gamemd

// 0x536A60
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_68()
{
{
    return GetStringCSF(aTxtPrevObjectD, 0, g_Str_File_Init_CPP, 6821);
}
}
} // namespace gamemd

// 0x536A80
namespace gamemd {
unsigned char * CreateTeamCommand::performAction_69()
{
{
    char *v1;
    char *result;
    char *v3;
    TacticalClass::SetObserverMode(&DataGlobal_87F7E8, 0);
    TacticalClass::SetDisplayMode(&DataGlobal_87F7E8, 0, 0);
    BuildingClass::TogglePower2(&DataGlobal_87F7E8, 0);
    BuildingClass::TogglePower(&DataGlobal_87F7E8, 0);
    if ( *(int *)&g_NetworkPlayerBuffer.__pad_14B0[476] )
    v1 = **(char ***)&g_NetworkPlayerBuffer.__pad_14B0[464];
    else
    v1 = 0;
    result = sub_4AA380(v1);
    v3 = result;
    if ( result )
  {
    MapClass::UnselectAll_ClearLimboLaunchers();
    (*(void (__thiscall **)(char *))(*(int *)(v3) + 332))(v3);
    TacticalClass::InterpolateView();
    return (char *)MapClass::MarkForRedraw(&DataGlobal_87F7E8, 1);
  }
    return result;
}
}
} // namespace gamemd

// 0x536B20
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_71()
{
{
    return GetStringCSF(aTxtStopObject, 0, g_Str_File_Init_CPP, 6858);
}
}
} // namespace gamemd

// 0x536B40
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_72()
{
{
    return GetStringCSF(g_Str_TXT_CONTROL, 0, g_Str_File_Init_CPP, 6860);
}
}
} // namespace gamemd

// 0x536B60
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_73()
{
{
    return GetStringCSF(aTxtStopObjectD, 0, g_Str_File_Init_CPP, 6862);
}
}
} // namespace gamemd

// 0x536B80
namespace gamemd {
int CreateTeamCommand_performAction_74()
{
    wchar_t *__stdcall CreateTeamCommand::sub_536B80(int a1)
{
    return UI_Create_730EA0();
}
}
} // namespace gamemd

// 0x536BA0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_76()
{
{
    return GetStringCSF(aCmndAllcheer, 0, g_Str_File_Init_CPP, 6876);
}
}
} // namespace gamemd

// 0x536BC0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_77()
{
{
    return GetStringCSF(g_Str_TXT_CONTROL, 0, g_Str_File_Init_CPP, 6878);
}
}
} // namespace gamemd

// 0x536BE0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_78()
{
{
    return GetStringCSF(aCmndAllcheerde, 0, g_Str_File_Init_CPP, 6880);
}
}
} // namespace gamemd

// 0x536C00
namespace gamemd {
int CreateTeamCommand_performAction_79()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
wchar_t *__thiscall CreateTeamCommand::performAction_79(AllToCheerCommandClass *this)
{
  return UI_Create_730F30(); /*0x536c05*/
}
}
} // namespace gamemd

// 0x536C20
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_81()
{
{
    return GetStringCSF(aTxtDeployObjec, 0, g_Str_File_Init_CPP, 6903);
}
}
} // namespace gamemd

// 0x536C40
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_82()
{
{
    return GetStringCSF(g_Str_TXT_CONTROL, 0, g_Str_File_Init_CPP, 6905);
}
}
} // namespace gamemd

// 0x536C60
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_83()
{
{
    return GetStringCSF(aTxtDeployObjec_0, 0, g_Str_File_Init_CPP, 6907);
}
}
} // namespace gamemd

// 0x536C80
namespace gamemd {
int CreateTeamCommand_performAction_84()
{
    char __stdcall CreateTeamCommand::sub_536C80(int a1)
{
    return ProcessSelectionExperience();
}
}
} // namespace gamemd

// 0x536CA0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_86()
{
{
    return GetStringCSF(aTxtGuard, 0, g_Str_File_Init_CPP, 6931);
}
}
} // namespace gamemd

// 0x536CC0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_87()
{
{
    return GetStringCSF(g_Str_TXT_CONTROL, 0, g_Str_File_Init_CPP, 6933);
}
}
} // namespace gamemd

// 0x536CE0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_88()
{
{
    return GetStringCSF(aTxtGuardDesc, 0, g_Str_File_Init_CPP, 6935);
}
}
} // namespace gamemd

// 0x536D00
namespace gamemd {
int CreateTeamCommand_performAction_89()
{
    char __stdcall CreateTeamCommand::sub_536D00(int a1)
{
    return GetFactoryData();
}
}
} // namespace gamemd

// 0x536D20
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_91()
{
{
    return GetStringCSF(aTxtScatter, 0, g_Str_File_Init_CPP, 6960);
}
}
} // namespace gamemd

// 0x536D40
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_92()
{
{
    return GetStringCSF(g_Str_TXT_CONTROL, 0, g_Str_File_Init_CPP, 6962);
}
}
} // namespace gamemd

// 0x536D60
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_93()
{
{
    return GetStringCSF(aTxtScatterDesc, 0, g_Str_File_Init_CPP, 6964);
}
}
} // namespace gamemd

// 0x536D80
namespace gamemd {
int CreateTeamCommand_performAction_94()
{
    wchar_t *__stdcall CreateTeamCommand::sub_536D80(int a1)
{
    return UI_Create_730FE0();
}
}
} // namespace gamemd

// 0x536DA0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_96()
{
{
    return GetStringCSF(aTxtCenterView, 0, g_Str_File_Init_CPP, 6987);
}
}
} // namespace gamemd

// 0x536DC0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_97()
{
{
    return GetStringCSF(g_Str_TXT_SELECTION, 0, g_Str_File_Init_CPP, 6989);
}
}
} // namespace gamemd

// 0x536DE0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_98()
{
{
    return GetStringCSF(aTxtCenterViewD, 0, g_Str_File_Init_CPP, 6991);
}
}
} // namespace gamemd

// 0x536E00
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_99()
{
{
    ParticleSystemClass *result;
    result = *(ParticleSystemClass **)&g_NetworkPlayerBuffer.__pad_14B0[476];
    if ( *(int *)&g_NetworkPlayerBuffer.__pad_14B0[476] > 0 )
  {
    TacticalClass::InterpolateView();
    return (wchar_t *)MapClass::MarkForRedraw(&DataGlobal_87F7E8, 1);
  }
    return (wchar_t *)result;
}
}
} // namespace gamemd

// 0x536E40
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_101()
{
{
    return GetStringCSF(aTxtCenterBase, 0, g_Str_File_Init_CPP, 7018);
}
}
} // namespace gamemd

// 0x536E60
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_102()
{
{
    return GetStringCSF(g_Str_TXT_SELECTION, 0, g_Str_File_Init_CPP, 7020);
}
}
} // namespace gamemd

// 0x536E80
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_103()
{
{
    return GetStringCSF(aTxtCenterBaseD, 0, g_Str_File_Init_CPP, 7022);
}
}
} // namespace gamemd

// 0x536EA0
namespace gamemd {
int CreateTeamCommand_performAction_104()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
int __thiscall CreateTeamCommand::performAction_104(CenterBaseCommandClass *this)
{
  return TAction::CenterOnStartCoords(); /*0x536ea5*/
}
}
} // namespace gamemd

// 0x536EC0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_106()
{
{
    return GetStringCSF(aTxtAlliance, 0, g_Str_File_Init_CPP, 7045);
}
}
} // namespace gamemd

// 0x536EE0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_107()
{
{
    return GetStringCSF(g_Str_TXT_CONTROL, 0, g_Str_File_Init_CPP, 7047);
}
}
} // namespace gamemd

// 0x536F00
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_108()
{
{
    return GetStringCSF(aTxtAllianceDes, 0, g_Str_File_Init_CPP, 7049);
}
}
} // namespace gamemd

// 0x536F20
namespace gamemd {
int CreateTeamCommand_performAction_109()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
char *__thiscall CreateTeamCommand::performAction_109(AllianceCommandClass *this)
{
  return UI_Create_7318F0(); /*0x536f25*/
}
}
} // namespace gamemd

// 0x536F40
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_111()
{
{
    return GetStringCSF(aTxtRepairMode, 0, g_Str_File_Init_CPP, 7103);
}
}
} // namespace gamemd

// 0x536F60
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_112()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7105);
}
}
} // namespace gamemd

// 0x536F80
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_113()
{
{
    return GetStringCSF(aTxtRepairModeD, 0, g_Str_File_Init_CPP, 7107);
}
}
} // namespace gamemd

// 0x536FC0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_115()
{
{
    return GetStringCSF(aTxtSellMode, 0, g_Str_File_Init_CPP, 7129);
}
}
} // namespace gamemd

// 0x536FE0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_116()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7131);
}
}
} // namespace gamemd

// 0x537000
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_117()
{
{
    return GetStringCSF(aTxtSellModeDes, 0, g_Str_File_Init_CPP, 7133);
}
}
} // namespace gamemd

// 0x537020
namespace gamemd {
char CreateTeamCommand::performAction_118(int a1)
{
{
    return BuildingClass::TogglePower(&DataGlobal_87F7E8, -1);
}
}
} // namespace gamemd

// 0x537040
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_120()
{
{
    return GetStringCSF(aTxtPlaceBeacon, 0, g_Str_File_Init_CPP, 7172);
}
}
} // namespace gamemd

// 0x537060
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_121()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7174);
}
}
} // namespace gamemd

// 0x537080
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_122()
{
{
    return GetStringCSF(aTxtPlaceBeacon_0, 0, g_Str_File_Init_CPP, 7176);
}
}
} // namespace gamemd

// 0x5370A0
namespace gamemd {
int CreateTeamCommand::performAction_123()
{
{
    CellStruct *result;
    result = g_GameMode_Current;
    if ( g_GameMode_Current )
  {
    if ( g_GameMode_Current != (CellStruct *)5 )
    return UI_Create_731A30();
  }
    return (int)result;
}
}
} // namespace gamemd

// 0x5370D0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_125()
{
{
    return GetStringCSF(aTxtRadarEvent, 0, g_Str_File_Init_CPP, 7195);
}
}
} // namespace gamemd

// 0x5370F0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_126()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7197);
}
}
} // namespace gamemd

// 0x537110
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_127()
{
{
    return GetStringCSF(aTxtRadarEventD, 0, g_Str_File_Init_CPP, 7199);
}
}
} // namespace gamemd

// 0x537130
namespace gamemd {
int CreateTeamCommand_performAction_128()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
unsigned __int16 __thiscall CreateTeamCommand::performAction_128(CenterREventCommandClass *this)
{
  return UI_Create_734120(); /*0x537135*/
}
}
} // namespace gamemd

// 0x537150
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_130()
{
{
    return GetStringCSF(aTxtSidebarUp, 0, g_Str_File_Init_CPP, 7249);
}
}
} // namespace gamemd

// 0x537170
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_131()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7251);
}
}
} // namespace gamemd

// 0x537190
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_132()
{
{
    return GetStringCSF(aTxtSidebarUpDe, 0, g_Str_File_Init_CPP, 7253);
}
}
} // namespace gamemd

// 0x5371B0
namespace gamemd {
char CreateTeamCommand::performAction_133()
{
{
    return CreateTeamCommand::performAction_245(&DataGlobal_87F7E8, 1, -1);
}
}
} // namespace gamemd

// 0x5371E0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_135()
{
{
    return GetStringCSF(aTxtSidebarDown, 0, g_Str_File_Init_CPP, 7389);
}
}
} // namespace gamemd

// 0x537200
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_136()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7391);
}
}
} // namespace gamemd

// 0x537220
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_137()
{
{
    return GetStringCSF(aTxtSidebarDown_0, 0, g_Str_File_Init_CPP, 7393);
}
}
} // namespace gamemd

// 0x537240
namespace gamemd {
char CreateTeamCommand::performAction_138()
{
{
    return CreateTeamCommand::performAction_245(&DataGlobal_87F7E8, 0, -1);
}
}
} // namespace gamemd

// 0x537260
namespace gamemd {
CHAR * CreateTeamCommand::performAction_139()
{
{
    return (CHAR *)&g_INI_Key_Options;
}
}
} // namespace gamemd

// 0x537270
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_140()
{
{
    return GetStringCSF(aTxtOptions, 0, g_Str_File_Init_CPP, 7530);
}
}
} // namespace gamemd

// 0x537290
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_141()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7532);
}
}
} // namespace gamemd

// 0x5372B0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_142()
{
{
    return GetStringCSF(aTxtOptionsDesc, 0, g_Str_File_Init_CPP, 7534);
}
}
} // namespace gamemd

// 0x5372D0
namespace gamemd {
int CreateTeamCommand_performAction_143()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
char __thiscall CreateTeamCommand::performAction_143(OptionsCommandClass *this)
{
  return UI_Create(); /*0x5372d5*/
}
}
} // namespace gamemd

// 0x5372F0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_145()
{
{
    return GetStringCSF(aTxtViewBookmar, 0, g_Str_File_Init_CPP, 7707);
}
}
} // namespace gamemd

// 0x537310
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_146()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7709);
}
}
} // namespace gamemd

// 0x537330
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_147()
{
{
    return GetStringCSF(aTxtViewBookmar_0, 0, g_Str_File_Init_CPP, 7711);
}
}
} // namespace gamemd

// 0x537350
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_148()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall CreateTeamCommand::performAction_148(View1CommandClass *this)
{
  int v1; // eax
  IUnknown *result; // eax
  int v3; // [esp+0h] [ebp-10h] BYREF
  int v4[2]; // [esp+4h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+Ch] [ebp-4h]

  v1 = (*((__int16 *)MEMORY[0xA8B230] + 6728) << 8) + 128; /*0x537378*/
  v4[0] = (*((__int16 *)MEMORY[0xA8B230] + 6727) << 8) + 128; /*0x53737d*/
  v4[1] = v1; /*0x537386*/
  GroundHeight = 0; /*0x53738a*/
  GroundHeight = Cell::GetGroundHeight(v4); /*0x53739d*/
  Tactical::SetTacticalPosition((int)MEMORY[0x887324], v4); /*0x5373a6*/
  result = MEMORY[0x880990]; /*0x5373ab*/
  if ( MEMORY[0x880990] ) /*0x5373b2*/
    return Tactical::MouseMove( /*0x5373c3*/
             (int)&MEMORY[0x87F7E8],
             (MouseClass *)&v3,
             (MouseClass *)&MEMORY[0xA8EA70].__pad_6A8[480]);
  return &result->field_0; /*0x5373c8*/
}
}
} // namespace gamemd

// 0x5373E0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_150()
{
{
    return GetStringCSF(aTxtViewBookmar_1, 0, g_Str_File_Init_CPP, 7743);
}
}
} // namespace gamemd

// 0x537400
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_151()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7745);
}
}
} // namespace gamemd

// 0x537420
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_152()
{
{
    return GetStringCSF(aTxtViewBookmar_2, 0, g_Str_File_Init_CPP, 7747);
}
}
} // namespace gamemd

// 0x537440
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_153()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall CreateTeamCommand::performAction_153(View2CommandClass *this)
{
  int v1; // eax
  IUnknown *result; // eax
  int v3; // [esp+0h] [ebp-10h] BYREF
  int v4[2]; // [esp+4h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+Ch] [ebp-4h]

  v1 = (*((__int16 *)MEMORY[0xA8B230] + 6730) << 8) + 128; /*0x537468*/
  v4[0] = (*((__int16 *)MEMORY[0xA8B230] + 6729) << 8) + 128; /*0x53746d*/
  v4[1] = v1; /*0x537476*/
  GroundHeight = 0; /*0x53747a*/
  GroundHeight = Cell::GetGroundHeight(v4); /*0x53748d*/
  Tactical::SetTacticalPosition((int)MEMORY[0x887324], v4); /*0x537496*/
  result = MEMORY[0x880990]; /*0x53749b*/
  if ( MEMORY[0x880990] ) /*0x5374a2*/
    return Tactical::MouseMove( /*0x5374b3*/
             (int)&MEMORY[0x87F7E8],
             (MouseClass *)&v3,
             (MouseClass *)&MEMORY[0xA8EA70].__pad_6A8[480]);
  return &result->field_0; /*0x5374b8*/
}
}
} // namespace gamemd

// 0x5374D0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_155()
{
{
    return GetStringCSF(aTxtViewBookmar_3, 0, g_Str_File_Init_CPP, 7779);
}
}
} // namespace gamemd

// 0x5374F0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_156()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7781);
}
}
} // namespace gamemd

// 0x537510
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_157()
{
{
    return GetStringCSF(aTxtViewBookmar_4, 0, g_Str_File_Init_CPP, 7783);
}
}
} // namespace gamemd

// 0x537530
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_158()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall CreateTeamCommand::performAction_158(View3CommandClass *this)
{
  int v1; // eax
  IUnknown *result; // eax
  int v3; // [esp+0h] [ebp-10h] BYREF
  int v4[2]; // [esp+4h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+Ch] [ebp-4h]

  v1 = (*((__int16 *)MEMORY[0xA8B230] + 6732) << 8) + 128; /*0x537558*/
  v4[0] = (*((__int16 *)MEMORY[0xA8B230] + 6731) << 8) + 128; /*0x53755d*/
  v4[1] = v1; /*0x537566*/
  GroundHeight = 0; /*0x53756a*/
  GroundHeight = Cell::GetGroundHeight(v4); /*0x53757d*/
  Tactical::SetTacticalPosition((int)MEMORY[0x887324], v4); /*0x537586*/
  result = MEMORY[0x880990]; /*0x53758b*/
  if ( MEMORY[0x880990] ) /*0x537592*/
    return Tactical::MouseMove( /*0x5375a3*/
             (int)&MEMORY[0x87F7E8],
             (MouseClass *)&v3,
             (MouseClass *)&MEMORY[0xA8EA70].__pad_6A8[480]);
  return &result->field_0; /*0x5375a8*/
}
}
} // namespace gamemd

// 0x5375C0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_160()
{
{
    return GetStringCSF(aTxtViewBookmar_5, 0, g_Str_File_Init_CPP, 7815);
}
}
} // namespace gamemd

// 0x5375E0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_161()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7817);
}
}
} // namespace gamemd

// 0x537600
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_162()
{
{
    return GetStringCSF(aTxtViewBookmar_6, 0, g_Str_File_Init_CPP, 7819);
}
}
} // namespace gamemd

// 0x5376B0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_164()
{
{
    return GetStringCSF(aTxtSetBookmark, 0, g_Str_File_Init_CPP, 7851);
}
}
} // namespace gamemd

// 0x5376D0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_165()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7853);
}
}
} // namespace gamemd

// 0x5376F0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_166()
{
{
    return GetStringCSF(aTxtSetBookmark_0, 0, g_Str_File_Init_CPP, 7855);
}
}
} // namespace gamemd

// 0x537710
namespace gamemd {
void * CreateTeamCommand::performAction_167()
{
{
    int *v1;
    int v2;
    ScenarioClass *result;
    int v4[2];
    int v5[2];
    v1 = ObjectClass::ComputeDelta(*(int **)&DataGlobal_87F8E4.__pad_5568[9432], v4);
    v5[0] = *v1;
    v5[1] = v1[1];
    v2 = *Tactical::PixelToCell(*(int *)&DataGlobal_87F8E4.__pad_5568[9432], (AbstractClass *)v4, (IUnknown *)v5);
    result = g_ScenarioClass_Instance;
    *(int *)((char *)&g_ScenarioClass_Instance->localVariables[1024] + 2) = v2;
    return result;
}
}
} // namespace gamemd

// 0x537770
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_169()
{
{
    return GetStringCSF(aTxtSetBookmark_1, 0, g_Str_File_Init_CPP, 7878);
}
}
} // namespace gamemd

// 0x537790
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_170()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7880);
}
}
} // namespace gamemd

// 0x5377B0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_171()
{
{
    return GetStringCSF(aTxtSetBookmark_2, 0, g_Str_File_Init_CPP, 7882);
}
}
} // namespace gamemd

// 0x5377D0
namespace gamemd {
void * CreateTeamCommand::performAction_172()
{
{
    int *v1;
    int v2;
    ScenarioClass *result;
    int v4[2];
    int v5[2];
    v1 = ObjectClass::ComputeDelta(*(int **)&DataGlobal_87F8E4.__pad_5568[9432], v4);
    v5[0] = *v1;
    v5[1] = v1[1];
    v2 = *Tactical::PixelToCell(*(int *)&DataGlobal_87F8E4.__pad_5568[9432], (AbstractClass *)v4, (IUnknown *)v5);
    result = g_ScenarioClass_Instance;
    *(int *)((char *)g_ScenarioClass_Instance->view1 + 2) = v2;
    return result;
}
}
} // namespace gamemd

// 0x537830
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_174()
{
{
    return GetStringCSF(aTxtSetBookmark_3, 0, g_Str_File_Init_CPP, 7905);
}
}
} // namespace gamemd

// 0x537850
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_175()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7907);
}
}
} // namespace gamemd

// 0x537870
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_176()
{
{
    return GetStringCSF(aTxtSetBookmark_4, 0, g_Str_File_Init_CPP, 7909);
}
}
} // namespace gamemd

// 0x537890
namespace gamemd {
void * CreateTeamCommand::performAction_177()
{
{
    int *v1;
    int v2;
    ScenarioClass *result;
    int v4[2];
    int v5[2];
    v1 = ObjectClass::ComputeDelta(*(int **)&DataGlobal_87F8E4.__pad_5568[9432], v4);
    v5[0] = *v1;
    v5[1] = v1[1];
    v2 = *Tactical::PixelToCell(*(int *)&DataGlobal_87F8E4.__pad_5568[9432], (AbstractClass *)v4, (IUnknown *)v5);
    result = g_ScenarioClass_Instance;
    *(int *)((char *)g_ScenarioClass_Instance->view2 + 2) = v2;
    return result;
}
}
} // namespace gamemd

// 0x5378F0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_179()
{
{
    return GetStringCSF(aTxtSetBookmark_5, 0, g_Str_File_Init_CPP, 7932);
}
}
} // namespace gamemd

// 0x537910
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_180()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7934);
}
}
} // namespace gamemd

// 0x537930
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_181()
{
{
    return GetStringCSF(aTxtSetBookmark_6, 0, g_Str_File_Init_CPP, 7936);
}
}
} // namespace gamemd

// 0x537950
namespace gamemd {
void * CreateTeamCommand::performAction_182()
{
{
    int *v1;
    int v2;
    ScenarioClass *result;
    int v4[2];
    int v5[2];
    v1 = ObjectClass::ComputeDelta(*(int **)&DataGlobal_87F8E4.__pad_5568[9432], v4);
    v5[0] = *v1;
    v5[1] = v1[1];
    v2 = *Tactical::PixelToCell(*(int *)&DataGlobal_87F8E4.__pad_5568[9432], (AbstractClass *)v4, (IUnknown *)v5);
    result = g_ScenarioClass_Instance;
    *(int *)((char *)g_ScenarioClass_Instance->view3 + 2) = v2;
    return result;
}
}
} // namespace gamemd

// 0x5379B0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_184()
{
{
    return GetStringCSF(aTxtFollow, 0, g_Str_File_Init_CPP, 7959);
}
}
} // namespace gamemd

// 0x5379D0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_185()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7961);
}
}
} // namespace gamemd

// 0x5379F0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_186()
{
{
    return GetStringCSF(aTxtFollowDesc, 0, g_Str_File_Init_CPP, 7963);
}
}
} // namespace gamemd

// 0x537A10
namespace gamemd {
bool CreateTeamCommand::performAction_187()
{
{
    if ( !*(int *)&g_NetworkPlayerBuffer.__pad_14B0[476] || MapClass::GetScrollMode((int)&DataGlobal_87F7E8) )
    return MapClass::SetScrollMode((int)&DataGlobal_87F7E8, 0);
    else
    return MapClass::SetScrollMode((int)&DataGlobal_87F7E8, **(MouseClass ***)&g_NetworkPlayerBuffer.__pad_14B0[464]);
}
}
} // namespace gamemd

// 0x537AE0
namespace gamemd {
_UNKNOWN ** CreateTeamCommand::performAction_191()
{
{
    return &DataGlobal_827970;
}
}
} // namespace gamemd

// 0x537AF0
namespace gamemd {
int CreateTeamCommand::performAction_192()
{
{
    bool v1;
    char *v2;
    char *v3;
    v1 = DataGlobal_B04880 != 0;
    DataGlobal_B04880 = DataGlobal_B04880 == 0;
    v2 = aExtraSyncInfoO;
    if ( v1 )
    v2 = aExtraSyncInfoO_0;
    v3 = CharToWideString(v2);
    return MessageListClass::AddMessage(g_GameNetworkObject, 0, 0, (CellStruct *)v3, 3, (IUnknown *)0x4046, 150, 0);
}
}
} // namespace gamemd

// 0x537E80
namespace gamemd {
char * CreateTeamCommand::performAction_193()
{
{
    return DataGlobal_827ADC;
}
}
} // namespace gamemd

// 0x537E90
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_194()
{
{
    return GetStringCSF(DataGlobal_827AE8, 0, g_Str_File_Init_CPP, 8231);
}
}
} // namespace gamemd

// 0x537EB0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_195()
{
{
    return GetStringCSF(aGuiDebug, 0, g_Str_File_Init_CPP, 8232);
}
}
} // namespace gamemd

// 0x537ED0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_196()
{
{
    return GetStringCSF(aDescCursorchea, 0, g_Str_File_Init_CPP, 8233);
}
}
} // namespace gamemd

// 0x537EF0
namespace gamemd {
bool CreateTeamCommand::performAction_197(int a1)
{
{
    bool result;
    result = DataGlobal_A8F7D8 == 0;
    DataGlobal_A8F7D8 = DataGlobal_A8F7D8 == 0;
    return result;
}
}
} // namespace gamemd

// 0x537FA0
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_198(char a2)
{
{
    *(void**)this = vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x537FC0
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_199(char a2)
{
{
    *(void**)this = vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x537FE0
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_200(char a2)
{
{
    *(void**)this = vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x538000
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_201(char a2)
{
{
    *(void**)this = vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x538020
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_202(char a2)
{
{
    *(void**)this = vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x538040
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_203(char a2)
{
{
    *(void**)this = vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x538060
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_204(char a2)
{
{
    *(void**)this = vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x538080
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_205(char a2)
{
{
    *(void**)this = vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x5380A0
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_206(char a2)
{
{
    *(void**)this = vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x5380C0
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_207(char a2)
{
{
    *(void**)this = vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x5380E0
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_208(char a2)
{
{
    *(void**)this = vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x538100
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_209(char a2)
{
{
    *(void**)this = vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x538120
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_210(char a2)
{
{
    *(void**)this = vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x538140
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_211(char a2)
{
{
    *(void**)this = vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x538160
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_212(char a2)
{
{
    *(void**)this = vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x538180
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_213(char a2)
{
{
    *(void**)this = vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x5381A0
namespace gamemd {
ToggleSellCommandClass * CreateTeamCommand::performAction_214(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ToggleSellCommandClass *__thiscall CreateTeamCommand::performAction_214(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &CommandClass::`vftable'; /*0x5381a9*/
  if ( (a2 & 1) != 0 ) /*0x5381af*/
    __3_YAXPAX_Z(this); /*0x5381b2*/
  return (ToggleSellCommandClass *)this; /*0x5381bc*/
}
}
} // namespace gamemd

// 0x5381C0
namespace gamemd {
ToggleRepairCommandClass * CreateTeamCommand::performAction_215(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ToggleRepairCommandClass *__thiscall CreateTeamCommand::performAction_215(_DWORD *this, char a2)
{
  *this = &CommandClass::`vftable'; /*0x5381c9*/
  if ( (a2 & 1) != 0 ) /*0x5381cf*/
    __3_YAXPAX_Z(this); /*0x5381d2*/
  return (ToggleRepairCommandClass *)this; /*0x5381dc*/
}
}
} // namespace gamemd

// 0x5381E0
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_216(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall CreateTeamCommand::performAction_216(_DWORD *this, char a2)
{
  *this = &CommandClass::`vftable'; /*0x5381e9*/
  if ( (a2 & 1) != 0 ) /*0x5381ef*/
    __3_YAXPAX_Z(this); /*0x5381f2*/
  return this; /*0x5381fc*/
}
}
} // namespace gamemd

// 0x538200
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_217(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall CreateTeamCommand::performAction_217(_DWORD *this, char a2)
{
  *this = &CommandClass::`vftable'; /*0x538209*/
  if ( (a2 & 1) != 0 ) /*0x53820f*/
    __3_YAXPAX_Z(this); /*0x538212*/
  return this; /*0x53821c*/
}
}
} // namespace gamemd

// 0x538220
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_218(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall CreateTeamCommand::performAction_218(_DWORD *this, char a2)
{
  *this = &CommandClass::`vftable'; /*0x538229*/
  if ( (a2 & 1) != 0 ) /*0x53822f*/
    __3_YAXPAX_Z(this); /*0x538232*/
  return this; /*0x53823c*/
}
}
} // namespace gamemd

// 0x538240
namespace gamemd {
ScatterCommandClass * CreateTeamCommand::performAction_219(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ScatterCommandClass *__thiscall CreateTeamCommand::performAction_219(_DWORD *this, char a2)
{
  *this = &CommandClass::`vftable'; /*0x538249*/
  if ( (a2 & 1) != 0 ) /*0x53824f*/
    __3_YAXPAX_Z(this); /*0x538252*/
  return (ScatterCommandClass *)this; /*0x53825c*/
}
}
} // namespace gamemd

// 0x538260
namespace gamemd {
GuardCommandClass * CreateTeamCommand::performAction_220(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
GuardCommandClass *__thiscall CreateTeamCommand::performAction_220(_DWORD *this, char a2)
{
  *this = &CommandClass::`vftable'; /*0x538269*/
  if ( (a2 & 1) != 0 ) /*0x53826f*/
    __3_YAXPAX_Z(this); /*0x538272*/
  return (GuardCommandClass *)this; /*0x53827c*/
}
}
} // namespace gamemd

// 0x538280
namespace gamemd {
StopCommandClass * CreateTeamCommand::performAction_221(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
StopCommandClass *__thiscall CreateTeamCommand::performAction_221(_DWORD *this, char a2)
{
  *this = &CommandClass::`vftable'; /*0x538289*/
  if ( (a2 & 1) != 0 ) /*0x53828f*/
    __3_YAXPAX_Z(this); /*0x538292*/
  return (StopCommandClass *)this; /*0x53829c*/
}
}
} // namespace gamemd

// 0x5382A0
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_222(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall CreateTeamCommand::performAction_222(_DWORD *this, char a2)
{
  *this = &CommandClass::`vftable'; /*0x5382a9*/
  if ( (a2 & 1) != 0 ) /*0x5382af*/
    __3_YAXPAX_Z(this); /*0x5382b2*/
  return this; /*0x5382bc*/
}
}
} // namespace gamemd

// 0x5382C0
namespace gamemd {
DeployCommandClass * CreateTeamCommand::performAction_223(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DeployCommandClass *__thiscall CreateTeamCommand::performAction_223(_DWORD *this, char a2)
{
  *this = &CommandClass::`vftable'; /*0x5382c9*/
  if ( (a2 & 1) != 0 ) /*0x5382cf*/
    __3_YAXPAX_Z(this); /*0x5382d2*/
  return (DeployCommandClass *)this; /*0x5382dc*/
}
}
} // namespace gamemd

// 0x5382E0
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_224(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall CreateTeamCommand::performAction_224(_DWORD *this, char a2)
{
  *this = &CommandClass::`vftable'; /*0x5382e9*/
  if ( (a2 & 1) != 0 ) /*0x5382ef*/
    __3_YAXPAX_Z(this); /*0x5382f2*/
  return this; /*0x5382fc*/
}
}
} // namespace gamemd

// 0x538300
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_225(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall CreateTeamCommand::performAction_225(_DWORD *this, char a2)
{
  *this = &CommandClass::`vftable'; /*0x538309*/
  if ( (a2 & 1) != 0 ) /*0x53830f*/
    __3_YAXPAX_Z(this); /*0x538312*/
  return this; /*0x53831c*/
}
}
} // namespace gamemd

// 0x538320
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_226(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall CreateTeamCommand::performAction_226(_DWORD *this, char a2)
{
  *this = &CommandClass::`vftable'; /*0x538329*/
  if ( (a2 & 1) != 0 ) /*0x53832f*/
    __3_YAXPAX_Z(this); /*0x538332*/
  return this; /*0x53833c*/
}
}
} // namespace gamemd

// 0x538340
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_227(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall CreateTeamCommand::performAction_227(_DWORD *this, char a2)
{
  *this = &CommandClass::`vftable'; /*0x538349*/
  if ( (a2 & 1) != 0 ) /*0x53834f*/
    __3_YAXPAX_Z(this); /*0x538352*/
  return this; /*0x53835c*/
}
}
} // namespace gamemd

// 0x538360
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_228(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall CreateTeamCommand::performAction_228(_DWORD *this, char a2)
{
  *this = &CommandClass::`vftable'; /*0x538369*/
  if ( (a2 & 1) != 0 ) /*0x53836f*/
    __3_YAXPAX_Z(this); /*0x538372*/
  return this; /*0x53837c*/
}
}
} // namespace gamemd

// 0x538380
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_229(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall CreateTeamCommand::performAction_229(_DWORD *this, char a2)
{
  *this = &CommandClass::`vftable'; /*0x538389*/
  if ( (a2 & 1) != 0 ) /*0x53838f*/
    __3_YAXPAX_Z(this); /*0x538392*/
  return this; /*0x53839c*/
}
}
} // namespace gamemd

// 0x5383A0
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_230(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall CreateTeamCommand::performAction_230(_DWORD *this, char a2)
{
  *this = &CommandClass::`vftable'; /*0x5383a9*/
  if ( (a2 & 1) != 0 ) /*0x5383af*/
    __3_YAXPAX_Z(this); /*0x5383b2*/
  return this; /*0x5383bc*/
}
}
} // namespace gamemd

// 0x5383C0
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_231(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall CreateTeamCommand::performAction_231(_DWORD *this, char a2)
{
  *this = &CommandClass::`vftable'; /*0x5383c9*/
  if ( (a2 & 1) != 0 ) /*0x5383cf*/
    __3_YAXPAX_Z(this); /*0x5383d2*/
  return this; /*0x5383dc*/
}
}
} // namespace gamemd

// 0x5383E0
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_232(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall CreateTeamCommand::performAction_232(_DWORD *this, char a2)
{
  *this = &CommandClass::`vftable'; /*0x5383e9*/
  if ( (a2 & 1) != 0 ) /*0x5383ef*/
    __3_YAXPAX_Z(this); /*0x5383f2*/
  return this; /*0x5383fc*/
}
}
} // namespace gamemd

// 0x538400
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_233(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall CreateTeamCommand::performAction_233(_DWORD *this, char a2)
{
  *this = &CommandClass::`vftable'; /*0x538409*/
  if ( (a2 & 1) != 0 ) /*0x53840f*/
    __3_YAXPAX_Z(this); /*0x538412*/
  return this; /*0x53841c*/
}
}
} // namespace gamemd

// 0x538420
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_234(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall CreateTeamCommand::performAction_234(_DWORD *this, char a2)
{
  *this = &CommandClass::`vftable'; /*0x538429*/
  if ( (a2 & 1) != 0 ) /*0x53842f*/
    __3_YAXPAX_Z(this); /*0x538432*/
  return this; /*0x53843c*/
}
}
} // namespace gamemd

// 0x538440
namespace gamemd {
ScreenCaptureCommandClass * CreateTeamCommand::performAction_235(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ScreenCaptureCommandClass *__thiscall CreateTeamCommand::performAction_235(_DWORD *this, char a2)
{
  *this = &CommandClass::`vftable'; /*0x538449*/
  if ( (a2 & 1) != 0 ) /*0x53844f*/
    __3_YAXPAX_Z(this); /*0x538452*/
  return (ScreenCaptureCommandClass *)this; /*0x53845c*/
}
}
} // namespace gamemd

// 0x538460
namespace gamemd {
PageUserCommandClass * CreateTeamCommand::performAction_236(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
PageUserCommandClass *__thiscall CreateTeamCommand::performAction_236(_DWORD *this, char a2)
{
  *this = &CommandClass::`vftable'; /*0x538469*/
  if ( (a2 & 1) != 0 ) /*0x53846f*/
    __3_YAXPAX_Z(this); /*0x538472*/
  return (PageUserCommandClass *)this; /*0x53847c*/
}
}
} // namespace gamemd

// 0x538480
namespace gamemd {
CursorPositionCommandClass * CreateTeamCommand::performAction_237(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CursorPositionCommandClass *__thiscall CreateTeamCommand::performAction_237(_DWORD *this, char a2)
{
  *this = &CommandClass::`vftable'; /*0x538489*/
  if ( (a2 & 1) != 0 ) /*0x53848f*/
    __3_YAXPAX_Z(this); /*0x538492*/
  return (CursorPositionCommandClass *)this; /*0x53849c*/
}
}
} // namespace gamemd

// 0x5384A0
namespace gamemd {
DeleteCommandClass * CreateTeamCommand::performAction_238(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DeleteCommandClass *__thiscall CreateTeamCommand::performAction_238(_DWORD *this, char a2)
{
  *this = &CommandClass::`vftable'; /*0x5384a9*/
  if ( (a2 & 1) != 0 ) /*0x5384af*/
    __3_YAXPAX_Z(this); /*0x5384b2*/
  return (DeleteCommandClass *)this; /*0x5384bc*/
}
}
} // namespace gamemd

// 0x5384C0
namespace gamemd {
void CreateTeamCommand::performAction_239()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall CreateTeamCommand::sub_5384C0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x5384c6*/
  this->CreateTeamCommand_field_0x10 = 0; /*0x5384c9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x5384d0*/
  {
    __3_YAXPAX_Z(v2); /*0x5384d6*/
    this->CreateTeamCommand_field_0x4 = 0; /*0x5384de*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5384e1*/
  *(_DWORD *)(this + 8) = 0; /*0x5384e4*/
}
}
} // namespace gamemd

// 0x5384F0
namespace gamemd {
unsigned int CreateTeamCommand::performAction_240(int a2)
{
{
    if ( (unsigned char)this->CreateTeamCommand_field_0xC )
    return (unsigned int)(a2 - this->CreateTeamCommand_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x5386A0
namespace gamemd {
char CreateTeamCommand::performAction_241(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall CreateTeamCommand::sub_5386A0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5386ac*/
  {
    *((_BYTE *)this + 12) = 0; /*0x5386b2*/
    if ( a3 ) /*0x5386b8*/
      v4 = a3; /*0x5386ce*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5386ca*/
    *((_BYTE *)this + 12) = 1; /*0x5386d2*/
    if ( !v4 ) /*0x5386d6*/
      return 0; /*0x53874a*/
    if ( this->CreateTeamCommand_field_0x4 ) /*0x5386d8*/
    {
      v5 = *((_DWORD *)this + 2); /*0x5386df*/
      if ( a2 < v5 ) /*0x5386e4*/
        v5 = a2; /*0x5386e6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->CreateTeamCommand_field_0x4 + 4 * i - 4) ) /*0x5386ec*/
        ++i; /*0x5386f1*/
      if ( *((_BYTE *)this + 13) ) /*0x5386fe*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x538709*/
        this->CreateTeamCommand_field_0x4 = 0; /*0x538711*/
      }
    }
    this->CreateTeamCommand_field_0x4 = v4; /*0x53871a*/
    *((_DWORD *)this + 2) = a2; /*0x538722*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x538725*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x53872e*/
  }
  v7 = *((_DWORD *)this + 2); /*0x538731*/
  if ( v7 < this->CreateTeamCommand_field_0x10 ) /*0x538739*/
    this->CreateTeamCommand_field_0x10 = v7; /*0x53873b*/
  return 1; /*0x53873e*/
}
}
} // namespace gamemd

// 0x538750
namespace gamemd {
int CreateTeamCommand::performAction_242(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall CreateTeamCommand::sub_538750(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(this + 4); /*0x538750*/
  result = 0; /*0x538753*/
  if ( v2 <= 0 ) /*0x538758*/
    return -1; /*0x53876f*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x53875e*/
  {
    if ( ++result >= v2 ) /*0x53876d*/
      return -1; /*0x53876d*/
  }
  return result; /*0x538772*/
}
}
} // namespace gamemd

// 0x538A20
namespace gamemd {
rc_ptr_base * CreateTeamCommand::performAction_243(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
rc_ptr_base *__thiscall CreateTeamCommand::performAction_243(rc_ptr_base *this, char a2)
{
  int v3; // eax
  rc_ptr_base *v4; // ebp
  rc_ptr_base *v5; // esi
  int v6; // eax
  int v7; // edi

  if ( (a2 & 2) != 0 ) /*0x538a2b*/
  {
    v3 = *((_DWORD *)this - 1); /*0x538a2d*/
    v4 = this - 1; /*0x538a31*/
    v5 = this + 2 * v3; /*0x538a34*/
    v6 = v3 - 1; /*0x538a37*/
    if ( v6 >= 0 ) /*0x538a38*/
    {
      v7 = v6 + 1; /*0x538a3b*/
      do /*0x538a4f*/
      {
        v5 -= 2; /*0x538a3e*/
        v5->vfptr = &rc_ptr<WDTTerritory>::`vftable'; /*0x538a43*/
        ComPtr::Release(v5); /*0x538a49*/
        --v7; /*0x538a4e*/
      }
      while ( v7 ); /*0x538a4f*/
    }
    if ( (a2 & 1) != 0 ) /*0x538a55*/
      __3_YAXPAX_Z(v4); /*0x538a58*/
    return v4; /*0x538a60*/
  }
  else
  {
    this->vfptr = &rc_ptr<WDTTerritory>::`vftable'; /*0x538a6a*/
    ComPtr::Release(this); /*0x538a70*/
    if ( (a2 & 1) != 0 ) /*0x538a78*/
      __3_YAXPAX_Z(this); /*0x538a7b*/
    return this; /*0x538a83*/
  }
}
}
} // namespace gamemd

// 0x538AE0
namespace gamemd {
DynamicVector * CreateTeamCommand::performAction_244(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DynamicVector *__thiscall CreateTeamCommand::performAction_244(_DWORD *this, char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 1); /*0x538ae3*/
  *this = &VectorClass<CCINIClass *>::`vftable'; /*0x538ae6*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x538af0*/
  {
    __3_YAXPAX_Z(v3); /*0x538af8*/
    *(this + 1) = 0; /*0x538b00*/
  }
  *((_BYTE *)this + 13) = 0; /*0x538b0b*/
  *(this + 2) = 0; /*0x538b11*/
  if ( (a2 & 1) != 0 ) /*0x538b18*/
    __3_YAXPAX_Z(this); /*0x538b1b*/
  return (DynamicVector *)this; /*0x538b25*/
}
}
} // namespace gamemd

// 0x6A6A00
namespace gamemd {
char CreateTeamCommand::performAction_245(char a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_6A6A00(_DWORD *this, char a2, int a3)
{
  int v3; // eax
  _DWORD *v4; // esi
  int v6; // eax
  int v7; // eax

  if ( !MEMORY[0xA8ED8C] ) /*0x6a6a09*/
  {
    v3 = a3; /*0x6a6a0f*/
    if ( a3 == -1 ) /*0x6a6a16*/
      v3 = *(this + 5351); /*0x6a6a18*/
    v4 = this + 997 * v3 + 1361; /*0x6a6a2b*/
    if ( a2 ) /*0x6a6a38*/
    {
      if ( *(this + 997 * v3 + 1378) ) /*0x6a6a3a*/
      {
        --*(this + 997 * v3 + 1379); /*0x6a6a4b*/
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 56))(this, 0); /*0x6a6a50*/
        return 1; /*0x6a6a57*/
      }
      return 0; /*0x6a6a3f*/
    }
    v6 = 26; /*0x6a6a68*/
    if ( *((_DWORD *)MEMORY[0xA8B230] + 3374) ) /*0x6a6a60*/
      v6 = 18; /*0x6a6a6f*/
    v7 = (MEMORY[0x886F9C] - MEMORY[0xB0B4F8] - v6 + MEMORY[0x886F94] - 7) / 50; /*0x6a6aa4*/
    if ( HouseClass_Player == (#375 *)MEMORY[0xAC1198] ) /*0x6a6aae*/
    {
      if ( v4[17] + v7 / 2 < MEMORY[0x884CF8] ) /*0x6a6ac2*/
        goto LABEL_13; /*0x6a6ac2*/
    }
    else if ( 2 * (v7 + v4[17]) < v4[21] ) /*0x6a6ad2*/
    {
LABEL_13:
      ++v4[18]; /*0x6a6ad4*/
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 56))(this, 0); /*0x6a6adf*/
      return 1; /*0x6a6ae6*/
    }
  }
  return 0; /*0x6a6a53*/
}
}
} // namespace gamemd

// 0x731060
namespace gamemd {
void CreateTeamCommand::performAction_246()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_731060(char *this)
{
  int v1; // ebx
  int i; // edi
  int v4; // esi
  int v5; // ecx

  v1 = MEMORY[0xA8EC88]; /*0x731061*/
  for ( i = 0; i < v1; ++i )
  {
    v4 = *((_DWORD *)MEMORY[0xA8EC7C] + i); /*0x731077*/
    if ( v4 )
    {
      v5 = *(_DWORD *)(v4 + 540); /*0x731083*/
      if ( MEMORY[0xA8B238][0] ? House::IsHumanPlayer((#375 *)v5) : *(_BYTE *)(v5 + 493) )
      {
        if ( *(char **)(v4 + 532) == this - 1 ) /*0x7310a9*/
          *(_DWORD *)(v4 + 532) = -1; /*0x7310ab*/
        if ( *(_BYTE *)(v4 + 131) ) /*0x7310b5*/
          *(_DWORD *)(v4 + 532) = this - 1; /*0x7310bf*/
      }
    }
  }
}
}
} // namespace gamemd

// 0x535BD0
namespace gamemd {
char CreateTeamCommand::Stub(int a1)
{
return 0;
}
} // namespace gamemd

// 0x535BF0
namespace gamemd {
char CreateTeamCommand::Do(int a1)
{
return 0;
}
} // namespace gamemd

// 0x535EA0
namespace gamemd {
char * CreateTeamCommand::performAction_12()
{
return aInfantrytab;
}
} // namespace gamemd

// 0x535F30
namespace gamemd {
char * CreateTeamCommand::performAction_17()
{
return aUnittab;
}
} // namespace gamemd

// 0x5366A0
namespace gamemd {
char * CreateTeamCommand::performAction_31()
{
return g_INI_Key_PlanningMode;
}
} // namespace gamemd

// 0x536730
namespace gamemd {
char CreateTeamCommand::performAction_36()
{
return 1;
}
} // namespace gamemd

// 0x536770
namespace gamemd {
char * CreateTeamCommand::performAction_39()
{
return aCombatantselec;
}
} // namespace gamemd

// 0x536810
namespace gamemd {
char * CreateTeamCommand::performAction_45()
{
return g_INI_Key_TypeSelect;
}
} // namespace gamemd

// 0x536890
namespace gamemd {
char CreateTeamCommand::performAction_50()
{
return 1;
}
} // namespace gamemd

// 0x5368D0
namespace gamemd {
char * CreateTeamCommand::performAction_53()
{
return aHealthnav;
}
} // namespace gamemd

// 0x536970
namespace gamemd {
char * CreateTeamCommand::performAction_59()
{
return aVeterancynav;
}
} // namespace gamemd

// 0x536A10
namespace gamemd {
char * CreateTeamCommand::performAction_65()
{
return aPreviousobject;
}
} // namespace gamemd

// 0x536B10
namespace gamemd {
char * CreateTeamCommand::performAction_70()
{
return aStopobject;
}
} // namespace gamemd

// 0x536B90
namespace gamemd {
char * CreateTeamCommand::performAction_75()
{
return aAlltocheer;
}
} // namespace gamemd

// 0x536C10
namespace gamemd {
char * CreateTeamCommand::performAction_80()
{
return aDeployobject;
}
} // namespace gamemd

// 0x536C90
namespace gamemd {
char * CreateTeamCommand::performAction_85()
{
return aGuardobject;
}
} // namespace gamemd

// 0x536D10
namespace gamemd {
char * CreateTeamCommand::performAction_90()
{
return aScatterobject;
}
} // namespace gamemd

// 0x536D90
namespace gamemd {
char * CreateTeamCommand::performAction_95()
{
return aCenterview;
}
} // namespace gamemd

// 0x536E30
namespace gamemd {
char * CreateTeamCommand::performAction_100()
{
return aCenterbase;
}
} // namespace gamemd

// 0x536EB0
namespace gamemd {
char * CreateTeamCommand::performAction_105()
{
return aTogglealliance;
}
} // namespace gamemd

// 0x536F30
namespace gamemd {
char * CreateTeamCommand::performAction_110()
{
return aTogglerepair;
}
} // namespace gamemd

// 0x536FB0
namespace gamemd {
char * CreateTeamCommand::performAction_114()
{
return aTogglesell;
}
} // namespace gamemd

// 0x537030
namespace gamemd {
char * CreateTeamCommand::performAction_119()
{
return aPlacebeacon;
}
} // namespace gamemd

// 0x5370C0
namespace gamemd {
char * CreateTeamCommand::performAction_124()
{
return aCenteronradare;
}
} // namespace gamemd

// 0x537140
namespace gamemd {
char * CreateTeamCommand::performAction_129()
{
return aSidebarup;
}
} // namespace gamemd

// 0x5371D0
namespace gamemd {
char * CreateTeamCommand::performAction_134()
{
return aSidebardown;
}
} // namespace gamemd

// 0x5372E0
namespace gamemd {
char * CreateTeamCommand::performAction_144()
{
return aView1;
}
} // namespace gamemd

// 0x5373D0
namespace gamemd {
char * CreateTeamCommand::performAction_149()
{
return aView2;
}
} // namespace gamemd

// 0x5374C0
namespace gamemd {
char * CreateTeamCommand::performAction_154()
{
return aView3;
}
} // namespace gamemd

// 0x5375B0
namespace gamemd {
char * CreateTeamCommand::performAction_159()
{
return aView4;
}
} // namespace gamemd

// 0x5376A0
namespace gamemd {
char * CreateTeamCommand::performAction_163()
{
return aSetview1;
}
} // namespace gamemd

// 0x537760
namespace gamemd {
char * CreateTeamCommand::performAction_168()
{
return aSetview2;
}
} // namespace gamemd

// 0x537820
namespace gamemd {
char * CreateTeamCommand::performAction_173()
{
return aSetview3;
}
} // namespace gamemd

// 0x5378E0
namespace gamemd {
char * CreateTeamCommand::performAction_178()
{
return aSetview4;
}
} // namespace gamemd

// 0x5379A0
namespace gamemd {
char * CreateTeamCommand::performAction_183()
{
return aFollow;
}
} // namespace gamemd

// 0x537AB0
namespace gamemd {
char * CreateTeamCommand::performAction_188()
{
return aExtrasynccheck;
}
} // namespace gamemd

// 0x537AC0
namespace gamemd {
const wchar_t * CreateTeamCommand::performAction_189()
{
return g_INI_Key_De;
}
} // namespace gamemd

// 0x537AD0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_190()
{
return aGameSyncLoggin;
}
} // namespace gamemd
