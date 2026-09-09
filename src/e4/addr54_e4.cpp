// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5406E0
namespace gamemd {
void sub_5406E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5406E0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5406ec*/
  unk_AA0650 = Math::Sqrt(v0 + v0); /*0x5406fe*/
}
}
} // namespace gamemd

// 0x540710
namespace gamemd {
void sub_540710()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_540710()
{
  unk_AA06A0 = unk_AA0650 / 60.0; /*0x54071c*/
}
}
} // namespace gamemd

// 0x540730
namespace gamemd {
void sub_540730()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_540730()
{
  unk_AA0688 = 1.0 / unk_AA06A0; /*0x54073c*/
}
}
} // namespace gamemd

// 0x540750
namespace gamemd {
void sub_540750()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_540750()
{
  unk_AA0680 = 0.0174532925199433 * 45.0; /*0x54075c*/
}
}
} // namespace gamemd

// 0x540770
namespace gamemd {
void sub_540770()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_540770()
{
  unk_AA0658 = 0.0174532925199433 * 60.0; /*0x54077c*/
}
}
} // namespace gamemd

// 0x540790
namespace gamemd {
void sub_540790()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_540790()
{
  unk_AA0630 = 0.0174532925199433 * 90.0; /*0x54079c*/
}
}
} // namespace gamemd

// 0x5407B0
namespace gamemd {
long long sub_5407B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_5407B0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_AA0630 - unk_AA0658); /*0x5407c2*/
  result = Math::RoundToInt(v0 * unk_AA0650 * 0.5); /*0x5407d6*/
  unk_AA06A8 = result; /*0x5407db*/
  return result; /*0x5407e0*/
}
}
} // namespace gamemd

// 0x5407F0
namespace gamemd {
void sub_5407F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5407F0()
{
  unk_AA0660 = Math::ArcTan((double)unk_AA06A8 * 0.00390625); /*0x540807*/
}
}
} // namespace gamemd

// 0x540820
namespace gamemd {
void sub_540820()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_540820()
{
  unk_AA0678 = Math::ArcTan((double)(2 * unk_AA06A8) / unk_AA0650); /*0x540842*/
}
}
} // namespace gamemd

// 0x540850
namespace gamemd {
long long sub_540850()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_540850()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * unk_AA06A8) + 0.5); /*0x54086b*/
  unk_AA069C = result; /*0x540870*/
  return result; /*0x540876*/
}
}
} // namespace gamemd

// 0x540880
namespace gamemd {
int sub_540880()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_540880()
{
  unk_AA0648 = 0; /*0x540882*/
  unk_AA064A = 0; /*0x540888*/
  return 0; /*0x54088e*/
}
}
} // namespace gamemd

// 0x540890
namespace gamemd {
int sub_540890()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_540890()
{
  unk_AA0668 = 0; /*0x540892*/
  unk_AA066C = 0; /*0x540897*/
  unk_AA0670 = 0; /*0x54089c*/
  return 0; /*0x5408a1*/
}
}
} // namespace gamemd

// 0x5408B0
namespace gamemd {
int sub_5408B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5408B0()
{
  unk_AA0698 = 0; /*0x5408b5*/
  unk_AA0690 = 128; /*0x5408bf*/
  unk_AA0694 = 128; /*0x5408c4*/
  return 128; /*0x5408c9*/
}
}
} // namespace gamemd

// 0x5408D0
namespace gamemd {
int sub_5408D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5408D0()
{
  unk_AA0638 = 0; /*0x5408d2*/
  unk_AA063C = 0; /*0x5408d7*/
  unk_AA0640 = 0; /*0x5408dc*/
  unk_AA0644 = 0; /*0x5408e1*/
  return 0; /*0x5408e6*/
}
}
} // namespace gamemd

// 0x5408F0
namespace gamemd {
char * sub_5408F0(int a2, int a3, int a4, int a5, short a6, short a7)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall sub_5408F0(char *this, int a2, int a3, int a4, int a5, __int16 a6, __int16 a7)
{
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  __int16 v10; // cx

  *(_DWORD *)this = &IPXManagerClass::`vftable'; /*0x5408f7*/
  if ( MEMORY[0x887628] ) /*0x540905*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x887628])(MEMORY[0x887628], 1); /*0x54090b*/
    MEMORY[0x887628] = 0; /*0x54090d*/
  }
  v8 = __2_YAPAXI_Z(0x3F310u); /*0x540918*/
  if ( v8 ) /*0x540922*/
    v9 = IPXInterfaceClass::Construct(v8); /*0x540926*/
  else
    v9 = 0; /*0x54092d*/
  MEMORY[0x887628] = (int)v9; /*0x540931*/
  if ( WinsockInterface::Init(v9) ) /*0x540936*/
    *(this + 4) = 1; /*0x54093f*/
  else
    *(this + 4) = 0; /*0x540945*/
  if ( MEMORY[0x887628] ) /*0x540950*/
    (**(void (__thiscall ***)(int, int))MEMORY[0x887628])(MEMORY[0x887628], 1); /*0x540956*/
  MEMORY[0x887628] = 0; /*0x540960*/
  *((_DWORD *)this + 2) = a2; /*0x540966*/
  *((_DWORD *)this + 3) = a4; /*0x540969*/
  *((_DWORD *)this + 6) = a2; /*0x540970*/
  *((_DWORD *)this + 5) = a5; /*0x54097c*/
  *((_DWORD *)this + 7) = a5; /*0x54097f*/
  *((_WORD *)this + 16) = a7; /*0x540982*/
  LOBYTE(v10) = HIBYTE(a6); /*0x54098d*/
  HIBYTE(v10) = a6; /*0x540992*/
  *((_WORD *)this + 17) = v10; /*0x540996*/
  *(this + 5) = 0; /*0x54099f*/
  *((_DWORD *)this + 4) = a3; /*0x5409a2*/
  *((_DWORD *)this + 9) = 0; /*0x5409a5*/
  *((_DWORD *)this + 17) = 0; /*0x5409a8*/
  *((_DWORD *)this + 21) = 0; /*0x5409ab*/
  memset(this + 40, 0, 0x1Cu); /*0x5409ae*/
  *((_DWORD *)this + 18) = 0; /*0x5409b3*/
  *((_DWORD *)this + 42) = -1; /*0x5409b6*/
  *((_DWORD *)this + 23) = -1; /*0x5409bc*/
  *((_DWORD *)this + 19) = 0; /*0x5409bf*/
  *((_DWORD *)this + 20) = 0; /*0x5409c2*/
  *((_DWORD *)this + 40) = 0; /*0x5409c5*/
  *((_DWORD *)this + 41) = 0; /*0x5409cb*/
  *((_DWORD *)this + 22) = 2; /*0x5409d1*/
  *((_DWORD *)this + 24) = 60; /*0x5409d8*/
  return this; /*0x5409e1*/
}
}
} // namespace gamemd

// 0x540C50
namespace gamemd {
int sub_540C50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_540C50(unsigned __int8 *this)
{
  return *(this + 4); /*0x540c55*/
}
}
} // namespace gamemd

// 0x541170
namespace gamemd {
int sub_541170(int a2, int a3, int a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_541170(int this, int a2, int a3, int a4, int a5)
{
  int v5; // ebx
  int v7; // eax
  int i; // edx
  _DWORD *v10; // ecx
  char v11; // al
  int v12; // edi
  int v13; // edi
  int v14; // [esp+0h] [ebp-1Ch] BYREF
  _DWORD v15[3]; // [esp+10h] [ebp-Ch] BYREF

  HIWORD(v5) = HIWORD(a5); /*0x541174*/
  if ( MEMORY[0xA8DA84] && *(_DWORD *)(*(_DWORD *)MEMORY[0xA8DA78] + 111) == a5 ) /*0x541192*/
    return 0; /*0x541192*/
  v7 = 1; /*0x541194*/
  if ( MEMORY[0xA8DA84] <= 1 ) /*0x54119b*/
    return 0; /*0x54119b*/
  for ( i = MEMORY[0xA8DA78] + 4; *(_DWORD *)(*(_DWORD *)i + 111) != a5; i += 4 ) /*0x54119d*/
  {
    if ( ++v7 >= MEMORY[0xA8DA84] ) /*0x5411ad*/
      return 0; /*0x5411ad*/
  }
  LOWORD(v5) = *((_WORD *)&MEMORY[0xA8E2B2] + v7); /*0x5411be*/
  v10 = (_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * v7) + 40); /*0x5411c6*/
  v11 = *(_BYTE *)(this + 4); /*0x5411c9*/
  v12 = a4; /*0x5411cc*/
  v15[0] = *v10; /*0x5411d2*/
  v15[1] = v10[1]; /*0x5411d9*/
  v15[2] = v10[2]; /*0x5411e2*/
  if ( !v11 || !*(_BYTE *)(this + 5) ) /*0x5411e8*/
    return 0; /*0x5411af*/
  if ( a4 && (&v14 == (int *)-16 || Network::IsBroadcastAddr(v15)) ) /*0x5411ff*/
    v12 = 0; /*0x541208*/
  v13 = (*(int (__thiscall **)(_DWORD, int, int, _DWORD *, int, int, _DWORD))(**(_DWORD **)(this + 72) + 44))( /*0x541225*/
          *(_DWORD *)(this + 72),
          a2,
          a3,
          v15,
          v12,
          v5,
          0);
  if ( !v13 ) /*0x541229*/
  {
    ++*(_DWORD *)(this + 160); /*0x541232*/
    Debug::Log(); /*0x541240*/
  }
  return v13; /*0x5411af*/
}
}
} // namespace gamemd

// 0x5422C0
namespace gamemd {
int _GetNumBorrowedCores_SchedulerProxy_details_Concurrency__QBEIXZ()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall _GetNumBorrowedCores_SchedulerProxy_details_Concurrency__QBEIXZ(
        Concurrency::details::SchedulerProxy *this)
{
  return *((_DWORD *)this + 42); /*0x5422c6*/
}
}
} // namespace gamemd

// 0x542F30
namespace gamemd {
int sub_542F30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_542F30(_DWORD *this)
{
  unsigned int v1; // ebx
  int result; // eax
  int v3; // ebp
  _DWORD *i; // edi
  int v5; // esi
  _DWORD *v6; // ecx
  int TileIndex; // eax
  int v8; // [esp+8h] [ebp-8h]

  v1 = -1; /*0x542f38*/
  result = 0; /*0x542f3b*/
  v3 = 0; /*0x542f3d*/
  v8 = 0; /*0x542f45*/
  if ( (int)*(this + 17) > 0 ) /*0x542f49*/
  {
    for ( i = this + 10; ; ++i ) /*0x542f4d*/
    {
      v5 = 0; /*0x542f52*/
      v6 = *(_DWORD **)(*i + 4); /*0x542f54*/
      if ( (int)v6[10] <= 0 ) /*0x542f5c*/
        goto LABEL_12; /*0x542f5c*/
      while ( 1 ) /*0x542f5f*/
      {
        TileIndex = Terrain::GetTileIndex(v6, v5); /*0x542f5f*/
        if ( TileIndex ) /*0x542f66*/
          break; /*0x542f66*/
LABEL_8:
        ++v5; /*0x542f79*/
        v6 = *(_DWORD **)(*i + 4); /*0x542f7c*/
        if ( v5 >= v6[10] ) /*0x542f82*/
          goto LABEL_9; /*0x542f82*/
      }
      if ( *(_BYTE *)(*(_DWORD *)(TileIndex + 20) + 2) || (*(_BYTE *)TileIndex & 2) != 0 ) /*0x542f75*/
        break; /*0x542f75*/
LABEL_9:
      if ( TileIndex ) /*0x542f86*/
      {
        if ( *(_DWORD *)(TileIndex + 4) < v1 ) /*0x542f8d*/
        {
          v1 = *(_DWORD *)(TileIndex + 4); /*0x542f92*/
          v8 = *(_DWORD *)(TileIndex + 20); /*0x542f94*/
        }
      }
LABEL_12:
      if ( ++v3 >= *(this + 17) ) /*0x542fa3*/
        return v8; /*0x542fa5*/
    }
    TileIndex = 0; /*0x542f77*/
    goto LABEL_8; /*0x542f77*/
  }
  return result; /*0x542fab*/
}
}
} // namespace gamemd

// 0x543120
namespace gamemd {
void sub_543120()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_543120()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x54312c*/
  unk_AA06D8 = Math::Sqrt(v0 + v0); /*0x54313e*/
}
}
} // namespace gamemd

// 0x543150
namespace gamemd {
void sub_543150()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_543150()
{
  unk_AA0728 = unk_AA06D8 / 60.0; /*0x54315c*/
}
}
} // namespace gamemd

// 0x543170
namespace gamemd {
void sub_543170()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_543170()
{
  unk_AA0710 = 1.0 / unk_AA0728; /*0x54317c*/
}
}
} // namespace gamemd

// 0x543190
namespace gamemd {
void sub_543190()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_543190()
{
  unk_AA0708 = 0.0174532925199433 * 45.0; /*0x54319c*/
}
}
} // namespace gamemd

// 0x5431B0
namespace gamemd {
void sub_5431B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5431B0()
{
  unk_AA06E0 = 0.0174532925199433 * 60.0; /*0x5431bc*/
}
}
} // namespace gamemd

// 0x5431D0
namespace gamemd {
void sub_5431D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5431D0()
{
  unk_AA06B8 = 0.0174532925199433 * 90.0; /*0x5431dc*/
}
}
} // namespace gamemd

// 0x5431F0
namespace gamemd {
long long sub_5431F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_5431F0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_AA06B8 - unk_AA06E0); /*0x543202*/
  result = Math::RoundToInt(v0 * unk_AA06D8 * 0.5); /*0x543216*/
  unk_AA0730 = result; /*0x54321b*/
  return result; /*0x543220*/
}
}
} // namespace gamemd

// 0x543230
namespace gamemd {
void sub_543230()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_543230()
{
  unk_AA06E8 = Math::ArcTan((double)unk_AA0730 * 0.00390625); /*0x543247*/
}
}
} // namespace gamemd

// 0x543260
namespace gamemd {
void sub_543260()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_543260()
{
  unk_AA0700 = Math::ArcTan((double)(2 * unk_AA0730) / unk_AA06D8); /*0x543282*/
}
}
} // namespace gamemd

// 0x543290
namespace gamemd {
long long sub_543290()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_543290()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * unk_AA0730) + 0.5); /*0x5432ab*/
  unk_AA0724 = result; /*0x5432b0*/
  return result; /*0x5432b6*/
}
}
} // namespace gamemd

// 0x5432C0
namespace gamemd {
int sub_5432C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5432C0()
{
  unk_AA06D0 = 0; /*0x5432c2*/
  unk_AA06D2 = 0; /*0x5432c8*/
  return 0; /*0x5432ce*/
}
}
} // namespace gamemd

// 0x5432D0
namespace gamemd {
int sub_5432D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5432D0()
{
  unk_AA06F0 = 0; /*0x5432d2*/
  unk_AA06F4 = 0; /*0x5432d7*/
  unk_AA06F8 = 0; /*0x5432dc*/
  return 0; /*0x5432e1*/
}
}
} // namespace gamemd

// 0x5432F0
namespace gamemd {
int sub_5432F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5432F0()
{
  unk_AA0720 = 0; /*0x5432f5*/
  unk_AA0718 = 128; /*0x5432ff*/
  unk_AA071C = 128; /*0x543304*/
  return 128; /*0x543309*/
}
}
} // namespace gamemd

// 0x543310
namespace gamemd {
int sub_543310()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_543310()
{
  unk_AA06C0 = 0; /*0x543312*/
  unk_AA06C4 = 0; /*0x543317*/
  unk_AA06C8 = 0; /*0x54331c*/
  unk_AA06CC = 0; /*0x543321*/
  return 0; /*0x543326*/
}
}
} // namespace gamemd

// 0x543AB0
namespace gamemd {
int nullsub_0(int a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall nullsub_0(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x543ab6*/
    return -2147467261; /*0x543ab8*/
  *a2 = 237448640; /*0x543ac6*/
  a2[1] = 298949647; /*0x543ace*/
  a2[2] = -1610610249; /*0x543ad7*/
  a2[3] = -777003740; /*0x543ae0*/
  return 0; /*0x543abd*/
}
}
} // namespace gamemd

// 0x543AF0
namespace gamemd {
int nullsub_0_0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall nullsub_0_0(_DWORD *this)
{
  return *(this + 43); /*0x543af6*/
}
}
} // namespace gamemd

// 0x543B00
namespace gamemd {
void nullsub_154(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __stdcall nullsub_154(int a1, int a2)
{
  ; /*0x543b00*/
}
}
} // namespace gamemd

// 0x543C40
namespace gamemd {
int sub_543C40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_543C40()
{
  unk_AA1040 = 0; /*0x543c42*/
  unk_AA1044 = 0; /*0x543c47*/
  unk_AA1048 = 0; /*0x543c4c*/
  unk_AA104C = 0; /*0x543c51*/
  return 0; /*0x543c56*/
}
}
} // namespace gamemd

// 0x543C60
namespace gamemd {
void sub_543C60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_543C60()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x543c6c*/
  unk_AA1070 = Math::Sqrt(v0 + v0); /*0x543c7e*/
}
}
} // namespace gamemd

// 0x543C90
namespace gamemd {
void sub_543C90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_543C90()
{
  dbl_ABC2C0 = unk_AA1070 / 60.0; /*0x543c9c*/
}
}
} // namespace gamemd

// 0x543CB0
namespace gamemd {
void sub_543CB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_543CB0()
{
  dbl_ABC1F0 = 1.0 / dbl_ABC2C0; /*0x543cbc*/
}
}
} // namespace gamemd

// 0x543CD0
namespace gamemd {
void sub_543CD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_543CD0()
{
  dbl_ABC1E0 = 0.0174532925199433 * 45.0; /*0x543cdc*/
}
}
} // namespace gamemd

// 0x543CF0
namespace gamemd {
void sub_543CF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_543CF0()
{
  unk_AA1128 = 0.0174532925199433 * 60.0; /*0x543cfc*/
}
}
} // namespace gamemd

// 0x543D10
namespace gamemd {
void sub_543D10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_543D10()
{
  unk_AA0E30 = 0.0174532925199433 * 90.0; /*0x543d1c*/
}
}
} // namespace gamemd

// 0x543D30
namespace gamemd {
long long sub_543D30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_543D30()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_AA0E30 - unk_AA1128); /*0x543d42*/
  result = Math::RoundToInt(v0 * unk_AA1070 * 0.5); /*0x543d56*/
  dword_ABC550 = result; /*0x543d5b*/
  return result; /*0x543d60*/
}
}
} // namespace gamemd

// 0x543D70
namespace gamemd {
void sub_543D70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_543D70()
{
  unk_AA1138 = Math::ArcTan((double)dword_ABC550 * 0.00390625); /*0x543d87*/
}
}
} // namespace gamemd

// 0x543DA0
namespace gamemd {
void sub_543DA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_543DA0()
{
  dbl_ABB118 = Math::ArcTan((double)(2 * dword_ABC550) / unk_AA1070); /*0x543dc2*/
}
}
} // namespace gamemd

// 0x543DD0
namespace gamemd {
long long sub_543DD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_543DD0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABC550) + 0.5); /*0x543deb*/
  dword_ABC2BC = result; /*0x543df0*/
  return result; /*0x543df6*/
}
}
} // namespace gamemd

// 0x543E00
namespace gamemd {
int sub_543E00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_543E00()
{
  unk_AA105C[0] = 0; /*0x543e02*/
  return 0; /*0x543e0e*/
}
}
} // namespace gamemd

// 0x543E10
namespace gamemd {
int sub_543E10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_543E10()
{
  dword_ABB0F8 = 0; /*0x543e12*/
  dword_ABB0FC = 0; /*0x543e17*/
  dword_ABB100 = 0; /*0x543e1c*/
  return 0; /*0x543e21*/
}
}
} // namespace gamemd

// 0x543E30
namespace gamemd {
int sub_543E30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_543E30()
{
  dword_ABC208 = 0; /*0x543e35*/
  dword_ABC200 = 128; /*0x543e3f*/
  dword_ABC204 = 128; /*0x543e44*/
  return 128; /*0x543e49*/
}
}
} // namespace gamemd

// 0x543E50
namespace gamemd {
unsigned char * sub_543E50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_BYTE *sub_543E50()
{
  _BYTE *result; // eax
  int v1; // ecx

  result = &MEMORY[0xABBED2]; /*0x543e50*/
  v1 = 256; /*0x543e55*/
  do /*0x543e68*/
  {
    *(result - 2) = 0; /*0x543e5c*/
    *(result - 1) = 0; /*0x543e5f*/
    *result = 0; /*0x543e62*/
    result += 3; /*0x543e64*/
    --v1; /*0x543e67*/
  }
  while ( v1 ); /*0x543e68*/
  return result; /*0x543e6a*/
}
}
} // namespace gamemd

// 0x543E70
namespace gamemd {
int sub_543E70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_543E70()
{
  unk_AA107C = 0; /*0x543e77*/
  unk_AA1080 = 0; /*0x543e7c*/
  unk_AA1084 = 1; /*0x543e81*/
  unk_AA1085 = 0; /*0x543e88*/
  unk_AA1078 = (int)&DynamicVectorClass<IsometricTileTypeClass::TileInsertType *>::`vftable'; /*0x543e8d*/
  unk_AA108C = 10; /*0x543e97*/
  unk_AA1088 = 0; /*0x543ea1*/
  return atexit(sub_543EB0); /*0x543eac*/
}
}
} // namespace gamemd

// 0x543EB0
namespace gamemd {
void sub_543EB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_543EB0()
{
  if ( (unk_AA0E2C & 1) == 0 ) /*0x543eba*/
  {
    unk_AA1078 = (int)&VectorClass<IsometricTileTypeClass::TileInsertType *>::`vftable'; /*0x543ebe*/
    unk_AA0E2C |= 1u; /*0x543ed1*/
    if ( unk_AA107C ) /*0x543ed7*/
    {
      if ( unk_AA1085 ) /*0x543ee1*/
      {
        __3_YAXPAX_Z(unk_AA107C); /*0x543ee4*/
        unk_AA107C = 0; /*0x543eec*/
      }
    }
    unk_AA1085 = 0; /*0x543ef6*/
    unk_AA1080 = 0; /*0x543efd*/
  }
}
}
} // namespace gamemd

// 0x544690
namespace gamemd {
int sub_544690()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_544690()
{
  dword_ABC21C = 0; /*0x544699*/
  dword_ABC22C = 0; /*0x54469f*/
  dword_ABC23C = 0; /*0x5446a5*/
  dword_ABC24C = 0; /*0x5446ab*/
  dword_ABC210 = 0; /*0x5446b1*/
  dword_ABC214 = 0; /*0x5446b6*/
  dword_ABC218 = 0; /*0x5446bc*/
  dword_ABC220 = 0; /*0x5446c2*/
  dword_ABC224 = 0; /*0x5446c7*/
  dword_ABC228 = 0; /*0x5446cd*/
  dword_ABC230 = 0; /*0x5446d3*/
  dword_ABC234 = 0; /*0x5446d8*/
  dword_ABC238 = 0; /*0x5446de*/
  dword_ABC240 = 0; /*0x5446e4*/
  dword_ABC244 = 0; /*0x5446e9*/
  dword_ABC248 = 0; /*0x5446ef*/
  dword_ABC25C = 12; /*0x544709*/
  dword_ABC250 = 13; /*0x54470f*/
  dword_ABC254 = 6; /*0x544714*/
  dword_ABC258 = 48; /*0x54471a*/
  dword_ABC26C = 0; /*0x544728*/
  dword_ABC260 = 0; /*0x54472e*/
  dword_ABC264 = 0; /*0x544733*/
  dword_ABC268 = 0; /*0x544739*/
  dword_ABC27C = 12; /*0x544753*/
  dword_ABC270 = 14; /*0x544759*/
  dword_ABC274 = 1; /*0x54475e*/
  dword_ABC278 = 48; /*0x544764*/
  dword_ABC28C = 0; /*0x544772*/
  dword_ABC29C = 0; /*0x544778*/
  dword_ABC2AC = 0; /*0x54477e*/
  dword_ABC280 = 0; /*0x544784*/
  dword_ABC284 = 0; /*0x544789*/
  dword_ABC288 = 0; /*0x54478f*/
  dword_ABC290 = 0; /*0x544795*/
  dword_ABC294 = 0; /*0x54479a*/
  dword_ABC298 = 0; /*0x5447a0*/
  dword_ABC2A0 = 0; /*0x5447a6*/
  dword_ABC2A4 = 0; /*0x5447ab*/
  dword_ABC2A8 = 0; /*0x5447b1*/
  return 0; /*0x5447b7*/
}
}
} // namespace gamemd

// 0x544DF0
namespace gamemd {
void nullsub_155()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void nullsub_155()
{
  ; /*0x544df0*/
}
}
} // namespace gamemd

// 0x544E30
namespace gamemd {
int MIXFile_AccumulateIndex(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall MIXFile_AccumulateIndex(int a1)
{
  int result; // eax
  int v2; // esi
  _DWORD *v3; // edi
  _DWORD *v4; // edx

  result = a1; /*0x544e36*/
  if ( a1 != 0xFFFF ) /*0x544e38*/
  {
    v2 = 0; /*0x544e44*/
    if ( unk_AA1088 > 0 ) /*0x544e49*/
    {
      v3 = unk_AA107C; /*0x544e4b*/
      do /*0x544e62*/
      {
        v4 = (_DWORD *)*v3; /*0x544e51*/
        if ( *(_DWORD *)*v3 > a1 ) /*0x544e55*/
          break; /*0x544e55*/
        ++v3; /*0x544e5a*/
        result += v4[1]; /*0x544e5d*/
        ++v2; /*0x544e5f*/
      }
      while ( v2 < unk_AA1088 ); /*0x544e62*/
    }
  }
  return result; /*0x544e3a*/
}
}
} // namespace gamemd

// 0x544E70
namespace gamemd {
int SurfaceClass_CreatePrimary(int a1, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall SurfaceClass_CreatePrimary(int a1, int a2, int a3)
{
  int result; // eax
  int v4; // ecx
  char *v5; // edx
  int v6; // esi
  int v7; // esi
  int v8; // eax

  if ( !MEMORY[0x887308] ) /*0x544e86*/
    return 0; /*0x544e8b*/
  if ( a1 == 1000 && a2 == 1000 && a3 == 1000 && MEMORY[0x87F6A8] ) /*0x544ead*/
    return *(_DWORD *)MEMORY[0x87F69C]; /*0x544eb7*/
  QuantizeColorRGB(&a3); /*0x544ecd*/
  v4 = 1; /*0x544ee4*/
  if ( MEMORY[0x87F6A8] <= 1 ) /*0x544eeb*/
  {
LABEL_14:
    v6 = 53; /*0x544f1c*/
    if ( a3 + a2 + a1 < 2000 ) /*0x544f2b*/
      v6 = 27; /*0x544f2d*/
    if ( __2_YAPAXI_Z(0x1B4u) ) /*0x544f37*/
      v7 = LightConvertClass::Constructor( /*0x544f79*/
             &stru_ABBED0,
             &MEMORY[0x885780],
             MEMORY[0x887308],
             a1,
             a2,
             a3,
             MEMORY[0x87F6A8] != 0,
             0,
             v6);
    else
      v7 = 0; /*0x544f7d*/
    if ( MEMORY[0x87F6A8] < MEMORY[0x87F6A0] /*0x544fb6*/
      || (MEMORY[0x87F6A5] || !MEMORY[0x87F6A0])
      && MEMORY[0x87F6AC] > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0x87F698] + 8))(
           &MEMORY[0x87F698],
           MEMORY[0x87F6A0] + MEMORY[0x87F6AC],
           0) )
    {
      v8 = MEMORY[0x87F6A8]++; /*0x544fc3*/
      *((_DWORD *)MEMORY[0x87F69C] + v8) = v7; /*0x544fd2*/
    }
    return v7; /*0x544fd5*/
  }
  else
  {
    v5 = (char *)MEMORY[0x87F69C] + 4; /*0x544ef3*/
    while ( 1 ) /*0x544ef6*/
    {
      result = *(_DWORD *)v5; /*0x544ef6*/
      if ( *(_DWORD *)(*(_DWORD *)v5 + 408) == a1 && *(_DWORD *)(result + 412) == a2 && *(_DWORD *)(result + 416) == a3 ) /*0x544f0e*/
        break; /*0x544f0e*/
      ++v4; /*0x544f14*/
      v5 += 4; /*0x544f15*/
      if ( v4 >= MEMORY[0x87F6A8] ) /*0x544f1a*/
        goto LABEL_14; /*0x544f1a*/
    }
  }
  return result; /*0x544e88*/
}
}
} // namespace gamemd

// 0x544FF0
namespace gamemd {
char ReturnFalse2()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char ReturnFalse2()
{
  return 0; /*0x544ff2*/
}
}
} // namespace gamemd

// 0x545150
namespace gamemd {
char * LoadTerrainTypeClassTheatre(AbstractClass * a1, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (v3 export truncated pseudocode — commented out; live version via get_context)
// char *__fastcall LoadTerrainTypeClassTheatre(AbstractClass *a1, char a2)
// {
//   _DWORD *v3; // ebp
//   size_t Size; // eax
//   signed int v5; // eax
//   int i; // esi
//   int v7; // eax
//   void **v8; // esi
//   int v9; // esi
//   size_t v10; // eax
//   signed int v11; // eax
//   size_t v12; // eax
//   signed int v13; // eax
//   size_t v14; // eax
//   signed int v15; // eax
//   size_t v16; // eax
//   signed int v17; // eax
//   CampaignScore *v18; // eax
//   int v19; // ecx
//   INIClass *v20; // edi
//   CCINIClass *v21; // ebx
//   AbstractClass *v22; // eax
//   int v23; // ecx
//   signed int v24; // eax
//   int v25; // eax
//   AbstractClass *v26; // eax
//   AbstractClass *v27; // ebx
//   MapClass *v28; // eax
//   int v29; // edx
//   int v30; // eax
//   CCINIClass *v31; // eax
//   char v32; // al
//   INIClass *v33; // ecx
//   int v34; // eax
//   INIClass *v35; // ebx
//   _DWORD *v36; // eax
//   MapClass *v37; // edx
//   INIClass *v38; // ecx
//   AbstractClass *ecx147a; // ecx
//   INIClass *v39; // edx
//   int v41; // edx
//   AnimTypeClass *v42; // eax
//   int v43; // e... [55884 chars total]
// end truncated pseudocode
}
} // namespace gamemd

// 0x546DA0
namespace gamemd {
void MapClass_LoadIsometricTiles(char a1, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall MapClass_LoadIsometricTiles(char a1, char a2)
{
  int i; // edi
  int v4; // ecx
  int inited; // eax
  _DWORD *v6; // esi
  int v7; // ebp
  _DWORD *v8; // eax
  int v9; // ecx
  int v10; // ecx
  int v11; // edx
  int v12; // ebx
  int v13; // ebp
  int v14; // esi
  int v15; // edi
  int v16; // eax
  int v17; // esi
  int v20; // [esp+14h] [ebp-1Ch]
  DWORD Ticks; // [esp+18h] [ebp-18h]
  int v22; // [esp+20h] [ebp-10h]

  Timer::GetTicks(); /*0x546db5*/
  if ( !a1 ) /*0x546dc8*/
  {
    LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x546dd3*/
    for ( i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); i; i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) ) /*0x546de6*/
    {
      v4 = *(_DWORD *)(i + 56); /*0x546dec*/
      inited = 0; /*0x546def*/
      if ( v4 == 0xFFFF || v4 >= MEMORY[0xA8ED38] ) /*0x546dff*/
      {
        v6 = (_DWORD *)*((_DWORD *)MEMORY[0xA8ED2C] + unk_AA10B0); /*0x546e6f*/
        inited = CellClass::InitRandomOffsets(i, unk_AA10B0, v6[188]); /*0x546e7c*/
      }
      else
      {
        v6 = (_DWORD *)*((_DWORD *)MEMORY[0xA8ED2C] + v4); /*0x546e07*/
        if ( (int)v6[188] > 1 ) /*0x546e11*/
        {
          LOBYTE(inited) = *(_BYTE *)(i + 282); /*0x546e13*/
          v7 = inited; /*0x546e1d*/
          v8 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(*v6 + 156))(*((_DWORD *)MEMORY[0xA8ED2C] + v4)); /*0x546e1f*/
          if ( v8 && (v9 = v8[v7 % (*v8 * v8[1]) + 4]) != 0 && (*(_DWORD *)(v9 + 36) & 4) != 0 ) /*0x546e48*/
            inited = (*(_DWORD *)(i + 320) >> 13) & 1; /*0x546e53*/
          else
            inited = CellClass::InitRandomOffsets(i, *(_DWORD *)(i + 56), v6[188]); /*0x546e62*/
        }
      }
      v10 = v6[188]; /*0x546e81*/
      v11 = inited; /*0x546e87*/
      if ( inited > v10 - 1 ) /*0x546e8e*/
        v11 = inited % v10; /*0x546e91*/
      for ( ; v11; --v11 ) /*0x546e95*/
        v6 = (_DWORD *)v6[175]; /*0x546e97*/
      ++v6[194]; /*0x546ea7*/
    }
  }
  v12 = 0; /*0x546ec5*/
  v13 = 0; /*0x546ec7*/
  Ticks = Timer::GetTicks(); /*0x546ed7*/
  v14 = 1; /*0x546ee0*/
  v15 = 0; /*0x546ee2*/
  v22 = 1; /*0x546eea*/
  v20 = 0; /*0x546eee*/
  if ( MEMORY[0xA8ED38] > 0 ) /*0x546ef2*/
  {
    while ( 1 ) /*0x546efe*/
    {
      if ( Ticks == -1 ) /*0x546f03*/
        goto LABEL_23; /*0x546f03*/
      v16 = Timer::GetTicks() - Ticks; /*0x546f0e*/
      if ( v16 < v14 ) /*0x546f14*/
        break; /*0x546f14*/
LABEL_24:
      Event::Dispatch(); /*0x546f1c*/
      Ticks = Timer::GetTicks(); /*0x546f2e*/
      v22 = 4; /*0x546f43*/
LABEL_25:
      v17 = *((_DWORD *)MEMORY[0xA8ED2C] + v15); /*0x546f47*/
      if ( v17 ) /*0x546f52*/
      {
        do /*0x546fdc*/
        {
          if ( *(_BYTE *)(v17 + 756) && strlen((const char *)(v17 + 757)) ) /*0x546f68*/
          {
            if ( a1 || *(_DWORD *)(v17 + 776) || a2 && *(_BYTE *)(v17 + 739) ) /*0x546f8e*/
            {
              if ( !*(_DWORD *)(v17 + 164) ) /*0x546fc0*/
              {
                v13 += MapClass::LoadFileData(v17); /*0x546fd1*/
                ++v12; /*0x546fd3*/
              }
            }
            else if ( *(_DWORD *)(v17 + 164) ) /*0x546f98*/
            {
              __3_YAXPAX_Z(*(void **)(v17 + 164)); /*0x546fa5*/
              *(_DWORD *)(v17 + 164) = 0; /*0x546fad*/
              *(_BYTE *)(v17 + 168) = 0; /*0x546fb7*/
            }
          }
          v17 = *(_DWORD *)(v17 + 700); /*0x546fd4*/
        }
        while ( v17 ); /*0x546fdc*/
        v15 = v20; /*0x546fe2*/
      }
      v20 = ++v15; /*0x546fee*/
      if ( v15 >= MEMORY[0xA8ED38] ) /*0x546ff2*/
        goto LABEL_39; /*0x546ff2*/
      v14 = v22; /*0x546efa*/
    }
    v14 -= v16; /*0x546f16*/
LABEL_23:
    if ( v14 ) /*0x546f1a*/
      goto LABEL_25; /*0x546f1a*/
    goto LABEL_24; /*0x546f1a*/
  }
LABEL_39:
  Debug::Log(); /*0x546ff8*/
}
}
} // namespace gamemd

// 0x547110
namespace gamemd {
int ResetAllTechnoField776()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int ResetAllTechnoField776()
{
  int result; // eax
  int i; // ecx
  int j; // eax

  result = MEMORY[0xA8ED38]; /*0x547110*/
  for ( i = 0; i < MEMORY[0xA8ED38]; ++i ) /*0x54711b*/
  {
    for ( j = *((_DWORD *)MEMORY[0xA8ED2C] + i); j; j = *(_DWORD *)(j + 700) ) /*0x547127*/
      *(_DWORD *)(j + 776) = 0; /*0x547129*/
    result = MEMORY[0xA8ED38]; /*0x547139*/
  }
  return result; /*0x547143*/
}
}
} // namespace gamemd

// 0x547370
namespace gamemd {
int Map_InitCoordinateOffsets(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall Map_InitCoordinateOffsets(int a1)
{
  int v1; // edx
  int *v2; // ecx
  unsigned int v3; // eax
  int v5; // [esp+Ch] [ebp-4h]

  v5 = a1; /*0x54737f*/
  if ( !*(_BYTE *)(a1 + 737) ) /*0x547373*/
    return 0; /*0x547cbb*/
  if ( (byte_ABBEB8 & 1) == 0 ) /*0x547390*/
  {
    byte_ABBEB8 |= 1u; /*0x5473a5*/
    dword_ABAD48 = 2147450879; /*0x5473b9*/
    dword_ABAD60 = 2147450879; /*0x5473cd*/
    dword_ABAD78 = 2147450879; /*0x5473e1*/
    dword_ABAD90 = 2147450879; /*0x5473f5*/
    dword_ABADA8 = 2147450879; /*0x547409*/
    dword_ABADC0 = 2147450879; /*0x54741d*/
    dword_ABADD8 = 2147450879; /*0x547431*/
    dword_ABAD34 = unk_AA105C[0]; /*0x547447*/
    dword_ABAD38 = unk_AA105C[0]; /*0x54744c*/
    dword_ABAD3C = unk_AA105C[0]; /*0x547451*/
    dword_ABAD40 = unk_AA105C[0]; /*0x547456*/
    dword_ABAD44 = unk_AA105C[0]; /*0x54745b*/
    dword_ABAD4C = unk_AA105C[0]; /*0x547460*/
    dword_ABAD50 = unk_AA105C[0]; /*0x547465*/
    dword_ABAD54 = unk_AA105C[0]; /*0x54746a*/
    dword_ABAD58 = unk_AA105C[0]; /*0x54746f*/
    dword_ABAD5C = unk_AA105C[0]; /*0x547474*/
    dword_ABAD64 = unk_AA105C[0]; /*0x547479*/
    dword_ABAD68 = unk_AA105C[0]; /*0x54747e*/
    dword_ABAD6C = unk_AA105C[0]; /*0x547483*/
    dword_ABAD70 = unk_AA105C[0]; /*0x547488*/
    dword_ABAD74 = unk_AA105C[0]; /*0x54748d*/
    dword_ABAD7C = unk_AA105C[0]; /*0x547492*/
    dword_ABAD80 = unk_AA105C[0]; /*0x547497*/
    dword_ABAD84 = unk_AA105C[0]; /*0x54749c*/
    dword_ABAD88 = unk_AA105C[0]; /*0x5474a1*/
    dword_ABAD8C = unk_AA105C[0]; /*0x5474a6*/
    dword_ABAD94 = unk_AA105C[0]; /*0x5474ab*/
    dword_ABAD98 = unk_AA105C[0]; /*0x5474b0*/
    dword_ABAD9C = unk_AA105C[0]; /*0x5474b5*/
    dword_ABADA0 = unk_AA105C[0]; /*0x5474ba*/
    dword_ABADA4 = unk_AA105C[0]; /*0x5474bf*/
    dword_ABADAC = unk_AA105C[0]; /*0x5474c4*/
    dword_ABADB0 = unk_AA105C[0]; /*0x5474c9*/
    dword_ABADB4 = unk_AA105C[0]; /*0x5474ce*/
    dword_ABADB8 = unk_AA105C[0]; /*0x5474d3*/
    dword_ABADBC = unk_AA105C[0]; /*0x5474d8*/
    dword_ABADC4 = unk_AA105C[0]; /*0x5474dd*/
    dword_ABADC8 = unk_AA105C[0]; /*0x5474e2*/
    dword_ABADCC = unk_AA105C[0]; /*0x5474e7*/
    dword_ABADD0 = unk_AA105C[0]; /*0x5474ec*/
    dword_ABADD4 = unk_AA105C[0]; /*0x5474f1*/
    dword_ABADDC = unk_AA105C[0]; /*0x5474f6*/
    dword_ABADE0 = unk_AA105C[0]; /*0x5474fb*/
    dword_ABADE4 = unk_AA105C[0]; /*0x547500*/
    dword_ABADE8 = unk_AA105C[0]; /*0x547505*/
    dword_ABADEC = unk_AA105C[0]; /*0x54750a*/
    dword_ABADF0 = 2147450879; /*0x54750f*/
    dword_ABADF4 = unk_AA105C[0]; /*0x547515*/
    dword_ABADF8 = unk_AA105C[0]; /*0x54751a*/
    dword_ABAE08 = 2147450879; /*0x547532*/
    dword_ABAE20 = 2147450879; /*0x547546*/
    dword_ABAE38 = 2147450879; /*0x54755a*/
    dword_ABAE50 = 2147450879; /*0x54756e*/
    dword_ABAE68 = 2147450879; /*0x547582*/
    dword_ABAE80 = 2147450879; /*0x547596*/
    dword_ABAE98 = 2147450879; /*0x5475aa*/
    dword_ABAEB0 = 2147450879; /*0x5475be*/
    dword_ABADFC = unk_AA105C[0]; /*0x5475cd*/
    dword_ABAE00 = unk_AA105C[0]; /*0x5475d2*/
    dword_ABAE04 = unk_AA105C[0]; /*0x5475d7*/
    dword_ABAE0C = unk_AA105C[0]; /*0x5475dc*/
    dword_ABAE10 = unk_AA105C[0]; /*0x5475e1*/
    dword_ABAE14 = unk_AA105C[0]; /*0x5475e6*/
    dword_ABAE18 = unk_AA105C[0]; /*0x5475eb*/
    dword_ABAE1C = unk_AA105C[0]; /*0x5475f0*/
    dword_ABAE24 = unk_AA105C[0]; /*0x5475f5*/
    dword_ABAE28 = unk_AA105C[0]; /*0x5475fa*/
    dword_ABAE2C = unk_AA105C[0]; /*0x5475ff*/
    dword_ABAE30 = unk_AA105C[0]; /*0x547604*/
    dword_ABAE34 = unk_AA105C[0]; /*0x547609*/
    dword_ABAE3C = unk_AA105C[0]; /*0x54760e*/
    dword_ABAE40 = unk_AA105C[0]; /*0x547613*/
    dword_ABAE44 = unk_AA105C[0]; /*0x547618*/
    dword_ABAE48 = unk_AA105C[0]; /*0x54761d*/
    dword_ABAE4C = unk_AA105C[0]; /*0x547622*/
    dword_ABAE54 = unk_AA105C[0]; /*0x547627*/
    dword_ABAE58 = unk_AA105C[0]; /*0x54762c*/
    dword_ABAE5C = unk_AA105C[0]; /*0x547631*/
    dword_ABAE60 = unk_AA105C[0]; /*0x547636*/
    dword_ABAE64 = unk_AA105C[0]; /*0x54763b*/
    dword_ABAE6C = unk_AA105C[0]; /*0x547640*/
    dword_ABAE70 = unk_AA105C[0]; /*0x547645*/
    dword_ABAE74 = unk_AA105C[0]; /*0x54764a*/
    dword_ABAE78 = unk_AA105C[0]; /*0x54764f*/
    dword_ABAE7C = unk_AA105C[0]; /*0x547654*/
    dword_ABAE84 = unk_AA105C[0]; /*0x547659*/
    dword_ABAE88 = unk_AA105C[0]; /*0x54765e*/
    dword_ABAE8C = unk_AA105C[0]; /*0x547663*/
    dword_ABAE90 = unk_AA105C[0]; /*0x547668*/
    dword_ABAE94 = unk_AA105C[0]; /*0x54766d*/
    dword_ABAE9C = unk_AA105C[0]; /*0x547672*/
    dword_ABAEA0 = unk_AA105C[0]; /*0x547677*/
    dword_ABAEA4 = unk_AA105C[0]; /*0x54767c*/
    dword_ABAEA8 = unk_AA105C[0]; /*0x547681*/
    dword_ABAEAC = unk_AA105C[0]; /*0x547686*/
    dword_ABAEB4 = unk_AA105C[0]; /*0x54768b*/
    dword_ABAEB8 = unk_AA105C[0]; /*0x547690*/
    dword_ABAEBC = unk_AA105C[0]; /*0x547695*/
    dword_ABAEC0 = unk_AA105C[0]; /*0x54769a*/
    dword_ABAEC4 = unk_AA105C[0]; /*0x54769f*/
    dword_ABAEC8 = 2147450879; /*0x5476a4*/
    dword_ABAECC = unk_AA105C[0]; /*0x5476aa*/
    dword_ABAED0 = unk_AA105C[0]; /*0x5476af*/
    dword_ABAEE0 = 2147450879; /*0x5476c7*/
    dword_ABAEF8 = 2147450879; /*0x5476db*/
    dword_ABAF10 = 2147450879; /*0x5476ed*/
    dword_ABAF14 = -65536; /*0x547701*/
    dword_ABAF18 = -65536; /*0x54771a*/
    dword_ABAF1C = -65537; /*0x547733*/
    dword_ABAF28 = 2147450879; /*0x547747*/
    dword_ABAF2C = -65536; /*0x54775b*/
    dword_ABAF30 = -65536; /*0x54776f*/
    dword_ABAF34 = -65537; /*0x547783*/
    dword_ABAF40 = 2147450879; /*0x547797*/
    dword_ABAF44 = -131073; /*0x5477ab*/
    dword_ABAF48 = -196608; /*0x5477bf*/
    dword_ABAED4 = unk_AA105C[0]; /*0x5477d3*/
    dword_ABAED8 = unk_AA105C[0]; /*0x5477d8*/
    dword_ABAEDC = unk_AA105C[0]; /*0x5477dd*/
    dword_ABAEE4 = unk_AA105C[0]; /*0x5477e2*/
    dword_ABAEE8 = unk_AA105C[0]; /*0x5477e7*/
    dword_ABAEEC = unk_AA105C[0]; /*0x5477ec*/
    dword_ABAEF0 = unk_AA105C[0]; /*0x5477f1*/
    dword_ABAEF4 = unk_AA105C[0]; /*0x5477f6*/
    dword_ABAEFC = unk_AA105C[0]; /*0x5477fb*/
    dword_ABAF00 = unk_AA105C[0]; /*0x547800*/
    dword_ABAF04 = unk_AA105C[0]; /*0x547805*/
    dword_ABAF08 = unk_AA105C[0]; /*0x54780a*/
    dword_ABAF0C = unk_AA105C[0]; /*0x54780f*/
    dword_ABAF20 = unk_AA105C[0]; /*0x547814*/
    dword_ABAF24 = unk_AA105C[0]; /*0x547819*/
    dword_ABAF38 = unk_AA105C[0]; /*0x54781e*/
    dword_ABAF3C = unk_AA105C[0]; /*0x547823*/
    dword_ABAF4C = unk_AA105C[0]; /*0x547828*/
    dword_ABAF50 = unk_AA105C[0]; /*0x54782d*/
    dword_ABAF54 = unk_AA105C[0]; /*0x547832*/
    dword_ABAF58 = 2147450879; /*0x547837*/
    dword_ABAF5C = -131073; /*0x547850*/
    dword_ABAF60 = -196608; /*0x547864*/
    dword_ABAF70 = 2147450879; /*0x547878*/
    dword_ABAF74 = -131073; /*0x54788c*/
    dword_ABAF78 = -196608; /*0x5478a0*/
    dword_ABAF88 = 2147450879; /*0x5478b4*/
    dword_ABAF8C = -196608; /*0x5478c8*/
    dword_ABAFA0 = 2147450879; /*0x5478dc*/
    dword_ABAFA4 = -196608; /*0x5478f2*/
    dword_ABAFA8 = -196607; /*0x547906*/
    dword_ABAFAC = -131073; /*0x54791a*/
    dword_ABAFB0 = -131074; /*0x54792e*/
    dword_ABAFB8 = 2147450879; /*0x547942*/
    dword_ABAFBC = -196608; /*0x547956*/
    dword_ABAFC0 = -131073; /*0x54796a*/
    dword_ABAFC4 = -131074; /*0x54797e*/
    dword_ABAFC8 = -65539; /*0x547992*/
    dword_ABAF64 = unk_AA105C[0]; /*0x5479a1*/
    dword_ABAF68 = unk_AA105C[0]; /*0x5479a6*/
    dword_ABAF6C = unk_AA105C[0]; /*0x5479ab*/
    dword_ABAF7C = unk_AA105C[0]; /*0x5479b0*/
    dword_ABAF80 = unk_AA105C[0]; /*0x5479b5*/
    dword_ABAF84 = unk_AA105C[0]; /*0x5479ba*/
    dword_ABAF90 = unk_AA105C[0]; /*0x5479bf*/
    dword_ABAF94 = unk_AA105C[0]; /*0x5479c4*/
    dword_ABAF98 = unk_AA105C[0]; /*0x5479c9*/
    dword_ABAF9C = unk_AA105C[0]; /*0x5479ce*/
    dword_ABAFB4 = unk_AA105C[0]; /*0x5479d3*/
    dword_ABAFCC = unk_AA105C[0]; /*0x5479d8*/
    dword_ABAFD0 = 2147450879; /*0x5479dd*/
    dword_ABAFD4 = -196608; /*0x5479f1*/
    dword_ABAFD8 = -131073; /*0x547a05*/
    dword_ABAFDC = -131074; /*0x547a19*/
    dword_ABAFE8 = 2147450879; /*0x547a2d*/
    dword_ABAFF0 = -131073; /*0x547a54*/
    dword_ABAFF4 = -131074; /*0x547a68*/
    dword_ABB000 = 2147450879; /*0x547a7c*/
    dword_ABB004 = -131074; /*0x547a90*/
    dword_ABB018 = 2147450879; /*0x547aa4*/
    dword_ABB01C = -131074; /*0x547ab8*/
    dword_ABB034 = -196608; /*0x547ad5*/
    dword_ABB048 = 2147450879; /*0x547ae9*/
    dword_ABAFE0 = unk_AA105C[0]; /*0x547afd*/
    dword_ABAFE4 = unk_AA105C[0]; /*0x547b02*/
    dword_ABAFEC = -196608; /*0x547b07*/
    dword_ABAFF8 = unk_AA105C[0]; /*0x547b0d*/
    dword_ABAFFC = unk_AA105C[0]; /*0x547b12*/
    dword_ABB008 = unk_AA105C[0]; /*0x547b17*/
    dword_ABB00C = unk_AA105C[0]; /*0x547b1c*/
    dword_ABB010 = unk_AA105C[0]; /*0x547b21*/
    dword_ABB014 = unk_AA105C[0]; /*0x547b26*/
    dword_ABB020 = unk_AA105C[0]; /*0x547b2b*/
    dword_ABB024 = unk_AA105C[0]; /*0x547b30*/
    dword_ABB028 = unk_AA105C[0]; /*0x547b35*/
    dword_ABB02C = unk_AA105C[0]; /*0x547b3a*/
    dword_ABB030 = 2147450879; /*0x547b3f*/
    dword_ABB038 = unk_AA105C[0]; /*0x547b45*/
    dword_ABB03C = unk_AA105C[0]; /*0x547b4a*/
    dword_ABB040 = unk_AA105C[0]; /*0x547b4f*/
    dword_ABB044 = unk_AA105C[0]; /*0x547b54*/
    dword_ABB04C = unk_AA105C[0]; /*0x547b59*/
    dword_ABB050 = unk_AA105C[0]; /*0x547b5e*/
    dword_ABB054 = unk_AA105C[0]; /*0x547b63*/
    dword_ABB058 = unk_AA105C[0]; /*0x547b68*/
    dword_ABB05C = unk_AA105C[0]; /*0x547b6d*/
    dword_ABB060 = 2147450879; /*0x547b72*/
    dword_ABB078 = 2147450879; /*0x547b86*/
    dword_ABB090 = 2147450879; /*0x547b9a*/
    dword_ABB0A8 = 2147450879; /*0x547bae*/
    dword_ABB0C0 = 2147450879; /*0x547bc2*/
    dword_ABB064 = unk_AA105C[0]; /*0x547bd6*/
    dword_ABB068 = unk_AA105C[0]; /*0x547bdb*/
    dword_ABB06C = unk_AA105C[0]; /*0x547be0*/
    dword_ABB070 = unk_AA105C[0]; /*0x547be5*/
    dword_ABB074 = unk_AA105C[0]; /*0x547bea*/
    dword_ABB07C = unk_AA105C[0]; /*0x547bef*/
    dword_ABB080 = unk_AA105C[0]; /*0x547bf4*/
    dword_ABB084 = unk_AA105C[0]; /*0x547bf9*/
    dword_ABB088 = unk_AA105C[0]; /*0x547bfe*/
    dword_ABB08C = unk_AA105C[0]; /*0x547c03*/
    dword_ABB094 = unk_AA105C[0]; /*0x547c08*/
    dword_ABB098 = unk_AA105C[0]; /*0x547c0d*/
    dword_ABB09C = unk_AA105C[0]; /*0x547c12*/
    dword_ABB0A0 = unk_AA105C[0]; /*0x547c17*/
    dword_ABB0A4 = unk_AA105C[0]; /*0x547c1c*/
    dword_ABB0AC = unk_AA105C[0]; /*0x547c21*/
    dword_ABB0B0 = unk_AA105C[0]; /*0x547c26*/
    dword_ABB0B4 = unk_AA105C[0]; /*0x547c2b*/
    dword_ABB0B8 = unk_AA105C[0]; /*0x547c30*/
    dword_ABB0BC = unk_AA105C[0]; /*0x547c35*/
    dword_ABB0C4 = unk_AA105C[0]; /*0x547c3a*/
    dword_ABB0C8 = unk_AA105C[0]; /*0x547c3f*/
    dword_ABB0CC = unk_AA105C[0]; /*0x547c44*/
    dword_ABB0D0 = unk_AA105C[0]; /*0x547c49*/
    dword_ABB0D4 = unk_AA105C[0]; /*0x547c4e*/
    dword_ABB0DC = unk_AA105C[0]; /*0x547c53*/
    dword_ABB0E0 = unk_AA105C[0]; /*0x547c58*/
    dword_ABB0E4 = unk_AA105C[0]; /*0x547c5d*/
    dword_ABB0E8 = unk_AA105C[0]; /*0x547c62*/
    dword_ABB0EC = unk_AA105C[0]; /*0x547c67*/
    dword_ABB0D8 = 2147450879; /*0x547c7f*/
    dword_ABB0F0 = 2147450879; /*0x547c85*/
    atexit(nullsub_20); /*0x547c8a*/
    a1 = v5; /*0x547c8f*/
  }
  v1 = *(_DWORD *)(a1 + 660); /*0x547c98*/
  v2 = unk_AA102C; /*0x547c9e*/
  while ( 1 ) /*0x547ca7*/
  {
    v3 = v1 - *v2; /*0x547ca7*/
    if ( v3 < 0x28 ) /*0x547ca9*/
      break; /*0x547ca9*/
    if ( (int)++v2 >= (int)&unk_AA1040 ) /*0x547cb9*/
      return 0; /*0x547cb9*/
  }
  return 24 * v3 + 11250996; /*0x547cbb*/
}
}
} // namespace gamemd

// 0x547CE0
namespace gamemd {
void nullsub_20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl nullsub_20()
{
  ; /*0x547ce0*/
}
}
} // namespace gamemd

// 0x549830
namespace gamemd {
char sub_549830(int a2, void ** a3, int a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_549830(void *this, int a2, void **a3, int a4, int a5)
{
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // eax
  _DWORD *v10; // ecx
  int v11; // ebx
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // ebx
  _BYTE *v16; // eax
  unsigned int v17; // ebp
  char *v19; // edx
  int v20; // ecx
  char v21; // bl
  char v22; // bl
  _BYTE *v23; // eax
  _BYTE *v24; // edx
  int v25; // ebx
  int v26; // esi
  int v27; // [esp+1Ch] [ebp+4h]
  char *v28; // [esp+1Ch] [ebp+4h]
  int v29; // [esp+28h] [ebp+10h]

  memset(*a3, 0, a5 * a4); /*0x549859*/
  v6 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 156))(this); /*0x549866*/
  v7 = v6; /*0x54986c*/
  if ( v6 ) /*0x549870*/
  {
    v27 = a2 % (*v6 * v6[1]); /*0x549883*/
    v8 = v6[v27 + 4]; /*0x549887*/
    if ( !v8 ) /*0x54988d*/
      return 0; /*0x54988d*/
    v9 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 156))(this); /*0x549897*/
    v10 = v9; /*0x54989d*/
    if ( v9 ) /*0x5498a1*/
    {
      v11 = *v9 * v9[1]; /*0x5498aa*/
      v12 = v9[2]; /*0x5498b0*/
      v13 = v10[v27 % v11 + 4]; /*0x5498b3*/
      v14 = v10[3]; /*0x5498b7*/
      if ( v13 && (*(_BYTE *)(v13 + 36) & 1) != 0 ) /*0x5498c2*/
        v14 += *(_DWORD *)(v13 + 4) - *(_DWORD *)(v13 + 24); /*0x5498ca*/
    }
    else
    {
      v14 = 0; /*0x5498ce*/
      v12 = 0; /*0x5498d2*/
    }
    v15 = a4; /*0x5498d6*/
    if ( v12 > a4 || v14 > a5 ) /*0x5498e6*/
      return 0; /*0x5498e6*/
    v16 = *a3; /*0x5498f3*/
    v17 = (unsigned int)*a3 + a5 * a4; /*0x5498f5*/
    if ( (*(_BYTE *)(v8 + 36) & 1) != 0 ) /*0x5498fa*/
    {
      v16 += a4 * (*(_DWORD *)(v8 + 4) - *(_DWORD *)(v8 + 24)); /*0x549907*/
      if ( (unsigned int)v16 >= v17 ) /*0x54990b*/
        return 0; /*0x549916*/
    }
    v19 = (char *)&unk_828924; /*0x54991c*/
    v28 = (char *)(v8 + 52); /*0x549921*/
    v29 = 0; /*0x54992a*/
    if ( (int)v7[3] > 0 ) /*0x549932*/
    {
      while ( 1 ) /*0x549934*/
      {
        v20 = 0; /*0x549934*/
        if ( (int)v7[2] > 0 ) /*0x549939*/
          break; /*0x549939*/
LABEL_20:
        v16 += v15 - v7[2]; /*0x549969*/
        if ( (unsigned int)v16 >= v17 ) /*0x549972*/
          return 0; /*0x549972*/
        if ( ++v29 >= v7[3] ) /*0x549980*/
          goto LABEL_22; /*0x549980*/
      }
      while ( 1 ) /*0x54993b*/
      {
        v21 = *v19++; /*0x54993b*/
        if ( v21 != 32 ) /*0x549945*/
        {
          v22 = *v28++; /*0x54994b*/
          *v16 = v22; /*0x549956*/
        }
        if ( (unsigned int)++v16 >= v17 ) /*0x54995b*/
          return 0; /*0x54995b*/
        if ( ++v20 >= v7[2] ) /*0x549963*/
        {
          v15 = a4; /*0x549965*/
          goto LABEL_20; /*0x549965*/
        }
      }
    }
LABEL_22:
    if ( (*(_BYTE *)(v8 + 36) & 1) != 0 ) /*0x549986*/
    {
      v23 = (char *)*a3 + *(_DWORD *)(v8 + 20) - *(_DWORD *)v8; /*0x549995*/
      if ( (unsigned int)v23 >= v17 ) /*0x549999*/
        return 0; /*0x5499a4*/
      v24 = (_BYTE *)(v8 + *(_DWORD *)(v8 + 8)); /*0x5499ad*/
      v25 = 0; /*0x5499af*/
      if ( *(int *)(v8 + 32) > 0 ) /*0x5499b3*/
      {
        while ( 1 ) /*0x5499b8*/
        {
          v26 = 0; /*0x5499b8*/
          if ( *(int *)(v8 + 28) > 0 ) /*0x5499bc*/
            break; /*0x5499bc*/
LABEL_31:
          v23 += a4 - *(_DWORD *)(v8 + 28); /*0x5499d4*/
          if ( (unsigned int)v23 >= v17 ) /*0x5499e1*/
            return 0; /*0x5499e1*/
          if ( ++v25 >= *(_DWORD *)(v8 + 32) ) /*0x5499e9*/
            return 1; /*0x5499e9*/
        }
        while ( 1 ) /*0x5499be*/
        {
          if ( *v24 ) /*0x5499be*/
            *v23 = *v24; /*0x5499c4*/
          ++v23; /*0x5499c6*/
          ++v24; /*0x5499c7*/
          if ( (unsigned int)v23 >= v17 ) /*0x5499ca*/
            return 0; /*0x5499ca*/
          if ( ++v26 >= *(_DWORD *)(v8 + 28) ) /*0x5499d2*/
            goto LABEL_31; /*0x5499d2*/
        }
      }
    }
  }
  return 1; /*0x54990d*/
}
}
} // namespace gamemd

// 0x549A00
namespace gamemd {
int sub_549A00(int a1, int a2, int * a3, int * a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_549A00(int a1, int a2, int *a3, int *a4)
{
  int result; // eax

  *a3 = 60 * a1 / 2; /*0x549a16*/
  *a4 = 30 * a1 / 2; /*0x549a29*/
  *a3 += -60 * a2 / 2; /*0x549a43*/
  result = 30 * a2 / 2; /*0x549a51*/
  *a4 += result; /*0x549a55*/
  return result; /*0x549a45*/
}
}
} // namespace gamemd

// 0x549B30
namespace gamemd {
int sub_549B30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_549B30()
{
  lpBuffer = 0; /*0x549b32*/
  unk_AA1060 = 0; /*0x549b37*/
  unk_AA1064 = 0; /*0x549b3c*/
  unk_AA1068 = 0; /*0x549b41*/
  unk_AA106C = 0; /*0x549b46*/
  return 0; /*0x549b4b*/
}
}
} // namespace gamemd

// 0x54A8A0
namespace gamemd {
int sub_54A8A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_54A8A0()
{
  dword_ABC560 = 0; /*0x54a8a2*/
  dword_ABC564 = 0; /*0x54a8a7*/
  dword_ABC568 = 0; /*0x54a8ac*/
  dword_ABC56C = 0; /*0x54a8b1*/
  return 0; /*0x54a8b6*/
}
}
} // namespace gamemd

// 0x54A900
namespace gamemd {
unsigned char * Bitfield_SetBit(int a1, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_BYTE *__fastcall Bitfield_SetBit(int a1, int a2, int a3)
{
  char v3; // bl
  _BYTE *result; // eax
  char v5; // cl

  v3 = 1 << (a2 % 8); /*0x54a917*/
  result = (_BYTE *)(a1 + a2 / 8); /*0x54a92a*/
  if ( a3 ) /*0x54a920*/
    v5 = v3 | *result; /*0x54a92f*/
  else
    v5 = ~v3 & *result; /*0x54a946*/
  *result = v5; /*0x54a932*/
  return result; /*0x54a92c*/
}
}
} // namespace gamemd

// 0x54A990
namespace gamemd {
int sub_54A990()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_54A990(_BYTE *this)
{
  _BYTE *v1; // edi
  int v2; // ebp
  char v3; // al
  int i; // esi

  v1 = this; /*0x54a994*/
  v2 = 0; /*0x54a996*/
  if ( !*this ) /*0x54a998*/
  {
    do /*0x54a9a4*/
    {
      v3 = v1[1]; /*0x54a99d*/
      ++v2; /*0x54a9a0*/
      ++v1; /*0x54a9a1*/
    }
    while ( !v3 ); /*0x54a9a4*/
  }
  for ( i = 0; i < 8; ++i ) /*0x54a9a6*/
  {
    if ( ((unsigned __int8)(1 << (i % 8)) & v1[i / 8]) != 0 ) /*0x54a9c9*/
      break; /*0x54a9c9*/
  }
  return i + 8 * v2; /*0x54a9d4*/
}
}
} // namespace gamemd

// 0x54A9E0
namespace gamemd {
int sub_54A9E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_54A9E0(_BYTE *this)
{
  _BYTE *v1; // edi
  int v2; // ebp
  char v3; // al
  int i; // esi

  v1 = this; /*0x54a9e4*/
  v2 = 0; /*0x54a9e6*/
  if ( *this == 0xFF ) /*0x54a9eb*/
  {
    do /*0x54a9f4*/
    {
      v3 = v1[1]; /*0x54a9ed*/
      ++v2; /*0x54a9f0*/
      ++v1; /*0x54a9f1*/
    }
    while ( v3 == -1 ); /*0x54a9f4*/
  }
  for ( i = 0; i < 8; ++i ) /*0x54a9f6*/
  {
    if ( ((unsigned __int8)(1 << (i % 8)) & v1[i / 8]) == 0 ) /*0x54aa19*/
      break; /*0x54aa19*/
  }
  return i + 8 * v2; /*0x54aa24*/
}
}
} // namespace gamemd

// 0x54AA30
namespace gamemd {
void sub_54AA30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_54AA30()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x54aa3c*/
  dbl_ABC590 = Math::Sqrt(v0 + v0); /*0x54aa4e*/
}
}
} // namespace gamemd

// 0x54AA60
namespace gamemd {
void sub_54AA60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_54AA60()
{
  dbl_ABC5E0 = dbl_ABC590 / 60.0; /*0x54aa6c*/
}
}
} // namespace gamemd

// 0x54AA80
namespace gamemd {
void sub_54AA80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_54AA80()
{
  dbl_ABC5C8 = 1.0 / dbl_ABC5E0; /*0x54aa8c*/
}
}
} // namespace gamemd

// 0x54AAA0
namespace gamemd {
void sub_54AAA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_54AAA0()
{
  dbl_ABC5C0 = 0.0174532925199433 * 45.0; /*0x54aaac*/
}
}
} // namespace gamemd

// 0x54AAC0
namespace gamemd {
void sub_54AAC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_54AAC0()
{
  dbl_ABC598 = 0.0174532925199433 * 60.0; /*0x54aacc*/
}
}
} // namespace gamemd

// 0x54AAE0
namespace gamemd {
void sub_54AAE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_54AAE0()
{
  dbl_ABC570 = 0.0174532925199433 * 90.0; /*0x54aaec*/
}
}
} // namespace gamemd

// 0x54AB00
namespace gamemd {
long long sub_54AB00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_54AB00()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABC570 - dbl_ABC598); /*0x54ab12*/
  result = Math::RoundToInt(v0 * dbl_ABC590 * 0.5); /*0x54ab26*/
  dword_ABC5E8 = result; /*0x54ab2b*/
  return result; /*0x54ab30*/
}
}
} // namespace gamemd

// 0x54AB40
namespace gamemd {
void sub_54AB40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_54AB40()
{
  dbl_ABC5A0 = Math::ArcTan((double)dword_ABC5E8 * 0.00390625); /*0x54ab57*/
}
}
} // namespace gamemd

// 0x54AB70
namespace gamemd {
void sub_54AB70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_54AB70()
{
  dbl_ABC5B8 = Math::ArcTan((double)(2 * dword_ABC5E8) / dbl_ABC590); /*0x54ab92*/
}
}
} // namespace gamemd

// 0x54ABA0
namespace gamemd {
long long sub_54ABA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_54ABA0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABC5E8) + 0.5); /*0x54abbb*/
  dword_ABC5DC = result; /*0x54abc0*/
  return result; /*0x54abc6*/
}
}
} // namespace gamemd

// 0x54ABD0
namespace gamemd {
int sub_54ABD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_54ABD0()
{
  dword_ABC588 = 0; /*0x54abd2*/
  MEMORY[0xABC58A] = 0; /*0x54abd8*/
  return 0; /*0x54abde*/
}
}
} // namespace gamemd

// 0x54ABE0
namespace gamemd {
int sub_54ABE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_54ABE0()
{
  dword_ABC5A8 = 0; /*0x54abe2*/
  dword_ABC5AC = 0; /*0x54abe7*/
  dword_ABC5B0 = 0; /*0x54abec*/
  return 0; /*0x54abf1*/
}
}
} // namespace gamemd

// 0x54AC00
namespace gamemd {
int sub_54AC00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_54AC00()
{
  dword_ABC5D8 = 0; /*0x54ac05*/
  dword_ABC5D0 = 128; /*0x54ac0f*/
  dword_ABC5D4 = 128; /*0x54ac14*/
  return 128; /*0x54ac19*/
}
}
} // namespace gamemd

// 0x54AC20
namespace gamemd {
int sub_54AC20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_54AC20()
{
  dword_ABC578 = 0; /*0x54ac22*/
  dword_ABC57C = 0; /*0x54ac27*/
  dword_ABC580 = 0; /*0x54ac2c*/
  dword_ABC584 = 0; /*0x54ac31*/
  return 0; /*0x54ac36*/
}
}
} // namespace gamemd

// 0x54BA30
namespace gamemd {
int UpdateFootMovement()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall UpdateFootMovement(int this)
{
  int v2; // edi
  int v3; // eax
  int *v4; // eax
  int v5; // eax
  int v6; // ecx
  unsigned int v7; // edi
  _DWORD *v8; // eax
  int v9; // ebx
  void *NeighbourContentCell; // eax
  _BYTE *v11; // ecx
  int result; // eax
  _DWORD *v13; // eax
  _BYTE *v14; // ecx
  char v15; // bl
  int *v16; // ecx
  int v17; // edx
  double v18; // st7
  int MemberTeam; // eax
  int v20; // edi
  _BYTE *v21; // eax
  int v22; // eax
  _BYTE *v23; // ecx
  char v24; // bl
  int v25; // [esp+14h] [ebp-24h]
  int v26; // [esp+20h] [ebp-18h] BYREF
  int v27; // [esp+24h] [ebp-14h] BYREF
  int v28; // [esp+28h] [ebp-10h] BYREF
  int v29; // [esp+2Ch] [ebp-Ch] BYREF
  int v30; // [esp+30h] [ebp-8h]
  int v31; // [esp+34h] [ebp-4h]

  v2 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 456))(*(_DWORD *)(this + 12)); /*0x54ba43*/
  v3 = *(_DWORD *)(this + 12); /*0x54ba45*/
  if ( !*(_BYTE *)(v3 + 140) ) /*0x54ba48*/
  {
    v4 = (int *)(v3 + 156); /*0x54ba52*/
    v29 = *v4; /*0x54ba59*/
    v30 = v4[1]; /*0x54ba65*/
    v31 = v4[2]; /*0x54ba71*/
    if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v29) + 80) & 0x100) != 0 && v2 >= dword_ABC5DC ) /*0x54ba8c*/
      v2 -= dword_ABC5DC; /*0x54ba8e*/
  }
  v5 = *(_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 12) + 440))(*(_DWORD *)(this + 12), &v28); /*0x54baa0*/
  v6 = *(_DWORD *)(this + 12); /*0x54baa2*/
  v26 = v5; /*0x54baa5*/
  if ( v5 != *(_DWORD *)(v6 + 1376) ) /*0x54bab0*/
    Coord::ToGridIndex((char *)MEMORY[0x887888], v6, *(_DWORD *)(v6 + 1376), v5); /*0x54bace*/
  if ( v2 < *(_DWORD *)(this + 128) ) /*0x54bade*/
  {
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 44))(*(_DWORD *)(this + 12)) == 1 /*0x54bba2*/
      && *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3434) )
    {
      result = *(_DWORD *)(this + 128) / 2; /*0x54bbb5*/
    }
    else
    {
      result = *(_DWORD *)(this + 128) / 4; /*0x54bbc5*/
    }
    if ( v2 > result ) /*0x54bbca*/
    {
      v16 = (int *)(*(_DWORD *)(this + 12) + 156); /*0x54bbd6*/
      *(double *)(this + 120) = (double)*(int *)(this + 32); /*0x54bbdc*/
      v29 = *v16; /*0x54bbe1*/
      v17 = v16[1]; /*0x54bbe5*/
      v30 = v17; /*0x54bbe8*/
      v31 = v16[2]; /*0x54bbef*/
      v28 = *(_DWORD *)(this + 64); /*0x54bbf8*/
      if ( v29 == v28 && v17 == *(_DWORD *)(this + 68) ) /*0x54bc01*/
        LOWORD(v27) = 0; /*0x54bc03*/
      v18 = Math::CalcAngle((double)v30 - (double)*(int *)(this + 68), (double)v28 - (double)v29); /*0x54bc26*/
      LOWORD(v28) = Math::RoundToInt((v18 - 1.570796326794897) * -10430.06004058427); /*0x54bc3f*/
      v27 = v28; /*0x54bc50*/
      FacingClass::Update((char *)(this + 84), &v27); /*0x54bc54*/
      MemberTeam = Team::GetMember(*(_DWORD **)(this + 12), 0); /*0x54bc5e*/
      v20 = MemberTeam; /*0x54bc63*/
      if ( MemberTeam ) /*0x54bc67*/
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)MemberTeam + 44))(MemberTeam) == 6 ) /*0x54bc73*/
        {
          v21 = *(_BYTE **)(v20 + 1312); /*0x54bc75*/
          if ( v21[5821] || v21[5860] || v21[5861] || v21[5862] ) /*0x54bc99*/
            (**(void (__thiscall ***)(int, int, _DWORD))(*(_DWORD *)(this + 12) + 8))( /*0x54bcb3*/
              *(_DWORD *)(this + 12) + 8,
              4475,
              0);
        }
      }
      result = *(_DWORD *)(this + 68) / 256; /*0x54bcd2*/
      if ( v26 == __PAIR32__(result, *(_DWORD *)(this + 64) / 256) ) /*0x54bcda*/
      {
        result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)); /*0x54bce8*/
        if ( !*(_BYTE *)(result + 3434) ) /*0x54bcee*/
        {
          v22 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 456))(*(_DWORD *)(this + 12)); /*0x54bcfd*/
          v23 = *(_BYTE **)(this + 12); /*0x54bd03*/
          *(_DWORD *)(this + 128) = v22; /*0x54bd06*/
          v24 = v23[116]; /*0x54bd10*/
          (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v23 + 292))(v23, 0); /*0x54bd13*/
          result = *(_DWORD *)(this + 12); /*0x54bd19*/
          *(_DWORD *)(this + 80) = 3; /*0x54bd1c*/
          *(_BYTE *)(result + 116) = v24; /*0x54bd23*/
        }
      }
    }
  }
  else if ( ObjectClass::HasLinkedObject(*(_DWORD *)(this + 12)) ) /*0x54baea*/
  {
    v7 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 7); /*0x54bb08*/
    v8 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v26); /*0x54bb14*/
    v9 = **(_DWORD **)(this + 12); /*0x54bb1f*/
    NeighbourContentCell = Cell::GetNeighbourContent(v8, v7); /*0x54bb23*/
    (*(void (__thiscall **)(_DWORD, void *, int))(v9 + 1152))(*(_DWORD *)(this + 12), NeighbourContentCell, 1); /*0x54bb2c*/
    v11 = *(_BYTE **)(this + 12); /*0x54bb32*/
    LOBYTE(v9) = v11[116]; /*0x54bb39*/
    (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v11 + 292))(v11, 0); /*0x54bb3c*/
    result = *(_DWORD *)(this + 12); /*0x54bb42*/
    *(_BYTE *)(result + 116) = v9; /*0x54bb46*/
    *(_DWORD *)(this + 80) = 3; /*0x54bb49*/
  }
  else
  {
    v13 = (_DWORD *)(*(int (__stdcall **)(_DWORD))(**(_DWORD **)(this + 12) + 444))(*(_DWORD *)(this + 12)); /*0x54bb5c*/
    CellClass::AttachObject(v13, v25); /*0x54bb64*/
    v14 = *(_BYTE **)(this + 12); /*0x54bb69*/
    v15 = v14[116]; /*0x54bb70*/
    result = (*(int (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v14 + 292))(v14, 0); /*0x54bb73*/
    *(_BYTE *)(*(_DWORD *)(this + 12) + 116) = v15; /*0x54bb7d*/
    *(_DWORD *)(this + 80) = 2; /*0x54bb80*/
  }
  return result; /*0x54bb45*/
}
}
} // namespace gamemd

// 0x54D0C0
namespace gamemd {
void nullsub_156()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void nullsub_156()
{
  ; /*0x54d0c0*/
}
}
} // namespace gamemd

// 0x54E050
namespace gamemd {
void sub_54E050()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_54E050()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x54e05c*/
  dbl_ABC638 = Math::Sqrt(v0 + v0); /*0x54e06e*/
}
}
} // namespace gamemd

// 0x54E080
namespace gamemd {
void sub_54E080()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_54E080()
{
  dbl_ABC688 = dbl_ABC638 / 60.0; /*0x54e08c*/
}
}
} // namespace gamemd

// 0x54E0A0
namespace gamemd {
void sub_54E0A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_54E0A0()
{
  dbl_ABC670 = 1.0 / dbl_ABC688; /*0x54e0ac*/
}
}
} // namespace gamemd

// 0x54E0C0
namespace gamemd {
void sub_54E0C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_54E0C0()
{
  dbl_ABC668 = 0.0174532925199433 * 45.0; /*0x54e0cc*/
}
}
} // namespace gamemd

// 0x54E0E0
namespace gamemd {
void sub_54E0E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_54E0E0()
{
  dbl_ABC640 = 0.0174532925199433 * 60.0; /*0x54e0ec*/
}
}
} // namespace gamemd

// 0x54E100
namespace gamemd {
void sub_54E100()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_54E100()
{
  dbl_ABC5F0 = 0.0174532925199433 * 90.0; /*0x54e10c*/
}
}
} // namespace gamemd

// 0x54E120
namespace gamemd {
long long sub_54E120()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_54E120()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABC5F0 - dbl_ABC640); /*0x54e132*/
  result = Math::RoundToInt(v0 * dbl_ABC638 * 0.5); /*0x54e146*/
  dword_ABC690 = result; /*0x54e14b*/
  return result; /*0x54e150*/
}
}
} // namespace gamemd

// 0x54E160
namespace gamemd {
void sub_54E160()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_54E160()
{
  dbl_ABC648 = Math::ArcTan((double)dword_ABC690 * 0.00390625); /*0x54e177*/
}
}
} // namespace gamemd

// 0x54E190
namespace gamemd {
void sub_54E190()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_54E190()
{
  dbl_ABC660 = Math::ArcTan((double)(2 * dword_ABC690) / dbl_ABC638); /*0x54e1b2*/
}
}
} // namespace gamemd

// 0x54E1C0
namespace gamemd {
long long sub_54E1C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_54E1C0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABC690) + 0.5); /*0x54e1db*/
  dword_ABC684 = result; /*0x54e1e0*/
  return result; /*0x54e1e6*/
}
}
} // namespace gamemd

// 0x54E1F0
namespace gamemd {
int sub_54E1F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_54E1F0()
{
  word_ABC630 = 0; /*0x54e1f2*/
  word_ABC632 = 0; /*0x54e1f8*/
  return 0; /*0x54e1fe*/
}
}
} // namespace gamemd

// 0x54E200
namespace gamemd {
int sub_54E200()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_54E200()
{
  dword_ABC650 = 0; /*0x54e202*/
  dword_ABC654 = 0; /*0x54e207*/
  dword_ABC658 = 0; /*0x54e20c*/
  return 0; /*0x54e211*/
}
}
} // namespace gamemd

// 0x54E220
namespace gamemd {
int sub_54E220()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_54E220()
{
  dword_ABC680 = 0; /*0x54e225*/
  dword_ABC678 = 128; /*0x54e22f*/
  dword_ABC67C = 128; /*0x54e234*/
  return 128; /*0x54e239*/
}
}
} // namespace gamemd

// 0x54E240
namespace gamemd {
int sub_54E240()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_54E240()
{
  dword_ABC620 = 0; /*0x54e242*/
  dword_ABC624 = 0; /*0x54e247*/
  dword_ABC628 = 0; /*0x54e24c*/
  dword_ABC62C = 0; /*0x54e251*/
  return 0; /*0x54e256*/
}
}
} // namespace gamemd

// 0x54E260
namespace gamemd {
int sub_54E260()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_54E260()
{
  int v1; // [esp+4h] [ebp-8h]

  g_MissionQueueFrame = (int)MEMORY[0xA8ED84]; /*0x54e26d*/
  g_MissionQueueType = 0; /*0x54e276*/
  sub_54EBF0(&dword_ABC604, 0, 0); /*0x54e280*/
  dword_ABC604 = (int)&DynamicVectorClass<KamikazeControl *>::`vftable'; /*0x54e298*/
  dword_ABC618 = 10; /*0x54e2a2*/
  dword_ABC614 = 0; /*0x54e2ac*/
  g_MissionQueueFrame = (int)MEMORY[0xA8ED84]; /*0x54e2b6*/
  g_MissionQueueParam = v1; /*0x54e2bb*/
  g_MissionQueueType = 100; /*0x54e2c1*/
  return atexit(loc_54E2D0); /*0x54e2cf*/
}
}
} // namespace gamemd

// 0x54E360
namespace gamemd {
unsigned int * sub_54E360()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_54E360(_DWORD *this)
{
  int v2; // [esp+8h] [ebp-8h]

  *this = MEMORY[0xA8ED84]; /*0x54e370*/
  *(this + 2) = 0; /*0x54e375*/
  *(this + 4) = 0; /*0x54e378*/
  *(this + 5) = 0; /*0x54e37b*/
  *((_BYTE *)this + 24) = 1; /*0x54e37e*/
  *((_BYTE *)this + 25) = 0; /*0x54e382*/
  *(this + 3) = &DynamicVectorClass<KamikazeControl *>::`vftable'; /*0x54e385*/
  *(this + 8) = 10; /*0x54e38c*/
  *(this + 7) = 0; /*0x54e393*/
  *this = MEMORY[0xA8ED84]; /*0x54e39e*/
  *(this + 1) = v2; /*0x54e3a4*/
  *(this + 2) = 100; /*0x54e3a7*/
  return this; /*0x54e3aa*/
}
}
} // namespace gamemd

// 0x54E690
namespace gamemd {
void sub_54E690()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_54E690(_DWORD *this)
{
  int i; // esi
  int v3; // edx
  _DWORD *v4; // esi
  _DWORD *v5; // ecx
  int v6; // edi
  void *v7; // eax

  for ( i = *(this + 7) - 1; i >= 0; --i ) /*0x54e699*/
    __3_YAXPAX_Z(*(void **)(*(this + 4) + 4 * i)); /*0x54e6a2*/
  v3 = *(this + 3); /*0x54e6ad*/
  v4 = this + 3; /*0x54e6b0*/
  v5 = this + 3; /*0x54e6b3*/
  v6 = *(this + 5); /*0x54e6b5*/
  (*(void (__thiscall **)(_DWORD *))(v3 + 12))(v5); /*0x54e6b8*/
  (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v4 + 8))(v4, v6, 0); /*0x54e6c3*/
  v7 = (void *)v4[1]; /*0x54e6c6*/
  *v4 = &VectorClass<KamikazeControl *>::`vftable'; /*0x54e6c9*/
  if ( v7 && *((_BYTE *)v4 + 13) ) /*0x54e6d3*/
  {
    __3_YAXPAX_Z(v7); /*0x54e6d9*/
    v4[1] = 0; /*0x54e6e1*/
  }
  *((_BYTE *)v4 + 13) = 0; /*0x54e6e4*/
  v4[2] = 0; /*0x54e6e7*/
}
}
} // namespace gamemd

// 0x54EBF0
namespace gamemd {
unsigned int * sub_54EBF0(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_54EBF0(_DWORD *this, int a2, int a3)
{
  *(this + 1) = 0; /*0x54ebfb*/
  *(this + 2) = a2; /*0x54ebfe*/
  *((_BYTE *)this + 12) = 1; /*0x54ec01*/
  *((_BYTE *)this + 13) = 0; /*0x54ec05*/
  *this = &VectorClass<KamikazeControl *>::`vftable'; /*0x54ec08*/
  if ( a2 ) /*0x54ec0e*/
  {
    if ( a3 ) /*0x54ec16*/
    {
      *(this + 1) = a3; /*0x54ec18*/
      return this; /*0x54ec1e*/
    }
    *(this + 1) = __2_YAPAXI_Z(4 * a2); /*0x54ec2d*/
    *((_BYTE *)this + 13) = 1; /*0x54ec30*/
  }
  return this; /*0x54ec1d*/
}
}
} // namespace gamemd

// 0x54EC40
namespace gamemd {
int sub_54EC40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_54EC40()
{
  dword_ABC6A0 = 0; /*0x54ec42*/
  dword_ABC6A4 = 0; /*0x54ec47*/
  dword_ABC6A8 = 0; /*0x54ec4c*/
  dword_ABC6AC = 0; /*0x54ec51*/
  return 0; /*0x54ec56*/
}
}
} // namespace gamemd

// 0x54EC60
namespace gamemd {
void sub_54EC60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_54EC60()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x54ec6c*/
  dbl_ABC6B8 = Math::Sqrt(v0 + v0); /*0x54ec7e*/
}
}
} // namespace gamemd

// 0x54EC90
namespace gamemd {
void sub_54EC90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_54EC90()
{
  dbl_ABC708 = dbl_ABC6B8 / 60.0; /*0x54ec9c*/
}
}
} // namespace gamemd

// 0x54ECB0
namespace gamemd {
void sub_54ECB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_54ECB0()
{
  dbl_ABC6F0 = 1.0 / dbl_ABC708; /*0x54ecbc*/
}
}
} // namespace gamemd

// 0x54ECD0
namespace gamemd {
void sub_54ECD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_54ECD0()
{
  dbl_ABC6E8 = 0.0174532925199433 * 45.0; /*0x54ecdc*/
}
}
} // namespace gamemd

// 0x54ECF0
namespace gamemd {
void sub_54ECF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_54ECF0()
{
  dbl_ABC6C0 = 0.0174532925199433 * 60.0; /*0x54ecfc*/
}
}
} // namespace gamemd

// 0x54ED10
namespace gamemd {
void sub_54ED10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_54ED10()
{
  dbl_ABC698 = 0.0174532925199433 * 90.0; /*0x54ed1c*/
}
}
} // namespace gamemd

// 0x54ED30
namespace gamemd {
long long sub_54ED30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_54ED30()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABC698 - dbl_ABC6C0); /*0x54ed42*/
  result = Math::RoundToInt(v0 * dbl_ABC6B8 * 0.5); /*0x54ed56*/
  dword_ABC710 = result; /*0x54ed5b*/
  return result; /*0x54ed60*/
}
}
} // namespace gamemd

// 0x54ED70
namespace gamemd {
void sub_54ED70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_54ED70()
{
  dbl_ABC6C8 = Math::ArcTan((double)dword_ABC710 * 0.00390625); /*0x54ed87*/
}
}
} // namespace gamemd

// 0x54EDA0
namespace gamemd {
void sub_54EDA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_54EDA0()
{
  dbl_ABC6E0 = Math::ArcTan((double)(2 * dword_ABC710) / dbl_ABC6B8); /*0x54edc2*/
}
}
} // namespace gamemd

// 0x54EDD0
namespace gamemd {
long long sub_54EDD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_54EDD0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABC710) + 0.5); /*0x54edeb*/
  dword_ABC704 = result; /*0x54edf0*/
  return result; /*0x54edf6*/
}
}
} // namespace gamemd

// 0x54EE00
namespace gamemd {
int sub_54EE00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_54EE00()
{
  word_ABC6B0 = 0; /*0x54ee02*/
  word_ABC6B2 = 0; /*0x54ee08*/
  return 0; /*0x54ee0e*/
}
}
} // namespace gamemd

// 0x54EE10
namespace gamemd {
int sub_54EE10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_54EE10()
{
  dword_ABC6D0 = 0; /*0x54ee12*/
  dword_ABC6D4 = 0; /*0x54ee17*/
  dword_ABC6D8 = 0; /*0x54ee1c*/
  return 0; /*0x54ee21*/
}
}
} // namespace gamemd

// 0x54EE30
namespace gamemd {
int sub_54EE30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_54EE30()
{
  dword_ABC700 = 0; /*0x54ee35*/
  dword_ABC6F8 = 128; /*0x54ee3f*/
  dword_ABC6FC = 128; /*0x54ee44*/
  return 128; /*0x54ee49*/
}
}
} // namespace gamemd

// 0x54EE50
namespace gamemd {
void nullsub_157()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void nullsub_157()
{
  ; /*0x54ee50*/
}
}
} // namespace gamemd

// 0x54F6D0
namespace gamemd {
bool sub_54F6D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall sub_54F6D0(_DWORD *this)
{
  return *(this + 197) == *(this + 198); /*0x54f6e1*/
}
}
} // namespace gamemd

// 0x54FBB0
namespace gamemd {
void sub_54FBB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_54FBB0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x54fbbc*/
  dbl_ABC7C0 = Math::Sqrt(v0 + v0); /*0x54fbce*/
}
}
} // namespace gamemd

// 0x54FBE0
namespace gamemd {
void sub_54FBE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_54FBE0()
{
  dbl_ABC8B0 = dbl_ABC7C0 / 60.0; /*0x54fbec*/
}
}
} // namespace gamemd

// 0x54FC00
namespace gamemd {
void sub_54FC00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_54FC00()
{
  dbl_ABC898 = 1.0 / dbl_ABC8B0; /*0x54fc0c*/
}
}
} // namespace gamemd

// 0x54FC20
namespace gamemd {
void sub_54FC20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_54FC20()
{
  dbl_ABC890 = 0.0174532925199433 * 45.0; /*0x54fc2c*/
}
}
} // namespace gamemd

// 0x54FC40
namespace gamemd {
void sub_54FC40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_54FC40()
{
  dbl_ABC7D0 = 0.0174532925199433 * 60.0; /*0x54fc4c*/
}
}
} // namespace gamemd

// 0x54FC60
namespace gamemd {
void sub_54FC60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_54FC60()
{
  dbl_ABC720 = 0.0174532925199433 * 90.0; /*0x54fc6c*/
}
}
} // namespace gamemd

// 0x54FC80
namespace gamemd {
long long sub_54FC80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_54FC80()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABC720 - dbl_ABC7D0); /*0x54fc92*/
  result = Math::RoundToInt(v0 * dbl_ABC7C0 * 0.5); /*0x54fca6*/
  dword_ABC8BC = result; /*0x54fcab*/
  return result; /*0x54fcb0*/
}
}
} // namespace gamemd

// 0x54FCC0
namespace gamemd {
void sub_54FCC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_54FCC0()
{
  dbl_ABC7D8 = Math::ArcTan((double)dword_ABC8BC * 0.00390625); /*0x54fcd7*/
}
}
} // namespace gamemd

// 0x54FCF0
namespace gamemd {
void sub_54FCF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_54FCF0()
{
  dbl_ABC7F0 = Math::ArcTan((double)(2 * dword_ABC8BC) / dbl_ABC7C0); /*0x54fd12*/
}
}
} // namespace gamemd

// 0x54FD20
namespace gamemd {
long long sub_54FD20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_54FD20()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABC8BC) + 0.5); /*0x54fd3b*/
  dword_ABC8AC = result; /*0x54fd40*/
  return result; /*0x54fd46*/
}
}
} // namespace gamemd

// 0x54FD50
namespace gamemd {
int sub_54FD50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_54FD50()
{
  word_ABC7B8 = 0; /*0x54fd52*/
  word_ABC7BA = 0; /*0x54fd58*/
  return 0; /*0x54fd5e*/
}
}
} // namespace gamemd

// 0x54FD60
namespace gamemd {
int sub_54FD60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_54FD60()
{
  dword_ABC7E0 = 0; /*0x54fd62*/
  dword_ABC7E4 = 0; /*0x54fd67*/
  dword_ABC7E8 = 0; /*0x54fd6c*/
  return 0; /*0x54fd71*/
}
}
} // namespace gamemd

// 0x54FD80
namespace gamemd {
int sub_54FD80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_54FD80()
{
  dword_ABC8A8 = 0; /*0x54fd85*/
  dword_ABC8A0 = 128; /*0x54fd8f*/
  dword_ABC8A4 = 128; /*0x54fd94*/
  return 128; /*0x54fd99*/
}
}
} // namespace gamemd

// 0x54FDA0
namespace gamemd {
int sub_54FDA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_54FDA0()
{
  dword_ABC728 = 0; /*0x54fda2*/
  dword_ABC72C = 0; /*0x54fda7*/
  dword_ABC730 = 0; /*0x54fdac*/
  dword_ABC734 = 0; /*0x54fdb1*/
  return 0; /*0x54fdb6*/
}
}
} // namespace gamemd

// 0x54FDC0
namespace gamemd {
int sub_54FDC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_54FDC0()
{
  dword_ABC87C = 0; /*0x54fdc7*/
  dword_ABC880 = 0; /*0x54fdcc*/
  byte_ABC884 = 1; /*0x54fdd1*/
  byte_ABC885 = 0; /*0x54fdd8*/
  dword_ABC878 = (int)&DynamicVectorClass<LaserDrawClass *>::`vftable'; /*0x54fddd*/
  dword_ABC88C = 10; /*0x54fde7*/
  g_TimerPool = 0; /*0x54fdf1*/
  return atexit(sub_54FE00); /*0x54fdfc*/
}
}
} // namespace gamemd

// 0x54FE00
namespace gamemd {
void sub_54FE00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_54FE00()
{
  if ( (byte_ABC718 & 1) == 0 ) /*0x54fe0a*/
  {
    dword_ABC878 = (int)&VectorClass<LaserDrawClass *>::`vftable'; /*0x54fe0e*/
    byte_ABC718 |= 1u; /*0x54fe21*/
    if ( dword_ABC87C ) /*0x54fe27*/
    {
      if ( byte_ABC885 ) /*0x54fe31*/
      {
        __3_YAXPAX_Z(dword_ABC87C); /*0x54fe34*/
        dword_ABC87C = 0; /*0x54fe3c*/
      }
    }
    byte_ABC885 = 0; /*0x54fe46*/
    dword_ABC880 = 0; /*0x54fe4d*/
  }
}
}
} // namespace gamemd
