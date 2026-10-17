// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"
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
#include "e4/classes/Value_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/DynamicArray_e4.hpp"

// 0x597730
namespace gamemd {  // G42.18 ns repair
int MapSeed::ValidateName(int a2, void *a2_1)
{

  if ( a2 ) /*0x597736*/
    return (*(int (__stdcall **)(int, char *))(*&this->q020))(a2, this->q076 + 2)); /*0x597740*/
  int result; // eax
  (*((unsigned char *)&(result))) = ShowSaveLoadDialog((void *)((int)this), this->q076 + 2)); /*0x597752*/
  return result; /*0x597744*/
}  // G42.18 ns repair
} // namespace gamemd
// 0x5AC230
namespace gamemd {
int MapSeed::IsCellInBounds(void *a1)
{


  int v1; // edx
  v1 = *(__int16 *)&this->__pad_0; /*0x5ac230*/
  int result = *&this->__pad_002; // eax /*0x5ac233*/
  int v3 = result + v1; // esi /*0x5ac23e*/
  LOBYTE(result) = result + v1 > g_MissionQueueFrame.localVariables[160] /*0x5ac261*/
  && v1 - result < g_MissionQueueFrame.localVariables[160]
  && (result -= v1, result < g_MissionQueueFrame.localVariables[160])
  && v3 <= g_MissionQueueFrame.localVariables[161];
  return result; /*0x5ac25f*/

}
} // namespace gamemd
// 0x79C520
namespace gamemd {
int MapSeed::CheckName(void *a1)
{

  char **v2; // eax
  char v3; // bl
  const char *v4; // edx
  int result; // eax
  int v6; // esi
  char **v7; // [esp-8h] [ebp-18h]
  String v8; // [esp+4h] [ebp-Ch] BYREF
  char *v9; // [esp+Ch] [ebp-4h] BYREF

  String::AssignFromPtr(&v8, (const char **)this); /*0x79c52b*/
  (&v8)->ToLower(); /*0x79c534*/
  if ( !((String *)this)->Length() /*0x79c5aa*/
    || (v7 = String::ToLowerCopy((String *)&g_WebBrowser, &v9),
        v2 = String::ToLowerCopy(&v8, (char **)&v8.m_3[1]),
        v3 = String::Compare((String *)v2, (const char **)v7),
        DeleteAndZero((ObjectClass *)&v8.m_3[1]),
        DeleteAndZero((ObjectClass *)&v9),
        v3)
    || (unsigned __int8)ValidateStringContains((const char **)this, v4, asc_84BA18) )
  {
    result = (int)(DeleteAndZero((ObjectClass *)&v8)); /*0x79c5b7*/
    (result) = ((result) & ~0xFF) | ((0) & 0xFF); /*0x79c5bc*/
  }
  else
  {
    v6 = 0; /*0x79c5c8*/
    if ( *(int *)g_WindowManager <= 0 ) /*0x79c5cc*/
    {
      LABEL_12:
      result = (int)(DeleteAndZero((ObjectClass *)&v8)); /*0x79c624*/
      (result) = ((result) & ~0xFF) | ((1) & 0xFF); /*0x79c62d*/
    }
    else
    {
      while ( 1 ) /*0x79c5d2*/
      {
        unknown_libname_73(&v8.m_3[1]); /*0x79c5d2*/
        if ( v6 >= 0 && v6 < *(int *)g_WindowManager ) /*0x79c5e1*/
          String::Reassign((String *)&v8.m_3[1], (const char **)(*(unsigned int *)g_WOL_LoginQueue + 4 * v6)); /*0x79c5f1*/
        ((String *)&v8.m_3[1])->ToLower(); /*0x79c5fa*/
        if ( (unsigned __int8)String::Compare((String *)&v8.m_3[1], (const char **)&v8) ) /*0x79c608*/
          break; /*0x79c608*/
        DeleteAndZero((ObjectClass *)&v8.m_3[1]); /*0x79c615*/
        if ( ++v6 >= *(int *)g_WindowManager ) /*0x79c622*/
          goto LABEL_12; /*0x79c622*/
      }
      DeleteAndZero((ObjectClass *)&v8.m_3[1]); /*0x79c634*/
      result = (int)(DeleteAndZero((ObjectClass *)&v8)); /*0x79c63d*/
      (result) = ((result) & ~0xFF) | ((0) & 0xFF); /*0x79c642*/
    }
  }
  return result; /*0x79c54f*/

}
} // namespace gamemd
// 0x79C650
namespace gamemd {
AbstractClass * * MapSeed::InsertName()
{

  int v2; // eax
  int v3; // esi
  String *v4; // ecx
  int StringVector_field_0x10; // eax
  int v6; // esi
  String *v7; // ecx
  int v8; // eax
  int v9; // esi
  String *v10; // ecx
  const char *v11; // [esp+8h] [ebp-70h] BYREF
  char v12[108]; // [esp+Ch] [ebp-6Ch] BYREF

  if ( (unsigned __int8)MapSeed::CheckName(this) ) /*0x79c656*/
  {
    String::AssignFromPtr((String *)&v11, (const char **)this); /*0x79c668*/
    v2 = *(unsigned int *)g_WindowManager.__pad_0; /*0x79c66d*/
    v3 = *(unsigned int *)g_WindowManager.__pad_0; /*0x79c672*/
    if ( *(int *)g_WindowManager.__pad_0 >= dword_B73AAC ) /*0x79c67e*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&g_WindowManager); /*0x79c685*/
      v2 = *(unsigned int *)g_WindowManager.__pad_0; /*0x79c68a*/
    }
    if ( v2 >= dword_B73AAC ) /*0x79c695*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&g_WindowManager); /*0x79c69c*/
      v2 = *(unsigned int *)g_WindowManager.__pad_0; /*0x79c6a1*/
    }
    if ( v3 < v2 ) /*0x79c6a8*/
    {
      memcpy((char *)dword_B73AB0 + 4 * v3 + 4, (char *)dword_B73AB0 + 4 * v3, 4 * (v2 + 0x3FFFFFFF * v3)); /*0x79c6c5*/
      v2 = *(unsigned int *)g_WindowManager.__pad_0; /*0x79c6ca*/
    }
    v4 = (String *)((char *)dword_B73AB0 + 4 * v3); /*0x79c6d8*/
    if ( v4 ) /*0x79c6dd*/
    {
      String::AssignFromPtr(v4, &v11); /*0x79c6e4*/
      v2 = *(unsigned int *)g_WindowManager.__pad_0; /*0x79c6e9*/
    }
    *(unsigned int *)g_WindowManager.__pad_0 = v2 + 1; /*0x79c6ef*/
    StringVector_field_0x10 = stru_B76970.StringVector_field_0x10; /*0x79c6f4*/
    v6 = stru_B76970.StringVector_field_0x10; /*0x79c6f9*/
    if ( stru_B76970.StringVector_field_0x10 >= stru_B76970.StringVector_field_0x14 ) /*0x79c705*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&stru_B76970.StringVector_field_0x10); /*0x79c70c*/
      StringVector_field_0x10 = stru_B76970.StringVector_field_0x10; /*0x79c711*/
    }
    if ( StringVector_field_0x10 >= stru_B76970.StringVector_field_0x14 ) /*0x79c71c*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&stru_B76970.StringVector_field_0x10); /*0x79c723*/
      StringVector_field_0x10 = stru_B76970.StringVector_field_0x10; /*0x79c728*/
    }
    if ( v6 < StringVector_field_0x10 ) /*0x79c72f*/
    {
      memcpy( /*0x79c74c*/
        (void *)(stru_B76970.StringVector_field_0x18 + 4 * v6 + 4),
        (const void *)(stru_B76970.StringVector_field_0x18 + 4 * v6),
        4 * (StringVector_field_0x10 + 0x3FFFFFFF * v6));
      StringVector_field_0x10 = stru_B76970.StringVector_field_0x10; /*0x79c751*/
    }
    v7 = (String *)(stru_B76970.StringVector_field_0x18 + 4 * v6); /*0x79c75f*/
    if ( v7 ) /*0x79c764*/
    {
      String::AssignFromPtr(v7, &v11); /*0x79c76b*/
      StringVector_field_0x10 = stru_B76970.StringVector_field_0x10; /*0x79c770*/
    }
    stru_B76970.StringVector_field_0x10 = StringVector_field_0x10 + 1; /*0x79c776*/
    v8 = *(unsigned int *)g_WOL_BuddyList.__pad_0; /*0x79c77b*/
    v9 = *(unsigned int *)g_WOL_BuddyList.__pad_0; /*0x79c780*/
    if ( *(int *)g_WOL_BuddyList.__pad_0 >= dword_B779B4 ) /*0x79c78c*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x79c793*/
      v8 = *(unsigned int *)g_WOL_BuddyList.__pad_0; /*0x79c798*/
    }
    if ( v8 >= dword_B779B4 ) /*0x79c7a3*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x79c7aa*/
      v8 = *(unsigned int *)g_WOL_BuddyList.__pad_0; /*0x79c7af*/
    }
    if ( v9 < v8 ) /*0x79c7b6*/
    {
      memcpy(&dword_B779B8[v9 + 1], &dword_B779B8[v9], 4 * (v8 + 0x3FFFFFFF * v9)); /*0x79c7d3*/
      v8 = *(unsigned int *)g_WOL_BuddyList.__pad_0; /*0x79c7d8*/
    }
    v10 = (String *)&dword_B779B8[v9]; /*0x79c7e6*/
    if ( v10 ) /*0x79c7eb*/
    {
      String::AssignFromPtr(v10, &v11); /*0x79c7f2*/
      v8 = *(unsigned int *)g_WOL_BuddyList.__pad_0; /*0x79c7f7*/
    }
    *(unsigned int *)g_WOL_BuddyList.__pad_0 = v8 + 1; /*0x79c802*/
    if ( String::Length((String *)&unk_B73ACC) ) /*0x79c807*/
    {
      if ( (unsigned int)(time(0) - dword_B779D0) < 5 ) /*0x79c825*/
      {
LABEL_33:
        DeleteAndZero((ObjectClass *)&v11); /*0x79c8b7*/
        return; /*0x79c8bb*/
      }
      DeleteAndZero::Alt2((DeleteAndZero *)&unk_B73ACC); /*0x79c830*/
    }
    if ( stru_B76970.StringVector_field_0x10 ) /*0x79c83c*/
    {
      if ( stru_B76970.StringVector_field_0x10 > 0 ) /*0x79c83e*/
      {
        String::Reassign((String *)&unk_B73ACC, (const char **)stru_B76970.StringVector_field_0x18); /*0x79c84b*/
        DynamicArray::Remove((DynamicArray *)&stru_B76970.StringVector_field_0x10, 0); /*0x79c857*/
      }
      dword_B779D0 = time(0); /*0x79c864*/
      memset(v12, 0, sizeof(v12)); /*0x79c874*/
      strcpy(&v12[36], String::GetOrEmpty((String *)&unk_B73ACC)); /*0x79c8a1*/
      (*(void (**)(LPVOID, char *))(*(unsigned int *)ppv + 96))(ppv, v12); /*0x79c8b3*/
    }
    goto LABEL_33; /*0x79c8b3*/
  }

}
} // namespace gamemd
