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
{
    CCINIClass *KeyCount;
    CCINIClass *i;
    unsigned char *StringByIndex;
    AITriggerTypeClass *result;
    int j;
    int *v9;
    INIClass *v10;
    int k;
    int v12;
    char Destination[32];
    KeyCount = (CCINIClass *)INIClass::GetKeyCount(a1, (INIClass *)aAitriggertypes);
    for ( i = 0; (int)i < (int)KeyCount; i = (CCINIClass *)((char *)(i) + 1) )
  {
    StringByIndex = (unsigned char *)INIClass::GetStringByIndex(a1, (CCINIClass *)aAitriggertypes, i);
    INIClass::GetString( (unsigned char ***)a1, (INIClass *)aAitriggertypes, StringByIndex, (INIClass *)&DataGlobal_87F8E4.__pad_5568[20760], (INIClass *)Destination, 32);
    INIClass::ClearSection((int)a1, (INIClass *)Destination, 0);
  }
    INIClass::ClearSection((int)a1, (INIClass *)aAitriggertypes, 0);
    result = g_AnimTypeInitQueue;
    for ( j = 0; j < (int)g_AnimTypeInitQueue; ++j )
  {
    v9 = *(int **)&DataGlobal_A8B204->__pad_0[4 * j];
    if ( v9[39] == a2 )
    (*(void (__thiscall **)(int *, char *))(*v9 + 104))(v9, a1);
    result = g_AnimTypeInitQueue;
  }
    if ( !a2 )
  {
    INIClass::ClearSection((int)a1, (INIClass *)aAitriggertypes_0, 0);
    result = g_AnimTypeInitQueue;
    for ( k = 0; k < (int)g_AnimTypeInitQueue; ++k )
    {
    v12 = *(int *)&DataGlobal_A8B204->__pad_0[4 * k];
    LOBYTE(v10) = *(char *)(v12 + 164);
    INIClass::SetBool(a1, (INIClass *)aAitriggertypes_0, (char *)(v12 + 36), v10);
    result = g_AnimTypeInitQueue;
    }
  }
    return result;
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
{
    IUnknown *result;
    INIClass *i;
    int v4;
    INIClass Source;
    INIClass::ClearSection((int)this, (INIClass *)&g_INI_Key_Country.headNode[1], 0);
    result = HouseClass_Count;
    for ( i = 0; (int)i < (int)HouseClass_Count; i = (INIClass *)((char *)(i) + 1) )
  {
    strcpy(Source.__pad_0, (const char *)(*(int *)&HouseClass_Array->__pad_0[4 * (int)i] + 90100));
    sprintf(Source.__pad_20, g_Str_Trace__d, i);
    INIClass::SetString(this->__pad_0, (INIClass *)&g_INI_Key_Country.headNode[1], (INIClass *)Source.__pad_20, &Source);
    result = HouseClass_Count;
  }
    v4 = 0;
    if ( (int)result > 0 )
  {
    do
    {
    HouseClass::SaveToINI(*(int *)&HouseClass_Array->__pad_0[4 * v4], this);
    result = HouseClass_Count;
    ++v4;
    }
    while ( v4 < (int)HouseClass_Count );
  }
    return result;
}
}
} // namespace gamemd
