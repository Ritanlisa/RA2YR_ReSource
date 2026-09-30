// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_7A0DD0_e4.hpp"
#include "e4/classes/E4Recv_7A2830_e4.hpp"
#include "e4/classes/E4Recv_7AC9D0_e4.hpp"
#include "e4/classes/E4Recv_7ACBD0_e4.hpp"
#include "e4/classes/E4Recv_7AF3D0_e4.hpp"
#include "e4/classes/E4Recv_7AF640_e4.hpp"
#include "e4/classes/CComObject_CChatEventSink___ATL_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/E4Recv_7B2E50_e4.hpp"
#include "e4/classes/Compare_e4.hpp"
#include "e4/classes/E4Recv_7B60E0_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/E4Recv_7B7C00_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/WWMouseClass_e4.hpp"
#include "e4/classes/E4Recv_7B9530_e4.hpp"

// 0x7A0430
namespace gamemd {
Coord * * int CollectWOLConnectionTokens()
{
  signed int result; // eax
  int v2; // ebx
  int v3; // ebp
  char *v4; // eax
  int vtable3; // eax
  int v6; // esi
  int uniqueId; // ebx
  void *v8; // ebp
  void *abstractFlags; // eax
  int v10; // ebx
  void *v11; // ebp
  void *v12; // eax
  String *v13; // ecx
  void *v14; // [esp+8h] [ebp-7Ch]
  String v15; // [esp+Ch] [ebp-78h] BYREF
  int v16; // [esp+14h] [ebp-70h]
  unsigned char v17[108]; // [esp+18h] [ebp-6Ch] BYREF

  memset(v17, 0, sizeof(v17)); /*0x7a0440*/
  Debug::Log(); /*0x7a044d*/
  result = g_WOL_UserList.owningHouseIndex; /*0x7a0452*/
  v2 = 0; /*0x7a045a*/
  *(unsigned int *)&v15.m_3[1] = 0; /*0x7a045e*/
  if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x7a0462*/
  {
    v3 = 0; /*0x7a0469*/
    v16 = 0; /*0x7a046c*/
    do /*0x7a0673*/
    {
      if ( v3 >= 0 && v2 < result ) /*0x7a0476*/
        qmemcpy(v17, (char *)g_WOL_UserList.nextObject + v3, sizeof(v17)); /*0x7a048a*/
      if ( (v17[0] & 1) != 0 /*0x7a04ba*/
        || (v4 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]), !_strcmpi(&v17[36], v4)) )
      {
        Debug::Log(); /*0x7a049d*/
      }
      else
      {
        String::Assign(&v15, &v17[36]); /*0x7a04e6*/
        String::GetOrEmpty(&v15); /*0x7a04ef*/
        Debug::Log(); /*0x7a04fa*/
        vtable3 = (int)stru_B76AC4.?; /*0x7a04ff*/
        v6 = (int)stru_B76AC4.?; /*0x7a0507*/
        v14 = stru_B76AC4.?; /*0x7a050b*/
        uniqueId = stru_B76AC4.?; /*0x7a0515*/
        if ( (int)stru_B76AC4.? >= stru_B76AC4.? ) /*0x7a051d*/
        {
          uniqueId = 2 * (int)stru_B76AC4.?; /*0x7a0527*/
          if ( 2 * (int)stru_B76AC4.? < 10 ) /*0x7a052d*/
            uniqueId = 10; /*0x7a052f*/
          v8 = (void *)RA2_OPNEW(4 * uniqueId); /*0x7a0543*/
          memset(v8, 0, 4 * ((unsigned int)(4 * uniqueId) >> 2)); /*0x7a0551*/
          abstractFlags = (void *)stru_B76AC4.?; /*0x7a055a*/
          if ( stru_B76AC4.? ) /*0x7a0561*/
          {
            qmemcpy(v8, (const void *)stru_B76AC4.?, 4 * (int)stru_B76AC4.?); /*0x7a056d*/
            abstractFlags = (void *)stru_B76AC4.?; /*0x7a056f*/
            v6 = (int)v14; /*0x7a0574*/
          }
          RA2_OPDEL(abstractFlags); /*0x7a0579*/
          vtable3 = (int)stru_B76AC4.?; /*0x7a057e*/
          stru_B76AC4.? = (int)v8; /*0x7a0586*/
          stru_B76AC4.? = uniqueId; /*0x7a058c*/
        }
        if ( vtable3 >= uniqueId ) /*0x7a0594*/
        {
          v10 = 2 * vtable3; /*0x7a0596*/
          if ( 2 * vtable3 < 10 ) /*0x7a059c*/
            v10 = 10; /*0x7a059e*/
          v11 = (void *)RA2_OPNEW(4 * v10); /*0x7a05b2*/
          memset(v11, 0, 4 * ((unsigned int)(4 * v10) >> 2)); /*0x7a05c0*/
          v12 = (void *)stru_B76AC4.?; /*0x7a05c9*/
          if ( stru_B76AC4.? ) /*0x7a05d0*/
          {
            qmemcpy(v11, (const void *)stru_B76AC4.?, 4 * (int)stru_B76AC4.?); /*0x7a05dc*/
            v12 = (void *)stru_B76AC4.?; /*0x7a05de*/
            v6 = (int)v14; /*0x7a05e3*/
          }
          RA2_OPDEL(v12); /*0x7a05e8*/
          vtable3 = (int)stru_B76AC4.?; /*0x7a05ed*/
          stru_B76AC4.? = (int)v11; /*0x7a05f5*/
          stru_B76AC4.? = v10; /*0x7a05fb*/
        }
        if ( v6 < vtable3 ) /*0x7a0603*/
        {
          memcpy( /*0x7a0620*/
            (void *)(stru_B76AC4.? + 4 * v6 + 4),
            (const void *)(stru_B76AC4.? + 4 * v6),
            4 * (vtable3 + 0x3FFFFFFF * v6));
          vtable3 = (int)stru_B76AC4.?; /*0x7a0625*/
        }
        v13 = (String *)(stru_B76AC4.? + 4 * v6); /*0x7a0633*/
        if ( v13 ) /*0x7a0638*/
        {
          String::AssignFromPtr(v13, (const char **)&v15); /*0x7a063f*/
          vtable3 = (int)stru_B76AC4.?; /*0x7a0644*/
        }
        stru_B76AC4.? = (void *)(vtable3 + 1); /*0x7a064e*/
        DeleteAndZero((ObjectClass *)&v15); /*0x7a0653*/
        v3 = v16; /*0x7a0658*/
        v2 = *(unsigned int *)&v15.q4; /*0x7a065c*/
      }
      result = g_WOL_UserList.owningHouseIndex; /*0x7a0660*/
      ++v2; /*0x7a0665*/
      v3 += 108; /*0x7a0666*/
      *(unsigned int *)&v15.q4 = v2; /*0x7a066b*/
      v16 = v3; /*0x7a066f*/
    }
    while ( v2 < g_WOL_UserList.owningHouseIndex ); /*0x7a0673*/
  }
  return result; /*0x7a067b*/
}
}
// 0x7A0690
namespace gamemd {
void WOL_RequestMatch(void * a1)
{
  HWND v1; // eax
  int i; // esi
  int v3; // esi
  int v4; // ebp
  int v5; // eax
  ObjectClass *nextObject; // ebx
  void * PlayerProfile;
  int v9; // esi
  void * matched;
  char **v11; // eax
  wchar_t *StringCSF; // eax
  char **v13; // eax
  char **v14; // eax
  int v15; // esi
  int v16; // edi
  int v17; // esi
  char **v18; // eax
  int v19; // eax
  char **v20; // eax
  char **v21; // eax
  int v22; // esi
  char **v23; // eax
  char **v24; // eax
  char **v25; // eax
  int v26; // esi
  char *v27; // eax
  ObjectClass *v28; // [esp+0h] [ebp-124h]
  Performance *v29; // [esp+0h] [ebp-124h]
  ObjectClass *v30; // [esp+0h] [ebp-124h]
  unsigned char v31[276]; // [esp+10h] [ebp-114h] BYREF

  DeleteAndZero::Alt2((DeleteAndZero *)&stru_B76AC4); /*0x7a069f*/
  v1 = (HWND)Dialog::FindByHandle((Dialog *)0x11F); /*0x7a06a9*/
  if ( v1 ) /*0x7a06b2*/
    CloseDialog(v1, 0); /*0x7a06b8*/
  g_NetworkLobbyState = 0; /*0x7a06bd*/
    ((Network *)0)->Init();
  if ( g_WOL_UserList.owningHouseIndex < 2 ) /*0x7a06cf*/
    goto LABEL_17; /*0x7a06cf*/
  for ( i = 0; i < (int)stru_B76AC4.?; ++i ) /*0x7a06de*/
    DeleteAndZero((ObjectClass *)(stru_B76AC4.? + 4 * i)); /*0x7a06e8*/
  v3 = 0; /*0x7a06fc*/
  for ( stru_B76AC4.? = 0; v3 < stru_B76900.estimatedHealth; ++v3 ) /*0x7a0706*/
    DeleteAndZero((ObjectClass *)(stru_B76900.spawnStatus + 4 * v3)); /*0x7a0711*/
  stru_B76900.estimatedHealth = 0; /*0x7a0720*/
  dword_B736F4 = 0; /*0x7a0726*/
  CollectWOLConnectionTokens(v28); /*0x7a072c*/
  memset(&v31[168], 0, 0x6Cu); /*0x7a074b*/
  v4 = -1; /*0x7a074d*/
    ((Debug *)0)->Log();
  v5 = 0; /*0x7a075e*/
  if ( g_WOL_UserList.owningHouseIndex <= 0 ) /*0x7a0762*/
    goto LABEL_17; /*0x7a0762*/
  nextObject = g_WOL_UserList.nextObject; /*0x7a0764*/
  do /*0x7a0794*/
  {
    if ( v5 >= 0 && v5 < g_WOL_UserList.owningHouseIndex ) /*0x7a0770*/
      qmemcpy(&v31[168], nextObject, 0x6Cu); /*0x7a0780*/
    if ( (v31[168] & 1) != 0 ) /*0x7a078a*/
      v4 = v5; /*0x7a078c*/
    ++v5; /*0x7a078e*/
    nextObject = (ObjectClass *)((char *)nextObject + 108); /*0x7a078f*/
  }
  while ( v5 < g_WOL_UserList.owningHouseIndex ); /*0x7a0794*/
  if ( v4 == -1 ) /*0x7a0799*/
  {
  LABEL_17:
    g_WOL_GameListState = 1; /*0x7a079e*/
    g_WOL_IdleHandler = 0; /*0x7a07a8*/
    g_WOL_GameProcessState = -1; /*0x7a07ae*/
    g_WOL_GameListPool = time(0); /*0x7a07c0*/
    return 0; /*0x7a07d1*/
  }
  memset(&v31[60], 0, 0x6Cu); /*0x7a07e1*/
  if ( v4 >= 0 && v4 < g_WOL_UserList.owningHouseIndex ) /*0x7a07e7*/
    qmemcpy(&v31[60], (char *)g_WOL_UserList.nextObject + 108 * v4, 0x6Cu); /*0x7a0802*/
  *(unsigned int *)&v31[92] = 0; /*0x7a0808*/
  *(unsigned int *)&v31[36] = 0; /*0x7a080c*/
  v31[40] = 0; /*0x7a0810*/
  ReadRegistryOptionsWOL((ObjectClass *)&v31[36]); /*0x7a0815*/
  ((ComPtr *)((ComPtr *)&v31[24]))->Constructor(); /*0x7a081e*/
  *(unsigned int *)&v31[24] = (void*)&rc_ptr_PlayerProfile_vftable; /*0x7a082c*/
  if ( (uint8_t)Flag::IsNot2((Flag *)&v31[36]) ) /*0x7a0830*/
  {
    PlayerProfile = (unsigned int)(LoadPlayerProfile((ObjectClass *)&v31[16], (const char **)&g_WindowManager.__pad_EC[684]));
    ComPtr::Set((ComPtr *)&v31[24], (int)PlayerProfile->?); /*0x7a084f*/
    *(unsigned int *)&v31[16] = (void*)&rc_ptr_PlayerProfile_vftable; /*0x7a0858*/
    ComPtr::Release((ComPtr *)&v31[16]); /*0x7a085c*/
  }
  else
  {
    ((ComPtr *)((ComPtr *)&v31[24]))->Set(stru_B75E48.ComPtr_field_0x04); /*0x7a086d*/
  }
  v9 = *(unsigned int *)(*(unsigned int *)&v31[28] + 28); /*0x7a087b*/
  String::Assign((String *)&v31[32], aMatch); /*0x7a0882*/
  unknown_libname_73(&v31[8]); /*0x7a088b*/
  if ( dword_A8B244 != 3 ) /*0x7a0897*/
    goto LABEL_35; /*0x7a0897*/
  String::Assign_Alt((String *)&v31[32], aMatchwdt); /*0x7a08a6*/
  matched = RequestMatchWOL_Helper(); /*0x7a08b4*/
  ((ComPtr *)((ComPtr *)&v31[16]))->Constructor(); /*0x7a08b6*/
  *(unsigned int *)&v31[16] = (void*)&rc_ptr_WorldDominationTour_Campaign_vftable; /*0x7a08c4*/
  ((ComPtr *)((ComPtr *)&v31[16]))->Set(matched[1]); /*0x7a08cc*/
  if ( *(unsigned int *)&v31[20] ) /*0x7a08d7*/
  {
    if ( *(unsigned int *)(*(unsigned int *)&v31[20] + 68) == 2 ) /*0x7a08f2*/
    {
      String::Assign_Alt((String *)&v31[8], aWds0); /*0x7a097a*/
      if ( v9 <= 4 ) /*0x7a0982*/
        goto LABEL_34; /*0x7a0982*/
    }
    else
    {
      if ( *(unsigned int *)(*(unsigned int *)&v31[20] + 68) != 3 ) /*0x7a08f5*/
      {
        g_WOL_GameListState = (unsigned int)(0);
        g_WOL_IdleHandler = (unsigned int)(0);
        g_WOL_GameProcessState = (unsigned int)(-1);
        g_WOL_GameListPool = (unsigned int)(time(0));
        *(unsigned int *)&v31[16] = (void*)&rc_ptr_WorldDominationTour_Campaign_vftable; /*0x7a091f*/
        ComPtr::Release((ComPtr *)&v31[16]); /*0x7a0923*/
        DeleteAndZero((ObjectClass *)&v31[8]); /*0x7a092c*/
        DeleteAndZero((ObjectClass *)&v31[32]); /*0x7a0935*/
        *(unsigned int *)&v31[24] = (void*)&rc_ptr_PlayerProfile_vftable; /*0x7a093e*/
        ComPtr::Release((ComPtr *)&v31[24]); /*0x7a0946*/
        return 0; /*0x7a0957*/
      }
      String::Assign_Alt((String *)&v31[8], aWds1); /*0x7a0961*/
      if ( (unsigned int)v9 > 4 ) /*0x7a0968*/
        goto LABEL_34; /*0x7a0968*/
    }
    v9 = -1; /*0x7a0984*/
    goto LABEL_34; /*0x7a0984*/
  }
  String::Assign_Alt((String *)&v31[8], aWds0); /*0x7a08e2*/
  LABEL_34:
  String::Append((String *)&v31[8], aWdt); /*0x7a0987*/
  v11 = FromStringInt((char **)&v31[4], *(int *)dword_A8B240); /*0x7a099f*/
  String::Append2((String *)&v31[8], v11); /*0x7a09a9*/
  DeleteAndZero((ObjectClass *)&v31[4]); /*0x7a09b2*/
  *(unsigned int *)&v31[16] = (void*)&rc_ptr_WorldDominationTour_Campaign_vftable; /*0x7a09bb*/
  ComPtr::Release((ComPtr *)&v31[16]); /*0x7a09bf*/
  LABEL_35:
  StringCSF = GetStringCSF(aWolRequestingm, 0, g_Str_File_wonline_cpp, 28395); /*0x7a09c9*/
  Dialog::ShowMessage(16744576, (size_t)StringCSF); /*0x7a09e6*/
  String::AssignFromPtr((String *)v31, (const char **)&v31[32]); /*0x7a09f7*/
  String::Append((String *)v31, aCou); /*0x7a0a05*/
  v13 = FromStringInt((char **)&v31[4], v9); /*0x7a0a10*/
  String::Append2((String *)v31, v13); /*0x7a0a1a*/
  DeleteAndZero((ObjectClass *)&v31[4]); /*0x7a0a23*/
  String::Append((String *)v31, aCol); /*0x7a0a31*/
  v14 = FromStringInt((char **)&v31[4], *(unsigned int *)(*(unsigned int *)&v31[28] + 32)); /*0x7a0a41*/
  String::Append2((String *)v31, v14); /*0x7a0a4b*/
  DeleteAndZero((ObjectClass *)&v31[4]); /*0x7a0a54*/
  String::Append((String *)v31, aMbr); /*0x7a0a62*/
  if ( *(unsigned char *)(*(unsigned int *)&v31[28] + 56) ) /*0x7a0a6b*/
    String::Append((String *)v31, (const char *)a1); /*0x7a0a77*/
  else
    String::Append((String *)v31, (const char *)&stru_82BA00.?); /*0x7a0a82*/
  ((String *)((String *)&v31[12]))->AssignFromPtr((const char **)&g_WindowManager.__pad_EC[684]); /*0x7a0a90*/
  ((String *)((String *)&v31[12]))->ToLower(); /*0x7a0a99*/
  v15 = *(unsigned int *)(*(unsigned int *)g_WOL_ConnectionPool.__pad_0 /*0x7a0abd*/
                  + 4 * (dword_B76548(&v31[12]) & ((1 << IDA_SLOBYTE(g_WOL_ConnectionPool.HashMap_field_0x0C)) - 1)));
  if ( v15 ) /*0x7a0ac2*/
  {
    while ( !(uint8_t)String::Compare((String *)v15, (const char **)&v31[12]) ) /*0x7a0ad6*/
    {
      v15 = *(unsigned int *)(v15 + 8); /*0x7a0ad8*/
      if ( !v15 ) /*0x7a0add*/
        goto LABEL_50; /*0x7a0add*/
    }
    v16 = 0; /*0x7a0ae9*/
    if ( g_WOL_ConnectionPool.HashMap_field_0x04 ) /*0x7a0aed*/
    {
      v17 = *(unsigned int *)(*(unsigned int *)g_WOL_ConnectionPool.__pad_0 /*0x7a0b0e*/
                      + 4 * (dword_B76548(&v31[12]) & ((1 << IDA_SLOBYTE(g_WOL_ConnectionPool.HashMap_field_0x0C)) - 1)));
      if ( v17 ) /*0x7a0b13*/
      {
        while ( !(uint8_t)String::Compare((String *)v17, (const char **)&v31[12]) ) /*0x7a0b23*/
        {
          v17 = *(unsigned int *)(v17 + 8); /*0x7a0b25*/
          if ( !v17 ) /*0x7a0b2a*/
            goto LABEL_49; /*0x7a0b2a*/
        }
        if ( v17 != -4 ) /*0x7a0b37*/
          v16 = *(unsigned int *)(v17 + 4); /*0x7a0b39*/
      }
    }
  LABEL_49:
    String::Append((String *)v31, aLoc); /*0x7a0b3b*/
    v18 = FromStringInt((char **)&v31[4], v16); /*0x7a0b4f*/
    String::Append2((String *)v31, v18); /*0x7a0b59*/
    DeleteAndZero((ObjectClass *)&v31[4]); /*0x7a0b62*/
  }
  LABEL_50:
  String::Append((String *)v31, aRat); /*0x7a0b67*/
  v19 = Performance::Profile(v29); /*0x7a0b75*/
  v20 = FromStringInt((char **)&v31[4], v19); /*0x7a0b80*/
  String::Append2((String *)v31, v20); /*0x7a0b8a*/
  DeleteAndZero((ObjectClass *)&v31[4]); /*0x7a0b93*/
  String::Append((String *)v31, aRes); /*0x7a0ba1*/
  v21 = FromStringInt((char **)&v31[4], stru_A8EB00.ObjectTypeClass[33]); /*0x7a0bb0*/
  String::Append2((String *)v31, v21); /*0x7a0bba*/
  DeleteAndZero((ObjectClass *)&v31[4]); /*0x7a0bc3*/
  Network::GetAddress((Network *)&stru_A8DBC0, &v31[56], (int)&v31[48], &v31[46]); /*0x7a0bdc*/
  v22 = *(unsigned int *)&v31[48]; /*0x7a0be1*/
  String::Append((String *)v31, aAdr); /*0x7a0bee*/
  v23 = FromStringInt((char **)&v31[4], v22); /*0x7a0bf9*/
  String::Append2((String *)v31, v23); /*0x7a0c03*/
  DeleteAndZero((ObjectClass *)&v31[4]); /*0x7a0c0c*/
  String::Append((String *)v31, aNat); /*0x7a0c1a*/
  v24 = (unsigned int)(FromStringInt((char **)&v31[4], (uint16_t)dword_ABFEC8));
  String::Append2((String *)v31, v24); /*0x7a0c39*/
  DeleteAndZero((ObjectClass *)&v31[4]); /*0x7a0c42*/
  String::Append((String *)v31, aPrt); /*0x7a0c50*/
  v25 = FromStringInt((char **)&v31[4], dword_A8E228); /*0x7a0c5f*/
  String::Append2((String *)v31, v25); /*0x7a0c69*/
  DeleteAndZero((ObjectClass *)&v31[4]); /*0x7a0c72*/
  String::Append2((String *)v31, (char **)&v31[8]); /*0x7a0c80*/
  v26 = *(unsigned int *)ppv; /*0x7a0c8e*/
  v27 = ((String *)((String *)v31))->GetOrEmpty(); /*0x7a0c90*/
  (*(void (__stdcall **)(LPVOID, unsigned char *, char *))(v26 + 48))(ppv, &v31[60], v27); /*0x7a0ca2*/
  g_WOL_GameListState = 0; /*0x7a0ca5*/
  g_WOL_IdleHandler = 4; /*0x7a0cac*/
  g_WOL_GameProcessState = 180; /*0x7a0cb6*/
  g_WOL_GameListPool = time(0); /*0x7a0cc8*/
  ProcessPingRequestsWOL(v30); /*0x7a0ccd*/
  DeleteAndZero((ObjectClass *)&v31[12]); /*0x7a0cd6*/
  DeleteAndZero((ObjectClass *)v31); /*0x7a0cdf*/
  DeleteAndZero((ObjectClass *)&v31[8]); /*0x7a0ce8*/
  DeleteAndZero((ObjectClass *)&v31[32]); /*0x7a0cf1*/
  *(unsigned int *)&v31[24] = (void*)&rc_ptr_PlayerProfile_vftable; /*0x7a0cfa*/
  ComPtr::Release((ComPtr *)&v31[24]); /*0x7a0cfe*/
  return 1; /*0x7a07c7*/
}
}
// 0x7A0DD0
namespace gamemd {
void E4Recv_7A0DD0::sub_7A0DD0()
{

  int v2; // ebp
  char **v3; // edi
  HWND GameUI; // eax

  if ( this ) /*0x7a0dd8*/
  {
    v2 = 0; /*0x7a0dda*/
    v3 = (char **)dword_A8DA90; /*0x7a0ddc*/
    while ( !*v3 || strcmp(ToWideStringChar(*v3), (const char *)&this->occupant) ) /*0x7a0e1a*/
    {
      ++v3; /*0x7a0e1c*/
      ++v2; /*0x7a0e1f*/
      if ( (int)v3 >= (int)&dword_A8DAB0 ) /*0x7a0e26*/
        return; /*0x7a0e26*/
    }
    GameUI = (HWND)this->Dialog::FindGameUI(); /*0x7a0e2d*/
    if ( GameUI ) /*0x7a0e34*/
      UpdateLobbyGraphicsWOL(GameUI, v2, -1); /*0x7a0e3c*/
  }

}
}
// 0x7A1060
namespace gamemd {
Coord * * WOL_ProcessPingRequests()
{
  char result; // al
  ULONG S_addr; // ebx
  char *v3; // eax
  int owningHouseIndex; // eax
  char *v5; // ebp
  int v6; // esi
  int v7; // edi
  char *v8; // eax
  int v9; // esi
  char *v10; // eax
  char *v11; // esi
  char v12; // [esp+13h] [ebp-79h]
  String v13; // [esp+14h] [ebp-78h] BYREF
  int v14; // [esp+1Ch] [ebp-70h] BYREF
  struct in_addr v15[27]; // [esp+20h] [ebp-6Ch] BYREF

  v12 = 0; /*0x7a1072*/
  memset(v15, 0, sizeof(v15)); /*0x7a1077*/
  result = g_NetworkLobbyState; /*0x7a1079*/
  if ( !g_NetworkLobbyState ) /*0x7a1080*/
  {
        ((Debug *)0)->Log();
    result = (char)stru_B76AC4.?; /*0x7a109d*/
    if ( stru_B76AC4.? ) /*0x7a10a7*/
    {
      S_addr = ((unsigned int *)(v15))[6].S_un.S_addr; /*0x7a10ad*/
      while ( 1 ) /*0x7a10b1*/
      {
        if ( stru_B76900.estimatedHealth >= 10 ) /*0x7a10b8*/
          return result; /*0x7a10b8*/
        result = v12; /*0x7a10be*/
        if ( v12 ) /*0x7a10c4*/
          return result; /*0x7a10c4*/
        unknown_libname_73(&v13); /*0x7a10ce*/
        if ( (int)stru_B76AC4.? > 0 ) /*0x7a10da*/
          String::Reassign(&v13, (const char **)stru_B76AC4.?); /*0x7a10e7*/
        ((String *)(&v13))->GetOrEmpty(); /*0x7a10f0*/
        ((Debug *)0)->Log(); /*0x7a10fb*/
        v3 = ((String *)(&v13))->GetOrEmpty(); /*0x7a1107*/
        String::Assign((String *)&((unsigned int *)(v13.m_3))[1], v3); /*0x7a1111*/
        owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7a1116*/
        v5 = 0; /*0x7a111b*/
        v6 = 0; /*0x7a111d*/
        if ( g_WOL_UserList.owningHouseIndex <= 0 ) /*0x7a1121*/
        {
  LABEL_15:
          v6 = -1; /*0x7a115c*/
        }
        else
        {
          v7 = 0; /*0x7a1123*/
          while ( 1 ) /*0x7a1125*/
          {
            if ( v7 >= 0 && v6 < owningHouseIndex ) /*0x7a112b*/
              v5 = (char *)g_WOL_UserList.nextObject + v7; /*0x7a1132*/
            v8 = ((String *)((String *)&v13.q4))->GetOrEmpty_Alt(); /*0x7a113d*/
            if ( !_strcmpi(v8, v5 + 36) ) /*0x7a1143*/
              break; /*0x7a1143*/
            owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7a114f*/
            ++v6; /*0x7a1154*/
            v7 += 108; /*0x7a1155*/
            if ( v6 >= g_WOL_UserList.owningHouseIndex ) /*0x7a115a*/
              goto LABEL_15; /*0x7a115a*/
          }
        }
        DeleteAndZero((ObjectClass *)&((unsigned int *)(v13.m_3))[1]); /*0x7a1163*/
        if ( v6 == -1 ) /*0x7a116b*/
        {
          if ( (int)stru_B76AC4.? > 0 ) /*0x7a127f*/
          {
            String::Reassign(&v13, (const char **)stru_B76AC4.?); /*0x7a128c*/
            v11 = 0; /*0x7a1296*/
            if ( stru_B76AC4.? ) /*0x7a129a*/
            {
              if ( (int)stru_B76AC4.? <= 0 ) /*0x7a129c*/
                v11 = (char *)stru_B76AC4.? - 1; /*0x7a129e*/
              DeleteAndZero((ObjectClass *)(stru_B76AC4.? + 4 * (unsigned int)v11)); /*0x7a12a9*/
              memcpy( /*0x7a12d2*/
                (void *)(stru_B76AC4.? + 4 * (unsigned int)v11),
                (const void *)(stru_B76AC4.? + 4 * (unsigned int)(v11 + 1)),
                4 * ((int)stru_B76AC4.? + 0x3FFFFFFF * (unsigned int)(v11 + 1)));
              if ( 3 * (int)--stru_B76AC4.? <= stru_B76AC4.? ) /*0x7a12ef*/
                VectorClass::Shrink((VectorClass *)&stru_B76AC4.?); /*0x7a12f6*/
            }
          }
          goto LABEL_36; /*0x7a12f6*/
        }
        if ( v6 >= 0 && v6 < g_WOL_UserList.owningHouseIndex ) /*0x7a117b*/
        {
          qmemcpy(v15, (char *)g_WOL_UserList.nextObject + 108 * v6, sizeof(v15)); /*0x7a1194*/
          S_addr = v15[6].S_un.S_addr; /*0x7a1196*/
        }
        if ( !S_addr ) /*0x7a119c*/
          break; /*0x7a119c*/
        String::GetOrEmpty(&v13); /*0x7a11a6*/
        Debug::Log(); /*0x7a11b1*/
        v9 = *(unsigned int *)g_UIPointerTable; /*0x7a11c3*/
        v10 = ntoainet((struct in_addr)S_addr); /*0x7a11cc*/
        if ( !(*(int (__stdcall **)(LPVOID, char *, int, int *))(v9 + 24))(g_UIPointerTable, v10, 1000, &v14) /*0x7a11e5*/
          && v14 >= 0 )
        {
          StringVector::Insert( /*0x7a11f8*/
            (StringVector *)&stru_B76900.estimatedHealth,
            (const char **)&v13,
            stru_B76900.estimatedHealth);
          if ( (int)stru_B76AC4.? > 0 ) /*0x7a1204*/
          {
            String::Reassign(&v13, (const char **)stru_B76AC4.?); /*0x7a1210*/
            DynamicArray::Remove((DynamicArray *)&stru_B76AC4.?, 0); /*0x7a121c*/
          }
  LABEL_36:
          String::GetOrEmpty(&v13); /*0x7a12fb*/
          Debug::Log(); /*0x7a130a*/
          goto LABEL_37; /*0x7a130a*/
        }
        v12 = 1; /*0x7a1235*/
  LABEL_37:
        DeleteAndZero((ObjectClass *)&v13); /*0x7a1312*/
        result = (char)stru_B76AC4.?; /*0x7a131b*/
        if ( !stru_B76AC4.? ) /*0x7a1322*/
          return result; /*0x7a1322*/
      }
      if ( (int)stru_B76AC4.? > 0 ) /*0x7a1246*/
      {
        String::Reassign(&v13, (const char **)stru_B76AC4.?); /*0x7a1253*/
        DynamicArray::Remove((DynamicArray *)&stru_B76AC4.?, 0); /*0x7a125f*/
      }
      goto LABEL_36; /*0x7a125f*/
    }
  }
  return result; /*0x7a1328*/
}
}
// 0x7A1330
namespace gamemd {
Coord * * UpdateWOLLobbyPings()
{
  int v1; // ebp
  int v2; // esi
  char *v3; // eax
  int owningHouseIndex; // eax
  char *v5; // ebx
  int v6; // esi
  int v7; // edi
  char *v8; // eax
  char **v9; // eax
  char **v10; // eax
  char **v11; // eax
  char **v12; // eax
  int v13; // eax
  ObjectClass *nextObject; // edx
  int v15; // esi
  char *v16; // eax
  char **v17; // [esp-8h] [ebp-B4h]
  char **v18; // [esp+0h] [ebp-ACh]
  String v19; // [esp+14h] [ebp-98h] BYREF
  int v20; // [esp+1Ch] [ebp-90h] BYREF
  int v21; // [esp+20h] [ebp-8Ch]
  String v22; // [esp+24h] [ebp-88h] BYREF
  String v23; // [esp+2Ch] [ebp-80h] BYREF
  char *v24; // [esp+34h] [ebp-78h] BYREF
  String v25; // [esp+38h] [ebp-74h] BYREF
  unsigned int v26[27]; // [esp+40h] [ebp-6Ch] BYREF

  memset(v26, 0, sizeof(v26)); /*0x7a1342*/
  v21 = 0; /*0x7a1349*/
  if ( !g_NetworkLobbyState ) /*0x7a1353*/
  {
    String::Assign((String *)&v19.m_3[1], aPings); /*0x7a1364*/
    Debug::Log(); /*0x7a1374*/
    if ( stru_B76900.estimatedHealth ) /*0x7a1383*/
    {
      v1 = v26[6]; /*0x7a138a*/
      do /*0x7a15ff*/
      {
        unknown_libname_73(&v19); /*0x7a1392*/
        v2 = stru_B76900.estimatedHealth - 1; /*0x7a139c*/
        if ( stru_B76900.estimatedHealth - 1 >= 0 && v2 < stru_B76900.estimatedHealth ) /*0x7a13a9*/
        {
          String::Reassign(&v19, (const char **)(stru_B76900.spawnStatus + 4 * v2)); /*0x7a13b9*/
          if ( stru_B76900.estimatedHealth ) /*0x7a13c5*/
          {
            if ( v2 >= stru_B76900.estimatedHealth ) /*0x7a13c9*/
              v2 = stru_B76900.estimatedHealth - 1; /*0x7a13cb*/
            Object::DtorWithDelete((Object *)(stru_B76900.spawnStatus + 4 * v2), 0); /*0x7a13d8*/
            memcpy( /*0x7a1401*/
              (void *)(stru_B76900.spawnStatus + 4 * v2),
              (const void *)(stru_B76900.spawnStatus + 4 * (v2 + 1)),
              4 * (stru_B76900.estimatedHealth + 0x3FFFFFFF * (v2 + 1)));
            --stru_B76900.estimatedHealth; /*0x7a140f*/
            if ( 3 * stru_B76900.estimatedHealth <= *(int *)&stru_B76900.isOnMap ) /*0x7a141e*/
              VectorClass::Shrink((VectorClass *)&stru_B76900.estimatedHealth); /*0x7a1425*/
          }
        }
        String::GetOrEmpty(&v19); /*0x7a142e*/
        Debug::Log(); /*0x7a1439*/
        v3 = String::GetOrEmpty(&v19); /*0x7a1445*/
        String::Assign(&v22, v3); /*0x7a144f*/
        owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7a1454*/
        v5 = 0; /*0x7a1459*/
        v6 = 0; /*0x7a145b*/
        if ( g_WOL_UserList.owningHouseIndex <= 0 ) /*0x7a145f*/
        {
  LABEL_18:
          v6 = -1; /*0x7a149b*/
        }
        else
        {
          v7 = 0; /*0x7a1461*/
          while ( 1 ) /*0x7a1463*/
          {
            if ( v7 >= 0 && v6 < owningHouseIndex ) /*0x7a1469*/
              v5 = (char *)g_WOL_UserList.nextObject + v7; /*0x7a1471*/
            v8 = String::GetOrEmpty_Alt(&v22); /*0x7a147c*/
            if ( !_strcmpi(v8, v5 + 36) ) /*0x7a1482*/
              break; /*0x7a1482*/
            owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7a148e*/
            ++v6; /*0x7a1493*/
            v7 += 108; /*0x7a1494*/
            if ( v6 >= g_WOL_UserList.owningHouseIndex ) /*0x7a1499*/
              goto LABEL_18; /*0x7a1499*/
          }
        }
        DeleteAndZero((ObjectClass *)&v22); /*0x7a14a2*/
        if ( v6 == -1 ) /*0x7a14aa*/
          goto LABEL_27; /*0x7a14aa*/
        if ( v6 >= 0 && v6 < g_WOL_UserList.owningHouseIndex ) /*0x7a14ca*/
        {
          qmemcpy(v26, (char *)g_WOL_UserList.nextObject + 108 * v6, sizeof(v26)); /*0x7a14e4*/
          v1 = v26[6]; /*0x7a14e6*/
        }
        if ( !v1 /*0x7a1522*/
          || (v20 = -1,
              (*(void (__stdcall **)(LPVOID, int, int *))(*(unsigned int *)g_UIPointerTable + 32))(g_UIPointerTable, v1, &v20),
              v20 == -1) )
        {
  LABEL_27:
          String::GetOrEmpty(&v19); /*0x7a15dc*/
          Debug::Log(); /*0x7a15e7*/
        }
        else
        {
          String::GetOrEmpty(&v19); /*0x7a152d*/
          Debug::Log(); /*0x7a1538*/
          v18 = String::Assign(&v25, asc_81C8FC); /*0x7a1556*/
          v17 = FromStringInt((char **)&v23.q4, v20); /*0x7a1565*/
          v9 = String::Assign(&v23, Str); /*0x7a1570*/
          v10 = String::Concat(&v19, &v24, v9); /*0x7a157f*/
          v11 = String::Concat((String *)v10, (char **)&v25.q4, v17); /*0x7a1586*/
          v12 = String::Concat((String *)v11, (char **)&v22.m_3[1], v18); /*0x7a158d*/
          String::Append2((String *)&v19.q4, v12); /*0x7a1597*/
          DeleteAndZero((ObjectClass *)&v22.q4); /*0x7a15a0*/
          DeleteAndZero((ObjectClass *)&v25.q4); /*0x7a15a9*/
          DeleteAndZero((ObjectClass *)&v24); /*0x7a15b2*/
          DeleteAndZero((ObjectClass *)&v23); /*0x7a15bb*/
          DeleteAndZero((ObjectClass *)&v23.q4); /*0x7a15c4*/
          DeleteAndZero((ObjectClass *)&v25); /*0x7a15cd*/
          ++v21; /*0x7a15d2*/
        }
        DeleteAndZero((ObjectClass *)&v19); /*0x7a15f3*/
      }
      while ( stru_B76900.estimatedHealth ); /*0x7a15ff*/
    }
    v13 = 0; /*0x7a160a*/
    dword_B736F4 = 0; /*0x7a160e*/
    if ( v21 > 0 && g_WOL_UserList.owningHouseIndex > 0 ) /*0x7a161d*/
    {
      nextObject = g_WOL_UserList.nextObject; /*0x7a161f*/
      while ( 1 ) /*0x7a1625*/
      {
        if ( v13 >= 0 && v13 < g_WOL_UserList.owningHouseIndex ) /*0x7a162b*/
          qmemcpy(&g_WebBrowserConfig.occupant, nextObject, 0x6Cu); /*0x7a1639*/
        if ( (g_WebBrowserConfig.occupant & 1) != 0 ) /*0x7a1642*/
          break; /*0x7a1642*/
        ++v13; /*0x7a1644*/
        nextObject = (ObjectClass *)((char *)nextObject + 108); /*0x7a1645*/
        if ( v13 >= g_WOL_UserList.owningHouseIndex ) /*0x7a164a*/
          goto LABEL_40; /*0x7a164a*/
      }
      if ( &g_WebBrowserConfig != (ObjectClass *)-36 ) /*0x7a1655*/
      {
        v15 = *(unsigned int *)ppv; /*0x7a165d*/
        v16 = String::GetOrEmpty((String *)&v19.m_3[1]); /*0x7a1663*/
        (*(void (__stdcall **)(LPVOID, int *, char *))(v15 + 48))(ppv, &g_WebBrowserConfig.occupant, v16); /*0x7a1675*/
        String::GetOrEmpty((String *)&v19.m_3[1]); /*0x7a167c*/
        Debug::Log(); /*0x7a1687*/
      }
    }
  LABEL_40:
    DeleteAndZero((ObjectClass *)&v19.q4); /*0x7a168f*/
  }
}
}
// 0x7A16B0
namespace gamemd {
ObjectClass * * HandleWOLMatchMessage()
{
  wchar_t *StringCSF; // eax
  wchar_t *v5; // eax
  wchar_t *v6; // eax
  wchar_t *v7; // eax
  wchar_t *v8; // eax
  wchar_t *v9; // eax
  char *v10; // eax
  wchar_t *v11; // eax
  wchar_t *v12; // eax

  if ( a2 ) /*0x7a16b8*/
  {
    if ( !_strnicmp(String1, aFail, 4u) ) /*0x7a16c6*/
    {
      StringCSF = GetStringCSF((wchar_t *)aWolMatchfail, 0, g_Str_File_wonline_cpp, 28671); /*0x7a16e3*/
  LABEL_10:
      Dialog::ShowMessage((int)Math::InitDegToRad, (size_t)StringCSF); /*0x7a17a2*/
      SetEvent(dword_B736C8); /*0x7a17b6*/
      return; /*0x7a17be*/
    }
    if ( !_strnicmp(String1, aPingfail, 8u) ) /*0x7a16f0*/
    {
      v5 = GetStringCSF(aWolMatchfailpi, 0, g_Str_File_wonline_cpp, 28677); /*0x7a170d*/
      Dialog::ShowMessage((int)Math::InitDegToRad, (size_t)v5); /*0x7a1718*/
      SetEvent(dword_B736C8); /*0x7a1727*/
      return; /*0x7a172f*/
    }
    if ( !_strnicmp(String1, aRankfail, 8u) ) /*0x7a1738*/
    {
      v6 = GetStringCSF(aWolMatchfailra, 0, g_Str_File_wonline_cpp, 28683); /*0x7a1755*/
      Dialog::ShowMessage((int)Math::InitDegToRad, (size_t)v6); /*0x7a1760*/
      SetEvent(dword_B736C8); /*0x7a176f*/
      return; /*0x7a1777*/
    }
    if ( !_strnicmp(String1, aWdtsidefail, 0xBu) ) /*0x7a1780*/
    {
      StringCSF = GetStringCSF(aWolMatchfailwd, 0, g_Str_File_wonline_cpp, 28689); /*0x7a179d*/
      goto LABEL_10; /*0x7a179d*/
    }
  }
  if ( !_strnicmp(String1, aExit_0, 4u) ) /*0x7a17c7*/
  {
    v7 = GetStringCSF(g_Str_WOL_MatchFailExit, 0, g_Str_File_wonline_cpp, 28695); /*0x7a17e4*/
    Dialog::ShowMessage((int)Math::InitDegToRad, (size_t)v7); /*0x7a17ef*/
    (*(void (__stdcall **)(LPVOID))(*(unsigned int *)ppv + 36))(ppv); /*0x7a17ff*/
    v8 = GetStringCSF(g_Str_WOL_MatchFailExit, 0, g_Str_File_wonline_cpp, 28698); /*0x7a181a*/
    ShowDialogConfirm(v8, 0, (int)GameLoop::Thunk, 0); /*0x7a1823*/
    SetEvent(Handles); /*0x7a182f*/
  }
  else if ( !_strnicmp(String1, aWorking, 7u) ) /*0x7a1840*/
  {
    if ( g_WOL_IdleHandler == 4 ) /*0x7a1853*/
    {
      g_WOL_GameListState = 0; /*0x7a1857*/
      g_WOL_IdleHandler = 5; /*0x7a1861*/
      g_WOL_GameProcessState = 180; /*0x7a186b*/
      g_WOL_GameListPool = time(0); /*0x7a187d*/
    }
    v9 = GetStringCSF(aGuiMatchingpro, 0, g_Str_File_wonline_cpp, 28710); /*0x7a1893*/
    Dialog::ShowMessage(-1, (size_t)v9); /*0x7a189f*/
  }
  else if ( !_strnicmp(String1, aInfo, 5u) ) /*0x7a18b2*/
  {
    v10 = CharToWideString(String1 + 5); /*0x7a18c1*/
    Dialog::ShowMessage(16744576, (size_t)v10); /*0x7a18cc*/
  }
  else if ( !_strnicmp(String1, aPool, 5u) ) /*0x7a18df*/
  {
    v11 = GetStringCSF(aWolMatchingpla, 0, g_Str_File_wonline_cpp, 28720); /*0x7a1900*/
    Dialog::ShowMessage(16744576, (size_t)v11, String1 + 5); /*0x7a190b*/
  }
  else if ( a2 && !_strnicmp(String1, aStart_0, 6u) ) /*0x7a1922*/
  {
    strncpy(unk_B73714, String1 + 6, 0xFFu); /*0x7a193c*/
    Debug::Log(); /*0x7a194b*/
    SetEvent(dword_B736C4); /*0x7a195a*/
  }
  else if ( _strcmpi(String1, aAck) && _strcmpi(String1, aNack_0) ) /*0x7a197b*/
  {
    if ( !_strnicmp(String1, aNeed, 5u) ) /*0x7a198f*/
    {
      Debug::Log(); /*0x7a19a1*/
    }
    else if ( a2 ) /*0x7a19ae*/
    {
      v12 = GetStringCSF(aWolMatchunknow, 0, g_Str_File_wonline_cpp, 28753); /*0x7a19c1*/
      Dialog::ShowMessage((int)Math::InitDegToRad, (size_t)v12); /*0x7a19cc*/
    }
  }
}
}
// 0x7A1BB0
namespace gamemd {
AbstractClass * * WOL_MatchGame()
{
  int v1; // ebp
  char *v2; // ebx
  char *v3; // eax
  char *v4; // esi
  char *v5; // eax
  char *v6; // eax
  wchar_t *StringCSF; // eax
  char *v8; // eax
  wchar_t *v9; // eax
  wchar_t *v10; // eax
  wchar_t *v12; // eax
  char **v13; // eax
  wchar_t *v14; // eax
  HANDLE *v15; // esi
  TechnoTypeClass *v16; // ecx
  int referenceCount; // eax
  int v18; // ebx
  char *v19; // eax
  wchar_t *v21; // eax
  wchar_t *v22; // eax
  wchar_t *v23; // eax
  wchar_t *v24; // eax
  char **v25; // [esp-4h] [ebp-230h]
  int v26; // [esp-4h] [ebp-230h]
  ObjectClass *v27; // [esp+0h] [ebp-22Ch]
  unsigned char v28[284]; // [esp+10h] [ebp-21Ch] BYREF
  char Destination[256]; // [esp+12Ch] [ebp-100h] BYREF

  v1 = 0; /*0x7a1bb9*/
  g_NetworkLobbyState = 0; /*0x7a1bbc*/
  Network::Init(); /*0x7a1bc2*/
  strncpy(Destination, stru_B73708.__pad_C, 0x100u); /*0x7a1bd9*/
  strtok(Destination, asc_8318B8); /*0x7a1beb*/
  v2 = strtok(0, Str); /*0x7a1bfb*/
  *(unsigned int *)&v28[12] = v2; /*0x7a1c03*/
  strtok(0, Str); /*0x7a1c07*/
  strtok(0, Str); /*0x7a1c12*/
  strtok(0, Str); /*0x7a1c1d*/
  strtok(0, Str); /*0x7a1c28*/
  strtok(0, Str); /*0x7a1c33*/
  strtok(0, Str); /*0x7a1c41*/
  strtok(0, Str); /*0x7a1c4c*/
  v3 = strtok(0, Str); /*0x7a1c57*/
  v4 = v3; /*0x7a1c61*/
  if ( !v2 || !v3 ) /*0x7a1c6b*/
  {
    StringCSF = GetStringCSF(aWolMatchbadpar, 0, g_Str_File_wonline_cpp, 28847); /*0x7a20c0*/
    goto LABEL_35; /*0x7a20c0*/
  }
  v5 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x7a1c76*/
  if ( _strcmpi(v2, v5) ) /*0x7a1c7d*/
  {
    v6 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x7a1c8e*/
    if ( _strcmpi(v4, v6) ) /*0x7a1c95*/
    {
      StringCSF = GetStringCSF(aWolMatchbadpar, 0, g_Str_File_wonline_cpp, 28857); /*0x7a1ca6*/
  LABEL_35:
      Dialog::ShowMessage(2146559, (size_t)StringCSF); /*0x7a20c5*/
      g_WOL_GameListState = 0; /*0x7a20d0*/
      g_WOL_IdleHandler = 3; /*0x7a20d6*/
      g_WOL_GameProcessState = 20; /*0x7a20e0*/
  LABEL_36:
      g_WOL_GameListPool = time(0); /*0x7a20ea*/
      return 0; /*0x7a20f8*/
    }
  }
  v8 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x7a1cb0*/
  if ( !_strcmpi(v2, v8) ) /*0x7a1cb7*/
  {
    String::Assign_Alt((String *)&stru_B76AC4, v4); /*0x7a1ccd*/
    MatchGameWOL_Delete(); /*0x7a1cd2*/
    v9 = GetStringCSF(aWolMatchcreati, 0, g_Str_File_wonline_cpp, 28867); /*0x7a1ce8*/
    Dialog::ShowMessage(-1, (size_t)v9); /*0x7a1cf5*/
    byte_B77DEC = 0; /*0x7a1d00*/
    g_WOL_GameListState = 0; /*0x7a1d07*/
    g_WOL_IdleHandler = 6; /*0x7a1d0d*/
    g_WOL_GameProcessState = 30; /*0x7a1d17*/
    g_WOL_GameListPool = time(0); /*0x7a1d25*/
    if ( CreateGameWOL(v27, (int)v4) ) /*0x7a1d2a*/
    {
      v10 = GetStringCSF(aWolMatchwaitin, 0, g_Str_File_wonline_cpp, 28871); /*0x7a1d45*/
      Dialog::ShowMessage(-1, (size_t)v10, v4); /*0x7a1d51*/
      return 1; /*0x7a1d65*/
    }
    v12 = GetStringCSF(aWolMatcherrorc, 0, g_Str_File_wonline_cpp, 28878); /*0x7a1d77*/
    Dialog::ShowMessage(2146559, (size_t)v12); /*0x7a1d82*/
    g_WOL_GameListState = 0; /*0x7a1d87*/
    g_WOL_IdleHandler = 2; /*0x7a1d8d*/
    g_WOL_GameProcessState = 30; /*0x7a1d97*/
    goto LABEL_36; /*0x7a1d9d*/
  }
  String::Assign_Alt((String *)&stru_B76AC4, v2); /*0x7a1da8*/
  MatchGameWOL_Delete(); /*0x7a1dad*/
  v25 = String::Assign((String *)&v28[8], aSGame); /*0x7a1dc4*/
  v13 = String::Assign((String *)&v28[4], v2); /*0x7a1dcb*/
  String::Concat((String *)v13, (char **)v28, v25); /*0x7a1dd2*/
  DeleteAndZero((ObjectClass *)&v28[4]); /*0x7a1ddb*/
  DeleteAndZero((ObjectClass *)&v28[8]); /*0x7a1de4*/
  v14 = GetStringCSF(aWolMatchattemp, 0, g_Str_File_wonline_cpp, 28885); /*0x7a1dfb*/
  Dialog::ShowMessage(-1, (size_t)v14, v2); /*0x7a1e08*/
  g_WOL_GameListState = 0; /*0x7a1e0e*/
  g_WOL_IdleHandler = 7; /*0x7a1e14*/
  g_WOL_GameProcessState = 30; /*0x7a1e1e*/
  g_WOL_GameListPool = time(0); /*0x7a1e30*/
  *(unsigned int *)&v28[4] = 1; /*0x7a1e35*/
  while ( 1 ) /*0x7a1e3d*/
  {
    if ( stru_B76510.StringVector_field_0x10 && !RequestChannelListWOL() ) /*0x7a1e4c*/
      goto LABEL_28; /*0x7a1e4c*/
    v15 = &Handles; /*0x7a1e52*/
    do /*0x7a1e69*/
      ResetEvent(*v15++); /*0x7a1e5a*/
    while ( (int)v15 < (int)g_WOL_RequestObject ); /*0x7a1e69*/
    *(unsigned int *)&v28[8] = 41; /*0x7a1e73*/
    Debug::Log(); /*0x7a1e7b*/
    if ( (*(int (__stdcall **)(LPVOID, unsigned int, unsigned int))(*(unsigned int *)ppv + 24))(ppv, *(unsigned int *)&v28[8], 0) ) /*0x7a1e91*/
    {
      SetEvent(Handles); /*0x7a1f54*/
  LABEL_28:
      v21 = GetStringCSF(aWolMatchgamech, 0, g_Str_File_wonline_cpp, 28889); /*0x7a1f5a*/
      Dialog::ShowMessage(2146559, (size_t)v21, v2); /*0x7a1f77*/
      g_WOL_GameListState = 0; /*0x7a1f7c*/
      g_WOL_IdleHandler = 3; /*0x7a1f82*/
      g_WOL_GameProcessState = 20; /*0x7a1f8c*/
  LABEL_29:
      g_WOL_GameListPool = time(0); /*0x7a1f96*/
      DeleteAndZero((ObjectClass *)v28); /*0x7a1fa8*/
      return 0; /*0x7a1fb9*/
    }
    Network_Helper_7ADB00( /*0x7a1eac*/
      (ObjectClass *)&stru_B76510.StringVector_field_0x10,
      &v28[8],
      stru_B76510.StringVector_field_0x10);
    if ( !RequestChannelListWOL() ) /*0x7a1eb8*/
      goto LABEL_28; /*0x7a1eb8*/
    memset(&v28[16], 0, 0x10Cu); /*0x7a1ec9*/
    v16 = 0; /*0x7a1ec9*/
    referenceCount = stru_B76AC4.?; /*0x7a1ecb*/
    if ( stru_B76AC4.? > 0 ) /*0x7a1ed2*/
      break; /*0x7a1ed2*/
  LABEL_25:
    Game::ProcessIdle(v16); /*0x7a1f27*/
    Sleep(0x64u); /*0x7a1f2e*/
    if ( (*(unsigned int *)&v28[4])++ >= 30 ) /*0x7a1f3b*/
    {
      v24 = GetStringCSF(aWolMatchgamech, 0, g_Str_File_wonline_cpp, 28915); /*0x7a2080*/
      Dialog::ShowMessage(2146559, (size_t)v24, v2); /*0x7a208b*/
      g_WOL_GameListState = 0; /*0x7a2090*/
      g_WOL_IdleHandler = 2; /*0x7a2096*/
      g_WOL_GameProcessState = 30; /*0x7a20a0*/
      goto LABEL_29; /*0x7a20aa*/
    }
  }
  v18 = 0; /*0x7a1ed4*/
  while ( 1 ) /*0x7a1ed6*/
  {
    if ( v18 >= 0 && v1 < referenceCount ) /*0x7a1edc*/
      qmemcpy(&v28[16], (const void *)(v18 + stru_B76AC4.occupant), 0x10Cu); /*0x7a1ef0*/
    v19 = String::GetOrEmpty((String *)v28); /*0x7a1ef6*/
    if ( !_strcmpi(&v28[68], v19) ) /*0x7a1f01*/
      break; /*0x7a1f01*/
    referenceCount = stru_B76AC4.?; /*0x7a1f11*/
    ++v1; /*0x7a1f16*/
    v18 += 268; /*0x7a1f17*/
    if ( v1 >= stru_B76AC4.? ) /*0x7a1f1f*/
    {
      v2 = *(char **)&v28[12]; /*0x7a1f21*/
      v1 = 0; /*0x7a1f25*/
      goto LABEL_25; /*0x7a1f25*/
    }
  }
  if ( ValidateJoinWOL(v27, (int)&v28[16], v18, v1) ) /*0x7a1fc0*/
  {
    v26 = *(unsigned int *)&v28[12]; /*0x7a1fcf*/
    v22 = GetStringCSF(aWolMatchjoined, 0, g_Str_File_wonline_cpp, 28899); /*0x7a1fdf*/
    Dialog::ShowMessage(-1, (size_t)v22, v26); /*0x7a1fec*/
    g_WOL_GameListState = 0; /*0x7a1ff3*/
    g_WOL_IdleHandler = 9; /*0x7a1ffd*/
    g_WOL_GameProcessState = 90; /*0x7a2007*/
    g_WOL_GameListPool = time(0); /*0x7a201d*/
    DeleteAndZero((ObjectClass *)v28); /*0x7a2022*/
    return 1; /*0x7a2027*/
  }
  else
  {
    v23 = GetStringCSF(aWolMatcherrorj, 0, g_Str_File_wonline_cpp, 28907); /*0x7a2045*/
    Dialog::ShowMessage(2146559, (size_t)v23); /*0x7a2050*/
    DeleteAndZero((ObjectClass *)v28); /*0x7a205c*/
    return 0; /*0x7a2061*/
  }
}
}
// 0x7A2830
namespace gamemd {
Coord * * E4Recv_7A2830::sub_7A2830()
{

  int result; // eax
  int v2; // ebp
  int v3; // ebx
  char *v4; // eax
  unsigned int v6[27]; // [esp+14h] [ebp-6Ch] BYREF

  result = g_WOL_UserList.owningHouseIndex; /*0x7a2833*/
  v2 = 0; /*0x7a283a*/
  v3 = 0; /*0x7a283c*/
  v6[0] = 0; /*0x7a2846*/
  if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x7a284a*/
  {
    while ( 1 ) /*0x7a284c*/
    {
      if ( v2 >= 0 && v3 < result ) /*0x7a2852*/
        qmemcpy(v6, (char *)g_WOL_UserList.nextObject + v2, sizeof(v6)); /*0x7a2865*/
      v4 = String::GetOrEmpty_Alt((String *)this); /*0x7a2870*/
      if ( !_strcmpi(v4, (char *)&v6[9]) ) /*0x7a2876*/
        break; /*0x7a2876*/
      result = g_WOL_UserList.owningHouseIndex; /*0x7a2882*/
      ++v3; /*0x7a2887*/
      v2 += 108; /*0x7a2888*/
      if ( v3 >= g_WOL_UserList.owningHouseIndex ) /*0x7a288d*/
        return result; /*0x7a288d*/
    }
    return (*(int (**)(LPVOID, unsigned int *))(*(unsigned int *)ppv + 84))(ppv, v6); /*0x7a28a4*/
  }
  return result; /*0x7a288f*/

}
}
// 0x7A29E0
namespace gamemd {
void BuddyDlgProcWOL(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
  int result; // eax
  wchar_t *StringCSF; // eax
  HWND DlgItem; // eax
  UINT v7; // eax
  UINT v8; // eax
  char *v9; // eax
  int v10; // eax
  int v11; // esi
  String *v12; // ecx
  int v13; // eax
  int v14; // esi
  String *v15; // ecx
  int v16; // eax
  int v17; // esi
  String *v18; // ecx
  DeleteAndZero v19; // [esp-4h] [ebp-1F4h]
  char *v20; // [esp-4h] [ebp-1F4h]
  ObjectClass *v21; // [esp+0h] [ebp-1F0h]
  unsigned char v22[224]; // [esp+10h] [ebp-1E0h] BYREF
  wchar_t lParam[128]; // [esp+F0h] [ebp-100h] BYREF

  if ( a2 == 272 && a4 ) /*0x7a2a09*/
    SetWindowLongA(hWnd, 8, *(unsigned int *)(a4 + 4)); /*0x7a2a12*/
  *(unsigned int *)v19.__pad_0 = a4; /*0x7a2a1f*/
  result = BaseDialogProc(hWnd, a2, a3, v19); /*0x7a2a25*/
  if ( !result ) /*0x7a2a2c*/
  {
    *(unsigned int *)&v22[4] = GetWindowLongA(hWnd, 8); /*0x7a2a3e*/
    if ( a2 <= 0x2B ) /*0x7a2a42*/
    {
      switch ( a2 ) /*0x7a2a44*/
      {
        case 0x2Bu: /*0x7a2a44*/
          Dialog::Resize((char *)a4); /*0x7a2a91*/
          return 1; /*0x7a2aa5*/
        case 0xFu: /*0x7a2a44*/
          Dialog::DrawBackground((Dialog *)hWnd); /*0x7a2a68*/
          Dialog::StopBink((Dialog *)hWnd); /*0x7a2a6f*/
          ValidateRect(hWnd, 0); /*0x7a2a77*/
          return 1; /*0x7a2a8c*/
        case 0x14u: /*0x7a2a44*/
          return 1; /*0x7a2a63*/
      }
      return 0; /*0x7a2a4e*/
    }
    if ( a2 != 273 ) /*0x7a2aae*/
    {
      if ( a2 == 1175 ) /*0x7a2ab6*/
      {
        v20 = String::GetOrEmpty((String *)&stru_B76AC4); /*0x7a2ac6*/
        StringCSF = GetStringCSF(aWolAddbuddyque, 0, g_Str_File_wonline_cpp, 29291); /*0x7a2ad8*/
        swprintf(lParam, (const size_t)StringCSF, (const wchar_t *const)v20); /*0x7a2ae6*/
        DlgItem = GetDlgItem(hWnd, 1819); /*0x7a2af4*/
        SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)lParam); /*0x7a2b0a*/
        return 0; /*0x7a2b1c*/
      }
      return 0; /*0x7a2ab6*/
    }
    if ( (uint16_t)a3 != 1 ) /*0x7a2b26*/
    {
      if ( (uint16_t)a3 == 2 ) /*0x7a2b29*/
      {
        v7 = IsDlgButtonChecked(hWnd, 1785); /*0x7a2b35*/
        ReadWOLLobbyOption(v7 != 1); /*0x7a2b46*/
        (*(void (**)(unsigned int, HWND, int))(**(unsigned int **)&v22[4] + 4))(*(unsigned int *)&v22[4], hWnd, 2); /*0x7a2b54*/
        return 0; /*0x7a2b63*/
      }
      return 0; /*0x7a2b29*/
    }
    v8 = IsDlgButtonChecked(hWnd, 1785); /*0x7a2b6c*/
    ReadWOLLobbyOption(v8 != 1); /*0x7a2b7d*/
    if ( !(uint8_t)MapSeed::CheckName((MapSeed *)&stru_B76AC4) ) /*0x7a2b8e*/
    {
  LABEL_53:
      (*(void (**)(unsigned int, HWND, int))(**(unsigned int **)&v22[4] + 4))(*(unsigned int *)&v22[4], hWnd, 1); /*0x7a2e54*/
      return 0; /*0x7a2e60*/
    }
    memset(&v22[8], 0, 0x6Cu); /*0x7a2ba1*/
    v9 = String::GetOrEmpty_Alt((String *)&stru_B76AC4); /*0x7a2ba8*/
    strncpy(&v22[44], v9, 9u); /*0x7a2bb3*/
    (*(void (__stdcall **)(LPVOID, unsigned char *))(*(unsigned int *)ppv + 224))(ppv, &v22[8]); /*0x7a2bc8*/
    if ( !(uint8_t)MapSeed::CheckName((MapSeed *)&stru_B76AC4) ) /*0x7a2bda*/
    {
  LABEL_52:
      SendGameListWOL(v21); /*0x7a2e4f*/
      goto LABEL_53; /*0x7a2e4f*/
    }
    String::AssignFromPtr((String *)v22, (const char **)&stru_B76AC4); /*0x7a2be9*/
    v10 = *(unsigned int *)g_WindowManager.__pad_0; /*0x7a2bee*/
    v11 = *(unsigned int *)g_WindowManager.__pad_0; /*0x7a2bf3*/
    if ( *(int *)g_WindowManager.__pad_0 >= (int)g_WindowManager.Array_field_0x4 ) /*0x7a2bff*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&g_WindowManager); /*0x7a2c06*/
      v10 = *(unsigned int *)g_WindowManager.__pad_0; /*0x7a2c0b*/
    }
    if ( v10 >= (int)g_WindowManager.Array_field_0x4 ) /*0x7a2c16*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&g_WindowManager); /*0x7a2c1d*/
      v10 = *(unsigned int *)g_WindowManager.__pad_0; /*0x7a2c22*/
    }
    if ( v11 < v10 ) /*0x7a2c29*/
    {
      memcpy( /*0x7a2c46*/
        (void *)(*(unsigned int *)g_WindowManager.__pad_8 + 4 * v11 + 4),
        (const void *)(*(unsigned int *)g_WindowManager.__pad_8 + 4 * v11),
        4 * (v10 + 0x3FFFFFFF * v11));
      v10 = *(unsigned int *)g_WindowManager.__pad_0; /*0x7a2c4b*/
    }
    v12 = (String *)(*(unsigned int *)g_WindowManager.__pad_8 + 4 * v11); /*0x7a2c59*/
    if ( v12 ) /*0x7a2c5e*/
    {
      String::AssignFromPtr(v12, (const char **)v22); /*0x7a2c65*/
      v10 = *(unsigned int *)g_WindowManager.__pad_0; /*0x7a2c6a*/
    }
    *(unsigned int *)g_WindowManager.__pad_0 = v10 + 1; /*0x7a2c70*/
    v13 = *(unsigned int *)&stru_B76900.needsRedraw; /*0x7a2c75*/
    v14 = *(unsigned int *)&stru_B76900.needsRedraw; /*0x7a2c7a*/
    if ( *(int *)&stru_B76900.needsRedraw >= *(int *)&stru_B76900.hasParachute ) /*0x7a2c86*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&stru_B76900.needsRedraw); /*0x7a2c8d*/
      v13 = *(unsigned int *)&stru_B76900.needsRedraw; /*0x7a2c92*/
    }
    if ( v13 >= *(int *)&stru_B76900.hasParachute ) /*0x7a2c9d*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&stru_B76900.needsRedraw); /*0x7a2ca4*/
      v13 = *(unsigned int *)&stru_B76900.needsRedraw; /*0x7a2ca9*/
    }
    if ( v14 < v13 ) /*0x7a2cb0*/
    {
      memcpy( /*0x7a2ccd*/
        &stru_B76900.parachute->AnimClass_field_0x4 + v14,
        &stru_B76900.parachute->AnimClass_field_0x0 + v14,
        4 * (v13 + 0x3FFFFFFF * v14));
      v13 = *(unsigned int *)&stru_B76900.needsRedraw; /*0x7a2cd2*/
    }
    v15 = (String *)(&stru_B76900.parachute->AnimClass_field_0x0 + v14); /*0x7a2ce0*/
    if ( v15 ) /*0x7a2ce5*/
    {
      String::AssignFromPtr(v15, (const char **)v22); /*0x7a2cec*/
      v13 = *(unsigned int *)&stru_B76900.needsRedraw; /*0x7a2cf1*/
    }
    *(unsigned int *)&stru_B76900.needsRedraw = v13 + 1; /*0x7a2cf7*/
    v16 = *(unsigned int *)g_WOL_BuddyList.__pad_0; /*0x7a2cfc*/
    v17 = *(unsigned int *)g_WOL_BuddyList.__pad_0; /*0x7a2d01*/
    if ( *(int *)g_WOL_BuddyList.__pad_0 >= *(int *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] ) /*0x7a2d0d*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x7a2d14*/
      v16 = *(unsigned int *)g_WOL_BuddyList.__pad_0; /*0x7a2d19*/
    }
    if ( v16 >= *(int *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] ) /*0x7a2d24*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x7a2d2b*/
      v16 = *(unsigned int *)g_WOL_BuddyList.__pad_0; /*0x7a2d30*/
    }
    if ( v17 < v16 ) /*0x7a2d37*/
    {
      memcpy( /*0x7a2d54*/
        (void *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v17 + 4),
        (const void *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v17),
        4 * (v16 + 0x3FFFFFFF * v17));
      v16 = *(unsigned int *)g_WOL_BuddyList.__pad_0; /*0x7a2d59*/
    }
    v18 = (String *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v17); /*0x7a2d67*/
    if ( v18 ) /*0x7a2d6c*/
    {
      String::AssignFromPtr(v18, (const char **)v22); /*0x7a2d73*/
      v16 = *(unsigned int *)g_WOL_BuddyList.__pad_0; /*0x7a2d78*/
    }
    *(unsigned int *)g_WOL_BuddyList.__pad_0 = v16 + 1; /*0x7a2d83*/
    if ( String::Length((String *)&g_WindowManager.__pad_14[16]) ) /*0x7a2d88*/
    {
      if ( (unsigned int)(time(0) - *(unsigned int *)g_WOL_BuddyList.__pad_20) < 5 ) /*0x7a2da6*/
      {
  LABEL_51:
        DeleteAndZero((ObjectClass *)v22); /*0x7a2e46*/
        goto LABEL_52; /*0x7a2e4a*/
      }
      DeleteAndZero::Alt2((DeleteAndZero *)&g_WindowManager.__pad_14[16]); /*0x7a2db1*/
    }
    if ( *(unsigned int *)&stru_B76900.needsRedraw ) /*0x7a2dbd*/
    {
      if ( (uint8_t)DynamicStringArray::Get( /*0x7a2dcf*/
                              (DynamicStringArray *)&stru_B76900.needsRedraw,
                              (char **)&g_WindowManager.__pad_14[16],
                              0) )
        DynamicArray::Remove((DynamicArray *)&stru_B76900.needsRedraw, 0); /*0x7a2ddf*/
      *(unsigned int *)g_WOL_BuddyList.__pad_20 = time(0); /*0x7a2deb*/
      memset(&v22[116], 0, 0x6Cu); /*0x7a2dfe*/
      strcpy(&v22[152], String::GetOrEmpty((String *)&g_WindowManager.__pad_14[16])); /*0x7a2e31*/
      (*(void (__stdcall **)(LPVOID, unsigned char *))(*(unsigned int *)ppv + 96))(ppv, &v22[116]); /*0x7a2e43*/
    }
    goto LABEL_51; /*0x7a2e43*/
  }
  return result; /*0x7a2a54*/
}
}
// 0x7A4C10
namespace gamemd {
CampaignScore * * CComObject_CChatEventSink___ATL__vt_04_(int a1, int a2, int a3)
{
  int v3; // ecx
  int v4; // esi
  int v5; // eax
  HWND v6; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  wchar_t *v9; // eax
  const wchar_t *v10; // ebp
  wchar_t *v11; // eax
  HWND v12; // edi
  HWND v13; // ebx
  wchar_t *v14; // eax
  wchar_t *v15; // eax
  int v17; // [esp+8h] [ebp-4C4h]
  void *v18; // [esp+1Ch] [ebp-4B0h] BYREF
  unsigned int v20[3]; // [esp+24h] [ebp-4A8h] BYREF
  CHAR Buffer[260]; // [esp+30h] [ebp-49Ch] BYREF
  char v22[260]; // [esp+134h] [ebp-398h] BYREF
  char v23[260]; // [esp+238h] [ebp-294h] BYREF
  wchar_t String[200]; // [esp+33Ch] [ebp-190h] BYREF

  v3 = 0; /*0x7a4c1a*/
  if ( a2 < 0 ) /*0x7a4c22*/
    goto LABEL_16; /*0x7a4c22*/
  v4 = a3; /*0x7a4c28*/
  if ( !a3 ) /*0x7a4c31*/
    goto LABEL_16; /*0x7a4c31*/
  dword_B77DCC = 1; /*0x7a4c37*/
  v5 = a3; /*0x7a4c41*/
  do /*0x7a4c49*/
  {
    v5 = v5->vtable4; /*0x7a4c43*/
    ++v3; /*0x7a4c46*/
  }
  while ( v5 ); /*0x7a4c49*/
  v3 = v3; /*0x7a4c4b*/
  v6 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x7a4c54*/
  if ( v6 ) /*0x7a4c5b*/
  {
    dword_B77DC8 &= ~0x10u; /*0x7a4c66*/
    if ( !dword_B77DC8 ) /*0x7a4c6c*/
      CloseDialog(v6, 0); /*0x7a4c72*/
  }
  Current = Dialog::GetCurrent(); /*0x7a4c77*/
  DlgItem = GetDlgItem(Current, 1344); /*0x7a4c82*/
  if ( DlgItem ) /*0x7a4c8a*/
    SetFocus(DlgItem); /*0x7a4c8d*/
  v9 = GetStringCSF(aTxtUpgraderequ, 0, g_Str_File_wonline_cpp, 5504); /*0x7a4cab*/
  if ( ShowDialogConfirm(v9, 4, (int)GameLoop::Thunk, 0) == 7 ) /*0x7a4cbf*/
  {
  LABEL_16:
    SetEvent(Handles); /*0x7a4ea4*/
    return 0; /*0x7a4ead*/
  }
  else
  {
    GetCurrentDirectoryA(0x100u, Buffer); /*0x7a4ccf*/
    v10 = 0; /*0x7a4cd5*/
    while ( 1 ) /*0x7a4cef*/
    {
      sprintf(v22, "%s/%s", (const char *)(v4 + 81), (const char *)(v4 + 337)); /*0x7a4cef*/
      sprintf(v23, "%s\\%s", (const char *)(v4 + 468), (const char *)(v4 + 337)); /*0x7a4d09*/
      CreateDirectoryA((LPCSTR)(v4 + 468), 0); /*0x7a4d14*/
      (*(void (__stdcall **)(LPVOID, int, int, int, char *, char *, char *))(*(unsigned int *)dword_AC1174 + 12))( /*0x7a4d49*/
        dword_AC1174,
        v4 + 16,
        v4 + 370,
        v4 + 403,
        v22,
        v23,
        g_Str_SOFTWARE_Westwood_Yuri_s_Reven);
      v10 = (const wchar_t *)((char *)v10 + 1); /*0x7a4d4c*/
      v17 = v3; /*0x7a4d56*/
      v11 = GetStringCSF(aTxtDownloading, 0, g_Str_File_wonline_cpp, 5526); /*0x7a4d64*/
      swprintf(String, (const size_t)v11, v10, v17); /*0x7a4d72*/
      WideString::Assign((wchar_t **)&v18, String); /*0x7a4d86*/
      SimpleDialogControl::Constructor(v20); /*0x7a4d8f*/
      v20[0] = (unsigned int)&off_7F7624; /*0x7a4da0*/
      v12 = (HWND)CreateDialog(0xD3u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_78DA30, 0); /*0x7a4dad*/
      v13 = GetDlgItem(v12, 1479); /*0x7a4dbf*/
      v14 = WideString::GetOrEmpty_Alt((wchar_t **)&v18); /*0x7a4dc1*/
      SendMessageA(v13, 0x4B2u, 0, (LPARAM)v14); /*0x7a4dcf*/
      if ( MessageDialogLoopAlt(v12, (uint8_t (*)(void))GameLoop::Thunk, 0, 1, 1) == 2 ) /*0x7a4dea*/
        break; /*0x7a4dea*/
      v4 = v4->vtable4; /*0x7a4dec*/
      v20[0] = (unsigned int)&off_7F7624; /*0x7a4df3*/
      OwnerDrawControl::InitVtable(v20); /*0x7a4dfb*/
      DeleteAndZero::Alt(&v18); /*0x7a4e04*/
      if ( !v4 ) /*0x7a4e0b*/
      {
        v15 = GetStringCSF(aTxtGameRestart, 0, g_Str_File_wonline_cpp, 5558); /*0x7a4e28*/
        ShowDialogConfirm(v15, 0, (int)GameLoop::Thunk, 0); /*0x7a4e31*/
        SetEvent(dword_B736A4); /*0x7a4e3d*/
        SetCurrentDirectoryA(Buffer); /*0x7a4e48*/
        return 0; /*0x7a4e5a*/
      }
    }
    SetEvent(Handles); /*0x7a4e64*/
    SetCurrentDirectoryA(Buffer); /*0x7a4e6f*/
    v20[0] = (unsigned int)&off_7F7624; /*0x7a4e79*/
    OwnerDrawControl::InitVtable(v20); /*0x7a4e81*/
    DeleteAndZero::Alt(&v18); /*0x7a4e8a*/
    return 0; /*0x7a4e92*/
  }
}
}
// 0x7AF640
namespace gamemd {
AbstractClass * * E4Recv_7AF640::sub_7AF640(int a2)
{

  int result; // eax
  int referenceCount; // ecx
  unsigned int *v5; // eax
  unsigned int v6[4]; // [esp+Ch] [ebp-20h] BYREF
  unsigned char v7[16]; // [esp+1Ch] [ebp-10h] BYREF

  result = (int)DSurface_Alternate; /*0x7af640*/
  if ( DSurface_Alternate ) /*0x7af64d*/
  {
    referenceCount = this->?; /*0x7af64f*/
    if ( referenceCount ) /*0x7af654*/
    {
      v5 = (unsigned int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)referenceCount + 120))(referenceCount, v7); /*0x7af65d*/
      v6[0] = *v5; /*0x7af664*/
      v6[1] = v5[1]; /*0x7af66b*/
      v6[2] = v5[2]; /*0x7af672*/
      v6[3] = v5[3]; /*0x7af67f*/
      (*((void (**)(DSurface *, unsigned int *, unsigned int))DSurface_Alternate->DSurface_field_0x0 + 5))( /*0x7af68a*/
        DSurface_Alternate,
        v6,
        0);
      return (*((int (**)(DSurface *, unsigned int *, int, unsigned int *, unsigned int, int))DSurface_Alternate->DSurface_field_0x0 /*0x7af6a7*/
              + 2))(
               DSurface_Alternate,
               v6,
               this->?,
               v6,
               0,
               1);
    }
  }
  return result; /*0x7af6aa*/

}
}
// 0x7AF6C0
namespace gamemd {
void WorldDominationFactionDlgProc(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
  unsigned int v4; // ebp
  int result; // eax
  unsigned int *WindowLongA; // eax
  unsigned int *v7; // esi
  int v8; // ecx
  int *v9; // eax
  wchar_t *StringCSF; // eax
  int v11; // [esp+10h] [ebp-20h] BYREF
  unsigned int v12; // [esp+14h] [ebp-1Ch]
  int v13; // [esp+18h] [ebp-18h]
  int v14; // [esp+1Ch] [ebp-14h]
  unsigned char v15[16]; // [esp+20h] [ebp-10h] BYREF

  v4 = a4; /*0x7af6c9*/
  if ( a2 == 272 && a4 ) /*0x7af6dd*/
    SetWindowLongA(hWnd, 8, *(unsigned int *)(a4 + 4)); /*0x7af6e6*/
  result = BaseDialogProc(hWnd, a2, a3, v4); /*0x7af6f6*/
  if ( !result ) /*0x7af6fd*/
  {
    WindowLongA = (unsigned int *)GetWindowLongA(hWnd, 8); /*0x7af706*/
    v7 = WindowLongA; /*0x7af712*/
    if ( a2 > 0x111 ) /*0x7af714*/
    {
      if ( a2 == 514 ) /*0x7af82f*/
      {
        if ( WindowLongA[3] ) /*0x7af8c6*/
          (*(void (**)(unsigned int *, HWND, int))(*WindowLongA + 4))(WindowLongA, hWnd, 1); /*0x7af8d4*/
      }
      else if ( a2 == 1257 && *(HWND *)v4 == hWnd ) /*0x7af84d*/
      {
        if ( WindowLongA[3] == 2 ) /*0x7af859*/
        {
          StringCSF = GetStringCSF(aWdtFactionsele_1, 0, g_Str_File_WorldDom_cpp, 176); /*0x7af895*/
        }
        else if ( WindowLongA[3] == 3 ) /*0x7af85c*/
        {
          StringCSF = GetStringCSF((wchar_t *)aWdtFactionsele_0, 0, g_Str_File_WorldDom_cpp, 179); /*0x7af882*/
        }
        else
        {
          StringCSF = GetStringCSF((wchar_t *)aWdtFactionsele, 0, g_Str_File_WorldDom_cpp, 182); /*0x7af86f*/
        }
        WideString::Assign((wchar_t **)&a3, StringCSF); /*0x7af89f*/
        WideString::Reassign_Alt((void **)(v4 + 8), (const wchar_t **)&a3); /*0x7af8ac*/
        DeleteAndZero::Alt((void **)&a3); /*0x7af8b5*/
        return 0; /*0x7af8c3*/
      }
    }
    else
    {
      if ( a2 != 273 ) /*0x7af71a*/
      {
        switch ( a2 ) /*0x7af734*/
        {
          case 0xFu: /*0x7af734*/
            Dialog::DrawBackground(hWnd); /*0x7af77e*/
            if ( DSurface_Alternate ) /*0x7af78a*/
            {
              v8 = v7[7]; /*0x7af78c*/
              if ( v8 ) /*0x7af791*/
              {
                v9 = (int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)v8 + 120))(v8, v15); /*0x7af79a*/
                v11 = *v9; /*0x7af7a1*/
                v12 = v9[1]; /*0x7af7a8*/
                v13 = v9[2]; /*0x7af7af*/
                v14 = v9[3]; /*0x7af7bc*/
                (*(void (**)(int, int *, unsigned int))(*(unsigned int *)DSurface_Alternate + 20))( /*0x7af7c7*/
                  DSurface_Alternate,
                  &v11,
                  0);
                (*(void (**)(int, int *, unsigned int, int *, unsigned int, int))(*(unsigned int *)DSurface_Alternate + 8))( /*0x7af7e4*/
                  DSurface_Alternate,
                  &v11,
                  v7[7],
                  &v11,
                  0,
                  1);
              }
            }
            Dialog::StopBink(hWnd); /*0x7af7e9*/
            ValidateRect(hWnd, 0); /*0x7af7f1*/
            goto LABEL_14; /*0x7af7f1*/
          case 0x14u: /*0x7af734*/
  LABEL_14:
            result = 1; /*0x7af7f7*/
            break; /*0x7af803*/
          case 0x2Bu: /*0x7af734*/
            Dialog::Resize((char *)v4); /*0x7af768*/
            result = 1; /*0x7af770*/
            break; /*0x7af779*/
          case 0x84u: /*0x7af734*/
            v11 = (uint16_t)v4; /*0x7af74d*/
            v12 = IDA_HIWORD(v4); /*0x7af751*/
            WorldDominationFactionDlgProc_Helper(hWnd, (int)&v11); /*0x7af755*/
            result = 0; /*0x7af75d*/
            break; /*0x7af763*/
          default:
            return 0;
        }
        return result; /*0x7af763*/
      }
      if ( (unsigned short)a3 == 1670 ) /*0x7af80d*/
      {
        (*(void (**)(unsigned int *, HWND, int))(*WindowLongA + 4))(WindowLongA, hWnd, -1); /*0x7af81a*/
        return 0; /*0x7af826*/
      }
    }
    return 0; /*0x7af8d7*/
  }
  return result; /*0x7af75a*/
}
}
// 0x7AF970
namespace gamemd {
AbstractClass * * sub_7AF970()
{
  int v2; // ebx
  unsigned int *v3; // eax
  int v4; // edi
  OwnerDrawControl v6; // [esp+Ch] [ebp-8Ch] BYREF
  int v7; // [esp+18h] [ebp-80h]
  unsigned int *v8; // [esp+1Ch] [ebp-7Ch]
  void (***v9)(unsigned int, int); // [esp+20h] [ebp-78h]
  unsigned int *v10; // [esp+24h] [ebp-74h]
  unsigned int *v11; // [esp+28h] [ebp-70h]
  CCFileClass v12; // [esp+2Ch] [ebp-6Ch] BYREF
  int v13[3]; // [esp+84h] [ebp-14h] BYREF
  int v14; // [esp+90h] [ebp-8h]

  Screen::Capture(1, 0, v2, a2); /*0x7af97c*/
  SimpleDialogControl::Constructor((SimpleDialogControl *)&v6); /*0x7af985*/
  v7 = 0; /*0x7af995*/
  v8 = 0; /*0x7af999*/
  v9 = 0; /*0x7af99d*/
  v10 = 0; /*0x7af9a1*/
  v6 = (OwnerDrawControl)(void*)&WorldDominationTour_FactionSelectDialogControl_vftable; /*0x7af9a5*/
  CCFileClass::Construct(&v12, aWdtfsbsmPcx); /*0x7af9ad*/
  v8 = DecodeFrameSHP((int)&v12, 0, 0, 0); /*0x7af9cb*/
  *(unsigned int *)v12.CDFileClass = (void*)&CCFileClass_vftable; /*0x7af9cf*/
  v14 = 0; /*0x7af9d3*/
  Vector::Clear((int)v13); /*0x7af9da*/
  *(unsigned int *)v12.CDFileClass = &off_7E1668; /*0x7af9e3*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v12); /*0x7af9eb*/
  if ( !v9 ) /*0x7af9f4*/
  {
    CCFileClass::Construct(&v12, aWdtfsasmPcx); /*0x7af9ff*/
    v3 = DecodeFrameSHP((int)&v12, 0, 0, 0); /*0x7afa0c*/
    *(unsigned int *)v12.CDFileClass = (void*)&CCFileClass_vftable; /*0x7afa18*/
    v9 = (void (***)(unsigned int, int))v3; /*0x7afa1c*/
    v14 = 0; /*0x7afa20*/
    Vector::Clear((int)v13); /*0x7afa27*/
    BufferIOFileClass::Destruct((BufferIOFileClass *)&v12); /*0x7afa30*/
  }
  if ( !v10 ) /*0x7afa39*/
  {
    CCFileClass::Construct(&v12, aWdtfsssmPcx); /*0x7afa44*/
    v10 = DecodeFrameSHP((int)&v12, 0, 0, 0); /*0x7afa5a*/
    CCFileClass::Destruct(&v12); /*0x7afa5e*/
  }
  v11 = v8; /*0x7afa76*/
  RunDialog(0x125u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))WorldDominationFactionDlgProc, (LPARAM)&v6); /*0x7afa7a*/
  v4 = v7; /*0x7afa7f*/
  v6 = (OwnerDrawControl)(void*)&WorldDominationTour_FactionSelectDialogControl_vftable; /*0x7afa83*/
  if ( v8 ) /*0x7afa91*/
    (*(void (**)(unsigned int *, int))*v8)(v8, 1); /*0x7afa97*/
  if ( v9 ) /*0x7afa9f*/
    (**v9)(v9, 1); /*0x7afaa5*/
  if ( v10 ) /*0x7afaad*/
    (*(void (**)(unsigned int *, int))*v10)(v10, 1); /*0x7afab3*/
  OwnerDrawControl::InitVtable(&v6); /*0x7afab9*/
  return v4; /*0x7afac0*/
}
}
// 0x7AFB90
namespace gamemd {
int StartWDTCampaign()
{
  wchar_t *StringCSF; // eax
  wchar_t *v4; // eax
  void (***v6)(unsigned int, int); // ebp
  unsigned int *v7; // eax
  char v8; // bl
  MixFileClass *v9; // eax
  unsigned int *v10; // eax
  char v11; // bl
  MixFileClass *v12; // eax
  unsigned int *v13; // eax
  char v14; // bl
  MixFileClass *v15; // eax
  int v16; // esi
  OwnerDrawControl v17; // esi
  ObjectClass *v18; // [esp+0h] [ebp-13Ch]
  DeleteAndZero v19; // [esp+10h] [ebp-12Ch] BYREF
  ObjectClass *v20; // [esp+1Ch] [ebp-120h]
  unsigned int *v21; // [esp+20h] [ebp-11Ch]
  void (__stdcall ***v22)(int); // [esp+24h] [ebp-118h]
  ComPtr v23; // [esp+28h] [ebp-114h] BYREF
  int v24[3]; // [esp+88h] [ebp-B4h] BYREF
  int v25; // [esp+94h] [ebp-A8h]
  OwnerDrawControl v26[8]; // [esp+9Ch] [ebp-A0h] BYREF

  IDA_HIBYTE(v19.DeleteAndZero_field_0x04) = a1; /*0x7afba6*/
  if ( (int)g_DisplayWidth > 640 ) /*0x7afbaa*/
  {
    StringCSF = GetStringCSF(aWolWdtresoluti, 0, g_Str_File_WorldDom_cpp, 385); /*0x7afbc1*/
    WideString::Assign((wchar_t **)&v19, StringCSF); /*0x7afbcb*/
    v4 = WideString::GetOrEmpty((wchar_t **)&v19); /*0x7afbdb*/
    if ( ShowDialogConfirm(v4, 4, (uint8_t (*)(void))Game::ProcessIdle, 1) != 6 /*0x7afc0e*/
      || !Team_Start(v18, 0x1E0u, a2, a3) )
    {
      DeleteAndZero::Alt(&v19); /*0x7afbf5*/
      return 0; /*0x7afc06*/
    }
    stru_A8EB00.ObjectTypeClass[33] = 640; /*0x7afc32*/
    stru_A8EB00.ObjectTypeClass[34] = 480; /*0x7afc38*/
    ScenarioClass::SaveGameOptions((ScenarioClass *)&stru_A8EB00.ObjectTypeClass[24]); /*0x7afc42*/
    DeleteAndZero::Alt(&v19); /*0x7afc4b*/
  }
  v6 = 0; /*0x7afc52*/
  v22 = 0; /*0x7afc5d*/
  v21 = 0; /*0x7afc61*/
  *(unsigned int *)v19.__pad_0 = 0; /*0x7afc65*/
  v7 = CCFileClass::Construct((CCFileClass *)&v23.ComPtr_field_0x08, g_Str_File_WDT_MIX); /*0x7afc69*/
  v8 = (*(int (**)(unsigned int *, unsigned int))(*v7 + 20))(v7, 0); /*0x7afc82*/
  v23.ComPtr_field_0x08 = (int)&CCFileClass_vftable; /*0x7afc84*/
  v25 = 0; /*0x7afc88*/
  Vector::Clear((int)v24); /*0x7afc8f*/
  v23.ComPtr_field_0x08 = (int)&off_7E1668; /*0x7afc98*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v23.ComPtr_field_0x08); /*0x7afca0*/
  if ( v8 ) /*0x7afca7*/
  {
    v9 = (MixFileClass *)RA2_OPNEW(0x28u); /*0x7afcab*/
    if ( v9 ) /*0x7afcb5*/
      v22 = (void (__stdcall ***)(int))MixFileClass::FromFile(v9, g_Str_File_WDT_MIX, (int)dword_886980); /*0x7afcc8*/
    else
      v22 = 0; /*0x7afcce*/
  }
  v10 = CCFileClass::Construct((CCFileClass *)&v23.ComPtr_field_0x08, aWdtvoxMix); /*0x7afcdb*/
  v11 = (*(int (**)(unsigned int *, unsigned int))(*v10 + 20))(v10, 0); /*0x7afcef*/
  v23.ComPtr_field_0x08 = (int)&CCFileClass_vftable; /*0x7afcf1*/
  v25 = 0; /*0x7afcf5*/
  Vector::Clear((int)v24); /*0x7afcfc*/
  v23.ComPtr_field_0x08 = (int)&off_7E1668; /*0x7afd05*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v23.ComPtr_field_0x08); /*0x7afd0d*/
  if ( v11 ) /*0x7afd14*/
  {
    v12 = (MixFileClass *)RA2_OPNEW(0x28u); /*0x7afd18*/
    if ( v12 ) /*0x7afd22*/
      v21 = MixFileClass::FromFile(v12, aWdtvoxMix, (int)dword_886980); /*0x7afd35*/
    else
      v21 = 0; /*0x7afd3b*/
  }
  v13 = CCFileClass::Construct((CCFileClass *)&v23.ComPtr_field_0x08, aLocalMix_1); /*0x7afd48*/
  v14 = (*(int (**)(unsigned int *, unsigned int))(*v13 + 20))(v13, 0); /*0x7afd5c*/
  v23.ComPtr_field_0x08 = (int)&CCFileClass_vftable; /*0x7afd5e*/
  v25 = 0; /*0x7afd62*/
  Vector::Clear((int)v24); /*0x7afd69*/
  v23.ComPtr_field_0x08 = (int)&off_7E1668; /*0x7afd72*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v23.ComPtr_field_0x08); /*0x7afd7a*/
  if ( v14 ) /*0x7afd81*/
  {
    v15 = (MixFileClass *)RA2_OPNEW(0x28u); /*0x7afd85*/
    if ( v15 ) /*0x7afd8f*/
      *(unsigned int *)v19.__pad_0 = MixFileClass::FromFile(v15, aLocalMix_1, (int)dword_886980); /*0x7afda2*/
    else
      *(unsigned int *)v19.__pad_0 = 0; /*0x7afda8*/
    v6 = *(void (****)(unsigned int, int))v19.__pad_0; /*0x7afdac*/
  }
  if ( !v22 ) /*0x7afdb6*/
    goto LABEL_46; /*0x7afdb6*/
  if ( !v6 ) /*0x7afdbe*/
  {
    (**v22)(1); /*0x7b004a*/
  LABEL_46:
    if ( v6 ) /*0x7b004e*/
      (**v6)(v6, 1); /*0x7b0057*/
    if ( v21 ) /*0x7b005f*/
      (*(void (**)(unsigned int *, int))*v21)(v21, 1); /*0x7b0065*/
    return 0; /*0x7b006a*/
  }
  v16 = IDA_HIBYTE(v19.DeleteAndZero_field_0x04) != 0 ? 4 : 1;
  if ( (IDA_HIBYTE(v19.DeleteAndZero_field_0x04) != 0 ? 3 : 0) == 0xFFFFFFFF )
    goto LABEL_41; /*0x7afdd2*/
  while ( 2 )
  {
    if ( v16 == 6 ) /*0x7afde0*/
      goto LABEL_40; /*0x7afde0*/
    switch ( v16 )
    {
      case 1:
        Screen::Capture(1, 0, v14, (int)&rc_ptr_WorldDominationTour_Campaign_vftable); /*0x7afdf9*/
        Team_Start_7B0490(v26); /*0x7afe05*/
        RunDialog(0x125u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))WorldDominationFactionDlgProc, (LPARAM)v26); /*0x7afe1c*/
        v17 = v26[3]; /*0x7afe21*/
        Team_Start_7AF500(v26); /*0x7afe2f*/
        dword_B77F94 = (char *)v17; /*0x7afe34*/
        v16 = v17 != 0 ? 4 : 0;
        goto LABEL_25; /*0x7afe3e*/
      case 4:
        if ( FetchWOLData(v18) ) /*0x7afeef*/
        {
          ComPtr::Constructor((ComPtr *)&v19.DeleteAndZero_field_0x08); /*0x7aff00*/
          v19.DeleteAndZero_field_0x08 = (int)&rc_ptr_WorldDominationTour_Campaign_vftable; /*0x7aff0f*/
          ComPtr::Set((ComPtr *)&v19.DeleteAndZero_field_0x08, stru_B77F68.ComPtr_field_0x04); /*0x7aff13*/
          if ( !v20 ) /*0x7aff1e*/
          {
            v19.DeleteAndZero_field_0x08 = (int)&rc_ptr_WorldDominationTour_Campaign_vftable; /*0x7b0030*/
            ComPtr::Release((ComPtr *)&v19.DeleteAndZero_field_0x08); /*0x7b0034*/
            return 0; /*0x7b0045*/
          }
          Team_Start_765410((int)v20, dword_B77F94); /*0x7aff2b*/
          if ( Team_Start_764FA0(v20) ) /*0x7aff34*/
          {
            ComPtr::Constructor(&v23); /*0x7aff41*/
            *(unsigned int *)v23.__pad_0 = (void*)&rc_ptr_WorldDominationTour_Campaign_vftable; /*0x7aff50*/
            ComPtr::Set(&v23, stru_B77F68.ComPtr_field_0x14); /*0x7aff54*/
            if ( v23.ComPtr_field_0x04 && !Team_Start_764FA0((ObjectClass *)v23.ComPtr_field_0x04) ) /*0x7aff61*/
              Team_Start_76ECD0((int)&v23, dword_B77F98); /*0x7aff74*/
            *(unsigned int *)v23.__pad_0 = (void*)&rc_ptr_WorldDominationTour_Campaign_vftable; /*0x7aff7d*/
            ComPtr::Release(&v23); /*0x7aff81*/
          }
          dword_A8B3AC = dword_B77F94 == (char *)3; /*0x7aff9a*/
          if ( Team_Start_76ED10((int)&v19.DeleteAndZero_field_0x08, dword_B77F98) ) /*0x7affa4*/
          {
            stru_B77D80.HashTable_field_0x44 = 0; /*0x7affb2*/
            Team_Start_597430((ObjectClass *)&g_MissionQueueFrame.briefing[356]); /*0x7affb8*/
            v16 = 5; /*0x7affbd*/
          }
          else
          {
            v16 = 1; /*0x7affc4*/
          }
          v19.DeleteAndZero_field_0x08 = (int)&rc_ptr_WorldDominationTour_Campaign_vftable; /*0x7affcd*/
          ComPtr::Release((ComPtr *)&v19.DeleteAndZero_field_0x08); /*0x7affd1*/
  LABEL_25:
          if ( !v16 ) /*0x7afe43*/
            goto LABEL_40; /*0x7afe43*/
          continue; /*0x7afe43*/
        }
        v16 = 0; /*0x7afff2*/
  LABEL_40:
        v6 = *(void (****)(unsigned int, int))v19.__pad_0; /*0x7afff4*/
  LABEL_41:
        ((void (__thiscall *)(void (__stdcall ***)(int), int))**v22)(v22, 1); /*0x7afff8*/
        (**v6)(v6, 1); /*0x7b0009*/
        if ( v21 ) /*0x7b0011*/
          (*(void (**)(unsigned int *, int))*v21)(v21, 1); /*0x7b0017*/
        return v16 == 6;
      case 5:
        v16 = JoinLobbyWOL(v18) != 1 ? 4 : 6;
        continue; /*0x7affed*/
    }
  }
}
}
// 0x7A0D10
namespace gamemd {
int sub_7A0D10()
{
  int result; // eax
  int v1; // ebp
  signed int v2; // ebx
  signed int v3; // edi
  ULONG S_addr; // esi
  char *v5; // eax
  size_t v6; // [esp+Ch] [ebp-78h]
  int v7; // [esp+10h] [ebp-74h] BYREF
  int v8; // [esp+14h] [ebp-70h]
  struct in_addr v9[27]; // [esp+18h] [ebp-6Ch] BYREF

  result = g_NetworkLobbyState; /*0x7a0d10*/
  v1 = 0; /*0x7a0d1a*/
  if ( !g_NetworkLobbyState ) /*0x7a0d1f*/
  {
    result = 0; /*0x7a0d2a*/
    v2 = 0; /*0x7a0d30*/
    memset(v9, 0, sizeof(v9)); /*0x7a0d32*/
    v3 = dword_B77900; /*0x7a0d34*/
    v7 = 0; /*0x7a0d3a*/
    v6 = dword_B77900; /*0x7a0d40*/
    if ( (int)dword_B77900 > 0 ) /*0x7a0d44*/
    {
      do /*0x7a0dba*/
      {
        if ( v1 >= 0 && v2 < (int)dword_B77900 ) /*0x7a0d51*/
        {
          qmemcpy(v9, (char *)dword_B77908 + v1, sizeof(v9)); /*0x7a0d64*/
          v3 = v6; /*0x7a0d66*/
        }
        S_addr = v9[6].S_un.S_addr; /*0x7a0d6f*/
        ntoainet(v9[6]); /*0x7a0d71*/
        Debug::Log(); /*0x7a0d81*/
        v8 = *(unsigned int *)g_UIPointerTable; /*0x7a0d9c*/
        v5 = ntoainet((struct in_addr)S_addr); /*0x7a0da0*/
        result = (*(int (__stdcall **)(LPVOID, char *, int, int *))(v8 + 24))(g_UIPointerTable, v5, 1000, &v7); /*0x7a0db1*/
        ++v2; /*0x7a0db4*/
        v1 += 108; /*0x7a0db5*/
      }
      while ( v2 < v3 ); /*0x7a0dba*/
    }
  }
  return result; /*0x7a0dbd*/
}
} // namespace gamemd

// 0x7A0EA0
namespace gamemd {
void INIClass::SetGameOptionsPing()
{

  int i; // edi
  char *v5; // ecx
  HWND GameUI; // ecx

  Debug::Log(); /*0x7a0eaf*/
  for ( i = 0; i < 8; ++i ) /*0x7a0eb7*/
  {
    v5 = (char *)*(&dword_A8DA90 + i); /*0x7a0eb9*/
    if ( v5 ) /*0x7a0ec2*/
    {
      if ( !strcmp(ToWideStringChar(v5), a1) ) /*0x7a0ed1*/
      {
        dword_B76440[i] = a2; /*0x7a0ef8*/
        GameUI = (HWND)Dialog::FindGameUI(); /*0x7a0f04*/
        if ( GameUI ) /*0x7a0f08*/
        {
          if ( a2 >= 0 ) /*0x7a0f0c*/
          {
            if ( a2 >= 300 ) /*0x7a0f18*/
            {
              if ( a2 >= 500 ) /*0x7a0f24*/
                UpdateLobbyGraphicsWOL(GameUI, 2); /*0x7a0f2e*/
              else
                UpdateLobbyGraphicsWOL(GameUI, 1); /*0x7a0f28*/
            }
            else
            {
              UpdateLobbyGraphicsWOL(GameUI, 0); /*0x7a0f1c*/
            }
          }
          else
          {
            UpdateLobbyGraphicsWOL(GameUI, -1); /*0x7a0f10*/
          }
        }
      }
    }
  }

}
} // namespace gamemd

// 0x7A2110
namespace gamemd {
INT_PTR sub_7A2110(HWND hWnd, UINT a2, WPARAM a3, char * a4)
{
  if ( a2 > 0x2B ) /*0x7a2117*/
  {
    switch ( a2 ) /*0x7a2183*/
    {
      case 0x111u: /*0x7a2183*/
        switch ( (uint16_t)a3 ) /*0x7a21ce*/
        {
          case 0x5C0u: /*0x7a21ce*/
            if ( g_WOL_IdleHandler == 11 ) /*0x7a220b*/
            {
              CloseDialog(hWnd, 0); /*0x7a2213*/
              return 0; /*0x7a221a*/
            }
            SetEvent(Handles); /*0x7a2224*/
            break;
          case 0x708u: /*0x7a21ce*/
            (*(void (__stdcall **)(LPVOID, char *))(*(unsigned int *)ppv + 44))(ppv, aStart443900100_0); /*0x7a21fc*/
            return 0; /*0x7a2201*/
          case 0x709u: /*0x7a21ce*/
            (*(void (__stdcall **)(LPVOID, char *))(*(unsigned int *)ppv + 44))(ppv, aStart443900100); /*0x7a21e7*/
            return 0; /*0x7a21ec*/
        }
        break;
      case 0x113u: /*0x7a2183*/
        if ( !a3 ) /*0x7a21b4*/
        {
          sub_5E2AC0(); /*0x7a21b6*/
          return 0; /*0x7a21bd*/
        }
        break;
      case 0x497u: /*0x7a2183*/
        SetTimer(hWnd, 0, 0x7D0u, 0); /*0x7a21a3*/
        return 0; /*0x7a21ab*/
    }
  }
  else
  {
    switch ( a2 ) /*0x7a2119*/
    {
      case 0x2Bu: /*0x7a2119*/
        Dialog::Resize(a4); /*0x7a2171*/
        return 1; /*0x7a217b*/
      case 2u: /*0x7a2119*/
        KillTimer(hWnd, 0); /*0x7a2162*/
        return 0; /*0x7a216a*/
      case 0xFu: /*0x7a2119*/
        Dialog::DrawBackground(hWnd); /*0x7a213d*/
        Dialog::StopBink(hWnd); /*0x7a2144*/
        ValidateRect(hWnd, 0); /*0x7a214c*/
        return 1; /*0x7a2158*/
      case 0x14u: /*0x7a2119*/
        return 1; /*0x7a2133*/
    }
  }
  return 0; /*0x7a2133*/
}
} // namespace gamemd

// 0x7A2600
namespace gamemd {
int sub_7A2600(HWND hWnd, unsigned int a2, int a3, char * a4)
{
  int result; // eax
  unsigned int *v5; // ecx
  void *v6; // esi

  result = BaseDialogProc(hWnd, a2, a3, (unsigned int)a4); /*0x7a261a*/
  if ( !result ) /*0x7a2621*/
  {
    if ( a2 > 0x2B ) /*0x7a262a*/
    {
      if ( a2 == 273 && (unsigned short)a3 == 1472 ) /*0x7a270c*/
      {
        SetEvent(Handles); /*0x7a2714*/
        CloseDialog(hWnd, 1472); /*0x7a2721*/
      }
      return 0; /*0x7a2726*/
    }
    if ( a2 == 43 ) /*0x7a2630*/
    {
      Dialog::Resize(a4); /*0x7a26ee*/
      return 1; /*0x7a26fc*/
    }
    if ( a2 == 2 ) /*0x7a2639*/
    {
      v6 = g_UIControlState; /*0x7a26bf*/
      if ( g_UIControlState ) /*0x7a26c7*/
      {
        ComPtr::Dtor(g_UIControlState); /*0x7a26cb*/
        RA2_OPDEL(v6); /*0x7a26d1*/
        g_UIControlState = 0; /*0x7a26d9*/
        return 0; /*0x7a26e9*/
      }
      return 0; /*0x7a26c7*/
    }
    if ( a2 != 15 ) /*0x7a2642*/
      return a2 == 20; /*0x7a2647*/
    Dialog::DrawBackground(hWnd); /*0x7a265b*/
    Dialog::StopBink(hWnd); /*0x7a2662*/
    v5 = g_UIControlState; /*0x7a2667*/
    if ( g_UIControlState || g_abs_A8B254 == -1 && (v5 = dword_ABE154) != 0 ) /*0x7a2682*/
      Skirmish::RenderPreview(v5, hWnd); /*0x7a2685*/
    if ( LoadScreen::IsActive(dword_AC4F58) ) /*0x7a268f*/
      LoadScreen::Render((int)dword_AC4F58, a3, (int)a4, NAN); /*0x7a26a5*/
    ValidateRect(hWnd, 0); /*0x7a26ad*/
    return 1; /*0x7a26b6*/
  }
  return result; /*0x7a264d*/
}
} // namespace gamemd

// 0x7AC4F0
namespace gamemd {
void nullsub_265()
{
  ; /*0x7ac4f0*/
}
} // namespace gamemd

// 0x7ACBD0
namespace gamemd {
void E4Recv_7ACBD0::__Release__NonReentrantLock_details_Concurrency__QAEXXZ_1()
{

  *(unsigned int *)this = 0; /*0x7acbd0*/

}
} // namespace gamemd

// 0x7AF090
namespace gamemd {
int sub_7AF090()
{
  dword_B77ED0 = 0; /*0x7af092*/
  dword_B77ED4 = 0; /*0x7af097*/
  dword_B77ED8 = 0; /*0x7af09c*/
  dword_B77EDC = 0; /*0x7af0a1*/
  return 0; /*0x7af0a6*/
}
} // namespace gamemd

// 0x7AF0B0
namespace gamemd {
void sub_7AF0B0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x7af0bc*/
  dbl_B77EE8 = Math::Sqrt(v0 + v0); /*0x7af0ce*/
}
} // namespace gamemd

// 0x7AF0E0
namespace gamemd {
void sub_7AF0E0()
{
  dbl_B77F88 = dbl_B77EE8 / 60.0; /*0x7af0ec*/
}
} // namespace gamemd

// 0x7AF100
namespace gamemd {
void sub_7AF100()
{
  dbl_B77F40 = 1.0 / dbl_B77F88; /*0x7af10c*/
}
} // namespace gamemd

// 0x7AF120
namespace gamemd {
void sub_7AF120()
{
  dbl_B77F38 = 0.0174532925199433 * 45.0; /*0x7af12c*/
}
} // namespace gamemd

// 0x7AF140
namespace gamemd {
void sub_7AF140()
{
  dbl_B77EF8 = 0.0174532925199433 * 60.0; /*0x7af14c*/
}
} // namespace gamemd

// 0x7AF160
namespace gamemd {
void sub_7AF160()
{
  dbl_B77EB8 = 0.0174532925199433 * 90.0; /*0x7af16c*/
}
} // namespace gamemd

// 0x7AF180
namespace gamemd {
long long sub_7AF180()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B77EB8 - dbl_B77EF8); /*0x7af192*/
  result = Math::RoundToInt(v0 * dbl_B77EE8 * 0.5); /*0x7af1a6*/
  dword_B77F90 = result; /*0x7af1ab*/
  return result; /*0x7af1b0*/
}
} // namespace gamemd

// 0x7AF1C0
namespace gamemd {
void sub_7AF1C0()
{
  dbl_B77F00 = Math::ArcTan((double)dword_B77F90 * 0.00390625); /*0x7af1d7*/
}
} // namespace gamemd

// 0x7AF1F0
namespace gamemd {
void sub_7AF1F0()
{
  dbl_B77F28 = Math::ArcTan((double)(2 * dword_B77F90) / dbl_B77EE8); /*0x7af212*/
}
} // namespace gamemd

// 0x7AF220
namespace gamemd {
long long sub_7AF220()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B77F90) + 0.5); /*0x7af23b*/
  dword_B77F80 = result; /*0x7af240*/
  return result; /*0x7af246*/
}
} // namespace gamemd

// 0x7AF250
namespace gamemd {
int sub_7AF250()
{
  word_B77EE0 = 0; /*0x7af252*/
  word_B77EE2 = 0; /*0x7af258*/
  return 0; /*0x7af25e*/
}
} // namespace gamemd

// 0x7AF260
namespace gamemd {
int sub_7AF260()
{
  dword_B77F10 = 0; /*0x7af262*/
  dword_B77F14 = 0; /*0x7af267*/
  dword_B77F18 = 0; /*0x7af26c*/
  return 0; /*0x7af271*/
}
} // namespace gamemd

// 0x7AF280
namespace gamemd {
int sub_7AF280()
{
  dword_B77F50 = 0; /*0x7af285*/
  dword_B77F48 = 128; /*0x7af28f*/
  dword_B77F4C = 128; /*0x7af294*/
  return 128; /*0x7af299*/
}
} // namespace gamemd

// 0x7AF390
namespace gamemd {
int unknown_libname_61()
{
  DeleteAndZero(&unk_B77EF0); /*0x7af395*/
}
} // namespace gamemd

// 0x7AF3A0
namespace gamemd {
int unknown_libname_62()
{
  DeleteAndZero(&unk_B77F30); /*0x7af3a5*/
}
} // namespace gamemd

// 0x7AF3B0
namespace gamemd {
int unknown_libname_63()
{
  DeleteAndZero((void **)&unk_B77F08); /*0x7af3b5*/
}
} // namespace gamemd

// 0x7AF3C0
namespace gamemd {
int unknown_libname_64()
{
  DeleteAndZero(&unk_B77F20); /*0x7af3c5*/
}
} // namespace gamemd

// 0x7AF4C0
namespace gamemd {
int unknown_libname_65()
{
  DeleteAndZero(&stru_B77EB0); /*0x7af4c5*/
}
} // namespace gamemd

// 0x7AF4D0
namespace gamemd {
int unknown_libname_66()
{
  DeleteAndZero((void **)&unk_B77F1C); /*0x7af4d5*/
}
} // namespace gamemd

// 0x7AF4E0
namespace gamemd {
int unknown_libname_67()
{
  DeleteAndZero(&unk_B77EC8); /*0x7af4e5*/
}
} // namespace gamemd

// 0x7AF4F0
namespace gamemd {
int unknown_libname_68()
{
  DeleteAndZero((void **)&unk_B77EC0); /*0x7af4f5*/
}
} // namespace gamemd
