// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x654490
RadarClass * * Shroud::ProcessCellVisibility(MouseClass * aP1)
{
{
  __int16 v5; // di
  __int16 v6; // ax
  int result; // eax

  ShroudClass::UpdateVisibility(this, aP1); /*0x65449d*/
  int v3 = *(&this->u32_183); /*0x6544a2*/
  int v4 = *(&this->u32_184); /*0x6544a8*/
  *(&this->u32_2102) = 0; /*0x6544b3*/
  *(&this->u32_2100) = 10000; /*0x6544bd*/
  *(&this->u32_20C9) = 10000; /*0x6544c3*/
  v5 = v3 + v4 + 1; /*0x6544cf*/
  v6 = v4 + *(&this->u32_181) - v3; /*0x6544da*/
  int v7 = *(&this->u32_185); /*0x6544dc*/
  *(&this->u32_2101) = 0; /*0x6544e7*/
  *(&this->u32_20C8) = -1; /*0x6544f4*/
  *(&this->u32_20C7) = (__int16)(v7 - 1 + v5) - (__int16)(1 - v7 + v6); /*0x654533*/
  *(&this->u32_20C6) = v6 - v5; /*0x65453e*/
  LayerClass::CellIteratorReset(&DataGlobal_87F7E8); /*0x654544*/
  result = LayerClass::CellIteratorNext(this); /*0x65454b*/
  RadarClass *v9 = result; /*0x654550*/
  if ( result ) /*0x654554*/
  {
    while ( 1 ) /*0x654567*/
    {
      aP1 = v9->outBuffer; /*0x654567*/
      if ( LayerClass::IsWithinUsableArea(this, (IUnknown *)&aP1, (TechnoClass *)1) ) /*0x65456b*/
        break; /*0x65456b*/
LABEL_17:
      result = LayerClass::CellIteratorNext(this); /*0x65462c*/
      v9 = result; /*0x654633*/
      if ( !result ) /*0x654637*/
        return result; /*0x654637*/
    }
    if ( *(&this->u32_20C8) == -1 ) /*0x65457f*/
      *(&this->u32_20C8) = v9->outBuffer + v9->u32_26; /*0x65458b*/
    MapClass *v10 = *(&this->u32_20C6); /*0x654594*/
    int v11 = *(&this->u32_20C8); /*0x65459a*/
    aP1 = v9->outBuffer; /*0x6545a0*/
    RadarClass *v12 = (__int16)aP1 + v10 - SHIWORD(aP1); /*0x6545b0*/
    int v13 = (__int16)aP1 + SHIWORD(aP1) - v11; /*0x6545b2*/
    int v14 = 2; /*0x6545b7*/
    if ( v12 == -1 ) /*0x6545bc*/
    {
      v12 = 0; /*0x6545be*/
    }
    else if ( v12 != 2 * *(&this->u32_185) - 1 ) /*0x6545ce*/
    {
LABEL_9:
      RadarClass *v15 = *(&this->u32_20C9); /*0x6545d5*/
      if ( v12 >= v15 ) /*0x6545dd*/
      {
        if ( v14 + v12 > v15 + *(&this->u32_2101) ) /*0x6545f4*/
          *(&this->u32_2101) = v12 + v14 - v15; /*0x6545fa*/
      }
      else
      {
        *(&this->u32_20C9) = v12; /*0x6545df*/
      }
      int v16 = *(&this->u32_2100); /*0x654600*/
      if ( v13 >= v16 ) /*0x654608*/
      {
        if ( v13 + 1 > *(&this->u32_2102) + v16 ) /*0x654621*/
          *(&this->u32_2102) = v13 - v16 + 1; /*0x654626*/
      }
      else
      {
        *(&this->u32_2100) = v13; /*0x65460a*/
      }
      goto LABEL_17; /*0x654610*/
    }
    v14 = 1; /*0x6545d0*/
    goto LABEL_9; /*0x6545d0*/
  }
  return result; /*0x65463e*/
}
}
