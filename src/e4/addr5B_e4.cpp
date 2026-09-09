// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5B1B80
namespace gamemd {
int sub_5B1B80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5B1B80()
{
  MEMORY[0xABEE60] = 0; /*0x5b1b82*/
  MEMORY[0xABEE64] = 0; /*0x5b1b87*/
  MEMORY[0xABEE68] = 0; /*0x5b1b8c*/
  MEMORY[0xABEE6C] = 0; /*0x5b1b91*/
  return 0; /*0x5b1b96*/
}
}
} // namespace gamemd

// 0x5B1BA0
namespace gamemd {
void sub_5B1BA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5B1BA0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5b1bac*/
  MEMORY[0xABEE78] = Math::Sqrt(v0 + v0); /*0x5b1bbe*/
}
}
} // namespace gamemd

// 0x5B1BD0
namespace gamemd {
void sub_5B1BD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5B1BD0()
{
  MEMORY[0xABEEC8] = MEMORY[0xABEE78] / 60.0; /*0x5b1bdc*/
}
}
} // namespace gamemd

// 0x5B1BF0
namespace gamemd {
void sub_5B1BF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5B1BF0()
{
  MEMORY[0xABEEB0] = 1.0 / MEMORY[0xABEEC8]; /*0x5b1bfc*/
}
}
} // namespace gamemd

// 0x5B1C10
namespace gamemd {
void sub_5B1C10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5B1C10()
{
  MEMORY[0xABEEA8] = 0.0174532925199433 * 45.0; /*0x5b1c1c*/
}
}
} // namespace gamemd

// 0x5B1C30
namespace gamemd {
void sub_5B1C30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5B1C30()
{
  MEMORY[0xABEE80] = 0.0174532925199433 * 60.0; /*0x5b1c3c*/
}
}
} // namespace gamemd

// 0x5B1C50
namespace gamemd {
void sub_5B1C50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5B1C50()
{
  MEMORY[0xABEE58] = 0.0174532925199433 * 90.0; /*0x5b1c5c*/
}
}
} // namespace gamemd

// 0x5B1C70
namespace gamemd {
long long sub_5B1C70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_5B1C70()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xABEE58] - MEMORY[0xABEE80]); /*0x5b1c82*/
  result = Math::RoundToInt(v0 * MEMORY[0xABEE78] * 0.5); /*0x5b1c96*/
  MEMORY[0xABEED0] = result; /*0x5b1c9b*/
  return result; /*0x5b1ca0*/
}
}
} // namespace gamemd

// 0x5B1CB0
namespace gamemd {
void sub_5B1CB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5B1CB0()
{
  MEMORY[0xABEE88] = Math::ArcTan((double)MEMORY[0xABEED0] * 0.00390625); /*0x5b1cc7*/
}
}
} // namespace gamemd

// 0x5B1CE0
namespace gamemd {
void sub_5B1CE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5B1CE0()
{
  MEMORY[0xABEEA0] = Math::ArcTan((double)(2 * MEMORY[0xABEED0]) / MEMORY[0xABEE78]); /*0x5b1d02*/
}
}
} // namespace gamemd

// 0x5B1D10
namespace gamemd {
long long sub_5B1D10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_5B1D10()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABEED0]) + 0.5); /*0x5b1d2b*/
  MEMORY[0xABEEC4] = result; /*0x5b1d30*/
  return result; /*0x5b1d36*/
}
}
} // namespace gamemd

// 0x5B1D40
namespace gamemd {
int sub_5B1D40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5B1D40()
{
  MEMORY[0xABEE70] = 0; /*0x5b1d42*/
  MEMORY[0xABEE72] = 0; /*0x5b1d48*/
  return 0; /*0x5b1d4e*/
}
}
} // namespace gamemd

// 0x5B1D50
namespace gamemd {
int sub_5B1D50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5B1D50()
{
  MEMORY[0xABEE90] = 0; /*0x5b1d52*/
  MEMORY[0xABEE94] = 0; /*0x5b1d57*/
  MEMORY[0xABEE98] = 0; /*0x5b1d5c*/
  return 0; /*0x5b1d61*/
}
}
} // namespace gamemd

// 0x5B1D70
namespace gamemd {
int sub_5B1D70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5B1D70()
{
  MEMORY[0xABEEC0] = 0; /*0x5b1d75*/
  MEMORY[0xABEEB8] = 128; /*0x5b1d7f*/
  MEMORY[0xABEEBC] = 128; /*0x5b1d84*/
  return 128; /*0x5b1d89*/
}
}
} // namespace gamemd

// 0x5B1D90
namespace gamemd {
double * sub_5B1D90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
double *__thiscall sub_5B1D90(double *this)
{
  DWORD v2; // edi
  unsigned int v4; // [esp+8h] [ebp-Ch] BYREF
  double v5; // [esp+Ch] [ebp-8h]

  *(_DWORD *)this = 0; /*0x5b1d9b*/
  v4 = 0; /*0x5b1da1*/
  *((_DWORD *)this + 1) = 1072693248; /*0x5b1da9*/
  v2 = sub_5CAF70((LONG *)&v4); /*0x5b1db5*/
  if ( v2 || v4 ) /*0x5b1dc1*/
  {
    v5 = (double)v4; /*0x5b1de8*/
    Debug::Log(); /*0x5b1dec*/
    *this = (v5 * 4294967296.0 + (double)v2) * 0.001; /*0x5b1e19*/
    return this; /*0x5b1e0e*/
  }
  else
  {
    timeBeginPeriod(1u); /*0x5b1dc5*/
    return this; /*0x5b1dcb*/
  }
}
}
} // namespace gamemd

// 0x5B1EE0
namespace gamemd {
int sub_5B1EE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5B1EE0()
{
  MEMORY[0xABEEE0] = 0; /*0x5b1ee2*/
  MEMORY[0xABEEE4] = 0; /*0x5b1ee7*/
  MEMORY[0xABEEE8] = 0; /*0x5b1eec*/
  MEMORY[0xABEEEC] = 0; /*0x5b1ef1*/
  return 0; /*0x5b1ef6*/
}
}
} // namespace gamemd

// 0x5B1F00
namespace gamemd {
void sub_5B1F00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5B1F00()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5b1f0c*/
  MEMORY[0xABEEF8] = Math::Sqrt(v0 + v0); /*0x5b1f1e*/
}
}
} // namespace gamemd

// 0x5B1F30
namespace gamemd {
void sub_5B1F30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5B1F30()
{
  MEMORY[0xABEF48] = MEMORY[0xABEEF8] / 60.0; /*0x5b1f3c*/
}
}
} // namespace gamemd

// 0x5B1F50
namespace gamemd {
void sub_5B1F50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5B1F50()
{
  MEMORY[0xABEF30] = 1.0 / MEMORY[0xABEF48]; /*0x5b1f5c*/
}
}
} // namespace gamemd

// 0x5B1F70
namespace gamemd {
void sub_5B1F70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5B1F70()
{
  MEMORY[0xABEF28] = 0.0174532925199433 * 45.0; /*0x5b1f7c*/
}
}
} // namespace gamemd

// 0x5B1F90
namespace gamemd {
void sub_5B1F90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5B1F90()
{
  MEMORY[0xABEF00] = 0.0174532925199433 * 60.0; /*0x5b1f9c*/
}
}
} // namespace gamemd

// 0x5B1FB0
namespace gamemd {
void sub_5B1FB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5B1FB0()
{
  MEMORY[0xABEED8] = 0.0174532925199433 * 90.0; /*0x5b1fbc*/
}
}
} // namespace gamemd

// 0x5B1FD0
namespace gamemd {
long long sub_5B1FD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_5B1FD0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xABEED8] - MEMORY[0xABEF00]); /*0x5b1fe2*/
  result = Math::RoundToInt(v0 * MEMORY[0xABEEF8] * 0.5); /*0x5b1ff6*/
  MEMORY[0xABEF50] = result; /*0x5b1ffb*/
  return result; /*0x5b2000*/
}
}
} // namespace gamemd

// 0x5B2010
namespace gamemd {
void sub_5B2010()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5B2010()
{
  MEMORY[0xABEF08] = Math::ArcTan((double)MEMORY[0xABEF50] * 0.00390625); /*0x5b2027*/
}
}
} // namespace gamemd

// 0x5B2040
namespace gamemd {
void sub_5B2040()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5B2040()
{
  MEMORY[0xABEF20] = Math::ArcTan((double)(2 * MEMORY[0xABEF50]) / MEMORY[0xABEEF8]); /*0x5b2062*/
}
}
} // namespace gamemd

// 0x5B2070
namespace gamemd {
long long sub_5B2070()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_5B2070()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABEF50]) + 0.5); /*0x5b208b*/
  MEMORY[0xABEF44] = result; /*0x5b2090*/
  return result; /*0x5b2096*/
}
}
} // namespace gamemd

// 0x5B20A0
namespace gamemd {
int sub_5B20A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5B20A0()
{
  MEMORY[0xABEEF0] = 0; /*0x5b20a2*/
  MEMORY[0xABEEF2] = 0; /*0x5b20a8*/
  return 0; /*0x5b20ae*/
}
}
} // namespace gamemd

// 0x5B20B0
namespace gamemd {
int sub_5B20B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5B20B0()
{
  MEMORY[0xABEF10] = 0; /*0x5b20b2*/
  MEMORY[0xABEF14] = 0; /*0x5b20b7*/
  MEMORY[0xABEF18] = 0; /*0x5b20bc*/
  return 0; /*0x5b20c1*/
}
}
} // namespace gamemd

// 0x5B20D0
namespace gamemd {
int sub_5B20D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5B20D0()
{
  MEMORY[0xABEF40] = 0; /*0x5b20d5*/
  MEMORY[0xABEF38] = 128; /*0x5b20df*/
  MEMORY[0xABEF3C] = 128; /*0x5b20e4*/
  return 128; /*0x5b20e9*/
}
}
} // namespace gamemd

// 0x5B2B90
namespace gamemd {
void sub_5B2B90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5B2B90()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5b2b9c*/
  MEMORY[0xABEF78] = Math::Sqrt(v0 + v0); /*0x5b2bae*/
}
}
} // namespace gamemd

// 0x5B2BC0
namespace gamemd {
void sub_5B2BC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5B2BC0()
{
  MEMORY[0xABEFC8] = MEMORY[0xABEF78] / 60.0; /*0x5b2bcc*/
}
}
} // namespace gamemd

// 0x5B2BE0
namespace gamemd {
void sub_5B2BE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5B2BE0()
{
  MEMORY[0xABEFB0] = 1.0 / MEMORY[0xABEFC8]; /*0x5b2bec*/
}
}
} // namespace gamemd

// 0x5B2C00
namespace gamemd {
void sub_5B2C00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5B2C00()
{
  MEMORY[0xABEFA8] = 0.0174532925199433 * 45.0; /*0x5b2c0c*/
}
}
} // namespace gamemd

// 0x5B2C20
namespace gamemd {
void sub_5B2C20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5B2C20()
{
  MEMORY[0xABEF80] = 0.0174532925199433 * 60.0; /*0x5b2c2c*/
}
}
} // namespace gamemd

// 0x5B2C40
namespace gamemd {
void sub_5B2C40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5B2C40()
{
  MEMORY[0xABEF58] = 0.0174532925199433 * 90.0; /*0x5b2c4c*/
}
}
} // namespace gamemd

// 0x5B2C60
namespace gamemd {
long long sub_5B2C60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_5B2C60()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xABEF58] - MEMORY[0xABEF80]); /*0x5b2c72*/
  result = Math::RoundToInt(v0 * MEMORY[0xABEF78] * 0.5); /*0x5b2c86*/
  MEMORY[0xABEFD0] = result; /*0x5b2c8b*/
  return result; /*0x5b2c90*/
}
}
} // namespace gamemd

// 0x5B2CA0
namespace gamemd {
void sub_5B2CA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5B2CA0()
{
  MEMORY[0xABEF88] = Math::ArcTan((double)MEMORY[0xABEFD0] * 0.00390625); /*0x5b2cb7*/
}
}
} // namespace gamemd

// 0x5B2CD0
namespace gamemd {
void sub_5B2CD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5B2CD0()
{
  MEMORY[0xABEFA0] = Math::ArcTan((double)(2 * MEMORY[0xABEFD0]) / MEMORY[0xABEF78]); /*0x5b2cf2*/
}
}
} // namespace gamemd

// 0x5B2D00
namespace gamemd {
long long sub_5B2D00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_5B2D00()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABEFD0]) + 0.5); /*0x5b2d1b*/
  MEMORY[0xABEFC4] = result; /*0x5b2d20*/
  return result; /*0x5b2d26*/
}
}
} // namespace gamemd

// 0x5B2D30
namespace gamemd {
int sub_5B2D30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5B2D30()
{
  MEMORY[0xABEF70] = 0; /*0x5b2d32*/
  MEMORY[0xABEF72] = 0; /*0x5b2d38*/
  return 0; /*0x5b2d3e*/
}
}
} // namespace gamemd

// 0x5B2D40
namespace gamemd {
int sub_5B2D40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5B2D40()
{
  MEMORY[0xABEF90] = 0; /*0x5b2d42*/
  MEMORY[0xABEF94] = 0; /*0x5b2d47*/
  MEMORY[0xABEF98] = 0; /*0x5b2d4c*/
  return 0; /*0x5b2d51*/
}
}
} // namespace gamemd

// 0x5B2D60
namespace gamemd {
int sub_5B2D60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5B2D60()
{
  MEMORY[0xABEFC0] = 0; /*0x5b2d65*/
  MEMORY[0xABEFB8] = 128; /*0x5b2d6f*/
  MEMORY[0xABEFBC] = 128; /*0x5b2d74*/
  return 128; /*0x5b2d79*/
}
}
} // namespace gamemd

// 0x5B2D80
namespace gamemd {
int sub_5B2D80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5B2D80()
{
  MEMORY[0xABEF60] = 0; /*0x5b2d82*/
  MEMORY[0xABEF64] = 0; /*0x5b2d87*/
  MEMORY[0xABEF68] = 0; /*0x5b2d8c*/
  MEMORY[0xABEF6C] = 0; /*0x5b2d91*/
  return 0; /*0x5b2d96*/
}
}
} // namespace gamemd

// 0x5B3950
namespace gamemd {
char * Name_FromIndex(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__fastcall Name_FromIndex(int a1)
{
  if ( a1 == -1 ) /*0x5b3953*/
    return MEMORY[0x817474]; /*0x5b395d*/
  else
    return off_816CAC[a1]; /*0x5b3955*/
}
}
} // namespace gamemd

// 0x5B3AA0
namespace gamemd {
int sub_5B3AA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5B3AA0()
{
  MEMORY[0xABEFF8] = 0; /*0x5b3aa2*/
  MEMORY[0xABEFFC] = 0; /*0x5b3aa7*/
  MEMORY[0xABF000] = 0; /*0x5b3aac*/
  MEMORY[0xABF004] = 0; /*0x5b3ab1*/
  return 0; /*0x5b3ab6*/
}
}
} // namespace gamemd

// 0x5B3AC0
namespace gamemd {
int sub_5B3AC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5B3AC0()
{
  MEMORY[0xABEFE4] = 0; /*0x5b3acc*/
  MEMORY[0xABEFDC] = (int)&GenericNode::`vftable'; /*0x5b3ad2*/
  MEMORY[0xABEFE8] = (int)&GenericNode::`vftable'; /*0x5b3ad7*/
  MEMORY[0xABEFEC] = 0; /*0x5b3adc*/
  MEMORY[0xABEFF0] = (int)&MEMORY[0xABEFDC]; /*0x5b3ae2*/
  MEMORY[0xABEFE0] = (int)&MEMORY[0xABEFE8]; /*0x5b3aec*/
  MEMORY[0xABEFD8] = (int)&List<MixFileClass *>::`vftable'; /*0x5b3af6*/
  return atexit(sub_5B3B10); /*0x5b3b06*/
}
}
} // namespace gamemd

// 0x5B3B10
namespace gamemd {
void sub_5B3B10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_5B3B10()
{
  int v0; // edx
  int v1; // edi
  int v2; // ecx
  int v3; // esi
  _DWORD *v4; // eax

  if ( (MEMORY[0xABF008] & 1) == 0 ) /*0x5b3b1b*/
  {
    MEMORY[0xABF008] |= 1u; /*0x5b3b25*/
    MEMORY[0xABEFD8] = (int)&GenericList::`vftable'; /*0x5b3b2b*/
LABEL_3:
    v0 = MEMORY[0xABEFE0]; /*0x5b3b37*/
    while ( MEMORY[0xABEFE0] /*0x5b3b4d*/
         && *(_DWORD *)(MEMORY[0xABEFE0] + 4)
         && *(_DWORD *)(MEMORY[0xABEFE0] + 8)
         && MEMORY[0xABEFE0] )
    {
      v1 = *(_DWORD *)(MEMORY[0xABEFE0] + 4); /*0x5b3b4f*/
      v2 = MEMORY[0xABEFE0] + 4; /*0x5b3b52*/
      if ( v1 ) /*0x5b3b57*/
      {
        v3 = *(_DWORD *)(MEMORY[0xABEFE0] + 8); /*0x5b3b59*/
        v4 = (_DWORD *)(MEMORY[0xABEFE0] + 8); /*0x5b3b5c*/
        if ( v3 ) /*0x5b3b61*/
        {
          *(_DWORD *)(v3 + 4) = v1; /*0x5b3b63*/
          *(_DWORD *)(*(_DWORD *)v2 + 8) = *v4; /*0x5b3b6a*/
          *v4 = 0; /*0x5b3b6d*/
          *(_DWORD *)v2 = 0; /*0x5b3b6f*/
          goto LABEL_3; /*0x5b3b71*/
        }
      }
    }
    MEMORY[0xABEFE8] = (int)&GenericNode::`vftable'; /*0x5b3b7f*/
    if ( &MEMORY[0xABEFE8] && MEMORY[0xABEFEC] && MEMORY[0xABEFF0] ) /*0x5b3b98*/
    {
      *(_DWORD *)(MEMORY[0xABEFF0] + 4) = MEMORY[0xABEFEC]; /*0x5b3b9a*/
      *(_DWORD *)(MEMORY[0xABEFEC] + 8) = MEMORY[0xABEFF0]; /*0x5b3ba9*/
      v0 = MEMORY[0xABEFE0]; /*0x5b3bac*/
      MEMORY[0xABEFF0] = 0; /*0x5b3bb2*/
      MEMORY[0xABEFEC] = 0; /*0x5b3bb8*/
    }
    MEMORY[0xABEFDC] = (int)&GenericNode::`vftable'; /*0x5b3bc3*/
    if ( &MEMORY[0xABEFDC] && v0 && MEMORY[0xABEFE4] ) /*0x5b3bda*/
    {
      *(_DWORD *)(MEMORY[0xABEFE4] + 4) = v0; /*0x5b3bdc*/
      *(_DWORD *)(MEMORY[0xABEFE0] + 8) = MEMORY[0xABEFE4]; /*0x5b3beb*/
      MEMORY[0xABEFE4] = 0; /*0x5b3bee*/
      MEMORY[0xABEFE0] = 0; /*0x5b3bf4*/
    }
  }
}
}
} // namespace gamemd

// 0x5B3E90
namespace gamemd {
char sub_5B3E90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_5B3E90(void *this)
{
  int i; // esi
  ObjectClass Filename; // [esp+8h] [ebp-304h] BYREF
  char Ext[256]; // [esp+108h] [ebp-204h] BYREF
  char Buffer[260]; // [esp+208h] [ebp-104h] BYREF

  for ( i = (int)*(&g_MatrixTransformState + 116); ; i = *(_DWORD *)(i + 4) ) /*0x5b3e97*/
  {
    if ( !i || !*(_DWORD *)(i + 4) || !*(_DWORD *)(i + 8) ) /*0x5b3eb3*/
      return 0; /*0x5b3f42*/
    _splitpath(*(const char **)(i + 12), 0, 0, &Filename, Ext); /*0x5b3ed3*/
    _makepath(Buffer, 0, 0, &Filename, Ext); /*0x5b3ef1*/
    if ( !_strcmpi(Buffer, this) ) /*0x5b3eff*/
      break; /*0x5b3eff*/
  }
  if ( *(_DWORD *)(i + 36) ) /*0x5b3f14*/
  {
    if ( *(_BYTE *)(i + 18) ) /*0x5b3f1b*/
      __3_YAXPAX_Z(*(void **)(i + 36)); /*0x5b3f23*/
  }
  *(_DWORD *)(i + 36) = 0; /*0x5b3f2b*/
  *(_BYTE *)(i + 18) = 0; /*0x5b3f32*/
  return 1; /*0x5b3f36*/
}
}
} // namespace gamemd

// 0x5B3F50
namespace gamemd {
void sub_5B3F50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_5B3F50(void *this)
{
  void *v2; // eax
  void *v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // eax

  v2 = (void *)this->CountFiles; /*0x5b3f56*/
  *(_DWORD *)this = &MixFileClass::`vftable'; /*0x5b3f59*/
  if ( v2 ) /*0x5b3f61*/
    free(v2); /*0x5b3f64*/
  if ( this->MixFileClass_field_24 && *((_BYTE *)this + 18) ) /*0x5b3f73*/
  {
    __3_YAXPAX_Z(*((void **)this + 9)); /*0x5b3f79*/
    *((_BYTE *)this + 18) = 0; /*0x5b3f81*/
  }
  v3 = (void *)*((_DWORD *)this + 8); /*0x5b3f84*/
  this->MixFileClass_field_24 = 0; /*0x5b3f87*/
  if ( v3 ) /*0x5b3f8c*/
  {
    __3_YAXPAX_Z(v3); /*0x5b3f8f*/
    *((_DWORD *)this + 8) = 0; /*0x5b3f97*/
  }
  if ( this ) /*0x5b3f9c*/
  {
    v4 = *((_DWORD *)this + 1); /*0x5b3f9e*/
    if ( v4 ) /*0x5b3fa3*/
    {
      v5 = *((_DWORD *)this + 2); /*0x5b3fa5*/
      if ( v5 ) /*0x5b3faa*/
      {
        *(_DWORD *)(v5 + 4) = v4; /*0x5b3fac*/
        *(_DWORD *)(*((_DWORD *)this + 1) + 8) = *((_DWORD *)this + 2); /*0x5b3fb5*/
        *((_DWORD *)this + 2) = 0; /*0x5b3fb8*/
        *((_DWORD *)this + 1) = 0; /*0x5b3fbb*/
      }
    }
  }
  *(_DWORD *)this = &GenericNode::`vftable'; /*0x5b3fc0*/
  if ( this ) /*0x5b3fc6*/
  {
    v6 = *((_DWORD *)this + 1); /*0x5b3fc8*/
    if ( v6 ) /*0x5b3fcd*/
    {
      v7 = *((_DWORD *)this + 2); /*0x5b3fcf*/
      if ( v7 ) /*0x5b3fd4*/
      {
        *(_DWORD *)(v7 + 4) = v6; /*0x5b3fd6*/
        *(_DWORD *)(*((_DWORD *)this + 1) + 8) = *((_DWORD *)this + 2); /*0x5b3fdf*/
        *((_DWORD *)this + 2) = 0; /*0x5b3fe2*/
        *((_DWORD *)this + 1) = 0; /*0x5b3fe5*/
      }
    }
  }
}
}
} // namespace gamemd

// 0x5B3FF0
namespace gamemd {
unsigned int * sub_5B3FF0(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__fastcall sub_5B3FF0(_DWORD *a1, _DWORD *a2)
{
  _DWORD *result; // eax

  for ( result = (_DWORD *)*a2; *a2; result = (_DWORD *)*a2 ) /*0x5b3ff0*/
  {
    a2 = result + 1; /*0x5b3fff*/
    if ( result[2] >= a1[2] ) /*0x5b4002*/
      a2 = result; /*0x5b4004*/
  }
  *a2 = a1; /*0x5b400d*/
  *a1 = 0; /*0x5b400f*/
  a1[1] = 0; /*0x5b4015*/
  return result; /*0x5b401c*/
}
}
} // namespace gamemd

// 0x5B40B0
namespace gamemd {
int SearchMIXFile(char * Source, IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall SearchMIXFile(char *Source, IUnknown *aP1)
{
  int v3; // edi
  _DWORD *v4; // eax
  int v5; // ecx
  bool v6; // cc
  CoordStruct *v8; // eax
  CoordStruct *v9; // esi
  int *p_Y; // edx
  void *SHPFile; // edi
  void *v12; // eax
  char v13; // [esp+13h] [ebp-17Dh]
  unsigned int v14[3]; // [esp+14h] [ebp-17Ch] BYREF
  _DWORD v15[22]; // [esp+20h] [ebp-170h] BYREF
  _BYTE v16[12]; // [esp+78h] [ebp-118h] BYREF
  int v17; // [esp+84h] [ebp-10Ch]
  ObjectClass Str; // [esp+8Ch] [ebp-104h] BYREF

  v13 = (char)aP1; /*0x5b40c7*/
  strcpy(Str.__pad_0, Source); /*0x5b40dd*/
  _strupr(Str.__pad_0); /*0x5b40ee*/
  memset(v14, 0, sizeof(v14)); /*0x5b4110*/
  v3 = Checksummer::Add_Buffer(v14, (unsigned __int8 *)&Str, (IUnknown *)strlen(Str.__pad_0)); /*0x5b4127*/
  v4 = *(&g_MatrixTransformState + 127); /*0x5b4129*/
  if ( !*(&g_MatrixTransformState + 127) ) /*0x5b4130*/
    goto LABEL_9; /*0x5b4130*/
  while ( 1 ) /*0x5b4132*/
  {
    v5 = v4[2]; /*0x5b4132*/
    v6 = v5 < v3; /*0x5b4135*/
    if ( v5 == v3 ) /*0x5b4137*/
      break; /*0x5b4137*/
LABEL_5:
    if ( v6 ) /*0x5b4140*/
      v4 = (_DWORD *)v4[1]; /*0x5b4142*/
    else
      v4 = (_DWORD *)*v4; /*0x5b4147*/
    if ( !v4 ) /*0x5b414b*/
      goto LABEL_9; /*0x5b414b*/
  }
  if ( !v4[3] ) /*0x5b4139*/
  {
    v6 = v5 < v3; /*0x5b413e*/
    goto LABEL_5; /*0x5b413e*/
  }
  if ( v4 ) /*0x5b419d*/
    return v4[3]; /*0x5b41ac*/
LABEL_9:
  CCFileClass::Construct(v15, Source); /*0x5b414d*/
  if ( CCFileClass::Open(v15, 0) ) /*0x5b415c*/
  {
    v8 = (CoordStruct *)__2_YAPAXI_Z(0x10u); /*0x5b41af*/
    v9 = v8; /*0x5b41b4*/
    v8->Z = v3; /*0x5b41b9*/
    p_Y = (int *)*(&g_MatrixTransformState + 127); /*0x5b41bc*/
    if ( *(&g_MatrixTransformState + 127) ) /*0x5b41c4*/
    {
      if ( (*(&g_MatrixTransformState + 127))->Z < v3 ) /*0x5b41d6*/
        p_Y = &(*(&g_MatrixTransformState + 127))->Y; /*0x5b41d8*/
      InsertIntoHashTree(v8, p_Y); /*0x5b41dd*/
    }
    else
    {
      *(&g_MatrixTransformState + 127) = v8; /*0x5b41c6*/
      v8->X = 0; /*0x5b41cc*/
      v8->Y = 0; /*0x5b41ce*/
    }
    if ( v13 || strstr(&Str, Ext) ) /*0x5b41f5*/
    {
      v12 = (void *)__2_YAPAXI_Z(0x24u); /*0x5b4210*/
      if ( v12 ) /*0x5b421a*/
        SHPFile = LoadSHPFile(v12, Source); /*0x5b4224*/
      else
        SHPFile = 0; /*0x5b4228*/
    }
    else
    {
      SHPFile = CCFileClass::ReadEntireFile(v15); /*0x5b420a*/
    }
    v9[1].X = (int)SHPFile; /*0x5b422a*/
    v15[0] = &CCFileClass::`vftable'; /*0x5b4231*/
    v17 = 0; /*0x5b4239*/
    Vector::Clear((int)v16); /*0x5b4240*/
    v15[0] = &off_7E1668; /*0x5b4249*/
    BufferIOFileClass::Dtor(v15); /*0x5b4251*/
    return (int)SHPFile; /*0x5b4256*/
  }
  else
  {
    v15[0] = &CCFileClass::`vftable'; /*0x5b4169*/
    v17 = 0; /*0x5b4171*/
    Vector::Clear((int)v16); /*0x5b4178*/
    v15[0] = &off_7E1668; /*0x5b4181*/
    BufferIOFileClass::Dtor(v15); /*0x5b4189*/
    return 0; /*0x5b418e*/
  }
}
}
} // namespace gamemd

// 0x5B4350
namespace gamemd {
int sub_5B4350()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_5B4350(void *this)
{
  int i; // esi
  ObjectClass Filename; // [esp+8h] [ebp-304h] BYREF
  char Ext[256]; // [esp+108h] [ebp-204h] BYREF
  char Buffer[260]; // [esp+208h] [ebp-104h] BYREF

  for ( i = (int)*(&g_MatrixTransformState + 116); i && *(_DWORD *)(i + 4) && *(_DWORD *)(i + 8); i = *(_DWORD *)(i + 4) ) /*0x5b4357*/
  {
    _splitpath(*(const char **)(i + 12), 0, 0, &Filename, Ext); /*0x5b4387*/
    _makepath(Buffer, 0, 0, &Filename, Ext); /*0x5b43a5*/
    if ( !_strcmpi(Buffer, this) ) /*0x5b43bd*/
      return i; /*0x5b43ce*/
  }
  return 0; /*0x5b43c6*/
}
}
} // namespace gamemd

// 0x5B43E0
namespace gamemd {
char _do_always_noconv_codecvt_base_std__MBE_NXZ_7()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall _do_always_noconv_codecvt_base_std__MBE_NXZ_7(std::codecvt_base *this)
{
  return 1; /*0x5b43e2*/
}
}
} // namespace gamemd

// 0x5B43F0
namespace gamemd {
char ReturnTrue(AnimClass * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall ReturnTrue(AnimClass *aP0)
{
  return 1; /*0x5b43f2*/
}
}
} // namespace gamemd

// 0x5B4400
namespace gamemd {
void sub_5B4400()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_5B4400(int this)
{
  if ( this->objectTypeFlags && *(_BYTE *)(this + 18) ) /*0x5b440d*/
    __3_YAXPAX_Z(*(void **)(this + 36)); /*0x5b4413*/
  this->objectTypeFlags = 0; /*0x5b441b*/
  *(_BYTE *)(this + 18) = 0; /*0x5b441e*/
}
}
} // namespace gamemd

// 0x5B4430
namespace gamemd {
char FileInfoCache_Lookup(const char * a1, unsigned int * a2, unsigned int * a3, unsigned int * a4, unsigned int * a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall FileInfoCache_Lookup(const char *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  int v5; // eax
  _DWORD *v6; // ebp
  int v7; // ecx
  int v8; // edi
  int v9; // esi
  int v10; // edx
  int v11; // eax
  unsigned int v14[3]; // [esp+18h] [ebp-110h] BYREF
  char String[260]; // [esp+24h] [ebp-104h] BYREF

  if ( !a1 ) /*0x5b4442*/
    return 0; /*0x5b4442*/
  strcpy(String, a1); /*0x5b4462*/
  _strupr(String); /*0x5b4470*/
  memset(v14, 0, sizeof(v14)); /*0x5b4490*/
  v5 = Checksummer::Add_Buffer(v14, (unsigned __int8 *)String, strlen(String)); /*0x5b449c*/
  v6 = (_DWORD *)MEMORY[0xABEFE0]; /*0x5b44a1*/
LABEL_3:
  while ( 2 ) /*0x5b44c0*/
  {
    if ( !v6 || !v6[1] || !v6[2] ) /*0x5b44c0*/
      return 0; /*0x5b4580*/
    v7 = v6[5]; /*0x5b44cb*/
    v8 = v6[8]; /*0x5b44ce*/
    if ( v7 <= 0 ) /*0x5b44d3*/
      goto LABEL_14; /*0x5b44d3*/
    while ( 1 ) /*0x5b44df*/
    {
      v9 = *(_DWORD *)(v8 + 12 * (v7 / 2)); /*0x5b44df*/
      v10 = v8 + 12 * (v7 / 2); /*0x5b44e2*/
      if ( v9 <= v5 ) /*0x5b44e7*/
        break; /*0x5b44e7*/
      v7 /= 2; /*0x5b44e9*/
LABEL_11:
      if ( v7 <= 0 ) /*0x5b44fb*/
      {
        v6 = (_DWORD *)v6[1]; /*0x5b44fd*/
        goto LABEL_3; /*0x5b4501*/
      }
    }
    if ( v9 != v5 ) /*0x5b44ed*/
    {
      v8 = v10 + 12; /*0x5b44ef*/
      v7 += -1 - v7 / 2; /*0x5b44f7*/
      goto LABEL_11; /*0x5b44f7*/
    }
    if ( !v10 ) /*0x5b4505*/
    {
LABEL_14:
      v6 = (_DWORD *)v6[1]; /*0x5b4507*/
      continue; /*0x5b450b*/
    }
    break;
  }
  if ( a3 ) /*0x5b4516*/
    *a3 = v6; /*0x5b4518*/
  if ( a5 ) /*0x5b4523*/
    *a5 = *(_DWORD *)(v10 + 8); /*0x5b4528*/
  if ( a2 ) /*0x5b4530*/
    *a2 = 0; /*0x5b4532*/
  if ( a4 ) /*0x5b4541*/
    *a4 = *(_DWORD *)(v10 + 4); /*0x5b4546*/
  if ( a2 ) /*0x5b454a*/
  {
    v11 = v6[9]; /*0x5b454c*/
    if ( v11 ) /*0x5b4551*/
      *a2 = v11 + *(_DWORD *)(v10 + 4); /*0x5b4558*/
  }
  if ( !v6[9] ) /*0x5b455a*/
  {
    if ( a4 ) /*0x5b4563*/
      *a4 += v6[7]; /*0x5b456c*/
  }
  return 1; /*0x5b456e*/
}
}
} // namespace gamemd

// 0x5B47A0
namespace gamemd {
int sub_5B47A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5B47A0()
{
  MEMORY[0xABF018] = 0; /*0x5b47a2*/
  MEMORY[0xABF01C] = 0; /*0x5b47a7*/
  MEMORY[0xABF020] = 0; /*0x5b47ac*/
  MEMORY[0xABF024] = 0; /*0x5b47b1*/
  return 0; /*0x5b47b6*/
}
}
} // namespace gamemd

// 0x5B47C0
namespace gamemd {
void sub_5B47C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5B47C0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5b47cc*/
  MEMORY[0xABF030] = Math::Sqrt(v0 + v0); /*0x5b47de*/
}
}
} // namespace gamemd

// 0x5B47F0
namespace gamemd {
void sub_5B47F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5B47F0()
{
  MEMORY[0xABF080] = MEMORY[0xABF030] / 60.0; /*0x5b47fc*/
}
}
} // namespace gamemd

// 0x5B4810
namespace gamemd {
void sub_5B4810()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5B4810()
{
  MEMORY[0xABF068] = 1.0 / MEMORY[0xABF080]; /*0x5b481c*/
}
}
} // namespace gamemd

// 0x5B4830
namespace gamemd {
void sub_5B4830()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5B4830()
{
  MEMORY[0xABF060] = 0.0174532925199433 * 45.0; /*0x5b483c*/
}
}
} // namespace gamemd

// 0x5B4850
namespace gamemd {
void sub_5B4850()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5B4850()
{
  MEMORY[0xABF038] = 0.0174532925199433 * 60.0; /*0x5b485c*/
}
}
} // namespace gamemd

// 0x5B4870
namespace gamemd {
void sub_5B4870()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5B4870()
{
  MEMORY[0xABF010] = 0.0174532925199433 * 90.0; /*0x5b487c*/
}
}
} // namespace gamemd

// 0x5B4890
namespace gamemd {
long long sub_5B4890()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_5B4890()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xABF010] - MEMORY[0xABF038]); /*0x5b48a2*/
  result = Math::RoundToInt(v0 * MEMORY[0xABF030] * 0.5); /*0x5b48b6*/
  MEMORY[0xABF088] = result; /*0x5b48bb*/
  return result; /*0x5b48c0*/
}
}
} // namespace gamemd

// 0x5B48D0
namespace gamemd {
void sub_5B48D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5B48D0()
{
  MEMORY[0xABF040] = Math::ArcTan((double)MEMORY[0xABF088] * 0.00390625); /*0x5b48e7*/
}
}
} // namespace gamemd

// 0x5B4900
namespace gamemd {
void sub_5B4900()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5B4900()
{
  MEMORY[0xABF058] = Math::ArcTan((double)(2 * MEMORY[0xABF088]) / MEMORY[0xABF030]); /*0x5b4922*/
}
}
} // namespace gamemd

// 0x5B4930
namespace gamemd {
long long sub_5B4930()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_5B4930()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABF088]) + 0.5); /*0x5b494b*/
  MEMORY[0xABF07C] = result; /*0x5b4950*/
  return result; /*0x5b4956*/
}
}
} // namespace gamemd

// 0x5B4960
namespace gamemd {
int sub_5B4960()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5B4960()
{
  MEMORY[0xABF028] = 0; /*0x5b4962*/
  MEMORY[0xABF02A] = 0; /*0x5b4968*/
  return 0; /*0x5b496e*/
}
}
} // namespace gamemd

// 0x5B4970
namespace gamemd {
int sub_5B4970()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5B4970()
{
  MEMORY[0xABF048] = 0; /*0x5b4972*/
  MEMORY[0xABF04C] = 0; /*0x5b4977*/
  MEMORY[0xABF050] = 0; /*0x5b497c*/
  return 0; /*0x5b4981*/
}
}
} // namespace gamemd

// 0x5B4990
namespace gamemd {
int sub_5B4990()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5B4990()
{
  MEMORY[0xABF078] = 0; /*0x5b4995*/
  MEMORY[0xABF070] = 128; /*0x5b499f*/
  MEMORY[0xABF074] = 128; /*0x5b49a4*/
  return 128; /*0x5b49a9*/
}
}
} // namespace gamemd

// 0x5B4B10
namespace gamemd {
int GameSetupDialogProc(HWND hWnd, unsigned int a2, unsigned int a3, unsigned int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall GameSetupDialogProc(HWND hWnd, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int result; // eax
  LONG WindowLongA; // ebp
  HWND v6; // eax
  HWND DlgItem; // eax
  HWND v8; // esi
  char *v9; // eax
  HWND v10; // eax
  HWND v11; // esi
  LRESULT v12; // eax
  HWND v13; // eax
  HWND v14; // edi
  void *v15; // esi
  int v16; // [esp-4h] [ebp-338h] BYREF
  wchar_t v17[22]; // [esp+Ch] [ebp-328h] BYREF
  _DWORD v18[62]; // [esp+38h] [ebp-2FCh] BYREF
  __int16 v19; // [esp+130h] [ebp-204h]
  wchar_t lParam[256]; // [esp+134h] [ebp-200h] BYREF

  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x5b4b38*/
  if ( result ) /*0x5b4b3f*/
    return result; /*0x5b4b3f*/
  WindowLongA = GetWindowLongA(hWnd, 8); /*0x5b4b4f*/
  switch ( a2 ) /*0x5b4b56*/
  {
    case 2u: /*0x5b4b56*/
      v15 = MEMORY[0xAC1154]; /*0x5b4ead*/
      if ( MEMORY[0xAC1154] ) /*0x5b4eb5*/
      {
        ComPtr::Dtor(MEMORY[0xAC1154]); /*0x5b4eb9*/
        __3_YAXPAX_Z(v15); /*0x5b4ebf*/
        MEMORY[0xAC1154] = 0; /*0x5b4ec7*/
      }
      return 0; /*0x5b4ec7*/
    case 0xFu: /*0x5b4b56*/
      if ( MEMORY[0xAC1154] ) /*0x5b4e8d*/
        Skirmish::RenderPreview(MEMORY[0xAC1154], hWnd); /*0x5b4e90*/
      ValidateRect(hWnd, 0); /*0x5b4e98*/
      return 0; /*0x5b4ea1*/
    case 0x111u: /*0x5b4b56*/
      if ( (unsigned __int16)a3 <= 0x540u ) /*0x5b4b7c*/
      {
        if ( (unsigned __int16)a3 == 1344 ) /*0x5b4b82*/
        {
          if ( HIWORD(a3) == 1281 ) /*0x5b4c4b*/
          {
            DlgItem = GetDlgItem(*(HWND *)WindowLongA, 1344); /*0x5b4c5a*/
            v8 = DlgItem; /*0x5b4c60*/
            if ( DlgItem ) /*0x5b4c64*/
            {
              SendMessageA(DlgItem, 0x4B3u, 0x100u, (LPARAM)lParam); /*0x5b4c83*/
              SendMessageA(v8, 0x4B2u, 0, (LPARAM)&MEMORY[0x887734]); /*0x5b4c92*/
              if ( wcslen(lParam) ) /*0x5b4c9c*/
              {
                if ( lParam[0] != 13 ) /*0x5b4cb5*/
                {
                  WideString::Trim(lParam); /*0x5b4cc2*/
                  if ( &v16 != (int *)-312 ) /*0x5b4cd0*/
                  {
                    memset(v18, 0, sizeof(v18)); /*0x5b4ce5*/
                    v19 = 0; /*0x5b4ce7*/
                    v18[0] = 104; /*0x5b4cf3*/
                    strcpy((char *)&v18[1], MEMORY[0xA8B380]); /*0x5b4d11*/
                    LOBYTE(v18[6]) = MEMORY[0xA8B394]; /*0x5b4d26*/
                    wcscpy((wchar_t *)((char *)&v18[6] + 1), lParam); /*0x5b4d2a*/
                    Stream::WriteBlock((int)&MEMORY[0xA8EA70], (int)v18, 250, 1); /*0x5b4d43*/
                    Stream::ReadPacket((int)&MEMORY[0xA8EA70]); /*0x5b4d4d*/
                    v9 = CharToWideString(MEMORY[0xA8B380]); /*0x5b4d57*/
                    UI_Setup((wchar_t *)v9, MEMORY[0xA8B394], (int)lParam); /*0x5b4d6e*/
                    return 0; /*0x5b4d7f*/
                  }
                }
              }
            }
          }
          return 0; /*0x5b4cd0*/
        }
        if ( (unsigned __int16)a3 != 1 ) /*0x5b4b89*/
        {
          if ( (unsigned __int16)a3 == 2 ) /*0x5b4b8c*/
          {
            if ( !HIWORD(a3) ) /*0x5b4bbb*/
            {
              Game::processStartup(WindowLongA); /*0x5b4bc6*/
              *(_DWORD *)(WindowLongA + 4) = 2; /*0x5b4bcb*/
              return 0; /*0x5b4bde*/
            }
          }
          else if ( (unsigned __int16)a3 == 1029 && HIWORD(a3) == 1 ) /*0x5b4b9f*/
          {
            ModemGame::AdvanceTauntCommand(WindowLongA); /*0x5b4ba7*/
            return 0; /*0x5b4bb8*/
          }
          return 0; /*0x5b4b9f*/
        }
        if ( !HIWORD(a3) ) /*0x5b4be1*/
        {
          v6 = GetDlgItem(*(HWND *)WindowLongA, 1); /*0x5b4bf4*/
          if ( v6 ) /*0x5b4bfc*/
            EnableWindow(v6, 0); /*0x5b4c01*/
          memset(v18, 0, sizeof(v18)); /*0x5b4c13*/
          v19 = 0; /*0x5b4c1e*/
          v18[0] = 116; /*0x5b4c26*/
          Stream::WriteBlock((int)&MEMORY[0xA8EA70], (int)v18, 250, 1); /*0x5b4c2e*/
          return 0; /*0x5b4c3f*/
        }
        return 0; /*0x5b4ed1*/
      }
      if ( (unsigned __int16)a3 != 1473 ) /*0x5b4d87*/
      {
        if ( (unsigned __int16)a3 == 1639 && HIWORD(a3) == 1 ) /*0x5b4d9e*/
        {
          v10 = GetDlgItem(*(HWND *)WindowLongA, 1639); /*0x5b4da9*/
          v11 = v10; /*0x5b4daf*/
          if ( v10 ) /*0x5b4db3*/
          {
            v12 = SendMessageA(v10, 0x147u, 0, 0); /*0x5b4dc9*/
            if ( v12 != -1 ) /*0x5b4dce*/
            {
              MEMORY[0xA8B3AC] = SendMessageA(v11, 0x150u, v12, 0); /*0x5b4ddf*/
              *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b4de4*/
              *(_BYTE *)(WindowLongA + 8) = 1; /*0x5b4de7*/
              return 0; /*0x5b4df6*/
            }
          }
        }
        return 0; /*0x5b4dce*/
      }
      if ( HIWORD(a3) != 1281 && HIWORD(a3) != 768 ) /*0x5b4e08*/
        return 0; /*0x5b4e08*/
      v13 = GetDlgItem(*(HWND *)WindowLongA, 1473); /*0x5b4e17*/
      v14 = v13; /*0x5b4e1d*/
      if ( !v13 ) /*0x5b4e21*/
        return 0; /*0x5b4e21*/
      SendMessageA(v13, 0x4B3u, 0x15u, (LPARAM)v17); /*0x5b4e3a*/
      WideString::Trim(v17); /*0x5b4e40*/
      if ( HIWORD(a3) != 768 ) /*0x5b4e4a*/
        SendMessageA(v14, 0x4B2u, 0, (LPARAM)v17); /*0x5b4e59*/
      CopyWideToChar(MEMORY[0xA8B380], (char *)v17, -1); /*0x5b4e66*/
      *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b4e72*/
      *(_BYTE *)(WindowLongA + 8) = 1; /*0x5b4e75*/
      return 0; /*0x5b4e70*/
    default:
      return 0; /*0x5b4b6a*/
  }
}
}
} // namespace gamemd

// 0x5B57D0
namespace gamemd {
HWND sub_5B57D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HWND __thiscall sub_5B57D0(HWND *this)
{
  HWND result; // eax
  HWND v3; // esi
  char *v4; // eax
  unsigned int v5; // edi
  HWND v6; // esi
  int (__usercall *v7)@<eax>(char@<cf>, char@<zf>); // edi
  HWND v8; // [esp-8h] [ebp-518h]
  int v9; // [esp+0h] [ebp-510h] BYREF
  wchar_t *Format; // [esp+10h] [ebp-500h]
  _DWORD v11[62]; // [esp+14h] [ebp-4FCh] BYREF
  __int16 v12; // [esp+10Ch] [ebp-404h]
  wchar_t lParam[256]; // [esp+110h] [ebp-400h] BYREF
  wchar_t Buffer[256]; // [esp+310h] [ebp-200h] BYREF

  result = GetDlgItem(*this, 1344); /*0x5b57ea*/
  v3 = result; /*0x5b57ec*/
  if ( result ) /*0x5b57f0*/
  {
    SendMessageA(result, 0x4B3u, 0x100u, (LPARAM)lParam); /*0x5b580f*/
    SendMessageA(v3, 0x4B2u, 0, (LPARAM)&MEMORY[0x887734]); /*0x5b581e*/
    result = (HWND)wcslen(lParam); /*0x5b5828*/
    if ( result ) /*0x5b5832*/
    {
      if ( lParam[0] != 13 ) /*0x5b5841*/
      {
        WideString::Trim(lParam); /*0x5b584e*/
        result = (HWND)lParam; /*0x5b5853*/
        if ( &v9 != (int *)-272 ) /*0x5b585c*/
        {
          memset(v11, 0, sizeof(v11)); /*0x5b5871*/
          v12 = 0; /*0x5b5873*/
          v11[0] = 104; /*0x5b587f*/
          strcpy((char *)&v11[1], MEMORY[0xA8B380]); /*0x5b589d*/
          LOBYTE(v11[6]) = MEMORY[0xA8B394]; /*0x5b58b2*/
          wcscpy((wchar_t *)((char *)&v11[6] + 1), lParam); /*0x5b58b6*/
          Stream::WriteBlock((int)&MEMORY[0xA8EA70], (int)v11, 250, 1); /*0x5b58cf*/
          Stream::ReadPacket((int)&MEMORY[0xA8EA70]); /*0x5b58d9*/
          v4 = CharToWideString(MEMORY[0xA8B380]); /*0x5b58e3*/
          v5 = MEMORY[0xA8B394]; /*0x5b58ea*/
          v8 = *this; /*0x5b58f5*/
          Format = (wchar_t *)v4; /*0x5b58f6*/
          result = GetDlgItem(v8, 1343); /*0x5b58fa*/
          v6 = result; /*0x5b58fc*/
          if ( result ) /*0x5b5900*/
          {
            if ( v5 >= 8 ) /*0x5b5904*/
              v7 = Math::InitDegToRad; /*0x5b5914*/
            else
              v7 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))MEMORY[0x8316A8][v5]; /*0x5b590b*/
            swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, lParam); /*0x5b5934*/
            return (HWND)DrawDialogText((LPARAM)v7, Buffer, v6); /*0x5b5946*/
          }
        }
      }
    }
  }
  return result; /*0x5b594b*/
}
}
} // namespace gamemd

// 0x5B5960
namespace gamemd {
char sub_5B5960()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_5B5960(int this)
{
  HWND DlgItem; // eax
  HWND v3; // edi

  DlgItem = GetDlgItem(*(HWND *)this, 1639); /*0x5b596d*/
  v3 = DlgItem; /*0x5b5973*/
  if ( DlgItem ) /*0x5b5977*/
  {
    DlgItem = (HWND)SendMessageA(DlgItem, 0x147u, 0, 0); /*0x5b5989*/
    if ( DlgItem != HWND_MESSAGE|0x2 ) /*0x5b598e*/
    {
      MEMORY[0xA8B3AC] = SendMessageA(v3, 0x150u, (WPARAM)DlgItem, 0); /*0x5b599b*/
      *(_BYTE *)(this + 9) = 1; /*0x5b59a2*/
      *(_BYTE *)(this + 8) = 1; /*0x5b59a5*/
      LOBYTE(DlgItem) = 1; /*0x5b59a0*/
    }
  }
  return (char)DlgItem; /*0x5b59a8*/
}
}
} // namespace gamemd

// 0x5B5A50
namespace gamemd {
char sub_5B5A50(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_5B5A50(int this, char a2)
{
  HWND DlgItem; // eax
  HWND v4; // esi
  wchar_t lParam[22]; // [esp+8h] [ebp-2Ch] BYREF

  DlgItem = GetDlgItem(*(HWND *)this, 1473); /*0x5b5a5f*/
  v4 = DlgItem; /*0x5b5a65*/
  if ( DlgItem ) /*0x5b5a69*/
  {
    SendMessageA(DlgItem, 0x4B3u, 0x15u, (LPARAM)lParam); /*0x5b5a7f*/
    WideString::Trim(lParam); /*0x5b5a85*/
    if ( !a2 ) /*0x5b5a90*/
      SendMessageA(v4, 0x4B2u, 0, (LPARAM)lParam); /*0x5b5a9f*/
    CopyWideToChar(MEMORY[0xA8B380], (char *)lParam, -1); /*0x5b5aac*/
    *(_BYTE *)(this + 9) = 1; /*0x5b5ab4*/
    *(_BYTE *)(this + 8) = 1; /*0x5b5ab7*/
    LOBYTE(DlgItem) = 1; /*0x5b5ab1*/
  }
  return (char)DlgItem; /*0x5b5aba*/
}
}
} // namespace gamemd

// 0x5B67F0
namespace gamemd {
char ApplyGameOptions(CampaignScore * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall ApplyGameOptions(CampaignScore *aP0)
{
  int v1; // esi
  int v2; // eax
  int v3; // eax
  ObjectClass *v5; // edx
  int v6; // eax
  unsigned int v7; // edx
  int v8; // ecx
  bool v9; // al
  int v10; // edi
  const wchar_t *v11; // esi
  ObjectClass *v12; // esi

  if ( HouseClass_Player.__pad_5568[8100] == (BYTE2(aP0[3].CampaignScore_field_0x14) & 1) ) /*0x5b6807*/
  {
    v1 = *(int *)((char *)&aP0[3].CampaignScore_field_0x20 + 2); /*0x5b680d*/
    if ( HouseClass_Player.__pad_5568[8300] == ((v1 & 4) != 0) && HouseClass_Player.__pad_5568[8297] == ((v1 & 2) != 0) ) /*0x5b6836*/
    {
      v2 = *(int *)((char *)&aP0[3].CampaignScore_field_0x14 + 2); /*0x5b683c*/
      if ( HouseClass_Player.__pad_5568[8108] == ((v2 & 2) != 0) /*0x5b6920*/
        && HouseClass_Player.__pad_5568[8109] == ((v2 & 4) != 0)
        && HouseClass_Player.__pad_5568[8299] == ((v1 & 8) != 0)
        && *(_DWORD *)&HouseClass_Player.__pad_5568[8128] == LOBYTE(aP0[3].CampaignScore_field_0x20)
        && *(_DWORD *)&HouseClass_Player.__pad_5568[8132] == BYTE1(aP0[3].CampaignScore_field_0x20)
        && g_RulesInitConfig == (ObjectClass *)BYTE2(aP0[3].CampaignScore_field_0x1C)
        && *(_DWORD *)&HouseClass_Player.__pad_5568[8104] == *(int *)((char *)&aP0[3].CampaignScore_field_0x10 + 2)
        && *(_DWORD *)&HouseClass_Player.__pad_5568[8124] == HIBYTE(aP0[3].CampaignScore_field_0x1C)
        && *(_DWORD *)&HouseClass_Player.__pad_5568[23264] == *(_DWORD *)&aP0[4].__pad_0[2]
        && ApplyGameOptions_Helper(
             &HouseClass_Player.__pad_5568[22188],
             (int *)((char *)&aP0[4].CampaignScore_field_0x04 + 2))
        && *(_DWORD *)&HouseClass_Player.__pad_5568[8116] == BYTE2(aP0[4].CampaignScore_field_0x10) )
      {
        v3 = *(int *)((char *)&aP0[3].CampaignScore_field_0x20 + 2); /*0x5b6926*/
        if ( HouseClass_Player.__pad_5568[8110] == ((v3 & 0x10) != 0) /*0x5b69da*/
          && HouseClass_Player.__pad_5568[8111] == ((v3 & 0x20) != 0)
          && HouseClass_Player.__pad_5568[8112] == ((v3 & 0x40) != 0)
          && HouseClass_Player.__pad_5568[8120] == ((v3 & 0x80) != 0)
          && !_strcmpi(&HouseClass_Player.__pad_5568[9772], (char *)&aP0[4].CampaignScore_field_0x10 + 3)
          && !strcmp(&HouseClass_Player.__pad_5568[10286], (const char *)&aP0[4].CampaignScore_field_0x20)
          && *(_DWORD *)&HouseClass_Player.__pad_5568[10320] == *(int *)((char *)&aP0[4].CampaignScore_field_0x0C + 2) )
        {
          return 0; /*0x5b69de*/
        }
      }
    }
  }
  Debug::Log(); /*0x5b69e9*/
  HouseClass_Player.__pad_5568[8100] = BYTE2(aP0[3].CampaignScore_field_0x14) & 1; /*0x5b69fa*/
  HouseClass_Player.__pad_5568[8300] = (*(int *)((_BYTE *)&aP0[3].CampaignScore_field_0x20 + 2) & 4) != 0; /*0x5b6a0c*/
  v5 = *(ObjectClass **)&HouseClass_Player.__pad_5568[22188]; /*0x5b6a18*/
  BYTE1(v5) = HouseClass_Player.__pad_5568[22189] & 0x7F; /*0x5b6a22*/
  HouseClass_Player.__pad_5568[8108] = (*(int *)((_BYTE *)&aP0[3].CampaignScore_field_0x14 + 2) & 2) != 0; /*0x5b6a25*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[22188] = (unsigned int)v5 /*0x5b6a38*/
                                                  | ((*(int *)((_BYTE *)&aP0[3].CampaignScore_field_0x14 + 2) & 2) << 14);
  HouseClass_Player.__pad_5568[8109] = (*(int *)((_BYTE *)&aP0[3].CampaignScore_field_0x14 + 2) & 4) != 0; /*0x5b6a49*/
  HouseClass_Player.__pad_5568[8299] = (*(int *)((_BYTE *)&aP0[3].CampaignScore_field_0x20 + 2) & 8) != 0; /*0x5b6a5c*/
  HouseClass_Player.__pad_5568[8297] = (*(int *)((_BYTE *)&aP0[3].CampaignScore_field_0x20 + 2) & 2) != 0; /*0x5b6a6f*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[8128] = LOBYTE(aP0[3].CampaignScore_field_0x20); /*0x5b6a7b*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[8132] = BYTE1(aP0[3].CampaignScore_field_0x20); /*0x5b6a88*/
  g_RulesInitConfig = (ObjectClass *)BYTE2(aP0[3].CampaignScore_field_0x1C); /*0x5b6a96*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[8104] = *(int *)((char *)&aP0[3].CampaignScore_field_0x10 + 2); /*0x5b6a9f*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[8124] = HIBYTE(aP0[3].CampaignScore_field_0x1C); /*0x5b6aaa*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[23264] = *(_DWORD *)&aP0[4].__pad_0[2]; /*0x5b6ab6*/
  v6 = *(int *)((char *)&aP0[4].CampaignScore_field_0x04 + 2); /*0x5b6abc*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[22188] = v6; /*0x5b6ac4*/
  LOBYTE(v6) = v6 | 0xC0; /*0x5b6acf*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[8116] = BYTE2(aP0[4].CampaignScore_field_0x10); /*0x5b6ad1*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[22700] = *(_DWORD *)&HouseClass_Player.__pad_5568[8116]; /*0x5b6ad7*/
  HouseClass_Player.__pad_5568[8110] = (*(int *)((_BYTE *)&aP0[3].CampaignScore_field_0x20 + 2) & 0x10) != 0; /*0x5b6ae9*/
  HouseClass_Player.__pad_5568[8111] = (*(int *)((_BYTE *)&aP0[3].CampaignScore_field_0x20 + 2) & 0x20) != 0; /*0x5b6afb*/
  HouseClass_Player.__pad_5568[8112] = (*(int *)((_BYTE *)&aP0[3].CampaignScore_field_0x20 + 2) & 0x40) != 0; /*0x5b6b0d*/
  v7 = *(unsigned int *)((char *)&aP0[3].CampaignScore_field_0x20 + 2) >> 7; /*0x5b6b19*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[22188] = v6; /*0x5b6b1c*/
  HouseClass_Player.__pad_5568[8120] = v7 & 1; /*0x5b6b29*/
  v8 = **(_DWORD **)&HouseClass_Player.__pad_5568[8060]; /*0x5b6b2f*/
  BYTE1(v8) = BYTE1(**(_DWORD **)&HouseClass_Player.__pad_5568[8060]) & 0xFB; /*0x5b6b31*/
  **(_DWORD **)&HouseClass_Player.__pad_5568[8060] = v8; /*0x5b6b34*/
  HouseClass_Player.__pad_5568[8296] = 1; /*0x5b6b3b*/
  nullsub_37(); /*0x5b6b42*/
  if ( _strcmpi(&HouseClass_Player.__pad_5568[9772], (char *)&aP0[4].CampaignScore_field_0x10 + 3) /*0x5b6ba4*/
    || _strcmpi(&HouseClass_Player.__pad_5568[10286], &aP0[4].CampaignScore_field_0x20)
    || HouseClass_Player.__pad_5568[10324] != ((*(int *)((_BYTE *)&aP0[3].CampaignScore_field_0x14 + 2) & 0x10) != 0)
    || *(_DWORD *)&HouseClass_Player.__pad_5568[10320] != *(int *)((char *)&aP0[4].CampaignScore_field_0x0C + 2)
    || !*(_WORD *)&HouseClass_Player.__pad_5568[8302] )
  {
    Debug::Log(); /*0x5b6baf*/
    strcpy(&HouseClass_Player.__pad_5568[9772], (const char *)&aP0[4].CampaignScore_field_0x10 + 3); /*0x5b6bce*/
    strcpy(&HouseClass_Player.__pad_5568[10286], (const char *)&aP0[4].CampaignScore_field_0x20); /*0x5b6bf4*/
    v9 = (*(int *)((_BYTE *)&aP0[3].CampaignScore_field_0x14 + 2) & 0x10) != 0; /*0x5b6c0b*/
    HouseClass_Player.__pad_5568[10324] = v9; /*0x5b6c12*/
    *(_DWORD *)&HouseClass_Player.__pad_5568[10320] = *(int *)((char *)&aP0[4].CampaignScore_field_0x0C + 2); /*0x5b6c1d*/
    if ( !strcmp(&HouseClass_Player.__pad_5568[9772], aRandmapSed) && v9 /*0x5b6c5d*/
      || (v10 = 0, *(int *)&HouseClass_Player.__pad_5568[9764] <= 0) )
    {
LABEL_33:
      wcscpy((wchar_t *)&HouseClass_Player.__pad_5568[8302], (const wchar_t *)&aP0[1].__pad_0[2]); /*0x5b6c86*/
    }
    else
    {
      while ( 1 ) /*0x5b6c64*/
      {
        v11 = *(const wchar_t **)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752] + 4 * v10); /*0x5b6c64*/
        if ( !_strcmpi(&HouseClass_Player.__pad_5568[9772], v11 + 44) ) /*0x5b6c70*/
          break; /*0x5b6c70*/
        if ( ++v10 >= *(int *)&HouseClass_Player.__pad_5568[9764] ) /*0x5b6c84*/
          goto LABEL_33; /*0x5b6c84*/
      }
      wcscpy((wchar_t *)&HouseClass_Player.__pad_5568[8302], v11); /*0x5b6cc4*/
    }
    v12 = (ObjectClass *)*(&g_MatrixTransformState + 2257); /*0x5b6c94*/
    if ( *(&g_MatrixTransformState + 2257) ) /*0x5b6c9f*/
    {
      ComPtr::Dtor(*(&g_MatrixTransformState + 2257)); /*0x5b6ca3*/
      __3_YAXPAX_Z(v12); /*0x5b6ca9*/
      *(&g_MatrixTransformState + 2257) = 0; /*0x5b6cb1*/
    }
  }
  return 1; /*0x5b69dc*/
}
}
} // namespace gamemd

// 0x5B6DA0
namespace gamemd {
void sub_5B6DA0(wchar_t * Source)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_5B6DA0(HWND *this, wchar_t *Source)
{
  char *v3; // eax
  unsigned int v4; // edi
  HWND DlgItem; // esi
  int (__usercall *v6)@<eax>(char@<cf>, char@<zf>); // edi
  wchar_t *Format; // [esp+10h] [ebp-300h]
  _DWORD v8[62]; // [esp+14h] [ebp-2FCh] BYREF
  __int16 v9; // [esp+10Ch] [ebp-204h]
  wchar_t Buffer[256]; // [esp+110h] [ebp-200h] BYREF

  if ( Source ) /*0x5b6db5*/
  {
    memset(v8, 0, sizeof(v8)); /*0x5b6dca*/
    v9 = 0; /*0x5b6dcc*/
    v8[0] = 104; /*0x5b6dd8*/
    strcpy((char *)&v8[1], MEMORY[0xA8B380]); /*0x5b6df4*/
    LOBYTE(v8[6]) = MEMORY[0xA8B394]; /*0x5b6e04*/
    wcscpy((wchar_t *)((char *)&v8[6] + 1), Source); /*0x5b6e08*/
    Stream::WriteBlock((int)&MEMORY[0xA8EA70], (int)v8, 250, 1); /*0x5b6e21*/
    Stream::ReadPacket((int)&MEMORY[0xA8EA70]); /*0x5b6e2b*/
    v3 = CharToWideString(MEMORY[0xA8B380]); /*0x5b6e35*/
    v4 = MEMORY[0xA8B394]; /*0x5b6e3d*/
    Format = (wchar_t *)v3; /*0x5b6e49*/
    DlgItem = GetDlgItem(*this, 1343); /*0x5b6e53*/
    if ( DlgItem ) /*0x5b6e57*/
    {
      if ( v4 >= 8 ) /*0x5b6e5b*/
        v6 = Math::InitDegToRad; /*0x5b6e6b*/
      else
        v6 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))MEMORY[0x8316A8][v4]; /*0x5b6e62*/
      swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, Source); /*0x5b6e84*/
      DrawDialogText((LPARAM)v6, Buffer, DlgItem); /*0x5b6e96*/
    }
  }
}
}
} // namespace gamemd

// 0x5B6F30
namespace gamemd {
HWND sub_5B6F30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HWND sub_5B6F30()
{
  wchar_t *StringCSF; // eax
  HWND MessageBox; // eax
  HWND v2; // ebx
  int v3; // edi
  int v4; // esi
  HWND result; // eax
  _BYTE v6[4]; // [esp+8h] [ebp-1FCh] BYREF
  _DWORD v7[62]; // [esp+Ch] [ebp-1F8h] BYREF
  __int16 v8; // [esp+104h] [ebp-100h]
  _DWORD v9[6]; // [esp+108h] [ebp-FCh] BYREF
  int v10; // [esp+120h] [ebp-E4h]

  memset(v7, 0, sizeof(v7)); /*0x5b6f45*/
  v8 = 0; /*0x5b6f51*/
  LOBYTE(v7[6]) = MEMORY[0xA8DB30]; /*0x5b6f58*/
  v7[0] = 102; /*0x5b6f67*/
  BYTE1(v7[7]) = MEMORY[0xA8B394]; /*0x5b6f6f*/
  Stream::WriteBlock((int)&MEMORY[0xA8EA70], (int)v7, 250, 1); /*0x5b6f73*/
  StringCSF = GetStringCSF(aTxtSigningOff, 0, g_Str_File_ModemGst_cpp, 1683); /*0x5b6f8b*/
  MessageBox = CreateMessageBox((LPARAM)StringCSF, 0, 0); /*0x5b6f94*/
  v2 = MessageBox; /*0x5b6f99*/
  if ( MessageBox ) /*0x5b6f9d*/
    Dialog::Show(MessageBox); /*0x5b6fa1*/
  v3 = MEMORY[0x887340]; /*0x5b6fab*/
  if ( MEMORY[0x887338] != -1 ) /*0x5b6fb4*/
    v3 += Timer::GetTicks() - MEMORY[0x887338]; /*0x5b6fc6*/
  while ( Count::GetCountQueue(&MEMORY[0xA8EA70]) ) /*0x5b6fcd*/
  {
    v4 = MEMORY[0x887340]; /*0x5b6fe0*/
    if ( MEMORY[0x887338] != -1 ) /*0x5b6fe9*/
      v4 += Timer::GetTicks() - MEMORY[0x887338]; /*0x5b6ffb*/
    if ( (unsigned int)(v4 - v3) >= 0x12C /*0x5b7040*/
      || ObjectTypeClass::CreateInstance((int)&MEMORY[0xA8EA70], (int)v9, (int)v6) > 0
      && v9[0] == 102
      && (unsigned __int8)v10 == MEMORY[0xA8DB30] )
    {
      break; /*0x5b7040*/
    }
    Event::Dispatch(); /*0x5b7042*/
    MessageLoop(); /*0x5b7047*/
    Stream::ReadPacket((int)&MEMORY[0xA8EA70]); /*0x5b7051*/
  }
  result = (HWND)Network::CleanupOnDisconnect(); /*0x5b7069*/
  if ( v2 ) /*0x5b7070*/
    return Dialog::Destroy(v2); /*0x5b7074*/
  return result; /*0x5b7079*/
}
}
} // namespace gamemd

// 0x5B75D0
namespace gamemd {
int sub_5B75D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5B75D0()
{
  MEMORY[0xABF098] = 0; /*0x5b75d2*/
  MEMORY[0xABF09C] = 0; /*0x5b75d7*/
  MEMORY[0xABF0A0] = 0; /*0x5b75dc*/
  MEMORY[0xABF0A4] = 0; /*0x5b75e1*/
  return 0; /*0x5b75e6*/
}
}
} // namespace gamemd

// 0x5B75F0
namespace gamemd {
void sub_5B75F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5B75F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5b75fc*/
  MEMORY[0xABF0B0] = Math::Sqrt(v0 + v0); /*0x5b760e*/
}
}
} // namespace gamemd

// 0x5B7620
namespace gamemd {
void sub_5B7620()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5B7620()
{
  MEMORY[0xABF100] = MEMORY[0xABF0B0] / 60.0; /*0x5b762c*/
}
}
} // namespace gamemd

// 0x5B7640
namespace gamemd {
void sub_5B7640()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5B7640()
{
  MEMORY[0xABF0E8] = 1.0 / MEMORY[0xABF100]; /*0x5b764c*/
}
}
} // namespace gamemd

// 0x5B7660
namespace gamemd {
void sub_5B7660()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5B7660()
{
  MEMORY[0xABF0E0] = 0.0174532925199433 * 45.0; /*0x5b766c*/
}
}
} // namespace gamemd

// 0x5B7680
namespace gamemd {
void sub_5B7680()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5B7680()
{
  MEMORY[0xABF0B8] = 0.0174532925199433 * 60.0; /*0x5b768c*/
}
}
} // namespace gamemd

// 0x5B76A0
namespace gamemd {
void sub_5B76A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5B76A0()
{
  MEMORY[0xABF090] = 0.0174532925199433 * 90.0; /*0x5b76ac*/
}
}
} // namespace gamemd

// 0x5B76C0
namespace gamemd {
long long sub_5B76C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_5B76C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xABF090] - MEMORY[0xABF0B8]); /*0x5b76d2*/
  result = Math::RoundToInt(v0 * MEMORY[0xABF0B0] * 0.5); /*0x5b76e6*/
  MEMORY[0xABF108] = result; /*0x5b76eb*/
  return result; /*0x5b76f0*/
}
}
} // namespace gamemd

// 0x5B7700
namespace gamemd {
void sub_5B7700()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5B7700()
{
  MEMORY[0xABF0C0] = Math::ArcTan((double)MEMORY[0xABF108] * 0.00390625); /*0x5b7717*/
}
}
} // namespace gamemd

// 0x5B7730
namespace gamemd {
void sub_5B7730()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5B7730()
{
  MEMORY[0xABF0D8] = Math::ArcTan((double)(2 * MEMORY[0xABF108]) / MEMORY[0xABF0B0]); /*0x5b7752*/
}
}
} // namespace gamemd

// 0x5B7760
namespace gamemd {
long long sub_5B7760()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_5B7760()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABF108]) + 0.5); /*0x5b777b*/
  MEMORY[0xABF0FC] = result; /*0x5b7780*/
  return result; /*0x5b7786*/
}
}
} // namespace gamemd

// 0x5B7790
namespace gamemd {
int sub_5B7790()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5B7790()
{
  MEMORY[0xABF0A8] = 0; /*0x5b7792*/
  MEMORY[0xABF0AA] = 0; /*0x5b7798*/
  return 0; /*0x5b779e*/
}
}
} // namespace gamemd

// 0x5B77A0
namespace gamemd {
int sub_5B77A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5B77A0()
{
  MEMORY[0xABF0C8] = 0; /*0x5b77a2*/
  MEMORY[0xABF0CC] = 0; /*0x5b77a7*/
  MEMORY[0xABF0D0] = 0; /*0x5b77ac*/
  return 0; /*0x5b77b1*/
}
}
} // namespace gamemd

// 0x5B77C0
namespace gamemd {
int sub_5B77C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5B77C0()
{
  MEMORY[0xABF0F8] = 0; /*0x5b77c5*/
  MEMORY[0xABF0F0] = 128; /*0x5b77cf*/
  MEMORY[0xABF0F4] = 128; /*0x5b77d4*/
  return 128; /*0x5b77d9*/
}
}
} // namespace gamemd

// 0x5B9250
namespace gamemd {
HWND sub_5B9250()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HWND __thiscall sub_5B9250(HWND *this)
{
  HWND result; // eax
  HWND v3; // esi
  char *v4; // eax
  unsigned int v5; // edi
  HWND v6; // esi
  int (__usercall *v7)@<eax>(char@<cf>, char@<zf>); // edi
  HWND v8; // [esp-8h] [ebp-518h]
  int v9; // [esp+0h] [ebp-510h] BYREF
  wchar_t *Format; // [esp+10h] [ebp-500h]
  _DWORD v11[62]; // [esp+14h] [ebp-4FCh] BYREF
  __int16 v12; // [esp+10Ch] [ebp-404h]
  wchar_t lParam[256]; // [esp+110h] [ebp-400h] BYREF
  wchar_t Buffer[256]; // [esp+310h] [ebp-200h] BYREF

  memset(lParam, 0, sizeof(lParam)); /*0x5b9270*/
  result = GetDlgItem(*this, 1344); /*0x5b927a*/
  v3 = result; /*0x5b927c*/
  if ( result ) /*0x5b9280*/
  {
    SendMessageA(result, 0x4B3u, 0x100u, (LPARAM)lParam); /*0x5b929f*/
    SendMessageA(v3, 0x4B2u, 0, (LPARAM)&MEMORY[0x887734]); /*0x5b92ae*/
    result = (HWND)wcslen(lParam); /*0x5b92b8*/
    if ( result ) /*0x5b92c2*/
    {
      if ( lParam[0] != 13 ) /*0x5b92d1*/
      {
        WideString::Trim(lParam); /*0x5b92de*/
        result = (HWND)lParam; /*0x5b92e3*/
        if ( &v9 != (int *)-272 ) /*0x5b92ec*/
        {
          memset(v11, 0, sizeof(v11)); /*0x5b9301*/
          v12 = 0; /*0x5b9303*/
          v11[0] = 104; /*0x5b930f*/
          strcpy((char *)&v11[1], MEMORY[0xA8B380]); /*0x5b932d*/
          LOBYTE(v11[6]) = MEMORY[0xA8B394]; /*0x5b9342*/
          wcscpy((wchar_t *)((char *)&v11[6] + 1), lParam); /*0x5b9346*/
          Stream::WriteBlock((int)&MEMORY[0xA8EA70], (int)v11, 250, 1); /*0x5b935f*/
          Stream::ReadPacket((int)&MEMORY[0xA8EA70]); /*0x5b9369*/
          v4 = CharToWideString(MEMORY[0xA8B380]); /*0x5b9373*/
          v5 = MEMORY[0xA8B394]; /*0x5b937a*/
          v8 = *this; /*0x5b9385*/
          Format = (wchar_t *)v4; /*0x5b9386*/
          result = GetDlgItem(v8, 1343); /*0x5b938a*/
          v6 = result; /*0x5b938c*/
          if ( result ) /*0x5b9390*/
          {
            if ( v5 >= 8 ) /*0x5b9394*/
              v7 = Math::InitDegToRad; /*0x5b93a4*/
            else
              v7 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))MEMORY[0x8316A8][v5]; /*0x5b939b*/
            swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, lParam); /*0x5b93c4*/
            return (HWND)DrawDialogText((LPARAM)v7, Buffer, v6); /*0x5b93d6*/
          }
        }
      }
    }
  }
  return result; /*0x5b93db*/
}
}
} // namespace gamemd

// 0x5B93F0
namespace gamemd {
char sub_5B93F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_5B93F0(int this)
{
  HWND DlgItem; // eax
  HWND v3; // esi

  DlgItem = GetDlgItem(*(HWND *)this, 1639); /*0x5b93fd*/
  v3 = DlgItem; /*0x5b9403*/
  if ( DlgItem ) /*0x5b9407*/
  {
    DlgItem = (HWND)SendMessageA(DlgItem, 0x147u, 0, 0); /*0x5b9419*/
    if ( DlgItem != HWND_MESSAGE|0x2 ) /*0x5b941e*/
    {
      DlgItem = (HWND)SendMessageA(v3, 0x150u, (WPARAM)DlgItem, 0); /*0x5b9429*/
      if ( DlgItem != HWND_MESSAGE|0x2 ) /*0x5b942e*/
      {
        MEMORY[0xA8B3AC] = (int)DlgItem; /*0x5b9430*/
        *(_BYTE *)(this + 9) = 1; /*0x5b9437*/
        *(_BYTE *)(this + 8) = 1; /*0x5b943a*/
        LOBYTE(DlgItem) = 1; /*0x5b9435*/
      }
    }
  }
  return (char)DlgItem; /*0x5b943d*/
}
}
} // namespace gamemd

// 0x5B9450
namespace gamemd {
unsigned int sub_5B9450()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall sub_5B9450(int this)
{
  unsigned int result; // eax
  HWND v3; // edi

  result = (unsigned int)GetDlgItem(*(HWND *)this, 1029); /*0x5b945d*/
  v3 = (HWND)result; /*0x5b9463*/
  if ( result ) /*0x5b9467*/
  {
    result = SendMessageA((HWND)result, 0x147u, 0, 0); /*0x5b9479*/
    if ( result != -1 ) /*0x5b947e*/
    {
      MEMORY[0xA8B394] = result; /*0x5b9482*/
      *(_BYTE *)(this + 9) = 1; /*0x5b9489*/
      *(_BYTE *)(this + 8) = 1; /*0x5b948c*/
      if ( result >= 8 ) /*0x5b948f*/
        return SendMessageA(v3, 0x498u, 0, (LPARAM)Math::InitDegToRad); /*0x5b94ba*/
      else
        return SendMessageA(v3, 0x498u, 0, MEMORY[0x8316A8][result]); /*0x5b94a6*/
    }
  }
  return result; /*0x5b94a8*/
}
}
} // namespace gamemd

// 0x5B94C0
namespace gamemd {
char sub_5B94C0(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_5B94C0(int this, char a2)
{
  HWND DlgItem; // eax
  HWND v4; // esi
  wchar_t lParam[20]; // [esp+8h] [ebp-28h] BYREF

  DlgItem = GetDlgItem(*(HWND *)this, 1473); /*0x5b94cf*/
  v4 = DlgItem; /*0x5b94d5*/
  if ( DlgItem ) /*0x5b94d9*/
  {
    SendMessageA(DlgItem, 0x4B3u, 0x14u, (LPARAM)lParam); /*0x5b94ef*/
    WideString::Trim(lParam); /*0x5b94f5*/
    if ( !a2 ) /*0x5b9500*/
      SendMessageA(v4, 0x4B2u, 0, (LPARAM)lParam); /*0x5b950f*/
    strcpy(MEMORY[0xA8B380], ToWideStringChar((char *)lParam)); /*0x5b9533*/
    *(_BYTE *)(this + 9) = 1; /*0x5b953e*/
    *(_BYTE *)(this + 8) = 1; /*0x5b9541*/
    LOBYTE(DlgItem) = 1; /*0x5b9537*/
  }
  return (char)DlgItem; /*0x5b9545*/
}
}
} // namespace gamemd

// 0x5BAA80
namespace gamemd {
void sub_5BAA80(wchar_t * Format, unsigned int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_5BAA80(HWND *this, wchar_t *Format, unsigned int a3, int a4)
{
  HWND DlgItem; // edi
  int (__usercall *v5)@<eax>(char@<cf>, char@<zf>); // esi
  wchar_t Buffer[256]; // [esp+8h] [ebp-200h] BYREF

  if ( a4 ) /*0x5baa91*/
  {
    DlgItem = GetDlgItem(*this, 1343); /*0x5baaa1*/
    if ( DlgItem ) /*0x5baaa5*/
    {
      if ( a3 >= 8 ) /*0x5baab1*/
        v5 = Math::InitDegToRad; /*0x5baac1*/
      else
        v5 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))MEMORY[0x8316A8][a3]; /*0x5baab8*/
      swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, a4); /*0x5baada*/
      DrawDialogText((LPARAM)v5, Buffer, DlgItem); /*0x5baae9*/
    }
  }
}
}
} // namespace gamemd

// 0x5BAB00
namespace gamemd {
HWND sub_5BAB00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HWND sub_5BAB00()
{
  wchar_t *StringCSF; // eax
  HWND MessageBox; // eax
  HWND v2; // ebx
  int v3; // edi
  int v4; // esi
  HWND result; // eax
  _BYTE v6[4]; // [esp+8h] [ebp-1FCh] BYREF
  _DWORD v7[62]; // [esp+Ch] [ebp-1F8h] BYREF
  __int16 v8; // [esp+104h] [ebp-100h]
  _DWORD v9[6]; // [esp+108h] [ebp-FCh] BYREF
  int v10; // [esp+120h] [ebp-E4h]

  memset(v7, 0, sizeof(v7)); /*0x5bab15*/
  v8 = 0; /*0x5bab21*/
  LOBYTE(v7[6]) = MEMORY[0xA8DB30]; /*0x5bab28*/
  v7[0] = 102; /*0x5bab37*/
  BYTE1(v7[7]) = MEMORY[0xA8B394]; /*0x5bab3f*/
  Stream::WriteBlock((int)&MEMORY[0xA8EA70], (int)v7, 250, 1); /*0x5bab43*/
  StringCSF = GetStringCSF(aTxtSigningOff, 0, g_Str_File_ModemHst_cpp, 2398); /*0x5bab5b*/
  MessageBox = CreateMessageBox((LPARAM)StringCSF, 0, 0); /*0x5bab64*/
  v2 = MessageBox; /*0x5bab69*/
  if ( MessageBox ) /*0x5bab6d*/
    Dialog::Show(MessageBox); /*0x5bab71*/
  v3 = MEMORY[0x887340]; /*0x5bab7b*/
  if ( MEMORY[0x887338] != -1 ) /*0x5bab84*/
    v3 += Timer::GetTicks() - MEMORY[0x887338]; /*0x5bab96*/
  while ( Count::GetCountQueue(&MEMORY[0xA8EA70]) ) /*0x5bab9d*/
  {
    v4 = MEMORY[0x887340]; /*0x5babb0*/
    if ( MEMORY[0x887338] != -1 ) /*0x5babb9*/
      v4 += Timer::GetTicks() - MEMORY[0x887338]; /*0x5babcb*/
    if ( (unsigned int)(v4 - v3) >= 0x12C /*0x5bac10*/
      || ObjectTypeClass::CreateInstance((int)&MEMORY[0xA8EA70], (int)v9, (int)v6) > 0
      && v9[0] == 102
      && (unsigned __int8)v10 == MEMORY[0xA8DB30] )
    {
      break; /*0x5bac10*/
    }
    Event::Dispatch(); /*0x5bac12*/
    MessageLoop(); /*0x5bac17*/
    Stream::ReadPacket((int)&MEMORY[0xA8EA70]); /*0x5bac21*/
  }
  result = (HWND)Network::CleanupOnDisconnect(); /*0x5bac39*/
  if ( v2 ) /*0x5bac40*/
    return Dialog::Destroy(v2); /*0x5bac44*/
  return result; /*0x5bac49*/
}
}
} // namespace gamemd

// 0x5BB290
namespace gamemd {
void __usercall GenerateRandomMapPreview(int a1@<esi> a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __usercall GenerateRandomMapPreview(int a1@<esi>)
{
  int v1; // eax
  int v2; // eax
  int *Palette; // esi
  void *v4; // edi
  int v5; // esi
  DWORD v6; // esi
  signed int Buffer; // [esp+10h] [ebp-280h] BYREF
  DWORD TicksTimer; // [esp+14h] [ebp-27Ch]
  int v9; // [esp+18h] [ebp-278h]
  int v10; // [esp+1Ch] [ebp-274h]
  int v11; // [esp+24h] [ebp-26Ch]
  int v12[3]; // [esp+2Ch] [ebp-264h] BYREF
  _DWORD v13[4]; // [esp+38h] [ebp-258h] BYREF
  _BYTE v14[4]; // [esp+48h] [ebp-248h] BYREF
  LPCSTR v15[9]; // [esp+4Ch] [ebp-244h] BYREF
  int v16[10]; // [esp+70h] [ebp-220h] BYREF
  _DWORD v17[62]; // [esp+98h] [ebp-1F8h] BYREF
  __int16 v18; // [esp+190h] [ebp-100h]
  _DWORD v19[63]; // [esp+194h] [ebp-FCh] BYREF

  TicksTimer = Timer::GetTicks(); /*0x5bb2af*/
  v10 = 0; /*0x5bb2b3*/
  if ( !_strcmpi(&MEMORY[0xA8B8E0], aRandmapSed) ) /*0x5bb2b7*/
  {
    Debug::Log(); /*0x5bb2cc*/
    memset(v17, 0, sizeof(v17)); /*0x5bb2e2*/
    v18 = 0; /*0x5bb2e4*/
    v17[0] = 117; /*0x5bb2fa*/
    Stream::WriteBlock((int)&MEMORY[0xA8EA70], (int)v17, 250, 1); /*0x5bb305*/
    v10 = 600; /*0x5bb31c*/
    TicksTimer = Timer::GetTicks(); /*0x5bb325*/
    v9 = v11; /*0x5bb329*/
    while ( Count::GetCountQueue(&MEMORY[0xA8EA70]) > 0 ) /*0x5bb337*/
    {
      a1 = v10; /*0x5bb33d*/
      if ( TicksTimer != -1 ) /*0x5bb343*/
      {
        v1 = Timer::GetTicks() - TicksTimer; /*0x5bb34e*/
        if ( v1 >= v10 ) /*0x5bb354*/
          break; /*0x5bb354*/
        a1 = v10 - v1; /*0x5bb356*/
      }
      if ( !a1 ) /*0x5bb35a*/
        break; /*0x5bb35a*/
      Event::Dispatch(); /*0x5bb35c*/
    }
    TicksTimer = Timer::GetTicks(); /*0x5bb36f*/
    v9 = v11; /*0x5bb385*/
    v10 = 1800; /*0x5bb389*/
    while ( 1 ) /*0x5bb392*/
    {
      Event::Dispatch(); /*0x5bb392*/
      if ( ObjectTypeClass::CreateInstance((int)&MEMORY[0xA8EA70], (int)v19, (int)v14) > 0 && v19[0] == 118 ) /*0x5bb3b9*/
        break; /*0x5bb3b9*/
      a1 = v10; /*0x5bb3bf*/
      if ( TicksTimer != -1 ) /*0x5bb3c5*/
      {
        v2 = Timer::GetTicks() - TicksTimer; /*0x5bb3d0*/
        if ( v2 >= v10 ) /*0x5bb3d6*/
          goto LABEL_15; /*0x5bb3d6*/
        a1 = v10 - v2; /*0x5bb3d8*/
      }
      if ( !a1 ) /*0x5bb3dc*/
      {
LABEL_15:
        Debug::Log(); /*0x5bb3de*/
        return; /*0x5bb3f5*/
      }
    }
    Buffer = 0; /*0x5bb403*/
    Palette = Palette::Preview_Generate((int *)MEMORY[0xAC1154], a1, 64, (size_t *)&Buffer); /*0x5bb410*/
    Debug::Log(); /*0x5bb418*/
    v4 = __2_YAPAXI_Z(4 * Buffer); /*0x5bb435*/
    v12[1] = 0; /*0x5bb437*/
    v12[2] = 0; /*0x5bb448*/
    v12[0] = (int)&Pipe::`vftable'; /*0x5bb44c*/
    Buffer::Init(v13, (int)v4, 4 * Buffer); /*0x5bb454*/
    v13[3] = 0; /*0x5bb463*/
    v12[0] = (int)&BufferPipe::`vftable'; /*0x5bb467*/
    LZOPipe::Constructor(v16, 0, 0x2000); /*0x5bb46f*/
    Pipe::SetDelegate(v16, (int)v12); /*0x5bb47d*/
    v5 = Compression::Read((int)v16, (int)Palette, Buffer); /*0x5bb499*/
    v6 = (*(int (__thiscall **)(int *))(v16[0] + 4))(v16) + v5; /*0x5bb49e*/
    Debug::Log(); /*0x5bb4a6*/
    RawFileClass::Construct(v15, (int)g_Str_File_Preview_bin); /*0x5bb4b7*/
    if ( FileClass::Open((int *)v15, 0) ) /*0x5bb4c1*/
      FileClass::Delete(v15); /*0x5bb4ce*/
    FileClass::Open2(v15, (const CHAR *)2); /*0x5bb4d9*/
    FileClass::Write2((int *)v15, &Buffer, 4u); /*0x5bb4e9*/
    FileClass::Write2((int *)v15, v4, v6); /*0x5bb4f4*/
    FileClass::CloseHandle((HANDLE *)v15); /*0x5bb4fd*/
    __3_YAXPAX_Z(v4); /*0x5bb503*/
    Debug::Log(); /*0x5bb50d*/
    SendNetworkFile(g_Str_File_Preview_bin, 1, 0, 0); /*0x5bb521*/
    RawFileClass::Dtor((int *)v15); /*0x5bb52a*/
    LZOPipe::Destructor(v16); /*0x5bb533*/
    Vector::Clear((int)v13); /*0x5bb53c*/
    Pipe::Dtor(v12); /*0x5bb545*/
  }
}
}
} // namespace gamemd

// 0x5BBF70
namespace gamemd {
int sub_5BBF70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5BBF70()
{
  MEMORY[0xABF138] = 0; /*0x5bbf72*/
  MEMORY[0xABF13C] = 0; /*0x5bbf77*/
  MEMORY[0xABF140] = 0; /*0x5bbf7c*/
  MEMORY[0xABF144] = 0; /*0x5bbf81*/
  return 0; /*0x5bbf86*/
}
}
} // namespace gamemd

// 0x5BBF90
namespace gamemd {
void sub_5BBF90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5BBF90()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5bbf9c*/
  MEMORY[0xABF150] = Math::Sqrt(v0 + v0); /*0x5bbfae*/
}
}
} // namespace gamemd

// 0x5BBFC0
namespace gamemd {
void sub_5BBFC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5BBFC0()
{
  MEMORY[0xABF210] = MEMORY[0xABF150] / 60.0; /*0x5bbfcc*/
}
}
} // namespace gamemd

// 0x5BBFE0
namespace gamemd {
void sub_5BBFE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5BBFE0()
{
  MEMORY[0xABF1C0] = 1.0 / MEMORY[0xABF210]; /*0x5bbfec*/
}
}
} // namespace gamemd

// 0x5BC000
namespace gamemd {
void sub_5BC000()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5BC000()
{
  MEMORY[0xABF1B8] = 0.0174532925199433 * 45.0; /*0x5bc00c*/
}
}
} // namespace gamemd

// 0x5BC020
namespace gamemd {
void sub_5BC020()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5BC020()
{
  MEMORY[0xABF158] = 0.0174532925199433 * 60.0; /*0x5bc02c*/
}
}
} // namespace gamemd

// 0x5BC040
namespace gamemd {
void sub_5BC040()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5BC040()
{
  MEMORY[0xABF130] = 0.0174532925199433 * 90.0; /*0x5bc04c*/
}
}
} // namespace gamemd

// 0x5BC060
namespace gamemd {
long long sub_5BC060()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_5BC060()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xABF130] - MEMORY[0xABF158]); /*0x5bc072*/
  result = Math::RoundToInt(v0 * MEMORY[0xABF150] * 0.5); /*0x5bc086*/
  MEMORY[0xABF218] = result; /*0x5bc08b*/
  return result; /*0x5bc090*/
}
}
} // namespace gamemd

// 0x5BC0A0
namespace gamemd {
void sub_5BC0A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5BC0A0()
{
  MEMORY[0xABF160] = Math::ArcTan((double)MEMORY[0xABF218] * 0.00390625); /*0x5bc0b7*/
}
}
} // namespace gamemd

// 0x5BC0D0
namespace gamemd {
void sub_5BC0D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5BC0D0()
{
  MEMORY[0xABF1B0] = Math::ArcTan((double)(2 * MEMORY[0xABF218]) / MEMORY[0xABF150]); /*0x5bc0f2*/
}
}
} // namespace gamemd

// 0x5BC100
namespace gamemd {
long long sub_5BC100()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_5BC100()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABF218]) + 0.5); /*0x5bc11b*/
  MEMORY[0xABF20C] = result; /*0x5bc120*/
  return result; /*0x5bc126*/
}
}
} // namespace gamemd

// 0x5BC130
namespace gamemd {
int sub_5BC130()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5BC130()
{
  MEMORY[0xABF148] = 0; /*0x5bc132*/
  MEMORY[0xABF14A] = 0; /*0x5bc138*/
  return 0; /*0x5bc13e*/
}
}
} // namespace gamemd

// 0x5BC140
namespace gamemd {
int sub_5BC140()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5BC140()
{
  MEMORY[0xABF188] = 0; /*0x5bc142*/
  MEMORY[0xABF18C] = 0; /*0x5bc147*/
  MEMORY[0xABF190] = 0; /*0x5bc14c*/
  return 0; /*0x5bc151*/
}
}
} // namespace gamemd

// 0x5BC160
namespace gamemd {
int sub_5BC160()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5BC160()
{
  MEMORY[0xABF208] = 0; /*0x5bc165*/
  MEMORY[0xABF200] = 128; /*0x5bc16f*/
  MEMORY[0xABF204] = 128; /*0x5bc174*/
  return 128; /*0x5bc179*/
}
}
} // namespace gamemd

// 0x5BC300
namespace gamemd {
int _ioterm()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int _ioterm()
{
  void **v0; // esi
  int result; // eax

  v0 = (void **)(&g_MatrixTransformState + 214); /*0x5bc301*/
  do /*0x5bc324*/
  {
    if ( *v0 ) /*0x5bc306*/
    {
      __3_YAXPAX_Z(*v0); /*0x5bc30d*/
      *v0 = 0; /*0x5bc315*/
    }
    ++v0; /*0x5bc31b*/
  }
  while ( (int)v0 < (int)((void **)&g_MatrixTransformState + 222) ); /*0x5bc324*/
  result = (int)*(&g_MatrixTransformState + 268); /*0x5bc326*/
  if ( *(&g_MatrixTransformState + 268) ) /*0x5bc32e*/
  {
    DeleteObject(*(&g_MatrixTransformState + 269)); /*0x5bc336*/
    Object::RemoveObjectArray(*(&g_MatrixTransformState + 268)); /*0x5bc342*/
    result = DestroyWindow((HWND)*(&g_MatrixTransformState + 268)); /*0x5bc34e*/
    *((_QWORD *)&g_MatrixTransformState + 134) = 0; /*0x5bc35e*/
  }
  return result; /*0x5bc32b*/
}
}
} // namespace gamemd

// 0x5BC440
namespace gamemd {
ObjectClass * sub_5BC440()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ObjectClass *sub_5BC440()
{
  return (ObjectClass *)*(&g_MatrixTransformState + 267); /*0x5bc445*/
}
}
} // namespace gamemd

// 0x5BC450
namespace gamemd {
int sub_5BC450(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_5BC450(int a1)
{
  return MEMORY[0xABF168][a1]; /*0x5bc457*/
}
}
} // namespace gamemd

// 0x5BC460
namespace gamemd {
char sub_5BC460(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall sub_5BC460(int a1)
{
  _BYTE *v1; // ecx
  int v2; // edi
  _DWORD *v3; // ebx
  _BYTE *v4; // edx
  _DWORD *v5; // eax
  int v6; // esi

  v1 = (_BYTE *)MEMORY[0xABF168][a1]; /*0x5bc460*/
  MEMORY[0xABF23C] = (int)v1; /*0x5bc46a*/
  v2 = 0; /*0x5bc470*/
  v3 = v1 + 2000; /*0x5bc472*/
  do /*0x5bc49b*/
  {
    v4 = &v1[v2]; /*0x5bc478*/
    v5 = v3; /*0x5bc47b*/
    v6 = 80; /*0x5bc47d*/
    do /*0x5bc492*/
    {
      *v4 = 32; /*0x5bc482*/
      *v5 = 0; /*0x5bc485*/
      v5 += 25; /*0x5bc48b*/
      v4 += 25; /*0x5bc48e*/
      --v6; /*0x5bc491*/
    }
    while ( v6 ); /*0x5bc492*/
    ++v2; /*0x5bc494*/
    ++v3; /*0x5bc495*/
  }
  while ( v2 < 25 ); /*0x5bc49b*/
  v1[10036] = 1; /*0x5bc4a5*/
  Text::DrawRepeated(v1, 0, 0, 80, 25); /*0x5bc4ac*/
  return Text::DrawRepeated((void *)MEMORY[0xABF23C], 0, 0, 80, 25); /*0x5bc4c4*/
}
}
} // namespace gamemd

// 0x5BC4D0
namespace gamemd {
char sub_5BC4D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_5BC4D0()
{
  int *v0; // ebx
  _BYTE *v1; // ecx
  int v2; // edi
  int v3; // ebp
  _BYTE *v4; // edx
  _DWORD *v5; // eax
  int v6; // esi
  char result; // al

  v0 = MEMORY[0xABF168]; /*0x5bc4d4*/
  do /*0x5bc525*/
  {
    v1 = (_BYTE *)*v0; /*0x5bc4d9*/
    v2 = 0; /*0x5bc4db*/
    v3 = *v0 + 2000; /*0x5bc4dd*/
    do /*0x5bc506*/
    {
      v4 = &v1[v2]; /*0x5bc4e3*/
      v5 = (_DWORD *)v3; /*0x5bc4e6*/
      v6 = 80; /*0x5bc4e8*/
      do /*0x5bc4fd*/
      {
        *v4 = 32; /*0x5bc4ed*/
        *v5 = 0; /*0x5bc4f0*/
        v5 += 25; /*0x5bc4f6*/
        v4 += 25; /*0x5bc4f9*/
        --v6; /*0x5bc4fc*/
      }
      while ( v6 ); /*0x5bc4fd*/
      ++v2; /*0x5bc4ff*/
      v3 += 4; /*0x5bc500*/
    }
    while ( v2 < 25 ); /*0x5bc506*/
    v1[10036] = 1; /*0x5bc510*/
    result = Text::DrawRepeated(v1, 0, 0, 80, 25); /*0x5bc517*/
    ++v0; /*0x5bc51c*/
  }
  while ( (int)v0 < (int)&MEMORY[0xABF188] ); /*0x5bc525*/
  return result; /*0x5bc527*/
}
}
} // namespace gamemd

// 0x5BC530
namespace gamemd {
int sub_5BC530()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5BC530()
{
  HDC DC; // ebp
  int DeviceCaps; // eax
  HGDIOBJ v2; // edi
  struct tagRECT Rect; // [esp+10h] [ebp-5Ch] BYREF
  struct tagRECT v5; // [esp+20h] [ebp-4Ch] BYREF
  LOGFONTA lf; // [esp+30h] [ebp-3Ch] BYREF

  MEMORY[0xABF240] = CreateDialogParamA(MEMORY[0xABF230], (LPCSTR)0xF8, MEMORY[0xABF234], DlgProcAudioDebug, 0); /*0x5bc559*/
  TimerPool::AllocSlot(MEMORY[0xABF240]); /*0x5bc55e*/
  DC = GetDC(MEMORY[0xABF240]); /*0x5bc570*/
  DeviceCaps = GetDeviceCaps(DC, 90); /*0x5bc577*/
  lf.lfHeight = -MulDiv(8, DeviceCaps, 72); /*0x5bc588*/
  memset(&lf.lfWidth, 0, 24); /*0x5bc5a6*/
  strcpy(lf.lfFaceName, "Courier"); /*0x5bc5d9*/
  MEMORY[0xABF244] = CreateFontIndirectA(&lf); /*0x5bc5f3*/
  v2 = SelectObject(DC, MEMORY[0xABF244]); /*0x5bc5fc*/
  GetTextMetricsA(DC, &MEMORY[0xABF1C8]); /*0x5bc604*/
  SelectObject(DC, v2); /*0x5bc60c*/
  MEMORY[0xABF128] = GetSysColor(15); /*0x5bc618*/
  MEMORY[0xABF110] = GetSysColor(8); /*0x5bc621*/
  Rect.left = 0; /*0x5bc62b*/
  Rect.top = 0; /*0x5bc62f*/
  Rect.right = 79 * MEMORY[0xABF1C8].tmMaxCharWidth + 20; /*0x5bc64b*/
  Rect.bottom = 25 * (MEMORY[0xABF1C8].tmHeight + MEMORY[0xABF1C8].tmExternalLeading) + 20; /*0x5bc661*/
  AdjustWindowRect(&Rect, 0xC00000u, 0); /*0x5bc665*/
  GetWindowRect(MEMORY[0xABF234], &v5); /*0x5bc677*/
  MoveWindow(MEMORY[0xABF240], v5.right + 5, 0, Rect.right - Rect.left, Rect.bottom - Rect.top, 1); /*0x5bc6a4*/
  ShowWindow(MEMORY[0xABF240], 0); /*0x5bc6b2*/
  SetFocus(MEMORY[0xABF234]); /*0x5bc6bf*/
  return ReleaseDC(MEMORY[0xABF240], DC); /*0x5bc6d2*/
}
}
} // namespace gamemd

// 0x5BC6E0
namespace gamemd {
INT_PTR AudioDebug_DlgProc(HWND hWnd, UINT a2, WPARAM a3, LPARAM a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
INT_PTR __stdcall AudioDebug_DlgProc(HWND hWnd, UINT a2, WPARAM a3, LPARAM a4)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  char *v9; // ecx
  int Index; // eax
  void *Enabled; // eax
  char *v12; // eax
  _DWORD *v13; // ecx
  _BYTE *v14; // ecx
  int v15; // eax
  _BYTE *v16; // ecx
  int v17; // edi
  _DWORD *v18; // ebx
  _BYTE *v19; // edx
  _DWORD *v20; // eax
  int v21; // esi
  int v22; // eax
  int v23; // edi
  _DWORD *v24; // ebx
  _BYTE *v25; // edx
  _DWORD *v26; // eax
  int v27; // esi
  int v28; // [esp-4h] [ebp-50h]
  struct tagPAINTSTRUCT Paint; // [esp+Ch] [ebp-40h] BYREF

  if ( a2 == 15 ) /*0x5bc6ed*/
  {
    InvalidateRect(hWnd, 0, 1); /*0x5bc6f8*/
    BeginPaint(hWnd, &Paint); /*0x5bc704*/
    if ( MEMORY[0xABF23C] ) /*0x5bc712*/
    {
      if ( MEMORY[0xABF23A] ) /*0x5bc71b*/
        Text::DrawRepeated((void *)MEMORY[0xABF23C], 0, 0, 80, 25); /*0x5bc732*/
    }
    EndPaint(hWnd, &Paint); /*0x5bc73d*/
    return 1; /*0x5bc74e*/
  }
  if ( a2 == 258 ) /*0x5bc756*/
  {
    if ( !MEMORY[0xABF224] ) /*0x5bc763*/
    {
      MEMORY[0xABF224] = (int)MEMORY[0xABF198]; /*0x5bc76a*/
      AudioController::Init(MEMORY[0xABF198]); /*0x5bc770*/
    }
    switch ( a3 ) /*0x5bc78d*/
    {
      case ',': /*0x5bc78d*/
      case '<': /*0x5bc78d*/
        v15 = *(_DWORD *)(MEMORY[0xABF23C] + 10008) + 1; /*0x5bc9d1*/
        if ( *(_DWORD *)(MEMORY[0xABF23C] + 10008) == 7 ) /*0x5bc9d5*/
          v15 = 0; /*0x5bc9d7*/
        v16 = (_BYTE *)MEMORY[0xABF168][v15]; /*0x5bc9d9*/
        v17 = 0; /*0x5bc9e0*/
        MEMORY[0xABF23C] = (int)v16; /*0x5bc9e2*/
        v18 = v16 + 2000; /*0x5bc9e8*/
        do /*0x5bca11*/
        {
          v19 = &v16[v17]; /*0x5bc9ee*/
          v20 = v18; /*0x5bc9f1*/
          v21 = 80; /*0x5bc9f3*/
          do /*0x5bca08*/
          {
            *v19 = 32; /*0x5bc9f8*/
            *v20 = 0; /*0x5bc9fb*/
            v20 += 25; /*0x5bca01*/
            v19 += 25; /*0x5bca04*/
            --v21; /*0x5bca07*/
          }
          while ( v21 ); /*0x5bca08*/
          ++v17; /*0x5bca0a*/
          ++v18; /*0x5bca0b*/
        }
        while ( v17 < 25 ); /*0x5bca11*/
        goto LABEL_54; /*0x5bca11*/
      case '.': /*0x5bc78d*/
      case '>': /*0x5bc78d*/
        v22 = *(_DWORD *)(MEMORY[0xABF23C] + 10008) - 1; /*0x5bca38*/
        if ( v22 < 0 ) /*0x5bca39*/
          v22 = 7; /*0x5bca3b*/
        v16 = (_BYTE *)MEMORY[0xABF168][v22]; /*0x5bca40*/
        v23 = 0; /*0x5bca47*/
        MEMORY[0xABF23C] = (int)v16; /*0x5bca49*/
        v24 = v16 + 2000; /*0x5bca4f*/
        do /*0x5bca78*/
        {
          v25 = &v16[v23]; /*0x5bca55*/
          v26 = v24; /*0x5bca58*/
          v27 = 80; /*0x5bca5a*/
          do /*0x5bca6f*/
          {
            *v25 = 32; /*0x5bca5f*/
            *v26 = 0; /*0x5bca62*/
            v26 += 25; /*0x5bca68*/
            v25 += 25; /*0x5bca6b*/
            --v27; /*0x5bca6e*/
          }
          while ( v27 ); /*0x5bca6f*/
          ++v23; /*0x5bca71*/
          ++v24; /*0x5bca72*/
        }
        while ( v23 < 25 ); /*0x5bca78*/
LABEL_54:
        v16[10036] = 1; /*0x5bca13*/
        Text::DrawRepeated(v16, 0, 0, 80, 25); /*0x5bca22*/
        goto LABEL_45; /*0x5bca27*/
      case '1': /*0x5bc78d*/
      case '2': /*0x5bc78d*/
      case '3': /*0x5bc78d*/
      case '4': /*0x5bc78d*/
        MEMORY[0xABF22C] = a3 - 49; /*0x5bc799*/
        return 0; /*0x5bc7a5*/
      case 'A': /*0x5bc78d*/
      case 'a': /*0x5bc78d*/
        v14 = (_BYTE *)MEMORY[0xABF17C]; /*0x5bc987*/
        goto LABEL_44; /*0x5bc987*/
      case 'E': /*0x5bc78d*/
      case 'e': /*0x5bc78d*/
        v7 = MEMORY[0xABF220]; /*0x5bc80f*/
        if ( MEMORY[0xABF220] > 16 || MEMORY[0xABF220] >= MEMORY[0xB1D4B0] ) /*0x5bc820*/
        {
          v7 = 0; /*0x5bc822*/
          MEMORY[0xABF220] = 0; /*0x5bc824*/
        }
        UpdateThemeManager(v7, 2, MEMORY[0xABF22C]); /*0x5bc835*/
        goto LABEL_15; /*0x5bc835*/
      case 'I': /*0x5bc78d*/
      case 'i': /*0x5bc78d*/
        v14 = (_BYTE *)MEMORY[0xABF184]; /*0x5bc9b6*/
        goto LABEL_44; /*0x5bc9bc*/
      case 'L': /*0x5bc78d*/
      case 'l': /*0x5bc78d*/
        if ( AudioSource::Get((int **)MEMORY[0xABF224]) ) /*0x5bc862*/
        {
          AudioFile::Stop((_DWORD *)MEMORY[0xABF224]); /*0x5bc871*/
          return 0; /*0x5bc878*/
        }
        else
        {
          v28 = MEMORY[0xABF224]; /*0x5bc881*/
          v9 = aTestenvelopefs; /*0x5bc887*/
LABEL_31:
          Index = VocClass::FindIndex(v9); /*0x5bc88c*/
          PlayVocClass(Index, 0x2000, 1.0, v28); /*0x5bc898*/
          return 0; /*0x5bc89f*/
        }
      case 'M': /*0x5bc78d*/
      case 'm': /*0x5bc78d*/
        v14 = (_BYTE *)MEMORY[0xABF180]; /*0x5bc9be*/
LABEL_44:
        MEMORY[0xABF23C] = (int)v14; /*0x5bc98d*/
        TextBuffer::Init(v14); /*0x5bc993*/
LABEL_45:
        Text::DrawRepeated((void *)MEMORY[0xABF23C], 0, 0, 80, 25); /*0x5bc998*/
        return 0; /*0x5bc9b3*/
      case 'N': /*0x5bc78d*/
      case 'n': /*0x5bc78d*/
        MEMORY[0xABF21C] = MEMORY[0xABF21C] == 0; /*0x5bc968*/
        return 0; /*0x5bc974*/
      case 'O': /*0x5bc78d*/
      case 'o': /*0x5bc78d*/
        v8 = MEMORY[0xABF220]; /*0x5bc837*/
        if ( MEMORY[0xABF220] > 16 || MEMORY[0xABF220] >= MEMORY[0xB1D4B0] ) /*0x5bc848*/
        {
          v8 = 0; /*0x5bc84a*/
          MEMORY[0xABF220] = 0; /*0x5bc84c*/
        }
        UpdateThemeManager(v8, -1, -1); /*0x5bc857*/
        goto LABEL_15; /*0x5bc857*/
      case 'Q': /*0x5bc78d*/
      case 'q': /*0x5bc78d*/
        v5 = MEMORY[0xABF220]; /*0x5bc7a8*/
        if ( MEMORY[0xABF220] > 16 || MEMORY[0xABF220] >= MEMORY[0xB1D4B0] ) /*0x5bc7b9*/
        {
          v5 = 0; /*0x5bc7bb*/
          MEMORY[0xABF220] = 0; /*0x5bc7bd*/
        }
        UpdateThemeManager(v5, 1, MEMORY[0xABF22C]); /*0x5bc7ce*/
        goto LABEL_15; /*0x5bc7ce*/
      case 'S': /*0x5bc78d*/
      case 's': /*0x5bc78d*/
        sub_406EE0(); /*0x5bc977*/
        return 0; /*0x5bc984*/
      case 'T': /*0x5bc78d*/
      case 't': /*0x5bc78d*/
        v28 = 0; /*0x5bc8a8*/
        v9 = aTesteffect; /*0x5bc8af*/
        goto LABEL_31; /*0x5bc8b4*/
      case 'W': /*0x5bc78d*/
      case 'w': /*0x5bc78d*/
        v6 = MEMORY[0xABF220]; /*0x5bc7e9*/
        if ( MEMORY[0xABF220] > 16 || MEMORY[0xABF220] >= MEMORY[0xB1D4B0] ) /*0x5bc7fa*/
        {
          v6 = 0; /*0x5bc7fc*/
          MEMORY[0xABF220] = 0; /*0x5bc7fe*/
        }
        UpdateThemeManager(v6, 0, MEMORY[0xABF22C]); /*0x5bc80d*/
LABEL_15:
        ++MEMORY[0xABF220]; /*0x5bc7d3*/
        return 0; /*0x5bc7e6*/
      case '[': /*0x5bc78d*/
        if ( MEMORY[0xABF228] >= 5 ) /*0x5bc8bd*/
          return 0; /*0x5bc8bd*/
        Enabled = Audio::GetEnabled(); /*0x5bc8c6*/
        v12 = AudioStream::Constructor(Enabled, 0x1388u); /*0x5bc8cd*/
        *(&MEMORY[0xABF114] + MEMORY[0xABF228]) = v12; /*0x5bc8da*/
        if ( !v12 ) /*0x5bc8e1*/
          return 0; /*0x5bc8e1*/
        if ( ThreadAudioMixerMain(v12, aIntroWav, 1) ) /*0x5bc8ec*/
        {
          ++MEMORY[0xABF228]; /*0x5bc8fc*/
          return 0; /*0x5bc908*/
        }
        AudioSample::Destructor(*(&MEMORY[0xABF114] + MEMORY[0xABF228])); /*0x5bc912*/
        break; /*0x5bc912*/
      case ']': /*0x5bc78d*/
        if ( MEMORY[0xABF228] <= 0 ) /*0x5bc929*/
          return 0; /*0x5bc929*/
        v13 = (_DWORD *)*(&MEMORY[0xABF110] + MEMORY[0xABF228]--); /*0x5bc92b*/
        Audio::Release(v13); /*0x5bc938*/
        AudioSample::Destructor(*(&MEMORY[0xABF114] + MEMORY[0xABF228])); /*0x5bc94a*/
        return 0; /*0x5bc957*/
      default:
        return 0;
    }
    return 0; /*0x5bc912*/
  }
  if ( a2 != 273 ) /*0x5bca98*/
    return 0; /*0x5bc91f*/
  MEMORY[0xABF239] = 0; /*0x5bcaa3*/
  if ( MEMORY[0xABF240] ) /*0x5bcaac*/
  {
    MEMORY[0xABF23A] = 0; /*0x5bcab1*/
    ShowWindow(MEMORY[0xABF240], 0); /*0x5bcab8*/
  }
  return 1; /*0x5bc743*/
}
}
} // namespace gamemd

// 0x5BCB90
namespace gamemd {
ObjectClass * sub_5BCB90(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ObjectClass *__thiscall sub_5BCB90(int this, int a2)
{
  int v3; // edi
  _DWORD *v4; // ebx
  _BYTE *v5; // ecx
  _DWORD *v6; // eax
  int v7; // edx

  v3 = 0; /*0x5bcb9c*/
  *(_DWORD *)(this + 10008) = a2; /*0x5bcb9e*/
  *(_DWORD *)(this + 10012) = 0; /*0x5bcba4*/
  *(_DWORD *)(this + 10016) = 0; /*0x5bcbaa*/
  *(_DWORD *)(this + 10020) = 0; /*0x5bcbb0*/
  *(_DWORD *)(this + 10024) = 0; /*0x5bcbb6*/
  *(_DWORD *)(this + 10028) = 80; /*0x5bcbbc*/
  *(_DWORD *)(this + 10032) = 25; /*0x5bcbc6*/
  v4 = (_DWORD *)(this + 2000); /*0x5bcbd0*/
  do /*0x5bcbf5*/
  {
    v5 = (_BYTE *)(v3 + this); /*0x5bcbd6*/
    v6 = v4; /*0x5bcbd9*/
    v7 = 80; /*0x5bcbdb*/
    do /*0x5bcbec*/
    {
      *v5 = 32; /*0x5bcbe0*/
      *v6 = 0; /*0x5bcbe3*/
      v6 += 25; /*0x5bcbe5*/
      v5 += 25; /*0x5bcbe8*/
      --v7; /*0x5bcbeb*/
    }
    while ( v7 ); /*0x5bcbec*/
    ++v3; /*0x5bcbee*/
    ++v4; /*0x5bcbef*/
  }
  while ( v3 < 25 ); /*0x5bcbf5*/
  *(_BYTE *)(this + 10036) = 1; /*0x5bcbff*/
  Text::DrawRepeated((void *)this, 0, 0, 80, 25); /*0x5bcc06*/
  return (ObjectClass *)this; /*0x5bcc0d*/
}
}
} // namespace gamemd

// 0x5BCC20
namespace gamemd {
void nullsub_174()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void nullsub_174()
{
  ; /*0x5bcc20*/
}
}
} // namespace gamemd

// 0x5BCC30
namespace gamemd {
int sub_5BCC30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_5BCC30(_DWORD *this)
{
  return *(this + 2502); /*0x5bcc36*/
}
}
} // namespace gamemd

// 0x5BCC60
namespace gamemd {
int sub_5BCC60(int a2, int a3, int a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_5BCC60(_DWORD *this, int a2, int a3, int a4, int a5)
{
  *(this + 2505) = a2; /*0x5bcc68*/
  *(this + 2506) = a3; /*0x5bcc72*/
  *(this + 2507) = a4; /*0x5bcc7c*/
  *(this + 2508) = a5; /*0x5bcc82*/
  return a4; /*0x5bcc88*/
}
}
} // namespace gamemd

// 0x5BCCE0
namespace gamemd {
char sub_5BCCE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_5BCCE0(_BYTE *this)
{
  return *(this + 10036); /*0x5bcce6*/
}
}
} // namespace gamemd

// 0x5BCE10
namespace gamemd {
char sub_5BCE10(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_5BCE10(int *this, int a2)
{
  char result; // al
  int v4; // eax
  int v5; // edx
  int v6; // ebx
  int v7; // ebp
  char *v8; // edi
  int v9; // ecx
  char *v10; // ebx
  int *v11; // ecx
  int v12; // ebx
  int v13; // eax
  int *v14; // ebp
  int v15; // ebp
  char *v16; // edi
  int v17; // ebx
  int *v18; // ecx
  int v19; // eax
  int *v20; // ebp
  int *v21; // [esp+4h] [ebp-Ch]
  _BYTE *v22; // [esp+8h] [ebp-8h]
  int v23; // [esp+Ch] [ebp-4h]
  int v24; // [esp+Ch] [ebp-4h]
  int v25; // [esp+14h] [ebp+4h]
  int v26; // [esp+14h] [ebp+4h]

  result = *((_BYTE *)&(&g_MatrixTransformState)[22] + 10); /*0x5bce10*/
  if ( *((_BYTE *)&(&g_MatrixTransformState)[22] + 10) ) /*0x5bce1d*/
  {
    v4 = *(this + 2505); /*0x5bce27*/
    v5 = *(this + 2506); /*0x5bce2d*/
    v6 = *(this + 2508); /*0x5bce34*/
    v7 = *(this + 2507); /*0x5bce3b*/
    if ( a2 <= 0 ) /*0x5bce44*/
    {
      if ( a2 < 0 ) /*0x5bcef9*/
      {
        v15 = v4 + v7; /*0x5bcefb*/
        if ( v4 < v15 ) /*0x5bceff*/
        {
          v26 = v6 + v5 - 1; /*0x5bcf08*/
          v16 = (char *)this + 20 * v4 + 5 * v4; /*0x5bcf0f*/
          v17 = 500 - (_DWORD)this; /*0x5bcf1f*/
          v18 = this + 20 * v4 + 5 * v4 + v5 + 500; /*0x5bcf23*/
          v24 = v15 - v4; /*0x5bcf2a*/
          do /*0x5bcf6f*/
          {
            v19 = v26; /*0x5bcf2e*/
            if ( v26 > v5 ) /*0x5bcf34*/
            {
              v20 = this + (_DWORD)&v16[v17 + v26]; /*0x5bcf3a*/
              do /*0x5bcf50*/
              {
                --v20; /*0x5bcf41*/
                v16[v19] = v16[v19 - 1]; /*0x5bcf44*/
                v20[1] = *v20; /*0x5bcf4a*/
                --v19; /*0x5bcf4d*/
              }
              while ( v19 > v5 ); /*0x5bcf50*/
              v17 = 500 - (_DWORD)this; /*0x5bcf52*/
            }
            v16[v5] = 32; /*0x5bcf5a*/
            *v18 = 0; /*0x5bcf5e*/
            v18 += 25; /*0x5bcf64*/
            v16 += 25; /*0x5bcf67*/
            --v24; /*0x5bcf6b*/
          }
          while ( v24 ); /*0x5bcf6f*/
        }
      }
    }
    else if ( v4 < v4 + v7 ) /*0x5bce53*/
    {
      v25 = v6 + v5 - 1; /*0x5bce5d*/
      v8 = (char *)this + 25 * v4; /*0x5bce67*/
      v9 = v5 + v6 + 25 * v4; /*0x5bce6c*/
      v10 = (char *)this + v9 - 1; /*0x5bce72*/
      v11 = this + v9 + 499; /*0x5bce76*/
      v22 = v10; /*0x5bce7d*/
      v23 = *(this + 2507); /*0x5bce97*/
      v21 = this + 20 * v4 + 5 * v4 + v5 + 500; /*0x5bce9b*/
      v12 = v25; /*0x5bce9f*/
      do /*0x5bcef5*/
      {
        v13 = v5; /*0x5bcea5*/
        if ( v5 < v12 ) /*0x5bcea7*/
        {
          v14 = v21; /*0x5bcea9*/
          do /*0x5bcec4*/
          {
            ++v14; /*0x5bceb1*/
            v8[v13] = v8[v13 + 1]; /*0x5bceb4*/
            *(v14 - 1) = *v14; /*0x5bceba*/
            v12 = v25; /*0x5bcebd*/
            ++v13; /*0x5bcec1*/
          }
          while ( v13 < v25 ); /*0x5bcec4*/
        }
        v11 += 25; /*0x5bced1*/
        *v22 = 32; /*0x5bced4*/
        v22 += 25; /*0x5bceda*/
        *(v11 - 25) = 0; /*0x5bcee2*/
        v8 += 25; /*0x5bcee9*/
        v21 += 25; /*0x5bceed*/
        --v23; /*0x5bcef1*/
      }
      while ( v23 ); /*0x5bcef5*/
    }
    return Text::DrawRepeated(this, 0, 0, 80, 25); /*0x5bcf7b*/
  }
  return result; /*0x5bcf83*/
}
}
} // namespace gamemd

// 0x5BD240
namespace gamemd {
char sub_5BD240(int a1, size_t BufferCount, wchar_t Format)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __cdecl sub_5BD240(int a1, size_t BufferCount, wchar_t Format)
{
  char result; // al
  char v4[256]; // [esp+0h] [ebp-300h] BYREF
  wchar_t Buffer[256]; // [esp+100h] [ebp-200h] BYREF

  result = MEMORY[0xABF23A]; /*0x5bd240*/
  if ( MEMORY[0xABF23A] ) /*0x5bd24d*/
  {
    vswprintf(Buffer, BufferCount, &Format, *(va_list *)v4); /*0x5bd267*/
    sprintf(v4, stru_82D020, Buffer); /*0x5bd27e*/
    return Debug::ScrollText(a1, v4); /*0x5bd292*/
  }
  return result; /*0x5bd297*/
}
}
} // namespace gamemd

// 0x5BD2E0
namespace gamemd {
char sub_5BD2E0(ObjectClass * aP1, int a3, int a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_5BD2E0(_DWORD *this, ObjectClass *aP1, int a3, int a4, int a5)
{
  char result; // al
  CellStruct Buffer; // [esp+4h] [ebp-400h] BYREF

  result = *((_BYTE *)&(&g_MatrixTransformState)[22] + 10); /*0x5bd2e0*/
  if ( *((_BYTE *)&(&g_MatrixTransformState)[22] + 10) ) /*0x5bd2f0*/
  {
    *(this + 2503) = a3; /*0x5bd300*/
    *(this + 2504) = a4; /*0x5bd306*/
    if ( *((_BYTE *)&(&g_MatrixTransformState)[22] + 10) ) /*0x5bd313*/
      *(this + 2500) = a5; /*0x5bd31c*/
    sprintf((char *const)&Buffer, &stru_82D020, (INIClass *)aP1); /*0x5bd334*/
    return Debug::ScrollText((int)this, &Buffer); /*0x5bd343*/
  }
  return result; /*0x5bd348*/
}
}
} // namespace gamemd

// 0x5BD560
namespace gamemd {
unsigned int * sub_5BD560()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_5BD560(_DWORD *this)
{
  *(_BYTE *)this = 0; /*0x5bd564*/
  *(this + 1) = 0; /*0x5bd566*/
  *(this + 2) = 0; /*0x5bd569*/
  *(this + 3) = 0; /*0x5bd56c*/
  return this; /*0x5bd56f*/
}
}
} // namespace gamemd

// 0x5BD7E0
namespace gamemd {
void sub_5BD7E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5BD7E0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5bd7ec*/
  MEMORY[0xABF270] = Math::Sqrt(v0 + v0); /*0x5bd7fe*/
}
}
} // namespace gamemd

// 0x5BD810
namespace gamemd {
void sub_5BD810()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5BD810()
{
  MEMORY[0xABF2D0] = MEMORY[0xABF270] / 60.0; /*0x5bd81c*/
}
}
} // namespace gamemd

// 0x5BD830
namespace gamemd {
void sub_5BD830()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5BD830()
{
  MEMORY[0xABF2B8] = 1.0 / MEMORY[0xABF2D0]; /*0x5bd83c*/
}
}
} // namespace gamemd

// 0x5BD850
namespace gamemd {
void sub_5BD850()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5BD850()
{
  MEMORY[0xABF2B0] = 0.0174532925199433 * 45.0; /*0x5bd85c*/
}
}
} // namespace gamemd

// 0x5BD870
namespace gamemd {
void sub_5BD870()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5BD870()
{
  MEMORY[0xABF278] = 0.0174532925199433 * 60.0; /*0x5bd87c*/
}
}
} // namespace gamemd

// 0x5BD890
namespace gamemd {
void sub_5BD890()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5BD890()
{
  MEMORY[0xABF248] = 0.0174532925199433 * 90.0; /*0x5bd89c*/
}
}
} // namespace gamemd

// 0x5BD8B0
namespace gamemd {
long long sub_5BD8B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_5BD8B0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xABF248] - MEMORY[0xABF278]); /*0x5bd8c2*/
  result = Math::RoundToInt(v0 * MEMORY[0xABF270] * 0.5); /*0x5bd8d6*/
  MEMORY[0xABF2D8] = result; /*0x5bd8db*/
  return result; /*0x5bd8e0*/
}
}
} // namespace gamemd

// 0x5BD8F0
namespace gamemd {
void sub_5BD8F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5BD8F0()
{
  MEMORY[0xABF280] = Math::ArcTan((double)MEMORY[0xABF2D8] * 0.00390625); /*0x5bd907*/
}
}
} // namespace gamemd

// 0x5BD920
namespace gamemd {
void sub_5BD920()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5BD920()
{
  MEMORY[0xABF298] = Math::ArcTan((double)(2 * MEMORY[0xABF2D8]) / MEMORY[0xABF270]); /*0x5bd942*/
}
}
} // namespace gamemd

// 0x5BD950
namespace gamemd {
long long sub_5BD950()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_5BD950()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABF2D8]) + 0.5); /*0x5bd96b*/
  MEMORY[0xABF2CC] = result; /*0x5bd970*/
  return result; /*0x5bd976*/
}
}
} // namespace gamemd

// 0x5BD980
namespace gamemd {
int sub_5BD980()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5BD980()
{
  MEMORY[0xABF268] = 0; /*0x5bd982*/
  MEMORY[0xABF26A] = 0; /*0x5bd988*/
  return 0; /*0x5bd98e*/
}
}
} // namespace gamemd

// 0x5BD990
namespace gamemd {
int sub_5BD990()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5BD990()
{
  MEMORY[0xABF288] = 0; /*0x5bd992*/
  MEMORY[0xABF28C] = 0; /*0x5bd997*/
  MEMORY[0xABF290] = 0; /*0x5bd99c*/
  return 0; /*0x5bd9a1*/
}
}
} // namespace gamemd

// 0x5BD9B0
namespace gamemd {
int sub_5BD9B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5BD9B0()
{
  MEMORY[0xABF2C8] = 0; /*0x5bd9b5*/
  MEMORY[0xABF2C0] = 128; /*0x5bd9bf*/
  MEMORY[0xABF2C4] = 128; /*0x5bd9c4*/
  return 128; /*0x5bd9c9*/
}
}
} // namespace gamemd

// 0x5BD9D0
namespace gamemd {
int sub_5BD9D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5BD9D0()
{
  MEMORY[0xABF258] = 0; /*0x5bd9d2*/
  MEMORY[0xABF25C] = 0; /*0x5bd9d7*/
  MEMORY[0xABF260] = 0; /*0x5bd9dc*/
  MEMORY[0xABF264] = 0; /*0x5bd9e1*/
  return 0; /*0x5bd9e6*/
}
}
} // namespace gamemd

// 0x5BD9F0
namespace gamemd {
int sub_5BD9F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5BD9F0()
{
  MEMORY[0xABF2A0] = Timer::GetTicks(); /*0x5bd9ff*/
  MEMORY[0xABF2A8] = 0; /*0x5bda04*/
  return atexit(sub_5BDA20); /*0x5bda14*/
}
}
} // namespace gamemd

// 0x5BDA20
namespace gamemd {
void sub_5BDA20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_5BDA20()
{
  if ( (MEMORY[0xABF250] & 1) == 0 ) /*0x5bda2a*/
    MEMORY[0xABF250] |= 1u; /*0x5bda2e*/
}
}
} // namespace gamemd

// 0x5BDA40
namespace gamemd {
unsigned char * sub_5BDA40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_BYTE *__thiscall sub_5BDA40(_BYTE *this)
{
  SmallFunc_692290((int)this); /*0x5bda43*/
  *(_DWORD *)this = &MouseClass::`vftable'; /*0x5bda4a*/
  *(this + 21852) = 0; /*0x5bda50*/
  *((_DWORD *)this + 5464) = 0; /*0x5bda56*/
  *((_DWORD *)this + 5465) = 0; /*0x5bda5c*/
  *((_DWORD *)this + 5466) = 0; /*0x5bda62*/
  *((_DWORD *)this + 5446) = &MouseClass::`vftable'; /*0x5bda68*/
  return this; /*0x5bda74*/
}
}
} // namespace gamemd

// 0x5BDC00
namespace gamemd {
int * sub_5BDC00(int * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__stdcall sub_5BDC00(int *a1, int a2)
{
  int v2; // ebx
  int v3; // edi
  int v4; // ecx
  int v5; // esi

  v2 = 0; /*0x5bdc17*/
  v3 = 0; /*0x5bdc19*/
  v4 = MEMORY[0x82D03C][7 * a2]; /*0x5bdc22*/
  if ( v4 == 12345 ) /*0x5bdc2f*/
    v2 = *((__int16 *)MEMORY[0xABF294] + 1) / 2; /*0x5bdc3a*/
  if ( v4 == 54321 ) /*0x5bdc42*/
    v2 = *((__int16 *)MEMORY[0xABF294] + 1); /*0x5bdc44*/
  v5 = MEMORY[0x82D040][7 * a2]; /*0x5bdc48*/
  if ( v5 == 12345 ) /*0x5bdc51*/
    v3 = *((__int16 *)MEMORY[0xABF294] + 2) / 2; /*0x5bdc5c*/
  if ( v5 == 54321 ) /*0x5bdc64*/
    v3 = *((__int16 *)MEMORY[0xABF294] + 2); /*0x5bdc66*/
  *a1 = v2; /*0x5bdc6e*/
  a1[1] = v3; /*0x5bdc70*/
  return a1; /*0x5bdc73*/
}
}
} // namespace gamemd

// 0x5BEAB0
namespace gamemd {
int sub_5BEAB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5BEAB0()
{
  MEMORY[0xABF2E8] = 0; /*0x5beab2*/
  MEMORY[0xABF2EC] = 0; /*0x5beab7*/
  MEMORY[0xABF2F0] = 0; /*0x5beabc*/
  MEMORY[0xABF2F4] = 0; /*0x5beac1*/
  return 0; /*0x5beac6*/
}
}
} // namespace gamemd

// 0x5BEAD0
namespace gamemd {
void sub_5BEAD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5BEAD0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5beadc*/
  MEMORY[0xABF300] = Math::Sqrt(v0 + v0); /*0x5beaee*/
}
}
} // namespace gamemd

// 0x5BEB00
namespace gamemd {
void sub_5BEB00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5BEB00()
{
  MEMORY[0xABF350] = MEMORY[0xABF300] / 60.0; /*0x5beb0c*/
}
}
} // namespace gamemd

// 0x5BEB20
namespace gamemd {
void sub_5BEB20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5BEB20()
{
  MEMORY[0xABF338] = 1.0 / MEMORY[0xABF350]; /*0x5beb2c*/
}
}
} // namespace gamemd

// 0x5BEB40
namespace gamemd {
void sub_5BEB40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5BEB40()
{
  MEMORY[0xABF330] = 0.0174532925199433 * 45.0; /*0x5beb4c*/
}
}
} // namespace gamemd

// 0x5BEB60
namespace gamemd {
void sub_5BEB60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5BEB60()
{
  MEMORY[0xABF308] = 0.0174532925199433 * 60.0; /*0x5beb6c*/
}
}
} // namespace gamemd

// 0x5BEB80
namespace gamemd {
void sub_5BEB80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5BEB80()
{
  MEMORY[0xABF2E0] = 0.0174532925199433 * 90.0; /*0x5beb8c*/
}
}
} // namespace gamemd

// 0x5BEBA0
namespace gamemd {
long long sub_5BEBA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_5BEBA0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xABF2E0] - MEMORY[0xABF308]); /*0x5bebb2*/
  result = Math::RoundToInt(v0 * MEMORY[0xABF300] * 0.5); /*0x5bebc6*/
  MEMORY[0xABF358] = result; /*0x5bebcb*/
  return result; /*0x5bebd0*/
}
}
} // namespace gamemd

// 0x5BEBE0
namespace gamemd {
void sub_5BEBE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5BEBE0()
{
  MEMORY[0xABF310] = Math::ArcTan((double)MEMORY[0xABF358] * 0.00390625); /*0x5bebf7*/
}
}
} // namespace gamemd

// 0x5BEC10
namespace gamemd {
void sub_5BEC10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5BEC10()
{
  MEMORY[0xABF328] = Math::ArcTan((double)(2 * MEMORY[0xABF358]) / MEMORY[0xABF300]); /*0x5bec32*/
}
}
} // namespace gamemd

// 0x5BEC40
namespace gamemd {
long long sub_5BEC40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_5BEC40()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABF358]) + 0.5); /*0x5bec5b*/
  MEMORY[0xABF34C] = result; /*0x5bec60*/
  return result; /*0x5bec66*/
}
}
} // namespace gamemd

// 0x5BEC70
namespace gamemd {
int sub_5BEC70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5BEC70()
{
  MEMORY[0xABF2F8] = 0; /*0x5bec72*/
  MEMORY[0xABF2FA] = 0; /*0x5bec78*/
  return 0; /*0x5bec7e*/
}
}
} // namespace gamemd

// 0x5BEC80
namespace gamemd {
int sub_5BEC80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5BEC80()
{
  MEMORY[0xABF318] = 0; /*0x5bec82*/
  MEMORY[0xABF31C] = 0; /*0x5bec87*/
  MEMORY[0xABF320] = 0; /*0x5bec8c*/
  return 0; /*0x5bec91*/
}
}
} // namespace gamemd

// 0x5BECA0
namespace gamemd {
int sub_5BECA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5BECA0()
{
  MEMORY[0xABF348] = 0; /*0x5beca5*/
  MEMORY[0xABF340] = 128; /*0x5becaf*/
  MEMORY[0xABF344] = 128; /*0x5becb4*/
  return 128; /*0x5becb9*/
}
}
} // namespace gamemd

// 0x5BECC0
namespace gamemd {
int sub_5BECC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_5BECC0(char *this)
{
  int v1; // esi
  int result; // eax
  char *v3; // edi
  int v4; // ebp
  int v5; // edx
  char *v6; // eax
  char v7; // bl

  v1 = 0; /*0x5becc9*/
  result = 256 - (_DWORD)this; /*0x5beccb*/
  v3 = this; /*0x5becce*/
  do /*0x5bed0c*/
  {
    v4 = v1 + 1; /*0x5becd4*/
    v5 = v1 + 1; /*0x5becdd*/
    if ( v1 + 1 < 256 ) /*0x5becdf*/
    {
      v6 = &v3[result + v1 + (_DWORD)this]; /*0x5bece5*/
      do /*0x5becf8*/
      {
        v7 = *v6; /*0x5bece7*/
        v6 += 256; /*0x5bece9*/
        v3[v5++] = v7; /*0x5becee*/
      }
      while ( v5 < 256 ); /*0x5becf8*/
      result = 256 - (_DWORD)this; /*0x5becfa*/
    }
    ++v1; /*0x5becfe*/
    v3 += 256; /*0x5bed00*/
  }
  while ( v4 < 255 ); /*0x5bed0c*/
  return result; /*0x5bed0e*/
}
}
} // namespace gamemd

// 0x5BF360
namespace gamemd {
int sub_5BF360()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_5BF360(int this)
{
  int result; // eax

  if ( this ) /*0x5bf362*/
    return MessageListClass::AddMessage( /*0x5bf37e*/
             MEMORY[0xA8BC60],
             0,
             0,
             *(wchar_t **)(this + 20),
             0,
             16454,
             *(_DWORD *)(this + 4),
             0);
  return result; /*0x5bf383*/
}
}
} // namespace gamemd

// 0x5BF390
namespace gamemd {
void sub_5BF390(int a1, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall sub_5BF390(int a1, char a2)
{
  int v3; // ecx
  _DWORD *v4; // eax
  _BYTE *v5; // esi
  int v6; // eax

  if ( a1 >= 0 && a1 < MEMORY[0xABF3A0] ) /*0x5bf3a2*/
  {
    v3 = *((_DWORD *)MEMORY[0xABF394] + a1); /*0x5bf3ad*/
    if ( !MEMORY[0xA8B238] ) /*0x5bf3b7*/
    {
      v4 = CreateMovie(v3, MEMORY[0x887300], 0); /*0x5bf3c5*/
      v5 = v4; /*0x5bf3ca*/
      if ( v4 ) /*0x5bf3ce*/
      {
        (*(void (__thiscall **)(_DWORD *, int, int))(*v4 + 24))(v4, MEMORY[0x8809D8] - 3, MEMORY[0x8809DC] - 1); /*0x5bf3e5*/
        (*(void (__thiscall **)(_BYTE *, int (*)()))(*(_DWORD *)v5 + 32))(v5, sub_5BF360); /*0x5bf3f1*/
        v5[4] = a2; /*0x5bf3f4*/
        if ( g_AsyncIOState < dword_B45B60 /*0x5bf42b*/
          || (byte_B45B65 || !dword_B45B60)
          && dword_B45B6C > 0
          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B45B58 + 8))(
               &dword_B45B58,
               dword_B45B60 + dword_B45B6C,
               0) )
        {
          v6 = g_AsyncIOState++; /*0x5bf438*/
          *((_DWORD *)AsyncIO_Instance + v6) = v5; /*0x5bf447*/
        }
      }
    }
  }
}
}
} // namespace gamemd

// 0x5BF5C0
namespace gamemd {
int sub_5BF5C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5BF5C0()
{
  MEMORY[0xABF368] = 0; /*0x5bf5c2*/
  MEMORY[0xABF36C] = 0; /*0x5bf5c7*/
  MEMORY[0xABF370] = 0; /*0x5bf5cc*/
  MEMORY[0xABF374] = 0; /*0x5bf5d1*/
  return 0; /*0x5bf5d6*/
}
}
} // namespace gamemd

// 0x5BF5E0
namespace gamemd {
void sub_5BF5E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5BF5E0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5bf5ec*/
  MEMORY[0xABF380] = Math::Sqrt(v0 + v0); /*0x5bf5fe*/
}
}
} // namespace gamemd

// 0x5BF610
namespace gamemd {
void sub_5BF610()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5BF610()
{
  MEMORY[0xABF3E8] = MEMORY[0xABF380] / 60.0; /*0x5bf61c*/
}
}
} // namespace gamemd

// 0x5BF630
namespace gamemd {
void sub_5BF630()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5BF630()
{
  MEMORY[0xABF3D0] = 1.0 / MEMORY[0xABF3E8]; /*0x5bf63c*/
}
}
} // namespace gamemd

// 0x5BF650
namespace gamemd {
void sub_5BF650()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5BF650()
{
  MEMORY[0xABF3C8] = 0.0174532925199433 * 45.0; /*0x5bf65c*/
}
}
} // namespace gamemd

// 0x5BF670
namespace gamemd {
void sub_5BF670()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5BF670()
{
  MEMORY[0xABF388] = 0.0174532925199433 * 60.0; /*0x5bf67c*/
}
}
} // namespace gamemd

// 0x5BF690
namespace gamemd {
void sub_5BF690()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5BF690()
{
  MEMORY[0xABF360] = 0.0174532925199433 * 90.0; /*0x5bf69c*/
}
}
} // namespace gamemd

// 0x5BF6B0
namespace gamemd {
long long sub_5BF6B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_5BF6B0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xABF360] - MEMORY[0xABF388]); /*0x5bf6c2*/
  result = Math::RoundToInt(v0 * MEMORY[0xABF380] * 0.5); /*0x5bf6d6*/
  MEMORY[0xABF3F0] = result; /*0x5bf6db*/
  return result; /*0x5bf6e0*/
}
}
} // namespace gamemd

// 0x5BF6F0
namespace gamemd {
void sub_5BF6F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5BF6F0()
{
  MEMORY[0xABF3A8] = Math::ArcTan((double)MEMORY[0xABF3F0] * 0.00390625); /*0x5bf707*/
}
}
} // namespace gamemd

// 0x5BF720
namespace gamemd {
void sub_5BF720()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5BF720()
{
  MEMORY[0xABF3C0] = Math::ArcTan((double)(2 * MEMORY[0xABF3F0]) / MEMORY[0xABF380]); /*0x5bf742*/
}
}
} // namespace gamemd

// 0x5BF750
namespace gamemd {
long long sub_5BF750()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_5BF750()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABF3F0]) + 0.5); /*0x5bf76b*/
  MEMORY[0xABF3E4] = result; /*0x5bf770*/
  return result; /*0x5bf776*/
}
}
} // namespace gamemd

// 0x5BF780
namespace gamemd {
int sub_5BF780()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5BF780()
{
  MEMORY[0xABF378] = 0; /*0x5bf782*/
  MEMORY[0xABF37A] = 0; /*0x5bf788*/
  return 0; /*0x5bf78e*/
}
}
} // namespace gamemd

// 0x5BF790
namespace gamemd {
int sub_5BF790()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5BF790()
{
  MEMORY[0xABF3B0] = 0; /*0x5bf792*/
  MEMORY[0xABF3B4] = 0; /*0x5bf797*/
  MEMORY[0xABF3B8] = 0; /*0x5bf79c*/
  return 0; /*0x5bf7a1*/
}
}
} // namespace gamemd

// 0x5BF7B0
namespace gamemd {
int sub_5BF7B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5BF7B0()
{
  MEMORY[0xABF3E0] = 0; /*0x5bf7b5*/
  MEMORY[0xABF3D8] = 128; /*0x5bf7bf*/
  MEMORY[0xABF3DC] = 128; /*0x5bf7c4*/
  return 128; /*0x5bf7c9*/
}
}
} // namespace gamemd

// 0x5BF7D0
namespace gamemd {
int sub_5BF7D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5BF7D0()
{
  MEMORY[0xABF394] = 0; /*0x5bf7d7*/
  MEMORY[0xABF398] = 0; /*0x5bf7dc*/
  MEMORY[0xABF39C] = 1; /*0x5bf7e1*/
  MEMORY[0xABF39D] = 0; /*0x5bf7e8*/
  MEMORY[0xABF390] = (int)&DynamicVectorClass<char const *>::`vftable'; /*0x5bf7ed*/
  MEMORY[0xABF3A4] = 10; /*0x5bf7f7*/
  MEMORY[0xABF3A0] = 0; /*0x5bf801*/
  return atexit(sub_5BF810); /*0x5bf80c*/
}
}
} // namespace gamemd

// 0x5BF810
namespace gamemd {
void sub_5BF810()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_5BF810()
{
  MEMORY[0xABF390] = (int)&VectorClass<char const *>::`vftable'; /*0x5bf818*/
  if ( MEMORY[0xABF394] && MEMORY[0xABF39D] ) /*0x5bf82c*/
  {
    __3_YAXPAX_Z(MEMORY[0xABF394]); /*0x5bf82f*/
    MEMORY[0xABF394] = 0; /*0x5bf837*/
  }
  MEMORY[0xABF39D] = 0; /*0x5bf83d*/
  MEMORY[0xABF398] = 0; /*0x5bf843*/
}
}
} // namespace gamemd

// 0x5BF850
namespace gamemd {
int sub_5BF850()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5BF850()
{
  int v0; // esi
  int v1; // edi
  int *v2; // ebx
  int v3; // eax
  int v4; // ebp
  int v5; // eax
  unsigned int v7; // [esp-Ch] [ebp-1Ch]
  int v8; // [esp-8h] [ebp-18h]

  v0 = *(_DWORD *)(MEMORY[0xABF3F4] + 8); /*0x5bf858*/
  v1 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v0 + 92))(v0, 0); /*0x5bf869*/
  v2 = *(int **)MEMORY[0xABF3F4]; /*0x5bf873*/
  v8 = *(_DWORD *)(MEMORY[0xABF3F4] + 40); /*0x5bf87a*/
  v7 = *(_DWORD *)(MEMORY[0xABF3F4] + 36); /*0x5bf87b*/
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v0 + 128))(v0); /*0x5bf87e*/
  v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v0 + 116))(v0, v3); /*0x5bf88c*/
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v0 + 112))(v0); /*0x5bf892*/
  Render_Load_759EB0(v2, 0, v4 / v5, v7, v8, 0); /*0x5bf8a1*/
  return v1; /*0x5bf8a8*/
}
}
} // namespace gamemd

// 0x5BF8B0
namespace gamemd {
int sub_5BF8B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5BF8B0()
{
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(MEMORY[0xABF3F4] + 8) + 96))(*(_DWORD *)(MEMORY[0xABF3F4] + 8));
}
}
} // namespace gamemd

// 0x5BF8C0
namespace gamemd {
char sub_5BF8C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_5BF8C0()
{
  char result; // al
  int v1; // edx
  int v2; // ecx
  int v3; // edi
  _DWORD v4[4]; // [esp+0h] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+10h] [ebp-10h] BYREF

  result = TestBitArray(15); /*0x5bf8c8*/
  if ( !result ) /*0x5bf8cf*/
  {
    GetClientRect(g_hWnd, &Rect); /*0x5bf8e0*/
    ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x5bf8f1*/
    v1 = *(_DWORD *)(MEMORY[0xABF3F4] + 64); /*0x5bf90c*/
    v2 = Rect.top + *(_DWORD *)(MEMORY[0xABF3F4] + 56); /*0x5bf90f*/
    v3 = *(_DWORD *)(MEMORY[0xABF3F4] + 52); /*0x5bf911*/
    v4[2] = *(_DWORD *)(MEMORY[0xABF3F4] + 60); /*0x5bf914*/
    v4[1] = v2; /*0x5bf91a*/
    v4[0] = Rect.left + v3; /*0x5bf924*/
    v4[3] = v1; /*0x5bf928*/
    return (*(int (__thiscall **)(int, _DWORD *, _DWORD, int, _DWORD, int))(*(_DWORD *)MEMORY[0x887308] + 8))( /*0x5bf93d*/
             MEMORY[0x887308],
             v4,
             *(_DWORD *)(MEMORY[0xABF3F4] + 8),
             MEMORY[0xABF3F4] + 36,
             0,
             1);
  }
  return result; /*0x5bf943*/
}
}
} // namespace gamemd

// 0x5BF950
namespace gamemd {
int sub_5BF950()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __usercall sub_5BF950@<al>(int a1@<ebx>, int a2@<edi>, int a3@<esi>)
{
  char result; // al
  _DWORD *v4; // eax
  int v5; // esi
  _DWORD *v6; // eax
  int v7; // eax
  int v8; // edx
  int v9; // esi
  int v10; // edi
  _DWORD v11[2]; // [esp+24h] [ebp-44h] BYREF
  int v12; // [esp+2Ch] [ebp-3Ch]
  int v13; // [esp+30h] [ebp-38h]
  _DWORD v14[4]; // [esp+34h] [ebp-34h] BYREF
  _DWORD v15[4]; // [esp+44h] [ebp-24h] BYREF
  struct tagRECT Rect; // [esp+54h] [ebp-14h] BYREF
  _BYTE v17[4]; // [esp+64h] [ebp-4h] BYREF

  result = TestBitArray(15); /*0x5bf958*/
  if ( !result ) /*0x5bf95f*/
  {
    (*(void (__thiscall **)(int, int, _DWORD, int, _DWORD, int, int, int, int))(*(_DWORD *)MEMORY[0x88730C] + 8))( /*0x5bf983*/
      MEMORY[0x88730C],
      MEMORY[0xABF3F4] + 36,
      *(_DWORD *)(MEMORY[0xABF3F4] + 8),
      MEMORY[0xABF3F4] + 36,
      0,
      1,
      a2,
      a3,
      a1);
    v4 = *(_DWORD **)(MEMORY[0xABF3F4] + 72); /*0x5bf98c*/
    if ( v4 ) /*0x5bf991*/
    {
      if ( *v4 ) /*0x5bf997*/
      {
        v5 = v4[4]; /*0x5bf9a0*/
        v6 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 120))(v5, v17); /*0x5bf9ac*/
        v11[0] = *v6; /*0x5bf9b1*/
        v11[1] = v6[1]; /*0x5bf9b8*/
        v12 = v6[2]; /*0x5bf9bf*/
        v13 = v6[3]; /*0x5bf9cc*/
        v14[0] = ((*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x88730C] + 124))(MEMORY[0x88730C]) - v12) / 2; /*0x5bf9e6*/
        v7 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x88730C] + 128))(MEMORY[0x88730C]); /*0x5bf9ec*/
        v14[2] = v12; /*0x5bf9fc*/
        v14[1] = v7 - v13; /*0x5bfa04*/
        v14[3] = v13; /*0x5bfa15*/
        (*(void (__thiscall **)(int, _DWORD *, int, _DWORD *, int, int))(*(_DWORD *)MEMORY[0x88730C] + 8))( /*0x5bfa21*/
          MEMORY[0x88730C],
          v14,
          v5,
          v11,
          1,
          1);
      }
    }
    GetClientRect(g_hWnd, &Rect); /*0x5bfa30*/
    ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x5bfa41*/
    v8 = *(_DWORD *)(MEMORY[0xABF3F4] + 64); /*0x5bfa59*/
    v9 = *(_DWORD *)(MEMORY[0xABF3F4] + 60); /*0x5bfa5c*/
    v10 = *(_DWORD *)(MEMORY[0xABF3F4] + 52); /*0x5bfa61*/
    v15[1] = Rect.top + *(_DWORD *)(MEMORY[0xABF3F4] + 56); /*0x5bfa6f*/
    v15[0] = Rect.left + v10; /*0x5bfa7c*/
    v15[2] = v9; /*0x5bfa80*/
    v15[3] = v8; /*0x5bfa84*/
    return (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)MEMORY[0x887308] + 8))( /*0x5bfa8f*/
             MEMORY[0x887308],
             v15,
             MEMORY[0x88730C]);
  }
  return result; /*0x5bfa95*/
}
}
} // namespace gamemd

// 0x5BFAA0
namespace gamemd {
int LoadVQMovie()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ObjectClass *__fastcall LoadVQMovie(
        char *Source,
        int *a2,
        int a3,
        int a4,
        IUnknown *a5,
        int a6,
        int a7,
        int a8,
        IUnknown *a9,
        int a10,
        int a11,
        char a12)
{
  int v14; // eax
  ObjectClass *v15; // esi
  CCFileClass *v16; // eax
  char v17; // al
  IUnknown *v18; // eax
  char *v19; // eax
  char *v20; // eax
  int Height; // ebp
  int v23; // kr04_4
  int v24; // eax
  int v25; // edx
  int v26; // ebp
  int *v27; // eax
  void *eax30a; // eax
  int v29; // ecx
  char *v30; // ebp
  IUnknown *v31; // ecx
  void *v32; // eax
  IUnknown *v28; // edx
  int v34; // ebp
  int v35; // eax
  int Status; // eax
  int v37; // ebx
  int v38; // eax
  _DWORD *SurfaceTracker; // eax
  IUnknown *v40; // [esp-Ch] [ebp-BCh]
  IUnknown *aP2; // [esp+10h] [ebp-A0h]
  IUnknown *aP2a; // [esp+10h] [ebp-A0h]
  IUnknown *aP5; // [esp+14h] [ebp-9Ch]
  IUnknown *aP5a; // [esp+14h] [ebp-9Ch]
  bool v45; // [esp+1Bh] [ebp-95h]
  int v46; // [esp+1Ch] [ebp-94h] BYREF
  IUnknown *v41; // [esp+20h] [ebp-90h]
  int v48; // [esp+24h] [ebp-8Ch]
  int v49; // [esp+28h] [ebp-88h]
  int _759EA0; // [esp+2Ch] [ebp-84h]
  char *FullPath; // [esp+30h] [ebp-80h]
  int v52[4]; // [esp+34h] [ebp-7Ch] BYREF
  _DWORD v53[22]; // [esp+44h] [ebp-6Ch] BYREF
  _BYTE v54[12]; // [esp+9Ch] [ebp-14h] BYREF
  int v55; // [esp+A8h] [ebp-8h]

  FullPath = Source; /*0x5bfab2*/
  aP5 = 0; /*0x5bfab6*/
  v14 = __2_YAPAXI_Z(0x4Cu); /*0x5bfaba*/
  v15 = (ObjectClass *)v14; /*0x5bfabf*/
  if ( !v14 ) /*0x5bfac6*/
    return 0; /*0x5bfac6*/
  *(_DWORD *)v14 = 0; /*0x5bfacf*/
  *(_DWORD *)(v14 + 4) = -1; /*0x5bfad1*/
  *(_DWORD *)(v14 + 8) = 0; /*0x5bfad8*/
  *(_DWORD *)(v14 + 12) = 0; /*0x5bfadb*/
  *(_DWORD *)(v14 + 16) = 0; /*0x5bfade*/
  *(_DWORD *)(v14 + 20) = 0; /*0x5bfae1*/
  *(_DWORD *)(v14 + 24) = 0; /*0x5bfae4*/
  *(_DWORD *)(v14 + 28) = 1; /*0x5bfae7*/
  *(_DWORD *)(v14 + 32) = 0; /*0x5bfaee*/
  *(_DWORD *)(v14 + 36) = 0; /*0x5bfaf5*/
  *(_DWORD *)(v14 + 40) = 0; /*0x5bfaf8*/
  *(_DWORD *)(v14 + 44) = 0; /*0x5bfafb*/
  *(_DWORD *)(v14 + 48) = 0; /*0x5bfafe*/
  Rect::Set((_DWORD *)(v14 + 52), 0, 0, 0, 0); /*0x5bfb01*/
  LOBYTE(v15->ambientSoundController[2]) = 0; /*0x5bfb0a*/
  BYTE1(v15->ambientSoundController[2]) = 0; /*0x5bfb0e*/
  v15->ambientSoundController[3] = 0; /*0x5bfb11*/
  v16 = CCFileClass::Construct(v53, Source); /*0x5bfb14*/
  v17 = (*(int (__thiscall **)(CCFileClass *, _DWORD))(*(_DWORD *)v16->__pad_0 + 20))(v16, 0); /*0x5bfb1e*/
  v53[0] = &CCFileClass::`vftable'; /*0x5bfb2a*/
  v45 = v17 == 0; /*0x5bfb32*/
  v55 = 0; /*0x5bfb37*/
  Vector::Clear((int)v54); /*0x5bfb3e*/
  v53[0] = &off_7E1668; /*0x5bfb47*/
  BufferIOFileClass::Dtor(v53); /*0x5bfb4f*/
  if ( v45 ) /*0x5bfb58*/
    return 0; /*0x5bfb58*/
  aP2 = 0; /*0x5bfb5e*/
  if ( !Audio::IsSoundEnabled() ) /*0x5bfb62*/
    ResetAnimSystem(3); /*0x5bfb70*/
  if ( TestBitArray(0) ) /*0x5bfb77*/
    aP2 = (IUnknown *)1; /*0x5bfb80*/
  if ( *(&g_MatrixTransformState + 379) == (CoordStruct *)1 ) /*0x5bfb8f*/
  {
    v18 = aP2; /*0x5bfb91*/
    LOBYTE(v18) = (unsigned __int8)aP2 | 2; /*0x5bfb95*/
    aP2 = v18; /*0x5bfb97*/
  }
  if ( a12 == 1 ) /*0x5bfba3*/
    aP5 = (IUnknown *)sub_5BF950; /*0x5bfba5*/
  v19 = (char *)__2_YAPAXI_Z(0x554u); /*0x5bfbb2*/
  if ( v19 ) /*0x5bfbbc*/
    v20 = Stream::InitializeBinkAudio(v19, Source, aP2, (int)sub_5BF850, (int)sub_5BF8B0, aP5, -1, -1); /*0x5bfbd9*/
  else
    v20 = 0; /*0x5bfbe0*/
  *(_DWORD *)v15->__pad_0 = v20; /*0x5bfbe4*/
  if ( !v20 || (Render_Load_759830(v20, a11), !Render_Load_7597A0(*(_DWORD *)v15->__pad_0)) ) /*0x5bfbf9*/
  {
    BinkMovie::Cleanup(v15); /*0x5bfc04*/
    __3_YAXPAX_Z(v15); /*0x5bfc0a*/
    return 0; /*0x5bfc1e*/
  }
  aP2a = (IUnknown *)MovieClass::GetWidth(*(_DWORD **)v15->__pad_0); /*0x5bfc2a*/
  Height = MovieClass::GetHeight(*(_DWORD **)v15->__pad_0); /*0x5bfc35*/
  _759EA0 = Render_Load_759EA0(*(_DWORD **)v15->__pad_0); /*0x5bfc43*/
  if ( _759EA0 == 4 ) /*0x5bfc47*/
    _759EA0 = 1; /*0x5bfc49*/
  if ( !a3 && !a4 && !a5 && !a6 ) /*0x5bfc73*/
  {
    a3 = 0; /*0x5bfc7b*/
    a4 = 0; /*0x5bfc82*/
    a5 = aP2a; /*0x5bfc89*/
    a6 = Height; /*0x5bfc90*/
  }
  if ( !a7 && !a8 && !a9 && !a10 ) /*0x5bfcb9*/
  {
    v23 = (*(int (__thiscall **)(int *))(*a2 + 128))(a2) - Height; /*0x5bfcca*/
    v24 = (*(int (__thiscall **)(int *))(*a2 + 124))(a2); /*0x5bfcd2*/
    a8 = v23 / 2; /*0x5bfcd9*/
    a9 = aP2a; /*0x5bfce2*/
    a7 = (v24 - (int)aP2a) / 2; /*0x5bfcee*/
    a10 = Height; /*0x5bfcf9*/
  }
  v25 = *a2; /*0x5bfd06*/
  v52[2] = (int)aP2a; /*0x5bfd08*/
  v52[0] = 0; /*0x5bfd0e*/
  v52[1] = 0; /*0x5bfd12*/
  v52[3] = Height; /*0x5bfd16*/
  aP5a = (IUnknown *)(*(int (__thiscall **)(int *))(v25 + 128))(a2); /*0x5bfd20*/
  v26 = (*(int (__thiscall **)(int *))(*a2 + 124))(a2); /*0x5bfd3d*/
  v27 = ClipRectIntersection(&v46, &a3, v52, 0, 0); /*0x5bfd3f*/
  v15->objectTypeFlags = *v27; /*0x5bfd46*/
  v15->owningHouseIndex = v27[1]; /*0x5bfd4c*/
  v15->fallRate = v27[2]; /*0x5bfd54*/
  eax30a = (void *)v27[3]; /*0x5bfd59*/
  v41 = 0; /*0x5bfd5c*/
  v15->nextObject = eax30a; /*0x5bfd64*/
  v48 = v26; /*0x5bfd69*/
  v46 = 0; /*0x5bfd6d*/
  v49 = (int)aP5a; /*0x5bfd7a*/
  if ( (int)a9 <= 0 || a10 <= 0 || v26 <= 0 || (int)aP5a <= 0 ) /*0x5bfd9d*/
    goto LABEL_47; /*0x5bfd9d*/
  v29 = a7; /*0x5bfda3*/
  if ( a7 > 0 ) /*0x5bfdac*/
  {
    v46 = a7; /*0x5bfdb0*/
    v48 = v26 - a7; /*0x5bfdb4*/
  }
  if ( v48 < 1 ) /*0x5bfdbd*/
    goto LABEL_47; /*0x5bfdbd*/
  if ( (int)v41 < a8 ) /*0x5bfdd0*/
  {
    v30 = (char *)v41 - a8; /*0x5bfdd6*/
    v41 = (IUnknown *)a8; /*0x5bfdda*/
    v49 += (int)v30; /*0x5bfdde*/
    v29 = a7; /*0x5bfde2*/
  }
  if ( v49 < 1 ) /*0x5bfdee*/
    goto LABEL_47; /*0x5bfdee*/
  if ( v48 + v46 > (int)a9 + v29 ) /*0x5bfe05*/
    v48 = (int)a9 + a7 - v46; /*0x5bfe16*/
  if ( v48 < 1 ) /*0x5bfe1f*/
    goto LABEL_47; /*0x5bfe1f*/
  v31 = v41; /*0x5bfe35*/
  if ( (int)v41 + v49 > a10 + a8 ) /*0x5bfe3d*/
    v49 = a10 + a8 - (_DWORD)v41; /*0x5bfe51*/
  if ( v49 < 1 ) /*0x5bfe5a*/
  {
LABEL_47:
    v32 = 0; /*0x5bfe6a*/
    v28 = 0; /*0x5bfe6c*/
    v31 = 0; /*0x5bfe6e*/
    v34 = 0; /*0x5bfe70*/
  }
  else
  {
    v32 = (void *)v46; /*0x5bfe5c*/
    v28 = (IUnknown *)v48; /*0x5bfe60*/
    v34 = v49; /*0x5bfe64*/
  }
  v15->attachedTag = v32; /*0x5bfe72*/
  v35 = _759EA0; /*0x5bfe75*/
  v15->attachedBomb = v31; /*0x5bfe79*/
  v15->ambientSoundController[0] = (int)v28; /*0x5bfe7c*/
  v15->ambientSoundController[1] = v34; /*0x5bfe82*/
  if ( v35 == 1 || v35 == 4 ) /*0x5bfe8a*/
  {
    Status = DDraw::GetStatus(); /*0x5bfe8c*/
    Render_Load_759F20(*(_DWORD **)v15->__pad_0, Status); /*0x5bfe94*/
  }
  *(_DWORD *)&v15->__pad_0[8] = a2; /*0x5bfe99*/
  v40 = (IUnknown *)(*(int (__thiscall **)(int *))(*a2 + 128))(a2); /*0x5bfeac*/
  v37 = (*(int (__thiscall **)(int *))(*a2 + 116))(a2); /*0x5bfeb6*/
  v38 = (*(int (__thiscall **)(int *))(*a2 + 112))(a2); /*0x5bfeb8*/
  Render_Load_759EB0(*(int **)v15->__pad_0, 0, v37 / v38, (unsigned int)v40, 0, 0); /*0x5bfec7*/
  SurfaceTracker = BinkMovie::CreateSurfaceTracker(FullPath); /*0x5bfed0*/
  v15->ambientSoundController[3] = (int)SurfaceTracker; /*0x5bfed7*/
  if ( SurfaceTracker ) /*0x5bfeda*/
    **(_DWORD **)v15->__pad_0 = SurfaceTracker; /*0x5bfede*/
  BYTE1(v15->ambientSoundController[2]) = 1; /*0x5bfee0*/
  return v15; /*0x5bfc12*/
}
}
} // namespace gamemd

// 0x5BFF60
namespace gamemd {
char Movie_RenderFrame(int a1, char a2, int a3, char a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall Movie_RenderFrame(int a1, char a2, int a3, char a4)
{
  char result; // al
  int v6; // ebx
  int v7; // ebp
  int v8; // edi
  bool v9; // zf
  int v10; // [esp-10h] [ebp-1Ch]
  int v12; // [esp+8h] [ebp-4h]

  result = MEMORY[0xABF3F4]; /*0x5bff63*/
  if ( !MEMORY[0xABF3F4] ) /*0x5bff71*/
  {
    *(_BYTE *)(a1 + 69) = 1; /*0x5bff7a*/
    MEMORY[0xABF3F4] = a1; /*0x5bff83*/
    v12 = 0; /*0x5bff89*/
    v6 = -1; /*0x5bff91*/
    v7 = 0; /*0x5bff94*/
    if ( (unsigned __int8)TestBitArray(2) ) /*0x5bff96*/
    {
      v12 = *(_DWORD *)(a1 + 16); /*0x5bffa2*/
      if ( *(int *)(a1 + 20) >= 0 ) /*0x5bffab*/
        v6 = *(_DWORD *)(a1 + 20); /*0x5bffad*/
      v7 = *(_DWORD *)(a1 + 28); /*0x5bffb2*/
      if ( *(_DWORD *)(a1 + 12) == 1 ) /*0x5bffb8*/
      {
        v10 = *(_DWORD *)(a1 + 28); /*0x5bffbd*/
        if ( *(_DWORD *)(a1 + 24) ) /*0x5bffba*/
          Render_Render_759880(v12, v6, v10); /*0x5bffd7*/
        else
          Render_Render_759850(*(_DWORD *)(a1 + 32), v10); /*0x5bffc8*/
      }
    }
    if ( a2 ) /*0x5bffe2*/
      (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 12))(MEMORY[0x887640]); /*0x5bffec*/
    if ( a3 != -1 ) /*0x5bfff6*/
      Theme::QueueSong(a3); /*0x5bfffe*/
    do /*0x5c0049*/
    {
      if ( *(_DWORD *)(a1 + 12) == 2 || v12 ) /*0x5c000f*/
        AbstractClass::updateBuildingState(v12); /*0x5c0018*/
      v8 = MovieClass::RenderLoop(v6, a4); /*0x5c002a*/
      if ( *(_DWORD *)(a1 + 12) == 1 ) /*0x5c0032*/
        v7 = 0; /*0x5c0034*/
      AbstractClass::finalizeConstruction(*(_DWORD *)a1); /*0x5c0038*/
      if ( v8 == 1 ) /*0x5c0040*/
        break; /*0x5c0040*/
      v9 = v7 == 0; /*0x5c0042*/
      if ( v7 > 0 ) /*0x5c0044*/
        v9 = --v7 == 0; /*0x5c0047*/
    }
    while ( !v9 ); /*0x5c0049*/
    result = a2; /*0x5c004b*/
    if ( a2 ) /*0x5c0054*/
      result = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 16))(MEMORY[0x887640]); /*0x5c005e*/
    MEMORY[0xABF3F4] = 0; /*0x5c0061*/
  }
  return result; /*0x5c006b*/
}
}
} // namespace gamemd
