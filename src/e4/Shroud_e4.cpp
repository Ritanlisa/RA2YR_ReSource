// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x654490
RadarClass * Shroud::ProcessCellVisibility(MouseClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  __int16 v5; // di
  __int16 v6; // ax
  int result; // eax

  ShroudClass::UpdateVisibility(this, aP1); /*0x65449d*/
  int v3 = *(this + 63); /*0x6544a2*/
  int v4 = *(this + 64); /*0x6544a8*/
  *(this + 1322) = 0; /*0x6544b3*/
  *(this + 1320) = 10000; /*0x6544bd*/
  *(this + 1319) = 10000; /*0x6544c3*/
  v5 = v3 + v4 + 1; /*0x6544cf*/
  v6 = v4 + *(this + 61) - v3; /*0x6544da*/
  int v7 = *(this + 65); /*0x6544dc*/
  *(this + 1321) = 0; /*0x6544e7*/
  *(this + 1318) = -1; /*0x6544f4*/
  *(this + 1317) = (__int16)(v7 - 1 + v5) - (__int16)(1 - v7 + v6); /*0x654533*/
  *(this + 1316) = v6 - v5; /*0x65453e*/
  LayerClass::CellIteratorReset(&DataGlobal_87F7E8); /*0x654544*/
  result = LayerClass::CellIteratorNext(this); /*0x65454b*/
  int v9 = result; /*0x654550*/
  if ( result ) /*0x654554*/
  {
    while ( 1 ) /*0x654567*/
    {
      aP1 = *(MouseClass **)(v9 + 36); /*0x654567*/
      if ( LayerClass::IsWithinUsableArea(this, (IUnknown *)&aP1, (TechnoClass *)1) ) /*0x65456b*/
        break; /*0x65456b*/
LABEL_17:
      result = LayerClass::CellIteratorNext(this); /*0x65462c*/
      v9 = result; /*0x654633*/
      if ( !result ) /*0x654637*/
        return result; /*0x654637*/
    }
    if ( *(this + 1318) == -1 ) /*0x65457f*/
      *(this + 1318) = *(__int16 *)(v9 + 36) + *(__int16 *)(v9 + 38); /*0x65458b*/
    int v10 = *(this + 1316); /*0x654594*/
    int v11 = *(this + 1318); /*0x65459a*/
    aP1 = *(MouseClass **)(v9 + 36); /*0x6545a0*/
    int v12 = (__int16)aP1 + v10 - SHIWORD(aP1); /*0x6545b0*/
    int v13 = (__int16)aP1 + SHIWORD(aP1) - v11; /*0x6545b2*/
    int v14 = 2; /*0x6545b7*/
    if ( v12 == -1 ) /*0x6545bc*/
    {
      v12 = 0; /*0x6545be*/
    }
    else if ( v12 != 2 * *(this + 65) - 1 ) /*0x6545ce*/
    {
LABEL_9:
      int v15 = *(this + 1319); /*0x6545d5*/
      if ( v12 >= v15 ) /*0x6545dd*/
      {
        if ( v14 + v12 > v15 + *(this + 1321) ) /*0x6545f4*/
          *(this + 1321) = v12 + v14 - v15; /*0x6545fa*/
      }
      else
      {
        *(this + 1319) = v12; /*0x6545df*/
      }
      int v16 = *(this + 1320); /*0x654600*/
      if ( v13 >= v16 ) /*0x654608*/
      {
        if ( v13 + 1 > *(this + 1322) + v16 ) /*0x654621*/
          *(this + 1322) = v13 - v16 + 1; /*0x654626*/
      }
      else
      {
        *(this + 1320) = v13; /*0x65460a*/
      }
      goto LABEL_17; /*0x654610*/
    }
    v14 = 1; /*0x6545d0*/
    goto LABEL_9; /*0x6545d0*/
  }
  return result; /*0x65463e*/
}
}
