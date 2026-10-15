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
#include "e4/classes/Isometric_e4.hpp"
#include "e4/classes/JumpjetLocomotion_e4.hpp"
#include "e4/classes/JumpjetLocomotionClass_e4.hpp"
#include "e4/classes/LinkClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/ObjectPtr_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/TerrainClass_e4.hpp"

// 0x549B70
namespace gamemd {  // G42.18 ns repair
int IsometricTileTypeClass::ProcessPower(int * a2, void *a2_2)
{

  ((AbstractTypeClass *)((AbstractTypeClass *)a2_2))->ProcessPower((int *)(a2_2)); /*0x549b79*/
  Power::TimerProcess(*((unsigned int *)a2_2 + 165)); /*0x549b87*/
  Power::TimerProcess(*((unsigned int *)a2_2 + 166)); /*0x549b95*/
  Power::TimerProcess(*((unsigned int *)a2_2 + 167)); /*0x549ba3*/
  Power::TimerProcess(*((unsigned int *)a2_2 + 168)); /*0x549bb1*/
  Power::TimerProcess(*((unsigned int *)a2_2 + 173)); /*0x549bbf*/
  int v3; // eax
  v3 = *((unsigned int *)a2_2 + 175); /*0x549bc4*/
  if ( v3 ) /*0x549bcc*/
  {
  int v4; // eax
    v4 = (*(int (__stdcall **)(int))(*(unsigned int *)(v3 + 4) + 16))(v3 + 4); /*0x549bd5*/
    Power::TimerProcess(v4); /*0x549bdb*/
  }
  Power::TimerProcess(*((unsigned int *)a2_2 + 176)); /*0x549be9*/
  Power::TimerProcess(*((unsigned int *)a2_2 + 177)); /*0x549bf7*/
  Power::TimerProcess(*((unsigned int *)a2_2 + 181)); /*0x549c05*/
  Power::TimerProcess(*((unsigned int *)a2_2 + 182)); /*0x549c13*/
  Power::TimerProcess(*((unsigned int *)a2_2 + 183)); /*0x549c21*/
  int v5; // edx
  (*((unsigned char *)&(v5))) = *((unsigned char *)a2_2 + 736); /*0x549c26*/
  int v6; // eax
  v6 = ((Power *)a2_2)->FlagProcess(v5); /*0x549c2f*/
  (*((unsigned char *)&(v6))) = *((unsigned char *)a2_2 + 737); /*0x549c34*/
  ((Power *)a2_2)->FlagProcess(v6); /*0x549c3d*/
  Power::TimerProcess(*((unsigned int *)a2_2 + 185)); /*0x549c4b*/
  Power::TimerProcess(*((unsigned int *)a2_2 + 186)); /*0x549c59*/
  Power::TimerProcess(*((unsigned int *)a2_2 + 187)); /*0x549c67*/
  return Power::TimerProcess(*((unsigned int *)a2_2 + 188)); /*0x549c7a*/
}  // G42.18 ns repair
} // namespace gamemd
// 0x549C80
namespace gamemd {
AbstractClass * * IsometricTileTypeClass::LoadTypeData(int * a1, int a2)
{
  void (***v3)(unsigned int, int); // ecx
  int result; // eax
  int j; // eax

  int i; // esi
  for ( i = 0; i < *(int *)&g_SurfaceAnimState; *(unsigned int *)(*(unsigned int *)&DataGlobal_87F69C + 4 * i - 4) = 0 ) /*0x549c8a*/
  {
    v3 = *(void (****)(unsigned int, int))(*(unsigned int *)&DataGlobal_87F69C + 4 * i); /*0x549c91*/
    if ( v3 ) /*0x549c96*/
      (**v3)(v3, 1); /*0x549c9c*/
    ++i; /*0x549ca3*/
  }
  result = ObjectTypeClass::LoadCleanup((ObjectTypeClass *)a1, a2); /*0x549cbf*/
  if ( result >= 0 ) /*0x549cc6*/
  {
    if ( a1 ) /*0x549cce*/
    {
      ObjectTypeClass::Construct((ObjectTypeClass *)a1, (int)&a2); /*0x549cd8*/
      ((IsometricTileTypeClass *)((char *)a1 + 676))->Constructor_0(0, 0); /*0x549ce9*/
      *((unsigned int *)a1 + 169) = (unsigned int)(&vt_DynamicVectorClass); /*0x549cee*/
      *((unsigned int *)a1 + 174) = 10; /*0x549cf4*/
      *((unsigned int *)a1 + 173) = 0; /*0x549cfb*/
      *(unsigned int *)a1->__pad_0 = &vt_IsometricTileTypeClass; /*0x549d02*/
      a1->IsometricTileTypeClass_field_0x04 = (int)&vt_IsometricTileTypeClass; /*0x549d08*/
      a1->IsometricTileTypeClass_field_0x08 = (int)&vt_IsometricTileTypeClass; /*0x549d0f*/
      a1->IsometricTileTypeClass_field_0x0C = (int)&vt_IsometricTileTypeClass; /*0x549d16*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)a1 + 175); /*0x549d2a*/
    for ( j = 0; j < *(int *)&g_SurfaceAnimState; *(unsigned int *)(*(unsigned int *)&DataGlobal_87F69C + 4 * j - 4) = 0 ) /*0x549d39*/
      ++j; /*0x549d41*/
    ((TerrainClass *)a1)->InitTheatre(); /*0x549d56*/
    return 0; /*0x549d5b*/
  }
  return (gamemd::AbstractClass **)(result); /*0x549d5d*/
}
} // namespace gamemd
// 0x549DD0
namespace gamemd {
int IsometricTileTypeClass::GetTileIndex(int a2, int a3)
{

  if ( this->u32_2BC == a2 ) /*0x549ddc*/
    this->u32_2BC = 0; /*0x549dde*/
  int result; // eax
  result = this->u32_2C8; /*0x549de8*/
  if ( result != -1 && *(unsigned int *)(FootClass_Array.primaryFacing[3] + 4 * result) == a2 ) /*0x549e02*/
    this->u32_2C8 = -1; /*0x549e04*/
  return result; /*0x549e0e*/
}
} // namespace gamemd
// 0x54A160
namespace gamemd {
int IsometricTileTypeClass::GetAuxField()
{
  return this->u32_294; /*0x54a166*/
}
} // namespace gamemd
// 0x549D70
namespace gamemd {
int IsometricTileTypeClass::SaveToINI(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{

  int result; // eax
  result = AbstractClass::SaveLoad_PrefixWrapper((AbstractClass *)aP0, aP1, aP2); /*0x549d7f*/
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
  a2[3] = unk_7E95FC; /*0x549dc0*/
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
IsometricTileTypeClass * IsometricTileTypeClass::ddtor(char a2, int a1, int a3, int a4, int a5)
{
  IsometricTileTypeClass::CleanupMembers(); /*0x54a173*/
  if ( (a2 & 1) != 0 ) /*0x54a17d*/
    operator delete((void *)(this)); /*0x54a180*/
  return this; /*0x54a18a*/
}
} // namespace gamemd
// 0x54A190
namespace gamemd {
void IsometricTileTypeClass::ClearBuffer(void *a1)
{

  void *v2; // eax
  v2 = *(void **)&a1->vtable2; /*0x54a196*/
  *(unsigned int *)&a1->q010 = 0; /*0x54a199*/
  if ( v2 && (((unsigned char *)&(a1->m_C))[1]) ) /*0x54a1a0*/
  {
    operator delete((void *)(v2)); /*0x54a1a6*/
    *(unsigned int *)&a1->vtable2 = 0; /*0x54a1ae*/
  }
  (((unsigned char *)&(a1->vtable4))[1]) = 0; /*0x54a1b1*/
  *(unsigned int *)&a1->vtable3 = 0; /*0x54a1b4*/
}
} // namespace gamemd
// 0x54A1C0
namespace gamemd {
unsigned int IsometricTileTypeClass::PointerToIndex(int a2)
{
  if ( (this->vtable4) ) /*0x54a1c0*/
    return (unsigned int)(a2 - *&this->vtable2) >> 2; /*0x54a1d5*/
  else
    return 0; /*0x54a1c7*/
}
} // namespace gamemd
// 0x54A3D0
namespace gamemd {
char IsometricTileTypeClass::SetCapacity(int a2, unsigned int * a3)
{


  if ( a2 ) /*0x54a3dc*/
  {
    LOBYTE(this->vtable4) = 0; /*0x54a3e2*/
  unsigned int *v4; // edi
    if ( a3 ) /*0x54a3e8*/
      v4 = a3; /*0x54a3fe*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x54a3fa*/
    LOBYTE(this->vtable4) = 1; /*0x54a402*/
    if ( !v4 ) /*0x54a406*/
      return 0; /*0x54a47a*/
    if ( *&this->vtable2 ) /*0x54a408*/
    {
  int m_8; // ecx
      m_8 = (int)(this->vtable3); /*0x54a40f*/
      if ( a2 < m_8 ) /*0x54a414*/
        m_8 = a2; /*0x54a416*/
  int i; // eax
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->vtable2 + 4 * i - 4) ) /*0x54a41c*/
        ++i; /*0x54a421*/
      if ( BYTE1(this->vtable4) ) /*0x54a42e*/
      {
        __3_YAXPAX_Z(*&this->vtable2); /*0x54a439*/
        *&this->vtable2 = 0; /*0x54a441*/
      }
    }
    *&this->vtable2 = v4; /*0x54a44a*/
    this->vtable3 = (void *)(a2); /*0x54a452*/
    BYTE1(this->vtable4) = a3 == 0; /*0x54a455*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_PAG *))(*(unsigned int *)this->vtable1 + 12))(this); /*0x54a45e*/
  }
  int v7; // eax
  v7 = (int)(this->vtable3); /*0x54a461*/
  if ( v7 < this->uniqueId ) /*0x54a469*/
    this->uniqueId = v7; /*0x54a46b*/
  return 1; /*0x54a46e*/

}
} // namespace gamemd
// 0x54A480
namespace gamemd {
int IsometricTileTypeClass::FindItem(unsigned int * a2)
{

  int m_10; // edx
  m_10 = *&this->uniqueId; /*0x54a480*/
  int result; // eax
  result = 0; /*0x54a483*/
  if ( m_10 <= 0 ) /*0x54a488*/
    return -1; /*0x54a49f*/
  unsigned int *i; // ecx
  for ( i = *&this->vtable2; *i != *a2; ++i ) /*0x54a48e*/
  {
    if ( ++result >= m_10 ) /*0x54a49d*/
      return -1; /*0x54a49d*/
  }
  return result; /*0x54a4a2*/
}
} // namespace gamemd
// 0x54A760
namespace gamemd {
DynamicVector * IsometricTileTypeClass::Constructor(unsigned int * Block, char a2, void *a3, void *a4, void *a5)
{


  void *v3; // eax
  v3 = *&Block->__pad_004; /*0x54a763*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x54a766*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x54a770*/
  {
    __3_YAXPAX_Z(v3); /*0x54a778*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x54a780*/
  }
  BYTE1(Block->m_C) = 0; /*0x54a78b*/
  Block->m_8 = 0; /*0x54a791*/
  if ( (a2 & 1) != 0 ) /*0x54a798*/
    __3_YAXPAX_Z(Block); /*0x54a79b*/
  return Block->__pad_0; /*0x54a7a5*/

}
} // namespace gamemd
// 0x54A850
namespace gamemd {
unsigned int * IsometricTileTypeClass::Constructor_0(int a2, int a3)
{

  this->vtable2 = 0; /*0x54a85b*/
  this->vtable3 = (void *)(a2); /*0x54a85e*/
  LOBYTE(this->vtable4) = 1; /*0x54a861*/
  BYTE1(this->vtable4) = 0; /*0x54a865*/
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x54a868) */
  if ( a2 ) /*0x54a86e*/
  {
    if ( a3 ) /*0x54a876*/
    {
      this->IsometricTileTypeClass_field_0x04 = a3; /*0x54a878*/
      return this->__pad_0; /*0x54a87e*/
    }
    this->IsometricTileTypeClass_field_0x04 = __2_YAPAXI_Z(4 * a2); /*0x54a88d*/
    BYTE1(this->IsometricTileTypeClass_field_0x0C) = 1; /*0x54a890*/
  }
  return this->__pad_0; /*0x54a87d*/

}
} // namespace gamemd