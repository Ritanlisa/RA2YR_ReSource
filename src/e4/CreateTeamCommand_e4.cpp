// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/CreateTeamCommand_e4.hpp"

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
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::_vt02(const wchar_t **this)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = *(this + 1); /*0x535c45*/
  StringCSF = GetStringCSF(MEMORY[0x826F94], 0, g_Str_File_Init_CPP, 6165); /*0x535c55*/
  swprintf(&MEMORY[0xA8F654], (const size_t)StringCSF, v3); /*0x535c60*/
  return &MEMORY[0xA8F654]; /*0x535c6d*/
}
}
} // namespace gamemd

// 0x535C70
namespace gamemd {
wchar_t * CreateTeamCommand::ddtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *CreateTeamCommand::_vt03()
{
  return GetStringCSF(MEMORY[0x826FA4], 0, g_Str_File_Init_CPP, 6167); /*0x535c86*/
}
}
} // namespace gamemd

// 0x535C90
namespace gamemd {
wchar_t * CreateTeamCommand::Read()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::_vt04(const wchar_t **this)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = *(this + 1); /*0x535c95*/
  StringCSF = GetStringCSF(MEMORY[0x826FB0], 0, g_Str_File_Init_CPP, 6169); /*0x535ca5*/
  swprintf(&MEMORY[0xA8F654], (const size_t)StringCSF, v3); /*0x535cb0*/
  return &MEMORY[0xA8F654]; /*0x535cbd*/
}
}
} // namespace gamemd

// 0x535CC0
namespace gamemd {
void CreateTeamCommand::Undo(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall CreateTeamCommand::_vt08(char **this, int a2)
{
  CreateTeamCommand::performAction_246(*(this + 1)); /*0x535cc3*/
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
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall CreateTeamCommand::performAction_2(SetStructureTabCommandClass *this)
{
  return MEMORY[0x826FC8]; /*0x535d25*/
}
}
} // namespace gamemd

// 0x535D30
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_3()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_3(SetStructureTabCommandClass *this)
{
  return GetStringCSF(MEMORY[0x826FD8], 0, g_Str_File_Init_CPP, 6186); /*0x535d46*/
}
}
} // namespace gamemd

// 0x535D50
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_4()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_4(SetStructureTabCommandClass *this)
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 6188); /*0x535d66*/
}
}
} // namespace gamemd

// 0x535D70
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_5()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_5(SetStructureTabCommandClass *this)
{
  return GetStringCSF(MEMORY[0x826FFC], 0, g_Str_File_Init_CPP, 6190); /*0x535d86*/
}
}
} // namespace gamemd

// 0x535D90
namespace gamemd {
char CreateTeamCommand::performAction_6()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall CreateTeamCommand::performAction_6(SetStructureTabCommandClass *this)
{
  int _7342A0; // eax
  int v2; // eax
  _DWORD *v4; // [esp-4h] [ebp-4h]

  LOBYTE(_7342A0) = PlayerClass::HasPlayers(&MEMORY[0x87F8E4].__pad_125C[492]); /*0x535d95*/
  if ( (_BYTE)_7342A0 ) /*0x535d9c*/
  {
    SidebarClass::SwitchTab((int)&MEMORY[0x87F7E8], 0); /*0x535da5*/
    _7342A0 = UI_Create_7342A0(); /*0x535daa*/
    if ( _7342A0 ) /*0x535db1*/
    {
      v4 = (_DWORD *)_7342A0; /*0x535db5*/
      v2 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)_7342A0 + 400))(_7342A0, 0, 0); /*0x535dbc*/
      LOBYTE(_7342A0) = BuildingPlacement::Activate((int)HouseClass_Player, v2, v4); /*0x535dc9*/
    }
  }
  return _7342A0; /*0x535dce*/
}
}
} // namespace gamemd

// 0x535DE0
namespace gamemd {
char * CreateTeamCommand::performAction_7()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall CreateTeamCommand::performAction_7(SetDefenseTabCommandClass *this)
{
  return MEMORY[0x827014]; /*0x535de5*/
}
}
} // namespace gamemd

// 0x535DF0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_8()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_8(SetDefenseTabCommandClass *this)
{
  return GetStringCSF(MEMORY[0x827020], 0, g_Str_File_Init_CPP, 6212); /*0x535e06*/
}
}
} // namespace gamemd

// 0x535E10
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_9()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_9(SetDefenseTabCommandClass *this)
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 6214); /*0x535e26*/
}
}
} // namespace gamemd

// 0x535E30
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_10(SetDefenseTabCommandClass *this)
{
  return GetStringCSF(aTxtDefenseTabD, 0, g_Str_File_Init_CPP, 6216); /*0x535e46*/
}
}
} // namespace gamemd

// 0x535E50
namespace gamemd {
char CreateTeamCommand::performAction_11()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall CreateTeamCommand::performAction_11(SetDefenseTabCommandClass *this)
{
  int _7342B0; // eax
  int v2; // eax
  _DWORD *v4; // [esp-4h] [ebp-4h]

  LOBYTE(_7342B0) = PlayerClass::HasPlayers(&MEMORY[0x87F8E4].__pad_125C[4480]); /*0x535e55*/
  if ( (_BYTE)_7342B0 ) /*0x535e5c*/
  {
    SidebarClass::SwitchTab((int)&MEMORY[0x87F7E8], 1); /*0x535e65*/
    _7342B0 = UI_Create_7342B0(); /*0x535e6a*/
    if ( _7342B0 ) /*0x535e71*/
    {
      v4 = (_DWORD *)_7342B0; /*0x535e75*/
      v2 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)_7342B0 + 400))(_7342B0, 0, 0); /*0x535e7c*/
      LOBYTE(_7342B0) = BuildingPlacement::Activate((int)HouseClass_Player, v2, v4); /*0x535e89*/
    }
  }
  return _7342B0; /*0x535e8e*/
}
}
} // namespace gamemd

// 0x535EA0
namespace gamemd {
char * CreateTeamCommand::performAction_12()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall CreateTeamCommand::performAction_12(SetInfantryTabCommandClass *this)
{
  return aInfantrytab; /*0x535ea5*/
}
}
} // namespace gamemd

// 0x535EB0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_13()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_13(SetInfantryTabCommandClass *this)
{
  return GetStringCSF(aTxtInfantryTab, 0, g_Str_File_Init_CPP, 6238); /*0x535ec6*/
}
}
} // namespace gamemd

// 0x535ED0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_14()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_14(SetInfantryTabCommandClass *this)
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 6240); /*0x535ee6*/
}
}
} // namespace gamemd

// 0x535EF0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_15()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_15(SetInfantryTabCommandClass *this)
{
  return GetStringCSF(aTxtInfantryTab_0, 0, g_Str_File_Init_CPP, 6242); /*0x535f06*/
}
}
} // namespace gamemd

// 0x535F10
namespace gamemd {
int CreateTeamCommand::performAction_16()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall CreateTeamCommand::performAction_16(SetInfantryTabCommandClass *this)
{
  int result; // eax

  result = PlayerClass::HasPlayers(&MEMORY[0x87F8E4].__pad_125C[8468]); /*0x535f15*/
  if ( (_BYTE)result ) /*0x535f1c*/
    return SidebarClass::SwitchTab((int)&MEMORY[0x87F7E8], 2); /*0x535f25*/
  return result; /*0x535f2a*/
}
}
} // namespace gamemd

// 0x535F30
namespace gamemd {
char * CreateTeamCommand::performAction_17()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall CreateTeamCommand::performAction_17(SetUnitTabCommandClass *this)
{
  return aUnittab; /*0x535f35*/
}
}
} // namespace gamemd

// 0x535F40
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_18()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_18(SetUnitTabCommandClass *this)
{
  return GetStringCSF(aTxtUnitTab, 0, g_Str_File_Init_CPP, 6259); /*0x535f56*/
}
}
} // namespace gamemd

// 0x535F60
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_19()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_19(SetUnitTabCommandClass *this)
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 6261); /*0x535f76*/
}
}
} // namespace gamemd

// 0x535F80
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_20(SetUnitTabCommandClass *this)
{
  return GetStringCSF(aTxtUnitTabDesc, 0, g_Str_File_Init_CPP, 6263); /*0x535f96*/
}
}
} // namespace gamemd

// 0x535FA0
namespace gamemd {
int CreateTeamCommand::performAction_21()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall CreateTeamCommand::performAction_21(SetUnitTabCommandClass *this)
{
  int result; // eax

  result = PlayerClass::HasPlayers(&MEMORY[0x87F8E4].__pad_125C[12456]); /*0x535fa5*/
  if ( (_BYTE)result ) /*0x535fac*/
    return SidebarClass::SwitchTab((int)&MEMORY[0x87F7E8], 3); /*0x535fb5*/
  return result; /*0x535fba*/
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
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall CreateTeamCommand::performAction_26(NextObjectCommandClass *this)
{
  return MEMORY[0x827234]; /*0x5365a5*/
}
}
} // namespace gamemd

// 0x5365B0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_27()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_27(NextObjectCommandClass *this)
{
  return GetStringCSF(MEMORY[0x827240], 0, g_Str_File_Init_CPP, 6526); /*0x5365c6*/
}
}
} // namespace gamemd

// 0x5365D0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_28()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_28(NextObjectCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_SELECTION, 0, g_Str_File_Init_CPP, 6528); /*0x5365e6*/
}
}
} // namespace gamemd

// 0x5365F0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_29()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_29(NextObjectCommandClass *this)
{
  return GetStringCSF(aTxtNextObjectD, 0, g_Str_File_Init_CPP, 6530); /*0x536606*/
}
}
} // namespace gamemd

// 0x536610
namespace gamemd {
unsigned char * CreateTeamCommand::performAction_30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_BYTE *__thiscall CreateTeamCommand::performAction_30(NextObjectCommandClass *this)
{
  _BYTE *v1; // eax
  _BYTE *result; // eax
  _BYTE *v3; // esi

  TacticalClass::SetObserverMode(&MEMORY[0x87F7E8], 0); /*0x536617*/
  TacticalClass::SetDisplayMode(&MEMORY[0x87F7E8], 0, 0); /*0x536625*/
  BuildingClass::TogglePower2(&MEMORY[0x87F7E8], 0); /*0x536631*/
  BuildingClass::TogglePower(&MEMORY[0x87F7E8], 0); /*0x53663d*/
  if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[476] ) /*0x536649*/
    v1 = **(_BYTE ***)&MEMORY[0xA8D63C].__pad_14B0[464]; /*0x536650*/
  else
    v1 = 0; /*0x536654*/
  result = sub_4AA2B0(v1); /*0x53665d*/
  v3 = result; /*0x536662*/
  if ( result ) /*0x536666*/
  {
    MapClass::UnselectAll_ClearLimboLaunchers(); /*0x536668*/
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 332))(v3); /*0x536671*/
    TacticalClass::InterpolateView(); /*0x53667c*/
    return (_BYTE *)MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 1); /*0x536688*/
  }
  return result; /*0x53668e*/
}
}
} // namespace gamemd

// 0x5366A0
namespace gamemd {
char * CreateTeamCommand::performAction_31()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall CreateTeamCommand::performAction_31(PlanningModeCommandClass *this)
{
  return g_INI_Key_PlanningMode; /*0x5366a5*/
}
}
} // namespace gamemd

// 0x5366B0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_32()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_32(PlanningModeCommandClass *this)
{
  return GetStringCSF(aCmndPlanningmo, 0, g_Str_File_Init_CPP, 6580); /*0x5366c6*/
}
}
} // namespace gamemd

// 0x5366D0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_33()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_33(PlanningModeCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_CONTROL, 0, g_Str_File_Init_CPP, 6582); /*0x5366e6*/
}
}
} // namespace gamemd

// 0x5366F0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_34()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_34(PlanningModeCommandClass *this)
{
  return GetStringCSF(aCmndPlanningmo_0, 0, g_Str_File_Init_CPP, 6584); /*0x536706*/
}
}
} // namespace gamemd

// 0x536710
namespace gamemd {
BOOL CreateTeamCommand::performAction_35()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __thiscall CreateTeamCommand::performAction_35(PlanningModeCommandClass *this)
{
  char v2; // [esp+5h] [ebp+5h]

  return (v2 & 7) != 0; /*0x53671b*/
}
}
} // namespace gamemd

// 0x536730
namespace gamemd {
char CreateTeamCommand::performAction_36()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall CreateTeamCommand::performAction_36(PlanningModeCommandClass *this)
{
  return 1; /*0x536732*/
}
}
} // namespace gamemd

// 0x536740
namespace gamemd {
unsigned int CreateTeamCommand::performAction_37()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall CreateTeamCommand::performAction_37(PlanningModeCommandClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return ((unsigned int)~v2 >> 11) & 1; /*0x53674c*/
}
}
} // namespace gamemd

// 0x536750
namespace gamemd {
int CreateTeamCommand::performAction_38()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall CreateTeamCommand::performAction_38(PlanningModeCommandClass *this)
{
  char v2; // [esp+5h] [ebp+5h]

  if ( (v2 & 8) != 0 ) /*0x536757*/
    return UI_Create_731A70(0); /*0x53675b*/
  else
    return UI_Create_731A50(0); /*0x536765*/
}
}
} // namespace gamemd

// 0x536770
namespace gamemd {
char * CreateTeamCommand::performAction_39()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall CreateTeamCommand::performAction_39(CombatantSelectCommandClass *this)
{
  return aCombatantselec; /*0x536775*/
}
}
} // namespace gamemd

// 0x536780
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_40(CombatantSelectCommandClass *this)
{
  return GetStringCSF(aCmndCombatants, 0, g_Str_File_Init_CPP, 6664); /*0x536796*/
}
}
} // namespace gamemd

// 0x5367A0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_41()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_41(CombatantSelectCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_SELECTION, 0, g_Str_File_Init_CPP, 6666); /*0x5367b6*/
}
}
} // namespace gamemd

// 0x5367C0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_42()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_42(CombatantSelectCommandClass *this)
{
  return GetStringCSF(aCmndCombatants_0, 0, g_Str_File_Init_CPP, 6668); /*0x5367d6*/
}
}
} // namespace gamemd

// 0x5367E0
namespace gamemd {
int CreateTeamCommand::performAction_43()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall CreateTeamCommand::performAction_43(CombatantSelectCommandClass *this)
{
  unsigned int v2; // [esp+4h] [ebp+4h]

  return (v2 >> 8) & 1; /*0x5367ea*/
}
}
} // namespace gamemd

// 0x5367F0
namespace gamemd {
int CreateTeamCommand::performAction_44()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall CreateTeamCommand::performAction_44(CombatantSelectCommandClass *this)
{
  unsigned int v1; // ecx
  unsigned int v3; // [esp+4h] [ebp+4h]

  v1 = v3 >> 8; /*0x5367f4*/
  LOBYTE(v1) = (v3 & 0x100) == 0; /*0x5367f9*/
  return ((int (__thiscall *)(unsigned int))loc_732280)(v1); /*0x536801*/
}
}
} // namespace gamemd

// 0x536810
namespace gamemd {
char * CreateTeamCommand::performAction_45()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall CreateTeamCommand::performAction_45(TypeSelectCommandClass *this)
{
  return g_INI_Key_TypeSelect; /*0x536815*/
}
}
} // namespace gamemd

// 0x536820
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_46()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_46(TypeSelectCommandClass *this)
{
  return GetStringCSF(aCmndTypeselect, 0, g_Str_File_Init_CPP, 6690); /*0x536836*/
}
}
} // namespace gamemd

// 0x536840
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_47()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_47(TypeSelectCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_SELECTION, 0, g_Str_File_Init_CPP, 6692); /*0x536856*/
}
}
} // namespace gamemd

// 0x536860
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_48()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_48(TypeSelectCommandClass *this)
{
  return GetStringCSF(aCmndTypeselect_0, 0, g_Str_File_Init_CPP, 6694); /*0x536876*/
}
}
} // namespace gamemd

// 0x536880
namespace gamemd {
int CreateTeamCommand::performAction_49()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall CreateTeamCommand::performAction_49(TypeSelectCommandClass *this)
{
  unsigned int v2; // [esp+4h] [ebp+4h]

  return (v2 >> 8) & 1; /*0x53688a*/
}
}
} // namespace gamemd

// 0x536890
namespace gamemd {
char CreateTeamCommand::performAction_50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall CreateTeamCommand::performAction_50(TypeSelectCommandClass *this)
{
  return 1; /*0x536892*/
}
}
} // namespace gamemd

// 0x5368A0
namespace gamemd {
unsigned int CreateTeamCommand::performAction_51()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall CreateTeamCommand::performAction_51(TypeSelectCommandClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return ((unsigned int)~v2 >> 11) & 1; /*0x5368ac*/
}
}
} // namespace gamemd

// 0x5368B0
namespace gamemd {
char CreateTeamCommand::performAction_52()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall CreateTeamCommand::performAction_52(TypeSelectCommandClass *this)
{
  char v2; // [esp+5h] [ebp+5h]

  if ( (v2 & 8) != 0 ) /*0x5368b7*/
    return UI_Create_732CC0(); /*0x5368b9*/
  else
    return UI_Create_732CA0(); /*0x5368c1*/
}
}
} // namespace gamemd

// 0x5368D0
namespace gamemd {
char * CreateTeamCommand::performAction_53()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall CreateTeamCommand::performAction_53(HealthNavCommandClass *this)
{
  return aHealthnav; /*0x5368d5*/
}
}
} // namespace gamemd

// 0x5368E0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_54()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_54(HealthNavCommandClass *this)
{
  return GetStringCSF(aCmndHealthnavi, 0, g_Str_File_Init_CPP, 6728); /*0x5368f6*/
}
}
} // namespace gamemd

// 0x536900
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_55()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_55(HealthNavCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_SELECTION, 0, g_Str_File_Init_CPP, 6730); /*0x536916*/
}
}
} // namespace gamemd

// 0x536920
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_56()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_56(HealthNavCommandClass *this)
{
  return GetStringCSF(aCmndHealthnavi_0, 0, g_Str_File_Init_CPP, 6732); /*0x536936*/
}
}
} // namespace gamemd

// 0x536940
namespace gamemd {
int CreateTeamCommand::performAction_57()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall CreateTeamCommand::performAction_57(HealthNavCommandClass *this)
{
  unsigned int v2; // [esp+4h] [ebp+4h]

  return (v2 >> 8) & 1; /*0x53694a*/
}
}
} // namespace gamemd

// 0x536950
namespace gamemd {
int CreateTeamCommand::performAction_58()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall CreateTeamCommand::performAction_58(HealthNavCommandClass *this)
{
  HealthNavCommandClass *v1; // ecx
  unsigned int v3; // [esp+4h] [ebp+4h]

  v1 = (HealthNavCommandClass *)(v3 >> 8); /*0x536954*/
  LOBYTE(v1) = (v3 & 0x100) == 0; /*0x536959*/
  return UpdateUnitHealthTooltip(v1); /*0x536961*/
}
}
} // namespace gamemd

// 0x536970
namespace gamemd {
char * CreateTeamCommand::performAction_59()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall CreateTeamCommand::performAction_59(VeterancyNavCommandClass *this)
{
  return aVeterancynav; /*0x536975*/
}
}
} // namespace gamemd

// 0x536980
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_60(VeterancyNavCommandClass *this)
{
  return GetStringCSF(aCmndVetnavigat, 0, g_Str_File_Init_CPP, 6754); /*0x536996*/
}
}
} // namespace gamemd

// 0x5369A0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_61()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_61(VeterancyNavCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_SELECTION, 0, g_Str_File_Init_CPP, 6756); /*0x5369b6*/
}
}
} // namespace gamemd

// 0x5369C0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_62()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_62(VeterancyNavCommandClass *this)
{
  return GetStringCSF(aCmndVetnavigat_0, 0, g_Str_File_Init_CPP, 6758); /*0x5369d6*/
}
}
} // namespace gamemd

// 0x5369E0
namespace gamemd {
int CreateTeamCommand::performAction_63()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall CreateTeamCommand::performAction_63(VeterancyNavCommandClass *this)
{
  unsigned int v2; // [esp+4h] [ebp+4h]

  return (v2 >> 8) & 1; /*0x5369ea*/
}
}
} // namespace gamemd

// 0x5369F0
namespace gamemd {
int CreateTeamCommand::performAction_64()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall CreateTeamCommand::performAction_64(VeterancyNavCommandClass *this)
{
  VeterancyNavCommandClass *v1; // ecx
  unsigned int v3; // [esp+4h] [ebp+4h]

  v1 = (VeterancyNavCommandClass *)(v3 >> 8); /*0x5369f4*/
  LOBYTE(v1) = (v3 & 0x100) == 0; /*0x5369f9*/
  return DrawUnitExperiencePopup(v1); /*0x536a01*/
}
}
} // namespace gamemd

// 0x536A10
namespace gamemd {
char * CreateTeamCommand::performAction_65()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall CreateTeamCommand::performAction_65(PrevObjectCommandClass *this)
{
  return aPreviousobject; /*0x536a15*/
}
}
} // namespace gamemd

// 0x536A20
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_66()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_66(PrevObjectCommandClass *this)
{
  return GetStringCSF(aTxtPrevObject, 0, g_Str_File_Init_CPP, 6817); /*0x536a36*/
}
}
} // namespace gamemd

// 0x536A40
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_67()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_67(PrevObjectCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_SELECTION, 0, g_Str_File_Init_CPP, 6819); /*0x536a56*/
}
}
} // namespace gamemd

// 0x536A60
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_68()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_68(PrevObjectCommandClass *this)
{
  return GetStringCSF(aTxtPrevObjectD, 0, g_Str_File_Init_CPP, 6821); /*0x536a76*/
}
}
} // namespace gamemd

// 0x536A80
namespace gamemd {
unsigned char * CreateTeamCommand::performAction_69()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_BYTE *__thiscall CreateTeamCommand::performAction_69(PrevObjectCommandClass *this)
{
  _BYTE *v1; // eax
  _BYTE *result; // eax
  _BYTE *v3; // esi

  TacticalClass::SetObserverMode(&MEMORY[0x87F7E8], 0); /*0x536a87*/
  TacticalClass::SetDisplayMode(&MEMORY[0x87F7E8], 0, 0); /*0x536a95*/
  BuildingClass::TogglePower2(&MEMORY[0x87F7E8], 0); /*0x536aa1*/
  BuildingClass::TogglePower(&MEMORY[0x87F7E8], 0); /*0x536aad*/
  if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[476] ) /*0x536ab9*/
    v1 = **(_BYTE ***)&MEMORY[0xA8D63C].__pad_14B0[464]; /*0x536ac0*/
  else
    v1 = 0; /*0x536ac4*/
  result = sub_4AA380(v1); /*0x536acd*/
  v3 = result; /*0x536ad2*/
  if ( result ) /*0x536ad6*/
  {
    MapClass::UnselectAll_ClearLimboLaunchers(); /*0x536ad8*/
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 332))(v3); /*0x536ae1*/
    TacticalClass::InterpolateView(); /*0x536aec*/
    return (_BYTE *)MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 1); /*0x536af8*/
  }
  return result; /*0x536afe*/
}
}
} // namespace gamemd

// 0x536B10
namespace gamemd {
char * CreateTeamCommand::performAction_70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *CreateTeamCommand::sub_536B10()
{
  return aStopobject; /*0x536b15*/
}
}
} // namespace gamemd

// 0x536B20
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_71()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *CreateTeamCommand::sub_536B20()
{
  return GetStringCSF(aTxtStopObject, 0, g_Str_File_Init_CPP, 6858); /*0x536b36*/
}
}
} // namespace gamemd

// 0x536B40
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_72()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *CreateTeamCommand::sub_536B40()
{
  return GetStringCSF(g_Str_TXT_CONTROL, 0, g_Str_File_Init_CPP, 6860); /*0x536b56*/
}
}
} // namespace gamemd

// 0x536B60
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_73()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *CreateTeamCommand::sub_536B60()
{
  return GetStringCSF(aTxtStopObjectD, 0, g_Str_File_Init_CPP, 6862); /*0x536b76*/
}
}
} // namespace gamemd

// 0x536B80
namespace gamemd {
int CreateTeamCommand_performAction_74()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
wchar_t *__stdcall CreateTeamCommand::sub_536B80(int a1)
{
  return UI_Create_730EA0(); /*0x536b85*/
}
}
} // namespace gamemd

// 0x536B90
namespace gamemd {
char * CreateTeamCommand::performAction_75()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall CreateTeamCommand::performAction_75(AllToCheerCommandClass *this)
{
  return aAlltocheer; /*0x536b95*/
}
}
} // namespace gamemd

// 0x536BA0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_76()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_76(AllToCheerCommandClass *this)
{
  return GetStringCSF(aCmndAllcheer, 0, g_Str_File_Init_CPP, 6876); /*0x536bb6*/
}
}
} // namespace gamemd

// 0x536BC0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_77()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_77(AllToCheerCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_CONTROL, 0, g_Str_File_Init_CPP, 6878); /*0x536bd6*/
}
}
} // namespace gamemd

// 0x536BE0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_78()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_78(AllToCheerCommandClass *this)
{
  return GetStringCSF(aCmndAllcheerde, 0, g_Str_File_Init_CPP, 6880); /*0x536bf6*/
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

// 0x536C10
namespace gamemd {
char * CreateTeamCommand::performAction_80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *CreateTeamCommand::sub_536C10()
{
  return aDeployobject; /*0x536c15*/
}
}
} // namespace gamemd

// 0x536C20
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_81()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *CreateTeamCommand::sub_536C20()
{
  return GetStringCSF(aTxtDeployObjec, 0, g_Str_File_Init_CPP, 6903); /*0x536c36*/
}
}
} // namespace gamemd

// 0x536C40
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_82()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *CreateTeamCommand::sub_536C40()
{
  return GetStringCSF(g_Str_TXT_CONTROL, 0, g_Str_File_Init_CPP, 6905); /*0x536c56*/
}
}
} // namespace gamemd

// 0x536C60
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_83()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *CreateTeamCommand::sub_536C60()
{
  return GetStringCSF(aTxtDeployObjec_0, 0, g_Str_File_Init_CPP, 6907); /*0x536c76*/
}
}
} // namespace gamemd

// 0x536C80
namespace gamemd {
int CreateTeamCommand_performAction_84()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
char __stdcall CreateTeamCommand::sub_536C80(int a1)
{
  return ProcessSelectionExperience(); /*0x536c85*/
}
}
} // namespace gamemd

// 0x536C90
namespace gamemd {
char * CreateTeamCommand::performAction_85()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *CreateTeamCommand::sub_536C90()
{
  return aGuardobject; /*0x536c95*/
}
}
} // namespace gamemd

// 0x536CA0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_86()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *CreateTeamCommand::sub_536CA0()
{
  return GetStringCSF(aTxtGuard, 0, g_Str_File_Init_CPP, 6931); /*0x536cb6*/
}
}
} // namespace gamemd

// 0x536CC0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_87()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *CreateTeamCommand::sub_536CC0()
{
  return GetStringCSF(g_Str_TXT_CONTROL, 0, g_Str_File_Init_CPP, 6933); /*0x536cd6*/
}
}
} // namespace gamemd

// 0x536CE0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_88()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *CreateTeamCommand::sub_536CE0()
{
  return GetStringCSF(aTxtGuardDesc, 0, g_Str_File_Init_CPP, 6935); /*0x536cf6*/
}
}
} // namespace gamemd

// 0x536D00
namespace gamemd {
int CreateTeamCommand_performAction_89()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
char __stdcall CreateTeamCommand::sub_536D00(int a1)
{
  return GetFactoryData(); /*0x536d05*/
}
}
} // namespace gamemd

// 0x536D10
namespace gamemd {
char * CreateTeamCommand::performAction_90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *CreateTeamCommand::sub_536D10()
{
  return aScatterobject; /*0x536d15*/
}
}
} // namespace gamemd

// 0x536D20
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_91()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *CreateTeamCommand::sub_536D20()
{
  return GetStringCSF(aTxtScatter, 0, g_Str_File_Init_CPP, 6960); /*0x536d36*/
}
}
} // namespace gamemd

// 0x536D40
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_92()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *CreateTeamCommand::sub_536D40()
{
  return GetStringCSF(g_Str_TXT_CONTROL, 0, g_Str_File_Init_CPP, 6962); /*0x536d56*/
}
}
} // namespace gamemd

// 0x536D60
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_93()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *CreateTeamCommand::sub_536D60()
{
  return GetStringCSF(aTxtScatterDesc, 0, g_Str_File_Init_CPP, 6964); /*0x536d76*/
}
}
} // namespace gamemd

// 0x536D80
namespace gamemd {
int CreateTeamCommand_performAction_94()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
wchar_t *__stdcall CreateTeamCommand::sub_536D80(int a1)
{
  return UI_Create_730FE0(); /*0x536d85*/
}
}
} // namespace gamemd

// 0x536D90
namespace gamemd {
char * CreateTeamCommand::performAction_95()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall CreateTeamCommand::performAction_95(CenterViewCommandClass *this)
{
  return aCenterview; /*0x536d95*/
}
}
} // namespace gamemd

// 0x536DA0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_96()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_96(CenterViewCommandClass *this)
{
  return GetStringCSF(aTxtCenterView, 0, g_Str_File_Init_CPP, 6987); /*0x536db6*/
}
}
} // namespace gamemd

// 0x536DC0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_97()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_97(CenterViewCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_SELECTION, 0, g_Str_File_Init_CPP, 6989); /*0x536dd6*/
}
}
} // namespace gamemd

// 0x536DE0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_98()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_98(CenterViewCommandClass *this)
{
  return GetStringCSF(aTxtCenterViewD, 0, g_Str_File_Init_CPP, 6991); /*0x536df6*/
}
}
} // namespace gamemd

// 0x536E00
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_99()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_99(CenterViewCommandClass *this)
{
  ParticleSystemClass *result; // eax

  result = *(ParticleSystemClass **)&MEMORY[0xA8D63C].__pad_14B0[476]; /*0x536e00*/
  if ( *(int *)&MEMORY[0xA8D63C].__pad_14B0[476] > 0 ) /*0x536e07*/
  {
    TacticalClass::InterpolateView(); /*0x536e0e*/
    return (wchar_t *)MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 1); /*0x536e1a*/
  }
  return (wchar_t *)result; /*0x536e1f*/
}
}
} // namespace gamemd

// 0x536E30
namespace gamemd {
char * CreateTeamCommand::performAction_100()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall CreateTeamCommand::performAction_100(CenterBaseCommandClass *this)
{
  return aCenterbase; /*0x536e35*/
}
}
} // namespace gamemd

// 0x536E40
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_101()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_101(CenterBaseCommandClass *this)
{
  return GetStringCSF(aTxtCenterBase, 0, g_Str_File_Init_CPP, 7018); /*0x536e56*/
}
}
} // namespace gamemd

// 0x536E60
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_102()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_102(CenterBaseCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_SELECTION, 0, g_Str_File_Init_CPP, 7020); /*0x536e76*/
}
}
} // namespace gamemd

// 0x536E80
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_103()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_103(CenterBaseCommandClass *this)
{
  return GetStringCSF(aTxtCenterBaseD, 0, g_Str_File_Init_CPP, 7022); /*0x536e96*/
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

// 0x536EB0
namespace gamemd {
char * CreateTeamCommand::performAction_105()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall CreateTeamCommand::performAction_105(AllianceCommandClass *this)
{
  return aTogglealliance; /*0x536eb5*/
}
}
} // namespace gamemd

// 0x536EC0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_106()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_106(AllianceCommandClass *this)
{
  return GetStringCSF(aTxtAlliance, 0, g_Str_File_Init_CPP, 7045); /*0x536ed6*/
}
}
} // namespace gamemd

// 0x536EE0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_107()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_107(AllianceCommandClass *this)
{
  return GetStringCSF(g_Str_TXT_CONTROL, 0, g_Str_File_Init_CPP, 7047); /*0x536ef6*/
}
}
} // namespace gamemd

// 0x536F00
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_108()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_108(AllianceCommandClass *this)
{
  return GetStringCSF(aTxtAllianceDes, 0, g_Str_File_Init_CPP, 7049); /*0x536f16*/
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

// 0x536F30
namespace gamemd {
char * CreateTeamCommand::performAction_110()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *CreateTeamCommand::sub_536F30()
{
  return aTogglerepair; /*0x536f35*/
}
}
} // namespace gamemd

// 0x536F40
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_111()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *CreateTeamCommand::sub_536F40()
{
  return GetStringCSF(aTxtRepairMode, 0, g_Str_File_Init_CPP, 7103); /*0x536f56*/
}
}
} // namespace gamemd

// 0x536F60
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_112()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *CreateTeamCommand::sub_536F60()
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 7105); /*0x536f76*/
}
}
} // namespace gamemd

// 0x536F80
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_113()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *CreateTeamCommand::sub_536F80()
{
  return GetStringCSF(aTxtRepairModeD, 0, g_Str_File_Init_CPP, 7107); /*0x536f96*/
}
}
} // namespace gamemd

// 0x536FB0
namespace gamemd {
char * CreateTeamCommand::performAction_114()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *CreateTeamCommand::sub_536FB0()
{
  return aTogglesell; /*0x536fb5*/
}
}
} // namespace gamemd

// 0x536FC0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_115()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *CreateTeamCommand::sub_536FC0()
{
  return GetStringCSF(aTxtSellMode, 0, g_Str_File_Init_CPP, 7129); /*0x536fd6*/
}
}
} // namespace gamemd

// 0x536FE0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_116()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *CreateTeamCommand::sub_536FE0()
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 7131); /*0x536ff6*/
}
}
} // namespace gamemd

// 0x537000
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_117()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *CreateTeamCommand::sub_537000()
{
  return GetStringCSF(aTxtSellModeDes, 0, g_Str_File_Init_CPP, 7133); /*0x537016*/
}
}
} // namespace gamemd

// 0x537020
namespace gamemd {
char CreateTeamCommand::performAction_118(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall CreateTeamCommand::sub_537020(int a1)
{
  return BuildingClass::TogglePower(&MEMORY[0x87F7E8], -1); /*0x53702c*/
}
}
} // namespace gamemd

// 0x537030
namespace gamemd {
char * CreateTeamCommand::performAction_119()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall CreateTeamCommand::performAction_119(BeaconPlacementCommandClass *this)
{
  return aPlacebeacon; /*0x537035*/
}
}
} // namespace gamemd

// 0x537040
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_120()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_120(BeaconPlacementCommandClass *this)
{
  return GetStringCSF(aTxtPlaceBeacon, 0, g_Str_File_Init_CPP, 7172); /*0x537056*/
}
}
} // namespace gamemd

// 0x537060
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_121()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_121(BeaconPlacementCommandClass *this)
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 7174); /*0x537076*/
}
}
} // namespace gamemd

// 0x537080
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_122()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_122(BeaconPlacementCommandClass *this)
{
  return GetStringCSF(aTxtPlaceBeacon_0, 0, g_Str_File_Init_CPP, 7176); /*0x537096*/
}
}
} // namespace gamemd

// 0x5370A0
namespace gamemd {
int CreateTeamCommand::performAction_123()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall CreateTeamCommand::performAction_123(BeaconPlacementCommandClass *this)
{
  CellStruct *result; // eax

  result = MEMORY[0xA8B238]; /*0x5370a0*/
  if ( MEMORY[0xA8B238] ) /*0x5370a7*/
  {
    if ( MEMORY[0xA8B238] != (CellStruct *)5 ) /*0x5370ac*/
      return UI_Create_731A30(); /*0x5370ae*/
  }
  return (int)result; /*0x5370b3*/
}
}
} // namespace gamemd

// 0x5370C0
namespace gamemd {
char * CreateTeamCommand::performAction_124()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall CreateTeamCommand::performAction_124(CenterREventCommandClass *this)
{
  return aCenteronradare; /*0x5370c5*/
}
}
} // namespace gamemd

// 0x5370D0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_125()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_125(CenterREventCommandClass *this)
{
  return GetStringCSF(aTxtRadarEvent, 0, g_Str_File_Init_CPP, 7195); /*0x5370e6*/
}
}
} // namespace gamemd

// 0x5370F0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_126()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_126(CenterREventCommandClass *this)
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 7197); /*0x537106*/
}
}
} // namespace gamemd

// 0x537110
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_127()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_127(CenterREventCommandClass *this)
{
  return GetStringCSF(aTxtRadarEventD, 0, g_Str_File_Init_CPP, 7199); /*0x537126*/
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

// 0x537140
namespace gamemd {
char * CreateTeamCommand::performAction_129()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall CreateTeamCommand::performAction_129(SidebarUpCommandClass *this)
{
  return aSidebarup; /*0x537145*/
}
}
} // namespace gamemd

// 0x537150
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_130()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_130(SidebarUpCommandClass *this)
{
  return GetStringCSF(aTxtSidebarUp, 0, g_Str_File_Init_CPP, 7249); /*0x537166*/
}
}
} // namespace gamemd

// 0x537170
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_131()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_131(SidebarUpCommandClass *this)
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 7251); /*0x537186*/
}
}
} // namespace gamemd

// 0x537190
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_132()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_132(SidebarUpCommandClass *this)
{
  return GetStringCSF(aTxtSidebarUpDe, 0, g_Str_File_Init_CPP, 7253); /*0x5371a6*/
}
}
} // namespace gamemd

// 0x5371B0
namespace gamemd {
char CreateTeamCommand::performAction_133()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall CreateTeamCommand::performAction_133(SidebarUpCommandClass *this)
{
  return CreateTeamCommand::performAction_245(&MEMORY[0x87F7E8], 1, -1); /*0x5371be*/
}
}
} // namespace gamemd

// 0x5371D0
namespace gamemd {
char * CreateTeamCommand::performAction_134()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall CreateTeamCommand::performAction_134(SidebarDownCommandClass *this)
{
  return aSidebardown; /*0x5371d5*/
}
}
} // namespace gamemd

// 0x5371E0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_135()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_135(SidebarDownCommandClass *this)
{
  return GetStringCSF(aTxtSidebarDown, 0, g_Str_File_Init_CPP, 7389); /*0x5371f6*/
}
}
} // namespace gamemd

// 0x537200
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_136()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_136(SidebarDownCommandClass *this)
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 7391); /*0x537216*/
}
}
} // namespace gamemd

// 0x537220
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_137()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_137(SidebarDownCommandClass *this)
{
  return GetStringCSF(aTxtSidebarDown_0, 0, g_Str_File_Init_CPP, 7393); /*0x537236*/
}
}
} // namespace gamemd

// 0x537240
namespace gamemd {
char CreateTeamCommand::performAction_138()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall CreateTeamCommand::performAction_138(SidebarDownCommandClass *this)
{
  return CreateTeamCommand::performAction_245(&MEMORY[0x87F7E8], 0, -1); /*0x53724e*/
}
}
} // namespace gamemd

// 0x537260
namespace gamemd {
CHAR * CreateTeamCommand::performAction_139()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CHAR *__thiscall CreateTeamCommand::performAction_139(OptionsCommandClass *this)
{
  return (CHAR *)&g_INI_Key_Options; /*0x537265*/
}
}
} // namespace gamemd

// 0x537270
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_140()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_140(OptionsCommandClass *this)
{
  return GetStringCSF(aTxtOptions, 0, g_Str_File_Init_CPP, 7530); /*0x537286*/
}
}
} // namespace gamemd

// 0x537290
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_141()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_141(OptionsCommandClass *this)
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 7532); /*0x5372a6*/
}
}
} // namespace gamemd

// 0x5372B0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_142()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_142(OptionsCommandClass *this)
{
  return GetStringCSF(aTxtOptionsDesc, 0, g_Str_File_Init_CPP, 7534); /*0x5372c6*/
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

// 0x5372E0
namespace gamemd {
char * CreateTeamCommand::performAction_144()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall CreateTeamCommand::performAction_144(View1CommandClass *this)
{
  return aView1; /*0x5372e5*/
}
}
} // namespace gamemd

// 0x5372F0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_145()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_145(View1CommandClass *this)
{
  return GetStringCSF(aTxtViewBookmar, 0, g_Str_File_Init_CPP, 7707); /*0x537306*/
}
}
} // namespace gamemd

// 0x537310
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_146()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_146(View1CommandClass *this)
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 7709); /*0x537326*/
}
}
} // namespace gamemd

// 0x537330
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_147()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_147(View1CommandClass *this)
{
  return GetStringCSF(aTxtViewBookmar_0, 0, g_Str_File_Init_CPP, 7711); /*0x537346*/
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

// 0x5373D0
namespace gamemd {
char * CreateTeamCommand::performAction_149()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall CreateTeamCommand::performAction_149(View2CommandClass *this)
{
  return aView2; /*0x5373d5*/
}
}
} // namespace gamemd

// 0x5373E0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_150()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_150(View2CommandClass *this)
{
  return GetStringCSF(aTxtViewBookmar_1, 0, g_Str_File_Init_CPP, 7743); /*0x5373f6*/
}
}
} // namespace gamemd

// 0x537400
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_151()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_151(View2CommandClass *this)
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 7745); /*0x537416*/
}
}
} // namespace gamemd

// 0x537420
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_152()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_152(View2CommandClass *this)
{
  return GetStringCSF(aTxtViewBookmar_2, 0, g_Str_File_Init_CPP, 7747); /*0x537436*/
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

// 0x5374C0
namespace gamemd {
char * CreateTeamCommand::performAction_154()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall CreateTeamCommand::performAction_154(View3CommandClass *this)
{
  return aView3; /*0x5374c5*/
}
}
} // namespace gamemd

// 0x5374D0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_155()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_155(View3CommandClass *this)
{
  return GetStringCSF(aTxtViewBookmar_3, 0, g_Str_File_Init_CPP, 7779); /*0x5374e6*/
}
}
} // namespace gamemd

// 0x5374F0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_156()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_156(View3CommandClass *this)
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 7781); /*0x537506*/
}
}
} // namespace gamemd

// 0x537510
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_157()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_157(View3CommandClass *this)
{
  return GetStringCSF(aTxtViewBookmar_4, 0, g_Str_File_Init_CPP, 7783); /*0x537526*/
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

// 0x5375B0
namespace gamemd {
char * CreateTeamCommand::performAction_159()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall CreateTeamCommand::performAction_159(View4CommandClass *this)
{
  return aView4; /*0x5375b5*/
}
}
} // namespace gamemd

// 0x5375C0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_160()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_160(View4CommandClass *this)
{
  return GetStringCSF(aTxtViewBookmar_5, 0, g_Str_File_Init_CPP, 7815); /*0x5375d6*/
}
}
} // namespace gamemd

// 0x5375E0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_161()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_161(View4CommandClass *this)
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 7817); /*0x5375f6*/
}
}
} // namespace gamemd

// 0x537600
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_162()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_162(View4CommandClass *this)
{
  return GetStringCSF(aTxtViewBookmar_6, 0, g_Str_File_Init_CPP, 7819); /*0x537616*/
}
}
} // namespace gamemd

// 0x5376A0
namespace gamemd {
char * CreateTeamCommand::performAction_163()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall CreateTeamCommand::performAction_163(SetView1CommandClass *this)
{
  return aSetview1; /*0x5376a5*/
}
}
} // namespace gamemd

// 0x5376B0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_164()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_164(SetView1CommandClass *this)
{
  return GetStringCSF(aTxtSetBookmark, 0, g_Str_File_Init_CPP, 7851); /*0x5376c6*/
}
}
} // namespace gamemd

// 0x5376D0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_165()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_165(SetView1CommandClass *this)
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 7853); /*0x5376e6*/
}
}
} // namespace gamemd

// 0x5376F0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_166()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_166(SetView1CommandClass *this)
{
  return GetStringCSF(aTxtSetBookmark_0, 0, g_Str_File_Init_CPP, 7855); /*0x537706*/
}
}
} // namespace gamemd

// 0x537710
namespace gamemd {
void * CreateTeamCommand::performAction_167()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *__thiscall CreateTeamCommand::performAction_167(SetView1CommandClass *this)
{
  int *v1; // eax
  int v2; // edx
  ScenarioClass *result; // eax
  int v4[2]; // [esp+0h] [ebp-10h] BYREF
  _DWORD v5[2]; // [esp+8h] [ebp-8h] BYREF

  v1 = ObjectClass::ComputeDelta(*(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9432], v4); /*0x53771e*/
  v5[0] = *v1; /*0x537725*/
  v5[1] = v1[1]; /*0x53773c*/
  v2 = *Tactical::PixelToCell(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], (AbstractClass *)v4, (IUnknown *)v5); /*0x537745*/
  result = MEMORY[0xA8B230]; /*0x537747*/
  *(int *)((char *)&MEMORY[0xA8B230]->localVariables[1024] + 2) = v2; /*0x53774c*/
  return result; /*0x537752*/
}
}
} // namespace gamemd

// 0x537760
namespace gamemd {
char * CreateTeamCommand::performAction_168()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall CreateTeamCommand::performAction_168(SetView2CommandClass *this)
{
  return aSetview2; /*0x537765*/
}
}
} // namespace gamemd

// 0x537770
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_169()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_169(SetView2CommandClass *this)
{
  return GetStringCSF(aTxtSetBookmark_1, 0, g_Str_File_Init_CPP, 7878); /*0x537786*/
}
}
} // namespace gamemd

// 0x537790
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_170()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_170(SetView2CommandClass *this)
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 7880); /*0x5377a6*/
}
}
} // namespace gamemd

// 0x5377B0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_171()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_171(SetView2CommandClass *this)
{
  return GetStringCSF(aTxtSetBookmark_2, 0, g_Str_File_Init_CPP, 7882); /*0x5377c6*/
}
}
} // namespace gamemd

// 0x5377D0
namespace gamemd {
void * CreateTeamCommand::performAction_172()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *__thiscall CreateTeamCommand::performAction_172(SetView2CommandClass *this)
{
  int *v1; // eax
  int v2; // edx
  ScenarioClass *result; // eax
  int v4[2]; // [esp+0h] [ebp-10h] BYREF
  _DWORD v5[2]; // [esp+8h] [ebp-8h] BYREF

  v1 = ObjectClass::ComputeDelta(*(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9432], v4); /*0x5377de*/
  v5[0] = *v1; /*0x5377e5*/
  v5[1] = v1[1]; /*0x5377fc*/
  v2 = *Tactical::PixelToCell(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], (AbstractClass *)v4, (IUnknown *)v5); /*0x537805*/
  result = MEMORY[0xA8B230]; /*0x537807*/
  *(int *)((char *)MEMORY[0xA8B230]->view1 + 2) = v2; /*0x53780c*/
  return result; /*0x537812*/
}
}
} // namespace gamemd

// 0x537820
namespace gamemd {
char * CreateTeamCommand::performAction_173()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall CreateTeamCommand::performAction_173(SetView3CommandClass *this)
{
  return aSetview3; /*0x537825*/
}
}
} // namespace gamemd

// 0x537830
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_174()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_174(SetView3CommandClass *this)
{
  return GetStringCSF(aTxtSetBookmark_3, 0, g_Str_File_Init_CPP, 7905); /*0x537846*/
}
}
} // namespace gamemd

// 0x537850
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_175()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_175(SetView3CommandClass *this)
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 7907); /*0x537866*/
}
}
} // namespace gamemd

// 0x537870
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_176()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_176(SetView3CommandClass *this)
{
  return GetStringCSF(aTxtSetBookmark_4, 0, g_Str_File_Init_CPP, 7909); /*0x537886*/
}
}
} // namespace gamemd

// 0x537890
namespace gamemd {
void * CreateTeamCommand::performAction_177()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *__thiscall CreateTeamCommand::performAction_177(SetView3CommandClass *this)
{
  int *v1; // eax
  int v2; // edx
  ScenarioClass *result; // eax
  int v4[2]; // [esp+0h] [ebp-10h] BYREF
  _DWORD v5[2]; // [esp+8h] [ebp-8h] BYREF

  v1 = ObjectClass::ComputeDelta(*(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9432], v4); /*0x53789e*/
  v5[0] = *v1; /*0x5378a5*/
  v5[1] = v1[1]; /*0x5378bc*/
  v2 = *Tactical::PixelToCell(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], (AbstractClass *)v4, (IUnknown *)v5); /*0x5378c5*/
  result = MEMORY[0xA8B230]; /*0x5378c7*/
  *(int *)((char *)MEMORY[0xA8B230]->view2 + 2) = v2; /*0x5378cc*/
  return result; /*0x5378d2*/
}
}
} // namespace gamemd

// 0x5378E0
namespace gamemd {
char * CreateTeamCommand::performAction_178()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall CreateTeamCommand::performAction_178(SetView4CommandClass *this)
{
  return aSetview4; /*0x5378e5*/
}
}
} // namespace gamemd

// 0x5378F0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_179()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_179(SetView4CommandClass *this)
{
  return GetStringCSF(aTxtSetBookmark_5, 0, g_Str_File_Init_CPP, 7932); /*0x537906*/
}
}
} // namespace gamemd

// 0x537910
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_180()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_180(SetView4CommandClass *this)
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 7934); /*0x537926*/
}
}
} // namespace gamemd

// 0x537930
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_181()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_181(SetView4CommandClass *this)
{
  return GetStringCSF(aTxtSetBookmark_6, 0, g_Str_File_Init_CPP, 7936); /*0x537946*/
}
}
} // namespace gamemd

// 0x537950
namespace gamemd {
void * CreateTeamCommand::performAction_182()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *__thiscall CreateTeamCommand::performAction_182(SetView4CommandClass *this)
{
  int *v1; // eax
  int v2; // edx
  ScenarioClass *result; // eax
  int v4[2]; // [esp+0h] [ebp-10h] BYREF
  _DWORD v5[2]; // [esp+8h] [ebp-8h] BYREF

  v1 = ObjectClass::ComputeDelta(*(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9432], v4); /*0x53795e*/
  v5[0] = *v1; /*0x537965*/
  v5[1] = v1[1]; /*0x53797c*/
  v2 = *Tactical::PixelToCell(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], (AbstractClass *)v4, (IUnknown *)v5); /*0x537985*/
  result = MEMORY[0xA8B230]; /*0x537987*/
  *(int *)((char *)MEMORY[0xA8B230]->view3 + 2) = v2; /*0x53798c*/
  return result; /*0x537992*/
}
}
} // namespace gamemd

// 0x5379A0
namespace gamemd {
char * CreateTeamCommand::performAction_183()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall CreateTeamCommand::performAction_183(FollowCommandClass *this)
{
  return aFollow; /*0x5379a5*/
}
}
} // namespace gamemd

// 0x5379B0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_184()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_184(FollowCommandClass *this)
{
  return GetStringCSF(aTxtFollow, 0, g_Str_File_Init_CPP, 7959); /*0x5379c6*/
}
}
} // namespace gamemd

// 0x5379D0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_185()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_185(FollowCommandClass *this)
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 7961); /*0x5379e6*/
}
}
} // namespace gamemd

// 0x5379F0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_186()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_186(FollowCommandClass *this)
{
  return GetStringCSF(aTxtFollowDesc, 0, g_Str_File_Init_CPP, 7963); /*0x537a06*/
}
}
} // namespace gamemd

// 0x537A10
namespace gamemd {
bool CreateTeamCommand::performAction_187()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall CreateTeamCommand::performAction_187(FollowCommandClass *this)
{
  if ( !*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[476] || MapClass::GetScrollMode((int)&MEMORY[0x87F7E8]) ) /*0x537a1e*/
    return MapClass::SetScrollMode((int)&MEMORY[0x87F7E8], 0); /*0x537a43*/
  else
    return MapClass::SetScrollMode((int)&MEMORY[0x87F7E8], **(MouseClass ***)&MEMORY[0xA8D63C].__pad_14B0[464]); /*0x537a34*/
}
}
} // namespace gamemd

// 0x537AB0
namespace gamemd {
char * CreateTeamCommand::performAction_188()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall CreateTeamCommand::performAction_188(MultiplayerSyncCommandClass *this)
{
  return aExtrasynccheck; /*0x537ab5*/
}
}
} // namespace gamemd

// 0x537AC0
namespace gamemd {
const wchar_t * CreateTeamCommand::performAction_189()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
const wchar_t *__thiscall CreateTeamCommand::performAction_189(MultiplayerSyncCommandClass *this)
{
  return g_INI_Key_De; /*0x537ac5*/
}
}
} // namespace gamemd

// 0x537AD0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_190()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CreateTeamCommand::performAction_190(MultiplayerSyncCommandClass *this)
{
  return aGameSyncLoggin; /*0x537ad5*/
}
}
} // namespace gamemd

// 0x537AE0
namespace gamemd {
_UNKNOWN ** CreateTeamCommand::performAction_191()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_UNKNOWN **__thiscall CreateTeamCommand::performAction_191(MultiplayerSyncCommandClass *this)
{
  return &off_827970; /*0x537ae5*/
}
}
} // namespace gamemd

// 0x537AF0
namespace gamemd {
int CreateTeamCommand::performAction_192()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall CreateTeamCommand::performAction_192(MultiplayerSyncCommandClass *this)
{
  bool v1; // zf
  char *v2; // ecx
  char *v3; // eax

  v1 = byte_B04880 != 0; /*0x537b07*/
  byte_B04880 = byte_B04880 == 0; /*0x537b09*/
  v2 = aExtraSyncInfoO; /*0x537b10*/
  if ( v1 ) /*0x537b15*/
    v2 = aExtraSyncInfoO_0; /*0x537b17*/
  v3 = CharToWideString(v2); /*0x537b1c*/
  return MessageListClass::AddMessage(MEMORY[0xA8BC60], 0, 0, (CellStruct *)v3, 3, (IUnknown *)0x4046, 150, 0); /*0x537b30*/
}
}
} // namespace gamemd

// 0x537E80
namespace gamemd {
char * CreateTeamCommand::performAction_193()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *CreateTeamCommand::sub_537E80()
{
  return MEMORY[0x827ADC]; /*0x537e85*/
}
}
} // namespace gamemd

// 0x537E90
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_194()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *CreateTeamCommand::sub_537E90()
{
  return GetStringCSF(MEMORY[0x827AE8], 0, g_Str_File_Init_CPP, 8231); /*0x537ea6*/
}
}
} // namespace gamemd

// 0x537EB0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_195()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *CreateTeamCommand::sub_537EB0()
{
  return GetStringCSF(aGuiDebug, 0, g_Str_File_Init_CPP, 8232); /*0x537ec6*/
}
}
} // namespace gamemd

// 0x537ED0
namespace gamemd {
wchar_t * CreateTeamCommand::performAction_196()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *CreateTeamCommand::sub_537ED0()
{
  return GetStringCSF(aDescCursorchea, 0, g_Str_File_Init_CPP, 8233); /*0x537ee6*/
}
}
} // namespace gamemd

// 0x537EF0
namespace gamemd {
bool CreateTeamCommand::performAction_197(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __stdcall CreateTeamCommand::sub_537EF0(int a1)
{
  bool result; // al

  result = MEMORY[0xA8F7D8] == 0; /*0x537ef7*/
  MEMORY[0xA8F7D8] = MEMORY[0xA8F7D8] == 0; /*0x537efa*/
  return result; /*0x537eff*/
}
}
} // namespace gamemd

// 0x537FA0
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_198(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
std::locale::facet *__thiscall CreateTeamCommand::performAction_198(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &CommandClass::`vftable'; /*0x537fa9*/
  if ( (a2 & 1) != 0 ) /*0x537faf*/
    __3_YAXPAX_Z(this); /*0x537fb2*/
  return this; /*0x537fbc*/
}
}
} // namespace gamemd

// 0x537FC0
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_199(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
std::locale::facet *__thiscall CreateTeamCommand::performAction_199(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &CommandClass::`vftable'; /*0x537fc9*/
  if ( (a2 & 1) != 0 ) /*0x537fcf*/
    __3_YAXPAX_Z(this); /*0x537fd2*/
  return this; /*0x537fdc*/
}
}
} // namespace gamemd

// 0x537FE0
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_200(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
std::locale::facet *__thiscall CreateTeamCommand::performAction_200(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &CommandClass::`vftable'; /*0x537fe9*/
  if ( (a2 & 1) != 0 ) /*0x537fef*/
    __3_YAXPAX_Z(this); /*0x537ff2*/
  return this; /*0x537ffc*/
}
}
} // namespace gamemd

// 0x538000
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_201(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
std::locale::facet *__thiscall CreateTeamCommand::performAction_201(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &CommandClass::`vftable'; /*0x538009*/
  if ( (a2 & 1) != 0 ) /*0x53800f*/
    __3_YAXPAX_Z(this); /*0x538012*/
  return this; /*0x53801c*/
}
}
} // namespace gamemd

// 0x538020
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_202(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
std::locale::facet *__thiscall CreateTeamCommand::performAction_202(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &CommandClass::`vftable'; /*0x538029*/
  if ( (a2 & 1) != 0 ) /*0x53802f*/
    __3_YAXPAX_Z(this); /*0x538032*/
  return this; /*0x53803c*/
}
}
} // namespace gamemd

// 0x538040
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_203(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
std::locale::facet *__thiscall CreateTeamCommand::performAction_203(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &CommandClass::`vftable'; /*0x538049*/
  if ( (a2 & 1) != 0 ) /*0x53804f*/
    __3_YAXPAX_Z(this); /*0x538052*/
  return this; /*0x53805c*/
}
}
} // namespace gamemd

// 0x538060
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_204(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
std::locale::facet *__thiscall CreateTeamCommand::performAction_204(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &CommandClass::`vftable'; /*0x538069*/
  if ( (a2 & 1) != 0 ) /*0x53806f*/
    __3_YAXPAX_Z(this); /*0x538072*/
  return this; /*0x53807c*/
}
}
} // namespace gamemd

// 0x538080
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_205(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
std::locale::facet *__thiscall CreateTeamCommand::performAction_205(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &CommandClass::`vftable'; /*0x538089*/
  if ( (a2 & 1) != 0 ) /*0x53808f*/
    __3_YAXPAX_Z(this); /*0x538092*/
  return this; /*0x53809c*/
}
}
} // namespace gamemd

// 0x5380A0
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_206(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
std::locale::facet *__thiscall CreateTeamCommand::performAction_206(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &CommandClass::`vftable'; /*0x5380a9*/
  if ( (a2 & 1) != 0 ) /*0x5380af*/
    __3_YAXPAX_Z(this); /*0x5380b2*/
  return this; /*0x5380bc*/
}
}
} // namespace gamemd

// 0x5380C0
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_207(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
std::locale::facet *__thiscall CreateTeamCommand::performAction_207(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &CommandClass::`vftable'; /*0x5380c9*/
  if ( (a2 & 1) != 0 ) /*0x5380cf*/
    __3_YAXPAX_Z(this); /*0x5380d2*/
  return this; /*0x5380dc*/
}
}
} // namespace gamemd

// 0x5380E0
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_208(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
std::locale::facet *__thiscall CreateTeamCommand::performAction_208(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &CommandClass::`vftable'; /*0x5380e9*/
  if ( (a2 & 1) != 0 ) /*0x5380ef*/
    __3_YAXPAX_Z(this); /*0x5380f2*/
  return this; /*0x5380fc*/
}
}
} // namespace gamemd

// 0x538100
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_209(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
std::locale::facet *__thiscall CreateTeamCommand::performAction_209(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &CommandClass::`vftable'; /*0x538109*/
  if ( (a2 & 1) != 0 ) /*0x53810f*/
    __3_YAXPAX_Z(this); /*0x538112*/
  return this; /*0x53811c*/
}
}
} // namespace gamemd

// 0x538120
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_210(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
std::locale::facet *__thiscall CreateTeamCommand::performAction_210(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &CommandClass::`vftable'; /*0x538129*/
  if ( (a2 & 1) != 0 ) /*0x53812f*/
    __3_YAXPAX_Z(this); /*0x538132*/
  return this; /*0x53813c*/
}
}
} // namespace gamemd

// 0x538140
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_211(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
std::locale::facet *__thiscall CreateTeamCommand::performAction_211(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &CommandClass::`vftable'; /*0x538149*/
  if ( (a2 & 1) != 0 ) /*0x53814f*/
    __3_YAXPAX_Z(this); /*0x538152*/
  return this; /*0x53815c*/
}
}
} // namespace gamemd

// 0x538160
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_212(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
std::locale::facet *__thiscall CreateTeamCommand::performAction_212(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &CommandClass::`vftable'; /*0x538169*/
  if ( (a2 & 1) != 0 ) /*0x53816f*/
    __3_YAXPAX_Z(this); /*0x538172*/
  return this; /*0x53817c*/
}
}
} // namespace gamemd

// 0x538180
namespace gamemd {
std::locale::facet * CreateTeamCommand::performAction_213(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
std::locale::facet *__thiscall CreateTeamCommand::performAction_213(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &CommandClass::`vftable'; /*0x538189*/
  if ( (a2 & 1) != 0 ) /*0x53818f*/
    __3_YAXPAX_Z(this); /*0x538192*/
  return this; /*0x53819c*/
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
ToggleRepairCommandClass * CreateTeamCommand::performAction_215(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ToggleRepairCommandClass *__thiscall CreateTeamCommand::performAction_215(_DWORD *Block, char a2)
{
  *Block = &CommandClass::`vftable'; /*0x5381c9*/
  if ( (a2 & 1) != 0 ) /*0x5381cf*/
    __3_YAXPAX_Z(Block); /*0x5381d2*/
  return (ToggleRepairCommandClass *)Block; /*0x5381dc*/
}
}
} // namespace gamemd

// 0x5381E0
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_216(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall CreateTeamCommand::performAction_216(_DWORD *Block, char a2)
{
  *Block = &CommandClass::`vftable'; /*0x5381e9*/
  if ( (a2 & 1) != 0 ) /*0x5381ef*/
    __3_YAXPAX_Z(Block); /*0x5381f2*/
  return Block; /*0x5381fc*/
}
}
} // namespace gamemd

// 0x538200
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_217(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall CreateTeamCommand::performAction_217(_DWORD *Block, char a2)
{
  *Block = &CommandClass::`vftable'; /*0x538209*/
  if ( (a2 & 1) != 0 ) /*0x53820f*/
    __3_YAXPAX_Z(Block); /*0x538212*/
  return Block; /*0x53821c*/
}
}
} // namespace gamemd

// 0x538220
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_218(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall CreateTeamCommand::performAction_218(_DWORD *Block, char a2)
{
  *Block = &CommandClass::`vftable'; /*0x538229*/
  if ( (a2 & 1) != 0 ) /*0x53822f*/
    __3_YAXPAX_Z(Block); /*0x538232*/
  return Block; /*0x53823c*/
}
}
} // namespace gamemd

// 0x538240
namespace gamemd {
ScatterCommandClass * CreateTeamCommand::performAction_219(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ScatterCommandClass *__thiscall CreateTeamCommand::performAction_219(_DWORD *Block, char a2)
{
  *Block = &CommandClass::`vftable'; /*0x538249*/
  if ( (a2 & 1) != 0 ) /*0x53824f*/
    __3_YAXPAX_Z(Block); /*0x538252*/
  return (ScatterCommandClass *)Block; /*0x53825c*/
}
}
} // namespace gamemd

// 0x538260
namespace gamemd {
GuardCommandClass * CreateTeamCommand::performAction_220(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
GuardCommandClass *__thiscall CreateTeamCommand::performAction_220(_DWORD *Block, char a2)
{
  *Block = &CommandClass::`vftable'; /*0x538269*/
  if ( (a2 & 1) != 0 ) /*0x53826f*/
    __3_YAXPAX_Z(Block); /*0x538272*/
  return (GuardCommandClass *)Block; /*0x53827c*/
}
}
} // namespace gamemd

// 0x538280
namespace gamemd {
StopCommandClass * CreateTeamCommand::performAction_221(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
StopCommandClass *__thiscall CreateTeamCommand::performAction_221(_DWORD *Block, char a2)
{
  *Block = &CommandClass::`vftable'; /*0x538289*/
  if ( (a2 & 1) != 0 ) /*0x53828f*/
    __3_YAXPAX_Z(Block); /*0x538292*/
  return (StopCommandClass *)Block; /*0x53829c*/
}
}
} // namespace gamemd

// 0x5382A0
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_222(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall CreateTeamCommand::performAction_222(_DWORD *Block, char a2)
{
  *Block = &CommandClass::`vftable'; /*0x5382a9*/
  if ( (a2 & 1) != 0 ) /*0x5382af*/
    __3_YAXPAX_Z(Block); /*0x5382b2*/
  return Block; /*0x5382bc*/
}
}
} // namespace gamemd

// 0x5382C0
namespace gamemd {
DeployCommandClass * CreateTeamCommand::performAction_223(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DeployCommandClass *__thiscall CreateTeamCommand::performAction_223(_DWORD *Block, char a2)
{
  *Block = &CommandClass::`vftable'; /*0x5382c9*/
  if ( (a2 & 1) != 0 ) /*0x5382cf*/
    __3_YAXPAX_Z(Block); /*0x5382d2*/
  return (DeployCommandClass *)Block; /*0x5382dc*/
}
}
} // namespace gamemd

// 0x5382E0
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_224(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall CreateTeamCommand::performAction_224(_DWORD *Block, char a2)
{
  *Block = &CommandClass::`vftable'; /*0x5382e9*/
  if ( (a2 & 1) != 0 ) /*0x5382ef*/
    __3_YAXPAX_Z(Block); /*0x5382f2*/
  return Block; /*0x5382fc*/
}
}
} // namespace gamemd

// 0x538300
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_225(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall CreateTeamCommand::performAction_225(_DWORD *Block, char a2)
{
  *Block = &CommandClass::`vftable'; /*0x538309*/
  if ( (a2 & 1) != 0 ) /*0x53830f*/
    __3_YAXPAX_Z(Block); /*0x538312*/
  return Block; /*0x53831c*/
}
}
} // namespace gamemd

// 0x538320
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_226(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall CreateTeamCommand::performAction_226(_DWORD *Block, char a2)
{
  *Block = &CommandClass::`vftable'; /*0x538329*/
  if ( (a2 & 1) != 0 ) /*0x53832f*/
    __3_YAXPAX_Z(Block); /*0x538332*/
  return Block; /*0x53833c*/
}
}
} // namespace gamemd

// 0x538340
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_227(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall CreateTeamCommand::performAction_227(_DWORD *Block, char a2)
{
  *Block = &CommandClass::`vftable'; /*0x538349*/
  if ( (a2 & 1) != 0 ) /*0x53834f*/
    __3_YAXPAX_Z(Block); /*0x538352*/
  return Block; /*0x53835c*/
}
}
} // namespace gamemd

// 0x538360
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_228(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall CreateTeamCommand::performAction_228(_DWORD *Block, char a2)
{
  *Block = &CommandClass::`vftable'; /*0x538369*/
  if ( (a2 & 1) != 0 ) /*0x53836f*/
    __3_YAXPAX_Z(Block); /*0x538372*/
  return Block; /*0x53837c*/
}
}
} // namespace gamemd

// 0x538380
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_229(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall CreateTeamCommand::performAction_229(_DWORD *Block, char a2)
{
  *Block = &CommandClass::`vftable'; /*0x538389*/
  if ( (a2 & 1) != 0 ) /*0x53838f*/
    __3_YAXPAX_Z(Block); /*0x538392*/
  return Block; /*0x53839c*/
}
}
} // namespace gamemd

// 0x5383A0
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_230(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall CreateTeamCommand::performAction_230(_DWORD *Block, char a2)
{
  *Block = &CommandClass::`vftable'; /*0x5383a9*/
  if ( (a2 & 1) != 0 ) /*0x5383af*/
    __3_YAXPAX_Z(Block); /*0x5383b2*/
  return Block; /*0x5383bc*/
}
}
} // namespace gamemd

// 0x5383C0
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_231(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall CreateTeamCommand::performAction_231(_DWORD *Block, char a2)
{
  *Block = &CommandClass::`vftable'; /*0x5383c9*/
  if ( (a2 & 1) != 0 ) /*0x5383cf*/
    __3_YAXPAX_Z(Block); /*0x5383d2*/
  return Block; /*0x5383dc*/
}
}
} // namespace gamemd

// 0x5383E0
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_232(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall CreateTeamCommand::performAction_232(_DWORD *Block, char a2)
{
  *Block = &CommandClass::`vftable'; /*0x5383e9*/
  if ( (a2 & 1) != 0 ) /*0x5383ef*/
    __3_YAXPAX_Z(Block); /*0x5383f2*/
  return Block; /*0x5383fc*/
}
}
} // namespace gamemd

// 0x538400
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_233(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall CreateTeamCommand::performAction_233(_DWORD *Block, char a2)
{
  *Block = &CommandClass::`vftable'; /*0x538409*/
  if ( (a2 & 1) != 0 ) /*0x53840f*/
    __3_YAXPAX_Z(Block); /*0x538412*/
  return Block; /*0x53841c*/
}
}
} // namespace gamemd

// 0x538420
namespace gamemd {
unsigned int * CreateTeamCommand::performAction_234(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall CreateTeamCommand::performAction_234(_DWORD *Block, char a2)
{
  *Block = &CommandClass::`vftable'; /*0x538429*/
  if ( (a2 & 1) != 0 ) /*0x53842f*/
    __3_YAXPAX_Z(Block); /*0x538432*/
  return Block; /*0x53843c*/
}
}
} // namespace gamemd

// 0x538440
namespace gamemd {
ScreenCaptureCommandClass * CreateTeamCommand::performAction_235(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ScreenCaptureCommandClass *__thiscall CreateTeamCommand::performAction_235(_DWORD *Block, char a2)
{
  *Block = &CommandClass::`vftable'; /*0x538449*/
  if ( (a2 & 1) != 0 ) /*0x53844f*/
    __3_YAXPAX_Z(Block); /*0x538452*/
  return (ScreenCaptureCommandClass *)Block; /*0x53845c*/
}
}
} // namespace gamemd

// 0x538460
namespace gamemd {
PageUserCommandClass * CreateTeamCommand::performAction_236(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
PageUserCommandClass *__thiscall CreateTeamCommand::performAction_236(_DWORD *Block, char a2)
{
  *Block = &CommandClass::`vftable'; /*0x538469*/
  if ( (a2 & 1) != 0 ) /*0x53846f*/
    __3_YAXPAX_Z(Block); /*0x538472*/
  return (PageUserCommandClass *)Block; /*0x53847c*/
}
}
} // namespace gamemd

// 0x538480
namespace gamemd {
CursorPositionCommandClass * CreateTeamCommand::performAction_237(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CursorPositionCommandClass *__thiscall CreateTeamCommand::performAction_237(_DWORD *Block, char a2)
{
  *Block = &CommandClass::`vftable'; /*0x538489*/
  if ( (a2 & 1) != 0 ) /*0x53848f*/
    __3_YAXPAX_Z(Block); /*0x538492*/
  return (CursorPositionCommandClass *)Block; /*0x53849c*/
}
}
} // namespace gamemd

// 0x5384A0
namespace gamemd {
DeleteCommandClass * CreateTeamCommand::performAction_238(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DeleteCommandClass *__thiscall CreateTeamCommand::performAction_238(_DWORD *Block, char a2)
{
  *Block = &CommandClass::`vftable'; /*0x5384a9*/
  if ( (a2 & 1) != 0 ) /*0x5384af*/
    __3_YAXPAX_Z(Block); /*0x5384b2*/
  return (DeleteCommandClass *)Block; /*0x5384bc*/
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
  *(_DWORD *)(this + 16) = 0; /*0x5384c9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x5384d0*/
  {
    __3_YAXPAX_Z(v2); /*0x5384d6*/
    *(_DWORD *)(this + 4) = 0; /*0x5384de*/
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
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall CreateTeamCommand::sub_5384F0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5384f0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x538505*/
  else
    return 0; /*0x5384f7*/
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
    if ( *((_DWORD *)this + 1) ) /*0x5386d8*/
    {
      v5 = *((_DWORD *)this + 2); /*0x5386df*/
      if ( a2 < v5 ) /*0x5386e4*/
        v5 = a2; /*0x5386e6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * i - 4) ) /*0x5386ec*/
        ++i; /*0x5386f1*/
      if ( *((_BYTE *)this + 13) ) /*0x5386fe*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x538709*/
        *((_DWORD *)this + 1) = 0; /*0x538711*/
      }
    }
    *((_DWORD *)this + 1) = v4; /*0x53871a*/
    *((_DWORD *)this + 2) = a2; /*0x538722*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x538725*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x53872e*/
  }
  v7 = *((_DWORD *)this + 2); /*0x538731*/
  if ( v7 < *((_DWORD *)this + 4) ) /*0x538739*/
    *((_DWORD *)this + 4) = v7; /*0x53873b*/
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
rc_ptr_base * CreateTeamCommand::performAction_243(rc_ptr_base * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
rc_ptr_base *__thiscall CreateTeamCommand::performAction_243(rc_ptr_base *Block, char a2)
{
  int v3; // eax
  rc_ptr_base *v4; // ebp
  rc_ptr_base *v5; // esi
  int v6; // eax
  int v7; // edi

  if ( (a2 & 2) != 0 ) /*0x538a2b*/
  {
    v3 = *((_DWORD *)Block - 1); /*0x538a2d*/
    v4 = Block - 1; /*0x538a31*/
    v5 = Block + 2 * v3; /*0x538a34*/
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
    Block->vfptr = &rc_ptr<WDTTerritory>::`vftable'; /*0x538a6a*/
    ComPtr::Release(Block); /*0x538a70*/
    if ( (a2 & 1) != 0 ) /*0x538a78*/
      __3_YAXPAX_Z(Block); /*0x538a7b*/
    return Block; /*0x538a83*/
  }
}
}
} // namespace gamemd

// 0x538AE0
namespace gamemd {
DynamicVector * CreateTeamCommand::performAction_244(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DynamicVector *__thiscall CreateTeamCommand::performAction_244(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x538ae3*/
  *Block = &VectorClass<CCINIClass *>::`vftable'; /*0x538ae6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x538af0*/
  {
    __3_YAXPAX_Z(v3); /*0x538af8*/
    *(Block + 1) = 0; /*0x538b00*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x538b0b*/
  *(Block + 2) = 0; /*0x538b11*/
  if ( (a2 & 1) != 0 ) /*0x538b18*/
    __3_YAXPAX_Z(Block); /*0x538b1b*/
  return (DynamicVector *)Block; /*0x538b25*/
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
