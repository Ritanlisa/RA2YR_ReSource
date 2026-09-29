// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/ScriptTypeClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/TaskForceClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x691D50
namespace gamemd {
int ScriptTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x691d56*/
    return -2147467261; /*0x691d58*/
  *a2 = 1123264071; /*0x691d66*/
  a2[1] = 298977161; /*0x691d6e*/
  a2[2] = 1610655148; /*0x691d77*/
  a2[3] = unk_7E97BC; /*0x691d80*/
  return 0; /*0x691d5d*/
}
} // namespace gamemd

// 0x691D90
namespace gamemd {
int ScriptTypeClass::LoadTypeData(AbstractTypeClass * aP0, int aP1)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(aP0, aP1); /*0x691d9b*/
  if ( result >= 0 ) /*0x691da2*/
  {
    if ( aP0 ) /*0x691da6*/
    {
      AbstractTypeClass::Init((int)aP0, (int)&aP1); /*0x691daf*/
      aP0->AbstractClass = (void*)&ScriptTypeClass_vftable; /*0x691db4*/
      *(void **)&aP0->vtable2 = (void*)&ScriptTypeClass_vftable; /*0x691dba*/
      *(void **)&aP0->vtable3 = (void*)&ScriptTypeClass_vftable; /*0x691dc1*/
      *(void **)&aP0->vtable4 = (void*)&ScriptTypeClass_vftable; /*0x691dc8*/
    }
    return 0; /*0x691dcf*/
  }
  return result; /*0x691dd1*/
}
} // namespace gamemd

// 0x691DE0
namespace gamemd {
int ScriptTypeClass::SaveToINI(TechnoTypeClass * aP0, int * a1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)aP0, a1, aP2); /*0x691def*/
  if ( result >= 0 ) /*0x691df6*/
    return 0; /*0x691df8*/
  return result; /*0x691dfa*/
}
} // namespace gamemd

// 0x691F70
namespace gamemd {
int ScriptTypeClass::GetTypeIdentifier()
{
  return 27; /*0x691f75*/
}
} // namespace gamemd

// 0x691F80
namespace gamemd {
int ScriptTypeClass::GetObjectSize()
{
  return 564; /*0x691f85*/
}
} // namespace gamemd

// 0x691FA0
namespace gamemd {
ScriptTypeClass * ScriptTypeClass::ddtor(char a2)
{
  int v3; // eax
  ScriptTypeClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->AbstractClass = (void*)&ScriptTypeClass_vftable; /*0x691fa6*/
  *(void **)&this->vtable2 = (void*)&ScriptTypeClass_vftable; /*0x691fac*/
  *(void **)&this->vtable3 = (void*)&ScriptTypeClass_vftable; /*0x691fb3*/
  *(void **)&this->vtable4 = (void*)&ScriptTypeClass_vftable; /*0x691fba*/
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, 1); /*0x691fc1*/
  v5 = this; /*0x691fd6*/
  v3 = (*(int (**)(int *, ScriptTypeClass **))(*((unsigned int *)((char *)&FootClass_Array + 4)) + 16))(&(unsigned int *)((char *)&FootClass_Array + 4), &v5); /*0x691fda*/
  if ( v3 != -1 && v3 < *(int *)&FootClass_Array.? ) /*0x691fea*/
  {
    --*(unsigned int *)&FootClass_Array.?; /*0x691fef*/
    for ( ; /*0x691ff5*/
          v3 < *(int *)&FootClass_Array.?;
          *(unsigned int *)(*((unsigned int *)((char *)&FootClass_Array + 5)) + 4 * v3 - 4) = *(unsigned int *)(*((unsigned int *)((char *)&FootClass_Array + 5)) + 4 * v3) )
    {
      ++v3; /*0x691ffd*/
    }
  }
  AbstractTypeClass::Dtor(); /*0x692011*/
  if ( (a2 & 1) != 0 ) /*0x69201b*/
    RA2_OPDEL(); /*0x69201e*/
  return &this->AbstractClass; /*0x692028*/
}
} // namespace gamemd

// 0x6E8340
namespace gamemd {
TaskForceClass * ScriptTypeClass::ReadINI(char * a1, int a2)
{
  int KeyCount; // ebx
  int i; // edi
  uint8_t *StringByIndex; // eax
  int result; // eax
  int v7; // ebx
  int j; // ebp
  int v9; // edi
  int v10; // [esp-4h] [ebp-38h]
  char Buffer[32]; // [esp+14h] [ebp-20h] BYREF

  KeyCount = (int)(INIClass::GetKeyCount(a1->__pad_0, g_INI_Key_TaskForces));
  for ( i = 0; i < KeyCount; ++i ) /*0x6e835d*/
  {
    StringByIndex = (uint8_t *)INIClass::GetStringByIndex(a1->__pad_0, g_INI_Key_TaskForces, i); /*0x6e8367*/
    INIClass::GetString(a1, g_INI_Key_TaskForces, StringByIndex, &g_INI_DefaultBuffer, Buffer, 32); /*0x6e8380*/
    INIClass::ClearSection((int *)a1->__pad_0, (int)Buffer, 0); /*0x6e838e*/
  }
  INIClass::ClearSection((int *)a1->__pad_0, (int)g_INI_Key_TaskForces, 0); /*0x6e83a1*/
  result = dword_A8E8E0; /*0x6e83a6*/
  v7 = 0; /*0x6e83ab*/
  for ( j = 0; j < dword_A8E8E0; ++j ) /*0x6e83b1*/
  {
    v9 = *((unsigned int *)dword_A8E8D4 + j); /*0x6e83bc*/
    if ( *(unsigned int *)(v9 + 160) == a2 ) /*0x6e83c5*/
    {
      v10 = v7++; /*0x6e83cd*/
      sprintf(Buffer, "%d", v10); /*0x6e83d5*/
      String::Trim(Buffer); /*0x6e83e1*/
      INIClass::SetString(a1->__pad_0, g_INI_Key_TaskForces, Buffer, (char *)(v9 + 36)); /*0x6e83f6*/
      (*(void (**)(int, INIClass *))(*(unsigned int *)v9 + 104))(v9, a1); /*0x6e8400*/
    }
    result = dword_A8E8E0; /*0x6e8403*/
  }
  return (gamemd::TaskForceClass *)(result);
}
} // namespace gamemd
