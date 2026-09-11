// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/FoggedObject_e4.hpp"

// 0x4D2DB0
namespace gamemd {
unsigned int * FoggedObject::DrawVector_Constructor(IUnknown * aP1, IUnknown * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall FoggedObject::DrawVector_Constructor(_DWORD *this, IUnknown *aP1, IUnknown *aP2)
{
  int v4; // ebx
  int *v5; // eax
  IUnknown *v6; // ecx
  int v8; // eax
  int v9; // ecx
  IUnknown *v10; // edx

  v4 = 0; /*0x4d2db9*/
  *(this + 1) = 0; /*0x4d2dbd*/
  *(this + 2) = aP1; /*0x4d2dc0*/
  *((_BYTE *)this + 12) = 1; /*0x4d2dc3*/
  *((_BYTE *)this + 13) = 0; /*0x4d2dc7*/
  *this = &VectorClass<FoggedObjectClass::DrawRecord>::`vftable'; /*0x4d2dca*/
  if ( !aP1 ) /*0x4d2dd0*/
    return this; /*0x4d2e38*/
  if ( !aP2 ) /*0x4d2dd8*/
  {
    v8 = __2_YAPAXI_Z(16 * (_DWORD)aP1); /*0x4d2e07*/
    if ( v8 ) /*0x4d2e11*/
    {
      if ( (int)&aP1[-1].__tail_1602E[1] >= 0 ) /*0x4d2e18*/
      {
        v9 = v8 + 8; /*0x4d2e1a*/
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
    *(this + 1) = v4; /*0x4d2e31*/
    *((_BYTE *)this + 13) = 1; /*0x4d2e34*/
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
      *(_BYTE *)v5 = 0; /*0x4d2deb*/
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
} // namespace gamemd

// 0x4D2D10
VectorClass * FoggedObject_DrawVector::QueryInterface(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
VectorClass *__thiscall FoggedObject_DrawVector::QueryInterface(_DWORD *this, char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 1); /*0x4d2d13*/
  *this = &VectorClass<FoggedObjectClass::DrawRecord>::`vftable'; /*0x4d2d16*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x4d2d20*/
  {
    __3_YAXPAX_Z(v3); /*0x4d2d28*/
    *(this + 1) = 0; /*0x4d2d30*/
  }
  *((_BYTE *)this + 13) = 0; /*0x4d2d3b*/
  *(this + 2) = 0; /*0x4d2d41*/
  if ( (a2 & 1) != 0 ) /*0x4d2d48*/
    __3_YAXPAX_Z(this); /*0x4d2d4b*/
  return (VectorClass *)this; /*0x4d2d55*/
}
}
