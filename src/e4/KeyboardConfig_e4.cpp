// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Vector_e4.hpp"

// 0x533D20
void KeyboardConfig::LoadINI()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  const char *StringByIndex; // ebp
  int i; // [esp+4h] [ebp-CCh]
  int Int_Overwrite; // [esp+8h] [ebp-C8h]
  _BYTE v11[12]; // [esp+BCh] [ebp-14h] BYREF
  int v12; // [esp+C8h] [ebp-8h]
  void *v8[16]; // [esp+Ch] [ebp-C4h] BYREF
  INIClass::INIClass(v8); /*0x533d2b*/
  char v9 = 0; /*0x533d3b*/
  v8[0] = &CCINIClass_Vtable; /*0x533d3f*/
  _DWORD v10[22]; // [esp+64h] [ebp-6Ch] BYREF
  CCFileClass::Construct(v10, DataGlobal_827B88); /*0x533d47*/
  if ( CCINIClass::Load(v8, (int)v10, 0, 0) ) /*0x533d57*/
  {
    __3_YAXPAX_Z(Base); /*0x533d6c*/
    int v0 = 0; /*0x533d74*/
    Base = 0; /*0x533d7a*/
    NumOfElements = 0; /*0x533d85*/
    DataGlobal_87F688 = 0; /*0x533d8b*/
    g_FileSystemInitFlag = 0; /*0x533d91*/
    g_FileSystemPool = 0; /*0x533d97*/
    for ( i = 0; i < INIClass::GetKeyCount((char *)v8, (unsigned __int8 *)g_INI_Key_Hotkey); v0 = i ) /*0x533da8*/
    {
      StringByIndex = (const char *)INIClass::GetStringByIndex((char *)v8, (unsigned __int8 *)g_INI_Key_Hotkey, v0); /*0x533dbf*/
      int v2 = 0; /*0x533dd1*/
      Int_Overwrite = INIClass::ReadInt_Overwrite(g_INI_Key_Hotkey, StringByIndex, 0); /*0x533dd3*/
      if ( g_CommandClassVector_State > 0 ) /*0x533dde*/
      {
        while ( strcmp( /*0x533e1f*/
                  (const char *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)g_CommandClass_Capacity + v2) + 4))(*((_DWORD *)g_CommandClass_Capacity + v2)),
                  StringByIndex) )
        {
          if ( ++v2 >= g_CommandClassVector_State ) /*0x533e29*/
            goto LABEL_14; /*0x533e29*/
        }
        int v3 = *((_DWORD *)g_CommandClass_Capacity + v2); /*0x533e32*/
        if ( v3 && Int_Overwrite ) /*0x533e3f*/
        {
          int v4 = DataGlobal_87F688; /*0x533e47*/
          if ( (int)(NumOfElements + 1) <= DataGlobal_87F688 ) /*0x533e4f*/
            goto LABEL_13; /*0x533e4f*/
          if ( !DataGlobal_87F688 ) /*0x533e53*/
            v4 = 10; /*0x533e55*/
          if ( (unsigned __int8)KeyboardConfig::ReleaseBuffer(v4) ) /*0x533e60*/
          {
LABEL_13:
            *((_DWORD *)Base + 2 * NumOfElements) = Int_Overwrite; /*0x533e74*/
            *((_DWORD *)Base + 2 * NumOfElements + 1) = v3; /*0x533e83*/
            g_FileSystemInitFlag = 0; /*0x533e8d*/
            ++NumOfElements; /*0x533e93*/
          }
        }
      }
LABEL_14:
      ++i; /*0x533e98*/
    }
    v10[0] = &vt_CCFileClass; /*0x533ec0*/
    v12 = 0; /*0x533ec8*/
    Vector::Clear((int)v11); /*0x533ecf*/
    v10[0] = &off_7E1668; /*0x533ed8*/
    BufferIOFileClass::Dtor(v10); /*0x533ee0*/
    HashTable::DestroyHashTableINIClass(v8); /*0x533ee9*/
    return 1; /*0x533eee*/
  }
  else
  {
    Debug::Log(); /*0x533efe*/
    v10[0] = &vt_CCFileClass; /*0x533f0d*/
    v12 = 0; /*0x533f15*/
    Vector::Clear((int)v11); /*0x533f1c*/
    v10[0] = &off_7E1668; /*0x533f25*/
    BufferIOFileClass::Dtor(v10); /*0x533f2d*/
    HashTable::DestroyHashTableINIClass(v8); /*0x533f36*/
    return 0; /*0x533f3b*/
  }
}
}

// 0x538B80
void KeyboardConfig::ReleaseBuffer(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // ecx

  if ( a2 < 0 ) /*0x538b8c*/
    return 0; /*0x538b8c*/
  char * v3 = (char *)__2_YAPAXI_Z(8 * (a2 + *(_DWORD *)(this + 8))); /*0x538ba0*/
  if ( !v3 ) /*0x538ba7*/
    return 0; /*0x538c00*/
  int v5; // eax
  _DWORD *v6; // edx
  for ( i = 0; i < *(_DWORD *)(this + 4); *(_DWORD *)&v3[v5 + 4] = v6[1] ) /*0x538bb5*/
  {
    v5 = 8 * i; /*0x538bb9*/
    v6 = (_DWORD *)(*(_DWORD *)this + 8 * i++); /*0x538bc2*/
    *(_DWORD *)&v3[v5] = *v6; /*0x538bc7*/
  }
  __3_YAXPAX_Z(*(void **)this); /*0x538bdb*/
  int v7 = a2 + *(_DWORD *)(this + 8); /*0x538be6*/
  *(_DWORD *)this = v3; /*0x538be8*/
  *(_DWORD *)(this + 8) = v7; /*0x538bea*/
  *(_DWORD *)(this + 16) = 0; /*0x538bed*/
  return 1; /*0x538bf4*/
}
}
