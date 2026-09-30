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

// 0x654490
namespace gamemd {
RadarClass * * Shroud::ProcessCellVisibility(MouseClass * aP1)
{

  int v3; // edx
  int v4; // ecx
  int16_t v5; // di
  int16_t v6; // ax
  int v7; // ecx
  int result; // eax
  int v9; // edi
  int v10; // eax
  int v11; // ebp
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // edi
  int v16; // eax

  ShroudClass::UpdateVisibility(this, aP1); /*0x65449d*/
  v3 = *((unsigned int *)this + 63); /*0x6544a2*/
  v4 = *((unsigned int *)this + 64); /*0x6544a8*/
  *((unsigned int *)this + 1322) = 0; /*0x6544b3*/
  *((unsigned int *)this + 1320) = 10000; /*0x6544bd*/
  *((unsigned int *)this + 1319) = 10000; /*0x6544c3*/
  v5 = v3 + v4 + 1; /*0x6544cf*/
  v6 = v4 + *((unsigned int *)this + 61) - v3; /*0x6544da*/
  v7 = *((unsigned int *)this + 65); /*0x6544dc*/
  *((unsigned int *)this + 1321) = 0; /*0x6544e7*/
  *((unsigned int *)this + 1318) = -1; /*0x6544f4*/
  *((unsigned int *)this + 1317) = (int16_t)(v7 - 1 + v5) - (int16_t)(1 - v7 + v6); /*0x654533*/
  *((unsigned int *)this + 1316) = v6 - v5; /*0x65453e*/
  LayerClass::CellIteratorReset(&g_abs_87F7E8); /*0x654544*/
  result = LayerClass::CellIteratorNext(this); /*0x65454b*/
  v9 = result; /*0x654550*/
  if ( result ) /*0x654554*/
  {
    while ( 1 ) /*0x654567*/
    {
      aP1 = (gamemd::MouseClass *)((gamemd::RadarClass **)(*(MouseClass **)(v9 + 36)));
      if ( LayerClass::IsWithinUsableArea(this, (IUnknown *)&aP1, (TechnoClass *)1) ) /*0x65456b*/
        break; /*0x65456b*/
LABEL_17:
      result = LayerClass::CellIteratorNext(this); /*0x65462c*/
      v9 = result; /*0x654633*/
      if ( !result ) /*0x654637*/
        return result; /*0x654637*/
    }
    if ( *((unsigned int *)this + 1318) == -1 ) /*0x65457f*/
      *((unsigned int *)this + 1318) = *(int16_t *)(v9 + 36) + *(int16_t *)(v9 + 38); /*0x65458b*/
    v10 = *((unsigned int *)this + 1316); /*0x654594*/
    v11 = *((unsigned int *)this + 1318); /*0x65459a*/
    aP1 = *(MouseClass **)(v9 + 36); /*0x6545a0*/
    v12 = (int16_t)aP1 + v10 - IDA_SHIWORD(aP1); /*0x6545b0*/
    v13 = (int16_t)aP1 + IDA_SHIWORD(aP1) - v11; /*0x6545b2*/
    v14 = 2; /*0x6545b7*/
    if ( v12 == -1 ) /*0x6545bc*/
    {
      v12 = 0; /*0x6545be*/
    }
    else if ( v12 != 2 * *((unsigned int *)this + 65) - 1 ) /*0x6545ce*/
    {
LABEL_9:
      v15 = *((unsigned int *)this + 1319); /*0x6545d5*/
      if ( v12 >= v15 ) /*0x6545dd*/
      {
        if ( v14 + v12 > v15 + *((unsigned int *)this + 1321) ) /*0x6545f4*/
          *((unsigned int *)this + 1321) = v12 + v14 - v15; /*0x6545fa*/
      }
      else
      {
        *((unsigned int *)this + 1319) = v12; /*0x6545df*/
      }
      v16 = *((unsigned int *)this + 1320); /*0x654600*/
      if ( v13 >= v16 ) /*0x654608*/
      {
        if ( v13 + 1 > *((unsigned int *)this + 1322) + v16 ) /*0x654621*/
          *((unsigned int *)this + 1322) = v13 - v16 + 1; /*0x654626*/
      }
      else
      {
        *((unsigned int *)this + 1320) = v13; /*0x65460a*/
      }
      goto LABEL_17; /*0x654610*/
    }
    v14 = 1; /*0x6545d0*/
    goto LABEL_9; /*0x6545d0*/
  }
  return (gamemd::RadarClass **)(result);

}
} // namespace gamemd