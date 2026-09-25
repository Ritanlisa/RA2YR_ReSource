// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/IsometricTileTypeClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ConvertClass_e4.hpp"

// 0x549B70
namespace gamemd {
int IsometricTileTypeClass::ProcessPower(int * a2)
{
  void * v3;
  int v4; // eax
  int v5; // edx
  int v6; // eax

  AbstractTypeClass::ProcessPower(a2); /*0x549b79*/
  Power::TimerProcess(this->q294); /*0x549b87*/
  Power::TimerProcess(this->q298); /*0x549b95*/
  Power::TimerProcess(this->u32_29C); /*0x549ba3*/
  Power::TimerProcess(this->q2A0); /*0x549bb1*/
  Power::TimerProcess(this->u32_2B4); /*0x549bbf*/
  v3 = this->q2BC; /*0x549bc4*/
  if ( v3 ) /*0x549bcc*/
  {
    v4 = (*(int (__stdcall **)(int))(*(_DWORD *)(v3 + 4) + 16))(v3 + 4); /*0x549bd5*/
    Power::TimerProcess(v4); /*0x549bdb*/
  }
  Power::TimerProcess(this->q2C0); /*0x549be9*/
  Power::TimerProcess(this->u32_2C4); /*0x549bf7*/
  Power::TimerProcess(this->u32_2D4); /*0x549c05*/
  Power::TimerProcess(this->u32_2D8); /*0x549c13*/
  Power::TimerProcess(this->u32_2DC); /*0x549c21*/
  IDA_LOBYTE(v5) = this->u8_2E0; /*0x549c26*/
  v6 = Power::FlagProcess(a2, v5); /*0x549c2f*/
  IDA_LOBYTE(v6) = this->u8_2E1; /*0x549c34*/
  Power::FlagProcess(a2, v6); /*0x549c3d*/
  Power::TimerProcess(this->q0B9); /*0x549c4b*/
  Power::TimerProcess(this->u32_2E8); /*0x549c59*/
  Power::TimerProcess(this->u32_2EC); /*0x549c67*/
  return Power::TimerProcess(this->u32_2F0); /*0x549c7a*/
}
} // namespace gamemd
// 0x549C80
namespace gamemd {
AbstractClass * * IsometricTileTypeClass::LoadTypeData(int * a1, int a2)
{
  int i; // esi
  void (__thiscall ***v3)(_DWORD, int); // ecx
  int result; // eax
  int j; // eax

  for ( i = 0; i < g_SurfaceAnimState; *((_DWORD *)dword_87F69C + i - 1) = 0 ) /*0x549c8a*/
  {
    v3 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)dword_87F69C + i); /*0x549c91*/
    if ( v3 ) /*0x549c96*/
      (**v3)(v3, 1); /*0x549c9c*/
    ++i; /*0x549ca3*/
  }
  result = ObjectTypeClass::LoadCleanup((int)a1, a2); /*0x549cbf*/
  if ( result >= 0 ) /*0x549cc6*/
  {
    if ( a1 ) /*0x549cce*/
    {
      ObjectTypeClass::Construct(a1, (int)&a2); /*0x549cd8*/
      IsometricTileTypeClass::Constructor_0(a1 + 169, 0, 0); /*0x549ce9*/
      a1[169] = (int)&DynamicVectorClass_unsigned_short___vftable; /*0x549cee*/
      a1[174] = 10; /*0x549cf4*/
      a1[173] = 0; /*0x549cfb*/
      *a1 = (int)&IsometricTileTypeClass_vftable; /*0x549d02*/
      a1[1] = (int)&IsometricTileTypeClass_vftable; /*0x549d08*/
      a1[2] = (int)&IsometricTileTypeClass_vftable; /*0x549d0f*/
      a1[3] = (int)&IsometricTileTypeClass_vftable; /*0x549d16*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 175); /*0x549d2a*/
    for ( j = 0; j < g_SurfaceAnimState; *((_DWORD *)dword_87F69C + j - 1) = 0 ) /*0x549d39*/
      ++j; /*0x549d41*/
    TerrainClass::InitTheatre(a1); /*0x549d56*/
    return 0; /*0x549d5b*/
  }
  return result; /*0x549d5d*/
}
} // namespace gamemd
// 0x549DD0
namespace gamemd {
int IsometricTileTypeClass::GetTileIndex(int a2, int a3)
{
  int result; // eax

  if ( *(&this->q0445) == a2 ) /*0x549ddc*/
    *(&this->q0445) = 0; /*0x549dde*/
  result = *(&this->q0448); /*0x549de8*/
  if ( result != -1 && *((_DWORD *)g_AnimTypeCount + result) == a2 ) /*0x549e02*/
    *(&this->q0448) = -1; /*0x549e04*/
  return result; /*0x549e0e*/
}
} // namespace gamemd
// 0x54A160
namespace gamemd {
int IsometricTileTypeClass::GetAuxField()
{
  return *(&this->q0405); /*0x54a166*/
}
} // namespace gamemd
// 0x549D70
namespace gamemd {
int IsometricTileTypeClass::SaveToINI(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, aP2); /*0x549d7f*/
  if ( result >= 0 ) /*0x549d86*/
    return 0; /*0x549d88*/
  return result; /*0x549d8a*/
}
} // namespace gamemd
// 0x549D90
namespace gamemd {
int IsometricTileTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x549d96*/
    return -2147467261; /*0x549d98*/
  *a2 = 1525862010; /*0x549da6*/
  a2[1] = 298976820; /*0x549dae*/
  a2[2] = 1610654892; /*0x549db7*/
  a2[3] = -1252326136; /*0x549dc0*/
  return 0; /*0x549d9d*/
}
} // namespace gamemd
// 0x54A140
namespace gamemd {
int IsometricTileTypeClass::GetTypeIdentifier()
{
  return 18; /*0x54a145*/
}
} // namespace gamemd
// 0x54A150
namespace gamemd {
int IsometricTileTypeClass::GetObjectSize()
{
  return 780; /*0x54a155*/
}
} // namespace gamemd
// 0x54A170
namespace gamemd {
IsometricTileTypeClass * IsometricTileTypeClass::ddtor(char a2)
{
  IsometricTileTypeClass::CleanupMembers(); /*0x54a173*/
  if ( (a2 & 1) != 0 ) /*0x54a17d*/
    RA2_OPDEL(); /*0x54a180*/
  return this; /*0x54a18a*/
}
} // namespace gamemd
// 0x54A190
namespace gamemd {
void IsometricTileTypeClass::ClearBuffer()
{
  void *v2; // eax

  v2 = this->vtable2; /*0x54a196*/
  this->q010 = 0; /*0x54a199*/
  if ( v2 && this->q034 ) /*0x54a1a0*/
  {
    RA2_OPDEL(v2); /*0x54a1a6*/
    this->vtable2 = 0; /*0x54a1ae*/
  }
  this->q034 = 0; /*0x54a1b1*/
  this->vtable3 = 0; /*0x54a1b4*/
}
} // namespace gamemd
// 0x54A1C0
namespace gamemd {
unsigned int IsometricTileTypeClass::PointerToIndex(int a2)
{
  if ( this->vtable4 ) /*0x54a1c0*/
    return (unsigned int)(a2 - this->vtable2) >> 2; /*0x54a1d5*/
  else
    return 0; /*0x54a1c7*/
}
} // namespace gamemd
// 0x54A3D0
namespace gamemd {
char IsometricTileTypeClass::SetCapacity(int a2, unsigned int * a3)
{
  _DWORD *v4; // edi
  unsigned int v5;
  int i; // eax
  void * v7;

  if ( a2 ) /*0x54a3dc*/
  {
    this->vtable4 = 0; /*0x54a3e2*/
    if ( a3 ) /*0x54a3e8*/
      v4 = a3; /*0x54a3fe*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x54a3fa*/
    this->vtable4 = 1; /*0x54a402*/
    if ( !v4 ) /*0x54a406*/
      return 0; /*0x54a47a*/
    if ( this->vtable2 ) /*0x54a408*/
    {
      v5 = this->vtable3; /*0x54a40f*/
      if ( a2 < v5 ) /*0x54a414*/
        v5 = a2; /*0x54a416*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->vtable2 + 4 * i - 4) ) /*0x54a41c*/
        ++i; /*0x54a421*/
      if ( this->q034 ) /*0x54a42e*/
      {
        RA2_OPDEL(*((void **)this + 1)); /*0x54a439*/
        this->vtable2 = 0; /*0x54a441*/
      }
    }
    this->vtable2 = v4; /*0x54a44a*/
    this->vtable3 = a2; /*0x54a452*/
    this->q034 = a3 == 0; /*0x54a455*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)&this->vtable22))(this); /*0x54a45e*/
  }
  v7 = this->vtable3; /*0x54a461*/
  if ( v7 < this->q010 ) /*0x54a469*/
    this->q010 = v7; /*0x54a46b*/
  return 1; /*0x54a46e*/
}
} // namespace gamemd
// 0x54A480
namespace gamemd {
int IsometricTileTypeClass::FindItem(unsigned int * a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->q010; /*0x54a480*/
  result = 0; /*0x54a483*/
  if ( v2 <= 0 ) /*0x54a488*/
    return -1; /*0x54a49f*/
  for ( i = (_DWORD *)this->vtable2; *i != *a2; ++i ) /*0x54a48e*/
  {
    if ( ++result >= v2 ) /*0x54a49d*/
      return -1; /*0x54a49d*/
  }
  return result; /*0x54a4a2*/
}
} // namespace gamemd
// 0x54A760
namespace gamemd {
DynamicVector * IsometricTileTypeClass::Constructor(char a2)
{
  void *v3; // eax

  v3 = (void *)this->vtable2; /*0x54a763*/
  *(void **)this = (void*)&VectorClass_unsigned_short___vftable; /*0x54a766*/
  if ( v3 && this->q034 ) /*0x54a770*/
  {
    RA2_OPDEL(v3); /*0x54a778*/
    this->vtable2 = 0; /*0x54a780*/
  }
  this->q034 = 0; /*0x54a78b*/
  this->vtable3 = 0; /*0x54a791*/
  if ( (a2 & 1) != 0 ) /*0x54a798*/
    RA2_OPDEL(); /*0x54a79b*/
  return this; /*0x54a7a5*/
}
} // namespace gamemd
// 0x54A850
namespace gamemd {
unsigned int * IsometricTileTypeClass::Constructor_0(int a2, int a3)
{
  this->vtable2 = 0; /*0x54a85b*/
  this->vtable3 = a2; /*0x54a85e*/
  this->vtable4 = 1; /*0x54a861*/
  this->q034 = 0; /*0x54a865*/
  *(void **)this = (void*)&VectorClass_unsigned_short___vftable; /*0x54a868*/
  if ( a2 ) /*0x54a86e*/
  {
    if ( a3 ) /*0x54a876*/
    {
      this->vtable2 = a3; /*0x54a878*/
      return this; /*0x54a87e*/
    }
    this->vtable2 = RA2_OPNEW(4 * a2); /*0x54a88d*/
    this->q034 = 1; /*0x54a890*/
  }
  return this; /*0x54a87d*/
}
} // namespace gamemd