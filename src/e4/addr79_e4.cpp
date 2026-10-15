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
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Compare_e4.hpp"
#include "e4/classes/DialogQueue_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/BufferIOFile_e4.hpp"
#include "e4/classes/DialogClass_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/E4Recv_7B2E50_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/NetworkID_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/GameLoop_e4.hpp"
#include "e4/classes/GameSettings_e4.hpp"
#include "e4/classes/IsRandMap_e4.hpp"
#include "e4/classes/IPXManagerClass_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/StringVector_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Config_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/OwnerDrawControl_e4.hpp"  // G42.36 C2027 supply
// [w18j2] C3861 supply (raw-evidenced)
namespace gamemd { void WOL_FillPersonaInfo(int HWND hDlg, char **a3, wchar_t **a4); }  // w18j2 raw 0x0077A9F0
// [w18j2] C3861 supply (raw-evidenced)
namespace gamemd { void WOL_FillPersonaInfo(int HWND hDlg, char **a3, wchar_t **a4); }  // w18j2 raw 0x0077A9F0
// [w18j2] C3861 supply (raw-evidenced)
namespace gamemd { void WOL_FillPersonaInfo(int HWND hDlg, char **a3, wchar_t **a4); }  // w18j2 raw 0x0077A9F0
// [w18j2] C3861 supply (raw-evidenced)
namespace gamemd { void WOL_FillPersonaInfo(int HWND hDlg, char **a3, wchar_t **a4); }  // w18j2 raw 0x0077A9F0
// [w18j2] C3861 supply (raw-evidenced)
namespace gamemd { void WOL_FillPersonaInfo(int HWND hDlg, char **a3, wchar_t **a4); }  // w18j2 raw 0x0077A9F0
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
    int ExchangeMultiplayerGameInfo();  // x4:empty@0x5e7920
    int StartGameWOL_Start_7ACB90(void* p0, int p1);  // x4:signals@0x7acb90
} // namespace gamemd

// 0x792CF0
namespace gamemd {  // G42.18 ns repair
INT_PTR sub_792CF0(HWND hWnd, UINT, WPARAM, char * a4, void * a2, void * a3)
{
  INT_PTR result; // eax
  HWND DlgItem; // esi

  if ( a2 > (void *)(0x110) ) /*0x792cfa*/
  {
    switch ( a2 ) /*0x792d68*/
    {
      case 0x111u: /*0x792d68*/
        if ( (uint16_t)a3 == 1421 ) /*0x792e0f*/
        {
          SetEvent((void *)(Handles)); /*0x792e2b*/
          CloseDialog(hWnd, 1); /*0x792e3a*/
        }
        else if ( (uint16_t)a3 == 1422 ) /*0x792e12*/
        {
          WebBrowser::ShowDialog(aNetstatus); /*0x792e19*/
          return 0; /*0x792e21*/
        }
        break;
      case 0x113u: /*0x792d68*/
        if ( a3 == (void *)(69) ) /*0x792de3*/
        {
          ShowWindow(hWnd, 5); /*0x792dec*/
          KillTimer(hWnd, 0x45u); /*0x792df5*/
          return 0; /*0x792dfe*/
        }
        break;
      case 0x497u: /*0x792d68*/
        SendMessageA(hWnd, 0x4A9u, 0, 1); /*0x792d8d*/
        SetTimer(hWnd, 0x45u, uElapse, 0); /*0x792d9e*/
        (hWnd)->LookupAndMark(); /*0x792da6*/
        DlgItem = GetDlgItem(hWnd, 1961); /*0x792dbf*/
        PostMessageA(DlgItem, 0x4D5u, 0, 0); /*0x792dc9*/
        PostMessageA(DlgItem, 0x4D3u, 0, 0); /*0x792dd5*/
        return 0; /*0x792ddb*/
    }
    return 0; /*0x792d78*/
  }
  if ( a2 == (void *)(272) ) /*0x792cfc*/
    return 0; /*0x792e3f*/
  switch ( a2 ) /*0x792d16*/
  {
    case 2u: /*0x792d16*/
      KillTimer(hWnd, 0x45u); /*0x792d24*/
      return 0; /*0x792d2d*/
    case 0xFu: /*0x792d16*/
      ((Dialog *)(hWnd))->DrawBackground(); /*0x792d48*/
      (hWnd)->StopBink(); /*0x792d4f*/
      ValidateRect(hWnd, 0); /*0x792d57*/
      return 0; /*0x792d60*/
    case 0x14u: /*0x792d16*/
      goto LABEL_6;
    case 0x2Bu: /*0x792d16*/
      (a4)->Resize(); /*0x792d34*/
  LABEL_6:
      result = 1; /*0x792d39*/
      break; /*0x792d3f*/
    default:
      return 0;
  }
  return result; /*0x792d2c*/
}
}  // G42.18 ns repair
// 0x793280
namespace gamemd {
int sub_793280(HWND hWnd, UINT, WPARAM, char * a4, void * a2, void * a3)
{
  int result; // eax
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
      return (int)GetStockObject(4); /*0x793420*/
    if ( a2 != 1175 ) /*0x793367*/
      return 0; /*0x793331*/
    v5 = 0; /*0x793374*/
    v6 = (int *)(dword_84A1F0); /*0x793376*/
    do /*0x7933ab*/
    {
      DlgItem = GetDlgItem(hWnd, *v6); /*0x79337f*/
      dword_B75F54 = 0; /*0x79338e*/
      dword_B75F58 = 0; /*0x793396*/
      if ( v5 > dword_A8DA84 - 1 ) /*0x79339c*/
        DestroyWindow(DlgItem); /*0x79339f*/
      ++v6; /*0x7933a1*/
      ++v5; /*0x7933a4*/
    }
    while ( (int)v6 < (int)&byte_84A210 ); /*0x7933ab*/
    for ( i = 0; i < dword_A8DA84; ++i ) /*0x7933bc*/
    {
      v9 = GetDlgItem(hWnd, dword_84A1F0[i]); /*0x7933d3*/
      SendMessageA(v9, 0x4B2u, 0, *(unsigned int *)(dword_A8DA78 + 4 * i)); /*0x7933e1*/
      SendMessageA(v9, 0xF1u, 0, 0); /*0x7933ed*/
    }
    SendMessageA(hWnd, 0x4A9u, 0, 1); /*0x793403*/
    (hWnd)->LookupAndMark(); /*0x793407*/
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
          (hWnd)->DrawBackground(); /*0x7932c1*/
          ValidateRect(hWnd, 0); /*0x7932c9*/
          return 0; /*0x7932d4*/
        case 0x14u: /*0x793297*/
          return 1; /*0x7932b8*/
        case 0x2Bu: /*0x793297*/
          (a4)->Resize(); /*0x7932ab*/
          return 1; /*0x7932ab*/
      }
      return 0; /*0x7932a1*/
    }
    switch ( (int16_t)a3 ) /*0x7932f4*/
    {
      case 1889: /*0x7932f4*/
      case 1890: /*0x7932f4*/
      case 1892: /*0x7932f4*/
      case 1893: /*0x7932f4*/
      case 1894: /*0x7932f4*/
      case 1895: /*0x7932f4*/
      case 1896: /*0x7932f4*/
      case 1897: /*0x7932f4*/
        if ( byte_B757EB[(uint16_t)a3] ) /*0x7932fb*/
        {
          if ( !SendDlgItemMessageA(hWnd, (uint16_t)a3, 0xF0u, 0, 0) ) /*0x79331a*/
            SendDlgItemMessageA(hWnd, (uint16_t)a3, 0xF1u, 1u, 0); /*0x79332a*/
          return 0; /*0x79332a*/
        }
        if ( SendDlgItemMessageA(hWnd, (uint16_t)a3, 0xF0u, 0, 0) != 1 ) /*0x793339*/
          return 0; /*0x793339*/
        SendDlgItemMessageA(hWnd, (uint16_t)a3, 0xF1u, 0, 0); /*0x793346*/
        result = 0; /*0x79334a*/
        break; /*0x79334d*/
      default:
        return 0;
    }
  }
  return result; /*0x7932b0*/
}
}
// 0x793490
namespace gamemd {
AbstractClass * * HandleWOLForwardingError(ObjectClass *self)
{
  int result; // eax
  ObjectClass *i; // edx
  int v3; // edi
  int v4; // esi
  char *v5; // eax
  char v6; // bl
  int v7; // esi
  wchar_t *StringCSF; // eax
  wchar_t *v9; // eax
  wchar_t *v10; // eax
  const wchar_t *v11; // [esp-4h] [ebp-210h]
  wchar_t *v12; // [esp-4h] [ebp-210h]
  const wchar_t *v13; // [esp-4h] [ebp-210h]
  wchar_t *v14; // [esp-4h] [ebp-210h]
  wchar_t Buffer[256]; // [esp+Ch] [ebp-200h] BYREF

  result = 0; /*0x793496*/
  if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x7934a3*/
  {
    for ( i = g_WOL_UserList.nextObject; ; i = &i->HouseClass_6C ) /*0x7934a9*/
    {
      if ( result >= 0 && result < g_WOL_UserList.owningHouseIndex ) /*0x7934b5*/
        memcpy(&g_WebBrowserConfig.occupant, i, 0x6Cu); /*0x7934c3*/
      if ( (g_WebBrowserConfig.occupant & 1) != 0 ) /*0x7934cc*/
        break; /*0x7934cc*/
      if ( ++result >= g_WOL_UserList.owningHouseIndex ) /*0x7934d4*/
        return (gamemd::AbstractClass **)(result); /*0x7934d4*/
    }
    result = (int)&g_WebBrowserConfig.occupant; /*0x7934e0*/
    if ( &g_WebBrowserConfig != (int *)((ObjectClass *))-36 ) /*0x7934e7*/
    {
      v3 = -1; /*0x7934f2*/
      v4 = 0; /*0x7934f5*/
      if ( dword_A8DA84 > 0 ) /*0x7934f9*/
      {
        while ( 1 ) /*0x793509*/
        {
          v5 = ToWideStringChar((char *)((unsigned int *)(dword_A8DA78))[v4]); /*0x793509*/
          if ( !_strcmpi(v5, (char *)&g_WebBrowserConfig.ambientSoundController[3]) ) /*0x79350f*/
            break; /*0x79350f*/
          if ( ++v4 >= dword_A8DA84 ) /*0x793523*/
            goto LABEL_15; /*0x793523*/
        }
        v3 = v4; /*0x793527*/
      }
  LABEL_15:
      v6 = 0; /*0x793529*/
      v7 = 0; /*0x793530*/
      if ( dword_A8DA84 <= 0 ) /*0x793534*/
        goto LABEL_26; /*0x793534*/
      do /*0x7936ba*/
      {
        switch ( *(unsigned int *)&g_WindowManager.__pad_EC[4 * v7 + 32] ) /*0x79354a*/
        {
          case 0: /*0x79354a*/
            v6 = 1; /*0x793557*/
            ToWideStringChar((char *)((unsigned int *)(dword_A8DA78))[v7]); /*0x79355c*/
            Debug::Log(); /*0x793567*/
            v11 = (const wchar_t *)((unsigned int *)(dword_A8DA78))[v7]; /*0x793579*/
            StringCSF = GetStringCSF((wchar_t *)aTxtTalkReporte, 0, g_Str_File_wonline_cpp, 18840); /*0x793589*/
            goto LABEL_19; /*0x793589*/
          case 1: /*0x79354a*/
            v6 = 1; /*0x793591*/
            ToWideStringChar((char *)((unsigned int *)(dword_A8DA78))[v7]); /*0x793596*/
            Debug::Log(); /*0x7935a1*/
            v11 = (const wchar_t *)((unsigned int *)(dword_A8DA78))[v7]; /*0x7935b3*/
            StringCSF = GetStringCSF((wchar_t *)(aTxtTalkLocalPr), 0, g_Str_File_wonline_cpp, 18850); /*0x7935c3*/
  LABEL_19:
            swprintf(Buffer, (const size_t)StringCSF, v11); /*0x7935c8*/
            Dialog::ShowMessage(-1, (size_t)Buffer); /*0x7935df*/
            break; /*0x7935e7*/
          case 2: /*0x79354a*/
            v6 = 1; /*0x7935ee*/
            if ( v7 == v3 ) /*0x7935f0*/
            {
              Debug::Log(); /*0x7935f7*/
              v12 = GetStringCSF((wchar_t *)(aTxtTalkForward), 0, g_Str_File_wonline_cpp, 18861); /*0x79361b*/
              Dialog::ShowMessage(-1, (size_t)v12); /*0x79361d*/
            }
            else
            {
              ToWideStringChar((char *)((unsigned int *)(dword_A8DA78))[v7]); /*0x79362a*/
              Debug::Log(); /*0x793635*/
              v13 = (const wchar_t *)((unsigned int *)(dword_A8DA78))[v7]; /*0x79364b*/
              v9 = GetStringCSF((wchar_t *)(aTxtTalkForward_0), 0, g_Str_File_wonline_cpp, 18864); /*0x793658*/
              swprintf(Buffer, (const size_t)v9, v13); /*0x793663*/
              Dialog::ShowMessage(-1, (size_t)Buffer); /*0x793674*/
            }
            break; /*0x79361d*/
          case 3: /*0x79354a*/
            v6 = 1; /*0x793683*/
            Debug::Log(); /*0x793685*/
            v14 = GetStringCSF((wchar_t *)(aTxtTalkHostAbo), 0, g_Str_File_wonline_cpp, 18875); /*0x7936a3*/
            Dialog::ShowMessage(-1, (size_t)v14); /*0x7936aa*/
            break; /*0x7936aa*/
          default:
            break;
        }
        result = dword_A8DA84; /*0x7936b2*/
        ++v7; /*0x7936b7*/
      }
      while ( v7 < dword_A8DA84 ); /*0x7936ba*/
      if ( !v6 ) /*0x7936c2*/
      {
  LABEL_26: v10 = (wchar_t *)((gamemd::AbstractClass **)(GetStringCSF(aTxtFailedToTal, 0, g_Str_File_wonline_cpp, 18888)));
        return (gamemd::AbstractClass **)(Dialog::ShowMessage(-1, (size_t)v10)); /*0x7936e2*/
      }
    }
  }
  return (gamemd::AbstractClass **)(result);
}
}
// 0x793B30
namespace gamemd {
int sub_793B30(char a1, const char * a2)
{
  unsigned char v3[3]; // [esp+0h] [ebp-100h] BYREF
  char v4[253]; // [esp+3h] [ebp-FDh] BYREF

  memcpy(v3, "Z1", 2); /*0x793b39*/
  v3[2] = a1 + 48; /*0x793b45*/
  if ( a2 ) /*0x793b49*/
    strcpy(v4, a2); /*0x793b68*/
  else
    v4[0] = 0; /*0x793b76*/
  Debug::Log(); /*0x793b85*/
  return (*(int (__stdcall **)(LPVOID, unsigned char *))(*(unsigned int *)ppv + 60))(ppv, v3); /*0x793b9d*/
}
}
// 0x793D20
namespace gamemd {
char NegotiateNetworkConnection(IUnknown * aP0, int a2, int a3)
{
  int v3; // ebp
  IUnknown * v4;
  char *v5; // edi
  char *v6; // ebx
  char *v7; // eax
  char *v9; // esi
  char *v10; // eax
  int v11; // eax
  int v12; // ebx
  int16_t v13; // si
  uint16_t v14; // di
  char v15; // bl
  int *v16; // ebx
  int v17; // esi
  unsigned int *v18; // ecx
  int v19; // edx
  int v20; // esi
  char *v21; // ebx
  char *v22; // eax
  uint16_t v23; // si
  char *v24; // ebx
  int owningHouseIndex; // eax
  char *v26; // esi
  int v27; // ebp
  int v28; // ecx
  TechnoTypeClass *v29; // ecx
  int v30; // esi
  int v31; // eax
  int16_t v32; // di
  int v33; // esi
  TechnoTypeClass *v34; // ecx
  int v35; // eax
  int v36; // eax
  int v37; // ecx
  int v38; // esi
  int v39; // eax
  int v40; // esi
  int v41; // eax
  char v42; // bl
  int Speed; // eax
  int v44; // ecx
  char *v45; // eax
  HWND v46; // eax
  HWND v47; // esi
  HWND DlgItem; // eax
  int *v49; // ecx
  int v50; // eax
  int v51; // esi
  int v52; // esi
  int v53; // eax
  char *v54; // eax
  ObjectClass *v55; // [esp+2h] [ebp-74Ch]
  char v56; // [esp+14h] [ebp-73Ah]
  char v57; // [esp+15h] [ebp-739h]
  uint16_t v58; // [esp+16h] [ebp-738h]
  int v59; // [esp+16h] [ebp-738h]
  int v60; // [esp+16h] [ebp-738h]
  int v61; // [esp+1Ah] [ebp-734h]
  int v62; // [esp+1Eh] [ebp-730h]
  int v63; // [esp+22h] [ebp-72Ch]
  int v64; // [esp+22h] [ebp-72Ch]
  int v65; // [esp+2Ah] [ebp-724h]
  int v66; // [esp+2Eh] [ebp-720h]
  int v67; // [esp+32h] [ebp-71Ch]
  int j; // [esp+3Ah] [ebp-714h]
  int v69; // [esp+3Eh] [ebp-710h] BYREF
  IUnknown * v70;
  int v71; // [esp+46h] [ebp-708h]
  int v72; // [esp+4Ah] [ebp-704h]
  int v73; // [esp+4Eh] [ebp-700h]
  int i; // [esp+56h] [ebp-6F8h]
  unsigned int v75[4]; // [esp+5Ah] [ebp-6F4h] BYREF
  int v76; // [esp+6Ah] [ebp-6E4h]
  int v77; // [esp+6Eh] [ebp-6E0h]
  int v78; // [esp+72h] [ebp-6DCh]
  int v79; // [esp+76h] [ebp-6D8h]
  int v80; // [esp+7Eh] [ebp-6D0h]
  int v81; // [esp+82h] [ebp-6CCh]
  TechnoTypeClass *v82; // [esp+86h] [ebp-6C8h]
  int v83; // [esp+8Ah] [ebp-6C4h]
  bool v84[4]; // [esp+8Eh] [ebp-6C0h] BYREF
  int v85; // [esp+92h] [ebp-6BCh]
  int v86; // [esp+96h] [ebp-6B8h]
  int v87; // [esp+9Ah] [ebp-6B4h]
  int v88; // [esp+A2h] [ebp-6ACh]
  int Ticks; // [esp+A6h] [ebp-6A8h]
  int v90; // [esp+AEh] [ebp-6A0h]
  Waypoint v91; // [esp+B2h] [ebp-69Ch] BYREF
  char v92[3]; // [esp+1BEh] [ebp-590h] BYREF
  char v93[253]; // [esp+1C1h] [ebp-58Dh] BYREF
  char v94[2]; // [esp+2BEh] [ebp-490h] BYREF
  char Buffer[254]; // [esp+2C0h] [ebp-48Eh] BYREF
  int v96; // [esp+3BEh] [ebp-390h] BYREF
  char v97[452]; // [esp+3C2h] [ebp-38Ch] BYREF
  int v98[11]; // [esp+586h] [ebp-1C8h] BYREF
  int16_t v99; // [esp+5B2h] [ebp-19Ch]
  char v100; // [esp+5B4h] [ebp-19Ah]

  v3 = (int)(aP0);
  v70 = (IUnknown *)((int)(a2)); /*0x793d2c*/
  v72 = (int)(aP0); /*0x793d34*/
  v4 = (IUnknown *)((int)(0)); /*0x793d3d*/
  TimerGetTicks(); /*0x793d38*/
  TimerGetTicks(); /*0x793d4b*/
  v56 = 1; /*0x793d5f*/
  v75[0] = 0; /*0x793d64*/
  (&v91)->InitInvalid(); /*0x793d68*/
  v66 = 0; /*0x793d74*/
  v57 = 0; /*0x793d7f*/
  Debug::Log(); /*0x793d84*/
  v62 = -1; /*0x793d93*/
  if ( dword_A8DA84 <= 0 ) /*0x793d9b*/
    goto LABEL_6; /*0x793d9b*/
  do /*0x793dd5*/
  {
    v5 = (char *)dword_A8DA90[v3]; /*0x793da3*/
    v6 = (char *)(ToWideStringChar((char *)dword_A8DA78[v4])); /*0x793db4*/
    v7 = ToWideStringChar(v5); /*0x793db6*/
    if ( !_strcmpi(v6, v7) ) /*0x793dbd*/
      v62 = (int)(v4); /*0x793dc9*/
    ++v4; /*0x793dd2*/
  }
  while ( v4 < dword_A8DA84 ); /*0x793dd5*/
  if ( v62 == -1 ) /*0x793ddc*/
  {
  LABEL_6:
    strcpy(&v91.u32_C, "Z10"); /*0x793de5*/
    Debug::Log(); /*0x793e0b*/
    (*(void (__stdcall **)(LPVOID, char *))(*(unsigned int *)ppv + 60))(ppv, &v91.u32_C); /*0x793e23*/
    Debug::Log(); /*0x793e2d*/
    return 0; /*0x793e41*/
  }
  v9 = (char *)&unk_A8E060; /*0x793e44*/
  while ( *v9 ) /*0x793e4c*/
  {
    v10 = ToWideStringChar((char *)dword_A8DA90[v3]); /*0x793e55*/
    if ( !_strcmpi(v9, v10) ) /*0x793e66*/
    {
      Debug::Log(); /*0x793e7a*/
      v56 = 0; /*0x793e82*/
      break; /*0x793e82*/
    }
    v9 += 36; /*0x793e68*/
    if ( (int)v9 >= (int)byte_A8E180 ) /*0x793e71*/
      break; /*0x793e71*/
  }
  v11 = *(unsigned int *)&stru_A8DBC0.alignmentPadding69[4 * v3 + 3]; /*0x793e87*/
  if ( v56 && (!v11 || (v11 & 1) != 0) && (!(unsigned short)dword_ABFEC8 || (dword_ABFEC8 & 1) != 0) ) /*0x793eac*/
  {
    Debug::Log(); /*0x793eb3*/
    v56 = 0; /*0x793ebb*/
  }
  v61 = 0; /*0x793ec2*/
  v71 = 0; /*0x793ec6*/
  v58 = 0; /*0x793eca*/
  while ( 1 ) /*0x793ece*/
  {
    v12 = v62; /*0x793ece*/
    Debug::Log(); /*0x793ed7*/
    Network_Connect_793BB0(v55); /*0x793edf*/
    if ( v56 ) /*0x793eea*/
    {
      v14 = (uint16_t)((int *)(0));
      v15 = dword_ABFEC8; /*0x793f1f*/
      Debug::Log(); /*0x793f2b*/
      if ( (v15 & 0x40) != 0 ) /*0x793f36*/
        goto LABEL_110; /*0x793f36*/
      Debug::Log(); /*0x793f41*/
      v59 = 0; /*0x793f50*/
      if ( dword_A8E224 <= 0 ) /*0x793f54*/
        goto LABEL_110; /*0x793f54*/
      v16 = (int *)(dword_A8E1A4); /*0x793f5a*/
      do /*0x793fd4*/
      {
        v17 = *v16; /*0x793f5f*/
        v18 = (unsigned int *)(dword_A8DA90[*v16] + 40); /*0x793f68*/
        *(unsigned int *)v84 = *v18; /*0x793f6d*/
        v19 = dword_A8DA90[v3] + 40; /*0x793f7e*/
        v85 = v18[1]; /*0x793f81*/
        v86 = v18[2]; /*0x793f8c*/
        if ( (uint8_t)NetworkID::Compare(v84, v19) ) /*0x793f9a*/
        {
          v14 = dword_A8E184[v17]; /*0x793fa3*/
          Debug::Log(); /*0x793fb8*/
        }
        ++v16; /*0x793fcb*/
        ++v59; /*0x793fd0*/
      }
      while ( v59 < dword_A8E224 ); /*0x793fd4*/
      if ( !v14 ) /*0x793fd9*/
      {
  LABEL_110:
        Debug::Log(); /*0x793fe4*/
        v20 = 0; /*0x793ff1*/
        if ( dword_A8DA84 > 0 ) /*0x793ff5*/
        {
          while ( 1 ) /*0x79400a*/
          {
            v21 = ToWideStringChar((char *)dword_A8DA78[v20]); /*0x79400a*/
            v22 = ((String *)((String *)&((unsigned int *)(g_WindowManager.__pad_EC))[684]))->GetOrEmpty(); /*0x79400c*/
            if ( !_strcmpi(v21, v22) ) /*0x794013*/
              break; /*0x794013*/
            if ( ++v20 >= dword_A8DA84 ) /*0x794027*/
              goto LABEL_34; /*0x794027*/
          }
          v23 = *(&dword_A8E2B2 + v20); /*0x79402b*/
          Debug::Log(); /*0x794041*/
          v14 = Network::ResolveNetworkAddress((Network *)&dword_ABFEC8, v23); /*0x794054*/
          Debug::Log(); /*0x794061*/
        }
      }
  LABEL_34:
      v24 = ToWideStringChar((char *)dword_A8DA90[v72]); /*0x794069*/
      owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x79407b*/
      v26 = 0; /*0x794080*/
      v27 = 0; /*0x794082*/
      if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x794086*/
      {
        v28 = 0; /*0x79408c*/
        v60 = 0; /*0x79408e*/
        do /*0x79411c*/
        {
          if ( v28 >= 0 && v27 < owningHouseIndex ) /*0x794098*/
            v26 = (char *)g_WOL_UserList.nextObject + v28; /*0x7940a0*/
          if ( !_strcmpi(v24, v26 + 36) ) /*0x7940a8*/
          {
            memcpy(v94, "Z4", sizeof(v94)); /*0x7940c3*/
            sprintf(Buffer, "%d", v14); /*0x7940da*/
            Debug::Log(); /*0x7940ed*/
            (*(void (__stdcall **)(LPVOID, char *, char *))(*(unsigned int *)ppv + 56))(ppv, v26, v94); /*0x794106*/
          }
          owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x79410d*/
          ++v27; /*0x794112*/
          v28 = v60 + 108; /*0x794113*/
          v60 += 108; /*0x794118*/
        }
        while ( v27 < g_WOL_UserList.owningHouseIndex ); /*0x79411c*/
      }
      v3 = v72; /*0x794122*/
      v12 = v62; /*0x794126*/
      v58 = v14; /*0x79412a*/
    }
    else
    {
      v13 = *(&dword_A8E2B2 + v62); /*0x793eec*/
      Debug::Log(); /*0x793f02*/
      dword_A8E050[v3] = v13; /*0x793f0a*/
    }
    Ticks = TimerGetTicks(); /*0x79413a*/
    v63 = Ticks; /*0x794141*/
    v30 = 360; /*0x79414c*/
    (*(((unsigned short *)&(v31)) + 1)) = (*(((unsigned short *)&(v61)) + 1)); /*0x794155*/
    v90 = 360; /*0x79415b*/
    v65 = 360; /*0x794162*/
    if ( v61 > 0 ) /*0x794166*/
    {
      v31 = TimerGetTicks(); /*0x79416f*/
      v29 = v82; /*0x794174*/
      v30 = 240; /*0x79417b*/
      v81 = v31; /*0x794180*/
      v83 = 240; /*0x794187*/
      v63 = v31; /*0x79418e*/
      v65 = 240; /*0x794196*/
    }
    v32 = v71; /*0x79419a*/
    while ( 1 ) /*0x79419e*/
    {
      if ( v63 != -1 ) /*0x7941a3*/
      {
        v31 = TimerGetTicks() - v63; /*0x7941ae*/
        if ( v31 >= v30 ) /*0x7941b4*/
          break; /*0x7941b4*/
        v30 -= v31; /*0x7941b6*/
      }
      if ( !v30 ) /*0x7941ba*/
        break; /*0x7941ba*/
      if ( v56 == 1 ) /*0x7941c2*/
      {
        if ( dword_A8E050[v3] != v32 ) /*0x7941cc*/
          break; /*0x7941cc*/
      }
      else if ( dword_A8E050[v3] ) /*0x7941dd*/
      {
        break; /*0x7941e6*/
      }
      Game::ProcessIdle(v29); /*0x7941ce*/
      v30 = v65; /*0x7941d3*/
    }
    (*((unsigned short *)&(v31))) = dword_A8E050[v3]; /*0x7941f3*/
    v71 = v31; /*0x7941fe*/
    if ( (unsigned short)v31 ) /*0x794202*/
    {
      Debug::Log(); /*0x79420e*/
      *(&dword_A8E2B2 + v12) = dword_A8E050[v3]; /*0x79421e*/
      ((Network *)((Network *)(((unsigned int *)(dword_A8DA78))[v12] + 40)))->SetPort(dword_A8E050[v3]); /*0x79423b*/
      ((Network *)((Network *)(((unsigned int *)(dword_A8DA90))[v3] + 40)))->SetPort(dword_A8E050[v3]); /*0x794253*/
      memset(v98, 0, sizeof(v98)); /*0x794266*/
      v99 = 0; /*0x794268*/
      v100 = 0; /*0x79426a*/
      v98[0] = 41; /*0x794270*/
      strcpy((char *)&v98[1], ((String *)((String *)&g_WebBrowser))->GetOrEmpty()); /*0x79429d*/
      if ( (dword_ABFEC8 & 8) != 0 && (stru_A8DBC0.alignmentPadding69[4 * v3 + 3] & 8) == 0 ) /*0x7942b7*/
      {
        Debug::Log(); /*0x7942be*/
        v33 = 240; /*0x7942cf*/
        v73 = TimerGetTicks(); /*0x7942d4*/
        for ( i = 240; ; v33 = i ) /*0x7942d8*/
        {
          if ( v73 != -1 ) /*0x7942e1*/
          {
            v35 = TimerGetTicks() - v73; /*0x7942ec*/
            if ( v35 >= v33 ) /*0x7942f2*/
              break; /*0x7942f2*/
            v33 -= v35; /*0x7942f4*/
          }
          if ( !v33 ) /*0x7942f8*/
            break; /*0x7942f8*/
          Game::ProcessIdle(v34); /*0x7942fa*/
        }
      }
      ToWideStringChar((char *)dword_A8DA90[v3]); /*0x794305*/
      Debug::Log(); /*0x794322*/
      v36 = TimerGetTicks(); /*0x794331*/
      v88 = 360; /*0x794342*/
      v87 = v36; /*0x794351*/
      v64 = v36; /*0x794358*/
      v79 = TimerGetTicks(); /*0x794365*/
      v67 = v79; /*0x794369*/
      v37 = 0; /*0x794371*/
      v80 = 0; /*0x794373*/
      for ( j = 0; ; v37 = j ) /*0x79437b*/
      {
        v38 = v37; /*0x794383*/
        if ( v67 == -1 ) /*0x794388*/
          break; /*0x794388*/
        v39 = TimerGetTicks() - v67; /*0x794393*/
        if ( v39 < v38 ) /*0x794399*/
        {
          v40 = v38 - v39; /*0x79439b*/
          goto LABEL_68; /*0x79439d*/
        }
  LABEL_69:
        Debug::Log(); /*0x7943a5*/
        Network::SendToPlayer((int)&unk_A8E9C0, (int)v98, 47, 0, (wchar_t *)dword_A8DA90[v3]); /*0x7943d3*/
        v41 = TimerGetTicks(); /*0x7943dc*/
        v37 = 30; /*0x7943e5*/
        v75[1] = v41; /*0x7943ea*/
        v75[3] = 30; /*0x7943ee*/
        v67 = v41; /*0x7943f2*/
        j = 30; /*0x7943fa*/
  LABEL_70:
        Game::ProcessIdle((TechnoTypeClass *)v37); /*0x7943fe*/
        v42 = v57; /*0x794403*/
        if ( !v57 ) /*0x794409*/
        {
          Speed = (&unk_A8E9C0)->GetSpeed(); /*0x794414*/
          v44 = v66; /*0x794419*/
          if ( v66 >= Speed ) /*0x79441f*/
          {
            v44 = 0; /*0x794421*/
            v66 = 0; /*0x794423*/
          }
          if ( !((int)&unk_A8E9C0)->SendPacketThunk(v44, (int)&v96, (int)v75, (int)&v91, (int)&v69 + 2, 0) /*0x79445d*/
            || (*(((unsigned short *)&(v69)) + 1)) != 0xAA04 )
          {
            goto LABEL_89; /*0x79445d*/
          }
          if ( v96 != 13 ) /*0x79446d*/
          {
            if ( v96 != 41 ) /*0x794476*/
              goto LABEL_89; /*0x794476*/
            Debug::Log(); /*0x794481*/
            if ( (uint8_t)NetworkID::Compare((bool *)(dword_A8DA78[v62] + 40), (int)&v91) ) /*0x7944a1*/
            {
              v45 = ToWideStringChar((char *)dword_A8DA90[v3]); /*0x7944bd*/
              if ( !_strcmpi(v45, v97) ) /*0x7944c3*/
              {
                Debug::Log(); /*0x7944e0*/
                memcpy(v92, "Z1;", sizeof(v92)); /*0x7944f1*/
                if ( v97 ) /*0x794509*/
                  strcpy(v93, v97); /*0x79452d*/
                else
                  v93[0] = 0; /*0x794538*/
                Debug::Log(); /*0x79454d*/
                (*(void (__stdcall **)(LPVOID, char *))(*(unsigned int *)ppv + 60))(ppv, v92); /*0x794565*/
                if ( v62 >= 0 && v62 < dword_A8DA84 ) /*0x794576*/
                {
                  v46 = (HWND)((Dialog *)0x130)->FindByHandle(); /*0x79457d*/
                  v47 = v46; /*0x794582*/
                  if ( v46 ) /*0x794586*/
                  {
                    DlgItem = GetDlgItem(v46, dword_84A1F0[v62]); /*0x794591*/
                    *((unsigned char *)&dword_B75F54 + v62) = 1; /*0x794597*/
                    SendMessageA(DlgItem, 0xF1u, 1u, 0); /*0x7945a8*/
                    PostMessageA(v47, 0xFu, 0, 0); /*0x7945b5*/
                  }
                }
                dword_A8E1A4[dword_A8E224] = v3; /*0x7945c4*/
                v76 = TimerGetTicks(); /*0x7945d6*/
                v57 = 1; /*0x7945df*/
                v42 = 1; /*0x7945e7*/
                v78 = 1200; /*0x7945eb*/
                v49 = (int *)(12 * dword_A8E224 + 11067844); /*0x7945ef*/
                *v49 = v76; /*0x7945f6*/
                v49[1] = v77; /*0x7945fc*/
                v49[2] = 1200; /*0x7945ff*/
                ++dword_A8E224; /*0x794609*/
                dword_A8E184[v3] = v58; /*0x794619*/
              }
            }
          }
          ((int)&unk_A8E9C0)->receiveData(v66); /*0x79462a*/
          if ( !v42 ) /*0x794631*/
            goto LABEL_89; /*0x794631*/
        }
        if ( dword_A8DE4C[v70] == 11 ) /*0x79463f*/
        {
          Debug::Log(); /*0x79469c*/
          goto LABEL_100; /*0x7946a4*/
        }
  LABEL_89:
        v50 = dword_A8DE4C[v70]; /*0x794641*/
        if ( v50 >= 1 && v50 < 11 ) /*0x794654*/
        {
          v51 = v50 - 1; /*0x794656*/
          if ( v50 - 1 > v61 ) /*0x79465f*/
          {
            Debug::Log(); /*0x7946ac*/
            v61 = v51 - 1; /*0x7946b5*/
            goto LABEL_100; /*0x7946b9*/
          }
        }
        v52 = 360; /*0x794669*/
        ++v66; /*0x794671*/
        if ( v64 != -1 ) /*0x794675*/
        {
          v53 = TimerGetTicks() - v64; /*0x794680*/
          if ( v53 >= 360 ) /*0x794686*/
            goto LABEL_100; /*0x794686*/
          v52 = 360 - v53; /*0x794688*/
        }
        if ( !v52 ) /*0x79468c*/
          goto LABEL_100; /*0x79468c*/
      }
      v40 = v37; /*0x79439f*/
  LABEL_68:
      if ( v40 ) /*0x7943a3*/
        goto LABEL_70; /*0x7943a3*/
      goto LABEL_69; /*0x7943a3*/
    }
    v42 = v57; /*0x7946bb*/
  LABEL_100:
    if ( v42 && dword_A8DE4C[v70] == 11 || v61 >= a3 ) /*0x7946e2*/
      break; /*0x7946e2*/
    ++v61; /*0x7946f2*/
    v54 = ToWideStringChar((char *)dword_A8DA90[v3]); /*0x7946f6*/
    v91.u32_C = 90; /*0x7946fd*/
    v91.__pad_0[13] = 49; /*0x794707*/
    v91.__pad_0[14] = v61 + 49; /*0x794714*/
    if ( v54 ) /*0x79471b*/
      strcpy(&v91.__pad_0[15], v54); /*0x79473a*/
    else
      v91.__pad_0[15] = 0; /*0x794745*/
    Debug::Log(); /*0x79475a*/
    (*(void (__stdcall **)(LPVOID, char *))(*(unsigned int *)ppv + 60))(ppv, &v91.u32_C); /*0x794772*/
    Debug::Log(); /*0x79477b*/
  }
  Debug::Log(); /*0x794794*/
  return v42; /*0x793e37*/
}
}
// 0x7947B0
namespace gamemd {
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
  unsigned int *v14; // esi
  unsigned int *v15; // edi
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

  TimerGetTicks(); /*0x7947bb*/
  dword_A8E224 = 0; /*0x7947d2*/
  memset(dword_A8E184, 0, sizeof(dword_A8E184)); /*0x7947d8*/
  v29 = -1; /*0x7947e5*/
  dword_B77DCC = 0; /*0x7947ed*/
  if ( !dword_A8E04C ) /*0x7947f3*/
    return 0; /*0x7947fe*/
  ((SessionClass *)((int)dword_A8B238))->SetupNetwork(); /*0x794804*/
  if ( dword_A8DA84 > 0 ) /*0x79480f*/
  {
    v1 = (HWND)((void *)0x130)->FindByHandle(); /*0x79481b*/
    if ( v1 ) /*0x79481f*/
    {
      DlgItem = GetDlgItem(v1, dword_84A1F0[0]); /*0x794828*/
      (*((unsigned char *)&(dword_B75F54))) = 1; /*0x79482e*/
      SendMessageA(DlgItem, 0xF1u, 1u, 0); /*0x79483e*/
      PostMessageA(v1, 0xFu, 0, 0); /*0x794849*/
    }
  }
  Debug::Log(); /*0x79485b*/
  v28 = 0; /*0x79486a*/
  if ( dword_A8E04C <= 0 ) /*0x79486e*/
  {
  LABEL_44:
    Debug::Log(); /*0x794b38*/
    return 1; /*0x794b4e*/
  }
  v3 = dword_A8DE4C; /*0x794874*/
  for ( i = dword_A8DE4C; ; v3 = i ) /*0x794879*/
  {
    v4 = *(v3 - 128); /*0x794883*/
    v5 = *(v3 - 127); /*0x794889*/
    v6 = (char *)*(&dword_A8DA90 + v5); /*0x79489e*/
    ToWideStringChar((char *)*(&dword_A8DA90 + v4)); /*0x7948a5*/
    ToWideStringChar(v6); /*0x7948ae*/
    Debug::Log(); /*0x7948bf*/
    v7 = ToWideStringChar((char *)*(&dword_A8DA90 + v4)); /*0x7948d8*/
    v8 = ((String *)((char **)&dword_B73E40))->GetOrEmpty(); /*0x7948da*/
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
    v10 = ToWideStringChar((char *)*(&dword_A8DA90 + v5)); /*0x79491c*/
    v11 = ((String *)((char **)&dword_B73E40))->GetOrEmpty(); /*0x79491e*/
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
    Ticks = TimerGetTicks(); /*0x7949e0*/
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
        Ticks = TimerGetTicks(); /*0x794a63*/
        v23 = 840; /*0x794a67*/
        v31 = 840; /*0x794a71*/
      }
      if ( v21 >= 1 && v21 < 11 && v21 - 1 > v19 ) /*0x794a8a*/
      {
        Debug::Log(); /*0x794a92*/
        v19 = v21 - 1; /*0x794a9e*/
        Ticks = TimerGetTicks(); /*0x794aa9*/
        v23 = 840; /*0x794aba*/
        v31 = 840; /*0x794ac0*/
      }
      v24 = v23; /*0x794ac8*/
      if ( Ticks != -1 ) /*0x794acd*/
      {
        v25 = TimerGetTicks() - Ticks; /*0x794ad8*/
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
    v26 = ++v28 < dword_A8E04C; /*0x794b28*/
    i += 2; /*0x794b2e*/
    if ( !v26 ) /*0x794b32*/
      goto LABEL_44; /*0x794b32*/
  }
  v13 = dword_A8DC2C[v4]; /*0x794958*/
  v14 = (unsigned int *)(4 * v4 + 11066412); /*0x79495f*/
  v15 = (unsigned int *)(4 * v5 + 11066412); /*0x79496c*/
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
// 0x794BA0
namespace gamemd {
AbstractClass * * WOL_StartGame()
{
  Dialog *DialogIndirect; // eax
  int v2; // esi
  char v3; // bl
  int v4; // esi
  char *v5; // eax
  int v6; // esi
  wchar_t *StringCSF; // eax
  HWND v8; // eax
  wchar_t *v9; // eax
  int v10; // ebx
  int v11; // ecx
  u_short v12; // dx
  uint16_t *v13; // eax
  int v14; // eax
  ObjectClass *nextObject; // edx
  int v16; // esi
  char *v17; // eax
  HWND v18; // eax
  int v19; // eax
  ObjectClass *v20; // edx
  char *v21; // eax
  int v22; // esi
  TagClass **p_attachedTag; // eax
  int v24; // eax
  ObjectClass *v25; // ebp
  int v26; // ebx
  ObjectClass *v27; // edx
  int abstractFlags; // ebp
  int v29; // eax
  unsigned int v30; // ebx
  char *v31; // edi
  char *v32; // edi
  char *v33; // esi
  char v34; // cl
  char *v35; // eax
  unsigned int v36; // ecx
  ObjectClass *v37; // ebp
  int v38; // edx
  TagClass **v39; // eax
  int owningHouseIndex; // ecx
  unsigned int v41; // ebx
  const char *v42; // edi
  ObjectClass *v43; // [esp+0h] [ebp-20h]
  ObjectClass *v44; // [esp+14h] [ebp-Ch]
  ObjectClass *v45; // [esp+14h] [ebp-Ch]
  int v46; // [esp+18h] [ebp-8h]
  int v47; // [esp+1Ch] [ebp-4h]
  TagClass **v48; // [esp+1Ch] [ebp-4h]

  Debug::Log(); /*0x794bac*/
  byte_B77E26 = 1; /*0x794bbd*/
  if ( g_WOL_UserList.owningHouseIndex ) /*0x794bc4*/
  {
    (*(void (**)(unsigned int))(**(unsigned int **)&stru_887598.isAliveFlag + 20))(*(unsigned int *)&stru_887598.isAliveFlag); /*0x794c32*/
    (*(void (**)(unsigned int))(**(unsigned int **)&stru_887598.isAliveFlag + 24))(*(unsigned int *)&stru_887598.isAliveFlag); /*0x794c3d*/
    memset(&DataGlobal_B73BB4, 0xFFu, 0x20u); /*0x794c4e*/
    DialogIndirect = (Dialog *)CreateDialogIndirect(g_hInstance, (HWND)0x130, g_hWnd, (DLGPROC)sub_793280, 0); /*0x794c66*/
    if ( DialogIndirect ) /*0x794c6d*/
      SetupDialog(DialogIndirect, 304); /*0x794c76*/
    v2 = 100; /*0x794c7b*/
    do /*0x794c86*/
    {
      Event::Dispatch(); /*0x794c80*/
      --v2; /*0x794c85*/
    }
    while ( v2 ); /*0x794c86*/
    StartGameWOL_Start((ObjectClass *)&unk_A8E9C0, 300); /*0x794c92*/
    v3 = WaitNetworkLobbyPlayers(); /*0x794c9c*/
    if ( !v3 ) /*0x794ca0*/
    {
      v4 = 0; /*0x794ca7*/
      DataGlobal_B77DCC = 0; /*0x794cab*/
      if ( g_WOL_UserList.owningHouseIndex <= 0 ) /*0x794cb1*/
        goto LABEL_18; /*0x794cb1*/
      while ( 1 ) /*0x794cbe*/
      {
        StartGameWOL_Start_7ACB90((ObjectClass *)&g_WOL_UserList.owningHouseIndex, &g_WebBrowserConfig.occupant, v4); /*0x794cbe*/
        if ( (g_WebBrowserConfig.occupant & 1) != 0 ) /*0x794cca*/
          break; /*0x794cca*/
        if ( ++v4 >= g_WOL_UserList.owningHouseIndex ) /*0x794cd4*/
          goto LABEL_18; /*0x794cd4*/
      }
      if ( &g_WebBrowserConfig == (ObjectClass *)-36 /*0x794cf1*/
        || (v5 = ((String *)((String *)&g_WebBrowser))->GetOrEmpty_Alt(),
            _strcmpi((char *)&g_WebBrowserConfig.ambientSoundController[3], v5)) )
      {
  LABEL_18:
        Debug::Log(); /*0x794cfd*/
      }
    }
    v6 = NegotiateScenarioWOL(v3); /*0x794d11*/
    if ( v6 ) /*0x794d15*/
    {
      Debug::Log(); /*0x794d20*/
      if ( v6 == 2 ) /*0x794d2b*/
      {
        StringCSF = GetStringCSF(g_Str_TXT_SCENARIOS_DO_NOT_MATCH, 0, g_Str_File_wonline_cpp, 20292); /*0x794d44*/
        ShowDialogConfirm(StringCSF, 0, (uint8_t (*)(void))GameLoop::Thunk, 0); /*0x794d4d*/
      }
      v8 = (HWND)Dialog::FindByHandle((Dialog *)0x130); /*0x794d57*/
      if ( v8 ) /*0x794d5e*/
        CloseDialog(v8, 0); /*0x794d64*/
      g_NetworkLobbyState = 0; /*0x794d6e*/
      if ( dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2 ) /*0x794d81*/
      {
        g_WOL_GameListState = 0; /*0x794d84*/
        g_WOL_IdleHandler = 11; /*0x794d8a*/
        g_WOL_GameProcessState = -1; /*0x794d94*/
        g_WOL_GameListPool = time(0); /*0x794da6*/
      }
      byte_B77DEC = 0; /*0x794dab*/
      HandleWOLForwardingError(v43); /*0x794db2*/
      Network::Init(); /*0x794db7*/
      byte_B77E27 = 0; /*0x794dbc*/
      byte_B77E26 = 0; /*0x794dc3*/
      (((unsigned char *)&(DataGlobal_B77DC0))[1]) = 1; /*0x794dcf*/
      Debug::Log(); /*0x794dd6*/
      SetEvent(dword_B7369C); /*0x794de5*/
      Debug::Log(); /*0x794df0*/
      (*(void (__stdcall **)(LPVOID))(*(unsigned int *)ppv + 36))(ppv); /*0x794e00*/
      if ( dword_A8B244 == 1 || dword_A8B244 == 2 || dword_A8B244 == 3 ) /*0x794e15*/
      {
        v9 = GetStringCSF(aTxtAwayQuickma, 0, g_Str_File_wonline_cpp, 20329); /*0x794e46*/
        byte_B77E40 = 1; /*0x794e50*/
        WideString::Reassign(&stru_B7622C.vfptr1, v9); /*0x794e58*/
      }
      else
      {
        byte_B77E40 = 0; /*0x794e21*/
        WideString::Reassign(&stru_B7622C.vfptr1, &g_TypeClass_DefaultString); /*0x794e28*/
      }
    }
    else
    {
      Debug::Log(); /*0x794e6a*/
      v10 = dword_A8DA84; /*0x794e6f*/
      v11 = 0; /*0x794e78*/
      if ( dword_A8DA84 > 0 ) /*0x794e7c*/
      {
        v12 = hostshort; /*0x794e7e*/
        v13 = &dword_A8E2B2; /*0x794e84*/
        do /*0x794e9d*/
        {
          if ( !*v13 ) /*0x794e89*/
          {
            *v13 = v12; /*0x794e8e*/
            v10 = dword_A8DA84; /*0x794e91*/
          }
          ++v11; /*0x794e97*/
          ++v13; /*0x794e98*/
        }
        while ( v11 < v10 ); /*0x794e9d*/
      }
      v14 = 0; /*0x794ea5*/
      if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x794ea9*/
      {
        nextObject = g_WOL_UserList.nextObject; /*0x794eab*/
        while ( 1 ) /*0x794eb1*/
        {
          if ( v14 >= 0 && v14 < g_WOL_UserList.owningHouseIndex ) /*0x794eb7*/
            memcpy(&g_WebBrowserConfig.occupant, nextObject, 0x6Cu); /*0x794ec5*/
          if ( (g_WebBrowserConfig.occupant & 1) != 0 ) /*0x794ece*/
            break; /*0x794ece*/
          ++v14; /*0x794ed0*/
          nextObject = &nextObject->health; /*0x794ed1*/
          if ( v14 >= g_WOL_UserList.owningHouseIndex ) /*0x794ed6*/
            goto LABEL_52; /*0x794ed6*/
        }
        if ( &g_WebBrowserConfig != (ObjectClass *)-36 ) /*0x794ee1*/
        {
          v16 = 0; /*0x794ee3*/
          if ( v10 > 0 ) /*0x794ee7*/
          {
            while ( 1 ) /*0x794ef6*/
            {
              v17 = ToWideStringChar((char *)dword_A8DA78[v16]); /*0x794ef6*/
              if ( !_strcmpi(v17, (char *)&g_WebBrowserConfig.ambientSoundController[3]) ) /*0x794efc*/
                break; /*0x794efc*/
              if ( ++v16 >= dword_A8DA84 ) /*0x794f10*/
                goto LABEL_52; /*0x794f10*/
            }
            dword_A8DBBC = *(&dword_A8E2B2 + v16); /*0x794f1c*/
          }
        }
      }
  LABEL_52:
      Debug::Log(); /*0x794f23*/
      v18 = (HWND)Dialog::FindByHandle((Dialog *)0x130); /*0x794f35*/
      if ( v18 ) /*0x794f3e*/
        CloseDialog(v18, 0); /*0x794f44*/
      Debug::Log(); /*0x794f4e*/
      if ( *(unsigned int *)&dword_A8B238 != 4 || dword_A8B244 != 3 ) /*0x794f67*/
        dword_A8B3AC = 0; /*0x794f69*/
      dword_A8B554 = 5; /*0x794f74*/
      switch ( *(unsigned int *)&g_Rules_EngineerCount ) /*0x794f91*/
      {
        case 0: /*0x794f91*/
          dword_A8B550 = (wchar_t *)40; /*0x794f98*/
          dword_A8B570 = 60; /*0x794fa2*/
          dword_A8B554 = 10; /*0x794fac*/
          break; /*0x794fb2*/
        case 1: /*0x794f91*/
          dword_A8B550 = (wchar_t *)40; /*0x794fb4*/
          dword_A8B570 = 45; /*0x794fbe*/
          dword_A8B554 = 10; /*0x794fc8*/
          break; /*0x794fce*/
        case 2: /*0x794f91*/
          dword_A8B550 = (wchar_t *)30; /*0x794fd5*/
          dword_A8B570 = 30; /*0x794fda*/
          break; /*0x794fdf*/
        case 3: /*0x794f91*/
          dword_A8B550 = (wchar_t *)20; /*0x794fe1*/
          dword_A8B570 = 20; /*0x794fe7*/
          break; /*0x794fed*/
        case 4: /*0x794f91*/
          dword_A8B550 = (wchar_t *)20; /*0x794fef*/
          dword_A8B570 = 15; /*0x794ff5*/
          break; /*0x794fff*/
        case 5: /*0x794f91*/
          dword_A8B550 = (wchar_t *)20; /*0x795001*/
          dword_A8B570 = 12; /*0x795007*/
          break; /*0x795011*/
        default:
          dword_A8B550 = (wchar_t *)10; /*0x795013*/
          dword_A8B570 = 10; /*0x795019*/
          break; /*0x795019*/
      }
      if ( byte_A8E2C8 ) /*0x795026*/
        dword_A8B550 += 10; /*0x795028*/
      v19 = 0; /*0x795034*/
      dword_A8B56C = 0; /*0x795038*/
      if ( g_WOL_UserList.owningHouseIndex <= 0 ) /*0x79503e*/
        goto LABEL_77; /*0x79503e*/
      v20 = g_WOL_UserList.nextObject; /*0x795040*/
      while ( 1 ) /*0x795046*/
      {
        if ( v19 >= 0 && v19 < g_WOL_UserList.owningHouseIndex ) /*0x79504c*/
          memcpy(&g_WebBrowserConfig.occupant, v20, 0x6Cu); /*0x79505a*/
        if ( (g_WebBrowserConfig.occupant & 1) != 0 ) /*0x795063*/
          break; /*0x795063*/
        ++v19; /*0x795065*/
        v20 = &v20->health; /*0x795066*/
        if ( v19 >= g_WOL_UserList.owningHouseIndex ) /*0x79506b*/
          goto LABEL_77; /*0x79506b*/
      }
      if ( &g_WebBrowserConfig == (ObjectClass *)-36 /*0x795088*/
        || (v21 = ((String *)((String *)&g_WebBrowser))->GetOrEmpty_Alt(),
            _strcmpi((char *)&g_WebBrowserConfig.ambientSoundController[3], v21)) )
      {
  LABEL_77:
        dword_A8B570 = 0; /*0x795094*/
      }
      v22 = 0; /*0x79509e*/
      p_attachedTag = &g_WOL_UserList.attachedTag; /*0x7950a0*/
      do /*0x7950b5*/
      {
        if ( (int)*p_attachedTag > v22 ) /*0x7950a9*/
          v22 = (int)*p_attachedTag; /*0x7950ab*/
        ++p_attachedTag; /*0x7950ad*/
      }
      while ( (int)p_attachedTag < (int)&g_WOL_UserList.customSound_controller[1] ); /*0x7950b5*/
      if ( byte_A8E2C8 ) /*0x7950be*/
        v22 *= 2; /*0x7950c0*/
      dword_A8DB9C = (wchar_t *)1; /*0x7950c9*/
      if ( !v22 || v22 == 1000 ) /*0x7950db*/
      {
        Debug::Log(); /*0x7953c0*/
        dword_A8B56C = 10 * ((unsigned int)dword_A8B550 / 0xA); /*0x7953de*/
        if ( 10 * ((unsigned int)dword_A8B550 / 0xA) <= 0xA ) /*0x7953e3*/
          dword_A8B56C = 10; /*0x7953ee*/
      }
      else
      {
        Debug::Log(); /*0x7950e7*/
        if ( v22 <= 1000 ) /*0x7950f5*/
        {
          if ( v22 < 600 ) /*0x795109*/
            dword_A8DB9C = (wchar_t *)1; /*0x79510b*/
        }
        else
        {
          dword_A8DB9C = (wchar_t *)2; /*0x7950f7*/
        }
        Network::SetConnectionParams( /*0x79515a*/
          &unk_A8E9C0,
          120 * (60 * v22 / 1000) / 100 + 60 * v22 / 1000,
          -1,
          8 * (120 * (60 * v22 / 1000) / 100 + 60 * v22 / 1000),
          1);
        v24 = 0; /*0x795165*/
        if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x795169*/
        {
          v25 = g_WOL_UserList.nextObject; /*0x79516b*/
          while ( 1 ) /*0x795171*/
          {
            if ( v24 >= 0 && v24 < g_WOL_UserList.owningHouseIndex ) /*0x795177*/
              memcpy(&g_WebBrowserConfig.occupant, v25, 0x6Cu); /*0x795185*/
            if ( (g_WebBrowserConfig.occupant & 1) != 0 ) /*0x79518e*/
              break; /*0x79518e*/
            ++v24; /*0x795194*/
            v25 = &v25->health; /*0x795195*/
            if ( v24 >= g_WOL_UserList.owningHouseIndex ) /*0x79519a*/
              goto LABEL_97; /*0x79519a*/
          }
          if ( &g_WebBrowserConfig != (ObjectClass *)-36 ) /*0x795346*/
          {
            v35 = ((String *)((String *)&g_WebBrowser))->GetOrEmpty_Alt(); /*0x795351*/
            if ( !_strcmpi((char *)&g_WebBrowserConfig.ambientSoundController[3], v35) ) /*0x79535c*/
            {
              switch ( (unsigned int)dword_A8DB9C ) /*0x795376*/
              {
                case 0u: /*0x795376*/
                case 1u: /*0x795376*/
                  v36 = (unsigned int)dword_A8B550; /*0x79537d*/
                  break; /*0x795383*/
                case 2u: /*0x795376*/
                  v36 = (unsigned int)dword_A8B550 + ((unsigned int)dword_A8B550 >> 1); /*0x79538e*/
                  break; /*0x795390*/
                case 3u: /*0x795376*/
                  v36 = 2 * (unsigned int)dword_A8B550; /*0x795398*/
                  break; /*0x79539a*/
                default:
                  v36 = dword_A8B56C; /*0x79539c*/
                  break; /*0x79539c*/
              }
              dword_A8B56C = 10 * (v36 / 0xA); /*0x7953b1*/
            }
          }
        }
      }
  LABEL_97:
      Debug::Log(); /*0x7951a1*/
      Debug::Log(); /*0x7951b8*/
      Debug::Log(); /*0x7951c8*/
      Debug::Log(); /*0x7951d9*/
      dword_A8B568 = dword_A8B550; /*0x7951f0*/
      memset(&unk_A8B574, 0, 0x340u); /*0x7951f9*/
      *(unsigned int *)&hostshort = 1234; /*0x795200*/
      stru_A8EB00.vfptr[24] = *(unsigned int *)&g_Rules_EngineerCount; /*0x79520a*/
      *(unsigned int *)&dword_841F34 = 1235; /*0x795216*/
      *(unsigned int *)&dword_841F38 = 1236; /*0x795220*/
      *(unsigned int *)&dword_841F3C = 1237; /*0x79522a*/
      *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] = 0; /*0x795234*/
      if ( byte_A8E2C8 ) /*0x79523e*/
        Process::WaitForExit((Process *)&g_NetworkEventQueue, 0x7D0u, 1); /*0x79524b*/
      byte_B77A04 = 0; /*0x795255*/
      byte_B76568[0] = 0; /*0x79525f*/
      if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x795266*/
      {
        if ( (stru_B76AC4.health & 0x100) != 0 ) /*0x79527c*/
        {
          v26 = 0; /*0x795287*/
          v27 = 0; /*0x795289*/
          abstractFlags = 0; /*0x79528b*/
          v46 = 0; /*0x79528f*/
          v47 = 0; /*0x795293*/
          if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x795297*/
          {
            v44 = g_WOL_UserList.nextObject; /*0x7952a2*/
            do /*0x795468*/
            {
              if ( v26 >= 0 && v26 < g_WOL_UserList.owningHouseIndex ) /*0x7952b0*/
                v27 = v44; /*0x7952b2*/
              if ( !abstractFlags || (v29 = v27->abstractFlags, abstractFlags == v29) ) /*0x7952c3*/
              {
                strcat(&byte_B77A04, (const char *)&v27->occupant); /*0x79541a*/
                strcat(&byte_B77A04, Str); /*0x795445*/
                abstractFlags = v27->abstractFlags; /*0x79544e*/
              }
              else if ( !v46 || v46 == v29 ) /*0x7952d3*/
              {
                strcat(byte_B76568, (const char *)&v27->occupant); /*0x7952fb*/
                v30 = strlen(Str) + 1; /*0x795314*/
                v31 = &byte_B76568[strlen(byte_B76568)]; /*0x795322*/
                memcpy(v31, Str, 4 * (v30 >> 2)); /*0x795326*/
                v33 = &Str[4 * (v30 >> 2)]; /*0x795326*/
                v32 = &v31[4 * (v30 >> 2)]; /*0x795326*/
                v34 = v30; /*0x795328*/
                v26 = v47; /*0x79532a*/
                memcpy(v32, v33, v34 & 3); /*0x795331*/
                v46 = v27->abstractFlags; /*0x795336*/
              }
              v47 = ++v26; /*0x795460*/
              v44 = &v44->health; /*0x795464*/
            }
            while ( v26 < g_WOL_UserList.owningHouseIndex ); /*0x795468*/
          }
        }
        if ( dword_A8B244 == 3 ) /*0x795475*/
        {
          v37 = 0; /*0x795480*/
          v38 = 0; /*0x795482*/
          if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x795486*/
          {
            v39 = &g_WOL_LoginObject.attachedTag; /*0x795492*/
            v45 = g_WOL_UserList.nextObject; /*0x795497*/
            owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x79549b*/
            v48 = &g_WOL_LoginObject.attachedTag; /*0x7954a1*/
            do /*0x795574*/
            {
              if ( (int)v39 >= (int)&g_WOL_LoginObject.attachedTag && v38 < owningHouseIndex ) /*0x7954ae*/
                v37 = v45; /*0x7954b0*/
              if ( *v39 ) /*0x7954b4*/
              {
                strcat(byte_B76568, (const char *)&v37->occupant); /*0x79551d*/
                v41 = strlen(Str) + 1; /*0x795536*/
                v42 = byte_B76568; /*0x795538*/
              }
              else
              {
                strcat(&byte_B77A04, (const char *)&v37->occupant); /*0x7954dc*/
                v41 = strlen(Str) + 1; /*0x7954f5*/
                v42 = &byte_B77A04; /*0x7954f7*/
              }
              memcpy((void *)&v42[strlen(v42)], Str, v41); /*0x79554a*/
              owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x79555b*/
              ++v38; /*0x795561*/
              v39 = v48 + 37; /*0x795565*/
              v45 = &v45->health; /*0x79556c*/
              v48 += 37; /*0x795570*/
            }
            while ( v38 < g_WOL_UserList.owningHouseIndex ); /*0x795574*/
          }
        }
      }
      Debug::Log(); /*0x79557f*/
      SetEvent(dword_B736A0); /*0x79558e*/
      if ( dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2 ) /*0x7955a6*/
      {
        g_WOL_GameListState = 0; /*0x7955aa*/
        g_WOL_IdleHandler = 11; /*0x7955b4*/
        g_WOL_GameProcessState = -1; /*0x7955be*/
        g_WOL_GameListPool = time(0); /*0x7955d0*/
      }
      (((unsigned char *)&(DataGlobal_B77DC0))[1]) = 1; /*0x7955da*/
      Debug::Log(); /*0x7955e1*/
      (*(void (__stdcall **)(LPVOID))(*(unsigned int *)ppv + 36))(ppv); /*0x7955f1*/
      Scenario::PreGameInit(); /*0x7955f4*/
      byte_B77E27 = 0; /*0x7955f9*/
      byte_B77E26 = 0; /*0x795600*/
      Debug::Log(); /*0x79560c*/
    }
  }
  else
  {
    g_NetworkLobbyState = 0; /*0x794bcb*/
    if ( dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2 ) /*0x794bde*/
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
// 0x795CD0
namespace gamemd {
int WOL_NegotiateScenario(char a1)
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
  unsigned int *v14; // ecx
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
  unsigned int v52[12]; // [esp+20h] [ebp-1F8h] BYREF
  int v53[113]; // [esp+50h] [ebp-1C8h] BYREF
  int16_t v54; // [esp+214h] [ebp-4h]
  char v55; // [esp+216h] [ebp-2h]

  v41 = 0; /*0x795ce1*/
  v40 = a1 == 0; /*0x795ce6*/
  v42 = 0; /*0x795ceb*/
  Network::Disconnect(unk_A8E9C0); /*0x795cf3*/
  Network::SetConnectionParams(unk_A8E9C0, 50, -1, 5000, 1); /*0x795d08*/
  Flagged = GameSettings::FindFlagged(); /*0x795d12*/
  if ( !Flagged || (v3 = ((String *)((char **)&dword_B73E40))->GetOrEmpty_Alt(), _strcmpi(Flagged + 36, v3)) ) /*0x795d2b*/
  {
    (*((unsigned char *)&(v1))) = dword_A8BB08; /*0x79616e*/
    if ( FindAndValidateMap(&byte_A8B8E0, dword_A8BB04, &byte_A8BAE2, v1, 1) ) /*0x796187*/
    {
      memset(v53, 0, sizeof(v53)); /*0x7961a8*/
      v54 = 0; /*0x7961aa*/
      v55 = 0; /*0x7961ac*/
      v53[0] = 19; /*0x7961af*/
      if ( v40 ) /*0x7961b7*/
        v53[0] = 42; /*0x7961b9*/
      CopyWideToChar(&v53[1], *(char **)dword_A8DA78, -1); /*0x7961cf*/
      v18 = 0; /*0x7961da*/
      if ( (int)dword_B77900 > 0 ) /*0x7961de*/
      {
        v19 = (char *)dword_B77908; /*0x7961e0*/
        while ( 1 ) /*0x7961e6*/
        {
          if ( v18 >= 0 && v18 < (int)dword_B77900 ) /*0x7961ec*/
            memcpy(&byte_B777B0, v19, 0x6Cu); /*0x7961fa*/
          if ( (byte_B777B0 & 1) != 0 ) /*0x796203*/
            break; /*0x796203*/
          ++v18; /*0x796205*/
          v19 += 108; /*0x796206*/
          if ( v18 >= (int)dword_B77900 ) /*0x79620b*/
            goto LABEL_75; /*0x79620b*/
        }
        if ( &byte_B777B0 ) /*0x796216*/
        {
          v20 = CharToWideString(unk_B777D4); /*0x79621d*/
          Network::SendToPlayer((int)unk_A8E9C0, (int)v53, 47, 1, (wchar_t *)v20); /*0x796231*/
        }
      }
  LABEL_75:
      TimerGetTicks(); /*0x796236*/
      Ticks = TimerGetTicks(); /*0x79625f*/
      v47 = 1200; /*0x796267*/
      if ( v40 ) /*0x79626b*/
      {
        Ticks = TimerGetTicks(); /*0x796276*/
        v47 = 300; /*0x796287*/
      }
      while ( Network::GetQueueCount((int)unk_A8E9C0) > 0 ) /*0x796297*/
      {
        v21 = v47; /*0x7962a1*/
        if ( Ticks != -1 ) /*0x7962a8*/
        {
          v22 = TimerGetTicks() - Ticks; /*0x7962b3*/
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
      if ( dword_A8B244 != 3 && (dword_A8B244 == 1 || dword_A8B244 == 2) /*0x796306*/
        || (unsigned char)dword_A8BB08 && !((IsRandMap *)((int)dword_A8B238))->Sed2() )
      {
        memset(v53, 0, sizeof(v53)); /*0x796324*/
        v54 = 0; /*0x796326*/
        v55 = 0; /*0x796328*/
        v23 = 0; /*0x796329*/
        v53[0] = 20; /*0x79632b*/
        if ( (int)dword_B77900 > 0 ) /*0x796335*/
        {
          v24 = (char *)dword_B77908; /*0x796337*/
          while ( 1 ) /*0x79633d*/
          {
            if ( v23 >= 0 && v23 < (int)dword_B77900 ) /*0x796343*/
              memcpy(&byte_B777B0, v24, 0x6Cu); /*0x796351*/
            if ( (byte_B777B0 & 1) != 0 ) /*0x79635a*/
              break; /*0x79635a*/
            ++v23; /*0x79635c*/
            v24 += 108; /*0x79635d*/
            if ( v23 >= (int)dword_B77900 ) /*0x796362*/
              goto LABEL_99; /*0x796362*/
          }
          if ( &byte_B777B0 ) /*0x79636d*/
          {
            v25 = CharToWideString(unk_B777D4); /*0x796374*/
            Network::SendToPlayer((int)unk_A8E9C0, (int)v53, 47, 1, (wchar_t *)v25); /*0x796388*/
          }
        }
  LABEL_99:
        Debug::Log(); /*0x79638d*/
        TimerGetTicks(); /*0x79639e*/
        v45 = TimerGetTicks(); /*0x7963bd*/
        while ( Network::GetQueueCount((int)unk_A8E9C0) > 0 ) /*0x7963d9*/
        {
          v26 = 1200; /*0x7963e6*/
          if ( v45 != -1 ) /*0x7963ec*/
          {
            v27 = TimerGetTicks() - v45; /*0x7963f7*/
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
        if ( RequestNetworkFile(&byte_A8B8E0, 4, 1) /*0x79646f*/
          && (v40 || !((IsRandMap *)((int)dword_A8B238))->Sed2() || RequestNetworkFile((char *)v52, 4, 1)) )
        {
          goto LABEL_113; /*0x796476*/
        }
      }
      v42 = 2; /*0x796478*/
      v40 = 1; /*0x79647c*/
    }
  LABEL_113:
    strcpy(&dword_A8B230->fileName, &byte_A8B8E0); /*0x796481*/
    Debug::Log(); /*0x7964b4*/
    TimerGetTicks(); /*0x7964c0*/
    v49 = TimerGetTicks(); /*0x7964de*/
    v51 = 1200; /*0x7964f1*/
    if ( v40 ) /*0x7964f5*/
    {
      v49 = TimerGetTicks(); /*0x796500*/
      v51 = 300; /*0x796511*/
    }
    while ( 1 ) /*0x79651a*/
    {
      Event::Dispatch(); /*0x79651a*/
      if ( ((Network *)((int)unk_A8E9C0))->Send((int)&dword_A8D638, (int)&unk_A8D800, (int)&dword_A8D804, (int)&word_A8D810) ) /*0x796538*/
      {
        if ( word_A8D810 == -22012 ) /*0x796548*/
        {
          Debug::Log(); /*0x79654f*/
          v28 = 0; /*0x79655d*/
          if ( (int)dword_B77900 > 0 ) /*0x796561*/
          {
            v29 = (char *)dword_B77908; /*0x796563*/
            do /*0x796569*/
            {
              if ( v28 >= 0 && v28 < (int)dword_B77900 ) /*0x79656f*/
                memcpy(&byte_B777B0, v29, 0x6Cu); /*0x79657d*/
              if ( (byte_B777B0 & 1) != 0 ) /*0x796586*/
                break; /*0x796586*/
              ++v28; /*0x796588*/
              v29 += 108; /*0x796589*/
            }
            while ( v28 < (int)dword_B77900 ); /*0x796569*/
            if ( &byte_B777B0 && !_strcmpi(byte_A8D63C, unk_B777D4) ) /*0x7965a5*/
            {
              if ( dword_A8D638 == 11 ) /*0x7965b9*/
              {
                Debug::Log(); /*0x7965f6*/
                goto LABEL_147; /*0x7965fe*/
              }
              if ( dword_A8D638 == 42 ) /*0x7965be*/
                break; /*0x7965be*/
            }
          }
        }
      }
      v30 = v51; /*0x7965c0*/
      if ( v49 != -1 ) /*0x7965cb*/
      {
        v31 = TimerGetTicks() - v49; /*0x7965d6*/
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
    if ( dword_A8DA84 > 0 ) /*0x79661e*/
    {
      while ( 1 ) /*0x79662e*/
      {
        v33 = ToWideStringChar(*(char **)(dword_A8DA78 + 4 * v32)); /*0x79662e*/
        if ( !_strcmpi(v33, unk_B777D4) ) /*0x796634*/
          break; /*0x796634*/
        if ( ++v32 >= dword_A8DA84 ) /*0x796648*/
          goto LABEL_142; /*0x796648*/
      }
      if ( v32 < dword_A8DA84 && dword_B73BB4[v32] < dword_84A1E0[v32] ) /*0x79666b*/
        dword_B73BB4[v32] = 3; /*0x79666d*/
    }
  LABEL_142:
    v34 = v51; /*0x796673*/
    if ( v49 != -1 ) /*0x79667e*/
    {
      v35 = TimerGetTicks() - v49; /*0x796689*/
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
  TimerGetTicks(); /*0x795d6b*/
  v48 = TimerGetTicks(); /*0x795d81*/
  v50 = 900; /*0x795d98*/
  if ( v40 ) /*0x795d9c*/
  {
    v48 = TimerGetTicks(); /*0x795db0*/
    v50 = 300; /*0x795db8*/
  }
  do /*0x795f56*/
  {
    Event::Dispatch(); /*0x795dbc*/
    if ( ((Network *)((int)unk_A8E9C0))->Send((int)&dword_A8D638, (int)&unk_A8D800, (int)&dword_A8D804, (int)&word_A8D810) ) /*0x795dda*/
    {
      if ( word_A8D810 == -22012 ) /*0x795df0*/
      {
        Debug::Log(); /*0x795dfb*/
        v6 = 1; /*0x795e05*/
        if ( dword_A8DA84 > 1 ) /*0x795e0f*/
        {
          v7 = 0; /*0x795e15*/
          do /*0x795f23*/
          {
            if ( NetworkID::Compare(*(unsigned int *)(v7 * 4 + dword_A8DA78 + 4) + 40, (int)&dword_A8D804) ) /*0x795e28*/
            {
              v8 = ToWideStringChar(*(char **)(v7 * 4 + dword_A8DA78 + 4)); /*0x795e44*/
              if ( !_strcmpi(v8, byte_A8D63C) && !v52[v7 + 5] ) /*0x795e5a*/
              {
                v9 = dword_A8D638; /*0x795e66*/
                if ( dword_A8D638 == 16 ) /*0x795e6e*/
                {
                  Debug::Log(); /*0x795e75*/
                  v9 = dword_A8D638; /*0x795e7a*/
                  v52[v7 + 5] = dword_A8D638; /*0x795e82*/
                  v5 = 1; /*0x795e86*/
                  ++v4; /*0x795e88*/
                }
                if ( v9 == 19 ) /*0x795e8c*/
                {
                  Debug::Log(); /*0x795e93*/
                  v9 = dword_A8D638; /*0x795e98*/
                  v52[v7 + 5] = dword_A8D638; /*0x795ea0*/
                  ++v4; /*0x795ea4*/
                }
                if ( v9 == 42 ) /*0x795ea8*/
                {
                  Debug::Log(); /*0x795eaf*/
                  v9 = dword_A8D638; /*0x795eba*/
                  ++v4; /*0x795ec2*/
                  v10 = v6 < dword_A8DA84; /*0x795ec3*/
                  v52[v7 + 5] = dword_A8D638; /*0x795ec5*/
                  v40 = 1; /*0x795ec9*/
                  if ( v10 && dword_B73BB8[v7] < dword_84A1E4[v7] ) /*0x795ede*/
                    dword_B73BB8[v7] = 0; /*0x795ee0*/
                }
                if ( v9 == 20 ) /*0x795eed*/
                {
                  Debug::Log(); /*0x795ef4*/
                  v52[v7 + 5] = dword_A8D638; /*0x795f01*/
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
          while ( v6 < dword_A8DA84 ); /*0x795f23*/
        }
      }
    }
    if ( v4 >= dword_A8DA84 - 1 ) /*0x795f32*/
      break; /*0x795f32*/
    v11 = v50; /*0x795f38*/
    if ( v48 != -1 ) /*0x795f3f*/
    {
      v12 = TimerGetTicks() - v48; /*0x795f4a*/
      if ( v12 >= v50 ) /*0x795f50*/
        break; /*0x795f50*/
      v11 = v50 - v12; /*0x795f52*/
    }
  }
  while ( v11 ); /*0x795f56*/
  if ( v41 ) /*0x795f67*/
    v42 = 2; /*0x795f69*/
  if ( !v40 && !v41 && v5 && v4 == dword_A8DA84 - 1 ) /*0x795f92*/
  {
    while ( CloseDialog(0, 0) == 1 ) /*0x795fa3*/
      ; /*0x795fa5*/
    byte_A8BB10 = 0; /*0x795fba*/
    dword_A8BB14 = 0; /*0x795fbf*/
    dword_A8BB18 = 0; /*0x795fc4*/
    v13 = 1; /*0x795fc9*/
    if ( dword_A8DA84 > 1 ) /*0x795fd0*/
    {
      v14 = &v52[5]; /*0x795fd2*/
      do /*0x796000*/
      {
        if ( *v14 == 16 ) /*0x795fd9*/
          *((unsigned char *)&byte_A8BB10 + dword_A8BB18++) = v13; /*0x795fe1*/
        ++v13; /*0x795ffa*/
        ++v14; /*0x795ffb*/
      }
      while ( v13 < dword_A8DA84 ); /*0x796000*/
    }
    if ( !SendNetworkFile(&dword_A8B230->fileName, 4, 0, 1) ) /*0x796016*/
    {
      v42 = 2; /*0x79601f*/
      v40 = 0; /*0x796023*/
    }
    if ( ((IsRandMap *)((int)dword_A8B238))->Sed2() && !SendNetworkFile(ExistingFileName, 4, 0, 1) ) /*0x796043*/
    {
      v42 = 2; /*0x79604c*/
      v40 = 0; /*0x796050*/
    }
  }
  memset(v53, 0, sizeof(v53)); /*0x79605f*/
  v54 = 0; /*0x796061*/
  v55 = 0; /*0x796063*/
  if ( v40 || v4 != dword_A8DA84 - 1 || v41 ) /*0x79607d*/
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
  CopyWideToChar(&v53[1], *(char **)dword_A8DA78, -1); /*0x7960b4*/
  for ( i = 1; i < dword_A8DA84; ++i ) /*0x7960c5*/
  {
    v43 = TimerGetTicks(); /*0x7960dc*/
    v46 = 600; /*0x7960e6*/
    if ( v40 ) /*0x7960ea*/
    {
      v52[0] = TimerGetTicks(); /*0x7960f5*/
      v43 = v52[0]; /*0x7960f9*/
      v52[2] = 300; /*0x796106*/
      v46 = 300; /*0x79610e*/
    }
    do /*0x796159*/
    {
      Event::Dispatch(); /*0x796112*/
      if ( Network::SendToPlayer((int)unk_A8E9C0, (int)v53, 47, 1, *(wchar_t **)(dword_A8DA78 + 4 * i)) ) /*0x79612f*/
        break; /*0x796136*/
      v16 = v46; /*0x79613c*/
      if ( v43 != -1 ) /*0x796142*/
      {
        v17 = TimerGetTicks() - v43; /*0x79614d*/
        if ( v17 >= v46 ) /*0x796153*/
          break; /*0x796153*/
        v16 = v46 - v17; /*0x796155*/
      }
    }
    while ( v16 ); /*0x796159*/
  }
  LABEL_147:
  if ( (unsigned int)(8 * Network::GetLobbyStatus(unk_A8E9C0)) >= 0x78 ) /*0x7966b0*/
    v36 = 8 * Network::GetLobbyStatus(unk_A8E9C0); /*0x7966c3*/
  else
    v36 = 120; /*0x7966b2*/
  v39 = v36; /*0x7966c8*/
  LobbyStatus = Network::GetLobbyStatus(unk_A8E9C0); /*0x7966d0*/
  Network::SetConnectionParams(unk_A8E9C0, LobbyStatus + 2, -1, v39, 1); /*0x7966de*/
  Connection::Close(unk_A8E9C0); /*0x7966e8*/
  result = v42; /*0x7966ed*/
  if ( v42 != 2 && v40 ) /*0x7966fc*/
    return 1; /*0x7966fe*/
  return result; /*0x796703*/
}
}
// 0x796710
namespace gamemd {
char HandleWOLRematch()
{
  int v0; // eax
  ObjectClass *nextObject; // ebp
  char *v2; // eax
  HWND v3; // eax
  HWND DlgItem; // eax
  int v5; // eax
  ObjectClass *i; // edx
  Network *v8; // [esp+0h] [ebp-254h]
  unsigned short v9[3]; // [esp+Eh] [ebp-246h] BYREF
  Waypoint v10[2]; // [esp+14h] [ebp-240h] BYREF
  int v11; // [esp+8Ch] [ebp-1C8h] BYREF
  char v12[452]; // [esp+90h] [ebp-1C4h] BYREF

  Waypoint::InitInvalid(v10); /*0x79671d*/
  if ( !stru_B76AC4.ambientSoundController[4] || g_WOL_UserList.owningHouseIndex < 2 ) /*0x796738*/
    return 0; /*0x796738*/
  v0 = 0; /*0x79673e*/
  if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x796742*/
  {
    nextObject = g_WOL_UserList.nextObject; /*0x796744*/
    while ( 1 ) /*0x79674a*/
    {
      if ( v0 >= 0 && v0 < g_WOL_UserList.owningHouseIndex ) /*0x796750*/
        memcpy(&g_WebBrowserConfig.occupant, nextObject, 0x6Cu); /*0x79675e*/
      if ( (g_WebBrowserConfig.occupant & 1) != 0 ) /*0x796767*/
        break; /*0x796767*/
      ++v0; /*0x796769*/
      nextObject = &nextObject->health; /*0x79676a*/
      if ( v0 >= g_WOL_UserList.owningHouseIndex ) /*0x79676f*/
        goto LABEL_13; /*0x79676f*/
    }
    if ( &g_WebBrowserConfig != (ObjectClass *)-36 ) /*0x79677a*/
    {
      v2 = ((String *)((String *)&g_WebBrowser))->GetOrEmpty_Alt(); /*0x796781*/
      if ( !_strcmpi((char *)&g_WebBrowserConfig.ambientSoundController[3], v2) ) /*0x79678c*/
        return 0; /*0x796796*/
    }
  }
  LABEL_13:
  if ( g_NetworkLobbyState ) /*0x7967a3*/
    return 0; /*0x7967a3*/
  if ( !Connection::GetSpeed(&unk_A8E9C0) ) /*0x7967ae*/
    return 0; /*0x7967ae*/
  Event::Dispatch(); /*0x7967bb*/
  *(unsigned int *)&v9[1] = 455; /*0x7967e0*/
  if ( !Network::SendPacketThunk((int)&unk_A8E9C0, 0, (int)&v11, (int)&v9[1], (int)v10, (int)v9, 0) || v11 != 25 ) /*0x796803*/
    return 0; /*0x796803*/
  v3 = (HWND)Dialog::FindByHandle((Dialog *)0xC9); /*0x79680e*/
  if ( v3 ) /*0x796815*/
  {
    DlgItem = GetDlgItem(v3, 1128); /*0x79681f*/
    ShowWindow(DlgItem, 1); /*0x796826*/
  }
  if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x796833*/
    memcpy(&v10[0].__pad_0[12], g_WOL_UserList.nextObject, 0x6Cu); /*0x796844*/
  *(unsigned int *)&v10[0].__pad_0[44] = 0; /*0x79684a*/
  Network::SyncPlayerList(v8); /*0x796852*/
  if ( !((Network *)((Network *)&unk_A8E9C0))->Send((int)&v11, (int)&v9[1], (int)v10, (int)v9) ) /*0x796873*/
    return 0; /*0x796873*/
  if ( v11 != 25 ) /*0x796883*/
    return 0; /*0x796883*/
  if ( !(uint8_t)NetworkID::Compare(v10->__pad_000.__pad_0, (int)&stru_A8BB1C) ) /*0x79688e*/
    return 0; /*0x79688e*/
  if ( v9[0] != 0xAA04 ) /*0x79689e*/
    return 0; /*0x79689e*/
  v5 = 0; /*0x7968a6*/
  if ( g_WOL_UserList.owningHouseIndex <= 0 ) /*0x7968aa*/
    return 0; /*0x7968aa*/
  for ( i = g_WOL_UserList.nextObject; ; i = &i->HouseClass_6C ) /*0x7968ac*/
  {
    if ( v5 >= 0 && v5 < g_WOL_UserList.owningHouseIndex ) /*0x7968b8*/
      memcpy(&g_WebBrowserConfig.occupant, i, 0x6Cu); /*0x7968c6*/
    if ( (g_WebBrowserConfig.occupant & 1) != 0 ) /*0x7968cf*/
      break; /*0x7968cf*/
    if ( ++v5 >= g_WOL_UserList.owningHouseIndex ) /*0x7968d7*/
      return 0; /*0x7968d7*/
  }
  if ( &g_WebBrowserConfig == (ObjectClass *)-36 || _strcmpi(v12, (char *)&g_WebBrowserConfig.ambientSoundController[3]) ) /*0x7968fb*/
    return 0; /*0x7968e4*/
  Debug::Log(); /*0x79690c*/
  Network::SetConnectionParams(&unk_A8E9C0, 50, -1, 5000, 1); /*0x796924*/
  byte_B77E2C = 1; /*0x796929*/
  ExchangeMultiplayerGameInfo(); /*0x796930*/
  byte_B77E2C = 0; /*0x79693a*/
  Network::SetConnectionParams(&unk_A8E9C0, 30, -1, 600, 1); /*0x79694c*/
  return 1; /*0x7968d9*/
}
}
// 0x796B90
namespace gamemd {
CampaignScore * * WOL_LobbyDlgProc(HWND hWnd, LONG, int a3, HWND a4)
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
    SetWindowLongA(hWnd, 8, *((unsigned int *)a4 + 1)); /*0x796bb3*/
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
      if ( (uint16_t)v7 == 1 ) /*0x796d2e*/
      {
        v14 = 0; /*0x796da1*/
        DlgItem = GetDlgItem(v5, 1008); /*0x796da4*/
        v16 = SendMessageA(DlgItem, 0x188u, 0, 0); /*0x796dad*/
        if ( v16 != -1 ) /*0x796db2*/
          v14 = SendMessageA(DlgItem, 0x199u, v16, 0); /*0x796dbe*/
        (*(void (**)(LONG, HWND, LRESULT))(*(unsigned int *)a2 + 4))(a2, v5, v14); /*0x796dc8*/
      }
      else
      {
        if ( (uint16_t)v7 == 2 ) /*0x796d31*/
        {
          (*(void (**)(LONG, HWND, unsigned int))(*(unsigned int *)WindowLongA + 4))(WindowLongA, v5, 0); /*0x796d83*/
          return 0; /*0x796d8c*/
        }
        if ( (uint16_t)v7 == 1008 && (*(((unsigned short *)&(v7)) + 1)) == 1 ) /*0x796d45*/
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
    (*(void (__stdcall **)(LPVOID, HWND *))(*(unsigned int *)ppv + 208))(ppv, &hWnd); /*0x796c7f*/
    if ( (int)hWnd <= 0 ) /*0x796c8b*/
      return 0; /*0x796dcb*/
    v10 = GetDlgItem(v5, 1008); /*0x796ca3*/
    for ( i = (int)hWnd - 1; i >= 0; --i ) /*0x796cae*/
    {
      FormatLocaleStringWOL((wchar_t **)&a2, i); /*0x796cb6*/
      ((WideString *)((wchar_t **)&a2))->GetOrEmpty(); /*0x796cbf*/
      Debug::Log(); /*0x796cca*/
      v17 = ((WideString *)((wchar_t **)&a2))->GetOrEmpty(); /*0x796ce0*/
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
// 0x7970D0
namespace gamemd {
AbstractClass * * NetworkGame_Init()
{
  int i; // esi
  int v2; // esi
  TagClass **p_attachedTag; // ecx
  int v4; // edx
  unsigned int v5; // ecx
  Game *v7; // [esp+0h] [ebp-43Ch]
  Game *v8; // [esp+0h] [ebp-43Ch]
  Game *v9; // [esp+0h] [ebp-43Ch]
  Game *v10; // [esp+0h] [ebp-43Ch]
  ObjectClass *v11; // [esp+0h] [ebp-43Ch]
  Game *v12; // [esp+0h] [ebp-43Ch]
  char v13; // [esp+13h] [ebp-429h]
  DWORD nSize; // [esp+14h] [ebp-428h] BYREF
  char v15[16]; // [esp+18h] [ebp-424h] BYREF
  int v16; // [esp+28h] [ebp-414h]
  int v17; // [esp+2Ch] [ebp-410h]
  int v18; // [esp+30h] [ebp-40Ch]
  int v19; // [esp+34h] [ebp-408h]
  int v20; // [esp+38h] [ebp-404h] BYREF
  int v21[2]; // [esp+3Ch] [ebp-400h] BYREF
  CHAR Buffer[1016]; // [esp+44h] [ebp-3F8h] BYREF

  *(unsigned int *)&DataGlobal_B779D4 = 0; /*0x7970e6*/
  *(unsigned int *)dword_B77D6C = g_NetworkRematchState; /*0x7970ec*/
  *(unsigned int *)DataGlobal_B779C4 = 0; /*0x7970f1*/
  strcpy((char *)&g_WebBrowserConfig.location[2], ((String *)((String *)&g_WebBrowser))->GetOrEmpty()); /*0x797115*/
  PtrVector::Destroy(&stru_A8DA74); /*0x797123*/
  nSize = 1015; /*0x797132*/
  GetComputerNameA(Buffer, &nSize); /*0x79713a*/
  v13 = 0; /*0x79714a*/
  if ( _strcmpi(Buffer, aSteveT3) ) /*0x79714f*/
  {
    if ( _strcmpi(Buffer, aSteveT2) ) /*0x79717f*/
    {
      Game::CreateAIPlayer(v7); /*0x797197*/
      Game::CreateAIPlayer_Potato(v12); /*0x79719c*/
    }
    else
    {
      Game::CreateAIPlayer_Potato(v7); /*0x79718b*/
      Game::CreateAIPlayer(v10); /*0x797190*/
    }
    Network_Init_796FC0(v11); /*0x7971a1*/
  }
  else
  {
    Network_Init_796FC0((ObjectClass *)v7); /*0x797160*/
    Game::CreateAIPlayer(v8); /*0x797165*/
    Game::CreateAIPlayer_Potato(v9); /*0x79716a*/
    v13 = 1; /*0x79716f*/
  }
  (*(void (**)(unsigned int))(**(unsigned int **)&stru_887598.isAliveFlag + 48))(*(unsigned int *)&stru_887598.isAliveFlag); /*0x7971ae*/
  strcpy(v15, "xxx.xxx.xxx.xxx"); /*0x7971c8*/
  v16 = 0; /*0x7971d1*/
  v17 = 0; /*0x7971de*/
  v18 = 0; /*0x7971e4*/
  v19 = 0; /*0x7971ec*/
  for ( i = 1; i < dword_A8DA84; ++i ) /*0x7971f7*/
  {
    ((Network *)((Network *)(dword_A8DA78[i] + 40)))->CopyAddress(&v20, (int)v21); /*0x79720e*/
    (*(void (**)(unsigned int, char *, unsigned int))(**(unsigned int **)&stru_887598.isAliveFlag + 44))( /*0x797221*/
      *(unsigned int *)&stru_887598.isAliveFlag,
      v15,
      0);
  }
  g_NetworkLobbyState = 2; /*0x79723f*/
  Debug::Log(); /*0x797245*/
  BulkCharToWide(word_A8E258, (uint8_t *)aPotatotoo, -1); /*0x797259*/
  dword_A8E2AC = -1; /*0x797267*/
  dword_A8B3AC = 0; /*0x797271*/
  *(unsigned int *)&((unsigned int *)&stru_A8EB00)[432] = 1; /*0x797276*/
  g_RulesInitConfig = 10; /*0x79727c*/
  *(unsigned int *)&g_Rules_MultiEngineer = 10; /*0x797282*/
  *(unsigned int *)&g_Rules_Bases = 10000; /*0x797288*/
  byte_A8B31F = 0; /*0x797292*/
  BridgeDestruction = 1; /*0x797297*/
  Crates = 1; /*0x79729d*/
  dword_A8B320 = 1; /*0x7972a3*/
  byte_A8B31C = 1; /*0x7972a9*/
  byte_A8B31D = 0; /*0x7972af*/
  Bases = 1; /*0x7972b4*/
  byte_A8B31E = 0; /*0x7972ba*/
  *(unsigned int *)&g_Rules_AlliesAllowed = 0; /*0x7972bf*/
  *(unsigned int *)&DataGlobal_A8B278 = 0; /*0x7972c4*/
  ShortGame = 1; /*0x7972c9*/
  SWAllowed = 1; /*0x7972cf*/
  g_Rules_ShortGame = 0; /*0x7972d5*/
  MultiEngineer = 1; /*0x7972da*/
  *(unsigned int *)&g_GameRulesOptions = 1; /*0x7972e0*/
  *(unsigned int *)&g_Rules_EngineerCount = 0; /*0x7972e6*/
  LoadScenarioClassByIndex(1); /*0x7972eb*/
  *(unsigned int *)&g_Rules_EngineerCount = 2; /*0x7972fb*/
  stru_A8EB00.vfptr[24] = 2; /*0x797301*/
  dword_A8B230[130].vfptr3 = *(void **)&g_GameRulesOptions; /*0x797307*/
  dword_A8B554 = 5; /*0x797315*/
  switch ( *(unsigned int *)&g_Rules_EngineerCount ) /*0x797325*/
  {
    case 0: /*0x797325*/
      dword_A8B550 = (wchar_t *)40; /*0x79732c*/
      dword_A8B570 = 60; /*0x797332*/
      dword_A8B554 = 10; /*0x79733c*/
      break; /*0x797342*/
    case 1: /*0x797325*/
      dword_A8B550 = (wchar_t *)40; /*0x797344*/
      dword_A8B570 = 45; /*0x79734a*/
      dword_A8B554 = 10; /*0x797354*/
      break; /*0x79735a*/
    case 2: /*0x797325*/
      dword_A8B550 = (wchar_t *)30; /*0x797361*/
      dword_A8B570 = 30; /*0x797366*/
      break; /*0x79736b*/
    case 3: /*0x797325*/
      dword_A8B550 = (wchar_t *)20; /*0x797372*/
      dword_A8B570 = 20; /*0x797377*/
      break; /*0x79737c*/
    case 4: /*0x797325*/
      dword_A8B550 = (wchar_t *)20; /*0x79737e*/
      dword_A8B570 = 15; /*0x797388*/
      break; /*0x797392*/
    case 5: /*0x797325*/
      dword_A8B550 = (wchar_t *)20; /*0x797394*/
      dword_A8B570 = 12; /*0x79739e*/
      break; /*0x7973a8*/
    default:
      dword_A8B550 = (wchar_t *)10; /*0x7973aa*/
      dword_A8B570 = 10; /*0x7973b0*/
      break; /*0x7973b0*/
  }
  dword_A8B56C = 0; /*0x7973be*/
  if ( !v13 ) /*0x7973c4*/
    dword_A8B570 = 0; /*0x7973c6*/
  v2 = 0; /*0x7973d1*/
  if ( dword_A8DA84 > 0 ) /*0x7973d5*/
  {
    p_attachedTag = &g_WOL_UserList.attachedTag; /*0x7973d7*/
    v4 = dword_A8DA84; /*0x7973dc*/
    do /*0x7973ea*/
    {
      if ( (int)*p_attachedTag > v2 ) /*0x7973e2*/
        v2 = (int)*p_attachedTag; /*0x7973e4*/
      ++p_attachedTag; /*0x7973e6*/
      --v4; /*0x7973e9*/
    }
    while ( v4 ); /*0x7973ea*/
  }
  dword_A8DB9C = (wchar_t *)1; /*0x7973ee*/
  if ( !v2 || v2 == 1000 ) /*0x797400*/
  {
    dword_A8B570 = 0; /*0x7974ea*/
    Debug::Log(); /*0x7974f0*/
  }
  else
  {
    Debug::Log(); /*0x79740c*/
    if ( v2 <= 1000 ) /*0x79741a*/
    {
      if ( v2 < 600 ) /*0x79742a*/
        dword_A8DB9C = (wchar_t *)1; /*0x79742c*/
    }
    else
    {
      dword_A8DB9C = (wchar_t *)2; /*0x79741c*/
    }
    Network::SetConnectionParams( /*0x79747b*/
      &unk_A8E9C0,
      120 * (60 * v2 / 1000) / 100 + 60 * v2 / 1000,
      -1,
      8 * (120 * (60 * v2 / 1000) / 100 + 60 * v2 / 1000),
      1);
    if ( v13 ) /*0x797486*/
    {
      IPXManagerClass::sendPacket(&unk_A8E9C0, 5, -1, 120); /*0x797493*/
      switch ( (unsigned int)dword_A8DB9C ) /*0x7974a2*/
      {
        case 0u: /*0x7974a2*/
        case 1u: /*0x7974a2*/
          v5 = (unsigned int)dword_A8B550; /*0x7974a9*/
          break; /*0x7974af*/
        case 2u: /*0x7974a2*/
          v5 = (unsigned int)dword_A8B550 + ((unsigned int)dword_A8B550 >> 1); /*0x7974ba*/
          break; /*0x7974bc*/
        case 3u: /*0x7974a2*/
          v5 = 2 * (unsigned int)dword_A8B550; /*0x7974c3*/
          break; /*0x7974c6*/
        default:
          v5 = dword_A8B56C; /*0x7974c8*/
          break; /*0x7974c8*/
      }
      dword_A8B56C = 10 * (v5 / 0xA); /*0x7974dd*/
    }
  }
  Debug::Log(); /*0x797504*/
  Debug::Log(); /*0x797515*/
  Debug::Log(); /*0x797526*/
  Debug::Log(); /*0x797536*/
  dword_A8B568 = dword_A8B550; /*0x797543*/
  memset(&unk_A8B574, 0, 0x340u); /*0x797556*/
  *(unsigned int *)&hostshort = 1234; /*0x79755e*/
  stru_A8EB00.vfptr[24] = *(unsigned int *)&g_Rules_EngineerCount; /*0x797568*/
  *(unsigned int *)&dword_841F34 = 1235; /*0x79756e*/
  *(unsigned int *)&dword_841F38 = 1236; /*0x797578*/
  *(unsigned int *)&dword_841F3C = 1237; /*0x797582*/
  *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] = 0; /*0x79758c*/
  byte_B77A04 = 0; /*0x797591*/
  byte_B76568[0] = 0; /*0x797596*/
  return Scenario::PreGameInit(); /*0x7975a0*/
}
}
// 0x797640
namespace gamemd {
int sub_797640(int a1)
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
  (*(void (__stdcall **)(LPVOID, int, int, char *, char *, int))(*(unsigned int *)ppv + 16))( /*0x79768b*/
    ppv,
    a1 | dword_B77E50,
    65537,
    aTibsun,
    aTibpass99,
    30);
  (*(void (__stdcall **)(LPVOID, int))(*(unsigned int *)ppv + 140))(ppv, g_NetworkRematchState); /*0x79769d*/
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
    dword_B77DC8 = 0; /*0x7977a6*/
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
// 0x797800
namespace gamemd {
ObjectClass * * WOL_FetchData()
{
  wchar_t *StringCSF; // eax
  HANDLE *v2; // esi
  int v3; // esi
  wchar_t *v5; // eax
  int v6; // ebx
  TechnoTypeClass *v7; // ecx
  DWORD v8; // esi
  HWND v9; // eax
  HWND v10; // eax
  HWND DlgItem; // eax
  wchar_t *v12; // eax
  HWND v13; // eax
  HWND v14; // eax
  wchar_t *v15; // eax
  HWND v16; // eax
  HWND Current; // eax
  int v18; // esi
  HWND v19; // eax
  HWND v20; // eax
  TechnoTypeClass *v21; // ecx
  DWORD i; // esi
  HWND v23; // eax
  HWND v24; // eax
  wchar_t *v25; // eax
  HWND v26; // eax
  HWND v27; // eax
  HWND v28; // eax
  HWND v29; // eax
  HWND v30; // eax
  HWND v31; // eax
  char *v32; // [esp-4h] [ebp-18h]
  void *v33; // [esp+10h] [ebp-4h] BYREF

  if ( !byte_B76A2C ) /*0x79780c*/
  {
    v32 = byte_B76A2C; /*0x79780e*/
    StringCSF = GetStringCSF(g_Str_TXT_WDT_NET_ERR, 0, g_Str_File_wonline_cpp, 24435); /*0x797819*/
  LABEL_7:
    ShowDialogConfirm(StringCSF, 0, (uint8_t (*)(void))GameLoop::Thunk, (char)v32); /*0x797894*/
    return 0; /*0x7978a4*/
  }
  v2 = &Handles; /*0x79781b*/
  do /*0x797832*/
    ResetEvent(*v2++); /*0x797823*/
  while ( (int)v2 < (int)g_WOL_RequestObject ); /*0x797832*/
  v3 = (*(int (__stdcall **)(LPVOID, char *, int, int))(*(unsigned int *)g_UIPointerTable + 44))( /*0x797853*/
         g_UIPointerTable,
         &DataGlobal_B73B34,
         stru_B76AC4.ambientSoundController[3],
         3);
  Debug::Log(); /*0x797860*/
  Debug::Log(); /*0x79786a*/
  if ( v3 ) /*0x797876*/
  {
    (*((unsigned char *)&(v32))) = 0; /*0x797878*/
    StringCSF = GetStringCSF(g_Str_TXT_WDT_NET_ERR, 0, g_Str_File_wonline_cpp, 24451); /*0x79788f*/
    goto LABEL_7; /*0x79788f*/
  }
  v5 = GetStringCSF(aTxtFetchingWdt, 0, g_Str_File_wonline_cpp, 24455); /*0x7978b6*/
  ((WideString *)((wchar_t **)&v33))->Assign(v5); /*0x7978c0*/
  ShowUIMessage(16, (wchar_t **)&v33, 0); /*0x7978cf*/
  DeleteAndZero::Alt((DeleteAndZero *)&v33); /*0x7978d8*/
  do /*0x797949*/
  {
    v6 = 30000; /*0x7978ed*/
    v8 = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x7978f4*/
    if ( v8 == 258 ) /*0x7978fc*/
    {
      while ( 1 ) /*0x7978fe*/
      {
        v6 -= 100; /*0x7978fe*/
        if ( v6 <= 0 ) /*0x797903*/
          break; /*0x797903*/
        Game::ProcessIdle(v7); /*0x797909*/
        v8 = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x79791a*/
        if ( v8 != 258 ) /*0x797922*/
          goto LABEL_12; /*0x797922*/
      }
  LABEL_25:
      v15 = GetStringCSF(g_Str_TXT_WDT_NET_ERR, 0, g_Str_File_wonline_cpp, 24480); /*0x797a00*/
      ShowDialogConfirm(v15, 0, (uint8_t (*)(void))GameLoop::Thunk, 0); /*0x797a20*/
      v16 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x797a2a*/
      if ( v16 ) /*0x797a31*/
      {
        g_WOL_ChannelList = 0; /*0x797a37*/
        CloseDialog(v16, 0); /*0x797a3d*/
      }
      Current = (HWND)Dialog::GetCurrent(); /*0x797a42*/
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
    ResetEvent(*(&Handles + v8)); /*0x797924*/
    switch ( v8 ) /*0x797936*/
    {
      case 0u: /*0x797936*/
        v9 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x797956*/
        if ( v9 ) /*0x79795d*/
        {
          g_WOL_ChannelList = 0; /*0x797963*/
          CloseDialog(v9, 0); /*0x797969*/
        }
        v10 = (HWND)Dialog::GetCurrent(); /*0x79796e*/
        DlgItem = GetDlgItem(v10, 1344); /*0x797979*/
        if ( DlgItem ) /*0x797981*/
          goto LABEL_43; /*0x797981*/
        return 0; /*0x797981*/
      case 5u: /*0x797936*/
        v12 = GetStringCSF(g_Str_TXT_WDT_NET_ERR, 0, g_Str_File_wonline_cpp, 24474); /*0x7979ad*/
        ShowDialogConfirm(v12, 0, (uint8_t (*)(void))GameLoop::Thunk, 0); /*0x7979b6*/
        v13 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x7979c0*/
        if ( v13 ) /*0x7979c7*/
        {
          g_WOL_ChannelList = 0; /*0x7979cd*/
          CloseDialog(v13, 0); /*0x7979d3*/
        }
        v14 = (HWND)Dialog::GetCurrent(); /*0x7979d8*/
        DlgItem = GetDlgItem(v14, 1344); /*0x7979e3*/
        if ( DlgItem ) /*0x7979eb*/
          goto LABEL_43; /*0x7979eb*/
        return 0; /*0x7979eb*/
      case 0x12u: /*0x797936*/
        goto LABEL_25; /*0x797940*/
    }
  }
  while ( v8 != 11 ); /*0x797949*/
  v18 = (*(int (__stdcall **)(LPVOID, char *, int, int))(*(unsigned int *)g_UIPointerTable + 44))( /*0x797a83*/
          g_UIPointerTable,
          &DataGlobal_B73B34,
          stru_B76AC4.ambientSoundController[3],
          5);
  Debug::Log(); /*0x797a8a*/
  if ( v18 ) /*0x797a94*/
  {
    v19 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x797a9b*/
    if ( v19 ) /*0x797aa2*/
    {
      g_WOL_ChannelList = 0; /*0x797aa8*/
      CloseDialog(v19, 0); /*0x797aae*/
    }
    v20 = (HWND)Dialog::GetCurrent(); /*0x797ab3*/
    DlgItem = GetDlgItem(v20, 1344); /*0x797abe*/
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
        Game::ProcessIdle(v21); /*0x797af1*/
      }
      ResetEvent(*(&Handles + i)); /*0x797b14*/
      if ( !i ) /*0x797b18*/
        break; /*0x797b18*/
      if ( i == 5 ) /*0x797b1d*/
      {
        v25 = GetStringCSF(g_Str_TXT_WDT_NET_ERR, 0, g_Str_File_wonline_cpp, 24507); /*0x797b82*/
        ShowDialogConfirm(v25, 0, (uint8_t (*)(void))GameLoop::Thunk, 0); /*0x797b8b*/
        v26 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x797b95*/
        if ( v26 ) /*0x797b9c*/
        {
          g_WOL_ChannelList = 0; /*0x797ba2*/
          CloseDialog(v26, 0); /*0x797ba8*/
        }
        v27 = (HWND)Dialog::GetCurrent(); /*0x797bad*/
        v28 = GetDlgItem(v27, 1344); /*0x797bb8*/
        if ( v28 ) /*0x797bc0*/
          SetFocus(v28); /*0x797bc3*/
        return 0; /*0x797bc3*/
      }
      if ( i == 11 ) /*0x797b22*/
      {
        v29 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x797bd6*/
        if ( v29 ) /*0x797bdd*/
        {
          g_WOL_ChannelList = 0; /*0x797be3*/
          CloseDialog(v29, 0); /*0x797be9*/
        }
        v30 = (HWND)Dialog::GetCurrent(); /*0x797bee*/
        v31 = GetDlgItem(v30, 1344); /*0x797bf9*/
        if ( v31 ) /*0x797c01*/
          SetFocus(v31); /*0x797c04*/
        return 1; /*0x797c0d*/
      }
    }
    v23 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x797b2f*/
    if ( v23 ) /*0x797b36*/
    {
      g_WOL_ChannelList = 0; /*0x797b3c*/
      CloseDialog(v23, 0); /*0x797b42*/
    }
    v24 = (HWND)Dialog::GetCurrent(); /*0x797b47*/
    DlgItem = GetDlgItem(v24, 1344); /*0x797b52*/
    if ( DlgItem ) /*0x797b5a*/
      goto LABEL_43; /*0x797b5a*/
  }
  return 0; /*0x79789f*/
}
}
// 0x797C20
namespace gamemd {
AbstractClass * * WOL_InitVersionStrings()
{
  char result; // al
  int *p_abstractFlags; // esi
  int v3; // edi
  int i; // esi
  int v5; // esi
  int v6; // esi
  int v7; // esi
  int v8; // esi
  int v9; // esi
  int v10; // esi
  int v11; // esi
  int v12; // esi
  String *v13; // ecx
  int lastLayer; // esi
  String *v15; // ecx
  int v16; // esi
  String *v17; // ecx

  result = byte_B77E10; /*0x797c20*/
  if ( !byte_B77E10 ) /*0x797c2a*/
  {
    if ( (stru_B76900.customSound_controller[1] & 1) == 0 ) /*0x797c38*/
    {
      (*((unsigned char *)&(stru_B76900.customSound_controller[1]))) |= 1u; /*0x797c3d*/
      p_abstractFlags = &stru_B76900.abstractFlags; /*0x797c42*/
      v3 = 16; /*0x797c47*/
      do /*0x797c57*/
      {
        unknown_libname_73(p_abstractFlags++); /*0x797c4e*/
        --v3; /*0x797c56*/
      }
      while ( v3 ); /*0x797c57*/
      atexit(sub_798120); /*0x797c5e*/
    }
    String::Assign_Bool((String *)&stru_B76900.abstractFlags, a01W024V01); /*0x797c71*/
    String::Assign_Bool((String *)&stru_B76900.nextArrayIndex, a01W026V01); /*0x797c80*/
    String::Assign_Bool((String *)&stru_B76900.referenceCount, a01W028V01); /*0x797c8f*/
    String::Assign_Bool((String *)&stru_B76900.NeedsSaveOrLink, a01W018V01); /*0x797c9e*/
    String::Assign_Bool((String *)&stru_B76900.occupant, a01W020V01); /*0x797cad*/
    String::Assign_Bool((String *)&stru_B76900.owningHouseIndex, a01W022V01); /*0x797cbc*/
    String::Assign_Bool((String *)&stru_B76900.fallRate, a00W022V00); /*0x797ccb*/
    String::Assign_Bool((String *)&stru_B76900.nextObject, a00W024V00); /*0x797cda*/
    String::Assign_Bool((String *)&stru_B76900.attachedTag, a00W026V00); /*0x797ce9*/
    String::Assign_Bool((String *)&stru_B76900.attachedBomb, a00W017V00); /*0x797cf8*/
    String::Assign_Bool((String *)stru_B76900.ambientSoundController, a00W018V00); /*0x797d07*/
    String::Assign_Bool((String *)&stru_B76900.ambientSoundController[1], a00W020V00); /*0x797d16*/
    String::Assign_Bool((String *)&stru_B76900.ambientSoundController[2], a01W032V01); /*0x797d25*/
    String::Assign_Bool((String *)&stru_B76900.ambientSoundController[3], a01W030V01); /*0x797d34*/
    String::Assign_Bool((String *)&stru_B76900.ambientSoundController[4], a00W031V00); /*0x797d43*/
    String::Assign_Bool((String *)stru_B76900.customSound_controller, a00W029V00); /*0x797d52*/
    for ( i = 0; i < *(int *)&DataGlobal_B73BD8; ++i ) /*0x797d60*/
      Object::DtorWithDelete((Object *)(*(unsigned int *)&DataGlobal_B73BE0 + 4 * i), 0); /*0x797d6b*/
    v5 = 0; /*0x797d7f*/
    for ( *(unsigned int *)&DataGlobal_B73BD8 = 0; v5 < *(unsigned int *)&stru_B736F8; ++v5 ) /*0x797d89*/
      Object::DtorWithDelete((Object *)((char *)dword_B73700 + 4 * v5), 0); /*0x797d95*/
    v6 = 0; /*0x797da9*/
    for ( stru_B736F8 = 0; v6 < stru_B76AC4.ambientSoundController[0]; ++v6 ) /*0x797db3*/
      Object::DtorWithDelete((Object *)(stru_B76AC4.ambientSoundController[2] + 4 * v6), 0); /*0x797dbf*/
    v7 = 0; /*0x797dd3*/
    for ( stru_B76AC4.ambientSoundController[0] = 0; v7 < *(int *)DataGlobal_B76510; ++v7 ) /*0x797ddd*/
      Object::DtorWithDelete((Object *)(DataGlobal_B76518 + 4 * v7), 0); /*0x797de8*/
    v8 = 0; /*0x797dfc*/
    for ( *(unsigned int *)DataGlobal_B76510 = 0; v8 < (int)DataGlobal_B73AE8; ++v8 ) /*0x797e06*/
      Object::DtorWithDelete((Object *)(*(unsigned int *)DataGlobal_B73AF0 + 4 * v8), 0); /*0x797e12*/
    v9 = 0; /*0x797e26*/
    for ( DataGlobal_B73AE8 = 0; v9 < g_WebBrowserConfig.lastLayer; ++v9 ) /*0x797e30*/
      Object::DtorWithDelete((Object *)(g_WebBrowserConfig.location[0] + 4 * v9), 0); /*0x797e3c*/
    v10 = 0; /*0x797e50*/
    for ( g_WebBrowserConfig.lastLayer = 0; v10 < *(int *)DataGlobal_B73708; ++v10 ) /*0x797e5a*/
      Object::DtorWithDelete((Object *)(DataGlobal_B73710 + 4 * v10), 0); /*0x797e65*/
    v11 = 0; /*0x797e79*/
    for ( *(unsigned int *)DataGlobal_B73708 = 0; v11 < *(int *)DataGlobal_B76188; ++v11 ) /*0x797e83*/
      Object::DtorWithDelete((Object *)(DataGlobal_B76190 + 4 * v11), 0); /*0x797e8f*/
    *(unsigned int *)DataGlobal_B76188 = 0; /*0x797ea9*/
    StringVector::Insert((StringVector *)&DataGlobal_B73BD8, (const char **)&stru_B76900.abstractFlags, 0); /*0x797eaf*/
    StringVector::Insert((StringVector *)&DataGlobal_B73BD8, (const char **)&stru_B76900.nextArrayIndex, 0); /*0x797ebf*/
    StringVector::Insert((StringVector *)&DataGlobal_B73BD8, (const char **)&stru_B76900.referenceCount, 0); /*0x797ecf*/
    StringVector::Insert( /*0x797edf*/
      (StringVector *)stru_B76AC4.ambientSoundController,
      (const char **)&stru_B76900.NeedsSaveOrLink,
      0);
    StringVector::Insert((StringVector *)stru_B76AC4.ambientSoundController, (const char **)&stru_B76900.occupant, 0); /*0x797eef*/
    StringVector::Insert( /*0x797eff*/
      (StringVector *)stru_B76AC4.ambientSoundController,
      (const char **)&stru_B76900.owningHouseIndex,
      0);
    StringVector::Insert((StringVector *)&stru_B736F8, (const char **)&stru_B76900.fallRate, 0); /*0x797f0f*/
    StringVector::Insert((StringVector *)&stru_B736F8, (const char **)&stru_B76900.nextObject, 0); /*0x797f1f*/
    StringVector::Insert((StringVector *)&stru_B736F8, (const char **)&stru_B76900.attachedTag, 0); /*0x797f2f*/
    StringVector::Insert(&stru_B76510, (const char **)&stru_B76900.attachedBomb, 0); /*0x797f3f*/
    StringVector::Insert(&stru_B76510, (const char **)stru_B76900.ambientSoundController, 0); /*0x797f4f*/
    StringVector::Insert(&stru_B76510, (const char **)&stru_B76900.ambientSoundController[1], 0); /*0x797f5f*/
    StringVector::Insert( /*0x797f6f*/
      (StringVector *)&DataGlobal_B73AE8,
      (const char **)&stru_B76900.ambientSoundController[2],
      0);
    v12 = 0; /*0x797f79*/
    if ( *(int *)DataGlobal_B73708 < 0 ) /*0x797f7d*/
      v12 = *(unsigned int *)DataGlobal_B73708; /*0x797f7f*/
    if ( v12 >= *(int *)&DataGlobal_B7370C ) /*0x797f87*/
      DynamicVector::EnsureCapacity(&stru_B73708); /*0x797f8e*/
    if ( *(int *)DataGlobal_B73708 >= *(int *)&DataGlobal_B7370C ) /*0x797fa0*/
      DynamicVector::EnsureCapacity(&stru_B73708); /*0x797fa7*/
    if ( v12 < *(int *)DataGlobal_B73708 ) /*0x797fb3*/
      memcpy( /*0x797fd0*/
        (void *)(DataGlobal_B73710 + 4 * v12 + 4),
        (const void *)(DataGlobal_B73710 + 4 * v12),
        4 * (*(unsigned int *)DataGlobal_B73708 + 0x3FFFFFFF * v12));
    v13 = (String *)(DataGlobal_B73710 + 4 * v12); /*0x797fde*/
    if ( v13 ) /*0x797fe3*/
      String::AssignFromPtr(v13, (const char **)&stru_B76900.ambientSoundController[3]); /*0x797fea*/
    lastLayer = 0; /*0x797ffb*/
    ++*(unsigned int *)DataGlobal_B73708; /*0x797fff*/
    if ( g_WebBrowserConfig.lastLayer < 0 ) /*0x798005*/
      lastLayer = g_WebBrowserConfig.lastLayer; /*0x798007*/
    if ( lastLayer >= *(int *)&g_WebBrowserConfig.isInLogic ) /*0x79800f*/
      DynamicVector::EnsureCapacity((DynamicVector *)&g_WebBrowserConfig.lastLayer); /*0x798016*/
    if ( g_WebBrowserConfig.lastLayer >= *(int *)&g_WebBrowserConfig.isInLogic ) /*0x798028*/
      DynamicVector::EnsureCapacity((DynamicVector *)&g_WebBrowserConfig.lastLayer); /*0x79802f*/
    if ( lastLayer < g_WebBrowserConfig.lastLayer ) /*0x79803b*/
      memcpy( /*0x798058*/
        (void *)(g_WebBrowserConfig.location[0] + 4 * lastLayer + 4),
        (const void *)(g_WebBrowserConfig.location[0] + 4 * lastLayer),
        4 * (g_WebBrowserConfig.lastLayer + 0x3FFFFFFF * lastLayer));
    v15 = (String *)(g_WebBrowserConfig.location[0] + 4 * lastLayer); /*0x798066*/
    if ( v15 ) /*0x79806b*/
      String::AssignFromPtr(v15, (const char **)&stru_B76900.ambientSoundController[4]); /*0x798072*/
    v16 = 0; /*0x798083*/
    ++g_WebBrowserConfig.lastLayer; /*0x798087*/
    if ( *(int *)DataGlobal_B76188 < 0 ) /*0x79808d*/
      v16 = *(unsigned int *)DataGlobal_B76188; /*0x79808f*/
    if ( v16 >= *(int *)&DataGlobal_B7618C ) /*0x798097*/
      DynamicVector::EnsureCapacity(&stru_B76188); /*0x79809e*/
    if ( *(int *)DataGlobal_B76188 >= *(int *)&DataGlobal_B7618C ) /*0x7980b0*/
      DynamicVector::EnsureCapacity(&stru_B76188); /*0x7980b7*/
    if ( v16 < *(int *)DataGlobal_B76188 ) /*0x7980c3*/
      memcpy( /*0x7980e0*/
        (void *)(DataGlobal_B76190 + 4 * v16 + 4),
        (const void *)(DataGlobal_B76190 + 4 * v16),
        4 * (*(unsigned int *)DataGlobal_B76188 + 0x3FFFFFFF * v16));
    v17 = (String *)(DataGlobal_B76190 + 4 * v16); /*0x7980ee*/
    if ( v17 ) /*0x7980f4*/
      String::AssignFromPtr(v17, (const char **)stru_B76900.customSound_controller); /*0x7980fb*/
    byte_B77E10 = 1; /*0x798105*/
    result = DataGlobal_B76188 + 1; /*0x79810c*/
    ++*(unsigned int *)DataGlobal_B76188; /*0x79810d*/
  }
  return result; /*0x798112*/
}
}
// 0x7982D0
namespace gamemd {
int sub_7982D0(int a1, DWORD a2)
{
  int v3; // edi
  DWORD v4; // esi

  v3 = 1000 * a1; /*0x7982ef*/
  v4 = WaitForMultipleObjects(a2, &Handles, 0, 0x64u); /*0x7982f4*/
  if ( v4 == 258 ) /*0x7982fc*/
  {
    while ( 1 ) /*0x7982fe*/
    {
      v3 -= 100; /*0x7982fe*/
      if ( v3 <= 0 ) /*0x798303*/
        return 18; /*0x798338*/
      Game::ProcessIdle(); /*0x798305*/
      v4 = WaitForMultipleObjects(a2, &Handles, 0, 0x64u); /*0x798316*/
      if ( v4 != 258 ) /*0x79831e*/
        goto LABEL_4; /*0x79831e*/
    }
  }
  else
  {
  LABEL_4:
    ResetEvent(*(&Handles + v4)); /*0x798320*/
    return v4; /*0x79832e*/
  }
}
}
// 0x7983E0
namespace gamemd {
int Multiplayer_Setup2_DlgProc(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
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
    SetWindowLongA(hWnd, 8, *(unsigned int *)(a4 + 4)); /*0x798412*/
  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x798425*/
  if ( !result ) /*0x79842c*/
  {
    WindowLongA = GetWindowLongA(hWnd, 8); /*0x79843e*/
    if ( a2 > 0x2B ) /*0x798440*/
    {
      if ( a2 == 273 ) /*0x7984ac*/
      {
        if ( (uint16_t)a3 > 0x6E1u ) /*0x798723*/
        {
          switch ( (uint16_t)a3 ) /*0x798833*/
          {
            case 0x6E2u: /*0x798833*/
              dword_A8B244 = 5; /*0x798887*/
              dword_A8B248 = 0; /*0x798891*/
              (*(void (**)(LONG, HWND, int))(*(unsigned int *)WindowLongA + 4))(WindowLongA, hWnd, 1762); /*0x7988a3*/
              break;
            case 0x6E3u: /*0x798833*/
              dword_A8B244 = 3; /*0x798863*/
              (*(void (**)(LONG, HWND, int))(*(unsigned int *)WindowLongA + 4))(WindowLongA, hWnd, 1763); /*0x798875*/
              return 0; /*0x798884*/
            case 0x771u: /*0x798833*/
              dword_A8B244 = 2; /*0x79883f*/
              (*(void (**)(LONG, HWND, int))(*(unsigned int *)WindowLongA + 4))(WindowLongA, hWnd, 1905); /*0x798851*/
              return 0; /*0x798860*/
          }
        }
        else
        {
          switch ( (uint16_t)a3 ) /*0x798729*/
          {
            case 0x6E1u: /*0x798729*/
              dword_A8B244 = 4; /*0x79880a*/
              (*(void (**)(LONG, HWND, int))(*(unsigned int *)WindowLongA + 4))(WindowLongA, hWnd, 1761); /*0x79881c*/
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
              dword_A8B244 = 0; /*0x79876a*/
              (*(void (**)(LONG, HWND, int))(*(unsigned int *)WindowLongA + 4))(WindowLongA, hWnd, 1670); /*0x79877c*/
              return 0; /*0x79878b*/
            case 0x6E0u: /*0x798729*/
              dword_A8B244 = 1; /*0x798746*/
              (*(void (**)(LONG, HWND, int))(*(unsigned int *)WindowLongA + 4))(WindowLongA, hWnd, 1760); /*0x798758*/
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
// 0x7988C0
namespace gamemd {
int Multiplayer_GameMode_DlgProc(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
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
    SetWindowLongA(hWnd, 8, *(unsigned int *)(a4 + 4)); /*0x7988f2*/
  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x798905*/
  if ( !result ) /*0x79890c*/
  {
    WindowLongA = GetWindowLongA(hWnd, 8); /*0x79891e*/
    if ( a2 > 0x2B ) /*0x798920*/
    {
      if ( a2 == 273 ) /*0x79898c*/
      {
        if ( (uint16_t)a3 > 0x6E1u ) /*0x798c45*/
        {
          switch ( (uint16_t)a3 ) /*0x798d55*/
          {
            case 0x6E2u: /*0x798d55*/
              dword_A8B244 = 5; /*0x798dab*/
              dword_A8B248 = 0; /*0x798db5*/
              (*(void (**)(LONG, HWND, int))(*(unsigned int *)WindowLongA + 4))(WindowLongA, hWnd, 1762); /*0x798dc7*/
              break;
            case 0x6E4u: /*0x798d55*/
              dword_A8B244 = 6; /*0x798d87*/
              (*(void (**)(LONG, HWND, int))(*(unsigned int *)WindowLongA + 4))(WindowLongA, hWnd, 1764); /*0x798d99*/
              return 0; /*0x798da8*/
            case 0x771u: /*0x798d55*/
              dword_A8B244 = 2; /*0x798d63*/
              (*(void (**)(LONG, HWND, int))(*(unsigned int *)WindowLongA + 4))(WindowLongA, hWnd, 1905); /*0x798d75*/
              return 0; /*0x798d84*/
          }
        }
        else
        {
          switch ( (uint16_t)a3 ) /*0x798c4b*/
          {
            case 0x6E1u: /*0x798c4b*/
              dword_A8B244 = 4; /*0x798d2c*/
              (*(void (**)(LONG, HWND, int))(*(unsigned int *)WindowLongA + 4))(WindowLongA, hWnd, 1761); /*0x798d3e*/
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
              dword_A8B244 = 0; /*0x798c8c*/
              (*(void (**)(LONG, HWND, int))(*(unsigned int *)WindowLongA + 4))(WindowLongA, hWnd, 1670); /*0x798c9e*/
              return 0; /*0x798cad*/
            case 0x6E0u: /*0x798c4b*/
              dword_A8B244 = 1; /*0x798c68*/
              (*(void (**)(LONG, HWND, int))(*(unsigned int *)WindowLongA + 4))(WindowLongA, hWnd, 1760); /*0x798c7a*/
              return 0; /*0x798c89*/
          }
        }
      }
      else if ( a2 == 1175 ) /*0x798998*/
      {
        if ( String::Length((const char **)&dword_B73E40) ) /*0x7989a3*/
        {
          LoadPlayerProfile(&Type, (const char **)&dword_B73E40); /*0x7989b5*/
          if ( v35 ) /*0x7989c0*/
            FillPersonaInfoWOL(v35, hWnd, (char **)&dword_B73E40, (wchar_t **)1); /*0x7989ca*/
          Type = (DWORD)&vt_rc_ptr; /*0x7989d3*/
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
// 0x799080
namespace gamemd {
void MainLobbyDlgProcWOL(HWND hWnd, LPARAM lParam, ObjectClass)
{
  unsigned int v4; // ebx
  HWND v5; // ebp
  HWND v6; // esi
  unsigned int v7; // edi
  int result; // eax
  LONG WindowLongA; // eax
  HWND v10; // ebx
  LRESULT v11; // eax
  LPARAM v12; // ebp
  bool v13; // al
  BOOL v14; // eax
  HWND v15; // eax
  BOOL v16; // eax
  HWND v17; // eax
  LRESULT v18; // esi
  LRESULT v19; // eax
  LRESULT v20; // esi
  LRESULT v21; // eax
  LRESULT v22; // esi
  LRESULT v23; // eax
  char **v24; // eax
  bool v25; // bl
  LRESULT v26; // eax
  HWND v27; // edi
  LRESULT v28; // ebx
  char **v29; // eax
  char **v30; // eax
  LRESULT v31; // eax
  HWND v32; // eax
  HWND v33; // esi
  unsigned int v34; // ebx
  HWND DlgItem; // ebp
  wchar_t *String; // eax
  wchar_t *v37; // eax
  LRESULT v38; // edi
  wchar_t *v39; // eax
  LRESULT v40; // eax
  HWND v41; // eax
  int v42; // ecx
  HWND v43; // eax
  LRESULT v44; // eax
  BOOL v45; // ebp
  HWND v46; // eax
  HWND v47; // eax
  HWND v48; // eax
  HWND v49; // eax
  WPARAM v50; // [esp-8h] [ebp-50h]
  BOOL v51; // [esp-4h] [ebp-4Ch]
  BOOL v52; // [esp-4h] [ebp-4Ch]
  char **v53; // [esp-4h] [ebp-4Ch]
  void *v54; // [esp+10h] [ebp-38h] BYREF
  void *v55; // [esp+14h] [ebp-34h] BYREF
  void *v56; // [esp+18h] [ebp-30h] BYREF
  void *v57; // [esp+1Ch] [ebp-2Ch] BYREF
  int v58; // [esp+20h] [ebp-28h] BYREF
  void *v59; // [esp+24h] [ebp-24h] BYREF
  void *v60; // [esp+28h] [ebp-20h] BYREF
  void *v61; // [esp+2Ch] [ebp-1Ch] BYREF
  void *v62; // [esp+30h] [ebp-18h] BYREF
  void *v63; // [esp+34h] [ebp-14h] BYREF
  void **v64; // [esp+38h] [ebp-10h] BYREF
  int v65; // [esp+3Ch] [ebp-Ch]
  void **v66; // [esp+40h] [ebp-8h] BYREF
  int v67; // [esp+44h] [ebp-4h]

  v4 = lParam; /*0x799084*/
  v5 = a4; /*0x799089*/
  v6 = hWnd; /*0x79908e*/
  if ( lParam == 272 && a4 ) /*0x79909d*/
    SetWindowLongA(hWnd, 8, *((unsigned int *)a4 + 1)); /*0x7990a6*/
  v7 = a3; /*0x7990ac*/
  result = BaseDialogProc( (SkirmishDialog *)(v6), v4, a3, (unsigned int)v5); /*0x7990b6*/
  if ( !result ) /*0x7990bd*/
  {
    WindowLongA = GetWindowLongA(v6, 8); /*0x7990c6*/
    if ( v4 > 0x111 ) /*0x7990d2*/
    {
      v34 = v4 - 1175; /*0x7998e2*/
      if ( v34 ) /*0x7998e8*/
      {
        if ( v34 == 86 ) /*0x7998ed*/
        {
          ShowWindow(v6, 0); /*0x7998f6*/
          Dialog::InitWindow(v6, 1); /*0x7998ff*/
          return 0; /*0x79990d*/
        }
      }
      else
      {
        DlgItem = GetDlgItem(v6, 1576); /*0x79991c*/
        ((ListBox *)(DlgItem))->Clear(); /*0x799920*/
        SendMessageA( (HWND)(DlgItem), 0x141u, 9u, 0); /*0x799935*/
        String = (unsigned int)GetStringCSF( (wchar_t *)(aGuiDefault), 0, (const char *)(g_Str_File_wonline_cpp), 25247); /*0x799948*/
        ((WideString *)((wchar_t **)&v56))->Assign( (wchar_t *)(String)); /*0x799952*/
        v37 = WideString::GetOrEmpty_Alt(  (wchar_t **)&v56); /*0x79995b*/
        v38 = SendMessageA( (HWND)(DlgItem), 0x4C2u, 0, (LPARAM)((LPARAM)((LPARAM)v37))); /*0x79996b*/
        SendMessageA( (HWND)(DlgItem), 0x151u, v38, -1); /*0x799976*/
        SendMessageA( (HWND)(DlgItem), 0x14Eu, v38, 0); /*0x799981*/
        for ( lParam = 1; lParam <= 32; ++lParam ) /*0x799983*/
        {
          hWnd = 0; /*0x799996*/
          v64 = (void **)(0); /*0x79999a*/
if ( !(*(int (**)(LPVOID, LPARAM, HWND *, void ***))(*(unsigned int *)ppv + 144))( /*0x7999c0*/ ppv, (LPARAM)((LPARAM)((LPARAM)((LPARAM)(lParam)))), (HWND *)(&hWnd), (void ***)(&v64)) && hWnd && strlen((const char *)hWnd) )






          {
            ((String *)((char **)&v59))->Assign((const char *)hWnd); /*0x7999cf*/
            CharStringToWide( (ObjectClass *)((wchar_t **)&a4), (const char **)&v59); /*0x7999dc*/
            j_DeleteAndZero( (void *)(&v59)); /*0x7999e5*/
            v39 = WideString::GetOrEmpty_Alt(  (wchar_t **)&a4); /*0x7999ee*/
            v40 = SendMessageA( (HWND)(DlgItem), 0x4C2u, 0, (LPARAM)((LPARAM)((LPARAM)v39))); /*0x7999fc*/
            SendMessageA( (HWND)(DlgItem), 0x151u, v40, (LPARAM)((LPARAM)(lParam))); /*0x799a0a*/
            ((DeleteAndZero*)((void **)&a4))->Alt(); /*0x799a10*/
          }
        }
        v41 = GetDlgItem(v6, 1578); /*0x799a33*/
        MainLobbyDlgProcWOL_Read(v41); /*0x799a37*/
        FillComboBoxRandomOnly(v6, 1697); /*0x799a43*/
        InitGameDropdownColors( (void *)((void *)(v42))); /*0x799a48*/
        FillComboBoxFactions(v6, 1698); /*0x799a54*/
        v43 = GetDlgItem(v6, 1577); /*0x799a5f*/
        PopulateWOLUserList(v43); /*0x799a65*/
        LoadPlayerProfile( (ObjectClass *)(&v66), (const char **)&g_WebBrowser); /*0x799a73*/
        if ( v67 ) /*0x799a7e*/
          FillPersonaInfoWOL(v67, v6, (char **)&g_WebBrowser, (wchar_t **)1); /*0x799a88*/
        lParam = -1; /*0x799a97*/
        v44 = SendMessageA( (HWND)(DlgItem), 0x147u, 0, 0); /*0x799a9f*/
        if ( v44 != -1 ) /*0x799aa4*/
          lParam = SendMessageA( (HWND)(DlgItem), 0x150u, v44, 0); /*0x799ab1*/
        v45 = lParam != -1; /*0x799ac1*/
        v46 = GetDlgItem(v6, 1771); /*0x799aca*/
        EnableWindow(v46, v45); /*0x799acd*/
        v47 = GetDlgItem(v6, 1671); /*0x799ada*/
        EnableWindow(v47, v45); /*0x799add*/
        v48 = GetDlgItem(v6, 1791); /*0x799ae9*/
        EnableWindow(v48, v45); /*0x799aed*/
        ReadAutoLoginWOL((char **)&v57); /*0x799af7*/
        v50 = ((String *)((const char **)&v57))->Compare((const char **)&g_WebBrowser); /*0x799b12*/
        v49 = GetDlgItem(v6, 1791); /*0x799b1e*/
        SendMessageA( (HWND)(v49), 0xF1u, v50, 0); /*0x799b21*/
        j_DeleteAndZero( (void *)(&v57)); /*0x799b27*/
        ((ComPtr *)(&v66))->Release(); /*0x799b38*/
        ((DeleteAndZero*)&v56)->Alt(); /*0x799b41*/
      }
      return 0; /*0x7998ed*/
    }
    if ( v4 != 273 ) /*0x7990d8*/
    {
      switch ( v4 ) /*0x7990dd*/
      {
        case 0xFu: /*0x7990dd*/
          Dialog::DrawBackground( (void *)(v6)); /*0x799105*/
          Dialog::StopBink( (void *)(v6)); /*0x79910c*/
          ValidateRect(v6, 0); /*0x799114*/
          break;
        case 0x14u: /*0x7990dd*/
          break;
        case 0x2Bu: /*0x7990dd*/
          Dialog::Resize(  (char *)v5); /*0x7990ef*/
          return 1; /*0x799100*/
        default:
          return 0; /*0x7990e7*/
      }
      return 1; /*0x799126*/
    }
    if ( (uint16_t)v7 > 0x6A2u ) /*0x799137*/
    {
      switch ( (int16_t)v7 ) /*0x79955d*/
      {
        case 1770: /*0x79955d*/
          CreateAccountWOL(v6); /*0x799681*/
          result = 0; /*0x799689*/
          break; /*0x79968f*/
        case 1771: /*0x79955d*/
          v27 = GetDlgItem(v6, 1576); /*0x7996a6*/
          v28 = SendMessageA( (HWND)(v27), 0x147u, 0, 0); /*0x7996b2*/
          if ( v28 != -1 ) /*0x7996b7*/
          {
            unknown_libname_74( (void *)(&a4)); /*0x7996c1*/
            MainLobbyDlgProcWOL_Assign(v27, v28, (int)&a4); /*0x7996cf*/
            ToWideStringCharAlt((char **)&hWnd, (const wchar_t **)&a4); /*0x7996dc*/
            ((String *)((const char **)&hWnd))->ToLower(); /*0x7996e5*/
            ReadAutoLoginWOL((char **)&v57); /*0x7996ee*/
            v29 = ((String *)((const char **)&v57))->ToLowerCopy((char **)&v62); /*0x7996fc*/
            (*((unsigned char *)&(lParam))) = ((String *)((const char **)&hWnd))->Compare((const char **)v29); /*0x79970f*/
            j_DeleteAndZero( (void *)(&v62)); /*0x799713*/
            if ( (unsigned char)lParam ) /*0x79971e*/
            {
              ((String *)((char **)&v54))->Assign( (const char *)(&g_INI_DefaultBuffer)); /*0x799729*/
              ReadSettingsWOL( (void *)(&v54)); /*0x799732*/
              j_DeleteAndZero( (void *)(&v54)); /*0x79973b*/
            }
            LoadConfigWOL((char **)&v56); /*0x799744*/
            v30 = ((String *)((const char **)&v56))->ToLowerCopy((char **)&v63); /*0x799752*/
            (*((unsigned char *)&(lParam))) = ((String *)((const char **)&hWnd))->Compare((const char **)v30); /*0x799765*/
            j_DeleteAndZero( (void *)(&v63)); /*0x799769*/
            if ( (unsigned char)lParam ) /*0x799774*/
            {
              ((String *)((char **)&v55))->Assign( (const char *)(&g_INI_DefaultBuffer)); /*0x79977f*/
              SavePersonaConfigWOL((char **)&v55); /*0x799788*/
              j_DeleteAndZero( (void *)(&v55)); /*0x799791*/
            }
            v31 = SendMessageA( (HWND)(v27), 0x150u, v28, 0); /*0x79979f*/
            if ( v31 != -1 ) /*0x7997a4*/
            {
(*(void (**)(LPVOID, LRESULT, char *, char *, int))(*(unsigned int *)ppv + 148))( /*0x7997bc*/ ppv, v31, (char *)(&g_INI_DefaultBuffer), (char *)(&g_INI_DefaultBuffer), 1);





              SendMessageA( (HWND)(v27), 0x144u, v28, 0); /*0x7997cb*/
            }
            SendMessageA( (HWND)(v27), 0x14Eu, 0xFFFFFFFF, 0); /*0x7997d7*/
            j_DeleteAndZero( (void *)(&v56)); /*0x7997dd*/
            j_DeleteAndZero( (void *)(&v57)); /*0x7997e6*/
            j_DeleteAndZero( (void *)((void **)&hWnd)); /*0x7997ef*/
            ((DeleteAndZero*)((void **)&a4))->Alt(); /*0x7997f8*/
          }
          MainLobbyDlgProcWOL_Get(v6); /*0x799801*/
          InvalidateRect(v27, 0, 0); /*0x799811*/
          v32 = GetDlgItem(v6, 1771); /*0x79981b*/
          EnableWindow(v32, 0); /*0x799822*/
          SendMessageA( (HWND)(v27), 0x14Eu, 0, 0); /*0x799832*/
          LoadAccountInfoWOL( (void *)(&v64)); /*0x799838*/
          if ( v65 ) /*0x799843*/
          {
            ((String *)((char **)&v58))->Assign( (const char *)(&g_INI_DefaultBuffer)); /*0x79984e*/
            FillPersonaInfoWOL(v65, v6, (char **)&v58, 0); /*0x79985f*/
            j_DeleteAndZero( (void *)((void **)&v58)); /*0x799868*/
            v33 = GetDlgItem(v6, 1791); /*0x79987b*/
            SendMessageA( (HWND)(v33), 0x49Du, 0, 1); /*0x799885*/
            EnableWindow(v33, 0); /*0x79988a*/
            SendMessageA( (HWND)(v33), 0xF1u, 0, 0); /*0x79989a*/
            SendMessageA( (HWND)(v33), 0x49Du, 0, 0); /*0x7998a6*/
            InvalidateRect(v33, 0, 0); /*0x7998ad*/
          }
          ((ComPtr *)(&v64))->Release(); /*0x7998bb*/
          result = 0; /*0x7998c3*/
          break; /*0x7998c9*/
        case 1772: /*0x79955d*/
          ((WebBrowser *)g_INI_Key_Manage)->ShowDialog(); /*0x7998d1*/
          result = 0; /*0x7998d9*/
          break; /*0x7998df*/
        case 1791: /*0x79955d*/
          if ( SendMessageA( (HWND)(v5), 0xF0u, 0, 0) == 1 ) /*0x79958d*/
          {
            ReadSettingsWOL( (void *)(&g_WebBrowser)); /*0x799594*/
            result = 0; /*0x79959c*/
          }
          else
          {
            ReadAutoLoginWOL((char **)&lParam); /*0x7995a9*/
            v53 = ((String *)((const char **)&g_WebBrowser))->ToLowerCopy((char **)&v61); /*0x7995bd*/
            v24 = ((String *)((const char **)&lParam))->ToLowerCopy((char **)&v60); /*0x7995c7*/
            v25 = ((String *)((const char **)v24))->Compare((const char **)v53); /*0x7995d7*/
            j_DeleteAndZero( (void *)(&v60)); /*0x7995d9*/
            j_DeleteAndZero( (void *)(&v61)); /*0x7995e2*/
            if ( v25 ) /*0x7995e9*/
            {
              ((String *)((char **)&a3))->Assign( (const char *)(&g_INI_DefaultBuffer)); /*0x7995f4*/
              ReadSettingsWOL( (void *)(&a3)); /*0x7995fd*/
              j_DeleteAndZero( (void *)((void **)&a3)); /*0x799606*/
            }
            j_DeleteAndZero( (void *)((void **)&lParam)); /*0x79960f*/
            result = 0; /*0x799617*/
          }
          break; /*0x7995a2*/
        case 1907: /*0x79955d*/
          LoadPlayerProfile( (ObjectClass *)(&v64), (const char **)&g_WebBrowser); /*0x799629*/
          if ( v65 ) /*0x799634*/
          {
            v26 = SendMessageA( (HWND)(v5), 0xF0u, 0, 0); /*0x799640*/
            MainLobbyDlgProcWOL_Helper(v26 == 1); /*0x79964f*/
            SaveProfileWOL( (void *)(v65), (const char **)&g_WebBrowser); /*0x79965d*/
          }
          goto LABEL_67; /*0x79965d*/
        case 1955: /*0x79955d*/
          ((WebBrowser *)g_INI_Key_Ladder)->ShowDialog(); /*0x799569*/
          result = 0; /*0x799571*/
          break; /*0x799577*/
        default:
          return 0;
      }
    }
    else
    {
      if ( (uint16_t)v7 != 1698 ) /*0x79913d*/
      {
        switch ( (int16_t)v7 ) /*0x79915a*/
        {
          case 1576: /*0x79915a*/
            if ( (*(((unsigned short *)&(v7)) + 1)) != 1 ) /*0x7991cb*/
              return 0; /*0x7991cb*/
            v10 = GetDlgItem(v6, 1791); /*0x7991e5*/
            SendMessageA( (HWND)(v10), 0x49Du, 0, 1); /*0x7991ef*/
            ShowWindow(v10, 0); /*0x7991f4*/
            v11 = SendMessageA( (HWND)(v5), 0x147u, 0, 0); /*0x799204*/
            lParam = -1; /*0x799209*/
            if ( v11 != -1 ) /*0x799211*/
              lParam = SendMessageA( (HWND)(v5), 0x150u, v11, 0); /*0x79921e*/
            ((DeleteAndZero *)(void **)&g_WebBrowser)->Alt2(); /*0x799227*/
            v12 = lParam; /*0x79922c*/
            if ( lParam != -1 ) /*0x799233*/
            {
              lParam = 0; /*0x79923b*/
              a4 = 0; /*0x79923f*/
if ( !(*(int (**)(LPVOID, LPARAM, LPARAM *, HWND *))(*(unsigned int *)ppv + 144))( /*0x799252*/ ppv, (LPARAM)((LPARAM)((LPARAM)((LPARAM)(v12)))), (LPARAM *)(&lParam), (HWND *)(&a4)) )




                ((String *)((void **)&g_WebBrowser))->Assign_Alt((const char *)lParam); /*0x799266*/
            }
            LoadPlayerProfile( (ObjectClass *)(&v64), (const char **)&g_WebBrowser); /*0x799274*/
            ReadAutoLoginWOL((char **)&hWnd); /*0x79927d*/
            EnableWindow(v10, v12 != -1); /*0x79928c*/
            v13 = ((String *)((const char **)&hWnd))->Compare((const char **)&g_WebBrowser); /*0x79929d*/
            SendMessageA( (HWND)(v10), 0xF1u, v13, 0); /*0x7992af*/
            SendMessageA( (HWND)(v10), 0x49Du, 0, 0); /*0x7992bb*/
            ShowWindow(v10, 5); /*0x7992c0*/
            InvalidateRect(v10, 0, 0); /*0x7992cb*/
            if ( v65 ) /*0x7992d7*/
              FillPersonaInfoWOL(v65, v6, (char **)&g_WebBrowser, 0); /*0x7992e1*/
            v14 = v12 != -1 && ((String*)((const char **)&g_WebBrowser))->Length(); /*0x799300*/
            v51 = v14; /*0x799308*/
            v15 = GetDlgItem(v6, 1771); /*0x79930f*/
            EnableWindow(v15, v51); /*0x799318*/
            v16 = v12 != -1 && ((String*)((const char **)&g_WebBrowser))->Length(); /*0x799334*/
            v52 = v16; /*0x799336*/
            v17 = GetDlgItem(v6, 1671); /*0x79933d*/
            EnableWindow(v17, v52); /*0x799340*/
            j_DeleteAndZero( (void *)((void **)&hWnd)); /*0x799346*/
            ((ComPtr *)(&v64))->Release(); /*0x799357*/
            return 0; /*0x799365*/
          case 1577: /*0x79915a*/
            if ( (*(((unsigned short *)&(v7)) + 1)) != 1 ) /*0x79936c*/
              return 0; /*0x79936c*/
            unknown_libname_73( (void *)(&lParam)); /*0x799376*/
            GetDialogText( (HWND)(v5), (void **)&lParam); /*0x799381*/
            LoadPlayerProfile( (ObjectClass *)(&v64), (const char **)&g_WebBrowser); /*0x79938f*/
            if ( v65 ) /*0x79939a*/
            {
              WOLOption::SetValue(&lParam); /*0x7993a1*/
              SaveProfileWOL( (void *)(v65), (const char **)&g_WebBrowser); /*0x7993af*/
            }
            ((ComPtr *)(&v64))->Release(); /*0x7993c0*/
            j_DeleteAndZero( (void *)((void **)&lParam)); /*0x7993c9*/
            return 0; /*0x7993d7*/
          case 1578: /*0x79915a*/
            if ( (*(((unsigned short *)&(v7)) + 1)) != 1 ) /*0x7993de*/
              return 0; /*0x7993de*/
            v18 = 0; /*0x7993ea*/
            v19 = SendMessageA( (HWND)(v5), 0x147u, 0, 0); /*0x7993f4*/
            if ( v19 != -1 ) /*0x7993f9*/
              v18 = SendMessageA( (HWND)(v5), 0x150u, v19, 0); /*0x799405*/
            LoadPlayerProfile( (ObjectClass *)(&v64), (const char **)&g_WebBrowser); /*0x799410*/
            if ( v65 ) /*0x79941b*/
            {
              GadgetClass::TrackState(v65, v18, 3); /*0x799420*/
              SaveProfileWOL( (void *)(v65), (const char **)&g_WebBrowser); /*0x79942e*/
            }
            goto LABEL_67; /*0x79942e*/
          case 1670: /*0x79915a*/
            g_GameOptionsFlags = 0; /*0x7991a4*/
            (*(void (**)(LONG, HWND, int))(*(unsigned int *)WindowLongA + 4))( WindowLongA, (HWND)((HWND)((HWND)((HWND)(v6)))), 1670); /*0x7991b8*/
            return 0; /*0x7991c4*/
          case 1671: /*0x79915a*/
            g_GameOptionsFlags = 5; /*0x799161*/
            dword_A8B248 = 6; /*0x79916b*/
            (*(void (**)(LONG, HWND, int))(*(unsigned int *)WindowLongA + 4))( WindowLongA, (HWND)((HWND)((HWND)((HWND)(v6)))), 1671); /*0x79917f*/
            return 0; /*0x79918b*/
          case 1672: /*0x79915a*/
            ((WebBrowser *)g_INI_Key_Battleclans)->ShowDialog(); /*0x799193*/
            return 0; /*0x7991a1*/
          case 1697: /*0x79915a*/
            if ( (*(((unsigned short *)&(v7)) + 1)) != 1 ) /*0x799454*/
              return 0; /*0x799454*/
            v20 = -2; /*0x79946a*/
            v21 = SendMessageA( (HWND)(v5), 0x147u, 0, 0); /*0x79946f*/
            if ( v21 != -1 ) /*0x799474*/
              v20 = SendMessageA( (HWND)(v5), 0x150u, v21, 0); /*0x799481*/
            LoadPlayerProfile( (ObjectClass *)(&v64), (const char **)&g_WebBrowser); /*0x79948c*/
            if ( v65 ) /*0x799497*/
            {
              MainLobbyDlgProcWOL_Helper_77A780(v20); /*0x79949a*/
              SaveProfileWOL( (void *)(v65), (const char **)&g_WebBrowser); /*0x7994a8*/
            }
            goto LABEL_67; /*0x7994a8*/
          default:
            return 0;
        }
      }
      if ( (*(((unsigned short *)&(v7)) + 1)) != 1 ) /*0x7994ce*/
        return 0; /*0x799b46*/
      v22 = -2; /*0x7994e4*/
      v23 = SendMessageA( (HWND)(v5), 0x147u, 0, 0); /*0x7994e9*/
      if ( v23 != -1 ) /*0x7994ee*/
        v22 = SendMessageA( (HWND)(v5), 0x150u, v23, 0); /*0x7994fb*/
      LoadPlayerProfile( (ObjectClass *)(&v64), (const char **)&g_WebBrowser); /*0x799506*/
      if ( v65 ) /*0x799511*/
      {
        MainLobbyDlgProcWOL_Helper_77A7A0(v22); /*0x799514*/
        SaveProfileWOL( (void *)(v65), (const char **)&g_WebBrowser); /*0x799522*/
      }
  LABEL_67:
      ((ComPtr *)(&v64))->Release(); /*0x79966e*/
      return 0; /*0x799676*/
    }
  }
  return result; /*0x7990f4*/
}
}
// 0x799EA0
namespace gamemd {
rc_ptr * * WOL_OptionsDlgProc(HWND hWnd, const char * lParam, int a3, int hCtl)
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
  uint8_t v73; // bl
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
    SetWindowLongA(hWnd, 8, *(unsigned int *)(hCtl + 4));
  unsigned int v7 = a3;
  result = BaseDialogProc( (SkirmishDialog *)(v5), v6, a3, (unsigned int)v4);
  if ( result )
    return (rc_ptr * *)result;
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
            NavigateDialogTab( (HWND)(v72), v73);
            return 0;
          }
        }
      }
    }
    else
    {
      DlgItem = GetDlgItem(v5, 1836);
      GetDialogText( (HWND)(DlgItem), (void **)&g_WebBrowserConfig);
      unknown_libname_73( (void *)(&hCtl));
      v76 = GetDlgItem(v5, 1576);
      GetDialogText( (HWND)(v76), (void **)&hCtl);
      if ( ((String*)((const char **)&hCtl))->Length() && ((String*)((const char **)&g_WebBrowserConfig))->Length() == 8 )
      {
        v77 = GetDlgItem(v5, 1337);
        PostMessageA(v77, 0xF5u, 0, 0);
      }
      j_DeleteAndZero( (void *)((void **)&hCtl));
    }
    return 0;
  }
  if ( v6 == 1175 )
  {
    byte_B77EA0 = 1;
    v54 = GetDlgItem(v5, 1576);
    v87 = GetDlgItem(v5, 1836);
    SendMessageA( (HWND)(v54), 0x4D1u, 1u, 0);
    SendMessageA( (HWND)(v87), 0x4D1u, 1u, 0);
    SendMessageA( (HWND)(v54), 0xC5u, 9u, 0);
    SendMessageA( (HWND)(v87), 0xC5u, 8u, 0);
    ((ListBox *)(v54))->Clear();
    SendMessageA( (HWND)(v54), 0x141u, 9u, 0);
    int v55 = 1;
    for ( hCtl = 1; hCtl < 32; ++hCtl )
    {
if ( !(*(int (**)(LPVOID, int, const char **, const char **))(*(unsigned int *)ppv + 144))( (LPVOID)((LPVOID)((LPVOID)((LPVOID)(ppv)))), v55, (const char **)(&lParam), (const char **)(&v88)) && lParam && strlen( (const char *)(lParam)) )






      {
        v56 = SendMessageA( (HWND)(v54), 0x4BCu, 0, (LPARAM)((LPARAM)((LPARAM)lParam)));
        SendMessageA( (HWND)(v54), 0x151u, v56, (LPARAM)((LPARAM)(hCtl)));
      }
      v55 = hCtl + 1;
    }
    ((String *)((char **)&hWnd))->AssignFromPtr((const char **)&g_WebBrowser);
    ((DeleteAndZero *)(void **)&g_WebBrowserConfig)->Alt2();
    int v57 = 1;
    hCtl = 1;
    while ( 1 )
    {
if ( !(*(int (**)(LPVOID, int, const char **, const char **))(*(unsigned int *)ppv + 144))( (LPVOID)((LPVOID)((LPVOID)((LPVOID)(ppv)))), v57, (const char **)(&lParam), (const char **)(&v88)) )




      {
        if ( lParam )
        {
          if ( strlen( (const char *)(lParam)) )
          {
            const char * v83 = lParam;
            char * v58 = ((String *)((char **)&g_WebBrowser))->GetOrEmpty_Alt();
            if ( !_strcmpi(v58, v83) )
              break;
          }
        }
      }
      v57 = ++hCtl;
      if ( hCtl > 32 )
      {
        ((DeleteAndZero *)(void **)&g_WebBrowser)->Alt2();
        (hCtl) = ((hCtl) & ~0xFF) | ((unsigned int)(0) & 0xFF);
        ((String *)((char **)&g_WebBrowser))->Reassign((const char **)&hWnd);
        goto LABEL_106;
      }
    }
    ((String *)((void **)&g_WebBrowser))->Assign_Alt( (const char *)(lParam));
    ((String *)((void **)&g_WebBrowserConfig))->Assign_Alt( (const char *)(v88));
    (*((unsigned char *)&(dword_84A238))) = 0;
    (hCtl) = ((hCtl) & ~0xFF) | ((unsigned int)(1) & 0xFF);
LABEL_106:
    char * v59 = ((String *)((char **)&g_WebBrowser))->GetOrEmpty_Alt();
    SendMessageA( (HWND)(v54), 0x4B4u, 0, (LPARAM)((LPARAM)((LPARAM)v59)));
    if ( ((String*)((const char **)&g_WebBrowser))->Length() )
    {
      char * v60 = ((String *)(&g_WebBrowserConfig))->GetOrEmpty_Alt();
      SendMessageA( (HWND)(v87), 0x4B4u, 0, (LPARAM)((LPARAM)((LPARAM)v60)));
      (*((unsigned char *)&(dword_84A238))) = 0;
    }
  unsigned int v61; // eax
    if ( !((String*)((const char **)&g_WebBrowser))->Length()
      || (v61 = ((String*)((const char **)&g_WebBrowserConfig))->Length(), (*((unsigned char *)&(lParam))) = 1, v61 != 8) )
    {
      (*((unsigned char *)&(lParam))) = 0;
    }
    v62 = GetDlgItem(v5, 1837);
    SendMessageA( (HWND)(v62), 0x49Du, 0, 1);
    SendMessageA( (HWND)(v62), 0xF1u, (uint8_t)hCtl, 0);
    EnableWindow(v62, 0);
    InvalidateRect(v62, 0, 0);
    SendMessageA( (HWND)(v62), 0x49Du, 0, 0);
    BOOL v84 = ((String*)((const char **)&g_WebBrowser))->Length() != 0;
    v63 = GetDlgItem(v5, 1771);
    EnableWindow(v63, v84);
    int v85 = (uint8_t)lParam;
    v64 = GetDlgItem(v5, 1337);
    EnableWindow(v64, v85);
    int v91 = 0;
    char v92 = 0;
    ReadRegistryOptionsWOL( (void *)(&v91));
    if ( !((Flag *)(&v91))->IsNot2() )
    {
  const char *v67; // ecx
      v65 = GetDlgItem(v5, 1578);
      MainLobbyDlgProcWOL_Read(v65);
      FillComboBoxRandomOnly(v5, 1697);
      v66 = GetDlgItem(v5, 1697);
      lParam = (const char *)SendMessageA( (HWND)(v66), 0x146u, 0, 0);
      hCtl = 0;
      if ( (int)lParam > 0 )
      {
        while ( SendMessageA( (HWND)(v66), 0x150u, hCtl, 0) != *(unsigned int *)(dword_B75E4C + 28) )
        {
          v67 = lParam;
          if ( ++hCtl >= (int)lParam )
            goto LABEL_118;
        }
        SendMessageA( (HWND)(v66), 0x14Eu, hCtl, 0);
      }
LABEL_118:
      InitGameDropdownColors( (void *)(v67));
      FillComboBoxFactions(v5, 1698);
      hCtl = (int)GetDlgItem(v5, 1698);
      v68 = 0;
      lParam = (const char *)SendMessageA((HWND)hCtl, 0x146u, 0, 0);
      if ( (int)lParam > 0 )
      {
        while ( SendMessageA((HWND)hCtl, 0x150u, v68, 0) != *(unsigned int *)(dword_B75E4C + 32) )
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
    j_DeleteAndZero( (void *)((void **)&hWnd));
    return 0;
  }
  else
  {
    if ( v6 <= 0x2B )
    {
      switch ( v6 )
      {
        case 0x2Bu:
          Dialog::Resize(  (char *)v4);
          return 1;
        case 0xFu:
          Dialog::DrawBackground( (void *)(v5));
          Dialog::StopBink( (void *)(v5));
          ValidateRect(v5, 0);
          return 1;
        case 0x14u:
          return 1;
      }
      return 0;
    }
    if ( v6 != 273 )
      return 0;
    if ( (uint16_t)v7 > 0x6A2u )
    {
      switch ( (int16_t)v7 )
      {
        case 1770:
          CreateAccountWOL(v5);
          result = 0;
          break;
        case 1771:
          byte_B77EA0 = 1;
          v46 = GetDlgItem(v5, 1576);
          char * v47 = ((String *)((char **)&g_WebBrowser))->GetOrEmpty_Alt();
          hWnd = (HWND)SendMessageA( (HWND)(v46), 0x4B9u, 0xFFFFFFFF, (LPARAM)((LPARAM)((LPARAM)v47)));
          if ( hWnd != HWND_MESSAGE|0x2 )
          {
            unknown_libname_73( (void *)(&lParam));
            OptionsDlgProcWOL_Assign(v46, (WPARAM)hWnd, (int)&lParam);
            ((String *)(&lParam))->ToLower();
            ReadAutoLoginWOL((char **)&v88);
            void * v89 = ((String *)(&v88))->ToLowerCopy((char **)&v89);
            (*((unsigned char *)&(hCtl))) = ((String *)(&lParam))->Compare((const char **)v48);
            j_DeleteAndZero( (void *)(&v89));
            if ( (unsigned char)hCtl )
            {
              ((String *)((char **)&a3))->Assign( (const char *)(&g_INI_DefaultBuffer));
              ReadSettingsWOL( (void *)(&a3));
              j_DeleteAndZero( (void *)((void **)&a3));
            }
            LoadConfigWOL((char **)&v87);
            void * v90 = ((String *)((const char **)&v87))->ToLowerCopy((char **)&v90);
            (*((unsigned char *)&(hCtl))) = ((String *)(&lParam))->Compare((const char **)v49);
            j_DeleteAndZero( (void *)(&v90));
            if ( (unsigned char)hCtl )
            {
  void *v86; // [esp+1Ch] [ebp-1Ch] BYREF
              ((String *)((char **)&v86))->Assign( (const char *)(&g_INI_DefaultBuffer));
              SavePersonaConfigWOL((char **)&v86);
              j_DeleteAndZero( (void *)(&v86));
            }
            hCtl = SendMessageA( (HWND)(v46), 0x150u, (WPARAM)hWnd, 0);
            SendMessageA( (HWND)(v46), 0x144u, (WPARAM)hWnd, 0);
(*(void (**)(LPVOID, int, char *, char *, int))(*(unsigned int *)ppv + 148))( (LPVOID)((LPVOID)((LPVOID)((LPVOID)(ppv)))), hCtl, (char *)(&g_INI_DefaultBuffer), (char *)(&g_INI_DefaultBuffer), 1);





            j_DeleteAndZero( (void *)((void **)&v87));
            j_DeleteAndZero( (void *)((void **)&v88));
            j_DeleteAndZero( (void *)((void **)&lParam));
          }
          SendMessageA( (HWND)(v46), 0x4B4u, 0, (LPARAM)((LPARAM)((LPARAM)&g_INI_DefaultBuffer)));
          InvalidateRect(v46, 0, 0);
          v50 = GetDlgItem(v5, 1836);
          SendMessageA( (HWND)(v50), 0x4B4u, 0, (LPARAM)((LPARAM)((LPARAM)&g_INI_DefaultBuffer)));
          ((DeleteAndZero *)(void **)&g_WebBrowser)->Alt2();
          ((DeleteAndZero *)(void **)&g_WebBrowserConfig)->Alt2();
          (*((unsigned char *)&(dword_84A238))) = 1;
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
          ((WebBrowser *)g_INI_Key_Manage)->ShowDialog();
          result = 0;
          break;
        case 1836:
          if ( (*(((unsigned short *)&(v7)) + 1)) != 768 || byte_B77EA0 )
            return 0;
          (*((unsigned char *)&(dword_84A238))) = 1;
          GetDialogText( (HWND)(v4), (void **)&g_WebBrowserConfig);
          unknown_libname_73( (void *)(&hCtl));
          v40 = GetDlgItem(v5, 1576);
          GetDialogText( (HWND)(v40), (void **)&hCtl);
  unsigned int v41; // eax
          if ( !((String*)((const char **)&hCtl))->Length()
            || (v41 = ((String*)((const char **)&g_WebBrowserConfig))->Length(), (*((unsigned char *)&(lParam))) = 1, v41 != 8) )
          {
            (*((unsigned char *)&(lParam))) = 0;
          }
          v42 = GetDlgItem(v5, 1837);
          SendMessageA( (HWND)(v42), 0x49Du, 0, 1);
          int v43 = (uint8_t)lParam;
          EnableWindow(v42, (uint8_t)lParam);
          InvalidateRect(v42, 0, 0);
          SendMessageA( (HWND)(v42), 0x49Du, 0, 0);
          v44 = GetDlgItem(v5, 1771);
          EnableWindow(v44, 0);
          v45 = GetDlgItem(v5, 1337);
          EnableWindow(v45, v43);
          j_DeleteAndZero( (void *)((void **)&hCtl));
          result = 0;
          break;
        case 1837:
          byte_B77E68 = SendMessageA( (HWND)(v4), 0xF0u, 0, 0) == 1;
          result = 0;
          break;
        default:
          return 0;
      }
      return (rc_ptr * *)result;
    }
    if ( (uint16_t)v7 == 1698 )
    {
      if ( ((Dialog*)((void *)0x11D))->FindByHandle() && dword_B75E4C )
      {
        v37 = -2;
        v38 = GetDlgItem(v5, 1698);
        v39 = SendMessageA( (HWND)(v38), 0x147u, 0, 0);
        if ( v39 != -1 )
          v37 = SendMessageA( (HWND)(v38), 0x150u, v39, 0);
        MainLobbyDlgProcWOL_Helper_77A7A0(v37);
        return 0;
      }
      return 0;
    }
    if ( (uint16_t)v7 <= 0x62Au )
    {
      switch ( (uint16_t)v7 )
      {
        case 0x62Au:
          if ( ((Dialog*)((void *)0x11D))->FindByHandle() && dword_B75E4C )
          {
            v31 = GetDlgItem(v5, 1578);
            v32 = SendMessageA( (HWND)(v31), 0x147u, 0, 0);
            v33 = 0;
            if ( v32 != -1 )
              v33 = SendMessageA( (HWND)(v31), 0x150u, v32, 0);
            GadgetClass::TrackState(dword_B75E4C, v33, 3);
            return 0;
          }
          break;
        case 0x539u:
          (*(void (**)(LONG, HWND, int))(*(unsigned int *)WindowLongA + 4))( WindowLongA, (HWND)((HWND)((HWND)((HWND)(v5)))), 1337);
          return 0;
        case 0x628u:
          bool v11 = ((Dialog*)((void *)0x11D))->FindByHandle() != 0;
          if ( (*(((unsigned short *)&(v7)) + 1)) == 1 )
          {
            if ( !v11 )
            {
              byte_B77EA0 = 1;
              ((DeleteAndZero *)(void **)&g_WebBrowser)->Alt2();
              ((DeleteAndZero *)(void **)&g_WebBrowserConfig)->Alt2();
              (*((unsigned char *)&(dword_84A238))) = 1;
              v21 = GetDlgItem(v5, 1836);
              char * v22 = ((String *)(&g_WebBrowserConfig))->GetOrEmpty_Alt();
              SendMessageA( (HWND)(v21), 0x4B4u, 0, (LPARAM)((LPARAM)((LPARAM)v22)));
              (*((unsigned char *)&(hWnd))) = byte_B77E68;
              v23 = SendMessageA((HWND)hCtl, 0x147u, 0, 0);
              if ( v23 != -1 )
              {
                v24 = SendMessageA((HWND)hCtl, 0x150u, v23, 0);
                lParam = (const char *)v24;
                if ( v24 > 0 && v24 <= 32 )
                {
                  OptionsDlgProcWOL_Assign((HWND)hCtl, v23, (int)&g_WebBrowser);
(*(void (**)(LPVOID, const char *, const char **, int *))(*(unsigned int *)ppv + 144))( (LPVOID)((LPVOID)((LPVOID)((LPVOID)(ppv)))), (const char *)(lParam), (const char **)(&v88), (int *)(&hCtl));




                  ((String *)((void **)&g_WebBrowserConfig))->Assign_Alt((const char *)hCtl);
                  v25 = GetDlgItem(v5, 1836);
                  char * v26 = ((String *)(&g_WebBrowserConfig))->GetOrEmpty_Alt();
                  SendMessageA( (HWND)(v25), 0x4B4u, 0, (LPARAM)((LPARAM)((LPARAM)v26)));
                  (*((unsigned char *)&(dword_84A238))) = 0;
                  (*((unsigned char *)&(hWnd))) = 1;
                }
              }
  unsigned int v27; // eax
              if ( !((String*)((const char **)&g_WebBrowser))->Length()
                || (v27 = ((String*)((const char **)&g_WebBrowserConfig))->Length(), (*((unsigned char *)&(hCtl))) = 1, v27 != 8) )
              {
                (*((unsigned char *)&(hCtl))) = 0;
              }
              v28 = GetDlgItem(v5, 1837);
              SendMessageA( (HWND)(v28), 0xF1u, (uint8_t)hWnd, 0);
              EnableWindow(v28, 0);
              InvalidateRect(v28, 0, 0);
              BOOL v81 = ((String*)((const char **)&g_WebBrowser))->Length() != 0;
              v29 = GetDlgItem(v5, 1771);
              EnableWindow(v29, v81);
              int v82 = (uint8_t)hCtl;
              v30 = GetDlgItem(v5, 1337);
              EnableWindow(v30, v82);
              byte_B77EA0 = 0;
              return 0;
            }
          }
          else if ( ((*(((unsigned short *)&(v7)) + 1)) == 5 || (*(((unsigned short *)&(v7)) + 1)) == 768)
                 && ((*(((unsigned short *)&(v7)) + 1)) != 768 || v11)
                 && ((*(((unsigned short *)&(v7)) + 1)) != 5 || !v11)
                 && !byte_B77EA0 )
          {
  char v14; // al
            unknown_libname_73( (void *)(&hCtl));
            GetDialogText( (HWND)(v4), (void **)&hCtl);
            ((DeleteAndZero *)(void **)&g_WebBrowserConfig)->Alt2();
            for ( i = 1; i <= 32; ++i )
            {
if ( !(*(int (**)(LPVOID, int, const char **, HWND *))(*(unsigned int *)ppv + 144))( (LPVOID)((LPVOID)((LPVOID)((LPVOID)(ppv)))), i, (const char **)(&lParam), (HWND *)(&hWnd)) )




              {
                if ( lParam )
                {
                  if ( strlen( (const char *)(lParam)) )
                  {
                    const char * v78 = lParam;
                    char * v13 = ((String *)((char **)&hCtl))->GetOrEmpty_Alt();
                    if ( !_strcmpi(v13, v78) )
                    {
                      ((String *)((void **)&g_WebBrowser))->Assign_Alt( (const char *)(lParam));
                      ((String *)((void **)&g_WebBrowserConfig))->Assign_Alt((const char *)hWnd);
                      (*((unsigned char *)&(dword_84A238))) = 0;
                      v14 = 1;
                      goto LABEL_42;
                    }
                  }
                }
              }
            }
            ((DeleteAndZero *)(void **)&g_WebBrowser)->Alt2();
            v14 = 0;
            if ( !byte_B77E68 )
            {
              (*((unsigned char *)&(lParam))) = 0;
              goto LABEL_43;
            }
LABEL_42:
            (*((unsigned char *)&(lParam))) = 1;
            if ( v14 )
              goto LABEL_44;
LABEL_43:
            ((String *)((char **)&g_WebBrowser))->Reassign((const char **)&hCtl);
LABEL_44:
            byte_B77EA0 = 1;
            v15 = GetDlgItem(v5, 1836);
            char * v16 = ((String *)(&g_WebBrowserConfig))->GetOrEmpty_Alt();
            SendMessageA( (HWND)(v15), 0x4B4u, 0, (LPARAM)((LPARAM)((LPARAM)v16)));
            InvalidateRect(v15, 0, 0);
            byte_B77EA0 = 0;
  unsigned int v17; // eax
            if ( !((String*)((const char **)&g_WebBrowser))->Length()
              || (v17 = ((String*)((const char **)&g_WebBrowserConfig))->Length(), (*((unsigned char *)&(hWnd))) = 1, v17 != 8) )
            {
              (*((unsigned char *)&(hWnd))) = 0;
            }
            v18 = GetDlgItem(v5, 1837);
            ShowWindow(v18, 0);
            SendMessageA( (HWND)(v18), 0x49Du, 0, 1);
            SendMessageA( (HWND)(v18), 0xF1u, (uint8_t)lParam, 0);
            EnableWindow(v18, 0);
            SendMessageA( (HWND)(v18), 0x49Du, 0, 0);
            ShowWindow(v18, 5);
            InvalidateRect(v18, 0, 0);
            BOOL v79 = ((String*)((const char **)&g_WebBrowser))->Length() != 0;
            v19 = GetDlgItem(v5, 1771);
            EnableWindow(v19, v79);
            int v80 = (uint8_t)hWnd;
            v20 = GetDlgItem(v5, 1337);
            EnableWindow(v20, v80);
            j_DeleteAndZero( (void *)((void **)&hCtl));
            return 0;
          }
          break;
        default:
          if ( (uint16_t)v7 == 1577 && ((Dialog*)((void *)0x11D))->FindByHandle() && dword_B75E4C )
          {
            unknown_libname_73( (void *)(&hCtl));
            v10 = GetDlgItem(v5, 1577);
            GetDialogText( (HWND)(v10), (void **)&hCtl);
            WOLOption::SetValue(&hCtl);
            j_DeleteAndZero( (void *)((void **)&hCtl));
            return 0;
          }
          return 0;
      }
      return 0;
    }
    if ( (uint16_t)v7 == 1670 )
    {
      (*(void (**)(LONG, HWND, int))(*(unsigned int *)WindowLongA + 4))( WindowLongA, (HWND)((HWND)((HWND)((HWND)(v5)))), 2);
      return 0;
    }
    if ( (uint16_t)v7 != 1697 || !((Dialog*)((void *)0x11D))->FindByHandle() || !dword_B75E4C )
      return 0;
    v34 = -2;
    v35 = GetDlgItem(v5, 1697);
    v36 = SendMessageA( (HWND)(v35), 0x147u, 0, 0);
    if ( v36 != -1 )
      v34 = SendMessageA( (HWND)(v35), 0x150u, v36, 0);
    MainLobbyDlgProcWOL_Helper_77A780(v34);
    return 0;
  }
}
} // namespace gamemd

// 0x79BA60
namespace gamemd {
void ValidateGameJoinWOL(BlowStraw * aP0, ObjectClass * aP1, char a3)
{
  int v4; // eax
  char v5; // cl
  char v6; // al
  wchar_t *v7; // eax
  BOOL v9; // ecx
  wchar_t *v10; // eax
  int v12; // [esp+10h] [ebp-9Ch] BYREF
  int v13; // [esp+14h] [ebp-98h] BYREF
  int v14; // [esp+18h] [ebp-94h] BYREF
  int v15; // [esp+1Ch] [ebp-90h] BYREF
  int v16; // [esp+20h] [ebp-8Ch] BYREF
  int v17; // [esp+24h] [ebp-88h]
  char String[132]; // [esp+28h] [ebp-84h] BYREF

  v5 = 0; /*0x79ba9c*/
  if ( dword_A8B238 == 4 ) /*0x79ba7a*/
  {
    v4 = aP0->q020; /*0x79ba7c*/
    if ( (v4 & 0x800) != 0 || (v4 & 0x1000) != 0 ) /*0x79ba96*/
      v5 = 1; /*0x79ba7a*/
  }
  v6 = dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2; /*0x79bab6*/
  if ( v5 != v6 ) /*0x79babd*/
    return 0; /*0x79babd*/
  if ( dword_A8B238 == 4 && (aP0->q020 & 0x100) != 0 && dword_B77DE4 < 1 ) /*0x79badd*/
  {
    if ( aP1 ) /*0x79bae1*/
    {
      v7 = GetStringCSF(aTxtNoClan, 0, g_Str_File_wonline_cpp, 26733); /*0x79baf8*/
      Dialog::ShowMessage(-1, (size_t)v7); /*0x79bb00*/
      return 0; /*0x79bb13*/
    }
    return 0; /*0x79bae1*/
  }
  v17 = 0; /*0x79bb32*/
  strcpy(String, &aP0->u32_E0); /*0x79bb39*/
  v15 = 0; /*0x79bb3d*/
  v16 = 0; /*0x79bb44*/
  v13 = 0; /*0x79bb4e*/
  v14 = 0; /*0x79bb52*/
  unknown_libname_73(&v12); /*0x79bb56*/
  ParseStringCommaInts(String, (int)&v15, (int)&v16, (int)&v13, (int)&v14, (int)&v12); /*0x79bb7c*/
  if ( GameOptions::GetEntry() != v17 || (CCINIClass_RulesHash ^ CCINIClass_AIHash ^ CCINIClass_ArtHash) != v15 ) /*0x79bbae*/
  {
    if ( aP1 ) /*0x79bc41*/
    {
      v10 = GetStringCSF(aTxtMismatch, 0, g_Str_File_wonline_cpp, 26769); /*0x79bc54*/
      goto LABEL_34; /*0x79bc54*/
    }
    goto LABEL_35; /*0x79bc41*/
  }
  if ( !a3 ) /*0x79bbbb*/
  {
    v9 = v13 || v14; /*0x79bbda*/
    if ( v16 + aP0->u32_C - v13 >= aP0->q008 - v9 ) /*0x79bbe6*/
    {
      if ( aP1 ) /*0x79bbec*/
      {
        v10 = GetStringCSF((wchar_t *)aWolGamefull, 0, g_Str_File_wonline_cpp, 26780); /*0x79bbff*/
  LABEL_34:
        Dialog::ShowMessage(-1, (size_t)v10); /*0x79bc59*/
        goto LABEL_35; /*0x79bc5c*/
      }
      goto LABEL_35; /*0x79bbec*/
    }
  LABEL_29:
    DeleteAndZero((void **)&v12); /*0x79bc0d*/
    return 1; /*0x79bc21*/
  }
  if ( v14 && !v13 ) /*0x79bc0b*/
    goto LABEL_29; /*0x79bc0b*/
  if ( aP1 ) /*0x79bc28*/
  {
    v10 = GetStringCSF(g_Str_TXT_OBSERVER_FULL, 0, g_Str_File_wonline_cpp, 26788); /*0x79bc3b*/
    goto LABEL_34; /*0x79bc3b*/
  }
  LABEL_35:
  DeleteAndZero((void **)&v12); /*0x79bc64*/
  return 0; /*0x79bb0a*/
}
}
// 0x79BC80
namespace gamemd {
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
  unsigned char v12[268]; // [esp+14h] [ebp-218h] BYREF
  char v13[268]; // [esp+120h] [ebp-10Ch] BYREF

  if ( !String::Length(&g_WOL_LoginObject) ) /*0x79bc8f*/
    return 0; /*0x79bca4*/
  if ( !dword_B76994 ) /*0x79bcac*/
    return 0; /*0x79bcac*/
  v1 = *((unsigned int *)dword_B76990 + (dword_B769A8(&g_WOL_LoginObject) & ((1 << dword_B7699C) - 1))); /*0x79bcce*/
  if ( !v1 ) /*0x79bcd3*/
    return 0; /*0x79bcd3*/
  while ( 1 ) /*0x79bcdc*/
  {
    result = ((String *)((const char **)v1))->Compare(&g_WOL_LoginObject); /*0x79bcdc*/
    if ( result ) /*0x79bce3*/
      break; /*0x79bce3*/
    v1 = v1->vtable3; /*0x79bce5*/
    if ( !v1 ) /*0x79bcea*/
      return result; /*0x79bcea*/
  }
  v2 = &v1->vtable2; /*0x79bcfb*/
  if ( !v2 ) /*0x79bd00*/
    return 0; /*0x79bd00*/
  v3 = *v2; /*0x79bd02*/
  if ( v3 == 4 ) /*0x79bd07*/
    return 1; /*0x79bd15*/
  if ( v3 != 5 ) /*0x79bd19*/
    return 0; /*0x79bd27*/
  if ( !dword_B7660C ) /*0x79bd2f*/
    return 0; /*0x79bd2f*/
  v4 = *((unsigned int *)dword_B76608 + (dword_B76620(&g_WOL_LoginObject) & ((1 << dword_B76614) - 1))); /*0x79bd55*/
  if ( !v4 ) /*0x79bd5a*/
    return 0; /*0x79bd5a*/
  while ( 1 ) /*0x79bd67*/
  {
    result = ((String *)((const char **)v4))->Compare(&g_WOL_LoginObject); /*0x79bd67*/
    if ( result ) /*0x79bd6e*/
      break; /*0x79bd6e*/
    v4 = v4->ParticleSystemClass_110; /*0x79bd70*/
    if ( !v4 ) /*0x79bd78*/
      return result; /*0x79bd78*/
  }
  v5 = (const void *)(v4 + 4); /*0x79bd8d*/
  if ( v5 ) /*0x79bd92*/
    memcpy(v13, v5, sizeof(v13)); /*0x79bda0*/
  ((String *)((char **)&v11))->Assign(&v13[52]); /*0x79bdae*/
  v6 = 0; /*0x79bdbe*/
  memset(v12, 0, sizeof(v12)); /*0x79bdc0*/
  v7 = dword_B76AE0; /*0x79bdc2*/
  if ( (int)dword_B76AE0 <= 0 ) /*0x79bdc9*/
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
      memcpy(v12, (char *)dword_B76AE8 + v8, sizeof(v12)); /*0x79bde7*/
    v9 = ((String *)((char **)&v11))->GetOrEmpty_Alt(); /*0x79bded*/
    if ( !_strcmpi(&v12[52], v9) ) /*0x79bdf8*/
      break; /*0x79bdf8*/
    v7 = dword_B76AE0; /*0x79be04*/
    ++v6; /*0x79be09*/
    v8 += 268; /*0x79be0a*/
    if ( v6 >= (int)dword_B76AE0 ) /*0x79be12*/
      goto LABEL_27; /*0x79be12*/
  }
  v10 = ValidateGameJoinWOL((int)v12, 0, g_MenuStateFlags != 0); /*0x79be52*/
  DeleteAndZero(&v11); /*0x79be54*/
  return v10; /*0x79bc98*/
}
}
// 0x79BF50
namespace gamemd {
int E4Recv_79BF50::sub_79BF50(HWND hDlg)
{
  HWND DlgItem; // eax
  HWND v3; // eax
  int v4; // esi
  HWND v5; // eax
  BOOL v7; // [esp-4h] [ebp-18h]
  BOOL BuddyWOL; // [esp-4h] [ebp-18h]
  uint8_t v9; // [esp+10h] [ebp-4h]

  v7 = String::Length((String *)&g_WOL_LoginObject) != 0; /*0x79bf6f*/
  DlgItem = GetDlgItem((HWND)hDlg, 1795); /*0x79bf76*/
  EnableWindow(DlgItem, v7); /*0x79bf7f*/
  BuddyWOL = FindBuddyWOL(); /*0x79bf8b*/
  v3 = GetDlgItem((HWND)hDlg, 1581); /*0x79bf92*/
  EnableWindow(v3, BuddyWOL); /*0x79bf95*/
  if ( String::Length((String *)&g_WOL_LoginObject) ) /*0x79bf9c*/
  {
    if ( !stru_B76900.lastLayer ) /*0x79bfb2*/
      goto LABEL_10; /*0x79bfb2*/
    v4 = *(unsigned int *)(*(unsigned int *)&stru_B76900.isAliveFlag /*0x79bfd4*/
                   + 4
                   * (((int (__thiscall *)(ObjectClass *))stru_B76900.lineTrailer)(&g_WOL_LoginObject)
                    & ((1 << (*((signed char *)&(stru_B76900.location[0])))) - 1)));
    if ( !v4 ) /*0x79bfd9*/
      goto LABEL_10; /*0x79bfd9*/
    while ( !(uint8_t)((String *)((String *)v4))->Compare((const char **)&g_WOL_LoginObject) ) /*0x79bfe9*/
    {
      v4 = v4->vtable3; /*0x79bfeb*/
      if ( !v4 ) /*0x79bff0*/
      {
        v9 = 0; /*0x79bff2*/
        goto LABEL_12; /*0x79bff7*/
      }
    }
    if ( v4 != -4 && v4->vtable2 > 2u ) /*0x79c008*/
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
  v5 = GetDlgItem((HWND)hDlg, 1474); /*0x79c01b*/
  return EnableWindow(v5, v9); /*0x79c031*/
}
}
// 0x79CBA0
namespace gamemd {
AbstractClass * * RemoveWOLPlayerLogin(const char ** a1)
{
  const char **vtable1; // ebp
  int v2; // esi
  int v3; // ebx
  void *v4; // eax
  void *v5; // esi
  int v7; // esi
  int v8; // edi
  unsigned int *v9; // edi
  int v10; // ebx
  double v11; // st7
  int v12; // esi
  char *v13; // eax
  ObjectClass v14; // [esp+8h] [ebp-188h] BYREF

  vtable1 = a1; /*0x79cbad*/
  v2 = 0; /*0x79cbaf*/
  v14.vfptr1 = a1; /*0x79cbb1*/
  if ( *(int *)g_WindowManager > 0 ) /*0x79cbb7*/
  {
    while ( 1 ) /*0x79cbc1*/
    {
      unknown_libname_73(&v14.vfptr3); /*0x79cbc1*/
      if ( v2 >= 0 && v2 < *(int *)g_WindowManager ) /*0x79cbd0*/
        ((String *)((String *)&v14.vfptr3))->Reassign((const char **)(*&g_WOL_LoginQueue->uniqueId * v2)); /*0x79cbdf*/
      if ( (uint8_t)((String *)((String *)&v14.vfptr3))->Compare(vtable1) ) /*0x79cbe9*/
        break; /*0x79cbe9*/
      DeleteAndZero((ObjectClass *)&v14.vfptr3); /*0x79cbf6*/
      if ( ++v2 >= *(int *)g_WindowManager ) /*0x79cc03*/
        return; /*0x79cc03*/
    }
    if ( *(unsigned int *)g_WindowManager ) /*0x79cc17*/
    {
      if ( v2 < 0 ) /*0x79cc1f*/
        v2 = 0; /*0x79cc21*/
      if ( v2 >= *(int *)g_WindowManager ) /*0x79cc25*/
        v2 = *(unsigned int *)g_WindowManager - 1; /*0x79cc27*/
      DeleteAndZero((ObjectClass *)(*&g_WOL_LoginQueue->uniqueId * v2)); /*0x79cc33*/
      memcpy( /*0x79cc5c*/
        (void *)(*&g_WOL_LoginQueue->uniqueId * v2),
        (const void *)(*&g_WOL_LoginQueue->uniqueId * (v2 + 1)),
        4 * (*(unsigned int *)g_WindowManager + 0x3FFFFFFF * (v2 + 1)));
      --*(unsigned int *)g_WindowManager; /*0x79cc70*/
      if ( 3 * *(unsigned int *)g_WindowManager <= (int)DataGlobal_B73AAC ) /*0x79cc7a*/
      {
        v3 = (int)DataGlobal_B73AAC / 2; /*0x79cc83*/
        if ( (int)DataGlobal_B73AAC / 2 < 10 ) /*0x79cc88*/
          v3 = 10; /*0x79cc8a*/
        if ( v3 < (int)DataGlobal_B73AAC ) /*0x79cc91*/
        {
          v4 = (void *)operator new(4 * v3); /*0x79cc9b*/
          v5 = *(void **)g_WOL_LoginQueue; /*0x79cca0*/
          v4 = v4; /*0x79ccab*/
          if ( *(unsigned int *)g_WOL_LoginQueue ) /*0x79ccad*/
          {
            memcpy(v4, *(const void **)g_WOL_LoginQueue, 4 * *(unsigned int *)g_WindowManager); /*0x79ccb7*/
            v5 = *(void **)g_WOL_LoginQueue; /*0x79ccb9*/
          }
          operator delete((void *)(v5)); /*0x79ccc0*/
          *(unsigned int *)g_WOL_LoginQueue = v4; /*0x79ccc5*/
          vtable1 = (const char **)v14.vfptr1; /*0x79cccb*/
          DataGlobal_B73AAC = (void *)v3; /*0x79ccd2*/
        }
      }
    }
    String::AssignFromPtr((String *)&v14, vtable1); /*0x79ccdd*/
    HashTable::FindWOLHashTableEntry( /*0x79ccf4*/
      (HashTable *)&stru_B765EC.referenceCount,
      (const char **)&v14,
      &v14.visibilityFlags);
    if ( !stru_B76900.lastLayer ) /*0x79cd02*/
      goto LABEL_34; /*0x79cd02*/
    *(unsigned long long *)&v14.vfptr1 = (unsigned int)(stru_B76900.lastLayer - 1); /*0x79cd0d*/
    *(float *)&v14.vfptr1 = (double)*(int64_t *)&v14.vfptr1 / (double)*(int *)&stru_B76900.isInLogic; /*0x79cd2a*/
    v7 = ((int (__thiscall *)(ObjectClass *))stru_B76900.lineTrailer)(&v14) /*0x79cd48*/
       & ((1 << (*((signed char *)&(stru_B76900.location[0])))) - 1);
    v8 = *(unsigned int *)(*(unsigned int *)&stru_B76900.isAliveFlag + 4 * v7); /*0x79cd4a*/
    if ( !v8 ) /*0x79cd4f*/
      goto LABEL_34; /*0x79cd4f*/
    if ( (uint8_t)String::Compare( /*0x79cd5c*/
                            *(String **)(*(unsigned int *)&stru_B76900.isAliveFlag + 4 * v7),
                            (const char **)&v14) )
    {
      v9 = *(unsigned int **)(*(unsigned int *)&stru_B76900.isAliveFlag + 4 * v7); /*0x79cd6a*/
      v10 = v9->vtable3; /*0x79cd6f*/
      if ( v9 ) /*0x79cd72*/
      {
        DeleteAndZero(*(ObjectClass **)(*(unsigned int *)&stru_B76900.isAliveFlag + 4 * v7)); /*0x79cd76*/
        operator delete((void *)(v9)); /*0x79cd7c*/
      }
      v11 = *(float *)&v14.vfptr1; /*0x79cd8a*/
      *(unsigned int *)(*(unsigned int *)&stru_B76900.isAliveFlag + 4 * v7) = v10; /*0x79cd8e*/
      --stru_B76900.lastLayer; /*0x79cd9d*/
      if ( v11 > dbl_B769B0 ) /*0x79cda7*/
        goto LABEL_34; /*0x79cda7*/
    }
    else
    {
      v12 = v8->vtable3; /*0x79cdab*/
      if ( v12 ) /*0x79cdb0*/
      {
        while ( !(uint8_t)((String *)((String *)v12))->Compare((const char **)&v14) ) /*0x79cdc0*/
        {
          v8 = v12; /*0x79cdc2*/
          v12 = v12->vtable3; /*0x79cdc4*/
          if ( !v12 ) /*0x79cdc9*/
            goto LABEL_32; /*0x79cdc9*/
        }
        v8->vtable3 = v12->vtable3; /*0x79cdd0*/
        --stru_B76900.lastLayer; /*0x79cddc*/
        DeleteAndZero((ObjectClass *)v12); /*0x79cde6*/
        operator delete((void *)((void *)v12)); /*0x79cdec*/
      }
  LABEL_32:
      if ( *(float *)&v14.vfptr1 > dbl_B769B0 ) /*0x79ce03*/
        goto LABEL_34; /*0x79ce03*/
    }
    RemoveWOLPlayerLogin_Remove((ObjectClass *)&stru_B76900.isAliveFlag); /*0x79ce0a*/
  LABEL_34:
    memset(&v14.uniqueId, 0, 0x6Cu); /*0x79ce0f*/
    v13 = ((String *)((String *)vtable1))->GetOrEmpty_Alt(); /*0x79ce20*/
    strncpy((char *)&v14.attachedTag, v13, 9u); /*0x79ce2b*/
    (*(void (__stdcall **)(LPVOID, int *))(*(unsigned int *)ppv + 228))(ppv, &v14.uniqueId); /*0x79ce40*/
    DeleteAndZero(&v14); /*0x79ce4a*/
    DeleteAndZero((ObjectClass *)&v14.vfptr3); /*0x79ce53*/
  }
}
}
// 0x79CE70
namespace gamemd {
AbstractClass * * int WOL_RefreshChannelList()
{
  HANDLE *v1; // esi
  unsigned int result; // eax
  int i; // esi
  int v4; // edi
  int v5; // eax
  int v6; // esi
  String *v7; // ecx
  int v8; // esi
  const char *v9; // [esp+Ch] [ebp-70h] BYREF
  char v10[108]; // [esp+10h] [ebp-6Ch] BYREF

  dword_B778C8 = time(0); /*0x79ce83*/
  if ( g_WOL_RequestState && !RequestChannelListWOL() ) /*0x79ce9b*/
    return SetEvent(hEvent); /*0x79ce9b*/
  v1 = &Handles; /*0x79cea3*/
  do /*0x79ceb6*/
    ResetEvent(*v1++); /*0x79ceab*/
  while ( (int)v1 < (int)g_WOL_RequestObject ); /*0x79ceb6*/
  if ( !RequestChannelList2WOL(41, 1u) ) /*0x79cebf*/
  {
    SetEvent(Handles); /*0x79cecf*/
    return SetEvent(hEvent); /*0x79cee0*/
  }
  for ( i = 0; i < *(int *)&stru_B76900.needsRedraw; ++i ) /*0x79ceea*/
    DeleteAndZero((ObjectClass *)(&stru_B76900.parachute->AnimClass_field_0x0 + i)); /*0x79cef4*/
  v4 = 0; /*0x79cf08*/
  for ( *(unsigned int *)&stru_B76900.needsRedraw = 0; v4 < *(int *)g_WindowManager; ++v4 ) /*0x79cf16*/
  {
    unknown_libname_73(&v9); /*0x79cf20*/
    if ( v4 >= 0 && v4 < *(int *)g_WindowManager ) /*0x79cf2f*/
      ((String *)((String *)&v9))->Reassign((const char **)(*(unsigned int *)g_WOL_LoginQueue + 4 * v4)); /*0x79cf3f*/
    v5 = *(unsigned int *)&stru_B76900.needsRedraw; /*0x79cf44*/
    v6 = *(unsigned int *)&stru_B76900.needsRedraw; /*0x79cf49*/
    if ( *(int *)&stru_B76900.needsRedraw >= *(int *)&stru_B76900.hasParachute ) /*0x79cf55*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&stru_B76900.needsRedraw); /*0x79cf5c*/
      v5 = *(unsigned int *)&stru_B76900.needsRedraw; /*0x79cf61*/
    }
    if ( v5 >= *(int *)&stru_B76900.hasParachute ) /*0x79cf6c*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&stru_B76900.needsRedraw); /*0x79cf73*/
      v5 = *(unsigned int *)&stru_B76900.needsRedraw; /*0x79cf78*/
    }
    if ( v6 < v5 ) /*0x79cf7f*/
    {
      memcpy( /*0x79cf9c*/
        &stru_B76900.parachute->AnimClass_field_0x4 + v6,
        &stru_B76900.parachute->AnimClass_field_0x0 + v6,
        4 * (v5 + 0x3FFFFFFF * v6));
      v5 = *(unsigned int *)&stru_B76900.needsRedraw; /*0x79cfa1*/
    }
    v7 = (String *)(&stru_B76900.parachute->AnimClass_field_0x0 + v6); /*0x79cfaf*/
    if ( v7 ) /*0x79cfb4*/
    {
      String::AssignFromPtr(v7, &v9); /*0x79cfbb*/
      v5 = *(unsigned int *)&stru_B76900.needsRedraw; /*0x79cfc0*/
    }
    *(unsigned int *)&stru_B76900.needsRedraw = v5 + 1; /*0x79cfca*/
    DeleteAndZero((ObjectClass *)&v9); /*0x79cfcf*/
  }
  if ( String::Length((String *)&g_WOL_AuthObject) ) /*0x79cfe7*/
  {
    result = time(0) - *(unsigned int *)g_WOL_ParseState; /*0x79d000*/
    if ( result < 5 ) /*0x79d005*/
      return result; /*0x79d005*/
    DeleteAndZero::Alt2((DeleteAndZero *)&g_WOL_AuthObject); /*0x79d010*/
  }
  result = *(unsigned int *)&stru_B76900.needsRedraw; /*0x79d015*/
  if ( *(unsigned int *)&stru_B76900.needsRedraw ) /*0x79d01c*/
  {
    if ( *(int *)&stru_B76900.needsRedraw > 0 ) /*0x79d022*/
    {
      ((String *)((String *)&g_WOL_AuthObject))->Reassign((const char **)stru_B76900.parachute); /*0x79d02f*/
      v8 = 0; /*0x79d039*/
      if ( *(unsigned int *)&stru_B76900.needsRedraw ) /*0x79d03d*/
      {
        if ( *(int *)&stru_B76900.needsRedraw <= 0 ) /*0x79d03f*/
          v8 = *(unsigned int *)&stru_B76900.needsRedraw - 1; /*0x79d041*/
        Object::DtorWithDelete((Object *)(&stru_B76900.parachute->AnimClass_field_0x0 + v8), 0); /*0x79d04f*/
        memcpy( /*0x79d078*/
          &stru_B76900.parachute->AnimClass_field_0x0 + v8,
          &stru_B76900.parachute->AnimClass_field_0x4 + v8,
          4 * (*(unsigned int *)&stru_B76900.needsRedraw + 0x3FFFFFFF * (v8 + 1)));
        --*(unsigned int *)&stru_B76900.needsRedraw; /*0x79d086*/
        if ( 3 * *(unsigned int *)&stru_B76900.needsRedraw <= *(int *)&stru_B76900.hasParachute ) /*0x79d095*/
          VectorClass::Shrink((VectorClass *)&stru_B76900.needsRedraw); /*0x79d09c*/
      }
    }
    *(unsigned int *)g_WOL_ParseState = time(0); /*0x79d0a8*/
    memset(v10, 0, sizeof(v10)); /*0x79d0b8*/
    strcpy(&v10[36], ((String *)((String *)&g_WOL_AuthObject))->GetOrEmpty()); /*0x79d0e5*/
    return (*(unsigned int (__stdcall **)(LPVOID, char *))(*(unsigned int *)ppv + 96))(ppv, v10); /*0x79d0f7*/
  }
  return result; /*0x79ceda*/
}
}
// 0x79D110
namespace gamemd {
AbstractClass * * WOL_SendGameList()
{
  int v1; // esi
  int v2; // esi
  int v3; // ebx
  void *v4; // eax
  void *DynamicVector_field_0x8; // esi
  int v6; // ebp
  int v7; // esi
  char *v8; // eax
  int v9; // esi
  char *v10; // eax
  int v11; // [esp+20h] [ebp-20h]
  int v12; // [esp+2Ch] [ebp-14h]
  String v13; // [esp+34h] [ebp-Ch] BYREF
  int v14; // [esp+3Ch] [ebp-4h]

  v1 = *(unsigned int *)g_WOL_BuddyList; /*0x79d114*/
  if ( *(int *)g_WOL_BuddyList <= 10 ) /*0x79d11d*/
  {
    if ( !*(unsigned int *)g_WOL_BuddyList ) /*0x79d128*/
      return; /*0x79d128*/
  }
  else
  {
    v1 = 10; /*0x79d11f*/
  }
  unknown_libname_73(&v13); /*0x79d132*/
  if ( v1 > 0 ) /*0x79d139*/
  {
    v14 = v1; /*0x79d142*/
    do /*0x79d264*/
    {
      unknown_libname_73(&v13.ptr_4); /*0x79d14a*/
      if ( *(int *)g_WOL_BuddyList > 0 ) /*0x79d156*/
      {
        ((String *)((String *)&v13.ptr_4))->Reassign((const char **)g_WOL_ChannelMgr); /*0x79d166*/
        v2 = 0; /*0x79d170*/
        if ( *(unsigned int *)g_WOL_BuddyList ) /*0x79d174*/
        {
          if ( *(int *)g_WOL_BuddyList <= 0 ) /*0x79d17a*/
            v2 = *(unsigned int *)g_WOL_BuddyList - 1; /*0x79d17c*/
          DeleteAndZero((ObjectClass *)(g_WOL_ChannelMgr + 4 * v2)); /*0x79d188*/
          memcpy( /*0x79d1b1*/
            (void *)(g_WOL_ChannelMgr + 4 * v2),
            (const void *)(g_WOL_ChannelMgr + 4 * (v2 + 1)),
            4 * (*(unsigned int *)g_WOL_BuddyList + 0x3FFFFFFF * (v2 + 1)));
          --*(unsigned int *)g_WOL_BuddyList; /*0x79d1c5*/
          if ( 3 * *(unsigned int *)g_WOL_BuddyList <= *(int *)&DataGlobal_B779B4 ) /*0x79d1cf*/
          {
            v3 = *(unsigned int *)&DataGlobal_B779B4 / 2; /*0x79d1d8*/
            if ( *(unsigned int *)&DataGlobal_B779B4 / 2 < 10 ) /*0x79d1dd*/
              v3 = 10; /*0x79d1df*/
            if ( v3 < *(int *)&DataGlobal_B779B4 ) /*0x79d1e6*/
            {
              v4 = (void *)operator new(4 * v3); /*0x79d1f0*/
              DynamicVector_field_0x8 = (void *)g_WOL_ChannelMgr; /*0x79d1f5*/
              v6 = (int)v4; /*0x79d200*/
              if ( g_WOL_ChannelMgr ) /*0x79d202*/
              {
                memcpy( /*0x79d20c*/
                  v4,
                  (const void *)g_WOL_ChannelMgr,
                  4 * *(unsigned int *)g_WOL_BuddyList);
                DynamicVector_field_0x8 = (void *)g_WOL_ChannelMgr; /*0x79d20e*/
              }
              operator delete((void *)(DynamicVector_field_0x8)); /*0x79d215*/
              g_WOL_ChannelMgr = v6; /*0x79d21d*/
              *(unsigned int *)&DataGlobal_B779B4 = v3; /*0x79d223*/
            }
          }
        }
      }
      if ( String::Length(&v13) ) /*0x79d22d*/
        String::Append(&v13, asc_8318B8); /*0x79d23f*/
      String::Append2(&v13, (char **)&v13.ptr_4); /*0x79d24d*/
      DeleteAndZero((ObjectClass *)&v13.ptr_4); /*0x79d256*/
      --v14; /*0x79d260*/
    }
    while ( v14 ); /*0x79d264*/
  }
  v7 = *(unsigned int *)g_UIPointerTable; /*0x79d27c*/
  v11 = g_NetworkRematchState & 0xFFFF00; /*0x79d285*/
  v8 = ((String *)(&v13))->GetOrEmpty(); /*0x79d28a*/
  (*(void (__stdcall **)(LPVOID, char *, int, char *, int, int, unsigned int, unsigned int))(v7 + 20))( /*0x79d2a3*/
    g_UIPointerTable,
    g_WOL_ConnectFlag,
    g_WOL_GameConfig,
    v8,
    v11,
    -1,
    0,
    0);
  v9 = *(unsigned int *)g_UIPointerTable; /*0x79d2b7*/
  v12 = g_NetworkRematchState & 0xFFFF00; /*0x79d2b9*/
  v10 = ((String *)(&v13))->GetOrEmpty(); /*0x79d2be*/
  (*(void (__stdcall **)(LPVOID, char *, int, char *, int))(v9 + 56))( /*0x79d2d6*/
    g_UIPointerTable,
    g_WOL_ConnectFlag,
    g_WOL_GameConfig,
    v10,
    v12);
  DeleteAndZero((ObjectClass *)&v13); /*0x79d2dd*/
}
}
// 0x79D2F0
namespace gamemd {
AbstractClass * * WOL_RefreshGameList()
{
  int i; // esi
  int v2; // edi
  int v3; // eax
  int v4; // esi
  int v5; // ebp
  void *v6; // ebx
  void *DynamicVector_field_0x8; // eax
  int v8; // ebp
  void *v9; // ebx
  void *v10; // eax
  String *v11; // ecx
  ObjectClass *v12; // [esp+0h] [ebp-14h]
  int v13; // [esp+8h] [ebp-Ch]
  String v14; // [esp+Ch] [ebp-8h] BYREF

  for ( i = 0; i < *(int *)g_WOL_BuddyList; ++i ) /*0x79d2fe*/
    DeleteAndZero((ObjectClass *)(g_WOL_ChannelMgr + 4 * i)); /*0x79d308*/
  v2 = 0; /*0x79d31c*/
  *(unsigned int *)g_WOL_BuddyList = 0; /*0x79d320*/
  for ( *(unsigned int *)&v14.ptr_4 = 0; v2 < *(int *)g_WindowManager; *(unsigned int *)&v14.ptr_4 = v2 ) /*0x79d32e*/
  {
    unknown_libname_73(&v14); /*0x79d33a*/
    if ( v2 >= 0 && v2 < *(int *)g_WindowManager ) /*0x79d349*/
      ((String *)(&v14))->Reassign((const char **)(*(unsigned int *)g_WOL_LoginQueue + 4 * v2)); /*0x79d359*/
    v3 = *(unsigned int *)g_WOL_BuddyList; /*0x79d35e*/
    v4 = *(unsigned int *)g_WOL_BuddyList; /*0x79d363*/
    v13 = *(unsigned int *)g_WOL_BuddyList; /*0x79d367*/
    v5 = *(unsigned int *)&DataGlobal_B779B4; /*0x79d371*/
    if ( *(int *)g_WOL_BuddyList >= *(int *)&DataGlobal_B779B4 ) /*0x79d379*/
    {
      v5 = 2 * *(unsigned int *)g_WOL_BuddyList; /*0x79d383*/
      if ( 2 * *(unsigned int *)g_WOL_BuddyList < 10 ) /*0x79d389*/
        v5 = 10; /*0x79d38b*/
      v6 = (void *)operator new(4 * v5); /*0x79d39f*/
      memset(v6, 0, 4 * ((unsigned int)(4 * v5) >> 2)); /*0x79d3ad*/
      DynamicVector_field_0x8 = (void *)g_WOL_ChannelMgr; /*0x79d3b6*/
      if ( g_WOL_ChannelMgr ) /*0x79d3bd*/
      {
        memcpy(v6, (const void *)g_WOL_ChannelMgr, 4 * *(unsigned int *)g_WOL_BuddyList); /*0x79d3c9*/
        DynamicVector_field_0x8 = (void *)g_WOL_ChannelMgr; /*0x79d3cb*/
        v4 = v13; /*0x79d3d0*/
      }
      operator delete((void *)(DynamicVector_field_0x8)); /*0x79d3d5*/
      v3 = *(unsigned int *)g_WOL_BuddyList; /*0x79d3da*/
      v2 = *(unsigned int *)&v14.ptr_4; /*0x79d3df*/
      g_WOL_ChannelMgr = (int)v6; /*0x79d3e6*/
      *(unsigned int *)&DataGlobal_B779B4 = v5; /*0x79d3ec*/
    }
    if ( v3 >= v5 ) /*0x79d3f4*/
    {
      v8 = 2 * v3; /*0x79d3f6*/
      if ( 2 * v3 < 10 ) /*0x79d3fc*/
        v8 = 10; /*0x79d3fe*/
      v9 = (void *)operator new(4 * v8); /*0x79d412*/
      memset(v9, 0, 4 * ((unsigned int)(4 * v8) >> 2)); /*0x79d420*/
      v10 = (void *)g_WOL_ChannelMgr; /*0x79d429*/
      if ( g_WOL_ChannelMgr ) /*0x79d430*/
      {
        memcpy(v9, (const void *)g_WOL_ChannelMgr, 4 * *(unsigned int *)g_WOL_BuddyList); /*0x79d43c*/
        v10 = (void *)g_WOL_ChannelMgr; /*0x79d43e*/
        v4 = v13; /*0x79d443*/
      }
      operator delete((void *)(v10)); /*0x79d448*/
      v3 = *(unsigned int *)g_WOL_BuddyList; /*0x79d44d*/
      v2 = *(unsigned int *)&v14.ptr_4; /*0x79d452*/
      g_WOL_ChannelMgr = (int)v9; /*0x79d459*/
      *(unsigned int *)&DataGlobal_B779B4 = v8; /*0x79d45f*/
    }
    if ( v4 < v3 ) /*0x79d467*/
    {
      memcpy( /*0x79d484*/
        (void *)(g_WOL_ChannelMgr + 4 * v4 + 4),
        (const void *)(g_WOL_ChannelMgr + 4 * v4),
        4 * (v3 + 0x3FFFFFFF * v4));
      v3 = *(unsigned int *)g_WOL_BuddyList; /*0x79d489*/
    }
    v11 = (String *)(g_WOL_ChannelMgr + 4 * v4); /*0x79d497*/
    if ( v11 ) /*0x79d49c*/
    {
      String::AssignFromPtr(v11, (const char **)&v14); /*0x79d4a3*/
      v3 = *(unsigned int *)g_WOL_BuddyList; /*0x79d4a8*/
    }
    *(unsigned int *)g_WOL_BuddyList = v3 + 1; /*0x79d4b2*/
    DeleteAndZero((ObjectClass *)&v14); /*0x79d4b7*/
    ++v2; /*0x79d4c1*/
  }
  SendGameListWOL(v12); /*0x79d4d0*/
}
}
// 0x79D4E0
namespace gamemd {
AbstractClass * * CleanupWOLSession()
{
  int i; // esi
  int v2; // esi
  unsigned int v3; // eax
  unsigned int v4; // ebp
  ObjectClass *v5; // esi
  ObjectClass *v6; // edi
  unsigned int occupant; // eax
  unsigned int j; // ebp
  ObjectClass *customSound; // esi
  ObjectClass *v10; // edi
  int k; // esi
  int v12; // esi
  ObjectClass *v13; // [esp+0h] [ebp-Ch]
  char *v14; // [esp+8h] [ebp-4h] BYREF

  for ( i = 0; i < *(int *)g_WindowManager; ++i ) /*0x79d4ee*/
    DeleteAndZero((ObjectClass *)(*(unsigned int *)g_WOL_LoginQueue + 4 * i)); /*0x79d4f8*/
  v2 = 0; /*0x79d50c*/
  for ( *(unsigned int *)g_WindowManager = 0; v2 < *(int *)&stru_B76900.needsRedraw; ++v2 ) /*0x79d516*/
    DeleteAndZero((ObjectClass *)(&stru_B76900.parachute->AnimClass_field_0x0 + v2)); /*0x79d521*/
  v3 = *(unsigned int *)&stru_B76900.isInLogic; /*0x79d530*/
  v4 = 0; /*0x79d536*/
  for ( *(unsigned int *)&stru_B76900.needsRedraw = 0; /*0x79d541*/
        v4 < *(unsigned int *)&stru_B76900.isInLogic;
        v3 = *(unsigned int *)&stru_B76900.isInLogic )
  {
    v5 = *(ObjectClass **)(*(unsigned int *)&stru_B76900.isAliveFlag + 4 * v4); /*0x79d549*/
    while ( v5 ) /*0x79d54e*/
    {
      v6 = v5; /*0x79d550*/
      v5 = (ObjectClass *)v5->vfptr2; /*0x79d552*/
      DeleteAndZero(v6); /*0x79d55b*/
      operator delete((void *)(v6)); /*0x79d561*/
    }
    ++v4; /*0x79d572*/
    *(unsigned int *)(*(unsigned int *)&stru_B76900.isAliveFlag + 4 * v4 - 4) = 0; /*0x79d573*/
  }
  stru_B76900.lastLayer = 0; /*0x79d586*/
  if ( v3 > dword_B769C0 ) /*0x79d58e*/
  {
    do /*0x79d5af*/
    {
      if ( (*((unsigned char *)&(stru_B76900.location[2]))) ) /*0x79d596*/
        break; /*0x79d596*/
      RemoveWOLPlayerLogin_Remove((ObjectClass *)&stru_B76900.isAliveFlag); /*0x79d59d*/
    }
    while ( *(unsigned int *)&stru_B76900.isInLogic > (unsigned int)dword_B769C0 ); /*0x79d5af*/
  }
  occupant = stru_B765EC.occupant; /*0x79d5b1*/
  for ( j = 0; j < stru_B765EC.occupant; occupant = stru_B765EC.occupant ) /*0x79d5ba*/
  {
    customSound = *(ObjectClass **)(stru_B765EC.referenceCount + 4 * j); /*0x79d5c2*/
    while ( customSound ) /*0x79d5c7*/
    {
      v10 = customSound; /*0x79d5c9*/
      customSound = customSound->vtable2.customSound; /*0x79d5cb*/
      DeleteAndZero(v10); /*0x79d5d7*/
      operator delete((void *)(v10)); /*0x79d5dd*/
    }
    ++j; /*0x79d5ee*/
    *(unsigned int *)(stru_B765EC.referenceCount + 4 * j - 4) = 0; /*0x79d5ef*/
  }
  stru_B765EC.NeedsSaveOrLink = 0; /*0x79d605*/
  if ( occupant > stru_B765EC.ambientSoundController[4] ) /*0x79d60c*/
  {
    do /*0x79d62d*/
    {
      if ( (*((unsigned char *)&(stru_B765EC.nextObject))) ) /*0x79d614*/
        break; /*0x79d614*/
      HashTable::Shrink((HashTable *)&stru_B765EC.referenceCount); /*0x79d61b*/
    }
    while ( stru_B765EC.occupant > (unsigned int)stru_B765EC.ambientSoundController[4] ); /*0x79d62d*/
  }
  (*(void (__stdcall **)(LPVOID))(*(unsigned int *)ppv + 220))(ppv); /*0x79d637*/
  if ( dword_A8B244 != 3 && dword_A8B244 != 1 && dword_A8B244 != 2 ) /*0x79d657*/
  {
    dword_B778C8 = time(0); /*0x79d66d*/
    if ( !RequestChannelListExWOL(41, 1u, 0) ) /*0x79d673*/
    {
      SetEvent(hEvent); /*0x79d682*/
      RefreshGameListWOL(v13); /*0x79d688*/
      return; /*0x79d690*/
    }
    for ( k = 0; k < *(int *)&stru_B76900.needsRedraw; ++k ) /*0x79d69a*/
      Object::DtorWithDelete((Object *)(&stru_B76900.parachute->AnimClass_field_0x0 + k), 0); /*0x79d6a6*/
    v12 = 0; /*0x79d6ba*/
    for ( *(unsigned int *)&stru_B76900.needsRedraw = 0; v12 < *(int *)g_WindowManager; ++v12 ) /*0x79d6c4*/
    {
      unknown_libname_73(&v14); /*0x79d6ca*/
      DynamicStringArray::Get((DynamicStringArray *)&g_WindowManager, &v14, v12); /*0x79d6da*/
      StringVector::Insert( /*0x79d6ef*/
        (StringVector *)&stru_B76900.needsRedraw,
        (const char **)&v14,
        *(int *)&stru_B76900.needsRedraw);
      DeleteAndZero((ObjectClass *)&v14); /*0x79d6f8*/
    }
    Network_Cleanup(v13); /*0x79d707*/
  }
  RefreshGameListWOL(v13); /*0x79d70c*/
}
}
// 0x79D720
namespace gamemd {
int WOLLoginDialogProc(HWND hWnd, unsigned int a2, int a3, HWND a4)
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
        SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x79d7ff*/
        v11 = GetDlgItem(hWnd, 1474); /*0x79d809*/
        EnableWindow(v11, 0); /*0x79d80c*/
        v12 = GetDlgItem(hWnd, 1810); /*0x79d81f*/
        v13 = ((String *)((char **)&g_WOL_LoginObject))->GetOrEmpty_Alt(); /*0x79d821*/
        SendMessageA(v12, 0x4B4u, 0, (LPARAM)v13); /*0x79d82f*/
        return 0; /*0x79d83a*/
      }
      return 0; /*0x79d7ca*/
    }
    if ( (uint16_t)v6 == 1344 ) /*0x79d849*/
    {
      v17 = (*(((unsigned short *)&(v6)) + 1)); /*0x79d985*/
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
          ((WideString *)((wchar_t **)&a2))->Assign(asc_831D9C); /*0x79d9f6*/
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
    if ( (uint16_t)v6 != 1474 ) /*0x79d854*/
    {
      if ( (uint16_t)v6 == 1670 ) /*0x79d85b*/
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
      ((WideString *)((wchar_t **)&a3))->Assign(asc_831D9C); /*0x79d8d1*/
      WString::TrimRight((const wchar_t **)&a4, (const wchar_t **)&a3); /*0x79d8e5*/
      DeleteAndZero::Alt((void **)&a3); /*0x79d8f1*/
      memset(v21, 0, sizeof(v21)); /*0x79d901*/
      strcpy(&v21[36], ((String *)((char **)&g_WOL_LoginObject))->GetOrEmpty()); /*0x79d927*/
      v15 = *(unsigned int *)ppv; /*0x79d936*/
      v16 = ((WideString *)((wchar_t **)&a4))->GetOrEmpty(); /*0x79d93f*/
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
// 0x79DA90
namespace gamemd {
char ** ExtractChatCommand(char ** a1, HWND a2)
{
  LRESULT v4; // esi
  wchar_t *v6; // [esp+10h] [ebp-4h] BYREF

  v4 = SendMessageA(a2, 0x188u, 0, 0); /*0x79daab*/
  if ( v4 == -1 ) /*0x79dab0*/
    v4 = 0; /*0x79dab2*/
  if ( v4 >= SendMessageA(a2, 0x18Bu, 0, 0) ) /*0x79dac2*/
  {
  LABEL_7:
    String::AssignFromPtr(a1, (const char **)&g_WOL_LoginObject); /*0x79db15*/
    return a1; /*0x79db21*/
  }
  else
  {
    while ( 1 ) /*0x79dac8*/
    {
      unknown_libname_74(&v6); /*0x79dac8*/
      UI_Assign_623F60(a2, v4, (void **)&v6); /*0x79dad6*/
      if ( (uint16_t)((WideString *)((const wchar_t **)&v6))->GetChar(0) == 40 ) /*0x79daea*/
      {
        if ( UI_Helper_7B7980((ObjectClass *)&v6, 0x29u) ) /*0x79daf2*/
          break; /*0x79daf2*/
      }
      ++v4; /*0x79daff*/
      DeleteAndZero::Alt((DeleteAndZero *)&v6); /*0x79db00*/
      if ( v4 >= SendMessageA(a2, 0x18Bu, 0, 0) ) /*0x79db13*/
        goto LABEL_7; /*0x79db13*/
    }
    WideString::RemoveChar((const wchar_t **)&v6, 0x28u); /*0x79db2f*/
    ToWideStringCharAlt((char **)a1, (const wchar_t **)&v6); /*0x79db3a*/
    DeleteAndZero::Alt((DeleteAndZero *)&v6); /*0x79db43*/
    return a1; /*0x79db48*/
  }
}
}
// 0x79DFE0
namespace gamemd {
int WOL_GameSetup_DlgProc(HWND hWnd, unsigned int a2, unsigned int a3, HWND a4)
{
  int result; // eax
  LONG WindowLongA; // ecx
  HWND v6; // ebx
  char *v7; // eax
  int v8; // eax
  int v9; // esi
  String *v10; // ecx
  int v11; // eax
  int v12; // esi
  String *v13; // ecx
  int v14; // eax
  int v15; // esi
  String *v16; // ecx
  HWND v17; // eax
  HWND v18; // eax
  HWND DlgItem; // esi
  HWND v20; // eax
  DeleteAndZero v21; // [esp+0h] [ebp-F8h]
  int v22; // [esp+0h] [ebp-F8h]
  ObjectClass *v23; // [esp+4h] [ebp-F4h]
  unsigned char v24[228]; // [esp+14h] [ebp-E4h] BYREF

  if ( a2 == 272 && a4 ) /*0x79e009*/
    SetWindowLongA(hWnd, 8, *((unsigned int *)a4 + 1)); /*0x79e012*/
  *(unsigned int *)v21.owningHouseIndex = a4; /*0x79e01f*/
  result = BaseDialogProc(hWnd, a2, a3, v21); /*0x79e025*/
  if ( !result ) /*0x79e02c*/
  {
    WindowLongA = GetWindowLongA(hWnd, 8); /*0x79e03b*/
    *(unsigned int *)&v24[8] = WindowLongA; /*0x79e043*/
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
          Dialog::DrawBackground((Dialog *)hWnd); /*0x79e07d*/
          Dialog::StopBink((Dialog *)hWnd); /*0x79e084*/
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
    if ( (uint16_t)a3 == 1344 ) /*0x79e0b0*/
    {
      if ( (*(((unsigned short *)&(a3)) + 1)) ) /*0x79e42b*/
      {
        unknown_libname_73(v24); /*0x79e438*/
        GetDialogText(a4, (String *)v24); /*0x79e443*/
        v22 = (uint8_t)MapSeed::CheckName((MapSeed *)v24); /*0x79e456*/
        v17 = GetDlgItem(hWnd, 1794); /*0x79e45d*/
        EnableWindow(v17, v22); /*0x79e464*/
        DeleteAndZero((ObjectClass *)v24); /*0x79e46e*/
        return 0; /*0x79e47f*/
      }
      return 0; /*0x79e42e*/
    }
    if ( (uint16_t)a3 == 1670 ) /*0x79e0bb*/
    {
      (*(void (**)(LONG, HWND, int))(*(unsigned int *)WindowLongA + 4))(WindowLongA, hWnd, 1670); /*0x79e419*/
      return 0; /*0x79e428*/
    }
    if ( (uint16_t)a3 != 1794 ) /*0x79e0c4*/
      return 0; /*0x79e508*/
    unknown_libname_73(&v24[4]); /*0x79e0ce*/
    v6 = GetDlgItem(hWnd, 1344); /*0x79e0df*/
    GetDialogText(v6, (String *)&v24[4]); /*0x79e0e7*/
    SendMessageA(v6, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x79e0f9*/
    if ( !(uint8_t)MapSeed::CheckName((MapSeed *)&v24[4]) /*0x79e114*/
      || !(uint8_t)MapSeed::CheckName((MapSeed *)&v24[4]) )
    {
  LABEL_52:
      InvalidateRect(v6, 0, 0); /*0x79e3df*/
      (*(void (**)(unsigned int, HWND, int))(**(unsigned int **)&v24[8] + 4))(*(unsigned int *)&v24[8], hWnd, 1794); /*0x79e3f6*/
      DeleteAndZero((ObjectClass *)&v24[4]); /*0x79e3fd*/
      return 0; /*0x79e40e*/
    }
    memset(&v24[12], 0, 0x6Cu); /*0x79e12e*/
    v7 = ((String *)((String *)&v24[4]))->GetOrEmpty_Alt(); /*0x79e134*/
    strncpy(&v24[48], v7, 9u); /*0x79e13f*/
    (*(void (__stdcall **)(LPVOID, unsigned char *))(*(unsigned int *)ppv + 224))(ppv, &v24[12]); /*0x79e154*/
    if ( !(uint8_t)MapSeed::CheckName((MapSeed *)&v24[4]) ) /*0x79e165*/
    {
  LABEL_51:
      SendGameListWOL(v23); /*0x79e3da*/
      goto LABEL_52; /*0x79e3da*/
    }
    String::AssignFromPtr((String *)v24, (const char **)&v24[4]); /*0x79e174*/
    v8 = *(unsigned int *)g_WindowManager; /*0x79e179*/
    v9 = *(unsigned int *)g_WindowManager; /*0x79e17e*/
    if ( *(int *)g_WindowManager >= (int)DataGlobal_B73AAC ) /*0x79e18a*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&g_WindowManager); /*0x79e191*/
      v8 = *(unsigned int *)g_WindowManager; /*0x79e196*/
    }
    if ( v8 >= (int)DataGlobal_B73AAC ) /*0x79e1a1*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&g_WindowManager); /*0x79e1a8*/
      v8 = *(unsigned int *)g_WindowManager; /*0x79e1ad*/
    }
    if ( v9 < v8 ) /*0x79e1b4*/
    {
      memcpy( /*0x79e1d1*/
        (void *)(*(unsigned int *)g_WOL_LoginQueue + 4 * v9 + 4),
        (const void *)(*(unsigned int *)g_WOL_LoginQueue + 4 * v9),
        4 * (v8 + 0x3FFFFFFF * v9));
      v8 = *(unsigned int *)g_WindowManager; /*0x79e1d6*/
    }
    v10 = (String *)(*(unsigned int *)g_WOL_LoginQueue + 4 * v9); /*0x79e1e4*/
    if ( v10 ) /*0x79e1e9*/
    {
      String::AssignFromPtr(v10, (const char **)v24); /*0x79e1f0*/
      v8 = *(unsigned int *)g_WindowManager; /*0x79e1f5*/
    }
    *(unsigned int *)g_WindowManager = v8 + 1; /*0x79e1fb*/
    v11 = *(unsigned int *)&stru_B76900.needsRedraw; /*0x79e200*/
    v12 = *(unsigned int *)&stru_B76900.needsRedraw; /*0x79e205*/
    if ( *(int *)&stru_B76900.needsRedraw >= *(int *)&stru_B76900.hasParachute ) /*0x79e211*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&stru_B76900.needsRedraw); /*0x79e218*/
      v11 = *(unsigned int *)&stru_B76900.needsRedraw; /*0x79e21d*/
    }
    if ( v11 >= *(int *)&stru_B76900.hasParachute ) /*0x79e228*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&stru_B76900.needsRedraw); /*0x79e22f*/
      v11 = *(unsigned int *)&stru_B76900.needsRedraw; /*0x79e234*/
    }
    if ( v12 < v11 ) /*0x79e23b*/
    {
      memcpy( /*0x79e258*/
        &stru_B76900.parachute->AnimClass_field_0x4 + v12,
        &stru_B76900.parachute->AnimClass_field_0x0 + v12,
        4 * (v11 + 0x3FFFFFFF * v12));
      v11 = *(unsigned int *)&stru_B76900.needsRedraw; /*0x79e25d*/
    }
    v13 = (String *)(&stru_B76900.parachute->AnimClass_field_0x0 + v12); /*0x79e26b*/
    if ( v13 ) /*0x79e270*/
    {
      String::AssignFromPtr(v13, (const char **)v24); /*0x79e277*/
      v11 = *(unsigned int *)&stru_B76900.needsRedraw; /*0x79e27c*/
    }
    *(unsigned int *)&stru_B76900.needsRedraw = v11 + 1; /*0x79e282*/
    v14 = *(unsigned int *)g_WOL_BuddyList; /*0x79e287*/
    v15 = *(unsigned int *)g_WOL_BuddyList; /*0x79e28c*/
    if ( *(int *)g_WOL_BuddyList >= *(int *)&DataGlobal_B779B4 ) /*0x79e298*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x79e29f*/
      v14 = *(unsigned int *)g_WOL_BuddyList; /*0x79e2a4*/
    }
    if ( v14 >= *(int *)&DataGlobal_B779B4 ) /*0x79e2af*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x79e2b6*/
      v14 = *(unsigned int *)g_WOL_BuddyList; /*0x79e2bb*/
    }
    if ( v15 < v14 ) /*0x79e2c2*/
    {
      memcpy( /*0x79e2df*/
        (void *)(g_WOL_ChannelMgr + 4 * v15 + 4),
        (const void *)(g_WOL_ChannelMgr + 4 * v15),
        4 * (v14 + 0x3FFFFFFF * v15));
      v14 = *(unsigned int *)g_WOL_BuddyList; /*0x79e2e4*/
    }
    v16 = (String *)(g_WOL_ChannelMgr + 4 * v15); /*0x79e2f2*/
    if ( v16 ) /*0x79e2f7*/
    {
      String::AssignFromPtr(v16, (const char **)v24); /*0x79e2fe*/
      v14 = *(unsigned int *)g_WOL_BuddyList; /*0x79e303*/
    }
    *(unsigned int *)g_WOL_BuddyList = v14 + 1; /*0x79e30e*/
    if ( String::Length((String *)&g_WOL_AuthObject) ) /*0x79e313*/
    {
      if ( (unsigned int)(time(0) - *(unsigned int *)g_WOL_ParseState) < 5 ) /*0x79e331*/
      {
  LABEL_50:
        DeleteAndZero((ObjectClass *)v24); /*0x79e3d1*/
        goto LABEL_51; /*0x79e3d5*/
      }
      DeleteAndZero::Alt2((DeleteAndZero *)&g_WOL_AuthObject); /*0x79e33c*/
    }
    if ( *(unsigned int *)&stru_B76900.needsRedraw ) /*0x79e348*/
    {
      if ( (uint8_t)DynamicStringArray::Get( /*0x79e35a*/
                              (DynamicStringArray *)&stru_B76900.needsRedraw,
                              (char **)&g_WOL_AuthObject,
                              0) )
        DynamicArray::Remove((DynamicArray *)&stru_B76900.needsRedraw, 0); /*0x79e36a*/
      *(unsigned int *)g_WOL_ParseState = time(0); /*0x79e376*/
      memset(&v24[120], 0, 0x6Cu); /*0x79e389*/
      strcpy(&v24[156], ((String *)((String *)&g_WOL_AuthObject))->GetOrEmpty()); /*0x79e3bc*/
      (*(void (__stdcall **)(LPVOID, unsigned char *))(*(unsigned int *)ppv + 96))(ppv, &v24[120]); /*0x79e3ce*/
    }
    goto LABEL_50; /*0x79e3ce*/
  }
  return result; /*0x79e069*/
}
}
// 0x79E520
namespace gamemd {
AbstractClass * * WOL_PlayerOptions_DlgProc(HWND hWnd, unsigned int a2, UINT_PTR uIDEvent, HWND a4)
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
  Dialog *DialogIndirect; // esi
  HWND v17; // eax
  HWND v18; // eax
  int v19; // esi
  unsigned int *v20; // esi
  HWND v21; // eax
  LRESULT v22; // eax
  HWND v23; // eax
  HWND v24; // eax
  int v25; // esi
  unsigned int *v26; // esi
  HWND v27; // eax
  int v28; // esi
  HWND v29; // eax
  HWND DlgItem; // esi
  LRESULT v31; // edi
  int i; // esi
  int v33; // esi
  DeleteAndZero v34; // [esp-4h] [ebp-90h]
  BOOL v35; // [esp-4h] [ebp-90h]
  BOOL v36; // [esp-4h] [ebp-90h]
  BOOL BuddyWOL; // [esp-4h] [ebp-90h]
  ObjectClass *v38; // [esp+0h] [ebp-8Ch]
  String v39; // [esp+10h] [ebp-7Ch] BYREF
  char v40[108]; // [esp+20h] [ebp-6Ch] BYREF

  if ( a2 == 272 && a4 ) /*0x79e546*/
    SetWindowLongA(hWnd, 8, *((unsigned int *)a4 + 1)); /*0x79e54f*/
  *(unsigned int *)v34.owningHouseIndex = a4; /*0x79e55c*/
  result = BaseDialogProc(hWnd, a2, uIDEvent, v34); /*0x79e562*/
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
          Dialog::DrawBackground((Dialog *)hWnd); /*0x79e5a9*/
          Dialog::StopBink((Dialog *)hWnd); /*0x79e5b0*/
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
        if ( (*(uint8_t (**)(LONG))(*(unsigned int *)WindowLongA + 8))(WindowLongA) ) /*0x79e9dd*/
          return 0; /*0x79e9e2*/
        if ( (uint16_t)uIDEvent > 0x689u ) /*0x79e9f4*/
        {
          switch ( (int16_t)uIDEvent ) /*0x79ed73*/
          {
            case 1794: /*0x79ed73*/
              SimpleDialogControl::Constructor((SimpleDialogControl *)&v39.vtable2); /*0x79edc9*/
              /* X11: vtable install elided (implicit via off_7F7624 virtuals 0x79ede2) */
              RunDialog( /*0x79ede6*/
                0x115u,
                (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))GameSetupDlgProcWOL,
                (LPARAM)&v39.vtable2);
              FillBuddyListWOL((ObjectClass *)hWnd); /*0x79eded*/
              /* X11: vtable install elided (implicit via off_7F7624 virtuals 0x79edf6) */
              OwnerDrawControl::InitVtable((OwnerDrawControl *)&v39.vtable2); /*0x79edfa*/
              return 0; /*0x79ee08*/
            case 1795: /*0x79ed73*/
              DlgItem = GetDlgItem(hWnd, 1673); /*0x79ee1f*/
              v31 = SendMessageA(DlgItem, 0x188u, 0, 0); /*0x79ee2b*/
              if ( v31 == -1 ) /*0x79ee30*/
                return 0; /*0x79ee30*/
              unknown_libname_73(&v39); /*0x79ee3a*/
              GetListBoxItemText(DlgItem, v31, (void **)&v39); /*0x79ee48*/
              RemoveWOLPlayerLogin((const char **)&v39); /*0x79ee51*/
              SendMessageA(DlgItem, 0x182u, v31, 0); /*0x79ee5f*/
              DeleteAndZero::Alt2((DeleteAndZero *)&g_WOL_LoginObject); /*0x79ee66*/
              FillBuddyListWOL((ObjectClass *)hWnd); /*0x79ee6d*/
              DeleteAndZero((ObjectClass *)&v39); /*0x79ee76*/
              return 0; /*0x79ee84*/
            case 1796: /*0x79ed73*/
              EnableWindow(a4, 0); /*0x79ee91*/
              dword_B778C8 = time(0); /*0x79eea8*/
              if ( !RequestChannelListExWOL(41, 1u, 0) ) /*0x79eeaf*/
              {
                SetEvent(hEvent); /*0x79eebf*/
                goto LABEL_116; /*0x79eec5*/
              }
              for ( i = 0; i < *(int *)&stru_B76900.needsRedraw; ++i ) /*0x79eed3*/
                DeleteAndZero((ObjectClass *)(&stru_B76900.parachute->AnimClass_field_0x0 + i)); /*0x79eede*/
              v33 = 0; /*0x79eef2*/
              for ( *(unsigned int *)&stru_B76900.needsRedraw = 0; v33 < *(int *)g_WindowManager; ++v33 ) /*0x79ef00*/
              {
                unknown_libname_73(&v39); /*0x79ef06*/
                if ( v33 >= 0 && v33 < *(int *)g_WindowManager ) /*0x79ef15*/
                  ((String *)(&v39))->Reassign((const char **)(*(unsigned int *)g_WOL_LoginQueue + 4 * v33)); /*0x79ef24*/
                StringVector::Insert( /*0x79ef3a*/
                  (StringVector *)&stru_B76900.needsRedraw,
                  (const char **)&v39,
                  *(int *)&stru_B76900.needsRedraw);
                DeleteAndZero((ObjectClass *)&v39); /*0x79ef43*/
              }
              if ( !String::Length((String *)&g_WOL_AuthObject) ) /*0x79ef5e*/
                goto LABEL_112; /*0x79ef5e*/
              if ( (unsigned int)(time(0) - *(unsigned int *)g_WOL_ParseState) >= 5 ) /*0x79ef75*/
              {
                DeleteAndZero::Alt2((DeleteAndZero *)&g_WOL_AuthObject); /*0x79ef80*/
  LABEL_112:
                if ( *(unsigned int *)&stru_B76900.needsRedraw ) /*0x79ef8c*/
                {
                  if ( (uint8_t)DynamicStringArray::Get( /*0x79ef9a*/
                                          (DynamicStringArray *)&stru_B76900.needsRedraw,
                                          (char **)&g_WOL_AuthObject,
                                          0) )
                    DynamicArray::Remove((DynamicArray *)&stru_B76900.needsRedraw, 0); /*0x79efaa*/
                  *(unsigned int *)g_WOL_ParseState = time(0); /*0x79efb6*/
                  memset(v40, 0, sizeof(v40)); /*0x79efc6*/
                  strcpy(&v40[36], ((String *)((String *)&g_WOL_AuthObject))->GetOrEmpty()); /*0x79eff3*/
                  (*(void (__stdcall **)(LPVOID, char *))(*(unsigned int *)ppv + 96))(ppv, v40); /*0x79f005*/
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
              if ( (unsigned short)uIDEvent == 1887 ) /*0x79eda1*/
                v28 = v28 == 0; /*0x79edaa*/
              g_MenuStateFlags = v28; /*0x79edae*/
              Dialog::RefreshDialogsGame(0); /*0x79edb4*/
              return 0; /*0x79edc2*/
            default:
              return 0;
          }
          return 0; /*0x79f015*/
        }
        if ( (uint16_t)uIDEvent != 1673 ) /*0x79e9fa*/
        {
          if ( (uint16_t)uIDEvent > 0x62Bu ) /*0x79ea05*/
          {
            if ( (uint16_t)uIDEvent == 1581 ) /*0x79eb04*/
            {
              (*(void (**)(LONG, HWND, int))(*(unsigned int *)WindowLongA + 4))(WindowLongA, hWnd, 1581); /*0x79eb32*/
              return 0; /*0x79eb3e*/
            }
            if ( (uint16_t)uIDEvent == 1670 ) /*0x79eb09*/
            {
              (*(void (**)(LONG, HWND, int))(*(unsigned int *)WindowLongA + 4))(WindowLongA, hWnd, 1670); /*0x79eb19*/
              return 0; /*0x79eb25*/
            }
          }
          else
          {
            switch ( (uint16_t)uIDEvent ) /*0x79ea0b*/
            {
              case 0x62Bu: /*0x79ea0b*/
                (*(void (**)(LONG, HWND, int))(*(unsigned int *)WindowLongA + 4))(WindowLongA, hWnd, 1579); /*0x79eaf0*/
                return 0; /*0x79eafc*/
              case 0x540u: /*0x79ea0b*/
                if ( (*(((unsigned short *)&(uIDEvent)) + 1)) == 768 ) /*0x79ea8f*/
                {
                  unknown_libname_73(&v39); /*0x79ea99*/
                  GetDialogText(a4, &v39); /*0x79eaa9*/
                  v35 = String::Length(&v39) != 0; /*0x79eabd*/
                  v17 = GetDlgItem(hWnd, 1794); /*0x79eac4*/
                  EnableWindow(v17, v35); /*0x79eacb*/
                  DeleteAndZero((ObjectClass *)&v39); /*0x79ead5*/
                  return 0; /*0x79eae3*/
                }
                break;
              case 0x5C2u: /*0x79ea0b*/
                DialogIndirect = (Dialog *)CreateDialogIndirect( /*0x79ea41*/
                                             g_hInstance,
                                             (HWND)0x11E,
                                             g_hWnd,
                                             (DLGPROC)ChatDialog::DlgProc,
                                             0);
                SetupDialog(DialogIndirect, 286); /*0x79ea4a*/
                SendMessageA((HWND)DialogIndirect, 0x4A9u, 0, 1); /*0x79ea59*/
                ShowWindow((HWND)DialogIndirect, 1); /*0x79ea62*/
                MessageDialogLoopAlt((HWND)DialogIndirect, (uint8_t (*)(void))Game::ProcessIdle, 0, 1, 1); /*0x79ea75*/
                return 0; /*0x79ea83*/
            }
          }
          return 0; /*0x79ea1d*/
        }
        if ( (*(((unsigned short *)&(uIDEvent)) + 1)) != 1 ) /*0x79eb45*/
        {
          if ( (*(((unsigned short *)&(uIDEvent)) + 1)) == 2 ) /*0x79eb4c*/
          {
            if ( FindBuddyWOL() ) /*0x79eb52*/
            {
              v18 = GetDlgItem(hWnd, 1581); /*0x79eb6a*/
              SendMessageA(v18, 0xF5u, 0, 0); /*0x79eb71*/
              return 0; /*0x79eb80*/
            }
            if ( String::Length((String *)&g_WOL_LoginObject) ) /*0x79eb88*/
            {
              if ( stru_B76900.lastLayer ) /*0x79eb9c*/
              {
                v19 = *(unsigned int *)(*(unsigned int *)&stru_B76900.isAliveFlag /*0x79ebc2*/
                                + 4
                                * (((int (__thiscall *)(ObjectClass *))stru_B76900.lineTrailer)(&g_WOL_LoginObject)
                                 & ((1 << (*((signed char *)&(stru_B76900.location[0])))) - 1)));
                if ( v19 ) /*0x79ebc7*/
                {
                  while ( !(uint8_t)((String *)((String *)v19))->Compare((const char **)&g_WOL_LoginObject) ) /*0x79ebdb*/
                  {
                    v19 = v19->vtable3; /*0x79ebdd*/
                    if ( !v19 ) /*0x79ebe2*/
                      return 0; /*0x79ebed*/
                  }
                  v20 = &v19->vtable2; /*0x79ebf8*/
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
          DeleteAndZero::Alt2((DeleteAndZero *)&g_WOL_LoginObject); /*0x79ec5b*/
        else
          GetListBoxItemText(a4, v22, &g_WOL_LoginObject.vfptr); /*0x79ec6b*/
        v36 = String::Length((String *)&g_WOL_LoginObject) != 0; /*0x79ec88*/
        v23 = GetDlgItem(hWnd, 1795); /*0x79ec8f*/
        EnableWindow(v23, v36); /*0x79ec98*/
        BuddyWOL = FindBuddyWOL(); /*0x79eca4*/
        v24 = GetDlgItem(hWnd, 1581); /*0x79ecab*/
        EnableWindow(v24, BuddyWOL); /*0x79ecae*/
        if ( String::Length((String *)&g_WOL_LoginObject) ) /*0x79ecb5*/
        {
          if ( !stru_B76900.lastLayer ) /*0x79eccb*/
            goto LABEL_88; /*0x79eccb*/
          v25 = *(unsigned int *)(*(unsigned int *)&stru_B76900.isAliveFlag /*0x79eced*/
                          + 4
                          * (((int (__thiscall *)(ObjectClass *))stru_B76900.lineTrailer)(&g_WOL_LoginObject)
                           & ((1 << (*((signed char *)&(stru_B76900.location[0])))) - 1)));
          if ( !v25 ) /*0x79ecf2*/
            goto LABEL_88; /*0x79ecf2*/
          while ( !(uint8_t)((String *)((String *)v25))->Compare((const char **)&g_WOL_LoginObject) ) /*0x79ed02*/
          {
            v25 = v25->vtable3; /*0x79ed04*/
            if ( !v25 ) /*0x79ed09*/
            {
              v39.vtable1 = 0; /*0x79ed0b*/
              goto LABEL_90; /*0x79ed10*/
            }
          }
          v26 = &v25->vtable2; /*0x79ed16*/
          if ( v26 && *v26 > 2u ) /*0x79ed21*/
            v39.vtable1 = 1; /*0x79ed2f*/
          else
  LABEL_88:
            v39.vtable1 = 0; /*0x79ed28*/
        }
        else
        {
          v39.vtable1 = 0; /*0x79ecbe*/
        }
  LABEL_90:
        v27 = GetDlgItem(hWnd, 1474); /*0x79ed34*/
        EnableWindow(v27, (uint8_t)v39.vtable1); /*0x79ed48*/
        ShowUserProfileWOL((ObjectClass *)hWnd); /*0x79ed4c*/
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
        for ( j = 0; j < *(int *)&stru_B76900.needsRedraw; ++j ) /*0x79e893*/
          DeleteAndZero((ObjectClass *)(&stru_B76900.parachute->AnimClass_field_0x0 + j)); /*0x79e89e*/
        v15 = 0; /*0x79e8b2*/
        for ( *(unsigned int *)&stru_B76900.needsRedraw = 0; v15 < *(int *)g_WindowManager; ++v15 ) /*0x79e8c0*/
        {
          unknown_libname_73(&v39); /*0x79e8c6*/
          if ( v15 >= 0 && v15 < *(int *)g_WindowManager ) /*0x79e8d5*/
            ((String *)(&v39))->Reassign((const char **)(*(unsigned int *)g_WOL_LoginQueue + 4 * v15)); /*0x79e8e5*/
          StringVector::Insert( /*0x79e8fb*/
            (StringVector *)&stru_B76900.needsRedraw,
            (const char **)&v39,
            *(int *)&stru_B76900.needsRedraw);
          DeleteAndZero((ObjectClass *)&v39); /*0x79e904*/
        }
        if ( String::Length((String *)&g_WOL_AuthObject) ) /*0x79e918*/
        {
          if ( (unsigned int)(time(0) - *(unsigned int *)g_WOL_ParseState) < 5 ) /*0x79e936*/
            return 0; /*0x79e936*/
          DeleteAndZero::Alt2((DeleteAndZero *)&g_WOL_AuthObject); /*0x79e941*/
        }
        if ( !*(unsigned int *)&stru_B76900.needsRedraw ) /*0x79e94d*/
          return 0; /*0x79e94d*/
        if ( (uint8_t)DynamicStringArray::Get( /*0x79e95f*/
                                (DynamicStringArray *)&stru_B76900.needsRedraw,
                                (char **)&g_WOL_AuthObject,
                                0) )
          DynamicArray::Remove((DynamicArray *)&stru_B76900.needsRedraw, 0); /*0x79e96f*/
        *(unsigned int *)g_WOL_ParseState = time(0); /*0x79e97b*/
        memset(v40, 0, sizeof(v40)); /*0x79e98b*/
        strcpy(&v40[36], ((String *)((String *)&g_WOL_AuthObject))->GetOrEmpty()); /*0x79e9b8*/
        (*(void (__stdcall **)(LPVOID, char *))(*(unsigned int *)ppv + 96))(ppv, v40); /*0x79e9ca*/
        return 0; /*0x79e9d0*/
      case 0x497u: /*0x79e612*/
        Dialog::RefreshDialogsGame((Dialog *)hWnd); /*0x79e62f*/
        v6 = GetDlgItem(hWnd, 1673); /*0x79e655*/
        SendMessageA(v6, 0x4A6u, (WPARAM)stru_B765EC.vfptr1, dword_84A1C4); /*0x79e65e*/
        SendMessageA(v6, 0x4A6u, 0, dword_84A1C8); /*0x79e66e*/
        SendMessageA(v6, 0x4A6u, 0, dword_84A1CC); /*0x79e67f*/
        SendMessageA(v6, 0x4A6u, 0, dword_84A1D0); /*0x79e690*/
        SendMessageA(v6, 0x4A6u, *(WPARAM *)&DataGlobal_B73E3C, dword_84A1D4); /*0x79e6a5*/
        SendMessageA(v6, 0x4A6u, 0, dword_84A1D8); /*0x79e6b6*/
        v7 = GetDlgItem(hWnd, 1796); /*0x79e6cc*/
        v8 = HashTable::Find(&g_DialogHashTable, g_Str_File_wouref_pcx, 0); /*0x79e6ce*/
        SendMessageA(v7, 0x49Cu, 0, v8); /*0x79e6dc*/
        v9 = HashTable::Find(&g_DialogHashTable, g_Str_File_wodref_pcx, 0); /*0x79e6ea*/
        SendMessageA(v7, 0x4AAu, 0, v9); /*0x79e6f8*/
        for ( k = 0; k < *(int *)g_WindowManager; ++k ) /*0x79e703*/
          Object::DtorWithDelete((Object *)(*(unsigned int *)g_WOL_LoginQueue + 4 * k), 0); /*0x79e70f*/
        v11 = 0; /*0x79e725*/
        for ( *(unsigned int *)g_WindowManager = 0; v11 < *(int *)&stru_B76900.needsRedraw; ++v11 ) /*0x79e72f*/
          Object::DtorWithDelete((Object *)(&stru_B76900.parachute->AnimClass_field_0x0 + v11), 0); /*0x79e73b*/
        *(unsigned int *)&stru_B76900.needsRedraw = 0; /*0x79e74f*/
        HashTable::CleanupAndResize((HashTable *)&stru_B76900.isAliveFlag); /*0x79e755*/
        HashTable::Rebuild((HashTable *)&stru_B765EC.referenceCount); /*0x79e75f*/
        (*(void (__stdcall **)(LPVOID))(*(unsigned int *)ppv + 220))(ppv); /*0x79e76c*/
        if ( dword_A8B244 != 3 && dword_A8B244 != 1 && dword_A8B244 != 2 ) /*0x79e784*/
          RefreshChannelListWOL(v38); /*0x79e786*/
        Array::CleanupArrayWOL((Array *)&g_WOL_BuddyList); /*0x79e790*/
        for ( m = 0; m < *(int *)g_WindowManager; ++m ) /*0x79e79e*/
        {
          unknown_libname_73(&v39); /*0x79e7a4*/
          DynamicStringArray::Get((DynamicStringArray *)&g_WindowManager, (char **)&v39, m); /*0x79e7b4*/
          StringVector::Insert((StringVector *)&g_WOL_BuddyList, (const char **)&v39, *(int *)g_WOL_BuddyList); /*0x79e7ca*/
          DeleteAndZero((ObjectClass *)&v39); /*0x79e7d3*/
        }
        SendGameListWOL(v38); /*0x79e7e2*/
        SetTimer(hWnd, 0, 0x3E8u, 0); /*0x79e7ef*/
        return 0; /*0x79e7fe*/
      default:
        return 0; /*0x79f01b*/
    }
  }
  return result; /*0x79e598*/
}
}
// 0x79F0A0
namespace gamemd {
char sub_79F0A0(char ** a1, int * a2, char * a3)
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
        memcpy(a3, (const void *)(v7 + a2[2]), 0x10Cu); /*0x79f0e0*/
        v3 = a3; /*0x79f0e2*/
        v6 = v10; /*0x79f0e6*/
      }
      v8 = ((String *)(a1))->GetOrEmpty_Alt(); /*0x79f0ee*/
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
// 0x79F140
namespace gamemd {
Coord * * WOL_GameOptionsScreen()
{
  wchar_t *StringCSF; // eax
  int i; // esi
  TechnoTypeClass *v4; // ecx
  HWND v5; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  unsigned int occupant; // eax
  unsigned int j; // ebx
  ObjectClass *customSound; // esi
  ObjectClass *v11; // edi
  DWORD (__stdcall *v12)(DWORD, const HANDLE *, BOOL, DWORD); // ebx
  HANDLE *v13; // esi
  Dialog *Dialog; // edi
  DWORD m; // esi
  TechnoTypeClass *v16; // ecx
  TechnoTypeClass *v17; // ecx
  HANDLE *v18; // esi
  TechnoTypeClass *v19; // ecx
  DWORD v20; // esi
  HWND v21; // eax
  HWND v22; // eax
  HWND v23; // eax
  HANDLE *v24; // esi
  int v25; // esi
  int v26; // esi
  int v27; // ebp
  int referenceCount; // eax
  char *v29; // eax
  HANDLE *v30; // esi
  int v31; // eax
  int v32; // ebx
  char *v33; // eax
  char v34; // al
  TechnoTypeClass *v35; // ecx
  DWORD k; // esi
  HWND v38; // eax
  HWND v39; // eax
  HWND v40; // eax
  wchar_t *v41; // eax
  HWND v42; // eax
  HWND v43; // eax
  HWND v44; // eax
  int v45; // ebx
  int v46; // eax
  int v47; // ebp
  ObjectClass *v48; // [esp+0h] [ebp-23Ch]
  int v49; // [esp+10h] [ebp-22Ch] BYREF
  OwnerDrawControl v50; // [esp+14h] [ebp-228h] BYREF
  unsigned char v51[272]; // [esp+20h] [ebp-21Ch] BYREF
  char v52[268]; // [esp+130h] [ebp-10Ch] BYREF

  (((unsigned char *)&(DataGlobal_B77DC0))[1]) = 0; /*0x79f146*/
  g_NetworkLobbyState = 0; /*0x79f153*/
  Network::Init(); /*0x79f159*/
  if ( g_WOL_RequestState && !RequestChannelListWOL() ) /*0x79f166*/
    goto LABEL_6; /*0x79f166*/
  GameOptionsScreenWOL_Helper(); /*0x79f16f*/
  if ( !RequestChannelList2WOL(0, 0) ) /*0x79f178*/
  {
    SetEvent(Handles); /*0x79f187*/
    dword_A8B248 = 0; /*0x79f18d*/
    return 0; /*0x79f19f*/
  }
  if ( !RequestChannelListWOL() ) /*0x79f1a0*/
  {
  LABEL_6:
    dword_A8B248 = 0; /*0x79f1aa*/
    return 0; /*0x79f1bb*/
  }
  if ( g_WOL_ChannelState ) /*0x79f1c2*/
  {
    Debug::Log(); /*0x79f1d9*/
    (*(void (__stdcall **)(LPVOID))(*(unsigned int *)ppv + 36))(ppv); /*0x79f1e9*/
    StringCSF = GetStringCSF(g_Str_WOL_LeavingChannel, 0, g_Str_File_wonline_cpp, 10704); /*0x79f1fd*/
    ((WideString *)((wchar_t **)v51))->Assign(StringCSF); /*0x79f207*/
    ShowUIMessage(64, (wchar_t **)v51, 1); /*0x79f217*/
    DeleteAndZero::Alt((DeleteAndZero *)v51); /*0x79f220*/
    for ( i = 0; g_WOL_ChannelState; ++i ) /*0x79f22e*/
    {
      if ( i >= 150 ) /*0x79f23c*/
        break; /*0x79f23c*/
      Sleep(0x64u); /*0x79f240*/
      Game::ProcessIdle(v4); /*0x79f242*/
    }
    v5 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x79f256*/
    if ( v5 ) /*0x79f25d*/
    {
      g_WOL_ChannelList &= ~0x40u; /*0x79f268*/
      if ( !g_WOL_ChannelList ) /*0x79f26e*/
        CloseDialog(v5, 0); /*0x79f274*/
    }
    Current = (HWND)Dialog::GetCurrent(); /*0x79f279*/
    DlgItem = GetDlgItem(Current, 1344); /*0x79f284*/
    if ( DlgItem ) /*0x79f28c*/
      SetFocus(DlgItem); /*0x79f28f*/
  }
  occupant = stru_B765EC.occupant; /*0x79f295*/
  for ( j = 0; j < stru_B765EC.occupant; occupant = stru_B765EC.occupant ) /*0x79f29e*/
  {
    customSound = *(ObjectClass **)(stru_B765EC.referenceCount + 4 * j); /*0x79f2a5*/
    while ( customSound ) /*0x79f2aa*/
    {
      v11 = customSound; /*0x79f2ac*/
      customSound = customSound->vtable2.customSound; /*0x79f2ae*/
      DeleteAndZero(v11); /*0x79f2ba*/
      operator delete((void *)(v11)); /*0x79f2c0*/
    }
    ++j; /*0x79f2d2*/
    *(unsigned int *)(stru_B765EC.referenceCount + 4 * j - 4) = 0; /*0x79f2d3*/
  }
  stru_B765EC.NeedsSaveOrLink = 0; /*0x79f2e6*/
  if ( occupant > stru_B765EC.ambientSoundController[4] ) /*0x79f2ee*/
  {
    do /*0x79f310*/
    {
      if ( (*((unsigned char *)&(stru_B765EC.nextObject))) ) /*0x79f2f7*/
        break; /*0x79f2f7*/
      HashTable::Shrink((HashTable *)&stru_B765EC.referenceCount); /*0x79f2fe*/
    }
    while ( stru_B765EC.occupant > (unsigned int)stru_B765EC.ambientSoundController[4] ); /*0x79f310*/
  }
  v12 = WaitForMultipleObjects; /*0x79f312*/
  while ( 1 ) /*0x79f31e*/
  {
    GameOptionsScreenWOL_Load(); /*0x79f31e*/
    SimpleDialogControl::Constructor((SimpleDialogControl *)&v50); /*0x79f327*/
    v50 = (OwnerDrawControl)&off_7F7624; /*0x79f32c*/
    v13 = &Handles; /*0x79f334*/
    do /*0x79f347*/
      ResetEvent(*v13++); /*0x79f33c*/
    while ( (int)v13 < (int)g_WOL_RequestObject ); /*0x79f347*/
    Dialog = (Dialog *)CreateDialog( /*0x79f35d*/
                         0x116u,
                         (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))PlayerOptionsDlgProcWOL,
                         (LPARAM)&v50);
    ((Dialog *)(Dialog))->Show(); /*0x79f361*/
    if ( !(uint8_t)ObjectClass::Release(&v50) ) /*0x79f36a*/
      break; /*0x79f36a*/
  LABEL_33:
    ((Dialog *)(Dialog))->Destroy(); /*0x79f3e6*/
    GameOptionsScreenWOL_Destroy(v48); /*0x79f3eb*/
    switch ( ObjectClass::GetMember01(&v50) ) /*0x79f411*/
    {
      case 1472: /*0x79f411*/
      case 1670: /*0x79f411*/
        if ( dword_A8B248 != 4 ) /*0x79fb0d*/
          goto LABEL_143; /*0x79fb0d*/
        goto LABEL_142; /*0x79fb0d*/
      case 1579: /*0x79f411*/
        v18 = &Handles; /*0x79f41e*/
        do /*0x79f431*/
          ResetEvent(*v18++); /*0x79f426*/
        while ( (int)v18 < (int)g_WOL_RequestObject ); /*0x79f431*/
        if ( CreateGameWOL(v48, (int)v18) ) /*0x79f433*/
        {
          g_WOL_ChannelLeaveState = 0; /*0x79f44e*/
          while ( 1 ) /*0x79f475*/
          {
            do /*0x79f475*/
            {
              v20 = v12(0x12u, &Handles, 0, 0x14u); /*0x79f460*/
              if ( v20 != 258 ) /*0x79f468*/
                break; /*0x79f468*/
              Game::ProcessIdle(v19); /*0x79f46a*/
            }
            while ( !g_WOL_ChannelLeaveState ); /*0x79f475*/
            ResetEvent(*(&Handles + v20)); /*0x79f47f*/
            if ( !v20 || v20 == 6 ) /*0x79f488*/
              break; /*0x79f488*/
            if ( v20 == 15 ) /*0x79f48d*/
            {
              Debug::Log(); /*0x79f986*/
              byte_B77DEC = 0; /*0x79f992*/
              word_B77AD0 = 0; /*0x79f999*/
              (((unsigned char *)&(DataGlobal_B77DC0))[1]) = 0; /*0x79f9a0*/
              v50 = (OwnerDrawControl)&off_7F7624; /*0x79f9a7*/
              OwnerDrawControl::InitVtable(&v50); /*0x79f9af*/
              return 2; /*0x79f9c3*/
            }
            if ( v20 == 7 ) /*0x79f496*/
            {
              Debug::Log(); /*0x79f9c9*/
              byte_B77DEC = 0; /*0x79f9d6*/
              (*(void (__stdcall **)(LPVOID))(*(unsigned int *)ppv + 36))(ppv); /*0x79f9e0*/
              word_B77AD0 = 0; /*0x79f9e7*/
              (((unsigned char *)&(DataGlobal_B77DC0))[1]) = 1; /*0x79f9ee*/
              g_WOL_ChannelLeaveState = 0; /*0x79f9f5*/
              v50 = (OwnerDrawControl)&off_7F7624; /*0x79f9fb*/
              OwnerDrawControl::InitVtable(&v50); /*0x79fa03*/
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
        v21 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x79f4dc*/
        if ( v21 ) /*0x79f4e3*/
        {
          g_WOL_ChannelList = 0; /*0x79f4e9*/
          CloseDialog(v21, 0); /*0x79f4ef*/
        }
        v22 = (HWND)Dialog::GetCurrent(); /*0x79f4f4*/
        v23 = GetDlgItem(v22, 1344); /*0x79f4ff*/
        if ( v23 ) /*0x79f507*/
          SetFocus(v23); /*0x79f50a*/
        v24 = &Handles; /*0x79f510*/
        do /*0x79f523*/
          ResetEvent(*v24++); /*0x79f518*/
        while ( (int)v24 < (int)g_WOL_RequestObject ); /*0x79f523*/
        if ( word_B77AD0 ) /*0x79f52c*/
          ShowDialogConfirm(&word_B77AD0, 0, (uint8_t (*)(void))GameLoop::Thunk, 0); /*0x79f53b*/
        while ( (uint8_t)CloseDialog(0, 0) ) /*0x79f544*/
          ; /*0x79f54d*/
        (((unsigned char *)&(DataGlobal_B77DC0))[1]) = 0; /*0x79f55a*/
        goto LABEL_117; /*0x79f561*/
      case 1581: /*0x79f411*/
        memset(v52, 0, sizeof(v52)); /*0x79f574*/
        if ( !String::Length((String *)&g_WOL_LoginObject) ) /*0x79f57b*/
          goto LABEL_117; /*0x79f57b*/
        v49 = 0; /*0x79f597*/
        if ( !GameOptionsScreenWOL_Helper_7AE8E0( /*0x79f59b*/
                (ObjectClass *)&stru_B765EC.referenceCount,
                (const char **)&g_WOL_LoginObject,
                &v49) )
          goto LABEL_117; /*0x79f59b*/
        if ( v49 ) /*0x79f5ae*/
          memcpy(v52, (const void *)v49, sizeof(v52)); /*0x79f5bc*/
        v25 = 0; /*0x79f5cd*/
        v49 = 0; /*0x79f5cf*/
        if ( !GameOptionsScreenWOL_Helper_7AE7C0( /*0x79f5d3*/
                (ObjectClass *)&stru_B76900.isAliveFlag,
                (const char **)&g_WOL_LoginObject,
                &v49) )
          goto LABEL_117; /*0x79f5da*/
        if ( v49 ) /*0x79f5e6*/
          v25 = *(unsigned int *)v49; /*0x79f5e8*/
        v26 = v25 - 4; /*0x79f5ea*/
        if ( !v26 ) /*0x79f5ed*/
        {
          v45 = 0; /*0x79fa80*/
          memset(&v51[4], 0, 0x10Cu); /*0x79fa82*/
          v46 = *(unsigned int *)&g_WOL_AuthPool; /*0x79fa84*/
          dword_A8B248 = 4; /*0x79fa89*/
          if ( *(int *)&g_WOL_AuthPool > 0 ) /*0x79fa95*/
          {
            v47 = 0; /*0x79fa97*/
            while ( 1 ) /*0x79fa99*/
            {
              if ( v47 >= 0 && v45 < v46 ) /*0x79fa9f*/
                memcpy(&v51[4], (const void *)(*(unsigned int *)&DataGlobal_B73E18 + v47), 0x10Cu); /*0x79fab3*/
              if ( !_strcmpi(&v51[56], &v52[52]) ) /*0x79fac2*/
                break; /*0x79fac2*/
              v46 = *(unsigned int *)&g_WOL_AuthPool; /*0x79face*/
              ++v45; /*0x79fad3*/
              v47 += 268; /*0x79fad4*/
              if ( v45 >= *(int *)&g_WOL_AuthPool ) /*0x79fadc*/
                goto LABEL_143; /*0x79fadc*/
            }
            dword_B77DD4 = atol(&v52[strlen(g_Str_Lob_41_) + 52]); /*0x79faff*/
  LABEL_142:
            byte_84A210 = 0; /*0x79fb0f*/
          }
          goto LABEL_143; /*0x79fb0f*/
        }
        if ( v26 != 1 ) /*0x79f5f4*/
          goto LABEL_117; /*0x79f5f4*/
        ((String *)((String *)v51))->Assign(&v52[52]); /*0x79f606*/
        v27 = 0; /*0x79f616*/
        memset(&v51[4], 0, 0x10Cu); /*0x79f618*/
        referenceCount = stru_B76AC4.referenceCount; /*0x79f61a*/
        if ( stru_B76AC4.referenceCount <= 0 ) /*0x79f621*/
        {
  LABEL_77:
          memset(&v51[4], 0, 0x10Cu); /*0x79f681*/
          if ( g_WOL_RequestState && !RequestChannelListWOL() ) /*0x79f68c*/
            goto LABEL_84; /*0x79f68c*/
          v30 = &Handles; /*0x79f695*/
          do /*0x79f6ac*/
            ResetEvent(*v30++); /*0x79f69d*/
          while ( (int)v30 < (int)g_WOL_RequestObject ); /*0x79f6ac*/
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
          v27 = 0; /*0x79f6fc*/
          memset(&v51[4], 0, 0x10Cu); /*0x79f6fe*/
          v31 = stru_B76AC4.referenceCount; /*0x79f700*/
          if ( stru_B76AC4.referenceCount <= 0 ) /*0x79f707*/
          {
  LABEL_93:
            memset(&v51[4], 0, 0x10Cu); /*0x79f763*/
  LABEL_94:
            v34 = 0; /*0x79f765*/
          }
          else
          {
            v32 = 0; /*0x79f709*/
            while ( 1 ) /*0x79f70b*/
            {
              if ( v32 >= 0 && v27 < v31 ) /*0x79f711*/
                memcpy(&v51[4], (const void *)(v32 + stru_B76AC4.occupant), 0x10Cu); /*0x79f725*/
              v33 = ((String *)((String *)v51))->GetOrEmpty_Alt(); /*0x79f72b*/
              if ( !_strcmpi(&v51[56], v33) ) /*0x79f736*/
                break; /*0x79f736*/
              v31 = stru_B76AC4.referenceCount; /*0x79f742*/
              ++v27; /*0x79f747*/
              v32 += 268; /*0x79f748*/
              if ( v27 >= stru_B76AC4.referenceCount ) /*0x79f750*/
              {
                v12 = WaitForMultipleObjects; /*0x79f752*/
                goto LABEL_93; /*0x79f752*/
              }
            }
            v12 = WaitForMultipleObjects; /*0x79f775*/
            v34 = 1; /*0x79f77b*/
          }
          if ( !v34 ) /*0x79f769*/
            goto LABEL_115; /*0x79f769*/
          goto LABEL_98; /*0x79f769*/
        }
        v12 = 0; /*0x79f623*/
        while ( 1 ) /*0x79f625*/
        {
          if ( (int)v12 >= 0 && v27 < referenceCount ) /*0x79f62b*/
            memcpy(&v51[4], (char *)v12 + stru_B76AC4.occupant, 0x10Cu); /*0x79f63f*/
          v29 = ((String *)((String *)v51))->GetOrEmpty_Alt(); /*0x79f645*/
          if ( !_strcmpi(&v51[56], v29) ) /*0x79f650*/
            break; /*0x79f650*/
          referenceCount = stru_B76AC4.referenceCount; /*0x79f660*/
          ++v27; /*0x79f665*/
          v12 = (DWORD (__stdcall *)(DWORD, const HANDLE *, BOOL, DWORD))((char *)v12 + 268); /*0x79f666*/
          if ( v27 >= stru_B76AC4.referenceCount ) /*0x79f66e*/
          {
            v12 = WaitForMultipleObjects; /*0x79f670*/
            goto LABEL_77; /*0x79f670*/
          }
        }
  LABEL_98:
        if ( !ValidateJoinWOL(v48, (int)&v51[4], (int)v12, v27) ) /*0x79f78e*/
        {
          Debug::Log(); /*0x79f79c*/
          v12 = WaitForMultipleObjects; /*0x79f7a1*/
          goto LABEL_116; /*0x79f7aa*/
        }
        v12 = WaitForMultipleObjects; /*0x79f7af*/
        g_WOL_ChannelLeaveState = 0; /*0x79f7bb*/
        v49 = 500; /*0x79f7c5*/
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
        Game::ProcessIdle(v35); /*0x79f7ed*/
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
        (*(void (__stdcall **)(LPVOID))(*(unsigned int *)ppv + 36))(ppv); /*0x79fa34*/
        word_B77AD0 = 0; /*0x79fa3b*/
        (((unsigned char *)&(DataGlobal_B77DC0))[1]) = 1; /*0x79fa42*/
        g_WOL_ChannelLeaveState = 0; /*0x79fa49*/
        DeleteAndZero((ObjectClass *)v51); /*0x79fa4f*/
        v50 = (OwnerDrawControl)&off_7F7624; /*0x79fa58*/
        OwnerDrawControl::InitVtable(&v50); /*0x79fa60*/
        return 1; /*0x79fa74*/
      }
      if ( v49-- < 0 ) /*0x79f863*/
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
    DeleteAndZero((ObjectClass *)v51); /*0x79f898*/
  LABEL_117:
    v50 = (OwnerDrawControl)&off_7F7624; /*0x79f8a3*/
    OwnerDrawControl::InitVtable(&v50); /*0x79f8af*/
  }
  while ( 1 ) /*0x79f37f*/
  {
    for ( m = v12(0x12u, &Handles, 0, 0x64u); m == 258; m = v12(0x12u, &Handles, 0, 0x64u) ) /*0x79f387*/
    {
      if ( (uint8_t)ObjectClass::Release(&v50) ) /*0x79f38d*/
        break; /*0x79f394*/
      Game::ProcessIdle(v16); /*0x79f396*/
    }
    ResetEvent(*(&Handles + m)); /*0x79f3b9*/
    if ( !m ) /*0x79f3c1*/
      break; /*0x79f3c1*/
    if ( m == 5 ) /*0x79f3ca*/
    {
      v42 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x79f933*/
      if ( v42 ) /*0x79f93a*/
      {
        g_WOL_ChannelList = 0; /*0x79f940*/
        CloseDialog(v42, 0); /*0x79f946*/
      }
      v43 = (HWND)Dialog::GetCurrent(); /*0x79f94b*/
      v44 = GetDlgItem(v43, 1344); /*0x79f956*/
      if ( v44 ) /*0x79f95e*/
        SetFocus(v44); /*0x79f961*/
      ((Dialog *)(Dialog))->Destroy(); /*0x79f969*/
      dword_A8B248 = 0; /*0x79f96e*/
      v41 = GetStringCSF(aTxtYoureDiscon, 0, g_Str_File_wonline_cpp, 27780); /*0x79f97f*/
      goto LABEL_123; /*0x79f97f*/
    }
    (*((unsigned char *)&(v17))) = 0; /*0x79f3d0*/
    ScreenSaver::Process(v17, v48); /*0x79f3d2*/
    if ( (uint8_t)ObjectClass::Release(&v50) ) /*0x79f3db*/
      goto LABEL_33; /*0x79f3e2*/
  }
  v38 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x79f8be*/
  if ( v38 ) /*0x79f8c5*/
  {
    g_WOL_ChannelList = 0; /*0x79f8cb*/
    CloseDialog(v38, 0); /*0x79f8d1*/
  }
  v39 = (HWND)Dialog::GetCurrent(); /*0x79f8d6*/
  v40 = GetDlgItem(v39, 1344); /*0x79f8e1*/
  if ( v40 ) /*0x79f8e9*/
    SetFocus(v40); /*0x79f8ec*/
  ((Dialog *)(Dialog))->Destroy(); /*0x79f8f4*/
  dword_A8B248 = 0; /*0x79f8f9*/
  v41 = GetStringCSF(aTxtYoureDiscon, 0, g_Str_File_wonline_cpp, 27771); /*0x79f916*/
  LABEL_123:
  ShowDialogConfirm(v41, 0, (uint8_t (*)(void))GameLoop::Thunk, 0); /*0x79f91b*/
  GameOptionsScreenWOL_Destroy(v48); /*0x79f924*/
  LABEL_143:
  v50 = (OwnerDrawControl)&off_7F7624; /*0x79fb16*/
  OwnerDrawControl::InitVtable(&v50); /*0x79fb22*/
  return 0; /*0x79f195*/
}
}
// 0x79FC40
namespace gamemd {
Coord * * WOL_JoinLobby()
{
  wchar_t *StringCSF; // eax
  int v2; // edx
  wchar_t *v3; // eax
  int v5; // ebp
  int v6; // ebx
  wchar_t *v7; // eax
  HANDLE *v8; // esi
  int v9; // esi
  int v10; // esi
  wchar_t *v11; // eax
  wchar_t *v12; // ecx
  int v13; // esi
  TechnoTypeClass *v14; // ecx
  DWORD i; // esi
  HWND Dialog; // esi
  wchar_t *v17; // eax
  wchar_t *v18; // eax
  int j; // esi
  TechnoTypeClass *v20; // ecx
  HWND v21; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  wchar_t *v24; // eax
  HWND v25; // eax
  wchar_t *v26; // eax
  int k; // esi
  TechnoTypeClass *v28; // ecx
  HWND v29; // eax
  HWND v30; // eax
  HWND v31; // eax
  Skirmish *v32; // esi
  wchar_t *v33; // [esp-4h] [ebp-12Ch] BYREF
  ObjectClass *v34; // [esp+0h] [ebp-128h]
  unsigned char String2[280]; // [esp+10h] [ebp-118h] BYREF

  if ( g_MenuStateFlags ) /*0x79fc53*/
  {
    g_MenuStateFlags = 0; /*0x79fc57*/
    Dialog::RefreshDialogsGame(0); /*0x79fc5d*/
  }
  (((unsigned char *)&(DataGlobal_B77DC0))[1]) = 0; /*0x79fc63*/
  g_WOL_GameListState = 0; /*0x79fc6a*/
  g_WOL_IdleHandler = 1; /*0x79fc70*/
  g_WOL_GameProcessState = -1; /*0x79fc7a*/
  g_WOL_GameListPool = time(0); /*0x79fc93*/
  StringCSF = GetStringCSF(aTxtAwayQuickma, 0, g_Str_File_wonline_cpp, 28003); /*0x79fca2*/
  byte_B77E40 = 1; /*0x79fcac*/
  WideString::Reassign(&stru_B7622C.vfptr1, StringCSF); /*0x79fcb4*/
  g_NetworkLobbyState = 0; /*0x79fcb9*/
  Network::Init(); /*0x79fcbf*/
  g_WOL_GameListState = 0; /*0x79fcc9*/
  g_WOL_IdleHandler = 2; /*0x79fcd0*/
  g_WOL_GameProcessState = 30; /*0x79fcd6*/
  g_WOL_GameListPool = time(0); /*0x79fced*/
  *(unsigned int *)&g_WOL_AuthPool = 0; /*0x79fcf2*/
  DeleteAndZero::Alt2((DeleteAndZero *)&stru_B76AC4); /*0x79fcf8*/
  if ( g_WOL_RequestState && !RequestChannelListWOL() ) /*0x79fd0c*/
    goto LABEL_10; /*0x79fd0c*/
  GameOptionsScreenWOL_Helper(); /*0x79fd0e*/
  if ( !RequestChannelList2WOL(0, 0) ) /*0x79fd17*/
  {
    SetEvent(Handles); /*0x79fd26*/
  LABEL_10:
    byte_B77E40 = 0; /*0x79fd66*/
    WideString::Reassign(&stru_B7622C.vfptr1, &g_TypeClass_DefaultString); /*0x79fd77*/
    return 0; /*0x79fd88*/
  }
  if ( !RequestChannelListWOL() ) /*0x79fd35*/
    goto LABEL_10; /*0x79fd35*/
  v2 = *(unsigned int *)&g_WOL_AuthPool; /*0x79fd37*/
  if ( !*(unsigned int *)&g_WOL_AuthPool ) /*0x79fd3f*/
  {
    v3 = GetStringCSF(aWolNomatchinga, 0, g_Str_File_wonline_cpp, 28045); /*0x79fd58*/
    ShowDialogConfirm(v3, 0, (uint8_t (*)(void))GameLoop::Thunk, 0); /*0x79fd61*/
    goto LABEL_10; /*0x79fd61*/
  }
  *(unsigned int *)String2 = aLob39; /*0x79fd94*/
  memset(&String2[12], 0, 0x10Cu); /*0x79fd9c*/
  if ( dword_A8B244 != 2 ) /*0x79fda4*/
    *(unsigned int *)String2 = g_Str_Lob_40_; /*0x79fda6*/
  v5 = 0; /*0x79fdae*/
  if ( *(int *)&g_WOL_AuthPool <= 0 ) /*0x79fdb2*/
    goto LABEL_22; /*0x79fdb2*/
  v6 = 0; /*0x79fdb4*/
  while ( 1 ) /*0x79fdb6*/
  {
    if ( v6 >= 0 && v5 < v2 ) /*0x79fdbc*/
      memcpy(&String2[12], (const void *)(v6 + *(unsigned int *)&DataGlobal_B73E18), 0x10Cu); /*0x79fdd0*/
    if ( !_strnicmp(&String2[64], *(const char **)String2, strlen(*(const char **)String2)) ) /*0x79fdeb*/
      break; /*0x79fdeb*/
    v2 = *(unsigned int *)&g_WOL_AuthPool; /*0x79fdf7*/
    ++v5; /*0x79fdfd*/
    v6 += 268; /*0x79fdfe*/
    if ( v5 >= *(int *)&g_WOL_AuthPool ) /*0x79fe06*/
      goto LABEL_22; /*0x79fe06*/
  }
  if ( v5 >= *(int *)&g_WOL_AuthPool ) /*0x79fe10*/
  {
  LABEL_22:
    v7 = GetStringCSF(aWolMatchingser, 0, g_Str_File_wonline_cpp, 28069); /*0x79fe12*/
    ShowDialogConfirm(v7, 0, (uint8_t (*)(void))GameLoop::Thunk, 0); /*0x79fe32*/
    return 0; /*0x79fe43*/
  }
  JoinLobbyWOL_Load(); /*0x79fe44*/
  *(unsigned int *)&String2[8] = CreateDialogIndirect(g_hInstance, (HWND)0x117, g_hWnd, (DLGPROC)sub_7A2110, 0); /*0x79fe70*/
  SetupDialog(*(Dialog **)&String2[8], 279); /*0x79fe74*/
  SendMessageA(*(HWND *)&String2[8], 0x4A9u, 0, 1); /*0x79fe82*/
  ShowWindow(*(HWND *)&String2[8], 1); /*0x79fe8b*/
  v8 = &Handles; /*0x79fe97*/
  do /*0x79feaa*/
    ResetEvent(*v8++); /*0x79fe9f*/
  while ( (int)v8 < (int)g_WOL_RequestObject ); /*0x79feaa*/
  v9 = 0; /*0x79feb1*/
  for ( *(unsigned int *)&String2[4] = 0; v9 < *(int *)g_WindowManager; ++v9 ) /*0x79feb9*/
    Object::DtorWithDelete((Object *)(*(unsigned int *)g_WOL_LoginQueue + 4 * v9), 0); /*0x79fec5*/
  v10 = 0; /*0x79fed9*/
  for ( *(unsigned int *)g_WindowManager = 0; v10 < *(int *)&stru_B76900.needsRedraw; ++v10 ) /*0x79fee3*/
    Object::DtorWithDelete((Object *)(&stru_B76900.parachute->AnimClass_field_0x0 + v10), 0); /*0x79feee*/
  *(unsigned int *)&stru_B76900.needsRedraw = 0; /*0x79ff02*/
  HashTable::CleanupAndResize((HashTable *)&stru_B76900.isAliveFlag); /*0x79ff08*/
  HashTable::Rebuild((HashTable *)&stru_B765EC.referenceCount); /*0x79ff12*/
  (*(void (__stdcall **)(LPVOID))(*(unsigned int *)ppv + 220))(ppv); /*0x79ff1f*/
  if ( dword_A8B244 != 3 && dword_A8B244 != 1 && dword_A8B244 != 2 ) /*0x79ff37*/
    RefreshChannelListWOL(v34); /*0x79ff39*/
  RefreshGameListWOL(v34); /*0x79ff3e*/
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
            ((String *)((String *)String2))->Assign(aZotclot9); /*0x79ff62*/
            v11 = GetStringCSF(g_Str_TXT_JOINLOB, 0, g_Str_File_wonline_cpp, 28095); /*0x79ff78*/
            v33 = v12; /*0x79ff7d*/
            ((WideString *)(&v33))->Assign(v11); /*0x79ff81*/
            v13 = LeaveChannelExWOL((int)&String2[12], (char **)String2, v33); /*0x79ff97*/
            DeleteAndZero((ObjectClass *)String2); /*0x79ff99*/
            if ( v13 ) /*0x79ffa0*/
            {
              g_WOL_GameListState = 1; /*0x7a010b*/
              g_WOL_IdleHandler = 0; /*0x7a0115*/
              g_WOL_GameProcessState = -1; /*0x7a011b*/
              g_WOL_GameListPool = time(0); /*0x7a012d*/
              v33 = 0; /*0x7a0139*/
              v17 = GetStringCSF((wchar_t *)aWolChanneljoin, 0, g_Str_File_wonline_cpp, 28098); /*0x7a0149*/
  LABEL_70:
              ShowDialogConfirm(v17, 0, (uint8_t (*)(void))GameLoop::Thunk, (char)v33); /*0x7a0279*/
  LABEL_71:
              byte_B77E40 = 0; /*0x7a0282*/
              WideString::Reassign(&stru_B7622C.vfptr1, &g_TypeClass_DefaultString); /*0x7a0293*/
              goto LABEL_73; /*0x7a0298*/
            }
            g_WOL_GameListState = 0; /*0x79ffa7*/
            g_WOL_IdleHandler = 3; /*0x79ffad*/
            g_WOL_GameProcessState = 20; /*0x79ffb7*/
            g_WOL_GameListPool = time(0); /*0x79ffc5*/
          }
          if ( g_WOL_IdleHandler == 3 && !strcmp(&String2[64], &stru_B76AC4.needsRedraw) ) /*0x79ffe2*/
            RequestMatchWOL(v34); /*0x7a0009*/
          for ( i = WaitForMultipleObjects(0x12u, &Handles, 0, 0x14u); /*0x7a0021*/
                i == 258;
                i = WaitForMultipleObjects(0x12u, &Handles, 0, 0x14u) )
          {
            Game::ProcessIdle(v14); /*0x7a0023*/
          }
          ResetEvent(*(&Handles + i)); /*0x7a0045*/
          if ( !i || i == 6 ) /*0x7a0056*/
            goto LABEL_71; /*0x7a0056*/
          if ( i != 17 ) /*0x7a005f*/
            break; /*0x7a005f*/
          CollectWOLConnectionTokens(v34); /*0x7a0061*/
          ProcessPingRequestsWOL(v34); /*0x7a0066*/
        }
        if ( i != 5 ) /*0x7a0073*/
          break; /*0x7a0073*/
        if ( !g_WOL_IdleHandler ) /*0x7a007b*/
        {
          if ( g_WOL_ChannelState ) /*0x7a0154*/
          {
            v33 = (wchar_t *)stru_B76AC4.ambientSoundController[4]; /*0x7a0160*/
            Debug::Log(); /*0x7a016b*/
            (*(void (__stdcall **)(LPVOID))(*(unsigned int *)ppv + 36))(ppv); /*0x7a017b*/
            v18 = GetStringCSF(g_Str_WOL_LeavingChannel, 0, g_Str_File_wonline_cpp, 10704); /*0x7a018f*/
            ((WideString *)((wchar_t **)String2))->Assign(v18); /*0x7a0199*/
            ShowUIMessage(64, (wchar_t **)String2, 0); /*0x7a01a8*/
            DeleteAndZero::Alt((DeleteAndZero *)String2); /*0x7a01b1*/
            for ( j = 0; g_WOL_ChannelState; ++j ) /*0x7a01bf*/
            {
              if ( j >= 150 ) /*0x7a01cd*/
                break; /*0x7a01cd*/
              Sleep(0x64u); /*0x7a01d1*/
              Game::ProcessIdle(v20); /*0x7a01d3*/
            }
            v21 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x7a01e7*/
            if ( v21 ) /*0x7a01ee*/
            {
              g_WOL_ChannelList &= ~0x40u; /*0x7a01f9*/
              if ( !g_WOL_ChannelList ) /*0x7a01ff*/
                CloseDialog(v21, 0); /*0x7a0205*/
            }
            Current = (HWND)Dialog::GetCurrent(); /*0x7a020a*/
            DlgItem = GetDlgItem(Current, 1344); /*0x7a0215*/
            if ( DlgItem ) /*0x7a021d*/
              SetFocus(DlgItem); /*0x7a0220*/
          }
          if ( g_WOL_GameListState == 1 ) /*0x7a022c*/
          {
            v33 = 0; /*0x7a025d*/
            v17 = GetStringCSF(aWolNomatchinga, 0, g_Str_File_wonline_cpp, 28174); /*0x7a0274*/
          }
          else
          {
            v33 = 0; /*0x7a022f*/
            if ( g_WOL_GameListState == 2 ) /*0x7a0235*/
              v17 = GetStringCSF(aWolMatchtimeou, 0, g_Str_File_wonline_cpp, 28180); /*0x7a025b*/
            else
              v17 = GetStringCSF(g_Str_WOL_MatchFailExit, 0, g_Str_File_wonline_cpp, 28185); /*0x7a0248*/
          }
          goto LABEL_70; /*0x7a0248*/
        }
      }
      if ( i != 16 ) /*0x7a0089*/
        break; /*0x7a0089*/
      if ( MatchGameWOL(v34) && dword_A8B244 == 3 ) /*0x7a009f*/
      {
        Dialog = (HWND)CreateDialog(0x11Fu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_7A2600, 0); /*0x7a00b5*/
        g_WOL_GameListState = 0; /*0x7a00b7*/
        g_WOL_IdleHandler = 10; /*0x7a00be*/
        g_WOL_GameProcessState = 180; /*0x7a00c8*/
        g_WOL_GameListPool = time(0); /*0x7a00da*/
        SendMessageA(Dialog, 0x4A9u, 0, 1); /*0x7a00e8*/
        ShowWindow(Dialog, 1); /*0x7a00f1*/
      }
    }
  }
  while ( i != 7 ); /*0x7a00ff*/
  v24 = GetStringCSF(aWolMatchgamest, 0, g_Str_File_wonline_cpp, 28211); /*0x7a02ab*/
  Dialog::ShowMessage(-1, (size_t)v24); /*0x7a02b7*/
  byte_B77DEC = 0; /*0x7a02bf*/
  *(unsigned int *)&String2[4] = 1; /*0x7a02c6*/
  LABEL_73:
  CloseDialog(*(HWND *)&String2[8], 0); /*0x7a02ce*/
  JoinLobbyWOL_Destroy(v34); /*0x7a02d9*/
  v25 = (HWND)Dialog::FindByHandle((Dialog *)0x11F); /*0x7a02e3*/
  if ( v25 ) /*0x7a02ea*/
    CloseDialog(v25, 0); /*0x7a02f0*/
  if ( g_WOL_IdleHandler != 11 ) /*0x7a02fc*/
  {
    g_WOL_GameListState = 0; /*0x7a02ff*/
    g_WOL_IdleHandler = 1; /*0x7a0305*/
    g_WOL_GameProcessState = -1; /*0x7a030f*/
    g_WOL_GameListPool = time(0); /*0x7a0321*/
  }
  if ( g_WOL_ChannelState ) /*0x7a032c*/
  {
    v33 = (wchar_t *)stru_B76AC4.ambientSoundController[4]; /*0x7a0338*/
    Debug::Log(); /*0x7a0343*/
    (*(void (__stdcall **)(LPVOID))(*(unsigned int *)ppv + 36))(ppv); /*0x7a0353*/
    v26 = GetStringCSF(g_Str_WOL_LeavingChannel, 0, g_Str_File_wonline_cpp, 10704); /*0x7a0367*/
    ((WideString *)((wchar_t **)String2))->Assign(v26); /*0x7a0371*/
    ShowUIMessage(64, (wchar_t **)String2, 1); /*0x7a0381*/
    DeleteAndZero::Alt((DeleteAndZero *)String2); /*0x7a038a*/
    for ( k = 0; g_WOL_ChannelState; ++k ) /*0x7a0398*/
    {
      if ( k >= 150 ) /*0x7a03a6*/
        break; /*0x7a03a6*/
      Sleep(0x64u); /*0x7a03aa*/
      Game::ProcessIdle(v28); /*0x7a03ac*/
    }
    v29 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x7a03c0*/
    if ( v29 ) /*0x7a03c7*/
    {
      g_WOL_ChannelList &= ~0x40u; /*0x7a03d2*/
      if ( !g_WOL_ChannelList ) /*0x7a03d8*/
        CloseDialog(v29, 0); /*0x7a03de*/
    }
    v30 = (HWND)Dialog::GetCurrent(); /*0x7a03e3*/
    v31 = GetDlgItem(v30, 1344); /*0x7a03ee*/
    if ( v31 ) /*0x7a03f6*/
      SetFocus(v31); /*0x7a03f9*/
  }
  v32 = g_UIControlState; /*0x7a03ff*/
  if ( g_UIControlState ) /*0x7a0407*/
  {
    ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x7a040b*/
    operator delete((void *)(v32)); /*0x7a0411*/
    g_UIControlState = 0; /*0x7a0419*/
  }
  return *(unsigned int *)&String2[4]; /*0x79fd7e*/
}
}
// 0x792BE0
namespace gamemd {
char ShowUIMessage(int a1, wchar_t **a2, char a3)
{
  DLGTEMPLATE *DialogIndirect; // esi
  HWND DlgItem; // edi
  wchar_t *v7; // eax
  HWND Current; // eax
  HWND v9; // edi
  HWND v10; // ebp
  wchar_t *v11; // eax
  char result; // al

  DialogIndirect = (DLGTEMPLATE *)Dialog::FindByHandle((Dialog *)0xC4); /*0x792bf6*/
  if ( DialogIndirect ) /*0x792bfa*/
  {
    dword_B77DC8 |= a1; /*0x792c06*/
    if ( WideString::Length((WideString *)a2) ) /*0x792c0c*/
    {
      DlgItem = GetDlgItem((HWND)DialogIndirect, 1458); /*0x792c27*/
      v7 = WideString::GetOrEmpty_Alt((WideString *)a2); /*0x792c29*/
      SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)v7); /*0x792c37*/
    }
  }
  else if ( a1 ) /*0x792c44*/
  {
    Current = (HWND)Dialog::GetCurrent(); /*0x792c47*/
    v9 = GetDlgItem(Current, 1344); /*0x792c5a*/
    ShowUIMessage_Show(); /*0x792c5c*/
    DialogIndirect = (DLGTEMPLATE *)CreateDialogIndirect(g_hInstance, (HWND)0xC4, g_hWnd, (DLGPROC)sub_792CF0, 0); /*0x792c7e*/
    SetupDialog((Dialog *)DialogIndirect, 196); /*0x792c87*/
    v10 = GetDlgItem((HWND)DialogIndirect, 1458); /*0x792c96*/
    v11 = WideString::GetOrEmpty_Alt((WideString *)a2); /*0x792c98*/
    SendMessageA(v10, 0x4B2u, 0, (LPARAM)v11); /*0x792ca6*/
    dword_B77DC8 = a1; /*0x792cb3*/
    if ( v9 ) /*0x792cb9*/
      SetFocus(v9); /*0x792cbc*/
  }
  result = a3; /*0x792cc2*/
  if ( a3 ) /*0x792cc8*/
  {
    result = dword_B77DC8; /*0x792cca*/
    if ( dword_B77DC8 ) /*0x792cd1*/
      return MessageDialogLoopAlt((HWND)DialogIndirect, (uint8_t (*)(void))GameLoop::Thunk, 0, 1, 0); /*0x792ce0*/
  }
  return result; /*0x792ce5*/
}
} // namespace gamemd

// 0x793120
namespace gamemd {
bool E4Recv_793120::sub_793120()
{
  int v1; // eax
  ObjectClass *i; // edx
  char *v4; // eax

  v1 = 0; /*0x793128*/
  if ( g_WOL_UserList.owningHouseIndex <= 0 ) /*0x793130*/
    return 0; /*0x793130*/
  for ( i = g_WOL_UserList.nextObject; ; i = &i->HouseClass_6C ) /*0x793132*/
  {
    if ( v1 >= 0 && v1 < g_WOL_UserList.owningHouseIndex ) /*0x79313e*/
      memcpy(&g_WebBrowserConfig.occupant, i, 0x6Cu); /*0x79314c*/
    if ( (g_WebBrowserConfig.occupant & 1) != 0 ) /*0x793155*/
      break; /*0x793155*/
    if ( ++v1 >= g_WOL_UserList.owningHouseIndex ) /*0x79315d*/
      return 0; /*0x793165*/
  }
  if ( &g_WebBrowserConfig == (ObjectClass *)-36 ) /*0x79316d*/
    return 0; /*0x793172*/
  v4 = ((String *)((String *)this))->GetOrEmpty_Alt(); /*0x793178*/
  return _strcmpi((char *)&g_WebBrowserConfig.ambientSoundController[3], v4) == 0; /*0x79315f*/
}
} // namespace gamemd

// 0x793710
namespace gamemd {
short sub_793710(int a1, int a2, int a3, int a4)
{
  int v4; // esi

  (*((unsigned short *)&(v4))) = a1 + a2; /*0x79371c*/
  if ( a4 != 1 ) /*0x79371f*/
  {
    if ( a4 == 2 ) /*0x793724*/
    {
      (*((unsigned short *)&(v4))) = a2 + 2 * a1; /*0x793726*/
    }
    else if ( a4 <= 1 ) /*0x79372e*/
    {
      if ( a4 < 0 ) /*0x793753*/
      {
        if ( a4 == -100 ) /*0x793758*/
          (*((unsigned short *)&(v4))) = a2 + 100 * a1; /*0x793760*/
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
  if ( (uint16_t)v4 >= 0x400u ) /*0x793798*/
    return v4; /*0x7937a5*/
  else
    return 1024; /*0x79379c*/
}
} // namespace gamemd

// 0x793A70
namespace gamemd {
int sub_793A70(void * a1, unsigned short a2)
{
  int result; // eax
  char *v3; // esi
  signed int v4; // ebx
  int v7; // ecx
  int i; // [esp+10h] [ebp-104h]
  char v9[2]; // [esp+14h] [ebp-100h] BYREF
  char Buffer[254]; // [esp+16h] [ebp-FEh] BYREF

  result = dword_B77900; /*0x793a70*/
  v3 = 0; /*0x793a7e*/
  v4 = 0; /*0x793a80*/
  if ( (int)dword_B77900 > 0 ) /*0x793a89*/
  {
    v7 = 0; /*0x793a8f*/
    for ( i = 0; ; v7 = i ) /*0x793a91*/
    {
      if ( v7 >= 0 && v4 < result ) /*0x793aa1*/
        v3 = (char *)dword_B77908 + v7; /*0x793aa8*/
      if ( !_strcmpi(a1, v3 + 36) ) /*0x793ab0*/
      {
        memcpy(v9, "Z4", sizeof(v9)); /*0x793ac8*/
        sprintf(Buffer, "%d", a2); /*0x793ad9*/
        Debug::Log(); /*0x793ae9*/
        (*(void (__stdcall **)(LPVOID, char *, char *))(*(unsigned int *)ppv + 56))(ppv, v3, v9); /*0x793aff*/
      }
      result = dword_B77900; /*0x793b06*/
      ++v4; /*0x793b0b*/
      i += 108; /*0x793b11*/
      if ( v4 >= (int)dword_B77900 ) /*0x793b15*/
        break; /*0x793b15*/
    }
  }
  return result; /*0x793b17*/
}
} // namespace gamemd

// 0x793CD0
namespace gamemd {
int E4Recv_793CD0::sub_793CD0()
{
  int Ticks; // eax
  int *v2; // ecx
  int v4; // [esp+4h] [ebp-8h]

  dword_A8E1A4[dword_A8E224] = this; /*0x793cd8*/
  Ticks = TimerGetTicks(); /*0x793ce3*/
  v2 = (int *)(12 * dword_A8E224 + 11067844); /*0x793cf6*/
  *v2 = Ticks; /*0x793cfd*/
  v2[1] = v4; /*0x793d03*/
  v2[2] = 1200; /*0x793d06*/
  return ++dword_A8E224; /*0x793d14*/
}
} // namespace gamemd

// 0x796B20
namespace gamemd {
void nullsub_264()
{
  ; /*0x796b20*/
}
} // namespace gamemd

// 0x796B30
namespace gamemd {
int sub_796B30()
{
  int v0; // esi
  unsigned int v2[3]; // [esp+4h] [ebp-Ch] BYREF

  SimpleDialogControl::Constructor(v2); /*0x796b38*/
  v2[0] = (unsigned int)&off_7F7624; /*0x796b4c*/
  v0 = RunDialog(0xFEu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))LobbyDlgProcWOL, (LPARAM)v2); /*0x796b59*/
  v2[0] = (unsigned int)&off_7F7624; /*0x796b5b*/
  OwnerDrawControl::InitVtable(v2); /*0x796b6b*/
  if ( v0 >= 0 ) /*0x796b69*/
    return v0; /*0x796b7c*/
  else
    return 0; /*0x796b70*/
}
} // namespace gamemd

// 0x798120
namespace gamemd {
void sub_798120()
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
} // namespace gamemd

// 0x798360
namespace gamemd {
char sub_798360()
{
  LSTATUS v0; // eax
  LSTATUS v1; // esi
  HKEY phkResult; // [esp+0h] [ebp-20Ch] BYREF
  DWORD cbData; // [esp+4h] [ebp-208h] BYREF
  DWORD Type; // [esp+8h] [ebp-204h] BYREF
  BYTE Data[512]; // [esp+Ch] [ebp-200h] BYREF

  v0 = RegOpenKeyExA(HKEY_LOCAL_MACHINE, g_Str_WOL_URL_RegKey, 0, 0x20019u, &phkResult); /*0x79837c*/
  if ( !v0 ) /*0x798384*/
  {
    cbData = 512; /*0x7983a2*/
    v1 = RegQueryValueExA(phkResult, g_INI_Key_Community, 0, &Type, Data, &cbData); /*0x7983b0*/
    (*((unsigned char *)&(v0))) = RegCloseKey(phkResult); /*0x7983b7*/
    if ( !v1 ) /*0x7983c0*/
      (*((unsigned char *)&(v0))) = OpenURLWOL((const char *)Data, 0); /*0x7983c8*/
  }
  return v0; /*0x7983cd*/
}
} // namespace gamemd

// 0x79AE00
namespace gamemd {
int sub_79AE00(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
  int result; // eax
  LONG WindowLongA; // ebx
  UINT v6; // eax

  if ( a2 == 272 ) /*0x79ae16*/
  {
    if ( a4 ) /*0x79ae1a*/
      SetWindowLongA(hWnd, 8, *(unsigned int *)(a4 + 4)); /*0x79ae23*/
  }
  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x79ae33*/
  if ( !result ) /*0x79ae3a*/
  {
    WindowLongA = GetWindowLongA(hWnd, 8); /*0x79ae4c*/
    if ( a2 > 0x2B ) /*0x79ae4e*/
    {
      if ( a2 == 273 ) /*0x79aeaa*/
      {
        if ( (uint16_t)a3 == 1 ) /*0x79aeb3*/
        {
          ReadSettingsWOL(&dword_B73E40); /*0x79aeec*/
          (*(void (**)(LONG, HWND, int))(*(unsigned int *)WindowLongA + 4))(WindowLongA, hWnd, 1); /*0x79aef8*/
        }
        else if ( (uint16_t)a3 == 2 ) /*0x79aeb6*/
        {
          v6 = IsDlgButtonChecked(hWnd, 1785); /*0x79aebe*/
          ReadWOLGameOption(v6 != 1); /*0x79aecf*/
          (*(void (**)(LONG, HWND, int))(*(unsigned int *)WindowLongA + 4))(WindowLongA, hWnd, 2); /*0x79aedb*/
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
} // namespace gamemd
