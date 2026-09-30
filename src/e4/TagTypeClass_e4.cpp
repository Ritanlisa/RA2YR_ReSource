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
#include "e4/classes/TriggerClass_e4.hpp"
#include "e4/classes/Factory_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/TriggerTypeClass_e4.hpp"

// 0x6E5B60
namespace gamemd {
AbstractTypeClass * TagTypeClass::Construct(ObjectClass * aP1)
{

  AbstractTypeClass *v3; // eax
  int v4; // eax
  char Destination[48]; // [esp+8h] [ebp-34h] BYREF
  char v7; // [esp+38h] [ebp-4h]

  AbstractTypeClass::Constructor((int)this, (AbstractClass *)aP1); /*0x6e5b6c*/
  *((unsigned int *)this + 38) = -1; /*0x6e5b78*/
  *((unsigned int *)this + 39) = 0; /*0x6e5b82*/
  *((unsigned int *)this + 40) = 0; /*0x6e5b88*/
  *(unsigned int *)this = &vt_TagTypeClass; /*0x6e5b8e*/
  *((unsigned int *)this + 1) = &vt_TagTypeClass; /*0x6e5b95*/
  *((unsigned int *)this + 2) = &vt_TagTypeClass; /*0x6e5b9c*/
  *((unsigned int *)this + 3) = &vt_TagTypeClass; /*0x6e5ba3*/
  if ( this == (char *)-36 ) /*0x6e5baa*/
  {
    Destination[0] = 0; /*0x6e5bac*/
  }
  else
  {
    strncpy(Destination, (unsigned char *)this + 36, 0x30u); /*0x6e5bba*/
    v7 = 0; /*0x6e5bc2*/
  }
  if ( Destination != (unsigned char *)this + 100 ) /*0x6e5bd0*/
  {
    qmemcpy((unsigned char *)this + 100, Destination, 0x30u); /*0x6e5bdc*/
    *((unsigned char *)this + 148) = v7; /*0x6e5bde*/
  }
  *((unsigned int *)this + 38) = *(unsigned int *)&g_abs_B077F8; /*0x6e5be6*/
  if ( *(int *)&g_abs_B077F8 < *(int *)&g_abs_B077F8 /*0x6e5c1e*/
    || (g_abs_B077F8 || !*(unsigned int *)&g_abs_B077F8)
    && *(int *)&g_abs_B077F8 > 0
    && (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)&g_abs_B077F8 + 8))(
         &g_abs_B077F8,
         *(unsigned int *)&g_abs_B077F8 + *(unsigned int *)&g_abs_B077F8,
         0) )
  {
    v3 = (AbstractTypeClass *)(*(unsigned int *)&g_abs_B077F8)++; /*0x6e5c2b*/
    *(unsigned int *)(*(unsigned int *)&g_abs_B077F8 + 4 * (unsigned int)v3) = this; /*0x6e5c3a*/
  }
  if ( *(int *)&g_abs_B077F8 < *(int *)&g_abs_B077F8 /*0x6e5c71*/
    || (g_abs_B077F8 || !*(unsigned int *)&g_abs_B077F8)
    && *(int *)&g_abs_B077F8 > 0
    && (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)&g_abs_B077F8 + 8))(
         &g_abs_B077F8,
         *(unsigned int *)&g_abs_B077F8 + *(unsigned int *)&g_abs_B077F8,
         0) )
  {
    v4 = (*(unsigned int *)&g_abs_B077F8)++; /*0x6e5c7e*/
    *(unsigned int *)(*(unsigned int *)&g_abs_B077F8 + 4 * v4) = this; /*0x6e5c8d*/
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
  TagTypeClass * v10;

  *(unsigned int *)this = &vt_TagTypeClass; /*0x6e5ca7*/
  *((unsigned int *)this + 1) = &vt_TagTypeClass; /*0x6e5cad*/
  *((unsigned int *)this + 2) = &vt_TagTypeClass; /*0x6e5cb4*/
  *((unsigned int *)this + 3) = &vt_TagTypeClass; /*0x6e5cbb*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x6e5cc2*/
  v2 = *(unsigned int **)((char *)this + 160); /*0x6e5cc7*/
  *((unsigned int *)this + 40) = 0; /*0x6e5ccd*/
  if ( v2 ) /*0x6e5cd9*/
  {
    do /*0x6e5cfa*/
    {
      v3 = (unsigned int *)v2[42]; /*0x6e5cdb*/
      v2[42] = 0; /*0x6e5ce1*/
      if ( v2 ) /*0x6e5ced*/
        (*(void (**)(unsigned int *, int))(*v2 + 32))(v2, 1); /*0x6e5cf3*/
      v2 = v3; /*0x6e5cf8*/
    }
    while ( v3 ); /*0x6e5cfa*/
  }
  v4 = 0; /*0x6e5d01*/
  if ( g_abs_B0E730 > (unsigned char [1])((unsigned char [1]))((unsigned char [1]))(0) ) /*0x6e5d05*/
  {
    v5 = (unsigned int *)(g_abs_B0E724);
    do /*0x6e5d2e*/
    {
      v6 = (unsigned int *)v5[v4]; /*0x6e5d0c*/
      if ( v6[9] == (unsigned int)(this) ) /*0x6e5d12*/
      {
        if ( v6 ) /*0x6e5d16*/
        {
          (*(void (**)(unsigned int *, int))(*v6 + 32))(v6, 1); /*0x6e5d1c*/
          v5 = g_abs_B0E724; /*0x6e5d1f*/
        }
        --v4; /*0x6e5d24*/
      }
      ++v4; /*0x6e5d2b*/
    }
    while ( v4 < (int)((int))((int))(g_abs_B0E730) ); /*0x6e5d2e*/
  }
  v10 = (gamemd::TagTypeClass *)((int)(this));
  v7 = (*(int (**)(int *, int *))(g_abs_B0F670 + 16))(&g_abs_B0F670, &v10); /*0x6e5d44*/
  if ( v7 != -1 && v7 < (int)((int))((int))(g_abs_B0F680) && v7 < --g_abs_B0F680 ) /*0x6e5d5f*/
  {
    do /*0x6e5d77*/
    {
      ++v7; /*0x6e5d67*/
      *((unsigned int *)g_abs_B0F674 + v7 - 1) = *((unsigned int *)g_abs_B0F674 + v7); /*0x6e5d6b*/
    }
    while ( v7 < (int)((int))((int))(g_abs_B0F680) ); /*0x6e5d77*/
  }
  v10 = this; /*0x6e5d89*/
  v8 = (*(int (**)(int *, int *))(g_abs_B0E780 + 16))(&g_abs_B0E780, &v10); /*0x6e5d8d*/
  if ( v8 != -1 && v8 < (int)((int))((int))(g_abs_B0E790) && v8 < --g_abs_B0E790 ) /*0x6e5da8*/
  {
    do /*0x6e5dc0*/
    {
      ++v8; /*0x6e5db0*/
      *((unsigned int *)g_abs_B0E784 + v8 - 1) = *((unsigned int *)g_abs_B0E784 + v8); /*0x6e5db4*/
    }
    while ( v8 < (int)((int))((int))(g_abs_B0E790) ); /*0x6e5dc0*/
  }
  return (gamemd::AbstractClass **)(((AbstractTypeClass *)((unsigned int *)this))->Dtor());

}
}
// 0x6E5E50
namespace gamemd {
int TagTypeClass::GetEvent(int a2, int a3)
{

  int result; // eax

  result = *((unsigned int *)this + 40); /*0x6e5e50*/
  if ( result == a2 ) /*0x6e5e5c*/
  {
    result = *(unsigned int *)(result + 168); /*0x6e5e5e*/
    *((unsigned int *)this + 40) = result; /*0x6e5e64*/
  }
  return result; /*0x6e5e6a*/

}
}
// 0x6E6080
namespace gamemd {
void* TagTypeClass::GetAction(unsigned char *** a2)
{

  char *v3; // eax
  TriggerTypeClass ** v4;
  char Destination[48]; // [esp+8h] [ebp-B4h] BYREF
  char v7; // [esp+38h] [ebp-84h]
  char String[128]; // [esp+3Ch] [ebp-80h] BYREF

  INIClass::ResetSection(a2); /*0x6e6093*/
  if ( !INIClass::GetString( /*0x6e60b4*/
          a2,
          (uint8_t *)g_abs_842C3C,
          (uint8_t *)((char *)this + 36),
          &g_abs_889F64,
          String,
          128) )
    return 0; /*0x6e6151*/
  strtok(String, g_abs_817F70); /*0x6e60cb*/
  *((unsigned int *)this + 39) = atoi(String); /*0x6e60e1*/
  v3 = strtok(0, g_abs_817F70); /*0x6e60e7*/
  if ( v3 ) /*0x6e60f1*/
  {
    strncpy(Destination, v3, 0x30u); /*0x6e6101*/
    v7 = 0; /*0x6e6109*/
  }
  else
  {
    Destination[0] = 0; /*0x6e60f3*/
  }
  if ( Destination != (char *)((char *)this + 100) ) /*0x6e6118*/
  {
    qmemcpy((void *)((char *)this + 100), Destination, 0x30u); /*0x6e6123*/
    *((unsigned char *)this + 148) = v7; /*0x6e6125*/
  }
  v4 = (gamemd::TriggerTypeClass **)((void *)(strtok(0, g_abs_817F70)));
  *((unsigned int *)this + 40) = TagTypeClass::FindOrCreateTriggerType(v4); /*0x6e613d*/
  return 1; /*0x6e6143*/

}
}
// 0x6E6160
namespace gamemd {
int TagTypeClass::GetParameter(char * a2)
{

  int v3; // eax
  CHAR Source[128]; // [esp+4h] [ebp-80h] BYREF

  v3 = *((unsigned int *)this + 40); /*0x6e6169*/
  if ( v3 ) /*0x6e6171*/
    wsprintfA(Source, g_abs_842CCC, *((unsigned int *)this + 39), (const char *)((char *)this + 100), (const char *)(v3 + 36)); /*0x6e61b4*/
  else
    wsprintfA(Source, g_abs_842CD8, (const char *)((char *)this + 100)); /*0x6e6181*/
  INIClass::SetString(a2, (uint8_t *)g_abs_842C3C, (char *)((char *)this + 36), Source); /*0x6e6199*/
  return 1; /*0x6e61db*/

}
}
// 0x6E6310
namespace gamemd {
AbstractTypeClass * TagTypeClass::FindOrCreate(ObjectClass * Source)
{

  int v2; // esi
  char *v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x6e632c*/
    return 0; /*0x6e638f*/
  v2 = 0; /*0x6e633d*/
  if ( *(int *)&stru_B05488.__pad_579C[15212] <= 0 ) /*0x6e6341*/
  {
LABEL_6:
    v3 = (char *)RA2_OPNEW(0xA4u); /*0x6e6366*/
    if ( v3 ) /*0x6e6375*/
      return ((TagTypeClass *)(v3))->Construct(Source); /*0x6e6381*/
    return 0; /*0x6e6375*/
  }
  while ( _strcmpi((const void *)(*(unsigned int *)(*(unsigned int *)&stru_B05488.__pad_579C[15200] + 4 * v2) + 36), Source) ) /*0x6e635a*/
  {
    if ( ++v2 >= *(int *)&stru_B05488.__pad_579C[15212] ) /*0x6e6364*/
      goto LABEL_6; /*0x6e6364*/
  }
  return *(char **)(*(unsigned int *)&stru_B05488.__pad_579C[15200] + 4 * v2); /*0x6e637f*/

}
}
// 0x6E63E0
namespace gamemd {
int TagTypeClass::PowerDrainUpdate(int * a2)
{

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x6e63e9*/
  return Power::TimerProcess(*((unsigned int *)this + 39)); /*0x6e63fc*/

}
}
// 0x6E64B0
namespace gamemd {
int TagTypeClass::GetAuxField()
{

  return *((unsigned int *)this + 38); /*0x6e64b6*/

}
}
// 0x727AA0
namespace gamemd {
TriggerTypeClass * * TagTypeClass::FindOrCreateTriggerType(ObjectClass * Source)
{

  int v2; // esi
  unsigned int *v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x727abc*/
    return 0; /*0x727b1f*/
  v2 = 0; /*0x727acd*/
  if ( dword_8B4188 <= 0 ) /*0x727ad1*/
  {
LABEL_6:
    v3 = (unsigned int *)RA2_OPNEW(0xB4u); /*0x727af6*/
    if ( v3 ) /*0x727b05*/
      return (TriggerTypeClass *)TriggerTypeClass::Construct(v3, Source); /*0x727b11*/
    return 0; /*0x727b05*/
  }
  while ( _strcmpi((const void *)(*((unsigned int *)unk_8B417C + v2) + 36), Source) ) /*0x727aea*/
  {
    if ( ++v2 >= dword_8B4188 ) /*0x727af4*/
      goto LABEL_6; /*0x727af4*/
  }
  return (TriggerTypeClass *)*((unsigned int *)unk_8B417C + v2); /*0x727b0f*/

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

  result = ((AbstractClass *)((AbstractClass *)aP0))->SaveLoad_Prefix_0((AbstractClass *)aP1); /*0x6e641b*/
  if ( result >= 0 ) /*0x6e6422*/
  {
    if ( aP0 ) /*0x6e6426*/
    {
      AbstractTypeClass::Init((int)aP0, (AbstractTypeClass *)&aP1); /*0x6e642f*/
      *(unsigned int *)aP0->__pad_0 = &vt_TagTypeClass; /*0x6e6434*/
      *(unsigned int *)&aP0-((unsigned int *)(>__pad_0))[4] = &vt_TagTypeClass; /*0x6e643a*/
      *(unsigned int *)&aP0-((unsigned int *)(>__pad_0))[8] = &vt_TagTypeClass; /*0x6e6441*/
      *(unsigned int *)&aP0-((unsigned int *)(>__pad_0))[12] = &vt_TagTypeClass; /*0x6e6448*/
    }
    ObjectPtr::RegisterForTracking( /*0x6e645b*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[((unsigned int *)(1].__pad_0))[8]);
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

  result = ((AbstractClass *)((ObjectTypeClass *)aP0))->SaveLoad_Prefix((ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x6e647f*/
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
TagTypeClass * TagTypeClass::ddtor(void * Block, char a2)
{

  TagTypeClass::CleanupMembers((int)Block); /*0x6e64c3*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x6e64cd*/
    RA2_OPDEL(Block); /*0x6e64d0*/
  return (TagTypeClass *)Block; /*0x6e64da*/

}
} // namespace gamemd
