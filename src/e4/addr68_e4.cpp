// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_681070_e4.hpp"
#include "e4/classes/E4Recv_681090_e4.hpp"
#include "e4/classes/E4Recv_6810C0_e4.hpp"
#include "e4/classes/E4Recv_681180_e4.hpp"
#include "e4/classes/E4Recv_6811B0_e4.hpp"
#include "e4/classes/E4Recv_6811F0_e4.hpp"
#include "e4/classes/E4Recv_681220_e4.hpp"
#include "e4/classes/E4Recv_681260_e4.hpp"
#include "e4/classes/E4Recv_6812A0_e4.hpp"
#include "e4/classes/E4Recv_681840_e4.hpp"
#include "e4/classes/E4Recv_683060_e4.hpp"
#include "e4/classes/E4Recv_689790_e4.hpp"
#include "e4/classes/E4Recv_689820_e4.hpp"
#include "e4/classes/E4Recv_689960_e4.hpp"
#include "e4/classes/E4Recv_689A30_e4.hpp"
#include "e4/classes/E4Recv_689AC0_e4.hpp"
#include "e4/classes/E4Recv_68B8A0_e4.hpp"
#include "e4/classes/E4Recv_68F8A0_e4.hpp"
#include "e4/classes/E4Recv_68FB10_e4.hpp"
#include "e4/classes/E4Recv_68FBB0_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Radar_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/Voxel_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"

// 0x682640
namespace gamemd {
void COM_WriteString(int a1, int a2, LPCCH lpMultiByteStr)
{
  int v3; // ecx
  _DWORD *v4; // eax
  _UNKNOWN **v5; // ecx
  int v6; // esi
  size_t v7; // eax
  int v9; // [esp+30h] [ebp-104h] BYREF
  WCHAR WideCharStr[128]; // [esp+34h] [ebp-100h] BYREF

  MultiByteToWideChar(0, 0, lpMultiByteStr, -1, WideCharStr, 128); /*0x68265f*/
  v9 = 0; /*0x68266c*/
  v3 = 0; /*0x682674*/
  v4 = &unk_83D658; /*0x682676*/
  while ( *v4 != a2 ) /*0x68267d*/
  {
    v4 += 2; /*0x68267f*/
    ++v3; /*0x682682*/
    if ( (int)v4 >= (int)g_INI_Key_GameType ) /*0x682688*/
    {
      v5 = 0; /*0x68268a*/
      goto LABEL_5; /*0x68268a*/
    }
  }
  v5 = (&off_83D65C)[2 * v3]; /*0x6826c9*/
  LABEL_5:
  v6 = (*(int (__stdcall **)(int, _UNKNOWN **, int, _DWORD, _DWORD, int *))(*(_DWORD *)a1 + 12))(a1, v5, 18, 0, 0, &v9); /*0x68268c*/
  if ( v6 >= 0 ) /*0x6826ad*/
  {
    if ( !v9 ) /*0x6826d4*/
      WinAPI::Wrapper(-2147467261); /*0x6826db*/
    v7 = wcslen(WideCharStr); /*0x6826f0*/
    v6 = (*(int (__stdcall **)(int, WCHAR *, size_t, _DWORD))(*(_DWORD *)v9 + 16))(v9, WideCharStr, 2 * v7 + 2, 0); /*0x682706*/
    if ( v6 >= 0 ) /*0x68270f*/
    {
      if ( !v9 ) /*0x682729*/
        WinAPI::Wrapper(-2147467261); /*0x682730*/
      v6 = (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)v9 + 32))(v9, 0); /*0x682741*/
      if ( v6 >= 0 ) /*0x682749*/
      {
        if ( v9 ) /*0x682763*/
          (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x682768*/
      }
      else if ( v9 ) /*0x68274d*/
      {
  LABEL_18:
        (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x68274f*/
        return v6; /*0x68275e*/
      }
    }
    else if ( v9 ) /*0x682713*/
    {
      goto LABEL_18; /*0x682713*/
    }
  }
  else if ( v9 ) /*0x6826b1*/
  {
    goto LABEL_18; /*0x6826b1*/
  }
  return v6; /*0x6826bf*/
}
}
// 0x682880
namespace gamemd {
void COM_ReadString(int * a1, int a2, LPCCH lpMultiByteStr)
{
  int v3; // edx
  int v4; // edx
  int v5; // esi
  int v7; // [esp+2Ch] [ebp-11Ch] BYREF
  _DWORD v8[2]; // [esp+30h] [ebp-118h] BYREF
  __int16 v9[4]; // [esp+38h] [ebp-110h] BYREF
  WCHAR *v10; // [esp+40h] [ebp-108h]
  WCHAR WideCharStr[128]; // [esp+48h] [ebp-100h] BYREF

  MultiByteToWideChar(0, 0, lpMultiByteStr, -1, WideCharStr, 128); /*0x68289f*/
  v3 = *a1; /*0x6828b3*/
  v7 = 0; /*0x6828bb*/
  if ( (*(int (__stdcall **)(int *, void *, int, int *))(v3 + 16))(a1, &unk_7F7D10, 18, &v7) >= 0 ) /*0x6828c8*/
    goto LABEL_7; /*0x6828c8*/
  if ( v7 ) /*0x6828d0*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x6828d5*/
  v4 = *a1; /*0x6828d8*/
  v7 = 0; /*0x6828ee*/
  v5 = (*(int (__stdcall **)(int *, void *, _DWORD, _DWORD, int, int *))(v4 + 12))(a1, &unk_7F7D10, 0, 0, 4114, &v7); /*0x6828f9*/
  if ( v5 >= 0 ) /*0x6828fd*/
  {
  LABEL_7:
    v10 = WideCharStr; /*0x682928*/
    v8[0] = 1; /*0x682932*/
    v8[1] = a2; /*0x68293a*/
    v9[0] = 31; /*0x68293e*/
    if ( !v7 ) /*0x682945*/
      WinAPI::Wrapper(-2147467261); /*0x68294c*/
    v5 = (*(int (__stdcall **)(int, int, _DWORD *, __int16 *, int))(*(_DWORD *)v7 + 16))(v7, 1, v8, v9, 2); /*0x682969*/
    if ( v5 >= 0 ) /*0x682971*/
    {
      if ( v7 ) /*0x68298b*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x682990*/
    }
    else if ( v7 ) /*0x682975*/
    {
      goto LABEL_6; /*0x682975*/
    }
  }
  else if ( v7 ) /*0x682905*/
  {
  LABEL_6:
    (*(void (__stdcall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x68290b*/
    return v5; /*0x68291a*/
  }
  return v5; /*0x682913*/
}
}
// 0x682A90
namespace gamemd {
void COM_Property_ReadBool(int a1, int a2, char a3)
{
  int v3; // ecx
  _DWORD *v4; // eax
  _UNKNOWN **v5; // ecx
  int v6; // esi
  int v8; // [esp+30h] [ebp-4h] BYREF

  v8 = 0; /*0x682a96*/
  v3 = 0; /*0x682a9e*/
  v4 = &unk_83D658; /*0x682aa0*/
  while ( *v4 != a2 ) /*0x682aa7*/
  {
    v4 += 2; /*0x682aa9*/
    ++v3; /*0x682aac*/
    if ( (int)v4 >= (int)g_INI_Key_GameType ) /*0x682ab2*/
    {
      v5 = 0; /*0x682ab4*/
      goto LABEL_5; /*0x682ab4*/
    }
  }
  v5 = (&off_83D65C)[2 * v3]; /*0x682aeb*/
  LABEL_5:
  v6 = (*(int (__stdcall **)(int, _UNKNOWN **, int, _DWORD, _DWORD, int *))(*(_DWORD *)a1 + 12))(a1, v5, 18, 0, 0, &v8); /*0x682ab6*/
  if ( v6 >= 0 ) /*0x682ad4*/
  {
    if ( !v8 ) /*0x682af6*/
      WinAPI::Wrapper(-2147467261); /*0x682afd*/
    v6 = (*(int (__stdcall **)(int, char *, int, _DWORD))(*(_DWORD *)v8 + 16))(v8, &a3, 4, 0); /*0x682b15*/
    if ( v6 >= 0 ) /*0x682b1d*/
    {
      if ( !v8 ) /*0x682b32*/
        WinAPI::Wrapper(-2147467261); /*0x682b39*/
      v6 = (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)v8 + 32))(v8, 0); /*0x682b4a*/
      if ( v6 >= 0 ) /*0x682b52*/
      {
        if ( v8 ) /*0x682b67*/
          (*(void (__stdcall **)(int))(*(_DWORD *)v8 + 8))(v8); /*0x682b6c*/
      }
      else if ( v8 ) /*0x682b56*/
      {
  LABEL_18:
        (*(void (__stdcall **)(int))(*(_DWORD *)v8 + 8))(v8); /*0x682b58*/
        return v6; /*0x682b62*/
      }
    }
    else if ( v8 ) /*0x682b21*/
    {
      goto LABEL_18; /*0x682b21*/
    }
  }
  else if ( v8 ) /*0x682ad8*/
  {
    goto LABEL_18; /*0x682ad8*/
  }
  return v6; /*0x682ae6*/
}
}
// 0x682B80
namespace gamemd {
void COM_PropertyBag_Read(int * a1, int a2, int a3)
{
  int v3; // eax
  int v4; // esi
  int v6; // [esp+2Ch] [ebp-1Ch] BYREF
  _DWORD v7[2]; // [esp+30h] [ebp-18h] BYREF
  __int16 v8[4]; // [esp+38h] [ebp-10h] BYREF
  int v9; // [esp+40h] [ebp-8h]

  v6 = 0; /*0x682b8c*/
  if ( (*(int (__stdcall **)(int *, void *, int, int *))(*a1 + 16))(a1, &unk_7F7D10, 18, &v6) >= 0 ) /*0x682ba4*/
    goto LABEL_7; /*0x682ba4*/
  if ( v6 ) /*0x682bac*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x682bb1*/
  v3 = *a1; /*0x682bb4*/
  v6 = 0; /*0x682bca*/
  v4 = (*(int (__stdcall **)(int *, void *, _DWORD, _DWORD, int, int *))(v3 + 12))(a1, &unk_7F7D10, 0, 0, 4114, &v6); /*0x682bd5*/
  if ( v4 >= 0 ) /*0x682bd9*/
  {
  LABEL_7:
    v7[1] = a2; /*0x682bfa*/
    v7[0] = 1; /*0x682c04*/
    v8[0] = 3; /*0x682c0c*/
    v9 = a3; /*0x682c13*/
    if ( !v6 ) /*0x682c17*/
      WinAPI::Wrapper(-2147467261); /*0x682c1e*/
    v4 = (*(int (__stdcall **)(int, int, _DWORD *, __int16 *, int))(*(_DWORD *)v6 + 16))(v6, 1, v7, v8, 2); /*0x682c3b*/
    if ( v4 >= 0 ) /*0x682c43*/
    {
      if ( v6 ) /*0x682c5a*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x682c5f*/
    }
    else if ( v6 ) /*0x682c47*/
    {
      goto LABEL_6; /*0x682c47*/
    }
  }
  else if ( v6 ) /*0x682be1*/
  {
  LABEL_6:
    (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x682be3*/
    return v4; /*0x682bef*/
  }
  return v4; /*0x682beb*/
}
}
// 0x682C70
namespace gamemd {
void sub_682C70(int a1, int a2, unsigned int * a3)
{
  _DWORD *v3; // edi
  int v4; // ecx
  _DWORD *v5; // eax
  _UNKNOWN **v6; // ecx
  int v7; // esi

  v3 = a3; /*0x682c76*/
  a3 = 0; /*0x682c7a*/
  v4 = 0; /*0x682c82*/
  *v3 = 0; /*0x682c84*/
  v3[1] = 0; /*0x682c8a*/
  v5 = &unk_83D658; /*0x682c91*/
  while ( *v5 != a2 ) /*0x682c98*/
  {
    v5 += 2; /*0x682c9a*/
    ++v4; /*0x682c9d*/
    if ( (int)v5 >= (int)g_INI_Key_GameType ) /*0x682ca3*/
    {
      v6 = 0; /*0x682ca5*/
      goto LABEL_5; /*0x682ca5*/
    }
  }
  v6 = (&off_83D65C)[2 * v4]; /*0x682cd8*/
  LABEL_5:
  v7 = (*(int (__stdcall **)(int, _UNKNOWN **, _DWORD, int, _DWORD, _DWORD **))(*(_DWORD *)a1 + 16))( /*0x682ca7*/
         a1,
         v6,
         0,
         16,
         0,
         &a3);
  if ( v7 >= 0 ) /*0x682cc5*/
  {
    if ( !a3 ) /*0x682ce3*/
      WinAPI::Wrapper(-2147467261); /*0x682cea*/
    v7 = (*(int (__stdcall **)(_DWORD *, _DWORD *, int, _DWORD))(*a3 + 12))(a3, v3, 8, 0); /*0x682cfe*/
    if ( v7 >= 0 ) /*0x682d06*/
    {
      if ( a3 ) /*0x682d1b*/
        (*(void (__stdcall **)(_DWORD *))(*a3 + 8))(a3); /*0x682d20*/
    }
    else if ( a3 ) /*0x682d0a*/
    {
      goto LABEL_7; /*0x682d0a*/
    }
  }
  else if ( a3 ) /*0x682cc9*/
  {
  LABEL_7:
    (*(void (__stdcall **)(_DWORD *))(*a3 + 8))(a3); /*0x682ccb*/
    return v7; /*0x682cd5*/
  }
  return v7; /*0x682cd3*/
}
}
// 0x682E10
namespace gamemd {
void COM_WriteInt(int a1, int a2, int a3)
{
  int v3; // ecx
  _DWORD *v4; // eax
  _UNKNOWN **v5; // ecx
  int v6; // esi
  int v8; // [esp+30h] [ebp-4h] BYREF

  v8 = 0; /*0x682e16*/
  v3 = 0; /*0x682e1e*/
  v4 = &unk_83D658; /*0x682e20*/
  while ( *v4 != a2 ) /*0x682e27*/
  {
    v4 += 2; /*0x682e29*/
    ++v3; /*0x682e2c*/
    if ( (int)v4 >= (int)g_INI_Key_GameType ) /*0x682e32*/
    {
      v5 = 0; /*0x682e34*/
      goto LABEL_5; /*0x682e34*/
    }
  }
  v5 = (&off_83D65C)[2 * v3]; /*0x682e6b*/
  LABEL_5:
  v6 = (*(int (__stdcall **)(int, _UNKNOWN **, int, _DWORD, _DWORD, int *))(*(_DWORD *)a1 + 12))(a1, v5, 18, 0, 0, &v8); /*0x682e36*/
  if ( v6 >= 0 ) /*0x682e54*/
  {
    if ( !v8 ) /*0x682e76*/
      WinAPI::Wrapper(-2147467261); /*0x682e7d*/
    v6 = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v8 + 16))(v8, a3, 8, 0); /*0x682e95*/
    if ( v6 >= 0 ) /*0x682e9d*/
    {
      if ( !v8 ) /*0x682eb2*/
        WinAPI::Wrapper(-2147467261); /*0x682eb9*/
      v6 = (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)v8 + 32))(v8, 0); /*0x682eca*/
      if ( v6 >= 0 ) /*0x682ed2*/
      {
        if ( v8 ) /*0x682ee7*/
          (*(void (__stdcall **)(int))(*(_DWORD *)v8 + 8))(v8); /*0x682eec*/
      }
      else if ( v8 ) /*0x682ed6*/
      {
  LABEL_18:
        (*(void (__stdcall **)(int))(*(_DWORD *)v8 + 8))(v8); /*0x682ed8*/
        return v6; /*0x682ee2*/
      }
    }
    else if ( v8 ) /*0x682ea1*/
    {
      goto LABEL_18; /*0x682ea1*/
    }
  }
  else if ( v8 ) /*0x682e58*/
  {
    goto LABEL_18; /*0x682e58*/
  }
  return v6; /*0x682e66*/
}
}
// 0x682F00
namespace gamemd {
void COM_SetBufferParams(int * a1, int a2, int * a3)
{
  int v3; // eax
  int v4; // esi
  int v6; // edx
  int v7; // [esp+2Ch] [ebp-1Ch] BYREF
  _DWORD v8[2]; // [esp+30h] [ebp-18h] BYREF
  __int16 v9[4]; // [esp+38h] [ebp-10h] BYREF
  int v10; // [esp+40h] [ebp-8h]
  int v11; // [esp+44h] [ebp-4h]

  v7 = 0; /*0x682f0c*/
  if ( (*(int (__stdcall **)(int *, void *, int, int *))(*a1 + 16))(a1, &unk_7F7D10, 18, &v7) >= 0 ) /*0x682f24*/
    goto LABEL_7; /*0x682f24*/
  if ( v7 ) /*0x682f2c*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x682f31*/
  v3 = *a1; /*0x682f34*/
  v7 = 0; /*0x682f4a*/
  v4 = (*(int (__stdcall **)(int *, void *, _DWORD, _DWORD, int, int *))(v3 + 12))(a1, &unk_7F7D10, 0, 0, 4114, &v7); /*0x682f55*/
  if ( v4 >= 0 ) /*0x682f59*/
  {
  LABEL_7:
    v8[0] = 1; /*0x682f7a*/
    v8[1] = a2; /*0x682f82*/
    v9[0] = 64; /*0x682f8a*/
    v6 = a3[1]; /*0x682f93*/
    v10 = *a3; /*0x682f9a*/
    v11 = v6; /*0x682fa0*/
    if ( !v7 ) /*0x682fa4*/
      WinAPI::Wrapper(-2147467261); /*0x682fab*/
    v4 = (*(int (__stdcall **)(int, int, _DWORD *, __int16 *, int))(*(_DWORD *)v7 + 16))(v7, 1, v8, v9, 2); /*0x682fc8*/
    if ( v4 >= 0 ) /*0x682fd0*/
    {
      if ( v7 ) /*0x682fe7*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x682fec*/
    }
    else if ( v7 ) /*0x682fd4*/
    {
      goto LABEL_6; /*0x682fd4*/
    }
  }
  else if ( v7 ) /*0x682f61*/
  {
  LABEL_6:
    (*(void (__stdcall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x682f67*/
    return v4; /*0x682f73*/
  }
  return v4; /*0x682f6f*/
}
}
// 0x683FB0
namespace gamemd {
void sub_683FB0()
{
  DWORD *v0; // esi
  void *v1; // ecx

  MouseClass::GetPosition(&MapClass_Instance); /*0x683fb7*/
  if ( *((_DWORD *)g_ScenarioClass_Instance + 389) == -1 ) /*0x683fd0*/
  {
    v0 = (DWORD *)((char *)g_ScenarioClass_Instance + 1556); /*0x683fc1*/
    *v0 = Timer::GetTicks(); /*0x683fda*/
  }
  if ( *((_DWORD *)g_ScenarioClass_Instance + 389) != -1 ) /*0x683ff7*/
    Timer::GetTicks(); /*0x683ffc*/
  Debug::Log(); /*0x68400b*/
  if ( g_TacticalRender ) /*0x68401d*/
    Tooltip::Enable((void *)g_TacticalRender, byte_A8EB80); /*0x684026*/
  EndBufferMixer((int *)g_MixerState, dword_83D834); /*0x684037*/
  IDA_LOBYTE(v1) = 0; /*0x68403c*/
  dword_83D834 = 0x4000; /*0x68403e*/
  AsyncIO::Read(v1); /*0x684048*/
  return sub_406F40();
}
}
// 0x684060
namespace gamemd {
void * * ScenarioClass_SetTimer(int a1)
{
  DWORD Ticks; // eax
  char *v3; // edx
  unsigned int result;
  _DWORD *v5; // esi
  DWORD v6; // eax
  int v7; // ecx
  DWORD v8; // eax
  int v9; // [esp+8h] [ebp-8h]

  if ( a1 ) /*0x684068*/
  {
    Ticks = Timer::GetTicks(); /*0x68406e*/
    v3 = (char *)g_ScenarioClass_Instance + 1568; /*0x68407c*/
    *((_DWORD *)g_ScenarioClass_Instance + 392) = Ticks; /*0x68408c*/
    *((_DWORD *)v3 + 1) = v9; /*0x684092*/
    *((_DWORD *)v3 + 2) = 60 * a1; /*0x684099*/
    result = g_ScenarioClass_Instance; /*0x68409c*/
    if ( *((_BYTE *)g_ScenarioClass_Instance + 1584) ) /*0x6840a1*/
      return result; /*0x6840a9*/
    *((_BYTE *)g_ScenarioClass_Instance + 1584) = 1; /*0x6840af*/
  }
  if ( !*((_DWORD *)g_ScenarioClass_Instance + 395) ) /*0x6840bc*/
  {
    sub_406F00(); /*0x6840ca*/
    if ( !g_GameMode_Current[0] || g_GameMode_Current[0] == 5 ) /*0x6840db*/
    {
      v5 = (char *)g_ScenarioClass_Instance + 1556; /*0x6840e2*/
      if ( *((_DWORD *)g_ScenarioClass_Instance + 389) != -1 ) /*0x6840f1*/
      {
        v6 = Timer::GetTicks(); /*0x6840f6*/
        v7 = v5[2]; /*0x6840fd*/
        v8 = v6 - *v5; /*0x684100*/
        *v5 = -1; /*0x684102*/
        v5[2] = v8 + v7; /*0x68410a*/
      }
    }
    byte_B054CC = *((_BYTE *)g_ScenarioClass_Instance + 13730); /*0x68411b*/
    if ( !byte_B054CC ) /*0x684120*/
    {
      Mouse::ReleaseCapture(&MapClass_Instance); /*0x684127*/
      if ( !(*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 40))(g_WWMouseClass_Instance) ) /*0x684134*/
        (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 12))(g_WWMouseClass_Instance); /*0x684143*/
      *((_BYTE *)g_ScenarioClass_Instance + 13730) = 1; /*0x68414c*/
      g_GameActive = 1; /*0x684159*/
      Timer::PumpMessages((HWND *)g_BinkMoviePlayer); /*0x684160*/
      dword_B07784 = 0; /*0x684165*/
    }
  }
  result = g_ScenarioClass_Instance; /*0x68416f*/
  ++*((_DWORD *)g_ScenarioClass_Instance + 395); /*0x684174*/
  return result; /*0x68417a*/
}
}
// 0x684290
namespace gamemd {
ScenarioClass * * Mouse_Update()
{
  HWND result; // eax

  if ( *((_BYTE *)g_ScenarioClass_Instance + 13730) == 1 /*0x6842a6*/
    && (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 40))(g_WWMouseClass_Instance) )
  {
    do /*0x6842c0*/
      (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance); /*0x6842b5*/
    while ( (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 40))(g_WWMouseClass_Instance) ); /*0x6842c0*/
  }
  *((_BYTE *)g_ScenarioClass_Instance + 13730) = 0; /*0x6842cc*/
  g_GameActive = 0; /*0x6842d9*/
  result = Timer::PumpMessages((HWND *)g_BinkMoviePlayer); /*0x6842e0*/
  dword_B07784 = 0; /*0x6842e5*/
  return result; /*0x6842ef*/
}
}
// 0x684370
namespace gamemd {
void WaitForMultiplayerLoadSync()
{
  int v0; // ebx
  int v1; // esi
  int v2; // eax
  double v3; // st7
  char v5; // c0
  int v6; // esi
  int v7; // eax
  int i; // esi
  char *v10; // edi
  int v11; // edi
  double AverageProgress; // [esp+10h] [ebp-40h]
  DWORD v13; // [esp+20h] [ebp-30h]
  int v14; // [esp+28h] [ebp-28h]
  DWORD TicksTimer; // [esp+2Ch] [ebp-24h]
  int v16; // [esp+34h] [ebp-1Ch]

  if ( !g_GameMode_Current[0] || g_GameMode_Current[0] == 5 ) /*0x68438d*/
    return 1; /*0x68460b*/
  Timer::GetTicks(); /*0x684397*/
  TicksTimer = Timer::GetTicks(); /*0x6843b5*/
  v16 = 300; /*0x6843b9*/
  v13 = Timer::GetTicks(); /*0x6843cb*/
  v14 = 3600; /*0x6843d3*/
  AverageProgress = Progress::GetAverage((int)g_UIManager); /*0x6843e5*/
  while ( 1 )
  {
    EventQueue::Process(g_BinkMoviePlayer); /*0x6843ef*/
    Event::Dispatch(); /*0x6843f4*/
    v0 = 1; /*0x6843fe*/
    if ( g_GameMode_Current[0] == 1 /*0x684418*/
      && g_ClipboardBuffer
      && (*(char (__thiscall **)(HWND))(*(_DWORD *)g_ClipboardBuffer + 12))(g_ClipboardBuffer) >= 0 )
    {
      Debug::Log(); /*0x684524*/
      return 0; /*0x684535*/
    }
    v1 = v14; /*0x684422*/
    if ( v13 != -1 ) /*0x68442b*/
    {
      v2 = Timer::GetTicks() - v13; /*0x684436*/
      if ( v2 >= v14 ) /*0x68443c*/
        break; /*0x68443c*/
      v1 = v14 - v2; /*0x684442*/
    }
    if ( v1 <= 0 ) /*0x684446*/
      break; /*0x684446*/
    v3 = Progress::GetAverage((int)g_UIManager); /*0x684451*/
    if ( !v5 )
    {
      Multiplayer::ShowProgress(g_GameMode_Current, *((_BYTE *)g_ScenarioClass_Instance + 13501) != 0 ? 200 : 100);
      return 1; /*0x684605*/
    }
    if ( v3 != AverageProgress ) /*0x684474*/
    {
      v13 = Timer::GetTicks(); /*0x684490*/
      v14 = 7200; /*0x684498*/
      AverageProgress = v3; /*0x6844a4*/
    }
    v6 = v16; /*0x6844b0*/
    if ( TicksTimer != -1 ) /*0x6844b6*/
    {
      v7 = Timer::GetTicks() - TicksTimer; /*0x6844c1*/
      if ( v7 >= v16 ) /*0x6844c7*/
        goto LABEL_18; /*0x6844c7*/
      v6 = v16 - v7; /*0x6844c9*/
    }
    if ( v6 <= 0 )
    {
  LABEL_18:
      TicksTimer = Timer::GetTicks(); /*0x6844d3*/
      v16 = 60; /*0x6844f1*/
      Multiplayer::ShowProgress(g_GameMode_Current, *((_BYTE *)g_ScenarioClass_Instance + 13501) != 0 ? 200 : 100);
    }
  }
  for ( i = 1; i < Game_PlayerCount; ++i ) /*0x68453f*/
  {
    if ( Progress::GetWeighted((int)g_UIManager, v0) < 0.999 ) /*0x68455b*/
    {
      v10 = *(char **)(Game_PlayerInfoArray + 4 * i); /*0x684562*/
      ToWideStringChar(v10); /*0x684567*/
      ToWideStringChar(v10); /*0x684570*/
      Debug::Log(); /*0x68457c*/
      v11 = *(_DWORD *)(*(_DWORD *)(Game_PlayerInfoArray + 4 * i) + 111); /*0x684591*/
      HandleNetworkPlayerDisconnect(v11, 1); /*0x684596*/
      if ( SessionClass::IsValidHouse((int)g_GameMode_Current, *(void **)&HouseClass_Array->gap0[4 * v11]) ) /*0x6845aa*/
      {
        dword_A8E2AC = -1; /*0x6845bf*/
        memset(word_A8E258, 0, 0x28u); /*0x6845c9*/
        unk_A8E280 = 0; /*0x6845cb*/
      }
      --i; /*0x6845cd*/
    }
    ++v0; /*0x6845d3*/
  }
  return 0; /*0x68452e*/
}
}
// 0x684C30
namespace gamemd {
void PostLoadInitScenario()
{
  int i; // esi
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int j; // ebx
  _DWORD *v6; // esi
  int v7; // edi
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // edi
  int Owner; // eax
  int v13; // ecx
  _DWORD *v14; // esi
  int v15; // eax
  int v16; // eax
  int v17; // edx
  int v18; // edi
  int v19; // esi
  int v20; // eax
  int v21; // eax
  int v22; // edi
  int v23; // esi
  int v24; // ebp
  int v25; // eax
  int m; // eax
  void *v27; // esi
  int v28; // eax
  int n; // esi
  void **v30; // edi
  int *v31; // eax
  int k; // [esp+20h] [ebp-10h]
  int v34; // [esp+24h] [ebp-Ch] BYREF
  int v35; // [esp+28h] [ebp-8h]
  int GroundHeight; // [esp+2Ch] [ebp-4h]

  ++g_IKnowWhatImDoing; /*0x684c3f*/
  for ( i = 0; i < g_BuildingProductionState; ++i ) /*0x684c4c*/
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)g_BuildingClass_InstanceCount + i) + 1248))(*((_DWORD *)g_BuildingClass_InstanceCount /*0x684c58*/
                                                                                               + i));
  MapClass::MarkForRedraw(&MapClass_Instance, 2); /*0x684c6f*/
  if ( !g_ArmageddonMode ) /*0x684c7b*/
  {
    TacticalClass::BuildCommandBar(&MapClass_Instance, a1, 1); /*0x684c88*/
    if ( !g_GameMode_Current[0] ) /*0x684c94*/
    {
      if ( byte_8A38E0 ) /*0x684ca7*/
        v2 = *((_DWORD *)g_ScenarioClass_Instance + 132); /*0x684ca9*/
      else
        v2 = *((_DWORD *)g_ScenarioClass_Instance + 131); /*0x684cb1*/
      v3 = *(_DWORD *)((char *)g_ScenarioClass_Instance + 4 * v2 + 1586); /*0x684cb7*/
      *(_DWORD *)((char *)g_ScenarioClass_Instance + 13466) = v3; /*0x684cbe*/
      *(_DWORD *)((char *)g_ScenarioClass_Instance + 13462) = *(_DWORD *)((char *)g_ScenarioClass_Instance + 13466); /*0x684cd4*/
      *(_DWORD *)((char *)g_ScenarioClass_Instance + 13458) = *(_DWORD *)((char *)g_ScenarioClass_Instance + 13462); /*0x684ce9*/
      *(_DWORD *)((char *)g_ScenarioClass_Instance + 13454) = *(_DWORD *)((char *)g_ScenarioClass_Instance + 13458); /*0x684d03*/
      v34 = ((__int16)v3 << 8) + 128; /*0x684d09*/
      v35 = (IDA_SHIWORD(v3) << 8) + 128; /*0x684d21*/
      GroundHeight = 0; /*0x684d2b*/
      GroundHeight = Cell::GetGroundHeight(&v34); /*0x684d3e*/
      TacticalClass::SetPositionThunk((int)&v34); /*0x684d42*/
    }
  }
  v4 = g_MultiplayerCleanup; /*0x684d47*/
  for ( j = 0; j < g_MultiplayerCleanup; ++j ) /*0x684d50*/
  {
    v6 = (_DWORD *)*((_DWORD *)dword_B0E784 + j); /*0x684d5c*/
    if ( (Debug::AccumFlags(v6) & 4) != 0 ) /*0x684d68*/
    {
      v7 = TeamClass::FindOrCreate(v6); /*0x684d77*/
      if ( dword_8B41B8 < dword_8B41B0 /*0x684da9*/
        || (byte_8B41B5 || !dword_8B41B0)
        && dword_8B41BC > 0
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_8B41A8 + 8))(
             &dword_8B41A8,
             dword_8B41B0 + dword_8B41BC,
             0) )
      {
        v8 = dword_8B41B8++; /*0x684db6*/
        *((_DWORD *)dword_8B41AC + v8) = v7; /*0x684dc5*/
      }
    }
    if ( (Debug::AccumFlags(v6) & 0x10) != 0 ) /*0x684dd1*/
    {
      v9 = TeamClass::FindOrCreate(v6); /*0x684de0*/
      if ( g_ScenarioUpdateState < dword_8B40D0 /*0x684e13*/
        || (byte_8B40D5 || !dword_8B40D0)
        && dword_8B40DC > 0
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_8B40C8 + 8))(
             &dword_8B40C8,
             dword_8B40D0 + dword_8B40DC,
             0) )
      {
        v10 = g_ScenarioUpdateState++; /*0x684e20*/
        *((_DWORD *)dword_8B40CC + v10) = v9; /*0x684e2f*/
      }
    }
    if ( (Debug::AccumFlags(v6) & 8) != 0 ) /*0x684e3b*/
    {
      v11 = TeamClass::FindOrCreate(v6); /*0x684e44*/
      Owner = HouseClass::FindOwner(*(void **)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v11 + 36) + 160) + 164) + 184)); /*0x684e5b*/
      if ( Owner ) /*0x684e62*/
      {
        v13 = *(_DWORD *)(Owner + 64); /*0x684e64*/
        v14 = (_DWORD *)(Owner + 56); /*0x684e67*/
        if ( *(_DWORD *)(Owner + 72) < v13 /*0x684e8c*/
          || (*(_BYTE *)(Owner + 69) || !v13)
          && (v15 = *(_DWORD *)(Owner + 76), v15 > 0)
          && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v14 + 8))(v14, v13 + v15, 0) )
        {
          v16 = v14[4]; /*0x684e93*/
          v17 = v14[1]; /*0x684e96*/
          v14[4] = v16 + 1; /*0x684e9c*/
          *(_DWORD *)(v17 + 4 * v16) = v11; /*0x684e9f*/
        }
      }
    }
    v4 = g_MultiplayerCleanup; /*0x684ea2*/
  }
  v18 = 0; /*0x684eb6*/
  --g_IKnowWhatImDoing; /*0x684ebb*/
  if ( v4 > 0 ) /*0x684ec1*/
  {
    do /*0x684efb*/
    {
      v19 = *((_DWORD *)dword_B0E784 + v18); /*0x684ec8*/
      if ( (unsigned __int8)TagClass::HasValidHouse(v19) ) /*0x684ecd*/
      {
        v20 = HouseClass::FindOwner(*(void **)(*(_DWORD *)(v19->q0A0 + 164) + 180)); /*0x684ee8*/
        ++*(_DWORD *)(v20 + 636); /*0x684eed*/
      }
      ++v18; /*0x684ef8*/
    }
    while ( v18 < g_MultiplayerCleanup ); /*0x684efb*/
  }
  if ( *((_BYTE *)g_ScenarioClass_Instance + 13490) ) /*0x684f02*/
  {
    v21 = 0; /*0x684f12*/
    for ( k = 0; v21 < HouseClass_Count; k = v21 ) /*0x684f1a*/
    {
      v22 = *(_DWORD *)&HouseClass_Array->gap0[4 * v21]; /*0x684f23*/
      if ( v22 ) /*0x684f28*/
      {
        v23 = (*(int (__stdcall **)(int))(*(_DWORD *)(v22 + 36) + 24))(v22 + 36); /*0x684f34*/
        v24 = *(_DWORD *)BuildingClass_InstanceArray->gap0; /*0x684f3b*/
        if ( v23 > *(_DWORD *)(*(_DWORD *)BuildingClass_InstanceArray->gap0 + 184) ) /*0x684f43*/
        {
          do /*0x684f69*/
          {
            if ( (*(int (__stdcall **)(int))(*(_DWORD *)(v22 + 36) + 28))(v22 + 36) <= 0 ) /*0x684f4d*/
              break; /*0x684f4d*/
            HouseClass::GiveTiberium_Storage(1.0, 0); /*0x684f58*/
            v25 = *(_DWORD *)(v24 + 184); /*0x684f5d*/
            v23 -= v25; /*0x684f63*/
          }
          while ( v23 > v25 ); /*0x684f69*/
        }
        v21 = k; /*0x684f6b*/
      }
      ++v21; /*0x684f75*/
    }
  }
  Radar::UpdateReveal(1, 0); /*0x684f89*/
  Voxel::InitDistanceTable(); /*0x684f8e*/
  LayerClass::CellIteratorReset(&MapClass_Instance); /*0x684f98*/
  for ( m = LayerClass::CellIteratorNext(&MapClass_Instance); m; m = LayerClass::CellIteratorNext(&MapClass_Instance) ) /*0x684fa9*/
    House::AnnounceUpgrade(m, -1); /*0x684faf*/
  MapClass::ProcessRegion(&MapClass_Instance); /*0x684fc7*/
  Terrain::ConnectivityGraph(&MapClass_Instance); /*0x684fd1*/
  MapClass::BuildSubzones(&MapClass_Instance); /*0x684fdb*/
  MarkCliffEdgePassability(&MapClass_Instance); /*0x684fe5*/
  if ( !dword_A8ED78 ) /*0x684ff0*/
  {
    v27 = RA2_OPNEW(0x100u); /*0x684ffc*/
    if ( v27 ) /*0x685003*/
    {
      v34 = 2688; /*0x68500f*/
      v35 = 2688; /*0x685013*/
      GroundHeight = 0; /*0x685017*/
      v28 = WarheadTypeClass::applyDamage(aGascloudsys); /*0x68501b*/
      dword_A8ED78 = ParticleSystemClass::Constructor( /*0x685040*/
                       (int)v27,
                       *((_DWORD *)dword_A83D6C + v28),
                       &v34,
                       0,
                       0,
                       &dword_B05488,
                       0);
    }
    else
    {
      dword_A8ED78 = 0; /*0x685047*/
    }
  }
  if ( g_RulesClass_Instance[1].DMisl[11] ) /*0x685052*/
  {
    LayerClass::CellIteratorReset(&MapClass_Instance); /*0x685063*/
    for ( n = LayerClass::CellIteratorNext(&MapClass_Instance); n; n = LayerClass::CellIteratorNext(&MapClass_Instance) ) /*0x685076*/
    {
      if ( Building::GetNthOfType(n) ) /*0x68507a*/
      {
        if ( !Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, g_RulesClass_Instance[1].DMisl[10] - 1) ) /*0x68509e*/
        {
          v30 = (void **)RA2_OPNEW(0x1C8u); /*0x6850b1*/
          if ( v30 ) /*0x6850b8*/
          {
            v31 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)n + 72))(n, &v34); /*0x6850cd*/
            AnimClass::ctor(v30, (void *)g_RulesClass_Instance[1].DMisl[11], v31, 0, 1, (void *)0x600, 0, 0); /*0x6850e0*/
          }
        }
      }
    }
  }
  RadarClass::SetGlobal((void *)g_RulesClass_Instance->DetailMinFrameRateNormal); /*0x6850fd*/
  return Map_Init(g_RulesClass_Instance->DetailBufferZoneWidth); /*0x685110*/
}
}
// 0x6851F0
namespace gamemd {
void ScenarioClass_Reset()
{
  int i; // esi
  int v1; // eax
  int v2; // edi
  int v3; // eax
  int v4; // esi
  int v5; // eax
  char *v6; // edi
  int j; // esi
  _BYTE *v8; // eax
  void *v9; // eax
  IPersistStream *v10; // eax
  _DWORD *v11; // eax
  int v12; // ecx
  int result; // eax

  *((_DWORD *)g_ScenarioClass_Instance + 133) = 1000000; /*0x6851fc*/
  *((_BYTE *)g_ScenarioClass_Instance + 536) = 1; /*0x68520c*/
  dword_83D834 = 0x4000; /*0x685219*/
  EndBufferMixer((int *)g_MixerState, 0x4000); /*0x68521f*/
  AudioQueue::DrainAll(); /*0x685224*/
  HouseClass_Player = 0; /*0x685231*/
  ScenarioClass::InitTimer((int)g_ScenarioClass_Instance); /*0x685237*/
  LightningStorm::End(); /*0x68523c*/
  for ( i = g_AbstractTypePool - 1; i >= 0; --i ) /*0x68524c*/
  {
    if ( (*(int (__stdcall **)(int))(*(_DWORD *)(*((_DWORD *)dword_A8E96C + i) + 4) + 12))(*((_DWORD *)dword_A8E96C + i) + 4) == 18 /*0x68526c*/
      && i < g_AbstractTypePool )
    {
      v1 = i; /*0x68526f*/
      if ( i < --g_AbstractTypePool ) /*0x685279*/
      {
        do /*0x685291*/
        {
          ++v1; /*0x685281*/
          *((_DWORD *)dword_A8E96C + v1 - 1) = *((_DWORD *)dword_A8E96C + v1); /*0x685285*/
        }
        while ( v1 < g_AbstractTypePool ); /*0x685291*/
      }
    }
  }
  Game::DestroyAllObjects(); /*0x685297*/
  v2 = 0; /*0x6852a1*/
  if ( g_TechnoClassCount > 0 ) /*0x6852a5*/
  {
    v3 = dword_A8E970; /*0x6852a7*/
    do /*0x6852b2*/
    {
      v4 = *((_DWORD *)g_FrameCounter + v2); /*0x6852b2*/
      if ( g_AbstractTypePool < v3 ) /*0x6852bd*/
        goto LABEL_14; /*0x6852bd*/
      if ( !byte_A8E975 && v3 || dword_A8E97C <= 0 ) /*0x6852d3*/
        goto LABEL_16; /*0x6852d3*/
      if ( (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A8E968 + 8))( /*0x6852e4*/
             &dword_A8E968,
             v3 + dword_A8E97C,
             0) )
      {
  LABEL_14:
        v5 = g_AbstractTypePool++; /*0x6852f1*/
        *((_DWORD *)dword_A8E96C + v5) = v4; /*0x685300*/
      }
      v3 = dword_A8E970; /*0x685303*/
  LABEL_16:
      ++v2; /*0x685308*/
    }
    while ( v2 < g_TechnoClassCount ); /*0x6852b2*/
  }
  MapClass::FreeAllCells((int *)&MapClass_Instance); /*0x685313*/
  dword_87F848 = 0; /*0x685322*/
  if ( dword_87F83C && byte_87F845 ) /*0x685332*/
  {
    RA2_OPDEL(dword_87F83C); /*0x685335*/
    dword_87F83C = 0; /*0x68533d*/
  }
  byte_87F845 = 0; /*0x685343*/
  dword_87F840 = 0; /*0x685349*/
  Map_Reset_6E5570(); /*0x68534f*/
  v6 = 0; /*0x685354*/
  for ( j = 0; j < 2050; j += 41 ) /*0x685356*/
  {
    v8 = g_ScenarioClass_Instance; /*0x685358*/
    if ( (unsigned int)j < 0x802 && *((_BYTE *)g_ScenarioClass_Instance + j + 7344) ) /*0x685365*/
    {
      *((_BYTE *)g_ScenarioClass_Instance + j + 7344) = 0; /*0x68536e*/
      v8[13482] = 1; /*0x685377*/
      HouseClass::UpdateAllTypes(v6); /*0x68537e*/
    }
    ++v6; /*0x685386*/
  }
  if ( g_TacticalClass_Instance ) /*0x685398*/
    ((void (__thiscall *)(LPPERSISTSTREAM, int))g_TacticalClass_Instance->lpVtbl[1].QueryInterface)( /*0x68539e*/
      g_TacticalClass_Instance,
      1);
  v9 = RA2_OPNEW(0xE18u); /*0x6853a6*/
  if ( v9 ) /*0x6853b0*/
    v10 = (IPersistStream *)TacticalMap::Construct((int)v9); /*0x6853b4*/
  else
    v10 = 0; /*0x6853bb*/
  g_TacticalClass_Instance = v10; /*0x6853bf*/
  Map_Setup_6DA980(v10); /*0x6853c4*/
  byte_829AE4 = 0; /*0x6853ce*/
  while ( g_PlacementCellPool ) /*0x6853d6*/
  {
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)dword_A8E364 + 44))(*(_DWORD *)dword_A8E364) == 8 ) /*0x6853e7*/
    {
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)dword_A8E364 + 8))(*(_DWORD *)dword_A8E364); /*0x6853f3*/
    }
    else if ( *(_DWORD *)dword_A8E364 ) /*0x6853fe*/
    {
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_A8E364 + 32))(*(_DWORD *)dword_A8E364, 1); /*0x685408*/
    }
  }
  byte_829AE4 = 1; /*0x685418*/
  while ( g_MultiplayerCleanup ) /*0x685421*/
  {
    if ( *(_DWORD *)dword_B0E784 ) /*0x685429*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)dword_B0E784 + 32))(*(_DWORD *)dword_B0E784, 1); /*0x685433*/
  }
  dword_8B41B8 = 0; /*0x685443*/
  if ( dword_8B41AC && byte_8B41B5 ) /*0x685453*/
  {
    RA2_OPDEL(dword_8B41AC); /*0x685456*/
    dword_8B41AC = 0; /*0x68545e*/
  }
  byte_8B41B5 = 0; /*0x685469*/
  dword_8B41B0 = 0; /*0x685471*/
  g_ScenarioUpdateState = 0; /*0x685477*/
  if ( dword_8B40CC && byte_8B40D5 ) /*0x685485*/
  {
    RA2_OPDEL(dword_8B40CC); /*0x685488*/
    dword_8B40CC = 0; /*0x685490*/
  }
  byte_8B40D5 = 0; /*0x68549b*/
  dword_8B40D0 = 0; /*0x6854a1*/
  *((_DWORD *)g_ScenarioClass_Instance + 3433) = 3600; /*0x6854a7*/
  *((_DWORD *)g_ScenarioClass_Instance + 3434) = *((_DWORD *)g_ScenarioClass_Instance + 3433); /*0x6854bc*/
  *((_DWORD *)g_ScenarioClass_Instance + 3435) = *((_DWORD *)g_ScenarioClass_Instance + 3433); /*0x6854cd*/
  *((_BYTE *)g_ScenarioClass_Instance + 13744) = 0; /*0x6854d8*/
  *((_BYTE *)g_ScenarioClass_Instance + 13775) = 0; /*0x6854e4*/
  *((_BYTE *)g_ScenarioClass_Instance + 13806) = 0; /*0x6854f0*/
  *((_BYTE *)g_ScenarioClass_Instance + 13837) = 0; /*0x6854fb*/
  Map_Reset_5549A0(); /*0x685501*/
  Map_Reset(); /*0x685506*/
  sub_4C5470(); /*0x68550b*/
  CleanupVeinholeSystem(); /*0x685510*/
  BuildingClass::FreeUpgradeQueue(); /*0x685515*/
  BuildingClass::FreeUpgradeQueue2(); /*0x68551a*/
  Stream::FlushAndReset(&dword_87F5D8); /*0x685524*/
  LoadGame::CleanupArray(&g_MissionQueueFrame); /*0x68552e*/
  LoadGame::ClearAllSlots(g_CellClassManager); /*0x685538*/
  PlanningNodeClass::CleanupAll(); /*0x68553d*/
  dword_87F8D4 = 0; /*0x68554f*/
  dword_87F8D8 = 0; /*0x685554*/
  g_Cell_PositionLUT = 0; /*0x68555a*/
  g_CellPositionOffset = 0; /*0x685560*/
  Debug::Log(); /*0x685566*/
  MouseClass::HandleClick(&MapClass_Instance); /*0x685573*/
  Debug::Log(); /*0x68557d*/
  (*(void (__thiscall **)(int *))(g_GameConfigManager + 12))(&g_GameConfigManager); /*0x685590*/
  Debug::Log(); /*0x685598*/
  g_SelectionManager = 0; /*0x6855a7*/
  if ( g_ObjectClass_CurrentCount && byte_A8ECC5 ) /*0x6855b5*/
  {
    RA2_OPDEL(g_ObjectClass_CurrentCount); /*0x6855b8*/
    g_ObjectClass_CurrentCount = 0; /*0x6855c0*/
  }
  byte_A8ECC5 = 0; /*0x6855cb*/
  dword_A8ECC0 = 0; /*0x6855d1*/
  Debug::Log(); /*0x6855d7*/
  v11 = (char *)g_ScenarioClass_Instance + 1586; /*0x6855e4*/
  v12 = 702; /*0x6855e9*/
  do /*0x6855fa*/
  {
    *v11++ = dword_B05458; /*0x6855f4*/
    --v12; /*0x6855f9*/
  }
  while ( v12 ); /*0x6855fa*/
  Debug::Log(); /*0x685601*/
  Credits::Screen(); /*0x685609*/
  if ( dword_A8ED78 ) /*0x685616*/
  {
    ScenarioClass::DestroyAndClearVector(); /*0x685618*/
    if ( dword_A8ED78 ) /*0x685625*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_A8ED78 + 32))(dword_A8ED78, 1); /*0x68562b*/
    dword_A8ED78 = 0; /*0x68562e*/
  }
  *((_BYTE *)g_ScenarioClass_Instance + 536) = 0; /*0x68563a*/
  Map_Reset_734210(); /*0x685640*/
  Selection::ClearGlobals(0); /*0x685647*/
  result = Map_Reset_660C50(); /*0x68564c*/
  *((_DWORD *)g_ScenarioClass_Instance + 133) = 1000000; /*0x685659*/
  return result; /*0x685657*/
}
}
// 0x687CE0
namespace gamemd {
void SaveScenarioToINI()
{
  _DWORD *v3; // eax
  char v4; // al
  char v6; // [esp+Bh] [ebp-F1h]
  char *v8; // [esp+10h] [ebp-ECh] BYREF
  void *v9[3]; // [esp+14h] [ebp-E8h] BYREF
  void **v10; // [esp+20h] [ebp-DCh] BYREF
  _DWORD v11[6]; // [esp+3Ch] [ebp-C0h] BYREF
  char v12; // [esp+54h] [ebp-A8h]
  _DWORD v13[22]; // [esp+6Ch] [ebp-90h] BYREF
  _BYTE v14[12]; // [esp+C4h] [ebp-38h] BYREF
  int v15; // [esp+D0h] [ebp-2Ch]
  int v16[9]; // [esp+D8h] [ebp-24h] BYREF

  v9[1] = 0; /*0x687cf4*/
  v9[2] = 0; /*0x687cf8*/
  GenericList::Constructor(&v10); /*0x687cfc*/
  v10 = (void*)&List_INIClass_INISection___vftable; /*0x687d05*/
  Node::Init(v11); /*0x687d0d*/
  v11[5] = 0; /*0x687d17*/
  v12 = 0; /*0x687d1d*/
  v9[0] = &CCINIClass_Vtable; /*0x687d21*/
  if ( g_ArmageddonMode ) /*0x687d29*/
  {
    v3 = CCFileClass::Construct(v13, Source); /*0x687d34*/
    v4 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v3 + 20))(v3, 0); /*0x687d3e*/
    v13[0] = (void*)&CCFileClass_vftable; /*0x687d48*/
    v6 = v4; /*0x687d50*/
    v15 = 0; /*0x687d54*/
    Vector::Clear((int)v14); /*0x687d5b*/
    v13[0] = &off_7E1668; /*0x687d64*/
    BufferIOFileClass::Dtor(v13); /*0x687d6c*/
    if ( v6 ) /*0x687d75*/
    {
      CCFileClass::Construct(v13, Source); /*0x687d7c*/
      CCINIClass::Load(v9, (int)v13, 1, 0); /*0x687d8d*/
      v13[0] = (void*)&CCFileClass_vftable; /*0x687d99*/
      v15 = 0; /*0x687da1*/
      Vector::Clear((int)v14); /*0x687da8*/
      v13[0] = &off_7E1668; /*0x687db1*/
      BufferIOFileClass::Dtor(v13); /*0x687db9*/
    }
  }
  ScenarioClass::SaveToINI((int)g_ScenarioClass_Instance, (char *)v9, a2); /*0x687dce*/
  if ( a2 ) /*0x687dd7*/
  {
    if ( g_Map_TiberiumConfig && *(_DWORD *)g_Map_TiberiumConfig ) /*0x687de3*/
    {
      MiniMap::SavePreviewToINI(v9); /*0x687dec*/
    }
    else
    {
      unknown_libname_27(&v8); /*0x687df7*/
      MiniMap::Render(&v8); /*0x687e00*/
      MiniMap::SavePreviewToINI(v9); /*0x687e0e*/
      ComPtr::Dtor(&v8); /*0x687e17*/
    }
  }
  else
  {
    CCINIClass::WriteHouses(v9); /*0x687e22*/
  }
  MapClass::SaveCellTagsToINI(v9); /*0x687e31*/
  ObjectTypeClass::ReadDestroyAnim(v9); /*0x687e3a*/
  ReadFootINI(v9); /*0x687e43*/
  SaveInfantryToINI(v9); /*0x687e4c*/
  SaveAircraftToINI(v9); /*0x687e55*/
  sub_44FE60(v9); /*0x687e5e*/
  OverlayClass::WriteINI(v9); /*0x687e67*/
  UnitTypeClass::ReadINIEntry(v9); /*0x687e70*/
  InfantryClass::SetMission(v9); /*0x687e79*/
  if ( !a2 || g_ArmageddonMode ) /*0x687e8a*/
  {
    nullsub_34(v9, 0); /*0x687e92*/
    ScriptTypeClass::ReadINI(v9, 0); /*0x687e9d*/
    TeamTypeClass::ReadScriptData(v9, 0); /*0x687ea8*/
    CCINIClass::ReadInfantryTypeList(v9, 0); /*0x687eb3*/
  }
  ReadAudioEventINI(v9); /*0x687ebc*/
  SaveTriggerTagsToINI(v9); /*0x687ec5*/
  RawFileClass::Construct(v16, (int)Source); /*0x687ed2*/
  INIClass::WriteDigest(v9, (int)v16, 1); /*0x687ee5*/
  RawFileClass::Dtor(v16); /*0x687ef1*/
  return HashTable::DestroyHashTableINIClass(v9); /*0x687eff*/
}
}
// 0x687F10
namespace gamemd {
AbstractClass * * SessionClass_AssignHouses()
{
  int v0; // edi
  int v1; // esi
  int v2; // ecx
  int v3; // edx
  int v4; // eax
  int v5; // ecx
  int v6; // ebx
  void *v7; // eax
  int v8; // ebp
  char *v9; // eax
  LPARAM v10; // eax
  int *v11; // ebx
  int v12; // edi
  int v13; // esi
  void *v14; // eax
  int v15; // ebp
  LPARAM v16; // edx
  int v17; // eax
  wchar_t *String; // eax
  int v19; // eax
  void *v20; // esi
  int v21; // eax
  int v22; // esi
  void *v23; // esi
  int v24; // eax
  int v25; // esi
  int v27; // [esp+8h] [ebp-4Ch]
  void *v28; // [esp+Ch] [ebp-48h] BYREF
  void *v29; // [esp+10h] [ebp-44h] BYREF
  int i; // [esp+14h] [ebp-40h]
  LPARAM v31; // [esp+18h] [ebp-3Ch]
  _DWORD v32[2]; // [esp+1Ch] [ebp-38h]
  char Destination[20]; // [esp+24h] [ebp-30h] BYREF
  char v34; // [esp+38h] [ebp-1Ch]
  char v35[20]; // [esp+3Ch] [ebp-18h] BYREF
  char v36; // [esp+50h] [ebp-4h]

  v0 = Game_PlayerCount; /*0x687f15*/
  v1 = 0; /*0x687f1b*/
  for ( i = Game_PlayerCount; v1 < v0; ++v1 ) /*0x687f23*/
  {
    v2 = *(_DWORD *)(Game_PlayerInfoArray + 4 * v1); /*0x687f2a*/
    if ( *(_DWORD *)(v2 + 75) == -3 ) /*0x687f31*/
      SessionClass::SetPlayerOption(v2, 0); /*0x687f35*/
  }
  v32[0] = 0; /*0x687f42*/
  v32[1] = 0; /*0x687f49*/
  HouseClass_Observer = 0; /*0x687f4d*/
  if ( v0 > 0 ) /*0x687f53*/
  {
    v31 = v0; /*0x687f59*/
    do /*0x688146*/
    {
      v3 = -1; /*0x687f63*/
      v27 = -1; /*0x687f66*/
      v4 = 0; /*0x687f6e*/
      v5 = Game_PlayerInfoArray; /*0x687f70*/
      do /*0x687f95*/
      {
        if ( !*((_BYTE *)v32 + v4) && (v3 == -1 || *(_DWORD *)(*(_DWORD *)v5 + 83) < v3) ) /*0x687f84*/
        {
          v27 = v4; /*0x687f88*/
          v3 = *(_DWORD *)(*(_DWORD *)v5 + 83); /*0x687f8c*/
        }
        ++v4; /*0x687f8f*/
        v5 += 4; /*0x687f90*/
      }
      while ( v4 < v0 ); /*0x687f95*/
      v6 = *(_DWORD *)(Game_PlayerInfoArray + 4 * v27); /*0x687fa0*/
      *((_BYTE *)v32 + v27) = 1; /*0x687fa3*/
      v7 = RA2_OPNEW(0x160B8u); /*0x687fa8*/
      if ( v7 ) /*0x687fb2*/
        v8 = HouseClass::Construct((int)v7, *((_DWORD *)g_SuperWeaponTypeCount + *(_DWORD *)(v6 + 75))); /*0x687fc8*/
      else
        v8 = 0; /*0x687fcc*/
      if ( g_GameMode_Current[0] == 4 ) /*0x687fd5*/
      {
        WideString::Assign((wchar_t **)&v28, (wchar_t *)v6); /*0x687fdc*/
        ToWideStringCharAlt((char **)&v29, (const wchar_t **)&v28); /*0x687fe9*/
        DeleteAndZero::Alt(&v28); /*0x687ff2*/
        v9 = String::GetOrEmpty((char **)&v29); /*0x687ffb*/
        if ( v9 ) /*0x688002*/
        {
          strncpy(Destination, v9, 0x14u); /*0x688012*/
          v34 = 0; /*0x68801a*/
        }
        else
        {
          Destination[0] = 0; /*0x688004*/
        }
        if ( Destination != (char *)(v8 + 90100) ) /*0x68802b*/
        {
          qmemcpy((void *)(v8 + 90100), Destination, 0x14u); /*0x688038*/
          *(_BYTE *)(v8 + 90120) = v34; /*0x68803a*/
          v0 = i; /*0x68803b*/
        }
        DeleteAndZero(&v29); /*0x688043*/
      }
      else
      {
        if ( aHumanPlayer ) /*0x688051*/
        {
          strncpy(v35, aHumanPlayer, 0x14u); /*0x688065*/
          v36 = 0; /*0x68806d*/
        }
        else
        {
          v35[0] = (unsigned __int8)aHumanPlayer; /*0x688053*/
        }
        if ( v35 != (char *)(v8 + 90100) ) /*0x68807e*/
        {
          qmemcpy((void *)(v8 + 90100), v35, 0x14u); /*0x68808b*/
          *(_BYTE *)(v8 + 90120) = v36; /*0x68808d*/
          v0 = i; /*0x68808e*/
        }
      }
      wcsncpy((wchar_t *)(v8 + 90154), (const wchar_t *)v6, 0x15u); /*0x68809c*/
      *(_WORD *)(v8 + 90194) = 0; /*0x6880a4*/
      *(_BYTE *)(v8 + 492) = 1; /*0x6880ad*/
      sub_4FCE00(*(_DWORD *)(v6 + 83), *(_DWORD *)(v6 + 75), g_Rules_Bases); /*0x6880c4*/
      *(_DWORD *)(v8 + 90196) = SessionClass::GetPlayerColorScheme(*(_DWORD *)(v6 + 83)); /*0x6880d9*/
      HouseClass::GetColor((char *)v8); /*0x6880df*/
      ComputeSessionColorVector(v8); /*0x6880e6*/
      *(_DWORD *)(v8 + 90200) = SessionClass::GetOption(v6); /*0x6880f2*/
      *(_DWORD *)(v8 + 90204) = *(_DWORD *)(v6 + 99); /*0x688101*/
      if ( !v27 ) /*0x688107*/
      {
        HouseClass_Player = (void *)v8; /*0x688109*/
        *(_BYTE *)(v8 + 493) = 1; /*0x68810f*/
      }
      if ( *(_DWORD *)(v6 + 107) == -1 ) /*0x68811a*/
        HouseClass_Observer = v8; /*0x68811c*/
      *(_DWORD *)(v8 + 468) = g_RulesInitConfig; /*0x68812c*/
      HouseClass::SetCombatPower(v8, 1); /*0x688132*/
      *(_DWORD *)(v6 + 111) = *(_DWORD *)(v8 + 48); /*0x68813a*/
      --v31; /*0x688142*/
    }
    while ( v31 ); /*0x688146*/
  }
  v10 = 0; /*0x688152*/
  v31 = g_Rules_AlliesAllowed; /*0x688154*/
  v11 = g_CampaignPlayerArray; /*0x688158*/
  do /*0x6882cb*/
  {
    if ( v10 < v31 ) /*0x688161*/
    {
      v12 = *v11; /*0x688167*/
      if ( *v11 != -1 && v12 != -3 ) /*0x688175*/
      {
        v13 = v11[8]; /*0x68817b*/
        i = v10 + 1; /*0x688184*/
        v14 = RA2_OPNEW(0x160B8u); /*0x688188*/
        if ( v14 ) /*0x688192*/
          v15 = HouseClass::Construct((int)v14, *((_DWORD *)g_SuperWeaponTypeCount + v12)); /*0x6881a5*/
        else
          v15 = 0; /*0x6881a9*/
        v16 = g_RulesInitConfig; /*0x6881ab*/
        *(_BYTE *)(v15 + 492) = 0; /*0x6881b1*/
        *(_DWORD *)(v15 + 468) = v16; /*0x6881b8*/
        sub_4FCE00(v13, v12, g_Rules_Bases); /*0x6881c8*/
        *(_DWORD *)(v15 + 90196) = SessionClass::GetPlayerColorScheme(v13); /*0x6881da*/
        HouseClass::GetColor((char *)v15); /*0x6881e0*/
        ComputeSessionColorVector(v15); /*0x6881e7*/
        *(_DWORD *)(v15 + 90200) = v11[16]; /*0x6881ef*/
        v17 = v11[24]; /*0x6881f5*/
        *(_DWORD *)(v15 + 90204) = v17; /*0x6881fb*/
        if ( v17 != -1 ) /*0x688201*/
          *((_BYTE *)g_ScenarioClass_Instance + 4576) = 1; /*0x688209*/
        if ( g_INI_Key_Computer ) /*0x688217*/
        {
          strncpy(v35, g_INI_Key_Computer, 0x14u); /*0x68822b*/
          v36 = 0; /*0x688233*/
        }
        else
        {
          v35[0] = (unsigned __int8)g_INI_Key_Computer; /*0x688219*/
        }
        if ( v35 != (char *)(v15 + 90100) ) /*0x688244*/
        {
          qmemcpy((void *)(v15 + 90100), v35, 0x14u); /*0x68824f*/
          *(_BYTE *)(v15 + 90120) = v36; /*0x688251*/
        }
        String = GetStringCSF(g_Str_TXT_COMPUTER, 0, g_Str_File_Scenario_CPP, 4032); /*0x688263*/
        wcscpy((wchar_t *)(v15 + 90154), String); /*0x688270*/
        if ( g_GameMode_Current[0] ) /*0x68827f*/
          *(_DWORD *)(v15 + 588) = g_RulesClass_Instance[1].SmallVisceroid; /*0x68828d*/
        v19 = *(v11 - 8); /*0x688299*/
        if ( Game_PlayerCount > 1 && IDA_HIBYTE(g_RulesClass_Instance[1].RadarEventDurations[1]) && v19 > 0 ) /*0x6882b3*/
          --v19; /*0x6882b5*/
        HouseClass::SetCombatPower(v15, v19); /*0x6882b9*/
        v10 = i; /*0x6882be*/
      }
    }
    ++v11; /*0x6882c2*/
  }
  while ( (int)v11 < (int)g_CampaignConfig ); /*0x6882cb*/
  v20 = RA2_OPNEW(0x160B8u); /*0x6882de*/
  if ( v20 ) /*0x6882e4*/
  {
    v21 = SuperWeaponTypeClass::FindByName(g_INI_Key_Neutral); /*0x6882eb*/
    v22 = HouseClass::Construct((int)v20, *((_DWORD *)g_SuperWeaponTypeCount + v21)); /*0x688303*/
  }
  else
  {
    v22 = 0; /*0x688307*/
  }
  *(_DWORD *)(v22 + 90196) = Network_Assign(g_INI_Key_LightGrey); /*0x68831a*/
  HouseClass::GetColor((char *)v22); /*0x688320*/
  v23 = RA2_OPNEW(0x160B8u); /*0x68832f*/
  if ( v23 ) /*0x688336*/
  {
    v24 = SuperWeaponTypeClass::FindByName(g_INI_Key_Special); /*0x68833d*/
    v25 = HouseClass::Construct((int)v23, *((_DWORD *)g_SuperWeaponTypeCount + v24)); /*0x688356*/
  }
  else
  {
    v25 = 0; /*0x68835a*/
  }
  *(_DWORD *)(v25 + 90196) = Network_Assign(g_INI_Key_LightGrey); /*0x68836d*/
  return HouseClass::GetColor((char *)v25); /*0x688378*/
}
}
// 0x6886B0
namespace gamemd {
void GenerateScenarioUnits()
{
  int v1; // edi
  int v2; // ebp
  int i; // ebx
  _BYTE *v4; // ecx
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // edx
  int j; // esi
  _BYTE *v9; // ecx
  int v10; // edi
  int v11; // ecx
  _DWORD *v12; // esi
  int v13; // eax
  int v14; // ebp
  int v15; // ebx
  int v16; // edi
  int v17; // esi
  int v18; // eax
  int v19; // edx
  _DWORD *v20; // ecx
  int v21; // eax
  int v22; // eax
  int v23; // esi
  int v24; // eax
  int v25; // eax
  int v26; // ecx
  int v27; // ebp
  int v28; // eax
  int k; // edi
  __int16 v30; // cx
  double v31; // st7
  double v32; // st7
  int v33; // edi
  int v34; // edx
  int v35; // ecx
  int v38; // eax
  void *v39; // esi
  int v41; // eax
  int *v42; // esi
  int v43; // eax
  void *v45; // eax
  int v46; // ebx
  int v47; // esi
  int v48; // eax
  int v49; // eax
  void *v50; // edi
  _DWORD *v51; // ebp
  void *v52; // edi
  int v53; // eax
  _DWORD v54[253]; // [esp-3DCh] [ebp-504h] BYREF
  LPVOID ppv; // [esp+28h] [ebp-100h]
  int v57; // [esp+30h] [ebp-F8h]
  int v58; // [esp+34h] [ebp-F4h] BYREF
  int v59; // [esp+38h] [ebp-F0h]
  void **v60; // [esp+3Ch] [ebp-ECh] BYREF
  void *Block; // [esp+40h] [ebp-E8h]
  int v62; // [esp+44h] [ebp-E4h]
  char v63; // [esp+49h] [ebp-DFh]
  int v64; // [esp+4Ch] [ebp-DCh]
  int v65; // [esp+50h] [ebp-D8h]
  int v66; // [esp+54h] [ebp-D4h]
  void **v67; // [esp+58h] [ebp-D0h] BYREF
  void *v68; // [esp+5Ch] [ebp-CCh]
  int v69; // [esp+60h] [ebp-C8h]
  char v70; // [esp+65h] [ebp-C3h]
  int v71; // [esp+68h] [ebp-C0h]
  int v72; // [esp+6Ch] [ebp-BCh]
  void **v73; // [esp+70h] [ebp-B8h] BYREF
  void *v74; // [esp+74h] [ebp-B4h]
  int v75; // [esp+78h] [ebp-B0h]
  int v76; // [esp+7Ch] [ebp-ACh]
  int v77; // [esp+80h] [ebp-A8h]
  int v78; // [esp+84h] [ebp-A4h]
  int v79; // [esp+88h] [ebp-A0h]
  void **v80; // [esp+8Ch] [ebp-9Ch] BYREF
  void *v81; // [esp+90h] [ebp-98h]
  int v82; // [esp+94h] [ebp-94h]
  char v83; // [esp+99h] [ebp-8Fh]
  int v84; // [esp+9Ch] [ebp-8Ch]
  _DWORD v85[4]; // [esp+A4h] [ebp-84h] BYREF
  _DWORD v86[3]; // [esp+B4h] [ebp-74h] BYREF
  _DWORD v87[26]; // [esp+C0h] [ebp-68h] BYREF

  a1 = a1; /*0x6886c0*/
  EventClass::resetEvent(&v60, 0, 0); /*0x6886cc*/
  v60 = (void*)&DynamicVectorClass_TechnoClass___vftable; /*0x6886d6*/
  ppv = (LPVOID)g_Rules_MultiEngineer; /*0x6886de*/
  v65 = 10; /*0x6886e9*/
  v64 = 0; /*0x6886f1*/
  if ( Bases ) /*0x6886f9*/
    ppv = (char *)ppv - 1; /*0x6886fb*/
  qmemcpy(v54, (char *)g_ScenarioClass_Instance + 536, sizeof(v54)); /*0x68871d*/
  Debug::Log(); /*0x688724*/
  Debug::Log(); /*0x68873a*/
  v1 = 0; /*0x68874a*/
  v2 = 0; /*0x68874c*/
  for ( i = 0; i < g_CrateCount; ++i ) /*0x688752*/
  {
    v4 = (_BYTE *)*((_DWORD *)g_UnitTypeCount2 + i); /*0x68875a*/
    if ( v4[1749] ) /*0x68875d*/
    {
      v5 = 0; /*0x68876d*/
      v6 = g_RulesClass_Instance->AICaptureLowMoney[1]; /*0x68876f*/
      if ( v6 <= 0 ) /*0x688777*/
      {
  LABEL_9:
        v1 += (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 172))(v4); /*0x68878b*/
        ++v2; /*0x688795*/
      }
      else
      {
        v7 = (_DWORD *)g_RulesClass_Instance->AICaptureLowPower[2]; /*0x688779*/
        while ( (_BYTE *)*v7 != v4 ) /*0x688781*/
        {
          ++v5; /*0x688783*/
          ++v7; /*0x688784*/
          if ( v5 >= v6 ) /*0x688789*/
            goto LABEL_9; /*0x688789*/
        }
      }
    }
  }
  for ( j = 0; j < g_LoadScreenProgress; ++j ) /*0x6887a9*/
  {
    v9 = (_BYTE *)*((_DWORD *)Factory_ExitCellTable + j); /*0x6887b1*/
    if ( v9[1749] ) /*0x6887b4*/
    {
      v1 += (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v9 + 172))(v9); /*0x6887c6*/
      ++v2; /*0x6887c8*/
    }
  }
  v66 = (_DWORD)ppv * (v1 / v2); /*0x6887e5*/
  Multiplayer::FindStartPositions(&v80); /*0x6887e9*/
  v10 = 0; /*0x6887f0*/
  memset(v85, 0, sizeof(v85)); /*0x6887f2*/
  v11 = 0; /*0x6887f9*/
  v59 = 0; /*0x688802*/
  v79 = 0; /*0x68880d*/
  if ( HouseClass_Count > 0 ) /*0x68881f*/
  {
  LABEL_16:
    v12 = *(_DWORD **)&HouseClass_Array->gap0[4 * v11]; /*0x688825*/
    ppv = v12; /*0x68882e*/
    v13 = v12[13]; /*0x688832*/
    if ( *(_BYTE *)(v13 + 422) ) /*0x688835*/
      goto LABEL_111; /*0x68883d*/
    v54[252] = v13 + 36; /*0x688846*/
    v54[251] = v11; /*0x688847*/
    v54[250] = aGeneratingUnit; /*0x688848*/
    Debug::Log(); /*0x68884d*/
    UnitTypeVector::Construct2(0, 0); /*0x68885b*/
    v67 = (void*)&DynamicVectorClass_UnitTypeClass___vftable; /*0x68886b*/
    v72 = 10; /*0x688873*/
    v71 = 0; /*0x688877*/
    InfantryTypeVector::ConstructFromData(0, 0); /*0x68887b*/
    v73 = (void*)&DynamicVectorClass_InfantryTypeClass___vftable; /*0x688880*/
    v78 = 10; /*0x688888*/
    v77 = 0; /*0x68888c*/
    v14 = 0; /*0x688898*/
    v15 = 1 << *(_DWORD *)(v12[13] + 180); /*0x6888a5*/
    if ( g_CrateCount <= 0 ) /*0x6888a9*/
      goto LABEL_35; /*0x6888a9*/
    v16 = v69; /*0x6888af*/
    while ( 1 ) /*0x6888b9*/
    {
      v17 = *((_DWORD *)g_UnitTypeCount2 + v14); /*0x6888b9*/
      if ( *(_BYTE *)(v17 + 1749) /*0x6888e2*/
        && *(_DWORD *)(v17 + 1588) <= *((_DWORD *)ppv + 117)
        && (v15 & *(_DWORD *)(v17 + 1740)) != 0 )
      {
        v18 = 0; /*0x6888ea*/
        v19 = g_RulesClass_Instance->AICaptureLowMoney[1]; /*0x6888ec*/
        if ( v19 > 0 ) /*0x6888f4*/
        {
          v20 = (_DWORD *)g_RulesClass_Instance->AICaptureLowPower[2]; /*0x6888f6*/
          while ( *v20 != v17 ) /*0x6888fe*/
          {
            ++v18; /*0x688900*/
            ++v20; /*0x688901*/
            if ( v18 >= v19 ) /*0x688906*/
              goto LABEL_26; /*0x688906*/
          }
          goto LABEL_33; /*0x6888fe*/
        }
  LABEL_26:
        if ( v71 < v16 ) /*0x68890c*/
          goto LABEL_31; /*0x68890c*/
        if ( !v70 && v16 || v72 <= 0 ) /*0x688920*/
          goto LABEL_33; /*0x688920*/
        if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v67[2])(&v67, v72 + v16, 0) ) /*0x688931*/
        {
  LABEL_31:
          v21 = v71++; /*0x68893c*/
          *((_DWORD *)v68 + v21) = v17; /*0x688947*/
        }
        v16 = v69; /*0x68894a*/
      }
  LABEL_33:
      if ( ++v14 >= g_CrateCount ) /*0x688956*/
      {
        v10 = 0; /*0x68895c*/
  LABEL_35:
        if ( g_LoadScreenProgress > 0 ) /*0x688964*/
        {
          v22 = v75; /*0x68896a*/
          do /*0x688974*/
          {
            v23 = *((_DWORD *)Factory_ExitCellTable + v10); /*0x688974*/
            if ( *(_BYTE *)(v23 + 1749) /*0x688999*/
              && *(_DWORD *)(v23 + 1588) <= *((_DWORD *)ppv + 117)
              && (v15 & *(_DWORD *)(v23 + 1740)) != 0 )
            {
              if ( v77 < v22 ) /*0x68899f*/
                goto LABEL_45; /*0x68899f*/
              if ( !IDA_BYTE1(v76) && v22 || v78 <= 0 ) /*0x6889b3*/
                goto LABEL_47; /*0x6889b3*/
              if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v73[2])(&v73, v78 + v22, 0) ) /*0x6889c2*/
              {
  LABEL_45:
                v24 = v77++; /*0x6889cd*/
                *((_DWORD *)v74 + v24) = v23; /*0x6889d8*/
              }
              v22 = v75; /*0x6889db*/
            }
  LABEL_47:
            ++v10; /*0x6889df*/
          }
          while ( v10 < g_LoadScreenProgress ); /*0x688974*/
        }
        if ( v59 ) /*0x6889f0*/
        {
          v27 = 0; /*0x688a3b*/
          memset(v87, 0, sizeof(v87)); /*0x688a3d*/
          v28 = v84; /*0x688a3f*/
          if ( v84 > 0 ) /*0x688a48*/
          {
            do /*0x688ad6*/
            {
              if ( !*((_BYTE *)v85 + v27) ) /*0x688a4e*/
              {
                for ( k = 0; k < v28; ++k ) /*0x688a5d*/
                {
                  if ( *((_BYTE *)v85 + k) ) /*0x688a5f*/
                  {
                    v30 = *((_WORD *)v81 + 2 * v27) - *((_WORD *)v81 + 2 * k); /*0x688a86*/
                    v57 = (__int16)(*((_WORD *)v81 + 2 * v27 + 1) - *((_WORD *)v81 + 2 * k + 1)); /*0x688a90*/
                    v31 = (double)v57; /*0x688a94*/
                    v57 = v30; /*0x688a98*/
                    v32 = Math::Sqrt((double)v30 * (double)v30 + v31 * v31); /*0x688ab1*/
                    v87[v27] += (__int16)Math::RoundToInt(v32); /*0x688ac5*/
                    v28 = v84; /*0x688ac7*/
                  }
                }
              }
              ++v27; /*0x688ad3*/
            }
            while ( v27 < v28 ); /*0x688ad6*/
          }
          v33 = 0; /*0x688adc*/
          v34 = 0; /*0x688ade*/
          v35 = 0; /*0x688ae0*/
          if ( v28 > 0 ) /*0x688ae4*/
          {
            v87 = v87; /*0x688ae6*/
            do /*0x688b02*/
            {
              if ( *v87 > v34 || !v34 ) /*0x688af6*/
              {
                v34 = *v87; /*0x688af8*/
                v33 = v35; /*0x688afa*/
              }
              ++v35; /*0x688afc*/
              ++v87; /*0x688afd*/
            }
            while ( v35 < v28 ); /*0x688b02*/
          }
          v81 = v81; /*0x688b04*/
          v38 = v59 + 1; /*0x688b0c*/
          *((_BYTE *)v85 + v33) = 1; /*0x688b0d*/
          v26 = v81[v33]; /*0x688b15*/
          v59 = v38; /*0x688b18*/
          v58 = v26; /*0x688b1c*/
        }
        else
        {
          v25 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, v84 - 1); /*0x688a08*/
          *((_BYTE *)v85 + v25) = 1; /*0x688a0d*/
          v59 = 1; /*0x688a19*/
          v26 = *((_DWORD *)v81 + v25); /*0x688a21*/
          v58 = v26; /*0x688a24*/
        }
        HouseClass::SetMapSeed(ppv, v26); /*0x688b25*/
        if ( Bases ) /*0x688b31*/
        {
          v39 = RA2_OPNEW(0x8E8u); /*0x688b41*/
          ppv = ppv; /*0x688b51*/
          if ( v39 ) /*0x688b4a*/
          {
            v54[252] = ppv; /*0x688b5a*/
            v41 = BuildingClass::FindBySWType(ppv, (int)&g_RulesClass_Instance->AICaptureLowPower[1]); /*0x688b5e*/
            v42 = (int *)UnitClass::Construct((int)v39, v41, (LPVOID)v54[252]); /*0x688b6b*/
          }
          else
          {
            v42 = 0; /*0x688b73*/
          }
          v43 = *v42; /*0x688b7f*/
          v54[252] = 0; /*0x688b81*/
          v86[2] = 0; /*0x688b8b*/
          v86[0] = ((__int16)v58 << 8) + 128; /*0x688b92*/
          v54[251] = v86; /*0x688ba9*/
          v86[1] = (IDA_SHIWORD(v58) << 8) + 128; /*0x688bac*/
          if ( v42->COMStub_54(v86, 0) /*0x688bc5*/
            || FindInfantryDeployPosition(v42, (__int16 *)&v58, 1) )
          {
            if ( v42 ) /*0x688bdf*/
            {
              dword_B05458 = dword_B05458; /*0x688be1*/
              ppv[5367] = 0; /*0x688be6*/
              ppv[5368] = dword_B05458; /*0x688bec*/
              if ( (*(_BYTE *)g_ScenarioClass_Instance & 0x10) != 0 ) /*0x688bfb*/
                HouseClass::PickedUpFlag(v42, 1); /*0x688c02*/
            }
          }
          else if ( v42 ) /*0x688bd0*/
          {
            (*(void (__thiscall **)(int *, int))(*v42 + 32))(v42, 1); /*0x688bd8*/
          }
        }
        v45 = Block; /*0x688c0b*/
        v46 = 0; /*0x688c0f*/
        v64 = 0; /*0x688c13*/
        if ( Block && v63 ) /*0x688c1f*/
        {
          RA2_OPDEL(Block); /*0x688c22*/
          v45 = 0; /*0x688c2a*/
          Block = 0; /*0x688c2c*/
        }
        v63 = 0; /*0x688c34*/
        v62 = 0; /*0x688c3b*/
        if ( v66 > 0 ) /*0x688c3f*/
        {
          v57 = 2 * v66 / 3; /*0x688c58*/
          do /*0x688da2*/
          {
            v47 = 0; /*0x688c60*/
            if ( v46 >= v57 || v71 <= 0 ) /*0x688c6c*/
            {
              if ( v77 > 0 ) /*0x688c91*/
              {
                v49 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, v77 - 1); /*0x688ca2*/
                v47 = *((_DWORD *)v74 + v49); /*0x688cab*/
              }
            }
            else
            {
              v48 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, v71 - 1); /*0x688c7d*/
              v47 = *((_DWORD *)v68 + v48); /*0x688c86*/
            }
            v50 = (void *)(*(int (__thiscall **)(int, LPVOID))(*(_DWORD *)v47 + 140))(v47, ppv); /*0x688cbd*/
            v51 = AbstractClass::IsTechnoType(v50); /*0x688cce*/
            if ( FindInfantryDeployPosition((int *)v50, (__int16 *)&v58, 4) ) /*0x688cd0*/
            {
              v52 = (void *)ppv; /*0x688cef*/
              v54[252] = v47 + 36; /*0x688cf6*/
              v54[251] = *((_DWORD *)ppv + 13) + 36; /*0x688cfd*/
              v54[250] = aHouseSDeployed; /*0x688cfe*/
              Debug::Log(); /*0x688d03*/
              v46 += (*(int (__thiscall **)(int))(*(_DWORD *)v47 + 172))(v47); /*0x688d19*/
              if ( v64 < v62 /*0x688d44*/
                || (v63 || !v62)
                && v65 > 0
                && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v60[2])(&v60, v65 + v62, 0) )
              {
                v53 = v64++; /*0x688d4f*/
                *((_DWORD *)Block + v53) = v51; /*0x688d5a*/
              }
              if ( (*(_DWORD *)g_ScenarioClass_Instance & 0x200) != 0 ) /*0x688d68*/
                Timer::SetFlag(v51 + 84, 1); /*0x688d72*/
              if ( (unsigned __int8)House::IsCurrentPlayer(v52) ) /*0x688d79*/
                (*(void (__thiscall **)(_DWORD *, int))(*v51 + 496))(v51, 5); /*0x688d98*/
              else
                (*(void (__thiscall **)(_DWORD *, int))(*v51 + 496))(v51, 11); /*0x688d89*/
            }
            else if ( v50 ) /*0x688cdb*/
            {
              (*(void (__thiscall **)(void *, int))(v50->needsSave)(v50, 1); /*0x688ce7*/
            }
          }
          while ( v46 < v66 ); /*0x688da2*/
          v45 = Block; /*0x688da8*/
        }
        v64 = 0; /*0x688db0*/
        if ( v45 && v63 ) /*0x688dbc*/
        {
          RA2_OPDEL(v45); /*0x688dbf*/
          Block = 0; /*0x688dc7*/
        }
        v63 = 0; /*0x688dcf*/
        v62 = 0; /*0x688dd6*/
        v73 = (void*)&VectorClass_InfantryTypeClass___vftable; /*0x688dda*/
        if ( v74 && IDA_BYTE1(v76) ) /*0x688dea*/
        {
          RA2_OPDEL(v74); /*0x688ded*/
          v74 = 0; /*0x688df5*/
        }
        IDA_BYTE1(v76) = 0; /*0x688dfd*/
        v75 = 0; /*0x688e04*/
        v67 = (void*)&VectorClass_UnitTypeClass___vftable; /*0x688e08*/
        if ( v68 && v70 ) /*0x688e18*/
        {
          RA2_OPDEL(v68); /*0x688e1b*/
          v68 = 0; /*0x688e23*/
        }
        v11 = v79; /*0x688e27*/
        v70 = 0; /*0x688e2b*/
        v69 = 0; /*0x688e30*/
        v10 = 0; /*0x688e34*/
  LABEL_111:
        v79 = ++v11; /*0x688e3e*/
        if ( v11 >= HouseClass_Count ) /*0x688e42*/
          break; /*0x688e42*/
        goto LABEL_16; /*0x688e42*/
      }
    }
  }
  v54[252] = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 0xFFFF); /*0x688e48*/
  v54[251] = aFinishedUnitGe; /*0x688e5f*/
  Debug::Log(); /*0x688e64*/
  v80 = (void*)&VectorClass_Cell_vftable; /*0x688e75*/
  if ( v81 && v83 ) /*0x688e88*/
  {
    RA2_OPDEL(v81); /*0x688e8b*/
    v81 = 0; /*0x688e93*/
  }
  v83 = 0; /*0x688e9b*/
  v82 = 0; /*0x688ea5*/
  v60 = (void*)&VectorClass_TechnoClass___vftable; /*0x688ea9*/
  if ( Block ) /*0x688eb1*/
  {
    if ( v63 ) /*0x688eb9*/
      RA2_OPDEL(Block); /*0x688ebc*/
  }
}
}
// 0x688ED0
namespace gamemd {
void FindInfantryDeployPosition(int * a1, RadarClass * a2, int a3)
{
  __int16 *v3; // esi
  _DWORD *v5; // eax
  int ClosestObject; // eax
  int v7; // edx
  int GroundHeight; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  int v13; // ecx
  int v14; // eax
  int v17; // ebp
  unsigned __int16 v18; // bx
  int v19; // ebx
  int v20; // ebp
  int v21; // ebp
  int v22; // esi
  int v23; // ebx
  int *v24; // edi
  _DWORD *v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // [esp+10h] [ebp-5Ch] BYREF
  int v29; // [esp+14h] [ebp-58h]
  int v30; // [esp+18h] [ebp-54h]
  int v31; // [esp+1Ch] [ebp-50h]
  int v32; // [esp+20h] [ebp-4Ch]
  int v33; // [esp+24h] [ebp-48h]
  int v36; // [esp+30h] [ebp-3Ch]
  int v37; // [esp+34h] [ebp-38h]
  int v38; // [esp+38h] [ebp-34h]
  int v39; // [esp+3Ch] [ebp-30h] BYREF
  int v40; // [esp+40h] [ebp-2Ch]
  int v41; // [esp+44h] [ebp-28h]
  int v42; // [esp+48h] [ebp-24h] BYREF
  int v43; // [esp+4Ch] [ebp-20h]
  int v44; // [esp+50h] [ebp-1Ch]
  _DWORD v45[3]; // [esp+54h] [ebp-18h] BYREF
  _DWORD v46[3]; // [esp+60h] [ebp-Ch] BYREF

  v3 = a2; /*0x688ed7*/
  a2 = a2; /*0x688ee3*/
  a1 = a1; /*0x688ee7*/
  if ( LayerClass::IsWithinUsableArea(&MapClass_Instance, a2, 1) ) /*0x688eeb*/
  {
    v39 = 0; /*0x688f07*/
    v40 = 0; /*0x688f0b*/
    v5 = CellCoord::To_CellObj(&MapClass_Instance, v3); /*0x688f0f*/
    ClosestObject = Object::FindClosestObjectCell(v5, &v39, 0, 0); /*0x688f16*/
    if ( !ClosestObject /*0x688f39*/
      || (*(int (__thiscall **)(int))(*(_DWORD *)ClosestObject + 44))(ClosestObject) == 15
      && (*(int (__thiscall **)(int *))(*a1 + 44))(a1) == 15 )
    {
      v7 = v3[1] << 8; /*0x688f4f*/
      v42 = (*v3 << 8) + 128; /*0x688f52*/
      v43 = v7 + 128; /*0x688f62*/
      v44 = 0; /*0x688f66*/
      GroundHeight = Cell::GetGroundHeight(&v42); /*0x688f6a*/
      v9 = v3[1]; /*0x688f72*/
      v10 = (*v3 << 8) + 128; /*0x688f79*/
      v41 = GroundHeight; /*0x688f7f*/
      v11 = *a1; /*0x688f83*/
      v39 = v10; /*0x688f85*/
      v40 = (v9 << 8) + 128; /*0x688f9a*/
      if ( (*(unsigned __int8 (__thiscall **)(int *, int *, _DWORD))(v11 + 216))(a1, &v39, 0) ) /*0x688f9e*/
        return 1; /*0x688fb4*/
    }
  }
  if ( a3 < 32 ) /*0x688fc4*/
  {
  LABEL_8:
    v29 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 7); /*0x688fce*/
    v30 = 0; /*0x688fe6*/
    v37 = 0; /*0x688fea*/
    while ( 1 ) /*0x689032*/
    {
      v13 = *v3; /*0x689006*/
      v14 = v3[1]; /*0x689009*/
      dword_87F90C = dword_87F90C; /*0x68900d*/
      v36 = 0; /*0x689013*/
      dword_87F910 = dword_87F910; /*0x689017*/
      v32 = dword_87F910 + g_AircraftTrackerState - 1; /*0x689025*/
      switch ( v29 ) /*0x689032*/
      {
        case 0: /*0x689032*/
          v17 = a3; /*0x689039*/
          v14 -= a3; /*0x68903d*/
          break; /*0x68903f*/
        case 1: /*0x689032*/
          v17 = a3; /*0x689041*/
          v13 += a3; /*0x689045*/
          v14 -= a3; /*0x689047*/
          break; /*0x689049*/
        case 2: /*0x689032*/
          v17 = a3; /*0x68904b*/
          v13 += a3; /*0x68904f*/
          break; /*0x689051*/
        case 3: /*0x689032*/
          v17 = a3; /*0x689053*/
          v13 += a3; /*0x689057*/
          v14 += a3; /*0x689059*/
          break; /*0x68905b*/
        case 4: /*0x689032*/
          v17 = a3; /*0x68905d*/
          v14 += a3; /*0x689061*/
          break; /*0x689063*/
        case 5: /*0x689032*/
          v17 = a3; /*0x689065*/
          v13 -= a3; /*0x689069*/
          v14 += a3; /*0x68906b*/
          break; /*0x68906d*/
        case 6: /*0x689032*/
          v17 = a3; /*0x68906f*/
          v13 -= a3; /*0x689073*/
          break; /*0x689075*/
        case 7: /*0x689032*/
          v17 = a3; /*0x689077*/
          v13 -= a3; /*0x68907b*/
          v14 -= a3; /*0x68907d*/
          break; /*0x68907f*/
        default:
          v17 = a3; /*0x689081*/
          break; /*0x689081*/
      }
      if ( v13 > dword_87F90C + g_AircraftTrackerPool - 1 ) /*0x689087*/
        v13 = dword_87F90C + g_AircraftTrackerPool - 1; /*0x689089*/
      if ( v13 < dword_87F90C ) /*0x68908d*/
        IDA_LOWORD(v13) = dword_87F90C; /*0x68908f*/
      if ( v14 > v32 ) /*0x689097*/
        v14 = v32; /*0x689099*/
      if ( v14 < dword_87F910 ) /*0x68909d*/
        IDA_LOWORD(v14) = dword_87F910; /*0x68909f*/
      IDA_LOWORD(v31) = v13; /*0x6890a6*/
      IDA_HIWORD(v31) = v14; /*0x6890ab*/
      v18 = v13; /*0x6890b0*/
      v28 = v31; /*0x6890b4*/
      if ( v30 <= 0 ) /*0x6890b8*/
      {
        v3 = a2; /*0x68918e*/
        v24 = a1; /*0x689192*/
      }
      else
      {
        v19 = (__int16)v14; /*0x6890be*/
        v20 = (__int16)v13; /*0x6890c7*/
        v38 = dword_87F90C + g_AircraftTrackerPool - 1; /*0x6890d0*/
        v39 = dword_87F910 + g_AircraftTrackerState - 1; /*0x6890e5*/
        v32 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 1); /*0x6890fe*/
        if ( Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 99) >= 50 ) /*0x68910a*/
        {
          v21 = v20 - v32; /*0x68911e*/
          if ( v21 < dword_87F90C ) /*0x689124*/
            IDA_LOWORD(v21) = dword_87F90C; /*0x689126*/
        }
        else
        {
          v21 = v32 + v20; /*0x689114*/
          if ( v21 > v38 ) /*0x689118*/
            IDA_LOWORD(v21) = v38; /*0x68911a*/
        }
        v22 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 1); /*0x68913d*/
        if ( Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 99) >= 50 ) /*0x689156*/
        {
          v23 = v19 - v22; /*0x689166*/
          if ( v23 < dword_87F910 ) /*0x68916a*/
            IDA_LOWORD(v23) = dword_87F910; /*0x68916c*/
        }
        else
        {
          v23 = v22 + v19; /*0x68915c*/
          if ( v23 > v39 ) /*0x689160*/
            IDA_LOWORD(v23) = v39; /*0x689162*/
        }
        v24 = a1; /*0x68916e*/
        v3 = a2; /*0x689172*/
        IDA_LOWORD(v33) = v21; /*0x689176*/
        v17 = a3; /*0x68917b*/
        IDA_HIWORD(v33) = v23; /*0x68917f*/
        v18 = v33; /*0x689184*/
        v28 = v33; /*0x689188*/
      }
      if ( IDA___PAIR32__(IDA_HIWORD(v28), v18) == *(_DWORD *)v3 ) /*0x689199*/
        v36 = 1; /*0x6891a6*/
      if ( LayerClass::IsWithinUsableArea(&MapClass_Instance, (__int16 *)&v28, 1) && !v36 ) /*0x6891cf*/
      {
        v42 = 0; /*0x6891e6*/
        v43 = 0; /*0x6891ea*/
        v25 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v28); /*0x6891ee*/
        v26 = Object::FindClosestObjectCell(v25, &v42, 0, 0); /*0x6891f5*/
        if ( !v26 /*0x689218*/
          || (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 44))(v26) == 15
          && (*(int (__thiscall **)(int *))(*v24 + 44))(v24) == 15 )
        {
          Coord::Subtract(v45, ((__int16)v28 << 8) + 128, (IDA_SHIWORD(v28) << 8) + 128, 0); /*0x68923d*/
          v27 = Cell::GetGroundHeight(v45); /*0x68924c*/
          Coord::Subtract(v46, ((__int16)v28 << 8) + 128, (IDA_SHIWORD(v28) << 8) + 128, v27); /*0x689274*/
          if ( (*(unsigned __int8 (__thiscall **)(int *, _DWORD *, _DWORD))(*v24 + 216))(v24, v46, 0) ) /*0x689283*/
            return 1; /*0x68928b*/
        }
      }
      if ( ++v29 > 7 ) /*0x6892a1*/
        v29 = 0; /*0x6892a3*/
      if ( ++v37 > 7 ) /*0x6892b3*/
      {
        if ( ++v30 >= 2 ) /*0x6892c5*/
        {
          a3 = v17 + 1; /*0x6892cf*/
          if ( v17 + 1 < 32 ) /*0x6892d3*/
            goto LABEL_8; /*0x6892d3*/
          return 0; /*0x6892d3*/
        }
        v37 = 0; /*0x688ff2*/
      }
    }
  }
  return 0; /*0x688fa8*/
}
}
// 0x681070
namespace gamemd {
int E4Recv_681070::sub_681070()
{
  return this->vtable2; /*0x681073*/
}
} // namespace gamemd

// 0x681090
namespace gamemd {
int E4Recv_681090::ReadPointerFromECX3()
{
  return *(_DWORD *)this; /*0x681092*/
}
} // namespace gamemd

// 0x6810C0
namespace gamemd {
const char * E4Recv_6810C0::_raw_name_type_info__QBEPBDXZ()
{
  return (char *)this + 8; /*0x6810c3*/
}
} // namespace gamemd

// 0x681180
namespace gamemd {
char * E4Recv_681180::sub_681180()
{
  return this + 400; /*0x681186*/
}
} // namespace gamemd

// 0x6811B0
namespace gamemd {
char * E4Recv_6811B0::sub_6811B0()
{
  return &this->qA50; /*0x6811b6*/
}
} // namespace gamemd

// 0x6811F0
namespace gamemd {
char * E4Recv_6811F0::sub_6811F0()
{
  return &this->u32_2D4; /*0x6811f6*/
}
} // namespace gamemd

// 0x681220
namespace gamemd {
unsigned int * E4Recv_681220::sub_681220(unsigned int * a2)
{
  *a2 = *(&this->q0606); /*0x68122a*/
  a2[1] = *(&this->q0607); /*0x681232*/
  return a2; /*0x681235*/
}
} // namespace gamemd

// 0x681260
namespace gamemd {
unsigned int * E4Recv_681260::sub_681260(unsigned int * a2)
{
  *a2 = *(&this->q0608); /*0x68126a*/
  a2[1] = *(&this->q0609); /*0x681272*/
  return a2; /*0x681275*/
}
} // namespace gamemd

// 0x6812A0
namespace gamemd {
unsigned int * E4Recv_6812A0::sub_6812A0(unsigned int * a2)
{
  *a2 = *(&this->customSound0); /*0x6812aa*/
  a2[1] = *(&this->customSound1); /*0x6812b2*/
  return a2; /*0x6812b5*/
}
} // namespace gamemd

// 0x682570
namespace gamemd {
int COM_Property_ReadScenario(int a1, int a2, unsigned int * a3)
{
  _DWORD *v3; // edi
  int v4; // esi
  _DWORD v6[2]; // [esp+18h] [ebp-18h] BYREF
  _WORD v7[4]; // [esp+20h] [ebp-10h] BYREF
  int v8; // [esp+28h] [ebp-8h]

  v3 = a3; /*0x682579*/
  a3 = 0; /*0x682581*/
  *v3 = 0; /*0x68258a*/
  v4 = (*(int (__stdcall **)(int, void *, int, _DWORD **))(*(_DWORD *)a1 + 16))(a1, &unk_7F7D10, 18, &a3); /*0x68259d*/
  if ( v4 >= 0 ) /*0x6825a1*/
  {
    v6[0] = 1; /*0x6825c9*/
    v6[1] = a2; /*0x6825d1*/
    if ( !a3 ) /*0x6825d5*/
      WinAPI::Wrapper(-2147467261); /*0x6825dc*/
    v4 = (*(int (__stdcall **)(_DWORD *, int, _DWORD *, _WORD *))(*a3 + 12))(a3, 1, v6, v7); /*0x6825f7*/
    if ( v4 >= 0 ) /*0x6825fb*/
    {
      if ( v7[0] == 3 ) /*0x68261b*/
        *v3 = v8; /*0x682621*/
      if ( a3 ) /*0x682629*/
        (*(void (__stdcall **)(_DWORD *))(*a3 + 8))(a3); /*0x68262e*/
    }
    else if ( a3 ) /*0x682603*/
    {
      (*(void (__stdcall **)(_DWORD *))(*a3 + 8))(a3); /*0x682608*/
      return v4; /*0x682612*/
    }
  }
  else if ( a3 ) /*0x6825a9*/
  {
    (*(void (__stdcall **)(_DWORD *))(*a3 + 8))(a3); /*0x6825b2*/
    return v4; /*0x6825bc*/
  }
  return v4; /*0x6825b7*/
}
} // namespace gamemd

// 0x682D30
namespace gamemd {
int COM_ReadBuffer(int a1, int a2, unsigned int * a3)
{
  _DWORD *v3; // edi
  int v4; // esi
  int v6; // eax
  _DWORD v7[2]; // [esp+18h] [ebp-18h] BYREF
  _WORD v8[4]; // [esp+20h] [ebp-10h] BYREF
  int v9; // [esp+28h] [ebp-8h]
  int v10; // [esp+2Ch] [ebp-4h]

  v3 = a3; /*0x682d39*/
  a3 = 0; /*0x682d41*/
  *v3 = 0; /*0x682d4a*/
  v3[1] = 0; /*0x682d50*/
  v4 = (*(int (__stdcall **)(int, void *, int, _DWORD **))(*(_DWORD *)a1 + 16))(a1, &unk_7F7D10, 18, &a3); /*0x682d64*/
  if ( v4 >= 0 ) /*0x682d68*/
  {
    v7[0] = 1; /*0x682d90*/
    v7[1] = a2; /*0x682d98*/
    if ( !a3 ) /*0x682d9c*/
      WinAPI::Wrapper(-2147467261); /*0x682da3*/
    v4 = (*(int (__stdcall **)(_DWORD *, int, _DWORD *, _WORD *))(*a3 + 12))(a3, 1, v7, v8); /*0x682dbe*/
    if ( v4 >= 0 ) /*0x682dc2*/
    {
      if ( v8[0] == 64 ) /*0x682de2*/
      {
        v6 = v10; /*0x682de8*/
        *v3 = v9; /*0x682dec*/
        v3[1] = v6; /*0x682dee*/
      }
      if ( a3 ) /*0x682df7*/
        (*(void (__stdcall **)(_DWORD *))(*a3 + 8))(a3); /*0x682dfc*/
    }
    else if ( a3 ) /*0x682dca*/
    {
      (*(void (__stdcall **)(_DWORD *))(*a3 + 8))(a3); /*0x682dcf*/
      return v4; /*0x682dd9*/
    }
  }
  else if ( a3 ) /*0x682d70*/
  {
    (*(void (__stdcall **)(_DWORD *))(*a3 + 8))(a3); /*0x682d79*/
    return v4; /*0x682d83*/
  }
  return v4; /*0x682d7e*/
}
} // namespace gamemd

// 0x683070
namespace gamemd {
void sub_683070()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x68307c*/
  dbl_B05460 = Math::Sqrt(v0 + v0); /*0x68308e*/
}
} // namespace gamemd

// 0x6830A0
namespace gamemd {
void sub_6830A0()
{
  dbl_B054C0 = dbl_B05460 / 60.0; /*0x6830ac*/
}
} // namespace gamemd

// 0x6830C0
namespace gamemd {
void sub_6830C0()
{
  dbl_B054A8 = 1.0 / dbl_B054C0; /*0x6830cc*/
}
} // namespace gamemd

// 0x6830E0
namespace gamemd {
void sub_6830E0()
{
  dbl_B054A0 = 0.0174532925199433 * 45.0; /*0x6830ec*/
}
} // namespace gamemd

// 0x683100
namespace gamemd {
void sub_683100()
{
  dbl_B05468 = 0.0174532925199433 * 60.0; /*0x68310c*/
}
} // namespace gamemd

// 0x683120
namespace gamemd {
void sub_683120()
{
  dbl_B05440 = 0.0174532925199433 * 90.0; /*0x68312c*/
}
} // namespace gamemd

// 0x683140
namespace gamemd {
long long sub_683140()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B05440 - dbl_B05468); /*0x683152*/
  result = Math::RoundToInt(v0 * dbl_B05460 * 0.5); /*0x683166*/
  dword_B054C8 = result; /*0x68316b*/
  return result; /*0x683170*/
}
} // namespace gamemd

// 0x683180
namespace gamemd {
void sub_683180()
{
  dbl_B05470 = Math::ArcTan((double)dword_B054C8 * 0.00390625); /*0x683197*/
}
} // namespace gamemd

// 0x6831B0
namespace gamemd {
void sub_6831B0()
{
  dbl_B05498 = Math::ArcTan((double)(2 * dword_B054C8) / dbl_B05460); /*0x6831d2*/
}
} // namespace gamemd

// 0x6831E0
namespace gamemd {
long long sub_6831E0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B054C8) + 0.5); /*0x6831fb*/
  dword_B054BC = result; /*0x683200*/
  return result; /*0x683206*/
}
} // namespace gamemd

// 0x683210
namespace gamemd {
int sub_683210()
{
  dword_B05458 = 0; /*0x683212*/
  return 0; /*0x68321e*/
}
} // namespace gamemd

// 0x683220
namespace gamemd {
int sub_683220()
{
  dword_B05488 = 0; /*0x683222*/
  dword_B0548C = 0; /*0x683227*/
  dword_B05490 = 0; /*0x68322c*/
  return 0; /*0x683231*/
}
} // namespace gamemd

// 0x683240
namespace gamemd {
int sub_683240()
{
  dword_B054B8 = 0; /*0x683245*/
  dword_B054B0 = 128; /*0x68324f*/
  dword_B054B4 = 128; /*0x683254*/
  return 128; /*0x683259*/
}
} // namespace gamemd

// 0x683260
namespace gamemd {
int sub_683260()
{
  dword_B05448 = 0; /*0x683262*/
  dword_B0544C = 0; /*0x683267*/
  dword_B05450 = 0; /*0x68326c*/
  dword_B05454 = 0; /*0x683271*/
  return 0; /*0x683276*/
}
} // namespace gamemd

// 0x683280
namespace gamemd {
int sub_683280()
{
  dword_B05478 = Timer::GetTicks(); /*0x68328f*/
  dword_B05480 = 0; /*0x683294*/
  return atexit(nullsub_226); /*0x6832a4*/
}
} // namespace gamemd

// 0x6832B0
namespace gamemd {
void nullsub_226()
{
  ; /*0x6832b0*/
}
} // namespace gamemd

// 0x6842F0
namespace gamemd {
char DisplayMode_Toggle(char a1)
{
  char result; // al

  if ( a1 ) /*0x6842f2*/
  {
    result = g_CommandLineFlags; /*0x6842f4*/
    if ( g_CreditsScreenBounds != g_CommandLineFlags || g_CreditsScreenConfig != g_CommandLineParam ) /*0x68430f*/
    {
      Debug::Log("Toggle display mode to %d x %d\n", g_CommandLineFlags, g_CommandLineParam); /*0x684318*/
      return ChangeVideoMode(g_CommandLineFlags, g_CommandLineParam); /*0x68432c*/
    }
  }
  else
  {
    result = g_CreditsScreenBounds; /*0x684331*/
    if ( g_CreditsScreenBounds != xRight ) /*0x68433e*/
    {
      result = yBottom; /*0x684346*/
      if ( g_CreditsScreenConfig != yBottom ) /*0x68434d*/
      {
        Debug::Log(g_Str_Toggle_display_mode_back_to_sh); /*0x684354*/
        return ChangeVideoMode(xRight, yBottom); /*0x684368*/
      }
    }
  }
  return result; /*0x68436d*/
}
} // namespace gamemd

// 0x689790
namespace gamemd {
char E4Recv_689790::sub_689790(const char * a2, unsigned char * a3)
{
  int v3; // edi
  const char *i; // ebp

  v3 = 0; /*0x68979d*/
  for ( i = this + 7304; strcmp(a2, i); i += 41 ) /*0x68979f*/
  {
    if ( ++v3 >= 50 ) /*0x6897dd*/
      return 0; /*0x6897dd*/
  }
  if ( v3 < 0 ) /*0x6897ec*/
    return 0; /*0x6897e6*/
  *a3 = *(&this->q0A0 * v3 + v3 + 7344); /*0x689811*/
  return 1; /*0x6897df*/
}
} // namespace gamemd

// 0x689820
namespace gamemd {
int E4Recv_689820::sub_689820(const char * a2)
{
  int v2; // ebp
  const char *i; // edi

  v2 = 0; /*0x689828*/
  for ( i = this + 7304; strcmp(a2, i); i += 41 ) /*0x68982a*/
  {
    if ( ++v2 >= 50 ) /*0x689868*/
      return -1; /*0x689871*/
  }
  return v2; /*0x68986a*/
}
} // namespace gamemd

// 0x689960
namespace gamemd {
char E4Recv_689960::sub_689960(const char * a2, char a3)
{
  unsigned int v3; // edi
  const char *i; // ebp
  char v6; // bl

  v3 = 0; /*0x689964*/
  for ( i = this + 9354; strcmp(a2, i); i += 41 ) /*0x689966*/
  {
    if ( (int)++v3 >= 100 ) /*0x6899a6*/
      return 1; /*0x6899a6*/
  }
  if ( v3 == -1 ) /*0x6899b4*/
    return 1; /*0x6899ae*/
  if ( v3 >= 0x64 ) /*0x6899b9*/
    return 0; /*0x6899f3*/
  v6 = *(&this->q0A0 * v3 + v3 + 9394); /*0x6899c1*/
  if ( v6 != a3 ) /*0x6899d5*/
  {
    *((_BYTE *)&this->q0A0 * v3 + v3 + 9394) = a3; /*0x6899d7*/
    this->u32_34AA = 1; /*0x6899d9*/
    TriggerActionQueue::ProcessAll((void *)v3); /*0x6899e2*/
  }
  return v6; /*0x6899a8*/
}
} // namespace gamemd

// 0x689A30
namespace gamemd {
char E4Recv_689A30::sub_689A30(const char * a2, unsigned char * a3)
{
  int v3; // edi
  const char *i; // ebp

  v3 = 0; /*0x689a3d*/
  for ( i = &this->q9228; strcmp(a2, i); i += 41 ) /*0x689a3f*/
  {
    if ( ++v3 >= 100 ) /*0x689a7d*/
      return 0; /*0x689a7d*/
  }
  if ( v3 < 0 ) /*0x689a8c*/
    return 0; /*0x689a86*/
  *a3 = *(&this->q0A0 * v3 + v3 + 9394); /*0x689ab1*/
  return 1; /*0x689a7f*/
}
} // namespace gamemd

// 0x689AC0
namespace gamemd {
int E4Recv_689AC0::sub_689AC0(const char * a2)
{
  int v2; // ebp
  const char *i; // edi

  v2 = 0; /*0x689ac8*/
  for ( i = &this->q9228; strcmp(a2, i); i += 41 ) /*0x689aca*/
  {
    if ( ++v2 >= 100 ) /*0x689b08*/
      return -1; /*0x689b11*/
  }
  return v2; /*0x689b0a*/
}
} // namespace gamemd

// 0x68B8A0
namespace gamemd {
long long E4Recv_68B8A0::sub_68B8A0()
{
  DWORD v1; // eax
  unsigned int v2; // ecx
  char v4; // [esp+3h] [ebp-15h] BYREF
  int v5; // [esp+4h] [ebp-14h]
  int v6; // [esp+8h] [ebp-10h]
  int v7; // [esp+Ch] [ebp-Ch] BYREF
  __int64 v8; // [esp+10h] [ebp-8h] BYREF

  v5 = (int)this; /*0x68b8a3*/
  v6 = 0; /*0x68b8b3*/
  GetVersionString(&v7, &v4, 0, 0); /*0x68b8bb*/
  if ( v7 > 5 ) /*0x68b8c5*/
    v5 = Math::RoundToInt((double)v5 * 0.8); /*0x68b8d6*/
  v1 = sub_5CAF70((LONG *)&v8); /*0x68b8de*/
  v2 = v8; /*0x68b8e3*/
  if ( v1 || (_DWORD)v8 ) /*0x68b8ed*/
  {
    v8 = v1; /*0x68b8ff*/
    v6 = Math::RoundToInt(((double)v2 * 4294967296.0 + (double)v1) * 0.000001); /*0x68b922*/
  }
  return Math::RoundToInt((double)v5 * 200.0 / (double)v6); /*0x68b939*/
}
} // namespace gamemd

// 0x68C330
namespace gamemd {
int sub_68C330()
{
  BuildingTypeClass_AnimTable = 0; /*0x68c337*/
  dword_B054D8 = 0; /*0x68c33c*/
  byte_B054DC = 1; /*0x68c341*/
  byte_B054DD = 0; /*0x68c348*/
  ColorScheme_Array = (int)&DynamicVectorClass_ColorScheme___vftable; /*0x68c34d*/
  dword_B054E4 = 10; /*0x68c357*/
  g_AnimClass_SaveState = 0; /*0x68c361*/
  return atexit(sub_68C370); /*0x68c36c*/
}
} // namespace gamemd

// 0x68C370
namespace gamemd {
void sub_68C370()
{
  ColorScheme_Array = (int)&VectorClass_ColorScheme___vftable; /*0x68c378*/
  if ( BuildingTypeClass_AnimTable && byte_B054DD ) /*0x68c38c*/
  {
    RA2_OPDEL(BuildingTypeClass_AnimTable); /*0x68c38f*/
    BuildingTypeClass_AnimTable = 0; /*0x68c397*/
  }
  byte_B054DD = 0; /*0x68c39d*/
  dword_B054D8 = 0; /*0x68c3a3*/
}
} // namespace gamemd

// 0x68CA50
namespace gamemd {
int FindBuildingAnimByName(AbstractClass * aP0, int a2)
{
  int v2; // esi
  _DWORD *v5; // eax
  bool v6; // zf

  v2 = 0; /*0x68ca57*/
  if ( g_AnimClass_SaveState <= 0 ) /*0x68ca60*/
    return 0; /*0x68ca60*/
  v5 = BuildingTypeClass_AnimTable; /*0x68ca62*/
  while ( 1 ) /*0x68ca7a*/
  {
    v6 = _strcmpi(aP0, *(const void **)(v5[v2] + 772)) == 0; /*0x68ca7a*/
    v5 = BuildingTypeClass_AnimTable; /*0x68ca7c*/
    if ( v6 && *(_DWORD *)(*((_DWORD *)BuildingTypeClass_AnimTable + v2) + 784) == a2 ) /*0x68ca8c*/
      break; /*0x68ca8c*/
    if ( ++v2 >= g_AnimClass_SaveState ) /*0x68ca97*/
      return 0; /*0x68ca97*/
  }
  if ( v2 < 0 ) /*0x68caa1*/
    return 0; /*0x68ca99*/
  else
    return *((_DWORD *)BuildingTypeClass_AnimTable + v2); /*0x68caa3*/
}
} // namespace gamemd

// 0x68CB10
namespace gamemd {
int sub_68CB10()
{
  dword_B054F8 = 0; /*0x68cb12*/
  dword_B054FC = 0; /*0x68cb17*/
  dword_B05500 = 0; /*0x68cb1c*/
  dword_B05504 = 0; /*0x68cb21*/
  return 0; /*0x68cb26*/
}
} // namespace gamemd

// 0x68CB30
namespace gamemd {
void sub_68CB30()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x68cb3c*/
  dbl_B05510 = Math::Sqrt(v0 + v0); /*0x68cb4e*/
}
} // namespace gamemd

// 0x68CB60
namespace gamemd {
void sub_68CB60()
{
  dbl_B05578 = dbl_B05510 / 60.0; /*0x68cb6c*/
}
} // namespace gamemd

// 0x68CB80
namespace gamemd {
void sub_68CB80()
{
  dbl_B05558 = 1.0 / dbl_B05578; /*0x68cb8c*/
}
} // namespace gamemd

// 0x68CBA0
namespace gamemd {
void sub_68CBA0()
{
  dbl_B05550 = 0.0174532925199433 * 45.0; /*0x68cbac*/
}
} // namespace gamemd

// 0x68CBC0
namespace gamemd {
void sub_68CBC0()
{
  dbl_B05518 = 0.0174532925199433 * 60.0; /*0x68cbcc*/
}
} // namespace gamemd

// 0x68CBE0
namespace gamemd {
void sub_68CBE0()
{
  dbl_B054E8 = 0.0174532925199433 * 90.0; /*0x68cbec*/
}
} // namespace gamemd

// 0x68CC00
namespace gamemd {
long long sub_68CC00()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B054E8 - dbl_B05518); /*0x68cc12*/
  result = Math::RoundToInt(v0 * dbl_B05510 * 0.5); /*0x68cc26*/
  dword_B05580 = result; /*0x68cc2b*/
  return result; /*0x68cc30*/
}
} // namespace gamemd

// 0x68CC40
namespace gamemd {
void sub_68CC40()
{
  dbl_B05520 = Math::ArcTan((double)dword_B05580 * 0.00390625); /*0x68cc57*/
}
} // namespace gamemd

// 0x68CC70
namespace gamemd {
void sub_68CC70()
{
  dbl_B05548 = Math::ArcTan((double)(2 * dword_B05580) / dbl_B05510); /*0x68cc92*/
}
} // namespace gamemd

// 0x68CCA0
namespace gamemd {
long long sub_68CCA0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B05580) + 0.5); /*0x68ccbb*/
  dword_B05574 = result; /*0x68ccc0*/
  return result; /*0x68ccc6*/
}
} // namespace gamemd

// 0x68CCD0
namespace gamemd {
int sub_68CCD0()
{
  word_B05508 = 0; /*0x68ccd2*/
  word_B0550A = 0; /*0x68ccd8*/
  return 0; /*0x68ccde*/
}
} // namespace gamemd

// 0x68CCE0
namespace gamemd {
int sub_68CCE0()
{
  dword_B05538 = 0; /*0x68cce2*/
  dword_B0553C = 0; /*0x68cce7*/
  dword_B05540 = 0; /*0x68ccec*/
  return 0; /*0x68ccf1*/
}
} // namespace gamemd

// 0x68CD00
namespace gamemd {
int sub_68CD00()
{
  dword_B05570 = 0; /*0x68cd05*/
  dword_B05568 = 128; /*0x68cd0f*/
  dword_B0556C = 128; /*0x68cd14*/
  return 128; /*0x68cd19*/
}
} // namespace gamemd

// 0x68F8A0
namespace gamemd {
int E4Recv_68F8A0::sub_68F8A0()
{
  int v2; // eax
  unsigned int v3; // kr04_4
  _DWORD *v4; // esi
  int v5; // ebx
  int v6; // eax
  int v7; // ecx
  int *v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int result; // eax
  int v14; // edx
  _DWORD *v15; // [esp+10h] [ebp-18h] BYREF
  char Buffer[20]; // [esp+14h] [ebp-14h] BYREF

  v2 = (*(int (__stdcall **)(char *))(*((_DWORD *)HouseClass_Player + 9) + 24))((char *)HouseClass_Player + 36); /*0x68f8b3*/
  sprintf(Buffer, "%d", v2); /*0x68f8c1*/
  v3 = strlen(Buffer) + 1; /*0x68f8d1*/
  v4 = RA2_OPNEW(0x2Cu); /*0x68f8e8*/
  if ( v4 ) /*0x68f8ef*/
  {
    v5 = this->vtable4; /*0x68f8f8*/
    v6 = this->vtable2 + 214; /*0x68f8fd*/
    v4[1] = 590 - 12 * (v3 - 1) + *(_DWORD *)this; /*0x68f902*/
    v4[2] = v6; /*0x68f908*/
    v4[3] = Timer::GetTicks(); /*0x68f910*/
    v4[5] = 0; /*0x68f915*/
    v4[10] = v5; /*0x68f91c*/
    v4[6] = Buffer; /*0x68f91f*/
    v4[7] = 0; /*0x68f922*/
    v4[8] = 0; /*0x68f925*/
    *((_BYTE *)v4 + 36) = 0; /*0x68f928*/
    *v4 = (void*)&ScorePrintClass_vftable; /*0x68f92b*/
  }
  else
  {
    v4 = 0; /*0x68f934*/
  }
  v7 = this->objectTypeFlags; /*0x68f936*/
  v8 = (int *)(&this->vtable38); /*0x68f93c*/
  if ( this->fallRate < v7 /*0x68f95e*/
    || (this->q0A4 || !v7)
    && (v9 = this->nextObject, v9 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(this->objectTypeFlags)(&this->estimatedHealth, v7 + v9, 0) )
  {
    v10 = this->fallRate; /*0x68f965*/
    v11 = this->NeedsSaveOrLink; /*0x68f968*/
    this->fallRate = v10 + 1; /*0x68f96e*/
    *(_DWORD *)(v11 + 4 * v10) = v4; /*0x68f971*/
  }
  v12 = *v8; /*0x68f974*/
  v15 = v4; /*0x68f97d*/
  for ( result = (*(int (__thiscall **)(int, _DWORD **))(v12 + 16))(&this->estimatedHealth, &v15); /*0x68f987*/
        result != -1;
        result = (*(int (__thiscall **)(int, _DWORD **))(v14 + 16))(&this->estimatedHealth, &v15) )
  {
    Screen::TransitionLoop(1); /*0x68f98d*/
    v14 = *v8; /*0x68f992*/
    v15 = v4; /*0x68f99b*/
  }
  return result; /*0x68f9a7*/
}
} // namespace gamemd

// 0x68FB10
namespace gamemd {
unsigned int * E4Recv_68FB10::sub_68FB10(unsigned int * a7, int a3, size_t BufferCount, wchar_t * Format, wchar_t * a6, int a7, int a8)
{
  const wchar_t *v8; // eax
  _DWORD *v10; // ecx
  int v11; // esi
  _DWORD *v12; // ecx
  int v13; // edi
  int v14; // eax
  wchar_t Buffer[64]; // [esp+14h] [ebp-80h] BYREF

  v8 = Format; /*0x68fb16*/
  if ( (int)Format >= (int)a6 ) /*0x68fb2b*/
    v8 = a6; /*0x68fb2d*/
  swprintf(Buffer, BufferCount, v8); /*0x68fb3d*/
  v10 = (_DWORD *)*(this + 3); /*0x68fb42*/
  v11 = a8 - v10[2]; /*0x68fb5d*/
  (*(void (__thiscall **)(_DWORD *, int, wchar_t *, int, int, int))(*v10 + 12))(v10, a3, Buffer, a7, v11, 2); /*0x68fb6e*/
  v12 = (_DWORD *)*(this + 3); /*0x68fb71*/
  v13 = v12[2]; /*0x68fb7b*/
  v14 = (*(int (__thiscall **)(_DWORD *, wchar_t *))(*v12 + 8))(v12, Buffer); /*0x68fb7e*/
  *a7 = a7; /*0x68fb8a*/
  a7[1] = v11; /*0x68fb8c*/
  a7[2] = v14; /*0x68fb8f*/
  a7[3] = v13; /*0x68fb94*/
  return a7; /*0x68fb97*/
}
} // namespace gamemd
