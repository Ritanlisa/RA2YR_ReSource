// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x49F8B0
LSTATUS WinMain::CleanupResource()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LSTATUS __thiscall WinMain::CleanupResource(AnimClass *this)
{
  LSTATUS result; // eax
  HKEY phkResult; // [esp+0h] [ebp-4h] BYREF

  phkResult = (HKEY)this; /*0x49f8b0*/
  Debug::Log(); /*0x49f8b6*/
  if ( MEMORY[0x89F75C] ) /*0x49f8c5*/
  {
    UnmapViewOfFile(MEMORY[0x89F75C]); /*0x49f8c8*/
    MEMORY[0x89F75C] = 0; /*0x49f8ce*/
  }
  result = RegOpenKeyExA(HKEY_CLASSES_ROOT, SubKey, 0, 0xF003Fu, &phkResult); /*0x49f8ee*/
  if ( !result ) /*0x49f8f6*/
  {
    RegDeleteValueA(phkResult, ValueName); /*0x49f902*/
    return RegCloseKey(phkResult); /*0x49f90d*/
  }
  return result; /*0x49f914*/
}
}

// 0x5BC180
namespace gamemd {
unsigned char WinMain_Create(ObjectClass * aP0, HWND a2, char a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned __int8 __fastcall WinMain_Create(ObjectClass *aP0, HWND a2, char a3)
{
  CoordStruct **v3; // edi
  ObjectClass *v4; // eax
  ObjectClass *v5; // esi
  int v6; // edi
  int *p_health; // ebp
  char *v8; // ecx
  int *v9; // eax
  int v10; // edx
  CoordStruct **v11; // ebx
  CoordStruct *v12; // ecx
  int v13; // edi
  int p_Z; // ebp
  _BYTE *v15; // edx
  _DWORD *v16; // eax
  int v17; // esi
  unsigned __int8 result; // al
  CoordStruct **v19; // [esp+10h] [ebp-4h]
  char *v20; // [esp+18h] [ebp+4h]

  v3 = &g_MatrixTransformState + 214; /*0x5bc18b*/
  *(&g_MatrixTransformState + 264) = (CoordStruct *)aP0; /*0x5bc190*/
  *(&g_MatrixTransformState + 265) = (CoordStruct *)a2; /*0x5bc196*/
  *((_BYTE *)&(&g_MatrixTransformState)[22] + 8) = a3; /*0x5bc19c*/
  v20 = 0; /*0x5bc1a1*/
  v19 = &g_MatrixTransformState + 214; /*0x5bc1a5*/
  do /*0x5bc24f*/
  {
    v4 = (ObjectClass *)__2_YAPAXI_Z(0x2738u); /*0x5bc1ae*/
    v5 = v4; /*0x5bc1b3*/
    if ( v4 ) /*0x5bc1ba*/
    {
      v4[58].objectTypeFlags = 0; /*0x5bc1c0*/
      v4[58].NeedsSaveOrLink = v20; /*0x5bc1c6*/
      v4[58].owningHouseIndex = 0; /*0x5bc1cc*/
      v4[58].fallRate = 0; /*0x5bc1d2*/
      v4[58].nextObject = 0; /*0x5bc1d8*/
      v4[58].attachedTag = (void *)80; /*0x5bc1de*/
      v4[58].attachedBomb = (void *)25; /*0x5bc1e8*/
      v6 = 0; /*0x5bc1f2*/
      p_health = &v4[11].health; /*0x5bc1f4*/
      do /*0x5bc219*/
      {
        v8 = &v5->__pad_0[v6]; /*0x5bc1fa*/
        v9 = p_health; /*0x5bc1fd*/
        v10 = 80; /*0x5bc1ff*/
        do /*0x5bc210*/
        {
          *v8 = 32; /*0x5bc204*/
          *v9 = 0; /*0x5bc207*/
          v9 += 25; /*0x5bc209*/
          v8 += 25; /*0x5bc20c*/
          --v10; /*0x5bc20f*/
        }
        while ( v10 ); /*0x5bc210*/
        ++v6; /*0x5bc212*/
        ++p_health; /*0x5bc213*/
      }
      while ( v6 < 25 ); /*0x5bc219*/
      LOBYTE(v5[58].ambientSoundController[0]) = 1; /*0x5bc223*/
      Text::DrawRepeated(v5, 0, 0, 80, 25); /*0x5bc22a*/
      v3 = v19; /*0x5bc22f*/
    }
    else
    {
      v5 = 0; /*0x5bc235*/
    }
    *v3++ = (CoordStruct *)v5; /*0x5bc23b*/
    ++v20; /*0x5bc247*/
    v19 = v3; /*0x5bc24b*/
  }
  while ( (int)v3 < (int)(&g_MatrixTransformState + 222) ); /*0x5bc24f*/
  v11 = &g_MatrixTransformState + 214; /*0x5bc25b*/
  *(&g_MatrixTransformState + 267) = *(&g_MatrixTransformState + 214); /*0x5bc260*/
  do /*0x5bc2b2*/
  {
    v12 = *v11; /*0x5bc266*/
    v13 = 0; /*0x5bc268*/
    p_Z = (int)&(*v11)[166].Z; /*0x5bc26a*/
    do /*0x5bc293*/
    {
      v15 = (char *)v12 + v13; /*0x5bc270*/
      v16 = (_DWORD *)p_Z; /*0x5bc273*/
      v17 = 80; /*0x5bc275*/
      do /*0x5bc28a*/
      {
        *v15 = 32; /*0x5bc27a*/
        *v16 = 0; /*0x5bc27d*/
        v16 += 25; /*0x5bc283*/
        v15 += 25; /*0x5bc286*/
        --v17; /*0x5bc289*/
      }
      while ( v17 ); /*0x5bc28a*/
      ++v13; /*0x5bc28c*/
      p_Z += 4; /*0x5bc28d*/
    }
    while ( v13 < 25 ); /*0x5bc293*/
    LOBYTE(v12[836].Y) = 1; /*0x5bc29d*/
    Text::DrawRepeated(v12, 0, 0, 80, 25); /*0x5bc2a4*/
    ++v11; /*0x5bc2a9*/
  }
  while ( (int)v11 < (int)(&g_MatrixTransformState + 222) ); /*0x5bc2b2*/
  result = *((_BYTE *)&(&g_MatrixTransformState)[22] + 9); /*0x5bc2b4*/
  if ( *((_BYTE *)&(&g_MatrixTransformState)[22] + 9) ) /*0x5bc2bf*/
  {
    result = *((_BYTE *)&(&g_MatrixTransformState)[22] + 8); /*0x5bc2c1*/
    if ( *((_BYTE *)&(&g_MatrixTransformState)[22] + 8) ) /*0x5bc2c8*/
    {
      if ( !*(&g_MatrixTransformState + 268) ) /*0x5bc2d1*/
        CreateDebugOutput(); /*0x5bc2d3*/
      *((_BYTE *)&(&g_MatrixTransformState)[22] + 10) = 1; /*0x5bc2e0*/
      ShowWindow((HWND)*(&g_MatrixTransformState + 268), 1); /*0x5bc2e7*/
      return (unsigned __int8)SetFocus((HWND)*(&g_MatrixTransformState + 265)); /*0x5bc2f4*/
    }
  }
  return result; /*0x5bc2b9*/
}
}
} // namespace gamemd

// 0x69A1F0
int WinMain::Constructor_VectorClass_Wstring_()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_69A1F0(_DWORD *this)
{
  int i; // ebp
  int v3; // esi
  void *v4; // eax
  int j; // esi
  int k; // esi

  for ( i = 0; i < *(this + 424); ++i ) /*0x69a200*/
  {
    v3 = *(_DWORD *)(*(this + 421) + 4 * i); /*0x69a208*/
    if ( v3 ) /*0x69a20d*/
    {
      *(_DWORD *)(v3 + 420) = &vt_VectorClass_Wstring; /*0x69a215*/
      VectorClass_Wstring::ddtor(v3 + 420); /*0x69a21b*/
      v4 = *(void **)(v3 + 396); /*0x69a220*/
      *(_DWORD *)(v3 + 392) = &vt_VectorClass_enum_DiskID; /*0x69a226*/
      if ( v4 && *(_BYTE *)(v3 + 405) ) /*0x69a234*/
      {
        __3_YAXPAX_Z(v4); /*0x69a23d*/
        *(_DWORD *)(v3 + 396) = 0; /*0x69a245*/
      }
      *(_BYTE *)(v3 + 405) = 0; /*0x69a24c*/
      *(_DWORD *)(v3 + 400) = 0; /*0x69a252*/
      __3_YAXPAX_Z((void *)v3); /*0x69a258*/
    }
  }
  (*(void (__thiscall **)(_DWORD *))(*(this + 420) + 12))(this + 420); /*0x69a277*/
  for ( j = 0; j < *(this + 2633); ++j ) /*0x69a284*/
    __3_YAXPAX_Z(*(void **)(*(this + 2630) + 4 * j)); /*0x69a290*/
  (*(void (__thiscall **)(_DWORD *))(*(this + 2629) + 12))(this + 2629); /*0x69a2af*/
  for ( k = 0; k < *(this + 2627); ++k ) /*0x69a2bc*/
  {
    if ( *(_DWORD *)(*(this + 2624) + 4 * k) ) /*0x69a2c4*/
      __3_YAXPAX_Z(*(void **)(*(this + 2624) + 4 * k)); /*0x69a2cc*/
  }
  return (*(int (__thiscall **)(_DWORD *))(*(this + 2623) + 12))(this + 2623); /*0x69a2ee*/
}
}

// 0x734D30
unsigned int * WinMain::ShutdownCleanup()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *WinMain_ShutdownCleanup()
{
  void **i; // eax
  void **v1; // ecx
  int j; // esi
  void **v3; // ecx
  int k; // esi
  _DWORD *result; // eax
  _DWORD *v6; // esi

  for ( i = (void **)unk_B1CF8C; unk_B1CF8C; i = (void **)unk_B1CF8C ) /*0x734d3b*/
  {
    unk_B1CF8C = *i; /*0x734d40*/
    __3_YAXPAX_Z(i); /*0x734d46*/
  }
  v1 = (void **)unk_B1CF78; /*0x734d57*/
  unk_B1CF8C = 0; /*0x734d5d*/
  if ( unk_B1CF78 ) /*0x734d65*/
  {
    for ( j = 0; j < unk_B1CF70; ++j ) /*0x734d70*/
    {
      if ( v1[j] ) /*0x734d72*/
      {
        __3_YAXPAX_Z(v1[j]); /*0x734d7a*/
        v1 = (void **)unk_B1CF78; /*0x734d7f*/
      }
    }
    __3_YAXPAX_Z(v1); /*0x734d93*/
    unk_B1CF78 = 0; /*0x734d9b*/
  }
  v3 = (void **)unk_B1CF7C; /*0x734da1*/
  if ( unk_B1CF7C ) /*0x734da9*/
  {
    for ( k = 0; k < unk_B1CF70; ++k ) /*0x734db4*/
    {
      if ( v3[k] ) /*0x734db6*/
      {
        __3_YAXPAX_Z(v3[k]); /*0x734dbe*/
        v3 = (void **)unk_B1CF7C; /*0x734dc3*/
      }
    }
    __3_YAXPAX_Z(v3); /*0x734dd7*/
    unk_B1CF7C = 0; /*0x734ddf*/
  }
  if ( dword_B1CF74 ) /*0x734dec*/
  {
    __3_YAXPAX_Z(dword_B1CF74); /*0x734def*/
    dword_B1CF74 = 0; /*0x734df7*/
  }
  result = unk_B1CF88; /*0x734dfd*/
  if ( unk_B1CF88 ) /*0x734e04*/
  {
    do /*0x734e15*/
    {
      v6 = (_DWORD *)*result; /*0x734e06*/
      __3_YAXPAX_Z(result); /*0x734e09*/
      result = v6; /*0x734e13*/
    }
    while ( v6 ); /*0x734e15*/
  }
  unk_B1CF88 = 0; /*0x734e17*/
  unk_B1CF80 = 0; /*0x734e1d*/
  return result; /*0x734e23*/
}
}

// 0x5D7E50
namespace gamemd {
char sub_5D7E50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_5D7E50()
{
  int i; // ebp
  char result; // al
  void (__thiscall ***v2)(_DWORD, int); // ecx

  for ( i = 0; ; ++i ) /*0x5d7e56*/
  {
    result = MEMORY[0xABFD70]; /*0x5d7e62*/
    if ( (MEMORY[0xABFD70] & 1) == 0 ) /*0x5d7e69*/
    {
      MEMORY[0xABFDA4] = 0; /*0x5d7e75*/
      MEMORY[0xABFD70] |= 1u; /*0x5d7e7b*/
      MEMORY[0xABFDA8] = 0; /*0x5d7e81*/
      MEMORY[0xABFDAC] = 1; /*0x5d7e87*/
      MEMORY[0xABFDAD] = 0; /*0x5d7e8e*/
      MEMORY[0xABFDA0] = (int)&vt_DynamicVectorClass_MultiplayerGameMode; /*0x5d7e94*/
      MEMORY[0xABFDB4] = 10; /*0x5d7e9a*/
      MEMORY[0xABFDB0] = 0; /*0x5d7ea0*/
      result = atexit(MultiplayerConfig::Cleanup); /*0x5d7ea6*/
    }
    if ( i >= MEMORY[0xABFDB0] ) /*0x5d7eb4*/
      break; /*0x5d7eb4*/
    if ( (MEMORY[0xABFD70] & 1) == 0 ) /*0x5d7ebd*/
    {
      MEMORY[0xABFDA4] = 0; /*0x5d7ec9*/
      MEMORY[0xABFD70] |= 1u; /*0x5d7ecf*/
      MEMORY[0xABFDA8] = 0; /*0x5d7ed5*/
      MEMORY[0xABFDAC] = 1; /*0x5d7edb*/
      MEMORY[0xABFDAD] = 0; /*0x5d7ee2*/
      MEMORY[0xABFDA0] = (int)&vt_DynamicVectorClass_MultiplayerGameMode; /*0x5d7ee8*/
      MEMORY[0xABFDB4] = 10; /*0x5d7eee*/
      MEMORY[0xABFDB0] = 0; /*0x5d7ef4*/
      atexit(MultiplayerConfig::Cleanup); /*0x5d7efa*/
    }
    v2 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)MEMORY[0xABFDA4] + i); /*0x5d7f07*/
    if ( v2 ) /*0x5d7f0c*/
      (**v2)(v2, 1); /*0x5d7f12*/
  }
  return result; /*0x5d7f1a*/
}
}
} // namespace gamemd

// 0x637070
namespace gamemd {
int sub_637070()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_637070()
{
  MEMORY[0xAC4CF4] = 0; /*0x637074*/
  MEMORY[0xAC4CF5] = 0; /*0x637079*/
  MEMORY[0xAC4CCC] = 0; /*0x63707e*/
  MEMORY[0xAC4C38] = 0; /*0x637083*/
  MEMORY[0xAC4BF0] = 0; /*0x637088*/
  MEMORY[0xAC4C68] = 0; /*0x63708d*/
  MEMORY[0xAC4C6C] = 0; /*0x637092*/
  MEMORY[0xAC4CB0] = 0; /*0x637098*/
  return 0; /*0x63709d*/
}
}
} // namespace gamemd

// 0x7B84F0
namespace gamemd {
HANDLE sub_7B84F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HANDLE sub_7B84F0()
{
  HANDLE result; // eax
  DWORD LastError; // eax
  CHAR Buffer[1024]; // [esp+4h] [ebp-400h] BYREF

  result = hMutex; /*0x7b84f0*/
  if ( !hMutex ) /*0x7b8500*/
  {
    result = CreateMutexA(0, 0, 0); /*0x7b8505*/
    hMutex = result; /*0x7b850b*/
  }
  if ( !dword_B7816C ) /*0x7b8516*/
  {
    if ( result ) /*0x7b851e*/
    {
      dword_B78138 = 0; /*0x7b8524*/
      dword_B78140 = 0; /*0x7b852a*/
      dword_B78150 = 0; /*0x7b8530*/
      dword_B78148 = 16; /*0x7b8536*/
      dword_B7814C = 0; /*0x7b8540*/
      dword_B7813C = 0; /*0x7b8546*/
      result = CreateThread(0, 0x1000u, (LPTHREAD_START_ROUTINE)sub_7B8610, &dword_B78138, 0, &dword_B78158); /*0x7b8562*/
      dword_B78154 = result; /*0x7b856a*/
      if ( result ) /*0x7b856f*/
      {
        dword_B7816C = 1; /*0x7b8578*/
        result = (HANDLE)SetThreadPriority(result, 15); /*0x7b8582*/
        if ( !result ) /*0x7b858a*/
        {
          LastError = GetLastError(); /*0x7b8598*/
          FormatMessageA(0x1000u, 0, LastError, 0, Buffer, 0x400u, 0); /*0x7b85a5*/
          Debug::Log(); /*0x7b85b5*/
          while ( !dword_B78140 ) /*0x7b85c4*/
            Sleep(0); /*0x7b85ce*/
          WaitForSingleObject(dword_B78154, 0x1388u); /*0x7b85e6*/
          result = (HANDLE)CloseHandle(dword_B78154); /*0x7b85f2*/
          dword_B7816C = 0; /*0x7b85f8*/
        }
      }
    }
  }
  return result; /*0x7b85fe*/
}
}
} // namespace gamemd

// 0x53E6B0
namespace gamemd {
void sub_53E6B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_53E6B0()
{
  signed int SampleSize; // eax

  if ( unk_AA0448 ) /*0x53e6b7*/
  {
    EnterCriticalSection(&unk_AA0418); /*0x53e6be*/
    if ( unk_AA0468 && unk_AA045C && unk_AA0444 == 1 ) /*0x53e6dd*/
    {
      if ( unk_AA0464 ) /*0x53e6e7*/
      {
        SampleSize = Audio::GetSampleSize((_DWORD *)unk_AA0464); /*0x53e6eb*/
        WriteAudioStreamToFile(unk_AA0464, unk_AA0468, SampleSize, 0); /*0x53e6fd*/
        fflush(unk_AA0468); /*0x53e708*/
      }
    }
    LeaveCriticalSection(&unk_AA0418); /*0x53e715*/
  }
}
}
} // namespace gamemd
