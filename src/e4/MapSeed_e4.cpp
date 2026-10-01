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
#include "e4/classes/Value_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"

// 0x597730
namespace gamemd {
int MapSeed::ValidateName(int a2)
{

  int result; // eax

  if ( a2 ) /*0x597736*/
    return (*(int (**)(int, char *))(*(unsigned int *)this + 8))(a2, (unsigned char *)this + 120); /*0x597740*/
  LOBYTE(result) = ShowSaveLoadDialog((void *)((int)this), (unsigned char *)this + 120); /*0x597752*/
  return result; /*0x597744*/

}
} // namespace gamemd
// 0x5AC230
namespace gamemd {
int MapSeed::IsCellInBounds(void *a1)
{

  int v1; // edx
  int result; // eax
  int v3; // esi

  v1 = *(int16_t *)this->__pad_0; /*0x5ac230*/
  result = *(int16_t *)&this->__pad_0[2]; /*0x5ac233*/
  v3 = result + v1; /*0x5ac23e*/
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

  ((String *)(&v8))->AssignFromPtr((const char **)this); /*0x79c52b*/
  String::ToLower(&v8); /*0x79c534*/
  if ( !String::Length((String *)this) /*0x79c5aa*/
    || (v7 = ((String *)((String *)&g_WindowManager.__pad_EC[684]))->ToLowerCopy(&v9),
        v2 = ((String *)(&v8))->ToLowerCopy((char **)&v8.m_3[1]),
        v3 = ((String *)((String *)v2))->Compare((const char **)v7),
        DeleteAndZero((ObjectClass *)&v8.m_3[1]),
        DeleteAndZero((ObjectClass *)&v9),
        v3)
    || (uint8_t)ValidateStringContains((const char **)this, v4, asc_84BA18) )
  {
    result = (int)(DeleteAndZero((ObjectClass *)&v8)); /*0x79c5b7*/
    LOBYTE(result) = 0; /*0x79c5bc*/
  }
  else
  {
    v6 = 0; /*0x79c5c8*/
    if ( *(int *)g_WindowManager.__pad_0 <= 0 ) /*0x79c5cc*/
    {
LABEL_12:
      result = (int)(DeleteAndZero((ObjectClass *)&v8)); /*0x79c624*/
      LOBYTE(result) = 1; /*0x79c62d*/
    }
    else
    {
      while ( 1 ) /*0x79c5d2*/
      {
        unknown_libname_73(&v8.m_3[1]); /*0x79c5d2*/
        if ( v6 >= 0 && v6 < *(int *)g_WindowManager.__pad_0 ) /*0x79c5e1*/
          ((String *)((String *)&v8.m_3[1]))->Reassign((const char **)(*(unsigned int *)g_WindowManager.__pad_8 + 4 * v6)); /*0x79c5f1*/
        String::ToLower((String *)&v8.m_3[1]); /*0x79c5fa*/
        if ( (uint8_t)((String *)((String *)&v8.m_3[1]))->Compare((const char **)&v8) ) /*0x79c608*/
          break; /*0x79c608*/
        DeleteAndZero((ObjectClass *)&v8.m_3[1]); /*0x79c615*/
        if ( ++v6 >= *(int *)g_WindowManager.__pad_0 ) /*0x79c622*/
          goto LABEL_12; /*0x79c622*/
      }
      DeleteAndZero((ObjectClass *)&v8.m_3[1]); /*0x79c634*/
      result = (int)(DeleteAndZero((ObjectClass *)&v8)); /*0x79c63d*/
      LOBYTE(result) = 0; /*0x79c642*/
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
  int v5; // eax
  int v6; // esi
  String *v7; // ecx
  int v8; // eax
  int v9; // esi
  String *v10; // ecx
  const char *v11; // [esp+8h] [ebp-70h] BYREF
  char v12[108]; // [esp+Ch] [ebp-6Ch] BYREF

  if ( (uint8_t)MapSeed::CheckName(this) ) /*0x79c656*/
  {
    ((String *)((String *)&v11))->AssignFromPtr((const char **)this); /*0x79c668*/
    v2 = *(unsigned int *)g_WindowManager.__pad_0; /*0x79c66d*/
    v3 = *(unsigned int *)g_WindowManager.__pad_0; /*0x79c672*/
    if ( *(int *)g_WindowManager.__pad_0 >= (int)g_WindowManager.Array_field_0x4 ) /*0x79c67e*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&g_WindowManager); /*0x79c685*/
      v2 = *(unsigned int *)g_WindowManager.__pad_0; /*0x79c68a*/
    }
    if ( v2 >= (int)g_WindowManager.Array_field_0x4 ) /*0x79c695*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&g_WindowManager); /*0x79c69c*/
      v2 = *(unsigned int *)g_WindowManager.__pad_0; /*0x79c6a1*/
    }
    if ( v3 < v2 ) /*0x79c6a8*/
    {
      memcpy( /*0x79c6c5*/
        (void *)(*(unsigned int *)g_WindowManager.__pad_8 + 4 * v3 + 4),
        (const void *)(*(unsigned int *)g_WindowManager.__pad_8 + 4 * v3),
        4 * (v2 + 0x3FFFFFFF * v3));
      v2 = *(unsigned int *)g_WindowManager.__pad_0; /*0x79c6ca*/
    }
    v4 = (String *)(*(unsigned int *)g_WindowManager.__pad_8 + 4 * v3); /*0x79c6d8*/
    if ( v4 ) /*0x79c6dd*/
    {
      ((String *)(v4))->AssignFromPtr(&v11); /*0x79c6e4*/
      v2 = *(unsigned int *)g_WindowManager.__pad_0; /*0x79c6e9*/
    }
    *(unsigned int *)g_WindowManager.__pad_0 = v2 + 1; /*0x79c6ef*/
    v5 = *(unsigned int *)&stru_B76900.needsRedraw; /*0x79c6f4*/
    v6 = *(unsigned int *)&stru_B76900.needsRedraw; /*0x79c6f9*/
    if ( *(int *)&stru_B76900.needsRedraw >= *(int *)&stru_B76900.hasParachute ) /*0x79c705*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&stru_B76900.needsRedraw); /*0x79c70c*/
      v5 = *(unsigned int *)&stru_B76900.needsRedraw; /*0x79c711*/
    }
    if ( v5 >= *(int *)&stru_B76900.hasParachute ) /*0x79c71c*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&stru_B76900.needsRedraw); /*0x79c723*/
      v5 = *(unsigned int *)&stru_B76900.needsRedraw; /*0x79c728*/
    }
    if ( v6 < v5 ) /*0x79c72f*/
    {
      memcpy( /*0x79c74c*/
        &stru_B76900.parachute->AnimClass_field_0x4 + v6,
        &stru_B76900.parachute->AnimClass_field_0x0 + v6,
        4 * (v5 + 0x3FFFFFFF * v6));
      v5 = *(unsigned int *)&stru_B76900.needsRedraw; /*0x79c751*/
    }
    v7 = (String *)(&stru_B76900.parachute->AnimClass_field_0x0 + v6); /*0x79c75f*/
    if ( v7 ) /*0x79c764*/
    {
      ((String *)(v7))->AssignFromPtr(&v11); /*0x79c76b*/
      v5 = *(unsigned int *)&stru_B76900.needsRedraw; /*0x79c770*/
    }
    *(unsigned int *)&stru_B76900.needsRedraw = v5 + 1; /*0x79c776*/
    v8 = *(unsigned int *)g_WOL_BuddyList.__pad_0; /*0x79c77b*/
    v9 = *(unsigned int *)g_WOL_BuddyList.__pad_0; /*0x79c780*/
    if ( *(int *)g_WOL_BuddyList.__pad_0 >= *(int *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] ) /*0x79c78c*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x79c793*/
      v8 = *(unsigned int *)g_WOL_BuddyList.__pad_0; /*0x79c798*/
    }
    if ( v8 >= *(int *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] ) /*0x79c7a3*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x79c7aa*/
      v8 = *(unsigned int *)g_WOL_BuddyList.__pad_0; /*0x79c7af*/
    }
    if ( v9 < v8 ) /*0x79c7b6*/
    {
      memcpy( /*0x79c7d3*/
        (void *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v9 + 4),
        (const void *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v9),
        4 * (v8 + 0x3FFFFFFF * v9));
      v8 = *(unsigned int *)g_WOL_BuddyList.__pad_0; /*0x79c7d8*/
    }
    v10 = (String *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v9); /*0x79c7e6*/
    if ( v10 ) /*0x79c7eb*/
    {
      ((String *)(v10))->AssignFromPtr(&v11); /*0x79c7f2*/
      v8 = *(unsigned int *)g_WOL_BuddyList.__pad_0; /*0x79c7f7*/
    }
    *(unsigned int *)g_WOL_BuddyList.__pad_0 = v8 + 1; /*0x79c802*/
    if ( String::Length((String *)&g_WindowManager.__pad_14[16]) ) /*0x79c807*/
    {
      if ( (unsigned int)(time(0) - *(unsigned int *)g_WOL_BuddyList.__pad_20) < 5 ) /*0x79c825*/
      {
LABEL_33:
        DeleteAndZero((ObjectClass *)&v11); /*0x79c8b7*/
        return; /*0x79c8bb*/
      }
      DeleteAndZero::Alt2((DeleteAndZero *)&g_WindowManager.__pad_14[16]); /*0x79c830*/
    }
    if ( *(unsigned int *)&stru_B76900.needsRedraw ) /*0x79c83c*/
    {
      if ( *(int *)&stru_B76900.needsRedraw > 0 ) /*0x79c83e*/
      {
        ((String *)((String *)&g_WindowManager.__pad_14[16]))->Reassign((const char **)stru_B76900.parachute); /*0x79c84b*/
        DynamicArray::Remove((DynamicArray *)&stru_B76900.needsRedraw, 0); /*0x79c857*/
      }
      *(unsigned int *)g_WOL_BuddyList.__pad_20 = time(0); /*0x79c864*/
      memset(v12, 0, sizeof(v12)); /*0x79c874*/
      strcpy(&v12[36], String::GetOrEmpty((String *)&g_WindowManager.__pad_14[16])); /*0x79c8a1*/
      (*(void (**)(LPVOID, char *))(*(unsigned int *)ppv + 96))(ppv, v12); /*0x79c8b3*/
    }
    goto LABEL_33; /*0x79c8b3*/
  }

}
} // namespace gamemd