// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x600320
namespace gamemd {
int sub_600320()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_600320()
{
  MEMORY[0xAC18B0] = 0; /*0x600322*/
  MEMORY[0xAC18B4] = 0; /*0x600327*/
  MEMORY[0xAC18B8] = 0; /*0x60032c*/
  MEMORY[0xAC18BC] = 0; /*0x600331*/
  return 0; /*0x600336*/
}
}
} // namespace gamemd

// 0x600340
namespace gamemd {
void sub_600340()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_600340()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x60034c*/
  MEMORY[0xAC1B40] = Math::Sqrt(v0 + v0); /*0x60035e*/
}
}
} // namespace gamemd

// 0x600370
namespace gamemd {
void sub_600370()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_600370()
{
  MEMORY[0xAC48A0] = MEMORY[0xAC1B40] / 60.0; /*0x60037c*/
}
}
} // namespace gamemd

// 0x600390
namespace gamemd {
void sub_600390()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_600390()
{
  MEMORY[0xAC4838] = 1.0 / MEMORY[0xAC48A0]; /*0x60039c*/
}
}
} // namespace gamemd

// 0x6003B0
namespace gamemd {
void sub_6003B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6003B0()
{
  MEMORY[0xAC4830] = 0.0174532925199433 * 45.0; /*0x6003bc*/
}
}
} // namespace gamemd

// 0x6003D0
namespace gamemd {
void sub_6003D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6003D0()
{
  MEMORY[0xAC1B88] = 0.0174532925199433 * 60.0; /*0x6003dc*/
}
}
} // namespace gamemd

// 0x6003F0
namespace gamemd {
void sub_6003F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6003F0()
{
  MEMORY[0xAC1898] = 0.0174532925199433 * 90.0; /*0x6003fc*/
}
}
} // namespace gamemd

// 0x600410
namespace gamemd {
long long sub_600410()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_600410()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xAC1898] - MEMORY[0xAC1B88]); /*0x600422*/
  result = Math::RoundToInt(v0 * MEMORY[0xAC1B40] * 0.5); /*0x600436*/
  MEMORY[0xAC48AC] = result; /*0x60043b*/
  return result; /*0x600440*/
}
}
} // namespace gamemd

// 0x600450
namespace gamemd {
void sub_600450()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_600450()
{
  MEMORY[0xAC1CA0] = Math::ArcTan((double)MEMORY[0xAC48AC] * 0.00390625); /*0x600467*/
}
}
} // namespace gamemd

// 0x600480
namespace gamemd {
void sub_600480()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_600480()
{
  MEMORY[0xAC4610] = Math::ArcTan((double)(2 * MEMORY[0xAC48AC]) / MEMORY[0xAC1B40]); /*0x6004a2*/
}
}
} // namespace gamemd

// 0x6004B0
namespace gamemd {
long long sub_6004B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_6004B0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xAC48AC]) + 0.5); /*0x6004cb*/
  MEMORY[0xAC489C] = result; /*0x6004d0*/
  return result; /*0x6004d6*/
}
}
} // namespace gamemd

// 0x6004E0
namespace gamemd {
int sub_6004E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6004E0()
{
  MEMORY[0xAC1B38] = 0; /*0x6004e2*/
  MEMORY[0xAC1B3A] = 0; /*0x6004e8*/
  return 0; /*0x6004ee*/
}
}
} // namespace gamemd

// 0x6004F0
namespace gamemd {
int sub_6004F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6004F0()
{
  MEMORY[0xAC1DF8] = 0; /*0x6004f2*/
  MEMORY[0xAC1DFC] = 0; /*0x6004f7*/
  MEMORY[0xAC1E00] = 0; /*0x6004fc*/
  return 0; /*0x600501*/
}
}
} // namespace gamemd

// 0x600510
namespace gamemd {
int sub_600510()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_600510()
{
  MEMORY[0xAC4890] = 0; /*0x600515*/
  MEMORY[0xAC4888] = 128; /*0x60051f*/
  MEMORY[0xAC488C] = 128; /*0x600524*/
  return 128; /*0x600529*/
}
}
} // namespace gamemd

// 0x600530
namespace gamemd {
int sub_600530()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_600530()
{
  sub_6B9450(MEMORY[0xAC4848]); /*0x600535*/
  return atexit(unknown_libname_26); /*0x600545*/
}
}
} // namespace gamemd

// 0x600550
namespace gamemd {
int unknown_libname_26()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_26()
{
  HashTable::Clear((int)MEMORY[0xAC4848]); /*0x600555*/
}
}
} // namespace gamemd

// 0x600660
namespace gamemd {
ObjectClass * ReadPointerFromECX()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ObjectClass *__thiscall ReadPointerFromECX(void *this)
{
  return *(ObjectClass **)this; /*0x600662*/
}
}
} // namespace gamemd

// 0x6006B0
namespace gamemd {
int sub_6006B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6006B0()
{
  unsigned int v0; // eax
  int v1; // ecx

  v0 = 128; /*0x6006b0*/
  MEMORY[0xAC1B68] = 0.2; /*0x6006b7*/
  MEMORY[0xAC1B70] = 0.8; /*0x6006cb*/
  MEMORY[0xAC1B78] = 128; /*0x6006df*/
  v1 = 0; /*0x6006e4*/
  do /*0x6006e9*/
  {
    ++v1; /*0x6006e6*/
    v0 >>= 1; /*0x6006e7*/
  }
  while ( v0 ); /*0x6006e9*/
  MEMORY[0xAC1B58] = 0; /*0x6006eb*/
  MEMORY[0xAC1B54] = v1 - 1; /*0x6006f9*/
  MEMORY[0xAC1B4C] = 0; /*0x6006ff*/
  MEMORY[0xAC1B5C] = 0; /*0x600705*/
  MEMORY[0xAC1B50] = 1 << (v1 - 1); /*0x60070b*/
  MEMORY[0xAC1B48] = __2_YAPAXI_Z(4 * (1 << (v1 - 1))); /*0x600723*/
  memset(MEMORY[0xAC1B48], 0, 4 * MEMORY[0xAC1B50]); /*0x600729*/
  MEMORY[0xAC1B60] = (int (__thiscall *)(_DWORD))ReadPointerFromECX; /*0x600730*/
  return atexit(sub_600750); /*0x600742*/
}
}
} // namespace gamemd

// 0x600750
namespace gamemd {
void sub_600750()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_600750()
{
  unsigned int v0; // eax
  unsigned int i; // edi
  _DWORD *v2; // esi
  void *v3; // eax
  unsigned int v4; // ecx
  int *v5; // ebx
  int v6; // esi
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax

  v0 = MEMORY[0xAC1B50]; /*0x600750*/
  for ( i = 0; i < MEMORY[0xAC1B50]; v0 = MEMORY[0xAC1B50] ) /*0x60075d*/
  {
    v2 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B48] + i); /*0x600764*/
    while ( v2 ) /*0x600769*/
    {
      v3 = v2; /*0x60076b*/
      v2 = (_DWORD *)v2[2]; /*0x60076d*/
      __3_YAXPAX_Z(v3); /*0x600771*/
    }
    *((_DWORD *)MEMORY[0xAC1B48] + i++) = 0; /*0x600784*/
  }
  v4 = MEMORY[0xAC1B78]; /*0x600795*/
  MEMORY[0xAC1B4C] = 0; /*0x60079b*/
  if ( v0 > MEMORY[0xAC1B78] ) /*0x6007a7*/
  {
    do /*0x60085a*/
    {
      if ( MEMORY[0xAC1B5C] || v0 <= v4 ) /*0x6007bd*/
        break; /*0x6007bd*/
      v5 = (int *)MEMORY[0xAC1B48]; /*0x6007c9*/
      v6 = v0; /*0x6007cf*/
      MEMORY[0xAC1B50] = v0 >> 1; /*0x6007d4*/
      --MEMORY[0xAC1B54]; /*0x6007e0*/
      MEMORY[0xAC1B48] = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x6007f9*/
      memset(MEMORY[0xAC1B48], 0, 4 * MEMORY[0xAC1B50]); /*0x600801*/
      if ( v6 > 0 ) /*0x600803*/
      {
        v7 = v5; /*0x600805*/
        v8 = v6; /*0x600807*/
        do /*0x600842*/
        {
          v9 = *v7; /*0x600809*/
          if ( *v7 ) /*0x600809*/
          {
            do /*0x60083c*/
            {
              v10 = MEMORY[0xAC1B60](v9) & ((1 << MEMORY[0xAC1B54]) - 1); /*0x600825*/
              v11 = *((_DWORD *)MEMORY[0xAC1B48] + v10); /*0x60082c*/
              *((_DWORD *)MEMORY[0xAC1B48] + v10) = v9; /*0x60082f*/
              v12 = *(_DWORD *)(v9 + 8); /*0x600832*/
              *(_DWORD *)(v9 + 8) = v11; /*0x600835*/
              v9 = v12; /*0x60083a*/
            }
            while ( v12 ); /*0x60083c*/
          }
          ++v7; /*0x60083e*/
          --v8; /*0x600841*/
        }
        while ( v8 ); /*0x600842*/
      }
      __3_YAXPAX_Z(v5); /*0x600845*/
      v4 = MEMORY[0xAC1B78]; /*0x60084a*/
      v0 = MEMORY[0xAC1B50]; /*0x600850*/
    }
    while ( MEMORY[0xAC1B50] > (unsigned int)MEMORY[0xAC1B78] ); /*0x60085a*/
  }
  __3_YAXPAX_Z(MEMORY[0xAC1B48]); /*0x600866*/
}
}
} // namespace gamemd

// 0x600880
namespace gamemd {
int sub_600880()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_600880()
{
  unsigned int v0; // eax
  int v1; // ecx

  v0 = 128; /*0x600880*/
  MEMORY[0xAC18E0] = 0.2; /*0x600887*/
  MEMORY[0xAC18E8] = 0.8; /*0x60089b*/
  MEMORY[0xAC18F0] = 128; /*0x6008af*/
  v1 = 0; /*0x6008b4*/
  do /*0x6008b9*/
  {
    ++v1; /*0x6008b6*/
    v0 >>= 1; /*0x6008b7*/
  }
  while ( v0 ); /*0x6008b9*/
  MEMORY[0xAC18D0] = 0; /*0x6008bb*/
  MEMORY[0xAC18CC] = v1 - 1; /*0x6008c9*/
  MEMORY[0xAC18C4] = 0; /*0x6008cf*/
  MEMORY[0xAC18D4] = 0; /*0x6008d5*/
  MEMORY[0xAC18C8] = 1 << (v1 - 1); /*0x6008db*/
  MEMORY[0xAC18C0] = __2_YAPAXI_Z(4 * (1 << (v1 - 1))); /*0x6008f3*/
  memset(MEMORY[0xAC18C0], 0, 4 * MEMORY[0xAC18C8]); /*0x6008f9*/
  MEMORY[0xAC18D8] = (int (__thiscall *)(_DWORD))ReadPointerFromECX; /*0x600900*/
  return atexit(sub_600920); /*0x600912*/
}
}
} // namespace gamemd

// 0x600920
namespace gamemd {
void sub_600920()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_600920()
{
  unsigned int v0; // eax
  unsigned int i; // edi
  _DWORD *v2; // esi
  void *v3; // eax
  unsigned int v4; // ecx
  int *v5; // ebx
  int v6; // esi
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax

  v0 = MEMORY[0xAC18C8]; /*0x600920*/
  for ( i = 0; i < MEMORY[0xAC18C8]; v0 = MEMORY[0xAC18C8] ) /*0x60092d*/
  {
    v2 = (_DWORD *)*((_DWORD *)MEMORY[0xAC18C0] + i); /*0x600934*/
    while ( v2 ) /*0x600939*/
    {
      v3 = v2; /*0x60093b*/
      v2 = (_DWORD *)v2[2]; /*0x60093d*/
      __3_YAXPAX_Z(v3); /*0x600941*/
    }
    *((_DWORD *)MEMORY[0xAC18C0] + i++) = 0; /*0x600954*/
  }
  v4 = MEMORY[0xAC18F0]; /*0x600965*/
  MEMORY[0xAC18C4] = 0; /*0x60096b*/
  if ( v0 > MEMORY[0xAC18F0] ) /*0x600977*/
  {
    do /*0x600a2a*/
    {
      if ( MEMORY[0xAC18D4] || v0 <= v4 ) /*0x60098d*/
        break; /*0x60098d*/
      v5 = (int *)MEMORY[0xAC18C0]; /*0x600999*/
      v6 = v0; /*0x60099f*/
      MEMORY[0xAC18C8] = v0 >> 1; /*0x6009a4*/
      --MEMORY[0xAC18CC]; /*0x6009b0*/
      MEMORY[0xAC18C0] = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x6009c9*/
      memset(MEMORY[0xAC18C0], 0, 4 * MEMORY[0xAC18C8]); /*0x6009d1*/
      if ( v6 > 0 ) /*0x6009d3*/
      {
        v7 = v5; /*0x6009d5*/
        v8 = v6; /*0x6009d7*/
        do /*0x600a12*/
        {
          v9 = *v7; /*0x6009d9*/
          if ( *v7 ) /*0x6009d9*/
          {
            do /*0x600a0c*/
            {
              v10 = MEMORY[0xAC18D8](v9) & ((1 << MEMORY[0xAC18CC]) - 1); /*0x6009f5*/
              v11 = *((_DWORD *)MEMORY[0xAC18C0] + v10); /*0x6009fc*/
              *((_DWORD *)MEMORY[0xAC18C0] + v10) = v9; /*0x6009ff*/
              v12 = *(_DWORD *)(v9 + 8); /*0x600a02*/
              *(_DWORD *)(v9 + 8) = v11; /*0x600a05*/
              v9 = v12; /*0x600a0a*/
            }
            while ( v12 ); /*0x600a0c*/
          }
          ++v7; /*0x600a0e*/
          --v8; /*0x600a11*/
        }
        while ( v8 ); /*0x600a12*/
      }
      __3_YAXPAX_Z(v5); /*0x600a15*/
      v4 = MEMORY[0xAC18F0]; /*0x600a1a*/
      v0 = MEMORY[0xAC18C8]; /*0x600a20*/
    }
    while ( MEMORY[0xAC18C8] > (unsigned int)MEMORY[0xAC18F0] ); /*0x600a2a*/
  }
  __3_YAXPAX_Z(MEMORY[0xAC18C0]); /*0x600a36*/
}
}
} // namespace gamemd

// 0x600A50
namespace gamemd {
int sub_600A50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_600A50()
{
  unsigned int v0; // eax
  int v1; // ecx

  v0 = 128; /*0x600a50*/
  MEMORY[0xAC1B20] = 0.2; /*0x600a57*/
  MEMORY[0xAC1B28] = 0.8; /*0x600a6b*/
  MEMORY[0xAC1B30] = 128; /*0x600a7f*/
  v1 = 0; /*0x600a84*/
  do /*0x600a89*/
  {
    ++v1; /*0x600a86*/
    v0 >>= 1; /*0x600a87*/
  }
  while ( v0 ); /*0x600a89*/
  MEMORY[0xAC1B10] = 0; /*0x600a8b*/
  MEMORY[0xAC1B0C] = v1 - 1; /*0x600a99*/
  MEMORY[0xAC1B04] = 0; /*0x600a9f*/
  MEMORY[0xAC1B14] = 0; /*0x600aa5*/
  MEMORY[0xAC1B08] = 1 << (v1 - 1); /*0x600aab*/
  MEMORY[0xAC1B00] = __2_YAPAXI_Z(4 * (1 << (v1 - 1))); /*0x600ac3*/
  memset(MEMORY[0xAC1B00], 0, 4 * MEMORY[0xAC1B08]); /*0x600ac9*/
  MEMORY[0xAC1B18] = (int (__thiscall *)(_DWORD))ReadPointerFromECX; /*0x600ad0*/
  return atexit(sub_600AF0); /*0x600ae2*/
}
}
} // namespace gamemd

// 0x600AF0
namespace gamemd {
void sub_600AF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_600AF0()
{
  unsigned int v0; // eax
  unsigned int v1; // ecx
  int j; // ebp
  int v3; // edi
  _DWORD *k; // eax
  void **v5; // ecx
  unsigned int v6; // ecx
  int *v7; // ebp
  int v8; // esi
  int *v9; // edi
  int v10; // ebx
  int v11; // esi
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  unsigned int i; // [esp+10h] [ebp-4h]

  v0 = MEMORY[0xAC1B08]; /*0x600af1*/
  v1 = 0; /*0x600afa*/
  for ( i = 0; v1 < MEMORY[0xAC1B08]; v0 = MEMORY[0xAC1B08] ) /*0x600b04*/
  {
    for ( j = *((_DWORD *)MEMORY[0xAC1B00] + v1); j; v1 = i ) /*0x600b10*/
    {
      v3 = j; /*0x600b12*/
      j = *(_DWORD *)(j + 516); /*0x600b14*/
      if ( *(_DWORD *)(v3 + 44) ) /*0x600b1e*/
      {
        __3_YAXPAX_Z(*(void **)(v3 + 44)); /*0x600b29*/
        *(_DWORD *)(v3 + 44) = 0; /*0x600b31*/
      }
      for ( k = *(_DWORD **)(v3 + 56); k; k = *(_DWORD **)(v3 + 56) ) /*0x600b39*/
        LinkedList::Remove((_DWORD *)(v3 + 4), k); /*0x600b3e*/
      v5 = *(void ***)(v3 + 64); /*0x600b4a*/
      if ( v5 ) /*0x600b4f*/
        DeleteAndZero::OrFree(v5, 1); /*0x600b53*/
      __3_YAXPAX_Z((void *)v3); /*0x600b59*/
    }
    i = ++v1; /*0x600b70*/
    *((_DWORD *)MEMORY[0xAC1B00] + v1 - 1) = 0; /*0x600b74*/
  }
  v6 = MEMORY[0xAC1B30]; /*0x600b81*/
  MEMORY[0xAC1B04] = 0; /*0x600b87*/
  if ( v0 > MEMORY[0xAC1B30] ) /*0x600b8f*/
  {
    do /*0x600c46*/
    {
      if ( MEMORY[0xAC1B14] || v0 <= v6 ) /*0x600ba5*/
        break; /*0x600ba5*/
      v7 = (int *)MEMORY[0xAC1B00]; /*0x600bb1*/
      v8 = v0; /*0x600bb7*/
      MEMORY[0xAC1B08] = v0 >> 1; /*0x600bbb*/
      --MEMORY[0xAC1B0C]; /*0x600bc5*/
      MEMORY[0xAC1B00] = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x600bdd*/
      memset(MEMORY[0xAC1B00], 0, 4 * MEMORY[0xAC1B08]); /*0x600be5*/
      if ( v8 > 0 ) /*0x600be7*/
      {
        v9 = v7; /*0x600be9*/
        v10 = v8; /*0x600beb*/
        do /*0x600c2c*/
        {
          v11 = *v9; /*0x600bed*/
          if ( *v9 ) /*0x600bed*/
          {
            do /*0x600c26*/
            {
              v12 = MEMORY[0xAC1B18](v11) & ((1 << MEMORY[0xAC1B0C]) - 1); /*0x600c09*/
              v13 = *((_DWORD *)MEMORY[0xAC1B00] + v12); /*0x600c10*/
              *((_DWORD *)MEMORY[0xAC1B00] + v12) = v11; /*0x600c13*/
              v14 = *(_DWORD *)(v11 + 516); /*0x600c16*/
              *(_DWORD *)(v11 + 516) = v13; /*0x600c1c*/
              v11 = v14; /*0x600c24*/
            }
            while ( v14 ); /*0x600c26*/
          }
          ++v9; /*0x600c28*/
          --v10; /*0x600c2b*/
        }
        while ( v10 ); /*0x600c2c*/
      }
      __3_YAXPAX_Z(v7); /*0x600c31*/
      v6 = MEMORY[0xAC1B30]; /*0x600c36*/
      v0 = MEMORY[0xAC1B08]; /*0x600c3c*/
    }
    while ( MEMORY[0xAC1B08] > (unsigned int)MEMORY[0xAC1B30] ); /*0x600c46*/
  }
  __3_YAXPAX_Z(MEMORY[0xAC1B00]); /*0x600c53*/
}
}
} // namespace gamemd

// 0x600C70
namespace gamemd {
char NavigateDialogTab(HWND hCtl, bool a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall NavigateDialogTab(HWND hCtl, bool a2)
{
  HWND Parent; // eax
  HWND NextDlgTabItem; // eax

  Parent = GetParent(hCtl); /*0x600c77*/
  NextDlgTabItem = GetNextDlgTabItem(Parent, hCtl, a2); /*0x600c86*/
  if ( NextDlgTabItem == hCtl ) /*0x600c90*/
    return 0; /*0x600c9c*/
  SetFocus(NextDlgTabItem); /*0x600c93*/
  return 1; /*0x600c8e*/
}
}
} // namespace gamemd

// 0x600CA0
namespace gamemd {
int ValidateDialogEvent(int a1, HWND a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall ValidateDialogEvent(int a1, HWND a2)
{
  _DWORD *v3; // eax
  void *v4; // edi
  int DlgCtrlID; // eax
  _DWORD *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x600cac*/
  if ( !MEMORY[0xAC1B04] ) /*0x600cb0*/
    goto LABEL_5; /*0x600cb0*/
  v3 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v8) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x600cd1*/
  if ( !v3 ) /*0x600cd6*/
    goto LABEL_5; /*0x600cd6*/
  while ( *v3 != v8 ) /*0x600cde*/
  {
    v3 = (_DWORD *)v3[129]; /*0x600ce4*/
    if ( !v3 ) /*0x600cec*/
      goto LABEL_5; /*0x600cec*/
  }
  v7 = v3 + 1; /*0x600f18*/
  if ( v7 ) /*0x600f1d*/
    v4 = (void *)v7[27]; /*0x600f23*/
  else
LABEL_5:
    v4 = 0; /*0x600cee*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x600cf1*/
  if ( (v4 == (void *)268 /*0x600f05*/
     || v4 == (void *)148
     || v4 == (void *)163
     || v4 == (void *)115
     || v4 == (void *)216
     || v4 == (void *)3003
     || v4 == (void *)245
     || v4 == (void *)261
     || v4 == (void *)226
     || v4 == (void *)213
     || v4 == (void *)693
     || v4 == (void *)183
     || v4 == (void *)692
     || v4 == (void *)3015
     || v4 == (void *)257
     || v4 == (void *)297
     || v4 == (void *)3014
     || v4 == (void *)215
     || v4 == (void *)264
     || v4 == (void *)188
     || v4 == (void *)189
     || v4 == (void *)187
     || v4 == (void *)181
     || v4 == (void *)3002
     || v4 == (void *)255
     || v4 == (void *)107
     || v4 == (void *)256
     || v4 == (void *)258
     || v4 == (void *)184
     || v4 == (void *)214
     || v4 == (void *)259
     || v4 == (void *)293
     || v4 == (void *)231
     || v4 == (void *)278
     || v4 == (void *)194
     || v4 == (void *)201
     || v4 == (void *)285
     || v4 == (void *)284
     || v4 == (void *)276
     || v4 == (void *)700
     || v4 == (void *)275
     || v4 == (void *)265
     || v4 == (void *)271
     || v4 == (void *)279
     || v4 == (void *)230
     || v4 == (void *)243
     || v4 == (void *)244
     || v4 == (void *)270
     || v4 == (void *)274)
    && DlgCtrlID == 1684 )
  {
    return 30; /*0x600f0f*/
  }
  if ( (v4 == (void *)188 /*0x600f69*/
     || v4 == (void *)189
     || v4 == (void *)258
     || v4 == (void *)194
     || v4 == (void *)201
     || v4 == (void *)3014)
    && (DlgCtrlID == 1772 || DlgCtrlID == 1448) )
  {
    return 30; /*0x600f69*/
  }
  if ( v4 != (void *)259 && v4 != (void *)3015 ) /*0x600f82*/
    goto LABEL_102; /*0x600f82*/
  if ( DlgCtrlID != 1780 ) /*0x600f8e*/
  {
    if ( DlgCtrlID == 1779 /*0x601026*/
      || DlgCtrlID == 1695
      || DlgCtrlID == 1782
      || DlgCtrlID == 1775
      || DlgCtrlID == 1777
      || DlgCtrlID == 1776
      || DlgCtrlID == 1778
      || DlgCtrlID == 1852
      || DlgCtrlID == 1853
      || DlgCtrlID == 1854
      || DlgCtrlID == 1855
      || DlgCtrlID == 1856
      || DlgCtrlID == 1845
      || DlgCtrlID == 1842
      || DlgCtrlID == 1002
      || DlgCtrlID == 1843 )
    {
      return 30; /*0x601026*/
    }
    if ( DlgCtrlID == 1041 /*0x60109a*/
      || DlgCtrlID == 1042
      || DlgCtrlID == 1049
      || DlgCtrlID == 1050
      || DlgCtrlID == 1699
      || DlgCtrlID == 1700
      || DlgCtrlID == 1701
      || DlgCtrlID == 1703
      || DlgCtrlID == 1702
      || DlgCtrlID == 1704
      || DlgCtrlID == 1850
      || DlgCtrlID == 1849
      || DlgCtrlID == 1851
      || DlgCtrlID == 1848 )
    {
      return 60; /*0x6010a4*/
    }
LABEL_102:
    if ( v4 != (void *)264 && v4 != (void *)3014 ) /*0x6010b3*/
    {
LABEL_164:
      Event::IsValidActionType(v4); /*0x601346*/
      return 15; /*0x601348*/
    }
    if ( DlgCtrlID != 1746 /*0x601197*/
      && DlgCtrlID != 1002
      && DlgCtrlID != 1843
      && DlgCtrlID != 1819
      && DlgCtrlID != 1842
      && DlgCtrlID != 1693
      && DlgCtrlID != 1695
      && DlgCtrlID != 1694
      && DlgCtrlID != 1696
      && DlgCtrlID != 1931
      && DlgCtrlID != 1480
      && DlgCtrlID != 1041
      && DlgCtrlID != 1042
      && DlgCtrlID != 1043
      && DlgCtrlID != 1044
      && DlgCtrlID != 1045
      && DlgCtrlID != 1046
      && DlgCtrlID != 1047
      && DlgCtrlID != 1048 )
    {
      if ( DlgCtrlID == 1049 /*0x60133b*/
        || DlgCtrlID == 1050
        || DlgCtrlID == 1051
        || DlgCtrlID == 1052
        || DlgCtrlID == 1053
        || DlgCtrlID == 1054
        || DlgCtrlID == 1055
        || DlgCtrlID == 1056
        || DlgCtrlID == 1699
        || DlgCtrlID == 1700
        || DlgCtrlID == 1705
        || DlgCtrlID == 1708
        || DlgCtrlID == 1711
        || DlgCtrlID == 1714
        || DlgCtrlID == 1717
        || DlgCtrlID == 1720
        || DlgCtrlID == 1701
        || DlgCtrlID == 1703
        || DlgCtrlID == 1706
        || DlgCtrlID == 1709
        || DlgCtrlID == 1712
        || DlgCtrlID == 1715
        || DlgCtrlID == 1718
        || DlgCtrlID == 1721
        || DlgCtrlID == 1702
        || DlgCtrlID == 1704
        || DlgCtrlID == 1707
        || DlgCtrlID == 1710
        || DlgCtrlID == 1713
        || DlgCtrlID == 1716
        || DlgCtrlID == 1719
        || DlgCtrlID == 1722
        || DlgCtrlID == 1802
        || DlgCtrlID == 1803
        || DlgCtrlID == 1804
        || DlgCtrlID == 1805
        || DlgCtrlID == 1806
        || DlgCtrlID == 1807
        || DlgCtrlID == 1808
        || DlgCtrlID == 1809 )
      {
        return 60; /*0x601345*/
      }
      goto LABEL_164; /*0x60133b*/
    }
    return 30; /*0x600f73*/
  }
  return 15; /*0x600f07*/
}
}
} // namespace gamemd

// 0x6015E0
namespace gamemd {
int CtlDialogColorHandler(int a1, HWND a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall CtlDialogColorHandler(int a1, HWND a2)
{
  _DWORD *v3; // eax
  void *v4; // edi
  int DlgCtrlID; // eax
  int v6; // esi
  int result; // eax
  _DWORD *v8; // eax
  int v9; // [esp+8h] [ebp-4h] BYREF

  v9 = a1; /*0x6015ec*/
  if ( !MEMORY[0xAC1B04] ) /*0x6015f0*/
    goto LABEL_5; /*0x6015f0*/
  v3 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v9) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x601611*/
  if ( !v3 ) /*0x601616*/
    goto LABEL_5; /*0x601616*/
  while ( *v3 != v9 ) /*0x60161e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x601624*/
    if ( !v3 ) /*0x60162c*/
      goto LABEL_5; /*0x60162c*/
  }
  v8 = v3 + 1; /*0x6018c0*/
  if ( v8 ) /*0x6018c5*/
    v4 = (void *)v8[27]; /*0x6018cb*/
  else
LABEL_5:
    v4 = 0; /*0x60162e*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x601631*/
  v6 = DlgCtrlID; /*0x60163d*/
  if ( (v4 == (void *)268 /*0x60188d*/
     || v4 == (void *)148
     || v4 == (void *)163
     || v4 == (void *)115
     || v4 == (void *)216
     || v4 == (void *)3003
     || v4 == (void *)245
     || v4 == (void *)261
     || v4 == (void *)226
     || v4 == (void *)213
     || v4 == (void *)693
     || v4 == (void *)183
     || v4 == (void *)692
     || v4 == (void *)3015
     || v4 == (void *)257
     || v4 == (void *)297
     || v4 == (void *)3014
     || v4 == (void *)215
     || v4 == (void *)264
     || v4 == (void *)188
     || v4 == (void *)189
     || v4 == (void *)187
     || v4 == (void *)181
     || v4 == (void *)3002
     || v4 == (void *)255
     || v4 == (void *)107
     || v4 == (void *)256
     || v4 == (void *)258
     || v4 == (void *)184
     || v4 == (void *)214
     || v4 == (void *)259
     || v4 == (void *)293
     || v4 == (void *)231
     || v4 == (void *)278
     || v4 == (void *)194
     || v4 == (void *)201
     || v4 == (void *)285
     || v4 == (void *)284
     || v4 == (void *)276
     || v4 == (void *)700
     || v4 == (void *)275
     || v4 == (void *)265
     || v4 == (void *)271
     || v4 == (void *)279
     || v4 == (void *)230
     || v4 == (void *)243
     || v4 == (void *)244
     || v4 == (void *)270
     || v4 == (void *)274)
    && DlgCtrlID == 1684
    || (v4 == (void *)188
     || v4 == (void *)189
     || v4 == (void *)258
     || v4 == (void *)194
     || v4 == (void *)201
     || v4 == (void *)3014)
    && (DlgCtrlID == 1772 || DlgCtrlID == 1448) )
  {
    return 1; /*0x60188d*/
  }
  if ( v4 == (void *)259 || v4 == (void *)3015 ) /*0x6018a1*/
  {
    if ( DlgCtrlID == 1780 ) /*0x6018ad*/
      return 3; /*0x6018b7*/
    if ( DlgCtrlID == 1779 /*0x601a4d*/
      || DlgCtrlID == 1695
      || DlgCtrlID == 1782
      || DlgCtrlID == 1775
      || DlgCtrlID == 1777
      || DlgCtrlID == 1776
      || DlgCtrlID == 1778
      || DlgCtrlID == 1843
      || DlgCtrlID == 1845
      || DlgCtrlID == 1842
      || DlgCtrlID == 1002
      || DlgCtrlID == 1852
      || DlgCtrlID == 1853
      || DlgCtrlID == 1854
      || DlgCtrlID == 1855
      || DlgCtrlID == 1856
      || DlgCtrlID == 1846
      || DlgCtrlID == 1847
      || DlgCtrlID == 1041
      || DlgCtrlID == 1042
      || DlgCtrlID == 1049
      || DlgCtrlID == 1050
      || DlgCtrlID == 1699
      || DlgCtrlID == 1700
      || DlgCtrlID == 1701
      || DlgCtrlID == 1703
      || DlgCtrlID == 1702
      || DlgCtrlID == 1704
      || DlgCtrlID == 1850
      || DlgCtrlID == 1849
      || DlgCtrlID == 1851
      || DlgCtrlID == 1848 )
    {
      return 1; /*0x601a4d*/
    }
  }
  if ( (v4 == (void *)264 || v4 == (void *)3014) /*0x601cf5*/
    && (DlgCtrlID == 1746
     || DlgCtrlID == 1002
     || DlgCtrlID == 1843
     || DlgCtrlID == 1819
     || DlgCtrlID == 1842
     || DlgCtrlID == 1693
     || DlgCtrlID == 1695
     || DlgCtrlID == 1694
     || DlgCtrlID == 1696
     || DlgCtrlID == 1931
     || DlgCtrlID == 1480
     || DlgCtrlID == 1041
     || DlgCtrlID == 1042
     || DlgCtrlID == 1043
     || DlgCtrlID == 1044
     || DlgCtrlID == 1045
     || DlgCtrlID == 1046
     || DlgCtrlID == 1047
     || DlgCtrlID == 1048
     || DlgCtrlID == 1049
     || DlgCtrlID == 1050
     || DlgCtrlID == 1051
     || DlgCtrlID == 1052
     || DlgCtrlID == 1053
     || DlgCtrlID == 1054
     || DlgCtrlID == 1055
     || DlgCtrlID == 1056
     || DlgCtrlID == 1699
     || DlgCtrlID == 1700
     || DlgCtrlID == 1705
     || DlgCtrlID == 1708
     || DlgCtrlID == 1711
     || DlgCtrlID == 1714
     || DlgCtrlID == 1717
     || DlgCtrlID == 1720
     || DlgCtrlID == 1701
     || DlgCtrlID == 1703
     || DlgCtrlID == 1706
     || DlgCtrlID == 1709
     || DlgCtrlID == 1712
     || DlgCtrlID == 1715
     || DlgCtrlID == 1718
     || DlgCtrlID == 1721
     || DlgCtrlID == 1702
     || DlgCtrlID == 1704
     || DlgCtrlID == 1707
     || DlgCtrlID == 1710
     || DlgCtrlID == 1713
     || DlgCtrlID == 1716
     || DlgCtrlID == 1719
     || DlgCtrlID == 1722
     || DlgCtrlID == 1802
     || DlgCtrlID == 1803
     || DlgCtrlID == 1804
     || DlgCtrlID == 1805
     || DlgCtrlID == 1806
     || DlgCtrlID == 1807
     || DlgCtrlID == 1808
     || DlgCtrlID == 1809) )
  {
    return 1; /*0x601cf5*/
  }
  if ( !Event::IsValidActionType(v4) ) /*0x601cf9*/
    return 1; /*0x601cf9*/
  result = 3; /*0x601d08*/
  if ( v6 != 1685 ) /*0x601d0d*/
    return 1; /*0x601d0f*/
  return result; /*0x6018af*/
}
}
} // namespace gamemd

// 0x601D20
namespace gamemd {
int ValidateDialogControl(int a1, HWND a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall ValidateDialogControl(int a1, HWND a2)
{
  _DWORD *v3; // eax
  void *v4; // edi
  int DlgCtrlID; // eax
  int v6; // esi
  _DWORD *v8; // eax
  int v9; // [esp+8h] [ebp-4h] BYREF

  v9 = a1; /*0x601d2c*/
  if ( !MEMORY[0xAC1B04] ) /*0x601d30*/
    goto LABEL_5; /*0x601d30*/
  v3 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v9) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x601d51*/
  if ( !v3 ) /*0x601d56*/
    goto LABEL_5; /*0x601d56*/
  while ( *v3 != v9 ) /*0x601d5e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x601d64*/
    if ( !v3 ) /*0x601d6c*/
      goto LABEL_5; /*0x601d6c*/
  }
  v8 = v3 + 1; /*0x602000*/
  if ( v8 ) /*0x602005*/
    v4 = (void *)v8[27]; /*0x60200b*/
  else
LABEL_5:
    v4 = 0; /*0x601d6e*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x601d71*/
  v6 = DlgCtrlID; /*0x601d7d*/
  if ( (v4 != (void *)268 /*0x601fcd*/
     && v4 != (void *)148
     && v4 != (void *)163
     && v4 != (void *)115
     && v4 != (void *)216
     && v4 != (void *)3003
     && v4 != (void *)245
     && v4 != (void *)261
     && v4 != (void *)226
     && v4 != (void *)213
     && v4 != (void *)693
     && v4 != (void *)183
     && v4 != (void *)692
     && v4 != (void *)3015
     && v4 != (void *)257
     && v4 != (void *)297
     && v4 != (void *)3014
     && v4 != (void *)215
     && v4 != (void *)264
     && v4 != (void *)188
     && v4 != (void *)189
     && v4 != (void *)187
     && v4 != (void *)181
     && v4 != (void *)3002
     && v4 != (void *)255
     && v4 != (void *)107
     && v4 != (void *)256
     && v4 != (void *)258
     && v4 != (void *)184
     && v4 != (void *)214
     && v4 != (void *)259
     && v4 != (void *)293
     && v4 != (void *)231
     && v4 != (void *)278
     && v4 != (void *)194
     && v4 != (void *)201
     && v4 != (void *)285
     && v4 != (void *)284
     && v4 != (void *)276
     && v4 != (void *)700
     && v4 != (void *)275
     && v4 != (void *)265
     && v4 != (void *)271
     && v4 != (void *)279
     && v4 != (void *)230
     && v4 != (void *)243
     && v4 != (void *)244
     && v4 != (void *)270
     && v4 != (void *)274
     || DlgCtrlID != 1684)
    && (v4 != (void *)188
     && v4 != (void *)189
     && v4 != (void *)258
     && v4 != (void *)194
     && v4 != (void *)201
     && v4 != (void *)3014
     || DlgCtrlID != 1772 && DlgCtrlID != 1448) )
  {
    if ( v4 == (void *)259 || v4 == (void *)3015 ) /*0x601fe1*/
    {
      switch ( DlgCtrlID ) /*0x601fed*/
      {
        case 1780: /*0x601fed*/
          return 16; /*0x601ff7*/
        case 1779: /*0x601fed*/
        case 1695: /*0x601fed*/
        case 1782: /*0x601fed*/
        case 1775: /*0x601fed*/
        case 1777: /*0x601fed*/
        case 1776: /*0x601fed*/
        case 1778: /*0x601fed*/
        case 1843: /*0x601fed*/
        case 1845: /*0x601fed*/
        case 1842: /*0x601fed*/
        case 1002: /*0x601fed*/
          return 8; /*0x602091*/
        case 1852: /*0x601fed*/
        case 1853: /*0x601fed*/
        case 1854: /*0x601fed*/
        case 1855: /*0x601fed*/
        case 1856: /*0x601fed*/
          return 16; /*0x6023d8*/
        case 1041: /*0x601fed*/
        case 1042: /*0x601fed*/
        case 1049: /*0x601fed*/
        case 1050: /*0x601fed*/
        case 1699: /*0x601fed*/
        case 1700: /*0x601fed*/
        case 1701: /*0x601fed*/
        case 1703: /*0x601fed*/
        case 1702: /*0x601fed*/
        case 1704: /*0x601fed*/
        case 1850: /*0x601fed*/
        case 1849: /*0x601fed*/
        case 1851: /*0x601fed*/
        case 1848: /*0x601fed*/
          return 32; /*0x602141*/
      }
    }
    if ( v4 == (void *)264 || v4 == (void *)3014 ) /*0x60215a*/
    {
      if ( DlgCtrlID == 1746 /*0x60220e*/
        || DlgCtrlID == 1002
        || DlgCtrlID == 1843
        || DlgCtrlID == 1819
        || DlgCtrlID == 1842
        || DlgCtrlID == 1693
        || DlgCtrlID == 1695
        || DlgCtrlID == 1694
        || DlgCtrlID == 1696
        || DlgCtrlID == 1931
        || DlgCtrlID == 1480
        || DlgCtrlID == 1041
        || DlgCtrlID == 1042
        || DlgCtrlID == 1043
        || DlgCtrlID == 1044
        || DlgCtrlID == 1045
        || DlgCtrlID == 1046
        || DlgCtrlID == 1047
        || DlgCtrlID == 1048 )
      {
        return 32; /*0x60214b*/
      }
      if ( DlgCtrlID == 1049 /*0x6023b2*/
        || DlgCtrlID == 1050
        || DlgCtrlID == 1051
        || DlgCtrlID == 1052
        || DlgCtrlID == 1053
        || DlgCtrlID == 1054
        || DlgCtrlID == 1055
        || DlgCtrlID == 1056
        || DlgCtrlID == 1699
        || DlgCtrlID == 1700
        || DlgCtrlID == 1705
        || DlgCtrlID == 1708
        || DlgCtrlID == 1711
        || DlgCtrlID == 1714
        || DlgCtrlID == 1717
        || DlgCtrlID == 1720
        || DlgCtrlID == 1701
        || DlgCtrlID == 1703
        || DlgCtrlID == 1706
        || DlgCtrlID == 1709
        || DlgCtrlID == 1712
        || DlgCtrlID == 1715
        || DlgCtrlID == 1718
        || DlgCtrlID == 1721
        || DlgCtrlID == 1702
        || DlgCtrlID == 1704
        || DlgCtrlID == 1707
        || DlgCtrlID == 1710
        || DlgCtrlID == 1713
        || DlgCtrlID == 1716
        || DlgCtrlID == 1719
        || DlgCtrlID == 1722
        || DlgCtrlID == 1802
        || DlgCtrlID == 1803
        || DlgCtrlID == 1804
        || DlgCtrlID == 1805
        || DlgCtrlID == 1806
        || DlgCtrlID == 1807
        || DlgCtrlID == 1808
        || DlgCtrlID == 1809 )
      {
        return 64; /*0x6023bc*/
      }
    }
    if ( Event::IsValidActionType(v4) && v6 == 1685 ) /*0x6023ce*/
      return 16; /*0x6023ce*/
  }
  return 8; /*0x601fef*/
}
}
} // namespace gamemd

// 0x6023F0
namespace gamemd {
int sub_6023F0(int a1, HWND a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_6023F0(int a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int DlgCtrlID; // eax
  _DWORD *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x6023fc*/
  if ( !MEMORY[0xAC1B04] ) /*0x602400*/
    goto LABEL_5; /*0x602400*/
  v3 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v8) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x602421*/
  if ( !v3 ) /*0x602426*/
    goto LABEL_5; /*0x602426*/
  while ( *v3 != v8 ) /*0x60242e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x602430*/
    if ( !v3 ) /*0x602438*/
      goto LABEL_5; /*0x602438*/
  }
  v7 = v3 + 1; /*0x60246e*/
  if ( v7 ) /*0x602473*/
    v4 = v7[27]; /*0x602475*/
  else
LABEL_5:
    v4 = 0; /*0x60243a*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x60243d*/
  if ( (v4 == 259 || v4 == 3015) && DlgCtrlID == 1780 ) /*0x602458*/
    return MEMORY[0x8871E0]->GenericBeep; /*0x602462*/
  else
    return -1; /*0x60247b*/
}
}
} // namespace gamemd

// 0x602490
namespace gamemd {
bool IsValidActionDialog(int a1, HWND a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __fastcall IsValidActionDialog(int a1, HWND a2)
{
  _DWORD *v3; // eax
  void *v4; // edi
  int DlgCtrlID; // esi
  _DWORD *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x60249c*/
  if ( !MEMORY[0xAC1B04] ) /*0x6024a0*/
    goto LABEL_5; /*0x6024a0*/
  v3 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v8) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x6024c1*/
  if ( !v3 ) /*0x6024c6*/
    goto LABEL_5; /*0x6024c6*/
  while ( *v3 != v8 ) /*0x6024ce*/
  {
    v3 = (_DWORD *)v3[129]; /*0x6024d4*/
    if ( !v3 ) /*0x6024dc*/
      goto LABEL_5; /*0x6024dc*/
  }
  v7 = v3 + 1; /*0x60263c*/
  if ( v7 ) /*0x602641*/
    v4 = (void *)v7[27]; /*0x602647*/
  else
LABEL_5:
    v4 = 0; /*0x6024de*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x6024ed*/
  if ( (v4 == (void *)268 /*0x60262c*/
     || v4 == (void *)148
     || v4 == (void *)163
     || v4 == (void *)115
     || v4 == (void *)216
     || v4 == (void *)3003
     || v4 == (void *)245
     || v4 == (void *)261
     || v4 == (void *)226
     || v4 == (void *)213
     || v4 == (void *)693
     || v4 == (void *)183
     || v4 == (void *)692
     || v4 == (void *)3015
     || v4 == (void *)257
     || v4 == (void *)297
     || v4 == (void *)3014
     || v4 == (void *)215
     || v4 == (void *)264
     || v4 == (void *)188
     || v4 == (void *)189
     || v4 == (void *)187
     || v4 == (void *)181
     || v4 == (void *)3002
     || v4 == (void *)255
     || v4 == (void *)107
     || v4 == (void *)256
     || v4 == (void *)258
     || v4 == (void *)184
     || v4 == (void *)214
     || v4 == (void *)259
     || Dialog::IsSpecialTemplate(v4))
    && DlgCtrlID == 1684 )
  {
    return 1; /*0x60262f*/
  }
  if ( (v4 == (void *)188 /*0x60268d*/
     || v4 == (void *)189
     || v4 == (void *)258
     || v4 == (void *)194
     || v4 == (void *)201
     || v4 == (void *)3014)
    && (DlgCtrlID == 1772 || DlgCtrlID == 1448) )
  {
    return 1; /*0x602690*/
  }
  if ( (v4 == (void *)259 || v4 == (void *)3015) /*0x6027f3*/
    && (DlgCtrlID == 1779
     || DlgCtrlID == 1780
     || DlgCtrlID == 1695
     || DlgCtrlID == 1782
     || DlgCtrlID == 1775
     || DlgCtrlID == 1777
     || DlgCtrlID == 1776
     || DlgCtrlID == 1778
     || DlgCtrlID == 1843
     || DlgCtrlID == 1845
     || DlgCtrlID == 1842
     || DlgCtrlID == 1002
     || DlgCtrlID == 1846
     || DlgCtrlID == 1847
     || DlgCtrlID == 1852
     || DlgCtrlID == 1853
     || DlgCtrlID == 1854
     || DlgCtrlID == 1855
     || DlgCtrlID == 1856
     || DlgCtrlID == 1041
     || DlgCtrlID == 1042
     || DlgCtrlID == 1049
     || DlgCtrlID == 1050
     || DlgCtrlID == 1699
     || DlgCtrlID == 1700
     || DlgCtrlID == 1701
     || DlgCtrlID == 1703
     || DlgCtrlID == 1702
     || DlgCtrlID == 1704
     || DlgCtrlID == 1850
     || DlgCtrlID == 1849
     || DlgCtrlID == 1851
     || DlgCtrlID == 1848) )
  {
    return 1; /*0x6027f6*/
  }
  if ( (v4 == (void *)264 || v4 == (void *)3014) /*0x602a9d*/
    && (DlgCtrlID == 1746
     || DlgCtrlID == 1002
     || DlgCtrlID == 1693
     || DlgCtrlID == 1695
     || DlgCtrlID == 1694
     || DlgCtrlID == 1696
     || DlgCtrlID == 1931
     || DlgCtrlID == 1480
     || DlgCtrlID == 1041
     || DlgCtrlID == 1042
     || DlgCtrlID == 1043
     || DlgCtrlID == 1044
     || DlgCtrlID == 1045
     || DlgCtrlID == 1046
     || DlgCtrlID == 1047
     || DlgCtrlID == 1048
     || DlgCtrlID == 1049
     || DlgCtrlID == 1050
     || DlgCtrlID == 1051
     || DlgCtrlID == 1052
     || DlgCtrlID == 1053
     || DlgCtrlID == 1054
     || DlgCtrlID == 1055
     || DlgCtrlID == 1056
     || DlgCtrlID == 1699
     || DlgCtrlID == 1700
     || DlgCtrlID == 1705
     || DlgCtrlID == 1708
     || DlgCtrlID == 1711
     || DlgCtrlID == 1714
     || DlgCtrlID == 1717
     || DlgCtrlID == 1720
     || DlgCtrlID == 1701
     || DlgCtrlID == 1703
     || DlgCtrlID == 1706
     || DlgCtrlID == 1709
     || DlgCtrlID == 1712
     || DlgCtrlID == 1715
     || DlgCtrlID == 1718
     || DlgCtrlID == 1721
     || DlgCtrlID == 1702
     || DlgCtrlID == 1704
     || DlgCtrlID == 1707
     || DlgCtrlID == 1710
     || DlgCtrlID == 1713
     || DlgCtrlID == 1716
     || DlgCtrlID == 1719
     || DlgCtrlID == 1722
     || DlgCtrlID == 1802
     || DlgCtrlID == 1803
     || DlgCtrlID == 1804
     || DlgCtrlID == 1805
     || DlgCtrlID == 1806
     || DlgCtrlID == 1807
     || DlgCtrlID == 1808
     || DlgCtrlID == 1809
     || DlgCtrlID == 1843
     || DlgCtrlID == 1842
     || DlgCtrlID == 1819
     || DlgCtrlID == 1845) )
  {
    return 1; /*0x602aa0*/
  }
  return Event::IsValidActionType(v4) && DlgCtrlID == 1685 && !SessionClass::GetGameSpeed(MEMORY[0xA8B238]); /*0x60262e*/
}
}
} // namespace gamemd

// 0x602DD0
namespace gamemd {
char IsDialogControlHidden(int a1, HWND a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall IsDialogControlHidden(int a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int DlgCtrlID; // eax
  _DWORD *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x602ddc*/
  if ( !MEMORY[0xAC1B04] ) /*0x602de0*/
    goto LABEL_5; /*0x602de0*/
  v3 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v8) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x602e01*/
  if ( !v3 ) /*0x602e06*/
    goto LABEL_5; /*0x602e06*/
  while ( *v3 != v8 ) /*0x602e0e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x602e14*/
    if ( !v3 ) /*0x602e1c*/
      goto LABEL_5; /*0x602e1c*/
  }
  v7 = v3 + 1; /*0x602f64*/
  if ( v7 ) /*0x602f69*/
    v4 = v7[27]; /*0x602f6f*/
  else
LABEL_5:
    v4 = 0; /*0x602e1e*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x602e21*/
  if ( (v4 == 148 /*0x602f54*/
     || v4 == 216
     || v4 == 245
     || v4 == 226
     || v4 == 213
     || v4 == 257
     || v4 == 297
     || v4 == 215
     || v4 == 187
     || v4 == 256
     || v4 == 214
     || v4 == 293
     || v4 == 290
     || v4 == 274
     || v4 == 231
     || v4 == 278
     || v4 == 285
     || v4 == 284
     || v4 == 254
     || v4 == 271
     || v4 == 279
     || v4 == 276
     || v4 == 230
     || v4 == 243
     || v4 == 244
     || v4 == 700
     || v4 == 270
     || v4 == 264
     || v4 == 3014
     || v4 == 3015)
    && DlgCtrlID == 1820 )
  {
    return 1; /*0x602f5b*/
  }
  switch ( v4 ) /*0x602f7d*/
  {
    case 148: /*0x602f7d*/
      if ( DlgCtrlID == 1770 || DlgCtrlID == 1772 || DlgCtrlID == 1771 ) /*0x602f92*/
        return 1; /*0x602f99*/
      break;
    case 259: /*0x602f7d*/
      if ( DlgCtrlID == 1835 ) /*0x602fa7*/
        return 1; /*0x602fae*/
      break;
    case 3015: /*0x602f7d*/
      if ( DlgCtrlID == 1835 ) /*0x602fbc*/
        return 1; /*0x602fc3*/
      break;
    default:
      if ( v4 == 196 && DlgCtrlID == 1961 ) /*0x602fd1*/
        return 1; /*0x602fd8*/
      break;
  }
  return 0; /*0x602f56*/
}
}
} // namespace gamemd

// 0x603040
namespace gamemd {
int LoadCampaignMissionData(int a1, HWND a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall LoadCampaignMissionData(int a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int DlgCtrlID; // eax
  _DWORD *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x60304c*/
  if ( !MEMORY[0xAC1B04] ) /*0x603050*/
    goto LABEL_5; /*0x603050*/
  v3 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v8) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x603071*/
  if ( !v3 ) /*0x603076*/
    goto LABEL_5; /*0x603076*/
  while ( *v3 != v8 ) /*0x60307e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x603084*/
    if ( !v3 ) /*0x60308c*/
      goto LABEL_5; /*0x60308c*/
  }
  v7 = v3 + 1; /*0x6031d7*/
  if ( v7 ) /*0x6031dc*/
    v4 = v7[27]; /*0x6031e2*/
  else
LABEL_5:
    v4 = 0; /*0x60308e*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x603091*/
  if ( (v4 == 148 /*0x6031c4*/
     || v4 == 216
     || v4 == 245
     || v4 == 226
     || v4 == 213
     || v4 == 257
     || v4 == 297
     || v4 == 215
     || v4 == 187
     || v4 == 256
     || v4 == 214
     || v4 == 293
     || v4 == 290
     || v4 == 274
     || v4 == 231
     || v4 == 278
     || v4 == 285
     || v4 == 284
     || v4 == 254
     || v4 == 271
     || v4 == 279
     || v4 == 276
     || v4 == 230
     || v4 == 243
     || v4 == 244
     || v4 == 700
     || v4 == 270
     || v4 == 264
     || v4 == 3014
     || v4 == 3015)
    && DlgCtrlID == 1820 )
  {
    return 37; /*0x6031c7*/
  }
  if ( (v4 == 188 || v4 == 189 || v4 == 194 || v4 == 201 || v4 == 258 || v4 == 3014) /*0x603226*/
    && (DlgCtrlID == 1772 || DlgCtrlID == 1448) )
  {
    return 14; /*0x60322f*/
  }
  return 0; /*0x6031c6*/
}
}
} // namespace gamemd

// 0x6035F0
namespace gamemd {
int DispatchDialogControlAction(int a1, HWND a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall DispatchDialogControlAction(int a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int DlgCtrlID; // edi
  int result; // eax
  _DWORD *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x6035fc*/
  if ( !MEMORY[0xAC1B04] ) /*0x603600*/
    goto LABEL_5; /*0x603600*/
  v3 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v8) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x603621*/
  if ( !v3 ) /*0x603626*/
    goto LABEL_5; /*0x603626*/
  while ( *v3 != v8 ) /*0x60362e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x603634*/
    if ( !v3 ) /*0x60363c*/
      goto LABEL_5; /*0x60363c*/
  }
  v7 = v3 + 1; /*0x6037a4*/
  if ( v7 ) /*0x6037a9*/
    v4 = v7[27]; /*0x6037af*/
  else
LABEL_5:
    v4 = 0; /*0x60363e*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x603647*/
  result = VtableStub_72E280(); /*0x603649*/
  if ( (v4 == 148 /*0x60377c*/
     || v4 == 216
     || v4 == 245
     || v4 == 226
     || v4 == 213
     || v4 == 257
     || v4 == 297
     || v4 == 215
     || v4 == 187
     || v4 == 256
     || v4 == 214
     || v4 == 293
     || v4 == 290
     || v4 == 274
     || v4 == 231
     || v4 == 278
     || v4 == 285
     || v4 == 284
     || v4 == 254
     || v4 == 271
     || v4 == 279
     || v4 == 276
     || v4 == 230
     || v4 == 243
     || v4 == 244
     || v4 == 700
     || v4 == 270
     || v4 == 264
     || v4 == 3014
     || v4 == 3015)
    && DlgCtrlID == 1820 )
  {
    result = UI_Helper_72E2A0(); /*0x60377e*/
  }
  if ( v4 == 148 ) /*0x603789*/
  {
    if ( DlgCtrlID == 1770 ) /*0x603791*/
    {
      return UI_Helper_72DAC0(); /*0x603793*/
    }
    else if ( DlgCtrlID == 1772 ) /*0x6037bd*/
    {
      return UI_Helper_72DAD0(); /*0x6037bf*/
    }
  }
  else if ( v4 == 259 || v4 == 3015 ) /*0x6037d6*/
  {
    if ( DlgCtrlID == 1835 ) /*0x6037de*/
      return VtableStub_72D450(); /*0x6037e0*/
  }
  else if ( v4 == 196 && DlgCtrlID == 1961 ) /*0x6037f7*/
  {
    return UI_Helper_72CC80(); /*0x6037f9*/
  }
  return result; /*0x603798*/
}
}
} // namespace gamemd

// 0x603870
namespace gamemd {
void * GetDialogControlSHP(int a1, HWND a2, bool * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *__fastcall GetDialogControlSHP(int a1, HWND a2, bool *a3)
{
  _DWORD *v4; // eax
  int v5; // esi
  int DlgCtrlID; // eax
  _DWORD *v8; // eax
  int v9; // [esp+8h] [ebp-4h] BYREF

  v9 = a1; /*0x60387c*/
  if ( !MEMORY[0xAC1B04] ) /*0x603880*/
    goto LABEL_5; /*0x603880*/
  v4 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v9) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x6038a1*/
  if ( !v4 ) /*0x6038a6*/
    goto LABEL_5; /*0x6038a6*/
  while ( *v4 != v9 ) /*0x6038ae*/
  {
    v4 = (_DWORD *)v4[129]; /*0x6038b4*/
    if ( !v4 ) /*0x6038bc*/
      goto LABEL_5; /*0x6038bc*/
  }
  v8 = v4 + 1; /*0x603a13*/
  if ( v8 ) /*0x603a18*/
    v5 = v8[27]; /*0x603a1e*/
  else
LABEL_5:
    v5 = 0; /*0x6038be*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x6038c1*/
  if ( (v5 == 148 /*0x6039f4*/
     || v5 == 216
     || v5 == 245
     || v5 == 226
     || v5 == 213
     || v5 == 257
     || v5 == 297
     || v5 == 215
     || v5 == 187
     || v5 == 256
     || v5 == 214
     || v5 == 293
     || v5 == 290
     || v5 == 274
     || v5 == 231
     || v5 == 278
     || v5 == 285
     || v5 == 284
     || v5 == 254
     || v5 == 271
     || v5 == 279
     || v5 == 276
     || v5 == 230
     || v5 == 243
     || v5 == 244
     || v5 == 700
     || v5 == 270
     || v5 == 264
     || v5 == 3014
     || v5 == 3015)
    && DlgCtrlID == 1820 )
  {
    return LoadFileSHP(MEMORY[0x833674], a3); /*0x603a08*/
  }
  if ( v5 == 148 ) /*0x603a2c*/
  {
    if ( DlgCtrlID == 1770 ) /*0x603a33*/
      return MEMORY[0xB0FB48]; /*0x603a3d*/
    if ( DlgCtrlID == 1772 ) /*0x603a45*/
      return MEMORY[0xB0FB10]; /*0x603a4f*/
  }
  else if ( v5 == 259 || v5 == 3015 ) /*0x603a60*/
  {
    if ( DlgCtrlID == 1835 ) /*0x603a67*/
      return MEMORY[0xB0FB30]; /*0x603a71*/
  }
  else if ( v5 == 196 && DlgCtrlID == 1961 ) /*0x603a81*/
  {
    return (void *)MEMORY[0xB0FAD0]; /*0x603a8b*/
  }
  return 0; /*0x603a05*/
}
}
} // namespace gamemd

// 0x603AA0
namespace gamemd {
int IsDialogWindowClass(HWND a1, HWND a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall IsDialogWindowClass(HWND a1, HWND a2)
{
  int v3; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  HWND v8; // edi
  bool v9; // al
  HWND hWnd; // [esp+Ch] [ebp-84h] BYREF
  CHAR ClassName[128]; // [esp+10h] [ebp-80h] BYREF

  hWnd = a1; /*0x603ab2*/
  if ( !MEMORY[0xAC1B04] ) /*0x603ab6*/
    return 0; /*0x603ab6*/
  v3 = *((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&hWnd) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x603ad7*/
  if ( !v3 ) /*0x603adc*/
    return 0; /*0x603adc*/
  while ( *(HWND *)v3 != hWnd ) /*0x603ae4*/
  {
    v3 = *(_DWORD *)(v3 + 516); /*0x603ae6*/
    if ( !v3 ) /*0x603aee*/
      return 0; /*0x603aee*/
  }
  v5 = v3 + 4; /*0x603b00*/
  if ( v3 == -4 ) /*0x603b05*/
    return 0; /*0x603b05*/
  v6 = *(_DWORD *)(v3 + 112); /*0x603b07*/
  if ( v6 != 269 /*0x603b91*/
    && v6 != 217
    && v6 != 240
    && v6 != 206
    && v6 != 288
    && v6 != 289
    && v6 != 277
    && v6 != 211
    && v6 != 207
    && v6 != 287
    && v6 != 195
    && v6 != 283
    && v6 != 225
    && v6 != 286
    && v6 != 196
    && v6 != 304
    && v6 != 208
    && v6 != 252
    && v6 != 294 )
  {
    return 0; /*0x603b91*/
  }
  *(_DWORD *)(v5 + 176) = 2; /*0x603b97*/
  hWnd = a2; /*0x603bac*/
  GetClassNameA(a2, ClassName, 128); /*0x603bb0*/
  if ( !strcmp(ClassName, MEMORY[0x833728]) || !strcmp(ClassName, MEMORY[0x833720]) ) /*0x603c05*/
    return 192; /*0x603c2c*/
  if ( !strcmp(ClassName, MEMORY[0x833718]) /*0x603c99*/
    && MEMORY[0xAC1B04]
    && (v7 = *((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&hWnd) & ((1 << MEMORY[0xAC1B0C]) - 1)))) != 0 )
  {
    v8 = hWnd; /*0x603c9b*/
    while ( *(HWND *)v7 != hWnd ) /*0x603ca1*/
    {
      v7 = *(_DWORD *)(v7 + 516); /*0x603ca3*/
      if ( !v7 ) /*0x603cab*/
        goto LABEL_37; /*0x603cab*/
    }
    v9 = *(_DWORD *)(v7 + 108) == 1; /*0x603cb7*/
  }
  else
  {
    v8 = hWnd; /*0x603cbc*/
LABEL_37:
    if ( strcmp(ClassName, MEMORY[0x83370C]) ) /*0x603cd1*/
      return 0; /*0x603cf8*/
    v9 = (GetWindowLongA(v8, -16) & 3) != 3; /*0x603d0c*/
  }
  if ( !v9 ) /*0x603d11*/
    return 0; /*0x603afb*/
  return 192; /*0x603af0*/
}
}
} // namespace gamemd

// 0x603D30
namespace gamemd {
HWND * CacheDialogInvalidate(HWND hWnd, HWND a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HWND *__fastcall CacheDialogInvalidate(HWND hWnd, HWND a2)
{
  HWND *result; // eax
  HWND v5; // [esp+8h] [ebp-4h] BYREF

  result = (HWND *)MEMORY[0xAC1B04]; /*0x603d31*/
  v5 = hWnd; /*0x603d3e*/
  if ( MEMORY[0xAC1B04] ) /*0x603d42*/
  {
    result = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v5) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x603d63*/
    if ( result ) /*0x603d68*/
    {
      while ( *result != v5 ) /*0x603d70*/
      {
        result = (HWND *)result[129]; /*0x603d72*/
        if ( !result ) /*0x603d7a*/
          return result; /*0x603d7a*/
      }
      if ( ++result ) /*0x603d89*/
      {
        result[28] = (HWND)2; /*0x603d90*/
        result[5] = a2; /*0x603d97*/
        return (HWND *)InvalidateRect(hWnd, 0, 1); /*0x603d9a*/
      }
    }
  }
  return result; /*0x603d7c*/
}
}
} // namespace gamemd

// 0x603DD0
namespace gamemd {
LRESULT globalHelper_003DD0(HWND hWnd, unsigned signed char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LRESULT __fastcall globalHelper_003DD0(HWND hWnd, unsigned __int8 a2)
{
  return SendMessageA(hWnd, 0x4E6u, 0, a2); /*0x603de5*/
}
}
} // namespace gamemd

// 0x603E40
namespace gamemd {
unsigned int * sub_603E40(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__fastcall sub_603E40(int a1, int a2)
{
  _DWORD *result; // eax
  int v4; // [esp+4h] [ebp-4h] BYREF

  result = (_DWORD *)MEMORY[0xAC1B04]; /*0x603e41*/
  v4 = a1; /*0x603e4b*/
  if ( MEMORY[0xAC1B04] ) /*0x603e4f*/
  {
    result = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v4) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x603e70*/
    if ( result ) /*0x603e75*/
    {
      while ( *result != v4 ) /*0x603e7d*/
      {
        result = (_DWORD *)result[129]; /*0x603e7f*/
        if ( !result ) /*0x603e87*/
          return result; /*0x603e87*/
      }
      if ( ++result ) /*0x603e95*/
        result[48] = a2; /*0x603e97*/
    }
  }
  return result; /*0x603e89*/
}
}
} // namespace gamemd

// 0x603FC0
namespace gamemd {
wchar_t ** sub_603FC0(wchar_t ** a1, HWND a2, HWND hWnd, unsigned short a4, void * a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t **__fastcall sub_603FC0(wchar_t **a1, HWND a2, HWND hWnd, unsigned __int16 a4, void *a5)
{
  LPARAM lParam[2]; // [esp+10h] [ebp-Ch] BYREF
  void *v9; // [esp+18h] [ebp-4h] BYREF
  LRESULT v10; // [esp+24h] [ebp+8h]

  v10 = SendMessageA(hWnd, 0x4E8u, 0, a4 | ((unsigned __int16)a5 << 16)); /*0x603ffc*/
  unknown_libname_74(&v9); /*0x604000*/
  lParam[0] = (LPARAM)hWnd; /*0x604016*/
  lParam[1] = v10; /*0x60401a*/
  SendMessageA(a2, 0x4E9u, 0, (LPARAM)lParam); /*0x60401e*/
  WideString::AssignFromPtr((wchar_t **)&a5, (const wchar_t **)&v9); /*0x604029*/
  DeleteAndZero::Alt(&v9); /*0x604032*/
  WideString::AssignFromPtr(a1, (const wchar_t **)&a5); /*0x60403e*/
  DeleteAndZero::Alt(&a5); /*0x604047*/
  return a1; /*0x60404e*/
}
}
} // namespace gamemd

// 0x604060
namespace gamemd {
wchar_t ** GetSkirmishMenuOwnerName(SkirmishDialog * aP0, HWND a2, HWND a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t **__fastcall GetSkirmishMenuOwnerName(SkirmishDialog *aP0, HWND a2, HWND a3)
{
  char *v4; // eax
  wchar_t *StringCSF; // eax

  v4 = DlgSkirmishMenuProc(a2, a3); /*0x60406b*/
  if ( v4 ) /*0x604072*/
  {
    StringCSF = GetStringCSF((wchar_t *)v4, 0, &stru_830620.__pad_14B0[7264], 1957); /*0x604082*/
    WideString::Assign((wchar_t **)aP0, (CampaignScore *)StringCSF); /*0x60408a*/
  }
  else
  {
    WideString::Assign((wchar_t **)aP0, (CampaignScore *)&stru_87C374.__pad_579C[23588]); /*0x60409c*/
  }
  return (wchar_t **)aP0; /*0x604091*/
}
}
} // namespace gamemd

// 0x6040B0
namespace gamemd {
char * DlgSkirmishMenuProc(HWND a1, HWND a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (v3 export truncated pseudocode — commented out; live version via get_context)
// char *__fastcall DlgSkirmishMenuProc(HWND a1, HWND a2)
// {
//   HWND *v3; // eax
//   int v4; // esi
//   char *result; // eax
//   _DWORD *v6; // eax
//   HWND *v7; // eax
//   _DWORD *v8; // eax
//   int v9; // eax
//   HWND *v10; // eax
//   _DWORD *v11; // eax
//   int v12; // eax
//   HWND v13; // [esp+8h] [ebp-4h] BYREF
//
//   v13 = a1; /*0x6040bc*/
//   if ( !MEMORY[0xAC1B04] ) /*0x6040c0*/
//     goto LABEL_5; /*0x6040c0*/
//   v3 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v13) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x6040e1*/
//   if ( !v3 ) /*0x6040e6*/
//     goto LABEL_5; /*0x6040e6*/
//   while ( *v3 != v13 ) /*0x6040ee*/
//   {
//     v3 = (HWND *)v3[129]; /*0x6040f0*/
//     if ( !v3 ) /*0x6040f8*/
//       goto LABEL_5; /*0x6040f8*/
//   }
//   v6 = v3 + 1; /*0x60410f*/
//   if ( v6 ) /*0x604114*/
//     v4 = v6[27]; /*0x604116*/
//   else
// LABEL_5:
//     v4 = 0; /*0x6040fa*/
//   result = (char *)GetDlgCtrlID(a2); /*0x6040fd*/
//   if ( result ) /*0x604105*/
//   {
//     if ( result == (char *)-1 ) /*0x60411e*/
//       return 0; /*0x60411e*/
//     switch... [55429 chars total]
// end truncated pseudocode
}
} // namespace gamemd

// 0x606740
namespace gamemd {
int Dialog_SetActiveFlag(int a1, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall Dialog_SetActiveFlag(int a1, char a2)
{
  int result; // eax
  int v4; // [esp+4h] [ebp-4h] BYREF

  result = MEMORY[0xAC1B04]; /*0x606741*/
  v4 = a1; /*0x60674b*/
  if ( MEMORY[0xAC1B04] ) /*0x60674f*/
  {
    result = *((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v4) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x606770*/
    if ( result ) /*0x606775*/
    {
      while ( *(_DWORD *)result != v4 ) /*0x60677d*/
      {
        result = *(_DWORD *)(result + 516); /*0x60677f*/
        if ( !result ) /*0x606787*/
          return result; /*0x606787*/
      }
      result += 4; /*0x606790*/
      if ( result ) /*0x606795*/
        *(_BYTE *)(result + 188) = a2; /*0x606797*/
    }
  }
  return result; /*0x606789*/
}
}
} // namespace gamemd

// 0x6071E0
namespace gamemd {
LRESULT GadgetClass_RenderAnimation(HWND a1, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (v3 export truncated pseudocode — commented out; live version via get_context)
// LRESULT __fastcall GadgetClass_RenderAnimation(HWND a1, char a2)
// {
//   int v2; // esi
//   int v3; // eax
//   _DWORD *v4; // eax
//   int v5; // eax
//   _DWORD *v6; // eax
//   _DWORD *v7; // eax
//   _DWORD *v8; // eax
//   int v9; // eax
//   _DWORD *v10; // eax
//   int v11; // eax
//   int v12; // ebx
//   int v13; // edx
//   int *v14; // eax
//   int v15; // edi
//   int v16; // esi
//   int v17; // ebp
//   int v18; // eax
//   int v19; // eax
//   int v20; // ecx
//   int v21; // edx
//   int v22; // esi
//   HWND v23; // edi
//   int v24; // ebp
//   int v25; // edi
//   int *v26; // edx
//   int v27; // eax
//   int *v28; // ecx
//   int v29; // esi
//   int v30; // ecx
//   int v31; // edi
//   int v32; // ebx
//   int v33; // ebp
//   _DWORD *v34; // eax
//   int v35; // esi
//   int *v36; // eax
//   int v37; // eax
//   int *v38; // eax
//   int v39; // esi
//   int *v40; // eax
//   int *v41; // eax
//   int *v42; // eax
//   int v43; // eax
//   _DWORD *v44; // esi
//   int v45; // ebx
//   int v46; // eax
//   int v47; // esi
//   int v48; // ebx
//   int v49; // edx
//   int v50; // eax
//   int v51; // eax
//   in... [19354 chars total]
// end truncated pseudocode
}
} // namespace gamemd

// 0x608500
namespace gamemd {
char ControlDialogHandler(int a1, HWND a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall ControlDialogHandler(int a1, HWND a2, _DWORD *a3)
{
  int v4; // esi
  int DlgCtrlID; // eax
  _DWORD *v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v15; // [esp+8h] [ebp-8h] BYREF
  int v16; // [esp+Ch] [ebp-4h] BYREF

  v16 = a1; /*0x608504*/
  v15 = 0; /*0x60851a*/
  HashTable::Get(&MEMORY[0xAC1B00], &v16, &v15); /*0x608522*/
  if ( v15 ) /*0x60852d*/
    v4 = *(_DWORD *)(v15 + 108); /*0x60852f*/
  else
    v4 = 0; /*0x608534*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x608537*/
  if ( v4 != 148 ) /*0x608543*/
  {
    if ( v4 == 259 ) /*0x6086da*/
    {
      if ( DlgCtrlID != 1835 ) /*0x6086e1*/
        return 0; /*0x6086e1*/
      v7 = *((_DWORD *)MEMORY[0xA8B230] + 3374); /*0x6086f8*/
      if ( MEMORY[0x8A00A4] >= 800 ) /*0x608700*/
      {
        if ( v7 ) /*0x608704*/
        {
LABEL_31:
          v6 = __2_YAPAXI_Z(0x10u); /*0x608706*/
          if ( !v6 ) /*0x608715*/
            return 0; /*0x608715*/
          *v6 = 103; /*0x60871b*/
LABEL_47:
          v6[1] = 130; /*0x6087d2*/
          v6[2] = 424; /*0x6087d9*/
          v6[3] = 230; /*0x6087e0*/
          goto LABEL_143; /*0x6087e7*/
        }
        goto LABEL_39; /*0x608704*/
      }
      if ( !v7 ) /*0x608728*/
        goto LABEL_43; /*0x608728*/
      goto LABEL_45; /*0x608728*/
    }
    if ( v4 == 3015 ) /*0x608736*/
    {
      if ( DlgCtrlID != 1835 ) /*0x608741*/
        return 0; /*0x608741*/
      v8 = *((_DWORD *)MEMORY[0xA8B230] + 3374); /*0x608753*/
      if ( MEMORY[0x8A00A4] >= 800 ) /*0x608761*/
      {
        if ( v8 ) /*0x608765*/
          goto LABEL_31; /*0x608765*/
LABEL_39:
        v6 = __2_YAPAXI_Z(0x10u); /*0x608767*/
        if ( !v6 ) /*0x608773*/
          return 0; /*0x608773*/
        *v6 = 104; /*0x608779*/
LABEL_41:
        v6[1] = 142; /*0x60877f*/
        v6[2] = 424; /*0x608786*/
        v6[3] = 220; /*0x60878d*/
        goto LABEL_143; /*0x608794*/
      }
      if ( !v8 ) /*0x60879b*/
      {
LABEL_43:
        v6 = __2_YAPAXI_Z(0x10u); /*0x60879d*/
        if ( !v6 ) /*0x6087a9*/
          return 0; /*0x6087a9*/
        *v6 = 24; /*0x6087af*/
        goto LABEL_41; /*0x6087b5*/
      }
LABEL_45:
      v6 = __2_YAPAXI_Z(0x10u); /*0x6087b7*/
      if ( !v6 ) /*0x6087c6*/
        return 0; /*0x6087c6*/
      *v6 = 23; /*0x6087cc*/
      goto LABEL_47; /*0x6087cc*/
    }
    if ( v4 == 188 ) /*0x6087f2*/
    {
      switch ( DlgCtrlID ) /*0x6087fd*/
      {
        case 1839: /*0x6087fd*/
          v9 = MEMORY[0x8A00A4]; /*0x6087ff*/
          if ( MEMORY[0x8A00A4] == 640 ) /*0x60880c*/
            goto LABEL_51; /*0x60880c*/
          goto LABEL_80; /*0x60880c*/
        case 1842: /*0x6087fd*/
          goto LABEL_54; /*0x608849*/
        case 1934: /*0x6087fd*/
          goto LABEL_58; /*0x608874*/
        case 1933: /*0x6087fd*/
          goto LABEL_62; /*0x60889f*/
      }
    }
    else
    {
      if ( v4 != 189 ) /*0x6088fa*/
      {
        if ( v4 == 194 ) /*0x60893f*/
        {
          if ( DlgCtrlID != 1839 ) /*0x60894a*/
          {
            switch ( DlgCtrlID ) /*0x608975*/
            {
              case 1842: /*0x608975*/
                if ( MEMORY[0x8A00A4] == 640 ) /*0x608984*/
                {
                  v6 = __2_YAPAXI_Z(0x10u); /*0x608988*/
                  if ( !v6 ) /*0x608992*/
                    return 0; /*0x608992*/
                  *v6 = 110; /*0x608998*/
LABEL_116:
                  v6[1] = 215; /*0x608b49*/
                  v6[2] = 266; /*0x608b50*/
                  v6[3] = 22; /*0x608b57*/
                  goto LABEL_143; /*0x608b5e*/
                }
                if ( MEMORY[0x8A00A4] != 800 && MEMORY[0x8A00A4] != 1024 ) /*0x6089b1*/
                  return 0; /*0x6089b1*/
                v6 = __2_YAPAXI_Z(0x10u); /*0x6089b9*/
                if ( !v6 ) /*0x6089c3*/
                  return 0; /*0x6089c3*/
                *v6 = 180; /*0x6089c9*/
LABEL_111:
                v6[1] = 215; /*0x608b03*/
                v6[2] = 266; /*0x608b0a*/
                v6[3] = 21; /*0x608b11*/
                goto LABEL_143; /*0x608b18*/
              case 1934: /*0x608975*/
                goto LABEL_58; /*0x6089d9*/
              case 1933: /*0x608975*/
                goto LABEL_62; /*0x6089e4*/
            }
            if ( DlgCtrlID != 1932 ) /*0x6089ef*/
              return 0; /*0x6089ef*/
            v13 = MEMORY[0x8A00A4]; /*0x6089f5*/
            if ( MEMORY[0x8A00A4] != 640 ) /*0x608a02*/
            {
              if ( MEMORY[0x8A00A4] != 800 ) /*0x608a0e*/
                goto LABEL_95; /*0x608a0e*/
              goto LABEL_96; /*0x608a0e*/
            }
LABEL_135:
            v6 = __2_YAPAXI_Z(0x10u); /*0x608c42*/
            if ( !v6 ) /*0x608c4e*/
              return 0; /*0x608c4e*/
            *v6 = 346; /*0x608c50*/
            goto LABEL_141; /*0x608c56*/
          }
          v9 = MEMORY[0x8A00A4]; /*0x60894c*/
          if ( MEMORY[0x8A00A4] != 640 ) /*0x608959*/
            goto LABEL_80; /*0x608959*/
        }
        else
        {
          if ( v4 != 201 ) /*0x608a39*/
            return 0; /*0x608a39*/
          if ( DlgCtrlID != 1839 ) /*0x608a44*/
          {
            switch ( DlgCtrlID ) /*0x608ad6*/
            {
              case 1842: /*0x608ad6*/
                v10 = MEMORY[0x8A00A4]; /*0x608adc*/
                if ( MEMORY[0x8A00A4] != 640 ) /*0x608ae9*/
                {
                  if ( MEMORY[0x8A00A4] != 800 ) /*0x608b23*/
                    goto LABEL_113; /*0x608b23*/
                  goto LABEL_114; /*0x608b23*/
                }
                goto LABEL_109; /*0x608ae9*/
              case 1934: /*0x608ad6*/
                v11 = MEMORY[0x8A00A4]; /*0x608b6a*/
                if ( MEMORY[0x8A00A4] != 640 ) /*0x608b77*/
                {
                  if ( MEMORY[0x8A00A4] != 800 ) /*0x608b9c*/
                    goto LABEL_122; /*0x608b9c*/
                  goto LABEL_123; /*0x608b9c*/
                }
LABEL_119:
                v6 = __2_YAPAXI_Z(0x10u); /*0x608b79*/
                if ( !v6 ) /*0x608b85*/
                  return 0; /*0x608b85*/
                *v6 = 80; /*0x608b8b*/
                goto LABEL_141; /*0x608b91*/
              case 1933: /*0x608ad6*/
                v12 = MEMORY[0x8A00A4]; /*0x608bce*/
                if ( MEMORY[0x8A00A4] != 640 ) /*0x608bdb*/
                {
                  if ( MEMORY[0x8A00A4] != 800 ) /*0x608c00*/
                    goto LABEL_130; /*0x608c00*/
                  goto LABEL_131; /*0x608c00*/
                }
LABEL_127:
                v6 = __2_YAPAXI_Z(0x10u); /*0x608bdd*/
                if ( !v6 ) /*0x608be9*/
                  return 0; /*0x608be9*/
                *v6 = 228; /*0x608bef*/
                goto LABEL_141; /*0x608bf5*/
            }
            if ( DlgCtrlID != 1932 ) /*0x608c2d*/
              return 0; /*0x608c2d*/
            if ( MEMORY[0x8A00A4] != 640 ) /*0x608c40*/
            {
              if ( MEMORY[0x8A00A4] != 800 && MEMORY[0x8A00A4] != 1024 ) /*0x608c66*/
                return 0; /*0x608c66*/
              v6 = __2_YAPAXI_Z(0x10u); /*0x608c6a*/
              if ( !v6 ) /*0x608c74*/
                return 0; /*0x608c74*/
LABEL_140:
              *v6 = 430; /*0x608c76*/
LABEL_141:
              v6[1] = 190; /*0x608c7c*/
              v6[2] = 75; /*0x608c83*/
              goto LABEL_142; /*0x608c83*/
            }
            goto LABEL_135; /*0x608c40*/
          }
          v9 = MEMORY[0x8A00A4]; /*0x608a4a*/
          if ( MEMORY[0x8A00A4] != 640 ) /*0x608a57*/
          {
            if ( MEMORY[0x8A00A4] != 800 ) /*0x608a91*/
              goto LABEL_104; /*0x608a91*/
            goto LABEL_105; /*0x608a91*/
          }
        }
        v6 = __2_YAPAXI_Z(0x10u); /*0x608a5b*/
        if ( v6 ) /*0x608a65*/
        {
          *v6 = 52; /*0x608a6b*/
          v6[1] = 78; /*0x608a71*/
          v6[2] = 396; /*0x608a78*/
          v6[3] = 143; /*0x608a7f*/
          goto LABEL_143; /*0x608a86*/
        }
        return 0; /*0x608a65*/
      }
      switch ( DlgCtrlID ) /*0x608901*/
      {
        case 1839: /*0x608901*/
          v9 = MEMORY[0x8A00A4]; /*0x608903*/
          if ( MEMORY[0x8A00A4] == 640 ) /*0x608910*/
          {
LABEL_51:
            v6 = __2_YAPAXI_Z(0x10u); /*0x608812*/
            if ( v6 ) /*0x60881e*/
            {
              *v6 = 52; /*0x608824*/
              v6[1] = 78; /*0x60882a*/
              v6[2] = 396; /*0x608831*/
              v6[3] = 143; /*0x608838*/
              goto LABEL_143; /*0x60883f*/
            }
            return 0; /*0x60881e*/
          }
LABEL_80:
          if ( v9 != 800 ) /*0x608965*/
          {
LABEL_104:
            if ( v9 != 1024 ) /*0x608a99*/
              return 0; /*0x608a99*/
          }
LABEL_105:
          v6 = __2_YAPAXI_Z(0x10u); /*0x608a9f*/
          if ( v6 ) /*0x608aab*/
          {
            *v6 = 60; /*0x608ab1*/
            v6[1] = 98; /*0x608ab7*/
            v6[2] = 540; /*0x608abe*/
            v6[3] = 143; /*0x608ac5*/
            goto LABEL_143; /*0x608acc*/
          }
          return 0; /*0x608aab*/
        case 1842: /*0x608901*/
LABEL_54:
          v10 = MEMORY[0x8A00A4]; /*0x60884b*/
          if ( MEMORY[0x8A00A4] != 640 ) /*0x608858*/
          {
            if ( MEMORY[0x8A00A4] != 800 ) /*0x608864*/
            {
LABEL_113:
              if ( v10 != 1024 ) /*0x608b2b*/
                return 0; /*0x608b2b*/
            }
LABEL_114:
            v6 = __2_YAPAXI_Z(0x10u); /*0x608b31*/
            if ( !v6 ) /*0x608b3d*/
              return 0; /*0x608b3d*/
            *v6 = 180; /*0x608b43*/
            goto LABEL_116; /*0x608b43*/
          }
LABEL_109:
          v6 = __2_YAPAXI_Z(0x10u); /*0x608aeb*/
          if ( !v6 ) /*0x608af7*/
            return 0; /*0x608af7*/
          *v6 = 110; /*0x608afd*/
          goto LABEL_111; /*0x608afd*/
        case 1934: /*0x608901*/
LABEL_58:
          v11 = MEMORY[0x8A00A4]; /*0x608876*/
          if ( MEMORY[0x8A00A4] != 640 ) /*0x608883*/
          {
            if ( MEMORY[0x8A00A4] != 800 ) /*0x60888f*/
            {
LABEL_122:
              if ( v11 != 1024 ) /*0x608ba4*/
                return 0; /*0x608ba4*/
            }
LABEL_123:
            v6 = __2_YAPAXI_Z(0x10u); /*0x608baa*/
            if ( !v6 ) /*0x608bb6*/
              return 0; /*0x608bb6*/
            *v6 = 170; /*0x608bbc*/
            goto LABEL_141; /*0x608bc2*/
          }
          goto LABEL_119; /*0x608883*/
        case 1933: /*0x608901*/
LABEL_62:
          v12 = MEMORY[0x8A00A4]; /*0x6088a1*/
          if ( MEMORY[0x8A00A4] != 640 ) /*0x6088ae*/
          {
            if ( MEMORY[0x8A00A4] != 800 ) /*0x6088ba*/
            {
LABEL_130:
              if ( v12 != 1024 ) /*0x608c08*/
                return 0; /*0x608c08*/
            }
LABEL_131:
            v6 = __2_YAPAXI_Z(0x10u); /*0x608c0e*/
            if ( !v6 ) /*0x608c1a*/
              return 0; /*0x608c1a*/
            *v6 = 295; /*0x608c20*/
            goto LABEL_141; /*0x608c26*/
          }
          goto LABEL_127; /*0x6088ae*/
      }
    }
    if ( DlgCtrlID != 1932 ) /*0x6088ca*/
      return 0; /*0x6088ca*/
    v13 = MEMORY[0x8A00A4]; /*0x6088d0*/
    if ( MEMORY[0x8A00A4] != 640 ) /*0x6088dd*/
    {
      if ( MEMORY[0x8A00A4] != 800 ) /*0x6088e9*/
      {
LABEL_95:
        if ( v13 != 1024 ) /*0x608a16*/
          return 0; /*0x608a16*/
      }
LABEL_96:
      v6 = __2_YAPAXI_Z(0x10u); /*0x608a1c*/
      if ( !v6 ) /*0x608a28*/
        return 0; /*0x608a28*/
      goto LABEL_140; /*0x608a28*/
    }
    goto LABEL_135; /*0x6088dd*/
  }
  if ( MEMORY[0x8A00A4] < 800 ) /*0x608557*/
    return 0; /*0x608557*/
  if ( DlgCtrlID == 1770 ) /*0x608562*/
  {
    v6 = __2_YAPAXI_Z(0x10u); /*0x608566*/
    if ( v6 ) /*0x608570*/
    {
      *v6 = 141; /*0x608576*/
      v6[1] = 58; /*0x60857c*/
      v6[2] = 348; /*0x608583*/
      v6[3] = 136; /*0x60858a*/
LABEL_143:
      *a3 = *v6; /*0x608c95*/
      a3[1] = v6[1]; /*0x608ca3*/
      a3[2] = v6[2]; /*0x608ca9*/
      a3[3] = v6[3]; /*0x608caf*/
      __3_YAXPAX_Z(v6); /*0x608cb2*/
      return 1; /*0x608cc1*/
    }
    return 0; /*0x608570*/
  }
  if ( DlgCtrlID != 1772 ) /*0x60859b*/
  {
    switch ( DlgCtrlID ) /*0x6085d4*/
    {
      case 1295: /*0x6085d4*/
        v6 = __2_YAPAXI_Z(0x10u); /*0x6085d8*/
        if ( v6 ) /*0x6085e2*/
        {
          *v6 = 177; /*0x6085e8*/
          v6[1] = 265; /*0x6085ee*/
          v6[2] = 272; /*0x6085f5*/
          v6[3] = 22; /*0x6085fc*/
          goto LABEL_143; /*0x608603*/
        }
        return 0; /*0x6085e2*/
      case 1822: /*0x6085d4*/
        v6 = __2_YAPAXI_Z(0x10u); /*0x608611*/
        if ( !v6 ) /*0x60861b*/
          return 0; /*0x60861b*/
        *v6 = 177; /*0x608621*/
        v6[1] = 291; /*0x608627*/
        v6[2] = 141; /*0x60862e*/
        break;
      case 1648: /*0x6085d4*/
        v6 = __2_YAPAXI_Z(0x10u); /*0x608643*/
        if ( !v6 ) /*0x60864d*/
          return 0; /*0x60864d*/
        *v6 = 309; /*0x608653*/
        v6[1] = 291; /*0x608659*/
        v6[2] = 141; /*0x608660*/
        break;
      case 1959: /*0x6085d4*/
        v6 = __2_YAPAXI_Z(0x10u); /*0x608675*/
        if ( !v6 ) /*0x60867f*/
          return 0; /*0x60867f*/
        *v6 = 10; /*0x608685*/
        v6[1] = 198; /*0x60868b*/
        v6[2] = 610; /*0x608692*/
        break;
      case 1960: /*0x6085d4*/
        v6 = __2_YAPAXI_Z(0x10u); /*0x6086ab*/
        if ( !v6 ) /*0x6086b5*/
          return 0; /*0x6086b5*/
        *v6 = 10; /*0x6086bb*/
        v6[1] = 505; /*0x6086c1*/
        v6[2] = 610; /*0x6086c8*/
        break;
      default:
        return 0; /*0x6086a3*/
    }
LABEL_142:
    v6[3] = 20; /*0x608c8a*/
    goto LABEL_143; /*0x608c8a*/
  }
  v6 = __2_YAPAXI_Z(0x10u); /*0x60859f*/
  if ( v6 ) /*0x6085a9*/
  {
    *v6 = 141; /*0x6085af*/
    v6[1] = 364; /*0x6085b5*/
    v6[2] = 348; /*0x6085bc*/
    v6[3] = 136; /*0x6085c3*/
    goto LABEL_143; /*0x6085ca*/
  }
  return 0; /*0x608cbc*/
}
}
} // namespace gamemd

// 0x608CD0
namespace gamemd {
bool IsDialogControlVisible(int a1, HWND a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __fastcall IsDialogControlVisible(int a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int DlgCtrlID; // eax
  _DWORD *v7; // eax
  bool v9; // zf
  int v10; // [esp+8h] [ebp-4h] BYREF

  v10 = a1; /*0x608cdc*/
  if ( !MEMORY[0xAC1B04] ) /*0x608ce0*/
    goto LABEL_5; /*0x608ce0*/
  v3 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v10) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x608d01*/
  if ( !v3 ) /*0x608d06*/
    goto LABEL_5; /*0x608d06*/
  while ( *v3 != v10 ) /*0x608d0e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x608d14*/
    if ( !v3 ) /*0x608d1c*/
      goto LABEL_5; /*0x608d1c*/
  }
  v7 = v3 + 1; /*0x608f42*/
  if ( v7 ) /*0x608f47*/
    v4 = v7[27]; /*0x608f4d*/
  else
LABEL_5:
    v4 = 0; /*0x608d1e*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x608d21*/
  if ( (v4 == 268 /*0x608f32*/
     || v4 == 148
     || v4 == 163
     || v4 == 115
     || v4 == 216
     || v4 == 3003
     || v4 == 245
     || v4 == 261
     || v4 == 226
     || v4 == 213
     || v4 == 693
     || v4 == 183
     || v4 == 692
     || v4 == 3015
     || v4 == 257
     || v4 == 297
     || v4 == 3014
     || v4 == 215
     || v4 == 264
     || v4 == 188
     || v4 == 189
     || v4 == 187
     || v4 == 181
     || v4 == 3002
     || v4 == 255
     || v4 == 107
     || v4 == 256
     || v4 == 258
     || v4 == 184
     || v4 == 214
     || v4 == 259
     || v4 == 293
     || v4 == 231
     || v4 == 278
     || v4 == 194
     || v4 == 201
     || v4 == 285
     || v4 == 284
     || v4 == 276
     || v4 == 700
     || v4 == 275
     || v4 == 265
     || v4 == 271
     || v4 == 279
     || v4 == 230
     || v4 == 243
     || v4 == 244
     || v4 == 270
     || v4 == 274)
    && DlgCtrlID == 1684 )
  {
    return 1; /*0x608f39*/
  }
  if ( (v4 == 148 /*0x609082*/
     || v4 == 216
     || v4 == 245
     || v4 == 226
     || v4 == 213
     || v4 == 257
     || v4 == 297
     || v4 == 215
     || v4 == 187
     || v4 == 256
     || v4 == 214
     || v4 == 293
     || v4 == 290
     || v4 == 274
     || v4 == 231
     || v4 == 278
     || v4 == 285
     || v4 == 284
     || v4 == 254
     || v4 == 271
     || v4 == 279
     || v4 == 276
     || v4 == 230
     || v4 == 243
     || v4 == 244
     || v4 == 700
     || v4 == 270
     || v4 == 264
     || v4 == 3014
     || v4 == 3015)
    && DlgCtrlID == 1820 )
  {
    return 1; /*0x609089*/
  }
  if ( (v4 == 188 /*0x6090d4*/
     || v4 == 189
     || v4 == 258
     || v4 == 194
     || v4 == 201
     || v4 == 3014
     || v4 == 261
     || v4 == 107
     || v4 == 275)
    && DlgCtrlID == 1128 )
  {
    return 1; /*0x6090db*/
  }
  switch ( v4 ) /*0x6090e2*/
  {
    case 226: /*0x6090e2*/
      if ( DlgCtrlID != 1670 && DlgCtrlID != 1400 && DlgCtrlID != 1372 && DlgCtrlID != 1667 && DlgCtrlID != 1375 ) /*0x609115*/
        return DlgCtrlID == 1668; /*0x609120*/
      return 1; /*0x609115*/
    case 257: /*0x6090e2*/
      if ( DlgCtrlID == 1678 || DlgCtrlID == 1677 ) /*0x60913d*/
        return 1; /*0x60913d*/
      return DlgCtrlID == 1679; /*0x609148*/
    case 297: /*0x6090e2*/
      return DlgCtrlID == 1861; /*0x609164*/
    case 256: /*0x6090e2*/
      if ( DlgCtrlID == 1673 || DlgCtrlID == 1672 ) /*0x60917d*/
        return 1; /*0x60917d*/
      return DlgCtrlID == 1401; /*0x609188*/
    case 148: /*0x6090e2*/
      return DlgCtrlID == 1038; /*0x6091a4*/
    case 183: /*0x6090e2*/
      return DlgCtrlID == 1039; /*0x6091bc*/
    case 692: /*0x6090e2*/
      return DlgCtrlID == 1735; /*0x6091d4*/
    case 693: /*0x6090e2*/
      return DlgCtrlID == 1736; /*0x6091ec*/
    case 261: /*0x6090e2*/
      if ( DlgCtrlID == 1732 || DlgCtrlID == 1730 || DlgCtrlID == 1731 ) /*0x609210*/
        return 1; /*0x609210*/
      return DlgCtrlID == 1733; /*0x60921b*/
    case 258: /*0x6090e2*/
      if ( DlgCtrlID == 1772 || DlgCtrlID == 1450 || DlgCtrlID == 1448 ) /*0x609243*/
        return 1; /*0x609243*/
      return DlgCtrlID == 1559; /*0x60924e*/
    case 181: /*0x6090e2*/
      if ( DlgCtrlID == 1314 || DlgCtrlID == 1313 || DlgCtrlID == 1310 || DlgCtrlID == 1311 ) /*0x609281*/
        return 1; /*0x609281*/
      return DlgCtrlID == 1312; /*0x60928c*/
    case 3002: /*0x6090e2*/
      if ( DlgCtrlID == 1314 ) /*0x60929e*/
        return 1; /*0x60929e*/
      return DlgCtrlID == 1313; /*0x609662*/
    case 3003: /*0x6090e2*/
      if ( DlgCtrlID == 1324 ) /*0x6092bb*/
        return 1; /*0x6092bb*/
      return DlgCtrlID == 1325; /*0x6092c6*/
    case 213: /*0x6090e2*/
      if ( DlgCtrlID == 1486 ) /*0x6092d8*/
        return 1; /*0x6092d8*/
      return DlgCtrlID == 1485; /*0x6092e3*/
    case 251: /*0x6090e2*/
      if ( DlgCtrlID == 6 ) /*0x6092f3*/
        return 1; /*0x6092f3*/
      return DlgCtrlID == 1; /*0x6092fc*/
    case 216: /*0x6090e2*/
      return DlgCtrlID == 1739; /*0x609318*/
    case 215: /*0x6090e2*/
      return DlgCtrlID == 1; /*0x60932e*/
    case 188: /*0x6090e2*/
    case 194: /*0x6090e2*/
      return DlgCtrlID == 1772 || DlgCtrlID == 1416 || DlgCtrlID == 1450 || DlgCtrlID == 1448 || DlgCtrlID == 1474; /*0x60968b*/
    case 189: /*0x6090e2*/
    case 201: /*0x6090e2*/
      if ( DlgCtrlID == 1439 || DlgCtrlID == 1772 ) /*0x609654*/
        return 1; /*0x609654*/
      v9 = DlgCtrlID == 1448; /*0x609656*/
LABEL_244:
      if ( v9 ) /*0x60965b*/
        return 1; /*0x60965b*/
      return DlgCtrlID == 1474; /*0x60965d*/
    case 187: /*0x6090e2*/
      if ( DlgCtrlID == 1741 || DlgCtrlID == 1740 ) /*0x609377*/
        return 1; /*0x609377*/
      return DlgCtrlID == 1742; /*0x609382*/
    case 182: /*0x6090e2*/
      if ( DlgCtrlID == 1737 || DlgCtrlID == 1810 ) /*0x60939f*/
        return 1; /*0x60939f*/
      return DlgCtrlID == 1316; /*0x6093aa*/
    case 107: /*0x6090e2*/
      if ( DlgCtrlID == 1411 ) /*0x6093b9*/
        return 1; /*0x6093b9*/
      return DlgCtrlID == 1733; /*0x6093c4*/
    case 3014: /*0x6090e2*/
      if ( DlgCtrlID == 1745 || DlgCtrlID == 1772 ) /*0x6093e1*/
        return 1; /*0x6093e1*/
      return DlgCtrlID == 1448; /*0x6093ec*/
    case 271: /*0x6090e2*/
    case 285: /*0x6090e2*/
      return DlgCtrlID == 1337 || DlgCtrlID == 1772 || DlgCtrlID == 1771; /*0x609640*/
    case 265: /*0x6090e2*/
      if ( DlgCtrlID == 1 || DlgCtrlID == 1573 ) /*0x60941f*/
        return 1; /*0x60941f*/
      return DlgCtrlID == 1339; /*0x60942a*/
    case 270: /*0x6090e2*/
    case 284: /*0x6090e2*/
      return DlgCtrlID == 1760 /*0x609625*/
          || DlgCtrlID == 1761
          || DlgCtrlID == 1762
          || DlgCtrlID == 1764
          || DlgCtrlID == 1905
          || DlgCtrlID == 1375;
    case 276: /*0x6090e2*/
      if ( DlgCtrlID == 1671 || DlgCtrlID == 1772 || DlgCtrlID == 1771 || DlgCtrlID == 1672 ) /*0x609475*/
        return 1; /*0x609475*/
      return DlgCtrlID == 1955; /*0x609480*/
    case 275: /*0x6090e2*/
      if ( DlgCtrlID == 1567 /*0x6094d4*/
        || DlgCtrlID == 1672
        || DlgCtrlID == 1955
        || DlgCtrlID == 1958
        || DlgCtrlID == 1673
        || DlgCtrlID == 1581
        || DlgCtrlID == 1579 )
      {
        return 1; /*0x6094d4*/
      }
      v9 = DlgCtrlID == 1341; /*0x6094da*/
      goto LABEL_244; /*0x6094df*/
    case 700: /*0x6090e2*/
      if ( DlgCtrlID != 1 && DlgCtrlID != 1594 ) /*0x6094fa*/
        return 0; /*0x609505*/
      break;
    case 278: /*0x6090e2*/
      if ( DlgCtrlID != 1579 && DlgCtrlID != 1581 && DlgCtrlID != 1474 && DlgCtrlID != 1794 && DlgCtrlID != 1795 ) /*0x60953f*/
        return 0; /*0x60954a*/
      break;
    case 255: /*0x6090e2*/
      if ( DlgCtrlID != 1313 && DlgCtrlID != 1314 ) /*0x609563*/
        return 0; /*0x60956e*/
      break;
    case 290: /*0x6090e2*/
      return DlgCtrlID == 1; /*0x609584*/
    default:
      if ( v4 != 274 ) /*0x60958b*/
      {
        if ( v4 == 231 ) /*0x6095a1*/
          return DlgCtrlID == 1 || DlgCtrlID == 1398; /*0x6095b1*/
        if ( v4 == 254 ) /*0x6095c3*/
          return DlgCtrlID == 1; /*0x6095d2*/
        if ( v4 != 230 && v4 != 243 && v4 != 244 ) /*0x6095e9*/
          return 0; /*0x6095f0*/
      }
      return DlgCtrlID == 1; /*0x60959a*/
  }
  return 1; /*0x608f34*/
}
}
} // namespace gamemd

// 0x6096A0
namespace gamemd {
bool sub_6096A0(int a1, HWND a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __fastcall sub_6096A0(int a1, HWND a2)
{
  HWND *v4; // eax
  _DWORD *v6; // eax
  HWND v7; // [esp+8h] [ebp-4h] BYREF

  if ( (GetWindowLongA(a2, -16) & 0xB) != 0xB ) /*0x6096b5*/
    return 0; /*0x6096b5*/
  v7 = a2; /*0x6096bc*/
  if ( !MEMORY[0xAC1B04] ) /*0x6096c2*/
    return 0; /*0x6096c2*/
  v4 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v7) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x6096e3*/
  if ( !v4 ) /*0x6096e8*/
    return 0; /*0x6096e8*/
  while ( *v4 != v7 ) /*0x6096f0*/
  {
    v4 = (HWND *)v4[129]; /*0x6096f2*/
    if ( !v4 ) /*0x6096fa*/
      return 0; /*0x6096fa*/
  }
  v6 = v4 + 1; /*0x609706*/
  return v6 && !v6[26] && IsDialogControlVisible(a1, a2); /*0x609718*/
}
}
} // namespace gamemd

// 0x609730
namespace gamemd {
bool GetDialogDefaultButton(int a1, HWND a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __fastcall GetDialogDefaultButton(int a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int DlgCtrlID; // eax
  _DWORD *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x60973c*/
  if ( !MEMORY[0xAC1B04] ) /*0x609740*/
    goto LABEL_5; /*0x609740*/
  v3 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v8) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x609761*/
  if ( !v3 ) /*0x609766*/
    goto LABEL_5; /*0x609766*/
  while ( *v3 != v8 ) /*0x60976e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x609770*/
    if ( !v3 ) /*0x609778*/
      goto LABEL_5; /*0x609778*/
  }
  v7 = v3 + 1; /*0x60979f*/
  if ( v7 ) /*0x6097a4*/
    v4 = v7[27]; /*0x6097a6*/
  else
LABEL_5:
    v4 = 0; /*0x60977a*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x60977d*/
  switch ( v4 ) /*0x609789*/
  {
    case 226: /*0x609789*/
      return DlgCtrlID == 1006; /*0x609796*/
    case 115: /*0x609789*/
    case 268: /*0x609789*/
    case 259: /*0x609789*/
      return DlgCtrlID == 1059; /*0x609a8c*/
    case 264: /*0x609789*/
    case 3015: /*0x609789*/
      return DlgCtrlID == 1745; /*0x609a7c*/
    case 148: /*0x609789*/
    case 182: /*0x609789*/
    case 163: /*0x609789*/
    case 216: /*0x609789*/
    case 3003: /*0x609789*/
    case 245: /*0x609789*/
    case 213: /*0x609789*/
    case 693: /*0x609789*/
    case 183: /*0x609789*/
    case 692: /*0x609789*/
    case 257: /*0x609789*/
    case 297: /*0x609789*/
    case 181: /*0x609789*/
    case 3002: /*0x609789*/
    case 256: /*0x609789*/
    case 184: /*0x609789*/
    case 214: /*0x609789*/
    case 293: /*0x609789*/
    case 278: /*0x609789*/
    case 285: /*0x609789*/
    case 284: /*0x609789*/
    case 275: /*0x609789*/
    case 265: /*0x609789*/
    case 271: /*0x609789*/
    case 276: /*0x609789*/
    case 270: /*0x609789*/
      return DlgCtrlID == 1670; /*0x609a6c*/
    case 258: /*0x609789*/
    case 261: /*0x609789*/
    case 107: /*0x609789*/
    case 187: /*0x609789*/
    case 279: /*0x609789*/
    case 3014: /*0x609789*/
      return DlgCtrlID == 1472; /*0x609a5c*/
    case 188: /*0x609789*/
    case 189: /*0x609789*/
    case 234: /*0x609789*/
    case 215: /*0x609789*/
    case 194: /*0x609789*/
    case 201: /*0x609789*/
    case 700: /*0x609789*/
    case 231: /*0x609789*/
    case 230: /*0x609789*/
    case 243: /*0x609789*/
    case 244: /*0x609789*/
    case 290: /*0x609789*/
    case 274: /*0x609789*/
    case 254: /*0x609789*/
    case 252: /*0x609789*/
      return DlgCtrlID == 2; /*0x609a4c*/
    case 212: /*0x609789*/
      return DlgCtrlID == 1; /*0x609a0a*/
    case 251: /*0x609789*/
      return DlgCtrlID == 7; /*0x609a20*/
    case 255: /*0x609789*/
      return DlgCtrlID == 1653; /*0x609a38*/
  }
  return 0; /*0x609795*/
}
}
} // namespace gamemd

// 0x609AA0
namespace gamemd {
bool sub_609AA0(int a1, HWND a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __fastcall sub_609AA0(int a1, HWND a2)
{
  HWND *v4; // eax
  _DWORD *v6; // eax
  HWND v7; // [esp+8h] [ebp-4h] BYREF

  if ( (GetWindowLongA(a2, -16) & 0xB) != 0xB ) /*0x609ab5*/
    return 0; /*0x609ab5*/
  v7 = a2; /*0x609abc*/
  if ( !MEMORY[0xAC1B04] ) /*0x609ac2*/
    return 0; /*0x609ac2*/
  v4 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v7) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x609ae3*/
  if ( !v4 ) /*0x609ae8*/
    return 0; /*0x609ae8*/
  while ( *v4 != v7 ) /*0x609af0*/
  {
    v4 = (HWND *)v4[129]; /*0x609af2*/
    if ( !v4 ) /*0x609afa*/
      return 0; /*0x609afa*/
  }
  v6 = v4 + 1; /*0x609b06*/
  return v6 && !v6[26] && GetDialogDefaultButton(a1, a2); /*0x609b18*/
}
}
} // namespace gamemd

// 0x609B30
namespace gamemd {
bool sub_609B30(int a1, HWND a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __fastcall sub_609B30(int a1, HWND a2)
{
  _DWORD *v3; // eax
  void *v4; // esi
  int DlgCtrlID; // edi
  _DWORD *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x609b3c*/
  if ( !MEMORY[0xAC1B04] ) /*0x609b40*/
    goto LABEL_5; /*0x609b40*/
  v3 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v8) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x609b61*/
  if ( !v3 ) /*0x609b66*/
    goto LABEL_5; /*0x609b66*/
  while ( *v3 != v8 ) /*0x609b6e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x609b70*/
    if ( !v3 ) /*0x609b78*/
      goto LABEL_5; /*0x609b78*/
  }
  v7 = v3 + 1; /*0x609ba2*/
  if ( v7 ) /*0x609ba7*/
    v4 = (void *)v7[27]; /*0x609ba9*/
  else
LABEL_5:
    v4 = 0; /*0x609b7a*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x609b85*/
  return Event::IsValidActionType(v4) && DlgCtrlID == 1685; /*0x609b98*/
}
}
} // namespace gamemd

// 0x609BC0
namespace gamemd {
bool sub_609BC0(int a1, HWND a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __fastcall sub_609BC0(int a1, HWND a2)
{
  HWND *v4; // eax
  HWND *v5; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  HWND v9; // [esp+Ch] [ebp-4h] BYREF

  if ( SessionClass::GetGameSpeed(MEMORY[0xA8B238]) ) /*0x609bcd*/
    return 0; /*0x609bcd*/
  if ( (GetWindowLongA(a2, -16) & 0xB) == 0xB ) /*0x609bea*/
  {
    v9 = a2; /*0x609bf1*/
    if ( MEMORY[0xAC1B04] ) /*0x609bf7*/
    {
      v4 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v9) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x609c18*/
      if ( v4 ) /*0x609c1d*/
      {
        while ( *v4 != v9 ) /*0x609c25*/
        {
          v4 = (HWND *)v4[129]; /*0x609c27*/
          if ( !v4 ) /*0x609c2f*/
            goto LABEL_7; /*0x609c2f*/
        }
        v7 = v4 + 1; /*0x609c95*/
        if ( v7 ) /*0x609c9a*/
        {
          if ( !v7[26] && IsDialogControlVisible(a1, a2) ) /*0x609ca7*/
            return 1; /*0x609cb6*/
        }
      }
    }
  }
LABEL_7:
  if ( (GetWindowLongA(a2, -16) & 0xB) != 0xB ) /*0x609c3b*/
    return 0; /*0x609c3b*/
  v9 = a2; /*0x609c46*/
  if ( !MEMORY[0xAC1B04] ) /*0x609c4c*/
    return 0; /*0x609c4c*/
  v5 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v9) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x609c71*/
  if ( !v5 ) /*0x609c76*/
    return 0; /*0x609c76*/
  while ( *v5 != v9 ) /*0x609c7e*/
  {
    v5 = (HWND *)v5[129]; /*0x609c80*/
    if ( !v5 ) /*0x609c88*/
      return 0; /*0x609c90*/
  }
  v8 = v5 + 1; /*0x609cbb*/
  return v8 && !v8[26] && GetDialogDefaultButton(a1, a2); /*0x609cd8*/
}
}
} // namespace gamemd

// 0x609CF0
namespace gamemd {
bool sub_609CF0(int a1, HWND a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __fastcall sub_609CF0(int a1, HWND a2)
{
  HWND *v4; // eax
  HWND *v5; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  HWND v9; // [esp+Ch] [ebp-4h] BYREF

  if ( !SessionClass::GetGameSpeed(MEMORY[0xA8B238]) ) /*0x609cfd*/
    return 0; /*0x609cfd*/
  if ( (GetWindowLongA(a2, -16) & 0xB) == 0xB ) /*0x609d1a*/
  {
    v9 = a2; /*0x609d21*/
    if ( MEMORY[0xAC1B04] ) /*0x609d27*/
    {
      v4 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v9) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x609d48*/
      if ( v4 ) /*0x609d4d*/
      {
        while ( *v4 != v9 ) /*0x609d55*/
        {
          v4 = (HWND *)v4[129]; /*0x609d57*/
          if ( !v4 ) /*0x609d5f*/
            goto LABEL_7; /*0x609d5f*/
        }
        v7 = v4 + 1; /*0x609dc5*/
        if ( v7 ) /*0x609dca*/
        {
          if ( !v7[26] && IsDialogControlVisible(a1, a2) ) /*0x609dd7*/
            return 1; /*0x609de6*/
        }
      }
    }
  }
LABEL_7:
  if ( (GetWindowLongA(a2, -16) & 0xB) != 0xB ) /*0x609d6b*/
    return 0; /*0x609d6b*/
  v9 = a2; /*0x609d76*/
  if ( !MEMORY[0xAC1B04] ) /*0x609d7c*/
    return 0; /*0x609d7c*/
  v5 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v9) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x609da1*/
  if ( !v5 ) /*0x609da6*/
    return 0; /*0x609da6*/
  while ( *v5 != v9 ) /*0x609dae*/
  {
    v5 = (HWND *)v5[129]; /*0x609db0*/
    if ( !v5 ) /*0x609db8*/
      return 0; /*0x609dc0*/
  }
  v8 = v5 + 1; /*0x609deb*/
  return v8 && !v8[26] && GetDialogDefaultButton(a1, a2); /*0x609e08*/
}
}
} // namespace gamemd

// 0x609E20
namespace gamemd {
bool FilterDialogButtonAction(int a1, HWND a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __fastcall FilterDialogButtonAction(int a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int DlgCtrlID; // eax
  _DWORD *v7; // eax
  int v9; // [esp+8h] [ebp-4h] BYREF

  v9 = a1; /*0x609e2c*/
  if ( !MEMORY[0xAC1B04] ) /*0x609e30*/
    goto LABEL_5; /*0x609e30*/
  v3 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v9) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x609e51*/
  if ( !v3 ) /*0x609e56*/
    goto LABEL_5; /*0x609e56*/
  while ( *v3 != v9 ) /*0x609e5e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x609e60*/
    if ( !v3 ) /*0x609e68*/
      goto LABEL_5; /*0x609e68*/
  }
  v7 = v3 + 1; /*0x609e94*/
  if ( v7 ) /*0x609e99*/
    v4 = v7[27]; /*0x609e9b*/
  else
LABEL_5:
    v4 = 0; /*0x609e6a*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x609e6d*/
  switch ( v4 ) /*0x609e79*/
  {
    case 269: /*0x609e79*/
      if ( DlgCtrlID != 1473 ) /*0x609e80*/
        return DlgCtrlID == 1472; /*0x609e8b*/
      return 1; /*0x60a0ee*/
    case 217: /*0x609e79*/
      if ( DlgCtrlID == 1473 ) /*0x609ead*/
        return 1; /*0x609ead*/
      return DlgCtrlID == 1738; /*0x60a0de*/
    case 163: /*0x609e79*/
      if ( DlgCtrlID == 1231 ) /*0x609eca*/
        return 1; /*0x609eca*/
      return DlgCtrlID == 1232; /*0x609ed5*/
    case 261: /*0x609e79*/
      if ( DlgCtrlID == 1568 ) /*0x609ee7*/
        return 1; /*0x609ee7*/
      return DlgCtrlID == 1569; /*0x609ef2*/
    case 240: /*0x609e79*/
      return DlgCtrlID == 1472; /*0x609f0e*/
    case 206: /*0x609e79*/
      return DlgCtrlID == 1454; /*0x609f26*/
    case 288: /*0x609e79*/
      if ( DlgCtrlID == 1454 ) /*0x609f34*/
        return 1; /*0x609f34*/
      return DlgCtrlID == 2; /*0x609f3d*/
    case 289: /*0x609e79*/
      if ( DlgCtrlID == 1454 || DlgCtrlID == 1455 ) /*0x609f5a*/
        return 1; /*0x609f5a*/
      return DlgCtrlID == 2; /*0x609f63*/
    case 234: /*0x609e79*/
      if ( DlgCtrlID == 1600 /*0x609fb7*/
        || DlgCtrlID == 1602
        || DlgCtrlID == 1601
        || DlgCtrlID == 1603
        || DlgCtrlID == 1604
        || DlgCtrlID == 1605
        || DlgCtrlID == 1606 )
      {
        return 1; /*0x609fb7*/
      }
      return DlgCtrlID == 1607; /*0x609fc2*/
    case 184: /*0x609e79*/
      if ( DlgCtrlID == 1329 ) /*0x609fd4*/
        return 1; /*0x609fd4*/
      return DlgCtrlID == 1333; /*0x609fdf*/
    case 287: /*0x609e79*/
      return DlgCtrlID == 1472; /*0x609ffb*/
    case 277: /*0x609e79*/
      if ( DlgCtrlID == 1794 ) /*0x60a009*/
        return 1; /*0x60a009*/
      return DlgCtrlID == 1670; /*0x60a014*/
    case 211: /*0x609e79*/
      return DlgCtrlID == 2; /*0x60a02e*/
    case 207: /*0x609e79*/
      if ( DlgCtrlID == 1474 ) /*0x60a03c*/
        return 1; /*0x60a03c*/
      return DlgCtrlID == 2; /*0x60a045*/
    case 195: /*0x609e79*/
      if ( DlgCtrlID == 1 ) /*0x60a055*/
        return 1; /*0x60a055*/
      return DlgCtrlID == 2; /*0x60a05e*/
    case 283: /*0x609e79*/
      goto LABEL_57; /*0x60a066*/
    case 225: /*0x609e79*/
      if ( DlgCtrlID == 1 ) /*0x60a081*/
        return 1; /*0x60a081*/
      return DlgCtrlID == 2; /*0x60a086*/
    case 286: /*0x609e79*/
LABEL_57:
      if ( DlgCtrlID == 1474 ) /*0x60a06d*/
        return 1; /*0x60a06d*/
      return DlgCtrlID == 1670; /*0x60a074*/
    case 196: /*0x609e79*/
      if ( DlgCtrlID == 1421 ) /*0x60a09d*/
        return 1; /*0x60a09d*/
      return DlgCtrlID == 1422; /*0x60a0a4*/
    case 208: /*0x609e79*/
      return DlgCtrlID == 1; /*0x60a0bb*/
    case 252: /*0x609e79*/
      if ( DlgCtrlID == 1 ) /*0x60a0c7*/
        return 1; /*0x60a0c7*/
      return DlgCtrlID == 2; /*0x60a0cc*/
    case 294: /*0x609e79*/
      if ( DlgCtrlID == 6 ) /*0x60a0d9*/
        return 1; /*0x60a0d9*/
      return DlgCtrlID == 7; /*0x60a0db*/
  }
  return 0; /*0x609f09*/
}
}
} // namespace gamemd

// 0x60A100
namespace gamemd {
bool sub_60A100(int a1, HWND a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __fastcall sub_60A100(int a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int DlgCtrlID; // eax
  _DWORD *v7; // eax
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = a1; /*0x60a10c*/
  if ( !MEMORY[0xAC1B04] ) /*0x60a110*/
    goto LABEL_5; /*0x60a110*/
  v3 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v8) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x60a131*/
  if ( !v3 ) /*0x60a136*/
    goto LABEL_5; /*0x60a136*/
  while ( *v3 != v8 ) /*0x60a13e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x60a140*/
    if ( !v3 ) /*0x60a148*/
      goto LABEL_5; /*0x60a148*/
  }
  v7 = v3 + 1; /*0x60a16f*/
  if ( v7 ) /*0x60a174*/
    v4 = v7[27]; /*0x60a176*/
  else
LABEL_5:
    v4 = 0; /*0x60a14a*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x60a14d*/
  return v4 == 226 && DlgCtrlID == 1821; /*0x60a159*/
}
}
} // namespace gamemd

// 0x60A180
namespace gamemd {
BOOL EnumFunc(HWND hWnd, LPARAM a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __stdcall EnumFunc(HWND hWnd, LPARAM a2)
{
  HWND v2; // esi
  HWND Parent; // edi
  int v4; // eax
  int v6; // eax

  v2 = hWnd; /*0x60a181*/
  Parent = GetParent(hWnd); /*0x60a190*/
  if ( (GetWindowLongA(v2, -16) & 0xB) == 0xB ) /*0x60a19d*/
  {
    hWnd = v2; /*0x60a1a4*/
    if ( MEMORY[0xAC1B04] ) /*0x60a1aa*/
    {
      v4 = *((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&hWnd) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x60a1cb*/
      if ( v4 ) /*0x60a1d0*/
      {
        while ( *(HWND *)v4 != hWnd ) /*0x60a1d8*/
        {
          v4 = *(_DWORD *)(v4 + 516); /*0x60a1da*/
          if ( !v4 ) /*0x60a1e2*/
            return 1; /*0x60a1eb*/
        }
        v6 = v4 + 4; /*0x60a1f2*/
        if ( v6 && !*(_DWORD *)(v6 + 104) && IsDialogControlVisible((int)Parent, v2) ) /*0x60a204*/
        {
          if ( IsWindowVisible(v2) ) /*0x60a20e*/
            ++MEMORY[0xAC1CAC]; /*0x60a218*/
        }
      }
    }
  }
  return 1; /*0x60a1e4*/
}
}
} // namespace gamemd

// 0x60A250
namespace gamemd {
BOOL sub_60A250(HWND hWnd, LPARAM a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __stdcall sub_60A250(HWND hWnd, LPARAM a2)
{
  HWND v2; // esi
  HWND Parent; // edi
  int v4; // eax
  int v6; // eax

  v2 = hWnd; /*0x60a251*/
  Parent = GetParent(hWnd); /*0x60a260*/
  if ( (GetWindowLongA(v2, -16) & 0xB) == 0xB ) /*0x60a26d*/
  {
    hWnd = v2; /*0x60a274*/
    if ( MEMORY[0xAC1B04] ) /*0x60a27a*/
    {
      v4 = *((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&hWnd) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x60a29b*/
      if ( v4 ) /*0x60a2a0*/
      {
        while ( *(HWND *)v4 != hWnd ) /*0x60a2a8*/
        {
          v4 = *(_DWORD *)(v4 + 516); /*0x60a2aa*/
          if ( !v4 ) /*0x60a2b2*/
            return 1; /*0x60a2bb*/
        }
        v6 = v4 + 4; /*0x60a2c2*/
        if ( v6 && !*(_DWORD *)(v6 + 104) && GetDialogDefaultButton((int)Parent, v2) ) /*0x60a2d4*/
        {
          if ( IsWindowVisible(v2) ) /*0x60a2de*/
            ++MEMORY[0xAC4894]; /*0x60a2e8*/
        }
      }
    }
  }
  return 1; /*0x60a2b4*/
}
}
} // namespace gamemd

// 0x60AA60
namespace gamemd {
BOOL sub_60AA60(HWND hWnd, LPARAM a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __stdcall sub_60AA60(HWND hWnd, LPARAM a2)
{
  HWND Parent; // eax

  Parent = GetParent(hWnd); /*0x60aa66*/
  if ( IsValidActionDialog((int)Parent, hWnd) ) /*0x60aa70*/
    SendMessageA(hWnd, 0x4EEu, 0, 0); /*0x60aa83*/
  return 1; /*0x60aa8e*/
}
}
} // namespace gamemd

// 0x60B000
namespace gamemd {
BOOL RepositionGameSpeedIndicator(HWND hWnd, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __fastcall RepositionGameSpeedIndicator(HWND hWnd, int a2)
{
  HWND Parent; // esi
  char GameSpeed; // bl
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // ebx
  int v9; // edi
  HWND v10; // eax
  _DWORD *v12; // [esp+10h] [ebp-54h]
  int nWidtha; // [esp+14h] [ebp-50h]
  int v15; // [esp+1Ch] [ebp-48h]
  struct tagRECT Rect; // [esp+24h] [ebp-40h] BYREF
  struct tagRECT v17; // [esp+34h] [ebp-30h] BYREF
  struct tagRECT v18; // [esp+44h] [ebp-20h] BYREF
  struct tagRECT v19; // [esp+54h] [ebp-10h] BYREF

  Parent = GetParent(hWnd); /*0x60b019*/
  GameSpeed = SessionClass::GetGameSpeed(MEMORY[0xA8B238]); /*0x60b020*/
  GetWindowRect(Parent, &Rect); /*0x60b02e*/
  GetWindowRect(hWnd, &v19); /*0x60b036*/
  if ( GameSpeed )
  {
    v8 = *((__int16 *)MEMORY[0xB0F9EC] + 2); /*0x60b134*/
    nWidtha = *((__int16 *)MEMORY[0xB0F9EC] + 1); /*0x60b145*/
    v12 = MEMORY[0xB0FC48]; /*0x60b149*/
    v9 = Rect.right - Rect.left - 147; /*0x60b14d*/
    v10 = GetParent(hWnd); /*0x60b14f*/
    GetWindowRect(v10, &v18); /*0x60b15b*/
    GetWindowRect(hWnd, &v17); /*0x60b163*/
    return MoveWindow( /*0x60b1a0*/
             hWnd,
             v9,
             v12[1] + v8 * (((v17.bottom - v17.top) / 2 + v17.top - v18.top - 198) / 44),
             nWidtha,
             v8,
             0);
  }
  else
  {
    v5 = *((_DWORD *)MEMORY[0xB0FC24] + 3); /*0x60b0d8*/
    v15 = *((_DWORD *)MEMORY[0xB0FC24] + 1); /*0x60b0db*/
    v6 = ((Rect.bottom - Rect.top - 600) / 2 < 0 ? 0 : (Rect.bottom - Rect.top - 600) / 2)
       - ((*(_DWORD *)(a2 + 4) - 600) / 2 < 0 ? 0 : (*(_DWORD *)(a2 + 4) - 600) / 2)
       + v19.top
       - v15
       - Rect.top;
    if ( (int)abs32(v6 % v5) >= (int)abs32(v6 / v5 * v5 + v5 - v6) ) /*0x60b115*/
      v7 = v6 / v5 + 1; /*0x60b1a6*/
    else
      v7 = v6 / v5; /*0x60b11b*/
    return MoveWindow(
             hWnd,
             Rect.right
           - ((Rect.right - Rect.left - 800) / 2 < 0 ? 0 : (Rect.right - Rect.left - 800) / 2)
           - Rect.left
           - 156,
             v15 + v7 * v5,
             *((__int16 *)MEMORY[0xB0FAC4] + 1),
             *((__int16 *)MEMORY[0xB0FAC4] + 2),
             0);
  }
}
}
} // namespace gamemd

// 0x60B740
namespace gamemd {
BOOL sub_60B740(HWND hWnd)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __thiscall sub_60B740(HWND hWnd)
{
  HWND Parent; // eax
  struct tagRECT v4; // [esp+8h] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+18h] [ebp-10h] BYREF

  Parent = GetParent(hWnd); /*0x60b748*/
  GetWindowRect(Parent, &Rect); /*0x60b75a*/
  GetWindowRect(hWnd, &v4); /*0x60b762*/
  return MoveWindow(hWnd, v4.left - Rect.left, v4.top - Rect.top, v4.right - v4.left, v4.bottom - v4.top, 0); /*0x60b791*/
}
}
} // namespace gamemd

// 0x60B880
namespace gamemd {
bool sub_60B880(int a1, HWND a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __fastcall sub_60B880(int a1, HWND a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  _DWORD *v6; // eax
  int v7; // [esp+8h] [ebp-4h] BYREF

  v7 = a1; /*0x60b88c*/
  if ( !MEMORY[0xAC1B04] ) /*0x60b890*/
    goto LABEL_5; /*0x60b890*/
  v3 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v7) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x60b8b1*/
  if ( !v3 ) /*0x60b8b6*/
    goto LABEL_5; /*0x60b8b6*/
  while ( *v3 != v7 ) /*0x60b8be*/
  {
    v3 = (_DWORD *)v3[129]; /*0x60b8c0*/
    if ( !v3 ) /*0x60b8c8*/
      goto LABEL_5; /*0x60b8c8*/
  }
  v6 = v3 + 1; /*0x60b93a*/
  if ( v6 ) /*0x60b93f*/
    v4 = v6[27]; /*0x60b941*/
  else
LABEL_5:
    v4 = 0; /*0x60b8ca*/
  GetDlgCtrlID(a2); /*0x60b8cd*/
  return v4 == 183 /*0x60b930*/
      || v4 == 692
      || v4 == 3003
      || v4 == 245
      || v4 == 693
      || v4 == 184
      || v4 == 163
      || v4 == 182
      || v4 == 268
      || v4 == 115
      || v4 == 255
      || v4 == 234;
}
}
} // namespace gamemd

// 0x60C0C0
namespace gamemd {
BOOL RepositionDialogControls(HWND hWnd, HWND a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __stdcall RepositionDialogControls(HWND hWnd, HWND a2)
{
  HWND v2; // esi
  HWND Parent; // ebx
  int v5; // eax
  int v6; // eax
  HWND *v7; // eax
  void *v8; // edi
  int DlgCtrlID; // ebp
  _DWORD *v10; // eax
  int v11; // edi
  int v12; // eax
  HWND *v13; // eax
  int v14; // edi
  _DWORD *v15; // eax
  HWND v16; // eax
  _DWORD v17[4]; // [esp+Ch] [ebp-30h] BYREF
  struct tagRECT v18; // [esp+1Ch] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+2Ch] [ebp-10h] BYREF

  v2 = hWnd; /*0x60c0c5*/
  Parent = GetParent(hWnd); /*0x60c0d0*/
  if ( (HWND)MEMORY[0xAC48A8] != Parent ) /*0x60c0dd*/
    return 1; /*0x60c48f*/
  memset(v17, 0, sizeof(v17)); /*0x60c0f0*/
  if ( ControlDialogHandler((int)Parent, v2, v17) ) /*0x60c100*/
  {
    UI_Get(v2, v17); /*0x60c10f*/
    Control::RepositionControlsDialog(v2); /*0x60c116*/
    return 1; /*0x60c11e*/
  }
  else
  {
    if ( (GetWindowLongA(v2, -16) & 0xB) != 0xB ) /*0x60c13a*/
      goto LABEL_9; /*0x60c13a*/
    hWnd = v2; /*0x60c141*/
    if ( !MEMORY[0xAC1B04] ) /*0x60c147*/
      goto LABEL_9; /*0x60c147*/
    v5 = *((_DWORD *)MEMORY[0xAC1B00] + HashTable::ComputeHash((int)&MEMORY[0xAC1B00], (int)&hWnd)); /*0x60c15e*/
    if ( !v5 ) /*0x60c163*/
      goto LABEL_9; /*0x60c163*/
    while ( *(HWND *)v5 != hWnd ) /*0x60c16b*/
    {
      v5 = *(_DWORD *)(v5 + 516); /*0x60c16d*/
      if ( !v5 ) /*0x60c175*/
        goto LABEL_9; /*0x60c175*/
    }
    v6 = v5 + 4; /*0x60c1a9*/
    if ( v6 && !*(_DWORD *)(v6 + 104) && IsDialogControlVisible((int)Parent, v2) ) /*0x60c1b9*/
    {
      RepositionGameSpeedIndicator(v2, (int)a2); /*0x60c1c8*/
      Control::RepositionControlsDialog(v2); /*0x60c1cf*/
      return 1; /*0x60c1d7*/
    }
    else
    {
LABEL_9:
      if ( IsDialogControlVisible((int)Parent, v2) ) /*0x60c17b*/
      {
        UI_Get_60B1D0(v2, a2); /*0x60c18a*/
        Control::RepositionControlsDialog(v2); /*0x60c191*/
        return 1; /*0x60c199*/
      }
      else if ( (GetWindowLongA(v2, -16) & 0xB) == 0xB /*0x60c21c*/
             && (hWnd = v2, a2 = 0, HashTable::Get(&MEMORY[0xAC1B00], &hWnd, &a2), a2)
             && !*((_DWORD *)a2 + 26)
             && GetDialogDefaultButton((int)Parent, v2) )
      {
        UI_Get_60B350(v2); /*0x60c227*/
        Control::RepositionControlsDialog(v2); /*0x60c22e*/
        return 1; /*0x60c236*/
      }
      else if ( GetDialogDefaultButton((int)Parent, v2) ) /*0x60c246*/
      {
        UI_Get_60B420(v2); /*0x60c251*/
        Control::RepositionControlsDialog(v2); /*0x60c258*/
        return 1; /*0x60c260*/
      }
      else
      {
        a2 = Parent; /*0x60c271*/
        if ( !MEMORY[0xAC1B04] ) /*0x60c277*/
          goto LABEL_26; /*0x60c277*/
        v7 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + HashTable::ComputeHash((int)&MEMORY[0xAC1B00], (int)&a2)); /*0x60c28e*/
        if ( !v7 ) /*0x60c293*/
          goto LABEL_26; /*0x60c293*/
        while ( *v7 != a2 ) /*0x60c29b*/
        {
          v7 = (HWND *)v7[129]; /*0x60c29d*/
          if ( !v7 ) /*0x60c2a5*/
            goto LABEL_26; /*0x60c2a5*/
        }
        v10 = v7 + 1; /*0x60c2e8*/
        if ( v10 ) /*0x60c2ed*/
          v8 = (void *)v10[27]; /*0x60c2ef*/
        else
LABEL_26:
          v8 = 0; /*0x60c2a7*/
        DlgCtrlID = GetDlgCtrlID(v2); /*0x60c2b4*/
        if ( Event::IsValidActionType(v8) && DlgCtrlID == 1685 ) /*0x60c2c5*/
        {
          UI_Get_60B550(v2); /*0x60c2c9*/
          Control::RepositionControlsDialog(v2); /*0x60c2d0*/
          return 1; /*0x60c2d8*/
        }
        else
        {
          v11 = 0; /*0x60c300*/
          hWnd = Parent; /*0x60c309*/
          a2 = 0; /*0x60c30d*/
          HashTable::Get(&MEMORY[0xAC1B00], &hWnd, &a2); /*0x60c311*/
          if ( a2 ) /*0x60c31c*/
            v11 = *((_DWORD *)a2 + 27); /*0x60c31e*/
          v12 = GetDlgCtrlID(v2); /*0x60c322*/
          if ( v11 == 226 && v12 == 1821 ) /*0x60c336*/
          {
            UI_Get_60B610(v2); /*0x60c33a*/
            Control::RepositionControlsDialog(v2); /*0x60c341*/
            return 1; /*0x60c349*/
          }
          else
          {
            a2 = Parent; /*0x60c35a*/
            if ( !MEMORY[0xAC1B04] ) /*0x60c360*/
              goto LABEL_41; /*0x60c360*/
            v13 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + HashTable::ComputeHash((int)&MEMORY[0xAC1B00], (int)&a2)); /*0x60c377*/
            if ( !v13 ) /*0x60c37c*/
              goto LABEL_41; /*0x60c37c*/
            while ( *v13 != a2 ) /*0x60c384*/
            {
              v13 = (HWND *)v13[129]; /*0x60c38a*/
              if ( !v13 ) /*0x60c392*/
                goto LABEL_41; /*0x60c392*/
            }
            v15 = v13 + 1; /*0x60c41b*/
            if ( v15 ) /*0x60c420*/
              v14 = v15[27]; /*0x60c426*/
            else
LABEL_41:
              v14 = 0; /*0x60c394*/
            GetDlgCtrlID(v2); /*0x60c397*/
            if ( v14 == 183 /*0x60c3f4*/
              || v14 == 692
              || v14 == 3003
              || v14 == 245
              || v14 == 693
              || v14 == 184
              || v14 == 163
              || v14 == 182
              || v14 == 268
              || v14 == 115
              || v14 == 255
              || v14 == 234 )
            {
              UI_Get_60B7A0(v2); /*0x60c3f8*/
              Control::RepositionControlsDialog(v2); /*0x60c3ff*/
              return 1; /*0x60c407*/
            }
            else
            {
              v16 = GetParent(v2); /*0x60c42f*/
              GetWindowRect(v16, &Rect); /*0x60c441*/
              GetWindowRect(v2, &v18); /*0x60c449*/
              MoveWindow(v2, v18.left - Rect.left, v18.top - Rect.top, v18.right - v18.left, v18.bottom - v18.top, 0); /*0x60c472*/
              Control::RepositionControlsDialog(v2); /*0x60c47a*/
              return 1; /*0x60c482*/
            }
          }
        }
      }
    }
  }
}
}
} // namespace gamemd

// 0x60C4A0
namespace gamemd {
BOOL ResizeDialogAndEnum()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __thiscall ResizeDialogAndEnum(SkirmishDialog *this)
{
  LPARAM v1; // edx
  LPARAM v3; // edi

  v3 = v1; /*0x60c4b7*/
  MoveWindow((HWND)this, 0, 0, MEMORY[0x8A00A4], *(&MEMORY[0x8A00A4] + 1), 0); /*0x60c4ba*/
  MEMORY[0xAC48A8] = (int)this; /*0x60c4c0*/
  return EnumChildWindows((HWND)this, (WNDENUMPROC)RepositionDialogControls, v3); /*0x60c4d3*/
}
}
} // namespace gamemd

// 0x60D440
namespace gamemd {
void nullsub_31()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void nullsub_31()
{
  ; /*0x60d440*/
}
}
} // namespace gamemd

// 0x60D520
namespace gamemd {
LRESULT sub_60D520(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LRESULT __stdcall sub_60D520(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  return DefWindowProcA(hWnd, Msg, wParam, lParam); /*0x60d53a*/
}
}
} // namespace gamemd

// 0x60F4B0
namespace gamemd {
char InitializeDialogControls(HWND a1, LPARAM a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall InitializeDialogControls(HWND a1, LPARAM a2)
{
  LPARAM v2; // edi
  _DWORD *v4; // eax
  void *v5; // eax
  int **v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  void *v10; // eax
  int **v11; // eax
  int **i; // eax
  int v14; // [esp+10h] [ebp-20Ch] BYREF
  _DWORD *v15; // [esp+14h] [ebp-208h] BYREF
  LPARAM v16; // [esp+18h] [ebp-204h]
  int **v17[128]; // [esp+1Ch] [ebp-200h] BYREF

  v2 = a2; /*0x60f4ba*/
  v16 = a2; /*0x60f4be*/
  DialogClass::RegisterWinClasses(); /*0x60f4c2*/
  MEMORY[0xAC48A8] = (int)a1; /*0x60f4cd*/
  EnumChildWindows(a1, Dialog::InitWindow, 1); /*0x60f4db*/
  v14 = (int)a1; /*0x60f4e6*/
  v15 = 0; /*0x60f4ea*/
  if ( MEMORY[0xAC1B04] /*0x60f514*/
    && (v4 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v14) & ((1 << MEMORY[0xAC1B0C]) - 1)))) != 0 )
  {
    while ( *v4 != v14 ) /*0x60f51c*/
    {
      v4 = (_DWORD *)v4[129]; /*0x60f51e*/
      if ( !v4 ) /*0x60f526*/
        goto LABEL_5; /*0x60f526*/
    }
    v7 = v4 + 1; /*0x60f568*/
  }
  else
  {
LABEL_5:
    memset(v17, 0, sizeof(v17)); /*0x60f528*/
    v17[26] = (int **)11; /*0x60f53d*/
    v17[25] = (int **)aP0; /*0x60f548*/
    v5 = __2_YAPAXI_Z(4u); /*0x60f54f*/
    if ( v5 ) /*0x60f559*/
      v6 = (int **)unknown_libname_74(v5); /*0x60f55d*/
    else
      v6 = 0; /*0x60f570*/
    v17[15] = v6; /*0x60f572*/
    v17[16] = 0; /*0x60f585*/
    v17[23] = 0; /*0x60f589*/
    v17[36] = (int **)-1; /*0x60f590*/
    SymbolTable::Insert(&MEMORY[0xAC1B00], &v14, v17); /*0x60f59b*/
    if ( MEMORY[0xAC1B04] ) /*0x60f5a6*/
    {
      v8 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + HashTable::ComputeHash((int)&MEMORY[0xAC1B00], (int)&v14)); /*0x60f5bd*/
      if ( v8 ) /*0x60f5c2*/
      {
        while ( *v8 != v14 ) /*0x60f5ca*/
        {
          v8 = (_DWORD *)v8[129]; /*0x60f5cc*/
          if ( !v8 ) /*0x60f5d4*/
            goto LABEL_15; /*0x60f5d4*/
        }
        v15 = v8 + 1; /*0x60f5df*/
      }
    }
LABEL_15:
    Dialog::CleanupTree((int)v17); /*0x60f5e3*/
    v2 = v16; /*0x60f5ec*/
    v7 = v15; /*0x60f5f0*/
  }
  v7[8] = 1; /*0x60f5fc*/
  EnumChildWindows(a1, Dialog::SubclassEditControl, 1); /*0x60f603*/
  EnumChildWindows(a1, Dialog::InitializeControls, v2); /*0x60f60c*/
  Dialog::InitializeControls(a1, v2); /*0x60f610*/
  EnumChildWindows(a1, Dialog::InitWindow, 0); /*0x60f61c*/
  v14 = (int)a1; /*0x60f625*/
  v15 = 0; /*0x60f629*/
  if ( MEMORY[0xAC1B04] /*0x60f653*/
    && (v9 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v14) & ((1 << MEMORY[0xAC1B0C]) - 1)))) != 0 )
  {
    while ( *v9 != v14 ) /*0x60f65b*/
    {
      v9 = (_DWORD *)v9[129]; /*0x60f65d*/
      if ( !v9 ) /*0x60f665*/
        goto LABEL_20; /*0x60f665*/
    }
    v9[9] = 0; /*0x60f6a8*/
    return 1; /*0x60f6ad*/
  }
  else
  {
LABEL_20:
    memset(v17, 0, sizeof(v17)); /*0x60f667*/
    v17[26] = (int **)11; /*0x60f67c*/
    v17[25] = (int **)aP0; /*0x60f687*/
    v10 = __2_YAPAXI_Z(4u); /*0x60f68e*/
    if ( v10 ) /*0x60f698*/
      v11 = (int **)unknown_libname_74(v10); /*0x60f69c*/
    else
      v11 = 0; /*0x60f6b7*/
    v17[15] = v11; /*0x60f6b9*/
    v17[16] = 0; /*0x60f6cc*/
    v17[23] = 0; /*0x60f6d0*/
    v17[36] = (int **)-1; /*0x60f6d7*/
    SymbolTable::Insert(&MEMORY[0xAC1B00], &v14, v17); /*0x60f6e2*/
    HashTable::Get(&MEMORY[0xAC1B00], &v14, &v15); /*0x60f6f6*/
    GadgetClass::SetTooltip((void **)v17, 0); /*0x60f700*/
    for ( i = v17[13]; v17[13]; i = v17[13] ) /*0x60f70b*/
      LinkedList::Remove(v17, i); /*0x60f712*/
    if ( v17[15] ) /*0x60f725*/
      DeleteAndZero::OrFree((void **)v17[15], 1); /*0x60f729*/
    v15[8] = 0; /*0x60f734*/
    return 1; /*0x60f738*/
  }
}
}
} // namespace gamemd
