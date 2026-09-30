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

// 0x41F2E0
namespace gamemd {
int CCINIClass::ReadTypeList(char * a1, CCINIClass * a2)
{
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v10 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v10 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v10 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v10 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v10 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v10 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v10 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v10 = 0;  /* G37 hoist */
    unsigned int v10 = 0;  /* G37 hoist */
    unsigned int v10 = 0;  /* G37 hoist */
    unsigned int v10 = 0;  /* G37 hoist */
    unsigned int v10 = 0;  /* G37 hoist */
    unsigned int v10 = 0;  /* G37 hoist */
    unsigned int v10 = 0;  /* G37 hoist */
    unsigned int v10 = 0;  /* G37 hoist */
    unsigned int v10 = 0;  /* G37 hoist */
    unsigned int v10 = 0;  /* G37 hoist */

  CCINIClass *v2; // edi
  CCINIClass * result;
  CCINIClass *v5; // ebp
  CCINIClass *StringByIndex; // esi
  unsigned int *v7; // esi
  int v8; // edi
  unsigned int *v9; // eax
  CCINIClass *v10; // ebp
  CCINIClass *v11; // edi
  int v12; // esi
  int v13; // esi
  CCINIClass * v14;
  int i; // [esp+10h] [ebp-8h]

  v2 = (gamemd::CCINIClass *)((int)(a2));
  result = (int)(INIClass::GetKeyCount(a1, (INIClass *)aAitriggertypes));
  v5 = 0; /*0x41f2fa*/
  v14 = result; /*0x41f2fe*/
  while ( (int)v5 < (int)(v14) ) /*0x41f302*/
  {
    StringByIndex = (CCINIClass *)INIClass::GetStringByIndex(a1, (CCINIClass *)aAitriggertypes, v5); /*0x41f317*/
    if ( _strcmpi((char *)&stru_817460.sectionHead[1], StringByIndex->__pad_0) ) /*0x41f31f*/
    {
      if ( _strcmpi(g_Str_none, StringByIndex->__pad_0) ) /*0x41f335*/
      {
        v8 = 0; /*0x41f34a*/
        if ( (int)g_abs_A8B210 > 0 ) /*0x41f34e*/
        {
          while ( _strcmpi((char *)(*(unsigned int *)&g_abs_A8B204->__pad_0[4 * v8] + 36), StringByIndex->__pad_0) ) /*0x41f368*/
          {
            if ( ++v8 >= (int)g_abs_A8B210 ) /*0x41f376*/
              goto LABEL_9; /*0x41f376*/
          }
          v7 = *(unsigned int **)&g_abs_A8B204->__pad_0[4 * v8]; /*0x41f431*/
          goto LABEL_11; /*0x41f434*/
        }
LABEL_9:
        v9 = (unsigned int *)RA2_OPNEW(0x110u); /*0x41f378*/
        if ( v9 ) /*0x41f387*/
        {
          v7 = (unsigned int)(AnimTypeClass::Construct2(v9, StringByIndex->__pad_0));
LABEL_11:
          if ( v7 ) /*0x41f395*/
          {
            (*(void (**)(unsigned int *, char *))(*v7 + 100))(v7, a1); /*0x41f39c*/
            v7[39] = a2; /*0x41f3a3*/
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
LABEL_13: v2 = (gamemd::CCINIClass *)(a2);
    if ( a2 == (CCINIClass *)1 ) /*0x41f3b0*/
      *((unsigned char *)v7 + 164) = 1; /*0x41f3b2*/
    result = v14; /*0x41f3b9*/
    v5 = (CCINIClass *)((char *)v5 + 1); /*0x41f3bd*/
  }
  if ( !v2 ) /*0x41f3c8*/
  {
    result = (unsigned int)(INIClass::GetKeyCount(a1, (INIClass *)aAitriggertypes_0));
    v10 = (int)((unsigned int)(0));
    for ( i = result; (int)v10 < i; v10 = (CCINIClass *)((char *)v10 + 1) ) /*0x41f3e4*/
    {
      v11 = (CCINIClass *)INIClass::GetStringByIndex(a1, (CCINIClass *)aAitriggertypes_0, v10); /*0x41f3f9*/
      v12 = 0; /*0x41f400*/
      if ( (int)g_abs_A8B210 > 0 ) /*0x41f404*/
      {
        while ( _strcmpi((char *)(*(unsigned int *)&g_abs_A8B204->__pad_0[4 * v12] + 36), v11->__pad_0) ) /*0x41f41d*/
        {
          if ( ++v12 >= (int)g_abs_A8B210 ) /*0x41f427*/
            goto LABEL_28; /*0x41f427*/
        }
        v13 = *(unsigned int *)&g_abs_A8B204->__pad_0[4 * v12]; /*0x41f43f*/
        if ( v13 ) /*0x41f444*/
          *(unsigned char *)(v13 + 164) = INIClass::ReadBool_Overwrite((int)a1, (uint8_t *)aAitriggertypes_0, v11, 0) /*0x41f46c*/
                               || g_abs_A8B238;
      }
LABEL_28: result = (gamemd::CCINIClass *)(i);
    }
  }
  return result; /*0x41f480*/

}
}
// 0x473450
namespace gamemd {
int CCINIClass::GetDB()
{

  return *((unsigned int *)this + 1); /*0x473453*/

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
  unsigned int v10[4]; // [esp+Ch] [ebp-A8h] BYREF
  unsigned char (*)[4] v11;
  int v12[3]; // [esp+20h] [ebp-94h] BYREF
  char v13; // [esp+2Ch] [ebp-88h]
  int v14; // [esp+44h] [ebp-70h]
  int v15; // [esp+48h] [ebp-6Ch]
  int v16; // [esp+4Ch] [ebp-68h]
  int v17; // [esp+50h] [ebp-64h]
  int v18; // [esp+54h] [ebp-60h]
  int v19; // [esp+58h] [ebp-5Ch]
  int v20; // [esp+5Ch] [ebp-58h]
  int v21[5]; // [esp+A0h] [ebp-14h] BYREF

  v10[1] = (unsigned int)(0);
  v10[2] = (unsigned int)(0);
  v10[3] = (unsigned int)(a2);
  v11 = (unsigned int)(0);
  v10[0] = (unsigned int)(&vt_FileStraw);
  File = INIClass::LoadFile(this, (int)v10, a4); /*0x474230*/
  *((unsigned char *)this + 64) = 0; /*0x474232*/
  if ( !File || !a3 ) /*0x474244*/
    goto LABEL_7; /*0x474244*/
  Base64Data = INIClass::GetBase64Data(g_INI_Key_Digest, v21, 20); /*0x47425b*/
  if ( !Base64Data ) /*0x474262*/
  {
    v7 = 2; /*0x474264*/
    goto LABEL_8; /*0x474269*/
  }
  if ( Base64Data <= 0 ) /*0x47426e*/
    goto LABEL_7; /*0x47426e*/
  INIClass::ClearSection((int)this, (int)g_INI_Key_Digest, 0); /*0x47427d*/
  v12[1] = 0; /*0x474286*/
  v12[2] = 0; /*0x47428d*/
  v13 = 0; /*0x474291*/
  v19 = 0; /*0x474295*/
  v20 = 0; /*0x474299*/
  v14 = 1732584193; /*0x47429d*/
  v15 = -271733879; /*0x4742a5*/
  v16 = -1732584194; /*0x4742ad*/
  v17 = 271733878; /*0x4742b5*/
  v18 = -1009589776; /*0x4742bd*/
  v12[0] = (int)&vt_SHAPipe; /*0x4742c5*/
  INIClass::WriteToString(this, (int)v12); /*0x4742cd*/
  SHA1::ComputeThunk(v12, (unsigned char *)this + 65); /*0x4742da*/
  *((unsigned char *)this + 64) = 1; /*0x4742e3*/
  Pipe::Dtor(v12); /*0x4742e7*/
  v8 = memcmp(v21, (unsigned char *)this + 65, 0x14u) == 0; /*0x4742fa*/
  v7 = 2; /*0x4742fd*/
  if ( v8 ) /*0x474302*/
LABEL_7:
    v7 = File; /*0x474304*/
LABEL_8:
  FileStraw::Destructor((int)v10); /*0x474306*/
  return v7; /*0x474311*/

}
}
// 0x535B30
namespace gamemd {
CCINIClass::CCINIClass()
{

  unsigned int *result; // eax
  unsigned int *v2; // esi
  unsigned int *v3; // ecx
  int v4; // ebx
  int v5; // edi
  int v6; // edi
  unsigned int * v7;

  result = (unsigned int *)(this);
  v2 = (unsigned int *)this + 4; /*0x535b36*/
  v3 = (unsigned int *)this + 7; /*0x535b39*/
  result[1] = 0; /*0x535b3c*/
  result[2] = 0; /*0x535b3f*/
  v2[1] = 0; /*0x535b42*/
  v2[2] = 0; /*0x535b45*/
  *v2 = &vt_GenericNode; /*0x535b48*/
  v3[1] = 0; /*0x535b4e*/
  v3[2] = 0; /*0x535b51*/
  *v3 = &vt_GenericNode; /*0x535b54*/
  result[3] = &vt_GenericList; /*0x535b5d*/
  if ( v3 ) /*0x535b64*/
  {
    v4 = v3[1]; /*0x535b66*/
    if ( v4 ) /*0x535b6b*/
    {
      v5 = v3[2]; /*0x535b6d*/
      if ( v5 ) /*0x535b72*/
      {
        *(unsigned int *)(v5 + 4) = v4; /*0x535b74*/
        *(unsigned int *)(v3[1] + 8) = v3[2]; /*0x535b7d*/
        v3[2] = 0; /*0x535b80*/
        v3[1] = 0; /*0x535b83*/
      }
    }
  }
  v6 = (unsigned int)(v2[1]);
  v3[2] = (unsigned int)(v2);
  v3[1] = (unsigned int)(v6);
  v7 = (unsigned int)(v2[1]);
  if ( v7 ) /*0x535b94*/
    *(unsigned int *)(v7 + 8) = v3; /*0x535b96*/
  v2[1] = v3; /*0x535b99*/
  result[3] = &List<INIClass::INISection *>::`vftable'; /*0x535b9c*/
  result[10] = 0; /*0x535ba4*/
  result[11] = 0; /*0x535ba7*/
  result[12] = 0; /*0x535baa*/
  *((unsigned char *)result + 52) = 0; /*0x535bad*/
  result[14] = 0; /*0x535bb0*/
  result[15] = 0; /*0x535bb4*/
  *((unsigned char *)result + 64) = 0; /*0x535bb7*/
  *result = &CCINIClass_Vtable; /*0x535bba*/
  return result; /*0x535ba3*/

}
}
// 0x41F490
namespace gamemd {
AITriggerTypeClass * CCINIClass::ReadInfantryTypeList(char * a1, int a2)
{

  CCINIClass *KeyCount; // ebx
  CCINIClass *i; // edi
  uint8_t *StringByIndex; // eax
  unsigned int result;
  int j; // edi
  unsigned int *v9; // ecx
  INIClass *v10; // edx
  int k; // edi
  int v12; // eax
  char Destination[32]; // [esp+10h] [ebp-20h] BYREF

  KeyCount = (CCINIClass *)INIClass::GetKeyCount(a1, (INIClass *)aAitriggertypes); /*0x41f4a6*/
  for ( i = 0; (int)i < (int)KeyCount; i = (CCINIClass *)((char *)i + 1) ) /*0x41f4ac*/
  {
    StringByIndex = (uint8_t *)INIClass::GetStringByIndex(a1, (CCINIClass *)aAitriggertypes, i); /*0x41f4b8*/
    INIClass::GetString( /*0x41f4d2*/
      (uint8_t ***)a1,
      (INIClass *)aAitriggertypes,
      StringByIndex,
      (INIClass *)&g_abs_87F8E4,
      (INIClass *)Destination,
      32);
    INIClass::ClearSection((int)a1, (INIClass *)Destination, 0); /*0x41f4e0*/
  }
  INIClass::ClearSection((int)a1, (INIClass *)aAitriggertypes, 0); /*0x41f4f5*/
  result = g_abs_A8B210; /*0x41f4fa*/
  for ( j = 0; j < (int)g_abs_A8B210; ++j ) /*0x41f503*/
  {
    v9 = (gamemd::AITriggerTypeClass *)(*(unsigned int **)&g_abs_A8B204->__pad_0[4 * j]);
    if ( v9[39] == a2 ) /*0x41f513*/
      (*(void (**)(unsigned int *, char *))(*v9 + 104))(v9, a1); /*0x41f518*/
    result = g_abs_A8B210; /*0x41f51b*/
  }
  if ( !a2 ) /*0x41f527*/
  {
    INIClass::ClearSection((int)a1, (INIClass *)aAitriggertypes_0, 0); /*0x41f532*/
    result = g_abs_A8B210; /*0x41f537*/
    for ( k = 0; k < (int)g_abs_A8B210; ++k ) /*0x41f540*/
    {
      v12 = (gamemd::AITriggerTypeClass *)(*(unsigned int *)&g_abs_A8B204->__pad_0[4 * k]);
      IDA_LOBYTE(v10) = *(unsigned char *)(v12 + 164); /*0x41f54d*/
      INIClass::SetBool(a1, (INIClass *)aAitriggertypes_0, (char *)(v12 + 36), v10); /*0x41f55e*/
      result = g_abs_A8B210; /*0x41f563*/
    }
  }
  return (gamemd::AITriggerTypeClass *)((gamemd::AITriggerTypeClass *)(result));

}
} // namespace gamemd

// 0x501160
namespace gamemd {
IUnknown * CCINIClass::WriteHouses()
{

  unsigned int result;
  INIClass *i; // ebx
  int v4; // esi
  INIClass Source; // [esp+Ch] [ebp-40h] BYREF

  INIClass::ClearSection((int)this, (INIClass *)&g_INI_Key_Country.headNode[1], 0); /*0x50116f*/
  result = HouseClass_Count; /*0x501174*/
  for ( i = 0; (int)i < (int)HouseClass_Count; i = (INIClass *)((char *)i + 1) ) /*0x50117d*/
  {
    strcpy(Source.__pad_0, (const char *)(*(unsigned int *)&HouseClass_Array->__pad_0[4 * (unsigned int)i] + 90100)); /*0x5011ac*/
    sprintf(Source.__pad_20, g_abs_817F6C, i); /*0x5011ba*/
    INIClass::SetString(this->__pad_0, (INIClass *)&g_INI_Key_Country.headNode[1], (INIClass *)Source.__pad_20, &Source); /*0x5011d3*/
    result = HouseClass_Count; /*0x5011d8*/
  }
  v4 = 0; /*0x5011e3*/
  if ( (int)result > 0 ) /*0x5011e7*/
  {
    do /*0x501200*/
    {
      HouseClass::SaveToINI(*(unsigned int *)&HouseClass_Array->__pad_0[4 * v4], this); /*0x5011f3*/
      result = HouseClass_Count; /*0x5011f8*/
      ++v4; /*0x5011fd*/
    }
    while ( v4 < (int)HouseClass_Count ); /*0x501200*/
  }
  return result; /*0x501202*/

}
} // namespace gamemd
