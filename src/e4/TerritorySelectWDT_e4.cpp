// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_7665D0_e4.hpp"
#include "e4/classes/E4Recv_76FEB0_e4.hpp"
#include "e4/classes/E4Recv_7714B0_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/TextBuffer_e4.hpp"
#include "e4/classes/VectorCursor_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/TerrainClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/TerrainTypeClass_e4.hpp"

// 0x7665D0
namespace gamemd {
wchar_t ** E4Recv_7665D0::sub_7665D0(wchar_t ** a2)
{

  void ** v2;
  int v3; // ebx
  int v4; // edi
  char *v5; // edi
  const wchar_t **v6; // eax
  int v7; // edi
  char *v8; // edi
  const wchar_t **v9; // eax
  void *v11; // [esp+20h] [ebp-20h] BYREF
  char *v12; // [esp+24h] [ebp-1Ch]
  void *v13; // [esp+28h] [ebp-18h] BYREF
  void **v14; // [esp+2Ch] [ebp-14h] BYREF
  unsigned int *v15; // [esp+30h] [ebp-10h]
  void **v16; // [esp+34h] [ebp-Ch] BYREF
  int *v17; // [esp+38h] [ebp-8h]
  int v18; // [esp+3Ch] [ebp-4h]

  v2 = (int)((void **)(0));
  v12 = (void **)(this);
  if ( !dword_B72770 ) /*0x7665e4*/
    InitWDTGameOptions(); /*0x7665e6*/
  v3 = 6; /*0x7665ef*/
  unknown_libname_74(&v11); /*0x7665f4*/
  v17 = &dword_B72760; /*0x7665f9*/
  v18 = 0; /*0x766601*/
  v16 = &vt_VectorCursor_rc_ptr_WorldDominationTour_GameOption_DynamicVectorClass_rc_ptr_WorldDominationTour_GameOption; /*0x766605*/
  do /*0x7666b0*/
  {
    if ( !((uint8_t (*)(void ***))v16[1])(&v16) ) /*0x76661a*/
      break; /*0x76661f*/
    v4 = v17[1] + 8 * v18; /*0x766634*/
    ((ComPtr *)(&v14))->Constructor(); /*0x766637*/
    v14 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x76663c*/
    ((ComPtr *)(&v14))->Set(*(unsigned int *)(v4 + 4)); /*0x766648*/
    if ( (v2 & v15[2]) == 0 ) /*0x766654*/
    {
      v5 = v12 + 8; /*0x76665c*/
      if ( !(*(int (**)(unsigned int *, char *))(*v15 + 12))(v15, v12 + 8) ) /*0x766660*/
      {
        v6 = (const wchar_t **)(*(int (**)(unsigned int *, void **, char *, void **))(*v15 + 16))( /*0x766678*/
                                 v15,
                                 &v13,
                                 v5,
                                 &v11);
        WideString::Reassign_Alt(&v11, v6); /*0x766680*/
        DeleteAndZero::Alt(&v13); /*0x766689*/
        --v3; /*0x766692*/
        v2 |= v15[2]; /*0x766693*/
      }
    }
    v14 = (void **)(&vt_rc_ptr_WorldDominationTour_GameOption);
    ComPtr::Release(&v14); /*0x76669e*/
    ((void (*)(void ***))v16[2])(&v16); /*0x7666ab*/
  }
  while ( v3 ); /*0x7666b0*/
  v18 = 0; /*0x7666b8*/
  while ( v3 ) /*0x7666c0*/
  {
    if ( !((uint8_t (*)(void ***))v16[1])(&v16) ) /*0x7666ce*/
      break; /*0x7666d3*/
    v7 = v17[1] + 8 * v18; /*0x7666e8*/
    ((ComPtr *)(&v14))->Constructor(); /*0x7666eb*/
    v14 = &vt_rc_ptr_WorldDominationTour_GameOption; /*0x7666f0*/
    ((ComPtr *)(&v14))->Set(*(unsigned int *)(v7 + 4)); /*0x7666fc*/
    if ( (v2 & v15[2]) == 0 ) /*0x766708*/
    {
      v8 = v12 + 8; /*0x766710*/
      if ( (*(int (**)(unsigned int *, char *))(*v15 + 12))(v15, v12 + 8) != 2 ) /*0x76671a*/
      {
        v9 = (const wchar_t **)(*(int (**)(unsigned int *, void **, char *, void **))(*v15 + 16))( /*0x76672d*/
                                 v15,
                                 &v13,
                                 v8,
                                 &v11);
        WideString::Reassign_Alt(&v11, v9); /*0x766735*/
        DeleteAndZero::Alt(&v13); /*0x76673e*/
        --v3; /*0x766747*/
        v2 |= v15[2]; /*0x766748*/
      }
    }
    v14 = (void **)(&vt_rc_ptr_WorldDominationTour_GameOption);
    ComPtr::Release(&v14); /*0x766753*/
    ((void (*)(void ***))v16[2])(&v16); /*0x766760*/
  }
  WideString::AssignFromPtr(a2, (const wchar_t **)&v11); /*0x766776*/
  v16 = &vt_VectorCursor_rc_ptr_WorldDominationTour_GameOption_DynamicVectorClass_rc_ptr_WorldDominationTour_GameOption; /*0x76677f*/
  DeleteAndZero::Alt(&v11); /*0x766787*/
  return a2; /*0x76678e*/

}
}
// 0x7714B0
namespace gamemd {
void E4Recv_7714B0::sub_7714B0(int a2, char a3, int a4)
{

  int v5; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // edi
  int v10; // edx
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  void *v17[4]; // [esp+Ch] [ebp-10h] BYREF

  v5 = *((unsigned int *)this + 244); /*0x7714c4*/
  v6 = v5 - 1; /*0x7714c6*/
  if ( v5 > *((unsigned int *)this + 239) ) /*0x7714c9*/
  {
    do /*0x77150b*/
    {
      v7 = *((unsigned int *)this + 244); /*0x7714cb*/
      if ( v6 < v7 ) /*0x7714d3*/
      {
        v8 = v7 - 1; /*0x7714d5*/
        v9 = v6; /*0x7714d6*/
        for ( *((unsigned int *)this + 244) = v8; v9 < *((unsigned int *)this + 244); ++v9 ) /*0x7714e0*/
          String::Reassign((char **)(*((unsigned int *)this + 241) + 4 * v9), (const char **)(*((unsigned int *)this + 241) + 4 * v9 + 4)); /*0x7714f0*/
      }
      v10 = v6--; /*0x771506*/
    }
    while ( v10 > *((unsigned int *)this + 239) ); /*0x77150b*/
  }
  if ( !*((unsigned int *)this + 239) ) /*0x77150d*/
    *((unsigned char *)this + 952) = 1; /*0x771517*/
  unknown_libname_73(v17); /*0x771522*/
  v11 = *this; /*0x77152b*/
  DeleteAndZero::Alt2(v17); /*0x77153b*/
  v12 = *((unsigned int *)this + 6 * a2 + 227); /*0x771540*/
  if ( v12 > 0 )
  {
    v13 = v12 == 1 ? 0 : Random::Range(g_abs_886B88, 0, v12 - 1);
    if ( Map_Remove_770CE0(v11, *(unsigned int *)(*((unsigned int *)this + 6 * a2 + 224) + 4 * v13), (char **)v17) ) /*0x77156f*/
    {
      if ( !(uint8_t)this->Audio::IsPlaying() ) /*0x77157c*/
      {
        *((unsigned int *)this + 235) = Timer::GetTicks(); /*0x771598*/
        *((unsigned int *)this + 236) = v17[2]; /*0x7715a2*/
        *((unsigned int *)this + 237) = a4; /*0x7715a5*/
      }
      v14 = *((unsigned int *)this + 242); /*0x7715a8*/
      if ( *((unsigned int *)this + 244) < v14 /*0x7715d9*/
        || (*((unsigned char *)this + 973) || !v14)
        && (v15 = *((unsigned int *)this + 245), v15 > 0)
        && (*(uint8_t (**)(unsigned int *, int, unsigned int))(*((unsigned int *)this + 240) + 8))((unsigned int *)this + 240, v14 + v15, 0) )
      {
        v16 = *((unsigned int *)this + 244); /*0x7715e0*/
        *((unsigned int *)this + 244) = v16 + 1; /*0x7715eb*/
        String::Reassign((char **)(*((unsigned int *)this + 241) + 4 * v16), (const char **)v17); /*0x7715f4*/
      }
      if ( a3 ) /*0x7715ff*/
        ++*((unsigned int *)this + 239); /*0x771601*/
    }
  }
  DeleteAndZero(v17); /*0x77160b*/

}
}