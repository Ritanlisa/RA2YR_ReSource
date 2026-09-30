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
void IsometricTileTypeClass::ProcessPower()
{
  int v3; // eax
  int v4; // eax
  int v5; // edx
  int v6; // eax

  AbstractTypeClass::ProcessPower(a2); /*0x549b79*/
    Power::TimerProcess(*((unsigned int *)this + 2640));
    Power::TimerProcess(*((unsigned int *)this + 2656));
    Power::TimerProcess(*((unsigned int *)this + 2672));
    Power::TimerProcess(*((unsigned int *)this + 2688));
    Power::TimerProcess(*((unsigned int *)this + 2768));
    v3 = *((unsigned int *)this + 2800);
  if ( v3 ) /*0x549bcc*/
  {
    v4 = (*(int (__stdcall **)(int))(*(unsigned int *)(v3 + 4) + 16))(v3 + 4); /*0x549bd5*/
    Power::TimerProcess(v4); /*0x549bdb*/
  }
    Power::TimerProcess(*((unsigned int *)this + 2816));
    Power::TimerProcess(*((unsigned int *)this + 2832));
    Power::TimerProcess(*((unsigned int *)this + 2896));
    Power::TimerProcess(*((unsigned int *)this + 2912));
    Power::TimerProcess(*((unsigned int *)this + 2928));
    LOBYTE(v5) = *((unsigned char *)this + 2944);
  v6 = Power::FlagProcess((Power *)a2, v5); /*0x549c2f*/
    LOBYTE(v6) = *((unsigned char *)this + 2948);
  Power::FlagProcess((Power *)a2, v6); /*0x549c3d*/
    Power::TimerProcess(*((unsigned int *)this + 2960));
    Power::TimerProcess(*((unsigned int *)this + 2976));
    Power::TimerProcess(*((unsigned int *)this + 2992));
// 0x4a1d50
    return Power::TimerProcess(*((unsigned int *)this + 3008));
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

  for ( i = 0; i < *(int *)&stru_87F5F0.__pad_58[96]; *(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[84] + 4 * i - 4) = 0 ) /*0x549c8a*/
  {
    v3 = *(void (****)(unsigned int, int))(*(unsigned int *)&stru_87F5F0.__pad_58[84] + 4 * i); /*0x549c91*/
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
      IsometricTileTypeClass::Constructor_0((IsometricTileTypeClass *)((char *)a1 + 676), 0, 0); /*0x549ce9*/
      *((unsigned int *)a1 + 169) = (void*)&DynamicVectorClass_unsigned_short___vftable; /*0x549cee*/
      *((unsigned int *)a1 + 174) = 10; /*0x549cf4*/
      *((unsigned int *)a1 + 173) = 0; /*0x549cfb*/
      *(unsigned int *)a1->__pad_0 = (void*)&IsometricTileTypeClass_vftable; /*0x549d02*/
      a1->IsometricTileTypeClass_field_0x04 = (int)&IsometricTileTypeClass_vftable; /*0x549d08*/
      a1->IsometricTileTypeClass_field_0x08 = (int)&IsometricTileTypeClass_vftable; /*0x549d0f*/
      a1->IsometricTileTypeClass_field_0x0C = (int)&IsometricTileTypeClass_vftable; /*0x549d16*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)a1 + 175); /*0x549d2a*/
    for ( j = 0; j < *(int *)&stru_87F5F0.__pad_58[96]; *(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[84] + 4 * j - 4) = 0 ) /*0x549d39*/
      ++j; /*0x549d41*/
    TerrainClass::InitTheatre((TerrainClass *)a1); /*0x549d56*/
    return 0; /*0x549d5b*/
  }
  return (gamemd::AbstractClass **)(result);
}
} // namespace gamemd
// 0x549DD0
namespace gamemd {
void IsometricTileTypeClass::GetTileIndex()
{
  int result; // eax

    if ( *((unsigned int *)this + 700) == a2 )
        *((unsigned int *)this + 700) = 0;
    result = *((unsigned int *)this + 712);
  if ( result != -1 && *(unsigned int *)(*((unsigned int *)((char *)&FootClass_Array + 3)) + 4 * result) == a2 ) /*0x549e02*/
        *((unsigned int *)this + 712) = -1;
  return result; /*0x549e0e*/
}
} // namespace gamemd
// 0x54A160
namespace gamemd {
int IsometricTileTypeClass::GetAuxField()
{
    return *((unsigned int *)this + 660);
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

  v2 = *(void **)&this->vtable2; /*0x54a196*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x54a1a6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd
// 0x54A1C0
namespace gamemd {
unsigned int IsometricTileTypeClass::PointerToIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x54a1c7*/
}
} // namespace gamemd
// 0x54A3D0
namespace gamemd {
char IsometricTileTypeClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x54a3dc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x54a3e8*/
      v4 = a3; /*0x54a3fe*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x54a3fa*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x54a406*/
      return 0; /*0x54a47a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x54a414*/
        m_8 = a2; /*0x54a416*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x54a421*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->vtable2); /*0x54a439*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x54a46e*/
}
} // namespace gamemd
// 0x54A480
namespace gamemd {
int IsometricTileTypeClass::FindItem(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x54a483*/
  if ( m_10 <= 0 ) /*0x54a488*/
    return -1; /*0x54a49f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x54a49d*/
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

  v3 = (unsigned int)(*(void **)&this-((unsigned int *)(>m_1))[3]);
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_unsigned_short___vftable; /*0x54a766*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x54a778*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x54a798*/
    RA2_OPDEL(); /*0x54a79b*/
  return this; /*0x54a7a5*/
}
} // namespace gamemd
// 0x54A850
namespace gamemd {
unsigned int * IsometricTileTypeClass::Constructor_0(int a2, int a3)
{
  this->IsometricTileTypeClass_field_0x04 = (unsigned int)(0);
  this->IsometricTileTypeClass_field_0x08 = (unsigned int)(a2);
    *((unsigned char *)this + 12) = 1;
    *((unsigned char *)this + 13) = 0;
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_unsigned_short___vftable; /*0x54a868*/
  if ( a2 ) /*0x54a86e*/
  {
    if ( a3 ) /*0x54a876*/
    {
      this->IsometricTileTypeClass_field_0x04 = (unsigned int *)(a3);
      return (unsigned int *)(this->__pad_0);
    }
    this->IsometricTileTypeClass_field_0x04 = (unsigned int)(RA2_OPNEW(4 * a2));
        *((unsigned char *)this + 13) = 1;
  }
  return (unsigned int *)(this->__pad_0);
}
} // namespace gamemd