// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/NetworkLobby_e4.hpp"

// 0x5D4210
namespace gamemd {
int NetworkLobby::MessageList_Append(int a2, int a3, CellStruct * aP3, char a5, int a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall NetworkLobby::MessageList_Append(_DWORD *this, int a2, int a3, CellStruct *aP3, char a5, int a6)
{
  int v8; // eax
  int i; // edi
  int v10; // edi
  _WORD *v11; // eax
  _DWORD *v12; // ecx
  int v13; // edx
  CellStruct *v14; // ebx
  size_t v15; // eax
  TextLabelClass *v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // ecx
  int v21; // edi
  int *v22; // eax
  int v23; // edx

  if ( *((_BYTE *)this + 25) ) /*0x5d4213*/
  {
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 9) + 80))(*(this + 9)); /*0x5d421f*/
    return 0; /*0x5d4222*/
  }
  else
  {
    if ( *((_BYTE *)this + 26) ) /*0x5d4228*/
    {
      v8 = *this; /*0x5d4232*/
      for ( i = 0; v8; v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8) ) /*0x5d4232*/
        ++i; /*0x5d423e*/
      if ( *((_BYTE *)this + 25) && *((_BYTE *)this + 26) ) /*0x5d424d*/
        ++i; /*0x5d4254*/
      if ( i + 1 > *(this + 3) ) /*0x5d425b*/
      {
        v10 = *this; /*0x5d425d*/
        *this = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*this + 36))(*this); /*0x5d4266*/
        v11 = this + 1312; /*0x5d4268*/
        v12 = this + 178; /*0x5d426e*/
        v13 = 14; /*0x5d4274*/
        do /*0x5d428d*/
        {
          if ( *(_DWORD **)(v10 + 48) == v12 ) /*0x5d427c*/
            *v11 = 1; /*0x5d427e*/
          ++v11; /*0x5d4283*/
          v12 += 81; /*0x5d4286*/
          --v13; /*0x5d428c*/
        }
        while ( v13 ); /*0x5d428d*/
        if ( v10 ) /*0x5d4291*/
          (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x5d4299*/
      }
    }
    v14 = aP3; /*0x5d429b*/
    if ( !aP3 ) /*0x5d42a1*/
      v14 = (CellStruct *)&MEMORY[0x87F8E4].__pad_5568[10472]; /*0x5d42a3*/
    *((_WORD *)this + 348) = a5; /*0x5d42b1*/
    memset(this + 10, 0, 0x144u); /*0x5d42c2*/
    wcscpy((wchar_t *)this + 20, (const wchar_t *)v14); /*0x5d42c5*/
    *((_WORD *)this + 182) = 0; /*0x5d42cb*/
    v15 = wcslen((const wchar_t *)v14); /*0x5d42d4*/
    *(this + 173) = v15; /*0x5d42db*/
    *(this + 172) = v15; /*0x5d42e1*/
    v16 = (TextLabelClass *)__2_YAPAXI_Z(0x4Cu); /*0x5d42e7*/
    if ( v16 ) /*0x5d42f1*/
    {
      v17 = a3; /*0x5d42f3*/
      BYTE1(v17) = BYTE1(a3) | 0x80; /*0x5d42fb*/
      v18 = MessageListClass::clearMessages(v16, (int)(this + 10), *(this + 7), *(this + 8), a2, v17); /*0x5d430b*/
    }
    else
    {
      v18 = 0; /*0x5d4312*/
    }
    v19 = a6; /*0x5d4314*/
    *(this + 9) = v18; /*0x5d4318*/
    if ( a6 <= 0 ) /*0x5d431d*/
      v19 = *(this + 177); /*0x5d431f*/
    *(_DWORD *)(v18 + 56) = v19; /*0x5d4325*/
    v20 = *(this + 9); /*0x5d4328*/
    if ( v20 ) /*0x5d432d*/
    {
      *((_BYTE *)this + 25) = 1; /*0x5d432f*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v20 + 80))(v20); /*0x5d4335*/
    }
    else
    {
      *((_BYTE *)this + 25) = 0; /*0x5d433a*/
    }
    Network_Append(); /*0x5d433e*/
    if ( *((_BYTE *)this + 26) ) /*0x5d4343*/
    {
      if ( *((_BYTE *)this + 25) ) /*0x5d434a*/
        v21 = *(this + 2) + *(this + 5); /*0x5d4357*/
      else
        v21 = *(this + 2); /*0x5d435b*/
      v22 = (int *)*this; /*0x5d435e*/
      if ( *this ) /*0x5d435e*/
      {
        do /*0x5d4373*/
        {
          v23 = *v22; /*0x5d4364*/
          v22[4] = v21; /*0x5d4368*/
          v22 = (int *)(*(int (__thiscall **)(int *))(v23 + 4))(v22); /*0x5d436b*/
          v21 += *(this + 5); /*0x5d436e*/
        }
        while ( v22 ); /*0x5d4373*/
      }
      --*(this + 3); /*0x5d4375*/
    }
    return *(this + 9); /*0x5d4378*/
  }
}
}
} // namespace gamemd

// 0x5DB9B0
namespace gamemd {
int NetworkLobby_UpdatePlayerList()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __usercall NetworkLobby::UpdatePlayerList@<eax>(CampaignScore *a1@<edi>)
{
  int result; // eax
  HWND Current; // esi
  HWND DlgItem; // ebp
  wchar_t *StringCSF; // eax
  int i; // ebx
  HWND v6; // esi
  wchar_t *v7; // [esp-18h] [ebp-BCh]
  int v8; // [esp-14h] [ebp-B8h]
  CampaignScore *v9; // [esp-10h] [ebp-B4h]
  LRESULT wParam; // [esp+0h] [ebp-A4h]
  wchar_t lParam[80]; // [esp+4h] [ebp-A0h] BYREF

  result = Dialog::GetCurrentType(); /*0x5db9b6*/
  if ( result == 187 ) /*0x5db9c0*/
  {
    v9 = a1; /*0x5db9c9*/
    Current = Dialog::GetCurrent(); /*0x5db9cf*/
    DlgItem = GetDlgItem(Current, 1353); /*0x5db9e3*/
    if ( (int)*(&g_MatrixTransformState + 1300) >= *(int *)&HouseClass_Player.__pad_5568[18360] ) /*0x5db9ec*/
    {
      *(&g_MatrixTransformState + 1300) = (CoordStruct *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18360] - 1); /*0x5db9fa*/
      SendNetworkHeartbeat(0, 1, 0, 0); /*0x5db9ff*/
    }
    if ( (int)*(&g_MatrixTransformState + 1300) < 0 ) /*0x5dba0b*/
      *(&g_MatrixTransformState + 1300) = 0; /*0x5dba0d*/
    wParam = SendDlgItemMessageA(Current, 1353, 0x18Eu, 0, 0); /*0x5dba3d*/
    SendDlgItemMessageA(Current, 1353, 0x49Du, 0, 1); /*0x5dba41*/
    SendMessageA(DlgItem, 0x184u, 0, 0); /*0x5dba53*/
    StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_BC0[272], 0, &stru_830620.__pad_BC0[168], 508); /*0x5dba66*/
    SendMessageA(DlgItem, 0x4CDu, 0, (LPARAM)StringCSF); /*0x5dba74*/
    for ( i = 1; i < *(int *)&HouseClass_Player.__pad_5568[18360]; ++i ) /*0x5dba82*/
    {
      v8 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18348] + 4 * i); /*0x5dba8c*/
      if ( *(_BYTE *)(v8 + 52) ) /*0x5dba8d*/
        v7 = GetStringCSF((wchar_t *)&stru_830620.__pad_BC0[252], 0, &stru_830620.__pad_BC0[168], 514); /*0x5dbaae*/
      else
        v7 = GetStringCSF((wchar_t *)&stru_830620.__pad_BC0[224], 0, &stru_830620.__pad_BC0[168], 516); /*0x5dbacc*/
      swprintf(lParam, (const size_t)v7, (const wchar_t *const)v8, v9); /*0x5dbab0*/
      SendMessageA(DlgItem, 0x4CDu, 0, (LPARAM)lParam); /*0x5dbae3*/
    }
    SendDlgItemMessageA(Current, 1353, 0x186u, (WPARAM)*(&g_MatrixTransformState + 1300), 0); /*0x5dbb07*/
    SendDlgItemMessageA(Current, 1353, 0x197u, wParam, 0); /*0x5dbb1b*/
    SendDlgItemMessageA(Current, 1353, 0x49Du, 0, 0); /*0x5dbb2c*/
    v6 = GetDlgItem(Current, 1353); /*0x5dbb3a*/
    InvalidateRect(v6, 0, 0); /*0x5dbb41*/
    return UpdateWindow(v6); /*0x5dbb48*/
  }
  return result; /*0x5dbb52*/
}
}
} // namespace gamemd

// 0x5DC350
namespace gamemd {
char NetworkLobby::CreateGame()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (v3 export truncated pseudocode — commented out; live version via get_context)
// char NetworkLobby::CreateGame()
// {
//   DLGTEMPLATE *DialogIndirect; // esi
//   void (__stdcall *v1)(const MSG *); // edi
//   void (__stdcall *v2)(const MSG *); // ebx
//   int v3; // eax
//   signed int v4; // esi
//   signed int v5; // eax
//   wchar_t *StringCSF; // eax
//   HWND Current; // eax
//   HWND v8; // esi
//   HWND DlgItem; // eax
//   HWND v10; // eax
//   DLGTEMPLATE *v11; // esi
//   int m; // esi
//   CellStruct *v14; // esi
//   int eax33; // eax
//   int n; // esi
//   int v16; // esi
//   int v17; // eax
//   DLGTEMPLATE *v18; // esi
//   HWND v19; // eax
//   ObjectClass *v22; // esi
//   HWND v21; // eax
//   HWND eax64; // eax
//   ObjectClass *v26; // esi
//   HWND v24; // eax
//   char v25; // bl
//   wchar_t *eax71; // eax
//   int v27; // esi
//   char *v28; // eax
//   char *v29; // eax
//   int v30; // eax
//   int v31; // ebp
//   wchar_t *v32; // eax
//   HWND v33; // eax
//   HWND v34; // esi
//   HWND v35; // eax
//   CellStruct *v36; // ecx
//   char *v37; // eax
//   SkirmishDialog *PlayerOption; // eax
//   int PlayerColor; // eax
//   int v40; // eax
//   int v41; // eax... [46603 chars total]
// end truncated pseudocode
}
} // namespace gamemd

// 0x5DE520
namespace gamemd {
INT_PTR NetworkLobby::DlgProc(HWND hDlg, UINT a2, WPARAM nIDDlgItem, unsigned int lParam)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (v3 export truncated pseudocode — commented out; live version via get_context)
// INT_PTR __stdcall NetworkLobby::DlgProc(HWND hDlg, UINT a2, WPARAM nIDDlgItem, unsigned int lParam)
// {
//   wchar_t *StringCSF; // ebp
//   HWND v5; // eax
//   char *v6; // eax
//   INT_PTR result; // eax
//   ObjectClass *v8; // edi
//   LRESULT v9; // eax
//   HWND v10; // eax
//   SkirmishDialog *v11; // ecx
//   void *v12; // ebp
//   CCINIClass *v13; // edi
//   CCINIClass *v14; // ecx
//   SkirmishDialog *v15; // ecx
//   char v16; // bl
//   char v17; // al
//   int v18; // edi
//   int i; // esi
//   IUnknown *v20; // eax
//   SkirmishDialog *v21; // eax
//   CampaignScore *PlayerCountMap; // edi
//   int v23; // ecx
//   HWND DlgItem; // eax
//   void *DlgCtrlID; // edi
//   void *ComboBoxSelectedRaw; // eax
//   wchar_t *DifficultyString; // eax
//   void *ComboBoxSelected; // eax
//   void *ComboBoxSelectedDefault; // eax
//   POINT v30; // [esp-Ch] [ebp-200h]
//   char v31; // [esp+12h] [ebp-1E2h]
//   char v32; // [esp+13h] [ebp-1E1h]
//   HWND hWnd; // [esp+14h] [ebp-1E0h]
//   void *v34; // [esp+18h] [ebp-1DCh] BYREF
//   struct tagRECT Rect; // [esp+1Ch] [ebp-1D8h... [21340 chars total]
// end truncated pseudocode
}
} // namespace gamemd

// 0x5E00B0
namespace gamemd {
int NetworkLobby_MessageHandler()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (v3 export truncated pseudocode — commented out; live version via get_context)
// char __usercall NetworkLobby::MessageHandler@<al>(CampaignScore *a1@<edi>)
// {
//   char result; // al
//   int v2; // esi
//   char *v3; // eax
//   int v4; // eax
//   int v5; // esi
//   int v6; // edi
//   int v7; // eax
//   int v8; // eax
//   _DWORD *v9; // eax
//   wchar_t *v10; // eax
//   wchar_t *v11; // eax
//   char *v12; // eax
//   int v13; // edi
//   int v14; // eax
//   int v15; // esi
//   int v16; // eax
//   wchar_t *StringCSF; // eax
//   int v18; // edi
//   int v19; // esi
//   int v20; // eax
//   int v21; // ebp
//   char *v22; // eax
//   int v23; // eax
//   int v24; // esi
//   int v25; // eax
//   HWND v26; // eax
//   char *v27; // eax
//   int v28; // eax
//   int v29; // esi
//   char *v30; // eax
//   SkirmishDialog *PlayerOption; // eax
//   int PlayerColor; // eax
//   int v33; // eax
//   DLGTEMPLATE *DialogIndirect; // esi
//   int v35; // esi
//   int m; // esi
//   wchar_t *v37; // eax
//   wchar_t *v38; // eax
//   HWND eax134; // eax
//   IUnknown *v39; // esi
//   HWND DlgItem; // eax
//   int v42; // esi
//   char *v43; // eax
//   int edi148; // edi
//   SessionClass *v44; //... [63059 chars total]
// end truncated pseudocode
}
} // namespace gamemd

// 0x5E8EA0
namespace gamemd {
void NetworkLobby::SetupPlayers()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall NetworkLobby::SetupPlayers(wchar_t *this)
{
  CCINIClass *v2; // edi
  __int64 kr00_8_2; // kr00_8
  int v3; // edx
  CCINIClass **v4; // ecx
  CCINIClass *v5; // eax
  bool v6; // al
  signed int v7; // edx
  void *v8; // esi
  CampaignScore *i; // edi
  wchar_t *v10; // ebp
  ReferenceCounted *v11; // edi
  int ResourceID2CSF; // ebx
  int v13; // eax
  HWND DlgItem; // eax
  int ResourceIDCSF; // ebx
  HWND v16; // edi
  int v17; // eax
  int v18; // eax
  HWND v19; // eax
  int v20; // ebx
  wchar_t **v21; // [esp+0h] [ebp-170h]
  wchar_t **v22; // [esp+0h] [ebp-170h]
  wchar_t *v23[3]; // [esp+10h] [ebp-160h] BYREF
  wchar_t Destination[170]; // [esp+1Ch] [ebp-154h] BYREF

  if ( *this )
  {
    wcscpy(Destination, this); /*0x5e8eba*/
    *(_QWORD *)&v2 = *(_QWORD *)&(&g_MatrixTransformState)[190]; /*0x5e8ec5*/
    kr00_8_2 = *(_QWORD *)(&g_MatrixTransformState + 2275); /*0x5e8ed1*/
    v3 = 0; /*0x5e8eda*/
    v4 = (CCINIClass **)&HouseClass_Player.__pad_5568[18396]; /*0x5e8edc*/
    do /*0x5e8f14*/
    {
      v5 = *v4; /*0x5e8ee1*/
      v6 = *v4 == *(&v2 + 1) /*0x5e8f01*/
        || v5
        && v5 != (CCINIClass *)kr00_8_2
        && v5 != (CCINIClass *)HIDWORD(kr00_8_2)
        && v5 != v2
        && *(int *)((char *)v5[1].sectionHead + 3) == -1;
      *((_BYTE *)&v23[1] + v3) = v6; /*0x5e8f06*/
      ++v4; /*0x5e8f0a*/
      ++v3; /*0x5e8f0d*/
    }
    while ( (int)v4 < (int)&HouseClass_Player.__pad_5568[18428] ); /*0x5e8f14*/
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x5e8f1d*/
    {
      if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5e8f28*/
        v7 = 6; /*0x5e8f38*/
      else
        v7 = 2; /*0x5e8f31*/
    }
    else
    {
      v7 = 8; /*0x5e8f3f*/
    }
    memset32(&HouseClass_Player.__pad_5568[18396], (int)*(&g_MatrixTransformState + 2275), v7); /*0x5e8f54*/
    if ( v7 < 8 ) /*0x5e8f59*/
      memset32((void *)(4 * v7 + 11066000), (int)*(&g_MatrixTransformState + 2276), 8 - v7); /*0x5e8f6e*/
    v8 = 0; /*0x5e8f7a*/
    for ( i = (CampaignScore *)wcstok(Destination, (CampaignScore *)&stru_8304AC.unknown50, v21);
          i;
          i = (CampaignScore *)wcstok(0, (CampaignScore *)&stru_8304AC.unknown50, v22) )
    {
      WideString::Assign(v23, i); /*0x5e8f93*/
      v10 = NetworkLobby::DeleteAndZero((const wchar_t **)v23); /*0x5e8fa5*/
      DeleteAndZero::Alt((void **)v23); /*0x5e8fa7*/
      if ( !v10 ) /*0x5e8fae*/
      {
        v10 = Player::FindByName((wchar_t *)i); /*0x5e8fb7*/
        if ( !v10 ) /*0x5e8fbb*/
          v10 = (wchar_t *)*(&g_MatrixTransformState + 2280); /*0x5e8fbd*/
      }
      if ( v10 != (wchar_t *)*(&g_MatrixTransformState + 2281)
        && (!v10
         || v10 == (wchar_t *)*(&g_MatrixTransformState + 2275)
         || v10 == (wchar_t *)*(&g_MatrixTransformState + 2276)
         || v10 == (wchar_t *)*(&g_MatrixTransformState + 2280)
         || v10 == (wchar_t *)*(&g_MatrixTransformState + 2277)
         || v10 == (wchar_t *)*(&g_MatrixTransformState + 2278)
         || v10 == (wchar_t *)*(&g_MatrixTransformState + 2279)
         || *(_DWORD *)((char *)v10 + 107) != -1) )
      {
        v11 = (ReferenceCounted *)Dialog::FindByHandle((void *)0xC2); /*0x5e9017*/
        if ( !v11 ) /*0x5e901b*/
        {
          v11 = (ReferenceCounted *)Dialog::FindByHandle((void *)0xC9); /*0x5e9027*/
          if ( !v11 ) /*0x5e902b*/
          {
            v11 = (ReferenceCounted *)Dialog::FindByHandle((void *)0xBC); /*0x5e9037*/
            if ( !v11 ) /*0x5e903b*/
              v11 = (ReferenceCounted *)Dialog::FindByHandle((void *)0xBD); /*0x5e9047*/
          }
        }
        if ( *((_BYTE *)&v23[1] + (_DWORD)v8) )
        {
          ResourceID2CSF = GetResourceID2CSF(v8); /*0x5e905c*/
          if ( GetComboBoxSelected(v11, ResourceID2CSF, 0xFFFFFFFF) == -3 )
          {
            FillComboBoxRandomOnly((HWND)v11, ResourceID2CSF); /*0x5e9076*/
            if ( v8 )
            {
              if ( v8 == (void *)1 )
              {
                v13 = 1042; /*0x5e908b*/
              }
              else if ( v8 == (void *)2 )
              {
                v13 = 1043; /*0x5e9097*/
              }
              else if ( v8 == (void *)3 )
              {
                v13 = 1044; /*0x5e90a3*/
              }
              else if ( v8 == (void *)4 )
              {
                v13 = 1045; /*0x5e90af*/
              }
              else if ( v8 == (void *)5 )
              {
                v13 = 1046; /*0x5e90bb*/
              }
              else if ( v8 == (void *)6 )
              {
                v13 = 1047; /*0x5e90c7*/
              }
              else
              {
                v13 = v8 != (void *)7 ? -1 : 1048;
              }
            }
            else
            {
              v13 = 1041; /*0x5e907f*/
            }
            DlgItem = GetDlgItem((HWND)v11, v13); /*0x5e90ec*/
            SendMessageA(DlgItem, 0x4F1u, 0, 0); /*0x5e90f3*/
            ResourceIDCSF = GetResourceIDCSF(v8); /*0x5e9100*/
            FillComboBoxFactions((HWND)v11, ResourceIDCSF); /*0x5e9106*/
            SetupSkirmishSpawnLocations((HWND)v11, ResourceIDCSF, -2); /*0x5e910d*/
          }
        }
      }
      else
      {
        v16 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5e911c*/
        if ( !v16 ) /*0x5e9120*/
        {
          v16 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x5e912c*/
          if ( !v16 ) /*0x5e9130*/
          {
            v16 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5e913c*/
            if ( !v16 ) /*0x5e9140*/
              v16 = (HWND)Dialog::FindByHandle((void *)0xBD); /*0x5e914c*/
          }
        }
        if ( !*((_BYTE *)&v23[1] + (_DWORD)v8) )
        {
          *(_DWORD *)&HouseClass_Player.__pad_5568[4 * (_DWORD)v8 + 18396] = v10; /*0x5e915c*/
          v17 = GetResourceID2CSF(v8); /*0x5e9163*/
          SetupComboBoxObserver(v16, v17); /*0x5e916c*/
          if ( v8 )
          {
            if ( v8 == (void *)1 )
            {
              v18 = 1042; /*0x5e9181*/
            }
            else if ( v8 == (void *)2 )
            {
              v18 = 1043; /*0x5e918d*/
            }
            else if ( v8 == (void *)3 )
            {
              v18 = 1044; /*0x5e9199*/
            }
            else if ( v8 == (void *)4 )
            {
              v18 = 1045; /*0x5e91a5*/
            }
            else if ( v8 == (void *)5 )
            {
              v18 = 1046; /*0x5e91b1*/
            }
            else if ( v8 == (void *)6 )
            {
              v18 = 1047; /*0x5e91bd*/
            }
            else
            {
              v18 = v8 != (void *)7 ? -1 : 1048;
            }
          }
          else
          {
            v18 = 1041; /*0x5e9175*/
          }
          v19 = GetDlgItem(v16, v18); /*0x5e91e2*/
          SendMessageA(v19, 0x4F1u, 0, 1); /*0x5e91e9*/
          v20 = GetResourceIDCSF(v8); /*0x5e91f6*/
          FillListBox(v16, v20); /*0x5e91fc*/
          SetupSkirmishSpawnLocations(v16, v20, 8); /*0x5e9207*/
        }
      }
      *(_DWORD *)&HouseClass_Player.__pad_5568[4 * (_DWORD)v8 + 18396] = v10; /*0x5e9211*/
      v8 = (char *)v8 + 1; /*0x5e921a*/
    }
  }
}
}
} // namespace gamemd

// 0x5E9240
namespace gamemd {
int NetworkLobby::AssignPlayerSlot()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall NetworkLobby::AssignPlayerSlot(LPARAM this)
{
  int result; // eax
  LPARAM *v2; // edx

  result = 0; /*0x5e9250*/
  v2 = &MEMORY[0xA8DA90]; /*0x5e9252*/
  while ( (*v2 != MEMORY[0xAC119C] || *(_DWORD *)(this + 107) == -1) /*0x5e926c*/
       && (*v2 != MEMORY[0xAC11B4] || *(_DWORD *)(this + 107) != -1) )
  {
    ++v2; /*0x5e926e*/
    ++result; /*0x5e9271*/
    if ( (int)v2 >= (int)&MEMORY[0xA8DAB0] ) /*0x5e9278*/
      return -1; /*0x5e9280*/
  }
  *(&MEMORY[0xA8DA90] + result) = this; /*0x5e9284*/
  return result; /*0x5e927a*/
}
}
} // namespace gamemd

// 0x5E9290
namespace gamemd {
char NetworkLobby::CheckLobbyConditions()
{
{
    int v2;
    int v3;
    LPARAM *v4;
    LPARAM v5;
    if ( g_GameMode_Current[0] == 4 )
  {
    if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() )
    v2 = 6;
    else
    v2 = 2;
  }
    else
  {
    v2 = 8;
  }
    if ( !g_MPCooperativeState && v2 < 7 )
    ++v2;
    v3 = 0;
    v4 = &g_NetworkPlayerName;
    while ( 1 )
  {
    LOBYTE(v5) = GUID::Compare((char *)(*v4 + 40), (int)this);
    if ( (char)v5 )
    break;
    ++v4;
    ++v3;
    if ( (int)v4 >= (int)&g_PlayerNameListEnd )
    return v5;
  }
    v5 = *(&g_NetworkPlayerName + v3);
    if ( *(int *)(v5 + 107) == -1 )
  {
    *(&g_NetworkPlayerName + v3) = g_Lobby_MaxPlayers;
  }
    else
  {
    v5 = g_HouseClass_ObserverFlags;
    if ( v3 >= v2 )
    v5 = g_Lobby_PlayerCount;
    *(&g_NetworkPlayerName + v3) = v5;
  }
    return v5;
}
}
} // namespace gamemd

// 0x5E9E00
namespace gamemd {
int NetworkLobby::InitLobbyDropdowns()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall NetworkLobby::InitLobbyDropdowns(SessionClass *this)
{
  int i; // ebp
  void *ResourceID4CSF; // esi
  SessionClass *ComboBoxSelectedRaw2; // edi
  int result; // eax

  for ( i = 0; i < 8; ++i ) /*0x5e9e06*/
  {
    ResourceID4CSF = (void *)GetResourceID4CSF((void *)i); /*0x5e9e0f*/
    ComboBoxSelectedRaw2 = (SessionClass *)GetComboBoxSelectedRaw2((HWND)this, (int)ResourceID4CSF, 0xFFFFFFFF); /*0x5e9e1e*/
    result = Dialog::OptionIDToIndex(ResourceID4CSF); /*0x5e9e20*/
    if ( result == *(_DWORD *)&HouseClass_Player.__pad_5568[18392] ) /*0x5e9e2b*/
    {
      SetupLobbyPlayerSlots(this, (int)ResourceID4CSF, (int)ComboBoxSelectedRaw2); /*0x5e9e32*/
      result = *(_DWORD *)&HouseClass_Player.__pad_5568[18384]; /*0x5e9e37*/
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[18384] ) /*0x5e9e3e*/
        result = SessionClass::SetOption2(**(_DWORD **)&HouseClass_Player.__pad_5568[18372], ComboBoxSelectedRaw2); /*0x5e9e48*/
    }
    else
    {
      *(_DWORD *)&HouseClass_Player.__pad_5568[4 * result + 8264] = ComboBoxSelectedRaw2; /*0x5e9e4f*/
    }
  }
  return result; /*0x5e9e5c*/
}
}
} // namespace gamemd

// 0x5EA2A0
namespace gamemd {
HWND * NetworkLobby::Dispatch()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HWND *__thiscall sub_5EA2A0(HWND this)
{
  int i; // esi
  int v2; // eax
  HWND DlgItem; // ebx
  wchar_t *v4; // eax
  HWND v5; // edi
  int v6; // eax
  int v7; // eax
  HWND *result; // eax

  for ( i = 0; i < 8; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v2 = 1747; /*0x5ea2c1*/
          break;
        case 2:
          v2 = 1748; /*0x5ea2cd*/
          break;
        case 3:
          v2 = 1749; /*0x5ea2d9*/
          break;
        case 4:
          v2 = 1750; /*0x5ea2e5*/
          break;
        case 5:
          v2 = 1751; /*0x5ea2f1*/
          break;
        case 6:
          v2 = 1752; /*0x5ea2fd*/
          break;
        default:
          v2 = i != 7 ? -1 : 1753;
          break;
      }
    }
    else
    {
      v2 = 1746; /*0x5ea2b5*/
    }
    DlgItem = GetDlgItem(this, v2); /*0x5ea31f*/
    v4 = (wchar_t *)*(&MEMORY[0xA8DA90] + i); /*0x5ea321*/
    v5 = 0; /*0x5ea328*/
    if ( v4 /*0x5ea36c*/
      && v4 != (wchar_t *)MEMORY[0xAC119C]
      && v4 != (wchar_t *)MEMORY[0xAC11A0]
      && v4 != MEMORY[0xAC11B0]
      && v4 != (wchar_t *)MEMORY[0xAC11B4]
      && v4 != (wchar_t *)MEMORY[0xAC11A4]
      && v4 != (wchar_t *)MEMORY[0xAC11A8]
      && v4 != (wchar_t *)MEMORY[0xAC11AC]
      && !wcscmp(v4, MEMORY[0xA8D610]) )
    {
      v6 = HashTable::Find(MEMORY[0xAC4848], MEMORY[0x8316CC][0], 0); /*0x5ea380*/
LABEL_33:
      v5 = (HWND)v6; /*0x5ea3be*/
      goto LABEL_34; /*0x5ea3be*/
    }
    v7 = *(&MEMORY[0xA8DA90] + i); /*0x5ea382*/
    if ( v7 && (v7 == MEMORY[0xAC11A4] || v7 == MEMORY[0xAC11A8] || v7 == MEMORY[0xAC11AC]) /*0x5ea3a9*/
      || *(_DWORD *)(v7 + 119) == 1 )
    {
      v6 = HashTable::Find(MEMORY[0xAC4848], MEMORY[0x8316D0], 0); /*0x5ea3b9*/
      goto LABEL_33; /*0x5ea3b9*/
    }
LABEL_34:
    result = CacheDialogInvalidate(DlgItem, v5); /*0x5ea3c0*/
  }
  return result; /*0x5ea3d3*/
}
}
} // namespace gamemd

// 0x5EB660
namespace gamemd {
char NetworkLobby::SetupPlayerSlotControls()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall NetworkLobby::SetupPlayerSlotControls(HWND this)
{
  int i; // edi
  int v3; // esi
  LRESULT v4; // eax
  LRESULT v5; // eax
  char v7; // [esp+13h] [ebp-5h]
  int v8; // [esp+14h] [ebp-4h]

  v7 = 0; /*0x5eb671*/
  if ( MEMORY[0xA8B238][0] == 4 ) /*0x5eb676*/
  {
    if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5eb681*/
      v8 = 6; /*0x5eb694*/
    else
      v8 = 2; /*0x5eb68a*/
  }
  else
  {
    v8 = 8; /*0x5eb69e*/
  }
  for ( i = 0; i < 8; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v3 = 1042; /*0x5eb6be*/
          break;
        case 2:
          v3 = 1043; /*0x5eb6ca*/
          break;
        case 3:
          v3 = 1044; /*0x5eb6d6*/
          break;
        case 4:
          v3 = 1045; /*0x5eb6e2*/
          break;
        case 5:
          v3 = 1046; /*0x5eb6ee*/
          break;
        case 6:
          v3 = 1047; /*0x5eb6fa*/
          break;
        default:
          v3 = i != 7 ? -1 : 1048;
          break;
      }
    }
    else
    {
      v3 = 1041; /*0x5eb6b2*/
    }
    v4 = SendDlgItemMessageA(this, v3, 0x147u, 0, 0); /*0x5eb721*/
    v5 = SendDlgItemMessageA(this, v3, 0x150u, v4, 0); /*0x5eb72d*/
    if ( v5 && (v5 == MEMORY[0xAC11A4] || v5 == MEMORY[0xAC11A8] || v5 == MEMORY[0xAC11AC]) ) /*0x5eb749*/
    {
      if ( i >= v8 ) /*0x5eb74f*/
        *(&MEMORY[0xA8DA90] + i) = MEMORY[0xAC11A0]; /*0x5eb765*/
      else
        *(&MEMORY[0xA8DA90] + i) = MEMORY[0xAC119C]; /*0x5eb756*/
      SetupSkirmishPlayerSlots(this, (void *)i, 0); /*0x5eb772*/
      MEMORY[0xA8B27C][i] = -1; /*0x5eb77a*/
      MEMORY[0xA8B29C][i] = -1; /*0x5eb781*/
      MEMORY[0xA8B2BC][i] = -1; /*0x5eb788*/
      v7 = 1; /*0x5eb78f*/
    }
  }
  return v7; /*0x5eb7a2*/
}
}
} // namespace gamemd

// 0x5EDFC0
namespace gamemd {
wchar_t * NetworkLobby::DeleteAndZero()
{
{
    LPARAM v2;
    LPARAM v4;
    wchar_t *v5;
    LPARAM v6;
    LPARAM v7;
    LPARAM v8;
    LPARAM v9;
    void *v10;
    if ( WideString::IsASCII(this) )
  {
    ToWideStringCharAlt((char **)&v10, this);
    if ( String::Equals_Alt((const char **)&v10, DataGlobal_831704[0]) )
    {
    v2 = g_HouseClass_ObserverFlags;
    DeleteAndZero(&v10);
    return (wchar_t *)v2;
    }
    if ( String::Equals_Alt((const char **)&v10, DataGlobal_831708[0]) )
    {
    v4 = g_Lobby_PlayerCount;
    DeleteAndZero(&v10);
    return (wchar_t *)v4;
    }
    if ( String::Equals_Alt((const char **)&v10, DataGlobal_83170C[0]) )
    {
    v5 = g_Lobby_PlayerReady;
    DeleteAndZero(&v10);
    return v5;
    }
    if ( String::Equals_Alt((const char **)&v10, DataGlobal_831710[0]) )
    {
    v6 = g_Lobby_PlayerTeam;
    DeleteAndZero(&v10);
    return (wchar_t *)v6;
    }
    if ( String::Equals_Alt((const char **)&v10, DataGlobal_831714[0]) )
    {
    v7 = g_Lobby_PlayerSide;
    DeleteAndZero(&v10);
    return (wchar_t *)v7;
    }
    if ( String::Equals_Alt((const char **)&v10, DataGlobal_831718[0]) )
    {
    v8 = g_Lobby_PlayerColor;
    DeleteAndZero(&v10);
    return (wchar_t *)v8;
    }
    if ( String::Equals_Alt((const char **)&v10, DataGlobal_83171C) )
    {
    v9 = g_Lobby_MaxPlayers;
    DeleteAndZero(&v10);
    return (wchar_t *)v9;
    }
    DeleteAndZero(&v10);
  }
    return 0;
}
}
} // namespace gamemd

// 0x5EE3A0
namespace gamemd {
char NetworkLobby::FillOptionCombo()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char NetworkLobby_FillOptionCombo()
{
  HWND ResourceID4; // eax
  void *v1; // ecx
  int *v2; // ebx
  int v3; // edi
  HWND v4; // esi
  char *v5; // eax
  char *v6; // eax
  char v8; // [esp+3h] [ebp-9h]
  HWND hDlg; // [esp+4h] [ebp-8h]
  int v10; // [esp+8h] [ebp-4h]

  v8 = 1; /*0x5ee3a8*/
  hDlg = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5ee3b4*/
  if ( hDlg /*0x5ee3ee*/
    || (hDlg = (HWND)Dialog::FindByHandle((void *)0xC9)) != 0
    || (hDlg = (HWND)Dialog::FindByHandle((void *)0xBC)) != 0
    || (ResourceID4 = (HWND)Dialog::FindByHandle((void *)0xBD), (hDlg = ResourceID4) != 0) )
  {
    if ( MEMORY[0xA8B23C] ) /*0x5ee3fb*/
      v8 = *(_BYTE *)(MEMORY[0xA8B23C] + 60); /*0x5ee400*/
    v1 = 0; /*0x5ee40c*/
    v10 = 0; /*0x5ee410*/
    v2 = MEMORY[0xA8B2FC]; /*0x5ee414*/
    do /*0x5ee419*/
    {
      v3 = v2[2533]; /*0x5ee419*/
      ResourceID4 = (HWND)GetResourceID4CSF(v1); /*0x5ee41f*/
      if ( (int)ResourceID4 < 0 ) /*0x5ee426*/
        goto LABEL_19; /*0x5ee426*/
      ResourceID4 = GetDlgItem(hDlg, (int)ResourceID4); /*0x5ee42e*/
      v4 = ResourceID4; /*0x5ee434*/
      if ( !ResourceID4 ) /*0x5ee438*/
        goto LABEL_19; /*0x5ee438*/
      if ( v3 /*0x5ee466*/
        && (v3 == MEMORY[0xAC11A4] || v3 == MEMORY[0xAC11A8] || v3 == MEMORY[0xAC11AC])
        && (v5 = CharToWideString(MEMORY[0xA8B380]), !wcscmp((const wchar_t *)v5, MEMORY[0xA8D610])) )
      {
        if ( !v8 ) /*0x5ee478*/
        {
          *v2 = -2; /*0x5ee47e*/
LABEL_18:
          LOBYTE(ResourceID4) = EnableWindow(v4, 0); /*0x5ee484*/
          goto LABEL_19; /*0x5ee487*/
        }
        LOBYTE(ResourceID4) = EnableWindow(v4, 1); /*0x5ee47c*/
      }
      else
      {
        if ( v3 == MEMORY[0xAC119C] || v3 == MEMORY[0xAC11A0] ) /*0x5ee4b7*/
          goto LABEL_18; /*0x5ee4b7*/
        if ( v10 == MEMORY[0xA8DA8C] ) /*0x5ee4c4*/
        {
          if ( !v8 ) /*0x5ee4cc*/
          {
            EnableWindow(v4, 0); /*0x5ee505*/
LABEL_27:
            v6 = CharToWideString(MEMORY[0xA8B380]); /*0x5ee4db*/
            ResourceID4 = (HWND)wcscmp((const wchar_t *)v6, MEMORY[0xA8D610]); /*0x5ee4eb*/
            if ( !ResourceID4 ) /*0x5ee4f5*/
              LOBYTE(ResourceID4) = SessionClass::SetOption2(v3, -2); /*0x5ee4fb*/
            goto LABEL_19; /*0x5ee500*/
          }
          EnableWindow(v4, 1); /*0x5ee4d1*/
        }
        LOBYTE(ResourceID4) = v8; /*0x5ee4d3*/
        if ( !v8 ) /*0x5ee4d9*/
          goto LABEL_27; /*0x5ee4d9*/
      }
LABEL_19:
      ++v2; /*0x5ee489*/
      v1 = (void *)++v10; /*0x5ee490*/
    }
    while ( (int)v2 < (int)&MEMORY[0xA8B31C] ); /*0x5ee419*/
  }
  return (char)ResourceID4; /*0x5ee4a5*/
}
}
} // namespace gamemd

// 0x5DA080
namespace gamemd {
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
} // namespace gamemd

// 0x5DC170
namespace gamemd {
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
} // namespace gamemd

// 0x5E9470
namespace gamemd {
BOOL NetworkLobby::IsValidPlayerName()
{
{
    return this && this != (wchar_t *)g_HouseClass_ObserverFlags && this != (wchar_t *)g_Lobby_PlayerCount && this != (wchar_t *)g_Lobby_MaxPlayers && this != g_Lobby_PlayerReady;
}
}
} // namespace gamemd

// 0x5E9510
namespace gamemd {
bool NetworkLobby::CheckMinPlayers()
{
{
    int v0;
    int v1;
    LPARAM *i;
    v0 = DataGlobal_A8BB0C;
    if ( DataGlobal_A8B548 < DataGlobal_A8BB0C )
    v0 = DataGlobal_A8B548;
    v1 = 0;
    if ( v0 > 0 )
  {
    for ( i = &g_NetworkPlayerName; *i != g_HouseClass_ObserverFlags; ++i )
    {
    if ( ++v1 >= v0 )
    return g_MPCooperativeState || v0 >= 8 || *(&g_NetworkPlayerName + v0) != g_HouseClass_ObserverFlags;
    }
    return 0;
  }
    return g_MPCooperativeState || v0 >= 8 || *(&g_NetworkPlayerName + v0) != g_HouseClass_ObserverFlags;
}
}
} // namespace gamemd

// 0x5E96A0
namespace gamemd {
char NetworkLobby::CheckPlayerNameValid()
{
{
    wchar_t **v2;
    wchar_t *v3;
    int *v4;
    if ( this == (void *)-2 )
    return 0;
    v2 = (wchar_t **)&g_NetworkPlayerName;
    while ( 1 )
  {
    v3 = *v2;
    if ( *v2 )
    {
    if ( v3 != (wchar_t *)g_HouseClass_ObserverFlags && v3 != (wchar_t *)g_Lobby_PlayerCount && v3 != g_Lobby_PlayerReady && v3 != (wchar_t *)g_Lobby_MaxPlayers && v3 != (wchar_t *)g_Lobby_PlayerTeam && v3 != (wchar_t *)g_Lobby_PlayerSide && v3 != (wchar_t *)g_Lobby_PlayerColor && (void *)SessionClass::GetPlayerColor((int)v3) == this )
      {
    break;
      }
    }
    if ( (int)++v2 >= (int)&g_PlayerNameListEnd )
    {
    v4 = g_CampaignConfig;
    while ( (void *)*v4 != this )
      {
    if ( (int)++v4 >= (int)g_CampaignSideIndex )
    return 0;
      }
    return 1;
    }
  }
    return 1;
}
}
} // namespace gamemd

// 0x5E9720
namespace gamemd {
char NetworkLobby::CheckPlayerNames()
{
{
    wchar_t **v2;
    wchar_t *v3;
    int *v4;
    if ( this == (void *)-2 )
    return 0;
    v2 = (wchar_t **)&g_NetworkPlayerName;
    while ( 1 )
  {
    v3 = *v2;
    if ( *v2 )
    {
    if ( v3 != (wchar_t *)g_HouseClass_ObserverFlags && v3 != (wchar_t *)g_Lobby_PlayerCount && v3 != g_Lobby_PlayerReady && v3 != (wchar_t *)g_Lobby_MaxPlayers && v3 != (wchar_t *)g_Lobby_PlayerTeam && v3 != (wchar_t *)g_Lobby_PlayerSide && v3 != (wchar_t *)g_Lobby_PlayerColor && (void *)SessionClass::GetOption((int)v3) == this )
      {
    break;
      }
    }
    if ( (int)++v2 >= (int)&g_PlayerNameListEnd )
    {
    v4 = g_CampaignSideIndex;
    while ( (void *)*v4 != this )
      {
    if ( (int)++v4 >= (int)g_CampaignFactionSlot )
    return 0;
      }
    return 1;
    }
  }
    return 1;
}
}
} // namespace gamemd

// 0x5EE6A0
namespace gamemd {
void NetworkLobby::UpdateLabels()
{
{
    char *v2;
    int *v3;
    int ResourceID3CSF;
    LRESULT v5;
    if ( this )
  {
    v2 = 0;
    v3 = &g_NetworkPlayerName;
    do
    {
    ResourceID3CSF = GetResourceID3CSF(v2);
    FillComboBoxSides(this, ResourceID3CSF);
    v5 = SetComboBoxSelection(this, ResourceID3CSF, -1);
    if ( *v3 )
    SessionClass::SetOption(*v3, v5);
    ++v3;
    ++v2;
    }
    while ( (int)v3 < (int)&g_PlayerNameListEnd );
  }
}
}
} // namespace gamemd
