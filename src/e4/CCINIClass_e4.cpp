// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x41F2E0
namespace gamemd {
int CCINIClass::ReadTypeList(char * a1, CCINIClass * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  IUnknown *v2; // edi
  int result; // eax
  CCINIClass *v5; // ebp
  CCINIClass *StringByIndex; // esi
  CCINIClass *v10; // ebp
  CCINIClass *v11; // edi
  int i; // [esp+10h] [ebp-8h]

  v2 = a2; /*0x41f2ec*/
  result = INIClass::GetKeyCount(a1, (INIClass *)aAitriggertypes); /*0x41f2f5*/
  v5 = 0; /*0x41f2fa*/
  INIClass *v14 = result; /*0x41f2fe*/
  while ( (int)v5 < v14 ) /*0x41f302*/
  {
  AITriggerTypeClass *v7; // esi
    StringByIndex = (CCINIClass *)INIClass::GetStringByIndex(a1, (CCINIClass *)aAitriggertypes, v5); /*0x41f317*/
    if ( _strcmpi((char *)&stru_817460.sectionHead[1], StringByIndex->__pad_0) ) /*0x41f31f*/
    {
      if ( _strcmpi(g_Str_none, StringByIndex->__pad_0) ) /*0x41f335*/
      {
        int v8 = 0; /*0x41f34a*/
        if ( (int)g_AnimTypeInitQueue > 0 ) /*0x41f34e*/
        {
          while ( _strcmpi((char *)(*(_DWORD *)&DataGlobal_A8B204->__pad_0[4 * v8] + 36), StringByIndex->__pad_0) ) /*0x41f368*/
          {
            if ( ++v8 >= (int)g_AnimTypeInitQueue ) /*0x41f376*/
              goto LABEL_9; /*0x41f376*/
          }
          v7 = *(_DWORD **)&DataGlobal_A8B204->__pad_0[4 * v8]; /*0x41f431*/
          goto LABEL_11; /*0x41f434*/
        }
LABEL_9:
        _DWORD * v9 = (_DWORD *)__2_YAPAXI_Z(0x110u); /*0x41f378*/
        if ( v9 ) /*0x41f387*/
        {
          v7 = AnimTypeClass::Construct2(v9, StringByIndex->__pad_0); /*0x41f391*/
LABEL_11:
          if ( v7 ) /*0x41f395*/
          {
            v7->LoadFromINI_18(a1); /*0x41f39c*/
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
      v7->q0A4 = 1; /*0x41f3b2*/
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
      int v12 = 0; /*0x41f400*/
      if ( (int)g_AnimTypeInitQueue > 0 ) /*0x41f404*/
      {
        while ( _strcmpi((char *)(*(_DWORD *)&DataGlobal_A8B204->__pad_0[4 * v12] + 36), v11->__pad_0) ) /*0x41f41d*/
        {
          if ( ++v12 >= (int)g_AnimTypeInitQueue ) /*0x41f427*/
            goto LABEL_28; /*0x41f427*/
        }
        int v13 = *(_DWORD *)&DataGlobal_A8B204->__pad_0[4 * v12]; /*0x41f43f*/
        if ( v13 ) /*0x41f444*/
          *(_BYTE *)(v13 + 164) = INIClass::ReadBool_Overwrite((int)a1, (unsigned __int8 *)aAitriggertypes_0, v11, 0) /*0x41f46c*/
                               || g_GameMode_Current;
      }
LABEL_28:
      result = i; /*0x41f473*/
    }
  }
  return result; /*0x41f480*/
}
}
} // namespace gamemd

// 0x473450
namespace gamemd {
int CCINIClass::GetDB()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  return this->q004; /*0x473453*/
}
}
} // namespace gamemd

// 0x4741F0
namespace gamemd {
MultiplayerGameMode * * CCINIClass::Load(MultiplayerGameMode * aP1, char a3, char aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  CCINIClass *v5; // ebp
  int Base64Data; // eax
  CCINIClass *v7; // esi
  CCINIClass v10; // [esp+Ch] [ebp-A8h] BYREF
  v10.headNode[0] = 0; /*0x474213*/
  v10.headNode[1] = 0; /*0x474217*/
  v10.headNode[2] = (int)aP1; /*0x47421b*/
  LOBYTE(v10.sectionHead[0]) = 0; /*0x47421f*/
  *(_DWORD *)v10[0] = &vt_FileStraw; /*0x474223*/
  v5 = (CCINIClass *)INIClass::LoadFile(this, &v10, (INIClass *)aP2); /*0x474230*/
  this->ownsFile = 0; /*0x474232*/
  if ( !v5 || !a3 ) /*0x474244*/
    goto LABEL_7; /*0x474244*/
  int v11[5]; // [esp+A0h] [ebp-14h] BYREF
  Base64Data = INIClass::GetBase64Data(this, g_INI_Key_Digest[0], (int)v11, 0x14u); /*0x47425b*/
  if ( !Base64Data ) /*0x474262*/
  {
    v7 = (CCINIClass *)2; /*0x474264*/
    goto LABEL_8; /*0x474269*/
  }
  if ( Base64Data <= 0 ) /*0x47426e*/
    goto LABEL_7; /*0x47426e*/
  INIClass::ClearSection((int)this, &g_INI_Key_Digest, 0); /*0x47427d*/
  memset(&v10.sectionHead[2], 0, 9); /*0x474286*/
  v10.CCINIClass_field_4C = 0; /*0x474295*/
  v10.unknown50 = 0; /*0x474299*/
  v10.unknown38 = 1732584193; /*0x47429d*/
  v10.INIClass_field_3C = -271733879; /*0x4742a5*/
  *(_DWORD *)&v10.ownsFile = -1732584194; /*0x4742ad*/
  *(_DWORD *)&v10[68] = 271733878; /*0x4742b5*/
  *(_DWORD *)v10[72] = -1009589776; /*0x4742bd*/
  v10.sectionHead[1] = (int)&vt_SHAPipe; /*0x4742c5*/
  INIClass::WriteToString(this, (CCINIClass *)&v10.sectionHead[1]); /*0x4742cd*/
  SHA1::ComputeThunk(&v10.sectionHead[1], (ObjectClass *)(this + 65)); /*0x4742da*/
  this->ownsFile = 1; /*0x4742e3*/
  Pipe::Dtor(&v10.sectionHead[1]); /*0x4742e7*/
  bool v8 = memcmp(v11, this + 65, 0x14u) == 0; /*0x4742fa*/
  v7 = (CCINIClass *)2; /*0x4742fd*/
  if ( v8 ) /*0x474302*/
LABEL_7:
    v7 = v5; /*0x474304*/
LABEL_8:
  FileStraw::Destructor((int)&v10); /*0x474306*/
  return (int)v7->__pad_0; /*0x474311*/
}
}
} // namespace gamemd

// 0x535B30
namespace gamemd {
unsigned int * CCINIClass::CCINIClass()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  _DWORD *result; // eax

  result = this; /*0x535b30*/
  _DWORD * v2 = this + 4; /*0x535b36*/
  _DWORD * v3 = this + 7; /*0x535b39*/
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
    int v4 = v3[1]; /*0x535b66*/
    if ( v4 ) /*0x535b6b*/
    {
      int v5 = v3[2]; /*0x535b6d*/
      if ( v5 ) /*0x535b72*/
      {
        *(_DWORD *)(v5 + 4) = v4; /*0x535b74*/
        *(_DWORD *)(v3[1] + 8) = v3[2]; /*0x535b7d*/
        v3[2] = 0; /*0x535b80*/
        v3[1] = 0; /*0x535b83*/
      }
    }
  }
  int v6 = v2[1]; /*0x535b86*/
  v3[2] = v2; /*0x535b89*/
  v3[1] = v6; /*0x535b8c*/
  int v7 = v2[1]; /*0x535b8f*/
  if ( v7 ) /*0x535b94*/
    *(_DWORD *)(v7 + 8) = v3; /*0x535b96*/
  v2[1] = v3; /*0x535b99*/
  result[3] = &vt_List_INIClass_INISection; /*0x535b9c*/
  result[10] = 0; /*0x535ba4*/
  result[11] = 0; /*0x535ba7*/
  result[12] = 0; /*0x535baa*/
  result->q034 = 0; /*0x535bad*/
  result[14] = 0; /*0x535bb0*/
  result[15] = 0; /*0x535bb4*/
  result->ownsFile = 0; /*0x535bb7*/
  *result = &CCINIClass_Vtable; /*0x535bba*/
  return result; /*0x535ba3*/
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
    INIClass::GetString( (unsigned char ***)a1, (INIClass *)aAitriggertypes, StringByIndex, (INIClass *)&DataGlobal_87F8E4[42624], (INIClass *)Destination, 32);
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
    strcpy(Source[0], (const char *)(*(int *)&HouseClass_Array->__pad_0[4 * (int)i] + 90100));
    sprintf(Source[32], g_Str_Trace__d, i);
    INIClass::SetString(this->__pad_0, (INIClass *)&g_INI_Key_Country.headNode[1], (INIClass *)Source[32], &Source);
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
