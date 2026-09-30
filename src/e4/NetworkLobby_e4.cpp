// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>

#include "e4/e4_globals.hpp"
#include "e4/classes/NetworkLobby_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/GameClass_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Scenario_e4.hpp"
#include "e4/classes/Session_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/CoordStruct_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/ScriptAction_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Process_e4.hpp"
#include "e4/classes/BuildingPlacement_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/NeuronClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/NeuronClass_25_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/NetworkClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"

// 0x5D4210
namespace gamemd {
int NetworkLobby::MessageList_Append(int a2, int a3, CellStruct * aP3, char a5, int a6)
{
  int v8; // eax
  int i; // edi
  int v10; // edi
  unsigned short *v11; // eax
  char *v12; // ecx
  int v13; // edx
  wchar_t *v14; // ebx
  int v15; // eax
  void * v16;
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // ecx
  int v21; // edi
  int *v22; // eax
  int v23; // edx

    if ( *((unsigned char *)this + 25) )
  {
        (*(void (**)(unsigned int))(*(unsigned int *)*((unsigned int *)this + 36) + 80))(*((unsigned int *)this + 36));
    return 0; /*0x5d4222*/
  }
  else
  {
        if ( *((unsigned char *)this + 26) )
    {
            v8 = *this;
      for ( i = 0; v8; v8 = (*(int (**)(int))(*(unsigned int *)v8 + 4))(v8) ) /*0x5d4232*/
        ++i; /*0x5d423e*/
            if ( *((unsigned char *)this + 25) && *((unsigned char *)this + 26) )
        ++i; /*0x5d4254*/
            if ( i + 1 > *((unsigned int *)this + 12) )
      {
                v10 = *this;
                *this = (*(int (**)(unsigned int))(*(unsigned int *)*(char *)this + 144))(*this);
        v11 = (unsigned short *)((char *)this + 5248); /*0x5d4268*/
                v12 = (char *)this + 712;
        v13 = 14; /*0x5d4274*/
        do /*0x5d428d*/
        {
          if ( *(char **)(v10 + 48) == v12 ) /*0x5d427c*/
            *v11 = 1; /*0x5d427e*/
          ++v11; /*0x5d4283*/
          v12 += 324; /*0x5d4286*/
          --v13; /*0x5d428c*/
        }
        while ( v13 ); /*0x5d428d*/
        if ( v10 ) /*0x5d4291*/
          (**(void (***)(int, int))v10)(v10, 1); /*0x5d4299*/
      }
    }
    v14 = (wchar_t *)((int)(aP3));
    if ( !aP3 ) /*0x5d42a1*/
      v14 = &g_TypeClass_DefaultString; /*0x5d42a3*/
        *((unsigned short *)this + 348) = a5;
        memset((char *)this + 40, 0, 0x144u);
        wcscpy((wchar_t *)this + 20, (const wchar_t *)v14);
        *((unsigned short *)this + 182) = 0;
    v15 = wcslen(v14); /*0x5d42d4*/
        *((unsigned int *)this + 692) = v15;
        *((unsigned int *)this + 688) = v15;
    v16 = RA2_OPNEW(0x4Cu); /*0x5d42e7*/
    if ( v16 ) /*0x5d42f1*/
    {
      v17 = a3; /*0x5d42f3*/
      IDA_BYTE1(v17) = IDA_BYTE1(a3) | 0x80; /*0x5d42fb*/
      v18 = MessageListClass::clearMessages( /*0x5d430b*/
              v16,
              (int)&this->__pad_C[28],
              *(unsigned int *)&this->__pad_C[16],
              *(unsigned int *)&this->__pad_C[20],
              a2,
              v17);
    }
    else
    {
      v18 = 0; /*0x5d4312*/
    }
    v19 = a6; /*0x5d4314*/
        *((unsigned int *)this + 36) = v18;
    if ( a6 <= 0 ) /*0x5d431d*/
            v19 = *((unsigned int *)this + 708);
    *(unsigned int *)(v18 + 56) = v19; /*0x5d4325*/
        v20 = *((unsigned int *)this + 36);
    if ( v20 ) /*0x5d432d*/
    {
            *((unsigned char *)this + 25) = 1;
      (*(void (**)(int))(*(unsigned int *)v20 + 80))(v20); /*0x5d4335*/
    }
    else
    {
            *((unsigned char *)this + 25) = 0;
    }
    Network_Append(); /*0x5d433e*/
        if ( *((unsigned char *)this + 26) )
    {
            if ( *((unsigned char *)this + 25) )
                v21 = *((unsigned int *)this + 8) + *((unsigned int *)this + 20);
      else
                v21 = *((unsigned int *)this + 8);
            v22 = (int *)*this;
            v22 = (int *)*this;
      {
        do /*0x5d4373*/
        {
          v23 = *v22; /*0x5d4364*/
          v22[4] = v21; /*0x5d4368*/
          v22 = (int *)(*(int (**)(int *))(v23 + 4))(v22); /*0x5d436b*/
                    v21 += *((unsigned int *)this + 20);
        }
        while ( v22 ); /*0x5d4373*/
      }
            --*((unsigned int *)this + 12);
    }
        return *((unsigned int *)this + 36);
  }
}
}
// 0x5DB9B0
namespace gamemd {
int NetworkLobby_UpdatePlayerList()
{
  int result; // eax
  HWND Current; // esi
  HWND DlgItem; // ebp
  wchar_t *String; // eax
  int i; // ebx
  HWND v5; // esi
  wchar_t *v6; // [esp-18h] [ebp-BCh]
  int v7; // [esp-14h] [ebp-B8h]
  LRESULT wParam; // [esp+0h] [ebp-A4h]
  wchar_t lParam[80]; // [esp+4h] [ebp-A0h] BYREF

    result = Dialog::GetCurrentType();
  if ( result == 187 ) /*0x5db9c0*/
  {
        Current = Dialog::GetCurrent();
    DlgItem = GetDlgItem(Current, 1353); /*0x5db9e3*/
    if ( (int)g_NetworkSetupConfig >= dword_A8DA6C ) /*0x5db9ec*/
    {
      g_NetworkSetupConfig = dword_A8DA6C - 1; /*0x5db9fa*/
      SendNetworkHeartbeat(0, 1, 0, 0); /*0x5db9ff*/
    }
    if ( (g_NetworkSetupConfig & 0x80000000) != 0 ) /*0x5dba0b*/
      g_NetworkSetupConfig = 0; /*0x5dba0d*/
    wParam = SendDlgItemMessageA(Current, 1353, 0x18Eu, 0, 0); /*0x5dba3d*/
    SendDlgItemMessageA(Current, 1353, 0x49Du, 0, 1); /*0x5dba41*/
    SendMessageA(DlgItem, 0x184u, 0, 0); /*0x5dba53*/
    String = GetStringCSF(aTxtLobby, 0, g_Str_File_netdlg2_cpp, 508); /*0x5dba66*/
    SendMessageA(DlgItem, 0x4CDu, 0, (LPARAM)String); /*0x5dba74*/
    for ( i = 1; i < dword_A8DA6C; ++i ) /*0x5dba82*/
    {
      v7 = *(unsigned int *)(dword_A8DA60 + 4 * i); /*0x5dba8c*/
      if ( *(unsigned char *)(v7 + 52) ) /*0x5dba8d*/
        v6 = GetStringCSF(aTxtThatguysGam, 0, g_Str_File_netdlg2_cpp, 514); /*0x5dbaae*/
      else
        v6 = GetStringCSF(aTxtThatguysGam_0, 0, g_Str_File_netdlg2_cpp, 516); /*0x5dbacc*/
      swprintf(lParam, (const size_t)v6, (const wchar_t *const)v7); /*0x5dbab0*/
      SendMessageA(DlgItem, 0x4CDu, 0, (LPARAM)lParam); /*0x5dbae3*/
    }
    SendDlgItemMessageA(Current, 1353, 0x186u, g_NetworkSetupConfig, 0); /*0x5dbb07*/
    SendDlgItemMessageA(Current, 1353, 0x197u, wParam, 0); /*0x5dbb1b*/
    SendDlgItemMessageA(Current, 1353, 0x49Du, 0, 0); /*0x5dbb2c*/
    v5 = GetDlgItem(Current, 1353); /*0x5dbb3a*/
    InvalidateRect(v5, 0, 0); /*0x5dbb41*/
    return UpdateWindow(v5); /*0x5dbb48*/
  }
  return result; /*0x5dbb52*/
}
}
// 0x5DC350
namespace gamemd {
int NetworkLobby::CreateGame()
{
  DLGTEMPLATE *DialogIndirect; // esi
  void (__stdcall *v1)(const MSG *); // edi
  void (__stdcall *v2)(const MSG *); // ebx
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
  DLGTEMPLATE *v18; // esi
  HWND v19; // eax
  ObjectClass *v22; // esi
  HWND v21; // eax
  HWND eax64; // eax
  ObjectClass *v26; // esi
  HWND v24; // eax
  wchar_t *eax71; // eax
  wchar_t *v32; // eax
  HWND v33; // eax
  HWND v34; // esi
  HWND v35; // eax
  CellStruct *v36; // ecx
  SkirmishDialog *PlayerOption; // eax
  int PlayerColor; // eax
  SessionClass *v44; // esi
  WinModemClass *v46; // edx
  int eax115; // eax
  DLGTEMPLATE *v47; // esi
  wchar_t *v52; // eax
  HWND v53; // eax
  HWND v54; // eax
  void (__stdcall *v55)(HWND, BOOL); // ebx
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
  int i; // edi
  SessionClass *v74; // esi
  wchar_t *v73; // eax
  HWND eax157a; // eax
  HWND v75; // eax
  wchar_t *v78; // eax
  HWND v79; // eax
  HWND v80; // eax
  SkirmishDialog *v87; // ebx
  int j; // esi
  CellStruct *v88; // ecx
  ObjectClass *v90; // esi
  int eax194; // eax
  int k; // esi
  CellStruct *v99; // esi
  int eax217; // eax
  UINT *p_message; // ecx
  DWORD v106; // [esp+10h] [ebp-3DCh]
  DWORD v107; // [esp+10h] [ebp-3DCh]
  DWORD v108; // [esp+1Ch] [ebp-3D0h]
  DWORD Ticks; // [esp+1Ch] [ebp-3D0h]
  wchar_t *v110; // [esp+28h] [ebp-3C4h] BYREF
  SkirmishDialog *v111; // [esp+2Ch] [ebp-3C0h]
  struct tagMSG Msg; // [esp+30h] [ebp-3BCh] BYREF
  unsigned int v113[113]; // [esp+5Ch] [ebp-390h] BYREF
  int16_t v114; // [esp+220h] [ebp-1CCh]
  char v115; // [esp+222h] [ebp-1CAh]
  unsigned int v116[113]; // [esp+224h] [ebp-1C8h] BYREF
  int16_t v117; // [esp+3E8h] [ebp-4h]
  char v118; // [esp+3EAh] [ebp-2h]
  *(&g_MatrixTransformState + 1303) = (CoordStruct *)GameConfig::ComputeHash();
  LoadArtINI();
  *(&g_MatrixTransformState + 1304) = (CoordStruct *)unknown_libname_29();
  *(&g_MatrixTransformState + 1305) = (CoordStruct *)unknown_libname_30();
  NetworkLobby::ValidateSerialNumber((char *)&g_MatrixTransformState + 4460);
  Network::SetConnectionParams((int *)&((unsigned int *)(HouseClass_Player))[44148], (IUnknown *)0x1E, -1, 600, (CellStruct *)1);
  ((unsigned int *)(HouseClass_Player))[39104] = 0;
  *(unsigned short *)&((unsigned int *)(HouseClass_Player))[39108] = 0;
  ((unsigned int *)(HouseClass_Player))[39106] = 1;
  *((unsigned char *)&g_MatrixTransformState + 5208) = 0;
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
  int v3 = 0;
  *(unsigned long long *)(&g_MatrixTransformState + 1299) = 0;
  *(&g_MatrixTransformState + 1301) = 0;
  ((unsigned int *)(stru_830620))[3156] = 1;
  while ( 1 )
  {
    if ( !v3 )
    {
      do
      {
        Network::ReceiveLoop(&((unsigned int *)(HouseClass_Player))[44148]);
        Sleep(0);
        this->Event::Dispatch();
        Network::ReceiveLoop(&((unsigned int *)(HouseClass_Player))[44148]);
        ScreenSaver::Process(0, (int)v2, 0);
        ++unk_AA0430;
        while ( GameLoopMessagePump(&Msg, 0, 0, 0, 1u) )
        {
          v1(&Msg);
          v2(&Msg);
        }
        this->Event::Dispatch();
        v3 = (int)*(&g_MatrixTransformState + 1299);
        if ( *(&g_MatrixTransformState + 1299) )
          break;
        if ( this->Dialog::GetCurrent() )
        {
          SendNetworkHeartbeat(0, 0, 0, 0);
          NetworkLobby::MessageHandler();
          if ( this->Dialog::GetCurrentType() == 188 )
            CheckGameSettingsChanged(0, 0);
          CheckNetworkGameTimeout();
          signed int v4 = (signed int)*(&g_MatrixTransformState + 1290);
          if ( *(&g_MatrixTransformState + 1288) != (int)((CoordStruct *))-1 )
          {
            signed int v5 = this->Timer::GetTicks() - (unsigned int)*(&g_MatrixTransformState + 1288);
            if ( v5 >= v4 )
              goto LABEL_13;
            v4 -= v5;
          }
          if ( !v4 )
          {
LABEL_13:
            if ( *(&g_MatrixTransformState + 1301) == (int)((CoordStruct *))1 )
            {
              this->Debug::Log();
              BroadcastNetworkMessage((int)*(&g_MatrixTransformState + 1300));
              *(&g_MatrixTransformState + 1301) = 0;
              SendNetworkHeartbeat(0, 0, 1, 0);
              StringCSF = (wchar_t *)(GetStringCSF((wchar_t *)&((unsigned int *)(stru_830620))[3724], 0, &((unsigned int *)(stru_830620))[3176], 1406));
              Dialog::ShowMessage(-1, (size_t)StringCSF);
              PlayVocClass(*(unsigned int *)(*(unsigned int *)&((unsigned int *)(stru_87C374))[44652] + 1712), 0x2000, 1.0, 0);
              Current = this->Dialog::GetCurrent();
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
    if ( *(&g_MatrixTransformState + 1299) == (int)((CoordStruct *))1741 )
    {
      ((unsigned int *)(HouseClass_Player))[39104] = 0;
      SaveConfigWOL((int)&((unsigned int *)(HouseClass_Player))[29932]);
      if ( SendNetworkJoinRequest((int)*(&g_MatrixTransformState + 1300), *(&g_MatrixTransformState + 2222) != 0) )
      {
        *(&g_MatrixTransformState + 1301) = (CoordStruct *)1;
      }
      else
      {
        v19 = this->Dialog::GetCurrent();
        v22 = (ObjectClass *)v19;
        if ( v19 )
        {
          EnableWindow(v19, 1);
          v21 = GetDlgItem((HWND)v22, 1345);
          if ( v21 )
            EnableWindow(v21, 1);
        }
      }
      if ( *(unsigned int *)&((unsigned int *)(HouseClass_Player))[29936] )
        (*(void (**)(unsigned int))(**(unsigned int **)&HouseClass_Player[29936] + 36))(*(unsigned int *)&HouseClass_Player[29936]);
    }
    if ( *(&g_MatrixTransformState + 1299) == (CoordStruct *)1742 )
    {
      HouseClass_Player[39104] = 0;
      SaveConfigWOL((int)&HouseClass_Player[29932]);
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
      if ( *(unsigned int *)&HouseClass_Player[29936] )
        (*(void (**)(unsigned int))(**(unsigned int **)&HouseClass_Player[29936] + 36))(*(unsigned int *)&HouseClass_Player[29936]);
    }
    if ( *(&g_MatrixTransformState + 1299) != (CoordStruct *)1740 )
      goto LABEL_83;
    char v25 = 1;
    if ( !strlen(&HouseClass_Player[30260]) )
    {
      eax71 = GetStringCSF((wchar_t *)&stru_830620[3708], 0, &stru_830620[3176], 1667);
      ShowDialogConfirm((CampaignScore *)eax71, 0, sub_5DAF20, 0);
      v25 = 0;
    }
    int v27 = 0;
    if ( *(int *)&HouseClass_Player[40224] > 0 )
    {
      while ( 1 )
      {
        if ( v25 )
        {
          char * v28 = ToWideStringChar(*(IUnknown **)(*(unsigned int *)&HouseClass_Player[40212] + 4 * v27));
          if ( !_strcmpi(v28, &HouseClass_Player[30260]) )
            break;
        }
        if ( ++v27 >= *(int *)&HouseClass_Player[40224] )
          goto LABEL_76;
      }
      v32 = GetStringCSF((wchar_t *)&stru_830620[3680], 0, &stru_830620[3176], 1677);
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
    char * v29 = CharToWideString(&HouseClass_Player[30260]);
    wcscpy((wchar_t *)&HouseClass_Player[39108], (const wchar_t *)v29);
    HouseClass_Player[39106] = 1;
    HouseClass_Player[39104] = 0;
    *(unsigned int *)&HouseClass_Player[29960] = 0;
    *(unsigned int *)&HouseClass_Player[31608] = VersionInfo::Read((int)&HouseClass_Player[44948]);
    LoadScenarioClassByIndex(*(int *)&HouseClass_Player[29960]);
    CloseDialog(0, 0);
    *(&g_MatrixTransformState + 1299) = 0;
    PtrVector::Destroy(&HouseClass_Player[40232]);
    int v30 = operator new(0x85u);
    int v31 = v30;
    if ( v30 )
      Waypoint::InitInvalid((unsigned char *)(v30 + 40));
    else
      v31 = 0;
    memset((void *)v31, 0, 0x84u);
    *(unsigned char *)(v31 + 132) = 0;
    char * v37 = CharToWideString(&HouseClass_Player[30260]);
    wcscpy((wchar_t *)v31, (const wchar_t *)v37);
    strcpy((char *)(v31 + 52), (const char *)&g_MatrixTransformState + 4460);
    PlayerOption = (SkirmishDialog *)Session::GetPlayerOption(&HouseClass_Player[29932]);
    SessionClass::SetPlayerOption(v31, PlayerOption);
    PlayerColor = Session::GetPlayerColor(&HouseClass_Player[29932]);
    SessionClass::SetPlayerColor(v31, PlayerColor);
    SessionClass::SetOption(v31, (SessionClass *)0xFFFFFFFE);
    SessionClass::SetOption2(v31, (SessionClass *)0xFFFFFFFE);
    *(unsigned int *)(v31 + 119) = 1;
    *(unsigned int *)(v31 + 107) = 0;
    *(unsigned int *)&stru_830620[4228] = 7;
    if ( *((unsigned char *)&g_MatrixTransformState + 5209) )
    {
      *(unsigned int *)&stru_830620[4228] = 0;
      *(unsigned int *)(v31 + 107) = -1;
    }
    else if ( SessionClass::GetPlayerSide(v31) == -3 )
    {
      SessionClass::SetPlayerOption(v31, (SkirmishDialog *)0xFFFFFFFE);
    }
    if ( *(int *)&HouseClass_Player[40248] < *(int *)&HouseClass_Player[40240]
      || (HouseClass_Player[40245] || !*(unsigned int *)&HouseClass_Player[40240])
      && *(int *)&HouseClass_Player[40252] > 0
      && (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)&HouseClass_Player[40232] + 8))(
           &HouseClass_Player[40232],
           *(unsigned int *)&HouseClass_Player[40240] + *(unsigned int *)&HouseClass_Player[40252],
           0) )
    {
      int v40 = (*(unsigned int *)&HouseClass_Player[40248])++;
      *(unsigned int *)(*(unsigned int *)&HouseClass_Player[40236] + 4 * v40) = v31;
    }
    if ( *(unsigned int *)&HouseClass_Player[29936] )
      (*(void (**)(unsigned int))(**(unsigned int **)&HouseClass_Player[29936] + 36))(*(unsigned int *)&HouseClass_Player[29936]);
    Game::ResetFlags();
    Network::InitPlayerSlots();
    NetworkShare::GetField(0);
    if ( !*(unsigned int *)&stru_830620[4228] )
    {
      SessionClass::SetPlayerOption(*(int *)&HouseClass_Player[40260], (SkirmishDialog *)0xFFFFFFFD);
      *(unsigned int *)(*(unsigned int *)&HouseClass_Player[40260] + 107) = -1;
    }
    *(&g_MatrixTransformState + 1301) = (CoordStruct *)2;
    int v41 = operator new(0x85u);
    v44 = (SessionClass *)v41;
    if ( v41 )
      Waypoint::InitInvalid((unsigned char *)(v41 + 40));
    SessionClass *v44 = 0;
    char * v43 = CharToWideString(&HouseClass_Player[30260]);
    wcscpy((wchar_t *)v44, (const wchar_t *)v43);
    v44->Config[4] = *(unsigned int *)&HouseClass_Player[39608];
    v44->Config[5] = *(unsigned int *)&HouseClass_Player[39612];
    v46 = *(WinModemClass **)&HouseClass_Player[39616];
    IDA_LOBYTE(v44->UniqueID) = 1;
    v44->Config[6] = (int)v46;
    int v45 = *(unsigned int *)&stru_87C374[45004];
    if ( *(unsigned int *)&stru_87C374[44996] != -1 )
      v45 += Timer::GetTicks() - *(unsigned int *)&stru_87C374[44996];
    *(int *)((char *)&v44->UniqueID + 1) = v45;
    if ( *(int *)&HouseClass_Player[40224] < *(int *)&HouseClass_Player[40216]
      || (HouseClass_Player[40221] || !*(unsigned int *)&HouseClass_Player[40216])
      && *(int *)&HouseClass_Player[40228] > 0
      && (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)&HouseClass_Player[40208] + 8))(
           &HouseClass_Player[40208],
           *(unsigned int *)&HouseClass_Player[40216] + *(unsigned int *)&HouseClass_Player[40228],
           0) )
    {
      eax115 = (*(unsigned int *)&HouseClass_Player[40224])++;
      *(unsigned int *)(*(unsigned int *)&HouseClass_Player[40212] + 4 * eax115) = v44;
    }
    *(&g_MatrixTransformState + 1300) = (CoordStruct *)(*(unsigned int *)&HouseClass_Player[40224] - 1);
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
        int v82 = 2;
        *(unsigned int *)&HouseClass_Player[30728] = 5;
        *(unsigned int *)&HouseClass_Player[40528] = 0;
        *(unsigned int *)&HouseClass_Player[30752] = 0;
        *(unsigned int *)&HouseClass_Player[30756] = 0;
        if ( *(unsigned int *)&HouseClass_Player[29952] == 2 )
        {
          v82 = 10;
          if ( *(unsigned int *)&HouseClass_Player[30728]
             * ((((unsigned int)Network::GetLobbyStatus(&HouseClass_Player[44148]) >> 3)
               + *(unsigned int *)&HouseClass_Player[30728]
               - 1)
              / *(unsigned int *)&HouseClass_Player[30728]) > 0xA )
          {
            *(unsigned int *)&HouseClass_Player[30724] = *(unsigned int *)&HouseClass_Player[30728]
                                                           * ((((unsigned int)Network::GetLobbyStatus(&HouseClass_Player[44148]) >> 3)
                                                             + *(unsigned int *)&HouseClass_Player[30728]
                                                             - 1)
                                                            / *(unsigned int *)&HouseClass_Player[30728]);
LABEL_235:
            HouseClass_Player[39106] = 0;
            SaveConfigWOL((int)&HouseClass_Player[29932]);
            return 1;
          }
        }
        else if ( Network::GetLobbyStatus(&HouseClass_Player[44148]) / 8 > 2 )
        {
          *(unsigned int *)&HouseClass_Player[30724] = Network::GetLobbyStatus(&HouseClass_Player[44148])
                                                         / 8;
          goto LABEL_235;
        }
        *(unsigned int *)&HouseClass_Player[30724] = v82;
        goto LABEL_235;
      }
      if ( SynchronizeMultiplayerGameStart(0) )
      {
        *((unsigned char *)&g_MatrixTransformState + 5208) = 1;
        goto LABEL_172;
      }
      v2 = (void (__stdcall *)(const MSG *))DispatchMessageA;
      v1 = (void (__stdcall *)(const MSG *))TranslateMessage;
      v3 = 2;
      *((unsigned char *)&g_MatrixTransformState + 5208) = 0;
      *(&g_MatrixTransformState + 1299) = (CoordStruct *)2;
    }
    else
    {
      if ( *(&g_MatrixTransformState + 1299) == (CoordStruct *)1416 )
      {
        *((unsigned char *)&g_MatrixTransformState + 5208) = 0;
        SaveConfigWOL((int)&HouseClass_Player[29932]);
      }
      int v48 = *(unsigned int *)&HouseClass_Player[40248];
      int v49 = 0;
      if ( *(int *)&HouseClass_Player[40248] > 0 )
      {
        int v50 = *(unsigned int *)&HouseClass_Player[40236];
        int v51 = *(unsigned int *)&HouseClass_Player[40248];
        do
        {
          if ( *(unsigned int *)(*(unsigned int *)v50 + 107) == -1 )
            ++v49;
          v50 += 4;
          --v51;
        }
        while ( v51 );
      }
      if ( *(&g_MatrixTransformState + 1299) == (CoordStruct *)1416 )
      {
        if ( *(unsigned int *)&HouseClass_Player[40248] - v49 > 1 )
        {
          v55 = (void (__stdcall *)(HWND, BOOL))EnableWindow;
        }
        else
        {
          v52 = GetStringCSF((wchar_t *)&stru_830620[3664], 0, &stru_830620[3176], 1864);
          Dialog::ShowMessage(-1, (size_t)v52);
          *(&g_MatrixTransformState + 1299) = 0;
          v53 = Dialog::GetCurrent();
          v54 = GetDlgItem(v53, 1416);
          v55 = (void (__stdcall *)(HWND, BOOL))EnableWindow;
          EnableWindow(v54, 1);
          if ( *(&g_MatrixTransformState + 1299) != (CoordStruct *)1416 )
            goto LABEL_136;
        }
        int v56 = 1;
        char v57 = 0;
        if ( v48 > 1 )
        {
          do
          {
            if ( !*(unsigned int *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Player[40236] + 4 * v56) + 127) )
            {
              int v104 = *(unsigned int *)(*(unsigned int *)&HouseClass_Player[40236] + 4 * v56);
              v58 = GetStringCSF((wchar_t *)&stru_830620[3648], 0, &stru_830620[3176], 1876);
              Dialog::ShowMessage(-1, (size_t)v58, v104, &HouseClass_Player[30166]);
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
      v63 = *(SkirmishDialog **)&HouseClass_Player[29936];
      v111 = *(SkirmishDialog **)&HouseClass_Player[29936];
      if ( *(&g_MatrixTransformState + 1299) == (CoordStruct *)1416 )
      {
        PlayerCountMap = ReadPlayerCountMap(*(int *)&HouseClass_Player[29960]);
        if ( PlayerCountMap < v48 + *(unsigned int *)&HouseClass_Player[29992] - v49 )
        {
          int v105 = PlayerCountMap;
          eax138 = GetStringCSF(g_Str_TXT_SCENARIO_TOO_SMALL, 0, &stru_830620[3176], 1895);
          Dialog::ShowMessage(-1, (size_t)eax138, v105);
          v64 = Dialog::GetCurrent();
          v65 = GetDlgItem(v64, 1416);
          v55(v65, 1);
          *(&g_MatrixTransformState + 1299) = 0;
        }
        unknown_libname_74(&v110);
        if ( !(*(uint8_t (**)(SkirmishDialog *, wchar_t **))(*(unsigned int *)v63->__pad_0 + 20))(
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
        int v70 = -1;
        for ( i = 0; i < 8; ++i )
        {
          v74 = *(SessionClass **)&HouseClass_Player[21864][4 * i + 18396];
          if ( NetworkLobby::IsValidPlayerName((wchar_t *)v74) )
          {
            if ( !IsKnownPointer((wchar_t *)v74) || *(unsigned int *)&v74->__pad_50[27] == -1 )
            {
              if ( Player::IsObserver(v74)
                && *(unsigned int *)&v74->__pad_50[27] != -1
                && v70 != *(unsigned int *)&HouseClass_Player[21864][4 * i + 8264] )
              {
                goto LABEL_158;
              }
            }
            else if ( i )
            {
              if ( v70 != *(unsigned int *)&v74->__pad_50[19] )
                goto LABEL_158;
            }
            else
            {
              v70 = *(unsigned int *)&v74->__pad_50[19];
            }
          }
        }
        if ( v70 < 0 || (*(uint8_t (**)(SkirmishDialog *))(*(unsigned int *)v111->__pad_0 + 4))(v111) )
        {
LABEL_158:
          if ( *(&g_MatrixTransformState + 1299) == (CoordStruct *)1416 )
          {
            int v76 = 0;
            if ( v48 <= 0 )
              goto LABEL_178;
            int v77 = *(unsigned int *)&HouseClass_Player[40236];
            while ( *(unsigned int *)(*(unsigned int *)v77 + 119) )
            {
              ++v76;
              v77 += 4;
              if ( v76 >= v48 )
                goto LABEL_178;
            }
            Network_Create();
            v78 = GetStringCSF((wchar_t *)&stru_830620[3608], 0, &stru_830620[3176], 1964);
            Dialog::ShowMessage(-1, (size_t)v78);
            *(&g_MatrixTransformState + 1299) = 0;
            v79 = Dialog::GetCurrent();
            v80 = GetDlgItem(v79, 1416);
            EnableWindow(v80, 1);
            if ( *(&g_MatrixTransformState + 1299) == (CoordStruct *)1416 )
            {
LABEL_178:
              int v83 = 0;
              for ( *((unsigned char *)&g_MatrixTransformState + 5208) = 1;
                    v83 < *(int *)&HouseClass_Player[40248];
                    ++v83 )
              {
                int v84 = *(unsigned int *)(*(unsigned int *)&HouseClass_Player[40236] + 4 * v83);
                if ( *(unsigned int *)(v84 + 107) == -1 )
                  SessionClass::SetPlayerColor(v84, -2);
              }
              v87 = v111;
              (*(void (**)(SkirmishDialog *))(*(unsigned int *)v111->__pad_0 + 104))(v111);
              Player::RandomAssign(&HouseClass_Player[29932]);
              CheckGameSettingsChanged(1, 1);
              memset(v113, 0, sizeof(v113));
              v114 = 0;
              v115 = 0;
              v113[0] = 22;
              strcpy((char *)&v113[1], &HouseClass_Player[30260]);
              Player::BuildListString((wchar_t *)((char *)&v113[11] + 3));
              int v86 = *(unsigned int *)&HouseClass_Player[40248];
              for ( j = 1; j < v86; ++j )
              {
                Network::SendMessage(
                  (int)&HouseClass_Player[44148],
                  (int)v113,
                  455,
                  1,
                  *(unsigned int *)(*(unsigned int *)&HouseClass_Player[40236] + 4 * j) + 40,
                  0,
                  0);
                Event::Dispatch();
              }
              (*(void (**)(SkirmishDialog *))(*(unsigned int *)v87->__pad_0 + 100))(v87);
              v90 = (ObjectClass *)*(&g_MatrixTransformState + 2257);
              if ( *(&g_MatrixTransformState + 2257) )
              {
                ComPtr::Dtor(*(&g_MatrixTransformState + 2257));
                RA2_OPDEL(v90);
                *(&g_MatrixTransformState + 2257) = 0;
              }
              Scenario::PreGameInit(v88);
              *(unsigned int *)&HouseClass_Player[30728] = 5;
              *(unsigned int *)&HouseClass_Player[40528] = 0;
              *(unsigned int *)&HouseClass_Player[30752] = 0;
              *(unsigned int *)&HouseClass_Player[30756] = 0;
              if ( *(unsigned int *)&HouseClass_Player[29952] == 2 )
              {
                if ( *(unsigned int *)&HouseClass_Player[30728]
                   * ((((unsigned int)Network::GetLobbyStatus(&HouseClass_Player[44148]) >> 3)
                     + *(unsigned int *)&HouseClass_Player[30728]
                     - 1)
                    / *(unsigned int *)&HouseClass_Player[30728]) <= 0xA )
                  *(unsigned int *)&HouseClass_Player[30724] = 10;
                else
                  *(unsigned int *)&HouseClass_Player[30724] = *(unsigned int *)&HouseClass_Player[30728]
                                                                 * ((((unsigned int)Network::GetLobbyStatus(&HouseClass_Player[44148]) >> 3)
                                                                   + *(unsigned int *)&HouseClass_Player[30728]
                                                                   - 1)
                                                                  / *(unsigned int *)&HouseClass_Player[30728]);
              }
              else if ( Network::GetLobbyStatus(&HouseClass_Player[44148]) / 8 <= 2 )
              {
                *(unsigned int *)&HouseClass_Player[30724] = 2;
              }
              else
              {
                *(unsigned int *)&HouseClass_Player[30724] = Network::GetLobbyStatus(&HouseClass_Player[44148])
                                                               / 8;
              }
              if ( (unsigned int)(Network::GetLobbyStatus(&HouseClass_Player[44148]) + 2) >= 0x1E )
                eax194 = Network::GetLobbyStatus(&HouseClass_Player[44148]) + 2;
              else
                eax194 = 30;
              int v91 = -1;
              Network::SetConnectionParams(
                (int *)&HouseClass_Player[44148],
                (IUnknown *)eax194,
                -1,
                600,
                (CellStruct *)1);
              int v92 = 1;
              memset(v116, 0, sizeof(v116));
              v117 = 0;
              v118 = 0;
              v116[0] = 11;
              *(unsigned int *)((char *)&v116[11] + 3) = *(unsigned int *)&HouseClass_Player[30724];
              if ( *(int *)&HouseClass_Player[40248] > 1 )
              {
                do
                  Network::SendMessage(
                    (int)&HouseClass_Player[44148],
                    (int)v116,
                    455,
                    1,
                    *(unsigned int *)(*(unsigned int *)&HouseClass_Player[40236] + 4 * v92++) + 40,
                    0,
                    0);
                while ( v92 < *(int *)&HouseClass_Player[40248] );
              }
              Ticks = Timer::GetTicks();
              if ( Network::GetQueueCount((int)&HouseClass_Player[44148]) <= 0 )
              {
LABEL_204:
                memset(&Msg, 0, 0x20u);
                int v95 = 0;
                IDA_LOBYTE(v91) = 0;
                Debug::Log();
                Timer::GetTicks();
                v107 = Timer::GetTicks();
                do
                {
                  Event::Dispatch();
                  if ( Network::Send(
                         (int)&HouseClass_Player[44148],
                         (int)&HouseClass_Player[39148],
                         (int)&HouseClass_Player[39604],
                         (TechnoTypeClass *)&HouseClass_Player[39608],
                         (int)&HouseClass_Player[39620]) )
                  {
                    if ( *(unsigned short *)&HouseClass_Player[39620] == 0xAA04 )
                    {
                      for ( k = 1; k < *(int *)&HouseClass_Player[40248]; ++k )
                      {
                        if ( GUID::Compare(
                               (char *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Player[40236] + 4 * k) + 40),
                               (int)&HouseClass_Player[39608])
                          && !*((unsigned int *)&Msg.hwnd + k) )
                        {
                          int v97 = *(unsigned int *)&HouseClass_Player[39148];
                          if ( *(unsigned int *)&HouseClass_Player[39148] == 16 )
                          {
                            Debug::Log();
                            v97 = *(unsigned int *)&HouseClass_Player[39148];
                            *((unsigned int *)&Msg.hwnd + k) = *(unsigned int *)&HouseClass_Player[39148];
                            IDA_LOBYTE(v91) = 1;
                            ++v95;
                          }
                          if ( v97 == 19 )
                          {
                            Debug::Log();
                            *((unsigned int *)&Msg.hwnd + k) = *(unsigned int *)&HouseClass_Player[39148];
                            ++v95;
                          }
                        }
                      }
                    }
                  }
                  if ( v95 >= *(unsigned int *)&HouseClass_Player[40248] - 1 )
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
                if ( (unsigned char)v91 )
                {
                  *(unsigned int *)&HouseClass_Player[32196] = 0;
                  *(unsigned int *)&HouseClass_Player[32200] = 0;
                  *(unsigned int *)&HouseClass_Player[32204] = 0;
                  int v100 = 1;
                  if ( *(int *)&HouseClass_Player[40248] > 1 )
                  {
                    p_message = &Msg.message;
                    do
                    {
                      if ( *p_message == 16 )
                        HouseClass_Player[21864][(*(unsigned int *)&HouseClass_Player[32204])++ + 10332] = v100;
                      ++v100;
                      ++p_message;
                    }
                    while ( v100 < *(int *)&HouseClass_Player[40248] );
                  }
                  SendNetworkFile((char *)(*(unsigned int *)&HouseClass_Player[29924] + 4700), 3, 0, 1);
                  if ( IsRandMap::Sed2((int)&HouseClass_Player[29932]) )
                    SendNetworkFile(stru_829ABC[0], 3, 0, 1);
                }
                if ( (unsigned int)(8 * Network::GetLobbyStatus(&HouseClass_Player[44148])) >= 0x78 )
                  int v102 = 8 * Network::GetLobbyStatus(&HouseClass_Player[44148]);
                else
                  v102 = 120;
                if ( (unsigned int)(Network::GetLobbyStatus(&HouseClass_Player[44148]) + 2) <= 0x1E )
                  int v103 = 30;
                else
                  v103 = Network::GetLobbyStatus(&HouseClass_Player[44148]) + 2;
                Network::SetConnectionParams(
                  (int *)&HouseClass_Player[44148],
                  (IUnknown *)v103,
                  -1,
                  v102,
                  (CellStruct *)1);
                goto LABEL_235;
              }
              while ( 2 )
              {
                int v93 = 1200;
                if ( Ticks == -1 )
                {
LABEL_202:
                  if ( v93 )
                    goto LABEL_204;
                }
                else
                {
                  int v94 = Timer::GetTicks() - Ticks;
                  if ( v94 < 1200 )
                  {
                    v93 = 1200 - v94;
                    goto LABEL_202;
                  }
                }
                Event::Dispatch();
                if ( Network::GetQueueCount((int)&HouseClass_Player[44148]) <= 0 )
                  goto LABEL_204;
                continue;
              }
            }
          }
        }
        else
        {
          v73 = GetStringCSF((wchar_t *)&stru_830620[3632], 0, &stru_830620[3176], 1946);
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
  SaveConfigWOL((int)&HouseClass_Player[29932]);
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
          strcpy((char *)&v116[1], &HouseClass_Player[30260]);
          for ( m = 1; m < *(int *)&HouseClass_Player[40200]; ++m )
          {
            Network::SendMessage(
              (int)&HouseClass_Player[44148],
              (int)v116,
              455,
              1,
              *(unsigned int *)(*(unsigned int *)&HouseClass_Player[40188] + 4 * m) + 40,
              0,
              0);
            Event::Dispatch();
          }
          Network::SendMessage((int)&HouseClass_Player[44148], (int)v116, 455, 0, 0, 0, 0);
          if ( *(unsigned int *)&HouseClass_Player[39088] )
            Network::SendMessage(
              (int)&HouseClass_Player[44148],
              (int)v116,
              455,
              0,
              (int)&HouseClass_Player[39092],
              0,
              0);
        }
        v106 = Timer::GetTicks();
        while ( Network::GetQueueCount((int)&HouseClass_Player[44148]) > 0 )
        {
          if ( !Network::ReceiveLoop(&HouseClass_Player[44148]) )
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
        *(unsigned short *)&HouseClass_Player[39108] = 0;
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
          strcpy((char *)&v113[1], &HouseClass_Player[30260]);
          for ( n = 1; n < *(int *)&HouseClass_Player[40200]; ++n )
          {
            Network::SendMessage(
              (int)&HouseClass_Player[44148],
              (int)v113,
              455,
              1,
              *(unsigned int *)(*(unsigned int *)&HouseClass_Player[40188] + 4 * n) + 40,
              0,
              0);
            Event::Dispatch();
          }
          Network::SendMessage((int)&HouseClass_Player[44148], (int)v113, 455, 0, 0, 0, 0);
          if ( *(unsigned int *)&HouseClass_Player[39088] )
            Network::SendMessage(
              (int)&HouseClass_Player[44148],
              (int)v113,
              455,
              0,
              (int)&HouseClass_Player[39092],
              0,
              0);
        }
        v108 = Timer::GetTicks();
        while ( Network::GetQueueCount((int)&HouseClass_Player[44148]) > 0 )
        {
          if ( !Network::ReceiveLoop(&HouseClass_Player[44148]) )
            break;
          int v16 = 600;
          if ( v108 != -1 )
          {
            int v17 = Timer::GetTicks() - v108;
            if ( v17 >= 600 )
              break;
            v16 = 600 - v17;
          }
          if ( !v16 )
            break;
          Event::Dispatch();
        }
        *(unsigned short *)&HouseClass_Player[39108] = 0;
        *(&g_MatrixTransformState + 1301) = 0;
        *(&g_MatrixTransformState + 1299) = 0;
      }
      *(&g_MatrixTransformState + 1300) = 0;
      PtrVector::Destroy(&HouseClass_Player[40232]);
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
    Network::ReceiveLoop(&HouseClass_Player[44148]);
  }
  CloseDialog(0, 0);
  Game::ResetFlags();
  GameClass::InitDifficultyButtons();
  PtrVector::Destroy(&HouseClass_Player[40232]);
  PtrVector::Destroy(&HouseClass_Player[40208]);
  PtrVector::Destroy(&HouseClass_Player[40184]);
  HouseClass_Player[39106] = 0;
  Network::ReceiveLoop(&HouseClass_Player[44148]);
  return 0;
}
} // namespace gamemd

// 0x5DE520
namespace gamemd {
int NetworkLobby::DlgProc(HWND hDlg, UINT a2, WPARAM nIDDlgItem, unsigned int lParam)
{
  wchar_t *StringCSF; // ebp
  HWND v5; // eax
  char *v6; // eax
  int result; // eax
  Skirmish *v8; // edi
  LRESULT v9; // eax
  HWND v10; // eax
  ObjectClass *v11; // ecx
  void *v12; // ebp
  int v13; // edi
  void *v14; // ecx
  ObjectClass *v15; // ecx
  char v16; // bl
  char v17; // al
  int v18; // edi
  int i; // esi
  unsigned int v20; // eax
  int v21; // eax
  int PlayerCountMap; // edi
  void *vtable2; // ecx
  HWND DlgItem; // eax
  Dialog *DlgCtrlID; // edi
  GameSetup *ComboBoxSelectedRaw; // eax
  wchar_t *DifficultyString; // eax
  SideClass *ComboBoxSelected; // eax
  GameClass *ComboBoxSelectedDefault; // eax
  POINT v30; // [esp-Ch] [ebp-200h]
  ObjectClass *v31; // [esp+0h] [ebp-1F4h]
  GameSetup *v32; // [esp+0h] [ebp-1F4h]
  GameSetup *v33; // [esp+0h] [ebp-1F4h]
  char v34; // [esp+12h] [ebp-1E2h]
  char v35; // [esp+13h] [ebp-1E1h]
  HWND hWnd; // [esp+14h] [ebp-1E0h]
  DeleteAndZero v37; // [esp+18h] [ebp-1DCh] BYREF
  int v38[113]; // [esp+2Ch] [ebp-1C8h] BYREF
  int16_t v39; // [esp+1F0h] [ebp-4h]
  char v40; // [esp+1F2h] [ebp-2h]

  if ( a2 != 1175 ) /*0x5de54c*/
    SkirmishDialogProc(hDlg, a2, nIDDlgItem, (HWND)lParam); /*0x5de552*/
  if ( a2 > 0x111 ) /*0x5de55d*/
  {
    if ( a2 <= 0x49B ) /*0x5dec01*/
    {
      if ( a2 == 1179 ) /*0x5dec07*/
      {
        DlgItem = GetDlgItem(hDlg, nIDDlgItem); /*0x5deed0*/
        SendMessageA(DlgItem, 0x4B3u, 0x7Fu, lParam); /*0x5deedf*/
        return 0; /*0x5deef1*/
      }
      if ( a2 >= 0x114 ) /*0x5dec13*/
      {
        if ( a2 <= 0x115 ) /*0x5dec1f*/
        {
          if ( (HWND)lParam == GetDlgItem(hDlg, 1842) ) /*0x5dee43*/
          {
            if ( byte_AC0268 ) /*0x5dee4c*/
              return 0; /*0x5dee4c*/
            stru_A8EB00.ObjectTypeClass[26] = SendDlgItemMessageA(hDlg, 1842, 0x400u, 0, 0); /*0x5dee63*/
          }
          if ( !byte_AC0268 ) /*0x5dee6f*/
          {
            *(unsigned int *)&stru_A8B250.__pad_0[24] = 6 - SendDlgItemMessageA(hDlg, 1321, 0x400u, 0, 0); /*0x5dee9c*/
            *(unsigned int *)&stru_A8B250.__pad_0[12] = SendDlgItemMessageA(hDlg, 1026, 0x400u, 0, 0); /*0x5deeb3*/
            *(unsigned int *)&stru_A8B250.__pad_0[32] = SendDlgItemMessageA(hDlg, 1359, 0x400u, 0, 0); /*0x5deebc*/
            return 0; /*0x5deecb*/
          }
          return 0; /*0x5dee6f*/
        }
        if ( a2 == 1175 ) /*0x5dec2b*/
        {
          NetworkBuffer::GetField((NetworkBuffer *)&(unsigned int *)((char *)&stru_A8EB00 + 252)); /*0x5dec36*/
          v20 = Random::Range(&Randomizer_Global, 1, 0x7FFF); /*0x5dec47*/
          srand(v20); /*0x5dec4d*/
          *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 432) = rand(); /*0x5dec5c*/
          Dialog::RestoreParent((Dialog *)hDlg); /*0x5dec61*/
          SkirmishDialog::FillComboBoxes((SkirmishDialog *)hDlg); /*0x5dec68*/
          InitGameDropdownColors(v31); /*0x5dec6d*/
          Lobby::FillPlayerFactions((Lobby *)hDlg); /*0x5dec74*/
          SetupSkirmishDialogPlayerSlot(hDlg, (int)dword_A8DA8C); /*0x5dec81*/
          MapSkirmishDialogPlayerToControl(hDlg, (int)dword_A8DA8C); /*0x5dec8e*/
          _cfltcvt_init(); /*0x5dec93*/
          memset32(&stru_A8B250.__pad_0[140], -2, 8u); /*0x5deca7*/
          GDlg::LoadLetterStrings(); /*0x5deca9*/
          memset32(&stru_A8B250.__pad_0[172], -2, 8u); /*0x5decc2*/
          SetupMultiplayerLobbyPlayers(hDlg, (int)&unk_A8B440); /*0x5decc6*/
          Lobby::InvalidatePlayerSlots((Lobby *)hDlg); /*0x5deccd*/
          RefreshLobbyPlayerSlots(0xFFFFFFFF); /*0x5decd5*/
          GameSetup::DisplayPlayers(v33); /*0x5decdc*/
          if ( dword_A8B23C /*0x5decef*/
            && !(*((uint8_t (**)(ObjectClass *))dword_A8B23C->AbstractClass + 47))(dword_A8B23C) )
          {
            g_MPCooperativeState = (ObjectClass *)-1; /*0x5decfb*/
            g_MenuStateFlags = 0; /*0x5ded05*/
            Dialog::RefreshDialogsGame(0); /*0x5ded0b*/
            *(unsigned int *)(dword_A8DA90[0] + 107) = 0; /*0x5ded15*/
            v21 = (*((int (**)(ObjectClass *))dword_A8B23C->AbstractClass + 10))(dword_A8B23C); /*0x5ded20*/
            SessionClass::SetPlayerOption((int *)dword_A8DA90[0], v21); /*0x5ded2a*/
            SessionClass::SetPlayerColor((int *)dword_A8DA90[0], -2); /*0x5ded37*/
            SessionClass::SetOption((int *)dword_A8DA90[0], -2); /*0x5ded44*/
            SessionClass::SetOption2((int *)dword_A8DA90[0], -2); /*0x5ded51*/
            Lobby::FillPlayerFactions((Lobby *)hDlg); /*0x5ded58*/
          }
          SetupSkirmishPlayerSlots(hDlg, 0, (HWND)1); /*0x5ded63*/
          SetupMultiplayerLobbyScreen(hDlg, (void *)0xFFFFFFFF, *(int *)&stru_A8B250.__pad_0[4]); /*0x5ded73*/
          if ( !g_MPCooperativeState /*0x5ded8c*/
            && dword_A8B23C
            && (*((uint8_t (**)(ObjectClass *))dword_A8B23C->AbstractClass + 47))(dword_A8B23C) )
          {
            SessionClass::SetPlayerOption((int *)dword_A8DA90[0], -3); /*0x5ded9e*/
            *(unsigned int *)(dword_A8DA90[0] + 107) = -1; /*0x5deda8*/
          }
          NetworkLobby::Dispatch((NetworkLobby *)hDlg); /*0x5dedb1*/
          SetDialogPlayerName(hDlg, (int)dword_A8B23C); /*0x5dedbe*/
          Dialog::ShowPlayerName((Dialog *)hDlg); /*0x5dedc5*/
          Session::StartGame((Session *)hDlg); /*0x5dedcc*/
          PlayerCountMap = ReadPlayerCountMap(*(int *)&stru_A8B250.__pad_0[4]); /*0x5dede2*/
          if ( !dword_A8B23C /*0x5dedfe*/
            || !(*((uint8_t (**)(ObjectClass *))dword_A8B23C->AbstractClass + 1))(dword_A8B23C)
            || (vtable2 = dword_A8B230[127].vtable2, (int)vtable2 > PlayerCountMap) )
          {
            vtable2 = (void *)PlayerCountMap; /*0x5dee00*/
          }
          ResetLobbyFactionTable((int)vtable2); /*0x5dee02*/
          Lobby::InvalidateFactionCombos((Lobby *)hDlg); /*0x5dee09*/
          SkirmishDialogProc(hDlg, 1175, nIDDlgItem, (HWND)lParam); /*0x5dee16*/
          NetworkLobby::UpdatePlayerList(); /*0x5dee1b*/
          return 0; /*0x5dee2c*/
        }
      }
      return 0; /*0x5def0d*/
    }
    if ( a2 != 1257 ) /*0x5deefa*/
    {
      if ( a2 == 1260 ) /*0x5deeff*/
      {
        Dialog::EnumAndCleanup((Dialog *)hDlg); /*0x5def12*/
        return 0; /*0x5def12*/
      }
      return 0; /*0x5deeff*/
    }
    WideString::Assign_Alt((void **)(lParam + 8), 0); /*0x5def2d*/
    if ( *(unsigned int *)lParam && *(unsigned int *)(lParam + 4) != -1 ) /*0x5def40*/
    {
      DlgCtrlID = (Dialog *)GetDlgCtrlID(*(HWND *)lParam); /*0x5def49*/
      if ( Dialog::MapPlayerIDToIndex(DlgCtrlID) != -1 ) /*0x5def55*/
      {
        ComboBoxSelectedDefault = (GameClass *)GetComboBoxSelectedDefault(hDlg, (int)DlgCtrlID, *(unsigned int *)(lParam + 4)); /*0x5defa8*/
        DifficultyString = GameClass::GetDifficultyString(ComboBoxSelectedDefault); /*0x5defaf*/
        goto LABEL_132; /*0x5defaf*/
      }
      if ( CountryCombo::IDToIndex((CountryCombo *)DlgCtrlID) == -1 ) /*0x5def61*/
      {
        if ( StartCombo::IDToIndex((StartCombo *)DlgCtrlID) != -1 ) /*0x5def6d*/
        {
          ComboBoxSelectedRaw = (GameSetup *)GetComboBoxSelectedRaw(hDlg, (int)DlgCtrlID, *(unsigned int *)(lParam + 4)); /*0x5def77*/
          DifficultyString = GameSetup::GetColorTooltip(ComboBoxSelectedRaw); /*0x5def7e*/
  LABEL_132:
          WideString::Assign_Alt((void **)(lParam + 8), DifficultyString); /*0x5defb4*/
        }
      }
      else
      {
        ComboBoxSelected = (SideClass *)GetComboBoxSelected(hDlg, (int)DlgCtrlID, *(unsigned int *)(lParam + 4)); /*0x5def8d*/
        if ( ComboBoxSelected != (SideClass *)-1 ) /*0x5def95*/
        {
          DifficultyString = SideClass::GetName(ComboBoxSelected); /*0x5def99*/
          goto LABEL_132; /*0x5def9e*/
        }
      }
    }
    return 1; /*0x5defbf*/
  }
  if ( a2 != 273 ) /*0x5de563*/
  {
    switch ( a2 ) /*0x5de57f*/
    {
      case 2u: /*0x5de57f*/
        if ( !(uint8_t)LoadScreen::IsActive((LoadScreen *)&stru_AC4B30.__pad_EC[828]) ) /*0x5de694*/
          return 0; /*0x5de694*/
        VtableStub::643E70(&stru_AC4B30.__pad_EC[828]); /*0x5de69f*/
        result = 0; /*0x5de6a7*/
        break; /*0x5de6b0*/
      case 0xFu: /*0x5de57f*/
        Dialog::DrawBackground((Dialog *)hDlg); /*0x5de634*/
        if ( g_UIControlState ) /*0x5de641*/
          Skirmish::RenderPreview(g_UIControlState, hDlg); /*0x5de644*/
        if ( (uint8_t)LoadScreen::IsActive((LoadScreen *)&stru_AC4B30.__pad_EC[828]) ) /*0x5de64e*/
          LoadScreen::Render((int)&stru_AC4B30.__pad_EC[828], lParam, nIDDlgItem, NAN); /*0x5de664*/
        Dialog::StopBink((Dialog *)hDlg); /*0x5de66b*/
        ValidateRect(hDlg, 0); /*0x5de673*/
        result = 0; /*0x5de67c*/
        break; /*0x5de685*/
      case 0x14u: /*0x5de57f*/
        return 1;
      case 0x2Bu: /*0x5de57f*/
        Dialog::Resize((char *)lParam); /*0x5de61b*/
        result = 1; /*0x5de623*/
        break; /*0x5de62f*/
      case 0x84u: /*0x5de57f*/
        hWnd = GetDlgItem(hDlg, 1685); /*0x5de594*/
        if ( !hWnd ) /*0x5de598*/
          return 0; /*0x5de598*/
        GetWindowRect(hDlg, (LPRECT)&v37.DeleteAndZero_field_0x04); /*0x5de5af*/
        StringCSF = &g_TypeClass_DefaultString; /*0x5de5c3*/
        v30.y = IDA_HIWORD(lParam) - v37.DeleteAndZero_field_0x08; /*0x5de5c8*/
        v30.x = (uint16_t)lParam - v37.DeleteAndZero_field_0x04; /*0x5de5c9*/
        v5 = ChildWindowFromPointEx(hDlg, v30, 1u); /*0x5de5cb*/
        if ( v5 ) /*0x5de5d3*/
        {
          v6 = DlgSkirmishMenuProc(hDlg, v5); /*0x5de5d9*/
          if ( v6 ) /*0x5de5e0*/
            StringCSF = GetStringCSF((wchar_t *)v6, 0, g_Str_File_netdlg2_cpp, 2857); /*0x5de5f5*/
        }
        SendMessageA(hWnd, 0x4B2u, 0, (LPARAM)StringCSF); /*0x5de604*/
        result = 0; /*0x5de60d*/
        break; /*0x5de616*/
      default:
        return 0;
    }
    return result; /*0x5de616*/
  }
  if ( (uint16_t)nIDDlgItem > 0x588u ) /*0x5de6c1*/
  {
    if ( (uint16_t)nIDDlgItem > 0x6A8u ) /*0x5de86a*/
    {
      switch ( (int16_t)nIDDlgItem ) /*0x5deba6*/
      {
        case 1706: /*0x5deba6*/
        case 1707: /*0x5deba6*/
          goto LABEL_89;
        case 1901: /*0x5deba6*/
        case 1902: /*0x5deba6*/
        case 1903: /*0x5deba6*/
        case 1904: /*0x5deba6*/
        case 1905: /*0x5deba6*/
        case 1906: /*0x5deba6*/
        case 1907: /*0x5deba6*/
        case 1908: /*0x5deba6*/
          if ( IDA_HIWORD(nIDDlgItem) != 1 || byte_AC0268 ) /*0x5debe7*/
            return 0; /*0x5debe7*/
          ProcessNetworkLobbyOption(hDlg, (void *)(uint16_t)nIDDlgItem); /*0x5debf1*/
          break; /*0x5debf6*/
        default:
          return 0;
      }
      goto LABEL_51; /*0x5debf6*/
    }
    if ( (uint16_t)nIDDlgItem >= 0x6A3u ) /*0x5de876*/
    {
  LABEL_89:
      if ( IDA_HIWORD(nIDDlgItem) != 1 || byte_AC0268 ) /*0x5debc0*/
        return 0; /*0x5debc0*/
      AssignPlayerSide(hDlg, (uint16_t)nIDDlgItem); /*0x5debca*/
      goto LABEL_51; /*0x5debcf*/
    }
    if ( (uint16_t)nIDDlgItem != 1450 ) /*0x5de883*/
    {
      if ( (uint16_t)nIDDlgItem != 1697 ) /*0x5de88a*/
      {
        if ( (uint16_t)nIDDlgItem != 1698 ) /*0x5de88d*/
          return 0; /*0x5de88d*/
  LABEL_45:
        if ( IDA_HIWORD(nIDDlgItem) != 1 || byte_AC0268 ) /*0x5de8a6*/
          return 0; /*0x5de8a6*/
        AssignPlayerColor(hDlg, (void *)(uint16_t)nIDDlgItem); /*0x5de8b0*/
  LABEL_51:
        CheckGameSettingsChanged(1, 0); /*0x5de8d9*/
        GameSetup::DisplayPlayers((GameSetup *)v31); /*0x5de8e4*/
        return 0; /*0x5de8f5*/
      }
  LABEL_48:
      if ( IDA_HIWORD(nIDDlgItem) != 1 || byte_AC0268 ) /*0x5de8ca*/
        return 0; /*0x5de8ca*/
      SelectLobbyCountry(hDlg, (void *)(uint16_t)nIDDlgItem); /*0x5de8d4*/
      goto LABEL_51; /*0x5de8d4*/
    }
    if ( byte_AC0268 ) /*0x5de8ff*/
      return 0; /*0x5de8ff*/
    v11 = dword_A8B23C; /*0x5de905*/
    v12 = *(void **)&stru_A8B250.__pad_0[4]; /*0x5de90b*/
    if ( dword_A8B23C ) /*0x5de913*/
    {
      if ( !(*((uint8_t (**)(ObjectClass *))dword_A8B23C->AbstractClass + 16))(dword_A8B23C) ) /*0x5de917*/
      {
        v11 = dword_A8B23C; /*0x5de91e*/
        v35 = 0; /*0x5de924*/
  LABEL_58:
        if ( !v11 || (v34 = 0, (*((uint8_t (**)(ObjectClass *))v11->AbstractClass + 47))(v11)) ) /*0x5de93b*/
          v34 = 1; /*0x5de94a*/
        Dialog::IdleProcess((Dialog *)v31, (ObjectClass *)hDlg); /*0x5de951*/
        ShowWindow(hDlg, 0); /*0x5de95f*/
        byte_8316D4 = 0; /*0x5de967*/
        if ( SkirmishDialog::Show(g_hWnd, lParam, (int)v12) == 2 ) /*0x5de976*/
        {
          *(unsigned int *)&stru_A8B250.__pad_0[4] = v12; /*0x5de97a*/
          LoadScenarioClassByIndex((int)v12); /*0x5de980*/
          Session::PrepareGame((Session *)hDlg); /*0x5de987*/
          byte_8316D4 = 1; /*0x5de98f*/
          ShowWindow(hDlg, 5); /*0x5de996*/
          Session::StartGame((Session *)hDlg); /*0x5de99a*/
          CheckGameSettingsChanged(1, 0); /*0x5de9a3*/
          InvalidateRect(hDlg, 0, 0); /*0x5de9ad*/
          return 0; /*0x5de9bf*/
        }
        if ( LoadScenarioClassByIndex(*(int *)&stru_A8B250.__pad_0[4]) ) /*0x5de9c8*/
          SetupMultiplayerLobbyScreen(hDlg, v12, *(int *)&stru_A8B250.__pad_0[4]); /*0x5de9e3*/
        else
          *(unsigned int *)&stru_A8B250.__pad_0[4] = v12; /*0x5de9d1*/
        byte_8316D4 = 1; /*0x5de9eb*/
        ShowWindow(hDlg, 5); /*0x5de9f2*/
        Dialog::ShowPlayerName((Dialog *)hDlg); /*0x5de9f6*/
        Session::StartGame((Session *)hDlg); /*0x5de9fd*/
        v13 = ReadPlayerCountMap(*(int *)&stru_A8B250.__pad_0[4]); /*0x5dea13*/
        if ( !dword_A8B23C /*0x5dea2f*/
          || !(*((uint8_t (**)(ObjectClass *))dword_A8B23C->AbstractClass + 1))(dword_A8B23C)
          || (v14 = dword_A8B230[127].vtable2, (int)v14 > v13) )
        {
          v14 = (void *)v13; /*0x5dea31*/
        }
        ResetLobbyFactionTable((int)v14); /*0x5dea33*/
        Lobby::InvalidateFactionCombos((Lobby *)hDlg); /*0x5dea3a*/
        Lobby::InvalidatePlayerSlots((Lobby *)hDlg); /*0x5dea41*/
        NetworkLobby::UpdateLabels((NetworkLobby *)hDlg); /*0x5dea48*/
        NetworkLobby::FillOptionCombo(); /*0x5dea4d*/
        RefreshLobbyPlayerSlots(0xFFFFFFFF); /*0x5dea55*/
        v15 = dword_A8B23C; /*0x5dea5a*/
        if ( dword_A8B23C ) /*0x5dea62*/
        {
          if ( !(*((uint8_t (**)(ObjectClass *))dword_A8B23C->AbstractClass + 16))(dword_A8B23C) ) /*0x5dea66*/
          {
            v15 = dword_A8B23C; /*0x5dea6d*/
            v16 = 0; /*0x5dea73*/
            goto LABEL_75; /*0x5dea75*/
          }
          v15 = dword_A8B23C; /*0x5dea77*/
        }
        v16 = 1; /*0x5dea7d*/
  LABEL_75:
        if ( !v15 || (v17 = (*((int (**)(ObjectClass *))v15->AbstractClass + 47))(v15)) != 0 ) /*0x5dea8d*/
          v17 = 1; /*0x5dea8f*/
        if ( v34 && !v17 ) /*0x5dea9b*/
          MultiplayerLobby::FillSlots((MultiplayerLobby *)hDlg); /*0x5dea9f*/
        if ( v35 && !v16 && NetworkLobby::SetupPlayerSlotControls((NetworkLobby *)hDlg) ) /*0x5deaba*/
        {
          *(unsigned int *)&stru_A8B250.__pad_0[36] = 0; /*0x5dead2*/
          memset(v38, 0, sizeof(v38)); /*0x5deadc*/
          v39 = 0; /*0x5deade*/
          v40 = 0; /*0x5deae0*/
          v38[0] = 22; /*0x5deaf5*/
          strcpy((char *)&v38[1], unk_A8B380); /*0x5deb06*/
          Player::BuildListString((Player *)&v38[11] + 3); /*0x5deb13*/
          v18 = dword_A8DA84; /*0x5deb18*/
          for ( i = 1; i < v18; ++i ) /*0x5deb25*/
          {
            Network::SendMessage(&unk_A8E9C0.Socket, (int)v38, 455, 1, dword_A8DA78[i] + 40, 0, 0); /*0x5deb49*/
            Event::Dispatch(); /*0x5deb4e*/
          }
          GameSetup::DisplayPlayers(v32); /*0x5deb5a*/
          CheckGameSettingsChanged(1, 0); /*0x5deb63*/
          return 0; /*0x5deb6b*/
        }
        else
        {
          GameSetup::DisplayPlayers(v32); /*0x5deb79*/
          return 0; /*0x5deb81*/
        }
      }
      v11 = dword_A8B23C; /*0x5de92a*/
    }
    v35 = 1; /*0x5de930*/
    goto LABEL_58; /*0x5de930*/
  }
  if ( (uint16_t)nIDDlgItem == 1416 ) /*0x5de6c7*/
  {
    v10 = GetDlgItem(hDlg, 1416); /*0x5de82b*/
    EnableWindow(v10, 0); /*0x5de832*/
    byte_AC0268 = 1; /*0x5de83f*/
    SaveMultiplayerLobbySettings(hDlg, (int)&unk_A8B440); /*0x5de846*/
    g_NetworkOptionsState = 1416; /*0x5de84e*/
    return 0; /*0x5de861*/
  }
  if ( (uint16_t)nIDDlgItem <= 0x514u ) /*0x5de6d3*/
  {
    if ( (uint16_t)nIDDlgItem < 0x513u ) /*0x5de6df*/
    {
      if ( (uint16_t)nIDDlgItem <= 0x418u ) /*0x5de6eb*/
      {
        if ( (uint16_t)nIDDlgItem >= 0x411u ) /*0x5de6f7*/
        {
          if ( IDA_HIWORD(nIDDlgItem) == 1 && !byte_AC0268 && (uint8_t)Settings::CheckString() ) /*0x5de771*/
          {
            v9 = GetComboBoxSelectedDefault(hDlg, (uint16_t)nIDDlgItem, -1); /*0x5de784*/
            PlayerSkirmishSlotHandler(hDlg, (uint16_t)nIDDlgItem, v9, 2); /*0x5de790*/
            return 0; /*0x5de7a1*/
          }
        }
        else if ( (uint16_t)nIDDlgItem == 2 && !byte_AC0268 ) /*0x5de709*/
        {
          v8 = g_UIControlState; /*0x5de70f*/
          if ( g_UIControlState ) /*0x5de717*/
          {
            ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x5de71b*/
            RA2_OPDEL(v8); /*0x5de721*/
            g_UIControlState = 0; /*0x5de729*/
          }
          SaveMultiplayerLobbySettings(hDlg, (int)&unk_A8B440); /*0x5de73a*/
          g_NetworkOptionsState = 2; /*0x5de742*/
          return 0; /*0x5de755*/
        }
        return 0; /*0x5def23*/
      }
      if ( (uint16_t)nIDDlgItem != 1296 ) /*0x5de7aa*/
        return 0; /*0x5de7bc*/
    }
    goto LABEL_48; /*0x5de7aa*/
  }
  switch ( (int16_t)nIDDlgItem ) /*0x5de7d6*/
  {
    case 1310: /*0x5de7d6*/
    case 1311: /*0x5de7d6*/
    case 1312: /*0x5de7d6*/
    case 1313: /*0x5de7d6*/
      goto LABEL_48;
    case 1314: /*0x5de7d6*/
    case 1315: /*0x5de7d6*/
    case 1316: /*0x5de7d6*/
    case 1317: /*0x5de7d6*/
    case 1318: /*0x5de7d6*/
    case 1319: /*0x5de7d6*/
    case 1320: /*0x5de7d6*/
      goto LABEL_45;
    case 1344: /*0x5de7d6*/
      ReadChatMessage((wchar_t **)&v37, (HWND)lParam); /*0x5de7e3*/
      DeleteAndZero::Alt(&v37); /*0x5de7ec*/
      if ( IDA_HIWORD(nIDDlgItem) != 1281 ) /*0x5de7fa*/
        return 0; /*0x5de7fa*/
      SendNetworkLobbyChatMessage(hDlg, (int)Math::InitDegToRad, 61680); /*0x5de80f*/
      result = 0; /*0x5de817*/
      break; /*0x5de820*/
    default:
      return 0;
  }
  return result; /*0x5de60a*/
}
}
// 0x5E00B0
namespace gamemd {
void NetworkLobby_MessageHandler()
{
  char result; // al
  wchar_t *v10; // eax
  wchar_t *v11; // eax
  wchar_t *StringCSF; // eax
  HWND v26; // eax
  SkirmishDialog *PlayerOption; // eax
  int PlayerColor; // eax
  DLGTEMPLATE *DialogIndirect; // esi
  int m; // esi
  wchar_t *v37; // eax
  wchar_t *v38; // eax
  HWND eax134; // eax
  IUnknown *v39; // esi
  HWND DlgItem; // eax
  int edi148; // edi
  SessionClass *v44; // esi
  SkirmishDialog *v48; // ebp
  int PlayerSide; // eax
  SessionClass *v54; // eax
  int Option; // eax
  int Option2; // eax
  int i; // esi
  int j; // esi
  HWND v68; // eax
  ObjectClass *Current; // esi
  LRESULT v70; // eax
  LRESULT v71; // eax
  wchar_t **v75; // edi
  int eax245; // eax
  ObjectClass *v80; // edx
  ObjectClass *v81; // esi
  int updated; // eax
  SkirmishDialog *v96; // eax
  int ebx325; // ebx
  SessionClass *v99; // eax
  int k; // esi
  CCINIClass *v103; // [esp-Ah] [ebp-7E4h]
  CCINIClass *v104; // [esp-Ah] [ebp-7E4h]
  CCINIClass *v105; // [esp-Ah] [ebp-7E4h]
  CCINIClass *v106; // [esp-Ah] [ebp-7E4h]
  CCINIClass *v107; // [esp-Ah] [ebp-7E4h]
  CampaignScore *v109; // [esp-6h] [ebp-7E0h]
  char *Block; // [esp+Eh] [ebp-7CCh]
  int Blocka; // [esp+Eh] [ebp-7CCh]
  SessionClass *aP1; // [esp+16h] [ebp-7C4h]
  SessionClass *aP1a; // [esp+16h] [ebp-7C4h]
  int16_t v120; // [esp+1DEh] [ebp-5FCh]
  wchar_t Buffer[80]; // [esp+1E2h] [ebp-5F8h] BYREF
  int16_t v124; // [esp+446h] [ebp-394h]
  int16_t v127; // [esp+60Eh] [ebp-1CCh]
  int16_t v130; // [esp+7D6h] [ebp-4h]
  result = *((unsigned char *)&g_MatrixTransformState + 5196);
  char v110 = 0;
  char v111 = 0;
  if ( *(&g_MatrixTransformState + 1299) )
    return result;
  v109 = a1;
  do
  {
    Event::Dispatch();
    if ( !Network::Send(
            (int)&HouseClass_Player[44148],
            (int)&HouseClass_Player[39148],
            (int)&HouseClass_Player[39604],
            (TechnoTypeClass *)&HouseClass_Player[39608],
            (int)&HouseClass_Player[39620]) )
      break;
    if ( *(unsigned short *)&HouseClass_Player[39620] != 0xAA04
      || SendNetworkPlayerOptions(&HouseClass_Player[39148], (int)&HouseClass_Player[39608]) )
    {
      continue;
    }
    switch ( *(unsigned int *)&HouseClass_Player[39148] )
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
        int v2 = 1;
        if ( *(int *)&HouseClass_Player[40224] <= 1 )
        {
LABEL_16:
          int v4 = operator new(0x85u);
          int v5 = v4;
          if ( v4 )
            Waypoint::InitInvalid((unsigned char *)(v4 + 40));
          else
            v5 = 0;
          char * v12 = CharToWideString(&HouseClass_Player[39152]);
          wcscpy((wchar_t *)v5, (const wchar_t *)v12);
          *(unsigned int *)(v5 + 40) = *(unsigned int *)&HouseClass_Player[39608];
          *(unsigned int *)(v5 + 44) = *(unsigned int *)&HouseClass_Player[39612];
          *(unsigned int *)(v5 + 48) = *(unsigned int *)&HouseClass_Player[39616];
          *(unsigned char *)(v5 + 52) = HouseClass_Player[39195] & 1;
          int v13 = *(unsigned int *)&stru_87C374[45004];
          if ( *(unsigned int *)&stru_87C374[44996] != -1 )
            v13 += Timer::GetTicks() - *(unsigned int *)&stru_87C374[44996];
          *(unsigned int *)(v5 + 53) = v13;
          if ( *(int *)&HouseClass_Player[40224] < *(int *)&HouseClass_Player[40216]
            || (HouseClass_Player[40221] || !*(unsigned int *)&HouseClass_Player[40216])
            && *(int *)&HouseClass_Player[40228] > 0
            && (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)&HouseClass_Player[40208]
                                                                      + 8))(
                 &HouseClass_Player[40208],
                 *(unsigned int *)&HouseClass_Player[40216] + *(unsigned int *)&HouseClass_Player[40228],
                 0) )
          {
            int v14 = (*(unsigned int *)&HouseClass_Player[40224])++;
            *(unsigned int *)(*(unsigned int *)&HouseClass_Player[40212] + 4 * v14) = v5;
          }
          int v15 = 1;
          if ( *(int *)&HouseClass_Player[40200] > 1 )
          {
            while ( !GUID::Compare(
                       (char *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Player[40188] + 4 * v15) + 40),
                       (int)&HouseClass_Player[39608]) )
            {
              if ( ++v15 >= *(int *)&HouseClass_Player[40200] )
                goto LABEL_45;
            }
            RA2_OPDEL(*(void **)(*(unsigned int *)&HouseClass_Player[40188] + 4 * v15));
  int v16; // eax
            v16 = (*(int (**)(char *, int))(*(unsigned int *)&HouseClass_Player[40184] + 16))(
                    &HouseClass_Player[40184],
                    *(unsigned int *)&HouseClass_Player[40188] + 4 * v15);
            if ( v16 != -1 && v16 < *(int *)&HouseClass_Player[40200] )
            {
              --*(unsigned int *)&HouseClass_Player[40200];
              for ( ;
                    v16 < *(int *)&HouseClass_Player[40200];
                    *(unsigned int *)(*(unsigned int *)&HouseClass_Player[40188] + 4 * v16 - 4) = *(unsigned int *)(*(unsigned int *)&HouseClass_Player[40188] + 4 * v16) )
              {
                ++v16;
              }
            }
          }
LABEL_45:
          if ( (HouseClass_Player[39195] & 1) != 0 && (int)*(&g_MatrixTransformState + 1301) < 2 )
          {
            v105 = (CCINIClass *)CharToWideString(&HouseClass_Player[39152]);
            StringCSF = GetStringCSF((wchar_t *)&stru_830620[4160], 0, &stru_830620[3176], 4280);
            swprintf(Buffer, (const size_t)StringCSF, (const wchar_t *const)v105, v109);
            Dialog::ShowMessage(-1, (size_t)Buffer);
            PlayVocClass(*(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 1720), 0x2000, 1.0, 0);
          }
          v110 = 1;
          v111 = 1;
        }
        else
        {
          while ( 1 )
          {
            char * v3 = ToWideStringChar(*(IUnknown **)(*(unsigned int *)&HouseClass_Player[40212] + 4 * v2));
            if ( !_strcmpi(v3, &HouseClass_Player[39152]) )
              break;
            if ( ++v2 >= *(int *)&HouseClass_Player[40224] )
              goto LABEL_16;
          }
          int v6 = *(unsigned int *)&stru_87C374[45004];
          if ( *(unsigned int *)&stru_87C374[44996] != -1 )
            v6 += Timer::GetTicks() - *(unsigned int *)&stru_87C374[44996];
          *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Player[40212] + 4 * v2) + 53) = v6;
          int v7 = *(unsigned int *)(*(unsigned int *)&HouseClass_Player[40212] + 4 * v2);
          if ( *(unsigned char *)(v7 + 52) != (HouseClass_Player[39195] & 1) )
          {
            v111 = 1;
            *(unsigned char *)(v7 + 52) = HouseClass_Player[39195] & 1;
            int v8 = *(unsigned int *)(*(unsigned int *)&HouseClass_Player[40212] + 4 * v2);
            if ( *(unsigned char *)(v8 + 52) )
            {
              unsigned int * v9 = (unsigned int *)(v8 + 40);
              *v9 = *(unsigned int *)&HouseClass_Player[39608];
              v9[1] = *(unsigned int *)&HouseClass_Player[39612];
              v9[2] = *(unsigned int *)&HouseClass_Player[39616];
            }
            if ( (int)*(&g_MatrixTransformState + 1301) < 2 )
            {
              if ( *(unsigned char *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Player[40212] + 4 * v2) + 52) )
              {
                v103 = (CCINIClass *)CharToWideString(&HouseClass_Player[39152]);
                v10 = GetStringCSF((wchar_t *)&stru_830620[4160], 0, &stru_830620[3176], 4234);
                swprintf(Buffer, (const size_t)v10, (const wchar_t *const)v103, v109);
                PlayVocClass(*(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 1720), 0x2000, 1.0, 0);
              }
              else
              {
                v104 = (CCINIClass *)CharToWideString(&HouseClass_Player[39152]);
                v11 = GetStringCSF((wchar_t *)&stru_830620[4132], 0, &stru_830620[3176], 4239);
                swprintf(Buffer, (const size_t)v11, (const wchar_t *const)v104, v109);
                PlayVocClass(*(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 1704), 0x2000, 1.0, 0);
              }
              Dialog::ShowMessage(-1, (size_t)Buffer);
            }
          }
        }
        continue;
      case 3:
        int v18 = 0;
        int v19 = 0;
        if ( *(int *)&HouseClass_Player[40248] > 0 )
        {
          while ( !GUID::Compare(
                     (char *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Player[40236] + 4 * v19) + 40),
                     (int)&HouseClass_Player[39608]) )
          {
            if ( ++v19 >= *(int *)&HouseClass_Player[40248] )
              goto LABEL_55;
          }
          v18 = 1;
        }
LABEL_55:
        if ( *(unsigned int *)&HouseClass_Player[40224]
          && *(unsigned int *)&HouseClass_Player[39203] != WideString::Hash((wchar_t *)&HouseClass_Player[39108]) )
        {
          v18 = 1;
        }
        if ( _strcmpi(&HouseClass_Player[30260], &HouseClass_Player[39152]) && !v18 )
        {
          int v20 = operator new(0x85u);
          int v21 = v20;
          if ( v20 )
            Waypoint::InitInvalid((unsigned char *)(v20 + 40));
          else
            v21 = 0;
          memset((void *)v21, 0, 0x84u);
          *(unsigned char *)(v21 + 132) = 0;
          char * v22 = CharToWideString(&HouseClass_Player[39152]);
          wcscpy((wchar_t *)v21, (const wchar_t *)v22);
          strcpy((char *)(v21 + 52), &HouseClass_Player[39172]);
          *(unsigned int *)(v21 + 40) = *(unsigned int *)&HouseClass_Player[39608];
          *(unsigned int *)(v21 + 44) = *(unsigned int *)&HouseClass_Player[39612];
          *(unsigned int *)(v21 + 48) = *(unsigned int *)&HouseClass_Player[39616];
          SessionClass::SetPlayerOption(v21, *(SkirmishDialog **)&HouseClass_Player[39195]);
          SessionClass::SetPlayerColor(v21, *(int *)&HouseClass_Player[39199]);
          SessionClass::SetOption(v21, (SessionClass *)0xFFFFFFFE);
          SessionClass::SetOption2(v21, (SessionClass *)0xFFFFFFFE);
          if ( *(unsigned int *)&HouseClass_Player[39235] )
            *(unsigned int *)(v21 + 107) = -1;
          if ( *(int *)&HouseClass_Player[40248] < *(int *)&HouseClass_Player[40240]
            || (HouseClass_Player[40245] || !*(unsigned int *)&HouseClass_Player[40240])
            && *(int *)&HouseClass_Player[40252] > 0
            && (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)&HouseClass_Player[40232]
                                                                      + 8))(
                 &HouseClass_Player[40232],
                 *(unsigned int *)&HouseClass_Player[40240] + *(unsigned int *)&HouseClass_Player[40252],
                 0) )
          {
            int v23 = (*(unsigned int *)&HouseClass_Player[40248])++;
            *(unsigned int *)(*(unsigned int *)&HouseClass_Player[40236] + 4 * v23) = v21;
          }
          Network_Handle_5E8D90(*(int *)&HouseClass_Player[39231], v21);
          int v24 = 1;
          if ( *(int *)&HouseClass_Player[40200] > 1 )
          {
            while ( !GUID::Compare(
                       (char *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Player[40188] + 4 * v24) + 40),
                       (int)&HouseClass_Player[39608]) )
            {
              if ( ++v24 >= *(int *)&HouseClass_Player[40200] )
                goto LABEL_79;
            }
            RA2_OPDEL(*(void **)(*(unsigned int *)&HouseClass_Player[40188] + 4 * v24));
  int v25; // eax
            v25 = (*(int (**)(char *, int))(*(unsigned int *)&HouseClass_Player[40184] + 16))(
                    &HouseClass_Player[40184],
                    *(unsigned int *)&HouseClass_Player[40188] + 4 * v24);
            if ( v25 != -1 && v25 < *(int *)&HouseClass_Player[40200] )
            {
              --*(unsigned int *)&HouseClass_Player[40200];
              for ( ;
                    v25 < *(int *)&HouseClass_Player[40200];
                    *(unsigned int *)(*(unsigned int *)&HouseClass_Player[40188] + 4 * v25 - 4) = *(unsigned int *)(*(unsigned int *)&HouseClass_Player[40188] + 4 * v25) )
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
            PlayVocClass(*(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 1728), 0x2000, 1.0, 0);
        }
        continue;
      case 0x16:
        if ( !Settings::CheckString() )
        {
          NetworkLobby::SetupPlayers((wchar_t *)&HouseClass_Player[39195]);
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
          char * v27 = CharToWideString(&HouseClass_Player[39152]);
          wcscpy((wchar_t *)&HouseClass_Player[39108], (const wchar_t *)v27);
          SessionClass::AssignSide(&HouseClass_Player[29932], *(int *)&HouseClass_Player[39195], 0);
          SessionClass::AssignColor(
            &HouseClass_Player[29932],
            *(int *)&HouseClass_Player[39199],
            0);
          *(unsigned int *)&HouseClass_Player[32212] = *(unsigned int *)&HouseClass_Player[39612];
          *(&g_MatrixTransformState + 1301) = (CoordStruct *)2;
          *(unsigned int *)&HouseClass_Player[32208] = *(unsigned int *)&HouseClass_Player[39608];
          *(unsigned int *)&HouseClass_Player[32216] = *(unsigned int *)&HouseClass_Player[39616];
          PtrVector::Destroy(&HouseClass_Player[40232]);
          int v28 = operator new(0x85u);
          int v29 = v28;
          if ( v28 )
            Waypoint::InitInvalid((unsigned char *)(v28 + 40));
          else
            v29 = 0;
          memset((void *)v29, 0, 0x84u);
          *(unsigned char *)(v29 + 132) = 0;
          char * v30 = CharToWideString(&HouseClass_Player[30260]);
          wcscpy((wchar_t *)v29, (const wchar_t *)v30);
          PlayerOption = (SkirmishDialog *)Session::GetPlayerOption(&HouseClass_Player[29932]);
          SessionClass::SetPlayerOption(v29, PlayerOption);
          PlayerColor = Session::GetPlayerColor(&HouseClass_Player[29932]);
          SessionClass::SetPlayerColor(v29, PlayerColor);
          SessionClass::SetOption(v29, (SessionClass *)0xFFFFFFFE);
          SessionClass::SetOption2(v29, (SessionClass *)0xFFFFFFFE);
          *(unsigned int *)&stru_830620[4228] = *(unsigned int *)&HouseClass_Player[39235];
          if ( *(unsigned int *)&HouseClass_Player[39231] == *(unsigned int *)&HouseClass_Player[39235]
            && *(unsigned int *)&HouseClass_Player[39195] == -3 )
          {
            *(unsigned int *)(v29 + 107) = -1;
          }
          if ( *(int *)&HouseClass_Player[40248] < *(int *)&HouseClass_Player[40240]
            || (HouseClass_Player[40245] || !*(unsigned int *)&HouseClass_Player[40240])
            && *(int *)&HouseClass_Player[40252] > 0
            && (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)&HouseClass_Player[40232]
                                                                      + 8))(
                 &HouseClass_Player[40232],
                 *(unsigned int *)&HouseClass_Player[40240] + *(unsigned int *)&HouseClass_Player[40252],
                 0) )
          {
            int v33 = (*(unsigned int *)&HouseClass_Player[40248])++;
            *(unsigned int *)(*(unsigned int *)&HouseClass_Player[40236] + 4 * v33) = v29;
          }
          stru_830620[3156] = 0;
          CloseDialog(0, 0);
          *(&g_MatrixTransformState + 1299) = 0;
          Game::ResetFlags();
          Network::InitPlayerSlots();
          NetworkShare::GetField(*(int *)&HouseClass_Player[39231]);
          LoadingScreen::Init();
          DialogIndirect = (DLGTEMPLATE *)CreateDialogIndirect(g_hInstance, (HWND)0xBD, g_hWnd, GameLobby::DlgProc, 0);
          SetupDialog((HWND)DialogIndirect, 189);
          ShowWindow((HWND)DialogIndirect, 1);
          v110 = 1;
          SendNetworkHeartbeat(1, 1, 1, 0);
        }
        continue;
    }
    if ( *(unsigned int *)&HouseClass_Player[39148] != 8 )
    {
      switch ( *(unsigned int *)&HouseClass_Player[39148] )
      {
  char v121; // [esp+1E0h] [ebp-5FAh]
  unsigned int v119[113]; // [esp+1Ah] [ebp-7C0h] BYREF
        case 0x17:
          int v42 = 0;
          if ( *(int *)&HouseClass_Player[40248] > 0 )
          {
            while ( 1 )
            {
              char * v43 = ToWideStringChar(*(IUnknown **)(*(unsigned int *)&HouseClass_Player[40236] + 4 * v42));
              if ( !_strcmpi(v43, &HouseClass_Player[39152]) )
                break;
              if ( ++v42 >= *(int *)&HouseClass_Player[40248] )
                goto LABEL_291;
            }
            if ( v42 != -1 && !*((unsigned char *)&g_MatrixTransformState + 5208) )
              SetupNetworkLobbyDialog(
                (VectorClass_flat *)&HouseClass_Player[39195],
                &HouseClass_Player[39152]);
          }
          continue;
        case 0x18:
          Block = _strdup((INIClass *)&HouseClass_Player[39196]);
          edi148 = 0;
          v44 = (SessionClass *)&HouseClass_Player[40260];
          while ( 1 )
          {
            char * v46 = ToWideStringChar((IUnknown *)v44->GameMode[0]);
            if ( !_strcmpi(v46, &HouseClass_Player[39152]) )
              break;
            v44 = (SessionClass *)((char *)v44 + 4);
            ++edi148;
            if ( (int)v44 >= (int)&HouseClass_Player[40292] )
              goto LABEL_151;
          }
          if ( edi148 != -1 && !*((unsigned char *)&g_MatrixTransformState + 5208) )
          {
            char * v47 = strtok(Block, (ObjectClass *)&stru_817F40.nextObject);
            v48 = 0;
            if ( v47 )
              v48 = (SkirmishDialog *)atol(v47);
            char * v49 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
            int v50 = 0;
            if ( v49 )
              v50 = atol(v49);
            char * v51 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
            int v52 = 0;
            if ( v51 )
              v52 = atol(v51);
            char * v53 = strtok(0, (ObjectClass *)&stru_817F40.nextObject);
            aP1 = 0;
            if ( v53 )
              aP1 = (SessionClass *)atol(v53);
            if ( !Dialog::FindByHandle((void *)0xBC) )
              Dialog::FindByHandle((void *)0xBD);
            PlayerSide = SessionClass::GetPlayerSide(*(unsigned int *)&HouseClass_Player[21864][4 * edi148 + 18396]);
            bool v114 = PlayerSide != (unsigned int)v48;
            if ( (SkirmishDialog *)PlayerSide != v48 )
              SessionClass::SetPlayerOption(*(unsigned int *)&HouseClass_Player[21864][4 * edi148 + 18396], v48);
            v54 = (SessionClass *)SessionClass::GetPlayerColor(*(unsigned int *)&HouseClass_Player[21864][4 * edi148 + 18396]);
            bool v116 = v54 != (SessionClass *)v50;
            if ( v54 != (SessionClass *)v50 )
            {
              if ( NetworkSession::IsPlayerInGame(&HouseClass_Player[29932], v50) )
                v50 = -2;
              SessionClass::SetPlayerColor(*(unsigned int *)&HouseClass_Player[21864][4 * edi148 + 18396], v50);
            }
            Option = SessionClass::GetOption(*(unsigned int *)&HouseClass_Player[21864][4 * edi148 + 18396]);
            bool v115 = Option != v52;
            if ( Option != v52 )
            {
              if ( NetworkLobby::CheckPlayerNames((void *)v52) )
                v52 = -2;
              SessionClass::SetOption(*(unsigned int *)&HouseClass_Player[21864][4 * edi148 + 18396], (SessionClass *)v52);
            }
            Option2 = SessionClass::GetOption2(*(unsigned int *)&HouseClass_Player[21864][4 * edi148 + 18396]);
            bool v58 = Option2 != (unsigned int)aP1;
            if ( (SessionClass *)Option2 != aP1 )
              SessionClass::SetOption2(*(unsigned int *)&HouseClass_Player[21864][4 * edi148 + 18396], aP1);
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
          for ( i = 1; i < *(int *)&HouseClass_Player[40224]; ++i )
          {
            char * v60 = ToWideStringChar(*(IUnknown **)(*(unsigned int *)&HouseClass_Player[40212] + 4 * i));
            if ( !_strcmpi(v60, &HouseClass_Player[39152])
// 0x53ee70
              && GUID::Compare(
                   (char *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Player[40212] + 4 * i) + 40),
                   (int)&HouseClass_Player[39608]) )
            {
              if ( (CoordStruct *)i == *(&g_MatrixTransformState + 1300) )
              {
                Game::ResetFlags();
                GameClass::InitDifficultyButtons();
                PtrVector::Destroy(&HouseClass_Player[40232]);
                if ( Dialog::GetCurrentType() != 187 && Dialog::GetCurrentType() == 189 )
                  *(&g_MatrixTransformState + 1299) = (CoordStruct *)2;
              }
              if ( (int)*(&g_MatrixTransformState + 1301) > 0 && (CoordStruct *)i == *(&g_MatrixTransformState + 1300) )
                *(&g_MatrixTransformState + 1301) = (CoordStruct *)-1;
              RA2_OPDEL(*(void **)(*(unsigned int *)&HouseClass_Player[40212] + 4 * i));
  int v61; // eax
              v61 = (*(int (**)(char *, int))(*(unsigned int *)&HouseClass_Player[40208] + 16))(
                      &HouseClass_Player[40208],
                      *(unsigned int *)&HouseClass_Player[40212] + 4 * i);
              if ( v61 != -1 && v61 < *(int *)&HouseClass_Player[40224] )
              {
                --*(unsigned int *)&HouseClass_Player[40224];
                for ( ;
                      v61 < *(int *)&HouseClass_Player[40224];
                      *(unsigned int *)(*(unsigned int *)&HouseClass_Player[40212] + 4 * v61 - 4) = *(unsigned int *)(*(unsigned int *)&HouseClass_Player[40212] + 4 * v61) )
                {
                  ++v61;
                }
              }
              *(&g_MatrixTransformState + 1300) = (CoordStruct *)(i - 1);
              v111 = 1;
              SendNetworkHeartbeat(0, 1, 1, 0);
            }
          }
          char v62 = 0;
          NetworkLobby::CheckLobbyConditions(&HouseClass_Player[39608]);
          for ( j = 0; j < *(int *)&HouseClass_Player[40248]; ++j )
          {
            if ( GUID::Compare(
                   (char *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Player[40236] + 4 * j) + 40),
                   (int)&HouseClass_Player[39608]) )
            {
              RA2_OPDEL(*(void **)(*(unsigned int *)&HouseClass_Player[40236] + 4 * j));
  int v64; // eax
              v64 = (*(int (**)(char *, int))(*(unsigned int *)&HouseClass_Player[40232] + 16))(
                      &HouseClass_Player[40232],
                      *(unsigned int *)&HouseClass_Player[40236] + 4 * j);
              if ( v64 != -1 && v64 < *(int *)&HouseClass_Player[40248] )
              {
                --*(unsigned int *)&HouseClass_Player[40248];
                for ( ;
                      v64 < *(int *)&HouseClass_Player[40248];
                      *(unsigned int *)(*(unsigned int *)&HouseClass_Player[40236] + 4 * v64 - 4) = *(unsigned int *)(*(unsigned int *)&HouseClass_Player[40236] + 4 * v64) )
                {
                  ++v64;
                }
              }
              v62 = 1;
              if ( (int)*(&g_MatrixTransformState + 1301) >= 2 )
                PlayVocClass(*(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 1724), 0x2000, 1.0, 0);
            }
          }
          int v65 = 1;
          if ( *(int *)&HouseClass_Player[40200] > 1 )
          {
  int v67; // ecx
            do
            {
              if ( !GUID::Compare(
                      (char *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Player[40188] + 4 * v65) + 40),
                      (int)&HouseClass_Player[39608])
                || (RA2_OPDEL(*(void **)(*(unsigned int *)&HouseClass_Player[40188] + 4 * v65)),
  int v66; // eax
                    v66 = (*(int (**)(char *, int))(*(unsigned int *)&HouseClass_Player[40184] + 16))(
                            &HouseClass_Player[40184],
                            *(unsigned int *)&HouseClass_Player[40188] + 4 * v65),
                    v66 == -1) )
              {
                v67 = *(unsigned int *)&HouseClass_Player[40200];
              }
              else
              {
                v67 = *(unsigned int *)&HouseClass_Player[40200];
                if ( v66 < *(int *)&HouseClass_Player[40200] )
                {
                  v67 = *(unsigned int *)&HouseClass_Player[40200] - 1;
                  *(unsigned int *)&HouseClass_Player[40200] = v67;
                  if ( v66 < v67 )
                  {
                    do
                    {
                      ++v66;
                      *(unsigned int *)(*(unsigned int *)&HouseClass_Player[40188] + 4 * v66 - 4) = *(unsigned int *)(*(unsigned int *)&HouseClass_Player[40188] + 4 * v66);
                      v67 = *(unsigned int *)&HouseClass_Player[40200];
                    }
                    while ( v66 < *(int *)&HouseClass_Player[40200] );
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
            (*(void (**)(unsigned int))(**(unsigned int **)&HouseClass_Player[29936] + 144))(*(unsigned int *)&HouseClass_Player[29936]);
LABEL_222:
            v110 = 1;
            continue;
          }
          Current = (ObjectClass *)Dialog::GetCurrent();
          v70 = SendDlgItemMessageA((HWND)Current, 1771, 0x188u, 0, 0);
          if ( v70 == -1 )
            goto LABEL_222;
          v71 = SendDlgItemMessageA((HWND)Current, 1771, 0x199u, v70, 0);
          (*(void (**)(LRESULT))(*(unsigned int *)v71 + 144))(v71);
          v110 = 1;
          break;
        case 0xB:
        case 0xE:
          if ( *(&g_MatrixTransformState + 1301) == (CoordStruct *)2 )
          {
            *(unsigned int *)&HouseClass_Player[30724] = *(unsigned int *)&HouseClass_Player[39195];
            *(unsigned int *)&HouseClass_Player[32208] = *(unsigned int *)&HouseClass_Player[39608];
            *(unsigned int *)&HouseClass_Player[32212] = *(unsigned int *)&HouseClass_Player[39612];
            *(unsigned int *)&HouseClass_Player[32216] = *(unsigned int *)&HouseClass_Player[39616];
            *(unsigned int *)&HouseClass_Player[30720] = *(unsigned int *)&HouseClass_Player[40248];
            *(&g_MatrixTransformState + 1299) = (CoordStruct *)1;
            if ( *(unsigned int *)&HouseClass_Player[39148] == 11 )
            {
              *(&g_MatrixTransformState + 1301) = (CoordStruct *)3;
            }
            else if ( *(unsigned int *)&HouseClass_Player[39148] == 14 )
            {
              *(&g_MatrixTransformState + 1301) = (CoordStruct *)4;
            }
            goto LABEL_336;
          }
          break;
        case 4:
          if ( *(unsigned int *)&HouseClass_Player[39195] != *(unsigned int *)&HouseClass_Player[30256] )
          {
            int v72 = 0;
            if ( *(int *)&HouseClass_Player[40200] <= 0 )
            {
LABEL_230:
              int v73 = operator new(0x85u);
              int v74 = v73;
              if ( v73 )
                Waypoint::InitInvalid((unsigned char *)(v73 + 40));
              else
                v74 = 0;
              char * v78 = CharToWideString(&HouseClass_Player[39152]);
              wcscpy((wchar_t *)v74, (const wchar_t *)v78);
              *(unsigned int *)(v74 + 40) = *(unsigned int *)&HouseClass_Player[39608];
              *(unsigned int *)(v74 + 44) = *(unsigned int *)&HouseClass_Player[39612];
              *(unsigned int *)(v74 + 48) = *(unsigned int *)&HouseClass_Player[39616];
              int v79 = *(unsigned int *)&stru_87C374[45004];
              if ( *(unsigned int *)&stru_87C374[44996] != -1 )
                v79 += Timer::GetTicks() - *(unsigned int *)&stru_87C374[44996];
              *(unsigned int *)(v74 + 52) = v79;
              *(unsigned char *)(v74 + 56) = 0;
              *(unsigned int *)(v74 + 57) = *(unsigned int *)&HouseClass_Player[39199];
              if ( *(int *)&HouseClass_Player[40200] < *(int *)&HouseClass_Player[40192]
                || (HouseClass_Player[40197] || !*(unsigned int *)&HouseClass_Player[40192])
                && *(int *)&HouseClass_Player[40204] > 0
                && (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)&HouseClass_Player[40184]
                                                                          + 8))(
                     &HouseClass_Player[40184],
                     *(unsigned int *)&HouseClass_Player[40192] + *(unsigned int *)&HouseClass_Player[40204],
                     0) )
              {
                eax245 = (*(unsigned int *)&HouseClass_Player[40200])++;
                *(unsigned int *)(*(unsigned int *)&HouseClass_Player[40188] + 4 * eax245) = v74;
              }
            }
            else
            {
              while ( !GUID::Compare(
                         (char *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Player[40188] + 4 * v72) + 40),
                         (int)&HouseClass_Player[39608]) )
              {
                if ( ++v72 >= *(int *)&HouseClass_Player[40200] )
                  goto LABEL_230;
              }
              v75 = (wchar_t **)(*(unsigned int *)&HouseClass_Player[40188] + 4 * v72);
              char * v76 = CharToWideString(&HouseClass_Player[39152]);
              wcscpy(*v75, (const wchar_t *)v76);
              int v77 = *(unsigned int *)&stru_87C374[45004];
              if ( *(unsigned int *)&stru_87C374[44996] != -1 )
                v77 += Timer::GetTicks() - *(unsigned int *)&stru_87C374[44996];
              *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Player[40188] + 4 * v72) + 52) = v77;
              *(unsigned char *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Player[40188] + 4 * v72) + 56) = 0;
              *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Player[40188] + 4 * v72) + 57) = *(unsigned int *)&HouseClass_Player[39199];
            }
            if ( !*(&g_MatrixTransformState + 1300) )
              v110 = 1;
          }
          continue;
        case 5:
          if ( *(&g_MatrixTransformState + 1301) != (CoordStruct *)1
            && *(&g_MatrixTransformState + 1301) != (CoordStruct *)2 )
          {
  unsigned int v123[113]; // [esp+282h] [ebp-558h] BYREF
            memset(v123, 0, sizeof(v123));
            v124 = 0;
            char v125 = 0;
            v123[0] = 4;
            v80 = *(ObjectClass **)&HouseClass_Player[30280];
            strcpy((char *)&v123[1], &HouseClass_Player[30260]);
            *(unsigned int *)((char *)&v123[11] + 3) = *(unsigned int *)&HouseClass_Player[30256];
            *(unsigned int *)((char *)&v123[12] + 3) = v80;
            Network::SendMessage(
              (int)&HouseClass_Player[44148],
              (int)v123,
              455,
              1,
              (int)&HouseClass_Player[39608],
              0,
              0);
            Event::Dispatch();
          }
          continue;
        case 0xC:
          v81 = *(ObjectClass **)&HouseClass_Player[39420];
          if ( *(&g_MatrixTransformState + 1301) != (CoordStruct *)2
            || *(unsigned int *)&HouseClass_Player[39424] == WideString::Hash((wchar_t *)&HouseClass_Player[39108]) )
          {
            char * v83 = CharToWideString(&HouseClass_Player[39152]);
            Dialog::ShowMessage((LPARAM)v81, (size_t)g_Str_Trace___s_, v83, 11064936);
            PlayVocClass(*(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 1708), 0x2000, 1.0, 0);
          }
          continue;
        case 6:
          if ( *(unsigned int *)&HouseClass_Player[40248] )
          {
            int v84 = 0;
            int v85 = 0;
            Blocka = 0;
            int v86 = 1;
            if ( *(int *)&HouseClass_Player[40248] > 1 )
            {
              while ( 1 )
              {
                char * v87 = ToWideStringChar(*(IUnknown **)(*(unsigned int *)&HouseClass_Player[40236] + 4 * v86));
                if ( !_strcmpi(v87, &HouseClass_Player[39152]) )
                  break;
                if ( ++v86 >= *(int *)&HouseClass_Player[40248] )
                  goto LABEL_266;
              }
              if ( Network::processPacket(
                     (char *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Player[40236] + 4 * v86) + 40),
                     (TechnoTypeClass *)&HouseClass_Player[39608]) )
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
            char * v88 = ToWideStringChar(**(IUnknown ***)&HouseClass_Player[40236]);
            if ( !_strcmpi(v88, &HouseClass_Player[39152]) || v84 )
            {
              memset(v119, 0, sizeof(v119));
              v120 = 0;
              v121 = 0;
              v119[0] = 8;
              *(unsigned int *)((char *)&v119[11] + 3) = 0;
              Network::SendMessage(
                (int)&HouseClass_Player[44148],
                (int)v119,
                455,
                1,
                (int)&HouseClass_Player[39608],
                0,
                0);
              continue;
            }
            if ( v85 )
              goto LABEL_276;
            if ( *(unsigned int *)&HouseClass_Player[39235] != 1 )
            {
              if ( NetworkLobby::CheckMinPlayers() )
              {
                memset(v119, 0, sizeof(v119));
                v120 = 0;
                v121 = 0;
                v119[0] = 8;
                *(unsigned int *)((char *)&v119[11] + 3) = 1;
                Network::SendMessage(
                  (int)&HouseClass_Player[44148],
                  (int)v119,
                  455,
                  1,
                  (int)&HouseClass_Player[39608],
                  0,
                  0);
                continue;
              }
              if ( *(unsigned int *)&HouseClass_Player[39235] != 1 )
                goto LABEL_276;
            }
            if ( GameOption::CheckDuplicate() )
            {
              memset(v119, 0, sizeof(v119));
              v120 = 0;
              v121 = 0;
              v119[0] = 8;
              *(unsigned int *)((char *)&v119[11] + 3) = 1;
            }
            else
            {
LABEL_276:
              bool v89 = 1;
              if ( !Blocka )
              {
                v89 = *(unsigned int *)&HouseClass_Player[39215] == (unsigned int)*(&g_MatrixTransformState + 1303);
                if ( *(unsigned int *)&HouseClass_Player[39219] != unknown_libname_30() )
                  v89 = 0;
                if ( *(CoordStruct **)&HouseClass_Player[39223] != *(&g_MatrixTransformState + 1304) )
                  v89 = 0;
                if ( *(INIClass **)&HouseClass_Player[39227] != GameOptions::GetEntry() )
                  v89 = 0;
              }
              aP1a = 0;
              if ( *(int *)&HouseClass_Player[40248] > 0 )
              {
                int v90 = *(unsigned int *)&HouseClass_Player[40236];
                int v91 = *(unsigned int *)&HouseClass_Player[40248];
                do
                {
                  if ( !strcmp((const char *)(*(unsigned int *)v90 + 52), &HouseClass_Player[39172]) )
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
                  *(unsigned int *)((char *)&v119[11] + 3) = 7;
                  Network::SendMessage(
                    (int)&HouseClass_Player[44148],
                    (int)v119,
                    455,
                    1,
                    (int)&HouseClass_Player[39608],
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
                            (VersionClass *)&HouseClass_Player[44948],
                            *(CellStruct **)&HouseClass_Player[39207],
                            *(unsigned int *)&HouseClass_Player[39211]);
                *(unsigned int *)&HouseClass_Player[31608] = updated;
                if ( updated )
                {
                  if ( updated == -1 )
                  {
                    memset(v119, 0, sizeof(v119));
                    v120 = 0;
                    v121 = 0;
                    v119[0] = 8;
                    *(unsigned int *)((char *)&v119[11] + 3) = 3;
                    Network::SendMessage(
                      (int)&HouseClass_Player[44148],
                      (int)v119,
                      455,
                      1,
                      (int)&HouseClass_Player[39608],
                      0,
                      0);
                  }
                  else
                  {
                    *(unsigned int *)&HouseClass_Player[29952] = Network::GetMaxPacketSize((VersionClass *)&HouseClass_Player[44948]);
                    int v93 = operator new(0x85u);
                    int v94 = v93;
                    if ( v93 )
                      Waypoint::InitInvalid((unsigned char *)(v93 + 40));
                    else
                      v94 = 0;
                    memset((void *)v94, 0, 0x84u);
                    *(unsigned char *)(v94 + 132) = 0;
                    char * v95 = CharToWideString(&HouseClass_Player[39152]);
                    wcscpy((wchar_t *)v94, (const wchar_t *)v95);
                    *(unsigned int *)(v94 + 40) = *(unsigned int *)&HouseClass_Player[39608];
                    *(unsigned int *)(v94 + 44) = *(unsigned int *)&HouseClass_Player[39612];
                    *(unsigned int *)(v94 + 48) = *(unsigned int *)&HouseClass_Player[39616];
                    if ( *(unsigned int *)&HouseClass_Player[29936] )
                    {
                      if ( (*(uint8_t (**)(unsigned int, unsigned int))(**(unsigned int **)&HouseClass_Player[29936]
                                                                             + 28))(
                             *(unsigned int *)&HouseClass_Player[29936],
                             *(unsigned int *)&HouseClass_Player[39195]) )
                      {
                        v96 = *(SkirmishDialog **)&HouseClass_Player[39195];
                      }
                      else
                      {
                        v96 = (SkirmishDialog *)(*(int (**)(unsigned int))(**(unsigned int **)&HouseClass_Player[29936]
                                                                              + 40))(*(unsigned int *)&HouseClass_Player[29936]);
                      }
                      SessionClass::SetPlayerOption(v94, v96);
                    }
                    strcpy((char *)(v94 + 52), &HouseClass_Player[39172]);
                    int v97 = *(unsigned int *)&HouseClass_Player[39199];
                    if ( NetworkLobby::CheckPlayerNameValid(*(void **)&HouseClass_Player[39199]) )
                      v97 = -2;
                    if ( *(unsigned int *)&HouseClass_Player[39235] == 1 )
                    {
                      v97 = -2;
                      SessionClass::SetPlayerOption(v94, (SkirmishDialog *)0xFFFFFFFD);
                      *(unsigned int *)(v94 + 107) = -1;
                    }
                    else
                    {
                      *(unsigned int *)(v94 + 107) = 0;
                      if ( *(unsigned int *)&HouseClass_Player[39195] == -3 )
                      {
                        if ( *(unsigned int *)&HouseClass_Player[29936] )
                        {
                          v106 = (CCINIClass *)(*(int (**)(unsigned int))(**(unsigned int **)&HouseClass_Player[29936]
                                                                             + 40))(*(unsigned int *)&HouseClass_Player[29936]);
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
                    if ( *(unsigned int *)&HouseClass_Player[29936] )
                    {
                      v107 = (CCINIClass *)(*(int (**)(unsigned int))(**(unsigned int **)&HouseClass_Player[29936]
                                                                         + 44))(*(unsigned int *)&HouseClass_Player[29936]);
                      SessionClass::SetOption2(v94, (SessionClass *)v107);
                    }
                    else
                    {
                      SessionClass::SetOption2(v94, (SessionClass *)0xFFFFFFFE);
                    }
                    if ( *(int *)&HouseClass_Player[40248] < *(int *)&HouseClass_Player[40240]
                      || (HouseClass_Player[40245] || !*(unsigned int *)&HouseClass_Player[40240])
                      && *(int *)&HouseClass_Player[40252] > 0
                      && (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)&HouseClass_Player[40232]
                                                                                + 8))(
                           &HouseClass_Player[40232],
                           *(unsigned int *)&HouseClass_Player[40240]
                         + *(unsigned int *)&HouseClass_Player[40252],
                           0) )
                    {
                      int v98 = (*(unsigned int *)&HouseClass_Player[40248])++;
                      *(unsigned int *)(*(unsigned int *)&HouseClass_Player[40236] + 4 * v98) = v94;
                    }
                    ebx325 = NetworkLobby::AssignPlayerSlot(v94);
                    Game::ResetReadyStates();
                    memset(v119, 0, sizeof(v119));
                    v120 = 0;
                    v121 = 0;
                    v119[0] = 7;
                    v110 = 1;
                    strcpy((char *)&v119[1], &HouseClass_Player[30260]);
                    *(unsigned int *)((char *)&v119[11] + 3) = SessionClass::GetPlayerSide(v94);
                    v99 = (SessionClass *)SessionClass::GetPlayerColor(v94);
                    *(unsigned int *)((char *)&v119[21] + 3) = *(unsigned int *)&stru_830620[4228];
                    *(unsigned int *)((char *)&v119[12] + 3) = v99;
                    *(unsigned int *)((char *)&v119[20] + 3) = ebx325;
                    Network::SendMessage(
                      (int)&HouseClass_Player[44148],
                      (int)v119,
                      455,
                      1,
                      (int)&HouseClass_Player[39608],
                      0,
                      0);
                    PlayVocClass(*(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 1728), 0x2000, 1.0, 0);
                    if ( *(unsigned int *)&HouseClass_Player[29936] )
                    {
                      int v101 = (*(int (**)(unsigned int))(**(unsigned int **)&HouseClass_Player[29936] + 152))(*(unsigned int *)&HouseClass_Player[29936]);
                      if ( v101 != -1 )
                        *(unsigned int *)&HouseClass_Player[32192] = v101;
                    }
                    CheckGameSettingsChanged(1, 0);
  unsigned int v129[113]; // [esp+612h] [ebp-1C8h] BYREF
                    memset(v129, 0, sizeof(v129));
                    v130 = 0;
                    char v131 = 0;
                    v129[0] = 22;
                    strcpy((char *)&v129[1], &HouseClass_Player[30260]);
                    Player::BuildListString((wchar_t *)((char *)&v129[11] + 3));
                    int v102 = *(unsigned int *)&HouseClass_Player[40248];
                    for ( k = 1; k < v102; ++k )
                    {
                      Network::SendMessage(
                        (int)&HouseClass_Player[44148],
                        (int)v129,
                        455,
                        1,
                        *(unsigned int *)(*(unsigned int *)&HouseClass_Player[40236] + 4 * k) + 40,
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
                *(unsigned int *)((char *)&v119[11] + 3) = 2;
              }
              else
              {
                memset(v119, 0, sizeof(v119));
                v120 = 0;
                v121 = 0;
                v119[0] = 8;
                *(unsigned int *)((char *)&v119[11] + 3) = 6;
              }
            }
          }
          else
          {
            memset(v119, 0, sizeof(v119));
            v120 = 0;
            v121 = 0;
            v119[0] = 8;
            *(unsigned int *)((char *)&v119[11] + 3) = 5;
          }
          Network::SendMessage(
            (int)&HouseClass_Player[44148],
            (int)v119,
            455,
            1,
            (int)&HouseClass_Player[39608],
            0,
            0);
          break;
      }
      continue;
    }
    int v35 = 0;
    if ( *(&g_MatrixTransformState + 1301) == (CoordStruct *)2 )
    {
  unsigned int v126[113]; // [esp+44Ah] [ebp-390h] BYREF
      memset(v126, 0, sizeof(v126));
      v127 = 0;
      char v128 = 0;
      v126[0] = 10;
      strcpy((char *)&v126[1], &HouseClass_Player[30260]);
      for ( m = 1; m < *(int *)&HouseClass_Player[40248]; ++m )
      {
        Network::SendMessage(
          (int)&HouseClass_Player[44148],
          (int)v126,
          455,
          1,
          *(unsigned int *)(*(unsigned int *)&HouseClass_Player[40236] + 4 * m) + 40,
          0,
          0);
        Event::Dispatch();
      }
      Network::SendMessage((int)&HouseClass_Player[44148], (int)v126, 455, 0, 0, 0, 0);
      if ( *(unsigned int *)&HouseClass_Player[39088] )
        Network::SendMessage(
          (int)&HouseClass_Player[44148],
          (int)v126,
          455,
          0,
          (int)&HouseClass_Player[39092],
          0,
          0);
      while ( Network::GetQueueCount((int)&HouseClass_Player[44148]) > 0 )
      {
        if ( !Network::ReceiveLoop(&HouseClass_Player[44148]) )
          break;
        Event::Dispatch();
      }
      *(unsigned short *)&HouseClass_Player[39108] = 0;
      Game::ResetFlags();
      GameClass::InitDifficultyButtons();
      PtrVector::Destroy(&HouseClass_Player[40232]);
      PtrVector::Destroy(&HouseClass_Player[40184]);
      *((unsigned long long *)&g_MatrixTransformState + 650) = 0xFFFFFFFF00000000uLL;
      stru_830620[3156] = 1;
      v35 = 4;
      v110 = 1;
    }
    else if ( *(&g_MatrixTransformState + 1301) == (CoordStruct *)1 )
    {
      v35 = *(unsigned int *)&HouseClass_Player[39195];
      *(&g_MatrixTransformState + 1301) = (CoordStruct *)-1;
    }
    else if ( *(&g_MatrixTransformState + 1301) != (CoordStruct *)-1 )
    {
      continue;
    }
    v37 = GetStringCSF((wchar_t *)&stru_830620[3724], 0, &stru_830620[3176], 4540);
    Dialog::ShowMessage(-1, (size_t)v37);
    PlayVocClass(*(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 1712), 0x2000, 1.0, 0);
    switch ( v35 )
    {
      case 0:
        v38 = GetStringCSF((wchar_t *)&stru_830620[4096], 0, &stru_830620[3176], 4546);
        goto LABEL_131;
      case 1:
        if ( *(&g_MatrixTransformState + 2222) )
          v38 = GetStringCSF((wchar_t *)&stru_830620[4060], 0, &stru_830620[3176], 4550);
        else
          v38 = GetStringCSF((wchar_t *)&stru_830620[4080], 0, &stru_830620[3176], 4548);
LABEL_131:
        if ( v38 )
          ShowDialogConfirm((CampaignScore *)v38, 0, sub_5DAF20, 0);
        break;
      case 2:
        v38 = GetStringCSF(g_Str_TXT_YOURGAME_OUTDATED, 0, &stru_830620[3176], 4552);
        goto LABEL_131;
      case 3:
        v38 = GetStringCSF(g_Str_TXT_DESTGAME_OUTDATED, 0, &stru_830620[3176], 4554);
        goto LABEL_131;
      case 6:
        v38 = GetStringCSF(g_Str_TXT_MISMATCH, 0, &stru_830620[3176], 4556);
        goto LABEL_131;
      case 5:
        v38 = GetStringCSF((wchar_t *)&stru_830620[4040], 0, &stru_830620[3176], 4558);
        goto LABEL_131;
      case 7:
        v38 = GetStringCSF((wchar_t *)&stru_830620[4024], 0, &stru_830620[3176], 4560);
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

} // namespace gamemd

// 0x5E8EA0
namespace gamemd {
void NetworkLobby::SetupPlayers()
{
  LPARAM v1; // esi
  wchar_t *v2; // edi
  LPARAM v3; // ebx
  LPARAM v4; // ebp
  int v5; // edx
  LPARAM *v6; // ecx
  LPARAM v7; // eax
  bool v8; // al
  signed int v9; // edx
  ObjectClass *v10; // esi
  wchar_t *i; // edi
  wchar_t *v12; // ebp
  HWND v13; // edi
  int ResourceID2CSF; // ebx
  int v15; // eax
  HWND DlgItem; // eax
  int ResourceIDCSF; // ebx
  HWND v18; // edi
  int v19; // eax
  int v20; // eax
  HWND v21; // eax
  int v22; // ebx
  wchar_t **v23; // [esp+0h] [ebp-170h]
  wchar_t **v24; // [esp+0h] [ebp-170h]
  DeleteAndZero v25; // [esp+10h] [ebp-160h] BYREF
  wchar_t Destination[170]; // [esp+1Ch] [ebp-154h] BYREF

  if ( *(unsigned short *)this->__pad_0 )
  {
    wcscpy(Destination, (const wchar_t *)this); /*0x5e8eba*/
    v1 = g_Lobby_MaxPlayers; /*0x5e8ebf*/
    v2 = g_Lobby_PlayerReady; /*0x5e8ec5*/
    v3 = g_HouseClass_ObserverFlags; /*0x5e8ecb*/
    v4 = g_Lobby_PlayerCount; /*0x5e8ed1*/
    v5 = 0; /*0x5e8eda*/
    v6 = dword_A8DA90; /*0x5e8edc*/
    do /*0x5e8f14*/
    {
      v7 = *v6; /*0x5e8ee1*/
      v8 = *v6 == v1 || v7 && v7 != v3 && v7 != v4 && (wchar_t *)v7 != v2 && *(unsigned int *)(v7 + 107) == -1; /*0x5e8f01*/
      v25.__pad_0[v5 + 4] = v8; /*0x5e8f06*/
      ++v6; /*0x5e8f0a*/
      ++v5; /*0x5e8f0d*/
    }
    while ( (int)v6 < (int)&dword_A8DAB0 ); /*0x5e8f14*/
    if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x5e8f1d*/
    {
      if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5e8f28*/
        v9 = 6; /*0x5e8f38*/
      else
        v9 = 2; /*0x5e8f31*/
    }
    else
    {
      v9 = 8; /*0x5e8f3f*/
    }
    memset32(dword_A8DA90, g_HouseClass_ObserverFlags, v9); /*0x5e8f54*/
    if ( v9 < 8 ) /*0x5e8f59*/
      memset32((void *)(4 * v9 + 11066000), g_Lobby_PlayerCount, 8 - v9); /*0x5e8f6e*/
    v10 = 0; /*0x5e8f7a*/
    for ( i = wcstok(Destination, asc_8304FC, v23); i; i = wcstok(0, asc_8304FC, v24) )
    {
      WideString::Assign((wchar_t **)&v25, i); /*0x5e8f93*/
      v12 = NetworkLobby::DeleteAndZero((NetworkLobby *)&v25); /*0x5e8fa5*/
      DeleteAndZero::Alt(&v25); /*0x5e8fa7*/
      if ( !v12 ) /*0x5e8fae*/
      {
        v12 = Player::FindByName((Player *)i); /*0x5e8fb7*/
        if ( !v12 ) /*0x5e8fbb*/
          v12 = g_Lobby_PlayerReady; /*0x5e8fbd*/
      }
      if ( v12 != (wchar_t *)g_Lobby_MaxPlayers
        && (!v12
         || v12 == (wchar_t *)g_HouseClass_ObserverFlags
         || v12 == (wchar_t *)g_Lobby_PlayerCount
         || v12 == g_Lobby_PlayerReady
         || v12 == (wchar_t *)g_Lobby_PlayerTeam
         || v12 == (wchar_t *)g_Lobby_PlayerSide
         || v12 == (wchar_t *)g_Lobby_PlayerColor
         || *(unsigned int *)((char *)v12 + 107) != -1) )
      {
        v13 = (HWND)Dialog::FindByHandle((Dialog *)0xC2); /*0x5e9017*/
        if ( !v13 ) /*0x5e901b*/
        {
          v13 = (HWND)Dialog::FindByHandle((Dialog *)0xC9); /*0x5e9027*/
          if ( !v13 ) /*0x5e902b*/
          {
            v13 = (HWND)Dialog::FindByHandle((Dialog *)0xBC); /*0x5e9037*/
            if ( !v13 ) /*0x5e903b*/
              v13 = (HWND)Dialog::FindByHandle((Dialog *)0xBD); /*0x5e9047*/
          }
        }
        if ( v25.__pad_0[(unsigned int)v10 + 4] )
        {
          ResourceID2CSF = GetResourceID2CSF(v10); /*0x5e905c*/
          if ( GetComboBoxSelected(v13, ResourceID2CSF, -1) == -3 )
          {
            FillComboBoxRandomOnly(v13, ResourceID2CSF); /*0x5e9076*/
            if ( v10 )
            {
              if ( v10 == (ObjectClass *)1 )
              {
                v15 = 1042; /*0x5e908b*/
              }
              else if ( v10 == (ObjectClass *)2 )
              {
                v15 = 1043; /*0x5e9097*/
              }
              else if ( v10 == (ObjectClass *)3 )
              {
                v15 = 1044; /*0x5e90a3*/
              }
              else if ( v10 == (ObjectClass *)4 )
              {
                v15 = 1045; /*0x5e90af*/
              }
              else if ( v10 == (ObjectClass *)5 )
              {
                v15 = 1046; /*0x5e90bb*/
              }
              else if ( v10 == (ObjectClass *)6 )
              {
                v15 = 1047; /*0x5e90c7*/
              }
              else
              {
                v15 = v10 != (ObjectClass *)7 ? -1 : 1048;
              }
            }
            else
            {
              v15 = 1041; /*0x5e907f*/
            }
            DlgItem = GetDlgItem(v13, v15); /*0x5e90ec*/
            SendMessageA(DlgItem, 0x4F1u, 0, 0); /*0x5e90f3*/
            ResourceIDCSF = GetResourceIDCSF(v10); /*0x5e9100*/
            FillComboBoxFactions(v13, ResourceIDCSF); /*0x5e9106*/
            SetupSkirmishSpawnLocations(v13, ResourceIDCSF, -2); /*0x5e910d*/
          }
        }
      }
      else
      {
        v18 = (HWND)Dialog::FindByHandle((Dialog *)0xC2); /*0x5e911c*/
        if ( !v18 ) /*0x5e9120*/
        {
          v18 = (HWND)Dialog::FindByHandle((Dialog *)0xC9); /*0x5e912c*/
          if ( !v18 ) /*0x5e9130*/
          {
            v18 = (HWND)Dialog::FindByHandle((Dialog *)0xBC); /*0x5e913c*/
            if ( !v18 ) /*0x5e9140*/
              v18 = (HWND)Dialog::FindByHandle((Dialog *)0xBD); /*0x5e914c*/
          }
        }
        if ( !v25.__pad_0[(unsigned int)v10 + 4] )
        {
          dword_A8DA90[(unsigned int)v10] = (LPARAM)v12; /*0x5e915c*/
          v19 = GetResourceID2CSF(v10); /*0x5e9163*/
          SetupComboBoxObserver(v18, v19); /*0x5e916c*/
          if ( v10 )
          {
            if ( v10 == (ObjectClass *)1 )
            {
              v20 = 1042; /*0x5e9181*/
            }
            else if ( v10 == (ObjectClass *)2 )
            {
              v20 = 1043; /*0x5e918d*/
            }
            else if ( v10 == (ObjectClass *)3 )
            {
              v20 = 1044; /*0x5e9199*/
            }
            else if ( v10 == (ObjectClass *)4 )
            {
              v20 = 1045; /*0x5e91a5*/
            }
            else if ( v10 == (ObjectClass *)5 )
            {
              v20 = 1046; /*0x5e91b1*/
            }
            else if ( v10 == (ObjectClass *)6 )
            {
              v20 = 1047; /*0x5e91bd*/
            }
            else
            {
              v20 = v10 != (ObjectClass *)7 ? -1 : 1048;
            }
          }
          else
          {
            v20 = 1041; /*0x5e9175*/
          }
          v21 = GetDlgItem(v18, v20); /*0x5e91e2*/
          SendMessageA(v21, 0x4F1u, 0, 1); /*0x5e91e9*/
          v22 = GetResourceIDCSF(v10); /*0x5e91f6*/
          FillListBox(v18, v22); /*0x5e91fc*/
          SetupSkirmishSpawnLocations(v18, v22, 8); /*0x5e9207*/
        }
      }
      dword_A8DA90[(unsigned int)v10] = (LPARAM)v12; /*0x5e9211*/
      v10 = (ObjectClass *)((char *)v10 + 1); /*0x5e921a*/
    }
  }
}
}
// 0x5E9240
namespace gamemd {
int NetworkLobby::AssignPlayerSlot()
{
  int result; // eax
  LPARAM *v2; // edx

  result = 0; /*0x5e9250*/
  v2 = dword_A8DA90; /*0x5e9252*/
    while ( (*v2 != MEMORY[0xAC119C] || *((unsigned int *)this + 428) == -1)
       && (*v2 != g_Lobby_MaxPlayers || *(unsigned int *)&this->__pad_3D[46] != -1) )
  {
    ++v2; /*0x5e926e*/
    ++result; /*0x5e9271*/
    if ( (int)v2 >= (int)&dword_A8DAB0 ) /*0x5e9278*/
      return -1; /*0x5e9280*/
  }
  dword_A8DA90[result] = (LPARAM)this; /*0x5e9284*/
  return result; /*0x5e927a*/
}
}
// 0x5E9E00
namespace gamemd {
int NetworkLobby::InitLobbyDropdowns()
{
  int i; // ebp
  Dialog *ResourceID4CSF; // esi
  int ComboBoxSelectedRaw2; // edi
  int result; // eax

  for ( i = 0; i < 8; ++i ) /*0x5e9e06*/
  {
    ResourceID4CSF = (Dialog *)GetResourceID4CSF((ObjectClass *)i); /*0x5e9e0f*/
    ComboBoxSelectedRaw2 = GetComboBoxSelectedRaw2((HWND)this, (int)ResourceID4CSF, -1); /*0x5e9e1e*/
    result = Dialog::OptionIDToIndex(ResourceID4CSF); /*0x5e9e20*/
    if ( (ObjectClass *)result == dword_A8DA8C ) /*0x5e9e2b*/
    {
      SetupLobbyPlayerSlots((int)ResourceID4CSF, ComboBoxSelectedRaw2); /*0x5e9e32*/
      result = dword_A8DA84; /*0x5e9e37*/
      if ( dword_A8DA84 ) /*0x5e9e3e*/
        result = SessionClass::SetOption2((int *)*dword_A8DA78, ComboBoxSelectedRaw2); /*0x5e9e48*/
    }
    else
    {
      *(unsigned int *)&stru_A8B250.__pad_0[4 * result + 172] = ComboBoxSelectedRaw2; /*0x5e9e4f*/
    }
  }
  return result; /*0x5e9e5c*/
}
}
// 0x5EA2A0
namespace gamemd {
void * NetworkLobby::Dispatch()
{
  int i; // esi
  int v2; // eax
  HWND DlgItem; // ebx
  wchar_t *v4; // eax
  HWND v5; // edi
  int v6; // eax
  LPARAM v7; // eax
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
    DlgItem = GetDlgItem((HWND)this, v2); /*0x5ea31f*/
    v4 = (wchar_t *)dword_A8DA90[i]; /*0x5ea321*/
    v5 = 0; /*0x5ea328*/
    if ( v4 /*0x5ea36c*/
      && v4 != (wchar_t *)g_HouseClass_ObserverFlags
      && v4 != (wchar_t *)g_Lobby_PlayerCount
      && v4 != g_Lobby_PlayerReady
      && v4 != (wchar_t *)g_Lobby_MaxPlayers
      && v4 != (wchar_t *)g_Lobby_PlayerTeam
      && v4 != (wchar_t *)g_Lobby_PlayerSide
      && v4 != (wchar_t *)g_Lobby_PlayerColor
      && !wcscmp(v4, (const wchar_t *)&stru_A8D600.Network_field_0x10) )
    {
      v6 = HashTable::Find(&g_DialogHashTable, (const char *)off_8316CC, 0); /*0x5ea380*/
  LABEL_33:
      v5 = (HWND)v6; /*0x5ea3be*/
      goto LABEL_34; /*0x5ea3be*/
    }
    v7 = dword_A8DA90[i]; /*0x5ea382*/
    if ( v7 && (v7 == g_Lobby_PlayerTeam || v7 == g_Lobby_PlayerSide || v7 == g_Lobby_PlayerColor) /*0x5ea3a9*/
      || *(unsigned int *)(v7 + 119) == 1 )
    {
      v6 = HashTable::Find(&g_DialogHashTable, off_8316D0, 0); /*0x5ea3b9*/
      goto LABEL_33; /*0x5ea3b9*/
    }
  LABEL_34:
    result = CacheDialogInvalidate(DlgItem, v5); /*0x5ea3c0*/
  }
  return result; /*0x5ea3d3*/
}
}
// 0x5EB660
namespace gamemd {
int NetworkLobby::SetupPlayerSlotControls()
{
  int i; // edi
  int v3; // esi
  LRESULT v4; // eax
  LRESULT v5; // eax
  char v7; // [esp+13h] [ebp-5h]
  int v8; // [esp+14h] [ebp-4h]

  v7 = 0; /*0x5eb671*/
  if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x5eb676*/
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
    v4 = SendDlgItemMessageA((HWND)this, v3, 0x147u, 0, 0); /*0x5eb721*/
    v5 = SendDlgItemMessageA((HWND)this, v3, 0x150u, v4, 0); /*0x5eb72d*/
    if ( v5 && (v5 == g_Lobby_PlayerTeam || v5 == g_Lobby_PlayerSide || v5 == g_Lobby_PlayerColor) ) /*0x5eb749*/
    {
      if ( i >= v8 ) /*0x5eb74f*/
        dword_A8DA90[i] = g_Lobby_PlayerCount; /*0x5eb765*/
      else
        dword_A8DA90[i] = g_HouseClass_ObserverFlags; /*0x5eb756*/
      SetupSkirmishPlayerSlots((void *)i, 0); /*0x5eb772*/
      *(unsigned int *)&stru_A8B250.__pad_0[4 * i + 44] = -1; /*0x5eb77a*/
      *(unsigned int *)&stru_A8B250.__pad_0[4 * i + 76] = -1; /*0x5eb781*/
      *(unsigned int *)&stru_A8B250.__pad_0[4 * i + 108] = -1; /*0x5eb788*/
      v7 = 1; /*0x5eb78f*/
    }
  }
  return v7; /*0x5eb7a2*/
}
}
// 0x5EE3A0
namespace gamemd {
char NetworkLobby::FillOptionCombo()
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
    if ( dword_A8B23C ) /*0x5ee3fb*/
      v8 = *(unsigned char *)(dword_A8B23C + 60); /*0x5ee400*/
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
        && (v3 == g_Lobby_PlayerTeam || v3 == g_Lobby_PlayerSide || v3 == g_Lobby_PlayerColor)
        && (v5 = CharToWideString(unk_A8B380), !wcscmp((const wchar_t *)v5, word_A8D610)) )
      {
        if ( !v8 ) /*0x5ee478*/
        {
          *v2 = -2; /*0x5ee47e*/
  LABEL_18:
          IDA_LOBYTE(ResourceID4) = EnableWindow(v4, 0); /*0x5ee484*/
          goto LABEL_19; /*0x5ee487*/
        }
        IDA_LOBYTE(ResourceID4) = EnableWindow(v4, 1); /*0x5ee47c*/
      }
      else
      {
        if ( v3 == g_HouseClass_ObserverFlags || v3 == g_Lobby_PlayerCount ) /*0x5ee4b7*/
          goto LABEL_18; /*0x5ee4b7*/
        if ( v10 == dword_A8DA8C ) /*0x5ee4c4*/
        {
          if ( !v8 ) /*0x5ee4cc*/
          {
            EnableWindow(v4, 0); /*0x5ee505*/
  LABEL_27:
            v6 = CharToWideString(unk_A8B380); /*0x5ee4db*/
            ResourceID4 = (HWND)wcscmp((const wchar_t *)v6, word_A8D610); /*0x5ee4eb*/
            if ( !ResourceID4 ) /*0x5ee4f5*/
              IDA_LOBYTE(ResourceID4) = SessionClass::SetOption2(v3, -2); /*0x5ee4fb*/
            goto LABEL_19; /*0x5ee500*/
          }
          EnableWindow(v4, 1); /*0x5ee4d1*/
        }
        IDA_LOBYTE(ResourceID4) = v8; /*0x5ee4d3*/
        if ( !v8 ) /*0x5ee4d9*/
          goto LABEL_27; /*0x5ee4d9*/
      }
  LABEL_19:
      ++v2; /*0x5ee489*/
      v1 = (void *)++v10; /*0x5ee490*/
    }
    while ( (int)v2 < (int)&byte_A8B31C ); /*0x5ee419*/
  }
  return (char)ResourceID4; /*0x5ee4a5*/
}
}
// 0x5DA080
namespace gamemd {
int NetworkLobby::GetPlayerCount(char a1)
{
  int result; // eax

  result = 2; /*0x5da084*/
  if ( (a1 & 1) != 0 ) /*0x5da08c*/
    result = 3; /*0x5da08e*/
  if ( (a1 & 2) != 0 ) /*0x5da096*/
    ++result; /*0x5da098*/
  if ( (a1 & 4) != 0 ) /*0x5da09c*/
    ++result; /*0x5da09e*/
  if ( (a1 & 0x20) != 0 ) /*0x5da0a2*/
    result += 5; /*0x5da0a4*/
  return result; /*0x5da0a7*/
}
} // namespace gamemd

// 0x5DC170
namespace gamemd {
char NetworkLobby::ValidateSerialNumber()
{
  int v2; // esi
  FILE *v3; // eax
  FILE *v4; // ebp
  int i; // ecx
  HKEY phkResult; // [esp+10h] [ebp-18Ch] BYREF
  DWORD cbData; // [esp+14h] [ebp-188h] BYREF
  DWORD Type; // [esp+18h] [ebp-184h] BYREF
  BYTE Data[128]; // [esp+1Ch] [ebp-180h] BYREF
  CHAR SubKey[256]; // [esp+9Ch] [ebp-100h] BYREF

  strcpy((char *)Data, "0000000000000000000000"); /*0x5dc17c*/
  strcpy((const char *)Data); /*0x5dc1b7*/
  memset(Data, 0, sizeof(Data)); /*0x5dc1c9*/
  if ( g_Str_SOFTWARE_Westwood_Yuri_s_Reven ) /*0x5dc1d2*/
  {
    if ( strlen(g_Str_SOFTWARE_Westwood_Yuri_s_Reven) ) /*0x5dc1da*/
    {
      strcpy(SubKey, g_Str_SOFTWARE_Westwood_Yuri_s_Reven); /*0x5dc20b*/
      if ( !RegOpenKeyExA(HKEY_LOCAL_MACHINE, SubKey, 0, 0x20019u, &phkResult) ) /*0x5dc226*/
      {
        cbData = 128; /*0x5dc24b*/
        RegQueryValueExA(phkResult, aSerial, 0, &Type, Data, &cbData); /*0x5dc253*/
        RegCloseKey(phkResult); /*0x5dc25e*/
      }
    }
  }
  Data[22] = 0; /*0x5dc26d*/
  strcpy((const char *)Data); /*0x5dc28b*/
  v2 = 0; /*0x5dc294*/
  v3 = fopen(aWoldataKey, aR); /*0x5dc296*/
  v4 = v3; /*0x5dc29b*/
  if ( !v3 ) /*0x5dc2a2*/
    return 0; /*0x5dc2a7*/
  for ( i = fgetc(v3); i != -1; i = fgetc(v4) ) /*0x5dc2bf*/
  {
    Data[v2] = (((char)Data[v2] - 48) % 10 - i + 1000) % 10 + 48; /*0x5dc2eb*/
    if ( ++v2 == strlen((const char *)Data) ) /*0x5dc2f7*/
      v2 = 0; /*0x5dc2f9*/
  }
  fclose(v4); /*0x5dc30c*/
  strcpy((const char *)Data); /*0x5dc32e*/
  return 1; /*0x5dc2a4*/
}
} // namespace gamemd

// 0x5E9290
namespace gamemd {
char NetworkLobby::CheckLobbyConditions()
{
  int v2; // ebp
  int v3; // edi
  LPARAM *v4; // esi
  int result; // eax

  if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x5e929e*/
  {
    if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5e92a9*/
      v2 = 6; /*0x5e92b9*/
    else
      v2 = 2; /*0x5e92b2*/
  }
  else
  {
    v2 = 8; /*0x5e92c0*/
  }
  if ( !g_MPCooperativeState && v2 < 7 ) /*0x5e92d1*/
    ++v2; /*0x5e92d3*/
  v3 = 0; /*0x5e92d4*/
  v4 = dword_A8DA90; /*0x5e92d6*/
  while ( 1 ) /*0x5e92e1*/
  {
    result = GUID::Compare((char *)(*v4 + 40), (int)this); /*0x5e92e1*/
    if ( (unsigned char)result ) /*0x5e92e8*/
      break; /*0x5e92e8*/
    ++v4; /*0x5e92ea*/
    ++v3; /*0x5e92ed*/
    if ( (int)v4 >= (int)&dword_A8DAB0 ) /*0x5e92f4*/
      return result; /*0x5e92f4*/
  }
  result = dword_A8DA90[v3]; /*0x5e92fb*/
  if ( *(unsigned int *)(result + 107) == -1 ) /*0x5e9306*/
  {
    dword_A8DA90[v3] = g_Lobby_MaxPlayers; /*0x5e930e*/
  }
  else
  {
    result = g_HouseClass_ObserverFlags; /*0x5e931a*/
    if ( v3 >= v2 ) /*0x5e9321*/
      result = g_Lobby_PlayerCount; /*0x5e9323*/
    dword_A8DA90[v3] = result; /*0x5e9328*/
  }
  return result; /*0x5e92f6*/
}
} // namespace gamemd

// 0x5E9470
namespace gamemd {
BOOL NetworkLobby::IsValidPlayerName()
{
  return this /*0x5e9499*/
      && this != (NetworkLobby *)g_HouseClass_ObserverFlags
      && this != (NetworkLobby *)g_Lobby_PlayerCount
      && this != (NetworkLobby *)g_Lobby_MaxPlayers
      && this != (NetworkLobby *)g_Lobby_PlayerReady;
}
} // namespace gamemd

// 0x5E9510
namespace gamemd {
bool NetworkLobby::CheckMinPlayers()
{
  int v1; // ecx
  int v2; // eax
  LPARAM *i; // edx

  v1 = dword_A8BB0C; /*0x5e9515*/
  if ( dword_A8B548 < dword_A8BB0C ) /*0x5e951d*/
    v1 = dword_A8B548; /*0x5e951f*/
  v2 = 0; /*0x5e9521*/
  if ( v1 > 0 ) /*0x5e952c*/
  {
    for ( i = dword_A8DA90; *i != g_HouseClass_ObserverFlags; ++i ) /*0x5e952e*/
    {
      if ( ++v2 >= v1 ) /*0x5e953d*/
        return g_MPCooperativeState || v1 >= 8 || dword_A8DA90[v1] != g_HouseClass_ObserverFlags; /*0x5e953d*/
    }
    return 0; /*0x5e9535*/
  }
  return g_MPCooperativeState || v1 >= 8 || dword_A8DA90[v1] != g_HouseClass_ObserverFlags; /*0x5e9554*/
}
} // namespace gamemd

// 0x5E96A0
namespace gamemd {
char NetworkLobby::CheckPlayerNameValid()
{
  wchar_t **v2; // esi
  wchar_t *v3; // ecx
  NetworkLobby **v4; // eax

  if ( this == (NetworkLobby *)-2 ) /*0x5e96a7*/
    return 0; /*0x5e9713*/
  v2 = (wchar_t **)dword_A8DA90; /*0x5e96a9*/
  while ( 1 ) /*0x5e96ae*/
  {
    v3 = *v2; /*0x5e96ae*/
    if ( *v2 ) /*0x5e96ae*/
    {
      if ( v3 != (wchar_t *)g_HouseClass_ObserverFlags /*0x5e96f3*/
        && v3 != (wchar_t *)g_Lobby_PlayerCount
        && v3 != g_Lobby_PlayerReady
        && v3 != (wchar_t *)g_Lobby_MaxPlayers
        && v3 != (wchar_t *)g_Lobby_PlayerTeam
        && v3 != (wchar_t *)g_Lobby_PlayerSide
        && v3 != (wchar_t *)g_Lobby_PlayerColor
        && (NetworkLobby *)SessionClass::GetPlayerColor((SessionClass *)v3) == this )
      {
        break; /*0x5e96f3*/
      }
    }
    if ( (int)++v2 >= (int)&dword_A8DAB0 ) /*0x5e96fe*/
    {
      v4 = (NetworkLobby **)&stru_A8B250.__pad_0[108]; /*0x5e9700*/
      while ( *v4 != this ) /*0x5e9707*/
      {
        if ( (int)++v4 >= (int)&stru_A8B250.__pad_0[140] ) /*0x5e9711*/
          return 0; /*0x5e9711*/
      }
      return 1; /*0x5e9707*/
    }
  }
  return 1; /*0x5e9713*/
}
} // namespace gamemd

// 0x5E9720
namespace gamemd {
char NetworkLobby::CheckPlayerNames()
{
  wchar_t **v2; // esi
  wchar_t *v3; // ecx
  NetworkLobby **v4; // eax

  if ( this == (NetworkLobby *)-2 ) /*0x5e9727*/
    return 0; /*0x5e9793*/
  v2 = (wchar_t **)dword_A8DA90; /*0x5e9729*/
  while ( 1 ) /*0x5e972e*/
  {
    v3 = *v2; /*0x5e972e*/
    if ( *v2 ) /*0x5e972e*/
    {
      if ( v3 != (wchar_t *)g_HouseClass_ObserverFlags /*0x5e9773*/
        && v3 != (wchar_t *)g_Lobby_PlayerCount
        && v3 != g_Lobby_PlayerReady
        && v3 != (wchar_t *)g_Lobby_MaxPlayers
        && v3 != (wchar_t *)g_Lobby_PlayerTeam
        && v3 != (wchar_t *)g_Lobby_PlayerSide
        && v3 != (wchar_t *)g_Lobby_PlayerColor
        && (NetworkLobby *)SessionClass::GetOption((int *)v3) == this )
      {
        break; /*0x5e9773*/
      }
    }
    if ( (int)++v2 >= (int)&dword_A8DAB0 ) /*0x5e977e*/
    {
      v4 = (NetworkLobby **)&stru_A8B250.__pad_0[140]; /*0x5e9780*/
      while ( *v4 != this ) /*0x5e9787*/
      {
        if ( (int)++v4 >= (int)&stru_A8B250.__pad_0[172] ) /*0x5e9791*/
          return 0; /*0x5e9791*/
      }
      return 1; /*0x5e9787*/
    }
  }
  return 1; /*0x5e9793*/
}
} // namespace gamemd

// 0x5EDFC0
namespace gamemd {
wchar_t * NetworkLobby::DeleteAndZero()
{
  wchar_t *v2; // esi
  wchar_t *v4; // esi
  wchar_t *v5; // esi
  wchar_t *v6; // esi
  wchar_t *v7; // esi
  wchar_t *v8; // esi
  wchar_t *v9; // esi
  char *v10; // [esp+4h] [ebp-4h] BYREF

  if ( (uint8_t)WideString::IsASCII((const wchar_t **)this) ) /*0x5edfc4*/
  {
    ToWideStringCharAlt(&v10, (const wchar_t **)this); /*0x5edfd7*/
    if ( (uint8_t)String::Equals_Alt((String *)&v10, off_831704) ) /*0x5edfe6*/
    {
      v2 = (wchar_t *)g_HouseClass_ObserverFlags; /*0x5edfef*/
      DeleteAndZero((ObjectClass *)&v10); /*0x5edff9*/
      return v2; /*0x5ee002*/
    }
    if ( (uint8_t)String::Equals_Alt((String *)&v10, off_831708) ) /*0x5ee00e*/
    {
      v4 = (wchar_t *)g_Lobby_PlayerCount; /*0x5ee017*/
      DeleteAndZero((ObjectClass *)&v10); /*0x5ee021*/
      return v4; /*0x5ee02a*/
    }
    if ( (uint8_t)String::Equals_Alt((String *)&v10, off_83170C) ) /*0x5ee036*/
    {
      v5 = g_Lobby_PlayerReady; /*0x5ee03f*/
      DeleteAndZero((ObjectClass *)&v10); /*0x5ee049*/
      return v5; /*0x5ee052*/
    }
    if ( (uint8_t)String::Equals_Alt((String *)&v10, off_831710) ) /*0x5ee05d*/
    {
      v6 = (wchar_t *)g_Lobby_PlayerTeam; /*0x5ee066*/
      DeleteAndZero((ObjectClass *)&v10); /*0x5ee070*/
      return v6; /*0x5ee079*/
    }
    if ( (uint8_t)String::Equals_Alt((String *)&v10, off_831714) ) /*0x5ee085*/
    {
      v7 = (wchar_t *)g_Lobby_PlayerSide; /*0x5ee08e*/
      DeleteAndZero((ObjectClass *)&v10); /*0x5ee098*/
      return v7; /*0x5ee0a1*/
    }
    if ( (uint8_t)String::Equals_Alt((String *)&v10, off_831718) ) /*0x5ee0ad*/
    {
      v8 = (wchar_t *)g_Lobby_PlayerColor; /*0x5ee0b6*/
      DeleteAndZero((ObjectClass *)&v10); /*0x5ee0c0*/
      return v8; /*0x5ee0c9*/
    }
    if ( (uint8_t)String::Equals_Alt((String *)&v10, off_83171C) ) /*0x5ee0d4*/
    {
      v9 = (wchar_t *)g_Lobby_MaxPlayers; /*0x5ee0dd*/
      DeleteAndZero((ObjectClass *)&v10); /*0x5ee0e7*/
      return v9; /*0x5ee0f0*/
    }
    DeleteAndZero((ObjectClass *)&v10); /*0x5ee0f5*/
  }
  return 0; /*0x5ee000*/
}
} // namespace gamemd

// 0x5EE6A0
namespace gamemd {
void NetworkLobby::UpdateLabels()
{
  ObjectClass *v2; // ebp
  int **v3; // edi
  int ResourceID3CSF; // esi
  int v5; // eax

  if ( this ) /*0x5ee6a5*/
  {
    v2 = 0; /*0x5ee6aa*/
    v3 = (int **)dword_A8DA90; /*0x5ee6ac*/
    do /*0x5ee6e4*/
    {
      ResourceID3CSF = GetResourceID3CSF(v2); /*0x5ee6b8*/
      FillComboBoxSides(ResourceID3CSF); /*0x5ee6be*/
      v5 = SetComboBoxSelection((HWND)this, ResourceID3CSF, -1); /*0x5ee6c9*/
      if ( *v3 ) /*0x5ee6ce*/
        SessionClass::SetOption(*v3, v5); /*0x5ee6d5*/
      ++v3; /*0x5ee6da*/
      v2 = (ObjectClass *)((char *)v2 + 1); /*0x5ee6dd*/
    }
    while ( (int)v3 < (int)&dword_A8DAB0 ); /*0x5ee6e4*/
  }
}
} // namespace gamemd
