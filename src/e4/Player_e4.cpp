// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/Player_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Network_e4.hpp"

// 0x5E8DC0
namespace gamemd {
void Player::BuildListString(wchar_t * Destination)
{

  SessionClass *v2; // edi
  ReferenceCounted *v3; // esi
  wchar_t **v4; // eax
  CampaignScore *v5; // eax
  wchar_t *v6; // [esp+Ch] [ebp-Ch] BYREF
  char *a1; // [esp+10h] [ebp-8h] BYREF
  void *v8; // [esp+14h] [ebp-4h] BYREF

  *Destination = 0; /*0x5e8dc8*/
  v2 = (SessionClass *)&HouseClass_Player.__pad_5568[18396]; /*0x5e8dcd*/
  do /*0x5e8e89*/
  {
    v3 = (ReferenceCounted *)v2->GameMode[0]; /*0x5e8dd2*/
    unknown_libname_74(&v6); /*0x5e8dd8*/
    if ( !v3 /*0x5e8e17*/
      || v3 == (ReferenceCounted *)*(&g_MatrixTransformState + 2275)
      || v3 == (ReferenceCounted *)*(&g_MatrixTransformState + 2276)
      || v3 == (ReferenceCounted *)*(&g_MatrixTransformState + 2280)
      || v3 == (ReferenceCounted *)*(&g_MatrixTransformState + 2281)
      || v3 == (ReferenceCounted *)*(&g_MatrixTransformState + 2277)
      || v3 == (ReferenceCounted *)*(&g_MatrixTransformState + 2278)
      || v3 == (ReferenceCounted *)*(&g_MatrixTransformState + 2279) )
    {
      GetPlayerTypeString(&a1, (wchar_t *)v3); /*0x5e8e2b*/
      v4 = CharStringToWide((ObjectClass *)&v8, (const char **)&a1); /*0x5e8e38*/
      WideString::Reassign_Alt((void **)&v6, (const wchar_t **)v4); /*0x5e8e42*/
      DeleteAndZero::Alt(&v8); /*0x5e8e4b*/
      DeleteAndZero((int)&a1); /*0x5e8e54*/
    }
    else
    {
      WideString::Assign_Alt((void **)&v6, (wchar_t *)v3); /*0x5e8e1e*/
    }
    v5 = WideString::GetOrEmpty(&v6); /*0x5e8e5d*/
    wcscat(Destination, v5); /*0x5e8e64*/
    wcscat(Destination, (CampaignScore *)&stru_8304AC.unknown50); /*0x5e8e6f*/
    DeleteAndZero::Alt((void **)&v6); /*0x5e8e7b*/
    v2 = (SessionClass *)((char *)v2 + 4); /*0x5e8e80*/
  }
  while ( (int)v2 < (int)&HouseClass_Player.__pad_5568[18428] ); /*0x5e8e89*/

}
} // namespace gamemd
// 0x5E8BF0
namespace gamemd {
void Player::FindByName(wchar_t * String2)
{

  int v3; // ebp
  int v4; // esi
  const wchar_t *v5; // edi

  if ( !wcscmp((const wchar_t *)g_abs_AC119C, String2) ) /*0x5e8bfd*/
    return (wchar_t *)g_abs_AC119C; /*0x5e8c09*/
  if ( !wcscmp((const wchar_t *)g_abs_AC11A0, String2) ) /*0x5e8c1b*/
    return (wchar_t *)g_abs_AC11A0; /*0x5e8c27*/
  if ( !wcscmp((const wchar_t *)g_abs_AC11A4, String2) ) /*0x5e8c39*/
    return (wchar_t *)g_abs_AC11A4; /*0x5e8c45*/
  if ( !wcscmp((const wchar_t *)g_abs_AC11A8, String2) ) /*0x5e8c56*/
    return (wchar_t *)g_abs_AC11A8; /*0x5e8c62*/
  if ( !wcscmp((const wchar_t *)g_abs_AC11AC, String2) ) /*0x5e8c74*/
    return (wchar_t *)g_abs_AC11AC; /*0x5e8c80*/
  if ( !wcscmp(g_abs_AC11B0, String2) ) /*0x5e8c92*/
    return g_abs_AC11B0; /*0x5e8c9e*/
  if ( !wcscmp((const wchar_t *)g_abs_AC11B4, String2) ) /*0x5e8caf*/
    return (wchar_t *)g_abs_AC11B4; /*0x5e8cbb*/
  v3 = g_abs_A8DA84; /*0x5e8cc5*/
  v4 = 0; /*0x5e8ccb*/
  if ( g_abs_A8DA84 <= 0 ) /*0x5e8ccf*/
    return 0; /*0x5e8ced*/
  while ( 1 ) /*0x5e8cd8*/
  {
    v5 = *(const wchar_t **)(g_abs_A8DA78 + 4 * v4); /*0x5e8cd8*/
    if ( !wcscmp(v5, String2) ) /*0x5e8cdc*/
      break; /*0x5e8cdc*/
    if ( ++v4 >= v3 ) /*0x5e8ceb*/
      return 0; /*0x5e8ceb*/
  }
  return (wchar_t *)v5; /*0x5e8c0e*/

}
} // namespace gamemd
// 0x5E9440
namespace gamemd {
void Player::IsObserver()
{

  return this /*0x5e9461*/
      && (this == (void *)((unsigned int *)(dword_A8ED54))[51476]
       || this == (void *)((unsigned int *)(dword_A8ED54))[51477]
       || this == (void *)((unsigned int *)(dword_A8ED54))[51478]);

}
} // namespace gamemd