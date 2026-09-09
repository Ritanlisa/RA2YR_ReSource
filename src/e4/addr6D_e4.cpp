// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x6D0E50
namespace gamemd {
void nullsub_236()
{
  ;
}
} // namespace gamemd

// 0x6D0F10
namespace gamemd {
void * sub_6D0F10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *sub_6D0F10()
{
  int v0; // esi
  int *v1; // edi
  void *result; // eax
  bool v3; // cl
  bool v4; // [esp+Bh] [ebp-101h] BYREF
  char Buffer[256]; // [esp+Ch] [ebp-100h] BYREF

  v4 = 0; /*0x6d0f18*/
  v0 = 0; /*0x6d0f1d*/
  v1 = MEMORY[0xB0C148]; /*0x6d0f1f*/
  do /*0x6d0f5a*/
  {
    sprintf(Buffer, MEMORY[0x842828], v0); /*0x6d0f2f*/
    result = LoadFileSHP(Buffer, &v4); /*0x6d0f3f*/
    v3 = v4; /*0x6d0f44*/
    *v1 = (int)result; /*0x6d0f48*/
    MEMORY[0xB0CBDC][v0] = v3; /*0x6d0f4a*/
    ++v1; /*0x6d0f50*/
    ++v0; /*0x6d0f53*/
  }
  while ( (int)v1 < (int)&MEMORY[0xB0C1AC] ); /*0x6d0f5a*/
  return result; /*0x6d0f5c*/
}
}
} // namespace gamemd

// 0x6D0FB0
namespace gamemd {
int sub_6D0FB0(int a1, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_6D0FB0(int a1, int a2, int a3)
{
  *(_DWORD *)(a1 + 36) = a2; /*0x6d0fb0*/
  *(_DWORD *)(a1 + 80) = MEMORY[0x87F6CC]; /*0x6d0fbc*/
  *(_DWORD *)(a1 + 32) = a3; /*0x6d0fc1*/
  *(_BYTE *)(a1 + 45) = 0; /*0x6d0fc4*/
  *(_DWORD *)(a1 + 48) = 0; /*0x6d0fc7*/
  return 0; /*0x6d0fca*/
}
}
} // namespace gamemd

// 0x6D1130
namespace gamemd {
int sub_6D1130()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6D1130()
{
  void *v0; // esi

  MEMORY[0xB0CCD4] = 240; /*0x6d1149*/
  MEMORY[0xB0CD00] = MEMORY[0x87F6CC]; /*0x6d1153*/
  MEMORY[0xB0CCDD] = 0; /*0x6d1158*/
  MEMORY[0xB0CCE0] = 0; /*0x6d115e*/
  MEMORY[0xB0CCD0] = 5; /*0x6d1164*/
  v0 = MEMORY[0xB0FA90]; /*0x6d116c*/
  Rect_Point::Set(MEMORY[0xB0CCB0], *(_DWORD *)MEMORY[0xB0FC60], *((_DWORD *)MEMORY[0xB0FC60] + 1)); /*0x6d118a*/
  ShapeButton::SetShape((int)MEMORY[0xB0CCB0], (int)v0, 0, 0); /*0x6d1197*/
  MEMORY[0xB0CC64] = 241; /*0x6d11a7*/
  MEMORY[0xB0CC90] = MEMORY[0x87F6CC]; /*0x6d11b1*/
  MEMORY[0xB0CC6D] = 0; /*0x6d11b6*/
  MEMORY[0xB0CC70] = 0; /*0x6d11bc*/
  MEMORY[0xB0CC60] = 5; /*0x6d11c2*/
  Rect_Point::Set(MEMORY[0xB0CC40], *(_DWORD *)MEMORY[0xB0FC64], *((_DWORD *)MEMORY[0xB0FC64] + 1)); /*0x6d11e2*/
  return ShapeButton::SetShape((int)MEMORY[0xB0CC40], (int)v0, 0, 0); /*0x6d11f4*/
}
}
} // namespace gamemd

// 0x6D1570
namespace gamemd {
char sub_6D1570()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_6D1570(void *this)
{
  char result; // al
  _DWORD v2[6]; // [esp+4h] [ebp-1Ch] BYREF
  char v3; // [esp+1Ch] [ebp-4h]

  result = (*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)this + 48))(this, MEMORY[0xB0CC40]); /*0x6d157a*/
  if ( MEMORY[0xB0CC40] ) /*0x6d1584*/
  {
    v2[2] = MEMORY[0xB0CC50]; /*0x6d1597*/
    v2[1] = MEMORY[0xB0CC4C]; /*0x6d15a1*/
    v2[4] = MEMORY[0xB0CC58]; /*0x6d15ab*/
    v3 = 0; /*0x6d15b6*/
    v2[0] = MEMORY[0xB0CC64]; /*0x6d15bb*/
    v2[5] = MEMORY[0x842838]; /*0x6d15bf*/
    v2[3] = MEMORY[0xB0CC54]; /*0x6d15c7*/
    HashTable::Remove((int *)MEMORY[0x887368], MEMORY[0xB0CC64]); /*0x6d15cb*/
    return CommandClass::AddAction(MEMORY[0x887368], (int)v2); /*0x6d15db*/
  }
  return result; /*0x6d15e0*/
}
}
} // namespace gamemd

// 0x6D1830
namespace gamemd {
void sub_6D1830()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6D1830()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6d183c*/
  MEMORY[0xB0CD78] = Math::Sqrt(v0 + v0); /*0x6d184e*/
}
}
} // namespace gamemd

// 0x6D1860
namespace gamemd {
void sub_6D1860()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6D1860()
{
  MEMORY[0xB0CEB8] = MEMORY[0xB0CD78] / 60.0; /*0x6d186c*/
}
}
} // namespace gamemd

// 0x6D1880
namespace gamemd {
void sub_6D1880()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6D1880()
{
  MEMORY[0xB0CEA0] = 1.0 / MEMORY[0xB0CEB8]; /*0x6d188c*/
}
}
} // namespace gamemd

// 0x6D18A0
namespace gamemd {
void sub_6D18A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6D18A0()
{
  MEMORY[0xB0CE98] = 0.0174532925199433 * 45.0; /*0x6d18ac*/
}
}
} // namespace gamemd

// 0x6D18C0
namespace gamemd {
void sub_6D18C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6D18C0()
{
  MEMORY[0xB0CD88] = 0.0174532925199433 * 60.0; /*0x6d18cc*/
}
}
} // namespace gamemd

// 0x6D18E0
namespace gamemd {
void sub_6D18E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6D18E0()
{
  MEMORY[0xB0CD50] = 0.0174532925199433 * 90.0; /*0x6d18ec*/
}
}
} // namespace gamemd

// 0x6D1900
namespace gamemd {
long long sub_6D1900()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_6D1900()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0CD50] - MEMORY[0xB0CD88]); /*0x6d1912*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0CD78] * 0.5); /*0x6d1926*/
  MEMORY[0xB0CEC0] = result; /*0x6d192b*/
  return result; /*0x6d1930*/
}
}
} // namespace gamemd

// 0x6D1940
namespace gamemd {
void sub_6D1940()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6D1940()
{
  MEMORY[0xB0CD90] = Math::ArcTan((double)MEMORY[0xB0CEC0] * 0.00390625); /*0x6d1957*/
}
}
} // namespace gamemd

// 0x6D1970
namespace gamemd {
void sub_6D1970()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6D1970()
{
  MEMORY[0xB0CE20] = Math::ArcTan((double)(2 * MEMORY[0xB0CEC0]) / MEMORY[0xB0CD78]); /*0x6d1992*/
}
}
} // namespace gamemd

// 0x6D19A0
namespace gamemd {
long long sub_6D19A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_6D19A0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0CEC0]) + 0.5); /*0x6d19bb*/
  MEMORY[0xB0CEB4] = result; /*0x6d19c0*/
  return result; /*0x6d19c6*/
}
}
} // namespace gamemd

// 0x6D19D0
namespace gamemd {
int sub_6D19D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6D19D0()
{
  MEMORY[0xB0CD74] = 0; /*0x6d19d2*/
  MEMORY[0xB0CD76] = 0; /*0x6d19d8*/
  return 0; /*0x6d19de*/
}
}
} // namespace gamemd

// 0x6D19E0
namespace gamemd {
int sub_6D19E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6D19E0()
{
  MEMORY[0xB0CE08] = 0; /*0x6d19e2*/
  MEMORY[0xB0CE0C] = 0; /*0x6d19e7*/
  MEMORY[0xB0CE10] = 0; /*0x6d19ec*/
  return 0; /*0x6d19f1*/
}
}
} // namespace gamemd

// 0x6D1A00
namespace gamemd {
int sub_6D1A00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6D1A00()
{
  MEMORY[0xB0CEB0] = 0; /*0x6d1a05*/
  MEMORY[0xB0CEA8] = 128; /*0x6d1a0f*/
  MEMORY[0xB0CEAC] = 128; /*0x6d1a14*/
  return 128; /*0x6d1a19*/
}
}
} // namespace gamemd

// 0x6D1A20
namespace gamemd {
int sub_6D1A20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6D1A20()
{
  MEMORY[0xB0CD60] = 0; /*0x6d1a22*/
  MEMORY[0xB0CD64] = 0; /*0x6d1a27*/
  MEMORY[0xB0CD68] = 0; /*0x6d1a2c*/
  MEMORY[0xB0CD6C] = 0; /*0x6d1a31*/
  return 0; /*0x6d1a36*/
}
}
} // namespace gamemd

// 0x6D1A40
namespace gamemd {
int sub_6D1A40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6D1A40()
{
  MEMORY[0xB0CE28] = 0; /*0x6d1a42*/
  MEMORY[0xB0CE2C] = 0; /*0x6d1a47*/
  MEMORY[0xB0CE30] = 0; /*0x6d1a4c*/
  MEMORY[0xB0CE34] = 0; /*0x6d1a51*/
  return 0; /*0x6d1a56*/
}
}
} // namespace gamemd

// 0x6D1A60
namespace gamemd {
int sub_6D1A60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6D1A60()
{
  MEMORY[0xB0CE7C] = 0; /*0x6d1a67*/
  MEMORY[0xB0CE80] = 0; /*0x6d1a6c*/
  MEMORY[0xB0CE84] = 1; /*0x6d1a71*/
  MEMORY[0xB0CE85] = 0; /*0x6d1a78*/
  MEMORY[0xB0CE78] = (int)&off_7F429C; /*0x6d1a7d*/
  MEMORY[0xB0CE8C] = 10; /*0x6d1a87*/
  MEMORY[0xB0CE88] = 0; /*0x6d1a91*/
  return atexit(sub_6D1AA0); /*0x6d1a9c*/
}
}
} // namespace gamemd

// 0x6D1AA0
namespace gamemd {
void sub_6D1AA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_6D1AA0()
{
  if ( (MEMORY[0xB0CD58] & 1) == 0 ) /*0x6d1aaa*/
  {
    MEMORY[0xB0CE78] = (int)&VectorClass<DirtyAreaStruct>::`vftable'; /*0x6d1aae*/
    MEMORY[0xB0CD58] |= 1u; /*0x6d1ac1*/
    if ( MEMORY[0xB0CE7C] ) /*0x6d1ac7*/
    {
      if ( MEMORY[0xB0CE85] ) /*0x6d1ad1*/
      {
        __3_YAXPAX_Z(MEMORY[0xB0CE7C]); /*0x6d1ad4*/
        MEMORY[0xB0CE7C] = 0; /*0x6d1adc*/
      }
    }
    MEMORY[0xB0CE85] = 0; /*0x6d1ae6*/
    MEMORY[0xB0CE80] = 0; /*0x6d1aed*/
  }
}
}
} // namespace gamemd

// 0x6D1B10
namespace gamemd {
int sub_6D1B10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6D1B10()
{
  MEMORY[0xB0CDEC] = 0; /*0x6d1b17*/
  MEMORY[0xB0CDF0] = 0; /*0x6d1b1c*/
  MEMORY[0xB0CDF4] = 1; /*0x6d1b21*/
  MEMORY[0xB0CDF5] = 0; /*0x6d1b28*/
  MEMORY[0xB0CDE8] = (int)&DynamicVectorClass<ShadowControlClass *>::`vftable'; /*0x6d1b2d*/
  MEMORY[0xB0CDFC] = 10; /*0x6d1b37*/
  MEMORY[0xB0CDF8] = 0; /*0x6d1b41*/
  return atexit(sub_6D1B50); /*0x6d1b4c*/
}
}
} // namespace gamemd

// 0x6D1B50
namespace gamemd {
void sub_6D1B50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_6D1B50()
{
  if ( (MEMORY[0xB0CD59] & 1) == 0 ) /*0x6d1b5a*/
  {
    MEMORY[0xB0CDE8] = (int)&VectorClass<ShadowControlClass *>::`vftable'; /*0x6d1b5e*/
    MEMORY[0xB0CD59] |= 1u; /*0x6d1b71*/
    if ( MEMORY[0xB0CDEC] ) /*0x6d1b77*/
    {
      if ( MEMORY[0xB0CDF5] ) /*0x6d1b81*/
      {
        __3_YAXPAX_Z(MEMORY[0xB0CDEC]); /*0x6d1b84*/
        MEMORY[0xB0CDEC] = 0; /*0x6d1b8c*/
      }
    }
    MEMORY[0xB0CDF5] = 0; /*0x6d1b96*/
    MEMORY[0xB0CDF0] = 0; /*0x6d1b9d*/
  }
}
}
} // namespace gamemd

// 0x6D1BB0
namespace gamemd {
void sub_6D1BB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6D1BB0()
{
  MEMORY[0xB0CE18] = 60.0 / MEMORY[0xB0CD78]; /*0x6d1bc9*/
  MEMORY[0xB0CD48] = Math::SinCos(MEMORY[0xB0CD88]) * MEMORY[0xB0CE18]; /*0x6d1bdd*/
}
}
} // namespace gamemd

// 0x6D1BF0
namespace gamemd {
void sub_6D1BF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6D1BF0()
{
  MEMORY[0xB0CDD8] = MEMORY[0xB0CD78] / (Math::SinCos(MEMORY[0xB0CD88]) * 60.0); /*0x6d1c11*/
}
}
} // namespace gamemd

// 0x6D1E80
namespace gamemd {
void sub_6D1E80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_6D1E80(_DWORD *this)
{
  *this = &Tactical::`vftable'; /*0x6d1e80*/
  *(this + 1) = &Tactical::`vftable'; /*0x6d1e86*/
  *(this + 2) = &Tactical::`vftable'; /*0x6d1e8d*/
  *(this + 3) = &Tactical::`vftable'; /*0x6d1e94*/
  MEMORY[0x887324] = 0; /*0x6d1e9b*/
  AbstractClass::DTOR(this); /*0x6d1ea5*/
}
}
} // namespace gamemd

// 0x6D20E0
namespace gamemd {
long long ZCoordToScreenY(IUnknown * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 __fastcall ZCoordToScreenY(IUnknown *aP0)
{
  return Math::RoundToInt((double)(int)aP0 * *(double *)&stru_B05488.__pad_579C[8484] + (double)((int)aP0 >= 728) + 0.5); /*0x6d2118*/
}
}
} // namespace gamemd

// 0x6D2B50
namespace gamemd {
void nullsub_238(int a1, int a2)
{
  ;
}
} // namespace gamemd

// 0x6D4E00
namespace gamemd {
void sub_6D4E00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_6D4E00(int this)
{
  *(_DWORD *)(this + 164) = -1; /*0x6d4e00*/
  *(_WORD *)(this + 36) = 0; /*0x6d4e0a*/
}
}
} // namespace gamemd

// 0x6D61C0
namespace gamemd {
int sub_6D61C0(int a1, int a2, int * a3, int * a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_6D61C0(int a1, int a2, int *a3, int *a4)
{
  int result; // eax

  *a3 = 60 * a1 / 2; /*0x6d61d6*/
  *a4 = 30 * a1 / 2; /*0x6d61e9*/
  *a3 += -60 * a2 / 2; /*0x6d6203*/
  result = 30 * a2 / 2; /*0x6d6211*/
  *a4 += result; /*0x6d6215*/
  return result; /*0x6d6205*/
}
}
} // namespace gamemd

// 0x6D6A90
namespace gamemd {
long long sub_6D6A90(unsigned int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 __stdcall sub_6D6A90(_DWORD *a1)
{
  void *v1; // eax
  int v2; // edx
  _DWORD v4[2]; // [esp+4h] [ebp-8h] BYREF

  v1 = Coord::To_Cell(&MEMORY[0x87F7E8], a1); /*0x6d6a9e*/
  v2 = a1[1]; /*0x6d6aa5*/
  v4[0] = *a1; /*0x6d6aa8*/
  v4[1] = v2; /*0x6d6ab3*/
  return Isometric::InitTables((int)v1, v4); /*0x6d6abc*/
}
}
} // namespace gamemd

// 0x6D6BB0
namespace gamemd {
unsigned int * sub_6D6BB0(unsigned short * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__stdcall sub_6D6BB0(_WORD *a1)
{
  _WORD *v1; // edi
  __int16 v2; // ax
  int v3; // esi
  _DWORD *result; // eax
  int v5; // ecx
  __int16 v6; // cx
  int v7; // esi
  int v8; // ecx
  __int16 v9; // ax
  int v10; // esi
  int v11; // ecx
  __int16 v12; // cx
  int v13; // esi
  int v14; // ecx

  v1 = a1; /*0x6d6bb2*/
  v2 = *a1 + 2; /*0x6d6bbd*/
  HIWORD(a1) = a1[1]; /*0x6d6bc1*/
  LOWORD(a1) = v2; /*0x6d6bc6*/
  v3 = 0; /*0x6d6bd3*/
  while ( 1 ) /*0x6d6bdf*/
  {
    result = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a1); /*0x6d6bdf*/
    v5 = result[80]; /*0x6d6be4*/
    if ( (v5 & 0x80u) != 0 && result[17] && (v5 & 0x800) != 0 ) /*0x6d6bf9*/
      break; /*0x6d6bf9*/
    ++HIWORD(a1); /*0x6d6bff*/
    if ( ++v3 >= 5 ) /*0x6d6c08*/
    {
      v6 = *v1 + 1; /*0x6d6c11*/
      HIWORD(a1) = v1[1]; /*0x6d6c13*/
      LOWORD(a1) = v6; /*0x6d6c18*/
      v7 = 0; /*0x6d6c25*/
      while ( 1 ) /*0x6d6c31*/
      {
        result = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a1); /*0x6d6c31*/
        v8 = result[80]; /*0x6d6c36*/
        if ( (v8 & 0x80u) != 0 && result[17] && (v8 & 0x800) != 0 ) /*0x6d6c4b*/
          break; /*0x6d6c4b*/
        ++HIWORD(a1); /*0x6d6c51*/
        if ( ++v7 >= 5 ) /*0x6d6c5a*/
        {
          v9 = v1[1] + 2; /*0x6d6c63*/
          LOWORD(a1) = *v1; /*0x6d6c67*/
          HIWORD(a1) = v9; /*0x6d6c6c*/
          v10 = 0; /*0x6d6c79*/
          while ( 1 ) /*0x6d6c85*/
          {
            result = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a1); /*0x6d6c85*/
            v11 = result[80]; /*0x6d6c8a*/
            if ( (v11 & 0x80u) != 0 && result[17] && (v11 & 0x800) == 0 ) /*0x6d6c9f*/
              break; /*0x6d6c9f*/
            LOWORD(a1) = (_WORD)a1 + 1; /*0x6d6ca1*/
            if ( ++v10 >= 5 ) /*0x6d6caa*/
            {
              v12 = v1[1] + 1; /*0x6d6cb3*/
              LOWORD(a1) = *v1; /*0x6d6cb5*/
              HIWORD(a1) = v12; /*0x6d6cba*/
              v13 = 0; /*0x6d6cc7*/
              while ( 1 ) /*0x6d6cd3*/
              {
                result = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a1); /*0x6d6cd3*/
                v14 = result[80]; /*0x6d6cd8*/
                if ( (v14 & 0x80u) != 0 && result[17] && (v14 & 0x800) == 0 ) /*0x6d6ced*/
                  break; /*0x6d6ced*/
                LOWORD(a1) = (_WORD)a1 + 1; /*0x6d6cef*/
                if ( ++v13 >= 5 ) /*0x6d6cf8*/
                  return 0; /*0x6d6cfa*/
              }
              return result; /*0x6d6ced*/
            }
          }
          return result; /*0x6d6c9f*/
        }
      }
      return result; /*0x6d6c4b*/
    }
  }
  return result; /*0x6d6cfc*/
}
}
} // namespace gamemd

// 0x6D84D0
namespace gamemd {
int * sub_6D84D0(int * a1, int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__stdcall sub_6D84D0(int *a1, int *a2)
{
  int v2; // edx
  int v4; // edx
  int v5; // [esp+4h] [ebp-8h] BYREF
  int v6; // [esp+8h] [ebp-4h]

  v2 = a2[1]; /*0x6d84da*/
  v5 = *a2; /*0x6d84dd*/
  v6 = v2; /*0x6d84e6*/
  if ( !ClampCoordMap(&v5) || MEMORY[0xA8ED6B] ) /*0x6d84fa*/
  {
    *a1 = *a2; /*0x6d851a*/
    a1[1] = a2[1]; /*0x6d851f*/
    return a1; /*0x6d8514*/
  }
  else
  {
    v4 = v6; /*0x6d8504*/
    *a1 = v5; /*0x6d8509*/
    a1[1] = v4; /*0x6d850b*/
    return a1; /*0x6d84fc*/
  }
}
}
} // namespace gamemd

// 0x6D8630
namespace gamemd {
void nullsub_41()
{
  ;
}
} // namespace gamemd

// 0x6D8640
namespace gamemd {
char ClampCoordMap(AbstractClass * aP0)
// 0x6d8630
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall ClampCoordMap(AbstractClass *aP0)
{
  int v1; // edi
  int v2; // esi
  AbstractClass *v3; // ecx
  AbstractClass *v4; // edx
  char v5; // bl
  AbstractClass *v6; // eax

  v1 = *(_DWORD *)&stru_87C374.__pad_579C[21656] / 2 /*0x6d8670*/
     + 30 * (2 * *(_DWORD *)&stru_87C374.__pad_14B0[8384] - *(_DWORD *)&stru_87C374.__pad_14B0[8376]);
  v2 = v1 + 60 * *(_DWORD *)&stru_87C374.__pad_14B0[8392] - *(_DWORD *)&stru_87C374.__pad_579C[21656]; /*0x6d8690*/
  v3 = (AbstractClass *)(*(_DWORD *)&stru_87C374.__pad_579C[21660] / 2 /*0x6d869c*/
                       + 15
                       * (*(_DWORD *)&stru_87C374.__pad_14B0[8376] + 2 * *(_DWORD *)&stru_87C374.__pad_14B0[8388] - 5));
  v4 = *(AbstractClass **)&aP0->__pad_0[4]; /*0x6d86b3*/
  v5 = 0; /*0x6d86ba*/
  v6 = (AbstractClass *)((char *)v3 /*0x6d86bc*/
                       + (60 * *(_DWORD *)&stru_87C374.__pad_14B0[8396] + 270) / 2
                       - *(_DWORD *)&stru_87C374.__pad_579C[21660]);
  if ( (int)v4 >= (int)v3 ) /*0x6d86c0*/
  {
    if ( (int)v4 > (int)v6 ) /*0x6d86cb*/
    {
      *(_DWORD *)&aP0->__pad_0[4] = v6; /*0x6d86cd*/
      v5 = 1; /*0x6d86d0*/
    }
  }
  else
  {
    v5 = 1; /*0x6d86c2*/
    *(_DWORD *)&aP0->__pad_0[4] = v3; /*0x6d86c4*/
  }
  if ( *(_DWORD *)aP0->__pad_0 >= v1 ) /*0x6d86d7*/
  {
    if ( *(_DWORD *)aP0->__pad_0 <= v2 ) /*0x6d86e7*/
    {
      return v5; /*0x6d86f7*/
    }
    else
    {
      *(_DWORD *)aP0->__pad_0 = v2; /*0x6d86e9*/
      return 1; /*0x6d86ef*/
    }
  }
  else
  {
    *(_DWORD *)aP0->__pad_0 = v1; /*0x6d86d9*/
    return 1; /*0x6d86df*/
  }
}
}
} // namespace gamemd

// 0x6D8C60
namespace gamemd {
int sub_6D8C60(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_6D8C60(int a1, int a2)
{
  _DWORD *v3; // eax
  int v4; // edi
  int v5; // esi
  int v6; // eax
  int result; // eax
  int v8; // edi
  int v9; // esi
  int v10; // [esp+18h] [ebp-1Ch]
  int v12; // [esp+20h] [ebp-14h] BYREF
  int v13; // [esp+24h] [ebp-10h]
  _BYTE v14[12]; // [esp+28h] [ebp-Ch] BYREF

  v3 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 72))(a1, v14); /*0x6d8c77*/
  v10 = v3[1]; /*0x6d8c89*/
  v4 = (-60 * v10 / 2 + 60 * *v3 / 2) / 256; /*0x6d8cf7*/
  v5 = (30 * v10 / 2 + 30 * *v3 / 2) / 256; /*0x6d8cfa*/
  v6 = Math::RoundToInt((double)(int)v3[2] * MEMORY[0xB0CD48] + (double)(v3[2] >= 728) + 0.5); /*0x6d8d21*/
  v12 = v4; /*0x6d8d2d*/
  v13 = v5 - v6; /*0x6d8d31*/
  result = (int)MEMORY[0x887324][45].__tail_0; /*0x6d8d3b*/
  v8 = v4 - (unsigned int)MEMORY[0x887324][44].__tail_0; /*0x6d8d41*/
  v9 = v13 - result; /*0x6d8d43*/
  v12 = v8; /*0x6d8d4b*/
  v13 -= result; /*0x6d8d4f*/
  if ( v8 >= -360 ) /*0x6d8d53*/
  {
    result = MEMORY[0xB0CE30] + 360; /*0x6d8d5a*/
    if ( v8 <= MEMORY[0xB0CE30] + 360 && v9 >= -180 && v9 <= MEMORY[0xB0CE34] + 180 ) /*0x6d8d79*/
    {
      (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)a1 + 268))(a1, &v12, a2); /*0x6d8d8a*/
      return (*(int (__thiscall **)(int, int *, int))(*(_DWORD *)a1 + 272))(a1, &v12, a2); /*0x6d8d9b*/
    }
  }
  return result; /*0x6d8da1*/
}
}
} // namespace gamemd

// 0x6DA350
namespace gamemd {
void nullsub_42()
{
  ;
}
} // namespace gamemd

// 0x6DA370
namespace gamemd {
void nullsub_239(int a1)
{
  ;
}
} // namespace gamemd

// 0x6DC400
namespace gamemd {
void nullsub_43()
{
  ;
}
} // namespace gamemd

// 0x6DC410
namespace gamemd {
void nullsub_44()
{
  ;
}
} // namespace gamemd

// 0x6DC430
namespace gamemd {
int Map_GetCoordData(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall Map_GetCoordData(int a1)
{
  return MEMORY[0xB0CEC8][3 * a1]; /*0x6dc43e*/
}
}
} // namespace gamemd

// 0x6DCD70
namespace gamemd {
void sub_6DCD70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6DCD70()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6dcd7c*/
  MEMORY[0xB0E688] = Math::Sqrt(v0 + v0); /*0x6dcd8e*/
}
}
} // namespace gamemd

// 0x6DCDA0
namespace gamemd {
void sub_6DCDA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6DCDA0()
{
  MEMORY[0xB0E6D8] = MEMORY[0xB0E688] / 60.0; /*0x6dcdac*/
}
}
} // namespace gamemd

// 0x6DCDC0
namespace gamemd {
void sub_6DCDC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6DCDC0()
{
  MEMORY[0xB0E6C0] = 1.0 / MEMORY[0xB0E6D8]; /*0x6dcdcc*/
}
}
} // namespace gamemd

// 0x6DCDE0
namespace gamemd {
void sub_6DCDE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6DCDE0()
{
  MEMORY[0xB0E6B8] = 0.0174532925199433 * 45.0; /*0x6dcdec*/
}
}
} // namespace gamemd

// 0x6DCE00
namespace gamemd {
void sub_6DCE00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6DCE00()
{
  MEMORY[0xB0E690] = 0.0174532925199433 * 60.0; /*0x6dce0c*/
}
}
} // namespace gamemd

// 0x6DCE20
namespace gamemd {
void sub_6DCE20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6DCE20()
{
  MEMORY[0xB0E650] = 0.0174532925199433 * 90.0; /*0x6dce2c*/
}
}
} // namespace gamemd

// 0x6DCE40
namespace gamemd {
long long sub_6DCE40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_6DCE40()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0E650] - MEMORY[0xB0E690]); /*0x6dce52*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0E688] * 0.5); /*0x6dce66*/
  MEMORY[0xB0E6E0] = result; /*0x6dce6b*/
  return result; /*0x6dce70*/
}
}
} // namespace gamemd

// 0x6DCE80
namespace gamemd {
void sub_6DCE80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6DCE80()
{
  MEMORY[0xB0E698] = Math::ArcTan((double)MEMORY[0xB0E6E0] * 0.00390625); /*0x6dce97*/
}
}
} // namespace gamemd

// 0x6DCEB0
namespace gamemd {
void sub_6DCEB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6DCEB0()
{
  MEMORY[0xB0E6B0] = Math::ArcTan((double)(2 * MEMORY[0xB0E6E0]) / MEMORY[0xB0E688]); /*0x6dced2*/
}
}
} // namespace gamemd

// 0x6DCEE0
namespace gamemd {
long long sub_6DCEE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_6DCEE0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0E6E0]) + 0.5); /*0x6dcefb*/
  MEMORY[0xB0E6D4] = result; /*0x6dcf00*/
  return result; /*0x6dcf06*/
}
}
} // namespace gamemd

// 0x6DCF10
namespace gamemd {
int sub_6DCF10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6DCF10()
{
  MEMORY[0xB0E680] = 0; /*0x6dcf12*/
  return 0; /*0x6dcf1e*/
}
}
} // namespace gamemd

// 0x6DCF20
namespace gamemd {
int sub_6DCF20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6DCF20()
{
  MEMORY[0xB0E6A0] = 0; /*0x6dcf22*/
  MEMORY[0xB0E6A4] = 0; /*0x6dcf27*/
  MEMORY[0xB0E6A8] = 0; /*0x6dcf2c*/
  return 0; /*0x6dcf31*/
}
}
} // namespace gamemd

// 0x6DCF40
namespace gamemd {
int sub_6DCF40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6DCF40()
{
  MEMORY[0xB0E6D0] = 0; /*0x6dcf45*/
  MEMORY[0xB0E6C8] = 128; /*0x6dcf4f*/
  MEMORY[0xB0E6CC] = 128; /*0x6dcf54*/
  return 128; /*0x6dcf59*/
}
}
} // namespace gamemd

// 0x6DCF60
namespace gamemd {
int sub_6DCF60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6DCF60()
{
  MEMORY[0xB0E670] = 0; /*0x6dcf62*/
  MEMORY[0xB0E674] = 0; /*0x6dcf67*/
  MEMORY[0xB0E678] = 0; /*0x6dcf6c*/
  MEMORY[0xB0E67C] = 0; /*0x6dcf71*/
  return 0; /*0x6dcf76*/
}
}
} // namespace gamemd

// 0x6DCF80
namespace gamemd {
int sub_6DCF80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6DCF80()
{
  MEMORY[0xB0E65C] = 0; /*0x6dcf87*/
  MEMORY[0xB0E660] = 0; /*0x6dcf8c*/
  MEMORY[0xB0E664] = 1; /*0x6dcf91*/
  MEMORY[0xB0E665] = 0; /*0x6dcf98*/
  MEMORY[0xB0E658] = (int)&off_7F43D0; /*0x6dcf9d*/
  MEMORY[0xB0E66C] = 10; /*0x6dcfa7*/
  MEMORY[0xB0E668] = 0; /*0x6dcfb1*/
  return atexit(sub_6DCFC0); /*0x6dcfbc*/
}
}
} // namespace gamemd

// 0x6DCFC0
namespace gamemd {
void sub_6DCFC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_6DCFC0()
{
  MEMORY[0xB0E658] = (int)&VectorClass<TActionClass *>::`vftable'; /*0x6dcfc8*/
  if ( MEMORY[0xB0E65C] && MEMORY[0xB0E665] ) /*0x6dcfdc*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0E65C]); /*0x6dcfdf*/
    MEMORY[0xB0E65C] = 0; /*0x6dcfe7*/
  }
  MEMORY[0xB0E665] = 0; /*0x6dcfed*/
  MEMORY[0xB0E660] = 0; /*0x6dcff3*/
}
}
} // namespace gamemd
