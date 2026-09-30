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

// 0x549B70
namespace gamemd {
void IsometricTileTypeClass::ProcessPower( int * a2)
{

  int v3; // eax
  int v4; // eax
  int v5; // edx
  int v6; // eax

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x549b79*/
  Power::TimerProcess(*(unsigned int *)(this + 660)); /*0x549b87*/
  Power::TimerProcess(*(unsigned int *)(this + 664)); /*0x549b95*/
  Power::TimerProcess(*(unsigned int *)(this + 668)); /*0x549ba3*/
  Power::TimerProcess(*(unsigned int *)(this + 672)); /*0x549bb1*/
  Power::TimerProcess(*(unsigned int *)(this + 692)); /*0x549bbf*/
  v3 = *(unsigned int *)(this + 700); /*0x549bc4*/
  if ( v3 ) /*0x549bcc*/
  {
    v4 = (*(int (**)(int))(*(unsigned int *)(v3 + 4) + 16))(v3 + 4); /*0x549bd5*/
    Power::TimerProcess(v4); /*0x549bdb*/
  }
  Power::TimerProcess(*(unsigned int *)(this + 704)); /*0x549be9*/
  Power::TimerProcess(*(unsigned int *)(this + 708)); /*0x549bf7*/
  Power::TimerProcess(*(unsigned int *)(this + 724)); /*0x549c05*/
  Power::TimerProcess(*(unsigned int *)(this + 728)); /*0x549c13*/
  Power::TimerProcess(*(unsigned int *)(this + 732)); /*0x549c21*/
  IDA_LOBYTE(v5) = *(unsigned char *)(this + 736); /*0x549c26*/
  v6 = Power::FlagProcess(a2, v5); /*0x549c2f*/
  IDA_LOBYTE(v6) = *(unsigned char *)(this + 737); /*0x549c34*/
  Power::FlagProcess(a2, v6); /*0x549c3d*/
  Power::TimerProcess(*(unsigned int *)(this + 740)); /*0x549c4b*/
  Power::TimerProcess(*(unsigned int *)(this + 744)); /*0x549c59*/
  Power::TimerProcess(*(unsigned int *)(this + 748)); /*0x549c67*/
  return Power::TimerProcess(*(unsigned int *)(this + 752)); /*0x549c7a*/

}
} // namespace gamemd
// 0x549C80
namespace gamemd {
AbstractClass * * IsometricTileTypeClass::LoadTypeData(int * a1, int a2)
{

  int i; // esi
  void (***v3)(unsigned int, int); // ecx
  int result; // eax
  int j; // eax

  for ( i = 0; i < (int)((int))((int))(g_abs_87F6A8); *((unsigned int *)g_abs_87F69C + i - 1) = 0 ) /*0x549c8a*/
  {
    v3 = (void (***)(unsigned int, int))*((unsigned int *)g_abs_87F69C + i); /*0x549c91*/
    if ( v3 ) /*0x549c96*/
      (**v3, unsigned int a1, unsigned int a2)(v3, 1); /*0x549c9c*/
    ++i; /*0x549ca3*/
  }
  result = ObjectTypeClass::LoadCleanup((int)a1, a2); /*0x549cbf*/
  if ( result >= 0 ) /*0x549cc6*/
  {
    if ( a1 ) /*0x549cce*/
    {
      ObjectTypeClass::Construct(a1, (int)&a2); /*0x549cd8*/
      IsometricTileTypeClass::Constructor_0(a1 + 169, 0, 0); /*0x549ce9*/
      a1[169] = (int)&vt_DynamicVectorClass_unsigned_short; /*0x549cee*/
      a1[174] = 10; /*0x549cf4*/
      a1[173] = 0; /*0x549cfb*/
      *a1 = (int)&vt_IsometricTileTypeClass; /*0x549d02*/
      a1[1] = (int)&vt_IsometricTileTypeClass; /*0x549d08*/
      a1[2] = (int)&vt_IsometricTileTypeClass; /*0x549d0f*/
      a1[3] = (int)&vt_IsometricTileTypeClass; /*0x549d16*/
    }
    ObjectPtr::RegisterForTracking((int)&g_abs_B0C110, a1 + 175); /*0x549d2a*/
    for ( j = 0; j < (int)((int))((int))(g_abs_87F6A8); *((unsigned int *)g_abs_87F69C + j - 1) = 0 ) /*0x549d39*/
      ++j; /*0x549d41*/
    TerrainClass::InitTheatre(a1); /*0x549d56*/
    return 0; /*0x549d5b*/
  }
  return (gamemd::AbstractClass **)(result);

}
} // namespace gamemd
// 0x549DD0
namespace gamemd {
void IsometricTileTypeClass::GetTileIndex( int a2, int a3)
{

  int result; // eax

  if ( *(this + 175) == a2 ) /*0x549ddc*/
    *(this + 175) = 0; /*0x549dde*/
  result = *(this + 178); /*0x549de8*/
  if ( result != -1 && *((unsigned int *)g_abs_8B4154 + result) == a2 ) /*0x549e02*/
    *(this + 178) = -1; /*0x549e04*/
  return result; /*0x549e0e*/

}
} // namespace gamemd
// 0x54A160
namespace gamemd {
int IsometricTileTypeClass::GetAuxField()
{

  return *((unsigned int *)this + 165); /*0x54a166*/

}
} // namespace gamemd
// 0x549D70
namespace gamemd {
int IsometricTileTypeClass::SaveToINI(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{

  int result; // eax

  result = ((AbstractClass *)(aP0))->SaveLoad_PrefixWrapper(aP1, (TechnoTypeClass *)aP2); /*0x549d7f*/
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
IsometricTileTypeClass * IsometricTileTypeClass::ddtor(void * Block, char a2)
{

  IsometricTileTypeClass::CleanupMembers((int)Block); /*0x54a173*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x54a17d*/
    RA2_OPDEL(Block); /*0x54a180*/
  return (IsometricTileTypeClass *)Block; /*0x54a18a*/

}
} // namespace gamemd
// 0x54A190
namespace gamemd {
void IsometricTileTypeClass::ClearBuffer()
{

  void *v2; // eax

  v2 = *(void **)((char *)this + 4); /*0x54a196*/
  *((unsigned int *)this + 4) = 0; /*0x54a199*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x54a1a0*/
  {
    RA2_OPDEL(v2); /*0x54a1a6*/
    *((unsigned int *)this + 1) = 0; /*0x54a1ae*/
  }
  *((unsigned char *)this + 13) = 0; /*0x54a1b1*/
  *((unsigned int *)this + 2) = 0; /*0x54a1b4*/

}
} // namespace gamemd
// 0x54A1C0
namespace gamemd {
unsigned int IsometricTileTypeClass::PointerToIndex(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x54a1c0*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x54a1d5*/
  else
    return 0; /*0x54a1c7*/

}
} // namespace gamemd
// 0x54A3D0
namespace gamemd {
char IsometricTileTypeClass::SetCapacity(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x54a3dc*/
  {
    *((unsigned char *)this + 12) = 0; /*0x54a3e2*/
    if ( a3 ) /*0x54a3e8*/
      v4 = a3; /*0x54a3fe*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x54a3fa*/
    *((unsigned char *)this + 12) = 1; /*0x54a402*/
    if ( !v4 ) /*0x54a406*/
      return 0; /*0x54a47a*/
    if ( *((unsigned int *)this + 1) ) /*0x54a408*/
    {
      v5 = *((unsigned int *)this + 2); /*0x54a40f*/
      if ( a2 < v5 ) /*0x54a414*/
        v5 = a2; /*0x54a416*/
      for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x54a41c*/
        ++i; /*0x54a421*/
      if ( *((unsigned char *)this + 13) ) /*0x54a42e*/
      {
        RA2_OPDEL(*((void **)this + 1)); /*0x54a439*/
        *((unsigned int *)this + 1) = 0; /*0x54a441*/
      }
    }
    *((unsigned int *)this + 1) = v4; /*0x54a44a*/
    *((unsigned int *)this + 2) = a2; /*0x54a452*/
    *((unsigned char *)this + 13) = a3 == 0; /*0x54a455*/
  }
  else
  {
    char IsometricTileTypeClass::SetCapacity(_DynamicVectorClass_PAG *this, int a2, unsigned int *a3)
  }
  v7 = *((unsigned int *)this + 2); /*0x54a461*/
  if ( v7 < *((unsigned int *)this + 4) ) /*0x54a469*/
    *((unsigned int *)this + 4) = v7; /*0x54a46b*/
  return 1; /*0x54a46e*/

}
} // namespace gamemd
// 0x54A480
namespace gamemd {
int IsometricTileTypeClass::FindItem(unsigned int * a2)
{

  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = *((char *)this + 4); /*0x54a480*/
  result = 0; /*0x54a483*/
  if ( v2 <= 0 ) /*0x54a488*/
    return -1; /*0x54a49f*/
  for ( i = (unsigned int *)*((char *)this + 1); *i != *a2; ++i ) /*0x54a48e*/
  {
    if ( ++result >= v2 ) /*0x54a49d*/
      return -1; /*0x54a49d*/
  }
  return result; /*0x54a4a2*/

}
} // namespace gamemd
// 0x54A760
namespace gamemd {
DynamicVector * IsometricTileTypeClass::Constructor(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)((unsigned int)((void *)*(Block + 1)));
  *Block = (unsigned int)(&vt_VectorClass_unsigned_short);
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x54a770*/
  {
    RA2_OPDEL(v3); /*0x54a778*/
    *(Block + 1) = 0; /*0x54a780*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x54a78b*/
  *(Block + 2) = 0; /*0x54a791*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x54a798*/
    RA2_OPDEL(Block); /*0x54a79b*/
  return (DynamicVector *)Block; /*0x54a7a5*/

}
} // namespace gamemd
// 0x54A850
namespace gamemd {
unsigned int * IsometricTileTypeClass::Constructor_0(int a2, int a3)
{

  *((unsigned int *)this + 1) = 0; /*0x54a85b*/
  *((unsigned int *)this + 2) = a2; /*0x54a85e*/
  *((unsigned char *)this + 12) = 1; /*0x54a861*/
  *((unsigned char *)this + 13) = 0; /*0x54a865*/
  *this = &vt_VectorClass_unsigned_short; /*0x54a868*/
  if ( a2 ) /*0x54a86e*/
  {
    if ( a3 ) /*0x54a876*/
    {
      *((unsigned int *)this + 1) = a3; /*0x54a878*/
      return this; /*0x54a87e*/
    }
    *((unsigned int *)this + 1) = RA2_OPNEW(4 * a2); /*0x54a88d*/
    *((unsigned char *)this + 13) = 1; /*0x54a890*/
  }
  return (unsigned int *)(this);

}
} // namespace gamemd