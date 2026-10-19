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
#include "e4/classes/ObjectPtr_e4.hpp"
// [w16g4] C3861 supply (raw call-form evidence)
namespace gamemd { int sub_412610(int p0); }  // x4:signals@0x412610

// 0x4C4EF0
namespace gamemd {  // G42.18 ns repair
unsigned int * TaskForceClass::ParseUnitCountAndType(char *Buffer)
{

  int ExitCellByName; // eax
  int v4; // edx
  int Index; // eax
  int v7; // edx
  int v8; // eax
  char *v9; // [esp-10h] [ebp-54h]
  TypeClass v10; // [esp+4h] [ebp-40h] BYREF

  v9 = Buffer; /*0x4c4f09*/
  *(unsigned int *)this->__pad_0 = 0; /*0x4c4f0a*/
  this->TaskForceClass_field_0x4 = 0; /*0x4c4f10*/
  sscanf(v9, "%d,%s", &Buffer, &v10); /*0x4c4f17*/
  *(unsigned int *)this->__pad_0 = Buffer; /*0x4c4f27*/
  ExitCellByName = Factory::FindExitCellByName((Factory *)&v10); /*0x4c4f29*/
  if ( ExitCellByName == -1 ) /*0x4c4f31*/
  {
    Index = BuildingTypeClass::FindIndex((BuildingTypeClass *)&v10); /*0x4c4f4c*/
    if ( Index == -1 ) /*0x4c4f54*/
    {
      v8 = TypeClass::FindByName(&v10); /*0x4c4f6f*/
      if ( v8 != -1 ) /*0x4c4f77*/
        this->TaskForceClass_field_0x4 = *((unsigned int *)dword_A8B21C + v8); /*0x4c4f82*/
      return this->__pad_0; /*0x4c4f85*/
    }
    else
    {
      v7 = *((unsigned int *)MEMORY[0xA83CE4] + Index); /*0x4c4f5c*/
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
}  // G42.18 ns repair
// 0x6E7E80
namespace gamemd {
int TaskForceClass::Construct(char *aP1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8, void *a9)
{


  AbstractTypeClass::Constructor((int *)this->__pad_0, aP1); /*0x6e7e8a*/
  this->ptr_98 = (AbstractClass *)-1; /*0x6e7e8f*/
  this->Coord_9C = 0; /*0x6e7e99*/
  *(unsigned int *)this->q0A0 = 0; /*0x6e7ea3*/
  /* X11: ptr_0 install elided (implicit via TaskForceClass virtuals 0x6e7ead) */
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7F4654) */  /*0x6e7eb3*/
  /* X11: ptr_0 install elided (implicit via TaskForceClass virtuals 0x6e7eba) */
  /* X11: ptr_0 install elided (implicit via TaskForceClass virtuals 0x6e7ec1) */
  if ( dword_A8E8E0 < dword_A8E8D8 /*0x6e7f05*/
    || (byte_A8E8DD || !dword_A8E8D8)
    && dword_A8E8E4 > 0
    && (*(unsigned __int8 (**)(unsigned int *, int, unsigned int))(dword_A8E8D0 + 8))(
         &dword_A8E8D0,
         dword_A8E8D8 + dword_A8E8E4,
         0) )
  {
    int v3; // eax
    v3 = dword_A8E8E0++; /*0x6e7f12*/
    *((unsigned int *)dword_A8E8D4 + v3) = (unsigned int)(this); /*0x6e7f21*/
  }
  ObjectTypeClass **p_TaskForceClass_field_0xA4 = &this->q0A4; // eax /*0x6e7f28*/
  int v5 = 6; // ecx /*0x6e7f2a*/
  do /*0x6e7f38*/
  {
    *p_TaskForceClass_field_0xA4 = 0; /*0x6e7f2f*/
    p_TaskForceClass_field_0xA4[1] = 0; /*0x6e7f31*/
    p_TaskForceClass_field_0xA4 += 2; /*0x6e7f34*/
    --v5; /*0x6e7f37*/
  }
  while ( v5 ); /*0x6e7f38*/
  return (int)(this->ptr_0); /*0x6e7f3c*/

}
}
// 0x6E8220
namespace gamemd {
AbstractClass * * TaskForceClass::LoadFromINI(char * a1, int a2)
{

  int result; // eax
  int v5; // esi
  int v6; // ebx
  unsigned __int8 *StringByIndex; // eax
  int v8; // esi
  TaskForceClass *v9; // eax
  unsigned int *v10; // esi
  int v11; // eax
  int v12; // [esp+10h] [ebp-1Ch]
  char Source[24]; // [esp+14h] [ebp-18h] BYREF

  result = INIClass::GetKeyCount(a1->__pad_0, g_INI_Key_TaskForces); /*0x6e8230*/
  v5 = result; /*0x6e8235*/
  v6 = 0; /*0x6e8237*/
  v12 = result; /*0x6e823b*/
  if ( result > 0 ) /*0x6e823f*/
  {
    while ( 1 ) /*0x6e824d*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(a1->__pad_0, g_INI_Key_TaskForces, v6); /*0x6e824d*/
      result = (a1)->GetString(g_INI_Key_TaskForces, StringByIndex, &g_INI_DefaultBuffer, Source, 24); /*0x6e8266*/
      if ( result > 0 ) /*0x6e826d*/
        break; /*0x6e826d*/
      LABEL_13:
      if ( ++v6 >= v5 ) /*0x6e832a*/
        return (gamemd::AbstractClass **)(result); /*0x6e832a*/
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
    LABEL_8:
    v9 = (TaskForceClass *)__2_YAPAXI_Z(0xD4u); /*0x6e82d7*/
    if ( v9 ) /*0x6e82e1*/
      v10 = (unsigned int *)(TaskForceClass::Construct(v9, Source)); /*0x6e82ef*/
    else
      LABEL_11:
    v10 = 0; /*0x6e82fe*/
    LABEL_12:
    v11 = sub_412610(Source); /*0x6e8300*/
    SwizzleManagerClass::Here_I_Am((int)&SwizzleManagerClass_Instance, v11, (int)v10); /*0x6e8310*/
    result = v10->GetUnitCount(a1); /*0x6e831a*/
    v10->q0A0 = a2; /*0x6e831d*/
    v5 = v12; /*0x6e8323*/
    goto LABEL_13; /*0x6e8323*/
  }
  return (gamemd::AbstractClass **)(result); /*0x6e8330*/

}
}
// 0x6E87F0
namespace gamemd {
void * TaskForceClass::ExecuteAction(void ** Block, char a2)
{

  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7F4654) */  /*0x6e87f6*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7F4654) */  /*0x6e87fc*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7F4654) */  /*0x6e8803*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7F4654) */  /*0x6e880a*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x6e8811*/
  TaskForceClass *v5; // [esp+4h] [ebp-4h] BYREF
  v5 = (gamemd::TaskForceClass *)(Block); /*0x6e8826*/
  int v3; // eax
  v3 = (int)((gamemd::TaskForceClass *)((*(int (**)(unsigned int *, TaskForceClass **))(dword_A8E8D0 + 16))(&dword_A8E8D0, &v5))); /*0x6e882a*/
  if ( v3 != -1 && v3 < dword_A8E8E0 && v3 < --dword_A8E8E0 ) /*0x6e8845*/
  {
    do /*0x6e885d*/
    {
      ++v3; /*0x6e884d*/
      *((unsigned int *)dword_A8E8D4 + v3 - 1) = *((unsigned int *)dword_A8E8D4 + v3); /*0x6e8851*/
    }
    while ( v3 < dword_A8E8E0 ); /*0x6e885d*/
  }
  ((AbstractTypeClass *)Block)->Dtor(); /*0x6e8861*/
  if ( (a2 & 1) != 0 ) /*0x6e886b*/
    operator delete((Block)); /*0x6e886e*/
  return Block; /*0x6e8878*/
}
}
// 0x4C4F90
namespace gamemd {
int TaskForceClass::Check(void *a1, void *a2, void *a3)
{

  sprintf(byte_8A37A0, "%d,%s", *(unsigned int *)this->__pad_0, (const char *)(this->TaskForceClass_field_0x4 + 36)); /*0x4c4fa4*/
  return byte_8A37A0; /*0x4c4fb1*/

}
} // namespace gamemd

// 0x6E8420
namespace gamemd {
char TaskForceClass::GetUnitCount(unsigned char *** aP1)
{

  TaskForceClass v8; // [esp+8h] [ebp-A8h] BYREF

  INIClass::ResetSection((INIClass *)aP1); /*0x6e8433*/
  if ( !(unsigned __int8)AbstractTypeClass::LoadFromINI((AbstractTypeClass *)this, aP1) ) /*0x6e843b*/
    return 0; /*0x6e84f7*/
  int v3 = 0; // edi /*0x6e844a*/
  this->Coord_9C = 0; /*0x6e844f*/
  do /*0x6e84cb*/
  {
    sprintf(v8.ptr_8, "%d", v3); /*0x6e8460*/
    if ( (/*0x6e8486*/ (INIClass *)aP1)->GetString((unsigned __int8 *)&this->q024, (unsigned __int8 *)v8.ptr_8, &g_INI_DefaultBuffer, v8.q028, 128) > 0 )
    {
      unsigned int *v4; // eax
      v4 = (&v8)->ParseUnitCountAndType(v8.q028); /*0x6e8491*/
      int v5 = this->Coord_9C; // ecx /*0x6e8496*/
      *(unsigned int *)&this->__pad_A0[8 * v5 + 4] = *v4; /*0x6e849e*/
      *(&this->ptr_8 * v5 + 42) = v4->ptr_4; /*0x6e84a8*/
      int v6 = this->Coord_9C; // eax /*0x6e84af*/
      if ( *(&this->ptr_8 * v6 + 42) ) /*0x6e84b5*/
        this->Coord_9C = v6 + 1; /*0x6e84c1*/
    }
    ++v3; /*0x6e84c7*/
  }
  while ( v3 < 6 ); /*0x6e84cb*/
  this->ptr_98 = (AbstractClass *)INIClass::ReadInt_Overwrite( /*0x6e84e2*/
                                                       (bool *)aP1,
                                                       (unsigned __int8 *)&this->q024,
                                                       (unsigned __int8 *)g_INI_Key_Group,
                                                       (int)this->ptr_98);
  return 1; /*0x6e84e9*/

}
} // namespace gamemd

// 0x6E8510
namespace gamemd {
char TaskForceClass::GetUnitType(char * a2)
{


  if ( !AbstractTypeClass::WriteINI((AbstractTypeClass *)this, a2) ) /*0x6e851c*/
    return 0; /*0x6e85a5*/
  int v3 = 0; // esi /*0x6e8527*/
  ObjectTypeClass **p_TaskForceClass_field_0xA4 = &this->q0A4; // ebx /*0x6e8529*/
  do /*0x6e857d*/
  {
    char Buffer[32]; // [esp+8h] [ebp-20h] BYREF
    sprintf(Buffer, "%d", v3); /*0x6e853a*/
    if ( v3 >= this->Coord_9C ) /*0x6e854a*/
    {
      INIClass::ClearSection((int *)a2, (int)&this->q024, (unsigned __int8 *)Buffer); /*0x6e8571*/
    }
    else
    {
      char *v5; // eax
      v5 = (char *)(TaskForceClass::Check((TaskForceClass *)p_TaskForceClass_field_0xA4)); /*0x6e854e*/
      INIClass::SetString(a2, (unsigned __int8 *)&this->q024, Buffer, v5); /*0x6e855f*/
    }
    ++v3; /*0x6e8576*/
    p_TaskForceClass_field_0xA4 += 2; /*0x6e8577*/
  }
  while ( v3 < 6 ); /*0x6e857d*/
  INIClass::SetInt( /*0x6e8593*/
    a2,
    (unsigned __int8 *)&this->q024,
    g_INI_Key_Group,
    (int)this->ptr_98,
    0);
  return 1; /*0x6e859a*/

}
} // namespace gamemd

// 0x6E8680
namespace gamemd {
int TaskForceClass::SaveTaskForce(TechnoTypeClass * aP0, int * a1, int aP2)
{

  int result; // eax
  result = AbstractClass::SaveLoad_Prefix((int *)aP0->ptr_0, a1, aP2); /*0x6e868f*/
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
  result = AbstractClass::SaveLoad_Prefix_0(aP0, aP1); /*0x6e86ab*/
  if ( result >= 0 ) /*0x6e86b2*/
  {
    if ( aP0 ) /*0x6e86b6*/
    {
      AbstractTypeClass::Init((int)aP0, (int)&aP1); /*0x6e86bf*/
      /* X11: ptr_0 install elided (implicit via TaskForceClass virtuals 0x6e86c4) */
      /* X11: ptr_0 install elided (implicit via TaskForceClass virtuals 0x6e86ca) */
      /* X11: ptr_0 install elided (implicit via TaskForceClass virtuals 0x6e86d1) */
      /* X11: ptr_0 install elided (implicit via TaskForceClass virtuals 0x6e86d8) */
    }
    int *v3; // esi
    v3 = (int *)(aP0 + 1); /*0x6e86e0*/
    int v4 = 6; // edi /*0x6e86e6*/
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
  Power::TimerProcess((int)this->ptr_98); /*0x6e8767*/
  return Power::TimerProcess(this->Coord_9C); /*0x6e877a*/

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
