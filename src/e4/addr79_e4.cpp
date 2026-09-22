// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_793120_e4.hpp"
#include "e4/classes/E4Recv_793CD0_e4.hpp"
#include "e4/classes/E4Recv_795650_e4.hpp"
#include "e4/classes/E4Recv_79BF50_e4.hpp"
#include "e4/classes/E4Recv_79C040_e4.hpp"
#include "e4/classes/E4Recv_79C8D0_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/Connection_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/NetworkLobby_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Scenario_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"
#include "e4/classes/WebBrowser_e4.hpp"
#include "e4/classes/WideString_e4.hpp"

// 0x792CF0
namespace gamemd {
void sub_792CF0(HWND hWnd, UINT a2, WPARAM a3, char * a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  INT_PTR result; // eax
  HWND DlgItem; // esi

  if ( a2 > 0x110 ) /*0x792cfa*/
  {
    switch ( a2 ) /*0x792d68*/
    {
      case 0x111u: /*0x792d68*/
        if ( (unsigned __int16)a3 == 1421 ) /*0x792e0f*/
        {
          SetEvent(Handles); /*0x792e2b*/
          CloseDialog(hWnd, 1); /*0x792e3a*/
        }
        else if ( (unsigned __int16)a3 == 1422 ) /*0x792e12*/
        {
          WebBrowser::ShowDialog((const char *)&stru_84BBE0.nextArrayIndex); /*0x792e19*/
          return 0; /*0x792e21*/
        }
        break;
      case 0x113u: /*0x792d68*/
        if ( a3 == 69 ) /*0x792de3*/
        {
          ShowWindow(hWnd, 5); /*0x792dec*/
          KillTimer(hWnd, 0x45u); /*0x792df5*/
          return 0; /*0x792dfe*/
        }
        break;
      case 0x497u: /*0x792d68*/
        SendMessageA(hWnd, 0x4A9u, 0, 1); /*0x792d8d*/
        SetTimer(hWnd, 0x45u, uElapse, 0); /*0x792d9e*/
        HashTable::LookupAndMark(hWnd); /*0x792da6*/
        DlgItem = GetDlgItem(hWnd, 1961); /*0x792dbf*/
        PostMessageA(DlgItem, 0x4D5u, 0, 0); /*0x792dc9*/
        PostMessageA(DlgItem, 0x4D3u, 0, 0); /*0x792dd5*/
        return 0; /*0x792ddb*/
    }
    return 0; /*0x792d78*/
  }
  if ( a2 == 272 ) /*0x792cfc*/
    return 0; /*0x792e3f*/
  switch ( a2 ) /*0x792d16*/
  {
    case 2u: /*0x792d16*/
      KillTimer(hWnd, 0x45u); /*0x792d24*/
      return 0; /*0x792d2d*/
    case 0xFu: /*0x792d16*/
      Dialog::DrawBackground(hWnd); /*0x792d48*/
      Dialog::StopBink(hWnd); /*0x792d4f*/
      ValidateRect(hWnd, 0); /*0x792d57*/
      return 0; /*0x792d60*/
    case 0x14u: /*0x792d16*/
      goto LABEL_6;
    case 0x2Bu: /*0x792d16*/
      Dialog::Resize(a4); /*0x792d34*/
LABEL_6:
      result = 1; /*0x792d39*/
      break; /*0x792d3f*/
    default:
      return 0;
  }
  return result; /*0x792d2c*/
}
}
} // namespace gamemd

// 0x793280
namespace gamemd {
void sub_793280(HWND hWnd, UINT a2, WPARAM a3, char * a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  INT_PTR result; // eax
  HWND DlgItem; // eax
  int i; // esi
  HWND v9; // edi

  if ( a2 > 0x111 ) /*0x79328c*/
  {
    if ( a2 < 0x132 ) /*0x793355*/
      return 0; /*0x793355*/
    if ( a2 <= 0x138 ) /*0x79335c*/
      return (INT_PTR)GetStockObject(4); /*0x793420*/
    if ( a2 != 1175 ) /*0x793367*/
      return 0; /*0x793331*/
    int v5 = 0; /*0x793374*/
    int * v6 = dword_84A1F0; /*0x793376*/
    do /*0x7933ab*/
    {
      DlgItem = GetDlgItem(hWnd, *v6); /*0x79337f*/
      dword_B75F54 = 0; /*0x79338e*/
      dword_B75F58 = 0; /*0x793396*/
      if ( v5 > *(_DWORD *)&HouseClass_Player[40248] - 1 ) /*0x79339c*/
        DestroyWindow(DlgItem); /*0x79339f*/
      ++v6; /*0x7933a1*/
      ++v5; /*0x7933a4*/
    }
    while ( (int)v6 < (int)&byte_84A210 ); /*0x7933ab*/
    for ( i = 0; i < *(int *)&HouseClass_Player[40248]; ++i ) /*0x7933bc*/
    {
      v9 = GetDlgItem(hWnd, dword_84A1F0[i]); /*0x7933d3*/
      SendMessageA(v9, 0x4B2u, 0, *(_DWORD *)(*(_DWORD *)&HouseClass_Player[40236] + 4 * i)); /*0x7933e1*/
      SendMessageA(v9, 0xF1u, 0, 0); /*0x7933ed*/
    }
    SendMessageA(hWnd, 0x4A9u, 0, 1); /*0x793403*/
    HashTable::LookupAndMark(hWnd); /*0x793407*/
    ShowWindow(hWnd, 5); /*0x79340f*/
    return 0; /*0x793418*/
  }
  else
  {
    if ( a2 != 273 ) /*0x793292*/
    {
      switch ( a2 ) /*0x793297*/
      {
        case 0xFu: /*0x793297*/
          Dialog::DrawBackground(hWnd); /*0x7932c1*/
          ValidateRect(hWnd, 0); /*0x7932c9*/
          return 0; /*0x7932d4*/
        case 0x14u: /*0x793297*/
          return 1; /*0x7932b8*/
        case 0x2Bu: /*0x793297*/
          Dialog::Resize(a4); /*0x7932ab*/
          return 1; /*0x7932ab*/
      }
      return 0; /*0x7932a1*/
    }
    switch ( (__int16)a3 ) /*0x7932f4*/
    {
      case 1889: /*0x7932f4*/
      case 1890: /*0x7932f4*/
      case 1892: /*0x7932f4*/
      case 1893: /*0x7932f4*/
      case 1894: /*0x7932f4*/
      case 1895: /*0x7932f4*/
      case 1896: /*0x7932f4*/
      case 1897: /*0x7932f4*/
        if ( byte_B757EB[(unsigned __int16)a3] ) /*0x7932fb*/
        {
          if ( !SendDlgItemMessageA(hWnd, (unsigned __int16)a3, 0xF0u, 0, 0) ) /*0x79331a*/
            SendDlgItemMessageA(hWnd, (unsigned __int16)a3, 0xF1u, 1u, 0); /*0x79332a*/
          return 0; /*0x79332a*/
        }
        if ( SendDlgItemMessageA(hWnd, (unsigned __int16)a3, 0xF0u, 0, 0) != 1 ) /*0x793339*/
          return 0; /*0x793339*/
        SendDlgItemMessageA(hWnd, (unsigned __int16)a3, 0xF1u, 0, 0); /*0x793346*/
        result = 0; /*0x79334a*/
        break; /*0x79334d*/
      default:
        return 0;
    }
  }
  return result; /*0x7932b0*/
}
}
} // namespace gamemd

// 0x793490
namespace gamemd {
AbstractClass * * HandleWOLForwardingError()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  HWND result; // eax
  ObjectClass *i; // edx
  wchar_t *StringCSF; // eax
  wchar_t *v8; // eax
  wchar_t *v9; // eax
  result = 0; /*0x793496*/
  if ( (int)g_WOL_State > 0 ) /*0x7934a3*/
  {
    for ( i = (ObjectClass *)g_WOL_ConnectionFlags; ; i = (ObjectClass *)((char *)i + 108) ) /*0x7934a9*/
    {
      if ( (int)result >= 0 && (int)result < (int)g_WOL_State ) /*0x7934b5*/
        qmemcpy(&g_IsMultiplayerSession, i, 0x6Cu); /*0x7934c3*/
      if ( (g_IsMultiplayerSession.field_0 & 1) != 0 ) /*0x7934cc*/
        break; /*0x7934cc*/
      result = (HWND)((char *)result + 1); /*0x7934ce*/
      if ( (int)result >= (int)g_WOL_State ) /*0x7934d4*/
        return result; /*0x7934d4*/
    }
    result = (HWND)&g_IsMultiplayerSession; /*0x7934e0*/
    if ( &g_IsMultiplayerSession ) /*0x7934e7*/
    {
  _BYTE v10[368]; // [esp-Ch] [ebp-218h] BYREF
      int v2 = -1; /*0x7934f2*/
      int v3 = 0; /*0x7934f5*/
      if ( *(int *)&HouseClass_Player[40248] > 0 ) /*0x7934f9*/
      {
        while ( 1 ) /*0x793509*/
        {
          char * v4 = ToWideStringChar(*(IUnknown **)(*(_DWORD *)&HouseClass_Player[40236] + 4 * v3)); /*0x793509*/
          if ( !_strcmpi(v4, byte_B777D4) ) /*0x79350f*/
            break; /*0x79350f*/
          if ( ++v3 >= *(int *)&HouseClass_Player[40248] ) /*0x793523*/
            goto LABEL_15; /*0x793523*/
        }
        v2 = v3; /*0x793527*/
      }
LABEL_15:
      char v5 = 0; /*0x793529*/
      int v6 = 0; /*0x793530*/
      if ( *(int *)&HouseClass_Player[40248] <= 0 ) /*0x793534*/
        goto LABEL_26; /*0x793534*/
      do /*0x7936ba*/
      {
        switch ( dword_B73BB4[v6] ) /*0x79354a*/
        {
          case 0: /*0x79354a*/
            v5 = 1; /*0x793557*/
            ToWideStringChar(*(IUnknown **)(*(_DWORD *)&HouseClass_Player[40236] + 4 * v6)); /*0x79355c*/
            Debug::Log(); /*0x793567*/
            *(_DWORD *)&v10[8] = *(_DWORD *)(*(_DWORD *)&HouseClass_Player[40236] + 4 * v6); /*0x793579*/
            StringCSF = GetStringCSF((wchar_t *)aTxtTalkReporte, 0, (CampaignScore *)g_Str_File_wonline_cpp, 18840); /*0x793589*/
            goto LABEL_19; /*0x793589*/
          case 1: /*0x79354a*/
            v5 = 1; /*0x793591*/
            ToWideStringChar(*(IUnknown **)(*(_DWORD *)&HouseClass_Player[40236] + 4 * v6)); /*0x793596*/
            Debug::Log(); /*0x7935a1*/
            *(_DWORD *)&v10[8] = *(_DWORD *)(*(_DWORD *)&HouseClass_Player[40236] + 4 * v6); /*0x7935b3*/
            StringCSF = GetStringCSF(aTxtTalkLocalPr, 0, (CampaignScore *)g_Str_File_wonline_cpp, 18850); /*0x7935c3*/
LABEL_19:
            swprintf( /*0x7935c8*/
              (wchar_t *const)&v10[24],
              (const size_t)StringCSF,
              *(const wchar_t *const *)&v10[8],
              *(CampaignScore **)&v10[12]);
            Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, (CampaignScore *)&v10[24], *(ObjectClass *)v10); /*0x7935df*/
            break; /*0x7935e7*/
          case 2: /*0x79354a*/
            v5 = 1; /*0x7935ee*/
            if ( v6 == v2 ) /*0x7935f0*/
            {
              Debug::Log(); /*0x7935f7*/
              *(_DWORD *)&v10[8] = GetStringCSF(aTxtTalkForward, 0, (CampaignScore *)g_Str_File_wonline_cpp, 18861); /*0x79361b*/
              Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, *(CampaignScore **)&v10[8], *(ObjectClass *)&v10[12]); /*0x79361d*/
            }
            else
            {
              ToWideStringChar(*(IUnknown **)(*(_DWORD *)&HouseClass_Player[40236] + 4 * v6)); /*0x79362a*/
              Debug::Log(); /*0x793635*/
              *(_DWORD *)&v10[8] = *(_DWORD *)(*(_DWORD *)&HouseClass_Player[40236] + 4 * v6); /*0x79364b*/
              v8 = GetStringCSF(aTxtTalkForward_0, 0, (CampaignScore *)g_Str_File_wonline_cpp, 18864); /*0x793658*/
              swprintf( /*0x793663*/
                (wchar_t *const)&v10[24],
                (const size_t)v8,
                *(const wchar_t *const *)&v10[8],
                *(CampaignScore **)&v10[12]);
              Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, (CampaignScore *)&v10[24], *(ObjectClass *)v10); /*0x793674*/
            }
            break; /*0x79361d*/
          case 3: /*0x79354a*/
            v5 = 1; /*0x793683*/
            Debug::Log(); /*0x793685*/
            *(_DWORD *)&v10[8] = GetStringCSF( /*0x7936a3*/
                                   (wchar_t *)&stru_84BBE0.estimatedHealth,
                                   0,
                                   (CampaignScore *)g_Str_File_wonline_cpp,
                                   18875);
            Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, *(CampaignScore **)&v10[8], *(ObjectClass *)&v10[12]); /*0x7936aa*/
            break; /*0x7936aa*/
          default:
            break;
        }
        result = *(HWND *)&HouseClass_Player[40248]; /*0x7936b2*/
        ++v6; /*0x7936b7*/
      }
      while ( v6 < *(int *)&HouseClass_Player[40248] ); /*0x7936ba*/
      if ( !v5 ) /*0x7936c2*/
      {
LABEL_26:
        v9 = GetStringCSF( /*0x7936d5*/
               (wchar_t *)&stru_84BBE0.customSound_controller[3],
               0,
               (CampaignScore *)g_Str_File_wonline_cpp,
               18888);
        return Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, (CampaignScore *)v9, *(ObjectClass *)&v10[12]); /*0x7936e2*/
      }
    }
  }
  return result; /*0x7934d6*/
}
}
} // namespace gamemd

// 0x793B30
namespace gamemd {
int sub_793B30(char a1, const char * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  _BYTE v3[3]; // [esp+0h] [ebp-100h] BYREF
  qmemcpy(v3, "Z1", 2); /*0x793b39*/
  v3[2] = a1 + 48; /*0x793b45*/
  if ( a2 ) /*0x793b49*/
  char v4[253]; // [esp+3h] [ebp-FDh] BYREF
    strcpy(v4, a2); /*0x793b68*/
  else
    v4[0] = 0; /*0x793b76*/
  Debug::Log(); /*0x793b85*/
  return (*(int (__stdcall **)(LPVOID, _BYTE *))(*(_DWORD *)ppv + 60))(ppv, v3); /*0x793b9d*/
}
}
} // namespace gamemd

// 0x793D20
namespace gamemd {
void NegotiateNetworkConnection(IUnknown * aP0, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  IUnknown *v3; // ebp
  WinModemClass *v5; // edi
  __int16 v13; // si
  AbstractClass *v14; // di
  unsigned __int16 v23; // si
  IUnknown *v24; // ebx
  CreateGameDialogControl *v29; // ecx
  IPXManagerClass *v32; // di
  IPXManagerClass *eax55; // eax
  IPXManagerClass *v34; // edx
  CreateGameDialogControl *v36; // ecx
  IUnknown *v33; // eax
  DWORD v38; // eax
  DWORD v43; // eax
  char v44; // bl
  int Speed; // eax
  HWND v48; // eax
  Coord *v49; // esi
  HWND DlgItem; // eax
  DWORD *v51; // ecx
  char v57; // [esp+14h] [ebp-73Ah]
  char v58; // [esp+15h] [ebp-739h]
  AbstractClass *v59; // [esp+16h] [ebp-738h]
  int v62; // [esp+1Ah] [ebp-734h]
  int v63; // [esp+1Eh] [ebp-730h]
  IPXManagerClass *v64; // [esp+22h] [ebp-72Ch]
  DWORD v65; // [esp+22h] [ebp-72Ch]
  int v67; // [esp+2Eh] [ebp-720h]
  DWORD v68; // [esp+32h] [ebp-71Ch]
  int j; // [esp+3Ah] [ebp-714h]
  int v71; // [esp+42h] [ebp-70Ch]
  IPXManagerClass *v72; // [esp+46h] [ebp-708h]
  IUnknown *v73; // [esp+4Ah] [ebp-704h]
  DWORD v74; // [esp+4Eh] [ebp-700h]
  int i; // [esp+56h] [ebp-6F8h]
  _DWORD v76[4]; // [esp+5Ah] [ebp-6F4h] BYREF
  DWORD v77; // [esp+6Ah] [ebp-6E4h]
  DWORD v78; // [esp+6Eh] [ebp-6E0h]
  DWORD v80; // [esp+76h] [ebp-6D8h]
  CreateGameDialogControl *v83; // [esp+86h] [ebp-6C8h]
  DWORD Ticks; // [esp+A6h] [ebp-6A8h]
  char v88[12]; // [esp+B2h] [ebp-69Ch] BYREF
  char v89[256]; // [esp+BEh] [ebp-690h] BYREF
  char Buffer[254]; // [esp+2C0h] [ebp-48Eh] BYREF
  __int16 v97; // [esp+5B2h] [ebp-19Ch]
  v3 = aP0; /*0x793d28*/
  v71 = a2; /*0x793d2c*/
  v73 = aP0; /*0x793d34*/
  int v4 = 0; /*0x793d3d*/
  Timer::GetTicks(); /*0x793d38*/
  Timer::GetTicks(); /*0x793d4b*/
  v57 = 1; /*0x793d5f*/
  v76[0] = 0; /*0x793d64*/
  Waypoint::InitInvalid(v88); /*0x793d68*/
  v67 = 0; /*0x793d74*/
  v58 = 0; /*0x793d7f*/
  Debug::Log(); /*0x793d84*/
  v63 = -1; /*0x793d93*/
  if ( *(int *)&HouseClass_Player[40248] <= 0 ) /*0x793d9b*/
    goto LABEL_6; /*0x793d9b*/
  do /*0x793dd5*/
  {
    v5 = *(IUnknown **)&HouseClass_Player[21864][4 * (_DWORD)v3 + 18396]; /*0x793da3*/
    char * v6 = ToWideStringChar(*(IUnknown **)(*(_DWORD *)&HouseClass_Player[40236] + 4 * v4)); /*0x793db4*/
    char * v7 = ToWideStringChar(v5); /*0x793db6*/
    if ( !_strcmpi(v6, v7) ) /*0x793dbd*/
      v63 = v4; /*0x793dc9*/
    ++v4; /*0x793dd2*/
  }
  while ( v4 < *(int *)&HouseClass_Player[40248] ); /*0x793dd5*/
  if ( v63 == -1 ) /*0x793ddc*/
  {
LABEL_6:
    strcpy(v89, "Z10"); /*0x793de5*/
    Debug::Log(); /*0x793e0b*/
    (*(void (__stdcall **)(_DWORD, char *))((*(&g_MatrixTransformState + 2263))->X + 60))( /*0x793e23*/
      *(&g_MatrixTransformState + 2263),
      v89);
    Debug::Log(); /*0x793e2d*/
    return 0; /*0x793e41*/
  }
  char * v9 = &HouseClass_Player[41748]; /*0x793e44*/
  while ( *v9 ) /*0x793e4c*/
  {
    char * v10 = ToWideStringChar(*(IUnknown **)&HouseClass_Player[21864][4 * (_DWORD)v3 + 18396]); /*0x793e55*/
    if ( !_strcmpi(v9, v10) ) /*0x793e66*/
    {
      Debug::Log(); /*0x793e7a*/
      v57 = 0; /*0x793e82*/
      break; /*0x793e82*/
    }
    v9 += 36; /*0x793e68*/
    if ( (int)v9 >= (int)&HouseClass_Player[42036] ) /*0x793e71*/
      break; /*0x793e71*/
  }
  int v11 = *(_DWORD *)&HouseClass_Player[21864][4 * (_DWORD)v3 + 18808]; /*0x793e87*/
  if ( v57 /*0x793eac*/
    && (!v11 || (v11 & 1) != 0)
    && (!*((_WORD *)&(&g_MatrixTransformState)[89] + 4) || (*(_BYTE *)(&(&g_MatrixTransformState)[89] + 2) & 1) != 0) )
  {
    Debug::Log(); /*0x793eb3*/
    v57 = 0; /*0x793ebb*/
  }
  v62 = 0; /*0x793ec2*/
  v72 = 0; /*0x793ec6*/
  v59 = 0; /*0x793eca*/
  while ( 1 ) /*0x793ece*/
  {
  _DWORD v85[6]; // [esp+8Eh] [ebp-6C0h] BYREF
    int v12 = v63; /*0x793ece*/
    Debug::Log(); /*0x793ed7*/
    Network_Connect_793BB0(); /*0x793edf*/
    if ( v57 ) /*0x793eea*/
    {
      v14 = 0; /*0x793f1d*/
      AbstractClass *v15 = *((_BYTE *)&(&g_MatrixTransformState)[89] + 8); /*0x793f1f*/
      Debug::Log(); /*0x793f2b*/
      if ( (v15 & 0x40) != 0 ) /*0x793f36*/
        goto LABEL_110; /*0x793f36*/
      Debug::Log(); /*0x793f41*/
      int v60 = 0; /*0x793f50*/
      if ( *(int *)&HouseClass_Player[42200] <= 0 ) /*0x793f54*/
        goto LABEL_110; /*0x793f54*/
      WinModemClass *v16 = &HouseClass_Player[42072]; /*0x793f5a*/
      do /*0x793fd4*/
      {
        int v17 = *(_DWORD *)v16; /*0x793f5f*/
        _DWORD * v18 = (_DWORD *)(*(_DWORD *)&HouseClass_Player[21864][4 * *(_DWORD *)v16 + 18396] + 40); /*0x793f68*/
        v85[0] = *v18; /*0x793f6d*/
        int v19 = *(_DWORD *)&HouseClass_Player[21864][4 * (_DWORD)v3 + 18396] + 40; /*0x793f7e*/
        v85[1] = v18[1]; /*0x793f81*/
        v85[2] = v18[2]; /*0x793f8c*/
        if ( NetworkID::Compare((int)v85, v19) ) /*0x793f9a*/
        {
          v14 = *(_WORD *)&HouseClass_Player[21864][4 * v17 + 20176]; /*0x793fa3*/
          Debug::Log(); /*0x793fb8*/
        }
        v16 += 4; /*0x793fcb*/
        ++v60; /*0x793fd0*/
      }
      while ( v60 < *(int *)&HouseClass_Player[42200] ); /*0x793fd4*/
      if ( !v14 ) /*0x793fd9*/
      {
LABEL_110:
        Debug::Log(); /*0x793fe4*/
        int v20 = 0; /*0x793ff1*/
        if ( *(int *)&HouseClass_Player[40248] > 0 ) /*0x793ff5*/
        {
          while ( 1 ) /*0x79400a*/
          {
            char * v21 = ToWideStringChar(*(IUnknown **)(*(_DWORD *)&HouseClass_Player[40236] + 4 * v20)); /*0x79400a*/
            char * v22 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x79400c*/
            if ( !_strcmpi(v21, v22) ) /*0x794013*/
              break; /*0x794013*/
            if ( ++v20 >= *(int *)&HouseClass_Player[40248] ) /*0x794027*/
              goto LABEL_34; /*0x794027*/
          }
          v23 = *(_WORD *)&HouseClass_Player[21864][2 * v20 + 20478]; /*0x79402b*/
          Debug::Log(); /*0x794041*/
          v14 = Network::ResolveNetworkAddress((int *)&(&g_MatrixTransformState)[89] + 2, v23); /*0x794054*/
          Debug::Log(); /*0x794061*/
        }
      }
LABEL_34:
      v24 = (IUnknown *)ToWideStringChar(*(IUnknown **)&HouseClass_Player[21864][4 * (_DWORD)v73 + 18396]); /*0x794069*/
      Coord *v25 = g_WOL_State; /*0x79407b*/
      char * v26 = 0; /*0x794080*/
      signed int v27 = 0; /*0x794082*/
      if ( (int)g_WOL_State > 0 ) /*0x794086*/
      {
        int v28 = 0; /*0x79408c*/
        int v61 = 0; /*0x79408e*/
        do /*0x79411c*/
        {
          if ( v28 >= 0 && v27 < v25 ) /*0x794098*/
            v26 = &g_WOL_ConnectionFlags->__pad_0[v28]; /*0x7940a0*/
          if ( !_strcmpi(v24, v26 + 36) ) /*0x7940a8*/
          {
  char v92[2]; // [esp+2BEh] [ebp-490h] BYREF
            qmemcpy(v92, "Z4", sizeof(v92)); /*0x7940c3*/
            sprintf(Buffer, (ObjectClass *)&stru_817F40.fallRate, (INIClass *)v14); /*0x7940da*/
            Debug::Log(); /*0x7940ed*/
            (*(void (__stdcall **)(_DWORD, char *, char *))((*(&g_MatrixTransformState + 2263))->X + 56))( /*0x794106*/
              *(&g_MatrixTransformState + 2263),
              v26,
              v92);
          }
          v25 = g_WOL_State; /*0x79410d*/
          ++v27; /*0x794112*/
          v28 = v61 + 108; /*0x794113*/
          v61 += 108; /*0x794118*/
        }
        while ( v27 < (int)g_WOL_State ); /*0x79411c*/
      }
      v3 = v73; /*0x794122*/
      v12 = v63; /*0x794126*/
      v59 = v14; /*0x79412a*/
    }
    else
    {
      v13 = *(_WORD *)&HouseClass_Player[21864][2 * v63 + 20478]; /*0x793eec*/
      Debug::Log(); /*0x793f02*/
      *(_WORD *)&HouseClass_Player[21864][2 * (_DWORD)v3 + 19868] = v13; /*0x793f0a*/
    }
    Ticks = Timer::GetTicks(); /*0x79413a*/
    v64 = Ticks; /*0x794141*/
    int v30 = 360; /*0x79414c*/
  IPXManagerClass *v31; // eax
    HIWORD(v31) = HIWORD(v62); /*0x794155*/
    int v87 = 360; /*0x79415b*/
    int v66 = 360; /*0x794162*/
    if ( v62 > 0 ) /*0x794166*/
    {
      v31 = Timer::GetTicks(); /*0x79416f*/
      v29 = v83; /*0x794174*/
      v30 = 240; /*0x79417b*/
      IPXManagerClass *v82 = v31; /*0x794180*/
      int v84 = 240; /*0x794187*/
      v64 = v31; /*0x79418e*/
      v66 = 240; /*0x794196*/
    }
    v32 = v72; /*0x79419a*/
    while ( 1 ) /*0x79419e*/
    {
      if ( v64 != -1 ) /*0x7941a3*/
      {
        v31 = Timer::GetTicks() - v64; /*0x7941ae*/
        if ( v31 >= v30 ) /*0x7941b4*/
          break; /*0x7941b4*/
        v30 -= v31; /*0x7941b6*/
      }
      if ( !v30 ) /*0x7941ba*/
        break; /*0x7941ba*/
      if ( v57 == 1 ) /*0x7941c2*/
      {
        if ( *(_WORD *)&HouseClass_Player[21864][2 * (_DWORD)v3 + 19868] != v32 ) /*0x7941cc*/
          break; /*0x7941cc*/
      }
      else if ( *(_WORD *)&HouseClass_Player[21864][2 * (_DWORD)v3 + 19868] ) /*0x7941dd*/
      {
        break; /*0x7941e6*/
      }
      Game::ProcessIdle(v29); /*0x7941ce*/
      v30 = v66; /*0x7941d3*/
    }
    LOWORD(v31) = *(_WORD *)&HouseClass_Player[21864][2 * (_DWORD)v3 + 19868]; /*0x7941f3*/
    v72 = v31; /*0x7941fe*/
    if ( (_WORD)v31 ) /*0x794202*/
    {
  int v42; // esi
      Debug::Log(); /*0x79420e*/
      *(_WORD *)&HouseClass_Player[21864][2 * v12 + 20478] = *(_WORD *)&HouseClass_Player[21864][2 * (_DWORD)v3 + 19868]; /*0x79421e*/
      LOWORD(eax55) = *(_WORD *)&HouseClass_Player[21864][2 * (_DWORD)v3 + 19868]; /*0x79422c*/
      Network::SetPort((_WORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player[40236] + 4 * v12) + 40), eax55); /*0x79423b*/
      LOWORD(v34) = *(_WORD *)&HouseClass_Player[21864][2 * (_DWORD)v3 + 19868]; /*0x794240*/
      Network::SetPort((_WORD *)(*(_DWORD *)&HouseClass_Player[21864][4 * (_DWORD)v3 + 18396] + 40), v34); /*0x794253*/
  int v96[11]; // [esp+586h] [ebp-1C8h] BYREF
      memset(v96, 0, sizeof(v96)); /*0x794266*/
      v97 = 0; /*0x794268*/
      char v98 = 0; /*0x79426a*/
      v96[0] = 41; /*0x794270*/
      strcpy((char *)&v96[1], String::GetOrEmpty((char **)&g_WebBrowser)); /*0x79429d*/
      if ( (*(_BYTE *)(&(&g_MatrixTransformState)[89] + 2) & 8) != 0 /*0x7942b7*/
        && (HouseClass_Player[21864][4 * (_DWORD)v3 + 18808] & 8) == 0 )
      {
        Debug::Log(); /*0x7942be*/
        int v35 = 240; /*0x7942cf*/
        v74 = Timer::GetTicks(); /*0x7942d4*/
        for ( i = 240; ; v35 = i ) /*0x7942d8*/
        {
          if ( v74 != -1 ) /*0x7942e1*/
          {
            v33 = (IUnknown *)(Timer::GetTicks() - v74); /*0x7942ec*/
            if ( (int)v33 >= v35 ) /*0x7942f2*/
              break; /*0x7942f2*/
            v35 -= (int)v33; /*0x7942f4*/
          }
          if ( !v35 ) /*0x7942f8*/
            break; /*0x7942f8*/
          Game::ProcessIdle(v36); /*0x7942fa*/
        }
      }
      ToWideStringChar(*(IUnknown **)&HouseClass_Player[21864][4 * (_DWORD)v3 + 18396]); /*0x794305*/
      Debug::Log(); /*0x794322*/
      v38 = Timer::GetTicks(); /*0x794331*/
      v85[5] = 360; /*0x794342*/
      v85[3] = v38; /*0x794351*/
      v65 = v38; /*0x794358*/
      v80 = Timer::GetTicks(); /*0x794365*/
      v68 = v80; /*0x794369*/
      int v39 = 0; /*0x794371*/
      int v81 = 0; /*0x794373*/
      for ( j = 0; ; v39 = j ) /*0x79437b*/
      {
        int v40 = v39; /*0x794383*/
        if ( v68 == -1 ) /*0x794388*/
          break; /*0x794388*/
        int v41 = Timer::GetTicks() - v68; /*0x794393*/
        if ( v41 < v40 ) /*0x794399*/
        {
          v42 = v40 - v41; /*0x79439b*/
          goto LABEL_68; /*0x79439d*/
        }
LABEL_69:
        Debug::Log(); /*0x7943a5*/
        Network::SendToPlayer( /*0x7943d3*/
          (int)&HouseClass_Player[44148],
          (int)v96,
          47,
          0,
          *(wchar_t **)&HouseClass_Player[21864][4 * (_DWORD)v3 + 18396]);
        v43 = Timer::GetTicks(); /*0x7943dc*/
        v39 = 30; /*0x7943e5*/
        v76[1] = v43; /*0x7943ea*/
        v76[3] = 30; /*0x7943ee*/
        v68 = v43; /*0x7943f2*/
        j = 30; /*0x7943fa*/
LABEL_70:
        Game::ProcessIdle((CreateGameDialogControl *)v39); /*0x7943fe*/
        v44 = v58; /*0x794403*/
        if ( !v58 ) /*0x794409*/
        {
          Speed = Connection::GetSpeed((int)&HouseClass_Player[44148]); /*0x794414*/
          int v46 = v67; /*0x794419*/
          if ( v67 >= Speed ) /*0x79441f*/
          {
            v46 = 0; /*0x794421*/
            v67 = 0; /*0x794423*/
          }
          if ( !Network::SendPacketThunk( /*0x79445d*/
                  (int)&HouseClass_Player[44148],
                  v46,
  int v94; // [esp+3BEh] [ebp-390h] BYREF
                  (int)&v94,
                  (int)v76,
                  (int)v88,
  int v70; // [esp+3Eh] [ebp-710h] BYREF
                  (int)&v70 + 2,
                  0)
            || HIWORD(v70) != 0xAA04 )
          {
            goto LABEL_89; /*0x79445d*/
          }
          if ( v94 != 13 ) /*0x79446d*/
          {
            if ( v94 != 41 ) /*0x794476*/
              goto LABEL_89; /*0x794476*/
            Debug::Log(); /*0x794481*/
            if ( NetworkID::Compare( /*0x7944a1*/
                   *(_DWORD *)(*(_DWORD *)&HouseClass_Player[40236] + 4 * v63) + 40,
                   (int)v88) )
            {
              char * v47 = ToWideStringChar(*(IUnknown **)&HouseClass_Player[21864][4 * (_DWORD)v3 + 18396]); /*0x7944bd*/
  char v95[452]; // [esp+3C2h] [ebp-38Ch] BYREF
              if ( !_strcmpi(v47, v95) ) /*0x7944c3*/
              {
                Debug::Log(); /*0x7944e0*/
  char v90[3]; // [esp+1BEh] [ebp-590h] BYREF
                qmemcpy(v90, "Z1;", sizeof(v90)); /*0x7944f1*/
                if ( v95 ) /*0x794509*/
  char v91[253]; // [esp+1C1h] [ebp-58Dh] BYREF
                  strcpy(v91, v95); /*0x79452d*/
                else
                  v91[0] = 0; /*0x794538*/
                Debug::Log(); /*0x79454d*/
                (*(void (__stdcall **)(_DWORD, char *))((*(&g_MatrixTransformState + 2263))->X + 60))( /*0x794565*/
                  *(&g_MatrixTransformState + 2263),
                  v90);
                if ( v63 >= 0 && v63 < *(int *)&HouseClass_Player[40248] ) /*0x794576*/
                {
                  v48 = (HWND)Dialog::FindByHandle((void *)0x130); /*0x79457d*/
                  v49 = v48; /*0x794582*/
                  if ( v48 ) /*0x794586*/
                  {
                    DlgItem = GetDlgItem(v48, dword_84A1F0[v63]); /*0x794591*/
                    *((_BYTE *)&dword_B75F54 + v63) = 1; /*0x794597*/
                    SendMessageA(DlgItem, 0xF1u, 1u, 0); /*0x7945a8*/
                    PostMessageA(v49, 0xFu, 0, 0); /*0x7945b5*/
                  }
                }
                *(_DWORD *)&HouseClass_Player[21864][4 * *(_DWORD *)&HouseClass_Player[42200] + 20208] = v3; /*0x7945c4*/
                v77 = Timer::GetTicks(); /*0x7945d6*/
                v58 = 1; /*0x7945df*/
                v44 = 1; /*0x7945e7*/
                int v79 = 1200; /*0x7945eb*/
                v51 = (DWORD *)(12 * *(_DWORD *)&HouseClass_Player[42200] + 11067844); /*0x7945ef*/
                *v51 = v77; /*0x7945f6*/
                v51[1] = v78; /*0x7945fc*/
                v51[2] = 1200; /*0x7945ff*/
                ++*(_DWORD *)&HouseClass_Player[42200]; /*0x794609*/
                *(_DWORD *)&HouseClass_Player[21864][4 * (_DWORD)v3 + 20176] = v59; /*0x794619*/
              }
            }
          }
          Network::receiveData((int)&HouseClass_Player[44148], v67); /*0x79462a*/
          if ( !v44 ) /*0x794631*/
            goto LABEL_89; /*0x794631*/
        }
        if ( *(_DWORD *)&HouseClass_Player[21864][4 * v71 + 19352] == 11 ) /*0x79463f*/
        {
          Debug::Log(); /*0x79469c*/
          goto LABEL_100; /*0x7946a4*/
        }
LABEL_89:
        int v52 = *(_DWORD *)&HouseClass_Player[21864][4 * v71 + 19352]; /*0x794641*/
        if ( v52 >= 1 && v52 < 11 ) /*0x794654*/
        {
          int v53 = v52 - 1; /*0x794656*/
          if ( v52 - 1 > v62 ) /*0x79465f*/
          {
            Debug::Log(); /*0x7946ac*/
            v62 = v53 - 1; /*0x7946b5*/
            goto LABEL_100; /*0x7946b9*/
          }
        }
        AbstractClass *v54 = 360; /*0x794669*/
        ++v67; /*0x794671*/
        if ( v65 != -1 ) /*0x794675*/
        {
          int v55 = Timer::GetTicks() - v65; /*0x794680*/
          if ( v55 >= 360 ) /*0x794686*/
            goto LABEL_100; /*0x794686*/
          v54 = 360 - v55; /*0x794688*/
        }
        if ( !v54 ) /*0x79468c*/
          goto LABEL_100; /*0x79468c*/
      }
      v42 = v39; /*0x79439f*/
LABEL_68:
      if ( v42 ) /*0x7943a3*/
        goto LABEL_70; /*0x7943a3*/
      goto LABEL_69; /*0x7943a3*/
    }
    v44 = v58; /*0x7946bb*/
LABEL_100:
    if ( v44 && *(_DWORD *)&HouseClass_Player[21864][4 * v71 + 19352] == 11 || v62 >= a3 ) /*0x7946e2*/
      break; /*0x7946e2*/
    ++v62; /*0x7946f2*/
    char * v56 = ToWideStringChar(*(IUnknown **)&HouseClass_Player[21864][4 * (_DWORD)v3 + 18396]); /*0x7946f6*/
    qmemcpy(v89, "Z1", 2); /*0x7946fd*/
    v89[2] = v62 + 49; /*0x794714*/
    if ( v56 ) /*0x79471b*/
      strcpy(&v89[3], v56); /*0x79473a*/
    else
      v89[3] = 0; /*0x794745*/
    Debug::Log(); /*0x79475a*/
    (*(void (__stdcall **)(_DWORD, char *))((*(&g_MatrixTransformState + 2263))->X + 60))( /*0x794772*/
      *(&g_MatrixTransformState + 2263),
      v89);
    Debug::Log(); /*0x79477b*/
  }
  Debug::Log(); /*0x794794*/
  return v44; /*0x793e37*/
}
}
} // namespace gamemd

// 0x7947B0
namespace gamemd {
char NetworkLobby_WaitForPlayers()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  AbstractClass *v1; // esi
  HWND DlgItem; // eax
  int v4; // esi
  int v5; // edi
  int v9; // ebp
  int v13; // edx
  _DWORD *v14; // esi
  _DWORD *v15; // edi
  AbstractClass *v16; // ebx
  int v17; // eax
  AbstractClass *v18; // esi
  int *i; // [esp+10h] [ebp-40h]
  int v28; // [esp+14h] [ebp-3Ch]
  int v29; // [esp+1Ch] [ebp-34h]
  DWORD Ticks; // [esp+20h] [ebp-30h]
  Timer::GetTicks(); /*0x7947bb*/
  DataGlobal_A8E224 = 0; /*0x7947d2*/
  memset(DataGlobal_A8E184, 0, sizeof(DataGlobal_A8E184)); /*0x7947d8*/
  v29 = -1; /*0x7947e5*/
  dword_B77DCC = 0; /*0x7947ed*/
  if ( !DataGlobal_A8E04C ) /*0x7947f3*/
    return 0; /*0x7947fe*/
  SessionClass::SetupNetwork((int)g_GameMode_Current); /*0x794804*/
  if ( Game_PlayerCount > 0 ) /*0x79480f*/
  {
    v1 = (HWND)Dialog::FindByHandle((void *)0x130); /*0x79481b*/
    if ( v1 ) /*0x79481f*/
    {
      DlgItem = GetDlgItem(v1, dword_84A1F0[0]); /*0x794828*/
      LOBYTE(dword_B75F54) = 1; /*0x79482e*/
      SendMessageA(DlgItem, 0xF1u, 1u, 0); /*0x79483e*/
      PostMessageA(v1, 0xFu, 0, 0); /*0x794849*/
    }
  }
  Debug::Log(); /*0x79485b*/
  v28 = 0; /*0x79486a*/
  if ( DataGlobal_A8E04C <= 0 ) /*0x79486e*/
  {
LABEL_44:
    Debug::Log(); /*0x794b38*/
    return 1; /*0x794b4e*/
  }
  int * v3 = DataGlobal_A8DE4C; /*0x794874*/
  for ( i = DataGlobal_A8DE4C; ; v3 = i ) /*0x794879*/
  {
  int *v12; // ebx
    v4 = *(v3 - 128); /*0x794883*/
    v5 = *(v3 - 127); /*0x794889*/
    WinModemClass *v6 = (char *)*(&g_NetworkPlayerName + v5); /*0x79489e*/
    ToWideStringChar((char *)*(&g_NetworkPlayerName + v4)); /*0x7948a5*/
    ToWideStringChar(v6); /*0x7948ae*/
    Debug::Log(); /*0x7948bf*/
    char * v7 = ToWideStringChar((char *)*(&g_NetworkPlayerName + v4)); /*0x7948d8*/
    char * v8 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x7948da*/
    if ( _strcmpi(v7, v8) ) /*0x7948e1*/
    {
      v9 = -1; /*0x794907*/
    }
    else
    {
      v9 = v5; /*0x7948f5*/
      *i = 11; /*0x7948fb*/
      v29 = 2 * v28 + 1; /*0x794901*/
    }
    AbstractClass *v10 = ToWideStringChar((char *)*(&g_NetworkPlayerName + v5)); /*0x79491c*/
    char * v11 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x79491e*/
    if ( _strcmpi(v10, v11) ) /*0x794925*/
    {
      v12 = i; /*0x79494f*/
    }
    else
    {
      v12 = i; /*0x794935*/
      v9 = v4; /*0x79493d*/
      i[1] = 11; /*0x794942*/
      v29 = 2 * v28; /*0x794949*/
    }
    if ( v9 != -1 ) /*0x794956*/
      break; /*0x794956*/
    Debug::Log(); /*0x7949cb*/
    Ticks = Timer::GetTicks(); /*0x7949e0*/
    int v31 = 960; /*0x7949f5*/
    AbstractClass *v19 = 0; /*0x7949f9*/
    while ( 1 ) /*0x7949fd*/
    {
  int v23; // eax
      Sleep(5u); /*0x7949fd*/
      Game::ProcessIdle(); /*0x794a03*/
      Network_Connect_793BB0(); /*0x794a08*/
      int v20 = *v12; /*0x794a0d*/
      int v21 = v12[1]; /*0x794a0f*/
      if ( (v20 == 11 || !v20) && (v21 == 11 || !v21) ) /*0x794a26*/
        break; /*0x794a26*/
  int v22; // esi
      if ( v20 < 1 || v20 >= 11 || (v22 = v20 - 1, v20 - 1 <= v19) ) /*0x794a3b*/
      {
        v23 = v31; /*0x794a77*/
      }
      else
      {
        Debug::Log(); /*0x794a43*/
        v19 = v22; /*0x794a4f*/
        Ticks = Timer::GetTicks(); /*0x794a63*/
        v23 = 840; /*0x794a67*/
        v31 = 840; /*0x794a71*/
      }
      if ( v21 >= 1 && v21 < 11 && v21 - 1 > v19 ) /*0x794a8a*/
      {
        Debug::Log(); /*0x794a92*/
        v19 = v21 - 1; /*0x794a9e*/
        Ticks = Timer::GetTicks(); /*0x794aa9*/
        v23 = 840; /*0x794aba*/
        v31 = 840; /*0x794ac0*/
      }
      int v24 = v23; /*0x794ac8*/
      if ( Ticks != -1 ) /*0x794acd*/
      {
        signed int v25 = Timer::GetTicks() - Ticks; /*0x794ad8*/
        if ( v25 >= v24 ) /*0x794ade*/
          goto LABEL_41; /*0x794ade*/
        v23 = v24 - v25; /*0x794ae2*/
      }
      if ( !v23 ) /*0x794ae6*/
        goto LABEL_41; /*0x794ae6*/
      v12 = i; /*0x794ae8*/
    }
    Debug::Log(); /*0x794af6*/
LABEL_41:
    if ( *i != 11 || i[1] != 11 ) /*0x794b0b*/
      goto LABEL_45; /*0x794b0b*/
    Debug::Log(); /*0x794b12*/
    bool v26 = ++v28 < DataGlobal_A8E04C; /*0x794b28*/
    i += 2; /*0x794b2e*/
    if ( !v26 ) /*0x794b32*/
      goto LABEL_44; /*0x794b32*/
  }
  v13 = DataGlobal_A8DC2C[v4]; /*0x794958*/
  v14 = (_DWORD *)(4 * v4 + 11066412); /*0x79495f*/
  v15 = (_DWORD *)(4 * v5 + 11066412); /*0x79496c*/
  v16 = NetworkLobby::GetPlayerCount(v13); /*0x794978*/
  if ( v16 <= NetworkLobby::GetPlayerCount(*v15) ) /*0x794989*/
    v17 = NetworkLobby::GetPlayerCount(*v15); /*0x794998*/
  else
    v17 = NetworkLobby::GetPlayerCount(*v14); /*0x79498e*/
  v18 = v17; /*0x79499d*/
  Debug::Log(); /*0x7949a5*/
  if ( NegotiateNetworkConnection(v9, v29, v18) ) /*0x7949b4*/
    goto LABEL_41; /*0x7949bb*/
LABEL_45:
  Debug::Log(); /*0x794b7d*/
  return 0; /*0x7947f5*/
}
}
} // namespace gamemd

// 0x794BA0
namespace gamemd {
AbstractClass * * WOL_StartGame()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  DLGTEMPLATE *Indirect; // eax
  wchar_t *String; // eax
  HWND v8; // eax
  wchar_t *v9; // eax
  u_short v12; // dx
  HWND v18; // eax
  Debug::Log(); /*0x794bac*/
  byte_B77E26 = 1; /*0x794bbd*/
  if ( g_WOL_State ) /*0x794bc4*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)g_NetworkInterface + 20))(g_NetworkInterface); /*0x794c32*/
    (*(void (__thiscall **)(int))(*(_DWORD *)g_NetworkInterface + 24))(g_NetworkInterface); /*0x794c3d*/
    memset(&dword_B73BB4, 0xFFu, 0x20u); /*0x794c4e*/
    Indirect = (DLGTEMPLATE *)CreateDialogIndirect(g_hInstance, 304, g_hWnd, sub_793280, 0); /*0x794c66*/
    if ( Indirect ) /*0x794c6d*/
      SetupDialog((HWND)Indirect, 304); /*0x794c76*/
    int v1 = 100; /*0x794c7b*/
    do /*0x794c86*/
    {
      Event::Dispatch(); /*0x794c80*/
      --v1; /*0x794c85*/
    }
    while ( v1 ); /*0x794c86*/
    StartGameWOL_Start(300); /*0x794c92*/
    char v3 = WaitNetworkLobbyPlayers(); /*0x794c9c*/
    if ( !v3 ) /*0x794ca0*/
    {
      int v4 = 0; /*0x794ca7*/
      dword_B77DCC = 0; /*0x794cab*/
      if ( (int)g_WOL_State <= 0 ) /*0x794cb1*/
        goto LABEL_18; /*0x794cb1*/
      while ( 1 ) /*0x794cbe*/
      {
        StartGameWOL_Start_7ACB90(&g_IsMultiplayerSession, v4); /*0x794cbe*/
        if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x794cca*/
          break; /*0x794cca*/
        if ( ++v4 >= (int)g_WOL_State ) /*0x794cd4*/
          goto LABEL_18; /*0x794cd4*/
      }
  char *v5; // eax
      if ( !&g_IsMultiplayerSession || (v5 = String::GetOrEmpty_Alt((char **)&g_WebBrowser), _strcmpi(byte_B777D4, v5)) ) /*0x794cf1*/
LABEL_18:
        Debug::Log(); /*0x794cfd*/
    }
  int v2; // ecx
    LOBYTE(v2) = v3; /*0x794d0a*/
    ObjectClass *v6 = NegotiateScenarioWOL(v2); /*0x794d11*/
    if ( v6 ) /*0x794d15*/
    {
      Debug::Log(); /*0x794d20*/
      if ( v6 == 2 ) /*0x794d2b*/
      {
        String = GetStringCSF(g_Str_TXT_SCENARIOS_DO_NOT_MATCH, 0, g_Str_File_wonline_cpp, 20292); /*0x794d44*/
        ShowDialogConfirm(String, 0, (int)GameLoop::Thunk, 0); /*0x794d4d*/
      }
      v8 = (HWND)Dialog::FindByHandle((void *)0x130); /*0x794d57*/
      if ( v8 ) /*0x794d5e*/
        CloseDialog(v8, 0); /*0x794d64*/
      g_NetworkLobbyState = 0; /*0x794d6e*/
      if ( g_GameOptionsFlags == 3 || g_GameOptionsFlags == 1 || g_GameOptionsFlags == 2 ) /*0x794d81*/
      {
        g_WOL_GameListState = 0; /*0x794d84*/
        g_WOL_IdleHandler = 11; /*0x794d8a*/
        g_WOL_GameProcessState = -1; /*0x794d94*/
        g_WOL_GameListPool = time(0); /*0x794da6*/
      }
      byte_B77DEC = 0; /*0x794dab*/
      HandleWOLForwardingError(); /*0x794db2*/
      Network::Init(); /*0x794db7*/
      byte_B77E27 = 0; /*0x794dbc*/
      byte_B77E26 = 0; /*0x794dc3*/
      g_NetworkLobby_Init = 1; /*0x794dcf*/
      Debug::Log(); /*0x794dd6*/
      SetEvent(dword_B7369C); /*0x794de5*/
      Debug::Log(); /*0x794df0*/
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x794e00*/
      if ( g_GameOptionsFlags == 1 || g_GameOptionsFlags == 2 || g_GameOptionsFlags == 3 ) /*0x794e15*/
      {
        v9 = GetStringCSF(aTxtAwayQuickma, 0, g_Str_File_wonline_cpp, 20329); /*0x794e46*/
        byte_B77E40 = 1; /*0x794e50*/
        WideString::Reassign(&dword_B76230, v9); /*0x794e58*/
      }
      else
      {
        byte_B77E40 = 0; /*0x794e21*/
        WideString::Reassign(&dword_B76230, &g_TypeClass_DefaultString); /*0x794e28*/
      }
    }
    else
    {
      Debug::Log(); /*0x794e6a*/
      int v10 = Game_PlayerCount; /*0x794e6f*/
      int v11 = 0; /*0x794e78*/
      if ( Game_PlayerCount > 0 ) /*0x794e7c*/
      {
        v12 = hostshort; /*0x794e7e*/
        int * v13 = &Network_PlayerPorts; /*0x794e84*/
        do /*0x794e9d*/
        {
          if ( !*(_WORD *)v13 ) /*0x794e89*/
          {
            *(_WORD *)v13 = v12; /*0x794e8e*/
            v10 = Game_PlayerCount; /*0x794e91*/
          }
          ++v11; /*0x794e97*/
          v13 = (int *)((char *)v13 + 2); /*0x794e98*/
        }
        while ( v11 < v10 ); /*0x794e9d*/
      }
      int v14 = 0; /*0x794ea5*/
      if ( (int)g_WOL_State > 0 ) /*0x794ea9*/
      {
        AbstractClass *v15 = (char *)g_WOL_ConnectionFlags; /*0x794eab*/
        while ( 1 ) /*0x794eb1*/
        {
          if ( v14 >= 0 && v14 < (int)g_WOL_State ) /*0x794eb7*/
            qmemcpy(&g_IsMultiplayerSession, v15, 0x6Cu); /*0x794ec5*/
          if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x794ece*/
            break; /*0x794ece*/
          ++v14; /*0x794ed0*/
          v15 += 108; /*0x794ed1*/
          if ( v14 >= (int)g_WOL_State ) /*0x794ed6*/
            goto LABEL_52; /*0x794ed6*/
        }
        if ( &g_IsMultiplayerSession ) /*0x794ee1*/
        {
          int v16 = 0; /*0x794ee3*/
          if ( v10 > 0 ) /*0x794ee7*/
          {
            while ( 1 ) /*0x794ef6*/
            {
              char * v17 = ToWideStringChar(*(char **)(Game_PlayerInfoArray + 4 * v16)); /*0x794ef6*/
              if ( !_strcmpi(v17, byte_B777D4) ) /*0x794efc*/
                break; /*0x794efc*/
              if ( ++v16 >= Game_PlayerCount ) /*0x794f10*/
                goto LABEL_52; /*0x794f10*/
            }
            LOWORD(DataGlobal_A8DBBC) = *((_WORD *)&Network_PlayerPorts + v16); /*0x794f1c*/
          }
        }
      }
LABEL_52:
      Debug::Log(); /*0x794f23*/
      v18 = (HWND)Dialog::FindByHandle((void *)0x130); /*0x794f35*/
      if ( v18 ) /*0x794f3e*/
        CloseDialog(v18, 0); /*0x794f44*/
      Debug::Log(); /*0x794f4e*/
      if ( g_GameMode_Current[0] != 4 || g_GameOptionsFlags != 3 ) /*0x794f67*/
        g_CommandExecState = 0; /*0x794f69*/
      g_ScenarioLoadState = 5; /*0x794f74*/
      switch ( g_Rules_EngineerCount ) /*0x794f91*/
      {
        case 0: /*0x794f91*/
          g_ScenarioState = (wchar_t *)40; /*0x794f98*/
          g_GameSessionFlags = 60; /*0x794fa2*/
          g_ScenarioLoadState = 10; /*0x794fac*/
          break; /*0x794fb2*/
        case 1: /*0x794f91*/
          g_ScenarioState = (wchar_t *)40; /*0x794fb4*/
          g_GameSessionFlags = 45; /*0x794fbe*/
          g_ScenarioLoadState = 10; /*0x794fc8*/
          break; /*0x794fce*/
        case 2: /*0x794f91*/
          g_ScenarioState = (wchar_t *)30; /*0x794fd5*/
          g_GameSessionFlags = 30; /*0x794fda*/
          break; /*0x794fdf*/
        case 3: /*0x794f91*/
          g_ScenarioState = (wchar_t *)20; /*0x794fe1*/
          g_GameSessionFlags = 20; /*0x794fe7*/
          break; /*0x794fed*/
        case 4: /*0x794f91*/
          g_ScenarioState = (wchar_t *)20; /*0x794fef*/
          g_GameSessionFlags = 15; /*0x794ff5*/
          break; /*0x794fff*/
        case 5: /*0x794f91*/
          g_ScenarioState = (wchar_t *)20; /*0x795001*/
          g_GameSessionFlags = 12; /*0x795007*/
          break; /*0x795011*/
        default:
          g_ScenarioState = (wchar_t *)10; /*0x795013*/
          g_GameSessionFlags = 10; /*0x795019*/
          break; /*0x795019*/
      }
      if ( DataGlobal_A8E2C8 ) /*0x795026*/
        g_ScenarioState += 10; /*0x795028*/
      int v19 = 0; /*0x795034*/
      g_GameSessionPool = 0; /*0x795038*/
      if ( (int)g_WOL_State <= 0 ) /*0x79503e*/
        goto LABEL_77; /*0x79503e*/
      AbstractClass *v20 = (char *)g_WOL_ConnectionFlags; /*0x795040*/
      while ( 1 ) /*0x795046*/
      {
        if ( v19 >= 0 && v19 < (int)g_WOL_State ) /*0x79504c*/
          qmemcpy(&g_IsMultiplayerSession, v20, 0x6Cu); /*0x79505a*/
        if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x795063*/
          break; /*0x795063*/
        ++v19; /*0x795065*/
        v20 += 108; /*0x795066*/
        if ( v19 >= (int)g_WOL_State ) /*0x79506b*/
          goto LABEL_77; /*0x79506b*/
      }
      if ( !&g_IsMultiplayerSession /*0x795088*/
  char *v21; // eax
        || (v21 = String::GetOrEmpty_Alt((char **)&g_WebBrowser), _strcmpi(byte_B777D4, v21)) )
      {
LABEL_77:
        g_GameSessionFlags = 0; /*0x795094*/
      }
      int v22 = 0; /*0x79509e*/
      int * v23 = dword_B7790C; /*0x7950a0*/
      do /*0x7950b5*/
      {
        if ( *v23 > v22 ) /*0x7950a9*/
          v22 = *v23; /*0x7950ab*/
        ++v23; /*0x7950ad*/
      }
      while ( (int)v23 < (int)&dword_B7792C ); /*0x7950b5*/
      if ( DataGlobal_A8E2C8 ) /*0x7950be*/
        v22 *= 2; /*0x7950c0*/
      g_NetworkHostState = (wchar_t *)1; /*0x7950c9*/
      if ( !v22 || v22 == 1000 ) /*0x7950db*/
      {
        Debug::Log(); /*0x7953c0*/
        g_GameSessionPool = 10 * ((unsigned int)g_ScenarioState / 0xA); /*0x7953de*/
        if ( 10 * ((unsigned int)g_ScenarioState / 0xA) <= 0xA ) /*0x7953e3*/
          g_GameSessionPool = 10; /*0x7953ee*/
      }
      else
      {
        Debug::Log(); /*0x7950e7*/
        if ( v22 <= 1000 ) /*0x7950f5*/
        {
          if ( v22 < 600 ) /*0x795109*/
            g_NetworkHostState = (wchar_t *)1; /*0x79510b*/
        }
        else
        {
          g_NetworkHostState = (wchar_t *)2; /*0x7950f7*/
        }
        Network::SetConnectionParams( /*0x79515a*/
          &g_NetworkManager,
          120 * (60 * v22 / 1000) / 100 + 60 * v22 / 1000,
          -1,
          8 * (120 * (60 * v22 / 1000) / 100 + 60 * v22 / 1000),
          1);
        int v24 = 0; /*0x795165*/
        if ( (int)g_WOL_State > 0 ) /*0x795169*/
        {
          char * v25 = (char *)g_WOL_ConnectionFlags; /*0x79516b*/
          while ( 1 ) /*0x795171*/
          {
            if ( v24 >= 0 && v24 < (int)g_WOL_State ) /*0x795177*/
              qmemcpy(&g_IsMultiplayerSession, v25, 0x6Cu); /*0x795185*/
            if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x79518e*/
              break; /*0x79518e*/
            ++v24; /*0x795194*/
            v25 += 108; /*0x795195*/
            if ( v24 >= (int)g_WOL_State ) /*0x79519a*/
              goto LABEL_97; /*0x79519a*/
          }
          if ( &g_IsMultiplayerSession ) /*0x795346*/
          {
            char * v35 = String::GetOrEmpty_Alt((char **)&g_WebBrowser); /*0x795351*/
            if ( !_strcmpi(byte_B777D4, v35) ) /*0x79535c*/
            {
  AbstractClass *v36; // ecx
              switch ( (unsigned int)g_NetworkHostState ) /*0x795376*/
              {
                case 0u: /*0x795376*/
                case 1u: /*0x795376*/
                  v36 = (unsigned int)g_ScenarioState; /*0x79537d*/
                  break; /*0x795383*/
                case 2u: /*0x795376*/
                  v36 = (unsigned int)g_ScenarioState + ((unsigned int)g_ScenarioState >> 1); /*0x79538e*/
                  break; /*0x795390*/
                case 3u: /*0x795376*/
                  v36 = 2 * (_DWORD)g_ScenarioState; /*0x795398*/
                  break; /*0x79539a*/
                default:
                  v36 = g_GameSessionPool; /*0x79539c*/
                  break; /*0x79539c*/
              }
              g_GameSessionPool = 10 * (v36 / 0xA); /*0x7953b1*/
            }
          }
        }
      }
LABEL_97:
      Debug::Log(); /*0x7951a1*/
      Debug::Log(); /*0x7951b8*/
      Debug::Log(); /*0x7951c8*/
      Debug::Log(); /*0x7951d9*/
      DataGlobal_A8B568 = (int)g_ScenarioState; /*0x7951f0*/
      memset(&DataGlobal_A8B574, 0, 0x340u); /*0x7951f9*/
      *(_DWORD *)&hostshort = 1234; /*0x795200*/
      *(_DWORD *)g_GameModeOptions = g_Rules_EngineerCount; /*0x79520a*/
      *(_DWORD *)&DataGlobal_841F34 = 1235; /*0x795216*/
      *(_DWORD *)&DataGlobal_841F38 = 1236; /*0x795220*/
      *(_DWORD *)&DataGlobal_841F3C = 1237; /*0x79522a*/
      g_CurrentFrame = 0; /*0x795234*/
      if ( DataGlobal_A8E2C8 ) /*0x79523e*/
        Process::WaitForExit((const HANDLE *)&g_NetworkEventQueue, 0x7D0u, 1); /*0x79524b*/
      byte_B77A04 = 0; /*0x795255*/
      byte_B76568[0] = 0; /*0x79525f*/
      if ( g_GameMode_Current[0] == 4 ) /*0x795266*/
      {
        if ( (dword_B76B30 & 0x100) != 0 ) /*0x79527c*/
        {
          int v26 = 0; /*0x795287*/
          AbstractClass *v27 = 0; /*0x795289*/
          int v28 = 0; /*0x79528b*/
          int v45 = 0; /*0x79528f*/
          int v46 = 0; /*0x795293*/
          if ( (int)g_WOL_State > 0 ) /*0x795297*/
          {
            char * v43 = (char *)g_WOL_ConnectionFlags; /*0x7952a2*/
            do /*0x795468*/
            {
              if ( v26 >= 0 && v26 < (int)g_WOL_State ) /*0x7952b0*/
                v27 = v43; /*0x7952b2*/
  int v29; // eax
              if ( !v28 || (v29 = v27->abstractFlags, v28 == v29) ) /*0x7952c3*/
              {
                strcat(&byte_B77A04, v27 + 36); /*0x79541a*/
                strcat(&byte_B77A04, Delimiter); /*0x795445*/
                v28 = v27->abstractFlags; /*0x79544e*/
              }
              else if ( !v45 || v45 == v29 ) /*0x7952d3*/
              {
                strcat(byte_B76568, v27 + 36); /*0x7952fb*/
                unsigned int v30 = strlen(Delimiter) + 1; /*0x795314*/
                char * v31 = &byte_B76568[strlen(byte_B76568)]; /*0x795322*/
                qmemcpy(v31, Delimiter, 4 * (v30 >> 2)); /*0x795326*/
                char * v33 = &Delimiter[4 * (v30 >> 2)]; /*0x795326*/
                char * v32 = &v31[4 * (v30 >> 2)]; /*0x795326*/
                char v34 = v30; /*0x795328*/
                v26 = v46; /*0x79532a*/
                qmemcpy(v32, v33, v34 & 3); /*0x795331*/
                v45 = v27->abstractFlags; /*0x795336*/
              }
              v46 = ++v26; /*0x795460*/
              v43 += 108; /*0x795464*/
            }
            while ( v26 < (int)g_WOL_State ); /*0x795468*/
          }
        }
        if ( g_GameOptionsFlags == 3 ) /*0x795475*/
        {
          char * v37 = 0; /*0x795480*/
          signed int v38 = 0; /*0x795482*/
          if ( (int)g_WOL_State > 0 ) /*0x795486*/
          {
            int * v39 = DataGlobal_B76E58; /*0x795492*/
            char * v44 = (char *)g_WOL_ConnectionFlags; /*0x795497*/
            Coord *v40 = g_WOL_State; /*0x79549b*/
            int * v47 = DataGlobal_B76E58; /*0x7954a1*/
            do /*0x795574*/
            {
  const char *v42; // edi
  unsigned int v41; // ebx
              if ( (int)v39 >= (int)DataGlobal_B76E58 && v38 < v40 ) /*0x7954ae*/
                v37 = v44; /*0x7954b0*/
              if ( *v39 ) /*0x7954b4*/
              {
                strcat(byte_B76568, v37 + 36); /*0x79551d*/
                v41 = strlen(Delimiter) + 1; /*0x795536*/
                v42 = byte_B76568; /*0x795538*/
              }
              else
              {
                strcat(&byte_B77A04, v37 + 36); /*0x7954dc*/
                v41 = strlen(Delimiter) + 1; /*0x7954f5*/
                v42 = &byte_B77A04; /*0x7954f7*/
              }
              qmemcpy((void *)&v42[strlen(v42)], Delimiter, v41); /*0x79554a*/
              v40 = g_WOL_State; /*0x79555b*/
              ++v38; /*0x795561*/
              v39 = v47 + 37; /*0x795565*/
              v44 += 108; /*0x79556c*/
              v47 += 37; /*0x795570*/
            }
            while ( v38 < (int)g_WOL_State ); /*0x795574*/
          }
        }
      }
      Debug::Log(); /*0x79557f*/
      SetEvent(dword_B736A0); /*0x79558e*/
      if ( g_GameOptionsFlags == 3 || g_GameOptionsFlags == 1 || g_GameOptionsFlags == 2 ) /*0x7955a6*/
      {
        g_WOL_GameListState = 0; /*0x7955aa*/
        g_WOL_IdleHandler = 11; /*0x7955b4*/
        g_WOL_GameProcessState = -1; /*0x7955be*/
        g_WOL_GameListPool = time(0); /*0x7955d0*/
      }
      g_NetworkLobby_Init = 1; /*0x7955da*/
      Debug::Log(); /*0x7955e1*/
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x7955f1*/
      Scenario::PreGameInit(); /*0x7955f4*/
      byte_B77E27 = 0; /*0x7955f9*/
      byte_B77E26 = 0; /*0x795600*/
      Debug::Log(); /*0x79560c*/
    }
  }
  else
  {
    g_NetworkLobbyState = 0; /*0x794bcb*/
    if ( g_GameOptionsFlags == 3 || g_GameOptionsFlags == 1 || g_GameOptionsFlags == 2 ) /*0x794bde*/
    {
      g_WOL_GameListState = 0; /*0x794be1*/
      g_WOL_IdleHandler = 11; /*0x794be7*/
      g_WOL_GameProcessState = -1; /*0x794bf1*/
      g_WOL_GameListPool = time(0); /*0x794c03*/
    }
    byte_B77DEC = 0; /*0x794c08*/
    Network::Init(); /*0x794c0f*/
    byte_B77E27 = 0; /*0x794c14*/
    byte_B77E26 = 0; /*0x794c1b*/
  }
}
}
} // namespace gamemd

// 0x795CD0
namespace gamemd {
int WOL_NegotiateScenario(char a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char *Flagged; // esi
  int v11; // esi
  int i; // edi
  int v36; // eax
  int LobbyStatus; // eax
  int result; // eax
  int v39; // [esp-8h] [ebp-220h]
  bool v40; // [esp+2h] [ebp-216h]
  char v41; // [esp+3h] [ebp-215h]
  int v42; // [esp+4h] [ebp-214h]
  DWORD v43; // [esp+8h] [ebp-210h]
  DWORD Ticks; // [esp+8h] [ebp-210h]
  DWORD v45; // [esp+8h] [ebp-210h]
  DWORD v48; // [esp+14h] [ebp-204h]
  DWORD v49; // [esp+14h] [ebp-204h]
  int v50; // [esp+1Ch] [ebp-1FCh]
  _DWORD v52[12]; // [esp+20h] [ebp-1F8h] BYREF
  int v53[113]; // [esp+50h] [ebp-1C8h] BYREF
  __int16 v54; // [esp+214h] [ebp-4h]
  char v55; // [esp+216h] [ebp-2h]
  v41 = 0; /*0x795ce1*/
  v40 = a1 == 0; /*0x795ce6*/
  v42 = 0; /*0x795ceb*/
  Network::Disconnect(g_NetworkManager); /*0x795cf3*/
  Network::SetConnectionParams(g_NetworkManager, 50, -1, 5000, 1); /*0x795d08*/
  Flagged = GameSettings::FindFlagged(); /*0x795d12*/
  char *v3; // eax
  if ( !Flagged || (v3 = String::GetOrEmpty_Alt((char **)&g_WebBrowser), _strcmpi(Flagged + 36, v3)) ) /*0x795d2b*/
  {
  int v1; // ecx
    LOBYTE(v1) = g_MultiplayerSetupState; /*0x79616e*/
    if ( FindAndValidateMap(&Destination, g_MultiplayerConfigState, &g_MultiplayerFlags, v1, 1) ) /*0x796187*/
    {
      memset(v53, 0, sizeof(v53)); /*0x7961a8*/
      v54 = 0; /*0x7961aa*/
      v55 = 0; /*0x7961ac*/
      v53[0] = 19; /*0x7961af*/
      if ( v40 ) /*0x7961b7*/
        v53[0] = 42; /*0x7961b9*/
      CopyWideToChar(&v53[1], *(char **)Game_PlayerInfoArray, -1); /*0x7961cf*/
      int v18 = 0; /*0x7961da*/
      if ( (int)g_WOL_State > 0 ) /*0x7961de*/
      {
        AbstractClass *v19 = (char *)g_WOL_ConnectionFlags; /*0x7961e0*/
        while ( 1 ) /*0x7961e6*/
        {
          if ( v18 >= 0 && v18 < (int)g_WOL_State ) /*0x7961ec*/
            qmemcpy(&g_IsMultiplayerSession, v19, 0x6Cu); /*0x7961fa*/
          if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x796203*/
            break; /*0x796203*/
          ++v18; /*0x796205*/
          v19 += 108; /*0x796206*/
          if ( v18 >= (int)g_WOL_State ) /*0x79620b*/
            goto LABEL_75; /*0x79620b*/
        }
        if ( &g_IsMultiplayerSession ) /*0x796216*/
        {
          char * v20 = CharToWideString(byte_B777D4); /*0x79621d*/
          Network::SendToPlayer((int)g_NetworkManager, (int)v53, 47, 1, (wchar_t *)v20); /*0x796231*/
        }
      }
LABEL_75:
      Timer::GetTicks(); /*0x796236*/
      Ticks = Timer::GetTicks(); /*0x79625f*/
      int v47 = 1200; /*0x796267*/
      if ( v40 ) /*0x79626b*/
      {
        Ticks = Timer::GetTicks(); /*0x796276*/
        v47 = 300; /*0x796287*/
      }
      while ( Network::GetQueueCount((int)g_NetworkManager) > 0 ) /*0x796297*/
      {
        int v21 = v47; /*0x7962a1*/
        if ( Ticks != -1 ) /*0x7962a8*/
        {
          int v22 = Timer::GetTicks() - Ticks; /*0x7962b3*/
          if ( v22 >= v47 ) /*0x7962b9*/
            break; /*0x7962b9*/
          v21 = v47 - v22; /*0x7962bf*/
        }
        if ( !v21 ) /*0x7962c3*/
          break; /*0x7962c3*/
        Event::Dispatch(); /*0x7962c9*/
      }
    }
    else
    {
      if ( g_GameOptionsFlags != 3 && (g_GameOptionsFlags == 1 || g_GameOptionsFlags == 2) /*0x796306*/
        || (_BYTE)g_MultiplayerSetupState && !IsRandMap::Sed2((int)g_GameMode_Current) )
      {
        memset(v53, 0, sizeof(v53)); /*0x796324*/
        v54 = 0; /*0x796326*/
        v55 = 0; /*0x796328*/
        int v23 = 0; /*0x796329*/
        v53[0] = 20; /*0x79632b*/
        if ( (int)g_WOL_State > 0 ) /*0x796335*/
        {
          AbstractClass *v24 = (char *)g_WOL_ConnectionFlags; /*0x796337*/
          while ( 1 ) /*0x79633d*/
          {
            if ( v23 >= 0 && v23 < (int)g_WOL_State ) /*0x796343*/
              qmemcpy(&g_IsMultiplayerSession, v24, 0x6Cu); /*0x796351*/
            if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x79635a*/
              break; /*0x79635a*/
            ++v23; /*0x79635c*/
            v24 += 108; /*0x79635d*/
            if ( v23 >= (int)g_WOL_State ) /*0x796362*/
              goto LABEL_99; /*0x796362*/
          }
          if ( &g_IsMultiplayerSession ) /*0x79636d*/
          {
            char * v25 = CharToWideString(byte_B777D4); /*0x796374*/
            Network::SendToPlayer((int)g_NetworkManager, (int)v53, 47, 1, (wchar_t *)v25); /*0x796388*/
          }
        }
LABEL_99:
        Debug::Log(); /*0x79638d*/
        Timer::GetTicks(); /*0x79639e*/
        v45 = Timer::GetTicks(); /*0x7963bd*/
        while ( Network::GetQueueCount((int)g_NetworkManager) > 0 ) /*0x7963d9*/
        {
          int v26 = 1200; /*0x7963e6*/
          if ( v45 != -1 ) /*0x7963ec*/
          {
            int v27 = Timer::GetTicks() - v45; /*0x7963f7*/
            if ( v27 >= 1200 ) /*0x7963fd*/
              break; /*0x7963fd*/
            v26 = 1200 - v27; /*0x7963ff*/
          }
          if ( !v26 ) /*0x796403*/
            break; /*0x796403*/
          Event::Dispatch(); /*0x796405*/
        }
      }
      else
      {
        while ( CloseDialog(0, 0) == 1 ) /*0x796425*/
          ; /*0x796427*/
        SynchronizeMultiplayerGameStart_Start(); /*0x796434*/
        if ( RequestNetworkFile(&Destination, 4, 1) /*0x79646f*/
          && (v40 || !IsRandMap::Sed2((int)g_GameMode_Current) || RequestNetworkFile((char *)v52, 4, 1)) )
        {
          goto LABEL_113; /*0x796476*/
        }
      }
      v42 = 2; /*0x796478*/
      v40 = 1; /*0x79647c*/
    }
LABEL_113:
    strcpy((char *)g_ScenarioClass_Instance + 4700, &Destination); /*0x796481*/
    Debug::Log(); /*0x7964b4*/
    Timer::GetTicks(); /*0x7964c0*/
    v49 = Timer::GetTicks(); /*0x7964de*/
    int v51 = 1200; /*0x7964f1*/
    if ( v40 ) /*0x7964f5*/
    {
      v49 = Timer::GetTicks(); /*0x796500*/
      v51 = 300; /*0x796511*/
    }
    while ( 1 ) /*0x79651a*/
    {
      Event::Dispatch(); /*0x79651a*/
      if ( Network::Send( /*0x796538*/
             (int)g_NetworkManager,
             (int)&Network_EventType,
             (int)&DataGlobal_A8D800,
             (int)&Network_EventValue,
             (int)&Network_EventHeader) )
      {
        if ( Network_EventHeader == -22012 ) /*0x796548*/
        {
          Debug::Log(); /*0x79654f*/
          int v28 = 0; /*0x79655d*/
          if ( (int)g_WOL_State > 0 ) /*0x796561*/
          {
            AbstractClass *v29 = (char *)g_WOL_ConnectionFlags; /*0x796563*/
            do /*0x796569*/
            {
              if ( v28 >= 0 && v28 < (int)g_WOL_State ) /*0x79656f*/
                qmemcpy(&g_IsMultiplayerSession, v29, 0x6Cu); /*0x79657d*/
              if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x796586*/
                break; /*0x796586*/
              ++v28; /*0x796588*/
              v29 += 108; /*0x796589*/
            }
            while ( v28 < (int)g_WOL_State ); /*0x796569*/
            if ( &g_IsMultiplayerSession && !_strcmpi(g_NetworkPlayerBuffer, byte_B777D4) ) /*0x7965a5*/
            {
              if ( Network_EventType == 11 ) /*0x7965b9*/
              {
                Debug::Log(); /*0x7965f6*/
                goto LABEL_147; /*0x7965fe*/
              }
              if ( Network_EventType == 42 ) /*0x7965be*/
                break; /*0x7965be*/
            }
          }
        }
      }
      WinModemClass *v30 = v51; /*0x7965c0*/
      if ( v49 != -1 ) /*0x7965cb*/
      {
        int v31 = Timer::GetTicks() - v49; /*0x7965d6*/
        if ( v31 >= v51 ) /*0x7965dc*/
          goto LABEL_142; /*0x7965dc*/
        v30 = v51 - v31; /*0x7965e2*/
      }
      if ( !v30 ) /*0x7965e6*/
        goto LABEL_142; /*0x7965e6*/
    }
    Debug::Log(); /*0x796608*/
    int v32 = 0; /*0x796615*/
    v40 = 1; /*0x796617*/
    if ( Game_PlayerCount > 0 ) /*0x79661e*/
    {
      while ( 1 ) /*0x79662e*/
      {
        char * v33 = ToWideStringChar(*(char **)(Game_PlayerInfoArray + 4 * v32)); /*0x79662e*/
        if ( !_strcmpi(v33, byte_B777D4) ) /*0x796634*/
          break; /*0x796634*/
        if ( ++v32 >= Game_PlayerCount ) /*0x796648*/
          goto LABEL_142; /*0x796648*/
      }
      if ( v32 < Game_PlayerCount && dword_B73BB4[v32] < dword_84A1E0[v32] ) /*0x79666b*/
        dword_B73BB4[v32] = 3; /*0x79666d*/
    }
LABEL_142:
    WinModemClass *v34 = v51; /*0x796673*/
    if ( v49 != -1 ) /*0x79667e*/
    {
      int v35 = Timer::GetTicks() - v49; /*0x796689*/
      if ( v35 >= v51 ) /*0x79668f*/
      {
LABEL_146:
        v40 = 1; /*0x796697*/
        goto LABEL_147; /*0x796697*/
      }
      v34 = v51 - v35; /*0x796691*/
    }
    if ( v34 ) /*0x796695*/
      goto LABEL_147; /*0x796695*/
    goto LABEL_146; /*0x796695*/
  }
  memset(v53, 0, sizeof(v53)); /*0x795d44*/
  v54 = 0; /*0x795d46*/
  v55 = 0; /*0x795d48*/
  memset(&v52[4], 0, 0x20u); /*0x795d59*/
  int v4 = 0; /*0x795d5b*/
  char v5 = 0; /*0x795d5d*/
  Debug::Log(); /*0x795d5f*/
  Timer::GetTicks(); /*0x795d6b*/
  v48 = Timer::GetTicks(); /*0x795d81*/
  v50 = 900; /*0x795d98*/
  if ( v40 ) /*0x795d9c*/
  {
    v48 = Timer::GetTicks(); /*0x795db0*/
    v50 = 300; /*0x795db8*/
  }
  do /*0x795f56*/
  {
    Event::Dispatch(); /*0x795dbc*/
    if ( Network::Send( /*0x795dda*/
           (int)g_NetworkManager,
           (int)&Network_EventType,
           (int)&DataGlobal_A8D800,
           (int)&Network_EventValue,
           (int)&Network_EventHeader) )
    {
      if ( Network_EventHeader == -22012 ) /*0x795df0*/
      {
        Debug::Log(); /*0x795dfb*/
        int v6 = 1; /*0x795e05*/
        if ( Game_PlayerCount > 1 ) /*0x795e0f*/
        {
          int v7 = 0; /*0x795e15*/
          do /*0x795f23*/
          {
            if ( NetworkID::Compare(*(_DWORD *)(v7 * 4 + Game_PlayerInfoArray + 4) + 40, (int)&Network_EventValue) ) /*0x795e28*/
            {
              char * v8 = ToWideStringChar(*(char **)(v7 * 4 + Game_PlayerInfoArray + 4)); /*0x795e44*/
              if ( !_strcmpi(v8, g_NetworkPlayerBuffer) && !v52[v7 + 5] ) /*0x795e5a*/
              {
                int v9 = Network_EventType; /*0x795e66*/
                if ( Network_EventType == 16 ) /*0x795e6e*/
                {
                  Debug::Log(); /*0x795e75*/
                  v9 = Network_EventType; /*0x795e7a*/
                  v52[v7 + 5] = Network_EventType; /*0x795e82*/
                  v5 = 1; /*0x795e86*/
                  ++v4; /*0x795e88*/
                }
                if ( v9 == 19 ) /*0x795e8c*/
                {
                  Debug::Log(); /*0x795e93*/
                  v9 = Network_EventType; /*0x795e98*/
                  v52[v7 + 5] = Network_EventType; /*0x795ea0*/
                  ++v4; /*0x795ea4*/
                }
                if ( v9 == 42 ) /*0x795ea8*/
                {
                  Debug::Log(); /*0x795eaf*/
                  v9 = Network_EventType; /*0x795eba*/
                  ++v4; /*0x795ec2*/
                  bool v10 = v6 < Game_PlayerCount; /*0x795ec3*/
                  v52[v7 + 5] = Network_EventType; /*0x795ec5*/
                  v40 = 1; /*0x795ec9*/
                  if ( v10 && dword_B73BB8[v7] < dword_84A1E4[v7] ) /*0x795ede*/
                    dword_B73BB8[v7] = 0; /*0x795ee0*/
                }
                if ( v9 == 20 ) /*0x795eed*/
                {
                  Debug::Log(); /*0x795ef4*/
                  v52[v7 + 5] = Network_EventType; /*0x795f01*/
                  v42 = 2; /*0x795f05*/
                  v40 = 1; /*0x795f0d*/
                  v41 = 1; /*0x795f12*/
                  ++v4; /*0x795f17*/
                }
              }
            }
            ++v6; /*0x795f1d*/
            ++v7; /*0x795f1e*/
          }
          while ( v6 < Game_PlayerCount ); /*0x795f23*/
        }
      }
    }
    if ( v4 >= Game_PlayerCount - 1 ) /*0x795f32*/
      break; /*0x795f32*/
    v11 = v50; /*0x795f38*/
    if ( v48 != -1 ) /*0x795f3f*/
    {
      int v12 = Timer::GetTicks() - v48; /*0x795f4a*/
      if ( v12 >= v50 ) /*0x795f50*/
        break; /*0x795f50*/
      v11 = v50 - v12; /*0x795f52*/
    }
  }
  while ( v11 ); /*0x795f56*/
  if ( v41 ) /*0x795f67*/
    v42 = 2; /*0x795f69*/
  if ( !v40 && !v41 && v5 && v4 == Game_PlayerCount - 1 ) /*0x795f92*/
  {
    while ( CloseDialog(0, 0) == 1 ) /*0x795fa3*/
      ; /*0x795fa5*/
    DataGlobal_A8BB10 = 0; /*0x795fba*/
    DataGlobal_A8BB14 = 0; /*0x795fbf*/
    DataGlobal_A8BB18 = 0; /*0x795fc4*/
    int v13 = 1; /*0x795fc9*/
    if ( Game_PlayerCount > 1 ) /*0x795fd0*/
    {
      _DWORD * v14 = &v52[5]; /*0x795fd2*/
      do /*0x796000*/
      {
        if ( *v14 == 16 ) /*0x795fd9*/
          *((_BYTE *)&DataGlobal_A8BB10 + DataGlobal_A8BB18++) = v13; /*0x795fe1*/
        ++v13; /*0x795ffa*/
        ++v14; /*0x795ffb*/
      }
      while ( v13 < Game_PlayerCount ); /*0x796000*/
    }
    if ( !SendNetworkFile((char *)g_ScenarioClass_Instance + 4700, 4, 0, 1) ) /*0x796016*/
    {
      v42 = 2; /*0x79601f*/
      v40 = 0; /*0x796023*/
    }
    if ( IsRandMap::Sed2((int)g_GameMode_Current) && !SendNetworkFile(stru_829ABC, 4, 0, 1) ) /*0x796043*/
    {
      v42 = 2; /*0x79604c*/
      v40 = 0; /*0x796050*/
    }
  }
  memset(v53, 0, sizeof(v53)); /*0x79605f*/
  v54 = 0; /*0x796061*/
  v55 = 0; /*0x796063*/
  if ( v40 || v4 != Game_PlayerCount - 1 || v41 ) /*0x79607d*/
  {
    v53[0] = 42; /*0x79608d*/
    v40 = 1; /*0x796097*/
    if ( !v42 ) /*0x79609c*/
      v42 = 1; /*0x79609e*/
  }
  else
  {
    v53[0] = 11; /*0x79607f*/
  }
  CopyWideToChar(&v53[1], *(char **)Game_PlayerInfoArray, -1); /*0x7960b4*/
  for ( i = 1; i < Game_PlayerCount; ++i ) /*0x7960c5*/
  {
  int v16; // esi
    v43 = Timer::GetTicks(); /*0x7960dc*/
    int v46 = 600; /*0x7960e6*/
    if ( v40 ) /*0x7960ea*/
    {
      v52[0] = Timer::GetTicks(); /*0x7960f5*/
      v43 = v52[0]; /*0x7960f9*/
      v52[2] = 300; /*0x796106*/
      v46 = 300; /*0x79610e*/
    }
    do /*0x796159*/
    {
      Event::Dispatch(); /*0x796112*/
      if ( Network::SendToPlayer((int)g_NetworkManager, (int)v53, 47, 1, *(wchar_t **)(Game_PlayerInfoArray + 4 * i)) ) /*0x79612f*/
        break; /*0x796136*/
      v16 = v46; /*0x79613c*/
      if ( v43 != -1 ) /*0x796142*/
      {
        int v17 = Timer::GetTicks() - v43; /*0x79614d*/
        if ( v17 >= v46 ) /*0x796153*/
          break; /*0x796153*/
        v16 = v46 - v17; /*0x796155*/
      }
    }
    while ( v16 ); /*0x796159*/
  }
LABEL_147:
  if ( (unsigned int)(8 * Network::GetLobbyStatus(g_NetworkManager)) >= 0x78 ) /*0x7966b0*/
    v36 = 8 * Network::GetLobbyStatus(g_NetworkManager); /*0x7966c3*/
  else
    v36 = 120; /*0x7966b2*/
  v39 = v36; /*0x7966c8*/
  LobbyStatus = Network::GetLobbyStatus(g_NetworkManager); /*0x7966d0*/
  Network::SetConnectionParams(g_NetworkManager, LobbyStatus + 2, -1, v39, 1); /*0x7966de*/
  Connection::Close(g_NetworkManager); /*0x7966e8*/
  result = v42; /*0x7966ed*/
  if ( v42 != 2 && v40 ) /*0x7966fc*/
    return 1; /*0x7966fe*/
  return result; /*0x796703*/
}
}
} // namespace gamemd

// 0x796710
namespace gamemd {
char HandleWOLRematch()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  HWND v3; // eax
  HWND DlgItem; // eax
  char *i; // edx
  __int16 v8; // [esp+Eh] [ebp-246h] BYREF
  _BYTE v10[12]; // [esp+14h] [ebp-240h] BYREF
  Waypoint::InitInvalid(v10); /*0x79671d*/
  if ( !g_WOL_ProcessIdle || (int)g_WOL_State < 2 ) /*0x796738*/
    return 0; /*0x796738*/
  int v0 = 0; /*0x79673e*/
  if ( (int)g_WOL_State > 0 ) /*0x796742*/
  {
    char * v1 = (char *)g_WOL_ConnectionFlags; /*0x796744*/
    while ( 1 ) /*0x79674a*/
    {
      if ( v0 >= 0 && v0 < (int)g_WOL_State ) /*0x796750*/
        qmemcpy(&g_IsMultiplayerSession, v1, 0x6Cu); /*0x79675e*/
      if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x796767*/
        break; /*0x796767*/
      ++v0; /*0x796769*/
      v1 += 108; /*0x79676a*/
      if ( v0 >= (int)g_WOL_State ) /*0x79676f*/
        goto LABEL_13; /*0x79676f*/
    }
    if ( &g_IsMultiplayerSession ) /*0x79677a*/
    {
      char * v2 = String::GetOrEmpty_Alt((char **)&g_WebBrowser); /*0x796781*/
      if ( !_strcmpi(byte_B777D4, v2) ) /*0x79678c*/
        return 0; /*0x796796*/
    }
  }
LABEL_13:
  if ( g_NetworkLobbyState ) /*0x7967a3*/
    return 0; /*0x7967a3*/
  if ( !Connection::GetSpeed((int)g_NetworkManager) ) /*0x7967ae*/
    return 0; /*0x7967ae*/
  Event::Dispatch(); /*0x7967bb*/
  int v9 = 455; /*0x7967e0*/
  int v12; // [esp+8Ch] [ebp-1C8h] BYREF
  if ( !Network::SendPacketThunk(0, &v12, &v9, v10, &v8, 0) || v12 != 25 ) /*0x796803*/
    return 0; /*0x796803*/
  v3 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x79680e*/
  if ( v3 ) /*0x796815*/
  {
    DlgItem = GetDlgItem(v3, 1128); /*0x79681f*/
    ShowWindow(DlgItem, 1); /*0x796826*/
  }
  if ( (int)g_WOL_State > 0 ) /*0x796833*/
  _DWORD v11[27]; // [esp+20h] [ebp-234h] BYREF
    qmemcpy(v11, g_WOL_ConnectionFlags, sizeof(v11)); /*0x796844*/
  v11[8] = 0; /*0x79684a*/
  Network::SyncPlayerList(); /*0x796852*/
  if ( !Network::Send((int)g_NetworkManager, (int)&v12, (int)&v9, (int)v10, (int)&v8) ) /*0x796873*/
    return 0; /*0x796873*/
  if ( v12 != 25 ) /*0x796883*/
    return 0; /*0x796883*/
  if ( !NetworkID::Compare((int)v10, (int)&g_NetworkRematchObject) ) /*0x79688e*/
    return 0; /*0x79688e*/
  if ( v8 != -22012 ) /*0x79689e*/
    return 0; /*0x79689e*/
  int v5 = 0; /*0x7968a6*/
  if ( (int)g_WOL_State <= 0 ) /*0x7968aa*/
    return 0; /*0x7968aa*/
  for ( i = (char *)g_WOL_ConnectionFlags; ; i += 108 ) /*0x7968ac*/
  {
    if ( v5 >= 0 && v5 < (int)g_WOL_State ) /*0x7968b8*/
      qmemcpy(&g_IsMultiplayerSession, i, 0x6Cu); /*0x7968c6*/
    if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x7968cf*/
      break; /*0x7968cf*/
    if ( ++v5 >= (int)g_WOL_State ) /*0x7968d7*/
      return 0; /*0x7968d7*/
  }
  _BYTE v13[452]; // [esp+90h] [ebp-1C4h] BYREF
  if ( !&g_IsMultiplayerSession || _strcmpi(v13, byte_B777D4) ) /*0x7968fb*/
    return 0; /*0x7968e4*/
  Debug::Log(); /*0x79690c*/
  Network::SetConnectionParams(g_NetworkManager, 50, -1, 5000, 1); /*0x796924*/
  byte_B77E2C = 1; /*0x796929*/
  ExchangeMultiplayerGameInfo(); /*0x796930*/
  byte_B77E2C = 0; /*0x79693a*/
  Network::SetConnectionParams(g_NetworkManager, 30, -1, 600, 1); /*0x79694c*/
  return 1; /*0x7968d9*/
}
}
} // namespace gamemd

// 0x796B90
namespace gamemd {
CampaignScore * * WOL_LobbyDlgProc(HWND hWnd, LONG a2, int a3, HWND a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  HWND v4; // ebp
  HWND v5; // esi
  int result; // eax
  LONG WindowLongA; // eax
  HWND v10; // esi
  int i; // edi
  LRESULT v12; // eax
  HWND v13; // eax
  LRESULT v14; // ebx
  HWND DlgItem; // edi
  LRESULT v16; // eax
  wchar_t *v17; // [esp-4h] [ebp-14h]
  v4 = a4; /*0x796b92*/
  v5 = hWnd; /*0x796b97*/
  AbstractClass *v6 = a2; /*0x796b9c*/
  if ( a2 == 272 && a4 ) /*0x796baa*/
    SetWindowLongA(hWnd, 8, *((_DWORD *)a4 + 1)); /*0x796bb3*/
  unsigned int v7 = a3; /*0x796bb9*/
  result = BaseDialogProc(v5, v6, a3, (unsigned int)v4); /*0x796bc3*/
  if ( !result ) /*0x796bca*/
  {
    WindowLongA = GetWindowLongA(v5, 8); /*0x796bd3*/
    a2 = WindowLongA; /*0x796bdf*/
    if ( v6 <= 0x82 ) /*0x796be3*/
    {
      switch ( v6 ) /*0x796be5*/
      {
        case 0x82u: /*0x796be5*/
          DestroyDialog(v5); /*0x796c2f*/
          return 0; /*0x796c3a*/
        case 0xFu: /*0x796be5*/
          Dialog::DrawBackground(v5); /*0x796c0f*/
          Dialog::StopBink(v5); /*0x796c16*/
          ValidateRect(v5, 0); /*0x796c1e*/
          return 0; /*0x796c2a*/
        case 0x14u: /*0x796be5*/
          return 1; /*0x796c0a*/
        case 0x2Bu: /*0x796be5*/
          Dialog::Resize((char *)v4); /*0x796bfc*/
          return 1; /*0x796bfc*/
      }
      return 0; /*0x796bf4*/
    }
    if ( v6 == 273 ) /*0x796c43*/
    {
      if ( (unsigned __int16)v7 == 1 ) /*0x796d2e*/
      {
        v14 = 0; /*0x796da1*/
        DlgItem = GetDlgItem(v5, 1008); /*0x796da4*/
        v16 = SendMessageA(DlgItem, 0x188u, 0, 0); /*0x796dad*/
        if ( v16 != -1 ) /*0x796db2*/
          v14 = SendMessageA(DlgItem, 0x199u, v16, 0); /*0x796dbe*/
        (*(void (__thiscall **)(LONG, HWND, LRESULT))(*(_DWORD *)a2 + 4))(a2, v5, v14); /*0x796dc8*/
      }
      else
      {
        if ( (unsigned __int16)v7 == 2 ) /*0x796d31*/
        {
          (*(void (__thiscall **)(LONG, HWND, _DWORD))(*(_DWORD *)WindowLongA + 4))(WindowLongA, v5, 0); /*0x796d83*/
          return 0; /*0x796d8c*/
        }
        if ( (unsigned __int16)v7 == 1008 && HIWORD(v7) == 1 ) /*0x796d45*/
        {
          BOOL v18 = SendMessageA(v4, 0x188u, 0, 0) != -1; /*0x796d63*/
          v13 = GetDlgItem(v5, 1); /*0x796d66*/
          EnableWindow(v13, v18); /*0x796d6d*/
          return 0; /*0x796d79*/
        }
      }
      return 0; /*0x796d45*/
    }
    if ( v6 != 1175 ) /*0x796c4f*/
      return 0; /*0x796c4f*/
    SendDlgItemMessageA(v5, 1008, 0x184u, 0, 0); /*0x796c64*/
    hWnd = 0; /*0x796c73*/
    (*(void (__stdcall **)(LPVOID, HWND *))(*(_DWORD *)ppv + 208))(ppv, &hWnd); /*0x796c7f*/
    if ( (int)hWnd <= 0 ) /*0x796c8b*/
      return 0; /*0x796dcb*/
    v10 = GetDlgItem(v5, 1008); /*0x796ca3*/
    for ( i = (int)hWnd - 1; i >= 0; --i ) /*0x796cae*/
    {
      FormatLocaleStringWOL((wchar_t **)&a2, i); /*0x796cb6*/
      WideString::GetOrEmpty((wchar_t **)&a2); /*0x796cbf*/
      Debug::Log(); /*0x796cca*/
      v17 = WideString::GetOrEmpty((wchar_t **)&a2); /*0x796ce0*/
      if ( i >= 2 ) /*0x796cd9*/
        v12 = SendMessageA(v10, 0x4CDu, 0, (LPARAM)v17); /*0x796cf8*/
      else
        v12 = SendMessageA(v10, 0x4CCu, 0, (LPARAM)v17); /*0x796ce8*/
      SendMessageA(v10, 0x19Au, v12, i); /*0x796d02*/
      DeleteAndZero::Alt((void **)&a2); /*0x796d08*/
    }
    SendMessageA(v10, 0x186u, 0xFFFFFFFF, 0); /*0x796d1a*/
    return 0; /*0x796d1f*/
  }
  return result; /*0x796c01*/
}
}
} // namespace gamemd

// 0x7970D0
namespace gamemd {
AbstractClass * * NetworkGame_Init()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // esi
  DWORD nSize; // [esp+14h] [ebp-428h] BYREF
  CHAR Buffer[1016]; // [esp+44h] [ebp-3F8h] BYREF

  dword_B779D4 = 0; /*0x7970e6*/
  *(_DWORD *)dword_B77D6C = g_NetworkRematchState; /*0x7970ec*/
  *(_DWORD *)dword_B779C4 = 0; /*0x7970f1*/
  strcpy(byte_B77830, String::GetOrEmpty((char **)&g_WebBrowser)); /*0x797115*/
  PtrVector::Destroy(&g_PlayerInfoCount); /*0x797123*/
  nSize = 1015; /*0x797132*/
  GetComputerNameA(Buffer, &nSize); /*0x79713a*/
  char v6 = 0; /*0x79714a*/
  if ( _strcmpi(Buffer, aSteveT3) ) /*0x79714f*/
  {
    if ( _strcmpi(Buffer, aSteveT2) ) /*0x79717f*/
    {
      Game::CreateAIPlayer(); /*0x797197*/
      Game::CreateAIPlayer_Potato(); /*0x79719c*/
    }
    else
    {
      Game::CreateAIPlayer_Potato(); /*0x79718b*/
      Game::CreateAIPlayer(); /*0x797190*/
    }
    Network_Init_796FC0(); /*0x7971a1*/
  }
  else
  {
    Network_Init_796FC0(); /*0x797160*/
    Game::CreateAIPlayer(); /*0x797165*/
    Game::CreateAIPlayer_Potato(); /*0x79716a*/
    v6 = 1; /*0x79716f*/
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)g_NetworkInterface + 48))(g_NetworkInterface); /*0x7971ae*/
  char v8[16]; // [esp+18h] [ebp-424h] BYREF
  strcpy(v8, "xxx.xxx.xxx.xxx"); /*0x7971c8*/
  int v9 = 0; /*0x7971d1*/
  int v10 = 0; /*0x7971de*/
  int v11 = 0; /*0x7971e4*/
  int v12 = 0; /*0x7971ec*/
  for ( i = 1; i < Game_PlayerCount; ++i ) /*0x7971f7*/
  {
  int v13; // [esp+38h] [ebp-404h] BYREF
  _BYTE v14[8]; // [esp+3Ch] [ebp-400h] BYREF
    Network::CopyAddress((_DWORD *)(*(_DWORD *)(Game_PlayerInfoArray + 4 * i) + 40), &v13, (int)v14); /*0x79720e*/
    (*(void (__thiscall **)(int, char *, _DWORD))(*(_DWORD *)g_NetworkInterface + 44))(g_NetworkInterface, v8, 0); /*0x797221*/
  }
  g_NetworkLobbyState = 2; /*0x79723f*/
  Debug::Log(); /*0x797245*/
  BulkCharToWide(DataGlobal_A8E258, (unsigned __int8 *)aPotatotoo, -1); /*0x797259*/
  DataGlobal_A8E2AC = -1; /*0x797267*/
  g_CommandExecState = 0; /*0x797271*/
  g_MenuRandomSeed = 1; /*0x797276*/
  g_RulesInitConfig = 10; /*0x79727c*/
  g_Rules_MultiEngineer = 10; /*0x797282*/
  g_Rules_Bases = 10000; /*0x797288*/
  FOW = 0; /*0x797292*/
  BridgeDestruction = 1; /*0x797297*/
  Crates = 1; /*0x79729d*/
  LOBYTE(MCVRedeploy) = 1; /*0x7972a3*/
  AlliesAllowed = 1; /*0x7972a9*/
  HarvesterTruce = 0; /*0x7972af*/
  Bases = 1; /*0x7972b4*/
  CTF = 0; /*0x7972ba*/
  g_Rules_AlliesAllowed = 0; /*0x7972bf*/
  DataGlobal_A8B278 = 0; /*0x7972c4*/
  ShortGame = 1; /*0x7972c9*/
  SWAllowed = 1; /*0x7972cf*/
  LOBYTE(g_Rules_ShortGame) = 0; /*0x7972d5*/
  MultiEngineer = 1; /*0x7972da*/
  g_GameRulesOptions = 1; /*0x7972e0*/
  g_Rules_EngineerCount = 0; /*0x7972e6*/
  LoadScenarioClassByIndex(1); /*0x7972eb*/
  g_Rules_EngineerCount = 2; /*0x7972fb*/
  *(_DWORD *)g_GameModeOptions = 2; /*0x797301*/
  *((_DWORD *)g_ScenarioClass_Instance + 1173) = g_GameRulesOptions; /*0x797307*/
  g_ScenarioLoadState = 5; /*0x797315*/
  switch ( g_Rules_EngineerCount ) /*0x797325*/
  {
    case 0: /*0x797325*/
      g_ScenarioState = (wchar_t *)40; /*0x79732c*/
      g_GameSessionFlags = 60; /*0x797332*/
      g_ScenarioLoadState = 10; /*0x79733c*/
      break; /*0x797342*/
    case 1: /*0x797325*/
      g_ScenarioState = (wchar_t *)40; /*0x797344*/
      g_GameSessionFlags = 45; /*0x79734a*/
      g_ScenarioLoadState = 10; /*0x797354*/
      break; /*0x79735a*/
    case 2: /*0x797325*/
      g_ScenarioState = (wchar_t *)30; /*0x797361*/
      g_GameSessionFlags = 30; /*0x797366*/
      break; /*0x79736b*/
    case 3: /*0x797325*/
      g_ScenarioState = (wchar_t *)20; /*0x797372*/
      g_GameSessionFlags = 20; /*0x797377*/
      break; /*0x79737c*/
    case 4: /*0x797325*/
      g_ScenarioState = (wchar_t *)20; /*0x79737e*/
      g_GameSessionFlags = 15; /*0x797388*/
      break; /*0x797392*/
    case 5: /*0x797325*/
      g_ScenarioState = (wchar_t *)20; /*0x797394*/
      g_GameSessionFlags = 12; /*0x79739e*/
      break; /*0x7973a8*/
    default:
      g_ScenarioState = (wchar_t *)10; /*0x7973aa*/
      g_GameSessionFlags = 10; /*0x7973b0*/
      break; /*0x7973b0*/
  }
  g_GameSessionPool = 0; /*0x7973be*/
  if ( !v6 ) /*0x7973c4*/
    g_GameSessionFlags = 0; /*0x7973c6*/
  AbstractClass *v1 = 0; /*0x7973d1*/
  if ( Game_PlayerCount > 0 ) /*0x7973d5*/
  {
    int * v2 = dword_B7790C; /*0x7973d7*/
    int v3 = Game_PlayerCount; /*0x7973dc*/
    do /*0x7973ea*/
    {
      if ( *v2 > v1 ) /*0x7973e2*/
        v1 = *v2; /*0x7973e4*/
      ++v2; /*0x7973e6*/
      --v3; /*0x7973e9*/
    }
    while ( v3 ); /*0x7973ea*/
  }
  g_NetworkHostState = (wchar_t *)1; /*0x7973ee*/
  if ( !v1 || v1 == 1000 ) /*0x797400*/
  {
    g_GameSessionFlags = 0; /*0x7974ea*/
    Debug::Log(); /*0x7974f0*/
  }
  else
  {
    Debug::Log(); /*0x79740c*/
    if ( v1 <= 1000 ) /*0x79741a*/
    {
      if ( v1 < 600 ) /*0x79742a*/
        g_NetworkHostState = (wchar_t *)1; /*0x79742c*/
    }
    else
    {
      g_NetworkHostState = (wchar_t *)2; /*0x79741c*/
    }
    Network::SetConnectionParams( /*0x79747b*/
      g_NetworkManager,
      120 * (60 * v1 / 1000) / 100 + 60 * v1 / 1000,
      -1,
      8 * (120 * (60 * v1 / 1000) / 100 + 60 * v1 / 1000),
      1);
    if ( v6 ) /*0x797486*/
    {
  AbstractClass *v4; // ecx
      IPXManagerClass::sendPacket(5, -1, 120); /*0x797493*/
      switch ( (unsigned int)g_NetworkHostState ) /*0x7974a2*/
      {
        case 0u: /*0x7974a2*/
        case 1u: /*0x7974a2*/
          v4 = (unsigned int)g_ScenarioState; /*0x7974a9*/
          break; /*0x7974af*/
        case 2u: /*0x7974a2*/
          v4 = (unsigned int)g_ScenarioState + ((unsigned int)g_ScenarioState >> 1); /*0x7974ba*/
          break; /*0x7974bc*/
        case 3u: /*0x7974a2*/
          v4 = 2 * (_DWORD)g_ScenarioState; /*0x7974c3*/
          break; /*0x7974c6*/
        default:
          v4 = g_GameSessionPool; /*0x7974c8*/
          break; /*0x7974c8*/
      }
      g_GameSessionPool = 10 * (v4 / 0xA); /*0x7974dd*/
    }
  }
  Debug::Log(); /*0x797504*/
  Debug::Log(); /*0x797515*/
  Debug::Log(); /*0x797526*/
  Debug::Log(); /*0x797536*/
  DataGlobal_A8B568 = (int)g_ScenarioState; /*0x797543*/
  memset(&DataGlobal_A8B574, 0, 0x340u); /*0x797556*/
  *(_DWORD *)&hostshort = 1234; /*0x79755e*/
  *(_DWORD *)g_GameModeOptions = g_Rules_EngineerCount; /*0x797568*/
  *(_DWORD *)&DataGlobal_841F34 = 1235; /*0x79756e*/
  *(_DWORD *)&DataGlobal_841F38 = 1236; /*0x797578*/
  *(_DWORD *)&DataGlobal_841F3C = 1237; /*0x797582*/
  g_CurrentFrame = 0; /*0x79758c*/
  byte_B77A04 = 0; /*0x797591*/
  byte_B76568[0] = 0; /*0x797596*/
  return Scenario::PreGameInit(); /*0x7975a0*/
}
}
} // namespace gamemd

// 0x797640
namespace gamemd {
int sub_797640(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  DWORD i; // esi
  wchar_t *String; // eax
  int v3; // esi
  HWND v4; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  char v8; // [esp+21h] [ebp-3h]
  char v9; // [esp+22h] [ebp-2h]
  char v10; // [esp+23h] [ebp-1h]

  v10 = byte_B77DC0; /*0x797650*/
  byte_B77DC0 = 1; /*0x797669*/
  g_WOL_UserList = 0; /*0x797670*/
  dword_B76468 = 0; /*0x797676*/
  dword_B779CC = 0; /*0x79767c*/
  (*(void (__stdcall **)(LPVOID, int, int, char *, char *, int))(*(_DWORD *)ppv + 16))( /*0x79768b*/
    ppv,
    a1 | dword_B77E50,
    65537,
    DataGlobal_84B7AC,
    DataGlobal_84B7B4,
    30);
  (*(void (__stdcall **)(LPVOID, int))(*(_DWORD *)ppv + 140))(ppv, g_NetworkRematchState); /*0x79769d*/
  v9 = 0; /*0x7976af*/
  v8 = 0; /*0x7976b3*/
  while ( 1 ) /*0x797758*/
  {
    while ( 1 ) /*0x79771a*/
    {
      do /*0x79771a*/
      {
        while ( 1 ) /*0x7976c3*/
        {
          for ( i = WaitForMultipleObjects(0x12u, &Handles, 0, 0x32u); /*0x7976cb*/
                i == 258;
                i = WaitForMultipleObjects(0x12u, &Handles, 0, 0x32u) )
          {
            Game::ProcessIdle(); /*0x7976cd*/
          }
          ResetEvent(*(&Handles + i)); /*0x7976f0*/
          if ( !i ) /*0x7976f4*/
            goto LABEL_19; /*0x7976f4*/
          if ( i == 8 ) /*0x7976fd*/
          {
            v3 = 2; /*0x79778b*/
            goto LABEL_22; /*0x797790*/
          }
          if ( i != 1 ) /*0x797706*/
            break; /*0x797706*/
          v9 = 1; /*0x79770c*/
          if ( v8 ) /*0x797713*/
            goto LABEL_21; /*0x797713*/
        }
      }
      while ( i != 9 ); /*0x79771a*/
      if ( dword_B77DE8 > -2147221395 ) /*0x797726*/
        break; /*0x797726*/
      if ( dword_B77DE8 >= -2147221396 || dword_B77DE8 >= -2147221401 && dword_B77DE8 <= -2147221398 ) /*0x79773b*/
      {
        String = GetStringCSF(g_Str_TXT_CANT_CONNECT, 0, g_Str_File_wonline_cpp, 24389); /*0x797776*/
        ShowDialogConfirm(String, 0, (int)GameLoop::Thunk, 0); /*0x79777f*/
LABEL_19:
        v3 = 1; /*0x797784*/
        goto LABEL_22; /*0x797789*/
      }
    }
    if ( dword_B77DE8 == 262447 ) /*0x797747*/
    {
      v8 = 1; /*0x797751*/
      if ( v9 ) /*0x797758*/
        break; /*0x797758*/
    }
  }
LABEL_21:
  v3 = 0; /*0x797792*/
LABEL_22:
  v4 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x797794*/
  if ( v4 ) /*0x7977a0*/
  {
    g_WOL_ChannelList = 0; /*0x7977a6*/
    CloseDialog(v4, 0); /*0x7977ac*/
  }
  Current = Dialog::GetCurrent(); /*0x7977b1*/
  DlgItem = GetDlgItem(Current, 1344); /*0x7977bc*/
  if ( DlgItem ) /*0x7977c4*/
    SetFocus(DlgItem); /*0x7977c7*/
  byte_B77DC0 = v10; /*0x7977d6*/
  return v3; /*0x7977d3*/
}
}
} // namespace gamemd

// 0x797800
namespace gamemd {
ObjectClass * * WOL_FetchData()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  wchar_t *String; // eax
  HANDLE *v1; // esi
  wchar_t *v4; // eax
  DWORD v6; // esi
  HWND v7; // eax
  HWND v8; // eax
  HWND DlgItem; // eax
  wchar_t *v10; // eax
  HWND v11; // eax
  HWND v12; // eax
  wchar_t *v13; // eax
  HWND v14; // eax
  HWND Current; // eax
  HWND v17; // eax
  HWND v18; // eax
  DWORD i; // esi
  HWND v20; // eax
  HWND v21; // eax
  wchar_t *v22; // eax
  HWND v23; // eax
  HWND v24; // eax
  HWND v25; // eax
  HWND v26; // eax
  HWND v27; // eax
  HWND v28; // eax
  char *v29; // [esp-4h] [ebp-18h]
  void *v30; // [esp+10h] [ebp-4h] BYREF
  if ( !byte_B76A2C ) /*0x79780c*/
  {
    v29 = byte_B76A2C; /*0x79780e*/
    String = GetStringCSF(g_Str_TXT_WDT_NET_ERR, 0, g_Str_File_wonline_cpp, 24435); /*0x797819*/
LABEL_7:
    ShowDialogConfirm(String, 0, (int)GameLoop::Thunk, (char)v29); /*0x797894*/
    return 0; /*0x7978a4*/
  }
  v1 = &Handles; /*0x79781b*/
  do /*0x797832*/
    ResetEvent(*v1++); /*0x797823*/
  while ( (int)v1 < (int)g_WOL_RequestObject ); /*0x797832*/
  int v2; // esi
  v2 = (*(int (__stdcall **)(LPVOID, char *, int, int))(*(_DWORD *)g_UIPointerTable + 44))( /*0x797853*/
         g_UIPointerTable,
         DataGlobal_B73B34,
         dword_B76B0C,
         3);
  Debug::Log(); /*0x797860*/
  Debug::Log(); /*0x79786a*/
  if ( v2 ) /*0x797876*/
  {
    LOBYTE(v29) = 0; /*0x797878*/
    String = GetStringCSF(g_Str_TXT_WDT_NET_ERR, 0, g_Str_File_wonline_cpp, 24451); /*0x79788f*/
    goto LABEL_7; /*0x79788f*/
  }
  v4 = GetStringCSF(aTxtFetchingWdt, 0, g_Str_File_wonline_cpp, 24455); /*0x7978b6*/
  WideString::Assign((wchar_t **)&v30, v4); /*0x7978c0*/
  ShowUIMessage(16, (wchar_t **)&v30, 0); /*0x7978cf*/
  DeleteAndZero::Alt(&v30); /*0x7978d8*/
  do /*0x797949*/
  {
    int v5 = 30000; /*0x7978ed*/
    v6 = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x7978f4*/
    if ( v6 == 258 ) /*0x7978fc*/
    {
      while ( 1 ) /*0x7978fe*/
      {
        v5 -= 100; /*0x7978fe*/
        if ( v5 <= 0 ) /*0x797903*/
          break; /*0x797903*/
        Game::ProcessIdle(); /*0x797909*/
        v6 = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x79791a*/
        if ( v6 != 258 ) /*0x797922*/
          goto LABEL_12; /*0x797922*/
      }
LABEL_25:
      v13 = GetStringCSF(g_Str_TXT_WDT_NET_ERR, 0, g_Str_File_wonline_cpp, 24480); /*0x797a00*/
      ShowDialogConfirm(v13, 0, (int)GameLoop::Thunk, 0); /*0x797a20*/
      v14 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x797a2a*/
      if ( v14 ) /*0x797a31*/
      {
        g_WOL_ChannelList = 0; /*0x797a37*/
        CloseDialog(v14, 0); /*0x797a3d*/
      }
      Current = Dialog::GetCurrent(); /*0x797a42*/
      DlgItem = GetDlgItem(Current, 1344); /*0x797a4d*/
      if ( DlgItem ) /*0x797a55*/
      {
LABEL_43:
        SetFocus(DlgItem); /*0x797b5c*/
        return 0; /*0x797b6a*/
      }
      return 0; /*0x797a55*/
    }
LABEL_12:
    ResetEvent(*(&Handles + v6)); /*0x797924*/
    switch ( v6 ) /*0x797936*/
    {
      case 0u: /*0x797936*/
        v7 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x797956*/
        if ( v7 ) /*0x79795d*/
        {
          g_WOL_ChannelList = 0; /*0x797963*/
          CloseDialog(v7, 0); /*0x797969*/
        }
        v8 = Dialog::GetCurrent(); /*0x79796e*/
        DlgItem = GetDlgItem(v8, 1344); /*0x797979*/
        if ( DlgItem ) /*0x797981*/
          goto LABEL_43; /*0x797981*/
        return 0; /*0x797981*/
      case 5u: /*0x797936*/
        v10 = GetStringCSF(g_Str_TXT_WDT_NET_ERR, 0, g_Str_File_wonline_cpp, 24474); /*0x7979ad*/
        ShowDialogConfirm(v10, 0, (int)GameLoop::Thunk, 0); /*0x7979b6*/
        v11 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x7979c0*/
        if ( v11 ) /*0x7979c7*/
        {
          g_WOL_ChannelList = 0; /*0x7979cd*/
          CloseDialog(v11, 0); /*0x7979d3*/
        }
        v12 = Dialog::GetCurrent(); /*0x7979d8*/
        DlgItem = GetDlgItem(v12, 1344); /*0x7979e3*/
        if ( DlgItem ) /*0x7979eb*/
          goto LABEL_43; /*0x7979eb*/
        return 0; /*0x7979eb*/
      case 0x12u: /*0x797936*/
        goto LABEL_25; /*0x797940*/
    }
  }
  while ( v6 != 11 ); /*0x797949*/
  int v16; // esi
  v16 = (*(int (__stdcall **)(LPVOID, char *, int, int))(*(_DWORD *)g_UIPointerTable + 44))( /*0x797a83*/
          g_UIPointerTable,
          DataGlobal_B73B34,
          dword_B76B0C,
          5);
  Debug::Log(); /*0x797a8a*/
  if ( v16 ) /*0x797a94*/
  {
    v17 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x797a9b*/
    if ( v17 ) /*0x797aa2*/
    {
      g_WOL_ChannelList = 0; /*0x797aa8*/
      CloseDialog(v17, 0); /*0x797aae*/
    }
    v18 = Dialog::GetCurrent(); /*0x797ab3*/
    DlgItem = GetDlgItem(v18, 1344); /*0x797abe*/
    if ( DlgItem ) /*0x797ac6*/
      goto LABEL_43; /*0x797ac6*/
  }
  else
  {
    while ( 1 ) /*0x797ae7*/
    {
      for ( i = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x797aef*/
            i == 258;
            i = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u) )
      {
        Game::ProcessIdle(); /*0x797af1*/
      }
      ResetEvent(*(&Handles + i)); /*0x797b14*/
      if ( !i ) /*0x797b18*/
        break; /*0x797b18*/
      if ( i == 5 ) /*0x797b1d*/
      {
        v22 = GetStringCSF(g_Str_TXT_WDT_NET_ERR, 0, g_Str_File_wonline_cpp, 24507); /*0x797b82*/
        ShowDialogConfirm(v22, 0, (int)GameLoop::Thunk, 0); /*0x797b8b*/
        v23 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x797b95*/
        if ( v23 ) /*0x797b9c*/
        {
          g_WOL_ChannelList = 0; /*0x797ba2*/
          CloseDialog(v23, 0); /*0x797ba8*/
        }
        v24 = Dialog::GetCurrent(); /*0x797bad*/
        v25 = GetDlgItem(v24, 1344); /*0x797bb8*/
        if ( v25 ) /*0x797bc0*/
          SetFocus(v25); /*0x797bc3*/
        return 0; /*0x797bc3*/
      }
      if ( i == 11 ) /*0x797b22*/
      {
        v26 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x797bd6*/
        if ( v26 ) /*0x797bdd*/
        {
          g_WOL_ChannelList = 0; /*0x797be3*/
          CloseDialog(v26, 0); /*0x797be9*/
        }
        v27 = Dialog::GetCurrent(); /*0x797bee*/
        v28 = GetDlgItem(v27, 1344); /*0x797bf9*/
        if ( v28 ) /*0x797c01*/
          SetFocus(v28); /*0x797c04*/
        return 1; /*0x797c0d*/
      }
    }
    v20 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x797b2f*/
    if ( v20 ) /*0x797b36*/
    {
      g_WOL_ChannelList = 0; /*0x797b3c*/
      CloseDialog(v20, 0); /*0x797b42*/
    }
    v21 = Dialog::GetCurrent(); /*0x797b47*/
    DlgItem = GetDlgItem(v21, 1344); /*0x797b52*/
    if ( DlgItem ) /*0x797b5a*/
      goto LABEL_43; /*0x797b5a*/
  }
  return 0; /*0x79789f*/
}
}
} // namespace gamemd

// 0x797C20
namespace gamemd {
AbstractClass * * WOL_InitVersionStrings()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char result; // al
  const char **v1; // esi
  int i; // esi
  char **v12; // ecx
  char **v14; // ecx
  char **v16; // ecx

  result = byte_B77E10; /*0x797c20*/
  if ( !byte_B77E10 ) /*0x797c2a*/
  {
    if ( (byte_B76954 & 1) == 0 ) /*0x797c38*/
    {
      byte_B76954 |= 1u; /*0x797c3d*/
      v1 = &dword_B76914; /*0x797c42*/
      HashTable *v2 = 16; /*0x797c47*/
      do /*0x797c57*/
      {
        unknown_libname_73(v1++); /*0x797c4e*/
        --v2; /*0x797c56*/
      }
      while ( v2 ); /*0x797c57*/
      atexit(sub_798120); /*0x797c5e*/
    }
    String::Assign_Bool((void **)&dword_B76914, a01W024V01); /*0x797c71*/
    String::Assign_Bool((void **)&dword_B76918, a01W026V01); /*0x797c80*/
    String::Assign_Bool((void **)&dword_B7691C, a01W028V01); /*0x797c8f*/
    String::Assign_Bool((void **)&dword_B76920, a01W018V01); /*0x797c9e*/
    String::Assign_Bool((void **)&dword_B76924, a01W020V01); /*0x797cad*/
    String::Assign_Bool((void **)&dword_B76928, a01W022V01); /*0x797cbc*/
    String::Assign_Bool((void **)&dword_B7692C, a00W022V00); /*0x797ccb*/
    String::Assign_Bool((void **)&dword_B76930, a00W024V00); /*0x797cda*/
    String::Assign_Bool((void **)&dword_B76934, a00W026V00); /*0x797ce9*/
    String::Assign_Bool((void **)&dword_B76938, a00W017V00); /*0x797cf8*/
    String::Assign_Bool((void **)&dword_B7693C, a00W018V00); /*0x797d07*/
    String::Assign_Bool((void **)&dword_B76940, a00W020V00); /*0x797d16*/
    String::Assign_Bool((void **)&dword_B76944, a01W032V01); /*0x797d25*/
    String::Assign_Bool((void **)&dword_B76948, a01W030V01); /*0x797d34*/
    String::Assign_Bool((void **)&dword_B7694C, a00W031V00); /*0x797d43*/
    String::Assign_Bool((void **)&dword_B76950, a00W029V00); /*0x797d52*/
    for ( i = 0; i < dword_B73BD8; ++i ) /*0x797d60*/
      Object::DtorWithDelete((void **)dword_B73BE0 + i, 0); /*0x797d6b*/
    int v4 = 0; /*0x797d7f*/
    for ( dword_B73BD8 = 0; v4 < dword_B736F8; ++v4 ) /*0x797d89*/
      Object::DtorWithDelete((void **)dword_B73700 + v4, 0); /*0x797d95*/
    int v5 = 0; /*0x797da9*/
    for ( dword_B736F8 = 0; v5 < dword_B76B00; ++v5 ) /*0x797db3*/
      Object::DtorWithDelete((void **)dword_B76B08 + v5, 0); /*0x797dbf*/
    int v6 = 0; /*0x797dd3*/
    for ( dword_B76B00 = 0; v6 < dword_B76510; ++v6 ) /*0x797ddd*/
      Object::DtorWithDelete((void **)dword_B76518 + v6, 0); /*0x797de8*/
    int v7 = 0; /*0x797dfc*/
    for ( dword_B76510 = 0; v7 < DataGlobal_B73AE8; ++v7 ) /*0x797e06*/
      Object::DtorWithDelete((void **)DataGlobal_B73AF0 + v7, 0); /*0x797e12*/
    int v8 = 0; /*0x797e26*/
    for ( DataGlobal_B73AE8 = 0; v8 < dword_B77820; ++v8 ) /*0x797e30*/
      Object::DtorWithDelete((void **)dword_B77828 + v8, 0); /*0x797e3c*/
    int v9 = 0; /*0x797e50*/
    for ( dword_B77820 = 0; v9 < dword_B73708; ++v9 ) /*0x797e5a*/
      Object::DtorWithDelete((void **)dword_B73710 + v9, 0); /*0x797e65*/
    int v10 = 0; /*0x797e79*/
    for ( dword_B73708 = 0; v10 < dword_B76188; ++v10 ) /*0x797e83*/
      Object::DtorWithDelete((void **)dword_B76190 + v10, 0); /*0x797e8f*/
    dword_B76188 = 0; /*0x797ea9*/
    StringVector::Insert(&dword_B73BD8, &dword_B76914, 0); /*0x797eaf*/
    StringVector::Insert(&dword_B73BD8, &dword_B76918, 0); /*0x797ebf*/
    StringVector::Insert(&dword_B73BD8, &dword_B7691C, 0); /*0x797ecf*/
    StringVector::Insert(&dword_B76B00, &dword_B76920, 0); /*0x797edf*/
    StringVector::Insert(&dword_B76B00, &dword_B76924, 0); /*0x797eef*/
    StringVector::Insert(&dword_B76B00, &dword_B76928, 0); /*0x797eff*/
    StringVector::Insert(&dword_B736F8, &dword_B7692C, 0); /*0x797f0f*/
    StringVector::Insert(&dword_B736F8, &dword_B76930, 0); /*0x797f1f*/
    StringVector::Insert(&dword_B736F8, &dword_B76934, 0); /*0x797f2f*/
    StringVector::Insert(&dword_B76510, &dword_B76938, 0); /*0x797f3f*/
    StringVector::Insert(&dword_B76510, &dword_B7693C, 0); /*0x797f4f*/
    StringVector::Insert(&dword_B76510, &dword_B76940, 0); /*0x797f5f*/
    StringVector::Insert(&DataGlobal_B73AE8, &dword_B76944, 0); /*0x797f6f*/
    BlowStraw *v11 = 0; /*0x797f79*/
    if ( dword_B73708 < 0 ) /*0x797f7d*/
      v11 = dword_B73708; /*0x797f7f*/
    if ( v11 >= dword_B7370C ) /*0x797f87*/
      DynamicVector::EnsureCapacity(&dword_B73708); /*0x797f8e*/
    if ( dword_B73708 >= dword_B7370C ) /*0x797fa0*/
      DynamicVector::EnsureCapacity(&dword_B73708); /*0x797fa7*/
    if ( v11 < dword_B73708 ) /*0x797fb3*/
      memcpy((char *)dword_B73710 + 4 * v11 + 4, (char *)dword_B73710 + 4 * v11, 4 * (dword_B73708 + 0x3FFFFFFF * v11)); /*0x797fd0*/
    v12 = (char **)((char *)dword_B73710 + 4 * v11); /*0x797fde*/
    if ( v12 ) /*0x797fe3*/
      String::AssignFromPtr(v12, &dword_B76948); /*0x797fea*/
    BlowStraw *v13 = 0; /*0x797ffb*/
    ++dword_B73708; /*0x797fff*/
    if ( dword_B77820 < 0 ) /*0x798005*/
      v13 = dword_B77820; /*0x798007*/
    if ( v13 >= dword_B77824 ) /*0x79800f*/
      DynamicVector::EnsureCapacity(&dword_B77820); /*0x798016*/
    if ( dword_B77820 >= dword_B77824 ) /*0x798028*/
      DynamicVector::EnsureCapacity(&dword_B77820); /*0x79802f*/
    if ( v13 < dword_B77820 ) /*0x79803b*/
      memcpy((char *)dword_B77828 + 4 * v13 + 4, (char *)dword_B77828 + 4 * v13, 4 * (dword_B77820 + 0x3FFFFFFF * v13)); /*0x798058*/
    v14 = (char **)((char *)dword_B77828 + 4 * v13); /*0x798066*/
    if ( v14 ) /*0x79806b*/
      String::AssignFromPtr(v14, &dword_B7694C); /*0x798072*/
    BlowStraw *v15 = 0; /*0x798083*/
    ++dword_B77820; /*0x798087*/
    if ( dword_B76188 < 0 ) /*0x79808d*/
      v15 = dword_B76188; /*0x79808f*/
    if ( v15 >= dword_B7618C ) /*0x798097*/
      DynamicVector::EnsureCapacity(&dword_B76188); /*0x79809e*/
    if ( dword_B76188 >= dword_B7618C ) /*0x7980b0*/
      DynamicVector::EnsureCapacity(&dword_B76188); /*0x7980b7*/
    if ( v15 < dword_B76188 ) /*0x7980c3*/
      memcpy((char *)dword_B76190 + 4 * v15 + 4, (char *)dword_B76190 + 4 * v15, 4 * (dword_B76188 + 0x3FFFFFFF * v15)); /*0x7980e0*/
    v16 = (char **)((char *)dword_B76190 + 4 * v15); /*0x7980ee*/
    if ( v16 ) /*0x7980f4*/
      String::AssignFromPtr(v16, &dword_B76950); /*0x7980fb*/
    byte_B77E10 = 1; /*0x798105*/
    return ++dword_B76188; /*0x79810c*/
  }
  return result; /*0x798112*/
}
}
} // namespace gamemd

// 0x7982D0
namespace gamemd {
int sub_7982D0(int a1, DWORD a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  CreateGameDialogControl *v4; // ecx
  DWORD v5; // esi

  int v3 = 1000 * a1; /*0x7982ef*/
  v5 = WaitForMultipleObjects(a2, (const HANDLE *)&Handles, 0, 0x64u); /*0x7982f4*/
  if ( v5 == 258 ) /*0x7982fc*/
  {
    while ( 1 ) /*0x7982fe*/
    {
      v3 -= 100; /*0x7982fe*/
      if ( v3 <= 0 ) /*0x798303*/
        return 18; /*0x798338*/
      Game::ProcessIdle(v4); /*0x798305*/
      v5 = WaitForMultipleObjects(a2, (const HANDLE *)&Handles, 0, 0x64u); /*0x798316*/
      if ( v5 != 258 ) /*0x79831e*/
        goto LABEL_4; /*0x79831e*/
    }
  }
  else
  {
LABEL_4:
    ResetEvent(*(&Handles + v5)); /*0x798320*/
    return v5; /*0x79832e*/
  }
}
}
} // namespace gamemd

// 0x7983E0
namespace gamemd {
void Multiplayer_Setup2_DlgProc(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  LONG WindowLongA; // ecx
  HWND DlgItem; // ebx
  HWND v7; // eax
  HWND v8; // ebx
  HWND v9; // eax
  HWND v10; // ebx
  HWND v11; // eax
  HWND v12; // ebx
  HWND v13; // eax
  HWND v14; // ebx
  HWND v15; // eax
  HWND v16; // ebx
  HWND v17; // eax
  HWND v18; // ebx
  HWND v19; // eax
  HWND v20; // ebx
  HWND v21; // eax
  HWND v22; // ebx
  HWND v23; // eax
  HWND v24; // ebx
  HWND v25; // eax
  HWND v26; // ebx
  HWND v27; // eax
  HWND v28; // ebx
  HWND v29; // eax
  HWND v30; // esi
  HWND v31; // eax
  LSTATUS v32; // esi
  HKEY phkResult; // [esp+10h] [ebp-20Ch] BYREF
  DWORD cbData; // [esp+14h] [ebp-208h] BYREF
  DWORD Type; // [esp+18h] [ebp-204h] BYREF
  BYTE Data[512]; // [esp+1Ch] [ebp-200h] BYREF

  if ( a2 == 272 && a4 ) /*0x798409*/
    SetWindowLongA(hWnd, 8, *(_DWORD *)(a4 + 4)); /*0x798412*/
  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x798425*/
  if ( !result ) /*0x79842c*/
  {
    WindowLongA = GetWindowLongA(hWnd, 8); /*0x79843e*/
    if ( a2 > 0x2B ) /*0x798440*/
    {
      if ( a2 == 273 ) /*0x7984ac*/
      {
        if ( (unsigned __int16)a3 > 0x6E1u ) /*0x798723*/
        {
          switch ( (unsigned __int16)a3 ) /*0x798833*/
          {
            case 0x6E2u: /*0x798833*/
              g_GameOptionsFlags = 5; /*0x798887*/
              DataGlobal_A8B248 = 0; /*0x798891*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1762); /*0x7988a3*/
              break;
            case 0x6E3u: /*0x798833*/
              g_GameOptionsFlags = 3; /*0x798863*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1763); /*0x798875*/
              return 0; /*0x798884*/
            case 0x771u: /*0x798833*/
              g_GameOptionsFlags = 2; /*0x79883f*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1905); /*0x798851*/
              return 0; /*0x798860*/
          }
        }
        else
        {
          switch ( (unsigned __int16)a3 ) /*0x798729*/
          {
            case 0x6E1u: /*0x798729*/
              g_GameOptionsFlags = 4; /*0x79880a*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1761); /*0x79881c*/
              return 0; /*0x79882b*/
            case 0x55Fu: /*0x798729*/
              if ( !RegOpenKeyExA(HKEY_LOCAL_MACHINE, g_Str_WOL_URL_RegKey, 0, 0x20019u, &phkResult) ) /*0x7987a4*/
              {
                cbData = 512; /*0x7987cd*/
                v32 = RegQueryValueExA(phkResult, g_INI_Key_Community, 0, &Type, Data, &cbData); /*0x7987db*/
                RegCloseKey(phkResult); /*0x7987e2*/
                if ( !v32 ) /*0x7987ea*/
                {
                  OpenURLWOL((const char *)Data, 0); /*0x7987f6*/
                  return 0; /*0x798807*/
                }
              }
              break;
            case 0x686u: /*0x798729*/
              g_GameOptionsFlags = 0; /*0x79876a*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1670); /*0x79877c*/
              return 0; /*0x79878b*/
            case 0x6E0u: /*0x798729*/
              g_GameOptionsFlags = 1; /*0x798746*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1760); /*0x798758*/
              return 0; /*0x798767*/
          }
        }
      }
      else if ( a2 == 1175 ) /*0x7984b8*/
      {
        DlgItem = GetDlgItem(hWnd, 1862); /*0x7984d8*/
        v7 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_gt18_pcx, 0); /*0x7984da*/
        if ( DlgItem && v7 ) /*0x7984e5*/
          CacheDialogInvalidate(DlgItem, v7); /*0x7984eb*/
        v8 = GetDlgItem(hWnd, 1864); /*0x798504*/
        v9 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_wolclan_pcx, 0); /*0x798506*/
        if ( v8 && v9 ) /*0x798511*/
          CacheDialogInvalidate(v8, v9); /*0x798517*/
        v10 = GetDlgItem(hWnd, 1865); /*0x798530*/
        v11 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_wolreslk_pcx, 0); /*0x798532*/
        if ( v10 && v11 ) /*0x79853d*/
          CacheDialogInvalidate(v10, v11); /*0x798543*/
        v12 = GetDlgItem(hWnd, 1866); /*0x79855c*/
        v13 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_wolob_pcx, 0); /*0x79855e*/
        if ( v12 && v13 ) /*0x798569*/
          CacheDialogInvalidate(v12, v13); /*0x79856f*/
        v14 = GetDlgItem(hWnd, 1874); /*0x798588*/
        v15 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_wolpriv_pcx, 0); /*0x79858a*/
        if ( v14 && v15 ) /*0x798595*/
          CacheDialogInvalidate(v14, v15); /*0x79859b*/
        v16 = GetDlgItem(hWnd, 1884); /*0x7985b4*/
        v17 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_pingg_pcx, 0); /*0x7985b6*/
        if ( v16 && v17 ) /*0x7985c1*/
          CacheDialogInvalidate(v16, v17); /*0x7985c7*/
        v18 = GetDlgItem(hWnd, 1885); /*0x7985e0*/
        v19 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_pingy_pcx, 0); /*0x7985e2*/
        if ( v18 && v19 ) /*0x7985ed*/
          CacheDialogInvalidate(v18, v19); /*0x7985f3*/
        v20 = GetDlgItem(hWnd, 1886); /*0x79860c*/
        v21 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_pingr_pcx, 0); /*0x79860e*/
        if ( v20 && v21 ) /*0x798619*/
          CacheDialogInvalidate(v20, v21); /*0x79861f*/
        v22 = GetDlgItem(hWnd, 1950); /*0x798638*/
        v23 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_number1_pcx, 0); /*0x79863a*/
        if ( v22 && v23 ) /*0x798645*/
          CacheDialogInvalidate(v22, v23); /*0x79864b*/
        v24 = GetDlgItem(hWnd, 1951); /*0x798664*/
        v25 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_number0_pcx, 0); /*0x798666*/
        if ( v24 && v25 ) /*0x798671*/
          CacheDialogInvalidate(v24, v25); /*0x798677*/
        v26 = GetDlgItem(hWnd, 1952); /*0x798690*/
        v27 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_number0_pcx, 0); /*0x798692*/
        if ( v26 && v27 ) /*0x79869d*/
          CacheDialogInvalidate(v26, v27); /*0x7986a3*/
        v28 = GetDlgItem(hWnd, 1953); /*0x7986bc*/
        v29 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_cooperat_pcx, 0); /*0x7986be*/
        if ( v28 && v29 ) /*0x7986c9*/
          CacheDialogInvalidate(v28, v29); /*0x7986cf*/
        v30 = GetDlgItem(hWnd, 1954); /*0x7986e8*/
        v31 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_comchief_pcx, 0); /*0x7986ea*/
        if ( v30 ) /*0x7986f1*/
        {
          if ( v31 ) /*0x7986f9*/
          {
            CacheDialogInvalidate(v30, v31); /*0x798703*/
            return 0; /*0x798714*/
          }
        }
      }
    }
    else
    {
      switch ( a2 ) /*0x798442*/
      {
        case 0x2Bu: /*0x798442*/
          Dialog::Resize((char *)a4); /*0x79848f*/
          return 1; /*0x7984a3*/
        case 0xFu: /*0x798442*/
          Dialog::DrawBackground(hWnd); /*0x798466*/
          Dialog::StopBink(hWnd); /*0x79846d*/
          ValidateRect(hWnd, 0); /*0x798475*/
          return 1; /*0x79848a*/
        case 0x14u: /*0x798442*/
          return 1; /*0x798461*/
      }
    }
    return 0; /*0x7988a6*/
  }
  return result; /*0x798452*/
}
}
} // namespace gamemd

// 0x7988C0
namespace gamemd {
void Multiplayer_GameMode_DlgProc(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  LONG WindowLongA; // ecx
  HWND DlgItem; // ebx
  HWND v7; // eax
  HWND v8; // ebx
  HWND v9; // eax
  HWND v10; // ebx
  HWND v11; // eax
  HWND v12; // ebx
  HWND v13; // eax
  HWND v14; // ebx
  HWND v15; // eax
  HWND v16; // ebx
  HWND v17; // eax
  HWND v18; // ebx
  HWND v19; // eax
  HWND v20; // ebx
  HWND v21; // eax
  HWND v22; // ebx
  HWND v23; // eax
  HWND v24; // ebx
  HWND v25; // eax
  HWND v26; // ebx
  HWND v27; // eax
  HWND v28; // ebx
  HWND v29; // eax
  HWND v30; // esi
  HWND v31; // eax
  LSTATUS v32; // esi
  HKEY phkResult; // [esp+10h] [ebp-210h] BYREF
  DWORD Type; // [esp+14h] [ebp-20Ch] BYREF
  DWORD cbData; // [esp+1Ch] [ebp-204h] BYREF
  BYTE Data[512]; // [esp+20h] [ebp-200h] BYREF

  if ( a2 == 272 && a4 ) /*0x7988e9*/
    SetWindowLongA(hWnd, 8, *(_DWORD *)(a4 + 4)); /*0x7988f2*/
  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x798905*/
  if ( !result ) /*0x79890c*/
  {
    WindowLongA = GetWindowLongA(hWnd, 8); /*0x79891e*/
    if ( a2 > 0x2B ) /*0x798920*/
    {
      if ( a2 == 273 ) /*0x79898c*/
      {
        if ( (unsigned __int16)a3 > 0x6E1u ) /*0x798c45*/
        {
          switch ( (unsigned __int16)a3 ) /*0x798d55*/
          {
            case 0x6E2u: /*0x798d55*/
              g_GameOptionsFlags = 5; /*0x798dab*/
              DataGlobal_A8B248 = 0; /*0x798db5*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1762); /*0x798dc7*/
              break;
            case 0x6E4u: /*0x798d55*/
              g_GameOptionsFlags = 6; /*0x798d87*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1764); /*0x798d99*/
              return 0; /*0x798da8*/
            case 0x771u: /*0x798d55*/
              g_GameOptionsFlags = 2; /*0x798d63*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1905); /*0x798d75*/
              return 0; /*0x798d84*/
          }
        }
        else
        {
          switch ( (unsigned __int16)a3 ) /*0x798c4b*/
          {
            case 0x6E1u: /*0x798c4b*/
              g_GameOptionsFlags = 4; /*0x798d2c*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1761); /*0x798d3e*/
              return 0; /*0x798d4d*/
            case 0x55Fu: /*0x798c4b*/
              if ( !RegOpenKeyExA(HKEY_LOCAL_MACHINE, g_Str_WOL_URL_RegKey, 0, 0x20019u, &phkResult) ) /*0x798cc6*/
              {
                cbData = 512; /*0x798cef*/
                v32 = RegQueryValueExA(phkResult, g_INI_Key_Community, 0, &Type, Data, &cbData); /*0x798cfd*/
                RegCloseKey(phkResult); /*0x798d04*/
                if ( !v32 ) /*0x798d0c*/
                {
                  OpenURLWOL((const char *)Data, 0); /*0x798d18*/
                  return 0; /*0x798d29*/
                }
              }
              break;
            case 0x686u: /*0x798c4b*/
              g_GameOptionsFlags = 0; /*0x798c8c*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1670); /*0x798c9e*/
              return 0; /*0x798cad*/
            case 0x6E0u: /*0x798c4b*/
              g_GameOptionsFlags = 1; /*0x798c68*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1760); /*0x798c7a*/
              return 0; /*0x798c89*/
          }
        }
      }
      else if ( a2 == 1175 ) /*0x798998*/
      {
        if ( String::Length((const char **)&g_WebBrowser) ) /*0x7989a3*/
        {
          LoadPlayerProfile(&Type, (const char **)&g_WebBrowser); /*0x7989b5*/
  int v35; // [esp+18h] [ebp-208h]
          if ( v35 ) /*0x7989c0*/
            FillPersonaInfoWOL(v35, hWnd, (char **)&g_WebBrowser, (wchar_t **)1); /*0x7989ca*/
          Type = (DWORD)&vt_rc_ptr_PlayerProfile; /*0x7989d3*/
          ComPtr::Release(&Type); /*0x7989db*/
        }
        DlgItem = GetDlgItem(hWnd, 1862); /*0x7989fa*/
        v7 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_gt18_pcx, 0); /*0x7989fc*/
        if ( DlgItem && v7 ) /*0x798a07*/
          CacheDialogInvalidate(DlgItem, v7); /*0x798a0d*/
        v8 = GetDlgItem(hWnd, 1864); /*0x798a26*/
        v9 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_wolclan_pcx, 0); /*0x798a28*/
        if ( v8 && v9 ) /*0x798a33*/
          CacheDialogInvalidate(v8, v9); /*0x798a39*/
        v10 = GetDlgItem(hWnd, 1865); /*0x798a52*/
        v11 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_wolreslk_pcx, 0); /*0x798a54*/
        if ( v10 && v11 ) /*0x798a5f*/
          CacheDialogInvalidate(v10, v11); /*0x798a65*/
        v12 = GetDlgItem(hWnd, 1866); /*0x798a7e*/
        v13 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_wolob_pcx, 0); /*0x798a80*/
        if ( v12 && v13 ) /*0x798a8b*/
          CacheDialogInvalidate(v12, v13); /*0x798a91*/
        v14 = GetDlgItem(hWnd, 1874); /*0x798aaa*/
        v15 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_wolpriv_pcx, 0); /*0x798aac*/
        if ( v14 && v15 ) /*0x798ab7*/
          CacheDialogInvalidate(v14, v15); /*0x798abd*/
        v16 = GetDlgItem(hWnd, 1884); /*0x798ad6*/
        v17 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_pingg_pcx, 0); /*0x798ad8*/
        if ( v16 && v17 ) /*0x798ae3*/
          CacheDialogInvalidate(v16, v17); /*0x798ae9*/
        v18 = GetDlgItem(hWnd, 1885); /*0x798b02*/
        v19 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_pingy_pcx, 0); /*0x798b04*/
        if ( v18 && v19 ) /*0x798b0f*/
          CacheDialogInvalidate(v18, v19); /*0x798b15*/
        v20 = GetDlgItem(hWnd, 1886); /*0x798b2e*/
        v21 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_pingr_pcx, 0); /*0x798b30*/
        if ( v20 && v21 ) /*0x798b3b*/
          CacheDialogInvalidate(v20, v21); /*0x798b41*/
        v22 = GetDlgItem(hWnd, 1950); /*0x798b5a*/
        v23 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_number1_pcx, 0); /*0x798b5c*/
        if ( v22 && v23 ) /*0x798b67*/
          CacheDialogInvalidate(v22, v23); /*0x798b6d*/
        v24 = GetDlgItem(hWnd, 1951); /*0x798b86*/
        v25 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_number0_pcx, 0); /*0x798b88*/
        if ( v24 && v25 ) /*0x798b93*/
          CacheDialogInvalidate(v24, v25); /*0x798b99*/
        v26 = GetDlgItem(hWnd, 1952); /*0x798bb2*/
        v27 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_number0_pcx, 0); /*0x798bb4*/
        if ( v26 && v27 ) /*0x798bbf*/
          CacheDialogInvalidate(v26, v27); /*0x798bc5*/
        v28 = GetDlgItem(hWnd, 1953); /*0x798bde*/
        v29 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_cooperat_pcx, 0); /*0x798be0*/
        if ( v28 && v29 ) /*0x798beb*/
          CacheDialogInvalidate(v28, v29); /*0x798bf1*/
        v30 = GetDlgItem(hWnd, 1954); /*0x798c0a*/
        v31 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_comchief_pcx, 0); /*0x798c0c*/
        if ( v30 ) /*0x798c13*/
        {
          if ( v31 ) /*0x798c1b*/
          {
            CacheDialogInvalidate(v30, v31); /*0x798c25*/
            return 0; /*0x798c36*/
          }
        }
      }
    }
    else
    {
      switch ( a2 ) /*0x798922*/
      {
        case 0x2Bu: /*0x798922*/
          Dialog::Resize((char *)a4); /*0x79896f*/
          return 1; /*0x798983*/
        case 0xFu: /*0x798922*/
          Dialog::DrawBackground(hWnd); /*0x798946*/
          Dialog::StopBink(hWnd); /*0x79894d*/
          ValidateRect(hWnd, 0); /*0x798955*/
          return 1; /*0x79896a*/
        case 0x14u: /*0x798922*/
          return 1; /*0x798941*/
      }
    }
    return 0; /*0x798dca*/
  }
  return result; /*0x798932*/
}
}
} // namespace gamemd

// 0x799080
namespace gamemd {
void MainLobbyDlgProcWOL(HWND hWnd, LPARAM lParam, ObjectClass a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  HWND v5; // esi
  int result; // eax
  LONG WindowLongA; // eax
  HWND v9; // ebx
  LRESULT v10; // eax
  LPARAM v11; // ebp
  HWND v14; // eax
  HWND v16; // eax
  LRESULT v17; // esi
  LRESULT v18; // eax
  LRESULT v19; // esi
  LRESULT v20; // eax
  LRESULT v21; // esi
  LRESULT v22; // eax
  ObjectClass *v24; // eax
  bool bl62; // bl
  LRESULT v26; // eax
  HWND v27; // edi
  LRESULT v28; // ebx
  ObjectClass *v29; // eax
  ObjectClass *v30; // eax
  LRESULT v31; // eax
  HWND v32; // eax
  ObjectClass *v33; // esi
  HWND DlgItem; // ebp
  wchar_t *StringCSF; // eax
  CampaignScore *v37; // eax
  CampaignScore *v38; // edi
  CampaignScore *v39; // eax
  LRESULT v40; // eax
  HWND v41; // eax
  HWND v42; // eax
  LRESULT v43; // eax
  HWND v45; // eax
  HWND v46; // eax
  HWND v47; // eax
  HWND v48; // eax
  WPARAM v49; // [esp-8h] [ebp-50h]
  char **v52; // [esp-4h] [ebp-4Ch]
  ObjectClass *v53; // [esp+10h] [ebp-38h] BYREF
  ObjectClass *v56; // [esp+18h] [ebp-30h] BYREF
  ObjectClass *v57; // [esp+1Ch] [ebp-2Ch] BYREF
  int var28; // [esp+20h] [ebp-28h] BYREF
  rc_ptr_base v63; // [esp+38h] [ebp-10h] BYREF
  rc_ptr_base v65; // [esp+40h] [ebp-8h] BYREF
  unsigned int v3 = lParam;
  char * v4 = *(char **)&a3[4];
  v5 = hWnd;
  if ( lParam == 272 && *(_DWORD *)&a3[4] )
    SetWindowLongA(hWnd, 8, *(_DWORD *)(*(_DWORD *)&a3[4] + 4));
  unsigned int v6 = *(_DWORD *)a3[0];
  result = BaseDialogProc((SkirmishDialog *)v5, v3, *(int *)a3[0], (unsigned int)v4);
  if ( !result )
  {
  int v64; // [esp+3Ch] [ebp-Ch]
    WindowLongA = GetWindowLongA(v5, 8);
    if ( v3 > 0x111 )
    {
      unsigned int v34 = v3 - 1175;
      if ( v34 )
      {
        if ( v34 == 86 )
        {
          ShowWindow(v5, 0);
          Dialog::InitWindow((SkirmishDialog *)v5, 1);
          return 0;
        }
      }
      else
      {
        DlgItem = GetDlgItem(v5, 1576);
        ListBox::Clear(DlgItem);
        SendMessageA(DlgItem, 0x141u, 9u, 0);
        StringCSF = GetStringCSF(aGuiDefault, 0, (CampaignScore *)g_Str_File_wonline_cpp, 25247);
        WideString::Assign((wchar_t **)&v56, (CampaignScore *)StringCSF);
        v37 = WideString::GetOrEmpty_Alt((wchar_t **)&v56);
        v38 = (CampaignScore *)SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)v37);
        SendMessageA(DlgItem, 0x151u, (WPARAM)v38, -1);
        SendMessageA(DlgItem, 0x14Eu, (WPARAM)v38, 0);
        for ( lParam = 1; lParam <= 32; ++lParam )
        {
          hWnd = 0;
          v63.vfptr = 0;
          if ( !(*(int (__stdcall **)(_DWORD, LPARAM, HWND *, rc_ptr_base *))((*(&g_MatrixTransformState + 2263))->X
                                                                            + 144))(
                  *(&g_MatrixTransformState + 2263),
                  lParam,
                  &hWnd,
                  &v63)
            && hWnd
            && strlen((const char *)hWnd) )
          {
  char *a1; // [esp+24h] [ebp-24h] BYREF
            String::Assign(&a1, (const char *)hWnd);
            CharStringToWide((ObjectClass *)&a3[4], (const char **)&a1);
            DeleteAndZero((int)&a1);
            v39 = WideString::GetOrEmpty_Alt((wchar_t **)&a3[4]);
            v40 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)v39);
            SendMessageA(DlgItem, 0x151u, v40, lParam);
            DeleteAndZero::Alt((void **)&a3[4]);
          }
        }
        v41 = GetDlgItem(v5, 1578);
        MainLobbyDlgProcWOL_Read(v41);
        FillComboBoxRandomOnly(v5, 1697);
        InitGameDropdownColors();
        FillComboBoxFactions(v5, 1698);
        v42 = GetDlgItem(v5, 1577);
        PopulateWOLUserList(v42, 1);
        LoadPlayerProfile(&v65, (const char **)&g_WebBrowser);
  int v66; // [esp+44h] [ebp-4h]
        if ( v66 )
          FillPersonaInfoWOL(v66, v5, &g_WebBrowser, (wchar_t **)1);
        lParam = -1;
        v43 = SendMessageA(DlgItem, 0x147u, 0, 0);
        if ( v43 != -1 )
          lParam = SendMessageA(DlgItem, 0x150u, v43, 0);
        BOOL v44 = lParam != -1;
        v45 = GetDlgItem(v5, 1771);
        EnableWindow(v45, v44);
        v46 = GetDlgItem(v5, 1671);
        EnableWindow(v46, v44);
        v47 = GetDlgItem(v5, 1791);
        EnableWindow(v47, v44);
        ReadAutoLoginWOL((char **)&v57);
        v49 = String::Compare((const char **)&v57, (const char **)&g_WebBrowser);
        v48 = GetDlgItem(v5, 1791);
        SendMessageA(v48, 0xF1u, v49, 0);
        DeleteAndZero((int)&v57);
        v65.vfptr = &vt_rc_ptr_PlayerProfile;
        ComPtr::Release(&v65);
        DeleteAndZero::Alt((void **)&v56);
      }
      return 0;
    }
    if ( v3 != 273 )
    {
      switch ( v3 )
      {
        case 0xFu:
          Dialog::DrawBackground(v5);
          Dialog::StopBink(v5);
          ValidateRect(v5, 0);
          break;
        case 0x14u:
          break;
        case 0x2Bu:
          Dialog::Resize(v4);
          return 1;
        default:
          return 0;
      }
      return 1;
    }
    if ( (unsigned __int16)v6 > 0x6A2u )
    {
      switch ( (__int16)v6 )
      {
        case 1770:
          CreateAccountWOL(v5, 273, (int)v4);
          result = 0;
          break;
        case 1771:
          v27 = GetDlgItem(v5, 1576);
          v28 = SendMessageA(v27, 0x147u, 0, 0);
          if ( v28 != -1 )
          {
            unknown_libname_74(&a3[4]);
            MainLobbyDlgProcWOL_Assign(v27, v28, (void **)&a3[4]);
            ToWideStringCharAlt((char **)&hWnd, (const wchar_t **)&a3[4]);
            String::ToLower((const char **)&hWnd);
            ReadAutoLoginWOL((char **)&v57);
            ObjectClass *v61 = (ObjectClass *)String::ToLowerCopy((const char **)&v57, (ObjectClass *)&v61);
            LOBYTE(lParam) = String::Compare((const char **)&hWnd, (const char **)v29);
            DeleteAndZero((int)&v61);
            if ( (_BYTE)lParam )
            {
              String::Assign((char **)&v53, &stru_87C374[56304]);
              ReadSettingsWOL((ObjectClass *)&v53);
              DeleteAndZero((int)&v53);
            }
            LoadConfigWOL((char **)&v56);
            ObjectClass *v62 = (ObjectClass *)String::ToLowerCopy((const char **)&v56, (ObjectClass *)&v62);
            LOBYTE(lParam) = String::Compare((const char **)&hWnd, (const char **)v30);
            DeleteAndZero((int)&v62);
            if ( (_BYTE)lParam )
            {
  int v54; // [esp+14h] [ebp-34h] BYREF
              String::Assign((char **)&v54, &stru_87C374[56304]);
              SavePersonaConfigWOL((ObjectClass *)&v54);
              DeleteAndZero((int)&v54);
            }
            v31 = SendMessageA(v27, 0x150u, v28, 0);
            if ( v31 != -1 )
            {
              (*(void (__stdcall **)(_DWORD, LRESULT, char *, char *, int))((*(&g_MatrixTransformState + 2263))->X + 148))(
                *(&g_MatrixTransformState + 2263),
                v31,
                &stru_87C374[56304],
                &stru_87C374[56304],
                1);
              SendMessageA(v27, 0x144u, v28, 0);
            }
            SendMessageA(v27, 0x14Eu, 0xFFFFFFFF, 0);
            DeleteAndZero((int)&v56);
            DeleteAndZero((int)&v57);
            DeleteAndZero((int)&hWnd);
            DeleteAndZero::Alt((void **)&a3[4]);
          }
          MainLobbyDlgProcWOL_Get(v5, 1);
          InvalidateRect(v27, 0, 0);
          v32 = GetDlgItem(v5, 1771);
          EnableWindow(v32, 0);
          SendMessageA(v27, 0x14Eu, 0, 0);
          LoadAccountInfoWOL(&v63);
          if ( v64 )
          {
            String::Assign((char **)&var28, &stru_87C374[56304]);
            FillPersonaInfoWOL(v64, v5, (ObjectClass *)&var28, 0);
            DeleteAndZero((int)&var28);
            v33 = (ObjectClass *)GetDlgItem(v5, 1791);
            SendMessageA((HWND)v33, 0x49Du, 0, 1);
            EnableWindow((HWND)v33, 0);
            SendMessageA((HWND)v33, 0xF1u, 0, 0);
            SendMessageA((HWND)v33, 0x49Du, 0, 0);
            InvalidateRect((HWND)v33, 0, 0);
          }
          v63.vfptr = &vt_rc_ptr_PlayerProfile;
          ComPtr::Release(&v63);
          result = 0;
          break;
        case 1772:
          WebBrowser::ShowDialog(g_INI_Key_Manage);
          result = 0;
          break;
        case 1791:
          if ( SendMessageA((HWND)v4, 0xF0u, 0, 0) == 1 )
          {
            ReadSettingsWOL(&g_WebBrowser);
            result = 0;
          }
          else
          {
            ReadAutoLoginWOL((char **)&lParam);
            int v60 = String::ToLowerCopy((const char **)&g_WebBrowser, (ObjectClass *)&v60);
            ObjectClass *v59 = (ObjectClass *)String::ToLowerCopy((const char **)&lParam, (ObjectClass *)&v59);
            bl62 = String::Compare((const char **)v24, (const char **)v52);
            DeleteAndZero((int)&v59);
            DeleteAndZero((int)&v60);
            if ( bl62 )
            {
              String::Assign((char **)&a3, &stru_87C374[56304]);
              ReadSettingsWOL(&a3);
              DeleteAndZero((int)&a3);
            }
            DeleteAndZero((int)&lParam);
            result = 0;
          }
          break;
        case 1907:
          LoadPlayerProfile(&v63, (const char **)&g_WebBrowser);
          _BYTE * v25 = (_BYTE *)v64;
          if ( v64 )
          {
            v26 = SendMessageA((HWND)v4, 0xF0u, 0, 0);
            MainLobbyDlgProcWOL_Helper(v25, v26 == 1);
            SaveProfileWOL(v64, &g_WebBrowser);
          }
          goto LABEL_67;
        case 1955:
          WebBrowser::ShowDialog(g_INI_Key_Ladder);
          result = 0;
          break;
        default:
          return 0;
      }
    }
    else
    {
      if ( (unsigned __int16)v6 != 1698 )
      {
        switch ( (__int16)v6 )
        {
          case 1576:
            if ( HIWORD(v6) != 1 )
              return 0;
            v9 = GetDlgItem(v5, 1791);
            SendMessageA(v9, 0x49Du, 0, 1);
            ShowWindow(v9, 0);
            v10 = SendMessageA((HWND)v4, 0x147u, 0, 0);
            lParam = -1;
            if ( v10 != -1 )
              lParam = SendMessageA((HWND)v4, 0x150u, v10, 0);
            DeleteAndZero::Alt2((void **)&g_WebBrowser);
            v11 = lParam;
            if ( lParam != -1 )
            {
              lParam = 0;
              *(_DWORD *)&a3[4] = 0;
              if ( !(*(int (__stdcall **)(_DWORD, LPARAM, LPARAM *, char *))((*(&g_MatrixTransformState + 2263))->X + 144))(
                      *(&g_MatrixTransformState + 2263),
                      v11,
                      &lParam,
                      &a3[4]) )
                String::Assign_Alt((void **)&g_WebBrowser, (CCINIClass *)lParam);
            }
            LoadPlayerProfile(&v63, (const char **)&g_WebBrowser);
            ReadAutoLoginWOL((char **)&hWnd);
            EnableWindow(v9, v11 != -1);
            bool v12 = String::Compare((const char **)&hWnd, (const char **)&g_WebBrowser);
            SendMessageA(v9, 0xF1u, v12, 0);
            SendMessageA(v9, 0x49Du, 0, 0);
            ShowWindow(v9, 5);
            InvalidateRect(v9, 0, 0);
            if ( v64 )
              FillPersonaInfoWOL(v64, v5, &g_WebBrowser, 0);
            BOOL v13 = v11 != -1 && String::Length((const char **)&g_WebBrowser);
            BOOL v50 = v13;
            v14 = GetDlgItem(v5, 1771);
            EnableWindow(v14, v50);
            BOOL v15 = v11 != -1 && String::Length((const char **)&g_WebBrowser);
            BOOL v51 = v15;
            v16 = GetDlgItem(v5, 1671);
            EnableWindow(v16, v51);
            DeleteAndZero((int)&hWnd);
            v63.vfptr = &vt_rc_ptr_PlayerProfile;
            ComPtr::Release(&v63);
            return 0;
          case 1577:
            if ( HIWORD(v6) != 1 )
              return 0;
            unknown_libname_73(&lParam);
            GetDialogText((HWND)v4, (void **)&lParam);
            LoadPlayerProfile(&v63, (const char **)&g_WebBrowser);
            if ( v64 )
            {
              WOLOption::SetValue(v64, (const char **)&lParam);
              SaveProfileWOL(v64, &g_WebBrowser);
            }
            v63.vfptr = &vt_rc_ptr_PlayerProfile;
            ComPtr::Release(&v63);
            DeleteAndZero((int)&lParam);
            return 0;
          case 1578:
            if ( HIWORD(v6) != 1 )
              return 0;
            v17 = 0;
            v18 = SendMessageA((HWND)v4, 0x147u, 0, 0);
            if ( v18 != -1 )
              v17 = SendMessageA((HWND)v4, 0x150u, v18, 0);
            LoadPlayerProfile(&v63, (const char **)&g_WebBrowser);
            if ( v64 )
            {
              GadgetClass::TrackState(v64, v17, 3);
              SaveProfileWOL(v64, &g_WebBrowser);
            }
            goto LABEL_67;
          case 1670:
            *(_DWORD *)&HouseClass_Player[29944] = 0;
            (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, v5, 1670);
            return 0;
          case 1671:
            *(_DWORD *)&HouseClass_Player[29944] = 5;
            *(_DWORD *)&HouseClass_Player[29948] = 6;
            (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, v5, 1671);
            return 0;
          case 1672:
            WebBrowser::ShowDialog(g_INI_Key_Battleclans);
            return 0;
          case 1697:
            if ( HIWORD(v6) != 1 )
              return 0;
            v19 = -2;
            v20 = SendMessageA((HWND)v4, 0x147u, 0, 0);
            if ( v20 != -1 )
              v19 = SendMessageA((HWND)v4, 0x150u, v20, 0);
            LoadPlayerProfile(&v63, (const char **)&g_WebBrowser);
            if ( v64 )
            {
              MainLobbyDlgProcWOL_Helper_77A780(v64, v19);
              SaveProfileWOL(v64, &g_WebBrowser);
            }
            goto LABEL_67;
          default:
            return 0;
        }
      }
      if ( HIWORD(v6) != 1 )
        return 0;
      v21 = -2;
      v22 = SendMessageA((HWND)v4, 0x147u, 0, 0);
      if ( v22 != -1 )
        v21 = SendMessageA((HWND)v4, 0x150u, v22, 0);
      LoadPlayerProfile(&v63, (const char **)&g_WebBrowser);
      if ( v64 )
      {
        MainLobbyDlgProcWOL_Helper_77A7A0(v64, v21);
        SaveProfileWOL(v64, &g_WebBrowser);
      }
LABEL_67:
      v63.vfptr = &vt_rc_ptr_PlayerProfile;
      ComPtr::Release(&v63);
      return 0;
    }
  }
  return result;
}
}
} // namespace gamemd

// 0x799EA0
namespace gamemd {
rc_ptr * * WOL_OptionsDlgProc(HWND hWnd, const char * lParam, int a3, int hCtl)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  HWND v4; // ebp
  HWND v5; // esi
  int result; // eax
  LONG WindowLongA; // eax
  HWND v10; // eax
  int i; // ebx
  HWND v15; // edi
  HWND v18; // edi
  HWND v19; // eax
  HWND v20; // eax
  HWND v21; // edi
  LRESULT v23; // ebp
  LRESULT v24; // eax
  HWND v25; // ebp
  HWND v28; // ebp
  HWND v29; // eax
  HWND v30; // eax
  HWND v31; // esi
  LRESULT v32; // eax
  LRESULT v33; // ecx
  LRESULT v34; // edi
  HWND v35; // esi
  LRESULT v36; // eax
  LRESULT v37; // edi
  HWND v38; // esi
  LRESULT v39; // eax
  HWND v40; // eax
  HWND v42; // edi
  HWND v44; // eax
  HWND v45; // eax
  HWND v46; // edi
  char **v48; // eax
  char **v49; // eax
  HWND v50; // eax
  HWND v51; // ebx
  HWND v52; // eax
  HWND v53; // eax
  HWND v54; // ebx
  LRESULT v56; // eax
  HWND v62; // edi
  HWND v63; // eax
  HWND v64; // eax
  HWND v65; // eax
  HWND v66; // edi
  WPARAM v68; // edi
  HWND v69; // eax
  HWND v72; // edi
  unsigned __int8 v73; // bl
  HWND Parent; // eax
  HWND DlgItem; // eax
  HWND v76; // eax
  HWND v77; // eax
  HWND v87; // [esp+20h] [ebp-18h] BYREF
  const char *v88; // [esp+24h] [ebp-14h] BYREF
  v4 = (HWND)hCtl;
  v5 = hWnd;
  unsigned int v6 = (unsigned int)lParam;
  if ( lParam == (const char *)272 && hCtl )
    SetWindowLongA(hWnd, 8, *(_DWORD *)(hCtl + 4));
  unsigned int v7 = a3;
  result = BaseDialogProc(v5, v6, a3, (unsigned int)v4);
  if ( result )
    return result;
  WindowLongA = GetWindowLongA(v5, 8);
  if ( v6 > 0x497 )
  {
    unsigned int v70 = v6 - 1242;
    if ( v70 )
    {
      unsigned int v71 = v70 - 1;
      if ( v71 )
      {
        if ( v71 == 18 )
        {
          ShowWindow(v5, 0);
          Dialog::InitWindow(v5, 1);
          return 0;
        }
      }
      else
      {
        v72 = v4;
        v73 = v7 != 0;
        Parent = GetParent(v4);
        if ( Parent )
        {
          while ( v72 )
          {
            if ( Parent != v5 )
            {
              v72 = Parent;
              Parent = GetParent(Parent);
              if ( Parent )
                continue;
            }
            goto LABEL_133;
          }
        }
        else
        {
LABEL_133:
          if ( v72 )
          {
            NavigateDialogTab(v72, v73);
            return 0;
          }
        }
      }
    }
    else
    {
      DlgItem = GetDlgItem(v5, 1836);
      GetDialogText(DlgItem, (void **)&g_WebBrowserConfig);
      unknown_libname_73(&hCtl);
      v76 = GetDlgItem(v5, 1576);
      GetDialogText(v76, (void **)&hCtl);
      if ( String::Length((const char **)&hCtl) && String::Length((const char **)&g_WebBrowserConfig) == 8 )
      {
        v77 = GetDlgItem(v5, 1337);
        PostMessageA(v77, 0xF5u, 0, 0);
      }
      DeleteAndZero((void **)&hCtl);
    }
    return 0;
  }
  if ( v6 == 1175 )
  {
    byte_B77EA0 = 1;
    v54 = GetDlgItem(v5, 1576);
    v87 = GetDlgItem(v5, 1836);
    SendMessageA(v54, 0x4D1u, 1u, 0);
    SendMessageA(v87, 0x4D1u, 1u, 0);
    SendMessageA(v54, 0xC5u, 9u, 0);
    SendMessageA(v87, 0xC5u, 8u, 0);
    ListBox::Clear(v54);
    SendMessageA(v54, 0x141u, 9u, 0);
    int v55 = 1;
    for ( hCtl = 1; hCtl < 32; ++hCtl )
    {
      if ( !(*(int (__stdcall **)(LPVOID, int, const char **, const char **))(*(_DWORD *)ppv + 144))(
              ppv,
              v55,
              &lParam,
              &v88)
        && lParam
        && strlen(lParam) )
      {
        v56 = SendMessageA(v54, 0x4BCu, 0, (LPARAM)lParam);
        SendMessageA(v54, 0x151u, v56, hCtl);
      }
      v55 = hCtl + 1;
    }
    String::AssignFromPtr((char **)&hWnd, (const char **)&g_WebBrowser);
    DeleteAndZero::Alt2((void **)&g_WebBrowserConfig);
    int v57 = 1;
    hCtl = 1;
    while ( 1 )
    {
      if ( !(*(int (__stdcall **)(LPVOID, int, const char **, const char **))(*(_DWORD *)ppv + 144))(
              ppv,
              v57,
              &lParam,
              &v88) )
      {
        if ( lParam )
        {
          if ( strlen(lParam) )
          {
            const char * v83 = lParam;
            char * v58 = String::GetOrEmpty_Alt((char **)&g_WebBrowser);
            if ( !_strcmpi(v58, v83) )
              break;
          }
        }
      }
      v57 = ++hCtl;
      if ( hCtl > 32 )
      {
        DeleteAndZero::Alt2((void **)&g_WebBrowser);
        LOBYTE(hCtl) = 0;
        String::Reassign((char **)&g_WebBrowser, (const char **)&hWnd);
        goto LABEL_106;
      }
    }
    String::Assign_Alt((void **)&g_WebBrowser, lParam);
    String::Assign_Alt((void **)&g_WebBrowserConfig, v88);
    LOBYTE(dword_84A238) = 0;
    LOBYTE(hCtl) = 1;
LABEL_106:
    char * v59 = String::GetOrEmpty_Alt((char **)&g_WebBrowser);
    SendMessageA(v54, 0x4B4u, 0, (LPARAM)v59);
    if ( String::Length((const char **)&g_WebBrowser) )
    {
      char * v60 = String::GetOrEmpty_Alt(&g_WebBrowserConfig);
      SendMessageA(v87, 0x4B4u, 0, (LPARAM)v60);
      LOBYTE(dword_84A238) = 0;
    }
    if ( !String::Length((const char **)&g_WebBrowser)
  unsigned int v61; // eax
      || (v61 = String::Length((const char **)&g_WebBrowserConfig), LOBYTE(lParam) = 1, v61 != 8) )
    {
      LOBYTE(lParam) = 0;
    }
    v62 = GetDlgItem(v5, 1837);
    SendMessageA(v62, 0x49Du, 0, 1);
    SendMessageA(v62, 0xF1u, (unsigned __int8)hCtl, 0);
    EnableWindow(v62, 0);
    InvalidateRect(v62, 0, 0);
    SendMessageA(v62, 0x49Du, 0, 0);
    BOOL v84 = String::Length((const char **)&g_WebBrowser) != 0;
    v63 = GetDlgItem(v5, 1771);
    EnableWindow(v63, v84);
    int v85 = (unsigned __int8)lParam;
    v64 = GetDlgItem(v5, 1337);
    EnableWindow(v64, v85);
    int v91 = 0;
    char v92 = 0;
    ReadRegistryOptionsWOL(&v91);
    if ( !Flag::IsNot2(&v91) )
    {
  const char *v67; // ecx
      v65 = GetDlgItem(v5, 1578);
      MainLobbyDlgProcWOL_Read(v65);
      FillComboBoxRandomOnly(v5, 1697);
      v66 = GetDlgItem(v5, 1697);
      lParam = (const char *)SendMessageA(v66, 0x146u, 0, 0);
      hCtl = 0;
      if ( (int)lParam > 0 )
      {
        while ( SendMessageA(v66, 0x150u, hCtl, 0) != *(_DWORD *)(dword_B75E4C + 28) )
        {
          v67 = lParam;
          if ( ++hCtl >= (int)lParam )
            goto LABEL_118;
        }
        SendMessageA(v66, 0x14Eu, hCtl, 0);
      }
LABEL_118:
      InitGameDropdownColors(v67);
      FillComboBoxFactions(v5, 1698);
      hCtl = (int)GetDlgItem(v5, 1698);
      v68 = 0;
      lParam = (const char *)SendMessageA((HWND)hCtl, 0x146u, 0, 0);
      if ( (int)lParam > 0 )
      {
        while ( SendMessageA((HWND)hCtl, 0x150u, v68, 0) != *(_DWORD *)(dword_B75E4C + 32) )
        {
          if ( (int)++v68 >= (int)lParam )
            goto LABEL_123;
        }
        SendMessageA((HWND)hCtl, 0x14Eu, v68, 0);
      }
LABEL_123:
      v69 = GetDlgItem(v5, 1577);
      PopulateWOLUserList(v69);
    }
    byte_B77EA0 = 0;
    DeleteAndZero((void **)&hWnd);
    return 0;
  }
  else
  {
    if ( v6 <= 0x2B )
    {
      switch ( v6 )
      {
        case 0x2Bu:
          Dialog::Resize((char *)v4);
          return 1;
        case 0xFu:
          Dialog::DrawBackground(v5);
          Dialog::StopBink(v5);
          ValidateRect(v5, 0);
          return 1;
        case 0x14u:
          return 1;
      }
      return 0;
    }
    if ( v6 != 273 )
      return 0;
    if ( (unsigned __int16)v7 > 0x6A2u )
    {
      switch ( (__int16)v7 )
      {
        case 1770:
          CreateAccountWOL(v5);
          result = 0;
          break;
        case 1771:
          byte_B77EA0 = 1;
          v46 = GetDlgItem(v5, 1576);
          char * v47 = String::GetOrEmpty_Alt((char **)&g_WebBrowser);
          hWnd = (HWND)SendMessageA(v46, 0x4B9u, 0xFFFFFFFF, (LPARAM)v47);
          if ( hWnd != HWND_MESSAGE|0x2 )
          {
            unknown_libname_73(&lParam);
            OptionsDlgProcWOL_Assign(v46, (WPARAM)hWnd, (int)&lParam);
            String::ToLower(&lParam);
            ReadAutoLoginWOL((char **)&v88);
            void * v89 = String::ToLowerCopy(&v88, (char **)&v89);
            LOBYTE(hCtl) = String::Compare(&lParam, (const char **)v48);
            DeleteAndZero(&v89);
            if ( (_BYTE)hCtl )
            {
              String::Assign((char **)&a3, &g_INI_DefaultBuffer);
              ReadSettingsWOL(&a3);
              DeleteAndZero((void **)&a3);
            }
            LoadConfigWOL((char **)&v87);
            void * v90 = String::ToLowerCopy((const char **)&v87, (char **)&v90);
            LOBYTE(hCtl) = String::Compare(&lParam, (const char **)v49);
            DeleteAndZero(&v90);
            if ( (_BYTE)hCtl )
            {
  void *v86; // [esp+1Ch] [ebp-1Ch] BYREF
              String::Assign((char **)&v86, &g_INI_DefaultBuffer);
              SavePersonaConfigWOL((char **)&v86);
              DeleteAndZero(&v86);
            }
            hCtl = SendMessageA(v46, 0x150u, (WPARAM)hWnd, 0);
            SendMessageA(v46, 0x144u, (WPARAM)hWnd, 0);
            (*(void (__stdcall **)(LPVOID, int, char *, char *, int))(*(_DWORD *)ppv + 148))(
              ppv,
              hCtl,
              &g_INI_DefaultBuffer,
              &g_INI_DefaultBuffer,
              1);
            DeleteAndZero((void **)&v87);
            DeleteAndZero((void **)&v88);
            DeleteAndZero((void **)&lParam);
          }
          SendMessageA(v46, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer);
          InvalidateRect(v46, 0, 0);
          v50 = GetDlgItem(v5, 1836);
          SendMessageA(v50, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer);
          DeleteAndZero::Alt2((void **)&g_WebBrowser);
          DeleteAndZero::Alt2((void **)&g_WebBrowserConfig);
          LOBYTE(dword_84A238) = 1;
          v51 = GetDlgItem(v5, 1837);
          EnableWindow(v51, 0);
          InvalidateRect(v51, 0, 0);
          v52 = GetDlgItem(v5, 1771);
          EnableWindow(v52, 0);
          v53 = GetDlgItem(v5, 1337);
          EnableWindow(v53, 0);
          byte_B77EA0 = 0;
          result = 0;
          break;
        case 1772:
          WebBrowser::ShowDialog(g_INI_Key_Manage);
          result = 0;
          break;
        case 1836:
          if ( HIWORD(v7) != 768 || byte_B77EA0 )
            return 0;
          LOBYTE(dword_84A238) = 1;
          GetDialogText(v4, (void **)&g_WebBrowserConfig);
          unknown_libname_73(&hCtl);
          v40 = GetDlgItem(v5, 1576);
          GetDialogText(v40, (void **)&hCtl);
          if ( !String::Length((const char **)&hCtl)
  unsigned int v41; // eax
            || (v41 = String::Length((const char **)&g_WebBrowserConfig), LOBYTE(lParam) = 1, v41 != 8) )
          {
            LOBYTE(lParam) = 0;
          }
          v42 = GetDlgItem(v5, 1837);
          SendMessageA(v42, 0x49Du, 0, 1);
          int v43 = (unsigned __int8)lParam;
          EnableWindow(v42, (unsigned __int8)lParam);
          InvalidateRect(v42, 0, 0);
          SendMessageA(v42, 0x49Du, 0, 0);
          v44 = GetDlgItem(v5, 1771);
          EnableWindow(v44, 0);
          v45 = GetDlgItem(v5, 1337);
          EnableWindow(v45, v43);
          DeleteAndZero((void **)&hCtl);
          result = 0;
          break;
        case 1837:
          byte_B77E68 = SendMessageA(v4, 0xF0u, 0, 0) == 1;
          result = 0;
          break;
        default:
          return 0;
      }
      return result;
    }
    if ( (unsigned __int16)v7 == 1698 )
    {
      if ( Dialog::FindByHandle((void *)0x11D) && dword_B75E4C )
      {
        v37 = -2;
        v38 = GetDlgItem(v5, 1698);
        v39 = SendMessageA(v38, 0x147u, 0, 0);
        if ( v39 != -1 )
          v37 = SendMessageA(v38, 0x150u, v39, 0);
        MainLobbyDlgProcWOL_Helper_77A7A0(v37);
        return 0;
      }
      return 0;
    }
    if ( (unsigned __int16)v7 <= 0x62Au )
    {
      switch ( (unsigned __int16)v7 )
      {
        case 0x62Au:
          if ( Dialog::FindByHandle((void *)0x11D) && dword_B75E4C )
          {
            v31 = GetDlgItem(v5, 1578);
            v32 = SendMessageA(v31, 0x147u, 0, 0);
            v33 = 0;
            if ( v32 != -1 )
              v33 = SendMessageA(v31, 0x150u, v32, 0);
            GadgetClass::TrackState(dword_B75E4C, v33, 3);
            return 0;
          }
          break;
        case 0x539u:
          (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, v5, 1337);
          return 0;
        case 0x628u:
          bool v11 = Dialog::FindByHandle((void *)0x11D) != 0;
          if ( HIWORD(v7) == 1 )
          {
            if ( !v11 )
            {
              byte_B77EA0 = 1;
              DeleteAndZero::Alt2((void **)&g_WebBrowser);
              DeleteAndZero::Alt2((void **)&g_WebBrowserConfig);
              LOBYTE(dword_84A238) = 1;
              v21 = GetDlgItem(v5, 1836);
              char * v22 = String::GetOrEmpty_Alt(&g_WebBrowserConfig);
              SendMessageA(v21, 0x4B4u, 0, (LPARAM)v22);
              LOBYTE(hWnd) = byte_B77E68;
              v23 = SendMessageA((HWND)hCtl, 0x147u, 0, 0);
              if ( v23 != -1 )
              {
                v24 = SendMessageA((HWND)hCtl, 0x150u, v23, 0);
                lParam = (const char *)v24;
                if ( v24 > 0 && v24 <= 32 )
                {
                  OptionsDlgProcWOL_Assign((HWND)hCtl, v23, (int)&g_WebBrowser);
                  (*(void (__stdcall **)(LPVOID, const char *, const char **, int *))(*(_DWORD *)ppv + 144))(
                    ppv,
                    lParam,
                    &v88,
                    &hCtl);
                  String::Assign_Alt((void **)&g_WebBrowserConfig, (const char *)hCtl);
                  v25 = GetDlgItem(v5, 1836);
                  char * v26 = String::GetOrEmpty_Alt(&g_WebBrowserConfig);
                  SendMessageA(v25, 0x4B4u, 0, (LPARAM)v26);
                  LOBYTE(dword_84A238) = 0;
                  LOBYTE(hWnd) = 1;
                }
              }
              if ( !String::Length((const char **)&g_WebBrowser)
  unsigned int v27; // eax
                || (v27 = String::Length((const char **)&g_WebBrowserConfig), LOBYTE(hCtl) = 1, v27 != 8) )
              {
                LOBYTE(hCtl) = 0;
              }
              v28 = GetDlgItem(v5, 1837);
              SendMessageA(v28, 0xF1u, (unsigned __int8)hWnd, 0);
              EnableWindow(v28, 0);
              InvalidateRect(v28, 0, 0);
              BOOL v81 = String::Length((const char **)&g_WebBrowser) != 0;
              v29 = GetDlgItem(v5, 1771);
              EnableWindow(v29, v81);
              int v82 = (unsigned __int8)hCtl;
              v30 = GetDlgItem(v5, 1337);
              EnableWindow(v30, v82);
              byte_B77EA0 = 0;
              return 0;
            }
          }
          else if ( (HIWORD(v7) == 5 || HIWORD(v7) == 768)
                 && (HIWORD(v7) != 768 || v11)
                 && (HIWORD(v7) != 5 || !v11)
                 && !byte_B77EA0 )
          {
  char v14; // al
            unknown_libname_73(&hCtl);
            GetDialogText(v4, (void **)&hCtl);
            DeleteAndZero::Alt2((void **)&g_WebBrowserConfig);
            for ( i = 1; i <= 32; ++i )
            {
              if ( !(*(int (__stdcall **)(LPVOID, int, const char **, HWND *))(*(_DWORD *)ppv + 144))(
                      ppv,
                      i,
                      &lParam,
                      &hWnd) )
              {
                if ( lParam )
                {
                  if ( strlen(lParam) )
                  {
                    const char * v78 = lParam;
                    char * v13 = String::GetOrEmpty_Alt((char **)&hCtl);
                    if ( !_strcmpi(v13, v78) )
                    {
                      String::Assign_Alt((void **)&g_WebBrowser, lParam);
                      String::Assign_Alt((void **)&g_WebBrowserConfig, (const char *)hWnd);
                      LOBYTE(dword_84A238) = 0;
                      v14 = 1;
                      goto LABEL_42;
                    }
                  }
                }
              }
            }
            DeleteAndZero::Alt2((void **)&g_WebBrowser);
            v14 = 0;
            if ( !byte_B77E68 )
            {
              LOBYTE(lParam) = 0;
              goto LABEL_43;
            }
LABEL_42:
            LOBYTE(lParam) = 1;
            if ( v14 )
              goto LABEL_44;
LABEL_43:
            String::Reassign((char **)&g_WebBrowser, (const char **)&hCtl);
LABEL_44:
            byte_B77EA0 = 1;
            v15 = GetDlgItem(v5, 1836);
            char * v16 = String::GetOrEmpty_Alt(&g_WebBrowserConfig);
            SendMessageA(v15, 0x4B4u, 0, (LPARAM)v16);
            InvalidateRect(v15, 0, 0);
            byte_B77EA0 = 0;
            if ( !String::Length((const char **)&g_WebBrowser)
  unsigned int v17; // eax
              || (v17 = String::Length((const char **)&g_WebBrowserConfig), LOBYTE(hWnd) = 1, v17 != 8) )
            {
              LOBYTE(hWnd) = 0;
            }
            v18 = GetDlgItem(v5, 1837);
            ShowWindow(v18, 0);
            SendMessageA(v18, 0x49Du, 0, 1);
            SendMessageA(v18, 0xF1u, (unsigned __int8)lParam, 0);
            EnableWindow(v18, 0);
            SendMessageA(v18, 0x49Du, 0, 0);
            ShowWindow(v18, 5);
            InvalidateRect(v18, 0, 0);
            BOOL v79 = String::Length((const char **)&g_WebBrowser) != 0;
            v19 = GetDlgItem(v5, 1771);
            EnableWindow(v19, v79);
            int v80 = (unsigned __int8)hWnd;
            v20 = GetDlgItem(v5, 1337);
            EnableWindow(v20, v80);
            DeleteAndZero((void **)&hCtl);
            return 0;
          }
          break;
        default:
          if ( (unsigned __int16)v7 == 1577 && Dialog::FindByHandle((void *)0x11D) && dword_B75E4C )
          {
            unknown_libname_73(&hCtl);
            v10 = GetDlgItem(v5, 1577);
            GetDialogText(v10, (void **)&hCtl);
            WOLOption::SetValue(&hCtl);
            DeleteAndZero((void **)&hCtl);
            return 0;
          }
          return 0;
      }
      return 0;
    }
    if ( (unsigned __int16)v7 == 1670 )
    {
      (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, v5, 2);
      return 0;
    }
    if ( (unsigned __int16)v7 != 1697 || !Dialog::FindByHandle((void *)0x11D) || !dword_B75E4C )
      return 0;
    v34 = -2;
    v35 = GetDlgItem(v5, 1697);
    v36 = SendMessageA(v35, 0x147u, 0, 0);
    if ( v36 != -1 )
      v34 = SendMessageA(v35, 0x150u, v36, 0);
    MainLobbyDlgProcWOL_Helper_77A780(v34);
    return 0;
  }
}
}
} // namespace gamemd

// 0x79BA60
namespace gamemd {
void ValidateGameJoinWOL(BlowStraw * aP0, ObjectClass * aP1, char a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int BlowStraw_field_0x08; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v10; // eax
  ObjectClass v11; // [esp+0h] [ebp-ACh] BYREF

  v11[14] = (char)aP1; /*0x79ba74*/
  char v5 = 0; /*0x79ba9c*/
  if ( *(_DWORD *)&HouseClass_Player[29932] == 4 ) /*0x79ba7a*/
  {
    BlowStraw_field_0x08 = aP0[2].BlowStraw_field_0x08; /*0x79ba7c*/
    v11[15] = (BlowStraw_field_0x08 & 0x800) != 0; /*0x79ba87*/
    if ( (aP0[2].BlowStraw_field_0x08 & 0x800) != 0 || (v11[15] = (BlowStraw_field_0x08 & 0x1000) != 0) != 0 ) /*0x79ba96*/
      v5 = 1; /*0x79ba7a*/
  }
  char v6; // al
  v6 = *(_DWORD *)&HouseClass_Player[29944] == 3 /*0x79bab6*/
    || *(_DWORD *)&HouseClass_Player[29944] == 1
    || *(_DWORD *)&HouseClass_Player[29944] == 2;
  if ( v5 != v6 ) /*0x79babd*/
    return 0; /*0x79babd*/
  if ( *(_DWORD *)&HouseClass_Player[29932] == 4 ) /*0x79bac6*/
  {
    v11[15] = BYTE1(aP0[2].BlowStraw_field_0x08) & 1; /*0x79bad0*/
    if ( v11[15] ) /*0x79bad4*/
    {
      if ( dword_B77DE4 < 1 ) /*0x79badd*/
      {
        if ( (_BYTE)aP1 ) /*0x79bae1*/
        {
          StringCSF = GetStringCSF(aTxtNoClan, 0, (CampaignScore *)g_Str_File_wonline_cpp, 26733); /*0x79baf8*/
          Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, (CampaignScore *)StringCSF, v11); /*0x79bb00*/
          return 0; /*0x79bb13*/
        }
        return 0; /*0x79bae1*/
      }
    }
  }
  strcpy((char *)&v11.owningHouseIndex, (const char *)&aP0[18].BlowStraw_field_0x08); /*0x79bb39*/
  memset(&v11.abstractFlags, 0, 20); /*0x79bb4e*/
  unknown_libname_73(&v11.uniqueId); /*0x79bb56*/
  ParseStringCommaInts( /*0x79bb7c*/
    (char *)&v11.owningHouseIndex,
    &v11.objectTypeFlags,
    &v11.referenceCount,
    (int *)&v11.NeedsSaveOrLink,
    &v11.abstractFlags,
    &v11.nextArrayIndex,
    (void **)&v11.uniqueId);
  if ( GameOptions::GetEntry() != (INIClass *)v11.objectTypeFlags /*0x79bbae*/
    || (CCINIClass_RulesHash ^ CCINIClass_AIHash ^ CCINIClass_ArtHash) != v11.referenceCount )
  {
    if ( v11[14] ) /*0x79bc41*/
    {
      v10 = GetStringCSF(g_Str_TXT_MISMATCH, 0, (CampaignScore *)g_Str_File_wonline_cpp, 26769); /*0x79bc54*/
      goto LABEL_34; /*0x79bc54*/
    }
    goto LABEL_35; /*0x79bc41*/
  }
  if ( !a3 ) /*0x79bbbb*/
  {
    BOOL v9 = v11.abstractFlags || v11.nextArrayIndex; /*0x79bbda*/
    if ( (int)v11.NeedsSaveOrLink + *(_DWORD *)aP0[1].__pad_0 - v11.abstractFlags >= aP0->BlowStraw_field_0x08 - v9 ) /*0x79bbe6*/
    {
      if ( v11[14] ) /*0x79bbec*/
      {
        v10 = GetStringCSF((wchar_t *)aWolGamefull, 0, (CampaignScore *)g_Str_File_wonline_cpp, 26780); /*0x79bbff*/
LABEL_34:
        Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, (CampaignScore *)v10, v11); /*0x79bc59*/
        goto LABEL_35; /*0x79bc5c*/
      }
      goto LABEL_35; /*0x79bbec*/
    }
LABEL_29:
    DeleteAndZero((int)&v11.uniqueId); /*0x79bc0d*/
    return 1; /*0x79bc21*/
  }
  if ( v11.nextArrayIndex && !v11.abstractFlags ) /*0x79bc0b*/
    goto LABEL_29; /*0x79bc0b*/
  if ( v11[14] ) /*0x79bc28*/
  {
    v10 = GetStringCSF((wchar_t *)&stru_830620[4060], 0, (CampaignScore *)g_Str_File_wonline_cpp, 26788); /*0x79bc3b*/
    goto LABEL_34; /*0x79bc3b*/
  }
LABEL_35:
  DeleteAndZero((int)&v11.uniqueId); /*0x79bc64*/
  return 0; /*0x79bb0a*/
}
}
} // namespace gamemd

// 0x79BC80
namespace gamemd {
bool WOL_FindBuddy()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  bool result; // al

  if ( !String::Length(&g_WOL_LoginObject) ) /*0x79bc8f*/
    return 0; /*0x79bca4*/
  if ( !dword_B76994 ) /*0x79bcac*/
    return 0; /*0x79bcac*/
  int v1 = *((_DWORD *)g_WOL_AccountInfo + (dword_B769A8(&g_WOL_LoginObject) & ((1 << dword_B7699C) - 1))); /*0x79bcce*/
  if ( !v1 ) /*0x79bcd3*/
    return 0; /*0x79bcd3*/
  while ( 1 ) /*0x79bcdc*/
  {
    result = String::Compare((const char **)v1, &g_WOL_LoginObject); /*0x79bcdc*/
    if ( result ) /*0x79bce3*/
      break; /*0x79bce3*/
    v1 = *(_DWORD *)(v1 + 8); /*0x79bce5*/
    if ( !v1 ) /*0x79bcea*/
      return result; /*0x79bcea*/
  }
  int * v2 = (int *)(v1 + 4); /*0x79bcfb*/
  if ( !v2 ) /*0x79bd00*/
    return 0; /*0x79bd00*/
  int v3 = *v2; /*0x79bd02*/
  if ( v3 == 4 ) /*0x79bd07*/
    return 1; /*0x79bd15*/
  if ( v3 != 5 ) /*0x79bd19*/
    return 0; /*0x79bd27*/
  if ( !dword_B7660C ) /*0x79bd2f*/
    return 0; /*0x79bd2f*/
  int v4 = *((_DWORD *)g_WOL_EventQueue + (dword_B76620(&g_WOL_LoginObject) & ((1 << dword_B76614) - 1))); /*0x79bd55*/
  if ( !v4 ) /*0x79bd5a*/
    return 0; /*0x79bd5a*/
  while ( 1 ) /*0x79bd67*/
  {
    result = String::Compare((const char **)v4, &g_WOL_LoginObject); /*0x79bd67*/
    if ( result ) /*0x79bd6e*/
      break; /*0x79bd6e*/
    v4 = *(_DWORD *)(v4 + 272); /*0x79bd70*/
    if ( !v4 ) /*0x79bd78*/
      return result; /*0x79bd78*/
  }
  const void * v5 = (const void *)(v4 + 4); /*0x79bd8d*/
  if ( v5 ) /*0x79bd92*/
  char v13[268]; // [esp+120h] [ebp-10Ch] BYREF
    qmemcpy(v13, v5, sizeof(v13)); /*0x79bda0*/
  void *v11; // [esp+10h] [ebp-21Ch] BYREF
  String::Assign((char **)&v11, &v13[52]); /*0x79bdae*/
  signed int v6 = 0; /*0x79bdbe*/
  _BYTE v12[268]; // [esp+14h] [ebp-218h] BYREF
  memset(v12, 0, sizeof(v12)); /*0x79bdc0*/
  signed int v7 = g_WOL_ChatState; /*0x79bdc2*/
  if ( (int)g_WOL_ChatState <= 0 ) /*0x79bdc9*/
  {
LABEL_27:
    memset(v12, 0, sizeof(v12)); /*0x79be1f*/
    DeleteAndZero(&v11); /*0x79be25*/
    return 0; /*0x79be36*/
  }
  int v8 = 0; /*0x79bdcb*/
  while ( 1 ) /*0x79bdcd*/
  {
    if ( v8 >= 0 && v6 < v7 ) /*0x79bdd3*/
      qmemcpy(v12, (char *)g_WOL_ConnectionHandler + v8, sizeof(v12)); /*0x79bde7*/
    char * v9 = String::GetOrEmpty_Alt((char **)&v11); /*0x79bded*/
    if ( !_strcmpi(&v12[52], v9) ) /*0x79bdf8*/
      break; /*0x79bdf8*/
    v7 = g_WOL_ChatState; /*0x79be04*/
    ++v6; /*0x79be09*/
    v8 += 268; /*0x79be0a*/
    if ( v6 >= (int)g_WOL_ChatState ) /*0x79be12*/
      goto LABEL_27; /*0x79be12*/
  }
  char v10 = ValidateGameJoinWOL((int)v12, 0, g_MenuStateFlags != 0); /*0x79be52*/
  DeleteAndZero(&v11); /*0x79be54*/
  return v10; /*0x79bc98*/
}
}
} // namespace gamemd

// 0x79BF50
namespace gamemd {
int E4Recv_79BF50::sub_79BF50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  HWND DlgItem; // eax
  HWND v3; // eax
  ObjectClass *v4; // esi
  HWND v5; // eax
  BOOL BuddyWOL; // [esp-4h] [ebp-18h]
  unsigned __int8 v9; // [esp+10h] [ebp-4h]
  BOOL v7 = String::Length(&g_WOL_LoginObject) != 0; /*0x79bf6f*/
  DlgItem = GetDlgItem(this, 1795); /*0x79bf76*/
  EnableWindow(DlgItem, v7); /*0x79bf7f*/
  BuddyWOL = FindBuddyWOL(); /*0x79bf8b*/
  v3 = GetDlgItem(this, 1581); /*0x79bf92*/
  EnableWindow(v3, BuddyWOL); /*0x79bf95*/
  if ( String::Length(&g_WOL_LoginObject) ) /*0x79bf9c*/
  {
    if ( !dword_B76994 ) /*0x79bfb2*/
      goto LABEL_10; /*0x79bfb2*/
    v4 = (ObjectClass *)*((_DWORD *)g_WOL_AccountInfo + (dword_B769A8(&g_WOL_LoginObject) & ((1 << dword_B7699C) - 1))); /*0x79bfd4*/
    if ( !v4 ) /*0x79bfd9*/
      goto LABEL_10; /*0x79bfd9*/
    while ( !String::Compare((const char **)v4, &g_WOL_LoginObject) ) /*0x79bfe9*/
    {
      v4 = *(ObjectClass **)&v4->__pad_0[8]; /*0x79bfeb*/
      if ( !v4 ) /*0x79bff0*/
      {
        v9 = 0; /*0x79bff2*/
        goto LABEL_12; /*0x79bff7*/
      }
    }
    if ( v4 != (ObjectClass *)-4 && *(_DWORD *)&v4->__pad_0[4] > 2u ) /*0x79c008*/
      v9 = 1; /*0x79c016*/
    else
LABEL_10:
      v9 = 0; /*0x79c00f*/
  }
  else
  {
    v9 = 0; /*0x79bfa5*/
  }
LABEL_12:
  v5 = GetDlgItem(this, 1474); /*0x79c01b*/
  return EnableWindow(v5, v9); /*0x79c031*/
}
}
} // namespace gamemd

// 0x79CBA0
namespace gamemd {
AbstractClass * * RemoveWOLPlayerLogin(const char ** a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  const char **v1; // ebp

  v1 = a1; /*0x79cbad*/
  int v2 = 0; /*0x79cbaf*/
  __int64 v15; // [esp+Ch] [ebp-184h]
  LODWORD(v15) = a1; /*0x79cbb1*/
  if ( g_WindowManager > 0 ) /*0x79cbb7*/
  {
  void *v16; // [esp+14h] [ebp-17Ch] BYREF
    while ( 1 ) /*0x79cbc1*/
    {
      unknown_libname_73(&v16); /*0x79cbc1*/
      if ( v2 >= 0 && v2 < g_WindowManager ) /*0x79cbd0*/
        String::Reassign((char **)&v16, (const char **)g_WOL_LoginQueue + v2); /*0x79cbdf*/
      if ( String::Compare((const char **)&v16, v1) ) /*0x79cbe9*/
        break; /*0x79cbe9*/
      DeleteAndZero(&v16); /*0x79cbf6*/
      if ( ++v2 >= g_WindowManager ) /*0x79cc03*/
        return; /*0x79cc03*/
    }
    if ( g_WindowManager ) /*0x79cc17*/
    {
      if ( v2 < 0 ) /*0x79cc1f*/
        v2 = 0; /*0x79cc21*/
      if ( v2 >= g_WindowManager ) /*0x79cc25*/
        v2 = g_WindowManager - 1; /*0x79cc27*/
      DeleteAndZero((void **)g_WOL_LoginQueue + v2); /*0x79cc33*/
      memcpy( /*0x79cc5c*/
        (char *)g_WOL_LoginQueue + 4 * v2,
        (char *)g_WOL_LoginQueue + 4 * v2 + 4,
        4 * (g_WindowManager + 0x3FFFFFFF * (v2 + 1)));
      --g_WindowManager; /*0x79cc70*/
      if ( 3 * g_WindowManager <= dword_B73AAC ) /*0x79cc7a*/
      {
        int v3 = dword_B73AAC / 2; /*0x79cc83*/
        if ( dword_B73AAC / 2 < 10 ) /*0x79cc88*/
          v3 = 10; /*0x79cc8a*/
        if ( v3 < dword_B73AAC ) /*0x79cc91*/
        {
          void * v4 = __2_YAPAXI_Z(4 * v3); /*0x79cc9b*/
          AbstractClass *v5 = g_WOL_LoginQueue; /*0x79cca0*/
          void * v6 = v4; /*0x79ccab*/
          if ( g_WOL_LoginQueue ) /*0x79ccad*/
          {
            qmemcpy(v4, g_WOL_LoginQueue, 4 * g_WindowManager); /*0x79ccb7*/
            v5 = g_WOL_LoginQueue; /*0x79ccb9*/
          }
          __3_YAXPAX_Z(v5); /*0x79ccc0*/
          g_WOL_LoginQueue = v6; /*0x79ccc5*/
          v1 = (const char **)v15; /*0x79cccb*/
          dword_B73AAC = v3; /*0x79ccd2*/
        }
      }
    }
  void *v14; // [esp+8h] [ebp-188h] BYREF
    String::AssignFromPtr((char **)&v14, v1); /*0x79ccdd*/
  _BYTE v18[268]; // [esp+84h] [ebp-10Ch] BYREF
    HashTable::FindWOLHashTableEntry(&v14, v18); /*0x79ccf4*/
    if ( !dword_B76994 ) /*0x79cd02*/
      goto LABEL_34; /*0x79cd02*/
    v15 = (unsigned int)(dword_B76994 - 1); /*0x79cd0d*/
    *(float *)&v15 = (double)v15 / (double)dword_B76998; /*0x79cd2a*/
    int v7 = dword_B769A8(&v14) & ((1 << dword_B7699C) - 1); /*0x79cd48*/
    int v8 = *((_DWORD *)g_WOL_AccountInfo + v7); /*0x79cd4a*/
    if ( !v8 ) /*0x79cd4f*/
      goto LABEL_34; /*0x79cd4f*/
    if ( String::Compare(*((const char ***)g_WOL_AccountInfo + v7), (const char **)&v14) ) /*0x79cd5c*/
    {
      SessionClass *v9 = (_DWORD *)*((_DWORD *)g_WOL_AccountInfo + v7); /*0x79cd6a*/
      int v10 = v9[2]; /*0x79cd6f*/
      if ( v9 ) /*0x79cd72*/
      {
        DeleteAndZero(*((void ***)g_WOL_AccountInfo + v7)); /*0x79cd76*/
        __3_YAXPAX_Z(v9); /*0x79cd7c*/
      }
      double v11 = *(float *)&v15; /*0x79cd8a*/
      *((_DWORD *)g_WOL_AccountInfo + v7) = v10; /*0x79cd8e*/
      --dword_B76994; /*0x79cd9d*/
      if ( v11 > dbl_B769B0 ) /*0x79cda7*/
        goto LABEL_34; /*0x79cda7*/
    }
    else
    {
      int v12 = *(_DWORD *)(v8 + 8); /*0x79cdab*/
      if ( v12 ) /*0x79cdb0*/
      {
        while ( !String::Compare((const char **)v12, (const char **)&v14) ) /*0x79cdc0*/
        {
          v8 = v12; /*0x79cdc2*/
          v12 = *(_DWORD *)(v12 + 8); /*0x79cdc4*/
          if ( !v12 ) /*0x79cdc9*/
            goto LABEL_32; /*0x79cdc9*/
        }
        *(_DWORD *)(v8 + 8) = *(_DWORD *)(v12 + 8); /*0x79cdd0*/
        --dword_B76994; /*0x79cddc*/
        DeleteAndZero((void **)v12); /*0x79cde6*/
        __3_YAXPAX_Z((void *)v12); /*0x79cdec*/
      }
LABEL_32:
      if ( *(float *)&v15 > dbl_B769B0 ) /*0x79ce03*/
        goto LABEL_34; /*0x79ce03*/
    }
    RemoveWOLPlayerLogin_Remove(&g_WOL_AccountInfo); /*0x79ce0a*/
LABEL_34:
  char v17[108]; // [esp+18h] [ebp-178h] BYREF
    memset(v17, 0, sizeof(v17)); /*0x79ce0f*/
    char * v13 = String::GetOrEmpty_Alt((char **)v1); /*0x79ce20*/
    strncpy(&v17[36], v13, 9u); /*0x79ce2b*/
    (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 228))(ppv, v17); /*0x79ce40*/
    DeleteAndZero(&v14); /*0x79ce4a*/
    DeleteAndZero(&v16); /*0x79ce53*/
  }
}
}
} // namespace gamemd

// 0x79CE70
namespace gamemd {
AbstractClass * * int WOL_RefreshChannelList()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  HANDLE *v0; // esi
  unsigned int result; // eax
  int i; // esi
  char **v6; // ecx

  dword_B778C8 = time(0); /*0x79ce83*/
  if ( g_WOL_RequestState && !RequestChannelListWOL() ) /*0x79ce9b*/
    return SetEvent(hEvent); /*0x79ce9b*/
  v0 = &Handles; /*0x79cea3*/
  do /*0x79ceb6*/
    ResetEvent(*v0++); /*0x79ceab*/
  while ( (int)v0 < (int)g_WOL_RequestObject ); /*0x79ceb6*/
  if ( !RequestChannelList2WOL(41, 1u) ) /*0x79cebf*/
  {
    SetEvent(Handles); /*0x79cecf*/
    return SetEvent(hEvent); /*0x79cee0*/
  }
  for ( i = 0; i < g_WOL_RequestManager; ++i ) /*0x79ceea*/
    DeleteAndZero((void **)g_WOL_SessionID + i); /*0x79cef4*/
  int v3 = 0; /*0x79cf08*/
  for ( g_WOL_RequestManager = 0; v3 < g_WindowManager; ++v3 ) /*0x79cf16*/
  {
  void *v8; // [esp+Ch] [ebp-70h] BYREF
    unknown_libname_73(&v8); /*0x79cf20*/
    if ( v3 >= 0 && v3 < g_WindowManager ) /*0x79cf2f*/
      String::Reassign((char **)&v8, (const char **)g_WOL_LoginQueue + v3); /*0x79cf3f*/
    int v4 = g_WOL_RequestManager; /*0x79cf44*/
    BlowStraw *v5 = g_WOL_RequestManager; /*0x79cf49*/
    if ( g_WOL_RequestManager >= dword_B76984 ) /*0x79cf55*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_RequestManager); /*0x79cf5c*/
      v4 = g_WOL_RequestManager; /*0x79cf61*/
    }
    if ( v4 >= dword_B76984 ) /*0x79cf6c*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_RequestManager); /*0x79cf73*/
      v4 = g_WOL_RequestManager; /*0x79cf78*/
    }
    if ( v5 < v4 ) /*0x79cf7f*/
    {
      memcpy((char *)g_WOL_SessionID + 4 * v5 + 4, (char *)g_WOL_SessionID + 4 * v5, 4 * (v4 + 0x3FFFFFFF * v5)); /*0x79cf9c*/
      v4 = g_WOL_RequestManager; /*0x79cfa1*/
    }
    v6 = (char **)((char *)g_WOL_SessionID + 4 * v5); /*0x79cfaf*/
    if ( v6 ) /*0x79cfb4*/
    {
      String::AssignFromPtr(v6, (const char **)&v8); /*0x79cfbb*/
      v4 = g_WOL_RequestManager; /*0x79cfc0*/
    }
    g_WOL_RequestManager = v4 + 1; /*0x79cfca*/
    DeleteAndZero(&v8); /*0x79cfcf*/
  }
  if ( String::Length(&g_WOL_AuthObject) ) /*0x79cfe7*/
  {
    result = time(0) - g_WOL_ParseState; /*0x79d000*/
    if ( result < 5 ) /*0x79d005*/
      return result; /*0x79d005*/
    DeleteAndZero::Alt2((void **)&g_WOL_AuthObject); /*0x79d010*/
  }
  result = g_WOL_RequestManager; /*0x79d015*/
  if ( g_WOL_RequestManager ) /*0x79d01c*/
  {
    if ( g_WOL_RequestManager > 0 ) /*0x79d022*/
    {
      String::Reassign((char **)&g_WOL_AuthObject, (const char **)g_WOL_SessionID); /*0x79d02f*/
      int v7 = 0; /*0x79d039*/
      if ( g_WOL_RequestManager ) /*0x79d03d*/
      {
        if ( g_WOL_RequestManager <= 0 ) /*0x79d03f*/
          v7 = g_WOL_RequestManager - 1; /*0x79d041*/
        Object::DtorWithDelete((void **)g_WOL_SessionID + v7, 0); /*0x79d04f*/
        memcpy( /*0x79d078*/
          (char *)g_WOL_SessionID + 4 * v7,
          (char *)g_WOL_SessionID + 4 * v7 + 4,
          4 * (g_WOL_RequestManager + 0x3FFFFFFF * (v7 + 1)));
        --g_WOL_RequestManager; /*0x79d086*/
        if ( 3 * g_WOL_RequestManager <= dword_B76984 ) /*0x79d095*/
          VectorClass::Shrink(&g_WOL_RequestManager); /*0x79d09c*/
      }
    }
    g_WOL_ParseState = time(0); /*0x79d0a8*/
  char v9[108]; // [esp+10h] [ebp-6Ch] BYREF
    memset(v9, 0, sizeof(v9)); /*0x79d0b8*/
    strcpy(&v9[36], String::GetOrEmpty((char **)&g_WOL_AuthObject)); /*0x79d0e5*/
    return (*(int (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 96))(ppv, v9); /*0x79d0f7*/
  }
  return result; /*0x79ceda*/
}
}
} // namespace gamemd

// 0x79D110
namespace gamemd {
AbstractClass * * WOL_SendGameList()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v0 = g_WOL_BuddyList; /*0x79d114*/
  if ( g_WOL_BuddyList <= 10 ) /*0x79d11d*/
  {
    if ( !g_WOL_BuddyList ) /*0x79d128*/
      return; /*0x79d128*/
  }
  else
  {
    v0 = 10; /*0x79d11f*/
  }
  void *v12; // [esp+34h] [ebp-Ch] BYREF
  unknown_libname_73(&v12); /*0x79d132*/
  if ( v0 > 0 ) /*0x79d139*/
  {
    int v14 = v0; /*0x79d142*/
    do /*0x79d264*/
    {
  void *v13; // [esp+38h] [ebp-8h] BYREF
      unknown_libname_73(&v13); /*0x79d14a*/
      if ( g_WOL_BuddyList > 0 ) /*0x79d156*/
      {
        String::Reassign((char **)&v13, (const char **)g_WOL_ChannelMgr); /*0x79d166*/
        int v1 = 0; /*0x79d170*/
        if ( g_WOL_BuddyList ) /*0x79d174*/
        {
          if ( g_WOL_BuddyList <= 0 ) /*0x79d17a*/
            v1 = g_WOL_BuddyList - 1; /*0x79d17c*/
          DeleteAndZero((void **)g_WOL_ChannelMgr + v1); /*0x79d188*/
          memcpy( /*0x79d1b1*/
            (char *)g_WOL_ChannelMgr + 4 * v1,
            (char *)g_WOL_ChannelMgr + 4 * v1 + 4,
            4 * (g_WOL_BuddyList + 0x3FFFFFFF * (v1 + 1)));
          --g_WOL_BuddyList; /*0x79d1c5*/
          if ( 3 * g_WOL_BuddyList <= dword_B779B4 ) /*0x79d1cf*/
          {
            int v2 = dword_B779B4 / 2; /*0x79d1d8*/
            if ( dword_B779B4 / 2 < 10 ) /*0x79d1dd*/
              v2 = 10; /*0x79d1df*/
            if ( v2 < dword_B779B4 ) /*0x79d1e6*/
            {
              void * v3 = __2_YAPAXI_Z(4 * v2); /*0x79d1f0*/
              AbstractClass *v4 = g_WOL_ChannelMgr; /*0x79d1f5*/
              void * v5 = v3; /*0x79d200*/
              if ( g_WOL_ChannelMgr ) /*0x79d202*/
              {
                qmemcpy(v3, g_WOL_ChannelMgr, 4 * g_WOL_BuddyList); /*0x79d20c*/
                v4 = g_WOL_ChannelMgr; /*0x79d20e*/
              }
              __3_YAXPAX_Z(v4); /*0x79d215*/
              g_WOL_ChannelMgr = v5; /*0x79d21d*/
              dword_B779B4 = v2; /*0x79d223*/
            }
          }
        }
      }
      if ( String::Length((const char **)&v12) ) /*0x79d22d*/
        String::Append((const char **)&v12, DataGlobal_8318B8); /*0x79d23f*/
      String::Append2((const char **)&v12, (char **)&v13); /*0x79d24d*/
      DeleteAndZero(&v13); /*0x79d256*/
      --v14; /*0x79d260*/
    }
    while ( v14 ); /*0x79d264*/
  }
  int v6 = *(_DWORD *)g_UIPointerTable; /*0x79d27c*/
  int v10 = g_NetworkRematchState & 0xFFFF00; /*0x79d285*/
  char * v7 = String::GetOrEmpty((char **)&v12); /*0x79d28a*/
  (*(void (__stdcall **)(LPVOID, void *, int, char *, int, int, _DWORD, _DWORD))(v6 + 20))( /*0x79d2a3*/
    g_UIPointerTable,
    &g_WOL_ConnectFlag,
    g_WOL_GameConfig,
    v7,
    v10,
    -1,
    0,
    0);
  int v8 = *(_DWORD *)g_UIPointerTable; /*0x79d2b7*/
  int v11 = g_NetworkRematchState & 0xFFFF00; /*0x79d2b9*/
  char * v9 = String::GetOrEmpty((char **)&v12); /*0x79d2be*/
  (*(void (__stdcall **)(LPVOID, void *, int, char *, int))(v8 + 56))( /*0x79d2d6*/
    g_UIPointerTable,
    &g_WOL_ConnectFlag,
    g_WOL_GameConfig,
    v9,
    v11);
  DeleteAndZero(&v12); /*0x79d2dd*/
}
}
} // namespace gamemd

// 0x79D2F0
namespace gamemd {
AbstractClass * * WOL_RefreshGameList()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // esi
  char **v10; // ecx
  int j; // [esp+10h] [ebp-4h]

  for ( i = 0; i < g_WOL_BuddyList; ++i ) /*0x79d2fe*/
    DeleteAndZero((void **)g_WOL_ChannelMgr + i); /*0x79d308*/
  int v1 = 0; /*0x79d31c*/
  g_WOL_BuddyList = 0; /*0x79d320*/
  for ( j = 0; v1 < g_WindowManager; j = v1 ) /*0x79d32e*/
  {
  void *v12; // [esp+Ch] [ebp-8h] BYREF
    unknown_libname_73(&v12); /*0x79d33a*/
    if ( v1 >= 0 && v1 < g_WindowManager ) /*0x79d349*/
      String::Reassign((char **)&v12, (const char **)g_WOL_LoginQueue + v1); /*0x79d359*/
    int v2 = g_WOL_BuddyList; /*0x79d35e*/
    BlowStraw *v3 = g_WOL_BuddyList; /*0x79d363*/
    int v11 = g_WOL_BuddyList; /*0x79d367*/
    int v4 = dword_B779B4; /*0x79d371*/
    if ( g_WOL_BuddyList >= dword_B779B4 ) /*0x79d379*/
    {
      v4 = 2 * g_WOL_BuddyList; /*0x79d383*/
      if ( 2 * g_WOL_BuddyList < 10 ) /*0x79d389*/
        v4 = 10; /*0x79d38b*/
      void * v5 = __2_YAPAXI_Z(4 * v4); /*0x79d39f*/
      memset(v5, 0, 4 * ((unsigned int)(4 * v4) >> 2)); /*0x79d3ad*/
      AbstractClass *v6 = g_WOL_ChannelMgr; /*0x79d3b6*/
      if ( g_WOL_ChannelMgr ) /*0x79d3bd*/
      {
        qmemcpy(v5, g_WOL_ChannelMgr, 4 * g_WOL_BuddyList); /*0x79d3c9*/
        v6 = g_WOL_ChannelMgr; /*0x79d3cb*/
        v3 = v11; /*0x79d3d0*/
      }
      __3_YAXPAX_Z(v6); /*0x79d3d5*/
      v2 = g_WOL_BuddyList; /*0x79d3da*/
      v1 = j; /*0x79d3df*/
      g_WOL_ChannelMgr = v5; /*0x79d3e6*/
      dword_B779B4 = v4; /*0x79d3ec*/
    }
    if ( v2 >= v4 ) /*0x79d3f4*/
    {
      int v7 = 2 * v2; /*0x79d3f6*/
      if ( 2 * v2 < 10 ) /*0x79d3fc*/
        v7 = 10; /*0x79d3fe*/
      void * v8 = __2_YAPAXI_Z(4 * v7); /*0x79d412*/
      memset(v8, 0, 4 * ((unsigned int)(4 * v7) >> 2)); /*0x79d420*/
      AbstractClass *v9 = g_WOL_ChannelMgr; /*0x79d429*/
      if ( g_WOL_ChannelMgr ) /*0x79d430*/
      {
        qmemcpy(v8, g_WOL_ChannelMgr, 4 * g_WOL_BuddyList); /*0x79d43c*/
        v9 = g_WOL_ChannelMgr; /*0x79d43e*/
        v3 = v11; /*0x79d443*/
      }
      __3_YAXPAX_Z(v9); /*0x79d448*/
      v2 = g_WOL_BuddyList; /*0x79d44d*/
      v1 = j; /*0x79d452*/
      g_WOL_ChannelMgr = v8; /*0x79d459*/
      dword_B779B4 = v7; /*0x79d45f*/
    }
    if ( v3 < v2 ) /*0x79d467*/
    {
      memcpy((char *)g_WOL_ChannelMgr + 4 * v3 + 4, (char *)g_WOL_ChannelMgr + 4 * v3, 4 * (v2 + 0x3FFFFFFF * v3)); /*0x79d484*/
      v2 = g_WOL_BuddyList; /*0x79d489*/
    }
    v10 = (char **)((char *)g_WOL_ChannelMgr + 4 * v3); /*0x79d497*/
    if ( v10 ) /*0x79d49c*/
    {
      String::AssignFromPtr(v10, (const char **)&v12); /*0x79d4a3*/
      v2 = g_WOL_BuddyList; /*0x79d4a8*/
    }
    g_WOL_BuddyList = v2 + 1; /*0x79d4b2*/
    DeleteAndZero(&v12); /*0x79d4b7*/
    ++v1; /*0x79d4c1*/
  }
  SendGameListWOL(); /*0x79d4d0*/
}
}
} // namespace gamemd

// 0x79D4E0
namespace gamemd {
AbstractClass * * CleanupWOLSession()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // esi
  void **v5; // edi
  unsigned int j; // ebp
  void **v9; // edi
  int k; // esi

  for ( i = 0; i < g_WindowManager; ++i ) /*0x79d4ee*/
    DeleteAndZero((void **)g_WOL_LoginQueue + i); /*0x79d4f8*/
  int v1 = 0; /*0x79d50c*/
  for ( g_WindowManager = 0; v1 < g_WOL_RequestManager; ++v1 ) /*0x79d516*/
    DeleteAndZero((void **)g_WOL_SessionID + v1); /*0x79d521*/
  unsigned int v2 = dword_B76998; /*0x79d530*/
  unsigned int v3 = 0; /*0x79d536*/
  for ( g_WOL_RequestManager = 0; v3 < dword_B76998; v2 = dword_B76998 ) /*0x79d541*/
  {
    int v4 = *((_DWORD *)g_WOL_AccountInfo + v3); /*0x79d549*/
    while ( v4 ) /*0x79d54e*/
    {
      v5 = (void **)v4; /*0x79d550*/
      v4 = *(_DWORD *)(v4 + 8); /*0x79d552*/
      DeleteAndZero(v5); /*0x79d55b*/
      __3_YAXPAX_Z(v5); /*0x79d561*/
    }
    *((_DWORD *)g_WOL_AccountInfo + v3++) = 0; /*0x79d573*/
  }
  dword_B76994 = 0; /*0x79d586*/
  if ( v2 > dword_B769C0 ) /*0x79d58e*/
  {
    do /*0x79d5af*/
    {
      if ( byte_B769A4 ) /*0x79d596*/
        break; /*0x79d596*/
      RemoveWOLPlayerLogin_Remove(&g_WOL_AccountInfo); /*0x79d59d*/
    }
    while ( dword_B76998 > (unsigned int)dword_B769C0 ); /*0x79d5af*/
  }
  unsigned int v6 = g_WOL_PacketQueue; /*0x79d5b1*/
  for ( j = 0; j < g_WOL_PacketQueue; v6 = g_WOL_PacketQueue ) /*0x79d5ba*/
  {
    int v8 = *((_DWORD *)g_WOL_EventQueue + j); /*0x79d5c2*/
    while ( v8 ) /*0x79d5c7*/
    {
      v9 = (void **)v8; /*0x79d5c9*/
      v8 = *(_DWORD *)(v8 + 272); /*0x79d5cb*/
      DeleteAndZero(v9); /*0x79d5d7*/
      __3_YAXPAX_Z(v9); /*0x79d5dd*/
    }
    *((_DWORD *)g_WOL_EventQueue + j++) = 0; /*0x79d5ef*/
  }
  dword_B7660C = 0; /*0x79d605*/
  if ( v6 > dword_B76638 ) /*0x79d60c*/
  {
    do /*0x79d62d*/
    {
      if ( byte_B7661C ) /*0x79d614*/
        break; /*0x79d614*/
      HashTable::Shrink(&g_WOL_EventQueue); /*0x79d61b*/
    }
    while ( g_WOL_PacketQueue > (unsigned int)dword_B76638 ); /*0x79d62d*/
  }
  (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 220))(ppv); /*0x79d637*/
  if ( g_GameOptionsFlags != 3 && g_GameOptionsFlags != 1 && g_GameOptionsFlags != 2 ) /*0x79d657*/
  {
    dword_B778C8 = time(0); /*0x79d66d*/
    if ( !RequestChannelListExWOL(41, 1u, 0) ) /*0x79d673*/
    {
      SetEvent(hEvent); /*0x79d682*/
      RefreshGameListWOL(); /*0x79d688*/
      return; /*0x79d690*/
    }
    for ( k = 0; k < g_WOL_RequestManager; ++k ) /*0x79d69a*/
      Object::DtorWithDelete((void **)g_WOL_SessionID + k, 0); /*0x79d6a6*/
    int v11 = 0; /*0x79d6ba*/
    for ( g_WOL_RequestManager = 0; v11 < g_WindowManager; ++v11 ) /*0x79d6c4*/
    {
  void *v12; // [esp+8h] [ebp-4h] BYREF
      unknown_libname_73(&v12); /*0x79d6ca*/
      DynamicStringArray::Get(&g_WindowManager, (char **)&v12, v11); /*0x79d6da*/
      StringVector::Insert(&g_WOL_RequestManager, (const char **)&v12, g_WOL_RequestManager); /*0x79d6ef*/
      DeleteAndZero(&v12); /*0x79d6f8*/
    }
    Network_Cleanup(); /*0x79d707*/
  }
  RefreshGameListWOL(); /*0x79d70c*/
}
}
} // namespace gamemd

// 0x79D720
namespace gamemd {
void WOLLoginDialogProc(HWND hWnd, unsigned int a2, int a3, HWND a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  HWND v4; // ebp
  int result; // eax
  HWND DlgItem; // edi
  HWND v11; // eax
  HWND v12; // esi
  HWND v14; // ebp
  CampaignScore *v16; // eax
  HWND v18; // eax
  HWND v19; // eax
  v4 = a4; /*0x79d729*/
  unsigned int v5 = a2; /*0x79d731*/
  unsigned int v6 = a3; /*0x79d739*/
  result = BaseDialogProc(hWnd, a2, a3, (unsigned int)a4); /*0x79d746*/
  if ( !result ) /*0x79d74d*/
  {
    if ( v5 <= 0x2B ) /*0x79d756*/
    {
      if ( v5 == 43 ) /*0x79d758*/
      {
        Dialog::Resize((char *)v4); /*0x79d7a8*/
        return 1; /*0x79d7b9*/
      }
      unsigned int v8 = v5 - 2; /*0x79d75a*/
      if ( v8 ) /*0x79d75d*/
      {
        unsigned int v9 = v8 - 13; /*0x79d763*/
        if ( !v9 ) /*0x79d766*/
        {
          Dialog::DrawBackground(hWnd); /*0x79d782*/
          Dialog::StopBink(hWnd); /*0x79d789*/
          ValidateRect(hWnd, 0); /*0x79d791*/
          return 1; /*0x79d7a3*/
        }
        if ( v9 == 5 ) /*0x79d76b*/
          return 1; /*0x79d77d*/
      }
      return 0; /*0x79da81*/
    }
    if ( v5 != 273 ) /*0x79d7c2*/
    {
      if ( v5 == 1175 ) /*0x79d7ca*/
      {
        DlgItem = GetDlgItem(hWnd, 1344); /*0x79d7e6*/
        SendMessageA(DlgItem, 0xC5u, 0x78u, 0); /*0x79d7f0*/
        SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x79d7ff*/
        v11 = GetDlgItem(hWnd, 1474); /*0x79d809*/
        EnableWindow(v11, 0); /*0x79d80c*/
        v12 = GetDlgItem(hWnd, 1810); /*0x79d81f*/
        char * v13 = String::GetOrEmpty_Alt((char **)&g_WOL_LoginObject); /*0x79d821*/
        SendMessageA(v12, 0x4B4u, 0, (LPARAM)v13); /*0x79d82f*/
        return 0; /*0x79d83a*/
      }
      return 0; /*0x79d7ca*/
    }
    if ( (unsigned __int16)v6 == 1344 ) /*0x79d849*/
    {
      unsigned int v17 = HIWORD(v6); /*0x79d985*/
      switch ( v17 ) /*0x79d98e*/
      {
        case 0x300u: /*0x79d98e*/
          unknown_libname_74(&a4); /*0x79da3a*/
          GetEditControlText(v4, (void **)&a4); /*0x79da48*/
          BOOL v20 = WideString::Length((const wchar_t **)&a4) != 0; /*0x79da61*/
          v19 = GetDlgItem(hWnd, 1474); /*0x79da68*/
          EnableWindow(v19, v20); /*0x79da6f*/
          DeleteAndZero::Alt((void **)&a4); /*0x79da7c*/
          break;
        case 0x400u: /*0x79d98e*/
          unknown_libname_74(&a4); /*0x79d9d7*/
          GetEditControlText(v4, (void **)&a4); /*0x79d9e5*/
          WideString::Assign((wchar_t **)&a2, DataGlobal_831D9C); /*0x79d9f6*/
          WString::TrimRight((const wchar_t **)&a4, (const wchar_t **)&a2); /*0x79da0a*/
          DeleteAndZero::Alt((void **)&a2); /*0x79da16*/
          DeleteAndZero::Alt((void **)&a4); /*0x79da22*/
          return 0; /*0x79da30*/
        case 0x501u: /*0x79d98e*/
          v18 = GetDlgItem(hWnd, 1474); /*0x79d9b7*/
          SendMessageA(v18, 0xF5u, 0, 0); /*0x79d9be*/
          return 0; /*0x79d9cd*/
      }
      return 0; /*0x79d9a2*/
    }
    if ( (unsigned __int16)v6 != 1474 ) /*0x79d854*/
    {
      if ( (unsigned __int16)v6 == 1670 ) /*0x79d85b*/
      {
        CloseDialog(hWnd, 1670); /*0x79d865*/
        return 0; /*0x79d873*/
      }
      return 0; /*0x79d85b*/
    }
    unknown_libname_74(&a4); /*0x79d87d*/
    v14 = GetDlgItem(hWnd, 1344); /*0x79d88e*/
    GetEditControlText(v14, (void **)&a4); /*0x79d899*/
    SendMessageA(v14, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x79d8ab*/
    if ( WideString::Length((const wchar_t **)&a4) ) /*0x79d8b8*/
    {
      WideString::Assign((wchar_t **)&a3, DataGlobal_831D9C); /*0x79d8d1*/
      WString::TrimRight((const wchar_t **)&a4, (const wchar_t **)&a3); /*0x79d8e5*/
      DeleteAndZero::Alt((void **)&a3); /*0x79d8f1*/
  char v21[108]; // [esp+10h] [ebp-6Ch] BYREF
      memset(v21, 0, sizeof(v21)); /*0x79d901*/
      strcpy(&v21[36], String::GetOrEmpty((char **)&g_WOL_LoginObject)); /*0x79d927*/
      int v15 = *(_DWORD *)ppv; /*0x79d936*/
      v16 = WideString::GetOrEmpty((wchar_t **)&a4); /*0x79d93f*/
      (*(void (__stdcall **)(LPVOID, char *, wchar_t *))(v15 + 248))(ppv, v21, v16); /*0x79d950*/
    }
    InvalidateRect(v14, 0, 0); /*0x79d95b*/
    CloseDialog(hWnd, 1474); /*0x79d968*/
    DeleteAndZero::Alt((void **)&a4); /*0x79d974*/
    return 0; /*0x79d97c*/
  }
  return result; /*0x79d771*/
}
}
} // namespace gamemd

// 0x79DA90
namespace gamemd {
char ** ExtractChatCommand(char ** a1, HWND a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  LRESULT v4; // esi

  v4 = SendMessageA(a2, 0x188u, 0, 0); /*0x79daab*/
  if ( v4 == -1 ) /*0x79dab0*/
    v4 = 0; /*0x79dab2*/
  if ( v4 >= SendMessageA(a2, 0x18Bu, 0, 0) ) /*0x79dac2*/
  {
LABEL_7:
    String::AssignFromPtr(a1, &g_WOL_LoginObject); /*0x79db15*/
    return a1; /*0x79db21*/
  }
  else
  {
  int v6; // [esp+10h] [ebp-4h] BYREF
    while ( 1 ) /*0x79dac8*/
    {
      unknown_libname_74(&v6); /*0x79dac8*/
      UI_Assign_623F60(a2, v4, (void **)&v6); /*0x79dad6*/
      if ( WideString::GetChar((const wchar_t **)&v6, 0) == 40 ) /*0x79daea*/
      {
        if ( UI_Helper_7B7980((const wchar_t **)&v6, 0x29u) ) /*0x79daf2*/
          break; /*0x79daf2*/
      }
      ++v4; /*0x79daff*/
      DeleteAndZero::Alt((void **)&v6); /*0x79db00*/
      if ( v4 >= SendMessageA(a2, 0x18Bu, 0, 0) ) /*0x79db13*/
        goto LABEL_7; /*0x79db13*/
    }
    WideString::RemoveChar((const wchar_t **)&v6, 0x28u); /*0x79db2f*/
    ToWideStringCharAlt(a1, (const wchar_t **)&v6); /*0x79db3a*/
    DeleteAndZero::Alt((void **)&v6); /*0x79db43*/
    return a1; /*0x79db48*/
  }
}
}
} // namespace gamemd

// 0x79DFE0
namespace gamemd {
void WOL_GameSetup_DlgProc(HWND hWnd, unsigned int a2, unsigned int a3, HWND a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  LONG WindowLongA; // ecx
  rc_ptr *v6; // ebx
  char **v10; // ecx
  char **v13; // ecx
  char **v16; // ecx
  HWND v17; // eax
  HWND v18; // eax
  HWND DlgItem; // esi
  HWND v20; // eax
  LONG v24; // [esp+1Ch] [ebp-DCh]
  if ( a2 == 272 && a4 ) /*0x79e009*/
    SetWindowLongA(hWnd, 8, *((_DWORD *)a4 + 1)); /*0x79e012*/
  result = BaseDialogProc(hWnd, a2, a3, (unsigned int)a4); /*0x79e025*/
  if ( !result ) /*0x79e02c*/
  {
  void *v22; // [esp+14h] [ebp-E4h] BYREF
    WindowLongA = GetWindowLongA(hWnd, 8); /*0x79e03b*/
    v24 = WindowLongA; /*0x79e043*/
    if ( a2 > 0x111 ) /*0x79e047*/
    {
      if ( a2 == 1175 ) /*0x79e488*/
      {
        DlgItem = GetDlgItem(hWnd, 1344); /*0x79e4d0*/
        SendMessageA(DlgItem, 0xC5u, 9u, 0); /*0x79e4da*/
        SendMessageA(DlgItem, 0x4D1u, 1u, 0); /*0x79e4e6*/
        SendMessageA(DlgItem, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x79e4f5*/
        v20 = GetDlgItem(hWnd, 1794); /*0x79e4ff*/
        EnableWindow(v20, 0); /*0x79e502*/
      }
      else if ( a2 == 1242 ) /*0x79e48d*/
      {
        v18 = GetDlgItem(hWnd, 1794); /*0x79e49e*/
        PostMessageA(v18, 0xF5u, 0, 0); /*0x79e4a5*/
        return 0; /*0x79e4b7*/
      }
      return 0; /*0x79e48d*/
    }
    if ( a2 != 273 ) /*0x79e04d*/
    {
      switch ( a2 ) /*0x79e052*/
      {
        case 0xFu: /*0x79e052*/
          Dialog::DrawBackground(hWnd); /*0x79e07d*/
          Dialog::StopBink(hWnd); /*0x79e084*/
          ValidateRect(hWnd, 0); /*0x79e08c*/
          break;
        case 0x14u: /*0x79e052*/
          break;
        case 0x2Bu: /*0x79e052*/
          Dialog::Resize((char *)a4); /*0x79e064*/
          return 1; /*0x79e078*/
        default:
          return 0; /*0x79e05c*/
      }
      return 1; /*0x79e0a1*/
    }
    if ( (unsigned __int16)a3 == 1344 ) /*0x79e0b0*/
    {
      if ( HIWORD(a3) ) /*0x79e42b*/
      {
        unknown_libname_73(&v22); /*0x79e438*/
        GetDialogText(a4, &v22); /*0x79e443*/
        int v21 = (unsigned __int8)MapSeed::CheckName((const char **)&v22); /*0x79e456*/
        v17 = GetDlgItem(hWnd, 1794); /*0x79e45d*/
        EnableWindow(v17, v21); /*0x79e464*/
        DeleteAndZero(&v22); /*0x79e46e*/
        return 0; /*0x79e47f*/
      }
      return 0; /*0x79e42e*/
    }
    if ( (unsigned __int16)a3 == 1670 ) /*0x79e0bb*/
    {
      (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1670); /*0x79e419*/
      return 0; /*0x79e428*/
    }
    if ( (unsigned __int16)a3 != 1794 ) /*0x79e0c4*/
      return 0; /*0x79e508*/
  void *v23; // [esp+18h] [ebp-E0h] BYREF
    unknown_libname_73(&v23); /*0x79e0ce*/
    v6 = GetDlgItem(hWnd, 1344); /*0x79e0df*/
    GetDialogText(v6, &v23); /*0x79e0e7*/
    SendMessageA(v6, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x79e0f9*/
    if ( !MapSeed::CheckName((const char **)&v23) || !MapSeed::CheckName((const char **)&v23) ) /*0x79e114*/
    {
LABEL_52:
      InvalidateRect(v6, 0, 0); /*0x79e3df*/
      (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)v24 + 4))(v24, hWnd, 1794); /*0x79e3f6*/
      DeleteAndZero(&v23); /*0x79e3fd*/
      return 0; /*0x79e40e*/
    }
  char v25[108]; // [esp+20h] [ebp-D8h] BYREF
    memset(v25, 0, sizeof(v25)); /*0x79e12e*/
    char * v7 = String::GetOrEmpty_Alt((char **)&v23); /*0x79e134*/
    strncpy(&v25[36], v7, 9u); /*0x79e13f*/
    (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 224))(ppv, v25); /*0x79e154*/
    if ( !MapSeed::CheckName((const char **)&v23) ) /*0x79e165*/
    {
LABEL_51:
      SendGameListWOL(); /*0x79e3da*/
      goto LABEL_52; /*0x79e3da*/
    }
    String::AssignFromPtr((char **)&v22, (const char **)&v23); /*0x79e174*/
    int v8 = g_WindowManager; /*0x79e179*/
    BlowStraw *v9 = g_WindowManager; /*0x79e17e*/
    if ( g_WindowManager >= dword_B73AAC ) /*0x79e18a*/
    {
      DynamicVector::EnsureCapacity(&g_WindowManager); /*0x79e191*/
      v8 = g_WindowManager; /*0x79e196*/
    }
    if ( v8 >= dword_B73AAC ) /*0x79e1a1*/
    {
      DynamicVector::EnsureCapacity(&g_WindowManager); /*0x79e1a8*/
      v8 = g_WindowManager; /*0x79e1ad*/
    }
    if ( v9 < v8 ) /*0x79e1b4*/
    {
      memcpy((char *)g_WOL_LoginQueue + 4 * v9 + 4, (char *)g_WOL_LoginQueue + 4 * v9, 4 * (v8 + 0x3FFFFFFF * v9)); /*0x79e1d1*/
      v8 = g_WindowManager; /*0x79e1d6*/
    }
    v10 = (char **)((char *)g_WOL_LoginQueue + 4 * v9); /*0x79e1e4*/
    if ( v10 ) /*0x79e1e9*/
    {
      String::AssignFromPtr(v10, (const char **)&v22); /*0x79e1f0*/
      v8 = g_WindowManager; /*0x79e1f5*/
    }
    g_WindowManager = v8 + 1; /*0x79e1fb*/
    int v11 = g_WOL_RequestManager; /*0x79e200*/
    BlowStraw *v12 = g_WOL_RequestManager; /*0x79e205*/
    if ( g_WOL_RequestManager >= dword_B76984 ) /*0x79e211*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_RequestManager); /*0x79e218*/
      v11 = g_WOL_RequestManager; /*0x79e21d*/
    }
    if ( v11 >= dword_B76984 ) /*0x79e228*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_RequestManager); /*0x79e22f*/
      v11 = g_WOL_RequestManager; /*0x79e234*/
    }
    if ( v12 < v11 ) /*0x79e23b*/
    {
      memcpy((char *)g_WOL_SessionID + 4 * v12 + 4, (char *)g_WOL_SessionID + 4 * v12, 4 * (v11 + 0x3FFFFFFF * v12)); /*0x79e258*/
      v11 = g_WOL_RequestManager; /*0x79e25d*/
    }
    v13 = (char **)((char *)g_WOL_SessionID + 4 * v12); /*0x79e26b*/
    if ( v13 ) /*0x79e270*/
    {
      String::AssignFromPtr(v13, (const char **)&v22); /*0x79e277*/
      v11 = g_WOL_RequestManager; /*0x79e27c*/
    }
    g_WOL_RequestManager = v11 + 1; /*0x79e282*/
    int v14 = g_WOL_BuddyList; /*0x79e287*/
    BlowStraw *v15 = g_WOL_BuddyList; /*0x79e28c*/
    if ( g_WOL_BuddyList >= dword_B779B4 ) /*0x79e298*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x79e29f*/
      v14 = g_WOL_BuddyList; /*0x79e2a4*/
    }
    if ( v14 >= dword_B779B4 ) /*0x79e2af*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x79e2b6*/
      v14 = g_WOL_BuddyList; /*0x79e2bb*/
    }
    if ( v15 < v14 ) /*0x79e2c2*/
    {
      memcpy((char *)g_WOL_ChannelMgr + 4 * v15 + 4, (char *)g_WOL_ChannelMgr + 4 * v15, 4 * (v14 + 0x3FFFFFFF * v15)); /*0x79e2df*/
      v14 = g_WOL_BuddyList; /*0x79e2e4*/
    }
    v16 = (char **)((char *)g_WOL_ChannelMgr + 4 * v15); /*0x79e2f2*/
    if ( v16 ) /*0x79e2f7*/
    {
      String::AssignFromPtr(v16, (const char **)&v22); /*0x79e2fe*/
      v14 = g_WOL_BuddyList; /*0x79e303*/
    }
    g_WOL_BuddyList = v14 + 1; /*0x79e30e*/
    if ( String::Length(&g_WOL_AuthObject) ) /*0x79e313*/
    {
      if ( (unsigned int)(time(0) - g_WOL_ParseState) < 5 ) /*0x79e331*/
      {
LABEL_50:
        DeleteAndZero(&v22); /*0x79e3d1*/
        goto LABEL_51; /*0x79e3d5*/
      }
      DeleteAndZero::Alt2((void **)&g_WOL_AuthObject); /*0x79e33c*/
    }
    if ( g_WOL_RequestManager ) /*0x79e348*/
    {
      if ( DynamicStringArray::Get(&g_WOL_RequestManager, (char **)&g_WOL_AuthObject, 0) ) /*0x79e35a*/
        DynamicArray::Remove(&g_WOL_RequestManager, 0); /*0x79e36a*/
      g_WOL_ParseState = time(0); /*0x79e376*/
  char v26[108]; // [esp+8Ch] [ebp-6Ch] BYREF
      memset(v26, 0, sizeof(v26)); /*0x79e389*/
      strcpy(&v26[36], String::GetOrEmpty((char **)&g_WOL_AuthObject)); /*0x79e3bc*/
      (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 96))(ppv, v26); /*0x79e3ce*/
    }
    goto LABEL_50; /*0x79e3ce*/
  }
  return result; /*0x79e069*/
}
}
} // namespace gamemd

// 0x79E520
namespace gamemd {
AbstractClass * * WOL_PlayerOptions_DlgProc(HWND hWnd, unsigned int a2, UINT_PTR uIDEvent, HWND a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  LONG WindowLongA; // edi
  HWND v6; // edi
  HWND v7; // edi
  LPARAM v8; // eax
  LPARAM v9; // eax
  int k; // esi
  int m; // esi
  HWND v13; // eax
  int j; // esi
  DLGTEMPLATE *Indirect; // esi
  HWND v17; // eax
  HWND v18; // eax
  HWND v21; // eax
  LRESULT v22; // eax
  HWND v23; // eax
  HWND v24; // eax
  HWND v27; // eax
  HWND v29; // eax
  HWND DlgItem; // esi
  LRESULT v31; // edi
  int i; // esi
  BOOL Buddy; // [esp-4h] [ebp-90h]

  if ( a2 == 272 && a4 ) /*0x79e546*/
    SetWindowLongA(hWnd, 8, *((_DWORD *)a4 + 1)); /*0x79e54f*/
  result = BaseDialogProc(hWnd, a2, uIDEvent, (unsigned int)a4); /*0x79e562*/
  if ( !result ) /*0x79e569*/
  {
    WindowLongA = GetWindowLongA(hWnd, 8); /*0x79e57b*/
    if ( a2 <= 0x2B ) /*0x79e57d*/
    {
      switch ( a2 ) /*0x79e583*/
      {
        case 0x2Bu: /*0x79e583*/
          Dialog::Resize((char *)a4); /*0x79e5f8*/
          return 1; /*0x79e609*/
        case 2u: /*0x79e583*/
          KillTimer(hWnd, 0); /*0x79e5d6*/
          KillTimer(hWnd, 0x704u); /*0x79e5de*/
          Config::SaveObserverMode(); /*0x79e5e0*/
          return 0; /*0x79e5ee*/
        case 0xFu: /*0x79e583*/
          Dialog::DrawBackground(hWnd); /*0x79e5a9*/
          Dialog::StopBink(hWnd); /*0x79e5b0*/
          ValidateRect(hWnd, 0); /*0x79e5b8*/
          return 1; /*0x79e5ca*/
        case 0x14u: /*0x79e583*/
          return 1; /*0x79e5a4*/
      }
      return 0; /*0x79e592*/
    }
    switch ( a2 ) /*0x79e612*/
    {
  char v39[108]; // [esp+20h] [ebp-6Ch] BYREF
  int v37; // [esp+10h] [ebp-7Ch] BYREF
      case 0x111u: /*0x79e612*/
        if ( (*(unsigned __int8 (__thiscall **)(LONG))(*(_DWORD *)WindowLongA + 8))(WindowLongA) ) /*0x79e9dd*/
          return 0; /*0x79e9e2*/
        if ( (unsigned __int16)uIDEvent > 0x689u ) /*0x79e9f4*/
        {
          switch ( (__int16)uIDEvent ) /*0x79ed73*/
          {
            case 1794: /*0x79ed73*/
  _DWORD v38[3]; // [esp+14h] [ebp-78h] BYREF
              SimpleDialogControl::Constructor(v38); /*0x79edc9*/
              v38[0] = &off_7F7624; /*0x79ede2*/
              RunDialog(0x115u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))GameSetupDlgProcWOL, (LPARAM)v38); /*0x79ede6*/
              FillBuddyListWOL(hWnd); /*0x79eded*/
              v38[0] = &off_7F7624; /*0x79edf6*/
              OwnerDrawControl::InitVtable(v38); /*0x79edfa*/
              return 0; /*0x79ee08*/
            case 1795: /*0x79ed73*/
              DlgItem = GetDlgItem(hWnd, 1673); /*0x79ee1f*/
              v31 = SendMessageA(DlgItem, 0x188u, 0, 0); /*0x79ee2b*/
              if ( v31 == -1 ) /*0x79ee30*/
                return 0; /*0x79ee30*/
              unknown_libname_73(&v37); /*0x79ee3a*/
              GetListBoxItemText(DlgItem, v31, (void **)&v37); /*0x79ee48*/
              RemoveWOLPlayerLogin(&v37); /*0x79ee51*/
              SendMessageA(DlgItem, 0x182u, v31, 0); /*0x79ee5f*/
              DeleteAndZero::Alt2((void **)&g_WOL_LoginObject); /*0x79ee66*/
              FillBuddyListWOL(hWnd); /*0x79ee6d*/
              DeleteAndZero((void **)&v37); /*0x79ee76*/
              return 0; /*0x79ee84*/
            case 1796: /*0x79ed73*/
              EnableWindow(a4, 0); /*0x79ee91*/
              dword_B778C8 = time(0); /*0x79eea8*/
              if ( !RequestChannelListExWOL(41, 1u, 0) ) /*0x79eeaf*/
              {
                SetEvent(hEvent); /*0x79eebf*/
                goto LABEL_116; /*0x79eec5*/
              }
              for ( i = 0; i < g_WOL_RequestManager; ++i ) /*0x79eed3*/
                DeleteAndZero((void **)g_WOL_SessionID + i); /*0x79eede*/
              int v33 = 0; /*0x79eef2*/
              for ( g_WOL_RequestManager = 0; v33 < g_WindowManager; ++v33 ) /*0x79ef00*/
              {
                unknown_libname_73(&v37); /*0x79ef06*/
                if ( v33 >= 0 && v33 < g_WindowManager ) /*0x79ef15*/
                  String::Reassign((char **)&v37, (const char **)g_WOL_LoginQueue + v33); /*0x79ef24*/
                StringVector::Insert(&g_WOL_RequestManager, (const char **)&v37, g_WOL_RequestManager); /*0x79ef3a*/
                DeleteAndZero((void **)&v37); /*0x79ef43*/
              }
              if ( !String::Length(&g_WOL_AuthObject) ) /*0x79ef5e*/
                goto LABEL_112; /*0x79ef5e*/
              if ( (unsigned int)(time(0) - g_WOL_ParseState) >= 5 ) /*0x79ef75*/
              {
                DeleteAndZero::Alt2((void **)&g_WOL_AuthObject); /*0x79ef80*/
LABEL_112:
                if ( g_WOL_RequestManager ) /*0x79ef8c*/
                {
                  if ( DynamicStringArray::Get(&g_WOL_RequestManager, (char **)&g_WOL_AuthObject, 0) ) /*0x79ef9a*/
                    DynamicArray::Remove(&g_WOL_RequestManager, 0); /*0x79efaa*/
                  g_WOL_ParseState = time(0); /*0x79efb6*/
                  memset(v39, 0, sizeof(v39)); /*0x79efc6*/
                  strcpy(&v39[36], String::GetOrEmpty((char **)&g_WOL_AuthObject)); /*0x79eff3*/
                  (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 96))(ppv, v39); /*0x79f005*/
                }
              }
LABEL_116:
              SetTimer(hWnd, 0x704u, 0xBB8u, 0); /*0x79f008*/
              break; /*0x79f015*/
            case 1887: /*0x79ed73*/
            case 1888: /*0x79ed73*/
              int v28 = 0; /*0x79ed80*/
              v29 = GetDlgItem(hWnd, 1888); /*0x79ed82*/
              if ( v29 ) /*0x79ed8a*/
                v28 = SendMessageA(v29, 0xF0u, 0, 0); /*0x79ed9a*/
              if ( (_WORD)uIDEvent == 1887 ) /*0x79eda1*/
                v28 = v28 == 0; /*0x79edaa*/
              g_MenuStateFlags = v28; /*0x79edae*/
              Dialog::RefreshDialogsGame(0); /*0x79edb4*/
              return 0; /*0x79edc2*/
            default:
              return 0;
          }
          return 0; /*0x79f015*/
        }
        if ( (unsigned __int16)uIDEvent != 1673 ) /*0x79e9fa*/
        {
          if ( (unsigned __int16)uIDEvent > 0x62Bu ) /*0x79ea05*/
          {
            if ( (unsigned __int16)uIDEvent == 1581 ) /*0x79eb04*/
            {
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1581); /*0x79eb32*/
              return 0; /*0x79eb3e*/
            }
            if ( (unsigned __int16)uIDEvent == 1670 ) /*0x79eb09*/
            {
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1670); /*0x79eb19*/
              return 0; /*0x79eb25*/
            }
          }
          else
          {
            switch ( (unsigned __int16)uIDEvent ) /*0x79ea0b*/
            {
              case 0x62Bu: /*0x79ea0b*/
                (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1579); /*0x79eaf0*/
                return 0; /*0x79eafc*/
              case 0x540u: /*0x79ea0b*/
                if ( HIWORD(uIDEvent) == 768 ) /*0x79ea8f*/
                {
                  unknown_libname_73(&v37); /*0x79ea99*/
                  GetDialogText(a4, (void **)&v37); /*0x79eaa9*/
                  BOOL v34 = String::Length((const char **)&v37) != 0; /*0x79eabd*/
                  v17 = GetDlgItem(hWnd, 1794); /*0x79eac4*/
                  EnableWindow(v17, v34); /*0x79eacb*/
                  DeleteAndZero((void **)&v37); /*0x79ead5*/
                  return 0; /*0x79eae3*/
                }
                break;
              case 0x5C2u: /*0x79ea0b*/
                Indirect = (DLGTEMPLATE *)CreateDialogIndirect( /*0x79ea41*/
                                            g_hInstance,
                                            286,
                                            g_hWnd,
                                            (DLGPROC)ChatDialog::DlgProc,
                                            0);
                SetupDialog((HWND)Indirect, 286); /*0x79ea4a*/
                SendMessageA((HWND)Indirect, 0x4A9u, 0, 1); /*0x79ea59*/
                ShowWindow((HWND)Indirect, 1); /*0x79ea62*/
                MessageDialogLoopAlt((HWND)Indirect, (unsigned __int8 (*)(void))Game::ProcessIdle, 0, 1, 1); /*0x79ea75*/
                return 0; /*0x79ea83*/
            }
          }
          return 0; /*0x79ea1d*/
        }
        if ( HIWORD(uIDEvent) != 1 ) /*0x79eb45*/
        {
          if ( HIWORD(uIDEvent) == 2 ) /*0x79eb4c*/
          {
            if ( FindBuddyWOL() ) /*0x79eb52*/
            {
              v18 = GetDlgItem(hWnd, 1581); /*0x79eb6a*/
              SendMessageA(v18, 0xF5u, 0, 0); /*0x79eb71*/
              return 0; /*0x79eb80*/
            }
            if ( String::Length(&g_WOL_LoginObject) ) /*0x79eb88*/
            {
              if ( dword_B76994 ) /*0x79eb9c*/
              {
                int v19 = *((_DWORD *)g_WOL_AccountInfo + (dword_B769A8(&g_WOL_LoginObject) & ((1 << dword_B7699C) - 1))); /*0x79ebc2*/
                if ( v19 ) /*0x79ebc7*/
                {
                  while ( !String::Compare((const char **)v19, &g_WOL_LoginObject) ) /*0x79ebdb*/
                  {
                    v19 = *(_DWORD *)(v19 + 8); /*0x79ebdd*/
                    if ( !v19 ) /*0x79ebe2*/
                      return 0; /*0x79ebed*/
                  }
                  _DWORD * v20 = (_DWORD *)(v19 + 4); /*0x79ebf8*/
                  if ( v20 ) /*0x79ebfd*/
                  {
                    if ( *v20 > 2u ) /*0x79ec07*/
                    {
                      v21 = GetDlgItem(hWnd, 1474); /*0x79ec21*/
                      SendMessageA(v21, 0xF5u, 0, 0); /*0x79ec28*/
                      return 0; /*0x79ec37*/
                    }
                  }
                }
              }
            }
          }
          return 0; /*0x79ec07*/
        }
        v22 = SendMessageA(a4, 0x188u, 0, 0); /*0x79ec4b*/
        if ( v22 == -1 ) /*0x79ec54*/
          DeleteAndZero::Alt2((void **)&g_WOL_LoginObject); /*0x79ec5b*/
        else
          GetListBoxItemText(a4, v22, (void **)&g_WOL_LoginObject); /*0x79ec6b*/
        BOOL v35 = String::Length(&g_WOL_LoginObject) != 0; /*0x79ec88*/
        v23 = GetDlgItem(hWnd, 1795); /*0x79ec8f*/
        EnableWindow(v23, v35); /*0x79ec98*/
        Buddy = FindBuddyWOL(); /*0x79eca4*/
        v24 = GetDlgItem(hWnd, 1581); /*0x79ecab*/
        EnableWindow(v24, Buddy); /*0x79ecae*/
        if ( String::Length(&g_WOL_LoginObject) ) /*0x79ecb5*/
        {
          if ( !dword_B76994 ) /*0x79eccb*/
            goto LABEL_88; /*0x79eccb*/
          int v25 = *((_DWORD *)g_WOL_AccountInfo + (dword_B769A8(&g_WOL_LoginObject) & ((1 << dword_B7699C) - 1))); /*0x79eced*/
          if ( !v25 ) /*0x79ecf2*/
            goto LABEL_88; /*0x79ecf2*/
          while ( !String::Compare((const char **)v25, &g_WOL_LoginObject) ) /*0x79ed02*/
          {
            v25 = *(_DWORD *)(v25 + 8); /*0x79ed04*/
            if ( !v25 ) /*0x79ed09*/
            {
              LOBYTE(v37) = 0; /*0x79ed0b*/
              goto LABEL_90; /*0x79ed10*/
            }
          }
          _DWORD * v26 = (_DWORD *)(v25 + 4); /*0x79ed16*/
          if ( v26 && *v26 > 2u ) /*0x79ed21*/
            LOBYTE(v37) = 1; /*0x79ed2f*/
          else
LABEL_88:
            LOBYTE(v37) = 0; /*0x79ed28*/
        }
        else
        {
          LOBYTE(v37) = 0; /*0x79ecbe*/
        }
LABEL_90:
        v27 = GetDlgItem(hWnd, 1474); /*0x79ed34*/
        EnableWindow(v27, (unsigned __int8)v37); /*0x79ed48*/
        ShowUserProfileWOL(hWnd); /*0x79ed4c*/
        return 0; /*0x79ed54*/
      case 0x113u: /*0x79e612*/
        if ( uIDEvent ) /*0x79e803*/
        {
          if ( uIDEvent == 1796 ) /*0x79e80b*/
          {
            KillTimer(hWnd, 0x704u); /*0x79e813*/
            v13 = GetDlgItem(hWnd, 1796); /*0x79e81d*/
            EnableWindow(v13, 1); /*0x79e824*/
            return 0; /*0x79e833*/
          }
          return 0; /*0x79e80b*/
        }
        if ( (unsigned int)(time(0) - dword_B778C8) <= 0x1E ) /*0x79e84b*/
          return 0; /*0x79e84b*/
        dword_B778C8 = time(0); /*0x79e862*/
        if ( !RequestChannelListExWOL(41, 1u, 0) ) /*0x79e869*/
        {
          SetEvent(hEvent); /*0x79e878*/
          return 0; /*0x79e887*/
        }
        for ( j = 0; j < g_WOL_RequestManager; ++j ) /*0x79e893*/
          DeleteAndZero((void **)g_WOL_SessionID + j); /*0x79e89e*/
        int v15 = 0; /*0x79e8b2*/
        for ( g_WOL_RequestManager = 0; v15 < g_WindowManager; ++v15 ) /*0x79e8c0*/
        {
          unknown_libname_73(&v37); /*0x79e8c6*/
          if ( v15 >= 0 && v15 < g_WindowManager ) /*0x79e8d5*/
            String::Reassign((char **)&v37, (const char **)g_WOL_LoginQueue + v15); /*0x79e8e5*/
          StringVector::Insert(&g_WOL_RequestManager, (const char **)&v37, g_WOL_RequestManager); /*0x79e8fb*/
          DeleteAndZero((void **)&v37); /*0x79e904*/
        }
        if ( String::Length(&g_WOL_AuthObject) ) /*0x79e918*/
        {
          if ( (unsigned int)(time(0) - g_WOL_ParseState) < 5 ) /*0x79e936*/
            return 0; /*0x79e936*/
          DeleteAndZero::Alt2((void **)&g_WOL_AuthObject); /*0x79e941*/
        }
        if ( !g_WOL_RequestManager ) /*0x79e94d*/
          return 0; /*0x79e94d*/
        if ( DynamicStringArray::Get(&g_WOL_RequestManager, (char **)&g_WOL_AuthObject, 0) ) /*0x79e95f*/
          DynamicArray::Remove(&g_WOL_RequestManager, 0); /*0x79e96f*/
        g_WOL_ParseState = time(0); /*0x79e97b*/
        memset(v39, 0, sizeof(v39)); /*0x79e98b*/
        strcpy(&v39[36], String::GetOrEmpty((char **)&g_WOL_AuthObject)); /*0x79e9b8*/
        (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 96))(ppv, v39); /*0x79e9ca*/
        return 0; /*0x79e9d0*/
      case 0x497u: /*0x79e612*/
        Dialog::RefreshDialogsGame(hWnd); /*0x79e62f*/
        v6 = GetDlgItem(hWnd, 1673); /*0x79e655*/
        SendMessageA(v6, 0x4A6u, dword_B765F0, dword_84A1C4); /*0x79e65e*/
        SendMessageA(v6, 0x4A6u, 0, dword_84A1C8); /*0x79e66e*/
        SendMessageA(v6, 0x4A6u, 0, dword_84A1CC); /*0x79e67f*/
        SendMessageA(v6, 0x4A6u, 0, dword_84A1D0); /*0x79e690*/
        SendMessageA(v6, 0x4A6u, dword_B73E3C, dword_84A1D4); /*0x79e6a5*/
        SendMessageA(v6, 0x4A6u, 0, dword_84A1D8); /*0x79e6b6*/
        v7 = GetDlgItem(hWnd, 1796); /*0x79e6cc*/
        v8 = HashTable::Find(g_DialogHashTable, g_Str_File_wouref_pcx, 0); /*0x79e6ce*/
        SendMessageA(v7, 0x49Cu, 0, v8); /*0x79e6dc*/
        v9 = HashTable::Find(g_DialogHashTable, g_Str_File_wodref_pcx, 0); /*0x79e6ea*/
        SendMessageA(v7, 0x4AAu, 0, v9); /*0x79e6f8*/
        for ( k = 0; k < g_WindowManager; ++k ) /*0x79e703*/
          Object::DtorWithDelete((void **)g_WOL_LoginQueue + k, 0); /*0x79e70f*/
        int v11 = 0; /*0x79e725*/
        for ( g_WindowManager = 0; v11 < g_WOL_RequestManager; ++v11 ) /*0x79e72f*/
          Object::DtorWithDelete((void **)g_WOL_SessionID + v11, 0); /*0x79e73b*/
        g_WOL_RequestManager = 0; /*0x79e74f*/
        HashTable::CleanupAndResize(&g_WOL_AccountInfo); /*0x79e755*/
        HashTable::Rebuild(&g_WOL_EventQueue); /*0x79e75f*/
        (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 220))(ppv); /*0x79e76c*/
        if ( g_GameOptionsFlags != 3 && g_GameOptionsFlags != 1 && g_GameOptionsFlags != 2 ) /*0x79e784*/
          RefreshChannelListWOL(); /*0x79e786*/
        Array::CleanupArrayWOL(&g_WOL_BuddyList); /*0x79e790*/
        for ( m = 0; m < g_WindowManager; ++m ) /*0x79e79e*/
        {
          unknown_libname_73(&v37); /*0x79e7a4*/
          DynamicStringArray::Get(&g_WindowManager, (char **)&v37, m); /*0x79e7b4*/
          StringVector::Insert(&g_WOL_BuddyList, (const char **)&v37, g_WOL_BuddyList); /*0x79e7ca*/
          DeleteAndZero((void **)&v37); /*0x79e7d3*/
        }
        SendGameListWOL(); /*0x79e7e2*/
        SetTimer(hWnd, 0, 0x3E8u, 0); /*0x79e7ef*/
        return 0; /*0x79e7fe*/
      default:
        return 0; /*0x79f01b*/
    }
  }
  return result; /*0x79e598*/
}
}
} // namespace gamemd

// 0x79F0A0
namespace gamemd {
char sub_79F0A0(char ** a1, int * a2, char * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  ObjectClass *v3 = a3; /*0x79f0a6*/
  memset(a3, 0, 0x10Cu); /*0x79f0ba*/
  int v5 = *a2; /*0x79f0bc*/
  int v6 = 0; /*0x79f0be*/
  int v10 = 0; /*0x79f0c2*/
  if ( *a2 <= 0 ) /*0x79f0c6*/
  {
LABEL_8:
    memset(v3, 0, 0x10Cu); /*0x79f115*/
    return 0; /*0x79f11a*/
  }
  else
  {
    int v7 = 0; /*0x79f0c8*/
    while ( 1 ) /*0x79f0ca*/
    {
      if ( v7 >= 0 && v6 < v5 ) /*0x79f0d0*/
      {
        qmemcpy(a3, (const void *)(v7 + a2[2]), 0x10Cu); /*0x79f0e0*/
        v3 = a3; /*0x79f0e2*/
        v6 = v10; /*0x79f0e6*/
      }
      char * v8 = String::GetOrEmpty_Alt(a1); /*0x79f0ee*/
      if ( !_strcmpi(v3 + 52, v8) ) /*0x79f0f8*/
        return 1; /*0x79f12f*/
      v5 = *a2; /*0x79f104*/
      ++v6; /*0x79f106*/
      v7 += 268; /*0x79f107*/
      v10 = v6; /*0x79f10f*/
      if ( v6 >= *a2 ) /*0x79f113*/
        goto LABEL_8; /*0x79f113*/
    }
  }
}
}
} // namespace gamemd

// 0x79F140
namespace gamemd {
Coord * * WOL_GameOptionsScreen()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  wchar_t *String; // eax
  int i; // esi
  HWND v3; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  unsigned int j; // ebx
  void **v9; // edi
  DWORD (__stdcall *v10)(DWORD, const HANDLE *, BOOL, DWORD); // ebx
  HANDLE *v11; // esi
  HWND v12; // edi
  DWORD m; // esi
  HANDLE *v15; // esi
  DWORD v16; // esi
  HWND v17; // eax
  HWND v18; // eax
  HWND v19; // eax
  HANDLE *v20; // esi
  HANDLE *v26; // esi
  DWORD k; // esi
  HWND v33; // eax
  HWND v34; // eax
  HWND v35; // eax
  wchar_t *v36; // eax
  HWND v37; // eax
  HWND v38; // eax
  HWND v39; // eax
  _DWORD v44[3]; // [esp+14h] [ebp-228h] BYREF
  void *v45; // [esp+20h] [ebp-21Ch] BYREF
  g_NetworkLobby_Init = 0; /*0x79f146*/
  g_NetworkLobbyState = 0; /*0x79f153*/
  Network::Init(); /*0x79f159*/
  if ( g_WOL_RequestState && !RequestChannelListWOL() ) /*0x79f166*/
    goto LABEL_6; /*0x79f166*/
  GameOptionsScreenWOL_Helper(); /*0x79f16f*/
  if ( !RequestChannelList2WOL(0, 0) ) /*0x79f178*/
  {
    SetEvent(Handles); /*0x79f187*/
    DataGlobal_A8B248 = 0; /*0x79f18d*/
    return 0; /*0x79f19f*/
  }
  if ( !RequestChannelListWOL() ) /*0x79f1a0*/
  {
LABEL_6:
    DataGlobal_A8B248 = 0; /*0x79f1aa*/
    return 0; /*0x79f1bb*/
  }
  if ( g_WOL_ChannelState ) /*0x79f1c2*/
  {
    Debug::Log(); /*0x79f1d9*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x79f1e9*/
    String = GetStringCSF(g_Str_WOL_LeavingChannel, 0, g_Str_File_wonline_cpp, 10704); /*0x79f1fd*/
    WideString::Assign((wchar_t **)&v45, String); /*0x79f207*/
    ShowUIMessage(64, (wchar_t **)&v45, 1); /*0x79f217*/
    DeleteAndZero::Alt(&v45); /*0x79f220*/
    for ( i = 0; g_WOL_ChannelState; ++i ) /*0x79f22e*/
    {
      if ( i >= 150 ) /*0x79f23c*/
        break; /*0x79f23c*/
      Sleep(0x64u); /*0x79f240*/
      Game::ProcessIdle(); /*0x79f242*/
    }
    v3 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x79f256*/
    if ( v3 ) /*0x79f25d*/
    {
      g_WOL_ChannelList &= ~0x40u; /*0x79f268*/
      if ( !g_WOL_ChannelList ) /*0x79f26e*/
        CloseDialog(v3, 0); /*0x79f274*/
    }
    Current = Dialog::GetCurrent(); /*0x79f279*/
    DlgItem = GetDlgItem(Current, 1344); /*0x79f284*/
    if ( DlgItem ) /*0x79f28c*/
      SetFocus(DlgItem); /*0x79f28f*/
  }
  unsigned int v6 = g_WOL_PacketQueue; /*0x79f295*/
  for ( j = 0; j < g_WOL_PacketQueue; v6 = g_WOL_PacketQueue ) /*0x79f29e*/
  {
    int v8 = *((_DWORD *)g_WOL_EventQueue + j); /*0x79f2a5*/
    while ( v8 ) /*0x79f2aa*/
    {
      v9 = (void **)v8; /*0x79f2ac*/
      v8 = *(_DWORD *)(v8 + 272); /*0x79f2ae*/
      DeleteAndZero(v9); /*0x79f2ba*/
      __3_YAXPAX_Z(v9); /*0x79f2c0*/
    }
    *((_DWORD *)g_WOL_EventQueue + j++) = 0; /*0x79f2d3*/
  }
  dword_B7660C = 0; /*0x79f2e6*/
  if ( v6 > dword_B76638 ) /*0x79f2ee*/
  {
    do /*0x79f310*/
    {
      if ( byte_B7661C ) /*0x79f2f7*/
        break; /*0x79f2f7*/
      HashTable::Shrink(&g_WOL_EventQueue); /*0x79f2fe*/
    }
    while ( g_WOL_PacketQueue > (unsigned int)dword_B76638 ); /*0x79f310*/
  }
  v10 = WaitForMultipleObjects; /*0x79f312*/
  while ( 1 ) /*0x79f31e*/
  {
  int v43; // [esp+10h] [ebp-22Ch] BYREF
    GameOptionsScreenWOL_Load(); /*0x79f31e*/
    SimpleDialogControl::Constructor(v44); /*0x79f327*/
    v44[0] = &off_7F7624; /*0x79f32c*/
    v11 = &Handles; /*0x79f334*/
    do /*0x79f347*/
      ResetEvent(*v11++); /*0x79f33c*/
    while ( (int)v11 < (int)g_WOL_RequestObject ); /*0x79f347*/
    v12 = (HWND)CreateDialog( /*0x79f35d*/
                  0x116u,
                  (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))PlayerOptionsDlgProcWOL,
                  (LPARAM)v44);
    Dialog::Show(v12); /*0x79f361*/
    if ( !(unsigned __int8)ObjectClass::Release(v44) ) /*0x79f36a*/
      break; /*0x79f36a*/
LABEL_33:
    Dialog::Destroy(v12); /*0x79f3e6*/
    GameOptionsScreenWOL_Destroy(); /*0x79f3eb*/
    switch ( ObjectClass::GetMember01(v44) ) /*0x79f411*/
    {
  _BYTE v46[268]; // [esp+24h] [ebp-218h] BYREF
      case 1472: /*0x79f411*/
      case 1670: /*0x79f411*/
        if ( DataGlobal_A8B248 != 4 ) /*0x79fb0d*/
          goto LABEL_143; /*0x79fb0d*/
        goto LABEL_142; /*0x79fb0d*/
      case 1579: /*0x79f411*/
        v15 = &Handles; /*0x79f41e*/
        do /*0x79f431*/
          ResetEvent(*v15++); /*0x79f426*/
        while ( (int)v15 < (int)g_WOL_RequestObject ); /*0x79f431*/
        if ( CreateGameWOL((int)ResetEvent, (int)v15) ) /*0x79f433*/
        {
          g_WOL_ChannelLeaveState = 0; /*0x79f44e*/
          while ( 1 ) /*0x79f475*/
          {
            do /*0x79f475*/
            {
              v16 = v10(0x12u, &Handles, 0, 0x14u); /*0x79f460*/
              if ( v16 != 258 ) /*0x79f468*/
                break; /*0x79f468*/
              Game::ProcessIdle(); /*0x79f46a*/
            }
            while ( !g_WOL_ChannelLeaveState ); /*0x79f475*/
            ResetEvent(*(&Handles + v16)); /*0x79f47f*/
            if ( !v16 || v16 == 6 ) /*0x79f488*/
              break; /*0x79f488*/
            if ( v16 == 15 ) /*0x79f48d*/
            {
              Debug::Log(); /*0x79f986*/
              byte_B77DEC = 0; /*0x79f992*/
              word_B77AD0 = 0; /*0x79f999*/
              g_NetworkLobby_Init = 0; /*0x79f9a0*/
              v44[0] = &off_7F7624; /*0x79f9a7*/
              OwnerDrawControl::InitVtable(v44); /*0x79f9af*/
              return 2; /*0x79f9c3*/
            }
            if ( v16 == 7 ) /*0x79f496*/
            {
              Debug::Log(); /*0x79f9c9*/
              byte_B77DEC = 0; /*0x79f9d6*/
              (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x79f9e0*/
              word_B77AD0 = 0; /*0x79f9e7*/
              g_NetworkLobby_Init = 1; /*0x79f9ee*/
              g_WOL_ChannelLeaveState = 0; /*0x79f9f5*/
              v44[0] = &off_7F7624; /*0x79f9fb*/
              OwnerDrawControl::InitVtable(v44); /*0x79fa03*/
              return 1; /*0x79fa17*/
            }
            if ( g_WOL_ChannelLeaveState ) /*0x79f4a2*/
              goto LABEL_48; /*0x79f4a2*/
          }
          Debug::Log(); /*0x79f4b2*/
          g_WOL_ChannelLeaveState = 1; /*0x79f4ba*/
LABEL_48:
          Debug::Log(); /*0x79f4c4*/
          g_WOL_ChannelLeaveState = 0; /*0x79f4d1*/
        }
        else
        {
          Debug::Log(); /*0x79f441*/
        }
        v17 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x79f4dc*/
        if ( v17 ) /*0x79f4e3*/
        {
          g_WOL_ChannelList = 0; /*0x79f4e9*/
          CloseDialog(v17, 0); /*0x79f4ef*/
        }
        v18 = Dialog::GetCurrent(); /*0x79f4f4*/
        v19 = GetDlgItem(v18, 1344); /*0x79f4ff*/
        if ( v19 ) /*0x79f507*/
          SetFocus(v19); /*0x79f50a*/
        v20 = &Handles; /*0x79f510*/
        do /*0x79f523*/
          ResetEvent(*v20++); /*0x79f518*/
        while ( (int)v20 < (int)g_WOL_RequestObject ); /*0x79f523*/
        if ( word_B77AD0 ) /*0x79f52c*/
          ShowDialogConfirm(&word_B77AD0, 0, (int)GameLoop::Thunk, 0); /*0x79f53b*/
        while ( CloseDialog(0, 0) ) /*0x79f544*/
          ; /*0x79f54d*/
        g_NetworkLobby_Init = 0; /*0x79f55a*/
        goto LABEL_117; /*0x79f561*/
      case 1581: /*0x79f411*/
  char v47[268]; // [esp+130h] [ebp-10Ch] BYREF
        memset(v47, 0, sizeof(v47)); /*0x79f574*/
        if ( !String::Length(&g_WOL_LoginObject) ) /*0x79f57b*/
          goto LABEL_117; /*0x79f57b*/
        v43 = 0; /*0x79f597*/
        if ( !(unsigned __int8)GameOptionsScreenWOL_Helper_7AE8E0(&g_WOL_LoginObject, &v43) ) /*0x79f59b*/
          goto LABEL_117; /*0x79f59b*/
        if ( v43 ) /*0x79f5ae*/
          qmemcpy(v47, (const void *)v43, sizeof(v47)); /*0x79f5bc*/
        int v21 = 0; /*0x79f5cd*/
        v43 = 0; /*0x79f5cf*/
        if ( !(unsigned __int8)GameOptionsScreenWOL_Helper_7AE7C0(&g_WOL_LoginObject, &v43) ) /*0x79f5d3*/
          goto LABEL_117; /*0x79f5da*/
        if ( v43 ) /*0x79f5e6*/
          v21 = *(_DWORD *)v43; /*0x79f5e8*/
        int v22 = v21 - 4; /*0x79f5ea*/
        if ( !v22 ) /*0x79f5ed*/
        {
          int v40 = 0; /*0x79fa80*/
          memset(v46, 0, sizeof(v46)); /*0x79fa82*/
          Coord *v41 = g_WOL_AuthPool; /*0x79fa84*/
          DataGlobal_A8B248 = 4; /*0x79fa89*/
          if ( g_WOL_AuthPool > 0 ) /*0x79fa95*/
          {
            int v42 = 0; /*0x79fa97*/
            while ( 1 ) /*0x79fa99*/
            {
              if ( v42 >= 0 && v40 < v41 ) /*0x79fa9f*/
                qmemcpy(v46, (char *)dword_B73E18 + v42, sizeof(v46)); /*0x79fab3*/
              if ( !_strcmpi(&v46[52], &v47[52]) ) /*0x79fac2*/
                break; /*0x79fac2*/
              v41 = g_WOL_AuthPool; /*0x79face*/
              ++v40; /*0x79fad3*/
              v42 += 268; /*0x79fad4*/
              if ( v40 >= g_WOL_AuthPool ) /*0x79fadc*/
                goto LABEL_143; /*0x79fadc*/
            }
            dword_B77DD4 = atol(&v47[strlen(g_Str_Lob_41_) + 52]); /*0x79faff*/
LABEL_142:
            byte_84A210 = 0; /*0x79fb0f*/
          }
          goto LABEL_143; /*0x79fb0f*/
        }
        if ( v22 != 1 ) /*0x79f5f4*/
          goto LABEL_117; /*0x79f5f4*/
        String::Assign((char **)&v45, &v47[52]); /*0x79f606*/
        int v23 = 0; /*0x79f616*/
        memset(v46, 0, sizeof(v46)); /*0x79f618*/
        signed int v24 = g_WOL_ChatState; /*0x79f61a*/
        if ( (int)g_WOL_ChatState <= 0 ) /*0x79f621*/
        {
  char v30; // al
LABEL_77:
          memset(v46, 0, sizeof(v46)); /*0x79f681*/
          if ( g_WOL_RequestState && !RequestChannelListWOL() ) /*0x79f68c*/
            goto LABEL_84; /*0x79f68c*/
          v26 = &Handles; /*0x79f695*/
          do /*0x79f6ac*/
            ResetEvent(*v26++); /*0x79f69d*/
          while ( (int)v26 < (int)g_WOL_RequestObject ); /*0x79f6ac*/
          if ( !RequestChannelList2WOL(41, 0) ) /*0x79f6b5*/
          {
            SetEvent(Handles); /*0x79f6c5*/
            goto LABEL_84; /*0x79f6cb*/
          }
          if ( !RequestChannelListWOL() ) /*0x79f6cd*/
          {
LABEL_84:
            Debug::Log(); /*0x79f6d6*/
            SetEvent(hEvent); /*0x79f6e9*/
            goto LABEL_94; /*0x79f6ef*/
          }
          v23 = 0; /*0x79f6fc*/
          memset(v46, 0, sizeof(v46)); /*0x79f6fe*/
          signed int v27 = g_WOL_ChatState; /*0x79f700*/
          if ( (int)g_WOL_ChatState <= 0 ) /*0x79f707*/
          {
LABEL_93:
            memset(v46, 0, sizeof(v46)); /*0x79f763*/
LABEL_94:
            v30 = 0; /*0x79f765*/
          }
          else
          {
            int v28 = 0; /*0x79f709*/
            while ( 1 ) /*0x79f70b*/
            {
              if ( v28 >= 0 && v23 < v27 ) /*0x79f711*/
                qmemcpy(v46, (char *)g_WOL_ConnectionHandler + v28, sizeof(v46)); /*0x79f725*/
              char * v29 = String::GetOrEmpty_Alt((char **)&v45); /*0x79f72b*/
              if ( !_strcmpi(&v46[52], v29) ) /*0x79f736*/
                break; /*0x79f736*/
              v27 = g_WOL_ChatState; /*0x79f742*/
              ++v23; /*0x79f747*/
              v28 += 268; /*0x79f748*/
              if ( v23 >= (int)g_WOL_ChatState ) /*0x79f750*/
              {
                v10 = WaitForMultipleObjects; /*0x79f752*/
                goto LABEL_93; /*0x79f752*/
              }
            }
            v10 = WaitForMultipleObjects; /*0x79f775*/
            v30 = 1; /*0x79f77b*/
          }
          if ( !v30 ) /*0x79f769*/
            goto LABEL_115; /*0x79f769*/
          goto LABEL_98; /*0x79f769*/
        }
        v10 = 0; /*0x79f623*/
        while ( 1 ) /*0x79f625*/
        {
          if ( (int)v10 >= 0 && v23 < v24 ) /*0x79f62b*/
            qmemcpy(v46, (char *)v10 + (_DWORD)g_WOL_ConnectionHandler, sizeof(v46)); /*0x79f63f*/
          char * v25 = String::GetOrEmpty_Alt((char **)&v45); /*0x79f645*/
          if ( !_strcmpi(&v46[52], v25) ) /*0x79f650*/
            break; /*0x79f650*/
          v24 = g_WOL_ChatState; /*0x79f660*/
          ++v23; /*0x79f665*/
          v10 = (DWORD (__stdcall *)(DWORD, const HANDLE *, BOOL, DWORD))((char *)v10 + 268); /*0x79f666*/
          if ( v23 >= (int)g_WOL_ChatState ) /*0x79f66e*/
          {
            v10 = WaitForMultipleObjects; /*0x79f670*/
            goto LABEL_77; /*0x79f670*/
          }
        }
LABEL_98:
        if ( !ValidateJoinWOL(g_MenuStateFlags != 0, (int)v46, (int)v10, v23) ) /*0x79f78e*/
        {
          Debug::Log(); /*0x79f79c*/
          v10 = WaitForMultipleObjects; /*0x79f7a1*/
          goto LABEL_116; /*0x79f7aa*/
        }
        v10 = WaitForMultipleObjects; /*0x79f7af*/
        g_WOL_ChannelLeaveState = 0; /*0x79f7bb*/
        v43 = 500; /*0x79f7c5*/
        break; /*0x79f7c5*/
      default:
        goto LABEL_117;
    }
    while ( 1 ) /*0x79f7db*/
    {
      for ( k = WaitForMultipleObjects(0x12u, &Handles, 0, 0x14u); /*0x79f7e3*/
            k == 258;
            k = WaitForMultipleObjects(0x12u, &Handles, 0, 0x14u) )
      {
        if ( g_WOL_ChannelLeaveState ) /*0x79f7eb*/
          break; /*0x79f7eb*/
        Game::ProcessIdle(); /*0x79f7ed*/
      }
      ResetEvent(*(&Handles + k)); /*0x79f810*/
      if ( !k || k == 6 || k == 5 || k == 10 ) /*0x79f838*/
      {
        Debug::Log(); /*0x79f83f*/
        g_WOL_ChannelLeaveState = 1; /*0x79f847*/
      }
      else if ( k == 7 ) /*0x79f856*/
      {
        Debug::Log(); /*0x79fa1d*/
        byte_B77DEC = 0; /*0x79fa2a*/
        (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x79fa34*/
        word_B77AD0 = 0; /*0x79fa3b*/
        g_NetworkLobby_Init = 1; /*0x79fa42*/
        g_WOL_ChannelLeaveState = 0; /*0x79fa49*/
        DeleteAndZero(&v45); /*0x79fa4f*/
        v44[0] = &off_7F7624; /*0x79fa58*/
        OwnerDrawControl::InitVtable(v44); /*0x79fa60*/
        return 1; /*0x79fa74*/
      }
      if ( v43-- < 0 ) /*0x79f863*/
        break; /*0x79f869*/
      if ( g_WOL_ChannelLeaveState ) /*0x79f871*/
        goto LABEL_114; /*0x79f871*/
    }
    Debug::Log(); /*0x79f87d*/
LABEL_114:
    g_WOL_ChannelLeaveState = 0; /*0x79f885*/
LABEL_115:
    Debug::Log(); /*0x79f890*/
LABEL_116:
    DeleteAndZero(&v45); /*0x79f898*/
LABEL_117:
    v44[0] = &off_7F7624; /*0x79f8a3*/
    OwnerDrawControl::InitVtable(v44); /*0x79f8af*/
  }
  while ( 1 ) /*0x79f37f*/
  {
    for ( m = v10(0x12u, &Handles, 0, 0x64u); m == 258; m = v10(0x12u, &Handles, 0, 0x64u) ) /*0x79f387*/
    {
      if ( (unsigned __int8)ObjectClass::Release(v44) ) /*0x79f38d*/
        break; /*0x79f394*/
      Game::ProcessIdle(); /*0x79f396*/
    }
    ResetEvent(*(&Handles + m)); /*0x79f3b9*/
    if ( !m ) /*0x79f3c1*/
      break; /*0x79f3c1*/
    if ( m == 5 ) /*0x79f3ca*/
    {
      v37 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x79f933*/
      if ( v37 ) /*0x79f93a*/
      {
        g_WOL_ChannelList = 0; /*0x79f940*/
        CloseDialog(v37, 0); /*0x79f946*/
      }
      v38 = Dialog::GetCurrent(); /*0x79f94b*/
      v39 = GetDlgItem(v38, 1344); /*0x79f956*/
      if ( v39 ) /*0x79f95e*/
        SetFocus(v39); /*0x79f961*/
      Dialog::Destroy(v12); /*0x79f969*/
      DataGlobal_A8B248 = 0; /*0x79f96e*/
      v36 = GetStringCSF(DataGlobal_84B15C, 0, g_Str_File_wonline_cpp, 27780); /*0x79f97f*/
      goto LABEL_123; /*0x79f97f*/
    }
  int v14; // ecx
    LOBYTE(v14) = 0; /*0x79f3d0*/
    ScreenSaver::Process(v14); /*0x79f3d2*/
    if ( (unsigned __int8)ObjectClass::Release(v44) ) /*0x79f3db*/
      goto LABEL_33; /*0x79f3e2*/
  }
  v33 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x79f8be*/
  if ( v33 ) /*0x79f8c5*/
  {
    g_WOL_ChannelList = 0; /*0x79f8cb*/
    CloseDialog(v33, 0); /*0x79f8d1*/
  }
  v34 = Dialog::GetCurrent(); /*0x79f8d6*/
  v35 = GetDlgItem(v34, 1344); /*0x79f8e1*/
  if ( v35 ) /*0x79f8e9*/
    SetFocus(v35); /*0x79f8ec*/
  Dialog::Destroy(v12); /*0x79f8f4*/
  DataGlobal_A8B248 = 0; /*0x79f8f9*/
  v36 = GetStringCSF(DataGlobal_84B15C, 0, g_Str_File_wonline_cpp, 27771); /*0x79f916*/
LABEL_123:
  ShowDialogConfirm(v36, 0, (int)GameLoop::Thunk, 0); /*0x79f91b*/
  GameOptionsScreenWOL_Destroy(); /*0x79f924*/
LABEL_143:
  v44[0] = &off_7F7624; /*0x79fb16*/
  OwnerDrawControl::InitVtable(v44); /*0x79fb22*/
  return 0; /*0x79f195*/
}
}
} // namespace gamemd

// 0x79FC40
namespace gamemd {
Coord * * WOL_JoinLobby()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  wchar_t *String; // eax
  wchar_t *v2; // eax
  wchar_t *v6; // eax
  HANDLE *v7; // esi
  wchar_t *v10; // eax
  wchar_t *v11; // ecx
  DWORD j; // esi
  ObjectClass *v14; // esi
  wchar_t *v15; // eax
  wchar_t *v16; // eax
  int k; // esi
  HWND v18; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  wchar_t *v21; // eax
  HWND v22; // eax
  wchar_t *v23; // eax
  int m; // esi
  HWND v25; // eax
  HWND v26; // eax
  HWND v27; // eax
  wchar_t *v29; // [esp-4h] [ebp-12Ch] BYREF
  char *String2; // [esp+10h] [ebp-118h] BYREF
  int i; // [esp+14h] [ebp-114h]
  DLGTEMPLATE *Indirect; // [esp+18h] [ebp-110h]

  if ( g_MenuStateFlags ) /*0x79fc53*/
  {
    g_MenuStateFlags = 0; /*0x79fc57*/
    Dialog::RefreshDialogsGame(0); /*0x79fc5d*/
  }
  g_NetworkLobby_Init = 0; /*0x79fc63*/
  g_WOL_GameListState = 0; /*0x79fc6a*/
  g_WOL_IdleHandler = 1; /*0x79fc70*/
  g_WOL_GameProcessState = -1; /*0x79fc7a*/
  g_WOL_GameListPool = time(0); /*0x79fc93*/
  String = GetStringCSF(aTxtAwayQuickma, 0, g_Str_File_wonline_cpp, 28003); /*0x79fca2*/
  byte_B77E40 = 1; /*0x79fcac*/
  WideString::Reassign(&dword_B76230, String); /*0x79fcb4*/
  g_NetworkLobbyState = 0; /*0x79fcb9*/
  Network::Init(); /*0x79fcbf*/
  g_WOL_GameListState = 0; /*0x79fcc9*/
  g_WOL_IdleHandler = 2; /*0x79fcd0*/
  g_WOL_GameProcessState = 30; /*0x79fcd6*/
  g_WOL_GameListPool = time(0); /*0x79fced*/
  g_WOL_AuthPool = 0; /*0x79fcf2*/
  DeleteAndZero::Alt2((void **)&dword_B76AC4); /*0x79fcf8*/
  if ( g_WOL_RequestState && !RequestChannelListWOL() ) /*0x79fd0c*/
    goto LABEL_10; /*0x79fd0c*/
  GameOptionsScreenWOL_Helper(); /*0x79fd0e*/
  if ( !RequestChannelList2WOL(0, 0) ) /*0x79fd17*/
  {
    SetEvent(Handles); /*0x79fd26*/
LABEL_10:
    byte_B77E40 = 0; /*0x79fd66*/
    WideString::Reassign(&dword_B76230, &g_TypeClass_DefaultString); /*0x79fd77*/
    return 0; /*0x79fd88*/
  }
  if ( !RequestChannelListWOL() ) /*0x79fd35*/
    goto LABEL_10; /*0x79fd35*/
  Coord *v1 = g_WOL_AuthPool; /*0x79fd37*/
  if ( !g_WOL_AuthPool ) /*0x79fd3f*/
  {
    v2 = GetStringCSF(aWolNomatchinga, 0, g_Str_File_wonline_cpp, 28045); /*0x79fd58*/
    ShowDialogConfirm(v2, 0, (int)GameLoop::Thunk, 0); /*0x79fd61*/
    goto LABEL_10; /*0x79fd61*/
  }
  String2 = aLob39; /*0x79fd94*/
  char v33[268]; // [esp+1Ch] [ebp-10Ch] BYREF
  memset(v33, 0, sizeof(v33)); /*0x79fd9c*/
  if ( g_GameOptionsFlags != 2 ) /*0x79fda4*/
    String2 = g_Str_Lob_40_; /*0x79fda6*/
  int v4 = 0; /*0x79fdae*/
  if ( g_WOL_AuthPool <= 0 ) /*0x79fdb2*/
    goto LABEL_22; /*0x79fdb2*/
  int v5 = 0; /*0x79fdb4*/
  while ( 1 ) /*0x79fdb6*/
  {
    if ( v5 >= 0 && v4 < v1 ) /*0x79fdbc*/
      qmemcpy(v33, (char *)dword_B73E18 + v5, sizeof(v33)); /*0x79fdd0*/
    if ( !_strnicmp(&v33[52], String2, strlen(String2)) ) /*0x79fdeb*/
      break; /*0x79fdeb*/
    v1 = g_WOL_AuthPool; /*0x79fdf7*/
    ++v4; /*0x79fdfd*/
    v5 += 268; /*0x79fdfe*/
    if ( v4 >= g_WOL_AuthPool ) /*0x79fe06*/
      goto LABEL_22; /*0x79fe06*/
  }
  if ( v4 >= g_WOL_AuthPool ) /*0x79fe10*/
  {
LABEL_22:
    v6 = GetStringCSF(aWolMatchingser, 0, g_Str_File_wonline_cpp, 28069); /*0x79fe12*/
    ShowDialogConfirm(v6, 0, (int)GameLoop::Thunk, 0); /*0x79fe32*/
    return 0; /*0x79fe43*/
  }
  JoinLobbyWOL_Load(); /*0x79fe44*/
  Indirect = (DLGTEMPLATE *)CreateDialogIndirect(g_hInstance, 279, g_hWnd, sub_7A2110, 0); /*0x79fe70*/
  SetupDialog((HWND)Indirect, 279); /*0x79fe74*/
  SendMessageA((HWND)Indirect, 0x4A9u, 0, 1); /*0x79fe82*/
  ShowWindow((HWND)Indirect, 1); /*0x79fe8b*/
  v7 = &Handles; /*0x79fe97*/
  do /*0x79feaa*/
    ResetEvent(*v7++); /*0x79fe9f*/
  while ( (int)v7 < (int)g_WOL_RequestObject ); /*0x79feaa*/
  int v8 = 0; /*0x79feb1*/
  for ( i = 0; v8 < g_WindowManager; ++v8 ) /*0x79feb9*/
    Object::DtorWithDelete((void **)g_WOL_LoginQueue + v8, 0); /*0x79fec5*/
  int v9 = 0; /*0x79fed9*/
  for ( g_WindowManager = 0; v9 < g_WOL_RequestManager; ++v9 ) /*0x79fee3*/
    Object::DtorWithDelete((void **)g_WOL_SessionID + v9, 0); /*0x79feee*/
  g_WOL_RequestManager = 0; /*0x79ff02*/
  HashTable::CleanupAndResize(&g_WOL_AccountInfo); /*0x79ff08*/
  HashTable::Rebuild(&g_WOL_EventQueue); /*0x79ff12*/
  (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 220))(ppv); /*0x79ff1f*/
  if ( g_GameOptionsFlags != 3 && g_GameOptionsFlags != 1 && g_GameOptionsFlags != 2 ) /*0x79ff37*/
    RefreshChannelListWOL(); /*0x79ff39*/
  RefreshGameListWOL(); /*0x79ff3e*/
  do /*0x7a00ff*/
  {
    while ( 1 ) /*0x7a0073*/
    {
      while ( 1 ) /*0x7a005f*/
      {
        while ( 1 ) /*0x79ff50*/
        {
          if ( g_WOL_IdleHandler == 2 ) /*0x79ff57*/
          {
            String::Assign(&String2, aZotclot9); /*0x79ff62*/
            v10 = GetStringCSF(g_Str_TXT_JOINLOB, 0, g_Str_File_wonline_cpp, 28095); /*0x79ff78*/
            v29 = v11; /*0x79ff7d*/
            WideString::Assign(&v29, v10); /*0x79ff81*/
            Coord *v12 = LeaveChannelExWOL((int)v33, &String2, v29); /*0x79ff97*/
            DeleteAndZero((void **)&String2); /*0x79ff99*/
            if ( v12 ) /*0x79ffa0*/
            {
              g_WOL_GameListState = 1; /*0x7a010b*/
              g_WOL_IdleHandler = 0; /*0x7a0115*/
              g_WOL_GameProcessState = -1; /*0x7a011b*/
              g_WOL_GameListPool = time(0); /*0x7a012d*/
              v29 = 0; /*0x7a0139*/
              v15 = GetStringCSF((wchar_t *)aWolChanneljoin, 0, g_Str_File_wonline_cpp, 28098); /*0x7a0149*/
LABEL_70:
              ShowDialogConfirm(v15, 0, (int)GameLoop::Thunk, (char)v29); /*0x7a0279*/
LABEL_71:
              byte_B77E40 = 0; /*0x7a0282*/
              WideString::Reassign(&dword_B76230, &g_TypeClass_DefaultString); /*0x7a0293*/
              goto LABEL_73; /*0x7a0298*/
            }
            g_WOL_GameListState = 0; /*0x79ffa7*/
            g_WOL_IdleHandler = 3; /*0x79ffad*/
            g_WOL_GameProcessState = 20; /*0x79ffb7*/
            g_WOL_GameListPool = time(0); /*0x79ffc5*/
          }
          if ( g_WOL_IdleHandler == 3 && !strcmp(&v33[52], g_WOL_IdleFlag) ) /*0x79ffe2*/
            RequestMatchWOL(); /*0x7a0009*/
          for ( j = WaitForMultipleObjects(0x12u, &Handles, 0, 0x14u); /*0x7a0021*/
                j == 258;
                j = WaitForMultipleObjects(0x12u, &Handles, 0, 0x14u) )
          {
            Game::ProcessIdle(); /*0x7a0023*/
          }
          ResetEvent(*(&Handles + j)); /*0x7a0045*/
          if ( !j || j == 6 ) /*0x7a0056*/
            goto LABEL_71; /*0x7a0056*/
          if ( j != 17 ) /*0x7a005f*/
            break; /*0x7a005f*/
          CollectWOLConnectionTokens(); /*0x7a0061*/
          ProcessPingRequestsWOL(); /*0x7a0066*/
        }
        if ( j != 5 ) /*0x7a0073*/
          break; /*0x7a0073*/
        if ( !g_WOL_IdleHandler ) /*0x7a007b*/
        {
          if ( g_WOL_ChannelState ) /*0x7a0154*/
          {
            v29 = (wchar_t *)g_WOL_ProcessIdle; /*0x7a0160*/
            Debug::Log(); /*0x7a016b*/
            (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x7a017b*/
            v16 = GetStringCSF(g_Str_WOL_LeavingChannel, 0, g_Str_File_wonline_cpp, 10704); /*0x7a018f*/
            WideString::Assign((wchar_t **)&String2, v16); /*0x7a0199*/
            ShowUIMessage(64, (wchar_t **)&String2, 0); /*0x7a01a8*/
            DeleteAndZero::Alt((void **)&String2); /*0x7a01b1*/
            for ( k = 0; g_WOL_ChannelState; ++k ) /*0x7a01bf*/
            {
              if ( k >= 150 ) /*0x7a01cd*/
                break; /*0x7a01cd*/
              Sleep(0x64u); /*0x7a01d1*/
              Game::ProcessIdle(); /*0x7a01d3*/
            }
            v18 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x7a01e7*/
            if ( v18 ) /*0x7a01ee*/
            {
              g_WOL_ChannelList &= ~0x40u; /*0x7a01f9*/
              if ( !g_WOL_ChannelList ) /*0x7a01ff*/
                CloseDialog(v18, 0); /*0x7a0205*/
            }
            Current = Dialog::GetCurrent(); /*0x7a020a*/
            DlgItem = GetDlgItem(Current, 1344); /*0x7a0215*/
            if ( DlgItem ) /*0x7a021d*/
              SetFocus(DlgItem); /*0x7a0220*/
          }
          if ( g_WOL_GameListState == 1 ) /*0x7a022c*/
          {
            v29 = 0; /*0x7a025d*/
            v15 = GetStringCSF(aWolNomatchinga, 0, g_Str_File_wonline_cpp, 28174); /*0x7a0274*/
          }
          else
          {
            v29 = 0; /*0x7a022f*/
            if ( g_WOL_GameListState == 2 ) /*0x7a0235*/
              v15 = GetStringCSF(aWolMatchtimeou, 0, g_Str_File_wonline_cpp, 28180); /*0x7a025b*/
            else
              v15 = GetStringCSF(g_Str_WOL_MatchFailExit, 0, g_Str_File_wonline_cpp, 28185); /*0x7a0248*/
          }
          goto LABEL_70; /*0x7a0248*/
        }
      }
      if ( j != 16 ) /*0x7a0089*/
        break; /*0x7a0089*/
      if ( (unsigned __int8)MatchGameWOL() && g_GameOptionsFlags == 3 ) /*0x7a009f*/
      {
        v14 = (HWND)CreateDialog(0x11Fu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_7A2600, 0); /*0x7a00b5*/
        g_WOL_GameListState = 0; /*0x7a00b7*/
        g_WOL_IdleHandler = 10; /*0x7a00be*/
        g_WOL_GameProcessState = 180; /*0x7a00c8*/
        g_WOL_GameListPool = time(0); /*0x7a00da*/
        SendMessageA(v14, 0x4A9u, 0, 1); /*0x7a00e8*/
        ShowWindow(v14, 1); /*0x7a00f1*/
      }
    }
  }
  while ( j != 7 ); /*0x7a00ff*/
  v21 = GetStringCSF(aWolMatchgamest, 0, g_Str_File_wonline_cpp, 28211); /*0x7a02ab*/
  Dialog::ShowMessage(-1, (size_t)v21); /*0x7a02b7*/
  byte_B77DEC = 0; /*0x7a02bf*/
  i = 1; /*0x7a02c6*/
LABEL_73:
  CloseDialog((HWND)Indirect, 0); /*0x7a02ce*/
  JoinLobbyWOL_Destroy(); /*0x7a02d9*/
  v22 = (HWND)Dialog::FindByHandle((void *)0x11F); /*0x7a02e3*/
  if ( v22 ) /*0x7a02ea*/
    CloseDialog(v22, 0); /*0x7a02f0*/
  if ( g_WOL_IdleHandler != 11 ) /*0x7a02fc*/
  {
    g_WOL_GameListState = 0; /*0x7a02ff*/
    g_WOL_IdleHandler = 1; /*0x7a0305*/
    g_WOL_GameProcessState = -1; /*0x7a030f*/
    g_WOL_GameListPool = time(0); /*0x7a0321*/
  }
  if ( g_WOL_ChannelState ) /*0x7a032c*/
  {
    v29 = (wchar_t *)g_WOL_ProcessIdle; /*0x7a0338*/
    Debug::Log(); /*0x7a0343*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x7a0353*/
    v23 = GetStringCSF(g_Str_WOL_LeavingChannel, 0, g_Str_File_wonline_cpp, 10704); /*0x7a0367*/
    WideString::Assign((wchar_t **)&String2, v23); /*0x7a0371*/
    ShowUIMessage(64, (wchar_t **)&String2, 1); /*0x7a0381*/
    DeleteAndZero::Alt((void **)&String2); /*0x7a038a*/
    for ( m = 0; g_WOL_ChannelState; ++m ) /*0x7a0398*/
    {
      if ( m >= 150 ) /*0x7a03a6*/
        break; /*0x7a03a6*/
      Sleep(0x64u); /*0x7a03aa*/
      Game::ProcessIdle(); /*0x7a03ac*/
    }
    v25 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x7a03c0*/
    if ( v25 ) /*0x7a03c7*/
    {
      g_WOL_ChannelList &= ~0x40u; /*0x7a03d2*/
      if ( !g_WOL_ChannelList ) /*0x7a03d8*/
        CloseDialog(v25, 0); /*0x7a03de*/
    }
    v26 = Dialog::GetCurrent(); /*0x7a03e3*/
    v27 = GetDlgItem(v26, 1344); /*0x7a03ee*/
    if ( v27 ) /*0x7a03f6*/
      SetFocus(v27); /*0x7a03f9*/
  }
  IUnknown *v28 = g_UIControlState; /*0x7a03ff*/
  if ( g_UIControlState ) /*0x7a0407*/
  {
    ComPtr::Dtor(g_UIControlState); /*0x7a040b*/
    __3_YAXPAX_Z(v28); /*0x7a0411*/
    g_UIControlState = 0; /*0x7a0419*/
  }
  return i; /*0x79fd7e*/
}
}
} // namespace gamemd

// 0x792BE0
namespace gamemd {
char ShowUIMessage(MPCooperative * a1, wchar_t ** a2, char a3)
{
{
    DLGTEMPLATE *DialogIndirect;
    HWND DlgItem;
    CampaignScore *v7;
    HWND Current;
    HWND v9;
    HWND v10;
    CampaignScore *v11;
    char result;
    DialogIndirect = (DLGTEMPLATE *)Dialog::FindByHandle((void *)0xC4);
    if ( DialogIndirect )
  {
    g_WOL_ChannelList = (MPCooperative *)((unsigned int)a1 | (unsigned int)g_WOL_ChannelList);
    if ( WideString::Length((const wchar_t **)a2) )
    {
    DlgItem = GetDlgItem((HWND)DialogIndirect, 1458);
    v7 = WideString::GetOrEmpty_Alt(a2);
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)v7);
    }
  }
    else if ( a1 )
  {
    Current = Dialog::GetCurrent();
    v9 = GetDlgItem(Current, 1344);
    ShowUIMessage_Show();
    DialogIndirect = (DLGTEMPLATE *)CreateDialogIndirect(g_hInstance, (HWND)0xC4, g_hWnd, sub_792CF0, 0);
    SetupDialog((CoordStruct *)DialogIndirect, 196);
    v10 = GetDlgItem((HWND)DialogIndirect, 1458);
    v11 = WideString::GetOrEmpty_Alt(a2);
    SendMessageA(v10, 0x4B2u, 0, (LPARAM)v11);
    g_WOL_ChannelList = a1;
    if ( v9 )
    SetFocus(v9);
  }
    result = a3;
    if ( a3 )
  {
    result = (char)g_WOL_ChannelList;
    if ( g_WOL_ChannelList )
    return MessageDialogLoopAlt((HWND)DialogIndirect, (unsigned char (*)(void))GameLoop::Thunk, 0, 1, 0);
  }
    return result;
}
}
} // namespace gamemd

// 0x793120
namespace gamemd {
bool E4Recv_793120::sub_793120()
{
{
    int v1;
    char *i;
    char *v4;
    v1 = 0;
    if ( (int)g_WOL_State <= 0 )
    return 0;
    for ( i = (char *)g_WOL_ConnectionFlags; ; i += 108 )
  {
    if ( v1 >= 0 && v1 < (int)g_WOL_State )
    qmemcpy(&g_IsMultiplayerSession, i, 0x6Cu);
    if ( (g_IsMultiplayerSession & 1) != 0 )
    break;
    if ( ++v1 >= (int)g_WOL_State )
    return 0;
  }
    if ( !&g_IsMultiplayerSession )
    return 0;
    v4 = String::GetOrEmpty_Alt(this);
    return _strcmpi(DataGlobal_B777D4, v4) == 0;
}
}
} // namespace gamemd

// 0x793710
namespace gamemd {
short sub_793710(int a1, int a2, int a3, int a4)
{
{
    int v4;
    LOWORD(v4) = a1 + a2;
    if ( a4 != 1 )
  {
    if ( a4 == 2 )
    {
    LOWORD(v4) = a2 + 2 * a1;
    }
    else if ( a4 <= 1 )
    {
    if ( a4 < 0 )
      {
    if ( a4 == -100 )
    LOWORD(v4) = a2 + 100 * a1;
    else
    v4 = a2 + a1 % 2 - a4 * (a1 / 2);
      }
    }
    else
    {
    v4 = a4 * (a1 / 2) + a2 + a1 % 2;
    }
  }
    Debug::Log();
    if ( (unsigned short)v4 >= 0x400u )
    return v4;
    else
    return 1024;
}
}
} // namespace gamemd

// 0x793A70
namespace gamemd {
int sub_793A70(void * a1, unsigned short a2)
{
{
    int result;
    char *v3;
    signed int v4;
    int v7;
    int i;
    char v9[2];
    char Buffer[254];
    result = g_WOL_State;
    v3 = 0;
    v4 = 0;
    if ( (int)g_WOL_State > 0 )
  {
    v7 = 0;
    for ( i = 0; ; v7 = i )
    {
    if ( v7 >= 0 && v4 < result )
    v3 = &g_WOL_ConnectionFlags->__pad_0[v7];
    if ( !_strcmpi(a1, v3 + 36) )
      {
    qmemcpy(v9, "Z4", sizeof(v9));
    sprintf(Buffer, (ObjectClass *)&DataGlobal_817F40.fallRate, (INIClass *)a2);
    Debug::Log();
    (*(void (__stdcall **)(int, char *, char *))((*(&g_MatrixTransformState + 2263))->X + 56))( *(&g_MatrixTransformState + 2263), v3, v9);
      }
    result = g_WOL_State;
    ++v4;
    i += 108;
    if ( v4 >= (int)g_WOL_State )
    break;
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x793CD0
namespace gamemd {
int E4Recv_793CD0::sub_793CD0()
{
{
    DWORD Ticks;
    DWORD *v2;
    DWORD v4;
    DataGlobal_A8E1A4[DataGlobal_A8E224] = (int)this;
    Ticks = Timer::GetTicks();
    v2 = (DWORD *)(12 * DataGlobal_A8E224 + 11067844);
    *v2 = Ticks;
    v2[1] = v4;
    v2[2] = 1200;
    return ++DataGlobal_A8E224;
}
}
} // namespace gamemd

// 0x796B20
namespace gamemd {
void nullsub_264()
{
  ;
}
} // namespace gamemd

// 0x796B30
namespace gamemd {
int sub_796B30()
{
{
    int v0;
    int v2[3];
    SimpleDialogControl::Constructor(v2);
    v2[0] = &DataGlobal_7F7624;
    v0 = RunDialog(0xFEu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))LobbyDlgProcWOL, (LPARAM)v2);
    v2[0] = &DataGlobal_7F7624;
    OwnerDrawControl::InitVtable(v2);
    if ( v0 >= 0 )
    return v0;
    else
    return 0;
}
}
} // namespace gamemd

// 0x798120
namespace gamemd {
void sub_798120()
{
{
    void **v0;
    int v1;
    v0 = (void **)&DataGlobal_B76954;
    v1 = 16;
    do
  {
    DeleteAndZero(--v0);
    --v1;
  }
    while ( v1 );
}
}
} // namespace gamemd

// 0x798360
namespace gamemd {
char sub_798360()
{
{
    LSTATUS v0;
    LSTATUS v1;
    HKEY phkResult;
    DWORD cbData;
    DWORD Type;
    BYTE Data[512];
    v0 = RegOpenKeyExA(HKEY_LOCAL_MACHINE, g_Str_WOL_URL_RegKey, 0, 0x20019u, &phkResult);
    if ( !v0 )
  {
    cbData = 512;
    v1 = RegQueryValueExA(phkResult, g_INI_Key_Community, 0, &Type, Data, &cbData);
    LOBYTE(v0) = RegCloseKey(phkResult);
    if ( !v1 )
    LOBYTE(v0) = OpenURLWOL((const char *)Data, 0);
  }
    return v0;
}
}
} // namespace gamemd

// 0x79AE00
namespace gamemd {
int sub_79AE00(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
{
    int result;
    LONG WindowLongA;
    UINT v6;
    if ( a2 == 272 )
  {
    if ( a4 )
    SetWindowLongA(hWnd, 8, *(int *)(a4 + 4));
  }
    result = BaseDialogProc(hWnd, a2, a3, a4);
    if ( !result )
  {
    WindowLongA = GetWindowLongA(hWnd, 8);
    if ( a2 > 0x2B )
    {
    if ( a2 == 273 )
      {
    if ( (unsigned short)a3 == 1 )
        {
    ReadSettingsWOL(&g_WebBrowser);
    (*(void (__thiscall **)(LONG, HWND, int))(*(int *)(WindowLongA) + 4))(WindowLongA, hWnd, 1);
        }
    else if ( (unsigned short)a3 == 2 )
        {
    v6 = IsDlgButtonChecked(hWnd, 1785);
    ReadWOLGameOption(v6 != 1);
    (*(void (__thiscall **)(LONG, HWND, int))(*(int *)(WindowLongA) + 4))(WindowLongA, hWnd, 2);
    return 0;
        }
      }
    }
    else
    {
    switch ( a2 )
      {
    case 0x2Bu: Dialog::Resize((char *)a4);
    return 1;
    case 0xFu: Dialog::DrawBackground(hWnd);
    Dialog::StopBink(hWnd);
    ValidateRect(hWnd, 0);
    return 1;
    case 0x14u: return 1;
      }
    }
    return 0;
  }
    return result;
}
}
} // namespace gamemd
