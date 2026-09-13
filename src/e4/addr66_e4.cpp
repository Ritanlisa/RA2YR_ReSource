// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_660AD0_e4.hpp"
#include "e4/classes/E4Recv_660AE0_e4.hpp"
#include "e4/classes/E4Recv_660AF0_e4.hpp"
#include "e4/classes/E4Recv_6616B0_e4.hpp"
#include "e4/classes/E4Recv_661960_e4.hpp"
#include "e4/classes/E4Recv_661A60_e4.hpp"
#include "e4/classes/E4Recv_661B70_e4.hpp"
#include "e4/classes/E4Recv_661F30_e4.hpp"
#include "e4/classes/E4Recv_662240_e4.hpp"
#include "e4/classes/E4Recv_6638E0_e4.hpp"
#include "e4/classes/E4Recv_663960_e4.hpp"
#include "e4/classes/E4Recv_663CD0_e4.hpp"
#include "e4/classes/E4Recv_663DB0_e4.hpp"
#include "e4/classes/E4Recv_664750_e4.hpp"

// 0x660AD0
namespace gamemd {
int E4Recv_660AD0::sub_660AD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_660AD0(_DWORD *this)
{
  return dword_7F099C[4 * *this]; /*0x660adb*/
}
}
} // namespace gamemd

// 0x660AE0
namespace gamemd {
int E4Recv_660AE0::sub_660AE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_660AE0(_DWORD *this)
{
  return dword_7F09A0[4 * *this]; /*0x660aeb*/
}
}
} // namespace gamemd

// 0x660AF0
namespace gamemd {
int E4Recv_660AF0::sub_660AF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_660AF0(_DWORD *this)
{
  return dword_7F0998[4 * *this]; /*0x660afb*/
}
}
} // namespace gamemd

// 0x6613A0
namespace gamemd {
int Color_ComputeSaturation(unsigned int a1, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall Color_ComputeSaturation(unsigned int a1, int a2, int a3)
{
  int v3; // edi
  int v4; // eax
  int v5; // ebp
  int v6; // ebx
  unsigned int v7; // esi
  unsigned int v8; // eax
  unsigned int v9; // ecx
  int v10; // ecx
  int v12; // [esp+10h] [ebp-14h]
  int v13; // [esp+14h] [ebp-10h]
  __int16 v14; // [esp+1Ch] [ebp-8h]
  int v15; // [esp+20h] [ebp-4h]

  v3 = *(unsigned __int8 *)a1; /*0x6613ad*/
  v4 = *(unsigned __int8 *)(a1 + 2); /*0x6613b4*/
  v5 = *(unsigned __int8 *)(a1 + 1); /*0x6613b7*/
  LOBYTE(a1) = 0; /*0x6613b9*/
  v13 = v4; /*0x6613bd*/
  v6 = v3; /*0x6613c1*/
  if ( v3 <= v5 ) /*0x6613c3*/
    v6 = v5; /*0x6613c5*/
  if ( v4 > v6 ) /*0x6613c9*/
    v6 = v4; /*0x6613cb*/
  v12 = v3; /*0x6613cf*/
  if ( v3 >= v5 ) /*0x6613d3*/
    v12 = v5; /*0x6613d5*/
  if ( v4 < v12 ) /*0x6613dd*/
    v12 = v4; /*0x6613df*/
  LOBYTE(v15) = 0; /*0x6613e5*/
  if ( v6 ) /*0x6613e9*/
  {
    v7 = v6 - v12; /*0x6613f5*/
    v15 = 255 * (v6 - v12) / v6; /*0x661403*/
    if ( v15 ) /*0x661407*/
    {
      v8 = (255 * v6 - 255 * v4) / v7; /*0x66144f*/
      if ( v6 == v3 ) /*0x661453*/
      {
        if ( v12 == v5 ) /*0x661459*/
        {
          v9 = v8 + 1280; /*0x66145b*/
LABEL_23:
          a1 = v9 / 6; /*0x6614ae*/
          goto LABEL_24; /*0x6614b7*/
        }
        v8 = (255 * v6 - 255 * v5) / v7; /*0x661463*/
        v10 = 256; /*0x661467*/
      }
      else if ( v6 == v5 ) /*0x661470*/
      {
        if ( v12 == v13 ) /*0x66147c*/
        {
          v9 = (255 * v6 - 255 * v3) / v7 + 256; /*0x661482*/
          goto LABEL_23; /*0x661488*/
        }
        v10 = 768; /*0x66148a*/
      }
      else
      {
        if ( v12 == v3 ) /*0x661495*/
        {
          v9 = (255 * v6 - 255 * v5) / v7 + 768; /*0x66149b*/
          goto LABEL_23; /*0x6614a1*/
        }
        v8 = (255 * v6 - 255 * v3) / v7; /*0x6614a3*/
        v10 = 1280; /*0x6614a7*/
      }
      v9 = v10 - v8; /*0x6614ac*/
      goto LABEL_23; /*0x6614ac*/
    }
  }
LABEL_24:
  LOBYTE(v14) = a1; /*0x6614ba*/
  HIBYTE(v14) = v15; /*0x6614c8*/
  *(_WORD *)a3 = v14; /*0x6614d1*/
  *(_BYTE *)(a3 + 2) = v6; /*0x6614d7*/
  return a3; /*0x6614d4*/
}
}
} // namespace gamemd

// 0x6615D0
namespace gamemd {
unsigned char * sub_6615D0(char * a1, unsigned char * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_BYTE *__stdcall sub_6615D0(char *a1, _BYTE *a2, int a3)
{
  int v4; // ebx
  _BYTE *v5; // edi
  char v6; // al
  unsigned int v7; // eax
  _BYTE *v9; // [esp+8h] [ebp-4h]

  v4 = a3; /*0x6615d6*/
  v5 = a2; /*0x6615db*/
  v9 = a2; /*0x6615e1*/
  if ( a3 > 0 ) /*0x6615e5*/
  {
    while ( 1 ) /*0x6615e9*/
    {
      v6 = *a1++; /*0x6615e9*/
      --v4; /*0x6615ec*/
      if ( v6 ) /*0x6615ef*/
        break; /*0x6615ef*/
      v7 = (unsigned __int8)*a1++; /*0x6615f3*/
      --v4; /*0x6615f8*/
      if ( v7 ) /*0x6615fb*/
      {
        memset(v5, 0, v7); /*0x661606*/
        v5 = &v9[v7]; /*0x661613*/
LABEL_6:
        v9 = v5; /*0x66161a*/
      }
      if ( v4 <= 0 ) /*0x661620*/
        return (_BYTE *)(v5 - a2); /*0x661620*/
    }
    *v5++ = v6; /*0x661617*/
    goto LABEL_6; /*0x661619*/
  }
  return (_BYTE *)(v5 - a2); /*0x66162a*/
}
}
} // namespace gamemd

// 0x661640
namespace gamemd {
unsigned char * sub_661640(unsigned short * a1, unsigned char * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_BYTE *__stdcall sub_661640(unsigned __int16 *a1, _BYTE *a2)
{
  _BYTE *v2; // edi
  int v3; // edx
  char *v4; // esi
  char v5; // al
  unsigned int v6; // ebx
  _BYTE *v8; // [esp+Ch] [ebp+4h]

  v2 = a2; /*0x66164b*/
  v3 = *a1 - 2; /*0x66164f*/
  v4 = (char *)(a1 + 1); /*0x661652*/
  v8 = a2; /*0x661657*/
  if ( v3 > 0 ) /*0x66165b*/
  {
    while ( 1 ) /*0x66165f*/
    {
      v5 = *v4++; /*0x66165f*/
      --v3; /*0x661662*/
      if ( v5 ) /*0x661665*/
        break; /*0x661665*/
      v6 = (unsigned __int8)*v4++; /*0x661669*/
      --v3; /*0x66166c*/
      if ( v6 ) /*0x66166f*/
      {
        memset(v2, 0, v6); /*0x66167a*/
        v2 = &v8[v6]; /*0x661687*/
LABEL_6:
        v8 = v2; /*0x66168e*/
      }
      if ( v3 <= 0 ) /*0x661694*/
        return (_BYTE *)(v2 - a2); /*0x661694*/
    }
    *v2++ = v5; /*0x66168b*/
    goto LABEL_6; /*0x66168d*/
  }
  return (_BYTE *)(v2 - a2); /*0x66169e*/
}
}
} // namespace gamemd

// 0x6616B0
namespace gamemd {
unsigned int * E4Recv_6616B0::sub_6616B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_6616B0(_DWORD *this)
{
  int v2; // ebp
  _DWORD *v3; // ebx

  v2 = 32; /*0x6616b8*/
  *(this + 1) = 0; /*0x6616bd*/
  *(this + 2) = 0; /*0x6616c0*/
  *this = &vt_Straw; /*0x6616c3*/
  *(this + 3) = 0; /*0x6616c9*/
  *(this + 4) = 0; /*0x6616cc*/
  v3 = this + 5; /*0x6616cf*/
  do /*0x6616df*/
  {
    sub_65C890(v3, 0, 0); /*0x6616d6*/
    v3 += 2; /*0x6616db*/
    --v2; /*0x6616de*/
  }
  while ( v2 ); /*0x6616df*/
  *(this + 3) = 0; /*0x6616e1*/
  *(this + 4) = 0; /*0x6616e4*/
  *this = &vt_RandomStraw; /*0x6616f1*/
  memset(this + 5, 0, 0x100u); /*0x6616f7*/
  return this; /*0x6616fb*/
}
}
} // namespace gamemd

// 0x661960
namespace gamemd {
int E4Recv_661960::sub_661960(short a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_661960(char *this, __int16 a2)
{
  char *v3; // eax
  int v4; // eax
  unsigned int v5; // esi
  char *v6; // ebp
  size_t v7; // eax
  int result; // eax
  int v9; // [esp+10h] [ebp-8Ch]
  char Src[20]; // [esp+14h] [ebp-88h] BYREF
  _DWORD v11[29]; // [esp+28h] [ebp-74h] BYREF

  v9 = 16; /*0x66196c*/
  do /*0x661a48*/
  {
    if ( (a2 & 1) != 0 ) /*0x661995*/
    {
      v3 = this + (unsigned __int8)(this->M12 / 8) + 20; /*0x661991*/
      *v3 ^= 1 << (this->M12 & 7); /*0x66199e*/
    }
    v4 = this->M12 + 1; /*0x6619a4*/
    this->M12 = v4; /*0x6619a6*/
    if ( v4 == 2048 ) /*0x6619ae*/
    {
      v5 = 0; /*0x6619b4*/
      LOBYTE(v11[0]) = 0; /*0x6619b9*/
      v11[11] = 0; /*0x6619be*/
      v11[12] = 0; /*0x6619c2*/
      v11[6] = 1732584193; /*0x6619c6*/
      v11[7] = -271733879; /*0x6619ce*/
      v11[8] = -1732584194; /*0x6619d6*/
      v11[9] = 271733878; /*0x6619de*/
      v11[10] = -1009589776; /*0x6619e6*/
      v6 = this + 20; /*0x6619ee*/
      do /*0x661a35*/
      {
        SHA1::Process(v11, (int)(this + 20), 256); /*0x6619fa*/
        SHA1::Compute(v11, Src); /*0x661a08*/
        v7 = 256 - v5; /*0x661a12*/
        if ( 256 - v5 > 0x14 ) /*0x661a17*/
          v7 = 20; /*0x661a19*/
        memcpy(v6, Src, v7); /*0x661a25*/
        ++v5; /*0x661a2d*/
        ++v6; /*0x661a2e*/
      }
      while ( v5 < 0x100 ); /*0x661a35*/
    }
    a2 >>= 1; /*0x661a3b*/
    result = --v9; /*0x661a43*/
  }
  while ( v9 ); /*0x661a48*/
  return result; /*0x661a4e*/
}
}
} // namespace gamemd

// 0x661A60
namespace gamemd {
int E4Recv_661A60::sub_661A60(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_661A60(char *this, int a2)
{
  char *v3; // eax
  int v4; // eax
  unsigned int v5; // esi
  char *v6; // ebp
  size_t v7; // eax
  bool v8; // zf
  int result; // eax
  int v10; // [esp+10h] [ebp-8Ch]
  char Src[20]; // [esp+14h] [ebp-88h] BYREF
  _DWORD v12[29]; // [esp+28h] [ebp-74h] BYREF

  v10 = 32; /*0x661a6c*/
  do /*0x661b50*/
  {
    if ( (a2 & 1) != 0 ) /*0x661a95*/
    {
      v3 = this + (unsigned __int8)(this->M12 / 8) + 20; /*0x661a91*/
      *v3 ^= 1 << (this->M12 & 7); /*0x661a9e*/
    }
    v4 = this->M12 + 1; /*0x661aa4*/
    this->M12 = v4; /*0x661aa6*/
    if ( v4 == 2048 ) /*0x661aae*/
    {
      v5 = 0; /*0x661ab4*/
      LOBYTE(v12[0]) = 0; /*0x661ab9*/
      v12[11] = 0; /*0x661abe*/
      v12[12] = 0; /*0x661ac2*/
      v12[6] = 1732584193; /*0x661ac6*/
      v12[7] = -271733879; /*0x661ace*/
      v12[8] = -1732584194; /*0x661ad6*/
      v12[9] = 271733878; /*0x661ade*/
      v12[10] = -1009589776; /*0x661ae6*/
      v6 = this + 20; /*0x661aee*/
      do /*0x661b35*/
      {
        SHA1::Process(v12, (int)(this + 20), 256); /*0x661afa*/
        SHA1::Compute(v12, Src); /*0x661b08*/
        v7 = 256 - v5; /*0x661b12*/
        if ( 256 - v5 > 0x14 ) /*0x661b17*/
          v7 = 20; /*0x661b19*/
        memcpy(v6, Src, v7); /*0x661b25*/
        ++v5; /*0x661b2d*/
        ++v6; /*0x661b2e*/
      }
      while ( v5 < 0x100 ); /*0x661b35*/
    }
    result = v10 - 1; /*0x661b44*/
    v8 = v10 == 1; /*0x661b44*/
    a2 >>= 1; /*0x661b45*/
    --v10; /*0x661b4c*/
  }
  while ( !v8 ); /*0x661b50*/
  return result; /*0x661b56*/
}
}
} // namespace gamemd

// 0x661B70
namespace gamemd {
void * E4Recv_661B70::sub_661B70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *__thiscall sub_661B70(char *this)
{
  int v1; // ebx
  unsigned int v2; // esi
  char *v3; // edi
  size_t v4; // eax
  void *result; // eax
  char Src[20]; // [esp+Ch] [ebp-88h] BYREF
  _DWORD v7[29]; // [esp+20h] [ebp-74h] BYREF

  v1 = (int)(this + 20); /*0x661b7a*/
  LOBYTE(v7[0]) = 0; /*0x661b7e*/
  v7[11] = 0; /*0x661b82*/
  v7[12] = 0; /*0x661b86*/
  v7[6] = 1732584193; /*0x661b8a*/
  v7[7] = -271733879; /*0x661b92*/
  v7[8] = -1732584194; /*0x661b9a*/
  v7[9] = 271733878; /*0x661ba2*/
  v7[10] = -1009589776; /*0x661baa*/
  v2 = 0; /*0x661bb2*/
  v3 = this + 20; /*0x661bb4*/
  do /*0x661bfb*/
  {
    SHA1::Process(v7, v1, 256); /*0x661bc0*/
    SHA1::Compute(v7, Src); /*0x661bce*/
    v4 = 256 - v2; /*0x661bd8*/
    if ( 256 - v2 > 0x14 ) /*0x661bdd*/
      v4 = 20; /*0x661bdf*/
    result = memcpy(v3, Src, v4); /*0x661beb*/
    ++v2; /*0x661bf3*/
    ++v3; /*0x661bf4*/
  }
  while ( v2 < 0x100 ); /*0x661bfb*/
  return result; /*0x661bfd*/
}
}
} // namespace gamemd

// 0x661CB0
namespace gamemd {
void sub_661CB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_661CB0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x661cbc*/
  dbl_B04E20 = Math::Sqrt(v0 + v0); /*0x661cce*/
}
}
} // namespace gamemd

// 0x661CE0
namespace gamemd {
void sub_661CE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_661CE0()
{
  dbl_B04E70 = dbl_B04E20 / 60.0; /*0x661cec*/
}
}
} // namespace gamemd

// 0x661D00
namespace gamemd {
void sub_661D00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_661D00()
{
  dbl_B04E58 = 1.0 / dbl_B04E70; /*0x661d0c*/
}
}
} // namespace gamemd

// 0x661D20
namespace gamemd {
void sub_661D20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_661D20()
{
  dbl_B04E50 = 0.0174532925199433 * 45.0; /*0x661d2c*/
}
}
} // namespace gamemd

// 0x661D40
namespace gamemd {
void sub_661D40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_661D40()
{
  dbl_B04E28 = 0.0174532925199433 * 60.0; /*0x661d4c*/
}
}
} // namespace gamemd

// 0x661D60
namespace gamemd {
void sub_661D60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_661D60()
{
  dbl_B04E00 = 0.0174532925199433 * 90.0; /*0x661d6c*/
}
}
} // namespace gamemd

// 0x661DC0
namespace gamemd {
void sub_661DC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_661DC0()
{
  dbl_B04E30 = Math::ArcTan((double)dword_B04E78 * 0.00390625); /*0x661dd7*/
}
}
} // namespace gamemd

// 0x661DF0
namespace gamemd {
void sub_661DF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_661DF0()
{
  dbl_B04E48 = Math::ArcTan((double)(2 * dword_B04E78) / dbl_B04E20); /*0x661e12*/
}
}
} // namespace gamemd

// 0x661E20
namespace gamemd {
long long sub_661E20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_661E20()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B04E78) + 0.5); /*0x661e3b*/
  dword_B04E6C = result; /*0x661e40*/
  return result; /*0x661e46*/
}
}
} // namespace gamemd

// 0x661E50
namespace gamemd {
int sub_661E50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_661E50()
{
  word_B04E18 = 0; /*0x661e52*/
  word_B04E1A = 0; /*0x661e58*/
  return 0; /*0x661e5e*/
}
}
} // namespace gamemd

// 0x661E60
namespace gamemd {
int sub_661E60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_661E60()
{
  dword_B04E38 = 0; /*0x661e62*/
  dword_B04E3C = 0; /*0x661e67*/
  dword_B04E40 = 0; /*0x661e6c*/
  return 0; /*0x661e71*/
}
}
} // namespace gamemd

// 0x661E80
namespace gamemd {
int sub_661E80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_661E80()
{
  dword_B04E68 = 0; /*0x661e85*/
  dword_B04E60 = 128; /*0x661e8f*/
  dword_B04E64 = 128; /*0x661e94*/
  return 128; /*0x661e99*/
}
}
} // namespace gamemd

// 0x661EA0
namespace gamemd {
int sub_661EA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_661EA0()
{
  dword_B04E08 = 0; /*0x661ea2*/
  dword_B04E0C = 0; /*0x661ea7*/
  dword_B04E10 = 0; /*0x661eac*/
  dword_B04E14 = 0; /*0x661eb1*/
  return 0; /*0x661eb6*/
}
}
} // namespace gamemd

// 0x661F30
namespace gamemd {
void E4Recv_661F30::sub_661F30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_661F30(_DWORD *this)
{
  *this = &RocketLocomotionClass::`vftable'; /*0x661f30*/
  *(this + 1) = &vt_RocketLocomotionClass; /*0x661f36*/
  LocomotionClass::Construct(this); /*0x661f3d*/
}
}
} // namespace gamemd

// 0x662240
namespace gamemd {
double E4Recv_662240::sub_662240()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
double __thiscall sub_662240(_DWORD *this)
{
  int v1; // eax
  int v2; // edx
  double v3; // st7
  int v5; // [esp+1Ch] [ebp-4h]

  v1 = *(this + 6) - *(_DWORD *)(*(this + 3) + 156); /*0x66225b*/
  v2 = *(this + 7) - *(_DWORD *)(*(this + 3) + 160); /*0x662263*/
  v5 = *(this + 8) - *(_DWORD *)(*(this + 3) + 164); /*0x662267*/
  v3 = Math::Sqrt((double)(v2 * v2 + v1 * v1)); /*0x662282*/
  if ( v3 <= 0.0 ) /*0x662297*/
    return -1.570796326794897; /*0x6622b5*/
  else
    return Math::ArcTan((double)v5 / v3); /*0x6622a7*/
}
}
} // namespace gamemd

// 0x6622C0
namespace gamemd {
char UpdateBullets(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (v3 export truncated pseudocode — commented out; live version via get_context)
// char __stdcall UpdateBullets(int a1)
// {
//   ObjectClass *v1; // ecx
//   int v2; // edx
//   ObjectClass *v3; // eax
//   int v4; // edi
//   int v5; // eax
//   bool v6; // al
//   IUnknown *v7; // edx
//   int v8; // eax
//   AnimClass *v9; // ebx
//   AnimClass *v11; // eax
//   int edx19; // edx
//   IUnknown *v13; // ecx
//   int eax24; // eax
//   int v14; // ecx
//   int v15; // edx
//   int v16; // eax
//   int v17; // eax
//   int objectTypeFlags; // ecx
//   bool v19; // al
//   IUnknown *v21; // ebx
//   IUnknown *v22; // edi
//   int edx34; // edx
//   int v23; // eax
//   AnimClass *v25; // edi
//   AnimClass *v27; // eax
//   int v26; // ecx
//   int edx41; // edx
//   int v28; // eax
//   IUnknown *v31; // ecx
//   int v30; // eax
//   int edi43; // edi
//   _WORD *v32; // eax
//   ObjectClass *v35; // ecx
//   int v34; // eax
//   int edx50; // edx
//   int v36; // eax
//   bool v37; // al
//   IUnknown *v40; // edx
//   int v39; // eax
//   _WORD *eax63; // eax
//   AnimClass *v43; // edi
//   AnimClass *v45; // eax
//   ObjectClass *v46; // ecx
//   int v44; // eax
//   double st7_69; // st7
//   double... [29151 chars total]
// end truncated pseudocode
}
} // namespace gamemd

// 0x6635F0
namespace gamemd {
void sub_6635F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6635F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6635fc*/
  dbl_B052A0 = Math::Sqrt(v0 + v0); /*0x66360e*/
}
}
} // namespace gamemd

// 0x663620
namespace gamemd {
void sub_663620()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_663620()
{
  dbl_B05328 = dbl_B052A0 / 60.0; /*0x66362c*/
}
}
} // namespace gamemd

// 0x663640
namespace gamemd {
void sub_663640()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_663640()
{
  dbl_B05310 = 1.0 / dbl_B05328; /*0x66364c*/
}
}
} // namespace gamemd

// 0x663660
namespace gamemd {
void sub_663660()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_663660()
{
  dbl_B05308 = 0.0174532925199433 * 45.0; /*0x66366c*/
}
}
} // namespace gamemd

// 0x663680
namespace gamemd {
void sub_663680()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_663680()
{
  dbl_B052B0 = 0.0174532925199433 * 60.0; /*0x66368c*/
}
}
} // namespace gamemd

// 0x6636A0
namespace gamemd {
void sub_6636A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6636A0()
{
  dbl_B04E80 = 0.0174532925199433 * 90.0; /*0x6636ac*/
}
}
} // namespace gamemd

// 0x6636C0
namespace gamemd {
long long sub_6636C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_6636C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B04E80 - dbl_B052B0); /*0x6636d2*/
  result = Math::RoundToInt(v0 * dbl_B052A0 * 0.5); /*0x6636e6*/
  dword_B05330 = result; /*0x6636eb*/
  return result; /*0x6636f0*/
}
}
} // namespace gamemd

// 0x663700
namespace gamemd {
void sub_663700()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_663700()
{
  dbl_B052B8 = Math::ArcTan((double)dword_B05330 * 0.00390625); /*0x663717*/
}
}
} // namespace gamemd

// 0x663730
namespace gamemd {
void sub_663730()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_663730()
{
  dbl_B05300 = Math::ArcTan((double)(2 * dword_B05330) / dbl_B052A0); /*0x663752*/
}
}
} // namespace gamemd

// 0x663760
namespace gamemd {
long long sub_663760()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_663760()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B05330) + 0.5); /*0x66377b*/
  dword_B05324 = result; /*0x663780*/
  return result; /*0x663786*/
}
}
} // namespace gamemd

// 0x663790
namespace gamemd {
int sub_663790()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_663790()
{
  word_B04E98 = 0; /*0x663792*/
  word_B04E9A = 0; /*0x663798*/
  return 0; /*0x66379e*/
}
}
} // namespace gamemd

// 0x6637A0
namespace gamemd {
int sub_6637A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6637A0()
{
  dword_B052F0 = 0; /*0x6637a2*/
  dword_B052F4 = 0; /*0x6637a7*/
  dword_B052F8 = 0; /*0x6637ac*/
  return 0; /*0x6637b1*/
}
}
} // namespace gamemd

// 0x6637C0
namespace gamemd {
int sub_6637C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6637C0()
{
  dword_B05320 = 0; /*0x6637c5*/
  dword_B05318 = 128; /*0x6637cf*/
  dword_B0531C = 128; /*0x6637d4*/
  return 128; /*0x6637d9*/
}
}
} // namespace gamemd

// 0x6637E0
namespace gamemd {
int sub_6637E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6637E0()
{
  dword_B04E88 = 0; /*0x6637e2*/
  dword_B04E8C = 0; /*0x6637e7*/
  dword_B04E90 = 0; /*0x6637ec*/
  dword_B04E94 = 0; /*0x6637f1*/
  return 0; /*0x6637f6*/
}
}
} // namespace gamemd

// 0x663800
namespace gamemd {
int sub_663800()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_663800()
{
  dword_B052D4 = 0; /*0x663807*/
  dword_B052D8 = 0; /*0x66380c*/
  byte_B052DC = 1; /*0x663811*/
  byte_B052DD = 0; /*0x663818*/
  g_NetworkEventQueue = (int)&vt_DynamicVectorClass_OwnerTalkClass_ConnectionListStruct; /*0x66381d*/
  dword_B052E4 = 10; /*0x663827*/
  dword_B052E0 = 0; /*0x663831*/
  byte_B052E8 = 0; /*0x663836*/
  dword_B052EC = 0; /*0x66383b*/
  return atexit(sub_663850); /*0x663846*/
}
}
} // namespace gamemd

// 0x663850
namespace gamemd {
void sub_663850()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_663850()
{
  bool v0; // zf
  int v1; // eax

  if ( dword_B052E0 ) /*0x66385a*/
  {
    do /*0x66389d*/
    {
      __3_YAXPAX_Z(*(void **)dword_B052D4); /*0x663864*/
      v0 = dword_B052E0 == 0; /*0x663872*/
      if ( dword_B052E0 > 0 ) /*0x663874*/
      {
        v1 = 0; /*0x663877*/
        v0 = dword_B052E0-- == 1; /*0x663879*/
        if ( dword_B052E0 > 0 ) /*0x663881*/
        {
          do /*0x663899*/
          {
            ++v1; /*0x663889*/
            *((_DWORD *)dword_B052D4 + v1 - 1) = *((_DWORD *)dword_B052D4 + v1); /*0x66388d*/
          }
          while ( v1 < dword_B052E0 ); /*0x663899*/
          v0 = dword_B052E0 == 0; /*0x66389b*/
        }
      }
    }
    while ( !v0 ); /*0x66389d*/
  }
  g_NetworkEventQueue = (int)&vt_VectorClass_OwnerTalkClass_ConnectionListStruct; /*0x6638a4*/
  if ( dword_B052D4 && byte_B052DD ) /*0x6638b8*/
  {
    __3_YAXPAX_Z(dword_B052D4); /*0x6638bb*/
    dword_B052D4 = 0; /*0x6638c3*/
  }
  byte_B052DD = 0; /*0x6638c9*/
  dword_B052D8 = 0; /*0x6638cf*/
}
}
} // namespace gamemd

// 0x6638E0
namespace gamemd {
unsigned int * E4Recv_6638E0::sub_6638E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_6638E0(_DWORD *this)
{
  *(this + 1) = 0; /*0x6638e4*/
  *(this + 2) = 0; /*0x6638e7*/
  *((_BYTE *)this + 12) = 1; /*0x6638ea*/
  *((_BYTE *)this + 13) = 0; /*0x6638ee*/
  *this = &vt_DynamicVectorClass_OwnerTalkClass_ConnectionListStruct; /*0x6638f1*/
  *(this + 5) = 10; /*0x6638f7*/
  *(this + 4) = 0; /*0x6638fe*/
  *((_BYTE *)this + 24) = 0; /*0x663901*/
  *(this + 7) = 0; /*0x663904*/
  return this; /*0x663907*/
}
}
} // namespace gamemd

// 0x663960
namespace gamemd {
void E4Recv_663960::sub_663960()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_663960(void *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  void *v5; // eax

  while ( this->M16 ) /*0x663966*/
  {
    __3_YAXPAX_Z(**((void ***)this + 1)); /*0x663971*/
    v2 = this->M16; /*0x663976*/
    if ( v2 > 0 ) /*0x66397e*/
    {
      v3 = v2 - 1; /*0x663980*/
      v4 = 0; /*0x663983*/
      for ( this->M16 = v3; /*0x66398a*/
            v4 < this->M16;
            *(_DWORD *)(this->M4 + 4 * v4 - 4) = *(_DWORD *)(this->M4 + 4 * v4) )
      {
        ++v4; /*0x66398f*/
      }
    }
  }
  v5 = (void *)this->M4; /*0x6639a3*/
  *(_DWORD *)this = &vt_VectorClass_OwnerTalkClass_ConnectionListStruct; /*0x6639a6*/
  if ( v5 && (unsigned char)this->M13 ) /*0x6639b0*/
  {
    __3_YAXPAX_Z(v5); /*0x6639b6*/
    this->M4 = 0; /*0x6639be*/
  }
  *((_BYTE *)this + 13) = 0; /*0x6639c1*/
  this->M8 = 0; /*0x6639c4*/
}
}
} // namespace gamemd

// 0x663CD0
namespace gamemd {
char E4Recv_663CD0::sub_663CD0(unsigned char * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_663CD0(int *this, _BYTE *a2)
{
  _DWORD *v2; // edi
  char v5; // bl
  int v6; // ecx
  int v7; // eax
  int v8; // esi
  int i; // edx
  int v10; // [esp+8h] [ebp-8h] BYREF

  v2 = a2; /*0x663cd5*/
  if ( !a2 ) /*0x663cdd*/
    return -1; /*0x663ce0*/
  if ( Network::IsBroadcastAddr(a2) ) /*0x663ceb*/
    return -1; /*0x663cf5*/
  v5 = 0; /*0x663d0c*/
  Network::CopyAddress(v2, &a2, (int)&v10); /*0x663d0e*/
  v6 = *(this + 4); /*0x663d13*/
  v7 = 0; /*0x663d16*/
  if ( v6 > 0 ) /*0x663d1a*/
  {
    v8 = *(this + 1); /*0x663d1c*/
    for ( i = v8; v10 != *(_DWORD *)(*(_DWORD *)i + 33); i += 4 ) /*0x663d23*/
    {
      if ( ++v7 >= v6 ) /*0x663d32*/
        return 0; /*0x663d3d*/
    }
    return *(_BYTE *)(*(_DWORD *)(v8 + 4 * v7) + 40); /*0x663d43*/
  }
  return v5; /*0x663cdf*/
}
}
} // namespace gamemd

// 0x663DB0
namespace gamemd {
bool E4Recv_663DB0::LaunchMultiplayerHost(unsigned char * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall LaunchMultiplayerHost(int this, unsigned __int8 *a2)
{
  unsigned __int8 *v4; // eax
  int *v5; // esi
  unsigned __int8 v6; // dl
  unsigned __int8 v7; // al
  int *v8; // eax
  int v9; // esi
  int v10; // edi
  int v11; // eax
  unsigned __int8 v12; // [esp+4h] [ebp-584h] BYREF
  unsigned __int8 v13; // [esp+5h] [ebp-583h]
  unsigned __int8 v14; // [esp+6h] [ebp-582h]
  unsigned __int8 v15; // [esp+7h] [ebp-581h]
  int v16; // [esp+8h] [ebp-580h]
  DWORD TicksTimer; // [esp+10h] [ebp-578h]
  int v18; // [esp+14h] [ebp-574h]
  int v19; // [esp+18h] [ebp-570h]
  int v20; // [esp+1Ch] [ebp-56Ch] BYREF
  char v21[2]; // [esp+22h] [ebp-566h] BYREF
  char v22[4]; // [esp+24h] [ebp-564h] BYREF
  _BYTE v23[12]; // [esp+28h] [ebp-560h] BYREF
  struct _PROCESS_INFORMATION ProcessInformation; // [esp+34h] [ebp-554h] BYREF
  struct _STARTUPINFOA StartupInfo; // [esp+44h] [ebp-544h] BYREF
  CHAR CommandLine[256]; // [esp+88h] [ebp-500h] BYREF
  char v27[1024]; // [esp+188h] [ebp-400h] BYREF

  TicksTimer = Timer::GetTicks(); /*0x663dc6*/
  v19 = 0; /*0x663dca*/
  Waypoint::InitInvalid(v23); /*0x663dd2*/
  Debug::Log(); /*0x663ddc*/
  GetStartupInfoA(&StartupInfo); /*0x663de9*/
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887628] + 72))(MEMORY[0x887628]) ) /*0x663df7*/
    return 0; /*0x663e07*/
  if ( a2 ) /*0x663e15*/
  {
    sprintf(CommandLine, MEMORY[0x839B84], *a2, a2[1], a2[2], a2[3]); /*0x663f0e*/
    if ( *(_DWORD *)MEMORY[0xA8DA78] == -40 ) /*0x663f21*/
      goto LABEL_11; /*0x663f21*/
    Network::CopyAddress((_DWORD *)(*(_DWORD *)MEMORY[0xA8DA78] + 40), &v20, (int)&v12); /*0x663f31*/
    v6 = a2[2]; /*0x663f39*/
    v7 = *a2; /*0x663f3c*/
    v13 = a2[1]; /*0x663f3e*/
    v14 = v6; /*0x663f42*/
    v12 = v7; /*0x663f4a*/
    v15 = a2[3]; /*0x663f5e*/
    NetworkID::Assign(&MEMORY[0xA8DBB0], &v20, (int)&v12, 0); /*0x663f62*/
    Network::SetPort(&MEMORY[0xA8DBB0], *(_WORD *)(*(_DWORD *)MEMORY[0xA8DA78] + 40)); /*0x663f78*/
    LOWORD(MEMORY[0xA8DBBC]) = *(_WORD *)(*(_DWORD *)MEMORY[0xA8DA78] + 40); /*0x663f88*/
    v8 = (int *)(*(_DWORD *)MEMORY[0xA8DA78] + 40); /*0x663f91*/
    MEMORY[0xA8DBA4] = *v8; /*0x663f96*/
    MEMORY[0xA8DBA8] = v8[1]; /*0x663f9f*/
    MEMORY[0xA8DBAC] = v8[2]; /*0x663fa8*/
    goto LABEL_10; /*0x663fa8*/
  }
  if ( !MEMORY[0xA8DA84] ) /*0x663e22*/
  {
    v4 = (unsigned __int8 *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0x887628] + 76))(MEMORY[0x887628], 0); /*0x663e2d*/
    sprintf(CommandLine, MEMORY[0x839B84], *v4, v4[1], v4[2], v4[3]); /*0x663e54*/
    goto LABEL_11; /*0x663e5c*/
  }
  v5 = (int *)(*(_DWORD *)MEMORY[0xA8DA78] + 40); /*0x663e69*/
  if ( *(_DWORD *)MEMORY[0xA8DA78] != -40 ) /*0x663e6c*/
  {
    Network::CopyAddress(v5, &v20, (int)&v12); /*0x663e7e*/
    sprintf(CommandLine, MEMORY[0x839B84], v12, v13, v14, v15); /*0x663ebb*/
    MEMORY[0xA8DBB0] = *v5; /*0x663ec5*/
    MEMORY[0xA8DBB4] = v5[1]; /*0x663ecd*/
    MEMORY[0xA8DBB8] = v5[2]; /*0x663ed6*/
    LOWORD(MEMORY[0xA8DBBC]) = 0; /*0x663edc*/
LABEL_10:
    Network::FormatAddress((unsigned __int16 *)&MEMORY[0xA8DBB0], 0); /*0x663fad*/
    Debug::Log(); /*0x663fbf*/
  }
LABEL_11:
  if ( CreateProcessA(MEMORY[0x8399EC], CommandLine, 0, 0, 0, 0x200u, 0, 0, &StartupInfo, &ProcessInformation) ) /*0x663fed*/
  {
    this->M28 = ProcessInformation.hProcess; /*0x664029*/
    Debug::Log(); /*0x66402c*/
    SetFocus(g_hWnd); /*0x66403b*/
    v9 = 1800; /*0x66404e*/
    TicksTimer = Timer::GetTicks(); /*0x664053*/
    v18 = v16; /*0x664057*/
    v19 = 1800; /*0x66405b*/
    v10 = 0; /*0x66405f*/
    while ( 1 ) /*0x664067*/
    {
      if ( TicksTimer != -1 ) /*0x66406c*/
      {
        v11 = Timer::GetTicks() - TicksTimer; /*0x664077*/
        if ( v11 >= v9 ) /*0x66407d*/
          return v10 != 0; /*0x66407d*/
        v9 -= v11; /*0x66407f*/
      }
      if ( !v9 ) /*0x664083*/
        break; /*0x664083*/
      Event::Dispatch(); /*0x664085*/
      if ( Network::SendPacketThunk2(v27, v22, v23, v21) && v27[0] == 4 ) /*0x6640b7*/
      {
        v10 = 1; /*0x6640be*/
        Debug::Log(); /*0x6640c3*/
        *(_BYTE *)(this + 24) = 1; /*0x6640cb*/
        return v10 != 0; /*0x6640cb*/
      }
      v9 = v19; /*0x664063*/
    }
    return v10 != 0; /*0x6640cf*/
  }
  else
  {
    GetLastError(); /*0x663ffa*/
    Debug::Log(); /*0x664006*/
    return 0; /*0x664012*/
  }
}
}
} // namespace gamemd

// 0x664750
namespace gamemd {
char E4Recv_664750::sub_664750(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_664750(unsigned __int8 *this, char a2)
{
  int v2; // eax
  _BYTE v4[340]; // [esp+4h] [ebp-154h] BYREF

  memset(v4, 0, 338); /*0x664764*/
  v2 = *(this + 24); /*0x66476c*/
  if ( (_BYTE)v2 ) /*0x664772*/
  {
    v4[0] = 6; /*0x664780*/
    v4[1] = a2; /*0x664785*/
    Debug::Log(); /*0x664789*/
    LOBYTE(v2) = Network::SendPacket((int)MEMORY[0xA8E9C0], (int)v4, 338, 1u); /*0x6647a2*/
  }
  return v2; /*0x66476f*/
}
}
} // namespace gamemd

// 0x664B10
namespace gamemd {
void sub_664B10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_664B10()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x664b1c*/
  dbl_B05358 = Math::Sqrt(v0 + v0); /*0x664b2e*/
}
}
} // namespace gamemd

// 0x664B40
namespace gamemd {
void sub_664B40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_664B40()
{
  dbl_B053A8 = dbl_B05358 / 60.0; /*0x664b4c*/
}
}
} // namespace gamemd

// 0x664B60
namespace gamemd {
void sub_664B60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_664B60()
{
  dbl_B05390 = 1.0 / dbl_B053A8; /*0x664b6c*/
}
}
} // namespace gamemd

// 0x664B80
namespace gamemd {
void sub_664B80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_664B80()
{
  dbl_B05388 = 0.0174532925199433 * 45.0; /*0x664b8c*/
}
}
} // namespace gamemd

// 0x664BA0
namespace gamemd {
void sub_664BA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_664BA0()
{
  dbl_B05360 = 0.0174532925199433 * 60.0; /*0x664bac*/
}
}
} // namespace gamemd

// 0x664BC0
namespace gamemd {
void sub_664BC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_664BC0()
{
  dbl_B05338 = 0.0174532925199433 * 90.0; /*0x664bcc*/
}
}
} // namespace gamemd

// 0x664BE0
namespace gamemd {
long long sub_664BE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_664BE0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B05338 - dbl_B05360); /*0x664bf2*/
  result = Math::RoundToInt(v0 * dbl_B05358 * 0.5); /*0x664c06*/
  dword_B053B0 = result; /*0x664c0b*/
  return result; /*0x664c10*/
}
}
} // namespace gamemd

// 0x664C20
namespace gamemd {
void sub_664C20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_664C20()
{
  dbl_B05368 = Math::ArcTan((double)dword_B053B0 * 0.00390625); /*0x664c37*/
}
}
} // namespace gamemd

// 0x664C50
namespace gamemd {
void sub_664C50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_664C50()
{
  dbl_B05380 = Math::ArcTan((double)(2 * dword_B053B0) / dbl_B05358); /*0x664c72*/
}
}
} // namespace gamemd

// 0x664C80
namespace gamemd {
long long sub_664C80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_664C80()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B053B0) + 0.5); /*0x664c9b*/
  dword_B053A4 = result; /*0x664ca0*/
  return result; /*0x664ca6*/
}
}
} // namespace gamemd

// 0x664CB0
namespace gamemd {
int sub_664CB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_664CB0()
{
  word_B05350 = 0; /*0x664cb2*/
  word_B05352 = 0; /*0x664cb8*/
  return 0; /*0x664cbe*/
}
}
} // namespace gamemd

// 0x664CC0
namespace gamemd {
int sub_664CC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_664CC0()
{
  dword_B05370 = 0; /*0x664cc2*/
  dword_B05374 = 0; /*0x664cc7*/
  dword_B05378 = 0; /*0x664ccc*/
  return 0; /*0x664cd1*/
}
}
} // namespace gamemd

// 0x664CE0
namespace gamemd {
int sub_664CE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_664CE0()
{
  dword_B053A0 = 0; /*0x664ce5*/
  dword_B05398 = 128; /*0x664cef*/
  dword_B0539C = 128; /*0x664cf4*/
  return 128; /*0x664cf9*/
}
}
} // namespace gamemd

// 0x664D00
namespace gamemd {
int sub_664D00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_664D00()
{
  dword_B05340 = 0; /*0x664d02*/
  dword_B05344 = 0; /*0x664d07*/
  dword_B05348 = 0; /*0x664d0c*/
  dword_B0534C = 0; /*0x664d11*/
  return 0; /*0x664d16*/
}
}
} // namespace gamemd

// 0x6633C0
namespace gamemd {
void nullsub_224(int a1)
{
  ;
}
} // namespace gamemd

// 0x664380
namespace gamemd {
void nullsub_33()
{
  ;
}
} // namespace gamemd
