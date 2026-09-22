// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/FoggedObject_e4.hpp"

// 0x4D2DB0
namespace gamemd {
unsigned int * FoggedObject::DrawVector_Constructor(IUnknown * aP1, IUnknown * aP2)
{
{
  IUnknown *v6; // ecx
  IUnknown *v10; // edx
  AbstractClass *v4 = 0; /*0x4d2db9*/
  this->q004 = 0; /*0x4d2dbd*/
  this->u32_8 = aP1; /*0x4d2dc0*/
  this->u8_C = 1; /*0x4d2dc3*/
  this->u8_D = 0; /*0x4d2dc7*/
  *this = &vt_VectorClass_FoggedObjectClass_DrawRecord; /*0x4d2dca*/
  if ( !aP1 ) /*0x4d2dd0*/
    return this; /*0x4d2e38*/
  if ( !aP2 ) /*0x4d2dd8*/
  {
    int v8 = __2_YAPAXI_Z(16 * (_DWORD)aP1); /*0x4d2e07*/
    if ( v8 ) /*0x4d2e11*/
    {
      if ( (int)&aP1[-1].__tail_1602E[1] >= 0 ) /*0x4d2e18*/
      {
        int v9 = v8 + 8; /*0x4d2e1a*/
        v10 = aP1; /*0x4d2e1d*/
        do /*0x4d2e2d*/
        {
          *(_DWORD *)(v9 - 8) = 0; /*0x4d2e1e*/
          *(_DWORD *)(v9 - 4) = 0; /*0x4d2e21*/
          *(_BYTE *)v9 = 0; /*0x4d2e24*/
          *(_DWORD *)(v9 + 4) = 0; /*0x4d2e26*/
          v9 += 16; /*0x4d2e29*/
          v10 = (IUnknown *)((char *)v10 - 1); /*0x4d2e2c*/
        }
        while ( v10 ); /*0x4d2e2d*/
      }
      v4 = v8; /*0x4d2e2f*/
    }
    this->q004 = v4; /*0x4d2e31*/
    this->u8_D = 1; /*0x4d2e34*/
    return this; /*0x4d2e34*/
  }
  if ( (int)&aP1[-1].__tail_1602E[1] >= 0 ) /*0x4d2ddf*/
  {
    int * v5 = &aP2->field_8; /*0x4d2de1*/
    v6 = aP1; /*0x4d2de4*/
    do /*0x4d2df4*/
    {
      *(v5 - 2) = 0; /*0x4d2de5*/
      *(v5 - 1) = 0; /*0x4d2de8*/
      *(_BYTE *)v5 = 0; /*0x4d2deb*/
      v5[1] = 0; /*0x4d2ded*/
      v5 += 4; /*0x4d2df0*/
      v6 = (IUnknown *)((char *)v6 - 1); /*0x4d2df3*/
    }
    while ( v6 ); /*0x4d2df4*/
  }
  this->q004 = aP2; /*0x4d2df6*/
  return this; /*0x4d2dfb*/
}
} // namespace gamemd
}

// 0x4D2D10
VectorClass * FoggedObject_DrawVector::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)this->Items;
    *(void**)this = &vt_VectorClass_FoggedObjectClass_DrawRecord;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    this->Items = 0;
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorClass *)this;
}
}
