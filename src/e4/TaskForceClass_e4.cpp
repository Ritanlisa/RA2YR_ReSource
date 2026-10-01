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
unsigned int * TaskForceClass::ParseUnitCountAndType(char * Buffer, void *a2_1)
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
  ExitCellByName = Factory::FindExitCellByName((Factory *)&v10); /*0x4c4f29*/
  if ( ExitCellByName == -1 ) /*0x4c4f31*/
  {
    Index = ((BuildingTypeClass *)((BuildingTypeClass *)&v10))->FindIndex(); /*0x4c4f4c*/
    if ( Index == -1 ) /*0x4c4f54*/
    {
      v8 = (unsigned int *)(TypeClass::FindByName(&v10));
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
int TaskForceClass::Construct(ObjectClass * aP1, void *a2_1, void *a3_1, void *a4_1, void *a5_1, void *a6_1)
{

  int v3; // eax
  ObjectTypeClass **p_TaskForceClass_field_0xA4; // eax
  int v5; // ecx

  AbstractTypeClass::Constructor((int *)this->__pad_0, aP1); /*0x6e7e8a*/
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
  return this->__pad_0; /*0x6e7f3c*/

}
}
// 0x6E8220
namespace gamemd {
AbstractClass * * TaskForceClass::LoadFromINI(char * a1, int a2)
{

  int result; // eax
  int v5; // esi
  int v6; // ebx
  uint8_t *StringByIndex; // eax
  int v8; // esi
  TaskForceClass *v9; // eax
  unsigned int *v10; // esi
  int v11; // eax
  int v12; // [esp+10h] [ebp-1Ch]
  char Source[24]; // [esp+14h] [ebp-18h] BYREF

  result = (int)(INIClass::GetKeyCount(a1->__pad_0, g_INI_Key_TaskForces));
  v5 = result; /*0x6e8235*/
  v6 = 0; /*0x6e8237*/
  v12 = result; /*0x6e823b*/
  if ( result > 0 ) /*0x6e823f*/
  {
    while ( 1 ) /*0x6e824d*/
    {
      StringByIndex = (uint8_t *)INIClass::GetStringByIndex(a1->__pad_0, g_INI_Key_TaskForces, v6); /*0x6e824d*/
      result = INIClass::GetString(a1, g_INI_Key_TaskForces, StringByIndex, &g_INI_DefaultBuffer, Source, 24); /*0x6e8266*/
      if ( result > 0 ) /*0x6e826d*/
        break; /*0x6e826d*/
LABEL_13:
      if ( ++v6 >= v5 ) /*0x6e832a*/
        return result; /*0x6e832a*/
    }
    if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x6e8293*/
      goto LABEL_11; /*0x6e8293*/
    v8 = 0; /*0x6e82a4*/
    if ( dword_A8E8E0 > 0 ) /*0x6e82a8*/
    {
      while ( _strcmpi((char *)(*((unsigned int *)dword_A8E8D4 + v8) + 36), Source) ) /*0x6e82c6*/
      {
        if ( ++v8 >= dword_A8E8E0 ) /*0x6e82d0*/
          goto LABEL_8; /*0x6e82d0*/
      }
      v10 = (unsigned int *)*((unsigned int *)dword_A8E8D4 + v8); /*0x6e82f9*/
      goto LABEL_12; /*0x6e82fc*/
    }
LABEL_8: v9 = (gamemd::TaskForceClass *)((unsigned int *)((TaskForceClass *)__2_YAPAXI_Z(0xD4u)));
    if ( v9 ) /*0x6e82e1*/
      v10 = (unsigned int *)(TaskForceClass::Construct(v9, Source)); /*0x6e82ef*/
    else
LABEL_11:
      v10 = 0; /*0x6e82fe*/
LABEL_12:
    v11 = sub_412610(Source); /*0x6e8300*/
    SwizzleManagerClass::Here_I_Am((int)&SwizzleManagerClass_Instance, v11, (int)v10); /*0x6e8310*/
    result = (*(int (**)(unsigned int *, INIClass *))(*v10 + 100))(v10, a1); /*0x6e831a*/
    v10[40] = a2; /*0x6e831d*/
    v5 = v12; /*0x6e8323*/
    goto LABEL_13; /*0x6e8323*/
  }
  return result; /*0x6e8330*/

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
  AbstractClass::AnnounceExpiredPointer((void **)Block, 1); /*0x6e8811*/
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
  AbstractTypeClass::Dtor((AbstractTypeClass *)Block); /*0x6e8861*/
  if ( (a2 & 1) != 0 ) /*0x6e886b*/
    __3_YAXPAX_Z(Block); /*0x6e886e*/
  return (void **)Block; /*0x6e8878*/

}
}
// 0x4C4F90
namespace gamemd {
int TaskForceClass::Check(void *a1_1, void *a2_1, void *a3_1)
{

  sprintf(byte_8A37A0, "%d,%s", *(unsigned int *)this->__pad_0, (const char *)(this->TaskForceClass_field_0x4 + 36)); /*0x4c4fa4*/
  return byte_8A37A0; /*0x4c4fb1*/

}
} // namespace gamemd

// 0x6E8420
namespace gamemd {
char TaskForceClass::GetUnitCount(unsigned char *** aP1)
{

  int v3; // edi
  unsigned int *v4; // eax
  int v5; // ecx
  int v6; // eax
  TaskForceClass v8; // [esp+8h] [ebp-A8h] BYREF

  INIClass::ResetSection((INIClass *)aP1); /*0x6e8433*/
  if ( !(uint8_t)AbstractTypeClass::LoadFromINI((AbstractTypeClass *)this, aP1) ) /*0x6e843b*/
    return 0; /*0x6e84f7*/
  v3 = 0; /*0x6e844a*/
  this->TaskForceClass_field_0x9C[0] = 0; /*0x6e844f*/
  do /*0x6e84cb*/
  {
    sprintf(v8.__pad_8, "%d", v3); /*0x6e8460*/
    if ( INIClass::GetString( /*0x6e8486*/
           (INIClass *)aP1,
           (uint8_t *)&this->TaskForceClass_field_0x24,
           (uint8_t *)v8.__pad_8,
           &g_INI_DefaultBuffer,
           v8.__pad_28,
           128) > 0 )
    {
      v4 = TaskForceClass::ParseUnitCountAndType(&v8, v8.__pad_28); /*0x6e8491*/
      v5 = this->TaskForceClass_field_0x9C[0]; /*0x6e8496*/
      *(unsigned int *)&this->__pad_A0[8 * v5 + 4] = *v4; /*0x6e849e*/
      *((unsigned int *)this + 2 * v5 + 42) = v4[1]; /*0x6e84a8*/
      v6 = this->TaskForceClass_field_0x9C[0]; /*0x6e84af*/
      if ( *((unsigned int *)this + 2 * v6 + 42) ) /*0x6e84b5*/
        this->TaskForceClass_field_0x9C[0] = v6 + 1; /*0x6e84c1*/
    }
    ++v3; /*0x6e84c7*/
  }
  while ( v3 < 6 ); /*0x6e84cb*/
  this->TaskForceClass_field_0x98 = (AbstractClass *)INIClass::ReadInt_Overwrite( /*0x6e84e2*/
                                                       (bool *)aP1,
                                                       (uint8_t *)&this->TaskForceClass_field_0x24,
                                                       (uint8_t *)g_INI_Key_Group,
                                                       (int)this->TaskForceClass_field_0x98);
  return 1; /*0x6e84e9*/

}
} // namespace gamemd

// 0x6E8510
namespace gamemd {
char TaskForceClass::GetUnitType(char * a2)
{

  int v3; // esi
  ObjectTypeClass **p_TaskForceClass_field_0xA4; // ebx
  char *v5; // eax
  char Buffer[32]; // [esp+8h] [ebp-20h] BYREF

  if ( !AbstractTypeClass::WriteINI((AbstractTypeClass *)this, a2) ) /*0x6e851c*/
    return 0; /*0x6e85a5*/
  v3 = 0; /*0x6e8527*/
  p_TaskForceClass_field_0xA4 = (gamemd::ObjectTypeClass **)(&this->TaskForceClass_field_0xA4); /*0x6e8529*/
  do /*0x6e857d*/
  {
    sprintf(Buffer, "%d", v3); /*0x6e853a*/
    if ( v3 >= this->TaskForceClass_field_0x9C[0] ) /*0x6e854a*/
    {
      INIClass::ClearSection((int *)a2, (int)&this->TaskForceClass_field_0x24, (uint8_t *)Buffer); /*0x6e8571*/
    }
    else
    {
      v5 = (char *)(TaskForceClass::Check((TaskForceClass *)p_TaskForceClass_field_0xA4)); /*0x6e854e*/
      INIClass::SetString(a2, (uint8_t *)&this->TaskForceClass_field_0x24, Buffer, v5); /*0x6e855f*/
    }
    ++v3; /*0x6e8576*/
    p_TaskForceClass_field_0xA4 += 2; /*0x6e8577*/
  }
  while ( v3 < 6 ); /*0x6e857d*/
  INIClass::SetInt( /*0x6e8593*/
    a2,
    (uint8_t *)&this->TaskForceClass_field_0x24,
    g_INI_Key_Group,
    (int)this->TaskForceClass_field_0x98,
    0);
  return 1; /*0x6e859a*/

}
} // namespace gamemd

// 0x6E8680
namespace gamemd {
int TaskForceClass::SaveTaskForce(TechnoTypeClass * aP0, int * a1, int aP2)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)aP0->__pad_0, a1, aP2); /*0x6e868f*/
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

  result = AbstractClass::SaveLoad_Prefix_0(aP0, aP1); /*0x6e86ab*/
  if ( result >= 0 ) /*0x6e86b2*/
  {
    if ( aP0 ) /*0x6e86b6*/
    {
      AbstractTypeClass::Init((int)aP0, (int)&aP1); /*0x6e86bf*/
      *(unsigned int *)aP0->__pad_0 = (unsigned int)(&vt_TaskForceClass); /*0x6e86c4*/
      aP0->TaskForceClass_field_0x4 = (int)&vt_TaskForceClass; /*0x6e86ca*/
      *(unsigned int *)aP0->__pad_8 = (unsigned int)(&vt_TaskForceClass); /*0x6e86d1*/
      *(unsigned int *)&aP0->__pad_8[4] = (unsigned int)(&vt_TaskForceClass); /*0x6e86d8*/
    }
    v3 = (int *)(aP0 + 1); /*0x6e86e0*/
    v4 = 6; /*0x6e86e6*/
    do /*0x6e86fa*/
    {
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v3); /*0x6e86f1*/
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

  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x6e8759*/
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
