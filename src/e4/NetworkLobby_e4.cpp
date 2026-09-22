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
      if ( i + 1 > this->q00C ) /*0x5d425b*/
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
      v18 = MessageListClass::clearMessages(v16, (int)(this + 10), *(this + 7), this->q008, a2, v17); /*0x5d430b*/
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
        v21 = this->q008 + *(this + 5); /*0x5d4357*/
      else
        v21 = this->q008; /*0x5d435b*/
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
      --this->q00C; /*0x5d4375*/
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
char NetworkLobby::CreateGame()
{
  DLGTEMPLATE *DialogIndirect; // esi
  void (__stdcall *v1)(const MSG *); // edi
  void (__stdcall *v2)(const MSG *); // ebx
  int v3; // eax
  signed int v4; // esi
  signed int v5; // eax
  wchar_t *StringCSF; // eax
  HWND Current; // eax
  HWND v8; // esi
  HWND DlgItem; // eax
  HWND v10; // eax
  DLGTEMPLATE *v11; // esi
  int m; // esi
  CellStruct *v14; // esi
  int eax33; // eax
  int n; // esi
  int v16; // esi
  int v17; // eax
  DLGTEMPLATE *v18; // esi
  HWND v19; // eax
  ObjectClass *v22; // esi
  HWND v21; // eax
  HWND eax64; // eax
  ObjectClass *v26; // esi
  HWND v24; // eax
  char v25; // bl
  wchar_t *eax71; // eax
  int v27; // esi
  char *v28; // eax
  char *v29; // eax
  int v30; // eax
  int v31; // ebp
  wchar_t *v32; // eax
  HWND v33; // eax
  HWND v34; // esi
  HWND v35; // eax
  CellStruct *v36; // ecx
  char *v37; // eax
  SkirmishDialog *PlayerOption; // eax
  int PlayerColor; // eax
  int v40; // eax
  int v41; // eax
  SessionClass *v44; // esi
  char *v43; // eax
  WinModemClass *v46; // edx
  int v45; // edi
  int eax115; // eax
  DLGTEMPLATE *v47; // esi
  int v48; // ebp
  int v49; // edi
  int v50; // eax
  int v51; // ecx
  wchar_t *v52; // eax
  HWND v53; // eax
  HWND v54; // eax
  void (__stdcall *v55)(HWND, BOOL); // ebx
  int v56; // esi
  char v57; // cl
  wchar_t *v58; // eax
  HWND v59; // eax
  HWND v60; // eax
  SkirmishDialog *v63; // esi
  int PlayerCountMap; // eax
  wchar_t *eax138; // eax
  HWND v64; // eax
  HWND v65; // eax
  CampaignScore *v68; // eax
  HWND v67; // eax
  HWND eax140a; // eax
  HWND v69; // eax
  int v70; // ebx
  int i; // edi
  SessionClass *v74; // esi
  wchar_t *v73; // eax
  HWND eax157a; // eax
  HWND v75; // eax
  int v76; // eax
  int v77; // ecx
  wchar_t *v78; // eax
  HWND v79; // eax
  HWND v80; // eax
  int v82; // esi
  int v83; // esi
  int v84; // ecx
  SkirmishDialog *v87; // ebx
  int v86; // edi
  int j; // esi
  CellStruct *v88; // ecx
  ObjectClass *v90; // esi
  int eax194; // eax
  int v91; // ebx
  int v92; // esi
  int v93; // esi
  int v94; // eax
  int v95; // edi
  int k; // esi
  int v97; // eax
  CellStruct *v99; // esi
  int eax217; // eax
  int v100; // eax
  UINT *p_message; // ecx
  int v102; // esi
  int v103; // eax
  int v104; // [esp-8h] [ebp-3F4h]
  int v105; // [esp-4h] [ebp-3F0h]
  DWORD v106; // [esp+10h] [ebp-3DCh]
  DWORD v107; // [esp+10h] [ebp-3DCh]
  DWORD v108; // [esp+1Ch] [ebp-3D0h]
  DWORD Ticks; // [esp+1Ch] [ebp-3D0h]
  wchar_t *v110; // [esp+28h] [ebp-3C4h] BYREF
  SkirmishDialog *v111; // [esp+2Ch] [ebp-3C0h]
  struct tagMSG Msg; // [esp+30h] [ebp-3BCh] BYREF
  _DWORD v113[113]; // [esp+5Ch] [ebp-390h] BYREF
  __int16 v114; // [esp+220h] [ebp-1CCh]
  char v115; // [esp+222h] [ebp-1CAh]
  _DWORD v116[113]; // [esp+224h] [ebp-1C8h] BYREF
  __int16 v117; // [esp+3E8h] [ebp-4h]
  char v118; // [esp+3EAh] [ebp-2h]

  *(&g_MatrixTransformState + 1303) = (CoordStruct *)GameConfig::ComputeHash();
  LoadArtINI();
  *(&g_MatrixTransformState + 1304) = (CoordStruct *)unknown_libname_29();
  *(&g_MatrixTransformState + 1305) = (CoordStruct *)unknown_libname_30();
  NetworkLobby::ValidateSerialNumber((char *)&g_MatrixTransformState + 4460);
  Network::SetConnectionParams((int *)&HouseClass_Player.__pad_5568[22284], (IUnknown *)0x1E, -1, 600, (CellStruct *)1);
  HouseClass_Player.__pad_5568[17240] = 0;
  *(_WORD *)&HouseClass_Player.__pad_5568[17244] = 0;
  HouseClass_Player.__pad_5568[17242] = 1;
  *((_BYTE *)&g_MatrixTransformState + 5208) = 0;
  DialogClass::RegisterWinClasses();
  DialogIndirect = (DLGTEMPLATE *)CreateDialogIndirect(
                                    g_hInstance,
                                    (HWND)0xBB,
                                    g_hWnd,
                                    (DLGPROC)NetworkSettings::DlgProc,
                                    0);
  SetupDialog((HWND)DialogIndirect, 187);
  ShowWindow((HWND)DialogIndirect, 1);
  GameSetup::DisplayPlayers(0);
  v1 = (void (__stdcall *)(const MSG *))TranslateMessage;
  v2 = (void (__stdcall *)(const MSG *))DispatchMessageA;
  v3 = 0;
  *(_QWORD *)(&g_MatrixTransformState + 1299) = 0;
  *(&g_MatrixTransformState + 1301) = 0;
  stru_830620.__pad_BC0[148] = 1;
  while ( 1 )
  {
    if ( !v3 )
    {
      do
      {
        Network::ReceiveLoop(&HouseClass_Player.__pad_5568[22284]);
        Sleep(0);
        Event::Dispatch();
        Network::ReceiveLoop(&HouseClass_Player.__pad_5568[22284]);
        ScreenSaver::Process(0, (int)v2, 0);
        ++unk_AA0430;
        while ( GameLoopMessagePump(&Msg, 0, 0, 0, 1u) )
        {
          v1(&Msg);
          v2(&Msg);
        }
        Event::Dispatch();
        v3 = (int)*(&g_MatrixTransformState + 1299);
        if ( *(&g_MatrixTransformState + 1299) )
          break;
        if ( Dialog::GetCurrent() )
        {
          SendNetworkHeartbeat(0, 0, 0, 0);
          NetworkLobby::MessageHandler();
          if ( Dialog::GetCurrentType() == 188 )
            CheckGameSettingsChanged(0, 0);
          CheckNetworkGameTimeout();
          v4 = (signed int)*(&g_MatrixTransformState + 1290);
          if ( *(&g_MatrixTransformState + 1288) != (CoordStruct *)-1 )
          {
            v5 = Timer::GetTicks() - (_DWORD)*(&g_MatrixTransformState + 1288);
            if ( v5 >= v4 )
              goto LABEL_13;
            v4 -= v5;
          }
          if ( !v4 )
          {
LABEL_13:
            if ( *(&g_MatrixTransformState + 1301) == (CoordStruct *)1 )
            {
              Debug::Log();
              BroadcastNetworkMessage((int)*(&g_MatrixTransformState + 1300));
              *(&g_MatrixTransformState + 1301) = 0;
              SendNetworkHeartbeat(0, 0, 1, 0);
              StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_DFC[144], 0, &stru_830620.__pad_BC0[168], 1406);
              Dialog::ShowMessage(-1, (size_t)StringCSF);
              PlayVocClass(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1712), 0x2000, 1.0, 0);
              Current = Dialog::GetCurrent();
              v8 = Current;
              if ( Current )
              {
                EnableWindow(Current, 1);
                DlgItem = GetDlgItem(v8, 1345);
                if ( DlgItem )
                  EnableWindow(DlgItem, 1);
              }
            }
          }
        }
        v3 = (int)*(&g_MatrixTransformState + 1299);
      }
      while ( !*(&g_MatrixTransformState + 1299) );
    }
    if ( v3 == 1472 || v3 == 2 )
      break;
LABEL_53:
    if ( *(&g_MatrixTransformState + 1299) == (CoordStruct *)1741 )
    {
      HouseClass_Player.__pad_5568[17240] = 0;
      SaveConfigWOL((int)&HouseClass_Player.__pad_5568[8068]);
      if ( SendNetworkJoinRequest((int)*(&g_MatrixTransformState + 1300), *(&g_MatrixTransformState + 2222) != 0) )
      {
        *(&g_MatrixTransformState + 1301) = (CoordStruct *)1;
      }
      else
      {
        v19 = Dialog::GetCurrent();
        v22 = (ObjectClass *)v19;
        if ( v19 )
        {
          EnableWindow(v19, 1);
          v21 = GetDlgItem((HWND)v22, 1345);
          if ( v21 )
            EnableWindow(v21, 1);
        }
      }
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072] )
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 36))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]);
    }
    if ( *(&g_MatrixTransformState + 1299) == (CoordStruct *)1742 )
    {
      HouseClass_Player.__pad_5568[17240] = 0;
      SaveConfigWOL((int)&HouseClass_Player.__pad_5568[8068]);
      if ( SendNetworkJoinRequest((int)*(&g_MatrixTransformState + 1300), 1u) )
      {
        *(&g_MatrixTransformState + 1301) = (CoordStruct *)1;
      }
      else
      {
        eax64 = Dialog::GetCurrent();
        v26 = (ObjectClass *)eax64;
        if ( eax64 )
        {
          EnableWindow(eax64, 1);
          v24 = GetDlgItem((HWND)v26, 1345);
          if ( v24 )
            EnableWindow(v24, 1);
        }
      }
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072] )
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 36))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]);
    }
    if ( *(&g_MatrixTransformState + 1299) != (CoordStruct *)1740 )
      goto LABEL_83;
    v25 = 1;
    if ( !strlen(&HouseClass_Player.__pad_5568[8396]) )
    {
      eax71 = GetStringCSF((wchar_t *)&stru_830620.__pad_DFC[128], 0, &stru_830620.__pad_BC0[168], 1667);
      ShowDialogConfirm((CampaignScore *)eax71, 0, sub_5DAF20, 0);
      v25 = 0;
    }
    v27 = 0;
    if ( *(int *)&HouseClass_Player.__pad_5568[18360] > 0 )
    {
      while ( 1 )
      {
        if ( v25 )
        {
          v28 = ToWideStringChar(*(IUnknown **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18348] + 4 * v27));
          if ( !_strcmpi(v28, &HouseClass_Player.__pad_5568[8396]) )
            break;
        }
        if ( ++v27 >= *(int *)&HouseClass_Player.__pad_5568[18360] )
          goto LABEL_76;
      }
      v32 = GetStringCSF((wchar_t *)&stru_830620.__pad_DFC[100], 0, &stru_830620.__pad_BC0[168], 1677);
      ShowDialogConfirm((CampaignScore *)v32, 0, sub_5DAF20, 0);
LABEL_80:
      v33 = Dialog::GetCurrent();
      v34 = v33;
      if ( v33 )
      {
        EnableWindow(v33, 1);
        v35 = GetDlgItem(v34, 1345);
        if ( v35 )
          EnableWindow(v35, 1);
      }
      goto LABEL_83;
    }
LABEL_76:
    if ( !v25 )
      goto LABEL_80;
    v29 = CharToWideString(&HouseClass_Player.__pad_5568[8396]);
    wcscpy((wchar_t *)&HouseClass_Player.__pad_5568[17244], (const wchar_t *)v29);
    HouseClass_Player.__pad_5568[17242] = 1;
    HouseClass_Player.__pad_5568[17240] = 0;
    *(_DWORD *)&HouseClass_Player.__pad_5568[8096] = 0;
    *(_DWORD *)&HouseClass_Player.__pad_5568[9744] = VersionInfo::Read((int)&HouseClass_Player.__pad_5568[23084]);
    LoadScenarioClassByIndex(*(int *)&HouseClass_Player.__pad_5568[8096]);
    CloseDialog(0, 0);
    *(&g_MatrixTransformState + 1299) = 0;
    PtrVector::Destroy(&HouseClass_Player.__pad_5568[18368]);
    v30 = __2_YAPAXI_Z(0x85u);
    v31 = v30;
    if ( v30 )
      Waypoint::InitInvalid((_BYTE *)(v30 + 40));
    else
      v31 = 0;
    memset((void *)v31, 0, 0x84u);
    *(_BYTE *)(v31 + 132) = 0;
    v37 = CharToWideString(&HouseClass_Player.__pad_5568[8396]);
    wcscpy((wchar_t *)v31, (const wchar_t *)v37);
    strcpy((char *)(v31 + 52), (const char *)&g_MatrixTransformState + 4460);
    PlayerOption = (SkirmishDialog *)Session::GetPlayerOption(&HouseClass_Player.__pad_5568[8068]);
    SessionClass::SetPlayerOption(v31, PlayerOption);
    PlayerColor = Session::GetPlayerColor(&HouseClass_Player.__pad_5568[8068]);
    SessionClass::SetPlayerColor(v31, PlayerColor);
    SessionClass::SetOption(v31, (SessionClass *)0xFFFFFFFE);
    SessionClass::SetOption2(v31, (SessionClass *)0xFFFFFFFE);
    *(_DWORD *)(v31 + 119) = 1;
    *(_DWORD *)(v31 + 107) = 0;
    *(_DWORD *)&stru_830620.__pad_DFC[648] = 7;
    if ( *((_BYTE *)&g_MatrixTransformState + 5209) )
    {
      *(_DWORD *)&stru_830620.__pad_DFC[648] = 0;
      *(_DWORD *)(v31 + 107) = -1;
    }
    else if ( SessionClass::GetPlayerSide(v31) == -3 )
    {
      SessionClass::SetPlayerOption(v31, (SkirmishDialog *)0xFFFFFFFE);
    }
    if ( *(int *)&HouseClass_Player.__pad_5568[18384] < *(int *)&HouseClass_Player.__pad_5568[18376]
      || (HouseClass_Player.__pad_5568[18381] || !*(_DWORD *)&HouseClass_Player.__pad_5568[18376])
      && *(int *)&HouseClass_Player.__pad_5568[18388] > 0
      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player.__pad_5568[18368] + 8))(
           &HouseClass_Player.__pad_5568[18368],
           *(_DWORD *)&HouseClass_Player.__pad_5568[18376] + *(_DWORD *)&HouseClass_Player.__pad_5568[18388],
           0) )
    {
      v40 = (*(_DWORD *)&HouseClass_Player.__pad_5568[18384])++;
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v40) = v31;
    }
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072] )
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 36))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]);
    Game::ResetFlags();
    Network::InitPlayerSlots();
    NetworkShare::GetField(0);
    if ( !*(_DWORD *)&stru_830620.__pad_DFC[648] )
    {
      SessionClass::SetPlayerOption(*(int *)&HouseClass_Player.__pad_5568[18396], (SkirmishDialog *)0xFFFFFFFD);
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18396] + 107) = -1;
    }
    *(&g_MatrixTransformState + 1301) = (CoordStruct *)2;
    v41 = __2_YAPAXI_Z(0x85u);
    v44 = (SessionClass *)v41;
    if ( v41 )
      Waypoint::InitInvalid((_BYTE *)(v41 + 40));
    else
      v44 = 0;
    v43 = CharToWideString(&HouseClass_Player.__pad_5568[8396]);
    wcscpy((wchar_t *)v44, (const wchar_t *)v43);
    v44->Config[4] = *(_DWORD *)&HouseClass_Player.__pad_5568[17744];
    v44->Config[5] = *(_DWORD *)&HouseClass_Player.__pad_5568[17748];
    v46 = *(WinModemClass **)&HouseClass_Player.__pad_5568[17752];
    LOBYTE(v44->UniqueID) = 1;
    v44->Config[6] = (int)v46;
    v45 = *(_DWORD *)&stru_87C374.__pad_579C[22576];
    if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 )
      v45 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568];
    *(int *)((char *)&v44->UniqueID + 1) = v45;
    if ( *(int *)&HouseClass_Player.__pad_5568[18360] < *(int *)&HouseClass_Player.__pad_5568[18352]
      || (HouseClass_Player.__pad_5568[18357] || !*(_DWORD *)&HouseClass_Player.__pad_5568[18352])
      && *(int *)&HouseClass_Player.__pad_5568[18364] > 0
      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player.__pad_5568[18344] + 8))(
           &HouseClass_Player.__pad_5568[18344],
           *(_DWORD *)&HouseClass_Player.__pad_5568[18352] + *(_DWORD *)&HouseClass_Player.__pad_5568[18364],
           0) )
    {
      eax115 = (*(_DWORD *)&HouseClass_Player.__pad_5568[18360])++;
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18348] + 4 * eax115) = v44;
    }
    *(&g_MatrixTransformState + 1300) = (CoordStruct *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18360] - 1);
    LoadingScreen::Init();
    v47 = (DLGTEMPLATE *)CreateDialogIndirect(g_hInstance, (HWND)0xBC, g_hWnd, NetworkLobby::DlgProc, 0);
    SetupDialog((HWND)v47, 188);
    SendMessageA((HWND)v47, 0x4A9u, 0, 1);
    ShowWindow((HWND)v47, 1);
LABEL_83:
    if ( *(&g_MatrixTransformState + 1299) == (CoordStruct *)1 && Dialog::GetCurrentType() == 189 )
    {
      while ( CloseDialog(0, 0) == 1 )
        ;
      CleanupFileTree();
      if ( *(&g_MatrixTransformState + 1301) != (CoordStruct *)3 )
      {
        if ( *(&g_MatrixTransformState + 1301) == (CoordStruct *)4 )
          SynchronizeMultiplayerGameStart(0);
LABEL_172:
        *(&g_MatrixTransformState + 1299) = 0;
        Scenario::PreGameInit(v36);
        v82 = 2;
        *(_DWORD *)&HouseClass_Player.__pad_5568[8864] = 5;
        *(_DWORD *)&HouseClass_Player.__pad_5568[18664] = 0;
        *(_DWORD *)&HouseClass_Player.__pad_5568[8888] = 0;
        *(_DWORD *)&HouseClass_Player.__pad_5568[8892] = 0;
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8088] == 2 )
        {
          v82 = 10;
          if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8864]
             * ((((unsigned int)Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284]) >> 3)
               + *(_DWORD *)&HouseClass_Player.__pad_5568[8864]
               - 1)
              / *(_DWORD *)&HouseClass_Player.__pad_5568[8864]) > 0xA )
          {
            *(_DWORD *)&HouseClass_Player.__pad_5568[8860] = *(_DWORD *)&HouseClass_Player.__pad_5568[8864]
                                                           * ((((unsigned int)Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284]) >> 3)
                                                             + *(_DWORD *)&HouseClass_Player.__pad_5568[8864]
                                                             - 1)
                                                            / *(_DWORD *)&HouseClass_Player.__pad_5568[8864]);
LABEL_235:
            HouseClass_Player.__pad_5568[17242] = 0;
            SaveConfigWOL((int)&HouseClass_Player.__pad_5568[8068]);
            return 1;
          }
        }
        else if ( Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284]) / 8 > 2 )
        {
          *(_DWORD *)&HouseClass_Player.__pad_5568[8860] = Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284])
                                                         / 8;
          goto LABEL_235;
        }
        *(_DWORD *)&HouseClass_Player.__pad_5568[8860] = v82;
        goto LABEL_235;
      }
      if ( SynchronizeMultiplayerGameStart(0) )
      {
        *((_BYTE *)&g_MatrixTransformState + 5208) = 1;
        goto LABEL_172;
      }
      v2 = (void (__stdcall *)(const MSG *))DispatchMessageA;
      v1 = (void (__stdcall *)(const MSG *))TranslateMessage;
      v3 = 2;
      *((_BYTE *)&g_MatrixTransformState + 5208) = 0;
      *(&g_MatrixTransformState + 1299) = (CoordStruct *)2;
    }
    else
    {
      if ( *(&g_MatrixTransformState + 1299) == (CoordStruct *)1416 )
      {
        *((_BYTE *)&g_MatrixTransformState + 5208) = 0;
        SaveConfigWOL((int)&HouseClass_Player.__pad_5568[8068]);
      }
      v48 = *(_DWORD *)&HouseClass_Player.__pad_5568[18384];
      v49 = 0;
      if ( *(int *)&HouseClass_Player.__pad_5568[18384] > 0 )
      {
        v50 = *(_DWORD *)&HouseClass_Player.__pad_5568[18372];
        v51 = *(_DWORD *)&HouseClass_Player.__pad_5568[18384];
        do
        {
          if ( *(_DWORD *)(*(_DWORD *)v50 + 107) == -1 )
            ++v49;
          v50 += 4;
          --v51;
        }
        while ( v51 );
      }
      if ( *(&g_MatrixTransformState + 1299) == (CoordStruct *)1416 )
      {
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[18384] - v49 > 1 )
        {
          v55 = (void (__stdcall *)(HWND, BOOL))EnableWindow;
        }
        else
        {
          v52 = GetStringCSF((wchar_t *)&stru_830620.__pad_DFC[84], 0, &stru_830620.__pad_BC0[168], 1864);
          Dialog::ShowMessage(-1, (size_t)v52);
          *(&g_MatrixTransformState + 1299) = 0;
          v53 = Dialog::GetCurrent();
          v54 = GetDlgItem(v53, 1416);
          v55 = (void (__stdcall *)(HWND, BOOL))EnableWindow;
          EnableWindow(v54, 1);
          if ( *(&g_MatrixTransformState + 1299) != (CoordStruct *)1416 )
            goto LABEL_136;
        }
        v56 = 1;
        v57 = 0;
        if ( v48 > 1 )
        {
          do
          {
            if ( !*(_DWORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v56) + 127) )
            {
              v104 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v56);
              v58 = GetStringCSF((wchar_t *)&stru_830620.__pad_DFC[68], 0, &stru_830620.__pad_BC0[168], 1876);
              Dialog::ShowMessage(-1, (size_t)v58, v104, &HouseClass_Player.__pad_5568[8302]);
              v57 = 1;
            }
            ++v56;
          }
          while ( v56 < v48 );
          if ( v57 )
          {
            *(&g_MatrixTransformState + 1299) = 0;
            v59 = Dialog::GetCurrent();
            v60 = GetDlgItem(v59, 1416);
            v55(v60, 1);
          }
        }
      }
      else
      {
        v55 = (void (__stdcall *)(HWND, BOOL))EnableWindow;
      }
LABEL_136:
      v63 = *(SkirmishDialog **)&HouseClass_Player.__pad_5568[8072];
      v111 = *(SkirmishDialog **)&HouseClass_Player.__pad_5568[8072];
      if ( *(&g_MatrixTransformState + 1299) == (CoordStruct *)1416 )
      {
        PlayerCountMap = ReadPlayerCountMap(*(int *)&HouseClass_Player.__pad_5568[8096]);
        if ( PlayerCountMap < v48 + *(_DWORD *)&HouseClass_Player.__pad_5568[8128] - v49 )
        {
          v105 = PlayerCountMap;
          eax138 = GetStringCSF(g_Str_TXT_SCENARIO_TOO_SMALL, 0, &stru_830620.__pad_BC0[168], 1895);
          Dialog::ShowMessage(-1, (size_t)eax138, v105);
          v64 = Dialog::GetCurrent();
          v65 = GetDlgItem(v64, 1416);
          v55(v65, 1);
          *(&g_MatrixTransformState + 1299) = 0;
        }
        unknown_libname_74(&v110);
        if ( !(*(unsigned __int8 (__thiscall **)(SkirmishDialog *, wchar_t **))(*(_DWORD *)v63->__pad_0 + 20))(
                v63,
                &v110) )
        {
          v68 = WideString::GetOrEmpty(&v110);
          Dialog::ShowMessage(-1, (size_t)v68);
          v67 = Dialog::GetCurrent();
          eax140a = GetDlgItem(v67, 1416);
          v55(eax140a, 1);
          *(&g_MatrixTransformState + 1299) = 0;
        }
        DeleteAndZero::Alt((void **)&v110);
      }
      v69 = Dialog::GetCurrent();
      NetworkLobby::InitLobbyDropdowns(v69);
      if ( *(&g_MatrixTransformState + 1299) == (CoordStruct *)1416 )
      {
        v70 = -1;
        for ( i = 0; i < 8; ++i )
        {
          v74 = *(SessionClass **)&HouseClass_Player.__pad_5568[4 * i + 18396];
          if ( NetworkLobby::IsValidPlayerName((wchar_t *)v74) )
          {
            if ( !IsKnownPointer((wchar_t *)v74) || *(_DWORD *)&v74->__pad_50[27] == -1 )
            {
              if ( Player::IsObserver(v74)
                && *(_DWORD *)&v74->__pad_50[27] != -1
                && v70 != *(_DWORD *)&HouseClass_Player.__pad_5568[4 * i + 8264] )
              {
                goto LABEL_158;
              }
            }
            else if ( i )
            {
              if ( v70 != *(_DWORD *)&v74->__pad_50[19] )
                goto LABEL_158;
            }
            else
            {
              v70 = *(_DWORD *)&v74->__pad_50[19];
            }
          }
        }
        if ( v70 < 0 || (*(unsigned __int8 (__thiscall **)(SkirmishDialog *))(*(_DWORD *)v111->__pad_0 + 4))(v111) )
        {
LABEL_158:
          if ( *(&g_MatrixTransformState + 1299) == (CoordStruct *)1416 )
          {
            v76 = 0;
            if ( v48 <= 0 )
              goto LABEL_178;
            v77 = *(_DWORD *)&HouseClass_Player.__pad_5568[18372];
            while ( *(_DWORD *)(*(_DWORD *)v77 + 119) )
            {
              ++v76;
              v77 += 4;
              if ( v76 >= v48 )
                goto LABEL_178;
            }
            Network_Create();
            v78 = GetStringCSF((wchar_t *)&stru_830620.__pad_DFC[28], 0, &stru_830620.__pad_BC0[168], 1964);
            Dialog::ShowMessage(-1, (size_t)v78);
            *(&g_MatrixTransformState + 1299) = 0;
            v79 = Dialog::GetCurrent();
            v80 = GetDlgItem(v79, 1416);
            EnableWindow(v80, 1);
            if ( *(&g_MatrixTransformState + 1299) == (CoordStruct *)1416 )
            {
LABEL_178:
              v83 = 0;
              for ( *((_BYTE *)&g_MatrixTransformState + 5208) = 1;
                    v83 < *(int *)&HouseClass_Player.__pad_5568[18384];
                    ++v83 )
              {
                v84 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v83);
                if ( *(_DWORD *)(v84 + 107) == -1 )
                  SessionClass::SetPlayerColor(v84, -2);
              }
              v87 = v111;
              (*(void (__thiscall **)(SkirmishDialog *))(*(_DWORD *)v111->__pad_0 + 104))(v111);
              Player::RandomAssign(&HouseClass_Player.__pad_5568[8068]);
              CheckGameSettingsChanged(1, 1);
              memset(v113, 0, sizeof(v113));
              v114 = 0;
              v115 = 0;
              v113[0] = 22;
              strcpy((char *)&v113[1], &HouseClass_Player.__pad_5568[8396]);
              Player::BuildListString((wchar_t *)((char *)&v113[11] + 3));
              v86 = *(_DWORD *)&HouseClass_Player.__pad_5568[18384];
              for ( j = 1; j < v86; ++j )
              {
                Network::SendMessage(
                  (int)&HouseClass_Player.__pad_5568[22284],
                  (int)v113,
                  455,
                  1,
                  *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * j) + 40,
                  0,
                  0);
                Event::Dispatch();
              }
              (*(void (__thiscall **)(SkirmishDialog *))(*(_DWORD *)v87->__pad_0 + 100))(v87);
              v90 = (ObjectClass *)*(&g_MatrixTransformState + 2257);
              if ( *(&g_MatrixTransformState + 2257) )
              {
                ComPtr::Dtor(*(&g_MatrixTransformState + 2257));
                __3_YAXPAX_Z(v90);
                *(&g_MatrixTransformState + 2257) = 0;
              }
              Scenario::PreGameInit(v88);
              *(_DWORD *)&HouseClass_Player.__pad_5568[8864] = 5;
              *(_DWORD *)&HouseClass_Player.__pad_5568[18664] = 0;
              *(_DWORD *)&HouseClass_Player.__pad_5568[8888] = 0;
              *(_DWORD *)&HouseClass_Player.__pad_5568[8892] = 0;
              if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8088] == 2 )
              {
                if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8864]
                   * ((((unsigned int)Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284]) >> 3)
                     + *(_DWORD *)&HouseClass_Player.__pad_5568[8864]
                     - 1)
                    / *(_DWORD *)&HouseClass_Player.__pad_5568[8864]) <= 0xA )
                  *(_DWORD *)&HouseClass_Player.__pad_5568[8860] = 10;
                else
                  *(_DWORD *)&HouseClass_Player.__pad_5568[8860] = *(_DWORD *)&HouseClass_Player.__pad_5568[8864]
                                                                 * ((((unsigned int)Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284]) >> 3)
                                                                   + *(_DWORD *)&HouseClass_Player.__pad_5568[8864]
                                                                   - 1)
                                                                  / *(_DWORD *)&HouseClass_Player.__pad_5568[8864]);
              }
              else if ( Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284]) / 8 <= 2 )
              {
                *(_DWORD *)&HouseClass_Player.__pad_5568[8860] = 2;
              }
              else
              {
                *(_DWORD *)&HouseClass_Player.__pad_5568[8860] = Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284])
                                                               / 8;
              }
              if ( (unsigned int)(Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284]) + 2) >= 0x1E )
                eax194 = Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284]) + 2;
              else
                eax194 = 30;
              v91 = -1;
              Network::SetConnectionParams(
                (int *)&HouseClass_Player.__pad_5568[22284],
                (IUnknown *)eax194,
                -1,
                600,
                (CellStruct *)1);
              v92 = 1;
              memset(v116, 0, sizeof(v116));
              v117 = 0;
              v118 = 0;
              v116[0] = 11;
              *(_DWORD *)((char *)&v116[11] + 3) = *(_DWORD *)&HouseClass_Player.__pad_5568[8860];
              if ( *(int *)&HouseClass_Player.__pad_5568[18384] > 1 )
              {
                do
                  Network::SendMessage(
                    (int)&HouseClass_Player.__pad_5568[22284],
                    (int)v116,
                    455,
                    1,
                    *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v92++) + 40,
                    0,
                    0);
                while ( v92 < *(int *)&HouseClass_Player.__pad_5568[18384] );
              }
              Ticks = Timer::GetTicks();
              if ( Network::GetQueueCount((int)&HouseClass_Player.__pad_5568[22284]) <= 0 )
              {
LABEL_204:
                memset(&Msg, 0, 0x20u);
                v95 = 0;
                LOBYTE(v91) = 0;
                Debug::Log();
                Timer::GetTicks();
                v107 = Timer::GetTicks();
                do
                {
                  Event::Dispatch();
                  if ( Network::Send(
                         (int)&HouseClass_Player.__pad_5568[22284],
                         (int)&HouseClass_Player.__pad_5568[17284],
                         (int)&HouseClass_Player.__pad_5568[17740],
                         (TechnoTypeClass *)&HouseClass_Player.__pad_5568[17744],
                         (int)&HouseClass_Player.__pad_5568[17756]) )
                  {
                    if ( *(_WORD *)&HouseClass_Player.__pad_5568[17756] == 0xAA04 )
                    {
                      for ( k = 1; k < *(int *)&HouseClass_Player.__pad_5568[18384]; ++k )
                      {
                        if ( GUID::Compare(
                               (char *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * k) + 40),
                               (int)&HouseClass_Player.__pad_5568[17744])
                          && !*((_DWORD *)&Msg.hwnd + k) )
                        {
                          v97 = *(_DWORD *)&HouseClass_Player.__pad_5568[17284];
                          if ( *(_DWORD *)&HouseClass_Player.__pad_5568[17284] == 16 )
                          {
                            Debug::Log();
                            v97 = *(_DWORD *)&HouseClass_Player.__pad_5568[17284];
                            *((_DWORD *)&Msg.hwnd + k) = *(_DWORD *)&HouseClass_Player.__pad_5568[17284];
                            LOBYTE(v91) = 1;
                            ++v95;
                          }
                          if ( v97 == 19 )
                          {
                            Debug::Log();
                            *((_DWORD *)&Msg.hwnd + k) = *(_DWORD *)&HouseClass_Player.__pad_5568[17284];
                            ++v95;
                          }
                        }
                      }
                    }
                  }
                  if ( v95 >= *(_DWORD *)&HouseClass_Player.__pad_5568[18384] - 1 )
                    break;
                  v99 = (CellStruct *)600;
                  if ( v107 != -1 )
                  {
                    eax217 = Timer::GetTicks() - v107;
                    if ( eax217 >= 600 )
                      break;
                    v99 = (CellStruct *)(600 - eax217);
                  }
                }
                while ( v99 );
                CloseDialog(0, 0);
                CleanupFileTree();
                Screen::Capture(1, 0, v91, 43524);
                if ( (_BYTE)v91 )
                {
                  *(_DWORD *)&HouseClass_Player.__pad_5568[10332] = 0;
                  *(_DWORD *)&HouseClass_Player.__pad_5568[10336] = 0;
                  *(_DWORD *)&HouseClass_Player.__pad_5568[10340] = 0;
                  v100 = 1;
                  if ( *(int *)&HouseClass_Player.__pad_5568[18384] > 1 )
                  {
                    p_message = &Msg.message;
                    do
                    {
                      if ( *p_message == 16 )
                        HouseClass_Player.__pad_5568[(*(_DWORD *)&HouseClass_Player.__pad_5568[10340])++ + 10332] = v100;
                      ++v100;
                      ++p_message;
                    }
                    while ( v100 < *(int *)&HouseClass_Player.__pad_5568[18384] );
                  }
                  SendNetworkFile((char *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4700), 3, 0, 1);
                  if ( IsRandMap::Sed2((int)&HouseClass_Player.__pad_5568[8068]) )
                    SendNetworkFile(stru_829ABC.__pad_0, 3, 0, 1);
                }
                if ( (unsigned int)(8 * Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284])) >= 0x78 )
                  v102 = 8 * Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284]);
                else
                  v102 = 120;
                if ( (unsigned int)(Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284]) + 2) <= 0x1E )
                  v103 = 30;
                else
                  v103 = Network::GetLobbyStatus(&HouseClass_Player.__pad_5568[22284]) + 2;
                Network::SetConnectionParams(
                  (int *)&HouseClass_Player.__pad_5568[22284],
                  (IUnknown *)v103,
                  -1,
                  v102,
                  (CellStruct *)1);
                goto LABEL_235;
              }
              while ( 2 )
              {
                v93 = 1200;
                if ( Ticks == -1 )
                {
LABEL_202:
                  if ( v93 )
                    goto LABEL_204;
                }
                else
                {
                  v94 = Timer::GetTicks() - Ticks;
                  if ( v94 < 1200 )
                  {
                    v93 = 1200 - v94;
                    goto LABEL_202;
                  }
                }
                Event::Dispatch();
                if ( Network::GetQueueCount((int)&HouseClass_Player.__pad_5568[22284]) <= 0 )
                  goto LABEL_204;
                continue;
              }
            }
          }
        }
        else
        {
          v73 = GetStringCSF((wchar_t *)&stru_830620.__pad_DFC[52], 0, &stru_830620.__pad_BC0[168], 1946);
          Dialog::ShowMessage(-1, (size_t)v73);
          eax157a = Dialog::GetCurrent();
          v75 = GetDlgItem(eax157a, 1416);
          EnableWindow(v75, 1);
        }
      }
      v1 = (void (__stdcall *)(const MSG *))TranslateMessage;
      v2 = (void (__stdcall *)(const MSG *))DispatchMessageA;
      v3 = 0;
      *(&g_MatrixTransformState + 1299) = 0;
    }
  }
  SaveConfigWOL((int)&HouseClass_Player.__pad_5568[8068]);
  if ( Dialog::GetCurrentType() != 187 )
  {
    if ( Dialog::GetCurrentType() == 188 )
    {
      BroadcastNetworkMessage((int)*(&g_MatrixTransformState + 1300));
      *(&g_MatrixTransformState + 1301) = 0;
      v10 = Dialog::GetCurrent();
      CloseDialog(v10, 0);
      CleanupFileTree();
      Network::InitPlayerSlots();
      v11 = (DLGTEMPLATE *)CreateDialogIndirect(g_hInstance, (HWND)0xBB, g_hWnd, (DLGPROC)NetworkSettings::DlgProc, 0);
      SetupDialog((HWND)v11, 187);
      ShowWindow((HWND)v11, 1);
      SendNetworkHeartbeat(0, 0, 1, 0);
    }
    else
    {
      if ( Dialog::GetCurrentType() == 189 )
      {
        if ( *(&g_MatrixTransformState + 1301) == (CoordStruct *)2 )
        {
          BroadcastNetworkMessage((int)*(&g_MatrixTransformState + 1300));
          *(&g_MatrixTransformState + 1301) = 0;
        }
        else
        {
          memset(v116, 0, sizeof(v116));
          v117 = 0;
          v118 = 0;
          v116[0] = 10;
          strcpy((char *)&v116[1], &HouseClass_Player.__pad_5568[8396]);
          for ( m = 1; m < *(int *)&HouseClass_Player.__pad_5568[18336]; ++m )
          {
            Network::SendMessage(
              (int)&HouseClass_Player.__pad_5568[22284],
              (int)v116,
              455,
              1,
              *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * m) + 40,
              0,
              0);
            Event::Dispatch();
          }
          Network::SendMessage((int)&HouseClass_Player.__pad_5568[22284], (int)v116, 455, 0, 0, 0, 0);
          if ( *(_DWORD *)&HouseClass_Player.__pad_5568[17224] )
            Network::SendMessage(
              (int)&HouseClass_Player.__pad_5568[22284],
              (int)v116,
              455,
              0,
              (int)&HouseClass_Player.__pad_5568[17228],
              0,
              0);
        }
        v106 = Timer::GetTicks();
        while ( Network::GetQueueCount((int)&HouseClass_Player.__pad_5568[22284]) > 0 )
        {
          if ( !Network::ReceiveLoop(&HouseClass_Player.__pad_5568[22284]) )
            break;
          v14 = (CellStruct *)600;
          if ( v106 != -1 )
          {
            eax33 = Timer::GetTicks() - v106;
            if ( eax33 >= 600 )
              break;
            v14 = (CellStruct *)(600 - eax33);
          }
          if ( !v14 )
            break;
          Event::Dispatch();
        }
        *(_WORD *)&HouseClass_Player.__pad_5568[17244] = 0;
        *(&g_MatrixTransformState + 1301) = 0;
        CloseDialog(0, 0);
        *(&g_MatrixTransformState + 1299) = 0;
        CleanupFileTree();
      }
      else
      {
        if ( *(&g_MatrixTransformState + 1301) == (CoordStruct *)2 )
        {
          BroadcastNetworkMessage((int)*(&g_MatrixTransformState + 1300));
          *(&g_MatrixTransformState + 1301) = 0;
        }
        else
        {
          memset(v113, 0, sizeof(v113));
          v114 = 0;
          v115 = 0;
          v113[0] = 10;
          strcpy((char *)&v113[1], &HouseClass_Player.__pad_5568[8396]);
          for ( n = 1; n < *(int *)&HouseClass_Player.__pad_5568[18336]; ++n )
          {
            Network::SendMessage(
              (int)&HouseClass_Player.__pad_5568[22284],
              (int)v113,
              455,
              1,
              *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * n) + 40,
              0,
              0);
            Event::Dispatch();
          }
          Network::SendMessage((int)&HouseClass_Player.__pad_5568[22284], (int)v113, 455, 0, 0, 0, 0);
          if ( *(_DWORD *)&HouseClass_Player.__pad_5568[17224] )
            Network::SendMessage(
              (int)&HouseClass_Player.__pad_5568[22284],
              (int)v113,
              455,
              0,
              (int)&HouseClass_Player.__pad_5568[17228],
              0,
              0);
        }
        v108 = Timer::GetTicks();
        while ( Network::GetQueueCount((int)&HouseClass_Player.__pad_5568[22284]) > 0 )
        {
          if ( !Network::ReceiveLoop(&HouseClass_Player.__pad_5568[22284]) )
            break;
          v16 = 600;
          if ( v108 != -1 )
          {
            v17 = Timer::GetTicks() - v108;
            if ( v17 >= 600 )
              break;
            v16 = 600 - v17;
          }
          if ( !v16 )
            break;
          Event::Dispatch();
        }
        *(_WORD *)&HouseClass_Player.__pad_5568[17244] = 0;
        *(&g_MatrixTransformState + 1301) = 0;
        *(&g_MatrixTransformState + 1299) = 0;
      }
      *(&g_MatrixTransformState + 1300) = 0;
      PtrVector::Destroy(&HouseClass_Player.__pad_5568[18368]);
      Game::ResetFlags();
      Network::InitPlayerSlots();
      v18 = (DLGTEMPLATE *)CreateDialogIndirect(g_hInstance, (HWND)0xBB, g_hWnd, (DLGPROC)NetworkSettings::DlgProc, 0);
      SetupDialog((HWND)v18, 187);
      ShowWindow((HWND)v18, 1);
    }
    goto LABEL_53;
  }
  if ( (int)*(&g_MatrixTransformState + 1301) > 0 )
  {
    BroadcastNetworkMessage((int)*(&g_MatrixTransformState + 1300));
    Network::ReceiveLoop(&HouseClass_Player.__pad_5568[22284]);
  }
  CloseDialog(0, 0);
  Game::ResetFlags();
  GameClass::InitDifficultyButtons();
  PtrVector::Destroy(&HouseClass_Player.__pad_5568[18368]);
  PtrVector::Destroy(&HouseClass_Player.__pad_5568[18344]);
  PtrVector::Destroy(&HouseClass_Player.__pad_5568[18320]);
  HouseClass_Player.__pad_5568[17242] = 0;
  Network::ReceiveLoop(&HouseClass_Player.__pad_5568[22284]);
  return 0;
}
}
} // namespace gamemd

// 0x5DE520
namespace gamemd {
INT_PTR NetworkLobby::DlgProc(HWND hDlg, UINT a2, WPARAM nIDDlgItem, unsigned int lParam)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
INT_PTR __stdcall NetworkLobby::DlgProc(HWND hDlg, UINT a2, WPARAM nIDDlgItem, unsigned int lParam)
{
  wchar_t *StringCSF; // ebp
  HWND v5; // eax
  char *v6; // eax
  INT_PTR result; // eax
  ObjectClass *v8; // edi
  LRESULT v9; // eax
  HWND v10; // eax
  SkirmishDialog *v11; // ecx
  void *v12; // ebp
  CCINIClass *v13; // edi
  CCINIClass *v14; // ecx
  SkirmishDialog *v15; // ecx
  char v16; // bl
  char v17; // al
  int v18; // edi
  int i; // esi
  IUnknown *v20; // eax
  SkirmishDialog *v21; // eax
  CampaignScore *PlayerCountMap; // edi
  int v23; // ecx
  HWND DlgItem; // eax
  void *DlgCtrlID; // edi
  void *ComboBoxSelectedRaw; // eax
  wchar_t *DifficultyString; // eax
  void *ComboBoxSelected; // eax
  void *ComboBoxSelectedDefault; // eax
  POINT v30; // [esp-Ch] [ebp-200h]
  char v31; // [esp+12h] [ebp-1E2h]
  char v32; // [esp+13h] [ebp-1E1h]
  HWND hWnd; // [esp+14h] [ebp-1E0h]
  void *v34; // [esp+18h] [ebp-1DCh] BYREF
  struct tagRECT Rect; // [esp+1Ch] [ebp-1D8h] BYREF
  _DWORD v36[113]; // [esp+2Ch] [ebp-1C8h] BYREF
  __int16 v37; // [esp+1F0h] [ebp-4h]
  char v38; // [esp+1F2h] [ebp-2h]

  if ( a2 != 1175 )
    SkirmishDialogProc((SkirmishDialog *)hDlg, a2, nIDDlgItem, (HWND)lParam);
  if ( a2 > 0x111 )
  {
    if ( a2 <= 0x49B )
    {
      if ( a2 == 1179 )
      {
        DlgItem = GetDlgItem(hDlg, nIDDlgItem);
        SendMessageA(DlgItem, 0x4B3u, 0x7Fu, lParam);
        return 0;
      }
      if ( a2 >= 0x114 )
      {
        if ( a2 <= 0x115 )
        {
          if ( (HWND)lParam == GetDlgItem(hDlg, 1842) )
          {
            if ( *((_BYTE *)&g_MatrixTransformState + 5208) )
              return 0;
            *(_DWORD *)&HouseClass_Player.__pad_5568[22708] = SendDlgItemMessageA(hDlg, 1842, 0x400u, 0, 0);
          }
          if ( !*((_BYTE *)&g_MatrixTransformState + 5208) )
          {
            *(_DWORD *)&HouseClass_Player.__pad_5568[8116] = 6 - SendDlgItemMessageA(hDlg, 1321, 0x400u, 0, 0);
            *(_DWORD *)&HouseClass_Player.__pad_5568[8104] = SendDlgItemMessageA(hDlg, 1026, 0x400u, 0, 0);
            *(_DWORD *)&HouseClass_Player.__pad_5568[8124] = SendDlgItemMessageA(hDlg, 1359, 0x400u, 0, 0);
            return 0;
          }
          return 0;
        }
        if ( a2 == 1175 )
        {
          NetworkBuffer::GetField((VersionClass *)&HouseClass_Player.__pad_5568[23084]);
          v20 = (IUnknown *)Random::Range(&stru_87C374.__pad_579C[20600], (IUnknown *)1, (IUnknown *)0x7FFF);
          srand(v20);
          *(_DWORD *)&HouseClass_Player.__pad_5568[23264] = rand();
          Dialog::RestoreParent(hDlg);
          SkirmishDialog::FillComboBoxes((SkirmishDialog *)hDlg);
          InitGameDropdownColors();
          Lobby::FillPlayerFactions(hDlg);
          SetupSkirmishDialogPlayerSlot(hDlg, *(int *)&HouseClass_Player.__pad_5568[18392]);
          MapSkirmishDialogPlayerToControl(hDlg, *(int *)&HouseClass_Player.__pad_5568[18392]);
          _cfltcvt_init();
          memset32(&HouseClass_Player.__pad_5568[8232], -2, 8u);
          GDlg::LoadLetterStrings();
          memset32(&HouseClass_Player.__pad_5568[8264], -2, 8u);
          SetupMultiplayerLobbyPlayers(hDlg, (int)&HouseClass_Player.__pad_5568[8588]);
          Lobby::InvalidatePlayerSlots(hDlg);
          RefreshLobbyPlayerSlots(0xFFFFFFFF);
          GameSetup::DisplayPlayers(0);
          if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072]
            && !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 188))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]) )
          {
            *(_DWORD *)&stru_830620.__pad_DFC[648] = -1;
            *(&g_MatrixTransformState + 2222) = 0;
            Dialog::RefreshDialogsGame(0);
            *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18396] + 107) = 0;
            v21 = (SkirmishDialog *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 40))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]);
            SessionClass::SetPlayerOption(*(int *)&HouseClass_Player.__pad_5568[18396], v21);
            SessionClass::SetPlayerColor(*(int *)&HouseClass_Player.__pad_5568[18396], -2);
            SessionClass::SetOption(*(int *)&HouseClass_Player.__pad_5568[18396], (SessionClass *)0xFFFFFFFE);
            SessionClass::SetOption2(*(int *)&HouseClass_Player.__pad_5568[18396], (SessionClass *)0xFFFFFFFE);
            Lobby::FillPlayerFactions(hDlg);
          }
          SetupSkirmishPlayerSlots(hDlg, 0, (HWND)1);
          SetupMultiplayerLobbyScreen(hDlg, (void *)0xFFFFFFFF, *(int *)&HouseClass_Player.__pad_5568[8096]);
          if ( !*(_DWORD *)&stru_830620.__pad_DFC[648]
            && *(_DWORD *)&HouseClass_Player.__pad_5568[8072]
            && (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 188))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]) )
          {
            SessionClass::SetPlayerOption(*(int *)&HouseClass_Player.__pad_5568[18396], (SkirmishDialog *)0xFFFFFFFD);
            *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18396] + 107) = -1;
          }
          NetworkLobby::Dispatch(hDlg);
          SetDialogPlayerName(hDlg, *(int *)&HouseClass_Player.__pad_5568[8072]);
          Dialog::ShowPlayerName(hDlg);
          Session::StartGame(hDlg);
          PlayerCountMap = (CampaignScore *)ReadPlayerCountMap(*(int *)&HouseClass_Player.__pad_5568[8096]);
          if ( !*(_DWORD *)&HouseClass_Player.__pad_5568[8072]
            || !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 4))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072])
            || (v23 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4580), v23 > (int)PlayerCountMap) )
          {
            v23 = (int)PlayerCountMap;
          }
          ResetLobbyFactionTable(v23);
          Lobby::InvalidateFactionCombos(hDlg);
          SkirmishDialogProc((SkirmishDialog *)hDlg, 1175, nIDDlgItem, (HWND)lParam);
          NetworkLobby::UpdatePlayerList(PlayerCountMap);
          return 0;
        }
      }
      return 0;
    }
    if ( a2 != 1257 )
    {
      if ( a2 == 1260 )
      {
        Dialog::EnumAndCleanup(hDlg);
        return 0;
      }
      return 0;
    }
    WideString::Assign_Alt((void **)(lParam + 8), 0);
    if ( *(_DWORD *)lParam && *(_DWORD *)(lParam + 4) != -1 )
    {
      DlgCtrlID = (void *)GetDlgCtrlID(*(HWND *)lParam);
      if ( Dialog::MapPlayerIDToIndex(DlgCtrlID) != -1 )
      {
        ComboBoxSelectedDefault = (void *)GetComboBoxSelectedDefault(
                                            (SkirmishDialog *)hDlg,
                                            (int)DlgCtrlID,
                                            *(_DWORD *)(lParam + 4));
        DifficultyString = GameClass::GetDifficultyString(ComboBoxSelectedDefault);
        goto LABEL_132;
      }
      if ( CountryCombo::IDToIndex(DlgCtrlID) == -1 )
      {
        if ( StartCombo::IDToIndex(DlgCtrlID) != -1 )
        {
          ComboBoxSelectedRaw = (void *)GetComboBoxSelectedRaw(
                                          (ReferenceCounted *)hDlg,
                                          (int)DlgCtrlID,
                                          *(_DWORD *)(lParam + 4));
          DifficultyString = GameSetup::GetColorTooltip(ComboBoxSelectedRaw);
LABEL_132:
          WideString::Assign_Alt((void **)(lParam + 8), DifficultyString);
        }
      }
      else
      {
        ComboBoxSelected = (void *)GetComboBoxSelected(
                                     (ReferenceCounted *)hDlg,
                                     (int)DlgCtrlID,
                                     *(_DWORD *)(lParam + 4));
        if ( ComboBoxSelected != (void *)-1 )
        {
          DifficultyString = SideClass::GetName(ComboBoxSelected);
          goto LABEL_132;
        }
      }
    }
    return 1;
  }
  if ( a2 != 273 )
  {
    switch ( a2 )
    {
      case 2u:
        if ( !LoadScreen::IsActive((ProgressScreenClass *)&g_MatrixTransformState + 283) )
          return 0;
        VtableStub::643E70(&g_MatrixTransformState + 6226);
        result = 0;
        break;
      case 0xFu:
        Dialog::DrawBackground(hDlg);
        if ( *(&g_MatrixTransformState + 2257) )
          Skirmish::RenderPreview(*(&g_MatrixTransformState + 2257), (SkirmishDialog *)hDlg);
        if ( LoadScreen::IsActive((ProgressScreenClass *)&g_MatrixTransformState + 283) )
          LoadScreen::Render((ProgressScreenClass *)&g_MatrixTransformState + 283);
        Dialog::StopBink(hDlg);
        ValidateRect(hDlg, 0);
        result = 0;
        break;
      case 0x14u:
        return 1;
      case 0x2Bu:
        Dialog::Resize((char *)lParam);
        result = 1;
        break;
      case 0x84u:
        hWnd = GetDlgItem(hDlg, 1685);
        if ( !hWnd )
          return 0;
        GetWindowRect(hDlg, &Rect);
        StringCSF = (wchar_t *)&stru_87C374.__pad_579C[23588];
        v30.y = HIWORD(lParam) - Rect.top;
        v30.x = (unsigned __int16)lParam - Rect.left;
        v5 = ChildWindowFromPointEx(hDlg, v30, 1u);
        if ( v5 )
        {
          v6 = DlgSkirmishMenuProc(hDlg, v5);
          if ( v6 )
            StringCSF = GetStringCSF((wchar_t *)v6, 0, &stru_830620.__pad_BC0[168], 2857);
        }
        SendMessageA(hWnd, 0x4B2u, 0, (LPARAM)StringCSF);
        result = 0;
        break;
      default:
        return 0;
    }
    return result;
  }
  if ( (unsigned __int16)nIDDlgItem > 0x588u )
  {
    if ( (unsigned __int16)nIDDlgItem > 0x6A8u )
    {
      switch ( (__int16)nIDDlgItem )
      {
        case 1706:
        case 1707:
          goto LABEL_89;
        case 1901:
        case 1902:
        case 1903:
        case 1904:
        case 1905:
        case 1906:
        case 1907:
        case 1908:
          if ( HIWORD(nIDDlgItem) != 1 || *((_BYTE *)&g_MatrixTransformState + 5208) )
            return 0;
          ProcessNetworkLobbyOption(hDlg, (void *)(unsigned __int16)nIDDlgItem);
          break;
        default:
          return 0;
      }
      goto LABEL_51;
    }
    if ( (unsigned __int16)nIDDlgItem >= 0x6A3u )
    {
LABEL_89:
      if ( HIWORD(nIDDlgItem) != 1 || *((_BYTE *)&g_MatrixTransformState + 5208) )
        return 0;
      AssignPlayerSide(hDlg, (unsigned __int16)nIDDlgItem);
      goto LABEL_51;
    }
    if ( (unsigned __int16)nIDDlgItem != 1450 )
    {
      if ( (unsigned __int16)nIDDlgItem != 1697 )
      {
        if ( (unsigned __int16)nIDDlgItem != 1698 )
          return 0;
LABEL_45:
        if ( HIWORD(nIDDlgItem) != 1 || *((_BYTE *)&g_MatrixTransformState + 5208) )
          return 0;
        AssignPlayerColor(hDlg, (void *)(unsigned __int16)nIDDlgItem);
LABEL_51:
        CheckGameSettingsChanged(1, 0);
        GameSetup::DisplayPlayers(0);
        return 0;
      }
LABEL_48:
      if ( HIWORD(nIDDlgItem) != 1 || *((_BYTE *)&g_MatrixTransformState + 5208) )
        return 0;
      SelectLobbyCountry(hDlg, (void *)(unsigned __int16)nIDDlgItem);
      goto LABEL_51;
    }
    if ( *((_BYTE *)&g_MatrixTransformState + 5208) )
      return 0;
    v11 = *(SkirmishDialog **)&HouseClass_Player.__pad_5568[8072];
    v12 = *(void **)&HouseClass_Player.__pad_5568[8096];
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072] )
    {
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 64))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]) )
      {
        v11 = *(SkirmishDialog **)&HouseClass_Player.__pad_5568[8072];
        v32 = 0;
LABEL_58:
        if ( !v11
          || (v31 = 0, (*(unsigned __int8 (__thiscall **)(SkirmishDialog *))(*(_DWORD *)v11->__pad_0 + 188))(v11)) )
        {
          v31 = 1;
        }
        Dialog::IdleProcess((SkirmishDialog *)hDlg);
        ShowWindow(hDlg, 0);
        stru_830620.__pad_DFC[696] = 0;
        if ( SkirmishDialog::Show(g_hWnd, lParam, (int)v12) == 2 )
        {
          *(_DWORD *)&HouseClass_Player.__pad_5568[8096] = v12;
          LoadScenarioClassByIndex((int)v12);
          Session::PrepareGame(hDlg);
          stru_830620.__pad_DFC[696] = 1;
          ShowWindow(hDlg, 5);
          Session::StartGame(hDlg);
          CheckGameSettingsChanged(1, 0);
          InvalidateRect(hDlg, 0, 0);
          return 0;
        }
        if ( LoadScenarioClassByIndex(*(int *)&HouseClass_Player.__pad_5568[8096]) )
          SetupMultiplayerLobbyScreen(hDlg, v12, *(int *)&HouseClass_Player.__pad_5568[8096]);
        else
          *(_DWORD *)&HouseClass_Player.__pad_5568[8096] = v12;
        stru_830620.__pad_DFC[696] = 1;
        ShowWindow(hDlg, 5);
        Dialog::ShowPlayerName(hDlg);
        Session::StartGame(hDlg);
        v13 = (CCINIClass *)ReadPlayerCountMap(*(int *)&HouseClass_Player.__pad_5568[8096]);
        if ( !*(_DWORD *)&HouseClass_Player.__pad_5568[8072]
          || !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 4))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072])
          || (v14 = *(CCINIClass **)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4580), (int)v14 > (int)v13) )
        {
          v14 = v13;
        }
        ResetLobbyFactionTable((int)v14);
        Lobby::InvalidateFactionCombos(hDlg);
        Lobby::InvalidatePlayerSlots(hDlg);
        NetworkLobby::UpdateLabels(hDlg);
        NetworkLobby::FillOptionCombo();
        RefreshLobbyPlayerSlots(0xFFFFFFFF);
        v15 = *(SkirmishDialog **)&HouseClass_Player.__pad_5568[8072];
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072] )
        {
          if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 64))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]) )
          {
            v15 = *(SkirmishDialog **)&HouseClass_Player.__pad_5568[8072];
            v16 = 0;
            goto LABEL_75;
          }
          v15 = *(SkirmishDialog **)&HouseClass_Player.__pad_5568[8072];
        }
        v16 = 1;
LABEL_75:
        if ( !v15 || (v17 = (*(int (__thiscall **)(SkirmishDialog *))(*(_DWORD *)v15->__pad_0 + 188))(v15)) != 0 )
          v17 = 1;
        if ( v31 && !v17 )
          MultiplayerLobby::FillSlots(hDlg);
        if ( v32 && !v16 && NetworkLobby::SetupPlayerSlotControls(hDlg) )
        {
          *(_DWORD *)&HouseClass_Player.__pad_5568[8128] = 0;
          memset(v36, 0, sizeof(v36));
          v37 = 0;
          v38 = 0;
          v36[0] = 22;
          strcpy((char *)&v36[1], &HouseClass_Player.__pad_5568[8396]);
          Player::BuildListString((wchar_t *)((char *)&v36[11] + 3));
          v18 = *(_DWORD *)&HouseClass_Player.__pad_5568[18384];
          for ( i = 1; i < v18; ++i )
          {
            Network::SendMessage(
              (int)&HouseClass_Player.__pad_5568[22284],
              (int)v36,
              455,
              1,
              *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * i) + 40,
              0,
              0);
            Event::Dispatch();
          }
          GameSetup::DisplayPlayers(0);
          CheckGameSettingsChanged(1, 0);
          return 0;
        }
        else
        {
          GameSetup::DisplayPlayers(1);
          return 0;
        }
      }
      v11 = *(SkirmishDialog **)&HouseClass_Player.__pad_5568[8072];
    }
    v32 = 1;
    goto LABEL_58;
  }
  if ( (unsigned __int16)nIDDlgItem == 1416 )
  {
    v10 = GetDlgItem(hDlg, 1416);
    EnableWindow(v10, 0);
    *((_BYTE *)&g_MatrixTransformState + 5208) = 1;
    SaveMultiplayerLobbySettings(hDlg, (int)&HouseClass_Player.__pad_5568[8588]);
    *(&g_MatrixTransformState + 1299) = (CoordStruct *)1416;
    return 0;
  }
  if ( (unsigned __int16)nIDDlgItem <= 0x514u )
  {
    if ( (unsigned __int16)nIDDlgItem < 0x513u )
    {
      if ( (unsigned __int16)nIDDlgItem <= 0x418u )
      {
        if ( (unsigned __int16)nIDDlgItem >= 0x411u )
        {
          if ( HIWORD(nIDDlgItem) == 1 && !*((_BYTE *)&g_MatrixTransformState + 5208) && Settings::CheckString() )
          {
            v9 = GetComboBoxSelectedDefault((SkirmishDialog *)hDlg, (unsigned __int16)nIDDlgItem, 0xFFFFFFFF);
            PlayerSkirmishSlotHandler((SkirmishDialog *)hDlg, (unsigned __int16)nIDDlgItem, v9, 2);
            return 0;
          }
        }
        else if ( (unsigned __int16)nIDDlgItem == 2 && !*((_BYTE *)&g_MatrixTransformState + 5208) )
        {
          v8 = (ObjectClass *)*(&g_MatrixTransformState + 2257);
          if ( *(&g_MatrixTransformState + 2257) )
          {
            ComPtr::Dtor(*(&g_MatrixTransformState + 2257));
            __3_YAXPAX_Z(v8);
            *(&g_MatrixTransformState + 2257) = 0;
          }
          SaveMultiplayerLobbySettings(hDlg, (int)&HouseClass_Player.__pad_5568[8588]);
          *(&g_MatrixTransformState + 1299) = (CoordStruct *)2;
          return 0;
        }
        return 0;
      }
      if ( (unsigned __int16)nIDDlgItem != 1296 )
        return 0;
    }
    goto LABEL_48;
  }
  switch ( (__int16)nIDDlgItem )
  {
    case 1310:
    case 1311:
    case 1312:
    case 1313:
      goto LABEL_48;
    case 1314:
    case 1315:
    case 1316:
    case 1317:
    case 1318:
    case 1319:
    case 1320:
      goto LABEL_45;
    case 1344:
      ReadChatMessage((wchar_t **)&v34, (HWND)lParam);
      DeleteAndZero::Alt(&v34);
      if ( HIWORD(nIDDlgItem) != 1281 )
        return 0;
      SendNetworkLobbyChatMessage(hDlg, (LPARAM)Math::InitDegToRad, 61680);
      result = 0;
      break;
    default:
      return 0;
  }
  return result;
}
}
} // namespace gamemd

// 0x5E00B0
namespace gamemd {
int NetworkLobby_MessageHandler()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __usercall NetworkLobby::MessageHandler@<al>(CampaignScore *a1@<edi>)
{
  char result; // al
  int v2; // esi
  char *v3; // eax
  int v4; // eax
  int v5; // esi
  int v6; // edi
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // eax
  wchar_t *v10; // eax
  wchar_t *v11; // eax
  char *v12; // eax
  int v13; // edi
  int v14; // eax
  int v15; // esi
  int v16; // eax
  wchar_t *StringCSF; // eax
  int v18; // edi
  int v19; // esi
  int v20; // eax
  int v21; // ebp
  char *v22; // eax
  int v23; // eax
  int v24; // esi
  int v25; // eax
  HWND v26; // eax
  char *v27; // eax
  int v28; // eax
  int v29; // esi
  char *v30; // eax
  SkirmishDialog *PlayerOption; // eax
  int PlayerColor; // eax
  int v33; // eax
  DLGTEMPLATE *DialogIndirect; // esi
  int v35; // esi
  int m; // esi
  wchar_t *v37; // eax
  wchar_t *v38; // eax
  HWND eax134; // eax
  IUnknown *v39; // esi
  HWND DlgItem; // eax
  int v42; // esi
  char *v43; // eax
  int edi148; // edi
  SessionClass *v44; // esi
  char *v46; // eax
  char *v47; // eax
  SkirmishDialog *v48; // ebp
  char *v49; // eax
  int v50; // esi
  char *v51; // eax
  int v52; // ebx
  char *v53; // eax
  int PlayerSide; // eax
  SessionClass *v54; // eax
  int Option; // eax
  int Option2; // eax
  bool v58; // bl
  int i; // esi
  char *v60; // eax
  int v61; // eax
  char v62; // bl
  int j; // esi
  int v64; // eax
  int v65; // esi
  int v66; // eax
  int v67; // ecx
  HWND v68; // eax
  ObjectClass *Current; // esi
  LRESULT v70; // eax
  LRESULT v71; // eax
  int v72; // esi
  int v73; // eax
  int v74; // esi
  wchar_t **v75; // edi
  char *v76; // eax
  int v77; // edi
  char *v78; // eax
  int v79; // edi
  int eax245; // eax
  ObjectClass *v80; // edx
  ObjectClass *v81; // esi
  char *v83; // eax
  int v84; // edi
  int v85; // ebp
  int v86; // esi
  char *v87; // eax
  char *v88; // eax
  bool v89; // bl
  int v90; // edi
  int v91; // ebp
  int updated; // eax
  int v93; // eax
  int v94; // ebp
  char *v95; // eax
  SkirmishDialog *v96; // eax
  int v97; // esi
  int v98; // eax
  int ebx325; // ebx
  SessionClass *v99; // eax
  int v101; // eax
  int v102; // edi
  int k; // esi
  CCINIClass *v103; // [esp-Ah] [ebp-7E4h]
  CCINIClass *v104; // [esp-Ah] [ebp-7E4h]
  CCINIClass *v105; // [esp-Ah] [ebp-7E4h]
  CCINIClass *v106; // [esp-Ah] [ebp-7E4h]
  CCINIClass *v107; // [esp-Ah] [ebp-7E4h]
  CampaignScore *v109; // [esp-6h] [ebp-7E0h]
  char v110; // [esp+Ch] [ebp-7CEh]
  char v111; // [esp+Dh] [ebp-7CDh]
  char *Block; // [esp+Eh] [ebp-7CCh]
  int Blocka; // [esp+Eh] [ebp-7CCh]
  bool v114; // [esp+13h] [ebp-7C7h]
  bool v115; // [esp+14h] [ebp-7C6h]
  bool v116; // [esp+15h] [ebp-7C5h]
  SessionClass *aP1; // [esp+16h] [ebp-7C4h]
  SessionClass *aP1a; // [esp+16h] [ebp-7C4h]
  _DWORD v119[113]; // [esp+1Ah] [ebp-7C0h] BYREF
  __int16 v120; // [esp+1DEh] [ebp-5FCh]
  char v121; // [esp+1E0h] [ebp-5FAh]
  wchar_t Buffer[80]; // [esp+1E2h] [ebp-5F8h] BYREF
  _DWORD v123[113]; // [esp+282h] [ebp-558h] BYREF
  __int16 v124; // [esp+446h] [ebp-394h]
  char v125; // [esp+448h] [ebp-392h]
  _DWORD v126[113]; // [esp+44Ah] [ebp-390h] BYREF
  __int16 v127; // [esp+60Eh] [ebp-1CCh]
  char v128; // [esp+610h] [ebp-1CAh]
  _DWORD v129[113]; // [esp+612h] [ebp-1C8h] BYREF
  __int16 v130; // [esp+7D6h] [ebp-4h]
  char v131; // [esp+7D8h] [ebp-2h]

  result = *((_BYTE *)&g_MatrixTransformState + 5196);
  v110 = 0;
  v111 = 0;
  if ( *(&g_MatrixTransformState + 1299) )
    return result;
  v109 = a1;
  do
  {
    Event::Dispatch();
    if ( !Network::Send(
            (int)&HouseClass_Player.__pad_5568[22284],
            (int)&HouseClass_Player.__pad_5568[17284],
            (int)&HouseClass_Player.__pad_5568[17740],
            (TechnoTypeClass *)&HouseClass_Player.__pad_5568[17744],
            (int)&HouseClass_Player.__pad_5568[17756]) )
      break;
    if ( *(_WORD *)&HouseClass_Player.__pad_5568[17756] != 0xAA04
      || SendNetworkPlayerOptions(&HouseClass_Player.__pad_5568[17284], (int)&HouseClass_Player.__pad_5568[17744]) )
    {
      continue;
    }
    switch ( *(_DWORD *)&HouseClass_Player.__pad_5568[17284] )
    {
      case 0x19:
        if ( Dialog::GetCurrentType() == 189 )
          ExchangeMultiplayerGameInfo();
        continue;
      case 0x1B:
        if ( Dialog::GetCurrentType() == 188 )
        {
          Game::ResetReadyStates();
          v110 = 1;
          MapPreview::Upload(&(*(&g_MatrixTransformState + 2257))->X);
        }
        continue;
      case 1:
        v2 = 1;
        if ( *(int *)&HouseClass_Player.__pad_5568[18360] <= 1 )
        {
LABEL_16:
          v4 = __2_YAPAXI_Z(0x85u);
          v5 = v4;
          if ( v4 )
            Waypoint::InitInvalid((_BYTE *)(v4 + 40));
          else
            v5 = 0;
          v12 = CharToWideString(&HouseClass_Player.__pad_5568[17288]);
          wcscpy((wchar_t *)v5, (const wchar_t *)v12);
          *(_DWORD *)(v5 + 40) = *(_DWORD *)&HouseClass_Player.__pad_5568[17744];
          *(_DWORD *)(v5 + 44) = *(_DWORD *)&HouseClass_Player.__pad_5568[17748];
          *(_DWORD *)(v5 + 48) = *(_DWORD *)&HouseClass_Player.__pad_5568[17752];
          *(_BYTE *)(v5 + 52) = HouseClass_Player.__pad_5568[17331] & 1;
          v13 = *(_DWORD *)&stru_87C374.__pad_579C[22576];
          if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 )
            v13 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568];
          *(_DWORD *)(v5 + 53) = v13;
          if ( *(int *)&HouseClass_Player.__pad_5568[18360] < *(int *)&HouseClass_Player.__pad_5568[18352]
            || (HouseClass_Player.__pad_5568[18357] || !*(_DWORD *)&HouseClass_Player.__pad_5568[18352])
            && *(int *)&HouseClass_Player.__pad_5568[18364] > 0
            && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player.__pad_5568[18344]
                                                                      + 8))(
                 &HouseClass_Player.__pad_5568[18344],
                 *(_DWORD *)&HouseClass_Player.__pad_5568[18352] + *(_DWORD *)&HouseClass_Player.__pad_5568[18364],
                 0) )
          {
            v14 = (*(_DWORD *)&HouseClass_Player.__pad_5568[18360])++;
            *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18348] + 4 * v14) = v5;
          }
          v15 = 1;
          if ( *(int *)&HouseClass_Player.__pad_5568[18336] > 1 )
          {
            while ( !GUID::Compare(
                       (char *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * v15) + 40),
                       (int)&HouseClass_Player.__pad_5568[17744]) )
            {
              if ( ++v15 >= *(int *)&HouseClass_Player.__pad_5568[18336] )
                goto LABEL_45;
            }
            __3_YAXPAX_Z(*(void **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * v15));
            v16 = (*(int (__thiscall **)(char *, int))(*(_DWORD *)&HouseClass_Player.__pad_5568[18320] + 16))(
                    &HouseClass_Player.__pad_5568[18320],
                    *(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * v15);
            if ( v16 != -1 && v16 < *(int *)&HouseClass_Player.__pad_5568[18336] )
            {
              --*(_DWORD *)&HouseClass_Player.__pad_5568[18336];
              for ( ;
                    v16 < *(int *)&HouseClass_Player.__pad_5568[18336];
                    *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * v16 - 4) = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * v16) )
              {
                ++v16;
              }
            }
          }
LABEL_45:
          if ( (HouseClass_Player.__pad_5568[17331] & 1) != 0 && (int)*(&g_MatrixTransformState + 1301) < 2 )
          {
            v105 = (CCINIClass *)CharToWideString(&HouseClass_Player.__pad_5568[17288]);
            StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_DFC[580], 0, &stru_830620.__pad_BC0[168], 4280);
            swprintf(Buffer, (const size_t)StringCSF, (const wchar_t *const)v105, v109);
            Dialog::ShowMessage(-1, (size_t)Buffer);
            PlayVocClass(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1720), 0x2000, 1.0, 0);
          }
          v110 = 1;
          v111 = 1;
        }
        else
        {
          while ( 1 )
          {
            v3 = ToWideStringChar(*(IUnknown **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18348] + 4 * v2));
            if ( !_strcmpi(v3, &HouseClass_Player.__pad_5568[17288]) )
              break;
            if ( ++v2 >= *(int *)&HouseClass_Player.__pad_5568[18360] )
              goto LABEL_16;
          }
          v6 = *(_DWORD *)&stru_87C374.__pad_579C[22576];
          if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 )
            v6 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568];
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18348] + 4 * v2) + 53) = v6;
          v7 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18348] + 4 * v2);
          if ( *(_BYTE *)(v7 + 52) != (HouseClass_Player.__pad_5568[17331] & 1) )
          {
            v111 = 1;
            *(_BYTE *)(v7 + 52) = HouseClass_Player.__pad_5568[17331] & 1;
            v8 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18348] + 4 * v2);
            if ( *(_BYTE *)(v8 + 52) )
            {
              v9 = (_DWORD *)(v8 + 40);
              *v9 = *(_DWORD *)&HouseClass_Player.__pad_5568[17744];
              v9[1] = *(_DWORD *)&HouseClass_Player.__pad_5568[17748];
              v9[2] = *(_DWORD *)&HouseClass_Player.__pad_5568[17752];
            }
            if ( (int)*(&g_MatrixTransformState + 1301) < 2 )
            {
              if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18348] + 4 * v2) + 52) )
              {
                v103 = (CCINIClass *)CharToWideString(&HouseClass_Player.__pad_5568[17288]);
                v10 = GetStringCSF((wchar_t *)&stru_830620.__pad_DFC[580], 0, &stru_830620.__pad_BC0[168], 4234);
                swprintf(Buffer, (const size_t)v10, (const wchar_t *const)v103, v109);
                PlayVocClass(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1720), 0x2000, 1.0, 0);
              }
              else
              {
                v104 = (CCINIClass *)CharToWideString(&HouseClass_Player.__pad_5568[17288]);
                v11 = GetStringCSF((wchar_t *)&stru_830620.__pad_DFC[552], 0, &stru_830620.__pad_BC0[168], 4239);
                swprintf(Buffer, (const size_t)v11, (const wchar_t *const)v104, v109);
                PlayVocClass(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1704), 0x2000, 1.0, 0);
              }
              Dialog::ShowMessage(-1, (size_t)Buffer);
            }
          }
        }
        continue;
      case 3:
        v18 = 0;
        v19 = 0;
        if ( *(int *)&HouseClass_Player.__pad_5568[18384] > 0 )
        {
          while ( !GUID::Compare(
                     (char *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v19) + 40),
                     (int)&HouseClass_Player.__pad_5568[17744]) )
          {
            if ( ++v19 >= *(int *)&HouseClass_Player.__pad_5568[18384] )
              goto LABEL_55;
          }
          v18 = 1;
        }
LABEL_55:
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[18360]
          && *(_DWORD *)&HouseClass_Player.__pad_5568[17339] != WideString::Hash((wchar_t *)&HouseClass_Player.__pad_5568[17244]) )
        {
          v18 = 1;
        }
        if ( _strcmpi(&HouseClass_Player.__pad_5568[8396], &HouseClass_Player.__pad_5568[17288]) && !v18 )
        {
          v20 = __2_YAPAXI_Z(0x85u);
          v21 = v20;
          if ( v20 )
            Waypoint::InitInvalid((_BYTE *)(v20 + 40));
          else
            v21 = 0;
          memset((void *)v21, 0, 0x84u);
          *(_BYTE *)(v21 + 132) = 0;
          v22 = CharToWideString(&HouseClass_Player.__pad_5568[17288]);
          wcscpy((wchar_t *)v21, (const wchar_t *)v22);
          strcpy((char *)(v21 + 52), &HouseClass_Player.__pad_5568[17308]);
          *(_DWORD *)(v21 + 40) = *(_DWORD *)&HouseClass_Player.__pad_5568[17744];
          *(_DWORD *)(v21 + 44) = *(_DWORD *)&HouseClass_Player.__pad_5568[17748];
          *(_DWORD *)(v21 + 48) = *(_DWORD *)&HouseClass_Player.__pad_5568[17752];
          SessionClass::SetPlayerOption(v21, *(SkirmishDialog **)&HouseClass_Player.__pad_5568[17331]);
          SessionClass::SetPlayerColor(v21, *(int *)&HouseClass_Player.__pad_5568[17335]);
          SessionClass::SetOption(v21, (SessionClass *)0xFFFFFFFE);
          SessionClass::SetOption2(v21, (SessionClass *)0xFFFFFFFE);
          if ( *(_DWORD *)&HouseClass_Player.__pad_5568[17371] )
            *(_DWORD *)(v21 + 107) = -1;
          if ( *(int *)&HouseClass_Player.__pad_5568[18384] < *(int *)&HouseClass_Player.__pad_5568[18376]
            || (HouseClass_Player.__pad_5568[18381] || !*(_DWORD *)&HouseClass_Player.__pad_5568[18376])
            && *(int *)&HouseClass_Player.__pad_5568[18388] > 0
            && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player.__pad_5568[18368]
                                                                      + 8))(
                 &HouseClass_Player.__pad_5568[18368],
                 *(_DWORD *)&HouseClass_Player.__pad_5568[18376] + *(_DWORD *)&HouseClass_Player.__pad_5568[18388],
                 0) )
          {
            v23 = (*(_DWORD *)&HouseClass_Player.__pad_5568[18384])++;
            *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v23) = v21;
          }
          Network_Handle_5E8D90(*(int *)&HouseClass_Player.__pad_5568[17367], v21);
          v24 = 1;
          if ( *(int *)&HouseClass_Player.__pad_5568[18336] > 1 )
          {
            while ( !GUID::Compare(
                       (char *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * v24) + 40),
                       (int)&HouseClass_Player.__pad_5568[17744]) )
            {
              if ( ++v24 >= *(int *)&HouseClass_Player.__pad_5568[18336] )
                goto LABEL_79;
            }
            __3_YAXPAX_Z(*(void **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * v24));
            v25 = (*(int (__thiscall **)(char *, int))(*(_DWORD *)&HouseClass_Player.__pad_5568[18320] + 16))(
                    &HouseClass_Player.__pad_5568[18320],
                    *(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * v24);
            if ( v25 != -1 && v25 < *(int *)&HouseClass_Player.__pad_5568[18336] )
            {
              --*(_DWORD *)&HouseClass_Player.__pad_5568[18336];
              for ( ;
                    v25 < *(int *)&HouseClass_Player.__pad_5568[18336];
                    *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * v25 - 4) = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * v25) )
              {
                ++v25;
              }
            }
          }
LABEL_79:
          Game::ResetReadyStates();
          v26 = (HWND)Dialog::FindByHandle((void *)0xBD);
          EnablePlayerSlotControls(v26, 1);
          Debug::Log();
          v110 = 1;
          if ( (int)*(&g_MatrixTransformState + 1301) >= 2 )
            PlayVocClass(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1728), 0x2000, 1.0, 0);
        }
        continue;
      case 0x16:
        if ( !Settings::CheckString() )
        {
          NetworkLobby::SetupPlayers((wchar_t *)&HouseClass_Player.__pad_5568[17331]);
          v110 = 1;
        }
        continue;
      case 0x28:
        if ( !Settings::CheckString() )
          Network_Handle();
        continue;
      case 7:
        if ( *(&g_MatrixTransformState + 1301) != (CoordStruct *)2 )
        {
          v27 = CharToWideString(&HouseClass_Player.__pad_5568[17288]);
          wcscpy((wchar_t *)&HouseClass_Player.__pad_5568[17244], (const wchar_t *)v27);
          SessionClass::AssignSide(&HouseClass_Player.__pad_5568[8068], *(int *)&HouseClass_Player.__pad_5568[17331], 0);
          SessionClass::AssignColor(
            &HouseClass_Player.__pad_5568[8068],
            *(int *)&HouseClass_Player.__pad_5568[17335],
            0);
          *(_DWORD *)&HouseClass_Player.__pad_5568[10348] = *(_DWORD *)&HouseClass_Player.__pad_5568[17748];
          *(&g_MatrixTransformState + 1301) = (CoordStruct *)2;
          *(_DWORD *)&HouseClass_Player.__pad_5568[10344] = *(_DWORD *)&HouseClass_Player.__pad_5568[17744];
          *(_DWORD *)&HouseClass_Player.__pad_5568[10352] = *(_DWORD *)&HouseClass_Player.__pad_5568[17752];
          PtrVector::Destroy(&HouseClass_Player.__pad_5568[18368]);
          v28 = __2_YAPAXI_Z(0x85u);
          v29 = v28;
          if ( v28 )
            Waypoint::InitInvalid((_BYTE *)(v28 + 40));
          else
            v29 = 0;
          memset((void *)v29, 0, 0x84u);
          *(_BYTE *)(v29 + 132) = 0;
          v30 = CharToWideString(&HouseClass_Player.__pad_5568[8396]);
          wcscpy((wchar_t *)v29, (const wchar_t *)v30);
          PlayerOption = (SkirmishDialog *)Session::GetPlayerOption(&HouseClass_Player.__pad_5568[8068]);
          SessionClass::SetPlayerOption(v29, PlayerOption);
          PlayerColor = Session::GetPlayerColor(&HouseClass_Player.__pad_5568[8068]);
          SessionClass::SetPlayerColor(v29, PlayerColor);
          SessionClass::SetOption(v29, (SessionClass *)0xFFFFFFFE);
          SessionClass::SetOption2(v29, (SessionClass *)0xFFFFFFFE);
          *(_DWORD *)&stru_830620.__pad_DFC[648] = *(_DWORD *)&HouseClass_Player.__pad_5568[17371];
          if ( *(_DWORD *)&HouseClass_Player.__pad_5568[17367] == *(_DWORD *)&HouseClass_Player.__pad_5568[17371]
            && *(_DWORD *)&HouseClass_Player.__pad_5568[17331] == -3 )
          {
            *(_DWORD *)(v29 + 107) = -1;
          }
          if ( *(int *)&HouseClass_Player.__pad_5568[18384] < *(int *)&HouseClass_Player.__pad_5568[18376]
            || (HouseClass_Player.__pad_5568[18381] || !*(_DWORD *)&HouseClass_Player.__pad_5568[18376])
            && *(int *)&HouseClass_Player.__pad_5568[18388] > 0
            && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player.__pad_5568[18368]
                                                                      + 8))(
                 &HouseClass_Player.__pad_5568[18368],
                 *(_DWORD *)&HouseClass_Player.__pad_5568[18376] + *(_DWORD *)&HouseClass_Player.__pad_5568[18388],
                 0) )
          {
            v33 = (*(_DWORD *)&HouseClass_Player.__pad_5568[18384])++;
            *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v33) = v29;
          }
          stru_830620.__pad_BC0[148] = 0;
          CloseDialog(0, 0);
          *(&g_MatrixTransformState + 1299) = 0;
          Game::ResetFlags();
          Network::InitPlayerSlots();
          NetworkShare::GetField(*(int *)&HouseClass_Player.__pad_5568[17367]);
          LoadingScreen::Init();
          DialogIndirect = (DLGTEMPLATE *)CreateDialogIndirect(g_hInstance, (HWND)0xBD, g_hWnd, GameLobby::DlgProc, 0);
          SetupDialog((HWND)DialogIndirect, 189);
          ShowWindow((HWND)DialogIndirect, 1);
          v110 = 1;
          SendNetworkHeartbeat(1, 1, 1, 0);
        }
        continue;
    }
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[17284] != 8 )
    {
      switch ( *(_DWORD *)&HouseClass_Player.__pad_5568[17284] )
      {
        case 0x17:
          v42 = 0;
          if ( *(int *)&HouseClass_Player.__pad_5568[18384] > 0 )
          {
            while ( 1 )
            {
              v43 = ToWideStringChar(*(IUnknown **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v42));
              if ( !_strcmpi(v43, &HouseClass_Player.__pad_5568[17288]) )
                break;
              if ( ++v42 >= *(int *)&HouseClass_Player.__pad_5568[18384] )
                goto LABEL_291;
            }
            if ( v42 != -1 && !*((_BYTE *)&g_MatrixTransformState + 5208) )
              SetupNetworkLobbyDialog(
                (VectorClass *)&HouseClass_Player.__pad_5568[17331],
                &HouseClass_Player.__pad_5568[17288]);
          }
          continue;
        case 0x18:
          Block = _strdup((INIClass *)&HouseClass_Player.__pad_5568[17332]);
          edi148 = 0;
          v44 = (SessionClass *)&HouseClass_Player.__pad_5568[18396];
          while ( 1 )
          {
            v46 = ToWideStringChar((IUnknown *)v44->GameMode[0]);
            if ( !_strcmpi(v46, &HouseClass_Player.__pad_5568[17288]) )
              break;
            v44 = (SessionClass *)((char *)v44 + 4);
            ++edi148;
            if ( (int)v44 >= (int)&HouseClass_Player.__pad_5568[18428] )
              goto LABEL_151;
          }
          if ( edi148 != -1 && !*((_BYTE *)&g_MatrixTransformState + 5208) )
          {
            v47 = strtok(Block, (ObjectClass *)&stru_817F40.nextObject);
            v48 = 0;
            if ( v47 )
              v48 = (SkirmishDialog *)atol(v47);
            v49 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
            v50 = 0;
            if ( v49 )
              v50 = atol(v49);
            v51 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
            v52 = 0;
            if ( v51 )
              v52 = atol(v51);
            v53 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
            aP1 = 0;
            if ( v53 )
              aP1 = (SessionClass *)atol(v53);
            if ( !Dialog::FindByHandle((void *)0xBC) )
              Dialog::FindByHandle((void *)0xBD);
            PlayerSide = SessionClass::GetPlayerSide(*(_DWORD *)&HouseClass_Player.__pad_5568[4 * edi148 + 18396]);
            v114 = PlayerSide != (_DWORD)v48;
            if ( (SkirmishDialog *)PlayerSide != v48 )
              SessionClass::SetPlayerOption(*(_DWORD *)&HouseClass_Player.__pad_5568[4 * edi148 + 18396], v48);
            v54 = (SessionClass *)SessionClass::GetPlayerColor(*(_DWORD *)&HouseClass_Player.__pad_5568[4 * edi148 + 18396]);
            v116 = v54 != (SessionClass *)v50;
            if ( v54 != (SessionClass *)v50 )
            {
              if ( NetworkSession::IsPlayerInGame(&HouseClass_Player.__pad_5568[8068], v50) )
                v50 = -2;
              SessionClass::SetPlayerColor(*(_DWORD *)&HouseClass_Player.__pad_5568[4 * edi148 + 18396], v50);
            }
            Option = SessionClass::GetOption(*(_DWORD *)&HouseClass_Player.__pad_5568[4 * edi148 + 18396]);
            v115 = Option != v52;
            if ( Option != v52 )
            {
              if ( NetworkLobby::CheckPlayerNames((void *)v52) )
                v52 = -2;
              SessionClass::SetOption(*(_DWORD *)&HouseClass_Player.__pad_5568[4 * edi148 + 18396], (SessionClass *)v52);
            }
            Option2 = SessionClass::GetOption2(*(_DWORD *)&HouseClass_Player.__pad_5568[4 * edi148 + 18396]);
            v58 = Option2 != (_DWORD)aP1;
            if ( (SessionClass *)Option2 != aP1 )
              SessionClass::SetOption2(*(_DWORD *)&HouseClass_Player.__pad_5568[4 * edi148 + 18396], aP1);
            if ( v114 || v116 || v115 || v58 )
            {
              v110 = 1;
              CheckGameSettingsChanged(1, 0);
            }
          }
LABEL_151:
          free(Block);
          continue;
        case 0xA:
          for ( i = 1; i < *(int *)&HouseClass_Player.__pad_5568[18360]; ++i )
          {
            v60 = ToWideStringChar(*(IUnknown **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18348] + 4 * i));
            if ( !_strcmpi(v60, &HouseClass_Player.__pad_5568[17288])
              && GUID::Compare(
                   (char *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18348] + 4 * i) + 40),
                   (int)&HouseClass_Player.__pad_5568[17744]) )
            {
              if ( (CoordStruct *)i == *(&g_MatrixTransformState + 1300) )
              {
                Game::ResetFlags();
                GameClass::InitDifficultyButtons();
                PtrVector::Destroy(&HouseClass_Player.__pad_5568[18368]);
                if ( Dialog::GetCurrentType() != 187 && Dialog::GetCurrentType() == 189 )
                  *(&g_MatrixTransformState + 1299) = (CoordStruct *)2;
              }
              if ( (int)*(&g_MatrixTransformState + 1301) > 0 && (CoordStruct *)i == *(&g_MatrixTransformState + 1300) )
                *(&g_MatrixTransformState + 1301) = (CoordStruct *)-1;
              __3_YAXPAX_Z(*(void **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18348] + 4 * i));
              v61 = (*(int (__thiscall **)(char *, int))(*(_DWORD *)&HouseClass_Player.__pad_5568[18344] + 16))(
                      &HouseClass_Player.__pad_5568[18344],
                      *(_DWORD *)&HouseClass_Player.__pad_5568[18348] + 4 * i);
              if ( v61 != -1 && v61 < *(int *)&HouseClass_Player.__pad_5568[18360] )
              {
                --*(_DWORD *)&HouseClass_Player.__pad_5568[18360];
                for ( ;
                      v61 < *(int *)&HouseClass_Player.__pad_5568[18360];
                      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18348] + 4 * v61 - 4) = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18348] + 4 * v61) )
                {
                  ++v61;
                }
              }
              *(&g_MatrixTransformState + 1300) = (CoordStruct *)(i - 1);
              v111 = 1;
              SendNetworkHeartbeat(0, 1, 1, 0);
            }
          }
          v62 = 0;
          NetworkLobby::CheckLobbyConditions(&HouseClass_Player.__pad_5568[17744]);
          for ( j = 0; j < *(int *)&HouseClass_Player.__pad_5568[18384]; ++j )
          {
            if ( GUID::Compare(
                   (char *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * j) + 40),
                   (int)&HouseClass_Player.__pad_5568[17744]) )
            {
              __3_YAXPAX_Z(*(void **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * j));
              v64 = (*(int (__thiscall **)(char *, int))(*(_DWORD *)&HouseClass_Player.__pad_5568[18368] + 16))(
                      &HouseClass_Player.__pad_5568[18368],
                      *(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * j);
              if ( v64 != -1 && v64 < *(int *)&HouseClass_Player.__pad_5568[18384] )
              {
                --*(_DWORD *)&HouseClass_Player.__pad_5568[18384];
                for ( ;
                      v64 < *(int *)&HouseClass_Player.__pad_5568[18384];
                      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v64 - 4) = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v64) )
                {
                  ++v64;
                }
              }
              v62 = 1;
              if ( (int)*(&g_MatrixTransformState + 1301) >= 2 )
                PlayVocClass(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1724), 0x2000, 1.0, 0);
            }
          }
          v65 = 1;
          if ( *(int *)&HouseClass_Player.__pad_5568[18336] > 1 )
          {
            do
            {
              if ( !GUID::Compare(
                      (char *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * v65) + 40),
                      (int)&HouseClass_Player.__pad_5568[17744])
                || (__3_YAXPAX_Z(*(void **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * v65)),
                    v66 = (*(int (__thiscall **)(char *, int))(*(_DWORD *)&HouseClass_Player.__pad_5568[18320] + 16))(
                            &HouseClass_Player.__pad_5568[18320],
                            *(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * v65),
                    v66 == -1) )
              {
                v67 = *(_DWORD *)&HouseClass_Player.__pad_5568[18336];
              }
              else
              {
                v67 = *(_DWORD *)&HouseClass_Player.__pad_5568[18336];
                if ( v66 < *(int *)&HouseClass_Player.__pad_5568[18336] )
                {
                  v67 = *(_DWORD *)&HouseClass_Player.__pad_5568[18336] - 1;
                  *(_DWORD *)&HouseClass_Player.__pad_5568[18336] = v67;
                  if ( v66 < v67 )
                  {
                    do
                    {
                      ++v66;
                      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * v66 - 4) = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * v66);
                      v67 = *(_DWORD *)&HouseClass_Player.__pad_5568[18336];
                    }
                    while ( v66 < *(int *)&HouseClass_Player.__pad_5568[18336] );
                  }
                }
              }
              ++v65;
            }
            while ( v65 < v67 );
          }
          if ( !v62 )
            goto LABEL_222;
          Game::ResetReadyStates();
          v68 = (HWND)Dialog::FindByHandle((void *)0xBD);
          EnablePlayerSlotControls(v68, 1);
          if ( Dialog::GetCurrentType() != 107 )
          {
            (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 144))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]);
LABEL_222:
            v110 = 1;
            continue;
          }
          Current = (ObjectClass *)Dialog::GetCurrent();
          v70 = SendDlgItemMessageA((HWND)Current, 1771, 0x188u, 0, 0);
          if ( v70 == -1 )
            goto LABEL_222;
          v71 = SendDlgItemMessageA((HWND)Current, 1771, 0x199u, v70, 0);
          (*(void (__thiscall **)(LRESULT))(*(_DWORD *)v71 + 144))(v71);
          v110 = 1;
          break;
        case 0xB:
        case 0xE:
          if ( *(&g_MatrixTransformState + 1301) == (CoordStruct *)2 )
          {
            *(_DWORD *)&HouseClass_Player.__pad_5568[8860] = *(_DWORD *)&HouseClass_Player.__pad_5568[17331];
            *(_DWORD *)&HouseClass_Player.__pad_5568[10344] = *(_DWORD *)&HouseClass_Player.__pad_5568[17744];
            *(_DWORD *)&HouseClass_Player.__pad_5568[10348] = *(_DWORD *)&HouseClass_Player.__pad_5568[17748];
            *(_DWORD *)&HouseClass_Player.__pad_5568[10352] = *(_DWORD *)&HouseClass_Player.__pad_5568[17752];
            *(_DWORD *)&HouseClass_Player.__pad_5568[8856] = *(_DWORD *)&HouseClass_Player.__pad_5568[18384];
            *(&g_MatrixTransformState + 1299) = (CoordStruct *)1;
            if ( *(_DWORD *)&HouseClass_Player.__pad_5568[17284] == 11 )
            {
              *(&g_MatrixTransformState + 1301) = (CoordStruct *)3;
            }
            else if ( *(_DWORD *)&HouseClass_Player.__pad_5568[17284] == 14 )
            {
              *(&g_MatrixTransformState + 1301) = (CoordStruct *)4;
            }
            goto LABEL_336;
          }
          break;
        case 4:
          if ( *(_DWORD *)&HouseClass_Player.__pad_5568[17331] != *(_DWORD *)&HouseClass_Player.__pad_5568[8392] )
          {
            v72 = 0;
            if ( *(int *)&HouseClass_Player.__pad_5568[18336] <= 0 )
            {
LABEL_230:
              v73 = __2_YAPAXI_Z(0x85u);
              v74 = v73;
              if ( v73 )
                Waypoint::InitInvalid((_BYTE *)(v73 + 40));
              else
                v74 = 0;
              v78 = CharToWideString(&HouseClass_Player.__pad_5568[17288]);
              wcscpy((wchar_t *)v74, (const wchar_t *)v78);
              *(_DWORD *)(v74 + 40) = *(_DWORD *)&HouseClass_Player.__pad_5568[17744];
              *(_DWORD *)(v74 + 44) = *(_DWORD *)&HouseClass_Player.__pad_5568[17748];
              *(_DWORD *)(v74 + 48) = *(_DWORD *)&HouseClass_Player.__pad_5568[17752];
              v79 = *(_DWORD *)&stru_87C374.__pad_579C[22576];
              if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 )
                v79 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568];
              *(_DWORD *)(v74 + 52) = v79;
              *(_BYTE *)(v74 + 56) = 0;
              *(_DWORD *)(v74 + 57) = *(_DWORD *)&HouseClass_Player.__pad_5568[17335];
              if ( *(int *)&HouseClass_Player.__pad_5568[18336] < *(int *)&HouseClass_Player.__pad_5568[18328]
                || (HouseClass_Player.__pad_5568[18333] || !*(_DWORD *)&HouseClass_Player.__pad_5568[18328])
                && *(int *)&HouseClass_Player.__pad_5568[18340] > 0
                && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player.__pad_5568[18320]
                                                                          + 8))(
                     &HouseClass_Player.__pad_5568[18320],
                     *(_DWORD *)&HouseClass_Player.__pad_5568[18328] + *(_DWORD *)&HouseClass_Player.__pad_5568[18340],
                     0) )
              {
                eax245 = (*(_DWORD *)&HouseClass_Player.__pad_5568[18336])++;
                *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * eax245) = v74;
              }
            }
            else
            {
              while ( !GUID::Compare(
                         (char *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * v72) + 40),
                         (int)&HouseClass_Player.__pad_5568[17744]) )
              {
                if ( ++v72 >= *(int *)&HouseClass_Player.__pad_5568[18336] )
                  goto LABEL_230;
              }
              v75 = (wchar_t **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * v72);
              v76 = CharToWideString(&HouseClass_Player.__pad_5568[17288]);
              wcscpy(*v75, (const wchar_t *)v76);
              v77 = *(_DWORD *)&stru_87C374.__pad_579C[22576];
              if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 )
                v77 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568];
              *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * v72) + 52) = v77;
              *(_BYTE *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * v72) + 56) = 0;
              *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18324] + 4 * v72) + 57) = *(_DWORD *)&HouseClass_Player.__pad_5568[17335];
            }
            if ( !*(&g_MatrixTransformState + 1300) )
              v110 = 1;
          }
          continue;
        case 5:
          if ( *(&g_MatrixTransformState + 1301) != (CoordStruct *)1
            && *(&g_MatrixTransformState + 1301) != (CoordStruct *)2 )
          {
            memset(v123, 0, sizeof(v123));
            v124 = 0;
            v125 = 0;
            v123[0] = 4;
            v80 = *(ObjectClass **)&HouseClass_Player.__pad_5568[8416];
            strcpy((char *)&v123[1], &HouseClass_Player.__pad_5568[8396]);
            *(_DWORD *)((char *)&v123[11] + 3) = *(_DWORD *)&HouseClass_Player.__pad_5568[8392];
            *(_DWORD *)((char *)&v123[12] + 3) = v80;
            Network::SendMessage(
              (int)&HouseClass_Player.__pad_5568[22284],
              (int)v123,
              455,
              1,
              (int)&HouseClass_Player.__pad_5568[17744],
              0,
              0);
            Event::Dispatch();
          }
          continue;
        case 0xC:
          v81 = *(ObjectClass **)&HouseClass_Player.__pad_5568[17556];
          if ( *(&g_MatrixTransformState + 1301) != (CoordStruct *)2
            || *(_DWORD *)&HouseClass_Player.__pad_5568[17560] == WideString::Hash((wchar_t *)&HouseClass_Player.__pad_5568[17244]) )
          {
            v83 = CharToWideString(&HouseClass_Player.__pad_5568[17288]);
            Dialog::ShowMessage((LPARAM)v81, (size_t)g_Str_Trace___s_, v83, 11064936);
            PlayVocClass(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1708), 0x2000, 1.0, 0);
          }
          continue;
        case 6:
          if ( *(_DWORD *)&HouseClass_Player.__pad_5568[18384] )
          {
            v84 = 0;
            v85 = 0;
            Blocka = 0;
            v86 = 1;
            if ( *(int *)&HouseClass_Player.__pad_5568[18384] > 1 )
            {
              while ( 1 )
              {
                v87 = ToWideStringChar(*(IUnknown **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v86));
                if ( !_strcmpi(v87, &HouseClass_Player.__pad_5568[17288]) )
                  break;
                if ( ++v86 >= *(int *)&HouseClass_Player.__pad_5568[18384] )
                  goto LABEL_266;
              }
              if ( Network::processPacket(
                     (char *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v86) + 40),
                     (TechnoTypeClass *)&HouseClass_Player.__pad_5568[17744]) )
              {
                v84 = 1;
              }
              else
              {
                v85 = 1;
                Blocka = 1;
              }
            }
LABEL_266:
            v88 = ToWideStringChar(**(IUnknown ***)&HouseClass_Player.__pad_5568[18372]);
            if ( !_strcmpi(v88, &HouseClass_Player.__pad_5568[17288]) || v84 )
            {
              memset(v119, 0, sizeof(v119));
              v120 = 0;
              v121 = 0;
              v119[0] = 8;
              *(_DWORD *)((char *)&v119[11] + 3) = 0;
              Network::SendMessage(
                (int)&HouseClass_Player.__pad_5568[22284],
                (int)v119,
                455,
                1,
                (int)&HouseClass_Player.__pad_5568[17744],
                0,
                0);
              continue;
            }
            if ( v85 )
              goto LABEL_276;
            if ( *(_DWORD *)&HouseClass_Player.__pad_5568[17371] != 1 )
            {
              if ( NetworkLobby::CheckMinPlayers() )
              {
                memset(v119, 0, sizeof(v119));
                v120 = 0;
                v121 = 0;
                v119[0] = 8;
                *(_DWORD *)((char *)&v119[11] + 3) = 1;
                Network::SendMessage(
                  (int)&HouseClass_Player.__pad_5568[22284],
                  (int)v119,
                  455,
                  1,
                  (int)&HouseClass_Player.__pad_5568[17744],
                  0,
                  0);
                continue;
              }
              if ( *(_DWORD *)&HouseClass_Player.__pad_5568[17371] != 1 )
                goto LABEL_276;
            }
            if ( GameOption::CheckDuplicate() )
            {
              memset(v119, 0, sizeof(v119));
              v120 = 0;
              v121 = 0;
              v119[0] = 8;
              *(_DWORD *)((char *)&v119[11] + 3) = 1;
            }
            else
            {
LABEL_276:
              v89 = 1;
              if ( !Blocka )
              {
                v89 = *(_DWORD *)&HouseClass_Player.__pad_5568[17351] == (_DWORD)*(&g_MatrixTransformState + 1303);
                if ( *(_DWORD *)&HouseClass_Player.__pad_5568[17355] != unknown_libname_30() )
                  v89 = 0;
                if ( *(CoordStruct **)&HouseClass_Player.__pad_5568[17359] != *(&g_MatrixTransformState + 1304) )
                  v89 = 0;
                if ( *(INIClass **)&HouseClass_Player.__pad_5568[17363] != GameOptions::GetEntry() )
                  v89 = 0;
              }
              aP1a = 0;
              if ( *(int *)&HouseClass_Player.__pad_5568[18384] > 0 )
              {
                v90 = *(_DWORD *)&HouseClass_Player.__pad_5568[18372];
                v91 = *(_DWORD *)&HouseClass_Player.__pad_5568[18384];
                do
                {
                  if ( !strcmp((const char *)(*(_DWORD *)v90 + 52), &HouseClass_Player.__pad_5568[17308]) )
                    aP1a = (SessionClass *)((char *)aP1a + 1);
                  v90 += 4;
                  --v91;
                }
                while ( v91 );
                if ( (int)aP1a >= 1 && !Blocka )
                {
                  memset(v119, 0, sizeof(v119));
                  v120 = 0;
                  v121 = 0;
                  v119[0] = 8;
                  *(_DWORD *)((char *)&v119[11] + 3) = 7;
                  Network::SendMessage(
                    (int)&HouseClass_Player.__pad_5568[22284],
                    (int)v119,
                    455,
                    1,
                    (int)&HouseClass_Player.__pad_5568[17744],
                    0,
                    0);
                  continue;
                }
              }
              if ( v89 )
              {
                if ( Blocka )
                  continue;
                updated = NetworkBuffer::UpdateWindow(
                            (VersionClass *)&HouseClass_Player.__pad_5568[23084],
                            *(CellStruct **)&HouseClass_Player.__pad_5568[17343],
                            *(unsigned int *)&HouseClass_Player.__pad_5568[17347]);
                *(_DWORD *)&HouseClass_Player.__pad_5568[9744] = updated;
                if ( updated )
                {
                  if ( updated == -1 )
                  {
                    memset(v119, 0, sizeof(v119));
                    v120 = 0;
                    v121 = 0;
                    v119[0] = 8;
                    *(_DWORD *)((char *)&v119[11] + 3) = 3;
                    Network::SendMessage(
                      (int)&HouseClass_Player.__pad_5568[22284],
                      (int)v119,
                      455,
                      1,
                      (int)&HouseClass_Player.__pad_5568[17744],
                      0,
                      0);
                  }
                  else
                  {
                    *(_DWORD *)&HouseClass_Player.__pad_5568[8088] = Network::GetMaxPacketSize((VersionClass *)&HouseClass_Player.__pad_5568[23084]);
                    v93 = __2_YAPAXI_Z(0x85u);
                    v94 = v93;
                    if ( v93 )
                      Waypoint::InitInvalid((_BYTE *)(v93 + 40));
                    else
                      v94 = 0;
                    memset((void *)v94, 0, 0x84u);
                    *(_BYTE *)(v94 + 132) = 0;
                    v95 = CharToWideString(&HouseClass_Player.__pad_5568[17288]);
                    wcscpy((wchar_t *)v94, (const wchar_t *)v95);
                    *(_DWORD *)(v94 + 40) = *(_DWORD *)&HouseClass_Player.__pad_5568[17744];
                    *(_DWORD *)(v94 + 44) = *(_DWORD *)&HouseClass_Player.__pad_5568[17748];
                    *(_DWORD *)(v94 + 48) = *(_DWORD *)&HouseClass_Player.__pad_5568[17752];
                    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072] )
                    {
                      if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072]
                                                                             + 28))(
                             *(_DWORD *)&HouseClass_Player.__pad_5568[8072],
                             *(_DWORD *)&HouseClass_Player.__pad_5568[17331]) )
                      {
                        v96 = *(SkirmishDialog **)&HouseClass_Player.__pad_5568[17331];
                      }
                      else
                      {
                        v96 = (SkirmishDialog *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072]
                                                                              + 40))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]);
                      }
                      SessionClass::SetPlayerOption(v94, v96);
                    }
                    strcpy((char *)(v94 + 52), &HouseClass_Player.__pad_5568[17308]);
                    v97 = *(_DWORD *)&HouseClass_Player.__pad_5568[17335];
                    if ( NetworkLobby::CheckPlayerNameValid(*(void **)&HouseClass_Player.__pad_5568[17335]) )
                      v97 = -2;
                    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[17371] == 1 )
                    {
                      v97 = -2;
                      SessionClass::SetPlayerOption(v94, (SkirmishDialog *)0xFFFFFFFD);
                      *(_DWORD *)(v94 + 107) = -1;
                    }
                    else
                    {
                      *(_DWORD *)(v94 + 107) = 0;
                      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[17331] == -3 )
                      {
                        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072] )
                        {
                          v106 = (CCINIClass *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072]
                                                                             + 40))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]);
                          SessionClass::SetPlayerOption(v94, (SkirmishDialog *)v106);
                        }
                        else
                        {
                          SessionClass::SetPlayerOption(v94, (SkirmishDialog *)0xFFFFFFFE);
                        }
                      }
                    }
                    SessionClass::SetPlayerColor(v94, v97);
                    SessionClass::SetOption(v94, (SessionClass *)0xFFFFFFFE);
                    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072] )
                    {
                      v107 = (CCINIClass *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072]
                                                                         + 44))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]);
                      SessionClass::SetOption2(v94, (SessionClass *)v107);
                    }
                    else
                    {
                      SessionClass::SetOption2(v94, (SessionClass *)0xFFFFFFFE);
                    }
                    if ( *(int *)&HouseClass_Player.__pad_5568[18384] < *(int *)&HouseClass_Player.__pad_5568[18376]
                      || (HouseClass_Player.__pad_5568[18381] || !*(_DWORD *)&HouseClass_Player.__pad_5568[18376])
                      && *(int *)&HouseClass_Player.__pad_5568[18388] > 0
                      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player.__pad_5568[18368]
                                                                                + 8))(
                           &HouseClass_Player.__pad_5568[18368],
                           *(_DWORD *)&HouseClass_Player.__pad_5568[18376]
                         + *(_DWORD *)&HouseClass_Player.__pad_5568[18388],
                           0) )
                    {
                      v98 = (*(_DWORD *)&HouseClass_Player.__pad_5568[18384])++;
                      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v98) = v94;
                    }
                    ebx325 = NetworkLobby::AssignPlayerSlot(v94);
                    Game::ResetReadyStates();
                    memset(v119, 0, sizeof(v119));
                    v120 = 0;
                    v121 = 0;
                    v119[0] = 7;
                    v110 = 1;
                    strcpy((char *)&v119[1], &HouseClass_Player.__pad_5568[8396]);
                    *(_DWORD *)((char *)&v119[11] + 3) = SessionClass::GetPlayerSide(v94);
                    v99 = (SessionClass *)SessionClass::GetPlayerColor(v94);
                    *(_DWORD *)((char *)&v119[21] + 3) = *(_DWORD *)&stru_830620.__pad_DFC[648];
                    *(_DWORD *)((char *)&v119[12] + 3) = v99;
                    *(_DWORD *)((char *)&v119[20] + 3) = ebx325;
                    Network::SendMessage(
                      (int)&HouseClass_Player.__pad_5568[22284],
                      (int)v119,
                      455,
                      1,
                      (int)&HouseClass_Player.__pad_5568[17744],
                      0,
                      0);
                    PlayVocClass(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1728), 0x2000, 1.0, 0);
                    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072] )
                    {
                      v101 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 152))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]);
                      if ( v101 != -1 )
                        *(_DWORD *)&HouseClass_Player.__pad_5568[10328] = v101;
                    }
                    CheckGameSettingsChanged(1, 0);
                    memset(v129, 0, sizeof(v129));
                    v130 = 0;
                    v131 = 0;
                    v129[0] = 22;
                    strcpy((char *)&v129[1], &HouseClass_Player.__pad_5568[8396]);
                    Player::BuildListString((wchar_t *)((char *)&v129[11] + 3));
                    v102 = *(_DWORD *)&HouseClass_Player.__pad_5568[18384];
                    for ( k = 1; k < v102; ++k )
                    {
                      Network::SendMessage(
                        (int)&HouseClass_Player.__pad_5568[22284],
                        (int)v129,
                        455,
                        1,
                        *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * k) + 40,
                        0,
                        0);
                      Event::Dispatch();
                    }
                    Event_Handle();
                  }
                  continue;
                }
                memset(v119, 0, sizeof(v119));
                v120 = 0;
                v121 = 0;
                v119[0] = 8;
                *(_DWORD *)((char *)&v119[11] + 3) = 2;
              }
              else
              {
                memset(v119, 0, sizeof(v119));
                v120 = 0;
                v121 = 0;
                v119[0] = 8;
                *(_DWORD *)((char *)&v119[11] + 3) = 6;
              }
            }
          }
          else
          {
            memset(v119, 0, sizeof(v119));
            v120 = 0;
            v121 = 0;
            v119[0] = 8;
            *(_DWORD *)((char *)&v119[11] + 3) = 5;
          }
          Network::SendMessage(
            (int)&HouseClass_Player.__pad_5568[22284],
            (int)v119,
            455,
            1,
            (int)&HouseClass_Player.__pad_5568[17744],
            0,
            0);
          break;
      }
      continue;
    }
    v35 = 0;
    if ( *(&g_MatrixTransformState + 1301) == (CoordStruct *)2 )
    {
      memset(v126, 0, sizeof(v126));
      v127 = 0;
      v128 = 0;
      v126[0] = 10;
      strcpy((char *)&v126[1], &HouseClass_Player.__pad_5568[8396]);
      for ( m = 1; m < *(int *)&HouseClass_Player.__pad_5568[18384]; ++m )
      {
        Network::SendMessage(
          (int)&HouseClass_Player.__pad_5568[22284],
          (int)v126,
          455,
          1,
          *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * m) + 40,
          0,
          0);
        Event::Dispatch();
      }
      Network::SendMessage((int)&HouseClass_Player.__pad_5568[22284], (int)v126, 455, 0, 0, 0, 0);
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[17224] )
        Network::SendMessage(
          (int)&HouseClass_Player.__pad_5568[22284],
          (int)v126,
          455,
          0,
          (int)&HouseClass_Player.__pad_5568[17228],
          0,
          0);
      while ( Network::GetQueueCount((int)&HouseClass_Player.__pad_5568[22284]) > 0 )
      {
        if ( !Network::ReceiveLoop(&HouseClass_Player.__pad_5568[22284]) )
          break;
        Event::Dispatch();
      }
      *(_WORD *)&HouseClass_Player.__pad_5568[17244] = 0;
      Game::ResetFlags();
      GameClass::InitDifficultyButtons();
      PtrVector::Destroy(&HouseClass_Player.__pad_5568[18368]);
      PtrVector::Destroy(&HouseClass_Player.__pad_5568[18320]);
      *((_QWORD *)&g_MatrixTransformState + 650) = 0xFFFFFFFF00000000uLL;
      stru_830620.__pad_BC0[148] = 1;
      v35 = 4;
      v110 = 1;
    }
    else if ( *(&g_MatrixTransformState + 1301) == (CoordStruct *)1 )
    {
      v35 = *(_DWORD *)&HouseClass_Player.__pad_5568[17331];
      *(&g_MatrixTransformState + 1301) = (CoordStruct *)-1;
    }
    else if ( *(&g_MatrixTransformState + 1301) != (CoordStruct *)-1 )
    {
      continue;
    }
    v37 = GetStringCSF((wchar_t *)&stru_830620.__pad_DFC[144], 0, &stru_830620.__pad_BC0[168], 4540);
    Dialog::ShowMessage(-1, (size_t)v37);
    PlayVocClass(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1712), 0x2000, 1.0, 0);
    switch ( v35 )
    {
      case 0:
        v38 = GetStringCSF((wchar_t *)&stru_830620.__pad_DFC[516], 0, &stru_830620.__pad_BC0[168], 4546);
        goto LABEL_131;
      case 1:
        if ( *(&g_MatrixTransformState + 2222) )
          v38 = GetStringCSF((wchar_t *)&stru_830620.__pad_DFC[480], 0, &stru_830620.__pad_BC0[168], 4550);
        else
          v38 = GetStringCSF((wchar_t *)&stru_830620.__pad_DFC[500], 0, &stru_830620.__pad_BC0[168], 4548);
LABEL_131:
        if ( v38 )
          ShowDialogConfirm((CampaignScore *)v38, 0, sub_5DAF20, 0);
        break;
      case 2:
        v38 = GetStringCSF(g_Str_TXT_YOURGAME_OUTDATED, 0, &stru_830620.__pad_BC0[168], 4552);
        goto LABEL_131;
      case 3:
        v38 = GetStringCSF(g_Str_TXT_DESTGAME_OUTDATED, 0, &stru_830620.__pad_BC0[168], 4554);
        goto LABEL_131;
      case 6:
        v38 = GetStringCSF(g_Str_TXT_MISMATCH, 0, &stru_830620.__pad_BC0[168], 4556);
        goto LABEL_131;
      case 5:
        v38 = GetStringCSF((wchar_t *)&stru_830620.__pad_DFC[460], 0, &stru_830620.__pad_BC0[168], 4558);
        goto LABEL_131;
      case 7:
        v38 = GetStringCSF((wchar_t *)&stru_830620.__pad_DFC[444], 0, &stru_830620.__pad_BC0[168], 4560);
        goto LABEL_131;
    }
    if ( Dialog::GetCurrentType() != 187 )
    {
      *(&g_MatrixTransformState + 1299) = (CoordStruct *)2;
LABEL_138:
      SendNetworkHeartbeat(0, 0, 1, 0);
      continue;
    }
    eax134 = Dialog::GetCurrent();
    v39 = (IUnknown *)eax134;
    if ( !eax134 )
      goto LABEL_138;
    EnableWindow(eax134, 1);
    DlgItem = GetDlgItem((HWND)v39, 1345);
    if ( !DlgItem )
      goto LABEL_138;
    EnableWindow(DlgItem, 1);
    SendNetworkHeartbeat(0, 0, 1, 0);
LABEL_291:
    ;
  }
  while ( !*(&g_MatrixTransformState + 1299) );
LABEL_336:
  if ( v110 )
    GameSetup::DisplayPlayers(1);
  result = v111;
  if ( v111 )
    return NetworkLobby::UpdatePlayerList(v109);
  return result;
}

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
