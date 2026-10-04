// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AITriggerTypeClass_40_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Factory_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Super_e4.hpp"
#include "e4/classes/AITriggerTypeClass_e4.hpp"
#include "e4/classes/HouseTypeClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/VoxelAnimClass_e4.hpp"
#include "e4/classes/VoxelAnimTypeClass_e4.hpp"
#include "e4/classes/WarheadTypeClass_e4.hpp"
#include "e4/classes/WeaponTypeClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/RadarClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/UnitClass_e4.hpp"
#include "e4/classes/AbstractClassVector_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/EventQueue_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/TypeClass_e4.hpp"
#include "e4/classes/TeamTypeClass_e4.hpp"
#include "e4/classes/SuperWeaponTypeClass_e4.hpp"

// 0x41EC90
namespace gamemd {
int AITriggerTypeClass::CivilianHouseOwns(int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x41EC90)
}
} // namespace gamemd
// 0x41EE90
namespace gamemd {
DynamicVector * * AITriggerTypeClass::OwnerHouseOwns(unsigned int * a2, int a3)
{

  int v4; // esi
  int v5; // ebp
  int v6; // edi
  int v7; // eax
  bool result; // al
  bool v9; // [esp+7h] [ebp-1h]

  v9 = (gamemd::DynamicVector **)(0);
  if ( !a2 ) /*0x41ee9f*/
    return (gamemd::DynamicVector **)(v9); /*0x41efcb*/
  v4 = this->u32_D8; /*0x41eea6*/
  if ( v4 ) /*0x41eeae*/
  {
    v5 = (*(int (**)(int))(*(unsigned int *)v4 + 64))(v4); /*0x41eec1*/
    v6 = 0; /*0x41eec3*/
    switch ( (*(int (**)(int))(*(unsigned int *)v4 + 44))(v4) ) /*0x41eed8*/
    {
      case 3: /*0x41eed8*/
        v6 = ((DynamicVector *)((DynamicVector *)(a2 + 5475)))->GetOrGrow((int)((void *)(v5))); 
        goto LABEL_8; /*0x41ef31*/
      case 7: /*0x41eed8*/
        v7 = ((DynamicVector *)((DynamicVector *)(a2 + 5460)))->GetOrGrow((int)((void *)(v5))); 
        break; /*0x41eef3*/
      case 16: /*0x41eed8*/
        v7 = ((DynamicVector *)((DynamicVector *)(a2 + 5470)))->GetOrGrow((int)((void *)(v5))); 
        break; /*0x41ef1f*/
      case 40: /*0x41eed8*/
        v7 = ((DynamicVector *)((DynamicVector *)(a2 + 5465)))->GetOrGrow((int)((void *)(v5))); 
        break; /*0x41ef09*/
      default:
LABEL_8:
        v7 = v6; /*0x41ef33*/
        break; /*0x41ef37*/
    }
  }
  else
  {
    v7 = 0; /*0x41ef39*/
  }
  switch ( this->q03A ) /*0x41ef4b*/
  {
    case 0: /*0x41ef4b*/
      result = v7 < this->u32_E4; /*0x41ef60*/
      break; /*0x41ef65*/
    case 1: /*0x41ef4b*/
      result = v7 <= this->u32_E4; /*0x41ef76*/
      break; /*0x41ef7b*/
    case 2: /*0x41ef4b*/
      result = v7 == this->u32_E4; /*0x41ef8c*/
      break; /*0x41ef91*/
    case 3: /*0x41ef4b*/
      result = v7 >= this->u32_E4; /*0x41efa2*/
      break; /*0x41efa7*/
    case 4: /*0x41ef4b*/
      result = v7 > this->u32_E4; /*0x41efb8*/
      break; /*0x41efbd*/
    case 5: /*0x41ef4b*/
      return (gamemd::DynamicVector **)(v7 != this->u32_E4); /*0x41efc6*/
    default:
      return (gamemd::DynamicVector **)(v9);
  }
  return (gamemd::DynamicVector **)(result);

}
} // namespace gamemd
// 0x41F0D0
namespace gamemd {
int AITriggerTypeClass::IronCurtainCharged(int a1, int a2)
{

  int v2; // edx
  int v3; // eax
  int i; // ecx
  int v6; // eax
  int v7; // esi
  int v8; // ecx
  int v9; // [esp+8h] [ebp+4h]

  if ( !a1 ) /*0x41f0d9*/
    return 0; /*0x41f0d9*/
  v2 = *(unsigned int *)(a1 + 612); /*0x41f0db*/
  v3 = 0; /*0x41f0e1*/
  if ( v2 <= 0 ) /*0x41f0e5*/
    return 0; /*0x41f0e5*/
  for ( i = *(unsigned int *)(a1 + 600); *(unsigned int *)(*(unsigned int *)(*(unsigned int *)i + 40) + 180) != 1; i += 4 ) /*0x41f0ed*/
  {
    if ( ++v3 >= v2 ) /*0x41f103*/
      return 0; /*0x41f103*/
  }
  v6 = *(unsigned int *)(*(unsigned int *)(a1 + 600) + 4 * v3); /*0x41f10d*/
  if ( !v6 || !*(unsigned char *)(v6 + 109) ) /*0x41f114*/
    return 0; /*0x41f119*/
  v7 = *(unsigned int *)(v6 + 48); /*0x41f11b*/
  v8 = *(unsigned int *)(v6 + 56); /*0x41f11e*/
  if ( v7 == -1 ) /*0x41f124*/
    goto LABEL_12; /*0x41f124*/
  if ( (int)dword_A8ED84 - v7 < v8 ) /*0x41f130*/
  {
    v8 -= (int)dword_A8ED84 - v7; /*0x41f132*/
LABEL_12:
    v9 = v8; /*0x41f134*/
    return 1.0 - *(float *)&((unsigned int *)dword_8871E0)[0] >= (double)v9 / (double)((Super*)(unsigned int *)v6)->GetDefaultTimer(); /*0x41f134*/
  }
  v9 = 0; /*0x41f171*/
  return 1.0 - *(float *)&((unsigned int *)dword_8871E0)[0] >= (double)v9 / (double)((Super*)(unsigned int *)v6)->GetDefaultTimer(); /*0x41f167*/

}
} // namespace gamemd
// 0x41F180
namespace gamemd {
int AITriggerTypeClass::ChronoSphereCharged(int a1, int a2)
{

  int v2; // edx
  int v3; // eax
  int i; // ecx
  int v6; // eax
  int v7; // esi
  int v8; // ecx
  int v9; // [esp+8h] [ebp+4h]

  if ( !a1 ) /*0x41f189*/
    return 0; /*0x41f189*/
  v2 = *(unsigned int *)(a1 + 612); /*0x41f18b*/
  v3 = 0; /*0x41f191*/
  if ( v2 <= 0 ) /*0x41f195*/
    return 0; /*0x41f195*/
  for ( i = *(unsigned int *)(a1 + 600); *(unsigned int *)(*(unsigned int *)(*(unsigned int *)i + 40) + 180) != 3; i += 4 ) /*0x41f19d*/
  {
    if ( ++v3 >= v2 ) /*0x41f1b3*/
      return 0; /*0x41f1b3*/
  }
  v6 = *(unsigned int *)(*(unsigned int *)(a1 + 600) + 4 * v3); /*0x41f1bd*/
  if ( !v6 || !*(unsigned char *)(v6 + 109) ) /*0x41f1c4*/
    return 0; /*0x41f1c9*/
  v7 = *(unsigned int *)(v6 + 48); /*0x41f1cb*/
  v8 = *(unsigned int *)(v6 + 56); /*0x41f1ce*/
  if ( v7 == -1 ) /*0x41f1d4*/
    goto LABEL_12; /*0x41f1d4*/
  if ( (int)dword_A8ED84 - v7 < v8 ) /*0x41f1e0*/
  {
    v8 -= (int)dword_A8ED84 - v7; /*0x41f1e2*/
LABEL_12:
    v9 = v8; /*0x41f1e4*/
    return 1.0 - *(float *)&((unsigned int *)dword_8871E0)[0] >= (double)v9 / (double)((Super*)(unsigned int *)v6)->GetDefaultTimer(); /*0x41f1e4*/
  }
  v9 = 0; /*0x41f221*/
  return 1.0 - *(float *)&((unsigned int *)dword_8871E0)[0] >= (double)v9 / (double)((Super*)(unsigned int *)v6)->GetDefaultTimer(); /*0x41f217*/

}
} // namespace gamemd
// 0x41F230
namespace gamemd {
int AITriggerTypeClass::HouseCredits(int a2, int a3)
{

  bool v3; // bl
  int v5; // eax
  bool result; // al

  v3 = 0; /*0x41f235*/
  if ( !a3 ) /*0x41f23c*/
    return v3; /*0x41f2bd*/
  v5 = (*(int (**)(int))(*(unsigned int *)(a3 + 36) + 24))(a3 + 36); /*0x41f245*/
  switch ( this->q03A ) /*0x41f253*/
  {
    case 0: /*0x41f253*/
      result = v5 < this->u32_E4; /*0x41f266*/
      break; /*0x41f269*/
    case 1: /*0x41f253*/
      result = v5 <= this->u32_E4; /*0x41f278*/
      break; /*0x41f27b*/
    case 2: /*0x41f253*/
      result = v5 == this->u32_E4; /*0x41f28a*/
      break; /*0x41f28d*/
    case 3: /*0x41f253*/
      result = v5 >= this->u32_E4; /*0x41f29c*/
      break; /*0x41f29f*/
    case 4: /*0x41f253*/
      result = v5 > this->u32_E4; /*0x41f2ae*/
      break; /*0x41f2b1*/
    case 5: /*0x41f253*/
      return v5 != this->u32_E4; /*0x41f2ba*/
    default:
      return v3;
  }
  return result; /*0x41f260*/

}
} // namespace gamemd
// 0x41F580
namespace gamemd {
ObjectClass * * AITriggerTypeClass::LoadFromINI(unsigned char *** a2, void *a2_2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x41F580)
}
} // namespace gamemd
// 0x41FD60
namespace gamemd {
int AITriggerTypeClass::RegisterSuccess()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x41FD60)
}
} // namespace gamemd
// 0x41FE20
namespace gamemd {
int AITriggerTypeClass::RegisterFailure()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x41FE20)
}
} // namespace gamemd
// 0x41FFF0
namespace gamemd {
AITriggerTypeClass * AITriggerTypeClass::ddtor(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x41FFF0)
}
} // namespace gamemd
// 0x41FFD0
namespace gamemd {
int AITriggerTypeClass::GetTypeIdentifier()
{

  return 59; /*0x41ffd5*/

}
} // namespace gamemd
// 0x41FFE0
namespace gamemd {
int AITriggerTypeClass::GetObjectSize()
{

  return 272; /*0x41ffe5*/

}
} // namespace gamemd
// 0x420370
namespace gamemd {
void AITriggerTypeClass_40::ClearBuffer(void *a1_1)
{

  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x420376*/
  this->m_10 = 0; /*0x420379*/
  if ( v2 && BYTE1(this->m_C) ) /*0x420380*/
  {
    __3_YAXPAX_Z(v2); /*0x420386*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x42038e*/
  }
  BYTE1(this->m_C) = 0; /*0x420391*/
  this->m_8 = 0; /*0x420394*/

}
} // namespace gamemd

// 0x4203A0
namespace gamemd {
unsigned int AITriggerTypeClass_40::PointerToIndex(int a2)
{

  if ( LOBYTE(this->m_C) ) /*0x4203a0*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x4203b5*/
  else
    return 0; /*0x4203a7*/

}
} // namespace gamemd

// 0x4203C0
namespace gamemd {
wchar_t AITriggerTypeClass_40::Seek(int a2, void *a2_2, void *a3_1)
{
     return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4203C0)
}
} // namespace gamemd

// 0x4203D0
namespace gamemd {
char AITriggerTypeClass_40::AddRef(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4203D0)
}
} // namespace gamemd

// 0x420410
namespace gamemd {
char AITriggerTypeClass_40::Release(int a2, unsigned int * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x420410)
}
} // namespace gamemd

// 0x4204C0
namespace gamemd {
wchar_t AITriggerTypeClass_40::ddtor()
{
     return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4204C0)
}
} // namespace gamemd

// 0x4204F0
namespace gamemd {
int AITriggerTypeClass_40::Read(unsigned int * a2, void *a2_2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4204F0)
}
} // namespace gamemd

// 0x420530
namespace gamemd {
unsigned int AITriggerTypeClass_40::Write(int a2)
{

  if ( LOBYTE(this->m_C) ) /*0x420530*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x420545*/
  else
    return 0; /*0x420537*/

}
} // namespace gamemd

// 0x420550
namespace gamemd {
char AITriggerTypeClass_40::SetCapacity(int a2, unsigned int * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x420550)
}
} // namespace gamemd

// 0x420600
namespace gamemd {
int AITriggerTypeClass_40::FindItem(unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x420600)
}
}
// 0x420630
namespace gamemd {
VectorClass_flat * AITriggerTypeClass_40::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x420633*/
  *(unsigned int *)Block->__pad_0 = &vt_VectorClass; /*0x420636*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x420640*/
  {
    __3_YAXPAX_Z(v3); /*0x420648*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x420650*/
  }
  BYTE1(Block->m_C) = 0; /*0x42065b*/
  Block->m_8 = 0; /*0x420661*/
  if ( (a2 & 1) != 0 ) /*0x420668*/
    __3_YAXPAX_Z(Block); /*0x42066b*/
  return Block->__pad_0; /*0x420675*/

}
} // namespace gamemd

// 0x420680
namespace gamemd {
DynamicVector * AITriggerTypeClass_40::Constructor_VectorClass_AlphaLightingRemapClass___(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x420683*/
  *(unsigned int *)Block->__pad_0 = &vt_VectorClass; /*0x420686*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x420690*/
  {
    __3_YAXPAX_Z(v3); /*0x420698*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4206a0*/
  }
  BYTE1(Block->m_C) = 0; /*0x4206ab*/
  Block->m_8 = 0; /*0x4206b1*/
  if ( (a2 & 1) != 0 ) /*0x4206b8*/
    __3_YAXPAX_Z(Block); /*0x4206bb*/
  return Block->__pad_0; /*0x4206c5*/

}
} // namespace gamemd
