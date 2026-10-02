// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/CCToolTip_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/SHA1_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/MultiplayerGameMode_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/CChatEventSink_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/CComObject_CChatEventSink___ATL_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/FileStraw_e4.hpp"
#include "e4/classes/GenericList_e4.hpp"
#include "e4/classes/Pipe_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"

// 0x41F2E0
namespace gamemd {
int CCINIClass::ReadTypeList(char * a1, CCINIClass * a2)
{

  CCINIClass * v2;
  int result; // eax
  int v5; // ebp
  char *StringByIndex; // esi
  unsigned int *v7; // esi
  int v8; // edi
  unsigned int *v9; // eax
  int v10; // ebp
  char *v11; // edi
  int v12; // esi
  int v13; // esi
  int v14; // [esp+10h] [ebp-8h]
  int i; // [esp+10h] [ebp-8h]

  v2 = (gamemd::CCINIClass *)((int)(a2));
  result = (int)(INIClass::GetKeyCount((gamemd::INIClass *)(a1), (uint8_t *)aAitriggertypes));
  v5 = 0; /*0x41f2fa*/
  v14 = result; /*0x41f2fe*/
  while ( v5 < v14 ) /*0x41f302*/
  {
    StringByIndex = (char *)INIClass::GetStringByIndex((gamemd::CCINIClass *)(a1),(gamemd::CCINIClass *)((uint8_t *)aAitriggertypes),(void *)(v5)); /*0x41f317*/
    if ( _strcmpi((const char *)(g_Str__none_), StringByIndex) ) /*0x41f31f*/
    {
      if ( _strcmpi((const char *)(g_Str_none), StringByIndex) ) /*0x41f335*/
      {
        v8 = 0; /*0x41f34a*/
        if ( dword_A8B210 > 0 ) /*0x41f34e*/
        {
          while ( _strcmpi((char *)(*((unsigned int *)dword_A8B204 + v8) + 36), StringByIndex) ) /*0x41f368*/
          {
            if ( ++v8 >= dword_A8B210 ) /*0x41f376*/
              goto LABEL_9; /*0x41f376*/
          }
          v7 = (unsigned int *)*((unsigned int *)dword_A8B204 + v8); /*0x41f431*/
          goto LABEL_11; /*0x41f434*/
        }
LABEL_9:
        v9 = (unsigned int *)__2_YAPAXI_Z(0x110u); /*0x41f378*/
        if ( v9 ) /*0x41f387*/
        {
          v7 = ((AnimTypeClass *)(v9))->Construct2(StringByIndex); /*0x41f391*/
LABEL_11:
          if ( v7 ) /*0x41f395*/
          {
            (*(void (**)(unsigned int *, char *))(*v7 + 100))(v7, a1); /*0x41f39c*/
            v7[39] = (unsigned int)(a2); /*0x41f3a3*/
          }
          goto LABEL_13; /*0x41f3a3*/
        }
      }
      v7 = 0; /*0x41f341*/
    }
    else
    {
      v7 = 0; /*0x41f32b*/
    }
LABEL_13: v2 = (gamemd::CCINIClass *)((int)(a2));
    if ( a2 == (gamemd::CCINIClass *)(1) ) /*0x41f3b0*/
      *(gamemd::CCINIClass *)(((unsigned char *)v7 + 164)) = 1; /*0x41f3b2*/
    result = v14; /*0x41f3b9*/
    ++v5; /*0x41f3bd*/
  }
  if ( !v2 ) /*0x41f3c8*/
  {
    result = (int)(INIClass::GetKeyCount((gamemd::INIClass *)(a1), (uint8_t *)aAitriggertypes_0));
    v10 = 0; /*0x41f3dc*/
    for ( i = result; v10 < i; ++v10 ) /*0x41f3e4*/
    {
      v11 = (char *)INIClass::GetStringByIndex((gamemd::CCINIClass *)(a1),(gamemd::CCINIClass *)((uint8_t *)aAitriggertypes_0),(void *)(v10)); /*0x41f3f9*/
      v12 = 0; /*0x41f400*/
      if ( dword_A8B210 > 0 ) /*0x41f404*/
      {
        while ( _strcmpi((char *)(*((unsigned int *)dword_A8B204 + v12) + 36), v11) ) /*0x41f41d*/
        {
          if ( ++v12 >= dword_A8B210 ) /*0x41f427*/
            goto LABEL_28; /*0x41f427*/
        }
        v13 = *((unsigned int *)dword_A8B204 + v12); /*0x41f43f*/
        if ( v13 ) /*0x41f444*/
          *(unsigned char *)(v13 + 164) = (uint8_t)INIClass::ReadBool_Overwrite( /*0x41f46c*/
                                                     (int *)a1,
                                                     (uint8_t *)aAitriggertypes_0,
                                                     (uint8_t *)v11,
                                                     0)
                               || ((unsigned int *)(dword_A8B238))[0];
      }
LABEL_28:
      result = i; /*0x41f473*/
    }
  }
  return result; /*0x41f480*/

}
}
// 0x473450
namespace gamemd {
int CCINIClass::GetDB()
{

  return ((unsigned int *)this)[0]; /*0x473453*/

}
}
// 0x4741F0
namespace gamemd {
MultiplayerGameMode * * CCINIClass::Load(int a2, char a3, char a4)
{

  int File; // ebp
  int Base64Data; // eax
  int v7; // esi
  bool v8; // zf
  int v10[4]; // [esp+Ch] [ebp-A8h] BYREF
  char v11; // [esp+1Ch] [ebp-98h]
  SHA1 v12; // [esp+20h] [ebp-94h] BYREF
  int v13; // [esp+44h] [ebp-70h]
  int v14; // [esp+48h] [ebp-6Ch]
  int v15; // [esp+4Ch] [ebp-68h]
  int v16; // [esp+50h] [ebp-64h]
  int v17; // [esp+54h] [ebp-60h]
  int v18; // [esp+58h] [ebp-5Ch]
  int v19; // [esp+5Ch] [ebp-58h]
  int v20[5]; // [esp+A0h] [ebp-14h] BYREF

  v10[1] = 0; /*0x474213*/
  v10[2] = 0; /*0x474217*/
  v10[3] = a2; /*0x47421b*/
  v11 = 0; /*0x47421f*/
  v10[0] = (int)&vt_FileStraw; /*0x474223*/
  File = INIClass::LoadFile((INIClass *)this, (int)v10, a4); /*0x474230*/
  this->ownsFile = 0; /*0x474232*/
  if ( !File || !a3 ) /*0x474244*/
    goto LABEL_7; /*0x474244*/
  Base64Data = INIClass::GetBase64Data((INIClass *)this, g_INI_Key_Digest, (int)v20, 0x14u); /*0x47425b*/
  if ( !Base64Data ) /*0x474262*/
  {
    v7 = 2; /*0x474264*/
    goto LABEL_8; /*0x474269*/
  }
  if ( Base64Data <= 0 ) /*0x47426e*/
    goto LABEL_7; /*0x47426e*/
  INIClass::ClearSection((int *)this->INIClass, (int)g_INI_Key_Digest, 0); /*0x47427d*/
  memset(&v12.SHA1_field_0x04, 0, 9); /*0x474286*/
  v18 = 0; /*0x474295*/
  v19 = 0; /*0x474299*/
  v13 = 1732584193; /*0x47429d*/
  v14 = -271733879; /*0x4742a5*/
  v15 = -1732584194; /*0x4742ad*/
  v16 = 271733878; /*0x4742b5*/
  v17 = -1009589776; /*0x4742bd*/
  *(unsigned int *)v12.__pad_0 = (unsigned int)(&vt_SHAPipe); /*0x4742c5*/
  INIClass::WriteToString((INIClass *)this, (int)&v12); /*0x4742cd*/
  ((SHA1 *)(&v12))->ComputeThunk((char *)(this->__pad_41)); /*0x4742da*/
  this->ownsFile = 1; /*0x4742e3*/
  Pipe::Dtor((Pipe *)&v12); /*0x4742e7*/
  v8 = memcmp(v20,(const void *)(this->__pad_41), 0x14u) == 0; /*0x4742fa*/
  v7 = 2; /*0x4742fd*/
  if ( v8 ) /*0x474302*/
LABEL_7:
    v7 = File; /*0x474304*/
LABEL_8:
  FileStraw::Destructor((void *)((int)v10)); /*0x474306*/
  return v7; /*0x474311*/

}
}
// 0x535B30
namespace gamemd {
CCINIClass::CCINIClass()
{

  unsigned int *result; // eax
  int *sectionHead; // esi
  int *p_sectionCount; // ecx
  int v4; // ebx
  int v5; // edi
  int v6; // edi
  int v7; // edi

  result = (unsigned int *)(this->INIClass);
  sectionHead = (int *)(((unsigned int *)this)[0]); /*0x535b36*/
  p_sectionCount = (int *)(&((unsigned int *)this)[0]); /*0x535b39*/
  result[1] = 0; /*0x535b3c*/
  result[2] = 0; /*0x535b3f*/
  sectionHead[1] = 0; /*0x535b42*/
  sectionHead[2] = 0; /*0x535b45*/
  *sectionHead = (int)&vt_GenericNode; /*0x535b48*/
  p_sectionCount[1] = 0; /*0x535b4e*/
  p_sectionCount[2] = 0; /*0x535b51*/
  *p_sectionCount = (int)&vt_GenericNode; /*0x535b54*/
  result[3] = (unsigned int)(&vt_GenericList); /*0x535b5d*/
  if ( p_sectionCount ) /*0x535b64*/
  {
    v4 = p_sectionCount[1]; /*0x535b66*/
    if ( v4 ) /*0x535b6b*/
    {
      v5 = p_sectionCount[2]; /*0x535b6d*/
      if ( v5 ) /*0x535b72*/
      {
        *(unsigned int *)(v5 + 4) = v4; /*0x535b74*/
        *(unsigned int *)(p_sectionCount[1] + 8) = p_sectionCount[2]; /*0x535b7d*/
        p_sectionCount[2] = 0; /*0x535b80*/
        p_sectionCount[1] = 0; /*0x535b83*/
      }
    }
  }
  v6 = (unsigned int)(sectionHead[1]);
  p_sectionCount[2] = (unsigned int)((int)sectionHead);
  p_sectionCount[1] = (unsigned int)(v6);
  v7 = (unsigned int)(sectionHead[1]);
  if ( v7 ) /*0x535b94*/
    *(unsigned int *)(v7 + 8) = (unsigned int)(p_sectionCount); /*0x535b96*/
  sectionHead[1] = (unsigned int)((int)p_sectionCount); /*0x535b99*/
  result[3] = (unsigned int)(&vt_List); /*0x535b9c*/
  result[10] = 0; /*0x535ba4*/
  result[11] = 0; /*0x535ba7*/
  result[12] = 0; /*0x535baa*/
  *((unsigned char *)result + 52) = 0; /*0x535bad*/
  result[14] = 0; /*0x535bb0*/
  result[15] = 0; /*0x535bb4*/
  *((unsigned char *)result + 64) = 0; /*0x535bb7*/
  *result = (unsigned int)(&CCINIClass_Vtable); /*0x535bba*/
  return result; /*0x535ba3*/

}
}
// 0x41F490
namespace gamemd {
AITriggerTypeClass * CCINIClass::ReadInfantryTypeList(char * a1, int a2)
{

  int KeyCount; // ebx
  int i; // edi
  uint8_t *StringByIndex; // eax
  int result; // eax
  int j; // edi
  unsigned int *v9; // ecx
  int k; // edi
  char Destination[32]; // [esp+10h] [ebp-20h] BYREF

  KeyCount = (int)(INIClass::GetKeyCount(a1->__pad_0, (uint8_t *)aAitriggertypes));
  for ( i = 0; i < KeyCount; ++i ) /*0x41f4ac*/
  {
    StringByIndex = (uint8_t *)INIClass::GetStringByIndex(a1->__pad_0, (uint8_t *)aAitriggertypes, i); /*0x41f4b8*/
    INIClass::GetString((gamemd::INIClass *)(a1), (uint8_t *)aAitriggertypes,(gamemd::INIClass *)(StringByIndex),(gamemd::INIClass *)(&g_INI_DefaultBuffer), Destination, 32); /*0x41f4d2*/
    INIClass::ClearSection((int *)a1->__pad_0, (int)Destination, 0); /*0x41f4e0*/
  }
  INIClass::ClearSection((int *)a1->__pad_0, (int)aAitriggertypes, 0); /*0x41f4f5*/
  result = dword_A8B210; /*0x41f4fa*/
  for ( j = 0; j < dword_A8B210; ++j ) /*0x41f503*/
  {
    v9 = (unsigned int *)*((unsigned int *)dword_A8B204 + j); /*0x41f50a*/
    if ( v9[39] == a2 ) /*0x41f513*/
      (*(void (**)(unsigned int *, INIClass *))(*v9 + 104))(v9, a1); /*0x41f518*/
    result = dword_A8B210; /*0x41f51b*/
  }
  if ( !a2 ) /*0x41f527*/
  {
    INIClass::ClearSection((int *)a1->__pad_0, (int)aAitriggertypes_0, 0); /*0x41f532*/
    result = dword_A8B210; /*0x41f537*/
    for ( k = 0; k < dword_A8B210; ++k ) /*0x41f540*/
    {
      INIClass::SetBool( /*0x41f55e*/
        a1->__pad_0,
        (uint8_t *)aAitriggertypes_0,
        (char *)(*((unsigned int *)dword_A8B204 + k) + 36),
        *(unsigned char *)(*((unsigned int *)dword_A8B204 + k) + 164));
      result = dword_A8B210; /*0x41f563*/
    }
  }
  return (gamemd::AITriggerTypeClass *)(result);

}
} // namespace gamemd

// 0x501160
namespace gamemd {
IUnknown * CCINIClass::WriteHouses()
{

  int result; // eax
  int i; // ebx
  int v4; // esi
  char Source[32]; // [esp+Ch] [ebp-40h] BYREF
  char Buffer[32]; // [esp+2Ch] [ebp-20h] BYREF

  INIClass::ClearSection((int)this, (int)g_INI_Key_Houses, 0); /*0x50116f*/
  result = dword_A80238; /*0x501174*/
  for ( i = 0; i < dword_A80238; ++i ) /*0x50117d*/
  {
    strcpy(Source, (const char *)(*(unsigned int *)&dword_A8022C->AbstractClass[4 * i] + 90100)); /*0x5011ac*/
    sprintf(Buffer,(const char *const )(g_Str_Trace), i); /*0x5011ba*/
    INIClass::SetString(this, (uint8_t *)g_INI_Key_Houses, Buffer, Source); /*0x5011d3*/
    result = dword_A80238; /*0x5011d8*/
  }
  v4 = 0; /*0x5011e3*/
  if ( result > 0 ) /*0x5011e7*/
  {
    do /*0x501200*/
    {
      HouseClass::SaveToINI(*(unsigned int *)&dword_A8022C->AbstractClass[4 * v4], this); /*0x5011f3*/
      result = dword_A80238; /*0x5011f8*/
      ++v4; /*0x5011fd*/
    }
    while ( v4 < dword_A80238 ); /*0x501200*/
  }
  return result; /*0x501202*/

}
} // namespace gamemd
