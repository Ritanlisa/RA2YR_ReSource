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

// 0x4D2DB0
namespace gamemd {
unsigned int * FoggedObject::DrawVector_Constructor(IUnknown * aP1, IUnknown * aP2)
{
  AbstractClass *v4; // ebx
  int v5; // eax
  int v8; // eax
  int v9; // ecx

  v4 = 0; /*0x4d2db9*/
  this->FoggedObject_field_0x4 = 0; /*0x4d2dbd*/
  this->u32_8 = aP1; /*0x4d2dc0*/
  this->u32_C = 1; /*0x4d2dc3*/
  this->u32_D = 0; /*0x4d2dc7*/
  *(_DWORD *)this->__pad_0 = &(void*)(void*)&VectorClass_FoggedObjectClass_DrawRecord_vftable; /*0x4d2dca*/
  if ( !aP1 ) /*0x4d2dd0*/
    return this->__pad_0; /*0x4d2e38*/
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
          *(_DWORD *)(v9 - 8) = 0; /*0x4d2e1e*/
          *(_DWORD *)(v9 - 4) = 0; /*0x4d2e21*/
          *(_BYTE *)v9 = 0; /*0x4d2e24*/
          *(_DWORD *)(v9 + 4) = 0; /*0x4d2e26*/
          v9 += 16; /*0x4d2e29*/
          --aP1; /*0x4d2e2c*/
        }
        while ( aP1 ); /*0x4d2e2d*/
      }
      v4 = (AbstractClass *)v8; /*0x4d2e2f*/
    }
    this->FoggedObject_field_0x4 = v4; /*0x4d2e31*/
    this->u32_D = 1; /*0x4d2e34*/
    return this->__pad_0; /*0x4d2e34*/
  }
  if ( aP1 - 1 >= 0 ) /*0x4d2ddf*/
  {
    v5 = aP2 + 8; /*0x4d2de1*/
    aP1 = aP1; /*0x4d2de4*/
    do /*0x4d2df4*/
    {
      *(_DWORD *)(v5 - 8) = 0; /*0x4d2de5*/
      *(_DWORD *)(v5 - 4) = 0; /*0x4d2de8*/
      *(_BYTE *)v5 = 0; /*0x4d2deb*/
      *(_DWORD *)(v5 + 4) = 0; /*0x4d2ded*/
      v5 += 16; /*0x4d2df0*/
      --aP1; /*0x4d2df3*/
    }
    while ( aP1 ); /*0x4d2df4*/
  }
  this->FoggedObject_field_0x4 = (AbstractClass *)aP2; /*0x4d2df6*/
  return this->__pad_0; /*0x4d2dfb*/
}
}
// 0x4D2D10
VectorClass_flat * FoggedObject_DrawVector::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4d2d13*/
  *(_DWORD *)this->__pad_0 = &(void*)(void*)&VectorClass_FoggedObjectClass_DrawRecord_vftable; /*0x4d2d16*/
  if ( v3 && IDA_BYTE1(this->m_C) ) /*0x4d2d20*/
  {
    RA2_OPDEL(v3); /*0x4d2d28*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4d2d30*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4d2d3b*/
  this->m_8 = 0; /*0x4d2d41*/
  if ( (a2 & 1) != 0 ) /*0x4d2d48*/
    RA2_OPDEL(); /*0x4d2d4b*/
  return this->__pad_0; /*0x4d2d55*/
}