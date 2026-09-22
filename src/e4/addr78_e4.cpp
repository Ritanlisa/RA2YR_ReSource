// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_785740_e4.hpp"
#include "e4/classes/E4Recv_7864C0_e4.hpp"
#include "e4/classes/E4Recv_786DC0_e4.hpp"
#include "e4/classes/E4Recv_786E70_e4.hpp"
#include "e4/classes/E4Recv_78A470_e4.hpp"
#include "e4/classes/E4Recv_78F200_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Gadget_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Session_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"
#include "e4/classes/WideString_e4.hpp"

// 0x780110
namespace gamemd {
void WOL_ResetSystem()
{
{
  void **v5; // edi
  int i; // esi
  void **v10; // edi
  unsigned int j; // edi
  unsigned int k; // edi
  int result; // eax

  _DWORD v24[2]; // [esp+10h] [ebp-8h] BYREF
  int v0 = LoadAccountInfoWOL(v24); /*0x78011b*/
  ComPtr::Set(&stru_B75E48, *(_DWORD *)(v0 + 4)); /*0x780129*/
  v24[0] = &vt_rc_ptr_PlayerProfile; /*0x780132*/
  ComPtr::Release(v24); /*0x78013a*/
  int v1 = 0; /*0x780146*/
  g_WOL_AuthPool = 0; /*0x78014a*/
  g_WOL_ChatState = 0; /*0x780150*/
  for ( g_WOL_State = 0; v1 < g_WOL_ChatPool; ++v1 ) /*0x78015c*/
    DeleteAndZero((void **)dword_B777A8 + v1); /*0x780167*/
  unsigned int v2 = g_WOL_MsgPool; /*0x780176*/
  unsigned int v3 = 0; /*0x78017b*/
  for ( g_WOL_ChatPool = 0; v3 < g_WOL_MsgPool; v2 = g_WOL_MsgPool ) /*0x780185*/
  {
    int v4 = *((_DWORD *)g_WOL_MessageQueue + v3); /*0x78018d*/
    while ( v4 ) /*0x780192*/
    {
      v5 = (void **)v4; /*0x780194*/
      v4 = *(_DWORD *)(v4 + 8); /*0x780196*/
      DeleteAndZero(v5); /*0x78019f*/
      __3_YAXPAX_Z(v5); /*0x7801a5*/
    }
    *((_DWORD *)g_WOL_MessageQueue + v3++) = 0; /*0x7801b7*/
  }
  g_WOL_MessageConfig = 0; /*0x7801ca*/
  if ( v2 > dword_B766B0 ) /*0x7801d2*/
  {
    do /*0x7801f3*/
    {
      if ( byte_B76694 ) /*0x7801da*/
        break; /*0x7801da*/
      HashMap::Shrink(&g_WOL_MessageQueue); /*0x7801e1*/
    }
    while ( g_WOL_MsgPool > (unsigned int)dword_B766B0 ); /*0x7801f3*/
  }
  for ( i = 0; i < g_WOL_LoginToken; ++i ) /*0x7801fe*/
    DeleteAndZero((void **)dword_B76600 + i); /*0x780209*/
  unsigned int v7 = dword_B76538; /*0x780218*/
  unsigned int v8 = 0; /*0x78021d*/
  for ( g_WOL_LoginToken = 0; v8 < dword_B76538; v7 = dword_B76538 ) /*0x780227*/
  {
    int v9 = *((_DWORD *)g_WOL_ConnectionPool + v8); /*0x78022e*/
    while ( v9 ) /*0x780233*/
    {
      v10 = (void **)v9; /*0x780235*/
      v9 = *(_DWORD *)(v9 + 8); /*0x780237*/
      DeleteAndZero(v10); /*0x780240*/
      __3_YAXPAX_Z(v10); /*0x780246*/
    }
    *((_DWORD *)g_WOL_ConnectionPool + v8++) = 0; /*0x780259*/
  }
  dword_B76534 = 0; /*0x78026c*/
  if ( v7 > dword_B76560 ) /*0x780274*/
  {
    do /*0x780295*/
    {
      if ( byte_B76544 ) /*0x78027c*/
        break; /*0x78027c*/
      HashMap::Shrink(&g_WOL_ConnectionPool); /*0x780283*/
    }
    while ( dword_B76538 > (unsigned int)dword_B76560 ); /*0x780295*/
  }
  dword_B7646C = time(0) + 86400; /*0x7802a5*/
  unsigned int v11 = dword_B768C8; /*0x7802aa*/
  unsigned int v12 = 0; /*0x7802af*/
  dword_B7617C = 0; /*0x7802b3*/
  for ( dword_B76180 = 0; v12 < dword_B768C8; v11 = dword_B768C8 ) /*0x7802bf*/
  {
    _DWORD * v13 = (_DWORD *)*((_DWORD *)g_WOL_ListParser + v12); /*0x7802c6*/
    while ( v13 ) /*0x7802cb*/
    {
      void * v14 = v13; /*0x7802cd*/
      v13 = (_DWORD *)v13[28]; /*0x7802cf*/
      ResetSystemWOL_Reset(v14, 1); /*0x7802d8*/
    }
    *((_DWORD *)g_WOL_ListParser + v12++) = 0; /*0x7802e8*/
  }
  dword_B768C4 = 0; /*0x7802fb*/
  if ( v11 > dword_B768F0 ) /*0x780303*/
  {
    do /*0x780324*/
    {
      if ( byte_B768D4 ) /*0x78030b*/
        break; /*0x78030b*/
      HashMap::Shrink2(&g_WOL_ListParser); /*0x780312*/
    }
    while ( dword_B768C8 > (unsigned int)dword_B768F0 ); /*0x780324*/
  }
  unsigned int v15 = DataGlobal_B73B00; /*0x780326*/
  for ( j = 0; j < DataGlobal_B73B00; v15 = DataGlobal_B73B00 ) /*0x78032f*/
  {
    _DWORD * v17 = (_DWORD *)*((_DWORD *)DataGlobal_B73AF8 + j); /*0x780336*/
    while ( v17 ) /*0x78033b*/
    {
      void * v18 = v17; /*0x78033d*/
      v17 = (_DWORD *)v17[28]; /*0x78033f*/
      ResetSystemWOL_Reset(v18, 1); /*0x780348*/
    }
    *((_DWORD *)DataGlobal_B73AF8 + j++) = 0; /*0x780358*/
  }
  DataGlobal_B73AFC = 0; /*0x78036b*/
  if ( v15 > DataGlobal_B73B28 ) /*0x780373*/
  {
    do /*0x780394*/
    {
      if ( DataGlobal_B73B0C ) /*0x78037b*/
        break; /*0x78037b*/
      HashMap::Shrink2(&DataGlobal_B73AF8); /*0x780382*/
    }
    while ( DataGlobal_B73B00 > (unsigned int)DataGlobal_B73B28 ); /*0x780394*/
  }
  unsigned int v19 = g_WOL_PacketQueue; /*0x780396*/
  for ( k = 0; k < g_WOL_PacketQueue; v19 = g_WOL_PacketQueue ) /*0x78039f*/
  {
    _DWORD * v21 = (_DWORD *)*((_DWORD *)g_WOL_EventQueue + k); /*0x7803a6*/
    while ( v21 ) /*0x7803ab*/
    {
      void * v22 = v21; /*0x7803ad*/
      v21 = (_DWORD *)v21[68]; /*0x7803af*/
      CChatEventSink::DeleteAndZero(v22, 1); /*0x7803bb*/
    }
    *((_DWORD *)g_WOL_EventQueue + k++) = 0; /*0x7803cb*/
  }
  dword_B7660C = 0; /*0x7803de*/
  if ( v19 > dword_B76638 ) /*0x7803e6*/
  {
    do /*0x780407*/
    {
      if ( byte_B7661C ) /*0x7803ee*/
        break; /*0x7803ee*/
      HashTable::Shrink(&g_WOL_EventQueue); /*0x7803f5*/
    }
    while ( g_WOL_PacketQueue > (unsigned int)dword_B76638 ); /*0x780407*/
  }
  Array::CleanupArrayWOL(&g_WindowManager); /*0x78040e*/
  Array::CleanupArrayWOL(&g_WOL_RequestManager); /*0x780418*/
  HashTable::CleanupAndResize(&g_WOL_AccountInfo); /*0x780422*/
  if ( g_GameMode_Current == 4 && g_GameOptionsFlags == 3 ) /*0x780437*/
  {
    g_WOL_HashTable = (int)&DataGlobal_B73AF8; /*0x78043e*/
    dword_B779C8 = 8960; /*0x780448*/
    dword_B736F0 = 8960; /*0x78044d*/
  }
  else
  {
    g_WOL_HashTable = (int)&dword_B77D80; /*0x780459*/
    dword_B779C8 = g_NetworkRematchState; /*0x780463*/
    dword_B736F0 = g_NetworkRematchState; /*0x780468*/
  }
  memset(&g_WOL_ProcessIdle, 0, 0x10Cu); /*0x78047e*/
  memset(&dword_B73BE8, 0, 0x10Cu); /*0x78048a*/
  memset(&unk_B75E58, 0, 0xF8u); /*0x780496*/
  memset(&unk_B769C8, 0, 0xF8u); /*0x7804a6*/
  word_B77AD0 = 0; /*0x7804a8*/
  g_WOL_GameListState = 0; /*0x7804af*/
  g_WOL_IdleHandler = 1; /*0x7804b5*/
  g_WOL_GameProcessState = -1; /*0x7804bb*/
  g_WOL_GameListPool = time(0); /*0x7804ce*/
  dword_B76468 = 0; /*0x7804d3*/
  dword_B779CC = 0; /*0x7804d9*/
  dword_B77E4C = 0; /*0x7804df*/
  g_WOL_ChannelList = 0; /*0x7804e5*/
  byte_B77DEC = 0; /*0x7804eb*/
  byte_B77DC0 = 0; /*0x7804f1*/
  byte_84A1B8 = 1; /*0x7804f7*/
  DeleteAndZero::Alt2(&DataGlobal_B73AE0); /*0x7804fe*/
  memset(&Handles, 0, 0x48u); /*0x780514*/
  g_NetworkLobby_Init = 0; /*0x780522*/
  byte_B77DC2 = 0; /*0x780528*/
  dword_84A1BC = -1; /*0x78052e*/
  dword_B77DCC = 0; /*0x780534*/
  dword_B77DB8 = -1; /*0x78053a*/
  dword_B77DBC = -1; /*0x780540*/
  dword_B73E1C = GetStringCSF(aTxtLob1, 0, g_Str_File_wonline_cpp, 2752); /*0x78055c*/
  dword_B73E20 = (int)GetStringCSF(aTxtLob2, 0, g_Str_File_wonline_cpp, 2753); /*0x780577*/
  dword_B73E24 = (int)GetStringCSF(aTxtLob3, 0, g_Str_File_wonline_cpp, 2754); /*0x780592*/
  dword_B73E28 = (int)GetStringCSF(aTxtLob4, 0, g_Str_File_wonline_cpp, 2755); /*0x7805ad*/
  dword_B73E2C = (int)GetStringCSF(aTxtLob5, 0, g_Str_File_wonline_cpp, 2756); /*0x7805c8*/
  dword_B73E30 = (int)GetStringCSF(aTxtLob6, 0, g_Str_File_wonline_cpp, 2757); /*0x7805d2*/
  dword_B73E34 = (int)GetStringCSF(aTxtLob7, 0, g_Str_File_wonline_cpp, 2758); /*0x7805fe*/
  dword_B73E38 = (int)GetStringCSF(aTxtLob8, 0, g_Str_File_wonline_cpp, 2759); /*0x780608*/
  memset(&g_WOL_RequestObject, 0xFFu, 0x20u); /*0x780619*/
  ppv = 0; /*0x780627*/
  memset(&byte_B77A94, 0, 0x28u); /*0x78062d*/
  g_UIPointerTable = 0; /*0x780634*/
  DataGlobal_AC1174 = 0; /*0x78063a*/
  dword_B77E54 = 0; /*0x780640*/
  dword_B77E58 = 0; /*0x780646*/
  dword_B77E5C = 0; /*0x78064c*/
  dword_B77DDC = 0; /*0x780652*/
  dword_B77DE0 = 0; /*0x780658*/
  unk_B77ABC = 0; /*0x78065e*/
  dword_B77DE4 = 0; /*0x78065f*/
  g_WOL_ChannelState = 0; /*0x780665*/
  DataGlobal_B76E38 = 1; /*0x78066b*/
  g_WOL_ChannelLeaveState = 0; /*0x780671*/
  __Release__NonReentrantLock_details_Concurrency__QAEXXZ_1((Concurrency::details::_NonReentrantLock *)&g_WOL_RequestState); /*0x780677*/
  g_NetworkLobbyState = 0; /*0x78067c*/
  dword_B77E60 = 0; /*0x780682*/
  dword_B77E64 = 0; /*0x780688*/
  CCINIClass_RulesHash = GameConfig::ComputeHash(); /*0x780693*/
  LoadArtINI(); /*0x780698*/
  CCINIClass_ArtHash = unknown_libname_29(); /*0x7806a2*/
  result = unknown_libname_30(); /*0x7806a7*/
  dword_B77E20 = 0; /*0x7806ac*/
  CCINIClass_AIHash = result; /*0x7806b2*/
  return result; /*0x7806b7*/
}
} // namespace gamemd

// 0x7806C0
namespace gamemd {
AbstractClass * * PopulateWOLLobbyListBox()
{
{
  HWND v0; // eax
  HWND DlgItem; // ebp
  LRESULT (__stdcall *v2)(HWND, UINT, WPARAM, LPARAM); // esi
  LRESULT v3; // eax
  CampaignScore *v8; // esi
  LRESULT v10; // eax
  AbstractClass *v12; // esi
  LRESULT v14; // eax
  LPARAM v16; // [esp+8h] [ebp-2E8h]
  LRESULT i; // [esp+18h] [ebp-2D8h]
  LPARAM v22; // [esp+20h] [ebp-2D0h] BYREF
  LPARAM v25[67]; // [esp+38h] [ebp-2B8h] BYREF
  wchar_t Buffer[80]; // [esp+144h] [ebp-1ACh] BYREF

  v0 = (HWND)Dialog::FindByHandle((void *)0x113); /*0x7806cc*/
  if ( v0 ) /*0x7806d3*/
  {
    DlgItem = GetDlgItem(v0, 1341); /*0x7806e5*/
    if ( DlgItem ) /*0x7806e9*/
    {
  int v17; // [esp+Ch] [ebp-2E4h] BYREF
      unknown_libname_73(&v17); /*0x7806f4*/
      v2 = SendMessageA; /*0x7806f9*/
      v3 = SendMessageA(DlgItem, 0x18Eu, 0, 0); /*0x780709*/
      if ( v3 != -1 ) /*0x78070e*/
        GetListBoxItemText(DlgItem, v3, (void **)&v17); /*0x780719*/
      SendMessageA(DlgItem, 0x49Du, 0, 1); /*0x780729*/
      Memory_Pop(DlgItem); /*0x78072d*/
      int v4 = 0; /*0x780737*/
      int v21 = g_WOL_AuthPool; /*0x78073b*/
      v16 = 0; /*0x78073f*/
      if ( g_WOL_AuthPool > 0 ) /*0x780743*/
      {
        int v5 = 0; /*0x780749*/
        int v18 = 0; /*0x78074c*/
        do /*0x7809a5*/
        {
          if ( v5 >= 0 && v4 < g_WOL_AuthPool ) /*0x78075a*/
            qmemcpy(v25, (char *)dword_B73E18 + v5, sizeof(v25)); /*0x78076e*/
          if ( !strncmp((const char *)&v25[13], g_Str_Lob_41_, strlen(g_Str_Lob_41_)) ) /*0x78078a*/
          {
            AbstractClass *v6 = atol((const char *)&v25[13] + strlen(g_Str_Lob_41_)); /*0x7807b1*/
            AbstractClass *v19 = v6; /*0x7807b6*/
            bool v15 = strcmp((const char *)&v25[13], g_WOL_IdleFlag) == 0; /*0x7807f7*/
            int v7 = v6 % 8; /*0x780810*/
            if ( v6 / 8 ) /*0x780801*/
              swprintf(Buffer, (const size_t)aSDD_0, (&dword_B73E1C)[v7], v6 / 8 + 1, v25[3]); /*0x780855*/
            else
              swprintf(Buffer, (const size_t)aSD_3, (&dword_B73E1C)[v7], v25[3]); /*0x78082f*/
            v8 = SendMessageA(DlgItem, 0x18Bu, 0, 0); /*0x78086d*/
            signed int v9 = 0; /*0x78086f*/
            for ( i = v8; v9 < v8; ++v9 ) /*0x780877*/
            {
  char v27[268]; // [esp+1E4h] [ebp-10Ch] BYREF
              v10 = SendMessageA(DlgItem, 0x199u, v9, 0); /*0x780882*/
              if ( v10 >= 0 && v10 < g_WOL_AuthPool ) /*0x780892*/
              {
                qmemcpy(v27, (char *)dword_B73E18 + 268 * v10, sizeof(v27)); /*0x7808b3*/
                v8 = i; /*0x7808b5*/
              }
              int v11 = atol(&v27[strlen(g_Str_Lob_41_) + 52]); /*0x7808d0*/
              if ( v11 > v19 ) /*0x7808de*/
                break; /*0x7808de*/
            }
            v12 = SendMessageA(DlgItem, 0x4C7u, v9, (LPARAM)&v25[13]); /*0x7808fd*/
            SendMessageA(DlgItem, 0x19Au, v12, v16); /*0x78090b*/
            Gadget::InitProperties(&v22); /*0x780911*/
            v22 = 1; /*0x780922*/
  void *v23; // [esp+24h] [ebp-2CCh] BYREF
            WideString::Reassign(&v23, Buffer); /*0x78092a*/
  void *v24[4]; // [esp+28h] [ebp-2C8h] BYREF
            WideString::Reassign(v24, &g_TypeClass_DefaultString); /*0x780938*/
            SendMessageA(DlgItem, 0x4A8u, (unsigned __int16)dword_B76C1C | ((unsigned __int16)v12 << 16), (LPARAM)&v22); /*0x780962*/
            if ( v15 ) /*0x78096a*/
              SendMessageA(DlgItem, 0x186u, v12, 0); /*0x780975*/
            DeleteAndZero::Alt(v24); /*0x78097b*/
            DeleteAndZero::Alt(&v23); /*0x780984*/
            v4 = v16; /*0x780989*/
          }
          ++v4; /*0x780995*/
          v5 = v18 + 268; /*0x780996*/
          v16 = v4; /*0x78099d*/
          v18 += 268; /*0x7809a1*/
        }
        while ( v4 < v21 ); /*0x7809a5*/
        v2 = SendMessageA; /*0x7809ab*/
      }
      char * v13 = String::GetOrEmpty_Alt((char **)&v17); /*0x7809b6*/
      v14 = v2(DlgItem, 0x4C5u, 0, (LPARAM)v13); /*0x7809c4*/
      if ( v14 != -1 ) /*0x7809ca*/
        v2(DlgItem, 0x197u, v14, 0); /*0x7809d5*/
      v2(DlgItem, 0x49Du, 0, 0); /*0x7809e1*/
      InvalidateRect(DlgItem, 0, 0); /*0x7809e8*/
      DeleteAndZero((void **)&v17); /*0x7809f2*/
    }
  }
}
} // namespace gamemd

// 0x780A90
namespace gamemd {
wchar_t ** FormatWOLPlayerInfo(wchar_t ** a1, const char * a2)
{
{
  wchar_t **v4; // eax
  wchar_t *v7; // eax
  wchar_t **v8; // eax
  wchar_t **v9; // eax
  wchar_t *StringCSF; // eax
  wchar_t **v13; // eax
  wchar_t **v14; // eax
  wchar_t **v15; // eax
  wchar_t **v18; // eax
  wchar_t **v19; // eax
  wchar_t **v21; // [esp-Ch] [ebp-A8h]
  wchar_t **v22; // [esp-4h] [ebp-A0h]
  void *v26; // [esp+1Ch] [ebp-80h] BYREF
  void *v27; // [esp+20h] [ebp-7Ch] BYREF
  void *v28; // [esp+24h] [ebp-78h] BYREF
  const wchar_t *v31[27]; // [esp+30h] [ebp-6Ch] BYREF

  void *v23; // [esp+10h] [ebp-8Ch] BYREF
  String::Assign((char **)&v23, a2 + 36); /*0x780aa6*/
  v4 = CharStringToWide((wchar_t **)&v28, (const char **)&v23); /*0x780abd*/
  int v24; // [esp+14h] [ebp-88h] BYREF
  WideString::AssignConcat((const wchar_t **)v4, (wchar_t **)&v24, (wchar_t *)DataGlobal_84A6A4); /*0x780ac4*/
  DeleteAndZero::Alt(&v28); /*0x780acd*/
  String::ToLower((const char **)&v23); /*0x780ad6*/
  _DWORD * v5 = (_DWORD *)g_WOL_HashTable; /*0x780adb*/
  memset(v31, 0, sizeof(v31)); /*0x780aee*/
  if ( g_WOL_HashTable /*0x780b14*/
    && *(_DWORD *)(g_WOL_HashTable + 4)
  int v6; // esi
    && (v6 = *(_DWORD *)(*v5 + 4 * ((*(int (__thiscall **)(void **))(g_WOL_HashTable + 24))(&v23) & ((1 << v5[3]) - 1)))) != 0 )
  {
    while ( !String::Compare((const char **)v6, (const char **)&v23) ) /*0x780b24*/
    {
      v6 = *(_DWORD *)(v6 + 112); /*0x780b2a*/
      if ( !v6 ) /*0x780b2f*/
        goto LABEL_6; /*0x780b2f*/
    }
    const void * v11 = (const void *)(v6 + 4); /*0x780c0f*/
    if ( v11 ) /*0x780c14*/
      qmemcpy(v31, v11, sizeof(v31)); /*0x780c1f*/
    v22 = FormatWideString((wchar_t **)&v26, v31[7]); /*0x780c36*/
    v21 = WideString::Assign((wchar_t **)&v27, (wchar_t *)stru_82083C); /*0x780c49*/
    StringCSF = GetStringCSF(g_Str_TXT_RANK, 0, g_Str_File_wonline_cpp, 2937); /*0x780c59*/
    void * v30 = WideString::Assign((wchar_t **)&v30, StringCSF); /*0x780c63*/
    void * v29 = WideString::ConcatAlloc((const wchar_t **)v13, (wchar_t **)&v29, (const wchar_t **)v21); /*0x780c6a*/
    v15 = WideString::ConcatAlloc((const wchar_t **)v14, (wchar_t **)&v28, (const wchar_t **)v22); /*0x780c71*/
    WideString::Append((wchar_t **)&v24, (const wchar_t **)v15); /*0x780c7b*/
    DeleteAndZero::Alt(&v28); /*0x780c84*/
    DeleteAndZero::Alt(&v29); /*0x780c8d*/
    DeleteAndZero::Alt(&v30); /*0x780c96*/
    DeleteAndZero::Alt(&v27); /*0x780c9f*/
    DeleteAndZero::Alt(&v26); /*0x780ca8*/
  }
  else
  {
LABEL_6:
    v7 = GetStringCSF(g_Str_TXT_UNRANKED, 0, g_Str_File_wonline_cpp, 2939); /*0x780b31*/
    WideString::Append2((wchar_t **)&v24, v7); /*0x780b4c*/
  }
  void *v25; // [esp+18h] [ebp-84h] BYREF
  String::Assign((char **)&v25, a2 + 46); /*0x780b59*/
  if ( !String::Length((const char **)&v25) ) /*0x780b62*/
    String::Assign_Alt(&v25, a2 + 87); /*0x780b73*/
  if ( String::Length((const char **)&v25) ) /*0x780b7c*/
  {
    v8 = CharStringToWide((wchar_t **)&v27, (const char **)&v25); /*0x780b8d*/
    v9 = FormatWideStringPrefix((wchar_t **)&v26, DataGlobal_84A69C, v8); /*0x780b9c*/
    WideString::Append((wchar_t **)&v24, (const wchar_t **)v9); /*0x780ba6*/
    DeleteAndZero::Alt(&v26); /*0x780baf*/
    DeleteAndZero::Alt(&v27); /*0x780bb8*/
  }
  HashTable *v10 = *((_DWORD *)g_WOL_ConnectionPool + (dword_B76548(&v23) & ((1 << dword_B7653C) - 1))); /*0x780bdc*/
  if ( v10 ) /*0x780be1*/
  {
    while ( !String::Compare((const char **)v10, (const char **)&v23) ) /*0x780bf5*/
    {
      v10 = v10->q008; /*0x780bfb*/
      if ( !v10 ) /*0x780c00*/
        goto LABEL_27; /*0x780c00*/
    }
    if ( ppv ) /*0x780cb9*/
    {
      if ( dword_B76534 ) /*0x780cc6*/
      {
        HashTable *v16 = *((_DWORD *)g_WOL_ConnectionPool + (dword_B76548(&v23) & ((1 << dword_B7653C) - 1))); /*0x780ceb*/
        if ( v16 ) /*0x780cf0*/
        {
          while ( !String::Compare((const char **)v16, (const char **)&v23) ) /*0x780d00*/
          {
            v16 = v16->q008; /*0x780d02*/
            if ( !v16 ) /*0x780d07*/
              goto LABEL_27; /*0x780d07*/
          }
          if ( v16 != -4 ) /*0x780d14*/
          {
            int v17 = v16->q004; /*0x780d16*/
            if ( v17 ) /*0x780d1a*/
            {
              v18 = FormatLocaleStringWOL((wchar_t **)&v27, v17); /*0x780d22*/
              v19 = FormatWideStringPrefix((wchar_t **)&v26, DataGlobal_84A6A4, v18); /*0x780d31*/
              WideString::Append((wchar_t **)&v24, (const wchar_t **)v19); /*0x780d3b*/
              DeleteAndZero::Alt(&v26); /*0x780d44*/
              DeleteAndZero::Alt(&v27); /*0x780d4d*/
            }
          }
        }
      }
    }
  }
LABEL_27:
  WideString::AssignFromPtr(a1, (const wchar_t **)&v24); /*0x780d52*/
  DeleteAndZero(&v25); /*0x780d62*/
  DeleteAndZero::Alt((void **)&v24); /*0x780d6b*/
  DeleteAndZero(&v23); /*0x780d74*/
  return a1; /*0x780d7b*/
}
} // namespace gamemd

// 0x780E30
namespace gamemd {
void * FormatWOLPlayerInfoForDisplay(wchar_t ** a1, HWND a2, WPARAM wParam)
{
{
  wchar_t *StringCSF; // eax
  LRESULT v5; // eax
  wchar_t **v7; // eax
  wchar_t *v8; // eax
  const wchar_t *v10; // [esp-4h] [ebp-2B4h]
  wchar_t *v11; // [esp-4h] [ebp-2B4h]
  CampaignScore *v12; // [esp+0h] [ebp-2B0h]
  wchar_t *v13; // [esp+10h] [ebp-2A0h] BYREF
  void *aP1_4; // [esp+18h] [ebp-298h] BYREF
  char *aP1_8; // [esp+1Ch] [ebp-294h] BYREF
  int aP1_12; // [esp+20h] [ebp-290h] BYREF
  int aP1_16; // [esp+24h] [ebp-28Ch] BYREF
  int aP1_20; // [esp+28h] [ebp-288h] BYREF
  int aP1_24; // [esp+2Ch] [ebp-284h] BYREF
  int aP1_28; // [esp+30h] [ebp-280h] BYREF
  char aP1_32[108]; // [esp+34h] [ebp-27Ch] BYREF
  wchar_t *v23[67]; // [esp+A0h] [ebp-210h] BYREF
  char String[132]; // [esp+1ACh] [ebp-104h] BYREF
  CampaignScore Buffer[3]; // [esp+230h] [ebp-80h] BYREF

  if ( wParam == -1 ) /*0x780e46*/
  {
    StringCSF = GetStringCSF( /*0x780e4d*/
                  (wchar_t *)&stru_830620[19844],
                  0,
                  (CampaignScore *)g_Str_File_wonline_cpp,
                  2987);
LABEL_14:
    WideString::Assign(a1, (CampaignScore *)StringCSF); /*0x78106f*/
    return (CampaignScore *)a1; /*0x781077*/
  }
  memset(v23, 0, sizeof(v23)); /*0x780e6a*/
  v5 = SendMessageA(a2, 0x199u, wParam, 0); /*0x780e6c*/
  if ( v5 < 0 || v5 >= (int)g_WOL_ChatState ) /*0x780e80*/
  {
    StringCSF = GetStringCSF( /*0x78106a*/
                  (wchar_t *)&stru_830620[19844],
                  0,
                  (CampaignScore *)g_Str_File_wonline_cpp,
                  2994);
    goto LABEL_14; /*0x78106a*/
  }
  qmemcpy(v23, (char *)g_WOL_ConnectionHandler + 268 * v5, sizeof(v23)); /*0x780ea4*/
  String::Assign(&aP1_8, (const char *)&v23[13]); /*0x780eb2*/
  CChatEventSink::EncodeString((const char **)&aP1_8, 39); /*0x780ebd*/
  memset(aP1_32, 0, sizeof(aP1_32)); /*0x780ecf*/
  char * v6 = String::GetOrEmpty(&aP1_8); /*0x780ed5*/
  strncpy(&aP1_32[36], v6, (IUnknown *)0xA); /*0x780ee0*/
  FormatWOLPlayerInfo(&v13, aP1_32); /*0x780ef0*/
  void * aP1 = WideString::Assign((wchar_t **)&aP1, (CampaignScore *)&stru_830620[73144]); /*0x780efe*/
  WideString::Append(&v13, (CampaignScore *)v7); /*0x780f08*/
  DeleteAndZero::Alt(&aP1); /*0x780f11*/
  if ( v23[10] == (wchar_t *)-1 ) /*0x780f20*/
  {
    v11 = GetStringCSF((wchar_t *)&stru_84A684[40], 0, (CampaignScore *)g_Str_File_wonline_cpp, 3024); /*0x780f6a*/
    WideString::Append2(&v13, (CampaignScore *)v11); /*0x780f6f*/
  }
  else
  {
    v10 = v23[10]; /*0x780f22*/
    v8 = GetStringCSF((wchar_t *)&stru_84A684.INIClass_field_3C, 0, (CampaignScore *)g_Str_File_wonline_cpp, 3021); /*0x780f34*/
    swprintf((wchar_t *const)Buffer, (const size_t)v8, v10, v12); /*0x780f42*/
    WideString::Append2(&v13, Buffer); /*0x780f52*/
  }
  strncpy(String, (const char *)&v23[56], (IUnknown *)0x80); /*0x780f89*/
  aP1_16 = 0; /*0x780f95*/
  aP1_20 = 0; /*0x780f99*/
  aP1_12 = 0; /*0x780f9d*/
  aP1_28 = 0; /*0x780fa1*/
  aP1_24 = 0; /*0x780fa5*/
  unknown_libname_73(&aP1_4); /*0x780fa9*/
  ParseStringCommaInts(String, &aP1_16, &aP1_20, &aP1_12, &aP1_28, &aP1_24, &aP1_4); /*0x780fd2*/
  if ( String::Length((const char **)&aP1_4) ) /*0x780fdb*/
  {
    Render_Format((wchar_t **)&aP1, (char **)&aP1_4); /*0x780fec*/
    if ( WideString::Length((const wchar_t **)&aP1) ) /*0x780ff5*/
    {
      WideString::Append2(&v13, (CampaignScore *)&stru_830620[73144]); /*0x781007*/
      WideString::Append(&v13, (CampaignScore *)&aP1); /*0x781015*/
    }
    DeleteAndZero::Alt(&aP1); /*0x78101e*/
  }
  WideString::AssignFromPtr(a1, (const wchar_t **)&v13); /*0x78102a*/
  DeleteAndZero((int)&aP1_4); /*0x781033*/
  DeleteAndZero::Alt((void **)&v13); /*0x78103c*/
  DeleteAndZero((int)&aP1_8); /*0x781045*/
  return (CampaignScore *)a1; /*0x78104c*/
}
} // namespace gamemd

// 0x781130
namespace gamemd {
void FilterWOLGameListEntry(AbstractClass * aP0, int a2, int a3, int a4)
{
{
  if ( g_WOL_GameListRender != (ObjectClass *)2 ) /*0x781142*/
  {
    if ( g_WOL_GameListRender != (ObjectClass *)3 ) /*0x78114e*/
    {
LABEL_8:
      if ( g_WOL_GameListRender == (ObjectClass *)2 ) /*0x781164*/
        goto LABEL_9; /*0x781164*/
      if ( g_WOL_GameListRender != (ObjectClass *)3 ) /*0x781175*/
        goto LABEL_15; /*0x781175*/
LABEL_12:
      if ( a2 != 1 ) /*0x78117a*/
        return 0; /*0x78117a*/
      goto LABEL_13; /*0x78117a*/
    }
    if ( a2 ) /*0x781152*/
      goto LABEL_12; /*0x781152*/
LABEL_6:
    if ( (aP0->referenceCount & 0x100) != 0 ) /*0x781157*/
      return 1; /*0x78115e*/
    goto LABEL_8; /*0x781157*/
  }
  if ( a2 == 1 ) /*0x781147*/
    goto LABEL_6; /*0x781147*/
LABEL_9:
  if ( a2 ) /*0x781168*/
    return 0; /*0x78116f*/
LABEL_13:
  if ( (aP0->referenceCount & 0x100) == 0 ) /*0x78117f*/
    return 1; /*0x781186*/
LABEL_15:
  if ( g_WOL_GameListRender != (ObjectClass *)4 ) /*0x781194*/
  {
    if ( g_WOL_GameListRender != (ObjectClass *)5 ) /*0x7811a0*/
    {
LABEL_23:
      if ( g_WOL_GameListRender == (ObjectClass *)4 ) /*0x7811b9*/
        goto LABEL_24; /*0x7811b9*/
      if ( g_WOL_GameListRender != (ObjectClass *)5 ) /*0x7811ca*/
        goto LABEL_31; /*0x7811ca*/
LABEL_27:
      if ( a2 != 1 ) /*0x7811cf*/
        return 0; /*0x7811cf*/
      goto LABEL_28; /*0x7811cf*/
    }
    if ( a2 ) /*0x7811a4*/
      goto LABEL_27; /*0x7811a4*/
LABEL_20:
    if ( a3 || a4 ) /*0x7811ac*/
      return 1; /*0x7811b3*/
    goto LABEL_23; /*0x7811ac*/
  }
  if ( a2 == 1 ) /*0x781199*/
    goto LABEL_20; /*0x781199*/
LABEL_24:
  if ( a2 ) /*0x7811bd*/
    return 0; /*0x7811c4*/
LABEL_28:
  if ( !a3 && !a4 ) /*0x7811d7*/
    return 1; /*0x7811de*/
LABEL_31:
  if ( g_WOL_GameListRender != (ObjectClass *)6 ) /*0x7811e9*/
  {
    if ( g_WOL_GameListRender != (ObjectClass *)7 ) /*0x7811f5*/
    {
LABEL_38:
      if ( g_WOL_GameListRender == (ObjectClass *)6 ) /*0x78120b*/
        goto LABEL_39; /*0x78120b*/
      if ( g_WOL_GameListRender != (ObjectClass *)7 ) /*0x78121c*/
        goto LABEL_45; /*0x78121c*/
LABEL_42:
      if ( a2 != 1 ) /*0x781221*/
        return 0; /*0x781221*/
      goto LABEL_43; /*0x781221*/
    }
    if ( a2 ) /*0x7811f9*/
      goto LABEL_42; /*0x7811f9*/
LABEL_36:
    if ( ((int)aP0->NeedsSaveOrLink & 0x600) != 0 ) /*0x7811fe*/
      return 1; /*0x781205*/
    goto LABEL_38; /*0x7811fe*/
  }
  if ( a2 == 1 ) /*0x7811ee*/
    goto LABEL_36; /*0x7811ee*/
LABEL_39:
  if ( a2 ) /*0x78120f*/
    return 0; /*0x781216*/
LABEL_43:
  if ( ((int)aP0->NeedsSaveOrLink & 0x600) == 0 ) /*0x78122a*/
    return 1; /*0x781231*/
LABEL_45:
  if ( g_WOL_GameListRender != (ObjectClass *)8 ) /*0x781237*/
  {
    if ( g_WOL_GameListRender != (ObjectClass *)9 ) /*0x781243*/
    {
LABEL_52:
      if ( g_WOL_GameListRender == (ObjectClass *)8 ) /*0x78125b*/
        goto LABEL_53; /*0x78125b*/
      if ( g_WOL_GameListRender != (ObjectClass *)9 ) /*0x78126c*/
        goto LABEL_59; /*0x78126c*/
LABEL_56:
      if ( a2 != 1 ) /*0x781271*/
        return 0; /*0x781271*/
      goto LABEL_57; /*0x781271*/
    }
    if ( a2 ) /*0x781247*/
      goto LABEL_56; /*0x781247*/
LABEL_50:
    if ( aP0->abstractFlags ) /*0x781249*/
      return 1; /*0x781255*/
    goto LABEL_52; /*0x78124e*/
  }
  if ( a2 == 1 ) /*0x78123c*/
    goto LABEL_50; /*0x78123c*/
LABEL_53:
  if ( a2 ) /*0x78125f*/
    return 0; /*0x781266*/
LABEL_57:
  if ( !aP0->abstractFlags ) /*0x781277*/
    return 1; /*0x781283*/
LABEL_59:
  if ( g_WOL_GameListRender != (ObjectClass *)10 ) /*0x78128f*/
  {
    if ( g_WOL_GameListRender != (ObjectClass *)11 ) /*0x78129b*/
    {
LABEL_67:
      if ( g_WOL_GameListRender == (ObjectClass *)10 ) /*0x7812c0*/
        goto LABEL_68; /*0x7812c0*/
      if ( g_WOL_GameListRender != (ObjectClass *)11 ) /*0x7812d1*/
        goto LABEL_75; /*0x7812d1*/
LABEL_71:
      if ( a2 != 1 ) /*0x7812d6*/
        return 0; /*0x7812d6*/
      goto LABEL_72; /*0x7812d6*/
    }
    if ( a2 ) /*0x78129f*/
      goto LABEL_71; /*0x78129f*/
LABEL_64:
    if ( *(_DWORD *)&HouseClass_Player[29932] == 4 && ((int)aP0->NeedsSaveOrLink & 0x100) != 0 ) /*0x7812b3*/
      return 1; /*0x7812ba*/
    goto LABEL_67; /*0x7812b3*/
  }
  if ( a2 == 1 ) /*0x781294*/
    goto LABEL_64; /*0x781294*/
LABEL_68:
  if ( a2 ) /*0x7812c4*/
    return 0; /*0x7812cb*/
LABEL_72:
  if ( *(_DWORD *)&HouseClass_Player[29932] != 4 || ((int)aP0->NeedsSaveOrLink & 0x100) == 0 ) /*0x7812ee*/
    return 1; /*0x7812f5*/
LABEL_75:
  if ( g_WOL_GameListRender != (ObjectClass *)12 ) /*0x7812fb*/
  {
    if ( g_WOL_GameListRender != (ObjectClass *)13 ) /*0x781307*/
    {
LABEL_84:
      if ( g_WOL_GameListRender == (ObjectClass *)12 ) /*0x781333*/
        goto LABEL_85; /*0x781333*/
      if ( g_WOL_GameListRender != (ObjectClass *)13 ) /*0x781344*/
        return 0; /*0x781344*/
LABEL_88:
      if ( a2 != 1 ) /*0x78134d*/
        return 0; /*0x78134d*/
      return *(_DWORD *)&HouseClass_Player[29932] == 4 /*0x78134d*/
          && (aP0->abstractFlags || ((int)aP0->NeedsSaveOrLink & 0x100) != 0);
    }
    if ( a2 ) /*0x78130b*/
      goto LABEL_88; /*0x78130b*/
LABEL_80:
    if ( *(_DWORD *)&HouseClass_Player[29932] != 4 /*0x781326*/
      || !aP0->abstractFlags && ((int)aP0->NeedsSaveOrLink & 0x100) == 0 )
    {
      return 1; /*0x78132d*/
    }
    goto LABEL_84; /*0x781326*/
  }
  if ( a2 == 1 ) /*0x781300*/
    goto LABEL_80; /*0x781300*/
LABEL_85:
  if ( a2 ) /*0x781337*/
    return 0; /*0x78133e*/
  return *(_DWORD *)&HouseClass_Player[29932] == 4 /*0x781370*/
      && (aP0->abstractFlags || ((int)aP0->NeedsSaveOrLink & 0x100) != 0);
}
} // namespace gamemd

// 0x781380
namespace gamemd {
int sub_781380(unsigned int * a1, unsigned int * a2)
{
{

  int v2 = a1[1]; /*0x781388*/
  int v3 = a2[1]; /*0x78138b*/
  if ( v2 >= v3 )
  {
    if ( v2 <= v3 )
      return 0; /*0x7813a9*/
    else
      return v3 != -1 ? 1 : -1;
  }
  else
  {
    int v4 = -(v2 != -1); /*0x781395*/
    LOBYTE(v4) = v4 & 0xFE; /*0x781397*/
    return v4 + 1; /*0x781399*/
  }
}
} // namespace gamemd

// 0x781480
namespace gamemd {
AbstractClass * * __usercall GameListRenderWOL(CampaignScore *a1@<edi> a1)
{
{
  HWND v1; // eax
  ObjectClass *DlgItem; // esi
  LRESULT v4; // eax
  LRESULT eax5; // eax
  AbstractClass *v5; // edx
  IUnknown *v7; // ebp
  int ecx26; // ecx
  AbstractClass *v9; // esi
  int ebx40; // ebx
  CampaignScore *v15; // edi
  CampaignScore *v18; // ebp
  LRESULT v19; // eax
  unsigned __int16 v20; // si
  HWND v21; // ebx
  const wchar_t *v24; // eax
  wchar_t *v25; // eax
  HWND v28; // esi
  LRESULT v29; // eax
  LRESULT v31; // eax
  HWND v32; // eax
  int (__cdecl *v33)(const void *, const void *); // [esp-Ch] [ebp-2A8h]
  wchar_t *StringCSF; // [esp-Ch] [ebp-2A8h]
  wchar_t *v35; // [esp-Ch] [ebp-2A8h]
  wchar_t *v36; // [esp-Ch] [ebp-2A8h]
  const wchar_t *v37; // [esp-Ch] [ebp-2A8h]
  CampaignScore *v38; // [esp-8h] [ebp-2A4h]
  LPARAM v40; // [esp+10h] [ebp-28Ch] BYREF
  int var280; // [esp+1Ch] [ebp-280h]
  ObjectClass *v43; // [esp+24h] [ebp-278h]
  AbstractClass *i; // [esp+28h] [ebp-274h]
  AbstractClass *v46; // [esp+30h] [ebp-26Ch] BYREF
  HWND hWnd; // [esp+34h] [ebp-268h]
  ObjectClass *v50; // [esp+38h] [ebp-264h]
  void *Base; // [esp+3Ch] [ebp-260h]
  AbstractClass *v53; // [esp+44h] [ebp-258h]
  LPARAM v55; // [esp+4Ch] [ebp-250h]
  HWND hDlg; // [esp+68h] [ebp-234h]
  _BYTE aP0[268]; // [esp+6Ch] [ebp-230h] BYREF
  wchar_t Buffer[80]; // [esp+178h] [ebp-124h] BYREF
  char Destination[132]; // [esp+218h] [ebp-84h] BYREF

  v1 = (HWND)Dialog::FindByHandle((void *)0x113); /*0x78148d*/
  int v2 = 0; /*0x781492*/
  hDlg = v1; /*0x781494*/
  if ( !v1 ) /*0x78149a*/
    return; /*0x78149a*/
  DlgItem = (ObjectClass *)GetDlgItem(v1, 1774); /*0x7814ac*/
  hWnd = (HWND)DlgItem; /*0x7814b0*/
  if ( !DlgItem ) /*0x7814b4*/
    return; /*0x7814b4*/
  v38 = a1; /*0x7814bb*/
  void *a2; // [esp+50h] [ebp-24Ch] BYREF
  unknown_libname_73(&a2); /*0x7814c0*/
  v4 = SendMessageA((HWND)DlgItem, 0x188u, 0, 0); /*0x7814d3*/
  if ( v4 != -1 ) /*0x7814d8*/
    GetListBoxItemText(DlgItem, v4, &a2); /*0x7814e3*/
  void *v54; // [esp+48h] [ebp-254h] BYREF
  unknown_libname_73(&v54); /*0x7814ec*/
  eax5 = SendMessageA((HWND)DlgItem, 0x18Eu, 0, 0); /*0x7814f9*/
  if ( eax5 != -1 ) /*0x7814fe*/
    GetListBoxItemText(DlgItem, eax5, &v54); /*0x781509*/
  SendMessageA((HWND)DlgItem, 0x49Du, 0, 1); /*0x781517*/
  byte_B77E74 = 1; /*0x781519*/
  SendMessageA((HWND)DlgItem, 0x184u, 0, 0); /*0x781528*/
  v50 = g_WOL_ChatState; /*0x781538*/
  int v57 = 1; /*0x78153c*/
  if ( g_WOL_GameListRender == (ObjectClass *)2 /*0x78157b*/
    || g_WOL_GameListRender == (ObjectClass *)3
    || g_WOL_GameListRender == (ObjectClass *)8
    || g_WOL_GameListRender == (ObjectClass *)9
    || g_WOL_GameListRender == (ObjectClass *)10
    || g_WOL_GameListRender == (ObjectClass *)11
    || g_WOL_GameListRender == (ObjectClass *)6
    || g_WOL_GameListRender == (ObjectClass *)7
    || g_WOL_GameListRender == (ObjectClass *)4
    || g_WOL_GameListRender == (ObjectClass *)5
    || g_WOL_GameListRender == (ObjectClass *)12
    || g_WOL_GameListRender == (ObjectClass *)13 )
  {
    v57 = 2; /*0x78157d*/
  }
  v5 = (AbstractClass *)__2_YAPAXI_Z(8 * (_DWORD)g_WOL_ChatState); /*0x781592*/
  Base = v5; /*0x781599*/
  if ( v5 ) /*0x78159d*/
  {
    if ( g_WOL_GameListRender == (ObjectClass *)15 ) /*0x781649*/
    {
      v7 = (IUnknown *)g_WOL_ChatState; /*0x78164f*/
      int v13 = 0; /*0x78165a*/
      memset(aP0, 0, sizeof(aP0)); /*0x781662*/
      if ( (int)g_WOL_ChatState > 0 ) /*0x781664*/
      {
        do /*0x78169e*/
        {
          if ( v2 >= 0 && v13 < (int)g_WOL_ChatState ) /*0x781670*/
            qmemcpy(aP0, (char *)g_WOL_ConnectionHandler + v2, sizeof(aP0)); /*0x781684*/
          int v14 = *(_DWORD *)&aP0[40]; /*0x781686*/
          *(_DWORD *)v5->__pad_0 = v13; /*0x78168d*/
          *(_DWORD *)&v5->__pad_0[4] = v14; /*0x78168f*/
          ++v13; /*0x781692*/
          v2 += 268; /*0x781693*/
          v5 = (AbstractClass *)((char *)v5 + 8); /*0x781699*/
        }
        while ( v13 < (int)v7 ); /*0x78169e*/
      }
      v33 = (int (__cdecl *)(const void *, const void *))sub_7813B0; /*0x7816a0*/
      goto LABEL_28; /*0x7816a5*/
    }
  }
  else
  {
    g_WOL_GameListRender = 0; /*0x7815a3*/
  }
  v7 = (IUnknown *)g_WOL_ChatState; /*0x7815a9*/
  int v8 = 0; /*0x7815b4*/
  memset(aP0, 0, sizeof(aP0)); /*0x7815bc*/
  if ( (int)g_WOL_ChatState > 0 ) /*0x7815be*/
  {
    do /*0x7815f8*/
    {
      if ( v2 >= 0 && v8 < (int)g_WOL_ChatState ) /*0x7815ca*/
        qmemcpy(aP0, (char *)g_WOL_ConnectionHandler + v2, sizeof(aP0)); /*0x7815de*/
      ecx26 = *(_DWORD *)&aP0[40]; /*0x7815e0*/
      *(_DWORD *)v5->__pad_0 = v8; /*0x7815e7*/
      *(_DWORD *)&v5->__pad_0[4] = ecx26; /*0x7815e9*/
      ++v8; /*0x7815ec*/
      v2 += 268; /*0x7815ed*/
      v5 = (AbstractClass *)((char *)v5 + 8); /*0x7815f3*/
    }
    while ( v8 < (int)v7 ); /*0x7815f8*/
  }
  v33 = (int (__cdecl *)(const void *, const void *))sub_781380; /*0x7815fa*/
LABEL_28:
  v9 = (AbstractClass *)Base; /*0x7815ff*/
  qsort((AbstractClass *)Base, v7, 8u, v33); /*0x781607*/
  int v11 = v57; /*0x78160c*/
  AbstractClass *v12 = (int)v50; /*0x781610*/
  for ( i = 0; (int)i < 2; i = (AbstractClass *)((char *)i + 1) ) /*0x781619*/
  {
    int v52 = 0; /*0x78161f*/
    if ( v11 <= 0 ) /*0x781623*/
      continue; /*0x781623*/
    do /*0x781bff*/
    {
      v55 = 0; /*0x78162b*/
      if ( v12 <= 0 ) /*0x78162f*/
        goto LABEL_100; /*0x78162f*/
      v53 = v9; /*0x781638*/
      int v58 = v12 - 1; /*0x78163c*/
      while ( 1 ) /*0x7816b0*/
      {
        ebx40 = v55; /*0x7816b0*/
        memset(aP0, 0, sizeof(aP0)); /*0x7816bf*/
        if ( g_WOL_GameListRender == (ObjectClass *)1 ) /*0x7816c9*/
        {
          ebx40 = v58; /*0x7816e1*/
        }
        else if ( g_WOL_GameListRender && *(int *)v53->__pad_0 >= 0 && *(_DWORD *)v53->__pad_0 < v12 ) /*0x7816db*/
        {
          ebx40 = *(_DWORD *)v53->__pad_0; /*0x7816dd*/
        }
        if ( ebx40 >= 0 && ebx40 < (int)g_WOL_ChatState ) /*0x7816ef*/
          qmemcpy(aP0, (char *)g_WOL_ConnectionHandler + 268 * ebx40, sizeof(aP0)); /*0x78170d*/
        if ( *(_DWORD *)&HouseClass_Player[29932] != 4 /*0x78173a*/
          || (*(_WORD *)&aP0[32] & 0x800) == 0 && (*(_WORD *)&aP0[32] & 0x1000) == 0 )
        {
          strncpy(Destination, &aP0[224], (IUnknown *)0x80); /*0x781757*/
          int v61 = 0; /*0x781763*/
          int v60 = 0; /*0x781767*/
          int v59 = 0; /*0x78176b*/
          int v47 = 0; /*0x78176f*/
          v46 = 0; /*0x781773*/
  int v39; // [esp+Ch] [ebp-290h] BYREF
          unknown_libname_73(&v39); /*0x781777*/
          ParseStringCommaInts(Destination, &v61, &v60, &v59, &v47, (int *)&v46, (void **)&v39); /*0x7817a3*/
          v15 = (CampaignScore *)(v59 + *(_DWORD *)&aP0[12] - v47); /*0x7817b9*/
          BOOL v17 = v47 || v46; /*0x7817cb*/
          v18 = (CampaignScore *)(*(_DWORD *)&aP0[8] - v17); /*0x7817d4*/
          if ( *(&g_MatrixTransformState + 2222) ) /*0x7817dd*/
          {
            if ( !v46 || v47 ) /*0x7817e5*/
            {
              if ( i != (AbstractClass *)1 ) /*0x7817f9*/
                goto LABEL_97; /*0x7817f9*/
            }
            else if ( i ) /*0x7817ed*/
            {
              goto LABEL_97; /*0x7817ed*/
            }
LABEL_67:
            if ( !FilterWOLGameListEntry((AbstractClass *)aP0, v52, (int)v46, v47) ) /*0x781824*/
            {
  int v44; // [esp+20h] [ebp-27Ch]
  int v23; // eax
              swprintf(Buffer, (const size_t)aHsDD, (const wchar_t *const)&aP0[52], v15); /*0x781848*/
              v19 = SendMessageA(hWnd, 0x4C7u, 0xFFFFFFFF, (LPARAM)&aP0[52]); /*0x781864*/
              v20 = v19; /*0x78186a*/
              SendMessageA(hWnd, 0x19Au, v19, ebx40); /*0x781878*/
              Gadget::InitProperties(&v40); /*0x781882*/
              v40 = 1; /*0x781893*/
  void *v41; // [esp+14h] [ebp-288h] BYREF
              WideString::Reassign(&v41, Buffer); /*0x78189b*/
  void *v42; // [esp+18h] [ebp-284h] BYREF
              WideString::Reassign(&v42, (wchar_t *)&stru_87C374[46016]); /*0x7818a9*/
              var280 = -1; /*0x7818bb*/
              if ( *(&g_MatrixTransformState + 2222) ) /*0x7818bf*/
              {
                if ( !v46 || v47 ) /*0x7818cf*/
                  var280 = (int)&unk_808080; /*0x7818d7*/
              }
              else if ( v15 == v18 ) /*0x7818df*/
              {
                var280 = (int)&unk_808080; /*0x7818e6*/
              }
              v21 = hWnd; /*0x7818f0*/
              int v22 = v20 << 16; /*0x781900*/
              SendMessageA(hWnd, 0x4A8u, v22 | (unsigned __int16)dword_B77A8C, (LPARAM)&v40); /*0x781917*/
              v40 = 0; /*0x781924*/
              WideString::Reassign(&v42, (wchar_t *)&stru_87C374[46016]); /*0x781928*/
              v40 = 2; /*0x781931*/
              WideString::Reassign(&v42, (wchar_t *)&stru_87C374[46016]); /*0x78193e*/
              if ( *(_DWORD *)&HouseClass_Player[29932] != 4 ) /*0x78194a*/
                goto LABEL_80; /*0x78194a*/
              if ( (aP0[33] & 1) != 0 ) /*0x78195c*/
              {
                v44 = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620[23164], 0); /*0x78197f*/
                StringCSF = GetStringCSF(aTxtBattleclanG, 0, (CampaignScore *)g_Str_File_wonline_cpp, 3351); /*0x781988*/
                WideString::Reassign(&v42, StringCSF); /*0x781989*/
                goto LABEL_81; /*0x781989*/
              }
              if ( *(_DWORD *)&aP0[20] || (aP0[33] & 1) != 0 ) /*0x781996*/
              {
                v44 = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620[23216], 0); /*0x7819b9*/
                v35 = GetStringCSF(aTxtTournamentG, 0, (CampaignScore *)g_Str_File_wonline_cpp, 3356); /*0x7819c2*/
                WideString::Reassign(&v42, v35); /*0x7819c3*/
              }
              else
              {
LABEL_80:
                v44 = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620[23120], 0); /*0x7819d5*/
                WideString::Reassign(&v42, (wchar_t *)&stru_87C374[46016]); /*0x7819e2*/
              }
LABEL_81:
              SendMessageA(v21, 0x4A8u, v22 | (unsigned __int16)dword_B778D0, (LPARAM)&v40); /*0x7819e7*/
              v40 = 2; /*0x781a07*/
              WideString::Reassign(&v42, (wchar_t *)&stru_87C374[46016]); /*0x781a14*/
              if ( (aP0[29] & 1) != 0 ) /*0x781a23*/
              {
                v44 = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620[23176], 0); /*0x781a46*/
                v36 = GetStringCSF(aTxtGamePasswor, 0, (CampaignScore *)g_Str_File_wonline_cpp, 3370); /*0x781a4f*/
                WideString::Reassign(&v42, v36); /*0x781a50*/
              }
              else
              {
                v40 = 0; /*0x781a52*/
                WideString::Reassign(&v42, (wchar_t *)&stru_87C374[46016]); /*0x781a5f*/
              }
              SendMessageA(v21, 0x4A8u, v22 | (unsigned __int16)dword_B778CC, (LPARAM)&v40); /*0x781a7c*/
              v40 = 0; /*0x781a82*/
              WideString::Reassign(&v41, (wchar_t *)&stru_87C374[46016]); /*0x781a8b*/
              WideString::Reassign(&v42, (wchar_t *)&stru_87C374[46016]); /*0x781a99*/
              if ( (aP0[33] & 6) != 0 ) /*0x781aac*/
              {
                if ( v47 || !v46 ) /*0x781ab6*/
                {
                  v40 = 2; /*0x781ac9*/
                  v23 = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620[22260], 0); /*0x781ad6*/
                }
                else
                {
                  v40 = 2; /*0x781ab9*/
                  v23 = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620[23148], 0); /*0x781ac6*/
                }
LABEL_92:
                v44 = v23; /*0x781afa*/
              }
              else if ( !v47 && v46 ) /*0x781ae0*/
              {
                v40 = 2; /*0x781ae3*/
                v23 = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620[6076], 0); /*0x781af5*/
                goto LABEL_92; /*0x781af5*/
              }
              SendMessageA(v21, 0x4A8u, v22 | (unsigned __int16)dword_B76AF4, (LPARAM)&v40); /*0x781b18*/
              v24 = *(const wchar_t **)&aP0[40]; /*0x781b1a*/
              if ( *(_DWORD *)&aP0[40] == -1 ) /*0x781b24*/
              {
                v40 = 1; /*0x781b2f*/
                WideString::Reassign(&v41, asc_84A6E0); /*0x781b37*/
                v24 = *(const wchar_t **)&aP0[40]; /*0x781b3c*/
              }
              else
              {
                v43 = *(ObjectClass **)&aP0[40]; /*0x781b45*/
                v40 = 3; /*0x781b49*/
              }
              v37 = v24; /*0x781b51*/
              v25 = GetStringCSF( /*0x781b63*/
                      (wchar_t *)&stru_84A684.CCINIClass_field_4C,
                      0,
                      (CampaignScore *)g_Str_File_wonline_cpp,
                      3410);
              swprintf(Buffer, (const size_t)v25, v37, v38); /*0x781b71*/
              WideString::Reassign(&v42, Buffer); /*0x781b85*/
              SendMessageA(v21, 0x4A8u, v22 | (unsigned __int16)dword_B7643C, (LPARAM)&v40); /*0x781ba2*/
              DeleteAndZero::Alt(&v42); /*0x781ba8*/
              DeleteAndZero::Alt(&v41); /*0x781bb1*/
            }
          }
          else
          {
            if ( v15 == v18 ) /*0x781806*/
            {
              if ( i != (AbstractClass *)1 ) /*0x78180b*/
                goto LABEL_97; /*0x78180b*/
              goto LABEL_67; /*0x78180b*/
            }
            if ( !i ) /*0x781814*/
              goto LABEL_67; /*0x781814*/
          }
LABEL_97:
          DeleteAndZero((int)&v39); /*0x781bb6*/
        }
        bool v26 = ++v55 < (int)v50; /*0x781bd4*/
        v53 = (AbstractClass *)((char *)v53 + 8); /*0x781bda*/
        --v58; /*0x781bde*/
        if ( !v26 ) /*0x781be2*/
          break; /*0x781be2*/
        v12 = (int)v50; /*0x7816aa*/
      }
      v11 = v57; /*0x781be8*/
      v9 = (AbstractClass *)Base; /*0x781bec*/
      v12 = (int)v50; /*0x781bf0*/
LABEL_100:
      ++v52; /*0x781bf4*/
    }
    while ( v52 < v11 ); /*0x781bff*/
  }
  if ( v9 ) /*0x781c19*/
    __3_YAXPAX_Z(v9); /*0x781c1c*/
  char * v27 = String::GetOrEmpty_Alt((char **)&a2); /*0x781c28*/
  v28 = hWnd; /*0x781c2d*/
  v29 = SendMessageA(hWnd, 0x4C5u, 0, (LPARAM)v27); /*0x781c3f*/
  SendMessageA(v28, 0x186u, v29, 0); /*0x781c49*/
  char * v30 = String::GetOrEmpty_Alt((char **)&v54); /*0x781c4f*/
  v31 = SendMessageA(v28, 0x4C5u, 0, (LPARAM)v30); /*0x781c5c*/
  if ( v31 != -1 ) /*0x781c61*/
    SendMessageA(v28, 0x197u, v31, 0); /*0x781c6b*/
  SendMessageA(v28, 0x49Du, 0, 0); /*0x781c75*/
  InvalidateRect(v28, 0, 0); /*0x781c7a*/
  if ( hDlg == Dialog::GetCurrent() ) /*0x781c8d*/
  {
    v32 = GetDlgItem(hDlg, 1344); /*0x781c95*/
    SetFocus(v32); /*0x781c9c*/
  }
  DeleteAndZero((int)&v54); /*0x781ca6*/
  DeleteAndZero((int)&a2); /*0x781caf*/
}
} // namespace gamemd

// 0x781FB0
namespace gamemd {
AbstractClass * * InsertGameSettings(unsigned char * a1, char a2)
{
{
  char result; // al
  AbstractClass *v6; // ebp
  AbstractClass *v11; // edi
  _BYTE * v2 = a1; /*0x781fb6*/
  Coord *v3 = g_WOL_State; /*0x781fbd*/
  _BYTE v20[108]; // [esp+1Ch] [ebp-6Ch] BYREF
  memset(v20, 0, sizeof(v20)); /*0x781fce*/
  signed int v19 = g_WOL_State; /*0x781fd8*/
  if ( !g_WOL_State ) /*0x781fdc*/
    return DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, 0); /*0x781ff1*/
  int v5 = 0; /*0x781ff2*/
  if ( (int)g_WOL_State > 0 ) /*0x781ff6*/
    qmemcpy(v20, g_WOL_ConnectionFlags, sizeof(v20)); /*0x782007*/
  if ( (v20[0] & 1) != 0 ) /*0x78200e*/
  {
    v6 = g_WOL_ConnectionFlags; /*0x782010*/
    do /*0x782038*/
    {
      if ( v5 >= (int)g_WOL_State ) /*0x782018*/
        break; /*0x782018*/
      ++v5; /*0x78201a*/
      v6 += 3; /*0x78201b*/
      if ( v5 >= 0 && v5 < (int)g_WOL_State ) /*0x782024*/
        qmemcpy(v20, v6, sizeof(v20)); /*0x782031*/
    }
    while ( (v20[0] & 1) != 0 ); /*0x782038*/
    v2 = a1; /*0x78203a*/
  }
  if ( (*v2 & 1) != 0 ) /*0x782042*/
  {
    signed int v7 = 0; /*0x782048*/
    if ( (int)g_WOL_State > 0 ) /*0x78204c*/
      qmemcpy(v20, g_WOL_ConnectionFlags, sizeof(v20)); /*0x78205d*/
    if ( a2 ) /*0x782065*/
    {
      if ( v5 <= 0 ) /*0x782069*/
        goto LABEL_34; /*0x782069*/
      int v8 = 0; /*0x78206f*/
      while ( _strcmpi(&v20[36], a1 + 36) < 0 ) /*0x782088*/
      {
        v3 = g_WOL_State; /*0x78208a*/
        ++v7; /*0x782090*/
        v8 += 3; /*0x782091*/
        if ( v8 >= 0 && v7 < (int)g_WOL_State ) /*0x78209c*/
          qmemcpy(v20, &g_WOL_ConnectionFlags[v8], sizeof(v20)); /*0x7820ae*/
        if ( v7 >= v5 ) /*0x7820b6*/
          goto LABEL_34; /*0x7820b6*/
      }
    }
    else
    {
      if ( v5 <= 0 ) /*0x7820bc*/
        goto LABEL_34; /*0x7820bc*/
      int v9 = 0; /*0x7820be*/
      while ( _strcmpi(&v20[36], a1 + 36) > 0 ) /*0x7820d7*/
      {
        v3 = g_WOL_State; /*0x7820d9*/
        ++v7; /*0x7820df*/
        v9 += 3; /*0x7820e0*/
        if ( v9 >= 0 && v7 < (int)g_WOL_State ) /*0x7820eb*/
          qmemcpy(v20, &g_WOL_ConnectionFlags[v9], sizeof(v20)); /*0x7820fd*/
        if ( v7 >= v5 ) /*0x782105*/
          goto LABEL_34; /*0x782105*/
      }
    }
    v3 = g_WOL_State; /*0x782109*/
LABEL_34:
    Coord *v10 = v7; /*0x78210f*/
    if ( v7 > v3 ) /*0x782113*/
      v10 = v3; /*0x782115*/
    if ( v10 >= g_WOL_StateFlags ) /*0x78211d*/
    {
      DynamicArray::Grow(&g_WOL_State); /*0x782124*/
      v3 = g_WOL_State; /*0x782129*/
    }
    if ( v3 >= g_WOL_StateFlags ) /*0x782135*/
    {
      DynamicArray::Grow(&g_WOL_State); /*0x78213c*/
      v3 = g_WOL_State; /*0x782141*/
    }
    if ( v10 < v3 ) /*0x782149*/
    {
      memcpy(&g_WOL_ConnectionFlags[3 * v10 + 3], &g_WOL_ConnectionFlags[3 * v10], 108 * v3 - 108 * v10); /*0x782174*/
      v3 = g_WOL_State; /*0x782179*/
    }
    result = (char)g_WOL_ConnectionFlags; /*0x782182*/
    v11 = &g_WOL_ConnectionFlags[3 * v10]; /*0x78218d*/
    if ( !v11 ) /*0x782192*/
      goto LABEL_75; /*0x782192*/
    goto LABEL_74; /*0x782192*/
  }
  signed int v12 = v5; /*0x78219f*/
  if ( v5 >= 0 && v5 < (int)g_WOL_State ) /*0x7821a5*/
    qmemcpy(v20, &g_WOL_ConnectionFlags[3 * v5], sizeof(v20)); /*0x7821bf*/
  if ( a2 ) /*0x7821c7*/
  {
    if ( v5 >= (int)g_WOL_State ) /*0x7821cb*/
      goto LABEL_65; /*0x7821cb*/
    int v13 = 3 * v5; /*0x7821d7*/
    while ( _strcmpi(&v20[36], a1 + 36) < 0 ) /*0x7821f1*/
    {
      v3 = g_WOL_State; /*0x7821f3*/
      ++v12; /*0x7821f9*/
      v13 += 3; /*0x7821fa*/
      if ( v13 >= 0 && v12 < (int)g_WOL_State ) /*0x782201*/
        qmemcpy(v20, &g_WOL_ConnectionFlags[v13], sizeof(v20)); /*0x782215*/
      if ( v12 >= v19 ) /*0x78221b*/
        goto LABEL_65; /*0x78221b*/
    }
  }
  else
  {
    if ( v5 >= (int)g_WOL_State ) /*0x782221*/
      goto LABEL_65; /*0x782221*/
    int v14 = 3 * v5; /*0x782229*/
    while ( _strcmpi(&v20[36], a1 + 36) > 0 ) /*0x782243*/
    {
      v3 = g_WOL_State; /*0x782245*/
      ++v12; /*0x78224b*/
      v14 += 3; /*0x78224c*/
      if ( v14 >= 0 && v12 < (int)g_WOL_State ) /*0x782253*/
        qmemcpy(v20, &g_WOL_ConnectionFlags[v14], sizeof(v20)); /*0x782267*/
      if ( v12 >= v19 ) /*0x78226d*/
        goto LABEL_65; /*0x78226d*/
    }
  }
  v3 = g_WOL_State; /*0x782271*/
LABEL_65:
  Coord *v15 = v12; /*0x782277*/
  if ( v12 > v3 ) /*0x78227b*/
    v15 = v3; /*0x78227d*/
  if ( v15 >= g_WOL_StateFlags ) /*0x782285*/
  {
    DynamicArray::Grow(&g_WOL_State); /*0x78228c*/
    v3 = g_WOL_State; /*0x782291*/
  }
  if ( v3 >= g_WOL_StateFlags ) /*0x78229d*/
  {
    DynamicArray::Grow(&g_WOL_State); /*0x7822a4*/
    v3 = g_WOL_State; /*0x7822a9*/
  }
  if ( v15 < v3 ) /*0x7822b1*/
  {
    memcpy(&g_WOL_ConnectionFlags[3 * v15 + 3], &g_WOL_ConnectionFlags[3 * v15], 108 * v3 - 108 * v15); /*0x7822dc*/
    v3 = g_WOL_State; /*0x7822e1*/
  }
  int v16 = 3 * v15; /*0x7822f0*/
  result = 9 * v16; /*0x7822f3*/
  v11 = &g_WOL_ConnectionFlags[v16]; /*0x7822f6*/
  if ( !v11 ) /*0x7822fb*/
    goto LABEL_75; /*0x7822fb*/
LABEL_74:
  qmemcpy(v11, a1, 0x6Cu); /*0x7822fd*/
  v3 = g_WOL_State; /*0x782308*/
LABEL_75:
  g_WOL_State = v3 + 1; /*0x78230e*/
  return result; /*0x781fea*/
}
} // namespace gamemd

// 0x782320
namespace gamemd {
void InsertBuddyList(char * a1, char a2)
{
{
  ObjectClass *v4; // eax
  ObjectClass *v5; // esi
  ObjectClass *v12; // esi
  ObjectClass *v18; // esi
  ObjectClass *v23; // esi
  ObjectClass *v27; // esi
  ObjectClass *v32; // esi
  ObjectClass *v37; // esi
  ObjectClass *v41; // esi
  AbstractClass *v45; // edi
  ObjectClass *v48; // [esp+18h] [ebp-E8h]
  ObjectClass *v49; // [esp+1Ch] [ebp-E4h] BYREF
  char * v51 = a1; /*0x782332*/
  void *v46; // [esp+10h] [ebp-F0h] BYREF
  unknown_libname_73(&v46); /*0x782336*/
  int v50 = -1; /*0x782349*/
  _DWORD v53[27]; // [esp+94h] [ebp-6Ch] BYREF
  memset(v53, 0, sizeof(v53)); /*0x782351*/
  String::Assign_Bool(&v46, a1 + 36); /*0x78235b*/
  String::ToLower((const char **)&v46); /*0x782364*/
  if ( g_WOL_HashTable ) /*0x782371*/
  {
    v49 = 0; /*0x78237d*/
    if ( HashTable::LookupString((_DWORD *)g_WOL_HashTable, (const char **)&v46, &v49) ) /*0x782385*/
    {
      if ( v49 ) /*0x782394*/
        qmemcpy(v53, v49, sizeof(v53)); /*0x7823a2*/
      v50 = v53[7]; /*0x7823ab*/
    }
  }
  _BYTE v52[108]; // [esp+28h] [ebp-D8h] BYREF
  memset(v52, 0, sizeof(v52)); /*0x7823c0*/
  v49 = (ObjectClass *)g_WOL_State; /*0x7823c6*/
  if ( g_WOL_State ) /*0x7823ca*/
  {
  int v47; // [esp+14h] [ebp-ECh]
  int v15; // ebx
  bool v10; // sf
    v48 = 0; /*0x7823e3*/
    if ( (int)g_WOL_State > 0 ) /*0x7823ed*/
      qmemcpy(v52, g_WOL_ConnectionFlags, sizeof(v52)); /*0x7823fa*/
    if ( (v52[0] & 1) != 0 ) /*0x782401*/
    {
      v4 = (ObjectClass *)g_WOL_ConnectionFlags; /*0x782403*/
      do /*0x782435*/
      {
        v5 = v48; /*0x782409*/
        if ( (int)v48 >= (int)v49 ) /*0x78240f*/
          break; /*0x78240f*/
        v4 = (ObjectClass *)((char *)v4 + 108); /*0x782413*/
        char * v6 = &v48->__pad_0[1]; /*0x782416*/
        v48 = (ObjectClass *)((char *)v48 + 1); /*0x782419*/
        if ( (int)&v5->__pad_0[1] >= 0 && (int)v6 < (int)g_WOL_State ) /*0x782421*/
          qmemcpy(v52, v4, sizeof(v52)); /*0x78242e*/
      }
      while ( (v52[0] & 1) != 0 ); /*0x782435*/
    }
    if ( (*v51 & 1) != 0 ) /*0x78243e*/
    {
      v47 = 0; /*0x782446*/
      if ( (int)g_WOL_State > 0 ) /*0x78244e*/
        qmemcpy(v52, g_WOL_ConnectionFlags, sizeof(v52)); /*0x78245b*/
      String::Assign_Bool(&v46, &v52[36]); /*0x782466*/
      String::ToLower((const char **)&v46); /*0x78246f*/
      int v7 = -1; /*0x78247a*/
      if ( g_WOL_HashTable ) /*0x78247f*/
      {
        v49 = 0; /*0x78248b*/
        if ( HashTable::LookupString((_DWORD *)g_WOL_HashTable, (const char **)&v46, &v49) ) /*0x782493*/
        {
          if ( v49 ) /*0x7824a2*/
            qmemcpy(v53, v49, sizeof(v53)); /*0x7824b0*/
          v7 = v53[7]; /*0x7824b2*/
        }
      }
      if ( a2 ) /*0x7824bf*/
      {
        if ( (int)v48 > 0 ) /*0x7824c7*/
        {
          int v8 = v47; /*0x7824cd*/
          int v9 = 0; /*0x7824d1*/
          do /*0x782597*/
          {
            if ( v7 >= v50 || v7 <= 0 ) /*0x7824db*/
            {
              if ( v50 != -1 || v7 <= 0 ) /*0x7824ea*/
                goto LABEL_69; /*0x7824ea*/
              v8 = v47; /*0x7824f0*/
            }
            ++v8; /*0x7824f4*/
            v10 = v9 * 36 + 108 < 0; /*0x7824f5*/
            v9 += 3; /*0x7824f5*/
            v47 = v8; /*0x7824f8*/
            if ( !v10 && v8 < (int)g_WOL_State ) /*0x782504*/
              qmemcpy(v52, &g_WOL_ConnectionFlags[v9], sizeof(v52)); /*0x782518*/
            String::Assign_Bool(&v46, &v52[36]); /*0x782523*/
            String::ToLower((const char **)&v46); /*0x78252c*/
            _DWORD * v11 = (_DWORD *)g_WOL_HashTable; /*0x782531*/
            v7 = -1; /*0x782537*/
            if ( g_WOL_HashTable ) /*0x78253c*/
            {
              if ( *(_DWORD *)(g_WOL_HashTable + 4) ) /*0x78253e*/
              {
                v12 = *(ObjectClass **)(*v11 + 4 * HashMap::ComputeIndex_2(g_WOL_HashTable, (int)&v46)); /*0x782553*/
                if ( v12 ) /*0x782558*/
                {
                  while ( !String::Compare((const char **)v12, (const char **)&v46) ) /*0x782568*/
                  {
                    v12 = (ObjectClass *)v12->estimatedHealth; /*0x78256a*/
                    if ( !v12 ) /*0x78256f*/
                      goto LABEL_45; /*0x78256f*/
                  }
                  char * v13 = &v12->__pad_0[4]; /*0x782577*/
                  if ( v13 ) /*0x78257c*/
                    qmemcpy(v53, v13, sizeof(v53)); /*0x78258a*/
                  v7 = v53[7]; /*0x78258c*/
                }
              }
            }
LABEL_45:
            ; /*0x782593*/
          }
          while ( v8 < (int)v48 ); /*0x782597*/
        }
      }
      else if ( (int)v48 > 0 ) /*0x7825a4*/
      {
        int v14 = v50; /*0x7825aa*/
        v15 = v47; /*0x7825ae*/
        int v16 = 0; /*0x7825b2*/
        while ( v7 > v14 && v7 > 0 || v14 == -1 && v7 > 0 ) /*0x7825cd*/
        {
          ++v15; /*0x7825d3*/
          v16 += 3; /*0x7825d4*/
          if ( v16 >= 0 && v15 < (int)g_WOL_State ) /*0x7825df*/
            qmemcpy(v52, &g_WOL_ConnectionFlags[v16], sizeof(v52)); /*0x7825f2*/
          String::Assign_Bool(&v46, &v52[36]); /*0x7825fd*/
          String::ToLower((const char **)&v46); /*0x782606*/
          _DWORD * v17 = (_DWORD *)g_WOL_HashTable; /*0x78260b*/
          v7 = -1; /*0x782611*/
          if ( g_WOL_HashTable ) /*0x782616*/
          {
            if ( *(_DWORD *)(g_WOL_HashTable + 4) ) /*0x782618*/
            {
              v18 = *(ObjectClass **)(*v17 + 4 * HashMap::ComputeIndex_2(g_WOL_HashTable, (int)&v46)); /*0x78262d*/
              if ( v18 ) /*0x782632*/
              {
                while ( !String::Compare((const char **)v18, (const char **)&v46) ) /*0x782642*/
                {
                  v18 = (ObjectClass *)v18->estimatedHealth; /*0x782644*/
                  if ( !v18 ) /*0x782649*/
                    goto LABEL_66; /*0x782649*/
                }
                char * v19 = &v18->__pad_0[4]; /*0x782651*/
                if ( v19 ) /*0x782656*/
                  qmemcpy(v53, v19, sizeof(v53)); /*0x782664*/
                v7 = v53[7]; /*0x782666*/
              }
            }
          }
LABEL_66:
          if ( v15 >= (int)v48 ) /*0x782671*/
            goto LABEL_160; /*0x782671*/
          v14 = v50; /*0x7825b6*/
        }
        v47 = v15; /*0x78267c*/
LABEL_69:
        if ( v47 < (int)v48 ) /*0x78268a*/
        {
  int v21; // ebx
          int v20 = 3 * v47; /*0x782698*/
          do /*0x782768*/
          {
            if ( v50 != v7 || _strcmpi(&v52[36], v51 + 36) >= 0 ) /*0x7826bc*/
              break; /*0x7826bc*/
            v21 = v47 + 1; /*0x7826c6*/
            v10 = v20 * 36 + 108 < 0; /*0x7826c7*/
            v20 += 3; /*0x7826c7*/
            ++v47; /*0x7826ca*/
            if ( !v10 && v21 < (int)g_WOL_State ) /*0x7826d6*/
              qmemcpy(v52, &g_WOL_ConnectionFlags[v20], sizeof(v52)); /*0x7826e9*/
            String::Assign_Bool(&v46, &v52[36]); /*0x7826f4*/
            String::ToLower((const char **)&v46); /*0x7826fd*/
            _DWORD * v22 = (_DWORD *)g_WOL_HashTable; /*0x782702*/
            v7 = -1; /*0x782708*/
            if ( g_WOL_HashTable ) /*0x78270d*/
            {
              if ( *(_DWORD *)(g_WOL_HashTable + 4) ) /*0x78270f*/
              {
                v23 = *(ObjectClass **)(*v22 + 4 * HashMap::ComputeIndex_2(g_WOL_HashTable, (int)&v46)); /*0x782724*/
                if ( v23 ) /*0x782729*/
                {
                  while ( !String::Compare((const char **)v23, (const char **)&v46) ) /*0x782739*/
                  {
                    v23 = (ObjectClass *)v23->estimatedHealth; /*0x78273b*/
                    if ( !v23 ) /*0x782740*/
                      goto LABEL_85; /*0x782740*/
                  }
                  char * v24 = &v23->__pad_0[4]; /*0x782748*/
                  if ( v24 ) /*0x78274d*/
                    qmemcpy(v53, v24, sizeof(v53)); /*0x78275b*/
                  v7 = v53[7]; /*0x78275d*/
                }
              }
            }
LABEL_85:
            ;
          }
          while ( v21 < (int)v48 ); /*0x782768*/
        }
      }
    }
    else
    {
      v47 = (int)v48; /*0x782779*/
      if ( (int)v48 >= 0 && (int)v48 < (int)g_WOL_State ) /*0x782781*/
        qmemcpy(v52, &g_WOL_ConnectionFlags[3 * (int)v48], sizeof(v52)); /*0x782796*/
      String::Assign_Bool(&v46, &v52[36]); /*0x7827a1*/
      String::ToLower((const char **)&v46); /*0x7827aa*/
      _DWORD * v25 = (_DWORD *)g_WOL_HashTable; /*0x7827af*/
      int v26 = -1; /*0x7827b5*/
      if ( g_WOL_HashTable ) /*0x7827ba*/
      {
        if ( *(_DWORD *)(g_WOL_HashTable + 4) ) /*0x7827bc*/
        {
          v27 = *(ObjectClass **)(*v25 + 4 * HashMap::ComputeIndex_2(g_WOL_HashTable, (int)&v46)); /*0x7827d1*/
          if ( v27 ) /*0x7827d6*/
          {
            while ( !String::Compare((const char **)v27, (const char **)&v46) ) /*0x7827e6*/
            {
              v27 = (ObjectClass *)v27->estimatedHealth; /*0x7827e8*/
              if ( !v27 ) /*0x7827ed*/
                goto LABEL_99; /*0x7827ed*/
            }
            char * v28 = &v27->__pad_0[4]; /*0x7827f5*/
            if ( v28 ) /*0x7827fa*/
              qmemcpy(v53, v28, sizeof(v53)); /*0x782808*/
            v26 = v53[7]; /*0x78280a*/
          }
        }
      }
LABEL_99:
      if ( a2 ) /*0x78281b*/
      {
        if ( (int)v48 < (int)v49 ) /*0x782823*/
        {
          int v29 = v47; /*0x78282b*/
          int v30 = 3 * (_DWORD)v48; /*0x782835*/
          do /*0x7828fc*/
          {
            if ( v26 >= v50 || v26 <= 0 ) /*0x782840*/
            {
              if ( v50 != -1 || v26 <= 0 ) /*0x78284f*/
                goto LABEL_143; /*0x78284f*/
              v29 = v47; /*0x782855*/
            }
            ++v29; /*0x782859*/
            v10 = v30 * 36 + 108 < 0; /*0x78285a*/
            v30 += 3; /*0x78285a*/
            v47 = v29; /*0x78285d*/
            if ( !v10 && v29 < (int)g_WOL_State ) /*0x782869*/
              qmemcpy(v52, &g_WOL_ConnectionFlags[v30], sizeof(v52)); /*0x78287d*/
            String::Assign_Bool(&v46, &v52[36]); /*0x782888*/
            String::ToLower((const char **)&v46); /*0x782891*/
            _DWORD * v31 = (_DWORD *)g_WOL_HashTable; /*0x782896*/
            v26 = -1; /*0x78289c*/
            if ( g_WOL_HashTable ) /*0x7828a1*/
            {
              if ( *(_DWORD *)(g_WOL_HashTable + 4) ) /*0x7828a3*/
              {
                v32 = *(ObjectClass **)(*v31 + 4 * HashMap::ComputeIndex_2(g_WOL_HashTable, (int)&v46)); /*0x7828b8*/
                if ( v32 ) /*0x7828bd*/
                {
                  while ( !String::Compare((const char **)v32, (const char **)&v46) ) /*0x7828cd*/
                  {
                    v32 = (ObjectClass *)v32->estimatedHealth; /*0x7828cf*/
                    if ( !v32 ) /*0x7828d4*/
                      goto LABEL_119; /*0x7828d4*/
                  }
                  char * v33 = &v32->__pad_0[4]; /*0x7828dc*/
                  if ( v33 ) /*0x7828e1*/
                    qmemcpy(v53, v33, sizeof(v53)); /*0x7828ef*/
                  v26 = v53[7]; /*0x7828f1*/
                }
              }
            }
LABEL_119:
            ; /*0x7828f8*/
          }
          while ( v29 < (int)v49 ); /*0x7828fc*/
        }
      }
      else if ( (int)v48 < (int)v49 ) /*0x782909*/
      {
        v15 = v47; /*0x782913*/
        int v34 = v50; /*0x78291d*/
        int v35 = 3 * (_DWORD)v48; /*0x782921*/
        while ( v26 > v34 && v26 > 0 || v34 == -1 && v26 > 0 ) /*0x78293d*/
        {
          ++v15; /*0x782943*/
          v35 += 3; /*0x782944*/
          if ( v35 >= 0 && v15 < (int)g_WOL_State ) /*0x78294f*/
            qmemcpy(v52, &g_WOL_ConnectionFlags[v35], sizeof(v52)); /*0x782963*/
          String::Assign_Bool(&v46, &v52[36]); /*0x78296e*/
          String::ToLower((const char **)&v46); /*0x782977*/
          _DWORD * v36 = (_DWORD *)g_WOL_HashTable; /*0x78297c*/
          v26 = -1; /*0x782982*/
          if ( g_WOL_HashTable ) /*0x782987*/
          {
            if ( *(_DWORD *)(g_WOL_HashTable + 4) ) /*0x782989*/
            {
              v37 = *(ObjectClass **)(*v36 /*0x7829a6*/
                                    + 4
                                    * ((*(int (__thiscall **)(void **))(g_WOL_HashTable + 24))(&v46)
                                     & ((1 << v36[3]) - 1)));
              if ( v37 ) /*0x7829ab*/
              {
                while ( !String::Compare((const char **)v37, (const char **)&v46) ) /*0x7829bb*/
                {
                  v37 = (ObjectClass *)v37->estimatedHealth; /*0x7829bd*/
                  if ( !v37 ) /*0x7829c2*/
                    goto LABEL_140; /*0x7829c2*/
                }
                char * v38 = &v37->__pad_0[4]; /*0x7829ca*/
                if ( v38 ) /*0x7829cf*/
                  qmemcpy(v53, v38, sizeof(v53)); /*0x7829dd*/
                v26 = v53[7]; /*0x7829df*/
              }
            }
          }
LABEL_140:
          if ( v15 >= (int)v49 ) /*0x7829ea*/
            goto LABEL_160; /*0x7829ea*/
          v34 = v50; /*0x782926*/
        }
        v47 = v15; /*0x7829f5*/
LABEL_143:
        v15 = v47; /*0x7829f9*/
        if ( v47 < (int)v49 ) /*0x782a03*/
        {
          int v39 = 3 * v47; /*0x782a0f*/
          do /*0x782ae0*/
          {
            if ( v50 != v26 || _strcmpi(&v52[36], v51 + 36) >= 0 ) /*0x782a33*/
              break; /*0x782a33*/
            ++v15; /*0x782a39*/
            v39 += 3; /*0x782a3a*/
            if ( v39 >= 0 && v15 < (int)g_WOL_State ) /*0x782a45*/
              qmemcpy(v52, &g_WOL_ConnectionFlags[v39], sizeof(v52)); /*0x782a59*/
            String::Assign_Bool(&v46, &v52[36]); /*0x782a64*/
            String::ToLower((const char **)&v46); /*0x782a6d*/
            _DWORD * v40 = (_DWORD *)g_WOL_HashTable; /*0x782a72*/
            v26 = -1; /*0x782a78*/
            if ( g_WOL_HashTable ) /*0x782a7d*/
            {
              if ( *(_DWORD *)(g_WOL_HashTable + 4) ) /*0x782a7f*/
              {
                v41 = *(ObjectClass **)(*v40 /*0x782a9c*/
                                      + 4
                                      * ((*(int (__thiscall **)(void **))(g_WOL_HashTable + 24))(&v46)
                                       & ((1 << v40[3]) - 1)));
                if ( v41 ) /*0x782aa1*/
                {
                  while ( !String::Compare((const char **)v41, (const char **)&v46) ) /*0x782ab1*/
                  {
                    v41 = (ObjectClass *)v41->estimatedHealth; /*0x782ab3*/
                    if ( !v41 ) /*0x782ab8*/
                      goto LABEL_159; /*0x782ab8*/
                  }
                  char * v42 = &v41->__pad_0[4]; /*0x782ac0*/
                  if ( v42 ) /*0x782ac5*/
                    qmemcpy(v53, v42, sizeof(v53)); /*0x782ad3*/
                  v26 = v53[7]; /*0x782ad5*/
                }
              }
            }
LABEL_159:
            ;
          }
          while ( v15 < (int)v49 ); /*0x782ae0*/
LABEL_160:
          v47 = v15; /*0x782ae6*/
        }
      }
    }
    Coord *v43 = v47; /*0x782aea*/
    Coord *v44 = g_WOL_State; /*0x782aee*/
    if ( v47 > (int)g_WOL_State ) /*0x782af6*/
      v43 = g_WOL_State; /*0x782af8*/
    if ( v43 >= g_WOL_StateFlags ) /*0x782b00*/
    {
      DynamicArray::Grow(&g_WOL_State); /*0x782b07*/
      v44 = g_WOL_State; /*0x782b0c*/
    }
    if ( v44 >= g_WOL_StateFlags ) /*0x782b18*/
    {
      DynamicArray::Grow(&g_WOL_State); /*0x782b1f*/
      v44 = g_WOL_State; /*0x782b24*/
    }
    if ( v43 < v44 ) /*0x782b2c*/
    {
      memcpy(&g_WOL_ConnectionFlags[3 * v43 + 3], &g_WOL_ConnectionFlags[3 * v43], 108 * v44 - 108 * v43); /*0x782b57*/
      v44 = g_WOL_State; /*0x782b5c*/
    }
    v45 = &g_WOL_ConnectionFlags[3 * v43]; /*0x782b70*/
    if ( v45 ) /*0x782b75*/
    {
      qmemcpy(v45, v51, 0x6Cu); /*0x782b80*/
      v44 = g_WOL_State; /*0x782b82*/
    }
    g_WOL_State = v44 + 1; /*0x782b89*/
  }
  else
  {
    DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, 0); /*0x7823d3*/
  }
  DeleteAndZero(&v46); /*0x782b93*/
}
} // namespace gamemd

// 0x782BB0
namespace gamemd {
int FindBuddyList(int a1, char a2)
{
{
  ObjectClass *v3; // eax
  bool v9; // sf
  signed int aP2; // [esp+Ch] [ebp-78h]
  signed int v31; // [esp+14h] [ebp-70h]
  _BYTE v32[108]; // [esp+18h] [ebp-6Ch] BYREF

  v31 = g_WOL_State; /*0x782bd2*/
  memset(v32, 0, sizeof(v32)); /*0x782bd6*/
  if ( !g_WOL_State ) /*0x782bd8*/
    return DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, 0); /*0x782beb*/
  v3 = (ObjectClass *)g_WOL_ConnectionFlags; /*0x782bec*/
  int v4 = 0; /*0x782bf2*/
  if ( (int)g_WOL_State > 0 ) /*0x782bf7*/
    qmemcpy(v32, g_WOL_ConnectionFlags, sizeof(v32)); /*0x782c04*/
  while ( (v32[0] & 1) != 0 ) /*0x782c0b*/
  {
    if ( v4 >= (int)g_WOL_State ) /*0x782c0f*/
      break; /*0x782c0f*/
    ++v4; /*0x782c11*/
    v3 = (ObjectClass *)((char *)v3 + 108); /*0x782c12*/
    if ( v4 >= 0 && v4 < (int)g_WOL_State ) /*0x782c1b*/
      qmemcpy(v32, v3, sizeof(v32)); /*0x782c28*/
  }
  if ( (*(_BYTE *)a1 & 1) == 0 ) /*0x782c38*/
  {
  unsigned int v28; // kr30_4
  unsigned int v27; // kr2C_4
    aP2 = v4; /*0x782e3d*/
    if ( v4 >= 0 && v4 < (int)g_WOL_State ) /*0x782e45*/
      qmemcpy(v32, &g_WOL_ConnectionFlags[3 * v4], sizeof(v32)); /*0x782e60*/
    if ( a2 ) /*0x782e68*/
    {
      if ( v4 >= (int)g_WOL_State ) /*0x782e70*/
        return DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, (IUnknown *)aP2); /*0x782e70*/
      int v18 = 3 * v4; /*0x782e7d*/
      while ( 1 ) /*0x782e89*/
      {
        unsigned int v19 = strlen(&v32[87]) + 1; /*0x782e89*/
        unsigned int v20 = strlen((const char *)(a1 + 87)) + 1; /*0x782e9e*/
        if ( v19 == 1 ) /*0x782ea5*/
          break; /*0x782ea5*/
        if ( v20 == 1 ) /*0x782ead*/
        {
          if ( (int)(v19 - 1) <= 0 ) /*0x782f08*/
            break; /*0x782f08*/
        }
        else if ( _strcmpi(&v32[87], (char *)(a1 + 87)) >= 0 ) /*0x782ebf*/
        {
          break; /*0x782ebf*/
        }
        signed int v21 = aP2 + 1; /*0x782ec9*/
        v9 = v18 * 36 + 108 < 0; /*0x782eca*/
        v18 += 3; /*0x782eca*/
        ++aP2; /*0x782ecd*/
        if ( !v9 && v21 < (int)g_WOL_State ) /*0x782edc*/
          qmemcpy(v32, &g_WOL_ConnectionFlags[v18], sizeof(v32)); /*0x782eef*/
        if ( aP2 >= v31 ) /*0x782efb*/
          return DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, (IUnknown *)aP2); /*0x782efb*/
      }
    }
    else
    {
      if ( v4 >= (int)g_WOL_State ) /*0x782f12*/
        return DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, (IUnknown *)aP2); /*0x782f12*/
      int v22 = 3 * v4; /*0x782f23*/
      while ( 1 ) /*0x782f2f*/
      {
        unsigned int v23 = strlen(&v32[87]) + 1; /*0x782f2f*/
        unsigned int v24 = strlen((const char *)(a1 + 87)) + 1; /*0x782f44*/
        if ( v23 == 1 ) /*0x782f4b*/
          break; /*0x782f4b*/
        if ( v24 == 1 ) /*0x782f4f*/
        {
          if ( (int)(v23 - 1) <= 0 ) /*0x782f97*/
            break; /*0x782f97*/
        }
        else if ( _strcmpi((char *)(a1 + 87), &v32[87]) >= 0 ) /*0x782f61*/
        {
          break; /*0x782f61*/
        }
        ++v4; /*0x782f63*/
        v9 = v22 * 36 + 108 < 0; /*0x782f64*/
        v22 += 3; /*0x782f64*/
        aP2 = v4; /*0x782f67*/
        if ( !v9 && v4 < (int)g_WOL_State ) /*0x782f73*/
          qmemcpy(v32, &g_WOL_ConnectionFlags[v22], sizeof(v32)); /*0x782f87*/
        if ( v4 >= v31 ) /*0x782f8d*/
          return DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, (IUnknown *)aP2); /*0x782f8d*/
      }
    }
    signed int v25 = aP2; /*0x782f9b*/
    if ( aP2 >= v31 ) /*0x782fa5*/
      return DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, (IUnknown *)aP2); /*0x782fa5*/
    int v26 = 3 * aP2; /*0x782fb2*/
    while ( 1 ) /*0x782fbe*/
    {
      v27 = strlen(&v32[87]) + 1; /*0x782fbe*/
      v28 = strlen((const char *)(a1 + 87)) + 1; /*0x782fd3*/
      if ( v27 == 1 ) /*0x782fda*/
        goto LABEL_91; /*0x782fda*/
      if ( v28 == 1 ) /*0x782fde*/
        break; /*0x782fde*/
      if ( _strcmpi((char *)(a1 + 87), &v32[87]) ) /*0x782fe6*/
        return DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, (IUnknown *)aP2); /*0x782ff0*/
LABEL_84:
      if ( _strcmpi(&v32[36], (char *)(a1 + 36)) < 0 ) /*0x783009*/
      {
        ++v25; /*0x78300b*/
        v9 = v26 * 36 + 108 < 0; /*0x78300c*/
        v26 += 3; /*0x78300c*/
        aP2 = v25; /*0x78300f*/
        if ( !v9 && v25 < (int)g_WOL_State ) /*0x78301b*/
          qmemcpy(v32, &g_WOL_ConnectionFlags[v26], sizeof(v32)); /*0x78302f*/
        if ( v25 < v31 ) /*0x783035*/
          continue; /*0x783035*/
      }
      return DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, (IUnknown *)aP2); /*0x783035*/
    }
    if ( (int)(v27 - 1) > 0 ) /*0x783059*/
      return DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, (IUnknown *)aP2); /*0x783059*/
LABEL_91:
    if ( (int)(v28 - 1) > 0 ) /*0x78305d*/
      return DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, (IUnknown *)aP2); /*0x78305d*/
    goto LABEL_84; /*0x78305d*/
  }
  aP2 = 0; /*0x782c40*/
  if ( (int)g_WOL_State > 0 ) /*0x782c48*/
    qmemcpy(v32, g_WOL_ConnectionFlags, sizeof(v32)); /*0x782c59*/
  if ( a2 ) /*0x782c61*/
  {
    if ( v4 <= 0 ) /*0x782c69*/
      return DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, (IUnknown *)aP2); /*0x782c69*/
    int v5 = 0; /*0x782c6f*/
    while ( 1 ) /*0x782c7a*/
    {
      unsigned int v6 = strlen(&v32[87]) + 1; /*0x782c7a*/
      unsigned int v7 = strlen((const char *)(a1 + 87)) + 1; /*0x782c8d*/
      if ( v6 == 1 ) /*0x782c94*/
        break; /*0x782c94*/
      if ( v7 == 1 ) /*0x782c9c*/
      {
        if ( (int)(v6 - 1) <= 0 ) /*0x782cf0*/
          break; /*0x782cf0*/
      }
      else if ( _strcmpi(&v32[87], (char *)(a1 + 87)) >= 0 ) /*0x782cae*/
      {
        break; /*0x782cae*/
      }
      signed int v8 = aP2 + 1; /*0x782cb8*/
      v9 = v5 * 36 + 108 < 0; /*0x782cb9*/
      v5 += 3; /*0x782cb9*/
      ++aP2; /*0x782cbc*/
      if ( !v9 && v8 < (int)g_WOL_State ) /*0x782ccc*/
        qmemcpy(v32, &g_WOL_ConnectionFlags[v5], sizeof(v32)); /*0x782ce0*/
      if ( aP2 >= v4 ) /*0x782ce6*/
        return DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, (IUnknown *)aP2); /*0x782ce6*/
    }
  }
  else
  {
    if ( v4 <= 0 ) /*0x782cfa*/
      return DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, (IUnknown *)aP2); /*0x782cfa*/
    int v10 = 0; /*0x782d00*/
    while ( 1 ) /*0x782d0b*/
    {
      unsigned int v11 = strlen(&v32[87]) + 1; /*0x782d0b*/
      unsigned int v12 = strlen((const char *)(a1 + 87)) + 1; /*0x782d20*/
      if ( v11 == 1 ) /*0x782d27*/
        break; /*0x782d27*/
      if ( v12 == 1 ) /*0x782d2b*/
      {
        if ( (int)(v11 - 1) <= 0 ) /*0x782d79*/
          break; /*0x782d79*/
      }
      else if ( _strcmpi((char *)(a1 + 87), &v32[87]) >= 0 ) /*0x782d3d*/
      {
        break; /*0x782d3d*/
      }
      signed int v13 = aP2 + 1; /*0x782d43*/
      v9 = v10 * 36 + 108 < 0; /*0x782d44*/
      v10 += 3; /*0x782d44*/
      ++aP2; /*0x782d47*/
      if ( !v9 && v13 < (int)g_WOL_State ) /*0x782d56*/
        qmemcpy(v32, &g_WOL_ConnectionFlags[v10], sizeof(v32)); /*0x782d69*/
      if ( aP2 >= v4 ) /*0x782d6f*/
        return DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, (IUnknown *)aP2); /*0x782d6f*/
    }
  }
  if ( aP2 < v4 ) /*0x782d83*/
  {
  unsigned int v16; // kr18_4
  unsigned int v15; // kr14_4
    int v14 = 3 * aP2; /*0x782d8f*/
    while ( 1 ) /*0x782d9b*/
    {
      v15 = strlen(&v32[87]) + 1; /*0x782d9b*/
      v16 = strlen((const char *)(a1 + 87)) + 1; /*0x782dae*/
      if ( v15 == 1 ) /*0x782db5*/
        goto LABEL_50; /*0x782db5*/
      if ( v16 == 1 ) /*0x782db9*/
        break; /*0x782db9*/
      if ( _strcmpi((char *)(a1 + 87), &v32[87]) ) /*0x782dc1*/
        return DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, (IUnknown *)aP2); /*0x782dcb*/
LABEL_43:
      if ( _strcmpi(&v32[36], (char *)(a1 + 36)) < 0 ) /*0x782de8*/
      {
        signed int v17 = aP2 + 1; /*0x782df2*/
        v9 = v14 * 36 + 108 < 0; /*0x782df3*/
        v14 += 3; /*0x782df3*/
        ++aP2; /*0x782df6*/
        if ( !v9 && v17 < (int)g_WOL_State ) /*0x782e05*/
          qmemcpy(v32, &g_WOL_ConnectionFlags[v14], sizeof(v32)); /*0x782e18*/
        if ( aP2 < v4 ) /*0x782e1e*/
          continue; /*0x782e1e*/
      }
      return DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, (IUnknown *)aP2); /*0x782e1e*/
    }
    if ( (int)(v15 - 1) > 0 ) /*0x782e2b*/
      return DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, (IUnknown *)aP2); /*0x782e2b*/
LABEL_50:
    if ( (int)(v16 - 1) > 0 ) /*0x782e33*/
      return DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, (IUnknown *)aP2); /*0x782e33*/
    goto LABEL_43; /*0x782e33*/
  }
  return DynamicClass::Insert((int *)&g_WOL_State, (HashTable *)a1, (IUnknown *)aP2); /*0x782be6*/
}
} // namespace gamemd

// 0x7830C0
namespace gamemd {
int sub_7830C0(signed int * a1, signed int * a2)
{
{

  signed int v2 = a1[2]; /*0x7830ca*/
  if ( v2 == a2[2] )
  {
    signed int v5 = a1[1]; /*0x7830e9*/
    signed int v6 = a2[1]; /*0x7830ec*/
    if ( v5 >= v6 )
    {
      if ( v5 <= v6 )
      {
  _BYTE v11[108]; // [esp+70h] [ebp-6Ch] BYREF
        memset(v11, 0, sizeof(v11)); /*0x783126*/
  _BYTE v10[108]; // [esp+4h] [ebp-D8h] BYREF
        memset(v10, 0, sizeof(v10)); /*0x783137*/
        signed int v8 = *a1; /*0x783139*/
        if ( *a1 >= 0 && v8 < (int)g_WOL_State ) /*0x783147*/
          qmemcpy(v11, (char *)g_WOL_ConnectionFlags + 108 * v8, sizeof(v11)); /*0x78315b*/
        signed int v9 = *a2; /*0x78315d*/
        if ( *a2 >= 0 && v9 < (int)g_WOL_State ) /*0x783165*/
          qmemcpy(v10, (char *)g_WOL_ConnectionFlags + 108 * v9, sizeof(v10)); /*0x783179*/
        return _strcmpi(&v11[36], &v10[36]); /*0x783188*/
      }
      else
      {
        return v6 != -1 ? 1 : -1;
      }
    }
    else
    {
      int v7 = -(v5 != -1); /*0x7830f7*/
      LOBYTE(v7) = v7 & 0xFE; /*0x7830f9*/
      return v7 + 1; /*0x7830fb*/
    }
  }
  else
  {
    int v3 = -(v2 != 0); /*0x7830dc*/
    LOBYTE(v3) = v3 & 0xFE; /*0x7830df*/
    return v3 + 1; /*0x7830e1*/
  }
}
} // namespace gamemd

// 0x783270
namespace gamemd {
void SortWOLPlayerList(char a1)
{
{
  Coord *v13; // [esp+10h] [ebp-F8h]
  void *Block; // [esp+24h] [ebp-E4h]

  Coord *v1 = g_WOL_State; /*0x783279*/
  signed int v2 = 0; /*0x78327f*/
  int v17[2]; // [esp+1Ch] [ebp-ECh] BYREF
  v17[0] = 0; /*0x783288*/
  v17[1] = 0; /*0x783290*/
  Block = 0; /*0x783294*/
  v13 = g_WOL_State; /*0x783298*/
  _DWORD * v3 = __2_YAPAXI_Z(12 * g_WOL_State); /*0x7832a1*/
  void * v19 = v3; /*0x7832a8*/
  if ( v3 ) /*0x7832ac*/
  {
    int v4 = 0; /*0x7832cf*/
  _DWORD v21[27]; // [esp+30h] [ebp-D8h] BYREF
    memset(v21, 0, sizeof(v21)); /*0x7832d7*/
    if ( v1 > 0 ) /*0x7832d9*/
    {
      int v16 = 0; /*0x7832df*/
      _DWORD * v5 = v3 + 1; /*0x7832e3*/
      while ( 1 ) /*0x7832ec*/
      {
        if ( v4 >= 0 && v2 < (int)g_WOL_State ) /*0x7832f6*/
        {
          qmemcpy(v21, (char *)g_WOL_ConnectionFlags + v4, sizeof(v21)); /*0x78330a*/
          v1 = v13; /*0x78330c*/
        }
        *(v5 - 1) = v2; /*0x783310*/
        *v5 = -1; /*0x783317*/
  void *v15; // [esp+14h] [ebp-F4h] BYREF
        unknown_libname_73(&v15); /*0x78331e*/
  _DWORD v22[27]; // [esp+9Ch] [ebp-6Ch] BYREF
        memset(v22, 0, sizeof(v22)); /*0x783331*/
        String::Assign_Bool(&v15, (const char *)&v21[9]); /*0x78333c*/
        String::ToLower((const char **)&v15); /*0x783345*/
        if ( g_WOL_HashTable ) /*0x783352*/
        {
          const void * v20 = 0; /*0x78335e*/
          if ( HashTable::LookupString((_DWORD *)g_WOL_HashTable, (const char **)&v15, &v20) ) /*0x783366*/
          {
            if ( v20 ) /*0x783375*/
            {
              qmemcpy(v22, v20, sizeof(v22)); /*0x783385*/
              v1 = v13; /*0x783387*/
            }
            *v5 = v22[7]; /*0x783392*/
          }
        }
        v5[1] = v21[0] & 1; /*0x7833a0*/
        DynamicClass::Insert(v17, v21, v17[0]); /*0x7833ad*/
        DeleteAndZero(&v15); /*0x7833b6*/
        ++v2; /*0x7833bf*/
        v5 += 3; /*0x7833c3*/
        v16 += 108; /*0x7833c8*/
        if ( v2 >= v1 ) /*0x7833cc*/
          break; /*0x7833cc*/
        v4 = v16; /*0x7832e8*/
      }
      v3 = v19; /*0x7833d2*/
    }
    if ( a1 ) /*0x7833de*/
      qsort(v3, v1, 0xCu, (_CoreCrtNonSecureSearchSortCompareFunction)sub_7830C0); /*0x7833e5*/
    else
      qsort(v3, v1, 0xCu, sub_7831A0); /*0x7833f0*/
    Coord *v6 = 0; /*0x7833f8*/
    g_WOL_State = 0; /*0x7833fc*/
    if ( v1 > 0 ) /*0x783402*/
    {
  bool v11; // zf
      int * v7 = (int *)v19; /*0x783408*/
      Coord *v14 = v1; /*0x78340c*/
      do /*0x7834e1*/
      {
        int v8 = *v7; /*0x783414*/
        if ( *v7 >= 0 && v8 < v17[0] ) /*0x78341f*/
          qmemcpy(v21, (char *)Block + 108 * v8, sizeof(v21)); /*0x783437*/
        Coord *v9 = v6; /*0x783439*/
        if ( v6 >= g_WOL_StateFlags ) /*0x783445*/
        {
          DynamicArray::Grow(&g_WOL_State); /*0x78344c*/
          v6 = g_WOL_State; /*0x783451*/
        }
        if ( v6 >= g_WOL_StateFlags ) /*0x78345d*/
        {
          DynamicArray::Grow(&g_WOL_State); /*0x783464*/
          v6 = g_WOL_State; /*0x783469*/
        }
        if ( v9 < v6 ) /*0x783471*/
        {
          memcpy( /*0x78349c*/
            (char *)g_WOL_ConnectionFlags + 108 * v9 + 108,
            (char *)g_WOL_ConnectionFlags + 108 * v9,
            108 * v6 - 108 * v9);
          v6 = g_WOL_State; /*0x7834a1*/
        }
        char * v10 = (char *)g_WOL_ConnectionFlags + 108 * v9; /*0x7834b6*/
        if ( v10 ) /*0x7834bb*/
        {
          qmemcpy(v10, v21, 0x6Cu); /*0x7834c6*/
          v6 = g_WOL_State; /*0x7834c8*/
        }
        ++v6; /*0x7834d2*/
        v7 += 3; /*0x7834d3*/
        v11 = v14 == 1; /*0x7834d6*/
        g_WOL_State = v6; /*0x7834d7*/
        --v14; /*0x7834dd*/
      }
      while ( !v11 ); /*0x7834e1*/
    }
    v17[0] = 0; /*0x7834ed*/
    __3_YAXPAX_Z(v19); /*0x7834f2*/
    v17[0] = 0; /*0x7834fb*/
    __3_YAXPAX_Z(Block); /*0x783500*/
  }
  else
  {
    v17[0] = 0; /*0x7832b2*/
    __3_YAXPAX_Z(Block); /*0x7832b7*/
  }
}
} // namespace gamemd

// 0x7835C0
namespace gamemd {
int sub_7835C0(int a1, signed int * a2)
{
{
  int result; // eax

  int v2 = *(_DWORD *)(a1 + 8); /*0x7835d5*/
  if ( v2 != a2[2] ) /*0x7835da*/
  {
    int v3 = -(v2 != 0); /*0x7835de*/
    LOBYTE(v3) = v3 & 0xFE; /*0x7835e1*/
    return v3 + 1; /*0x7835ea*/
  }
  const char * v5 = (const char *)a2[1]; /*0x7835eb*/
  unsigned int v6 = strlen(*(const char **)(a1 + 4)) + 1; /*0x7835fb*/
  unsigned int v7 = strlen(v5) + 1; /*0x783607*/
  if ( v6 != 1 ) /*0x78360e*/
  {
    if ( v7 != 1 ) /*0x783616*/
    {
      result = _strcmpi(*(const void **)(a1 + 4), v5); /*0x78361e*/
      if ( result ) /*0x783628*/
        return result; /*0x783628*/
      goto LABEL_6; /*0x783628*/
    }
    if ( (int)(v6 - 1) > 0 ) /*0x7836b4*/
      return -1; /*0x7836c3*/
  }
  if ( (int)(v7 - 1) > 0 ) /*0x7836c6*/
    return 1; /*0x7836cf*/
LABEL_6:
  _BYTE v11[108]; // [esp+70h] [ebp-6Ch] BYREF
  memset(v11, 0, sizeof(v11)); /*0x78362a*/
  _BYTE v10[108]; // [esp+4h] [ebp-D8h] BYREF
  memset(v10, 0, sizeof(v10)); /*0x78364c*/
  signed int v8 = *(_DWORD *)a1; /*0x78364e*/
  if ( *(int *)a1 >= 0 && v8 < (int)g_WOL_State ) /*0x783657*/
    qmemcpy(v11, (char *)g_WOL_ConnectionFlags + 108 * v8, sizeof(v11)); /*0x78366b*/
  signed int v9 = *a2; /*0x783674*/
  if ( *a2 >= 0 && v9 < (int)g_WOL_State ) /*0x78367c*/
    qmemcpy(v10, (char *)g_WOL_ConnectionFlags + 108 * v9, sizeof(v10)); /*0x783690*/
  return _strcmpi(&v11[36], &v10[36]); /*0x7835e0*/
}
} // namespace gamemd

// 0x7836E0
namespace gamemd {
int sub_7836E0(const void * a1, signed int * a2)
{
{
  int result; // eax
  ObjectClass *v8; // eax
  int v2 = *((_DWORD *)a1 + 2); /*0x7836f5*/
  if ( v2 != a2[2] ) /*0x7836fa*/
  {
    int v3 = -(v2 != 0); /*0x7836fe*/
    LOBYTE(v3) = v3 & 0xFE; /*0x783701*/
    return v3 + 1; /*0x78370a*/
  }
  const char * v5 = (const char *)a2[1]; /*0x78370b*/
  unsigned int v6 = strlen(*((const char **)a1 + 1)) + 1; /*0x78371b*/
  unsigned int v7 = strlen(v5) + 1; /*0x783727*/
  if ( v6 != 1 ) /*0x78372e*/
  {
    if ( v7 != 1 ) /*0x783736*/
    {
      result = _strcmpi(v5, *((const void **)a1 + 1)); /*0x78373e*/
      if ( result ) /*0x783748*/
        return result; /*0x783748*/
      goto LABEL_6; /*0x783748*/
    }
    if ( (int)(v6 - 1) > 0 ) /*0x7837d4*/
      return -1; /*0x7837e3*/
  }
  if ( (int)(v7 - 1) > 0 ) /*0x7837e6*/
    return 1; /*0x7837ef*/
LABEL_6:
  _BYTE v11[108]; // [esp+70h] [ebp-6Ch] BYREF
  memset(v11, 0, sizeof(v11)); /*0x78374a*/
  _BYTE v10[108]; // [esp+4h] [ebp-D8h] BYREF
  memset(v10, 0, sizeof(v10)); /*0x78376c*/
  v8 = *(ObjectClass **)a1; /*0x78376e*/
  if ( *(int *)a1 >= 0 && (int)v8 < (int)g_WOL_State ) /*0x783777*/
    qmemcpy(v11, &g_WOL_ConnectionFlags[3 * (int)v8], sizeof(v11)); /*0x78378b*/
  signed int v9 = *a2; /*0x783794*/
  if ( *a2 >= 0 && v9 < (int)g_WOL_State ) /*0x78379c*/
    qmemcpy(v10, &g_WOL_ConnectionFlags[3 * v9], sizeof(v10)); /*0x7837b0*/
  return _strcmpi(&v11[36], &v10[36]); /*0x783700*/
}
} // namespace gamemd

// 0x786080
namespace gamemd {
Coord * * WOL_HandleLogout()
{
{
  HWND v1; // eax
  int (__stdcall **v2)(LPVOID, void *, int *); // ecx
  int (__stdcall **v4)(LPVOID, void *, int *); // ecx
  int (__stdcall **v6)(LPVOID, void *, int *); // ecx
  HANDLE *v8; // esi
  IUnknown *v0 = g_UIControlState; /*0x786085*/
  if ( g_UIControlState ) /*0x78608f*/
  {
    ComPtr::Dtor(g_UIControlState); /*0x786093*/
    __3_YAXPAX_Z(v0); /*0x786099*/
    g_UIControlState = 0; /*0x7860a1*/
  }
  v1 = (HWND)Dialog::FindByHandle((void *)0x11E); /*0x7860ac*/
  if ( v1 ) /*0x7860b3*/
    LOBYTE(v1) = CloseDialog(v1, 0); /*0x7860b9*/
  if ( byte_B77E75 ) /*0x7860c4*/
  {
  int v11; // [esp+80h] [ebp-4h] BYREF
  int v10; // [esp+7Ch] [ebp-8h] BYREF
    WinMainSetup_Setup_5DB6F0_Setup(); /*0x7860ca*/
    if ( ppv ) /*0x7860d6*/
    {
      v2 = *(int (__stdcall ***)(LPVOID, void *, int *))ppv; /*0x7860d8*/
      Coord *v3 = dword_B77E54; /*0x7860da*/
      v11 = 0; /*0x7860e4*/
      v10 = 0; /*0x7860ef*/
      if ( (*v2)(ppv, &unk_7F7CD0, &v11) >= 0 /*0x78610f*/
        && (*(int (__stdcall **)(int, void *, int *))(*(_DWORD *)v11 + 16))(v11, &unk_7F7550, &v10) >= 0 )
      {
        (*(void (__stdcall **)(int, int))(*(_DWORD *)v10 + 24))(v10, v3); /*0x786119*/
      }
      if ( v10 ) /*0x786122*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x786127*/
      if ( v11 ) /*0x786130*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 8))(v11); /*0x786135*/
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 8))(ppv); /*0x786140*/
    }
    if ( g_UIPointerTable ) /*0x78614a*/
    {
      v4 = *(int (__stdcall ***)(LPVOID, void *, int *))g_UIPointerTable; /*0x78614c*/
      Coord *v5 = dword_B77E58; /*0x78614e*/
      v10 = 0; /*0x786158*/
      v11 = 0; /*0x786163*/
      if ( (*v4)(g_UIPointerTable, &unk_7F7CD0, &v10) >= 0 /*0x786183*/
        && (*(int (__stdcall **)(int, void *, int *))(*(_DWORD *)v10 + 16))(v10, &unk_7F7590, &v11) >= 0 )
      {
        (*(void (__stdcall **)(int, int))(*(_DWORD *)v11 + 24))(v11, v5); /*0x78618d*/
      }
      if ( v11 ) /*0x786196*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 8))(v11); /*0x78619b*/
      if ( v10 ) /*0x7861a4*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x7861a9*/
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)g_UIPointerTable + 8))(g_UIPointerTable); /*0x7861b4*/
    }
    if ( DataGlobal_AC1174 ) /*0x7861be*/
    {
      v6 = *(int (__stdcall ***)(LPVOID, void *, int *))DataGlobal_AC1174; /*0x7861c0*/
      Coord *v7 = dword_B77E5C; /*0x7861c2*/
      v10 = 0; /*0x7861cc*/
      v11 = 0; /*0x7861d7*/
      if ( (*v6)(DataGlobal_AC1174, &unk_7F7CD0, &v10) >= 0 /*0x7861f7*/
        && (*(int (__stdcall **)(int, void *, int *))(*(_DWORD *)v10 + 16))(v10, &unk_7F7570, &v11) >= 0 )
      {
        (*(void (__stdcall **)(int, int))(*(_DWORD *)v11 + 24))(v11, v7); /*0x786201*/
      }
      if ( v11 ) /*0x78620a*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 8))(v11); /*0x78620f*/
      if ( v10 ) /*0x786218*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x78621d*/
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)DataGlobal_AC1174 + 8))(DataGlobal_AC1174); /*0x786228*/
    }
    ppv = 0; /*0x786232*/
    g_UIPointerTable = 0; /*0x786238*/
    DataGlobal_AC1174 = 0; /*0x78623e*/
    v8 = &Handles; /*0x786244*/
    do /*0x786257*/
      CloseHandle(*v8++); /*0x78624c*/
    while ( (int)v8 < (int)g_WOL_RequestObject ); /*0x786257*/
    LOBYTE(v1) = HandleLogoutWOL_Handle(&dword_B76488); /*0x78625e*/
    byte_B77E75 = 0; /*0x786263*/
  }
  return (char)v1; /*0x78626a*/
}
} // namespace gamemd

// 0x786DC0
namespace gamemd {
int E4Recv_786DC0::sub_786DC0()
{
{
  void *v6; // [esp+10h] [ebp-8h] BYREF
  const char *v7; // [esp+14h] [ebp-4h] BYREF

  DeleteAndZero::Alt2((void **)&g_WebBrowserConfig); /*0x786dcd*/
  int v2 = 1; /*0x786dd2*/
  while ( 1 ) /*0x786de5*/
  {
    if ( !(*(int (__stdcall **)(LPVOID, int, void **, const char **))(*(_DWORD *)ppv + 144))( /*0x786dea*/
            ppv,
            v2,
            &v6,
            &v7) )
    {
      if ( v6 ) /*0x786dfa*/
      {
        if ( strlen((const char *)v6) ) /*0x786dfe*/
        {
          void * v5 = v6; /*0x786e08*/
          char * v3 = String::GetOrEmpty_Alt(this); /*0x786e0b*/
          if ( !_strcmpi(v3, v5) ) /*0x786e11*/
            break; /*0x786e11*/
        }
      }
    }
    if ( ++v2 > 32 ) /*0x786e21*/
    {
      DeleteAndZero::Alt2((void **)&g_WebBrowser); /*0x786e28*/
      return 0; /*0x786e35*/
    }
  }
  String::Assign_Alt((void **)&g_WebBrowser, (const char *)v6); /*0x786e40*/
  String::Assign_Alt((void **)&g_WebBrowserConfig, v7); /*0x786e4f*/
  LOBYTE(dword_84A238) = 0; /*0x786e54*/
  return 1; /*0x786e2f*/
}
} // namespace gamemd

// 0x787010
namespace gamemd {
void WOL_LoginFlow()
{
{
  int result; // eax
  wchar_t *String; // eax
  const char **v7; // edi
  const char **v9; // edi
  char **Config; // eax
  unsigned __int16 v13; // si
  IUnknown *v14; // esi
  HWND DlgItem; // eax
  const char **v18; // ebp
  MPCooperative *v24; // eax
  HWND v27; // eax
  HWND Current; // eax
  HWND v29; // eax
  unsigned __int8 v30; // [esp-8h] [ebp-50h]
  char v33; // [esp+13h] [ebp-35h]
  void *v34[3]; // [esp+14h] [ebp-34h] BYREF
  int v35; // [esp+20h] [ebp-28h]
  void *v36; // [esp+24h] [ebp-24h] BYREF
  char v37; // [esp+28h] [ebp-20h]
  const char *v38; // [esp+2Ch] [ebp-1Ch] BYREF
  int v39; // [esp+30h] [ebp-18h]
  int v40; // [esp+34h] [ebp-14h] BYREF
  char v41; // [esp+38h] [ebp-10h]
  _DWORD v42[3]; // [esp+3Ch] [ebp-Ch] BYREF

  v33 = 0; /*0x787019*/
  dword_B77DF8 = 0; /*0x78701e*/
  result = LoginFlowWOL_Reset(); /*0x787024*/
  if ( result != 1 ) /*0x78702c*/
    return result; /*0x78702c*/
  memset(&g_WOL_ProcessIdle, 0, 0x10Cu); /*0x787043*/
  memset(&dword_B73BE8, 0, 0x10Cu); /*0x78704f*/
  g_WOL_AuthPool = 0; /*0x78705d*/
  g_WOL_ChatState = 0; /*0x787063*/
  g_WOL_State = 0; /*0x787069*/
  g_WOL_ChannelState = 0; /*0x78706f*/
  v35 = 0; /*0x787075*/
  String = GetStringCSF(g_Str_TXT_FETCHING_SERVLIST, 0, g_Str_File_wonline_cpp, 24300); /*0x787079*/
  WideString::Assign((wchar_t **)v34, String); /*0x787083*/
  ShowUIMessage(16, (wchar_t **)v34, 0); /*0x787092*/
  DeleteAndZero::Alt(v34); /*0x78709b*/
  int v2 = 8960; /*0x7870a5*/
  if ( g_GameOptionsFlags != 3 ) /*0x7870ad*/
    v2 = 10496; /*0x7870af*/
  int v3 = LoginWOL(v2); /*0x7870b4*/
  if ( v3 ) /*0x7870bb*/
  {
    v33 = 1; /*0x7870c0*/
    v35 = -2; /*0x7870c5*/
    if ( v3 == 2 ) /*0x7870cd*/
      v35 = -1; /*0x7870cf*/
  }
  v40 = 0; /*0x7870db*/
  v41 = 0; /*0x7870df*/
  ReadRegistryOptionsWOL(&v40); /*0x7870e4*/
  if ( v33 ) /*0x7870ef*/
    goto LABEL_98; /*0x7870ef*/
  if ( (unsigned __int8)InfantryClass::SetField6(&v40) ) /*0x7870f9*/
  {
    ReadAutoLoginWOL((char **)v34); /*0x78710f*/
    if ( String::Length((const char **)v34) ) /*0x787118*/
    {
      DeleteAndZero::Alt2((void **)&g_WebBrowserConfig); /*0x78712a*/
      int v4 = 1; /*0x78712f*/
      while ( 1 ) /*0x787142*/
      {
        if ( !(*(int (__stdcall **)(LPVOID, int, void **, const char **))(*(_DWORD *)ppv + 144))( /*0x787147*/
                ppv,
                v4,
                &v36,
                &v38) )
        {
          if ( v36 ) /*0x787157*/
          {
            if ( strlen((const char *)v36) ) /*0x78715b*/
            {
              void * v31 = v36; /*0x787165*/
              char * v5 = String::GetOrEmpty_Alt((char **)v34); /*0x78716a*/
              if ( !_strcmpi(v5, v31) ) /*0x787170*/
                break; /*0x787170*/
            }
          }
        }
        if ( ++v4 > 32 ) /*0x787180*/
        {
          DeleteAndZero::Alt2((void **)&g_WebBrowser); /*0x787187*/
          goto LABEL_48; /*0x78718c*/
        }
      }
      String::Assign_Alt((void **)&g_WebBrowser, (const char *)v36); /*0x78719b*/
      String::Assign_Alt((void **)&g_WebBrowserConfig, v38); /*0x7871aa*/
      int v6 = -1; /*0x7871b4*/
      LOBYTE(dword_84A238) = 0; /*0x7871ba*/
      if ( g_GameOptionsFlags == 3 || g_GameOptionsFlags == 1 || g_GameOptionsFlags == 2 ) /*0x7871cb*/
      {
        LoadPlayerProfile(&v38, (const char **)v34); /*0x7871d9*/
        if ( !v39 ) /*0x7871e4*/
          goto LABEL_29; /*0x7871e4*/
        v7 = (const char **)(v39 + 12); /*0x7871e6*/
        if ( !String::Length((const char **)(v39 + 12)) ) /*0x7871eb*/
          goto LABEL_29; /*0x7871eb*/
        v6 = 1; /*0x7871f9*/
        if ( g_WOL_UserList <= 1 ) /*0x787200*/
          goto LABEL_29; /*0x787200*/
        while ( 1 ) /*0x78720d*/
        {
          v36 = 0; /*0x78720d*/
          GetBuddyEntryWOL(&g_WOL_UserList, &v36, v6); /*0x787211*/
          char * v8 = strchr((const char *)v36 + 24, 58); /*0x787220*/
          if ( v8 ) /*0x78722a*/
          {
            if ( *v8 && String::Equals_Alt(v7, v8 + 1) ) /*0x787235*/
              break; /*0x787235*/
          }
          if ( ++v6 >= g_WOL_UserList ) /*0x787246*/
            goto LABEL_29; /*0x787246*/
        }
        if ( v6 == -1 ) /*0x78724d*/
LABEL_29:
          v6 = dword_B76468; /*0x78724f*/
        v38 = (const char *)&vt_rc_ptr_PlayerProfile; /*0x787255*/
      }
      else
      {
        LoadPlayerProfile(&v38, (const char **)v34); /*0x78726a*/
        if ( v39 ) /*0x787275*/
        {
          if ( String::Length((const char **)(v39 + 12)) ) /*0x78727a*/
          {
            v9 = (const char **)(v39 + 12); /*0x78728f*/
            if ( String::Length((const char **)(v39 + 12)) && (v6 = 1, g_WOL_UserList > 1) ) /*0x7872a9*/
            {
              while ( 1 ) /*0x7872b6*/
              {
                v36 = 0; /*0x7872b6*/
                GetBuddyEntryWOL(&g_WOL_UserList, &v36, v6); /*0x7872ba*/
                char * v10 = strchr((const char *)v36 + 24, 58); /*0x7872c9*/
                if ( v10 ) /*0x7872d3*/
                {
                  if ( *v10 && String::Equals_Alt(v9, v10 + 1) ) /*0x7872de*/
                    break; /*0x7872de*/
                }
                if ( ++v6 >= g_WOL_UserList ) /*0x7872ef*/
                  goto LABEL_40; /*0x7872ef*/
              }
            }
            else
            {
LABEL_40:
              v6 = -1; /*0x7872f1*/
            }
          }
          else
          {
            v6 = dword_B76468; /*0x787283*/
          }
        }
        v38 = (const char *)&vt_rc_ptr_PlayerProfile; /*0x7872f4*/
      }
      ComPtr::Release(&v38); /*0x7872fc*/
      if ( v6 != -1 ) /*0x787304*/
      {
        dword_B76468 = v6; /*0x787309*/
        if ( v6 >= 1 && v6 < g_WOL_UserList ) /*0x787317*/
        {
          v36 = 0; /*0x787324*/
          GetBuddyEntryWOL(&g_WOL_UserList, &v36, v6); /*0x787328*/
          if ( ConnectAndLoginWOL((char *)v36) ) /*0x787331*/
          {
            DeleteAndZero(v34); /*0x78733e*/
            return 1; /*0x78734f*/
          }
        }
        v33 = LoginFlowWOL_Open(); /*0x787355*/
      }
    }
LABEL_48:
    DeleteAndZero(v34); /*0x787359*/
  }
  if ( !String::Length((const char **)&g_WebBrowser) && Flag::IsNot2(&v40) ) /*0x787374*/
  {
    Config = LoadConfigWOL((char **)&v38); /*0x787381*/
    String::Reassign((char **)&g_WebBrowser, (const char **)Config); /*0x78738c*/
    DeleteAndZero((void **)&v38); /*0x787395*/
  }
  String::Assign((char **)&v36, &g_INI_DefaultBuffer); /*0x7873a3*/
  ReadSettingsWOL(&v36); /*0x7873ac*/
  DeleteAndZero(&v36); /*0x7873b5*/
  if ( v33 ) /*0x7873c0*/
    return 0; /*0x7873cb*/
  Debug::Log(); /*0x7873d1*/
  SimpleDialogControl::Constructor(v42); /*0x7873dd*/
  v42[0] = &off_7F7624; /*0x7873eb*/
  int v12 = -Flag::IsNot2(&v40); /*0x7873f6*/
  LOBYTE(v12) = v12 & 0xF2; /*0x7873f8*/
  v13 = v12 + 285; /*0x7873ff*/
  LoginFlowWOL_Load_72C600(); /*0x787401*/
  Screen::Capture(1, 0, (int)&off_7F7624, 0); /*0x78740a*/
  v14 = (HWND)CreateDialog(v13, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))OptionsDlgProcWOL, (LPARAM)v42); /*0x787420*/
  Dialog::Show(v14); /*0x787424*/
  if ( !String::Length((const char **)&g_WebBrowser) || String::Length((const char **)&g_WebBrowserConfig) ) /*0x78743c*/
    DlgItem = GetDlgItem(v14, 1576); /*0x787452*/
  else
    DlgItem = GetDlgItem(v14, 1836); /*0x78744a*/
  SetFocus(DlgItem); /*0x787459*/
  while ( !(unsigned __int8)ObjectClass::Release(v42) ) /*0x787463*/
  {
    if ( Game::ProcessIdle() ) /*0x78746c*/
      break; /*0x787473*/
    if ( Dialog::PumpMessages() ) /*0x787475*/
      break; /*0x78747c*/
  int v16; // ecx
    LOBYTE(v16) = 0; /*0x78747e*/
    ScreenSaver::Process(v16); /*0x787480*/
  }
  Dialog::Destroy(v14); /*0x787494*/
  LoginFlowWOL_Destroy_72C650(); /*0x787499*/
  if ( ObjectClass::GetMember01(v42) == 2 ) /*0x7874aa*/
  {
    v33 = 1; /*0x7874ac*/
LABEL_97:
    v42[0] = &off_7F7624; /*0x787704*/
    OwnerDrawControl::InitVtable(v42); /*0x78770c*/
LABEL_98:
    v27 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x787711*/
    if ( v27 ) /*0x78771d*/
    {
      g_WOL_ChannelList = 0; /*0x787723*/
      CloseDialog(v27, 0); /*0x787729*/
    }
    Current = Dialog::GetCurrent(); /*0x78772e*/
    v29 = GetDlgItem(Current, 1344); /*0x787739*/
    if ( v29 ) /*0x787741*/
      SetFocus(v29); /*0x787744*/
    if ( !v33 ) /*0x787750*/
      LoginFlowWOL_Open(); /*0x787752*/
    byte_B77DC0 = 1; /*0x78775b*/
    return v35; /*0x787757*/
  }
  Game::ProcessIdle(); /*0x7874b6*/
  byte_B77DC0 = 0; /*0x7874bf*/
  v36 = 0; /*0x7874c6*/
  v37 = 0; /*0x7874ca*/
  ReadRegistryOptionsWOL(&v36); /*0x7874cf*/
  ComPtr::Constructor(&v38); /*0x7874d8*/
  v38 = (const char *)&vt_rc_ptr_PlayerProfile; /*0x7874e6*/
  if ( Flag::IsNot2(&v36) ) /*0x7874ea*/
  {
    _DWORD * v17 = LoadPlayerProfile(v34, (const char **)&g_WebBrowser); /*0x7874fc*/
    ComPtr::Set(&v38, v17[1]); /*0x787509*/
    v34[0] = &vt_rc_ptr_PlayerProfile; /*0x787512*/
    ComPtr::Release(v34); /*0x787516*/
  }
  else
  {
    ComPtr::Set(&v38, dword_B75E4C); /*0x787528*/
  }
  v18 = (const char **)(v39 + 12); /*0x787531*/
  if ( !String::Length((const char **)(v39 + 12)) ) /*0x787536*/
    goto LABEL_82; /*0x787536*/
  MapClass *v19 = g_WOL_UserList; /*0x787543*/
  int v20 = 1; /*0x787549*/
  if ( g_WOL_UserList <= 1 ) /*0x787550*/
  {
LABEL_77:
    v24 = dword_B76468; /*0x78759d*/
    goto LABEL_78; /*0x78759d*/
  }
  int v21 = 248; /*0x787552*/
  while ( 1 ) /*0x787557*/
  {
    char * v22 = 0; /*0x787557*/
    if ( v21 >= 0 && v20 < v19 ) /*0x78755f*/
      v22 = (char *)dword_B778E0 + v21; /*0x787566*/
    char * v23 = strchr(v22 + 24, 58); /*0x78756e*/
    if ( v23 ) /*0x787578*/
    {
      if ( *v23 && String::Equals_Alt(v18, v23 + 1) ) /*0x787583*/
        break; /*0x787583*/
    }
    v19 = g_WOL_UserList; /*0x78758c*/
    ++v20; /*0x787592*/
    v21 += 248; /*0x787593*/
    if ( v20 >= g_WOL_UserList ) /*0x78759b*/
      goto LABEL_77; /*0x78759b*/
  }
  if ( v20 == -1 ) /*0x7875b5*/
  {
LABEL_82:
    v24 = dword_B76468; /*0x7875c6*/
    v19 = g_WOL_UserList; /*0x7875cb*/
  }
  else
  {
    v19 = g_WOL_UserList; /*0x7875b7*/
    v24 = v20; /*0x7875bd*/
    dword_B76468 = v20; /*0x7875bf*/
  }
LABEL_78:
  if ( v24 < v19 ) /*0x7875a4*/
  {
    if ( v24 != -1 ) /*0x7875d6*/
    {
      if ( v24 >= 1 ) /*0x7875f0*/
        goto LABEL_87; /*0x7875f0*/
LABEL_96:
      v38 = (const char *)&vt_rc_ptr_PlayerProfile; /*0x7876f1*/
      ComPtr::Release(&v38); /*0x7876fd*/
      goto LABEL_97; /*0x7876fd*/
    }
  }
  else
  {
    dword_B76468 = -1; /*0x7875a6*/
  }
  if ( v19 <= 1 ) /*0x7875db*/
    goto LABEL_96; /*0x7875db*/
  v24 = 1; /*0x7875e1*/
  dword_B76468 = 1; /*0x7875e6*/
LABEL_87:
  if ( v24 >= v19 || !ConnectAndLoginWOL((char *)dword_B778E0 + 248 * v24) ) /*0x787614*/
    goto LABEL_96; /*0x78761b*/
  if ( byte_B77E68 && Flag::IsNot2(&v36) ) /*0x78762e*/
  {
    int v32 = *(_DWORD *)(v39 + 16); /*0x787644*/
    v30 = dword_84A238; /*0x787645*/
    ObjectClass *v25 = String::GetOrEmpty(&g_WebBrowserConfig); /*0x787655*/
    char * v26 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x787657*/
    FindChannelWOL(v26, (int)v25, v30, v32); /*0x787660*/
    SaveConfigWOL((int)g_GameMode_Current); /*0x78766a*/
  }
  if ( (unsigned __int8)InfantryClass::SetField6(&v36) && (unsigned __int8)ReadWOLLobbyPlayerOption() ) /*0x78767c*/
  {
    Screen::Capture(1, 0, (int)&off_7F7624, (int)v18); /*0x787689*/
    SimpleDialogControl::Constructor(v34); /*0x787692*/
    v34[0] = &off_7F7624; /*0x787697*/
    LoginFlowWOL_Load(); /*0x78769b*/
    RunDialog(0x112u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_79AE00, (LPARAM)v34); /*0x7876af*/
    LoginFlowWOL_Destroy(); /*0x7876b4*/
    v34[0] = &off_7F7624; /*0x7876bd*/
    OwnerDrawControl::InitVtable(v34); /*0x7876c1*/
  }
  v38 = (const char *)&vt_rc_ptr_PlayerProfile; /*0x7876ca*/
  ComPtr::Release(&v38); /*0x7876d2*/
  v42[0] = &off_7F7624; /*0x7876db*/
  OwnerDrawControl::InitVtable(v42); /*0x7876df*/
  return 1; /*0x787348*/
}
} // namespace gamemd

// 0x787770
namespace gamemd {
void NetworkLobbyWOL(HWND hWnd, char a2)
{
{
  int i; // edi
  int j; // esi
  int k; // esi
  int result; // eax
  HANDLE *v10; // esi
  VectorClass *v12; // ebx
  CampaignScore *v16; // eax
  wchar_t *StringCSF; // eax
  int m; // esi
  Coord *v20; // esi
  HWND v21; // eax
  HANDLE *v22; // esi
  wchar_t *v23; // esi
  HWND v24; // eax
  DWORD n; // esi
  HWND v27; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  HWND v30; // eax
  DWORD ii; // ebx
  HWND v32; // eax
  HWND v33; // eax
  HWND v34; // eax
  HWND v35; // eax
  HWND v36; // eax
  HWND v37; // eax
  HWND v38; // eax
  HWND v39; // eax
  HWND v40; // eax
  HWND v41; // eax
  HWND v42; // eax
  HWND v43; // eax
  HWND v44; // eax
  HWND v45; // eax
  HWND v46; // eax
  unsigned int jj; // ebp
  SessionClass *v49; // esi
  SessionClass *v50; // edi
  char *v60; // [esp+4h] [ebp-2Ch] BYREF
  char *v61; // [esp+8h] [ebp-28h]
  int v62; // [esp+Ch] [ebp-24h]
  char v63; // [esp+23h] [ebp-Dh]
  int v64; // [esp+24h] [ebp-Ch]
  void *v65; // [esp+28h] [ebp-8h] BYREF
  void *v66; // [esp+2Ch] [ebp-4h] BYREF
  v63 = a2; /*0x787780*/
  v64 = 0; /*0x787786*/
  if ( g_NetworkLobby_Init /*0x7877bb*/
    && g_GameMode_Current[0] == 4
    && g_GameOptionsFlags == 3
    && DataGlobal_A8D584 != -1
    && DataGlobal_A8D584 < 8 )
  {
    WideString::Assign((wchar_t **)&v65, (wchar_t *)&DataGlobal_A8D1FC + 56 * DataGlobal_A8D584); /*0x7877d8*/
    ToWideStringCharAlt((char **)&v66, (const wchar_t **)&v65); /*0x7877e5*/
    DeleteAndZero::Alt(&v65); /*0x7877ee*/
    char * v3 = String::GetOrEmpty((char **)&v66); /*0x7877fe*/
    if ( !_strnicmp(v3, g_GameSetupBuffer, 0x14u) ) /*0x787804*/
    {
      if ( !g_CommandExecState ) /*0x78781b*/
      {
        v61 = 0; /*0x787828*/
        v62 = 0; /*0x78782b*/
        unknown_libname_73(&v65); /*0x78782e*/
        v60 = 0; /*0x78784e*/
        for ( i = 0; i < dword_B736F8; ++i ) /*0x787859*/
        {
          DynamicStringArray::Get(&dword_B736F8, (char **)&v65, i); /*0x787866*/
          StringVector::Insert((int *)&v60, (const char **)&v65, (int)v60); /*0x787875*/
        }
LABEL_24:
        DeleteAndZero(&v65); /*0x78795b*/
        Network_Delete((int)v60, (int)v61, (void **)v62); /*0x787960*/
        goto LABEL_25; /*0x787960*/
      }
      if ( g_CommandExecState == 1 ) /*0x787890*/
      {
        v60 = 0; /*0x78789f*/
        v61 = 0; /*0x7878a1*/
        v62 = 0; /*0x7878a4*/
        unknown_libname_73(&v65); /*0x7878a7*/
        Array::CleanupArrayWOL((int *)&v60); /*0x7878ae*/
        int v5 = dword_B73BD8; /*0x7878b3*/
        for ( j = 0; j < dword_B73BD8; ++j ) /*0x7878bc*/
        {
          if ( j >= 0 && j < v5 ) /*0x7878c4*/
            String::Reassign((char **)&v65, (const char **)dword_B73BE0 + j); /*0x7878d3*/
          StringVector::Insert((int *)&v60, (const char **)&v65, (int)v60); /*0x7878e2*/
          v5 = dword_B73BD8; /*0x7878e7*/
        }
        goto LABEL_24; /*0x7878ef*/
      }
    }
    else if ( !g_CommandExecState ) /*0x7878f9*/
    {
      v60 = 0; /*0x787904*/
      v61 = 0; /*0x787906*/
      v62 = 0; /*0x787909*/
      unknown_libname_73(&v65); /*0x78790c*/
      Array::CleanupArrayWOL((int *)&v60); /*0x787913*/
      int v7 = dword_B76510; /*0x787918*/
      for ( k = 0; k < dword_B76510; ++k ) /*0x787921*/
      {
        if ( k >= 0 && k < v7 ) /*0x787929*/
          String::Reassign((char **)&v65, (const char **)dword_B76518 + k); /*0x787939*/
        StringVector::Insert((int *)&v60, (const char **)&v65, (int)v60); /*0x787948*/
        v7 = dword_B76510; /*0x78794d*/
      }
      goto LABEL_24; /*0x787955*/
    }
LABEL_25:
    DeleteAndZero(&v66); /*0x787965*/
  }
  g_NetworkLobby_Init = 0; /*0x78796e*/
  g_NetworkLobbyState = 0; /*0x78797d*/
  if ( g_GameMode_Current[0] == 4 && g_GameOptionsFlags == 3 ) /*0x78798c*/
  {
    (*(void (__stdcall **)(LPVOID, int))(*(_DWORD *)ppv + 180))(ppv, g_CommandExecState); /*0x78799d*/
    if ( !byte_B77E10 ) /*0x7879aa*/
      InitVersionStringsWOL(); /*0x7879ac*/
  }
  Network::Init(); /*0x7879b1*/
  if ( !byte_B77DC2 || (result = LoginFlowWOL(), result == 1) ) /*0x7879c7*/
  {
    v10 = &Handles; /*0x7879d3*/
    do /*0x7879e6*/
      ResetEvent(*v10++); /*0x7879db*/
    while ( (int)v10 < (int)g_WOL_RequestObject ); /*0x7879e6*/
    if ( !hWnd ) /*0x7879ea*/
    {
      Screen::Capture(1, 0, 0, 0); /*0x7879f4*/
      Network_Load_72CD60(); /*0x7879f9*/
      hWnd = (HWND)CreateDialog(0x113u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))WOLobby::DlgProc, 0); /*0x787a13*/
      if ( String::Length((const char **)&DataGlobal_B73AE0) ) /*0x787a15*/
      {
        unsigned int v11 = String::Length((const char **)&DataGlobal_B73AE0); /*0x787a27*/
        v12 = (VectorClass *)__2_YAPAXI_Z(v11 + 1); /*0x787a33*/
        if ( v12 ) /*0x787a3a*/
        {
          AbstractClass *v13 = String::GetOrEmpty((char **)&DataGlobal_B73AE0); /*0x787a4a*/
          v62 = (int)DataGlobal_83F328; /*0x787a51*/
          v61 = strcpy(v12->vtable0, v13); /*0x787a66*/
          IUnknown *v15 = strtok(v61, (const char *)v62); /*0x787a74*/
          while ( v15 ) /*0x787a7b*/
          {
            String::Assign((char **)&v66, v15); /*0x787a82*/
            CharStringToWide((wchar_t **)&v65, (const char **)&v66); /*0x787a8f*/
            DeleteAndZero(&v66); /*0x787a98*/
            v16 = WideString::GetOrEmpty((wchar_t **)&v65); /*0x787aa1*/
            Dialog::ShowMessage(-1, (size_t)v16); /*0x787aae*/
            v15 = strtok(0, DataGlobal_83F328); /*0x787ac6*/
            DeleteAndZero::Alt(&v65); /*0x787ac8*/
          }
          Dialog::ShowMessage(-1, (size_t)asc_830174); /*0x787add*/
          DeleteAndZero::Alt2(&DataGlobal_B73AE0); /*0x787aea*/
  void *v14; // ebx
          __3_YAXPAX_Z(v14); /*0x787af0*/
        }
      }
      StringCSF = GetStringCSF(aGuiLogincomple, 0, g_Str_File_wonline_cpp, 10388); /*0x787b09*/
      WideString::Assign((wchar_t **)&v66, StringCSF); /*0x787b13*/
      ShowUIMessage(16, (wchar_t **)&v66, 0); /*0x787b23*/
      DeleteAndZero::Alt(&v66); /*0x787b2c*/
    }
    dword_B77DE0 = 1; /*0x787b3f*/
    ++dword_B77DDC; /*0x787b49*/
    (*(void (__stdcall **)(LPVOID, _DWORD))(*(_DWORD *)ppv + 176))(ppv, 0); /*0x787b53*/
    for ( m = 0; m < g_WindowManager; ++m ) /*0x787b62*/
      Object::DtorWithDelete((void **)g_WOL_LoginQueue + m, 0); /*0x787b6e*/
    int v19 = 0; /*0x787b82*/
    for ( g_WindowManager = 0; v19 < g_WOL_RequestManager; ++v19 ) /*0x787b8c*/
      Object::DtorWithDelete((void **)g_WOL_SessionID + v19, 0); /*0x787b97*/
    g_WOL_RequestManager = 0; /*0x787bab*/
    HashTable::CleanupAndResize(&g_WOL_AccountInfo); /*0x787bb1*/
    HashTable::Rebuild(&g_WOL_EventQueue); /*0x787bbb*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 220))(ppv); /*0x787bc8*/
    if ( g_GameOptionsFlags != 3 && g_GameOptionsFlags != 1 && g_GameOptionsFlags != 2 ) /*0x787be0*/
      RefreshChannelListWOL(); /*0x787be2*/
    RefreshGameListWOL(); /*0x787be7*/
    dword_84A1BC = 41; /*0x787bfd*/
    v20 = GetStringCSF(aTxtReqChanlist, 0, g_Str_File_wonline_cpp, 10408); /*0x787c11*/
    v21 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x787c13*/
    if ( v21 ) /*0x787c20*/
      SendDlgItemMessageA(v21, 1458, 0x4B2u, 0, (LPARAM)v20); /*0x787c30*/
    if ( !g_WOL_RequestState || RequestChannelListWOL() ) /*0x787c41*/
    {
      v22 = &Handles; /*0x787c4e*/
      do /*0x787c65*/
        ResetEvent(*v22++); /*0x787c56*/
      while ( (int)v22 < (int)g_WOL_RequestObject ); /*0x787c65*/
      v62 = 0; /*0x787c67*/
      v61 = 0; /*0x787c69*/
      v60 = g_Str_Trace_Requesting_channel_list_type____d__ping_; /*0x787c6b*/
      v66 = 0; /*0x787c70*/
      Debug::Log(); /*0x787c78*/
      if ( (*(int (__stdcall **)(LPVOID, void *, _DWORD))(*(_DWORD *)ppv + 24))(ppv, v66, 0) ) /*0x787c8f*/
      {
        SetEvent(Handles); /*0x787d0d*/
      }
      else
      {
        Network_Helper_7ADB00((int *)&g_WOL_RequestState, &v66, g_WOL_RequestState); /*0x787ca6*/
        if ( RequestChannelListWOL() ) /*0x787cab*/
        {
          v23 = GetStringCSF(g_Str_TXT_JOINLOB, 0, g_Str_File_wonline_cpp, 10415); /*0x787cd3*/
          v24 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x787cd5*/
          if ( v24 ) /*0x787cdc*/
            SendDlgItemMessageA(v24, 1458, 0x4B2u, 0, (LPARAM)v23); /*0x787cec*/
          int v25 = JoinGameLobbyWOL(); /*0x787d1a*/
          byte_84A210 = 1; /*0x787d22*/
          if ( v25 != -1 ) /*0x787d29*/
          {
            for ( n = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x787d4a*/
                  n == 258;
                  n = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u) )
            {
              Game::ProcessIdle(); /*0x787d4c*/
            }
            ResetEvent(*(&Handles + n)); /*0x787d70*/
            if ( !n || n == 5 ) /*0x787d83*/
            {
LABEL_86:
              CloseDialog(hWnd, 0); /*0x787f79*/
              Game::ProcessIdle(); /*0x787f82*/
              hWnd = 0; /*0x787f8c*/
              if ( ppv ) /*0x787f90*/
                (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x787f95*/
            }
            else
            {
              g_WOL_ChannelLeaveState = 0; /*0x787d91*/
              PostMessageA(hWnd, 0x593u, 0, 0); /*0x787d97*/
              v27 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x787da2*/
              if ( v27 ) /*0x787da9*/
              {
                g_WOL_ChannelList = 0; /*0x787daf*/
                CloseDialog(v27, 0); /*0x787db5*/
              }
              Current = Dialog::GetCurrent(); /*0x787dba*/
              DlgItem = GetDlgItem(Current, 1344); /*0x787dc5*/
              if ( DlgItem ) /*0x787dc9*/
                SetFocus(DlgItem); /*0x787dd2*/
              SetFocus(g_hWnd); /*0x787de3*/
              ShowWindow(hWnd, 1); /*0x787de8*/
              SetFocus(hWnd); /*0x787def*/
              v30 = GetDlgItem(hWnd, 1344); /*0x787df7*/
              SetFocus(v30); /*0x787dfa*/
              dword_B77DBC = 0; /*0x787dfc*/
              dword_B77DB8 = time(0); /*0x787e11*/
              while ( 1 ) /*0x787e27*/
              {
                for ( ii = WaitForMultipleObjects(0x12u, &Handles, 0, 0x14u); /*0x787e2f*/
                      ii == 258;
                      ii = WaitForMultipleObjects(0x12u, &Handles, 0, 0x14u) )
                {
                  Game::ProcessIdle(); /*0x787e35*/
                  if ( g_WOL_ChannelLeaveState ) /*0x787e41*/
                  {
                    v62 = 0; /*0x787e47*/
                    v32 = GetDlgItem(hWnd, 1341); /*0x787e4f*/
                    EnableWindow(v32, v62); /*0x787e52*/
                    v62 = 0; /*0x787e54*/
                    v33 = GetDlgItem(hWnd, 1774); /*0x787e5c*/
                    EnableWindow(v33, v62); /*0x787e5f*/
                    v62 = 0; /*0x787e61*/
                    v34 = GetDlgItem(hWnd, 1581); /*0x787e69*/
                    EnableWindow(v34, v62); /*0x787e6c*/
                    v62 = 0; /*0x787e6e*/
                    v35 = GetDlgItem(hWnd, 1579); /*0x787e76*/
                    EnableWindow(v35, v62); /*0x787e79*/
                    v62 = 0; /*0x787e7b*/
                    v36 = GetDlgItem(hWnd, 1673); /*0x787e83*/
                    EnableWindow(v36, v62); /*0x787e86*/
                    v62 = 0; /*0x787e88*/
                    v37 = GetDlgItem(hWnd, 1672); /*0x787e90*/
                    EnableWindow(v37, v62); /*0x787e93*/
                    v62 = 0; /*0x787e95*/
                    v38 = GetDlgItem(hWnd, 1955); /*0x787e9d*/
                    EnableWindow(v38, v62); /*0x787ea0*/
                    v62 = 0; /*0x787ea2*/
                    v39 = GetDlgItem(hWnd, 1958); /*0x787eaa*/
                    EnableWindow(v39, v62); /*0x787ead*/
                    v62 = 0; /*0x787eaf*/
                    v40 = GetDlgItem(hWnd, 1567); /*0x787eb7*/
                    EnableWindow(v40, v62); /*0x787eba*/
                    v62 = 0; /*0x787ebc*/
                    v41 = GetDlgItem(hWnd, 1474); /*0x787ec4*/
                    EnableWindow(v41, v62); /*0x787ec7*/
                    v62 = 0; /*0x787ec9*/
                    v42 = GetDlgItem(hWnd, 1670); /*0x787ed1*/
                    EnableWindow(v42, v62); /*0x787ed4*/
                    if ( JoinGameLobbyWOL() == -1 ) /*0x787ee0*/
                    {
                      v62 = 1; /*0x787ee2*/
                      v43 = GetDlgItem(hWnd, 1670); /*0x787eea*/
                      EnableWindow(v43, v62); /*0x787eed*/
                      SetEvent(hEvent); /*0x787ef6*/
                    }
                    else
                    {
                      PostMessageA(hWnd, 0x593u, 0, 0); /*0x787f08*/
                    }
                    g_WOL_ChannelLeaveState = 0; /*0x787f0e*/
                  }
                }
                ResetEvent(*(&Handles + ii)); /*0x787f3f*/
                if ( !ii ) /*0x787f47*/
                  break; /*0x787f47*/
                switch ( ii ) /*0x787f4c*/
                {
                  case 6u: /*0x787f4c*/
                    goto LABEL_85; /*0x787f4c*/
                  case 0xFu: /*0x787f4c*/
                    v64 = 2; /*0x787f66*/
LABEL_85:
                    word_B77AD0 = 0; /*0x787f6e*/
                    goto LABEL_86; /*0x787f6e*/
                  case 5u: /*0x787f4c*/
                    goto LABEL_88; /*0x787f56*/
                  case 7u: /*0x787f4c*/
                    v64 = 1; /*0x788155*/
                    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x788160*/
                    byte_B77DEC = 0; /*0x788163*/
                    word_B77AD0 = 0; /*0x78816a*/
                    goto LABEL_88; /*0x788173*/
                }
              }
            }
          }
        }
      }
    }
LABEL_88:
    v44 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x787f98*/
    if ( v44 ) /*0x787fa6*/
    {
      g_WOL_ChannelList = 0; /*0x787fac*/
      CloseDialog(v44, 0); /*0x787fb2*/
    }
    v45 = Dialog::GetCurrent(); /*0x787fb7*/
    v46 = GetDlgItem(v45, 1344); /*0x787fc2*/
    if ( v46 ) /*0x787fc6*/
      SetFocus(v46); /*0x787fc9*/
    ShowDialogConfirm(&word_B77AD0, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x787fdc*/
    if ( hWnd ) /*0x787fe3*/
      CloseDialog(hWnd, 0); /*0x787fe9*/
    while ( CloseDialog(0, 0) ) /*0x787ff2*/
      ; /*0x787ffb*/
    Network_Destroy(); /*0x788008*/
    if ( v64 == 1 ) /*0x788012*/
      g_NetworkLobby_Init = 1; /*0x788014*/
    if ( g_GameMode_Current[0] == 4 && g_GameOptionsFlags == 3 ) /*0x78802f*/
    {
      unsigned int v47 = g_WOL_MsgPool; /*0x788035*/
      for ( jj = 0; jj < g_WOL_MsgPool; v47 = g_WOL_MsgPool ) /*0x78803e*/
      {
        v49 = (SessionClass *)*((_DWORD *)g_WOL_MessageQueue + jj); /*0x788045*/
        while ( v49 ) /*0x78804a*/
        {
          v50 = v49; /*0x78804c*/
          v49 = (SessionClass *)v49->unknown_08; /*0x78804e*/
          DeleteAndZero((void **)v50); /*0x788057*/
          __3_YAXPAX_Z(v50); /*0x78805d*/
        }
        *((_DWORD *)g_WOL_MessageQueue + jj++) = 0; /*0x788070*/
      }
      unsigned int v51 = dword_B766B0; /*0x78807d*/
      g_WOL_MessageConfig = 0; /*0x788083*/
      if ( v47 > dword_B766B0 ) /*0x78808b*/
      {
        do /*0x78813e*/
        {
          if ( byte_B76694 || v47 <= v51 ) /*0x7880a1*/
            break; /*0x7880a1*/
          int * v52 = (int *)g_WOL_MessageQueue; /*0x7880ad*/
          int v53 = v47; /*0x7880b3*/
          g_WOL_MsgPool = v47 >> 1; /*0x7880b8*/
          --dword_B7668C; /*0x7880c4*/
          g_WOL_MessageQueue = __2_YAPAXI_Z(4 * (v47 >> 1)); /*0x7880dd*/
          memset(g_WOL_MessageQueue, 0, 4 * g_WOL_MsgPool); /*0x7880e5*/
          if ( v53 > 0 ) /*0x7880e7*/
          {
            AbstractClass *v54 = v52; /*0x7880e9*/
            int v55 = v53; /*0x7880eb*/
            do /*0x788126*/
            {
              int v56 = *v54; /*0x7880ed*/
              if ( *v54 ) /*0x7880ed*/
              {
  int v59; // eax
                do /*0x788120*/
                {
                  int v57 = dword_B76698(v56) & ((1 << dword_B7668C) - 1); /*0x788109*/
                  int v58 = *((_DWORD *)g_WOL_MessageQueue + v57); /*0x788110*/
                  *((_DWORD *)g_WOL_MessageQueue + v57) = v56; /*0x788113*/
                  v59 = *(_DWORD *)(v56 + 8); /*0x788116*/
                  *(_DWORD *)(v56 + 8) = v58; /*0x788119*/
                  v56 = v59; /*0x78811e*/
                }
                while ( v59 ); /*0x788120*/
              }
              ++v54; /*0x788122*/
              --v55; /*0x788125*/
            }
            while ( v55 ); /*0x788126*/
          }
          __3_YAXPAX_Z(v52); /*0x788129*/
          v51 = dword_B766B0; /*0x78812e*/
          v47 = g_WOL_MsgPool; /*0x788134*/
        }
        while ( g_WOL_MsgPool > (unsigned int)dword_B766B0 ); /*0x78813e*/
      }
    }
    return v64; /*0x788144*/
  }
  return result; /*0x788148*/
}
} // namespace gamemd

// 0x788180
namespace gamemd {
void WOL_FindLobbyID(char a1)
{
{
  Coord *v3; // ebx
  char **v5; // eax
  int v6; // ebp
  wchar_t **v7; // edi
  int v8; // ebx
  size_t v9; // eax
  char **v11; // [esp-4h] [ebp-2A4h]
  const wchar_t **v13; // [esp+14h] [ebp-28Ch] BYREF
  wchar_t **v14; // [esp+18h] [ebp-288h] BYREF
  void *v15; // [esp+1Ch] [ebp-284h] BYREF
  unsigned int v16; // [esp+20h] [ebp-280h]
  int v17; // [esp+24h] [ebp-27Ch]
  char Buffer[32]; // [esp+68h] [ebp-238h] BYREF
  char Source[32]; // [esp+88h] [ebp-218h] BYREF
  char Destination[32]; // [esp+A8h] [ebp-1F8h] BYREF
  wchar_t String2[32]; // [esp+C8h] [ebp-1D8h] BYREF
  _DWORD v32[67]; // [esp+194h] [ebp-10Ch] BYREF

  Coord *v1 = g_WOL_AuthPool; /*0x788189*/
  v17 = g_WOL_AuthPool; /*0x7881a2*/
  memset(v32, 0, sizeof(v32)); /*0x7881a6*/
  if ( g_GameMode_Current[0] == 4 && g_GameOptionsFlags == 3 ) /*0x7881bc*/
  {
    memset(Destination, 0, sizeof(Destination)); /*0x7881d2*/
    memset(String2, 0, 0x20u); /*0x7881e0*/
    memset(Buffer, 0, sizeof(Buffer)); /*0x7881eb*/
    memset(Source, 0, sizeof(Source)); /*0x7881f9*/
    _DWORD * v2 = __2_YAPAXI_Z(0x28u); /*0x7881fb*/
    v3 = 0; /*0x788200*/
    if ( v2 ) /*0x788207*/
      _DWORD * v4 = MixFileClass::FromFile(v2, g_Str_File_WDT_MIX, (int)&DataGlobal_886980); /*0x78821a*/
    else
      v4 = 0; /*0x78821e*/
  void *v18[4]; // [esp+28h] [ebp-278h] BYREF
    v18[1] = 0; /*0x788224*/
    v18[2] = 0; /*0x788228*/
  _DWORD v19[3]; // [esp+38h] [ebp-268h] BYREF
    GenericNode::Constructor(v19); /*0x78822c*/
  _DWORD v20[6]; // [esp+44h] [ebp-25Ch] BYREF
    GenericNode::Constructor(v20); /*0x788235*/
    LinkedList::Prepend(v19, (int)v20); /*0x78824b*/
    v18[3] = &vt_List_INIClass_INISection; /*0x788257*/
    memset(&v20[3], 0, 12); /*0x788264*/
    char v21 = 0; /*0x788270*/
    int v22 = 0; /*0x788275*/
    int v23 = 0; /*0x788279*/
    v18[0] = &vt_INIClass; /*0x78827d*/
  _DWORD v28[22]; // [esp+108h] [ebp-198h] BYREF
    CCFileClass::Construct(v28, aWdtmapmdIni); /*0x788285*/
    FileStraw::Open(v18, (int)v28, 0); /*0x788297*/
    sprintf(Buffer, DataGlobal_84B62C, *(_DWORD *)g_GameDifficulty); /*0x7882ad*/
    strcpy(Source, Buffer); /*0x7882d4*/
    if ( *(_BYTE *)(*(_DWORD *)(FindLobbyIDWOL_Find() + 4) + 20) ) /*0x7882ef*/
      INIClass::GetString( /*0x788313*/
        (unsigned __int8 ***)v18,
        (unsigned __int8 *)DataGlobal_84B614,
        (unsigned __int8 *)Buffer,
        Source,
        Destination,
        32);
    else
      INIClass::GetString( /*0x788308*/
        (unsigned __int8 ***)v18,
        (unsigned __int8 *)DataGlobal_84B61C,
        (unsigned __int8 *)Buffer,
        Source,
        Destination,
        32);
    INIClass::GetString( /*0x788338*/
      (unsigned __int8 ***)v18,
      (unsigned __int8 *)Destination,
      (unsigned __int8 *)g_INI_Key_Name,
      stru_84B608,
  char v31[32]; // [esp+174h] [ebp-12Ch] BYREF
      v31,
      32);
    BulkCharToWide(String2, (unsigned __int8 *)v31, -1); /*0x78834d*/
    dword_B75E50 = (int)_wcsdup(String2); /*0x788364*/
    if ( v4 ) /*0x788369*/
      (*(void (__thiscall **)(_DWORD *, int))*v4)(v4, 1); /*0x788372*/
    v28[0] = &vt_CCFileClass; /*0x78837b*/
    int v30 = 0; /*0x788386*/
  _BYTE v29[12]; // [esp+160h] [ebp-140h] BYREF
    Vector::Clear((int)v29); /*0x78838d*/
    v28[0] = &off_7E1668; /*0x788399*/
    BufferIOFileClass::Dtor(v28); /*0x7883a4*/
    HashTable::DestroyHashTableINIClass(v18); /*0x7883ad*/
    v1 = v17; /*0x7883b2*/
  }
  else
  {
    v3 = 0; /*0x7883b8*/
  }
  v11 = FormatStringInt((char **)&v13, dword_B77DD4, 1); /*0x7883cf*/
  v5 = String::Assign((char **)&v14, g_Str_Lob_41_); /*0x7883da*/
  String::Concat((const char **)v5, (char **)&v15, v11); /*0x7883e1*/
  DeleteAndZero((void **)&v14); /*0x7883ea*/
  DeleteAndZero((void **)&v13); /*0x7883f3*/
  v6 = 0; /*0x7883f8*/
  if ( v1 > 0 ) /*0x7883fc*/
  {
    v7 = &dword_B73E1C; /*0x788402*/
    v14 = &dword_B73E1C; /*0x788407*/
    while ( 1 ) /*0x78840b*/
    {
      if ( (int)v7 >= (int)&dword_B73E1C && v6 < g_WOL_AuthPool ) /*0x788419*/
      {
        qmemcpy(v32, (char *)dword_B73E18 + v3, sizeof(v32)); /*0x788430*/
        v1 = v17; /*0x788432*/
        v7 = v14; /*0x788436*/
      }
      if ( g_GameMode_Current[0] != 4 || g_GameOptionsFlags != 3 ) /*0x78844a*/
        goto LABEL_23; /*0x78844a*/
      if ( !wcscmp(*v7, String2) ) /*0x788457*/
        break; /*0x788457*/
LABEL_27:
      ++v6; /*0x7884c3*/
      v3 += 268; /*0x7884c4*/
      v14 = ++v7; /*0x7884cf*/
      if ( v6 >= v1 ) /*0x7884d3*/
        goto LABEL_28; /*0x7884d3*/
    }
    if ( !a1 || v32[3] <= 25 ) /*0x788477*/
    {
LABEL_50:
      DeleteAndZero(&v15); /*0x788682*/
      return v6; /*0x788697*/
    }
LABEL_23:
    String::Assign((char **)&v13, (const char *)&v32[13]); /*0x78847d*/
    if ( String::Compare((const char **)&v13, (const char **)&v15) && (!a1 || v32[3] <= 25) ) /*0x7884b4*/
    {
      DeleteAndZero((void **)&v13); /*0x788609*/
      DeleteAndZero(&v15); /*0x788612*/
      return v6; /*0x788623*/
    }
    DeleteAndZero((void **)&v13); /*0x7884be*/
    goto LABEL_27; /*0x7884be*/
  }
LABEL_28:
  v6 = 0; /*0x7884d9*/
  v8 = -1; /*0x7884db*/
  v16 = 10000; /*0x7884e0*/
  if ( v1 <= 0 ) /*0x7884e8*/
    goto LABEL_56; /*0x7884e8*/
  v14 = 0; /*0x7884ee*/
  v13 = (const wchar_t **)&dword_B73E1C; /*0x7884f2*/
  do /*0x7885fa*/
  {
    if ( (int)v13 >= (int)&dword_B73E1C && v6 < g_WOL_AuthPool ) /*0x78850a*/
    {
      qmemcpy(v32, (char *)dword_B73E18 + (_DWORD)v14, sizeof(v32)); /*0x788524*/
      v1 = v17; /*0x788526*/
    }
    if ( g_GameMode_Current[0] == 4 && g_GameOptionsFlags == 3 ) /*0x78853a*/
    {
      v9 = wcslen(String2); /*0x788544*/
      if ( wcsncmp(*v13, String2, v9) ) /*0x788559*/
        goto LABEL_45; /*0x788563*/
      if ( !a1 || v32[3] <= 25 ) /*0x78857b*/
      {
        dword_B77DD4 = atol((const char *)&v32[13] + strlen(g_Str_Lob_41_)); /*0x788647*/
        DeleteAndZero(&v15); /*0x78864c*/
        return v6; /*0x78865d*/
      }
      if ( v32[3] < v16 ) /*0x788585*/
      {
        v8 = v6; /*0x788587*/
        v16 = v32[3]; /*0x788589*/
      }
    }
    if ( !strncmp((const char *)&v32[13], g_Str_Lob_41_, strlen(g_Str_Lob_41_)) ) /*0x7885aa*/
    {
      if ( !a1 || v32[3] <= 25 ) /*0x7885cc*/
      {
        dword_B77DD4 = atol((const char *)&v32[13] + strlen(g_Str_Lob_41_)); /*0x78867d*/
        goto LABEL_50; /*0x78867d*/
      }
      if ( v32[3] < v16 ) /*0x7885d6*/
      {
        v8 = v6; /*0x7885d8*/
        v16 = v32[3]; /*0x7885da*/
      }
    }
LABEL_45:
    ++v6; /*0x7885de*/
    v14 += 67; /*0x7885f2*/
    ++v13; /*0x7885f6*/
  }
  while ( v6 < v1 ); /*0x7885fa*/
  if ( v8 != -1 ) /*0x78869b*/
  {
    if ( v8 >= 0 && v8 < g_WOL_AuthPool ) /*0x7886a7*/
      qmemcpy(v32, (char *)dword_B73E18 + 268 * v8, sizeof(v32)); /*0x7886c8*/
    dword_B77DD4 = atol((const char *)&v32[13] + strlen(g_Str_Lob_41_)); /*0x7886e9*/
  }
LABEL_56:
  DeleteAndZero(&v15); /*0x7886ee*/
  return v8; /*0x788619*/
}
} // namespace gamemd

// 0x788710
namespace gamemd {
int sub_788710(int a1, char a2)
{
{
  wchar_t *StringCSF; // eax
  int i; // esi
  HWND v6; // eax
  HWND Current; // eax
  HWND DlgItem; // eax

  if ( g_WOL_ChannelState ) /*0x78871e*/
  {
    Debug::Log(); /*0x788734*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x788744*/
    StringCSF = GetStringCSF(g_Str_WOL_LeavingChannel, 0, g_Str_File_wonline_cpp, 10704); /*0x788758*/
  void *v10; // [esp+8h] [ebp-4h] BYREF
    WideString::Assign((wchar_t **)&v10, StringCSF); /*0x788762*/
    ShowUIMessage(a1, (wchar_t **)&v10, a2); /*0x78876e*/
    DeleteAndZero::Alt(&v10); /*0x788777*/
    for ( i = 0; g_WOL_ChannelState; ++i ) /*0x788785*/
    {
      if ( i >= 150 ) /*0x788793*/
        break; /*0x788793*/
      Sleep(0x64u); /*0x788797*/
      Game::ProcessIdle(); /*0x788799*/
    }
    v6 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x7887ad*/
    if ( v6 ) /*0x7887b4*/
    {
      g_WOL_ChannelList &= ~0x40u; /*0x7887bf*/
      if ( !g_WOL_ChannelList ) /*0x7887c5*/
        CloseDialog(v6, 0); /*0x7887cb*/
    }
    Current = Dialog::GetCurrent(); /*0x7887d0*/
    DlgItem = GetDlgItem(Current, 1344); /*0x7887db*/
    if ( DlgItem ) /*0x7887e3*/
      SetFocus(DlgItem); /*0x7887e6*/
  }
  return g_WOL_ChannelState == 0; /*0x7887f6*/
}
} // namespace gamemd

// 0x788800
namespace gamemd {
Coord * * WOL_LeaveChannelEx(int a1, char ** a2, void * a3)
{
{
  wchar_t *String; // eax
  int i; // esi
  HWND v6; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  CampaignScore *v10; // eax
  char **v13; // [esp+14h] [ebp-4h]

  v13 = a2; /*0x788809*/
  if ( !strcmp((const char *)(a1 + 52), g_WOL_IdleFlag) || !strcmp((const char *)(a1 + 52), &byte_B73C1C) ) /*0x788855*/
  {
    DeleteAndZero::Alt(&a3); /*0x788a17*/
    return 0; /*0x788a1c*/
  }
  else
  {
    if ( !g_WOL_ChannelState ) /*0x788887*/
      goto LABEL_14; /*0x788887*/
    Debug::Log(); /*0x78889d*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x7888ad*/
    String = GetStringCSF(g_Str_WOL_LeavingChannel, 0, g_Str_File_wonline_cpp, 10704); /*0x7888c1*/
  void *v12; // [esp+10h] [ebp-8h] BYREF
    WideString::Assign((wchar_t **)&v12, String); /*0x7888cb*/
    ShowUIMessage(64, (wchar_t **)&v12, 1); /*0x7888db*/
    DeleteAndZero::Alt(&v12); /*0x7888e4*/
    for ( i = 0; g_WOL_ChannelState; ++i ) /*0x7888f2*/
    {
      if ( i >= 150 ) /*0x788900*/
        break; /*0x788900*/
      Sleep(0x64u); /*0x788904*/
      Game::ProcessIdle(); /*0x788906*/
    }
    v6 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x78891a*/
    if ( v6 ) /*0x788921*/
    {
      g_WOL_ChannelList &= ~0x40u; /*0x78892c*/
      if ( !g_WOL_ChannelList ) /*0x788932*/
        CloseDialog(v6, 0); /*0x788938*/
    }
    Current = Dialog::GetCurrent(); /*0x78893d*/
    DlgItem = GetDlgItem(Current, 1344); /*0x788948*/
    if ( DlgItem ) /*0x788950*/
      SetFocus(DlgItem); /*0x788953*/
    if ( g_WOL_ChannelState ) /*0x788960*/
    {
      DeleteAndZero::Alt(&a3); /*0x788966*/
      return 1; /*0x78896b*/
    }
    else
    {
LABEL_14:
      strcpy((char *)(a1 + 215), String::GetOrEmpty_Alt(v13)); /*0x78899f*/
      qmemcpy(&dword_B73BE8, (const void *)a1, 0x10Cu); /*0x7889b4*/
      v10 = WideString::GetOrEmpty_Alt((wchar_t **)&a3); /*0x7889ba*/
      WideString::Assign((wchar_t **)&v12, v10); /*0x7889c4*/
      ShowUIMessage(2, (wchar_t **)&v12, 0); /*0x7889d4*/
      DeleteAndZero::Alt(&v12); /*0x7889dd*/
      Debug::Log(); /*0x7889e8*/
      Coord *v11 = (*(int (__stdcall **)(LPVOID, int))(*(_DWORD *)ppv + 32))(ppv, a1); /*0x788a00*/
      DeleteAndZero::Alt(&a3); /*0x788a02*/
      return v11; /*0x788a07*/
    }
  }
}
} // namespace gamemd

// 0x788A30
namespace gamemd {
int WOL_JoinGameLobby()
{
{
  wchar_t *String; // eax
  wchar_t *v3; // ecx
  HWND v5; // eax
  HWND DlgItem; // eax
  wchar_t *v8; // [esp-4h] [ebp-120h] BYREF
  int v0 = FindLobbyIDWOL(); /*0x788a39*/
  int v1 = v0; /*0x788a3e*/
  if ( v0 == -1 ) /*0x788a43*/
    goto LABEL_9; /*0x788a43*/
  if ( v0 >= 0 && v0 < g_WOL_AuthPool ) /*0x788a53*/
  _BYTE v10[268]; // [esp+10h] [ebp-10Ch] BYREF
    qmemcpy(v10, (char *)dword_B73E18 + 268 * v0, sizeof(v10)); /*0x788a71*/
  void *v9; // [esp+Ch] [ebp-110h] BYREF
  String::Assign((char **)&v9, aZotclot9); /*0x788a7c*/
  String = GetStringCSF(g_Str_TXT_JOINLOB, 0, g_Str_File_wonline_cpp, 10753); /*0x788a92*/
  v8 = v3; /*0x788a97*/
  WideString::Assign(&v8, String); /*0x788a9b*/
  int v4 = LeaveChannelExWOL((char)v8); /*0x788ab1*/
  DeleteAndZero(&v9); /*0x788ab3*/
  if ( v4 ) /*0x788aba*/
  {
LABEL_9:
    GameListRenderWOL(); /*0x788aee*/
    return -1; /*0x788af3*/
  }
  else
  {
    v5 = (HWND)Dialog::FindByHandle((void *)0x113); /*0x788ac1*/
    if ( v5 ) /*0x788ac8*/
    {
      DlgItem = GetDlgItem(v5, 1344); /*0x788ad0*/
      SetFocus(DlgItem); /*0x788ad7*/
    }
    GameListRenderWOL(); /*0x788add*/
    return v1; /*0x788ae2*/
  }
}
} // namespace gamemd

// 0x788B00
namespace gamemd {
Coord * * CreateAccountWOL()
{
{
  HANDLE *v3; // esi
  wchar_t *String; // eax
  DWORD i; // esi
  HWND v6; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  SkirmishDialog *v9; // esi
  DLGTEMPLATE *Indirect; // esi
  HWND v13; // eax
  HWND v14; // eax
  HWND v16; // eax
  HWND v17; // eax
  wchar_t *v19; // eax
  wchar_t *v21; // eax
  wchar_t *v22; // eax
  wchar_t *v23; // eax
  wchar_t *v24; // eax
  DLGTEMPLATE *v25; // esi
  HWND v27; // eax
  HWND v28; // eax
  HWND v30; // eax
  HWND v31; // eax
  HWND v33; // eax
  HWND v34; // eax
  HWND v36; // eax
  HWND v37; // eax
  wchar_t *v39; // eax
  wchar_t *v40; // eax
  wchar_t *v41; // eax
  wchar_t *v42; // eax
  wchar_t *v43; // eax
  wchar_t *v44; // eax
  SkirmishDialog *v45; // esi
  SkirmishDialog *v46; // esi
  HWND hWnd; // [esp+48h] [ebp-288h]
  WPARAM wParam; // [esp+50h] [ebp-280h]
  LPARAM lParam[32]; // [esp+D0h] [ebp-200h] BYREF
  char Buffer[256]; // [esp+1D0h] [ebp-100h] BYREF

  hWnd = a1; /*0x788b0c*/
  RenderGadgetClassAnimation(a1, 0); /*0x788b10*/
  Screen::Capture(1, 0, a2, a3); /*0x788b19*/
  wParam = 1; /*0x788b2b*/
  int v54 = 1; /*0x788b2f*/
  int v56 = 0; /*0x788b33*/
  int v49 = 0; /*0x788b37*/
  v3 = &Handles; /*0x788b3b*/
  do /*0x788b4e*/
    ResetEvent(*v3++); /*0x788b43*/
  while ( (int)v3 < (int)g_WOL_RequestObject ); /*0x788b4e*/
  char v60[32]; // [esp+B0h] [ebp-220h] BYREF
  memset(v60, 0, sizeof(v60)); /*0x788b60*/
  char v58[32]; // [esp+70h] [ebp-260h] BYREF
  memset(v58, 0, sizeof(v58)); /*0x788b6b*/
  char v59[32]; // [esp+90h] [ebp-240h] BYREF
  memset(v59, 0, sizeof(v59)); /*0x788b76*/
  memset(lParam, 0, sizeof(lParam)); /*0x788b84*/
  char v62[128]; // [esp+150h] [ebp-180h] BYREF
  memset(v62, 0, sizeof(v62)); /*0x788b92*/
  String = GetStringCSF(DataGlobal_84B7D8, 0, g_Str_File_wonline_cpp, 10826); /*0x788ba0*/
  int v47; // [esp+44h] [ebp-28Ch] BYREF
  WideString::Assign((wchar_t **)&v47, String); /*0x788baa*/
  ShowUIMessage(128, (wchar_t **)&v47, 0); /*0x788bb9*/
  DeleteAndZero::Alt((void **)&v47); /*0x788bc2*/
  Debug::Log(); /*0x788bcc*/
  (*(void (__stdcall **)(LPVOID, int, int, char *, char *, int))(*(_DWORD *)ppv + 16))( /*0x788bf4*/
    ppv,
    g_NetworkRematchState,
    65537,
    DataGlobal_84B7AC,
    DataGlobal_84B7B4,
    35);
  do /*0x788c3a*/
  {
    for ( i = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x788c11*/
          i == 258;
          i = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u) )
    {
      Game::ProcessIdle(); /*0x788c13*/
    }
    ResetEvent(*(&Handles + i)); /*0x788c36*/
  }
  while ( i > 1 ); /*0x788c3a*/
  v6 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x788c46*/
  if ( v6 ) /*0x788c4d*/
  {
    g_WOL_ChannelList = 0; /*0x788c53*/
    CloseDialog(v6, 0); /*0x788c59*/
  }
  Current = Dialog::GetCurrent(); /*0x788c5e*/
  DlgItem = GetDlgItem(Current, 1344); /*0x788c6f*/
  if ( DlgItem ) /*0x788c73*/
    SetFocus(DlgItem); /*0x788c76*/
  if ( !i ) /*0x788c7e*/
  {
    v9 = hWnd; /*0x788c80*/
    ShowWindow(hWnd, 5); /*0x788c87*/
    return Dialog::InitWindow(v9, 0); /*0x788c9e*/
  }
  while ( 1 ) /*0x788cd6*/
  {
    CreateAccountWOL_Create(); /*0x788cd6*/
    Screen::Capture(1, 0, (int)GetDlgItem, (int)SendMessageA); /*0x788cdf*/
    Indirect = (DLGTEMPLATE *)CreateDialogIndirect(g_hInstance, 231, g_hWnd, (DLGPROC)CreateAccountDlgProcWOL, 0); /*0x788d02*/
    SetupDialog((HWND)Indirect, 231); /*0x788d0b*/
    SendDlgItemMessageA((HWND)Indirect, 1582, 0x14Eu, v54 - 1, 0); /*0x788d23*/
    if ( v56 <= 0 ) /*0x788d2f*/
    {
      v14 = GetDlgItem((HWND)Indirect, 1583); /*0x788d69*/
      SendMessageA(v14, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x788d78*/
    }
    else
    {
  void *v53; // [esp+5Ch] [ebp-274h] BYREF
      FromStringInt((char **)&v53, v56); /*0x788d35*/
      char * v12 = String::GetOrEmpty((char **)&v53); /*0x788d43*/
      v13 = GetDlgItem((HWND)Indirect, 1583); /*0x788d4b*/
      SendMessageA(v13, 0x4B4u, 0, (LPARAM)v12); /*0x788d56*/
      DeleteAndZero(&v53); /*0x788d5c*/
    }
    if ( v49 <= 0 ) /*0x788d80*/
    {
      v17 = GetDlgItem((HWND)Indirect, 1584); /*0x788dba*/
      SendMessageA(v17, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x788dc9*/
    }
    else
    {
  void *v57; // [esp+6Ch] [ebp-264h] BYREF
      FromStringInt((char **)&v57, v49); /*0x788d86*/
      char * v15 = String::GetOrEmpty((char **)&v57); /*0x788d94*/
      v16 = GetDlgItem((HWND)Indirect, 1584); /*0x788d9c*/
      SendMessageA(v16, 0x4B4u, 0, (LPARAM)v15); /*0x788da7*/
      DeleteAndZero(&v57); /*0x788dad*/
    }
    SendDlgItemMessageA((HWND)Indirect, 1574, 0x4B4u, 0, (LPARAM)lParam); /*0x788de6*/
    SendDlgItemMessageA((HWND)Indirect, 1585, 0xF1u, wParam, 0); /*0x788dfa*/
    ShowWindow(hWnd, 0); /*0x788e09*/
    ShowWindow((HWND)Indirect, 1); /*0x788e0e*/
    if ( MessageDialogLoopAlt((HWND)Indirect, (unsigned __int8 (*)(void))GameLoop::Thunk, 0, 1, 1) != 1 ) /*0x788e25*/
      break; /*0x788e25*/
    LOBYTE(lParam[0]) = 0; /*0x788e30*/
    strcpy((char *)lParam, String::GetOrEmpty(&DataGlobal_B76E34)); /*0x788e5a*/
    int v18 = dword_B7782C; /*0x788e5e*/
    v49 = dword_B7782C; /*0x788e66*/
    v56 = dword_B73AB8; /*0x788e78*/
    v54 = dword_B73A1C + 1; /*0x788e87*/
    wParam = dword_B76228; /*0x788e8b*/
    if ( dword_B73A1C + 1 <= 0 ) /*0x788e8f*/
      goto LABEL_73; /*0x788e8f*/
    if ( dword_B73AB8 <= 0 || dword_B7782C <= 0 ) /*0x788e9f*/
    {
LABEL_63:
      if ( dword_B73A1C + 1 >= 12 ) /*0x78938d*/
      {
LABEL_73:
        v43 = GetStringCSF(aTxtInvalidMont, 0, g_Str_File_wonline_cpp, 10922); /*0x789462*/
        ShowDialogConfirm(v43, 0, (int)GameLoop::Thunk, 0); /*0x789483*/
      }
      else if ( dword_B73AB8 <= 0 || dword_B73AB8 > 31 ) /*0x78939e*/
      {
        v42 = GetStringCSF(aTxtInvalidDay, 0, g_Str_File_wonline_cpp, 10924); /*0x78944f*/
        ShowDialogConfirm(v42, 0, (int)GameLoop::Thunk, 0); /*0x789458*/
      }
      else if ( v18 > 0 ) /*0x7893a6*/
      {
        if ( strlen((const char *)lParam) >= 6 ) /*0x7893ed*/
        {
          v22 = GetStringCSF(aTxtRequiredFie, 0, g_Str_File_wonline_cpp, 10930); /*0x789424*/
LABEL_71:
          ShowDialogConfirm(v22, 0, (int)GameLoop::Thunk, 0); /*0x789429*/
        }
        else
        {
          v41 = GetStringCSF(aTxtInvalidEmai, 0, g_Str_File_wonline_cpp, 10928); /*0x789400*/
          ShowDialogConfirm(v41, 0, (int)GameLoop::Thunk, 0); /*0x789409*/
        }
      }
      else
      {
        v40 = GetStringCSF(aTxtInvalidYear, 0, g_Str_File_wonline_cpp, 10926); /*0x7893c0*/
        ShowDialogConfirm(v40, 0, (int)GameLoop::Thunk, 0); /*0x7893c9*/
      }
    }
    else
    {
      if ( strlen((const char *)lParam) < 6 ) /*0x788eb9*/
      {
        v18 = v49; /*0x789386*/
        goto LABEL_63; /*0x789386*/
      }
      dword_B77E64 = 0; /*0x788ec6*/
      dword_B77E60 = -1; /*0x788ed5*/
      if ( (*(int (__stdcall **)(LPVOID, int, int, int, LPARAM *))(*(_DWORD *)g_UIPointerTable + 40))( /*0x788ee5*/
             g_UIPointerTable,
             dword_B73A1C + 1,
             dword_B73AB8,
             v49,
             lParam) )
      {
        v19 = GetStringCSF(g_Str_TXT_CANT_CONNECT, 0, g_Str_File_wonline_cpp, 10939); /*0x788f04*/
LABEL_26:
        ShowDialogConfirm(v19, 0, (int)GameLoop::Thunk, 0); /*0x788f09*/
LABEL_27:
        while ( 1 ) /*0x788f12*/
        {
  int v20; // edi
          CreateAccountWOL_Create_72C420(); /*0x788f12*/
          if ( dword_B77E60 >= 13 ) /*0x788f1f*/
          {
            v47 = (dword_B77E60 >= 18) + 243; /*0x78903e*/
            v20 = v47; /*0x789042*/
          }
          else
          {
            v20 = 230; /*0x788f25*/
            v47 = 230; /*0x788f2a*/
          }
          v25 = (DLGTEMPLATE *)CreateDialogIndirect(g_hInstance, v20, g_hWnd, (DLGPROC)WOLobbySmallDlgProc, 0); /*0x78905f*/
          SetupDialog((HWND)v25, v20); /*0x789065*/
          if ( String::Length(&dword_B77794) ) /*0x78906f*/
          {
            char * v26 = String::GetOrEmpty((char **)&dword_B77794); /*0x789082*/
            v27 = GetDlgItem((HWND)v25, 1576); /*0x78908a*/
            SendMessageA(v27, 0x4B4u, 0, (LPARAM)v26); /*0x78908d*/
          }
          else
          {
            v28 = GetDlgItem((HWND)v25, 1576); /*0x789095*/
            SendMessageA(v28, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x7890a4*/
          }
          if ( String::Length(&dword_B765EC) ) /*0x7890ab*/
          {
            char * v29 = String::GetOrEmpty((char **)&dword_B765EC); /*0x7890be*/
            v30 = GetDlgItem((HWND)v25, 1509); /*0x7890c6*/
            SendMessageA(v30, 0x4B4u, 0, (LPARAM)v29); /*0x7890c9*/
          }
          else
          {
            v31 = GetDlgItem((HWND)v25, 1509); /*0x7890d1*/
            SendMessageA(v31, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x7890e0*/
          }
          if ( String::Length(&dword_B778F4) ) /*0x7890e7*/
          {
            char * v32 = String::GetOrEmpty((char **)&dword_B778F4); /*0x7890fa*/
            v33 = GetDlgItem((HWND)v25, 1836); /*0x789102*/
            SendMessageA(v33, 0x4B4u, 0, (LPARAM)v32); /*0x789105*/
          }
          else
          {
            v34 = GetDlgItem((HWND)v25, 1836); /*0x78910d*/
            SendMessageA(v34, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x78911c*/
          }
          if ( String::Length(&dword_B778FC) ) /*0x789123*/
          {
            char * v35 = String::GetOrEmpty((char **)&dword_B778FC); /*0x789136*/
            v36 = GetDlgItem((HWND)v25, 1575); /*0x78913e*/
            SendMessageA(v36, 0x4B4u, 0, (LPARAM)v35); /*0x789141*/
          }
          else
          {
            v37 = GetDlgItem((HWND)v25, 1575); /*0x789149*/
            SendMessageA(v37, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x789158*/
          }
          ShowWindow((HWND)v25, 1); /*0x78915d*/
          SendMessageA((HWND)v25, 0x4A9u, 0, 1); /*0x78916d*/
          if ( MessageDialogLoopAlt((HWND)v25, (unsigned __int8 (*)(void))GameLoop::Thunk, 0, 1, 1) != 1 ) /*0x789184*/
            break; /*0x789184*/
          v60[0] = 0; /*0x78918f*/
          strcpy(v60, String::GetOrEmpty((char **)&dword_B77794)); /*0x7891b3*/
          v58[0] = 0; /*0x7891c1*/
          char * v38 = String::GetOrEmpty((char **)&dword_B778F4); /*0x7891cb*/
          v59[0] = 0; /*0x7891dc*/
          strcpy(v58, v38); /*0x7891ea*/
          strcpy(v59, String::GetOrEmpty((char **)&dword_B778FC)); /*0x789217*/
          v62[0] = 0; /*0x789229*/
          if ( v47 == 243 ) /*0x789231*/
            strcpy(v62, String::GetOrEmpty((char **)&dword_B765EC)); /*0x78925a*/
          int v55 = 0; /*0x789267*/
          if ( v47 == 244 ) /*0x789274*/
            v55 = unk_B76C20; /*0x78927c*/
          if ( strcmp(v58, v59) ) /*0x78928e*/
          {
            v19 = GetStringCSF((wchar_t *)aTxtPasswordVer, 0, g_Str_File_wonline_cpp, 11073); /*0x7892cd*/
            goto LABEL_26; /*0x7892cd*/
          }
          if ( strlen(v58) != 8 ) /*0x7892e3*/
          {
            v19 = GetStringCSF((wchar_t *)aTxtPasswordToo, 0, g_Str_File_wonline_cpp, 11078); /*0x7892fc*/
            goto LABEL_26; /*0x7892fc*/
          }
          if ( (*(int (__stdcall **)(LPVOID, char *, char *, LPARAM *, char *, WPARAM, int))(*(_DWORD *)g_UIPointerTable /*0x789330*/
                                                                                           + 36))(
                 g_UIPointerTable,
                 v60,
                 v58,
                 lParam,
                 v62,
                 wParam,
                 v55) )
          {
            v44 = GetStringCSF(g_Str_TXT_CANT_CONNECT, 0, g_Str_File_wonline_cpp, 11083); /*0x7894a5*/
            ShowDialogConfirm(v44, 0, (int)GameLoop::Thunk, 0); /*0x7894ae*/
LABEL_75:
            v45 = hWnd; /*0x7894b3*/
            ShowWindow(hWnd, 5); /*0x7894ba*/
            Dialog::InitWindow(v45, 0); /*0x7894c3*/
            return CreateAccountWOL_Create_72C470(); /*0x7894d7*/
          }
          v39 = GetStringCSF(aTxtReqNick, 0, g_Str_File_wonline_cpp, 11085); /*0x78934c*/
  void *v52; // [esp+58h] [ebp-278h] BYREF
          WideString::Assign((wchar_t **)&v52, v39); /*0x789356*/
          ShowUIMessage(256, (wchar_t **)&v52, 1); /*0x789366*/
          DeleteAndZero::Alt(&v52); /*0x78936f*/
          if ( dword_B77DF0 >= 0 ) /*0x78937b*/
            goto LABEL_75; /*0x78937b*/
        }
      }
      else
      {
        v21 = GetStringCSF(DataGlobal_84B794, 0, g_Str_File_wonline_cpp, 10942); /*0x788f44*/
  void *v51; // [esp+54h] [ebp-27Ch] BYREF
        WideString::Assign((wchar_t **)&v51, v21); /*0x788f4e*/
        ShowUIMessage(256, (wchar_t **)&v51, 1); /*0x788f5e*/
        DeleteAndZero::Alt(&v51); /*0x788f67*/
        if ( dword_B77E60 >= 0 ) /*0x788f73*/
        {
          if ( dword_B77E60 >= 13 || dword_B77E64 ) /*0x788fc6*/
            goto LABEL_27; /*0x788fc6*/
          v24 = GetStringCSF(DataGlobal_84B77C, 0, g_Str_File_wonline_cpp, 10957); /*0x788fe4*/
          if ( ShowDialogConfirm(v24, 4, (int)GameLoop::Thunk, 0) == 6 ) /*0x788ff8*/
          {
            sprintf(Buffer, stru_84B740, dword_B77E50); /*0x789012*/
            OpenURLWOL(Buffer, 1); /*0x789026*/
          }
        }
        else
        {
          if ( dword_B77DF4 == -2147221248 ) /*0x788f86*/
          {
            v22 = GetStringCSF(aTxtRequiredFie, 0, g_Str_File_wonline_cpp, 10946); /*0x788f8d*/
            goto LABEL_71; /*0x788f8d*/
          }
          v23 = GetStringCSF(g_Str_TXT_CANT_CONNECT, 0, g_Str_File_wonline_cpp, 10948); /*0x788fa3*/
          ShowDialogConfirm(v23, 0, (int)GameLoop::Thunk, 0); /*0x788fac*/
        }
      }
    }
  }
  v46 = hWnd; /*0x7894d8*/
  ShowWindow(hWnd, 1); /*0x7894df*/
  ShowWindow(v46, 5); /*0x7894e4*/
  Dialog::InitWindow(v46, 0); /*0x7894e9*/
  return CreateAccountWOL_Create_72C290(); /*0x788c94*/
}
} // namespace gamemd

// 0x789500
namespace gamemd {
Coord * * WOL_FindChannel(const char * a1, int a2, unsigned char a3, int a4)
{
{
  const char *v9; // [esp+20h] [ebp-Ch] BYREF
  int v10; // [esp+24h] [ebp-8h] BYREF
  int v11; // [esp+28h] [ebp-4h]
  v11 = a2; /*0x789507*/
  int v5 = 1; /*0x78950d*/
  while ( 1 ) /*0x789522*/
  {
    v9 = 0; /*0x789522*/
    v10 = 0; /*0x789526*/
    if ( !(*(int (__stdcall **)(LPVOID, int, const char **, int *))(*(_DWORD *)ppv + 144))( /*0x789549*/
            ppv,
            v5,
            &v9,
            &v10)
      && v9
      && !strcmp(v9, a1) )
    {
      break; /*0x789549*/
    }
    if ( ++v5 > 32 ) /*0x789574*/
      goto LABEL_8; /*0x789574*/
  }
  int v6 = v5; /*0x78957a*/
  if ( v5 ) /*0x78957c*/
  {
LABEL_20:
    (*(void (__stdcall **)(LPVOID, int, const char *, int, _DWORD))(*(_DWORD *)ppv + 148))( /*0x7895f0*/
      ppv,
      v6,
      a1,
      v11,
      a3);
    (*(void (__stdcall **)(LPVOID, int, int))(*(_DWORD *)ppv + 200))(ppv, v6, a4); /*0x78961e*/
    return v6; /*0x78961e*/
  }
LABEL_8:
  v6 = 1; /*0x78957e*/
  while ( 1 ) /*0x789591*/
  {
    v9 = 0; /*0x789591*/
    v10 = 0; /*0x789595*/
    if ( (*(int (__stdcall **)(LPVOID, int, const char **, int *))(*(_DWORD *)ppv + 144))( /*0x7895b0*/
           ppv,
           v6,
           &v9,
           &v10)
      || !v9
      || !strlen(v9) )
    {
      break; /*0x7895b0*/
    }
    if ( ++v6 > 32 ) /*0x7895be*/
      goto LABEL_15; /*0x7895be*/
  }
  if ( v6 ) /*0x7895c4*/
    goto LABEL_20; /*0x7895c4*/
LABEL_15:
  int v7 = DataGlobal_A8B544; /*0x7895c6*/
  if ( DataGlobal_A8B544 == -1 ) /*0x7895ce*/
    v7 = 1; /*0x7895d0*/
  v6 = v7; /*0x7895d5*/
  DataGlobal_A8B544 = v7 + 1; /*0x7895db*/
  if ( v7 + 1 > 32 ) /*0x7895e0*/
    DataGlobal_A8B544 = 1; /*0x7895e2*/
  if ( v7 ) /*0x7895ee*/
    goto LABEL_20; /*0x7895ee*/
  return v6; /*0x789626*/
}
} // namespace gamemd

// 0x7896A0
namespace gamemd {
MapClass * * PopulateWOLUserList(HWND hWnd, char a2)
{
{
  LPARAM v4; // ebp
  _DWORD *PlayerProfile; // eax
  LRESULT v12; // esi
  ObjectClass *v13; // eax
  WPARAM v14; // esi
  char **v15; // [esp-8h] [ebp-4Ch]
  WPARAM wParam; // [esp+18h] [ebp-2Ch]
  int i; // [esp+20h] [ebp-24h]
  void **v26; // [esp+34h] [ebp-10h] BYREF

  if ( a2 ) /*0x7896b0*/
    ListBox::Clear(hWnd); /*0x7896b2*/
  else
    Memory_Pop(hWnd); /*0x7896b9*/
  v4 = 1; /*0x7896c3*/
  if ( g_WOL_UserList == 1 ) /*0x7896ca*/
  {
    if ( a2 ) /*0x7896d5*/
      SendMessageA(hWnd, 0x4BCu, 0, (LPARAM)aGuiNoserversav); /*0x7896dc*/
    else
      SendMessageA(hWnd, 0x4C8u, 0, (LPARAM)aGuiNoserversav); /*0x7896e4*/
    EnableWindow(hWnd, 0); /*0x7896ed*/
    return 0; /*0x7896f3*/
  }
  else
  {
  void *v25[2]; // [esp+2Ch] [ebp-18h] BYREF
  void *v21; // [esp+1Ch] [ebp-28h] BYREF
    unknown_libname_73(&v21); /*0x789701*/
    int v28 = 0; /*0x78970a*/
    char v29 = 0; /*0x789712*/
    ReadRegistryOptionsWOL(&v28); /*0x789717*/
    ComPtr::Constructor(&v26); /*0x789720*/
    v26 = &vt_rc_ptr_PlayerProfile; /*0x78972e*/
    if ( Flag::IsNot2(&v28) ) /*0x789732*/
    {
      PlayerProfile = LoadPlayerProfile(v25, (const char **)&g_WebBrowser); /*0x789744*/
      ComPtr::Set(&v26, PlayerProfile[1]); /*0x789751*/
      v25[0] = &vt_rc_ptr_PlayerProfile; /*0x78975a*/
      ComPtr::Release(v25); /*0x78975e*/
    }
    else
    {
      ComPtr::Set(&v26, dword_B75E4C); /*0x789770*/
    }
  int v27; // [esp+38h] [ebp-Ch]
    if ( v27 ) /*0x78977b*/
      String::Reassign((char **)&v21, (const char **)(v27 + 12)); /*0x789785*/
    EnableWindow(hWnd, 1); /*0x78978c*/
    MapClass *v7 = g_WOL_UserList; /*0x789792*/
    wParam = -1; /*0x78979f*/
    if ( g_WOL_UserList <= 1 ) /*0x7897a7*/
      goto LABEL_30; /*0x7897a7*/
    int v8 = 248; /*0x7897ad*/
    for ( i = 248; ; v8 = i ) /*0x7897b2*/
    {
      char * v9 = 0; /*0x7897bc*/
      if ( v8 >= 0 && v4 < v7 ) /*0x7897c4*/
        v9 = (char *)dword_B778E0 + v8; /*0x7897cc*/
      Debug::Log(); /*0x7897d8*/
  void *v18; // [esp+10h] [ebp-34h] BYREF
      String::Assign((char **)&v18, v9 + 24); /*0x7897e5*/
  int v23; // [esp+24h] [ebp-20h] BYREF
      unknown_libname_73(&v23); /*0x7897ee*/
      int v10 = String::Tokenize((const char **)&v18, 0, DataGlobal_8318B8, (void **)&v23); /*0x789803*/
      if ( v10 >= 0 ) /*0x78980a*/
        String::Erase((const char **)&v18, 0, v10 + 1); /*0x789814*/
  void *v19; // [esp+14h] [ebp-30h] BYREF
      String::AssignFromPtr((char **)&v19, (const char **)&v18); /*0x789822*/
      DeleteAndZero((void **)&v23); /*0x78982b*/
      DeleteAndZero(&v18); /*0x789834*/
      char * v11 = String::GetOrEmpty_Alt((char **)&v19); /*0x789845*/
      if ( a2 ) /*0x789843*/
      {
        v12 = SendMessageA(hWnd, 0x4BCu, 0, (LPARAM)v11); /*0x789855*/
        SendMessageA(hWnd, 0x151u, v12, v4); /*0x78985e*/
      }
      else
      {
        v12 = SendMessageA(hWnd, 0x4C8u, 0, (LPARAM)v11); /*0x789870*/
        SendMessageA(hWnd, 0x19Au, v12, v4); /*0x78987a*/
      }
      if ( String::Length((const char **)&v21) ) /*0x789880*/
      {
        v15 = String::ToLowerCopy((const char **)&v19, (char **)v25); /*0x78989b*/
        ObjectClass *v24 = (ObjectClass *)String::ToLowerCopy((const char **)&v21, (char **)&v24); /*0x7898a1*/
        bool v17 = String::Compare((const char **)v13, (const char **)v15); /*0x7898b1*/
        DeleteAndZero(&v24); /*0x7898b5*/
        DeleteAndZero(v25); /*0x7898be*/
        if ( v17 ) /*0x7898c9*/
        {
          wParam = v12; /*0x7898cb*/
          dword_B76468 = v4; /*0x7898cf*/
          dword_B779CC = v4; /*0x7898d5*/
        }
      }
      DeleteAndZero(&v19); /*0x7898df*/
      v7 = g_WOL_UserList; /*0x7898e8*/
      ++v4; /*0x7898ed*/
      i += 248; /*0x7898f6*/
      if ( v4 >= g_WOL_UserList ) /*0x7898fa*/
        break; /*0x7898fa*/
    }
    v14 = wParam; /*0x789900*/
    if ( wParam == -1 ) /*0x789907*/
    {
LABEL_30:
      wParam = 0; /*0x789909*/
      v14 = 0; /*0x789911*/
    }
    if ( a2 ) /*0x78991e*/
    {
      SendMessageA(hWnd, 0x14Eu, v14, 0); /*0x789925*/
    }
    else
    {
      SendMessageA(hWnd, 0x186u, v14, 0); /*0x78992d*/
      SendMessageA(hWnd, 0x197u, v14, 0); /*0x789938*/
    }
    v26 = &vt_rc_ptr_PlayerProfile; /*0x78993e*/
    ComPtr::Release(&v26); /*0x789946*/
    DeleteAndZero(&v21); /*0x78994f*/
    return 1; /*0x789954*/
  }
}
} // namespace gamemd

// 0x789960
namespace gamemd {
void ValidateJoinWOL()
{
{
  char result; // al
  int BlowStraw_field_0x08; // eax
  CampaignScore *v8; // eax
  CampaignScore *v9; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v13; // ecx
  wchar_t *v15; // [esp-4h] [ebp-28h] BYREF
  CampaignScore *v16; // [esp+Ch] [ebp-18h] BYREF
  wchar_t *v17; // [esp+10h] [ebp-14h] BYREF
  SimpleDialogControl_OwnerDraw v18; // [esp+14h] [ebp-10h] BYREF
  LOBYTE(v15) = (_BYTE)a1; /*0x789966*/
  LOBYTE(a1) = 1; /*0x789969*/
  result = ValidateGameJoinWOL(a2, a1, (char)v15); /*0x78996b*/
  if ( result )
  {
    BlowStraw_field_0x08 = a2[2].BlowStraw_field_0x08; /*0x78997b*/
    if ( (BlowStraw_field_0x08 & 0x400) != 0 )
      int v7 = 800; /*0x789988*/
    else
      v7 = (BlowStraw_field_0x08 & 0x200) != 0 ? 640 : 1024;
    if ( *(int *)&HouseClass_Player[44600] > v7 )
    {
      v8 = (CampaignScore *)((a2[2].BlowStraw_field_0x08 & 0x400) != 0
                           ? GetStringCSF((wchar_t *)aWolResolutionl, 0, (CampaignScore *)g_Str_File_wonline_cpp, 11491)
                           : GetStringCSF(aWolResolutionl_0, 0, (CampaignScore *)g_Str_File_wonline_cpp, 11492));
      WideString::Assign(&v17, v8); /*0x7899e2*/
      v9 = WideString::GetOrEmpty(&v17); /*0x7899f2*/
      if ( ShowDialogConfirm(v9, 4, (unsigned __int8 (*)())GameLoop::Thunk, 1) == 6 ) /*0x789a06*/
      {
        int v10 = -(v7 != 800); /*0x789a16*/
        LOBYTE(v10) = v10 & 0x60; /*0x789a18*/
        *(_DWORD *)&HouseClass_Player[44600] = v10 + 800; /*0x789a1f*/
        int v11 = -(v10 != 0); /*0x789a2b*/
        LOBYTE(v11) = v11 & 0x88; /*0x789a2d*/
        *(_DWORD *)&HouseClass_Player[44604] = v11 + 600; /*0x789a34*/
        ScenarioClass::SaveGameOptions((int)&HouseClass_Player[44564]); /*0x789a39*/
      }
      DeleteAndZero::Alt((void **)&v17); /*0x789a42*/
      if ( *(int *)&HouseClass_Player[44600] > v7 ) /*0x789a4d*/
        return 0; /*0x789a57*/
    }
    unknown_libname_73(&v16); /*0x789a5c*/
    if ( (a2[2].BlowStraw_field_0x04 & 0x100) != 0 ) /*0x789a67*/
    {
      Screen::Capture(1, 0, a3, a4); /*0x789a71*/
      SimpleDialogControl::Constructor(&v18); /*0x789a7a*/
      v18.vfptr = &off_7F7624; /*0x789a88*/
  int v19; // [esp+20h] [ebp-4h] BYREF
      unknown_libname_73(&v19); /*0x789a8c*/
      v18.vfptr = &vt_WonlineStringDialogControl; /*0x789aa5*/
      if ( RunDialog( /*0x789ab1*/
             0xE1u,
             (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))WOLGameClass::ParseChatMessage,
             (LPARAM)&v18) == 2 )
      {
        v18.vfptr = &vt_WonlineStringDialogControl; /*0x789ab7*/
        DeleteAndZero((int)&v19); /*0x789abb*/
        v18.vfptr = &off_7F7624; /*0x789ac4*/
        OwnerDrawControl::InitVtable((DialogControl_OwnerDraw *)&v18); /*0x789ac8*/
        DeleteAndZero((int)&v16); /*0x789ad1*/
        return 0; /*0x789ade*/
      }
      String::Reassign((char **)&v16, (AbstractClass *)&v19); /*0x789ae8*/
      String::Replace((char **)&v16, &stru_830620[1012], asc_818D7C); /*0x789afb*/
      v18.vfptr = &vt_WonlineStringDialogControl; /*0x789b04*/
      DeleteAndZero((int)&v19); /*0x789b08*/
      v18.vfptr = &off_7F7624; /*0x789b11*/
      OwnerDrawControl::InitVtable((DialogControl_OwnerDraw *)&v18); /*0x789b15*/
    }
    StringCSF = GetStringCSF(g_Str_TXT_JOINLOB, 0, (CampaignScore *)g_Str_File_wonline_cpp, 11547); /*0x789b2b*/
    v15 = v13; /*0x789b30*/
    WideString::Assign(&v15, (CampaignScore *)StringCSF); /*0x789b34*/
    bool v14 = LeaveChannelExWOL((int)a2, (char **)&v16, v15) == 0; /*0x789b4a*/
    DeleteAndZero((int)&v16); /*0x789b4d*/
    return v14; /*0x789b52*/
  }
  return result; /*0x789974*/
}
} // namespace gamemd

// 0x789B60
namespace gamemd {
void CreateGameWOL()
{
{
  int v4; // eax
  wchar_t *StringCSF; // eax
  int i; // esi
  CreateGameDialogControl *v7; // ecx
  int v8; // eax
  int ebp27; // ebp
  CampaignScore *v9; // eax
  _DWORD *PlayerProfile; // eax
  SkirmishDialog *PlayerOption; // eax
  int PlayerColor; // eax
  int eax44; // eax
  CampaignScore *v14; // eax
  int v16; // eax
  wchar_t *v17; // eax
  HWND v18; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  wchar_t *v21; // eax
  HWND v22; // eax
  HWND v23; // eax
  wchar_t *v24; // eax
  HWND v25; // eax
  HWND v26; // eax
  HWND v27; // eax
  Coord *v28; // eax
  AbstractClass *v29; // ebx
  int v30; // esi
  int v31; // edi
  AbstractClass *v33; // eax
  u_long nextArrayIndex; // edx
  u_long v35; // eax
  _DWORD *v36; // ebp
  int v37; // eax
  int v38; // ecx
  HWND v39; // eax
  Coord *v40; // edi
  HWND Dialog; // esi
  char *v42; // [esp+18h] [ebp-1ACh] BYREF
  int v43; // [esp+1Ch] [ebp-1A8h]
  SkirmishDialog *v44; // [esp+20h] [ebp-1A4h] BYREF
  rc_ptr_base v45; // [esp+24h] [ebp-1A0h] BYREF
  wchar_t *aP0; // [esp+28h] [ebp-19Ch] BYREF
  DialogControl_OwnerDraw aP0_4; // [esp+2Ch] [ebp-198h] BYREF
  int aP0_8; // [esp+30h] [ebp-194h]
  AbstractClass aP0_16; // [esp+38h] [ebp-18Ch] BYREF
  int aP0_52; // [esp+5Ch] [ebp-168h] BYREF
  int aP0_56; // [esp+60h] [ebp-164h]
  int aP0_60; // [esp+64h] [ebp-160h]
  _DWORD aP0_72[67]; // [esp+70h] [ebp-154h] BYREF
  char v54[72]; // [esp+17Ch] [ebp-48h] BYREF

  unknown_libname_73(&v42); /*0x789b6a*/
  if ( *(int *)&HouseClass_Player[44600] >= 1024 ) /*0x789b79*/
    HouseClass_Player[30708] = 0; /*0x789b7b*/
  HIBYTE(v43) = HouseClass_Player[30708]; /*0x789b9c*/
  bool v2 = *(&g_MatrixTransformState + 2222) == (CoordStruct *)1; /*0x789ba0*/
  CreateGameWOL_Create_7AC610((SimpleWonlineDialogControl *)&aP0_4); /*0x789ba3*/
  *(_WORD *)&aP0_16[4] = 0; /*0x789bb4*/
  aP0_16[6] = HIBYTE(v43); /*0x789bbe*/
  aP0_16[7] = v2; /*0x789bc2*/
  aP0_4.vfptr = &vt_CreateGameDialogControl; /*0x789bc6*/
  byte_B77DEC = 0; /*0x789bce*/
  if ( *(_DWORD *)&HouseClass_Player[29944] == 3 /*0x789bde*/
    || *(_DWORD *)&HouseClass_Player[29944] == 1
    || *(_DWORD *)&HouseClass_Player[29944] == 2 )
  {
    dword_B77DC4 = 2; /*0x789be0*/
  }
  else
  {
    Screen::Capture(1, 0, v2, 1); /*0x789bf0*/
    if ( RunDialog(0xC3u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))WOLLogin::DlgProc, (LPARAM)&aP0_4) == 2 ) /*0x789c0c*/
    {
      aP0_4.vfptr = &vt_WonlineStringDialogControl; /*0x789c12*/
      DeleteAndZero((int)&aP0_16); /*0x789c1a*/
      ConnectAndLoginWOL_Connect((SimpleWonlineDialogControl *)&aP0_4); /*0x789c23*/
      DeleteAndZero((int)&v42); /*0x789c2c*/
      return 0; /*0x789c3d*/
    }
    String::Reassign(&v42, &aP0_16); /*0x789c47*/
    String::Replace(&v42, &stru_830620[1012], asc_818D7C); /*0x789c5a*/
  }
  (*(void (__stdcall **)(_DWORD, int, int))((*(&g_MatrixTransformState + 2263))->X + 36))( /*0x789c67*/
    *(&g_MatrixTransformState + 2263),
    a1,
    a2);
  memset(aP0_72, 0, sizeof(aP0_72)); /*0x789c7b*/
  sprintf((char *const)&aP0_72[13], &stru_84B8E0, *(INIClass **)g_WebBrowser[0]); /*0x789c8b*/
  aP0_72[0] = 41; /*0x789c9b*/
  aP0_72[1] = 1; /*0x789ca3*/
  if ( dword_B77DC4 < 2 ) /*0x789ca7*/
    dword_B77DC4 = 6; /*0x789ca9*/
  strcpy((char *)&aP0_72[53] + 3, String::GetOrEmpty((char **)&v44)); /*0x789cdb*/
  aP0_72[2] = dword_B77DC4; /*0x789cf3*/
  memset(v54, 0, 0x50u); /*0x789cfc*/
  GameConfig::BuildChecksum(v54); /*0x789d05*/
  v54[40] = 0; /*0x789d15*/
  strcpy((char *)&aP0_72[56], v54); /*0x789d33*/
  if ( *(_DWORD *)&HouseClass_Player[29932] == 4 ) /*0x789d49*/
  {
    if ( *(_DWORD *)&HouseClass_Player[29944] == 3 ) /*0x789d4e*/
    {
      v4 = aP0_72[8]; /*0x789d50*/
      aP0_72[5] = 1; /*0x789d57*/
      BYTE1(v4) = BYTE1(aP0_72[8]) | 0x10; /*0x789d5b*/
      goto LABEL_22; /*0x789d5e*/
    }
  }
  else if ( *(_DWORD *)&HouseClass_Player[29944] == 3 ) /*0x789d63*/
  {
LABEL_29:
    v4 = aP0_72[8]; /*0x789ec4*/
    aP0_72[5] = 1; /*0x789ee7*/
    BYTE1(v4) = BYTE1(aP0_72[8]) | 8; /*0x789eeb*/
    goto LABEL_22; /*0x789eee*/
  }
  if ( *(_DWORD *)&HouseClass_Player[29944] == 1 ) /*0x789d6b*/
    goto LABEL_29; /*0x789d6b*/
  if ( *(_DWORD *)&HouseClass_Player[29944] == 2 )
  {
    v4 = aP0_72[8]; /*0x789ec9*/
    aP0_72[5] = 0; /*0x789ed0*/
    BYTE1(v4) = BYTE1(aP0_72[8]) | 8; /*0x789ed8*/
  }
  else
  {
    v4 = aP0_72[8]; /*0x789d8a*/
    aP0_72[5] = (unsigned __int8)aP0_16[12]; /*0x789d91*/
    if ( aP0_16[13] ) /*0x789d95*/
      BYTE1(v4) = BYTE1(aP0_72[8]) | 1; /*0x789d97*/
    HouseClass_Player[30708] = aP0_16[14]; /*0x789da0*/
    if ( aP0_16[14] )
      v4 |= *(_DWORD *)&HouseClass_Player[44600] != 800 ? 512 : 1024;
  }
LABEL_22:
  aP0_72[8] = (char *)dword_B77DD4 + v4; /*0x789dc6*/
  if ( g_WOL_ChannelState ) /*0x789dda*/
  {
    Debug::Log(); /*0x789df0*/
    (*(void (__stdcall **)(_DWORD))((*(&g_MatrixTransformState + 2263))->X + 36))(*(&g_MatrixTransformState + 2263)); /*0x789e00*/
    StringCSF = GetStringCSF( /*0x789e14*/
                  (wchar_t *)&stru_84B608.INIClass_field_3C,
                  0,
                  (CampaignScore *)g_Str_File_wonline_cpp,
                  10704);
    WideString::Assign((wchar_t **)&aP0_16.referenceCount, (CampaignScore *)StringCSF); /*0x789e1e*/
    ShowUIMessage((MPCooperative *)0xC0, (wchar_t **)&aP0_16.referenceCount, 0); /*0x789e2e*/
    DeleteAndZero::Alt((void **)&aP0_16.referenceCount); /*0x789e37*/
    for ( i = 0; g_WOL_ChannelState; ++i ) /*0x789e45*/
    {
      if ( i >= 150 ) /*0x789e53*/
        break; /*0x789e53*/
      Sleep(0x64u); /*0x789e57*/
      Game::ProcessIdle(v7); /*0x789e59*/
    }
    CreateGameWOL_Create(64); /*0x789e6d*/
  }
  *(_DWORD *)&HouseClass_Player[29936] = MultiplayerGameMode::GetFirst(); /*0x789e77*/
  *(_DWORD *)&HouseClass_Player[29956] = *(_DWORD *)(*(_DWORD *)&HouseClass_Player[29936] + 40); /*0x789e7f*/
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player[29936] + 32))(*(_DWORD *)&HouseClass_Player[29936]); /*0x789e89*/
  LoadScenarioClassByIndex(0); /*0x789e8e*/
  PtrVector::Destroy(&HouseClass_Player[40232]); /*0x789e98*/
  Game::ResetFlags(); /*0x789e9d*/
  Network::InitPlayerSlots(); /*0x789ea2*/
  v8 = __2_YAPAXI_Z(0x85u); /*0x789eac*/
  ebp27 = v8; /*0x789eb1*/
  if ( v8 ) /*0x789eb8*/
    Waypoint::InitInvalid((_BYTE *)(v8 + 40)); /*0x789ebd*/
  else
    ebp27 = 0; /*0x789ef3*/
  memset((void *)ebp27, 0, 0x84u); /*0x789f03*/
  *(_BYTE *)(ebp27 + 132) = 0; /*0x789f09*/
  CharStringToWide((ObjectClass *)&aP0, (const char **)&g_WebBrowser); /*0x789f0a*/
  v9 = WideString::GetOrEmpty(&aP0); /*0x789f13*/
  wcscpy((wchar_t *)ebp27, (const wchar_t *)v9); /*0x789f1a*/
  aP0_52 = 0; /*0x789f28*/
  LOBYTE(aP0_56) = 0; /*0x789f2c*/
  ReadRegistryOptionsWOL(&aP0_52); /*0x789f31*/
  ComPtr::Constructor((rc_ptr_base *)&aP0_4); /*0x789f3a*/
  aP0_4.vfptr = &vt_rc_ptr_PlayerProfile; /*0x789f48*/
  if ( Flag::IsNot2(&aP0_52) ) /*0x789f4c*/
  {
    PlayerProfile = LoadPlayerProfile(&aP0_16.abstractFlags, (const char **)&g_WebBrowser); /*0x789f5e*/
    ComPtr::Set((rc_ptr_base *)&aP0_4, PlayerProfile[1]); /*0x789f6b*/
    aP0_16.abstractFlags = (int)&vt_rc_ptr_PlayerProfile; /*0x789f74*/
    ComPtr::Release((rc_ptr_base *)&aP0_16.abstractFlags); /*0x789f78*/
  }
  else
  {
    ComPtr::Set((rc_ptr_base *)&aP0_4, (int)dword_B75E4C); /*0x789f8a*/
  }
  if ( aP0_8 ) /*0x789f95*/
  {
    SessionClass::AssignSide(&HouseClass_Player[29932], *(_DWORD *)(aP0_8 + 28), 0); /*0x789fa1*/
    SessionClass::AssignColor(&HouseClass_Player[29932], *(_DWORD *)(aP0_8 + 32), 0); /*0x789fb4*/
  }
  *(_DWORD *)&HouseClass_Player[30288] = -1; /*0x789fbe*/
  *(_DWORD *)&HouseClass_Player[30292] = -2; /*0x789fc4*/
  PlayerOption = (SkirmishDialog *)Session::GetPlayerOption(&HouseClass_Player[29932]); /*0x789fce*/
  SessionClass::SetPlayerOption(ebp27, PlayerOption); /*0x789fd6*/
  PlayerColor = Session::GetPlayerColor(&HouseClass_Player[29932]); /*0x789fe0*/
  SessionClass::SetPlayerColor(ebp27, PlayerColor); /*0x789fe8*/
  SessionClass::SetOption(ebp27, (SessionClass *)0xFFFFFFFE); /*0x789ff1*/
  SessionClass::SetOption2(ebp27, (SessionClass *)0xFFFFFFFE); /*0x789ffa*/
  *(_DWORD *)(ebp27 + 119) = 1; /*0x789fff*/
  *(_DWORD *)(ebp27 + 107) = 0; /*0x78a006*/
  *(_DWORD *)&stru_830620[4228] = 7; /*0x78a015*/
  *(&g_MatrixTransformState + 2222) = (CoordStruct *)(unsigned __int8)aP0_16[15]; /*0x78a01f*/
  Dialog::RefreshDialogsGame(0); /*0x78a025*/
  if ( *(&g_MatrixTransformState + 2222) ) /*0x78a030*/
  {
    *(_DWORD *)&stru_830620[4228] = 0; /*0x78a032*/
    *(_DWORD *)(ebp27 + 107) = -1; /*0x78a03c*/
    SessionClass::SetPlayerOption(ebp27, (SkirmishDialog *)0xFFFFFFFD); /*0x78a03f*/
  }
  if ( *(int *)&HouseClass_Player[40248] < *(int *)&HouseClass_Player[40240] /*0x78a079*/
    || (HouseClass_Player[40245] || !*(_DWORD *)&HouseClass_Player[40240])
    && *(int *)&HouseClass_Player[40252] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player[40232] + 8))(
         &HouseClass_Player[40232],
         *(_DWORD *)&HouseClass_Player[40240] + *(_DWORD *)&HouseClass_Player[40252],
         0) )
  {
    eax44 = (*(_DWORD *)&HouseClass_Player[40248])++; /*0x78a086*/
    *(_DWORD *)(*(_DWORD *)&HouseClass_Player[40236] + 4 * eax44) = ebp27; /*0x78a095*/
  }
  NetworkShare::GetField(0); /*0x78a09a*/
  v14 = WideString::GetOrEmpty(&aP0); /*0x78a0a3*/
  wcscpy((wchar_t *)&HouseClass_Player[39108], (const wchar_t *)v14); /*0x78a0ae*/
  v16 = (*(int (__cdecl **)(_DWORD, _DWORD *))((*(&g_MatrixTransformState + 2263))->X + 28))( /*0x78a0c3*/
          *(&g_MatrixTransformState + 2263),
          aP0_72);
  if ( v16 == -2147221000 ) /*0x78a0cb*/
  {
    v17 = GetStringCSF(aTxtBadChankey, 0, (CampaignScore *)g_Str_File_wonline_cpp, 11789); /*0x78a0e4*/
    ShowDialogConfirm((CampaignScore *)v17, 0, (unsigned __int8 (*)())GameLoop::Thunk, 0); /*0x78a0ed*/
    v18 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x78a0f7*/
    if ( v18 ) /*0x78a0fe*/
    {
      g_WOL_ChannelList = (MPCooperative *)((unsigned int)g_WOL_ChannelList & 0xFFFFFF7F); /*0x78a10c*/
      if ( !g_WOL_ChannelList ) /*0x78a112*/
        CloseDialog(v18, 0); /*0x78a118*/
    }
    Current = Dialog::GetCurrent(); /*0x78a11d*/
    DlgItem = GetDlgItem(Current, 1344); /*0x78a128*/
    if ( !DlgItem ) /*0x78a130*/
      goto LABEL_72; /*0x78a130*/
    goto LABEL_50; /*0x78a130*/
  }
  if ( v16 ) /*0x78a144*/
  {
    v21 = GetStringCSF(aTxtCantcreateC, 0, (CampaignScore *)g_Str_File_wonline_cpp, 11795); /*0x78a15d*/
    ShowDialogConfirm((CampaignScore *)v21, 0, (unsigned __int8 (*)())GameLoop::Thunk, 0); /*0x78a166*/
    v22 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x78a170*/
    if ( v22 ) /*0x78a177*/
    {
      g_WOL_ChannelList = (MPCooperative *)((unsigned int)g_WOL_ChannelList & 0xFFFFFF7F); /*0x78a185*/
      if ( !g_WOL_ChannelList ) /*0x78a18b*/
        CloseDialog(v22, 0); /*0x78a191*/
    }
    v23 = Dialog::GetCurrent(); /*0x78a196*/
    DlgItem = GetDlgItem(v23, 1344); /*0x78a1a1*/
    if ( !DlgItem ) /*0x78a1a9*/
      goto LABEL_72; /*0x78a1a9*/
LABEL_50:
    SetFocus(DlgItem); /*0x78a136*/
LABEL_72:
    v45.vfptr = &vt_rc_ptr_PlayerProfile; /*0x78a29d*/
    ComPtr::Release(&v45); /*0x78a2a5*/
    DeleteAndZero::Alt((void **)&v44); /*0x78a2ae*/
    aP0_4.vfptr = &vt_WonlineStringDialogControl; /*0x78a2b7*/
    DeleteAndZero((int)&aP0_16); /*0x78a2bf*/
    aP0_4.vfptr = &off_7F7624; /*0x78a2c8*/
    OwnerDrawControl::InitVtable(&aP0_4); /*0x78a2d0*/
    DeleteAndZero((int)&v42); /*0x78a2d9*/
    return 0; /*0x78a2ea*/
  }
  v24 = GetStringCSF(aGuiCreatingcha, 0, (CampaignScore *)g_Str_File_wonline_cpp, 11803); /*0x78a1cc*/
  WideString::Assign((wchar_t **)&aP0_16.nextArrayIndex, (CampaignScore *)v24); /*0x78a1d6*/
  ShowUIMessage((MPCooperative *)4, (wchar_t **)&aP0_16.nextArrayIndex, 0); /*0x78a1e5*/
  v25 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x78a1ef*/
  if ( v25 ) /*0x78a1f6*/
  {
    g_WOL_ChannelList = (MPCooperative *)((unsigned int)g_WOL_ChannelList & 0xFFFFFF7F); /*0x78a204*/
    if ( !g_WOL_ChannelList ) /*0x78a20a*/
      CloseDialog(v25, 0); /*0x78a210*/
  }
  v26 = Dialog::GetCurrent(); /*0x78a215*/
  v27 = GetDlgItem(v26, 1344); /*0x78a220*/
  if ( v27 ) /*0x78a228*/
    SetFocus(v27); /*0x78a22b*/
  ShowUIMessage((MPCooperative *)4, (wchar_t **)&aP0_16.nextArrayIndex, 1); /*0x78a23c*/
  v28 = g_WOL_State; /*0x78a241*/
  v29 = 0; /*0x78a246*/
  v30 = 0; /*0x78a248*/
  if ( (int)g_WOL_State <= 0 ) /*0x78a24c*/
    goto LABEL_71; /*0x78a24c*/
  v31 = 0; /*0x78a24e*/
  while ( 1 ) /*0x78a250*/
  {
    if ( v31 >= 0 && v30 < v28 ) /*0x78a256*/
      v29 = &g_WOL_ConnectionFlags[v31]; /*0x78a25e*/
    char * v32 = String::GetOrEmpty_Alt((char **)&g_WebBrowser); /*0x78a26a*/
    if ( !_strcmpi(v32, &v29[1]) ) /*0x78a270*/
      break; /*0x78a270*/
    v28 = g_WOL_State; /*0x78a27c*/
    ++v30; /*0x78a281*/
    v31 += 3; /*0x78a282*/
    if ( v30 >= (int)g_WOL_State ) /*0x78a287*/
      goto LABEL_71; /*0x78a287*/
  }
  if ( v30 < 0 ) /*0x78a28d*/
  {
LABEL_71:
    DeleteAndZero::Alt((void **)&aP0_16.nextArrayIndex); /*0x78a294*/
    goto LABEL_72; /*0x78a298*/
  }
  v33 = 0; /*0x78a2f1*/
  if ( v30 < (int)g_WOL_State ) /*0x78a2f5*/
    v33 = &g_WOL_ConnectionFlags[3 * v30]; /*0x78a303*/
  nextArrayIndex = v33->nextArrayIndex; /*0x78a306*/
  *(_DWORD *)&aP0_16[12] = 0; /*0x78a30b*/
  aP0_16.abstractFlags = 0; /*0x78a310*/
  LOWORD(aP0_16.uniqueId) = 0; /*0x78a318*/
  v35 = ntohl(nextArrayIndex); /*0x78a31d*/
  aP0_16[15] = v35; /*0x78a326*/
  aP0_16[12] = HIBYTE(v35); /*0x78a332*/
  aP0_16[14] = BYTE1(v35); /*0x78a336*/
  aP0_16[13] = BYTE2(v35); /*0x78a34b*/
  NetworkAddress::Assign(&aP0_52, &aP0_16.abstractFlags, (IUnknown *)&aP0_16[12], 0); /*0x78a34f*/
  v36 = (_DWORD *)(ebp27 + 40); /*0x78a354*/
  v37 = aP0_56; /*0x78a35b*/
  v38 = aP0_60; /*0x78a35f*/
  *v36 = aP0_52; /*0x78a363*/
  v36[1] = v37; /*0x78a366*/
  v36[2] = v38; /*0x78a369*/
  if ( *(_DWORD *)&HouseClass_Player[29944] != 3 /*0x78a386*/
    && *(_DWORD *)&HouseClass_Player[29944] != 1
    && *(_DWORD *)&HouseClass_Player[29944] != 2 )
  {
    v39 = Dialog::GetCurrent(); /*0x78a38c*/
    v40 = v39; /*0x78a391*/
    if ( v39 ) /*0x78a395*/
    {
      RenderGadgetClassAnimation(v39, 0); /*0x78a39b*/
      Screen::Capture(1, 0, (unsigned __int8)v29, (int)v36); /*0x78a3a4*/
    }
    Screen::Capture(1, 0, (unsigned __int8)v29, (int)v36); /*0x78a3ad*/
    LoadingScreen::Init(); /*0x78a3b2*/
    Dialog = (HWND)CreateDialog(0xC2u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))WOLobby::SetupDlgProc, 0); /*0x78a3ce*/
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player[29936] + 156))(*(_DWORD *)&HouseClass_Player[29936]); /*0x78a3d2*/
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player[29936] + 32))(*(_DWORD *)&HouseClass_Player[29936]); /*0x78a3e0*/
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player[29936] + 24))(*(_DWORD *)&HouseClass_Player[29936]); /*0x78a3eb*/
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player[29936] + 124))(*(_DWORD *)&HouseClass_Player[29936]); /*0x78a3f6*/
    ShowWindow(Dialog, 1); /*0x78a402*/
    if ( v40 ) /*0x78a406*/
      ShowWindow(v40, 0); /*0x78a40b*/
  }
  DeleteAndZero::Alt((void **)&aP0_16.nextArrayIndex); /*0x78a411*/
  v45.vfptr = &vt_rc_ptr_PlayerProfile; /*0x78a41a*/
  ComPtr::Release(&v45); /*0x78a422*/
  DeleteAndZero::Alt((void **)&v44); /*0x78a42b*/
  aP0_4.vfptr = &vt_WonlineStringDialogControl; /*0x78a434*/
  DeleteAndZero((int)&aP0_16); /*0x78a43c*/
  aP0_4.vfptr = &off_7F7624; /*0x78a445*/
  OwnerDrawControl::InitVtable(&aP0_4); /*0x78a44d*/
  DeleteAndZero((int)&v42); /*0x78a456*/
  return 1; /*0x789c37*/
}
} // namespace gamemd

// 0x78D120
namespace gamemd {
Coord * * OnlineLobbyDlgProcWOL(HWND hDlg, unsigned int a2, int a3, HWND hWnd)
{
{
  int result; // eax
  HWND v5; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND v11; // eax
  HWND v12; // eax
  HWND v13; // eax
  HWND v14; // eax
  Coord *v15; // esi
  HWND v16; // eax
  HWND v17; // eax
  CampaignScore *v21; // eax
  wchar_t *v22; // eax
  wchar_t *StringCSF; // eax
  HWND v24; // esi
  int X; // esi
  CampaignScore *v27; // eax
  wchar_t *eax60; // eax
  HWND v28; // eax
  HWND v29; // eax
  HWND v32; // eax
  HWND v33; // eax
  HWND v34; // eax
  HWND DlgItem; // eax
  CampaignScore *v38; // [esp+0h] [ebp-108h]
  wchar_t *v39; // [esp+10h] [ebp-F8h] BYREF
  wchar_t *v40; // [esp+14h] [ebp-F4h] BYREF
  char lParam[9]; // [esp+18h] [ebp-F0h] BYREF
  char v42; // [esp+21h] [ebp-E7h]
  LPARAM v44[27]; // [esp+30h] [ebp-D8h] BYREF
  char v45[108]; // [esp+9Ch] [ebp-6Ch] BYREF

  result = BaseDialogProc((SkirmishDialog *)hDlg, a2, a3, (unsigned int)hWnd); /*0x78d14c*/
  if ( result ) /*0x78d153*/
    return result; /*0x78d153*/
  if ( a2 > 0x497 ) /*0x78d15f*/
  {
    if ( a2 == 1242 ) /*0x78d92d*/
    {
      DlgItem = GetDlgItem(hDlg, 1474); /*0x78da0d*/
      PostMessageA(DlgItem, 0xF5u, 0, 0); /*0x78da14*/
      return 0; /*0x78da14*/
    }
    if ( a2 != 1243 ) /*0x78d934*/
      return 0; /*0x78d934*/
    NavigateDialogTab(hWnd, a3 != 0); /*0x78d941*/
    if ( hWnd != GetDlgItem(hDlg, 1473) ) /*0x78d956*/
      return 0; /*0x78d956*/
    if ( *(&g_MatrixTransformState + 2263) ) /*0x78d963*/
    {
      SendMessageA(hWnd, 0x4B5u, 0xAu, (LPARAM)lParam); /*0x78d972*/
      v42 = 0; /*0x78d986*/
      memset(v45, 0, sizeof(v45)); /*0x78d98b*/
      strcpy(&v45[36], lParam); /*0x78d9b1*/
      (*(void (__stdcall **)(_DWORD, char *))((*(&g_MatrixTransformState + 2263))->X + 96))( /*0x78d9c3*/
        *(&g_MatrixTransformState + 2263),
        v45);
    }
    v34 = GetDlgItem(hDlg, 1480); /*0x78d9cc*/
    if ( v34 ) /*0x78d9d0*/
      SendMessageA(v34, 0x4B2u, 0, (LPARAM)&stru_87C374[46016]); /*0x78d9df*/
    dword_B77E8C = 1344; /*0x78d9e8*/
    return 0; /*0x78d9fb*/
  }
  switch ( a2 ) /*0x78d165*/
  {
    case 0x497u: /*0x78d165*/
      SendDlgItemMessageA(hDlg, 1473, 0xC5u, 9u, 0); /*0x78d864*/
      v28 = GetDlgItem(hDlg, 1473); /*0x78d876*/
      SendMessageA(v28, 0x4D1u, 1u, 0); /*0x78d888*/
      v29 = GetDlgItem(hDlg, 1473); /*0x78d890*/
      SendMessageA(v29, 0x4B4u, 0, (LPARAM)&stru_87C374[56304]); /*0x78d89f*/
      int v30 = dword_B76480; /*0x78d8a6*/
      if ( dword_B76478 != (CellStruct *)-1 ) /*0x78d8af*/
      {
        signed int v31 = Timer::GetTicks() - (_DWORD)dword_B76478; /*0x78d8bb*/
        if ( v31 >= v30 ) /*0x78d8c3*/
          return 0; /*0x78d8c3*/
        v30 -= v31; /*0x78d8c9*/
      }
      if ( v30 > 0 ) /*0x78d8cd*/
      {
        v32 = GetDlgItem(hDlg, 1473); /*0x78d8d9*/
        SendMessageA(v32, 0x4B4u, 0, (LPARAM)byte_B77E30); /*0x78d8e8*/
        v33 = GetDlgItem(hDlg, 1344); /*0x78d8f0*/
        SetFocus(v33); /*0x78d8f3*/
        dword_B76478 = (CellStruct *)Timer::GetTicks(); /*0x78d902*/
  int v43; // [esp+28h] [ebp-E0h]
        dword_B7647C = v43; /*0x78d90f*/
        dword_B76480 = 0; /*0x78d915*/
        return 0; /*0x78d924*/
      }
      return 0; /*0x78d8cd*/
    case 0xFu: /*0x78d165*/
      Dialog::DrawBackground(hDlg); /*0x78d831*/
      Dialog::StopBink(hDlg); /*0x78d838*/
      ValidateRect(hDlg, 0); /*0x78d840*/
      return 0; /*0x78d852*/
    case 0x2Bu: /*0x78d165*/
      Dialog::Resize((char *)hWnd); /*0x78d818*/
      return 1; /*0x78d82c*/
  }
  if ( a2 != 273 ) /*0x78d183*/
    return 0; /*0x78d183*/
  if ( (unsigned __int16)a3 > 0x5C2u ) /*0x78d195*/
  {
    if ( (unsigned __int16)a3 == 1475 ) /*0x78d62e*/
    {
      if ( !*(&g_MatrixTransformState + 2263) ) /*0x78d773*/
        return 0; /*0x78d773*/
      memset(v44, 0, 0x40u); /*0x78d784*/
      SendDlgItemMessageA(hDlg, 1473, 0x4B5u, 0x3Cu, (LPARAM)v44); /*0x78d798*/
      BYTE1(v44[2]) = 0; /*0x78d7a7*/
      strcpy(&v45[36], (const char *)v44); /*0x78d7c2*/
      if ( strlen(&v45[36]) ) /*0x78d7d4*/
      {
        (*(void (__stdcall **)(_DWORD, char *))((*(&g_MatrixTransformState + 2263))->X + 96))( /*0x78d7ee*/
          *(&g_MatrixTransformState + 2263),
          v45);
        return 0; /*0x78d7fd*/
      }
      StringCSF = GetStringCSF( /*0x78d811*/
                    (wchar_t *)&stru_830620[3984],
                    0,
                    (CampaignScore *)g_Str_File_wonline_cpp,
                    14080);
    }
    else
    {
      if ( (unsigned __int16)a3 != 1543 || !*(&g_MatrixTransformState + 2263) ) /*0x78d644*/
        return 0; /*0x78d644*/
      if ( dword_B77DE4 ) /*0x78d651*/
      {
        unknown_libname_74(&v39); /*0x78d687*/
        v24 = GetDlgItem(hDlg, 1344); /*0x78d698*/
        GetEditControlText(v24, (void **)&v39); /*0x78d6a0*/
        SendMessageA(v24, 0x4B2u, 0, (LPARAM)&stru_87C374[46016]); /*0x78d6b2*/
        SetFocus(v24); /*0x78d6b9*/
        strcpy(&v45[36], &g_INI_Key_Lighting[36]); /*0x78d6df*/
        if ( WideString::Length((const wchar_t **)&v39) ) /*0x78d6ec*/
        {
          X = (*(&g_MatrixTransformState + 2263))->X; /*0x78d6fb*/
          v27 = WideString::GetOrEmpty(&v39); /*0x78d701*/
          (*(void (__stdcall **)(_DWORD, char *, CampaignScore *))(X + 248))( /*0x78d715*/
            *(&g_MatrixTransformState + 2263),
            v45,
            v27);
        }
        else
        {
          eax60 = GetStringCSF(g_Str_TXT_ENTER_MESSAGE, 0, (CampaignScore *)g_Str_File_wonline_cpp, 14195); /*0x78d744*/
          Dialog::ShowStatusText((SessionClass *)0xFFFFFFFF, (CampaignScore *)eax60, v38); /*0x78d74c*/
        }
        DeleteAndZero::Alt((void **)&v39); /*0x78d71f*/
        return 0; /*0x78d730*/
      }
      StringCSF = GetStringCSF( /*0x78d664*/
                    (wchar_t *)&stru_84B8E0.customSound_controller[4],
                    0,
                    (CampaignScore *)g_Str_File_wonline_cpp,
                    14176);
    }
    Dialog::ShowStatusText((SessionClass *)0xFFFFFFFF, (CampaignScore *)StringCSF, v38); /*0x78d66c*/
    return 0; /*0x78d680*/
  }
  if ( (unsigned __int16)a3 == 1474 ) /*0x78d19b*/
  {
    if ( dword_B77E8C == 1473 ) /*0x78d3aa*/
    {
      if ( *(&g_MatrixTransformState + 2263) ) /*0x78d3b7*/
      {
        v13 = GetDlgItem(hDlg, 1473); /*0x78d3bf*/
        if ( v13 ) /*0x78d3c3*/
        {
          SendMessageA(v13, 0x4B5u, 0xAu, (LPARAM)lParam); /*0x78d3d2*/
          v42 = 0; /*0x78d3e6*/
          memset(v45, 0, sizeof(v45)); /*0x78d3eb*/
          strcpy(&v45[36], lParam); /*0x78d411*/
          (*(void (__stdcall **)(_DWORD, char *))((*(&g_MatrixTransformState + 2263))->X + 96))( /*0x78d423*/
            *(&g_MatrixTransformState + 2263),
            v45);
        }
      }
      v14 = GetDlgItem(hDlg, 1480); /*0x78d42c*/
      if ( v14 ) /*0x78d430*/
        SendMessageA(v14, 0x4B2u, 0, (LPARAM)&stru_87C374[46016]); /*0x78d43f*/
    }
    dword_B77E8C = 1474; /*0x78d44b*/
    v15 = GetDlgItem(hDlg, 1344); /*0x78d457*/
    ReadChatMessage(&v40, v15); /*0x78d45f*/
    SendMessageA(v15, 0x4B2u, 0, (LPARAM)&stru_87C374[46016]); /*0x78d471*/
    v16 = GetDlgItem(hDlg, 1474); /*0x78d47f*/
    EnableWindow(v16, 0); /*0x78d482*/
    SetFocus(v15); /*0x78d489*/
    if ( !*(&g_MatrixTransformState + 2263) ) /*0x78d496*/
    {
      DeleteAndZero::Alt((void **)&v40); /*0x78d49c*/
      return 0; /*0x78d4ad*/
    }
    unknown_libname_73(&v39); /*0x78d4b4*/
    v17 = GetDlgItem(hDlg, 1473); /*0x78d4c3*/
    GetDialogText(v17, (void **)&v39); /*0x78d4c9*/
    String::CopyTruncated((void **)&v39, 9u); /*0x78d4d4*/
    strcpy((char *)&v44[9], String::GetOrEmpty((char **)&v39)); /*0x78d4fc*/
    if ( WideString::Length((const wchar_t **)&v40) && strlen((const char *)&v44[9]) ) /*0x78d51a*/
    {
      if ( !*(_DWORD *)&HouseClass_Player[30700] /*0x78d53c*/
  int v18; // esi
        || (v18 = 0, *(int *)&HouseClass_Player[40248] <= 0) )
      {
LABEL_44:
        Coord *v20 = (*(&g_MatrixTransformState + 2263))->X; /*0x78d568*/
        v21 = WideString::GetOrEmpty(&v40); /*0x78d573*/
        v20->vt_slot_248(/*0x78d585*/
          *(&g_MatrixTransformState + 2263), v44, v21);
        WideString::GetOrEmpty(&v40); /*0x78d58f*/
        Dialog::ShowStatusText( /*0x78d5a7*/
          (SessionClass *)Math::InitDegToRad,
          (CampaignScore *)&stru_84B8E0.health,
          *(CampaignScore **)g_WebBrowser[0]);
LABEL_50:
        DeleteAndZero((int)&v39); /*0x78d608*/
        DeleteAndZero::Alt((void **)&v40); /*0x78d615*/
        return 0; /*0x78d626*/
      }
      while ( 1 ) /*0x78d54c*/
      {
        char * v19 = ToWideStringChar(*(IUnknown **)(*(_DWORD *)&HouseClass_Player[40236] + 4 * v18)); /*0x78d54c*/
        if ( !_strcmpi(v19, &v44[9]) ) /*0x78d552*/
          break; /*0x78d552*/
        if ( ++v18 >= *(int *)&HouseClass_Player[40248] ) /*0x78d566*/
          goto LABEL_44; /*0x78d566*/
      }
      v22 = GetStringCSF((wchar_t *)&stru_84B8E0.fallRate, 0, (CampaignScore *)g_Str_File_wonline_cpp, 14150); /*0x78d5c2*/
    }
    else if ( strlen((const char *)&v44[9]) ) /*0x78d5c8*/
    {
      v22 = GetStringCSF(g_Str_TXT_ENTER_MESSAGE, 0, (CampaignScore *)g_Str_File_wonline_cpp, 14164); /*0x78d5f8*/
    }
    else
    {
      v22 = GetStringCSF((wchar_t *)&stru_830620[3984], 0, (CampaignScore *)g_Str_File_wonline_cpp, 14162); /*0x78d5e5*/
    }
    Dialog::ShowStatusText((SessionClass *)0xFFFFFFFF, (CampaignScore *)v22, v38); /*0x78d600*/
    goto LABEL_50; /*0x78d600*/
  }
  if ( (unsigned __int16)a3 == 2 ) /*0x78d1a4*/
  {
    CloseDialog(hDlg, 2); /*0x78d386*/
    return 0; /*0x78d397*/
  }
  if ( (unsigned __int16)a3 != 1344 ) /*0x78d1af*/
  {
    if ( (unsigned __int16)a3 == 1473 ) /*0x78d1ba*/
    {
      unknown_libname_73(&v40); /*0x78d1c4*/
      GetDialogText(hWnd, (void **)&v40); /*0x78d1cf*/
      unknown_libname_74(&v39); /*0x78d1d8*/
      v5 = GetDlgItem(hDlg, 1344); /*0x78d1ed*/
      GetEditControlText(v5, (void **)&v39); /*0x78d1f3*/
      BOOL v6 = String::Length((const char **)&v40) && WideString::Length((const wchar_t **)&v39); /*0x78d212*/
      BOOL v36 = v6; /*0x78d21b*/
      v7 = GetDlgItem(hDlg, 1474); /*0x78d222*/
      EnableWindow(v7, v36); /*0x78d225*/
      dword_B77E8C = 1473; /*0x78d231*/
      v8 = GetDlgItem(hDlg, 1480); /*0x78d23b*/
      if ( v8 ) /*0x78d23f*/
        SendMessageA(v8, 0x4B2u, 0, (LPARAM)&stru_87C374[46016]); /*0x78d24e*/
      DeleteAndZero::Alt((void **)&v39); /*0x78d258*/
      DeleteAndZero((int)&v40); /*0x78d261*/
      return 0; /*0x78d272*/
    }
    return 0; /*0x78da1a*/
  }
  ReadChatMessage(&v39, hWnd); /*0x78d27b*/
  unknown_libname_73(&v40); /*0x78d284*/
  v9 = GetDlgItem(hDlg, 1473); /*0x78d299*/
  GetDialogText(v9, (void **)&v40); /*0x78d29f*/
  BOOL v10 = WideString::Length((const wchar_t **)&v39) && String::Length((const char **)&v40); /*0x78d2be*/
  BOOL v37 = v10; /*0x78d2c7*/
  v11 = GetDlgItem(hDlg, 1474); /*0x78d2ce*/
  EnableWindow(v11, v37); /*0x78d2d1*/
  if ( dword_B77E8C == 1473 ) /*0x78d2e1*/
  {
    if ( *(&g_MatrixTransformState + 2263) ) /*0x78d2ea*/
    {
      memset(v44, 0, sizeof(v44)); /*0x78d2f7*/
      strcpy((char *)&v44[9], String::GetOrEmpty((char **)&v40)); /*0x78d320*/
      (*(void (__stdcall **)(_DWORD, LPARAM *))((*(&g_MatrixTransformState + 2263))->X + 96))( /*0x78d332*/
        *(&g_MatrixTransformState + 2263),
        v44);
    }
    v12 = GetDlgItem(hDlg, 1480); /*0x78d33b*/
    if ( v12 ) /*0x78d33f*/
      SendMessageA(v12, 0x4B2u, 0, (LPARAM)&stru_87C374[46016]); /*0x78d34e*/
  }
  dword_B77E8C = 1344; /*0x78d358*/
  DeleteAndZero((int)&v40); /*0x78d362*/
  DeleteAndZero::Alt((void **)&v39); /*0x78d36b*/
  return 0; /*0x78d266*/
}
} // namespace gamemd

// 0x78DA30
namespace gamemd {
Coord * * sub_78DA30(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
{
  int result; // eax
  wchar_t *v5; // eax
  if ( a2 == 272 ) /*0x78da46*/
  {
    if ( a4 ) /*0x78da4a*/
      SetWindowLongA(hWnd, 8, *(_DWORD *)(a4 + 4)); /*0x78da53*/
  }
  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x78da63*/
  if ( !result ) /*0x78da6a*/
  {
    if ( a2 > 0x110 ) /*0x78da76*/
    {
      switch ( a2 ) /*0x78daca*/
      {
        case 0x111u: /*0x78daca*/
          if ( (unsigned __int16)a3 != 2 ) /*0x78db34*/
            return 0; /*0x78db3c*/
          (*(void (__stdcall **)(LPVOID))(*(_DWORD *)DataGlobal_AC1174 + 16))(DataGlobal_AC1174); /*0x78db47*/
          break;
        case 0x5F4u: /*0x78daca*/
          CloseDialog(hWnd, 1); /*0x78db1a*/
          return 1; /*0x78db28*/
        case 0x5F5u: /*0x78daca*/
          v5 = (wchar_t *)GetStringCSF(aTxtDownloadFai, (int)g_Str_File_wonline_cpp, 14681); /*0x78daf8*/
          ShowDialogConfirm(v5, 0, (int)GameLoop::Thunk, 0); /*0x78db01*/
          (*(void (__stdcall **)(LPVOID))(*(_DWORD *)DataGlobal_AC1174 + 16))(DataGlobal_AC1174); /*0x78db0e*/
          break;
        default:
          return 0; /*0x78dadd*/
      }
      CloseDialog(hWnd, 2); /*0x78db51*/
    }
    else if ( a2 != 272 ) /*0x78da78*/
    {
      if ( a2 == 15 ) /*0x78da81*/
      {
        Dialog::DrawBackground(hWnd); /*0x78daa6*/
        Dialog::StopBink(hWnd); /*0x78daad*/
        ValidateRect(hWnd, 0); /*0x78dab5*/
        return 0; /*0x78dac1*/
      }
      if ( a2 != 20 ) /*0x78da86*/
      {
        if ( a2 == 43 ) /*0x78da8f*/
        {
          Dialog::Resize(a4); /*0x78da93*/
          return 1; /*0x78daa1*/
        }
        return 0; /*0x78da8f*/
      }
    }
    return 1; /*0x78db56*/
  }
  return result; /*0x78da98*/
}
} // namespace gamemd

// 0x78E230
namespace gamemd {
ObjectClass * * sub_78E230(HWND hWnd, UINT a2, WPARAM a3, HWND hCtl)
{
{
  HWND v5; // eax
  HWND v6; // eax
  HWND v31; // eax
  HWND v33; // eax
  HWND v35; // eax
  HWND DlgItem; // eax
  HWND v37; // eax
  HWND v38; // eax
  HWND v39; // eax
  MultiplayerGameMode *v40; // edi
  wchar_t *String; // eax
  wchar_t *v42; // eax
  wchar_t *v43; // eax
  wchar_t *v44; // eax
  wchar_t *v45; // eax
  wchar_t *v46; // eax
  wchar_t *v47; // eax
  wchar_t *v48; // eax
  wchar_t *v49; // eax
  wchar_t *v50; // eax
  wchar_t *v51; // eax
  wchar_t *v52; // eax
  if ( a2 > 0x111 ) /*0x78e23b*/
  {
    if ( a2 == 1175 ) /*0x78e6fd*/
    {
      DlgItem = GetDlgItem(hWnd, 1574); /*0x78e735*/
      SendMessageA(DlgItem, 0x4D1u, 1u, 0); /*0x78e747*/
      v37 = GetDlgItem(hWnd, 1583); /*0x78e758*/
      SendMessageA(v37, 0xC5u, 2u, 0); /*0x78e75b*/
      v38 = GetDlgItem(hWnd, 1584); /*0x78e76c*/
      SendMessageA(v38, 0xC5u, 4u, 0); /*0x78e76f*/
      v39 = GetDlgItem(hWnd, 1583); /*0x78e777*/
      SetFocus(v39); /*0x78e77a*/
      v40 = GetDlgItem(hWnd, 1582); /*0x78e788*/
      ListBox::Clear(v40); /*0x78e78c*/
      String = GetStringCSF(unk_84A0C4, 0, g_Str_File_wonline_cpp, 15162); /*0x78e7a2*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)String); /*0x78e7b0*/
      v42 = GetStringCSF(unk_84A0AC, 0, g_Str_File_wonline_cpp, 15163); /*0x78e7c3*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v42); /*0x78e7d1*/
      v43 = GetStringCSF(unk_84A098, 0, g_Str_File_wonline_cpp, 15164); /*0x78e7e4*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v43); /*0x78e7f2*/
      v44 = GetStringCSF(unk_84A084, 0, g_Str_File_wonline_cpp, 15165); /*0x78e805*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v44); /*0x78e813*/
      v45 = GetStringCSF(unk_84A074, 0, g_Str_File_wonline_cpp, 15166); /*0x78e826*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v45); /*0x78e834*/
      v46 = GetStringCSF(unk_84A060, 0, g_Str_File_wonline_cpp, 15167); /*0x78e847*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v46); /*0x78e855*/
      v47 = GetStringCSF(unk_84A04C, 0, g_Str_File_wonline_cpp, 15168); /*0x78e868*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v47); /*0x78e876*/
      v48 = GetStringCSF(unk_84A038, 0, g_Str_File_wonline_cpp, 15169); /*0x78e889*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v48); /*0x78e897*/
      v49 = GetStringCSF(g_Str_TXT_SEPTEMBER, 0, g_Str_File_wonline_cpp, 15170); /*0x78e8aa*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v49); /*0x78e8b8*/
      v50 = GetStringCSF(g_Str_TXT_OCTOBER, 0, g_Str_File_wonline_cpp, 15171); /*0x78e8cb*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v50); /*0x78e8d9*/
      v51 = GetStringCSF(unk_849FF4, 0, g_Str_File_wonline_cpp, 15172); /*0x78e8ec*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v51); /*0x78e8fa*/
      v52 = GetStringCSF(unk_849FDC, 0, g_Str_File_wonline_cpp, 15173); /*0x78e90d*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v52); /*0x78e91b*/
      SendDlgItemMessageA(hWnd, 1582, 0x14Eu, 0, 0); /*0x78e92c*/
      SendMessageA(hWnd, 0x4A9u, 0, 1); /*0x78e93c*/
      return 0; /*0x78e940*/
    }
    else
    {
      if ( a2 != 1243 ) /*0x78e702*/
        return 0; /*0x78e708*/
      NavigateDialogTab(hCtl, a3 != 0); /*0x78e718*/
      return 0; /*0x78e71e*/
    }
  }
  else
  {
    if ( a2 != 273 ) /*0x78e241*/
    {
      if ( a2 == 15 ) /*0x78e246*/
      {
        Dialog::DrawBackground(hWnd); /*0x78e26a*/
        Dialog::StopBink(hWnd); /*0x78e271*/
        ValidateRect(hWnd, 0); /*0x78e279*/
        return 0; /*0x78e283*/
      }
      if ( a2 == 43 ) /*0x78e24b*/
      {
        Dialog::Resize((char *)hCtl); /*0x78e255*/
        return 1; /*0x78e261*/
      }
      return 0; /*0x78e24b*/
    }
    if ( (unsigned __int16)a3 == 1 ) /*0x78e290*/
    {
      DeleteAndZero::Alt2((void **)&DataGlobal_B76E34); /*0x78e2d0*/
      v5 = GetDlgItem(hWnd, 1574); /*0x78e2e5*/
      if ( v5 ) /*0x78e2e9*/
        GetDialogText(v5, (void **)&DataGlobal_B76E34); /*0x78e2f2*/
      DeleteAndZero::Alt2((void **)&DataGlobal_B73B30); /*0x78e2fc*/
      v6 = GetDlgItem(hWnd, 1582); /*0x78e307*/
      if ( v6 /*0x78e346*/
        && (GetDialogText(v6, (void **)&DataGlobal_B73B30),
  char *v7; // eax
            v7 = (char *)GetStringCSF(unk_84A0C4, 0, g_Str_File_wonline_cpp, 15071),
  char *v53; // [esp-4h] [ebp-Ch]
            v53 = ToWideStringChar(v7),
  char *v8; // eax
            v8 = String::GetOrEmpty(&DataGlobal_B73B30),
            _strcmpi(v8, v53)) )
      {
        char * v9 = (char *)GetStringCSF(unk_84A0AC, 0, g_Str_File_wonline_cpp, 15073); /*0x78e367*/
        char * v54 = ToWideStringChar(v9); /*0x78e373*/
        char * v10 = String::GetOrEmpty(&DataGlobal_B73B30); /*0x78e379*/
        if ( _strcmpi(v10, v54) ) /*0x78e37f*/
        {
          char * v11 = (char *)GetStringCSF(unk_84A098, 0, g_Str_File_wonline_cpp, 15075); /*0x78e3ab*/
          char * v55 = ToWideStringChar(v11); /*0x78e3b7*/
          char * v12 = String::GetOrEmpty(&DataGlobal_B73B30); /*0x78e3bd*/
          if ( _strcmpi(v12, v55) ) /*0x78e3c3*/
          {
            char * v13 = (char *)GetStringCSF(unk_84A084, 0, g_Str_File_wonline_cpp, 15077); /*0x78e3ef*/
            char * v56 = ToWideStringChar(v13); /*0x78e3fb*/
            char * v14 = String::GetOrEmpty(&DataGlobal_B73B30); /*0x78e401*/
            if ( _strcmpi(v14, v56) ) /*0x78e407*/
            {
              char * v15 = (char *)GetStringCSF(unk_84A074, 0, g_Str_File_wonline_cpp, 15079); /*0x78e433*/
              char * v57 = ToWideStringChar(v15); /*0x78e43f*/
              char * v16 = String::GetOrEmpty(&DataGlobal_B73B30); /*0x78e445*/
              if ( _strcmpi(v16, v57) ) /*0x78e44b*/
              {
                char * v17 = (char *)GetStringCSF(unk_84A060, 0, g_Str_File_wonline_cpp, 15081); /*0x78e477*/
                char * v58 = ToWideStringChar(v17); /*0x78e483*/
                char * v18 = String::GetOrEmpty(&DataGlobal_B73B30); /*0x78e489*/
                if ( _strcmpi(v18, v58) ) /*0x78e48f*/
                {
                  char * v19 = (char *)GetStringCSF(unk_84A04C, 0, g_Str_File_wonline_cpp, 15083); /*0x78e4bb*/
                  char * v59 = ToWideStringChar(v19); /*0x78e4c7*/
                  char * v20 = String::GetOrEmpty(&DataGlobal_B73B30); /*0x78e4cd*/
                  if ( _strcmpi(v20, v59) ) /*0x78e4d3*/
                  {
                    char * v21 = (char *)GetStringCSF(unk_84A038, 0, g_Str_File_wonline_cpp, 15085); /*0x78e4ff*/
                    char * v60 = ToWideStringChar(v21); /*0x78e50b*/
                    char * v22 = String::GetOrEmpty(&DataGlobal_B73B30); /*0x78e511*/
                    if ( _strcmpi(v22, v60) ) /*0x78e517*/
                    {
                      char * v23 = (char *)GetStringCSF(g_Str_TXT_SEPTEMBER, 0, g_Str_File_wonline_cpp, 15087); /*0x78e543*/
                      char * v61 = ToWideStringChar(v23); /*0x78e54f*/
                      char * v24 = String::GetOrEmpty(&DataGlobal_B73B30); /*0x78e555*/
                      if ( _strcmpi(v24, v61) ) /*0x78e55b*/
                      {
                        char * v25 = (char *)GetStringCSF(g_Str_TXT_OCTOBER, 0, g_Str_File_wonline_cpp, 15089); /*0x78e587*/
                        char * v62 = ToWideStringChar(v25); /*0x78e593*/
                        char * v26 = String::GetOrEmpty(&DataGlobal_B73B30); /*0x78e599*/
                        if ( _strcmpi(v26, v62) ) /*0x78e59f*/
                        {
                          char * v27 = (char *)GetStringCSF(unk_849FF4, 0, g_Str_File_wonline_cpp, 15091); /*0x78e5cb*/
                          char * v63 = ToWideStringChar(v27); /*0x78e5d7*/
                          char * v28 = String::GetOrEmpty(&DataGlobal_B73B30); /*0x78e5dd*/
                          if ( _strcmpi(v28, v63) ) /*0x78e5e3*/
                          {
                            char * v29 = (char *)GetStringCSF(unk_849FDC, 0, g_Str_File_wonline_cpp, 15093); /*0x78e60c*/
                            char * v64 = ToWideStringChar(v29); /*0x78e618*/
                            char * v30 = String::GetOrEmpty(&DataGlobal_B73B30); /*0x78e61e*/
                            if ( !_strcmpi(v30, v64) ) /*0x78e624*/
                              dword_B73A1C = 11; /*0x78e630*/
                          }
                          else
                          {
                            dword_B73A1C = 10; /*0x78e5ef*/
                          }
                        }
                        else
                        {
                          dword_B73A1C = 9; /*0x78e5ab*/
                        }
                      }
                      else
                      {
                        dword_B73A1C = 8; /*0x78e567*/
                      }
                    }
                    else
                    {
                      dword_B73A1C = 7; /*0x78e523*/
                    }
                  }
                  else
                  {
                    dword_B73A1C = 6; /*0x78e4df*/
                  }
                }
                else
                {
                  dword_B73A1C = 5; /*0x78e49b*/
                }
              }
              else
              {
                dword_B73A1C = 4; /*0x78e457*/
              }
            }
            else
            {
              dword_B73A1C = 3; /*0x78e413*/
            }
          }
          else
          {
            dword_B73A1C = 2; /*0x78e3cf*/
          }
        }
        else
        {
          dword_B73A1C = 1; /*0x78e38b*/
        }
      }
      else
      {
        dword_B73A1C = 0; /*0x78e63c*/
      }
      DeleteAndZero::Alt2((void **)&dword_B7622C); /*0x78e64b*/
      v31 = GetDlgItem(hWnd, 1583); /*0x78e656*/
      if ( v31 ) /*0x78e65a*/
      {
        GetDialogText(v31, (void **)&dword_B7622C); /*0x78e663*/
        char * v32 = String::GetOrEmpty(&dword_B7622C); /*0x78e66d*/
        dword_B73AB8 = atol(v32); /*0x78e67b*/
      }
      DeleteAndZero::Alt2((void **)&dword_B76908); /*0x78e685*/
      v33 = GetDlgItem(hWnd, 1584); /*0x78e690*/
      if ( v33 ) /*0x78e694*/
      {
        GetDialogText(v33, (void **)&dword_B76908); /*0x78e69d*/
        char * v34 = String::GetOrEmpty(&dword_B76908); /*0x78e6a7*/
        dword_B7782C = atol(v34); /*0x78e6b5*/
      }
      dword_B76228 = 0; /*0x78e6c0*/
      v35 = GetDlgItem(hWnd, 1585); /*0x78e6ca*/
      if ( v35 ) /*0x78e6ce*/
        dword_B76228 = SendMessageA(v35, 0xF0u, 0, 0); /*0x78e6e0*/
      CloseDialog(hWnd, 1); /*0x78e6ec*/
      return 0; /*0x78e6f2*/
    }
    else if ( (unsigned __int16)a3 == 2 ) /*0x78e293*/
    {
      CloseDialog(hWnd, 2); /*0x78e2bf*/
      return 0; /*0x78e2c5*/
    }
    else
    {
      if ( (unsigned __int16)a3 == 1398 ) /*0x78e29a*/
        OpenURLWOL(aHttpPrivacypol, 0); /*0x78e2aa*/
      return 0; /*0x78e29d*/
    }
  }
}
} // namespace gamemd

// 0x78E950
namespace gamemd {
void WOLobbySmallDlgProc(HWND hWnd, UINT a2, WPARAM a3, HWND hCtl)
{
{
  HWND v6; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND v10; // eax
  HWND DlgItem; // eax
  HWND v12; // eax
  HWND v13; // eax
  HWND v14; // eax
  HWND v15; // eax
  HWND v16; // eax
  HWND v17; // eax
  HWND v18; // eax
  if ( a2 > 0x111 ) /*0x78e95c*/
  {
    if ( a2 == 1175 ) /*0x78ead5*/
    {
      DlgItem = GetDlgItem(hWnd, 1576); /*0x78eb17*/
      SendMessageA(DlgItem, 0x4D1u, 1u, 0); /*0x78eb29*/
      v12 = GetDlgItem(hWnd, 1836); /*0x78eb31*/
      SendMessageA(v12, 0x4D1u, 1u, 0); /*0x78eb3d*/
      v13 = GetDlgItem(hWnd, 1575); /*0x78eb45*/
      SendMessageA(v13, 0x4D1u, 1u, 0); /*0x78eb51*/
      v14 = GetDlgItem(hWnd, 1509); /*0x78eb59*/
      SendMessageA(v14, 0x4D1u, 1u, 0); /*0x78eb65*/
      v15 = GetDlgItem(hWnd, 1576); /*0x78eb76*/
      SendMessageA(v15, 0xC5u, 9u, 0); /*0x78eb79*/
      v16 = GetDlgItem(hWnd, 1836); /*0x78eb8a*/
      SendMessageA(v16, 0xC5u, 8u, 0); /*0x78eb8d*/
      v17 = GetDlgItem(hWnd, 1575); /*0x78eb9e*/
      SendMessageA(v17, 0xC5u, 8u, 0); /*0x78eba1*/
      v18 = GetDlgItem(hWnd, 1576); /*0x78eba9*/
      SetFocus(v18); /*0x78ebac*/
    }
    else if ( a2 == 1243 ) /*0x78eada*/
    {
      ++dword_B77E90; /*0x78eaed*/
      NavigateDialogTab(hCtl, a3 != 0); /*0x78eafa*/
      return 0; /*0x78eb04*/
    }
    return 0; /*0x78eada*/
  }
  if ( a2 != 273 ) /*0x78e962*/
  {
    if ( a2 == 15 ) /*0x78e967*/
    {
      Dialog::DrawBackground(hWnd); /*0x78e98c*/
      Dialog::StopBink(hWnd); /*0x78e993*/
      ValidateRect(hWnd, 0); /*0x78e99b*/
      return 0; /*0x78e9a6*/
    }
    if ( a2 == 43 ) /*0x78e96c*/
    {
      Dialog::Resize((char *)hCtl); /*0x78e976*/
      return 1; /*0x78e983*/
    }
    return 0; /*0x78ebb4*/
  }
  if ( (unsigned __int16)a3 != 1 ) /*0x78e9b3*/
  {
    if ( (unsigned __int16)a3 == 2 ) /*0x78e9b6*/
    {
      CloseDialog(hWnd, 2); /*0x78e9c5*/
      return 0; /*0x78e9cf*/
    }
    return 0; /*0x78e9b6*/
  }
  rc_ptr *v5 = GameSetup::LookupDialogHash(hWnd); /*0x78e9e2*/
  DeleteAndZero::Alt2((void **)&dword_B77794); /*0x78e9e4*/
  v6 = GetDlgItem(hWnd, 1576); /*0x78e9f5*/
  if ( v6 ) /*0x78e9f9*/
    GetDialogText(v6, (void **)&dword_B77794); /*0x78ea02*/
  DeleteAndZero::Alt2((void **)&dword_B778F4); /*0x78ea0c*/
  v7 = GetDlgItem(hWnd, 1836); /*0x78ea17*/
  if ( v7 ) /*0x78ea1b*/
    GetDialogText(v7, (void **)&dword_B778F4); /*0x78ea24*/
  DeleteAndZero::Alt2((void **)&dword_B778FC); /*0x78ea2e*/
  v8 = GetDlgItem(hWnd, 1575); /*0x78ea39*/
  if ( v8 ) /*0x78ea3d*/
    GetDialogText(v8, (void **)&dword_B778FC); /*0x78ea46*/
  if ( v5 == 243 ) /*0x78ea51*/
  {
    DeleteAndZero::Alt2((void **)&dword_B765EC); /*0x78ea58*/
    v9 = GetDlgItem(hWnd, 1509); /*0x78ea63*/
    if ( v9 ) /*0x78ea67*/
    {
      GetDialogText(v9, (void **)&dword_B765EC); /*0x78ea70*/
      CloseDialog(hWnd, 1); /*0x78ea7c*/
      return 0; /*0x78ea86*/
    }
  }
  else if ( v5 == 244 ) /*0x78ea8f*/
  {
    unk_B76C20 = 0; /*0x78ea97*/
    v10 = GetDlgItem(hWnd, 1643); /*0x78eaa1*/
    if ( v10 ) /*0x78eaa5*/
      unk_B76C20 = SendMessageA(v10, 0xF0u, 0, 0); /*0x78eab7*/
  }
  CloseDialog(hWnd, 1); /*0x78eac3*/
  return 0; /*0x78e97b*/
}
} // namespace gamemd

// 0x78EBC0
namespace gamemd {
void GameSetup_DlgProc(HWND hWnd, unsigned int a2, int a3, HWND a4)
{
{
  int result; // eax
  HWND DlgItem; // eax
  HWND v6; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND v10; // eax
  HWND v11; // eax
  HWND v12; // eax
  HWND v13; // eax
  result = BaseDialogProc(hWnd, a2, a3, (unsigned int)a4); /*0x78ebda*/
  if ( !result ) /*0x78ebe3*/
  {
    if ( a2 > 0x111 ) /*0x78ebef*/
    {
      if ( a2 == 1175 ) /*0x78eee5*/
      {
        if ( dword_B76234 ) /*0x78ef16*/
          SendDlgItemMessageA(hWnd, 1525, 0xF1u, 1u, 0); /*0x78ef26*/
        if ( dword_B779F0 ) /*0x78ef2e*/
          SendDlgItemMessageA(hWnd, 1527, 0xF1u, 1u, 0); /*0x78ef3e*/
        if ( dword_B779BC ) /*0x78ef46*/
          SendDlgItemMessageA(hWnd, 1526, 0xF1u, 1u, 0); /*0x78ef56*/
        if ( dword_B7690C ) /*0x78ef5e*/
          SendDlgItemMessageA(hWnd, 1528, 0xF1u, 1u, 0); /*0x78ef6e*/
        if ( dword_B77784 ) /*0x78ef76*/
          SendDlgItemMessageA(hWnd, 1529, 0xF1u, 1u, 0); /*0x78ef86*/
        if ( dword_B779DC ) /*0x78ef8e*/
          SendDlgItemMessageA(hWnd, 1530, 0xF1u, 1u, 0); /*0x78ef9e*/
        if ( dword_B779C0 ) /*0x78efa6*/
          SendDlgItemMessageA(hWnd, 1531, 0xF1u, 1u, 0); /*0x78efb6*/
        if ( byte_B76AF0 ) /*0x78efbe*/
          SendDlgItemMessageA(hWnd, 1908, 0xF1u, 1u, 0); /*0x78efce*/
        if ( DataGlobal_B73AD0 ) /*0x78efd6*/
          SendDlgItemMessageA(hWnd, 1909, 0xF1u, 1u, 0); /*0x78efe6*/
      }
      else if ( a2 == 1261 ) /*0x78eeea*/
      {
        ShowWindow(hWnd, 0); /*0x78eef2*/
        Dialog::InitWindow(hWnd, 1); /*0x78eefb*/
        return 0; /*0x78ef06*/
      }
      return 0; /*0x78eeea*/
    }
    if ( a2 != 273 ) /*0x78ebf5*/
    {
      switch ( a2 ) /*0x78ebfa*/
      {
        case 2u: /*0x78ebfa*/
          g_WTFMode = 1; /*0x78ec41*/
          return 0; /*0x78ec4b*/
        case 0xFu: /*0x78ebfa*/
          Dialog::DrawBackground(hWnd); /*0x78ec21*/
          Dialog::StopBink(hWnd); /*0x78ec28*/
          ValidateRect(hWnd, 0); /*0x78ec2f*/
          return 0; /*0x78ec3b*/
        case 0x2Bu: /*0x78ebfa*/
          Dialog::Resize((char *)a4); /*0x78ec0e*/
          return 1; /*0x78ec1c*/
      }
      return 0; /*0x78efe8*/
    }
    if ( (unsigned __int16)a3 > 0x5F8u ) /*0x78ec5a*/
    {
      if ( (unsigned __int16)a3 == 1594 ) /*0x78ee95*/
      {
        RenderGadgetClassAnimation(hWnd, 0); /*0x78ee9f*/
        Screen::Capture(1, 0, 0, a3); /*0x78eea8*/
        g_WTFMode = 0; /*0x78eead*/
        DlgProcGameSetup_Setup(); /*0x78eeb3*/
        ShowAudioSettingsDialog(&a4); /*0x78eebc*/
        ShowWindow(hWnd, 5); /*0x78eec4*/
        Dialog::InitWindow(hWnd, 0); /*0x78eecc*/
        DlgProcGameSetup_Setup_72B930(); /*0x78eed1*/
        return 0; /*0x78eedc*/
      }
      return 0; /*0x78ee95*/
    }
    if ( (unsigned __int16)a3 == 1528 ) /*0x78ec60*/
    {
      if ( HIWORD(a3) <= 1u ) /*0x78edfc*/
      {
        if ( SendMessageA(a4, 0xF0u, 0, 0) != 1 ) /*0x78ee21*/
        {
          Theme::QueueSong((int)&g_BuildingTypeClass_Count, -3); /*0x78ee82*/
          return 0; /*0x78ee8d*/
        }
        if ( !Theme::IsPlaying((int)&g_BuildingTypeClass_Count) ) /*0x78ee28*/
          goto LABEL_37; /*0x78ee28*/
        AbstractClass *v14 = dword_A83D14; /*0x78ee51*/
        if ( dword_A83D14 == -1 ) /*0x78ee5a*/
          v14 = dword_A83D18; /*0x78ee5c*/
        if ( v14 == StringList::Find(&g_BuildingTypeClass_Count, g_INI_Key_INTRO) ) /*0x78ee73*/
        {
LABEL_37:
          Theme::Stop(&g_BuildingTypeClass_Count, 0); /*0x78ee37*/
          Theme::QueueSong((int)&g_BuildingTypeClass_Count, -2); /*0x78ee43*/
          return 0; /*0x78ee4e*/
        }
      }
      return 0; /*0x78ee73*/
    }
    if ( (unsigned __int16)a3 != 1 ) /*0x78ec67*/
    {
      if ( (unsigned __int16)a3 == 2 ) /*0x78ec6a*/
      {
        __3_YAXPAX_Z(dword_B77E98); /*0x78ec77*/
        dword_B77E98 = 0; /*0x78ec86*/
        CloseDialog(hWnd, 2); /*0x78ec8c*/
        return 0; /*0x78ec97*/
      }
      return 0; /*0x78ec6a*/
    }
    dword_B76474 = 0; /*0x78eca6*/
    DlgItem = GetDlgItem(hWnd, 1525); /*0x78ecac*/
    if ( DlgItem ) /*0x78ecb6*/
      dword_B76474 = SendMessageA(DlgItem, 0xF0u, 0, 0); /*0x78ecc2*/
    dword_B766B8 = 0; /*0x78eccd*/
    v6 = GetDlgItem(hWnd, 1527); /*0x78ecd3*/
    if ( v6 ) /*0x78ecd7*/
      dword_B766B8 = SendMessageA(v6, 0xF0u, 0, 0); /*0x78ece3*/
    dword_B76958 = 0; /*0x78ecee*/
    v7 = GetDlgItem(hWnd, 1526); /*0x78ecf4*/
    if ( v7 ) /*0x78ecf8*/
      dword_B76958 = SendMessageA(v7, 0xF0u, 0, 0); /*0x78ed04*/
    dword_B76910 = 0; /*0x78ed0f*/
    v8 = GetDlgItem(hWnd, 1528); /*0x78ed15*/
    if ( v8 ) /*0x78ed19*/
      dword_B76910 = SendMessageA(v8, 0xF0u, 0, 0); /*0x78ed25*/
    v9 = GetDlgItem(hWnd, 1529); /*0x78ed30*/
    if ( v9 ) /*0x78ed34*/
      dword_B77798 = SendMessageA(v9, 0xF0u, 0, 0); /*0x78ed40*/
    dword_B768F8 = 0; /*0x78ed4b*/
    v10 = GetDlgItem(hWnd, 1530); /*0x78ed51*/
    if ( v10 ) /*0x78ed55*/
      dword_B768F8 = SendMessageA(v10, 0xF0u, 0, 0); /*0x78ed61*/
    dword_B76AC0 = 0; /*0x78ed6c*/
    v11 = GetDlgItem(hWnd, 1531); /*0x78ed72*/
    if ( v11 ) /*0x78ed76*/
      dword_B76AC0 = SendMessageA(v11, 0xF0u, 0, 0); /*0x78ed82*/
    dword_B73680 = 0; /*0x78ed8d*/
    v12 = GetDlgItem(hWnd, 1908); /*0x78ed93*/
    if ( v12 ) /*0x78ed97*/
      dword_B73680 = SendMessageA(v12, 0xF0u, 0, 0); /*0x78eda3*/
    dword_B77790 = 0; /*0x78edae*/
    v13 = GetDlgItem(hWnd, 1909); /*0x78edb4*/
    if ( v13 ) /*0x78edb8*/
      dword_B77790 = SendMessageA(v13, 0xF0u, 0, 0); /*0x78edc4*/
    __3_YAXPAX_Z(dword_B77E98); /*0x78edd0*/
    dword_B77E98 = 0; /*0x78eddf*/
    CloseDialog(hWnd, 1); /*0x78ede5*/
    return 0; /*0x78eded*/
  }
  return result; /*0x78ec13*/
}
} // namespace gamemd

// 0x780A00
namespace gamemd {
wchar_t ** WOL_FormatLocaleString(wchar_t ** a1, int a2)
{
{
    char **v3;
    char *v4;
    wchar_t *String;
    void *v7;
    void *v8;
    void *v9;
    v3 = FormatStringInt((char **)&v9, a2, 2);
    ProcessStringAndCopy((char **)&v8, DataGlobal_84A684, v3);
    DeleteAndZero(&v9);
    v4 = String::GetOrEmpty((char **)&v8);
    String = GetStringCSF((wchar_t *)v4, 0, g_Str_File_wonline_cpp, 2909);
    WideString::Assign((wchar_t **)&v7, String);
    WideString::AssignFromPtr(a1, (const wchar_t **)&v7);
    DeleteAndZero::Alt(&v7);
    DeleteAndZero(&v8);
    return a1;
}
}
} // namespace gamemd

// 0x7813B0
namespace gamemd {
int sub_7813B0(unsigned int * a1, unsigned int * a2)
{
{
    int v2;
    int v3;
    v2 = *((int*)(a1) + 1);
    v3 = *((int*)(a2) + 1);
    if ( v2 >= v3 )
    return (v2 <= v3) - 1;
    else
    return 1;
}
}
} // namespace gamemd

// 0x7813E0
namespace gamemd {
void sub_7813E0(AbstractClass * Base, char a2)
{
{
    ObjectClass *v2;
    AbstractClass *v3;
    int v4;
    int v5;
    int *v6;
    int v7;
    int v10[67];
    v2 = g_WOL_ChatState;
    v3 = Base;
    v4 = 0;
    memset(v10, 0, sizeof(v10));
    if ( (int)g_WOL_ChatState > 0 )
  {
    v5 = 0;
    v6 = (int *)Base;
    do
    {
    if ( v5 >= 0 && v4 < (int)g_WOL_ChatState )
      {
    qmemcpy(v10, (char *)(g_WOL_ConnectionHandler) + v5, sizeof(v10));
    v3 = Base;
      }
    v7 = v10[10];
    *v6 = v4;
    v6[1] = v7;
    ++v4;
    v5 += 268;
    v6 += 2;
    }
    while ( v4 < (int)v2 );
  }
    if ( a2 )
    qsort(v3, (IUnknown *)v2, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_781380);
    else
    qsort(v3, (IUnknown *)v2, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_7813B0);
}
}
} // namespace gamemd

// 0x781CC0
namespace gamemd {
int sub_781CC0(int a1, int a2)
{
{
    int v2;
    int v3;
    v2 = *(int *)(a1 + 8);
    if ( v2 == *(int *)(a2 + 8) )
    return _strcmpi(*(const void **)(a1 + 4), *(const void **)(a2 + 4));
    v3 = -(v2 != 0);
    LOBYTE(v3) = v3 & 0xFE;
    return v3 + 1;
}
}
} // namespace gamemd

// 0x781CF0
namespace gamemd {
int sub_781CF0(const void * a1, const void ** a2)
{
{
    const void *v2;
    int v3;
    v2 = (const void *)*((int *)(a1) + 2);
    if ( v2 == *((int*)(a2) + 2) )
    return _strcmpi(*((int*)(a2) + 1), *((const void **)(a1) + 1));
    v3 = -(v2 != 0);
    LOBYTE(v3) = v3 & 0xFE;
    return v3 + 1;
}
}
} // namespace gamemd

// 0x7831A0
namespace gamemd {
int sub_7831A0(signed int * a1, signed int * a2)
{
{
    signed int v2;
    int v3;
    signed int v5;
    signed int v6;
    signed int v7;
    signed int v8;
    char v9[108];
    char v10[108];
    v2 = *((int*)(a1) + 2);
    if ( v2 == *((int*)(a2) + 2) )
  {
    v5 = *((int*)(a1) + 1);
    v6 = *((int*)(a2) + 1);
    if ( v5 <= v6 )
    {
    if ( v5 >= v6 )
      {
    memset(v10, 0, sizeof(v10));
    memset(v9, 0, sizeof(v9));
    v7 = *a1;
    if ( *a1 >= 0 && v7 < (int)g_WOL_State )
    qmemcpy(v10, &g_WOL_ConnectionFlags[3 * v7], sizeof(v10));
    v8 = *a2;
    if ( *a2 >= 0 && v8 < (int)g_WOL_State )
    qmemcpy(v9, &g_WOL_ConnectionFlags[3 * v8], sizeof(v9));
    return _strcmpi(&v10[36], &v9[36]);
      }
    else
      {
    return 1;
      }
    }
    else
    {
    return -1;
    }
  }
    else
  {
    v3 = -(v2 != 0);
    LOBYTE(v3) = v3 & 0xFE;
    return v3 + 1;
  }
}
}
} // namespace gamemd

// 0x783520
namespace gamemd {
int sub_783520(const char * a1, const char * a2)
{
{
    unsigned int v2;
    unsigned int v3;
    v2 = strlen(a1) + 1;
    v3 = strlen(a2) + 1;
    if ( v2 == 1 )
    return (int)(v3 - 1) > 0;
    if ( v3 != 1 )
    return _strcmpi(a1, a2);
    if ( (int)(v2 - 1) <= 0 )
    return (int)(v3 - 1) > 0;
    else
    return -1;
}
}
} // namespace gamemd

// 0x783570
namespace gamemd {
int sub_783570(const char * a1, const char * a2)
{
{
    unsigned int v2;
    unsigned int v3;
    v2 = strlen(a1) + 1;
    v3 = strlen(a2) + 1;
    if ( v2 == 1 )
    return (int)(v3 - 1) > 0;
    if ( v3 != 1 )
    return _strcmpi(a2, a1);
    if ( (int)(v2 - 1) <= 0 )
    return (int)(v3 - 1) > 0;
    else
    return -1;
}
}
} // namespace gamemd

// 0x785360
namespace gamemd {
void WOL_DisplayRankingsThunk()
{
{
    DisplayRankingsWOL(0);
}
}
} // namespace gamemd

// 0x786E70
namespace gamemd {
int E4Recv_786E70::sub_786E70()
{
{
    int v2;
    int v3;
    int i;
    char *v5;
    char *v6;
    if ( !String::Length(this) )
    return -1;
    v2 = g_WOL_UserList;
    v3 = 1;
    if ( g_WOL_UserList <= 1 )
    return -1;
    for ( i = 248; ; i += 248 )
  {
    v5 = 0;
    if ( i >= 0 && v3 < v2 )
    v5 = (char *)(DataGlobal_B778E0) + i;
    v6 = strchr(v5 + 24, 58);
    if ( v6 )
    {
    if ( *v6 && String::Equals_Alt(this, v6 + 1) )
    break;
    }
    v2 = g_WOL_UserList;
    if ( ++v3 >= g_WOL_UserList )
    return -1;
  }
    return v3;
}
}
} // namespace gamemd

// 0x789630
namespace gamemd {
char ** sub_789630(char ** a1, int a2)
{
{
    int v3;
    void *v5;
    int v6;
    String::Assign((char **)&v5, (const char *)(a2 + 24));
    unknown_libname_73(&v6);
    v3 = String::Tokenize((const char **)&v5, 0, DataGlobal_8318B8, (void **)&v6);
    if ( v3 >= 0 )
    String::Erase((const char **)&v5, 0, v3 + 1);
    String::AssignFromPtr(a1, (const char **)&v5);
    DeleteAndZero((void **)&v6);
    DeleteAndZero(&v5);
    return a1;
}
}
} // namespace gamemd

// 0x78ABF0
namespace gamemd {
short WOL_ChatMessage(char a1, wchar_t * a2)
{
{
    DataGlobal_B77E40 = a1;
    return WideString::Reassign(&DataGlobal_B76230, a2);
}
}
} // namespace gamemd
