// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_793120_e4.hpp"
#include "e4/classes/E4Recv_793CD0_e4.hpp"
#include "e4/classes/E4Recv_79BF50_e4.hpp"

// 0x792BE0
namespace gamemd {
char ShowUIMessage(MPCooperative * a1, wchar_t ** a2, char a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall ShowUIMessage(MPCooperative *a1, wchar_t **a2, char a3)
{
  DLGTEMPLATE *DialogIndirect; // esi
  HWND DlgItem; // edi
  CampaignScore *v7; // eax
  HWND Current; // eax
  HWND v9; // edi
  HWND v10; // ebp
  CampaignScore *v11; // eax
  char result; // al

  DialogIndirect = (DLGTEMPLATE *)Dialog::FindByHandle((void *)0xC4); /*0x792bf6*/
  if ( DialogIndirect ) /*0x792bfa*/
  {
    g_WOL_ChannelList = (MPCooperative *)((unsigned int)a1 | (unsigned int)g_WOL_ChannelList); /*0x792c06*/
    if ( WideString::Length((const wchar_t **)a2) ) /*0x792c0c*/
    {
      DlgItem = GetDlgItem((HWND)DialogIndirect, 1458); /*0x792c27*/
      v7 = WideString::GetOrEmpty_Alt(a2); /*0x792c29*/
      SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)v7); /*0x792c37*/
    }
  }
  else if ( a1 ) /*0x792c44*/
  {
    Current = Dialog::GetCurrent(); /*0x792c47*/
    v9 = GetDlgItem(Current, 1344); /*0x792c5a*/
    ShowUIMessage_Show(); /*0x792c5c*/
    DialogIndirect = (DLGTEMPLATE *)CreateDialogIndirect(g_hInstance, (HWND)0xC4, g_hWnd, sub_792CF0, 0); /*0x792c7e*/
    SetupDialog((CoordStruct *)DialogIndirect, 196); /*0x792c87*/
    v10 = GetDlgItem((HWND)DialogIndirect, 1458); /*0x792c96*/
    v11 = WideString::GetOrEmpty_Alt(a2); /*0x792c98*/
    SendMessageA(v10, 0x4B2u, 0, (LPARAM)v11); /*0x792ca6*/
    g_WOL_ChannelList = a1; /*0x792cb3*/
    if ( v9 ) /*0x792cb9*/
      SetFocus(v9); /*0x792cbc*/
  }
  result = a3; /*0x792cc2*/
  if ( a3 ) /*0x792cc8*/
  {
    result = (char)g_WOL_ChannelList; /*0x792cca*/
    if ( g_WOL_ChannelList ) /*0x792cd1*/
      return MessageDialogLoopAlt((HWND)DialogIndirect, (unsigned __int8 (*)(void))GameLoop::Thunk, 0, 1, 0); /*0x792ce0*/
  }
  return result; /*0x792ce5*/
}
}
} // namespace gamemd

// 0x792CF0
namespace gamemd {
INT_PTR sub_792CF0(HWND hWnd, UINT a2, WPARAM a3, char * a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
INT_PTR __stdcall sub_792CF0(HWND hWnd, UINT a2, WPARAM a3, char *a4)
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

// 0x793120
namespace gamemd {
bool E4Recv_793120::sub_793120()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall sub_793120(char **this)
{
  int v1; // eax
  char *i; // edx
  char *v4; // eax

  v1 = 0; /*0x793128*/
  if ( (int)g_WOL_State <= 0 ) /*0x793130*/
    return 0; /*0x793130*/
  for ( i = (char *)g_WOL_ConnectionFlags; ; i += 108 ) /*0x793132*/
  {
    if ( v1 >= 0 && v1 < (int)g_WOL_State ) /*0x79313e*/
      qmemcpy(&g_IsMultiplayerSession, i, 0x6Cu); /*0x79314c*/
    if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x793155*/
      break; /*0x793155*/
    if ( ++v1 >= (int)g_WOL_State ) /*0x79315d*/
      return 0; /*0x793165*/
  }
  if ( !&g_IsMultiplayerSession ) /*0x79316d*/
    return 0; /*0x793172*/
  v4 = String::GetOrEmpty_Alt(this); /*0x793178*/
  return _strcmpi(byte_B777D4, v4) == 0; /*0x79315f*/
}
}
} // namespace gamemd

// 0x793280
namespace gamemd {
INT_PTR sub_793280(HWND hWnd, UINT a2, WPARAM a3, char * a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
INT_PTR __stdcall sub_793280(HWND hWnd, UINT a2, WPARAM a3, char *a4)
{
  INT_PTR result; // eax
  int v5; // edi
  int *v6; // esi
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
    v5 = 0; /*0x793374*/
    v6 = dword_84A1F0; /*0x793376*/
    do /*0x7933ab*/
    {
      DlgItem = GetDlgItem(hWnd, *v6); /*0x79337f*/
      dword_B75F54 = 0; /*0x79338e*/
      dword_B75F58 = 0; /*0x793396*/
      if ( v5 > *(_DWORD *)&HouseClass_Player.__pad_5568[18384] - 1 ) /*0x79339c*/
        DestroyWindow(DlgItem); /*0x79339f*/
      ++v6; /*0x7933a1*/
      ++v5; /*0x7933a4*/
    }
    while ( (int)v6 < (int)&byte_84A210 ); /*0x7933ab*/
    for ( i = 0; i < *(int *)&HouseClass_Player.__pad_5568[18384]; ++i ) /*0x7933bc*/
    {
      v9 = GetDlgItem(hWnd, dword_84A1F0[i]); /*0x7933d3*/
      SendMessageA(v9, 0x4B2u, 0, *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * i)); /*0x7933e1*/
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
HWND HandleWOLForwardingError()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HWND HandleWOLForwardingError()
{
  HWND result; // eax
  ObjectClass *i; // edx
  int v2; // edi
  int v3; // esi
  char *v4; // eax
  char v5; // bl
  int v6; // esi
  wchar_t *StringCSF; // eax
  wchar_t *v8; // eax
  wchar_t *v9; // eax
  _BYTE v10[368]; // [esp-Ch] [ebp-218h] BYREF

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
      v2 = -1; /*0x7934f2*/
      v3 = 0; /*0x7934f5*/
      if ( *(int *)&HouseClass_Player.__pad_5568[18384] > 0 ) /*0x7934f9*/
      {
        while ( 1 ) /*0x793509*/
        {
          v4 = ToWideStringChar(*(IUnknown **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v3)); /*0x793509*/
          if ( !_strcmpi(v4, byte_B777D4) ) /*0x79350f*/
            break; /*0x79350f*/
          if ( ++v3 >= *(int *)&HouseClass_Player.__pad_5568[18384] ) /*0x793523*/
            goto LABEL_15; /*0x793523*/
        }
        v2 = v3; /*0x793527*/
      }
LABEL_15:
      v5 = 0; /*0x793529*/
      v6 = 0; /*0x793530*/
      if ( *(int *)&HouseClass_Player.__pad_5568[18384] <= 0 ) /*0x793534*/
        goto LABEL_26; /*0x793534*/
      do /*0x7936ba*/
      {
        switch ( dword_B73BB4[v6] ) /*0x79354a*/
        {
          case 0: /*0x79354a*/
            v5 = 1; /*0x793557*/
            ToWideStringChar(*(IUnknown **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v6)); /*0x79355c*/
            Debug::Log(); /*0x793567*/
            *(_DWORD *)&v10[8] = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v6); /*0x793579*/
            StringCSF = GetStringCSF((wchar_t *)aTxtTalkReporte, 0, (CampaignScore *)g_Str_File_wonline_cpp, 18840); /*0x793589*/
            goto LABEL_19; /*0x793589*/
          case 1: /*0x79354a*/
            v5 = 1; /*0x793591*/
            ToWideStringChar(*(IUnknown **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v6)); /*0x793596*/
            Debug::Log(); /*0x7935a1*/
            *(_DWORD *)&v10[8] = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v6); /*0x7935b3*/
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
              ToWideStringChar(*(IUnknown **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v6)); /*0x79362a*/
              Debug::Log(); /*0x793635*/
              *(_DWORD *)&v10[8] = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v6); /*0x79364b*/
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
        result = *(HWND *)&HouseClass_Player.__pad_5568[18384]; /*0x7936b2*/
        ++v6; /*0x7936b7*/
      }
      while ( v6 < *(int *)&HouseClass_Player.__pad_5568[18384] ); /*0x7936ba*/
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

// 0x793710
namespace gamemd {
short sub_793710(int a1, int a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int16 __fastcall sub_793710(int a1, int a2, int a3, int a4)
{
  int v4; // esi

  LOWORD(v4) = a1 + a2; /*0x79371c*/
  if ( a4 != 1 ) /*0x79371f*/
  {
    if ( a4 == 2 ) /*0x793724*/
    {
      LOWORD(v4) = a2 + 2 * a1; /*0x793726*/
    }
    else if ( a4 <= 1 ) /*0x79372e*/
    {
      if ( a4 < 0 ) /*0x793753*/
      {
        if ( a4 == -100 ) /*0x793758*/
          LOWORD(v4) = a2 + 100 * a1; /*0x793760*/
        else
          v4 = a2 + a1 % 2 - a4 * (a1 / 2); /*0x793780*/
      }
    }
    else
    {
      v4 = a4 * (a1 / 2) + a2 + a1 % 2; /*0x79374d*/
    }
  }
  Debug::Log(); /*0x79378b*/
  if ( (unsigned __int16)v4 >= 0x400u ) /*0x793798*/
    return v4; /*0x7937a5*/
  else
    return 1024; /*0x79379c*/
}
}
} // namespace gamemd

// 0x793A70
namespace gamemd {
int sub_793A70(void * a1, unsigned short a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_793A70(void *a1, unsigned __int16 a2)
{
  int result; // eax
  char *v3; // esi
  signed int v4; // ebx
  int v7; // ecx
  int i; // [esp+10h] [ebp-104h]
  char v9[2]; // [esp+14h] [ebp-100h] BYREF
  char Buffer[254]; // [esp+16h] [ebp-FEh] BYREF

  result = g_WOL_State; /*0x793a70*/
  v3 = 0; /*0x793a7e*/
  v4 = 0; /*0x793a80*/
  if ( (int)g_WOL_State > 0 ) /*0x793a89*/
  {
    v7 = 0; /*0x793a8f*/
    for ( i = 0; ; v7 = i ) /*0x793a91*/
    {
      if ( v7 >= 0 && v4 < result ) /*0x793aa1*/
        v3 = &g_WOL_ConnectionFlags->__pad_0[v7]; /*0x793aa8*/
      if ( !_strcmpi(a1, v3 + 36) ) /*0x793ab0*/
      {
        qmemcpy(v9, "Z4", sizeof(v9)); /*0x793ac8*/
        sprintf(Buffer, (ObjectClass *)&stru_817F40.fallRate, (INIClass *)a2); /*0x793ad9*/
        Debug::Log(); /*0x793ae9*/
        (*(void (__stdcall **)(_DWORD, char *, char *))((*(&g_MatrixTransformState + 2263))->X + 56))( /*0x793aff*/
          *(&g_MatrixTransformState + 2263),
          v3,
          v9);
      }
      result = g_WOL_State; /*0x793b06*/
      ++v4; /*0x793b0b*/
      i += 108; /*0x793b11*/
      if ( v4 >= (int)g_WOL_State ) /*0x793b15*/
        break; /*0x793b15*/
    }
  }
  return result; /*0x793b17*/
}
}
} // namespace gamemd

// 0x793B30
namespace gamemd {
int sub_793B30(char a1, const char * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_793B30(char a1, const char *a2)
{
  _BYTE v3[3]; // [esp+0h] [ebp-100h] BYREF
  char v4[253]; // [esp+3h] [ebp-FDh] BYREF

  qmemcpy(v3, "Z1", 2); /*0x793b39*/
  v3[2] = a1 + 48; /*0x793b45*/
  if ( a2 ) /*0x793b49*/
    strcpy(v4, a2); /*0x793b68*/
  else
    v4[0] = 0; /*0x793b76*/
  Debug::Log(); /*0x793b85*/
  return (*(int (__stdcall **)(LPVOID, _BYTE *))(*(_DWORD *)MEMORY[0xAC116C] + 60))(MEMORY[0xAC116C], v3); /*0x793b9d*/
}
}
} // namespace gamemd

// 0x793CD0
namespace gamemd {
int E4Recv_793CD0::sub_793CD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_793CD0(void *this)
{
  DWORD Ticks; // eax
  DWORD *v2; // ecx
  DWORD v4; // [esp+4h] [ebp-8h]

  MEMORY[0xA8E1A4][MEMORY[0xA8E224]] = (int)this; /*0x793cd8*/
  Ticks = Timer::GetTicks(); /*0x793ce3*/
  v2 = (DWORD *)(12 * MEMORY[0xA8E224] + 11067844); /*0x793cf6*/
  *v2 = Ticks; /*0x793cfd*/
  v2[1] = v4; /*0x793d03*/
  v2[2] = 1200; /*0x793d06*/
  return ++MEMORY[0xA8E224]; /*0x793d14*/
}
}
} // namespace gamemd

// 0x793D20
namespace gamemd {
char NegotiateNetworkConnection(IUnknown * aP0, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall NegotiateNetworkConnection(IUnknown *aP0, int a2, int a3)
{
  IUnknown *v3; // ebp
  int v4; // esi
  IUnknown *v5; // edi
  char *v6; // ebx
  char *v7; // eax
  char *v9; // esi
  char *v10; // eax
  int v11; // eax
  int v12; // ebx
  __int16 v13; // si
  unsigned __int16 v14; // di
  char v15; // bl
  char *v16; // ebx
  int v17; // esi
  _DWORD *v18; // ecx
  int v19; // edx
  int v20; // esi
  char *v21; // ebx
  char *v22; // eax
  unsigned __int16 v23; // si
  IUnknown *v24; // ebx
  signed int v25; // eax
  char *v26; // esi
  signed int v27; // ebp
  int v28; // ecx
  CreateGameDialogControl *v29; // ecx
  int v30; // esi
  signed int v31; // eax
  __int16 v32; // di
  IPXManagerClass *eax55; // eax
  IPXManagerClass *v34; // edx
  int v35; // esi
  CreateGameDialogControl *v36; // ecx
  IUnknown *v33; // eax
  DWORD v38; // eax
  int v39; // ecx
  int v40; // esi
  int v41; // eax
  int v42; // esi
  DWORD v43; // eax
  char v44; // bl
  int Speed; // eax
  int v46; // ecx
  char *v47; // eax
  HWND v48; // eax
  HWND v49; // esi
  HWND DlgItem; // eax
  DWORD *v51; // ecx
  int v52; // eax
  int v53; // esi
  int v54; // esi
  int v55; // eax
  char *v56; // eax
  char v57; // [esp+14h] [ebp-73Ah]
  char v58; // [esp+15h] [ebp-739h]
  unsigned __int16 v59; // [esp+16h] [ebp-738h]
  int v60; // [esp+16h] [ebp-738h]
  int v61; // [esp+16h] [ebp-738h]
  int v62; // [esp+1Ah] [ebp-734h]
  int v63; // [esp+1Eh] [ebp-730h]
  DWORD v64; // [esp+22h] [ebp-72Ch]
  DWORD v65; // [esp+22h] [ebp-72Ch]
  int v66; // [esp+2Ah] [ebp-724h]
  int v67; // [esp+2Eh] [ebp-720h]
  DWORD v68; // [esp+32h] [ebp-71Ch]
  int j; // [esp+3Ah] [ebp-714h]
  int v70; // [esp+3Eh] [ebp-710h] BYREF
  int v71; // [esp+42h] [ebp-70Ch]
  signed int v72; // [esp+46h] [ebp-708h]
  IUnknown *v73; // [esp+4Ah] [ebp-704h]
  DWORD v74; // [esp+4Eh] [ebp-700h]
  int i; // [esp+56h] [ebp-6F8h]
  _DWORD v76[4]; // [esp+5Ah] [ebp-6F4h] BYREF
  DWORD v77; // [esp+6Ah] [ebp-6E4h]
  DWORD v78; // [esp+6Eh] [ebp-6E0h]
  int v79; // [esp+72h] [ebp-6DCh]
  DWORD v80; // [esp+76h] [ebp-6D8h]
  int v81; // [esp+7Eh] [ebp-6D0h]
  signed int v82; // [esp+82h] [ebp-6CCh]
  CreateGameDialogControl *v83; // [esp+86h] [ebp-6C8h]
  int v84; // [esp+8Ah] [ebp-6C4h]
  _DWORD v85[6]; // [esp+8Eh] [ebp-6C0h] BYREF
  DWORD Ticks; // [esp+A6h] [ebp-6A8h]
  int v87; // [esp+AEh] [ebp-6A0h]
  char v88[12]; // [esp+B2h] [ebp-69Ch] BYREF
  char v89[256]; // [esp+BEh] [ebp-690h] BYREF
  char v90[3]; // [esp+1BEh] [ebp-590h] BYREF
  char v91[253]; // [esp+1C1h] [ebp-58Dh] BYREF
  char v92[2]; // [esp+2BEh] [ebp-490h] BYREF
  char Buffer[254]; // [esp+2C0h] [ebp-48Eh] BYREF
  int v94; // [esp+3BEh] [ebp-390h] BYREF
  char v95[452]; // [esp+3C2h] [ebp-38Ch] BYREF
  int v96[11]; // [esp+586h] [ebp-1C8h] BYREF
  __int16 v97; // [esp+5B2h] [ebp-19Ch]
  char v98; // [esp+5B4h] [ebp-19Ah]

  v3 = aP0; /*0x793d28*/
  v71 = a2; /*0x793d2c*/
  v73 = aP0; /*0x793d34*/
  v4 = 0; /*0x793d3d*/
  Timer::GetTicks(); /*0x793d38*/
  Timer::GetTicks(); /*0x793d4b*/
  v57 = 1; /*0x793d5f*/
  v76[0] = 0; /*0x793d64*/
  Waypoint::InitInvalid(v88); /*0x793d68*/
  v67 = 0; /*0x793d74*/
  v58 = 0; /*0x793d7f*/
  Debug::Log(); /*0x793d84*/
  v63 = -1; /*0x793d93*/
  if ( *(int *)&HouseClass_Player.__pad_5568[18384] <= 0 ) /*0x793d9b*/
    goto LABEL_6; /*0x793d9b*/
  do /*0x793dd5*/
  {
    v5 = *(IUnknown **)&HouseClass_Player.__pad_5568[4 * (_DWORD)v3 + 18396]; /*0x793da3*/
    v6 = ToWideStringChar(*(IUnknown **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v4)); /*0x793db4*/
    v7 = ToWideStringChar(v5); /*0x793db6*/
    if ( !_strcmpi(v6, v7) ) /*0x793dbd*/
      v63 = v4; /*0x793dc9*/
    ++v4; /*0x793dd2*/
  }
  while ( v4 < *(int *)&HouseClass_Player.__pad_5568[18384] ); /*0x793dd5*/
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
  v9 = &HouseClass_Player.__pad_5568[19884]; /*0x793e44*/
  while ( *v9 ) /*0x793e4c*/
  {
    v10 = ToWideStringChar(*(IUnknown **)&HouseClass_Player.__pad_5568[4 * (_DWORD)v3 + 18396]); /*0x793e55*/
    if ( !_strcmpi(v9, v10) ) /*0x793e66*/
    {
      Debug::Log(); /*0x793e7a*/
      v57 = 0; /*0x793e82*/
      break; /*0x793e82*/
    }
    v9 += 36; /*0x793e68*/
    if ( (int)v9 >= (int)&HouseClass_Player.__pad_5568[20172] ) /*0x793e71*/
      break; /*0x793e71*/
  }
  v11 = *(_DWORD *)&HouseClass_Player.__pad_5568[4 * (_DWORD)v3 + 18808]; /*0x793e87*/
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
    v12 = v63; /*0x793ece*/
    Debug::Log(); /*0x793ed7*/
    Network_Connect_793BB0(); /*0x793edf*/
    if ( v57 ) /*0x793eea*/
    {
      v14 = 0; /*0x793f1d*/
      v15 = *((_BYTE *)&(&g_MatrixTransformState)[89] + 8); /*0x793f1f*/
      Debug::Log(); /*0x793f2b*/
      if ( (v15 & 0x40) != 0 ) /*0x793f36*/
        goto LABEL_110; /*0x793f36*/
      Debug::Log(); /*0x793f41*/
      v60 = 0; /*0x793f50*/
      if ( *(int *)&HouseClass_Player.__pad_5568[20336] <= 0 ) /*0x793f54*/
        goto LABEL_110; /*0x793f54*/
      v16 = &HouseClass_Player.__pad_5568[20208]; /*0x793f5a*/
      do /*0x793fd4*/
      {
        v17 = *(_DWORD *)v16; /*0x793f5f*/
        v18 = (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[4 * *(_DWORD *)v16 + 18396] + 40); /*0x793f68*/
        v85[0] = *v18; /*0x793f6d*/
        v19 = *(_DWORD *)&HouseClass_Player.__pad_5568[4 * (_DWORD)v3 + 18396] + 40; /*0x793f7e*/
        v85[1] = v18[1]; /*0x793f81*/
        v85[2] = v18[2]; /*0x793f8c*/
        if ( NetworkID::Compare((int)v85, v19) ) /*0x793f9a*/
        {
          v14 = *(_WORD *)&HouseClass_Player.__pad_5568[4 * v17 + 20176]; /*0x793fa3*/
          Debug::Log(); /*0x793fb8*/
        }
        v16 += 4; /*0x793fcb*/
        ++v60; /*0x793fd0*/
      }
      while ( v60 < *(int *)&HouseClass_Player.__pad_5568[20336] ); /*0x793fd4*/
      if ( !v14 ) /*0x793fd9*/
      {
LABEL_110:
        Debug::Log(); /*0x793fe4*/
        v20 = 0; /*0x793ff1*/
        if ( *(int *)&HouseClass_Player.__pad_5568[18384] > 0 ) /*0x793ff5*/
        {
          while ( 1 ) /*0x79400a*/
          {
            v21 = ToWideStringChar(*(IUnknown **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v20)); /*0x79400a*/
            v22 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x79400c*/
            if ( !_strcmpi(v21, v22) ) /*0x794013*/
              break; /*0x794013*/
            if ( ++v20 >= *(int *)&HouseClass_Player.__pad_5568[18384] ) /*0x794027*/
              goto LABEL_34; /*0x794027*/
          }
          v23 = *(_WORD *)&HouseClass_Player.__pad_5568[2 * v20 + 20478]; /*0x79402b*/
          Debug::Log(); /*0x794041*/
          v14 = Network::ResolveNetworkAddress((int *)&(&g_MatrixTransformState)[89] + 2, v23); /*0x794054*/
          Debug::Log(); /*0x794061*/
        }
      }
LABEL_34:
      v24 = (IUnknown *)ToWideStringChar(*(IUnknown **)&HouseClass_Player.__pad_5568[4 * (_DWORD)v73 + 18396]); /*0x794069*/
      v25 = g_WOL_State; /*0x79407b*/
      v26 = 0; /*0x794080*/
      v27 = 0; /*0x794082*/
      if ( (int)g_WOL_State > 0 ) /*0x794086*/
      {
        v28 = 0; /*0x79408c*/
        v61 = 0; /*0x79408e*/
        do /*0x79411c*/
        {
          if ( v28 >= 0 && v27 < v25 ) /*0x794098*/
            v26 = &g_WOL_ConnectionFlags->__pad_0[v28]; /*0x7940a0*/
          if ( !_strcmpi(v24, v26 + 36) ) /*0x7940a8*/
          {
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
      v13 = *(_WORD *)&HouseClass_Player.__pad_5568[2 * v63 + 20478]; /*0x793eec*/
      Debug::Log(); /*0x793f02*/
      *(_WORD *)&HouseClass_Player.__pad_5568[2 * (_DWORD)v3 + 19868] = v13; /*0x793f0a*/
    }
    Ticks = Timer::GetTicks(); /*0x79413a*/
    v64 = Ticks; /*0x794141*/
    v30 = 360; /*0x79414c*/
    HIWORD(v31) = HIWORD(v62); /*0x794155*/
    v87 = 360; /*0x79415b*/
    v66 = 360; /*0x794162*/
    if ( v62 > 0 ) /*0x794166*/
    {
      v31 = Timer::GetTicks(); /*0x79416f*/
      v29 = v83; /*0x794174*/
      v30 = 240; /*0x79417b*/
      v82 = v31; /*0x794180*/
      v84 = 240; /*0x794187*/
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
        if ( *(_WORD *)&HouseClass_Player.__pad_5568[2 * (_DWORD)v3 + 19868] != v32 ) /*0x7941cc*/
          break; /*0x7941cc*/
      }
      else if ( *(_WORD *)&HouseClass_Player.__pad_5568[2 * (_DWORD)v3 + 19868] ) /*0x7941dd*/
      {
        break; /*0x7941e6*/
      }
      Game::ProcessIdle(v29); /*0x7941ce*/
      v30 = v66; /*0x7941d3*/
    }
    LOWORD(v31) = *(_WORD *)&HouseClass_Player.__pad_5568[2 * (_DWORD)v3 + 19868]; /*0x7941f3*/
    v72 = v31; /*0x7941fe*/
    if ( (_WORD)v31 ) /*0x794202*/
    {
      Debug::Log(); /*0x79420e*/
      *(_WORD *)&HouseClass_Player.__pad_5568[2 * v12 + 20478] = *(_WORD *)&HouseClass_Player.__pad_5568[2 * (_DWORD)v3 + 19868]; /*0x79421e*/
      LOWORD(eax55) = *(_WORD *)&HouseClass_Player.__pad_5568[2 * (_DWORD)v3 + 19868]; /*0x79422c*/
      Network::SetPort((_WORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v12) + 40), eax55); /*0x79423b*/
      LOWORD(v34) = *(_WORD *)&HouseClass_Player.__pad_5568[2 * (_DWORD)v3 + 19868]; /*0x794240*/
      Network::SetPort((_WORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[4 * (_DWORD)v3 + 18396] + 40), v34); /*0x794253*/
      memset(v96, 0, sizeof(v96)); /*0x794266*/
      v97 = 0; /*0x794268*/
      v98 = 0; /*0x79426a*/
      v96[0] = 41; /*0x794270*/
      strcpy((char *)&v96[1], String::GetOrEmpty((char **)&g_WebBrowser)); /*0x79429d*/
      if ( (*(_BYTE *)(&(&g_MatrixTransformState)[89] + 2) & 8) != 0 /*0x7942b7*/
        && (HouseClass_Player.__pad_5568[4 * (_DWORD)v3 + 18808] & 8) == 0 )
      {
        Debug::Log(); /*0x7942be*/
        v35 = 240; /*0x7942cf*/
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
      ToWideStringChar(*(IUnknown **)&HouseClass_Player.__pad_5568[4 * (_DWORD)v3 + 18396]); /*0x794305*/
      Debug::Log(); /*0x794322*/
      v38 = Timer::GetTicks(); /*0x794331*/
      v85[5] = 360; /*0x794342*/
      v85[3] = v38; /*0x794351*/
      v65 = v38; /*0x794358*/
      v80 = Timer::GetTicks(); /*0x794365*/
      v68 = v80; /*0x794369*/
      v39 = 0; /*0x794371*/
      v81 = 0; /*0x794373*/
      for ( j = 0; ; v39 = j ) /*0x79437b*/
      {
        v40 = v39; /*0x794383*/
        if ( v68 == -1 ) /*0x794388*/
          break; /*0x794388*/
        v41 = Timer::GetTicks() - v68; /*0x794393*/
        if ( v41 < v40 ) /*0x794399*/
        {
          v42 = v40 - v41; /*0x79439b*/
          goto LABEL_68; /*0x79439d*/
        }
LABEL_69:
        Debug::Log(); /*0x7943a5*/
        Network::SendToPlayer( /*0x7943d3*/
          (int)&HouseClass_Player.__pad_5568[22284],
          (int)v96,
          47,
          0,
          *(wchar_t **)&HouseClass_Player.__pad_5568[4 * (_DWORD)v3 + 18396]);
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
          Speed = Connection::GetSpeed((int)&HouseClass_Player.__pad_5568[22284]); /*0x794414*/
          v46 = v67; /*0x794419*/
          if ( v67 >= Speed ) /*0x79441f*/
          {
            v46 = 0; /*0x794421*/
            v67 = 0; /*0x794423*/
          }
          if ( !Network::SendPacketThunk( /*0x79445d*/
                  (int)&HouseClass_Player.__pad_5568[22284],
                  v46,
                  (int)&v94,
                  (int)v76,
                  (int)v88,
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
                   *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v63) + 40,
                   (int)v88) )
            {
              v47 = ToWideStringChar(*(IUnknown **)&HouseClass_Player.__pad_5568[4 * (_DWORD)v3 + 18396]); /*0x7944bd*/
              if ( !_strcmpi(v47, v95) ) /*0x7944c3*/
              {
                Debug::Log(); /*0x7944e0*/
                qmemcpy(v90, "Z1;", sizeof(v90)); /*0x7944f1*/
                if ( v95 ) /*0x794509*/
                  strcpy(v91, v95); /*0x79452d*/
                else
                  v91[0] = 0; /*0x794538*/
                Debug::Log(); /*0x79454d*/
                (*(void (__stdcall **)(_DWORD, char *))((*(&g_MatrixTransformState + 2263))->X + 60))( /*0x794565*/
                  *(&g_MatrixTransformState + 2263),
                  v90);
                if ( v63 >= 0 && v63 < *(int *)&HouseClass_Player.__pad_5568[18384] ) /*0x794576*/
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
                *(_DWORD *)&HouseClass_Player.__pad_5568[4 * *(_DWORD *)&HouseClass_Player.__pad_5568[20336] + 20208] = v3; /*0x7945c4*/
                v77 = Timer::GetTicks(); /*0x7945d6*/
                v58 = 1; /*0x7945df*/
                v44 = 1; /*0x7945e7*/
                v79 = 1200; /*0x7945eb*/
                v51 = (DWORD *)(12 * *(_DWORD *)&HouseClass_Player.__pad_5568[20336] + 11067844); /*0x7945ef*/
                *v51 = v77; /*0x7945f6*/
                v51[1] = v78; /*0x7945fc*/
                v51[2] = 1200; /*0x7945ff*/
                ++*(_DWORD *)&HouseClass_Player.__pad_5568[20336]; /*0x794609*/
                *(_DWORD *)&HouseClass_Player.__pad_5568[4 * (_DWORD)v3 + 20176] = v59; /*0x794619*/
              }
            }
          }
          Network::receiveData((int)&HouseClass_Player.__pad_5568[22284], v67); /*0x79462a*/
          if ( !v44 ) /*0x794631*/
            goto LABEL_89; /*0x794631*/
        }
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[4 * v71 + 19352] == 11 ) /*0x79463f*/
        {
          Debug::Log(); /*0x79469c*/
          goto LABEL_100; /*0x7946a4*/
        }
LABEL_89:
        v52 = *(_DWORD *)&HouseClass_Player.__pad_5568[4 * v71 + 19352]; /*0x794641*/
        if ( v52 >= 1 && v52 < 11 ) /*0x794654*/
        {
          v53 = v52 - 1; /*0x794656*/
          if ( v52 - 1 > v62 ) /*0x79465f*/
          {
            Debug::Log(); /*0x7946ac*/
            v62 = v53 - 1; /*0x7946b5*/
            goto LABEL_100; /*0x7946b9*/
          }
        }
        v54 = 360; /*0x794669*/
        ++v67; /*0x794671*/
        if ( v65 != -1 ) /*0x794675*/
        {
          v55 = Timer::GetTicks() - v65; /*0x794680*/
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
    if ( v44 && *(_DWORD *)&HouseClass_Player.__pad_5568[4 * v71 + 19352] == 11 || v62 >= a3 ) /*0x7946e2*/
      break; /*0x7946e2*/
    ++v62; /*0x7946f2*/
    v56 = ToWideStringChar(*(IUnknown **)&HouseClass_Player.__pad_5568[4 * (_DWORD)v3 + 18396]); /*0x7946f6*/
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
char NetworkLobby_WaitForPlayers()
{
  HWND v1; // esi
  HWND DlgItem; // eax
  int *v3; // eax
  int v4; // esi
  int v5; // edi
  char *v6; // ebx
  char *v7; // ebx
  char *v8; // eax
  int v9; // ebp
  char *v10; // ebx
  char *v11; // eax
  int *v12; // ebx
  int v13; // edx
  _DWORD *v14; // esi
  _DWORD *v15; // edi
  int v16; // ebx
  int v17; // eax
  int v18; // esi
  int v19; // edi
  int v20; // eax
  int v21; // ebx
  int v22; // esi
  int v23; // eax
  int v24; // esi
  signed int v25; // eax
  bool v26; // cc
  int *i; // [esp+10h] [ebp-40h]
  int v28; // [esp+14h] [ebp-3Ch]
  int v29; // [esp+1Ch] [ebp-34h]
  DWORD Ticks; // [esp+20h] [ebp-30h]
  int v31; // [esp+28h] [ebp-28h]

  Timer::GetTicks(); /*0x7947bb*/
  MEMORY[0xA8E224] = 0; /*0x7947d2*/
  memset(MEMORY[0xA8E184], 0, sizeof(MEMORY[0xA8E184])); /*0x7947d8*/
  v29 = -1; /*0x7947e5*/
  dword_B77DCC = 0; /*0x7947ed*/
  if ( !MEMORY[0xA8E04C] ) /*0x7947f3*/
    return 0; /*0x7947fe*/
  SessionClass::SetupNetwork((int)MEMORY[0xA8B238]); /*0x794804*/
  if ( MEMORY[0xA8DA84] > 0 ) /*0x79480f*/
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
  if ( MEMORY[0xA8E04C] <= 0 ) /*0x79486e*/
  {
LABEL_44:
    Debug::Log(); /*0x794b38*/
    return 1; /*0x794b4e*/
  }
  v3 = MEMORY[0xA8DE4C]; /*0x794874*/
  for ( i = MEMORY[0xA8DE4C]; ; v3 = i ) /*0x794879*/
  {
    v4 = *(v3 - 128); /*0x794883*/
    v5 = *(v3 - 127); /*0x794889*/
    v6 = (char *)*(&MEMORY[0xA8DA90] + v5); /*0x79489e*/
    ToWideStringChar((char *)*(&MEMORY[0xA8DA90] + v4)); /*0x7948a5*/
    ToWideStringChar(v6); /*0x7948ae*/
    Debug::Log(); /*0x7948bf*/
    v7 = ToWideStringChar((char *)*(&MEMORY[0xA8DA90] + v4)); /*0x7948d8*/
    v8 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x7948da*/
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
    v10 = ToWideStringChar((char *)*(&MEMORY[0xA8DA90] + v5)); /*0x79491c*/
    v11 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x79491e*/
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
    v31 = 960; /*0x7949f5*/
    v19 = 0; /*0x7949f9*/
    while ( 1 ) /*0x7949fd*/
    {
      Sleep(5u); /*0x7949fd*/
      Game::ProcessIdle(); /*0x794a03*/
      Network_Connect_793BB0(); /*0x794a08*/
      v20 = *v12; /*0x794a0d*/
      v21 = v12[1]; /*0x794a0f*/
      if ( (v20 == 11 || !v20) && (v21 == 11 || !v21) ) /*0x794a26*/
        break; /*0x794a26*/
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
      v24 = v23; /*0x794ac8*/
      if ( Ticks != -1 ) /*0x794acd*/
      {
        v25 = Timer::GetTicks() - Ticks; /*0x794ad8*/
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
    v26 = ++v28 < MEMORY[0xA8E04C]; /*0x794b28*/
    i += 2; /*0x794b2e*/
    if ( !v26 ) /*0x794b32*/
      goto LABEL_44; /*0x794b32*/
  }
  v13 = MEMORY[0xA8DC2C][v4]; /*0x794958*/
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
void WOL_StartGame()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void WOL_StartGame()
{
  DLGTEMPLATE *Indirect; // eax
  int v1; // esi
  int v2; // ecx
  char v3; // bl
  int v4; // esi
  char *v5; // eax
  int v6; // esi
  wchar_t *String; // eax
  HWND v8; // eax
  wchar_t *v9; // eax
  int v10; // ebx
  int v11; // ecx
  u_short v12; // dx
  int *v13; // eax
  int v14; // eax
  char *v15; // edx
  int v16; // esi
  char *v17; // eax
  HWND v18; // eax
  int v19; // eax
  char *v20; // edx
  char *v21; // eax
  int v22; // esi
  int *v23; // eax
  int v24; // eax
  char *v25; // ebp
  int v26; // ebx
  char *v27; // edx
  int v28; // ebp
  int v29; // eax
  unsigned int v30; // ebx
  char *v31; // edi
  char *v32; // edi
  char *v33; // esi
  char v34; // cl
  char *v35; // eax
  unsigned int v36; // ecx
  char *v37; // ebp
  signed int v38; // edx
  int *v39; // eax
  signed int v40; // ecx
  unsigned int v41; // ebx
  const char *v42; // edi
  char *v43; // [esp+14h] [ebp-Ch]
  char *v44; // [esp+14h] [ebp-Ch]
  int v45; // [esp+18h] [ebp-8h]
  int v46; // [esp+1Ch] [ebp-4h]
  int *v47; // [esp+1Ch] [ebp-4h]

  Debug::Log(); /*0x794bac*/
  byte_B77E26 = 1; /*0x794bbd*/
  if ( g_WOL_State ) /*0x794bc4*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887628] + 20))(MEMORY[0x887628]); /*0x794c32*/
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887628] + 24))(MEMORY[0x887628]); /*0x794c3d*/
    memset(&dword_B73BB4, 0xFFu, 0x20u); /*0x794c4e*/
    Indirect = (DLGTEMPLATE *)CreateDialogIndirect(g_hInstance, 304, g_hWnd, sub_793280, 0); /*0x794c66*/
    if ( Indirect ) /*0x794c6d*/
      SetupDialog((HWND)Indirect, 304); /*0x794c76*/
    v1 = 100; /*0x794c7b*/
    do /*0x794c86*/
    {
      Event::Dispatch(); /*0x794c80*/
      --v1; /*0x794c85*/
    }
    while ( v1 ); /*0x794c86*/
    StartGameWOL_Start(300); /*0x794c92*/
    v3 = WaitNetworkLobbyPlayers(); /*0x794c9c*/
    if ( !v3 ) /*0x794ca0*/
    {
      v4 = 0; /*0x794ca7*/
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
      if ( !&g_IsMultiplayerSession || (v5 = String::GetOrEmpty_Alt((char **)&g_WebBrowser), _strcmpi(byte_B777D4, v5)) ) /*0x794cf1*/
LABEL_18:
        Debug::Log(); /*0x794cfd*/
    }
    LOBYTE(v2) = v3; /*0x794d0a*/
    v6 = NegotiateScenarioWOL(v2); /*0x794d11*/
    if ( v6 ) /*0x794d15*/
    {
      Debug::Log(); /*0x794d20*/
      if ( v6 == 2 ) /*0x794d2b*/
      {
        String = GetStringCSF(MEMORY[0x837484], 0, g_Str_File_wonline_cpp, 20292); /*0x794d44*/
        ShowDialogConfirm(String, 0, (int)GameLoop::Thunk, 0); /*0x794d4d*/
      }
      v8 = (HWND)Dialog::FindByHandle((void *)0x130); /*0x794d57*/
      if ( v8 ) /*0x794d5e*/
        CloseDialog(v8, 0); /*0x794d64*/
      g_NetworkLobbyState = 0; /*0x794d6e*/
      if ( MEMORY[0xA8B244] == 3 || MEMORY[0xA8B244] == 1 || MEMORY[0xA8B244] == 2 ) /*0x794d81*/
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
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)MEMORY[0xAC116C] + 36))(MEMORY[0xAC116C]); /*0x794e00*/
      if ( MEMORY[0xA8B244] == 1 || MEMORY[0xA8B244] == 2 || MEMORY[0xA8B244] == 3 ) /*0x794e15*/
      {
        v9 = GetStringCSF(aTxtAwayQuickma, 0, g_Str_File_wonline_cpp, 20329); /*0x794e46*/
        byte_B77E40 = 1; /*0x794e50*/
        WideString::Reassign(&dword_B76230, v9); /*0x794e58*/
      }
      else
      {
        byte_B77E40 = 0; /*0x794e21*/
        WideString::Reassign(&dword_B76230, &MEMORY[0x887734]); /*0x794e28*/
      }
    }
    else
    {
      Debug::Log(); /*0x794e6a*/
      v10 = MEMORY[0xA8DA84]; /*0x794e6f*/
      v11 = 0; /*0x794e78*/
      if ( MEMORY[0xA8DA84] > 0 ) /*0x794e7c*/
      {
        v12 = MEMORY[0x841F30]; /*0x794e7e*/
        v13 = &MEMORY[0xA8E2B2]; /*0x794e84*/
        do /*0x794e9d*/
        {
          if ( !*(_WORD *)v13 ) /*0x794e89*/
          {
            *(_WORD *)v13 = v12; /*0x794e8e*/
            v10 = MEMORY[0xA8DA84]; /*0x794e91*/
          }
          ++v11; /*0x794e97*/
          v13 = (int *)((char *)v13 + 2); /*0x794e98*/
        }
        while ( v11 < v10 ); /*0x794e9d*/
      }
      v14 = 0; /*0x794ea5*/
      if ( (int)g_WOL_State > 0 ) /*0x794ea9*/
      {
        v15 = (char *)g_WOL_ConnectionFlags; /*0x794eab*/
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
          v16 = 0; /*0x794ee3*/
          if ( v10 > 0 ) /*0x794ee7*/
          {
            while ( 1 ) /*0x794ef6*/
            {
              v17 = ToWideStringChar(*(char **)(MEMORY[0xA8DA78] + 4 * v16)); /*0x794ef6*/
              if ( !_strcmpi(v17, byte_B777D4) ) /*0x794efc*/
                break; /*0x794efc*/
              if ( ++v16 >= MEMORY[0xA8DA84] ) /*0x794f10*/
                goto LABEL_52; /*0x794f10*/
            }
            LOWORD(MEMORY[0xA8DBBC]) = *((_WORD *)&MEMORY[0xA8E2B2] + v16); /*0x794f1c*/
          }
        }
      }
LABEL_52:
      Debug::Log(); /*0x794f23*/
      v18 = (HWND)Dialog::FindByHandle((void *)0x130); /*0x794f35*/
      if ( v18 ) /*0x794f3e*/
        CloseDialog(v18, 0); /*0x794f44*/
      Debug::Log(); /*0x794f4e*/
      if ( MEMORY[0xA8B238][0] != 4 || MEMORY[0xA8B244] != 3 ) /*0x794f67*/
        MEMORY[0xA8B3AC] = 0; /*0x794f69*/
      MEMORY[0xA8B554] = 5; /*0x794f74*/
      switch ( MEMORY[0xA8B268] ) /*0x794f91*/
      {
        case 0: /*0x794f91*/
          MEMORY[0xA8B550] = (wchar_t *)40; /*0x794f98*/
          MEMORY[0xA8B570] = 60; /*0x794fa2*/
          MEMORY[0xA8B554] = 10; /*0x794fac*/
          break; /*0x794fb2*/
        case 1: /*0x794f91*/
          MEMORY[0xA8B550] = (wchar_t *)40; /*0x794fb4*/
          MEMORY[0xA8B570] = 45; /*0x794fbe*/
          MEMORY[0xA8B554] = 10; /*0x794fc8*/
          break; /*0x794fce*/
        case 2: /*0x794f91*/
          MEMORY[0xA8B550] = (wchar_t *)30; /*0x794fd5*/
          MEMORY[0xA8B570] = 30; /*0x794fda*/
          break; /*0x794fdf*/
        case 3: /*0x794f91*/
          MEMORY[0xA8B550] = (wchar_t *)20; /*0x794fe1*/
          MEMORY[0xA8B570] = 20; /*0x794fe7*/
          break; /*0x794fed*/
        case 4: /*0x794f91*/
          MEMORY[0xA8B550] = (wchar_t *)20; /*0x794fef*/
          MEMORY[0xA8B570] = 15; /*0x794ff5*/
          break; /*0x794fff*/
        case 5: /*0x794f91*/
          MEMORY[0xA8B550] = (wchar_t *)20; /*0x795001*/
          MEMORY[0xA8B570] = 12; /*0x795007*/
          break; /*0x795011*/
        default:
          MEMORY[0xA8B550] = (wchar_t *)10; /*0x795013*/
          MEMORY[0xA8B570] = 10; /*0x795019*/
          break; /*0x795019*/
      }
      if ( MEMORY[0xA8E2C8] ) /*0x795026*/
        MEMORY[0xA8B550] += 10; /*0x795028*/
      v19 = 0; /*0x795034*/
      MEMORY[0xA8B56C] = 0; /*0x795038*/
      if ( (int)g_WOL_State <= 0 ) /*0x79503e*/
        goto LABEL_77; /*0x79503e*/
      v20 = (char *)g_WOL_ConnectionFlags; /*0x795040*/
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
        || (v21 = String::GetOrEmpty_Alt((char **)&g_WebBrowser), _strcmpi(byte_B777D4, v21)) )
      {
LABEL_77:
        MEMORY[0xA8B570] = 0; /*0x795094*/
      }
      v22 = 0; /*0x79509e*/
      v23 = dword_B7790C; /*0x7950a0*/
      do /*0x7950b5*/
      {
        if ( *v23 > v22 ) /*0x7950a9*/
          v22 = *v23; /*0x7950ab*/
        ++v23; /*0x7950ad*/
      }
      while ( (int)v23 < (int)&dword_B7792C ); /*0x7950b5*/
      if ( MEMORY[0xA8E2C8] ) /*0x7950be*/
        v22 *= 2; /*0x7950c0*/
      MEMORY[0xA8DB9C] = (wchar_t *)1; /*0x7950c9*/
      if ( !v22 || v22 == 1000 ) /*0x7950db*/
      {
        Debug::Log(); /*0x7953c0*/
        MEMORY[0xA8B56C] = 10 * ((unsigned int)MEMORY[0xA8B550] / 0xA); /*0x7953de*/
        if ( 10 * ((unsigned int)MEMORY[0xA8B550] / 0xA) <= 0xA ) /*0x7953e3*/
          MEMORY[0xA8B56C] = 10; /*0x7953ee*/
      }
      else
      {
        Debug::Log(); /*0x7950e7*/
        if ( v22 <= 1000 ) /*0x7950f5*/
        {
          if ( v22 < 600 ) /*0x795109*/
            MEMORY[0xA8DB9C] = (wchar_t *)1; /*0x79510b*/
        }
        else
        {
          MEMORY[0xA8DB9C] = (wchar_t *)2; /*0x7950f7*/
        }
        Network::SetConnectionParams( /*0x79515a*/
          &MEMORY[0xA8E9C0],
          120 * (60 * v22 / 1000) / 100 + 60 * v22 / 1000,
          -1,
          8 * (120 * (60 * v22 / 1000) / 100 + 60 * v22 / 1000),
          1);
        v24 = 0; /*0x795165*/
        if ( (int)g_WOL_State > 0 ) /*0x795169*/
        {
          v25 = (char *)g_WOL_ConnectionFlags; /*0x79516b*/
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
            v35 = String::GetOrEmpty_Alt((char **)&g_WebBrowser); /*0x795351*/
            if ( !_strcmpi(byte_B777D4, v35) ) /*0x79535c*/
            {
              switch ( (unsigned int)MEMORY[0xA8DB9C] ) /*0x795376*/
              {
                case 0u: /*0x795376*/
                case 1u: /*0x795376*/
                  v36 = (unsigned int)MEMORY[0xA8B550]; /*0x79537d*/
                  break; /*0x795383*/
                case 2u: /*0x795376*/
                  v36 = (unsigned int)MEMORY[0xA8B550] + ((unsigned int)MEMORY[0xA8B550] >> 1); /*0x79538e*/
                  break; /*0x795390*/
                case 3u: /*0x795376*/
                  v36 = 2 * (_DWORD)MEMORY[0xA8B550]; /*0x795398*/
                  break; /*0x79539a*/
                default:
                  v36 = MEMORY[0xA8B56C]; /*0x79539c*/
                  break; /*0x79539c*/
              }
              MEMORY[0xA8B56C] = 10 * (v36 / 0xA); /*0x7953b1*/
            }
          }
        }
      }
LABEL_97:
      Debug::Log(); /*0x7951a1*/
      Debug::Log(); /*0x7951b8*/
      Debug::Log(); /*0x7951c8*/
      Debug::Log(); /*0x7951d9*/
      MEMORY[0xA8B568] = (int)MEMORY[0xA8B550]; /*0x7951f0*/
      memset(&MEMORY[0xA8B574], 0, 0x340u); /*0x7951f9*/
      *(_DWORD *)&MEMORY[0x841F30] = 1234; /*0x795200*/
      *(_DWORD *)MEMORY[0xA8EB60] = MEMORY[0xA8B268]; /*0x79520a*/
      *(_DWORD *)&MEMORY[0x841F34] = 1235; /*0x795216*/
      *(_DWORD *)&MEMORY[0x841F38] = 1236; /*0x795220*/
      *(_DWORD *)&MEMORY[0x841F3C] = 1237; /*0x79522a*/
      MEMORY[0xA8ED84] = 0; /*0x795234*/
      if ( MEMORY[0xA8E2C8] ) /*0x79523e*/
        Process::WaitForExit((const HANDLE *)&g_NetworkEventQueue, 0x7D0u, 1); /*0x79524b*/
      byte_B77A04 = 0; /*0x795255*/
      byte_B76568[0] = 0; /*0x79525f*/
      if ( MEMORY[0xA8B238][0] == 4 ) /*0x795266*/
      {
        if ( (dword_B76B30 & 0x100) != 0 ) /*0x79527c*/
        {
          v26 = 0; /*0x795287*/
          v27 = 0; /*0x795289*/
          v28 = 0; /*0x79528b*/
          v45 = 0; /*0x79528f*/
          v46 = 0; /*0x795293*/
          if ( (int)g_WOL_State > 0 ) /*0x795297*/
          {
            v43 = (char *)g_WOL_ConnectionFlags; /*0x7952a2*/
            do /*0x795468*/
            {
              if ( v26 >= 0 && v26 < (int)g_WOL_State ) /*0x7952b0*/
                v27 = v43; /*0x7952b2*/
              if ( !v28 || (v29 = *((_DWORD *)v27 + 5), v28 == v29) ) /*0x7952c3*/
              {
                strcat(&byte_B77A04, v27 + 36); /*0x79541a*/
                strcat(&byte_B77A04, MEMORY[0x817F70]); /*0x795445*/
                v28 = *((_DWORD *)v27 + 5); /*0x79544e*/
              }
              else if ( !v45 || v45 == v29 ) /*0x7952d3*/
              {
                strcat(byte_B76568, v27 + 36); /*0x7952fb*/
                v30 = strlen(MEMORY[0x817F70]) + 1; /*0x795314*/
                v31 = &byte_B76568[strlen(byte_B76568)]; /*0x795322*/
                qmemcpy(v31, MEMORY[0x817F70], 4 * (v30 >> 2)); /*0x795326*/
                v33 = &MEMORY[0x817F70][4 * (v30 >> 2)]; /*0x795326*/
                v32 = &v31[4 * (v30 >> 2)]; /*0x795326*/
                v34 = v30; /*0x795328*/
                v26 = v46; /*0x79532a*/
                qmemcpy(v32, v33, v34 & 3); /*0x795331*/
                v45 = *((_DWORD *)v27 + 5); /*0x795336*/
              }
              v46 = ++v26; /*0x795460*/
              v43 += 108; /*0x795464*/
            }
            while ( v26 < (int)g_WOL_State ); /*0x795468*/
          }
        }
        if ( MEMORY[0xA8B244] == 3 ) /*0x795475*/
        {
          v37 = 0; /*0x795480*/
          v38 = 0; /*0x795482*/
          if ( (int)g_WOL_State > 0 ) /*0x795486*/
          {
            v39 = MEMORY[0xB76E58]; /*0x795492*/
            v44 = (char *)g_WOL_ConnectionFlags; /*0x795497*/
            v40 = g_WOL_State; /*0x79549b*/
            v47 = MEMORY[0xB76E58]; /*0x7954a1*/
            do /*0x795574*/
            {
              if ( (int)v39 >= (int)MEMORY[0xB76E58] && v38 < v40 ) /*0x7954ae*/
                v37 = v44; /*0x7954b0*/
              if ( *v39 ) /*0x7954b4*/
              {
                strcat(byte_B76568, v37 + 36); /*0x79551d*/
                v41 = strlen(MEMORY[0x817F70]) + 1; /*0x795536*/
                v42 = byte_B76568; /*0x795538*/
              }
              else
              {
                strcat(&byte_B77A04, v37 + 36); /*0x7954dc*/
                v41 = strlen(MEMORY[0x817F70]) + 1; /*0x7954f5*/
                v42 = &byte_B77A04; /*0x7954f7*/
              }
              qmemcpy((void *)&v42[strlen(v42)], MEMORY[0x817F70], v41); /*0x79554a*/
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
      if ( MEMORY[0xA8B244] == 3 || MEMORY[0xA8B244] == 1 || MEMORY[0xA8B244] == 2 ) /*0x7955a6*/
      {
        g_WOL_GameListState = 0; /*0x7955aa*/
        g_WOL_IdleHandler = 11; /*0x7955b4*/
        g_WOL_GameProcessState = -1; /*0x7955be*/
        g_WOL_GameListPool = time(0); /*0x7955d0*/
      }
      g_NetworkLobby_Init = 1; /*0x7955da*/
      Debug::Log(); /*0x7955e1*/
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)MEMORY[0xAC116C] + 36))(MEMORY[0xAC116C]); /*0x7955f1*/
      Scenario::PreGameInit(); /*0x7955f4*/
      byte_B77E27 = 0; /*0x7955f9*/
      byte_B77E26 = 0; /*0x795600*/
      Debug::Log(); /*0x79560c*/
    }
  }
  else
  {
    g_NetworkLobbyState = 0; /*0x794bcb*/
    if ( MEMORY[0xA8B244] == 3 || MEMORY[0xA8B244] == 1 || MEMORY[0xA8B244] == 2 ) /*0x794bde*/
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
int __fastcall WOL_NegotiateScenario(char a1)
{
  int v1; // ecx
  char *Flagged; // esi
  char *v3; // eax
  int v4; // ebp
  char v5; // bl
  int v6; // edi
  int v7; // esi
  char *v8; // eax
  int v9; // eax
  bool v10; // cc
  int v11; // esi
  int v12; // eax
  int v13; // eax
  _DWORD *v14; // ecx
  int i; // edi
  int v16; // esi
  int v17; // eax
  int v18; // eax
  char *v19; // edx
  char *v20; // eax
  int v21; // esi
  int v22; // eax
  int v23; // eax
  char *v24; // edx
  char *v25; // eax
  int v26; // esi
  int v27; // eax
  int v28; // eax
  char *v29; // edx
  int v30; // esi
  int v31; // eax
  int v32; // esi
  char *v33; // eax
  int v34; // esi
  int v35; // eax
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
  int v46; // [esp+10h] [ebp-208h]
  int v47; // [esp+10h] [ebp-208h]
  DWORD v48; // [esp+14h] [ebp-204h]
  DWORD v49; // [esp+14h] [ebp-204h]
  int v50; // [esp+1Ch] [ebp-1FCh]
  int v51; // [esp+1Ch] [ebp-1FCh]
  _DWORD v52[12]; // [esp+20h] [ebp-1F8h] BYREF
  int v53[113]; // [esp+50h] [ebp-1C8h] BYREF
  __int16 v54; // [esp+214h] [ebp-4h]
  char v55; // [esp+216h] [ebp-2h]

  v41 = 0; /*0x795ce1*/
  v40 = a1 == 0; /*0x795ce6*/
  v42 = 0; /*0x795ceb*/
  Network::Disconnect(MEMORY[0xA8E9C0]); /*0x795cf3*/
  Network::SetConnectionParams(MEMORY[0xA8E9C0], 50, -1, 5000, 1); /*0x795d08*/
  Flagged = GameSettings::FindFlagged(); /*0x795d12*/
  if ( !Flagged || (v3 = String::GetOrEmpty_Alt((char **)&g_WebBrowser), _strcmpi(Flagged + 36, v3)) ) /*0x795d2b*/
  {
    LOBYTE(v1) = MEMORY[0xA8BB08]; /*0x79616e*/
    if ( FindAndValidateMap(&MEMORY[0xA8B8E0], MEMORY[0xA8BB04], &MEMORY[0xA8BAE2], v1, 1) ) /*0x796187*/
    {
      memset(v53, 0, sizeof(v53)); /*0x7961a8*/
      v54 = 0; /*0x7961aa*/
      v55 = 0; /*0x7961ac*/
      v53[0] = 19; /*0x7961af*/
      if ( v40 ) /*0x7961b7*/
        v53[0] = 42; /*0x7961b9*/
      CopyWideToChar(&v53[1], *(char **)MEMORY[0xA8DA78], -1); /*0x7961cf*/
      v18 = 0; /*0x7961da*/
      if ( (int)g_WOL_State > 0 ) /*0x7961de*/
      {
        v19 = (char *)g_WOL_ConnectionFlags; /*0x7961e0*/
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
          v20 = CharToWideString(byte_B777D4); /*0x79621d*/
          Network::SendToPlayer((int)MEMORY[0xA8E9C0], (int)v53, 47, 1, (wchar_t *)v20); /*0x796231*/
        }
      }
LABEL_75:
      Timer::GetTicks(); /*0x796236*/
      Ticks = Timer::GetTicks(); /*0x79625f*/
      v47 = 1200; /*0x796267*/
      if ( v40 ) /*0x79626b*/
      {
        Ticks = Timer::GetTicks(); /*0x796276*/
        v47 = 300; /*0x796287*/
      }
      while ( Network::GetQueueCount((int)MEMORY[0xA8E9C0]) > 0 ) /*0x796297*/
      {
        v21 = v47; /*0x7962a1*/
        if ( Ticks != -1 ) /*0x7962a8*/
        {
          v22 = Timer::GetTicks() - Ticks; /*0x7962b3*/
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
      if ( MEMORY[0xA8B244] != 3 && (MEMORY[0xA8B244] == 1 || MEMORY[0xA8B244] == 2) /*0x796306*/
        || (_BYTE)MEMORY[0xA8BB08] && !IsRandMap::Sed2((int)MEMORY[0xA8B238]) )
      {
        memset(v53, 0, sizeof(v53)); /*0x796324*/
        v54 = 0; /*0x796326*/
        v55 = 0; /*0x796328*/
        v23 = 0; /*0x796329*/
        v53[0] = 20; /*0x79632b*/
        if ( (int)g_WOL_State > 0 ) /*0x796335*/
        {
          v24 = (char *)g_WOL_ConnectionFlags; /*0x796337*/
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
            v25 = CharToWideString(byte_B777D4); /*0x796374*/
            Network::SendToPlayer((int)MEMORY[0xA8E9C0], (int)v53, 47, 1, (wchar_t *)v25); /*0x796388*/
          }
        }
LABEL_99:
        Debug::Log(); /*0x79638d*/
        Timer::GetTicks(); /*0x79639e*/
        v45 = Timer::GetTicks(); /*0x7963bd*/
        while ( Network::GetQueueCount((int)MEMORY[0xA8E9C0]) > 0 ) /*0x7963d9*/
        {
          v26 = 1200; /*0x7963e6*/
          if ( v45 != -1 ) /*0x7963ec*/
          {
            v27 = Timer::GetTicks() - v45; /*0x7963f7*/
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
        if ( RequestNetworkFile(&MEMORY[0xA8B8E0], 4, 1) /*0x79646f*/
          && (v40 || !IsRandMap::Sed2((int)MEMORY[0xA8B238]) || RequestNetworkFile((char *)v52, 4, 1)) )
        {
          goto LABEL_113; /*0x796476*/
        }
      }
      v42 = 2; /*0x796478*/
      v40 = 1; /*0x79647c*/
    }
LABEL_113:
    strcpy((char *)MEMORY[0xA8B230] + 4700, &MEMORY[0xA8B8E0]); /*0x796481*/
    Debug::Log(); /*0x7964b4*/
    Timer::GetTicks(); /*0x7964c0*/
    v49 = Timer::GetTicks(); /*0x7964de*/
    v51 = 1200; /*0x7964f1*/
    if ( v40 ) /*0x7964f5*/
    {
      v49 = Timer::GetTicks(); /*0x796500*/
      v51 = 300; /*0x796511*/
    }
    while ( 1 ) /*0x79651a*/
    {
      Event::Dispatch(); /*0x79651a*/
      if ( Network::Send( /*0x796538*/
             (int)MEMORY[0xA8E9C0],
             (int)&MEMORY[0xA8D638],
             (int)&MEMORY[0xA8D800],
             (int)&MEMORY[0xA8D804],
             (int)&MEMORY[0xA8D810]) )
      {
        if ( MEMORY[0xA8D810] == -22012 ) /*0x796548*/
        {
          Debug::Log(); /*0x79654f*/
          v28 = 0; /*0x79655d*/
          if ( (int)g_WOL_State > 0 ) /*0x796561*/
          {
            v29 = (char *)g_WOL_ConnectionFlags; /*0x796563*/
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
            if ( &g_IsMultiplayerSession && !_strcmpi(MEMORY[0xA8D63C], byte_B777D4) ) /*0x7965a5*/
            {
              if ( MEMORY[0xA8D638] == 11 ) /*0x7965b9*/
              {
                Debug::Log(); /*0x7965f6*/
                goto LABEL_147; /*0x7965fe*/
              }
              if ( MEMORY[0xA8D638] == 42 ) /*0x7965be*/
                break; /*0x7965be*/
            }
          }
        }
      }
      v30 = v51; /*0x7965c0*/
      if ( v49 != -1 ) /*0x7965cb*/
      {
        v31 = Timer::GetTicks() - v49; /*0x7965d6*/
        if ( v31 >= v51 ) /*0x7965dc*/
          goto LABEL_142; /*0x7965dc*/
        v30 = v51 - v31; /*0x7965e2*/
      }
      if ( !v30 ) /*0x7965e6*/
        goto LABEL_142; /*0x7965e6*/
    }
    Debug::Log(); /*0x796608*/
    v32 = 0; /*0x796615*/
    v40 = 1; /*0x796617*/
    if ( MEMORY[0xA8DA84] > 0 ) /*0x79661e*/
    {
      while ( 1 ) /*0x79662e*/
      {
        v33 = ToWideStringChar(*(char **)(MEMORY[0xA8DA78] + 4 * v32)); /*0x79662e*/
        if ( !_strcmpi(v33, byte_B777D4) ) /*0x796634*/
          break; /*0x796634*/
        if ( ++v32 >= MEMORY[0xA8DA84] ) /*0x796648*/
          goto LABEL_142; /*0x796648*/
      }
      if ( v32 < MEMORY[0xA8DA84] && dword_B73BB4[v32] < dword_84A1E0[v32] ) /*0x79666b*/
        dword_B73BB4[v32] = 3; /*0x79666d*/
    }
LABEL_142:
    v34 = v51; /*0x796673*/
    if ( v49 != -1 ) /*0x79667e*/
    {
      v35 = Timer::GetTicks() - v49; /*0x796689*/
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
  v4 = 0; /*0x795d5b*/
  v5 = 0; /*0x795d5d*/
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
           (int)MEMORY[0xA8E9C0],
           (int)&MEMORY[0xA8D638],
           (int)&MEMORY[0xA8D800],
           (int)&MEMORY[0xA8D804],
           (int)&MEMORY[0xA8D810]) )
    {
      if ( MEMORY[0xA8D810] == -22012 ) /*0x795df0*/
      {
        Debug::Log(); /*0x795dfb*/
        v6 = 1; /*0x795e05*/
        if ( MEMORY[0xA8DA84] > 1 ) /*0x795e0f*/
        {
          v7 = 0; /*0x795e15*/
          do /*0x795f23*/
          {
            if ( NetworkID::Compare(*(_DWORD *)(v7 * 4 + MEMORY[0xA8DA78] + 4) + 40, (int)&MEMORY[0xA8D804]) ) /*0x795e28*/
            {
              v8 = ToWideStringChar(*(char **)(v7 * 4 + MEMORY[0xA8DA78] + 4)); /*0x795e44*/
              if ( !_strcmpi(v8, MEMORY[0xA8D63C]) && !v52[v7 + 5] ) /*0x795e5a*/
              {
                v9 = MEMORY[0xA8D638]; /*0x795e66*/
                if ( MEMORY[0xA8D638] == 16 ) /*0x795e6e*/
                {
                  Debug::Log(); /*0x795e75*/
                  v9 = MEMORY[0xA8D638]; /*0x795e7a*/
                  v52[v7 + 5] = MEMORY[0xA8D638]; /*0x795e82*/
                  v5 = 1; /*0x795e86*/
                  ++v4; /*0x795e88*/
                }
                if ( v9 == 19 ) /*0x795e8c*/
                {
                  Debug::Log(); /*0x795e93*/
                  v9 = MEMORY[0xA8D638]; /*0x795e98*/
                  v52[v7 + 5] = MEMORY[0xA8D638]; /*0x795ea0*/
                  ++v4; /*0x795ea4*/
                }
                if ( v9 == 42 ) /*0x795ea8*/
                {
                  Debug::Log(); /*0x795eaf*/
                  v9 = MEMORY[0xA8D638]; /*0x795eba*/
                  ++v4; /*0x795ec2*/
                  v10 = v6 < MEMORY[0xA8DA84]; /*0x795ec3*/
                  v52[v7 + 5] = MEMORY[0xA8D638]; /*0x795ec5*/
                  v40 = 1; /*0x795ec9*/
                  if ( v10 && dword_B73BB8[v7] < dword_84A1E4[v7] ) /*0x795ede*/
                    dword_B73BB8[v7] = 0; /*0x795ee0*/
                }
                if ( v9 == 20 ) /*0x795eed*/
                {
                  Debug::Log(); /*0x795ef4*/
                  v52[v7 + 5] = MEMORY[0xA8D638]; /*0x795f01*/
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
          while ( v6 < MEMORY[0xA8DA84] ); /*0x795f23*/
        }
      }
    }
    if ( v4 >= MEMORY[0xA8DA84] - 1 ) /*0x795f32*/
      break; /*0x795f32*/
    v11 = v50; /*0x795f38*/
    if ( v48 != -1 ) /*0x795f3f*/
    {
      v12 = Timer::GetTicks() - v48; /*0x795f4a*/
      if ( v12 >= v50 ) /*0x795f50*/
        break; /*0x795f50*/
      v11 = v50 - v12; /*0x795f52*/
    }
  }
  while ( v11 ); /*0x795f56*/
  if ( v41 ) /*0x795f67*/
    v42 = 2; /*0x795f69*/
  if ( !v40 && !v41 && v5 && v4 == MEMORY[0xA8DA84] - 1 ) /*0x795f92*/
  {
    while ( CloseDialog(0, 0) == 1 ) /*0x795fa3*/
      ; /*0x795fa5*/
    MEMORY[0xA8BB10] = 0; /*0x795fba*/
    MEMORY[0xA8BB14] = 0; /*0x795fbf*/
    MEMORY[0xA8BB18] = 0; /*0x795fc4*/
    v13 = 1; /*0x795fc9*/
    if ( MEMORY[0xA8DA84] > 1 ) /*0x795fd0*/
    {
      v14 = &v52[5]; /*0x795fd2*/
      do /*0x796000*/
      {
        if ( *v14 == 16 ) /*0x795fd9*/
          *((_BYTE *)&MEMORY[0xA8BB10] + MEMORY[0xA8BB18]++) = v13; /*0x795fe1*/
        ++v13; /*0x795ffa*/
        ++v14; /*0x795ffb*/
      }
      while ( v13 < MEMORY[0xA8DA84] ); /*0x796000*/
    }
    if ( !SendNetworkFile((char *)MEMORY[0xA8B230] + 4700, 4, 0, 1) ) /*0x796016*/
    {
      v42 = 2; /*0x79601f*/
      v40 = 0; /*0x796023*/
    }
    if ( IsRandMap::Sed2((int)MEMORY[0xA8B238]) && !SendNetworkFile(stru_829ABC, 4, 0, 1) ) /*0x796043*/
    {
      v42 = 2; /*0x79604c*/
      v40 = 0; /*0x796050*/
    }
  }
  memset(v53, 0, sizeof(v53)); /*0x79605f*/
  v54 = 0; /*0x796061*/
  v55 = 0; /*0x796063*/
  if ( v40 || v4 != MEMORY[0xA8DA84] - 1 || v41 ) /*0x79607d*/
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
  CopyWideToChar(&v53[1], *(char **)MEMORY[0xA8DA78], -1); /*0x7960b4*/
  for ( i = 1; i < MEMORY[0xA8DA84]; ++i ) /*0x7960c5*/
  {
    v43 = Timer::GetTicks(); /*0x7960dc*/
    v46 = 600; /*0x7960e6*/
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
      if ( Network::SendToPlayer((int)MEMORY[0xA8E9C0], (int)v53, 47, 1, *(wchar_t **)(MEMORY[0xA8DA78] + 4 * i)) ) /*0x79612f*/
        break; /*0x796136*/
      v16 = v46; /*0x79613c*/
      if ( v43 != -1 ) /*0x796142*/
      {
        v17 = Timer::GetTicks() - v43; /*0x79614d*/
        if ( v17 >= v46 ) /*0x796153*/
          break; /*0x796153*/
        v16 = v46 - v17; /*0x796155*/
      }
    }
    while ( v16 ); /*0x796159*/
  }
LABEL_147:
  if ( (unsigned int)(8 * Network::GetLobbyStatus(MEMORY[0xA8E9C0])) >= 0x78 ) /*0x7966b0*/
    v36 = 8 * Network::GetLobbyStatus(MEMORY[0xA8E9C0]); /*0x7966c3*/
  else
    v36 = 120; /*0x7966b2*/
  v39 = v36; /*0x7966c8*/
  LobbyStatus = Network::GetLobbyStatus(MEMORY[0xA8E9C0]); /*0x7966d0*/
  Network::SetConnectionParams(MEMORY[0xA8E9C0], LobbyStatus + 2, -1, v39, 1); /*0x7966de*/
  Connection::Close(MEMORY[0xA8E9C0]); /*0x7966e8*/
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
char HandleWOLRematch()
{
  int v0; // eax
  char *v1; // ebp
  char *v2; // eax
  HWND v3; // eax
  HWND DlgItem; // eax
  int v5; // eax
  char *i; // edx
  __int16 v8; // [esp+Eh] [ebp-246h] BYREF
  int v9; // [esp+10h] [ebp-244h] BYREF
  _BYTE v10[12]; // [esp+14h] [ebp-240h] BYREF
  _DWORD v11[27]; // [esp+20h] [ebp-234h] BYREF
  int v12; // [esp+8Ch] [ebp-1C8h] BYREF
  _BYTE v13[452]; // [esp+90h] [ebp-1C4h] BYREF

  Waypoint::InitInvalid(v10); /*0x79671d*/
  if ( !g_WOL_ProcessIdle || (int)g_WOL_State < 2 ) /*0x796738*/
    return 0; /*0x796738*/
  v0 = 0; /*0x79673e*/
  if ( (int)g_WOL_State > 0 ) /*0x796742*/
  {
    v1 = (char *)g_WOL_ConnectionFlags; /*0x796744*/
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
      v2 = String::GetOrEmpty_Alt((char **)&g_WebBrowser); /*0x796781*/
      if ( !_strcmpi(byte_B777D4, v2) ) /*0x79678c*/
        return 0; /*0x796796*/
    }
  }
LABEL_13:
  if ( g_NetworkLobbyState ) /*0x7967a3*/
    return 0; /*0x7967a3*/
  if ( !Connection::GetSpeed((int)MEMORY[0xA8E9C0]) ) /*0x7967ae*/
    return 0; /*0x7967ae*/
  Event::Dispatch(); /*0x7967bb*/
  v9 = 455; /*0x7967e0*/
  if ( !Network::SendPacketThunk(0, &v12, &v9, v10, &v8, 0) || v12 != 25 ) /*0x796803*/
    return 0; /*0x796803*/
  v3 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x79680e*/
  if ( v3 ) /*0x796815*/
  {
    DlgItem = GetDlgItem(v3, 1128); /*0x79681f*/
    ShowWindow(DlgItem, 1); /*0x796826*/
  }
  if ( (int)g_WOL_State > 0 ) /*0x796833*/
    qmemcpy(v11, g_WOL_ConnectionFlags, sizeof(v11)); /*0x796844*/
  v11[8] = 0; /*0x79684a*/
  Network::SyncPlayerList(); /*0x796852*/
  if ( !Network::Send((int)MEMORY[0xA8E9C0], (int)&v12, (int)&v9, (int)v10, (int)&v8) ) /*0x796873*/
    return 0; /*0x796873*/
  if ( v12 != 25 ) /*0x796883*/
    return 0; /*0x796883*/
  if ( !NetworkID::Compare((int)v10, (int)&MEMORY[0xA8BB1C]) ) /*0x79688e*/
    return 0; /*0x79688e*/
  if ( v8 != -22012 ) /*0x79689e*/
    return 0; /*0x79689e*/
  v5 = 0; /*0x7968a6*/
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
  if ( !&g_IsMultiplayerSession || _strcmpi(v13, byte_B777D4) ) /*0x7968fb*/
    return 0; /*0x7968e4*/
  Debug::Log(); /*0x79690c*/
  Network::SetConnectionParams(MEMORY[0xA8E9C0], 50, -1, 5000, 1); /*0x796924*/
  byte_B77E2C = 1; /*0x796929*/
  ExchangeMultiplayerGameInfo(); /*0x796930*/
  byte_B77E2C = 0; /*0x79693a*/
  Network::SetConnectionParams(MEMORY[0xA8E9C0], 30, -1, 600, 1); /*0x79694c*/
  return 1; /*0x7968d9*/
}
}
} // namespace gamemd

// 0x796B30
namespace gamemd {
int sub_796B30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_796B30()
{
  int v0; // esi
  _DWORD v2[3]; // [esp+4h] [ebp-Ch] BYREF

  SimpleDialogControl::Constructor(v2); /*0x796b38*/
  v2[0] = &off_7F7624; /*0x796b4c*/
  v0 = RunDialog(0xFEu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))LobbyDlgProcWOL, (LPARAM)v2); /*0x796b59*/
  v2[0] = &off_7F7624; /*0x796b5b*/
  OwnerDrawControl::InitVtable(v2); /*0x796b6b*/
  if ( v0 >= 0 ) /*0x796b69*/
    return v0; /*0x796b7c*/
  else
    return 0; /*0x796b70*/
}
}
} // namespace gamemd

// 0x796B90
namespace gamemd {
int WOL_LobbyDlgProc(HWND hWnd, LONG a2, int a3, HWND a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall WOL_LobbyDlgProc(HWND hWnd, LONG a2, int a3, HWND a4)
{
  HWND v4; // ebp
  HWND v5; // esi
  unsigned int v6; // edi
  unsigned int v7; // ebx
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
  BOOL v18; // [esp-4h] [ebp-14h]

  v4 = a4; /*0x796b92*/
  v5 = hWnd; /*0x796b97*/
  v6 = a2; /*0x796b9c*/
  if ( a2 == 272 && a4 ) /*0x796baa*/
    SetWindowLongA(hWnd, 8, *((_DWORD *)a4 + 1)); /*0x796bb3*/
  v7 = a3; /*0x796bb9*/
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
          v18 = SendMessageA(v4, 0x188u, 0, 0) != -1; /*0x796d63*/
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
    (*(void (__stdcall **)(LPVOID, HWND *))(*(_DWORD *)MEMORY[0xAC116C] + 208))(MEMORY[0xAC116C], &hWnd); /*0x796c7f*/
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
int NetworkGame_Init()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int NetworkGame_Init()
{
  int i; // esi
  int v1; // esi
  int *v2; // ecx
  int v3; // edx
  unsigned int v4; // ecx
  char v6; // [esp+13h] [ebp-429h]
  DWORD nSize; // [esp+14h] [ebp-428h] BYREF
  char v8[16]; // [esp+18h] [ebp-424h] BYREF
  int v9; // [esp+28h] [ebp-414h]
  int v10; // [esp+2Ch] [ebp-410h]
  int v11; // [esp+30h] [ebp-40Ch]
  int v12; // [esp+34h] [ebp-408h]
  int v13; // [esp+38h] [ebp-404h] BYREF
  _BYTE v14[8]; // [esp+3Ch] [ebp-400h] BYREF
  CHAR Buffer[1016]; // [esp+44h] [ebp-3F8h] BYREF

  dword_B779D4 = 0; /*0x7970e6*/
  *(_DWORD *)dword_B77D6C = g_NetworkRematchState; /*0x7970ec*/
  *(_DWORD *)dword_B779C4 = 0; /*0x7970f1*/
  strcpy(byte_B77830, String::GetOrEmpty((char **)&g_WebBrowser)); /*0x797115*/
  PtrVector::Destroy(&MEMORY[0xA8DA74]); /*0x797123*/
  nSize = 1015; /*0x797132*/
  GetComputerNameA(Buffer, &nSize); /*0x79713a*/
  v6 = 0; /*0x79714a*/
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
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887628] + 48))(MEMORY[0x887628]); /*0x7971ae*/
  strcpy(v8, "xxx.xxx.xxx.xxx"); /*0x7971c8*/
  v9 = 0; /*0x7971d1*/
  v10 = 0; /*0x7971de*/
  v11 = 0; /*0x7971e4*/
  v12 = 0; /*0x7971ec*/
  for ( i = 1; i < MEMORY[0xA8DA84]; ++i ) /*0x7971f7*/
  {
    Network::CopyAddress((_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * i) + 40), &v13, (int)v14); /*0x79720e*/
    (*(void (__thiscall **)(int, char *, _DWORD))(*(_DWORD *)MEMORY[0x887628] + 44))(MEMORY[0x887628], v8, 0); /*0x797221*/
  }
  g_NetworkLobbyState = 2; /*0x79723f*/
  Debug::Log(); /*0x797245*/
  BulkCharToWide(MEMORY[0xA8E258], (unsigned __int8 *)aPotatotoo, -1); /*0x797259*/
  MEMORY[0xA8E2AC] = -1; /*0x797267*/
  MEMORY[0xA8B3AC] = 0; /*0x797271*/
  MEMORY[0xA8ED94] = 1; /*0x797276*/
  g_RulesInitConfig = 10; /*0x79727c*/
  MEMORY[0xA8B270] = 10; /*0x797282*/
  MEMORY[0xA8B25C] = 10000; /*0x797288*/
  MEMORY[0xA8B31F] = 0; /*0x797292*/
  MEMORY[0xA8B260] = 1; /*0x797297*/
  MEMORY[0xA8B261] = 1; /*0x79729d*/
  LOBYTE(MEMORY[0xA8B320]) = 1; /*0x7972a3*/
  MEMORY[0xA8B31C] = 1; /*0x7972a9*/
  MEMORY[0xA8B31D] = 0; /*0x7972af*/
  MEMORY[0xA8B258] = 1; /*0x7972b4*/
  MEMORY[0xA8B31E] = 0; /*0x7972ba*/
  MEMORY[0xA8B274] = 0; /*0x7972bf*/
  MEMORY[0xA8B278] = 0; /*0x7972c4*/
  MEMORY[0xA8B262] = 1; /*0x7972c9*/
  MEMORY[0xA8B263] = 1; /*0x7972cf*/
  LOBYTE(MEMORY[0xA8B264]) = 0; /*0x7972d5*/
  MEMORY[0xA8B26C] = 1; /*0x7972da*/
  MEMORY[0xA8B254] = 1; /*0x7972e0*/
  MEMORY[0xA8B268] = 0; /*0x7972e6*/
  LoadScenarioClassByIndex(1); /*0x7972eb*/
  MEMORY[0xA8B268] = 2; /*0x7972fb*/
  *(_DWORD *)MEMORY[0xA8EB60] = 2; /*0x797301*/
  *((_DWORD *)MEMORY[0xA8B230] + 1173) = MEMORY[0xA8B254]; /*0x797307*/
  MEMORY[0xA8B554] = 5; /*0x797315*/
  switch ( MEMORY[0xA8B268] ) /*0x797325*/
  {
    case 0: /*0x797325*/
      MEMORY[0xA8B550] = (wchar_t *)40; /*0x79732c*/
      MEMORY[0xA8B570] = 60; /*0x797332*/
      MEMORY[0xA8B554] = 10; /*0x79733c*/
      break; /*0x797342*/
    case 1: /*0x797325*/
      MEMORY[0xA8B550] = (wchar_t *)40; /*0x797344*/
      MEMORY[0xA8B570] = 45; /*0x79734a*/
      MEMORY[0xA8B554] = 10; /*0x797354*/
      break; /*0x79735a*/
    case 2: /*0x797325*/
      MEMORY[0xA8B550] = (wchar_t *)30; /*0x797361*/
      MEMORY[0xA8B570] = 30; /*0x797366*/
      break; /*0x79736b*/
    case 3: /*0x797325*/
      MEMORY[0xA8B550] = (wchar_t *)20; /*0x797372*/
      MEMORY[0xA8B570] = 20; /*0x797377*/
      break; /*0x79737c*/
    case 4: /*0x797325*/
      MEMORY[0xA8B550] = (wchar_t *)20; /*0x79737e*/
      MEMORY[0xA8B570] = 15; /*0x797388*/
      break; /*0x797392*/
    case 5: /*0x797325*/
      MEMORY[0xA8B550] = (wchar_t *)20; /*0x797394*/
      MEMORY[0xA8B570] = 12; /*0x79739e*/
      break; /*0x7973a8*/
    default:
      MEMORY[0xA8B550] = (wchar_t *)10; /*0x7973aa*/
      MEMORY[0xA8B570] = 10; /*0x7973b0*/
      break; /*0x7973b0*/
  }
  MEMORY[0xA8B56C] = 0; /*0x7973be*/
  if ( !v6 ) /*0x7973c4*/
    MEMORY[0xA8B570] = 0; /*0x7973c6*/
  v1 = 0; /*0x7973d1*/
  if ( MEMORY[0xA8DA84] > 0 ) /*0x7973d5*/
  {
    v2 = dword_B7790C; /*0x7973d7*/
    v3 = MEMORY[0xA8DA84]; /*0x7973dc*/
    do /*0x7973ea*/
    {
      if ( *v2 > v1 ) /*0x7973e2*/
        v1 = *v2; /*0x7973e4*/
      ++v2; /*0x7973e6*/
      --v3; /*0x7973e9*/
    }
    while ( v3 ); /*0x7973ea*/
  }
  MEMORY[0xA8DB9C] = (wchar_t *)1; /*0x7973ee*/
  if ( !v1 || v1 == 1000 ) /*0x797400*/
  {
    MEMORY[0xA8B570] = 0; /*0x7974ea*/
    Debug::Log(); /*0x7974f0*/
  }
  else
  {
    Debug::Log(); /*0x79740c*/
    if ( v1 <= 1000 ) /*0x79741a*/
    {
      if ( v1 < 600 ) /*0x79742a*/
        MEMORY[0xA8DB9C] = (wchar_t *)1; /*0x79742c*/
    }
    else
    {
      MEMORY[0xA8DB9C] = (wchar_t *)2; /*0x79741c*/
    }
    Network::SetConnectionParams( /*0x79747b*/
      MEMORY[0xA8E9C0],
      120 * (60 * v1 / 1000) / 100 + 60 * v1 / 1000,
      -1,
      8 * (120 * (60 * v1 / 1000) / 100 + 60 * v1 / 1000),
      1);
    if ( v6 ) /*0x797486*/
    {
      IPXManagerClass::sendPacket(5, -1, 120); /*0x797493*/
      switch ( (unsigned int)MEMORY[0xA8DB9C] ) /*0x7974a2*/
      {
        case 0u: /*0x7974a2*/
        case 1u: /*0x7974a2*/
          v4 = (unsigned int)MEMORY[0xA8B550]; /*0x7974a9*/
          break; /*0x7974af*/
        case 2u: /*0x7974a2*/
          v4 = (unsigned int)MEMORY[0xA8B550] + ((unsigned int)MEMORY[0xA8B550] >> 1); /*0x7974ba*/
          break; /*0x7974bc*/
        case 3u: /*0x7974a2*/
          v4 = 2 * (_DWORD)MEMORY[0xA8B550]; /*0x7974c3*/
          break; /*0x7974c6*/
        default:
          v4 = MEMORY[0xA8B56C]; /*0x7974c8*/
          break; /*0x7974c8*/
      }
      MEMORY[0xA8B56C] = 10 * (v4 / 0xA); /*0x7974dd*/
    }
  }
  Debug::Log(); /*0x797504*/
  Debug::Log(); /*0x797515*/
  Debug::Log(); /*0x797526*/
  Debug::Log(); /*0x797536*/
  MEMORY[0xA8B568] = (int)MEMORY[0xA8B550]; /*0x797543*/
  memset(&MEMORY[0xA8B574], 0, 0x340u); /*0x797556*/
  *(_DWORD *)&MEMORY[0x841F30] = 1234; /*0x79755e*/
  *(_DWORD *)MEMORY[0xA8EB60] = MEMORY[0xA8B268]; /*0x797568*/
  *(_DWORD *)&MEMORY[0x841F34] = 1235; /*0x79756e*/
  *(_DWORD *)&MEMORY[0x841F38] = 1236; /*0x797578*/
  *(_DWORD *)&MEMORY[0x841F3C] = 1237; /*0x797582*/
  MEMORY[0xA8ED84] = 0; /*0x79758c*/
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
int __fastcall sub_797640(int a1)
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
  (*(void (__stdcall **)(LPVOID, int, int, char *, char *, int))(*(_DWORD *)MEMORY[0xAC116C] + 16))( /*0x79768b*/
    MEMORY[0xAC116C],
    a1 | dword_B77E50,
    65537,
    MEMORY[0x84B7AC],
    MEMORY[0x84B7B4],
    30);
  (*(void (__stdcall **)(LPVOID, int))(*(_DWORD *)MEMORY[0xAC116C] + 140))(MEMORY[0xAC116C], g_NetworkRematchState); /*0x79769d*/
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
char WOL_FetchData()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char WOL_FetchData()
{
  wchar_t *String; // eax
  HANDLE *v1; // esi
  int v2; // esi
  wchar_t *v4; // eax
  int v5; // ebx
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
  int v16; // esi
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
  v2 = (*(int (__stdcall **)(LPVOID, char *, int, int))(*(_DWORD *)MEMORY[0xAC1170] + 44))( /*0x797853*/
         MEMORY[0xAC1170],
         MEMORY[0xB73B34],
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
    v5 = 30000; /*0x7978ed*/
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
  v16 = (*(int (__stdcall **)(LPVOID, char *, int, int))(*(_DWORD *)MEMORY[0xAC1170] + 44))( /*0x797a83*/
          MEMORY[0xAC1170],
          MEMORY[0xB73B34],
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
char WOL_InitVersionStrings()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char WOL_InitVersionStrings()
{
  char result; // al
  const char **v1; // esi
  int v2; // edi
  int i; // esi
  int v4; // esi
  int v5; // esi
  int v6; // esi
  int v7; // esi
  int v8; // esi
  int v9; // esi
  int v10; // esi
  int v11; // esi
  char **v12; // ecx
  int v13; // esi
  char **v14; // ecx
  int v15; // esi
  char **v16; // ecx

  result = byte_B77E10; /*0x797c20*/
  if ( !byte_B77E10 ) /*0x797c2a*/
  {
    if ( (byte_B76954 & 1) == 0 ) /*0x797c38*/
    {
      byte_B76954 |= 1u; /*0x797c3d*/
      v1 = &dword_B76914; /*0x797c42*/
      v2 = 16; /*0x797c47*/
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
    v4 = 0; /*0x797d7f*/
    for ( dword_B73BD8 = 0; v4 < dword_B736F8; ++v4 ) /*0x797d89*/
      Object::DtorWithDelete((void **)dword_B73700 + v4, 0); /*0x797d95*/
    v5 = 0; /*0x797da9*/
    for ( dword_B736F8 = 0; v5 < dword_B76B00; ++v5 ) /*0x797db3*/
      Object::DtorWithDelete((void **)dword_B76B08 + v5, 0); /*0x797dbf*/
    v6 = 0; /*0x797dd3*/
    for ( dword_B76B00 = 0; v6 < dword_B76510; ++v6 ) /*0x797ddd*/
      Object::DtorWithDelete((void **)dword_B76518 + v6, 0); /*0x797de8*/
    v7 = 0; /*0x797dfc*/
    for ( dword_B76510 = 0; v7 < MEMORY[0xB73AE8]; ++v7 ) /*0x797e06*/
      Object::DtorWithDelete((void **)MEMORY[0xB73AF0] + v7, 0); /*0x797e12*/
    v8 = 0; /*0x797e26*/
    for ( MEMORY[0xB73AE8] = 0; v8 < dword_B77820; ++v8 ) /*0x797e30*/
      Object::DtorWithDelete((void **)dword_B77828 + v8, 0); /*0x797e3c*/
    v9 = 0; /*0x797e50*/
    for ( dword_B77820 = 0; v9 < dword_B73708; ++v9 ) /*0x797e5a*/
      Object::DtorWithDelete((void **)dword_B73710 + v9, 0); /*0x797e65*/
    v10 = 0; /*0x797e79*/
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
    StringVector::Insert(&MEMORY[0xB73AE8], &dword_B76944, 0); /*0x797f6f*/
    v11 = 0; /*0x797f79*/
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
    v13 = 0; /*0x797ffb*/
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
    v15 = 0; /*0x798083*/
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

// 0x798120
namespace gamemd {
void sub_798120()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_798120()
{
  void **v0; // esi
  int v1; // edi

  v0 = (void **)&byte_B76954; /*0x798122*/
  v1 = 16; /*0x798127*/
  do /*0x798137*/
  {
    DeleteAndZero(--v0); /*0x798131*/
    --v1; /*0x798136*/
  }
  while ( v1 ); /*0x798137*/
}
}
} // namespace gamemd

// 0x7982D0
namespace gamemd {
DWORD sub_7982D0(int a1, DWORD a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DWORD __fastcall sub_7982D0(int a1, DWORD a2)
{
  int v3; // edi
  CreateGameDialogControl *v4; // ecx
  DWORD v5; // esi

  v3 = 1000 * a1; /*0x7982ef*/
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

// 0x798360
namespace gamemd {
char sub_798360()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_798360()
{
  LSTATUS v0; // eax
  LSTATUS v1; // esi
  HKEY phkResult; // [esp+0h] [ebp-20Ch] BYREF
  DWORD cbData; // [esp+4h] [ebp-208h] BYREF
  DWORD Type; // [esp+8h] [ebp-204h] BYREF
  BYTE Data[512]; // [esp+Ch] [ebp-200h] BYREF

  v0 = RegOpenKeyExA(HKEY_LOCAL_MACHINE, MEMORY[0x849690], 0, 0x20019u, &phkResult); /*0x79837c*/
  if ( !v0 ) /*0x798384*/
  {
    cbData = 512; /*0x7983a2*/
    v1 = RegQueryValueExA(phkResult, g_INI_Key_Community, 0, &Type, Data, &cbData); /*0x7983b0*/
    LOBYTE(v0) = RegCloseKey(phkResult); /*0x7983b7*/
    if ( !v1 ) /*0x7983c0*/
      LOBYTE(v0) = OpenURLWOL((const char *)Data, 0); /*0x7983c8*/
  }
  return v0; /*0x7983cd*/
}
}
} // namespace gamemd

// 0x7983E0
namespace gamemd {
int Multiplayer_Setup2_DlgProc(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall Multiplayer_Setup2_DlgProc(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
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
              MEMORY[0xA8B244] = 5; /*0x798887*/
              MEMORY[0xA8B248] = 0; /*0x798891*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1762); /*0x7988a3*/
              break;
            case 0x6E3u: /*0x798833*/
              MEMORY[0xA8B244] = 3; /*0x798863*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1763); /*0x798875*/
              return 0; /*0x798884*/
            case 0x771u: /*0x798833*/
              MEMORY[0xA8B244] = 2; /*0x79883f*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1905); /*0x798851*/
              return 0; /*0x798860*/
          }
        }
        else
        {
          switch ( (unsigned __int16)a3 ) /*0x798729*/
          {
            case 0x6E1u: /*0x798729*/
              MEMORY[0xA8B244] = 4; /*0x79880a*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1761); /*0x79881c*/
              return 0; /*0x79882b*/
            case 0x55Fu: /*0x798729*/
              if ( !RegOpenKeyExA(HKEY_LOCAL_MACHINE, MEMORY[0x849690], 0, 0x20019u, &phkResult) ) /*0x7987a4*/
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
              MEMORY[0xA8B244] = 0; /*0x79876a*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1670); /*0x79877c*/
              return 0; /*0x79878b*/
            case 0x6E0u: /*0x798729*/
              MEMORY[0xA8B244] = 1; /*0x798746*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1760); /*0x798758*/
              return 0; /*0x798767*/
          }
        }
      }
      else if ( a2 == 1175 ) /*0x7984b8*/
      {
        DlgItem = GetDlgItem(hWnd, 1862); /*0x7984d8*/
        v7 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x836070], 0); /*0x7984da*/
        if ( DlgItem && v7 ) /*0x7984e5*/
          CacheDialogInvalidate(DlgItem, v7); /*0x7984eb*/
        v8 = GetDlgItem(hWnd, 1864); /*0x798504*/
        v9 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x83609C], 0); /*0x798506*/
        if ( v8 && v9 ) /*0x798511*/
          CacheDialogInvalidate(v8, v9); /*0x798517*/
        v10 = GetDlgItem(hWnd, 1865); /*0x798530*/
        v11 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835D14], 0); /*0x798532*/
        if ( v10 && v11 ) /*0x79853d*/
          CacheDialogInvalidate(v10, v11); /*0x798543*/
        v12 = GetDlgItem(hWnd, 1866); /*0x79855c*/
        v13 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x831DDC], 0); /*0x79855e*/
        if ( v12 && v13 ) /*0x798569*/
          CacheDialogInvalidate(v12, v13); /*0x79856f*/
        v14 = GetDlgItem(hWnd, 1874); /*0x798588*/
        v15 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x8360A8], 0); /*0x79858a*/
        if ( v14 && v15 ) /*0x798595*/
          CacheDialogInvalidate(v14, v15); /*0x79859b*/
        v16 = GetDlgItem(hWnd, 1884); /*0x7985b4*/
        v17 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835CA8], 0); /*0x7985b6*/
        if ( v16 && v17 ) /*0x7985c1*/
          CacheDialogInvalidate(v16, v17); /*0x7985c7*/
        v18 = GetDlgItem(hWnd, 1885); /*0x7985e0*/
        v19 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835C9C], 0); /*0x7985e2*/
        if ( v18 && v19 ) /*0x7985ed*/
          CacheDialogInvalidate(v18, v19); /*0x7985f3*/
        v20 = GetDlgItem(hWnd, 1886); /*0x79860c*/
        v21 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835C90], 0); /*0x79860e*/
        if ( v20 && v21 ) /*0x798619*/
          CacheDialogInvalidate(v20, v21); /*0x79861f*/
        v22 = GetDlgItem(hWnd, 1950); /*0x798638*/
        v23 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835FBC], 0); /*0x79863a*/
        if ( v22 && v23 ) /*0x798645*/
          CacheDialogInvalidate(v22, v23); /*0x79864b*/
        v24 = GetDlgItem(hWnd, 1951); /*0x798664*/
        v25 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835FC8], 0); /*0x798666*/
        if ( v24 && v25 ) /*0x798671*/
          CacheDialogInvalidate(v24, v25); /*0x798677*/
        v26 = GetDlgItem(hWnd, 1952); /*0x798690*/
        v27 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835FC8], 0); /*0x798692*/
        if ( v26 && v27 ) /*0x79869d*/
          CacheDialogInvalidate(v26, v27); /*0x7986a3*/
        v28 = GetDlgItem(hWnd, 1953); /*0x7986bc*/
        v29 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835FD4], 0); /*0x7986be*/
        if ( v28 && v29 ) /*0x7986c9*/
          CacheDialogInvalidate(v28, v29); /*0x7986cf*/
        v30 = GetDlgItem(hWnd, 1954); /*0x7986e8*/
        v31 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835FE4], 0); /*0x7986ea*/
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
int Multiplayer_GameMode_DlgProc(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall Multiplayer_GameMode_DlgProc(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
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
  int v35; // [esp+18h] [ebp-208h]
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
              MEMORY[0xA8B244] = 5; /*0x798dab*/
              MEMORY[0xA8B248] = 0; /*0x798db5*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1762); /*0x798dc7*/
              break;
            case 0x6E4u: /*0x798d55*/
              MEMORY[0xA8B244] = 6; /*0x798d87*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1764); /*0x798d99*/
              return 0; /*0x798da8*/
            case 0x771u: /*0x798d55*/
              MEMORY[0xA8B244] = 2; /*0x798d63*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1905); /*0x798d75*/
              return 0; /*0x798d84*/
          }
        }
        else
        {
          switch ( (unsigned __int16)a3 ) /*0x798c4b*/
          {
            case 0x6E1u: /*0x798c4b*/
              MEMORY[0xA8B244] = 4; /*0x798d2c*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1761); /*0x798d3e*/
              return 0; /*0x798d4d*/
            case 0x55Fu: /*0x798c4b*/
              if ( !RegOpenKeyExA(HKEY_LOCAL_MACHINE, MEMORY[0x849690], 0, 0x20019u, &phkResult) ) /*0x798cc6*/
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
              MEMORY[0xA8B244] = 0; /*0x798c8c*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1670); /*0x798c9e*/
              return 0; /*0x798cad*/
            case 0x6E0u: /*0x798c4b*/
              MEMORY[0xA8B244] = 1; /*0x798c68*/
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
          if ( v35 ) /*0x7989c0*/
            FillPersonaInfoWOL(v35, hWnd, (char **)&g_WebBrowser, (wchar_t **)1); /*0x7989ca*/
          Type = (DWORD)&rc_ptr<PlayerProfile>::`vftable'; /*0x7989d3*/
          ComPtr::Release(&Type); /*0x7989db*/
        }
        DlgItem = GetDlgItem(hWnd, 1862); /*0x7989fa*/
        v7 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x836070], 0); /*0x7989fc*/
        if ( DlgItem && v7 ) /*0x798a07*/
          CacheDialogInvalidate(DlgItem, v7); /*0x798a0d*/
        v8 = GetDlgItem(hWnd, 1864); /*0x798a26*/
        v9 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x83609C], 0); /*0x798a28*/
        if ( v8 && v9 ) /*0x798a33*/
          CacheDialogInvalidate(v8, v9); /*0x798a39*/
        v10 = GetDlgItem(hWnd, 1865); /*0x798a52*/
        v11 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835D14], 0); /*0x798a54*/
        if ( v10 && v11 ) /*0x798a5f*/
          CacheDialogInvalidate(v10, v11); /*0x798a65*/
        v12 = GetDlgItem(hWnd, 1866); /*0x798a7e*/
        v13 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x831DDC], 0); /*0x798a80*/
        if ( v12 && v13 ) /*0x798a8b*/
          CacheDialogInvalidate(v12, v13); /*0x798a91*/
        v14 = GetDlgItem(hWnd, 1874); /*0x798aaa*/
        v15 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x8360A8], 0); /*0x798aac*/
        if ( v14 && v15 ) /*0x798ab7*/
          CacheDialogInvalidate(v14, v15); /*0x798abd*/
        v16 = GetDlgItem(hWnd, 1884); /*0x798ad6*/
        v17 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835CA8], 0); /*0x798ad8*/
        if ( v16 && v17 ) /*0x798ae3*/
          CacheDialogInvalidate(v16, v17); /*0x798ae9*/
        v18 = GetDlgItem(hWnd, 1885); /*0x798b02*/
        v19 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835C9C], 0); /*0x798b04*/
        if ( v18 && v19 ) /*0x798b0f*/
          CacheDialogInvalidate(v18, v19); /*0x798b15*/
        v20 = GetDlgItem(hWnd, 1886); /*0x798b2e*/
        v21 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835C90], 0); /*0x798b30*/
        if ( v20 && v21 ) /*0x798b3b*/
          CacheDialogInvalidate(v20, v21); /*0x798b41*/
        v22 = GetDlgItem(hWnd, 1950); /*0x798b5a*/
        v23 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835FBC], 0); /*0x798b5c*/
        if ( v22 && v23 ) /*0x798b67*/
          CacheDialogInvalidate(v22, v23); /*0x798b6d*/
        v24 = GetDlgItem(hWnd, 1951); /*0x798b86*/
        v25 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835FC8], 0); /*0x798b88*/
        if ( v24 && v25 ) /*0x798b93*/
          CacheDialogInvalidate(v24, v25); /*0x798b99*/
        v26 = GetDlgItem(hWnd, 1952); /*0x798bb2*/
        v27 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835FC8], 0); /*0x798bb4*/
        if ( v26 && v27 ) /*0x798bbf*/
          CacheDialogInvalidate(v26, v27); /*0x798bc5*/
        v28 = GetDlgItem(hWnd, 1953); /*0x798bde*/
        v29 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835FD4], 0); /*0x798be0*/
        if ( v28 && v29 ) /*0x798beb*/
          CacheDialogInvalidate(v28, v29); /*0x798bf1*/
        v30 = GetDlgItem(hWnd, 1954); /*0x798c0a*/
        v31 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835FE4], 0); /*0x798c0c*/
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
int MainLobbyDlgProcWOL(HWND hWnd, LPARAM lParam, ObjectClass a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (v3 export truncated pseudocode — commented out; live version via get_context)
// int __stdcall MainLobbyDlgProcWOL(HWND hWnd, LPARAM lParam, ObjectClass a3)
// {
//   unsigned int v3; // ebx
//   char *v4; // ebp
//   HWND v5; // esi
//   unsigned int v6; // edi
//   int result; // eax
//   LONG WindowLongA; // eax
//   HWND v9; // ebx
//   LRESULT v10; // eax
//   LPARAM v11; // ebp
//   bool v12; // al
//   BOOL v13; // eax
//   HWND v14; // eax
//   BOOL v15; // eax
//   HWND v16; // eax
//   LRESULT v17; // esi
//   LRESULT v18; // eax
//   LRESULT v19; // esi
//   LRESULT v20; // eax
//   LRESULT v21; // esi
//   LRESULT v22; // eax
//   ObjectClass *v24; // eax
//   bool bl62; // bl
//   _BYTE *v25; // esi
//   LRESULT v26; // eax
//   HWND v27; // edi
//   LRESULT v28; // ebx
//   ObjectClass *v29; // eax
//   ObjectClass *v30; // eax
//   LRESULT v31; // eax
//   HWND v32; // eax
//   ObjectClass *v33; // esi
//   unsigned int v34; // ebx
//   HWND DlgItem; // ebp
//   wchar_t *StringCSF; // eax
//   CampaignScore *v37; // eax
//   CampaignScore *v38; // edi
//   CampaignScore *v39; // eax
//   LRESULT v40; // eax
//   HWND v41; // eax
//   HWND v42; // eax
//   LRESULT v43; // ea... [18507 chars total]
// end truncated pseudocode
}
} // namespace gamemd

// 0x799EA0
namespace gamemd {
int WOL_OptionsDlgProc(HWND hWnd, const char * lParam, int a3, int hCtl)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (v3 export truncated pseudocode — commented out; live version via get_context)
// int __stdcall WOL_OptionsDlgProc(HWND hWnd, const char *lParam, int a3, int hCtl)
// {
//   HWND v4; // ebp
//   HWND v5; // esi
//   unsigned int v6; // edi
//   unsigned int v7; // ebx
//   int result; // eax
//   LONG WindowLongA; // eax
//   HWND v10; // eax
//   bool v11; // dl
//   int i; // ebx
//   char *v13; // eax
//   char v14; // al
//   HWND v15; // edi
//   char *v16; // eax
//   unsigned int v17; // eax
//   HWND v18; // edi
//   HWND v19; // eax
//   HWND v20; // eax
//   HWND v21; // edi
//   char *v22; // eax
//   LRESULT v23; // ebp
//   LRESULT v24; // eax
//   HWND v25; // ebp
//   char *v26; // eax
//   unsigned int v27; // eax
//   HWND v28; // ebp
//   HWND v29; // eax
//   HWND v30; // eax
//   HWND v31; // esi
//   LRESULT v32; // eax
//   LRESULT v33; // ecx
//   LRESULT v34; // edi
//   HWND v35; // esi
//   LRESULT v36; // eax
//   LRESULT v37; // edi
//   HWND v38; // esi
//   LRESULT v39; // eax
//   HWND v40; // eax
//   unsigned int v41; // eax
//   HWND v42; // edi
//   int v43; // ebx
//   HWND v44; // eax
//   HWND v45; // eax
//   HWND v46; // edi
//   char *v47; // eax
//   char **v4... [24061 chars total]
// end truncated pseudocode
}
} // namespace gamemd

// 0x79AE00
namespace gamemd {
int sub_79AE00(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall sub_79AE00(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
  int result; // eax
  LONG WindowLongA; // ebx
  UINT v6; // eax

  if ( a2 == 272 ) /*0x79ae16*/
  {
    if ( a4 ) /*0x79ae1a*/
      SetWindowLongA(hWnd, 8, *(_DWORD *)(a4 + 4)); /*0x79ae23*/
  }
  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x79ae33*/
  if ( !result ) /*0x79ae3a*/
  {
    WindowLongA = GetWindowLongA(hWnd, 8); /*0x79ae4c*/
    if ( a2 > 0x2B ) /*0x79ae4e*/
    {
      if ( a2 == 273 ) /*0x79aeaa*/
      {
        if ( (unsigned __int16)a3 == 1 ) /*0x79aeb3*/
        {
          ReadSettingsWOL(&g_WebBrowser); /*0x79aeec*/
          (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1); /*0x79aef8*/
        }
        else if ( (unsigned __int16)a3 == 2 ) /*0x79aeb6*/
        {
          v6 = IsDlgButtonChecked(hWnd, 1785); /*0x79aebe*/
          ReadWOLGameOption(v6 != 1); /*0x79aecf*/
          (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 2); /*0x79aedb*/
          return 0; /*0x79aee4*/
        }
      }
    }
    else
    {
      switch ( a2 ) /*0x79ae50*/
      {
        case 0x2Bu: /*0x79ae50*/
          Dialog::Resize((char *)a4); /*0x79ae93*/
          return 1; /*0x79aea1*/
        case 0xFu: /*0x79ae50*/
          Dialog::DrawBackground(hWnd); /*0x79ae6e*/
          Dialog::StopBink(hWnd); /*0x79ae75*/
          ValidateRect(hWnd, 0); /*0x79ae7d*/
          return 1; /*0x79ae8c*/
        case 0x14u: /*0x79ae50*/
          return 1; /*0x79ae69*/
      }
    }
    return 0; /*0x79aefb*/
  }
  return result; /*0x79ae60*/
}
}
} // namespace gamemd

// 0x79BA60
namespace gamemd {
char ValidateGameJoinWOL(BlowStraw * aP0, ObjectClass * aP1, char a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall ValidateGameJoinWOL(BlowStraw *aP0, ObjectClass *aP1, char a3)
{
  int BlowStraw_field_0x08; // eax
  char v5; // cl
  char v6; // al
  wchar_t *StringCSF; // eax
  BOOL v9; // ecx
  wchar_t *v10; // eax
  ObjectClass v11; // [esp+0h] [ebp-ACh] BYREF

  v11.__pad_0[14] = (char)aP1; /*0x79ba74*/
  v5 = 0; /*0x79ba9c*/
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x79ba7a*/
  {
    BlowStraw_field_0x08 = aP0[2].BlowStraw_field_0x08; /*0x79ba7c*/
    v11.__pad_0[15] = (BlowStraw_field_0x08 & 0x800) != 0; /*0x79ba87*/
    if ( (aP0[2].BlowStraw_field_0x08 & 0x800) != 0 || (v11.__pad_0[15] = (BlowStraw_field_0x08 & 0x1000) != 0) != 0 ) /*0x79ba96*/
      v5 = 1; /*0x79ba7a*/
  }
  v6 = *(_DWORD *)&HouseClass_Player.__pad_5568[8080] == 3 /*0x79bab6*/
    || *(_DWORD *)&HouseClass_Player.__pad_5568[8080] == 1
    || *(_DWORD *)&HouseClass_Player.__pad_5568[8080] == 2;
  if ( v5 != v6 ) /*0x79babd*/
    return 0; /*0x79babd*/
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x79bac6*/
  {
    v11.__pad_0[15] = BYTE1(aP0[2].BlowStraw_field_0x08) & 1; /*0x79bad0*/
    if ( v11.__pad_0[15] ) /*0x79bad4*/
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
    if ( v11.__pad_0[14] ) /*0x79bc41*/
    {
      v10 = GetStringCSF(g_Str_TXT_MISMATCH, 0, (CampaignScore *)g_Str_File_wonline_cpp, 26769); /*0x79bc54*/
      goto LABEL_34; /*0x79bc54*/
    }
    goto LABEL_35; /*0x79bc41*/
  }
  if ( !a3 ) /*0x79bbbb*/
  {
    v9 = v11.abstractFlags || v11.nextArrayIndex; /*0x79bbda*/
    if ( (int)v11.NeedsSaveOrLink + *(_DWORD *)aP0[1].__pad_0 - v11.abstractFlags >= aP0->BlowStraw_field_0x08 - v9 ) /*0x79bbe6*/
    {
      if ( v11.__pad_0[14] ) /*0x79bbec*/
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
  if ( v11.__pad_0[14] ) /*0x79bc28*/
  {
    v10 = GetStringCSF((wchar_t *)&stru_830620.__pad_DFC[480], 0, (CampaignScore *)g_Str_File_wonline_cpp, 26788); /*0x79bc3b*/
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
bool WOL_FindBuddy()
{
  bool result; // al
  int v1; // esi
  int *v2; // esi
  int v3; // esi
  int v4; // esi
  const void *v5; // esi
  signed int v6; // ebx
  signed int v7; // eax
  int v8; // ebp
  char *v9; // eax
  char v10; // bl
  void *v11; // [esp+10h] [ebp-21Ch] BYREF
  _BYTE v12[268]; // [esp+14h] [ebp-218h] BYREF
  char v13[268]; // [esp+120h] [ebp-10Ch] BYREF

  if ( !String::Length(&g_WOL_LoginObject) ) /*0x79bc8f*/
    return 0; /*0x79bca4*/
  if ( !dword_B76994 ) /*0x79bcac*/
    return 0; /*0x79bcac*/
  v1 = *((_DWORD *)g_WOL_AccountInfo + (dword_B769A8(&g_WOL_LoginObject) & ((1 << dword_B7699C) - 1))); /*0x79bcce*/
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
  v2 = (int *)(v1 + 4); /*0x79bcfb*/
  if ( !v2 ) /*0x79bd00*/
    return 0; /*0x79bd00*/
  v3 = *v2; /*0x79bd02*/
  if ( v3 == 4 ) /*0x79bd07*/
    return 1; /*0x79bd15*/
  if ( v3 != 5 ) /*0x79bd19*/
    return 0; /*0x79bd27*/
  if ( !dword_B7660C ) /*0x79bd2f*/
    return 0; /*0x79bd2f*/
  v4 = *((_DWORD *)g_WOL_EventQueue + (dword_B76620(&g_WOL_LoginObject) & ((1 << dword_B76614) - 1))); /*0x79bd55*/
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
  v5 = (const void *)(v4 + 4); /*0x79bd8d*/
  if ( v5 ) /*0x79bd92*/
    qmemcpy(v13, v5, sizeof(v13)); /*0x79bda0*/
  String::Assign((char **)&v11, &v13[52]); /*0x79bdae*/
  v6 = 0; /*0x79bdbe*/
  memset(v12, 0, sizeof(v12)); /*0x79bdc0*/
  v7 = g_WOL_ChatState; /*0x79bdc2*/
  if ( (int)g_WOL_ChatState <= 0 ) /*0x79bdc9*/
  {
LABEL_27:
    memset(v12, 0, sizeof(v12)); /*0x79be1f*/
    DeleteAndZero(&v11); /*0x79be25*/
    return 0; /*0x79be36*/
  }
  v8 = 0; /*0x79bdcb*/
  while ( 1 ) /*0x79bdcd*/
  {
    if ( v8 >= 0 && v6 < v7 ) /*0x79bdd3*/
      qmemcpy(v12, (char *)g_WOL_ConnectionHandler + v8, sizeof(v12)); /*0x79bde7*/
    v9 = String::GetOrEmpty_Alt((char **)&v11); /*0x79bded*/
    if ( !_strcmpi(&v12[52], v9) ) /*0x79bdf8*/
      break; /*0x79bdf8*/
    v7 = g_WOL_ChatState; /*0x79be04*/
    ++v6; /*0x79be09*/
    v8 += 268; /*0x79be0a*/
    if ( v6 >= (int)g_WOL_ChatState ) /*0x79be12*/
      goto LABEL_27; /*0x79be12*/
  }
  v10 = ValidateGameJoinWOL((int)v12, 0, MEMORY[0xAC10C8] != 0); /*0x79be52*/
  DeleteAndZero(&v11); /*0x79be54*/
  return v10; /*0x79bc98*/
}
}
} // namespace gamemd

// 0x79BF50
namespace gamemd {
BOOL E4Recv_79BF50::sub_79BF50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __thiscall sub_79BF50(HWND this)
{
  HWND DlgItem; // eax
  HWND v3; // eax
  ObjectClass *v4; // esi
  HWND v5; // eax
  BOOL v7; // [esp-4h] [ebp-18h]
  BOOL BuddyWOL; // [esp-4h] [ebp-18h]
  unsigned __int8 v9; // [esp+10h] [ebp-4h]

  v7 = String::Length(&g_WOL_LoginObject) != 0; /*0x79bf6f*/
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
void RemoveWOLPlayerLogin(const char ** a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall RemoveWOLPlayerLogin(const char **a1)
{
  const char **v1; // ebp
  int v2; // esi
  int v3; // ebx
  void *v4; // eax
  void *v5; // esi
  void *v6; // ebp
  int v7; // esi
  int v8; // edi
  _DWORD *v9; // edi
  int v10; // ebx
  double v11; // st7
  int v12; // esi
  char *v13; // eax
  void *v14; // [esp+8h] [ebp-188h] BYREF
  __int64 v15; // [esp+Ch] [ebp-184h]
  void *v16; // [esp+14h] [ebp-17Ch] BYREF
  char v17[108]; // [esp+18h] [ebp-178h] BYREF
  _BYTE v18[268]; // [esp+84h] [ebp-10Ch] BYREF

  v1 = a1; /*0x79cbad*/
  v2 = 0; /*0x79cbaf*/
  LODWORD(v15) = a1; /*0x79cbb1*/
  if ( g_WindowManager > 0 ) /*0x79cbb7*/
  {
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
        v3 = dword_B73AAC / 2; /*0x79cc83*/
        if ( dword_B73AAC / 2 < 10 ) /*0x79cc88*/
          v3 = 10; /*0x79cc8a*/
        if ( v3 < dword_B73AAC ) /*0x79cc91*/
        {
          v4 = __2_YAPAXI_Z(4 * v3); /*0x79cc9b*/
          v5 = g_WOL_LoginQueue; /*0x79cca0*/
          v6 = v4; /*0x79ccab*/
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
    String::AssignFromPtr((char **)&v14, v1); /*0x79ccdd*/
    HashTable::FindWOLHashTableEntry(&v14, v18); /*0x79ccf4*/
    if ( !dword_B76994 ) /*0x79cd02*/
      goto LABEL_34; /*0x79cd02*/
    v15 = (unsigned int)(dword_B76994 - 1); /*0x79cd0d*/
    *(float *)&v15 = (double)v15 / (double)dword_B76998; /*0x79cd2a*/
    v7 = dword_B769A8(&v14) & ((1 << dword_B7699C) - 1); /*0x79cd48*/
    v8 = *((_DWORD *)g_WOL_AccountInfo + v7); /*0x79cd4a*/
    if ( !v8 ) /*0x79cd4f*/
      goto LABEL_34; /*0x79cd4f*/
    if ( String::Compare(*((const char ***)g_WOL_AccountInfo + v7), (const char **)&v14) ) /*0x79cd5c*/
    {
      v9 = (_DWORD *)*((_DWORD *)g_WOL_AccountInfo + v7); /*0x79cd6a*/
      v10 = v9[2]; /*0x79cd6f*/
      if ( v9 ) /*0x79cd72*/
      {
        DeleteAndZero(*((void ***)g_WOL_AccountInfo + v7)); /*0x79cd76*/
        __3_YAXPAX_Z(v9); /*0x79cd7c*/
      }
      v11 = *(float *)&v15; /*0x79cd8a*/
      *((_DWORD *)g_WOL_AccountInfo + v7) = v10; /*0x79cd8e*/
      --dword_B76994; /*0x79cd9d*/
      if ( v11 > dbl_B769B0 ) /*0x79cda7*/
        goto LABEL_34; /*0x79cda7*/
    }
    else
    {
      v12 = *(_DWORD *)(v8 + 8); /*0x79cdab*/
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
    memset(v17, 0, sizeof(v17)); /*0x79ce0f*/
    v13 = String::GetOrEmpty_Alt((char **)v1); /*0x79ce20*/
    strncpy(&v17[36], v13, 9u); /*0x79ce2b*/
    (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)MEMORY[0xAC116C] + 228))(MEMORY[0xAC116C], v17); /*0x79ce40*/
    DeleteAndZero(&v14); /*0x79ce4a*/
    DeleteAndZero(&v16); /*0x79ce53*/
  }
}
}
} // namespace gamemd

// 0x79CE70
namespace gamemd {
unsigned int WOL_RefreshChannelList()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int WOL_RefreshChannelList()
{
  HANDLE *v0; // esi
  unsigned int result; // eax
  int i; // esi
  int v3; // edi
  int v4; // eax
  int v5; // esi
  char **v6; // ecx
  int v7; // esi
  void *v8; // [esp+Ch] [ebp-70h] BYREF
  char v9[108]; // [esp+10h] [ebp-6Ch] BYREF

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
  v3 = 0; /*0x79cf08*/
  for ( g_WOL_RequestManager = 0; v3 < g_WindowManager; ++v3 ) /*0x79cf16*/
  {
    unknown_libname_73(&v8); /*0x79cf20*/
    if ( v3 >= 0 && v3 < g_WindowManager ) /*0x79cf2f*/
      String::Reassign((char **)&v8, (const char **)g_WOL_LoginQueue + v3); /*0x79cf3f*/
    v4 = g_WOL_RequestManager; /*0x79cf44*/
    v5 = g_WOL_RequestManager; /*0x79cf49*/
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
      v7 = 0; /*0x79d039*/
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
    memset(v9, 0, sizeof(v9)); /*0x79d0b8*/
    strcpy(&v9[36], String::GetOrEmpty((char **)&g_WOL_AuthObject)); /*0x79d0e5*/
    return (*(int (__stdcall **)(LPVOID, char *))(*(_DWORD *)MEMORY[0xAC116C] + 96))(MEMORY[0xAC116C], v9); /*0x79d0f7*/
  }
  return result; /*0x79ceda*/
}
}
} // namespace gamemd

// 0x79D110
namespace gamemd {
void WOL_SendGameList()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void WOL_SendGameList()
{
  int v0; // esi
  int v1; // esi
  int v2; // ebx
  void *v3; // eax
  void *v4; // esi
  void *v5; // ebp
  int v6; // esi
  char *v7; // eax
  int v8; // esi
  char *v9; // eax
  int v10; // [esp+20h] [ebp-20h]
  int v11; // [esp+2Ch] [ebp-14h]
  void *v12; // [esp+34h] [ebp-Ch] BYREF
  void *v13; // [esp+38h] [ebp-8h] BYREF
  int v14; // [esp+3Ch] [ebp-4h]

  v0 = g_WOL_BuddyList; /*0x79d114*/
  if ( g_WOL_BuddyList <= 10 ) /*0x79d11d*/
  {
    if ( !g_WOL_BuddyList ) /*0x79d128*/
      return; /*0x79d128*/
  }
  else
  {
    v0 = 10; /*0x79d11f*/
  }
  unknown_libname_73(&v12); /*0x79d132*/
  if ( v0 > 0 ) /*0x79d139*/
  {
    v14 = v0; /*0x79d142*/
    do /*0x79d264*/
    {
      unknown_libname_73(&v13); /*0x79d14a*/
      if ( g_WOL_BuddyList > 0 ) /*0x79d156*/
      {
        String::Reassign((char **)&v13, (const char **)g_WOL_ChannelMgr); /*0x79d166*/
        v1 = 0; /*0x79d170*/
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
            v2 = dword_B779B4 / 2; /*0x79d1d8*/
            if ( dword_B779B4 / 2 < 10 ) /*0x79d1dd*/
              v2 = 10; /*0x79d1df*/
            if ( v2 < dword_B779B4 ) /*0x79d1e6*/
            {
              v3 = __2_YAPAXI_Z(4 * v2); /*0x79d1f0*/
              v4 = g_WOL_ChannelMgr; /*0x79d1f5*/
              v5 = v3; /*0x79d200*/
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
        String::Append((const char **)&v12, MEMORY[0x8318B8]); /*0x79d23f*/
      String::Append2((const char **)&v12, (char **)&v13); /*0x79d24d*/
      DeleteAndZero(&v13); /*0x79d256*/
      --v14; /*0x79d260*/
    }
    while ( v14 ); /*0x79d264*/
  }
  v6 = *(_DWORD *)MEMORY[0xAC1170]; /*0x79d27c*/
  v10 = g_NetworkRematchState & 0xFFFF00; /*0x79d285*/
  v7 = String::GetOrEmpty((char **)&v12); /*0x79d28a*/
  (*(void (__stdcall **)(LPVOID, void *, int, char *, int, int, _DWORD, _DWORD))(v6 + 20))( /*0x79d2a3*/
    MEMORY[0xAC1170],
    &g_WOL_ConnectFlag,
    g_WOL_GameConfig,
    v7,
    v10,
    -1,
    0,
    0);
  v8 = *(_DWORD *)MEMORY[0xAC1170]; /*0x79d2b7*/
  v11 = g_NetworkRematchState & 0xFFFF00; /*0x79d2b9*/
  v9 = String::GetOrEmpty((char **)&v12); /*0x79d2be*/
  (*(void (__stdcall **)(LPVOID, void *, int, char *, int))(v8 + 56))( /*0x79d2d6*/
    MEMORY[0xAC1170],
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
void WOL_RefreshGameList()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void WOL_RefreshGameList()
{
  int i; // esi
  int v1; // edi
  int v2; // eax
  int v3; // esi
  int v4; // ebp
  void *v5; // ebx
  void *v6; // eax
  int v7; // ebp
  void *v8; // ebx
  void *v9; // eax
  char **v10; // ecx
  int v11; // [esp+8h] [ebp-Ch]
  void *v12; // [esp+Ch] [ebp-8h] BYREF
  int j; // [esp+10h] [ebp-4h]

  for ( i = 0; i < g_WOL_BuddyList; ++i ) /*0x79d2fe*/
    DeleteAndZero((void **)g_WOL_ChannelMgr + i); /*0x79d308*/
  v1 = 0; /*0x79d31c*/
  g_WOL_BuddyList = 0; /*0x79d320*/
  for ( j = 0; v1 < g_WindowManager; j = v1 ) /*0x79d32e*/
  {
    unknown_libname_73(&v12); /*0x79d33a*/
    if ( v1 >= 0 && v1 < g_WindowManager ) /*0x79d349*/
      String::Reassign((char **)&v12, (const char **)g_WOL_LoginQueue + v1); /*0x79d359*/
    v2 = g_WOL_BuddyList; /*0x79d35e*/
    v3 = g_WOL_BuddyList; /*0x79d363*/
    v11 = g_WOL_BuddyList; /*0x79d367*/
    v4 = dword_B779B4; /*0x79d371*/
    if ( g_WOL_BuddyList >= dword_B779B4 ) /*0x79d379*/
    {
      v4 = 2 * g_WOL_BuddyList; /*0x79d383*/
      if ( 2 * g_WOL_BuddyList < 10 ) /*0x79d389*/
        v4 = 10; /*0x79d38b*/
      v5 = __2_YAPAXI_Z(4 * v4); /*0x79d39f*/
      memset(v5, 0, 4 * ((unsigned int)(4 * v4) >> 2)); /*0x79d3ad*/
      v6 = g_WOL_ChannelMgr; /*0x79d3b6*/
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
      v7 = 2 * v2; /*0x79d3f6*/
      if ( 2 * v2 < 10 ) /*0x79d3fc*/
        v7 = 10; /*0x79d3fe*/
      v8 = __2_YAPAXI_Z(4 * v7); /*0x79d412*/
      memset(v8, 0, 4 * ((unsigned int)(4 * v7) >> 2)); /*0x79d420*/
      v9 = g_WOL_ChannelMgr; /*0x79d429*/
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
void CleanupWOLSession()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void CleanupWOLSession()
{
  int i; // esi
  int v1; // esi
  unsigned int v2; // eax
  unsigned int v3; // ebp
  int v4; // esi
  void **v5; // edi
  unsigned int v6; // eax
  unsigned int j; // ebp
  int v8; // esi
  void **v9; // edi
  int k; // esi
  int v11; // esi
  void *v12; // [esp+8h] [ebp-4h] BYREF

  for ( i = 0; i < g_WindowManager; ++i ) /*0x79d4ee*/
    DeleteAndZero((void **)g_WOL_LoginQueue + i); /*0x79d4f8*/
  v1 = 0; /*0x79d50c*/
  for ( g_WindowManager = 0; v1 < g_WOL_RequestManager; ++v1 ) /*0x79d516*/
    DeleteAndZero((void **)g_WOL_SessionID + v1); /*0x79d521*/
  v2 = dword_B76998; /*0x79d530*/
  v3 = 0; /*0x79d536*/
  for ( g_WOL_RequestManager = 0; v3 < dword_B76998; v2 = dword_B76998 ) /*0x79d541*/
  {
    v4 = *((_DWORD *)g_WOL_AccountInfo + v3); /*0x79d549*/
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
  v6 = g_WOL_PacketQueue; /*0x79d5b1*/
  for ( j = 0; j < g_WOL_PacketQueue; v6 = g_WOL_PacketQueue ) /*0x79d5ba*/
  {
    v8 = *((_DWORD *)g_WOL_EventQueue + j); /*0x79d5c2*/
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
  (*(void (__stdcall **)(LPVOID))(*(_DWORD *)MEMORY[0xAC116C] + 220))(MEMORY[0xAC116C]); /*0x79d637*/
  if ( MEMORY[0xA8B244] != 3 && MEMORY[0xA8B244] != 1 && MEMORY[0xA8B244] != 2 ) /*0x79d657*/
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
    v11 = 0; /*0x79d6ba*/
    for ( g_WOL_RequestManager = 0; v11 < g_WindowManager; ++v11 ) /*0x79d6c4*/
    {
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
int WOLLoginDialogProc(HWND hWnd, unsigned int a2, int a3, HWND a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall WOLLoginDialogProc(HWND hWnd, unsigned int a2, int a3, HWND a4)
{
  HWND v4; // ebp
  unsigned int v5; // esi
  unsigned int v6; // edi
  int result; // eax
  unsigned int v8; // esi
  unsigned int v9; // esi
  HWND DlgItem; // edi
  HWND v11; // eax
  HWND v12; // esi
  char *v13; // eax
  HWND v14; // ebp
  int v15; // esi
  wchar_t *v16; // eax
  unsigned int v17; // edi
  HWND v18; // eax
  HWND v19; // eax
  BOOL v20; // [esp-4h] [ebp-80h]
  char v21[108]; // [esp+10h] [ebp-6Ch] BYREF

  v4 = a4; /*0x79d729*/
  v5 = a2; /*0x79d731*/
  v6 = a3; /*0x79d739*/
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
      v8 = v5 - 2; /*0x79d75a*/
      if ( v8 ) /*0x79d75d*/
      {
        v9 = v8 - 13; /*0x79d763*/
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
        SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)&MEMORY[0x887734]); /*0x79d7ff*/
        v11 = GetDlgItem(hWnd, 1474); /*0x79d809*/
        EnableWindow(v11, 0); /*0x79d80c*/
        v12 = GetDlgItem(hWnd, 1810); /*0x79d81f*/
        v13 = String::GetOrEmpty_Alt((char **)&g_WOL_LoginObject); /*0x79d821*/
        SendMessageA(v12, 0x4B4u, 0, (LPARAM)v13); /*0x79d82f*/
        return 0; /*0x79d83a*/
      }
      return 0; /*0x79d7ca*/
    }
    if ( (unsigned __int16)v6 == 1344 ) /*0x79d849*/
    {
      v17 = HIWORD(v6); /*0x79d985*/
      switch ( v17 ) /*0x79d98e*/
      {
        case 0x300u: /*0x79d98e*/
          unknown_libname_74(&a4); /*0x79da3a*/
          GetEditControlText(v4, (void **)&a4); /*0x79da48*/
          v20 = WideString::Length((const wchar_t **)&a4) != 0; /*0x79da61*/
          v19 = GetDlgItem(hWnd, 1474); /*0x79da68*/
          EnableWindow(v19, v20); /*0x79da6f*/
          DeleteAndZero::Alt((void **)&a4); /*0x79da7c*/
          break;
        case 0x400u: /*0x79d98e*/
          unknown_libname_74(&a4); /*0x79d9d7*/
          GetEditControlText(v4, (void **)&a4); /*0x79d9e5*/
          WideString::Assign((wchar_t **)&a2, MEMORY[0x831D9C]); /*0x79d9f6*/
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
    SendMessageA(v14, 0x4B2u, 0, (LPARAM)&MEMORY[0x887734]); /*0x79d8ab*/
    if ( WideString::Length((const wchar_t **)&a4) ) /*0x79d8b8*/
    {
      WideString::Assign((wchar_t **)&a3, MEMORY[0x831D9C]); /*0x79d8d1*/
      WString::TrimRight((const wchar_t **)&a4, (const wchar_t **)&a3); /*0x79d8e5*/
      DeleteAndZero::Alt((void **)&a3); /*0x79d8f1*/
      memset(v21, 0, sizeof(v21)); /*0x79d901*/
      strcpy(&v21[36], String::GetOrEmpty((char **)&g_WOL_LoginObject)); /*0x79d927*/
      v15 = *(_DWORD *)MEMORY[0xAC116C]; /*0x79d936*/
      v16 = WideString::GetOrEmpty((wchar_t **)&a4); /*0x79d93f*/
      (*(void (__stdcall **)(LPVOID, char *, wchar_t *))(v15 + 248))(MEMORY[0xAC116C], v21, v16); /*0x79d950*/
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
char **__fastcall ExtractChatCommand(char **a1, HWND a2)
{
  LRESULT v4; // esi
  int v6; // [esp+10h] [ebp-4h] BYREF

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
int WOL_GameSetup_DlgProc(HWND hWnd, unsigned int a2, unsigned int a3, HWND a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall WOL_GameSetup_DlgProc(HWND hWnd, unsigned int a2, unsigned int a3, HWND a4)
{
  int result; // eax
  LONG WindowLongA; // ecx
  HWND v6; // ebx
  char *v7; // eax
  int v8; // eax
  int v9; // esi
  char **v10; // ecx
  int v11; // eax
  int v12; // esi
  char **v13; // ecx
  int v14; // eax
  int v15; // esi
  char **v16; // ecx
  HWND v17; // eax
  HWND v18; // eax
  HWND DlgItem; // esi
  HWND v20; // eax
  int v21; // [esp+0h] [ebp-F8h]
  void *v22; // [esp+14h] [ebp-E4h] BYREF
  void *v23; // [esp+18h] [ebp-E0h] BYREF
  LONG v24; // [esp+1Ch] [ebp-DCh]
  char v25[108]; // [esp+20h] [ebp-D8h] BYREF
  char v26[108]; // [esp+8Ch] [ebp-6Ch] BYREF

  if ( a2 == 272 && a4 ) /*0x79e009*/
    SetWindowLongA(hWnd, 8, *((_DWORD *)a4 + 1)); /*0x79e012*/
  result = BaseDialogProc(hWnd, a2, a3, (unsigned int)a4); /*0x79e025*/
  if ( !result ) /*0x79e02c*/
  {
    WindowLongA = GetWindowLongA(hWnd, 8); /*0x79e03b*/
    v24 = WindowLongA; /*0x79e043*/
    if ( a2 > 0x111 ) /*0x79e047*/
    {
      if ( a2 == 1175 ) /*0x79e488*/
      {
        DlgItem = GetDlgItem(hWnd, 1344); /*0x79e4d0*/
        SendMessageA(DlgItem, 0xC5u, 9u, 0); /*0x79e4da*/
        SendMessageA(DlgItem, 0x4D1u, 1u, 0); /*0x79e4e6*/
        SendMessageA(DlgItem, 0x4B4u, 0, (LPARAM)&MEMORY[0x889F64]); /*0x79e4f5*/
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
        v21 = (unsigned __int8)MapSeed::CheckName((const char **)&v22); /*0x79e456*/
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
    unknown_libname_73(&v23); /*0x79e0ce*/
    v6 = GetDlgItem(hWnd, 1344); /*0x79e0df*/
    GetDialogText(v6, &v23); /*0x79e0e7*/
    SendMessageA(v6, 0x4B4u, 0, (LPARAM)&MEMORY[0x889F64]); /*0x79e0f9*/
    if ( !MapSeed::CheckName((const char **)&v23) || !MapSeed::CheckName((const char **)&v23) ) /*0x79e114*/
    {
LABEL_52:
      InvalidateRect(v6, 0, 0); /*0x79e3df*/
      (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)v24 + 4))(v24, hWnd, 1794); /*0x79e3f6*/
      DeleteAndZero(&v23); /*0x79e3fd*/
      return 0; /*0x79e40e*/
    }
    memset(v25, 0, sizeof(v25)); /*0x79e12e*/
    v7 = String::GetOrEmpty_Alt((char **)&v23); /*0x79e134*/
    strncpy(&v25[36], v7, 9u); /*0x79e13f*/
    (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)MEMORY[0xAC116C] + 224))(MEMORY[0xAC116C], v25); /*0x79e154*/
    if ( !MapSeed::CheckName((const char **)&v23) ) /*0x79e165*/
    {
LABEL_51:
      SendGameListWOL(); /*0x79e3da*/
      goto LABEL_52; /*0x79e3da*/
    }
    String::AssignFromPtr((char **)&v22, (const char **)&v23); /*0x79e174*/
    v8 = g_WindowManager; /*0x79e179*/
    v9 = g_WindowManager; /*0x79e17e*/
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
    v11 = g_WOL_RequestManager; /*0x79e200*/
    v12 = g_WOL_RequestManager; /*0x79e205*/
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
    v14 = g_WOL_BuddyList; /*0x79e287*/
    v15 = g_WOL_BuddyList; /*0x79e28c*/
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
      memset(v26, 0, sizeof(v26)); /*0x79e389*/
      strcpy(&v26[36], String::GetOrEmpty((char **)&g_WOL_AuthObject)); /*0x79e3bc*/
      (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)MEMORY[0xAC116C] + 96))(MEMORY[0xAC116C], v26); /*0x79e3ce*/
    }
    goto LABEL_50; /*0x79e3ce*/
  }
  return result; /*0x79e069*/
}
}
} // namespace gamemd

// 0x79E520
namespace gamemd {
int WOL_PlayerOptions_DlgProc(HWND hWnd, unsigned int a2, UINT_PTR uIDEvent, HWND a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall WOL_PlayerOptions_DlgProc(HWND hWnd, unsigned int a2, UINT_PTR uIDEvent, HWND a4)
{
  int result; // eax
  LONG WindowLongA; // edi
  HWND v6; // edi
  HWND v7; // edi
  LPARAM v8; // eax
  LPARAM v9; // eax
  int k; // esi
  int v11; // esi
  int m; // esi
  HWND v13; // eax
  int j; // esi
  int v15; // esi
  DLGTEMPLATE *Indirect; // esi
  HWND v17; // eax
  HWND v18; // eax
  int v19; // esi
  _DWORD *v20; // esi
  HWND v21; // eax
  LRESULT v22; // eax
  HWND v23; // eax
  HWND v24; // eax
  int v25; // esi
  _DWORD *v26; // esi
  HWND v27; // eax
  int v28; // esi
  HWND v29; // eax
  HWND DlgItem; // esi
  LRESULT v31; // edi
  int i; // esi
  int v33; // esi
  BOOL v34; // [esp-4h] [ebp-90h]
  BOOL v35; // [esp-4h] [ebp-90h]
  BOOL Buddy; // [esp-4h] [ebp-90h]
  int v37; // [esp+10h] [ebp-7Ch] BYREF
  _DWORD v38[3]; // [esp+14h] [ebp-78h] BYREF
  char v39[108]; // [esp+20h] [ebp-6Ch] BYREF

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
      case 0x111u: /*0x79e612*/
        if ( (*(unsigned __int8 (__thiscall **)(LONG))(*(_DWORD *)WindowLongA + 8))(WindowLongA) ) /*0x79e9dd*/
          return 0; /*0x79e9e2*/
        if ( (unsigned __int16)uIDEvent > 0x689u ) /*0x79e9f4*/
        {
          switch ( (__int16)uIDEvent ) /*0x79ed73*/
          {
            case 1794: /*0x79ed73*/
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
              v33 = 0; /*0x79eef2*/
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
                  (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)MEMORY[0xAC116C] + 96))(MEMORY[0xAC116C], v39); /*0x79f005*/
                }
              }
LABEL_116:
              SetTimer(hWnd, 0x704u, 0xBB8u, 0); /*0x79f008*/
              break; /*0x79f015*/
            case 1887: /*0x79ed73*/
            case 1888: /*0x79ed73*/
              v28 = 0; /*0x79ed80*/
              v29 = GetDlgItem(hWnd, 1888); /*0x79ed82*/
              if ( v29 ) /*0x79ed8a*/
                v28 = SendMessageA(v29, 0xF0u, 0, 0); /*0x79ed9a*/
              if ( (_WORD)uIDEvent == 1887 ) /*0x79eda1*/
                v28 = v28 == 0; /*0x79edaa*/
              MEMORY[0xAC10C8] = v28; /*0x79edae*/
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
                  v34 = String::Length((const char **)&v37) != 0; /*0x79eabd*/
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
                v19 = *((_DWORD *)g_WOL_AccountInfo + (dword_B769A8(&g_WOL_LoginObject) & ((1 << dword_B7699C) - 1))); /*0x79ebc2*/
                if ( v19 ) /*0x79ebc7*/
                {
                  while ( !String::Compare((const char **)v19, &g_WOL_LoginObject) ) /*0x79ebdb*/
                  {
                    v19 = *(_DWORD *)(v19 + 8); /*0x79ebdd*/
                    if ( !v19 ) /*0x79ebe2*/
                      return 0; /*0x79ebed*/
                  }
                  v20 = (_DWORD *)(v19 + 4); /*0x79ebf8*/
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
        v35 = String::Length(&g_WOL_LoginObject) != 0; /*0x79ec88*/
        v23 = GetDlgItem(hWnd, 1795); /*0x79ec8f*/
        EnableWindow(v23, v35); /*0x79ec98*/
        Buddy = FindBuddyWOL(); /*0x79eca4*/
        v24 = GetDlgItem(hWnd, 1581); /*0x79ecab*/
        EnableWindow(v24, Buddy); /*0x79ecae*/
        if ( String::Length(&g_WOL_LoginObject) ) /*0x79ecb5*/
        {
          if ( !dword_B76994 ) /*0x79eccb*/
            goto LABEL_88; /*0x79eccb*/
          v25 = *((_DWORD *)g_WOL_AccountInfo + (dword_B769A8(&g_WOL_LoginObject) & ((1 << dword_B7699C) - 1))); /*0x79eced*/
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
          v26 = (_DWORD *)(v25 + 4); /*0x79ed16*/
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
        v15 = 0; /*0x79e8b2*/
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
        (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)MEMORY[0xAC116C] + 96))(MEMORY[0xAC116C], v39); /*0x79e9ca*/
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
        v8 = HashTable::Find(MEMORY[0xAC4848], MEMORY[0x836140], 0); /*0x79e6ce*/
        SendMessageA(v7, 0x49Cu, 0, v8); /*0x79e6dc*/
        v9 = HashTable::Find(MEMORY[0xAC4848], MEMORY[0x836134], 0); /*0x79e6ea*/
        SendMessageA(v7, 0x4AAu, 0, v9); /*0x79e6f8*/
        for ( k = 0; k < g_WindowManager; ++k ) /*0x79e703*/
          Object::DtorWithDelete((void **)g_WOL_LoginQueue + k, 0); /*0x79e70f*/
        v11 = 0; /*0x79e725*/
        for ( g_WindowManager = 0; v11 < g_WOL_RequestManager; ++v11 ) /*0x79e72f*/
          Object::DtorWithDelete((void **)g_WOL_SessionID + v11, 0); /*0x79e73b*/
        g_WOL_RequestManager = 0; /*0x79e74f*/
        HashTable::CleanupAndResize(&g_WOL_AccountInfo); /*0x79e755*/
        HashTable::Rebuild(&g_WOL_EventQueue); /*0x79e75f*/
        (*(void (__stdcall **)(LPVOID))(*(_DWORD *)MEMORY[0xAC116C] + 220))(MEMORY[0xAC116C]); /*0x79e76c*/
        if ( MEMORY[0xA8B244] != 3 && MEMORY[0xA8B244] != 1 && MEMORY[0xA8B244] != 2 ) /*0x79e784*/
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
char __fastcall sub_79F0A0(char **a1, int *a2, char *a3)
{
  char *v3; // esi
  int v5; // eax
  int v6; // edi
  int v7; // ebp
  char *v8; // eax
  int v10; // [esp+10h] [ebp-8h]

  v3 = a3; /*0x79f0a6*/
  memset(a3, 0, 0x10Cu); /*0x79f0ba*/
  v5 = *a2; /*0x79f0bc*/
  v6 = 0; /*0x79f0be*/
  v10 = 0; /*0x79f0c2*/
  if ( *a2 <= 0 ) /*0x79f0c6*/
  {
LABEL_8:
    memset(v3, 0, 0x10Cu); /*0x79f115*/
    return 0; /*0x79f11a*/
  }
  else
  {
    v7 = 0; /*0x79f0c8*/
    while ( 1 ) /*0x79f0ca*/
    {
      if ( v7 >= 0 && v6 < v5 ) /*0x79f0d0*/
      {
        qmemcpy(a3, (const void *)(v7 + a2[2]), 0x10Cu); /*0x79f0e0*/
        v3 = a3; /*0x79f0e2*/
        v6 = v10; /*0x79f0e6*/
      }
      v8 = String::GetOrEmpty_Alt(a1); /*0x79f0ee*/
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
int WOL_GameOptionsScreen()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int WOL_GameOptionsScreen()
{
  wchar_t *String; // eax
  int i; // esi
  HWND v3; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  unsigned int v6; // eax
  unsigned int j; // ebx
  int v8; // esi
  void **v9; // edi
  DWORD (__stdcall *v10)(DWORD, const HANDLE *, BOOL, DWORD); // ebx
  HANDLE *v11; // esi
  HWND v12; // edi
  DWORD m; // esi
  int v14; // ecx
  HANDLE *v15; // esi
  DWORD v16; // esi
  HWND v17; // eax
  HWND v18; // eax
  HWND v19; // eax
  HANDLE *v20; // esi
  int v21; // esi
  int v22; // esi
  int v23; // ebp
  signed int v24; // eax
  char *v25; // eax
  HANDLE *v26; // esi
  signed int v27; // eax
  int v28; // ebx
  char *v29; // eax
  char v30; // al
  DWORD k; // esi
  HWND v33; // eax
  HWND v34; // eax
  HWND v35; // eax
  wchar_t *v36; // eax
  HWND v37; // eax
  HWND v38; // eax
  HWND v39; // eax
  int v40; // ebx
  int v41; // eax
  int v42; // ebp
  int v43; // [esp+10h] [ebp-22Ch] BYREF
  _DWORD v44[3]; // [esp+14h] [ebp-228h] BYREF
  void *v45; // [esp+20h] [ebp-21Ch] BYREF
  _BYTE v46[268]; // [esp+24h] [ebp-218h] BYREF
  char v47[268]; // [esp+130h] [ebp-10Ch] BYREF

  g_NetworkLobby_Init = 0; /*0x79f146*/
  g_NetworkLobbyState = 0; /*0x79f153*/
  Network::Init(); /*0x79f159*/
  if ( g_WOL_RequestState && !RequestChannelListWOL() ) /*0x79f166*/
    goto LABEL_6; /*0x79f166*/
  GameOptionsScreenWOL_Helper(); /*0x79f16f*/
  if ( !RequestChannelList2WOL(0, 0) ) /*0x79f178*/
  {
    SetEvent(Handles); /*0x79f187*/
    MEMORY[0xA8B248] = 0; /*0x79f18d*/
    return 0; /*0x79f19f*/
  }
  if ( !RequestChannelListWOL() ) /*0x79f1a0*/
  {
LABEL_6:
    MEMORY[0xA8B248] = 0; /*0x79f1aa*/
    return 0; /*0x79f1bb*/
  }
  if ( g_WOL_ChannelState ) /*0x79f1c2*/
  {
    Debug::Log(); /*0x79f1d9*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)MEMORY[0xAC116C] + 36))(MEMORY[0xAC116C]); /*0x79f1e9*/
    String = GetStringCSF(MEMORY[0x84B644], 0, g_Str_File_wonline_cpp, 10704); /*0x79f1fd*/
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
  v6 = g_WOL_PacketQueue; /*0x79f295*/
  for ( j = 0; j < g_WOL_PacketQueue; v6 = g_WOL_PacketQueue ) /*0x79f29e*/
  {
    v8 = *((_DWORD *)g_WOL_EventQueue + j); /*0x79f2a5*/
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
      case 1472: /*0x79f411*/
      case 1670: /*0x79f411*/
        if ( MEMORY[0xA8B248] != 4 ) /*0x79fb0d*/
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
              (*(void (__stdcall **)(LPVOID))(*(_DWORD *)MEMORY[0xAC116C] + 36))(MEMORY[0xAC116C]); /*0x79f9e0*/
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
        memset(v47, 0, sizeof(v47)); /*0x79f574*/
        if ( !String::Length(&g_WOL_LoginObject) ) /*0x79f57b*/
          goto LABEL_117; /*0x79f57b*/
        v43 = 0; /*0x79f597*/
        if ( !(unsigned __int8)GameOptionsScreenWOL_Helper_7AE8E0(&g_WOL_LoginObject, &v43) ) /*0x79f59b*/
          goto LABEL_117; /*0x79f59b*/
        if ( v43 ) /*0x79f5ae*/
          qmemcpy(v47, (const void *)v43, sizeof(v47)); /*0x79f5bc*/
        v21 = 0; /*0x79f5cd*/
        v43 = 0; /*0x79f5cf*/
        if ( !(unsigned __int8)GameOptionsScreenWOL_Helper_7AE7C0(&g_WOL_LoginObject, &v43) ) /*0x79f5d3*/
          goto LABEL_117; /*0x79f5da*/
        if ( v43 ) /*0x79f5e6*/
          v21 = *(_DWORD *)v43; /*0x79f5e8*/
        v22 = v21 - 4; /*0x79f5ea*/
        if ( !v22 ) /*0x79f5ed*/
        {
          v40 = 0; /*0x79fa80*/
          memset(v46, 0, sizeof(v46)); /*0x79fa82*/
          v41 = g_WOL_AuthPool; /*0x79fa84*/
          MEMORY[0xA8B248] = 4; /*0x79fa89*/
          if ( g_WOL_AuthPool > 0 ) /*0x79fa95*/
          {
            v42 = 0; /*0x79fa97*/
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
        v23 = 0; /*0x79f616*/
        memset(v46, 0, sizeof(v46)); /*0x79f618*/
        v24 = g_WOL_ChatState; /*0x79f61a*/
        if ( (int)g_WOL_ChatState <= 0 ) /*0x79f621*/
        {
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
          v27 = g_WOL_ChatState; /*0x79f700*/
          if ( (int)g_WOL_ChatState <= 0 ) /*0x79f707*/
          {
LABEL_93:
            memset(v46, 0, sizeof(v46)); /*0x79f763*/
LABEL_94:
            v30 = 0; /*0x79f765*/
          }
          else
          {
            v28 = 0; /*0x79f709*/
            while ( 1 ) /*0x79f70b*/
            {
              if ( v28 >= 0 && v23 < v27 ) /*0x79f711*/
                qmemcpy(v46, (char *)g_WOL_ConnectionHandler + v28, sizeof(v46)); /*0x79f725*/
              v29 = String::GetOrEmpty_Alt((char **)&v45); /*0x79f72b*/
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
          v25 = String::GetOrEmpty_Alt((char **)&v45); /*0x79f645*/
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
        if ( !ValidateJoinWOL(MEMORY[0xAC10C8] != 0, (int)v46, (int)v10, v23) ) /*0x79f78e*/
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
        (*(void (__stdcall **)(LPVOID))(*(_DWORD *)MEMORY[0xAC116C] + 36))(MEMORY[0xAC116C]); /*0x79fa34*/
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
      MEMORY[0xA8B248] = 0; /*0x79f96e*/
      v36 = GetStringCSF(MEMORY[0x84B15C], 0, g_Str_File_wonline_cpp, 27780); /*0x79f97f*/
      goto LABEL_123; /*0x79f97f*/
    }
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
  MEMORY[0xA8B248] = 0; /*0x79f8f9*/
  v36 = GetStringCSF(MEMORY[0x84B15C], 0, g_Str_File_wonline_cpp, 27771); /*0x79f916*/
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
int WOL_JoinLobby()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int WOL_JoinLobby()
{
  wchar_t *String; // eax
  int v1; // edx
  wchar_t *v2; // eax
  int v4; // ebp
  int v5; // ebx
  wchar_t *v6; // eax
  HANDLE *v7; // esi
  int v8; // esi
  int v9; // esi
  wchar_t *v10; // eax
  wchar_t *v11; // ecx
  int v12; // esi
  DWORD j; // esi
  HWND v14; // esi
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
  void *v28; // esi
  wchar_t *v29; // [esp-4h] [ebp-12Ch] BYREF
  char *String2; // [esp+10h] [ebp-118h] BYREF
  int i; // [esp+14h] [ebp-114h]
  DLGTEMPLATE *Indirect; // [esp+18h] [ebp-110h]
  char v33[268]; // [esp+1Ch] [ebp-10Ch] BYREF

  if ( MEMORY[0xAC10C8] ) /*0x79fc53*/
  {
    MEMORY[0xAC10C8] = 0; /*0x79fc57*/
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
    WideString::Reassign(&dword_B76230, &MEMORY[0x887734]); /*0x79fd77*/
    return 0; /*0x79fd88*/
  }
  if ( !RequestChannelListWOL() ) /*0x79fd35*/
    goto LABEL_10; /*0x79fd35*/
  v1 = g_WOL_AuthPool; /*0x79fd37*/
  if ( !g_WOL_AuthPool ) /*0x79fd3f*/
  {
    v2 = GetStringCSF(aWolNomatchinga, 0, g_Str_File_wonline_cpp, 28045); /*0x79fd58*/
    ShowDialogConfirm(v2, 0, (int)GameLoop::Thunk, 0); /*0x79fd61*/
    goto LABEL_10; /*0x79fd61*/
  }
  String2 = aLob39; /*0x79fd94*/
  memset(v33, 0, sizeof(v33)); /*0x79fd9c*/
  if ( MEMORY[0xA8B244] != 2 ) /*0x79fda4*/
    String2 = g_Str_Lob_40_; /*0x79fda6*/
  v4 = 0; /*0x79fdae*/
  if ( g_WOL_AuthPool <= 0 ) /*0x79fdb2*/
    goto LABEL_22; /*0x79fdb2*/
  v5 = 0; /*0x79fdb4*/
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
  v8 = 0; /*0x79feb1*/
  for ( i = 0; v8 < g_WindowManager; ++v8 ) /*0x79feb9*/
    Object::DtorWithDelete((void **)g_WOL_LoginQueue + v8, 0); /*0x79fec5*/
  v9 = 0; /*0x79fed9*/
  for ( g_WindowManager = 0; v9 < g_WOL_RequestManager; ++v9 ) /*0x79fee3*/
    Object::DtorWithDelete((void **)g_WOL_SessionID + v9, 0); /*0x79feee*/
  g_WOL_RequestManager = 0; /*0x79ff02*/
  HashTable::CleanupAndResize(&g_WOL_AccountInfo); /*0x79ff08*/
  HashTable::Rebuild(&g_WOL_EventQueue); /*0x79ff12*/
  (*(void (__stdcall **)(LPVOID))(*(_DWORD *)MEMORY[0xAC116C] + 220))(MEMORY[0xAC116C]); /*0x79ff1f*/
  if ( MEMORY[0xA8B244] != 3 && MEMORY[0xA8B244] != 1 && MEMORY[0xA8B244] != 2 ) /*0x79ff37*/
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
            v12 = LeaveChannelExWOL((int)v33, &String2, v29); /*0x79ff97*/
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
              WideString::Reassign(&dword_B76230, &MEMORY[0x887734]); /*0x7a0293*/
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
            (*(void (__stdcall **)(LPVOID))(*(_DWORD *)MEMORY[0xAC116C] + 36))(MEMORY[0xAC116C]); /*0x7a017b*/
            v16 = GetStringCSF(MEMORY[0x84B644], 0, g_Str_File_wonline_cpp, 10704); /*0x7a018f*/
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
      if ( (unsigned __int8)MatchGameWOL() && MEMORY[0xA8B244] == 3 ) /*0x7a009f*/
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
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)MEMORY[0xAC116C] + 36))(MEMORY[0xAC116C]); /*0x7a0353*/
    v23 = GetStringCSF(MEMORY[0x84B644], 0, g_Str_File_wonline_cpp, 10704); /*0x7a0367*/
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
  v28 = MEMORY[0xAC1154]; /*0x7a03ff*/
  if ( MEMORY[0xAC1154] ) /*0x7a0407*/
  {
    ComPtr::Dtor(MEMORY[0xAC1154]); /*0x7a040b*/
    __3_YAXPAX_Z(v28); /*0x7a0411*/
    MEMORY[0xAC1154] = 0; /*0x7a0419*/
  }
  return i; /*0x79fd7e*/
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
