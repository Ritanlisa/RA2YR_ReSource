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
  *((unsigned int *)this + 2) = (unsigned int)(aP1); /*0x4d2dc0*/
  *((unsigned char *)this + 12) = 1; /*0x4d2dc3*/
  *((unsigned char *)this + 13) = 0; /*0x4d2dc7*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(&vt_VectorClass); /*0x4d2dca*/
  if ( !aP1 ) /*0x4d2dd0*/
    return (int)(this->__pad_0); /*0x4d2e38*/
  if ( !aP2 ) /*0x4d2dd8*/
  {
    v8 = (int)(__2_YAPAXI_Z(16 * aP1)); /*0x4d2e07*/
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
    *((unsigned char *)this + 13) = 1; /*0x4d2e34*/
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
      *(unsigned int *)(v5 + 4) = 0; /*0x4d2ded*/
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
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4D2D10)
}