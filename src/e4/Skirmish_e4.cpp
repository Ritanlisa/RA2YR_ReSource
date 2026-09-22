// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x46F600
int Skirmish::FillPlayerNames()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Skirmish_FillPlayerNames(HWND this)
{
  int result; // eax
  int v2; // ebx
  HWND v3; // esi
  LPARAM v4; // edi
  LRESULT v5; // ebx
  int i; // [esp+14h] [ebp-8h]
  HWND DlgItem; // [esp+18h] [ebp-4h]

  result = 0; /*0x46f60b*/
  for ( i = 0; i < 8; ++i ) /*0x46f613*/
  {
    if ( result ) /*0x46f619*/
    {
      if ( result != 1 ) /*0x46f625*/
        goto LABEL_9; /*0x46f625*/
      v2 = 1042; /*0x46f62b*/
    }
    else
    {
      v2 = 1041; /*0x46f61b*/
    }
    DlgItem = GetDlgItem(this, v2); /*0x46f643*/
    if ( ShowWindow(DlgItem, 0) ) /*0x46f647*/
    {
      v3 = GetDlgItem(this, v2); /*0x46f65e*/
      v4 = *(&MEMORY[0xA8DA90] + i); /*0x46f664*/
      if ( v4 ) /*0x46f66d*/
      {
        SendDlgItemMessageA(this, v2, 0x14Bu, 0, 0); /*0x46f67e*/
        v5 = SendMessageA(v3, 0x4C2u, 0, v4); /*0x46f68f*/
        SendMessageA(v3, 0x151u, v5, v4); /*0x46f699*/
        SendMessageA(v3, 0x14Eu, v5, 0); /*0x46f6a4*/
        ShowWindow(DlgItem, 5); /*0x46f6ad*/
      }
    }
LABEL_9:
    result = i + 1; /*0x46f6b3*/
  }
  return result; /*0x46f6c5*/
}
}

// 0x46F8F0
void Skirmish::SetupAllSpawnLocations()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall Skirmish::SetupAllSpawnLocations(HWND this)
{
  int v1; // ebp
  int ResourceIDCSF; // eax
  SessionClass *v4; // esi
  int v5; // edi
  int PlayerColor; // eax
  char *v7; // ebx
  int *v8; // edi
  int v9; // eax
  SessionClass *v10; // esi
  int v11; // ebp
  int v12; // eax
  int v14; // [esp+14h] [ebp-4h]

  v1 = MEMORY[0xA8DA8C]; /*0x46f8f5*/
  v14 = MEMORY[0xA8DA8C]; /*0x46f906*/
  if ( MEMORY[0xA8DA8C] != -1 ) /*0x46f90a*/
  {
    ResourceIDCSF = GetResourceIDCSF((void *)MEMORY[0xA8DA8C]); /*0x46f90e*/
    v4 = (SessionClass *)*(&MEMORY[0xA8DA90] + v1); /*0x46f913*/
    v5 = ResourceIDCSF; /*0x46f91a*/
    if ( Player::IsObserver(v4) ) /*0x46f91e*/
    {
      PlayerColor = MEMORY[0xA8B2BC][v1]; /*0x46f927*/
    }
    else if ( v4 == (SessionClass *)MEMORY[0xAC119C] ) /*0x46f936*/
    {
      PlayerColor = -2; /*0x46f938*/
    }
    else if ( v4 == (SessionClass *)MEMORY[0xAC11A0] ) /*0x46f945*/
    {
      PlayerColor = -2; /*0x46f947*/
    }
    else if ( v4 == (SessionClass *)MEMORY[0xAC11B0] ) /*0x46f954*/
    {
      PlayerColor = -2; /*0x46f956*/
    }
    else if ( v4 == (SessionClass *)MEMORY[0xAC11B4] ) /*0x46f963*/
    {
      PlayerColor = -2; /*0x46f965*/
    }
    else
    {
      PlayerColor = SessionClass::GetPlayerColor((int)v4); /*0x46f96e*/
    }
    SetupSkirmishSpawnLocations(this, v5, PlayerColor); /*0x46f978*/
  }
  v7 = 0; /*0x46f97d*/
  v8 = MEMORY[0xA8B2BC]; /*0x46f97f*/
  do /*0x46fa03*/
  {
    if ( v7 != (char *)v1 ) /*0x46f986*/
    {
      v9 = GetResourceIDCSF(v7); /*0x46f98a*/
      v10 = (SessionClass *)v8[2549]; /*0x46f98f*/
      v11 = v9; /*0x46f995*/
      if ( Player::IsObserver(v10) ) /*0x46f999*/
      {
        v12 = *v8; /*0x46f9a2*/
      }
      else if ( v10 == (SessionClass *)MEMORY[0xAC119C] ) /*0x46f9ac*/
      {
        v12 = -2; /*0x46f9ae*/
      }
      else if ( v10 == (SessionClass *)MEMORY[0xAC11A0] ) /*0x46f9bb*/
      {
        v12 = -2; /*0x46f9bd*/
      }
      else if ( v10 == (SessionClass *)MEMORY[0xAC11B0] ) /*0x46f9ca*/
      {
        v12 = -2; /*0x46f9cc*/
      }
      else if ( v10 == (SessionClass *)MEMORY[0xAC11B4] ) /*0x46f9d9*/
      {
        v12 = -2; /*0x46f9db*/
      }
      else
      {
        v12 = SessionClass::GetPlayerColor((int)v10); /*0x46f9e4*/
      }
      SetupSkirmishSpawnLocations(this, v11, v12); /*0x46f9f0*/
      v1 = v14; /*0x46f9f5*/
    }
    ++v8; /*0x46f9f9*/
    ++v7; /*0x46f9fc*/
  }
  while ( (int)v8 < (int)MEMORY[0xA8B2DC] ); /*0x46fa03*/
}
}

// 0x596C70
int Skirmish::ReadSettings(HWND hDlg)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Skirmish::ReadSettings(HWND *this, HWND hDlg)
{
  LRESULT v4; // eax
  HWND v5; // eax
  LRESULT v6; // eax
  HWND v7; // eax
  LRESULT v8; // eax
  HWND v9; // eax
  LRESULT v10; // eax
  HWND v11; // eax
  LRESULT v12; // eax
  HWND v13; // eax
  HWND DlgItem; // eax
  HWND v15; // eax
  IUnknown *v16; // edi
  HWND v18; // [esp+10h] [ebp-4h]
  HWND v19; // [esp+10h] [ebp-4h]
  HWND v20; // [esp+10h] [ebp-4h]
  HWND v21; // [esp+10h] [ebp-4h]
  HWND v22; // [esp+10h] [ebp-4h]
  HWND hDlga; // [esp+18h] [ebp+4h]
  HWND hDlgb; // [esp+18h] [ebp+4h]
  HWND hDlgc; // [esp+18h] [ebp+4h]
  HWND hDlgd; // [esp+18h] [ebp+4h]
  HWND hDlge; // [esp+18h] [ebp+4h]
  HWND hDlgf; // [esp+18h] [ebp+4h]

  v18 = this->q03C; /*0x596c8a*/
  hDlga = GetDlgItem(hDlg, 1029); /*0x596ca2*/
  v4 = SendMessageA(hDlga, 0x147u, 0, 0); /*0x596ca6*/
  v5 = (HWND)SendMessageA(hDlga, 0x150u, v4, 0); /*0x596cb3*/
  this->q03C = v5; /*0x596cb9*/
  if ( v18 != v5 ) /*0x596cbe*/
    byte_ABE2D8 = 1; /*0x596cc0*/
  v19 = *(this + 14); /*0x596cd0*/
  hDlgb = GetDlgItem(hDlg, 1031); /*0x596ce2*/
  v6 = SendMessageA(hDlgb, 0x147u, 0, 0); /*0x596ce6*/
  v7 = (HWND)SendMessageA(hDlgb, 0x150u, v6, 0); /*0x596cf3*/
  *(this + 14) = v7; /*0x596cf9*/
  if ( v19 != v7 ) /*0x596cfe*/
    byte_ABE2D8 = 1; /*0x596d00*/
  v20 = *(this + 16); /*0x596d10*/
  hDlgc = GetDlgItem(hDlg, 1032); /*0x596d22*/
  v8 = SendMessageA(hDlgc, 0x147u, 0, 0); /*0x596d26*/
  v9 = (HWND)SendMessageA(hDlgc, 0x150u, v8, 0); /*0x596d33*/
  *(this + 16) = v9; /*0x596d39*/
  if ( v20 != v9 ) /*0x596d3e*/
    byte_ABE2D8 = 1; /*0x596d40*/
  v21 = *(this + 18); /*0x596d50*/
  hDlgd = GetDlgItem(hDlg, 1002); /*0x596d62*/
  v10 = SendMessageA(hDlgd, 0x147u, 0, 0); /*0x596d66*/
  v11 = (HWND)SendMessageA(hDlgd, 0x150u, v10, 0); /*0x596d73*/
  *(this + 18) = v11; /*0x596d79*/
  if ( v21 != v11 ) /*0x596d7e*/
    byte_ABE2D8 = 1; /*0x596d80*/
  v22 = *(this + 25); /*0x596d90*/
  hDlge = GetDlgItem(hDlg, 1030); /*0x596da2*/
  v12 = SendMessageA(hDlge, 0x147u, 0, 0); /*0x596da6*/
  v13 = (HWND)SendMessageA(hDlge, 0x150u, v12, 0); /*0x596db3*/
  *(this + 25) = v13; /*0x596db9*/
  *(this + 26) = v13; /*0x596dbe*/
  if ( v22 != v13 ) /*0x596dc1*/
    byte_ABE2D8 = 1; /*0x596dc3*/
  hDlgf = *(this + 20); /*0x596dd3*/
  DlgItem = GetDlgItem(hDlg, 1003); /*0x596dd7*/
  v15 = (HWND)SendMessageA(DlgItem, 0x400u, 0, 0); /*0x596de3*/
  *(this + 20) = v15; /*0x596de9*/
  if ( hDlgf == v15 ) /*0x596dee*/
  {
    if ( !byte_ABE2D8 ) /*0x596e00*/
      return SettingsClass::ClampValues((int *)this); /*0x596e00*/
  }
  else
  {
    byte_ABE2D8 = 1; /*0x596df0*/
  }
  Skirmish::RandomizeSettings(this, (ObjectClass *)this->q03C); /*0x596e08*/
  v16 = g_Map_TiberiumConfig; /*0x596e0d*/
  if ( g_Map_TiberiumConfig ) /*0x596e15*/
  {
    ComPtr::Dtor(g_Map_TiberiumConfig); /*0x596e19*/
    __3_YAXPAX_Z(v16); /*0x596e1f*/
  }
  g_Map_TiberiumConfig = 0; /*0x596e27*/
  byte_ABE2D8 = 0; /*0x596e31*/
  return SettingsClass::ClampValues((int *)this); /*0x596e3f*/
}
}

// 0x597260
int Skirmish::RandomizeSettings(ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Skirmish::RandomizeSettings(_DWORD *this, ObjectClass *aP1)
{
  int v3; // eax
  int v4; // esi
  int result; // eax

  *(this + 19) = Random::Range( /*0x597282*/
                   &MEMORY[0x87F8E4].__pad_5568[7484],
                   *(&dword_82B0A8 + (_DWORD)aP1),
                   *(&dword_82B0BC + (_DWORD)aP1));
  *(this + 17) = Random::Range( /*0x59729f*/
                   &MEMORY[0x87F8E4].__pad_5568[7484],
                   *(&dword_82B10C + (_DWORD)aP1),
                   *(&dword_82B120 + (_DWORD)aP1));
  *(this + 24) = Random::Range( /*0x5972bc*/
                   &MEMORY[0x87F8E4].__pad_5568[7484],
                   *(&dword_ABED40 + (_DWORD)aP1),
                   *(&dword_82B0F8 + (_DWORD)aP1));
  *(this + 27) = Random::Range( /*0x5972d9*/
                   &MEMORY[0x87F8E4].__pad_5568[7484],
                   *(&dword_ABED18 + (_DWORD)aP1),
                   *(&dword_82B0D0 + (_DWORD)aP1));
  *(this + 28) = Random::Range( /*0x5972f6*/
                   &MEMORY[0x87F8E4].__pad_5568[7484],
                   *(&dword_82B080 + (_DWORD)aP1),
                   *(&dword_82B094 + (_DWORD)aP1));
  *(this + 21) = 20 * *(this + 16); /*0x59730b*/
  *(this + 22) = Random::Range(&MEMORY[0x87F8E4].__pad_5568[7484], 0, (IUnknown *)0x64); /*0x597313*/
  v3 = *(_DWORD *)(dword_ABE260 + 4 * (_DWORD)aP1); /*0x597322*/
  v4 = *(_DWORD *)(dword_ABE27C + 4 * (_DWORD)aP1); /*0x597325*/
  if ( v3 >= 0 ) /*0x59732a*/
  {
    if ( v3 > 100 ) /*0x597333*/
      v3 = 100; /*0x597335*/
  }
  else
  {
    v3 = 0; /*0x59732c*/
  }
  if ( v4 >= 0 ) /*0x59733c*/
  {
    if ( v4 > 100 ) /*0x597345*/
      v4 = 100; /*0x597347*/
  }
  else
  {
    v4 = 0; /*0x59733e*/
  }
  if ( v3 > v4 ) /*0x59734e*/
    v3 = v4; /*0x597350*/
  *(this + 23) = Random::Range(&MEMORY[0x87F8E4].__pad_5568[7484], (IUnknown *)v3, (IUnknown *)v4); /*0x59736a*/
  result = Random::Range(&MEMORY[0x87F8E4].__pad_5568[7484], 0, (IUnknown *)0xFFFF); /*0x59736d*/
  *(this + 29) = result; /*0x597372*/
  return result; /*0x597375*/
}
}

// 0x640710
int Skirmish::RenderPreview(SkirmishDialog * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Skirmish::RenderPreview(_DWORD *this, SkirmishDialog *aP1)
{
  int result; // eax
  HWND DlgItem; // eax
  int v5; // ecx
  int *v6; // eax
  int v7; // ecx
  int v8; // esi
  int v9; // eax
  int v10; // ecx
  int v11; // esi
  int v12; // esi
  int v13; // eax
  int BuildingAnimByName; // eax
  ScenarioClass *v15; // ecx
  int v16; // ebp
  int v17; // esi
  int v18; // edi
  int v19; // edx
  int v20; // ebx
  int *v21; // eax
  _DWORD *v22; // eax
  int v23; // [esp+24h] [ebp-80h] BYREF
  int v24[2]; // [esp+28h] [ebp-7Ch] BYREF
  ConvertClass *v25; // [esp+30h] [ebp-74h]
  _DWORD v26[4]; // [esp+34h] [ebp-70h] BYREF
  int v27[4]; // [esp+44h] [ebp-60h] BYREF
  LONG left; // [esp+54h] [ebp-50h] BYREF
  LONG top; // [esp+58h] [ebp-4Ch]
  int v30; // [esp+5Ch] [ebp-48h]
  int v31; // [esp+60h] [ebp-44h]
  int v32; // [esp+64h] [ebp-40h]
  int v33; // [esp+68h] [ebp-3Ch]
  int v34; // [esp+6Ch] [ebp-38h] BYREF
  int v35; // [esp+70h] [ebp-34h]
  struct tagRECT Rect; // [esp+74h] [ebp-30h] BYREF
  char v37[16]; // [esp+84h] [ebp-20h] BYREF
  char v38[16]; // [esp+94h] [ebp-10h] BYREF

  result = ValidateRect((HWND)aP1, 0); /*0x640726*/
  if ( *this ) /*0x64072c*/
  {
    DlgItem = GetDlgItem((HWND)aP1, 1128); /*0x64073f*/
    ScreenDialogToClient(DlgItem, &Rect); /*0x640749*/
    left = Rect.left; /*0x64075a*/
    top = Rect.top; /*0x640764*/
    v5 = *this; /*0x64076a*/
    v31 = Rect.bottom - Rect.top; /*0x64076c*/
    v30 = Rect.right - Rect.left; /*0x640770*/
    v6 = (int *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v5 + 120))(v5, v26); /*0x64077b*/
    v27[0] = *v6; /*0x640784*/
    v27[1] = v6[1]; /*0x64078f*/
    v7 = v6[2]; /*0x640793*/
    v8 = v6[3]; /*0x640796*/
    v24[0] = 1000 * v31 / v8; /*0x6407a8*/
    v9 = 1000 * v30 / v7; /*0x6407ba*/
    if ( v24[0] < v9 ) /*0x6407c2*/
      v9 = 1000 * v31 / v8; /*0x6407c4*/
    v10 = v9 * v7; /*0x6407c6*/
    v24[0] = v9; /*0x6407c9*/
    v11 = v9 * v8; /*0x6407d4*/
    v25 = (ConvertClass *)(v10 / 2000); /*0x6407e7*/
    v32 = left + v30 / 2 - v10 / 2000; /*0x6407fc*/
    v33 = top + v31 / 2 - v11 / 2000; /*0x640822*/
    v34 = v10 / 1000; /*0x640842*/
    v35 = v11 / 1000; /*0x640856*/
    (*(void (__thiscall **)(_DWORD, LONG *, _DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9412] + 20))( /*0x64085d*/
      *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9412],
      &left,
      0);
    v12 = **(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9412]; /*0x64086c*/
    v13 = (*(int (__thiscall **)(_DWORD, int *, _DWORD, _DWORD))(*(_DWORD *)*this + 120))(*this, v27, 0, 0); /*0x640875*/
    (*(void (__thiscall **)(_DWORD, int *, _DWORD, int))(v12 + 8))( /*0x640887*/
      *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9412],
      &v34,
      *this,
      v13);
    HIBYTE(v23) = 0; /*0x640896*/
    if ( (*(_BYTE *)(&g_MatrixTransformState + 6176) & 1) == 0 ) /*0x64089b*/
    {
      *((_BYTE *)&g_MatrixTransformState + 24704) |= 1u; /*0x6408a8*/
      *(&g_MatrixTransformState + 6172) = (CoordStruct *)LoadFileSHP(&stru_830620.__pad_579C[4136], (bool *)&v23 + 3); /*0x6408b2*/
    }
    v25 = VtableStub_72E280(); /*0x6408c3*/
    BuildingAnimByName = FindBuildingAnimByName(stru_820524, 1); /*0x6408c7*/
    v15 = MEMORY[0xA8B230]; /*0x6408cc*/
    v16 = BuildingAnimByName; /*0x6408d2*/
    result = MEMORY[0xA8B230]->numberStartingPoints; /*0x6408d4*/
    if ( result > 0 && result <= 8 ) /*0x6408e5*/
    {
      v17 = 0; /*0x6408eb*/
      do /*0x640a29*/
      {
        v18 = v32 + v34 * (1000 * (v15->startingPoints[2 * v17] - v15->startX) / v15->width) / 1000; /*0x640944*/
        v19 = v33 + v35 * (1000 * (v15->startingPoints[2 * v17 + 1] - v15->startY) / v15->height) / 1000; /*0x64097a*/
        v20 = v19; /*0x64097e*/
        if ( *(&g_MatrixTransformState + 6172) ) /*0x640980*/
        {
          v24[0] = v18 - 9; /*0x640994*/
          v24[1] = v19 - 6; /*0x6409a3*/
          v21 = (int *)(*(int (__thiscall **)(_DWORD, char *))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9412] + 120))( /*0x6409b6*/
                         *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9412],
                         v37);
          DrawToSurfaceSHP( /*0x6409d2*/
            *(int *)&MEMORY[0x87F8E4].__pad_5568[9412],
            (int)v25,
            (int)*(&g_MatrixTransformState + 6172),
            0,
            v24,
            v21,
            1024,
            0,
            0,
            0,
            1000,
            0,
            0,
            0,
            0,
            0);
        }
        ++v17; /*0x6409e3*/
        v26[0] = v18 - 2; /*0x6409ef*/
        v26[1] = v20 - 6; /*0x6409f3*/
        v22 = (_DWORD *)(*(int (__thiscall **)(_DWORD, char *))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9412] + 120))( /*0x640a01*/
                          *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9412],
                          v38);
        result = (int)TextRenderer::DrawText( /*0x640a15*/
                        v27,
                        (size_t)g_Str_Fmt_PctD,
                        *(int *)&MEMORY[0x87F8E4].__pad_5568[9412],
                        v22,
                        (int)v26,
                        v16,
                        8,
                        25);
        v15 = MEMORY[0xA8B230]; /*0x640a1a*/
      }
      while ( v17 < MEMORY[0xA8B230]->numberStartingPoints ); /*0x640a29*/
    }
  }
  return result; /*0x640a2f*/
}
}

// 0x6ACD60
HWND Skirmish::EnableSpawnButtons()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HWND __thiscall Skirmish::EnableSpawnButtons(HWND this)
{
  HWND v1; // ebp
  HWND result; // eax
  char *v3; // edi
  int v4; // esi
  LRESULT v5; // eax
  SkirmishDialog *v6; // esi
  char v7; // [esp+7h] [ebp-1h]

  v1 = this; /*0x6acd62*/
  if ( !this ) /*0x6acd66*/
    v1 = (HWND)Dialog::FindByHandle((void *)0x102); /*0x6acd72*/
  v7 = 0; /*0x6acd79*/
  if ( MEMORY[0xA8B23C] ) /*0x6acd80*/
    v7 = *(_BYTE *)(MEMORY[0xA8B23C] + 60); /*0x6acd85*/
  result = GetDlgItem(v1, 1901); /*0x6acd8f*/
  if ( result )
  {
    EnableWindow(result, v7 != 0); /*0x6acdac*/
    v3 = 0; /*0x6acdbb*/
    do
    {
      if ( v3 )
      {
        if ( v3 == (char *)1 )
        {
          v4 = 1294; /*0x6acdcd*/
        }
        else if ( v3 == (char *)2 )
        {
          v4 = 1302; /*0x6acdd9*/
        }
        else if ( v3 == (char *)3 )
        {
          v4 = 1306; /*0x6acde5*/
        }
        else if ( v3 == (char *)4 )
        {
          v4 = 1307; /*0x6acdf1*/
        }
        else if ( v3 == (char *)5 )
        {
          v4 = 1308; /*0x6acdfd*/
        }
        else
        {
          v4 = v3 != (char *)6 ? -1 : 1309;
        }
      }
      else
      {
        v4 = 1291; /*0x6acdc1*/
      }
      v5 = SendDlgItemMessageA(v1, v4, 0x147u, 0, 0); /*0x6ace24*/
      ++v3; /*0x6ace32*/
      v6 = (SkirmishDialog *)SendDlgItemMessageA(v1, v4, 0x150u, v5, 0); /*0x6ace33*/
      result = (HWND)GetResourceID4CSF(v3); /*0x6ace37*/
      if ( (int)result >= 0 ) /*0x6ace3e*/
      {
        result = GetDlgItem(v1, (int)result); /*0x6ace42*/
        if ( result ) /*0x6ace4a*/
        {
          if ( v6 == (SkirmishDialog *)-1 ) /*0x6ace4f*/
            result = (HWND)EnableWindow(result, 0); /*0x6ace53*/
          else
            result = (HWND)EnableWindow(result, v7 != 0); /*0x6ace64*/
        }
      }
    }
    while ( (int)(v3 + 1) < 8 );
  }
  return result; /*0x6ace79*/
}
}

// 0x6AE3F0
int Skirmish::Setup_DlgProc(HWND hDlg, unsigned int a2, unsigned int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall Skirmish_Setup_DlgProc(HWND hDlg, unsigned int a2, unsigned int a3, int a4)
{
  int result; // eax
  HWND DlgItem; // eax
  int DlgCtrlID; // eax
  int v7; // esi
  int v8; // eax
  wchar_t *v9; // eax
  int v10; // eax
  wchar_t *v11; // eax
  int v12; // eax
  wchar_t *v13; // eax
  LRESULT v14; // eax
  LRESULT v15; // eax
  wchar_t *v16; // eax
  wchar_t *v17; // eax
  wchar_t *v18; // eax
  wchar_t *v19; // eax

  result = BaseDialogProc(hDlg, a2, a3, a4); /*0x6ae40a*/
  if ( !result ) /*0x6ae411*/
  {
    if ( a2 > 0x497 ) /*0x6ae41d*/
    {
      if ( a2 != 1257 ) /*0x6ae4a9*/
        return 0; /*0x6ae4b1*/
      WideString::Assign_Alt(0); /*0x6ae4bb*/
      if ( *(_DWORD *)a4 && *(_DWORD *)(a4 + 4) != -1 ) /*0x6ae4ce*/
      {
        DlgCtrlID = GetDlgCtrlID(*(HWND *)a4); /*0x6ae4d5*/
        v7 = DlgCtrlID; /*0x6ae4db*/
        if ( DlgCtrlID == 1291 /*0x6ae52b*/
          || DlgCtrlID == 1294
          || DlgCtrlID == 1302
          || DlgCtrlID == 1306
          || DlgCtrlID == 1307
          || DlgCtrlID == 1308
          || DlgCtrlID == 1309 )
        {
          v14 = *(_DWORD *)(a4 + 4); /*0x6ae5da*/
          if ( v14 == -1 ) /*0x6ae5e6*/
            v14 = SendDlgItemMessageA(hDlg, v7, 0x147u, 0, 0); /*0x6ae5f3*/
          v15 = SendDlgItemMessageA(hDlg, v7, 0x150u, v14, 0); /*0x6ae5ff*/
          switch ( v15 ) /*0x6ae604*/
          {
            case -1: /*0x6ae604*/
              v16 = (wchar_t *)GetStringCSF(MEMORY[0x83FC3C], (int)MEMORY[0x83FC4C], 135); /*0x6ae617*/
              WideString::Assign_Alt(v16); /*0x6ae61f*/
              return 1; /*0x6ae62d*/
            case 2: /*0x6ae604*/
              v17 = (wchar_t *)GetStringCSF(MEMORY[0x831D0C], (int)MEMORY[0x83FC4C], 137); /*0x6ae646*/
              WideString::Assign_Alt(v17); /*0x6ae64e*/
              return 1; /*0x6ae65c*/
            case 1: /*0x6ae604*/
              v18 = (wchar_t *)GetStringCSF(MEMORY[0x831CF8], (int)MEMORY[0x83FC4C], 139); /*0x6ae675*/
              WideString::Assign_Alt(v18); /*0x6ae67d*/
              return 1; /*0x6ae68b*/
            case 0: /*0x6ae604*/
              v19 = (wchar_t *)GetStringCSF(MEMORY[0x831CE4], (int)MEMORY[0x83FC4C], 141); /*0x6ae6a3*/
              WideString::Assign_Alt(v19); /*0x6ae6ab*/
              return 1; /*0x6ae6b9*/
          }
          WideString::Assign_Alt(0); /*0x6ae6c1*/
        }
        else if ( CountryCombo::IDToIndex(DlgCtrlID) == -1 ) /*0x6ae53b*/
        {
          if ( StartCombo::IDToIndex(v7) != -1 ) /*0x6ae547*/
          {
            v10 = GetComboBoxSelectedRaw(hDlg, v7, *(_DWORD *)(a4 + 4)); /*0x6ae589*/
            v11 = (wchar_t *)GameSetup::GetColorTooltip(v10); /*0x6ae590*/
            WideString::Assign_Alt(v11); /*0x6ae598*/
            return 1; /*0x6ae5a6*/
          }
          if ( Dialog::SideIDToIndex(v7) != -1 ) /*0x6ae553*/
          {
            v8 = SetComboBoxSelection(hDlg, v7, *(_DWORD *)(a4 + 4)); /*0x6ae561*/
            v9 = (wchar_t *)sub_4E4F30(v8); /*0x6ae568*/
            WideString::Assign_Alt(v9); /*0x6ae570*/
            return 1; /*0x6ae57e*/
          }
        }
        else
        {
          v12 = GetComboBoxSelected(hDlg, v7, *(_DWORD *)(a4 + 4)); /*0x6ae5b1*/
          if ( v12 != -1 ) /*0x6ae5b9*/
          {
            v13 = (wchar_t *)SideClass::GetName(v12); /*0x6ae5c1*/
            WideString::Assign_Alt(v13); /*0x6ae5c9*/
            return 1; /*0x6ae5d7*/
          }
        }
      }
      return 1; /*0x6ae6c6*/
    }
    else
    {
      if ( a2 == 1175 ) /*0x6ae423*/
        return Skirmish::SetupGame(hDlg, a4); /*0x6ae4a0*/
      if ( a2 != 15 ) /*0x6ae428*/
      {
        if ( a2 == 273 ) /*0x6ae430*/
        {
          DialogSkirmishFunc_UpdateMultiEngineer(hDlg, (unsigned __int16)a3, a4, HIWORD(a3)); /*0x6ae443*/
          return 1; /*0x6ae451*/
        }
        return 0; /*0x6ae430*/
      }
      if ( MEMORY[0xAC1154] ) /*0x6ae45b*/
      {
        DlgItem = GetDlgItem(hDlg, 1128); /*0x6ae463*/
        if ( !(unsigned __int8)SkirmishMapGen::LookupDialogHash(DlgItem) ) /*0x6ae46b*/
          Skirmish::RenderPreview(hDlg); /*0x6ae47b*/
      }
      ValidateRect(hDlg, 0); /*0x6ae483*/
      return 0; /*0x6ae48c*/
    }
  }
  return result; /*0x6ae448*/
}
}

// 0x6AE6E0
int Skirmish::SetupGame(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Skirmish::SetupGame(SkirmishDialog *this, int a2)
{
  HWND DlgItem; // eax
  HWND v4; // esi
  char *v5; // eax
  int i; // edi
  int v7; // eax
  HWND v8; // esi
  wchar_t *StringCSF; // eax
  LRESULT v10; // eax
  wchar_t *v11; // eax
  LRESULT v12; // eax
  wchar_t *v13; // eax
  LRESULT v14; // eax
  wchar_t *v15; // eax
  LRESULT v16; // eax
  SkirmishDialog *v17; // esi
  int v18; // esi
  int v19; // eax
  int v20; // eax
  WPARAM v21; // edi
  SkirmishDialog *ResourceID2CSF; // esi
  SkirmishDialog *ResourceIDCSF; // edi
  HWND v24; // edi
  int v25; // eax
  ObjectClass *v26; // ecx
  ObjectClass *v27; // esi
  CCINIClass *v28; // ecx
  int v29; // eax
  int v30; // ecx
  int PlayerCountMap; // edi
  int v32; // ecx
  int j; // edi
  int v34; // eax
  HWND (__stdcall *v35)(HWND, int); // edi
  HWND v36; // eax
  ObjectClass *v38; // esi
  LPARAM edi70; // edi
  ObjectClass *v40; // esi
  ObjectClass *v41; // esi
  HWND eax75; // eax
  HWND v42; // eax
  HWND v43; // eax
  HWND v44; // eax
  HWND v45; // eax
  ObjectClass *v47; // esi
  _DWORD *eax88; // eax
  ObjectClass *v49; // eax
  int hWnda; // [esp+Ch] [ebp-14h]
  HWND hWndb; // [esp+Ch] [ebp-14h]
  int *v52; // [esp+10h] [ebp-10h]
  SkirmishDialog *v53; // [esp+14h] [ebp-Ch]
  int nIDDlgItem; // [esp+18h] [ebp-8h]
  HWND nIDDlgItemb; // [esp+18h] [ebp-8h]
  int nIDDlgItema; // [esp+18h] [ebp-8h]
  HWND v57; // [esp+1Ch] [ebp-4h]
  HWND ResourceID4CSF; // [esp+1Ch] [ebp-4h]
  HWND v59; // [esp+1Ch] [ebp-4h]
  ObjectClass *First; // [esp+1Ch] [ebp-4h]

  Network::processGameEvent(&HouseClass_Player.__pad_5568[8092]); /*0x6ae6ed*/
  DlgItem = GetDlgItem((HWND)this, 1696); /*0x6ae6f8*/
  v4 = DlgItem; /*0x6ae704*/
  if ( DlgItem ) /*0x6ae708*/
  {
    SendMessageA(DlgItem, 0xC5u, 0x13u, 0); /*0x6ae714*/
    v5 = CharToWideString(&HouseClass_Player.__pad_5568[8396]); /*0x6ae71b*/
    SendMessageA(v4, 0x4B2u, 0, (LPARAM)v5); /*0x6ae729*/
    SendMessageA(v4, 0x4D1u, 1u, 0); /*0x6ae735*/
  }
  for ( i = 0; i < 7; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v7 = 1294; /*0x6ae74a*/
          break;
        case 2:
          v7 = 1302; /*0x6ae756*/
          break;
        case 3:
          v7 = 1306; /*0x6ae762*/
          break;
        case 4:
          v7 = 1307; /*0x6ae76e*/
          break;
        case 5:
          v7 = 1308; /*0x6ae77a*/
          break;
        default:
          v7 = i != 6 ? -1 : 1309;
          break;
      }
    }
    else
    {
      v7 = 1291; /*0x6ae73e*/
    }
    v8 = GetDlgItem((HWND)this, v7); /*0x6ae79c*/
    SendMessageA(v8, 0x14Bu, 0, 0); /*0x6ae7a8*/
    StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[40652], 0, &stru_830620.__pad_579C[40592], 158); /*0x6ae7bb*/
    v10 = SendMessageA(v8, 0x4C2u, 0, (LPARAM)StringCSF); /*0x6ae7c9*/
    SendMessageA(v8, 0x151u, v10, -1); /*0x6ae7d4*/
    v11 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[408], 0, &stru_830620.__pad_579C[40592], 161); /*0x6ae7e7*/
    v12 = SendMessageA(v8, 0x4C2u, 0, (LPARAM)v11); /*0x6ae7f5*/
    SendMessageA(v8, 0x151u, v12, 2); /*0x6ae800*/
    v13 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[392], 0, &stru_830620.__pad_579C[40592], 164); /*0x6ae813*/
    v14 = SendMessageA(v8, 0x4C2u, 0, (LPARAM)v13); /*0x6ae821*/
    SendMessageA(v8, 0x151u, v14, 1); /*0x6ae82c*/
    v15 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[380], 0, &stru_830620.__pad_579C[40592], 167); /*0x6ae83f*/
    v16 = SendMessageA(v8, 0x4C2u, 0, (LPARAM)v15); /*0x6ae84d*/
    SendMessageA(v8, 0x151u, v16, 0); /*0x6ae858*/
    SendMessageA(v8, 0x14Eu, 0, 0); /*0x6ae864*/
  }
  SkirmishDialog::FillComboBoxes(this); /*0x6ae872*/
  InitGameDropdownColors(); /*0x6ae877*/
  Lobby::FillPlayerFactions((HWND)this); /*0x6ae87e*/
  _cfltcvt_init(); /*0x6ae883*/
  Lobby::InvalidateFactionCombos((HWND)this); /*0x6ae88a*/
  GDlg::LoadLetterStrings(); /*0x6ae88f*/
  Lobby::InvalidatePlayerSlots((HWND)this); /*0x6ae896*/
  SetupSkirmishDialogPlayerSlot((HWND)this, 0); /*0x6ae89f*/
  MapSkirmishDialogPlayerToControl((HWND)this, 0); /*0x6ae8a8*/
  FillLobbyFactionComboBox((HWND)this, 0); /*0x6ae8b1*/
  SetupLobbyPlayerSlotDialog((HWND)this, 0); /*0x6ae8ba*/
  v53 = 0; /*0x6ae8bf*/
  v52 = (int *)&HouseClass_Player.__pad_5568[8508]; /*0x6ae8c7*/
  v17 = 0; /*0x6ae8cf*/
  do
  {
    if ( v17 )
    {
      if ( v17 == (SkirmishDialog *)1 )
      {
        v18 = 1294; /*0x6ae8e3*/
      }
      else if ( v17 == (SkirmishDialog *)2 )
      {
        v18 = 1302; /*0x6ae8ef*/
      }
      else if ( v17 == (SkirmishDialog *)3 )
      {
        v18 = 1306; /*0x6ae8fb*/
      }
      else if ( v17 == (SkirmishDialog *)4 )
      {
        v18 = 1307; /*0x6ae907*/
      }
      else if ( v17 == (SkirmishDialog *)5 )
      {
        v18 = 1308; /*0x6ae913*/
      }
      else
      {
        v18 = v17 != (SkirmishDialog *)6 ? -1 : 1309;
      }
    }
    else
    {
      v18 = 1291; /*0x6ae8d7*/
    }
    v19 = *(v52 - 1); /*0x6ae931*/
    switch ( v19 ) /*0x6ae937*/
    {
      case 1: /*0x6ae937*/
        hWnda = -1; /*0x6ae939*/
        break;
      case 4: /*0x6ae937*/
        hWnda = 0; /*0x6ae948*/
        break;
      case 5: /*0x6ae937*/
        hWnda = 1; /*0x6ae957*/
        break;
      default:
        v20 = -(v19 != 6); /*0x6ae966*/
        LOBYTE(v20) = v20 & 0xFD; /*0x6ae968*/
        hWnda = v20 + 2; /*0x6ae96d*/
        break;
    }
    v21 = 0; /*0x6ae982*/
    v57 = (HWND)SendDlgItemMessageA((HWND)this, v18, 0x146u, 0, 0); /*0x6ae986*/
    if ( (int)v57 > 0 ) /*0x6ae98a*/
    {
      while ( SendDlgItemMessageA((HWND)this, v18, 0x150u, v21, 0) != hWnda ) /*0x6ae9a0*/
      {
        if ( (int)++v21 >= (int)v57 ) /*0x6ae9a9*/
          goto LABEL_44; /*0x6ae9a9*/
      }
      SendDlgItemMessageA((HWND)this, v18, 0x14Eu, v21, 0); /*0x6ae9b7*/
    }
LABEL_44:
    v53 = (SkirmishDialog *)((char *)v53 + 1); /*0x6ae9bd*/
    ResourceID2CSF = (SkirmishDialog *)GetResourceID2CSF(v53); /*0x6ae9d1*/
    ResourceIDCSF = (SkirmishDialog *)GetResourceIDCSF(v53); /*0x6ae9dc*/
    nIDDlgItem = GetResourceID3CSF(v53); /*0x6ae9e7*/
    ResourceID4CSF = (HWND)GetResourceID4CSF(v53); /*0x6ae9f0*/
    if ( hWnda == -1 ) /*0x6ae9fb*/
    {
      SetupLobbyCountryCombo(this, (int)ResourceID2CSF, -2); /*0x6aea07*/
      SetupSkirmishSpawnLocations((HWND)this, (int)ResourceIDCSF, -2); /*0x6aea12*/
      SetupLobbyFactionSlots((SessionClass *)this, nIDDlgItem, -2); /*0x6aea1f*/
      SetupLobbyPlayerSlots((SessionClass *)this, (int)ResourceID4CSF, -2); /*0x6aea2c*/
      hWndb = GetDlgItem((HWND)this, (int)ResourceID2CSF); /*0x6aea3d*/
      v24 = GetDlgItem((HWND)this, (int)ResourceIDCSF); /*0x6aea43*/
      nIDDlgItemb = GetDlgItem((HWND)this, nIDDlgItem); /*0x6aea4d*/
      v59 = GetDlgItem((HWND)this, (int)ResourceID4CSF); /*0x6aea66*/
      EnableWindow(hWndb, 0); /*0x6aea6a*/
      EnableWindow(v24, 0); /*0x6aea6f*/
      EnableWindow(nIDDlgItemb, 0); /*0x6aea78*/
      EnableWindow(v59, 0); /*0x6aea81*/
    }
    else
    {
      SetupLobbyCountryCombo(this, (int)ResourceID2CSF, *v52); /*0x6aea90*/
      SetupSkirmishSpawnLocations((HWND)this, (int)ResourceIDCSF, v52[1]); /*0x6aeaa1*/
    }
    v17 = v53; /*0x6aeaa6*/
    v52 += 3; /*0x6aeab8*/
  }
  while ( (int)&v53->__pad_0[1] < 8 );
  if ( *(int *)&HouseClass_Player.__pad_5568[8464] <= 0 /*0x6aeadb*/
    || (v25 = MultiplayerGameMode::ListGet(),
        v26 = *(ObjectClass **)&HouseClass_Player.__pad_5568[8464],
        *(int *)&HouseClass_Player.__pad_5568[8464] > v25) )
  {
    v26 = *(ObjectClass **)(MultiplayerGameMode::GetFirst() + 40); /*0x6aeae2*/
    *(_DWORD *)&HouseClass_Player.__pad_5568[8464] = v26; /*0x6aeae5*/
  }
  *(_DWORD *)&HouseClass_Player.__pad_5568[8092] = v26; /*0x6aeaeb*/
  v27 = (ObjectClass *)Skirmish_Setup(); /*0x6aeaf6*/
  First = v27; /*0x6aeaf8*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[8464] = v27->owningHouseIndex; /*0x6aeaff*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[8092] = v27->owningHouseIndex; /*0x6aeb07*/
  GDlg::LoadLetterStrings(); /*0x6aeb0d*/
  Lobby::InvalidatePlayerSlots((HWND)this); /*0x6aeb14*/
  SetupLobbyPlayerSlotDialog((HWND)this, 0); /*0x6aeb1d*/
  v28 = *(CCINIClass **)&HouseClass_Player.__pad_5568[8468]; /*0x6aeb22*/
  if ( *(int *)&HouseClass_Player.__pad_5568[8468] < 0 /*0x6aeb32*/
    || *(int *)&HouseClass_Player.__pad_5568[8468] >= *(int *)&HouseClass_Player.__pad_5568[9764] )
  {
    v28 = 0; /*0x6aeb34*/
    *(_DWORD *)&HouseClass_Player.__pad_5568[8468] = 0; /*0x6aeb36*/
  }
  *(_DWORD *)&HouseClass_Player.__pad_5568[8096] = LoadScenarioClassByIndex((int)v28) != 0
                                                 ? *(_DWORD *)&HouseClass_Player.__pad_5568[8468]
                                                 : 0;
  nIDDlgItema = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752] /*0x6aeb5e*/
                          + 4 * *(_DWORD *)&HouseClass_Player.__pad_5568[8096]);
  if ( !MapPreview::Check(v27->__pad_0, nIDDlgItema) ) /*0x6aeb62*/
  {
    v29 = (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)v27->__pad_0 + 68))(v27); /*0x6aeb6f*/
    if ( v29 == -1 ) /*0x6aeb75*/
    {
      First = (ObjectClass *)MultiplayerGameMode::GetFirst(); /*0x6aeb7f*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[8464] = First->owningHouseIndex; /*0x6aeb83*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[8092] = First->owningHouseIndex; /*0x6aeb8c*/
      v29 = (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)First->__pad_0 + 68))(First); /*0x6aeb96*/
    }
    v30 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752] + 4 * v29); /*0x6aeb9f*/
    *(_DWORD *)&HouseClass_Player.__pad_5568[8468] = v29; /*0x6aeba2*/
    nIDDlgItema = v30; /*0x6aeba7*/
    *(_DWORD *)&HouseClass_Player.__pad_5568[8096] = v29; /*0x6aebab*/
    strcpy(&HouseClass_Player.__pad_5568[9772], (const char *)(v30 + 88)); /*0x6aebca*/
    v27 = First; /*0x6aebd3*/
  }
  *(_DWORD *)&HouseClass_Player.__pad_5568[8072] = v27; /*0x6aebdd*/
  PlayerCountMap = ReadPlayerCountMap(*(int *)&HouseClass_Player.__pad_5568[8096]); /*0x6aebee*/
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 4))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]) /*0x6aec07*/
    || (v32 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4580), v32 > PlayerCountMap) )
  {
    v32 = PlayerCountMap; /*0x6aec09*/
  }
  ResetLobbyFactionTable(v32); /*0x6aec0b*/
  Lobby::InvalidateFactionCombos((HWND)this); /*0x6aec12*/
  Lobby::InvalidatePlayerSlots((HWND)this); /*0x6aec19*/
  if ( this && *(_DWORD *)&HouseClass_Player.__pad_5568[8072] ) /*0x6aec29*/
  {
    for ( j = 1; j < 8; ++j ) /*0x6aec2b*/
    {
      v34 = GetResourceID4CSF((void *)j); /*0x6aec32*/
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072] /*0x6aec41*/
        && *(_BYTE *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8072] + 60) )
      {
        SetupLobbyPlayerSlots((SessionClass *)this, v34, 3); /*0x6aec4a*/
      }
      else
      {
        SetupLobbyPlayerSlots((SessionClass *)this, v34, -2); /*0x6aec52*/
      }
    }
  }
  Skirmish_Setup_6ADDF0((HWND)this, -1, *(int *)&HouseClass_Player.__pad_5568[8096]); /*0x6aec69*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[8072] = v27; /*0x6aec6e*/
  (*(void (__thiscall **)(ObjectClass *))(*(_DWORD *)v27->__pad_0 + 32))(v27); /*0x6aec78*/
  Skirmish::EnableSpawnButtons((HWND)this); /*0x6aec7d*/
  SetDialogPlayerName((HWND)this, (int)v27); /*0x6aec86*/
  Dialog::ShowPlayerName((HWND)this); /*0x6aec8d*/
  PtrVector::Destroy(&HouseClass_Player.__pad_5568[18368]); /*0x6aec97*/
  v35 = GetDlgItem; /*0x6aecad*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[8116] = *(_DWORD *)&HouseClass_Player.__pad_5568[8472]; /*0x6aecb9*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[8104] = *(_DWORD *)&HouseClass_Player.__pad_5568[8476]; /*0x6aecbf*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[8124] = *(_DWORD *)&HouseClass_Player.__pad_5568[8480]; /*0x6aecc5*/
  v36 = GetDlgItem((HWND)this, 1321); /*0x6aecca*/
  v38 = (ObjectClass *)v36; /*0x6aeccc*/
  if ( v36 ) /*0x6aecd0*/
  {
    edi70 = 6 - *(_DWORD *)&HouseClass_Player.__pad_5568[8116]; /*0x6aecea*/
    SendMessageA(v36, 0x406u, 1u, 393216); /*0x6aecec*/
    SendMessageA((HWND)v38, 0x405u, 1u, edi70); /*0x6aecf7*/
    v35 = GetDlgItem; /*0x6aecf9*/
  }
  v40 = (ObjectClass *)v35((HWND)this, 1297); /*0x6aed07*/
  if ( v40 ) /*0x6aed0b*/
  {
    SendMessageA( /*0x6aed32*/
      (HWND)v40,
      0x406u,
      1u,
      *(unsigned __int16 *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5248)
    | (*(unsigned __int16 *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5256) << 16));
    SendMessageA((HWND)v40, 0x405u, 1u, *(LPARAM *)&HouseClass_Player.__pad_5568[8104]); /*0x6aed42*/
    SendMessageA((HWND)v40, 0x4ABu, 0, *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5260)); /*0x6aed59*/
  }
  v41 = (ObjectClass *)v35((HWND)this, 1292); /*0x6aed63*/
  if ( v41 ) /*0x6aed67*/
  {
    SendMessageA( /*0x6aed8e*/
      (HWND)v41,
      0x406u,
      1u,
      *(unsigned __int16 *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5264)
    | (*(unsigned __int16 *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5272) << 16));
    SendMessageA((HWND)v41, 0x405u, 1u, *(LPARAM *)&HouseClass_Player.__pad_5568[8124]); /*0x6aed9e*/
  }
  HouseClass_Player.__pad_5568[8110] = HouseClass_Player.__pad_5568[8484]; /*0x6aedb1*/
  HouseClass_Player.__pad_5568[8111] = HouseClass_Player.__pad_5568[8485]; /*0x6aedbd*/
  HouseClass_Player.__pad_5568[8112] = HouseClass_Player.__pad_5568[8486]; /*0x6aedcf*/
  HouseClass_Player.__pad_5568[8300] = HouseClass_Player.__pad_5568[8487]; /*0x6aedd4*/
  HouseClass_Player.__pad_5568[8109] = HouseClass_Player.__pad_5568[8488]; /*0x6aedda*/
  eax75 = v35((HWND)this, 1358); /*0x6aede0*/
  if ( eax75 ) /*0x6aede4*/
    SendMessageA(eax75, 0xF1u, HouseClass_Player.__pad_5568[8110] != 0, 0); /*0x6aedfc*/
  v42 = v35((HWND)this, 1690); /*0x6aee04*/
  if ( v42 ) /*0x6aee08*/
    SendMessageA(v42, 0xF1u, HouseClass_Player.__pad_5568[8111] != 0, 0); /*0x6aee20*/
  v43 = v35((HWND)this, 1693); /*0x6aee28*/
  if ( v43 ) /*0x6aee2c*/
    SendMessageA(v43, 0xF1u, HouseClass_Player.__pad_5568[8112] != 0, 0); /*0x6aee44*/
  v44 = v35((HWND)this, 1683); /*0x6aee4c*/
  if ( v44 ) /*0x6aee50*/
    SendMessageA(v44, 0xF1u, HouseClass_Player.__pad_5568[8300] != 0, 0); /*0x6aee68*/
  v45 = v35((HWND)this, 1686); /*0x6aee70*/
  if ( v45 ) /*0x6aee75*/
    SendMessageA(v45, 0xF1u, HouseClass_Player.__pad_5568[8109] != 0, 0); /*0x6aee8d*/
  if ( !IsRandMap::Sed(nIDDlgItema) ) /*0x6aee93*/
    goto LABEL_92; /*0x6aee93*/
  ScenarioClass::CopyStartPositions(); /*0x6aee9c*/
  v47 = (ObjectClass *)*(&g_MatrixTransformState + 2257); /*0x6aeea1*/
  if ( *(&g_MatrixTransformState + 2257) ) /*0x6aeea9*/
  {
    ComPtr::Dtor(*(&g_MatrixTransformState + 2257)); /*0x6aeead*/
    __3_YAXPAX_Z(v47); /*0x6aeeb3*/
  }
  eax88 = (_DWORD *)__2_YAPAXI_Z(4u); /*0x6aeebd*/
  v49 = eax88 ? (ObjectClass *)unknown_libname_27(eax88) : 0;
  *(&g_MatrixTransformState + 2257) = (CoordStruct *)v49; /*0x6aeedb*/
  Surface::LoadToSurfaceSHP((char **)v49, stru_829ABC.__pad_0); /*0x6aeee0*/
  if ( !(*(&g_MatrixTransformState + 2257))->X ) /*0x6aeeeb*/
LABEL_92:
    Session::PrepareGame((HWND)this); /*0x6aeef2*/
  return 0; /*0x6aeef7*/
}
}

// 0x6ADF00
namespace gamemd {
int Skirmish_Setup_6ADDF0_Setup(HWND hDlg, int a2, int nIDDlgItem)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall Skirmish_Setup_6ADDF0_Setup(HWND hDlg, int a2, int nIDDlgItem)
{
  int result; // eax
  char *v5; // esi
  HWND ResourceIDHardcodedCSF; // [esp+4h] [ebp-1Ch]
  HWND DlgItem; // [esp+4h] [ebp-1Ch]
  HWND ResourceIDCSF; // [esp+8h] [ebp-18h]
  HWND v9; // [esp+8h] [ebp-18h]
  HWND ResourceID2CSF; // [esp+Ch] [ebp-14h]
  HWND v11; // [esp+Ch] [ebp-14h]
  HWND ResourceID3CSF; // [esp+10h] [ebp-10h]
  HWND v13; // [esp+10h] [ebp-10h]
  HWND ResourceID4CSF; // [esp+14h] [ebp-Ch]
  HWND v15; // [esp+14h] [ebp-Ch]
  HWND hWnd; // [esp+18h] [ebp-8h]
  int v17; // [esp+1Ch] [ebp-4h]
  int nIDDlgItema; // [esp+24h] [ebp+4h]

  result = a2 + nIDDlgItem; /*0x6adf08*/
  v17 = a2 + nIDDlgItem; /*0x6adf0e*/
  if ( a2 < a2 + nIDDlgItem )
  {
    v5 = (char *)(a2 - 1); /*0x6adf27*/
    do
    {
      if ( v5 )
      {
        if ( v5 == (char *)1 )
        {
          nIDDlgItema = 1294; /*0x6adf3d*/
        }
        else if ( v5 == (char *)2 )
        {
          nIDDlgItema = 1302; /*0x6adf4c*/
        }
        else if ( v5 == (char *)3 )
        {
          nIDDlgItema = 1306; /*0x6adf5b*/
        }
        else if ( v5 == (char *)4 )
        {
          nIDDlgItema = 1307; /*0x6adf6a*/
        }
        else if ( v5 == (char *)5 )
        {
          nIDDlgItema = 1308; /*0x6adf79*/
        }
        else
        {
          nIDDlgItema = v5 != (char *)6 ? -1 : 1309;
        }
      }
      else
      {
        nIDDlgItema = 1291; /*0x6adf2e*/
      }
      ResourceIDHardcodedCSF = (HWND)GetResourceIDHardcodedCSF(++v5); /*0x6adfa4*/
      ResourceIDCSF = (HWND)GetResourceIDCSF(v5); /*0x6adfaf*/
      ResourceID2CSF = (HWND)GetResourceID2CSF(v5); /*0x6adfba*/
      ResourceID3CSF = (HWND)GetResourceID3CSF(v5); /*0x6adfc5*/
      ResourceID4CSF = (HWND)GetResourceID4CSF(v5); /*0x6adfd2*/
      hWnd = GetDlgItem(hDlg, nIDDlgItema); /*0x6adfde*/
      DlgItem = GetDlgItem(hDlg, (int)ResourceIDHardcodedCSF); /*0x6adfe6*/
      v9 = GetDlgItem(hDlg, (int)ResourceIDCSF); /*0x6adff6*/
      v11 = GetDlgItem(hDlg, (int)ResourceID2CSF); /*0x6ae002*/
      v13 = GetDlgItem(hDlg, (int)ResourceID3CSF); /*0x6ae00a*/
      v15 = GetDlgItem(hDlg, (int)ResourceID4CSF); /*0x6ae01d*/
      ShowWindow(hWnd, 5); /*0x6ae021*/
      ShowWindow(DlgItem, 5); /*0x6ae02a*/
      ShowWindow(v9, 5); /*0x6ae033*/
      ShowWindow(v11, 5); /*0x6ae03c*/
      ShowWindow(v13, 5); /*0x6ae045*/
      ShowWindow(v15, 5); /*0x6ae04e*/
      SetupSkirmishSpawnLocationEntry(hDlg, nIDDlgItema); /*0x6ae056*/
      result = v17; /*0x6ae05b*/
    }
    while ( (int)(v5 + 1) < v17 );
  }
  return result; /*0x6ae06d*/
}
}
} // namespace gamemd

// 0x5E2F80
namespace gamemd {
int sub_5E2F80()
{
{
    int result;
    result = MultiplayerGameMode::Find(*(void **)g_ScenarioFlags);
    if ( !result )
    return MultiplayerGameMode::GetFirst();
    return result;
}
}
} // namespace gamemd

// 0x6ADDF0
namespace gamemd {
void sub_6ADDF0(HWND a1, int a2, int a3)
{
{
    int v5;
    int v6;
    bool v7;
    HWND v8;
    int i;
    int ResourceID4CSF;
    int PlayerCountMap;
    bool v13;
    if ( a2 == -1 )
    PlayerCountMap = 8;
    else
    PlayerCountMap = ReadPlayerCountMap(a2);
    v5 = ReadPlayerCountMap(a3);
    v6 = v5 - PlayerCountMap;
    if ( a2 >= 0 && a3 >= 0 && a2 < g_MultiplayerOptions && a3 < g_MultiplayerOptions && (v13 = IsRandMap::Sed(*(int *)(g_MultiplayerGameState + 4 * a2)), v7 = IsRandMap::Sed(*(int *)(g_MultiplayerGameState + 4 * a3)), v13) && v7 )
  {
    v8 = a1;
    HideSkirmishSpawnLocations(a1, 1);
    Skirmish_Setup_6ADDF0_Setup(a1, 1, v5 - 1);
  }
    else
  {
    v8 = a1;
  }
    if ( v6 <= 0 )
  {
    if ( v6 < 0 )
    HideSkirmishSpawnLocations(v8, v5);
  }
    else
  {
    Skirmish_Setup_6ADDF0_Setup(v8, PlayerCountMap, v6);
  }
    if ( v8 && g_GameStateFlags )
  {
    for ( i = 1; i < 8; ++i )
    {
    ResourceID4CSF = GetResourceID4CSF((void *)i);
    if ( g_GameStateFlags && *(char *)(g_GameStateFlags + 60) )
    SetupLobbyPlayerSlots(v8, ResourceID4CSF, 3);
    else
    SetupLobbyPlayerSlots(v8, ResourceID4CSF, -2);
    }
  }
}
}
} // namespace gamemd
