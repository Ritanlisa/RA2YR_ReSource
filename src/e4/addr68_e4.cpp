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

// 0x682640
namespace gamemd {
void COM_WriteString(int a1, int a2, LPCCH lpMultiByteStr)
{
{
  _UNKNOWN **v5; // ecx
  size_t v7; // eax
  WCHAR WideCharStr[128]; // [esp+34h] [ebp-100h] BYREF

  MultiByteToWideChar(0, 0, lpMultiByteStr, -1, WideCharStr, 128); /*0x68265f*/
  int v9 = 0; /*0x68266c*/
  int v3 = 0; /*0x682674*/
  _DWORD * v4 = &DataGlobal_83D658; /*0x682676*/
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
  v5 = (&DataGlobal_83D65C)[2 * v3]; /*0x6826c9*/
LABEL_5:
  int v6 = (*(int (__stdcall **)(int, _UNKNOWN **, int, _DWORD, _DWORD, int *))(*(_DWORD *)a1 + 12))(a1, v5, 18, 0, 0, &v9); /*0x68268c*/
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
} // namespace gamemd

// 0x682880
namespace gamemd {
void COM_ReadString(int * a1, int a2, LPCCH lpMultiByteStr)
{
{
  __int16 v9[4]; // [esp+38h] [ebp-110h] BYREF
  WCHAR *v10; // [esp+40h] [ebp-108h]
  WCHAR WideCharStr[128]; // [esp+48h] [ebp-100h] BYREF

  MultiByteToWideChar(0, 0, lpMultiByteStr, -1, WideCharStr, 128); /*0x68289f*/
  int v3 = *a1; /*0x6828b3*/
  int v7 = 0; /*0x6828bb*/
  if ( (*(int (__stdcall **)(int *, void *, int, int *))(v3 + 16))(a1, &unk_7F7D10, 18, &v7) >= 0 ) /*0x6828c8*/
    goto LABEL_7; /*0x6828c8*/
  if ( v7 ) /*0x6828d0*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x6828d5*/
  int v4 = *a1; /*0x6828d8*/
  v7 = 0; /*0x6828ee*/
  int v5 = (*(int (__stdcall **)(int *, void *, _DWORD, _DWORD, int, int *))(v4 + 12))(a1, &unk_7F7D10, 0, 0, 4114, &v7); /*0x6828f9*/
  if ( v5 >= 0 ) /*0x6828fd*/
  {
LABEL_7:
    v10 = WideCharStr; /*0x682928*/
  _DWORD v8[2]; // [esp+30h] [ebp-118h] BYREF
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
} // namespace gamemd

// 0x682A90
namespace gamemd {
void COM_Property_ReadBool(int a1, int a2, char a3)
{
{
  _UNKNOWN **v5; // ecx

  int v8 = 0; /*0x682a96*/
  int v3 = 0; /*0x682a9e*/
  _DWORD * v4 = &DataGlobal_83D658; /*0x682aa0*/
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
  v5 = (&DataGlobal_83D65C)[2 * v3]; /*0x682aeb*/
LABEL_5:
  int v6 = (*(int (__stdcall **)(int, _UNKNOWN **, int, _DWORD, _DWORD, int *))(*(_DWORD *)a1 + 12))(a1, v5, 18, 0, 0, &v8); /*0x682ab6*/
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
} // namespace gamemd

// 0x682B80
namespace gamemd {
void COM_PropertyBag_Read(int * a1, int a2, int a3)
{
{
  __int16 v8[4]; // [esp+38h] [ebp-10h] BYREF

  int v6 = 0; /*0x682b8c*/
  if ( (*(int (__stdcall **)(int *, void *, int, int *))(*a1 + 16))(a1, &unk_7F7D10, 18, &v6) >= 0 ) /*0x682ba4*/
    goto LABEL_7; /*0x682ba4*/
  if ( v6 ) /*0x682bac*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x682bb1*/
  int v3 = *a1; /*0x682bb4*/
  v6 = 0; /*0x682bca*/
  int v4 = (*(int (__stdcall **)(int *, void *, _DWORD, _DWORD, int, int *))(v3 + 12))(a1, &unk_7F7D10, 0, 0, 4114, &v6); /*0x682bd5*/
  if ( v4 >= 0 ) /*0x682bd9*/
  {
LABEL_7:
  _DWORD v7[2]; // [esp+30h] [ebp-18h] BYREF
    v7[1] = a2; /*0x682bfa*/
    v7[0] = 1; /*0x682c04*/
    v8[0] = 3; /*0x682c0c*/
    int v9 = a3; /*0x682c13*/
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
} // namespace gamemd

// 0x682C70
namespace gamemd {
void sub_682C70(int a1, int a2, unsigned int * a3)
{
{
  _UNKNOWN **v6; // ecx

  _DWORD * v3 = a3; /*0x682c76*/
  a3 = 0; /*0x682c7a*/
  int v4 = 0; /*0x682c82*/
  *v3 = 0; /*0x682c84*/
  v3[1] = 0; /*0x682c8a*/
  _DWORD * v5 = &DataGlobal_83D658; /*0x682c91*/
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
  v6 = (&DataGlobal_83D65C)[2 * v4]; /*0x682cd8*/
LABEL_5:
  int v7; // esi
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
} // namespace gamemd

// 0x682E10
namespace gamemd {
void COM_WriteInt(int a1, int a2, int a3)
{
{
  _UNKNOWN **v5; // ecx

  int v8 = 0; /*0x682e16*/
  int v3 = 0; /*0x682e1e*/
  _DWORD * v4 = &DataGlobal_83D658; /*0x682e20*/
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
  v5 = (&DataGlobal_83D65C)[2 * v3]; /*0x682e6b*/
LABEL_5:
  int v6 = (*(int (__stdcall **)(int, _UNKNOWN **, int, _DWORD, _DWORD, int *))(*(_DWORD *)a1 + 12))(a1, v5, 18, 0, 0, &v8); /*0x682e36*/
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
} // namespace gamemd

// 0x682F00
namespace gamemd {
void COM_SetBufferParams(int * a1, int a2, int * a3)
{
{
  __int16 v9[4]; // [esp+38h] [ebp-10h] BYREF

  int v7 = 0; /*0x682f0c*/
  if ( (*(int (__stdcall **)(int *, void *, int, int *))(*a1 + 16))(a1, &unk_7F7D10, 18, &v7) >= 0 ) /*0x682f24*/
    goto LABEL_7; /*0x682f24*/
  if ( v7 ) /*0x682f2c*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x682f31*/
  int v3 = *a1; /*0x682f34*/
  v7 = 0; /*0x682f4a*/
  int v4 = (*(int (__stdcall **)(int *, void *, _DWORD, _DWORD, int, int *))(v3 + 12))(a1, &unk_7F7D10, 0, 0, 4114, &v7); /*0x682f55*/
  if ( v4 >= 0 ) /*0x682f59*/
  {
LABEL_7:
  _DWORD v8[2]; // [esp+30h] [ebp-18h] BYREF
    v8[0] = 1; /*0x682f7a*/
    v8[1] = a2; /*0x682f82*/
    v9[0] = 64; /*0x682f8a*/
    int v6 = a3[1]; /*0x682f93*/
    int v10 = *a3; /*0x682f9a*/
    int v11 = v6; /*0x682fa0*/
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
} // namespace gamemd

// 0x683FB0
namespace gamemd {
void sub_683FB0()
{
{
  DWORD *v0; // esi
  MouseClass::GetPosition(&DataGlobal_87F7E8); /*0x683fb7*/
  if ( *((_DWORD *)g_ScenarioClass_Instance + 389) == -1 ) /*0x683fd0*/
  {
    v0 = (DWORD *)((char *)g_ScenarioClass_Instance + 1556); /*0x683fc1*/
    *v0 = Timer::GetTicks(); /*0x683fda*/
  }
  if ( *((_DWORD *)g_ScenarioClass_Instance + 389) != -1 ) /*0x683ff7*/
    Timer::GetTicks(); /*0x683ffc*/
  Debug::Log(); /*0x68400b*/
  if ( g_TacticalRender ) /*0x68401d*/
    Tooltip::Enable((void *)g_TacticalRender, DataGlobal_A8EB80); /*0x684026*/
  EndBufferMixer((int *)g_MixerState, DataGlobal_83D834); /*0x684037*/
  void *v1; // ecx
  LOBYTE(v1) = 0; /*0x68403c*/
  DataGlobal_83D834 = 0x4000; /*0x68403e*/
  AsyncIO::Read(v1); /*0x684048*/
  return sub_406F40();
}
} // namespace gamemd

// 0x684060
namespace gamemd {
void * * ScenarioClass_SetTimer(int a1)
{
{
  DWORD Ticks; // eax
  void *result; // eax
  DWORD v6; // eax
  DWORD v8; // eax
  if ( a1 ) /*0x684068*/
  {
    Ticks = Timer::GetTicks(); /*0x68406e*/
    char * v3 = (char *)g_ScenarioClass_Instance + 1568; /*0x68407c*/
    *((_DWORD *)g_ScenarioClass_Instance + 392) = Ticks; /*0x68408c*/
  int v9; // [esp+8h] [ebp-8h]
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
      _DWORD * v5 = (char *)g_ScenarioClass_Instance + 1556; /*0x6840e2*/
      if ( *((_DWORD *)g_ScenarioClass_Instance + 389) != -1 ) /*0x6840f1*/
      {
        v6 = Timer::GetTicks(); /*0x6840f6*/
        int v7 = v5[2]; /*0x6840fd*/
        v8 = v6 - *v5; /*0x684100*/
        *v5 = -1; /*0x684102*/
        v5[2] = v8 + v7; /*0x68410a*/
      }
    }
    DataGlobal_B054CC = *((_BYTE *)g_ScenarioClass_Instance + 13730); /*0x68411b*/
    if ( !DataGlobal_B054CC ) /*0x684120*/
    {
      Mouse::ReleaseCapture(&DataGlobal_87F7E8); /*0x684127*/
      if ( !(*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 40))(g_WWMouseClass_Instance) ) /*0x684134*/
        (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 12))(g_WWMouseClass_Instance); /*0x684143*/
      *((_BYTE *)g_ScenarioClass_Instance + 13730) = 1; /*0x68414c*/
      g_GameActive = 1; /*0x684159*/
      Timer::PumpMessages((HWND *)g_BinkMoviePlayer); /*0x684160*/
      DataGlobal_B07784 = 0; /*0x684165*/
    }
  }
  result = g_ScenarioClass_Instance; /*0x68416f*/
  ++*((_DWORD *)g_ScenarioClass_Instance + 395); /*0x684174*/
  return result; /*0x68417a*/
}
} // namespace gamemd

// 0x684290
namespace gamemd {
ScenarioClass * * Mouse_Update()
{
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
  DataGlobal_B07784 = 0; /*0x6842e5*/
  return result; /*0x6842ef*/
}
} // namespace gamemd

// 0x684370
namespace gamemd {
void WaitForMultiplayerLoadSync()
{
{
  int v0; // ebx
  int i; // esi
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
    int v1 = v14; /*0x684422*/
    if ( v13 != -1 ) /*0x68442b*/
    {
      int v2 = Timer::GetTicks() - v13; /*0x684436*/
      if ( v2 >= v14 ) /*0x68443c*/
        break; /*0x68443c*/
      v1 = v14 - v2; /*0x684442*/
    }
    if ( v1 <= 0 ) /*0x684446*/
      break; /*0x684446*/
    double v3 = Progress::GetAverage((int)g_UIManager); /*0x684451*/
  char v5; // c0
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
    int v6 = v16; /*0x6844b0*/
    if ( TicksTimer != -1 ) /*0x6844b6*/
    {
      int v7 = Timer::GetTicks() - TicksTimer; /*0x6844c1*/
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
      WinModemClass *v10 = *(char **)(Game_PlayerInfoArray + 4 * i); /*0x684562*/
      ToWideStringChar(v10); /*0x684567*/
      ToWideStringChar(v10); /*0x684570*/
      Debug::Log(); /*0x68457c*/
      AbstractClass *v11 = *(_DWORD *)(*(_DWORD *)(Game_PlayerInfoArray + 4 * i) + 111); /*0x684591*/
      HandleNetworkPlayerDisconnect(v11, 1); /*0x684596*/
      if ( SessionClass::IsValidHouse((int)g_GameMode_Current, *(#375 **)&HouseClass_Array->__pad_0[4 * v11]) ) /*0x6845aa*/
      {
        DataGlobal_A8E2AC = -1; /*0x6845bf*/
        memset(DataGlobal_A8E258, 0, 0x28u); /*0x6845c9*/
        DataGlobal_A8E280 = 0; /*0x6845cb*/
      }
      --i; /*0x6845cd*/
    }
    ++v0; /*0x6845d3*/
  }
  return 0; /*0x68452e*/
}
} // namespace gamemd

// 0x684C30
namespace gamemd {
void PostLoadInitScenario()
{
{
  int i; // esi
  int j; // ebx
  int Owner; // eax
  int m; // eax
  int n; // esi
  void **v30; // edi
  int k; // [esp+20h] [ebp-10h]
  int v34; // [esp+24h] [ebp-Ch] BYREF
  int v35; // [esp+28h] [ebp-8h]
  int GroundHeight; // [esp+2Ch] [ebp-4h]

  ++g_IKnowWhatImDoing; /*0x684c3f*/
  for ( i = 0; i < g_BuildingProductionState; ++i ) /*0x684c4c*/
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)g_BuildingClass_InstanceCount + i) + 1248))(*((_DWORD *)g_BuildingClass_InstanceCount + i)); /*0x684c58*/
  MapClass::MarkForRedraw(&DataGlobal_87F7E8, 2); /*0x684c6f*/
  if ( !ArmageddonMode ) /*0x684c7b*/
  {
    TacticalClass::BuildCommandBar(&DataGlobal_87F7E8, a1, 1); /*0x684c88*/
    if ( !g_GameMode_Current[0] ) /*0x684c94*/
    {
      if ( DataGlobal_8A38E0 ) /*0x684ca7*/
        int v2 = *((_DWORD *)g_ScenarioClass_Instance + 132); /*0x684ca9*/
      else
        v2 = *((_DWORD *)g_ScenarioClass_Instance + 131); /*0x684cb1*/
      int v3 = *(_DWORD *)((char *)g_ScenarioClass_Instance + 4 * v2 + 1586); /*0x684cb7*/
      *(_DWORD *)((char *)g_ScenarioClass_Instance + 13466) = v3; /*0x684cbe*/
      *(_DWORD *)((char *)g_ScenarioClass_Instance + 13462) = *(_DWORD *)((char *)g_ScenarioClass_Instance + 13466); /*0x684cd4*/
      *(_DWORD *)((char *)g_ScenarioClass_Instance + 13458) = *(_DWORD *)((char *)g_ScenarioClass_Instance + 13462); /*0x684ce9*/
      *(_DWORD *)((char *)g_ScenarioClass_Instance + 13454) = *(_DWORD *)((char *)g_ScenarioClass_Instance + 13458); /*0x684d03*/
      v34 = ((__int16)v3 << 8) + 128; /*0x684d09*/
      v35 = (SHIWORD(v3) << 8) + 128; /*0x684d21*/
      GroundHeight = 0; /*0x684d2b*/
      GroundHeight = Cell::GetGroundHeight(&v34); /*0x684d3e*/
      TacticalClass::SetPositionThunk((int)&v34); /*0x684d42*/
    }
  }
  AbstractTypeClass *v4 = g_MultiplayerCleanup; /*0x684d47*/
  for ( j = 0; j < g_MultiplayerCleanup; ++j ) /*0x684d50*/
  {
    TagTypeClass *v6 = (_DWORD *)*((_DWORD *)DataGlobal_B0E784 + j); /*0x684d5c*/
    if ( (Debug::AccumFlags(v6) & 4) != 0 ) /*0x684d68*/
    {
      AbstractTypeClass *v7 = TeamClass::FindOrCreate(v6); /*0x684d77*/
      if ( dword_8B41B8 < unk_8B41B0 /*0x684da9*/
        || (unk_8B41B5 || !unk_8B41B0)
        && unk_8B41BC > 0
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(unk_8B41A8 + 8))(
             &unk_8B41A8,
             unk_8B41B0 + unk_8B41BC,
             0) )
      {
        int v8 = dword_8B41B8++; /*0x684db6*/
        *((_DWORD *)unk_8B41AC + v8) = v7; /*0x684dc5*/
      }
    }
    if ( (Debug::AccumFlags(v6) & 0x10) != 0 ) /*0x684dd1*/
    {
      int v9 = TeamClass::FindOrCreate(v6); /*0x684de0*/
      if ( g_ScenarioUpdateState < DataGlobal_8B40D0 /*0x684e13*/
        || (DataGlobal_8B40D5 || !DataGlobal_8B40D0)
        && DataGlobal_8B40DC > 0
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(DataGlobal_8B40C8 + 8))(
             &DataGlobal_8B40C8,
             DataGlobal_8B40D0 + DataGlobal_8B40DC,
             0) )
      {
        int v10 = g_ScenarioUpdateState++; /*0x684e20*/
        *((_DWORD *)DataGlobal_8B40CC + v10) = v9; /*0x684e2f*/
      }
    }
    if ( (Debug::AccumFlags(v6) & 8) != 0 ) /*0x684e3b*/
    {
      int v11 = TeamClass::FindOrCreate(v6); /*0x684e44*/
      Owner = HouseClass::FindOwner(*(void **)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v11 + 36) + 160) + 164) + 184)); /*0x684e5b*/
      if ( Owner ) /*0x684e62*/
      {
        int v13 = *(_DWORD *)(Owner + 64); /*0x684e64*/
        _DWORD * v14 = (_DWORD *)(Owner + 56); /*0x684e67*/
        if ( *(_DWORD *)(Owner + 72) < v13 /*0x684e8c*/
          || (*(_BYTE *)(Owner + 69) || !v13)
  int v15; // eax
          && (v15 = *(_DWORD *)(Owner + 76), v15 > 0)
          && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v14 + 8))(v14, v13 + v15, 0) )
        {
          int v16 = v14[4]; /*0x684e93*/
          int v17 = v14[1]; /*0x684e96*/
          v14[4] = v16 + 1; /*0x684e9c*/
          *(_DWORD *)(v17 + 4 * v16) = v11; /*0x684e9f*/
        }
      }
    }
    v4 = g_MultiplayerCleanup; /*0x684ea2*/
  }
  int v18 = 0; /*0x684eb6*/
  --g_IKnowWhatImDoing; /*0x684ebb*/
  if ( v4 > 0 ) /*0x684ec1*/
  {
    do /*0x684efb*/
    {
      TagTypeClass *v19 = *((_DWORD *)DataGlobal_B0E784 + v18); /*0x684ec8*/
      if ( (unsigned __int8)TagClass::HasValidHouse(v19) ) /*0x684ecd*/
      {
        int v20 = HouseClass::FindOwner(*(void **)(*(_DWORD *)(v19->q0A0 + 164) + 180)); /*0x684ee8*/
        ++*(_DWORD *)(v20 + 636); /*0x684eed*/
      }
      ++v18; /*0x684ef8*/
    }
    while ( v18 < g_MultiplayerCleanup ); /*0x684efb*/
  }
  if ( *((_BYTE *)g_ScenarioClass_Instance + 13490) ) /*0x684f02*/
  {
    AbstractClass *v21 = 0; /*0x684f12*/
    for ( k = 0; v21 < HouseClass_Count; k = v21 ) /*0x684f1a*/
    {
      int v22 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * v21]; /*0x684f23*/
      if ( v22 ) /*0x684f28*/
      {
        int v23 = (*(int (__stdcall **)(int))(*(_DWORD *)(v22 + 36) + 24))(v22 + 36); /*0x684f34*/
        int v24 = *(_DWORD *)BuildingClass_InstanceArray->__pad_0; /*0x684f3b*/
        if ( v23 > *(_DWORD *)(*(_DWORD *)BuildingClass_InstanceArray->__pad_0 + 184) ) /*0x684f43*/
        {
  int v25; // eax
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
  LayerClass::CellIteratorReset(&DataGlobal_87F7E8); /*0x684f98*/
  for ( m = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); m; m = LayerClass::CellIteratorNext(&DataGlobal_87F7E8) ) /*0x684fa9*/
    House::AnnounceUpgrade(m, -1); /*0x684faf*/
  MapClass::ProcessRegion(&DataGlobal_87F7E8); /*0x684fc7*/
  Terrain::ConnectivityGraph(&DataGlobal_87F7E8); /*0x684fd1*/
  MapClass::BuildSubzones(&DataGlobal_87F7E8); /*0x684fdb*/
  MarkCliffEdgePassability(&DataGlobal_87F7E8); /*0x684fe5*/
  if ( !DataGlobal_A8ED78 ) /*0x684ff0*/
  {
    AbstractClass *v27 = __2_YAPAXI_Z(0x100u); /*0x684ffc*/
    if ( v27 ) /*0x685003*/
    {
      v34 = 2688; /*0x68500f*/
      v35 = 2688; /*0x685013*/
      GroundHeight = 0; /*0x685017*/
      int v28 = WarheadTypeClass::applyDamage(DataGlobal_83DA90); /*0x68501b*/
      DataGlobal_A8ED78 = ParticleSystemClass::Constructor( /*0x685040*/
                           (int)v27,
                           *((_DWORD *)DataGlobal_A83D6C + v28),
                           &v34,
                           0,
                           0,
                           &stru_B05488,
                           0);
    }
    else
    {
      DataGlobal_A8ED78 = 0; /*0x685047*/
    }
  }
  if ( g_RulesClass_Instance[1].?[11] ) /*0x685052*/
  {
    LayerClass::CellIteratorReset(&DataGlobal_87F7E8); /*0x685063*/
    for ( n = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); n; n = LayerClass::CellIteratorNext(&DataGlobal_87F7E8) ) /*0x685076*/
    {
      if ( Building::GetNthOfType(n) ) /*0x68507a*/
      {
        if ( !Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, g_RulesClass_Instance[1].?[10] - 1) ) /*0x68509e*/
        {
          v30 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x6850b1*/
          if ( v30 ) /*0x6850b8*/
          {
            int * v31 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)n + 72))(n, &v34); /*0x6850cd*/
            AnimClass::ctor(v30, (void *)g_RulesClass_Instance[1].?[11], v31, 0, 1, (void *)0x600, 0, 0); /*0x6850e0*/
          }
        }
      }
    }
  }
  RadarClass::SetGlobal((void *)g_RulesClass_Instance->DetailMinFrameRateNormal); /*0x6850fd*/
  return Map_Init(g_RulesClass_Instance->DetailBufferZoneWidth); /*0x685110*/
}
} // namespace gamemd

// 0x6851F0
namespace gamemd {
void ScenarioClass_Reset()
{
{
  int i; // esi
  int j; // esi
  IPersistStream *v10; // eax
  int result; // eax

  *((_DWORD *)g_ScenarioClass_Instance + 133) = 1000000; /*0x6851fc*/
  *((_BYTE *)g_ScenarioClass_Instance + 536) = 1; /*0x68520c*/
  DataGlobal_83D834 = 0x4000; /*0x685219*/
  EndBufferMixer((int *)g_MixerState, 0x4000); /*0x68521f*/
  AudioQueue::DrainAll(); /*0x685224*/
  HouseClass_Player = 0; /*0x685231*/
  ScenarioClass::InitTimer((int)g_ScenarioClass_Instance); /*0x685237*/
  LightningStorm::End(); /*0x68523c*/
  for ( i = g_AbstractTypePool - 1; i >= 0; --i ) /*0x68524c*/
  {
    if ( (*(int (__stdcall **)(int))(*(_DWORD *)(*((_DWORD *)DataGlobal_A8E96C + i) + 4) + 12))(*((_DWORD *)DataGlobal_A8E96C /*0x68526c*/
                                                                                               + i) + 4) == 18
      && i < g_AbstractTypePool )
    {
      int v1 = i; /*0x68526f*/
      if ( i < --g_AbstractTypePool ) /*0x685279*/
      {
        do /*0x685291*/
        {
          ++v1; /*0x685281*/
          *((_DWORD *)DataGlobal_A8E96C + v1 - 1) = *((_DWORD *)DataGlobal_A8E96C + v1); /*0x685285*/
        }
        while ( v1 < g_AbstractTypePool ); /*0x685291*/
      }
    }
  }
  Game::DestroyAllObjects(); /*0x685297*/
  int v2 = 0; /*0x6852a1*/
  if ( g_TechnoClassCount > 0 ) /*0x6852a5*/
  {
    int v3 = DataGlobal_A8E970; /*0x6852a7*/
    do /*0x6852b2*/
    {
      int v4 = *((_DWORD *)g_FrameCounter + v2); /*0x6852b2*/
      if ( g_AbstractTypePool < v3 ) /*0x6852bd*/
        goto LABEL_14; /*0x6852bd*/
      if ( !DataGlobal_A8E975 && v3 || DataGlobal_A8E97C <= 0 ) /*0x6852d3*/
        goto LABEL_16; /*0x6852d3*/
      if ( (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(DataGlobal_A8E968 + 8))( /*0x6852e4*/
             &DataGlobal_A8E968,
             v3 + DataGlobal_A8E97C,
             0) )
      {
LABEL_14:
        int v5 = g_AbstractTypePool++; /*0x6852f1*/
        *((_DWORD *)DataGlobal_A8E96C + v5) = v4; /*0x685300*/
      }
      v3 = DataGlobal_A8E970; /*0x685303*/
LABEL_16:
      ++v2; /*0x685308*/
    }
    while ( v2 < g_TechnoClassCount ); /*0x6852b2*/
  }
  MapClass::FreeAllCells((int *)&DataGlobal_87F7E8); /*0x685313*/
  DataGlobal_87F848 = 0; /*0x685322*/
  if ( DataGlobal_87F83C && DataGlobal_87F845 ) /*0x685332*/
  {
    __3_YAXPAX_Z(DataGlobal_87F83C); /*0x685335*/
    DataGlobal_87F83C = 0; /*0x68533d*/
  }
  DataGlobal_87F845 = 0; /*0x685343*/
  DataGlobal_87F840 = 0; /*0x685349*/
  Map_Reset_6E5570(); /*0x68534f*/
  char * v6 = 0; /*0x685354*/
  for ( j = 0; j < 2050; j += 41 ) /*0x685356*/
  {
    _BYTE * v8 = g_ScenarioClass_Instance; /*0x685358*/
    if ( (unsigned int)j < 0x802 && *((_BYTE *)g_ScenarioClass_Instance + j + 7344) ) /*0x685365*/
    {
      *((_BYTE *)g_ScenarioClass_Instance + j + 7344) = 0; /*0x68536e*/
      v8[13482] = 1; /*0x685377*/
      HouseClass::UpdateAllTypes(v6); /*0x68537e*/
    }
    ++v6; /*0x685386*/
  }
  if ( g_TacticalClass_Instance ) /*0x685398*/
    ((void (__thiscall *)(LPPERSISTSTREAM, int))g_TacticalClass_Instance->__tail_0[1].QueryInterface)(g_TacticalClass_Instance, 1); /*0x68539e*/
  void * v9 = __2_YAPAXI_Z(0xE18u); /*0x6853a6*/
  if ( v9 ) /*0x6853b0*/
    v10 = (IPersistStream *)TacticalMap::Construct((int)v9); /*0x6853b4*/
  IPersistStream *v10 = 0; /*0x6853bb*/
  g_TacticalClass_Instance = v10; /*0x6853bf*/
  Map_Setup_6DA980(v10); /*0x6853c4*/
  byte_829AE4 = 0; /*0x6853ce*/
  while ( DataGlobal_A8E370 ) /*0x6853d6*/
  {
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)DataGlobal_A8E364 + 44))(*(_DWORD *)DataGlobal_A8E364) == 8 ) /*0x6853e7*/
    {
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)DataGlobal_A8E364 + 8))(*(_DWORD *)DataGlobal_A8E364); /*0x6853f3*/
    }
    else if ( *(_DWORD *)DataGlobal_A8E364 ) /*0x6853fe*/
    {
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)DataGlobal_A8E364 + 32))(*(_DWORD *)DataGlobal_A8E364, 1); /*0x685408*/
    }
  }
  byte_829AE4 = 1; /*0x685418*/
  while ( g_MultiplayerCleanup ) /*0x685421*/
  {
    if ( *(_DWORD *)DataGlobal_B0E784 ) /*0x685429*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)DataGlobal_B0E784 + 32))(*(_DWORD *)DataGlobal_B0E784, 1); /*0x685433*/
  }
  dword_8B41B8 = 0; /*0x685443*/
  if ( unk_8B41AC && unk_8B41B5 ) /*0x685453*/
  {
    __3_YAXPAX_Z(unk_8B41AC); /*0x685456*/
    unk_8B41AC = 0; /*0x68545e*/
  }
  unk_8B41B5 = 0; /*0x685469*/
  unk_8B41B0 = 0; /*0x685471*/
  g_ScenarioUpdateState = 0; /*0x685477*/
  if ( DataGlobal_8B40CC && DataGlobal_8B40D5 ) /*0x685485*/
  {
    __3_YAXPAX_Z(DataGlobal_8B40CC); /*0x685488*/
    DataGlobal_8B40CC = 0; /*0x685490*/
  }
  DataGlobal_8B40D5 = 0; /*0x68549b*/
  DataGlobal_8B40D0 = 0; /*0x6854a1*/
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
  Stream::FlushAndReset(&DataGlobal_87F5D8); /*0x685524*/
  LoadGame::CleanupArray(&g_MissionQueueFrame); /*0x68552e*/
  LoadGame::ClearAllSlots(g_CellClassManager); /*0x685538*/
  PlanningNodeClass::CleanupAll(); /*0x68553d*/
  DataGlobal_87F8D4 = 0; /*0x68554f*/
  DataGlobal_87F8D8 = 0; /*0x685554*/
  g_Cell_PositionLUT = 0; /*0x68555a*/
  g_CellPositionOffset = 0; /*0x685560*/
  Debug::Log(); /*0x685566*/
  MouseClass::HandleClick(&DataGlobal_87F7E8); /*0x685573*/
  Debug::Log(); /*0x68557d*/
  (*(void (__thiscall **)(int *))(g_GameConfigManager + 12))(&g_GameConfigManager); /*0x685590*/
  Debug::Log(); /*0x685598*/
  g_SelectionManager = 0; /*0x6855a7*/
  if ( g_ObjectClass_CurrentCount && DataGlobal_A8ECC5 ) /*0x6855b5*/
  {
    __3_YAXPAX_Z(g_ObjectClass_CurrentCount); /*0x6855b8*/
    g_ObjectClass_CurrentCount = 0; /*0x6855c0*/
  }
  DataGlobal_A8ECC5 = 0; /*0x6855cb*/
  DataGlobal_A8ECC0 = 0; /*0x6855d1*/
  Debug::Log(); /*0x6855d7*/
  _DWORD * v11 = (char *)g_ScenarioClass_Instance + 1586; /*0x6855e4*/
  int v12 = 702; /*0x6855e9*/
  do /*0x6855fa*/
  {
    *v11++ = dword_B05458; /*0x6855f4*/
    --v12; /*0x6855f9*/
  }
  while ( v12 ); /*0x6855fa*/
  Debug::Log(); /*0x685601*/
  Credits::Screen(); /*0x685609*/
  if ( DataGlobal_A8ED78 ) /*0x685616*/
  {
    ScenarioClass::DestroyAndClearVector(); /*0x685618*/
    if ( DataGlobal_A8ED78 ) /*0x685625*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)DataGlobal_A8ED78 + 32))(DataGlobal_A8ED78, 1); /*0x68562b*/
    DataGlobal_A8ED78 = 0; /*0x68562e*/
  }
  *((_BYTE *)g_ScenarioClass_Instance + 536) = 0; /*0x68563a*/
  Map_Reset_734210(); /*0x685640*/
  Selection::ClearGlobals(0); /*0x685647*/
  result = Map_Reset_660C50(); /*0x68564c*/
  *((_DWORD *)g_ScenarioClass_Instance + 133) = 1000000; /*0x685659*/
  return result; /*0x685657*/
}
} // namespace gamemd

// 0x687CE0
namespace gamemd {
void SaveScenarioToINI()
{
{
  CCFileClass *v4; // eax
  INIClass a1; // [esp+14h] [ebp-E8h] BYREF
  MultiplayerGameMode aP1[3]; // [esp+6Ch] [ebp-90h] BYREF
  CCINIClass *v15; // [esp+D0h] [ebp-2Ch]
  int var24[9]; // [esp+D8h] [ebp-24h] BYREF

  a1.headNode[0] = 0; /*0x687cf4*/
  a1.headNode[1] = 0; /*0x687cf8*/
  GenericList::Constructor(&a1.headNode[2]); /*0x687cfc*/
  a1.headNode[2] = (int)&vt_List_INIClass_INISection; /*0x687d05*/
  Node::Init(&a1[40]); /*0x687d0d*/
  a1.INIClass_field_3C = 0; /*0x687d17*/
  char v11 = 0; /*0x687d1d*/
  *(_DWORD *)a1[0] = &CCINIClass_Vtable; /*0x687d21*/
  if ( g_NetworkPlayerBuffer[5935] ) /*0x687d29*/
  {
    v4 = CCFileClass::Construct(aP1, Source->__pad_0); /*0x687d34*/
    char v5 = (*(int (__thiscall **)(CCFileClass *, _DWORD))(*(_DWORD *)v4->__pad_0 + 20))(v4, 0); /*0x687d3e*/
    *(_DWORD *)aP1[0].__pad_0 = &vt_CCFileClass; /*0x687d48*/
    char v7 = v5; /*0x687d50*/
    v15 = 0; /*0x687d54*/
  _BYTE v13[12]; // [esp+C4h] [ebp-38h] BYREF
    Vector::Clear((int)v13); /*0x687d5b*/
    *(_DWORD *)aP1[0].__pad_0 = &off_7E1668; /*0x687d64*/
    BufferIOFileClass::Dtor(aP1); /*0x687d6c*/
    if ( v7 ) /*0x687d75*/
    {
      CCFileClass::Construct(aP1, Source->__pad_0); /*0x687d7c*/
      CCINIClass::Load(&a1, aP1, 1, 0); /*0x687d8d*/
      *(_DWORD *)aP1[0].__pad_0 = &vt_CCFileClass; /*0x687d99*/
      v15 = 0; /*0x687da1*/
      Vector::Clear((int)v13); /*0x687da8*/
      *(_DWORD *)aP1[0].__pad_0 = &off_7E1668; /*0x687db1*/
      BufferIOFileClass::Dtor(aP1); /*0x687db9*/
    }
  }
  ScenarioClass::SaveToINI((int)g_ScenarioClass_Instance, a1[0], a2); /*0x687dce*/
  if ( (_BYTE)a2 ) /*0x687dd7*/
  {
    if ( g_Map_TiberiumConfig && g_Map_TiberiumConfig->field_0 ) /*0x687de3*/
    {
      MiniMap::SavePreviewToINI((char **)g_Map_TiberiumConfig, a1[0]); /*0x687dec*/
    }
    else
    {
  char *v9; // [esp+10h] [ebp-ECh] BYREF
      unknown_libname_27(&v9); /*0x687df7*/
      MiniMap::Render(&v9); /*0x687e00*/
      MiniMap::SavePreviewToINI(&v9, a1[0]); /*0x687e0e*/
      ComPtr::Dtor(&v9); /*0x687e17*/
    }
  }
  else
  {
    CCINIClass::WriteHouses(&a1); /*0x687e22*/
  }
  MapClass::SaveCellTagsToINI(&DataGlobal_87F7E8, a1[0]); /*0x687e31*/
  ObjectTypeClass::ReadDestroyAnim(a1[0]); /*0x687e3a*/
  ReadFootINI(a1[0]); /*0x687e43*/
  SaveInfantryToINI((int)&a1, a3, (int)Source); /*0x687e4c*/
  SaveAircraftToINI(a1[0]); /*0x687e55*/
  sub_44FE60(&a1); /*0x687e5e*/
  OverlayClass::WriteINI(a1[0]); /*0x687e67*/
  UnitTypeClass::ReadINIEntry(a1[0]); /*0x687e70*/
  InfantryClass::SetMission(a1[0]); /*0x687e79*/
  if ( !(_BYTE)a2 || g_NetworkPlayerBuffer[5935] ) /*0x687e8a*/
  {
    nullsub_34(&a1, 0); /*0x687e92*/
    ScriptTypeClass::ReadINI(a1[0], 0); /*0x687e9d*/
    TeamTypeClass::ReadScriptData(a1[0], 0); /*0x687ea8*/
    CCINIClass::ReadInfantryTypeList(a1[0], 0); /*0x687eb3*/
  }
  ReadAudioEventINI(a1[0]); /*0x687ebc*/
  SaveTriggerTagsToINI(a1[0]); /*0x687ec5*/
  RawFileClass::Construct(var24, Source); /*0x687ed2*/
  INIClass::WriteDigest(&a1, (CCINIClass *)var24, 1); /*0x687ee5*/
  RawFileClass::Dtor(var24); /*0x687ef1*/
  return HashTable::DestroyHashTableINIClass((void **)&a1); /*0x687eff*/
}
} // namespace gamemd

// 0x687F10
namespace gamemd {
AbstractClass * * SessionClass_AssignHouses()
{
{
  LPARAM v10; // eax
  AbstractClass *v16; // edx
  wchar_t *String; // eax
  int v22; // esi
  void *v23; // esi
  int v25; // esi
  int i; // [esp+14h] [ebp-40h]
  LPARAM v31; // [esp+18h] [ebp-3Ch]
  _DWORD v32[2]; // [esp+1Ch] [ebp-38h]
  char Destination[20]; // [esp+24h] [ebp-30h] BYREF
  char v35[20]; // [esp+3Ch] [ebp-18h] BYREF
  char v36; // [esp+50h] [ebp-4h]
  int v0 = Game_PlayerCount; /*0x687f15*/
  int v1 = 0; /*0x687f1b*/
  for ( i = Game_PlayerCount; v1 < v0; ++v1 ) /*0x687f23*/
  {
    int v2 = *(_DWORD *)(Game_PlayerInfoArray + 4 * v1); /*0x687f2a*/
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
      int v3 = -1; /*0x687f63*/
      int v27 = -1; /*0x687f66*/
      int v4 = 0; /*0x687f6e*/
      int v5 = Game_PlayerInfoArray; /*0x687f70*/
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
      int v6 = *(_DWORD *)(Game_PlayerInfoArray + 4 * v27); /*0x687fa0*/
      *((_BYTE *)v32 + v27) = 1; /*0x687fa3*/
      void * v7 = __2_YAPAXI_Z(0x160B8u); /*0x687fa8*/
      if ( v7 ) /*0x687fb2*/
        int v8 = HouseClass::Construct((int)v7, *((_DWORD *)g_SuperWeaponTypeCount + *(_DWORD *)(v6 + 75))); /*0x687fc8*/
      else
        v8 = 0; /*0x687fcc*/
      if ( g_GameMode_Current[0] == 4 ) /*0x687fd5*/
      {
  char v34; // [esp+38h] [ebp-1Ch]
  void *v28; // [esp+Ch] [ebp-48h] BYREF
        WideString::Assign((wchar_t **)&v28, (wchar_t *)v6); /*0x687fdc*/
  void *v29; // [esp+10h] [ebp-44h] BYREF
        ToWideStringCharAlt((char **)&v29, (const wchar_t **)&v28); /*0x687fe9*/
        DeleteAndZero::Alt(&v28); /*0x687ff2*/
        char * v9 = String::GetOrEmpty((char **)&v29); /*0x687ffb*/
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
        if ( DataGlobal_83DC8C ) /*0x688051*/
        {
          strncpy(v35, DataGlobal_83DC8C, 0x14u); /*0x688065*/
          v36 = 0; /*0x68806d*/
        }
        else
        {
          v35[0] = (unsigned __int8)DataGlobal_83DC8C; /*0x688053*/
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
        HouseClass_Player = (#375 *)v8; /*0x688109*/
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
  int * v11 = g_CampaignPlayerArray; /*0x688158*/
  do /*0x6882cb*/
  {
    if ( v10 < v31 ) /*0x688161*/
    {
      int v12 = *v11; /*0x688167*/
      if ( *v11 != -1 && v12 != -3 ) /*0x688175*/
      {
        AbstractClass *v13 = v11[8]; /*0x68817b*/
        i = v10 + 1; /*0x688184*/
        void * v14 = __2_YAPAXI_Z(0x160B8u); /*0x688188*/
        if ( v14 ) /*0x688192*/
          int v15 = HouseClass::Construct((int)v14, *((_DWORD *)g_SuperWeaponTypeCount + v12)); /*0x6881a5*/
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
        int v17 = v11[24]; /*0x6881f5*/
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
        int v19 = *(v11 - 8); /*0x688299*/
        if ( Game_PlayerCount > 1 && HIBYTE(g_RulesClass_Instance[1].?[1]) && v19 > 0 ) /*0x6882b3*/
          --v19; /*0x6882b5*/
        HouseClass::SetCombatPower(v15, v19); /*0x6882b9*/
        v10 = i; /*0x6882be*/
      }
    }
    ++v11; /*0x6882c2*/
  }
  while ( (int)v11 < (int)g_CampaignConfig ); /*0x6882cb*/
  void * v20 = __2_YAPAXI_Z(0x160B8u); /*0x6882de*/
  if ( v20 ) /*0x6882e4*/
  {
    int v21 = SuperWeaponTypeClass::FindByName(g_INI_Key_Neutral); /*0x6882eb*/
    v22 = HouseClass::Construct((int)v20, *((_DWORD *)g_SuperWeaponTypeCount + v21)); /*0x688303*/
  }
  else
  {
    v22 = 0; /*0x688307*/
  }
  *(_DWORD *)(v22 + 90196) = Network_Assign(g_INI_Key_LightGrey); /*0x68831a*/
  HouseClass::GetColor((char *)v22); /*0x688320*/
  v23 = __2_YAPAXI_Z(0x160B8u); /*0x68832f*/
  if ( v23 ) /*0x688336*/
  {
    int v24 = SuperWeaponTypeClass::FindByName(g_INI_Key_Special); /*0x68833d*/
    v25 = HouseClass::Construct((int)v23, *((_DWORD *)g_SuperWeaponTypeCount + v24)); /*0x688356*/
  }
  else
  {
    v25 = 0; /*0x68835a*/
  }
  *(_DWORD *)(v25 + 90196) = Network_Assign(g_INI_Key_LightGrey); /*0x68836d*/
  return HouseClass::GetColor((char *)v25); /*0x688378*/
}
} // namespace gamemd

// 0x6886B0
namespace gamemd {
void GenerateScenarioUnits()
{
// (no pseudocode — ASM-only function)
} // namespace gamemd

// 0x688ED0
namespace gamemd {
void FindInfantryDeployPosition(int * a1, RadarClass * a2, int a3)
{
{
  RadarClass *v3; // esi
  int ClosestObjectCell; // eax
  IUnknown *GroundHeight; // eax
  unsigned __int16 v18; // bx
  IUnknown *v27; // eax
  IUnknown *v28; // [esp+10h] [ebp-5Ch] BYREF
  ScenarioClass *v30; // [esp+18h] [ebp-54h]
  IUnknown *v31; // [esp+1Ch] [ebp-50h]
  RadarClass *v32; // [esp+20h] [ebp-4Ch]
  IUnknown *v33; // [esp+24h] [ebp-48h]
  RadarClass *v34; // [esp+28h] [ebp-44h]
  IUnknown *v38; // [esp+38h] [ebp-34h]
  int v39; // [esp+3Ch] [ebp-30h] BYREF
  IUnknown *v41; // [esp+44h] [ebp-28h]
  int v42; // [esp+48h] [ebp-24h] BYREF
  int v43; // [esp+4Ch] [ebp-20h]
  v3 = a2; /*0x688ed7*/
  v34 = a2; /*0x688ee3*/
  int * v35 = a1; /*0x688ee7*/
  if ( LayerClass::IsWithinUsableArea(&DataGlobal_87F7E8, (IUnknown *)a2, (TechnoClass *)1) ) /*0x688eeb*/
  {
    v39 = 0; /*0x688f07*/
    int v40 = 0; /*0x688f0b*/
    _DWORD * v5 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)v3); /*0x688f0f*/
    ClosestObjectCell = Object::FindClosestObjectCell(v5, (IUnknown *)&v39, 0, 0); /*0x688f16*/
    if ( !ClosestObjectCell /*0x688f39*/
      || (*(int (__thiscall **)(int))(*(_DWORD *)ClosestObjectCell + 44))(ClosestObjectCell) == 15
      && (*(int (__thiscall **)(int *))(*a1 + 44))(a1) == 15 )
    {
      int v7 = SHIWORD(v3->field_0) << 8; /*0x688f4f*/
      v42 = (SLOWORD(v3->field_0) << 8) + 128; /*0x688f52*/
      v43 = v7 + 128; /*0x688f62*/
      int v44 = 0; /*0x688f66*/
      GroundHeight = (IUnknown *)Cell::GetGroundHeight(&v42); /*0x688f6a*/
      int v9 = SHIWORD(v3->field_0); /*0x688f72*/
      int v10 = (SLOWORD(v3->field_0) << 8) + 128; /*0x688f79*/
      v41 = GroundHeight; /*0x688f7f*/
      AbstractClass *v11 = *a1; /*0x688f83*/
      v39 = v10; /*0x688f85*/
      v40 = (v9 << 8) + 128; /*0x688f9a*/
      if ( v11->COMStub_54(a1, &v39, 0) ) /*0x688f9e*/
        return 1; /*0x688fb4*/
    }
  }
  if ( a3 < 32 ) /*0x688fc4*/
  {
LABEL_8:
    ScenarioClass *v29 = Random::Range(&g_ScenarioClass_Instance->random[1], 0, (IUnknown *)7); /*0x688fce*/
    v30 = 0; /*0x688fe6*/
    int v37 = 0; /*0x688fea*/
    while ( 1 ) /*0x689032*/
    {
  int *v24; // edi
  int v17; // ebp
      int v13 = SLOWORD(v3->field_0); /*0x689006*/
      int v14 = SHIWORD(v3->field_0); /*0x689009*/
      int v15 = DataGlobal_87F8E4.field_28; /*0x68900d*/
      int v36 = 0; /*0x689013*/
      int v16 = *(_DWORD *)DataGlobal_87F8E4[44]; /*0x689017*/
      v32 = (RadarClass *)(*(_DWORD *)DataGlobal_87F8E4[44] + *(_DWORD *)&DataGlobal_87F8E4[52] - 1); /*0x689025*/
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
      if ( v13 > DataGlobal_87F8E4.field_28 + *(_DWORD *)&DataGlobal_87F8E4.field_2D[3] - 1 ) /*0x689087*/
        v13 = DataGlobal_87F8E4.field_28 + *(_DWORD *)&DataGlobal_87F8E4.field_2D[3] - 1; /*0x689089*/
      if ( v13 < DataGlobal_87F8E4.field_28 ) /*0x68908d*/
        LOWORD(v13) = DataGlobal_87F8E4.field_28; /*0x68908f*/
      if ( v14 > (int)v32 ) /*0x689097*/
        v14 = (int)v32; /*0x689099*/
      if ( v14 < *(int *)DataGlobal_87F8E4[44] ) /*0x68909d*/
        LOWORD(v14) = *(_WORD *)DataGlobal_87F8E4[44]; /*0x68909f*/
      LOWORD(v31) = v13; /*0x6890a6*/
      HIWORD(v31) = v14; /*0x6890ab*/
      v18 = v13; /*0x6890b0*/
      v28 = v31; /*0x6890b4*/
      if ( (int)v30 <= 0 ) /*0x6890b8*/
      {
        v3 = v34; /*0x68918e*/
        v24 = v35; /*0x689192*/
      }
      else
      {
  int v23; // ebx
  char *v21; // ebp
        int v19 = (__int16)v14; /*0x6890be*/
        int v20 = (__int16)v13; /*0x6890c7*/
        v38 = (IUnknown *)(DataGlobal_87F8E4.field_28 + *(_DWORD *)&DataGlobal_87F8E4.field_2D[3] - 1); /*0x6890d0*/
        v39 = *(_DWORD *)DataGlobal_87F8E4[44] + *(_DWORD *)&DataGlobal_87F8E4[52] - 1; /*0x6890e5*/
        v32 = (RadarClass *)Random::Range(&g_ScenarioClass_Instance->random[1], 0, (IUnknown *)1); /*0x6890fe*/
        if ( Random::Range(&g_ScenarioClass_Instance->random[1], 0, (IUnknown *)0x63) >= 50 ) /*0x68910a*/
        {
          v21 = (char *)(v20 - (_DWORD)v32); /*0x68911e*/
          if ( (int)v21 < v15 ) /*0x689124*/
            LOWORD(v21) = v15; /*0x689126*/
        }
        else
        {
          v21 = (char *)v32 + v20; /*0x689114*/
          if ( (int)v21 > (int)v38 ) /*0x689118*/
            LOWORD(v21) = (_WORD)v38; /*0x68911a*/
        }
        int v22 = Random::Range(&g_ScenarioClass_Instance->random[1], 0, (IUnknown *)1); /*0x68913d*/
        if ( Random::Range(&g_ScenarioClass_Instance->random[1], 0, (IUnknown *)0x63) >= 50 ) /*0x689156*/
        {
          v23 = v19 - v22; /*0x689166*/
          if ( v23 < v16 ) /*0x68916a*/
            LOWORD(v23) = v16; /*0x68916c*/
        }
        else
        {
          v23 = v22 + v19; /*0x68915c*/
          if ( v23 > v39 ) /*0x689160*/
            LOWORD(v23) = v39; /*0x689162*/
        }
        v24 = v35; /*0x68916e*/
        v3 = v34; /*0x689172*/
        LOWORD(v33) = (_WORD)v21; /*0x689176*/
        v17 = a3; /*0x68917b*/
        HIWORD(v33) = v23; /*0x68917f*/
        v18 = (unsigned __int16)v33; /*0x689184*/
        v28 = v33; /*0x689188*/
      }
      if ( __PAIR32__(HIWORD(v28), v18) == v3->field_0 ) /*0x689199*/
        v36 = 1; /*0x6891a6*/
      if ( LayerClass::IsWithinUsableArea(&DataGlobal_87F7E8, (IUnknown *)&v28, (TechnoClass *)1) && !v36 ) /*0x6891cf*/
      {
        v42 = 0; /*0x6891e6*/
        v43 = 0; /*0x6891ea*/
        _DWORD * v25 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v28); /*0x6891ee*/
        int v26 = Object::FindClosestObjectCell(v25, (IUnknown *)&v42, 0, 0); /*0x6891f5*/
        if ( !v26 /*0x689218*/
          || (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 44))(v26) == 15
          && (*(int (__thiscall **)(int *))(*v24 + 44))(v24) == 15 )
        {
  _DWORD v45[3]; // [esp+54h] [ebp-18h] BYREF
          Coord::Subtract(v45, (IUnknown *)(((__int16)v28 << 8) + 128), (IUnknown *)((SHIWORD(v28) << 8) + 128), 0); /*0x68923d*/
          v27 = (IUnknown *)Cell::GetGroundHeight(v45); /*0x68924c*/
  _DWORD v46[3]; // [esp+60h] [ebp-Ch] BYREF
          Coord::Subtract(v46, (IUnknown *)(((__int16)v28 << 8) + 128), (IUnknown *)((SHIWORD(v28) << 8) + 128), v27); /*0x689274*/
          if ( (*(unsigned __int8 (__thiscall **)(int *, _DWORD *, _DWORD))(*v24 + 216))(v24, v46, 0) ) /*0x689283*/
            return 1; /*0x68928b*/
        }
      }
      if ( ++v29 > 7 ) /*0x6892a1*/
        v29 = 0; /*0x6892a3*/
      if ( ++v37 > 7 ) /*0x6892b3*/
      {
        v30 = (ScenarioClass *)((char *)v30 + 1); /*0x6892c1*/
        if ( (int)v30 >= 2 ) /*0x6892c5*/
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
} // namespace gamemd

// 0x681070
namespace gamemd {
int E4Recv_681070::sub_681070()
{
{
    return this->M4;
}
}
} // namespace gamemd

// 0x681090
namespace gamemd {
int E4Recv_681090::ReadPointerFromECX3()
{
{
    return *(int *)this;
}
}
} // namespace gamemd

// 0x6810C0
namespace gamemd {
const char * E4Recv_6810C0::_raw_name_type_info__QBEPBDXZ()
{
{
    return (char *)(this) + 8;
}
}
} // namespace gamemd

// 0x681180
namespace gamemd {
char * E4Recv_681180::sub_681180()
{
{
    return this + 400;
}
}
} // namespace gamemd

// 0x6811B0
namespace gamemd {
char * E4Recv_6811B0::sub_6811B0()
{
{
    return this + 660;
}
}
} // namespace gamemd

// 0x6811F0
namespace gamemd {
char * E4Recv_6811F0::sub_6811F0()
{
{
    return this + 724;
}
}
} // namespace gamemd

// 0x681220
namespace gamemd {
unsigned int * E4Recv_681220::sub_681220(unsigned int * a2)
{
{
    *a2 = this->M984;
    *((int*)(a2) + 1) = this->M988;
    return a2;
}
}
} // namespace gamemd

// 0x681260
namespace gamemd {
unsigned int * E4Recv_681260::sub_681260(unsigned int * a2)
{
{
    *a2 = this->M992;
    *((int*)(a2) + 1) = this->M996;
    return a2;
}
}
} // namespace gamemd

// 0x6812A0
namespace gamemd {
unsigned int * E4Recv_6812A0::sub_6812A0(unsigned int * a2)
{
{
    *a2 = this->M1000;
    *((int*)(a2) + 1) = this->M1004;
    return a2;
}
}
} // namespace gamemd

// 0x682570
namespace gamemd {
int COM_Property_ReadScenario(int a1, int a2, unsigned int * a3)
{
{
    int *v3;
    int v4;
    int v6[2];
    short v7[4];
    int v8;
    v3 = a3;
    a3 = 0;
    *v3 = 0;
    v4 = (*(int (__stdcall **)(int, void *, int, int **))(*(int *)(a1) + 16))(a1, &DataGlobal_7F7D10, 18, &a3);
    if ( v4 >= 0 )
  {
    v6[0] = 1;
    v6[1] = a2;
    if ( !a3 )
    WinAPI::Wrapper(-2147467261);
    v4 = (*(int (__stdcall **)(int *, int, int *, short *))(*a3 + 12))(a3, 1, v6, v7);
    if ( v4 >= 0 )
    {
    if ( v7[0] == 3 )
    *v3 = v8;
    if ( a3 )
    (*(void (__stdcall **)(int *))(*a3 + 8))(a3);
    }
    else if ( a3 )
    {
    (*(void (__stdcall **)(int *))(*a3 + 8))(a3);
    return v4;
    }
  }
    else if ( a3 )
  {
    (*(void (__stdcall **)(int *))(*a3 + 8))(a3);
    return v4;
  }
    return v4;
}
}
} // namespace gamemd

// 0x682D30
namespace gamemd {
int COM_ReadBuffer(int a1, int a2, unsigned int * a3)
{
{
    int *v3;
    int v4;
    int v6;
    int v7[2];
    short v8[4];
    int v9;
    int v10;
    v3 = a3;
    a3 = 0;
    *v3 = 0;
    v3[1] = 0;
    v4 = (*(int (__stdcall **)(int, void *, int, int **))(*(int *)(a1) + 16))(a1, &DataGlobal_7F7D10, 18, &a3);
    if ( v4 >= 0 )
  {
    v7[0] = 1;
    v7[1] = a2;
    if ( !a3 )
    WinAPI::Wrapper(-2147467261);
    v4 = (*(int (__stdcall **)(int *, int, int *, short *))(*a3 + 12))(a3, 1, v7, v8);
    if ( v4 >= 0 )
    {
    if ( v8[0] == 64 )
      {
    v6 = v10;
    *v3 = v9;
    v3[1] = v6;
      }
    if ( a3 )
    (*(void (__stdcall **)(int *))(*a3 + 8))(a3);
    }
    else if ( a3 )
    {
    (*(void (__stdcall **)(int *))(*a3 + 8))(a3);
    return v4;
    }
  }
    else if ( a3 )
  {
    (*(void (__stdcall **)(int *))(*a3 + 8))(a3);
    return v4;
  }
    return v4;
}
}
} // namespace gamemd

// 0x683070
namespace gamemd {
void sub_683070()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B05460 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x6830A0
namespace gamemd {
void sub_6830A0()
{
{
    DataGlobal_B054C0 = DataGlobal_B05460 / 60.0;
}
}
} // namespace gamemd

// 0x6830C0
namespace gamemd {
void sub_6830C0()
{
{
    DataGlobal_B054A8 = 1.0 / DataGlobal_B054C0;
}
}
} // namespace gamemd

// 0x6830E0
namespace gamemd {
void sub_6830E0()
{
{
    DataGlobal_B054A0 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x683100
namespace gamemd {
void sub_683100()
{
{
    DataGlobal_B05468 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x683120
namespace gamemd {
void sub_683120()
{
{
    DataGlobal_B05440 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x683140
namespace gamemd {
long long sub_683140()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B05440 - DataGlobal_B05468);
    result = Math::RoundToInt(v0 * DataGlobal_B05460 * 0.5);
    DataGlobal_B054C8 = result;
    return result;
}
}
} // namespace gamemd

// 0x683180
namespace gamemd {
void sub_683180()
{
{
    DataGlobal_B05470 = Math::ArcTan((double)DataGlobal_B054C8 * 0.00390625);
}
}
} // namespace gamemd

// 0x6831B0
namespace gamemd {
void sub_6831B0()
{
{
    DataGlobal_B05498 = Math::ArcTan((double)(2 * DataGlobal_B054C8) / DataGlobal_B05460);
}
}
} // namespace gamemd

// 0x6831E0
namespace gamemd {
long long sub_6831E0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B054C8) + 0.5);
    DataGlobal_B054BC = result;
    return result;
}
}
} // namespace gamemd

// 0x683210
namespace gamemd {
int sub_683210()
{
{
    DataGlobal_B05458 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x683220
namespace gamemd {
int sub_683220()
{
{
    DataGlobal_B05488 = 0;
    DataGlobal_B0548C = 0;
    DataGlobal_B05490 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x683240
namespace gamemd {
int sub_683240()
{
{
    DataGlobal_B054B8 = 0;
    DataGlobal_B054B0 = 128;
    DataGlobal_B054B4 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x683260
namespace gamemd {
int sub_683260()
{
{
    DataGlobal_B05448 = 0;
    DataGlobal_B0544C = 0;
    DataGlobal_B05450 = 0;
    DataGlobal_B05454 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x683280
namespace gamemd {
int sub_683280()
{
{
    DataGlobal_B05478 = Timer::GetTicks();
    DataGlobal_B05480 = 0;
    return atexit(nullsub_226);
}
}
} // namespace gamemd

// 0x6832B0
namespace gamemd {
void nullsub_226()
{
  ;
}
} // namespace gamemd

// 0x6842F0
namespace gamemd {
char DisplayMode_Toggle(char a1)
{
{
    char result;
    if ( a1 )
  {
    result = g_CommandLineFlags;
    if ( g_CreditsScreenBounds != g_CommandLineFlags || g_CreditsScreenConfig != DataGlobal_A8EB88 )
    {
    Debug::Log(DataGlobal_83D868, g_CommandLineFlags, DataGlobal_A8EB88);
    return ChangeVideoMode(g_CommandLineFlags, DataGlobal_A8EB88);
    }
  }
    else
  {
    result = g_CreditsScreenBounds;
    if ( g_CreditsScreenBounds != xRight )
    {
    result = yBottom;
    if ( g_CreditsScreenConfig != yBottom )
      {
    Debug::Log(g_Str_Toggle_display_mode_back_to_sh);
    return ChangeVideoMode(xRight, yBottom);
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x689790
namespace gamemd {
char E4Recv_689790::sub_689790(const char * a2, unsigned char * a3)
{
{
    int v3;
    const char *i;
    v3 = 0;
    for ( i = this + 7304; strcmp(a2, i); i += 41 )
  {
    if ( ++v3 >= 50 )
    return 0;
  }
    if ( v3 < 0 )
    return 0;
    *a3 = *(this + 40 * v3 + v3 + 7344);
    return 1;
}
}
} // namespace gamemd

// 0x689820
namespace gamemd {
int E4Recv_689820::sub_689820(const char * a2)
{
{
    int v2;
    const char *i;
    v2 = 0;
    for ( i = this + 7304; strcmp(a2, i); i += 41 )
  {
    if ( ++v2 >= 50 )
    return -1;
  }
    return v2;
}
}
} // namespace gamemd

// 0x689960
namespace gamemd {
char E4Recv_689960::sub_689960(const char * a2, char a3)
{
{
    unsigned int v3;
    const char *i;
    char v6;
    v3 = 0;
    for ( i = this + 9354; strcmp(a2, i); i += 41 )
  {
    if ( (int)++v3 >= 100 )
    return 1;
  }
    if ( v3 == -1 )
    return 1;
    if ( v3 >= 0x64 )
    return 0;
    v6 = *(this + 40 * v3 + v3 + 9394);
    if ( v6 != a3 )
  {
    *((char *)(this) + 40 * v3 + v3 + 9394) = a3;
    this->M13482 = 1;
    TriggerActionQueue::ProcessAll((void *)v3);
  }
    return v6;
}
}
} // namespace gamemd

// 0x689A30
namespace gamemd {
char E4Recv_689A30::sub_689A30(const char * a2, unsigned char * a3)
{
{
    int v3;
    const char *i;
    v3 = 0;
    for ( i = this + 9354; strcmp(a2, i); i += 41 )
  {
    if ( ++v3 >= 100 )
    return 0;
  }
    if ( v3 < 0 )
    return 0;
    *a3 = *(this + 40 * v3 + v3 + 9394);
    return 1;
}
}
} // namespace gamemd

// 0x689AC0
namespace gamemd {
int E4Recv_689AC0::sub_689AC0(const char * a2)
{
{
    int v2;
    const char *i;
    v2 = 0;
    for ( i = this + 9354; strcmp(a2, i); i += 41 )
  {
    if ( ++v2 >= 100 )
    return -1;
  }
    return v2;
}
}
} // namespace gamemd

// 0x68B8A0
namespace gamemd {
long long E4Recv_68B8A0::sub_68B8A0()
{
{
    DWORD v1;
    unsigned int v2;
    char v4;
    int v5;
    int v6;
    int v7;
    __int64 v8;
    v5 = (int)this;
    v6 = 0;
    GetVersionString(&v7, &v4, 0, 0);
    if ( v7 > 5 )
    v5 = Math::RoundToInt((double)v5 * 0.8);
    v1 = sub_5CAF70((LONG *)&v8);
    v2 = v8;
    if ( v1 || (int)v8 )
  {
    v8 = v1;
    v6 = Math::RoundToInt(((double)v2 * 4294967296.0 + (double)v1) * 0.000001);
  }
    return Math::RoundToInt((double)v5 * 200.0 / (double)v6);
}
}
} // namespace gamemd

// 0x68C330
namespace gamemd {
int sub_68C330()
{
{
    BuildingTypeClass_AnimTable = 0;
    DataGlobal_B054D8 = 0;
    DataGlobal_B054DC = 1;
    DataGlobal_B054DD = 0;
    ColorScheme_Array = (int)&vt_DynamicVectorClass_ColorScheme;
    DataGlobal_B054E4 = 10;
    g_AnimClass_SaveState = 0;
    return atexit(sub_68C370);
}
}
} // namespace gamemd

// 0x68C370
namespace gamemd {
void sub_68C370()
{
{
    ColorScheme_Array = (int)&vt_VectorClass_ColorScheme;
    if ( BuildingTypeClass_AnimTable && DataGlobal_B054DD )
  {
    __3_YAXPAX_Z(BuildingTypeClass_AnimTable);
    BuildingTypeClass_AnimTable = 0;
  }
    DataGlobal_B054DD = 0;
    DataGlobal_B054D8 = 0;
}
}
} // namespace gamemd

// 0x68CA50
namespace gamemd {
int FindBuildingAnimByName(AbstractClass * aP0, int a2)
{
{
    int v2;
    IUnknown *v5;
    bool v6;
    v2 = 0;
    if ( *(int *)DataGlobal_B05488[88] <= 0 )
    return 0;
    v5 = (IUnknown *)DataGlobal_B05488.field_4C;
    while ( 1 )
  {
    v6 = _strcmpi(aP0, *(const void **)(*(&v5->field_0 + v2) + 772)) == 0;
    v5 = (IUnknown *)DataGlobal_B05488.field_4C;
    if ( v6 && *(int *)(*(int *)(DataGlobal_B05488.field_4C + 4 * v2) + 784) == a2 )
    break;
    if ( ++v2 >= *(int *)DataGlobal_B05488[88] )
    return 0;
  }
    if ( v2 < 0 )
    return 0;
    else
    return *(int *)(DataGlobal_B05488.field_4C + 4 * v2);
}
}
} // namespace gamemd

// 0x68CB10
namespace gamemd {
int sub_68CB10()
{
{
    DataGlobal_B054F8 = 0;
    DataGlobal_B054FC = 0;
    DataGlobal_B05500 = 0;
    DataGlobal_B05504 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x68CB30
namespace gamemd {
void sub_68CB30()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B05510 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x68CB60
namespace gamemd {
void sub_68CB60()
{
{
    DataGlobal_B05578 = DataGlobal_B05510 / 60.0;
}
}
} // namespace gamemd

// 0x68CB80
namespace gamemd {
void sub_68CB80()
{
{
    DataGlobal_B05558 = 1.0 / DataGlobal_B05578;
}
}
} // namespace gamemd

// 0x68CBA0
namespace gamemd {
void sub_68CBA0()
{
{
    DataGlobal_B05550 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x68CBC0
namespace gamemd {
void sub_68CBC0()
{
{
    DataGlobal_B05518 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x68CBE0
namespace gamemd {
void sub_68CBE0()
{
{
    DataGlobal_B054E8 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x68CC00
namespace gamemd {
long long sub_68CC00()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B054E8 - DataGlobal_B05518);
    result = Math::RoundToInt(v0 * DataGlobal_B05510 * 0.5);
    DataGlobal_B05580 = result;
    return result;
}
}
} // namespace gamemd

// 0x68CC40
namespace gamemd {
void sub_68CC40()
{
{
    DataGlobal_B05520 = Math::ArcTan((double)DataGlobal_B05580 * 0.00390625);
}
}
} // namespace gamemd

// 0x68CC70
namespace gamemd {
void sub_68CC70()
{
{
    DataGlobal_B05548 = Math::ArcTan((double)(2 * DataGlobal_B05580) / DataGlobal_B05510);
}
}
} // namespace gamemd

// 0x68CCA0
namespace gamemd {
long long sub_68CCA0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B05580) + 0.5);
    DataGlobal_B05574 = result;
    return result;
}
}
} // namespace gamemd

// 0x68CCD0
namespace gamemd {
int sub_68CCD0()
{
{
    DataGlobal_B05508 = 0;
    DataGlobal_B0550A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x68CCE0
namespace gamemd {
int sub_68CCE0()
{
{
    DataGlobal_B05538 = 0;
    DataGlobal_B0553C = 0;
    DataGlobal_B05540 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x68CD00
namespace gamemd {
int sub_68CD00()
{
{
    DataGlobal_B05570 = 0;
    DataGlobal_B05568 = 128;
    DataGlobal_B0556C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x68F8A0
namespace gamemd {
int E4Recv_68F8A0::sub_68F8A0()
{
{
    int v2;
    unsigned int v3;
    int *v4;
    int v5;
    int v6;
    int v7;
    int *v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int result;
    int v14;
    int *v15;
    char Buffer[20];
    v2 = (*(int (__stdcall **)(char *))(*((int *)(HouseClass_Player) + 9) + 24))((char *)(HouseClass_Player) + 36);
    sprintf(Buffer, g_Str_Trace__d, v2);
    v3 = strlen(Buffer) + 1;
    v4 = __2_YAPAXI_Z(0x2Cu);
    if ( v4 )
  {
    v5 = this->M12;
    v6 = this->M4 + 214;
    v4[1] = 590 - 12 * (v3 - 1) + *(int *)this;
    v4[2] = v6;
    v4[3] = Timer::GetTicks();
    v4[5] = 0;
    v4[10] = v5;
    v4[6] = Buffer;
    v4[7] = 0;
    v4[8] = 0;
    *((char *)(v4) + 36) = 0;
    *v4 = &vt_ScorePrintClass;
  }
    else
  {
    v4 = 0;
  }
    v7 = this->M36;
    v8 = (int *)(this + 28);
    if ( this->M44 < v7 || ((unsigned char)this->M41 || !v7) && (v9 = this->M48, v9 > 0) && (*(unsigned char (__thiscall **)(int, int, int))(*v8 + 8))(this + 28, v7 + v9, 0) )
  {
    v10 = this->M44;
    v11 = this->M32;
    this->M44 = v10 + 1;
    *(int *)(v11 + 4 * v10) = v4;
  }
    v12 = *v8;
    v15 = v4;
    for ( result = (*(int (__thiscall **)(int, int **))(v12 + 16))(this + 28, &v15);
    result != -1;
    result = (*(int (__thiscall **)(int, int **))(v14 + 16))(this + 28, &v15) ) {
    Screen::TransitionLoop((int *)this, 1);
    v14 = *v8;
    v15 = v4;
  }
    return result;
}
}
} // namespace gamemd

// 0x68FB10
namespace gamemd {
unsigned int * E4Recv_68FB10::sub_68FB10(unsigned int * a2, int a3, size_t BufferCount, wchar_t * Format, wchar_t * a6, int a7, int a8)
{
{
    wchar_t *v8;
    int *v10;
    int v11;
    int *v12;
    int v13;
    int v14;
    CampaignScore *v16;
    wchar_t Buffer[64];
    v8 = Format;
    if ( (int)Format >= (int)a6 )
    v8 = a6;
    swprintf(Buffer, BufferCount, v8, v16);
    v10 = (int *)this->M12;
    v11 = a8 - v10[2];
    (*(void (__thiscall **)(int *, int, wchar_t *, int, int, int))(*v10 + 12))(v10, a3, Buffer, a7, v11, 2);
    v12 = (int *)this->M12;
    v13 = v12[2];
    v14 = (*(int (__thiscall **)(int *, wchar_t *))(*v12 + 8))(v12, Buffer);
    *a2 = a7;
    *((int*)(a2) + 1) = v11;
    *((int*)(a2) + 2) = v14;
    *((int*)(a2) + 3) = v13;
    return a2;
}
}
} // namespace gamemd
