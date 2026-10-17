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
namespace gamemd {  // G42.18 ns repair
int FoggedObject::DrawVector_Constructor(int aP1, int aP2, void *a3)
{


  AbstractClass *v4 = 0; // ebx /*0x4d2db9*/
  this->FoggedObject_field_0x4 = 0; /*0x4d2dbd*/
  this->u32_8 = aP1; /*0x4d2dc0*/
  this->u32_C = 1; /*0x4d2dc3*/
  this->u32_D = 0; /*0x4d2dc7*/
  this->__pad_0 = (unsigned int)(&vt_VectorClass); /*0x4d2dca*/
  if ( !aP1 ) /*0x4d2dd0*/
    return this->__pad_0; /*0x4d2e38*/
  if ( !aP2 ) /*0x4d2dd8*/
  {
    int v8; // eax
    v8 = (int)(__2_YAPAXI_Z(16 * aP1)); /*0x4d2e07*/
    if ( v8 ) /*0x4d2e11*/
    {
      if ( aP1 - 1 >= 0 ) /*0x4d2e18*/
      {
        int v9 = v8 + 8; // ecx /*0x4d2e1a*/
        int v10 = aP1; // edx /*0x4d2e1d*/
        do /*0x4d2e2d*/
        {
          *(unsigned int *)(v9 - 8) = 0; /*0x4d2e1e*/
          *(unsigned int *)(v9 - 4) = 0; /*0x4d2e21*/
          *(unsigned char *)v9 = 0; /*0x4d2e24*/
          *(unsigned int *)(v9 + 4) = 0; /*0x4d2e26*/
          v9 += 16; /*0x4d2e29*/
          --v10; /*0x4d2e2c*/
        }
        while ( v10 ); /*0x4d2e2d*/
      }
      v4 = (AbstractClass *)v8; /*0x4d2e2f*/
    }
    this->FoggedObject_field_0x4 = v4; /*0x4d2e31*/
    this->u32_D = 1; /*0x4d2e34*/
    return this->__pad_0; /*0x4d2e34*/
  }
  if ( aP1 - 1 >= 0 ) /*0x4d2ddf*/
  {
    int v5 = aP2 + 8; // eax /*0x4d2de1*/
    int v6 = aP1; // ecx /*0x4d2de4*/
    do /*0x4d2df4*/
    {
      *(unsigned int *)(v5 - 8) = 0; /*0x4d2de5*/
      *(unsigned int *)(v5 - 4) = 0; /*0x4d2de8*/
      *(unsigned char *)v5 = 0; /*0x4d2deb*/
      *(unsigned int *)(v5 + 4) = 0; /*0x4d2ded*/
      v5 += 16; /*0x4d2df0*/
      --v6; /*0x4d2df3*/
    }
    while ( v6 ); /*0x4d2df4*/
  }
  this->FoggedObject_field_0x4 = (AbstractClass *)aP2; /*0x4d2df6*/
  return this->__pad_0; /*0x4d2dfb*/

}
}  // G42.18 ns repair
// 0x4D2D10
VectorClass_flat * FoggedObject_DrawVector::QueryInterface(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x4d2d13*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4d2d16*/
  if ( v3 && (((unsigned char *)&(*&Block->u32_D))[1]) ) /*0x4d2d20*/
  {
    operator delete((void *)(v3)); /*0x4d2d28*/
    *&Block->__pad_004 = 0; /*0x4d2d30*/
  }
  (((unsigned char *)&(*&Block->u32_C))[1]) = 0; /*0x4d2d3b*/
  *&Block->u32_8 = 0; /*0x4d2d41*/
  if ( (a2 & 1) != 0 ) /*0x4d2d48*/
    operator delete((void *)(Block)); /*0x4d2d4b*/
  return Block->tail_0; /*0x4d2d55*/
}