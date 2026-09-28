// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_7639A0_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/WaypointClass_e4.hpp"
#include "e4/classes/DamageArea_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/WaveClass_e4.hpp"
#include "e4/classes/WaypointPathClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Power_e4.hpp"

// 0x502160
namespace gamemd {
WaypointPathClass * * WaypointClass::FindOrAddPath(unsigned int * a2)
{
  int *v2; // ebp
  int v3; // ebx
  signed int v4; // esi
  int v5; // eax
  int v6; // eax
  Array *v7; // ecx
  int v8; // edi
  int *Element; // eax
  int v10; // kr08_4
  int v11; // eax
  WaypointPathClass ** result;
  unsigned int v13; // esi
  int v14; // eax
  int v15; // eax
  signed int v16; // [esp+10h] [ebp-Ch]
  int16_t v18; // [esp+1Ah] [ebp-2h]

  v2 = &this->padding_18[114]; /*0x502171*/
  v3 = *a2 / 256; /*0x50218e*/
  v4 = 0; /*0x502194*/
  v18 = a2[1] / 256; /*0x502196*/
  v16 = 0; /*0x50219b*/
  while ( 1 ) /*0x50219f*/
  {
    if ( !*v2 ) /*0x50219f*/
    {
      v5 = (int)(RA2_OPNEW(0x40u));
      if ( v5 ) /*0x5021b1*/
        v6 = WaypointPathClass::Construct(v5, v4); /*0x5021b6*/
      else
        v6 = 0; /*0x5021bd*/
      *v2 = v6; /*0x5021bf*/
    }
    v7 = (Array *)*v2; /*0x5021c2*/
    v8 = 0; /*0x5021c5*/
    if ( *(int *)(*v2 + 56) > 0 ) /*0x5021cc*/
      break; /*0x5021cc*/
  LABEL_13:
    ++v4; /*0x50221e*/
    ++v2; /*0x50221f*/
    v16 = v4; /*0x502225*/
    if ( v4 >= 12 ) /*0x502229*/
    {
      v13 = this->padding_18[113]; /*0x502233*/
      if ( !this->padding_18[v13 + 114] ) /*0x502239*/
      {
        v14 = (int)(RA2_OPNEW(0x40u));
        if ( v14 ) /*0x502250*/
          v15 = WaypointPathClass::Construct(v14, v13); /*0x502255*/
        else
          v15 = 0; /*0x50225c*/
        this->padding_18[v13 + 114] = v15; /*0x50225e*/
      }
      return WaypointClass_Find((ObjectClass *)this->padding_18[this->padding_18[113] + 114], a2); /*0x502277*/
    }
  }
  while ( 1 ) /*0x5021cf*/
  {
    Element = (int *)Array::GetElement(v7, v8); /*0x5021cf*/
    v10 = *Element; /*0x5021e1*/
    v11 = Element[1] / 256; /*0x5021f2*/
    if ( (uint16_t)(v10 / 256) == (unsigned short)v3 && (unsigned short)v11 == v18 ) /*0x5021ff*/
    {
      result = (gamemd::WaypointPathClass **)((char)((gamemd::WaypointPathClass **)(v16)));
      if ( v16 != this->padding_18[113] ) /*0x50220f*/
        return result; /*0x50227c*/
    }
    v7 = (Array *)*v2; /*0x502211*/
    if ( ++v8 >= *(unsigned int *)(*v2 + 56) ) /*0x502218*/
    {
      v4 = v16; /*0x50221a*/
      goto LABEL_13; /*0x50221a*/
    }
  }
}
}