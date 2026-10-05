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
int FoggedObject::DrawVector_Constructor(int aP1, int aP2)
{

  AbstractClass *v4; // ebx
  IUnknown * v5;
  IUnknown * v6;
  int v8; // eax
  int v9; // ecx
  IUnknown * v10;

  v4 = (gamemd::AbstractClass *)((unsigned int)(0));
  this->FoggedObject_field_0x4 = (unsigned int)(0);
  this->u32_8 = (unsigned int)(aP1); /*0x4d2dc0*/
  this->u32_C = 1; /*0x4d2dc3*/
  this->u32_D = 0; /*0x4d2dc7*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(&vt_VectorClass); /*0x4d2dca*/
  if ( !aP1 ) /*0x4d2dd0*/
    return (int)(this->__pad_0); /*0x4d2e38*/
  if ( !aP2 ) /*0x4d2dd8*/
  {
    v8 = (int)(new unsigned char[16 * aP1]); /*0x4d2e07*/
    if ( v8 ) /*0x4d2e11*/
    {
      if ( aP1 - 1 >= 0 ) /*0x4d2e18*/
      {
        v9 = (int)(v8 + 8);
        v10 = (IUnknown *)(aP1); /*0x4d2e1d*/
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
    this->FoggedObject_field_0x4 = (unsigned char)(v4);
    this->u32_D = 1; /*0x4d2e34*/
    return (int)(this->__pad_0); /*0x4d2e34*/
  }
  if ( aP1 - 1 >= 0 ) /*0x4d2ddf*/
  {
    v5 = (IUnknown *)((int)(aP2 + 8));
    v6 = (IUnknown *)(aP1); /*0x4d2de4*/
    do /*0x4d2df4*/
    {
      *(unsigned int *)(v5 - 8) = 0; /*0x4d2de5*/
      *(unsigned int *)(v5 - 4) = 0; /*0x4d2de8*/
      *(unsigned char *)v5 = 0; /*0x4d2deb*/
      v5->u32_4 = 0; /*0x4d2ded*/
      v5 += 16; /*0x4d2df0*/
      --v6; /*0x4d2df3*/
    }
    while ( v6 ); /*0x4d2df4*/
  }
  this->FoggedObject_field_0x4 = (unsigned char)((AbstractClass *)aP2);
  return (int)(this->__pad_0); /*0x4d2dfb*/

}
}
// 0x4D2D10
VectorClass_flat * FoggedObject_DrawVector::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4d2d13*/
  *(unsigned int *)Block->__pad_0 = &vt_VectorClass; /*0x4d2d16*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4d2d20*/
  {
    __3_YAXPAX_Z(v3); /*0x4d2d28*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4d2d30*/
  }
  BYTE1(Block->m_C) = 0; /*0x4d2d3b*/
  Block->m_8 = 0; /*0x4d2d41*/
  if ( (a2 & 1) != 0 ) /*0x4d2d48*/
    __3_YAXPAX_Z(Block); /*0x4d2d4b*/
  return Block->__pad_0; /*0x4d2d55*/

}