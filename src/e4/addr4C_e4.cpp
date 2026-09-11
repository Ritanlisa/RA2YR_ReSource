// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_4C2790_e4.hpp"
#include "e4/classes/E4Recv_4C2B40_e4.hpp"
#include "e4/classes/E4Recv_4C2C30_e4.hpp"
#include "e4/classes/E4Recv_4C38D0_e4.hpp"
#include "e4/classes/E4Recv_4C3C90_e4.hpp"
#include "e4/classes/E4Recv_4C3DD0_e4.hpp"
#include "e4/classes/E4Recv_4C4FC0_e4.hpp"
#include "e4/classes/E4Recv_4C69E0_e4.hpp"
#include "e4/classes/E4Recv_4C6A60_e4.hpp"
#include "e4/classes/E4Recv_4C6BE0_e4.hpp"
#include "e4/classes/E4Recv_4C95D0_e4.hpp"
#include "e4/classes/E4Recv_4CB580_e4.hpp"
#include "e4/classes/E4Recv_4CB640_e4.hpp"
#include "e4/classes/E4Recv_4CB6A0_e4.hpp"
#include "e4/classes/E4Recv_4CB8B0_e4.hpp"
#include "e4/classes/E4Recv_4CCA70_e4.hpp"

// 0x4C1440
namespace gamemd {
int sub_4C1440()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C1440()
{
  int result; // eax
  _DWORD v1[79]; // [esp+8h] [ebp-13Ch] BYREF

  memset(v1, 0, sizeof(v1)); /*0x4c1452*/
  v1[0] = 316; /*0x4c145d*/
  result = (*(int (__stdcall **)(int, _DWORD *, _DWORD))(*(_DWORD *)MEMORY[0x8A0E00] + 44))(MEMORY[0x8A0E00], v1, 0); /*0x4c146b*/
  if ( !result ) /*0x4c1471*/
  {
    if ( (v1[1] & 1) != 0 ) /*0x4c1478*/
    {
      if ( (v1[14] & 0x400) != 0 ) /*0x4c148b*/
      {
        if ( (v1[33] & 0x2000) != 0 ) /*0x4c14a1*/
        {
          if ( (v1[33] & 0x1000) != 0 ) /*0x4c14b0*/
            return ((v1[33] & 0x20000) != 0) - 1; /*0x4c14c7*/
          else
            return -1; /*0x4c14b2*/
        }
        else
        {
          return -1; /*0x4c14a3*/
        }
      }
      else
      {
        return -1; /*0x4c148d*/
      }
    }
    else
    {
      return -1; /*0x4c147a*/
    }
  }
  return result; /*0x4c1470*/
}
}
} // namespace gamemd

// 0x4C14D0
namespace gamemd {
int sub_4C14D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C14D0()
{
  int result; // eax
  _DWORD v1[63]; // [esp+8h] [ebp-1F8h] BYREF
  _DWORD v2[63]; // [esp+104h] [ebp-FCh] BYREF

  memset(v1, 0, sizeof(v1)); /*0x4c14e2*/
  memset(v2, 0, sizeof(v2)); /*0x4c14f5*/
  v1[0] = 252; /*0x4c14fc*/
  v2[0] = 252; /*0x4c1500*/
  result = (*(int (__stdcall **)(_DWORD, _DWORD *, _DWORD *))(*(_DWORD *)MEMORY[0x8A0DF8] + 12))( /*0x4c1517*/
             MEMORY[0x8A0DF8],
             v1,
             v2);
  if ( !result ) /*0x4c151d*/
  {
    if ( (v1[1] & 0x1C3) == 0x1C3 ) /*0x4c1531*/
    {
      if ( (v1[2] & 2) != 0 ) /*0x4c1545*/
      {
        if ( (v1[3] & 0x400) != 0 ) /*0x4c155c*/
        {
          if ( (v1[3] & 0x200) != 0 ) /*0x4c156b*/
          {
            if ( (v1[39] & 0x400) != 0 ) /*0x4c157e*/
            {
              if ( (v1[40] & 0x400) != 0 ) /*0x4c1591*/
              {
                if ( (v1[28] & 0xA) != 0 ) /*0x4c15a2*/
                {
                  if ( (v1[29] & 2) != 0 ) /*0x4c15b2*/
                  {
                    if ( (v1[30] & 2) != 0 ) /*0x4c15c2*/
                    {
                      if ( v1[45] >= 0x100u ) /*0x4c15dc*/
                        return -(v1[46] < 0x100u); /*0x4c15ef*/
                      else
                        return -1; /*0x4c15de*/
                    }
                    else
                    {
                      return -1; /*0x4c15c4*/
                    }
                  }
                  else
                  {
                    return -1; /*0x4c15b4*/
                  }
                }
                else
                {
                  return -1; /*0x4c15a4*/
                }
              }
              else
              {
                return -1; /*0x4c1593*/
              }
            }
            else
            {
              return -1; /*0x4c1580*/
            }
          }
          else
          {
            return -1; /*0x4c156d*/
          }
        }
        else
        {
          return -1; /*0x4c155e*/
        }
      }
      else
      {
        return -1; /*0x4c1547*/
      }
    }
    else
    {
      return -1; /*0x4c1533*/
    }
  }
  return result; /*0x4c151c*/
}
}
} // namespace gamemd

// 0x4C1600
namespace gamemd {
int sub_4C1600()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C1600()
{
  int result; // eax
  _DWORD v1[79]; // [esp+20h] [ebp-13Ch] BYREF

  result = MEMORY[0x8A0094]->lpVtbl->QueryInterface( /*0x4c1618*/
             MEMORY[0x8A0094],
             (const IID *const)&unk_7F7D50,
             (LPVOID *)&MEMORY[0x8A0E00]);
  if ( !result ) /*0x4c161c*/
  {
    result = (**(int (__stdcall ***)(int, void *, int *))MEMORY[0x8A0E00])( /*0x4c1630*/
               MEMORY[0x8A0E00],
               &unk_7F8070,
               &MEMORY[0x8A0DF4]);
    if ( !result ) /*0x4c1634*/
    {
      memset(v1, 0, sizeof(v1)); /*0x4c1644*/
      v1[0] = 316; /*0x4c164b*/
      if ( !(*(int (__stdcall **)(int, _DWORD *, _DWORD))(*(_DWORD *)MEMORY[0x8A0E00] + 44))(MEMORY[0x8A0E00], v1, 0) /*0x4c1687*/
        && (v1[1] & 1) != 0
        && (v1[14] & 0x400) != 0
        && (v1[33] & 0x2000) != 0
        && (v1[33] & 0x1000) != 0
        && (v1[33] & 0x20000) != 0 )
      {
        return 0; /*0x4c1693*/
      }
      else
      {
        return -1; /*0x4c1689*/
      }
    }
  }
  return result; /*0x4c168c*/
}
}
} // namespace gamemd

// 0x4C16A0
namespace gamemd {
int InitializeRadialGradientTexture()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int InitializeRadialGradientTexture()
{
  _DWORD *v0; // esi
  int result; // eax
  int v2; // eax
  void *v3; // eax
  int v4; // edi
  _WORD *v5; // ebx
  int v6; // edi
  int v7; // esi
  double v8; // st7
  int v9; // edx
  void *v10; // eax
  void *v11; // eax
  const void *v12; // [esp+58h] [ebp-ACh]
  int v13; // [esp+60h] [ebp-A4h]
  _DWORD *v14; // [esp+64h] [ebp-A0h]
  _DWORD v15[11]; // [esp+6Ch] [ebp-98h] BYREF
  _DWORD v16[27]; // [esp+98h] [ebp-6Ch] BYREF

  v0 = *(_DWORD **)(MEMORY[0x88731C] + 28); /*0x4c16b4*/
  v14 = v0; /*0x4c16cb*/
  result = (*(int (__stdcall **)(int, void *, _DWORD *, __int64 *))(*(_DWORD *)MEMORY[0x8A0DF4] + 32))( /*0x4c16cf*/
             MEMORY[0x8A0DF4],
             &unk_7F80B0,
             v0,
             &MEMORY[0x8A0DF8]);
  if ( !result ) /*0x4c16d6*/
  {
    if ( sub_4C14D0() ) /*0x4c16dc*/
      return -1; /*0x4c16ef*/
    result = (*(int (__stdcall **)(int, char *, _DWORD))(*(_DWORD *)MEMORY[0x8A0DF4] + 24))( /*0x4c16fe*/
               MEMORY[0x8A0DF4],
               (char *)&MEMORY[0x8A0DF8] + 4,
               0);
    if ( !result ) /*0x4c1703*/
    {
      result = (*(int (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)MEMORY[0x8A0DF8] + 24))( /*0x4c1718*/
                 MEMORY[0x8A0DF8],
                 HIDWORD(MEMORY[0x8A0DF8]));
      if ( !result ) /*0x4c171d*/
      {
        memset(v16, 0, sizeof(v16)); /*0x4c172e*/
        v2 = *v0; /*0x4c1730*/
        v16[0] = 108; /*0x4c1738*/
        result = (*(int (__stdcall **)(_DWORD *, _DWORD *))(v2 + 88))(v0, v16); /*0x4c1740*/
        if ( !result ) /*0x4c1745*/
        {
          memset(v15, 0, sizeof(v15)); /*0x4c175a*/
          v15[3] = v16[3]; /*0x4c1768*/
          v15[4] = v16[2]; /*0x4c177d*/
          *(float *)&v15[7] = (float)v16[3]; /*0x4c1781*/
          v15[0] = 44; /*0x4c178d*/
          v15[10] = 1065353216; /*0x4c1795*/
          *(float *)&v15[8] = (float)v16[2]; /*0x4c179e*/
          result = (*(int (__stdcall **)(_DWORD, _DWORD *))(*(_DWORD *)HIDWORD(MEMORY[0x8A0DF8]) + 68))( /*0x4c17a5*/
                     HIDWORD(MEMORY[0x8A0DF8]),
                     v15);
          if ( !result ) /*0x4c17aa*/
          {
            result = (*(int (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)MEMORY[0x8A0DF8] + 52))( /*0x4c17bf*/
                       MEMORY[0x8A0DF8],
                       HIDWORD(MEMORY[0x8A0DF8]));
            if ( !result ) /*0x4c17c4*/
            {
              if ( __2_YAPAXI_Z(0x78u) ) /*0x4c17cc*/
              {
                MEMORY[0x8A0E04] = (void *)sub_4A3270(256, 256, 0); /*0x4c17ec*/
                if ( MEMORY[0x8A0E04] ) /*0x4c17f1*/
                {
                  v3 = malloc(0x20000u); /*0x4c17f8*/
                  v12 = v3; /*0x4c1802*/
                  if ( !v3 ) /*0x4c1806*/
                    return 2; /*0x4c19a2*/
                  v4 = -128; /*0x4c180c*/
                  v5 = v3; /*0x4c1811*/
                  v13 = -128; /*0x4c1813*/
                  do /*0x4c18db*/
                  {
                    v6 = v4 * v4; /*0x4c1817*/
                    v7 = -128; /*0x4c181a*/
                    do /*0x4c18c0*/
                    {
                      v8 = Math::Sqrt((double)(v6 + v7 * v7)); /*0x4c1834*/
                      v9 = 400 - Math::RoundToInt(v8 * 3.0); /*0x4c184c*/
                      if ( v9 >= 0 ) /*0x4c184e*/
                      {
                        if ( v9 > 255 ) /*0x4c186d*/
                          v9 = 255; /*0x4c186f*/
                      }
                      else
                      {
                        v9 = 0; /*0x4c1850*/
                      }
                      ++v5; /*0x4c1886*/
                      ++v7; /*0x4c18af*/
                      *(v5 - 1) = (v9 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) /*0x4c18b0*/
                                | (v9 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                                | (v9 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
                    }
                    while ( v7 + 128 < 256 ); /*0x4c18c0*/
                    v4 = v13 + 1; /*0x4c18ca*/
                    v13 = v4; /*0x4c18cb*/
                  }
                  while ( v4 + 128 < 256 ); /*0x4c18db*/
                  if ( AudioStream::ReadSamples(MEMORY[0x8A0E04], v12) ) /*0x4c18ec*/
                    return 3; /*0x4c18f5*/
                  memset(v16, 0, sizeof(v16)); /*0x4c1911*/
                  v16[0] = 108; /*0x4c1919*/
                  result = (*(int (__stdcall **)(_DWORD *, _DWORD *))(*v14 + 88))(v14, v16); /*0x4c1923*/
                  if ( !result ) /*0x4c1928*/
                  {
                    if ( __2_YAPAXI_Z(0x78u) ) /*0x4c1930*/
                      MEMORY[0x8A0E08] = (void *)sub_4A3270(v16[3], v16[2], 1); /*0x4c194f*/
                    else
                      MEMORY[0x8A0E08] = 0; /*0x4c1956*/
                    v10 = __2_YAPAXI_Z(0x18004u); /*0x4c1965*/
                    if ( v10 ) /*0x4c196f*/
                      v11 = (void *)sub_4A3630(v10); /*0x4c1973*/
                    else
                      v11 = 0; /*0x4c197a*/
                    MEMORY[0x8A0E10] = v11; /*0x4c1982*/
                    if ( !MEMORY[0x8A0E08] || !v11 ) /*0x4c1991*/
                      return -1; /*0x4c1991*/
                    return 0; /*0x4c1997*/
                  }
                  return result; /*0x4c1901*/
                }
              }
              else
              {
                MEMORY[0x8A0E04] = 0; /*0x4c1854*/
              }
              return 1; /*0x4c185a*/
            }
          }
        }
      }
    }
  }
  return result; /*0x4c16e8*/
}
}
} // namespace gamemd

// 0x4C1B80
namespace gamemd {
void sub_4C1B80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C1B80()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4c1b8c*/
  MEMORY[0x8A0E38] = Math::Sqrt(v0 + v0); /*0x4c1b9e*/
}
}
} // namespace gamemd

// 0x4C1BB0
namespace gamemd {
void sub_4C1BB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C1BB0()
{
  MEMORY[0x8A0EA8] = MEMORY[0x8A0E38] / 60.0; /*0x4c1bbc*/
}
}
} // namespace gamemd

// 0x4C1BD0
namespace gamemd {
void sub_4C1BD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C1BD0()
{
  MEMORY[0x8A0E70] = 1.0 / MEMORY[0x8A0EA8]; /*0x4c1bdc*/
}
}
} // namespace gamemd

// 0x4C1BF0
namespace gamemd {
void sub_4C1BF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C1BF0()
{
  MEMORY[0x8A0E68] = 0.0174532925199433 * 45.0; /*0x4c1bfc*/
}
}
} // namespace gamemd

// 0x4C1C10
namespace gamemd {
void sub_4C1C10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C1C10()
{
  MEMORY[0x8A0E40] = 0.0174532925199433 * 60.0; /*0x4c1c1c*/
}
}
} // namespace gamemd

// 0x4C1C30
namespace gamemd {
void sub_4C1C30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C1C30()
{
  MEMORY[0x8A0E18] = 0.0174532925199433 * 90.0; /*0x4c1c3c*/
}
}
} // namespace gamemd

// 0x4C1C50
namespace gamemd {
long long sub_4C1C50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4C1C50()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8A0E18] - MEMORY[0x8A0E40]); /*0x4c1c62*/
  result = Math::RoundToInt(v0 * MEMORY[0x8A0E38] * 0.5); /*0x4c1c76*/
  MEMORY[0x8A0EB0] = result; /*0x4c1c7b*/
  return result; /*0x4c1c80*/
}
}
} // namespace gamemd

// 0x4C1C90
namespace gamemd {
void sub_4C1C90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C1C90()
{
  MEMORY[0x8A0E48] = Math::ArcTan((double)MEMORY[0x8A0EB0] * 0.00390625); /*0x4c1ca7*/
}
}
} // namespace gamemd

// 0x4C1CC0
namespace gamemd {
void sub_4C1CC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C1CC0()
{
  MEMORY[0x8A0E60] = Math::ArcTan((double)(2 * MEMORY[0x8A0EB0]) / MEMORY[0x8A0E38]); /*0x4c1ce2*/
}
}
} // namespace gamemd

// 0x4C1CF0
namespace gamemd {
long long sub_4C1CF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4C1CF0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8A0EB0]) + 0.5); /*0x4c1d0b*/
  MEMORY[0x8A0EA0] = result; /*0x4c1d10*/
  return result; /*0x4c1d16*/
}
}
} // namespace gamemd

// 0x4C1D20
namespace gamemd {
int sub_4C1D20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C1D20()
{
  MEMORY[0x8A0E30] = 0; /*0x4c1d22*/
  MEMORY[0x8A0E32] = 0; /*0x4c1d28*/
  return 0; /*0x4c1d2e*/
}
}
} // namespace gamemd

// 0x4C1D30
namespace gamemd {
int sub_4C1D30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C1D30()
{
  MEMORY[0x8A0E50] = 0; /*0x4c1d32*/
  MEMORY[0x8A0E54] = 0; /*0x4c1d37*/
  MEMORY[0x8A0E58] = 0; /*0x4c1d3c*/
  return 0; /*0x4c1d41*/
}
}
} // namespace gamemd

// 0x4C1D50
namespace gamemd {
int sub_4C1D50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C1D50()
{
  MEMORY[0x8A0E80] = 0; /*0x4c1d55*/
  MEMORY[0x8A0E78] = 128; /*0x4c1d5f*/
  MEMORY[0x8A0E7C] = 128; /*0x4c1d64*/
  return 128; /*0x4c1d69*/
}
}
} // namespace gamemd

// 0x4C1D70
namespace gamemd {
int sub_4C1D70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C1D70()
{
  MEMORY[0x8A0E20] = 0; /*0x4c1d72*/
  MEMORY[0x8A0E24] = 0; /*0x4c1d77*/
  MEMORY[0x8A0E28] = 0; /*0x4c1d7c*/
  MEMORY[0x8A0E2C] = 0; /*0x4c1d81*/
  return 0; /*0x4c1d86*/
}
}
} // namespace gamemd

// 0x4C1D90
namespace gamemd {
int sub_4C1D90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C1D90()
{
  MEMORY[0x8A0E8C] = 0; /*0x4c1d97*/
  MEMORY[0x8A0E90] = 0; /*0x4c1d9c*/
  MEMORY[0x8A0E94] = 1; /*0x4c1da1*/
  MEMORY[0x8A0E95] = 0; /*0x4c1da8*/
  MEMORY[0x8A0E88] = (int)&DynamicVectorClass<EBolt *>::`vftable'; /*0x4c1dad*/
  MEMORY[0x8A0E9C] = 10; /*0x4c1db7*/
  MEMORY[0x8A0E98] = 0; /*0x4c1dc1*/
  return atexit(sub_4C1DD0); /*0x4c1dcc*/
}
}
} // namespace gamemd

// 0x4C1DD0
namespace gamemd {
void sub_4C1DD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4C1DD0()
{
  MEMORY[0x8A0E88] = (int)&VectorClass<EBolt *>::`vftable'; /*0x4c1dd8*/
  if ( MEMORY[0x8A0E8C] && MEMORY[0x8A0E95] ) /*0x4c1dec*/
  {
    __3_YAXPAX_Z(MEMORY[0x8A0E8C]); /*0x4c1def*/
    MEMORY[0x8A0E8C] = 0; /*0x4c1df7*/
  }
  MEMORY[0x8A0E95] = 0; /*0x4c1dfd*/
  MEMORY[0x8A0E90] = 0; /*0x4c1e03*/
}
}
} // namespace gamemd

// 0x4C1E70
namespace gamemd {
int sub_4C1E70(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall sub_4C1E70(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // eax
  int v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v15[2]; // [esp+8h] [ebp-10h] BYREF
  int v16[2]; // [esp+10h] [ebp-8h] BYREF

  Coord::To_Screen(MEMORY[0x887324], &a1, v16); /*0x4c1e85*/
  Coord::To_Screen(MEMORY[0x887324], &a4, v15); /*0x4c1e9a*/
  v9 = ZCoordToScreenY(a3); /*0x4c1ea3*/
  v10 = a8 - v9 - 2; /*0x4c1eb2*/
  v11 = ZCoordToScreenY(a6); /*0x4c1eb5*/
  v12 = a9 - v11 - 2; /*0x4c1ec8*/
  if ( *(_DWORD *)(MEMORY[0x87F6C4] + 4) == 1 ) /*0x4c1ecf*/
    v13 = *(unsigned __int8 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + a7); /*0x4c1ee0*/
  else
    v13 = *(unsigned __int16 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + 2 * a7); /*0x4c1ef0*/
  return (*(int (__thiscall **)(int, int *, int *, int *, int, int, int, _DWORD))(*(_DWORD *)MEMORY[0x88731C] + 52))( /*0x4c1f13*/
           MEMORY[0x88731C],
           &MEMORY[0x886FA0],
           v16,
           v15,
           v13,
           v10,
           v12,
           0);
}
}
} // namespace gamemd

// 0x4C2790
namespace gamemd {
int E4Recv_4C2790::sub_4C2790()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4C2790(int this)
{
  int result; // eax
  int v3[2]; // [esp+8h] [ebp-10h] BYREF
  int v4[2]; // [esp+10h] [ebp-8h] BYREF

  if ( *(_DWORD *)(this + 40) )
  {
    Coord::To_Screen(*(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9432], (_DWORD *)this, (IUnknown *)v4); /*0x4c27aa*/
    Coord::To_Screen(*(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9432], (_DWORD *)(this + 12), (IUnknown *)v3); /*0x4c27be*/
    if ( ClipLine(v4, v3, (int *)&MEMORY[0x87F8E4].__pad_5568[8532]) )
      Lightning::Draw(
        (_DWORD *)this,
        *(_DWORD *)this,
        *(_DWORD *)(this + 4),
        *(_DWORD *)(this + 8),
        *(_DWORD *)(this + 12),
        this->M16,
        *(_DWORD *)(this + 20),
        (unsigned char)this->M44 != 0 ? 5 : 10);
    ++*(_DWORD *)(this + 28); /*0x4c281a*/
  }
  result = *(int *)(this + 40) >> 1; /*0x4c2821*/
  *(_DWORD *)(this + 40) = result; /*0x4c2823*/
  return result; /*0x4c2820*/
}
}
} // namespace gamemd

// 0x4C2830
namespace gamemd {
int sub_4C2830()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C2830()
{
  int result; // eax
  int *v1; // eax
  int v2; // ecx
  int *v3; // edx
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  _DWORD *v7; // esi
  int *v8; // ebx
  int *v9; // esi
  int v10; // eax
  int v11; // eax
  void *v12; // edx
  int v13; // ecx
  _DWORD *v14; // eax
  void *Block; // [esp+18h] [ebp-24h] BYREF
  int i; // [esp+1Ch] [ebp-20h]
  int v17[2]; // [esp+20h] [ebp-1Ch] BYREF
  int v18[2]; // [esp+28h] [ebp-14h] BYREF
  char v19[12]; // [esp+30h] [ebp-Ch] BYREF

  result = MEMORY[0x8A0E98] - 1; /*0x4c2839*/
  for ( i = MEMORY[0x8A0E98] - 1; i >= 0; --i ) /*0x4c2843*/
  {
    v1 = (int *)*((_DWORD *)MEMORY[0x8A0E8C] + result); /*0x4c284f*/
    Block = v1; /*0x4c2852*/
    v2 = v1[8]; /*0x4c2856*/
    if ( v2 ) /*0x4c285b*/
    {
      v3 = (int *)(*(int (__thiscall **)(int, char *, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v2 + 176))( /*0x4c2888*/
                    v2,
                    v19,
                    v1[9],
                    0,
                    0,
                    0);
      v4 = *v3; /*0x4c288a*/
      v5 = v3[1]; /*0x4c288e*/
      v6 = v3[2]; /*0x4c2891*/
      if ( v4 != MEMORY[0x8A0E50] || v5 != MEMORY[0x8A0E54] || v6 != MEMORY[0x8A0E58] ) /*0x4c28a4*/
      {
        v7 = Block; /*0x4c28a6*/
        *(_DWORD *)Block = v4; /*0x4c28aa*/
        v7[1] = v5; /*0x4c28ac*/
        v7[2] = v6; /*0x4c28af*/
      }
      v1 = (int *)Block; /*0x4c28b2*/
    }
    v8 = v1 + 10; /*0x4c28b9*/
    v9 = v1; /*0x4c28be*/
    if ( v1[10] ) /*0x4c28b6*/
    {
      Coord::To_Screen(MEMORY[0x887324], v1, v18); /*0x4c28ce*/
      Coord::To_Screen(MEMORY[0x887324], v9 + 3, v17); /*0x4c28e2*/
      if ( ClipLine(v18, v17, &MEMORY[0x886FA0]) ) /*0x4c28f4*/
      {
        v10 = -(*((_BYTE *)v9 + 44) != 0); /*0x4c2904*/
        LOBYTE(v10) = v10 & 0xFB; /*0x4c2906*/
        Lightning::Draw(v9, *v9, v9[1], v9[2], v9[3], v9[4], v9[5], v10 + 10); /*0x4c2938*/
      }
      ++v9[7]; /*0x4c293d*/
    }
    *v8 >>= 1; /*0x4c2944*/
    if ( !*((_DWORD *)Block + 10) ) /*0x4c294a*/
    {
      v11 = (*(int (__thiscall **)(int *, void **))(MEMORY[0x8A0E88] + 16))(&MEMORY[0x8A0E88], &Block); /*0x4c2960*/
      if ( v11 != -1 && v11 < MEMORY[0x8A0E98] && v11 < --MEMORY[0x8A0E98] ) /*0x4c297b*/
      {
        do /*0x4c2993*/
        {
          ++v11; /*0x4c2983*/
          *((_DWORD *)MEMORY[0x8A0E8C] + v11 - 1) = *((_DWORD *)MEMORY[0x8A0E8C] + v11); /*0x4c2987*/
        }
        while ( v11 < MEMORY[0x8A0E98] ); /*0x4c2993*/
      }
      v12 = Block; /*0x4c299b*/
      if ( Block ) /*0x4c299d*/
      {
        v13 = *((_DWORD *)Block + 8); /*0x4c299f*/
        v14 = (char *)Block + 32; /*0x4c29a2*/
        if ( v13 ) /*0x4c29a7*/
        {
          *(_DWORD *)(v13 + 1756) = 0; /*0x4c29a9*/
          *v14 = 0; /*0x4c29b3*/
        }
        __3_YAXPAX_Z(v12); /*0x4c29ba*/
      }
    }
    result = i - 1; /*0x4c29c6*/
  }
  return result; /*0x4c29d1*/
}
}
} // namespace gamemd

// 0x4C29E0
namespace gamemd {
void sub_4C29E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C29E0()
{
  int i; // esi
  _DWORD *v1; // eax
  int v2; // ecx

  for ( i = 0; i < MEMORY[0x8A0E98]; ++i ) /*0x4c29ed*/
  {
    v1 = (_DWORD *)*((_DWORD *)MEMORY[0x8A0E8C] + i); /*0x4c29f4*/
    if ( v1 ) /*0x4c29f9*/
    {
      v2 = v1[8]; /*0x4c29fb*/
      if ( v2 ) /*0x4c2a00*/
      {
        *(_DWORD *)(v2 + 1756) = 0; /*0x4c2a02*/
        v1[8] = 0; /*0x4c2a08*/
      }
      __3_YAXPAX_Z(v1); /*0x4c2a0c*/
    }
  }
  MEMORY[0x8A0E98] = 0; /*0x4c2a23*/
  if ( MEMORY[0x8A0E8C] && MEMORY[0x8A0E95] ) /*0x4c2a33*/
  {
    __3_YAXPAX_Z(MEMORY[0x8A0E8C]); /*0x4c2a36*/
    MEMORY[0x8A0E8C] = 0; /*0x4c2a3e*/
  }
  MEMORY[0x8A0E95] = 0; /*0x4c2a44*/
  MEMORY[0x8A0E90] = 0; /*0x4c2a4a*/
}
}
} // namespace gamemd

// 0x4C2B40
namespace gamemd {
unsigned int * E4Recv_4C2B40::sub_4C2B40(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_4C2B40(_DWORD *this, _DWORD *a2)
{
  int v2; // eax
  _DWORD *v3; // ecx
  _BYTE v5[12]; // [esp+10h] [ebp-Ch] BYREF

  v2 = *(this + 8); /*0x4c2b40*/
  if ( v2 ) /*0x4c2b4c*/
  {
    v3 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v2 + 176))( /*0x4c2b75*/
                     v2,
                     v5,
                     *(this + 9),
                     0,
                     0,
                     0);
    *a2 = *v3; /*0x4c2b7f*/
    a2[1] = v3[1]; /*0x4c2b84*/
    a2[2] = v3[2]; /*0x4c2b8a*/
    return a2; /*0x4c2b77*/
  }
  else
  {
    *a2 = MEMORY[0x8A0E50]; /*0x4c2ba6*/
    a2[1] = MEMORY[0x8A0E54]; /*0x4c2baf*/
    a2[2] = MEMORY[0x8A0E58]; /*0x4c2bb8*/
    return a2; /*0x4c2b97*/
  }
}
}
} // namespace gamemd

// 0x4C2C30
namespace gamemd {
Iostream_init * E4Recv_4C2C30::__0Iostream_init_QAE_XZ_3()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
Iostream_init *__thiscall __0Iostream_init_QAE_XZ_3(Iostream_init *this)
{
  return this; /*0x4c2c32*/
}
}
} // namespace gamemd

// 0x4C2FA0
namespace gamemd {
int sub_4C2FA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C2FA0()
{
  MEMORY[0x8A0EB8] = 0; /*0x4c2fa2*/
  MEMORY[0x8A0EBC] = 0; /*0x4c2fa7*/
  MEMORY[0x8A0EC0] = 0; /*0x4c2fac*/
  MEMORY[0x8A0EC4] = 0; /*0x4c2fb1*/
  return 0; /*0x4c2fb6*/
}
}
} // namespace gamemd

// 0x4C2FC0
namespace gamemd {
int sub_4C2FC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__thiscall sub_4C2FC0(
        int *this,
        DropListClass *aP1,
        ControlClass *aP2,
        int a4,
        DropListClass *aP4,
        ControlClass *aP5,
        ControlClass *aP6,
        ControlClass *aP7,
        int a9,
        int a10)
{
  DropListClass *v11; // eax
  AbstractClass *Instance; // eax
  int v13; // eax

  ControlClass::Construct(this, (ControlClass *)aP1, aP5, aP6, aP7, (ControlClass *)a9, 1, 0); /*0x4c2fe5*/
  v11 = aP4; /*0x4c2ff6*/
  BYTE1(v11) = BYTE1(aP4) & 0xFE; /*0x4c2ff8*/
  *(this + 11) = (int)v11; /*0x4c2ffc*/
  *this = (int)&EditClass::`vftable'; /*0x4c3004*/
  *(this + 12) = a10; /*0x4c300a*/
  *(this + 13) = (int)aP2; /*0x4c300d*/
  *(this + 14) = a4 - 1; /*0x4c3010*/
  *(this + 15) = wcslen((const wchar_t *)aP2); /*0x4c3018*/
  (*(void (__thiscall **)(int *))(*this + 72))(this); /*0x4c3022*/
  *(this + 16) = BuildingAnim::GetType(); /*0x4c302d*/
  if ( aP7 == (ControlClass *)-1 || a9 == -1 ) /*0x4c3035*/
  {
    Instance = TextRenderer::GetInstance(); /*0x4c3039*/
    if ( a9 == -1 ) /*0x4c3043*/
      *(this + 6) = Instance->referenceCount + 1; /*0x4c3049*/
    if ( aP7 == (ControlClass *)-1 ) /*0x4c304f*/
    {
      if ( wcslen((const wchar_t *)*(this + 13)) ) /*0x4c3055*/
      {
        v13 = Text::MeasureWidth(*(this + 13), 0); /*0x4c3069*/
        *(this + 17) = 0; /*0x4c3071*/
        *(this + 5) = v13 + 6; /*0x4c3078*/
        return this; /*0x4c3081*/
      }
      *(this + 5) = (*(this + 14) + 1) * Text::MeasureWidth((int)stru_820768, 0) + 2; /*0x4c309a*/
    }
  }
  *(this + 17) = 0; /*0x4c309d*/
  return this; /*0x4c307d*/
}
}
} // namespace gamemd

// 0x4C35A0
namespace gamemd {
void sub_4C35A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C35A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4c35ac*/
  MEMORY[0x8A0EE8] = Math::Sqrt(v0 + v0); /*0x4c35be*/
}
}
} // namespace gamemd

// 0x4C35D0
namespace gamemd {
void sub_4C35D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C35D0()
{
  MEMORY[0x8A0F38] = MEMORY[0x8A0EE8] / 60.0; /*0x4c35dc*/
}
}
} // namespace gamemd

// 0x4C35F0
namespace gamemd {
void sub_4C35F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C35F0()
{
  MEMORY[0x8A0F20] = 1.0 / MEMORY[0x8A0F38]; /*0x4c35fc*/
}
}
} // namespace gamemd

// 0x4C3610
namespace gamemd {
void sub_4C3610()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C3610()
{
  MEMORY[0x8A0F18] = 0.0174532925199433 * 45.0; /*0x4c361c*/
}
}
} // namespace gamemd

// 0x4C3630
namespace gamemd {
void sub_4C3630()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C3630()
{
  MEMORY[0x8A0EF0] = 0.0174532925199433 * 60.0; /*0x4c363c*/
}
}
} // namespace gamemd

// 0x4C3650
namespace gamemd {
void sub_4C3650()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C3650()
{
  MEMORY[0x8A0EC8] = 0.0174532925199433 * 90.0; /*0x4c365c*/
}
}
} // namespace gamemd

// 0x4C3670
namespace gamemd {
long long sub_4C3670()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4C3670()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8A0EC8] - MEMORY[0x8A0EF0]); /*0x4c3682*/
  result = Math::RoundToInt(v0 * MEMORY[0x8A0EE8] * 0.5); /*0x4c3696*/
  MEMORY[0x8A0F40] = result; /*0x4c369b*/
  return result; /*0x4c36a0*/
}
}
} // namespace gamemd

// 0x4C36B0
namespace gamemd {
void sub_4C36B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C36B0()
{
  MEMORY[0x8A0EF8] = Math::ArcTan((double)MEMORY[0x8A0F40] * 0.00390625); /*0x4c36c7*/
}
}
} // namespace gamemd

// 0x4C36E0
namespace gamemd {
void sub_4C36E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C36E0()
{
  MEMORY[0x8A0F10] = Math::ArcTan((double)(2 * MEMORY[0x8A0F40]) / MEMORY[0x8A0EE8]); /*0x4c3702*/
}
}
} // namespace gamemd

// 0x4C3710
namespace gamemd {
long long sub_4C3710()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4C3710()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8A0F40]) + 0.5); /*0x4c372b*/
  MEMORY[0x8A0F34] = result; /*0x4c3730*/
  return result; /*0x4c3736*/
}
}
} // namespace gamemd

// 0x4C3740
namespace gamemd {
int sub_4C3740()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C3740()
{
  MEMORY[0x8A0EE0] = 0; /*0x4c3742*/
  MEMORY[0x8A0EE2] = 0; /*0x4c3748*/
  return 0; /*0x4c374e*/
}
}
} // namespace gamemd

// 0x4C3750
namespace gamemd {
int sub_4C3750()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C3750()
{
  MEMORY[0x8A0F00] = 0; /*0x4c3752*/
  MEMORY[0x8A0F04] = 0; /*0x4c3757*/
  MEMORY[0x8A0F08] = 0; /*0x4c375c*/
  return 0; /*0x4c3761*/
}
}
} // namespace gamemd

// 0x4C3770
namespace gamemd {
int sub_4C3770()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C3770()
{
  MEMORY[0x8A0F30] = 0; /*0x4c3775*/
  MEMORY[0x8A0F28] = 128; /*0x4c377f*/
  MEMORY[0x8A0F2C] = 128; /*0x4c3784*/
  return 128; /*0x4c3789*/
}
}
} // namespace gamemd

// 0x4C3790
namespace gamemd {
int sub_4C3790()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C3790()
{
  MEMORY[0x8A0ED0] = 0; /*0x4c3792*/
  MEMORY[0x8A0ED4] = 0; /*0x4c3797*/
  MEMORY[0x8A0ED8] = 0; /*0x4c379c*/
  MEMORY[0x8A0EDC] = 0; /*0x4c37a1*/
  return 0; /*0x4c37a6*/
}
}
} // namespace gamemd

// 0x4C37B0
namespace gamemd {
int sub_4C37B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C37B0()
{
  MEMORY[0x8A0F48] = 0; /*0x4c37b2*/
  MEMORY[0x8A0F4C] = 0; /*0x4c37b7*/
  MEMORY[0x8A0F50] = 0; /*0x4c37bc*/
  MEMORY[0x8A0F54] = 0; /*0x4c37c1*/
  return 0; /*0x4c37c6*/
}
}
} // namespace gamemd

// 0x4C37D0
namespace gamemd {
unsigned char * sub_4C37D0(int a1, unsigned char * a2, int a3, unsigned char a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_BYTE *__fastcall sub_4C37D0(int a1, _BYTE *a2, int a3, unsigned __int8 a4)
{
  int v5; // eax
  int v6; // eax
  int v7; // ebx
  int v8; // ebp
  int i; // esi
  int v10; // eax
  _BYTE *v12; // [esp+4h] [ebp-10h]
  __int16 v13; // [esp+8h] [ebp-Ch] BYREF
  char v14; // [esp+Ah] [ebp-Ah]
  int v15; // [esp+Ch] [ebp-8h]
  _BYTE *v16; // [esp+10h] [ebp-4h]

  v16 = a2; /*0x4c37d4*/
  if ( !a2 ) /*0x4c37dc*/
    return 0; /*0x4c38c7*/
  v5 = 0; /*0x4c37e3*/
  v12 = a2; /*0x4c37e7*/
  v15 = 0; /*0x4c37eb*/
  do /*0x4c38b5*/
  {
    if ( v5 <= 240 && v5 ) /*0x4c37fc*/
    {
      v6 = a1 + 2 * (v5 % 256) + v5 % 256; /*0x4c3813*/
      v13 = *(_WORD *)v6; /*0x4c3818*/
      v14 = *(_BYTE *)(v6 + 2); /*0x4c3820*/
      Color::Lerp((unsigned __int8 *)&v13, a4, (unsigned __int8 *)(a1 + 2 * (a3 % 256) + a3 % 256)); /*0x4c3845*/
      v7 = -1; /*0x4c384a*/
      v8 = 0; /*0x4c384d*/
      for ( i = 240; i < 255; ++i ) /*0x4c384f*/
      {
        v10 = Palette::CalcColorDistance((unsigned __int8 *)(a1 + 2 * (i % 256) + i % 256), (unsigned __int8 *)&v13); /*0x4c3870*/
        if ( v7 == -1 || v10 < v8 ) /*0x4c387c*/
        {
          v7 = i; /*0x4c387e*/
          v8 = v10; /*0x4c3880*/
        }
      }
      a2 = v16; /*0x4c388f*/
      *v12++ = v7; /*0x4c3893*/
      v5 = v15; /*0x4c389a*/
    }
    else
    {
      *v12++ = v5; /*0x4c38a4*/
    }
    v15 = ++v5; /*0x4c38b1*/
  }
  while ( v5 < 256 ); /*0x4c38b5*/
  return a2; /*0x4c38c0*/
}
}
} // namespace gamemd

// 0x4C38D0
namespace gamemd {
int E4Recv_4C38D0::sub_4C38D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4C38D0(void *this)
{
  return ((_DWORD)this + 1) << 8; /*0x4c38d6*/
}
}
} // namespace gamemd

// 0x4C38E0
namespace gamemd {
char * sub_4C38E0(char * a1, int a2, int a3, char * a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__fastcall sub_4C38E0(char *a1, int a2, int a3, char *a4)
{
  char *v5; // edx
  char *v6; // eax
  _BYTE *v7; // ebp
  unsigned __int8 *v8; // edi
  int v9; // eax
  int v10; // esi
  char *v11; // eax
  int v12; // eax
  __int16 v14; // [esp+10h] [ebp-10h] BYREF
  char v15; // [esp+12h] [ebp-Eh]
  int v16; // [esp+14h] [ebp-Ch] BYREF
  int v17; // [esp+18h] [ebp-8h]
  int v18; // [esp+1Ch] [ebp-4h]

  v16 = a2; /*0x4c38ed*/
  if ( !a3 || !a2 ) /*0x4c38fb*/
    return a4; /*0x4c38fb*/
  v5 = a4; /*0x4c3901*/
  if ( a4 ) /*0x4c3907*/
    goto LABEL_6; /*0x4c3907*/
  v6 = (char *)__2_YAPAXI_Z((a3 + 1) << 8); /*0x4c3910*/
  a4 = v6; /*0x4c3918*/
  if ( !v6 ) /*0x4c391e*/
    return a4; /*0x4c3a11*/
  v5 = v6; /*0x4c3924*/
LABEL_6:
  v7 = v5 + 256; /*0x4c3926*/
  memset(v5, 0xFFu, 0x100u); /*0x4c3938*/
  v17 = 0; /*0x4c393a*/
  if ( a3 > 0 ) /*0x4c3942*/
  {
    v8 = (unsigned __int8 *)(v16 + 1); /*0x4c394c*/
    while ( 1 ) /*0x4c395b*/
    {
      v5[*(v8 - 1)] = v17; /*0x4c395e*/
      v9 = *v8; /*0x4c396a*/
      v18 = v8[1]; /*0x4c396f*/
      v10 = 1; /*0x4c397f*/
      v11 = &a1[2 * v9 + v9]; /*0x4c3984*/
      v14 = *(_WORD *)v11; /*0x4c3989*/
      LOBYTE(v11) = v11[2]; /*0x4c398e*/
      *v7 = 0; /*0x4c3991*/
      v15 = (char)v11; /*0x4c3995*/
      do /*0x4c39e6*/
      {
        v12 = (int)&a1[2 * (v10 % 256) + v10 % 256]; /*0x4c39ac*/
        LOWORD(v16) = *(_WORD *)v12; /*0x4c39ba*/
        BYTE2(v16) = *(_BYTE *)(v12 + 2); /*0x4c39c7*/
        Color::Lerp((unsigned __int8 *)&v16, v18, (unsigned __int8 *)&v14); /*0x4c39cb*/
        v7[v10++] = Palette::FindClosestColor(a1, (int)&v16); /*0x4c39dc*/
      }
      while ( v10 < 256 ); /*0x4c39e6*/
      v7 += 256; /*0x4c39f0*/
      v8 += 4; /*0x4c39f7*/
      if ( ++v17 >= a3 ) /*0x4c3a00*/
        break; /*0x4c3a00*/
      v5 = a4; /*0x4c3951*/
    }
    return a4; /*0x4c3a00*/
  }
  return v5; /*0x4c3a0a*/
}
}
} // namespace gamemd

// 0x4C3A20
namespace gamemd {
char * sub_4C3A20(int a1, int a2, int a3, char * a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__fastcall sub_4C3A20(int a1, int a2, int a3, char *a4)
{
  char *v4; // ebp
  int v5; // ebx
  _BYTE *v6; // edi
  unsigned __int8 *v7; // esi

  if ( !a3 || !a2 ) /*0x4c3a39*/
    return a4; /*0x4c3ab3*/
  v4 = a4; /*0x4c3a3b*/
  if ( a4 || (v4 = (char *)__2_YAPAXI_Z((a3 + 1) << 8)) != 0 ) /*0x4c3a56*/
  {
    v5 = 0; /*0x4c3a62*/
    memset(v4, 0xFFu, 0x100u); /*0x4c3a64*/
    v6 = v4 + 256; /*0x4c3a68*/
    if ( a3 > 0 ) /*0x4c3a6e*/
    {
      v7 = (unsigned __int8 *)(a2 + 1); /*0x4c3a74*/
      do /*0x4c3aa5*/
      {
        v4[*(v7 - 1)] = v5; /*0x4c3a80*/
        sub_4C37D0(a1, v6, *v7, v7[1]); /*0x4c3a90*/
        v6 += 256; /*0x4c3a95*/
        ++v5; /*0x4c3a9b*/
        v7 += 4; /*0x4c3aa0*/
      }
      while ( v5 < a3 ); /*0x4c3aa5*/
    }
  }
  return v4; /*0x4c3aa7*/
}
}
} // namespace gamemd

// 0x4C3AD0
namespace gamemd {
int sub_4C3AD0(char * a1, int a2, int a3, unsigned char a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_4C3AD0(char *a1, int a2, int a3, unsigned __int8 a4)
{
  int v6; // esi
  unsigned __int8 *v7; // ebp
  int v8; // eax

  if ( !a2 ) /*0x4c3ad8*/
    return 0; /*0x4c3b4a*/
  v6 = 0; /*0x4c3ae0*/
  v7 = (unsigned __int8 *)&a1[2 * (a3 % 256) + a3 % 256]; /*0x4c3af3*/
  do /*0x4c3b3f*/
  {
    v8 = (int)&a1[2 * (v6 % 256) + v6 % 256]; /*0x4c3b0a*/
    LOWORD(a3) = *(_WORD *)v8; /*0x4c3b0f*/
    BYTE2(a3) = *(_BYTE *)(v8 + 2); /*0x4c3b20*/
    Color::Lerp((unsigned __int8 *)&a3, a4, v7); /*0x4c3b24*/
    *(_BYTE *)(v6 + a2) = Palette::FindClosestColor(a1, (int)&a3); /*0x4c3b35*/
    ++v6; /*0x4c3b38*/
  }
  while ( v6 < 256 ); /*0x4c3b3f*/
  return a2; /*0x4c3b45*/
}
}
} // namespace gamemd

// 0x4C3B60
namespace gamemd {
unsigned char * sub_4C3B60(char * a1, unsigned char * a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_BYTE *__fastcall sub_4C3B60(char *a1, _BYTE *a2, int a3, int a4)
{
  unsigned __int8 v6; // bp
  int v7; // eax
  int v8; // esi
  int v9; // eax

  v6 = a4; /*0x4c3b7d*/
  v7 = (int)&a1[2 * (a3 % 256) + a3 % 256]; /*0x4c3b81*/
  v8 = 1; /*0x4c3b83*/
  LOWORD(a3) = *(_WORD *)v7; /*0x4c3b8b*/
  LOBYTE(v7) = *(_BYTE *)(v7 + 2); /*0x4c3b90*/
  *a2 = 0; /*0x4c3b93*/
  BYTE2(a3) = v7; /*0x4c3b96*/
  do /*0x4c3be3*/
  {
    v9 = (int)&a1[2 * (v8 % 256) + v8 % 256]; /*0x4c3bad*/
    LOWORD(a4) = *(_WORD *)v9; /*0x4c3bbc*/
    BYTE2(a4) = *(_BYTE *)(v9 + 2); /*0x4c3bc4*/
    Color::Lerp((unsigned __int8 *)&a4, v6, (unsigned __int8 *)&a3); /*0x4c3bc8*/
    a2[v8++] = Palette::FindClosestColor(a1, (int)&a4); /*0x4c3bd9*/
  }
  while ( v8 < 256 ); /*0x4c3be3*/
  return a2; /*0x4c3be5*/
}
}
} // namespace gamemd

// 0x4C3BF0
namespace gamemd {
int sub_4C3BF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C3BF0()
{
  MEMORY[0x8A3760] = 0; /*0x4c3bf2*/
  MEMORY[0x8A3764] = 0; /*0x4c3bf7*/
  MEMORY[0x8A3768] = 0; /*0x4c3bfc*/
  MEMORY[0x8A376C] = 0; /*0x4c3c01*/
  return 0; /*0x4c3c06*/
}
}
} // namespace gamemd

// 0x4C3C10
namespace gamemd {
int sub_4C3C10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C3C10()
{
  MEMORY[0x8A3774] = 0; /*0x4c3c17*/
  MEMORY[0x8A3778] = 0; /*0x4c3c1c*/
  MEMORY[0x8A377C] = 1; /*0x4c3c21*/
  MEMORY[0x8A377D] = 0; /*0x4c3c28*/
  MEMORY[0x8A3770] = (int)&DynamicVectorClass<EgoClass *>::`vftable'; /*0x4c3c2d*/
  MEMORY[0x8A3784] = 10; /*0x4c3c37*/
  MEMORY[0x8A3780] = 0; /*0x4c3c41*/
  return atexit(sub_4C3C50); /*0x4c3c4c*/
}
}
} // namespace gamemd

// 0x4C3C50
namespace gamemd {
void sub_4C3C50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4C3C50()
{
  MEMORY[0x8A3770] = (int)&VectorClass<EgoClass *>::`vftable'; /*0x4c3c58*/
  if ( MEMORY[0x8A3774] && MEMORY[0x8A377D] ) /*0x4c3c6c*/
  {
    __3_YAXPAX_Z(MEMORY[0x8A3774]); /*0x4c3c6f*/
    MEMORY[0x8A3774] = 0; /*0x4c3c77*/
  }
  MEMORY[0x8A377D] = 0; /*0x4c3c7d*/
  MEMORY[0x8A3778] = 0; /*0x4c3c83*/
}
}
} // namespace gamemd

// 0x4C3C90
namespace gamemd {
wchar_t ** E4Recv_4C3C90::sub_4C3C90(wchar_t * a2, wchar_t * a3, wchar_t * String, wchar_t * a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t **__thiscall sub_4C3C90(wchar_t **this, wchar_t *a2, wchar_t *a3, wchar_t *String, wchar_t *a5)
{
  size_t v6; // eax
  wchar_t *v7; // eax

  *(this + 1) = a2; /*0x4c3ca5*/
  *(this + 2) = a3; /*0x4c3ca8*/
  *(this + 3) = a5; /*0x4c3cab*/
  v6 = wcslen(String); /*0x4c3cae*/
  v7 = (wchar_t *)__2_YAPAXI_Z(2 * v6 + 2); /*0x4c3cb8*/
  *this = v7; /*0x4c3cbf*/
  wcscpy(v7, String); /*0x4c3cc1*/
  return this; /*0x4c3ccb*/
}
}
} // namespace gamemd

// 0x4C3DD0
namespace gamemd {
int E4Recv_4C3DD0::sub_4C3DD0(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4C3DD0(int *this, int a2)
{
  int v3; // edx
  _DWORD v5[4]; // [esp+4h] [ebp-10h] BYREF

  TextRenderer::GetInstance(); /*0x4c3dd9*/
  Text::MeasureWidth(*this, 0); /*0x4c3de5*/
  v3 = *(this + 2); /*0x4c3def*/
  v5[2] = MEMORY[0x8A00A4]; /*0x4c3df8*/
  v5[0] = 0; /*0x4c3e09*/
  v5[1] = v3; /*0x4c3e12*/
  v5[3] = 18; /*0x4c3e16*/
  return (*(int (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(*(_DWORD *)MEMORY[0x887314] + 8))( /*0x4c3e28*/
           MEMORY[0x887314],
           v5,
           a2,
           v5,
           0,
           1);
}
}
} // namespace gamemd

// 0x4C4D00
namespace gamemd {
void sub_4C4D00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C4D00()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4c4d0c*/
  MEMORY[0x8A3798] = Math::Sqrt(v0 + v0); /*0x4c4d1e*/
}
}
} // namespace gamemd

// 0x4C4D30
namespace gamemd {
void sub_4C4D30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C4D30()
{
  MEMORY[0x8A3808] = MEMORY[0x8A3798] / 60.0; /*0x4c4d3c*/
}
}
} // namespace gamemd

// 0x4C4D50
namespace gamemd {
void sub_4C4D50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C4D50()
{
  MEMORY[0x8A37F0] = 1.0 / MEMORY[0x8A3808]; /*0x4c4d5c*/
}
}
} // namespace gamemd

// 0x4C4D70
namespace gamemd {
void sub_4C4D70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C4D70()
{
  MEMORY[0x8A37E8] = 0.0174532925199433 * 45.0; /*0x4c4d7c*/
}
}
} // namespace gamemd

// 0x4C4D90
namespace gamemd {
void sub_4C4D90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C4D90()
{
  MEMORY[0x8A37C0] = 0.0174532925199433 * 60.0; /*0x4c4d9c*/
}
}
} // namespace gamemd

// 0x4C4DB0
namespace gamemd {
void sub_4C4DB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C4DB0()
{
  MEMORY[0x8A3788] = 0.0174532925199433 * 90.0; /*0x4c4dbc*/
}
}
} // namespace gamemd

// 0x4C4DD0
namespace gamemd {
long long sub_4C4DD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4C4DD0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8A3788] - MEMORY[0x8A37C0]); /*0x4c4de2*/
  result = Math::RoundToInt(v0 * MEMORY[0x8A3798] * 0.5); /*0x4c4df6*/
  MEMORY[0x8A3810] = result; /*0x4c4dfb*/
  return result; /*0x4c4e00*/
}
}
} // namespace gamemd

// 0x4C4E10
namespace gamemd {
void sub_4C4E10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C4E10()
{
  MEMORY[0x8A37C8] = Math::ArcTan((double)MEMORY[0x8A3810] * 0.00390625); /*0x4c4e27*/
}
}
} // namespace gamemd

// 0x4C4E40
namespace gamemd {
void sub_4C4E40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C4E40()
{
  MEMORY[0x8A37E0] = Math::ArcTan((double)(2 * MEMORY[0x8A3810]) / MEMORY[0x8A3798]); /*0x4c4e62*/
}
}
} // namespace gamemd

// 0x4C4E70
namespace gamemd {
long long sub_4C4E70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4C4E70()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8A3810]) + 0.5); /*0x4c4e8b*/
  MEMORY[0x8A3804] = result; /*0x4c4e90*/
  return result; /*0x4c4e96*/
}
}
} // namespace gamemd

// 0x4C4EA0
namespace gamemd {
int sub_4C4EA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C4EA0()
{
  MEMORY[0x8A3790] = 0; /*0x4c4ea2*/
  MEMORY[0x8A3792] = 0; /*0x4c4ea8*/
  return 0; /*0x4c4eae*/
}
}
} // namespace gamemd

// 0x4C4EB0
namespace gamemd {
int sub_4C4EB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C4EB0()
{
  MEMORY[0x8A37D0] = 0; /*0x4c4eb2*/
  MEMORY[0x8A37D4] = 0; /*0x4c4eb7*/
  MEMORY[0x8A37D8] = 0; /*0x4c4ebc*/
  return 0; /*0x4c4ec1*/
}
}
} // namespace gamemd

// 0x4C4ED0
namespace gamemd {
int sub_4C4ED0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C4ED0()
{
  MEMORY[0x8A3800] = 0; /*0x4c4ed5*/
  MEMORY[0x8A37F8] = 128; /*0x4c4edf*/
  MEMORY[0x8A37FC] = 128; /*0x4c4ee4*/
  return 128; /*0x4c4ee9*/
}
}
} // namespace gamemd

// 0x4C4FC0
namespace gamemd {
int E4Recv_4C4FC0::sub_4C4FC0(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4C4FC0(int *this, int a2)
{
  int result; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // eax

  result = Power::TimerProcess(*this); /*0x4c4fcd*/
  v4 = *(this + 1); /*0x4c4fd2*/
  if ( v4 ) /*0x4c4fd7*/
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4); /*0x4c4fdb*/
    Power::TimerProcess(v5); /*0x4c4fe1*/
    v6 = (*(int (__stdcall **)(int))(*(_DWORD *)(*(this + 1) + 4) + 16))(*(this + 1) + 4); /*0x4c4ff0*/
    return Power::TimerProcess(v6); /*0x4c4ff6*/
  }
  return result; /*0x4c4ffb*/
}
}
} // namespace gamemd

// 0x4C5000
namespace gamemd {
void sub_4C5000()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C5000()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4c500c*/
  MEMORY[0x8A3840] = Math::Sqrt(v0 + v0); /*0x4c501e*/
}
}
} // namespace gamemd

// 0x4C5030
namespace gamemd {
void sub_4C5030()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C5030()
{
  MEMORY[0x8A38A8] = MEMORY[0x8A3840] / 60.0; /*0x4c503c*/
}
}
} // namespace gamemd

// 0x4C5050
namespace gamemd {
void sub_4C5050()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C5050()
{
  MEMORY[0x8A3890] = 1.0 / MEMORY[0x8A38A8]; /*0x4c505c*/
}
}
} // namespace gamemd

// 0x4C5070
namespace gamemd {
void sub_4C5070()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C5070()
{
  MEMORY[0x8A3888] = 0.0174532925199433 * 45.0; /*0x4c507c*/
}
}
} // namespace gamemd

// 0x4C5090
namespace gamemd {
void sub_4C5090()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C5090()
{
  MEMORY[0x8A3848] = 0.0174532925199433 * 60.0; /*0x4c509c*/
}
}
} // namespace gamemd

// 0x4C50B0
namespace gamemd {
void sub_4C50B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C50B0()
{
  MEMORY[0x8A3820] = 0.0174532925199433 * 90.0; /*0x4c50bc*/
}
}
} // namespace gamemd

// 0x4C50D0
namespace gamemd {
long long sub_4C50D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4C50D0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8A3820] - MEMORY[0x8A3848]); /*0x4c50e2*/
  result = Math::RoundToInt(v0 * MEMORY[0x8A3840] * 0.5); /*0x4c50f6*/
  MEMORY[0x8A38B0] = result; /*0x4c50fb*/
  return result; /*0x4c5100*/
}
}
} // namespace gamemd

// 0x4C5110
namespace gamemd {
void sub_4C5110()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C5110()
{
  MEMORY[0x8A3850] = Math::ArcTan((double)MEMORY[0x8A38B0] * 0.00390625); /*0x4c5127*/
}
}
} // namespace gamemd

// 0x4C5140
namespace gamemd {
void sub_4C5140()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C5140()
{
  MEMORY[0x8A3868] = Math::ArcTan((double)(2 * MEMORY[0x8A38B0]) / MEMORY[0x8A3840]); /*0x4c5162*/
}
}
} // namespace gamemd

// 0x4C5170
namespace gamemd {
long long sub_4C5170()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4C5170()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8A38B0]) + 0.5); /*0x4c518b*/
  MEMORY[0x8A38A4] = result; /*0x4c5190*/
  return result; /*0x4c5196*/
}
}
} // namespace gamemd

// 0x4C51A0
namespace gamemd {
int sub_4C51A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C51A0()
{
  MEMORY[0x8A3838] = 0; /*0x4c51a2*/
  return 0; /*0x4c51ae*/
}
}
} // namespace gamemd

// 0x4C51B0
namespace gamemd {
int sub_4C51B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C51B0()
{
  MEMORY[0x8A3858] = 0; /*0x4c51b2*/
  MEMORY[0x8A385C] = 0; /*0x4c51b7*/
  MEMORY[0x8A3860] = 0; /*0x4c51bc*/
  return 0; /*0x4c51c1*/
}
}
} // namespace gamemd

// 0x4C51D0
namespace gamemd {
int sub_4C51D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C51D0()
{
  MEMORY[0x8A38A0] = 0; /*0x4c51d5*/
  MEMORY[0x8A3898] = 128; /*0x4c51df*/
  MEMORY[0x8A389C] = 128; /*0x4c51e4*/
  return 128; /*0x4c51e9*/
}
}
} // namespace gamemd

// 0x4C51F0
namespace gamemd {
int sub_4C51F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C51F0()
{
  MEMORY[0x8A3828] = 0; /*0x4c51f2*/
  MEMORY[0x8A382C] = 0; /*0x4c51f7*/
  MEMORY[0x8A3830] = 0; /*0x4c51fc*/
  MEMORY[0x8A3834] = 0; /*0x4c5201*/
  return 0; /*0x4c5206*/
}
}
} // namespace gamemd

// 0x4C5210
namespace gamemd {
int sub_4C5210()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C5210()
{
  MEMORY[0x8A3874] = 0; /*0x4c5217*/
  MEMORY[0x8A3878] = 0; /*0x4c521c*/
  MEMORY[0x8A387C] = 1; /*0x4c5221*/
  MEMORY[0x8A387D] = 0; /*0x4c5228*/
  MEMORY[0x8A3870] = (int)&DynamicVectorClass<EMPulseClass *>::`vftable'; /*0x4c522d*/
  MEMORY[0x8A3884] = 10; /*0x4c5237*/
  MEMORY[0x8A3880] = 0; /*0x4c5241*/
  return atexit(sub_4C5250); /*0x4c524c*/
}
}
} // namespace gamemd

// 0x4C5250
namespace gamemd {
void sub_4C5250()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4C5250()
{
  if ( (MEMORY[0x8A3818] & 1) == 0 ) /*0x4c525a*/
  {
    MEMORY[0x8A3870] = (int)&VectorClass<EMPulseClass *>::`vftable'; /*0x4c525e*/
    MEMORY[0x8A3818] |= 1u; /*0x4c5271*/
    if ( MEMORY[0x8A3874] ) /*0x4c5277*/
    {
      if ( MEMORY[0x8A387D] ) /*0x4c5281*/
      {
        __3_YAXPAX_Z(MEMORY[0x8A3874]); /*0x4c5284*/
        MEMORY[0x8A3874] = 0; /*0x4c528c*/
      }
    }
    MEMORY[0x8A387D] = 0; /*0x4c5296*/
    MEMORY[0x8A3878] = 0; /*0x4c529d*/
  }
}
}
} // namespace gamemd

// 0x4C5470
namespace gamemd {
int sub_4C5470()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C5470()
{
  int result; // eax

  for ( result = MEMORY[0x8A3880]; MEMORY[0x8A3880]; result = MEMORY[0x8A3880] ) /*0x4c5477*/
  {
    if ( *(_DWORD *)MEMORY[0x8A3874] ) /*0x4c547e*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0x8A3874] + 32))(*(_DWORD *)MEMORY[0x8A3874], 1); /*0x4c5488*/
  }
  return result; /*0x4c5494*/
}
}
} // namespace gamemd

// 0x4C5EE0
namespace gamemd {
void sub_4C5EE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C5EE0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4c5eec*/
  MEMORY[0x8A38D8] = Math::Sqrt(v0 + v0); /*0x4c5efe*/
}
}
} // namespace gamemd

// 0x4C5F10
namespace gamemd {
void sub_4C5F10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C5F10()
{
  MEMORY[0x8A3970] = MEMORY[0x8A38D8] / 60.0; /*0x4c5f1c*/
}
}
} // namespace gamemd

// 0x4C5F30
namespace gamemd {
void sub_4C5F30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C5F30()
{
  MEMORY[0x8A3958] = 1.0 / MEMORY[0x8A3970]; /*0x4c5f3c*/
}
}
} // namespace gamemd

// 0x4C5F50
namespace gamemd {
void sub_4C5F50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C5F50()
{
  MEMORY[0x8A3950] = 0.0174532925199433 * 45.0; /*0x4c5f5c*/
}
}
} // namespace gamemd

// 0x4C5F70
namespace gamemd {
void sub_4C5F70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C5F70()
{
  MEMORY[0x8A3928] = 0.0174532925199433 * 60.0; /*0x4c5f7c*/
}
}
} // namespace gamemd

// 0x4C5F90
namespace gamemd {
void sub_4C5F90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C5F90()
{
  MEMORY[0x8A38B8] = 0.0174532925199433 * 90.0; /*0x4c5f9c*/
}
}
} // namespace gamemd

// 0x4C5FB0
namespace gamemd {
long long sub_4C5FB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4C5FB0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8A38B8] - MEMORY[0x8A3928]); /*0x4c5fc2*/
  result = Math::RoundToInt(v0 * MEMORY[0x8A38D8] * 0.5); /*0x4c5fd6*/
  MEMORY[0x8A3978] = result; /*0x4c5fdb*/
  return result; /*0x4c5fe0*/
}
}
} // namespace gamemd

// 0x4C5FF0
namespace gamemd {
void sub_4C5FF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C5FF0()
{
  MEMORY[0x8A3930] = Math::ArcTan((double)MEMORY[0x8A3978] * 0.00390625); /*0x4c6007*/
}
}
} // namespace gamemd

// 0x4C6020
namespace gamemd {
void sub_4C6020()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C6020()
{
  MEMORY[0x8A3948] = Math::ArcTan((double)(2 * MEMORY[0x8A3978]) / MEMORY[0x8A38D8]); /*0x4c6042*/
}
}
} // namespace gamemd

// 0x4C6050
namespace gamemd {
long long sub_4C6050()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4C6050()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8A3978]) + 0.5); /*0x4c606b*/
  MEMORY[0x8A396C] = result; /*0x4c6070*/
  return result; /*0x4c6076*/
}
}
} // namespace gamemd

// 0x4C6080
namespace gamemd {
int sub_4C6080()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C6080()
{
  MEMORY[0x8A38D0] = 0; /*0x4c6082*/
  MEMORY[0x8A38D2] = 0; /*0x4c6088*/
  return 0; /*0x4c608e*/
}
}
} // namespace gamemd

// 0x4C6090
namespace gamemd {
int sub_4C6090()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C6090()
{
  MEMORY[0x8A3938] = 0; /*0x4c6092*/
  MEMORY[0x8A393C] = 0; /*0x4c6097*/
  MEMORY[0x8A3940] = 0; /*0x4c609c*/
  return 0; /*0x4c60a1*/
}
}
} // namespace gamemd

// 0x4C60B0
namespace gamemd {
int sub_4C60B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C60B0()
{
  MEMORY[0x8A3968] = 0; /*0x4c60b5*/
  MEMORY[0x8A3960] = 128; /*0x4c60bf*/
  MEMORY[0x8A3964] = 128; /*0x4c60c4*/
  return 128; /*0x4c60c9*/
}
}
} // namespace gamemd

// 0x4C60D0
namespace gamemd {
int sub_4C60D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C60D0()
{
  MEMORY[0x8A38C0] = 0; /*0x4c60d2*/
  MEMORY[0x8A38C4] = 0; /*0x4c60d7*/
  MEMORY[0x8A38C8] = 0; /*0x4c60dc*/
  MEMORY[0x8A38CC] = 0; /*0x4c60e1*/
  return 0; /*0x4c60e6*/
}
}
} // namespace gamemd

// 0x4C60F0
namespace gamemd {
int sub_4C60F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C60F0()
{
  MEMORY[0x8A3914] = 0; /*0x4c60fd*/
  MEMORY[0x8A3918] = 0; /*0x4c6102*/
  MEMORY[0x8A391C] = 1; /*0x4c6107*/
  MEMORY[0x8A3920] = 0; /*0x4c6111*/
  memset(&MEMORY[0x8A38E0], 0, 0x30u); /*0x4c6117*/
  MEMORY[0x8A3910] = 0; /*0x4c611e*/
  return atexit(nullsub_129); /*0x4c6128*/
}
}
} // namespace gamemd

// 0x4C6360
namespace gamemd {
void sub_4C6360()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C6360()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4c636c*/
  MEMORY[0x8A39A0] = Math::Sqrt(v0 + v0); /*0x4c637e*/
}
}
} // namespace gamemd

// 0x4C6390
namespace gamemd {
void sub_4C6390()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C6390()
{
  MEMORY[0x8A39F0] = MEMORY[0x8A39A0] / 60.0; /*0x4c639c*/
}
}
} // namespace gamemd

// 0x4C63B0
namespace gamemd {
void sub_4C63B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C63B0()
{
  MEMORY[0x8A39D8] = 1.0 / MEMORY[0x8A39F0]; /*0x4c63bc*/
}
}
} // namespace gamemd

// 0x4C63D0
namespace gamemd {
void sub_4C63D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C63D0()
{
  MEMORY[0x8A39D0] = 0.0174532925199433 * 45.0; /*0x4c63dc*/
}
}
} // namespace gamemd

// 0x4C63F0
namespace gamemd {
void sub_4C63F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C63F0()
{
  MEMORY[0x8A39A8] = 0.0174532925199433 * 60.0; /*0x4c63fc*/
}
}
} // namespace gamemd

// 0x4C6410
namespace gamemd {
void sub_4C6410()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C6410()
{
  MEMORY[0x8A3980] = 0.0174532925199433 * 90.0; /*0x4c641c*/
}
}
} // namespace gamemd

// 0x4C6430
namespace gamemd {
long long sub_4C6430()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4C6430()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8A3980] - MEMORY[0x8A39A8]); /*0x4c6442*/
  result = Math::RoundToInt(v0 * MEMORY[0x8A39A0] * 0.5); /*0x4c6456*/
  MEMORY[0x8A39F8] = result; /*0x4c645b*/
  return result; /*0x4c6460*/
}
}
} // namespace gamemd

// 0x4C6470
namespace gamemd {
void sub_4C6470()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C6470()
{
  MEMORY[0x8A39B0] = Math::ArcTan((double)MEMORY[0x8A39F8] * 0.00390625); /*0x4c6487*/
}
}
} // namespace gamemd

// 0x4C64A0
namespace gamemd {
void sub_4C64A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C64A0()
{
  MEMORY[0x8A39C8] = Math::ArcTan((double)(2 * MEMORY[0x8A39F8]) / MEMORY[0x8A39A0]); /*0x4c64c2*/
}
}
} // namespace gamemd

// 0x4C64D0
namespace gamemd {
long long sub_4C64D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4C64D0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8A39F8]) + 0.5); /*0x4c64eb*/
  MEMORY[0x8A39EC] = result; /*0x4c64f0*/
  return result; /*0x4c64f6*/
}
}
} // namespace gamemd

// 0x4C6500
namespace gamemd {
int sub_4C6500()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C6500()
{
  MEMORY[0x8A3998] = 0; /*0x4c6502*/
  return 0; /*0x4c650e*/
}
}
} // namespace gamemd

// 0x4C6510
namespace gamemd {
int sub_4C6510()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C6510()
{
  MEMORY[0x8A39B8] = 0; /*0x4c6512*/
  MEMORY[0x8A39BC] = 0; /*0x4c6517*/
  MEMORY[0x8A39C0] = 0; /*0x4c651c*/
  return 0; /*0x4c6521*/
}
}
} // namespace gamemd

// 0x4C6530
namespace gamemd {
int sub_4C6530()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C6530()
{
  MEMORY[0x8A39E8] = 0; /*0x4c6535*/
  MEMORY[0x8A39E0] = 128; /*0x4c653f*/
  MEMORY[0x8A39E4] = 128; /*0x4c6544*/
  return 128; /*0x4c6549*/
}
}
} // namespace gamemd

// 0x4C6550
namespace gamemd {
int sub_4C6550()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C6550()
{
  MEMORY[0x8A3988] = 0; /*0x4c6552*/
  MEMORY[0x8A398C] = 0; /*0x4c6557*/
  MEMORY[0x8A3990] = 0; /*0x4c655c*/
  MEMORY[0x8A3994] = 0; /*0x4c6561*/
  return 0; /*0x4c6566*/
}
}
} // namespace gamemd

// 0x4C68E0
namespace gamemd {
int sub_4C68E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall sub_4C68E0(
        AnimClass *this,
        int a2,
        int a3,
        IUnknown *aP3,
        IUnknown *aP4,
        int a6,
        char a7,
        int a8,
        char a9,
        int a10,
        int a11)
{
  Debug::Log(); /*0x4c68e8*/
  if ( a2 < 0 ) /*0x4c68f6*/
  {
    BYTE2(this->field_0) = -1; /*0x4c6952*/
    LOBYTE(this->field_0) = 0; /*0x4c6956*/
    *(int *)((char *)&this->field_0 + 3) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x4c6961*/
    return (char *)this; /*0x4c695f*/
  }
  else
  {
    BYTE2(this->field_0) = a2; /*0x4c6900*/
    LOBYTE(this->field_0) = 5; /*0x4c6906*/
    *(void **)((char *)&this->field_4 + 3) = (void *)a3; /*0x4c6909*/
    HIBYTE(this->field_8) = (_BYTE)aP3; /*0x4c690e*/
    this->__pad_C[0] = (char)aP4; /*0x4c6919*/
    *(_DWORD *)&this->__pad_C[1] = a6; /*0x4c6920*/
    this->__pad_C[5] = a7; /*0x4c6926*/
    *(_DWORD *)&this->__pad_C[6] = a8; /*0x4c6930*/
    *(_DWORD *)&this->__pad_18[3] = a11; /*0x4c6937*/
    BYTE2(this->field_14) = a9; /*0x4c693a*/
    *(int *)((char *)&this->field_14 + 3) = a10; /*0x4c6941*/
    *(int *)((char *)&this->field_0 + 3) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x4c6949*/
    return (char *)this; /*0x4c694c*/
  }
}
}
} // namespace gamemd

// 0x4C69E0
namespace gamemd {
char * E4Recv_4C69E0::sub_4C69E0(int a2, char a3, int a4, unsigned short * a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall sub_4C69E0(char *this, int a2, char a3, int a4, _WORD *a5)
{
  Debug::Log(); /*0x4c69fc*/
  if ( a2 < 0 ) /*0x4c6a0a*/
  {
    *(this + 2) = -1; /*0x4c6a48*/
    *this = 0; /*0x4c6a4c*/
    *(_DWORD *)(this + 3) = MEMORY[0xA8ED84]; /*0x4c6a57*/
    return this; /*0x4c6a55*/
  }
  else
  {
    *(this + 2) = a2; /*0x4c6a10*/
    *this = a3; /*0x4c6a17*/
    *(_DWORD *)(this + 7) = a4; /*0x4c6a19*/
    *(_DWORD *)(this + 11) = -1; /*0x4c6a1c*/
    *(_DWORD *)(this + 15) = 0; /*0x4c6a23*/
    *(_WORD *)(this + 19) = *a5; /*0x4c6a2d*/
    *(_WORD *)(this + 21) = a5[1]; /*0x4c6a35*/
    *(_DWORD *)(this + 3) = MEMORY[0xA8ED84]; /*0x4c6a3e*/
    return this; /*0x4c6a41*/
  }
}
}
} // namespace gamemd

// 0x4C6A60
namespace gamemd {
char * E4Recv_4C6A60::sub_4C6A60(int a2, char a3, int a4, int a5, unsigned short * a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall sub_4C6A60(char *this, int a2, char a3, int a4, int a5, _WORD *a6)
{
  Debug::Log(); /*0x4c6a7c*/
  if ( a2 < 0 ) /*0x4c6a8a*/
  {
    *(this + 2) = -1; /*0x4c6ac8*/
    *this = 0; /*0x4c6acc*/
    *(_DWORD *)(this + 3) = MEMORY[0xA8ED84]; /*0x4c6ad7*/
    return this; /*0x4c6ad5*/
  }
  else
  {
    *(this + 2) = a2; /*0x4c6a90*/
    *this = a3; /*0x4c6a97*/
    *(_DWORD *)(this + 11) = a5; /*0x4c6a99*/
    *(_DWORD *)(this + 7) = a4; /*0x4c6aa0*/
    *(_DWORD *)(this + 15) = 0; /*0x4c6aa3*/
    *(_WORD *)(this + 19) = *a6; /*0x4c6aad*/
    *(_WORD *)(this + 21) = a6[1]; /*0x4c6ab5*/
    *(_DWORD *)(this + 3) = MEMORY[0xA8ED84]; /*0x4c6abe*/
    return this; /*0x4c6ac1*/
  }
}
}
} // namespace gamemd

// 0x4C6BE0
namespace gamemd {
char * E4Recv_4C6BE0::sub_4C6BE0(int a2, char a3, int a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall sub_4C6BE0(char *this, int a2, char a3, int a4, int a5)
{
  Debug::Log(); /*0x4c6bfc*/
  if ( a2 < 0 ) /*0x4c6c0a*/
  {
    *(this + 2) = -1; /*0x4c6c2f*/
    *this = 0; /*0x4c6c33*/
  }
  else
  {
    *(this + 2) = a2; /*0x4c6c10*/
    *this = a3; /*0x4c6c17*/
    *(_DWORD *)(this + 7) = a4; /*0x4c6c19*/
    *(_DWORD *)(this + 11) = a5; /*0x4c6c1c*/
  }
  *(_DWORD *)(this + 3) = MEMORY[0xA8ED84]; /*0x4c6c27*/
  return this; /*0x4c6c2a*/
}
}
} // namespace gamemd

// 0x4C81D0
namespace gamemd {
int sub_4C81D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C81D0()
{
  *(_DWORD *)&MEMORY[0x8A3A08][0x10000] = 0; /*0x4c81d2*/
  *(_DWORD *)&MEMORY[0x8A3A08][65540] = 0; /*0x4c81d7*/
  *(_DWORD *)&MEMORY[0x8A3A08][65544] = 0; /*0x4c81dc*/
  *(_DWORD *)&MEMORY[0x8A3A08][65548] = 0; /*0x4c81e1*/
  return 0; /*0x4c81e6*/
}
}
} // namespace gamemd

// 0x4C81F0
namespace gamemd {
void sub_4C81F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C81F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4c81fc*/
  *(double *)&MEMORY[0x8A3A08][65560] = Math::Sqrt(v0 + v0); /*0x4c820e*/
}
}
} // namespace gamemd

// 0x4C8220
namespace gamemd {
void sub_4C8220()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C8220()
{
  *(double *)&MEMORY[0x8A3A08][65640] = *(double *)&MEMORY[0x8A3A08][65560] / 60.0; /*0x4c822c*/
}
}
} // namespace gamemd

// 0x4C8240
namespace gamemd {
void sub_4C8240()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C8240()
{
  *(double *)&MEMORY[0x8A3A08][65616] = 1.0 / *(double *)&MEMORY[0x8A3A08][65640]; /*0x4c824c*/
}
}
} // namespace gamemd

// 0x4C8260
namespace gamemd {
void sub_4C8260()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C8260()
{
  *(double *)&MEMORY[0x8A3A08][65608] = 0.0174532925199433 * 45.0; /*0x4c826c*/
}
}
} // namespace gamemd

// 0x4C8280
namespace gamemd {
void sub_4C8280()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C8280()
{
  *(double *)&MEMORY[0x8A3A08][65568] = 0.0174532925199433 * 60.0; /*0x4c828c*/
}
}
} // namespace gamemd

// 0x4C82A0
namespace gamemd {
void sub_4C82A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C82A0()
{
  MEMORY[0x8A3A00] = 0.0174532925199433 * 90.0; /*0x4c82ac*/
}
}
} // namespace gamemd

// 0x4C82C0
namespace gamemd {
long long sub_4C82C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4C82C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8A3A00] - *(double *)&MEMORY[0x8A3A08][65568]); /*0x4c82d2*/
  result = Math::RoundToInt(v0 * *(double *)&MEMORY[0x8A3A08][65560] * 0.5); /*0x4c82e6*/
  *(_DWORD *)&MEMORY[0x8A3A08][65648] = result; /*0x4c82eb*/
  return result; /*0x4c82f0*/
}
}
} // namespace gamemd

// 0x4C8300
namespace gamemd {
void sub_4C8300()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C8300()
{
  *(double *)&MEMORY[0x8A3A08][65576] = Math::ArcTan((double)*(int *)&MEMORY[0x8A3A08][65648] * 0.00390625); /*0x4c8317*/
}
}
} // namespace gamemd

// 0x4C8330
namespace gamemd {
void sub_4C8330()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C8330()
{
  *(double *)&MEMORY[0x8A3A08][65600] = Math::ArcTan( /*0x4c8352*/
                                          (double)(2 * *(_DWORD *)&MEMORY[0x8A3A08][65648])
                                        / *(double *)&MEMORY[0x8A3A08][65560]);
}
}
} // namespace gamemd

// 0x4C8360
namespace gamemd {
long long sub_4C8360()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4C8360()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * *(_DWORD *)&MEMORY[0x8A3A08][65648]) + 0.5); /*0x4c837b*/
  *(_DWORD *)&MEMORY[0x8A3A08][65636] = result; /*0x4c8380*/
  return result; /*0x4c8386*/
}
}
} // namespace gamemd

// 0x4C8390
namespace gamemd {
int sub_4C8390()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C8390()
{
  *(_WORD *)&MEMORY[0x8A3A08][65552] = 0; /*0x4c8392*/
  *(_WORD *)&MEMORY[0x8A3A08][65554] = 0; /*0x4c8398*/
  return 0; /*0x4c839e*/
}
}
} // namespace gamemd

// 0x4C83A0
namespace gamemd {
int sub_4C83A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C83A0()
{
  *(_DWORD *)&MEMORY[0x8A3A08][65584] = 0; /*0x4c83a2*/
  *(_DWORD *)&MEMORY[0x8A3A08][65588] = 0; /*0x4c83a7*/
  *(_DWORD *)&MEMORY[0x8A3A08][65592] = 0; /*0x4c83ac*/
  return 0; /*0x4c83b1*/
}
}
} // namespace gamemd

// 0x4C83C0
namespace gamemd {
int sub_4C83C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C83C0()
{
  *(_DWORD *)&MEMORY[0x8A3A08][65632] = 0; /*0x4c83c5*/
  *(_DWORD *)&MEMORY[0x8A3A08][65624] = 128; /*0x4c83cf*/
  *(_DWORD *)&MEMORY[0x8A3A08][65628] = 128; /*0x4c83d4*/
  return 128; /*0x4c83d9*/
}
}
} // namespace gamemd

// 0x4C83E0
namespace gamemd {
INT_PTR DialogFunc(HWND hDlg, UINT a2, WPARAM a3, LPARAM a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
INT_PTR __stdcall DialogFunc(HWND hDlg, UINT a2, WPARAM a3, LPARAM a4)
{
  if ( a2 > 0x111 ) /*0x4c83ea*/
  {
    if ( a2 == 534 ) /*0x4c84bc*/
      return (unsigned __int8)Window::ClampToScreen(a4); /*0x4c84d6*/
    return 0; /*0x4c84bc*/
  }
  if ( a2 == 273 ) /*0x4c83f0*/
  {
    if ( (unsigned __int16)a3 == 1149 ) /*0x4c847d*/
    {
      MessageBoxA(hDlg, aSorryYouCanOnl, aBummer, 0x30u); /*0x4c84ab*/
      return 0; /*0x4c84b4*/
    }
    if ( (unsigned __int16)a3 == 1153 ) /*0x4c8482*/
    {
      EndDialog(hDlg, 1153); /*0x4c848e*/
      return 0; /*0x4c8497*/
    }
    return 0; /*0x4c8482*/
  }
  if ( a2 == 16 ) /*0x4c83f5*/
  {
    EndDialog(hDlg, 1153); /*0x4c845c*/
    Object::RemoveObjectArray(hDlg); /*0x4c8464*/
    return 0; /*0x4c846c*/
  }
  if ( a2 != 272 ) /*0x4c83fc*/
    return 0; /*0x4c84c1*/
  Debug::Log(aWmInitdialog); /*0x4c8407*/
  SetDlgItemTextA(hDlg, 1156, MEMORY[0x8A3A08]); /*0x4c841e*/
  SetFocus(hDlg); /*0x4c8425*/
  if ( g_hWnd ) /*0x4c8433*/
    SetDialogParent(hDlg, g_hWnd); /*0x4c8437*/
  ShowWindow(hDlg, 1); /*0x4c843f*/
  TimerPool::AllocSlot(hDlg); /*0x4c8447*/
  return 0; /*0x4c844e*/
}
}
} // namespace gamemd

// 0x4C84E0
namespace gamemd {
int sub_4C84E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C84E0()
{
  const DLGTEMPLATE *Resource; // esi
  INT_PTR v1; // esi

  WinMain_Write_53E6B0(); /*0x4c84e2*/
  switch ( dword_820E5C ) /*0x4c84ed*/
  {
    case 1: /*0x4c84ed*/
      if ( !AllocConsole() ) /*0x4c85a0*/
      {
        FreeConsole(); /*0x4c85ac*/
        AllocConsole(); /*0x4c85ae*/
      }
      _cwprintf(aErrorRecursive); /*0x4c85b5*/
      Sleep(0xFA0u); /*0x4c85c2*/
      sub_7DD1D7(); /*0x4c85c8*/
      FreeConsole(); /*0x4c85cd*/
      return 1153; /*0x4c85cd*/
    case 2: /*0x4c84ed*/
      return 1153; /*0x4c85d0*/
    case 3: /*0x4c84ed*/
      ExitProcess(0); /*0x4c858c*/
  }
  ShowCursor(1); /*0x4c8509*/
  Resource = (const DLGTEMPLATE *)FindResource(0xF7u, (const CHAR *)5); /*0x4c851a*/
  Debug::Log(); /*0x4c8525*/
  if ( Resource ) /*0x4c851e*/
    v1 = DialogBoxIndirectParamA(g_hInstance, Resource, g_hWnd, DialogFunc, 0); /*0x4c8548*/
  else
    v1 = DialogBoxParamA(g_hInstance, (LPCSTR)0xF7, g_hWnd, DialogFunc, 0); /*0x4c857f*/
  ShowCursor(0); /*0x4c854c*/
  return v1; /*0x4c8550*/
}
}
} // namespace gamemd

// 0x4C9160
namespace gamemd {
char sub_4C9160()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_4C9160()
{
  char v0; // bl
  _DWORD v2[22]; // [esp+4h] [ebp-6Ch] BYREF
  _BYTE v3[12]; // [esp+5Ch] [ebp-14h] BYREF
  int v4; // [esp+68h] [ebp-8h]

  CCFileClass::Construct(v2, aExpandDat); /*0x4c916d*/
  v0 = CCFileClass::Open(v2, 0); /*0x4c9181*/
  v2[0] = &CCFileClass::`vftable'; /*0x4c9183*/
  v4 = 0; /*0x4c918b*/
  Vector::Clear((int)v3); /*0x4c9193*/
  v2[0] = &off_7E1668; /*0x4c919c*/
  BufferIOFileClass::Dtor(v2); /*0x4c91a4*/
  return v0; /*0x4c91ab*/
}
}
} // namespace gamemd

// 0x4C95D0
namespace gamemd {
unsigned int * E4Recv_4C95D0::sub_4C95D0(unsigned int * a2, unsigned short * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_4C95D0(_WORD *this, _DWORD *a2, _WORD *a3)
{
  __int16 v3; // bx
  int v4; // esi
  int v5; // eax
  int v6; // esi
  __int64 v7; // rax
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  __int16 v11; // cx
  int v12; // ecx
  int v14; // [esp+Ch] [ebp-4h]

  v3 = *(this + 10); /*0x4c95d2*/
  if ( v3 <= 0 ) /*0x4c95db*/
    goto LABEL_14; /*0x4c95db*/
  v4 = this->M8; /*0x4c95dd*/
  v5 = this->M16; /*0x4c95e0*/
  if ( v4 != -1 ) /*0x4c95ec*/
  {
    if ( (int)MEMORY[0xA8ED84] - v4 >= v5 ) /*0x4c95f4*/
    {
LABEL_14:
      v12 = *(_DWORD *)this; /*0x4c964f*/
      goto LABEL_15; /*0x4c964f*/
    }
    v5 -= (int)MEMORY[0xA8ED84] - v4; /*0x4c95f6*/
  }
  if ( !v5 ) /*0x4c95fa*/
    goto LABEL_14; /*0x4c95fa*/
  v6 = (__int16)(*this - *(this + 2)); /*0x4c9606*/
  v7 = (__int16)(*this - *(this + 2)); /*0x4c960b*/
  v8 = (int)((HIDWORD(v7) ^ v7) - HIDWORD(v7)) / v3; /*0x4c9611*/
  v14 = *(_DWORD *)this; /*0x4c9615*/
  if ( (__int16)v8 > 0 ) /*0x4c961c*/
  {
    v9 = this->M16; /*0x4c961e*/
    v10 = this->M8; /*0x4c9621*/
    if ( v10 != -1 ) /*0x4c9627*/
    {
      if ( (int)MEMORY[0xA8ED84] - v10 >= v9 ) /*0x4c962f*/
      {
        v11 = 0; /*0x4c964b*/
        goto LABEL_11; /*0x4c964d*/
      }
      LOWORD(v9) = v9 - ((_WORD)MEMORY[0xA8ED84] - v10); /*0x4c9631*/
    }
    v11 = v9; /*0x4c9633*/
LABEL_11:
    LOWORD(v14) = v14 - v11 * (v6 / (__int16)v8); /*0x4c9635*/
  }
  LOWORD(v12) = v14; /*0x4c9645*/
LABEL_15:
  LOWORD(a3) = *a3 - v12; /*0x4c9651*/
  *a2 = a3; /*0x4c966b*/
  return a2; /*0x4c9655*/
}
}
} // namespace gamemd

// 0x4C96A0
namespace gamemd {
void sub_4C96A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C96A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4c96ac*/
  MEMORY[0x8B3AD0] = Math::Sqrt(v0 + v0); /*0x4c96be*/
}
}
} // namespace gamemd

// 0x4C96D0
namespace gamemd {
void sub_4C96D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C96D0()
{
  MEMORY[0x8B3B20] = MEMORY[0x8B3AD0] / 60.0; /*0x4c96dc*/
}
}
} // namespace gamemd

// 0x4C96F0
namespace gamemd {
void sub_4C96F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C96F0()
{
  MEMORY[0x8B3B08] = 1.0 / MEMORY[0x8B3B20]; /*0x4c96fc*/
}
}
} // namespace gamemd

// 0x4C9710
namespace gamemd {
void sub_4C9710()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C9710()
{
  MEMORY[0x8B3B00] = 0.0174532925199433 * 45.0; /*0x4c971c*/
}
}
} // namespace gamemd

// 0x4C9730
namespace gamemd {
void sub_4C9730()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C9730()
{
  MEMORY[0x8B3AD8] = 0.0174532925199433 * 60.0; /*0x4c973c*/
}
}
} // namespace gamemd

// 0x4C9750
namespace gamemd {
void sub_4C9750()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C9750()
{
  MEMORY[0x8B3AB0] = 0.0174532925199433 * 90.0; /*0x4c975c*/
}
}
} // namespace gamemd

// 0x4C9770
namespace gamemd {
long long sub_4C9770()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4C9770()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8B3AB0] - MEMORY[0x8B3AD8]); /*0x4c9782*/
  result = Math::RoundToInt(v0 * MEMORY[0x8B3AD0] * 0.5); /*0x4c9796*/
  MEMORY[0x8B3B28] = result; /*0x4c979b*/
  return result; /*0x4c97a0*/
}
}
} // namespace gamemd

// 0x4C97B0
namespace gamemd {
void sub_4C97B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C97B0()
{
  MEMORY[0x8B3AE0] = Math::ArcTan((double)MEMORY[0x8B3B28] * 0.00390625); /*0x4c97c7*/
}
}
} // namespace gamemd

// 0x4C97E0
namespace gamemd {
void sub_4C97E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4C97E0()
{
  MEMORY[0x8B3AF8] = Math::ArcTan((double)(2 * MEMORY[0x8B3B28]) / MEMORY[0x8B3AD0]); /*0x4c9802*/
}
}
} // namespace gamemd

// 0x4C9810
namespace gamemd {
long long sub_4C9810()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4C9810()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8B3B28]) + 0.5); /*0x4c982b*/
  MEMORY[0x8B3B1C] = result; /*0x4c9830*/
  return result; /*0x4c9836*/
}
}
} // namespace gamemd

// 0x4C9840
namespace gamemd {
int sub_4C9840()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C9840()
{
  MEMORY[0x8B3AC8] = 0; /*0x4c9842*/
  MEMORY[0x8B3ACA] = 0; /*0x4c9848*/
  return 0; /*0x4c984e*/
}
}
} // namespace gamemd

// 0x4C9850
namespace gamemd {
int sub_4C9850()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C9850()
{
  MEMORY[0x8B3AE8] = 0; /*0x4c9852*/
  MEMORY[0x8B3AEC] = 0; /*0x4c9857*/
  MEMORY[0x8B3AF0] = 0; /*0x4c985c*/
  return 0; /*0x4c9861*/
}
}
} // namespace gamemd

// 0x4C9870
namespace gamemd {
int sub_4C9870()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C9870()
{
  MEMORY[0x8B3B18] = 0; /*0x4c9875*/
  MEMORY[0x8B3B10] = 128; /*0x4c987f*/
  MEMORY[0x8B3B14] = 128; /*0x4c9884*/
  return 128; /*0x4c9889*/
}
}
} // namespace gamemd

// 0x4C9890
namespace gamemd {
int sub_4C9890()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4C9890()
{
  MEMORY[0x8B3AB8] = 0; /*0x4c9892*/
  MEMORY[0x8B3ABC] = 0; /*0x4c9897*/
  MEMORY[0x8B3AC0] = 0; /*0x4c989c*/
  MEMORY[0x8B3AC4] = 0; /*0x4c98a1*/
  return 0; /*0x4c98a6*/
}
}
} // namespace gamemd

// 0x4CB150
namespace gamemd {
double ComputeDistortionVariant(float a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
double __stdcall ComputeDistortionVariant(float a1)
{
  int v1; // eax
  char v2; // cl
  signed int v3; // eax

  v1 = Math::RoundToInt(flt_8223B0 * a1); /*0x4cb161*/
  v2 = v1 & 1; /*0x4cb164*/
  v3 = (v1 / 2) & 0x80001FFF; /*0x4cb169*/
  if ( v3 < 0 )
    v3 = (((_WORD)v3 - 1) | 0xFFFFE000) + 1 + ((int)((((_WORD)v3 - 1) | 0xFFFFE000) + 1) < 0 ? 0x2000 : 0);
  if ( v2 && v3 < 0x1FFF ) /*0x4cb187*/
    return MEMORY[0x84F088][v3]; /*0x4cb189*/
  else
    return MEMORY[0x84F084][v3]; /*0x4cb193*/
}
}
} // namespace gamemd

// 0x4CB1A0
namespace gamemd {
double ComputeChronosphereDistortion(float a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
double __stdcall ComputeChronosphereDistortion(float a1)
{
  int v1; // eax
  char v2; // cl
  signed int v3; // eax
  int v4; // eax

  v1 = Math::RoundToInt(flt_8223B4 * a1); /*0x4cb1b1*/
  v2 = v1 & 1; /*0x4cb1b4*/
  v3 = (v1 / 2) & 0x80001FFF; /*0x4cb1b9*/
  if ( v3 >= 0 || (v3 = (((_WORD)v3 - 1) | 0xFFFFE000) + 1, v3 >= 0) ) /*0x4cb1c7*/
    v4 = v3 + 2048; /*0x4cb1d0*/
  else
    v4 = v3 + 10240; /*0x4cb1c9*/
  if ( v2 && v4 < 10239 ) /*0x4cb1de*/
    return MEMORY[0x84F088][v4]; /*0x4cb1e0*/
  else
    return MEMORY[0x84F084][v4]; /*0x4cb1ea*/
}
}
} // namespace gamemd

// 0x4CB3D0
namespace gamemd {
double globalHelper_0CB3D0(AbstractClass * aP0, AbstractClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
double __stdcall globalHelper_0CB3D0(AbstractClass *aP0, AbstractClass *aP1)
{
  double v3; // st7
  char v4; // c3
  double result; // st7
  int v6; // eax

  v3 = *(float *)&aP0; /*0x4cb3da*/
  if ( v4 ) /*0x4cb3e3*/
  {
    if ( v3 == 0.0 ) /*0x4cb3f0*/
    {
      return 0.0; /*0x4cb3f2*/
    }
    else if ( *(float *)&aP0 <= 0.0 ) /*0x4cb40a*/
    {
      return -1.5707964; /*0x4cb415*/
    }
    else
    {
      return 1.5707964; /*0x4cb40c*/
    }
  }
  else
  {
    v6 = abs32(Math::RoundToInt(v3 / *(float *)&aP1 / flt_8650B8)); /*0x4cb430*/
    if ( v6 >= 4097 ) /*0x4cb437*/
      result = 1.5707964; /*0x4cb442*/
    else
      result = *(float *)&stru_84DD9C.__pad_579C[4 * v6 + 56188]; /*0x4cb439*/
    if ( *(float *)&aP1 < 0.0 ) /*0x4cb457*/
      result = 3.141592653589793 - result; /*0x4cb459*/
    if ( *(float *)&aP0 < 0.0 ) /*0x4cb46e*/
      return -result; /*0x4cb470*/
  }
  return result; /*0x4cb3f8*/
}
}
} // namespace gamemd

// 0x4CB4C0
namespace gamemd {
int sub_4CB4C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// write access to const memory has been detected, the output may be wrong!
void sub_4CB4C0()
{
  PVOID BaseAddress; // esi
  SIZE_T RegionSize; // edi
  HANDLE CurrentProcess; // eax
  DWORD flOldProtect; // [esp+10h] [ebp-20h] BYREF
  struct _MEMORY_BASIC_INFORMATION Buffer; // [esp+14h] [ebp-1Ch] BYREF

  memset(&Buffer, 0, sizeof(Buffer)); /*0x4cb4d4*/
  if ( VirtualQuery(Math::SinCos, &Buffer, 0x1Cu) ) /*0x4cb4e5*/
  {
    BaseAddress = Buffer.BaseAddress; /*0x4cb50a*/
    RegionSize = Buffer.RegionSize; /*0x4cb50c*/
    flOldProtect = 0; /*0x4cb50e*/
    if ( VirtualProtect(Buffer.BaseAddress, Buffer.RegionSize, 8u, &flOldProtect) ) /*0x4cb516*/
    {
      *(_DWORD *)Math::SinCos = 0; /*0x4cb53d*/
      if ( !VirtualProtect(BaseAddress, RegionSize, 0x10u, &flOldProtect) ) /*0x4cb549*/
      {
        GetLastError(); /*0x4cb550*/
        Debug::Log(); /*0x4cb55c*/
      }
      CurrentProcess = GetCurrentProcess(); /*0x4cb568*/
      FlushInstructionCache(CurrentProcess, 0, 0); /*0x4cb56f*/
    }
    else
    {
      GetLastError(); /*0x4cb51d*/
      Debug::Log(); /*0x4cb529*/
    }
  }
}
}
} // namespace gamemd

// 0x4CB580
namespace gamemd {
ObjectClass * E4Recv_4CB580::sub_4CB580(char * Source, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ObjectClass *__thiscall sub_4CB580(char *this, char *Source, int a3)
{
  int *v4; // eax
  unsigned int v5; // edx
  int *v6; // edi

  strncpy(this, Source, (IUnknown *)4); /*0x4cb58d*/
  *((_WORD *)this + 2) = 1; /*0x4cb598*/
  *((_WORD *)this + 3) = 1; /*0x4cb59c*/
  v4 = (int *)__2_YAPAXI_Z(1u); /*0x4cb5a0*/
  v5 = *((unsigned __int16 *)this + 3); /*0x4cb5b1*/
  this->M8 = v4; /*0x4cb5b3*/
  qmemcpy(v4, &a3, 4 * (v5 >> 2)); /*0x4cb5b9*/
  v6 = &v4[v5 >> 2]; /*0x4cb5b9*/
  qmemcpy(v6, &a3 + (v5 >> 2), v5 & 3); /*0x4cb5c5*/
  this->M12 = 0; /*0x4cb5c8*/
  return (ObjectClass *)this; /*0x4cb5c7*/
}
}
} // namespace gamemd

// 0x4CB640
namespace gamemd {
ObjectClass * E4Recv_4CB640::sub_4CB640(RandomStruct * aP1, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ObjectClass *__thiscall sub_4CB640(char *this, RandomStruct *aP1, int a3)
{
  int *v4; // eax
  unsigned int v5; // edx
  int *v6; // edi

  strncpy(this, (const char *)aP1, (IUnknown *)4); /*0x4cb64d*/
  *((_WORD *)this + 2) = 3; /*0x4cb654*/
  *((_WORD *)this + 3) = 2; /*0x4cb65a*/
  v4 = (int *)__2_YAPAXI_Z(2u); /*0x4cb660*/
  v5 = *((unsigned __int16 *)this + 3); /*0x4cb671*/
  this->M8 = v4; /*0x4cb673*/
  qmemcpy(v4, &a3, 4 * (v5 >> 2)); /*0x4cb679*/
  v6 = &v4[v5 >> 2]; /*0x4cb679*/
  qmemcpy(v6, &a3 + (v5 >> 2), v5 & 3); /*0x4cb685*/
  this->M12 = 0; /*0x4cb688*/
  return (ObjectClass *)this; /*0x4cb687*/
}
}
} // namespace gamemd

// 0x4CB6A0
namespace gamemd {
ObjectClass * E4Recv_4CB6A0::sub_4CB6A0(RandomStruct * aP1, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ObjectClass *__thiscall sub_4CB6A0(char *this, RandomStruct *aP1, int a3)
{
  int *v4; // eax
  unsigned int v5; // edx
  int *v6; // edi

  strncpy(this, (const char *)aP1, (IUnknown *)4); /*0x4cb6ad*/
  *((_WORD *)this + 2) = 4; /*0x4cb6b4*/
  *((_WORD *)this + 3) = 2; /*0x4cb6ba*/
  v4 = (int *)__2_YAPAXI_Z(2u); /*0x4cb6c0*/
  v5 = *((unsigned __int16 *)this + 3); /*0x4cb6d1*/
  this->M8 = v4; /*0x4cb6d3*/
  qmemcpy(v4, &a3, 4 * (v5 >> 2)); /*0x4cb6d9*/
  v6 = &v4[v5 >> 2]; /*0x4cb6d9*/
  qmemcpy(v6, &a3 + (v5 >> 2), v5 & 3); /*0x4cb6e5*/
  this->M12 = 0; /*0x4cb6e8*/
  return (ObjectClass *)this; /*0x4cb6e7*/
}
}
} // namespace gamemd

// 0x4CB8B0
namespace gamemd {
u_short E4Recv_4CB8B0::sub_4CB8B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
u_short __thiscall sub_4CB8B0(int this)
{
  u_short v2; // ax
  u_short v3; // cx
  u_short result; // ax

  switch ( *(_WORD *)(this + 4) ) /*0x4cb8c1*/
  {
    case 3: /*0x4cb8c1*/
    case 4: /*0x4cb8c1*/
      **(_WORD **)(this + 8) = htons(**(_WORD **)(this + 8)); /*0x4cb8d7*/
      break; /*0x4cb8da*/
    case 5: /*0x4cb8c1*/
    case 6: /*0x4cb8c1*/
      **(_DWORD **)(this + 8) = htonl(**(_DWORD **)(this + 8)); /*0x4cb8ea*/
      break; /*0x4cb8ea*/
    default:
      break;
  }
  v2 = htons(*(_WORD *)(this + 4)); /*0x4cb8ec*/
  v3 = *(_WORD *)(this + 6); /*0x4cb8f6*/
  *(_WORD *)(this + 4) = v2; /*0x4cb8fa*/
  result = htons(v3); /*0x4cb8ff*/
  *(_WORD *)(this + 6) = result; /*0x4cb904*/
  return result; /*0x4cb908*/
}
}
} // namespace gamemd

// 0x4CB990
namespace gamemd {
int sub_4CB990()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4CB990()
{
  MEMORY[0x8B3B38] = 0; /*0x4cb992*/
  MEMORY[0x8B3B3C] = 0; /*0x4cb997*/
  MEMORY[0x8B3B40] = 0; /*0x4cb99c*/
  MEMORY[0x8B3B44] = 0; /*0x4cb9a1*/
  return 0; /*0x4cb9a6*/
}
}
} // namespace gamemd

// 0x4CB9B0
namespace gamemd {
void sub_4CB9B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4CB9B0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4cb9bc*/
  MEMORY[0x8B3B50] = Math::Sqrt(v0 + v0); /*0x4cb9ce*/
}
}
} // namespace gamemd

// 0x4CB9E0
namespace gamemd {
void sub_4CB9E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4CB9E0()
{
  MEMORY[0x8B3BA0] = MEMORY[0x8B3B50] / 60.0; /*0x4cb9ec*/
}
}
} // namespace gamemd

// 0x4CBA00
namespace gamemd {
void sub_4CBA00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4CBA00()
{
  MEMORY[0x8B3B88] = 1.0 / MEMORY[0x8B3BA0]; /*0x4cba0c*/
}
}
} // namespace gamemd

// 0x4CBA20
namespace gamemd {
void sub_4CBA20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4CBA20()
{
  MEMORY[0x8B3B80] = 0.0174532925199433 * 45.0; /*0x4cba2c*/
}
}
} // namespace gamemd

// 0x4CBA40
namespace gamemd {
void sub_4CBA40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4CBA40()
{
  MEMORY[0x8B3B58] = 0.0174532925199433 * 60.0; /*0x4cba4c*/
}
}
} // namespace gamemd

// 0x4CBA60
namespace gamemd {
void sub_4CBA60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4CBA60()
{
  MEMORY[0x8B3B30] = 0.0174532925199433 * 90.0; /*0x4cba6c*/
}
}
} // namespace gamemd

// 0x4CBA80
namespace gamemd {
long long sub_4CBA80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4CBA80()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8B3B30] - MEMORY[0x8B3B58]); /*0x4cba92*/
  result = Math::RoundToInt(v0 * MEMORY[0x8B3B50] * 0.5); /*0x4cbaa6*/
  MEMORY[0x8B3BA8] = result; /*0x4cbaab*/
  return result; /*0x4cbab0*/
}
}
} // namespace gamemd

// 0x4CBAC0
namespace gamemd {
void sub_4CBAC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4CBAC0()
{
  MEMORY[0x8B3B60] = Math::ArcTan((double)MEMORY[0x8B3BA8] * 0.00390625); /*0x4cbad7*/
}
}
} // namespace gamemd

// 0x4CBAF0
namespace gamemd {
void sub_4CBAF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4CBAF0()
{
  MEMORY[0x8B3B78] = Math::ArcTan((double)(2 * MEMORY[0x8B3BA8]) / MEMORY[0x8B3B50]); /*0x4cbb12*/
}
}
} // namespace gamemd

// 0x4CBB20
namespace gamemd {
long long sub_4CBB20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4CBB20()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8B3BA8]) + 0.5); /*0x4cbb3b*/
  MEMORY[0x8B3B9C] = result; /*0x4cbb40*/
  return result; /*0x4cbb46*/
}
}
} // namespace gamemd

// 0x4CBB50
namespace gamemd {
int sub_4CBB50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4CBB50()
{
  MEMORY[0x8B3B48] = 0; /*0x4cbb52*/
  return 0; /*0x4cbb5e*/
}
}
} // namespace gamemd

// 0x4CBB60
namespace gamemd {
int sub_4CBB60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4CBB60()
{
  MEMORY[0x8B3B68] = 0; /*0x4cbb62*/
  MEMORY[0x8B3B6C] = 0; /*0x4cbb67*/
  MEMORY[0x8B3B70] = 0; /*0x4cbb6c*/
  return 0; /*0x4cbb71*/
}
}
} // namespace gamemd

// 0x4CBB80
namespace gamemd {
int sub_4CBB80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4CBB80()
{
  MEMORY[0x8B3B98] = 0; /*0x4cbb85*/
  MEMORY[0x8B3B90] = 128; /*0x4cbb8f*/
  MEMORY[0x8B3B94] = 128; /*0x4cbb94*/
  return 128; /*0x4cbb99*/
}
}
} // namespace gamemd

// 0x4CBEF0
namespace gamemd {
int sub_4CBEF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4CBEF0()
{
  MEMORY[0x8B3BB8] = 0; /*0x4cbef2*/
  MEMORY[0x8B3BBC] = 0; /*0x4cbef7*/
  MEMORY[0x8B3BC0] = 0; /*0x4cbefc*/
  MEMORY[0x8B3BC4] = 0; /*0x4cbf01*/
  return 0; /*0x4cbf06*/
}
}
} // namespace gamemd

// 0x4CBF10
namespace gamemd {
void sub_4CBF10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4CBF10()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4cbf1c*/
  MEMORY[0x8B3BD0] = Math::Sqrt(v0 + v0); /*0x4cbf2e*/
}
}
} // namespace gamemd

// 0x4CBF40
namespace gamemd {
void sub_4CBF40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4CBF40()
{
  MEMORY[0x8B3C20] = MEMORY[0x8B3BD0] / 60.0; /*0x4cbf4c*/
}
}
} // namespace gamemd

// 0x4CBF60
namespace gamemd {
void sub_4CBF60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4CBF60()
{
  MEMORY[0x8B3C08] = 1.0 / MEMORY[0x8B3C20]; /*0x4cbf6c*/
}
}
} // namespace gamemd

// 0x4CBF80
namespace gamemd {
void sub_4CBF80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4CBF80()
{
  MEMORY[0x8B3C00] = 0.0174532925199433 * 45.0; /*0x4cbf8c*/
}
}
} // namespace gamemd

// 0x4CBFA0
namespace gamemd {
void sub_4CBFA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4CBFA0()
{
  MEMORY[0x8B3BD8] = 0.0174532925199433 * 60.0; /*0x4cbfac*/
}
}
} // namespace gamemd

// 0x4CBFC0
namespace gamemd {
void sub_4CBFC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4CBFC0()
{
  MEMORY[0x8B3BB0] = 0.0174532925199433 * 90.0; /*0x4cbfcc*/
}
}
} // namespace gamemd

// 0x4CBFE0
namespace gamemd {
long long sub_4CBFE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4CBFE0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8B3BB0] - MEMORY[0x8B3BD8]); /*0x4cbff2*/
  result = Math::RoundToInt(v0 * MEMORY[0x8B3BD0] * 0.5); /*0x4cc006*/
  MEMORY[0x8B3C28] = result; /*0x4cc00b*/
  return result; /*0x4cc010*/
}
}
} // namespace gamemd

// 0x4CC020
namespace gamemd {
void sub_4CC020()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4CC020()
{
  MEMORY[0x8B3BE0] = Math::ArcTan((double)MEMORY[0x8B3C28] * 0.00390625); /*0x4cc037*/
}
}
} // namespace gamemd

// 0x4CC050
namespace gamemd {
void sub_4CC050()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4CC050()
{
  MEMORY[0x8B3BF8] = Math::ArcTan((double)(2 * MEMORY[0x8B3C28]) / MEMORY[0x8B3BD0]); /*0x4cc072*/
}
}
} // namespace gamemd

// 0x4CC080
namespace gamemd {
long long sub_4CC080()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4CC080()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8B3C28]) + 0.5); /*0x4cc09b*/
  MEMORY[0x8B3C1C] = result; /*0x4cc0a0*/
  return result; /*0x4cc0a6*/
}
}
} // namespace gamemd

// 0x4CC0B0
namespace gamemd {
int sub_4CC0B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4CC0B0()
{
  MEMORY[0x8B3BC8] = 0; /*0x4cc0b2*/
  MEMORY[0x8B3BCA] = 0; /*0x4cc0b8*/
  return 0; /*0x4cc0be*/
}
}
} // namespace gamemd

// 0x4CC0C0
namespace gamemd {
int sub_4CC0C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4CC0C0()
{
  MEMORY[0x8B3BE8] = 0; /*0x4cc0c2*/
  MEMORY[0x8B3BEC] = 0; /*0x4cc0c7*/
  MEMORY[0x8B3BF0] = 0; /*0x4cc0cc*/
  return 0; /*0x4cc0d1*/
}
}
} // namespace gamemd

// 0x4CC0E0
namespace gamemd {
int sub_4CC0E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4CC0E0()
{
  MEMORY[0x8B3C18] = 0; /*0x4cc0e5*/
  MEMORY[0x8B3C10] = 128; /*0x4cc0ef*/
  MEMORY[0x8B3C14] = 128; /*0x4cc0f4*/
  return 128; /*0x4cc0f9*/
}
}
} // namespace gamemd

// 0x4CC680
namespace gamemd {
BOOL sub_4CC680(int a1, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __fastcall sub_4CC680(int a1, int a2, int a3)
{
  int SlopeIndex; // ebx
  int v5; // esi
  BOOL result; // eax

  SlopeIndex = Cell::GetSlopeIndex(a2); /*0x4cc690*/
  result = 0; /*0x4cc6c3*/
  if ( Cell::GetSlopeIndex(a3) - SlopeIndex >= 4 ) /*0x4cc69e*/
  {
    v5 = Cell::GetSlopeIndex(a1); /*0x4cc6a9*/
    if ( Cell::GetSlopeIndex(a3) - v5 > 0 ) /*0x4cc6b4*/
      return 1; /*0x4cc69e*/
  }
  return result; /*0x4cc6b6*/
}
}
} // namespace gamemd

// 0x4CC750
namespace gamemd {
int sub_4CC750()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4CC750()
{
  MEMORY[0x8B3C30] = 0; /*0x4cc752*/
  MEMORY[0x8B3C34] = 0; /*0x4cc757*/
  MEMORY[0x8B3C38] = 0; /*0x4cc75c*/
  MEMORY[0x8B3C3C] = 0; /*0x4cc761*/
  return 0; /*0x4cc766*/
}
}
} // namespace gamemd

// 0x4CC790
namespace gamemd {
void sub_4CC790()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4CC790()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4cc79c*/
  MEMORY[0x8B3C60] = Math::Sqrt(v0 + v0); /*0x4cc7ae*/
}
}
} // namespace gamemd

// 0x4CC7C0
namespace gamemd {
void sub_4CC7C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4CC7C0()
{
  MEMORY[0x8B3CB0] = MEMORY[0x8B3C60] / 60.0; /*0x4cc7cc*/
}
}
} // namespace gamemd

// 0x4CC7E0
namespace gamemd {
void sub_4CC7E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4CC7E0()
{
  MEMORY[0x8B3C98] = 1.0 / MEMORY[0x8B3CB0]; /*0x4cc7ec*/
}
}
} // namespace gamemd

// 0x4CC800
namespace gamemd {
void sub_4CC800()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4CC800()
{
  MEMORY[0x8B3C90] = 0.0174532925199433 * 45.0; /*0x4cc80c*/
}
}
} // namespace gamemd

// 0x4CC820
namespace gamemd {
void sub_4CC820()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4CC820()
{
  MEMORY[0x8B3C68] = 0.0174532925199433 * 60.0; /*0x4cc82c*/
}
}
} // namespace gamemd

// 0x4CC840
namespace gamemd {
void sub_4CC840()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4CC840()
{
  MEMORY[0x8B3C40] = 0.0174532925199433 * 90.0; /*0x4cc84c*/
}
}
} // namespace gamemd

// 0x4CC860
namespace gamemd {
long long sub_4CC860()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4CC860()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8B3C40] - MEMORY[0x8B3C68]); /*0x4cc872*/
  result = Math::RoundToInt(v0 * MEMORY[0x8B3C60] * 0.5); /*0x4cc886*/
  MEMORY[0x8B3CB8] = result; /*0x4cc88b*/
  return result; /*0x4cc890*/
}
}
} // namespace gamemd

// 0x4CC8A0
namespace gamemd {
void sub_4CC8A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4CC8A0()
{
  MEMORY[0x8B3C70] = Math::ArcTan((double)MEMORY[0x8B3CB8] * 0.00390625); /*0x4cc8b7*/
}
}
} // namespace gamemd

// 0x4CC8D0
namespace gamemd {
void sub_4CC8D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4CC8D0()
{
  MEMORY[0x8B3C88] = Math::ArcTan((double)(2 * MEMORY[0x8B3CB8]) / MEMORY[0x8B3C60]); /*0x4cc8f2*/
}
}
} // namespace gamemd

// 0x4CC900
namespace gamemd {
long long sub_4CC900()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4CC900()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8B3CB8]) + 0.5); /*0x4cc91b*/
  MEMORY[0x8B3CAC] = result; /*0x4cc920*/
  return result; /*0x4cc926*/
}
}
} // namespace gamemd

// 0x4CC930
namespace gamemd {
int sub_4CC930()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4CC930()
{
  MEMORY[0x8B3C58] = 0; /*0x4cc932*/
  return 0; /*0x4cc93e*/
}
}
} // namespace gamemd

// 0x4CC940
namespace gamemd {
int sub_4CC940()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4CC940()
{
  MEMORY[0x8B3C78] = 0; /*0x4cc942*/
  MEMORY[0x8B3C7C] = 0; /*0x4cc947*/
  MEMORY[0x8B3C80] = 0; /*0x4cc94c*/
  return 0; /*0x4cc951*/
}
}
} // namespace gamemd

// 0x4CC960
namespace gamemd {
int sub_4CC960()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4CC960()
{
  MEMORY[0x8B3CA8] = 0; /*0x4cc965*/
  MEMORY[0x8B3CA0] = 128; /*0x4cc96f*/
  MEMORY[0x8B3CA4] = 128; /*0x4cc974*/
  return 128; /*0x4cc979*/
}
}
} // namespace gamemd

// 0x4CC980
namespace gamemd {
int sub_4CC980()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4CC980()
{
  MEMORY[0x8B3C48] = 0; /*0x4cc982*/
  MEMORY[0x8B3C4C] = 0; /*0x4cc987*/
  MEMORY[0x8B3C50] = 0; /*0x4cc98c*/
  MEMORY[0x8B3C54] = 0; /*0x4cc991*/
  return 0; /*0x4cc996*/
}
}
} // namespace gamemd

// 0x4CCA70
namespace gamemd {
void E4Recv_4CCA70::sub_4CCA70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_4CCA70(_DWORD *this)
{
  *this = &FlyLocomotionClass::`vftable'; /*0x4cca70*/
  *(this + 1) = &FlyLocomotionClass::`vftable'; /*0x4cca76*/
  LocomotionClass::Construct(this); /*0x4cca7d*/
}
}
} // namespace gamemd

// 0x4CEFB0
namespace gamemd {
int FootClass_LandAtPosition(int a1, int a2, char a3, float a4, int a5, int a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall FootClass_LandAtPosition(int a1, int a2, char a3, float a4, int a5, int a6)
{
  int **v6; // esi
  int *v7; // eax
  int v8; // eax
  int *v9; // edi
  unsigned int v10; // eax
  int v11; // ebp
  int v12; // ebx
  _DWORD *v13; // eax
  _DWORD *v14; // edi
  int *v15; // ecx
  void *NearbyCell; // eax
  int *v17; // eax
  int *v18; // eax
  int *v19; // eax
  int v20; // ecx
  int v21; // eax
  int *v22; // eax
  int v23; // ebx
  int v24; // edi
  int v25; // ebp
  int *v26; // ecx
  int *v27; // eax
  int v28; // ebx
  int *v29; // eax
  int v30; // ecx
  int v31; // eax
  int v32; // eax
  int *v33; // ecx
  int *v34; // eax
  float *Height; // eax
  char *v36; // ecx
  int *v37; // eax
  int v38; // eax
  double v39; // st7
  int v40; // ebp
  int v41; // eax
  int *v42; // ecx
  bool v43; // cc
  int v44; // eax
  int v45; // eax
  int *v46; // ecx
  int v47; // edx
  int *v48; // edi
  int v49; // eax
  int v50; // edx
  int v51; // eax
  int v52; // ecx
  int v53; // ecx
  int v55; // [esp+50h] [ebp-38h] BYREF
  int *v56; // [esp+54h] [ebp-34h] BYREF
  float v57; // [esp+58h] [ebp-30h] BYREF
  float v58; // [esp+5Ch] [ebp-2Ch] BYREF
  int v59; // [esp+60h] [ebp-28h]
  float v60; // [esp+64h] [ebp-24h] BYREF
  int v61; // [esp+68h] [ebp-20h]
  int v62; // [esp+6Ch] [ebp-1Ch]
  int v63[3]; // [esp+70h] [ebp-18h] BYREF
  _DWORD v64[3]; // [esp+7Ch] [ebp-Ch] BYREF

  v6 = (int **)(a1 + 12); /*0x4cefb6*/
  v59 = a1; /*0x4cefb9*/
  (*(void (__thiscall **)(_DWORD, float *))(**(_DWORD **)(a1 + 12) + 440))(*(_DWORD *)(a1 + 12), &v58); /*0x4cefc7*/
  v7 = *v6; /*0x4cefcd*/
  v55 = 0; /*0x4cefcf*/
  if ( v7 ) /*0x4cefd9*/
  {
    v8 = ComPtr::ReleaseAndSet(&v55, v6); /*0x4cefe0*/
    if ( v8 < 0 && v8 != -2147467262 ) /*0x4cefee*/
      WinAPI::Wrapper(v8); /*0x4ceff1*/
    if ( v55 && (*v6)[173] && (*v6)[191] && (*(int (__stdcall **)(int))(*(_DWORD *)v55 + 24))(v55) ) /*0x4cf017*/
      a3 = 0; /*0x4cf01e*/
  }
  if ( *v6 && (*(int (__thiscall **)(int *))(**v6 + 44))(*v6) == 2 )
  {
    if ( *v6 )
    {
      v9 = *v6; /*0x4cf033*/
      v10 = (*(int (__thiscall **)(int *))(*v9 + 44))(*v6) == 2 ? (unsigned int)v9 : 0;
    }
    else
    {
      v10 = 0; /*0x4cf039*/
    }
    if ( *(_BYTE *)(*(_DWORD *)(v10 + 1732) + 3595) ) /*0x4cf055*/
      a3 = 0; /*0x4cf05f*/
  }
  v11 = LODWORD(a4); /*0x4cf06c*/
  v62 = a6; /*0x4cf06e*/
  v12 = a5; /*0x4cf072*/
  LOWORD(v56) = SLODWORD(a4) / 256; /*0x4cf08c*/
  HIWORD(v56) = a5 / 256; /*0x4cf09f*/
  v13 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v56); /*0x4cf0ac*/
  v14 = Cell::IsBridge(v13); /*0x4cf0b8*/
  if ( v14 && !*(_BYTE *)((*(int (__thiscall **)(int *))(**v6 + 132))(*v6) + 3367) ) /*0x4cf0cc*/
  {
    if ( Array::Contains(*v6, (int)v14) ) /*0x4cf0d9*/
    {
      v18 = (int *)(*(int (__thiscall **)(_DWORD *, int *, int *))(*v14 + 168))(v14, v63, *v6); /*0x4cf142*/
      v11 = *v18; /*0x4cf148*/
      v12 = v18[1]; /*0x4cf14a*/
      v62 = v18[2]; /*0x4cf150*/
    }
    else
    {
      v15 = *v6; /*0x4cf0e2*/
      v56 = *v6; /*0x4cf0e6*/
      if ( v56 && (*(int (__thiscall **)(int *))(*v15 + 44))(v15) == 2 ) /*0x4cf0f4*/
      {
        NearbyCell = InfantryClass::FindNearbyCell(v56, (int)v14); /*0x4cf0fb*/
        if ( NearbyCell ) /*0x4cf102*/
        {
          v17 = (int *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)NearbyCell + 72))(NearbyCell, v63); /*0x4cf125*/
          v11 = *v17; /*0x4cf128*/
          v12 = v17[1]; /*0x4cf12a*/
          v62 = v17[2]; /*0x4cf130*/
        }
        else
        {
          v11 = MEMORY[0x8B3C78]; /*0x4cf10a*/
          v12 = MEMORY[0x8B3C7C]; /*0x4cf110*/
          v62 = MEMORY[0x8B3C80]; /*0x4cf116*/
        }
      }
    }
  }
  (*(void (__thiscall **)(int *))(**v6 + 464))(*v6); /*0x4cf158*/
  v19 = (int *)(*(int (__thiscall **)(int *, int *))(**v6 + 72))(*v6, v63); /*0x4cf167*/
  v20 = *v19; /*0x4cf16a*/
  v21 = v19[1] - v12; /*0x4cf171*/
  LODWORD(v60) = v20 - v11; /*0x4cf173*/
  v61 = v21; /*0x4cf17b*/
  Vector::2DMagnitudeMath((int *)&v60); /*0x4cf17f*/
  v23 = (int)v22; /*0x4cf184*/
  v56 = v22; /*0x4cf18c*/
  if ( !v55 || !(*(int (__stdcall **)(int))(*(_DWORD *)v55 + 32))(v55) ) /*0x4cf197*/
  {
    v24 = LODWORD(a4); /*0x4cf1a2*/
    v25 = a5; /*0x4cf1a6*/
    v26 = *v6; /*0x4cf1ae*/
    v60 = a4; /*0x4cf1b4*/
    v61 = a5; /*0x4cf1b9*/
    v62 = a6; /*0x4cf1bd*/
    v27 = (int *)(*(int (__thiscall **)(int *, int *))(*v26 + 72))(v26, v63); /*0x4cf1c8*/
    v28 = *(_DWORD *)Cell::GetHeight(&v58, v27, (int *)&v60); /*0x4cf1d5*/
    if ( !v55 ) /*0x4cf1dd*/
      goto LABEL_32; /*0x4cf1dd*/
    if ( !(*(int (__stdcall **)(int))(*(_DWORD *)v55 + 24))(v55) ) /*0x4cf1e2*/
      goto LABEL_32; /*0x4cf1e2*/
    v29 = (int *)(*(int (__thiscall **)(int *, int *))(**v6 + 72))(*v6, v63); /*0x4cf1f2*/
    v30 = *v29; /*0x4cf1f5*/
    v31 = v29[1] - v25; /*0x4cf1fc*/
    LODWORD(v60) = v30 - v24; /*0x4cf1fe*/
    v61 = v31; /*0x4cf206*/
    Vector::2DMagnitudeMath((int *)&v60); /*0x4cf20a*/
    if ( v32 > 768 /*0x4cf248*/
      || (LOWORD(v58) = 0x2000,
          LOWORD(v57) = v28 - *(_WORD *)ProgressTimer::GetValue((_WORD *)*v6 + 452, &v60),
          (unsigned __int8)UnitClass::CompareCoordinateMagnitude(&v57)) )
    {
LABEL_32:
      v63[2] = a6; /*0x4cf259*/
      v33 = *v6; /*0x4cf25d*/
      v63[0] = v24; /*0x4cf260*/
      v63[1] = v25; /*0x4cf264*/
      v34 = (int *)(*(int (__thiscall **)(int *, _DWORD *))(*v33 + 72))(v33, v64); /*0x4cf26f*/
      Height = (float *)Cell::GetHeight(&v60, v34, v63); /*0x4cf277*/
      v36 = (char *)(*v6 + 226); /*0x4cf285*/
      v58 = *Height; /*0x4cf28b*/
      FacingClass::Update(v36, &v58); /*0x4cf28f*/
    }
    v23 = (int)v56; /*0x4cf294*/
  }
  if ( v23 >= 256 || !a3 || *(_BYTE *)((*(int (__thiscall **)(int *))(**v6 + 132))(*v6) + 3367) ) /*0x4cf2bc*/
  {
    if ( !v55 || !(*(int (__stdcall **)(int))(*(_DWORD *)v55 + 32))(v55) ) /*0x4cf363*/
    {
      v38 = (*(int (__thiscall **)(int *, _DWORD *))(**v6 + 72))(*v6, v64); /*0x4cf373*/
      v58 = *(float *)v38; /*0x4cf37f*/
      v39 = Math::CalcAngle((double)*(int *)(v38 + 4) - (double)a5, (double)SLODWORD(a4) - (double)SLODWORD(v58)); /*0x4cf398*/
      LOWORD(a4) = Math::RoundToInt((v39 - 1.570796326794897) * -10430.06004058427); /*0x4cf3b1*/
      v57 = a4; /*0x4cf3ba*/
      v37 = (int *)&v57; /*0x4cf3be*/
      goto LABEL_51; /*0x4cf3be*/
    }
  }
  else
  {
    if ( !(*v6)[173] || !(*v6)[191] ) /*0x4cf2d4*/
      goto LABEL_44; /*0x4cf2d4*/
    if ( !v55 ) /*0x4cf2e2*/
    {
LABEL_43:
      v37 = ObjectClass::CalcTargetFacing(*v6, (int *)&a4, (*v6)[173]); /*0x4cf304*/
LABEL_51:
      FacingClass::Update((char *)*v6 + 928, v37); /*0x4cf3c2*/
      goto LABEL_52; /*0x4cf3cb*/
    }
    if ( !(*(int (__stdcall **)(int))(*(_DWORD *)v55 + 24))(v55) ) /*0x4cf2e7*/
    {
      if ( !v55 || !(*(int (__stdcall **)(int))(*(_DWORD *)v55 + 32))(v55) ) /*0x4cf2f9*/
        goto LABEL_43; /*0x4cf2fe*/
    }
    else
    {
LABEL_44:
      LOWORD(a4) = 0; /*0x4cf320*/
      if ( !v55 /*0x4cf34a*/
        || (LOWORD(a4) = (*(unsigned __int16 (__stdcall **)(int))(*(_DWORD *)v55 + 16))(v55) << 13, !v55)
        || !(*(int (__stdcall **)(int))(*(_DWORD *)v55 + 32))(v55) )
      {
        FacingClass::Update((char *)*v6 + 928, &a4); /*0x4cf356*/
      }
    }
  }
LABEL_52:
  v40 = v59; /*0x4cf3d0*/
  if ( !*(_BYTE *)(v59 + 92) || v23 >= 768 ) /*0x4cf3e1*/
  {
    v41 = (*(int (__thiscall **)(int *))(**v6 + 132))(*v6); /*0x4cf402*/
    v42 = *v6; /*0x4cf410*/
    if ( *(_BYTE *)(v41 + 3221) ) /*0x4cf408*/
    {
      v43 = v23 < *(_DWORD *)((*(int (__thiscall **)(int *))(*v42 + 132))(v42) + 760); /*0x4cf426*/
      v44 = **v6; /*0x4cf42a*/
      if ( v43 ) /*0x4cf42c*/
      {
        v45 = (*(int (**)(void))(v44 + 132))(); /*0x4cf432*/
        v46 = *v6; /*0x4cf443*/
        v47 = **v6; /*0x4cf445*/
        a4 = (float)(v23 / *(_DWORD *)(v45 + 760)); /*0x4cf44f*/
        v48 = (int *)(*(int (__thiscall **)(int *))(v47 + 132))(v46); /*0x4cf45b*/
        v49 = (*(int (__thiscall **)(int *))(**v6 + 132))(*v6); /*0x4cf45f*/
        v59 = (*(int (__thiscall **)(int))(*(_DWORD *)v49 + 188))(v49) / 3; /*0x4cf481*/
        v50 = *v48; /*0x4cf485*/
        v58 = (double)v59 * (1.0 - a4); /*0x4cf497*/
        v59 = (*(int (__thiscall **)(int *))(v50 + 188))(v48); /*0x4cf4a1*/
        *(_DWORD *)(v40 + 56) = Math::RoundToInt((double)v59 * a4 + v58); /*0x4cf4b6*/
        goto LABEL_60; /*0x4cf4bb*/
      }
    }
    else
    {
      v44 = *v42; /*0x4cf4bd*/
    }
    v51 = (*(int (**)(void))(v44 + 132))(); /*0x4cf4bf*/
    *(_DWORD *)(v40 + 56) = (*(int (__thiscall **)(int))(*(_DWORD *)v51 + 188))(v51); /*0x4cf4cf*/
    goto LABEL_60; /*0x4cf4cf*/
  }
  *(_DWORD *)(v40 + 56) = *(_DWORD *)(v40 + 36) - Cell::GetGroundHeight((_DWORD *)(v59 + 28)); /*0x4cf3f6*/
LABEL_60:
  if ( !*(_BYTE *)((*(int (__thiscall **)(int *))(**v6 + 132))(*v6) + 3367) /*0x4cf4e8*/
    && (unsigned __int8)DamageArea::CheckOccupancyEligibility(v40) )
  {
    if ( v23 >= 128 ) /*0x4cf4f7*/
    {
      if ( v23 >= 512 ) /*0x4cf52d*/
      {
        if ( v23 < 768 && a3 ) /*0x4cf551*/
        {
          *(_DWORD *)(v40 + 64) = 0; /*0x4cf553*/
          *(_DWORD *)(v40 + 68) = 1072168960; /*0x4cf556*/
        }
      }
      else if ( a3 ) /*0x4cf535*/
      {
        *(_DWORD *)(v40 + 64) = 0; /*0x4cf537*/
        *(_DWORD *)(v40 + 68) = 1071644672; /*0x4cf53a*/
      }
    }
    else
    {
      if ( a3 ) /*0x4cf4ff*/
      {
        *(_DWORD *)(v40 + 64) = 0; /*0x4cf501*/
        *(_DWORD *)(v40 + 68) = 0; /*0x4cf504*/
      }
      if ( !*(_BYTE *)(v40 + 92) && *(double *)(v40 + 72) < 0.05 ) /*0x4cf51c*/
        LocomotionClass::CheckBridgeBlock(v40); /*0x4cf520*/
    }
  }
  if ( *((_BYTE *)*v6 + 131) ) /*0x4cf55f*/
  {
    if ( !(unsigned __int8)House::IsHumanPlayer((#375 *)(*v6)[135]) ) /*0x4cf573*/
    {
      v52 = (int)(*v6 + 39); /*0x4cf57e*/
      a4 = *(float *)v52; /*0x4cf586*/
      a5 = *(_DWORD *)(v52 + 4); /*0x4cf592*/
      a6 = *(_DWORD *)(v52 + 8); /*0x4cf599*/
      if ( Cell::IsPassable(&a4) /*0x4cf5dd*/
        || (*(_DWORD *)MEMORY[0xA8B230] & 0x1000) != 0
        && (v53 = (int)(*v6 + 39),
            a4 = *(float *)v53,
            a5 = *(_DWORD *)(v53 + 4),
            a6 = *(_DWORD *)(v53 + 8),
            Game::Stub3((int)&a4)) )
      {
        (*(void (__thiscall **)(int *))(**v6 + 336))(*v6); /*0x4cf5ec*/
      }
    }
  }
  if ( v55 ) /*0x4cf5f8*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v55 + 8))(v55); /*0x4cf5fd*/
  return v23; /*0x4cf600*/
}
}
} // namespace gamemd

// 0x4C5EC0
namespace gamemd {
void nullsub_127()
{
  ;
}
} // namespace gamemd

// 0x4C5ED0
namespace gamemd {
void nullsub_128()
{
  ;
}
} // namespace gamemd

// 0x4C6130
namespace gamemd {
void nullsub_129()
{
  ;
}
} // namespace gamemd

// 0x4C6170
namespace gamemd {
void nullsub_130()
// 0x4c6130
{
  ;
}
} // namespace gamemd

// 0x4C91B0
namespace gamemd {
char _do_always_noconv_codecvt_base_std__MBE_NXZ_5()
{
return 1;
}
} // namespace gamemd

// 0x4CAEF0
namespace gamemd {
void nullsub_131()
{
  ;
}
} // namespace gamemd

// 0x4CAF00
namespace gamemd {
void nullsub_132()
{
  ;
}
} // namespace gamemd

// 0x4CAF10
namespace gamemd {
void nullsub_133()
{
  ;
}
} // namespace gamemd
