// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"
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
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/BufferIOFile_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/DialogClass_e4.hpp"
#include "e4/classes/DialogQueue_e4.hpp"
#include "e4/classes/E4Recv_771890_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/E4Recv_776320_e4.hpp"
#include "e4/classes/ScoreScreen_e4.hpp"
#include "e4/classes/VocClass_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/Compare_e4.hpp"
#include "e4/classes/CChatEventSink_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"  // G42.33 b2: Shrink/Shrink2/CleanupAndResize carrier
#include "e4/classes/DynamicArray_e4.hpp"  // G42.33 b2: Grow carrier
#include "e4/classes/Flag_e4.hpp"  // G42.33 b3: Flag locals (LoginFlow)
#include "e4/classes/StringVector_e4.hpp"  // G42.33 b3: StringVector locals
#include "e4/classes/Screen_e4.hpp"  // G42.33 b3: Screen::Capture static
#include "e4/classes/OwnerDrawControl_e4.hpp"  // G42.33 b3
#include "e4/classes/WOLobby_e4.hpp"  // G42.33 b3: DlgProc static
#include "e4/classes/InfantryClass_e4.hpp"  // G42.33 b3: SetField6 member
#include "e4/classes/E4Recv_76AAF0_e4.hpp"  // G42.33 b4: g_WOL_UserList flat carrier
#include "e4/classes/DynamicVector_e4.hpp"  // G42.33 b4: g_WOL_BuddyList carrier
#include "e4/classes/GameLoop_e4.hpp"  // G42.33 b4: GameLoop::Thunk carrier
#include "e4/classes/MixFileClass_e4.hpp"  // G42.33 b4: FromFile carrier
#include "e4/classes/GenericNode_e4.hpp"  // G42.33 b4: Constructor carrier
#include "e4/classes/CCFileClass_e4.hpp"  // G42.33 b4: Construct carrier
#include "e4/classes/FileStraw_e4.hpp"  // G42.33 b4
#include "e4/classes/BufferIOFileClass_e4.hpp"  // G42.33 b4: Dtor carrier
// G42.33 b4: game-local CreateDialog @0x622650 (fastcall id/proc/lparam) shadows the SDK macro
#undef CreateDialog
namespace gamemd { extern int __fastcall CreateDialog(unsigned short a1, INT_PTR (__stdcall *a2)(HWND, UINT, WPARAM, LPARAM), LPARAM); }
// G42.33 b3 supply: TU-local minimal static-form carriers (fwd-only in _fwd_e4.hpp)
namespace gamemd { struct ScreenSaver { static int Process(void *aP0, void *aP1); }; }  // 0x532100
namespace gamemd { struct SimpleDialogControl { unsigned int * Constructor(); }; }  // 0x624110 thiscall
namespace gamemd { struct DynamicStringArray { static int Get(void *aP0, char **aP1, int aP2); }; }  // 0x7ACE30
namespace gamemd { struct A8EB00_flat { unsigned int ObjectTypeClass[40]; }; }  // G42.33 b6: stru_A8EB00 resolution vocab
namespace gamemd { struct WOLGameClass { static int ParseChatMessage(HWND, UINT, WPARAM, LPARAM); }; }  // 0x78E030 G42.33 b7 static-form sync
namespace gamemd { struct WOLLogin { static int DlgProc(HWND, UINT, WPARAM, LPARAM); }; }  // 0x78DB70 G42.33 b7 static-form sync
namespace gamemd { struct MultiplayerGameMode { static int GetFirst(void); }; }  // 0x5D5E10 G42.33 b7 static-form sync
// G57c5 dedup: TU-local PtrVector twin removed -- PtrVector_e4.hpp (promoted flat carrier) carries Destroy static-form @0x5C6120
#include "e4/classes/LinkedList_flat_e4.hpp"  // G42.33 b6: Prepend member carrier
namespace gamemd { struct NetworkShare { static int GetField(int a1); }; }  // 0x5E8DA0 G42.33 b8
namespace gamemd { extern char a0[]; }  // unresolved IDA reg artifact @0x78d6df (rep movsd), TU-compile supply
namespace gamemd { struct ScenarioClass { int SaveGameOptions(); }; }  // G42.33 b9 TU-local (MPCooperative fwd-only)
namespace gamemd { struct Math { static const int InitDegToRad; }; }  // 0x40FFFF G42.33 b9 TU-local
namespace gamemd { struct Theme { int QueueSong(int a2); int Stop(int a2); static int IsPlaying(void *aP0); }; }  // 0x720FD0 G42.33 b10 TU-local
namespace gamemd { struct StringList { int Find(int a2); }; }  // G42.33 b10 TU-local
namespace gamemd { struct GameSetup { static int LookupDialogHash(HWND aP0); }; }  // 0x60D320 G42.33 b10 TU-local
#include "e4/classes/Init_e4.hpp"  // G42.33 b8 tail carrier
#include "e4/classes/ListBox_e4.hpp"  // G42.33 b8 tail carrier
#include "e4/classes/LoadingScreen_e4.hpp"  // G42.33 b8 tail carrier
#include "e4/classes/MPCooperative_e4.hpp"  // G42.33 b8 tail carrier
#include "e4/classes/NetworkAddress_e4.hpp"  // G42.33 b8 tail carrier
// G42.33 b2 supply: minimal DynamicClass carrier (fwd-only in _fwd_e4.hpp)
namespace gamemd { struct DynamicClass { static AbstractClass * * Insert(void *aP0, void * aP1, int a2); }; }  // static-form sync

// 0x780110
namespace gamemd {  // G42.18 ns repair
int WOL_ResetSystem()
{

  unsigned int *AccountInfoWOL; // eax
  unsigned int v25[2]; // [esp+10h] [ebp-8h] BYREF
  AccountInfoWOL = (unsigned int *)((unsigned int)(((ObjectClass *)(ObjectClass *)v25)->LoadAccountInfoWOL()));
  ComPtr::Set(&stru_B75E48, AccountInfoWOL[1]); /*0x780129*/
  v25[0] = (unsigned int)(&g_var_5878c0); /*0x780132*/
  ((ComPtr *)v25)->Release(); /*0x78013a*/
  int v2 = 0; // esi /*0x780146*/
  *(unsigned int *)&g_WOL_AuthPool = 0; /*0x78014a*/
  stru_B76AC4.referenceCount = 0; /*0x780150*/
  for ( g_WOL_UserList.owningHouseIndex = 0; v2 < g_WebBrowserConfig.abstractFlags; ++v2 ) /*0x78015c*/
    DeleteAndZero((ObjectClass *)(g_WebBrowserConfig.referenceCount + 4 * v2)); /*0x780167*/
  unsigned int v3; // eax
  v3 = stru_B765EC.location[0]; /*0x780176*/
  unsigned int v4 = 0; // ebp /*0x78017b*/
  for ( g_WebBrowserConfig.abstractFlags = 0; v4 < stru_B765EC.location[0]; v3 = stru_B765EC.location[0] ) /*0x780185*/
  {
    ObjectClass *v5; // esi
    v5 = *(ObjectClass **)(stru_B765EC.lastLayer + 4 * v4); /*0x78018d*/
    while ( v5 ) /*0x780192*/
    {
      ObjectClass *v6 = v5; // edi /*0x780194*/
      v5 = (ObjectClass *)v5->ptr_8; /*0x780196*/
      DeleteAndZero(v6); /*0x78019f*/
      operator delete((v6)); /*0x7801a5*/
    }
    ++v4; /*0x7801b6*/
    *(unsigned int *)(stru_B765EC.lastLayer + 4 * v4 - 4) = 0; /*0x7801b7*/
  }
  *(unsigned int *)&stru_B765EC.isInLogic = 0; /*0x7801ca*/
  if ( v3 > dword_B766B0 ) /*0x7801d2*/
  {
    do /*0x7801f3*/
    {
      if ( (*((unsigned char *)&(stru_B765EC.lineTrailer))) ) /*0x7801da*/
        break; /*0x7801da*/
      ((HashMap *)&stru_B765EC.lastLayer)->Shrink(); /*0x7801e1*/
    }
    while ( stru_B765EC.location[0] > (unsigned int)dword_B766B0 ); /*0x7801f3*/
  }
  int i; // esi
  for ( i = 0; i < (int)stru_B765EC.ptr_C; ++i ) /*0x7801fe*/
    DeleteAndZero((ObjectClass *)(stru_B765EC.abstractFlags + 4 * i)); /*0x780209*/
  unsigned int HashMap_field_0x08 = DataGlobal_B76538; // eax /*0x780218*/
  unsigned int v9 = 0; // ebp /*0x78021d*/
  for ( stru_B765EC.ptr_C = 0; /*0x780227*/
  v9 < DataGlobal_B76538;
  HashMap_field_0x08 = DataGlobal_B76538 )
  {
    ObjectClass *v10; // esi
    v10 = *(ObjectClass **)(*(unsigned int *)g_WOL_ConnectionPool + 4 * v9); /*0x78022e*/
    while ( v10 ) /*0x780233*/
    {
      ObjectClass *v11 = v10; // edi /*0x780235*/
      v10 = (ObjectClass *)v10->ptr_8; /*0x780237*/
      DeleteAndZero(v11); /*0x780240*/
      operator delete((v11)); /*0x780246*/
    }
    ++v9; /*0x780258*/
    *(unsigned int *)(*(unsigned int *)g_WOL_ConnectionPool + 4 * v9 - 4) = 0; /*0x780259*/
  }
  DataGlobal_B76534 = 0; /*0x78026c*/
  if ( HashMap_field_0x08 > dword_B76560 ) /*0x780274*/
  {
    do /*0x780295*/
    {
      if ( byte_B76544 ) /*0x78027c*/
        break; /*0x78027c*/
      (&g_WOL_ConnectionPool)->Shrink(); /*0x780283*/
    }
    while ( DataGlobal_B76538 > (unsigned int)dword_B76560 ); /*0x780295*/
  }
  dword_B7646C = time(0) + 86400; /*0x7802a5*/
  unsigned int v12 = DataGlobal_B768C8; // eax /*0x7802aa*/
  unsigned int v13 = 0; // edi /*0x7802af*/
  dword_B7617C = 0; /*0x7802b3*/
  for ( dword_B76180 = 0; v13 < DataGlobal_B768C8; v12 = DataGlobal_B768C8 ) /*0x7802bf*/
  {
    ObjectClass *v14; // esi
    v14 = *(ObjectClass **)(*(unsigned int *)g_WOL_ListParser + 4 * v13); /*0x7802c6*/
    while ( v14 ) /*0x7802cb*/
    {
      ObjectClass *v15 = v14; // ecx /*0x7802cd*/
      v14 = (ObjectClass *)v14->estimatedHealth; /*0x7802cf*/
      ResetSystemWOL_Reset(v15, 1); /*0x7802d8*/
    }
    ++v13; /*0x7802e7*/
    *(unsigned int *)(*(unsigned int *)g_WOL_ListParser + 4 * v13 - 4) = 0; /*0x7802e8*/
  }
  DataGlobal_B768C4 = 0; /*0x7802fb*/
  if ( v12 > dword_B768F0 ) /*0x780303*/
  {
    do /*0x780324*/
    {
      if ( byte_B768D4 ) /*0x78030b*/
        break; /*0x78030b*/
      (&g_WOL_ListParser)->Shrink2(); /*0x780312*/
    }
    while ( DataGlobal_B768C8 > (unsigned int)dword_B768F0 ); /*0x780324*/
  }
  unsigned int v16; // eax
  v16 = *(unsigned int *)&DataGlobal_B73B00; /*0x780326*/
  unsigned int j; // edi
  for ( j = 0; j < *(unsigned int *)&DataGlobal_B73B00; v16 = *(unsigned int *)&DataGlobal_B73B00 ) /*0x78032f*/
  {
    ObjectClass *v18; // esi
    v18 = *(ObjectClass **)(*(unsigned int *)&DataGlobal_B73AF8 + 4 * j); /*0x780336*/
    while ( v18 ) /*0x78033b*/
    {
      ObjectClass *v19 = v18; // ecx /*0x78033d*/
      v18 = (ObjectClass *)v18->estimatedHealth; /*0x78033f*/
      ResetSystemWOL_Reset(v19, 1); /*0x780348*/
    }
    ++j; /*0x780357*/
    *(unsigned int *)(*(unsigned int *)&DataGlobal_B73AF8 + 4 * j - 4) = 0; /*0x780358*/
  }
  *(unsigned int *)&DataGlobal_B73AFC = 0; /*0x78036b*/
  if ( v16 > *(unsigned int *)&DataGlobal_B73B28 ) /*0x780373*/
  {
    do /*0x780394*/
    {
      if ( DataGlobal_B73B0C ) /*0x78037b*/
        break; /*0x78037b*/
      ((HashMap *)&DataGlobal_B73AF8)->Shrink2(); /*0x780382*/
    }
    while ( *(unsigned int *)&DataGlobal_B73B00 > *(unsigned int *)&DataGlobal_B73B28 ); /*0x780394*/
  }
  unsigned int occupant; // eax
  occupant = stru_B765EC.occupant; /*0x780396*/
  unsigned int k; // edi
  for ( k = 0; k < stru_B765EC.occupant; occupant = stru_B765EC.occupant ) /*0x78039f*/
  {
    CChatEventSink *CChatEventSink_field_0x0C; // esi
    CChatEventSink_field_0x0C = *(CChatEventSink **)(stru_B765EC.referenceCount + 4 * k); /*0x7803a6*/
    while ( CChatEventSink_field_0x0C ) /*0x7803ab*/
    {
      CChatEventSink *v23 = CChatEventSink_field_0x0C; // ecx /*0x7803ad*/
      CChatEventSink_field_0x0C = CChatEventSink_field_0x0C->q014.CChatEventSink_field_0x0C; /*0x7803af*/
      (v23)->DeleteAndZero(1); /*0x7803bb*/
    }
    ++k; /*0x7803ca*/
    *(unsigned int *)(stru_B765EC.referenceCount + 4 * k - 4) = 0; /*0x7803cb*/
  }
  stru_B765EC.NeedsSaveOrLink = 0; /*0x7803de*/
  if ( occupant > stru_B765EC.ambientSoundController[4] ) /*0x7803e6*/
  {
    do /*0x780407*/
    {
      if ( (*((unsigned char *)&(stru_B765EC.nextObject))) ) /*0x7803ee*/
        break; /*0x7803ee*/
      HashTable::Shrink((HashTable *)&stru_B765EC.referenceCount); /*0x7803f5*/
    }
    while ( stru_B765EC.occupant > (unsigned int)stru_B765EC.ambientSoundController[4] ); /*0x780407*/
  }
  (&g_WindowManager)->CleanupArrayWOL(); /*0x78040e*/
  Array::CleanupArrayWOL((Array *)&stru_B76900.needsRedraw); /*0x780418*/
  HashTable::CleanupAndResize((HashTable *)&stru_B76900.isAliveFlag); /*0x780422*/
  if ( *(unsigned int *)&dword_A8B238 == 4 && dword_A8B244 == 3 ) /*0x780437*/
  {
    g_WOL_HashTable = (int)((HashTable *)&DataGlobal_B73AF8); /*0x78043e*/
    *(unsigned int *)&DataGlobal_B779C8 = 8960; /*0x780448*/
    dword_B736F0 = 8960; /*0x78044d*/
  }
  else
  {
    g_WOL_HashTable = (int)(&stru_B77D80);
    *(unsigned int *)&DataGlobal_B779C8 = g_NetworkRematchState; /*0x780463*/
    dword_B736F0 = g_NetworkRematchState; /*0x780468*/
  }
  memset(&stru_B76AC4.ambientSoundController[4], 0, 0x10Cu); /*0x78047e*/
  memset(&DataGlobal_B73BE8, 0, 0x10Cu); /*0x78048a*/
  memset(&DataGlobal_B75E58, 0, 0xF8u); /*0x780496*/
  memset(&unk_B769C8, 0, 0xF8u); /*0x7804a6*/
  word_B77AD0 = 0; /*0x7804a8*/
  g_WOL_GameListState = 0; /*0x7804af*/
  g_WOL_IdleHandler = 1; /*0x7804b5*/
  g_WOL_GameProcessState = -1; /*0x7804bb*/
  g_WOL_GameListPool = time(0); /*0x7804ce*/
  dword_B76468 = 0; /*0x7804d3*/
  DataGlobal_B779CC = 0; /*0x7804d9*/
  dword_B77E4C = 0; /*0x7804df*/
  g_WOL_ChannelList = 0; /*0x7804e5*/
  byte_B77DEC = 0; /*0x7804eb*/
  (*((unsigned char *)&(DataGlobal_B77DC0))) = 0; /*0x7804f1*/
  byte_84A1B8 = 1; /*0x7804f7*/
  ((DeleteAndZero *)&DataGlobal_B73AE0)->Alt2(); /*0x7804fe*/
  memset(&Handles, 0, 0x48u); /*0x780514*/
  *(unsigned short *)((char *)&DataGlobal_B77DC0 + 1) = 0; /*0x780522*/
  dword_84A1BC = -1; /*0x78052e*/
  DataGlobal_B77DCC = 0; /*0x780534*/
  DataGlobal_B77DB8 = -1; /*0x78053a*/
  DataGlobal_B77DBC = -1; /*0x780540*/
  *(unsigned int *)&DataGlobal_B73E1C = (unsigned int)(GetStringCSF((char *)(aTxtLob1), 0, g_Str_File_wonline_cpp, 2752)); /*0x78055c*/
  *(unsigned int *)&DataGlobal_B73E20 = (unsigned int)(GetStringCSF((char *)(aTxtLob2), 0, g_Str_File_wonline_cpp, 2753)); /*0x780577*/
  *(unsigned int *)&DataGlobal_B73E24 = (unsigned int)(GetStringCSF((char *)(aTxtLob3), 0, g_Str_File_wonline_cpp, 2754)); /*0x780592*/
  *(unsigned int *)&DataGlobal_B73E28 = (unsigned int)(GetStringCSF((char *)(aTxtLob4), 0, g_Str_File_wonline_cpp, 2755)); /*0x7805ad*/
  *(unsigned int *)&DataGlobal_B73E2C = (unsigned int)(GetStringCSF((char *)(aTxtLob5), 0, g_Str_File_wonline_cpp, 2756)); /*0x7805c8*/
  *(unsigned int *)&DataGlobal_B73E30 = (unsigned int)(GetStringCSF((char *)(aTxtLob6), 0, g_Str_File_wonline_cpp, 2757)); /*0x7805d2*/
  *(unsigned int *)&DataGlobal_B73E34 = (unsigned int)(GetStringCSF((char *)(aTxtLob7), 0, g_Str_File_wonline_cpp, 2758)); /*0x7805fe*/
  *(unsigned int *)&DataGlobal_B73E38 = (unsigned int)(GetStringCSF((char *)(aTxtLob8), 0, g_Str_File_wonline_cpp, 2759)); /*0x780608*/
  memset((void *)(g_WOL_RequestObject), 0xFFu, sizeof(g_WOL_RequestObject)); /*0x780619*/
  ppv = 0; /*0x780627*/
  memset((void *)(byte_B77A94), 0, sizeof(byte_B77A94)); /*0x78062d*/
  g_UIPointerTable = 0; /*0x780634*/
  dword_AC1174 = 0; /*0x78063a*/
  dword_B77E54 = 0; /*0x780640*/
  dword_B77E58 = 0; /*0x780646*/
  dword_B77E5C = 0; /*0x78064c*/
  dword_B77DDC = 0; /*0x780652*/
  dword_B77DE0 = 0; /*0x780658*/
  unk_B77ABC = 0; /*0x78065e*/
  dword_B77DE4 = 0; /*0x78065f*/
  g_WOL_ChannelState = 0; /*0x780665*/
  g_WOL_LoginObject.abstractFlags = 1; /*0x78066b*/
  g_WOL_ChannelLeaveState = 0; /*0x780671*/
  __Release__NonReentrantLock_details_Concurrency__QAEXXZ_1((Concurrency::details::_NonReentrantLock *)&g_WOL_RequestState); /*0x780677*/
  g_NetworkLobbyState = 0; /*0x78067c*/
  dword_B77E60 = 0; /*0x780682*/
  dword_B77E64 = 0; /*0x780688*/
  CCINIClass_RulesHash = GameConfig::ComputeHash(); /*0x780693*/
  LoadArtINI(); /*0x780698*/
  CCINIClass_ArtHash = unknown_libname_29(); /*0x7806a2*/
  int result; // eax
  result = unknown_libname_30(); /*0x7806a7*/
  dword_B77E20 = 0; /*0x7806ac*/
  CCINIClass_AIHash = result; /*0x7806b2*/
  return result; /*0x7806b7*/
}
}  // G42.18 ns repair
// 0x7806C0
namespace gamemd {  // G42.18 ns repair
void PopulateWOLLobbyListBox()  // G42.41i: truth 0x7806C0 = void
{
  LRESULT (__stdcall *v3)(HWND, UINT, WPARAM, LPARAM); // esi
  LRESULT v4; // eax
  int v5; // ebx
  int v6; // eax
  int v7; // esi
  int v8; // ecx
  LRESULT v9; // esi
  signed int v10; // ebx
  LRESULT v11; // eax
  int v12; // eax
  LRESULT v13; // esi
  char *v14; // eax
  LRESULT v15; // eax
  bool v16; // [esp+7h] [ebp-2E9h]
  LPARAM v17; // [esp+8h] [ebp-2E8h]
  unsigned char v18[312]; // [esp+Ch] [ebp-2E4h] BYREF
  wchar_t Buffer[80]; // [esp+144h] [ebp-1ACh] BYREF
  char v20[268]; // [esp+1E4h] [ebp-10Ch] BYREF

  HWND v1; // eax
  v1 = (HWND)Dialog::FindByHandle((void *)0x113); /*0x7806cc*/
  if ( v1 ) /*0x7806d3*/
  {
    HWND DlgItem; // ebp
    DlgItem = GetDlgItem(v1, 1341); /*0x7806e5*/
    if ( DlgItem ) /*0x7806e9*/
    {
      unknown_libname_73(v18); /*0x7806f4*/
      v3 = SendMessageA; /*0x7806f9*/
      v4 = SendMessageA(DlgItem, 0x18Eu, 0, 0); /*0x780709*/
      if ( v4 != -1 ) /*0x78070e*/
        GetListBoxItemText(DlgItem, v4, (void **)v18); /*0x780719*/
      SendMessageA(DlgItem, 0x49Du, 0, 1); /*0x780729*/
      ((ObjectClass *)(ObjectClass *)DlgItem)->Memory_Pop(); /*0x78072d*/
      v5 = 0; /*0x780737*/
      *(unsigned int *)&v18[16] = *(unsigned int *)&g_WOL_AuthPool; /*0x78073b*/
      v17 = 0; /*0x78073f*/
      if ( *(int *)&g_WOL_AuthPool > 0 ) /*0x780743*/
      {
        v6 = 0; /*0x780749*/
        *(unsigned int *)&v18[4] = 0; /*0x78074c*/
        do /*0x7809a5*/
        {
          if ( v6 >= 0 && v5 < *(int *)&g_WOL_AuthPool ) /*0x78075a*/
            memcpy(&v18[44], (const void *)(v6 + *(unsigned int *)&DataGlobal_B73E18), 0x10Cu); /*0x78076e*/
          if ( !strncmp(&v18[96], g_Str_Lob_41_, strlen((const char *)(g_Str_Lob_41_))) ) /*0x78078a*/
          {
            v7 = atol((const char *)(&v18[strlen((const char *)(g_Str_Lob_41_)) + 96])); /*0x7807b1*/
            *(unsigned int *)&v18[8] = v7; /*0x7807b6*/
            v16 = strcmp(&v18[96], &stru_B76AC4.needsRedraw) == 0; /*0x7807f7*/
            v8 = v7 % 8; /*0x780810*/
            if ( v7 / 8 ) /*0x780801*/
              swprintf( /*0x780855*/
                Buffer,
                (const size_t)aSDD_0,
                *(const wchar_t *const *)&g_WindowManager.__pad_EC[4 * v8 + 648],
                v7 / 8 + 1,
                *(unsigned int *)&v18[56]);
            else
              swprintf( /*0x78082f*/
                Buffer,
                (const size_t)aSD_3,
                *(const wchar_t *const *)&g_WindowManager.__pad_EC[4 * v8 + 648],
                *(unsigned int *)&v18[56]);
            v9 = SendMessageA(DlgItem, 0x18Bu, 0, 0); /*0x78086d*/
            v10 = 0; /*0x78086f*/
            for ( *(unsigned int *)&v18[12] = v9; v10 < v9; ++v10 ) /*0x780877*/
            {
              v11 = SendMessageA(DlgItem, 0x199u, v10, 0); /*0x780882*/
              if ( v11 >= 0 && v11 < *(int *)&g_WOL_AuthPool ) /*0x780892*/
              {
                memcpy(v20, (const void *)(*(unsigned int *)&DataGlobal_B73E18 + 268 * v11), sizeof(v20)); /*0x7808b3*/
                v9 = *(unsigned int *)&v18[12]; /*0x7808b5*/
              }
              v12 = atol(&v20[strlen((const char *)(g_Str_Lob_41_)) + 52]); /*0x7808d0*/
              if ( v12 > *(int *)&v18[8] ) /*0x7808de*/
                break; /*0x7808de*/
            }
            v13 = SendMessageA(DlgItem, 0x4C7u, v10, (LPARAM)&v18[96]); /*0x7808fd*/
            SendMessageA(DlgItem, 0x19Au, v13, v17); /*0x78090b*/
            ((Gadget *)&v18[20])->InitProperties(); /*0x780911*/
            *(unsigned int *)&v18[20] = 1; /*0x780922*/
            ((WideString *)(void **)&v18[24])->Reassign( Buffer); /*0x78092a*/
            ((WideString *)(void **)&v18[28])->Reassign( &g_TypeClass_DefaultString); /*0x780938*/
            SendMessageA( /*0x780962*/
              DlgItem,
              0x4A8u,
              (uint16_t)dword_B76C1C | ((uint16_t)v13 << 16),
              (LPARAM)&v18[20]);
            if ( v16 ) /*0x78096a*/
              SendMessageA(DlgItem, 0x186u, v13, 0); /*0x780975*/
            ((DeleteAndZero *)&v18[28])->Alt(); /*0x78097b*/
            ((DeleteAndZero *)&v18[24])->Alt(); /*0x780984*/
            v5 = v17; /*0x780989*/
          }
          ++v5; /*0x780995*/
          v6 = *(unsigned int *)&v18[4] + 268; /*0x780996*/
          v17 = v5; /*0x78099d*/
          *(unsigned int *)&v18[4] += 268; /*0x7809a1*/
        }
        while ( v5 < *(int *)&v18[16] ); /*0x7809a5*/
        v3 = SendMessageA; /*0x7809ab*/
      }
      v14 = ((String *)((String *)v18))->GetOrEmpty_Alt(); /*0x7809b6*/
      v15 = v3(DlgItem, 0x4C5u, 0, (LPARAM)v14); /*0x7809c4*/
      if ( v15 != -1 ) /*0x7809ca*/
        v3(DlgItem, 0x197u, v15, 0); /*0x7809d5*/
      v3(DlgItem, 0x49Du, 0, 0); /*0x7809e1*/
      InvalidateRect(DlgItem, 0, 0); /*0x7809e8*/
      j_DeleteAndZero((ObjectClass *)v18); /*0x7809f2*/
    }
  }
}
}  // G42.18 ns repair
// 0x780A90
namespace gamemd {
wchar_t ** FormatWOLPlayerInfo(wchar_t ** a1, const char * a2)
{

  wchar_t **v4; // eax
  HashTable *v5; // esi
  String *v6; // esi
  wchar_t *v7; // eax
  wchar_t **v8; // eax
  wchar_t **v9; // eax
  String *v10; // esi
  char *v11; // esi
  wchar_t *StringCSF; // eax
  wchar_t **v13; // eax
  wchar_t **v14; // eax
  wchar_t **v15; // eax
  String *v16; // esi
  int v17; // eax
  wchar_t **v18; // eax
  wchar_t **v19; // eax
  wchar_t **v21; // [esp-Ch] [ebp-A8h]
  wchar_t **v22; // [esp-4h] [ebp-A0h]
  String v23; // [esp+10h] [ebp-8Ch] BYREF
  String v24; // [esp+18h] [ebp-84h] BYREF
  DeleteAndZero v25; // [esp+20h] [ebp-7Ch] BYREF
  WideString v26; // [esp+2Ch] [ebp-70h] BYREF
  const wchar_t *v27[27]; // [esp+30h] [ebp-6Ch] BYREF

  ((String *)&v23)->Assign( a2 + 36); /*0x780aa6*/
  v4 = CharStringToWide((wchar_t **)&v25.ptr_4, (const char **)&v23); /*0x780abd*/
  WideString::AssignConcat((WideString *)v4, (wchar_t **)&v23.m_3[1], (wchar_t *)L" : ");
  ((DeleteAndZero *)&v25.ptr_4)->Alt(); /*0x780acd*/
  (&v23)->ToLower(); /*0x780ad6*/
  v5 = g_WOL_HashTable; /*0x780adb*/
  memset(v27, 0, sizeof(v27)); /*0x780aee*/
  if ( g_WOL_HashTable /*0x780b14*/
    && g_WOL_HashTable->HashTable_field_0x04
    && (v6 = *(String **)(*(unsigned int *)v5->__pad_0
                        + 4
                        * (((int (*)(String *))g_WOL_HashTable->HashTable_field_0x18)(&v23)
                         & ((1 << v5->u32_C) - 1)))) != 0 )
  {
    while ( !(unsigned __int8)String::Compare(v6, (const char **)&v23) ) /*0x780b24*/
    {
      v6 = *(String **)v6[14].__pad_0; /*0x780b2a*/
      if ( !v6 ) /*0x780b2f*/
        goto LABEL_6; /*0x780b2f*/
    }
    v11 = &v6->m_3[1]; /*0x780c0f*/
    if ( v11 ) /*0x780c14*/
      memcpy(v27, v11, sizeof(v27)); /*0x780c1f*/
    v22 = FormatWideString((wchar_t **)&v24.m_3[1], v27[7]); /*0x780c36*/
    v21 = ((WideString *)&v25)->Assign( (wchar_t *)asc_82083C); /*0x780c49*/
    StringCSF = GetStringCSF(g_Str_TXT_RANK, 0, g_Str_File_wonline_cpp, 2937); /*0x780c59*/
    v13 = (&v26)->Assign(StringCSF); /*0x780c63*/
    v14 = WideString::ConcatAlloc((WideString *)v13, (wchar_t **)&v25.ptr_8, (const wchar_t **)v21); /*0x780c6a*/
    v15 = WideString::ConcatAlloc((WideString *)v14, (wchar_t **)&v25.ptr_4, (const wchar_t **)v22); /*0x780c71*/
    WideString::Append((WideString *)&v23.m_3[1], (const wchar_t **)v15); /*0x780c7b*/
    ((DeleteAndZero *)&v25.ptr_4)->Alt(); /*0x780c84*/
    ((DeleteAndZero *)&v25.ptr_8)->Alt(); /*0x780c8d*/
    ((DeleteAndZero *)&v26)->Alt(); /*0x780c96*/
    ((DeleteAndZero *)&v25)->Alt(); /*0x780c9f*/
    ((DeleteAndZero *)&v24.m_3[1])->Alt(); /*0x780ca8*/
  }
  else
  {
LABEL_6:
    v7 = GetStringCSF(g_Str_TXT_UNRANKED, 0, g_Str_File_wonline_cpp, 2939); /*0x780b31*/
    WideString::Append2((WideString *)&v23.m_3[1], v7); /*0x780b4c*/
  }
  ((String *)&v24)->Assign( a2 + 46); /*0x780b59*/
  if ( !((String *)&v24)->Length() ) /*0x780b62*/
    String::Assign_Alt(&v24, a2 + 87); /*0x780b73*/
  if ( ((String *)&v24)->Length() ) /*0x780b7c*/
  {
    v8 = CharStringToWide((wchar_t **)&v25, (const char **)&v24); /*0x780b8d*/
    v9 = FormatWideStringPrefix((wchar_t **)&v24.m_3[1], asc_84A69C, v8); /*0x780b9c*/
    WideString::Append((WideString *)&v23.m_3[1], (const wchar_t **)v9); /*0x780ba6*/
    ((DeleteAndZero *)&v24.m_3[1])->Alt(); /*0x780baf*/
    ((DeleteAndZero *)&v25)->Alt(); /*0x780bb8*/
  }
  v10 = *(String **)(*(unsigned int *)g_WOL_ConnectionPool.__pad_0 + 4 * (dword_B76548(&v23) & ((1 << dword_B7653C) - 1))); /*0x780bdc*/
  if ( v10 )
  {
    while ( !(unsigned __int8)String::Compare(v10, (const char **)&v23) ) /*0x780bf5*/
    {
      v10 = *v10->ptr_4.__pad_0; /*0x780bfb*/
      if ( !v10 ) /*0x780c00*/
        goto LABEL_27; /*0x780c00*/
    }
    if ( ppv )
    {
      if ( dword_B76534 )
      {
        v16 = *(String **)(*(unsigned int *)g_WOL_ConnectionPool.__pad_0 + 4 /*0x780ceb*/
                                                                   * (dword_B76548(&v23) & ((1 << dword_B7653C) - 1)));
        if ( v16 )
        {
          while ( !(unsigned __int8)String::Compare(v16, (const char **)&v23) ) /*0x780d00*/
          {
            v16 = *v16->ptr_4.__pad_0; /*0x780d02*/
            if ( !v16 ) /*0x780d07*/
              goto LABEL_27; /*0x780d07*/
          }
          if ( v16 != (String *)-4 )
          {
            v17 = *&v16->ptr_4; /*0x780d16*/
            if ( v17 )
            {
              v18 = FormatLocaleStringWOL((wchar_t **)&v25, v17); /*0x780d22*/
              v19 = FormatWideStringPrefix((wchar_t **)&v24.m_3[1], L" : ", v18);
              WideString::Append((WideString *)&v23.m_3[1], (const wchar_t **)v19); /*0x780d3b*/
              ((DeleteAndZero *)&v24.m_3[1])->Alt(); /*0x780d44*/
              ((DeleteAndZero *)&v25)->Alt(); /*0x780d4d*/
            }
          }
        }
      }
    }
  }
LABEL_27:
  WideString::AssignFromPtr((WideString *)a1, (const wchar_t **)&v23.m_3[1]); /*0x780d52*/
  j_DeleteAndZero((ObjectClass *)&v24); /*0x780d62*/
  ((DeleteAndZero *)&v23.m_3[1])->Alt(); /*0x780d6b*/
  j_DeleteAndZero((ObjectClass *)&v23); /*0x780d74*/
  return a1; /*0x780d7b*/

}
}
// 0x780E30
namespace gamemd {
void * FormatWOLPlayerInfoForDisplay(wchar_t ** a1, HWND a2, WPARAM wParam)
{

  wchar_t *StringCSF; // eax
  LRESULT v5; // eax
  char *v6; // eax
  wchar_t **v7; // eax
  wchar_t *v8; // eax
  const wchar_t *v10; // [esp-4h] [ebp-2B4h]
  wchar_t *v11; // [esp-4h] [ebp-2B4h]
  DeleteAndZero v12; // [esp+10h] [ebp-2A0h] BYREF
  String_buf v13; // [esp+1Ch] [ebp-294h] BYREF
  int v14; // [esp+24h] [ebp-28Ch] BYREF
  int v15; // [esp+28h] [ebp-288h] BYREF
  int v16; // [esp+2Ch] [ebp-284h] BYREF
  int v17; // [esp+30h] [ebp-280h] BYREF
  char v18[108]; // [esp+34h] [ebp-27Ch] BYREF
  wchar_t *v19[67]; // [esp+A0h] [ebp-210h] BYREF
  char String_buf[132]; // [esp+1ACh] [ebp-104h] BYREF
  wchar_t Buffer[64]; // [esp+230h] [ebp-80h] BYREF

  if ( wParam == -1 ) /*0x780e46*/
  {
    StringCSF = GetStringCSF(aSttLobbylistga, 0, g_Str_File_wonline_cpp, 2987); /*0x780e4d*/
LABEL_14:
    ((WideString *)a1)->Assign( StringCSF); /*0x78106f*/
    return a1; /*0x781077*/
  }
  memset(v19, 0, sizeof(v19)); /*0x780e6a*/
  v5 = SendMessageA(a2, 0x199u, wParam, 0); /*0x780e6c*/
  if ( v5 < 0 || v5 >= stru_B76AD0.q010 ) /*0x780e80*/
  {
    StringCSF = GetStringCSF(aSttLobbylistga, 0, g_Str_File_wonline_cpp, 2994); /*0x78106a*/
    goto LABEL_14; /*0x78106a*/
  }
  memcpy(v19, (char *)dword_B76AE8 + 268 * v5, sizeof(v19)); /*0x780ea4*/
  ((String *)&v13)->Assign( (const char *)&v19[13]); /*0x780eb2*/
  CChatEventSink::EncodeString((CChatEventSink *)&v13, 39); /*0x780ebd*/
  memset(v18, 0, sizeof(v18)); /*0x780ecf*/
  v6 = (&v13)->GetOrEmpty(); /*0x780ed5*/
  strncpy(&v18[36], v6, 0xAu); /*0x780ee0*/
  FormatWOLPlayerInfo((wchar_t **)&v12, v18); /*0x780ef0*/
  v7 = ((WideString *)&v12.ptr_4)->Assign( (wchar_t *)L", "); /*0x780efe*/
  WideString::Append((WideString *)&v12, (const wchar_t **)v7); /*0x780f08*/
  ((DeleteAndZero *)&v12.ptr_4)->Alt(); /*0x780f11*/
  if ( v19[10] == (wchar_t *)-1 ) /*0x780f20*/
  {
    v11 = GetStringCSF(g_Str_TXT_UNKNOWN_PING, 0, g_Str_File_wonline_cpp, 3024); /*0x780f6a*/
    WideString::Append2((WideString *)&v12, v11); /*0x780f6f*/
  }
  else
  {
    v10 = v19[10]; /*0x780f22*/
    v8 = GetStringCSF(aMsgPinginfo, 0, g_Str_File_wonline_cpp, 3021); /*0x780f34*/
    swprintf(Buffer, (const size_t)v8, v10); /*0x780f42*/
    WideString::Append2((WideString *)&v12, Buffer); /*0x780f52*/
  }
  strncpy(String_buf, (const char *)&v19[56], 0x80u); /*0x780f89*/
  v14 = 0; /*0x780f95*/
  v15 = 0; /*0x780f99*/
  *(unsigned int *)&v13.m_3[1] = 0; /*0x780f9d*/
  v17 = 0; /*0x780fa1*/
  v16 = 0; /*0x780fa5*/
  unknown_libname_73(&v12.ptr_8); /*0x780fa9*/
  ParseStringCommaInts(String_buf, &v14, &v15, (int *)&v13.m_3[1], &v17, &v16, (void **)&v12.ptr_8); /*0x780fd2*/
  if ( ((String *)&v12.u32_8)->Length() ) /*0x780fdb*/
  {
    Render_Format((wchar_t **)&v12.ptr_4, (String *)&v12.u32_8); /*0x780fec*/
    if ( WideString::Length((WideString *)&v12.ptr_4) ) /*0x780ff5*/
    {
      WideString::Append2((WideString *)&v12, (wchar_t *)L", "); /*0x781007*/
      WideString::Append((WideString *)&v12, (const wchar_t **)&v12.ptr_4); /*0x781015*/
    }
    ((DeleteAndZero *)&v12.ptr_4)->Alt(); /*0x78101e*/
  }
  WideString::AssignFromPtr((WideString *)a1, (const wchar_t **)&v12); /*0x78102a*/
  j_DeleteAndZero((ObjectClass *)&v12.ptr_8); /*0x781033*/
  ((DeleteAndZero *)&v12)->Alt(); /*0x78103c*/
  j_DeleteAndZero((ObjectClass *)&v13); /*0x781045*/
  return a1; /*0x78104c*/

}
}
// 0x781130
namespace gamemd {
bool FilterWOLGameListEntry(unsigned int * aP0, int a2, int a3, int a4)
{
  if ( g_WOL_GameListRender != 2 ) /*0x781142*/
  {
    if ( g_WOL_GameListRender != 3 ) /*0x78114e*/
    {
      LABEL_8:
      if ( g_WOL_GameListRender == 2 ) /*0x781164*/
        goto LABEL_9; /*0x781164*/
      if ( g_WOL_GameListRender != 3 ) /*0x781175*/
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
  if ( g_WOL_GameListRender != 4 ) /*0x781194*/
  {
    if ( g_WOL_GameListRender != 5 ) /*0x7811a0*/
    {
      LABEL_23:
      if ( g_WOL_GameListRender == 4 ) /*0x7811b9*/
        goto LABEL_24; /*0x7811b9*/
      if ( g_WOL_GameListRender != 5 ) /*0x7811ca*/
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
  if ( g_WOL_GameListRender != 6 ) /*0x7811e9*/
  {
    if ( g_WOL_GameListRender != 7 ) /*0x7811f5*/
    {
      LABEL_38:
      if ( g_WOL_GameListRender == 6 ) /*0x78120b*/
        goto LABEL_39; /*0x78120b*/
      if ( g_WOL_GameListRender != 7 ) /*0x78121c*/
        goto LABEL_45; /*0x78121c*/
      LABEL_42:
      if ( a2 != 1 ) /*0x781221*/
        return 0; /*0x781221*/
      goto LABEL_43; /*0x781221*/
    }
    if ( a2 ) /*0x7811f9*/
      goto LABEL_42; /*0x7811f9*/
    LABEL_36:
    if ( (aP0->needsSave & 0x600) != 0 ) /*0x7811fe*/
      return 1; /*0x781205*/
    goto LABEL_38; /*0x7811fe*/
  }
  if ( a2 == 1 ) /*0x7811ee*/
    goto LABEL_36; /*0x7811ee*/
  LABEL_39:
  if ( a2 ) /*0x78120f*/
    return 0; /*0x781216*/
  LABEL_43:
  if ( (aP0->needsSave & 0x600) == 0 ) /*0x78122a*/
    return 1; /*0x781231*/
  LABEL_45:
  if ( g_WOL_GameListRender != 8 ) /*0x781237*/
  {
    if ( g_WOL_GameListRender != 9 ) /*0x781243*/
    {
      LABEL_52:
      if ( g_WOL_GameListRender == 8 ) /*0x78125b*/
        goto LABEL_53; /*0x78125b*/
      if ( g_WOL_GameListRender != 9 ) /*0x78126c*/
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
  if ( g_WOL_GameListRender != 10 ) /*0x78128f*/
  {
    if ( g_WOL_GameListRender != 11 ) /*0x78129b*/
    {
      LABEL_67:
      if ( g_WOL_GameListRender == 10 ) /*0x7812c0*/
        goto LABEL_68; /*0x7812c0*/
      if ( g_WOL_GameListRender != 11 ) /*0x7812d1*/
        goto LABEL_75; /*0x7812d1*/
      LABEL_71:
      if ( a2 != 1 ) /*0x7812d6*/
        return 0; /*0x7812d6*/
      goto LABEL_72; /*0x7812d6*/
    }
    if ( a2 ) /*0x78129f*/
      goto LABEL_71; /*0x78129f*/
    LABEL_64:
    if ( dword_A8B238[0] == 4 && (aP0->needsSave & 0x100) != 0 ) /*0x7812b3*/
      return 1; /*0x7812ba*/
    goto LABEL_67; /*0x7812b3*/
  }
  if ( a2 == 1 ) /*0x781294*/
    goto LABEL_64; /*0x781294*/
  LABEL_68:
  if ( a2 ) /*0x7812c4*/
    return 0; /*0x7812cb*/
  LABEL_72:
  if ( dword_A8B238[0] != 4 || (aP0->needsSave & 0x100) == 0 ) /*0x7812ee*/
    return 1; /*0x7812f5*/
  LABEL_75:
  if ( g_WOL_GameListRender != 12 ) /*0x7812fb*/
  {
    if ( g_WOL_GameListRender != 13 ) /*0x781307*/
    {
      LABEL_84:
      if ( g_WOL_GameListRender == 12 ) /*0x781333*/
        goto LABEL_85; /*0x781333*/
      if ( g_WOL_GameListRender != 13 ) /*0x781344*/
        return 0; /*0x781344*/
      LABEL_88:
      if ( a2 != 1 ) /*0x78134d*/
        return 0; /*0x78134d*/
      return dword_A8B238[0] == 4 && (aP0->abstractFlags || (aP0->needsSave & 0x100) != 0); /*0x78134d*/
    }
    if ( a2 ) /*0x78130b*/
      goto LABEL_88; /*0x78130b*/
    LABEL_80:
    if ( dword_A8B238[0] != 4 || !aP0->abstractFlags && (aP0->needsSave & 0x100) == 0 ) /*0x781326*/
      return 1; /*0x78132d*/
    goto LABEL_84; /*0x781326*/
  }
  if ( a2 == 1 ) /*0x781300*/
    goto LABEL_80; /*0x781300*/
  LABEL_85:
  if ( a2 ) /*0x781337*/
    return 0; /*0x78133e*/
  return dword_A8B238[0] == 4 && (aP0->abstractFlags || (aP0->needsSave & 0x100) != 0); /*0x781370*/
}
}
// 0x781380
namespace gamemd {
int sub_781380(unsigned int * a1, unsigned int * a2)
{

  int v2; // eax
  v2 = a1[1]; /*0x781388*/
  int v3; // ecx
  v3 = a2[1]; /*0x78138b*/
  if ( v2 >= v3 )
  {
    if ( v2 <= v3 )
      return 0; /*0x7813a9*/
    else
      return v3 != -1 ? 1 : -1;
  }
  else
  {
    int v4; // eax
    v4 = -(v2 != -1); /*0x781395*/
    (*((unsigned char *)&(v4))) = v4 & 0xFE; /*0x781397*/
    return v4 + 1; /*0x781399*/
  }
}
}
// 0x781480
namespace gamemd {
void GameListRenderWOL(CampaignScore * a1)
{

  HWND v1; // eax
  int v2; // ebx
  HWND DlgItem; // esi
  LRESULT v4; // eax
  LRESULT v5; // eax
  int *v6; // edx
  signed int v7; // ebp
  int v8; // eax
  int v9; // ecx
  LPARAM *v10; // esi
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  LPARAM v15; // ebx
  int v16; // edi
  BOOL v17; // eax
  int v18; // ebp
  LRESULT v19; // eax
  unsigned __int16 v20; // si
  HWND v21; // ebx
  int v22; // esi
  int v23; // eax
  const wchar_t *v24; // eax
  wchar_t *v25; // eax
  bool v26; // cc
  char *v27; // eax
  HWND v28; // esi
  LRESULT v29; // eax
  char *v30; // eax
  LRESULT v31; // eax
  HWND v32; // eax
  int (__cdecl *v33)(const void *, const void *); // [esp-Ch] [ebp-2A8h]
  wchar_t *StringCSF; // [esp-Ch] [ebp-2A8h]
  wchar_t *v35; // [esp-Ch] [ebp-2A8h]
  wchar_t *v36; // [esp-Ch] [ebp-2A8h]
  const wchar_t *v37; // [esp-Ch] [ebp-2A8h]
  void *v38; // [esp+Ch] [ebp-290h] BYREF
  Gadget v39; // [esp+10h] [ebp-28Ch] BYREF
  int v40; // [esp+1Ch] [ebp-280h]
  int v41; // [esp+20h] [ebp-27Ch]
  int v42; // [esp+24h] [ebp-278h]
  int i; // [esp+28h] [ebp-274h]
  int v44; // [esp+2Ch] [ebp-270h] BYREF
  int v45; // [esp+30h] [ebp-26Ch] BYREF
  HWND v46; // [esp+34h] [ebp-268h]
  int referenceCount; // [esp+38h] [ebp-264h]
  int *v48; // [esp+3Ch] [ebp-260h]
  int v49; // [esp+40h] [ebp-25Ch]
  LPARAM *v50; // [esp+44h] [ebp-258h]
  String v51; // [esp+48h] [ebp-254h] BYREF
  String v52; // [esp+50h] [ebp-24Ch] BYREF
  LPARAM v53; // [esp+58h] [ebp-244h]
  int v54; // [esp+5Ch] [ebp-240h] BYREF
  int v55; // [esp+60h] [ebp-23Ch] BYREF
  int v56; // [esp+64h] [ebp-238h] BYREF
  HWND v57; // [esp+68h] [ebp-234h]
  unsigned int v58[67]; // [esp+6Ch] [ebp-230h] BYREF
  wchar_t Buffer[80]; // [esp+178h] [ebp-124h] BYREF
  char Destination[132]; // [esp+218h] [ebp-84h] BYREF

v1 = (HWND)Dialog::FindByHandle((Dialog *)0x113); /*0x78148d*/
  v2 = 0; /*0x781492*/
  v57 = v1; /*0x781494*/
  if ( !v1 ) /*0x78149a*/
    return; /*0x78149a*/
  DlgItem = GetDlgItem(v1, 1774); /*0x7814ac*/
  v46 = DlgItem; /*0x7814b0*/
  if ( !DlgItem ) /*0x7814b4*/
    return; /*0x7814b4*/
  unknown_libname_73(&v52); /*0x7814c0*/
  v4 = SendMessageA(DlgItem, 0x188u, 0, 0); /*0x7814d3*/
  if ( v4 != -1 ) /*0x7814d8*/
    GetListBoxItemText(DlgItem, v4, (void **)&v52); /*0x7814e3*/
  unknown_libname_73(&v51); /*0x7814ec*/
  v5 = SendMessageA(DlgItem, 0x18Eu, 0, 0); /*0x7814f9*/
  if ( v5 != -1 ) /*0x7814fe*/
    GetListBoxItemText(DlgItem, v5, (void **)&v51); /*0x781509*/
  SendMessageA(DlgItem, 0x49Du, 0, 1); /*0x781517*/
  byte_B77E74 = 1; /*0x781519*/
  SendMessageA(DlgItem, 0x184u, 0, 0); /*0x781528*/
  referenceCount = dword_B76AC4.referenceCount; /*0x781538*/
  *(unsigned int *)&v52.m_3[1] = 1; /*0x78153c*/
  if ( g_WOL_GameListRender == 2 /*0x78157b*/
    || g_WOL_GameListRender == 3
    || g_WOL_GameListRender == 8
    || g_WOL_GameListRender == 9
    || g_WOL_GameListRender == 10
    || g_WOL_GameListRender == 11
    || g_WOL_GameListRender == 6
    || g_WOL_GameListRender == 7
    || g_WOL_GameListRender == 4
    || g_WOL_GameListRender == 5
    || g_WOL_GameListRender == 12
    || g_WOL_GameListRender == 13 )
  {
    *(unsigned int *)&v52.m_3[1] = 2; /*0x78157d*/
  }
  v6 = (int *)__2_YAPAXI_Z(8 * dword_B76AC4.referenceCount); /*0x781592*/
  v48 = v6; /*0x781599*/
  if ( v6 ) /*0x78159d*/
  {
    if ( g_WOL_GameListRender == 15 ) /*0x781649*/
    {
      v7 = dword_B76AC4.referenceCount; /*0x78164f*/
      v13 = 0; /*0x78165a*/
      memset(v58, 0, sizeof(v58)); /*0x781662*/
      if ( dword_B76AC4.referenceCount > 0 ) /*0x781664*/
      {
        do /*0x78169e*/
        {
          if ( v2 >= 0 && v13 < dword_B76AC4.referenceCount ) /*0x781670*/
            memcpy(v58, (const void *)(v2 + dword_B76AC4.occupant), sizeof(v58)); /*0x781684*/
          v14 = v58[10]; /*0x781686*/
          *v6 = v13; /*0x78168d*/
          v6->ptr_2 = v14; /*0x78168f*/
          ++v13; /*0x781692*/
          v2 += 268; /*0x781693*/
          v6 += 2; /*0x781699*/
        }
        while ( v13 < v7 ); /*0x78169e*/
      }
      v33 = (int (__cdecl *)(const void *, const void *))sub_7813B0; /*0x7816a0*/
      goto LABEL_28; /*0x7816a5*/
    }
  }
  else
  {
    g_WOL_GameListRender = 0; /*0x7815a3*/
  }
  v7 = dword_B76AC4.referenceCount; /*0x7815a9*/
  v8 = 0; /*0x7815b4*/
  memset(v58, 0, sizeof(v58)); /*0x7815bc*/
  if ( dword_B76AC4.referenceCount > 0 ) /*0x7815be*/
  {
    do /*0x7815f8*/
    {
      if ( v2 >= 0 && v8 < dword_B76AC4.referenceCount ) /*0x7815ca*/
        memcpy(v58, (const void *)(v2 + dword_B76AC4.occupant), sizeof(v58)); /*0x7815de*/
      v9 = v58[10]; /*0x7815e0*/
      *v6 = v8; /*0x7815e7*/
      v6->ptr_2 = v9; /*0x7815e9*/
      ++v8; /*0x7815ec*/
      v2 += 268; /*0x7815ed*/
      v6 += 2; /*0x7815f3*/
    }
    while ( v8 < v7 ); /*0x7815f8*/
  }
  v33 = (int (__cdecl *)(const void *, const void *))sub_781380; /*0x7815fa*/
LABEL_28:
  v10 = v48; /*0x7815ff*/
  qsort(v48, v7, 8u, v33); /*0x781607*/
  v11 = *(unsigned int *)&v52.ptr_4; /*0x78160c*/
  v12 = referenceCount; /*0x781610*/
  for ( i = 0; i < 2; ++i ) /*0x781619*/
  {
    v49 = 0; /*0x78161f*/
    if ( v11 <= 0 ) /*0x781623*/
      continue; /*0x781623*/
    do /*0x781bff*/
    {
      *(unsigned int *)&v51.ptr_4 = 0; /*0x78162b*/
      if ( v12 <= 0 ) /*0x78162f*/
        goto LABEL_100; /*0x78162f*/
      v50 = v10; /*0x781638*/
      v53 = v12 - 1; /*0x78163c*/
      while ( 1 ) /*0x7816b0*/
      {
        v15 = *(unsigned int *)&v51.ptr_4; /*0x7816b0*/
        memset(v58, 0, sizeof(v58)); /*0x7816bf*/
        if ( g_WOL_GameListRender == 1 ) /*0x7816c9*/
        {
          v15 = v53; /*0x7816e1*/
        }
        else if ( g_WOL_GameListRender && *v50 >= 0 && *v50 < v12 ) /*0x7816db*/
        {
          v15 = *v50; /*0x7816dd*/
        }
        if ( v15 >= 0 && v15 < dword_B76AC4.referenceCount ) /*0x7816ef*/
          memcpy(v58, (const void *)(dword_B76AC4.occupant + 268 * v15), sizeof(v58)); /*0x78170d*/
        if ( *(unsigned int *)&dword_A8B238 != 4 || (v58[8] & 0x800) == 0 && (v58[8] & 0x1000) == 0 ) /*0x78173a*/
        {
          strncpy(Destination, (const char *)&v58[56], 0x80u); /*0x781757*/
          v56 = 0; /*0x781763*/
          v55 = 0; /*0x781767*/
          v54 = 0; /*0x78176b*/
          v44 = 0; /*0x78176f*/
          v45 = 0; /*0x781773*/
          unknown_libname_73(&v38); /*0x781777*/
          ParseStringCommaInts(Destination, &v56, &v55, &v54, &v44, &v45, &v38); /*0x7817a3*/
          v16 = v54 + v58[3] - v44; /*0x7817b9*/
          v17 = v44 || v45; /*0x7817cb*/
          v18 = v58[2] - v17; /*0x7817d4*/
          if ( g_MenuStateFlags ) /*0x7817dd*/
          {
            if ( !v45 || v44 ) /*0x7817e5*/
            {
              if ( i != 1 ) /*0x7817f9*/
                goto LABEL_97; /*0x7817f9*/
            }
            else if ( i ) /*0x7817ed*/
            {
              goto LABEL_97; /*0x7817ed*/
            }
LABEL_67:
            if ( !FilterWOLGameListEntry(v58, v49, v45, v44) ) /*0x781824*/
            {
              swprintf(Buffer, (const size_t)aHsDD, (const wchar_t *const)&v58[13], v16, v18); /*0x781848*/
              v19 = SendMessageA(v46, 0x4C7u, 0xFFFFFFFF, (LPARAM)&v58[13]); /*0x781864*/
              v20 = v19; /*0x78186a*/
              SendMessageA(v46, 0x19Au, v19, v15); /*0x781878*/
              Gadget::InitProperties(&v39); /*0x781882*/
              *(unsigned int *)v39.q000 = 1; /*0x781893*/
              ((WideString *)(void **)&v39.m_1[3])->Reassign( Buffer); /*0x78189b*/
              ((WideString *)(void **)&v39.m_5[3])->Reassign( &g_TypeClass_DefaultString); /*0x7818a9*/
              v40 = -1; /*0x7818bb*/
              if ( g_MenuStateFlags ) /*0x7818bf*/
              {
                if ( !v45 || v44 ) /*0x7818cf*/
                  v40 = (int)&off_808080; /*0x7818d7*/
              }
              else if ( v16 == v18 ) /*0x7818df*/
              {
                v40 = (int)&off_808080; /*0x7818e6*/
              }
              v21 = v46; /*0x7818f0*/
              v22 = v20 << 16; /*0x781900*/
              SendMessageA(v46, 0x4A8u, v22 | (unsigned __int16)dword_B77A8C, (LPARAM)&v39); /*0x781917*/
              *(unsigned int *)v39.__pad_0 = 0; /*0x781924*/
              ((WideString *)(void **)&v39.m_5[3])->Reassign( &g_TypeClass_DefaultString); /*0x781928*/
              *(unsigned int *)v39.__pad_0 = 2; /*0x781931*/
              ((WideString *)(void **)&v39.m_5[3])->Reassign( &g_TypeClass_DefaultString); /*0x78193e*/
              if ( *(unsigned int *)&dword_A8B238 != 4 ) /*0x78194a*/
                goto LABEL_80; /*0x78194a*/
              if ( (v58[8] & 0x100) != 0 ) /*0x78195c*/
              {
                v41 = HashTable::Find(&g_DialogHashTable, g_Str_File_wolclan_pcx, 0); /*0x78197f*/
                StringCSF = GetStringCSF(aTxtBattleclanG, 0, g_Str_File_wonline_cpp, 3351); /*0x781988*/
                ((WideString *)(void **)&v39.m_5[3])->Reassign( StringCSF); /*0x781989*/
                goto LABEL_81; /*0x781989*/
              }
              if ( v58[5] || (v58[8] & 0x100) != 0 ) /*0x781996*/
              {
                v41 = HashTable::Find(&g_DialogHashTable, g_Str_File_woltrny_pcx, 0); /*0x7819b9*/
                v35 = GetStringCSF(aTxtTournamentG, 0, g_Str_File_wonline_cpp, 3356); /*0x7819c2*/
                ((WideString *)(void **)&v39.m_5[3])->Reassign( v35); /*0x7819c3*/
              }
              else
              {
LABEL_80:
                v41 = HashTable::Find(&g_DialogHashTable, g_Str_File_gt18_pcx, 0); /*0x7819d5*/
                ((WideString *)(void **)&v39.m_5[3])->Reassign( &g_TypeClass_DefaultString); /*0x7819e2*/
              }
LABEL_81:
              SendMessageA(v21, 0x4A8u, v22 | (unsigned __int16)dword_B778D0, (LPARAM)&v39); /*0x7819e7*/
              *(unsigned int *)v39.__pad_0 = 2; /*0x781a07*/
              ((WideString *)(void **)&v39.m_5[3])->Reassign( &g_TypeClass_DefaultString); /*0x781a14*/
              if ( (v58[7] & 0x100) != 0 ) /*0x781a23*/
              {
                v41 = HashTable::Find(&g_DialogHashTable, g_Str_File_wolpriv_pcx, 0); /*0x781a46*/
                v36 = GetStringCSF(aTxtGamePasswor, 0, g_Str_File_wonline_cpp, 3370); /*0x781a4f*/
                ((WideString *)(void **)&v39.m_5[3])->Reassign( v36); /*0x781a50*/
              }
              else
              {
                *(unsigned int *)v39.__pad_0 = 0; /*0x781a52*/
                ((WideString *)(void **)&v39.m_5[3])->Reassign( &g_TypeClass_DefaultString); /*0x781a5f*/
              }
              SendMessageA(v21, 0x4A8u, v22 | (unsigned __int16)dword_B778CC, (LPARAM)&v39); /*0x781a7c*/
              *(unsigned int *)v39.__pad_0 = 0; /*0x781a82*/
              ((WideString *)(void **)&v39.m_1[3])->Reassign( &g_TypeClass_DefaultString); /*0x781a8b*/
              ((WideString *)(void **)&v39.m_5[3])->Reassign( &g_TypeClass_DefaultString); /*0x781a99*/
              if ( (v58[8] & 0x600) != 0 ) /*0x781aac*/
              {
                if ( v44 || !v45 ) /*0x781ab6*/
                {
                  *(unsigned int *)v39.__pad_0 = 2; /*0x781ac9*/
                  v23 = HashTable::Find(&g_DialogHashTable, g_Str_File_wolreslk_pcx, 0); /*0x781ad6*/
                }
                else
                {
                  *(unsigned int *)v39.__pad_0 = 2; /*0x781ab9*/
                  v23 = HashTable::Find(&g_DialogHashTable, g_Str_File_wolrslkob_pcx, 0); /*0x781ac6*/
                }
LABEL_92:
                v41 = v23; /*0x781afa*/
              }
              else if ( !v44 && v45 ) /*0x781ae0*/
              {
                *(unsigned int *)v39.__pad_0 = 2; /*0x781ae3*/
                v23 = HashTable::Find(&g_DialogHashTable, g_Str_File_wolob_pcx, 0); /*0x781af5*/
                goto LABEL_92; /*0x781af5*/
              }
              SendMessageA(v21, 0x4A8u, v22 | LOWORD(dword_B76AC4.nextObject), (LPARAM)&v39); /*0x781b18*/
              v24 = (const wchar_t *)v58[10]; /*0x781b1a*/
              if ( v58[10] == -1 ) /*0x781b24*/
              {
                *(unsigned int *)v39.__pad_0 = 1; /*0x781b2f*/
                ((WideString *)(void **)&v39.m_1[3])->Reassign( asc_84A6E0); /*0x781b37*/
                v24 = (const wchar_t *)v58[10]; /*0x781b3c*/
              }
              else
              {
                v42 = v58[10]; /*0x781b45*/
                *(unsigned int *)v39.__pad_0 = 3; /*0x781b49*/
              }
              v37 = v24; /*0x781b51*/
              v25 = GetStringCSF(aWolGameping, 0, g_Str_File_wonline_cpp, 3410); /*0x781b63*/
              swprintf(Buffer, (const size_t)v25, v37); /*0x781b71*/
              ((WideString *)(void **)&v39.m_5[3])->Reassign( Buffer); /*0x781b85*/
              SendMessageA(v21, 0x4A8u, v22 | (unsigned __int16)dword_B7643C, (LPARAM)&v39); /*0x781ba2*/
              ((DeleteAndZero *)&v39.m_5[3])->Alt(); /*0x781ba8*/
              ((DeleteAndZero *)&v39.m_1[3])->Alt(); /*0x781bb1*/
            }
          }
          else
          {
            if ( v16 == v18 ) /*0x781806*/
            {
              if ( i != 1 ) /*0x78180b*/
                goto LABEL_97; /*0x78180b*/
              goto LABEL_67; /*0x78180b*/
            }
            if ( !i ) /*0x781814*/
              goto LABEL_67; /*0x781814*/
          }
LABEL_97:
          DeleteAndZero((ObjectClass *)&v38); /*0x781bb6*/
        }
        v26 = ++*(unsigned int *)&v51.ptr_4 < referenceCount; /*0x781bd4*/
        v50 += 2; /*0x781bda*/
        --v53; /*0x781bde*/
        if ( !v26 ) /*0x781be2*/
          break; /*0x781be2*/
        v12 = referenceCount; /*0x7816aa*/
      }
      v11 = *(unsigned int *)&v52.ptr_4; /*0x781be8*/
      v10 = v48; /*0x781bec*/
      v12 = referenceCount; /*0x781bf0*/
LABEL_100:
      ++v49; /*0x781bf4*/
    }
    while ( v49 < v11 ); /*0x781bff*/
  }
  if ( v10 ) /*0x781c19*/
    __3_YAXPAX_Z(v10); /*0x781c1c*/
  v27 = ((String *)&v52)->GetOrEmpty_Alt(); /*0x781c28*/
  v28 = v46; /*0x781c2d*/
  v29 = SendMessageA(v46, 0x4C5u, 0, (LPARAM)v27); /*0x781c3f*/
  SendMessageA(v28, 0x186u, v29, 0); /*0x781c49*/
  v30 = ((String *)&v51)->GetOrEmpty_Alt(); /*0x781c4f*/
  v31 = SendMessageA(v28, 0x4C5u, 0, (LPARAM)v30); /*0x781c5c*/
  if ( v31 != -1 ) /*0x781c61*/
    SendMessageA(v28, 0x197u, v31, 0); /*0x781c6b*/
  SendMessageA(v28, 0x49Du, 0, 0); /*0x781c75*/
  InvalidateRect(v28, 0, 0); /*0x781c7a*/
  if ( v57 == (HWND)Dialog::GetCurrent() ) /*0x781c8d*/
  {
    v32 = GetDlgItem(v57, 1344); /*0x781c95*/
    SetFocus(v32); /*0x781c9c*/
  }
  DeleteAndZero((ObjectClass *)&v51); /*0x781ca6*/
  DeleteAndZero((ObjectClass *)&v52); /*0x781caf*/

}
}
// 0x781FB0
namespace gamemd {
char InsertGameSettings(unsigned char * a1, char a2)
{
  char *v2; // ebp
  int owningHouseIndex; // edx
  char result; // al
  int v5; // ebx
  ObjectClass *nextObject; // ebp
  int v7; // ebp
  int v8; // esi
  int v9; // esi
  int v10; // esi
  char *v11; // edi
  int v12; // ebp
  int v13; // ebx
  int v14; // ebx
  int v15; // esi
  int v16; // esi
  int v19; // [esp+18h] [ebp-70h]
  unsigned char v20[108]; // [esp+1Ch] [ebp-6Ch] BYREF

  v2 = a1; /*0x781fb6*/
  owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x781fbd*/
  memset(v20, 0, sizeof(v20)); /*0x781fce*/
  v19 = g_WOL_UserList.owningHouseIndex; /*0x781fd8*/
  if ( !g_WOL_UserList.owningHouseIndex ) /*0x781fdc*/
    return ((DynamicClass *)(DynamicClass *)&g_WOL_UserList.owningHouseIndex)->Insert( a1, 0); /*0x781ff1*/
  v5 = 0; /*0x781ff2*/
  if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x781ff6*/
    memcpy(v20, g_WOL_UserList.nextObject, sizeof(v20)); /*0x782007*/
  if ( (v20[0] & 1) != 0 ) /*0x78200e*/
  {
    nextObject = g_WOL_UserList.nextObject; /*0x782010*/
    do /*0x782038*/
    {
      if ( v5 >= g_WOL_UserList.owningHouseIndex ) /*0x782018*/
        break; /*0x782018*/
      ++v5; /*0x78201a*/
      nextObject = &nextObject->health; /*0x78201b*/
      if ( v5 >= 0 && v5 < g_WOL_UserList.owningHouseIndex ) /*0x782024*/
        memcpy(v20, nextObject, sizeof(v20)); /*0x782031*/
    }
    while ( (v20[0] & 1) != 0 ); /*0x782038*/
    v2 = a1; /*0x78203a*/
  }
  if ( (*v2 & 1) != 0 ) /*0x782042*/
  {
    v7 = 0; /*0x782048*/
    if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x78204c*/
      memcpy(v20, g_WOL_UserList.nextObject, sizeof(v20)); /*0x78205d*/
    if ( a2 ) /*0x782065*/
    {
      if ( v5 <= 0 ) /*0x782069*/
        goto LABEL_34; /*0x782069*/
      v8 = 0; /*0x78206f*/
      while ( _strcmpi(&v20[36], a1 + 36) < 0 ) /*0x782088*/
      {
        owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x78208a*/
        ++v7; /*0x782090*/
        v8 += 108; /*0x782091*/
        if ( v8 >= 0 && v7 < g_WOL_UserList.owningHouseIndex ) /*0x78209c*/
          memcpy(v20, (char *)g_WOL_UserList.nextObject + v8, sizeof(v20)); /*0x7820ae*/
        if ( v7 >= v5 ) /*0x7820b6*/
          goto LABEL_34; /*0x7820b6*/
      }
    }
    else
    {
      if ( v5 <= 0 ) /*0x7820bc*/
        goto LABEL_34; /*0x7820bc*/
      v9 = 0; /*0x7820be*/
      while ( _strcmpi(&v20[36], a1 + 36) > 0 ) /*0x7820d7*/
      {
        owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7820d9*/
        ++v7; /*0x7820df*/
        v9 += 108; /*0x7820e0*/
        if ( v9 >= 0 && v7 < g_WOL_UserList.owningHouseIndex ) /*0x7820eb*/
          memcpy(v20, (char *)g_WOL_UserList.nextObject + v9, sizeof(v20)); /*0x7820fd*/
        if ( v7 >= v5 ) /*0x782105*/
          goto LABEL_34; /*0x782105*/
      }
    }
    owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x782109*/
    LABEL_34:
    v10 = v7; /*0x78210f*/
    if ( v7 > owningHouseIndex ) /*0x782113*/
      v10 = owningHouseIndex; /*0x782115*/
    if ( v10 >= g_WOL_UserList.fallRate ) /*0x78211d*/
    {
      DynamicArray::Grow((DynamicArray *)&g_WOL_UserList.owningHouseIndex); /*0x782124*/
      owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x782129*/
    }
    if ( owningHouseIndex >= g_WOL_UserList.fallRate ) /*0x782135*/
    {
      DynamicArray::Grow((DynamicArray *)&g_WOL_UserList.owningHouseIndex); /*0x78213c*/
      owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x782141*/
    }
    if ( v10 < owningHouseIndex ) /*0x782149*/
    {
      memcpy( /*0x782174*/
        &g_WOL_UserList.nextObject->alignmentPadding69[108 * v10 + 3],
        (char *)g_WOL_UserList.nextObject + 108 * v10,
        108 * owningHouseIndex - 108 * v10);
      owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x782179*/
    }
    result = (char)g_WOL_UserList.nextObject; /*0x782182*/
    v11 = (char *)g_WOL_UserList.nextObject + 108 * v10; /*0x78218d*/
    if ( !v11 ) /*0x782192*/
      goto LABEL_75; /*0x782192*/
    goto LABEL_74; /*0x782192*/
  }
  v12 = v5; /*0x78219f*/
  if ( v5 >= 0 && v5 < g_WOL_UserList.owningHouseIndex ) /*0x7821a5*/
    memcpy(v20, (char *)g_WOL_UserList.nextObject + 108 * v5, sizeof(v20)); /*0x7821bf*/
  if ( a2 ) /*0x7821c7*/
  {
    if ( v5 >= g_WOL_UserList.owningHouseIndex ) /*0x7821cb*/
      goto LABEL_65; /*0x7821cb*/
    v13 = 108 * v5; /*0x7821d7*/
    while ( _strcmpi(&v20[36], a1 + 36) < 0 ) /*0x7821f1*/
    {
      owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7821f3*/
      ++v12; /*0x7821f9*/
      v13 += 108; /*0x7821fa*/
      if ( v13 >= 0 && v12 < g_WOL_UserList.owningHouseIndex ) /*0x782201*/
        memcpy(v20, (char *)g_WOL_UserList.nextObject + v13, sizeof(v20)); /*0x782215*/
      if ( v12 >= v19 ) /*0x78221b*/
        goto LABEL_65; /*0x78221b*/
    }
  }
  else
  {
    if ( v5 >= g_WOL_UserList.owningHouseIndex ) /*0x782221*/
      goto LABEL_65; /*0x782221*/
    v14 = 108 * v5; /*0x782229*/
    while ( _strcmpi(&v20[36], a1 + 36) > 0 ) /*0x782243*/
    {
      owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x782245*/
      ++v12; /*0x78224b*/
      v14 += 108; /*0x78224c*/
      if ( v14 >= 0 && v12 < g_WOL_UserList.owningHouseIndex ) /*0x782253*/
        memcpy(v20, (char *)g_WOL_UserList.nextObject + v14, sizeof(v20)); /*0x782267*/
      if ( v12 >= v19 ) /*0x78226d*/
        goto LABEL_65; /*0x78226d*/
    }
  }
  owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x782271*/
  LABEL_65:
  v15 = v12; /*0x782277*/
  if ( v12 > owningHouseIndex ) /*0x78227b*/
    v15 = owningHouseIndex; /*0x78227d*/
  if ( v15 >= g_WOL_UserList.fallRate ) /*0x782285*/
  {
    DynamicArray::Grow((DynamicArray *)&g_WOL_UserList.owningHouseIndex); /*0x78228c*/
    owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x782291*/
  }
  if ( owningHouseIndex >= g_WOL_UserList.fallRate ) /*0x78229d*/
  {
    DynamicArray::Grow((DynamicArray *)&g_WOL_UserList.owningHouseIndex); /*0x7822a4*/
    owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7822a9*/
  }
  if ( v15 < owningHouseIndex ) /*0x7822b1*/
  {
    memcpy( /*0x7822dc*/
      &g_WOL_UserList.nextObject->alignmentPadding69[108 * v15 + 3],
      (char *)g_WOL_UserList.nextObject + 108 * v15,
      108 * owningHouseIndex - 108 * v15);
    owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7822e1*/
  }
  v16 = 3 * v15; /*0x7822f0*/
  result = 9 * v16; /*0x7822f3*/
  v11 = (char *)g_WOL_UserList.nextObject + 36 * v16; /*0x7822f6*/
  if ( !v11 ) /*0x7822fb*/
    goto LABEL_75; /*0x7822fb*/
  LABEL_74:
  memcpy(v11, a1, 0x6Cu); /*0x7822fd*/
  owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x782308*/
  LABEL_75:
  g_WOL_UserList.owningHouseIndex = owningHouseIndex + 1; /*0x78230e*/
  return result; /*0x781fea*/
}
}
// 0x782320
namespace gamemd {
int InsertBuddyList(const char *a1, char a2)
{

  char *v4; // eax
  int v5; // esi
  int v6; // ecx
  int v7; // edi
  int v8; // ebx
  int v9; // ebp
  bool v10; // sf
  HashTable *v11; // esi
  String *v12; // esi
  char *v13; // esi
  int v14; // eax
  int v15; // ebx
  int v16; // ebp
  HashTable *v17; // esi
  String *v18; // esi
  char *v19; // esi
  int v20; // ebp
  int v21; // ebx
  HashTable *v22; // esi
  String *v23; // esi
  char *v24; // esi
  HashTable *v25; // esi
  int v26; // edi
  String *v27; // esi
  char *v28; // esi
  int v29; // ebx
  int v30; // ebp
  HashTable *v31; // esi
  String *v32; // esi
  char *v33; // esi
  int v34; // eax
  int v35; // ebp
  HashTable *v36; // esi
  String *v37; // esi
  char *v38; // esi
  int v39; // ebp
  HashTable *v40; // esi
  String *v41; // esi
  char *v42; // esi
  int v43; // esi
  int v44; // ecx
  char *v45; // edi
  String v47[30]; // [esp+10h] [ebp-F0h] BYREF

  *(unsigned int *)&v47[2].m_3[1] = a1; /*0x782332*/
  unknown_libname_73(v47); /*0x782336*/
  *v47->ptr_8.__pad_0 = -1; /*0x782349*/
  memset(&v47[16].m_3[1], 0, 0x6Cu); /*0x782351*/
  String::Assign_Bool(v47, a1 + 36); /*0x78235b*/
  String::ToLower(v47); /*0x782364*/
  if ( g_WOL_HashTable ) /*0x782371*/
  {
    *(unsigned int *)&v47[1].m_3[1] = 0; /*0x78237d*/
    if ( (unsigned __int8)HashTable::LookupString(g_WOL_HashTable, (const char **)v47, &v47[1].m_3[1]) ) /*0x782385*/
    {
      if ( *(unsigned int *)&v47[1].m_3[1] ) /*0x782394*/
        memcpy(&v47[16].m_3[1], *(const void **)&v47[1].m_3[1], 0x6Cu); /*0x7823a2*/
      *v47->ptr_8.__pad_0 = *v47->u32_50.__pad_0; /*0x7823ab*/
    }
  }
  memset(&v47[3], 0, 0x6Cu); /*0x7823c0*/
  *(unsigned int *)&v47[1].m_3[1] = *(unsigned int *)&stru_B778FC.m_3[1]; /*0x7823c6*/
  if ( *(unsigned int *)&stru_B778FC.m_3[1] ) /*0x7823ca*/
  {
    *v47->ptr_4.__pad_0 = 0; /*0x7823e3*/
    if ( *(int *)&stru_B778FC.m_3[1] > 0 ) /*0x7823ed*/
      memcpy(&v47[3], dword_B77908, 0x6Cu); /*0x7823fa*/
    if ( (v47[3].__pad_0[0] & 1) != 0 ) /*0x782401*/
    {
      v4 = (char *)dword_B77908; /*0x782403*/
      do /*0x782435*/
      {
        v5 = *v47->ptr_4.__pad_0; /*0x782409*/
        if ( *v47->ptr_4.__pad_0 >= *(int *)&v47[1].m_3[1] ) /*0x78240f*/
          break; /*0x78240f*/
        v4 += 108; /*0x782413*/
        v6 = ++*v47->ptr_4.__pad_0; /*0x782416*/
        if ( v5 + 1 >= 0 && v6 < *(int *)&stru_B778FC.m_3[1] ) /*0x782421*/
          memcpy(&v47[3], v4, 0x6Cu); /*0x78242e*/
      }
      while ( (v47[3].__pad_0[0] & 1) != 0 ); /*0x782435*/
    }
    if ( (**(unsigned char **)&v47[2].m_3[1] & 1) != 0 ) /*0x78243e*/
    {
      *(unsigned int *)&v47[0].m_3[1] = 0; /*0x782446*/
      if ( *(int *)&stru_B778FC.m_3[1] > 0 ) /*0x78244e*/
        memcpy(&v47[3], dword_B77908, 0x6Cu); /*0x78245b*/
      String::Assign_Bool(v47, &v47[7].m_3[1]); /*0x782466*/
      String::ToLower(v47); /*0x78246f*/
      v7 = -1; /*0x78247a*/
      if ( g_WOL_HashTable ) /*0x78247f*/
      {
        *(unsigned int *)&v47[1].m_3[1] = 0; /*0x78248b*/
        if ( (unsigned __int8)HashTable::LookupString(g_WOL_HashTable, (const char **)v47, &v47[1].m_3[1]) ) /*0x782493*/
        {
          if ( *(unsigned int *)&v47[1].m_3[1] ) /*0x7824a2*/
            memcpy(&v47[16].m_3[1], *(const void **)&v47[1].m_3[1], 0x6Cu); /*0x7824b0*/
          v7 = *v47->u32_50.__pad_0; /*0x7824b2*/
        }
      }
      if ( a2 ) /*0x7824bf*/
      {
        if ( *v47->ptr_4.__pad_0 > 0 ) /*0x7824c7*/
        {
          v8 = *(unsigned int *)&v47[0].m_3[1]; /*0x7824cd*/
          v9 = 0; /*0x7824d1*/
          do /*0x782597*/
          {
            if ( v7 >= *v47->ptr_8.__pad_0 || v7 <= 0 ) /*0x7824db*/
            {
              if ( *v47->ptr_8.__pad_0 != -1 || v7 <= 0 ) /*0x7824ea*/
                goto LABEL_69; /*0x7824ea*/
              v8 = *(unsigned int *)&v47[0].m_3[1]; /*0x7824f0*/
            }
            ++v8; /*0x7824f4*/
            v10 = v9 + 108 < 0; /*0x7824f5*/
            v9 += 108; /*0x7824f5*/
            *(unsigned int *)&v47[0].m_3[1] = v8; /*0x7824f8*/
            if ( !v10 && v8 < *(int *)&stru_B778FC.m_3[1] ) /*0x782504*/
              memcpy(&v47[3], (char *)dword_B77908 + v9, 0x6Cu); /*0x782518*/
            String::Assign_Bool(v47, &v47[7].m_3[1]); /*0x782523*/
            String::ToLower(v47); /*0x78252c*/
            v11 = g_WOL_HashTable; /*0x782531*/
            v7 = -1; /*0x782537*/
            if ( g_WOL_HashTable ) /*0x78253c*/
            {
              if ( g_WOL_HashTable->HashTable_field_0x04 ) /*0x78253e*/
              {
                v12 = *(String **)(*(unsigned int *)v11->__pad_0 /*0x782553*/
                                 + 4 * HashMap::ComputeIndex_2((int *)g_WOL_HashTable->__pad_0, (int)v47));
                if ( v12 ) /*0x782558*/
                {
                  while ( !(unsigned __int8)String::Compare(v12, (const char **)v47) ) /*0x782568*/
                  {
                    v12 = *v12->attachedBomb.__pad_0; /*0x78256a*/
                    if ( !v12 ) /*0x78256f*/
                      goto LABEL_45; /*0x78256f*/
                  }
                  v13 = &v12->ptr_4; /*0x782577*/
                  if ( v13 ) /*0x78257c*/
                    memcpy(&v47[16].m_3[1], v13, 0x6Cu); /*0x78258a*/
                  v7 = *v47->u32_50.__pad_0; /*0x78258c*/
                }
              }
            }
LABEL_45:
            ; /*0x782593*/
          }
          while ( v8 < *v47->ptr_4.__pad_0 ); /*0x782597*/
        }
      }
      else if ( *v47->ptr_4.__pad_0 > 0 ) /*0x7825a4*/
      {
        v14 = *v47->ptr_8.__pad_0; /*0x7825aa*/
        v15 = *(unsigned int *)&v47[0].m_3[1]; /*0x7825ae*/
        v16 = 0; /*0x7825b2*/
        while ( v7 > v14 && v7 > 0 || v14 == -1 && v7 > 0 ) /*0x7825cd*/
        {
          ++v15; /*0x7825d3*/
          v16 += 108; /*0x7825d4*/
          if ( v16 >= 0 && v15 < *(int *)&stru_B778FC.m_3[1] ) /*0x7825df*/
            memcpy(&v47[3], (char *)dword_B77908 + v16, 0x6Cu); /*0x7825f2*/
          String::Assign_Bool(v47, &v47[7].m_3[1]); /*0x7825fd*/
          String::ToLower(v47); /*0x782606*/
          v17 = g_WOL_HashTable; /*0x78260b*/
          v7 = -1; /*0x782611*/
          if ( g_WOL_HashTable ) /*0x782616*/
          {
            if ( g_WOL_HashTable->HashTable_field_0x04 ) /*0x782618*/
            {
              v18 = *(String **)(*(unsigned int *)v17->__pad_0 /*0x78262d*/
                               + 4 * HashMap::ComputeIndex_2((int *)g_WOL_HashTable->__pad_0, (int)v47));
              if ( v18 ) /*0x782632*/
              {
                while ( !(unsigned __int8)String::Compare(v18, (const char **)v47) ) /*0x782642*/
                {
                  v18 = *v18->attachedBomb.__pad_0; /*0x782644*/
                  if ( !v18 ) /*0x782649*/
                    goto LABEL_66; /*0x782649*/
                }
                v19 = &v18->ptr_4; /*0x782651*/
                if ( v19 ) /*0x782656*/
                  memcpy(&v47[16].m_3[1], v19, 0x6Cu); /*0x782664*/
                v7 = *v47->u32_50.__pad_0; /*0x782666*/
              }
            }
          }
LABEL_66:
          if ( v15 >= *v47->ptr_4.__pad_0 ) /*0x782671*/
            goto LABEL_160; /*0x782671*/
          v14 = *v47->ptr_8.__pad_0; /*0x7825b6*/
        }
        *(unsigned int *)&v47[0].m_3[1] = v15; /*0x78267c*/
LABEL_69:
        if ( *(int *)&v47[0].m_3[1] < *v47->ptr_4.__pad_0 ) /*0x78268a*/
        {
          v20 = 108 * *(unsigned int *)&v47[0].m_3[1]; /*0x782698*/
          do /*0x782768*/
          {
            if ( *v47->ptr_8.__pad_0 != v7 /*0x7826bc*/
              || _strcmpi(&v47[7].m_3[1], (char *)(*(unsigned int *)&v47[2].m_3[1] + 36)) >= 0 )
            {
              break; /*0x7826bc*/
            }
            v21 = *(unsigned int *)&v47[0].m_3[1] + 1; /*0x7826c6*/
            v10 = v20 + 108 < 0; /*0x7826c7*/
            v20 += 108; /*0x7826c7*/
            ++*(unsigned int *)&v47[0].m_3[1]; /*0x7826ca*/
            if ( !v10 && v21 < *(int *)&stru_B778FC.m_3[1] ) /*0x7826d6*/
              memcpy(&v47[3], (char *)dword_B77908 + v20, 0x6Cu); /*0x7826e9*/
            String::Assign_Bool(v47, &v47[7].m_3[1]); /*0x7826f4*/
            String::ToLower(v47); /*0x7826fd*/
            v22 = g_WOL_HashTable; /*0x782702*/
            v7 = -1; /*0x782708*/
            if ( g_WOL_HashTable ) /*0x78270d*/
            {
              if ( g_WOL_HashTable->HashTable_field_0x04 ) /*0x78270f*/
              {
                v23 = *(String **)(*(unsigned int *)v22->__pad_0 /*0x782724*/
                                 + 4 * HashMap::ComputeIndex_2((int *)g_WOL_HashTable->__pad_0, (int)v47));
                if ( v23 ) /*0x782729*/
                {
                  while ( !(unsigned __int8)String::Compare(v23, (const char **)v47) ) /*0x782739*/
                  {
                    v23 = *v23->attachedBomb.__pad_0; /*0x78273b*/
                    if ( !v23 ) /*0x782740*/
                      goto LABEL_85; /*0x782740*/
                  }
                  v24 = &v23->ptr_4; /*0x782748*/
                  if ( v24 ) /*0x78274d*/
                    memcpy(&v47[16].m_3[1], v24, 0x6Cu); /*0x78275b*/
                  v7 = *v47->u32_50.__pad_0; /*0x78275d*/
                }
              }
            }
LABEL_85:
            ;
          }
          while ( v21 < *v47->ptr_4.__pad_0 ); /*0x782768*/
        }
      }
    }
    else
    {
      *(unsigned int *)&v47[0].m_3[1] = *v47->ptr_4.__pad_0; /*0x782779*/
      if ( *v47->ptr_4.__pad_0 >= 0 && *v47->ptr_4.__pad_0 < *(int *)&stru_B778FC.m_3[1] ) /*0x782781*/
        memcpy(&v47[3], (char *)dword_B77908 + 108 * *v47->ptr_4.__pad_0, 0x6Cu); /*0x782796*/
      String::Assign_Bool(v47, &v47[7].m_3[1]); /*0x7827a1*/
      String::ToLower(v47); /*0x7827aa*/
      v25 = g_WOL_HashTable; /*0x7827af*/
      v26 = -1; /*0x7827b5*/
      if ( g_WOL_HashTable ) /*0x7827ba*/
      {
        if ( g_WOL_HashTable->HashTable_field_0x04 ) /*0x7827bc*/
        {
          v27 = *(String **)(*(unsigned int *)v25->__pad_0 /*0x7827d1*/
                           + 4 * HashMap::ComputeIndex_2((int *)g_WOL_HashTable->__pad_0, (int)v47));
          if ( v27 ) /*0x7827d6*/
          {
            while ( !(unsigned __int8)String::Compare(v27, (const char **)v47) ) /*0x7827e6*/
            {
              v27 = *v27->attachedBomb.__pad_0; /*0x7827e8*/
              if ( !v27 ) /*0x7827ed*/
                goto LABEL_99; /*0x7827ed*/
            }
            v28 = &v27->ptr_4; /*0x7827f5*/
            if ( v28 ) /*0x7827fa*/
              memcpy(&v47[16].m_3[1], v28, 0x6Cu); /*0x782808*/
            v26 = *v47->u32_50.__pad_0; /*0x78280a*/
          }
        }
      }
LABEL_99:
      if ( a2 ) /*0x78281b*/
      {
        if ( *v47->ptr_4.__pad_0 < *(int *)&v47[1].m_3[1] ) /*0x782823*/
        {
          v29 = *(unsigned int *)&v47[0].m_3[1]; /*0x78282b*/
          v30 = 108 * *v47->ptr_4.__pad_0; /*0x782835*/
          do /*0x7828fc*/
          {
            if ( v26 >= *v47->ptr_8.__pad_0 || v26 <= 0 ) /*0x782840*/
            {
              if ( *v47->ptr_8.__pad_0 != -1 || v26 <= 0 ) /*0x78284f*/
                goto LABEL_143; /*0x78284f*/
              v29 = *(unsigned int *)&v47[0].m_3[1]; /*0x782855*/
            }
            ++v29; /*0x782859*/
            v10 = v30 + 108 < 0; /*0x78285a*/
            v30 += 108; /*0x78285a*/
            *(unsigned int *)&v47[0].m_3[1] = v29; /*0x78285d*/
            if ( !v10 && v29 < *(int *)&stru_B778FC.m_3[1] ) /*0x782869*/
              memcpy(&v47[3], (char *)dword_B77908 + v30, 0x6Cu); /*0x78287d*/
            String::Assign_Bool(v47, &v47[7].m_3[1]); /*0x782888*/
            String::ToLower(v47); /*0x782891*/
            v31 = g_WOL_HashTable; /*0x782896*/
            v26 = -1; /*0x78289c*/
            if ( g_WOL_HashTable ) /*0x7828a1*/
            {
              if ( g_WOL_HashTable->HashTable_field_0x04 ) /*0x7828a3*/
              {
                v32 = *(String **)(*(unsigned int *)v31->__pad_0 /*0x7828b8*/
                                 + 4 * HashMap::ComputeIndex_2((int *)g_WOL_HashTable->__pad_0, (int)v47));
                if ( v32 ) /*0x7828bd*/
                {
                  while ( !(unsigned __int8)String::Compare(v32, (const char **)v47) ) /*0x7828cd*/
                  {
                    v32 = *v32->attachedBomb.__pad_0; /*0x7828cf*/
                    if ( !v32 ) /*0x7828d4*/
                      goto LABEL_119; /*0x7828d4*/
                  }
                  v33 = &v32->ptr_4; /*0x7828dc*/
                  if ( v33 ) /*0x7828e1*/
                    memcpy(&v47[16].m_3[1], v33, 0x6Cu); /*0x7828ef*/
                  v26 = *v47->u32_50.__pad_0; /*0x7828f1*/
                }
              }
            }
LABEL_119:
            ; /*0x7828f8*/
          }
          while ( v29 < *(int *)&v47[1].m_3[1] ); /*0x7828fc*/
        }
      }
      else if ( *v47->ptr_4.__pad_0 < *(int *)&v47[1].m_3[1] ) /*0x782909*/
      {
        v15 = *(unsigned int *)&v47[0].m_3[1]; /*0x782913*/
        v34 = *v47->ptr_8.__pad_0; /*0x78291d*/
        v35 = 108 * *v47->ptr_4.__pad_0; /*0x782921*/
        while ( v26 > v34 && v26 > 0 || v34 == -1 && v26 > 0 ) /*0x78293d*/
        {
          ++v15; /*0x782943*/
          v35 += 108; /*0x782944*/
          if ( v35 >= 0 && v15 < *(int *)&stru_B778FC.m_3[1] ) /*0x78294f*/
            memcpy(&v47[3], (char *)dword_B77908 + v35, 0x6Cu); /*0x782963*/
          String::Assign_Bool(v47, &v47[7].m_3[1]); /*0x78296e*/
          String::ToLower(v47); /*0x782977*/
          v36 = g_WOL_HashTable; /*0x78297c*/
          v26 = -1; /*0x782982*/
          if ( g_WOL_HashTable ) /*0x782987*/
          {
            if ( g_WOL_HashTable->HashTable_field_0x04 ) /*0x782989*/
            {
              v37 = *(String **)(*(unsigned int *)v36->__pad_0 /*0x7829a6*/
                               + 4
                               * (((int (*)(String *))g_WOL_HashTable->HashTable_field_0x18)(v47)
                                & ((1 << v36->u32_C) - 1)));
              if ( v37 ) /*0x7829ab*/
              {
                while ( !(unsigned __int8)String::Compare(v37, (const char **)v47) ) /*0x7829bb*/
                {
                  v37 = *v37->attachedBomb.__pad_0; /*0x7829bd*/
                  if ( !v37 ) /*0x7829c2*/
                    goto LABEL_140; /*0x7829c2*/
                }
                v38 = &v37->ptr_4; /*0x7829ca*/
                if ( v38 ) /*0x7829cf*/
                  memcpy(&v47[16].m_3[1], v38, 0x6Cu); /*0x7829dd*/
                v26 = *v47->u32_50.__pad_0; /*0x7829df*/
              }
            }
          }
LABEL_140:
          if ( v15 >= *(int *)&v47[1].m_3[1] ) /*0x7829ea*/
            goto LABEL_160; /*0x7829ea*/
          v34 = *v47->ptr_8.__pad_0; /*0x782926*/
        }
        *(unsigned int *)&v47[0].m_3[1] = v15; /*0x7829f5*/
LABEL_143:
        v15 = *(unsigned int *)&v47[0].m_3[1]; /*0x7829f9*/
        if ( *(int *)&v47[0].m_3[1] < *(int *)&v47[1].m_3[1] ) /*0x782a03*/
        {
          v39 = 108 * *(unsigned int *)&v47[0].m_3[1]; /*0x782a0f*/
          do /*0x782ae0*/
          {
            if ( *v47->ptr_8.__pad_0 != v26 /*0x782a33*/
              || _strcmpi(&v47[7].m_3[1], (char *)(*(unsigned int *)&v47[2].m_3[1] + 36)) >= 0 )
            {
              break; /*0x782a33*/
            }
            ++v15; /*0x782a39*/
            v39 += 108; /*0x782a3a*/
            if ( v39 >= 0 && v15 < *(int *)&stru_B778FC.m_3[1] ) /*0x782a45*/
              memcpy(&v47[3], (char *)dword_B77908 + v39, 0x6Cu); /*0x782a59*/
            String::Assign_Bool(v47, &v47[7].m_3[1]); /*0x782a64*/
            String::ToLower(v47); /*0x782a6d*/
            v40 = g_WOL_HashTable; /*0x782a72*/
            v26 = -1; /*0x782a78*/
            if ( g_WOL_HashTable ) /*0x782a7d*/
            {
              if ( g_WOL_HashTable->HashTable_field_0x04 ) /*0x782a7f*/
              {
                v41 = *(String **)(*(unsigned int *)v40->__pad_0 /*0x782a9c*/
                                 + 4
                                 * (((int (*)(String *))g_WOL_HashTable->HashTable_field_0x18)(v47)
                                  & ((1 << v40->u32_C) - 1)));
                if ( v41 ) /*0x782aa1*/
                {
                  while ( !(unsigned __int8)String::Compare(v41, (const char **)v47) ) /*0x782ab1*/
                  {
                    v41 = *v41->attachedBomb.__pad_0; /*0x782ab3*/
                    if ( !v41 ) /*0x782ab8*/
                      goto LABEL_159; /*0x782ab8*/
                  }
                  v42 = &v41->ptr_4; /*0x782ac0*/
                  if ( v42 ) /*0x782ac5*/
                    memcpy(&v47[16].m_3[1], v42, 0x6Cu); /*0x782ad3*/
                  v26 = *v47->u32_50.__pad_0; /*0x782ad5*/
                }
              }
            }
LABEL_159:
            ;
          }
          while ( v15 < *(int *)&v47[1].m_3[1] ); /*0x782ae0*/
LABEL_160:
          *(unsigned int *)&v47[0].m_3[1] = v15; /*0x782ae6*/
        }
      }
    }
    v43 = *(unsigned int *)&v47[0].m_3[1]; /*0x782aea*/
    v44 = *(unsigned int *)&stru_B778FC.m_3[1]; /*0x782aee*/
    if ( *(int *)&v47[0].m_3[1] > *(int *)&stru_B778FC.m_3[1] ) /*0x782af6*/
      v43 = *(unsigned int *)&stru_B778FC.m_3[1]; /*0x782af8*/
    if ( v43 >= dword_B77904 ) /*0x782b00*/
    {
      DynamicArray::Grow((DynamicArray *)&stru_B778FC.m_3[1]); /*0x782b07*/
      v44 = *(unsigned int *)&stru_B778FC.m_3[1]; /*0x782b0c*/
    }
    if ( v44 >= dword_B77904 ) /*0x782b18*/
    {
      DynamicArray::Grow((DynamicArray *)&stru_B778FC.m_3[1]); /*0x782b1f*/
      v44 = *(unsigned int *)&stru_B778FC.m_3[1]; /*0x782b24*/
    }
    if ( v43 < v44 ) /*0x782b2c*/
    {
      memcpy((char *)dword_B77908 + 108 * v43 + 108, (char *)dword_B77908 + 108 * v43, 108 * v44 - 108 * v43); /*0x782b57*/
      v44 = *(unsigned int *)&stru_B778FC.m_3[1]; /*0x782b5c*/
    }
    v45 = (char *)dword_B77908 + 108 * v43; /*0x782b70*/
    if ( v45 ) /*0x782b75*/
    {
      memcpy(v45, *(const void **)&v47[2].m_3[1], 0x6Cu); /*0x782b80*/
      v44 = *(unsigned int *)&stru_B778FC.m_3[1]; /*0x782b82*/
    }
    *(unsigned int *)&stru_B778FC.m_3[1] = v44 + 1; /*0x782b89*/
  }
  else
  {
    ((DynamicClass *)(DynamicClass *)&stru_B778FC.m_3[1])->Insert( a1, 0); /*0x7823d3*/
  }
  return DeleteAndZero((ObjectClass *)v47); /*0x782b98*/

}
}
// 0x782BB0
namespace gamemd {
char FindBuddyList(unsigned char *a1, char a2)
{
  ObjectClass *nextObject; // eax
  int v4; // ebp
  int v5; // ebx
  unsigned int v6; // kr04_4
  unsigned int v7; // kr08_4
  int v8; // ecx
  bool v9; // sf
  int v10; // ebx
  unsigned int v11; // kr0C_4
  unsigned int v12; // kr10_4
  int v13; // ecx
  int v14; // ebx
  unsigned int v15; // kr14_4
  unsigned int v16; // kr18_4
  int v17; // ecx
  int v18; // ebx
  unsigned int v19; // kr1C_4
  unsigned int v20; // kr20_4
  int v21; // ecx
  int v22; // ebx
  unsigned int v23; // kr24_4
  unsigned int v24; // kr28_4
  int v25; // ebp
  int v26; // ebx
  unsigned int v27; // kr2C_4
  unsigned int v28; // kr30_4
  int v29; // [esp+Ch] [ebp-78h]
  int owningHouseIndex; // [esp+14h] [ebp-70h]
  unsigned char v32[108]; // [esp+18h] [ebp-6Ch] BYREF

  owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x782bd2*/
  memset(v32, 0, sizeof(v32)); /*0x782bd6*/
  if ( !g_WOL_UserList.owningHouseIndex ) /*0x782bd8*/
    return ((DynamicClass *)(DynamicClass *)&g_WOL_UserList.owningHouseIndex)->Insert( a1, 0); /*0x782beb*/
  nextObject = g_WOL_UserList.nextObject; /*0x782bec*/
  v4 = 0; /*0x782bf2*/
  if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x782bf7*/
    memcpy(v32, g_WOL_UserList.nextObject, sizeof(v32)); /*0x782c04*/
  while ( (v32[0] & 1) != 0 ) /*0x782c0b*/
  {
    if ( v4 >= g_WOL_UserList.owningHouseIndex ) /*0x782c0f*/
      break; /*0x782c0f*/
    ++v4; /*0x782c11*/
    nextObject = &nextObject->health; /*0x782c12*/
    if ( v4 >= 0 && v4 < g_WOL_UserList.owningHouseIndex ) /*0x782c1b*/
      memcpy(v32, nextObject, sizeof(v32)); /*0x782c28*/
  }
  if ( (*a1 & 1) == 0 ) /*0x782c38*/
  {
    v29 = v4; /*0x782e3d*/
    if ( v4 >= 0 && v4 < g_WOL_UserList.owningHouseIndex ) /*0x782e45*/
      memcpy(v32, (char *)g_WOL_UserList.nextObject + 108 * v4, sizeof(v32)); /*0x782e60*/
    if ( a2 ) /*0x782e68*/
    {
      if ( v4 >= g_WOL_UserList.owningHouseIndex ) /*0x782e70*/
        return ((DynamicClass *)(DynamicClass *)&g_WOL_UserList.owningHouseIndex)->Insert( a1, v29); /*0x782e70*/
      v18 = 108 * v4; /*0x782e7d*/
      while ( 1 ) /*0x782e89*/
      {
        v19 = strlen(&v32[87]) + 1; /*0x782e89*/
        v20 = strlen(a1 + 87) + 1; /*0x782e9e*/
        if ( v19 == 1 ) /*0x782ea5*/
          break; /*0x782ea5*/
        if ( v20 == 1 ) /*0x782ead*/
        {
          if ( (int)(v19 - 1) <= 0 ) /*0x782f08*/
            break; /*0x782f08*/
        }
        else if ( _strcmpi(&v32[87], a1 + 87) >= 0 ) /*0x782ebf*/
        {
          break; /*0x782ebf*/
        }
        v21 = v29 + 1; /*0x782ec9*/
        v9 = v18 + 108 < 0; /*0x782eca*/
        v18 += 108; /*0x782eca*/
        ++v29; /*0x782ecd*/
        if ( !v9 && v21 < g_WOL_UserList.owningHouseIndex ) /*0x782edc*/
          memcpy(v32, (char *)g_WOL_UserList.nextObject + v18, sizeof(v32)); /*0x782eef*/
        if ( v29 >= owningHouseIndex ) /*0x782efb*/
          return ((DynamicClass *)(DynamicClass *)&g_WOL_UserList.owningHouseIndex)->Insert( a1, v29); /*0x782efb*/
      }
    }
    else
    {
      if ( v4 >= g_WOL_UserList.owningHouseIndex ) /*0x782f12*/
        return ((DynamicClass *)(DynamicClass *)&g_WOL_UserList.owningHouseIndex)->Insert( a1, v29); /*0x782f12*/
      v22 = 108 * v4; /*0x782f23*/
      while ( 1 ) /*0x782f2f*/
      {
        v23 = strlen(&v32[87]) + 1; /*0x782f2f*/
        v24 = strlen(a1 + 87) + 1; /*0x782f44*/
        if ( v23 == 1 ) /*0x782f4b*/
          break; /*0x782f4b*/
        if ( v24 == 1 ) /*0x782f4f*/
        {
          if ( (int)(v23 - 1) <= 0 ) /*0x782f97*/
            break; /*0x782f97*/
        }
        else if ( _strcmpi(a1 + 87, &v32[87]) >= 0 ) /*0x782f61*/
        {
          break; /*0x782f61*/
        }
        ++v4; /*0x782f63*/
        v9 = v22 + 108 < 0; /*0x782f64*/
        v22 += 108; /*0x782f64*/
        v29 = v4; /*0x782f67*/
        if ( !v9 && v4 < g_WOL_UserList.owningHouseIndex ) /*0x782f73*/
          memcpy(v32, (char *)g_WOL_UserList.nextObject + v22, sizeof(v32)); /*0x782f87*/
        if ( v4 >= owningHouseIndex ) /*0x782f8d*/
          return ((DynamicClass *)(DynamicClass *)&g_WOL_UserList.owningHouseIndex)->Insert( a1, v29); /*0x782f8d*/
      }
    }
    v25 = v29; /*0x782f9b*/
    if ( v29 >= owningHouseIndex ) /*0x782fa5*/
      return ((DynamicClass *)(DynamicClass *)&g_WOL_UserList.owningHouseIndex)->Insert( a1, v29); /*0x782fa5*/
    v26 = 108 * v29; /*0x782fb2*/
    while ( 1 ) /*0x782fbe*/
    {
      v27 = strlen(&v32[87]) + 1; /*0x782fbe*/
      v28 = strlen(a1 + 87) + 1; /*0x782fd3*/
      if ( v27 == 1 ) /*0x782fda*/
        goto LABEL_91; /*0x782fda*/
      if ( v28 == 1 ) /*0x782fde*/
        break; /*0x782fde*/
      if ( _strcmpi(a1 + 87, &v32[87]) ) /*0x782fe6*/
        return ((DynamicClass *)(DynamicClass *)&g_WOL_UserList.owningHouseIndex)->Insert( a1, v29); /*0x782ff0*/
      LABEL_84:
      if ( _strcmpi(&v32[36], a1 + 36) < 0 ) /*0x783009*/
      {
        ++v25; /*0x78300b*/
        v9 = v26 + 108 < 0; /*0x78300c*/
        v26 += 108; /*0x78300c*/
        v29 = v25; /*0x78300f*/
        if ( !v9 && v25 < g_WOL_UserList.owningHouseIndex ) /*0x78301b*/
          memcpy(v32, (char *)g_WOL_UserList.nextObject + v26, sizeof(v32)); /*0x78302f*/
        if ( v25 < owningHouseIndex ) /*0x783035*/
          continue; /*0x783035*/
      }
      return ((DynamicClass *)(DynamicClass *)&g_WOL_UserList.owningHouseIndex)->Insert( a1, v29); /*0x783035*/
    }
    if ( (int)(v27 - 1) > 0 ) /*0x783059*/
      return ((DynamicClass *)(DynamicClass *)&g_WOL_UserList.owningHouseIndex)->Insert( a1, v29); /*0x783059*/
    LABEL_91:
    if ( (int)(v28 - 1) > 0 ) /*0x78305d*/
      return ((DynamicClass *)(DynamicClass *)&g_WOL_UserList.owningHouseIndex)->Insert( a1, v29); /*0x78305d*/
    goto LABEL_84; /*0x78305d*/
  }
  v29 = 0; /*0x782c40*/
  if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x782c48*/
    memcpy(v32, g_WOL_UserList.nextObject, sizeof(v32)); /*0x782c59*/
  if ( a2 ) /*0x782c61*/
  {
    if ( v4 <= 0 ) /*0x782c69*/
      return ((DynamicClass *)(DynamicClass *)&g_WOL_UserList.owningHouseIndex)->Insert( a1, v29); /*0x782c69*/
    v5 = 0; /*0x782c6f*/
    while ( 1 ) /*0x782c7a*/
    {
      v6 = strlen(&v32[87]) + 1; /*0x782c7a*/
      v7 = strlen(a1 + 87) + 1; /*0x782c8d*/
      if ( v6 == 1 ) /*0x782c94*/
        break; /*0x782c94*/
      if ( v7 == 1 ) /*0x782c9c*/
      {
        if ( (int)(v6 - 1) <= 0 ) /*0x782cf0*/
          break; /*0x782cf0*/
      }
      else if ( _strcmpi(&v32[87], a1 + 87) >= 0 ) /*0x782cae*/
      {
        break; /*0x782cae*/
      }
      v8 = v29 + 1; /*0x782cb8*/
      v9 = v5 + 108 < 0; /*0x782cb9*/
      v5 += 108; /*0x782cb9*/
      ++v29; /*0x782cbc*/
      if ( !v9 && v8 < g_WOL_UserList.owningHouseIndex ) /*0x782ccc*/
        memcpy(v32, (char *)g_WOL_UserList.nextObject + v5, sizeof(v32)); /*0x782ce0*/
      if ( v29 >= v4 ) /*0x782ce6*/
        return ((DynamicClass *)(DynamicClass *)&g_WOL_UserList.owningHouseIndex)->Insert( a1, v29); /*0x782ce6*/
    }
  }
  else
  {
    if ( v4 <= 0 ) /*0x782cfa*/
      return ((DynamicClass *)(DynamicClass *)&g_WOL_UserList.owningHouseIndex)->Insert( a1, v29); /*0x782cfa*/
    v10 = 0; /*0x782d00*/
    while ( 1 ) /*0x782d0b*/
    {
      v11 = strlen(&v32[87]) + 1; /*0x782d0b*/
      v12 = strlen(a1 + 87) + 1; /*0x782d20*/
      if ( v11 == 1 ) /*0x782d27*/
        break; /*0x782d27*/
      if ( v12 == 1 ) /*0x782d2b*/
      {
        if ( (int)(v11 - 1) <= 0 ) /*0x782d79*/
          break; /*0x782d79*/
      }
      else if ( _strcmpi(a1 + 87, &v32[87]) >= 0 ) /*0x782d3d*/
      {
        break; /*0x782d3d*/
      }
      v13 = v29 + 1; /*0x782d43*/
      v9 = v10 + 108 < 0; /*0x782d44*/
      v10 += 108; /*0x782d44*/
      ++v29; /*0x782d47*/
      if ( !v9 && v13 < g_WOL_UserList.owningHouseIndex ) /*0x782d56*/
        memcpy(v32, (char *)g_WOL_UserList.nextObject + v10, sizeof(v32)); /*0x782d69*/
      if ( v29 >= v4 ) /*0x782d6f*/
        return ((DynamicClass *)(DynamicClass *)&g_WOL_UserList.owningHouseIndex)->Insert( a1, v29); /*0x782d6f*/
    }
  }
  if ( v29 < v4 ) /*0x782d83*/
  {
    v14 = 108 * v29; /*0x782d8f*/
    while ( 1 ) /*0x782d9b*/
    {
      v15 = strlen(&v32[87]) + 1; /*0x782d9b*/
      v16 = strlen(a1 + 87) + 1; /*0x782dae*/
      if ( v15 == 1 ) /*0x782db5*/
        goto LABEL_50; /*0x782db5*/
      if ( v16 == 1 ) /*0x782db9*/
        break; /*0x782db9*/
      if ( _strcmpi(a1 + 87, &v32[87]) ) /*0x782dc1*/
        return ((DynamicClass *)(DynamicClass *)&g_WOL_UserList.owningHouseIndex)->Insert( a1, v29); /*0x782dcb*/
      LABEL_43:
      if ( _strcmpi(&v32[36], a1 + 36) < 0 ) /*0x782de8*/
      {
        v17 = v29 + 1; /*0x782df2*/
        v9 = v14 + 108 < 0; /*0x782df3*/
        v14 += 108; /*0x782df3*/
        ++v29; /*0x782df6*/
        if ( !v9 && v17 < g_WOL_UserList.owningHouseIndex ) /*0x782e05*/
          memcpy(v32, (char *)g_WOL_UserList.nextObject + v14, sizeof(v32)); /*0x782e18*/
        if ( v29 < v4 ) /*0x782e1e*/
          continue; /*0x782e1e*/
      }
      return ((DynamicClass *)(DynamicClass *)&g_WOL_UserList.owningHouseIndex)->Insert( a1, v29); /*0x782e1e*/
    }
    if ( (int)(v15 - 1) > 0 ) /*0x782e2b*/
      return ((DynamicClass *)(DynamicClass *)&g_WOL_UserList.owningHouseIndex)->Insert( a1, v29); /*0x782e2b*/
    LABEL_50:
    if ( (int)(v16 - 1) > 0 ) /*0x782e33*/
      return ((DynamicClass *)(DynamicClass *)&g_WOL_UserList.owningHouseIndex)->Insert( a1, v29); /*0x782e33*/
    goto LABEL_43; /*0x782e33*/
  }
  return ((DynamicClass *)(DynamicClass *)&g_WOL_UserList.owningHouseIndex)->Insert( a1, v29); /*0x782be6*/
}
}
// 0x7830C0
namespace gamemd {
int sub_7830C0(signed int * a1, signed int * a2)
{

  signed int v2; // eax
  v2 = a1[2]; /*0x7830ca*/
  if ( v2 == a2[2] )
  {
    signed int v5; // eax
    v5 = a1[1]; /*0x7830e9*/
    signed int v6; // ecx
    v6 = a2[1]; /*0x7830ec*/
    if ( v5 >= v6 )
    {
      if ( v5 <= v6 )
      {
        unsigned char v11[108]; // [esp+70h] [ebp-6Ch] BYREF
        memset(v11, 0, sizeof(v11)); /*0x783126*/
        unsigned char v10[108]; // [esp+4h] [ebp-D8h] BYREF
        memset(v10, 0, sizeof(v10)); /*0x783137*/
        signed int v8 = *a1; // eax /*0x783139*/
        if ( *a1 >= 0 && v8 < (int)dword_B77900 ) /*0x783147*/
          memcpy(v11, (char *)dword_B77908 + 108 * v8, sizeof(v11)); /*0x78315b*/
        signed int v9 = *a2; // eax /*0x78315d*/
        if ( *a2 >= 0 && v9 < (int)dword_B77900 ) /*0x783165*/
          memcpy(v10, (char *)dword_B77908 + 108 * v9, sizeof(v10)); /*0x783179*/
        return _strcmpi(&v11[36], &v10[36]); /*0x783188*/
      }
      else
      {
        return v6 != -1 ? 1 : -1;
      }
    }
    else
    {
      int v7; // eax
      v7 = -(v5 != -1); /*0x7830f7*/
      (*((unsigned char *)&(v7))) = v7 & 0xFE; /*0x7830f9*/
      return v7 + 1; /*0x7830fb*/
    }
  }
  else
  {
    int v3; // eax
    v3 = -(v2 != 0); /*0x7830dc*/
    (*((unsigned char *)&(v3))) = v3 & 0xFE; /*0x7830df*/
    return v3 + 1; /*0x7830e1*/
  }
}
}
// 0x783270
namespace gamemd {
void SortWOLPlayerList(char a1)
{

  signed int v1; // esi
  signed int v2; // ebx
  unsigned int *v3; // ebp
  int v4; // eax
  unsigned int *v5; // ebp
  int v6; // edx
  int *v7; // ebp
  int v8; // eax
  int v9; // esi
  char *v10; // edi
  bool v11; // zf
  size_t v13; // [esp+10h] [ebp-F8h]
  signed int v14; // [esp+10h] [ebp-F8h]
  void *v15; // [esp+14h] [ebp-F4h] BYREF
  int v16; // [esp+18h] [ebp-F0h]
  int v17[2]; // [esp+1Ch] [ebp-ECh] BYREF
  void *Block; // [esp+24h] [ebp-E4h]
  void *v19; // [esp+28h] [ebp-E0h]
  const void *v20; // [esp+2Ch] [ebp-DCh] BYREF
  unsigned int v21[27]; // [esp+30h] [ebp-D8h] BYREF
  unsigned int v22[27]; // [esp+9Ch] [ebp-6Ch] BYREF

  v1 = MEMORY[0xB77900]; /*0x783279*/
  v2 = 0; /*0x78327f*/
  v17[0] = 0; /*0x783288*/
  v17[1] = 0; /*0x783290*/
  Block = 0; /*0x783294*/
  v13 = MEMORY[0xB77900]; /*0x783298*/
  v3 = __2_YAPAXI_Z(12 * MEMORY[0xB77900]); /*0x7832a1*/
  v19 = v3; /*0x7832a8*/
  if ( v3 ) /*0x7832ac*/
  {
    v4 = 0; /*0x7832cf*/
    memset(v21, 0, sizeof(v21)); /*0x7832d7*/
    if ( v1 > 0 ) /*0x7832d9*/
    {
      v16 = 0; /*0x7832df*/
      v5 = v3 + 1; /*0x7832e3*/
      while ( 1 ) /*0x7832ec*/
      {
        if ( v4 >= 0 && v2 < (int)MEMORY[0xB77900] ) /*0x7832f6*/
        {
          memcpy(v21, (char *)dword_B77908 + v4, sizeof(v21)); /*0x78330a*/
          v1 = v13; /*0x78330c*/
        }
        *(v5 - 1) = v2; /*0x783310*/
        *v5 = -1; /*0x783317*/
        unknown_libname_73(&v15); /*0x78331e*/
        memset(v22, 0, sizeof(v22)); /*0x783331*/
        String::Assign_Bool(&v15, (const char *)&v21[9]); /*0x78333c*/
        String::ToLower((const char **)&v15); /*0x783345*/
        if ( g_WOL_HashTable ) /*0x783352*/
        {
          v20 = 0; /*0x78335e*/
          if ( HashTable::LookupString((unsigned int *)g_WOL_HashTable, (const char **)&v15, &v20) ) /*0x783366*/
          {
            if ( v20 ) /*0x783375*/
            {
              memcpy(v22, v20, sizeof(v22)); /*0x783385*/
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
    v6 = 0; /*0x7833f8*/
    MEMORY[0xB77900] = 0; /*0x7833fc*/
    if ( v1 > 0 ) /*0x783402*/
    {
      v7 = (int *)v19; /*0x783408*/
      v14 = v1; /*0x78340c*/
      do /*0x7834e1*/
      {
        v8 = *v7; /*0x783414*/
        if ( *v7 >= 0 && v8 < v17[0] ) /*0x78341f*/
          memcpy(v21, (char *)Block + 108 * v8, sizeof(v21)); /*0x783437*/
        v9 = v6; /*0x783439*/
        if ( v6 >= dword_B77904 ) /*0x783445*/
        {
          DynamicArray::Grow(&MEMORY[0xB77900]); /*0x78344c*/
          v6 = MEMORY[0xB77900]; /*0x783451*/
        }
        if ( v6 >= dword_B77904 ) /*0x78345d*/
        {
          DynamicArray::Grow(&MEMORY[0xB77900]); /*0x783464*/
          v6 = MEMORY[0xB77900]; /*0x783469*/
        }
        if ( v9 < v6 ) /*0x783471*/
        {
          memcpy((char *)dword_B77908 + 108 * v9 + 108, (char *)dword_B77908 + 108 * v9, 108 * v6 - 108 * v9); /*0x78349c*/
          v6 = MEMORY[0xB77900]; /*0x7834a1*/
        }
        v10 = (char *)dword_B77908 + 108 * v9; /*0x7834b6*/
        if ( v10 ) /*0x7834bb*/
        {
          memcpy(v10, v21, 0x6Cu); /*0x7834c6*/
          v6 = MEMORY[0xB77900]; /*0x7834c8*/
        }
        ++v6; /*0x7834d2*/
        v7 += 3; /*0x7834d3*/
        v11 = v14 == 1; /*0x7834d6*/
        MEMORY[0xB77900] = v6; /*0x7834d7*/
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
}
// 0x7835C0
namespace gamemd {
int sub_7835C0(int a1, signed int * a2)
{
  int v2; // eax
  int v3; // eax
  int result; // eax
  const char *v5; // edx
  unsigned int v6; // kr04_4
  unsigned int v7; // kr08_4
  signed int v8; // eax
  signed int v9; // eax
  unsigned char v10[108]; // [esp+4h] [ebp-D8h] BYREF
  unsigned char v11[108]; // [esp+70h] [ebp-6Ch] BYREF

  v2 = *(unsigned int *)(a1 + 8); /*0x7835d5*/
  if ( v2 != a2[2] ) /*0x7835da*/
  {
    v3 = -(v2 != 0); /*0x7835de*/
    (*((unsigned char *)&(v3))) = v3 & 0xFE; /*0x7835e1*/
    return v3 + 1; /*0x7835ea*/
  }
  v5 = (const char *)a2[1]; /*0x7835eb*/
  v6 = strlen(*(const char **)(a1 + 4)) + 1; /*0x7835fb*/
  v7 = strlen(v5) + 1; /*0x783607*/
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
  memset(v11, 0, sizeof(v11)); /*0x78362a*/
  memset(v10, 0, sizeof(v10)); /*0x78364c*/
  v8 = *(unsigned int *)a1; /*0x78364e*/
  if ( *(int *)a1 >= 0 && v8 < (int)dword_B77900 ) /*0x783657*/
    memcpy(v11, (char *)dword_B77908 + 108 * v8, sizeof(v11)); /*0x78366b*/
  v9 = *a2; /*0x783674*/
  if ( *a2 >= 0 && v9 < (int)dword_B77900 ) /*0x78367c*/
    memcpy(v10, (char *)dword_B77908 + 108 * v9, sizeof(v10)); /*0x783690*/
  return _strcmpi(&v11[36], &v10[36]); /*0x7835e0*/
}
}
// 0x7836E0
namespace gamemd {
int sub_7836E0(const void * a1, signed int * a2)
{
  int v2; // eax
  int v3; // eax
  int result; // eax
  char *v5; // edx
  unsigned int v6; // kr04_4
  unsigned int v7; // kr08_4
  signed int v8; // eax
  signed int v9; // eax
  char v10[108]; // [esp+4h] [ebp-D8h] BYREF
  char v11[108]; // [esp+70h] [ebp-6Ch] BYREF

  v2 = *((unsigned int *)a1 + 2); /*0x7836f5*/
  if ( v2 != a2[2] ) /*0x7836fa*/
  {
    v3 = -(v2 != 0); /*0x7836fe*/
    (*((unsigned char *)&(v3))) = v3 & 0xFE; /*0x783701*/
    return v3 + 1; /*0x78370a*/
  }
  v5 = (char *)a2[1]; /*0x78370b*/
  v6 = strlen(*((const char **)a1 + 1)) + 1; /*0x78371b*/
  v7 = strlen(v5) + 1; /*0x783727*/
  if ( v6 != 1 ) /*0x78372e*/
  {
    if ( v7 != 1 ) /*0x783736*/
    {
      result = _strcmpi(v5, *((char **)a1 + 1)); /*0x78373e*/
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
  memset(v11, 0, sizeof(v11)); /*0x78374a*/
  memset(v10, 0, sizeof(v10)); /*0x78376c*/
  v8 = *(unsigned int *)a1; /*0x78376e*/
  if ( *(int *)a1 >= 0 && v8 < (int)dword_B77900 ) /*0x783777*/
    memcpy(v11, (char *)dword_B77908 + 108 * v8, sizeof(v11)); /*0x78378b*/
  v9 = *a2; /*0x783794*/
  if ( *a2 >= 0 && v9 < (int)dword_B77900 ) /*0x78379c*/
    memcpy(v10, (char *)dword_B77908 + 108 * v9, sizeof(v10)); /*0x7837b0*/
  return _strcmpi(&v11[36], &v10[36]); /*0x783700*/
}
}
// 0x786080
namespace gamemd {
char WOL_HandleLogout()
{

  Skirmish *v1; // esi
  HWND v2; // eax
  int (**v3)(LPVOID, void *, int *); // ecx
  int v4; // esi
  int (**v5)(LPVOID, void *, int *); // ecx
  int v6; // esi
  int (**v7)(LPVOID, void *, int *); // ecx
  int v8; // esi
  HANDLE *v9; // esi
  int v11; // [esp+7Ch] [ebp-8h] BYREF
  int v12; // [esp+80h] [ebp-4h] BYREF

  v1 = g_UIControlState; /*0x786085*/
  if ( g_UIControlState ) /*0x78608f*/
  {
    ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x786093*/
    __3_YAXPAX_Z(v1); /*0x786099*/
    g_UIControlState = 0; /*0x7860a1*/
  }
  v2 = (HWND)Dialog::FindByHandle((Dialog *)0x11E); /*0x7860ac*/
  if ( v2 ) /*0x7860b3*/
    LOBYTE(v2) = CloseDialog(v2, 0); /*0x7860b9*/
  if ( byte_B77E75 ) /*0x7860c4*/
  {
    WinMainSetup_Setup_5DB6F0_Setup(); /*0x7860ca*/
    if ( ppv ) /*0x7860d6*/
    {
      v3 = *(int (***)(LPVOID, void *, int *))ppv; /*0x7860d8*/
      v4 = dword_B77E54; /*0x7860da*/
      v12 = 0; /*0x7860e4*/
      v11 = 0; /*0x7860ef*/
      if ( (*v3)(ppv, &unk_7F7CD0, &v12) >= 0 /*0x78610f*/
        && (*(int (**)(int, void *, int *))(*(unsigned int *)v12 + 16))(v12, &unk_7F7550, &v11) >= 0 )
      {
        (*(void (**)(int, int))(*(unsigned int *)v11 + 24))(v11, v4); /*0x786119*/
      }
      if ( v11 ) /*0x786122*/
        (*(void (**)(int))(*(unsigned int *)v11 + 8))(v11); /*0x786127*/
      if ( v12 ) /*0x786130*/
        (*(void (**)(int))(*(unsigned int *)v12 + 8))(v12); /*0x786135*/
      (*(void (**)(LPVOID))(*(unsigned int *)ppv + 8))(ppv); /*0x786140*/
    }
    if ( g_UIPointerTable ) /*0x78614a*/
    {
      v5 = *(int (***)(LPVOID, void *, int *))g_UIPointerTable; /*0x78614c*/
      v6 = dword_B77E58; /*0x78614e*/
      v11 = 0; /*0x786158*/
      v12 = 0; /*0x786163*/
      if ( (*v5)(g_UIPointerTable, &unk_7F7CD0, &v11) >= 0 /*0x786183*/
        && (*(int (**)(int, void *, int *))(*(unsigned int *)v11 + 16))(v11, &unk_7F7590, &v12) >= 0 )
      {
        (*(void (**)(int, int))(*(unsigned int *)v12 + 24))(v12, v6); /*0x78618d*/
      }
      if ( v12 ) /*0x786196*/
        (*(void (**)(int))(*(unsigned int *)v12 + 8))(v12); /*0x78619b*/
      if ( v11 ) /*0x7861a4*/
        (*(void (**)(int))(*(unsigned int *)v11 + 8))(v11); /*0x7861a9*/
      (*(void (**)(LPVOID))(*(unsigned int *)g_UIPointerTable + 8))(g_UIPointerTable); /*0x7861b4*/
    }
    if ( dword_AC1174 ) /*0x7861be*/
    {
      v7 = *(int (***)(LPVOID, void *, int *))dword_AC1174; /*0x7861c0*/
      v8 = dword_B77E5C; /*0x7861c2*/
      v11 = 0; /*0x7861cc*/
      v12 = 0; /*0x7861d7*/
      if ( (*v7)(dword_AC1174, &unk_7F7CD0, &v11) >= 0 /*0x7861f7*/
        && (*(int (**)(int, void *, int *))(*(unsigned int *)v11 + 16))(v11, &unk_7F7570, &v12) >= 0 )
      {
        (*(void (**)(int, int))(*(unsigned int *)v12 + 24))(v12, v8); /*0x786201*/
      }
      if ( v12 ) /*0x78620a*/
        (*(void (**)(int))(*(unsigned int *)v12 + 8))(v12); /*0x78620f*/
      if ( v11 ) /*0x786218*/
        (*(void (**)(int))(*(unsigned int *)v11 + 8))(v11); /*0x78621d*/
      (*(void (**)(LPVOID))(*(unsigned int *)dword_AC1174 + 8))(dword_AC1174); /*0x786228*/
    }
    ppv = 0; /*0x786232*/
    g_UIPointerTable = 0; /*0x786238*/
    dword_AC1174 = 0; /*0x78623e*/
    v9 = &Handles; /*0x786244*/
    do /*0x786257*/
      CloseHandle(*v9++); /*0x78624c*/
    while ( (int)v9 < (int)g_WOL_RequestObject ); /*0x786257*/
    LOBYTE(v2) = HandleLogoutWOL_Handle((int)&dword_B76488); /*0x78625e*/
    byte_B77E75 = 0; /*0x786263*/
  }
  return (char)v2; /*0x78626a*/

}
}
// 0x786DC0
namespace gamemd {
int E4Recv_786DC0::sub_786DC0()
{
  char *v6; // [esp+10h] [ebp-8h] BYREF
  char *v7; // [esp+14h] [ebp-4h] BYREF

  ((DeleteAndZero *)(DeleteAndZero *)&g_WebBrowserConfig)->Alt2(); /*0x786dcd*/
  int v2 = 1; // esi /*0x786dd2*/
  while ( 1 ) /*0x786de5*/
  {
    if ( !(*(int (__stdcall **)(LPVOID, int, char **, char **))(*(unsigned int *)ppv + 144))(ppv, v2, &v6, &v7) ) /*0x786dea*/
    {
      if ( v6 ) /*0x786dfa*/
      {
        if ( strlen(v6) ) /*0x786dfe*/
        {
          char *v5; // [esp+0h] [ebp-18h]
          v5 = v6; /*0x786e08*/
          char *v3; // eax
          v3 = ((String *)((String *)this))->GetOrEmpty_Alt(); /*0x786e0b*/
          if ( !_strcmpi(v3, v5) ) /*0x786e11*/
            break; /*0x786e11*/
        }
      }
    }
    if ( ++v2 > 32 ) /*0x786e21*/
    {
      ((DeleteAndZero *)(DeleteAndZero *)&g_WebBrowser)->Alt2(); /*0x786e28*/
      return 0; /*0x786e35*/
    }
  }
  ((String *)((String *)&g_WebBrowser))->Assign_Alt(v6); /*0x786e40*/
  ((String *)((String *)&g_WebBrowserConfig))->Assign_Alt(v7); /*0x786e4f*/
  (*((unsigned char *)&(dword_84A238))) = 0; /*0x786e54*/
  return 1; /*0x786e2f*/
}
}
// 0x787010
namespace gamemd {
int WOL_LoginFlow()
{

  ObjectClass *v1; // edi
  int result; // eax
  wchar_t *StringCSF; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // esi
  char *v7; // eax
  int v8; // esi
  String *v9; // edi
  char *v10; // eax
  String *v11; // edi
  char *v12; // eax
  char **ConfigWOL; // eax
  int v14; // eax
  unsigned __int16 v15; // si
  Dialog *Dialog; // esi
  HWND DlgItem; // eax
  CreateGameDialogControl *v18; // ecx
  TechnoTypeClass *v19; // ecx
  CreateGameDialogControl *v20; // ecx
  ObjectClass *PlayerProfile; // eax
  String *v22; // ebp
  int ptr_0; // ecx
  int v24; // esi
  int v25; // edi
  char *v26; // eax
  char *v27; // eax
  int v28; // eax
  char *v29; // esi
  char *v30; // eax
  HWND v31; // eax
  HWND Current; // eax
  HWND v33; // eax
  unsigned __int8 v34; // [esp-8h] [ebp-50h]
  char *v35; // [esp-4h] [ebp-4Ch]
  int v36; // [esp-4h] [ebp-4Ch]
  ObjectClass *v37; // [esp+0h] [ebp-48h]
  char v38; // [esp+13h] [ebp-35h]
  DeleteAndZero v39; // [esp+14h] [ebp-34h] BYREF
  int v40; // [esp+20h] [ebp-28h]
  Flag v41; // [esp+24h] [ebp-24h] BYREF
  String *v42; // [esp+30h] [ebp-18h]
  Flag v43; // [esp+34h] [ebp-14h] BYREF

  v38 = 0; /*0x787019*/
  dword_B77DF8 = 0; /*0x78701e*/
  result = LoginFlowWOL_Reset(v1); /*0x787024*/
  if ( result != 1 ) /*0x78702c*/
    return result; /*0x78702c*/
  memset(&stru_B76B00.StringVector_field_0x10, 0, 0x10Cu); /*0x787043*/
  memset(&stru_B73BD8.StringVector_field_0x10, 0, 0x10Cu); /*0x78704f*/
  *(unsigned int *)stru_B73E10.__pad_0 = 0; /*0x78705d*/
  stru_B76AD0.q010 = 0; /*0x787063*/
  *(unsigned int *)&stru_B778FC.m_3[1] = 0; /*0x787069*/
  dword_B77DD0 = 0; /*0x78706f*/
  v40 = 0; /*0x787075*/
  StringCSF = GetStringCSF(g_Str_TXT_FETCHING_SERVLIST, 0, g_Str_File_wonline_cpp, 24300); /*0x787079*/
  ((WideString *)&v39)->Assign( StringCSF); /*0x787083*/
  ShowUIMessage(16, (wchar_t **)&v39, 0); /*0x787092*/
  ((DeleteAndZero *)&v39)->Alt(); /*0x78709b*/
  v4 = 8960; /*0x7870a5*/
  if ( dword_A8B244 != 3 ) /*0x7870ad*/
    v4 = 10496; /*0x7870af*/
  v5 = LoginWOL(v4); /*0x7870b4*/
  if ( v5 ) /*0x7870bb*/
  {
    v38 = 1; /*0x7870c0*/
    v40 = -2; /*0x7870c5*/
    if ( v5 == 2 ) /*0x7870cd*/
      v40 = -1; /*0x7870cf*/
  }
  *(unsigned int *)v43.__pad_0 = 0; /*0x7870db*/
  LOBYTE(v43.q004) = 0; /*0x7870df*/
  ReadRegistryOptionsWOL((ObjectClass *)&v43); /*0x7870e4*/
  if ( v38 ) /*0x7870ef*/
    goto LABEL_98; /*0x7870ef*/
  if ( InfantryClass::SetField6((InfantryClass *)&v43) ) /*0x7870f9*/
  {
    ReadAutoLoginWOL((ObjectClass *)&v39); /*0x78710f*/
    if ( ((String *)&v39)->Length() ) /*0x787118*/
    {
      ((DeleteAndZero *)(DeleteAndZero *)&g_WebBrowserConfig)->Alt2(); /*0x78712a*/
      v6 = 1; /*0x78712f*/
      while ( 1 ) /*0x787142*/
      {
        if ( !(*(int (**)(LPVOID, int, Flag *, int *))(*(unsigned int *)ppv + 144))( /*0x787147*/
                ppv,
                v6,
                &v41,
                &v41.q008) )
        {
          if ( *(unsigned int *)v41.__pad_0 ) /*0x787157*/
          {
            if ( strlen(*(const char **)v41.__pad_0) ) /*0x78715b*/
            {
              v35 = *(char **)v41.__pad_0; /*0x787165*/
              v7 = ((String *)(String *)&v39)->GetOrEmpty_Alt(); /*0x78716a*/
              if ( !_strcmpi(v7, v35) ) /*0x787170*/
                break; /*0x787170*/
            }
          }
        }
        if ( ++v6 > 32 ) /*0x787180*/
        {
          ((DeleteAndZero *)(DeleteAndZero *)&stru_B73E10.q030)->Alt2(); /*0x787187*/
          goto LABEL_48; /*0x78718c*/
        }
      }
      String::Assign_Alt((String *)&stru_B73E10.q030, *(const char **)v41.__pad_0); /*0x78719b*/
      String::Assign_Alt((String *)&g_WebBrowserConfig, (const char *)v41.q008); /*0x7871aa*/
      v8 = -1; /*0x7871b4*/
      (dword_84A238) = ((dword_84A238) & ~0xFF) | ((0) & 0xFF); /*0x7871ba*/
      if ( dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2 ) /*0x7871cb*/
      {
        LoadPlayerProfile((ObjectClass *)&v41.q008, (const char **)&v39); /*0x7871d9*/
        if ( !v42 ) /*0x7871e4*/
          goto LABEL_29; /*0x7871e4*/
        v9 = (String *)((char *)v42 + 12); /*0x7871e6*/
        if ( !((String *)((char *)v42 + 12))->Length() ) /*0x7871eb*/
          goto LABEL_29; /*0x7871eb*/
        v8 = 1; /*0x7871f9*/
        if ( g_WOL_UserList.ptr_0 <= 1 ) /*0x787200*/
          goto LABEL_29; /*0x787200*/
        while ( 1 ) /*0x78720d*/
        {
          *(unsigned int *)v41.__pad_0 = 0; /*0x78720d*/
          GetBuddyEntryWOL(&g_WOL_UserList, &v41, v8); /*0x787211*/
          v10 = strchr((const char *)(*(unsigned int *)v41.__pad_0 + 24), 58); /*0x787220*/
          if ( v10 ) /*0x78722a*/
          {
            if ( *v10 && (unsigned __int8)String::Equals_Alt(v9, v10 + 1) ) /*0x787235*/
              break; /*0x787235*/
          }
          if ( ++v8 >= g_WOL_UserList.ptr_0 ) /*0x787246*/
            goto LABEL_29; /*0x787246*/
        }
        if ( v8 == -1 ) /*0x78724d*/
LABEL_29:
          v8 = dword_B76468; /*0x78724f*/
        /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7F3F44) */  /*0x787255*/
      }
      else
      {
        LoadPlayerProfile((ObjectClass *)&v41.q008, (const char **)&v39); /*0x78726a*/
        if ( v42 ) /*0x787275*/
        {
          if ( ((String *)((char *)v42 + 12))->Length() ) /*0x78727a*/
          {
            v11 = (String *)((char *)v42 + 12); /*0x78728f*/
            if ( ((String *)((char *)v42 + 12))->Length() && (v8 = 1, g_WOL_UserList.ptr_0 > 1) ) /*0x7872a9*/
            {
              while ( 1 ) /*0x7872b6*/
              {
                *(unsigned int *)v41.__pad_0 = 0; /*0x7872b6*/
                GetBuddyEntryWOL(&g_WOL_UserList, &v41, v8); /*0x7872ba*/
                v12 = strchr((const char *)(*(unsigned int *)v41.__pad_0 + 24), 58); /*0x7872c9*/
                if ( v12 ) /*0x7872d3*/
                {
                  if ( *v12 && (unsigned __int8)String::Equals_Alt(v11, v12 + 1) ) /*0x7872de*/
                    break; /*0x7872de*/
                }
                if ( ++v8 >= g_WOL_UserList.ptr_0 ) /*0x7872ef*/
                  goto LABEL_40; /*0x7872ef*/
              }
            }
            else
            {
LABEL_40:
              v8 = -1; /*0x7872f1*/
            }
          }
          else
          {
            v8 = dword_B76468; /*0x787283*/
          }
        }
        /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7F3F44) */  /*0x7872f4*/
      }
      ((ComPtr *)&v41.q008)->Release(); /*0x7872fc*/
      if ( v8 != -1 ) /*0x787304*/
      {
        dword_B76468 = v8; /*0x787309*/
        if ( v8 >= 1 && v8 < g_WOL_UserList.ptr_0 ) /*0x787317*/
        {
          *(unsigned int *)v41.__pad_0 = 0; /*0x787324*/
          GetBuddyEntryWOL(&g_WOL_UserList, &v41, v8); /*0x787328*/
          if ( ConnectAndLoginWOL(*(char **)v41.__pad_0) ) /*0x787331*/
          {
            DeleteAndZero((ObjectClass *)&v39); /*0x78733e*/
            return 1; /*0x78734f*/
          }
        }
        v38 = LoginFlowWOL_Open(v37); /*0x787355*/
      }
    }
LABEL_48:
    DeleteAndZero((ObjectClass *)&v39); /*0x787359*/
  }
  if ( !((String *)&stru_B73E10.q030)->Length() && (unsigned __int8)Flag::IsNot2(&v43) ) /*0x787374*/
  {
    ConfigWOL = LoadConfigWOL((ObjectClass *)&v41.q008); /*0x787381*/
    String::Reassign((String *)&stru_B73E10.q030, (const char **)ConfigWOL); /*0x78738c*/
    DeleteAndZero((ObjectClass *)&v41.q008); /*0x787395*/
  }
  ((String *)&v41)->Assign( &g_INI_DefaultBuffer); /*0x7873a3*/
  ((ObjectClass *)(ObjectClass *)&v41)->ReadSettingsWOL(); /*0x7873ac*/
  DeleteAndZero((ObjectClass *)&v41); /*0x7873b5*/
  if ( v38 ) /*0x7873c0*/
    return 0; /*0x7873cb*/
  Debug::Log(); /*0x7873d1*/
  SimpleDialogControl::Constructor((SimpleDialogControl *)&v43.q008); /*0x7873dd*/
  v43.q008 = (int)&off_7F7624; /*0x7873eb*/
  v14 = -((unsigned __int8)Flag::IsNot2(&v43) != 0); /*0x7873f6*/
  (v14) = ((v14) & ~0xFF) | ((v14 & 0xF2) & 0xFF); /*0x7873f8*/
  v15 = v14 + 285; /*0x7873ff*/
  LoginFlowWOL_Load_72C600(); /*0x787401*/
  Screen::Capture(1, 0, (int)&off_7F7624, 0); /*0x78740a*/
  Dialog = (Dialog *)CreateDialog( /*0x787420*/
                       v15,
                       (INT_PTR (*)(HWND, UINT, WPARAM, LPARAM))OptionsDlgProcWOL,
                       (LPARAM)&v43.q008);
  Dialog::Show(Dialog); /*0x787424*/
  if ( !((String *)&stru_B73E10.q030)->Length() /*0x78743c*/
    || ((String *)&g_WebBrowserConfig)->Length() )
  {
    DlgItem = GetDlgItem((HWND)Dialog, 1576); /*0x787452*/
  }
  else
  {
    DlgItem = GetDlgItem((HWND)Dialog, 1836); /*0x78744a*/
  }
  SetFocus(DlgItem); /*0x787459*/
  while ( !(unsigned __int8)ObjectClass::Release(&v43.q008) ) /*0x787463*/
  {
    if ( Game::ProcessIdle(v18) ) /*0x78746c*/
      break; /*0x787473*/
    if ( (unsigned __int8)Dialog::PumpMessages() ) /*0x787475*/
      break; /*0x78747c*/
    LOBYTE(v19) = 0; /*0x78747e*/
    ScreenSaver::Process(v19, v37); /*0x787480*/
  }
  Dialog::Destroy(Dialog); /*0x787494*/
  LoginFlowWOL_Destroy_72C650(v37); /*0x787499*/
  if ( ObjectClass::GetMember01(&v43.q008) == 2 ) /*0x7874aa*/
  {
    v38 = 1; /*0x7874ac*/
LABEL_97:
    v43.q008 = (int)&off_7F7624; /*0x787704*/
    OwnerDrawControl::InitVtable((OwnerDrawControl *)&v43.q008); /*0x78770c*/
LABEL_98:
    v31 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x787711*/
    if ( v31 ) /*0x78771d*/
    {
      dword_B77DC8 = 0; /*0x787723*/
      CloseDialog(v31, 0); /*0x787729*/
    }
    Current = (HWND)Dialog::GetCurrent(); /*0x78772e*/
    v33 = GetDlgItem(Current, 1344); /*0x787739*/
    if ( v33 ) /*0x787741*/
      SetFocus(v33); /*0x787744*/
    if ( !v38 ) /*0x787750*/
      LoginFlowWOL_Open(v37); /*0x787752*/
    byte_B77DC0 = 1; /*0x78775b*/
    return v40; /*0x787757*/
  }
  Game::ProcessIdle(v20); /*0x7874b6*/
  byte_B77DC0 = 0; /*0x7874bf*/
  *(unsigned int *)v41.__pad_0 = 0; /*0x7874c6*/
  LOBYTE(v41.q004) = 0; /*0x7874ca*/
  ReadRegistryOptionsWOL((ObjectClass *)&v41); /*0x7874cf*/
  ComPtr::Constructor((ComPtr *)&v41.q008); /*0x7874d8*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7F3F44) */  /*0x7874e6*/
  if ( (unsigned __int8)Flag::IsNot2(&v41) ) /*0x7874ea*/
  {
    PlayerProfile = LoadPlayerProfile((ObjectClass *)&v39, (const char **)&stru_B73E10.q030); /*0x7874fc*/
    ComPtr::Set((ComPtr *)&v41.q008, PlayerProfile->ptr_4); /*0x787509*/
    /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7F3F44) */  /*0x787512*/
    ((ComPtr *)&v39)->Release(); /*0x787516*/
  }
  else
  {
    ComPtr::Set((ComPtr *)&v41.q008, dword_B75E4C); /*0x787528*/
  }
  v22 = (String *)((char *)v42 + 12); /*0x787531*/
  if ( !((String *)((char *)v42 + 12))->Length() ) /*0x787536*/
    goto LABEL_82; /*0x787536*/
  ptr_0 = g_WOL_UserList.ptr_0; /*0x787543*/
  v24 = 1; /*0x787549*/
  if ( g_WOL_UserList.ptr_0 <= 1 ) /*0x787550*/
  {
LABEL_77:
    v28 = dword_B76468; /*0x78759d*/
    goto LABEL_78; /*0x78759d*/
  }
  v25 = 248; /*0x787552*/
  while ( 1 ) /*0x787557*/
  {
    v26 = 0; /*0x787557*/
    if ( v25 >= 0 && v24 < ptr_0 ) /*0x78755f*/
      v26 = (char *)dword_B778E0 + v25; /*0x787566*/
    v27 = strchr(v26 + 24, 58); /*0x78756e*/
    if ( v27 ) /*0x787578*/
    {
      if ( *v27 && (unsigned __int8)String::Equals_Alt(v22, v27 + 1) ) /*0x787583*/
        break; /*0x787583*/
    }
    ptr_0 = g_WOL_UserList.ptr_0; /*0x78758c*/
    ++v24; /*0x787592*/
    v25 += 248; /*0x787593*/
    if ( v24 >= g_WOL_UserList.ptr_0 ) /*0x78759b*/
      goto LABEL_77; /*0x78759b*/
  }
  if ( v24 == -1 ) /*0x7875b5*/
  {
LABEL_82:
    v28 = dword_B76468; /*0x7875c6*/
    ptr_0 = g_WOL_UserList.ptr_0; /*0x7875cb*/
  }
  else
  {
    ptr_0 = g_WOL_UserList.ptr_0; /*0x7875b7*/
    v28 = v24; /*0x7875bd*/
    dword_B76468 = v24; /*0x7875bf*/
  }
LABEL_78:
  if ( v28 < ptr_0 ) /*0x7875a4*/
  {
    if ( v28 != -1 ) /*0x7875d6*/
    {
      if ( v28 >= 1 ) /*0x7875f0*/
        goto LABEL_87; /*0x7875f0*/
LABEL_96:
      /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7F3F44) */  /*0x7876f1*/
      ((ComPtr *)&v41.q008)->Release(); /*0x7876fd*/
      goto LABEL_97; /*0x7876fd*/
    }
  }
  else
  {
    dword_B76468 = -1; /*0x7875a6*/
  }
  if ( ptr_0 <= 1 ) /*0x7875db*/
    goto LABEL_96; /*0x7875db*/
  v28 = 1; /*0x7875e1*/
  dword_B76468 = 1; /*0x7875e6*/
LABEL_87:
  if ( v28 >= ptr_0 || !ConnectAndLoginWOL((char *)dword_B778E0 + 248 * v28) ) /*0x787614*/
    goto LABEL_96; /*0x78761b*/
  if ( byte_B77E68 && (unsigned __int8)Flag::IsNot2(&v41) ) /*0x78762e*/
  {
    v36 = *(unsigned int *)v42[2].__pad_0; /*0x787644*/
    v34 = dword_84A238; /*0x787645*/
    v29 = ((String *)(String *)&g_WebBrowserConfig)->GetOrEmpty(); /*0x787655*/
    v30 = ((String *)(String *)&stru_B73E10.q030)->GetOrEmpty(); /*0x787657*/
    FindChannelWOL(v30, (int)v29, v34, v36); /*0x787660*/
    SaveConfigWOL((TechnoClass *)&dword_A8B238); /*0x78766a*/
  }
  if ( InfantryClass::SetField6((InfantryClass *)&v41) && ReadWOLLobbyPlayerOption() ) /*0x78767c*/
  {
    Screen::Capture(1, 0, (int)&off_7F7624, (int)v22); /*0x787689*/
    SimpleDialogControl::Constructor((SimpleDialogControl *)&v39); /*0x787692*/
    *(unsigned int *)v39.owningHouseIndex = &off_7F7624; /*0x787697*/
    LoginFlowWOL_Load(); /*0x78769b*/
    RunDialog(0x112u, (INT_PTR (*)(HWND, UINT, WPARAM, LPARAM))sub_79AE00, (LPARAM)&v39); /*0x7876af*/
    LoginFlowWOL_Destroy(v37); /*0x7876b4*/
    *(unsigned int *)v39.owningHouseIndex = &off_7F7624; /*0x7876bd*/
    OwnerDrawControl::InitVtable((OwnerDrawControl *)&v39); /*0x7876c1*/
  }
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7F3F44) */  /*0x7876ca*/
  ((ComPtr *)&v41.q008)->Release(); /*0x7876d2*/
  v43.q008 = (int)&off_7F7624; /*0x7876db*/
  OwnerDrawControl::InitVtable((OwnerDrawControl *)&v43.q008); /*0x7876df*/
  return 1; /*0x787348*/

}
}
// 0x787770
namespace gamemd {
int NetworkLobbyWOL(HWND hWnd, char a2)
{

  char *v3; // eax
  int i; // edi
  int v5; // eax
  int j; // esi
  int v7; // eax
  int k; // esi
  int result; // eax
  HANDLE *v10; // esi
  int v11; // eax
  char *v12; // ebx
  char *v13; // edi
  void *v14; // ebx
  char *v15; // esi
  wchar_t *v16; // eax
  wchar_t *StringCSF; // eax
  int m; // esi
  int v19; // esi
  wchar_t *v20; // esi
  HWND v21; // eax
  HANDLE *v22; // esi
  wchar_t *v23; // esi
  HWND v24; // eax
  char v25; // cl
  int v26; // eax
  CreateGameDialogControl *v27; // ecx
  DWORD n; // esi
  HWND v29; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  HWND v32; // eax
  CreateGameDialogControl *v33; // ecx
  DWORD ii; // ebx
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
  CreateGameDialogControl *v47; // ecx
  HWND v48; // eax
  HWND v49; // eax
  HWND v50; // eax
  unsigned int HashMap_field_0x08; // eax
  unsigned int jj; // ebp
  ObjectClass *v53; // esi
  ObjectClass *v54; // edi
  unsigned int v55; // ecx
  int *v56; // ebp
  int v57; // esi
  int *v58; // edi
  int v59; // ebx
  int v60; // esi
  int v61; // edx
  int v62; // ecx
  int v63; // eax
  StringVector v64; // [esp+4h] [ebp-2Ch] BYREF
  char v65; // [esp+23h] [ebp-Dh]
  int v66; // [esp+24h] [ebp-Ch]
  String v67; // [esp+28h] [ebp-8h] BYREF

  v65 = a2; /*0x787780*/
  v66 = 0; /*0x787786*/
  if ( byte_B77DC1 && *(unsigned int *)&dword_A8B238 == 4 && dword_A8B244 == 3 && dword_A8D584 != -1 && dword_A8D584 < 8 ) /*0x7877bb*/
  {
    ((WideString *)&v67)->Assign( (wchar_t *)&unk_A8D1FC + 56 * dword_A8D584); /*0x7877d8*/
    ToWideStringCharAlt((char **)&v67.ptr_4, (const wchar_t **)&v67); /*0x7877e5*/
    ((DeleteAndZero *)&v67)->Alt(); /*0x7877ee*/
    v3 = ((String *)(String *)&v67.ptr_4)->GetOrEmpty(); /*0x7877fe*/
    if ( !_strnicmp(v3, unk_A8B380, 0x14u) ) /*0x787804*/
    {
      if ( !dword_A8B3AC ) /*0x78781b*/
      {
        unknown_libname_73(&v67); /*0x78782e*/
        memset(&v64, 0, 12); /*0x78784e*/
        for ( i = 0; i < *(unsigned int *)&stru_B736F8; ++i ) /*0x787859*/
        {
          DynamicStringArray::Get(&stru_B736F8, (char **)&v67, i); /*0x787866*/
          StringVector::Insert(&v64, (const char **)&v67, *(int *)v64.__pad_0); /*0x787875*/
        }
LABEL_24:
        DeleteAndZero((ObjectClass *)&v67); /*0x78795b*/
        Network_Delete(*(int *)v64.__pad_0, v64.q004, (void **)v64.q008); /*0x787960*/
        goto LABEL_25; /*0x787960*/
      }
      if ( dword_A8B3AC == 1 ) /*0x787890*/
      {
        memset(&v64, 0, 12); /*0x78789f*/
        unknown_libname_73(&v67); /*0x7878a7*/
        Array::CleanupArrayWOL((Array *)&v64); /*0x7878ae*/
        v5 = *(unsigned int *)stru_B73BD8.__pad_0; /*0x7878b3*/
        for ( j = 0; j < *(int *)stru_B73BD8.__pad_0; ++j ) /*0x7878bc*/
        {
          if ( j >= 0 && j < v5 ) /*0x7878c4*/
            String::Reassign(&v67, (const char **)(stru_B73BD8.StringVector_field_0x08 + 4 * j)); /*0x7878d3*/
          StringVector::Insert(&v64, (const char **)&v67, *(int *)v64.__pad_0); /*0x7878e2*/
          v5 = *(unsigned int *)stru_B73BD8.__pad_0; /*0x7878e7*/
        }
        goto LABEL_24; /*0x7878ef*/
      }
    }
    else if ( !dword_A8B3AC ) /*0x7878f9*/
    {
      memset(&v64, 0, 12); /*0x787904*/
      unknown_libname_73(&v67); /*0x78790c*/
      Array::CleanupArrayWOL((Array *)&v64); /*0x787913*/
      v7 = *(unsigned int *)DataGlobal_B76510; /*0x787918*/
      for ( k = 0; k < *(int *)DataGlobal_B76510; ++k ) /*0x787921*/
      {
        if ( k >= 0 && k < v7 ) /*0x787929*/
          String::Reassign(&v67, (const char **)dword_B76518 + k); /*0x787939*/
        StringVector::Insert(&v64, (const char **)&v67, *(int *)v64.__pad_0); /*0x787948*/
        v7 = *(unsigned int *)DataGlobal_B76510; /*0x78794d*/
      }
      goto LABEL_24; /*0x787955*/
    }
LABEL_25:
    DeleteAndZero((ObjectClass *)&v67.ptr_4); /*0x787965*/
  }
  byte_B77DC1 = 0; /*0x78796e*/
  g_NetworkLobbyState = 0; /*0x78797d*/
  if ( *(unsigned int *)&dword_A8B238 == 4 && dword_A8B244 == 3 ) /*0x78798c*/
  {
    (*(void (**)(LPVOID, int))(*(unsigned int *)ppv + 180))(ppv, dword_A8B3AC); /*0x78799d*/
    if ( !byte_B77E10 ) /*0x7879aa*/
      InitVersionStringsWOL((ObjectClass *)v64.q00C); /*0x7879ac*/
  }
  Network::Init(); /*0x7879b1*/
  if ( !byte_B77DC2 || (result = LoginFlowWOL((ObjectClass *)v64.q00C), result == 1) ) /*0x7879c7*/
  {
    v10 = &Handles; /*0x7879d3*/
    do /*0x7879e6*/
      ResetEvent(*v10++); /*0x7879db*/
    while ( (int)v10 < (int)g_WOL_RequestObject ); /*0x7879e6*/
    if ( !hWnd ) /*0x7879ea*/
    {
      Screen::Capture(1, 0, 0, 0); /*0x7879f4*/
      Network_Load_72CD60(); /*0x7879f9*/
      hWnd = (HWND)CreateDialog(0x113u, (INT_PTR (*)(HWND, UINT, WPARAM, LPARAM))WOLobby::DlgProc, 0); /*0x787a13*/
      if ( ((String *)&unk_B73AE0)->Length() ) /*0x787a15*/
      {
        v11 = ((String *)&unk_B73AE0)->Length(); /*0x787a27*/
        v12 = (char *)__2_YAPAXI_Z(v11 + 1); /*0x787a33*/
        if ( v12 ) /*0x787a3a*/
        {
          v13 = ((String *)(String *)&unk_B73AE0)->GetOrEmpty(); /*0x787a4a*/
          v64.q008 = (int)asc_83F328; /*0x787a51*/
          v64.q004 = (int)strcpy(v12, v13); /*0x787a66*/
          v15 = strtok((char *)v64.q004, (const char *)v64.q008); /*0x787a74*/
          while ( v15 ) /*0x787a7b*/
          {
            ((String *)&v67.ptr_4)->Assign( v15); /*0x787a82*/
            CharStringToWide((wchar_t **)&v67, (const char **)&v67.ptr_4); /*0x787a8f*/
            DeleteAndZero((ObjectClass *)&v67.ptr_4); /*0x787a98*/
            v16 = WideString::GetOrEmpty((WideString *)&v67); /*0x787aa1*/
            Dialog::ShowMessage(-1, (size_t)v16); /*0x787aae*/
            v15 = strtok(0, asc_83F328); /*0x787ac6*/
            ((DeleteAndZero *)&v67)->Alt(); /*0x787ac8*/
          }
          Dialog::ShowMessage(-1, (size_t)asc_830174); /*0x787add*/
          ((DeleteAndZero *)(DeleteAndZero *)&unk_B73AE0)->Alt2(); /*0x787aea*/
          __3_YAXPAX_Z(v14); /*0x787af0*/
        }
      }
      StringCSF = GetStringCSF(aGuiLogincomple, 0, g_Str_File_wonline_cpp, 10388); /*0x787b09*/
      ((WideString *)&v67.ptr_4)->Assign( StringCSF); /*0x787b13*/
      ShowUIMessage(16, (wchar_t **)&v67.ptr_4, 0); /*0x787b23*/
      ((DeleteAndZero *)&v67.ptr_4)->Alt(); /*0x787b2c*/
    }
    dword_B77DE0 = 1; /*0x787b3f*/
    ++dword_B77DDC; /*0x787b49*/
    (*(void (**)(LPVOID, unsigned int))(*(unsigned int *)ppv + 176))(ppv, 0); /*0x787b53*/
    for ( m = 0; m < *(int *)g_WindowManager.__pad_0; ++m ) /*0x787b62*/
      Object::DtorWithDelete((Object *)((char *)dword_B73AB0 + 4 * m), 0); /*0x787b6e*/
    v19 = 0; /*0x787b82*/
    for ( *(unsigned int *)g_WindowManager.__pad_0 = 0; v19 < stru_B76970.q010; ++v19 ) /*0x787b8c*/
      Object::DtorWithDelete((Object *)(stru_B76970.q018 + 4 * v19), 0); /*0x787b97*/
    stru_B76970.q010 = 0; /*0x787bab*/
    HashTable::CleanupAndResize(&stru_B76990); /*0x787bb1*/
    HashTable::Rebuild((HashTable *)&stru_B765F8.q010); /*0x787bbb*/
    (*(void (**)(LPVOID))(*(unsigned int *)ppv + 220))(ppv); /*0x787bc8*/
    if ( dword_A8B244 != 3 && dword_A8B244 != 1 && dword_A8B244 != 2 ) /*0x787be0*/
      RefreshChannelListWOL((ObjectClass *)v64.q00C); /*0x787be2*/
    RefreshGameListWOL((ObjectClass *)v64.q00C); /*0x787be7*/
    dword_84A1BC = 41; /*0x787bfd*/
    v20 = GetStringCSF(aTxtReqChanlist, 0, g_Str_File_wonline_cpp, 10408); /*0x787c11*/
    v21 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x787c13*/
    if ( v21 ) /*0x787c20*/
      SendDlgItemMessageA(v21, 1458, 0x4B2u, 0, (LPARAM)v20); /*0x787c30*/
    if ( !dword_B76520 || RequestChannelListWOL() ) /*0x787c41*/
    {
      v22 = &Handles; /*0x787c4e*/
      do /*0x787c65*/
        ResetEvent(*v22++); /*0x787c56*/
      while ( (int)v22 < (int)g_WOL_RequestObject ); /*0x787c65*/
      v64.q008 = 0; /*0x787c67*/
      v64.q004 = 0; /*0x787c69*/
      *(unsigned int *)v64.__pad_0 = g_Str_Trace_Requesting_channel_list_type____d__ping_; /*0x787c6b*/
      *(unsigned int *)&v67.ptr_4 = 0; /*0x787c70*/
      Debug::Log(); /*0x787c78*/
      if ( (*(int (**)(LPVOID, unsigned int, unsigned int))(*(unsigned int *)ppv + 24))(ppv, *(unsigned int *)&v67.ptr_4, 0) ) /*0x787c8f*/
      {
        SetEvent(Handles); /*0x787d0d*/
      }
      else
      {
        Network_Helper_7ADB00((ObjectClass *)&dword_B76520, &v67.ptr_4, dword_B76520); /*0x787ca6*/
        if ( RequestChannelListWOL() ) /*0x787cab*/
        {
          v23 = GetStringCSF(g_Str_TXT_JOINLOB, 0, g_Str_File_wonline_cpp, 10415); /*0x787cd3*/
          v24 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x787cd5*/
          if ( v24 ) /*0x787cdc*/
            SendDlgItemMessageA(v24, 1458, 0x4B2u, 0, (LPARAM)v23); /*0x787cec*/
          v25 = byte_84A210 && !v65; /*0x787cf5*/
          v26 = JoinGameLobbyWOL(v25); /*0x787d1a*/
          byte_84A210 = 1; /*0x787d22*/
          if ( v26 != -1 ) /*0x787d29*/
          {
            for ( n = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x787d4a*/
                  n == 258;
                  n = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u) )
            {
              Game::ProcessIdle(v27); /*0x787d4c*/
            }
            ResetEvent(*(&Handles + n)); /*0x787d70*/
            if ( !n || n == 5 ) /*0x787d83*/
            {
LABEL_89:
              CloseDialog(hWnd, 0); /*0x787f79*/
              Game::ProcessIdle(v47); /*0x787f82*/
              hWnd = 0; /*0x787f8c*/
              if ( ppv ) /*0x787f90*/
                (*(void (**)(LPVOID))(*(unsigned int *)ppv + 36))(ppv); /*0x787f95*/
            }
            else
            {
              g_WOL_ChannelLeaveState = 0; /*0x787d91*/
              PostMessageA(hWnd, 0x593u, 0, 0); /*0x787d97*/
              v29 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x787da2*/
              if ( v29 ) /*0x787da9*/
              {
                dword_B77DC8 = 0; /*0x787daf*/
                CloseDialog(v29, 0); /*0x787db5*/
              }
              Current = (HWND)Dialog::GetCurrent(); /*0x787dba*/
              DlgItem = GetDlgItem(Current, 1344); /*0x787dc5*/
              if ( DlgItem ) /*0x787dc9*/
                SetFocus(DlgItem); /*0x787dd2*/
              SetFocus(g_hWnd); /*0x787de3*/
              ShowWindow(hWnd, 1); /*0x787de8*/
              SetFocus(hWnd); /*0x787def*/
              v32 = GetDlgItem(hWnd, 1344); /*0x787df7*/
              SetFocus(v32); /*0x787dfa*/
              dword_B77DBC = 0; /*0x787dfc*/
              dword_B77DB8 = time(0); /*0x787e11*/
              while ( 1 ) /*0x787e27*/
              {
                for ( ii = WaitForMultipleObjects(0x12u, &Handles, 0, 0x14u); /*0x787e2f*/
                      ii == 258;
                      ii = WaitForMultipleObjects(0x12u, &Handles, 0, 0x14u) )
                {
                  Game::ProcessIdle(v33); /*0x787e35*/
                  if ( g_WOL_ChannelLeaveState ) /*0x787e41*/
                  {
                    v64.q008 = 0; /*0x787e47*/
                    v35 = GetDlgItem(hWnd, 1341); /*0x787e4f*/
                    EnableWindow(v35, v64.q008); /*0x787e52*/
                    v64.q008 = 0; /*0x787e54*/
                    v36 = GetDlgItem(hWnd, 1774); /*0x787e5c*/
                    EnableWindow(v36, v64.q008); /*0x787e5f*/
                    v64.q008 = 0; /*0x787e61*/
                    v37 = GetDlgItem(hWnd, 1581); /*0x787e69*/
                    EnableWindow(v37, v64.q008); /*0x787e6c*/
                    v64.q008 = 0; /*0x787e6e*/
                    v38 = GetDlgItem(hWnd, 1579); /*0x787e76*/
                    EnableWindow(v38, v64.q008); /*0x787e79*/
                    v64.q008 = 0; /*0x787e7b*/
                    v39 = GetDlgItem(hWnd, 1673); /*0x787e83*/
                    EnableWindow(v39, v64.q008); /*0x787e86*/
                    v64.q008 = 0; /*0x787e88*/
                    v40 = GetDlgItem(hWnd, 1672); /*0x787e90*/
                    EnableWindow(v40, v64.q008); /*0x787e93*/
                    v64.q008 = 0; /*0x787e95*/
                    v41 = GetDlgItem(hWnd, 1955); /*0x787e9d*/
                    EnableWindow(v41, v64.q008); /*0x787ea0*/
                    v64.q008 = 0; /*0x787ea2*/
                    v42 = GetDlgItem(hWnd, 1958); /*0x787eaa*/
                    EnableWindow(v42, v64.q008); /*0x787ead*/
                    v64.q008 = 0; /*0x787eaf*/
                    v43 = GetDlgItem(hWnd, 1567); /*0x787eb7*/
                    EnableWindow(v43, v64.q008); /*0x787eba*/
                    v64.q008 = 0; /*0x787ebc*/
                    v44 = GetDlgItem(hWnd, 1474); /*0x787ec4*/
                    EnableWindow(v44, v64.q008); /*0x787ec7*/
                    v64.q008 = 0; /*0x787ec9*/
                    v45 = GetDlgItem(hWnd, 1670); /*0x787ed1*/
                    EnableWindow(v45, v64.q008); /*0x787ed4*/
                    if ( JoinGameLobbyWOL(0) == -1 ) /*0x787ee0*/
                    {
                      v64.q008 = 1; /*0x787ee2*/
                      v46 = GetDlgItem(hWnd, 1670); /*0x787eea*/
                      EnableWindow(v46, v64.q008); /*0x787eed*/
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
                    goto LABEL_88; /*0x787f4c*/
                  case 0xFu: /*0x787f4c*/
                    v66 = 2; /*0x787f66*/
LABEL_88:
                    word_B77AD0 = 0; /*0x787f6e*/
                    goto LABEL_89; /*0x787f6e*/
                  case 5u: /*0x787f4c*/
                    goto LABEL_91; /*0x787f56*/
                  case 7u: /*0x787f4c*/
                    v66 = 1; /*0x788155*/
                    (*(void (**)(LPVOID))(*(unsigned int *)ppv + 36))(ppv); /*0x788160*/
                    byte_B77DEC = 0; /*0x788163*/
                    word_B77AD0 = 0; /*0x78816a*/
                    goto LABEL_91; /*0x788173*/
                }
              }
            }
          }
        }
      }
    }
LABEL_91:
    v48 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x787f98*/
    if ( v48 ) /*0x787fa6*/
    {
      dword_B77DC8 = 0; /*0x787fac*/
      CloseDialog(v48, 0); /*0x787fb2*/
    }
    v49 = (HWND)Dialog::GetCurrent(); /*0x787fb7*/
    v50 = GetDlgItem(v49, 1344); /*0x787fc2*/
    if ( v50 ) /*0x787fc6*/
      SetFocus(v50); /*0x787fc9*/
    ShowDialogConfirm(&word_B77AD0, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x787fdc*/
    if ( hWnd ) /*0x787fe3*/
      CloseDialog(hWnd, 0); /*0x787fe9*/
    while ( (unsigned __int8)CloseDialog(0, 0) ) /*0x787ff2*/
      ; /*0x787ffb*/
    Network_Destroy((ObjectClass *)v64.q00C); /*0x788008*/
    if ( v66 == 1 ) /*0x788012*/
      byte_B77DC1 = 1; /*0x788014*/
    if ( *(unsigned int *)&dword_A8B238 == 4 && dword_A8B244 == 3 ) /*0x78802f*/
    {
      HashMap_field_0x08 = stru_B76680.HashMap_field_0x08; /*0x788035*/
      for ( jj = 0; jj < stru_B76680.HashMap_field_0x08; HashMap_field_0x08 = stru_B76680.HashMap_field_0x08 ) /*0x78803e*/
      {
        v53 = *(ObjectClass **)(*(unsigned int *)stru_B76680.__pad_0 + 4 * jj); /*0x788045*/
        while ( v53 ) /*0x78804a*/
        {
          v54 = v53; /*0x78804c*/
          v53 = (ObjectClass *)v53->ptr_8; /*0x78804e*/
          DeleteAndZero(v54); /*0x788057*/
          __3_YAXPAX_Z(v54); /*0x78805d*/
        }
        ++jj; /*0x78806f*/
        *(unsigned int *)(*(unsigned int *)stru_B76680.__pad_0 + 4 * jj - 4) = 0; /*0x788070*/
      }
      v55 = dword_B766B0; /*0x78807d*/
      stru_B76680.HashMap_field_0x04 = 0; /*0x788083*/
      if ( HashMap_field_0x08 > dword_B766B0 ) /*0x78808b*/
      {
        do /*0x78813e*/
        {
          if ( byte_B76694 || HashMap_field_0x08 <= v55 ) /*0x7880a1*/
            break; /*0x7880a1*/
          v56 = *(int **)stru_B76680.__pad_0; /*0x7880ad*/
          v57 = HashMap_field_0x08; /*0x7880b3*/
          stru_B76680.HashMap_field_0x08 = HashMap_field_0x08 >> 1; /*0x7880b8*/
          --stru_B76680.HashMap_field_0x0C; /*0x7880c4*/
          *(unsigned int *)stru_B76680.__pad_0 = __2_YAPAXI_Z(4 * (HashMap_field_0x08 >> 1)); /*0x7880dd*/
          memset(*(void **)stru_B76680.__pad_0, 0, 4 * stru_B76680.HashMap_field_0x08); /*0x7880e5*/
          if ( v57 > 0 ) /*0x7880e7*/
          {
            v58 = v56; /*0x7880e9*/
            v59 = v57; /*0x7880eb*/
            do /*0x788126*/
            {
              v60 = *v58; /*0x7880ed*/
              if ( *v58 ) /*0x7880ed*/
              {
                do /*0x788120*/
                {
                  v61 = dword_B76698(v60) & ((1 << SLOBYTE(stru_B76680.HashMap_field_0x0C)) - 1); /*0x788109*/
                  v62 = *(unsigned int *)(*(unsigned int *)stru_B76680.__pad_0 + 4 * v61); /*0x788110*/
                  *(unsigned int *)(*(unsigned int *)stru_B76680.__pad_0 + 4 * v61) = v60; /*0x788113*/
                  v63 = *(unsigned int *)(v60 + 8); /*0x788116*/
                  *(unsigned int *)(v60 + 8) = v62; /*0x788119*/
                  v60 = v63; /*0x78811e*/
                }
                while ( v63 ); /*0x788120*/
              }
              ++v58; /*0x788122*/
              --v59; /*0x788125*/
            }
            while ( v59 ); /*0x788126*/
          }
          __3_YAXPAX_Z(v56); /*0x788129*/
          v55 = dword_B766B0; /*0x78812e*/
          HashMap_field_0x08 = stru_B76680.HashMap_field_0x08; /*0x788134*/
        }
        while ( stru_B76680.HashMap_field_0x08 > (unsigned int)dword_B766B0 ); /*0x78813e*/
      }
    }
    return v66; /*0x788144*/
  }
  return result; /*0x788148*/

}
// 0x788180
namespace gamemd {
int WOL_FindLobbyID(char a1)  // G42.42a: FULL body restored (G42.41i stub reverted; user no-stub directive)
{

  int v1; // esi
  unsigned int *v2; // eax
  int v3; // ebx
  unsigned int *v4; // ebp
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
  void *v18[4]; // [esp+28h] [ebp-278h] BYREF
  unsigned int v19[3]; // [esp+38h] [ebp-268h] BYREF
  unsigned int v20[6]; // [esp+44h] [ebp-25Ch] BYREF
  char v21; // [esp+5Ch] [ebp-244h]
  int v22; // [esp+60h] [ebp-240h]
  int v23; // [esp+64h] [ebp-23Ch]
  char Buffer[32]; // [esp+68h] [ebp-238h] BYREF
  char Source[32]; // [esp+88h] [ebp-218h] BYREF
  char Destination[32]; // [esp+A8h] [ebp-1F8h] BYREF
  wchar_t String2[32]; // [esp+C8h] [ebp-1D8h] BYREF
  unsigned int v28[22]; // [esp+108h] [ebp-198h] BYREF
  unsigned char v29[12]; // [esp+160h] [ebp-140h] BYREF
  int v30; // [esp+16Ch] [ebp-134h]
  char v31[32]; // [esp+174h] [ebp-12Ch] BYREF
  unsigned int v32[67]; // [esp+194h] [ebp-10Ch] BYREF

  v1 = stru_B73E10; /*0x788189*/
  v17 = stru_B73E10; /*0x7881a2*/
  memset(v32, 0, sizeof(v32)); /*0x7881a6*/
  if ( dword_A8B238[0] == 4 && dword_A8B244 == 3 ) /*0x7881bc*/
  {
    memset(Destination, 0, sizeof(Destination)); /*0x7881d2*/
    memset(String2, 0, 0x20u); /*0x7881e0*/
    memset(Buffer, 0, sizeof(Buffer)); /*0x7881eb*/
    memset(Source, 0, sizeof(Source)); /*0x7881f9*/
    v2 = __2_YAPAXI_Z(0x28u); /*0x7881fb*/
    v3 = 0; /*0x788200*/
    if ( v2 ) /*0x788207*/
      v4 = MixFileClass::FromFile(v2, g_Str_File_WDT_MIX, (int)&dword_886980); /*0x78821a*/
    else
      v4 = 0; /*0x78821e*/
    v18[1] = 0; /*0x788224*/
    v18[2] = 0; /*0x788228*/
    GenericNode::Constructor(v19); /*0x78822c*/
    GenericNode::Constructor(v20); /*0x788235*/
    LinkedList::Prepend(v19, (int)v20); /*0x78824b*/
    v18[3] = &g_ptr_7E1AFC; /*0x788257*/
    memset(&v20[3], 0, 12); /*0x788264*/
    v21 = 0; /*0x788270*/
    v22 = 0; /*0x788275*/
    v23 = 0; /*0x788279*/
    v18[0] = &g_ptr_7EA5F4; /*0x78827d*/
    CCFileClass::Construct(v28, aWdtmapmdIni); /*0x788285*/
    FileStraw::Open(v18, (int)v28, 0); /*0x788297*/
    sprintf(Buffer, "Territory%02d", *(unsigned int *)dword_A8B240); /*0x7882ad*/
    strcpy(Source, Buffer); /*0x7882d4*/
    if ( *(unsigned char *)(*(unsigned int *)(FindLobbyIDWOL_Find() + 4) + 20) ) /*0x7882ef*/
      ((INIClass *)(/*0x788313*/ (unsigned __int8 ***)v18))->GetString((unsigned __int8 *)aEurope, (unsigned __int8 *)Buffer, Source, Destination, 32);
    else
      ((INIClass *)(/*0x788308*/ (unsigned __int8 ***)v18))->GetString((unsigned __int8 *)aNorthamerica, (unsigned __int8 *)Buffer, Source, Destination, 32);
    ((INIClass *)(/*0x788338*/ (unsigned __int8 ***)v18))->GetString((unsigned __int8 *)Destination, (unsigned __int8 *)g_INI_Key_Name, aATerritory, v31, 32);
    BulkCharToWide(String2, (unsigned __int8 *)v31, -1); /*0x78834d*/
    dword_B75E50 = (int)_wcsdup(String2); /*0x788364*/
    if ( v4 ) /*0x788369*/
      (*(void (**)(unsigned int *, int))*v4)(v4, 1); /*0x788372*/
    v28[0] = &g_ptr_7E16B0; /*0x78837b*/
    v30 = 0; /*0x788386*/
    Vector::Clear((int)v29); /*0x78838d*/
    v28[0] = &off_7E1668; /*0x788399*/
    ((BufferIOFileClass *)v28)->Dtor(); /*0x7883a4*/
    ((HashTable *)v18)->DestroyHashTableINIClass(); /*0x7883ad*/
    v1 = v17; /*0x7883b2*/
  }
  else
  {
    v3 = 0; /*0x7883b8*/
  }
  v11 = FormatStringInt((char **)&v13, dword_B77DD4, 1); /*0x7883cf*/
  v5 = ((String *)(char **)&v14)->Assign( g_Str_Lob_41_); /*0x7883da*/
  String::Concat((const char **)v5, (char **)&v15, v11); /*0x7883e1*/
  DeleteAndZero((void **)&v14); /*0x7883ea*/
  DeleteAndZero((void **)&v13); /*0x7883f3*/
  v6 = 0; /*0x7883f8*/
  if ( v1 > 0 ) /*0x7883fc*/
  {
    v7 = &MEMORY[0xB73E1C]; /*0x788402*/
    v14 = &MEMORY[0xB73E1C]; /*0x788407*/
    while ( 1 ) /*0x78840b*/
    {
      if ( (int)v7 >= (int)&MEMORY[0xB73E1C] && v6 < stru_B73E10 ) /*0x788419*/
      {
        memcpy(v32, (char *)MEMORY[0xB73E18] + v3, sizeof(v32)); /*0x788430*/
        v1 = v17; /*0x788432*/
        v7 = v14; /*0x788436*/
      }
      if ( dword_A8B238[0] != 4 || dword_A8B244 != 3 ) /*0x78844a*/
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
    ((String *)(char **)&v13)->Assign( (const char *)&v32[13]); /*0x78847d*/
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
  v13 = (const wchar_t **)&MEMORY[0xB73E1C]; /*0x7884f2*/
  do /*0x7885fa*/
  {
    if ( (int)v13 >= (int)&MEMORY[0xB73E1C] && v6 < stru_B73E10 ) /*0x78850a*/
    {
      memcpy(v32, (char *)MEMORY[0xB73E18] + (unsigned int)v14, sizeof(v32)); /*0x788524*/
      v1 = v17; /*0x788526*/
    }
    if ( dword_A8B238[0] == 4 && dword_A8B244 == 3 ) /*0x78853a*/
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
    if ( v8 >= 0 && v8 < stru_B73E10 ) /*0x7886a7*/
      memcpy(v32, (char *)MEMORY[0xB73E18] + 268 * v8, sizeof(v32)); /*0x7886c8*/
    dword_B77DD4 = atol((const char *)&v32[13] + strlen(g_Str_Lob_41_)); /*0x7886e9*/
  }
LABEL_56:
  DeleteAndZero(&v15); /*0x7886ee*/
  return v8; /*0x788619*/

}
} // namespace gamemd
}
// 0x788710
namespace gamemd {
int sub_788710(int a1, char a2)  // G42.42a: def head rebuilt (truth = raw_decomp fn_78.c sub_788710 BOOL(int,char))
{
  WideString v11[4]; // [esp+8h] [ebp-4h] BYREF

  if ( dword_B77DD0 ) /*0x78871e*/
  {
    Debug::Log(); /*0x788734*/
    (*(void (__stdcall **)(LPVOID))(*(unsigned int *)ppv + 36))(ppv); /*0x788744*/
    wchar_t *StringCSF; // eax
    StringCSF = GetStringCSF(g_Str_WOL_LeavingChannel, 0, g_Str_File_wonline_cpp, 10704); /*0x788758*/
    ((WideString *)(v11))->Assign(StringCSF); /*0x788762*/
    ShowUIMessage(a1, (wchar_t **)v11, a2); /*0x78876e*/
    ((DeleteAndZero *)v11)->Alt(); /*0x788777*/
    int i; // esi
    for ( i = 0; dword_B77DD0; ++i ) /*0x788785*/
    {
      if ( i >= 150 ) /*0x788793*/
        break; /*0x788793*/
      Sleep(0x64u); /*0x788797*/
      CreateGameDialogControl *v6; // ecx
      Game::ProcessIdle(v6); /*0x788799*/
    }
    HWND v7; // eax
    v7 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x7887ad*/
    if ( v7 ) /*0x7887b4*/
    {
      dword_B77DC8 &= ~0x40u; /*0x7887bf*/
      if ( !dword_B77DC8 ) /*0x7887c5*/
        CloseDialog(v7, 0); /*0x7887cb*/
    }
    HWND Current; // eax
    Current = (HWND)Dialog::GetCurrent(); /*0x7887d0*/
    HWND DlgItem; // eax
    DlgItem = GetDlgItem(Current, 1344); /*0x7887db*/
    if ( DlgItem ) /*0x7887e3*/
      SetFocus(DlgItem); /*0x7887e6*/
  }
  return dword_B77DD0 == 0; /*0x7887f6*/
}
}
// 0x788800
namespace gamemd {
int WOL_LeaveChannelEx(int a1, char ** a2, void * a3)
{

  wchar_t *String_buf; // eax
  int i; // esi
  HWND v6; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  wchar_t *v10; // eax
  int v11; // esi
  void *v12; // [esp+10h] [ebp-8h] BYREF
  char **v13; // [esp+14h] [ebp-4h]

  v13 = a2; /*0x788809*/
  if ( !strcmp((const char *)(a1 + 52), byte_B76B44) || !strcmp((const char *)(a1 + 52), &byte_B73C1C) ) /*0x788855*/
  {
    ((DeleteAndZero *)&a3)->Alt(); /*0x788a17*/
    return 0; /*0x788a1c*/
  }
  else
  {
    if ( !dword_B77DD0 ) /*0x788887*/
      goto LABEL_14; /*0x788887*/
    Debug::Log(); /*0x78889d*/
    (*(void (**)(LPVOID))(*(unsigned int *)ppv + 36))(ppv); /*0x7888ad*/
    String_buf = GetStringCSF(g_Str_WOL_LeavingChannel, 0, g_Str_File_wonline_cpp, 10704); /*0x7888c1*/
    ((WideString *)(wchar_t **)&v12)->Assign( String_buf); /*0x7888cb*/
    ShowUIMessage(64, (wchar_t **)&v12, 1); /*0x7888db*/
    ((DeleteAndZero *)&v12)->Alt(); /*0x7888e4*/
    for ( i = 0; dword_B77DD0; ++i ) /*0x7888f2*/
    {
      if ( i >= 150 ) /*0x788900*/
        break; /*0x788900*/
      Sleep(0x64u); /*0x788904*/
      Game::ProcessIdle(); /*0x788906*/
    }
    v6 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x78891a*/
    if ( v6 ) /*0x788921*/
    {
      dword_B77DC8 &= ~0x40u; /*0x78892c*/
      if ( !dword_B77DC8 ) /*0x788932*/
        CloseDialog(v6, 0); /*0x788938*/
    }
    Current = Dialog::GetCurrent(); /*0x78893d*/
    DlgItem = GetDlgItem(Current, 1344); /*0x788948*/
    if ( DlgItem ) /*0x788950*/
      SetFocus(DlgItem); /*0x788953*/
    if ( dword_B77DD0 ) /*0x788960*/
    {
      ((DeleteAndZero *)&a3)->Alt(); /*0x788966*/
      return 1; /*0x78896b*/
    }
    else
    {
LABEL_14:
      strcpy((char *)(a1 + 215), ((String *)v13)->GetOrEmpty_Alt()); /*0x78899f*/
      memcpy(&MEMORY[0xB73BE8], (const void *)a1, 0x10Cu); /*0x7889b4*/
      v10 = WideString::GetOrEmpty_Alt((wchar_t **)&a3); /*0x7889ba*/
      ((WideString *)(wchar_t **)&v12)->Assign( v10); /*0x7889c4*/
      ShowUIMessage(2, (wchar_t **)&v12, 0); /*0x7889d4*/
      ((DeleteAndZero *)&v12)->Alt(); /*0x7889dd*/
      Debug::Log(); /*0x7889e8*/
      v11 = (*(int (**)(LPVOID, int))(*(unsigned int *)ppv + 32))(ppv, a1); /*0x788a00*/
      ((DeleteAndZero *)&a3)->Alt(); /*0x788a02*/
      return v11; /*0x788a07*/
    }
  }

}
}
// 0x788A30
namespace gamemd {
int WOL_JoinGameLobby(char a1)
{
  int LobbyIDWOL; // eax
  int v2; // ebx
  wchar_t *StringCSF; // eax
  wchar_t *v4; // ecx
  int v5; // esi
  HWND v6; // eax
  HWND DlgItem; // eax
  wchar_t *v9; // [esp-4h] [ebp-120h] BYREF
  ObjectClass *v10; // [esp+0h] [ebp-11Ch]
  unsigned char v11[272]; // [esp+Ch] [ebp-110h] BYREF

  LobbyIDWOL = FindLobbyIDWOL(a1); /*0x788a39*/
  v2 = LobbyIDWOL; /*0x788a3e*/
  if ( LobbyIDWOL == -1 ) /*0x788a43*/
    goto LABEL_9; /*0x788a43*/
  if ( LobbyIDWOL >= 0 && LobbyIDWOL < *(int *)&g_WOL_AuthPool ) /*0x788a53*/
    memcpy(&v11[4], (const void *)(*(unsigned int *)&DataGlobal_B73E18 + 268 * LobbyIDWOL), 0x10Cu); /*0x788a71*/
  ((String *)((String *)v11))->Assign(aZotclot9); /*0x788a7c*/
  StringCSF = GetStringCSF(g_Str_TXT_JOINLOB, 0, g_Str_File_wonline_cpp, 10753); /*0x788a92*/
  v9 = v4; /*0x788a97*/
  ((WideString *)(&v9))->Assign(StringCSF); /*0x788a9b*/
  v5 = LeaveChannelExWOL((int)&v11[4], (char **)v11, v9); /*0x788ab1*/
  DeleteAndZero((ObjectClass *)v11); /*0x788ab3*/
  if ( v5 ) /*0x788aba*/
  {
    LABEL_9:
    GameListRenderWOL(v10); /*0x788aee*/
    return -1; /*0x788af3*/
  }
  else
  {
    v6 = (HWND)Dialog::FindByHandle((Dialog *)0x113); /*0x788ac1*/
    if ( v6 ) /*0x788ac8*/
    {
      DlgItem = GetDlgItem(v6, 1344); /*0x788ad0*/
      SetFocus(DlgItem); /*0x788ad7*/
    }
    GameListRenderWOL(v10); /*0x788add*/
    return v2; /*0x788ae2*/
  }
}
}
// 0x788B00
namespace gamemd {
int CreateAccountWOL(int a2, int a3)
{

  HWND v3; // ecx
  HANDLE *v4; // esi
  wchar_t *StringCSF; // eax
  CreateGameDialogControl *v6; // ecx
  DWORD i; // esi
  HWND v8; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  HWND DeleteAndZero_field_0x04; // esi
  int result; // eax
  Dialog *DialogIndirect; // esi
  char *v14; // edi
  HWND v15; // eax
  HWND v16; // eax
  char *v17; // edi
  HWND v18; // eax
  HWND v19; // eax
  int DeleteAndZero_field_0x08; // eax
  wchar_t *v21; // eax
  int v22; // edi
  wchar_t *v23; // eax
  wchar_t *v24; // eax
  wchar_t *v25; // eax
  wchar_t *v26; // eax
  Dialog *v27; // esi
  char *v28; // edi
  HWND v29; // eax
  HWND v30; // eax
  char *v31; // edi
  HWND v32; // eax
  HWND v33; // eax
  char *v34; // edi
  HWND v35; // eax
  HWND v36; // eax
  char *v37; // edi
  HWND v38; // eax
  HWND v39; // eax
  char *v40; // edi
  wchar_t *v41; // eax
  wchar_t *v42; // eax
  wchar_t *v43; // eax
  wchar_t *v44; // eax
  wchar_t *v45; // eax
  wchar_t *v46; // eax
  HWND v47; // esi
  HWND v48; // esi
  ObjectClass *v49; // [esp+34h] [ebp-29Ch]
  DeleteAndZero v50; // [esp+44h] [ebp-28Ch] BYREF
  WPARAM wParam; // [esp+50h] [ebp-280h]
  DeleteAndZero v52; // [esp+54h] [ebp-27Ch] BYREF
  int v53; // [esp+60h] [ebp-270h]
  int v54; // [esp+64h] [ebp-26Ch]
  int v55; // [esp+68h] [ebp-268h]
  unsigned char v56[228]; // [esp+6Ch] [ebp-264h] BYREF
  char v57[128]; // [esp+150h] [ebp-180h] BYREF
  char Buffer[256]; // [esp+1D0h] [ebp-100h] BYREF

  v50.q004 = (int)v3; /*0x788b0c*/
  RenderGadgetClassAnimation(v3, 0); /*0x788b10*/
  Screen::Capture(1, 0, a2, a3); /*0x788b19*/
  wParam = 1; /*0x788b2b*/
  v53 = 1; /*0x788b2f*/
  v55 = 0; /*0x788b33*/
  v50.u32_8 = 0; /*0x788b37*/
  v4 = &Handles; /*0x788b3b*/
  do /*0x788b4e*/
    ResetEvent(*v4++); /*0x788b43*/
  while ( (int)v4 < (int)g_WOL_RequestObject ); /*0x788b4e*/
  memset(&v56[4], 0, 224); /*0x788b6b*/
  memset(v57, 0, sizeof(v57)); /*0x788b92*/
  StringCSF = GetStringCSF(aWolNewaccountf, 0, g_Str_File_wonline_cpp, 10826); /*0x788ba0*/
  ((WideString *)&v50)->Assign( StringCSF); /*0x788baa*/
  ShowUIMessage(128, (wchar_t **)&v50, 0); /*0x788bb9*/
  ((DeleteAndZero *)&v50)->Alt(); /*0x788bc2*/
  Debug::Log(); /*0x788bcc*/
  (*(void (**)(LPVOID, int, int, char *, char *, int))(*(unsigned int *)ppv + 16))( /*0x788bf4*/
    ppv,
    g_NetworkRematchState,
    65537,
    aTibsun,
    aTibpass99,
    35);
  do /*0x788c3a*/
  {
    for ( i = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x788c11*/
          i == 258;
          i = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u) )
    {
      Game::ProcessIdle(v6); /*0x788c13*/
    }
    ResetEvent(*(&Handles + i)); /*0x788c36*/
  }
  while ( i > 1 ); /*0x788c3a*/
  v8 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x788c46*/
  if ( v8 ) /*0x788c4d*/
  {
    dword_B77DC8 = 0; /*0x788c53*/
    CloseDialog(v8, 0); /*0x788c59*/
  }
  Current = (HWND)Dialog::GetCurrent(); /*0x788c5e*/
  DlgItem = GetDlgItem(Current, 1344); /*0x788c6f*/
  if ( DlgItem ) /*0x788c73*/
    SetFocus(DlgItem); /*0x788c76*/
  if ( !i ) /*0x788c7e*/
  {
    DeleteAndZero_field_0x04 = (HWND)v50.q004; /*0x788c80*/
    ShowWindow((HWND)v50.q004, 5); /*0x788c87*/
    return Dialog::InitWindow(DeleteAndZero_field_0x04, 0); /*0x788c9e*/
  }
  while ( 1 ) /*0x788cd6*/
  {
    CreateAccountWOL_Create(); /*0x788cd6*/
    Screen::Capture(1, 0, (int)GetDlgItem, (int)SendMessageA); /*0x788cdf*/
    DialogIndirect = (Dialog *)CreateDialogIndirect(g_hInstance, 231, g_hWnd, (DLGPROC)CreateAccountDlgProcWOL, 0); /*0x788d02*/
    SetupDialog(DialogIndirect, 231); /*0x788d0b*/
    SendDlgItemMessageA((HWND)DialogIndirect, 1582, 0x14Eu, v53 - 1, 0); /*0x788d23*/
    if ( v55 <= 0 ) /*0x788d2f*/
    {
      v16 = GetDlgItem((HWND)DialogIndirect, 1583); /*0x788d69*/
      SendMessageA(v16, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x788d78*/
    }
    else
    {
      FromStringInt((char **)&v52.u32_8, v55); /*0x788d35*/
      v14 = ((String *)(String *)&v52.u32_8)->GetOrEmpty(); /*0x788d43*/
      v15 = GetDlgItem((HWND)DialogIndirect, 1583); /*0x788d4b*/
      SendMessageA(v15, 0x4B4u, 0, (LPARAM)v14); /*0x788d56*/
      DeleteAndZero((ObjectClass *)&v52.u32_8); /*0x788d5c*/
    }
    if ( v50.u32_8 <= 0 ) /*0x788d80*/
    {
      v19 = GetDlgItem((HWND)DialogIndirect, 1584); /*0x788dba*/
      SendMessageA(v19, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x788dc9*/
    }
    else
    {
      FromStringInt((char **)v56, v50.u32_8); /*0x788d86*/
      v17 = ((String *)(String *)v56)->GetOrEmpty(); /*0x788d94*/
      v18 = GetDlgItem((HWND)DialogIndirect, 1584); /*0x788d9c*/
      SendMessageA(v18, 0x4B4u, 0, (LPARAM)v17); /*0x788da7*/
      DeleteAndZero((ObjectClass *)v56); /*0x788dad*/
    }
    SendDlgItemMessageA((HWND)DialogIndirect, 1574, 0x4B4u, 0, (LPARAM)&v56[100]); /*0x788de6*/
    SendDlgItemMessageA((HWND)DialogIndirect, 1585, 0xF1u, wParam, 0); /*0x788dfa*/
    ShowWindow((HWND)v50.q004, 0); /*0x788e09*/
    ShowWindow((HWND)DialogIndirect, 1); /*0x788e0e*/
    if ( MessageDialogLoopAlt((HWND)DialogIndirect, (unsigned __int8 (*)(void))GameLoop::Thunk, 0, 1, 1) != 1 ) /*0x788e25*/
      break; /*0x788e25*/
    v56[100] = 0; /*0x788e30*/
    strcpy(&v56[100], ((String *)&stru_B76E34)->GetOrEmpty()); /*0x788e5a*/
    DeleteAndZero_field_0x08 = *(unsigned int *)stru_B77820.__pad_C; /*0x788e5e*/
    v50.u32_8 = *(unsigned int *)stru_B77820.__pad_C; /*0x788e66*/
    v55 = dword_B73AB8; /*0x788e78*/
    v53 = dword_B73A1C + 1; /*0x788e87*/
    wParam = dword_B76228; /*0x788e8b*/
    if ( dword_B73A1C + 1 <= 0 ) /*0x788e8f*/
      goto LABEL_73; /*0x788e8f*/
    if ( dword_B73AB8 <= 0 || *(int *)stru_B77820.__pad_C <= 0 ) /*0x788e9f*/
    {
LABEL_63:
      if ( dword_B73A1C + 1 >= 12 ) /*0x78938d*/
      {
LABEL_73:
        v45 = GetStringCSF(aTxtInvalidMont, 0, g_Str_File_wonline_cpp, 10922); /*0x789462*/
        ShowDialogConfirm(v45, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x789483*/
      }
      else if ( dword_B73AB8 <= 0 || dword_B73AB8 > 31 ) /*0x78939e*/
      {
        v44 = GetStringCSF(aTxtInvalidDay, 0, g_Str_File_wonline_cpp, 10924); /*0x78944f*/
        ShowDialogConfirm(v44, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x789458*/
      }
      else if ( DeleteAndZero_field_0x08 > 0 ) /*0x7893a6*/
      {
        if ( strlen(&v56[100]) >= 6 ) /*0x7893ed*/
        {
          v24 = GetStringCSF(aTxtRequiredFie, 0, g_Str_File_wonline_cpp, 10930); /*0x789424*/
LABEL_71:
          ShowDialogConfirm(v24, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x789429*/
        }
        else
        {
          v43 = GetStringCSF(aTxtInvalidEmai, 0, g_Str_File_wonline_cpp, 10928); /*0x789400*/
          ShowDialogConfirm(v43, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x789409*/
        }
      }
      else
      {
        v42 = GetStringCSF(aTxtInvalidYear, 0, g_Str_File_wonline_cpp, 10926); /*0x7893c0*/
        ShowDialogConfirm(v42, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x7893c9*/
      }
    }
    else
    {
      if ( strlen(&v56[100]) < 6 ) /*0x788eb9*/
      {
        DeleteAndZero_field_0x08 = v50.u32_8; /*0x789386*/
        goto LABEL_63; /*0x789386*/
      }
      dword_B77E64 = 0; /*0x788ec6*/
      dword_B77E60 = -1; /*0x788ed5*/
      if ( (*(int (**)(LPVOID, int, int, int, unsigned char *))(*(unsigned int *)g_UIPointerTable + 40))( /*0x788ee5*/
             g_UIPointerTable,
             dword_B73A1C + 1,
             dword_B73AB8,
             v50.u32_8,
             &v56[100]) )
      {
        v21 = GetStringCSF(g_Str_TXT_CANT_CONNECT, 0, g_Str_File_wonline_cpp, 10939); /*0x788f04*/
LABEL_26:
        ShowDialogConfirm(v21, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x788f09*/
LABEL_27:
        while ( 1 ) /*0x788f12*/
        {
          CreateAccountWOL_Create_72C420(); /*0x788f12*/
          if ( dword_B77E60 >= 13 ) /*0x788f1f*/
          {
            *(unsigned int *)v50.owningHouseIndex = (dword_B77E60 >= 18) + 243; /*0x78903e*/
            v22 = *(unsigned int *)v50.owningHouseIndex; /*0x789042*/
          }
          else
          {
            v22 = 230; /*0x788f25*/
            *(unsigned int *)v50.owningHouseIndex = 230; /*0x788f2a*/
          }
          v27 = (Dialog *)CreateDialogIndirect(g_hInstance, v22, g_hWnd, (DLGPROC)WOLobbySmallDlgProc, 0); /*0x78905f*/
          SetupDialog(v27, v22); /*0x789065*/
          if ( ((String *)&unk_B77794)->Length() ) /*0x78906f*/
          {
            v28 = ((String *)(String *)&unk_B77794)->GetOrEmpty(); /*0x789082*/
            v29 = GetDlgItem((HWND)v27, 1576); /*0x78908a*/
            SendMessageA(v29, 0x4B4u, 0, (LPARAM)v28); /*0x78908d*/
          }
          else
          {
            v30 = GetDlgItem((HWND)v27, 1576); /*0x789095*/
            SendMessageA(v30, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x7890a4*/
          }
          if ( ((String *)&stru_B765EC)->Length() ) /*0x7890ab*/
          {
            v31 = ((String *)(String *)&stru_B765EC)->GetOrEmpty(); /*0x7890be*/
            v32 = GetDlgItem((HWND)v27, 1509); /*0x7890c6*/
            SendMessageA(v32, 0x4B4u, 0, (LPARAM)v31); /*0x7890c9*/
          }
          else
          {
            v33 = GetDlgItem((HWND)v27, 1509); /*0x7890d1*/
            SendMessageA(v33, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x7890e0*/
          }
          if ( ((String *)&unk_B778F4)->Length() ) /*0x7890e7*/
          {
            v34 = ((String *)(String *)&unk_B778F4)->GetOrEmpty(); /*0x7890fa*/
            v35 = GetDlgItem((HWND)v27, 1836); /*0x789102*/
            SendMessageA(v35, 0x4B4u, 0, (LPARAM)v34); /*0x789105*/
          }
          else
          {
            v36 = GetDlgItem((HWND)v27, 1836); /*0x78910d*/
            SendMessageA(v36, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x78911c*/
          }
          if ( ((String *)&stru_B778FC)->Length() ) /*0x789123*/
          {
            v37 = ((String *)&stru_B778FC)->GetOrEmpty(); /*0x789136*/
            v38 = GetDlgItem((HWND)v27, 1575); /*0x78913e*/
            SendMessageA(v38, 0x4B4u, 0, (LPARAM)v37); /*0x789141*/
          }
          else
          {
            v39 = GetDlgItem((HWND)v27, 1575); /*0x789149*/
            SendMessageA(v39, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x789158*/
          }
          ShowWindow((HWND)v27, 1); /*0x78915d*/
          SendMessageA((HWND)v27, 0x4A9u, 0, 1); /*0x78916d*/
          if ( MessageDialogLoopAlt((HWND)v27, (unsigned __int8 (*)(void))GameLoop::Thunk, 0, 1, 1) != 1 ) /*0x789184*/
            break; /*0x789184*/
          v56[68] = 0; /*0x78918f*/
          strcpy(&v56[68], ((String *)(String *)&unk_B77794)->GetOrEmpty()); /*0x7891b3*/
          v56[4] = 0; /*0x7891c1*/
          v40 = ((String *)(String *)&unk_B778F4)->GetOrEmpty(); /*0x7891cb*/
          v56[36] = 0; /*0x7891dc*/
          strcpy(&v56[4], v40); /*0x7891ea*/
          strcpy(&v56[36], ((String *)&stru_B778FC)->GetOrEmpty()); /*0x789217*/
          v57[0] = 0; /*0x789229*/
          if ( *(unsigned int *)v50.owningHouseIndex == 243 ) /*0x789231*/
            strcpy(v57, ((String *)(String *)&stru_B765EC)->GetOrEmpty()); /*0x78925a*/
          v54 = 0; /*0x789267*/
          if ( *(unsigned int *)v50.owningHouseIndex == 244 ) /*0x789274*/
            v54 = unk_B76C20; /*0x78927c*/
          if ( strcmp(&v56[4], &v56[36]) ) /*0x78928e*/
          {
            v21 = GetStringCSF((wchar_t *)aTxtPasswordVer, 0, g_Str_File_wonline_cpp, 11073); /*0x7892cd*/
            goto LABEL_26; /*0x7892cd*/
          }
          if ( strlen(&v56[4]) != 8 ) /*0x7892e3*/
          {
            v21 = GetStringCSF((wchar_t *)aTxtPasswordToo, 0, g_Str_File_wonline_cpp, 11078); /*0x7892fc*/
            goto LABEL_26; /*0x7892fc*/
          }
          if ( (*(int (**)(LPVOID, unsigned char *, unsigned char *, unsigned char *, char *, WPARAM, int))(*(unsigned int *)g_UIPointerTable /*0x789330*/
                                                                                            + 36))(
                 g_UIPointerTable,
                 &v56[68],
                 &v56[4],
                 &v56[100],
                 v57,
                 wParam,
                 v54) )
          {
            v46 = GetStringCSF(g_Str_TXT_CANT_CONNECT, 0, g_Str_File_wonline_cpp, 11083); /*0x7894a5*/
            ShowDialogConfirm(v46, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x7894ae*/
LABEL_75:
            v47 = (HWND)v50.q004; /*0x7894b3*/
            ShowWindow((HWND)v50.q004, 5); /*0x7894ba*/
            Dialog::InitWindow(v47, 0); /*0x7894c3*/
            CreateAccountWOL_Create_72C470(v49); /*0x7894c8*/
            return result; /*0x7894d7*/
          }
          v41 = GetStringCSF(aTxtReqNick, 0, g_Str_File_wonline_cpp, 11085); /*0x78934c*/
          ((WideString *)&v52.q004)->Assign( v41); /*0x789356*/
          ShowUIMessage(256, (wchar_t **)&v52.q004, 1); /*0x789366*/
          ((DeleteAndZero *)&v52.q004)->Alt(); /*0x78936f*/
          if ( dword_B77DF0 >= 0 ) /*0x78937b*/
            goto LABEL_75; /*0x78937b*/
        }
      }
      else
      {
        v23 = GetStringCSF(aWolRequestingn, 0, g_Str_File_wonline_cpp, 10942); /*0x788f44*/
        ((WideString *)&v52)->Assign( v23); /*0x788f4e*/
        ShowUIMessage(256, (wchar_t **)&v52, 1); /*0x788f5e*/
        ((DeleteAndZero *)&v52)->Alt(); /*0x788f67*/
        if ( dword_B77E60 >= 0 ) /*0x788f73*/
        {
          if ( dword_B77E60 >= 13 || dword_B77E64 ) /*0x788fc6*/
            goto LABEL_27; /*0x788fc6*/
          v26 = GetStringCSF(aTxtConsentRequ, 0, g_Str_File_wonline_cpp, 10957); /*0x788fe4*/
          if ( ShowDialogConfirm(v26, 4, (unsigned __int8 (*)(void))GameLoop::Thunk, 0) == 6 ) /*0x788ff8*/
          {
            sprintf(Buffer, "http://apiregister.westwood.com/consent_form/index_%d.html", dword_B77E50); /*0x789012*/
            OpenURLWOL(Buffer, 1); /*0x789026*/
          }
        }
        else
        {
          if ( dword_B77DF4 == -2147221248 ) /*0x788f86*/
          {
            v24 = GetStringCSF(aTxtRequiredFie, 0, g_Str_File_wonline_cpp, 10946); /*0x788f8d*/
            goto LABEL_71; /*0x788f8d*/
          }
          v25 = GetStringCSF(g_Str_TXT_CANT_CONNECT, 0, g_Str_File_wonline_cpp, 10948); /*0x788fa3*/
          ShowDialogConfirm(v25, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x788fac*/
        }
      }
    }
  }
  v48 = (HWND)v50.q004; /*0x7894d8*/
  ShowWindow((HWND)v50.q004, 1); /*0x7894df*/
  ShowWindow(v48, 5); /*0x7894e4*/
  Dialog::InitWindow(v48, 0); /*0x7894e9*/
  CreateAccountWOL_Create_72C290(v49); /*0x7894ee*/
  return result; /*0x788c94*/

}
}
// 0x789500
namespace gamemd {
int WOL_FindChannel(const char * a1, int a2, unsigned char a3, int a4)
{
  int v5; // edi
  int v6; // esi
  int v7; // eax
  const char *v9; // [esp+20h] [ebp-Ch] BYREF
  int v10; // [esp+24h] [ebp-8h] BYREF
  int v11; // [esp+28h] [ebp-4h]

  v11 = a2; /*0x789507*/
  v5 = 1; /*0x78950d*/
  while ( 1 ) /*0x789522*/
  {
    v9 = 0; /*0x789522*/
    v10 = 0; /*0x789526*/
    if ( !(*(int (__stdcall **)(LPVOID, int, const char **, int *))(*(unsigned int *)ppv + 144))(ppv, v5, &v9, &v10) /*0x789549*/
      && v9
      && !strcmp(v9, a1) )
    {
      break; /*0x789549*/
    }
    if ( ++v5 > 32 ) /*0x789574*/
      goto LABEL_8; /*0x789574*/
  }
  v6 = v5; /*0x78957a*/
  if ( v5 ) /*0x78957c*/
  {
    LABEL_20:
    (*(void (__stdcall **)(LPVOID, int, const char *, int, unsigned int))(*(unsigned int *)ppv + 148))(ppv, v6, a1, v11, a3); /*0x7895f0*/
    (*(void (__stdcall **)(LPVOID, int, int))(*(unsigned int *)ppv + 200))(ppv, v6, a4); /*0x78961e*/
    return v6; /*0x78961e*/
  }
  LABEL_8:
  v6 = 1; /*0x78957e*/
  while ( 1 ) /*0x789591*/
  {
    v9 = 0; /*0x789591*/
    v10 = 0; /*0x789595*/
    if ( (*(int (__stdcall **)(LPVOID, int, const char **, int *))(*(unsigned int *)ppv + 144))(ppv, v6, &v9, &v10) /*0x7895b0*/
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
  v7 = dword_A8B544; /*0x7895c6*/
  if ( dword_A8B544 == -1 ) /*0x7895ce*/
    v7 = 1; /*0x7895d0*/
  v6 = v7; /*0x7895d5*/
  dword_A8B544 = v7 + 1; /*0x7895db*/
  if ( v7 + 1 > 32 ) /*0x7895e0*/
    dword_A8B544 = 1; /*0x7895e2*/
  if ( v7 ) /*0x7895ee*/
    goto LABEL_20; /*0x7895ee*/
  return v6; /*0x789626*/
}
}
// 0x7896A0
namespace gamemd {
int PopulateWOLUserList(HWND hWnd, char a2)
{

  LPARAM v4; // ebp
  ObjectClass *PlayerProfile; // eax
  int ptr_0; // eax
  int v8; // ecx
  char *v9; // esi
  int v10; // eax
  char *v11; // eax
  LRESULT v12; // esi
  char **v13; // eax
  WPARAM v14; // esi
  char **v15; // [esp-8h] [ebp-4Ch]
  char v17; // [esp+Fh] [ebp-35h]
  String v18; // [esp+10h] [ebp-34h] BYREF
  WPARAM wParam; // [esp+18h] [ebp-2Ch]
  String v20; // [esp+1Ch] [ebp-28h] BYREF
  void *v21; // [esp+24h] [ebp-20h] BYREF
  char *v22; // [esp+28h] [ebp-1Ch] BYREF
  char *v23[2]; // [esp+2Ch] [ebp-18h] BYREF
  void **v24; // [esp+34h] [ebp-10h] BYREF
  int v25; // [esp+38h] [ebp-Ch]
  __int64 v26; // [esp+3Ch] [ebp-8h] BYREF

  if ( a2 ) /*0x7896b0*/
    ListBox::Clear(hWnd); /*0x7896b2*/
  else
    ((ObjectClass *)(ObjectClass *)hWnd)->Memory_Pop(); /*0x7896b9*/
  v4 = 1; /*0x7896c3*/
  if ( g_WOL_UserList.ptr_0 == 1 ) /*0x7896ca*/
  {
    if ( a2 ) /*0x7896d5*/
      SendMessageA((HWND)hWnd, 0x4BCu, 0, (LPARAM)aGuiNoserversav); /*0x7896dc*/
    else
      SendMessageA((HWND)hWnd, 0x4C8u, 0, (LPARAM)aGuiNoserversav); /*0x7896e4*/
    EnableWindow((HWND)hWnd, 0); /*0x7896ed*/
    return 0; /*0x7896f3*/
  }
  else
  {
    unknown_libname_73(&v20); /*0x789701*/
    (v26) = ((v26) & 0xFFFFFFFF00000000ull) | ((0) & 0xFFFFFFFFull); /*0x78970a*/
    (v26) = ((v26) & ~(0xFFull << 32)) | (((0) & 0xFFull) << 32); /*0x789712*/
    ReadRegistryOptionsWOL((ObjectClass *)&v26); /*0x789717*/
    ComPtr::Constructor((ComPtr *)&v24); /*0x789720*/
    v24 = &g_ptr_7F3F44; /*0x78972e*/
    if ( (unsigned __int8)Flag::IsNot2((Flag *)&v26) ) /*0x789732*/
    {
      PlayerProfile = LoadPlayerProfile((ObjectClass *)v23, (const char **)&stru_B73E10.q030); /*0x789744*/
      ComPtr::Set((ComPtr *)&v24, PlayerProfile->ptr_4); /*0x789751*/
      v23[0] = (char *)&g_ptr_7F3F44; /*0x78975a*/
      ((ComPtr *)v23)->Release(); /*0x78975e*/
    }
    else
    {
      ComPtr::Set((ComPtr *)&v24, dword_B75E4C); /*0x789770*/
    }
    if ( v25 ) /*0x78977b*/
      String::Reassign(&v20, &v25->u32_C); /*0x789785*/
    EnableWindow((HWND)hWnd, 1); /*0x78978c*/
    ptr_0 = g_WOL_UserList.ptr_0; /*0x789792*/
    wParam = -1; /*0x78979f*/
    if ( g_WOL_UserList.ptr_0 <= 1 ) /*0x7897a7*/
      goto LABEL_30; /*0x7897a7*/
    v8 = 248; /*0x7897ad*/
    for ( *(unsigned int *)&v20.ptr_4 = 248; ; v8 = *(unsigned int *)&v20.ptr_4 ) /*0x7897b2*/
    {
      v9 = 0; /*0x7897bc*/
      if ( v8 >= 0 && v4 < ptr_0 ) /*0x7897c4*/
        v9 = (char *)dword_B778E0 + v8; /*0x7897cc*/
      Debug::Log(); /*0x7897d8*/
      ((String *)&v18)->Assign( v9 + 24); /*0x7897e5*/
      unknown_libname_73(&v21); /*0x7897ee*/
      v10 = String::Tokenize(&v18, 0, asc_8318B8, &v21); /*0x789803*/
      if ( v10 >= 0 ) /*0x78980a*/
        String::Erase(&v18, 0, v10 + 1); /*0x789814*/
      String::AssignFromPtr((String *)&v18.ptr_4, (const char **)&v18); /*0x789822*/
      DeleteAndZero((ObjectClass *)&v21); /*0x78982b*/
      DeleteAndZero((ObjectClass *)&v18); /*0x789834*/
      v11 = ((String *)(String *)&v18.ptr_4)->GetOrEmpty_Alt(); /*0x789845*/
      if ( a2 ) /*0x789843*/
      {
        v12 = SendMessageA((HWND)hWnd, 0x4BCu, 0, (LPARAM)v11); /*0x789855*/
        SendMessageA((HWND)hWnd, 0x151u, v12, v4); /*0x78985e*/
      }
      else
      {
        v12 = SendMessageA((HWND)hWnd, 0x4C8u, 0, (LPARAM)v11); /*0x789870*/
        SendMessageA((HWND)hWnd, 0x19Au, v12, v4); /*0x78987a*/
      }
      if ( ((String *)&v20)->Length() ) /*0x789880*/
      {
        v15 = String::ToLowerCopy((String *)&v18.ptr_4, v23); /*0x78989b*/
        v13 = String::ToLowerCopy(&v20, &v22); /*0x7898a1*/
        v17 = String::Compare((String *)v13, (const char **)v15); /*0x7898b1*/
        DeleteAndZero((ObjectClass *)&v22); /*0x7898b5*/
        DeleteAndZero((ObjectClass *)v23); /*0x7898be*/
        if ( v17 ) /*0x7898c9*/
        {
          wParam = v12; /*0x7898cb*/
          dword_B76468 = v4; /*0x7898cf*/
          dword_B779CC = v4; /*0x7898d5*/
        }
      }
      DeleteAndZero((ObjectClass *)&v18.ptr_4); /*0x7898df*/
      ptr_0 = g_WOL_UserList.ptr_0; /*0x7898e8*/
      ++v4; /*0x7898ed*/
      *(unsigned int *)&v20.ptr_4 += 248; /*0x7898f6*/
      if ( v4 >= g_WOL_UserList.ptr_0 ) /*0x7898fa*/
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
      SendMessageA((HWND)hWnd, 0x14Eu, v14, 0); /*0x789925*/
    }
    else
    {
      SendMessageA((HWND)hWnd, 0x186u, v14, 0); /*0x78992d*/
      SendMessageA((HWND)hWnd, 0x197u, v14, 0); /*0x789938*/
    }
    v24 = &g_ptr_7F3F44; /*0x78993e*/
    ((ComPtr *)&v24)->Release(); /*0x789946*/
    DeleteAndZero((ObjectClass *)&v20); /*0x78994f*/
    return 1; /*0x789954*/
  }

}
}
// 0x789960
namespace gamemd {
char ValidateJoinWOL(ObjectClass *aP0, int a2, int a3, int a4)
{

  char v4; // dl
  char result; // al
  int v7; // eax
  int v8; // esi
  wchar_t *v9; // eax
  wchar_t *v10; // eax
  int v11; // eax
  int v12; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v14; // ecx
  char v15; // bl
  wchar_t *v16; // [esp-4h] [ebp-28h] BYREF
  String v17; // [esp+Ch] [ebp-18h] BYREF
  OwnerDrawControl v18[3]; // [esp+14h] [ebp-10h] BYREF
  char *v19; // [esp+20h] [ebp-4h] BYREF

  result = ValidateGameJoinWOL(a2, 1, v4); /*0x78996b*/
  if ( result )
  {
    v7 = *(unsigned int *)(a2 + 32); /*0x78997b*/
    if ( (v7 & 0x400) != 0 )
      v8 = 800; /*0x789988*/
    else
      v8 = (v7 & 0x200) != 0 ? 640 : 1024;
    if ( MEMORY[0xA8EB00].ptr_0[33] > v8 )
    {
      v9 = (*(unsigned int *)(a2 + 32) & 0x400) != 0
         ? GetStringCSF((wchar_t *)aWolResolutionl, 0, g_Str_File_wonline_cpp, 11491)
         : GetStringCSF(aWolResolutionl_0, 0, g_Str_File_wonline_cpp, 11492);
      ((WideString *)(wchar_t **)&v17.ptr_4)->Assign( v9); /*0x7899e2*/
      v10 = WideString::GetOrEmpty((wchar_t **)&v17.ptr_4); /*0x7899f2*/
      if ( ShowDialogConfirm(v10, 4, (unsigned __int8 (*)(void))GameLoop::Thunk, 1) == 6 ) /*0x789a06*/
      {
        v11 = -(v8 != 800); /*0x789a16*/
        (v11) = ((v11) & ~0xFF) | ((v11 & 0x60) & 0xFF); /*0x789a18*/
        MEMORY[0xA8EB00].ptr_0[33] = v11 + 800; /*0x789a1f*/
        v12 = -(v11 != 0); /*0x789a2b*/
        (v12) = ((v12) & ~0xFF) | ((v12 & 0x88) & 0xFF); /*0x789a2d*/
        MEMORY[0xA8EB00].ptr_0[34] = v12 + 600; /*0x789a34*/
        ScenarioClass::SaveGameOptions((ScenarioClass *)&MEMORY[0xA8EB00].ptr_0[24]); /*0x789a39*/
      }
      ((DeleteAndZero *)&v17.ptr_4)->Alt(); /*0x789a42*/
      if ( MEMORY[0xA8EB00].ptr_0[33] > v8 ) /*0x789a4d*/
        return 0; /*0x789a57*/
    }
    unknown_libname_73(&v17); /*0x789a5c*/
    if ( (*(unsigned int *)(a2 + 28) & 0x100) != 0 ) /*0x789a67*/
    {
      Screen::Capture(1, 0, a3, a4); /*0x789a71*/
      SimpleDialogControl::Constructor((SimpleDialogControl *)v18); /*0x789a7a*/
      v18[0] = (OwnerDrawControl)&off_7F7624; /*0x789a88*/
      unknown_libname_73(&v19); /*0x789a8c*/
      v18[0] = (OwnerDrawControl)&g_ptr_7F7874; /*0x789aa5*/
      if ( RunDialog( /*0x789ab1*/
             0xE1u,
             (INT_PTR (*)(HWND, UINT, WPARAM, LPARAM))WOLGameClass::ParseChatMessage,
             (LPARAM)v18) == 2 )
      {
        v18[0] = (OwnerDrawControl)&g_ptr_7F7874; /*0x789ab7*/
        DeleteAndZero((ObjectClass *)&v19); /*0x789abb*/
        v18[0] = (OwnerDrawControl)&off_7F7624; /*0x789ac4*/
        OwnerDrawControl::InitVtable(v18); /*0x789ac8*/
        DeleteAndZero((ObjectClass *)&v17); /*0x789ad1*/
        return 0; /*0x789ade*/
      }
      String::Reassign(&v17, (const char **)&v19); /*0x789ae8*/
      String::Replace(&v17, asc_830A14, asc_818D7C); /*0x789afb*/
      v18[0] = (OwnerDrawControl)&g_ptr_7F7874; /*0x789b04*/
      DeleteAndZero((ObjectClass *)&v19); /*0x789b08*/
      v18[0] = (OwnerDrawControl)&off_7F7624; /*0x789b11*/
      OwnerDrawControl::InitVtable(v18); /*0x789b15*/
    }
    StringCSF = GetStringCSF(g_Str_TXT_JOINLOB, 0, g_Str_File_wonline_cpp, 11547); /*0x789b2b*/
    v16 = v14; /*0x789b30*/
    ((WideString *)&v16)->Assign( StringCSF); /*0x789b34*/
    v15 = LeaveChannelExWOL(a2, (char **)&v17, v16) == 0; /*0x789b4a*/
    DeleteAndZero((ObjectClass *)&v17); /*0x789b4d*/
    return v15; /*0x789b52*/
  }
  return result; /*0x789974*/

}
}
// 0x789B60
namespace gamemd {
char CreateGameWOL(int a2)
{

  int v2; // edi
  bool v3; // bl
  int v5; // eax
  wchar_t *StringCSF; // eax
  int i; // esi
  CreateGameDialogControl *v8; // ecx
  int v9; // eax
  int v10; // ebp
  wchar_t *v11; // eax
  ObjectClass *PlayerProfile; // eax
  int PlayerOption; // eax
  int PlayerColor; // eax
  int v15; // eax
  wchar_t *v16; // eax
  int v17; // eax
  wchar_t *v18; // eax
  HWND v19; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  wchar_t *v22; // eax
  HWND v23; // eax
  HWND v24; // eax
  wchar_t *v25; // eax
  HWND v26; // eax
  HWND v27; // eax
  HWND v28; // eax
  int v29; // eax
  char *v30; // ebx
  int v31; // esi
  int v32; // edi
  char *v33; // eax
  char *v34; // eax
  u_long v35; // edx
  unsigned __int8 *v36; // eax
  unsigned int *v37; // ebp
  int Flag_field_0x04; // eax
  int Flag_field_0x08; // ecx
  HWND v40; // eax
  HWND v41; // edi
  HWND Dialog; // esi
  String v43; // [esp+18h] [ebp-1ACh] BYREF
  DeleteAndZero v44; // [esp+20h] [ebp-1A4h] BYREF
  ComPtr v45; // [esp+2Ch] [ebp-198h] BYREF
  DeleteAndZero v46; // [esp+50h] [ebp-174h] BYREF
  Flag v47; // [esp+5Ch] [ebp-168h] BYREF
  unsigned int v48[67]; // [esp+70h] [ebp-154h] BYREF
  char Buffer[72]; // [esp+17Ch] [ebp-48h] BYREF

  unknown_libname_73(&v43); /*0x789b6a*/
  if ( *(int *)&stru_A8E960.random[16] >= 1024 ) /*0x789b79*/
    byte_A8B540 = 0; /*0x789b7b*/
  v43.tail_7 = byte_A8B540; /*0x789b9c*/
  v3 = g_MenuStateFlags == 1; /*0x789ba0*/
  CreateGameWOL_Create_7AC610((SimpleWonlineDialogControl *)&v45); /*0x789ba3*/
  LOWORD(v45.q010) = 0; /*0x789bb4*/
  BYTE2(v45.q010) = v43.tail_7; /*0x789bbe*/
  HIBYTE(v45.q010) = v3; /*0x789bc2*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7F788C) */  /*0x789bc6*/
  byte_B77DEC = 0; /*0x789bce*/
  if ( dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2 ) /*0x789bde*/
  {
    dword_B77DC4 = 2; /*0x789be0*/
  }
  else
  {
    Screen::Capture(1, 0, v3, 1); /*0x789bf0*/
    if ( RunDialog(0xC3u, (INT_PTR (*)(HWND, UINT, WPARAM, LPARAM))WOLLogin::DlgProc, (LPARAM)&v45) == 2 ) /*0x789c0c*/
    {
      /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7F7874) */  /*0x789c12*/
      DeleteAndZero((ObjectClass *)&v45.q00C); /*0x789c1a*/
      ConnectAndLoginWOL_Connect((SimpleWonlineDialogControl *)&v45); /*0x789c23*/
      DeleteAndZero((ObjectClass *)&v43); /*0x789c2c*/
      return 0; /*0x789c3d*/
    }
    String::Reassign(&v43, (const char **)&v45.q00C); /*0x789c47*/
    String::Replace(&v43, asc_830A14, asc_818D7C); /*0x789c5a*/
  }
  (*(void (**)(LPVOID, int, int))(*(unsigned int *)ppv + 36))(ppv, v2, a2); /*0x789c67*/
  memset(v48, 0, sizeof(v48)); /*0x789c7b*/
  sprintf((char *const)&v48[13], "%s's_game", (const char *)stru_B73E10.q030); /*0x789c8b*/
  v48[0] = 41; /*0x789c9b*/
  v48[1] = 1; /*0x789ca3*/
  if ( dword_B77DC4 < 2 ) /*0x789ca7*/
    dword_B77DC4 = 6; /*0x789ca9*/
  strcpy((char *)&v48[53] + 3, ((String *)(String *)&v44)->GetOrEmpty()); /*0x789cdb*/
  v48[2] = dword_B77DC4; /*0x789cf3*/
  memset(Buffer, 0, 0x50u); /*0x789cfc*/
  GameConfig::BuildChecksum(Buffer); /*0x789d05*/
  Buffer[40] = 0; /*0x789d15*/
  strcpy((char *)&v48[56], Buffer); /*0x789d33*/
  if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x789d49*/
  {
    if ( dword_A8B244 == 3 ) /*0x789d4e*/
    {
      v5 = v48[8]; /*0x789d50*/
      v48[5] = 1; /*0x789d57*/
      BYTE1(v5) = BYTE1(v48[8]) | 0x10; /*0x789d5b*/
      goto LABEL_22; /*0x789d5e*/
    }
  }
  else if ( dword_A8B244 == 3 ) /*0x789d63*/
  {
LABEL_29:
    v5 = v48[8]; /*0x789ec4*/
    v48[5] = 1; /*0x789ee7*/
    BYTE1(v5) = BYTE1(v48[8]) | 8; /*0x789eeb*/
    goto LABEL_22; /*0x789eee*/
  }
  if ( dword_A8B244 == 1 ) /*0x789d6b*/
    goto LABEL_29; /*0x789d6b*/
  if ( dword_A8B244 == 2 )
  {
    v5 = v48[8]; /*0x789ec9*/
    v48[5] = 0; /*0x789ed0*/
    BYTE1(v5) = BYTE1(v48[8]) | 8; /*0x789ed8*/
  }
  else
  {
    v5 = v48[8]; /*0x789d8a*/
    v48[5] = LOBYTE(v45.q018); /*0x789d91*/
    if ( BYTE1(v45.q018) ) /*0x789d95*/
      BYTE1(v5) = BYTE1(v48[8]) | 1; /*0x789d97*/
    byte_A8B540 = BYTE2(v45.q018); /*0x789da0*/
    if ( BYTE2(v45.q018) )
      v5 |= *(unsigned int *)&stru_A8E960.random[16] != 800 ? 512 : 1024;
  }
LABEL_22:
  v48[8] = dword_B77DD4 + v5; /*0x789dc6*/
  if ( dword_B77DD0 ) /*0x789dda*/
  {
    Debug::Log(); /*0x789df0*/
    (*(void (**)(LPVOID))(*(unsigned int *)ppv + 36))(ppv); /*0x789e00*/
    StringCSF = GetStringCSF(g_Str_WOL_LeavingChannel, 0, g_Str_File_wonline_cpp, 10704); /*0x789e14*/
    ((WideString *)&v46.q004)->Assign( StringCSF); /*0x789e1e*/
    ShowUIMessage(192, (wchar_t **)&v46.q004, 0); /*0x789e2e*/
    ((DeleteAndZero *)&v46.q004)->Alt(); /*0x789e37*/
    for ( i = 0; dword_B77DD0; ++i ) /*0x789e45*/
    {
      if ( i >= 150 ) /*0x789e53*/
        break; /*0x789e53*/
      Sleep(0x64u); /*0x789e57*/
      Game::ProcessIdle(v8); /*0x789e59*/
    }
    CreateGameWOL_Create(64); /*0x789e6d*/
  }
  dword_A8B23C = (ObjectClass *)MultiplayerGameMode::GetFirst(); /*0x789e77*/
  *(unsigned int *)stru_A8B250.__pad_0 = dword_A8B23C->owningHouseIndex; /*0x789e7f*/
  (*(void (**)(ObjectClass *))(dword_A8B23C->ptr_0 + 32))(dword_A8B23C); /*0x789e89*/
  LoadScenarioClassByIndex(0); /*0x789e8e*/
  PtrVector::Destroy((PtrVector *)&stru_A8D804.__pad_3D[563]); /*0x789e98*/
  Game::ResetFlags(); /*0x789e9d*/
  Network::InitPlayerSlots(); /*0x789ea2*/
  v9 = __2_YAPAXI_Z(0x85u); /*0x789eac*/
  v10 = v9; /*0x789eb1*/
  if ( v9 ) /*0x789eb8*/
    Waypoint::InitInvalid((Waypoint *)(v9 + 40)); /*0x789ebd*/
  else
    v10 = 0; /*0x789ef3*/
  memset((void *)v10, 0, 0x84u); /*0x789f03*/
  *(unsigned char *)(v10 + 132) = 0; /*0x789f09*/
  CharStringToWide((wchar_t **)&v44.u32_8, (const char **)&stru_B73E10.q030); /*0x789f0a*/
  v11 = WideString::GetOrEmpty((WideString *)&v44.u32_8); /*0x789f13*/
  wcscpy((wchar_t *)v10, v11); /*0x789f1a*/
  *(unsigned int *)v47.__pad_0 = 0; /*0x789f28*/
  LOBYTE(v47.q004) = 0; /*0x789f2c*/
  ReadRegistryOptionsWOL((ObjectClass *)&v47); /*0x789f31*/
  ComPtr::Constructor(&v45); /*0x789f3a*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7F3F44) */  /*0x789f48*/
  if ( (unsigned __int8)Flag::IsNot2(&v47) ) /*0x789f4c*/
  {
    PlayerProfile = LoadPlayerProfile( /*0x789f5e*/
                      (ObjectClass *)&v45.q020,
                      (const char **)&stru_B73E10.q030);
    ComPtr::Set(&v45, PlayerProfile->ptr_4); /*0x789f6b*/
    /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7F3F44) */  /*0x789f74*/
    ((ComPtr *)&v45.q020)->Release(); /*0x789f78*/
  }
  else
  {
    ComPtr::Set(&v45, dword_B75E4C); /*0x789f8a*/
  }
  if ( v45.q004 ) /*0x789f95*/
  {
    SessionClass::AssignSide((SessionClass *)&dword_A8B238, *(unsigned int *)(v45.q004 + 28), 0); /*0x789fa1*/
    SessionClass::AssignColor((SessionClass *)&dword_A8B238, *(unsigned int *)(v45.q004 + 32), 0); /*0x789fb4*/
  }
  dword_A8B39C = -1; /*0x789fbe*/
  dword_A8B3A0 = -2; /*0x789fc4*/
  PlayerOption = Session::GetPlayerOption((Session *)&dword_A8B238); /*0x789fce*/
  SessionClass::SetPlayerOption((int *)v10, PlayerOption); /*0x789fd6*/
  PlayerColor = Session::GetPlayerColor((Session *)&dword_A8B238); /*0x789fe0*/
  SessionClass::SetPlayerColor((int *)v10, PlayerColor); /*0x789fe8*/
  SessionClass::SetOption((int *)v10, -2); /*0x789ff1*/
  SessionClass::SetOption2((int *)v10, -2); /*0x789ffa*/
  *(unsigned int *)(v10 + 119) = 1; /*0x789fff*/
  *(unsigned int *)(v10 + 107) = 0; /*0x78a006*/
  g_MPCooperativeState = (ObjectClass *)7; /*0x78a015*/
  g_MenuStateFlags = HIBYTE(v45.q018); /*0x78a01f*/
  Dialog::RefreshDialogsGame(0); /*0x78a025*/
  if ( g_MenuStateFlags ) /*0x78a030*/
  {
    g_MPCooperativeState = 0; /*0x78a032*/
    *(unsigned int *)(v10 + 107) = -1; /*0x78a03c*/
    SessionClass::SetPlayerOption((int *)v10, -3); /*0x78a03f*/
  }
  if ( *(int *)&stru_A8D804.__pad_3D[579] < *(int *)&stru_A8D804.__pad_3D[571] /*0x78a079*/
    || (stru_A8D804.__pad_3D[576] || !*(unsigned int *)&stru_A8D804.__pad_3D[571])
    && *(int *)&stru_A8D804.__pad_3D[583] > 0
    && (*(unsigned __int8 (**)(char *, int, unsigned int))(*(unsigned int *)&stru_A8D804.__pad_3D[563] + 8))(
         &stru_A8D804.__pad_3D[563],
         *(unsigned int *)&stru_A8D804.__pad_3D[571] + *(unsigned int *)&stru_A8D804.__pad_3D[583],
         0) )
  {
    v15 = (*(unsigned int *)&stru_A8D804.__pad_3D[579])++; /*0x78a086*/
    *(unsigned int *)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4 * v15) = v10; /*0x78a095*/
  }
  NetworkShare::GetField(0); /*0x78a09a*/
  v16 = WideString::GetOrEmpty((WideString *)&v44.u32_8); /*0x78a0a3*/
  wcscpy((wchar_t *)&stru_A8D610, v16); /*0x78a0ae*/
  v17 = (*(int (__cdecl **)(LPVOID, unsigned int *))(*(unsigned int *)ppv + 28))(ppv, v48); /*0x78a0c3*/
  if ( v17 == -2147221000 ) /*0x78a0cb*/
  {
    v18 = GetStringCSF(aTxtBadChankey, 0, g_Str_File_wonline_cpp, 11789); /*0x78a0e4*/
    ShowDialogConfirm(v18, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x78a0ed*/
    v19 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x78a0f7*/
    if ( v19 ) /*0x78a0fe*/
    {
      dword_B77DC8 &= ~0x80u; /*0x78a10c*/
      if ( !dword_B77DC8 ) /*0x78a112*/
        CloseDialog(v19, 0); /*0x78a118*/
    }
    Current = (HWND)Dialog::GetCurrent(); /*0x78a11d*/
    DlgItem = GetDlgItem(Current, 1344); /*0x78a128*/
    if ( !DlgItem ) /*0x78a130*/
      goto LABEL_72; /*0x78a130*/
    goto LABEL_50; /*0x78a130*/
  }
  if ( v17 ) /*0x78a144*/
  {
    v22 = GetStringCSF(aTxtCantcreateC, 0, g_Str_File_wonline_cpp, 11795); /*0x78a15d*/
    ShowDialogConfirm(v22, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x78a166*/
    v23 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x78a170*/
    if ( v23 ) /*0x78a177*/
    {
      dword_B77DC8 &= ~0x80u; /*0x78a185*/
      if ( !dword_B77DC8 ) /*0x78a18b*/
        CloseDialog(v23, 0); /*0x78a191*/
    }
    v24 = (HWND)Dialog::GetCurrent(); /*0x78a196*/
    DlgItem = GetDlgItem(v24, 1344); /*0x78a1a1*/
    if ( !DlgItem ) /*0x78a1a9*/
      goto LABEL_72; /*0x78a1a9*/
LABEL_50:
    SetFocus(DlgItem); /*0x78a136*/
LABEL_72:
    /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7F3F44) */  /*0x78a29d*/
    ((ComPtr *)&v44.q004)->Release(); /*0x78a2a5*/
    ((DeleteAndZero *)&v44)->Alt(); /*0x78a2ae*/
    /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7F7874) */  /*0x78a2b7*/
    DeleteAndZero((ObjectClass *)&v45.q00C); /*0x78a2bf*/
    *(unsigned int *)v45.__pad_0 = &off_7F7624; /*0x78a2c8*/
    OwnerDrawControl::InitVtable((OwnerDrawControl *)&v45); /*0x78a2d0*/
    DeleteAndZero((ObjectClass *)&v43); /*0x78a2d9*/
    return 0; /*0x78a2ea*/
  }
  v25 = GetStringCSF(aGuiCreatingcha, 0, g_Str_File_wonline_cpp, 11803); /*0x78a1cc*/
  ((WideString *)&v46)->Assign( v25); /*0x78a1d6*/
  ShowUIMessage(4, (wchar_t **)&v46, 0); /*0x78a1e5*/
  v26 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x78a1ef*/
  if ( v26 ) /*0x78a1f6*/
  {
    dword_B77DC8 &= ~0x80u; /*0x78a204*/
    if ( !dword_B77DC8 ) /*0x78a20a*/
      CloseDialog(v26, 0); /*0x78a210*/
  }
  v27 = (HWND)Dialog::GetCurrent(); /*0x78a215*/
  v28 = GetDlgItem(v27, 1344); /*0x78a220*/
  if ( v28 ) /*0x78a228*/
    SetFocus(v28); /*0x78a22b*/
  ShowUIMessage(4, (wchar_t **)&v46, 1); /*0x78a23c*/
  v29 = *(unsigned int *)&stru_B778FC.m_3[1]; /*0x78a241*/
  v30 = 0; /*0x78a246*/
  v31 = 0; /*0x78a248*/
  if ( *(int *)&stru_B778FC.m_3[1] <= 0 ) /*0x78a24c*/
    goto LABEL_71; /*0x78a24c*/
  v32 = 0; /*0x78a24e*/
  while ( 1 ) /*0x78a250*/
  {
    if ( v32 >= 0 && v31 < v29 ) /*0x78a256*/
      v30 = (char *)dword_B77908 + v32; /*0x78a25e*/
    v33 = ((String *)(String *)&stru_B73E10.q030)->GetOrEmpty_Alt(); /*0x78a26a*/
    if ( !_strcmpi(v33, v30 + 36) ) /*0x78a270*/
      break; /*0x78a270*/
    v29 = *(unsigned int *)&stru_B778FC.m_3[1]; /*0x78a27c*/
    ++v31; /*0x78a281*/
    v32 += 108; /*0x78a282*/
    if ( v31 >= *(int *)&stru_B778FC.m_3[1] ) /*0x78a287*/
      goto LABEL_71; /*0x78a287*/
  }
  if ( v31 < 0 ) /*0x78a28d*/
  {
LABEL_71:
    ((DeleteAndZero *)&v46)->Alt(); /*0x78a294*/
    goto LABEL_72; /*0x78a298*/
  }
  v34 = 0; /*0x78a2f1*/
  if ( v31 < *(int *)&stru_B778FC.m_3[1] ) /*0x78a2f5*/
    v34 = (char *)dword_B77908 + 108 * v31; /*0x78a303*/
  v35 = *((unsigned int *)v34 + 6); /*0x78a306*/
  v45.q018 = 0; /*0x78a30b*/
  v45.q020 = 0; /*0x78a310*/
  LOWORD(v45.q01C) = 0; /*0x78a318*/
  v36 = (unsigned __int8 *)ntohl(v35); /*0x78a31d*/
  HIBYTE(v45.q018) = (unsigned char)v36; /*0x78a326*/
  LOBYTE(v45.q018) = HIBYTE(v36); /*0x78a332*/
  BYTE2(v45.q018) = BYTE1(v36); /*0x78a336*/
  BYTE1(v45.q018) = BYTE2(v36); /*0x78a34b*/
  NetworkAddress::Assign((NetworkAddress *)&v47, &v45.q020, (int)&v45.q018, 0); /*0x78a34f*/
  v37 = (unsigned int *)(v10 + 40); /*0x78a354*/
  Flag_field_0x04 = v47.q004; /*0x78a35b*/
  Flag_field_0x08 = v47.q008; /*0x78a35f*/
  *v37 = *(unsigned int *)v47.__pad_0; /*0x78a363*/
  v37[1] = Flag_field_0x04; /*0x78a366*/
  v37[2] = Flag_field_0x08; /*0x78a369*/
  if ( dword_A8B244 != 3 && dword_A8B244 != 1 && dword_A8B244 != 2 ) /*0x78a386*/
  {
    v40 = (HWND)Dialog::GetCurrent(); /*0x78a38c*/
    v41 = v40; /*0x78a391*/
    if ( v40 ) /*0x78a395*/
    {
      RenderGadgetClassAnimation(v40, 0); /*0x78a39b*/
      Screen::Capture(1, 0, (unsigned __int8)v30, (int)v37); /*0x78a3a4*/
    }
    Screen::Capture(1, 0, (unsigned __int8)v30, (int)v37); /*0x78a3ad*/
    LoadingScreen::Init(); /*0x78a3b2*/
    Dialog = (HWND)CreateDialog(0xC2u, (INT_PTR (*)(HWND, UINT, WPARAM, LPARAM))WOLobby::SetupDlgProc, 0); /*0x78a3ce*/
    (*(void (**)(ObjectClass *))(dword_A8B23C->ptr_0 + 156))(dword_A8B23C); /*0x78a3d2*/
    (*(void (**)(ObjectClass *))(dword_A8B23C->ptr_0 + 32))(dword_A8B23C); /*0x78a3e0*/
    (*(void (**)(ObjectClass *))(dword_A8B23C->ptr_0 + 24))(dword_A8B23C); /*0x78a3eb*/
    (*(void (**)(ObjectClass *))(dword_A8B23C->ptr_0 + 124))(dword_A8B23C); /*0x78a3f6*/
    ShowWindow(Dialog, 1); /*0x78a402*/
    if ( v41 ) /*0x78a406*/
      ShowWindow(v41, 0); /*0x78a40b*/
  }
  ((DeleteAndZero *)&v46)->Alt(); /*0x78a411*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7F3F44) */  /*0x78a41a*/
  ((ComPtr *)&v44.q004)->Release(); /*0x78a422*/
  ((DeleteAndZero *)&v44)->Alt(); /*0x78a42b*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7F7874) */  /*0x78a434*/
  DeleteAndZero((ObjectClass *)&v45.q00C); /*0x78a43c*/
  *(unsigned int *)v45.__pad_0 = &off_7F7624; /*0x78a445*/
  OwnerDrawControl::InitVtable((OwnerDrawControl *)&v45); /*0x78a44d*/
  DeleteAndZero((ObjectClass *)&v43); /*0x78a456*/
  return 1; /*0x789c37*/

}
}
// 0x78D120
namespace gamemd {
int OnlineLobbyDlgProcWOL(HWND hDlg, unsigned int a2, int a3, HWND hWnd)
{

  int result; // eax
  HWND v5; // eax
  BOOL v6; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  BOOL v10; // eax
  HWND v11; // eax
  HWND v12; // eax
  HWND v13; // eax
  HWND v14; // eax
  HWND v15; // esi
  HWND v16; // eax
  HWND v17; // eax
  int v18; // esi
  char *v19; // eax
  int v20; // esi
  wchar_t *v21; // eax
  wchar_t *v22; // eax
  wchar_t *v23; // eax
  wchar_t *String_buf; // eax
  HWND v25; // esi
  int v26; // esi
  wchar_t *v27; // eax
  wchar_t *v28; // eax
  HWND v29; // eax
  HWND v30; // eax
  int v31; // ebx
  signed int v32; // eax
  HWND v33; // eax
  HWND v34; // eax
  HWND v35; // eax
  HWND DlgItem; // eax
  BOOL v37; // [esp-4h] [ebp-10Ch]
  BOOL v38; // [esp-4h] [ebp-10Ch]
  void *v39; // [esp+10h] [ebp-F8h] BYREF
  void *v40; // [esp+14h] [ebp-F4h] BYREF
  char lParam[9]; // [esp+18h] [ebp-F0h] BYREF
  char v42; // [esp+21h] [ebp-E7h]
  int v43; // [esp+28h] [ebp-E0h]
  LPARAM v44[27]; // [esp+30h] [ebp-D8h] BYREF
  char v45[108]; // [esp+9Ch] [ebp-6Ch] BYREF

  result = BaseDialogProc(hDlg, a2, a3, (unsigned int)hWnd); /*0x78d14c*/
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
    if ( ppv ) /*0x78d963*/
    {
      SendMessageA(hWnd, 0x4B5u, 0xAu, (LPARAM)lParam); /*0x78d972*/
      v42 = 0; /*0x78d986*/
      memset(v45, 0, sizeof(v45)); /*0x78d98b*/
      strcpy(&v45[36], lParam); /*0x78d9b1*/
      (*(void (**)(LPVOID, char *))(*(unsigned int *)ppv + 96))(ppv, v45); /*0x78d9c3*/
    }
    v35 = GetDlgItem(hDlg, 1480); /*0x78d9cc*/
    if ( v35 ) /*0x78d9d0*/
      SendMessageA(v35, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x78d9df*/
    dword_B77E8C = 1344; /*0x78d9e8*/
    return 0; /*0x78d9fb*/
  }
  switch ( a2 ) /*0x78d165*/
  {
    case 0x497u: /*0x78d165*/
      SendDlgItemMessageA(hDlg, 1473, 0xC5u, 9u, 0); /*0x78d864*/
      v29 = GetDlgItem(hDlg, 1473); /*0x78d876*/
      SendMessageA(v29, 0x4D1u, 1u, 0); /*0x78d888*/
      v30 = GetDlgItem(hDlg, 1473); /*0x78d890*/
      SendMessageA(v30, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x78d89f*/
      v31 = dword_B76480; /*0x78d8a6*/
      if ( dword_B76478 != -1 ) /*0x78d8af*/
      {
        v32 = Timer::GetTicks() - dword_B76478; /*0x78d8bb*/
        if ( v32 >= v31 ) /*0x78d8c3*/
          return 0; /*0x78d8c3*/
        v31 -= v32; /*0x78d8c9*/
      }
      if ( v31 > 0 ) /*0x78d8cd*/
      {
        v33 = GetDlgItem(hDlg, 1473); /*0x78d8d9*/
        SendMessageA(v33, 0x4B4u, 0, (LPARAM)byte_B77E30); /*0x78d8e8*/
        v34 = GetDlgItem(hDlg, 1344); /*0x78d8f0*/
        SetFocus(v34); /*0x78d8f3*/
        dword_B76478 = Timer::GetTicks(); /*0x78d902*/
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
      if ( !ppv ) /*0x78d773*/
        return 0; /*0x78d773*/
      memset(v44, 0, 0x40u); /*0x78d784*/
      SendDlgItemMessageA(hDlg, 1473, 0x4B5u, 0x3Cu, (LPARAM)v44); /*0x78d798*/
      BYTE1(v44[2]) = 0; /*0x78d7a7*/
      strcpy(&v45[36], (const char *)v44); /*0x78d7c2*/
      if ( strlen(&v45[36]) ) /*0x78d7d4*/
      {
        (*(void (**)(LPVOID, char *))(*(unsigned int *)ppv + 96))(ppv, v45); /*0x78d7ee*/
        return 0; /*0x78d7fd*/
      }
      String_buf = GetStringCSF((wchar_t *)g_Str_TXT_NAME_ERROR, 0, g_Str_File_wonline_cpp, 14080); /*0x78d811*/
    }
    else
    {
      if ( (unsigned __int16)a3 != 1543 || !ppv ) /*0x78d644*/
        return 0; /*0x78d644*/
      if ( dword_B77DE4 ) /*0x78d651*/
      {
        unknown_libname_74(&v39); /*0x78d687*/
        v25 = GetDlgItem(hDlg, 1344); /*0x78d698*/
        GetEditControlText(v25, &v39); /*0x78d6a0*/
        SendMessageA(v25, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x78d6b2*/
        SetFocus(v25); /*0x78d6b9*/
        strcpy(&v45[36], a0); /*0x78d6df*/
        if ( WideString::Length((const wchar_t **)&v39) ) /*0x78d6ec*/
        {
          v26 = *(unsigned int *)ppv; /*0x78d6fb*/
          v27 = WideString::GetOrEmpty((wchar_t **)&v39); /*0x78d701*/
          (*(void (**)(LPVOID, char *, wchar_t *))(v26 + 248))(ppv, v45, v27); /*0x78d715*/
        }
        else
        {
          v28 = GetStringCSF(g_Str_TXT_ENTER_MESSAGE, 0, g_Str_File_wonline_cpp, 14195); /*0x78d744*/
          Dialog::ShowStatusText(-1, (size_t)v28); /*0x78d74c*/
        }
        ((DeleteAndZero *)&v39)->Alt(); /*0x78d71f*/
        return 0; /*0x78d730*/
      }
      String_buf = GetStringCSF(aTxtNosquad, 0, g_Str_File_wonline_cpp, 14176); /*0x78d664*/
    }
    Dialog::ShowStatusText(-1, (size_t)String_buf); /*0x78d66c*/
    return 0; /*0x78d680*/
  }
  if ( (unsigned __int16)a3 == 1474 ) /*0x78d19b*/
  {
    if ( dword_B77E8C == 1473 ) /*0x78d3aa*/
    {
      if ( ppv ) /*0x78d3b7*/
      {
        v13 = GetDlgItem(hDlg, 1473); /*0x78d3bf*/
        if ( v13 ) /*0x78d3c3*/
        {
          SendMessageA(v13, 0x4B5u, 0xAu, (LPARAM)lParam); /*0x78d3d2*/
          v42 = 0; /*0x78d3e6*/
          memset(v45, 0, sizeof(v45)); /*0x78d3eb*/
          strcpy(&v45[36], lParam); /*0x78d411*/
          (*(void (**)(LPVOID, char *))(*(unsigned int *)ppv + 96))(ppv, v45); /*0x78d423*/
        }
      }
      v14 = GetDlgItem(hDlg, 1480); /*0x78d42c*/
      if ( v14 ) /*0x78d430*/
        SendMessageA(v14, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x78d43f*/
    }
    dword_B77E8C = 1474; /*0x78d44b*/
    v15 = GetDlgItem(hDlg, 1344); /*0x78d457*/
    ReadChatMessage((wchar_t **)&v40, v15); /*0x78d45f*/
    SendMessageA(v15, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x78d471*/
    v16 = GetDlgItem(hDlg, 1474); /*0x78d47f*/
    EnableWindow(v16, 0); /*0x78d482*/
    SetFocus(v15); /*0x78d489*/
    if ( !ppv ) /*0x78d496*/
    {
      ((DeleteAndZero *)&v40)->Alt(); /*0x78d49c*/
      return 0; /*0x78d4ad*/
    }
    unknown_libname_73(&v39); /*0x78d4b4*/
    v17 = GetDlgItem(hDlg, 1473); /*0x78d4c3*/
    GetDialogText(v17, &v39); /*0x78d4c9*/
    String::CopyTruncated(9u); /*0x78d4d4*/
    strcpy((char *)&v44[9], ((String *)(char **)&v39)->GetOrEmpty()); /*0x78d4fc*/
    if ( WideString::Length((const wchar_t **)&v40) && strlen((const char *)&v44[9]) ) /*0x78d51a*/
    {
      if ( !dword_A8B538 || (v18 = 0, MEMORY[0xA8DA84] <= 0) ) /*0x78d53c*/
      {
LABEL_44:
        v20 = *(unsigned int *)ppv; /*0x78d568*/
        v21 = WideString::GetOrEmpty((wchar_t **)&v40); /*0x78d573*/
        (*(void (**)(LPVOID, LPARAM *, wchar_t *))(v20 + 248))(ppv, v44, v21); /*0x78d585*/
        v22 = WideString::GetOrEmpty((wchar_t **)&v40); /*0x78d58f*/
        Dialog::ShowStatusText((LPARAM)Math::InitDegToRad, (size_t)g_Str_Fmt_Hs_S_Bracket, MEMORY[0xB73E40], v22); /*0x78d5a7*/
LABEL_50:
        DeleteAndZero(&v39); /*0x78d608*/
        ((DeleteAndZero *)&v40)->Alt(); /*0x78d615*/
        return 0; /*0x78d626*/
      }
      while ( 1 ) /*0x78d54c*/
      {
        v19 = ToWideStringChar(*(char **)(MEMORY[0xA8DA78] + 4 * v18)); /*0x78d54c*/
        if ( !_strcmpi(v19, &v44[9]) ) /*0x78d552*/
          break; /*0x78d552*/
        if ( ++v18 >= MEMORY[0xA8DA84] ) /*0x78d566*/
          goto LABEL_44; /*0x78d566*/
      }
      v23 = GetStringCSF(g_Str_TXT_OBSERVER_CANT_PAGE, 0, g_Str_File_wonline_cpp, 14150); /*0x78d5c2*/
    }
    else if ( strlen((const char *)&v44[9]) ) /*0x78d5c8*/
    {
      v23 = GetStringCSF(g_Str_TXT_ENTER_MESSAGE, 0, g_Str_File_wonline_cpp, 14164); /*0x78d5f8*/
    }
    else
    {
      v23 = GetStringCSF((wchar_t *)g_Str_TXT_NAME_ERROR, 0, g_Str_File_wonline_cpp, 14162); /*0x78d5e5*/
    }
    Dialog::ShowStatusText(-1, (size_t)v23); /*0x78d600*/
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
      GetDialogText(hWnd, &v40); /*0x78d1cf*/
      unknown_libname_74(&v39); /*0x78d1d8*/
      v5 = GetDlgItem(hDlg, 1344); /*0x78d1ed*/
      GetEditControlText(v5, &v39); /*0x78d1f3*/
      v6 = ((String *)(const char **)&v40)->Length() && WideString::Length((const wchar_t **)&v39); /*0x78d212*/
      v37 = v6; /*0x78d21b*/
      v7 = GetDlgItem(hDlg, 1474); /*0x78d222*/
      EnableWindow(v7, v37); /*0x78d225*/
      dword_B77E8C = 1473; /*0x78d231*/
      v8 = GetDlgItem(hDlg, 1480); /*0x78d23b*/
      if ( v8 ) /*0x78d23f*/
        SendMessageA(v8, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x78d24e*/
      ((DeleteAndZero *)&v39)->Alt(); /*0x78d258*/
      DeleteAndZero(&v40); /*0x78d261*/
      return 0; /*0x78d272*/
    }
    return 0; /*0x78da1a*/
  }
  ReadChatMessage((wchar_t **)&v39, hWnd); /*0x78d27b*/
  unknown_libname_73(&v40); /*0x78d284*/
  v9 = GetDlgItem(hDlg, 1473); /*0x78d299*/
  GetDialogText(v9, &v40); /*0x78d29f*/
  v10 = WideString::Length((const wchar_t **)&v39) && ((String *)(const char **)&v40)->Length(); /*0x78d2be*/
  v38 = v10; /*0x78d2c7*/
  v11 = GetDlgItem(hDlg, 1474); /*0x78d2ce*/
  EnableWindow(v11, v38); /*0x78d2d1*/
  if ( dword_B77E8C == 1473 ) /*0x78d2e1*/
  {
    if ( ppv ) /*0x78d2ea*/
    {
      memset(v44, 0, sizeof(v44)); /*0x78d2f7*/
      strcpy((char *)&v44[9], ((String *)(char **)&v40)->GetOrEmpty()); /*0x78d320*/
      (*(void (**)(LPVOID, LPARAM *))(*(unsigned int *)ppv + 96))(ppv, v44); /*0x78d332*/
    }
    v12 = GetDlgItem(hDlg, 1480); /*0x78d33b*/
    if ( v12 ) /*0x78d33f*/
      SendMessageA(v12, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x78d34e*/
  }
  dword_B77E8C = 1344; /*0x78d358*/
  DeleteAndZero(&v40); /*0x78d362*/
  ((DeleteAndZero *)&v39)->Alt(); /*0x78d36b*/
  return 0; /*0x78d266*/

}
}
// 0x78DA30
namespace gamemd {
int sub_78DA30(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{

  int result; // eax
  wchar_t *v5; // eax

  if ( a2 == 272 ) /*0x78da46*/
  {
    if ( a4 ) /*0x78da4a*/
      SetWindowLongA(hWnd, 8, *(unsigned int *)(a4 + 4)); /*0x78da53*/
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
          (*(void (**)(LPVOID))(*(unsigned int *)dword_AC1174 + 16))(dword_AC1174); /*0x78db47*/
          break;
        case 0x5F4u: /*0x78daca*/
          CloseDialog(hWnd, 1); /*0x78db1a*/
          return 1; /*0x78db28*/
        case 0x5F5u: /*0x78daca*/
          v5 = (wchar_t *)GetStringCSF(aTxtDownloadFai, (int)g_Str_File_wonline_cpp, 14681); /*0x78daf8*/
          ShowDialogConfirm(v5, 0, (int)GameLoop::Thunk, 0); /*0x78db01*/
          (*(void (**)(LPVOID))(*(unsigned int *)dword_AC1174 + 16))(dword_AC1174); /*0x78db0e*/
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
}
// 0x78E230
namespace gamemd {
int sub_78E230(HWND hWnd, UINT, WPARAM, HWND hCtl)
{
  wchar_t *String_buf; // eax

  if ( a2 > 0x111 ) /*0x78e23b*/
  {
    if ( a2 == 1175 ) /*0x78e6fd*/
    {
      HWND DlgItem; // eax
      DlgItem = GetDlgItem(hWnd, 1574); /*0x78e735*/
      SendMessageA(DlgItem, 0x4D1u, 1u, 0); /*0x78e747*/
      HWND v37; // eax
      v37 = GetDlgItem(hWnd, 1583); /*0x78e758*/
      SendMessageA(v37, 0xC5u, 2u, 0); /*0x78e75b*/
      HWND v38; // eax
      v38 = GetDlgItem(hWnd, 1584); /*0x78e76c*/
      SendMessageA(v38, 0xC5u, 4u, 0); /*0x78e76f*/
      HWND v39; // eax
      v39 = GetDlgItem(hWnd, 1583); /*0x78e777*/
      SetFocus(v39); /*0x78e77a*/
      HWND v40; // edi
      v40 = GetDlgItem(hWnd, 1582); /*0x78e788*/
      ListBox::Clear(v40); /*0x78e78c*/
      String_buf = GetStringCSF(g_Str_TXT_JANUARY, 0, g_Str_File_wonline_cpp, 15162); /*0x78e7a2*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)String_buf); /*0x78e7b0*/
      wchar_t *v42; // eax
      v42 = GetStringCSF(g_Str_TXT_FEBRUARY, 0, g_Str_File_wonline_cpp, 15163); /*0x78e7c3*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v42); /*0x78e7d1*/
      wchar_t *v43; // eax
      v43 = GetStringCSF(g_Str_TXT_MARCH, 0, g_Str_File_wonline_cpp, 15164); /*0x78e7e4*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v43); /*0x78e7f2*/
      wchar_t *v44; // eax
      v44 = GetStringCSF(g_Str_TXT_APRIL, 0, g_Str_File_wonline_cpp, 15165); /*0x78e805*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v44); /*0x78e813*/
      wchar_t *v45; // eax
      v45 = GetStringCSF(g_Str_TXT_MAY, 0, g_Str_File_wonline_cpp, 15166); /*0x78e826*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v45); /*0x78e834*/
      wchar_t *v46; // eax
      v46 = GetStringCSF(g_Str_TXT_JUNE, 0, g_Str_File_wonline_cpp, 15167); /*0x78e847*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v46); /*0x78e855*/
      wchar_t *v47; // eax
      v47 = GetStringCSF(g_Str_TXT_JULY, 0, g_Str_File_wonline_cpp, 15168); /*0x78e868*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v47); /*0x78e876*/
      wchar_t *v48; // eax
      v48 = GetStringCSF(g_Str_TXT_AUGUST, 0, g_Str_File_wonline_cpp, 15169); /*0x78e889*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v48); /*0x78e897*/
      wchar_t *v49; // eax
      v49 = GetStringCSF(g_Str_TXT_SEPTEMBER, 0, g_Str_File_wonline_cpp, 15170); /*0x78e8aa*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v49); /*0x78e8b8*/
      wchar_t *v50; // eax
      v50 = GetStringCSF(g_Str_TXT_OCTOBER, 0, g_Str_File_wonline_cpp, 15171); /*0x78e8cb*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v50); /*0x78e8d9*/
      wchar_t *v51; // eax
      v51 = GetStringCSF(g_Str_TXT_NOVEMBER, 0, g_Str_File_wonline_cpp, 15172); /*0x78e8ec*/
      SendMessageA(v40, 0x4C2u, 0, (LPARAM)v51); /*0x78e8fa*/
      wchar_t *v52; // eax
      v52 = GetStringCSF(g_Str_TXT_DECEMBER, 0, g_Str_File_wonline_cpp, 15173); /*0x78e90d*/
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
    if ( (uint16_t)a3 == 1 ) /*0x78e290*/
    {
      ((DeleteAndZero *)(void **)&unk_B76E34)->Alt2(); /*0x78e2d0*/
      HWND v5; // eax
      v5 = GetDlgItem(hWnd, 1574); /*0x78e2e5*/
      if ( v5 ) /*0x78e2e9*/
        GetDialogText(v5, (void **)&unk_B76E34); /*0x78e2f2*/
      ((DeleteAndZero *)(void **)&unk_B73B30)->Alt2(); /*0x78e2fc*/
      HWND v6; // eax
      v6 = GetDlgItem(hWnd, 1582); /*0x78e307*/
      char *v7; // eax
      char *v8; // eax
      char *v53; // [esp-4h] [ebp-Ch]
      if ( v6 /*0x78e346*/
        && (GetDialogText(v6, (void **)&unk_B73B30),
            v7 = (char *)GetStringCSF(g_Str_TXT_JANUARY, 0, g_Str_File_wonline_cpp, 15071),
            v53 = ToWideStringChar(v7),
            v8 = ((String *)(&unk_B73B30))->GetOrEmpty(),
            _strcmpi(v8, v53)) )
      {
        char *v9; // eax
        v9 = (char *)GetStringCSF(g_Str_TXT_FEBRUARY, 0, g_Str_File_wonline_cpp, 15073); /*0x78e367*/
        char *v54; // [esp-4h] [ebp-Ch]
        v54 = ToWideStringChar(v9); /*0x78e373*/
        char *v10; // eax
        v10 = ((String *)(&unk_B73B30))->GetOrEmpty(); /*0x78e379*/
        if ( _strcmpi(v10, v54) ) /*0x78e37f*/
        {
          char *v11; // eax
          v11 = (char *)GetStringCSF(g_Str_TXT_MARCH, 0, g_Str_File_wonline_cpp, 15075); /*0x78e3ab*/
          char *v55; // [esp-4h] [ebp-Ch]
          v55 = ToWideStringChar(v11); /*0x78e3b7*/
          char *v12; // eax
          v12 = ((String *)(&unk_B73B30))->GetOrEmpty(); /*0x78e3bd*/
          if ( _strcmpi(v12, v55) ) /*0x78e3c3*/
          {
            char *v13; // eax
            v13 = (char *)GetStringCSF(g_Str_TXT_APRIL, 0, g_Str_File_wonline_cpp, 15077); /*0x78e3ef*/
            char *v56; // [esp-4h] [ebp-Ch]
            v56 = ToWideStringChar(v13); /*0x78e3fb*/
            char *v14; // eax
            v14 = ((String *)(&unk_B73B30))->GetOrEmpty(); /*0x78e401*/
            if ( _strcmpi(v14, v56) ) /*0x78e407*/
            {
              char *v15; // eax
              v15 = (char *)GetStringCSF(g_Str_TXT_MAY, 0, g_Str_File_wonline_cpp, 15079); /*0x78e433*/
              char *v57; // [esp-4h] [ebp-Ch]
              v57 = ToWideStringChar(v15); /*0x78e43f*/
              char *v16; // eax
              v16 = ((String *)(&unk_B73B30))->GetOrEmpty(); /*0x78e445*/
              if ( _strcmpi(v16, v57) ) /*0x78e44b*/
              {
                char *v17; // eax
                v17 = (char *)GetStringCSF(g_Str_TXT_JUNE, 0, g_Str_File_wonline_cpp, 15081); /*0x78e477*/
                char *v58; // [esp-4h] [ebp-Ch]
                v58 = ToWideStringChar(v17); /*0x78e483*/
                char *v18; // eax
                v18 = ((String *)(&unk_B73B30))->GetOrEmpty(); /*0x78e489*/
                if ( _strcmpi(v18, v58) ) /*0x78e48f*/
                {
                  char *v19; // eax
                  v19 = (char *)GetStringCSF(g_Str_TXT_JULY, 0, g_Str_File_wonline_cpp, 15083); /*0x78e4bb*/
                  char *v59; // [esp-4h] [ebp-Ch]
                  v59 = ToWideStringChar(v19); /*0x78e4c7*/
                  char *v20; // eax
                  v20 = ((String *)(&unk_B73B30))->GetOrEmpty(); /*0x78e4cd*/
                  if ( _strcmpi(v20, v59) ) /*0x78e4d3*/
                  {
                    char *v21; // eax
                    v21 = (char *)GetStringCSF(g_Str_TXT_AUGUST, 0, g_Str_File_wonline_cpp, 15085); /*0x78e4ff*/
                    char *v60; // [esp-4h] [ebp-Ch]
                    v60 = ToWideStringChar(v21); /*0x78e50b*/
                    char *v22; // eax
                    v22 = ((String *)(&unk_B73B30))->GetOrEmpty(); /*0x78e511*/
                    if ( _strcmpi(v22, v60) ) /*0x78e517*/
                    {
                      char *v23; // eax
                      v23 = (char *)GetStringCSF(g_Str_TXT_SEPTEMBER, 0, g_Str_File_wonline_cpp, 15087); /*0x78e543*/
                      char *v61; // [esp-4h] [ebp-Ch]
                      v61 = ToWideStringChar(v23); /*0x78e54f*/
                      char *v24; // eax
                      v24 = ((String *)(&unk_B73B30))->GetOrEmpty(); /*0x78e555*/
                      if ( _strcmpi(v24, v61) ) /*0x78e55b*/
                      {
                        char *v25; // eax
                        v25 = (char *)GetStringCSF(g_Str_TXT_OCTOBER, 0, g_Str_File_wonline_cpp, 15089); /*0x78e587*/
                        char *v62; // [esp-4h] [ebp-Ch]
                        v62 = ToWideStringChar(v25); /*0x78e593*/
                        char *v26; // eax
                        v26 = ((String *)(&unk_B73B30))->GetOrEmpty(); /*0x78e599*/
                        if ( _strcmpi(v26, v62) ) /*0x78e59f*/
                        {
                          char *v27; // eax
                          v27 = (char *)GetStringCSF(g_Str_TXT_NOVEMBER, 0, g_Str_File_wonline_cpp, 15091); /*0x78e5cb*/
                          char *v63; // [esp-4h] [ebp-Ch]
                          v63 = ToWideStringChar(v27); /*0x78e5d7*/
                          char *v28; // eax
                          v28 = ((String *)(&unk_B73B30))->GetOrEmpty(); /*0x78e5dd*/
                          if ( _strcmpi(v28, v63) ) /*0x78e5e3*/
                          {
                            char *v29; // eax
                            v29 = (char *)GetStringCSF(g_Str_TXT_DECEMBER, 0, g_Str_File_wonline_cpp, 15093); /*0x78e60c*/
                            char *v64; // [esp-4h] [ebp-Ch]
                            v64 = ToWideStringChar(v29); /*0x78e618*/
                            char *v30; // eax
                            v30 = ((String *)(&unk_B73B30))->GetOrEmpty(); /*0x78e61e*/
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
      ((DeleteAndZero *)(void **)&stru_B7622C)->Alt2(); /*0x78e64b*/
      HWND v31; // eax
      v31 = GetDlgItem(hWnd, 1583); /*0x78e656*/
      if ( v31 ) /*0x78e65a*/
      {
        GetDialogText(v31, (void **)&stru_B7622C); /*0x78e663*/
        char *v32; // eax
        v32 = ((String *)(&stru_B7622C))->GetOrEmpty(); /*0x78e66d*/
        dword_B73AB8 = atol(v32); /*0x78e67b*/
      }
      ((DeleteAndZero *)(void **)&unk_B76908)->Alt2(); /*0x78e685*/
      HWND v33; // eax
      v33 = GetDlgItem(hWnd, 1584); /*0x78e690*/
      if ( v33 ) /*0x78e694*/
      {
        GetDialogText(v33, (void **)&unk_B76908); /*0x78e69d*/
        char *v34; // eax
        v34 = ((String *)(&unk_B76908))->GetOrEmpty(); /*0x78e6a7*/
        dword_B7782C = atol(v34); /*0x78e6b5*/
      }
      dword_B76228 = 0; /*0x78e6c0*/
      HWND v35; // eax
      v35 = GetDlgItem(hWnd, 1585); /*0x78e6ca*/
      if ( v35 ) /*0x78e6ce*/
        dword_B76228 = SendMessageA(v35, 0xF0u, 0, 0); /*0x78e6e0*/
      CloseDialog(hWnd, 1); /*0x78e6ec*/
      return 0; /*0x78e6f2*/
    }
    else if ( (uint16_t)a3 == 2 ) /*0x78e293*/
    {
      CloseDialog(hWnd, 2); /*0x78e2bf*/
      return 0; /*0x78e2c5*/
    }
    else
    {
      if ( (uint16_t)a3 == 1398 ) /*0x78e29a*/
        OpenURLWOL(aHttpPrivacypol, 0); /*0x78e2aa*/
      return 0; /*0x78e29d*/
    }
  }
}
}
// 0x78E950
namespace gamemd {
int WOLobbySmallDlgProc(HWND hWnd, UINT, WPARAM, HWND hCtl)
{

  if ( a2 > 0x111 ) /*0x78e95c*/
  {
    if ( a2 == 1175 ) /*0x78ead5*/
    {
      HWND DlgItem; // eax
      DlgItem = GetDlgItem(hWnd, 1576); /*0x78eb17*/
      SendMessageA(DlgItem, 0x4D1u, 1u, 0); /*0x78eb29*/
      HWND v12; // eax
      v12 = GetDlgItem(hWnd, 1836); /*0x78eb31*/
      SendMessageA(v12, 0x4D1u, 1u, 0); /*0x78eb3d*/
      HWND v13; // eax
      v13 = GetDlgItem(hWnd, 1575); /*0x78eb45*/
      SendMessageA(v13, 0x4D1u, 1u, 0); /*0x78eb51*/
      HWND v14; // eax
      v14 = GetDlgItem(hWnd, 1509); /*0x78eb59*/
      SendMessageA(v14, 0x4D1u, 1u, 0); /*0x78eb65*/
      HWND v15; // eax
      v15 = GetDlgItem(hWnd, 1576); /*0x78eb76*/
      SendMessageA(v15, 0xC5u, 9u, 0); /*0x78eb79*/
      HWND v16; // eax
      v16 = GetDlgItem(hWnd, 1836); /*0x78eb8a*/
      SendMessageA(v16, 0xC5u, 8u, 0); /*0x78eb8d*/
      HWND v17; // eax
      v17 = GetDlgItem(hWnd, 1575); /*0x78eb9e*/
      SendMessageA(v17, 0xC5u, 8u, 0); /*0x78eba1*/
      HWND v18; // eax
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
  if ( (uint16_t)a3 != 1 ) /*0x78e9b3*/
  {
    if ( (uint16_t)a3 == 2 ) /*0x78e9b6*/
    {
      CloseDialog(hWnd, 2); /*0x78e9c5*/
      return 0; /*0x78e9cf*/
    }
    return 0; /*0x78e9b6*/
  }
  int v5; // ebx
  v5 = GameSetup::LookupDialogHash(hWnd); /*0x78e9e2*/
  ((DeleteAndZero *)(void **)&unk_B77794)->Alt2(); /*0x78e9e4*/
  HWND v6; // eax
  v6 = GetDlgItem(hWnd, 1576); /*0x78e9f5*/
  if ( v6 ) /*0x78e9f9*/
    GetDialogText(v6, (void **)&unk_B77794); /*0x78ea02*/
  ((DeleteAndZero *)(void **)&unk_B778F4)->Alt2(); /*0x78ea0c*/
  HWND v7; // eax
  v7 = GetDlgItem(hWnd, 1836); /*0x78ea17*/
  if ( v7 ) /*0x78ea1b*/
    GetDialogText(v7, (void **)&unk_B778F4); /*0x78ea24*/
  ((DeleteAndZero *)(void **)&unk_B778FC)->Alt2(); /*0x78ea2e*/
  HWND v8; // eax
  v8 = GetDlgItem(hWnd, 1575); /*0x78ea39*/
  if ( v8 ) /*0x78ea3d*/
    GetDialogText(v8, (void **)&unk_B778FC); /*0x78ea46*/
  if ( v5 == 243 ) /*0x78ea51*/
  {
    ((DeleteAndZero *)(void **)&stru_B765EC)->Alt2(); /*0x78ea58*/
    HWND v9; // eax
    v9 = GetDlgItem(hWnd, 1509); /*0x78ea63*/
    if ( v9 ) /*0x78ea67*/
    {
      GetDialogText(v9, (void **)&stru_B765EC); /*0x78ea70*/
      CloseDialog(hWnd, 1); /*0x78ea7c*/
      return 0; /*0x78ea86*/
    }
  }
  else if ( v5 == 244 ) /*0x78ea8f*/
  {
    unk_B76C20 = 0; /*0x78ea97*/
    HWND v10; // eax
    v10 = GetDlgItem(hWnd, 1643); /*0x78eaa1*/
    if ( v10 ) /*0x78eaa5*/
      unk_B76C20 = SendMessageA(v10, 0xF0u, 0, 0); /*0x78eab7*/
  }
  CloseDialog(hWnd, 1); /*0x78eac3*/
  return 0; /*0x78e97b*/
}
}
// 0x78EBC0
namespace gamemd {
int GameSetup_DlgProc(HWND hWnd, unsigned int a2, int a3, HWND a4)
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
  int v14; // esi
  DeleteAndZero v15; // [esp-4h] [ebp-14h]
  ObjectClass *v16; // [esp+0h] [ebp-10h]

  *(unsigned int *)v15.owningHouseIndex = a4; /*0x78ebd4*/
  result = BaseDialogProc(hWnd, a2, a3, v15); /*0x78ebda*/
  if ( !result ) /*0x78ebe3*/
  {
    if ( a2 > 0x111 ) /*0x78ebef*/
    {
      if ( a2 == 1175 ) /*0x78eee5*/
      {
        if ( stru_B7622C.ptr_8 ) /*0x78ef16*/
          SendDlgItemMessageA(hWnd, 1525, 0xF1u, 1u, 0); /*0x78ef26*/
        if ( dword_B779F0 ) /*0x78ef2e*/
          SendDlgItemMessageA(hWnd, 1527, 0xF1u, 1u, 0); /*0x78ef3e*/
        if ( *(unsigned int *)DataGlobal_B779BC ) /*0x78ef46*/
          SendDlgItemMessageA(hWnd, 1526, 0xF1u, 1u, 0); /*0x78ef56*/
        if ( stru_B76900.ptr_C ) /*0x78ef5e*/
          SendDlgItemMessageA(hWnd, 1528, 0xF1u, 1u, 0); /*0x78ef6e*/
        if ( dword_B77784 ) /*0x78ef76*/
          SendDlgItemMessageA(hWnd, 1529, 0xF1u, 1u, 0); /*0x78ef86*/
        if ( dword_B779DC ) /*0x78ef8e*/
          SendDlgItemMessageA(hWnd, 1530, 0xF1u, 1u, 0); /*0x78ef9e*/
        if ( DataGlobal_B779C0 ) /*0x78efa6*/
          SendDlgItemMessageA(hWnd, 1531, 0xF1u, 1u, 0); /*0x78efb6*/
        if ( (*((unsigned char *)&(stru_B76AC4.fallRate))) ) /*0x78efbe*/
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
          byte_A8E9A0 = 1; /*0x78ec41*/
          return 0; /*0x78ec4b*/
        case 0xFu: /*0x78ebfa*/
          Dialog::DrawBackground((Dialog *)hWnd); /*0x78ec21*/
          Dialog::StopBink((Dialog *)hWnd); /*0x78ec28*/
          ValidateRect(hWnd, 0); /*0x78ec2f*/
          return 0; /*0x78ec3b*/
        case 0x2Bu: /*0x78ebfa*/
          Dialog::Resize((char *)a4); /*0x78ec0e*/
          return 1; /*0x78ec1c*/
      }
      return 0; /*0x78efe8*/
    }
    if ( (uint16_t)a3 > 0x5F8u ) /*0x78ec5a*/
    {
      if ( (uint16_t)a3 == 1594 ) /*0x78ee95*/
      {
        RenderGadgetClassAnimation(hWnd, 0); /*0x78ee9f*/
        Screen::Capture(1, 0, 0, a3); /*0x78eea8*/
        byte_A8E9A0 = 0; /*0x78eead*/
        DlgProcGameSetup_Setup(); /*0x78eeb3*/
        ShowAudioSettingsDialog(); /*0x78eebc*/
        ShowWindow(hWnd, 5); /*0x78eec4*/
        Dialog::InitWindow(hWnd, 0); /*0x78eecc*/
        DlgProcGameSetup_Setup_72B930(v16); /*0x78eed1*/
        return 0; /*0x78eedc*/
      }
      return 0; /*0x78ee95*/
    }
    if ( (uint16_t)a3 == 1528 ) /*0x78ec60*/
    {
      if ( (*(((unsigned short *)&(a3)) + 1)) <= 1u ) /*0x78edfc*/
      {
        if ( SendMessageA(a4, 0xF0u, 0, 0) != 1 ) /*0x78ee21*/
        {
          Theme::QueueSong((int)&unk_A83D10, -3); /*0x78ee82*/
          return 0; /*0x78ee8d*/
        }
        if ( !Theme::IsPlaying((Theme *)&unk_A83D10) ) /*0x78ee28*/
          goto LABEL_37; /*0x78ee28*/
        v14 = dword_A83D14; /*0x78ee51*/
        if ( dword_A83D14 == -1 ) /*0x78ee5a*/
          v14 = dword_A83D18; /*0x78ee5c*/
        if ( v14 == StringList::Find((StringList *)&unk_A83D10, g_INI_Key_INTRO) ) /*0x78ee73*/
        {
          LABEL_37:
          Theme::Stop((Theme *)&unk_A83D10, 0); /*0x78ee37*/
          Theme::QueueSong((int)&unk_A83D10, -2); /*0x78ee43*/
          return 0; /*0x78ee4e*/
        }
      }
      return 0; /*0x78ee73*/
    }
    if ( (uint16_t)a3 != 1 ) /*0x78ec67*/
    {
      if ( (uint16_t)a3 == 2 ) /*0x78ec6a*/
      {
        operator delete((void *)(dword_B77E98)); /*0x78ec77*/
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
    stru_B76900.customSound_controller[2] = 0; /*0x78ecee*/
    v7 = GetDlgItem(hWnd, 1526); /*0x78ecf4*/
    if ( v7 ) /*0x78ecf8*/
      stru_B76900.customSound_controller[2] = SendMessageA(v7, 0xF0u, 0, 0); /*0x78ed04*/
    stru_B76900.uniqueId = 0; /*0x78ed0f*/
    v8 = GetDlgItem(hWnd, 1528); /*0x78ed15*/
    if ( v8 ) /*0x78ed19*/
      stru_B76900.uniqueId = SendMessageA(v8, 0xF0u, 0, 0); /*0x78ed25*/
    v9 = GetDlgItem(hWnd, 1529); /*0x78ed30*/
    if ( v9 ) /*0x78ed34*/
      g_WebBrowserConfig.ptr_C = (void *)SendMessageA(v9, 0xF0u, 0, 0); /*0x78ed40*/
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
    g_WebBrowserConfig.ptr_4 = 0; /*0x78edae*/
    v13 = GetDlgItem(hWnd, 1909); /*0x78edb4*/
    if ( v13 ) /*0x78edb8*/
      g_WebBrowserConfig.ptr_4 = (void *)SendMessageA(v13, 0xF0u, 0, 0); /*0x78edc4*/
    operator delete((void *)(dword_B77E98)); /*0x78edd0*/
    dword_B77E98 = 0; /*0x78eddf*/
    CloseDialog(hWnd, 1); /*0x78ede5*/
    return 0; /*0x78eded*/
  }
  return result; /*0x78ec13*/
}
}
// 0x780A00
namespace gamemd {
wchar_t ** WOL_FormatLocaleString(wchar_t ** a1, int a2)
{

  char **v3; // eax
  char *v4; // eax
  wchar_t *StringCSF; // eax
  DeleteAndZero v7; // [esp+8h] [ebp-Ch] BYREF

  v3 = FormatStringInt((char **)&v7.u32_8, a2, 2); /*0x780a0f*/
  ProcessStringAndCopy((char **)&v7.q004, aWolLocale, v3); /*0x780a1e*/
  DeleteAndZero((ObjectClass *)&v7.u32_8); /*0x780a27*/
  v4 = ((String *)(String *)&v7.q004)->GetOrEmpty(); /*0x780a3a*/
  StringCSF = GetStringCSF((wchar_t *)v4, 0, g_Str_File_wonline_cpp, 2909); /*0x780a43*/
  ((WideString *)&v7)->Assign( StringCSF); /*0x780a4d*/
  WideString::AssignFromPtr((WideString *)a1, (const wchar_t **)&v7); /*0x780a65*/
  ((DeleteAndZero *)&v7)->Alt(); /*0x780a6e*/
  DeleteAndZero((ObjectClass *)&v7.q004); /*0x780a77*/
  return a1; /*0x780a7e*/

}
} // namespace gamemd

// 0x7813B0
namespace gamemd {
int sub_7813B0(unsigned int * a1, unsigned int * a2)
{

  int v2; // eax
  v2 = a1[1]; /*0x7813b8*/
  int v3; // ecx
  v3 = a2[1]; /*0x7813bb*/
  if ( v2 >= v3 ) /*0x7813c0*/
    return (v2 <= v3) - 1; /*0x7813d0*/
  else
    return 1; /*0x7813c2*/
}
} // namespace gamemd

// 0x7813E0
namespace gamemd {
void sub_7813E0(AbstractClass * Base, char a2)
{

  signed int v2 = dword_B76AE0; // edx /*0x7813eb*/
  void *v3 = Base; // esi /*0x7813f1*/
  signed int v4 = 0; // eax /*0x7813f9*/
  unsigned int v10[67]; // [esp+10h] [ebp-10Ch] BYREF
  memset(v10, 0, sizeof(v10)); /*0x781405*/
  if ( (int)dword_B76AE0 > 0 ) /*0x781407*/
  {
    int v5 = 0; // ebp /*0x78140b*/
    signed int *v6; // ebx
    v6 = (signed int *)Base; /*0x78140d*/
    do /*0x781448*/
    {
      if ( v5 >= 0 && v4 < (int)dword_B76AE0 ) /*0x781419*/
      {
        memcpy(v10, (char *)dword_B76AE8 + v5, sizeof(v10)); /*0x78142d*/
        v3 = Base; /*0x78142f*/
      }
      signed int v7; // ecx
      v7 = v10[10]; /*0x781433*/
      *v6 = v4; /*0x781437*/
      v6[1] = v7; /*0x781439*/
      ++v4; /*0x78143c*/
      v5 += 268; /*0x78143d*/
      v6 += 2; /*0x781443*/
    }
    while ( v4 < v2 ); /*0x781448*/
  }
  if ( a2 ) /*0x781452*/
    qsort(v3, v2, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_781380); /*0x781459*/
  else
    qsort(v3, v2, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_7813B0); /*0x781464*/
}
} // namespace gamemd

// 0x781CC0
namespace gamemd {
int sub_781CC0(int a1, int a2)
{

  int v2; // eax
  v2 = *(unsigned int *)(a1 + 8); /*0x781cc9*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x781cd2*/
    return _strcmpi(*(const void **)(a1 + 4), *(const void **)(a2 + 4)); /*0x781ce4*/
  int v3; // eax
  v3 = -(v2 != 0); /*0x781cd6*/
  (*((unsigned char *)&(v3))) = v3 & 0xFE; /*0x781cd8*/
  return v3 + 1; /*0x781cd1*/
}
} // namespace gamemd

// 0x781CF0
namespace gamemd {
int sub_781CF0(const void * a1, const void ** a2)
{

  char *v2; // eax
  v2 = (char *)*((unsigned int *)a1 + 2); /*0x781cf9*/
  if ( v2 == a2[2] ) /*0x781d02*/
    return _strcmpi(a2[1], *((char **)a1 + 1)); /*0x781d14*/
  int v3; // eax
  v3 = -(v2 != 0); /*0x781d06*/
  (*((unsigned char *)&(v3))) = v3 & 0xFE; /*0x781d08*/
  return v3 + 1; /*0x781d01*/
}
} // namespace gamemd

// 0x7831A0
namespace gamemd {
int sub_7831A0(signed int * a1, signed int * a2)
{

  signed int v2; // eax
  v2 = a1[2]; /*0x7831aa*/
  if ( v2 == a2[2] ) /*0x7831b8*/
  {
    signed int v5; // eax
    v5 = a1[1]; /*0x7831c9*/
    signed int v6; // ecx
    v6 = a2[1]; /*0x7831cc*/
    if ( v5 <= v6 ) /*0x7831d1*/
    {
      if ( v5 >= v6 ) /*0x7831de*/
      {
        char v10[108]; // [esp+70h] [ebp-6Ch] BYREF
        memset(v10, 0, sizeof(v10)); /*0x7831fb*/
        char v9[108]; // [esp+4h] [ebp-D8h] BYREF
        memset(v9, 0, sizeof(v9)); /*0x78320c*/
        signed int v7 = *a1; // eax /*0x78320e*/
        if ( *a1 >= 0 && v7 < (int)dword_B77900 ) /*0x78321c*/
          memcpy(v10, (char *)dword_B77908 + 108 * v7, sizeof(v10)); /*0x783230*/
        signed int v8 = *a2; // eax /*0x783232*/
        if ( *a2 >= 0 && v8 < (int)dword_B77900 ) /*0x78323a*/
          memcpy(v9, (char *)dword_B77908 + 108 * v8, sizeof(v9)); /*0x78324e*/
        return _strcmpi(&v10[36], &v9[36]); /*0x78325d*/
      }
      else
      {
        return 1; /*0x7831e0*/
      }
    }
    else
    {
      return -1; /*0x7831d3*/
    }
  }
  else
  {
    int v3; // eax
    v3 = -(v2 != 0); /*0x7831bc*/
    (*((unsigned char *)&(v3))) = v3 & 0xFE; /*0x7831bf*/
    return v3 + 1; /*0x7831c1*/
  }
}
} // namespace gamemd

// 0x783520
namespace gamemd {
int sub_783520(const char * a1, const char * a2)
{

  unsigned int v2; // kr04_4
  v2 = strlen(a1) + 1; /*0x783532*/
  unsigned int v3; // kr08_4
  v3 = strlen(a2) + 1; /*0x78353e*/
  if ( v2 == 1 ) /*0x783545*/
    return (int)(v3 - 1) > 0; /*0x783545*/
  if ( v3 != 1 ) /*0x783549*/
    return _strcmpi(a1, a2); /*0x783558*/
  if ( (int)(v2 - 1) <= 0 ) /*0x78355b*/
    return (int)(v3 - 1) > 0; /*0x78356b*/
  else
    return -1; /*0x78355f*/
}
} // namespace gamemd

// 0x783570
namespace gamemd {
int sub_783570(const char * a1, const char * a2)
{

  unsigned int v2; // kr04_4
  v2 = strlen(a1) + 1; /*0x783582*/
  unsigned int v3; // kr08_4
  v3 = strlen(a2) + 1; /*0x78358e*/
  if ( v2 == 1 ) /*0x783595*/
    return (int)(v3 - 1) > 0; /*0x783595*/
  if ( v3 != 1 ) /*0x783599*/
    return _strcmpi(a2, a1); /*0x7835a8*/
  if ( (int)(v2 - 1) <= 0 ) /*0x7835ab*/
    return (int)(v3 - 1) > 0; /*0x7835bb*/
  else
    return -1; /*0x7835af*/
}
} // namespace gamemd

// 0x785360
namespace gamemd {
void WOL_DisplayRankingsThunk()
{
  DisplayRankingsWOL(0); /*0x785364*/
}
} // namespace gamemd

// 0x786E70
namespace gamemd {
int E4Recv_786E70::sub_786E70()
{

  if ( !((String *)this)->Length() ) /*0x786e75*/
    return -1; /*0x786e75*/
  void *ptr_0 = g_WOL_UserList.ptr_0; // ecx /*0x786e7e*/
  int v3 = 1; // edi /*0x786e84*/
  if ( (int)g_WOL_UserList.ptr_0 <= 1 ) /*0x786e8b*/
    return -1; /*0x786ed8*/
  int i; // esi
  for ( i = 248; ; i += 248 ) /*0x786e8d*/
  {
    char *v5 = 0; // eax /*0x786e92*/
    if ( i >= 0 && v3 < (int)ptr_0 ) /*0x786e9a*/
      v5 = (char *)g_WOL_UserList.ptr_8 + i; /*0x786ea1*/
    char *v6; // eax
    v6 = strchr(v5 + 24, 58); /*0x786ea9*/
    if ( v6 ) /*0x786eb3*/
    {
      if ( *v6 && (uint8_t)((String *)((String *)this))->Equals_Alt(v6 + 1) ) /*0x786ebe*/
        break; /*0x786ebe*/
    }
    ptr_0 = g_WOL_UserList.ptr_0; /*0x786ec7*/
    if ( ++v3 >= (int)g_WOL_UserList.ptr_0 ) /*0x786ed6*/
      return -1; /*0x786ed6*/
  }
  return v3; /*0x786ed8*/
}
} // namespace gamemd

// 0x789630
namespace gamemd {
char ** sub_789630(char ** a1, int a2)
{

  int v3; // eax
  String v5; // [esp+4h] [ebp-8h] BYREF

  ((String *)&v5)->Assign( (const char *)(a2 + 24)); /*0x78963e*/
  unknown_libname_73(&v5.ptr_4); /*0x789647*/
  v3 = String::Tokenize(&v5, 0, asc_8318B8, (void **)&v5.ptr_4); /*0x78965c*/
  if ( v3 >= 0 ) /*0x789663*/
    String::Erase(&v5, 0, v3 + 1); /*0x78966d*/
  String::AssignFromPtr(a1, (const char **)&v5); /*0x789679*/
  DeleteAndZero((ObjectClass *)&v5.ptr_4); /*0x789682*/
  DeleteAndZero((ObjectClass *)&v5); /*0x78968b*/
  return a1; /*0x789692*/

}
} // namespace gamemd

// 0x78ABF0
namespace gamemd {
short WOL_ChatMessage(char a1, wchar_t * a2)
{
  byte_B77E40 = a1; /*0x78abf0*/
  return ((WideString *)&unk_B76230)->Reassign( a2); /*0x78ac01*/
}
}
