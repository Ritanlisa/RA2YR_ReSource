// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/RawFileClass_e4.hpp"
#include "e4/classes/FileClass_e4.hpp"
#include "e4/classes/IsRandMap_e4.hpp"
#include "e4/classes/CComObject_CChatEventSink___ATL_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/NetworkLobby_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/CChatEventSink_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/GameConfig_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/BuildingPlacement_e4.hpp"
#include "e4/classes/COMClass_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/E4Recv_5E93F0_e4.hpp"
#include "e4/classes/ChatEvent_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"
#include "e4/classes/Player_e4.hpp"
#include "e4/classes/GameSettings_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/BuildingAnim_e4.hpp"
#include "e4/classes/MessageListClass_e4.hpp"
#include "e4/classes/Screen_e4.hpp"
#include "e4/classes/_w14_nocarrier_e4.hpp"
#include "classes/GameLoop_e4.hpp"  // G42.57w9 method-carrier supply
#include "e4/classes/GadgetClass_e4.hpp"  // w18j2 C3861 GadgetClass:: supply
#include "e4/classes/MapClass_e4.hpp"
// [w18j2] C2065 function supply (raw-evidenced)
namespace gamemd { int DlgProc(HWND hDlg, unsigned int a2, unsigned int a3, HWND a4); }  // x4:ida@0x4f11b0
// [w18j2] C3861 supply (raw-evidenced)
namespace gamemd { int TrackState(int p0, int p1); }  // x4:signals@0x77a700
// [w16g4] C3861 supply (raw call-form evidence)
namespace gamemd { int CreateDialog(unsigned __int16 a1, INT_PTR (__stdcall *a2)(HWND, UINT, WPARAM, LPARAM), LPARAM a3); }  // x4:ida@0x622650
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
    int GameListRenderWOL(ObjectClass *p_this);  // x4:ida@0x781480
    int LeaveChannelWOL(const char *p_this);  // x4:ida@0x785740
} // namespace gamemd
// ==== G42.57w9 data-label supply (IDA truth; e4_globals pending) ====
extern wchar_t aTxtPagefailed[];  // data: 0x84b034 truth(IDA G42.57w9)
extern wchar_t aTxtWolConnlost[];  // data: 0x84b190 truth(IDA G42.57w9)
extern wchar_t aTxtYoureDiscon[];  // data: 0x84b15c truth(IDA G42.57w9)


// 0x7937B0
namespace gamemd {  // G42.18 ns repair
int CComObject_CChatEventSink___ATL::DispatchConnectionPairs(void *a1_1)
{

  int v17; // edx

  unsigned int v26[8]; // [esp+20h] [ebp-20h] BYREF
  memset(v26, 0, sizeof(v26)); /*0x7937c6*/
  int v1; // edi
  v1 = 0; /*0x7937c8*/
  unsigned int *v2; // ebx
  v2 = v26; /*0x7937ca*/
  wchar_t **v3; // esi
  v3 = (wchar_t **)&dword_A8DA90; /*0x7937ce*/
  do /*0x7937ed*/
  {
    if ( IsKnownPointer(*v3) ) /*0x7937d5*/
      *v2++ = v1; /*0x7937de*/
    ++v3; /*0x7937e3*/
    ++v1; /*0x7937e6*/
  }
  while ( (int)v3 < (int)&dword_A8DAB0 ); /*0x7937ed*/
  int v4; // eax
  v4 = dword_A8DA84; /*0x7937ef*/
  int i; // [esp+14h] [ebp-2Ch]
  for ( i = 0; i < v4; ++i ) /*0x7937fe*/
  {
  int v19; // [esp+10h] [ebp-30h]
    v19 = 0; /*0x793803*/
    if ( v4 - 1 > 0 ) /*0x79380d*/
    {
  int *v5; // esi
      v5 = (int *)(&v26[1]); /*0x79380f*/
      do /*0x793865*/
      {
  int v6; // ebx
        v6 = *v5; /*0x793813*/
  int v7; // edi
        v7 = *(v5 - 1); /*0x793815*/
  int v8; // ebp
        v8 = dword_A8DC2C[v7]; /*0x793824*/
  int v23; // [esp+18h] [ebp-28h]
        v23 = Network_Connect(dword_A8DC2C[*v5]); /*0x793839*/
        if ( Network_Connect(v8) < v23 ) /*0x793848*/
        {
          *(v5 - 1) = v6; /*0x79384a*/
          *v5 = v7; /*0x79384d*/
        }
        v4 = dword_A8DA84; /*0x79384f*/
        ++v5; /*0x793859*/
        ++v19; /*0x79385f*/
      }
      while ( v19 < dword_A8DA84 - 1 ); /*0x793865*/
    }
  }
  Debug::Log(); /*0x793897*/
  int v9; // esi
  v9 = 0; /*0x79389c*/
  int v20; // [esp+10h] [ebp-30h]
  v20 = 0; /*0x7938a3*/
  Debug::Log(); /*0x7938a7*/
  int v10; // eax
  v10 = dword_A8DA84; /*0x7938ac*/
  if ( dword_A8DA84 > 0 ) /*0x7938b6*/
  {
  int v11; // ebp
    v11 = 1; /*0x7938b8*/
  unsigned int *v12; // edi
    v12 = v26; /*0x7938bd*/
  int v22; // [esp+14h] [ebp-2Ch]
    v22 = 1; /*0x7938c1*/
  unsigned int *v24; // [esp+18h] [ebp-28h]
    v24 = v26; /*0x7938c5*/
    do /*0x793923*/
    {
      if ( v11 < v10 ) /*0x7938cb*/
      {
  int v13; // ebx
        v13 = *v12; /*0x7938d1*/
  int *v14; // edi
        v14 = (int *)(v12 + 1); /*0x7938d3*/
  char *v15; // esi
        v15 = (char *)(a1_1 + 8 * v9); /*0x7938d6*/
        do /*0x793906*/
        {
  int v16; // eax
          v16 = *v14; /*0x7938d9*/
          *(unsigned int *)v15 = v13; /*0x7938db*/
          *((unsigned int *)v15 + 1) = v16; /*0x7938e4*/
          Debug::Log(); /*0x7938e7*/
          v10 = dword_A8DA84; /*0x7938f0*/
          v17 = v20 + 1; /*0x7938f8*/
          v15 += 8; /*0x7938f9*/
          ++v11; /*0x7938fc*/
          ++v14; /*0x7938fd*/
          ++v20; /*0x793902*/
        }
        while ( v11 < dword_A8DA84 ); /*0x793906*/
        v12 = v24; /*0x793908*/
        v11 = v22; /*0x79390c*/
        v9 = v17; /*0x793910*/
      }
      ++v11; /*0x793912*/
      ++v12; /*0x793913*/
      v22 = v11; /*0x793916*/
      v24 = v12; /*0x79391a*/
    }
    while ( v11 - 1 < v10 ); /*0x793923*/
  }
  return v9; /*0x793927*/

}
}  // G42.18 ns repair
// 0x7A4EC0
namespace gamemd {
Coord * * CComObject_CChatEventSink___ATL::DispatchStub_32(int a1, int a2, int a3, int a4)
{
  int v4; // ebp
  int owningHouseIndex; // ecx
  int v6; // eax
  char *v7; // edx
  int v8; // eax
  int v9; // ebx
  ObjectClass *v10; // eax
  ObjectClass *nextObject; // esi
  ObjectClass *v12; // ebp
  char v13; // dl
  unsigned int v14; // ecx
  char v15; // dl
  bool v16; // cc
  int v17; // esi
  int v19; // [esp+1Ch] [ebp-E8h]
  unsigned char v20[228]; // [esp+20h] [ebp-E4h] BYREF

  --dword_B77DDC; /*0x7a4ed2*/
  v4 = 0; /*0x7a4ed9*/
  if ( dword_B77DE0 ) /*0x7a4edf*/
  {
    dword_B77DE0 = 0; /*0x7a4ee8*/
    dword_B77DE4 = a3; /*0x7a4eee*/
    if ( a2 ) /*0x7a4efc*/
      return 0; /*0x7a4efc*/
    strcpy(byte_B77A94, (const char *)(a4 + 401)); /*0x7a4f26*/
  }
  else if ( a2 ) /*0x7a4f38*/
  {
    return 0; /*0x7a4f38*/
  }
  owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7a4f3e*/
  v6 = 0; /*0x7a4f44*/
  v19 = 0; /*0x7a4f48*/
  if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x7a4f4c*/
  {
    *(unsigned int *)&v20[4] = 0; /*0x7a4f53*/
    while ( 1 ) /*0x7a4f57*/
    {
      v7 = 0; /*0x7a4f57*/
      if ( v4 >= 0 && v6 < owningHouseIndex ) /*0x7a4f5f*/
        v7 = (char *)g_WOL_UserList.nextObject + v4; /*0x7a4f66*/
      if ( v7->Straw_14 != a3 ) /*0x7a4f75*/
        goto LABEL_38; /*0x7a4f75*/
      *(unsigned int *)&v20[8] = (unsigned int)(v7 + 87); /*0x7a4f90*/
      strcpy(v7 + 87, (const char *)(a4 + 401)); /*0x7a4fa8*/
      strcpy(v7 + 46, (const char *)(a4 + 360)); /*0x7a4fcb*/
      memset(&v20[120], 0, 0x6Cu); /*0x7a4ff0*/
      if ( v4 >= 0 && v19 < g_WOL_UserList.owningHouseIndex ) /*0x7a4ff8*/
        memcpy(&v20[120], (char *)g_WOL_UserList.nextObject + v4, 0x6Cu); /*0x7a5009*/
      v8 = v19; /*0x7a500b*/
      memcpy(&v20[12], &v20[120], 0x6Cu); /*0x7a501f*/
      *(unsigned int *)&v20[44] = 0; /*0x7a5023*/
      if ( g_WOL_UserList.owningHouseIndex ) /*0x7a502b*/
      {
        if ( v4 < 0 ) /*0x7a5033*/
          v8 = 0; /*0x7a5035*/
        if ( v8 >= g_WOL_UserList.owningHouseIndex ) /*0x7a5039*/
          v8 = g_WOL_UserList.owningHouseIndex - 1; /*0x7a503b*/
        memcpy( /*0x7a5061*/
          (char *)g_WOL_UserList.nextObject + 108 * v8,
          &g_WOL_UserList.nextObject->alignmentPadding69[108 * v8 + 3],
          108 * g_WOL_UserList.owningHouseIndex - 36 * (3 * v8 + 3));
        --g_WOL_UserList.owningHouseIndex; /*0x7a5075*/
        if ( 3 * g_WOL_UserList.owningHouseIndex <= g_WOL_UserList.fallRate ) /*0x7a507f*/
        {
          v9 = g_WOL_UserList.fallRate / 2; /*0x7a5088*/
          if ( g_WOL_UserList.fallRate / 2 < 10 ) /*0x7a508d*/
            v9 = 10; /*0x7a508f*/
          if ( v9 < g_WOL_UserList.fallRate ) /*0x7a5096*/
          {
            v10 = (ObjectClass *)operator new(108 * v9); /*0x7a50a2*/
            nextObject = g_WOL_UserList.nextObject; /*0x7a50a7*/
            v12 = v10; /*0x7a50b2*/
            if ( g_WOL_UserList.nextObject ) /*0x7a50b4*/
            {
              v13 = 108 * (*((unsigned char *)&(g_WOL_UserList.owningHouseIndex))); /*0x7a50c6*/
              v14 = (unsigned int)(108 * g_WOL_UserList.owningHouseIndex) >> 2; /*0x7a50c8*/
              memcpy(v10, g_WOL_UserList.nextObject, 4 * v14); /*0x7a50cb*/
              memcpy(&v10->vfptr + v14, &nextObject->vfptr + v14, v13 & 3); /*0x7a50d2*/
              nextObject = g_WOL_UserList.nextObject; /*0x7a50d4*/
            }
            operator delete((void *)(nextObject)); /*0x7a50db*/
            g_WOL_UserList.nextObject = v12; /*0x7a50e0*/
            v4 = *(unsigned int *)&v20[4]; /*0x7a50e6*/
            g_WOL_UserList.fallRate = v9; /*0x7a50ed*/
          }
        }
      }
      if ( dword_B77E48 == 1 ) /*0x7a50fb*/
        break; /*0x7a50fb*/
      switch ( dword_B77E48 ) /*0x7a5104*/
      {
        case 2: /*0x7a5104*/
          InsertBuddyList(&v20[12], 1); /*0x7a510c*/
          break;
        case 3: /*0x7a5104*/
          InsertBuddyList(&v20[12], 0); /*0x7a511e*/
          break;
        case 4: /*0x7a5104*/
          FindBuddyList(&v20[12], 1); /*0x7a5130*/
          break;
        case 5: /*0x7a5104*/
          FindBuddyList(&v20[12], 0); /*0x7a5142*/
          break;
        default:
          v15 = 1; /*0x7a5149*/
          goto LABEL_37; /*0x7a5149*/
      }
  LABEL_38:
      owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7a5154*/
      v6 = v19 + 1; /*0x7a515e*/
      v4 += 108; /*0x7a515f*/
      v16 = ++v19 < g_WOL_UserList.owningHouseIndex; /*0x7a5162*/
      *(unsigned int *)&v20[4] = v4; /*0x7a5168*/
      if ( !v16 ) /*0x7a516c*/
        goto LABEL_39; /*0x7a516c*/
    }
    v15 = 0; /*0x7a50fd*/
  LABEL_37:
    InsertGameSettings(&v20[12], v15); /*0x7a514b*/
    goto LABEL_38; /*0x7a514f*/
  }
  LABEL_39:
  ((String *)((String *)v20))->Assign((const char *)(a4 + 401)); /*0x7a5173*/
  ((String *)((String *)v20))->ToLower(); /*0x7a518e*/
  v17 = *(unsigned int *)(*(unsigned int *)g_WOL_ListParser /*0x7a51b2*/
                  + 4 * (dword_B768D8(v20) & ((1 << (*((signed char *)&(DataGlobal_B768CC)))) - 1)));
  if ( v17 ) /*0x7a51b7*/
  {
    while ( !(uint8_t)((String *)((String *)v17))->Compare((const char **)v20) ) /*0x7a51c7*/
    {
      v17 = v17->estimatedHealth; /*0x7a51c9*/
      if ( !v17 ) /*0x7a51ce*/
        goto LABEL_42; /*0x7a51ce*/
    }
  }
  else
  {
  LABEL_42:
    (*(void (__stdcall **)(LPVOID, char *, int, int, int **, int, unsigned int, unsigned int))(*(unsigned int *)g_UIPointerTable + 20))( /*0x7a51d0*/
      g_UIPointerTable,
      g_WOL_ConnectFlag,
      g_WOL_GameConfig,
      a4 + 401,
      &off_802100,
      -1,
      0,
      0);
  }
  if ( !dword_B77DDC ) /*0x7a51fa*/
    DisplayRankingsWOL(0); /*0x7a5200*/
  DeleteAndZero((ObjectClass *)v20); /*0x7a5209*/
  return 0; /*0x7a520e*/
}
}
// 0x7A5290
namespace gamemd {
Coord * * CComObject_CChatEventSink___ATL::GetTypeInfo(int a2, const char *a3, int a1018, int a1, int a4, int a5)
{
  wchar_t *StringCSF; // eax
  wchar_t *v4; // eax
  char *v6; // ebp
  char *i; // eax
  int v8; // esi
  int v9; // [esp+24h] [ebp-50h] BYREF
  int v10; // [esp+28h] [ebp-4Ch] BYREF
  unsigned char v11[4]; // [esp+2Ch] [ebp-48h] BYREF
  char v12[4]; // [esp+30h] [ebp-44h] BYREF
  char Buffer[64]; // [esp+34h] [ebp-40h] BYREF

  dword_B77DF8 = a2; /*0x7a5299*/
  if ( a2 < 0 ) /*0x7a529e*/
    (*((unsigned char *)&(DataGlobal_B77DC0))) = 1; /*0x7a52a0*/
  if ( a2 <= -2147221387 ) /*0x7a52ac*/
  {
    if ( a2 == -2147221387 ) /*0x7a52b2*/
    {
      StringCSF = GetStringCSF((wchar_t *)aTxtBanned, 0, g_Str_File_wonline_cpp, 5758); /*0x7a5383*/
    }
    else
    {
      switch ( a2 ) /*0x7a52ce*/
      {
        case -2147221404: /*0x7a52ce*/
          StringCSF = GetStringCSF((wchar_t *)(aTxtLoginUsed), 0, g_Str_File_wonline_cpp, 5737); /*0x7a52e6*/
          break; /*0x7a52e6*/
        case -2147221403: /*0x7a52ce*/
          StringCSF = GetStringCSF((wchar_t *)(g_Str_TXT_BADPASS), 0, g_Str_File_wonline_cpp, 5742); /*0x7a531f*/
          break; /*0x7a532a*/
        case -2147221390: /*0x7a52ce*/
          StringCSF = GetStringCSF((wchar_t *)aTxtBanned, 0, g_Str_File_wonline_cpp, 5747); /*0x7a5357*/
          break; /*0x7a5357*/
        case -2147221388: /*0x7a52ce*/
          StringCSF = GetStringCSF((wchar_t *)aTxtDisabled, 0, g_Str_File_wonline_cpp, 5753); /*0x7a536d*/
          break; /*0x7a536d*/
        default:
          goto LABEL_19;
      }
    }
    goto LABEL_20; /*0x7a536d*/
  }
  if ( a2 <= -2147221384 ) /*0x7a538a*/
  {
    if ( a2 == -2147221384 ) /*0x7a538c*/
    {
      v4 = GetStringCSF((wchar_t *)(aTxtSkuserialmi), 0, g_Str_File_wonline_cpp, 5773); /*0x7a53d6*/
      wcscpy((wchar_t *)(&word_B77AD0), v4); /*0x7a53e1*/
      SetEvent((void *)(Handles)); /*0x7a53ef*/
      return 0; /*0x7a53fa*/
    }
    if ( a2 == -2147221386 ) /*0x7a5393*/
      StringCSF = GetStringCSF((wchar_t *)aTxtSerialdup, 0, g_Str_File_wonline_cpp, 5763); /*0x7a53c0*/
    else
      StringCSF = GetStringCSF((wchar_t *)aTxtSerialunkno, 0, g_Str_File_wonline_cpp, 5768); /*0x7a53ad*/
    goto LABEL_20; /*0x7a53ad*/
  }
  if ( a2 ) /*0x7a53ff*/
  {
  LABEL_19:
    StringCSF = GetStringCSF((wchar_t *)(g_Str_TXT_CANT_CONNECT), 0, g_Str_File_wonline_cpp, 5779); /*0x7a5401*/
  LABEL_20:
    wcscpy((wchar_t *)(&word_B77AD0), StringCSF); /*0x7a5417*/
    SetEvent((void *)(Handles)); /*0x7a542c*/
    return 0; /*0x7a5437*/
  }
  if ( !dword_B77EA4 ) /*0x7a5442*/
  {
    (*(void (__stdcall **)(LPVOID, int *))(*(unsigned int *)ppv + 132))(ppv, &a2); /*0x7a5457*/
    v6 = (char *)operator new(strlen((const char *)a2) + 32); /*0x7a5477*/
    strcpy(v6, (const char *)a2); /*0x7a5493*/
    strcat(v6,(const char *)(a1018)); /*0x7a54bb*/
    for ( i = strtok(v6, Str); i; i = strtok(0, Str) ) /*0x7a54ce*/
    {
      v8 = atol(i); /*0x7a54dd*/
      (*(void (__stdcall **)(LPVOID, int, int, int *, int *, char *, unsigned char *))(*(unsigned int *)ppv + 92))( /*0x7a54ff*/
        ppv,
        v8,
        dword_84A1C0,
        &v10,
        &v9,
        v12,
        v11);
      sprintf(Buffer, "gt%d.bmp", v8); /*0x7a550d*/
      ((ChatEvent*)(&g_DialogHashTable))->ProcessStrings(Buffer, v10, v9, 2); /*0x7a552b*/
    }
    operator delete((void *)(v6)); /*0x7a5544*/
    dword_B77EA4 = 1; /*0x7a554c*/
  }
  if ( byte_84A1B8 ) /*0x7a555f*/
    ((String *)((String *)&DataGlobal_B73AE0))->Assign_Alt(a3); /*0x7a556b*/
  else
    ((DeleteAndZero *)&DataGlobal_B73AE0)->Alt2(); /*0x7a5577*/
  memset(&stru_B76AC4.ambientSoundController[4], 0, 0x10Cu); /*0x7a558e*/
  memset(&DataGlobal_B73BE8, 0, 0x10Cu); /*0x7a559a*/
  (((unsigned char *)&(DataGlobal_B77DC0))[2]) = 0; /*0x7a559d*/
  g_WOL_ChannelState = 0; /*0x7a55a4*/
  SetEvent((void *)(dword_B7368C)); /*0x7a55ae*/
  QueryNATPortWOL((gamemd::ObjectClass *)(&stru_A8DBC0)); /*0x7a55b9*/
  return 0; /*0x7a5308*/
}
}
// 0x7A5690
namespace gamemd {
AbstractClass * * CComObject_CChatEventSink___ATL::FireEvent(int a1, int a2, unsigned char * a3)
{

  if ( a2 >= 0 ) /*0x7a5699*/
  {
    if ( *(unsigned int *)a3 ) /*0x7a572c*/
    {
      memset(&g_WOL_LoginObject.referenceCount, 0, 0x940u); /*0x7a576f*/
  char *v9; // edi
      v9 = ((String *)((String *)&g_WebBrowser))->GetOrEmpty(); /*0x7a577b*/
  TagClass *v10; // eax
      v10 = (TagClass *)dword_A8B3AC; /*0x7a5788*/
      strcpy((char *)&g_WOL_LoginObject.referenceCount, v9); /*0x7a5799*/
      g_WOL_LoginObject.attachedTag = v10; /*0x7a57a8*/
      g_WOL_LoginObject.attachedBomb = 0; /*0x7a57ad*/
      g_WOL_LoginObject.nextObject = (ObjectClass *)dword_A8B394; /*0x7a57b7*/
      g_WOL_LoginObject.ambientSoundController[0] = 1; /*0x7a57bd*/
    }
    else
    {
  char *v14; // [esp-10h] [ebp-60h]
      v14 = CharToWideString(a3 + 52); /*0x7a573a*/
  wchar_t *StringCSF; // eax
      StringCSF = GetStringCSF((wchar_t *)(aTxtCreatedChan), 0, g_Str_File_wonline_cpp, 5835); /*0x7a574c*/
      Dialog::ShowMessage(-1, (size_t)StringCSF, v14); /*0x7a5759*/
    }
    memcpy(&stru_B76AC4.ambientSoundController[4], a3, 0x10Cu); /*0x7a57d8*/
    dword_B77E4C = 1; /*0x7a57e0*/
    ++g_WOL_ChannelState; /*0x7a57eb*/
    Debug::Log(); /*0x7a57f1*/
    if ( ppv && *(unsigned int *)a3 ) /*0x7a5802*/
    {
  char Buffer[80]; // [esp+0h] [ebp-50h] BYREF
      memset(Buffer, 0, sizeof(Buffer)); /*0x7a5813*/
      ((GameConfig *)(Buffer))->BuildChecksum(); /*0x7a5819*/
      Buffer[40] = 0; /*0x7a5827*/
      (*(void (__stdcall **)(LPVOID, char *))(*(unsigned int *)ppv + 168))(ppv, Buffer); /*0x7a5830*/
    }
  HWND v11; // eax
    v11 = (HWND)((Dialog *)0xC4)->FindByHandle(); /*0x7a583b*/
    if ( v11 ) /*0x7a5845*/
    {
      g_WOL_ChannelList &= ~4u; /*0x7a5850*/
      if ( !g_WOL_ChannelList ) /*0x7a5856*/
        CloseDialog(v11, 0); /*0x7a585c*/
    }
  HWND Current; // eax
    Current = (HWND)Dialog::GetCurrent(); /*0x7a5861*/
  HWND DlgItem; // eax
    DlgItem = GetDlgItem(Current, 1344); /*0x7a586c*/
    if ( DlgItem ) /*0x7a5874*/
      SetFocus(DlgItem); /*0x7a5877*/
  }
  else
  {
  wchar_t *v3; // eax
    v3 = GetStringCSF((wchar_t *)(aTxtChancreateF), 0, g_Str_File_wonline_cpp, 5825); /*0x7a56b0*/
    Dialog::ShowMessage(-1, (size_t)v3); /*0x7a56bc*/
    dword_B77E4C = 0; /*0x7a56c9*/
    stru_B76AC4.needsRedraw = 0; /*0x7a56d3*/
  HWND v4; // eax
    v4 = (HWND)((Dialog *)0xC4)->FindByHandle(); /*0x7a56da*/
    if ( v4 ) /*0x7a56e1*/
    {
      g_WOL_ChannelList &= ~4u; /*0x7a56ec*/
      if ( !g_WOL_ChannelList ) /*0x7a56f2*/
        CloseDialog(v4, 0); /*0x7a56f8*/
    }
  HWND v5; // eax
    v5 = (HWND)Dialog::GetCurrent(); /*0x7a56fd*/
  HWND v6; // eax
    v6 = GetDlgItem(v5, 1344); /*0x7a5708*/
    if ( v6 ) /*0x7a5710*/
    {
      SetFocus(v6); /*0x7a5717*/
      return 0; /*0x7a5722*/
    }
  }
  return 0; /*0x7a571f*/
}
}
// 0x7A7B60
namespace gamemd {
Coord * * CComObject_CChatEventSink___ATL::DispatchStub_23(int a1, int a2, int a3, int a4, wchar_t * a5)
{
  Network *v5; // edi
  int owningHouseIndex; // esi
  int v8; // ebp
  int v9; // ebx
  int v10; // edi
  HWND v11; // eax
  HWND v12; // eax
  char *v13; // edi
  int v14; // eax
  int v15; // eax
  ObjectClass *nextObject; // edx
  Network *v17; // [esp-Ch] [ebp-A0h]
  char v18; // [esp+7h] [ebp-8Dh]
  String v19; // [esp+8h] [ebp-8Ch] BYREF
  int v20; // [esp+10h] [ebp-84h]
  int v21; // [esp+14h] [ebp-80h]
  int v22; // [esp+18h] [ebp-7Ch]
  int v23; // [esp+20h] [ebp-74h]
  char v24[108]; // [esp+28h] [ebp-6Ch] BYREF

  owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7a7b67*/
  v18 = 1; /*0x7a7b71*/
  v22 = g_WOL_UserList.owningHouseIndex; /*0x7a7b76*/
  v21 = 0; /*0x7a7b7a*/
  dword_B76478 = TimerGetTicks(); /*0x7a7b87*/
  dword_B7647C = v23; /*0x7a7b90*/
  dword_B76480 = 0; /*0x7a7b9e*/
  if ( byte_B77E27 ) /*0x7a7ba4*/
    return 0; /*0x7a7ba6*/
  v17 = v5; /*0x7a7bbb*/
  DataGlobal_B77DCC = 1; /*0x7a7bbe*/
  v20 = a4; /*0x7a7bc8*/
  if ( a4 ) /*0x7a7bcc*/
  {
    while ( 1 ) /*0x7a7be3*/
    {
      ++v21; /*0x7a7be3*/
      ((String *)((String *)&v19.ptr_4))->Assign((const char *)(v20 + 36)); /*0x7a7be7*/
      ((String *)((String *)&v19.ptr_4))->ToLower(); /*0x7a7bf0*/
      v8 = 0; /*0x7a7bf5*/
      if ( owningHouseIndex <= 0 ) /*0x7a7bf9*/
        break; /*0x7a7bf9*/
      v9 = 0; /*0x7a7bff*/
      while ( 1 ) /*0x7a7c01*/
      {
        if ( v9 >= 0 && v8 < g_WOL_UserList.owningHouseIndex ) /*0x7a7c0b*/
        {
          memcpy(v24, (char *)g_WOL_UserList.nextObject + v9, sizeof(v24)); /*0x7a7c1f*/
          owningHouseIndex = v22; /*0x7a7c21*/
        }
        ((String *)(&v19))->Assign(&v24[36]); /*0x7a7c2e*/
        ((String *)(&v19))->ToLower(); /*0x7a7c37*/
        if ( (uint8_t)((String *)((String *)&v19.ptr_4))->Compare((const char **)&v19) ) /*0x7a7c45*/
          break; /*0x7a7c45*/
        DeleteAndZero((ObjectClass *)&v19); /*0x7a7c52*/
        ++v8; /*0x7a7c57*/
        v9 += 108; /*0x7a7c58*/
        if ( v8 >= owningHouseIndex ) /*0x7a7c5d*/
          goto LABEL_15; /*0x7a7c5d*/
      }
      DeleteAndZero((ObjectClass *)&v19); /*0x7a7c61*/
      if ( v8 >= owningHouseIndex ) /*0x7a7c68*/
        break; /*0x7a7c68*/
      v20 = *(unsigned int *)(v20 + 32); /*0x7a7c75*/
      v10 = v20; /*0x7a7c72*/
      DeleteAndZero((ObjectClass *)&v19.ptr_4); /*0x7a7c79*/
      if ( !v10 ) /*0x7a7c80*/
        goto LABEL_16; /*0x7a7c80*/
    }
  LABEL_15:
    v18 = 0; /*0x7a7c87*/
    DeleteAndZero((ObjectClass *)&v19.ptr_4); /*0x7a7c90*/
  }
  LABEL_16:
  if ( v21 == owningHouseIndex && v18 ) /*0x7a7ca1*/
  {
    if ( dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2 ) /*0x7a7cd9*/
    {
      v11 = (HWND)((Dialog *)0x117)->FindByHandle(); /*0x7a7ce0*/
      CloseDialog(v11, 0); /*0x7a7ce9*/
    }
    v12 = (HWND)((Dialog *)0xCF)->FindByHandle(); /*0x7a7cf3*/
    CloseDialog(v12, 0); /*0x7a7cfc*/
    *(unsigned int *)&DataGlobal_B779D4 = (unsigned int)(a5); /*0x7a7d14*/
    *(unsigned int *)dword_B77D6C = g_NetworkRematchState; /*0x7a7d1e*/
    dword_B73814 = 8960; /*0x7a7d27*/
    *(unsigned int *)DataGlobal_B779C4 = stru_B76AC4.customSound_controller[4]; /*0x7a7d31*/
    if ( *(unsigned int *)&dword_A8B238 == 4 && (stru_B76AC4.health & 0x100) != 0 ) /*0x7a7d47*/
      *(unsigned int *)DataGlobal_B779C4 = 2; /*0x7a7d49*/
    v13 = ((String *)((String *)&g_WebBrowser))->GetOrEmpty(); /*0x7a7d59*/
    v14 = g_WOL_UserList.owningHouseIndex; /*0x7a7d66*/
    strcpy((char *)&g_WebBrowserConfig.location[2], v13); /*0x7a7d77*/
    if ( v14 > 0 && g_WOL_UserList.nextObject ) /*0x7a7d8b*/
      strcpy(byte_B779E0, (const char *)&g_WOL_UserList.nextObject->occupant); /*0x7a7da7*/
    *(unsigned int *)dword_B77788 = time(0); /*0x7a7dbc*/
    Debug::Log(); /*0x7a7dc1*/
    if ( a3 ) /*0x7a7dd2*/
      dword_B77DD4 = (uint8_t)*(unsigned int *)(a3 + 32); /*0x7a7ddd*/
    byte_B77E26 = 0; /*0x7a7dea*/
    byte_B77E27 = 1; /*0x7a7df1*/
    Network::SyncPlayerList(v17); /*0x7a7df8*/
    g_NetworkLobbyState = 2; /*0x7a7e03*/
    Debug::Log(); /*0x7a7e0f*/
    v15 = 0; /*0x7a7e1d*/
    if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x7a7e21*/
    {
      nextObject = g_WOL_UserList.nextObject; /*0x7a7e23*/
      while ( 1 ) /*0x7a7e29*/
      {
        if ( v15 >= 0 && v15 < g_WOL_UserList.owningHouseIndex ) /*0x7a7e2f*/
          memcpy(&g_WebBrowserConfig.occupant, nextObject, 0x6Cu); /*0x7a7e3d*/
        if ( (g_WebBrowserConfig.occupant & 1) != 0 ) /*0x7a7e46*/
          break; /*0x7a7e46*/
        ++v15; /*0x7a7e48*/
        nextObject = (ObjectClass *)((char *)nextObject + 108); /*0x7a7e49*/
        if ( v15 >= g_WOL_UserList.owningHouseIndex ) /*0x7a7e4e*/
          goto LABEL_41; /*0x7a7e4e*/
      }
      if ( &g_WebBrowserConfig != (int *)((ObjectClass *))-36 ) /*0x7a7e59*/
        BulkCharToWide(word_A8E258, (uint8_t *)&g_WebBrowserConfig.ambientSoundController[3], -1); /*0x7a7e67*/
    }
  LABEL_41:
    dword_A8E2AC = -1; /*0x7a7e6c*/
    dword_A8E04C = CComObject_CChatEventSink___ATL::DispatchConnectionPairs(&stru_A8DBC0.onBridge); /*0x7a7e82*/
    return 0; /*0x7a7e88*/
  }
  else
  {
    byte_B77DEC = 0; /*0x7a7ca6*/
    g_NetworkLobbyState = 0; /*0x7a7cad*/
    return 0; /*0x7a7cb7*/
  }
}
}
// 0x7A7EA0
namespace gamemd {
Coord * * CComObject_CChatEventSink___ATL::DispatchStub_22(int a1, int a2, int a3, int a4, char * Source)
{

  DeleteAndZero v23; // [esp+8h] [ebp-B8h] BYREF
  int Buffer[16]; // [esp+14h] [ebp-ACh] BYREF

  if ( (byte_B78600 & 1) == 0 ) /*0x7a7ead*/
  {
    byte_B78600 |= 1u; /*0x7a7eb9*/
    dword_B78608 = Timer::GetTicks(); /*0x7a7ec9*/
    atexit(nullsub_265); /*0x7a7ece*/
  }
  if ( a2 < 0 ) /*0x7a7ee3*/
    return 0; /*0x7a7ee3*/
  char *v6; // esi
  v6 = _strdup(Source); /*0x7a7ef6*/
  bool v7; // bl
  v7 = SetupNetworkLobbyDialog(v6, (void *)(a4 + 36)); /*0x7a7f0d*/
  free(v6); /*0x7a7f0f*/
  if ( BYTE1(DataGlobal_B77DC0) ) /*0x7a7f1e*/
    return 0; /*0x7a7f1e*/
  if ( g_NetworkLobbyState ) /*0x7a7f2b*/
    return 0; /*0x7a7f2b*/
  if ( *Source == 90 ) /*0x7a7f35*/
    return 0; /*0x7a7f35*/
  if ( *Source == 87 ) /*0x7a7f3d*/
    return 0; /*0x7a7f3d*/
  char v22; // [esp+7h] [ebp-B9h]
  v22 = 0; /*0x7a7f43*/
  char *Flagged; // esi
  Flagged = GameSettings::FindFlagged(); /*0x7a7f4d*/
  if ( Flagged ) /*0x7a7f51*/
  {
  char *v9; // eax
    v9 = ((String *)&g_WebBrowser)->GetOrEmpty_Alt(); /*0x7a7f58*/
    if ( !_strcmpi(Flagged + 36, v9) ) /*0x7a7f62*/
      return 0; /*0x7a7f6c*/
  }
  if ( dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2 ) /*0x7a7f84*/
  {
    CharStringToWide((wchar_t **)&v23, (const char **)&g_WebBrowser); /*0x7a7f93*/
  wchar_t *v10; // eax
    v10 = (wchar_t *)(((wchar_t **)&v23)->GetOrEmpty()); /*0x7a7f9c*/
  int *v11; // eax
    v11 = (int *)Player::FindByName((Player *)v10); /*0x7a7fa3*/
  SessionClass *v12; // esi
    v12 = (SessionClass *)v11; /*0x7a7fa8*/
    if ( v11 /*0x7a7fed*/
      && (v11)->GetPlayerSide() >= 0
      && (v12)->GetPlayerColor() >= 0
      && *Source >= 48
      && *Source <= 57
      && g_WOL_UserList.owningHouseIndex == 2 )
    {
      (*(void (**)(LPVOID, char *))(*(unsigned int *)ppv + 60))(ppv, g_INI_Key_A1); /*0x7a7ffc*/
    }
    (&v23)->Alt(); /*0x7a8003*/
    return 0; /*0x7a8014*/
  }
  HWND Current; // ebp
  Current = (HWND)Dialog::GetCurrent(); /*0x7a801c*/
  if ( !g_UIControlState ) /*0x7a8025*/
  {
    if ( v7 ) /*0x7a802d*/
    {
      v22 = 1; /*0x7a8033*/
      dword_B78608 = Timer::GetTicks(); /*0x7a8046*/
      dword_B7860C = v23.q004; /*0x7a804b*/
      Debug::Log(); /*0x7a8051*/
    }
    if ( Timer::GetTicks() - dword_B78608 > 900 ) /*0x7a806e*/
    {
  Skirmish *v15; // eax
      v15 = (gamemd::Skirmish *)(g_UIControlState); /*0x7a8070*/
      if ( (!g_UIControlState || !*(unsigned int *)g_UIControlState) && !byte_B77E2C ) /*0x7a8085*/
      {
        if ( !byte_A8B8E0[0] /*0x7a80a8*/
          || (LOBYTE(v15) = dword_A8BB08, FindAndValidateMap(byte_A8B8E0, dword_A8BB04, &byte_A8BAE2, (int)v15, 0)) )
        {
          dword_B78608 = Timer::GetTicks(); /*0x7a80d2*/
          dword_B7860C = v23.q004; /*0x7a80d7*/
        }
        else
        {
          v22 = 1; /*0x7a80b6*/
          Debug::Log(); /*0x7a80bb*/
        }
      }
    }
    if ( !(unsigned __int8)((IsRandMap *)&dword_A8B238)->Sed2() ) /*0x7a80e2*/
    {
  int v16; // edx
      LOBYTE(v16) = dword_A8BB08; /*0x7a80ef*/
  bool v17; // bl
      if ( !FindAndValidateMap(byte_A8B8E0, dword_A8BB04, &byte_A8BAE2, v16, 0) /*0x7a813d*/
        || (RawFileClass::Construct((RawFileClass *)Buffer, (int)byte_A8B8E0),
            v17 = (unsigned __int8)((RawFileClass *)Buffer)->Open(0) != 0,
            ((RawFileClass *)Buffer)->Dtor(),
            v17) )
      {
        if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x7a814c*/
        {
          if ( stru_B76AC4.customSound_controller[4] /*0x7a8165*/
            || (HIBYTE(v23.u32_8) = BYTE1(stru_B76AC4.health) & 1, (stru_B76AC4.health & 0x100) != 0) )
          {
            if ( *(unsigned int *)(*dword_A8DA78 + 119) ) /*0x7a816f*/
            {
              *(unsigned int *)(*dword_A8DA78 + 119) = 0; /*0x7a817b*/
              Network::SendOptionsGame(aA0); /*0x7a8182*/
  HWND DlgItem; // eax
              DlgItem = GetDlgItem(Current, 1439); /*0x7a818f*/
              EnableWindow(DlgItem, 0); /*0x7a8196*/
            }
          }
        }
      }
      else
      {
        v22 = 0; /*0x7a813f*/
      }
      if ( Dialog::GetCurrentType() == 201 ) /*0x7a81a6*/
      {
  HWND v19; // eax
        v19 = (HWND)Dialog::GetCurrent(); /*0x7a81ac*/
        InvalidateRect(v19, 0, 0); /*0x7a81b2*/
      }
    }
    if ( v22 ) /*0x7a81be*/
    {
      sprintf((char *const)Buffer, "P%s", byte_A8B8E0); /*0x7a81cf*/
  unsigned char v25[108]; // [esp+54h] [ebp-6Ch] BYREF
      if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x7a81de*/
        memcpy(v25, g_WOL_UserList.nextObject, sizeof(v25)); /*0x7a81ef*/
      (*(void (**)(LPVOID, unsigned char *, int *))(*(unsigned int *)ppv + 56))(ppv, v25, Buffer); /*0x7a8203*/
      Debug::Log(); /*0x7a820b*/
  ObjectClass *v5; // edi
      Event_Play(v5); /*0x7a8213*/
    }
    return 0; /*0x7a8224*/
  }
  HWND v20; // eax
  v20 = GetDlgItem(Current, 1823); /*0x7a8233*/
  if ( v20 ) /*0x7a823d*/
    ShowWindow(v20, 0); /*0x7a8242*/
  HWND v21; // eax
  v21 = GetDlgItem(Current, 1128); /*0x7a824c*/
  ShowWindow(v21, 1); /*0x7a824f*/
  return 0; /*0x7a7fbd*/

}
}
// 0x7A8DA0
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_16(int a1, int a2, int a3, const char * a4, char * String1)
{

  bool v8; // bl

  if ( !BYTE1(DataGlobal_B77DC0) && a2 >= 0 ) /*0x7a8db5*/
  {
    if ( dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2 ) /*0x7a8dcd*/
    {
      if ( (*a4 & 1) != 0 ) /*0x7a8dd6*/
      {
        HandleWOLMatchMessage(String1, 0); /*0x7a8de2*/
        return 0; /*0x7a8deb*/
      }
    }
    else
    {
  char *v6; // edi
      v6 = String1; /*0x7a8dee*/
      ((String *)&String1)->Assign(String1); /*0x7a8df8*/
  const char *v7; // esi
      v7 = a4; /*0x7a8dfd*/
      if ( a4 ) /*0x7a8e03*/
      {
        if ( (*a4 & 1) != 0 ) /*0x7a8e0c*/
        {
          v8 = 1; /*0x7a8e0e*/
        }
        else if ( ((Dialog *)0xC2)->FindByHandle() ) /*0x7a8e17*/
        {
          v8 = 1; /*0x7a8e20*/
        }
        else if ( ((Dialog *)0xC9)->FindByHandle() ) /*0x7a8e29*/
        {
          v8 = 1; /*0x7a8e32*/
        }
        else
        {
          v8 = DataGlobal_B779C0 != 0; /*0x7a8e3d*/
        }
      }
      else
      {
        v8 = 0; /*0x7a8e05*/
      }
      DeleteAndZero((ObjectClass *)&String1); /*0x7a8e44*/
      if ( v8 && IsBuddyOrIgnoreWOL(v7) ) /*0x7a8e50*/
      {
        ((String *)&String1)->Assign(v6); /*0x7a8e5e*/
        CharStringToWide((wchar_t **)&a2, (const char **)&String1); /*0x7a8e6b*/
        DeleteAndZero((ObjectClass *)&String1); /*0x7a8e74*/
  int v9; // edi
        v9 = 61680; /*0x7a8e7b*/
        if ( (*v7 & 1) != 0 ) /*0x7a8e83*/
          v9 = 16776960; /*0x7a8e85*/
  char *v10; // esi
        v10 = (char *)(v7 + 36); /*0x7a8e8b*/
        if ( _strcmpi(unk_A8B380, v10) ) /*0x7a8e94*/
        {
  wchar_t *v11; // eax
          v11 = (wchar_t *)(((wchar_t **)&a2)->GetOrEmpty()); /*0x7a8ea4*/
          Dialog::ShowMessage(v9, (size_t)aHsS_1, v10, v11); /*0x7a8eb1*/
        }
        ((DeleteAndZero *)&a2)->Alt(); /*0x7a8ebd*/
      }
    }
  }
  return 0; /*0x7a8de7*/

}
}
// 0x7A8ED0
namespace gamemd {
AbstractClass * * CComObject_CChatEventSink___ATL::DispatchStub_40(int a1, int a2, int a3, const char * a4, wchar_t * String)
{

  const char *v6; // esi
  bool v7; // zf
  void *DynamicVector_field_0x10; // eax
  int v9; // edi
  char *v10; // esi
  wchar_t *v11; // eax

  if ( BYTE1(DataGlobal_B77DC0) ) /*0x7a8ed8*/
    return 0; /*0x7a8eda*/
  if ( a2 < 0 ) /*0x7a8ee6*/
    return 0; /*0x7a8ee8*/
  ((wchar_t **)&a2)->Assign(String); /*0x7a8ef7*/
  v6 = a4; /*0x7a8efc*/
  if ( a4 ) /*0x7a8f02*/
  {
    if ( (*a4 & 1) != 0 || ((Dialog *)0xC2)->FindByHandle() || ((Dialog *)0xC9)->FindByHandle() ) /*0x7a8f1c*/
      goto LABEL_21; /*0x7a8f1c*/
    v7 = (unsigned __int8)((const wchar_t **)&a2)->IsASCII() == 0; /*0x7a8f2e*/
    DynamicVector_field_0x10 = (void *)(DataGlobal_B779C0); /*0x7a8f30*/
    if ( v7 ) /*0x7a8f35*/
      DynamicVector_field_0x10 = (void *)dword_B779DC; /*0x7a8f37*/
    if ( DynamicVector_field_0x10 ) /*0x7a8f43*/
    {
LABEL_21:
      if ( IsBuddyOrIgnoreWOL(v6) ) /*0x7a8f56*/
      {
        v9 = 61680; /*0x7a8f71*/
        if ( (*v6 & 1) != 0 ) /*0x7a8f79*/
          v9 = 16776960; /*0x7a8f7b*/
        v10 = (char *)(v6 + 36); /*0x7a8f81*/
        if ( _strcmpi(unk_A8B380, v10) ) /*0x7a8f8a*/
        {
          v11 = (wchar_t *)(((wchar_t **)&a2)->GetOrEmpty()); /*0x7a8f9a*/
          Dialog::ShowMessage(v9, (size_t)aHsS_1, v10, v11); /*0x7a8fa7*/
        }
      }
    }
  }
  ((DeleteAndZero *)&a2)->Alt(); /*0x7a8fb3*/
  return 0; /*0x7a8edc*/

}
}
// 0x7A8FC0
namespace gamemd {
AbstractClass * * CComObject_CChatEventSink___ATL::DispatchStub_17(int a1, int a2, const char *a3)
{

  bool v7; // bl

  if ( BYTE1(DataGlobal_B77DC0) || a2 < 0 ) /*0x7a8fd5*/
    return 0; /*0x7a90fc*/
  if ( dword_A8B244 != 3 && dword_A8B244 != 1 && dword_A8B244 != 2 ) /*0x7a8fed*/
  {
  char *v5; // edi
    v5 = String1; /*0x7a9027*/
    ((String *)&String1)->Assign(String1); /*0x7a9031*/
  const char *v6; // esi
    v6 = a3; /*0x7a9036*/
    if ( a3 ) /*0x7a903c*/
    {
      if ( (*a3 & 1) != 0 ) /*0x7a9045*/
      {
        v7 = 1; /*0x7a9047*/
      }
      else if ( ((Dialog *)0xC2)->FindByHandle() ) /*0x7a9050*/
      {
        v7 = 1; /*0x7a9059*/
      }
      else if ( ((Dialog *)0xC9)->FindByHandle() ) /*0x7a9062*/
      {
        v7 = 1; /*0x7a906b*/
      }
      else
      {
        v7 = DataGlobal_B779C0 != 0; /*0x7a9076*/
      }
    }
    else
    {
      v7 = 0; /*0x7a903e*/
    }
    DeleteAndZero((ObjectClass *)&String1); /*0x7a907d*/
    if ( v7 && IsBuddyOrIgnoreWOL(v6) ) /*0x7a9089*/
    {
      ((String *)&String1)->Assign(v5); /*0x7a9097*/
      CharStringToWide((wchar_t **)&a2, (const char **)&String1); /*0x7a90a4*/
      DeleteAndZero((ObjectClass *)&String1); /*0x7a90ad*/
  int v8; // edi
      v8 = 16744576; /*0x7a90b4*/
      if ( (*v6 & 1) != 0 ) /*0x7a90bc*/
        v8 = 16776960; /*0x7a90be*/
  char *v9; // esi
      v9 = (char *)(v6 + 36); /*0x7a90c4*/
      if ( _strcmpi(unk_A8B380, v9) ) /*0x7a90cd*/
      {
  wchar_t *v10; // eax
        v10 = ((wchar_t **)&a2)->GetOrEmpty(); /*0x7a90dd*/
        Dialog::ShowMessage(v8, (size_t)aHsS_2, v9, v10); /*0x7a90ea*/
      }
      ((DeleteAndZero *)&a2)->Alt(); /*0x7a90f6*/
    }
    return 0; /*0x7a90f6*/
  }
  if ( (*a3 & 1) != 0 ) /*0x7a8ff6*/
    HandleWOLMatchMessage(String1, 1); /*0x7a8ffe*/
  else
    Debug::Log(); /*0x7a9018*/
  return 0; /*0x7a9003*/

}
}
// 0x7A9110
namespace gamemd {
AbstractClass * * CComObject_CChatEventSink___ATL::DispatchStub_41(int a1, int a2, const char * a3, wchar_t * String)
{
  const char *v5; // esi
  bool v6; // zf
  void *DynamicVector_field_0x10; // eax
  int v8; // edi
  char *v9; // esi
  wchar_t *v10; // eax

  if ( (((unsigned char *)&(DataGlobal_B77DC0))[1]) ) /*0x7a9118*/
    return 0; /*0x7a911a*/
  if ( a2 < 0 ) /*0x7a9126*/
    return 0; /*0x7a9128*/
  ((WideString *)((wchar_t **)&a2))->Assign(String); /*0x7a9137*/
  v5 = a3; /*0x7a913c*/
  if ( a3 ) /*0x7a9142*/
  {
    if ( (*a3 & 1) != 0 || ((Dialog *)0xC2)->FindByHandle() || ((Dialog *)0xC9)->FindByHandle() ) /*0x7a915c*/
      goto LABEL_21; /*0x7a915c*/
    v6 = (uint8_t)((const wchar_t **)&a2)->IsASCII() == 0; /*0x7a916e*/
    DynamicVector_field_0x10 = DataGlobal_B779C0; /*0x7a9170*/
    if ( v6 ) /*0x7a9175*/
      DynamicVector_field_0x10 = (void *)dword_B779DC; /*0x7a9177*/
    if ( DynamicVector_field_0x10 ) /*0x7a9183*/
    {
  LABEL_21:
      if ( IsBuddyOrIgnoreWOL((char *)(v5)) ) /*0x7a9196*/
      {
        v8 = 16744576; /*0x7a91b1*/
        if ( (*v5 & 1) != 0 ) /*0x7a91b9*/
          v8 = 16776960; /*0x7a91bb*/
        v9 = (char *)(v5 + 36); /*0x7a91c1*/
        if ( _strcmpi(unk_A8B380, v9) ) /*0x7a91ca*/
        {
          v10 = ((WideString *)((wchar_t **)&a2))->GetOrEmpty(); /*0x7a91da*/
          Dialog::ShowMessage(v8, (size_t)aHsS_2, v9, v10); /*0x7a91e7*/
        }
      }
    }
  }
  ((DeleteAndZero *)&a2)->Alt(); /*0x7a91f3*/
  return 0; /*0x7a911c*/
}
}
// 0x7A9200
namespace gamemd {
CampaignScore * * CComObject_CChatEventSink___ATL::DispatchStub_28(int a1, int a2, const char * a3, const char * a4)
{
  bool v5; // zf
  void *DynamicVector_field_0x10; // eax
  char v7; // al
  wchar_t *v8; // eax
  int Type; // esi
  int v10; // eax
  int v11; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v13; // eax
  Dialog *Current; // esi
  wchar_t *v15; // eax
  wchar_t *v16; // eax
  HWND Dialog; // eax
  wchar_t *v18; // eax
  HWND DlgItem; // eax
  String *ChatCommand; // ebx
  HWND v21; // esi
  char *v22; // eax
  int v23; // esi
  wchar_t *v24; // eax
  int v25; // [esp-Ch] [ebp-22Ch]
  DeleteAndZero v26; // [esp+Ch] [ebp-214h] BYREF
  int v27; // [esp+18h] [ebp-208h]
  wchar_t v28[256]; // [esp+20h] [ebp-200h] BYREF

  if ( a2 < 0 ) /*0x7a920d*/
    return 0; /*0x7a920f*/
  ((String *)((String *)&v26.q004))->Assign(a4); /*0x7a9227*/
  CharStringToWide((wchar_t **)&v26, (const char **)&v26.q004); /*0x7a9234*/
  DeleteAndZero((ObjectClass *)&v26.q004); /*0x7a923d*/
  if ( !a3 ) /*0x7a924b*/
    goto LABEL_12; /*0x7a924b*/
  if ( (*a3 & 1) == 0 && !Dialog::FindByHandle((Dialog *)0xC2) && !Dialog::FindByHandle((Dialog *)0xC9) ) /*0x7a9266*/
  {
    v5 = (uint8_t)((const wchar_t **)&v26)->IsASCII() == 0; /*0x7a9278*/
    DynamicVector_field_0x10 = DataGlobal_B779C0; /*0x7a927a*/
    if ( v5 ) /*0x7a927f*/
      DynamicVector_field_0x10 = (void *)dword_B779DC; /*0x7a9281*/
    if ( !DynamicVector_field_0x10 ) /*0x7a928d*/
      goto LABEL_12; /*0x7a928d*/
  }
  if ( IsBuddyOrIgnoreWOL(a3) ) /*0x7a92a6*/
  {
    v7 = (((unsigned char *)&(DataGlobal_B77DC0))[1]); /*0x7a92d7*/
    strcpy(byte_B77E30, a3 + 36); /*0x7a92e8*/
    if ( v7 ) /*0x7a92f3*/
    {
      v8 = ((WideString *)((wchar_t **)&v26))->GetOrEmpty(); /*0x7a92fd*/
      swprintf(v28, (const size_t)g_Str_Trace___hs_, (const wchar_t *const)a3 + 18, v8); /*0x7a930e*/
      Type = BuildingAnim::GetType(); /*0x7a9321*/
      (*((unsigned short *)&(v10))) = Math::RoundToInt(*(double *)(*(unsigned int *)&g_RulesClass_Instance + 5312) * 900.0); /*0x7a9331*/
      MessageListClass::AddMessage((MessageListClass *)&g_GameNetworkObject, 0, 0, v28, Type, 22, v10, 0); /*0x7a9348*/
      (*((unsigned short *)&(v11))) = Math::RoundToInt(*(double *)(*(unsigned int *)&g_RulesClass_Instance + 5312) * 900.0); /*0x7a9360*/
      v25 = v11; /*0x7a9365*/
      StringCSF = GetStringCSF(aTxtHowToReply, 0, g_Str_File_wonline_cpp, 8066); /*0x7a937a*/
      MessageListClass::AddMessage((MessageListClass *)&g_GameNetworkObject, 0, 0, StringCSF, Type, 22, v25, 0); /*0x7a9389*/
      MapClass::MarkForRedraw((GScreenClass *)&DataGlobal_87F7E8, 0); /*0x7a9395*/
      v13 = ((WideString *)((wchar_t **)&v26))->GetOrEmpty(); /*0x7a939e*/
      Dialog::ShowStatusText(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, v13); /*0x7a93b1*/
      dword_B76478 = TimerGetTicks(); /*0x7a93cb*/
      dword_B7647C = v27; /*0x7a93d0*/
      dword_B76480 = 300; /*0x7a93d6*/
    }
    else
    {
      Current = (Dialog *)Dialog::GetCurrent(); /*0x7a93ec*/
      if ( Current ) /*0x7a93f0*/
      {
        while ( !GetDlgItem((HWND)Current, 1343) ) /*0x7a93fc*/
        {
          if ( GetDlgItem((HWND)Current, 1461) ) /*0x7a9404*/
          {
            v15 = ((WideString *)((wchar_t **)&v26))->GetOrEmpty(); /*0x7a940e*/
            Dialog::ShowStatusText(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, v15); /*0x7a9420*/
          }
          Current = (Dialog *)Dialog::FindByPtr(Current); /*0x7a942f*/
          if ( !Current ) /*0x7a9433*/
            goto LABEL_22; /*0x7a9433*/
        }
        v16 = ((WideString *)((wchar_t **)&v26))->GetOrEmpty(); /*0x7a943b*/
        Dialog::ShowMessage(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, v16); /*0x7a944e*/
      }
      else
      {
  LABEL_22:
        ReleaseCapture(); /*0x7a945a*/
        Screen::Capture(1, 0, (int)(a3 + 36), (int)a3); /*0x7a9464*/
        Dialog = (HWND)CreateDialog(0x11Eu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))ChatDialog::DlgProc, 0); /*0x7a9475*/
        Current = (Dialog *)Dialog; /*0x7a947a*/
        if ( Dialog ) /*0x7a947e*/
        {
          SetFocus(Dialog); /*0x7a9481*/
          v18 = ((WideString *)((wchar_t **)&v26))->GetOrEmpty(); /*0x7a948b*/
          Dialog::ShowMessage(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, v18); /*0x7a949e*/
          ShowWindow((HWND)Current, 1); /*0x7a94a9*/
        }
      }
      DlgItem = GetDlgItem((HWND)Current, 1343); /*0x7a94b5*/
      ChatCommand = ExtractChatCommand((String *)&v26.q004, DlgItem); /*0x7a94c8*/
      v21 = GetDlgItem((HWND)Current, 1816); /*0x7a94ce*/
      v22 = ((String *)(ChatCommand))->GetOrEmpty_Alt(); /*0x7a94d0*/
      SendMessageA(v21, 0x4B4u, 0, (LPARAM)v22); /*0x7a94de*/
      DeleteAndZero((ObjectClass *)&v26.q004); /*0x7a94e8*/
    }
    if ( byte_B77E40 ) /*0x7a94f4*/
    {
      v23 = *(unsigned int *)ppv; /*0x7a9500*/
      v24 = ((WideString *)((wchar_t **)&stru_B7622C.vfptr1))->GetOrEmpty(); /*0x7a9502*/
      (*(void (__stdcall **)(LPVOID, const char *, wchar_t *))(v23 + 236))(ppv, a3, v24); /*0x7a9510*/
    }
    PlayVocClass(*(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 1708), 0x2000, 1.0, 0); /*0x7a952d*/
    DeleteAndZero::Alt(&v26); /*0x7a9536*/
    return 0; /*0x7a953e*/
  }
  else
  {
  LABEL_12:
    DeleteAndZero::Alt(&v26); /*0x7a92b3*/
    return 0; /*0x7a92b8*/
  }
}
}
// 0x7A9550
namespace gamemd {
AbstractClass * * CComObject_CChatEventSink___ATL::DispatchStub_44(int a1, int a2, int a3, wchar_t * String)
{
  int v5; // edi
  bool v6; // bl
  bool v7; // zf
  void *DynamicVector_field_0x10; // eax
  int Type; // ebx
  int v10; // eax
  Dialog *Current; // esi
  HWND DlgItem; // eax
  String *ChatCommand; // ebx
  HWND v14; // esi
  char *v15; // eax
  int v16; // esi
  wchar_t *v17; // eax
  ObjectClass v18[3]; // [esp+Ch] [ebp-204h] BYREF

  if ( a2 < 0 ) /*0x7a955f*/
    return 0; /*0x7a9563*/
  ((WideString *)((wchar_t **)v18))->Assign(String); /*0x7a957b*/
  v5 = a3; /*0x7a9580*/
  if ( a3 ) /*0x7a9589*/
  {
    if ( (*(unsigned char *)a3 & 1) != 0 ) /*0x7a9592*/
    {
      v6 = 1; /*0x7a9594*/
    }
    else if ( Dialog::FindByHandle((Dialog *)0xC2) ) /*0x7a959d*/
    {
      v6 = 1; /*0x7a95a6*/
    }
    else if ( Dialog::FindByHandle((Dialog *)0xC9) ) /*0x7a95af*/
    {
      v6 = 1; /*0x7a95b8*/
    }
    else
    {
      v7 = (uint8_t)WideString::IsASCII((const wchar_t **)v18) == 0; /*0x7a95c5*/
      DynamicVector_field_0x10 = DataGlobal_B779C0; /*0x7a95c7*/
      if ( v7 ) /*0x7a95cc*/
        DynamicVector_field_0x10 = (void *)dword_B779DC; /*0x7a95ce*/
      v6 = DynamicVector_field_0x10 != 0; /*0x7a95d5*/
    }
  }
  else
  {
    v6 = 0; /*0x7a958b*/
  }
  DeleteAndZero::Alt((DeleteAndZero *)v18); /*0x7a95dc*/
  if ( !v6 ) /*0x7a95e3*/
    return 0; /*0x7a95e7*/
  if ( !IsBuddyOrIgnoreWOL((const char *)a3) ) /*0x7a95f5*/
    return 0; /*0x7a9600*/
  if ( (((unsigned char *)&(DataGlobal_B77DC0))[1]) ) /*0x7a9614*/
  {
    swprintf((wchar_t *const)&v18[0].vfptr1, (const size_t)g_Str_Trace___hs_, (const wchar_t *const)(a3 + 36), String); /*0x7a9625*/
    Type = BuildingAnim::GetType(); /*0x7a9638*/
    (*((unsigned short *)&(v10))) = Math::RoundToInt(*(double *)(*(unsigned int *)&g_RulesClass_Instance + 5312) * 900.0); /*0x7a9648*/
    MessageListClass::AddMessage( /*0x7a965f*/
      (MessageListClass *)&g_GameNetworkObject,
      0,
      0,
      (wchar_t *)&v18[0].vfptr1,
      Type,
      22,
      v10,
      0);
    MapClass::MarkForRedraw((GScreenClass *)&DataGlobal_87F7E8, 0); /*0x7a966b*/
    Dialog::ShowStatusText(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, String); /*0x7a967d*/
  }
  else
  {
    Current = (Dialog *)Dialog::GetCurrent(); /*0x7a9695*/
    if ( Current ) /*0x7a9699*/
    {
      while ( !GetDlgItem((HWND)Current, 1343) ) /*0x7a96a5*/
      {
        if ( GetDlgItem((HWND)Current, 1461) ) /*0x7a96ad*/
          Dialog::ShowStatusText(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, String); /*0x7a96cb*/
        Current = (Dialog *)Dialog::FindByPtr(Current); /*0x7a96da*/
        if ( !Current ) /*0x7a96de*/
          goto LABEL_27; /*0x7a96de*/
      }
      Dialog::ShowMessage(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, String); /*0x7a96fa*/
    }
    else
    {
  LABEL_27:
      ReleaseCapture(); /*0x7a9706*/
      Screen::Capture(1, 0, v6, (int)String); /*0x7a9710*/
      Current = (Dialog *)CreateDialog( /*0x7a9726*/
                            0x11Eu,
                            (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))ChatDialog::DlgProc,
                            0);
      SetFocus((HWND)Current); /*0x7a9729*/
      Dialog::ShowMessage(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, String); /*0x7a9746*/
      ShowWindow((HWND)Current, 1); /*0x7a9751*/
    }
    DlgItem = GetDlgItem((HWND)Current, 1343); /*0x7a975d*/
    ChatCommand = ExtractChatCommand((String *)v18, DlgItem); /*0x7a9770*/
    v14 = GetDlgItem((HWND)Current, 1816); /*0x7a9776*/
    v15 = ((String *)(ChatCommand))->GetOrEmpty_Alt(); /*0x7a9778*/
    SendMessageA(v14, 0x4B4u, 0, (LPARAM)v15); /*0x7a9786*/
    DeleteAndZero(v18); /*0x7a9790*/
    v5 = a3; /*0x7a9795*/
  }
  if ( byte_B77E40 ) /*0x7a97a3*/
  {
    v16 = *(unsigned int *)ppv; /*0x7a97ab*/
    v17 = ((WideString *)((wchar_t **)&stru_B7622C.vfptr1))->GetOrEmpty(); /*0x7a97b2*/
    (*(void (__stdcall **)(LPVOID, int, wchar_t *))(v16 + 236))(ppv, v5, v17); /*0x7a97c0*/
  }
  PlayVocClass(*(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 1708), 0x2000, 1.0, 0); /*0x7a97dd*/
  return 0; /*0x7a9561*/
}
}
// 0x7A9800
namespace gamemd {
ObjectClass * * CComObject_CChatEventSink___ATL::DispatchStub_27(int a1, int a2)
{
  wchar_t *StringCSF; // eax
  HWND Current; // eax
  HWND v5; // esi
  int Type; // esi
  int v7; // eax
  wchar_t *v8; // [esp-4h] [ebp-10Ch]
  wchar_t *v9; // [esp-4h] [ebp-10Ch]
  const wchar_t *v10; // [esp+0h] [ebp-108h]
  wchar_t Buffer[128]; // [esp+8h] [ebp-100h] BYREF

  if ( !a2 ) /*0x7a980e*/
  {
    StringCSF = GetStringCSF(aTxtPagesent, 0, g_Str_File_wonline_cpp, 8189); /*0x7a9821*/
    Dialog::ShowStatusText(-1, (size_t)StringCSF); /*0x7a982d*/
    return 0; /*0x7a983f*/
  }
  if ( a2 == 262452 ) /*0x7a9847*/
  {
    v8 = GetStringCSF(aTxtPagedisable, 0, g_Str_File_wonline_cpp, 8193); /*0x7a9863*/
    swprintf(Buffer, (const size_t)v8, v10); /*0x7a9865*/
  }
  else
  {
    if ( a2 == 262451 ) /*0x7a986c*/
      v9 = GetStringCSF(aTxtPageusergon, 0, g_Str_File_wonline_cpp, 8195); /*0x7a9888*/
    else
      v9 = GetStringCSF(aTxtPagefailed, 0, g_Str_File_wonline_cpp, 8197); /*0x7a98a2*/
    swprintf(Buffer, (const size_t)v9, v10); /*0x7a988a*/
  }
  Current = (HWND)Dialog::GetCurrent(); /*0x7a98b0*/
  v5 = Current; /*0x7a98b5*/
  if ( !Current ) /*0x7a98b9*/
    goto LABEL_19; /*0x7a98b9*/
  if ( GetDlgItem(Current, 1343) ) /*0x7a98c7*/
  {
    Dialog::ShowMessage(-1, (size_t)Buffer); /*0x7a98d9*/
    return 0; /*0x7a98eb*/
  }
  if ( GetDlgItem(v5, 1461) ) /*0x7a98f4*/
  {
    Dialog::ShowStatusText(-1, (size_t)Buffer); /*0x7a9906*/
    return 0; /*0x7a990e*/
  }
  else
  {
  LABEL_19:
    if ( (uint8_t)SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238) ) /*0x7a9920*/
    {
      Type = BuildingAnim::GetType(); /*0x7a9934*/
      (*((unsigned short *)&(v7))) = Math::RoundToInt(*(double *)(*(unsigned int *)&g_RulesClass_Instance + 5312) * 900.0); /*0x7a9944*/
      MessageListClass::AddMessage((MessageListClass *)&g_GameNetworkObject, 0, 0, Buffer, Type, 22, v7, 0); /*0x7a995b*/
    }
    return 0; /*0x7a9961*/
  }
}
}
// 0x7AA6D0
namespace gamemd {
int CComObject_CChatEventSink___ATL_DispatchStub_19(int a2, int a3)
{

  if ( (*((unsigned char *)&(DataGlobal_B77DC0))) ) /*0x7aa6dd*/
  {
    SetEvent(dword_B736A8); /*0x7aa6e5*/
    dword_B77DE8 = a2; /*0x7aa6f4*/
    return 0; /*0x7aa700*/
  }
  if ( a2 == 262447 ) /*0x7aa710*/
  {
    if ( (((unsigned char *)&(DataGlobal_B77DC0))[1]) ) /*0x7aa71d*/
    {
      if ( !(((unsigned char *)&(DataGlobal_B77DC0))[2]) ) /*0x7aa72a*/
      {
  wchar_t Buffer[256]; // [esp+0h] [ebp-200h] BYREF
        Buffer[0] = 0; /*0x7aa742*/
  wchar_t *StringCSF; // eax
        StringCSF = GetStringCSF(aTxtWolConnlost, 0, g_Str_File_wonline_cpp, 8460); /*0x7aa749*/
  const wchar_t *v3; // esi
        swprintf(Buffer, (const size_t)StringCSF, v3); /*0x7aa754*/
  int Type; // esi
        Type = BuildingAnim::GetType(); /*0x7aa761*/
  int v7; // eax
        (*((unsigned short *)&(v7))) = Math::RoundToInt(*(double *)(*(unsigned int *)&g_RulesClass_Instance + 5312) * 900.0); /*0x7aa776*/
        MessageListClass::AddMessage((MessageListClass *)&g_GameNetworkObject, 0, 0, Buffer, Type, 22, v7, 0); /*0x7aa78d*/
        MapClass::MarkForRedraw((GScreenClass *)&DataGlobal_87F7E8, 0); /*0x7aa799*/
        memset(&stru_B76AC4.ambientSoundController[4], 0, 0x10Cu); /*0x7aa7af*/
        memset(&DataGlobal_B73BE8, 0, 0x10Cu); /*0x7aa7bb*/
        (((unsigned char *)&(DataGlobal_B77DC0))[2]) = 1; /*0x7aa7bd*/
        g_WOL_ChannelState = 0; /*0x7aa7c4*/
        Debug::Log(); /*0x7aa7ce*/
        return 0; /*0x7aa7e0*/
      }
    }
    else
    {
      if ( Dialog::FindByHandle((Dialog *)0x113) ) /*0x7aa7e8*/
      {
  wchar_t *v8; // eax
        v8 = GetStringCSF(aTxtYoureDiscon, 0, g_Str_File_wonline_cpp, 8478); /*0x7aa809*/
        ShowDialogConfirm(v8, 0, (uint8_t (*)(void))GameLoop::Thunk, 0); /*0x7aa812*/
      }
      (*((unsigned char *)&(DataGlobal_B77DC0))) = 1; /*0x7aa820*/
      (((unsigned char *)&(DataGlobal_B77DC0))[2]) = 1; /*0x7aa825*/
      SetEvent(Handles); /*0x7aa82a*/
      memset(&stru_B76AC4.ambientSoundController[4], 0, 0x10Cu); /*0x7aa841*/
      memset(&DataGlobal_B73BE8, 0, 0x10Cu); /*0x7aa84d*/
      g_WOL_ChannelState = 0; /*0x7aa84f*/
      Debug::Log(); /*0x7aa859*/
    }
  }
  return 0; /*0x7aa6fa*/
}
}
// 0x7AB440
namespace gamemd {
Coord * * CComObject_CChatEventSink___ATL::DispatchStub_30(int a1, int a2, void * a3, int a4, int a5)
{
  int owningHouseIndex; // eax
  int v6; // ebp
  int v7; // ebx
  int v8; // eax
  int v9; // ebx
  ObjectClass *v10; // eax
  ObjectClass *nextObject; // esi
  ObjectClass *v12; // ebp
  char v13; // dl
  unsigned int v14; // ecx
  char v15; // dl
  int v17; // [esp+0h] [ebp-E0h]
  int v18; // [esp+4h] [ebp-DCh]
  char v19[108]; // [esp+8h] [ebp-D8h] BYREF
  unsigned int v20[27]; // [esp+74h] [ebp-6Ch] BYREF

  if ( a2 ) /*0x7ab44c*/
    return 0; /*0x7ab65d*/
  owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7ab452*/
  v6 = 0; /*0x7ab458*/
  v18 = 0; /*0x7ab45c*/
  if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x7ab460*/
  {
    v7 = 0; /*0x7ab467*/
    v17 = 0; /*0x7ab46b*/
    while ( 1 ) /*0x7ab46f*/
    {
      if ( v7 < 0 ) /*0x7ab471*/
        goto LABEL_30; /*0x7ab471*/
      if ( v6 >= owningHouseIndex ) /*0x7ab479*/
        goto LABEL_30; /*0x7ab479*/
      memcpy(v20, (char *)g_WOL_UserList.nextObject + v7, sizeof(v20)); /*0x7ab49a*/
      if ( _strcmpi((char *)&v20[9], (char *)a3) ) /*0x7ab4a5*/
        goto LABEL_30; /*0x7ab4af*/
      v20[0] = a4 | a5 & v20[0]; /*0x7ab4d4*/
      v8 = v6; /*0x7ab4db*/
      if ( g_WOL_UserList.owningHouseIndex ) /*0x7ab4df*/
      {
        if ( v6 >= g_WOL_UserList.owningHouseIndex ) /*0x7ab4ed*/
          v8 = g_WOL_UserList.owningHouseIndex - 1; /*0x7ab4ef*/
        memcpy( /*0x7ab51b*/
          (char *)g_WOL_UserList.nextObject + 108 * v8,
          &g_WOL_UserList.nextObject->alignmentPadding69[108 * v8 + 3],
          108 * g_WOL_UserList.owningHouseIndex - 36 * (3 * v8 + 3));
        --g_WOL_UserList.owningHouseIndex; /*0x7ab52f*/
        if ( 3 * g_WOL_UserList.owningHouseIndex <= g_WOL_UserList.fallRate ) /*0x7ab539*/
        {
          v9 = g_WOL_UserList.fallRate / 2; /*0x7ab542*/
          if ( g_WOL_UserList.fallRate / 2 < 10 ) /*0x7ab547*/
            v9 = 10; /*0x7ab549*/
          if ( v9 < g_WOL_UserList.fallRate ) /*0x7ab550*/
          {
            v10 = (ObjectClass *)operator new(108 * v9); /*0x7ab55c*/
            nextObject = g_WOL_UserList.nextObject; /*0x7ab561*/
            v12 = v10; /*0x7ab56c*/
            if ( g_WOL_UserList.nextObject ) /*0x7ab56e*/
            {
              v13 = 108 * (*((unsigned char *)&(g_WOL_UserList.owningHouseIndex))); /*0x7ab580*/
              v14 = (unsigned int)(108 * g_WOL_UserList.owningHouseIndex) >> 2; /*0x7ab582*/
              memcpy(v10, g_WOL_UserList.nextObject, 4 * v14); /*0x7ab585*/
              memcpy(&v10->vfptr + v14, &nextObject->vfptr + v14, v13 & 3); /*0x7ab58c*/
              nextObject = g_WOL_UserList.nextObject; /*0x7ab58e*/
            }
            operator delete((void *)(nextObject)); /*0x7ab595*/
            g_WOL_UserList.nextObject = v12; /*0x7ab59a*/
            v6 = v18; /*0x7ab5a0*/
            g_WOL_UserList.fallRate = v9; /*0x7ab5a7*/
          }
          v7 = v17; /*0x7ab5ad*/
        }
      }
      memcpy(v19, v20, sizeof(v19)); /*0x7ab5c6*/
      *(unsigned int *)&v19[32] = 0; /*0x7ab5cb*/
      if ( dword_B77E48 == 1 ) /*0x7ab5d3*/
        break; /*0x7ab5d3*/
      switch ( dword_B77E48 ) /*0x7ab5dc*/
      {
        case 2: /*0x7ab5dc*/
          InsertBuddyList(v19, 1); /*0x7ab5e4*/
          break;
        case 3: /*0x7ab5dc*/
          InsertBuddyList(v19, 0); /*0x7ab5f6*/
          break;
        case 4: /*0x7ab5dc*/
          FindBuddyList(v19, 1); /*0x7ab608*/
          break;
        case 5: /*0x7ab5dc*/
          FindBuddyList(v19, 0); /*0x7ab61a*/
          break;
        default:
          v15 = 1; /*0x7ab621*/
          goto LABEL_29; /*0x7ab621*/
      }
  LABEL_30:
      owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7ab62c*/
      ++v6; /*0x7ab631*/
      v7 += 108; /*0x7ab632*/
      v18 = v6; /*0x7ab637*/
      v17 = v7; /*0x7ab63b*/
      if ( v6 >= g_WOL_UserList.owningHouseIndex ) /*0x7ab63f*/
        goto LABEL_31; /*0x7ab63f*/
    }
    v15 = 0; /*0x7ab5d5*/
  LABEL_29:
    InsertGameSettings(v19, v15); /*0x7ab623*/
    goto LABEL_30; /*0x7ab627*/
  }
  LABEL_31:
  DisplayRankingsWOL(0); /*0x7ab648*/
  return 0; /*0x7ab654*/
}
}
// 0x7AB670
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_24(int a1, int a2, int a3, int a4, int a5)
{
  DeleteAndZero v24[171]; // [esp+0h] [ebp-804h] BYREF

  if ( (((unsigned char *)&(DataGlobal_B77DC0))[1]) ) /*0x7ab67d*/
    return 0; /*0x7ab67f*/
  if ( a2 < 0 ) /*0x7ab693*/
    return 0; /*0x7ab695*/
  NetworkLobby *v5; // edi
  ObjectClass *v23; // [esp-Ch] [ebp-810h]
  v23 = (ObjectClass *)v5; /*0x7ab6a2*/
  memset(byte_B785C0, 0, sizeof(byte_B785C0)); /*0x7ab6af*/
  char *v7; // ebx
  v7 = (char *)(a3 + 52); /*0x7ab6c5*/
  if ( !_strnicmp((const char *)(a3 + 52), g_Str_Lob_41_, strlen(g_Str_Lob_41_)) ) /*0x7ab6cf*/
  {
  int v8; // ecx
    v8 = atol((const char *)(strlen(g_Str_Lob_41_) + a3 + 52)); /*0x7ab6f2*/
  int v9; // eax
    v9 = v8 / 8; /*0x7ab6fd*/
  int v10; // ecx
    v10 = v8 % 8; /*0x7ab70c*/
    if ( v9 ) /*0x7ab70f*/
      sprintf(byte_B785C0, "%s %d", *(const char **)&g_WindowManager.__pad_EC[4 * v10 + 648], v9 + 1); /*0x7ab72f*/
    else
      sprintf(byte_B785C0, "%s", *(const char **)&g_WindowManager.__pad_EC[4 * v10 + 648]); /*0x7ab719*/
  }
  else
  {
    sprintf(byte_B785C0, "%s", v7); /*0x7ab744*/
  }
  if ( ((((unsigned char *)&(*(unsigned int *)a4))[1]) & 0x80u) == 0 ) /*0x7ab758*/
  {
    if ( !NetworkLobby::CheckMinPlayers(v5) ) /*0x7ab860*/
    {
  char *v22; // [esp-10h] [ebp-814h]
      v22 = CharToWideString((unsigned char *)(a5 + 36)); /*0x7ab878*/
  char *v18; // [esp-14h] [ebp-818h]
      v18 = CharToWideString(v7); /*0x7ab880*/
  char *v16; // [esp-18h] [ebp-81Ch]
      v16 = CharToWideString((unsigned char *)(a4 + 36)); /*0x7ab889*/
  wchar_t *StringCSF; // eax
      StringCSF = GetStringCSF(aTxtUserKicked, 0, g_Str_File_wonline_cpp, 8940); /*0x7ab89b*/
      Dialog::ShowMessage(-1, (size_t)StringCSF, v16, v18, v22); /*0x7ab8a8*/
    }
  }
  else
  {
    unknown_libname_74(v24); /*0x7ab762*/
    if ( stru_B76AC4.ambientSoundController[4] && Event_Helper((ObjectClass *)v5) ) /*0x7ab770*/
    {
  wchar_t *v19; // [esp-10h] [ebp-814h]
      v19 = GetStringCSF(g_Str_TXT_CHANNEL_FULL, 0, g_Str_File_wonline_cpp, 8912); /*0x7ab78f*/
      WideString::Assign_Alt((void **)v24, v19); /*0x7ab790*/
    }
    else
    {
      memset(&v24[0].DeleteAndZero_field_0x04, 0, 0x800u); /*0x7ab79d*/
  char *v20; // [esp-10h] [ebp-814h]
      v20 = CharToWideString((unsigned char *)(a5 + 36)); /*0x7ab7ae*/
  char *v17; // [esp-14h] [ebp-818h]
      v17 = CharToWideString(v7); /*0x7ab7b6*/
  wchar_t *v11; // eax
      v11 = GetStringCSF(aTxtYoureKicked, 0, g_Str_File_wonline_cpp, 8916); /*0x7ab7c8*/
      swprintf((wchar_t *const)&v24[0].DeleteAndZero_field_0x04, (const size_t)v11, (const wchar_t *const)v17, v20); /*0x7ab7d3*/
      WideString::Assign_Alt((void **)v24, (wchar_t *)&v24[0].DeleteAndZero_field_0x04); /*0x7ab7e4*/
    }
    if ( stru_B76AC4.ambientSoundController[4] ) /*0x7ab7f0*/
    {
  HWND v13; // eax
      v13 = (HWND)Dialog::FindByHandle((Dialog *)0x113); /*0x7ab829*/
      if ( v13 ) /*0x7ab830*/
      {
  HWND DlgItem; // [esp-10h] [ebp-814h]
        DlgItem = GetDlgItem(v13, 1343); /*0x7ab83e*/
  wchar_t *v14; // eax
        v14 = ((WideString *)((wchar_t **)v24))->GetOrEmpty(); /*0x7ab843*/
        DrawDialogText(-1, v14, DlgItem); /*0x7ab850*/
      }
      DeleteAndZero::Alt(v24); /*0x7ab859*/
    }
    else
    {
  wchar_t *v12; // eax
      v12 = ((WideString *)((wchar_t **)v24))->GetOrEmpty(); /*0x7ab7fd*/
      ShowDialogConfirm(v12, 0, (uint8_t (*)(void))GameLoop::Thunk, 0); /*0x7ab806*/
      ++dword_B77DD4; /*0x7ab815*/
      DeleteAndZero::Alt(v24); /*0x7ab81a*/
    }
  }
  LeaveChannelWOL((const char *)a4); /*0x7ab8b2*/
  DisplayRankingsWOL(0); /*0x7ab8bb*/
  GameListRenderWOL(v23); /*0x7ab8c0*/
  return 0; /*0x7ab681*/
}
}
// 0x7AB8E0
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_33(int a1, int a2, int a3)
{
  ComPtr v14; // [esp+Ch] [ebp-28h] BYREF

  char v12; // [esp+7h] [ebp-2Dh]
  v12 = 0; /*0x7ab8ec*/
  if ( a2 >= 0 ) /*0x7ab8f0*/
  {
  int v4; // ebp
    v4 = a3; /*0x7ab909*/
    if ( a3 ) /*0x7ab90f*/
    {
      do /*0x7abac8*/
      {
        unknown_libname_73(&a2); /*0x7ab91b*/
        String::Assign_Bool((String *)&a2, (const char *)(v4 + 36)); /*0x7ab928*/
        ((String *)((String *)&a2))->ToLower(); /*0x7ab931*/
  int v13; // [esp+8h] [ebp-2Ch] BYREF
        HashTable::Lookup((HashTable *)&g_WOL_ConnectionPool, (const char **)&a2, &v13); /*0x7ab945*/
  int v5; // edi
        v5 = *(unsigned int *)(v4 + 100); /*0x7ab94a*/
  String *v6; // eax
        v6 = (String *)operator new(0xCu); /*0x7ab94f*/
  String *v7; // esi
        v7 = v6; /*0x7ab954*/
        if ( v6 ) /*0x7ab95b*/
          unknown_libname_73(v6); /*0x7ab95f*/
        else
          v7 = 0; /*0x7ab966*/
        ((String *)(v7))->Reassign((const char **)&a2); /*0x7ab96f*/
        *&v7->ptr_4 = v5; /*0x7ab978*/
        *v7->ptr_4.__pad_0 = 0; /*0x7ab981*/
  int v8; // eax
        v8 = CComObject_CChatEventSink___ATL::Check((int)&g_WOL_ConnectionPool, (int)&a2); /*0x7ab984*/
  int v9; // ecx
        v9 = *(unsigned int *)(*(unsigned int *)g_WOL_ConnectionPool + 4 * v8); /*0x7ab98f*/
        *(unsigned int *)(*(unsigned int *)g_WOL_ConnectionPool + 4 * v8) = v7; /*0x7ab992*/
        if ( v9 ) /*0x7ab997*/
          *v7->ptr_4.__pad_0 = v9; /*0x7ab999*/
        v14.q018 = DataGlobal_B76538; /*0x7ab9b0*/
        v14.q01C = 0; /*0x7ab9b8*/
        *(unsigned long long *)&v14.q010 = (unsigned int)++DataGlobal_B76534; /*0x7ab9ac*/
        if ( (double)(unsigned int)DataGlobal_B76534 /*0x7ab9d0*/
           / (double)DataGlobal_B76538 >= dbl_B76558 )
          HashTable::Grow((HashTable *)&g_WOL_ConnectionPool); /*0x7ab9d7*/
  char *v10; // eax
        v10 = ((String *)((String *)&g_WebBrowser))->GetOrEmpty(); /*0x7ab9e1*/
        if ( !_strcmpi((char *)(a3 + 36), v10) ) /*0x7ab9ef*/
        {
          v14.ComPtr_field_0x08 = 0; /*0x7aba03*/
          (*((unsigned char *)&(v14.q00C))) = 0; /*0x7aba07*/
          ReadRegistryOptionsWOL((ObjectClass *)&v14.ComPtr_field_0x08); /*0x7aba0b*/
          ComPtr::Constructor(&v14); /*0x7aba14*/
          *(unsigned int *)v14.__pad_000 = &vt_rc_ptr; /*0x7aba22*/
          if ( (uint8_t)Flag::IsNot2((Flag *)&v14.ComPtr_field_0x08) ) /*0x7aba26*/
          {
  ObjectClass *PlayerProfile; // eax
            PlayerProfile = LoadPlayerProfile( /*0x7aba38*/
                              (ObjectClass *)&v14.q020,
                              (const char **)&g_WebBrowser);
            ComPtr::Set(&v14, (int)PlayerProfile->vfptr1); /*0x7aba45*/
            v14.q020 = (int)&vt_rc_ptr; /*0x7aba4e*/
            ComPtr::Release((ComPtr *)&v14.q020); /*0x7aba52*/
          }
          else
          {
            ComPtr::Set(&v14, DataGlobal_B75E4C); /*0x7aba64*/
          }
          GadgetClass::TrackState(v14.q004, *(unsigned int *)(a3 + 100), 2); /*0x7aba77*/
          if ( (uint8_t)Flag::IsNot2((Flag *)&v14.ComPtr_field_0x08) ) /*0x7aba80*/
            SaveProfileWOL(v14.q004, (const char **)&g_WebBrowser); /*0x7aba92*/
          Debug::Log(); /*0x7abaa0*/
          v12 = 1; /*0x7abaac*/
          *(unsigned int *)v14.__pad_000 = &vt_rc_ptr; /*0x7abab1*/
          ComPtr::Release(&v14); /*0x7abab5*/
        }
        v4 = *(unsigned int *)(v4 + 32); /*0x7ababa*/
        DeleteAndZero((ObjectClass *)&a2); /*0x7abac1*/
      }
      while ( v4 ); /*0x7abac8*/
      if ( v12 ) /*0x7abad6*/
        SetEvent(dword_B736BC); /*0x7abadf*/
    }
    return 0; /*0x7abae6*/
  }
  else
  {
    Debug::Log(); /*0x7ab8f7*/
    return 0; /*0x7ab8ff*/
  }
}
}
// 0x7ABAF0
namespace gamemd {
AbstractClass * * CComObject_CChatEventSink___ATL::DispatchStub_35(int a1, int a2, char * a3)
{
  int v3; // esi
  int v4; // esi
  int v5; // edi
  ScalarDtor *v6; // ecx
  ScalarDtor v7; // edi
  double v8; // st7
  int v9; // esi
  String *v10; // eax
  String *v11; // esi
  int v12; // edx
  int v13; // eax
  unsigned char v15[12]; // [esp+0h] [ebp-4Ch] BYREF
  char v16[64]; // [esp+Ch] [ebp-40h] BYREF

  unknown_libname_73(v15); /*0x7abafa*/
  strcpy(v16, unk_A8B380); /*0x7abb1c*/
  String::Assign_Bool((String *)v15, v16); /*0x7abb2e*/
  ((String *)((String *)v15))->ToLower(); /*0x7abb37*/
  v3 = *(unsigned int *)(*(unsigned int *)g_WOL_ConnectionPool /*0x7abb5d*/
                 + 4 * (dword_B76548(v15) & ((1 << (*((signed char *)&(DataGlobal_B7653C)))) - 1)));
  if ( v3 ) /*0x7abb62*/
  {
    while ( !(uint8_t)((String *)((String *)v3))->Compare((const char **)v15) ) /*0x7abb76*/
    {
      v3 = v3->vtable3; /*0x7abb78*/
      if ( !v3 ) /*0x7abb7d*/
        goto LABEL_19; /*0x7abb7d*/
    }
    if ( DataGlobal_B76534 ) /*0x7abb8b*/
    {
      *(unsigned long long *)&v15[4] = (unsigned int)(DataGlobal_B76534 - 1); /*0x7abb98*/
      *(float *)&v15[4] = (double)*(int64_t *)&v15[4] / (double)DataGlobal_B76538; /*0x7abbb4*/
      v4 = dword_B76548(v15) & ((1 << (*((signed char *)&(DataGlobal_B7653C)))) - 1); /*0x7abbcc*/
      v5 = *(unsigned int *)(*(unsigned int *)g_WOL_ConnectionPool + 4 * v4); /*0x7abbd3*/
      if ( v5 ) /*0x7abbd8*/
      {
        if ( (uint8_t)((String *)((String *)v5))->Compare((const char **)v15) ) /*0x7abbe5*/
        {
          v6 = *(ScalarDtor **)(*(unsigned int *)g_WOL_ConnectionPool + 4 * v4); /*0x7abbf4*/
          v7 = v6[2]; /*0x7abbf9*/
          if ( v6 ) /*0x7abbfc*/
            ScalarDtor::DeleteAndZero(v6, 1); /*0x7abc00*/
          v8 = *(float *)&v15[4]; /*0x7abc0a*/
          *(ScalarDtor *)(*(unsigned int *)g_WOL_ConnectionPool + 4 * v4) = v7; /*0x7abc0e*/
          --DataGlobal_B76534; /*0x7abc1d*/
          if ( v8 <= dbl_B76550 ) /*0x7abc27*/
  LABEL_18:
            HashMap::Shrink(&g_WOL_ConnectionPool); /*0x7abc7e*/
        }
        else
        {
          v9 = v5->vtable3; /*0x7abc2b*/
          if ( v9 ) /*0x7abc30*/
          {
            while ( !(uint8_t)((String *)((String *)v9))->Compare((const char **)v15) ) /*0x7abc40*/
            {
              v5 = v9; /*0x7abc42*/
              v9 = v9->vtable3; /*0x7abc44*/
              if ( !v9 ) /*0x7abc49*/
                goto LABEL_17; /*0x7abc49*/
            }
            v5->vtable3 = v9->vtable3; /*0x7abc50*/
            --DataGlobal_B76534; /*0x7abc5c*/
            ScalarDtor::DeleteAndZero((ScalarDtor *)v9, 1); /*0x7abc68*/
          }
  LABEL_17:
          if ( *(float *)&v15[4] <= dbl_B76550 ) /*0x7abc7c*/
            goto LABEL_18; /*0x7abc7c*/
        }
      }
    }
  }
  LABEL_19:
  v10 = (String *)operator new(0xCu); /*0x7abc88*/
  v11 = v10; /*0x7abc8f*/
  if ( v10 ) /*0x7abc96*/
    unknown_libname_73(v10); /*0x7abc9a*/
  else
    v11 = 0; /*0x7abca1*/
  ((String *)(v11))->Reassign((const char **)v15); /*0x7abcaa*/
  *v11->ptr_4.__pad_0 = 0; /*0x7abcaf*/
  *&v11->ptr_4 = a3; /*0x7abcb6*/
  v12 = dword_B76548(v15) & ((1 << (*((signed char *)&(DataGlobal_B7653C)))) - 1); /*0x7abcd7*/
  v13 = *(unsigned int *)(*(unsigned int *)g_WOL_ConnectionPool + 4 * v12); /*0x7abcd9*/
  *(unsigned int *)(*(unsigned int *)g_WOL_ConnectionPool + 4 * v12) = v11; /*0x7abcdc*/
  if ( v13 ) /*0x7abce1*/
    *v11->ptr_4.__pad_0 = v13; /*0x7abce3*/
  *(unsigned long long *)&v15[4] = (unsigned int)++DataGlobal_B76534; /*0x7abcf6*/
  *(unsigned int *)&v15[4] = DataGlobal_B76538; /*0x7abd03*/
  if ( (double)(unsigned int)DataGlobal_B76534 / (double)DataGlobal_B76538 >= dbl_B76558 ) /*0x7abd1d*/
    HashTable::Grow((HashTable *)&g_WOL_ConnectionPool); /*0x7abd24*/
  DeleteAndZero((ObjectClass *)v15); /*0x7abd2d*/
  return 0; /*0x7abd34*/
}
}
// 0x7ABD40
namespace gamemd {
AbstractClass * * CComObject_CChatEventSink___ATL::DispatchStub_34(int a1, int a2, float a3)
{
  float v4; // ebp
  int v5; // esi
  int v6; // esi
  int v7; // edi
  ScalarDtor *v8; // ecx
  ScalarDtor v9; // edi
  int v11; // esi
  int v12; // edi
  String *v13; // eax
  String *v14; // esi
  int v15; // edx
  int v16; // eax

  if ( a2 < 0 ) /*0x7abd4c*/
  {
    Debug::Log(); /*0x7abf8e*/
    return 0; /*0x7abf96*/
  }
  else
  {
    a3 = a3; /*0x7abd54*/
    v4 = a3; /*0x7abd5c*/
    unknown_libname_73(&a2); /*0x7abd5e*/
    if ( a3 != 0.0 ) /*0x7abd65*/
    {
      do /*0x7abd74*/
      {
        String::Assign_Bool((String *)&a2, (const char *)((*((unsigned int *)&(v4))) + 36)); /*0x7abd74*/
        v5 = *(unsigned int *)(stru_B765EC.lastLayer + 4 * (dword_B76698(&a2) & ((1 << (*((signed char *)&(stru_B765EC.location[1])))) - 1))); /*0x7abd98*/
        if ( !v5 ) /*0x7abd9d*/
          goto LABEL_21; /*0x7abd9d*/
        while ( !(uint8_t)((String *)((String *)v5))->Compare((const char **)&a2) ) /*0x7abdb1*/
        {
          v5 = v5->vtable3; /*0x7abdb3*/
          if ( !v5 ) /*0x7abdb8*/
            goto LABEL_21; /*0x7abdb8*/
        }
        if ( !*(unsigned int *)&stru_B765EC.isInLogic ) /*0x7abdc6*/
          goto LABEL_21; /*0x7abdc6*/
        a3 = (double)(unsigned int)(*(unsigned int *)&stru_B765EC.isInLogic - 1) / (double)stru_B765EC.location[0]; /*0x7abdef*/
        v6 = dword_B76698(&a2) & ((1 << (*((signed char *)&(stru_B765EC.location[1])))) - 1); /*0x7abe07*/
        v7 = *(unsigned int *)(stru_B765EC.lastLayer + 4 * v6); /*0x7abe0e*/
        if ( !v7 ) /*0x7abe13*/
          goto LABEL_21; /*0x7abe13*/
        if ( (uint8_t)((String *)((String *)v7))->Compare((const char **)&a2) ) /*0x7abe20*/
        {
          v8 = *(ScalarDtor **)(stru_B765EC.lastLayer + 4 * v6); /*0x7abe2f*/
          v9 = v8[2]; /*0x7abe34*/
          if ( v8 ) /*0x7abe37*/
            ScalarDtor::DeleteAndZero(v8, 1); /*0x7abe3b*/
          a3 = a3; /*0x7abe45*/
          *(ScalarDtor *)(stru_B765EC.lastLayer + 4 * v6) = v9; /*0x7abe49*/
          --*(unsigned int *)&stru_B765EC.isInLogic; /*0x7abe58*/
          if ( a3 > dbl_B766A0 ) /*0x7abe62*/
            goto LABEL_21; /*0x7abe62*/
        }
        else
        {
          v11 = v7->vtable3; /*0x7abe66*/
          if ( v11 ) /*0x7abe6b*/
          {
            while ( !(uint8_t)((String *)((String *)v11))->Compare((const char **)&a2) ) /*0x7abe7b*/
            {
              v7 = v11; /*0x7abe7d*/
              v11 = v11->vtable3; /*0x7abe7f*/
              if ( !v11 ) /*0x7abe84*/
                goto LABEL_19; /*0x7abe84*/
            }
            v7->vtable3 = v11->vtable3; /*0x7abe8b*/
            --*(unsigned int *)&stru_B765EC.isInLogic; /*0x7abe97*/
            ScalarDtor::DeleteAndZero((ScalarDtor *)v11, 1); /*0x7abea3*/
          }
  LABEL_19:
          if ( a3 > dbl_B766A0 ) /*0x7abeb7*/
            goto LABEL_21; /*0x7abeb7*/
        }
        HashMap::Shrink((HashMap *)&stru_B765EC.lastLayer); /*0x7abebe*/
  LABEL_21:
        v12 = *(unsigned int *)((*((unsigned int *)&(v4))) + 104); /*0x7abec3*/
        v13 = (String *)operator new(0xCu); /*0x7abec8*/
        v14 = v13; /*0x7abecd*/
        if ( v13 ) /*0x7abed4*/
          unknown_libname_73(v13); /*0x7abed8*/
        else
          v14 = 0; /*0x7abedf*/
        ((String *)(v14))->Reassign((const char **)&a2); /*0x7abee8*/
        *&v14->ptr_4 = v12; /*0x7abef1*/
        *v14->ptr_4.__pad_0 = 0; /*0x7abef4*/
        v15 = dword_B76698(&a2) & ((1 << (*((signed char *)&(stru_B765EC.location[1])))) - 1); /*0x7abf11*/
        v16 = *(unsigned int *)(stru_B765EC.lastLayer + 4 * v15); /*0x7abf13*/
        *(unsigned int *)(stru_B765EC.lastLayer + 4 * v15) = v14; /*0x7abf16*/
        if ( v16 ) /*0x7abf1b*/
          *v14->ptr_4.__pad_0 = v16; /*0x7abf1d*/
        ++*(unsigned int *)&stru_B765EC.isInLogic; /*0x7abf40*/
        if ( (double)*(unsigned int *)&stru_B765EC.isInLogic / (double)stru_B765EC.location[0] >= dbl_B766A8 ) /*0x7abf54*/
          HashTable::Grow((HashTable *)&stru_B765EC.lastLayer); /*0x7abf5b*/
        v4 = *(float *)((*((unsigned int *)&(v4))) + 32); /*0x7abf60*/
      }
      while ( v4 != 0.0 ); /*0x7abd74*/
    }
    DisplayRankingsWOL(0); /*0x7abf6c*/
    DeleteAndZero((ObjectClass *)&a2); /*0x7abf79*/
    return 0; /*0x7abf80*/
  }
}
}
// 0x7ABFA0
namespace gamemd {
AbstractClass * * CComObject_CChatEventSink___ATL::DispatchStub_36(int a1, int a2, int a3)
{
  int v4; // esi
  int v5; // esi
  int v6; // edi
  ScalarDtor *v7; // ecx
  ScalarDtor v8; // edi
  int v9; // esi
  String *v10; // eax
  String *v11; // esi
  int v12; // edx
  int v13; // eax
  char v15[64]; // [esp+Ch] [ebp-40h] BYREF
  int v16; // [esp+54h] [ebp+8h]

  if ( a2 ) /*0x7abfac*/
  {
    Debug::Log(); /*0x7ac208*/
    return 0; /*0x7ac210*/
  }
  a3 = a3; /*0x7abfb3*/
  a3 = a3; /*0x7abfbd*/
  unknown_libname_73(&a3); /*0x7abfc3*/
  strcpy(v15, unk_A8B380); /*0x7abfe5*/
  String::Assign_Bool((String *)&a3, v15); /*0x7abff7*/
  ((String *)((String *)&a3))->ToLower(); /*0x7ac000*/
  v4 = *(unsigned int *)(stru_B765EC.lastLayer + 4 * (dword_B76698(&a3) & ((1 << (*((signed char *)&(stru_B765EC.location[1])))) - 1))); /*0x7ac024*/
  if ( v4 ) /*0x7ac029*/
  {
    while ( !(uint8_t)((String *)((String *)v4))->Compare((const char **)&a3) ) /*0x7ac03d*/
    {
      v4 = v4->vtable3; /*0x7ac03f*/
      if ( !v4 ) /*0x7ac044*/
        goto LABEL_20; /*0x7ac044*/
    }
    if ( *(unsigned int *)&stru_B765EC.isInLogic ) /*0x7ac052*/
    {
      *(float *)&v16 = (double)(unsigned int)(*(unsigned int *)&stru_B765EC.isInLogic - 1) / (double)stru_B765EC.location[0]; /*0x7ac07b*/
      v5 = dword_B76698(&a3) & ((1 << (*((signed char *)&(stru_B765EC.location[1])))) - 1); /*0x7ac093*/
      v6 = *(unsigned int *)(stru_B765EC.lastLayer + 4 * v5); /*0x7ac09a*/
      if ( v6 ) /*0x7ac09f*/
      {
        if ( (uint8_t)((String *)((String *)v6))->Compare((const char **)&a3) ) /*0x7ac0ac*/
        {
          v7 = *(ScalarDtor **)(stru_B765EC.lastLayer + 4 * v5); /*0x7ac0bb*/
          v8 = v7[2]; /*0x7ac0c0*/
          if ( v7 ) /*0x7ac0c3*/
            ScalarDtor::DeleteAndZero(v7, 1); /*0x7ac0c7*/
          *(ScalarDtor *)(stru_B765EC.lastLayer + 4 * v5) = v8; /*0x7ac0d5*/
          --*(unsigned int *)&stru_B765EC.isInLogic; /*0x7ac0e4*/
          if ( *(float *)&v16 > dbl_B766A0 ) /*0x7ac0ee*/
            goto LABEL_20; /*0x7ac0ee*/
        }
        else
        {
          v9 = v6->vtable3; /*0x7ac0f2*/
          if ( v9 ) /*0x7ac0f7*/
          {
            while ( !(uint8_t)((String *)((String *)v9))->Compare((const char **)&a3) ) /*0x7ac107*/
            {
              v6 = v9; /*0x7ac109*/
              v9 = v9->vtable3; /*0x7ac10b*/
              if ( !v9 ) /*0x7ac110*/
                goto LABEL_18; /*0x7ac110*/
            }
            v6->vtable3 = v9->vtable3; /*0x7ac117*/
            --*(unsigned int *)&stru_B765EC.isInLogic; /*0x7ac123*/
            ScalarDtor::DeleteAndZero((ScalarDtor *)v9, 1); /*0x7ac12f*/
          }
  LABEL_18:
          if ( *(float *)&v16 > dbl_B766A0 ) /*0x7ac143*/
            goto LABEL_20; /*0x7ac143*/
        }
        HashMap::Shrink((HashMap *)&stru_B765EC.lastLayer); /*0x7ac14a*/
      }
    }
  }
  LABEL_20:
  v10 = (String *)operator new(0xCu); /*0x7ac14f*/
  v11 = v10; /*0x7ac156*/
  if ( v10 ) /*0x7ac15d*/
    unknown_libname_73(v10); /*0x7ac161*/
  else
    v11 = 0; /*0x7ac168*/
  ((String *)(v11))->Reassign((const char **)&a3); /*0x7ac171*/
  *&v11->ptr_4 = a3; /*0x7ac17a*/
  *v11->ptr_4.__pad_0 = 0; /*0x7ac17d*/
  v12 = dword_B76698(&a3) & ((1 << (*((signed char *)&(stru_B765EC.location[1])))) - 1); /*0x7ac19a*/
  v13 = *(unsigned int *)(stru_B765EC.lastLayer + 4 * v12); /*0x7ac19c*/
  *(unsigned int *)(stru_B765EC.lastLayer + 4 * v12) = v11; /*0x7ac19f*/
  if ( v13 ) /*0x7ac1a4*/
    *v11->ptr_4.__pad_0 = v13; /*0x7ac1a6*/
  ++*(unsigned int *)&stru_B765EC.isInLogic; /*0x7ac1bd*/
  if ( (double)*(unsigned int *)&stru_B765EC.isInLogic / (double)stru_B765EC.location[0] >= dbl_B766A8 ) /*0x7ac1e0*/
    HashTable::Grow((HashTable *)&stru_B765EC.lastLayer); /*0x7ac1e7*/
  DeleteAndZero((ObjectClass *)&a3); /*0x7ac1f0*/
  return 0; /*0x7ac1f7*/
}
}
// 0x7AC220
namespace gamemd {
ObjectClass * * CComObject_CChatEventSink___ATL::DispatchStub_37(int a1, int a2, int a3)
{
  ObjectClass *v3; // ebx
  int v4; // ebx
  int v5; // eax
  int v6; // esi
  String *v7; // ecx
  HWND v8; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  ObjectClass *v11; // eax
  HWND v12; // esi
  HWND v13; // eax
  char v16[108]; // [esp+8h] [ebp-6Ch] BYREF

  if ( a2 >= 0 ) /*0x7ac22b*/
  {
    v3 = v3; /*0x7ac238*/
    v4 = a3; /*0x7ac23b*/
    if ( a3 ) /*0x7ac23d*/
    {
      while ( 1 ) /*0x7ac24e*/
      {
        ((String *)((String *)&a3))->Assign(&v4->u32_24); /*0x7ac24e*/
        if ( (uint8_t)MapSeed::CheckName((MapSeed *)&a3) ) /*0x7ac25a*/
          break; /*0x7ac25a*/
  LABEL_20:
        DeleteAndZero((ObjectClass *)&a3); /*0x7ac3f9*/
        v4 = v4->NeedsSaveOrLink; /*0x7ac405*/
        if ( !v4 ) /*0x7ac40a*/
          goto LABEL_21; /*0x7ac40a*/
      }
      String::AssignFromPtr((String *)&a2, (const char **)&a3); /*0x7ac276*/
      StringVector::Insert((StringVector *)&g_WindowManager, (const char **)&a2, *(int *)g_WindowManager); /*0x7ac28f*/
      StringVector::Insert( /*0x7ac2a8*/
        (StringVector *)&stru_B76900.needsRedraw,
        (const char **)&a2,
        *(int *)&stru_B76900.needsRedraw);
      v5 = *(unsigned int *)g_WOL_BuddyList; /*0x7ac2ad*/
      v6 = *(unsigned int *)g_WOL_BuddyList; /*0x7ac2b2*/
      if ( *(int *)g_WOL_BuddyList >= *(int *)&DataGlobal_B779B4 ) /*0x7ac2be*/
      {
        DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x7ac2c5*/
        v5 = *(unsigned int *)g_WOL_BuddyList; /*0x7ac2ca*/
      }
      if ( v5 >= *(int *)&DataGlobal_B779B4 ) /*0x7ac2d5*/
      {
        DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x7ac2dc*/
        v5 = *(unsigned int *)g_WOL_BuddyList; /*0x7ac2e1*/
      }
      if ( v6 < v5 ) /*0x7ac2e8*/
      {
        memcpy( /*0x7ac305*/
          (void *)(g_WOL_ChannelMgr + 4 * v6 + 4),
          (const void *)(g_WOL_ChannelMgr + 4 * v6),
          4 * (v5 + 0x3FFFFFFF * v6));
        v5 = *(unsigned int *)g_WOL_BuddyList; /*0x7ac30a*/
      }
      v7 = (String *)(g_WOL_ChannelMgr + 4 * v6); /*0x7ac318*/
      if ( v7 ) /*0x7ac31d*/
      {
        String::AssignFromPtr(v7, (const char **)&a2); /*0x7ac327*/
        v5 = *(unsigned int *)g_WOL_BuddyList; /*0x7ac32c*/
      }
      *(unsigned int *)g_WOL_BuddyList = v5 + 1; /*0x7ac337*/
      if ( String::Length((String *)&g_WOL_AuthObject) ) /*0x7ac33c*/
      {
        if ( (unsigned int)(time(0) - *(unsigned int *)g_WOL_ParseState) < 5 ) /*0x7ac35a*/
        {
  LABEL_19:
          DeleteAndZero((ObjectClass *)&a2); /*0x7ac3ed*/
          goto LABEL_20; /*0x7ac3f4*/
        }
        DeleteAndZero::Alt2((DeleteAndZero *)&g_WOL_AuthObject); /*0x7ac365*/
      }
      if ( *(unsigned int *)&stru_B76900.needsRedraw ) /*0x7ac371*/
      {
        if ( (uint8_t)DynamicStringArray::Get( /*0x7ac37f*/
                                (DynamicStringArray *)&stru_B76900.needsRedraw,
                                (char **)&g_WOL_AuthObject,
                                0) )
          DynamicArray::Remove((DynamicArray *)&stru_B76900.needsRedraw, 0); /*0x7ac38f*/
        *(unsigned int *)g_WOL_ParseState = time(0); /*0x7ac39b*/
        memset(v16, 0, sizeof(v16)); /*0x7ac3ab*/
        strcpy(&v16[36], ((String *)((String *)&g_WOL_AuthObject))->GetOrEmpty()); /*0x7ac3d8*/
        (*(void (__stdcall **)(LPVOID, char *))(*(unsigned int *)ppv + 96))(ppv, v16); /*0x7ac3ea*/
      }
      goto LABEL_19; /*0x7ac3ea*/
    }
  LABEL_21:
    SendGameListWOL(v3); /*0x7ac410*/
    v8 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x7ac41a*/
    if ( v8 ) /*0x7ac422*/
    {
      g_WOL_ChannelList &= ~0x200u; /*0x7ac430*/
      if ( !g_WOL_ChannelList ) /*0x7ac436*/
        CloseDialog(v8, 0); /*0x7ac43c*/
    }
    Current = (HWND)Dialog::GetCurrent(); /*0x7ac441*/
    DlgItem = GetDlgItem(Current, 1344); /*0x7ac452*/
    if ( DlgItem ) /*0x7ac456*/
      SetFocus(DlgItem); /*0x7ac459*/
    v11 = (ObjectClass *)Dialog::FindByHandle((Dialog *)0x116); /*0x7ac464*/
    v12 = (HWND)v11; /*0x7ac469*/
    if ( v11 ) /*0x7ac46d*/
    {
      FillBuddyListWOL(v11); /*0x7ac471*/
      KillTimer(v12, 0x704u); /*0x7ac47c*/
      v13 = GetDlgItem(v12, 1796); /*0x7ac48a*/
      EnableWindow(v13, 1); /*0x7ac48d*/
    }
  }
  return 0; /*0x7ac493*/
}
}
// 0x7AC6B0
namespace gamemd {
int CComObject_CChatEventSink___ATL::Release(void *a1_1)
{

  LONG v1; // ebx
  char *Block; // [esp+14h] [ebp+4h]
  v1 = InterlockedDecrement((volatile LONG *)Block + 1); /*0x7ac6c4*/
  if ( !v1 && Block ) /*0x7ac6cc*/
  {
    *(unsigned int *)Block = &vt_ATLCComObject; /*0x7ac6d3*/
    *((unsigned int *)Block + 1) = 1; /*0x7ac6d9*/
    InterlockedDecrement(&Addend); /*0x7ac6df*/
    DeleteCriticalSection((LPCRITICAL_SECTION)(Block + 8)); /*0x7ac6e5*/
    operator delete((void *)(Block)); /*0x7ac6ec*/
  }
  return v1; /*0x7ac6f4*/
}
}
// 0x7AC700
namespace gamemd {
int CComObject_CChatEventSink___ATL::QueryInterface(unsigned int * a2, char ** a3)
{
  char ***v3; // esi
  int result; // eax
  char **v5; // eax
  BOOL v6; // ebp
  char **v7; // eax
  char **v8; // eax
  char *v9; // esi
  unsigned int *v10; // [esp+1Ch] [ebp+Ch]

  v3 = (char ***)&off_7F7698; /*0x7ac70a*/
  if ( !v10 ) /*0x7ac70f*/
    return -2147467261; /*0x7ac71a*/
  *v10 = 0; /*0x7ac721*/
  if ( !*a3 && !a3[1] && a3[2] == 192 && a3[3] == 1174405120 ) /*0x7ac743*/
  {
    (*(void (__stdcall **)(unsigned int *))(*a2 + 4))(a2); /*0x7ac756*/
    *v10 = a2; /*0x7ac759*/
    return 0; /*0x7ac761*/
  }
  while ( 1 ) /*0x7ac76d*/
  {
    v5 = *v3; /*0x7ac76d*/
    v6 = *v3 == 0; /*0x7ac776*/
    if ( !*v3 || *v5 == *a3 && v5[1] == a3[1] && v5[2] == a3[2] && v5[3] == a3[3] ) /*0x7ac7a0*/
      break; /*0x7ac7a0*/
  LABEL_17:
    v8 = v3[5]; /*0x7ac7c3*/
    v3 += 3; /*0x7ac7c6*/
    if ( !v8 ) /*0x7ac7cb*/
      return -2147467262; /*0x7ac7cd*/
  }
  v7 = v3[2]; /*0x7ac7a2*/
  if ( v7 != (char **)1 ) /*0x7ac7a8*/
  {
    result = v7(a2, a3, v10, v3[1]); /*0x7ac7b5*/
    if ( !result || !v6 && result < 0 ) /*0x7ac7c1*/
      return result; /*0x7ac7c1*/
    goto LABEL_17; /*0x7ac7c1*/
  }
  v9 = v3->u8_1 + (unsigned int)a2; /*0x7ac7e0*/
  (*(void (__stdcall **)(char *))(*(unsigned int *)v9 + 4))(v9); /*0x7ac7e5*/
  *v10 = v9; /*0x7ac7e8*/
  return 0; /*0x7ac711*/
}
}
// 0x7A5220
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_20(int a1, int a2, const char * a3)
{
  if ( a2 >= 0 ) /*0x7a5226*/
    LeaveChannelWOL(a3); /*0x7a522c*/
  return 0; /*0x7a5233*/
}
} // namespace gamemd

// 0x7A5240
namespace gamemd {
int CComObject_CChatEventSink___ATL::GetTypeInfoCount(int a1, int a2, int a3)
{

  if ( !(((unsigned char *)&(DataGlobal_B77DC0))[1]) ) /*0x7a524d*/
  {
  wchar_t *StringCSF; // eax
    StringCSF = GetStringCSF(aTxtServerError, 0, g_Str_File_wonline_cpp, 5655); /*0x7a5260*/
  wchar_t Buffer[512]; // [esp+0h] [ebp-400h] BYREF
    swprintf(Buffer, (const size_t)&off_8240B4, StringCSF); /*0x7a5270*/
    Dialog::ShowMessage(-1, (size_t)Buffer); /*0x7a527c*/
  }
  return 0; /*0x7a5286*/
}
} // namespace gamemd

// 0x7A55F0
namespace gamemd {
int CComObject_CChatEventSink___ATL::GetIDsOfNames(int a1, int a2, char * Source)
{

  if ( a2 < 0 ) /*0x7a55fc*/
    return 0; /*0x7a55fe*/
  char *v4; // esi
  v4 = _strdup(Source); /*0x7a5617*/
  uint8_t *i; // eax
  for ( i = (uint8_t *)strtok(v4, asc_83F328); i; i = (uint8_t *)strtok(0, asc_83F328) ) /*0x7a5629*/
  {
  size_t BufferCount[512]; // [esp+0h] [ebp-800h] BYREF
    BulkCharToWide(BufferCount, i, -1); /*0x7a5633*/
    Dialog::ShowMessage(-1, (size_t)BufferCount); /*0x7a5644*/
  }
  free(v4); /*0x7a565d*/
  Dialog::ShowMessage(-1, (size_t)asc_830174); /*0x7a566d*/
  return 0; /*0x7a5600*/
}
} // namespace gamemd

// 0x7A70E0
namespace gamemd {
int CComObject_CChatEventSink___ATL::Disconnect(int a1, int a2, int a3, const char * a4)
{
  if ( a2 >= 0 ) /*0x7a70e6*/
    LeaveChannelWOL(a4); /*0x7a70fe*/
  else
    Debug::Log(); /*0x7a70ed*/
  return 0; /*0x7a70f7*/
}
} // namespace gamemd

// 0x7AA6A0
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_18(int a1, int a2, int a3)
{
  if ( !(((unsigned char *)&(DataGlobal_B77DC0))[1]) && a2 >= 0 ) /*0x7aa6af*/
    Dialog::ShowMessage(-1, (size_t)aHs_2, a3); /*0x7aa6c2*/
  return 0; /*0x7aa6cc*/
}
} // namespace gamemd

// 0x7AAFB0
namespace gamemd {
int CComObject_CChatEventSink___ATL::Unadvise(int a1, int a2, const char * a3, const char * a4)
{
  bool v6; // bl

  if ( !(((unsigned char *)&(DataGlobal_B77DC0))[1]) && a2 >= 0 ) /*0x7aafc5*/
  {
  const char *v4; // edi
    v4 = a4; /*0x7aafcb*/
    ((String *)((String *)&a2))->Assign(a4); /*0x7aafd5*/
  const char *v5; // esi
    v5 = a3; /*0x7aafda*/
    if ( a3 ) /*0x7aafe0*/
    {
      if ( (*a3 & 1) != 0 ) /*0x7aafe9*/
      {
        v6 = 1; /*0x7aafeb*/
      }
      else if ( Dialog::FindByHandle((Dialog *)0xC2) ) /*0x7aaff4*/
      {
        v6 = 1; /*0x7aaffd*/
      }
      else
      {
        v6 = Dialog::FindByHandle((Dialog *)0xC9) || DataGlobal_B779C0 != 0; /*0x7ab00d*/
      }
    }
    else
    {
      v6 = 0; /*0x7aafe2*/
    }
    DeleteAndZero((ObjectClass *)&a2); /*0x7ab021*/
    if ( v6 && IsBuddyOrIgnoreWOL(v5) ) /*0x7ab02d*/
    {
      ((String *)((String *)&a2))->Assign(v4); /*0x7ab03b*/
      CharStringToWide((wchar_t **)&a4, (const char **)&a2); /*0x7ab048*/
      DeleteAndZero((ObjectClass *)&a2); /*0x7ab051*/
  char *v7; // esi
      v7 = (char *)(v5 + 36); /*0x7ab056*/
      if ( _strcmpi(unk_A8B380, v7) ) /*0x7ab05f*/
      {
  wchar_t *v8; // eax
        v8 = ((WideString *)((wchar_t **)&a4))->GetOrEmpty(); /*0x7ab06f*/
        Dialog::ShowMessage(16711935, (size_t)g_Str_Trace__hs, v7, v8); /*0x7ab081*/
      }
      DeleteAndZero::Alt((DeleteAndZero *)&a4); /*0x7ab08d*/
    }
  }
  return 0; /*0x7ab092*/
}
} // namespace gamemd

// 0x7AB0A0
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_42(int a1, int a2, const char * a3, wchar_t * String)
{
  bool v6; // bl

  if ( !(((unsigned char *)&(DataGlobal_B77DC0))[1]) && a2 >= 0 ) /*0x7ab0b5*/
  {
  wchar_t *v4; // edi
    v4 = String; /*0x7ab0bb*/
    ((WideString *)((wchar_t **)&a2))->Assign(String); /*0x7ab0c5*/
  const char *v5; // esi
    v5 = a3; /*0x7ab0ca*/
    if ( a3 ) /*0x7ab0d0*/
    {
      if ( (*a3 & 1) != 0 ) /*0x7ab0d9*/
      {
        v6 = 1; /*0x7ab0db*/
      }
      else if ( Dialog::FindByHandle((Dialog *)0xC2) ) /*0x7ab0e4*/
      {
        v6 = 1; /*0x7ab0ed*/
      }
      else if ( Dialog::FindByHandle((Dialog *)0xC9) ) /*0x7ab0f6*/
      {
        v6 = 1; /*0x7ab0ff*/
      }
      else
      {
  bool v7; // zf
        v7 = (uint8_t)WideString::IsASCII((const wchar_t **)&a2) == 0; /*0x7ab10c*/
  void *DynamicVector_field_0x10; // eax
        DynamicVector_field_0x10 = DataGlobal_B779C0; /*0x7ab10e*/
        if ( v7 ) /*0x7ab113*/
          DynamicVector_field_0x10 = (void *)dword_B779DC; /*0x7ab115*/
        v6 = DynamicVector_field_0x10 != 0; /*0x7ab11c*/
      }
    }
    else
    {
      v6 = 0; /*0x7ab0d2*/
    }
    DeleteAndZero::Alt((DeleteAndZero *)&a2); /*0x7ab123*/
    if ( v6 && IsBuddyOrIgnoreWOL(v5) ) /*0x7ab12f*/
    {
  char *v9; // esi
      v9 = (char *)(v5 + 36); /*0x7ab138*/
      if ( _strcmpi(unk_A8B380, v9) ) /*0x7ab141*/
        Dialog::ShowMessage(16711935, (size_t)g_Str_Trace__hs, v9, v4); /*0x7ab15a*/
    }
  }
  return 0; /*0x7ab162*/
}
} // namespace gamemd

// 0x7AB170
namespace gamemd {
int CComObject_CChatEventSink___ATL::EnumDependents(int a1, int a2, int a3, const char * a4, const char * a5)
{
  bool v7; // bl

  if ( !(((unsigned char *)&(DataGlobal_B77DC0))[1]) && a2 >= 0 ) /*0x7ab185*/
  {
  const char *v5; // edi
    v5 = a5; /*0x7ab18b*/
    ((String *)((String *)&a2))->Assign(a5); /*0x7ab195*/
  const char *v6; // esi
    v6 = a4; /*0x7ab19a*/
    if ( a4 ) /*0x7ab1a0*/
    {
      if ( (*a4 & 1) != 0 ) /*0x7ab1a9*/
      {
        v7 = 1; /*0x7ab1ab*/
      }
      else if ( Dialog::FindByHandle((Dialog *)0xC2) ) /*0x7ab1b4*/
      {
        v7 = 1; /*0x7ab1bd*/
      }
      else
      {
        v7 = Dialog::FindByHandle((Dialog *)0xC9) || DataGlobal_B779C0 != 0; /*0x7ab1cd*/
      }
    }
    else
    {
      v7 = 0; /*0x7ab1a2*/
    }
    DeleteAndZero((ObjectClass *)&a2); /*0x7ab1e1*/
    if ( v7 && IsBuddyOrIgnoreWOL(v6) ) /*0x7ab1ed*/
    {
      ((String *)((String *)&a2))->Assign(v5); /*0x7ab1fb*/
      CharStringToWide((wchar_t **)&a5, (const char **)&a2); /*0x7ab208*/
      DeleteAndZero((ObjectClass *)&a2); /*0x7ab211*/
  char *v8; // esi
      v8 = (char *)(v6 + 36); /*0x7ab216*/
      if ( _strcmpi(unk_A8B380, v8) ) /*0x7ab21f*/
      {
  wchar_t *v9; // eax
        v9 = ((WideString *)((wchar_t **)&a5))->GetOrEmpty(); /*0x7ab22f*/
        Dialog::ShowMessage(3166463, (size_t)g_Str_Trace__hs, v8, v9); /*0x7ab241*/
      }
      DeleteAndZero::Alt((DeleteAndZero *)&a5); /*0x7ab24d*/
    }
  }
  return 0; /*0x7ab252*/
}
} // namespace gamemd

// 0x7AB260
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_43(int a1, int a2, int a3, const char * a4, wchar_t * String)
{
  bool v7; // bl

  if ( !(((unsigned char *)&(DataGlobal_B77DC0))[1]) && a2 >= 0 ) /*0x7ab275*/
  {
  wchar_t *v5; // edi
    v5 = String; /*0x7ab27b*/
    ((WideString *)((wchar_t **)&a2))->Assign(String); /*0x7ab285*/
  const char *v6; // esi
    v6 = a4; /*0x7ab28a*/
    if ( a4 ) /*0x7ab290*/
    {
      if ( (*a4 & 1) != 0 ) /*0x7ab299*/
      {
        v7 = 1; /*0x7ab29b*/
      }
      else if ( Dialog::FindByHandle((Dialog *)0xC2) ) /*0x7ab2a4*/
      {
        v7 = 1; /*0x7ab2ad*/
      }
      else if ( Dialog::FindByHandle((Dialog *)0xC9) ) /*0x7ab2b6*/
      {
        v7 = 1; /*0x7ab2bf*/
      }
      else
      {
  bool v8; // zf
        v8 = (uint8_t)WideString::IsASCII((const wchar_t **)&a2) == 0; /*0x7ab2cc*/
  void *DynamicVector_field_0x10; // eax
        DynamicVector_field_0x10 = DataGlobal_B779C0; /*0x7ab2ce*/
        if ( v8 ) /*0x7ab2d3*/
          DynamicVector_field_0x10 = (void *)dword_B779DC; /*0x7ab2d5*/
        v7 = DynamicVector_field_0x10 != 0; /*0x7ab2dc*/
      }
    }
    else
    {
      v7 = 0; /*0x7ab292*/
    }
    DeleteAndZero::Alt((DeleteAndZero *)&a2); /*0x7ab2e3*/
    if ( v7 && IsBuddyOrIgnoreWOL(v6) ) /*0x7ab2ef*/
    {
  char *v10; // esi
      v10 = (char *)(v6 + 36); /*0x7ab2f8*/
      if ( _strcmpi(unk_A8B380, v10) ) /*0x7ab301*/
        Dialog::ShowMessage(3166463, (size_t)g_Str_Trace__hs, v10, v5); /*0x7ab31a*/
    }
  }
  return 0; /*0x7ab322*/
}
} // namespace gamemd

// 0x7AB330
namespace gamemd {
int CComObject_CChatEventSink___ATL::COMStub_Return0(int a1, int a2, int a3, int a4)
{
  return 0; /*0x7ab332*/
}
} // namespace gamemd

// 0x7AB340
namespace gamemd {
int CComObject_CChatEventSink___ATL::StubReturnFalse(int a1, int a2, int a3)
{
  return 0; /*0x7ab342*/
}
} // namespace gamemd

// 0x7AB350
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_29(int a1, int a2, __time32_t Time)
{

  if ( !byte_B77DC1 && !a2 ) /*0x7ab368*/
  {
  char *v5; // [esp-4h] [ebp-194h]
    v5 = unknown_libname_75(&Time); /*0x7ab381*/
  wchar_t *StringCSF; // eax
    StringCSF = GetStringCSF(aTxtBannedtill, 0, g_Str_File_wonline_cpp, 8809); /*0x7ab38c*/
  wchar_t Buffer[200]; // [esp+0h] [ebp-190h] BYREF
    swprintf(Buffer, (const size_t)StringCSF, (const wchar_t *const)v5); /*0x7ab397*/
    ShowDialogConfirm(Buffer, 0, (uint8_t (*)(void))GameLoop::Thunk, 0); /*0x7ab3ac*/
  }
  return 0; /*0x7ab3b3*/
}
} // namespace gamemd

// 0x7AB3C0
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_31(int a1, int a2, unsigned char * a3, int a4)
{

  if ( !(((unsigned char *)&(DataGlobal_B77DC0))[1]) ) /*0x7ab3c7*/
  {
    if ( a4 ) /*0x7ab3d3*/
    {
  char *v7; // [esp-4h] [ebp-4h]
      v7 = CharToWideString(a3); /*0x7ab3da*/
  wchar_t *StringCSF; // eax
      StringCSF = GetStringCSF(aTxtChanBan, 0, g_Str_File_wonline_cpp, 8822); /*0x7ab3ec*/
      Dialog::ShowMessage(-1, (size_t)StringCSF, v7); /*0x7ab3f8*/
      return 0; /*0x7ab402*/
    }
  char *v8; // [esp-4h] [ebp-4h]
    v8 = CharToWideString(a3); /*0x7ab40a*/
  wchar_t *v6; // eax
    v6 = GetStringCSF(aTxtChanUnban, 0, g_Str_File_wonline_cpp, 8825); /*0x7ab41c*/
    Dialog::ShowMessage(-1, (size_t)v6, v8); /*0x7ab429*/
  }
  return 0; /*0x7ab402*/
}
} // namespace gamemd

// 0x7AC4A0
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_38(int a1, int a2, int a3)
{
  return 0; /*0x7ac4a2*/
}
} // namespace gamemd

// 0x7AC4B0
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_39(int a1, int a2, int a3)
{
  return 0; /*0x7ac4b2*/
}
} // namespace gamemd

// 0x7AC4C0
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_45(int a1, int a2, int a3)
{
  return 0; /*0x7ac4c2*/
}
} // namespace gamemd

// 0x7AC4D0
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_46(int a1, int a2, int a3)
{
  return 0; /*0x7ac4d2*/
}
} // namespace gamemd

// 0x7AC4E0
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_47(int a1, int a2, int a3)
{
  return 0; /*0x7ac4e2*/
}
} // namespace gamemd

// 0x7AC690
namespace gamemd {
LONG CComObject_CChatEventSink___ATL::AddRef(void *a1_1)
{

  int v2; // [esp+4h] [ebp+4h]
  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x7ac69e*/
}
} // namespace gamemd
