// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/TagTypeClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/TagClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/TaskForceClass_e4.hpp"

// 0x6E5B60
namespace gamemd {
AbstractTypeClass * * TagTypeClass::Construct(ObjectClass * aP1)
{
  TagTypeClass * v3;
  TagTypeClass * v4;
  char Destination[48]; // [esp+8h] [ebp-34h] BYREF
  char v7; // [esp+38h] [ebp-4h]

  AbstractTypeClass::Constructor(aP1); /*0x6e5b6c*/
  this->q098 = -1; /*0x6e5b78*/
  this->q09C = 0; /*0x6e5b82*/
  this->q0A0 = 0; /*0x6e5b88*/
  if ( this == (char *)-36 ) /*0x6e5baa*/
  {
    Destination[0] = 0; /*0x6e5bac*/
  }
  else
  {
    strncpy(Destination, &this->u32_90, 0x30u); /*0x6e5bba*/
    v7 = 0; /*0x6e5bc2*/
  }
  if ( Destination != &this->persistence0 ) /*0x6e5bd0*/
  {
    qmemcpy(&this->u32_190, Destination, 0x30u); /*0x6e5bdc*/
    *(&this->q0388) = v7; /*0x6e5bde*/
  }
  this->q098 = g_MultiplayerCleanup; /*0x6e5be6*/
  if ( g_MultiplayerCleanup < dword_B0E788 /*0x6e5c1e*/
    || (byte_B0E78D || !dword_B0E788)
    && dword_B0E794 > 0
    && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(dword_B0E780 + 8))(
         &dword_B0E780,
         dword_B0E788 + dword_B0E794,
         0) )
  {
    v3 = g_MultiplayerCleanup++; /*0x6e5c2b*/
    *((unsigned int *)dword_B0E784 + v3) = this; /*0x6e5c3a*/
  }
  if ( g_AnimManager < g_AnimTypePool /*0x6e5c71*/
    || (g_AnimPoolLocked || !g_AnimTypePool)
    && g_AnimManagerConfig > 0
    && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(g_AnimPoolManager + 8))(
         &g_AnimPoolManager,
         g_AnimTypePool + g_AnimManagerConfig,
         0) )
  {
    v4 = g_AnimManager++; /*0x6e5c7e*/
    *((unsigned int *)g_AnimPoolCount + v4) = this; /*0x6e5c8d*/
  }
  return this; /*0x6e5c92*/
}
}
// 0x6E5CA0
namespace gamemd {
AbstractClass * * TagTypeClass::CleanupMembers()
{
  unsigned int *v2; // ecx
  unsigned int *v3; // esi
  int v4; // esi
  unsigned int v5;
  unsigned int *v6; // ecx
  int v7; // eax
  int v8; // eax

  AbstractClass::AnnounceExpiredPointer(1); /*0x6e5cc2*/
  v2 = *(unsigned int **)(&this->q0400); /*0x6e5cc7*/
  this->q0A0 = 0; /*0x6e5ccd*/
  if ( v2 ) /*0x6e5cd9*/
  {
    do /*0x6e5cfa*/
    {
      v3 = (unsigned int *)v2[42]; /*0x6e5cdb*/
      v2[42] = 0; /*0x6e5ce1*/
      if ( v2 ) /*0x6e5ced*/
        (*(void (__thiscall **)(unsigned int *, int))(*v2 + 32))(v2, 1); /*0x6e5cf3*/
      v2 = v3; /*0x6e5cf8*/
    }
    while ( v3 ); /*0x6e5cfa*/
  }
  v4 = 0; /*0x6e5d01*/
  if ( g_GameObjectCleanup > 0 ) /*0x6e5d05*/
  {
    v5 = g_TagClassCount; /*0x6e5d07*/
    do /*0x6e5d2e*/
    {
      v6 = (unsigned int *)v5[v4]; /*0x6e5d0c*/
      if ( v6[9] == this ) /*0x6e5d12*/
      {
        if ( v6 ) /*0x6e5d16*/
        {
          (*(void (__thiscall **)(unsigned int *, int))(*v6 + 32))(v6, 1); /*0x6e5d1c*/
          v5 = g_TagClassCount; /*0x6e5d1f*/
        }
        --v4; /*0x6e5d24*/
      }
      ++v4; /*0x6e5d2b*/
    }
    while ( v4 < g_GameObjectCleanup ); /*0x6e5d2e*/
  }
  v7 = (*(int (__thiscall **)(int *, int *))(g_AnimPoolManager + 16))(&g_AnimPoolManager, &this); /*0x6e5d44*/
  if ( v7 != -1 && v7 < g_AnimManager && v7 < --g_AnimManager ) /*0x6e5d5f*/
  {
    do /*0x6e5d77*/
    {
      ++v7; /*0x6e5d67*/
      *((unsigned int *)g_AnimPoolCount + v7 - 1) = *((unsigned int *)g_AnimPoolCount + v7); /*0x6e5d6b*/
    }
    while ( v7 < g_AnimManager ); /*0x6e5d77*/
  }
  v8 = (*(int (__thiscall **)(int *, int *))(dword_B0E780 + 16))(&dword_B0E780, &this); /*0x6e5d8d*/
  if ( v8 != -1 && v8 < g_MultiplayerCleanup && v8 < --g_MultiplayerCleanup ) /*0x6e5da8*/
  {
    do /*0x6e5dc0*/
    {
      ++v8; /*0x6e5db0*/
      *((unsigned int *)dword_B0E784 + v8 - 1) = *((unsigned int *)dword_B0E784 + v8); /*0x6e5db4*/
    }
    while ( v8 < g_MultiplayerCleanup ); /*0x6e5dc0*/
  }
  return AbstractTypeClass::Dtor(); /*0x6e5dc9*/
}
}
// 0x6E5E50
namespace gamemd {
int TagTypeClass::GetEvent(int a2, int a3)
{
  int result; // eax

  result = *(&this->uniqueId0); /*0x6e5e50*/
  if ( result == a2 ) /*0x6e5e5c*/
  {
    result = result->q0A8; /*0x6e5e5e*/
    *(&this->uniqueId0) = result; /*0x6e5e64*/
  }
  return result; /*0x6e5e6a*/
}
}
// 0x6E6080
namespace gamemd {
void* TagTypeClass::GetAction(unsigned char *** a2)
{
  char *v3; // eax
  char *v4; // eax
  char Destination[48]; // [esp+8h] [ebp-B4h] BYREF
  char v7; // [esp+38h] [ebp-84h]
  char String[128]; // [esp+3Ch] [ebp-80h] BYREF

  INIClass::ResetSection(a2); /*0x6e6093*/
  if ( !INIClass::GetString( /*0x6e60b4*/
          a2,
          (uint8_t *)aTags,
          (uint8_t *)(&this->vtable46),
          &g_INI_DefaultBuffer,
          String,
          128) )
    return 0; /*0x6e6151*/
  strtok(String, Delimiter); /*0x6e60cb*/
  this->q09C = atoi(String); /*0x6e60e1*/
  v3 = strtok(0, Delimiter); /*0x6e60e7*/
  if ( v3 ) /*0x6e60f1*/
  {
    strncpy(Destination, v3, 0x30u); /*0x6e6101*/
    v7 = 0; /*0x6e6109*/
  }
  else
  {
    Destination[0] = 0; /*0x6e60f3*/
  }
  if ( Destination != (char *)(&this->persistence0) ) /*0x6e6118*/
  {
    qmemcpy((void *)(&this->persistence0), Destination, 0x30u); /*0x6e6123*/
    this->q094 = v7; /*0x6e6125*/
  }
  v4 = strtok(0, Delimiter); /*0x6e612d*/
  this->q0A0 = TagTypeClass::FindOrCreateTriggerType(v4); /*0x6e613d*/
  return 1; /*0x6e6143*/
}
}
// 0x6E6160
namespace gamemd {
int TagTypeClass::GetParameter(char * a2)
{
  void * v3;
  CHAR Source[128]; // [esp+4h] [ebp-80h] BYREF

  v3 = this->q0A0; /*0x6e6169*/
  if ( v3 ) /*0x6e6171*/
    wsprintfA(Source, "%d,%s,%s", this->q09C, (const char *)(&this->persistence0), (const char *)(v3 + 36)); /*0x6e61b4*/
  else
    wsprintfA(Source, "%s,<none>", (const char *)(&this->persistence0)); /*0x6e6181*/
  INIClass::SetString(a2, (uint8_t *)aTags, (char *)(&this->vtable46), Source); /*0x6e6199*/
  return 1; /*0x6e61db*/
}
}
// 0x6E6310
namespace gamemd {
AbstractTypeClass * * TagTypeClass::FindOrCreate()
{
  int v2; // esi
  char *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x6e632c*/
    return 0; /*0x6e638f*/
  v2 = 0; /*0x6e633d*/
  if ( g_MultiplayerCleanup <= 0 ) /*0x6e6341*/
  {
  LABEL_6:
    v3 = (char *)operator new(0xA4u); /*0x6e6366*/
    if ( v3 ) /*0x6e6375*/
      return TagTypeClass::Construct(v3, Source); /*0x6e6381*/
    return 0; /*0x6e6375*/
  }
  while ( _strcmpi((const void *)(*((unsigned int *)dword_B0E784 + v2) + 36), Source) ) /*0x6e635a*/
  {
    if ( ++v2 >= g_MultiplayerCleanup ) /*0x6e6364*/
      goto LABEL_6; /*0x6e6364*/
  }
  return (char *)*((unsigned int *)dword_B0E784 + v2); /*0x6e637f*/
}
}
// 0x6E63E0
namespace gamemd {
int TagTypeClass::PowerDrainUpdate(int * a2)
{
  AbstractTypeClass::ProcessPower(a2); /*0x6e63e9*/
  return Power::TimerProcess(this->u32_270); /*0x6e63fc*/
}
}
// 0x6E64B0
namespace gamemd {
int TagTypeClass::GetAuxField()
{
  return this->q098; /*0x6e64b6*/
}
}
// 0x727AA0
namespace gamemd {
TriggerTypeClass * * TagTypeClass::FindOrCreateTriggerType()
{
  int v2; // esi
  unsigned int *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x727abc*/
    return 0; /*0x727b1f*/
  v2 = 0; /*0x727acd*/
  if ( g_MultiplayerLogBuffer <= 0 ) /*0x727ad1*/
  {
  LABEL_6:
    v3 = operator new(0xB4u); /*0x727af6*/
    if ( v3 ) /*0x727b05*/
      return TriggerTypeClass::Construct(v3, Source); /*0x727b11*/
    return 0; /*0x727b05*/
  }
  while ( _strcmpi((const void *)(*((unsigned int *)dword_8B417C + v2) + 36), Source) ) /*0x727aea*/
  {
    if ( ++v2 >= g_MultiplayerLogBuffer ) /*0x727af4*/
      goto LABEL_6; /*0x727af4*/
  }
  return (unsigned int *)*((unsigned int *)dword_8B417C + v2); /*0x727b0f*/
}
}
// 0x6E63A0
namespace gamemd {
int TagTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x6e63a6*/
    return -2147467261; /*0x6e63a8*/
  *a2 = 1425466419; /*0x6e63b6*/
  a2[1] = 298977773; /*0x6e63be*/
  a2[2] = 1610655148; /*0x6e63c7*/
  a2[3] = -1252326136; /*0x6e63d0*/
  return 0; /*0x6e63ad*/
}
} // namespace gamemd

// 0x6E6410
namespace gamemd {
int TagTypeClass::LoadTypeData(AbstractTypeClass * aP0, int aP1)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(aP0, aP1); /*0x6e641b*/
  if ( result >= 0 ) /*0x6e6422*/
  {
    if ( aP0 ) /*0x6e6426*/
    {
      AbstractTypeClass::Init((int)aP0, (int)&aP1); /*0x6e642f*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 40); /*0x6e645b*/
    return 0; /*0x6e6460*/
  }
  return result; /*0x6e6462*/
}
} // namespace gamemd

// 0x6E6470
namespace gamemd {
int TagTypeClass::SaveToINI(TechnoTypeClass * aP0, int * a1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix(aP0, a1, aP2); /*0x6e647f*/
  if ( result >= 0 ) /*0x6e6486*/
    return 0; /*0x6e6488*/
  return result; /*0x6e648a*/
}
} // namespace gamemd

// 0x6E6490
namespace gamemd {
int TagTypeClass::GetTypeIdentifier()
{
  return 45; /*0x6e6495*/
}
} // namespace gamemd

// 0x6E64A0
namespace gamemd {
int TagTypeClass::GetObjectSize()
{
  return 164; /*0x6e64a5*/
}
} // namespace gamemd

// 0x6E64C0
namespace gamemd {
TagTypeClass * TagTypeClass::ddtor(char a2)
{
  TagTypeClass::CleanupMembers(); /*0x6e64c3*/
  if ( (a2 & 1) != 0 ) /*0x6e64cd*/
    RA2_OPDEL(); /*0x6e64d0*/
  return this; /*0x6e64da*/
}
} // namespace gamemd
