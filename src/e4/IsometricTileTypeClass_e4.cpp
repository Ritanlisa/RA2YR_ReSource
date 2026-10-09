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
namespace gamemd {
int IsometricTileTypeClass::ProcessPower(int * a2, void *a2_2)
{
  int v3; // eax
  int v4; // eax
  int v5; // edx
  int v6; // eax

  AbstractTypeClass::ProcessPower((AbstractTypeClass *)a2_2, a2_2); /*0x549b79*/
  Power::TimerProcess(*((_DWORD *)a2_2 + 165)); /*0x549b87*/
  Power::TimerProcess(*((_DWORD *)a2_2 + 166)); /*0x549b95*/
  Power::TimerProcess(*((_DWORD *)a2_2 + 167)); /*0x549ba3*/
  Power::TimerProcess(*((_DWORD *)a2_2 + 168)); /*0x549bb1*/
  Power::TimerProcess(*((_DWORD *)a2_2 + 173)); /*0x549bbf*/
  v3 = *((_DWORD *)a2_2 + 175); /*0x549bc4*/
  if ( v3 ) /*0x549bcc*/
  {
    v4 = (*(int (__stdcall **)(int))(*(_DWORD *)(v3 + 4) + 16))(v3 + 4); /*0x549bd5*/
    Power::TimerProcess(v4); /*0x549bdb*/
  }
  Power::TimerProcess(*((_DWORD *)a2_2 + 176)); /*0x549be9*/
  Power::TimerProcess(*((_DWORD *)a2_2 + 177)); /*0x549bf7*/
  Power::TimerProcess(*((_DWORD *)a2_2 + 181)); /*0x549c05*/
  Power::TimerProcess(*((_DWORD *)a2_2 + 182)); /*0x549c13*/
  Power::TimerProcess(*((_DWORD *)a2_2 + 183)); /*0x549c21*/
  IDA_LOBYTE(v5) = *((_BYTE *)a2_2 + 736); /*0x549c26*/
  v6 = Power::FlagProcess((Power *)a2_2, v5); /*0x549c2f*/
  IDA_LOBYTE(v6) = *((_BYTE *)a2_2 + 737); /*0x549c34*/
  Power::FlagProcess((Power *)a2_2, v6); /*0x549c3d*/
  Power::TimerProcess(*((_DWORD *)a2_2 + 185)); /*0x549c4b*/
  Power::TimerProcess(*((_DWORD *)a2_2 + 186)); /*0x549c59*/
  Power::TimerProcess(*((_DWORD *)a2_2 + 187)); /*0x549c67*/
  return Power::TimerProcess(*((_DWORD *)a2_2 + 188)); /*0x549c7a*/
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

  for ( i = 0; i < *(int *)&stru_87F5F0.__pad_58[96]; *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[84] + 4 * i - 4) = 0 ) /*0x549c8a*/
  {
    v3 = *(void (__thiscall ****)(_DWORD, int))(*(_DWORD *)&stru_87F5F0.__pad_58[84] + 4 * i); /*0x549c91*/
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
      *((_DWORD *)a1 + 169) = &(void*)(void*)&DynamicVectorClass_unsigned_short___vftable; /*0x549cee*/
      *((_DWORD *)a1 + 174) = 10; /*0x549cf4*/
      *((_DWORD *)a1 + 173) = 0; /*0x549cfb*/
      *(_DWORD *)a1->__pad_0 = &(void*)(void*)&IsometricTileTypeClass_vftable; /*0x549d02*/
      a1->IsometricTileTypeClass_field_0x04 = (int)&(void*)(void*)&IsometricTileTypeClass_vftable; /*0x549d08*/
      a1->IsometricTileTypeClass_field_0x08 = (int)&(void*)(void*)&IsometricTileTypeClass_vftable; /*0x549d0f*/
      a1->IsometricTileTypeClass_field_0x0C = (int)&(void*)(void*)&IsometricTileTypeClass_vftable; /*0x549d16*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)a1 + 175); /*0x549d2a*/
    for ( j = 0; j < *(int *)&stru_87F5F0.__pad_58[96]; *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[84] + 4 * j - 4) = 0 ) /*0x549d39*/
      ++j; /*0x549d41*/
    TerrainClass::InitTheatre((TerrainClass *)a1); /*0x549d56*/
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

  if ( this->u32_2BC == a2 ) /*0x549ddc*/
    this->u32_2BC = 0; /*0x549dde*/
  result = this->u32_2C8; /*0x549de8*/
  if ( result != -1 && *(_DWORD *)(FootClass_Array.primaryFacing[3] + 4 * result) == a2 ) /*0x549e02*/
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
    RA2_OPDEL(); /*0x54a180*/
  return this; /*0x54a18a*/
}
} // namespace gamemd
// 0x54A190
namespace gamemd {
void IsometricTileTypeClass::ClearBuffer(void *a1)
{
  void *v2; // eax

  v2 = *(void **)&a1->m_1[3]; /*0x54a196*/
  a1->m_10 = 0; /*0x54a199*/
  if ( v2 && IDA_BYTE1(a1->m_C) ) /*0x54a1a0*/
  {
    RA2_OPDEL(v2); /*0x54a1a6*/
    *(_DWORD *)&a1->m_1[3] = 0; /*0x54a1ae*/
  }
  IDA_BYTE1(a1->m_C) = 0; /*0x54a1b1*/
  a1->m_8 = 0; /*0x54a1b4*/
}
} // namespace gamemd
// 0x54A1C0
namespace gamemd {
unsigned int IsometricTileTypeClass::PointerToIndex(int a2)
{
  if ( IDA_LOBYTE(this->m_C) ) /*0x54a1c0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x54a1d5*/
  else
    return 0; /*0x54a1c7*/
}
} // namespace gamemd
// 0x54A3D0
namespace gamemd {
char IsometricTileTypeClass::SetCapacity(int a2, unsigned int * a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x54a3dc*/
  {
    IDA_LOBYTE(this->m_C) = 0; /*0x54a3e2*/
    if ( a3 ) /*0x54a3e8*/
      v4 = a3; /*0x54a3fe*/
    else
      v4 = (_DWORD *)RA2_OPNEW(4 * a2); /*0x54a3fa*/
    IDA_LOBYTE(this->m_C) = 1; /*0x54a402*/
    if ( !v4 ) /*0x54a406*/
      return 0; /*0x54a47a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x54a408*/
    {
      m_8 = this->m_8; /*0x54a40f*/
      if ( a2 < m_8 ) /*0x54a414*/
        m_8 = a2; /*0x54a416*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x54a41c*/
        ++i; /*0x54a421*/
      if ( IDA_BYTE1(this->m_C) ) /*0x54a42e*/
      {
        RA2_OPDEL(*(void **)&this->m_1[3]); /*0x54a439*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x54a441*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x54a44a*/
    this->m_8 = a2; /*0x54a452*/
    IDA_BYTE1(this->m_C) = a3 == 0; /*0x54a455*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAG *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x54a45e*/
  }
  v7 = this->m_8; /*0x54a461*/
  if ( v7 < this->m_10 ) /*0x54a469*/
    this->m_10 = v7; /*0x54a46b*/
  return 1; /*0x54a46e*/
}
} // namespace gamemd
// 0x54A480
namespace gamemd {
int IsometricTileTypeClass::FindItem(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x54a480*/
  result = 0; /*0x54a483*/
  if ( m_10 <= 0 ) /*0x54a488*/
    return -1; /*0x54a49f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x54a48e*/
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

  v3 = *(void **)&this->m_1[3]; /*0x54a763*/
  *(_DWORD *)this->__pad_0 = &(void*)(void*)&VectorClass_unsigned_short___vftable; /*0x54a766*/
  if ( v3 && IDA_BYTE1(this->m_C) ) /*0x54a770*/
  {
    RA2_OPDEL(v3); /*0x54a778*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x54a780*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x54a78b*/
  this->m_8 = 0; /*0x54a791*/
  if ( (a2 & 1) != 0 ) /*0x54a798*/
    RA2_OPDEL(); /*0x54a79b*/
  return this->__pad_0; /*0x54a7a5*/
}
} // namespace gamemd
// 0x54A850
namespace gamemd {
unsigned int * IsometricTileTypeClass::Constructor_0(int a2, int a3)
{
  this->IsometricTileTypeClass_field_0x04 = 0; /*0x54a85b*/
  this->IsometricTileTypeClass_field_0x08 = a2; /*0x54a85e*/
  IDA_LOBYTE(this->IsometricTileTypeClass_field_0x0C) = 1; /*0x54a861*/
  IDA_BYTE1(this->IsometricTileTypeClass_field_0x0C) = 0; /*0x54a865*/
  *(_DWORD *)this->__pad_0 = &(void*)(void*)&VectorClass_unsigned_short___vftable; /*0x54a868*/
  if ( a2 ) /*0x54a86e*/
  {
    if ( a3 ) /*0x54a876*/
    {
      this->IsometricTileTypeClass_field_0x04 = a3; /*0x54a878*/
      return this->__pad_0; /*0x54a87e*/
    }
    this->IsometricTileTypeClass_field_0x04 = RA2_OPNEW(4 * a2); /*0x54a88d*/
    IDA_BYTE1(this->IsometricTileTypeClass_field_0x0C) = 1; /*0x54a890*/
  }
  return this->__pad_0; /*0x54a87d*/
}
} // namespace gamemd