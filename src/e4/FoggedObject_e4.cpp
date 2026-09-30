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
int FoggedObject::DrawVector_Constructor( IUnknown * aP1, IUnknown * aP2)
{

  void * v4;
  int *v5; // eax
  IUnknown *v6; // ecx
  void * v8;
  void * v9;
  IUnknown *v10; // edx

  v4 = (int)(0);
  *(this + 1) = 0; /*0x4d2dbd*/
  *(this + 2) = aP1; /*0x4d2dc0*/
  *((unsigned char *)this + 12) = 1; /*0x4d2dc3*/
  *((unsigned char *)this + 13) = 0; /*0x4d2dc7*/
  *this = &vt_VectorClass_FoggedObjectClass_DrawRecord; /*0x4d2dca*/
  if ( !aP1 ) /*0x4d2dd0*/
    return this; /*0x4d2e38*/
  if ( !aP2 ) /*0x4d2dd8*/
  {
    v8 = (void *)((int)(RA2_OPNEW(16 * (unsigned int)aP1)));
    if ( v8 ) /*0x4d2e11*/
    {
      if ( (int)&aP1[-1].__tail_1602E[1] >= 0 ) /*0x4d2e18*/
      {
        v9 = ((unsigned int)(void)*)((int)(v8 + 8));
        v10 = aP1; /*0x4d2e1d*/
        do /*0x4d2e2d*/
        {
          *(unsigned int *)((unsigned int)(v9)- 8) = 0; /*0x4d2e1e*/
          *(unsigned int *)((unsigned int)(v9)- 4) = 0; /*0x4d2e21*/
          *(unsigned char *)v9 = 0; /*0x4d2e24*/
          *(unsigned int *)((unsigned int)(v9)+ 4) = 0; /*0x4d2e26*/
          (unsigned int)(v9)+= 16; /*0x4d2e29*/
          v10 = (IUnknown *)((char *)v10 - 1); /*0x4d2e2c*/
        }
        while ( v10 ); /*0x4d2e2d*/
      }
      v4 = (void *)((int)(v8));
    }
    *(this + 1) = v4; /*0x4d2e31*/
    *((unsigned char *)this + 13) = 1; /*0x4d2e34*/
    return this; /*0x4d2e34*/
  }
  if ( (int)&aP1[-1].__tail_1602E[1] >= 0 ) /*0x4d2ddf*/
  {
    v5 = &aP2->field_8; /*0x4d2de1*/
    v6 = aP1; /*0x4d2de4*/
    do /*0x4d2df4*/
    {
      *(v5 - 2) = 0; /*0x4d2de5*/
      *(v5 - 1) = 0; /*0x4d2de8*/
      *(unsigned char *)v5 = 0; /*0x4d2deb*/
      v5[1] = 0; /*0x4d2ded*/
      v5 += 4; /*0x4d2df0*/
      v6 = (IUnknown *)((char *)v6 - 1); /*0x4d2df3*/
    }
    while ( v6 ); /*0x4d2df4*/
  }
  *(this + 1) = aP2; /*0x4d2df6*/
  return this; /*0x4d2dfb*/

}
}
// 0x4D2D10
VectorClass_flat * FoggedObject_DrawVector::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4d2d13*/
  *Block = &vt_VectorClass_FoggedObjectClass_DrawRecord; /*0x4d2d16*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x4d2d20*/
  {
    RA2_OPDEL(v3); /*0x4d2d28*/
    *(Block + 1) = 0; /*0x4d2d30*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x4d2d3b*/
  *(Block + 2) = 0; /*0x4d2d41*/
  if ( (Block & 1) != 0 ) /*0x4d2d48*/
    RA2_OPDEL(Block); /*0x4d2d4b*/
  return (VectorClass *)Block; /*0x4d2d55*/

}