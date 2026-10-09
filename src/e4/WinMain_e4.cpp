// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Text_e4.hpp"
#include "e4/classes/E4Recv_6BFD40_e4.hpp"
#include "e4/classes/E4Recv_6BFEC0_e4.hpp"
#include "e4/classes/E4Recv_6C0040_e4.hpp"
#include "e4/classes/E4Recv_6C01C0_e4.hpp"
#include "e4/classes/E4Recv_6C0340_e4.hpp"
#include "e4/classes/E4Recv_6C04C0_e4.hpp"
#include "e4/classes/E4Recv_6C0640_e4.hpp"
#include "e4/classes/E4Recv_6C07C0_e4.hpp"
#include "e4/classes/E4Recv_6C0940_e4.hpp"
#include "e4/classes/E4Recv_6C0C40_e4.hpp"
#include "e4/classes/E4Recv_6C0DC0_e4.hpp"
#include "e4/classes/E4Recv_6C0F40_e4.hpp"
#include "e4/classes/E4Recv_6C10C0_e4.hpp"
#include "e4/classes/E4Recv_6C1240_e4.hpp"
#include "e4/classes/E4Recv_6C13C0_e4.hpp"
#include "e4/classes/E4Recv_6C1540_e4.hpp"
#include "e4/classes/E4Recv_6C16C0_e4.hpp"
#include "e4/classes/E4Recv_6C1840_e4.hpp"
#include "e4/classes/E4Recv_6C19C0_e4.hpp"
#include "e4/classes/E4Recv_6C1B40_e4.hpp"
#include "e4/classes/E4Recv_6C1CC0_e4.hpp"
#include "e4/classes/E4Recv_6C1E40_e4.hpp"
#include "e4/classes/E4Recv_6C1FC0_e4.hpp"
#include "e4/classes/E4Recv_6C2140_e4.hpp"
#include "e4/classes/E4Recv_6C22C0_e4.hpp"
#include "e4/classes/E4Recv_6C2440_e4.hpp"
#include "e4/classes/E4Recv_6C25C0_e4.hpp"
#include "e4/classes/E4Recv_6C2740_e4.hpp"
#include "e4/classes/E4Recv_6C28C0_e4.hpp"
#include "e4/classes/E4Recv_6C2A40_e4.hpp"
#include "e4/classes/E4Recv_6C2BC0_e4.hpp"
#include "e4/classes/E4Recv_6C2D40_e4.hpp"
#include "e4/classes/E4Recv_6C2EC0_e4.hpp"
#include "e4/classes/E4Recv_6C3040_e4.hpp"
#include "e4/classes/E4Recv_6C31C0_e4.hpp"
#include "e4/classes/E4Recv_6C3340_e4.hpp"
#include "e4/classes/E4Recv_6C34C0_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/VectorClass_Wstring_e4.hpp"
#include "e4/classes/E4Recv_6C3640_e4.hpp"
#include "e4/classes/E4Recv_6C37C0_e4.hpp"
#include "e4/classes/E4Recv_6C3940_e4.hpp"
#include "e4/classes/E4Recv_6C3AC0_e4.hpp"
#include "e4/classes/E4Recv_6C3C40_e4.hpp"
#include "e4/classes/E4Recv_6C3DC0_e4.hpp"
#include "e4/classes/E4Recv_6C3F40_e4.hpp"
#include "e4/classes/E4Recv_6C40C0_e4.hpp"
#include "e4/classes/E4Recv_6C4240_e4.hpp"
#include "e4/classes/E4Recv_6C43C0_e4.hpp"
#include "e4/classes/E4Recv_6C4540_e4.hpp"
#include "e4/classes/E4Recv_6C46C0_e4.hpp"
#include "e4/classes/E4Recv_6C4840_e4.hpp"
#include "e4/classes/E4Recv_6C49C0_e4.hpp"
#include "e4/classes/E4Recv_6C4B40_e4.hpp"
#include "e4/classes/E4Recv_6C4CC0_e4.hpp"
#include "e4/classes/E4Recv_6C4E40_e4.hpp"
#include "e4/classes/E4Recv_6C4FC0_e4.hpp"
#include "e4/classes/E4Recv_6C5140_e4.hpp"
#include "e4/classes/E4Recv_6C52C0_e4.hpp"
#include "e4/classes/E4Recv_6C5440_e4.hpp"
#include "e4/classes/E4Recv_6C55C0_e4.hpp"
#include "e4/classes/E4Recv_6C5740_e4.hpp"
#include "e4/classes/E4Recv_6C58C0_e4.hpp"
#include "e4/classes/E4Recv_6C5A40_e4.hpp"
#include "e4/classes/E4Recv_6C5BC0_e4.hpp"
#include "e4/classes/E4Recv_6C5D40_e4.hpp"
#include "e4/classes/E4Recv_6C5EC0_e4.hpp"
#include "e4/classes/E4Recv_6C6040_e4.hpp"
#include "e4/classes/RAMFileClass_e4.hpp"
#include "e4/classes/WinMain_e4.hpp"
#include "e4/classes/AsyncIO_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/WinModemClass_e4.hpp"
#include "e4/classes/Window_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/NullModemClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/WinsockInterface_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/WWMouseClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/Winsock_e4.hpp"
#include "e4/classes/WonlineStringDialogControl_12_e4.hpp"
#include "e4/classes/LoadingScreen_e4.hpp"
#include "e4/classes/DDraw_e4.hpp"
#include "e4/classes/WebBrowser_e4.hpp"
#include "e4/classes/MultiplayerConfig_e4.hpp"
#include "e4/classes/Text_e4.hpp"

// 0x5BC180
namespace gamemd {
unsigned __int8 WinMain_Create(ObjectClass * aP0, HWND a2, char a3)
{
  int *v3; // edi
  _DWORD *v4; // eax
  _BYTE *v5; // esi
  int v6; // edi
  _DWORD *v7; // ebp
  _BYTE *v8; // ecx
  _DWORD *v9; // eax
  int v10; // edx
  int *v11; // ebx
  _BYTE *v12; // ecx
  int v13; // edi
  int v14; // ebp
  _BYTE *v15; // edx
  _DWORD *v16; // eax
  int v17; // esi
  unsigned __int8 result; // al
  int *v19; // [esp+10h] [ebp-4h]
  int v20; // [esp+18h] [ebp+4h]

  v3 = dword_ABF168; /*0x5bc18b*/
  dword_ABF230 = aP0; /*0x5bc190*/
  dword_ABF234 = a2; /*0x5bc196*/
  byte_ABF238 = a3; /*0x5bc19c*/
  v20 = 0; /*0x5bc1a1*/
  v19 = dword_ABF168; /*0x5bc1a5*/
  do /*0x5bc24f*/
  {
    v4 = RA2_OPNEW(0x2738u); /*0x5bc1ae*/
    v5 = v4; /*0x5bc1b3*/
    if ( v4 ) /*0x5bc1ba*/
    {
      v4[2503] = 0; /*0x5bc1c0*/
      v4[2502] = v20; /*0x5bc1c6*/
      v4[2504] = 0; /*0x5bc1cc*/
      v4[2505] = 0; /*0x5bc1d2*/
      v4[2506] = 0; /*0x5bc1d8*/
      v4[2507] = 80; /*0x5bc1de*/
      v4[2508] = 25; /*0x5bc1e8*/
      v6 = 0; /*0x5bc1f2*/
      v7 = v4 + 500; /*0x5bc1f4*/
      do /*0x5bc219*/
      {
        v8 = &v5[v6]; /*0x5bc1fa*/
        v9 = v7; /*0x5bc1fd*/
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
        ++v7; /*0x5bc213*/
      }
      while ( v6 < 25 ); /*0x5bc219*/
      v5[10036] = 1; /*0x5bc223*/
      Text::DrawRepeated(v5, 0, 0, 80, 25); /*0x5bc22a*/
      v3 = v19; /*0x5bc22f*/
    }
    else
    {
      v5 = 0; /*0x5bc235*/
    }
    *v3++ = (int)v5; /*0x5bc23b*/
    ++v20; /*0x5bc247*/
    v19 = v3; /*0x5bc24b*/
  }
  while ( (int)v3 < (int)&dword_ABF188 ); /*0x5bc24f*/
  v11 = dword_ABF168; /*0x5bc25b*/
  dword_ABF23C = dword_ABF168[0]; /*0x5bc260*/
  do /*0x5bc2b2*/
  {
    v12 = (_BYTE *)*v11; /*0x5bc266*/
    v13 = 0; /*0x5bc268*/
    v14 = *v11 + 2000; /*0x5bc26a*/
    do /*0x5bc293*/
    {
      v15 = &v12[v13]; /*0x5bc270*/
      v16 = (_DWORD *)v14; /*0x5bc273*/
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
      v14 += 4; /*0x5bc28d*/
    }
    while ( v13 < 25 ); /*0x5bc293*/
    v12[10036] = 1; /*0x5bc29d*/
    Text::DrawRepeated(v12, 0, 0, 80, 25); /*0x5bc2a4*/
    ++v11; /*0x5bc2a9*/
  }
  while ( (int)v11 < (int)&dword_ABF188 ); /*0x5bc2b2*/
  result = byte_ABF239; /*0x5bc2b4*/
  if ( byte_ABF239 ) /*0x5bc2bf*/
  {
    result = byte_ABF238; /*0x5bc2c1*/
    if ( byte_ABF238 ) /*0x5bc2c8*/
    {
      if ( !dword_ABF240 ) /*0x5bc2d1*/
        CreateDebugOutput(); /*0x5bc2d3*/
      byte_ABF23A = 1; /*0x5bc2e0*/
      ShowWindow(dword_ABF240, 1); /*0x5bc2e7*/
      return (unsigned __int8)SetFocus(dword_ABF234); /*0x5bc2f4*/
    }
  }
  return result; /*0x5bc2b9*/
}
}
// 0x69A1F0
namespace gamemd {  // G42.18c ns repair
int WinMain::Constructor_VectorClass_Wstring_()
{
  int i; // ebp
  int v3; // esi
  void *v4; // eax
  int j; // esi
  int k; // esi

  for ( i = 0; i < this->u32_6A0; ++i ) /*0x69a200*/
  {
    v3 = *(_DWORD *)(this->u32_694 + 4 * i); /*0x69a208*/
    if ( v3 ) /*0x69a20d*/
    {
      v3->u32_1A4 = &(void*)(void*)&VectorClass_Wstring_vftable; /*0x69a215*/
      VectorClass_Wstring::ddtor((_VectorClass_VWstring *)(v3 + 420)); /*0x69a21b*/
      v4 = *(void **)(v3 + 396); /*0x69a220*/
      *(_DWORD *)(v3 + 392) = &(void*)(void*)&VectorClass_enum_DiskID_vftable; /*0x69a226*/
      if ( v4 && *(_BYTE *)(v3 + 405) ) /*0x69a234*/
      {
        RA2_OPDEL(v4); /*0x69a23d*/
        *(_DWORD *)(v3 + 396) = 0; /*0x69a245*/
      }
      *(_BYTE *)(v3 + 405) = 0; /*0x69a24c*/
      *(_DWORD *)(v3 + 400) = 0; /*0x69a252*/
      RA2_OPDEL((void *)v3); /*0x69a258*/
    }
  }
  (*(void (__thiscall **)(WinMain *))(this->u32_690 + 12))(&this->u32_2A00); /*0x69a277*/
  for ( j = 0; j < this->u32_2924; ++j ) /*0x69a284*/
    RA2_OPDEL(*(void **)(this->u32_2918 + 4 * j)); /*0x69a290*/
  (*(void (__thiscall **)(WinMain *))(this->u32_2914 + 12))(&this->u32_106C6); /*0x69a2af*/
  for ( k = 0; k < this->u32_290C; ++k ) /*0x69a2bc*/
  {
    if ( *(_DWORD *)(this->u32_2900 + 4 * k) ) /*0x69a2c4*/
      RA2_OPDEL(*(void **)(this->u32_2900 + 4 * k)); /*0x69a2cc*/
  }
  return (*(int (__thiscall **)(WinMain *))(this->u32_28FC + 12))(&this->u32_10642); /*0x69a2ee*/
}
}  // G42.18c ns repair
// 0x734D30
namespace gamemd {  // G42.18c ns repair
unsigned int * WinMain::ShutdownCleanup()
{
  void **i; // eax
  void **v2; // ecx
  int j; // esi
  void **v4; // ecx
  int k; // esi
  _DWORD *result; // eax
  _DWORD *v7; // esi

  for ( i = (void **)dword_B1CF8C; dword_B1CF8C; i = (void **)dword_B1CF8C ) /*0x734d3b*/
  {
    dword_B1CF8C = *i; /*0x734d40*/
    RA2_OPDEL(i); /*0x734d46*/
  }
  v2 = (void **)dword_B1CF78; /*0x734d57*/
  dword_B1CF8C = 0; /*0x734d5d*/
  if ( dword_B1CF78 ) /*0x734d65*/
  {
    for ( j = 0; j < dword_B1CF70; ++j ) /*0x734d70*/
    {
      if ( v2[j] ) /*0x734d72*/
      {
        RA2_OPDEL(v2[j]); /*0x734d7a*/
        v2 = (void **)dword_B1CF78; /*0x734d7f*/
      }
    }
    RA2_OPDEL(v2); /*0x734d93*/
    dword_B1CF78 = 0; /*0x734d9b*/
  }
  v4 = (void **)dword_B1CF7C; /*0x734da1*/
  if ( dword_B1CF7C ) /*0x734da9*/
  {
    for ( k = 0; k < dword_B1CF70; ++k ) /*0x734db4*/
    {
      if ( v4[k] ) /*0x734db6*/
      {
        RA2_OPDEL(v4[k]); /*0x734dbe*/
        v4 = (void **)dword_B1CF7C; /*0x734dc3*/
      }
    }
    RA2_OPDEL(v4); /*0x734dd7*/
    dword_B1CF7C = 0; /*0x734ddf*/
  }
  if ( dword_B1CF74 ) /*0x734dec*/
  {
    RA2_OPDEL(dword_B1CF74); /*0x734def*/
    dword_B1CF74 = 0; /*0x734df7*/
  }
  result = dword_B1CF88; /*0x734dfd*/
  if ( dword_B1CF88 ) /*0x734e04*/
  {
    do /*0x734e15*/
    {
      v7 = (_DWORD *)*result; /*0x734e06*/
      RA2_OPDEL(result); /*0x734e09*/
      result = v7; /*0x734e13*/
    }
    while ( v7 ); /*0x734e15*/
  }
  dword_B1CF88 = 0; /*0x734e17*/
  dword_B1CF80 = 0; /*0x734e1d*/
  return result; /*0x734e23*/
}
}  // G42.18c ns repair
// 0x5D7E50
namespace gamemd {
char sub_5D7E50()
{
  int i; // ebp
  char result; // al
  void (__thiscall ***v3)(_DWORD, int); // ecx

  for ( i = 0; ; ++i ) /*0x5d7e56*/
  {
    result = g_MultiplayerMode; /*0x5d7e62*/
    if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d7e69*/
    {
      g_MultiplayerModeConfig.q004 = 0; /*0x5d7e75*/
      g_MultiplayerMode |= 1u; /*0x5d7e7b*/
      g_MultiplayerModeConfig.u32_8 = 0; /*0x5d7e81*/
      IDA_LOWORD(g_MultiplayerModeConfig.q00C) = 1; /*0x5d7e87*/
      *(_DWORD *)g_MultiplayerModeConfig.q000 = &(void*)(void*)&DynamicVectorClass_MultiplayerGameMode___vftable; /*0x5d7e94*/
      g_MultiplayerModeConfig.q014 = 10; /*0x5d7e9a*/
      g_MultiplayerModeConfig.q010 = 0; /*0x5d7ea0*/
      result = atexit(MultiplayerConfig::Cleanup); /*0x5d7ea6*/
    }
    if ( i >= g_MultiplayerModeConfig.q010 ) /*0x5d7eb4*/
      break; /*0x5d7eb4*/
    if ( (g_MultiplayerMode & 1) == 0 ) /*0x5d7ebd*/
    {
      g_MultiplayerModeConfig.q004 = 0; /*0x5d7ec9*/
      g_MultiplayerMode |= 1u; /*0x5d7ecf*/
      g_MultiplayerModeConfig.u32_8 = 0; /*0x5d7ed5*/
      IDA_LOWORD(g_MultiplayerModeConfig.q00C) = 1; /*0x5d7edb*/
      *(_DWORD *)g_MultiplayerModeConfig.q000 = &(void*)(void*)&DynamicVectorClass_MultiplayerGameMode___vftable; /*0x5d7ee8*/
      g_MultiplayerModeConfig.q014 = 10; /*0x5d7eee*/
      g_MultiplayerModeConfig.q010 = 0; /*0x5d7ef4*/
      atexit(MultiplayerConfig::Cleanup); /*0x5d7efa*/
    }
    v3 = *(void (__thiscall ****)(_DWORD, int))(g_MultiplayerModeConfig.q004 + 4 * i); /*0x5d7f07*/
    if ( v3 ) /*0x5d7f0c*/
      (**v3)(v3, 1); /*0x5d7f12*/
  }
  return result; /*0x5d7f1a*/
}
}
// 0x7B84F0
namespace gamemd {
void* sub_7B84F0()
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
// 0x49F8B0
namespace gamemd {  // G42.18c ns repair
LSTATUS WinMain::CleanupResource()
{
  int result; // eax
  HKEY phkResult; // [esp+0h] [ebp-4h] BYREF

  phkResult = (HKEY)this; /*0x49f8b0*/
  Debug::Log(); /*0x49f8b6*/
  if ( g_DDrawSurfaceManager.description[6] ) /*0x49f8c5*/
  {
    UnmapViewOfFile((LPCVOID)g_DDrawSurfaceManager.description[6]); /*0x49f8c8*/
    g_DDrawSurfaceManager.description[6] = 0; /*0x49f8ce*/
  }
  result = RegOpenKeyExA(HKEY_CLASSES_ROOT, SubKey, 0, 0xF003Fu, &phkResult); /*0x49f8ee*/
  if ( !result ) /*0x49f8f6*/
  {
    RegDeleteValueA(phkResult, ValueName); /*0x49f902*/
    return RegCloseKey(phkResult); /*0x49f90d*/
  }
  return result; /*0x49f914*/
}
}  // G42.18c ns repair
// 0x53E6B0
namespace gamemd {
void sub_53E6B0()
{
  signed int SampleSize; // eax

  if ( dword_AA0448 ) /*0x53e6b7*/
  {
    EnterCriticalSection(&unk_AA0418); /*0x53e6be*/
    if ( dword_AA0468 && dword_AA045C && dword_AA0444 == 1 ) /*0x53e6dd*/
    {
      if ( dword_AA0464 ) /*0x53e6e7*/
      {
        SampleSize = Audio::GetSampleSize((_DWORD *)dword_AA0464); /*0x53e6eb*/
        WriteAudioStreamToFile(dword_AA0464, dword_AA0468, SampleSize, 0); /*0x53e6fd*/
        fflush(dword_AA0468); /*0x53e708*/
      }
    }
    LeaveCriticalSection(&unk_AA0418); /*0x53e715*/
  }
}
} // namespace gamemd

// 0x637070
namespace gamemd {
int sub_637070()
{
  byte_AC4CF4 = 0; /*0x637074*/
  byte_AC4CF5 = 0; /*0x637079*/
  dword_AC4CCC = 0; /*0x63707e*/
  dword_AC4C38 = 0; /*0x637083*/
  dword_AC4BF0 = 0; /*0x637088*/
  dword_AC4C68 = 0; /*0x63708d*/
  dword_AC4C6C = 0; /*0x637092*/
  byte_AC4CB0 = 0; /*0x637098*/
  return 0; /*0x63709d*/
}
} // namespace gamemd
