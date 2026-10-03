// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/TaskForceClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Factory_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/SwizzleManagerClass_e4.hpp"
#include "e4/classes/TagTypeClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/TagClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/TriggerTypeClass_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/TauntCommandClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/TypeClass_e4.hpp"

// 0x4C4EF0
namespace gamemd {
unsigned int * TaskForceClass::ParseUnitCountAndType(char *Buffer)
{

  int ExitCellByName; // eax
  int v4; // edx
  int Index; // eax
  int v7; // edx
  int v8; // eax
  char *v9; // [esp-10h] [ebp-54h]
  TypeClass v10; // [esp+4h] [ebp-40h] BYREF

  v9 = (char *)((unsigned int)(Buffer));
  *(unsigned int *)this->__pad_0 = 0; /*0x4c4f0a*/
  this->TaskForceClass_field_0x4 = 0; /*0x4c4f10*/
  sscanf(v9, "%d,%s", &Buffer, &v10); /*0x4c4f17*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(Buffer); /*0x4c4f27*/
  ExitCellByName = ((Factory*)(Factory *)&v10)->FindExitCellByName(); /*0x4c4f29*/
  if ( ExitCellByName == -1 ) /*0x4c4f31*/
  {
    Index = ((BuildingTypeClass *)((BuildingTypeClass *)&v10))->FindIndex(); /*0x4c4f4c*/
    if ( Index == -1 ) /*0x4c4f54*/
    {
      v8 =(int)(unsigned int *)(((TypeClass*)&v10)->FindByName());
      if ( v8 != -1 ) /*0x4c4f77*/
        this->TaskForceClass_field_0x4 = *((unsigned int *)dword_A8B21C + v8); /*0x4c4f82*/
      return this->__pad_0; /*0x4c4f85*/
    }
    else
    {
      v7 = *((unsigned int *)dword_A83CE4 + Index); /*0x4c4f5c*/
      this->TaskForceClass_field_0x4 = v7; /*0x4c4f61*/
      return this->__pad_0; /*0x4c4f5f*/
    }
  }
  else
  {
    v4 = *((unsigned int *)dword_A8E34C + ExitCellByName); /*0x4c4f39*/
    this->TaskForceClass_field_0x4 = v4; /*0x4c4f3e*/
    return this->__pad_0; /*0x4c4f3c*/
  }

}
}
// 0x6E7E80
namespace gamemd {
int TaskForceClass::Construct(char *aP1)
{

  int v3; // eax
  ObjectTypeClass **p_TaskForceClass_field_0xA4; // eax
  int v5; // ecx

  ((AbstractTypeClass *)((int *)this->__pad_0))->Constructor(aP1); /*0x6e7e8a*/
  this->TaskForceClass_field_0x98 = (unsigned int)((AbstractClass *)-1); /*0x6e7e8f*/
  this->TaskForceClass_field_0x9C[0] = 0; /*0x6e7e99*/
  *(unsigned int *)this->__pad_A0 = 0; /*0x6e7ea3*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(&vt_TaskForceClass); /*0x6e7ead*/
  this->TaskForceClass_field_0x4 = (int)&vt_TaskForceClass; /*0x6e7eb3*/
  *(unsigned int *)this->__pad_8 = (unsigned int)(&vt_TaskForceClass); /*0x6e7eba*/
  *(unsigned int *)&this->__pad_8[4] = (unsigned int)(&vt_TaskForceClass); /*0x6e7ec1*/
  if ( dword_A8E8E0 < dword_A8E8D8 /*0x6e7f05*/
    || (byte_A8E8DD || !dword_A8E8D8)
    && dword_A8E8E4 > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))(dword_A8E8D0 + 8))(
         &dword_A8E8D0,
         dword_A8E8D8 + dword_A8E8E4,
         0) )
  {
    v3 = (unsigned int)(dword_A8E8E0++);
    *((unsigned int *)dword_A8E8D4 + v3) = (unsigned int)(this); /*0x6e7f21*/
  }
  p_TaskForceClass_field_0xA4 = (gamemd::ObjectTypeClass **)(&this->TaskForceClass_field_0xA4);
  v5 = 6; /*0x6e7f2a*/
  do /*0x6e7f38*/
  {
    *p_TaskForceClass_field_0xA4 = 0; /*0x6e7f2f*/
    p_TaskForceClass_field_0xA4[1] = 0; /*0x6e7f31*/
    p_TaskForceClass_field_0xA4 += 2; /*0x6e7f34*/
    --v5; /*0x6e7f37*/
  }
  while ( v5 ); /*0x6e7f38*/
  return (int)(this->__pad_0); /*0x6e7f3c*/

}
}
// 0x6E8220
namespace gamemd {
AbstractClass * * TaskForceClass::LoadFromINI(char * a1, int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E8220)
}
}
// 0x6E87F0
namespace gamemd {
void * TaskForceClass::ExecuteAction(void ** Block, char a2)
{

  int v3; // eax
  TaskForceClass *v5; // [esp+4h] [ebp-4h] BYREF

  *(unsigned int *)Block->__pad_0 = &vt_TaskForceClass; /*0x6e87f6*/
  Block->TaskForceClass_field_0x4 = (int)&vt_TaskForceClass; /*0x6e87fc*/
  *(unsigned int *)Block->__pad_8 = &vt_TaskForceClass; /*0x6e8803*/
  *(unsigned int *)&Block->__pad_8[4] = &vt_TaskForceClass; /*0x6e880a*/
  AbstractClass::AnnounceExpiredPointer((gamemd::AbstractClass *)((void **)Block),(int)((gamemd::AbstractClass *)(1))); /*0x6e8811*/
  v5 = (gamemd::TaskForceClass *)(Block); /*0x6e8826*/
  v3 = (*(int (**)(unsigned int *, TaskForceClass **))(dword_A8E8D0 + 16))(&dword_A8E8D0, &v5); /*0x6e882a*/
  if ( v3 != -1 && v3 < dword_A8E8E0 && v3 < --dword_A8E8E0 ) /*0x6e8845*/
  {
    do /*0x6e885d*/
    {
      ++v3; /*0x6e884d*/
      *((unsigned int *)dword_A8E8D4 + v3 - 1) = *((unsigned int *)dword_A8E8D4 + v3); /*0x6e8851*/
    }
    while ( v3 < dword_A8E8E0 ); /*0x6e885d*/
  }
  ((AbstractTypeClass *)((AbstractTypeClass *)Block))->Dtor(); /*0x6e8861*/
  if ( (a2 & 1) != 0 ) /*0x6e886b*/
    __3_YAXPAX_Z(Block); /*0x6e886e*/
  return (void **)Block; /*0x6e8878*/

}
}
// 0x4C4F90
namespace gamemd {
int TaskForceClass::Check()
{

  sprintf((char *const )(byte_8A37A0), "%d,%s", *(unsigned int *)this->__pad_0, (const char *)(this->TaskForceClass_field_0x4 + 36)); /*0x4c4fa4*/
  return byte_8A37A0; /*0x4c4fb1*/

}
} // namespace gamemd

// 0x6E8420
namespace gamemd {
char TaskForceClass::GetUnitCount(unsigned char *** aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E8420)
}
} // namespace gamemd

// 0x6E8510
namespace gamemd {
char TaskForceClass::GetUnitType(char * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E8510)
}
} // namespace gamemd

// 0x6E8680
namespace gamemd {
int TaskForceClass::SaveTaskForce(TechnoTypeClass * aP0, int * a1, int aP2)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((gamemd::ObjectTypeClass *)((int *)aP0->__pad_0),(gamemd::ObjectTypeClass *)(a1),(gamemd::ObjectTypeClass *)(aP2)); /*0x6e868f*/
  if ( result >= 0 ) /*0x6e8696*/
    return 0; /*0x6e8698*/
  return result; /*0x6e869a*/

}
} // namespace gamemd

// 0x6E86A0
namespace gamemd {
int TaskForceClass::LoadTaskForce(AbstractTypeClass * aP0, int aP1)
{

  int result; // eax
  int *v3; // esi
  int v4; // edi

  result = AbstractClass::SaveLoad_Prefix_0((gamemd::AbstractClass *)(aP0),(gamemd::AbstractClass *)(aP1)); /*0x6e86ab*/
  if ( result >= 0 ) /*0x6e86b2*/
  {
    if ( aP0 ) /*0x6e86b6*/
    {
      ((AbstractTypeClass*)(int)aP0)->Init((int)&aP1); /*0x6e86bf*/
      *(unsigned int *)aP0->__pad_0 = (unsigned int)(&vt_TaskForceClass); /*0x6e86c4*/
      aP0->TaskForceClass_field_0x4 = (int)&vt_TaskForceClass; /*0x6e86ca*/
      *(unsigned int *)aP0->__pad_8 = (unsigned int)(&vt_TaskForceClass); /*0x6e86d1*/
      *(unsigned int *)&aP0->__pad_8[4] = (unsigned int)(&vt_TaskForceClass); /*0x6e86d8*/
    }
    v3 = (int *)(aP0 + 1); /*0x6e86e0*/
    v4 = 6; /*0x6e86e6*/
    do /*0x6e86fa*/
    {
      ObjectPtr_RegisterForTracking((int)&SwizzleManagerClass_Instance, v3); /*0x6e86f1*/
      v3 += 2; /*0x6e86f6*/
      --v4; /*0x6e86f9*/
    }
    while ( v4 ); /*0x6e86fa*/
    return 0; /*0x6e86fc*/
  }
  return result; /*0x6e86ff*/

}
} // namespace gamemd

// 0x6E8710
namespace gamemd {
int TaskForceClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x6e8716*/
    return -2147467261; /*0x6e8718*/
  *a2 = 1641952286; /*0x6e8726*/
  a2[1] = 298977140; /*0x6e872e*/
  a2[2] = 1610655148; /*0x6e8737*/
  a2[3] = unk_7E977C; /*0x6e8740*/
  return 0; /*0x6e871d*/

}
} // namespace gamemd

// 0x6E8750
namespace gamemd {
int TaskForceClass::LoadTask(int * a2)
{

  ((AbstractTypeClass *)((AbstractTypeClass *)this))->ProcessPower(a2); /*0x6e8759*/
  Power::TimerProcess((int)this->TaskForceClass_field_0x98); /*0x6e8767*/
  return Power::TimerProcess(this->TaskForceClass_field_0x9C[0]); /*0x6e877a*/

}
} // namespace gamemd

// 0x6E87D0
namespace gamemd {
int TaskForceClass::StubReturn33()
{

  return 33; /*0x6e87d5*/

}
} // namespace gamemd

// 0x6E87E0
namespace gamemd {
int TaskForceClass::StubReturn212()
{

  return 212; /*0x6e87e5*/

}
} // namespace gamemd
