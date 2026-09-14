// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

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
      *(_DWORD *)&aP0->__pad_0[12] = &vt_ScriptTypeClass; /*0x691dc8*/
    }
    return 0; /*0x691dcf*/
  }
  return result; /*0x691dd1*/
}
}
} // namespace gamemd

// 0x691FA0
namespace gamemd {
ScriptTypeClass * ScriptTypeClass::ddtor(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ScriptTypeClass *__thiscall ScriptTypeClass::ddtor(void **this, char a2)
{
  int v3; // eax
  void **v5; // [esp+4h] [ebp-4h] BYREF

  *this = &ScriptTypeClass::`vftable'; /*0x691fa6*/
  *(this + 1) = &ScriptTypeClass::`vftable'; /*0x691fac*/
  *(this + 2) = &ScriptTypeClass::`vftable'; /*0x691fb3*/
  *(this + 3) = &vt_ScriptTypeClass; /*0x691fba*/
  AbstractClass::AnnounceExpiredPointer(this, 1); /*0x691fc1*/
  v5 = this; /*0x691fd6*/
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
  AbstractTypeClass::Dtor(this); /*0x692011*/
  if ( (a2 & 1) != 0 ) /*0x69201b*/
    __3_YAXPAX_Z(this); /*0x69201e*/
  return (ScriptTypeClass *)this; /*0x692028*/
}
}
} // namespace gamemd

// 0x691D50
namespace gamemd {
int ScriptTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1123264071;
  a2[1] = 298977161;
  a2[2] = 1610655148;
  a2[3] = -1252326136;
  return 0;
}
} // namespace gamemd

// 0x691DE0
namespace gamemd {
int ScriptTypeClass::SaveToINI(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
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

// 0x6E8340
namespace gamemd {
TaskForceClass * ScriptTypeClass::ReadINI(char * a1, int a2)
{
{
    CCINIClass *KeyCount;
    CCINIClass *i;
    unsigned char *StringByIndex;
    TaskForceClass *result;
    INIClass *v7;
    int j;
    int v9;
    INIClass *v10;
    char Buffer[32];
    KeyCount = (CCINIClass *)INIClass::GetKeyCount(a1, (INIClass *)&DataGlobal_830620.__pad_579C[53244]);
    for ( i = 0; (int)i < (int)KeyCount; i = (CCINIClass *)((char *)(i) + 1) )
  {
    StringByIndex = (unsigned char *)INIClass::GetStringByIndex(a1, (CCINIClass *)&DataGlobal_830620.__pad_579C[53244], i);
    INIClass::GetString( (unsigned char ***)a1, (INIClass *)&DataGlobal_830620.__pad_579C[53244], StringByIndex, (INIClass *)&DataGlobal_87F8E4.__pad_5568[20760], (INIClass *)Buffer, 32);
    INIClass::ClearSection((int)a1, (INIClass *)Buffer, 0);
  }
    INIClass::ClearSection((int)a1, (INIClass *)&DataGlobal_830620.__pad_579C[53244], 0);
    result = *(TaskForceClass **)&g_NetworkPlayerBuffer.__pad_1258[76];
    v7 = 0;
    for ( j = 0; j < *(int *)&g_NetworkPlayerBuffer.__pad_1258[76]; ++j )
  {
    v9 = *(int *)(*(int *)&g_NetworkPlayerBuffer.__pad_1258[64] + 4 * j);
    if ( *(int *)(v9 + 160) == a2 )
    {
    v10 = v7;
    v7 = (INIClass *)((char *)(v7) + 1);
    sprintf(Buffer, g_Str_Trace__d, v10);
    String::Trim(Buffer);
    INIClass::SetString(a1, (INIClass *)&DataGlobal_830620.__pad_579C[53244], (INIClass *)Buffer, (INIClass *)(v9 + 36));
    (*(void (__thiscall **)(int, char *))(*(int *)(v9) + 104))(v9, a1);
    }
    result = *(TaskForceClass **)&g_NetworkPlayerBuffer.__pad_1258[76];
  }
    return result;
}
}
} // namespace gamemd
