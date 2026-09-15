// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

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

// 0x691D90
namespace gamemd {
int ScriptTypeClass::LoadTypeData(AbstractTypeClass * aP0, int aP1)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix_0((AbstractClass *)aP0, (AbstractClass *)aP1);
    if ( result >= 0 )
  {
    if ( aP0 )
    {
    AbstractTypeClass::Init((int)aP0, (AbstractTypeClass *)&aP1);
    *(int *)aP0->__pad_0 = (unsigned int)vt_ScriptTypeClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_ScriptTypeClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_ScriptTypeClass;
    *(int *)&aP0->__pad_0[12] = &vt_ScriptTypeClass;
    }
    return 0;
  }
    return result;
}
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

// 0x691FA0
namespace gamemd {
ScriptTypeClass * ScriptTypeClass::ddtor(char a2)
{
{
    int v3;
    void **v5;
    *(void**)this = vt_ScriptTypeClass;
    *(this + 1) = (unsigned int)vt_ScriptTypeClass;
    *(this + 2) = (unsigned int)vt_ScriptTypeClass;
    *(this + 3) = &vt_ScriptTypeClass;
    AbstractClass::AnnounceExpiredPointer(this, 1);
    v5 = this;
    v3 = (*(int (__thiscall **)(int *, void ***))(DataGlobal_8B41C8 + 16))(&DataGlobal_8B41C8, &v5);
    if ( v3 != -1 && v3 < g_MultiplayerDebugState && v3 < --g_MultiplayerDebugState )
  {
    do
    {
    ++v3;
    *((int *)(g_MultiplayerSyncState) + v3 - 1) = *((int *)(g_MultiplayerSyncState) + v3);
    }
    while ( v3 < g_MultiplayerDebugState );
  }
    AbstractTypeClass::Dtor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (ScriptTypeClass *)this;
}
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
