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

// 0x41F2E0
namespace gamemd {
int CCINIClass::ReadTypeList(char * a1, CCINIClass * a2)
{
  CCINIClass * v2;
  int result; // eax
  int v5; // ebp
  void *StringByIndex; // esi
  unsigned int *v7; // esi
  int v8; // edi
  unsigned int *v9; // eax
  int v10; // ebp
  void *v11; // edi
  int v12; // esi
  int v13; // esi
  int v14; // [esp+10h] [ebp-8h]
  int i; // [esp+10h] [ebp-8h]

  v2 = a2; /*0x41f2ec*/
  result = INIClass::GetKeyCount(a1, (uint8_t *)aAitriggertypes); /*0x41f2f5*/
  v5 = 0; /*0x41f2fa*/
  v14 = result; /*0x41f2fe*/
  while ( v5 < v14 ) /*0x41f302*/
  {
    StringByIndex = (void *)INIClass::GetStringByIndex(a1, (uint8_t *)aAitriggertypes, v5); /*0x41f317*/
    if ( _strcmpi(g_Str__none_, StringByIndex) ) /*0x41f31f*/
    {
      if ( _strcmpi(g_Str_none, StringByIndex) ) /*0x41f335*/
      {
        v8 = 0; /*0x41f34a*/
        if ( g_AnimTypeInitQueue > 0 ) /*0x41f34e*/
        {
          while ( _strcmpi((const void *)(*((unsigned int *)dword_A8B204 + v8) + 36), StringByIndex) ) /*0x41f368*/
          {
            if ( ++v8 >= g_AnimTypeInitQueue ) /*0x41f376*/
              goto LABEL_9; /*0x41f376*/
          }
          v7 = (unsigned int *)*((unsigned int *)dword_A8B204 + v8); /*0x41f431*/
          goto LABEL_11; /*0x41f434*/
        }
  LABEL_9:
        v9 = operator new(0x110u); /*0x41f378*/
        if ( v9 ) /*0x41f387*/
        {
          v7 = AnimTypeClass::Construct2(v9, (char *)StringByIndex); /*0x41f391*/
  LABEL_11:
          if ( v7 ) /*0x41f395*/
          {
            (*(void (__thiscall **)(unsigned int *, char *))(*v7 + 100))(v7, a1); /*0x41f39c*/
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
  LABEL_13:
    v2 = a2; /*0x41f3a9*/
    if ( a2 == 1 ) /*0x41f3b0*/
      *((unsigned char *)v7 + 164) = 1; /*0x41f3b2*/
    result = v14; /*0x41f3b9*/
    ++v5; /*0x41f3bd*/
  }
  if ( !v2 ) /*0x41f3c8*/
  {
    result = INIClass::GetKeyCount(a1, (uint8_t *)aAitriggertypes_0); /*0x41f3d7*/
    v10 = 0; /*0x41f3dc*/
    for ( i = result; v10 < i; ++v10 ) /*0x41f3e4*/
    {
      v11 = (void *)INIClass::GetStringByIndex(a1, (uint8_t *)aAitriggertypes_0, v10); /*0x41f3f9*/
      v12 = 0; /*0x41f400*/
      if ( g_AnimTypeInitQueue > 0 ) /*0x41f404*/
      {
        while ( _strcmpi((const void *)(*((unsigned int *)dword_A8B204 + v12) + 36), v11) ) /*0x41f41d*/
        {
          if ( ++v12 >= g_AnimTypeInitQueue ) /*0x41f427*/
            goto LABEL_28; /*0x41f427*/
        }
        v13 = *((unsigned int *)dword_A8B204 + v12); /*0x41f43f*/
        if ( v13 ) /*0x41f444*/
          *(unsigned char *)(v13 + 164) = INIClass::ReadBool_Overwrite( /*0x41f46c*/
                                    (int)a1,
                                    (uint8_t *)aAitriggertypes_0,
                                    (uint8_t *)v11,
                                    0)
                               || g_GameMode_Current[0];
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
  return this->q004; /*0x473453*/
}
}
// 0x4741F0
namespace gamemd {
MultiplayerGameMode * * CCINIClass::Load(MultiplayerGameMode * aP1, char a3, char aP2)
{
  int v5; // ebp
  int v6; // eax
  int v7; // esi
  bool v8; // zf
  unsigned int v10[4]; // [esp+Ch] [ebp-A8h] BYREF
  void * v11;
  unsigned int v12[3]; // [esp+20h] [ebp-94h] BYREF
  char v13; // [esp+2Ch] [ebp-88h]
  int v14; // [esp+44h] [ebp-70h]
  int v15; // [esp+48h] [ebp-6Ch]
  int v16; // [esp+4Ch] [ebp-68h]
  int v17; // [esp+50h] [ebp-64h]
  unsigned int v18;
  int v19; // [esp+58h] [ebp-5Ch]
  int v20; // [esp+5Ch] [ebp-58h]
  int v21[5]; // [esp+A0h] [ebp-14h] BYREF

  v10[1] = 0; /*0x474213*/
  v10[2] = 0; /*0x474217*/
  v10[3] = aP1; /*0x47421b*/
  v11 = 0; /*0x47421f*/
  v5 = INIClass::LoadFile(v10, aP2); /*0x474230*/
  *(&this->u32_184) = 0; /*0x474232*/
  if ( !v5 || !a3 ) /*0x474244*/
    goto LABEL_7; /*0x474244*/
  v6 = INIClass::GetBase64Data((int)g_INI_Key_Digest, (int)v21, 0x14u); /*0x47425b*/
  if ( !v6 ) /*0x474262*/
  {
    v7 = 2; /*0x474264*/
    goto LABEL_8; /*0x474269*/
  }
  if ( v6 <= 0 ) /*0x47426e*/
    goto LABEL_7; /*0x47426e*/
  INIClass::ClearSection(g_INI_Key_Digest, 0); /*0x47427d*/
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
  INIClass::WriteToString(v12); /*0x4742cd*/
  SHA1::ComputeThunk(&this->u32_185); /*0x4742da*/
  *(&this->u32_184) = 1; /*0x4742e3*/
  Pipe::Dtor(v12); /*0x4742e7*/
  v8 = memcmp(v21, &this->q104, 0x14u) == 0; /*0x4742fa*/
  v7 = 2; /*0x4742fd*/
  if ( v8 ) /*0x474302*/
  LABEL_7:
    v7 = v5; /*0x474304*/
  LABEL_8:
  FileStraw::Destructor(v10); /*0x474306*/
  return v7; /*0x474311*/
}
}
// 0x535B30
namespace gamemd {
CCINIClass::CCINIClass()
{
  void** result;
  unsigned int *v2; // esi
  unsigned int *v3; // ecx
  int v4; // ebx
  int v5; // edi
  unsigned int * v6;
  int v7; // edi

  result = this; /*0x535b30*/
  v2 = &this->u32_10; /*0x535b36*/
  v3 = &this->u32_1C; /*0x535b39*/
  result[1] = 0; /*0x535b3c*/
  result[2] = 0; /*0x535b3f*/
  v2[1] = 0; /*0x535b42*/
  v2[2] = 0; /*0x535b45*/
  v3[1] = 0; /*0x535b4e*/
  v3[2] = 0; /*0x535b51*/
  if ( v3 ) /*0x535b64*/
  {
    v4 = v3[1]; /*0x535b66*/
    if ( v4 ) /*0x535b6b*/
    {
      v5 = v3[2]; /*0x535b6d*/
      if ( v5 ) /*0x535b72*/
      {
        this->v4 = v4; /*0x535b74*/
        *(unsigned int *)(v3[1] + 8) = v3[2]; /*0x535b7d*/
        v3[2] = 0; /*0x535b80*/
        v3[1] = 0; /*0x535b83*/
      }
    }
  }
  v6 = v2[1]; /*0x535b86*/
  v3[2] = v2; /*0x535b89*/
  v3[1] = v6; /*0x535b8c*/
  v7 = v2[1]; /*0x535b8f*/
  if ( v7 ) /*0x535b94*/
    this->v3 = v3; /*0x535b96*/
  v2[1] = v3; /*0x535b99*/
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
  int KeyCount; // ebx
  int i; // edi
  uint8_t *StringByIndex; // eax
  int result; // eax
  int j; // edi
  unsigned int *v9; // ecx
  int k; // edi
  char Destination[32]; // [esp+10h] [ebp-20h] BYREF

  KeyCount = INIClass::GetKeyCount(a1, (uint8_t *)aAitriggertypes); /*0x41f4a6*/
  for ( i = 0; i < KeyCount; ++i ) /*0x41f4ac*/
  {
    StringByIndex = (uint8_t *)INIClass::GetStringByIndex(a1, (uint8_t *)aAitriggertypes, i); /*0x41f4b8*/
    INIClass::GetString( /*0x41f4d2*/
      (uint8_t ***)a1,
      (uint8_t *)aAitriggertypes,
      StringByIndex,
      &g_INI_DefaultBuffer,
      Destination,
      32);
    INIClass::ClearSection((int)a1, (int)Destination, 0); /*0x41f4e0*/
  }
  INIClass::ClearSection((int)a1, (int)aAitriggertypes, 0); /*0x41f4f5*/
  result = g_AnimTypeInitQueue; /*0x41f4fa*/
  for ( j = 0; j < g_AnimTypeInitQueue; ++j ) /*0x41f503*/
  {
    v9 = (unsigned int *)*((unsigned int *)dword_A8B204 + j); /*0x41f50a*/
    if ( v9[39] == a2 ) /*0x41f513*/
      (*(void (__thiscall **)(unsigned int *, char *))(*v9 + 104))(v9, a1); /*0x41f518*/
    result = g_AnimTypeInitQueue; /*0x41f51b*/
  }
  if ( !a2 ) /*0x41f527*/
  {
    INIClass::ClearSection((int)a1, (int)aAitriggertypes_0, 0); /*0x41f532*/
    result = g_AnimTypeInitQueue; /*0x41f537*/
    for ( k = 0; k < g_AnimTypeInitQueue; ++k ) /*0x41f540*/
    {
      INIClass::SetBool( /*0x41f55e*/
        a1,
        (uint8_t *)aAitriggertypes_0,
        (char *)(*((unsigned int *)dword_A8B204 + k) + 36),
        *(unsigned char *)(*((unsigned int *)dword_A8B204 + k) + 164));
      result = g_AnimTypeInitQueue; /*0x41f563*/
    }
  }
  return result; /*0x41f56d*/
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

  INIClass::ClearSection((int)g_INI_Key_Houses, 0); /*0x50116f*/
  result = HouseClass_Count; /*0x501174*/
  for ( i = 0; i < HouseClass_Count; ++i ) /*0x50117d*/
  {
    strcpy(Source, (const char *)(*(unsigned int *)&HouseClass_Array->gap0[4 * i] + 90100)); /*0x5011ac*/
    sprintf(Buffer, g_Str_Trace, i); /*0x5011ba*/
    INIClass::SetString((uint8_t *)g_INI_Key_Houses, Buffer, Source); /*0x5011d3*/
    result = HouseClass_Count; /*0x5011d8*/
  }
  v4 = 0; /*0x5011e3*/
  if ( result > 0 ) /*0x5011e7*/
  {
    do /*0x501200*/
    {
      HouseClass::SaveToINI(); /*0x5011f3*/
      result = HouseClass_Count; /*0x5011f8*/
      ++v4; /*0x5011fd*/
    }
    while ( v4 < HouseClass_Count ); /*0x501200*/
  }
  return result; /*0x501202*/
}
} // namespace gamemd
