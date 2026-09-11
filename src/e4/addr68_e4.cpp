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
#include "e4/classes/E4Recv_689790_e4.hpp"
#include "e4/classes/E4Recv_689820_e4.hpp"
#include "e4/classes/E4Recv_689960_e4.hpp"
#include "e4/classes/E4Recv_689A30_e4.hpp"
#include "e4/classes/E4Recv_689AC0_e4.hpp"
#include "e4/classes/E4Recv_68B8A0_e4.hpp"
#include "e4/classes/E4Recv_68F8A0_e4.hpp"
#include "e4/classes/E4Recv_68FB10_e4.hpp"

// 0x681070
namespace gamemd {
int E4Recv_681070::sub_681070()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_681070(_DWORD *this)
{
  return *(this + 1); /*0x681073*/
}
}
} // namespace gamemd

// 0x681090
namespace gamemd {
int E4Recv_681090::ReadPointerFromECX3()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ReadPointerFromECX3(void *this)
{
  return *(_DWORD *)this; /*0x681092*/
}
}
} // namespace gamemd

// 0x6810C0
namespace gamemd {
const char * E4Recv_6810C0::_raw_name_type_info__QBEPBDXZ()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
const char *__thiscall _raw_name_type_info__QBEPBDXZ(type_info *this)
{
  return (char *)this + 8; /*0x6810c3*/
}
}
} // namespace gamemd

// 0x681180
namespace gamemd {
char * E4Recv_681180::sub_681180()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall sub_681180(char *this)
{
  return this + 400; /*0x681186*/
}
}
} // namespace gamemd

// 0x6811B0
namespace gamemd {
char * E4Recv_6811B0::sub_6811B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall sub_6811B0(char *this)
{
  return this + 660; /*0x6811b6*/
}
}
} // namespace gamemd

// 0x6811F0
namespace gamemd {
char * E4Recv_6811F0::sub_6811F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall sub_6811F0(char *this)
{
  return this + 724; /*0x6811f6*/
}
}
} // namespace gamemd

// 0x681220
namespace gamemd {
unsigned int * E4Recv_681220::sub_681220(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_681220(_DWORD *this, _DWORD *a2)
{
  *a2 = *(this + 246); /*0x68122a*/
  a2[1] = *(this + 247); /*0x681232*/
  return a2; /*0x681235*/
}
}
} // namespace gamemd

// 0x681260
namespace gamemd {
unsigned int * E4Recv_681260::sub_681260(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_681260(_DWORD *this, _DWORD *a2)
{
  *a2 = *(this + 248); /*0x68126a*/
  a2[1] = *(this + 249); /*0x681272*/
  return a2; /*0x681275*/
}
}
} // namespace gamemd

// 0x6812A0
namespace gamemd {
unsigned int * E4Recv_6812A0::sub_6812A0(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_6812A0(_DWORD *this, _DWORD *a2)
{
  *a2 = *(this + 250); /*0x6812aa*/
  a2[1] = *(this + 251); /*0x6812b2*/
  return a2; /*0x6812b5*/
}
}
} // namespace gamemd

// 0x682570
namespace gamemd {
int COM_Property_ReadScenario(int a1, int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall COM_Property_ReadScenario(int a1, int a2, _DWORD *a3)
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
}
} // namespace gamemd

// 0x682640
namespace gamemd {
int COM_WriteString(int a1, int a2, LPCCH lpMultiByteStr)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall COM_WriteString(int a1, int a2, LPCCH lpMultiByteStr)
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
  v4 = &MEMORY[0x83D658]; /*0x682676*/
  while ( *v4 != a2 ) /*0x68267d*/
  {
    v4 += 2; /*0x68267f*/
    ++v3; /*0x682682*/
    if ( (int)v4 >= (int)MEMORY[0x83D6C0] ) /*0x682688*/
    {
      v5 = 0; /*0x68268a*/
      goto LABEL_5; /*0x68268a*/
    }
  }
  v5 = (&MEMORY[0x83D65C])[2 * v3]; /*0x6826c9*/
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
} // namespace gamemd

// 0x682880
namespace gamemd {
int COM_ReadString(int * a1, int a2, LPCCH lpMultiByteStr)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall COM_ReadString(int *a1, int a2, LPCCH lpMultiByteStr)
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
} // namespace gamemd

// 0x682A90
namespace gamemd {
int COM_Property_ReadBool(int a1, int a2, char a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall COM_Property_ReadBool(int a1, int a2, char a3)
{
  int v3; // ecx
  _DWORD *v4; // eax
  _UNKNOWN **v5; // ecx
  int v6; // esi
  int v8; // [esp+30h] [ebp-4h] BYREF

  v8 = 0; /*0x682a96*/
  v3 = 0; /*0x682a9e*/
  v4 = &MEMORY[0x83D658]; /*0x682aa0*/
  while ( *v4 != a2 ) /*0x682aa7*/
  {
    v4 += 2; /*0x682aa9*/
    ++v3; /*0x682aac*/
    if ( (int)v4 >= (int)MEMORY[0x83D6C0] ) /*0x682ab2*/
    {
      v5 = 0; /*0x682ab4*/
      goto LABEL_5; /*0x682ab4*/
    }
  }
  v5 = (&MEMORY[0x83D65C])[2 * v3]; /*0x682aeb*/
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
} // namespace gamemd

// 0x682B80
namespace gamemd {
int COM_PropertyBag_Read(int * a1, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall COM_PropertyBag_Read(int *a1, int a2, int a3)
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
} // namespace gamemd

// 0x682C70
namespace gamemd {
int sub_682C70(int a1, int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall sub_682C70(int a1, int a2, _DWORD *a3)
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
  v5 = &MEMORY[0x83D658]; /*0x682c91*/
  while ( *v5 != a2 ) /*0x682c98*/
  {
    v5 += 2; /*0x682c9a*/
    ++v4; /*0x682c9d*/
    if ( (int)v5 >= (int)MEMORY[0x83D6C0] ) /*0x682ca3*/
    {
      v6 = 0; /*0x682ca5*/
      goto LABEL_5; /*0x682ca5*/
    }
  }
  v6 = (&MEMORY[0x83D65C])[2 * v4]; /*0x682cd8*/
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
} // namespace gamemd

// 0x682D30
namespace gamemd {
int COM_ReadBuffer(int a1, int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall COM_ReadBuffer(int a1, int a2, _DWORD *a3)
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
}
} // namespace gamemd

// 0x682E10
namespace gamemd {
int COM_WriteInt(int a1, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall COM_WriteInt(int a1, int a2, int a3)
{
  int v3; // ecx
  _DWORD *v4; // eax
  _UNKNOWN **v5; // ecx
  int v6; // esi
  int v8; // [esp+30h] [ebp-4h] BYREF

  v8 = 0; /*0x682e16*/
  v3 = 0; /*0x682e1e*/
  v4 = &MEMORY[0x83D658]; /*0x682e20*/
  while ( *v4 != a2 ) /*0x682e27*/
  {
    v4 += 2; /*0x682e29*/
    ++v3; /*0x682e2c*/
    if ( (int)v4 >= (int)MEMORY[0x83D6C0] ) /*0x682e32*/
    {
      v5 = 0; /*0x682e34*/
      goto LABEL_5; /*0x682e34*/
    }
  }
  v5 = (&MEMORY[0x83D65C])[2 * v3]; /*0x682e6b*/
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
} // namespace gamemd

// 0x682F00
namespace gamemd {
int COM_SetBufferParams(int * a1, int a2, int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall COM_SetBufferParams(int *a1, int a2, int *a3)
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
} // namespace gamemd

// 0x683070
namespace gamemd {
void sub_683070()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_683070()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x68307c*/
  dbl_B05460 = Math::Sqrt(v0 + v0); /*0x68308e*/
}
}
} // namespace gamemd

// 0x6830A0
namespace gamemd {
void sub_6830A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6830A0()
{
  MEMORY[0xB054C0] = dbl_B05460 / 60.0; /*0x6830ac*/
}
}
} // namespace gamemd

// 0x6830C0
namespace gamemd {
void sub_6830C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6830C0()
{
  MEMORY[0xB054A8] = 1.0 / MEMORY[0xB054C0]; /*0x6830cc*/
}
}
} // namespace gamemd

// 0x6830E0
namespace gamemd {
void sub_6830E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6830E0()
{
  MEMORY[0xB054A0] = 0.0174532925199433 * 45.0; /*0x6830ec*/
}
}
} // namespace gamemd

// 0x683100
namespace gamemd {
void sub_683100()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_683100()
{
  dbl_B05468 = 0.0174532925199433 * 60.0; /*0x68310c*/
}
}
} // namespace gamemd

// 0x683120
namespace gamemd {
void sub_683120()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_683120()
{
  dbl_B05440 = 0.0174532925199433 * 90.0; /*0x68312c*/
}
}
} // namespace gamemd

// 0x683140
namespace gamemd {
long long sub_683140()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_683140()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B05440 - dbl_B05468); /*0x683152*/
  result = Math::RoundToInt(v0 * dbl_B05460 * 0.5); /*0x683166*/
  MEMORY[0xB054C8] = result; /*0x68316b*/
  return result; /*0x683170*/
}
}
} // namespace gamemd

// 0x683180
namespace gamemd {
void sub_683180()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_683180()
{
  dbl_B05470 = Math::ArcTan((double)MEMORY[0xB054C8] * 0.00390625); /*0x683197*/
}
}
} // namespace gamemd

// 0x6831B0
namespace gamemd {
void sub_6831B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6831B0()
{
  MEMORY[0xB05498] = Math::ArcTan((double)(2 * MEMORY[0xB054C8]) / dbl_B05460); /*0x6831d2*/
}
}
} // namespace gamemd

// 0x6831E0
namespace gamemd {
long long sub_6831E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_6831E0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB054C8]) + 0.5); /*0x6831fb*/
  MEMORY[0xB054BC] = result; /*0x683200*/
  return result; /*0x683206*/
}
}
} // namespace gamemd

// 0x683210
namespace gamemd {
int sub_683210()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_683210()
{
  dword_B05458 = 0; /*0x683212*/
  return 0; /*0x68321e*/
}
}
} // namespace gamemd

// 0x683220
namespace gamemd {
int sub_683220()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_683220()
{
  stru_B05488 = 0; /*0x683222*/
  MEMORY[0xB0548C] = 0; /*0x683227*/
  MEMORY[0xB05490] = 0; /*0x68322c*/
  return 0; /*0x683231*/
}
}
} // namespace gamemd

// 0x683240
namespace gamemd {
int sub_683240()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_683240()
{
  MEMORY[0xB054B8] = 0; /*0x683245*/
  MEMORY[0xB054B0] = 128; /*0x68324f*/
  MEMORY[0xB054B4] = 128; /*0x683254*/
  return 128; /*0x683259*/
}
}
} // namespace gamemd

// 0x683260
namespace gamemd {
int sub_683260()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_683260()
{
  dword_B05448 = 0; /*0x683262*/
  dword_B0544C = 0; /*0x683267*/
  dword_B05450 = 0; /*0x68326c*/
  dword_B05454 = 0; /*0x683271*/
  return 0; /*0x683276*/
}
}
} // namespace gamemd

// 0x683280
namespace gamemd {
int sub_683280()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_683280()
{
  dword_B05478 = Timer::GetTicks(); /*0x68328f*/
  dword_B05480 = 0; /*0x683294*/
  return atexit(nullsub_226); /*0x6832a4*/
}
}
} // namespace gamemd

// 0x683FB0
namespace gamemd {
int sub_683FB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_683FB0()
{
  DWORD *v0; // esi
  void *v1; // ecx

  MouseClass::GetPosition(&MEMORY[0x87F7E8]); /*0x683fb7*/
  if ( *((_DWORD *)MEMORY[0xA8B230] + 389) == -1 ) /*0x683fd0*/
  {
    v0 = (DWORD *)((char *)MEMORY[0xA8B230] + 1556); /*0x683fc1*/
    *v0 = Timer::GetTicks(); /*0x683fda*/
  }
  if ( *((_DWORD *)MEMORY[0xA8B230] + 389) != -1 ) /*0x683ff7*/
    Timer::GetTicks(); /*0x683ffc*/
  Debug::Log(); /*0x68400b*/
  if ( MEMORY[0x887368] ) /*0x68401d*/
    Tooltip::Enable((void *)MEMORY[0x887368], MEMORY[0xA8EB80]); /*0x684026*/
  EndBufferMixer((int *)MEMORY[0x87E758], MEMORY[0x83D834]); /*0x684037*/
  LOBYTE(v1) = 0; /*0x68403c*/
  MEMORY[0x83D834] = 0x4000; /*0x68403e*/
  AsyncIO::Read(v1); /*0x684048*/
  return sub_406F40();
}
}
} // namespace gamemd

// 0x684060
namespace gamemd {
void * ScenarioClass_SetTimer(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *__fastcall ScenarioClass_SetTimer(int a1)
{
  DWORD Ticks; // eax
  char *v3; // edx
  void *result; // eax
  _DWORD *v5; // esi
  DWORD v6; // eax
  int v7; // ecx
  DWORD v8; // eax
  int v9; // [esp+8h] [ebp-8h]

  if ( a1 ) /*0x684068*/
  {
    Ticks = Timer::GetTicks(); /*0x68406e*/
    v3 = (char *)MEMORY[0xA8B230] + 1568; /*0x68407c*/
    *((_DWORD *)MEMORY[0xA8B230] + 392) = Ticks; /*0x68408c*/
    *((_DWORD *)v3 + 1) = v9; /*0x684092*/
    *((_DWORD *)v3 + 2) = 60 * a1; /*0x684099*/
    result = MEMORY[0xA8B230]; /*0x68409c*/
    if ( *((_BYTE *)MEMORY[0xA8B230] + 1584) ) /*0x6840a1*/
      return result; /*0x6840a9*/
    *((_BYTE *)MEMORY[0xA8B230] + 1584) = 1; /*0x6840af*/
  }
  if ( !*((_DWORD *)MEMORY[0xA8B230] + 395) ) /*0x6840bc*/
  {
    sub_406F00(); /*0x6840ca*/
    if ( !MEMORY[0xA8B238][0] || MEMORY[0xA8B238][0] == 5 ) /*0x6840db*/
    {
      v5 = (char *)MEMORY[0xA8B230] + 1556; /*0x6840e2*/
      if ( *((_DWORD *)MEMORY[0xA8B230] + 389) != -1 ) /*0x6840f1*/
      {
        v6 = Timer::GetTicks(); /*0x6840f6*/
        v7 = v5[2]; /*0x6840fd*/
        v8 = v6 - *v5; /*0x684100*/
        *v5 = -1; /*0x684102*/
        v5[2] = v8 + v7; /*0x68410a*/
      }
    }
    MEMORY[0xB054CC] = *((_BYTE *)MEMORY[0xA8B230] + 13730); /*0x68411b*/
    if ( !MEMORY[0xB054CC] ) /*0x684120*/
    {
      Mouse::ReleaseCapture(&MEMORY[0x87F7E8]); /*0x684127*/
      if ( !(*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 40))(MEMORY[0x887640]) ) /*0x684134*/
        (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 12))(MEMORY[0x887640]); /*0x684143*/
      *((_BYTE *)MEMORY[0xA8B230] + 13730) = 1; /*0x68414c*/
      MEMORY[0xA8ED9C] = 1; /*0x684159*/
      Timer::PumpMessages((HWND *)MEMORY[0x87F770]); /*0x684160*/
      MEMORY[0xB07784] = 0; /*0x684165*/
    }
  }
  result = MEMORY[0xA8B230]; /*0x68416f*/
  ++*((_DWORD *)MEMORY[0xA8B230] + 395); /*0x684174*/
  return result; /*0x68417a*/
}
}
} // namespace gamemd

// 0x684290
namespace gamemd {
HWND Mouse_Update()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HWND Mouse_Update()
{
  HWND result; // eax

  if ( *((_BYTE *)MEMORY[0xA8B230] + 13730) == 1 /*0x6842a6*/
    && (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 40))(MEMORY[0x887640]) )
  {
    do /*0x6842c0*/
      (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 16))(MEMORY[0x887640]); /*0x6842b5*/
    while ( (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 40))(MEMORY[0x887640]) ); /*0x6842c0*/
  }
  *((_BYTE *)MEMORY[0xA8B230] + 13730) = 0; /*0x6842cc*/
  MEMORY[0xA8ED9C] = 0; /*0x6842d9*/
  result = Timer::PumpMessages((HWND *)MEMORY[0x87F770]); /*0x6842e0*/
  MEMORY[0xB07784] = 0; /*0x6842e5*/
  return result; /*0x6842ef*/
}
}
} // namespace gamemd

// 0x6842F0
namespace gamemd {
char DisplayMode_Toggle(char a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall DisplayMode_Toggle(char a1)
{
  char result; // al

  if ( a1 ) /*0x6842f2*/
  {
    result = MEMORY[0xA8EB84]; /*0x6842f4*/
    if ( MEMORY[0x886FB8] != MEMORY[0xA8EB84] || MEMORY[0x886FBC] != MEMORY[0xA8EB88] ) /*0x68430f*/
    {
      Debug::Log(MEMORY[0x83D868], MEMORY[0xA8EB84], MEMORY[0xA8EB88]); /*0x684318*/
      return ChangeVideoMode(MEMORY[0xA8EB84], MEMORY[0xA8EB88]); /*0x68432c*/
    }
  }
  else
  {
    result = MEMORY[0x886FB8]; /*0x684331*/
    if ( MEMORY[0x886FB8] != MEMORY[0xA8EB8C] ) /*0x68433e*/
    {
      result = MEMORY[0xA8EB90]; /*0x684346*/
      if ( MEMORY[0x886FBC] != MEMORY[0xA8EB90] ) /*0x68434d*/
      {
        Debug::Log(MEMORY[0x83D924]); /*0x684354*/
        return ChangeVideoMode(MEMORY[0xA8EB8C], MEMORY[0xA8EB90]); /*0x684368*/
      }
    }
  }
  return result; /*0x68436d*/
}
}
} // namespace gamemd

// 0x684370
namespace gamemd {
char WaitForMultiplayerLoadSync()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char WaitForMultiplayerLoadSync()
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

  if ( !MEMORY[0xA8B238][0] || MEMORY[0xA8B238][0] == 5 ) /*0x68438d*/
    return 1; /*0x68460b*/
  Timer::GetTicks(); /*0x684397*/
  TicksTimer = Timer::GetTicks(); /*0x6843b5*/
  v16 = 300; /*0x6843b9*/
  v13 = Timer::GetTicks(); /*0x6843cb*/
  v14 = 3600; /*0x6843d3*/
  AverageProgress = Progress::GetAverage((int)MEMORY[0xAC4F58]); /*0x6843e5*/
  while ( 1 )
  {
    EventQueue::Process(MEMORY[0x87F770]); /*0x6843ef*/
    Event::Dispatch(); /*0x6843f4*/
    v0 = 1; /*0x6843fe*/
    if ( MEMORY[0xA8B238][0] == 1 /*0x684418*/
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
    v3 = Progress::GetAverage((int)MEMORY[0xAC4F58]); /*0x684451*/
    if ( !v5 )
    {
      Multiplayer::ShowProgress(MEMORY[0xA8B238], *((_BYTE *)MEMORY[0xA8B230] + 13501) != 0 ? 200 : 100);
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
      Multiplayer::ShowProgress(MEMORY[0xA8B238], *((_BYTE *)MEMORY[0xA8B230] + 13501) != 0 ? 200 : 100);
    }
  }
  for ( i = 1; i < MEMORY[0xA8DA84]; ++i ) /*0x68453f*/
  {
    if ( Progress::GetWeighted((int)MEMORY[0xAC4F58], v0) < 0.999 ) /*0x68455b*/
    {
      v10 = *(char **)(MEMORY[0xA8DA78] + 4 * i); /*0x684562*/
      ToWideStringChar(v10); /*0x684567*/
      ToWideStringChar(v10); /*0x684570*/
      Debug::Log(); /*0x68457c*/
      v11 = *(_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * i) + 111); /*0x684591*/
      HandleNetworkPlayerDisconnect(v11, 1); /*0x684596*/
      if ( SessionClass::IsValidHouse((int)MEMORY[0xA8B238], *(#375 **)&HouseClass_Array->__pad_0[4 * v11]) ) /*0x6845aa*/
      {
        MEMORY[0xA8E2AC] = -1; /*0x6845bf*/
        memset(MEMORY[0xA8E258], 0, 0x28u); /*0x6845c9*/
        MEMORY[0xA8E280] = 0; /*0x6845cb*/
      }
      --i; /*0x6845cd*/
    }
    ++v0; /*0x6845d3*/
  }
  return 0; /*0x68452e*/
}
}
} // namespace gamemd

// 0x684C30
namespace gamemd {
int PostLoadInitScenario()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __usercall ScenarioClass_PostLoadInit@<eax>(int a1@<edi>)
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

  ++MEMORY[0xA8E7AC]; /*0x684c3f*/
  for ( i = 0; i < MEMORY[0xA8EB50]; ++i ) /*0x684c4c*/
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)MEMORY[0xA8EB44] + i) + 1248))(*((_DWORD *)MEMORY[0xA8EB44] + i)); /*0x684c58*/
  MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 2); /*0x684c6f*/
  if ( !MEMORY[0xA8ED6B] ) /*0x684c7b*/
  {
    TacticalClass::BuildCommandBar(&MEMORY[0x87F7E8], a1, 1); /*0x684c88*/
    if ( !MEMORY[0xA8B238][0] ) /*0x684c94*/
    {
      if ( MEMORY[0x8A38E0] ) /*0x684ca7*/
        v2 = *((_DWORD *)MEMORY[0xA8B230] + 132); /*0x684ca9*/
      else
        v2 = *((_DWORD *)MEMORY[0xA8B230] + 131); /*0x684cb1*/
      v3 = *(_DWORD *)((char *)MEMORY[0xA8B230] + 4 * v2 + 1586); /*0x684cb7*/
      *(_DWORD *)((char *)MEMORY[0xA8B230] + 13466) = v3; /*0x684cbe*/
      *(_DWORD *)((char *)MEMORY[0xA8B230] + 13462) = *(_DWORD *)((char *)MEMORY[0xA8B230] + 13466); /*0x684cd4*/
      *(_DWORD *)((char *)MEMORY[0xA8B230] + 13458) = *(_DWORD *)((char *)MEMORY[0xA8B230] + 13462); /*0x684ce9*/
      *(_DWORD *)((char *)MEMORY[0xA8B230] + 13454) = *(_DWORD *)((char *)MEMORY[0xA8B230] + 13458); /*0x684d03*/
      v34 = ((__int16)v3 << 8) + 128; /*0x684d09*/
      v35 = (SHIWORD(v3) << 8) + 128; /*0x684d21*/
      GroundHeight = 0; /*0x684d2b*/
      GroundHeight = Cell::GetGroundHeight(&v34); /*0x684d3e*/
      TacticalClass::SetPositionThunk((int)&v34); /*0x684d42*/
    }
  }
  v4 = MEMORY[0xB0E790]; /*0x684d47*/
  for ( j = 0; j < MEMORY[0xB0E790]; ++j ) /*0x684d50*/
  {
    v6 = (_DWORD *)*((_DWORD *)MEMORY[0xB0E784] + j); /*0x684d5c*/
    if ( (Debug::AccumFlags(v6) & 4) != 0 ) /*0x684d68*/
    {
      v7 = TeamClass::FindOrCreate(v6); /*0x684d77*/
      if ( unk_8B41B8 < unk_8B41B0 /*0x684da9*/
        || (unk_8B41B5 || !unk_8B41B0)
        && unk_8B41BC > 0
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(unk_8B41A8 + 8))(
             &unk_8B41A8,
             unk_8B41B0 + unk_8B41BC,
             0) )
      {
        v8 = unk_8B41B8++; /*0x684db6*/
        *((_DWORD *)unk_8B41AC + v8) = v7; /*0x684dc5*/
      }
    }
    if ( (Debug::AccumFlags(v6) & 0x10) != 0 ) /*0x684dd1*/
    {
      v9 = TeamClass::FindOrCreate(v6); /*0x684de0*/
      if ( MEMORY[0x8B40D8] < MEMORY[0x8B40D0] /*0x684e13*/
        || (MEMORY[0x8B40D5] || !MEMORY[0x8B40D0])
        && MEMORY[0x8B40DC] > 0
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0x8B40C8] + 8))(
             &MEMORY[0x8B40C8],
             MEMORY[0x8B40D0] + MEMORY[0x8B40DC],
             0) )
      {
        v10 = MEMORY[0x8B40D8]++; /*0x684e20*/
        *((_DWORD *)MEMORY[0x8B40CC] + v10) = v9; /*0x684e2f*/
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
    v4 = MEMORY[0xB0E790]; /*0x684ea2*/
  }
  v18 = 0; /*0x684eb6*/
  --MEMORY[0xA8E7AC]; /*0x684ebb*/
  if ( v4 > 0 ) /*0x684ec1*/
  {
    do /*0x684efb*/
    {
      v19 = *((_DWORD *)MEMORY[0xB0E784] + v18); /*0x684ec8*/
      if ( (unsigned __int8)TagClass::HasValidHouse(v19) ) /*0x684ecd*/
      {
        v20 = HouseClass::FindOwner(*(void **)(*(_DWORD *)(*(_DWORD *)(v19 + 160) + 164) + 180)); /*0x684ee8*/
        ++*(_DWORD *)(v20 + 636); /*0x684eed*/
      }
      ++v18; /*0x684ef8*/
    }
    while ( v18 < MEMORY[0xB0E790] ); /*0x684efb*/
  }
  if ( *((_BYTE *)MEMORY[0xA8B230] + 13490) ) /*0x684f02*/
  {
    v21 = 0; /*0x684f12*/
    for ( k = 0; v21 < HouseClass_Count; k = v21 ) /*0x684f1a*/
    {
      v22 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * v21]; /*0x684f23*/
      if ( v22 ) /*0x684f28*/
      {
        v23 = (*(int (__stdcall **)(int))(*(_DWORD *)(v22 + 36) + 24))(v22 + 36); /*0x684f34*/
        v24 = *(_DWORD *)MEMORY[0xB0F4EC]->__pad_0; /*0x684f3b*/
        if ( v23 > *(_DWORD *)(*(_DWORD *)MEMORY[0xB0F4EC]->__pad_0 + 184) ) /*0x684f43*/
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
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x684f98*/
  for ( m = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); m; m = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) ) /*0x684fa9*/
    House::AnnounceUpgrade(m, -1); /*0x684faf*/
  MapClass::ProcessRegion(&MEMORY[0x87F7E8]); /*0x684fc7*/
  Terrain::ConnectivityGraph(&MEMORY[0x87F7E8]); /*0x684fd1*/
  MapClass::BuildSubzones(&MEMORY[0x87F7E8]); /*0x684fdb*/
  MarkCliffEdgePassability(&MEMORY[0x87F7E8]); /*0x684fe5*/
  if ( !MEMORY[0xA8ED78] ) /*0x684ff0*/
  {
    v27 = __2_YAPAXI_Z(0x100u); /*0x684ffc*/
    if ( v27 ) /*0x685003*/
    {
      v34 = 2688; /*0x68500f*/
      v35 = 2688; /*0x685013*/
      GroundHeight = 0; /*0x685017*/
      v28 = WarheadTypeClass::applyDamage(MEMORY[0x83DA90]); /*0x68501b*/
      MEMORY[0xA8ED78] = ParticleSystemClass::Constructor( /*0x685040*/
                           (int)v27,
                           *((_DWORD *)MEMORY[0xA83D6C] + v28),
                           &v34,
                           0,
                           0,
                           &stru_B05488,
                           0);
    }
    else
    {
      MEMORY[0xA8ED78] = 0; /*0x685047*/
    }
  }
  if ( MEMORY[0x8871E0][1].?[11] ) /*0x685052*/
  {
    LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x685063*/
    for ( n = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); n; n = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) ) /*0x685076*/
    {
      if ( Building::GetNthOfType(n) ) /*0x68507a*/
      {
        if ( !Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, MEMORY[0x8871E0][1].?[10] - 1) ) /*0x68509e*/
        {
          v30 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x6850b1*/
          if ( v30 ) /*0x6850b8*/
          {
            v31 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)n + 72))(n, &v34); /*0x6850cd*/
            AnimClass::ctor(v30, (void *)MEMORY[0x8871E0][1].?[11], v31, 0, 1, (void *)0x600, 0, 0); /*0x6850e0*/
          }
        }
      }
    }
  }
  RadarClass::SetGlobal((void *)MEMORY[0x8871E0]->DetailMinFrameRateNormal); /*0x6850fd*/
  return Map_Init(MEMORY[0x8871E0]->DetailBufferZoneWidth); /*0x685110*/
}
}
} // namespace gamemd

// 0x6851F0
namespace gamemd {
int ScenarioClass_Reset()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int ScenarioClass_Reset()
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

  *((_DWORD *)MEMORY[0xA8B230] + 133) = 1000000; /*0x6851fc*/
  *((_BYTE *)MEMORY[0xA8B230] + 536) = 1; /*0x68520c*/
  MEMORY[0x83D834] = 0x4000; /*0x685219*/
  EndBufferMixer((int *)MEMORY[0x87E758], 0x4000); /*0x68521f*/
  AudioQueue::DrainAll(); /*0x685224*/
  HouseClass_Player = 0; /*0x685231*/
  ScenarioClass::InitTimer((int)MEMORY[0xA8B230]); /*0x685237*/
  LightningStorm::End(); /*0x68523c*/
  for ( i = MEMORY[0xA8E978] - 1; i >= 0; --i ) /*0x68524c*/
  {
    if ( (*(int (__stdcall **)(int))(*(_DWORD *)(*((_DWORD *)MEMORY[0xA8E96C] + i) + 4) + 12))(*((_DWORD *)MEMORY[0xA8E96C] /*0x68526c*/
                                                                                               + i) + 4) == 18
      && i < MEMORY[0xA8E978] )
    {
      v1 = i; /*0x68526f*/
      if ( i < --MEMORY[0xA8E978] ) /*0x685279*/
      {
        do /*0x685291*/
        {
          ++v1; /*0x685281*/
          *((_DWORD *)MEMORY[0xA8E96C] + v1 - 1) = *((_DWORD *)MEMORY[0xA8E96C] + v1); /*0x685285*/
        }
        while ( v1 < MEMORY[0xA8E978] ); /*0x685291*/
      }
    }
  }
  Game::DestroyAllObjects(); /*0x685297*/
  v2 = 0; /*0x6852a1*/
  if ( MEMORY[0xA8ED38] > 0 ) /*0x6852a5*/
  {
    v3 = MEMORY[0xA8E970]; /*0x6852a7*/
    do /*0x6852b2*/
    {
      v4 = *((_DWORD *)MEMORY[0xA8ED2C] + v2); /*0x6852b2*/
      if ( MEMORY[0xA8E978] < v3 ) /*0x6852bd*/
        goto LABEL_14; /*0x6852bd*/
      if ( !MEMORY[0xA8E975] && v3 || MEMORY[0xA8E97C] <= 0 ) /*0x6852d3*/
        goto LABEL_16; /*0x6852d3*/
      if ( (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xA8E968] + 8))( /*0x6852e4*/
             &MEMORY[0xA8E968],
             v3 + MEMORY[0xA8E97C],
             0) )
      {
LABEL_14:
        v5 = MEMORY[0xA8E978]++; /*0x6852f1*/
        *((_DWORD *)MEMORY[0xA8E96C] + v5) = v4; /*0x685300*/
      }
      v3 = MEMORY[0xA8E970]; /*0x685303*/
LABEL_16:
      ++v2; /*0x685308*/
    }
    while ( v2 < MEMORY[0xA8ED38] ); /*0x6852b2*/
  }
  MapClass::FreeAllCells((int *)&MEMORY[0x87F7E8]); /*0x685313*/
  MEMORY[0x87F848] = 0; /*0x685322*/
  if ( MEMORY[0x87F83C] && MEMORY[0x87F845] ) /*0x685332*/
  {
    __3_YAXPAX_Z(MEMORY[0x87F83C]); /*0x685335*/
    MEMORY[0x87F83C] = 0; /*0x68533d*/
  }
  MEMORY[0x87F845] = 0; /*0x685343*/
  MEMORY[0x87F840] = 0; /*0x685349*/
  Map_Reset_6E5570(); /*0x68534f*/
  v6 = 0; /*0x685354*/
  for ( j = 0; j < 2050; j += 41 ) /*0x685356*/
  {
    v8 = MEMORY[0xA8B230]; /*0x685358*/
    if ( (unsigned int)j < 0x802 && *((_BYTE *)MEMORY[0xA8B230] + j + 7344) ) /*0x685365*/
    {
      *((_BYTE *)MEMORY[0xA8B230] + j + 7344) = 0; /*0x68536e*/
      v8[13482] = 1; /*0x685377*/
      HouseClass::UpdateAllTypes(v6); /*0x68537e*/
    }
    ++v6; /*0x685386*/
  }
  if ( MEMORY[0x887324] ) /*0x685398*/
    ((void (__thiscall *)(LPPERSISTSTREAM, int))MEMORY[0x887324]->__tail_0[1].QueryInterface)(MEMORY[0x887324], 1); /*0x68539e*/
  v9 = __2_YAPAXI_Z(0xE18u); /*0x6853a6*/
  if ( v9 ) /*0x6853b0*/
    v10 = (IPersistStream *)TacticalMap::Construct((int)v9); /*0x6853b4*/
  else
    v10 = 0; /*0x6853bb*/
  MEMORY[0x887324] = v10; /*0x6853bf*/
  Map_Setup_6DA980(v10); /*0x6853c4*/
  byte_829AE4 = 0; /*0x6853ce*/
  while ( MEMORY[0xA8E370] ) /*0x6853d6*/
  {
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)MEMORY[0xA8E364] + 44))(*(_DWORD *)MEMORY[0xA8E364]) == 8 ) /*0x6853e7*/
    {
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)MEMORY[0xA8E364] + 8))(*(_DWORD *)MEMORY[0xA8E364]); /*0x6853f3*/
    }
    else if ( *(_DWORD *)MEMORY[0xA8E364] ) /*0x6853fe*/
    {
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0xA8E364] + 32))(*(_DWORD *)MEMORY[0xA8E364], 1); /*0x685408*/
    }
  }
  byte_829AE4 = 1; /*0x685418*/
  while ( MEMORY[0xB0E790] ) /*0x685421*/
  {
    if ( *(_DWORD *)MEMORY[0xB0E784] ) /*0x685429*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0xB0E784] + 32))(*(_DWORD *)MEMORY[0xB0E784], 1); /*0x685433*/
  }
  unk_8B41B8 = 0; /*0x685443*/
  if ( unk_8B41AC && unk_8B41B5 ) /*0x685453*/
  {
    __3_YAXPAX_Z(unk_8B41AC); /*0x685456*/
    unk_8B41AC = 0; /*0x68545e*/
  }
  unk_8B41B5 = 0; /*0x685469*/
  unk_8B41B0 = 0; /*0x685471*/
  MEMORY[0x8B40D8] = 0; /*0x685477*/
  if ( MEMORY[0x8B40CC] && MEMORY[0x8B40D5] ) /*0x685485*/
  {
    __3_YAXPAX_Z(MEMORY[0x8B40CC]); /*0x685488*/
    MEMORY[0x8B40CC] = 0; /*0x685490*/
  }
  MEMORY[0x8B40D5] = 0; /*0x68549b*/
  MEMORY[0x8B40D0] = 0; /*0x6854a1*/
  *((_DWORD *)MEMORY[0xA8B230] + 3433) = 3600; /*0x6854a7*/
  *((_DWORD *)MEMORY[0xA8B230] + 3434) = *((_DWORD *)MEMORY[0xA8B230] + 3433); /*0x6854bc*/
  *((_DWORD *)MEMORY[0xA8B230] + 3435) = *((_DWORD *)MEMORY[0xA8B230] + 3433); /*0x6854cd*/
  *((_BYTE *)MEMORY[0xA8B230] + 13744) = 0; /*0x6854d8*/
  *((_BYTE *)MEMORY[0xA8B230] + 13775) = 0; /*0x6854e4*/
  *((_BYTE *)MEMORY[0xA8B230] + 13806) = 0; /*0x6854f0*/
  *((_BYTE *)MEMORY[0xA8B230] + 13837) = 0; /*0x6854fb*/
  Map_Reset_5549A0(); /*0x685501*/
  Map_Reset(); /*0x685506*/
  sub_4C5470(); /*0x68550b*/
  CleanupVeinholeSystem(); /*0x685510*/
  BuildingClass::FreeUpgradeQueue(); /*0x685515*/
  BuildingClass::FreeUpgradeQueue2(); /*0x68551a*/
  Stream::FlushAndReset(&MEMORY[0x87F5D8]); /*0x685524*/
  LoadGame::CleanupArray(&g_MissionQueueFrame); /*0x68552e*/
  LoadGame::ClearAllSlots(MEMORY[0x887888]); /*0x685538*/
  PlanningNodeClass::CleanupAll(); /*0x68553d*/
  MEMORY[0x87F8D4] = 0; /*0x68554f*/
  MEMORY[0x87F8D8] = 0; /*0x685554*/
  MEMORY[0x87F8DC] = 0; /*0x68555a*/
  MEMORY[0x87F8E0] = 0; /*0x685560*/
  Debug::Log(); /*0x685566*/
  MouseClass::HandleClick(&MEMORY[0x87F7E8]); /*0x685573*/
  Debug::Log(); /*0x68557d*/
  (*(void (__thiscall **)(int *))(MEMORY[0x87F778] + 12))(&MEMORY[0x87F778]); /*0x685590*/
  Debug::Log(); /*0x685598*/
  MEMORY[0xA8ECC8] = 0; /*0x6855a7*/
  if ( MEMORY[0xA8ECBC] && MEMORY[0xA8ECC5] ) /*0x6855b5*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8ECBC]); /*0x6855b8*/
    MEMORY[0xA8ECBC] = 0; /*0x6855c0*/
  }
  MEMORY[0xA8ECC5] = 0; /*0x6855cb*/
  MEMORY[0xA8ECC0] = 0; /*0x6855d1*/
  Debug::Log(); /*0x6855d7*/
  v11 = (char *)MEMORY[0xA8B230] + 1586; /*0x6855e4*/
  v12 = 702; /*0x6855e9*/
  do /*0x6855fa*/
  {
    *v11++ = dword_B05458; /*0x6855f4*/
    --v12; /*0x6855f9*/
  }
  while ( v12 ); /*0x6855fa*/
  Debug::Log(); /*0x685601*/
  Credits::Screen(); /*0x685609*/
  if ( MEMORY[0xA8ED78] ) /*0x685616*/
  {
    ScenarioClass::DestroyAndClearVector(); /*0x685618*/
    if ( MEMORY[0xA8ED78] ) /*0x685625*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)MEMORY[0xA8ED78] + 32))(MEMORY[0xA8ED78], 1); /*0x68562b*/
    MEMORY[0xA8ED78] = 0; /*0x68562e*/
  }
  *((_BYTE *)MEMORY[0xA8B230] + 536) = 0; /*0x68563a*/
  Map_Reset_734210(); /*0x685640*/
  Selection::ClearGlobals(0); /*0x685647*/
  result = Map_Reset_660C50(); /*0x68564c*/
  *((_DWORD *)MEMORY[0xA8B230] + 133) = 1000000; /*0x685659*/
  return result; /*0x685657*/
}
}
} // namespace gamemd

// 0x687CE0
namespace gamemd {
int SaveScenarioToINI()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__usercall SaveScenarioToINI@<eax>(RawFileClass *Source@<ecx>, ScenarioClass *a2@<edx>, int a3@<edi>)
{
  CCFileClass *v4; // eax
  char v5; // al
  char v7; // [esp+Bh] [ebp-F1h]
  char *v9; // [esp+10h] [ebp-ECh] BYREF
  INIClass a1; // [esp+14h] [ebp-E8h] BYREF
  char v11; // [esp+54h] [ebp-A8h]
  MultiplayerGameMode aP1[3]; // [esp+6Ch] [ebp-90h] BYREF
  _BYTE v13[12]; // [esp+C4h] [ebp-38h] BYREF
  CCINIClass *v15; // [esp+D0h] [ebp-2Ch]
  int var24[9]; // [esp+D8h] [ebp-24h] BYREF

  a1.headNode[0] = 0; /*0x687cf4*/
  a1.headNode[1] = 0; /*0x687cf8*/
  GenericList::Constructor(&a1.headNode[2]); /*0x687cfc*/
  a1.headNode[2] = (int)&List<INIClass::INISection *>::`vftable'; /*0x687d05*/
  Node::Init(&a1.__pad_20[8]); /*0x687d0d*/
  a1.INIClass_field_3C = 0; /*0x687d17*/
  v11 = 0; /*0x687d1d*/
  *(_DWORD *)a1.__pad_0 = &CCINIClass_Vtable; /*0x687d21*/
  if ( MEMORY[0xA8D63C].__pad_14B0[639] ) /*0x687d29*/
  {
    v4 = CCFileClass::Construct(aP1, Source->__pad_0); /*0x687d34*/
    v5 = (*(int (__thiscall **)(CCFileClass *, _DWORD))(*(_DWORD *)v4->__pad_0 + 20))(v4, 0); /*0x687d3e*/
    *(_DWORD *)aP1[0].__pad_0 = &CCFileClass::`vftable'; /*0x687d48*/
    v7 = v5; /*0x687d50*/
    v15 = 0; /*0x687d54*/
    Vector::Clear((int)v13); /*0x687d5b*/
    *(_DWORD *)aP1[0].__pad_0 = &off_7E1668; /*0x687d64*/
    BufferIOFileClass::Dtor(aP1); /*0x687d6c*/
    if ( v7 ) /*0x687d75*/
    {
      CCFileClass::Construct(aP1, Source->__pad_0); /*0x687d7c*/
      CCINIClass::Load(&a1, aP1, 1, 0); /*0x687d8d*/
      *(_DWORD *)aP1[0].__pad_0 = &CCFileClass::`vftable'; /*0x687d99*/
      v15 = 0; /*0x687da1*/
      Vector::Clear((int)v13); /*0x687da8*/
      *(_DWORD *)aP1[0].__pad_0 = &off_7E1668; /*0x687db1*/
      BufferIOFileClass::Dtor(aP1); /*0x687db9*/
    }
  }
  ScenarioClass::SaveToINI((int)MEMORY[0xA8B230], a1.__pad_0, a2); /*0x687dce*/
  if ( (_BYTE)a2 ) /*0x687dd7*/
  {
    if ( g_Map_TiberiumConfig && g_Map_TiberiumConfig->field_0 ) /*0x687de3*/
    {
      MiniMap::SavePreviewToINI((char **)g_Map_TiberiumConfig, a1.__pad_0); /*0x687dec*/
    }
    else
    {
      unknown_libname_27(&v9); /*0x687df7*/
      MiniMap::Render(&v9); /*0x687e00*/
      MiniMap::SavePreviewToINI(&v9, a1.__pad_0); /*0x687e0e*/
      ComPtr::Dtor(&v9); /*0x687e17*/
    }
  }
  else
  {
    CCINIClass::WriteHouses(&a1); /*0x687e22*/
  }
  MapClass::SaveCellTagsToINI(&MEMORY[0x87F7E8], a1.__pad_0); /*0x687e31*/
  ObjectTypeClass::ReadDestroyAnim(a1.__pad_0); /*0x687e3a*/
  ReadFootINI(a1.__pad_0); /*0x687e43*/
  SaveInfantryToINI((int)&a1, a3, (int)Source); /*0x687e4c*/
  SaveAircraftToINI(a1.__pad_0); /*0x687e55*/
  sub_44FE60(&a1); /*0x687e5e*/
  OverlayClass::WriteINI(a1.__pad_0); /*0x687e67*/
  UnitTypeClass::ReadINIEntry(a1.__pad_0); /*0x687e70*/
  InfantryClass::SetMission(a1.__pad_0); /*0x687e79*/
  if ( !(_BYTE)a2 || MEMORY[0xA8D63C].__pad_14B0[639] ) /*0x687e8a*/
  {
    nullsub_34(&a1, 0); /*0x687e92*/
    ScriptTypeClass::ReadINI(a1.__pad_0, 0); /*0x687e9d*/
    TeamTypeClass::ReadScriptData(a1.__pad_0, 0); /*0x687ea8*/
    CCINIClass::ReadInfantryTypeList(a1.__pad_0, 0); /*0x687eb3*/
  }
  ReadAudioEventINI(a1.__pad_0); /*0x687ebc*/
  SaveTriggerTagsToINI(a1.__pad_0); /*0x687ec5*/
  RawFileClass::Construct(var24, Source); /*0x687ed2*/
  INIClass::WriteDigest(&a1, (CCINIClass *)var24, 1); /*0x687ee5*/
  RawFileClass::Dtor(var24); /*0x687ef1*/
  return HashTable::DestroyHashTableINIClass((void **)&a1); /*0x687eff*/
}
}
} // namespace gamemd

// 0x687F10
namespace gamemd {
char SessionClass_AssignHouses()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char SessionClass_AssignHouses()
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

  v0 = MEMORY[0xA8DA84]; /*0x687f15*/
  v1 = 0; /*0x687f1b*/
  for ( i = MEMORY[0xA8DA84]; v1 < v0; ++v1 ) /*0x687f23*/
  {
    v2 = *(_DWORD *)(MEMORY[0xA8DA78] + 4 * v1); /*0x687f2a*/
    if ( *(_DWORD *)(v2 + 75) == -3 ) /*0x687f31*/
      SessionClass::SetPlayerOption(v2, 0); /*0x687f35*/
  }
  v32[0] = 0; /*0x687f42*/
  v32[1] = 0; /*0x687f49*/
  MEMORY[0xAC1198] = 0; /*0x687f4d*/
  if ( v0 > 0 ) /*0x687f53*/
  {
    v31 = v0; /*0x687f59*/
    do /*0x688146*/
    {
      v3 = -1; /*0x687f63*/
      v27 = -1; /*0x687f66*/
      v4 = 0; /*0x687f6e*/
      v5 = MEMORY[0xA8DA78]; /*0x687f70*/
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
      v6 = *(_DWORD *)(MEMORY[0xA8DA78] + 4 * v27); /*0x687fa0*/
      *((_BYTE *)v32 + v27) = 1; /*0x687fa3*/
      v7 = __2_YAPAXI_Z(0x160B8u); /*0x687fa8*/
      if ( v7 ) /*0x687fb2*/
        v8 = HouseClass::Construct((int)v7, *((_DWORD *)g_SuperWeaponTypeCount + *(_DWORD *)(v6 + 75))); /*0x687fc8*/
      else
        v8 = 0; /*0x687fcc*/
      if ( MEMORY[0xA8B238][0] == 4 ) /*0x687fd5*/
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
        if ( MEMORY[0x83DC8C] ) /*0x688051*/
        {
          strncpy(v35, MEMORY[0x83DC8C], 0x14u); /*0x688065*/
          v36 = 0; /*0x68806d*/
        }
        else
        {
          v35[0] = (unsigned __int8)MEMORY[0x83DC8C]; /*0x688053*/
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
      sub_4FCE00(*(_DWORD *)(v6 + 83), *(_DWORD *)(v6 + 75), MEMORY[0xA8B25C]); /*0x6880c4*/
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
        MEMORY[0xAC1198] = v8; /*0x68811c*/
      *(_DWORD *)(v8 + 468) = g_RulesInitConfig; /*0x68812c*/
      HouseClass::SetCombatPower(v8, 1); /*0x688132*/
      *(_DWORD *)(v6 + 111) = *(_DWORD *)(v8 + 48); /*0x68813a*/
      --v31; /*0x688142*/
    }
    while ( v31 ); /*0x688146*/
  }
  v10 = 0; /*0x688152*/
  v31 = MEMORY[0xA8B274]; /*0x688154*/
  v11 = MEMORY[0xA8B29C]; /*0x688158*/
  do /*0x6882cb*/
  {
    if ( v10 < v31 ) /*0x688161*/
    {
      v12 = *v11; /*0x688167*/
      if ( *v11 != -1 && v12 != -3 ) /*0x688175*/
      {
        v13 = v11[8]; /*0x68817b*/
        i = v10 + 1; /*0x688184*/
        v14 = __2_YAPAXI_Z(0x160B8u); /*0x688188*/
        if ( v14 ) /*0x688192*/
          v15 = HouseClass::Construct((int)v14, *((_DWORD *)g_SuperWeaponTypeCount + v12)); /*0x6881a5*/
        else
          v15 = 0; /*0x6881a9*/
        v16 = g_RulesInitConfig; /*0x6881ab*/
        *(_BYTE *)(v15 + 492) = 0; /*0x6881b1*/
        *(_DWORD *)(v15 + 468) = v16; /*0x6881b8*/
        sub_4FCE00(v13, v12, MEMORY[0xA8B25C]); /*0x6881c8*/
        *(_DWORD *)(v15 + 90196) = SessionClass::GetPlayerColorScheme(v13); /*0x6881da*/
        HouseClass::GetColor((char *)v15); /*0x6881e0*/
        ComputeSessionColorVector(v15); /*0x6881e7*/
        *(_DWORD *)(v15 + 90200) = v11[16]; /*0x6881ef*/
        v17 = v11[24]; /*0x6881f5*/
        *(_DWORD *)(v15 + 90204) = v17; /*0x6881fb*/
        if ( v17 != -1 ) /*0x688201*/
          *((_BYTE *)MEMORY[0xA8B230] + 4576) = 1; /*0x688209*/
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
        String = GetStringCSF(g_Str_TXT_COMPUTER, 0, MEMORY[0x83D838], 4032); /*0x688263*/
        wcscpy((wchar_t *)(v15 + 90154), String); /*0x688270*/
        if ( MEMORY[0xA8B238][0] ) /*0x68827f*/
          *(_DWORD *)(v15 + 588) = MEMORY[0x8871E0][1].SmallVisceroid; /*0x68828d*/
        v19 = *(v11 - 8); /*0x688299*/
        if ( MEMORY[0xA8DA84] > 1 && HIBYTE(MEMORY[0x8871E0][1].?[1]) && v19 > 0 ) /*0x6882b3*/
          --v19; /*0x6882b5*/
        HouseClass::SetCombatPower(v15, v19); /*0x6882b9*/
        v10 = i; /*0x6882be*/
      }
    }
    ++v11; /*0x6882c2*/
  }
  while ( (int)v11 < (int)MEMORY[0xA8B2BC] ); /*0x6882cb*/
  v20 = __2_YAPAXI_Z(0x160B8u); /*0x6882de*/
  if ( v20 ) /*0x6882e4*/
  {
    v21 = SuperWeaponTypeClass::FindByName(g_INI_Key_Neutral); /*0x6882eb*/
    v22 = HouseClass::Construct((int)v20, *((_DWORD *)g_SuperWeaponTypeCount + v21)); /*0x688303*/
  }
  else
  {
    v22 = 0; /*0x688307*/
  }
  *(_DWORD *)(v22 + 90196) = Network_Assign(MEMORY[0x836ECC]); /*0x68831a*/
  HouseClass::GetColor((char *)v22); /*0x688320*/
  v23 = __2_YAPAXI_Z(0x160B8u); /*0x68832f*/
  if ( v23 ) /*0x688336*/
  {
    v24 = SuperWeaponTypeClass::FindByName(MEMORY[0x817318]); /*0x68833d*/
    v25 = HouseClass::Construct((int)v23, *((_DWORD *)g_SuperWeaponTypeCount + v24)); /*0x688356*/
  }
  else
  {
    v25 = 0; /*0x68835a*/
  }
  *(_DWORD *)(v25 + 90196) = Network_Assign(MEMORY[0x836ECC]); /*0x68836d*/
  return HouseClass::GetColor((char *)v25); /*0x688378*/
}
}
} // namespace gamemd

// 0x6886B0
namespace gamemd {
int GenerateScenarioUnits()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (no pseudocode — ASM-only function)
}
} // namespace gamemd

// 0x688ED0
namespace gamemd {
int FindInfantryDeployPosition(int * a1, RadarClass * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall FindInfantryDeployPosition(int *a1, RadarClass *a2, int a3)
{
  RadarClass *v3; // esi
  _DWORD *v5; // eax
  int ClosestObjectCell; // eax
  int v7; // edx
  IUnknown *GroundHeight; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // esi
  int v16; // edi
  int v17; // ebp
  unsigned __int16 v18; // bx
  int v19; // ebx
  int v20; // ebp
  char *v21; // ebp
  int v22; // esi
  int v23; // ebx
  int *v24; // edi
  _DWORD *v25; // eax
  int v26; // eax
  IUnknown *v27; // eax
  IUnknown *v28; // [esp+10h] [ebp-5Ch] BYREF
  int v29; // [esp+14h] [ebp-58h]
  ScenarioClass *v30; // [esp+18h] [ebp-54h]
  IUnknown *v31; // [esp+1Ch] [ebp-50h]
  RadarClass *v32; // [esp+20h] [ebp-4Ch]
  IUnknown *v33; // [esp+24h] [ebp-48h]
  RadarClass *v34; // [esp+28h] [ebp-44h]
  int *v35; // [esp+2Ch] [ebp-40h]
  int v36; // [esp+30h] [ebp-3Ch]
  int v37; // [esp+34h] [ebp-38h]
  IUnknown *v38; // [esp+38h] [ebp-34h]
  int v39; // [esp+3Ch] [ebp-30h] BYREF
  int v40; // [esp+40h] [ebp-2Ch]
  IUnknown *v41; // [esp+44h] [ebp-28h]
  int v42; // [esp+48h] [ebp-24h] BYREF
  int v43; // [esp+4Ch] [ebp-20h]
  int v44; // [esp+50h] [ebp-1Ch]
  _DWORD v45[3]; // [esp+54h] [ebp-18h] BYREF
  _DWORD v46[3]; // [esp+60h] [ebp-Ch] BYREF

  v3 = a2; /*0x688ed7*/
  v34 = a2; /*0x688ee3*/
  v35 = a1; /*0x688ee7*/
  if ( LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (IUnknown *)a2, (TechnoClass *)1) ) /*0x688eeb*/
  {
    v39 = 0; /*0x688f07*/
    v40 = 0; /*0x688f0b*/
    v5 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)v3); /*0x688f0f*/
    ClosestObjectCell = Object::FindClosestObjectCell(v5, (IUnknown *)&v39, 0, 0); /*0x688f16*/
    if ( !ClosestObjectCell /*0x688f39*/
      || (*(int (__thiscall **)(int))(*(_DWORD *)ClosestObjectCell + 44))(ClosestObjectCell) == 15
      && (*(int (__thiscall **)(int *))(*a1 + 44))(a1) == 15 )
    {
      v7 = SHIWORD(v3->field_0) << 8; /*0x688f4f*/
      v42 = (SLOWORD(v3->field_0) << 8) + 128; /*0x688f52*/
      v43 = v7 + 128; /*0x688f62*/
      v44 = 0; /*0x688f66*/
      GroundHeight = (IUnknown *)Cell::GetGroundHeight(&v42); /*0x688f6a*/
      v9 = SHIWORD(v3->field_0); /*0x688f72*/
      v10 = (SLOWORD(v3->field_0) << 8) + 128; /*0x688f79*/
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
    v29 = Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)7); /*0x688fce*/
    v30 = 0; /*0x688fe6*/
    v37 = 0; /*0x688fea*/
    while ( 1 ) /*0x689032*/
    {
      v13 = SLOWORD(v3->field_0); /*0x689006*/
      v14 = SHIWORD(v3->field_0); /*0x689009*/
      v15 = MEMORY[0x87F8E4].field_28; /*0x68900d*/
      v36 = 0; /*0x689013*/
      v16 = *(_DWORD *)MEMORY[0x87F8E4].__pad_2C; /*0x689017*/
      v32 = (RadarClass *)(*(_DWORD *)MEMORY[0x87F8E4].__pad_2C + *(_DWORD *)&MEMORY[0x87F8E4].__pad_31[3] - 1); /*0x689025*/
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
      if ( v13 > MEMORY[0x87F8E4].field_28 + *(_DWORD *)&MEMORY[0x87F8E4].field_2D[3] - 1 ) /*0x689087*/
        v13 = MEMORY[0x87F8E4].field_28 + *(_DWORD *)&MEMORY[0x87F8E4].field_2D[3] - 1; /*0x689089*/
      if ( v13 < MEMORY[0x87F8E4].field_28 ) /*0x68908d*/
        LOWORD(v13) = MEMORY[0x87F8E4].field_28; /*0x68908f*/
      if ( v14 > (int)v32 ) /*0x689097*/
        v14 = (int)v32; /*0x689099*/
      if ( v14 < *(int *)MEMORY[0x87F8E4].__pad_2C ) /*0x68909d*/
        LOWORD(v14) = *(_WORD *)MEMORY[0x87F8E4].__pad_2C; /*0x68909f*/
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
        v19 = (__int16)v14; /*0x6890be*/
        v20 = (__int16)v13; /*0x6890c7*/
        v38 = (IUnknown *)(MEMORY[0x87F8E4].field_28 + *(_DWORD *)&MEMORY[0x87F8E4].field_2D[3] - 1); /*0x6890d0*/
        v39 = *(_DWORD *)MEMORY[0x87F8E4].__pad_2C + *(_DWORD *)&MEMORY[0x87F8E4].__pad_31[3] - 1; /*0x6890e5*/
        v32 = (RadarClass *)Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)1); /*0x6890fe*/
        if ( Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)0x63) >= 50 ) /*0x68910a*/
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
        v22 = Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)1); /*0x68913d*/
        if ( Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)0x63) >= 50 ) /*0x689156*/
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
      if ( LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (IUnknown *)&v28, (TechnoClass *)1) && !v36 ) /*0x6891cf*/
      {
        v42 = 0; /*0x6891e6*/
        v43 = 0; /*0x6891ea*/
        v25 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v28); /*0x6891ee*/
        v26 = Object::FindClosestObjectCell(v25, (IUnknown *)&v42, 0, 0); /*0x6891f5*/
        if ( !v26 /*0x689218*/
          || (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 44))(v26) == 15
          && (*(int (__thiscall **)(int *))(*v24 + 44))(v24) == 15 )
        {
          Coord::Subtract(v45, (IUnknown *)(((__int16)v28 << 8) + 128), (IUnknown *)((SHIWORD(v28) << 8) + 128), 0); /*0x68923d*/
          v27 = (IUnknown *)Cell::GetGroundHeight(v45); /*0x68924c*/
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
}
} // namespace gamemd

// 0x689790
namespace gamemd {
char E4Recv_689790::sub_689790(const char * a2, unsigned char * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_689790(const char *this, const char *a2, _BYTE *a3)
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
  *a3 = *(this + 40 * v3 + v3 + 7344); /*0x689811*/
  return 1; /*0x6897df*/
}
}
} // namespace gamemd

// 0x689820
namespace gamemd {
int E4Recv_689820::sub_689820(const char * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_689820(const char *this, const char *a2)
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
}
} // namespace gamemd

// 0x689960
namespace gamemd {
char E4Recv_689960::sub_689960(const char * a2, char a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_689960(const char *this, const char *a2, char a3)
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
  v6 = *(this + 40 * v3 + v3 + 9394); /*0x6899c1*/
  if ( v6 != a3 ) /*0x6899d5*/
  {
    *((_BYTE *)this + 40 * v3 + v3 + 9394) = a3; /*0x6899d7*/
    *((_BYTE *)this + 13482) = 1; /*0x6899d9*/
    TriggerActionQueue::ProcessAll((void *)v3); /*0x6899e2*/
  }
  return v6; /*0x6899a8*/
}
}
} // namespace gamemd

// 0x689A30
namespace gamemd {
char E4Recv_689A30::sub_689A30(const char * a2, unsigned char * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_689A30(const char *this, const char *a2, _BYTE *a3)
{
  int v3; // edi
  const char *i; // ebp

  v3 = 0; /*0x689a3d*/
  for ( i = this + 9354; strcmp(a2, i); i += 41 ) /*0x689a3f*/
  {
    if ( ++v3 >= 100 ) /*0x689a7d*/
      return 0; /*0x689a7d*/
  }
  if ( v3 < 0 ) /*0x689a8c*/
    return 0; /*0x689a86*/
  *a3 = *(this + 40 * v3 + v3 + 9394); /*0x689ab1*/
  return 1; /*0x689a7f*/
}
}
} // namespace gamemd

// 0x689AC0
namespace gamemd {
int E4Recv_689AC0::sub_689AC0(const char * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_689AC0(const char *this, const char *a2)
{
  int v2; // ebp
  const char *i; // edi

  v2 = 0; /*0x689ac8*/
  for ( i = this + 9354; strcmp(a2, i); i += 41 ) /*0x689aca*/
  {
    if ( ++v2 >= 100 ) /*0x689b08*/
      return -1; /*0x689b11*/
  }
  return v2; /*0x689b0a*/
}
}
} // namespace gamemd

// 0x68B8A0
namespace gamemd {
long long E4Recv_68B8A0::sub_68B8A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 __thiscall sub_68B8A0(void *this)
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
}
} // namespace gamemd

// 0x68C330
namespace gamemd {
int sub_68C330()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_68C330()
{
  MEMORY[0xB054D4] = 0; /*0x68c337*/
  MEMORY[0xB054D8] = 0; /*0x68c33c*/
  MEMORY[0xB054DC] = 1; /*0x68c341*/
  MEMORY[0xB054DD] = 0; /*0x68c348*/
  MEMORY[0xB054D0] = (int)&DynamicVectorClass<ColorScheme *>::`vftable'; /*0x68c34d*/
  MEMORY[0xB054E4] = 10; /*0x68c357*/
  MEMORY[0xB054E0] = 0; /*0x68c361*/
  return atexit(sub_68C370); /*0x68c36c*/
}
}
} // namespace gamemd

// 0x68C370
namespace gamemd {
void sub_68C370()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_68C370()
{
  MEMORY[0xB054D0] = (int)&VectorClass<ColorScheme *>::`vftable'; /*0x68c378*/
  if ( MEMORY[0xB054D4] && MEMORY[0xB054DD] ) /*0x68c38c*/
  {
    __3_YAXPAX_Z(MEMORY[0xB054D4]); /*0x68c38f*/
    MEMORY[0xB054D4] = 0; /*0x68c397*/
  }
  MEMORY[0xB054DD] = 0; /*0x68c39d*/
  MEMORY[0xB054D8] = 0; /*0x68c3a3*/
}
}
} // namespace gamemd

// 0x68CA50
namespace gamemd {
int FindBuildingAnimByName(AbstractClass * aP0, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall FindBuildingAnimByName(AbstractClass *aP0, int a2)
{
  int v2; // esi
  IUnknown *v5; // eax
  bool v6; // zf

  v2 = 0; /*0x68ca57*/
  if ( *(int *)stru_B05488.__pad_58 <= 0 ) /*0x68ca60*/
    return 0; /*0x68ca60*/
  v5 = (IUnknown *)stru_B05488.field_4C; /*0x68ca62*/
  while ( 1 ) /*0x68ca7a*/
  {
    v6 = _strcmpi(aP0, *(const void **)(*(&v5->field_0 + v2) + 772)) == 0; /*0x68ca7a*/
    v5 = (IUnknown *)stru_B05488.field_4C; /*0x68ca7c*/
    if ( v6 && *(_DWORD *)(*(_DWORD *)(stru_B05488.field_4C + 4 * v2) + 784) == a2 ) /*0x68ca8c*/
      break; /*0x68ca8c*/
    if ( ++v2 >= *(int *)stru_B05488.__pad_58 ) /*0x68ca97*/
      return 0; /*0x68ca97*/
  }
  if ( v2 < 0 ) /*0x68caa1*/
    return 0; /*0x68ca99*/
  else
    return *(_DWORD *)(stru_B05488.field_4C + 4 * v2); /*0x68caa3*/
}
}
} // namespace gamemd

// 0x68CB10
namespace gamemd {
int sub_68CB10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_68CB10()
{
  MEMORY[0xB054F8] = 0; /*0x68cb12*/
  MEMORY[0xB054FC] = 0; /*0x68cb17*/
  MEMORY[0xB05500] = 0; /*0x68cb1c*/
  MEMORY[0xB05504] = 0; /*0x68cb21*/
  return 0; /*0x68cb26*/
}
}
} // namespace gamemd

// 0x68CB30
namespace gamemd {
void sub_68CB30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_68CB30()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x68cb3c*/
  MEMORY[0xB05510] = Math::Sqrt(v0 + v0); /*0x68cb4e*/
}
}
} // namespace gamemd

// 0x68CB60
namespace gamemd {
void sub_68CB60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_68CB60()
{
  MEMORY[0xB05578] = MEMORY[0xB05510] / 60.0; /*0x68cb6c*/
}
}
} // namespace gamemd

// 0x68CB80
namespace gamemd {
void sub_68CB80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_68CB80()
{
  MEMORY[0xB05558] = 1.0 / MEMORY[0xB05578]; /*0x68cb8c*/
}
}
} // namespace gamemd

// 0x68CBA0
namespace gamemd {
void sub_68CBA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_68CBA0()
{
  MEMORY[0xB05550] = 0.0174532925199433 * 45.0; /*0x68cbac*/
}
}
} // namespace gamemd

// 0x68CBC0
namespace gamemd {
void sub_68CBC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_68CBC0()
{
  MEMORY[0xB05518] = 0.0174532925199433 * 60.0; /*0x68cbcc*/
}
}
} // namespace gamemd

// 0x68CBE0
namespace gamemd {
void sub_68CBE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_68CBE0()
{
  MEMORY[0xB054E8] = 0.0174532925199433 * 90.0; /*0x68cbec*/
}
}
} // namespace gamemd

// 0x68CC00
namespace gamemd {
long long sub_68CC00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_68CC00()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB054E8] - MEMORY[0xB05518]); /*0x68cc12*/
  result = Math::RoundToInt(v0 * MEMORY[0xB05510] * 0.5); /*0x68cc26*/
  MEMORY[0xB05580] = result; /*0x68cc2b*/
  return result; /*0x68cc30*/
}
}
} // namespace gamemd

// 0x68CC40
namespace gamemd {
void sub_68CC40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_68CC40()
{
  MEMORY[0xB05520] = Math::ArcTan((double)MEMORY[0xB05580] * 0.00390625); /*0x68cc57*/
}
}
} // namespace gamemd

// 0x68CC70
namespace gamemd {
void sub_68CC70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_68CC70()
{
  MEMORY[0xB05548] = Math::ArcTan((double)(2 * MEMORY[0xB05580]) / MEMORY[0xB05510]); /*0x68cc92*/
}
}
} // namespace gamemd

// 0x68CCA0
namespace gamemd {
long long sub_68CCA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_68CCA0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB05580]) + 0.5); /*0x68ccbb*/
  MEMORY[0xB05574] = result; /*0x68ccc0*/
  return result; /*0x68ccc6*/
}
}
} // namespace gamemd

// 0x68CCD0
namespace gamemd {
int sub_68CCD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_68CCD0()
{
  MEMORY[0xB05508] = 0; /*0x68ccd2*/
  MEMORY[0xB0550A] = 0; /*0x68ccd8*/
  return 0; /*0x68ccde*/
}
}
} // namespace gamemd

// 0x68CCE0
namespace gamemd {
int sub_68CCE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_68CCE0()
{
  MEMORY[0xB05538] = 0; /*0x68cce2*/
  MEMORY[0xB0553C] = 0; /*0x68cce7*/
  MEMORY[0xB05540] = 0; /*0x68ccec*/
  return 0; /*0x68ccf1*/
}
}
} // namespace gamemd

// 0x68CD00
namespace gamemd {
int sub_68CD00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_68CD00()
{
  MEMORY[0xB05570] = 0; /*0x68cd05*/
  MEMORY[0xB05568] = 128; /*0x68cd0f*/
  MEMORY[0xB0556C] = 128; /*0x68cd14*/
  return 128; /*0x68cd19*/
}
}
} // namespace gamemd

// 0x68F8A0
namespace gamemd {
int E4Recv_68F8A0::sub_68F8A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_68F8A0(int this)
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
  sprintf(Buffer, MEMORY[0x817F6C], v2); /*0x68f8c1*/
  v3 = strlen(Buffer) + 1; /*0x68f8d1*/
  v4 = __2_YAPAXI_Z(0x2Cu); /*0x68f8e8*/
  if ( v4 ) /*0x68f8ef*/
  {
    v5 = *(_DWORD *)(this + 12); /*0x68f8f8*/
    v6 = *(_DWORD *)(this + 4) + 214; /*0x68f8fd*/
    v4[1] = 590 - 12 * (v3 - 1) + *(_DWORD *)this; /*0x68f902*/
    v4[2] = v6; /*0x68f908*/
    v4[3] = Timer::GetTicks(); /*0x68f910*/
    v4[5] = 0; /*0x68f915*/
    v4[10] = v5; /*0x68f91c*/
    v4[6] = Buffer; /*0x68f91f*/
    v4[7] = 0; /*0x68f922*/
    v4[8] = 0; /*0x68f925*/
    *((_BYTE *)v4 + 36) = 0; /*0x68f928*/
    *v4 = &ScorePrintClass::`vftable'; /*0x68f92b*/
  }
  else
  {
    v4 = 0; /*0x68f934*/
  }
  v7 = *(_DWORD *)(this + 36); /*0x68f936*/
  v8 = (int *)(this + 28); /*0x68f93c*/
  if ( *(_DWORD *)(this + 44) < v7 /*0x68f95e*/
    || ((unsigned char)this->M41 || !v7)
    && (v9 = this->M48, v9 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*v8 + 8))(this + 28, v7 + v9, 0) )
  {
    v10 = *(_DWORD *)(this + 44); /*0x68f965*/
    v11 = *(_DWORD *)(this + 32); /*0x68f968*/
    *(_DWORD *)(this + 44) = v10 + 1; /*0x68f96e*/
    *(_DWORD *)(v11 + 4 * v10) = v4; /*0x68f971*/
  }
  v12 = *v8; /*0x68f974*/
  v15 = v4; /*0x68f97d*/
  for ( result = (*(int (__thiscall **)(int, _DWORD **))(v12 + 16))(this + 28, &v15); /*0x68f987*/
        result != -1;
        result = (*(int (__thiscall **)(int, _DWORD **))(v14 + 16))(this + 28, &v15) )
  {
    Screen::TransitionLoop((int *)this, 1); /*0x68f98d*/
    v14 = *v8; /*0x68f992*/
    v15 = v4; /*0x68f99b*/
  }
  return result; /*0x68f9a7*/
}
}
} // namespace gamemd

// 0x68FB10
namespace gamemd {
unsigned int * E4Recv_68FB10::sub_68FB10(unsigned int * a2, int a3, size_t BufferCount, wchar_t * Format, wchar_t * a6, int a7, int a8)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_68FB10(
        _DWORD *this,
        _DWORD *a2,
        int a3,
        size_t BufferCount,
        wchar_t *Format,
        wchar_t *a6,
        int a7,
        int a8)
{
  wchar_t *v8; // eax
  _DWORD *v10; // ecx
  int v11; // esi
  _DWORD *v12; // ecx
  int v13; // edi
  int v14; // eax
  CampaignScore *v16; // [esp+8h] [ebp-8Ch]
  wchar_t Buffer[64]; // [esp+14h] [ebp-80h] BYREF

  v8 = Format; /*0x68fb16*/
  if ( (int)Format >= (int)a6 ) /*0x68fb2b*/
    v8 = a6; /*0x68fb2d*/
  swprintf(Buffer, BufferCount, v8, v16); /*0x68fb3d*/
  v10 = (_DWORD *)*(this + 3); /*0x68fb42*/
  v11 = a8 - v10[2]; /*0x68fb5d*/
  (*(void (__thiscall **)(_DWORD *, int, wchar_t *, int, int, int))(*v10 + 12))(v10, a3, Buffer, a7, v11, 2); /*0x68fb6e*/
  v12 = (_DWORD *)*(this + 3); /*0x68fb71*/
  v13 = v12[2]; /*0x68fb7b*/
  v14 = (*(int (__thiscall **)(_DWORD *, wchar_t *))(*v12 + 8))(v12, Buffer); /*0x68fb7e*/
  *a2 = a7; /*0x68fb8a*/
  a2[1] = v11; /*0x68fb8c*/
  a2[2] = v14; /*0x68fb8f*/
  a2[3] = v13; /*0x68fb94*/
  return a2; /*0x68fb97*/
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
