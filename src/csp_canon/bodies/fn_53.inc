// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00534DE0  ReleaseLoadingResources  cls=ObjectClass  sig=csp  renamed_refs=0 ====
char ReleaseLoadingResources()
{
{
    if ( DataGlobal_884E5C )
  {
    Debug::Log();
    if ( DataGlobal_884E5C )
    (**(void (__thiscall ***)(int, int))DataGlobal_884E5C)(DataGlobal_884E5C, 1);
    DataGlobal_884E5C = 0;
  }
    if ( DataGlobal_884E58 )
  {
    Debug::Log();
    if ( DataGlobal_884E58 )
    (**(void (__thiscall ***)(int, int))DataGlobal_884E58)(DataGlobal_884E58, 1);
    DataGlobal_884E58 = 0;
  }
    return 1;
}
}

// ==== BACKFILL 0x00535A60  BufferIOFileClass::Destruct  cls=BufferIOFileClass  sig=csp  renamed_refs=0 ====
int BufferIOFileClass::Destruct()
{
{
    *(void**)this = &DataGlobal_7E1668;
    return BufferIOFileClass::Dtor(this);
}
}

// ==== BACKFILL 0x00535BD0  CreateTeamCommand::Stub  cls=CommandClass  sig=csp  renamed_refs=0 ====
char CreateTeamCommand::Stub(int a1)
{
return 0;
}

// ==== BACKFILL 0x00535BE0  Map::IsCellFlag  cls=CommandClass  sig=csp  renamed_refs=0 ====
unsigned int Map::IsCellFlag(int a1)
{
{
    return ((unsigned int)~a1 >> 11) & 1;
}
}

// ==== BACKFILL 0x00535BF0  CreateTeamCommand::Do  cls=CommandClass  sig=csp  renamed_refs=0 ====
char CreateTeamCommand::Do(int a1)
{
return 0;
}

// ==== BACKFILL 0x00535C00  CreateTeamCommand::Construct  cls=CreateTeamCommand  sig=csp  renamed_refs=1 ====
unsigned int * CreateTeamCommand::Construct(int a2)
{
{
    this->CreateTeamCommand_field_0x4 = a2;
    *(void**)this = &vt_CreateTeamCommandClass;
    return this;
}
}

// ==== BACKFILL 0x00535C20  CreateTeamCommand::AddRef  cls=CreateTeamCommand  sig=csp  renamed_refs=1 ====
ObjectClass * CreateTeamCommand::AddRef()
{
{
    sprintf(&HouseClass_Player.__pad_5568[25344], &DataGlobal_826F84, (INIClass *)this->CreateTeamCommand_field_0x4);
    return (ObjectClass *)&HouseClass_Player.__pad_5568[25344];
}
}

// ==== BACKFILL 0x00535C40  CreateTeamCommand::Release  cls=CreateTeamCommand  sig=csp  renamed_refs=0 ====
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

// ==== BACKFILL 0x00535C70  CreateTeamCommand::ddtor  cls=CreateTeamCommand  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::ddtor()
{
{
    return GetStringCSF(g_Str_TXT_TEAM, 0, g_Str_File_Init_CPP, 6167);
}
}

// ==== BACKFILL 0x00535C90  CreateTeamCommand::Read  cls=CreateTeamCommand  sig=csp  renamed_refs=0 ====
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

// ==== BACKFILL 0x00535CC0  CreateTeamCommand::Undo  cls=CreateTeamCommand  sig=csp  renamed_refs=0 ====
void CreateTeamCommand::Undo(int a2)
{
{
    CreateTeamCommand::performAction_246(*(this + 1));
}
}

// ==== BACKFILL 0x00535CD0  CreateTeamCommand::performAction_0  cls=CreateTeamCommand  sig=csp  renamed_refs=0 ====
CreateTeamCommand * CreateTeamCommand::performAction_0(char a2)
{
{
    *(int *)this = &vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (CreateTeamCommand *)this;
}
}

// ==== BACKFILL 0x00535D00  CreateTeamCommand::performAction_1  cls=CommandClass  sig=csp  renamed_refs=0 ====
CommandClass * CreateTeamCommand::performAction_1(char a2)
{
{
    *(int *)this = &vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (CommandClass *)this;
}
}

// ==== BACKFILL 0x00535D20  CreateTeamCommand::performAction_2  cls=SetStructureTabCommandClass  sig=csp  renamed_refs=0 ====
char * CreateTeamCommand::performAction_2()
{
{
    return DataGlobal_826FC8;
}
}

// ==== BACKFILL 0x00535D30  CreateTeamCommand::performAction_3  cls=SetStructureTabCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_3()
{
{
    return GetStringCSF(DataGlobal_826FD8, 0, g_Str_File_Init_CPP, 6186);
}
}

// ==== BACKFILL 0x00535D50  CreateTeamCommand::performAction_4  cls=SetStructureTabCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_4()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 6188);
}
}

// ==== BACKFILL 0x00535D70  CreateTeamCommand::performAction_5  cls=SetStructureTabCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_5()
{
{
    return GetStringCSF(DataGlobal_826FFC, 0, g_Str_File_Init_CPP, 6190);
}
}

// ==== BACKFILL 0x00535D90  CreateTeamCommand::performAction_6  cls=SetStructureTabCommandClass  sig=csp  renamed_refs=0 ====
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

// ==== BACKFILL 0x00535DE0  CreateTeamCommand::performAction_7  cls=SetDefenseTabCommandClass  sig=csp  renamed_refs=0 ====
char * CreateTeamCommand::performAction_7()
{
{
    return DataGlobal_827014;
}
}

// ==== BACKFILL 0x00535DF0  CreateTeamCommand::performAction_8  cls=SetDefenseTabCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_8()
{
{
    return GetStringCSF(DataGlobal_827020, 0, g_Str_File_Init_CPP, 6212);
}
}

// ==== BACKFILL 0x00535E10  CreateTeamCommand::performAction_9  cls=SetDefenseTabCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_9()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 6214);
}
}

// ==== BACKFILL 0x00535E30  CreateTeamCommand::performAction_10  cls=SetDefenseTabCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_10()
{
{
    return GetStringCSF(aTxtDefenseTabD, 0, g_Str_File_Init_CPP, 6216);
}
}

// ==== BACKFILL 0x00535E50  CreateTeamCommand::performAction_11  cls=SetDefenseTabCommandClass  sig=csp  renamed_refs=0 ====
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

// ==== BACKFILL 0x00535EA0  CreateTeamCommand::performAction_12  cls=SetInfantryTabCommandClass  sig=csp  renamed_refs=0 ====
char * CreateTeamCommand::performAction_12()
{
return aInfantrytab;
}

// ==== BACKFILL 0x00535EB0  CreateTeamCommand::performAction_13  cls=SetInfantryTabCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_13()
{
{
    return GetStringCSF(aTxtInfantryTab, 0, g_Str_File_Init_CPP, 6238);
}
}

// ==== BACKFILL 0x00535ED0  CreateTeamCommand::performAction_14  cls=SetInfantryTabCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_14()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 6240);
}
}

// ==== BACKFILL 0x00535EF0  CreateTeamCommand::performAction_15  cls=SetInfantryTabCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_15()
{
{
    return GetStringCSF(aTxtInfantryTab_0, 0, g_Str_File_Init_CPP, 6242);
}
}

// ==== BACKFILL 0x00535F10  CreateTeamCommand::performAction_16  cls=SetInfantryTabCommandClass  sig=csp  renamed_refs=0 ====
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

// ==== BACKFILL 0x00535F30  CreateTeamCommand::performAction_17  cls=SetUnitTabCommandClass  sig=csp  renamed_refs=0 ====
char * CreateTeamCommand::performAction_17()
{
return aUnittab;
}

// ==== BACKFILL 0x00535F40  CreateTeamCommand::performAction_18  cls=SetUnitTabCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_18()
{
{
    return GetStringCSF(aTxtUnitTab, 0, g_Str_File_Init_CPP, 6259);
}
}

// ==== BACKFILL 0x00535F60  CreateTeamCommand::performAction_19  cls=SetUnitTabCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_19()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 6261);
}
}

// ==== BACKFILL 0x00535F80  CreateTeamCommand::performAction_20  cls=SetUnitTabCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_20()
{
{
    return GetStringCSF(aTxtUnitTabDesc, 0, g_Str_File_Init_CPP, 6263);
}
}

// ==== BACKFILL 0x00535FA0  CreateTeamCommand::performAction_21  cls=SetUnitTabCommandClass  sig=csp  renamed_refs=0 ====
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

// ==== BACKFILL 0x00535FE0  SelectTeamCommand::AddRef  cls=SelectTeamCommand  sig=csp  renamed_refs=0 ====
ObjectClass * SelectTeamCommand::AddRef()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ObjectClass *__thiscall SelectTeamCommand::AddRef(_DWORD *this)
{
  sprintf(&HouseClass_Player.__pad_5568[25344], &stru_8270D8, (INIClass *)*(this + 1)); /*0x535fee*/
  return (ObjectClass *)&HouseClass_Player.__pad_5568[25344]; /*0x535ffb*/
}
}

// ==== BACKFILL 0x00536000  SelectTeamCommand::Release  cls=SelectTeamCommand  sig=csp  renamed_refs=0 ====
wchar_t * SelectTeamCommand::Release()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall SelectTeamCommand::_vt02(const wchar_t **this)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = *(this + 1); /*0x536005*/
  StringCSF = GetStringCSF(MEMORY[0x8270E8], 0, g_Str_File_Init_CPP, 6292); /*0x536015*/
  swprintf(&MEMORY[0xA8F654], (const size_t)StringCSF, v3); /*0x536020*/
  return &MEMORY[0xA8F654]; /*0x53602d*/
}
}

// ==== BACKFILL 0x00536030  SelectTeamCommand::ddtor  cls=SelectTeamCommand  sig=csp  renamed_refs=0 ====
wchar_t * SelectTeamCommand::ddtor()
{
{
    return GetStringCSF(g_Str_TXT_TEAM, 0, g_Str_File_Init_CPP, 6294);
}
}

// ==== BACKFILL 0x00536050  SelectTeamCommand::Read  cls=SelectTeamCommand  sig=csp  renamed_refs=1 ====
namespace gamemd { void* SelectTeamCommand::Read() {
{
      wchar_t *StringCSF;
      const wchar_t *v3;

      v3 = this->SelectTeamCommand_field_00;
      StringCSF = GetStringCSF(DataGlobal_8270F8, 0, g_Str_File_Init_CPP, 6296);
      swprintf(&g_TeamCommandBuffer, (const size_t)StringCSF, v3);
      return &g_TeamCommandBuffer;
}
} }

// ==== BACKFILL 0x00536080  SelectTeamCommand::Do  cls=SelectTeamCommand  sig=csp  renamed_refs=0 ====
namespace gamemd { int SelectTeamCommand::Do(int a1) {
{
    return TacticalClass::SetObserverView(*(this + 1));
}
} }

// ==== BACKFILL 0x00536090  CreateTeamCommand::performAction_22  cls=SelectTeamCommand  sig=csp  renamed_refs=0 ====
SelectTeamCommand * CreateTeamCommand::performAction_22(char a2)
{
{
    *(int *)this = &vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (SelectTeamCommand *)this;
}
}

// ==== BACKFILL 0x005360D0  AddTeamCommand::AddRef  cls=AddTeamCommand  sig=csp  renamed_refs=0 ====
ObjectClass * AddTeamCommand::AddRef()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ObjectClass *__thiscall AddTeamCommand::AddRef(_DWORD *this)
{
  sprintf( /*0x5360de*/
    &HouseClass_Player.__pad_5568[25344],
    (ObjectClass *)&stru_8270D8.customSound_controller[3],
    (INIClass *)*(this + 1));
  return (ObjectClass *)&HouseClass_Player.__pad_5568[25344]; /*0x5360eb*/
}
}

// ==== BACKFILL 0x005360F0  AddTeamCommand::Release  cls=AddTeamCommand  sig=csp  renamed_refs=0 ====
wchar_t * AddTeamCommand::Release()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall AddTeamCommand::_vt02(const wchar_t **this)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = *(this + 1); /*0x5360f5*/
  StringCSF = GetStringCSF(MEMORY[0x827148], 0, g_Str_File_Init_CPP, 6326); /*0x536105*/
  swprintf(&MEMORY[0xA8F654], (const size_t)StringCSF, v3); /*0x536110*/
  return &MEMORY[0xA8F654]; /*0x53611d*/
}
}

// ==== BACKFILL 0x00536120  AddTeamCommand::ddtor  cls=AddTeamCommand  sig=csp  renamed_refs=0 ====
wchar_t * AddTeamCommand::ddtor()
{
{
    return GetStringCSF(g_Str_TXT_TEAM, 0, g_Str_File_Init_CPP, 6328);
}
}

// ==== BACKFILL 0x00536140  AddTeamCommand::Read  cls=AddTeamCommand  sig=csp  renamed_refs=1 ====
namespace gamemd { void* AddTeamCommand::Read() {
{
      wchar_t *StringCSF;
      const wchar_t *v3;

      v3 = this->AddTeamCommand_field_00;
      StringCSF = GetStringCSF(DataGlobal_82715C, 0, g_Str_File_Init_CPP, 6330);
      swprintf(&g_TeamCommandBuffer, (const size_t)StringCSF, v3);
      return &g_TeamCommandBuffer;
}
} }

// ==== BACKFILL 0x00536170  AddTeamCommand::Do  cls=AddTeamCommand  sig=csp  renamed_refs=0 ====
namespace gamemd { int AddTeamCommand::Do(int a1) {
{
    return SquadClass::SelectAllMembers(*(this + 1));
}
} }

// ==== BACKFILL 0x00536180  CreateTeamCommand::performAction_23  cls=AddTeamCommand  sig=csp  renamed_refs=0 ====
AddTeamCommand * CreateTeamCommand::performAction_23(char a2)
{
{
    *(int *)this = &vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (AddTeamCommand *)this;
}
}

// ==== BACKFILL 0x005361C0  CenterTeamCommand::AddRef  cls=CenterTeamCommand  sig=csp  renamed_refs=0 ====
ObjectClass * CenterTeamCommand::AddRef()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ObjectClass *__thiscall CenterTeamCommand::AddRef(_DWORD *this)
{
  sprintf(&HouseClass_Player.__pad_5568[25344], &stru_8271A0, (INIClass *)*(this + 1)); /*0x5361ce*/
  return (ObjectClass *)&HouseClass_Player.__pad_5568[25344]; /*0x5361db*/
}
}

// ==== BACKFILL 0x005361E0  CenterTeamCommand::Release  cls=CenterTeamCommand  sig=csp  renamed_refs=0 ====
wchar_t * CenterTeamCommand::Release()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CenterTeamCommand::_vt02(const wchar_t **this)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = *(this + 1); /*0x5361e5*/
  StringCSF = GetStringCSF(MEMORY[0x8271B0], 0, g_Str_File_Init_CPP, 6361); /*0x5361f5*/
  swprintf(&MEMORY[0xA8F654], (const size_t)StringCSF, v3); /*0x536200*/
  return &MEMORY[0xA8F654]; /*0x53620d*/
}
}

// ==== BACKFILL 0x00536210  CSF::GetTeamString  cls=CenterTeamCommand  sig=csp  renamed_refs=0 ====
wchar_t * CSF::GetTeamString()
{
{
    return GetStringCSF(g_Str_TXT_TEAM, 0, g_Str_File_Init_CPP, 6363);
}
}

// ==== BACKFILL 0x00536230  CenterTeamCommand::Read  cls=CenterTeamCommand  sig=csp  renamed_refs=1 ====
namespace gamemd { void* CenterTeamCommand::Read() {
{
      wchar_t *StringCSF;
      const wchar_t *v3;

      v3 = this->CenterTeamCommand_field_00;
      StringCSF = GetStringCSF(DataGlobal_8271C0, 0, g_Str_File_Init_CPP, 6365);
      swprintf(&g_TeamCommandBuffer, (const size_t)StringCSF, v3);
      return &g_TeamCommandBuffer;
}
} }

// ==== BACKFILL 0x00536260  CenterTeamCommand::Do  cls=CenterTeamCommand  sig=csp  renamed_refs=0 ====
namespace gamemd { int CenterTeamCommand::Do(int a1) {
{
    return TacticalClass::ResetView(*(this + 1));
}
} }

// ==== BACKFILL 0x00536270  CreateTeamCommand::performAction_24  cls=CenterTeamCommand  sig=csp  renamed_refs=0 ====
CenterTeamCommand * CreateTeamCommand::performAction_24(char a2)
{
{
    *(int *)this = &vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (CenterTeamCommand *)this;
}
}

// ==== BACKFILL 0x005362B0  TauntCommandClass::AddRef  cls=TauntCommandClass  sig=csp  renamed_refs=0 ====
ObjectClass * TauntCommandClass::AddRef()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ObjectClass *__thiscall TauntCommandClass::AddRef(_DWORD *this)
{
  sprintf( /*0x5362be*/
    &HouseClass_Player.__pad_5568[25344],
    (ObjectClass *)&stru_8271A0.customSound_controller[2],
    (INIClass *)*(this + 1));
  return (ObjectClass *)&HouseClass_Player.__pad_5568[25344]; /*0x5362cb*/
}
}

// ==== BACKFILL 0x005362D0  TauntCommandClass::Release  cls=TauntCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * TauntCommandClass::Release()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall TauntCommandClass::_vt02(const wchar_t **this)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = *(this + 1); /*0x5362d5*/
  StringCSF = GetStringCSF(MEMORY[0x827204], 0, g_Str_File_Init_CPP, 6400); /*0x5362e5*/
  swprintf(&MEMORY[0xA8F654], (const size_t)StringCSF, v3); /*0x5362f0*/
  return &MEMORY[0xA8F654]; /*0x5362fd*/
}
}

// ==== BACKFILL 0x00536300  TauntCommandClass::ddtor  cls=TauntCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * TauntCommandClass::ddtor()
{
{
    return GetStringCSF(DataGlobal_827218, 0, g_Str_File_Init_CPP, 6405);
}
}

// ==== BACKFILL 0x00536320  TauntCommandClass::Read  cls=TauntCommandClass  sig=csp  renamed_refs=1 ====
namespace gamemd { void* TauntCommandClass::Read() {
{
      wchar_t *StringCSF;
      const wchar_t *v3;

      v3 = this->TauntCommandClass_field_00;
      StringCSF = GetStringCSF(DataGlobal_827224, 0, g_Str_File_Init_CPP, 6409);
      swprintf(&g_TeamCommandBuffer, (const size_t)StringCSF, v3);
      return &g_TeamCommandBuffer;
}
} }

// ==== BACKFILL 0x00536580  CreateTeamCommand::performAction_25  cls=TauntCommandClass  sig=csp  renamed_refs=0 ====
TauntCommandClass * CreateTeamCommand::performAction_25(char a2)
{
{
    *(int *)this = &vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (TauntCommandClass *)this;
}
}

// ==== BACKFILL 0x005365A0  CreateTeamCommand::performAction_26  cls=NextObjectCommandClass  sig=csp  renamed_refs=0 ====
char * CreateTeamCommand::performAction_26()
{
{
    return DataGlobal_827234;
}
}

// ==== BACKFILL 0x005365B0  CreateTeamCommand::performAction_27  cls=NextObjectCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_27()
{
{
    return GetStringCSF(DataGlobal_827240, 0, g_Str_File_Init_CPP, 6526);
}
}

// ==== BACKFILL 0x005365D0  CreateTeamCommand::performAction_28  cls=NextObjectCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_28()
{
{
    return GetStringCSF(g_Str_TXT_SELECTION, 0, g_Str_File_Init_CPP, 6528);
}
}

// ==== BACKFILL 0x005365F0  CreateTeamCommand::performAction_29  cls=NextObjectCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_29()
{
{
    return GetStringCSF(aTxtNextObjectD, 0, g_Str_File_Init_CPP, 6530);
}
}

// ==== BACKFILL 0x00536610  CreateTeamCommand::performAction_30  cls=NextObjectCommandClass  sig=csp  renamed_refs=0 ====
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

// ==== BACKFILL 0x005366A0  CreateTeamCommand::performAction_31  cls=PlanningModeCommandClass  sig=csp  renamed_refs=0 ====
char * CreateTeamCommand::performAction_31()
{
return g_INI_Key_PlanningMode;
}

// ==== BACKFILL 0x005366B0  CreateTeamCommand::performAction_32  cls=PlanningModeCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_32()
{
{
    return GetStringCSF(aCmndPlanningmo, 0, g_Str_File_Init_CPP, 6580);
}
}

// ==== BACKFILL 0x005366D0  CreateTeamCommand::performAction_33  cls=PlanningModeCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_33()
{
{
    return GetStringCSF(g_Str_TXT_CONTROL, 0, g_Str_File_Init_CPP, 6582);
}
}

// ==== BACKFILL 0x005366F0  CreateTeamCommand::performAction_34  cls=PlanningModeCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_34()
{
{
    return GetStringCSF(aCmndPlanningmo_0, 0, g_Str_File_Init_CPP, 6584);
}
}

// ==== BACKFILL 0x00536710  CreateTeamCommand::performAction_35  cls=PlanningModeCommandClass  sig=csp  renamed_refs=0 ====
BOOL CreateTeamCommand::performAction_35()
{
{
    char v2;
    return (v2 & 7) != 0;
}
}

// ==== BACKFILL 0x00536730  CreateTeamCommand::performAction_36  cls=PlanningModeCommandClass  sig=csp  renamed_refs=0 ====
char CreateTeamCommand::performAction_36()
{
return 1;
}

// ==== BACKFILL 0x00536740  CreateTeamCommand::performAction_37  cls=PlanningModeCommandClass  sig=csp  renamed_refs=0 ====
unsigned int CreateTeamCommand::performAction_37()
{
{
    int v2;
    return ((unsigned int)~v2 >> 11) & 1;
}
}

// ==== BACKFILL 0x00536750  CreateTeamCommand::performAction_38  cls=PlanningModeCommandClass  sig=csp  renamed_refs=0 ====
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

// ==== BACKFILL 0x00536770  CreateTeamCommand::performAction_39  cls=CombatantSelectCommandClass  sig=csp  renamed_refs=0 ====
char * CreateTeamCommand::performAction_39()
{
return aCombatantselec;
}

// ==== BACKFILL 0x00536780  CreateTeamCommand::performAction_40  cls=CombatantSelectCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_40()
{
{
    return GetStringCSF(aCmndCombatants, 0, g_Str_File_Init_CPP, 6664);
}
}

// ==== BACKFILL 0x005367A0  CreateTeamCommand::performAction_41  cls=CombatantSelectCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_41()
{
{
    return GetStringCSF(g_Str_TXT_SELECTION, 0, g_Str_File_Init_CPP, 6666);
}
}

// ==== BACKFILL 0x005367C0  CreateTeamCommand::performAction_42  cls=CombatantSelectCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_42()
{
{
    return GetStringCSF(aCmndCombatants_0, 0, g_Str_File_Init_CPP, 6668);
}
}

// ==== BACKFILL 0x005367E0  CreateTeamCommand::performAction_43  cls=CombatantSelectCommandClass  sig=csp  renamed_refs=0 ====
int CreateTeamCommand::performAction_43()
{
{
    unsigned int v2;
    return (v2 >> 8) & 1;
}
}

// ==== BACKFILL 0x005367F0  CreateTeamCommand::performAction_44  cls=CombatantSelectCommandClass  sig=csp  renamed_refs=0 ====
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

// ==== BACKFILL 0x00536810  CreateTeamCommand::performAction_45  cls=TypeSelectCommandClass  sig=csp  renamed_refs=0 ====
char * CreateTeamCommand::performAction_45()
{
return g_INI_Key_TypeSelect;
}

// ==== BACKFILL 0x00536820  CreateTeamCommand::performAction_46  cls=TypeSelectCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_46()
{
{
    return GetStringCSF(aCmndTypeselect, 0, g_Str_File_Init_CPP, 6690);
}
}

// ==== BACKFILL 0x00536840  CreateTeamCommand::performAction_47  cls=TypeSelectCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_47()
{
{
    return GetStringCSF(g_Str_TXT_SELECTION, 0, g_Str_File_Init_CPP, 6692);
}
}

// ==== BACKFILL 0x00536860  CreateTeamCommand::performAction_48  cls=TypeSelectCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_48()
{
{
    return GetStringCSF(aCmndTypeselect_0, 0, g_Str_File_Init_CPP, 6694);
}
}

// ==== BACKFILL 0x00536880  CreateTeamCommand::performAction_49  cls=TypeSelectCommandClass  sig=csp  renamed_refs=0 ====
int CreateTeamCommand::performAction_49()
{
{
    unsigned int v2;
    return (v2 >> 8) & 1;
}
}

// ==== BACKFILL 0x00536890  CreateTeamCommand::performAction_50  cls=TypeSelectCommandClass  sig=csp  renamed_refs=0 ====
char CreateTeamCommand::performAction_50()
{
return 1;
}

// ==== BACKFILL 0x005368A0  CreateTeamCommand::performAction_51  cls=TypeSelectCommandClass  sig=csp  renamed_refs=0 ====
unsigned int CreateTeamCommand::performAction_51()
{
{
    int v2;
    return ((unsigned int)~v2 >> 11) & 1;
}
}

// ==== BACKFILL 0x005368B0  CreateTeamCommand::performAction_52  cls=TypeSelectCommandClass  sig=csp  renamed_refs=0 ====
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

// ==== BACKFILL 0x005368D0  CreateTeamCommand::performAction_53  cls=HealthNavCommandClass  sig=csp  renamed_refs=0 ====
char * CreateTeamCommand::performAction_53()
{
return aHealthnav;
}

// ==== BACKFILL 0x005368E0  CreateTeamCommand::performAction_54  cls=HealthNavCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_54()
{
{
    return GetStringCSF(aCmndHealthnavi, 0, g_Str_File_Init_CPP, 6728);
}
}

// ==== BACKFILL 0x00536900  CreateTeamCommand::performAction_55  cls=HealthNavCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_55()
{
{
    return GetStringCSF(g_Str_TXT_SELECTION, 0, g_Str_File_Init_CPP, 6730);
}
}

// ==== BACKFILL 0x00536920  CreateTeamCommand::performAction_56  cls=HealthNavCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_56()
{
{
    return GetStringCSF(aCmndHealthnavi_0, 0, g_Str_File_Init_CPP, 6732);
}
}

// ==== BACKFILL 0x00536940  CreateTeamCommand::performAction_57  cls=HealthNavCommandClass  sig=csp  renamed_refs=0 ====
int CreateTeamCommand::performAction_57()
{
{
    unsigned int v2;
    return (v2 >> 8) & 1;
}
}

// ==== BACKFILL 0x00536950  CreateTeamCommand::performAction_58  cls=HealthNavCommandClass  sig=csp  renamed_refs=0 ====
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

// ==== BACKFILL 0x00536970  CreateTeamCommand::performAction_59  cls=VeterancyNavCommandClass  sig=csp  renamed_refs=0 ====
char * CreateTeamCommand::performAction_59()
{
return aVeterancynav;
}

// ==== BACKFILL 0x00536980  CreateTeamCommand::performAction_60  cls=VeterancyNavCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_60()
{
{
    return GetStringCSF(aCmndVetnavigat, 0, g_Str_File_Init_CPP, 6754);
}
}

// ==== BACKFILL 0x005369A0  CreateTeamCommand::performAction_61  cls=VeterancyNavCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_61()
{
{
    return GetStringCSF(g_Str_TXT_SELECTION, 0, g_Str_File_Init_CPP, 6756);
}
}

// ==== BACKFILL 0x005369C0  CreateTeamCommand::performAction_62  cls=VeterancyNavCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_62()
{
{
    return GetStringCSF(aCmndVetnavigat_0, 0, g_Str_File_Init_CPP, 6758);
}
}

// ==== BACKFILL 0x005369E0  CreateTeamCommand::performAction_63  cls=VeterancyNavCommandClass  sig=csp  renamed_refs=0 ====
int CreateTeamCommand::performAction_63()
{
{
    unsigned int v2;
    return (v2 >> 8) & 1;
}
}

// ==== BACKFILL 0x005369F0  CreateTeamCommand::performAction_64  cls=VeterancyNavCommandClass  sig=csp  renamed_refs=0 ====
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

// ==== BACKFILL 0x00536A10  CreateTeamCommand::performAction_65  cls=PrevObjectCommandClass  sig=csp  renamed_refs=0 ====
char * CreateTeamCommand::performAction_65()
{
return aPreviousobject;
}

// ==== BACKFILL 0x00536A20  CreateTeamCommand::performAction_66  cls=PrevObjectCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_66()
{
{
    return GetStringCSF(aTxtPrevObject, 0, g_Str_File_Init_CPP, 6817);
}
}

// ==== BACKFILL 0x00536A40  CreateTeamCommand::performAction_67  cls=PrevObjectCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_67()
{
{
    return GetStringCSF(g_Str_TXT_SELECTION, 0, g_Str_File_Init_CPP, 6819);
}
}

// ==== BACKFILL 0x00536A60  CreateTeamCommand::performAction_68  cls=PrevObjectCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_68()
{
{
    return GetStringCSF(aTxtPrevObjectD, 0, g_Str_File_Init_CPP, 6821);
}
}

// ==== BACKFILL 0x00536A80  CreateTeamCommand::performAction_69  cls=PrevObjectCommandClass  sig=csp  renamed_refs=0 ====
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

// ==== BACKFILL 0x00536B10  CreateTeamCommand::performAction_70  cls=StopCommandClass  sig=csp  renamed_refs=0 ====
char * CreateTeamCommand::performAction_70()
{
return aStopobject;
}

// ==== BACKFILL 0x00536B20  CreateTeamCommand::performAction_71  cls=StopCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_71()
{
{
    return GetStringCSF(aTxtStopObject, 0, g_Str_File_Init_CPP, 6858);
}
}

// ==== BACKFILL 0x00536B40  CreateTeamCommand::performAction_72  cls=StopCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_72()
{
{
    return GetStringCSF(g_Str_TXT_CONTROL, 0, g_Str_File_Init_CPP, 6860);
}
}

// ==== BACKFILL 0x00536B60  CreateTeamCommand::performAction_73  cls=StopCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_73()
{
{
    return GetStringCSF(aTxtStopObjectD, 0, g_Str_File_Init_CPP, 6862);
}
}

// ==== BACKFILL 0x00536B80  CreateTeamCommand::performAction_74  cls=StopCommandClass  sig=csp  renamed_refs=0 ====
int CreateTeamCommand_performAction_74()
{
    wchar_t *__stdcall CreateTeamCommand::sub_536B80(int a1)
{
    return UI_Create_730EA0();
}
}

// ==== BACKFILL 0x00536B90  CreateTeamCommand::performAction_75  cls=AllToCheerCommandClass  sig=csp  renamed_refs=0 ====
char * CreateTeamCommand::performAction_75()
{
return aAlltocheer;
}

// ==== BACKFILL 0x00536BA0  CreateTeamCommand::performAction_76  cls=AllToCheerCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_76()
{
{
    return GetStringCSF(aCmndAllcheer, 0, g_Str_File_Init_CPP, 6876);
}
}

// ==== BACKFILL 0x00536BC0  CreateTeamCommand::performAction_77  cls=AllToCheerCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_77()
{
{
    return GetStringCSF(g_Str_TXT_CONTROL, 0, g_Str_File_Init_CPP, 6878);
}
}

// ==== BACKFILL 0x00536BE0  CreateTeamCommand::performAction_78  cls=AllToCheerCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_78()
{
{
    return GetStringCSF(aCmndAllcheerde, 0, g_Str_File_Init_CPP, 6880);
}
}

// ==== BACKFILL 0x00536C00  CreateTeamCommand::performAction_79  cls=AllToCheerCommandClass  sig=csp  renamed_refs=0 ====
int CreateTeamCommand::performAction_79()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
wchar_t *__thiscall CreateTeamCommand::performAction_79(AllToCheerCommandClass *this)
{
  return UI_Create_730F30(); /*0x536c05*/
}
}

// ==== BACKFILL 0x00536C10  CreateTeamCommand::performAction_80  cls=DeployCommandClass  sig=csp  renamed_refs=0 ====
char * CreateTeamCommand::performAction_80()
{
return aDeployobject;
}

// ==== BACKFILL 0x00536C20  CreateTeamCommand::performAction_81  cls=DeployCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_81()
{
{
    return GetStringCSF(aTxtDeployObjec, 0, g_Str_File_Init_CPP, 6903);
}
}

// ==== BACKFILL 0x00536C40  CreateTeamCommand::performAction_82  cls=DeployCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_82()
{
{
    return GetStringCSF(g_Str_TXT_CONTROL, 0, g_Str_File_Init_CPP, 6905);
}
}

// ==== BACKFILL 0x00536C60  CreateTeamCommand::performAction_83  cls=DeployCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_83()
{
{
    return GetStringCSF(aTxtDeployObjec_0, 0, g_Str_File_Init_CPP, 6907);
}
}

// ==== BACKFILL 0x00536C80  CreateTeamCommand::performAction_84  cls=DeployCommandClass  sig=csp  renamed_refs=0 ====
int CreateTeamCommand_performAction_84()
{
    char __stdcall CreateTeamCommand::sub_536C80(int a1)
{
    return ProcessSelectionExperience();
}
}

// ==== BACKFILL 0x00536C90  CreateTeamCommand::performAction_85  cls=GuardCommandClass  sig=csp  renamed_refs=0 ====
char * CreateTeamCommand::performAction_85()
{
return aGuardobject;
}

// ==== BACKFILL 0x00536CA0  CreateTeamCommand::performAction_86  cls=GuardCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_86()
{
{
    return GetStringCSF(aTxtGuard, 0, g_Str_File_Init_CPP, 6931);
}
}

// ==== BACKFILL 0x00536CC0  CreateTeamCommand::performAction_87  cls=GuardCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_87()
{
{
    return GetStringCSF(g_Str_TXT_CONTROL, 0, g_Str_File_Init_CPP, 6933);
}
}

// ==== BACKFILL 0x00536CE0  CreateTeamCommand::performAction_88  cls=GuardCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_88()
{
{
    return GetStringCSF(aTxtGuardDesc, 0, g_Str_File_Init_CPP, 6935);
}
}

// ==== BACKFILL 0x00536D00  CreateTeamCommand::performAction_89  cls=GuardCommandClass  sig=csp  renamed_refs=0 ====
int CreateTeamCommand_performAction_89()
{
    char __stdcall CreateTeamCommand::sub_536D00(int a1)
{
    return GetFactoryData();
}
}

// ==== BACKFILL 0x00536D10  CreateTeamCommand::performAction_90  cls=ScatterCommandClass  sig=csp  renamed_refs=0 ====
char * CreateTeamCommand::performAction_90()
{
return aScatterobject;
}

// ==== BACKFILL 0x00536D20  CreateTeamCommand::performAction_91  cls=ScatterCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_91()
{
{
    return GetStringCSF(aTxtScatter, 0, g_Str_File_Init_CPP, 6960);
}
}

// ==== BACKFILL 0x00536D40  CreateTeamCommand::performAction_92  cls=ScatterCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_92()
{
{
    return GetStringCSF(g_Str_TXT_CONTROL, 0, g_Str_File_Init_CPP, 6962);
}
}

// ==== BACKFILL 0x00536D60  CreateTeamCommand::performAction_93  cls=ScatterCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_93()
{
{
    return GetStringCSF(aTxtScatterDesc, 0, g_Str_File_Init_CPP, 6964);
}
}

// ==== BACKFILL 0x00536D80  CreateTeamCommand::performAction_94  cls=ScatterCommandClass  sig=csp  renamed_refs=0 ====
int CreateTeamCommand_performAction_94()
{
    wchar_t *__stdcall CreateTeamCommand::sub_536D80(int a1)
{
    return UI_Create_730FE0();
}
}

// ==== BACKFILL 0x00536D90  CreateTeamCommand::performAction_95  cls=CenterViewCommandClass  sig=csp  renamed_refs=0 ====
char * CreateTeamCommand::performAction_95()
{
return aCenterview;
}

// ==== BACKFILL 0x00536DA0  CreateTeamCommand::performAction_96  cls=CenterViewCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_96()
{
{
    return GetStringCSF(aTxtCenterView, 0, g_Str_File_Init_CPP, 6987);
}
}

// ==== BACKFILL 0x00536DC0  CreateTeamCommand::performAction_97  cls=CenterViewCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_97()
{
{
    return GetStringCSF(g_Str_TXT_SELECTION, 0, g_Str_File_Init_CPP, 6989);
}
}

// ==== BACKFILL 0x00536DE0  CreateTeamCommand::performAction_98  cls=CenterViewCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_98()
{
{
    return GetStringCSF(aTxtCenterViewD, 0, g_Str_File_Init_CPP, 6991);
}
}

// ==== BACKFILL 0x00536E00  CreateTeamCommand::performAction_99  cls=CenterViewCommandClass  sig=csp  renamed_refs=0 ====
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

// ==== BACKFILL 0x00536E30  CreateTeamCommand::performAction_100  cls=CenterBaseCommandClass  sig=csp  renamed_refs=0 ====
char * CreateTeamCommand::performAction_100()
{
return aCenterbase;
}

// ==== BACKFILL 0x00536E40  CreateTeamCommand::performAction_101  cls=CenterBaseCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_101()
{
{
    return GetStringCSF(aTxtCenterBase, 0, g_Str_File_Init_CPP, 7018);
}
}

// ==== BACKFILL 0x00536E60  CreateTeamCommand::performAction_102  cls=CenterBaseCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_102()
{
{
    return GetStringCSF(g_Str_TXT_SELECTION, 0, g_Str_File_Init_CPP, 7020);
}
}

// ==== BACKFILL 0x00536E80  CreateTeamCommand::performAction_103  cls=CenterBaseCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_103()
{
{
    return GetStringCSF(aTxtCenterBaseD, 0, g_Str_File_Init_CPP, 7022);
}
}

// ==== BACKFILL 0x00536EA0  CreateTeamCommand::performAction_104  cls=CenterBaseCommandClass  sig=csp  renamed_refs=0 ====
int CreateTeamCommand::performAction_104()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
int __thiscall CreateTeamCommand::performAction_104(CenterBaseCommandClass *this)
{
  return TAction::CenterOnStartCoords(); /*0x536ea5*/
}
}

// ==== BACKFILL 0x00536EB0  CreateTeamCommand::performAction_105  cls=AllianceCommandClass  sig=csp  renamed_refs=0 ====
char * CreateTeamCommand::performAction_105()
{
return aTogglealliance;
}

// ==== BACKFILL 0x00536EC0  CreateTeamCommand::performAction_106  cls=AllianceCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_106()
{
{
    return GetStringCSF(aTxtAlliance, 0, g_Str_File_Init_CPP, 7045);
}
}

// ==== BACKFILL 0x00536EE0  CreateTeamCommand::performAction_107  cls=AllianceCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_107()
{
{
    return GetStringCSF(g_Str_TXT_CONTROL, 0, g_Str_File_Init_CPP, 7047);
}
}

// ==== BACKFILL 0x00536F00  CreateTeamCommand::performAction_108  cls=AllianceCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_108()
{
{
    return GetStringCSF(aTxtAllianceDes, 0, g_Str_File_Init_CPP, 7049);
}
}

// ==== BACKFILL 0x00536F20  CreateTeamCommand::performAction_109  cls=AllianceCommandClass  sig=csp  renamed_refs=0 ====
int CreateTeamCommand::performAction_109()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
char *__thiscall CreateTeamCommand::performAction_109(AllianceCommandClass *this)
{
  return UI_Create_7318F0(); /*0x536f25*/
}
}

// ==== BACKFILL 0x00536F30  CreateTeamCommand::performAction_110  cls=ToggleRepairCommandClass  sig=csp  renamed_refs=0 ====
char * CreateTeamCommand::performAction_110()
{
return aTogglerepair;
}

// ==== BACKFILL 0x00536F40  CreateTeamCommand::performAction_111  cls=ToggleRepairCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_111()
{
{
    return GetStringCSF(aTxtRepairMode, 0, g_Str_File_Init_CPP, 7103);
}
}

// ==== BACKFILL 0x00536F60  CreateTeamCommand::performAction_112  cls=ToggleRepairCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_112()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7105);
}
}

// ==== BACKFILL 0x00536F80  CreateTeamCommand::performAction_113  cls=ToggleRepairCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_113()
{
{
    return GetStringCSF(aTxtRepairModeD, 0, g_Str_File_Init_CPP, 7107);
}
}

// ==== BACKFILL 0x00536FB0  CreateTeamCommand::performAction_114  cls=ToggleSellCommandClass  sig=csp  renamed_refs=0 ====
char * CreateTeamCommand::performAction_114()
{
return aTogglesell;
}

// ==== BACKFILL 0x00536FC0  CreateTeamCommand::performAction_115  cls=ToggleSellCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_115()
{
{
    return GetStringCSF(aTxtSellMode, 0, g_Str_File_Init_CPP, 7129);
}
}

// ==== BACKFILL 0x00536FE0  CreateTeamCommand::performAction_116  cls=ToggleSellCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_116()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7131);
}
}

// ==== BACKFILL 0x00537000  CreateTeamCommand::performAction_117  cls=ToggleSellCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_117()
{
{
    return GetStringCSF(aTxtSellModeDes, 0, g_Str_File_Init_CPP, 7133);
}
}

// ==== BACKFILL 0x00537020  CreateTeamCommand::performAction_118  cls=ToggleSellCommandClass  sig=csp  renamed_refs=0 ====
char CreateTeamCommand::performAction_118(int a1)
{
{
    return BuildingClass::TogglePower(&DataGlobal_87F7E8, -1);
}
}

// ==== BACKFILL 0x00537030  CreateTeamCommand::performAction_119  cls=BeaconPlacementCommandClass  sig=csp  renamed_refs=0 ====
char * CreateTeamCommand::performAction_119()
{
return aPlacebeacon;
}

// ==== BACKFILL 0x00537040  CreateTeamCommand::performAction_120  cls=BeaconPlacementCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_120()
{
{
    return GetStringCSF(aTxtPlaceBeacon, 0, g_Str_File_Init_CPP, 7172);
}
}

// ==== BACKFILL 0x00537060  CreateTeamCommand::performAction_121  cls=BeaconPlacementCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_121()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7174);
}
}

// ==== BACKFILL 0x00537080  CreateTeamCommand::performAction_122  cls=BeaconPlacementCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_122()
{
{
    return GetStringCSF(aTxtPlaceBeacon_0, 0, g_Str_File_Init_CPP, 7176);
}
}

// ==== BACKFILL 0x005370A0  CreateTeamCommand::performAction_123  cls=BeaconPlacementCommandClass  sig=csp  renamed_refs=0 ====
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

// ==== BACKFILL 0x005370C0  CreateTeamCommand::performAction_124  cls=CenterREventCommandClass  sig=csp  renamed_refs=0 ====
char * CreateTeamCommand::performAction_124()
{
return aCenteronradare;
}

// ==== BACKFILL 0x005370D0  CreateTeamCommand::performAction_125  cls=CenterREventCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_125()
{
{
    return GetStringCSF(aTxtRadarEvent, 0, g_Str_File_Init_CPP, 7195);
}
}

// ==== BACKFILL 0x005370F0  CreateTeamCommand::performAction_126  cls=CenterREventCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_126()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7197);
}
}

// ==== BACKFILL 0x00537110  CreateTeamCommand::performAction_127  cls=CenterREventCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_127()
{
{
    return GetStringCSF(aTxtRadarEventD, 0, g_Str_File_Init_CPP, 7199);
}
}

// ==== BACKFILL 0x00537140  CreateTeamCommand::performAction_129  cls=SidebarUpCommandClass  sig=csp  renamed_refs=0 ====
char * CreateTeamCommand::performAction_129()
{
return aSidebarup;
}

// ==== BACKFILL 0x00537150  CreateTeamCommand::performAction_130  cls=SidebarUpCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_130()
{
{
    return GetStringCSF(aTxtSidebarUp, 0, g_Str_File_Init_CPP, 7249);
}
}

// ==== BACKFILL 0x00537170  CreateTeamCommand::performAction_131  cls=SidebarUpCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_131()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7251);
}
}

// ==== BACKFILL 0x00537190  CreateTeamCommand::performAction_132  cls=SidebarUpCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_132()
{
{
    return GetStringCSF(aTxtSidebarUpDe, 0, g_Str_File_Init_CPP, 7253);
}
}

// ==== BACKFILL 0x005371B0  CreateTeamCommand::performAction_133  cls=SidebarUpCommandClass  sig=csp  renamed_refs=0 ====
char CreateTeamCommand::performAction_133()
{
{
    return CreateTeamCommand::performAction_245(&DataGlobal_87F7E8, 1, -1);
}
}

// ==== BACKFILL 0x005371D0  CreateTeamCommand::performAction_134  cls=SidebarDownCommandClass  sig=csp  renamed_refs=0 ====
char * CreateTeamCommand::performAction_134()
{
return aSidebardown;
}

// ==== BACKFILL 0x005371E0  CreateTeamCommand::performAction_135  cls=SidebarDownCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_135()
{
{
    return GetStringCSF(aTxtSidebarDown, 0, g_Str_File_Init_CPP, 7389);
}
}

// ==== BACKFILL 0x00537200  CreateTeamCommand::performAction_136  cls=SidebarDownCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_136()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7391);
}
}

// ==== BACKFILL 0x00537220  CreateTeamCommand::performAction_137  cls=SidebarDownCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_137()
{
{
    return GetStringCSF(aTxtSidebarDown_0, 0, g_Str_File_Init_CPP, 7393);
}
}

// ==== BACKFILL 0x00537240  CreateTeamCommand::performAction_138  cls=SidebarDownCommandClass  sig=csp  renamed_refs=0 ====
char CreateTeamCommand::performAction_138()
{
{
    return CreateTeamCommand::performAction_245(&DataGlobal_87F7E8, 0, -1);
}
}

// ==== BACKFILL 0x00537260  CreateTeamCommand::performAction_139  cls=OptionsCommandClass  sig=csp  renamed_refs=0 ====
CHAR * CreateTeamCommand::performAction_139()
{
{
    return (CHAR *)&g_INI_Key_Options;
}
}

// ==== BACKFILL 0x00537270  CreateTeamCommand::performAction_140  cls=OptionsCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_140()
{
{
    return GetStringCSF(aTxtOptions, 0, g_Str_File_Init_CPP, 7530);
}
}

// ==== BACKFILL 0x00537290  CreateTeamCommand::performAction_141  cls=OptionsCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_141()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7532);
}
}

// ==== BACKFILL 0x005372B0  CreateTeamCommand::performAction_142  cls=OptionsCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_142()
{
{
    return GetStringCSF(aTxtOptionsDesc, 0, g_Str_File_Init_CPP, 7534);
}
}

// ==== BACKFILL 0x005372E0  CreateTeamCommand::performAction_144  cls=View1CommandClass  sig=csp  renamed_refs=0 ====
char * CreateTeamCommand::performAction_144()
{
return aView1;
}

// ==== BACKFILL 0x005372F0  CreateTeamCommand::performAction_145  cls=View1CommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_145()
{
{
    return GetStringCSF(aTxtViewBookmar, 0, g_Str_File_Init_CPP, 7707);
}
}

// ==== BACKFILL 0x00537310  CreateTeamCommand::performAction_146  cls=View1CommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_146()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7709);
}
}

// ==== BACKFILL 0x00537330  CreateTeamCommand::performAction_147  cls=View1CommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_147()
{
{
    return GetStringCSF(aTxtViewBookmar_0, 0, g_Str_File_Init_CPP, 7711);
}
}

// ==== BACKFILL 0x005373D0  CreateTeamCommand::performAction_149  cls=View2CommandClass  sig=csp  renamed_refs=0 ====
char * CreateTeamCommand::performAction_149()
{
return aView2;
}

// ==== BACKFILL 0x005373E0  CreateTeamCommand::performAction_150  cls=View2CommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_150()
{
{
    return GetStringCSF(aTxtViewBookmar_1, 0, g_Str_File_Init_CPP, 7743);
}
}

// ==== BACKFILL 0x00537400  CreateTeamCommand::performAction_151  cls=View2CommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_151()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7745);
}
}

// ==== BACKFILL 0x00537420  CreateTeamCommand::performAction_152  cls=View2CommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_152()
{
{
    return GetStringCSF(aTxtViewBookmar_2, 0, g_Str_File_Init_CPP, 7747);
}
}

// ==== BACKFILL 0x005374C0  CreateTeamCommand::performAction_154  cls=View3CommandClass  sig=csp  renamed_refs=0 ====
char * CreateTeamCommand::performAction_154()
{
return aView3;
}

// ==== BACKFILL 0x005374D0  CreateTeamCommand::performAction_155  cls=View3CommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_155()
{
{
    return GetStringCSF(aTxtViewBookmar_3, 0, g_Str_File_Init_CPP, 7779);
}
}

// ==== BACKFILL 0x005374F0  CreateTeamCommand::performAction_156  cls=View3CommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_156()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7781);
}
}

// ==== BACKFILL 0x00537510  CreateTeamCommand::performAction_157  cls=View3CommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_157()
{
{
    return GetStringCSF(aTxtViewBookmar_4, 0, g_Str_File_Init_CPP, 7783);
}
}

// ==== BACKFILL 0x005375B0  CreateTeamCommand::performAction_159  cls=View4CommandClass  sig=csp  renamed_refs=0 ====
char * CreateTeamCommand::performAction_159()
{
return aView4;
}

// ==== BACKFILL 0x005375C0  CreateTeamCommand::performAction_160  cls=View4CommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_160()
{
{
    return GetStringCSF(aTxtViewBookmar_5, 0, g_Str_File_Init_CPP, 7815);
}
}

// ==== BACKFILL 0x005375E0  CreateTeamCommand::performAction_161  cls=View4CommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_161()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7817);
}
}

// ==== BACKFILL 0x00537600  CreateTeamCommand::performAction_162  cls=View4CommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_162()
{
{
    return GetStringCSF(aTxtViewBookmar_6, 0, g_Str_File_Init_CPP, 7819);
}
}

// ==== BACKFILL 0x005376A0  CreateTeamCommand::performAction_163  cls=SetView1CommandClass  sig=csp  renamed_refs=0 ====
char * CreateTeamCommand::performAction_163()
{
return aSetview1;
}

// ==== BACKFILL 0x005376B0  CreateTeamCommand::performAction_164  cls=SetView1CommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_164()
{
{
    return GetStringCSF(aTxtSetBookmark, 0, g_Str_File_Init_CPP, 7851);
}
}

// ==== BACKFILL 0x005376D0  CreateTeamCommand::performAction_165  cls=SetView1CommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_165()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7853);
}
}

// ==== BACKFILL 0x005376F0  CreateTeamCommand::performAction_166  cls=SetView1CommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_166()
{
{
    return GetStringCSF(aTxtSetBookmark_0, 0, g_Str_File_Init_CPP, 7855);
}
}

// ==== BACKFILL 0x00537710  CreateTeamCommand::performAction_167  cls=SetView1CommandClass  sig=csp  renamed_refs=0 ====
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

// ==== BACKFILL 0x00537760  CreateTeamCommand::performAction_168  cls=SetView2CommandClass  sig=csp  renamed_refs=0 ====
char * CreateTeamCommand::performAction_168()
{
return aSetview2;
}

// ==== BACKFILL 0x00537770  CreateTeamCommand::performAction_169  cls=SetView2CommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_169()
{
{
    return GetStringCSF(aTxtSetBookmark_1, 0, g_Str_File_Init_CPP, 7878);
}
}

// ==== BACKFILL 0x00537790  CreateTeamCommand::performAction_170  cls=SetView2CommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_170()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7880);
}
}

// ==== BACKFILL 0x005377B0  CreateTeamCommand::performAction_171  cls=SetView2CommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_171()
{
{
    return GetStringCSF(aTxtSetBookmark_2, 0, g_Str_File_Init_CPP, 7882);
}
}

// ==== BACKFILL 0x005377D0  CreateTeamCommand::performAction_172  cls=SetView2CommandClass  sig=csp  renamed_refs=0 ====
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

// ==== BACKFILL 0x00537820  CreateTeamCommand::performAction_173  cls=SetView3CommandClass  sig=csp  renamed_refs=0 ====
char * CreateTeamCommand::performAction_173()
{
return aSetview3;
}

// ==== BACKFILL 0x00537830  CreateTeamCommand::performAction_174  cls=SetView3CommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_174()
{
{
    return GetStringCSF(aTxtSetBookmark_3, 0, g_Str_File_Init_CPP, 7905);
}
}

// ==== BACKFILL 0x00537850  CreateTeamCommand::performAction_175  cls=SetView3CommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_175()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7907);
}
}

// ==== BACKFILL 0x00537870  CreateTeamCommand::performAction_176  cls=SetView3CommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_176()
{
{
    return GetStringCSF(aTxtSetBookmark_4, 0, g_Str_File_Init_CPP, 7909);
}
}

// ==== BACKFILL 0x00537890  CreateTeamCommand::performAction_177  cls=SetView3CommandClass  sig=csp  renamed_refs=0 ====
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

// ==== BACKFILL 0x005378E0  CreateTeamCommand::performAction_178  cls=SetView4CommandClass  sig=csp  renamed_refs=0 ====
char * CreateTeamCommand::performAction_178()
{
return aSetview4;
}

// ==== BACKFILL 0x005378F0  CreateTeamCommand::performAction_179  cls=SetView4CommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_179()
{
{
    return GetStringCSF(aTxtSetBookmark_5, 0, g_Str_File_Init_CPP, 7932);
}
}

// ==== BACKFILL 0x00537910  CreateTeamCommand::performAction_180  cls=SetView4CommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_180()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7934);
}
}

// ==== BACKFILL 0x00537930  CreateTeamCommand::performAction_181  cls=SetView4CommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_181()
{
{
    return GetStringCSF(aTxtSetBookmark_6, 0, g_Str_File_Init_CPP, 7936);
}
}

// ==== BACKFILL 0x00537950  CreateTeamCommand::performAction_182  cls=SetView4CommandClass  sig=csp  renamed_refs=0 ====
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

// ==== BACKFILL 0x005379A0  CreateTeamCommand::performAction_183  cls=FollowCommandClass  sig=csp  renamed_refs=0 ====
char * CreateTeamCommand::performAction_183()
{
return aFollow;
}

// ==== BACKFILL 0x005379B0  CreateTeamCommand::performAction_184  cls=FollowCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_184()
{
{
    return GetStringCSF(aTxtFollow, 0, g_Str_File_Init_CPP, 7959);
}
}

// ==== BACKFILL 0x005379D0  CreateTeamCommand::performAction_185  cls=FollowCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_185()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7961);
}
}

// ==== BACKFILL 0x005379F0  CreateTeamCommand::performAction_186  cls=FollowCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_186()
{
{
    return GetStringCSF(aTxtFollowDesc, 0, g_Str_File_Init_CPP, 7963);
}
}

// ==== BACKFILL 0x00537A10  CreateTeamCommand::performAction_187  cls=FollowCommandClass  sig=csp  renamed_refs=0 ====
bool CreateTeamCommand::performAction_187()
{
{
    if ( !*(int *)&g_NetworkPlayerBuffer.__pad_14B0[476] || MapClass::GetScrollMode((int)&DataGlobal_87F7E8) )
    return MapClass::SetScrollMode((int)&DataGlobal_87F7E8, 0);
    else
    return MapClass::SetScrollMode((int)&DataGlobal_87F7E8, **(MouseClass ***)&g_NetworkPlayerBuffer.__pad_14B0[464]);
}
}

// ==== BACKFILL 0x00537A50  Commands::AddRef  cls=MultiplayerDebugCommandClass  sig=csp  renamed_refs=0 ====
char * Commands::AddRef()
{
{
    return aMultiplayerdeb;
}
}

// ==== BACKFILL 0x00537A60  Commands::ddtor  cls=MultiplayerDebugCommandClass  sig=csp  renamed_refs=0 ====
const wchar_t * Commands::ddtor()
{
return g_INI_Key_De;
}

// ==== BACKFILL 0x00537A70  Commands::Release  cls=MultiplayerDebugCommandClass  sig=csp  renamed_refs=0 ====
char ** Commands::Release()
{
{
    return &DataGlobal_8278C0;
}
}

// ==== BACKFILL 0x00537A80  Commands::StubReturn8550640  cls=MultiplayerDebugCommandClass  sig=csp  renamed_refs=0 ====
_UNKNOWN ** Commands::StubReturn8550640()
{
{
    return &DataGlobal_8278F0;
}
}

// ==== BACKFILL 0x00537A90  Commands::Execute  cls=MultiplayerDebugCommandClass  sig=csp  renamed_refs=0 ====
char Commands::Execute()
{
{
    char result;
    result = DataGlobal_A8B8B4;
    if ( DataGlobal_A8B8B4 )
  {
    result = DataGlobal_A8B8B5 == 0;
    DataGlobal_A8B8B5 = DataGlobal_A8B8B5 == 0;
  }
    return result;
}
}

// ==== BACKFILL 0x00537AB0  CreateTeamCommand::performAction_188  cls=MultiplayerSyncCommandClass  sig=csp  renamed_refs=0 ====
char * CreateTeamCommand::performAction_188()
{
return aExtrasynccheck;
}

// ==== BACKFILL 0x00537AC0  CreateTeamCommand::performAction_189  cls=MultiplayerSyncCommandClass  sig=csp  renamed_refs=0 ====
const wchar_t * CreateTeamCommand::performAction_189()
{
return g_INI_Key_De;
}

// ==== BACKFILL 0x00537AD0  CreateTeamCommand::performAction_190  cls=MultiplayerSyncCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_190()
{
return aGameSyncLoggin;
}

// ==== BACKFILL 0x00537AE0  CreateTeamCommand::performAction_191  cls=MultiplayerSyncCommandClass  sig=csp  renamed_refs=0 ====
_UNKNOWN ** CreateTeamCommand::performAction_191()
{
{
    return &DataGlobal_827970;
}
}

// ==== BACKFILL 0x00537AF0  CreateTeamCommand::performAction_192  cls=MultiplayerSyncCommandClass  sig=csp  renamed_refs=0 ====
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

// ==== BACKFILL 0x00537B40  ScreenCaptureCommandClass::Constructor  cls=ScreenCaptureCommandClass  sig=csp  renamed_refs=0 ====
unsigned int * ScreenCaptureCommandClass::Constructor()
{
{
    *(void**)this = &vt_ScreenCaptureCommandClass;
    return this;
}
}

// ==== BACKFILL 0x00537B50  ScreenCaptureCommandClass::AddRef  cls=ScreenCaptureCommandClass  sig=csp  renamed_refs=0 ====
char * ScreenCaptureCommandClass::AddRef()
{
return aScreencapture;
}

// ==== BACKFILL 0x00537B60  ScreenCaptureCommandClass::ddtor  cls=ScreenCaptureCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * ScreenCaptureCommandClass::ddtor()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 8071);
}
}

// ==== BACKFILL 0x00537B80  ScreenCaptureCommandClass::Release  cls=ScreenCaptureCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * ScreenCaptureCommandClass::Release()
{
{
    return GetStringCSF(aTxtScrncap, 0, g_Str_File_Init_CPP, 8072);
}
}

// ==== BACKFILL 0x00537BA0  ScreenCaptureCommandClass::Execute  cls=ScreenCaptureCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * ScreenCaptureCommandClass::Execute()
{
{
    return GetStringCSF(aTxtScrncapDesc, 0, g_Str_File_Init_CPP, 8073);
}
}

// ==== BACKFILL 0x00537DD0  PageUserCommandClass::PageUserCommandClass  cls=PageUserCommandClass  sig=csp  renamed_refs=0 ====
unsigned int * PageUserCommandClass::PageUserCommandClass()
{
{
    *(void**)this = &vt_PageUserCommandClass;
    return this;
}
}

// ==== BACKFILL 0x00537DE0  PageUserCommandClass::AddRef  cls=PageUserCommandClass  sig=csp  renamed_refs=0 ====
char * PageUserCommandClass::AddRef()
{
{
    return DataGlobal_827A7C;
}
}

// ==== BACKFILL 0x00537DF0  PageUserCommandClass::Release  cls=PageUserCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * PageUserCommandClass::Release()
{
{
    return GetStringCSF(DataGlobal_827A88, 0, g_Str_File_Init_CPP, 7563);
}
}

// ==== BACKFILL 0x00537E10  PageUserCommandClass::ddtor  cls=PageUserCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * PageUserCommandClass::ddtor()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7565);
}
}

// ==== BACKFILL 0x00537E30  PageUserCommandClass::Read  cls=PageUserCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * PageUserCommandClass::Read()
{
{
    return GetStringCSF(DataGlobal_827A98, 0, g_Str_File_Init_CPP, 7567);
}
}

// ==== BACKFILL 0x00537E50  PageUserCommandClass::Do  cls=PageUserCommandClass  sig=csp  renamed_refs=0 ====
char PageUserCommandClass::Do(int a1)
{
{
    char result;
    if ( g_GameMode_Current[0] == 4 )
    return UI_Add();
    return result;
}
}

// ==== BACKFILL 0x00537E70  CursorPositionCommandClass::Constructor  cls=CursorPositionCommandClass  sig=csp  renamed_refs=0 ====
unsigned int * CursorPositionCommandClass::Constructor()
{
{
    *(void**)this = &vt_CursorPositionCommandClass;
    return this;
}
}

// ==== BACKFILL 0x00537E80  CreateTeamCommand::performAction_193  cls=CursorPositionCommandClass  sig=csp  renamed_refs=0 ====
char * CreateTeamCommand::performAction_193()
{
{
    return DataGlobal_827ADC;
}
}

// ==== BACKFILL 0x00537E90  CreateTeamCommand::performAction_194  cls=CursorPositionCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_194()
{
{
    return GetStringCSF(DataGlobal_827AE8, 0, g_Str_File_Init_CPP, 8231);
}
}

// ==== BACKFILL 0x00537EB0  CreateTeamCommand::performAction_195  cls=CursorPositionCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_195()
{
{
    return GetStringCSF(aGuiDebug, 0, g_Str_File_Init_CPP, 8232);
}
}

// ==== BACKFILL 0x00537ED0  CreateTeamCommand::performAction_196  cls=CursorPositionCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * CreateTeamCommand::performAction_196()
{
{
    return GetStringCSF(aDescCursorchea, 0, g_Str_File_Init_CPP, 8233);
}
}

// ==== BACKFILL 0x00537EF0  CreateTeamCommand::performAction_197  cls=CursorPositionCommandClass  sig=csp  renamed_refs=0 ====
bool CreateTeamCommand::performAction_197(int a1)
{
{
    bool result;
    result = DataGlobal_A8F7D8 == 0;
    DataGlobal_A8F7D8 = DataGlobal_A8F7D8 == 0;
    return result;
}
}

// ==== BACKFILL 0x00537F10  DeleteCommandClass::Constructor  cls=DeleteCommandClass  sig=csp  renamed_refs=0 ====
unsigned int * DeleteCommandClass::Constructor()
{
{
    *(void**)this = &vt_DeleteCommandClass;
    return this;
}
}

// ==== BACKFILL 0x00537F20  DeleteCommandClass::AddRef  cls=DeleteCommandClass  sig=csp  renamed_refs=0 ====
char * DeleteCommandClass::AddRef()
{
return aDelete;
}

// ==== BACKFILL 0x00537F30  DeleteCommandClass::Release  cls=DeleteCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * DeleteCommandClass::Release()
{
{
    return GetStringCSF(aCmndDelete, 0, g_Str_File_Init_CPP, 6559);
}
}

// ==== BACKFILL 0x00537F50  DeleteCommandClass::ddtor  cls=DeleteCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * DeleteCommandClass::ddtor()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 6561);
}
}

// ==== BACKFILL 0x00537F70  DeleteCommandClass::Read  cls=DeleteCommandClass  sig=csp  renamed_refs=0 ====
wchar_t * DeleteCommandClass::Read()
{
{
    return GetStringCSF(aCmndDeletedesc, 0, g_Str_File_Init_CPP, 6563);
}
}

// ==== BACKFILL 0x00537F90  DeleteCommandClass::Undo  cls=DeleteCommandClass  sig=csp  renamed_refs=0 ====
int DeleteCommandClass_Undo()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
char __stdcall DeleteCommandClass::_vt08(int a1)
{
  return UI_Delete(); /*0x537f95*/
}
}

// ==== BACKFILL 0x00537FA0  CreateTeamCommand::performAction_198  cls=MultiplayerDebugCommandClass  sig=csp  renamed_refs=0 ====
std::locale::facet * CreateTeamCommand::performAction_198(char a2)
{
{
    *(void**)this = vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x00537FC0  CreateTeamCommand::performAction_199  cls=MultiplayerSyncCommandClass  sig=csp  renamed_refs=0 ====
std::locale::facet * CreateTeamCommand::performAction_199(char a2)
{
{
    *(void**)this = vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x00537FE0  CreateTeamCommand::performAction_200  cls=FollowCommandClass  sig=csp  renamed_refs=0 ====
std::locale::facet * CreateTeamCommand::performAction_200(char a2)
{
{
    *(void**)this = vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x00538000  CreateTeamCommand::performAction_201  cls=View1CommandClass  sig=csp  renamed_refs=0 ====
std::locale::facet * CreateTeamCommand::performAction_201(char a2)
{
{
    *(void**)this = vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x00538020  CreateTeamCommand::performAction_202  cls=View2CommandClass  sig=csp  renamed_refs=0 ====
std::locale::facet * CreateTeamCommand::performAction_202(char a2)
{
{
    *(void**)this = vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x00538040  CreateTeamCommand::performAction_203  cls=View3CommandClass  sig=csp  renamed_refs=0 ====
std::locale::facet * CreateTeamCommand::performAction_203(char a2)
{
{
    *(void**)this = vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x00538060  CreateTeamCommand::performAction_204  cls=View4CommandClass  sig=csp  renamed_refs=0 ====
std::locale::facet * CreateTeamCommand::performAction_204(char a2)
{
{
    *(void**)this = vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x00538080  CreateTeamCommand::performAction_205  cls=SetView1CommandClass  sig=csp  renamed_refs=0 ====
std::locale::facet * CreateTeamCommand::performAction_205(char a2)
{
{
    *(void**)this = vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x005380A0  CreateTeamCommand::performAction_206  cls=SetView2CommandClass  sig=csp  renamed_refs=0 ====
std::locale::facet * CreateTeamCommand::performAction_206(char a2)
{
{
    *(void**)this = vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x005380C0  CreateTeamCommand::performAction_207  cls=SetView3CommandClass  sig=csp  renamed_refs=0 ====
std::locale::facet * CreateTeamCommand::performAction_207(char a2)
{
{
    *(void**)this = vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x005380E0  CreateTeamCommand::performAction_208  cls=SetView4CommandClass  sig=csp  renamed_refs=0 ====
std::locale::facet * CreateTeamCommand::performAction_208(char a2)
{
{
    *(void**)this = vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x00538100  CreateTeamCommand::performAction_209  cls=OptionsCommandClass  sig=csp  renamed_refs=0 ====
std::locale::facet * CreateTeamCommand::performAction_209(char a2)
{
{
    *(void**)this = vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x00538120  CreateTeamCommand::performAction_210  cls=SidebarUpCommandClass  sig=csp  renamed_refs=0 ====
std::locale::facet * CreateTeamCommand::performAction_210(char a2)
{
{
    *(void**)this = vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x00538140  CreateTeamCommand::performAction_211  cls=SidebarDownCommandClass  sig=csp  renamed_refs=0 ====
std::locale::facet * CreateTeamCommand::performAction_211(char a2)
{
{
    *(void**)this = vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x00538160  CreateTeamCommand::performAction_212  cls=CenterREventCommandClass  sig=csp  renamed_refs=0 ====
std::locale::facet * CreateTeamCommand::performAction_212(char a2)
{
{
    *(void**)this = vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x00538180  CreateTeamCommand::performAction_213  cls=BeaconPlacementCommandClass  sig=csp  renamed_refs=0 ====
std::locale::facet * CreateTeamCommand::performAction_213(char a2)
{
{
    *(void**)this = vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x005381A0  CreateTeamCommand::performAction_214  cls=ToggleSellCommandClass  sig=csp  renamed_refs=0 ====
ToggleSellCommandClass * CreateTeamCommand::performAction_214(char a2)
{
{
    *(int *)this = &vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (ToggleSellCommandClass *)this;
}
}

// ==== BACKFILL 0x005381C0  CreateTeamCommand::performAction_215  cls=ToggleRepairCommandClass  sig=csp  renamed_refs=0 ====
ToggleRepairCommandClass * CreateTeamCommand::performAction_215(char a2)
{
{
    *(void**)this = &vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (ToggleRepairCommandClass *)this;
}
}

// ==== BACKFILL 0x005381E0  CreateTeamCommand::performAction_216  cls=AllianceCommandClass  sig=csp  renamed_refs=0 ====
unsigned int * CreateTeamCommand::performAction_216(char a2)
{
{
    *(void**)this = &vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x00538200  CreateTeamCommand::performAction_217  cls=CenterBaseCommandClass  sig=csp  renamed_refs=0 ====
unsigned int * CreateTeamCommand::performAction_217(char a2)
{
{
    *(void**)this = &vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x00538220  CreateTeamCommand::performAction_218  cls=CenterViewCommandClass  sig=csp  renamed_refs=0 ====
unsigned int * CreateTeamCommand::performAction_218(char a2)
{
{
    *(void**)this = &vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x00538240  CreateTeamCommand::performAction_219  cls=ScatterCommandClass  sig=csp  renamed_refs=0 ====
ScatterCommandClass * CreateTeamCommand::performAction_219(char a2)
{
{
    *(void**)this = &vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (ScatterCommandClass *)this;
}
}

// ==== BACKFILL 0x00538260  CreateTeamCommand::performAction_220  cls=GuardCommandClass  sig=csp  renamed_refs=0 ====
GuardCommandClass * CreateTeamCommand::performAction_220(char a2)
{
{
    *(void**)this = &vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (GuardCommandClass *)this;
}
}

// ==== BACKFILL 0x00538280  CreateTeamCommand::performAction_221  cls=StopCommandClass  sig=csp  renamed_refs=0 ====
StopCommandClass * CreateTeamCommand::performAction_221(char a2)
{
{
    *(void**)this = &vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (StopCommandClass *)this;
}
}

// ==== BACKFILL 0x005382A0  CreateTeamCommand::performAction_222  cls=AllToCheerCommandClass  sig=csp  renamed_refs=0 ====
unsigned int * CreateTeamCommand::performAction_222(char a2)
{
{
    *(void**)this = &vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x005382C0  CreateTeamCommand::performAction_223  cls=DeployCommandClass  sig=csp  renamed_refs=0 ====
DeployCommandClass * CreateTeamCommand::performAction_223(char a2)
{
{
    *(void**)this = &vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DeployCommandClass *)this;
}
}

// ==== BACKFILL 0x005382E0  CreateTeamCommand::performAction_224  cls=PrevObjectCommandClass  sig=csp  renamed_refs=0 ====
unsigned int * CreateTeamCommand::performAction_224(char a2)
{
{
    *(void**)this = &vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x00538300  CreateTeamCommand::performAction_225  cls=NextObjectCommandClass  sig=csp  renamed_refs=0 ====
unsigned int * CreateTeamCommand::performAction_225(char a2)
{
{
    *(void**)this = &vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x00538320  CreateTeamCommand::performAction_226  cls=PlanningModeCommandClass  sig=csp  renamed_refs=0 ====
unsigned int * CreateTeamCommand::performAction_226(char a2)
{
{
    *(void**)this = &vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x00538340  CreateTeamCommand::performAction_227  cls=CombatantSelectCommandClass  sig=csp  renamed_refs=0 ====
unsigned int * CreateTeamCommand::performAction_227(char a2)
{
{
    *(void**)this = &vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x00538360  CreateTeamCommand::performAction_228  cls=TypeSelectCommandClass  sig=csp  renamed_refs=0 ====
unsigned int * CreateTeamCommand::performAction_228(char a2)
{
{
    *(void**)this = &vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x00538380  CreateTeamCommand::performAction_229  cls=HealthNavCommandClass  sig=csp  renamed_refs=0 ====
unsigned int * CreateTeamCommand::performAction_229(char a2)
{
{
    *(void**)this = &vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x005383A0  CreateTeamCommand::performAction_230  cls=VeterancyNavCommandClass  sig=csp  renamed_refs=0 ====
unsigned int * CreateTeamCommand::performAction_230(char a2)
{
{
    *(void**)this = &vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x005383C0  CreateTeamCommand::performAction_231  cls=SetStructureTabCommandClass  sig=csp  renamed_refs=0 ====
unsigned int * CreateTeamCommand::performAction_231(char a2)
{
{
    *(void**)this = &vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x005383E0  CreateTeamCommand::performAction_232  cls=SetDefenseTabCommandClass  sig=csp  renamed_refs=0 ====
unsigned int * CreateTeamCommand::performAction_232(char a2)
{
{
    *(void**)this = &vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x00538400  CreateTeamCommand::performAction_233  cls=SetUnitTabCommandClass  sig=csp  renamed_refs=0 ====
unsigned int * CreateTeamCommand::performAction_233(char a2)
{
{
    *(void**)this = &vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x00538420  CreateTeamCommand::performAction_234  cls=SetInfantryTabCommandClass  sig=csp  renamed_refs=0 ====
unsigned int * CreateTeamCommand::performAction_234(char a2)
{
{
    *(void**)this = &vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x00538440  CreateTeamCommand::performAction_235  cls=ScreenCaptureCommandClass  sig=csp  renamed_refs=0 ====
ScreenCaptureCommandClass * CreateTeamCommand::performAction_235(char a2)
{
{
    *(void**)this = &vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (ScreenCaptureCommandClass *)this;
}
}

// ==== BACKFILL 0x00538460  CreateTeamCommand::performAction_236  cls=PageUserCommandClass  sig=csp  renamed_refs=0 ====
PageUserCommandClass * CreateTeamCommand::performAction_236(char a2)
{
{
    *(void**)this = &vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (PageUserCommandClass *)this;
}
}

// ==== BACKFILL 0x00538480  CreateTeamCommand::performAction_237  cls=CursorPositionCommandClass  sig=csp  renamed_refs=0 ====
CursorPositionCommandClass * CreateTeamCommand::performAction_237(char a2)
{
{
    *(void**)this = &vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (CursorPositionCommandClass *)this;
}
}

// ==== BACKFILL 0x005384A0  CreateTeamCommand::performAction_238  cls=DeleteCommandClass  sig=csp  renamed_refs=0 ====
DeleteCommandClass * CreateTeamCommand::performAction_238(char a2)
{
{
    *(void**)this = &vt_CommandClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DeleteCommandClass *)this;
}
}

// ==== BACKFILL 0x005384C0  CreateTeamCommand::performAction_239  cls=DynamicVector  sig=csp  renamed_refs=1 ====
void CreateTeamCommand::performAction_239()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->CreateTeamCommand_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->CreateTeamCommand_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->DynamicVector_field_0x8 = 0;
}
}

// ==== BACKFILL 0x005384F0  CreateTeamCommand::performAction_240  cls=DynamicVector  sig=csp  renamed_refs=0 ====
unsigned int CreateTeamCommand::performAction_240(int a2)
{
{
    if ( (unsigned char)this->CreateTeamCommand_field_0xC )
    return (unsigned int)(a2 - this->CreateTeamCommand_field_0x4) >> 2;
    else
    return 0;
}
}

// ==== BACKFILL 0x00538780  DynamicVector::Add_Alt2  cls=DynamicVector  sig=csp  renamed_refs=2 ====
char DynamicVector::Add_Alt2(DynamicVector * aP1)
{
{
    int v3;
    int v4;
    int v6;
    int v7;
    v3 = this->DynamicVector_field_0x8;
    if ( this->DynamicVector_field_0x10 >= v3 )
  {
    if ( !this->IsAllocated && v3 )
    return 0;
    v4 = this->__pad_014;
    if ( v4 <= 0 || !this->SetCapacity(v3 + v4, 0) )
    return 0;
  }
    v6 = this->DynamicVector_field_0x10;
    v7 = this->q004;
    this->DynamicVector_field_0x10 = v6 + 1;
    *(int *)(v7 + 4 * v6) = *(int *)aP1->__pad_0;
    return 1;
}
}

// ==== BACKFILL 0x00538AE0  CreateTeamCommand::performAction_244  cls=DynamicVector  sig=csp  renamed_refs=0 ====
DynamicVector * CreateTeamCommand::performAction_244(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_CCINIClass;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}

// ==== BACKFILL 0x00538C40  sub_538C40  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_538C40::sub_538C40()
{
{
    int v2[22];
    char v3[12];
    int v4;
    CCFileClass::Construct(v2, this);
    if ( CCFileClass::Open(v2, 0) )
  {
    FileClass::Load(v2, 1);
    CCFileClass::Read(v2, DataGlobal_A8F91C, 0x10000);
    CCFileClass::Reset(v2);
    DataGlobal_A9F91C = 0;
  }
    v2[0] = (unsigned int)vt_CCFileClass;
    v4 = 0;
    Vector::Clear((int)v3);
    v2[0] = (int)&DataGlobal_7E1668;
    return BufferIOFileClass::Dtor(v2);
}
}

// ==== BACKFILL 0x00538CC0  sub_538CC0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_538CC0::sub_538CC0()
{
{
    int v2[22];
    char v3[12];
    int v4;
    CCFileClass::Construct(v2, this);
    if ( !CCFileClass::Open(v2, 0) )
  {
    FileClass::Load(v2, 2);
    FileClass::Write(v2, DataGlobal_A8F91C, 0x10000u);
    CCFileClass::Reset(v2);
  }
    v2[0] = (unsigned int)vt_CCFileClass;
    v4 = 0;
    Vector::Clear((int)v3);
    v2[0] = (int)&DataGlobal_7E1668;
    return BufferIOFileClass::Dtor(v2);
}
}

// ==== BACKFILL 0x00538E70  sub_538E70  cls=ObjectClass  sig=csp  renamed_refs=0 ====
short E4Recv_538E70::sub_538E70(double a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int16 __thiscall sub_538E70(void *this, double a2)
{
  int v3; // edi
  unsigned int v4; // esi
  int v5; // eax
  unsigned __int8 v6; // cl
  int v7; // eax
  int v8; // ecx
  __int16 result; // ax
  _BYTE v10[4]; // [esp+Ch] [ebp-18h] BYREF
  _BYTE v11[4]; // [esp+10h] [ebp-14h] BYREF
  __int16 v12; // [esp+14h] [ebp-10h] BYREF
  unsigned __int8 v13; // [esp+16h] [ebp-Eh]
  int v14; // [esp+18h] [ebp-Ch]
  int v15; // [esp+1Eh] [ebp-6h]

  v3 = 0; /*0x538e78*/
  do
  {
    v4 = (unsigned int)this + 2 * (v3 % 256) + v3 % 256; /*0x538e92*/
    v5 = ComputeColorSaturation(v4, (int)v10, (int)v10); /*0x538e97*/
    v6 = *(_BYTE *)(v5 + 2); /*0x538ea1*/
    v12 = *(_WORD *)v5; /*0x538ea4*/
    LOBYTE(v15) = v6; /*0x538ea9*/
    v13 = v6; /*0x538eb7*/
    v14 = v6; /*0x538ebb*/
    v7 = Math::RoundToInt((double)v6 * a2); /*0x538ec7*/
    if ( v7 >= 255 ) /*0x538ed1*/
      v7 = 255; /*0x538ed3*/
    v13 = v7 <= 0 ? 0 : v7;
    v8 = Color::ConvertToRGB((unsigned __int8 *)&v12, (int)v11); /*0x538ef2*/
    ++v3; /*0x538ef4*/
    result = *(_WORD *)v8; /*0x538efb*/
    LOBYTE(v8) = *(_BYTE *)(v8 + 2); /*0x538efe*/
    *(_WORD *)v4 = result; /*0x538f01*/
    *(_BYTE *)(v4 + 2) = v8; /*0x538f04*/
  }
  while ( v3 < 256 );
  return result; /*0x538f0d*/
}
}

// ==== BACKFILL 0x0053A100  LightningStorm::IsActive  cls=unknown  sig=csp  renamed_refs=0 ====
char LightningStorm::IsActive()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char LightningStorm_IsActive()
{
  return unk_A9FAB4; /*0x53a105*/
}
}

// ==== BACKFILL 0x0053AD00  UpdateSurfaceAnimations  cls=unknown  sig=csp  renamed_refs=0 ====
int UpdateSurfaceAnimations(int a1, AnimClass * aP1, int a3, int a4)
{
{
    int i;
    int j;
    int v9;
    int v10;
    int v11;
    int v13;
    int v14[2];
    char v15;
    int k;
    for ( i = 0; i < *(int *)&DataGlobal_87C374.__pad_14B0[7812]; ++i )
    (*(void (__thiscall **)(int, int, AnimClass *, int, int))(**(int **)(*(int *)&DataGlobal_87C374.__pad_14B0[7800] + 4 * i) + 4))( *(int *)(*(int *)&DataGlobal_87C374.__pad_14B0[7800] + 4 * i), a1, aP1, a3, a4);
    for ( j = 0; j < *(int *)DataGlobal_B05488.__pad_58; ++j )
  {
    v9 = *(int *)(DataGlobal_B05488.field_4C + 4 * j);
    if ( *(int *)(v9 + 784) > 1 )
    (*(void (__thiscall **)(int, int, AnimClass *, int, int))(**(int **)(v9 + 780) + 4))( *(int *)(v9 + 780), a1, aP1, a3, a4);
  }
    v14[0] = 0;
    v14[1] = 0;
    v15 = 0;
    for ( k = FlagSystem::GetNextActive(v14); k; k = FlagSystem::GetNextActive(v14) )
  {
    v10 = 0;
    v13 = Surface_Update();
    if ( v13 > 0 )
    {
    do
      {
    v11 = *(int *)(*(int *)(*(int *)(k + 4) + 4 * v10) + 780);
    (*(void (__thiscall **)(int, int, AnimClass *, int, int))(*(int *)(v11) + 4))(v11, a1, aP1, a3, a4);
    ++v10;
      }
    while ( v10 < v13 );
    }
  }
    MapClass::UpdateLightingPostProcess();
    return MapClass::MarkForRedraw(&DataGlobal_87C374.__pad_14B0[8132], 1);
}
}

// ==== BACKFILL 0x0053B400  PsyDom::IsActive  cls=unknown  sig=csp  renamed_refs=0 ====
bool PsyDom::IsActive()
{
{
    return PsyDom_Status != 0;
}
}

// ==== BACKFILL 0x0053D310  ProcessIonCannonEffect  cls=ObjectClass  sig=csp  renamed_refs=0 ====
void sub_53D310()
{
{
    int i;
    for ( i = DataGlobal_AA0128 - 1; i >= 0; --i )
    ExplosionClass::ProcessFrame(*((int **)(DataGlobal_AA011C) + i));
}
}

// ==== BACKFILL 0x0053D550  WinMainSetup_Setup  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int sub_53D550()
{
{
    int *v0;
    int result;
    v0 = DataGlobal_A9FFC8;
    do
  {
    if ( *v0 )
    result = (**(int (__thiscall ***)(int, int))*v0)(*v0, 1);
    *v0++ = 0;
  }
    while ( (int)v0 < (int)&DataGlobal_AA0108 );
    return result;
}
}

// ==== BACKFILL 0x0053D8E0  ComputeSpiralOffset  cls=unknown  sig=csp  renamed_refs=0 ====
int * ComputeSpiralOffset(int * a1, int a2)
{
{
    int v2;
    int *result;
    int v4;
    int i;
    int v6;
    int v7;
    int v8;
    v2 = a2 - 1;
    result = a1;
    v4 = 1;
    if ( v2 >= 8 )
  {
    for ( i = 8; i <= v2; i += 8 )
    {
    v2 -= i;
    ++v4;
    }
  }
    if ( v2 >= 2 * v4 + 1 )
  {
    if ( v2 >= 4 * v4 + 1 )
    {
    if ( v2 >= 6 * v4 + 1 )
      {
    v8 = v2 - 7 * v4;
    v7 = -v4;
    *result = v8;
      }
    else
      {
    v6 = v4;
    v7 = 5 * v4 - v2;
    *result = -v6;
      }
    result[1] = v7;
    }
    else
    {
    *result = 3 * v4 - v2;
    result[1] = v4;
    }
  }
    else
  {
    *result = v4;
    result[1] = v2 - v4;
  }
    return result;
}
}

// ==== BACKFILL 0x0053D960  GenerateLightningStormGlow_Helper  cls=unknown  sig=csp  renamed_refs=0 ====
int sub_53D960(int a1, int a2)
{
{
    signed int v3;
    signed int v4;
    int v5;
    int i;
    if ( !a1 && !a2 )
    return 0;
    v3 = abs32(a2);
    v4 = abs32(a1);
    if ( v4 > v3 )
    v3 = v4;
    v5 = 1;
    for ( i = 1; i < v3; ++i )
    v5 += 8 * i;
    if ( a1 == v3 )
    return v3 + a2 + v5;
    if ( a2 == v3 )
    return 3 * v3 - a1 + v5;
    if ( a1 == -v3 )
    return 5 * v3 - a2 + v5;
    return a1 + 7 * v3 + v5;
}
}

// ==== BACKFILL 0x0053E070  sub_53E070  cls=unknown  sig=csp  renamed_refs=0 ====
DWORD sub_53E070(unsigned int * lpThreadParameter)
{
{
    int *v1;
    __int64 v2;
    int *v3;
    unsigned int v4;
    signed int v5;
    unsigned int v6;
    unsigned int Channel;
    v1 = lpThreadParameter;
    lpThreadParameter[6] = 1;
    v1[2] = 0;
    if ( *v1 )
  {
    v1[2] = 1;
    return 0;
  }
    else
  {
    do
    {
    LODWORD(v2) = Audio::Callback();
    AudioThread::UpdateStats((int)(v1 + 8), v2);
    v3 = (int *)DataGlobal_AA045C;
    if ( DataGlobal_AA045C && g_StreamBufferState && Stream )
      {
    EnterCriticalSection(&DataGlobal_AA0418);
    if ( g_StreamBufferState == 2 && (v4 = (unsigned int)AudioStream::GetChannel(v3) >> 1, sub_408D30(v3) < v4) )
        {
    if ( DataGlobal_AA0460 )
          {
    v5 = sub_408D40(v3);
    if ( WriteAudioStreamToFile(DataGlobal_AA0460, Stream, v5, (char *)&lpThreadParameter) != 1 )
    DataGlobal_AA046C = 1;
          }
        }
    else if ( g_StreamBufferState == 1 )
        {
    v6 = (unsigned int)AudioStream::GetChannel(v3) >> 1;
    if ( sub_408D40(v3) < v6 )
          {
    if ( g_StreamConfig )
            {
    Channel = AudioStream::GetChannel(v3);
    WriteAudioStreamToFile(g_StreamConfig, Stream, Channel >> 1, 0);
    fflush(Stream);
            }
          }
        }
    LeaveCriticalSection(&DataGlobal_AA0418);
      }
    Sleep(v1[4]);
    ++v1[1];
    }
    while ( !*v1 );
    v1[2] = 1;
    return 0;
  }
}
}

// ==== BACKFILL 0x0053E420  Object::RemoveObjectArray  cls=Object  sig=csp  renamed_refs=0 ====
void ** Object::RemoveObjectArray()
{
{
    void **result;
    int v2;
    result = (void **)g_StreamPool;
    if ( g_StreamPool )
  {
    if ( this )
    {
    result = (void **)DataGlobal_AA044C;
    v2 = 1;
    if ( DataGlobal_AA0374 > 1 )
      {
    while ( *result != this )
        {
    ++v2;
    ++result;
    if ( v2 >= DataGlobal_AA0374 )
    return result;
        }
    *result = 0;
    return (void **)--DataGlobal_AA0450;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x0053E6B0  WinMain_Write_53E6B0  cls=unknown  sig=csp  renamed_refs=0 ====
void sub_53E6B0()
{
{
    signed int SampleSize;
    if ( g_StreamPool )
  {
    EnterCriticalSection(&DataGlobal_AA0418);
    if ( Stream && DataGlobal_AA045C && g_StreamBufferState == 1 )
    {
    if ( g_StreamConfig )
      {
    SampleSize = Audio::GetSampleSize((int *)g_StreamConfig);
    WriteAudioStreamToFile(g_StreamConfig, Stream, SampleSize, 0);
    fflush(Stream);
      }
    }
    LeaveCriticalSection(&DataGlobal_AA0418);
  }
}
}

// ==== BACKFILL 0x0053EC70  EventClass::GetKeyStateSafe  cls=EventClass  sig=csp  renamed_refs=0 ====
SHORT EventClass::GetKeyStateSafe(unsigned char nVirtKey)
{
    if ( g_StreamBufferState )
        return *(DataGlobal_AA0168 + nVirtKey);
    else
        return GetKeyState(nVirtKey);
}

// ==== BACKFILL 0x0053EC90  Mouse::GetKeyState  cls=MouseClass  sig=csp  renamed_refs=0 ====
SHORT Mouse::GetKeyState()
{
{
    if ( g_StreamBufferState )
    return DataGlobal_AA0168[this];
    else
    return GetAsyncKeyState(this);
}
}

// ==== BACKFILL 0x0053ECE0  NetworkAddress::Assign  cls=NetworkAddress  sig=csp  renamed_refs=0 ====
unsigned int * NetworkAddress::Assign(unsigned int * a1, IUnknown * aP2, short a4)
{
{
    int *result;
    int *v5;
    result = this;
    v5 = this + 1;
    *v5 = aP2->field_0;
    *((short *)(v5) + 2) = aP2->field_4;
    if ( DataGlobal_828140 == 1 )
  {
    *result = *a1;
  }
    else
  {
    *result = 0;
    *(short *)result = a4;
  }
    return result;
}
}

// ==== BACKFILL 0x0053EDA0  Network::CopyAddress  cls=Network  sig=csp  renamed_refs=0 ====
char * Network::CopyAddress(unsigned int * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall Network_CopyAddress(_DWORD *this, _DWORD *a2, int a3)
{
  char *result; // eax

  result = (char *)(this + 1); /*0x53eda4*/
  *(_DWORD *)a3 = *(this + 1); /*0x53edaa*/
  LOWORD(result) = (unsigned short)this->Network_field_0x8; /*0x53edad*/
  *(_WORD *)(a3 + 4) = (_WORD)result; /*0x53edb1*/
  *a2 = *this; /*0x53edbb*/
  return result; /*0x53edac*/
}
}

// ==== BACKFILL 0x0053EDC0  Network::CopyAddress_Small  cls=Network  sig=csp  renamed_refs=0 ====
int Network::CopyAddress_Small(IPXManagerClass * aP1)
{
{
    char *v3;
    v3 = this + 4;
    aP1->Socket = *(int *)v3;
    *(short *)&aP1->Initialized = *((short *)(v3) + 2);
    return (int)aP1;
}
}

// ==== BACKFILL 0x0053EDE0  Struct::Copy6Bytes  cls=Struct  sig=csp  renamed_refs=0 ====
namespace gamemd { int Struct::Copy6Bytes(IPXManagerClass * aP1) {
{
    char *v2;
    short result;
    v2 = this + 4;
    *(int *)v2 = aP1->Socket;
    result = *(short *)&aP1->Initialized;
    *((short *)(v2) + 2) = result;
    return result;
}
} }

// ==== BACKFILL 0x0053F020  sub_53F020  cls=ObjectClass  sig=csp  renamed_refs=0 ====
bool E4Recv_53F020::sub_53F020(const char * a2)
{
{
    return memcmp(this, a2, 10) > 0;
}
}

// ==== BACKFILL 0x0053F050  sub_53F050  cls=ObjectClass  sig=csp  renamed_refs=0 ====
bool E4Recv_53F050::sub_53F050(const char * a2)
{
{
    return memcmp(this, a2, 10) < 0;
}
}

// ==== BACKFILL 0x0053F080  sub_53F080  cls=ObjectClass  sig=csp  renamed_refs=0 ====
bool E4Recv_53F080::sub_53F080(const char * a2)
{
{
    return memcmp(this, a2, 10) >= 0;
}
}

// ==== BACKFILL 0x0053F0B0  sub_53F0B0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
bool E4Recv_53F0B0::sub_53F0B0(const char * a2)
{
{
    return memcmp(this, a2, 10) <= 0;
}
}

// ==== BACKFILL 0x0053F0E0  Network::FormatAddress  cls=Network  sig=csp  renamed_refs=0 ====
char * Network::FormatAddress(IUnknown * aP1)
{
{
    IUnknown *v2;
    int v3;
    v2 = aP1;
    if ( !aP1 )
    v2 = (IUnknown *)this;
    v3 = v2->field_4;
    if ( DataGlobal_828140 == 1 )
    sprintf( &g_NetworkPlayerBuffer.__pad_579C[54948], DataGlobal_828158, (unsigned char)v2->field_0, BYTE1(v2->field_0), (unsigned char)BYTE2(v2->field_0), HIBYTE(v2->field_0), (unsigned char)v3, BYTE1(v3), BYTE2(v3), HIBYTE(v3), (unsigned char)LOWORD(v2->field_8), HIBYTE(LOWORD(v2->field_8)));
    else
    sprintf( &g_NetworkPlayerBuffer.__pad_579C[54948], DataGlobal_828144, (unsigned char)v3, BYTE1(v3), BYTE2(v3), HIBYTE(v3), *(void**)this);
    return &g_NetworkPlayerBuffer.__pad_579C[54948];
}
}

// ==== BACKFILL 0x0053F1F0  Multiplayer::Screen  cls=Multiplayer  sig=csp  renamed_refs=0 ====
void Multiplayer::Screen()
{
{
    DataGlobal_828140 = (int)this;
}
}

// ==== BACKFILL 0x0053F200  Network::SetPort  cls=Network  sig=csp  renamed_refs=0 ====
short Network::SetPort(IPXManagerClass * aP1)
{
{
    short result;
    if ( DataGlobal_828140 == 2 )
  {
    *(void**)this = (short)aP1;
    return (short)aP1;
  }
    return result;
}
}

// ==== BACKFILL 0x0053F4E0  Struct::ZeroInitAndSetup_0  cls=IPXConnClass  sig=csp  renamed_refs=0 ====
int Struct::ZeroInitAndSetup_0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
int __thiscall Struct::ZeroInitAndSetup_0(_DWORD *this)
{
  return Struct::ZeroInitAndSetup(this);
}
}

// ==== BACKFILL 0x0053F4F0  Network_Init_53F4F0  cls=unknown  sig=csp  renamed_refs=0 ====
int sub_53F4F0(short a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
{
    LOWORD(DataGlobal_AA0568) = a1;
    DataGlobal_AA0548 = a2;
    DataGlobal_AA055C = a3;
    DataGlobal_AA0578 = a4;
    DataGlobal_AA0530 = a5;
    DataGlobal_AA0508 = a6;
    DataGlobal_AA056C = a7;
    DataGlobal_AA05A4 = 1;
    return a6;
}
}

// ==== BACKFILL 0x0053FFA0  TerrainTypeClass::GetTileData  cls=IPXGlobalConnClass  sig=csp  renamed_refs=0 ====
int TerrainTypeClass::GetTileData(AnimClass * aP1, void * a2, signed int * a3, unsigned int * a4, unsigned short * a5, unsigned int * a6)
{
{
    IPXGlobalConnClass *v7;
    int TileType;
    int v9;
    int v10;
    int *v11;
    v7 = (IPXGlobalConnClass *)this->Foundation;
    if ( *(int *)v7[1].__pad_0 < (int)aP1 )
    return 0;
    TileType = Terrain::GetTileType(v7, aP1);
    if ( !TileType || (*(char *)TileType & 2) != 0 )
    return 0;
    v9 = *(int *)(TileType + 12);
    v10 = *(int *)(TileType + 8) - 16;
    if ( v10 > 0 )
    qmemcpy(a2, (const void *)(v9 + 16), v10);
    *a3 = v10;
    *a5 = *(short *)(v9 + 14);
    v11 = *(int **)(TileType + 20);
    *a4 = *v11;
    *((int*)(a4) + 1) = v11[1];
    *((int*)(a4) + 2) = v11[2];
    if ( a6 )
    *a6 = *(int *)(v9 + 4);
    return 1;
}
}
