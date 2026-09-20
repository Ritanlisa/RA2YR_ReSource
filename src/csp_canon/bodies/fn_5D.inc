// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x005D0580  j_DeleteAndZero  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int j_DeleteAndZero()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
void __thiscall j_DeleteAndZero(void **this)
{
  DeleteAndZero(this); /*0x5d0580*/
}
}

// ==== BACKFILL 0x005D0590  nullsub_24  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void nullsub_24()
{
  ;
}

// ==== BACKFILL 0x005D25D0  sub_5D25D0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_5D25D0::sub_5D25D0(char * Source, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_5D25D0(int this, char *Source, int a3)
{
  char **v4; // eax
  char **v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // edx

  if ( !Source || !a3 ) /*0x5d25e3*/
    return 0; /*0x5d25e3*/
  v4 = (char **)__2_YAPAXI_Z(0xCu); /*0x5d25e7*/
  v5 = v4 ? Audio::SetSoundFileName(v4, Source, a3) : 0;
  v6 = this->M56; /*0x5d2602*/
  if ( this->M64 >= v6 ) /*0x5d260d*/
  {
    if ( !(unsigned char)this->M61 && v6 ) /*0x5d2618*/
      return 0; /*0x5d2618*/
    v7 = this->M68; /*0x5d261a*/
    if ( v7 <= 0 /*0x5d262a*/
      || !(*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(this->M48 + 8))(this + 48, v6 + v7, 0) )
    {
      return 0; /*0x5d264a*/
    }
  }
  v8 = this->M64; /*0x5d2631*/
  v9 = this->M52; /*0x5d2634*/
  this->M64 = v8 + 1; /*0x5d263a*/
  *(_DWORD *)(v9 + 4 * v8) = v5; /*0x5d263d*/
  return 1; /*0x5d2640*/
}
}

// ==== BACKFILL 0x005D2650  sub_5D2650  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_5D2650::sub_5D2650(void * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_5D2650(_DWORD *this, void *a2, int a3)
{
  int v4; // esi
  int v5; // eax

  if ( a2 ) /*0x5d265c*/
  {
    if ( Audio::IsSoundEnabled() ) /*0x5d265e*/
    {
      v4 = 0; /*0x5d266a*/
      if ( (int)*(this + 16) > 0 ) /*0x5d266e*/
      {
        while ( _strcmpi(a2, **(const void ***)(*(this + 13) + 4 * v4)) ) /*0x5d2684*/
        {
          if ( ++v4 >= *(this + 16) ) /*0x5d268c*/
            return; /*0x5d268c*/
        }
        v5 = Math::RoundToInt((double)a3 * MEMORY[0xA8EB98]); /*0x5d269f*/
        nullsub_192(v5); /*0x5d26a7*/
      }
    }
  }
}
}

// ==== BACKFILL 0x005D26F0  MSEngine_Destru::Release  cls=MSEngine  sig=csp  renamed_refs=0  residual=- ====
void MSEngine_Destru::Release()
{
}

// ==== BACKFILL 0x005D30C0  sub_5D30C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_5D30C0::sub_5D30C0(wchar_t * String, unsigned int * a3)
{
{
    wchar_t *v3;
    int v4;
    size_t v6;
    int v7;
    int v8;
    int v10;
    v3 = String;
    v4 = 0;
    v10 = 0;
    if ( String && (v6 = wcslen(String)) != 0 )
  {
    v7 = this->M8;
    while ( 1 )
    {
    for ( LOWORD(v6) = *v3; *v3; LOWORD(v6) = *v3 )
      {
    if ( (short)v6 == 10 )
    break;
    ++v3;
    v6 = this->Vf4(v6);
    v4 += v6;
      }
    if ( v4 > v10 )
    v10 = v4;
    if ( *v3 == 10 )
      {
    v6 = this->M8;
    ++v3;
    v7 += v6;
      }
    if ( !*v3 )
    break;
    v4 = 0;
    }
    v8 = this->M4;
    *((int*)(a3) + 3) = v7;
    *((int*)(a3) + 2) = v10 + v8;
    *a3 = 0;
    *((int*)(a3) + 1) = 0;
    return a3;
  }
    else
  {
    *a3 = 0;
    *((int*)(a3) + 1) = 0;
    *((int*)(a3) + 2) = 0;
    *((int*)(a3) + 3) = 0;
    return a3;
  }
}
}

// ==== BACKFILL 0x005D3330  MSFont::ddtor  cls=MSFont  sig=csp  renamed_refs=2  residual=- ====
short MSFont::ddtor(int a2, unsigned short *a3, int a4, int a5, int a6)
{
    int v17[2];
    unsigned int v18[4];
    unsigned char v19[16];
    unsigned int v8;
    unsigned short *v6;
    int v16;
    int v9;
    int v10;
    int v11;
    int *v12;
    char v13;
    v13 = 0;
    unsigned int u8 = 0;
    v6 = a3;
    v16 = a4;
    u8 = *a3;
    if ( *a3 )
    {
        do
        {
            if ( (unsigned short)u8 == 10 )
            {
                u8 = this->MSFont_field_0x08 + a5;
                v16 = a4;
                a5 = u8;
            }
            else
            {
                if ( (unsigned __int16)u8 > 0x20u )
                {
                    char szSrc;
                    char szDst;
                    szSrc = *(char *)v6;
                    CharToOemBuffA(&szSrc, &szDst, 1u);
                    v9 = szDst - 33;
                    if ( szDst == 33 )
                    {
                        v9 = 0;
                    }
                    else if ( v9 >= 216 )
                    {
                        v9 = 216;
                    }
                    v10 = 3 * v9;
                    v11 = *Building::GetFoundationSize(v18, 3 * v9 + 2);
                    v17[1] = a5;
                    v17[0] = v16 - v11;
                    v12 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 120))(a2, v19);
                    DrawToSurfaceSHP(a2, this->texHeight, this->MSFont_field_0x14, a6 + v10, v17, v12, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
                    v6 = a3;
                }
                u8 = *v6;
                u8 = this->CharWidth(u8);
                v16 += u8;
            }
            u8 = v6[1];
            a3 = ++v6;
        }
        while ( (unsigned short)u8 );
    }
    return u8;
}

// ==== BACKFILL 0x005D3450  MSFont::QueryInterface  cls=MSFont  sig=csp  renamed_refs=0  residual=- ====
MSFont * MSFont::QueryInterface(char a2)
{
{
    MSFont::Constructor_MSFont(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (MSFont *)this;
}
}

// ==== BACKFILL 0x005D36A0  sub_5D36A0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_5D36A0(HWND hWnd, unsigned int a2, unsigned int a3, int * a4)
{
{
    int result;
    unsigned int v5;
    int *WindowLongA;
    result = BaseDialogProc(hWnd, a2, a3, (unsigned int)a4);
    if ( !result )
  {
    if ( a2 == 273 )
    {
    v5 = HIWORD(a3);
    WindowLongA = (int *)GetWindowLongA(hWnd, 8);
    if ( (unsigned short)a3 > 0x5AEu )
      {
    if ( (unsigned short)a3 == 1455 && !v5 )
    *WindowLongA = 2;
      }
    else if ( (unsigned short)a3 == 1454 )
      {
    if ( !v5 )
        {
    *WindowLongA = 0;
    return 0;
        }
      }
    else if ( (short)a3 && (unsigned short)a3 <= 2u && !v5 )
      {
    *WindowLongA = 1;
    return 0;
      }
    }
    else if ( a2 == 534 )
    {
    return (unsigned char)Window::ClampToScreen(a4);
    }
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x005D4AD0  TacticalClass::processInput  cls=TacticalClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int TacticalClass::processInput(int a1) {
{
      AnimClass *v2;
      int *i;
      int v5;
      int v6;

      v2 = (AnimClass *)&aP1[-1].__pad_2BC[4];
      this->q2C4 = (int *)&aP1[-1].__pad_2BC[4];
      Debug::Log();
      for ( i = *this; i; i = (int *)(*(int (__thiscall **)(int *))(v5 + 4))(i) )
      {
        v5 = *i;
        i[14] = (int)v2;
      }
      LOBYTE(v6) = this->q019;
      if ( (_BYTE)v6 )
      {
        v6 = (int)this->field24;
        *(_DWORD *)(v6 + 56) = v2;
      }
      return v6;
}
} }

// ==== BACKFILL 0x005D4F20  sub_5D4F20  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_5D4F20::sub_5D4F20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_5D4F20(const char *this)
{
  int v1; // edi

  v1 = 0; /*0x5d4f29*/
  if ( MEMORY[0xABFCA0] <= 0 ) /*0x5d4f2f*/
    return 0; /*0x5d4f87*/
  while ( 1 ) /*0x5d4f47*/
  {
    GetWindowTextA(*((HWND *)MEMORY[0xABFC94] + v1), MEMORY[0xABFCD0], 99); /*0x5d4f47*/
    if ( !strcmp(MEMORY[0xABFCD0], this) ) /*0x5d4f56*/
      break; /*0x5d4f56*/
    if ( ++v1 >= MEMORY[0xABFCA0] ) /*0x5d4f85*/
      return 0; /*0x5d4f85*/
  }
  return *((_DWORD *)MEMORY[0xABFC94] + v1); /*0x5d4f87*/
}
}

// ==== BACKFILL 0x005D5850  MSEngine::DestroyData  cls=MSEngine  sig=csp  renamed_refs=0  residual=- ====
void MSEngine::DestroyData()
{
{
    if ( *(void**)this )
    free(*(void**)this);
}
}

// ==== BACKFILL 0x005D5860  nullsub_192  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void nullsub_192(int a1)
{
  ;
}

// ==== BACKFILL 0x005D5DB0  ScenarioClass::MissionStubReturnZero  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
int ScenarioClass::MissionStubReturnZero()
{
return -2;
}

// ==== BACKFILL 0x005D5DC0  Dialog::GetModeNeg2  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
int Dialog::GetModeNeg2()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Dialog_GetModeNeg2(_BYTE *this)
{
  return *(this + 63) != 0 ? 0 : -2;
}
}

// ==== BACKFILL 0x005D5DD0  Dialog::GetMode3  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
int Dialog::GetMode3()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Dialog_GetMode3(_BYTE *this)
{
  return *(this + 60) != 0 ? 3 : -2;
}
}

// ==== BACKFILL 0x005D5DE0  GameMode::IsValid  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
bool GameMode::IsValid(unsigned int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall GameMode_IsValid(_BYTE *this, unsigned int a2)
{
  return (!*(this + 63) || a2 != -2) && a2 < 4; /*0x5d5df2*/
}
}

// ==== BACKFILL 0x005D62C0  PlayerClass::AssignPlayerIndex  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
char PlayerClass::AssignPlayerIndex()
{
{
    int i;
    for ( i = 0; i < Game_PlayerCount; ++i )
  {
    if ( SessionClass::GetPlayerSide(*(int *)(Game_PlayerInfoArray + 4 * i)) == -3 )
    *(int *)(*(int *)(Game_PlayerInfoArray + 4 * i) + 107) = -1;
    else
    *(int *)(*(int *)(Game_PlayerInfoArray + 4 * i) + 107) = i;
  }
    return 1;
}
}

// ==== BACKFILL 0x005D6310  ScenarioClass::MissionStubReturnZero2  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
char ScenarioClass::MissionStubReturnZero2(MPCooperative * aP0)
{
return 1;
}

// ==== BACKFILL 0x005D6320  ScenarioClass::saveGame  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
char ScenarioClass::saveGame()
{
return 1;
}

// ==== BACKFILL 0x005D6330  ScenarioClass::loadGame  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
char ScenarioClass::loadGame()
{
return 1;
}

// ==== BACKFILL 0x005D6340  ScenarioClass::createStartingForces  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
char ScenarioClass::createStartingForces()
{
return 1;
}

// ==== BACKFILL 0x005D6350  DialogClass::GetFlag  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
char DialogClass::GetFlag()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall DialogClass_GetFlag(_BYTE *this)
{
  return *(this + 52); /*0x5d6353*/
}
}

// ==== BACKFILL 0x005D6360  MPCooperative::Stub  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
char MPCooperative::Stub()
{
return 0;
}

// ==== BACKFILL 0x005D6430  ScenarioClass::dispatchEvents  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
int ScenarioClass_dispatchEvents()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// Microsoft VisualC 2-14/net runtime
int ScenarioClass::dispatchEvents()
{
  return Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 9); /*0x69b684*/
}
}

// ==== BACKFILL 0x005D6790  ScenarioClass::ClearFlag  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
char ScenarioClass::ClearFlag()
{
{
    int v0;
    v0 = *(int *)g_ScenarioClass_Instance;
    BYTE1(v0) = BYTE1(*(int *)g_ScenarioClass_Instance) & 0xFB;
    *(int *)g_ScenarioClass_Instance = v0;
    return 1;
}
}

// ==== BACKFILL 0x005D67A0  ScenarioClass::MissionStubReturnZero4  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
char ScenarioClass::MissionStubReturnZero4(int a1)
{
return 1;
}

// ==== BACKFILL 0x005D67B0  GameConfig::Constructor  cls=GameConfig  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* GameConfig::Constructor() {
{
    char **v1;
    int *v2;
    int *v3;
    int v6[22];
    char v7[12];
    int v8;
    v1 = this;
    if ( !this->q038 )
  {
    v2 = __2_YAPAXI_Z(0x58u);
    v3 = v2;
    if ( v2 )
    {
    v2[1] = 0;
    v2[2] = 0;
    v2[5] = 0;
    v2[6] = 0;
    v2[4] = &vt_GenericNode;
    GenericNode::Constructor(v2 + 7);
    v3[3] = &vt_GenericList;
    LinkedList::Prepend(v3 + 4, (int)(v3 + 7));
    v1 = this;
    v3[3] = &vt_List_INIClass_INISection;
    v3[10] = 0;
    v3[11] = 0;
    v3[12] = 0;
    *((char *)(v3) + 52) = 0;
    v3[14] = 0;
    v3[15] = 0;
    *((char *)(v3) + 64) = 0;
    *v3 = &CCINIClass_Vtable;
    }
    else
    {
    v3 = 0;
    }
    v1[14] = (char *)v3;
    CCFileClass::Construct2(v6, v1 + 11);
    if ( CCFileClass::Open(v6, 0) )
    CCINIClass::Load(v1[14], (int)v6, 0, 0);
    v6[0] = &vt_CCFileClass;
    v8 = 0;
    Vector::Clear((int)v7);
    v6[0] = &vt_CDFileClass;
    BufferIOFileClass::Dtor(v6);
  }
    return v1[14];
}
} }

// ==== BACKFILL 0x005D7550  sub_5D7550  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_5D7550(int a1)
{
{
    return *(int *)(*(int *)&HouseClass_Array->__pad_0[4 * a1] + 90204);
}
}

// ==== BACKFILL 0x005D7570  ScenarioClass::processAI  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
char ScenarioClass::processAI()
{
return 1;
}

// ==== BACKFILL 0x005D7580  sub_5D7580  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_5D7580::sub_5D7580()
{
{
    this->vfptr = &vt_MultiplayerGameMode_InitializerBase;
    return &this->vfptr;
}
}

// ==== BACKFILL 0x005D7CD0  sub_5D7CD0  cls=InitializerBase@MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_5D7CD0::sub_5D7CD0()
{
{
    this->vfptr = &vt_MultiplayerGameMode_InitializerBase;
}
}

// ==== BACKFILL 0x005D7F20  MultiplayerGameMode::QueryInterface  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
MultiplayerGameMode * MultiplayerGameMode::QueryInterface(char a2)
{
{
    int v3;
    void (__thiscall ***v4)(int, int);
    void (__thiscall ***v5)(int, int);
    void *v6;
    v3 = 0;
    for ( *(int *)this = &vt_MultiplayerGameMode; v3 < *(int *)(this + 24); ++v3 )
  {
    v4 = *(void (__thiscall ****)(int, int))(*(int *)(this + 12) + 4 * v3);
    if ( v4 )
    (**v4)(v4, 1);
  }
    (*(void (__thiscall **)(char *))(*(int *)(this + 8) + 12))(this + 8);
    v5 = (void (__thiscall ***)(int, int))*((int *)(this) + 14);
    if ( v5 )
    (**v5)(v5, 1);
    DeleteAndZero((void **)(this) + 12);
    DeleteAndZero((void **)(this) + 11);
    DeleteAndZero::Alt((void **)(this) + 9);
    DeleteAndZero::Alt((void **)(this) + 8);
    v6 = (void *)*(int *)(this + 12);
    *(int *)(this + 8) = &vt_VectorClass_MultiplayerTeam;
    if ( v6 && *(this + 21) )
  {
    __3_YAXPAX_Z(v6);
    *(int *)(this + 12) = 0;
  }
    *(this + 21) = 0;
    *(int *)(this + 16) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (MultiplayerGameMode *)this;
}
}

// ==== BACKFILL 0x005D7FF0  ??_Gfacet_locale_std__UAEPAXI_Z_127  cls=InitializerBase@MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_5D7FF0::___Gfacet_locale_std__UAEPAXI_Z_127(char a2)
{
{
    *(void**)this = &vt_MultiplayerGameMode_InitializerBase;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x005D8010  ??_Gfacet_locale_std__UAEPAXI_Z_128  cls=InitializerBase@MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_5D8010::___Gfacet_locale_std__UAEPAXI_Z_128(char a2)
{
{
    *(void**)this = &vt_MultiplayerGameMode_InitializerBase;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x005D80B0  ScenarioClass::sub_5D80B0  cls=DynamicVector  sig=csp  renamed_refs=2  residual=- ====
void ScenarioClass::sub_5D80B0()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->DynamicVector_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = 0;
  }
    this->IsAllocated = 0;
    this->DynamicVector_field_0x8 = 0;
}
}

// ==== BACKFILL 0x005D80E0  ScenarioClass::deallocateCells  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int ScenarioClass::deallocateCells(int a2) {
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
} }

// ==== BACKFILL 0x005D8110  ScenarioClass::resetScenarioData  cls=DynamicVector  sig=csp  renamed_refs=2  residual=- ====
namespace gamemd { void ScenarioClass::resetScenarioData() {
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->DynamicVector_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = 0;
  }
    this->IsAllocated = 0;
    this->DynamicVector_field_0x8 = 0;
}
} }

// ==== BACKFILL 0x005D8140  ScenarioClass::validateMap  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int ScenarioClass::validateMap(int a2) {
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
} }

// ==== BACKFILL 0x005D8170  MPBattleClass::MPBattleClass  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * MPBattleClass::MPBattleClass(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, const char ** a4, char a5, int a6)
{
{
    int *v6;
    v6 = __2_YAPAXI_Z(0x40u);
    if ( v6 )
    return MPBattleClass::initGame(v6, a1, a2, a3, a4, a5, a6);
    else
    return 0;
}
}

// ==== BACKFILL 0x005D81B0  Helper_5D81B0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_5D81B0(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, const char ** a4, char a5, int a6)
{
{
    int *v6;
    v6 = __2_YAPAXI_Z(0x40u);
    if ( v6 )
    return MPBattleClass::MPManBattleClass(v6, a1, a2, a3, a4, a5, a6);
    else
    return 0;
}
}

// ==== BACKFILL 0x005D81F0  AbstractClass::processRevealArea  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * AbstractClass::processRevealArea(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, const char ** a4, char a5, int a6)
{
{
    int *v6;
    v6 = __2_YAPAXI_Z(0x40u);
    if ( v6 )
    return MPBattleClass::MPSiegeClass(v6, a1, a2, a3, a4, a5, a6);
    else
    return 0;
}
}

// ==== BACKFILL 0x005D8230  AbstractClass::computeRevealRadius  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * AbstractClass::computeRevealRadius(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, const char ** a4, char a5, int a6)
{
{
    int *v6;
    v6 = __2_YAPAXI_Z(0x40u);
    if ( v6 )
    return MPBattleClass::MPUnholyAllianceClass(v6, a1, a2, a3, a4, a5, a6);
    else
    return 0;
}
}

// ==== BACKFILL 0x005D8270  AbstractClass::applyRevealToCell  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * AbstractClass::applyRevealToCell(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, const char ** a4, char a5, int a6)
{
{
    int *v6;
    v6 = __2_YAPAXI_Z(0x40u);
    if ( v6 )
    return MPBattleClass::MPFreeForAllClass(v6, a1, a2, a3, a4, a5, a6);
    else
    return 0;
}
}

// ==== BACKFILL 0x005D82B0  AbstractClass::checkRevealCell  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * AbstractClass::checkRevealCell(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, const char ** a4, int a5, int a6)
{
{
    int *v6;
    v6 = __2_YAPAXI_Z(0x344u);
    if ( v6 )
    return MPCooperative::ctor(v6, a1, a2, a3, a4, a5, a6);
    else
    return 0;
}
}

// ==== BACKFILL 0x005D8520  ScenarioClass::setupPlayers  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int ScenarioClass::setupPlayers(int * a2) {
{
      int v2;
      int result;
      _DWORD *i;

      v2 = this->q010;
      result = 0;
      if ( v2 <= 0 )
        return -1;
      for ( i = (_DWORD *)this->Items; *i != *a2; ++i )
      {
        if ( ++result >= v2 )
          return -1;
      }
      return result;
}
} }

// ==== BACKFILL 0x005D8640  VectorClass::ddtor  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
void VectorClass::ddtor()
{
if ( this->Items && this->IsAllocated )
{
    operator delete(this->Items);
    this->Items = 0;
}
this->IsAllocated = 0;
this->Capacity = 0;
}

// ==== BACKFILL 0x005D8670  ScenarioClass::initLocalVariables  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int ScenarioClass::initLocalVariables(int * a2) {
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(int **)(this + 4); *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
} }

// ==== BACKFILL 0x005D86B0  ScenarioClass::setGameSpeed  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int ScenarioClass::setGameSpeed(int a2) {
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
} }

// ==== BACKFILL 0x005D87E0  ScenarioClass::distributeStartingUnits  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int ScenarioClass::distributeStartingUnits(int * a2) {
{
      int v2;
      int result;
      _DWORD *i;

      v2 = this->q010;
      result = 0;
      if ( v2 <= 0 )
        return -1;
      for ( i = (_DWORD *)this->Items; *i != *a2; ++i )
      {
        if ( ++result >= v2 )
          return -1;
      }
      return result;
}
} }

// ==== BACKFILL 0x005D8C90  PlayerClass::IsValidIndex  cls=MultiplayerTeam  sig=csp  renamed_refs=0  residual=- ====
bool PlayerClass::IsValidIndex(int a1)
{
{
    return a1 >= 0 && a1 < Game_PlayerCount;
}
}

// ==== BACKFILL 0x005D8FB0  sub_5D8FB0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_5D8FB0::sub_5D8FB0()
{
{
    *(void**)this = 0;
    this->M4 = 0;
    this->M8 = 0;
    this->M12 = 0;
    return this;
}
}

// ==== BACKFILL 0x005D8FC0  ?_Release__NonReentrantLock_details_Concurrency__QAEXXZ  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_5D8FC0::__Release__NonReentrantLock_details_Concurrency__QAEXXZ()
{
{
    *(int *)this = 0;
}
}

// ==== BACKFILL 0x005D8FD0  CCFileClass::WriteINIString  cls=CCFileClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void CCFileClass::WriteINIString() {
{
    char v2;
    int v3[9];
    v2 = 0;
    if ( !*(void**)this )
  {
    *(void**)this = Network::ResolveAndConnect(this, &v2);
    if ( v2 )
    {
    RawFileClass::Construct(v3, (int)g_Str_File_RA2MD_INI);
    INIClass::SetInt((char *)&CCINIClass_INI_RA2MD, (unsigned char *)g_INI_Key_MultiPlayer, g_INI_Key_FirewallSettings, *(void**)this, 0);
    INIClass::SetInt((char *)&CCINIClass_INI_RA2MD, (unsigned char *)g_INI_Key_MultiPlayer, g_INI_Key_FirewallDelta, this->FileSize, 0);
    INIClass::WriteDigest(&CCINIClass_INI_RA2MD, (int)v3, 0);
    RawFileClass::Dtor(v3);
    }
  }
}
} }

// ==== BACKFILL 0x005D90E0  Network::QueryAddress  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char Network::QueryAddress(IPXManagerClass * aP0, int a2, int a3, char a4)
{
{
    int QueueCount;
    int v5;
    int v6;
    int v7;
    DWORD Ticks;
    int v10;
    char v11[3];
    short v12;
    bool v13;
    v10 = 43;
    strcpy(v11, &DataGlobal_830620.__pad_690[64]);
    (*(void (__thiscall **)(int, int))(**(int **)&DataGlobal_87C374.__pad_579C[23320] + 116))( *(int *)&DataGlobal_87C374.__pad_579C[23320], a2);
    v12 = a2;
    v13 = a4 == 1;
    QueueCount = Network::GetQueueCount((int)&HouseClass_Player.__pad_5568[22284]);
    Network::FormatAddress((unsigned short *)aP0, 0);
    Debug::Log();
    LOWORD(v5) = aP0->Socket;
    Network::SendMessage((int)&HouseClass_Player.__pad_5568[22284], (int)&v10, 56, 0, (int)aP0, v5, a3);
    Ticks = Timer::GetTicks();
    while ( Network::GetQueueCount((int)&HouseClass_Player.__pad_5568[22284]) > QueueCount || *(int *)(*(int *)&DataGlobal_87C374.__pad_579C[23320] + 48) )
  {
    v6 = 180;
    if ( Ticks != -1 )
    {
    v7 = Timer::GetTicks() - Ticks;
    if ( v7 >= 180 )
    break;
    v6 = 180 - v7;
    }
    if ( !v6 )
    break;
    Network::ReceiveLoop(&HouseClass_Player.__pad_5568[22284]);
    Event::Dispatch();
  }
    (*(void (__thiscall **)(int, int))(**(int **)&DataGlobal_87C374.__pad_579C[23320] + 116))( *(int *)&DataGlobal_87C374.__pad_579C[23320], 0);
    return 1;
}
}

// ==== BACKFILL 0x005D9220  Network::WaitForPacket  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
short Network::WaitForPacket(int a1, int a2)
{
{
    int v2;
    int v3;
    int v4;
    short v5;
    short v7;
    DWORD Ticks;
    int v9;
    int v10;
    int v11;
    char v12[8];
    int v13;
    char v14[12];
    int v15[11];
    int v16;
    int v17;
    v2 = 0;
    Waypoint::InitInvalid(v14);
    v3 = 60;
    Ticks = Timer::GetTicks();
    v10 = 60;
    if ( a2 )
  {
    Ticks = Timer::GetTicks();
    v3 = a2;
    v9 = v13;
    v10 = a2;
  }
    while ( 1 )
  {
    if ( Ticks != -1 )
    {
    v4 = Timer::GetTicks() - Ticks;
    if ( v4 >= v3 )
    return 0;
    v3 -= v4;
    }
    if ( !v3 )
    break;
    Network::ReceiveLoop(g_NetworkManager);
    Event::Dispatch();
    if ( v2 >= Connection::GetSpeed(g_NetworkManager) )
    v2 = 0;
    if ( Network::SendPacketThunk(v2, v15, v12, v14, &v7, &v11) && v7 == -22012 && v15[0] == 44 && a1 == v11 )
    {
    v5 = v16;
    Debug::Log(DataGlobal_830CF4, (unsigned short)v17, (unsigned short)v16);
    Network::receiveData(v2);
    return v5;
    }
    v3 = v10;
    ++v2;
  }
    return 0;
}
}

// ==== BACKFILL 0x005DA040  Network_Connect  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_5DA040(char a1)
{
{
    int result;
    result = (a1 & 1) != 0;
    if ( (a1 & 2) != 0 )
    result += 2;
    if ( (a1 & 4) != 0 )
    result += 3;
    if ( (a1 & 8) != 0 )
    result += 10;
    if ( (a1 & 0x10) != 0 )
    ++result;
    if ( (a1 & 0x20) != 0 )
    result += 2;
    return result;
}
}

// ==== BACKFILL 0x005DA080  NetworkLobby::GetPlayerCount  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int NetworkLobby::GetPlayerCount(char a1)
{
{
    int result;
    result = 2;
    if ( (a1 & 1) != 0 )
    result = 3;
    if ( (a1 & 2) != 0 )
    ++result;
    if ( (a1 & 4) != 0 )
    ++result;
    if ( (a1 & 0x20) != 0 )
    result += 5;
    return result;
}
}

// ==== BACKFILL 0x005DAB80  sub_5DAB80  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_5DAB80::sub_5DAB80()
{
{
    unsigned int i;
    int v3;
    char String[80];
    v3 = 0;
    strcpy(String, this);
    _strupr(String);
    for ( i = 0; i < strlen(String); ++i )
    ComputeHash(&v3, String[i]);
    return v3;
}
}

// ==== BACKFILL 0x005DAF30  PlayerSkirmishSlotHandler_Handle  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_5DAF30()
{
{
    int v0;
    int i;
    int v2[113];
    short v3;
    char v4;
    memset(v2, 0, sizeof(v2));
    v3 = 0;
    v4 = 0;
    v2[0] = 22;
    strcpy((char *)&v2[1], g_GameSetupBuffer);
    Player::BuildListString((wchar_t *)((char *)&v2[11] + 3));
    v0 = Game_PlayerCount;
    for ( i = 1; i < v0; ++i )
  {
    Network::SendMessage((int)g_NetworkManager, (int)v2, 455, 1, *(int *)(Game_PlayerInfoArray + 4 * i) + 40, 0, 0);
    Event::Dispatch();
  }
}
}

// ==== BACKFILL 0x005DB650  Map_Handle  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_5DB650(int a1, char a2, char a3)
{
{
    HWND v5;
    v5 = (HWND)Dialog::FindByHandle((void *)0xBC);
    return Map_Handle_5EC880(v5, a1, a2, a3);
}
}

// ==== BACKFILL 0x005DB6F0  WinMainSetup_Setup_5DB6F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_5DB6F0()
{
{
    int result;
    result = WinMainSetup_Setup_5DB6F0_Setup();
    g_CurrentPlayerName[0] = 0;
    if ( g_NetworkInterface )
    result = (**(int (__thiscall ***)(int, int))g_NetworkInterface)(g_NetworkInterface, 1);
    g_NetworkInterface = 0;
    return result;
}
}

// ==== BACKFILL 0x005DC170  NetworkLobby::ValidateSerialNumber  cls=NetworkLobby  sig=csp  renamed_refs=0  residual=- ====
char NetworkLobby::ValidateSerialNumber()
{
{
    int v2;
    FILE *v3;
    FILE *v4;
    int i;
    HKEY phkResult;
    DWORD cbData;
    DWORD Type;
    BYTE Data[128];
    CHAR SubKey[256];
    strcpy((char *)Data, "0000000000000000000000");
    strcpy(this, (const char *)Data);
    memset(Data, 0, sizeof(Data));
    if ( g_Str_SOFTWARE_Westwood_Yuri_s_Reven )
  {
    if ( strlen(g_Str_SOFTWARE_Westwood_Yuri_s_Reven) )
    {
    strcpy(SubKey, g_Str_SOFTWARE_Westwood_Yuri_s_Reven);
    if ( !RegOpenKeyExA(HKEY_LOCAL_MACHINE, SubKey, 0, 0x20019u, &phkResult) )
      {
    cbData = 128;
    RegQueryValueExA(phkResult, DataGlobal_8313A8, 0, &Type, Data, &cbData);
    RegCloseKey(phkResult);
      }
    }
  }
    Data[22] = 0;
    strcpy(this, (const char *)Data);
    v2 = 0;
    v3 = fopen(DataGlobal_831398, DataGlobal_8313A4);
    v4 = v3;
    if ( !v3 )
    return 0;
    for ( i = fgetc(v3); i != -1; i = fgetc(v4) )
  {
    Data[v2] = (((char)Data[v2] - 48) % 10 - i + 1000) % 10 + 48;
    if ( ++v2 == strlen((const char *)Data) )
    v2 = 0;
  }
    fclose(v4);
    strcpy(this, (const char *)Data);
    return 1;
}
}

// ==== BACKFILL 0x005DE360  SendNetworkLobbyChatMessage  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char SendNetworkLobbyChatMessage(HWND hWnd, LPARAM a2, int a3)
{
{
    HWND DlgItem;
    signed int v5;
    HWND v6;
    char result;
    char *v8;
    int v9;
    int i;
    int v11;
    int j;
    wchar_t lParam[111];
    short v15;
    int v16[113];
    short v17;
    char v18;
    DlgItem = GetDlgItem(hWnd, 1344);
    SendMessageA(DlgItem, 0x4B3u, 0x6Fu, (LPARAM)lParam);
    v15 = 0;
    v5 = wcslen(lParam);
    v6 = GetDlgItem(hWnd, 1344);
    SendMessageA(v6, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString);
    result = InvalidateRect(hWnd, 0, 1);
    if ( v5 > 2 )
  {
    v8 = CharToWideString(g_GameSetupBuffer);
    Dialog::ShowMessage(a2, (size_t)g_Str_Trace___s_, v8, lParam);
    memset(v16, 0, sizeof(v16));
    v17 = 0;
    v18 = 0;
    v16[0] = 12;
    strcpy((char *)&v16[1], g_GameSetupBuffer);
    wcscpy((wchar_t *)&v16[12], lParam);
    v16[68] = a3;
    v16[69] = WideString::Hash(g_CurrentPlayerName);
    result = g_NetworkSettingsState;
    if ( g_NetworkSettingsState == 2 )
    {
    v9 = Game_PlayerCount;
    for ( i = 1; i < v9; ++i )
      {
    Network::SendMessage((int)g_NetworkManager, (int)v16, 455, 1, *(int *)(Game_PlayerInfoArray + 4 * i) + 40, 0, 0);
    result = Event::Dispatch();
      }
    }
    else
    {
    v11 = g_GameSetupConfig;
    for ( j = 1; j < v11; ++j )
      {
    Network::SendMessage((int)g_NetworkManager, (int)v16, 455, 1, *(int *)(g_GameSetupFlags + 4 * j) + 40, 0, 0);
    result = Event::Dispatch();
      }
    }
  }
    return result;
}
}
