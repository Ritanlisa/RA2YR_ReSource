// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/MapSeed_e4.hpp"
#include "e4/classes/Compare_e4.hpp"
#include "e4/classes/Map_e4.hpp"
#include "e4/classes/MapSeedClass_e4.hpp"
#include "e4/classes/MapSeedClass_18_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Network_e4.hpp"

// 0x597730
namespace gamemd {
int MapSeed::ValidateName(int a2)
{
  if ( a2 ) /*0x597736*/
    return (*(int (__stdcall **)(int, char *))(this->q008)(a2, &this->u32_300); /*0x597740*/
  else
    return (uint8_t)ShowSaveLoadDialog(&this->u32_300) != 0; /*0x597752*/
}
} // namespace gamemd
// 0x5AC230
namespace gamemd {
int MapSeed::IsCellInBounds()
{
  int v1; // edx
  int v2; // eax

  v1 = (int)(*this);
  v2 = this->q004; /*0x5ac233*/
  return v2 + v1 > g_MapCellHeight_Value /*0x5ac25f*/
      && v1 - v2 < g_MapCellHeight_Value
      && v2 - v1 < g_MapCellHeight_Value
      && v2 + v1 <= g_MapCellCount;
}
} // namespace gamemd
// 0x79C520
namespace gamemd {
int MapSeed::CheckName()
{
  char **v2; // eax
  bool v3; // bl
  int v5; // esi
  char **v6; // [esp-8h] [ebp-18h]
  void *v7; // [esp+4h] [ebp-Ch] BYREF
  void *v8; // [esp+8h] [ebp-8h] BYREF
  void *v9; // [esp+Ch] [ebp-4h] BYREF

  String::AssignFromPtr((char **)&v7, this); /*0x79c52b*/
  String::ToLower((const char **)&v7); /*0x79c534*/
  if ( !String::Length(this) /*0x79c5aa*/
    || (v6 = String::ToLowerCopy((const char **)&g_WebBrowser, (char **)&v9),
        v2 = String::ToLowerCopy((const char **)&v7, (char **)&v8),
        v3 = String::Compare((const char **)v2, (const char **)v6),
        DeleteAndZero(&v8),
        DeleteAndZero(&v9),
        v3)
    || (uint8_t)ValidateStringContains(asc_84BA18) )
  {
    DeleteAndZero(&v7); /*0x79c5b7*/
    return 0; /*0x79c5bc*/
  }
  else
  {
    v5 = 0; /*0x79c5c8*/
    if ( g_WindowManager <= 0 ) /*0x79c5cc*/
    {
  LABEL_12:
      DeleteAndZero(&v7); /*0x79c624*/
      return 1; /*0x79c62d*/
    }
    else
    {
      while ( 1 ) /*0x79c5d2*/
      {
        unknown_libname_73(&v8); /*0x79c5d2*/
        if ( v5 >= 0 && v5 < g_WindowManager ) /*0x79c5e1*/
          String::Reassign((char **)&v8, (const char **)g_WOL_LoginQueue + v5); /*0x79c5f1*/
        String::ToLower((const char **)&v8); /*0x79c5fa*/
        if ( String::Compare((const char **)&v8, (const char **)&v7) ) /*0x79c608*/
          break; /*0x79c608*/
        DeleteAndZero(&v8); /*0x79c615*/
        if ( ++v5 >= g_WindowManager ) /*0x79c622*/
          goto LABEL_12; /*0x79c622*/
      }
      DeleteAndZero(&v8); /*0x79c634*/
      DeleteAndZero(&v7); /*0x79c63d*/
      return 0; /*0x79c642*/
    }
  }
}
} // namespace gamemd
// 0x79C650
namespace gamemd {
AbstractClass * * MapSeed::InsertName()
{
  int v2; // eax
  int v3; // esi
  char **v4; // ecx
  int v5; // eax
  int v6; // esi
  char **v7; // ecx
  int v8; // eax
  int v9; // esi
  char **v10; // ecx
  void *v11; // [esp+8h] [ebp-70h] BYREF
  char v12[108]; // [esp+Ch] [ebp-6Ch] BYREF

  if ( MapSeed::CheckName(this) ) /*0x79c656*/
  {
    String::AssignFromPtr((char **)&v11, this); /*0x79c668*/
    v2 = g_WindowManager; /*0x79c66d*/
    v3 = g_WindowManager; /*0x79c672*/
    if ( g_WindowManager >= dword_B73AAC ) /*0x79c67e*/
    {
      DynamicVector::EnsureCapacity(&g_WindowManager); /*0x79c685*/
      v2 = g_WindowManager; /*0x79c68a*/
    }
    if ( v2 >= dword_B73AAC ) /*0x79c695*/
    {
      DynamicVector::EnsureCapacity(&g_WindowManager); /*0x79c69c*/
      v2 = g_WindowManager; /*0x79c6a1*/
    }
    if ( v3 < v2 ) /*0x79c6a8*/
    {
      memcpy((char *)g_WOL_LoginQueue + 4 * v3 + 4, (char *)g_WOL_LoginQueue + 4 * v3, 4 * (v2 + 0x3FFFFFFF * v3)); /*0x79c6c5*/
      v2 = g_WindowManager; /*0x79c6ca*/
    }
    v4 = (char **)((char *)g_WOL_LoginQueue + 4 * v3); /*0x79c6d8*/
    if ( v4 ) /*0x79c6dd*/
    {
      String::AssignFromPtr(v4, (const char **)&v11); /*0x79c6e4*/
      v2 = g_WindowManager; /*0x79c6e9*/
    }
    g_WindowManager = v2 + 1; /*0x79c6ef*/
    v5 = g_WOL_RequestManager; /*0x79c6f4*/
    v6 = g_WOL_RequestManager; /*0x79c6f9*/
    if ( g_WOL_RequestManager >= dword_B76984 ) /*0x79c705*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_RequestManager); /*0x79c70c*/
      v5 = g_WOL_RequestManager; /*0x79c711*/
    }
    if ( v5 >= dword_B76984 ) /*0x79c71c*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_RequestManager); /*0x79c723*/
      v5 = g_WOL_RequestManager; /*0x79c728*/
    }
    if ( v6 < v5 ) /*0x79c72f*/
    {
      memcpy((char *)g_WOL_SessionID + 4 * v6 + 4, (char *)g_WOL_SessionID + 4 * v6, 4 * (v5 + 0x3FFFFFFF * v6)); /*0x79c74c*/
      v5 = g_WOL_RequestManager; /*0x79c751*/
    }
    v7 = (char **)((char *)g_WOL_SessionID + 4 * v6); /*0x79c75f*/
    if ( v7 ) /*0x79c764*/
    {
      String::AssignFromPtr(v7, (const char **)&v11); /*0x79c76b*/
      v5 = g_WOL_RequestManager; /*0x79c770*/
    }
    g_WOL_RequestManager = v5 + 1; /*0x79c776*/
    v8 = g_WOL_BuddyList; /*0x79c77b*/
    v9 = g_WOL_BuddyList; /*0x79c780*/
    if ( g_WOL_BuddyList >= dword_B779B4 ) /*0x79c78c*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x79c793*/
      v8 = g_WOL_BuddyList; /*0x79c798*/
    }
    if ( v8 >= dword_B779B4 ) /*0x79c7a3*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x79c7aa*/
      v8 = g_WOL_BuddyList; /*0x79c7af*/
    }
    if ( v9 < v8 ) /*0x79c7b6*/
    {
      memcpy((char *)g_WOL_ChannelMgr + 4 * v9 + 4, (char *)g_WOL_ChannelMgr + 4 * v9, 4 * (v8 + 0x3FFFFFFF * v9)); /*0x79c7d3*/
      v8 = g_WOL_BuddyList; /*0x79c7d8*/
    }
    v10 = (char **)((char *)g_WOL_ChannelMgr + 4 * v9); /*0x79c7e6*/
    if ( v10 ) /*0x79c7eb*/
    {
      String::AssignFromPtr(v10, (const char **)&v11); /*0x79c7f2*/
      v8 = g_WOL_BuddyList; /*0x79c7f7*/
    }
    g_WOL_BuddyList = v8 + 1; /*0x79c802*/
    if ( String::Length(&g_WOL_AuthObject) ) /*0x79c807*/
    {
      if ( (unsigned int)(time(0) - g_WOL_ParseState) < 5 ) /*0x79c825*/
      {
  LABEL_33:
        DeleteAndZero(&v11); /*0x79c8b7*/
        return; /*0x79c8bb*/
      }
      DeleteAndZero::Alt2((void **)&g_WOL_AuthObject); /*0x79c830*/
    }
    if ( g_WOL_RequestManager ) /*0x79c83c*/
    {
      if ( g_WOL_RequestManager > 0 ) /*0x79c83e*/
      {
        String::Reassign((char **)&g_WOL_AuthObject, (const char **)g_WOL_SessionID); /*0x79c84b*/
        DynamicArray::Remove(&g_WOL_RequestManager, 0); /*0x79c857*/
      }
      g_WOL_ParseState = time(0); /*0x79c864*/
      memset(v12, 0, sizeof(v12)); /*0x79c874*/
      strcpy(&v12[36], String::GetOrEmpty((char **)&g_WOL_AuthObject)); /*0x79c8a1*/
      (*(void (__stdcall **)(LPVOID, char *))(*(unsigned int *)ppv + 96))(ppv, v12); /*0x79c8b3*/
    }
    goto LABEL_33; /*0x79c8b3*/
  }
}
} // namespace gamemd