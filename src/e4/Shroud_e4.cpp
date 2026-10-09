// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Shroud_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/RadarClass_e4.hpp"
#include "e4/classes/SideClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/ShroudClass_e4.hpp"

// 0x654490
namespace gamemd {
RadarClass * * Shroud::ProcessCellVisibility(MouseClass * aP1)
{
  int v3; // edx
  int v4; // ecx
  __int16 v5; // di
  __int16 v6; // ax
  int v7; // ecx
  int result; // eax
  int v9; // edi
  MapClass *RadarClass_field_0x1490; // eax
  MapClass *RadarClass_field_0x1498; // ebp
  RadarClass *v12; // eax
  int v13; // ecx
  int v14; // edx
  RadarClass *RadarClass_field_0x149C; // edi
  int v16; // eax

  ShroudClass::UpdateVisibility(aP1); /*0x65449d*/
  v3 = *(_DWORD *)&this->__pad_C0[60]; /*0x6544a2*/
  v4 = *(_DWORD *)&this->__pad_C0[64]; /*0x6544a8*/
  *(_DWORD *)this->__pad_14A8 = 0; /*0x6544b3*/
  *(_DWORD *)this->__pad_14A0 = 10000; /*0x6544bd*/
  this->RadarClass_field_0x149C = (RadarClass *)10000; /*0x6544c3*/
  v5 = v3 + v4 + 1; /*0x6544cf*/
  v6 = v4 + *(_DWORD *)&this->__pad_C0[52] - v3; /*0x6544da*/
  v7 = *(_DWORD *)&this->__pad_C0[68]; /*0x6544dc*/
  this->RadarClass_field_0x14A4 = 0; /*0x6544e7*/
  this->RadarClass_field_0x1498 = (MapClass *)-1; /*0x6544f4*/
  this->RadarClass_field_0x1494 = (MapClass *)((__int16)(v7 - 1 + v5) - (__int16)(1 - v7 + v6)); /*0x654533*/
  this->RadarClass_field_0x1490 = (MapClass *)(v6 - v5); /*0x65453e*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x654544*/
  result = LayerClass::CellIteratorNext((LayerClass *)this); /*0x65454b*/
  v9 = result; /*0x654550*/
  if ( result ) /*0x654554*/
  {
    while ( 1 ) /*0x654567*/
    {
      aP1 = v9->outBuffer; /*0x654567*/
      if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, (__int16 *)&aP1, 1) ) /*0x65456b*/
        break; /*0x65456b*/
  LABEL_17:
      result = LayerClass::CellIteratorNext((LayerClass *)this); /*0x65462c*/
      v9 = result; /*0x654633*/
      if ( !result ) /*0x654637*/
        return result; /*0x654637*/
    }
    if ( this->RadarClass_field_0x1498 == (MapClass *)-1 ) /*0x65457f*/
      this->RadarClass_field_0x1498 = (MapClass *)(v9->outBuffer + v9->u32_26); /*0x65458b*/
    RadarClass_field_0x1490 = this->RadarClass_field_0x1490; /*0x654594*/
    RadarClass_field_0x1498 = this->RadarClass_field_0x1498; /*0x65459a*/
    aP1 = v9->outBuffer; /*0x6545a0*/
    v12 = (RadarClass *)((char *)RadarClass_field_0x1490 + (__int16)aP1 - IDA_SHIWORD(aP1)); /*0x6545b0*/
    v13 = (__int16)aP1 + IDA_SHIWORD(aP1) - (_DWORD)RadarClass_field_0x1498; /*0x6545b2*/
    v14 = 2; /*0x6545b7*/
    if ( v12 == (RadarClass *)-1 ) /*0x6545bc*/
    {
      v12 = 0; /*0x6545be*/
    }
    else if ( v12 != (RadarClass *)(2 * *(_DWORD *)&this->__pad_C0[68] - 1) ) /*0x6545ce*/
    {
  LABEL_9:
      RadarClass_field_0x149C = this->RadarClass_field_0x149C; /*0x6545d5*/
      if ( (int)v12 >= (int)RadarClass_field_0x149C ) /*0x6545dd*/
      {
        if ( (int)v12 + v14 > (int)((int)RadarClass_field_0x149C + (unsigned int)this->RadarClass_field_0x14A4) ) /*0x6545f4*/
          this->RadarClass_field_0x14A4 = (CampaignClass *)((char *)v12 + v14 - (_DWORD)RadarClass_field_0x149C); /*0x6545fa*/
      }
      else
      {
        this->RadarClass_field_0x149C = v12; /*0x6545df*/
      }
      v16 = *(_DWORD *)this->__pad_14A0; /*0x654600*/
      if ( v13 >= v16 ) /*0x654608*/
      {
        if ( v13 + 1 > *(_DWORD *)this->__pad_14A8 + v16 ) /*0x654621*/
          *(_DWORD *)this->__pad_14A8 = v13 - v16 + 1; /*0x654626*/
      }
      else
      {
        *(_DWORD *)this->__pad_14A0 = v13; /*0x65460a*/
      }
      goto LABEL_17; /*0x654610*/
    }
    v14 = 1; /*0x6545d0*/
    goto LABEL_9; /*0x6545d0*/
  }
  return result; /*0x65463e*/
}
} // namespace gamemd