// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/FoggedObject_e4.hpp"
#include "e4/classes/FoggedObject_DrawVector_e4.hpp"
#include "e4/classes/FoggedObjectClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Vector_e4.hpp"

// 0x4D2DB0
namespace gamemd {
int FoggedObject::DrawVector_Constructor(void* a1)
{
  AbstractClass *v4; // ebx
  IUnknown * v5;
  int v8; // eax
  int v9; // ecx

  v4 = 0; /*0x4d2db9*/
    *((unsigned int *)this + 4) = 0;
    *((unsigned int *)this + 8) = aP1;
    *((unsigned char *)this + 12) = 1;
    *((unsigned char *)this + 13) = 0;
    *this = &vt_VectorClass_FoggedObjectClass_DrawRecord;
  if ( !aP1 ) /*0x4d2dd0*/
    return this; /*0x4d2e38*/
  if ( !aP2 ) /*0x4d2dd8*/
  {
    v8 = RA2_OPNEW(16 * aP1); /*0x4d2e07*/
    if ( v8 ) /*0x4d2e11*/
    {
      if ( aP1 - 1 >= 0 ) /*0x4d2e18*/
      {
        v9 = v8 + 8; /*0x4d2e1a*/
        aP1 = aP1; /*0x4d2e1d*/
        do /*0x4d2e2d*/
        {
          *(unsigned int *)(v9 - 8) = 0; /*0x4d2e1e*/
          *(unsigned int *)(v9 - 4) = 0; /*0x4d2e21*/
          *(unsigned char *)v9 = 0; /*0x4d2e24*/
          *(unsigned int *)(v9 + 4) = 0; /*0x4d2e26*/
          v9 += 16; /*0x4d2e29*/
          --aP1; /*0x4d2e2c*/
        }
        while ( aP1 ); /*0x4d2e2d*/
      }
      v4 = (AbstractClass *)v8; /*0x4d2e2f*/
    }
        *((unsigned int *)this + 4) = v4;
        *((unsigned char *)this + 13) = 1;
    return this; /*0x4d2e34*/
  }
  if ( aP1 - 1 >= 0 ) /*0x4d2ddf*/
  {
    v5 = (IUnknown *)((int)(aP2 + 8));
    aP1 = aP1; /*0x4d2de4*/
    do /*0x4d2df4*/
    {
      *(unsigned int *)(v5 - 8) = 0; /*0x4d2de5*/
      *(unsigned int *)(v5 - 4) = 0; /*0x4d2de8*/
      *(unsigned char *)v5 = 0; /*0x4d2deb*/
      *(unsigned int *)(v5 + 4) = 0; /*0x4d2ded*/
      v5 += 16; /*0x4d2df0*/
      --aP1; /*0x4d2df3*/
    }
    while ( aP1 ); /*0x4d2df4*/
  }
    *((unsigned int *)this + 4) = aP2;
  return this; /*0x4d2dfb*/
}
}
// 0x4D2D10
VectorClass_flat * FoggedObject_DrawVector::QueryInterface(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_FoggedObjectClass_DrawRecord;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4d2d28*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4d2d48*/
    RA2_OPDEL(); /*0x4d2d4b*/
  return this; /*0x4d2d55*/
}