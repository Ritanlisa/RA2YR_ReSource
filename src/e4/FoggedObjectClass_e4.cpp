// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/FoggedObjectClass_42_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/FoggedObject_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/FoggedObjectClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/Frame_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Font_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/FogOfWar_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/Block_e4.hpp"  // G42.36 C2027 supply

// 0x4D0980
namespace gamemd {
int FoggedObjectClass::InitBuildingFog(unsigned int * a2, int a3, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4D0980)
}
} // namespace gamemd
// 0x4D0C40
namespace gamemd {
AbstractClass * FoggedObjectClass::InitTerrainFog(IUnknown * aP1, int a3, int a4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4D0C40)
}
} // namespace gamemd
// 0x4D0EF0
namespace gamemd {
AbstractClass * FoggedObjectClass::Constructor(BuildingClass * aP1, FoggedObjectClass * aP2, void *a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4D0EF0)
}
} // namespace gamemd
// 0x4D1370
namespace gamemd {
AbstractClass * * FoggedObjectClass::InitDrawRecord(unsigned int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4D1370)
}
} // namespace gamemd
// 0x4D2510
namespace gamemd {
int FoggedObjectClass::LoadTypeData(int * a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4D2510)
}
} // namespace gamemd
// 0x4D2810
namespace gamemd {
HouseClass * * FoggedObjectClass::PowerDrainUpdate(int a2)
{

  ((AbstractClass *)(AbstractClass *)this)->ProcessPower(); /*0x4d2819*/
  Power::TimerProcess(this->LastSight); /*0x4d2824*/
  Power::TimerProcess(this->Cell[0]); /*0x4d282f*/
  Power::TimerProcess(*((unsigned int *)this + 12)); /*0x4d283a*/
  Power::TimerProcess(*((unsigned int *)this + 13)); /*0x4d2845*/
  Power::TimerProcess(*((unsigned int *)this + 14)); /*0x4d2850*/
  Power::TimerProcess(*((unsigned int *)this + 15)); /*0x4d285b*/
  Power::TimerProcess(*((unsigned int *)this + 16)); /*0x4d2866*/
  Power::TimerProcess(*((unsigned int *)this + 17)); /*0x4d2871*/
  Power::TimerProcess(*((unsigned int *)this + 18)); /*0x4d287c*/
  Power::TimerProcess(*((unsigned int *)this + 19)); /*0x4d2887*/
  Power::TimerProcess(*((unsigned int *)this + 20)); /*0x4d2892*/
  Power::TimerProcess(*((unsigned int *)this + 21)); /*0x4d289d*/
  Power::TimerProcess(*((unsigned int *)this + 22)); /*0x4d28a8*/
  return (gamemd::HouseClass **)(Power::TimerProcess(*((unsigned int *)this + 27))); /*0x4d28b8*/

}
} // namespace gamemd
// 0x4D28D0
namespace gamemd {
unsigned int * FoggedObjectClass::CheckVisibility(unsigned int * a2)
{

  int v3; // [esp+0h] [ebp-4h]

  LOWORD(v3) = *((unsigned int *)this + 13) / 256; /*0x4d28e0*/
  HIWORD(v3) = *((unsigned int *)this + 14) / 256; /*0x4d28f4*/
  *a2 = v3; /*0x4d2901*/
  return a2; /*0x4d2904*/

}
} // namespace gamemd
// 0x4D2BC0
namespace gamemd {
AbstractClass * * FoggedObjectClass::ResizeArray(int a2, char * a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4D2BC0)
}
} // namespace gamemd
// 0x4D2CD0
namespace gamemd {
int FoggedObjectClass::Read(unsigned int * a2, void *a2_2)
{

  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = *(unsigned int *)this->__tail_10; /*0x4d2cd0*/
  result = 0; /*0x4d2cd5*/
  if ( v2 <= 0 ) /*0x4d2cdb*/
    return -1; /*0x4d2cfc*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2 || i[1] != a2[1]; i += 4 ) /*0x4d2ce1*/
  {
    if ( ++result >= v2 ) /*0x4d2cfa*/
      return -1; /*0x4d2cfa*/
  }
  return result; /*0x4d2cff*/

}
} // namespace gamemd
// 0x4E07B0
namespace gamemd {
int FoggedObjectClass_42::FindItem(unsigned int * a2)
{

  int uniqueId; // edx
  int result; // eax
  unsigned int *i; // ecx

  uniqueId =(int)this->uniqueId; /*0x4e07b0*/
  result = 0; /*0x4e07b3*/
  if ( uniqueId <= 0 ) /*0x4e07b8*/
    return -1; /*0x4e07cf*/
  for ( i = (unsigned int *)this->vtable1; *i != *a2; ++i ) /*0x4e07be*/
  {
    if ( ++result >= uniqueId ) /*0x4e07cd*/
      return -1; /*0x4e07cd*/
  }
  return result; /*0x4e07d2*/

}
}
// 0x4D24A0
namespace gamemd {  // G42.18c ns repair
int   FoggedObjectClass::SaveToINI(TechnoTypeClass * aP0, int * a1, int aP2)
{

  int result; // eax
  int v4; // edx
  int v5; // ebp
  int v6; // edi

  result = AbstractClass::SaveLoad_Prefix((gamemd::ObjectTypeClass *)((int *)aP0), (gamemd::ObjectTypeClass *)a1, (gamemd::ObjectTypeClass *)aP2); /*0x4d24b3*/
  if ( result >= 0 ) /*0x4d24ba*/
  {
    v4 = *a1; /*0x4d24bf*/
    aP2 = *((unsigned int *)aP0 + 27); /*0x4d24cb*/
    result = (*(int (**)(int *, int *, int, unsigned int))(v4 + 16))(a1, &aP2, 4, 0); /*0x4d24cf*/
    if ( result >= 0 ) /*0x4d24d4*/
    {
      v5 = 0; /*0x4d24da*/
      if ( aP2 > 0 ) /*0x4d24de*/
      {
        v6 = 0; /*0x4d24e0*/
        do /*0x4d2500*/
        {
          if ( (*(int (**)(int *, int, int, unsigned int))(*a1 + 16))(a1, v6 + *((unsigned int *)aP0 + 24), 16, 0) < 0 ) /*0x4d24f4*/
            break; /*0x4d24f4*/
          ++v5; /*0x4d24fa*/
          v6 += 16; /*0x4d24fb*/
        }
        while ( v5 < aP2 ); /*0x4d2500*/
      }
      return 0; /*0x4d2502*/
    }
  }
  return result; /*0x4d2504*/

}
}  // G42.18c ns repair
// 0x4D27B0
namespace gamemd {  // G42.18c ns repair
int FoggedObjectClass::GetTypeIdentifier()
{

  return 61; /*0x4d27b5*/

}
}  // G42.18c ns repair
// 0x4D27C0
namespace gamemd {  // G42.18c ns repair
int FoggedObjectClass::GetObjectSize()
{

  return 120; /*0x4d27c5*/

}
}  // G42.18c ns repair
// 0x4D27D0
namespace gamemd {  // G42.18c ns repair
int FoggedObjectClass::GetClassIdentifier(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x4d27d6*/
    return -2147467261; /*0x4d27d8*/
  *a2 = 474417934; /*0x4d27e6*/
  a2[1] = 299002327; /*0x4d27ee*/
  a2[2] = 1610674872; /*0x4d27f7*/
  a2[3] = unk_7E999C; /*0x4d2800*/
  return 0; /*0x4d27dd*/

}
}  // G42.18c ns repair
// 0x4D2910
namespace gamemd {  // G42.18c ns repair
FoggedObjectClass * FoggedObjectClass::ddtor(char a2, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4D2910)
}
}  // G42.18c ns repair
// 0x4D29B0
namespace gamemd {  // G42.18c ns repair
char FoggedObjectClass::AddRef(int a2)
{

  int m_8; // edi
  int v3; // esi
  int v4; // edx
  unsigned int *v5; // eax
  unsigned int *v6; // ecx
  int v7; // edx

  m_8 =(int)this->vtable3; /*0x4d29bb*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4d29c0*/
  {
    v3 = 0; /*0x4d29c2*/
    if ( m_8 <= 0 ) /*0x4d29c6*/
      return 1; /*0x4d29f6*/
    v4 = *(unsigned int *)(a2 + 4); /*0x4d29c8*/
    v5 = *(unsigned int **)&this->m_1[3]; /*0x4d29cb*/
    v6 = (unsigned int *)(v4 + 4); /*0x4d29ce*/
    v7 = v4 - (unsigned int)v5; /*0x4d29d1*/
    while ( *v5 == *(unsigned int *)((char *)v5 + v7) && v5[1] == *v6 ) /*0x4d29e3*/
    {
      ++v3; /*0x4d29e5*/
      v6 += 4; /*0x4d29e6*/
      v5 += 4; /*0x4d29e9*/
      if ( v3 >= m_8 ) /*0x4d29ee*/
        return 1; /*0x4d29ee*/
    }
  }
  return 0; /*0x4d29f0*/

}
}  // G42.18c ns repair
// 0x4D2D60
namespace gamemd {  // G42.18c ns repair
DynamicVector * FoggedObjectClass::QueryInterface(char a2, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4D2D60)
}
}  // G42.18c ns repair
// 0x4E01F0
namespace gamemd {
void FoggedObjectClass_42::ClearBuffer(void *a1_1)
{

  void *vtable1; // eax

  vtable1 = (void *)this->vtable1; /*0x4e01f6*/
  this->uniqueId = 0; /*0x4e01f9*/
  if ( vtable1 && BYTE1(this->vtable3) ) /*0x4e0200*/
  {
    __3_YAXPAX_Z(vtable1); /*0x4e0206*/
    this->vtable1 = 0; /*0x4e020e*/
  }
  BYTE1(this->vtable3) = 0; /*0x4e0211*/
  this->vtable2 = 0; /*0x4e0214*/

}
} // namespace gamemd

// 0x4E0220
namespace gamemd {
unsigned int FoggedObjectClass_42::PointerToIndex(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E0220)
}
} // namespace gamemd

// 0x4E0240
namespace gamemd {
int FoggedObjectClass_42::Seek(int a2, void *a2_2, void *a3_1)
{

  return *(unsigned int *)(*(unsigned int *)&this->Items + 4 * a2); /*0x4e024a*/

}
} // namespace gamemd

// 0x4E0580
namespace gamemd {
char FoggedObjectClass_42::AddRef(int a2)
{

  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  m_8 = this->Capacity; /*0x4e0582*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4e058d*/
  {
    v3 = 0; /*0x4e058f*/
    if ( m_8 <= 0 ) /*0x4e0593*/
      return 1; /*0x4e05b3*/
    v4 = *(unsigned int **)&this->Items; /*0x4e0595*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4e059b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4e05a4*/
    {
      ++v3; /*0x4e05a6*/
      ++v4; /*0x4e05a7*/
      if ( v3 >= m_8 ) /*0x4e05ac*/
        return 1; /*0x4e05ac*/
    }
  }
  return 0; /*0x4e05ae*/

}
} // namespace gamemd

// 0x4E05C0
namespace gamemd {
char FoggedObjectClass_42::Release(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4e05cc*/
  {
    LOBYTE(this->IsInitialized) = 0; /*0x4e05d6*/
    if ( a3 ) /*0x4e05dc*/
      v4 = a3; /*0x4e05f2*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x4e05ee*/
    LOBYTE(this->IsInitialized) = 1; /*0x4e05f6*/
    if ( v4 ) /*0x4e05fa*/
    {
      if ( *(unsigned int *)&this->Items ) /*0x4e0605*/
      {
        m_8 = this->Capacity; /*0x4e060c*/
        if ( a2 < m_8 ) /*0x4e0611*/
          m_8 = a2; /*0x4e0613*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->Items + 4 * i - 4) ) /*0x4e0619*/
          ++i; /*0x4e061e*/
        if ( BYTE1(this->IsInitialized) ) /*0x4e062b*/
        {
          __3_YAXPAX_Z(*(void **)&this->Items); /*0x4e0636*/
          *(unsigned int *)&this->Items = 0; /*0x4e063e*/
        }
      }
      *(unsigned int *)&this->Items =(unsigned int)v4; /*0x4e0647*/
      this->Capacity = a2; /*0x4e064f*/
      BYTE1(this->IsInitialized) = a3 == 0; /*0x4e0652*/
      return 1; /*0x4e0658*/
    }
    else
    {
      return 0; /*0x4e05ff*/
    }
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x4e0662*/
    return 1; /*0x4e0668*/
  }

}
} // namespace gamemd

// 0x4E0670
namespace gamemd {
void FoggedObjectClass_42::ddtor()
{

  if ( *(unsigned int *)&this->Items && BYTE1(this->IsInitialized) ) /*0x4e067d*/
  {
    __3_YAXPAX_Z(*(void **)&this->Items); /*0x4e0683*/
    *(unsigned int *)&this->Items = 0; /*0x4e068b*/
  }
  BYTE1(this->IsInitialized) = 0; /*0x4e068e*/
  this->Capacity = 0; /*0x4e0691*/

}
} // namespace gamemd

// 0x4E06A0
namespace gamemd {
int FoggedObjectClass_42::Read(unsigned int * a2, void *a2_2)
{

  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !LOBYTE(this->IsInitialized) ) /*0x4e06a0*/
    return 0; /*0x4e06a8*/
  m_8 = this->Capacity; /*0x4e06ae*/
  result = 0; /*0x4e06b1*/
  if ( m_8 <= 0 ) /*0x4e06b5*/
    return -1; /*0x4e06cc*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4e06bb*/
  {
    if ( ++result >= m_8 ) /*0x4e06ca*/
      return -1; /*0x4e06ca*/
  }
  return result; /*0x4e06aa*/

}
} // namespace gamemd

// 0x4E06E0
namespace gamemd {
unsigned int FoggedObjectClass_42::Write(int a2)
{

  if ( LOBYTE(this->IsInitialized) ) /*0x4e06e0*/
    return (unsigned int)(a2 - *(unsigned int *)&this->Items) >> 2; /*0x4e06f5*/
  else
    return 0; /*0x4e06e7*/

}
} // namespace gamemd

// 0x4E0700
namespace gamemd {
char FoggedObjectClass_42::SetCapacity(int a2, unsigned int * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E0700)
}
} // namespace gamemd

// 0x4E0CE0
namespace gamemd {
VectorClass_flat * VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x004E0CE0.json)
}
} // namespace gamemd
