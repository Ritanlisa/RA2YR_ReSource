// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4D0540
namespace gamemd {
int sub_4D0540()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4D0540()
{
  MEMORY[0x8B3CE0] = 0; /*0x4d0542*/
  MEMORY[0x8B3CE4] = 0; /*0x4d0547*/
  MEMORY[0x8B3CE8] = 0; /*0x4d054c*/
  MEMORY[0x8B3CEC] = 0; /*0x4d0551*/
  return 0; /*0x4d0556*/
}
}
} // namespace gamemd

// 0x4D0560
namespace gamemd {
void sub_4D0560()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4D0560()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4d056c*/
  MEMORY[0x8B3CF8] = Math::Sqrt(v0 + v0); /*0x4d057e*/
}
}
} // namespace gamemd

// 0x4D0590
namespace gamemd {
void sub_4D0590()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4D0590()
{
  MEMORY[0x8B3D60] = MEMORY[0x8B3CF8] / 60.0; /*0x4d059c*/
}
}
} // namespace gamemd

// 0x4D05B0
namespace gamemd {
void sub_4D05B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4D05B0()
{
  MEMORY[0x8B3D48] = 1.0 / MEMORY[0x8B3D60]; /*0x4d05bc*/
}
}
} // namespace gamemd

// 0x4D05D0
namespace gamemd {
void sub_4D05D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4D05D0()
{
  MEMORY[0x8B3D40] = 0.0174532925199433 * 45.0; /*0x4d05dc*/
}
}
} // namespace gamemd

// 0x4D05F0
namespace gamemd {
void sub_4D05F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4D05F0()
{
  MEMORY[0x8B3D00] = 0.0174532925199433 * 60.0; /*0x4d05fc*/
}
}
} // namespace gamemd

// 0x4D0610
namespace gamemd {
void sub_4D0610()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4D0610()
{
  MEMORY[0x8B3CD8] = 0.0174532925199433 * 90.0; /*0x4d061c*/
}
}
} // namespace gamemd

// 0x4D0630
namespace gamemd {
long long sub_4D0630()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4D0630()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8B3CD8] - MEMORY[0x8B3D00]); /*0x4d0642*/
  result = Math::RoundToInt(v0 * MEMORY[0x8B3CF8] * 0.5); /*0x4d0656*/
  MEMORY[0x8B3D68] = result; /*0x4d065b*/
  return result; /*0x4d0660*/
}
}
} // namespace gamemd

// 0x4D0670
namespace gamemd {
void sub_4D0670()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4D0670()
{
  MEMORY[0x8B3D08] = Math::ArcTan((double)MEMORY[0x8B3D68] * 0.00390625); /*0x4d0687*/
}
}
} // namespace gamemd

// 0x4D06A0
namespace gamemd {
void sub_4D06A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4D06A0()
{
  MEMORY[0x8B3D38] = Math::ArcTan((double)(2 * MEMORY[0x8B3D68]) / MEMORY[0x8B3CF8]); /*0x4d06c2*/
}
}
} // namespace gamemd

// 0x4D06D0
namespace gamemd {
long long sub_4D06D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4D06D0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8B3D68]) + 0.5); /*0x4d06eb*/
  MEMORY[0x8B3D5C] = result; /*0x4d06f0*/
  return result; /*0x4d06f6*/
}
}
} // namespace gamemd

// 0x4D0700
namespace gamemd {
int sub_4D0700()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4D0700()
{
  MEMORY[0x8B3CF0] = 0; /*0x4d0702*/
  MEMORY[0x8B3CF2] = 0; /*0x4d0708*/
  return 0; /*0x4d070e*/
}
}
} // namespace gamemd

// 0x4D0710
namespace gamemd {
int sub_4D0710()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4D0710()
{
  MEMORY[0x8B3D28] = 0; /*0x4d0712*/
  MEMORY[0x8B3D2C] = 0; /*0x4d0717*/
  MEMORY[0x8B3D30] = 0; /*0x4d071c*/
  return 0; /*0x4d0721*/
}
}
} // namespace gamemd

// 0x4D0730
namespace gamemd {
int sub_4D0730()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4D0730()
{
  MEMORY[0x8B3D58] = 0; /*0x4d0735*/
  MEMORY[0x8B3D50] = 128; /*0x4d073f*/
  MEMORY[0x8B3D54] = 128; /*0x4d0744*/
  return 128; /*0x4d0749*/
}
}
} // namespace gamemd

// 0x4D0750
namespace gamemd {
int sub_4D0750()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4D0750()
{
  MEMORY[0x8B3D14] = 0; /*0x4d0757*/
  MEMORY[0x8B3D18] = 0; /*0x4d075c*/
  MEMORY[0x8B3D1C] = 1; /*0x4d0761*/
  MEMORY[0x8B3D1D] = 0; /*0x4d0768*/
  MEMORY[0x8B3D10] = (int)&DynamicVectorClass<FoggedObjectClass *>::`vftable'; /*0x4d076d*/
  MEMORY[0x8B3D24] = 10; /*0x4d0777*/
  MEMORY[0x8B3D20] = 0; /*0x4d0781*/
  return atexit(sub_4D0790); /*0x4d078c*/
}
}
} // namespace gamemd

// 0x4D0790
namespace gamemd {
void sub_4D0790()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4D0790()
{
  if ( (MEMORY[0x8B3CD5] & 1) == 0 ) /*0x4d079a*/
  {
    MEMORY[0x8B3D10] = (int)&VectorClass<FoggedObjectClass *>::`vftable'; /*0x4d079e*/
    MEMORY[0x8B3CD5] |= 1u; /*0x4d07b1*/
    if ( MEMORY[0x8B3D14] ) /*0x4d07b7*/
    {
      if ( MEMORY[0x8B3D1D] ) /*0x4d07c1*/
      {
        __3_YAXPAX_Z(MEMORY[0x8B3D14]); /*0x4d07c4*/
        MEMORY[0x8B3D14] = 0; /*0x4d07cc*/
      }
    }
    MEMORY[0x8B3D1D] = 0; /*0x4d07d6*/
    MEMORY[0x8B3D18] = 0; /*0x4d07dd*/
  }
}
}
} // namespace gamemd

// 0x4D07F0
namespace gamemd {
int sub_4D07F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4D07F0()
{
  MEMORY[0x8B3CC0] = 0; /*0x4d07f7*/
  MEMORY[0x8B3CC4] = 0; /*0x4d07fc*/
  MEMORY[0x8B3CC8] = 0; /*0x4d0801*/
  MEMORY[0x8B3CCC] = 0; /*0x4d0806*/
  MEMORY[0x8B3CD0] = 0; /*0x4d080b*/
  return atexit(sub_4D0820); /*0x4d0816*/
}
}
} // namespace gamemd

// 0x4D0820
namespace gamemd {
void sub_4D0820()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4D0820()
{
  if ( (MEMORY[0x8B3CD4] & 1) == 0 ) /*0x4d082a*/
  {
    MEMORY[0x8B3CD4] |= 1u; /*0x4d0836*/
    __3_YAXPAX_Z(MEMORY[0x8B3CC0]); /*0x4d083c*/
    MEMORY[0x8B3CC0] = 0; /*0x4d0846*/
    MEMORY[0x8B3CC4] = 0; /*0x4d084b*/
    MEMORY[0x8B3CC8] = 0; /*0x4d0850*/
    MEMORY[0x8B3CCC] = 0; /*0x4d0855*/
    MEMORY[0x8B3CD0] = 0; /*0x4d085a*/
  }
}
}
} // namespace gamemd

// 0x4D1650
namespace gamemd {
int DestructFoggedObjectClass(FoggedObjectClass * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall DestructFoggedObjectClass(FoggedObjectClass *aP0)
{
  int v2; // eax
  int v3; // kr00_4
  int v4; // edx
  int v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  BuildingTypeClass *i; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // ecx
  int edx15; // edx
  CCINIClass *v14; // eax
  int result; // eax
  __int16 v17[4]; // [esp+10h] [ebp-Ch] BYREF
  int v18; // [esp+18h] [ebp-4h] BYREF

  *(_DWORD *)aP0->__pad_0 = &FoggedObjectClass::`vftable'; /*0x4d1663*/
  *(_DWORD *)&aP0->__pad_0[4] = &FoggedObjectClass::`vftable'; /*0x4d1669*/
  *(_DWORD *)&aP0->__pad_0[8] = &FoggedObjectClass::`vftable'; /*0x4d1670*/
  *(_DWORD *)&aP0->__pad_0[12] = &FoggedObjectClass::`vftable'; /*0x4d1677*/
  *(_DWORD *)v17 = aP0; /*0x4d1684*/
  v2 = (*(int (__thiscall **)(char *, __int16 *))(*(_DWORD *)&stru_89E138.__pad_579C[66620] + 16))( /*0x4d1688*/
         &stru_89E138.__pad_579C[66620],
         v17);
  if ( v2 != -1 && v2 < *(int *)&stru_89E138.__pad_579C[66636] ) /*0x4d1698*/
  {
    --*(_DWORD *)&stru_89E138.__pad_579C[66636]; /*0x4d169d*/
    for ( ; /*0x4d16a3*/
          v2 < *(int *)&stru_89E138.__pad_579C[66636];
          *(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_579C[66624] + 4 * v2 - 4) = *(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_579C[66624]
                                                                                          + 4 * v2) )
    {
      ++v2; /*0x4d16ab*/
    }
  }
  v3 = *(_DWORD *)&aP0[1].__pad_0[8]; /*0x4d16d7*/
  v17[0] = *(_DWORD *)&aP0[1].__pad_0[4] / 256; /*0x4d16df*/
  v17[1] = v3 / 256; /*0x4d16e4*/
  v18 = *(_DWORD *)v17; /*0x4d16f3*/
  v4 = *(_DWORD *)&stru_89E138.__pad_579C[66544]; /*0x4d170e*/
  v5 = 74 * (v17[1] - ((v17[0] + v17[1]) << 9) - v17[0]) - *(_DWORD *)aP0[1].__pad_0 + 0x7FFFFFFF; /*0x4d1714*/
  if ( *(_DWORD *)&stru_89E138.__pad_579C[66544] ) /*0x4d171c*/
  {
    if ( !stru_89E138.__pad_579C[66552] ) /*0x4d1728*/
    {
      qsort( /*0x4d1739*/
        *(AbstractClass **)&stru_89E138.__pad_579C[66540],
        *(IUnknown **)&stru_89E138.__pad_579C[66544],
        8u,
        globalHelper_0D2ED0);
      v4 = *(_DWORD *)&stru_89E138.__pad_579C[66544]; /*0x4d173e*/
      *(_DWORD *)&stru_89E138.__pad_579C[66556] = 0; /*0x4d1747*/
      stru_89E138.__pad_579C[66552] = 1; /*0x4d174d*/
    }
    *(_DWORD *)v17 = v5; /*0x4d175f*/
    v6 = sub_4D2F00(*(int *)&stru_89E138.__pad_579C[66540], v4, (int *)v17); /*0x4d1763*/
    if ( v6 ) /*0x4d176a*/
    {
      v7 = (v6 - *(_DWORD *)&stru_89E138.__pad_579C[66540]) >> 3; /*0x4d1772*/
      if ( v7 != -1 ) /*0x4d1778*/
      {
        v8 = v7 + 1; /*0x4d177a*/
        for ( i = *(BuildingTypeClass **)&stru_89E138.__pad_579C[66544]; /*0x4d1784*/
              v8 < *(int *)&stru_89E138.__pad_579C[66544];
              i = *(BuildingTypeClass **)&stru_89E138.__pad_579C[66544] )
        {
          v10 = (_DWORD *)(*(_DWORD *)&stru_89E138.__pad_579C[66540] + 8 * v8++); /*0x4d178c*/
          *(v10 - 2) = *v10; /*0x4d1792*/
          *(v10 - 1) = v10[1]; /*0x4d1798*/
        }
        *(_DWORD *)&stru_89E138.__pad_579C[66544] = (char *)i - 1; /*0x4d17ad*/
        *(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_579C[66540] + 8 * *(_DWORD *)&stru_89E138.__pad_579C[66544]) = 0; /*0x4d17b2*/
        *(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_579C[66540] + 8 * *(_DWORD *)&stru_89E138.__pad_579C[66544] + 4) = 0; /*0x4d17c2*/
        *(_DWORD *)&stru_89E138.__pad_579C[66556] = 0; /*0x4d17c6*/
      }
    }
  }
  if ( *(_DWORD *)aP0[1].__pad_0 == 6 ) /*0x4d17d0*/
  {
    v11 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v18); /*0x4d17dc*/
    v12 = Cell::IsBridge(v11); /*0x4d17e3*/
    if ( v12 ) /*0x4d17ea*/
    {
      *((_BYTE *)v12 + 1767) = 0; /*0x4d17ec*/
      v13 = v12 + 343; /*0x4d17f2*/
      edx15 = 21; /*0x4d17f8*/
      do /*0x4d180d*/
      {
        if ( *v13 ) /*0x4d17fd*/
          *(_BYTE *)(*v13 + 409) = 0; /*0x4d1803*/
        ++v13; /*0x4d1809*/
        --edx15; /*0x4d180c*/
      }
      while ( edx15 ); /*0x4d180d*/
    }
  }
  if ( *(_DWORD *)&stru_87C374.__pad_579C[22548] ) /*0x4d1817*/
    Cell::CreateCrater( /*0x4d184b*/
      aP0[1].uniqueId - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22548] + 176),
      aP0[1].abstractFlags - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22548] + 180),
      aP0[1].nextArrayIndex,
      aP0[1].referenceCount,
      0);
  v14 = *(CCINIClass **)aP0[2].__pad_0; /*0x4d1852*/
  aP0[1].Cell[0] = (int)&VectorClass<FoggedObjectClass::DrawRecord>::`vftable'; /*0x4d1855*/
  if ( v14 && aP0[2].__pad_0[9] ) /*0x4d1860*/
  {
    __3_YAXPAX_Z(v14); /*0x4d1866*/
    *(_DWORD *)aP0[2].__pad_0 = 0; /*0x4d186e*/
  }
  aP0[2].__pad_0[9] = 0; /*0x4d1873*/
  *(_DWORD *)&aP0[2].__pad_0[4] = 0; /*0x4d1876*/
  AbstractClass::DTOR(aP0); /*0x4d1879*/
  return result; /*0x4d187e*/
}
}
} // namespace gamemd

// 0x4D2370
namespace gamemd {
int sub_4D2370()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4D2370()
{
  int result; // eax
  int v1; // esi
  int v2; // edi
  _WORD *v3; // esi
  int v4; // edi
  _DWORD *v5; // eax
  _DWORD *v6; // edi
  _DWORD *v7; // eax
  int v8; // [esp+8h] [ebp-1Ch]
  int i; // [esp+Ch] [ebp-18h]
  int v10; // [esp+10h] [ebp-14h] BYREF
  _BYTE v11[4]; // [esp+14h] [ebp-10h] BYREF
  _DWORD v12[3]; // [esp+18h] [ebp-Ch] BYREF

  result = MEMORY[0x8B3D20]; /*0x4d2373*/
  v1 = 0; /*0x4d2379*/
  for ( i = 0; v1 < MEMORY[0x8B3D20]; i = v1 ) /*0x4d2381*/
  {
    v2 = *((_DWORD *)MEMORY[0x8B3D14] + v1); /*0x4d2399*/
    if ( *(_DWORD *)(v2 + 48) == 6 /*0x4d23ae*/
      && (*(int (__thiscall **)(_DWORD, _DWORD))(***(_DWORD ***)(v2 + 96) + 144))(**(_DWORD **)(v2 + 96), 0) )
    {
      if ( *(_DWORD *)(v2 + 48) == 6 ) /*0x4d23bf*/
        v3 = (_WORD *)(*(int (__thiscall **)(_DWORD, _DWORD))(***(_DWORD ***)(v2 + 96) + 144))( /*0x4d23d0*/
                        **(_DWORD **)(v2 + 96),
                        0);
      else
        v3 = 0; /*0x4d23d4*/
      v4 = *(_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v2 + 96))(v2, v11); /*0x4d23e2*/
      v10 = v4; /*0x4d23e4*/
      while ( *v3 != 0x7FFF || v3[1] != 0x7FFF ) /*0x4d23f9*/
      {
        LOWORD(v8) = v4 + *v3; /*0x4d2408*/
        HIWORD(v8) = HIWORD(v4) + v3[1]; /*0x4d240d*/
        v10 = v8; /*0x4d241c*/
        v5 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v10); /*0x4d2420*/
        v3 += 2; /*0x4d2436*/
        v5[80] |= 0x400000u; /*0x4d2439*/
      }
      v1 = i; /*0x4d2478*/
    }
    else
    {
      v6 = (_DWORD *)(v2 + 52); /*0x4d243d*/
      v12[0] = *v6; /*0x4d2442*/
      v12[1] = v6[1]; /*0x4d244e*/
      v12[2] = v6[2]; /*0x4d2455*/
      v7 = Coord::To_Cell(&MEMORY[0x87F7E8], v12); /*0x4d245e*/
      v7[80] |= 0x400000u; /*0x4d2474*/
    }
    result = MEMORY[0x8B3D20]; /*0x4d247c*/
    ++v1; /*0x4d2481*/
  }
  return result; /*0x4d2491*/
}
}
} // namespace gamemd

// 0x4D2ED0
namespace gamemd {
int globalHelper_0D2ED0(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl globalHelper_0D2ED0(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x4d2ee0*/
  else
    return *a1 >= *a2 ? 1 : -1;
}
}
} // namespace gamemd

// 0x4D2F00
namespace gamemd {
int sub_4D2F00(int a1, int a2, int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_4D2F00(int a1, int a2, int *a3)
{
  int v3; // esi
  int v4; // ebx
  int v5; // edi

  v3 = a2; /*0x4d2f05*/
  if ( a2 <= 0 ) /*0x4d2f07*/
    return 0; /*0x4d2f39*/
  v4 = *a3; /*0x4d2f0d*/
  while ( 1 ) /*0x4d2f16*/
  {
    v5 = *(_DWORD *)(a1 + 8 * (v3 / 2)); /*0x4d2f16*/
    if ( v5 <= v4 ) /*0x4d2f1e*/
      break; /*0x4d2f1e*/
    v3 /= 2; /*0x4d2f20*/
LABEL_7:
    if ( v3 <= 0 ) /*0x4d2f32*/
      return 0; /*0x4d2f32*/
  }
  if ( v5 != v4 ) /*0x4d2f24*/
  {
    a1 += 8 * (v3 / 2) + 8; /*0x4d2f26*/
    v3 += -1 - v3 / 2; /*0x4d2f2e*/
    goto LABEL_7; /*0x4d2f2e*/
  }
  return a1 + 8 * (v3 / 2); /*0x4d2f34*/
}
}
} // namespace gamemd

// 0x4D2F50
namespace gamemd {
void sub_4D2F50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4D2F50()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4d2f5c*/
  MEMORY[0x8B3D90] = Math::Sqrt(v0 + v0); /*0x4d2f6e*/
}
}
} // namespace gamemd

// 0x4D2F80
namespace gamemd {
void sub_4D2F80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4D2F80()
{
  MEMORY[0x8B3DF8] = MEMORY[0x8B3D90] / 60.0; /*0x4d2f8c*/
}
}
} // namespace gamemd

// 0x4D2FA0
namespace gamemd {
void sub_4D2FA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4D2FA0()
{
  MEMORY[0x8B3DE0] = 1.0 / MEMORY[0x8B3DF8]; /*0x4d2fac*/
}
}
} // namespace gamemd

// 0x4D2FC0
namespace gamemd {
void sub_4D2FC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4D2FC0()
{
  MEMORY[0x8B3DD8] = 0.0174532925199433 * 45.0; /*0x4d2fcc*/
}
}
} // namespace gamemd

// 0x4D2FE0
namespace gamemd {
void sub_4D2FE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4D2FE0()
{
  MEMORY[0x8B3D98] = 0.0174532925199433 * 60.0; /*0x4d2fec*/
}
}
} // namespace gamemd

// 0x4D3000
namespace gamemd {
void sub_4D3000()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4D3000()
{
  MEMORY[0x8B3D70] = 0.0174532925199433 * 90.0; /*0x4d300c*/
}
}
} // namespace gamemd

// 0x4D3020
namespace gamemd {
long long sub_4D3020()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4D3020()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8B3D70] - MEMORY[0x8B3D98]); /*0x4d3032*/
  result = Math::RoundToInt(v0 * MEMORY[0x8B3D90] * 0.5); /*0x4d3046*/
  MEMORY[0x8B3E00] = result; /*0x4d304b*/
  return result; /*0x4d3050*/
}
}
} // namespace gamemd

// 0x4D3060
namespace gamemd {
void sub_4D3060()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4D3060()
{
  MEMORY[0x8B3DA0] = Math::ArcTan((double)MEMORY[0x8B3E00] * 0.00390625); /*0x4d3077*/
}
}
} // namespace gamemd

// 0x4D3090
namespace gamemd {
void sub_4D3090()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4D3090()
{
  MEMORY[0x8B3DB8] = Math::ArcTan((double)(2 * MEMORY[0x8B3E00]) / MEMORY[0x8B3D90]); /*0x4d30b2*/
}
}
} // namespace gamemd

// 0x4D30C0
namespace gamemd {
long long sub_4D30C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4D30C0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8B3E00]) + 0.5); /*0x4d30db*/
  MEMORY[0x8B3DF4] = result; /*0x4d30e0*/
  return result; /*0x4d30e6*/
}
}
} // namespace gamemd

// 0x4D30F0
namespace gamemd {
int sub_4D30F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4D30F0()
{
  MEMORY[0x8B3D88] = 0; /*0x4d30f2*/
  return 0; /*0x4d30fe*/
}
}
} // namespace gamemd

// 0x4D3100
namespace gamemd {
int sub_4D3100()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4D3100()
{
  MEMORY[0x8B3DA8] = 0; /*0x4d3102*/
  MEMORY[0x8B3DAC] = 0; /*0x4d3107*/
  MEMORY[0x8B3DB0] = 0; /*0x4d310c*/
  return 0; /*0x4d3111*/
}
}
} // namespace gamemd

// 0x4D3120
namespace gamemd {
int sub_4D3120()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4D3120()
{
  MEMORY[0x8B3DF0] = 0; /*0x4d3125*/
  MEMORY[0x8B3DE8] = 128; /*0x4d312f*/
  MEMORY[0x8B3DEC] = 128; /*0x4d3134*/
  return 128; /*0x4d3139*/
}
}
} // namespace gamemd

// 0x4D3140
namespace gamemd {
int sub_4D3140()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4D3140()
{
  MEMORY[0x8B3D78] = 0; /*0x4d3142*/
  MEMORY[0x8B3D7C] = 0; /*0x4d3147*/
  MEMORY[0x8B3D80] = 0; /*0x4d314c*/
  MEMORY[0x8B3D84] = 0; /*0x4d3151*/
  return 0; /*0x4d3156*/
}
}
} // namespace gamemd

// 0x4D3160
namespace gamemd {
int sub_4D3160()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4D3160()
{
  MEMORY[0x8B3DC4] = 0; /*0x4d3167*/
  MEMORY[0x8B3DC8] = 0; /*0x4d316c*/
  MEMORY[0x8B3DCC] = 1; /*0x4d3171*/
  MEMORY[0x8B3DCD] = 0; /*0x4d3178*/
  MEMORY[0x8B3DC0] = (int)&off_7E8C28; /*0x4d317d*/
  MEMORY[0x8B3DD4] = 10; /*0x4d3187*/
  MEMORY[0x8B3DD0] = 0; /*0x4d3191*/
  return atexit(sub_4D31A0); /*0x4d319c*/
}
}
} // namespace gamemd

// 0x4D31A0
namespace gamemd {
void sub_4D31A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4D31A0()
{
  MEMORY[0x8B3DC0] = (int)&VectorClass<FootClass *>::`vftable'; /*0x4d31a8*/
  if ( MEMORY[0x8B3DC4] && MEMORY[0x8B3DCD] ) /*0x4d31bc*/
  {
    __3_YAXPAX_Z(MEMORY[0x8B3DC4]); /*0x4d31bf*/
    MEMORY[0x8B3DC4] = 0; /*0x4d31c7*/
  }
  MEMORY[0x8B3DCD] = 0; /*0x4d31cd*/
  MEMORY[0x8B3DC8] = 0; /*0x4d31d3*/
}
}
} // namespace gamemd

// 0x4D4FC0
namespace gamemd {
unsigned int * sub_4D4FC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_4D4FC0(void *this)
{
  int v2; // ebx
  _WORD *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  int v7; // ebp
  int v9; // [esp+10h] [ebp-Ch]
  int v10; // [esp+14h] [ebp-8h] BYREF
  char v11[4]; // [esp+18h] [ebp-4h] BYREF

  v2 = 0; /*0x4d4fc9*/
  while ( 1 ) /*0x4d4fd4*/
  {
    v3 = (_WORD *)(*(int (__thiscall **)(void *, char *))(*(_DWORD *)this + 440))(this, v11); /*0x4d4fd4*/
    LOWORD(v9) = LOWORD(MEMORY[0x89F688][v2 & 7]) + *v3; /*0x4d4ff8*/
    HIWORD(v9) = v3[1] + HIWORD(MEMORY[0x89F688][v2 & 7]); /*0x4d4ffe*/
    v10 = v9; /*0x4d500c*/
    v4 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v10); /*0x4d5010*/
    v5 = Cell::IsBridge(v4); /*0x4d5017*/
    v6 = v5; /*0x4d501c*/
    if ( v5 ) /*0x4d5020*/
    {
      if ( *(_BYTE *)(v5[328] + 5493) ) /*0x4d5028*/
      {
        v7 = (*(int (__thiscall **)(_DWORD *))(*v5 + 60))(v5); /*0x4d5039*/
        if ( v7 == (*(int (__thiscall **)(void *))(*(_DWORD *)this + 60))(this) ) /*0x4d5044*/
          break; /*0x4d5044*/
      }
    }
    if ( ++v2 >= 8 ) /*0x4d504a*/
      return 0; /*0x4d5059*/
  }
  return v6; /*0x4d5050*/
}
}
} // namespace gamemd

// 0x4DA020
namespace gamemd {
unsigned int * globalHelper_0DA020(unsigned int * a0, AbstractClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__stdcall globalHelper_0DA020(_DWORD *a0, AbstractClass *aP1)
{
  *a0 = *(_DWORD *)aP1->__pad_0; /*0x4da02a*/
  return a0; /*0x4da02c*/
}
}
} // namespace gamemd

// 0x4DB8A0
namespace gamemd {
LPVOID sub_4DB8A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LPVOID __thiscall sub_4DB8A0(_DWORD *this)
{
  int v2; // ebx
  int v3; // eax
  int v4; // eax
  LPVOID v5; // esi
  LPVOID result; // eax
  LPVOID ppv; // [esp+20h] [ebp-8h] BYREF
  int v8; // [esp+24h] [ebp-4h] BYREF

  v2 = *(this + 413); /*0x4db8a7*/
  if ( v2 ) /*0x4db8af*/
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v2 + 4))(*(this + 413)); /*0x4db8b4*/
  ppv = 0; /*0x4db8c4*/
  v3 = CreateInstanceCOM(&ppv, (IID *)&g_CLSID_DriveLocomotion, 0, 7u); /*0x4db8cc*/
  if ( v3 < 0 && v3 != -2147467262 ) /*0x4db8da*/
    WinAPI::Wrapper(v3); /*0x4db8dd*/
  if ( !ppv ) /*0x4db8e8*/
    WinAPI::Wrapper(-2147467261); /*0x4db8ef*/
  (*(void (__stdcall **)(LPVOID, _DWORD *))(*(_DWORD *)ppv + 12))(ppv, this); /*0x4db8fc*/
  v8 = 0; /*0x4db903*/
  if ( !ppv ) /*0x4db90d*/
    goto LABEL_13; /*0x4db90d*/
  v4 = StreamClass::Set(&v8, &ppv); /*0x4db918*/
  if ( v4 < 0 && v4 != -2147467262 ) /*0x4db926*/
    WinAPI::Wrapper(v4); /*0x4db929*/
  if ( !v8 ) /*0x4db934*/
LABEL_13:
    WinAPI::Wrapper(-2147467261); /*0x4db93b*/
  (*(void (__stdcall **)(int, int))(*(_DWORD *)v8 + 12))(v8, v2); /*0x4db949*/
  v5 = (LPVOID)*(this + 413); /*0x4db94c*/
  result = ppv; /*0x4db952*/
  if ( v5 != ppv ) /*0x4db958*/
  {
    *(this + 413) = ppv; /*0x4db95c*/
    if ( result ) /*0x4db962*/
    {
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)result + 4))(result); /*0x4db967*/
      result = ppv; /*0x4db96a*/
    }
    if ( v5 ) /*0x4db970*/
    {
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)v5 + 8))(v5); /*0x4db975*/
      result = ppv; /*0x4db978*/
    }
  }
  if ( v8 ) /*0x4db983*/
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v8 + 8))(v8); /*0x4db988*/
    result = ppv; /*0x4db98b*/
  }
  if ( result ) /*0x4db991*/
    result = (LPVOID)(*(int (__stdcall **)(LPVOID))(*(_DWORD *)result + 8))(result); /*0x4db996*/
  if ( v2 ) /*0x4db99b*/
    return (LPVOID)(*(int (__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2); /*0x4db9a0*/
  return result; /*0x4db9a3*/
}
}
} // namespace gamemd

// 0x4DF280
namespace gamemd {
void sub_4DF280()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_4DF280(_DWORD *this)
{
  int v2; // ecx
  _DWORD *v3; // eax
  int v4; // [esp+4h] [ebp-14h]
  int v5; // [esp+8h] [ebp-10h] BYREF
  _BYTE v6[12]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = *(this + 371); /*0x4df286*/
  if ( v2 ) /*0x4df28e*/
  {
    v3 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v2 + 72))(v2, v6); /*0x4df297*/
    LOWORD(v4) = *v3 / 256; /*0x4df2aa*/
    HIWORD(v4) = v3[1] / 256; /*0x4df2c3*/
    v5 = v4; /*0x4df2d1*/
    *(this + 370) = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v5); /*0x4df2da*/
  }
  else
  {
    *(this + 370) = 0; /*0x4df2ef*/
  }
  *(this + 371) = 0; /*0x4df2e0*/
}
}
} // namespace gamemd
