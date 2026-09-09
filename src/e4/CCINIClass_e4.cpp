// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x41F2E0
namespace gamemd {
int CCINIClass::ReadTypeList(char * a1, CCINIClass * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall CCINIClass::ReadTypeList(char *a1, CCINIClass *a2)
{
  CCINIClass *v2; // edi
  int result; // eax
  CCINIClass *v5; // ebp
  CCINIClass *StringByIndex; // esi
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // eax
  CCINIClass *v10; // ebp
  CCINIClass *v11; // edi
  int v12; // esi
  int v13; // esi
  int v14; // [esp+10h] [ebp-8h]
  int i; // [esp+10h] [ebp-8h]

  v2 = a2; /*0x41f2ec*/
  result = INIClass::GetKeyCount(a1, (INIClass *)aAitriggertypes); /*0x41f2f5*/
  v5 = 0; /*0x41f2fa*/
  v14 = result; /*0x41f2fe*/
  while ( (int)v5 < v14 ) /*0x41f302*/
  {
    StringByIndex = (CCINIClass *)INIClass::GetStringByIndex(a1, (CCINIClass *)aAitriggertypes, v5); /*0x41f317*/
    if ( _strcmpi((char *)&stru_817460.sectionHead[1], StringByIndex->__pad_0) ) /*0x41f31f*/
    {
      if ( _strcmpi(g_Str_none, StringByIndex->__pad_0) ) /*0x41f335*/
      {
        v8 = 0; /*0x41f34a*/
        if ( (int)MEMORY[0xA8B210] > 0 ) /*0x41f34e*/
        {
          while ( _strcmpi((char *)(*(_DWORD *)&MEMORY[0xA8B204]->__pad_0[4 * v8] + 36), StringByIndex->__pad_0) ) /*0x41f368*/
          {
            if ( ++v8 >= (int)MEMORY[0xA8B210] ) /*0x41f376*/
              goto LABEL_9; /*0x41f376*/
          }
          v7 = *(_DWORD **)&MEMORY[0xA8B204]->__pad_0[4 * v8]; /*0x41f431*/
          goto LABEL_11; /*0x41f434*/
        }
LABEL_9:
        v9 = (_DWORD *)__2_YAPAXI_Z(0x110u); /*0x41f378*/
        if ( v9 ) /*0x41f387*/
        {
          v7 = AnimTypeClass::Construct2(v9, StringByIndex->__pad_0); /*0x41f391*/
LABEL_11:
          if ( v7 ) /*0x41f395*/
          {
            (*(void (__thiscall **)(_DWORD *, char *))(*v7 + 100))(v7, a1); /*0x41f39c*/
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
    if ( a2 == (CCINIClass *)1 ) /*0x41f3b0*/
      *((_BYTE *)v7 + 164) = 1; /*0x41f3b2*/
    result = v14; /*0x41f3b9*/
    v5 = (CCINIClass *)((char *)v5 + 1); /*0x41f3bd*/
  }
  if ( !v2 ) /*0x41f3c8*/
  {
    result = INIClass::GetKeyCount(a1, (INIClass *)aAitriggertypes_0); /*0x41f3d7*/
    v10 = 0; /*0x41f3dc*/
    for ( i = result; (int)v10 < i; v10 = (CCINIClass *)((char *)v10 + 1) ) /*0x41f3e4*/
    {
      v11 = (CCINIClass *)INIClass::GetStringByIndex(a1, (CCINIClass *)aAitriggertypes_0, v10); /*0x41f3f9*/
      v12 = 0; /*0x41f400*/
      if ( (int)MEMORY[0xA8B210] > 0 ) /*0x41f404*/
      {
        while ( _strcmpi((char *)(*(_DWORD *)&MEMORY[0xA8B204]->__pad_0[4 * v12] + 36), v11->__pad_0) ) /*0x41f41d*/
        {
          if ( ++v12 >= (int)MEMORY[0xA8B210] ) /*0x41f427*/
            goto LABEL_28; /*0x41f427*/
        }
        v13 = *(_DWORD *)&MEMORY[0xA8B204]->__pad_0[4 * v12]; /*0x41f43f*/
        if ( v13 ) /*0x41f444*/
          *(_BYTE *)(v13 + 164) = INIClass::ReadBool_Overwrite((int)a1, (unsigned __int8 *)aAitriggertypes_0, v11, 0) /*0x41f46c*/
                               || MEMORY[0xA8B238];
      }
LABEL_28:
      result = i; /*0x41f473*/
    }
  }
  return result; /*0x41f480*/
}
}
} // namespace gamemd

// 0x41F490
namespace gamemd {
AITriggerTypeClass * CCINIClass::ReadInfantryTypeList(char * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
AITriggerTypeClass *__fastcall CCINIClass::ReadInfantryTypeList(char *a1, int a2)
{
  CCINIClass *KeyCount; // ebx
  CCINIClass *i; // edi
  unsigned __int8 *StringByIndex; // eax
  AITriggerTypeClass *result; // eax
  int j; // edi
  _DWORD *v9; // ecx
  INIClass *v10; // edx
  int k; // edi
  int v12; // eax
  char Destination[32]; // [esp+10h] [ebp-20h] BYREF

  KeyCount = (CCINIClass *)INIClass::GetKeyCount(a1, (INIClass *)aAitriggertypes); /*0x41f4a6*/
  for ( i = 0; (int)i < (int)KeyCount; i = (CCINIClass *)((char *)i + 1) ) /*0x41f4ac*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(a1, (CCINIClass *)aAitriggertypes, i); /*0x41f4b8*/
    INIClass::GetString( /*0x41f4d2*/
      (unsigned __int8 ***)a1,
      (INIClass *)aAitriggertypes,
      StringByIndex,
      (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
      (INIClass *)Destination,
      32);
    INIClass::ClearSection((int)a1, (INIClass *)Destination, 0); /*0x41f4e0*/
  }
  INIClass::ClearSection((int)a1, (INIClass *)aAitriggertypes, 0); /*0x41f4f5*/
  result = MEMORY[0xA8B210]; /*0x41f4fa*/
  for ( j = 0; j < (int)MEMORY[0xA8B210]; ++j ) /*0x41f503*/
  {
    v9 = *(_DWORD **)&MEMORY[0xA8B204]->__pad_0[4 * j]; /*0x41f50a*/
    if ( v9[39] == a2 ) /*0x41f513*/
      (*(void (__thiscall **)(_DWORD *, char *))(*v9 + 104))(v9, a1); /*0x41f518*/
    result = MEMORY[0xA8B210]; /*0x41f51b*/
  }
  if ( !a2 ) /*0x41f527*/
  {
    INIClass::ClearSection((int)a1, (INIClass *)aAitriggertypes_0, 0); /*0x41f532*/
    result = MEMORY[0xA8B210]; /*0x41f537*/
    for ( k = 0; k < (int)MEMORY[0xA8B210]; ++k ) /*0x41f540*/
    {
      v12 = *(_DWORD *)&MEMORY[0xA8B204]->__pad_0[4 * k]; /*0x41f548*/
      LOBYTE(v10) = *(_BYTE *)(v12 + 164); /*0x41f54d*/
      INIClass::SetBool(a1, (INIClass *)aAitriggertypes_0, (char *)(v12 + 36), v10); /*0x41f55e*/
      result = MEMORY[0xA8B210]; /*0x41f563*/
    }
  }
  return result; /*0x41f56d*/
}
}
} // namespace gamemd

// 0x473450
namespace gamemd {
int CCINIClass::GetDB()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall CCINIClass_GetDB(_DWORD *this)
{
  return *(this + 1); /*0x473453*/
}
}
} // namespace gamemd

// 0x501160
namespace gamemd {
IUnknown * CCINIClass::WriteHouses()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
IUnknown *__thiscall CCINIClass::WriteHouses(INIClass *this)
{
  IUnknown *result; // eax
  INIClass *i; // ebx
  int v4; // esi
  INIClass Source; // [esp+Ch] [ebp-40h] BYREF

  INIClass::ClearSection((int)this, (INIClass *)&g_INI_Key_Country.headNode[1], 0); /*0x50116f*/
  result = HouseClass_Count; /*0x501174*/
  for ( i = 0; (int)i < (int)HouseClass_Count; i = (INIClass *)((char *)i + 1) ) /*0x50117d*/
  {
    strcpy(Source.__pad_0, (const char *)(*(_DWORD *)&HouseClass_Array->__pad_0[4 * (_DWORD)i] + 90100)); /*0x5011ac*/
    sprintf(Source.__pad_20, MEMORY[0x817F6C], i); /*0x5011ba*/
    INIClass::SetString(this->__pad_0, (INIClass *)&g_INI_Key_Country.headNode[1], (INIClass *)Source.__pad_20, &Source); /*0x5011d3*/
    result = HouseClass_Count; /*0x5011d8*/
  }
  v4 = 0; /*0x5011e3*/
  if ( (int)result > 0 ) /*0x5011e7*/
  {
    do /*0x501200*/
    {
      HouseClass::SaveToINI(*(_DWORD *)&HouseClass_Array->__pad_0[4 * v4], this); /*0x5011f3*/
      result = HouseClass_Count; /*0x5011f8*/
      ++v4; /*0x5011fd*/
    }
    while ( v4 < (int)HouseClass_Count ); /*0x501200*/
  }
  return result; /*0x501202*/
}
}
} // namespace gamemd
