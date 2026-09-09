// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x691D50
namespace gamemd {
int ScriptTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall ScriptTypeClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x691d56*/
    return -2147467261; /*0x691d58*/
  *a2 = 1123264071; /*0x691d66*/
  a2[1] = 298977161; /*0x691d6e*/
  a2[2] = 1610655148; /*0x691d77*/
  a2[3] = -1252326136; /*0x691d80*/
  return 0; /*0x691d5d*/
}
}
} // namespace gamemd

// 0x691D90
namespace gamemd {
int ScriptTypeClass::LoadTypeData(AbstractTypeClass * aP0, int aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall ScriptTypeClass::LoadTypeData(AbstractTypeClass *aP0, int aP1)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0((AbstractClass *)aP0, (AbstractClass *)aP1); /*0x691d9b*/
  if ( result >= 0 ) /*0x691da2*/
  {
    if ( aP0 ) /*0x691da6*/
    {
      AbstractTypeClass::Init((int)aP0, (AbstractTypeClass *)&aP1); /*0x691daf*/
      *(_DWORD *)aP0->__pad_0 = &ScriptTypeClass::`vftable'; /*0x691db4*/
      *(_DWORD *)&aP0->__pad_0[4] = &ScriptTypeClass::`vftable'; /*0x691dba*/
      *(_DWORD *)&aP0->__pad_0[8] = &ScriptTypeClass::`vftable'; /*0x691dc1*/
      *(_DWORD *)&aP0->__pad_0[12] = &ScriptTypeClass::`vftable'; /*0x691dc8*/
    }
    return 0; /*0x691dcf*/
  }
  return result; /*0x691dd1*/
}
}
} // namespace gamemd

// 0x691DE0
namespace gamemd {
int ScriptTypeClass::SaveToINI(TechnoTypeClass * aP0, int * a1, int aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall ScriptTypeClass::SaveToINI(TechnoTypeClass *aP0, int *a1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x691def*/
  if ( result >= 0 ) /*0x691df6*/
    return 0; /*0x691df8*/
  return result; /*0x691dfa*/
}
}
} // namespace gamemd

// 0x691F70
namespace gamemd {
int ScriptTypeClass::GetTypeIdentifier()
{
return 27;
}
} // namespace gamemd

// 0x691F80
namespace gamemd {
int ScriptTypeClass::GetObjectSize()
{
return 564;
}
} // namespace gamemd

// 0x691FA0
namespace gamemd {
ScriptTypeClass * ScriptTypeClass::ddtor(void ** Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ScriptTypeClass *__thiscall ScriptTypeClass::ddtor(void **Block, char a2)
{
  int v3; // eax
  void **v5; // [esp+4h] [ebp-4h] BYREF

  *Block = &ScriptTypeClass::`vftable'; /*0x691fa6*/
  *(Block + 1) = &ScriptTypeClass::`vftable'; /*0x691fac*/
  *(Block + 2) = &ScriptTypeClass::`vftable'; /*0x691fb3*/
  *(Block + 3) = &ScriptTypeClass::`vftable'; /*0x691fba*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x691fc1*/
  v5 = Block; /*0x691fd6*/
  v3 = (*(int (__thiscall **)(int *, void ***))(dword_8B41C8 + 16))(&dword_8B41C8, &v5); /*0x691fda*/
  if ( v3 != -1 && v3 < dword_8B41D8 && v3 < --dword_8B41D8 ) /*0x691ff5*/
  {
    do /*0x69200d*/
    {
      ++v3; /*0x691ffd*/
      *((_DWORD *)unk_8B41CC + v3 - 1) = *((_DWORD *)unk_8B41CC + v3); /*0x692001*/
    }
    while ( v3 < dword_8B41D8 ); /*0x69200d*/
  }
  AbstractTypeClass::Dtor(Block); /*0x692011*/
  if ( (a2 & 1) != 0 ) /*0x69201b*/
    __3_YAXPAX_Z(Block); /*0x69201e*/
  return (ScriptTypeClass *)Block; /*0x692028*/
}
}
} // namespace gamemd

// 0x6E8340
namespace gamemd {
TaskForceClass * ScriptTypeClass::ReadINI(char * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
TaskForceClass *__fastcall ScriptTypeClass::ReadINI(char *a1, int a2)
{
  CCINIClass *KeyCount; // ebx
  CCINIClass *i; // edi
  unsigned __int8 *StringByIndex; // eax
  TaskForceClass *result; // eax
  INIClass *v7; // ebx
  int j; // ebp
  int v9; // edi
  INIClass *v10; // [esp-4h] [ebp-38h]
  char Buffer[32]; // [esp+14h] [ebp-20h] BYREF

  KeyCount = (CCINIClass *)INIClass::GetKeyCount(a1, (INIClass *)&stru_830620.__pad_579C[53244]); /*0x6e8357*/
  for ( i = 0; (int)i < (int)KeyCount; i = (CCINIClass *)((char *)i + 1) ) /*0x6e835d*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(a1, (CCINIClass *)&stru_830620.__pad_579C[53244], i); /*0x6e8367*/
    INIClass::GetString( /*0x6e8380*/
      (unsigned __int8 ***)a1,
      (INIClass *)&stru_830620.__pad_579C[53244],
      StringByIndex,
      (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
      (INIClass *)Buffer,
      32);
    INIClass::ClearSection((int)a1, (INIClass *)Buffer, 0); /*0x6e838e*/
  }
  INIClass::ClearSection((int)a1, (INIClass *)&stru_830620.__pad_579C[53244], 0); /*0x6e83a1*/
  result = *(TaskForceClass **)&MEMORY[0xA8D63C].__pad_1258[76]; /*0x6e83a6*/
  v7 = 0; /*0x6e83ab*/
  for ( j = 0; j < *(int *)&MEMORY[0xA8D63C].__pad_1258[76]; ++j ) /*0x6e83b1*/
  {
    v9 = *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_1258[64] + 4 * j); /*0x6e83bc*/
    if ( *(_DWORD *)(v9 + 160) == a2 ) /*0x6e83c5*/
    {
      v10 = v7; /*0x6e83cd*/
      v7 = (INIClass *)((char *)v7 + 1); /*0x6e83d4*/
      sprintf(Buffer, MEMORY[0x817F6C], v10); /*0x6e83d5*/
      String::Trim(Buffer); /*0x6e83e1*/
      INIClass::SetString(a1, (INIClass *)&stru_830620.__pad_579C[53244], (INIClass *)Buffer, (INIClass *)(v9 + 36)); /*0x6e83f6*/
      (*(void (__thiscall **)(int, char *))(*(_DWORD *)v9 + 104))(v9, a1); /*0x6e8400*/
    }
    result = *(TaskForceClass **)&MEMORY[0xA8D63C].__pad_1258[76]; /*0x6e8403*/
  }
  return result; /*0x6e840d*/
}
}
} // namespace gamemd
