// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x720230
namespace gamemd {
void sub_720230()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_720230()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x72023c*/
  *(double *)&MEMORY[0xB0F1F8][544] = Math::Sqrt(v0 + v0); /*0x72024e*/
}
}
} // namespace gamemd

// 0x720260
namespace gamemd {
void sub_720260()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_720260()
{
  *(double *)&MEMORY[0xB0F1F8][624] = *(double *)&MEMORY[0xB0F1F8][544] / 60.0; /*0x72026c*/
}
}
} // namespace gamemd

// 0x720280
namespace gamemd {
void sub_720280()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_720280()
{
  *(double *)&MEMORY[0xB0F1F8][600] = 1.0 / *(double *)&MEMORY[0xB0F1F8][624]; /*0x72028c*/
}
}
} // namespace gamemd

// 0x7202A0
namespace gamemd {
void sub_7202A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_7202A0()
{
  *(double *)&MEMORY[0xB0F1F8][592] = 0.0174532925199433 * 45.0; /*0x7202ac*/
}
}
} // namespace gamemd

// 0x7202C0
namespace gamemd {
void sub_7202C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_7202C0()
{
  *(double *)&MEMORY[0xB0F1F8][552] = 0.0174532925199433 * 60.0; /*0x7202cc*/
}
}
} // namespace gamemd

// 0x7202E0
namespace gamemd {
void sub_7202E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_7202E0()
{
  *(double *)&MEMORY[0xB0F1F8][512] = 0.0174532925199433 * 90.0; /*0x7202ec*/
}
}
} // namespace gamemd

// 0x720300
namespace gamemd {
long long sub_720300()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_720300()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(*(double *)&MEMORY[0xB0F1F8][512] - *(double *)&MEMORY[0xB0F1F8][552]); /*0x720312*/
  result = Math::RoundToInt(v0 * *(double *)&MEMORY[0xB0F1F8][544] * 0.5); /*0x720326*/
  *(_DWORD *)&MEMORY[0xB0F1F8][632] = result; /*0x72032b*/
  return result; /*0x720330*/
}
}
} // namespace gamemd

// 0x720340
namespace gamemd {
void sub_720340()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_720340()
{
  *(double *)&MEMORY[0xB0F1F8][560] = Math::ArcTan((double)*(int *)&MEMORY[0xB0F1F8][632] * 0.00390625); /*0x720357*/
}
}
} // namespace gamemd

// 0x720370
namespace gamemd {
void sub_720370()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_720370()
{
  *(double *)&MEMORY[0xB0F1F8][584] = Math::ArcTan( /*0x720392*/
                                        (double)(2 * *(_DWORD *)&MEMORY[0xB0F1F8][632])
                                      / *(double *)&MEMORY[0xB0F1F8][544]);
}
}
} // namespace gamemd

// 0x7203A0
namespace gamemd {
long long sub_7203A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_7203A0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * *(_DWORD *)&MEMORY[0xB0F1F8][632]) + 0.5); /*0x7203bb*/
  *(_DWORD *)&MEMORY[0xB0F1F8][620] = result; /*0x7203c0*/
  return result; /*0x7203c6*/
}
}
} // namespace gamemd

// 0x7203D0
namespace gamemd {
int sub_7203D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_7203D0()
{
  *(_WORD *)&MEMORY[0xB0F1F8][536] = 0; /*0x7203d2*/
  *(_WORD *)&MEMORY[0xB0F1F8][538] = 0; /*0x7203d8*/
  return 0; /*0x7203de*/
}
}
} // namespace gamemd

// 0x7203E0
namespace gamemd {
int sub_7203E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_7203E0()
{
  *(_DWORD *)&MEMORY[0xB0F1F8][568] = 0; /*0x7203e2*/
  *(_DWORD *)&MEMORY[0xB0F1F8][572] = 0; /*0x7203e7*/
  *(_DWORD *)&MEMORY[0xB0F1F8][576] = 0; /*0x7203ec*/
  return 0; /*0x7203f1*/
}
}
} // namespace gamemd

// 0x720400
namespace gamemd {
int sub_720400()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_720400()
{
  *(_DWORD *)&MEMORY[0xB0F1F8][616] = 0; /*0x720405*/
  *(_DWORD *)&MEMORY[0xB0F1F8][608] = 128; /*0x72040f*/
  *(_DWORD *)&MEMORY[0xB0F1F8][612] = 128; /*0x720414*/
  return 128; /*0x720419*/
}
}
} // namespace gamemd

// 0x720420
namespace gamemd {
int sub_720420()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_720420()
{
  *(_DWORD *)&MEMORY[0xB0F1F8][520] = 0; /*0x720422*/
  *(_DWORD *)&MEMORY[0xB0F1F8][524] = 0; /*0x720427*/
  *(_DWORD *)&MEMORY[0xB0F1F8][528] = 0; /*0x72042c*/
  *(_DWORD *)&MEMORY[0xB0F1F8][532] = 0; /*0x720431*/
  return 0; /*0x720436*/
}
}
} // namespace gamemd

// 0x720440
namespace gamemd {
unsigned int * sub_720440()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_720440(_DWORD *this)
{
  *(this + 160) = 0; /*0x720444*/
  *(this + 161) = 0; /*0x72044a*/
  *((_BYTE *)this + 648) = 1; /*0x720450*/
  *((_BYTE *)this + 649) = 0; /*0x720457*/
  *((_BYTE *)this + 650) = 0; /*0x72045d*/
  *(this + 163) = -1; /*0x720463*/
  *(_BYTE *)this = 0; /*0x72046d*/
  *((_BYTE *)this + 256) = 0; /*0x72046f*/
  *((_WORD *)this + 256) = 0; /*0x720475*/
  return this; /*0x72047c*/
}
}
} // namespace gamemd

// 0x720960
namespace gamemd {
unsigned int * sub_720960()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_720960(_DWORD *this)
{
  *this = -1; /*0x720965*/
  *(this + 1) = -1; /*0x720967*/
  *(this + 2) = -1; /*0x72096a*/
  *(this + 3) = 255; /*0x72096f*/
  *((_BYTE *)this + 16) = 0; /*0x720976*/
  *((_BYTE *)this + 17) = 0; /*0x720979*/
  *((_BYTE *)this + 18) = 0; /*0x72097c*/
  *(this + 6) = 0; /*0x72097f*/
  *(this + 7) = 0; /*0x720982*/
  *((_BYTE *)this + 32) = 1; /*0x720985*/
  *((_BYTE *)this + 33) = 0; /*0x720989*/
  *(this + 5) = &DynamicVectorClass<ThemeControl *>::`vftable'; /*0x72098c*/
  *(this + 10) = 10; /*0x720993*/
  *(this + 9) = 0; /*0x72099a*/
  *(this + 11) = 0; /*0x72099d*/
  return this; /*0x7209a0*/
}
}
} // namespace gamemd

// 0x721430
namespace gamemd {
void sub_721430()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_721430()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x72143c*/
  *(double *)&MEMORY[0xB0F1F8][672] = Math::Sqrt(v0 + v0); /*0x72144e*/
}
}
} // namespace gamemd

// 0x721460
namespace gamemd {
void sub_721460()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_721460()
{
  MEMORY[0xB0F508] = *(double *)&MEMORY[0xB0F1F8][672] / 60.0; /*0x72146c*/
}
}
} // namespace gamemd

// 0x721480
namespace gamemd {
void sub_721480()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_721480()
{
  *(double *)&MEMORY[0xB0F1F8][728] = 1.0 / MEMORY[0xB0F508]; /*0x72148c*/
}
}
} // namespace gamemd

// 0x7214A0
namespace gamemd {
void sub_7214A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_7214A0()
{
  *(double *)&MEMORY[0xB0F1F8][720] = 0.0174532925199433 * 45.0; /*0x7214ac*/
}
}
} // namespace gamemd

// 0x7214C0
namespace gamemd {
void sub_7214C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_7214C0()
{
  *(double *)&MEMORY[0xB0F1F8][680] = 0.0174532925199433 * 60.0; /*0x7214cc*/
}
}
} // namespace gamemd

// 0x7214E0
namespace gamemd {
void sub_7214E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_7214E0()
{
  *(double *)&MEMORY[0xB0F1F8][640] = 0.0174532925199433 * 90.0; /*0x7214ec*/
}
}
} // namespace gamemd

// 0x721500
namespace gamemd {
long long sub_721500()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_721500()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(*(double *)&MEMORY[0xB0F1F8][640] - *(double *)&MEMORY[0xB0F1F8][680]); /*0x721512*/
  result = Math::RoundToInt(v0 * *(double *)&MEMORY[0xB0F1F8][672] * 0.5); /*0x721526*/
  MEMORY[0xB0F510] = result; /*0x72152b*/
  return result; /*0x721530*/
}
}
} // namespace gamemd

// 0x721540
namespace gamemd {
void sub_721540()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_721540()
{
  *(double *)&MEMORY[0xB0F1F8][688] = Math::ArcTan((double)MEMORY[0xB0F510] * 0.00390625); /*0x721557*/
}
}
} // namespace gamemd

// 0x721570
namespace gamemd {
void sub_721570()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_721570()
{
  *(double *)&MEMORY[0xB0F1F8][712] = Math::ArcTan((double)(2 * MEMORY[0xB0F510]) / *(double *)&MEMORY[0xB0F1F8][672]); /*0x721592*/
}
}
} // namespace gamemd

// 0x7215A0
namespace gamemd {
long long sub_7215A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_7215A0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0F510]) + 0.5); /*0x7215bb*/
  MEMORY[0xB0F500] = result; /*0x7215c0*/
  return result; /*0x7215c6*/
}
}
} // namespace gamemd

// 0x7215D0
namespace gamemd {
int sub_7215D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_7215D0()
{
  *(_WORD *)&MEMORY[0xB0F1F8][664] = 0; /*0x7215d2*/
  *(_WORD *)&MEMORY[0xB0F1F8][666] = 0; /*0x7215d8*/
  return 0; /*0x7215de*/
}
}
} // namespace gamemd

// 0x7215E0
namespace gamemd {
int sub_7215E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_7215E0()
{
  *(_DWORD *)&MEMORY[0xB0F1F8][696] = 0; /*0x7215e2*/
  *(_DWORD *)&MEMORY[0xB0F1F8][700] = 0; /*0x7215e7*/
  *(_DWORD *)&MEMORY[0xB0F1F8][704] = 0; /*0x7215ec*/
  return 0; /*0x7215f1*/
}
}
} // namespace gamemd

// 0x721600
namespace gamemd {
int sub_721600()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_721600()
{
  *(_DWORD *)&MEMORY[0xB0F1F8][744] = 0; /*0x721605*/
  *(_DWORD *)&MEMORY[0xB0F1F8][736] = 128; /*0x72160f*/
  *(_DWORD *)&MEMORY[0xB0F1F8][740] = 128; /*0x721614*/
  return 128; /*0x721619*/
}
}
} // namespace gamemd

// 0x721620
namespace gamemd {
int sub_721620()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_721620()
{
  *(_DWORD *)&MEMORY[0xB0F1F8][648] = 0; /*0x721622*/
  *(_DWORD *)&MEMORY[0xB0F1F8][652] = 0; /*0x721627*/
  *(_DWORD *)&MEMORY[0xB0F1F8][656] = 0; /*0x72162c*/
  *(_DWORD *)&MEMORY[0xB0F1F8][660] = 0; /*0x721631*/
  return 0; /*0x721636*/
}
}
} // namespace gamemd

// 0x721640
namespace gamemd {
int sub_721640()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_721640()
{
  MEMORY[0xB0F4EC] = 0; /*0x721647*/
  MEMORY[0xB0F4F0] = 0; /*0x72164c*/
  MEMORY[0xB0F4F4] = 1; /*0x721651*/
  MEMORY[0xB0F4F5] = 0; /*0x721658*/
  MEMORY[0xB0F4E8] = (int)&DynamicVectorClass<TiberiumClass *>::`vftable'; /*0x72165d*/
  MEMORY[0xB0F4FC] = 10; /*0x721667*/
  MEMORY[0xB0F4F8] = 0; /*0x721671*/
  return atexit(sub_721680); /*0x72167c*/
}
}
} // namespace gamemd

// 0x721680
namespace gamemd {
void sub_721680()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_721680()
{
  MEMORY[0xB0F4E8] = (int)&VectorClass<TiberiumClass *>::`vftable'; /*0x721688*/
  if ( MEMORY[0xB0F4EC] && MEMORY[0xB0F4F5] ) /*0x72169c*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0F4EC]); /*0x72169f*/
    MEMORY[0xB0F4EC] = 0; /*0x7216a7*/
  }
  MEMORY[0xB0F4F5] = 0; /*0x7216ad*/
  MEMORY[0xB0F4F0] = 0; /*0x7216b3*/
}
}
} // namespace gamemd

// 0x7221B0
namespace gamemd {
void * sub_7221B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *sub_7221B0()
{
  void *result; // eax
  int i; // esi
  int v2; // ecx
  int v3; // edi
  int v4; // eax
  _DWORD *v5; // ecx
  int v6; // edx
  int v7; // [esp+8h] [ebp-8h]

  result = MEMORY[0xA8B230]; /*0x7221b0*/
  if ( *((_BYTE *)MEMORY[0xA8B230] + 13478) ) /*0x7221b8*/
  {
    result = (void *)MEMORY[0xB0F4F8]; /*0x7221c3*/
    for ( i = 0; i < MEMORY[0xB0F4F8]; ++i ) /*0x7221cc*/
    {
      v2 = *(_DWORD *)&MEMORY[0xB0F4EC]->__pad_0[4 * i]; /*0x7221da*/
      v3 = *(_DWORD *)(v2 + 256); /*0x7221dd*/
      v4 = *(_DWORD *)(v2 + 264); /*0x7221e3*/
      if ( v3 != -1 ) /*0x7221ec*/
      {
        if ( (int)MEMORY[0xA8ED84] - v3 >= v4 ) /*0x7221f8*/
          goto LABEL_7; /*0x7221f8*/
        v4 -= (int)MEMORY[0xA8ED84] - v3; /*0x7221fa*/
      }
      if ( !v4 ) /*0x7221fe*/
      {
LABEL_7:
        PropagateCellOccupancy(v2); /*0x722200*/
        v5 = (_DWORD *)(*(_DWORD *)&MEMORY[0xB0F4EC]->__pad_0[4 * i] + 256); /*0x722216*/
        v6 = *(_DWORD *)(*(_DWORD *)&MEMORY[0xB0F4EC]->__pad_0[4 * i] + 156); /*0x72221c*/
        *v5 = MEMORY[0xA8ED84]; /*0x722222*/
        v5[1] = v7; /*0x722224*/
        v5[2] = v6; /*0x722227*/
      }
      result = (void *)MEMORY[0xB0F4F8]; /*0x72222a*/
    }
  }
  return result; /*0x722236*/
}
}
} // namespace gamemd

// 0x722A20
namespace gamemd {
void sub_722A20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_722A20(int this)
{
  _DWORD *v2; // eax
  int i; // ecx
  void **v4; // edi

  v2 = *(_DWORD **)(this + 244); /*0x722a26*/
  if ( v2 ) /*0x722a2e*/
  {
    for ( i = 0; i <= *v2; *(_DWORD *)(v2[2] + 4 * i - 4) = 0 ) /*0x722a36*/
      ++i; /*0x722a3b*/
    *v2 = 0; /*0x722a47*/
    v4 = *(void ***)(this + 244); /*0x722a49*/
    if ( v4 ) /*0x722a51*/
    {
      __3_YAXPAX_Z(v4[2]); /*0x722a57*/
      __3_YAXPAX_Z(v4); /*0x722a5d*/
    }
    *(_DWORD *)(this + 244) = 0; /*0x722a65*/
  }
  if ( *(_DWORD *)(this + 252) ) /*0x722a6c*/
  {
    __3_YAXPAX_Z(*(void **)(this + 252)); /*0x722a77*/
    *(_DWORD *)(this + 252) = 0; /*0x722a7f*/
  }
  if ( *(_DWORD *)(this + 248) ) /*0x722a85*/
  {
    __3_YAXPAX_Z(*(void **)(this + 248)); /*0x722a90*/
    *(_DWORD *)(this + 248) = 0; /*0x722a98*/
  }
  *(_DWORD *)(this + 240) = 0; /*0x722a9e*/
}
}
} // namespace gamemd

// 0x722C40
namespace gamemd {
void * sub_722C40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *sub_722C40()
{
  void *result; // eax
  int i; // esi
  int v2; // ecx
  int v3; // edi
  int v4; // eax
  double v5; // st7
  BuildingClass *v6; // ebx
  wchar_t *v7; // edi
  wchar_t *v8; // eax
  wchar_t **v9; // ecx
  wchar_t *v10; // [esp+8h] [ebp-8h]

  result = MEMORY[0xA8B230]; /*0x722c40*/
  if ( *((_BYTE *)MEMORY[0xA8B230] + 13478) ) /*0x722c48*/
  {
    result = (void *)MEMORY[0xB0F4F8]; /*0x722c57*/
    for ( i = 0; i < MEMORY[0xB0F4F8]; ++i ) /*0x722c60*/
    {
      v2 = *(_DWORD *)&MEMORY[0xB0F4EC]->__pad_0[4 * i]; /*0x722c73*/
      v3 = *(_DWORD *)(v2 + 284); /*0x722c76*/
      v4 = *(_DWORD *)(v2 + 292); /*0x722c7c*/
      if ( v3 != -1 ) /*0x722c85*/
      {
        if ( (int)MEMORY[0xA8ED84] - v3 >= v4 ) /*0x722c91*/
          goto LABEL_7; /*0x722c91*/
        v4 -= (int)MEMORY[0xA8ED84] - v3; /*0x722c93*/
      }
      if ( !v4 ) /*0x722c97*/
      {
LABEL_7:
        RebuildBuildingOccupancy(v2); /*0x722c99*/
        if ( (*(_BYTE *)MEMORY[0xA8B230] & 0x40) != 0 ) /*0x722ca7*/
          v5 = 0.3; /*0x722ca9*/
        else
          v5 = 1.0; /*0x722cb1*/
        v6 = MEMORY[0xB0F4EC]; /*0x722cb7*/
        v7 = MEMORY[0xA8ED84]; /*0x722cbd*/
        v8 = (wchar_t *)Math::RoundToInt(v5); /*0x722cce*/
        v9 = (wchar_t **)(*(_DWORD *)&v6->__pad_0[4 * i] + 284); /*0x722cd6*/
        *v9 = v7; /*0x722cde*/
        v9[1] = v10; /*0x722ce0*/
        v9[2] = v8; /*0x722ce3*/
      }
      result = (void *)MEMORY[0xB0F4F8]; /*0x722ce6*/
    }
  }
  return result; /*0x722cf7*/
}
}
} // namespace gamemd

// 0x723510
namespace gamemd {
void sub_723510()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_723510(int this)
{
  _DWORD *v2; // eax
  int i; // ecx
  void **v4; // edi

  v2 = *(_DWORD **)(this + 272); /*0x723516*/
  if ( v2 ) /*0x72351e*/
  {
    for ( i = 0; i <= *v2; *(_DWORD *)(v2[2] + 4 * i - 4) = 0 ) /*0x723526*/
      ++i; /*0x72352b*/
    *v2 = 0; /*0x723537*/
    v4 = *(void ***)(this + 272); /*0x723539*/
    if ( v4 ) /*0x723541*/
    {
      __3_YAXPAX_Z(v4[2]); /*0x723547*/
      __3_YAXPAX_Z(v4); /*0x72354d*/
    }
    *(_DWORD *)(this + 272) = 0; /*0x723555*/
  }
  if ( *(_DWORD *)(this + 280) ) /*0x72355c*/
  {
    __3_YAXPAX_Z(*(void **)(this + 280)); /*0x723567*/
    *(_DWORD *)(this + 280) = 0; /*0x72356f*/
  }
  if ( *(_DWORD *)(this + 276) ) /*0x723575*/
  {
    __3_YAXPAX_Z(*(void **)(this + 276)); /*0x723580*/
    *(_DWORD *)(this + 276) = 0; /*0x723588*/
  }
  *(_DWORD *)(this + 268) = 0; /*0x72358e*/
}
}
} // namespace gamemd

// 0x723A90
namespace gamemd {
void sub_723A90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_723A90()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x723a9c*/
  MEMORY[0xB0F538] = Math::Sqrt(v0 + v0); /*0x723aae*/
}
}
} // namespace gamemd

// 0x723AC0
namespace gamemd {
void sub_723AC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_723AC0()
{
  MEMORY[0xB0F588] = MEMORY[0xB0F538] / 60.0; /*0x723acc*/
}
}
} // namespace gamemd

// 0x723AE0
namespace gamemd {
void sub_723AE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_723AE0()
{
  MEMORY[0xB0F570] = 1.0 / MEMORY[0xB0F588]; /*0x723aec*/
}
}
} // namespace gamemd

// 0x723B00
namespace gamemd {
void sub_723B00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_723B00()
{
  MEMORY[0xB0F568] = 0.0174532925199433 * 45.0; /*0x723b0c*/
}
}
} // namespace gamemd

// 0x723B20
namespace gamemd {
void sub_723B20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_723B20()
{
  MEMORY[0xB0F540] = 0.0174532925199433 * 60.0; /*0x723b2c*/
}
}
} // namespace gamemd

// 0x723B40
namespace gamemd {
void sub_723B40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_723B40()
{
  MEMORY[0xB0F518] = 0.0174532925199433 * 90.0; /*0x723b4c*/
}
}
} // namespace gamemd

// 0x723B60
namespace gamemd {
long long sub_723B60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_723B60()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0F518] - MEMORY[0xB0F540]); /*0x723b72*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0F538] * 0.5); /*0x723b86*/
  MEMORY[0xB0F590] = result; /*0x723b8b*/
  return result; /*0x723b90*/
}
}
} // namespace gamemd

// 0x723BA0
namespace gamemd {
void sub_723BA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_723BA0()
{
  MEMORY[0xB0F548] = Math::ArcTan((double)MEMORY[0xB0F590] * 0.00390625); /*0x723bb7*/
}
}
} // namespace gamemd

// 0x723BD0
namespace gamemd {
void sub_723BD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_723BD0()
{
  MEMORY[0xB0F560] = Math::ArcTan((double)(2 * MEMORY[0xB0F590]) / MEMORY[0xB0F538]); /*0x723bf2*/
}
}
} // namespace gamemd

// 0x723C00
namespace gamemd {
long long sub_723C00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_723C00()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0F590]) + 0.5); /*0x723c1b*/
  MEMORY[0xB0F584] = result; /*0x723c20*/
  return result; /*0x723c26*/
}
}
} // namespace gamemd

// 0x723C30
namespace gamemd {
int sub_723C30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_723C30()
{
  MEMORY[0xB0F530] = 0; /*0x723c32*/
  MEMORY[0xB0F532] = 0; /*0x723c38*/
  return 0; /*0x723c3e*/
}
}
} // namespace gamemd

// 0x723C40
namespace gamemd {
int sub_723C40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_723C40()
{
  MEMORY[0xB0F550] = 0; /*0x723c42*/
  MEMORY[0xB0F554] = 0; /*0x723c47*/
  MEMORY[0xB0F558] = 0; /*0x723c4c*/
  return 0; /*0x723c51*/
}
}
} // namespace gamemd

// 0x723C60
namespace gamemd {
int sub_723C60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_723C60()
{
  MEMORY[0xB0F580] = 0; /*0x723c65*/
  MEMORY[0xB0F578] = 128; /*0x723c6f*/
  MEMORY[0xB0F57C] = 128; /*0x723c74*/
  return 128; /*0x723c79*/
}
}
} // namespace gamemd

// 0x723C80
namespace gamemd {
int sub_723C80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_723C80()
{
  MEMORY[0xB0F520] = 0; /*0x723c82*/
  MEMORY[0xB0F524] = 0; /*0x723c87*/
  MEMORY[0xB0F528] = 0; /*0x723c8c*/
  MEMORY[0xB0F52C] = 0; /*0x723c91*/
  return 0; /*0x723c96*/
}
}
} // namespace gamemd

// 0x723E40
namespace gamemd {
int sub_723E40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_723E40()
{
  MEMORY[0xB0F598] = 0; /*0x723e42*/
  MEMORY[0xB0F59C] = 0; /*0x723e47*/
  MEMORY[0xB0F5A0] = 0; /*0x723e4c*/
  MEMORY[0xB0F5A4] = 0; /*0x723e51*/
  return 0; /*0x723e56*/
}
}
} // namespace gamemd

// 0x723FE0
namespace gamemd {
int sub_723FE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_723FE0()
{
  MEMORY[0xB0F5A8] = 0; /*0x723fe2*/
  MEMORY[0xB0F5AC] = 0; /*0x723fe7*/
  MEMORY[0xB0F5B0] = 0; /*0x723fec*/
  MEMORY[0xB0F5B4] = 0; /*0x723ff1*/
  return 0; /*0x723ff6*/
}
}
} // namespace gamemd

// 0x724550
namespace gamemd {
int sub_724550()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_724550(_DWORD *this)
{
  return *(this + 140); /*0x724556*/
}
}
} // namespace gamemd

// 0x724560
namespace gamemd {
int sub_724560(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_724560(_DWORD *this, int a2)
{
  *(this + 140) = a2; /*0x724564*/
  return a2; /*0x72456a*/
}
}
} // namespace gamemd

// 0x724570
namespace gamemd {
int sub_724570()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_724570(_DWORD *this)
{
  return *(this + 145); /*0x724576*/
}
}
} // namespace gamemd

// 0x724A30
namespace gamemd {
int sub_724A30(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_724A30(int *this, int *a2)
{
  int v2; // ebp
  int v3; // ebx
  int v4; // esi
  int v5; // edi
  int *v6; // eax
  int v7; // edx
  int v8; // ecx
  int v10; // [esp+10h] [ebp-4h]

  v2 = *(this + 145); /*0x724a33*/
  v3 = 0; /*0x724a39*/
  if ( v2 <= 0 ) /*0x724a3f*/
    return 0; /*0x724a86*/
  v10 = *(this + 142); /*0x724a4b*/
  v4 = v10; /*0x724a4f*/
  v5 = *a2; /*0x724a51*/
  while ( 1 ) /*0x724a55*/
  {
    v6 = (int *)(*(_DWORD *)v4 + 4); /*0x724a55*/
    if ( v5 >= *v6 && v5 <= *v6 + *(_DWORD *)(*(_DWORD *)v4 + 12) ) /*0x724a65*/
    {
      v7 = *(_DWORD *)(*(_DWORD *)v4 + 8); /*0x724a6b*/
      v8 = a2[1]; /*0x724a6e*/
      if ( v8 >= v7 && v8 <= v7 + *(_DWORD *)(*(_DWORD *)v4 + 16) ) /*0x724a7c*/
        break; /*0x724a7c*/
    }
    ++v3; /*0x724a7e*/
    v4 += 4; /*0x724a7f*/
    if ( v3 >= v2 ) /*0x724a84*/
      return 0; /*0x724a84*/
  }
  return *(_DWORD *)(v10 + 4 * v3); /*0x724a86*/
}
}
} // namespace gamemd

// 0x724F90
namespace gamemd {
Iostream_init * __0Iostream_init_QAE_XZ_6()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
Iostream_init *__thiscall __0Iostream_init_QAE_XZ_6(Iostream_init *this)
{
  return this; /*0x724f92*/
}
}
} // namespace gamemd

// 0x725040
namespace gamemd {
int CompareFunc2Int(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl CompareFunc2Int(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x725050*/
  else
    return *a1 >= *a2 ? 1 : -1;
}
}
} // namespace gamemd

// 0x7250C0
namespace gamemd {
void sub_7250C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_7250C0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x7250cc*/
  MEMORY[0xB0F638] = Math::Sqrt(v0 + v0); /*0x7250de*/
}
}
} // namespace gamemd

// 0x7250F0
namespace gamemd {
void sub_7250F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_7250F0()
{
  MEMORY[0xB0F748] = MEMORY[0xB0F638] / 60.0; /*0x7250fc*/
}
}
} // namespace gamemd

// 0x725110
namespace gamemd {
void sub_725110()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_725110()
{
  MEMORY[0xB0F6E8] = 1.0 / MEMORY[0xB0F748]; /*0x72511c*/
}
}
} // namespace gamemd

// 0x725130
namespace gamemd {
void sub_725130()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_725130()
{
  MEMORY[0xB0F6E0] = 0.0174532925199433 * 45.0; /*0x72513c*/
}
}
} // namespace gamemd

// 0x725150
namespace gamemd {
void sub_725150()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_725150()
{
  MEMORY[0xB0F688] = 0.0174532925199433 * 60.0; /*0x72515c*/
}
}
} // namespace gamemd

// 0x725170
namespace gamemd {
void sub_725170()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_725170()
{
  MEMORY[0xB0F5D0] = 0.0174532925199433 * 90.0; /*0x72517c*/
}
}
} // namespace gamemd

// 0x725190
namespace gamemd {
long long sub_725190()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_725190()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0F5D0] - MEMORY[0xB0F688]); /*0x7251a2*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0F638] * 0.5); /*0x7251b6*/
  MEMORY[0xB0F750] = result; /*0x7251bb*/
  return result; /*0x7251c0*/
}
}
} // namespace gamemd

// 0x7251D0
namespace gamemd {
void sub_7251D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_7251D0()
{
  MEMORY[0xB0F690] = Math::ArcTan((double)MEMORY[0xB0F750] * 0.00390625); /*0x7251e7*/
}
}
} // namespace gamemd

// 0x725200
namespace gamemd {
void sub_725200()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_725200()
{
  MEMORY[0xB0F6C0] = Math::ArcTan((double)(2 * MEMORY[0xB0F750]) / MEMORY[0xB0F638]); /*0x725222*/
}
}
} // namespace gamemd

// 0x725230
namespace gamemd {
long long sub_725230()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_725230()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0F750]) + 0.5); /*0x72524b*/
  MEMORY[0xB0F744] = result; /*0x725250*/
  return result; /*0x725256*/
}
}
} // namespace gamemd

// 0x725260
namespace gamemd {
int sub_725260()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_725260()
{
  MEMORY[0xB0F630] = 0; /*0x725262*/
  MEMORY[0xB0F632] = 0; /*0x725268*/
  return 0; /*0x72526e*/
}
}
} // namespace gamemd

// 0x725270
namespace gamemd {
int sub_725270()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_725270()
{
  MEMORY[0xB0F6B0] = 0; /*0x725272*/
  MEMORY[0xB0F6B4] = 0; /*0x725277*/
  MEMORY[0xB0F6B8] = 0; /*0x72527c*/
  return 0; /*0x725281*/
}
}
} // namespace gamemd

// 0x725290
namespace gamemd {
int sub_725290()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_725290()
{
  MEMORY[0xB0F740] = 0; /*0x725295*/
  MEMORY[0xB0F738] = 128; /*0x72529f*/
  MEMORY[0xB0F73C] = 128; /*0x7252a4*/
  return 128; /*0x7252a9*/
}
}
} // namespace gamemd

// 0x7252B0
namespace gamemd {
int sub_7252B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_7252B0()
{
  MEMORY[0xB0F608] = 0; /*0x7252b2*/
  MEMORY[0xB0F60C] = 0; /*0x7252b7*/
  MEMORY[0xB0F610] = 0; /*0x7252bc*/
  MEMORY[0xB0F614] = 0; /*0x7252c1*/
  return 0; /*0x7252c6*/
}
}
} // namespace gamemd

// 0x7252D0
namespace gamemd {
int sub_7252D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_7252D0()
{
  MEMORY[0xB0F724] = 0; /*0x7252d7*/
  MEMORY[0xB0F728] = 0; /*0x7252dc*/
  MEMORY[0xB0F72C] = 1; /*0x7252e1*/
  MEMORY[0xB0F72D] = 0; /*0x7252e8*/
  MEMORY[0xB0F720] = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x7252ed*/
  MEMORY[0xB0F734] = 10; /*0x7252f7*/
  MEMORY[0xB0F730] = 0; /*0x725301*/
  return atexit(sub_725310); /*0x72530c*/
}
}
} // namespace gamemd

// 0x725310
namespace gamemd {
void sub_725310()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_725310()
{
  MEMORY[0xB0F720] = (int)&VectorClass<AbstractClass *>::`vftable'; /*0x725318*/
  if ( MEMORY[0xB0F724] && MEMORY[0xB0F72D] ) /*0x72532c*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0F724]); /*0x72532f*/
    MEMORY[0xB0F724] = 0; /*0x725337*/
  }
  MEMORY[0xB0F72D] = 0; /*0x72533d*/
  MEMORY[0xB0F728] = 0; /*0x725343*/
}
}
} // namespace gamemd

// 0x725350
namespace gamemd {
int sub_725350()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_725350()
{
  MEMORY[0xB0F674] = 0; /*0x725357*/
  MEMORY[0xB0F678] = 0; /*0x72535c*/
  MEMORY[0xB0F67C] = 1; /*0x725361*/
  MEMORY[0xB0F67D] = 0; /*0x725368*/
  MEMORY[0xB0F670] = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x72536d*/
  MEMORY[0xB0F684] = 10; /*0x725377*/
  MEMORY[0xB0F680] = 0; /*0x725381*/
  return atexit(sub_725390); /*0x72538c*/
}
}
} // namespace gamemd

// 0x725390
namespace gamemd {
void sub_725390()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_725390()
{
  MEMORY[0xB0F670] = (int)&VectorClass<AbstractClass *>::`vftable'; /*0x725398*/
  if ( MEMORY[0xB0F674] && MEMORY[0xB0F67D] ) /*0x7253ac*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0F674]); /*0x7253af*/
    MEMORY[0xB0F674] = 0; /*0x7253b7*/
  }
  MEMORY[0xB0F67D] = 0; /*0x7253bd*/
  MEMORY[0xB0F678] = 0; /*0x7253c3*/
}
}
} // namespace gamemd

// 0x7253D0
namespace gamemd {
int sub_7253D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_7253D0()
{
  MEMORY[0xB0F61C] = 0; /*0x7253d7*/
  MEMORY[0xB0F620] = 0; /*0x7253dc*/
  MEMORY[0xB0F624] = 1; /*0x7253e1*/
  MEMORY[0xB0F625] = 0; /*0x7253e8*/
  MEMORY[0xB0F618] = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x7253ed*/
  MEMORY[0xB0F62C] = 10; /*0x7253f7*/
  MEMORY[0xB0F628] = 0; /*0x725401*/
  return atexit(sub_725410); /*0x72540c*/
}
}
} // namespace gamemd

// 0x725410
namespace gamemd {
void sub_725410()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_725410()
{
  MEMORY[0xB0F618] = (int)&VectorClass<AbstractClass *>::`vftable'; /*0x725418*/
  if ( MEMORY[0xB0F61C] && MEMORY[0xB0F625] ) /*0x72542c*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0F61C]); /*0x72542f*/
    MEMORY[0xB0F61C] = 0; /*0x725437*/
  }
  MEMORY[0xB0F625] = 0; /*0x72543d*/
  MEMORY[0xB0F620] = 0; /*0x725443*/
}
}
} // namespace gamemd

// 0x725450
namespace gamemd {
int sub_725450()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_725450()
{
  MEMORY[0xB0F70C] = 0; /*0x725457*/
  MEMORY[0xB0F710] = 0; /*0x72545c*/
  MEMORY[0xB0F714] = 1; /*0x725461*/
  MEMORY[0xB0F715] = 0; /*0x725468*/
  MEMORY[0xB0F708] = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x72546d*/
  MEMORY[0xB0F71C] = 10; /*0x725477*/
  MEMORY[0xB0F718] = 0; /*0x725481*/
  return atexit(sub_725490); /*0x72548c*/
}
}
} // namespace gamemd

// 0x725490
namespace gamemd {
void sub_725490()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_725490()
{
  MEMORY[0xB0F708] = (int)&VectorClass<AbstractClass *>::`vftable'; /*0x725498*/
  if ( MEMORY[0xB0F70C] && MEMORY[0xB0F715] ) /*0x7254ac*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0F70C]); /*0x7254af*/
    MEMORY[0xB0F70C] = 0; /*0x7254b7*/
  }
  MEMORY[0xB0F715] = 0; /*0x7254bd*/
  MEMORY[0xB0F710] = 0; /*0x7254c3*/
}
}
} // namespace gamemd

// 0x7254D0
namespace gamemd {
int sub_7254D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_7254D0()
{
  MEMORY[0xB0F5BC] = 0; /*0x7254d7*/
  MEMORY[0xB0F5C0] = 0; /*0x7254dc*/
  MEMORY[0xB0F5C4] = 1; /*0x7254e1*/
  MEMORY[0xB0F5C5] = 0; /*0x7254e8*/
  MEMORY[0xB0F5B8] = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x7254ed*/
  MEMORY[0xB0F5CC] = 10; /*0x7254f7*/
  MEMORY[0xB0F5C8] = 0; /*0x725501*/
  return atexit(sub_725510); /*0x72550c*/
}
}
} // namespace gamemd

// 0x725510
namespace gamemd {
void sub_725510()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_725510()
{
  MEMORY[0xB0F5B8] = (int)&VectorClass<AbstractClass *>::`vftable'; /*0x725518*/
  if ( MEMORY[0xB0F5BC] && MEMORY[0xB0F5C5] ) /*0x72552c*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0F5BC]); /*0x72552f*/
    MEMORY[0xB0F5BC] = 0; /*0x725537*/
  }
  MEMORY[0xB0F5C5] = 0; /*0x72553d*/
  MEMORY[0xB0F5C0] = 0; /*0x725543*/
}
}
} // namespace gamemd

// 0x725550
namespace gamemd {
int sub_725550()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_725550()
{
  MEMORY[0xB0F644] = 0; /*0x725557*/
  MEMORY[0xB0F648] = 0; /*0x72555c*/
  MEMORY[0xB0F64C] = 1; /*0x725561*/
  MEMORY[0xB0F64D] = 0; /*0x725568*/
  MEMORY[0xB0F640] = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x72556d*/
  MEMORY[0xB0F654] = 10; /*0x725577*/
  MEMORY[0xB0F650] = 0; /*0x725581*/
  return atexit(sub_725590); /*0x72558c*/
}
}
} // namespace gamemd

// 0x725590
namespace gamemd {
void sub_725590()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_725590()
{
  MEMORY[0xB0F640] = (int)&VectorClass<AbstractClass *>::`vftable'; /*0x725598*/
  if ( MEMORY[0xB0F644] && MEMORY[0xB0F64D] ) /*0x7255ac*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0F644]); /*0x7255af*/
    MEMORY[0xB0F644] = 0; /*0x7255b7*/
  }
  MEMORY[0xB0F64D] = 0; /*0x7255bd*/
  MEMORY[0xB0F648] = 0; /*0x7255c3*/
}
}
} // namespace gamemd

// 0x7255D0
namespace gamemd {
int sub_7255D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_7255D0()
{
  MEMORY[0xB0F65C] = 0; /*0x7255d7*/
  MEMORY[0xB0F660] = 0; /*0x7255dc*/
  MEMORY[0xB0F664] = 1; /*0x7255e1*/
  MEMORY[0xB0F665] = 0; /*0x7255e8*/
  MEMORY[0xB0F658] = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x7255ed*/
  MEMORY[0xB0F66C] = 10; /*0x7255f7*/
  MEMORY[0xB0F668] = 0; /*0x725601*/
  return atexit(sub_725610); /*0x72560c*/
}
}
} // namespace gamemd

// 0x725610
namespace gamemd {
void sub_725610()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_725610()
{
  MEMORY[0xB0F658] = (int)&VectorClass<AbstractClass *>::`vftable'; /*0x725618*/
  if ( MEMORY[0xB0F65C] && MEMORY[0xB0F665] ) /*0x72562c*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0F65C]); /*0x72562f*/
    MEMORY[0xB0F65C] = 0; /*0x725637*/
  }
  MEMORY[0xB0F665] = 0; /*0x72563d*/
  MEMORY[0xB0F660] = 0; /*0x725643*/
}
}
} // namespace gamemd

// 0x725650
namespace gamemd {
int sub_725650()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_725650()
{
  MEMORY[0xB0F5F4] = 0; /*0x725657*/
  MEMORY[0xB0F5F8] = 0; /*0x72565c*/
  MEMORY[0xB0F5FC] = 1; /*0x725661*/
  MEMORY[0xB0F5FD] = 0; /*0x725668*/
  MEMORY[0xB0F5F0] = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x72566d*/
  MEMORY[0xB0F604] = 10; /*0x725677*/
  MEMORY[0xB0F600] = 0; /*0x725681*/
  return atexit(sub_725690); /*0x72568c*/
}
}
} // namespace gamemd

// 0x725690
namespace gamemd {
void sub_725690()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_725690()
{
  MEMORY[0xB0F5F0] = (int)&VectorClass<AbstractClass *>::`vftable'; /*0x725698*/
  if ( MEMORY[0xB0F5F4] && MEMORY[0xB0F5FD] ) /*0x7256ac*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0F5F4]); /*0x7256af*/
    MEMORY[0xB0F5F4] = 0; /*0x7256b7*/
  }
  MEMORY[0xB0F5FD] = 0; /*0x7256bd*/
  MEMORY[0xB0F5F8] = 0; /*0x7256c3*/
}
}
} // namespace gamemd

// 0x7256D0
namespace gamemd {
int sub_7256D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_7256D0()
{
  MEMORY[0xB0F5DC] = 0; /*0x7256d7*/
  MEMORY[0xB0F5E0] = 0; /*0x7256dc*/
  MEMORY[0xB0F5E4] = 1; /*0x7256e1*/
  MEMORY[0xB0F5E5] = 0; /*0x7256e8*/
  MEMORY[0xB0F5D8] = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x7256ed*/
  MEMORY[0xB0F5EC] = 10; /*0x7256f7*/
  MEMORY[0xB0F5E8] = 0; /*0x725701*/
  return atexit(sub_725710); /*0x72570c*/
}
}
} // namespace gamemd

// 0x725710
namespace gamemd {
void sub_725710()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_725710()
{
  MEMORY[0xB0F5D8] = (int)&VectorClass<AbstractClass *>::`vftable'; /*0x725718*/
  if ( MEMORY[0xB0F5DC] && MEMORY[0xB0F5E5] ) /*0x72572c*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0F5DC]); /*0x72572f*/
    MEMORY[0xB0F5DC] = 0; /*0x725737*/
  }
  MEMORY[0xB0F5E5] = 0; /*0x72573d*/
  MEMORY[0xB0F5E0] = 0; /*0x725743*/
}
}
} // namespace gamemd

// 0x725750
namespace gamemd {
int sub_725750()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_725750()
{
  MEMORY[0xB0F6CC] = 0; /*0x725757*/
  MEMORY[0xB0F6D0] = 0; /*0x72575c*/
  MEMORY[0xB0F6D4] = 1; /*0x725761*/
  MEMORY[0xB0F6D5] = 0; /*0x725768*/
  MEMORY[0xB0F6C8] = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x72576d*/
  MEMORY[0xB0F6DC] = 10; /*0x725777*/
  MEMORY[0xB0F6D8] = 0; /*0x725781*/
  return atexit(sub_725790); /*0x72578c*/
}
}
} // namespace gamemd

// 0x725790
namespace gamemd {
void sub_725790()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_725790()
{
  MEMORY[0xB0F6C8] = (int)&VectorClass<AbstractClass *>::`vftable'; /*0x725798*/
  if ( MEMORY[0xB0F6CC] && MEMORY[0xB0F6D5] ) /*0x7257ac*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0F6CC]); /*0x7257af*/
    MEMORY[0xB0F6CC] = 0; /*0x7257b7*/
  }
  MEMORY[0xB0F6D5] = 0; /*0x7257bd*/
  MEMORY[0xB0F6D0] = 0; /*0x7257c3*/
}
}
} // namespace gamemd

// 0x7257D0
namespace gamemd {
int sub_7257D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_7257D0()
{
  MEMORY[0xB0F6F4] = 0; /*0x7257d7*/
  MEMORY[0xB0F6F8] = 0; /*0x7257dc*/
  MEMORY[0xB0F6FC] = 1; /*0x7257e1*/
  MEMORY[0xB0F6FD] = 0; /*0x7257e8*/
  MEMORY[0xB0F6F0] = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x7257ed*/
  MEMORY[0xB0F704] = 10; /*0x7257f7*/
  MEMORY[0xB0F700] = 0; /*0x725801*/
  return atexit(sub_725810); /*0x72580c*/
}
}
} // namespace gamemd

// 0x725810
namespace gamemd {
void sub_725810()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_725810()
{
  MEMORY[0xB0F6F0] = (int)&VectorClass<AbstractClass *>::`vftable'; /*0x725818*/
  if ( MEMORY[0xB0F6F4] && MEMORY[0xB0F6FD] ) /*0x72582c*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0F6F4]); /*0x72582f*/
    MEMORY[0xB0F6F4] = 0; /*0x725837*/
  }
  MEMORY[0xB0F6FD] = 0; /*0x72583d*/
  MEMORY[0xB0F6F8] = 0; /*0x725843*/
}
}
} // namespace gamemd

// 0x725850
namespace gamemd {
int sub_725850()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_725850()
{
  MEMORY[0xB0F69C] = 0; /*0x725857*/
  MEMORY[0xB0F6A0] = 0; /*0x72585c*/
  MEMORY[0xB0F6A4] = 1; /*0x725861*/
  MEMORY[0xB0F6A5] = 0; /*0x725868*/
  MEMORY[0xB0F698] = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x72586d*/
  MEMORY[0xB0F6AC] = 10; /*0x725877*/
  MEMORY[0xB0F6A8] = 0; /*0x725881*/
  return atexit(sub_725890); /*0x72588c*/
}
}
} // namespace gamemd

// 0x725890
namespace gamemd {
void sub_725890()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_725890()
{
  MEMORY[0xB0F698] = (int)&VectorClass<AbstractClass *>::`vftable'; /*0x725898*/
  if ( MEMORY[0xB0F69C] && MEMORY[0xB0F6A5] ) /*0x7258ac*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0F69C]); /*0x7258af*/
    MEMORY[0xB0F69C] = 0; /*0x7258b7*/
  }
  MEMORY[0xB0F6A5] = 0; /*0x7258bd*/
  MEMORY[0xB0F6A0] = 0; /*0x7258c3*/
}
}
} // namespace gamemd

// 0x725C70
namespace gamemd {
int sub_725C70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_725C70()
{
  int result; // eax
  int v1; // esi
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  _BYTE *v7; // [esp+8h] [ebp-4h] BYREF

  result = MEMORY[0xB0F6A8]; /*0x725c71*/
  v1 = 0; /*0x725c77*/
  while ( v1 < MEMORY[0xB0F6A8] ) /*0x725c7b*/
  {
    v7 = (_BYTE *)*((_DWORD *)MEMORY[0xB0F69C] + v1); /*0x725c89*/
    result = (*(int (**)(void))(*(_DWORD *)v7 + 68))(); /*0x725c8f*/
    if ( (_BYTE)result ) /*0x725c94*/
    {
      while ( 1 ) /*0x725caa*/
      {
        v2 = (*(int (__thiscall **)(int *, _BYTE **))(MEMORY[0xB0F698] + 16))(&MEMORY[0xB0F698], &v7); /*0x725caa*/
        if ( v2 == -1 || v2 >= MEMORY[0xB0F6A8] ) /*0x725cba*/
          break; /*0x725cba*/
        if ( v2 < --MEMORY[0xB0F6A8] ) /*0x725cc5*/
        {
          do /*0x725cdd*/
          {
            ++v2; /*0x725ccd*/
            *((_DWORD *)MEMORY[0xB0F69C] + v2 - 1) = *((_DWORD *)MEMORY[0xB0F69C] + v2); /*0x725cd1*/
          }
          while ( v2 < MEMORY[0xB0F6A8] ); /*0x725cdd*/
        }
      }
      result = (*(int (__stdcall **)(_BYTE *))(*(_DWORD *)v7 + 8))(v7); /*0x725ce8*/
      if ( result ) /*0x725ced*/
      {
        v3 = __RTtypeid(v7); /*0x725cf8*/
        if ( __8type_info_QBEHABV0__Z(v3) /*0x725d61*/
          || (v4 = __RTtypeid(v7), __8type_info_QBEHABV0__Z(v4))
          || (v5 = __RTtypeid(v7), __8type_info_QBEHABV0__Z(v5))
          || (v6 = __RTtypeid(v7), (result = __8type_info_QBEHABV0__Z(v6)) != 0) )
        {
          result = (int)v7; /*0x725d63*/
          v7[144] = 1; /*0x725d67*/
        }
        if ( v7 ) /*0x725d74*/
          result = (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)v7 + 32))(v7, 1); /*0x725d7a*/
      }
    }
    else
    {
      ++v1; /*0x725d7f*/
    }
  }
  return result; /*0x725d8c*/
}
}
} // namespace gamemd

// 0x725D90
namespace gamemd {
void sub_725D90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_725D90()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x725d9c*/
  MEMORY[0xB0F778] = Math::Sqrt(v0 + v0); /*0x725dae*/
}
}
} // namespace gamemd

// 0x725DC0
namespace gamemd {
void sub_725DC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_725DC0()
{
  MEMORY[0xB0F7C8] = MEMORY[0xB0F778] / 60.0; /*0x725dcc*/
}
}
} // namespace gamemd

// 0x725DE0
namespace gamemd {
void sub_725DE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_725DE0()
{
  MEMORY[0xB0F7B0] = 1.0 / MEMORY[0xB0F7C8]; /*0x725dec*/
}
}
} // namespace gamemd

// 0x725E00
namespace gamemd {
void sub_725E00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_725E00()
{
  MEMORY[0xB0F7A8] = 0.0174532925199433 * 45.0; /*0x725e0c*/
}
}
} // namespace gamemd

// 0x725E20
namespace gamemd {
void sub_725E20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_725E20()
{
  MEMORY[0xB0F780] = 0.0174532925199433 * 60.0; /*0x725e2c*/
}
}
} // namespace gamemd

// 0x725E40
namespace gamemd {
void sub_725E40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_725E40()
{
  MEMORY[0xB0F758] = 0.0174532925199433 * 90.0; /*0x725e4c*/
}
}
} // namespace gamemd

// 0x725E60
namespace gamemd {
long long sub_725E60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_725E60()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0F758] - MEMORY[0xB0F780]); /*0x725e72*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0F778] * 0.5); /*0x725e86*/
  MEMORY[0xB0F7D0] = result; /*0x725e8b*/
  return result; /*0x725e90*/
}
}
} // namespace gamemd

// 0x725EA0
namespace gamemd {
void sub_725EA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_725EA0()
{
  MEMORY[0xB0F788] = Math::ArcTan((double)MEMORY[0xB0F7D0] * 0.00390625); /*0x725eb7*/
}
}
} // namespace gamemd

// 0x725ED0
namespace gamemd {
void sub_725ED0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_725ED0()
{
  MEMORY[0xB0F7A0] = Math::ArcTan((double)(2 * MEMORY[0xB0F7D0]) / MEMORY[0xB0F778]); /*0x725ef2*/
}
}
} // namespace gamemd

// 0x725F00
namespace gamemd {
long long sub_725F00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_725F00()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0F7D0]) + 0.5); /*0x725f1b*/
  MEMORY[0xB0F7C4] = result; /*0x725f20*/
  return result; /*0x725f26*/
}
}
} // namespace gamemd

// 0x725F30
namespace gamemd {
int sub_725F30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_725F30()
{
  MEMORY[0xB0F770] = 0; /*0x725f32*/
  MEMORY[0xB0F772] = 0; /*0x725f38*/
  return 0; /*0x725f3e*/
}
}
} // namespace gamemd

// 0x725F40
namespace gamemd {
int sub_725F40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_725F40()
{
  MEMORY[0xB0F790] = 0; /*0x725f42*/
  MEMORY[0xB0F794] = 0; /*0x725f47*/
  MEMORY[0xB0F798] = 0; /*0x725f4c*/
  return 0; /*0x725f51*/
}
}
} // namespace gamemd

// 0x725F60
namespace gamemd {
int sub_725F60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_725F60()
{
  MEMORY[0xB0F7C0] = 0; /*0x725f65*/
  MEMORY[0xB0F7B8] = 128; /*0x725f6f*/
  MEMORY[0xB0F7BC] = 128; /*0x725f74*/
  return 128; /*0x725f79*/
}
}
} // namespace gamemd

// 0x725F80
namespace gamemd {
int sub_725F80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_725F80()
{
  MEMORY[0xB0F760] = 0; /*0x725f82*/
  MEMORY[0xB0F764] = 0; /*0x725f87*/
  MEMORY[0xB0F768] = 0; /*0x725f8c*/
  MEMORY[0xB0F76C] = 0; /*0x725f91*/
  return 0; /*0x725f96*/
}
}
} // namespace gamemd

// 0x7266C0
namespace gamemd {
unsigned int * sub_7266C0(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_7266C0(_DWORD *this, char a2)
{
  *(this + 16) |= 1 << a2; /*0x7266cd*/
  return this; /*0x7266d0*/
}
}
} // namespace gamemd

// 0x726780
namespace gamemd {
char sub_726780()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_726780(_BYTE *this)
{
  return *(this + 48); /*0x726783*/
}
}
} // namespace gamemd

// 0x726920
namespace gamemd {
int sub_726920(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_726920(_DWORD *this, int a2)
{
  *(this + 11) = a2; /*0x726924*/
  return a2; /*0x726927*/
}
}
} // namespace gamemd

// 0x726A70
namespace gamemd {
void sub_726A70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_726A70()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x726a7c*/
  MEMORY[0xB0F7F8] = Math::Sqrt(v0 + v0); /*0x726a8e*/
}
}
} // namespace gamemd

// 0x726AA0
namespace gamemd {
void sub_726AA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_726AA0()
{
  MEMORY[0xB0F848] = MEMORY[0xB0F7F8] / 60.0; /*0x726aac*/
}
}
} // namespace gamemd

// 0x726AC0
namespace gamemd {
void sub_726AC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_726AC0()
{
  MEMORY[0xB0F830] = 1.0 / MEMORY[0xB0F848]; /*0x726acc*/
}
}
} // namespace gamemd

// 0x726AE0
namespace gamemd {
void sub_726AE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_726AE0()
{
  MEMORY[0xB0F828] = 0.0174532925199433 * 45.0; /*0x726aec*/
}
}
} // namespace gamemd

// 0x726B00
namespace gamemd {
void sub_726B00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_726B00()
{
  MEMORY[0xB0F800] = 0.0174532925199433 * 60.0; /*0x726b0c*/
}
}
} // namespace gamemd

// 0x726B20
namespace gamemd {
void sub_726B20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_726B20()
{
  MEMORY[0xB0F7D8] = 0.0174532925199433 * 90.0; /*0x726b2c*/
}
}
} // namespace gamemd

// 0x726B40
namespace gamemd {
long long sub_726B40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_726B40()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0F7D8] - MEMORY[0xB0F800]); /*0x726b52*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0F7F8] * 0.5); /*0x726b66*/
  MEMORY[0xB0F850] = result; /*0x726b6b*/
  return result; /*0x726b70*/
}
}
} // namespace gamemd

// 0x726B80
namespace gamemd {
void sub_726B80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_726B80()
{
  MEMORY[0xB0F808] = Math::ArcTan((double)MEMORY[0xB0F850] * 0.00390625); /*0x726b97*/
}
}
} // namespace gamemd

// 0x726BB0
namespace gamemd {
void sub_726BB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_726BB0()
{
  MEMORY[0xB0F820] = Math::ArcTan((double)(2 * MEMORY[0xB0F850]) / MEMORY[0xB0F7F8]); /*0x726bd2*/
}
}
} // namespace gamemd

// 0x726BE0
namespace gamemd {
long long sub_726BE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_726BE0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0F850]) + 0.5); /*0x726bfb*/
  MEMORY[0xB0F844] = result; /*0x726c00*/
  return result; /*0x726c06*/
}
}
} // namespace gamemd

// 0x726C10
namespace gamemd {
int sub_726C10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_726C10()
{
  MEMORY[0xB0F7F0] = 0; /*0x726c12*/
  MEMORY[0xB0F7F2] = 0; /*0x726c18*/
  return 0; /*0x726c1e*/
}
}
} // namespace gamemd

// 0x726C20
namespace gamemd {
int sub_726C20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_726C20()
{
  MEMORY[0xB0F810] = 0; /*0x726c22*/
  MEMORY[0xB0F814] = 0; /*0x726c27*/
  MEMORY[0xB0F818] = 0; /*0x726c2c*/
  return 0; /*0x726c31*/
}
}
} // namespace gamemd

// 0x726C40
namespace gamemd {
int sub_726C40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_726C40()
{
  MEMORY[0xB0F840] = 0; /*0x726c45*/
  MEMORY[0xB0F838] = 128; /*0x726c4f*/
  MEMORY[0xB0F83C] = 128; /*0x726c54*/
  return 128; /*0x726c59*/
}
}
} // namespace gamemd

// 0x726C60
namespace gamemd {
int sub_726C60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_726C60()
{
  MEMORY[0xB0F7E0] = 0; /*0x726c62*/
  MEMORY[0xB0F7E4] = 0; /*0x726c67*/
  MEMORY[0xB0F7E8] = 0; /*0x726c6c*/
  MEMORY[0xB0F7EC] = 0; /*0x726c71*/
  return 0; /*0x726c76*/
}
}
} // namespace gamemd

// 0x727190
namespace gamemd {
ObjectClass * sub_727190()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ObjectClass *__thiscall sub_727190(void *this)
{
  ObjectClass *v2; // edi
  const void **v3; // esi

  v2 = 0; /*0x727195*/
  v3 = (const void **)&stru_830620.__pad_579C[60476]; /*0x727197*/
  while ( _strcmpi(this, *v3) ) /*0x7271aa*/
  {
    ++v3; /*0x7271ac*/
    v2 = (ObjectClass *)((char *)v2 + 1); /*0x7271af*/
    if ( (int)v3 >= (int)&stru_830620.__pad_579C[60488] ) /*0x7271b6*/
      return 0; /*0x7271bd*/
  }
  return v2; /*0x7271b8*/
}
}
} // namespace gamemd

// 0x7271D0
namespace gamemd {
char * sub_7271D0(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__fastcall sub_7271D0(int a1)
{
  return MEMORY[0x8449F8][a1]; /*0x7271d7*/
}
}
} // namespace gamemd

// 0x727DC0
namespace gamemd {
void sub_727DC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_727DC0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x727dcc*/
  MEMORY[0xB0F878] = Math::Sqrt(v0 + v0); /*0x727dde*/
}
}
} // namespace gamemd

// 0x727DF0
namespace gamemd {
void sub_727DF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_727DF0()
{
  MEMORY[0xB0F8C8] = MEMORY[0xB0F878] / 60.0; /*0x727dfc*/
}
}
} // namespace gamemd

// 0x727E10
namespace gamemd {
void sub_727E10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_727E10()
{
  MEMORY[0xB0F8B0] = 1.0 / MEMORY[0xB0F8C8]; /*0x727e1c*/
}
}
} // namespace gamemd

// 0x727E30
namespace gamemd {
void sub_727E30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_727E30()
{
  MEMORY[0xB0F8A8] = 0.0174532925199433 * 45.0; /*0x727e3c*/
}
}
} // namespace gamemd

// 0x727E50
namespace gamemd {
void sub_727E50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_727E50()
{
  MEMORY[0xB0F880] = 0.0174532925199433 * 60.0; /*0x727e5c*/
}
}
} // namespace gamemd

// 0x727E70
namespace gamemd {
void sub_727E70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_727E70()
{
  MEMORY[0xB0F858] = 0.0174532925199433 * 90.0; /*0x727e7c*/
}
}
} // namespace gamemd

// 0x727E90
namespace gamemd {
long long sub_727E90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_727E90()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0F858] - MEMORY[0xB0F880]); /*0x727ea2*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0F878] * 0.5); /*0x727eb6*/
  MEMORY[0xB0F8D0] = result; /*0x727ebb*/
  return result; /*0x727ec0*/
}
}
} // namespace gamemd

// 0x727ED0
namespace gamemd {
void sub_727ED0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_727ED0()
{
  MEMORY[0xB0F888] = Math::ArcTan((double)MEMORY[0xB0F8D0] * 0.00390625); /*0x727ee7*/
}
}
} // namespace gamemd

// 0x727F00
namespace gamemd {
void sub_727F00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_727F00()
{
  MEMORY[0xB0F8A0] = Math::ArcTan((double)(2 * MEMORY[0xB0F8D0]) / MEMORY[0xB0F878]); /*0x727f22*/
}
}
} // namespace gamemd

// 0x727F30
namespace gamemd {
long long sub_727F30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_727F30()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0F8D0]) + 0.5); /*0x727f4b*/
  MEMORY[0xB0F8C4] = result; /*0x727f50*/
  return result; /*0x727f56*/
}
}
} // namespace gamemd

// 0x727F60
namespace gamemd {
int sub_727F60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_727F60()
{
  MEMORY[0xB0F870] = 0; /*0x727f62*/
  MEMORY[0xB0F872] = 0; /*0x727f68*/
  return 0; /*0x727f6e*/
}
}
} // namespace gamemd

// 0x727F70
namespace gamemd {
int sub_727F70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_727F70()
{
  MEMORY[0xB0F890] = 0; /*0x727f72*/
  MEMORY[0xB0F894] = 0; /*0x727f77*/
  MEMORY[0xB0F898] = 0; /*0x727f7c*/
  return 0; /*0x727f81*/
}
}
} // namespace gamemd

// 0x727F90
namespace gamemd {
int sub_727F90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_727F90()
{
  MEMORY[0xB0F8C0] = 0; /*0x727f95*/
  MEMORY[0xB0F8B8] = 128; /*0x727f9f*/
  MEMORY[0xB0F8BC] = 128; /*0x727fa4*/
  return 128; /*0x727fa9*/
}
}
} // namespace gamemd

// 0x727FB0
namespace gamemd {
int sub_727FB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_727FB0()
{
  MEMORY[0xB0F860] = 0; /*0x727fb2*/
  MEMORY[0xB0F864] = 0; /*0x727fb7*/
  MEMORY[0xB0F868] = 0; /*0x727fbc*/
  MEMORY[0xB0F86C] = 0; /*0x727fc1*/
  return 0; /*0x727fc6*/
}
}
} // namespace gamemd

// 0x728200
namespace gamemd {
void sub_728200()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_728200()
{
  int v0; // ebp
  int v1; // ebx
  __int16 *v2; // esi
  _WORD *v3; // edi
  int i; // [esp+8h] [ebp-4h]

  v0 = MEMORY[0x8B4148]; /*0x728203*/
  v1 = 0; /*0x728209*/
  for ( i = -1; v1 < v0; ++v1 ) /*0x728215*/
  {
    v2 = (__int16 *)*((_DWORD *)MEMORY[0x8B413C] + v1); /*0x72821e*/
    v3 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v2 + 18); /*0x72822f*/
    if ( InfantryClass::IsInBounds((int)v3) ) /*0x728233*/
    {
      v3[139] = ++i; /*0x72825f*/
    }
    else
    {
      if ( v2 ) /*0x72823e*/
        (*(void (__thiscall **)(__int16 *, int))(*(_DWORD *)v2 + 32))(v2, 1); /*0x728246*/
      --v0; /*0x728249*/
      v3[139] = -1; /*0x72824a*/
      --v1; /*0x728253*/
    }
  }
}
}
} // namespace gamemd

// 0x728540
namespace gamemd {
char sub_728540(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_728540(int *this, int a2)
{
  int v2; // esi
  int *v3; // edx
  int v4; // eax
  int v5; // eax
  __int16 v6; // cx
  __int16 v8; // [esp+Eh] [ebp-2h]

  v2 = *(this + 9); /*0x728547*/
  v8 = HIWORD(v2); /*0x728551*/
  if ( v2 == *(_DWORD *)a2 ) /*0x728555*/
    return 1; /*0x728555*/
  v3 = this + 12; /*0x728565*/
  if ( *(this + 12) == -1 ) /*0x72856b*/
    return 1; /*0x7285bd*/
  while ( 1 ) /*0x72856d*/
  {
    v4 = *v3++; /*0x72856d*/
    v5 = v4 & 7; /*0x728572*/
    v6 = v8 + HIWORD(MEMORY[0x89F688][v5]); /*0x728588*/
    LOWORD(v2) = v2 + LOWORD(MEMORY[0x89F688][v5]); /*0x72859d*/
    v8 = v6; /*0x7285a1*/
    if ( (_WORD)v2 == *(_WORD *)a2 && v6 == *(_WORD *)(a2 + 2) ) /*0x7285ab*/
      break; /*0x7285ab*/
    if ( *v3 == -1 ) /*0x7285b0*/
      return 1; /*0x7285b0*/
  }
  return 0; /*0x7285b4*/
}
}
} // namespace gamemd

// 0x7287F0
namespace gamemd {
void sub_7287F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_7287F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x7287fc*/
  MEMORY[0xB0F8F8] = Math::Sqrt(v0 + v0); /*0x72880e*/
}
}
} // namespace gamemd

// 0x728820
namespace gamemd {
void sub_728820()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_728820()
{
  MEMORY[0xB0F948] = MEMORY[0xB0F8F8] / 60.0; /*0x72882c*/
}
}
} // namespace gamemd

// 0x728840
namespace gamemd {
void sub_728840()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_728840()
{
  MEMORY[0xB0F930] = 1.0 / MEMORY[0xB0F948]; /*0x72884c*/
}
}
} // namespace gamemd

// 0x728860
namespace gamemd {
void sub_728860()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_728860()
{
  MEMORY[0xB0F928] = 0.0174532925199433 * 45.0; /*0x72886c*/
}
}
} // namespace gamemd

// 0x728880
namespace gamemd {
void sub_728880()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_728880()
{
  MEMORY[0xB0F900] = 0.0174532925199433 * 60.0; /*0x72888c*/
}
}
} // namespace gamemd

// 0x7288A0
namespace gamemd {
void sub_7288A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_7288A0()
{
  MEMORY[0xB0F8D8] = 0.0174532925199433 * 90.0; /*0x7288ac*/
}
}
} // namespace gamemd

// 0x7288C0
namespace gamemd {
long long sub_7288C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_7288C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0F8D8] - MEMORY[0xB0F900]); /*0x7288d2*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0F8F8] * 0.5); /*0x7288e6*/
  MEMORY[0xB0F950] = result; /*0x7288eb*/
  return result; /*0x7288f0*/
}
}
} // namespace gamemd

// 0x728900
namespace gamemd {
void sub_728900()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_728900()
{
  MEMORY[0xB0F908] = Math::ArcTan((double)MEMORY[0xB0F950] * 0.00390625); /*0x728917*/
}
}
} // namespace gamemd

// 0x728930
namespace gamemd {
void sub_728930()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_728930()
{
  MEMORY[0xB0F920] = Math::ArcTan((double)(2 * MEMORY[0xB0F950]) / MEMORY[0xB0F8F8]); /*0x728952*/
}
}
} // namespace gamemd

// 0x728960
namespace gamemd {
long long sub_728960()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_728960()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0F950]) + 0.5); /*0x72897b*/
  MEMORY[0xB0F944] = result; /*0x728980*/
  return result; /*0x728986*/
}
}
} // namespace gamemd

// 0x728990
namespace gamemd {
int sub_728990()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_728990()
{
  MEMORY[0xB0F8F0] = 0; /*0x728992*/
  return 0; /*0x72899e*/
}
}
} // namespace gamemd

// 0x7289A0
namespace gamemd {
int sub_7289A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_7289A0()
{
  MEMORY[0xB0F910] = 0; /*0x7289a2*/
  MEMORY[0xB0F914] = 0; /*0x7289a7*/
  MEMORY[0xB0F918] = 0; /*0x7289ac*/
  return 0; /*0x7289b1*/
}
}
} // namespace gamemd

// 0x7289C0
namespace gamemd {
int sub_7289C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_7289C0()
{
  MEMORY[0xB0F940] = 0; /*0x7289c5*/
  MEMORY[0xB0F938] = 128; /*0x7289cf*/
  MEMORY[0xB0F93C] = 128; /*0x7289d4*/
  return 128; /*0x7289d9*/
}
}
} // namespace gamemd

// 0x7289E0
namespace gamemd {
int sub_7289E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_7289E0()
{
  MEMORY[0xB0F8E0] = 0; /*0x7289e2*/
  MEMORY[0xB0F8E4] = 0; /*0x7289e7*/
  MEMORY[0xB0F8E8] = 0; /*0x7289ec*/
  MEMORY[0xB0F8EC] = 0; /*0x7289f1*/
  return 0; /*0x7289f6*/
}
}
} // namespace gamemd

// 0x7294E0
namespace gamemd {
int sub_7294E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_7294E0(_DWORD *this)
{
  _DWORD *v2; // ecx
  int v3; // eax
  int result; // eax
  int v5; // [esp+4h] [ebp-10h]
  _DWORD v6[2]; // [esp+8h] [ebp-Ch] BYREF
  int v7; // [esp+10h] [ebp-4h]

  v2 = (_DWORD *)*(this + 3); /*0x7294e6*/
  v6[0] = v2[39]; /*0x7294f5*/
  v6[1] = v2[40]; /*0x7294fc*/
  v7 = v2[41]; /*0x729508*/
  if ( v7 <= -256 ) /*0x72950c*/
  {
    result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 292))(v2, 0); /*0x729569*/
    *(this + 6) = 4; /*0x72956f*/
  }
  else
  {
    v5 = (*(int (__thiscall **)(_DWORD *))(*v2 + 1336))(v2); /*0x72951c*/
    v3 = Math::RoundToInt((double)v5 * *(double *)&MEMORY[0x8871E0]->TunnelSpeed); /*0x729527*/
    if ( v3 <= 5 ) /*0x72952f*/
      v3 = 5; /*0x729531*/
    v7 -= v3; /*0x729542*/
    if ( v7 < -256 ) /*0x729546*/
      v7 = -256; /*0x729548*/
    return (*(int (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)*(this + 3) + 436))(*(this + 3), v6); /*0x72955a*/
  }
  return result; /*0x729560*/
}
}
} // namespace gamemd

// 0x72A230
namespace gamemd {
int sub_72A230()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_72A230()
{
  MEMORY[0xB0F960] = 0; /*0x72a232*/
  MEMORY[0xB0F964] = 0; /*0x72a237*/
  MEMORY[0xB0F968] = 0; /*0x72a23c*/
  MEMORY[0xB0F96C] = 0; /*0x72a241*/
  return 0; /*0x72a246*/
}
}
} // namespace gamemd

// 0x72A250
namespace gamemd {
void sub_72A250()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_72A250()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x72a25c*/
  MEMORY[0xB0F978] = Math::Sqrt(v0 + v0); /*0x72a26e*/
}
}
} // namespace gamemd

// 0x72A280
namespace gamemd {
void sub_72A280()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_72A280()
{
  MEMORY[0xB0F9C8] = MEMORY[0xB0F978] / 60.0; /*0x72a28c*/
}
}
} // namespace gamemd

// 0x72A2A0
namespace gamemd {
void sub_72A2A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_72A2A0()
{
  MEMORY[0xB0F9B0] = 1.0 / MEMORY[0xB0F9C8]; /*0x72a2ac*/
}
}
} // namespace gamemd

// 0x72A2C0
namespace gamemd {
void sub_72A2C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_72A2C0()
{
  MEMORY[0xB0F9A8] = 0.0174532925199433 * 45.0; /*0x72a2cc*/
}
}
} // namespace gamemd

// 0x72A2E0
namespace gamemd {
void sub_72A2E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_72A2E0()
{
  MEMORY[0xB0F980] = 0.0174532925199433 * 60.0; /*0x72a2ec*/
}
}
} // namespace gamemd

// 0x72A300
namespace gamemd {
void sub_72A300()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_72A300()
{
  MEMORY[0xB0F958] = 0.0174532925199433 * 90.0; /*0x72a30c*/
}
}
} // namespace gamemd

// 0x72A320
namespace gamemd {
long long sub_72A320()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_72A320()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0F958] - MEMORY[0xB0F980]); /*0x72a332*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0F978] * 0.5); /*0x72a346*/
  MEMORY[0xB0F9D0] = result; /*0x72a34b*/
  return result; /*0x72a350*/
}
}
} // namespace gamemd

// 0x72A360
namespace gamemd {
void sub_72A360()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_72A360()
{
  MEMORY[0xB0F988] = Math::ArcTan((double)MEMORY[0xB0F9D0] * 0.00390625); /*0x72a377*/
}
}
} // namespace gamemd

// 0x72A390
namespace gamemd {
void sub_72A390()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_72A390()
{
  MEMORY[0xB0F9A0] = Math::ArcTan((double)(2 * MEMORY[0xB0F9D0]) / MEMORY[0xB0F978]); /*0x72a3b2*/
}
}
} // namespace gamemd

// 0x72A3C0
namespace gamemd {
long long sub_72A3C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_72A3C0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0F9D0]) + 0.5); /*0x72a3db*/
  MEMORY[0xB0F9C4] = result; /*0x72a3e0*/
  return result; /*0x72a3e6*/
}
}
} // namespace gamemd

// 0x72A3F0
namespace gamemd {
int sub_72A3F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_72A3F0()
{
  MEMORY[0xB0F970] = 0; /*0x72a3f2*/
  MEMORY[0xB0F972] = 0; /*0x72a3f8*/
  return 0; /*0x72a3fe*/
}
}
} // namespace gamemd

// 0x72A400
namespace gamemd {
int sub_72A400()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_72A400()
{
  MEMORY[0xB0F990] = 0; /*0x72a402*/
  MEMORY[0xB0F994] = 0; /*0x72a407*/
  MEMORY[0xB0F998] = 0; /*0x72a40c*/
  return 0; /*0x72a411*/
}
}
} // namespace gamemd

// 0x72A420
namespace gamemd {
int sub_72A420()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_72A420()
{
  MEMORY[0xB0F9C0] = 0; /*0x72a425*/
  MEMORY[0xB0F9B8] = 128; /*0x72a42f*/
  MEMORY[0xB0F9BC] = 128; /*0x72a434*/
  return 128; /*0x72a439*/
}
}
} // namespace gamemd

// 0x72A690
namespace gamemd {
int sub_72A690()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_72A690()
{
  MEMORY[0xB0FA08] = 0; /*0x72a692*/
  MEMORY[0xB0FA0C] = 0; /*0x72a697*/
  MEMORY[0xB0FA10] = 0; /*0x72a69c*/
  MEMORY[0xB0FA14] = 0; /*0x72a6a1*/
  return 0; /*0x72a6a6*/
}
}
} // namespace gamemd

// 0x72A6B0
namespace gamemd {
void sub_72A6B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_72A6B0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x72a6bc*/
  MEMORY[0xB0FA28] = Math::Sqrt(v0 + v0); /*0x72a6ce*/
}
}
} // namespace gamemd

// 0x72A6E0
namespace gamemd {
void sub_72A6E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_72A6E0()
{
  MEMORY[0xB0FB40] = MEMORY[0xB0FA28] / 60.0; /*0x72a6ec*/
}
}
} // namespace gamemd

// 0x72A700
namespace gamemd {
void sub_72A700()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_72A700()
{
  MEMORY[0xB0FAF0] = 1.0 / MEMORY[0xB0FB40]; /*0x72a70c*/
}
}
} // namespace gamemd

// 0x72A720
namespace gamemd {
void sub_72A720()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_72A720()
{
  MEMORY[0xB0FAE0] = 0.0174532925199433 * 45.0; /*0x72a72c*/
}
}
} // namespace gamemd

// 0x72A740
namespace gamemd {
void sub_72A740()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_72A740()
{
  MEMORY[0xB0FA40] = 0.0174532925199433 * 60.0; /*0x72a74c*/
}
}
} // namespace gamemd

// 0x72A760
namespace gamemd {
void sub_72A760()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_72A760()
{
  MEMORY[0xB0F9F0] = 0.0174532925199433 * 90.0; /*0x72a76c*/
}
}
} // namespace gamemd

// 0x72A780
namespace gamemd {
long long sub_72A780()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_72A780()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0F9F0] - MEMORY[0xB0FA40]); /*0x72a792*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0FA28] * 0.5); /*0x72a7a6*/
  MEMORY[0xB0FB58] = result; /*0x72a7ab*/
  return result; /*0x72a7b0*/
}
}
} // namespace gamemd

// 0x72A7C0
namespace gamemd {
void sub_72A7C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_72A7C0()
{
  MEMORY[0xB0FA58] = Math::ArcTan((double)MEMORY[0xB0FB58] * 0.00390625); /*0x72a7d7*/
}
}
} // namespace gamemd

// 0x72A7F0
namespace gamemd {
void sub_72A7F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_72A7F0()
{
  MEMORY[0xB0FAB0] = Math::ArcTan((double)(2 * MEMORY[0xB0FB58]) / MEMORY[0xB0FA28]); /*0x72a812*/
}
}
} // namespace gamemd

// 0x72A820
namespace gamemd {
long long sub_72A820()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_72A820()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0FB58]) + 0.5); /*0x72a83b*/
  MEMORY[0xB0FB38] = result; /*0x72a840*/
  return result; /*0x72a846*/
}
}
} // namespace gamemd

// 0x72A850
namespace gamemd {
int sub_72A850()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_72A850()
{
  MEMORY[0xB0FA24] = 0; /*0x72a852*/
  MEMORY[0xB0FA26] = 0; /*0x72a858*/
  return 0; /*0x72a85e*/
}
}
} // namespace gamemd

// 0x72A860
namespace gamemd {
int sub_72A860()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_72A860()
{
  MEMORY[0xB0FA80] = 0; /*0x72a862*/
  MEMORY[0xB0FA84] = 0; /*0x72a867*/
  MEMORY[0xB0FA88] = 0; /*0x72a86c*/
  return 0; /*0x72a871*/
}
}
} // namespace gamemd

// 0x72A880
namespace gamemd {
int sub_72A880()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_72A880()
{
  MEMORY[0xB0FB28] = 0; /*0x72a885*/
  MEMORY[0xB0FB20] = 128; /*0x72a88f*/
  MEMORY[0xB0FB24] = 128; /*0x72a894*/
  return 128; /*0x72a899*/
}
}
} // namespace gamemd

// 0x72A8A0
namespace gamemd {
char sub_72A8A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_72A8A0()
{
  MEMORY[0xB0FB4E] = 0; /*0x72a8a2*/
  MEMORY[0xB0FB4C] = -1; /*0x72a8a9*/
  MEMORY[0xB0FB4D] = -1; /*0x72a8ae*/
  return -1; /*0x72a8b3*/
}
}
} // namespace gamemd

// 0x72A8C0
namespace gamemd {
char sub_72A8C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_72A8C0()
{
  MEMORY[0xB0FA94] = 72; /*0x72a8c2*/
  MEMORY[0xB0FA95] = 0; /*0x72a8c9*/
  return 0; /*0x72a8d3*/
}
}
} // namespace gamemd

// 0x72A8E0
namespace gamemd {
void sub_72A8E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_72A8E0()
{
  MEMORY[0xB0F9FC] = 0; /*0x72a8e0*/
  MEMORY[0xB0F9FD] = 30034; /*0x72a8e7*/
}
}
} // namespace gamemd

// 0x72A900
namespace gamemd {
char sub_72A900()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_72A900()
{
  MEMORY[0xB0FB14] = 72; /*0x72a902*/
  MEMORY[0xB0FB15] = 0; /*0x72a909*/
  return 0; /*0x72a913*/
}
}
} // namespace gamemd

// 0x72A920
namespace gamemd {
char sub_72A920()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_72A920()
{
  MEMORY[0xB0FB19] = 72; /*0x72a922*/
  MEMORY[0xB0FB1A] = 0; /*0x72a929*/
  return 0; /*0x72a933*/
}
}
} // namespace gamemd

// 0x72A940
namespace gamemd {
void sub_72A940()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_72A940()
{
  MEMORY[0xB0F9D8] = -11612; /*0x72a940*/
  MEMORY[0xB0F9DA] = -1; /*0x72a94e*/
}
}
} // namespace gamemd

// 0x72A960
namespace gamemd {
char sub_72A960()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_72A960()
{
  MEMORY[0xB0FB06] = 0; /*0x72a962*/
  MEMORY[0xB0FB04] = -1; /*0x72a969*/
  return -1; /*0x72a973*/
}
}
} // namespace gamemd

// 0x72A980
namespace gamemd {
char sub_72A980()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_72A980()
{
  MEMORY[0xB0FAA2] = 0; /*0x72a982*/
  MEMORY[0xB0FAA0] = -1; /*0x72a989*/
  return -1; /*0x72a993*/
}
}
} // namespace gamemd

// 0x72A9A0
namespace gamemd {
char sub_72A9A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_72A9A0()
{
  LOWORD(MEMORY[0xB0FA1C]) = 0; /*0x72a9a2*/
  BYTE2(MEMORY[0xB0FA1C]) = 0; /*0x72a9ac*/
  return 0; /*0x72a9b1*/
}
}
} // namespace gamemd

// 0x72A9C0
namespace gamemd {
unsigned int * Copy8Bytes()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall Copy8Bytes(AbstractClass *this)
{
  int *v1; // edx
  _DWORD *result; // eax
  int v3; // ecx
  int v4; // edx

  result = this->__pad_0; /*0x72a9c0*/
  v3 = *v1; /*0x72a9c2*/
  v4 = v1[1]; /*0x72a9c4*/
  *result = v3; /*0x72a9c7*/
  result[1] = v4; /*0x72a9c9*/
  return result; /*0x72a9cc*/
}
}
} // namespace gamemd

// 0x72A9D0
namespace gamemd {
int sub_72A9D0(int * a1, int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_72A9D0(int *a1, int *a2)
{
  int result; // eax

  result = *a2; /*0x72a9d0*/
  *a1 = *a2; /*0x72a9d2*/
  a1[1] = a2[1]; /*0x72a9d7*/
  return result; /*0x72a9da*/
}
}
} // namespace gamemd

// 0x72AA10
namespace gamemd {
int CubicBezierAdvance(unsigned int * a1, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall CubicBezierAdvance(_DWORD *a1, int a2, int a3)
{
  int v3; // esi
  int v4; // esi
  int v6; // edx

  v3 = a1[1]; /*0x72aa13*/
  *a1 += a2; /*0x72aa18*/
  a1[1] = a3 + v3; /*0x72aa22*/
  v4 = -2 * a2 + a1[2]; /*0x72aa2c*/
  v6 = -2 * a3 + a1[3]; /*0x72aa33*/
  a1[2] = v4; /*0x72aa35*/
  a1[3] = v6; /*0x72aa38*/
  return -2 * a3; /*0x72aa3b*/
}
}
} // namespace gamemd

// 0x72AA40
namespace gamemd {
unsigned signed char LoadMouseClassResources()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned __int8 LoadMouseClassResources()
{
  unsigned __int8 result; // al

  MEMORY[0xB0FC80] = LoadFileSHP(MEMORY[0x844C44], (bool *)&MEMORY[0xB0FC90]); /*0x72aa5b*/
  MEMORY[0xB0FC84] = LoadFileSHP(MEMORY[0x844C48], (bool *)&MEMORY[0xB0FC91]); /*0x72aa70*/
  MEMORY[0xB0FC88] = LoadFileSHP(MEMORY[0x844C4C], (bool *)&MEMORY[0xB0FC92]); /*0x72aa85*/
  MEMORY[0xB0FC8C] = LoadFileSHP(MEMORY[0x844C50], (bool *)&MEMORY[0xB0FC93]); /*0x72aa9a*/
  MEMORY[0xB0FACC] = LoadFileSHP(MEMORY[0x844C54], (bool *)&MEMORY[0xB0FC94]); /*0x72aab4*/
  LoadPaletteSimple(MEMORY[0x844BA4], &MEMORY[0xB0FB64], &MEMORY[0xB0FB68]); /*0x72aab9*/
  LoadPaletteSimple(MEMORY[0x844BA0], &MEMORY[0xB0FB6C], &MEMORY[0xB0FB70]); /*0x72aace*/
  LoadPaletteSimple(MEMORY[0x844B9C], &MEMORY[0xB0FB5C], &MEMORY[0xB0FB60]); /*0x72aae3*/
  LoadPaletteSimple(MEMORY[0x844BA8], &MEMORY[0xB0FB74], &MEMORY[0xB0FB78]); /*0x72aaf8*/
  result = MEMORY[0xB0FBE0]; /*0x72aafd*/
  if ( !MEMORY[0xB0FBE0] ) /*0x72ab04*/
  {
    AssetClass::ReleaseAndReload(); /*0x72ab0a*/
    MEMORY[0xB0FAC4] = LoadFileSHP(MEMORY[0x844CD4], (bool *)&MEMORY[0xB0FC95]); /*0x72ab2a*/
    MEMORY[0xB0F9DC] = LoadFileSHP(MEMORY[0x844CD8], (bool *)&MEMORY[0xB0FC96]); /*0x72ab3f*/
    MEMORY[0xB0FAC0] = LoadFileSHP(MEMORY[0x844CDC], (bool *)&MEMORY[0xB0FC97]); /*0x72ab54*/
    MEMORY[0xB0FB50] = LoadFileSHP(MEMORY[0x844CE0], (bool *)&MEMORY[0xB0FC98]); /*0x72ab69*/
    MEMORY[0xB0FA04] = LoadFileSHP(MEMORY[0x844CE4], (bool *)&MEMORY[0xB0FC99]); /*0x72ab7e*/
    MEMORY[0xB0FAF8] = LoadFileSHP(MEMORY[0x844CE8], (bool *)&MEMORY[0xB0FC9A]); /*0x72ab93*/
    MEMORY[0xB0FA74] = LoadFileSHP(MEMORY[0x844CEC], (bool *)&MEMORY[0xB0FC9B]); /*0x72aba8*/
    MEMORY[0xB0FA38] = LoadFileSHP(MEMORY[0x844CF0], (bool *)&MEMORY[0xB0FC9C]); /*0x72abbd*/
    MEMORY[0xB0FAE8] = LoadFileSHP(MEMORY[0x844CF4], (bool *)&MEMORY[0xB0FC9D]); /*0x72abd2*/
    MEMORY[0xB0FA54] = LoadFileSHP(MEMORY[0x844CF8], (bool *)&MEMORY[0xB0FC9E]); /*0x72abec*/
    LoadPaletteSimple(MEMORY[0x844BE4], &MEMORY[0xB0FBC8], &MEMORY[0xB0FBCC]); /*0x72abf1*/
    LoadPaletteSimple(MEMORY[0x844BE8], &MEMORY[0xB0FBD0], &MEMORY[0xB0FBD4]); /*0x72ac06*/
    LoadPaletteSimple(MEMORY[0x844BEC], &MEMORY[0xB0FBD8], &MEMORY[0xB0FBDC]); /*0x72ac1b*/
    result = (unsigned __int8)SetupMouseClassResources(MEMORY[0x8A00A4], MEMORY[0x8A00A8]); /*0x72ac2c*/
    MEMORY[0xB0FBE0] = 1; /*0x72ac31*/
  }
  return result; /*0x72ac38*/
}
}
} // namespace gamemd

// 0x72ADE0
namespace gamemd {
int Palette_LoadSimple(char * Source, unsigned int * a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall Palette_LoadSimple(char *Source, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // ebx
  char *v4; // ebp
  char *v5; // eax
  _BYTE *v6; // ecx
  int v7; // edx
  _BYTE *v8; // eax
  int v9; // esi
  char v10; // dl
  int v11; // ecx
  int v12; // eax
  __int16 v14; // [esp+8h] [ebp-78h]
  _DWORD v16[22]; // [esp+14h] [ebp-6Ch] BYREF
  _BYTE v17[12]; // [esp+6Ch] [ebp-14h] BYREF
  int v18; // [esp+78h] [ebp-8h]

  v3 = a2; /*0x72ade5*/
  CCFileClass::Construct(v16, Source); /*0x72adf0*/
  v4 = (char *)CCFileClass::ReadEntireFile(v16); /*0x72adfe*/
  if ( v4 ) /*0x72ae06*/
  {
    v5 = (char *)__2_YAPAXI_Z(0x300u); /*0x72ae11*/
    if ( v5 ) /*0x72ae1b*/
    {
      v6 = v5 + 2; /*0x72ae1d*/
      v7 = 256; /*0x72ae20*/
      do /*0x72ae34*/
      {
        *(v6 - 2) = 0; /*0x72ae25*/
        *(v6 - 1) = 0; /*0x72ae29*/
        *v6 = 0; /*0x72ae2d*/
        v6 += 3; /*0x72ae30*/
        --v7; /*0x72ae33*/
      }
      while ( v7 ); /*0x72ae34*/
    }
    else
    {
      v5 = 0; /*0x72ae38*/
    }
    *v3 = v5; /*0x72ae3b*/
    v8 = v4 + 1; /*0x72ae3e*/
    v9 = 0; /*0x72ae45*/
    while ( 1 ) /*0x72ae5d*/
    {
      HIBYTE(v14) = 4 * *v8; /*0x72ae5d*/
      LOBYTE(v14) = 4 * *(v8 - 1); /*0x72ae64*/
      v10 = 4 * v8[1]; /*0x72ae6a*/
      v8 += 3; /*0x72ae80*/
      v11 = *v3 + 3 * (v9 % 256); /*0x72ae83*/
      ++v9; /*0x72ae8a*/
      *(_WORD *)v11 = v14; /*0x72ae91*/
      *(_BYTE *)(v11 + 2) = v10; /*0x72ae94*/
      if ( v9 >= 256 ) /*0x72ae97*/
        break; /*0x72ae97*/
      v3 = a2; /*0x72ae4e*/
    }
    __3_YAXPAX_Z(v4); /*0x72ae9e*/
    if ( __2_YAPAXI_Z(0x188u) ) /*0x72aea8*/
      v12 = ConvertClass::Construct(*a2, *a2, MEMORY[0x887310], 1, 0); /*0x72aecb*/
    else
      v12 = 0; /*0x72aed2*/
    *a3 = v12; /*0x72aedb*/
  }
  v16[0] = &CCFileClass::`vftable'; /*0x72aee1*/
  v18 = 0; /*0x72aee9*/
  Vector::Clear((int)v17); /*0x72aef1*/
  v16[0] = &off_7E1668; /*0x72aefa*/
  return BufferIOFileClass::Dtor(v16); /*0x72af07*/
}
}
} // namespace gamemd

// 0x72AFE0
namespace gamemd {
CCINIClass * sub_72AFE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *sub_72AFE0()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20288]; /*0x72afe5*/
}
}
} // namespace gamemd

// 0x72B000
namespace gamemd {
CCINIClass * sub_72B000()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *sub_72B000()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20296]; /*0x72b005*/
}
}
} // namespace gamemd

// 0x72B020
namespace gamemd {
CCINIClass * sub_72B020()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *sub_72B020()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20280]; /*0x72b025*/
}
}
} // namespace gamemd

// 0x72B040
namespace gamemd {
CCINIClass * sub_72B040()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *sub_72B040()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20304]; /*0x72b045*/
}
}
} // namespace gamemd

// 0x72B330
namespace gamemd {
CCINIClass * sub_72B330()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *sub_72B330()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20312]; /*0x72b335*/
}
}
} // namespace gamemd

// 0x72B350
namespace gamemd {
CCINIClass * sub_72B350()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *sub_72B350()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20320]; /*0x72b355*/
}
}
} // namespace gamemd

// 0x72B370
namespace gamemd {
CCINIClass * sub_72B370()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *sub_72B370()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20328]; /*0x72b375*/
}
}
} // namespace gamemd

// 0x72B4F0
namespace gamemd {
CCINIClass * sub_72B4F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *sub_72B4F0()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20336]; /*0x72b4f5*/
}
}
} // namespace gamemd

// 0x72B510
namespace gamemd {
CCINIClass * sub_72B510()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *sub_72B510()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20344]; /*0x72b515*/
}
}
} // namespace gamemd

// 0x72B9B0
namespace gamemd {
char sub_72B9B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_72B9B0()
{
  return MEMORY[0xB0FD5D]; /*0x72b9b5*/
}
}
} // namespace gamemd

// 0x72B9C0
namespace gamemd {
CCINIClass * sub_72B9C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *sub_72B9C0()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20796]; /*0x72b9c5*/
}
}
} // namespace gamemd

// 0x72BB90
namespace gamemd {
char sub_72BB90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_72BB90()
{
  return MEMORY[0xB0FD51]; /*0x72bb95*/
}
}
} // namespace gamemd

// 0x72BBA0
namespace gamemd {
CCINIClass * sub_72BBA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *sub_72BBA0()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20784]; /*0x72bba5*/
}
}
} // namespace gamemd

// 0x72BD70
namespace gamemd {
char sub_72BD70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_72BD70()
{
  return MEMORY[0xB0FD45]; /*0x72bd75*/
}
}
} // namespace gamemd

// 0x72BD80
namespace gamemd {
CCINIClass * sub_72BD80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *sub_72BD80()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20772]; /*0x72bd85*/
}
}
} // namespace gamemd

// 0x72BF50
namespace gamemd {
char sub_72BF50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_72BF50()
{
  return MEMORY[0xB0FD39]; /*0x72bf55*/
}
}
} // namespace gamemd

// 0x72BF60
namespace gamemd {
CCINIClass * sub_72BF60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *sub_72BF60()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20760]; /*0x72bf65*/
}
}
} // namespace gamemd

// 0x72C130
namespace gamemd {
char sub_72C130()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_72C130()
{
  return MEMORY[0xB0FD2D]; /*0x72c135*/
}
}
} // namespace gamemd

// 0x72C140
namespace gamemd {
CCINIClass * sub_72C140()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *sub_72C140()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20748]; /*0x72c145*/
}
}
} // namespace gamemd

// 0x72C310
namespace gamemd {
char sub_72C310()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_72C310()
{
  return MEMORY[0xB0FD21]; /*0x72c315*/
}
}
} // namespace gamemd

// 0x72C320
namespace gamemd {
CCINIClass * sub_72C320()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *sub_72C320()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20736]; /*0x72c325*/
}
}
} // namespace gamemd

// 0x72C4F0
namespace gamemd {
char sub_72C4F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_72C4F0()
{
  return MEMORY[0xB0FD15]; /*0x72c4f5*/
}
}
} // namespace gamemd

// 0x72C500
namespace gamemd {
CCINIClass * sub_72C500()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *sub_72C500()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20724]; /*0x72c505*/
}
}
} // namespace gamemd

// 0x72C6D0
namespace gamemd {
char sub_72C6D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_72C6D0()
{
  return MEMORY[0xB0FD09]; /*0x72c6d5*/
}
}
} // namespace gamemd

// 0x72C6E0
namespace gamemd {
CCINIClass * sub_72C6E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *sub_72C6E0()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20712]; /*0x72c6e5*/
}
}
} // namespace gamemd

// 0x72C8B0
namespace gamemd {
char sub_72C8B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_72C8B0()
{
  return MEMORY[0xB0FCFD]; /*0x72c8b5*/
}
}
} // namespace gamemd

// 0x72C8C0
namespace gamemd {
CCINIClass * sub_72C8C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *sub_72C8C0()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20700]; /*0x72c8c5*/
}
}
} // namespace gamemd

// 0x72CA90
namespace gamemd {
char sub_72CA90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_72CA90()
{
  return MEMORY[0xB0FCF1]; /*0x72ca95*/
}
}
} // namespace gamemd

// 0x72CAA0
namespace gamemd {
CCINIClass * sub_72CAA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *sub_72CAA0()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20688]; /*0x72caa5*/
}
}
} // namespace gamemd

// 0x72CC60
namespace gamemd {
char sub_72CC60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_72CC60()
{
  return MEMORY[0xB0FC7C]; /*0x72cc65*/
}
}
} // namespace gamemd

// 0x72CC70
namespace gamemd {
int sub_72CC70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_72CC70()
{
  return MEMORY[0xB0FC74]; /*0x72cc75*/
}
}
} // namespace gamemd

// 0x72CE30
namespace gamemd {
char sub_72CE30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_72CE30()
{
  return MEMORY[0xB0FCE5]; /*0x72ce35*/
}
}
} // namespace gamemd

// 0x72CE40
namespace gamemd {
CCINIClass * sub_72CE40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *sub_72CE40()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20676]; /*0x72ce45*/
}
}
} // namespace gamemd

// 0x72CF90
namespace gamemd {
void FileTree_Cleanup()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void FileTree_Cleanup()
{
  void *v0; // esi

  if ( MEMORY[0xB0FCD9] ) /*0x72cf9a*/
  {
    if ( MEMORY[0xB0FCD8] ) /*0x72cfa2*/
    {
      v0 = MEMORY[0xB0FA18]; /*0x72cfa5*/
      if ( MEMORY[0xB0FA18] ) /*0x72cfad*/
      {
        FileTreeNode::Destroy(MEMORY[0xB0FA18]); /*0x72cfb1*/
        __3_YAXPAX_Z(v0); /*0x72cfb7*/
      }
      MEMORY[0xB0FCD8] = 0; /*0x72cfbf*/
    }
    MEMORY[0xB0FA18] = 0; /*0x72cfcb*/
    if ( MEMORY[0xB0FCDC] ) /*0x72cfd3*/
    {
      __3_YAXPAX_Z(MEMORY[0xB0FCDC]); /*0x72cfd6*/
      MEMORY[0xB0FCDC] = 0; /*0x72cfde*/
    }
    if ( MEMORY[0xB0FCE0] ) /*0x72cfec*/
    {
      (**(void (__thiscall ***)(int, int))MEMORY[0xB0FCE0])(MEMORY[0xB0FCE0], 1); /*0x72cff2*/
      MEMORY[0xB0FCE0] = 0; /*0x72cff4*/
    }
  }
  MEMORY[0xB0FCD9] = 0; /*0x72cffa*/
}
}
} // namespace gamemd

// 0x72D010
namespace gamemd {
char sub_72D010()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_72D010()
{
  return MEMORY[0xB0FCD9]; /*0x72d015*/
}
}
} // namespace gamemd

// 0x72D020
namespace gamemd {
CCINIClass * sub_72D020()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *sub_72D020()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20664]; /*0x72d025*/
}
}
} // namespace gamemd

// 0x72D1F0
namespace gamemd {
char sub_72D1F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_72D1F0()
{
  return MEMORY[0xB0FCCE]; /*0x72d1f5*/
}
}
} // namespace gamemd

// 0x72D200
namespace gamemd {
CCINIClass * sub_72D200()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *sub_72D200()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20652]; /*0x72d205*/
}
}
} // namespace gamemd

// 0x72D430
namespace gamemd {
char sub_72D430()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_72D430()
{
  return MEMORY[0xB0FBAC]; /*0x72d435*/
}
}
} // namespace gamemd

// 0x72D440
namespace gamemd {
void * sub_72D440()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *sub_72D440()
{
  return MEMORY[0xB0FBA4]; /*0x72d445*/
}
}
} // namespace gamemd

// 0x72D800
namespace gamemd {
char sub_72D800()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_72D800()
{
  return MEMORY[0xB0FBB8]; /*0x72d805*/
}
}
} // namespace gamemd

// 0x72D810
namespace gamemd {
void * sub_72D810()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *sub_72D810()
{
  return MEMORY[0xB0FBB0]; /*0x72d815*/
}
}
} // namespace gamemd

// 0x72D9A0
namespace gamemd {
int sub_72D9A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_72D9A0()
{
  void *FileSHP; // eax
  char *v1; // ecx

  if ( MEMORY[0x8A00A4] == 640 ) /*0x72d9af*/
  {
    MEMORY[0xB0FB48] = LoadFileSHP(MEMORY[0x844CB8], (bool *)&MEMORY[0xB0FCC8]); /*0x72d9c7*/
    MEMORY[0xB0FB10] = LoadFileSHP(MEMORY[0x844CC4], (bool *)&MEMORY[0xB0FCCA]); /*0x72d9dc*/
    FileSHP = LoadFileSHP(MEMORY[0x844CC8], (bool *)&MEMORY[0xB0FCCB]); /*0x72d9e1*/
    v1 = MEMORY[0x844CD0][0]; /*0x72d9e6*/
  }
  else
  {
    MEMORY[0xB0FB48] = LoadFileSHP(MEMORY[0x844D4C], (bool *)&MEMORY[0xB0FCC8]); /*0x72da0e*/
    MEMORY[0xB0FB10] = LoadFileSHP(MEMORY[0x844D54], (bool *)&MEMORY[0xB0FCCA]); /*0x72da23*/
    FileSHP = LoadFileSHP(MEMORY[0x844CCC], (bool *)&MEMORY[0xB0FCCB]); /*0x72da28*/
    v1 = MEMORY[0x844D5C]; /*0x72da2d*/
  }
  MEMORY[0xB0F9F8] = FileSHP; /*0x72d9ec*/
  MEMORY[0xB0FA6C] = LoadFileSHP(v1, (bool *)&MEMORY[0xB0FCCC]); /*0x72da52*/
  LoadPaletteSimple(MEMORY[0x844BE0], &MEMORY[0xB0FBBC], &MEMORY[0xB0FBC0]); /*0x72da57*/
  LoadPaletteSimple(MEMORY[0x844D50], &MEMORY[0xB0FCB0], &MEMORY[0xB0FCB4]); /*0x72da6c*/
  LoadPaletteSimple(MEMORY[0x844D58], &MEMORY[0xB0FCB8], &MEMORY[0xB0FCBC]); /*0x72da81*/
  return LoadPaletteSimple(MEMORY[0x844D60], &MEMORY[0xB0FCC0], &MEMORY[0xB0FCC4]); /*0x72da9b*/
}
}
} // namespace gamemd

// 0x72DAA0
namespace gamemd {
int CleanupEVASystem()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// Microsoft VisualC 2-14/net runtime
void EVASystem::Cleanup()
{
  CleanupEVASystem_Cleanup(); /*0x72daa0*/
  if ( MEMORY[0xB0FCB0] ) /*0x72dcfa*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FCB0]); /*0x72dcfd*/
    MEMORY[0xB0FCB0] = 0; /*0x72dd05*/
  }
  if ( MEMORY[0xB0FCB4] ) /*0x72dd13*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0xB0FCB4])(MEMORY[0xB0FCB4], 1); /*0x72dd19*/
    MEMORY[0xB0FCB4] = 0; /*0x72dd1b*/
  }
  if ( MEMORY[0xB0FCB8] ) /*0x72dd28*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FCB8]); /*0x72dd2b*/
    MEMORY[0xB0FCB8] = 0; /*0x72dd33*/
  }
  if ( MEMORY[0xB0FCBC] ) /*0x72dd41*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0xB0FCBC])(MEMORY[0xB0FCBC], 1); /*0x72dd47*/
    MEMORY[0xB0FCBC] = 0; /*0x72dd49*/
  }
  if ( MEMORY[0xB0FCC0] ) /*0x72dd56*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FCC0]); /*0x72dd59*/
    MEMORY[0xB0FCC0] = 0; /*0x72dd61*/
  }
  if ( MEMORY[0xB0FCC4] ) /*0x72dd6f*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0xB0FCC4])(MEMORY[0xB0FCC4], 1); /*0x72dd75*/
    MEMORY[0xB0FCC4] = 0; /*0x72dd77*/
  }
  if ( MEMORY[0xB0FBBC] ) /*0x72dd84*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FBBC]); /*0x72dd87*/
    MEMORY[0xB0FBBC] = 0; /*0x72dd8f*/
  }
  if ( MEMORY[0xB0FBC0] ) /*0x72dd9d*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0xB0FBC0])(MEMORY[0xB0FBC0], 1); /*0x72dda3*/
    MEMORY[0xB0FBC0] = 0; /*0x72dda5*/
  }
}
}
} // namespace gamemd

// 0x72DAB0
namespace gamemd {
void * sub_72DAB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *sub_72DAB0()
{
  return MEMORY[0xB0FBBC]; /*0x72dab5*/
}
}
} // namespace gamemd

// 0x72DAF0
namespace gamemd {
int sub_72DAF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_72DAF0()
{
  return MEMORY[0xB0FBC0]; /*0x72daf5*/
}
}
} // namespace gamemd

// 0x72DFB0
namespace gamemd {
int * LoadingScreen_InitResources()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *LoadingScreen_InitResources()
{
  int *result; // eax

  if ( !MEMORY[0xB0FBE0] ) /*0x72dfba*/
    goto LABEL_3; /*0x72dfba*/
  MEMORY[0xB0FBE0] = 0; /*0x72dfc0*/
  LoadingScreen::DestroyFileTrees(); /*0x72dfc6*/
  LoadingScreen::CleanupObjects(); /*0x72dfcb*/
  __3_YAXPAX_Z(MEMORY[0xB0FC10]); /*0x72dfd6*/
  MEMORY[0xB0FC10] = 0; /*0x72dfe1*/
  __3_YAXPAX_Z(MEMORY[0xB0FC14]); /*0x72dfe8*/
  MEMORY[0xB0FC14] = 0; /*0x72dff3*/
  __3_YAXPAX_Z(MEMORY[0xB0FC18]); /*0x72dffa*/
  MEMORY[0xB0FC18] = 0; /*0x72e004*/
  __3_YAXPAX_Z(MEMORY[0xB0FC1C]); /*0x72e00b*/
  MEMORY[0xB0FC1C] = 0; /*0x72e016*/
  __3_YAXPAX_Z(MEMORY[0xB0FC20]); /*0x72e01d*/
  MEMORY[0xB0FC20] = 0; /*0x72e028*/
  __3_YAXPAX_Z(MEMORY[0xB0FC24]); /*0x72e02f*/
  MEMORY[0xB0FC24] = 0; /*0x72e039*/
  __3_YAXPAX_Z(MEMORY[0xB0FC28]); /*0x72e040*/
  MEMORY[0xB0FC28] = 0; /*0x72e04b*/
  __3_YAXPAX_Z(MEMORY[0xB0FC2C]); /*0x72e052*/
  MEMORY[0xB0FC2C] = 0; /*0x72e05a*/
  result = (int *)ReleaseLoadingResources(); /*0x72e060*/
  if ( !MEMORY[0xB0FBE0] ) /*0x72e06b*/
  {
LABEL_3:
    AssetClass::ReleaseAndReload(); /*0x72e071*/
    MEMORY[0xB0FAC4] = LoadFileSHP(MEMORY[0x844CD4], (bool *)&MEMORY[0xB0FC95]); /*0x72e091*/
    MEMORY[0xB0F9DC] = LoadFileSHP(MEMORY[0x844CD8], (bool *)&MEMORY[0xB0FC96]); /*0x72e0a6*/
    MEMORY[0xB0FAC0] = LoadFileSHP(MEMORY[0x844CDC], (bool *)&MEMORY[0xB0FC97]); /*0x72e0bb*/
    MEMORY[0xB0FB50] = LoadFileSHP(MEMORY[0x844CE0], (bool *)&MEMORY[0xB0FC98]); /*0x72e0d0*/
    MEMORY[0xB0FA04] = LoadFileSHP(MEMORY[0x844CE4], (bool *)&MEMORY[0xB0FC99]); /*0x72e0e5*/
    MEMORY[0xB0FAF8] = LoadFileSHP(MEMORY[0x844CE8], (bool *)&MEMORY[0xB0FC9A]); /*0x72e0fa*/
    MEMORY[0xB0FA74] = LoadFileSHP(MEMORY[0x844CEC], (bool *)&MEMORY[0xB0FC9B]); /*0x72e10f*/
    MEMORY[0xB0FA38] = LoadFileSHP(MEMORY[0x844CF0], (bool *)&MEMORY[0xB0FC9C]); /*0x72e124*/
    MEMORY[0xB0FAE8] = LoadFileSHP(MEMORY[0x844CF4], (bool *)&MEMORY[0xB0FC9D]); /*0x72e139*/
    MEMORY[0xB0FA54] = LoadFileSHP(MEMORY[0x844CF8], (bool *)&MEMORY[0xB0FC9E]); /*0x72e153*/
    LoadPaletteSimple(MEMORY[0x844BE4], &MEMORY[0xB0FBC8], &MEMORY[0xB0FBCC]); /*0x72e158*/
    LoadPaletteSimple(MEMORY[0x844BE8], &MEMORY[0xB0FBD0], &MEMORY[0xB0FBD4]); /*0x72e16d*/
    LoadPaletteSimple(MEMORY[0x844BEC], &MEMORY[0xB0FBD8], &MEMORY[0xB0FBDC]); /*0x72e182*/
    result = SetupMouseClassResources(MEMORY[0x8A00A4], MEMORY[0x8A00A8]); /*0x72e193*/
    MEMORY[0xB0FBE0] = 1; /*0x72e198*/
  }
  return result; /*0x72e19f*/
}
}
} // namespace gamemd

// 0x72E270
namespace gamemd {
CCINIClass * sub_72E270()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *sub_72E270()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20388]; /*0x72e275*/
}
}
} // namespace gamemd

// 0x72E290
namespace gamemd {
CCINIClass * sub_72E290()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *sub_72E290()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20396]; /*0x72e295*/
}
}
} // namespace gamemd

// 0x72E2B0
namespace gamemd {
CCINIClass * sub_72E2B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *sub_72E2B0()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20404]; /*0x72e2b5*/
}
}
} // namespace gamemd

// 0x72E2D0
namespace gamemd {
int DrawScoreScreenStats(ConvertClass * aP0, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall DrawScoreScreenStats(ConvertClass *aP0, int a2)
{
  ObjectClass *result; // eax
  int v5; // edi
  int v6; // ebp
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // edx
  int v15; // [esp+4Ch] [ebp-18h]
  int v16; // [esp+50h] [ebp-14h]
  int v17; // [esp+54h] [ebp-10h] BYREF
  int v18; // [esp+58h] [ebp-Ch]
  int v19; // [esp+5Ch] [ebp-8h]
  int v20; // [esp+60h] [ebp-4h]

  result = *(ObjectClass **)&stru_89E138.__pad_14B0[2748]; /*0x72e2d0*/
  if ( *(int *)&stru_89E138.__pad_14B0[2748] >= 1024 ) /*0x72e2e3*/
  {
    v5 = **(_DWORD **)&stru_B05488.__pad_579C[20472]; /*0x72e2fc*/
    v6 = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20472] + 4); /*0x72e300*/
    v15 = **(_DWORD **)&stru_B05488.__pad_579C[20476] + *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20476] + 8); /*0x72e309*/
    v7 = *(_DWORD *)aP0->__pad_0; /*0x72e315*/
    v16 = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20488] + 4) /*0x72e317*/
        + *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20488] + 12);
    v17 = 0; /*0x72e31d*/
    v18 = 0; /*0x72e321*/
    v19 = v5; /*0x72e32e*/
    v20 = v6; /*0x72e332*/
    (*(void (__thiscall **)(ConvertClass *, int *, int, _DWORD))(v7 + 16))(aP0, &v17, a2, 0); /*0x72e336*/
    v8 = *(_DWORD *)aP0->__pad_0; /*0x72e339*/
    v18 = 0; /*0x72e342*/
    v19 = 800; /*0x72e34b*/
    v17 = v5; /*0x72e353*/
    v20 = v6; /*0x72e357*/
    (*(void (__thiscall **)(ConvertClass *, int *, int, _DWORD))(v8 + 16))(aP0, &v17, a2, 0); /*0x72e35b*/
    v9 = *(_DWORD *)aP0->__pad_0; /*0x72e35e*/
    v18 = 0; /*0x72e366*/
    v17 = v15; /*0x72e36f*/
    v19 = v5; /*0x72e377*/
    v20 = v6; /*0x72e37b*/
    (*(void (__thiscall **)(ConvertClass *, int *, int, _DWORD))(v9 + 16))(aP0, &v17, a2, 0); /*0x72e37f*/
    v10 = *(_DWORD *)aP0->__pad_0; /*0x72e382*/
    v20 = 600; /*0x72e38d*/
    v17 = v15; /*0x72e397*/
    v18 = v6; /*0x72e39f*/
    v19 = v5; /*0x72e3a3*/
    (*(void (__thiscall **)(ConvertClass *, int *, int, _DWORD))(v10 + 16))(aP0, &v17, a2, 0); /*0x72e3a7*/
    v19 = v5; /*0x72e3af*/
    v17 = v15; /*0x72e3bb*/
    v20 = 600; /*0x72e3c5*/
    v11 = *(_DWORD *)aP0->__pad_0; /*0x72e3c9*/
    v18 = v16; /*0x72e3cf*/
    (*(void (__thiscall **)(ConvertClass *, int *, int, _DWORD))(v11 + 16))(aP0, &v17, a2, 0); /*0x72e3d3*/
    v19 = 800; /*0x72e3e5*/
    v12 = *(_DWORD *)aP0->__pad_0; /*0x72e3e9*/
    v17 = v5; /*0x72e3ef*/
    v18 = v16; /*0x72e3f3*/
    v20 = v6; /*0x72e3f7*/
    (*(void (__thiscall **)(ConvertClass *, int *, int, _DWORD))(v12 + 16))(aP0, &v17, a2, 0); /*0x72e3fb*/
    v17 = 0; /*0x72e40a*/
    v13 = *(_DWORD *)aP0->__pad_0; /*0x72e40e*/
    v18 = v16; /*0x72e414*/
    v19 = v5; /*0x72e418*/
    v20 = v6; /*0x72e41c*/
    (*(void (__thiscall **)(ConvertClass *, int *, int, _DWORD))(v13 + 16))(aP0, &v17, a2, 0); /*0x72e420*/
    v14 = *(_DWORD *)aP0->__pad_0; /*0x72e423*/
    v17 = 0; /*0x72e42c*/
    v20 = 600; /*0x72e435*/
    v18 = v6; /*0x72e43d*/
    v19 = v5; /*0x72e441*/
    return (*(int (__thiscall **)(ConvertClass *, int *, int, _DWORD))(v14 + 16))(aP0, &v17, a2, 0); /*0x72e445*/
  }
  return (int)result->__pad_0; /*0x72e44a*/
}
}
} // namespace gamemd

// 0x72E450
namespace gamemd {
void RenderScoreScreen(ConvertClass * a1, int * a2, char a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall RenderScoreScreen(ConvertClass *a1, int *a2, char a3)
{
  int v5; // ecx
  int v6; // eax
  int v7; // edi
  int v8; // edi
  int v9; // eax
  int v10; // edi
  int v11; // [esp+8h] [ebp-18h] BYREF
  int i; // [esp+Ch] [ebp-14h]
  _DWORD v13[2]; // [esp+10h] [ebp-10h] BYREF
  int v14; // [esp+18h] [ebp-8h]
  int v15; // [esp+1Ch] [ebp-4h]

  if ( !stru_B05488.__pad_579C[20412] ) /*0x72e460*/
  {
    AssetClass::ReleaseAndReload(); /*0x72e462*/
    Render_Render_72EB50(); /*0x72e467*/
    LoadPaletteSimple( /*0x72e47c*/
      *(char **)&stru_830620.__pad_579C[60968],
      &stru_B05488.__pad_579C[20388],
      &stru_B05488.__pad_579C[20392]);
    LoadPaletteSimple( /*0x72e491*/
      *(char **)&stru_830620.__pad_579C[60972],
      &stru_B05488.__pad_579C[20396],
      &stru_B05488.__pad_579C[20400]);
    LoadPaletteSimple( /*0x72e4a6*/
      *(char **)&stru_830620.__pad_579C[60976],
      &stru_B05488.__pad_579C[20404],
      &stru_B05488.__pad_579C[20408]);
    SetupMouseClassResources(*(int *)&stru_89E138.__pad_14B0[2748], *(int *)&stru_89E138.__pad_14B0[2752]); /*0x72e4b7*/
    stru_B05488.__pad_579C[20412] = 1; /*0x72e4bc*/
  }
  DrawScoreScreenStats(a1, (int)a2); /*0x72e4c9*/
  v5 = a2[1]; /*0x72e4d0*/
  v13[0] = *a2; /*0x72e4d3*/
  v6 = a2[2]; /*0x72e4d7*/
  v7 = a2[3]; /*0x72e4da*/
  v11 = 0; /*0x72e4e4*/
  i = 0; /*0x72e4e8*/
  v13[1] = v5; /*0x72e4ec*/
  v14 = v6; /*0x72e4f0*/
  v15 = v7; /*0x72e4f4*/
  if ( v6 > 800 ) /*0x72e4f8*/
    v14 = (v6 - 800) / 2 + 800; /*0x72e509*/
  if ( v7 > 600 ) /*0x72e513*/
    v15 = (v7 - 600) / 2 + 600; /*0x72e525*/
  v11 = **(_DWORD **)&stru_B05488.__pad_579C[20476]; /*0x72e537*/
  i = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20476] + 4); /*0x72e53e*/
  DrawToSurfaceSHP( /*0x72e56a*/
    (int)a1,
    *(int *)&stru_B05488.__pad_579C[20392],
    *(ConvertClass **)&stru_B05488.__pad_579C[20180],
    0,
    (ConvertClass *)&v11,
    (ConvertClass *)v13,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
  v8 = 0; /*0x72e574*/
  v11 = **(_DWORD **)&stru_B05488.__pad_579C[20480]; /*0x72e578*/
  v9 = *(_DWORD *)&stru_B05488.__pad_579C[19964]; /*0x72e57f*/
  for ( i = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20480] + 4); /*0x72e58a*/
        v8 < *(int *)&stru_B05488.__pad_579C[19964];
        v9 = *(_DWORD *)&stru_B05488.__pad_579C[19964] )
  {
    DrawToSurfaceSHP( /*0x72e5c1*/
      (int)a1,
      *(int *)&stru_B05488.__pad_579C[20400],
      *(ConvertClass **)&stru_B05488.__pad_579C[20048],
      0,
      (ConvertClass *)&v11,
      (ConvertClass *)v13,
      (ConvertClass *)0x400,
      0,
      0,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
    ++v8; /*0x72e5d4*/
    i += *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20480] + 12); /*0x72e5d5*/
  }
  if ( !a3 ) /*0x72e5e8*/
  {
    v10 = 0; /*0x72e5f0*/
    v11 = **(_DWORD **)&stru_B05488.__pad_579C[20460]; /*0x72e5f6*/
    i = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20460] + 4); /*0x72e5fd*/
    if ( v9 > 0 ) /*0x72e601*/
    {
      do /*0x72e65a*/
      {
        DrawToSurfaceSHP( /*0x72e63a*/
          (int)a1,
          *(int *)&stru_B05488.__pad_579C[20408],
          *(ConvertClass **)&stru_B05488.__pad_579C[20128],
          0xAu,
          (ConvertClass *)&v11,
          (ConvertClass *)v13,
          (ConvertClass *)0x400,
          0,
          0,
          0,
          (ConvertClass *)0x3E8,
          0,
          0,
          0,
          0,
          0);
        ++v10; /*0x72e653*/
        i += *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20460] + 12); /*0x72e654*/
      }
      while ( v10 < *(int *)&stru_B05488.__pad_579C[19964] ); /*0x72e65a*/
    }
  }
  v11 = **(_DWORD **)&stru_B05488.__pad_579C[20484]; /*0x72e663*/
  i = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20484] + 4); /*0x72e688*/
  DrawToSurfaceSHP( /*0x72e69f*/
    (int)a1,
    *(int *)&stru_B05488.__pad_579C[20392],
    *(ConvertClass **)&stru_B05488.__pad_579C[19988],
    0,
    (ConvertClass *)&v11,
    (ConvertClass *)v13,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
  v11 = **(_DWORD **)&stru_B05488.__pad_579C[20488]; /*0x72e6ad*/
  i = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20488] + 4); /*0x72e6b9*/
  if ( *(_DWORD *)&stru_89E138.__pad_14B0[2748] == 640 ) /*0x72e6c2*/
    DrawToSurfaceSHP( /*0x72e6ec*/
      (int)a1,
      *(int *)&stru_B05488.__pad_579C[20392],
      *(ConvertClass **)&stru_B05488.__pad_579C[20164],
      0,
      (ConvertClass *)&v11,
      (ConvertClass *)v13,
      (ConvertClass *)0x400,
      0,
      0,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
  else
    DrawToSurfaceSHP( /*0x72e71f*/
      (int)a1,
      *(int *)&stru_B05488.__pad_579C[20392],
      *(ConvertClass **)&stru_B05488.__pad_579C[20016],
      0,
      (ConvertClass *)&v11,
      (ConvertClass *)v13,
      (ConvertClass *)0x400,
      0,
      0,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
}
}
} // namespace gamemd

// 0x72E990
namespace gamemd {
void sub_72E990(int a1, ConvertClass * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall sub_72E990(int a1, ConvertClass *a2)
{
  int v2; // [esp+8h] [ebp-8h] BYREF
  int v3; // [esp+Ch] [ebp-4h]

  v2 = 0; /*0x72e99c*/
  v3 = 0; /*0x72e9a0*/
  v2 = **(_DWORD **)&stru_B05488.__pad_579C[20472]; /*0x72e9a7*/
  v3 = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20472] + 4); /*0x72e9ae*/
  DrawToSurfaceSHP( /*0x72e9d8*/
    a1,
    *(int *)&stru_B05488.__pad_579C[20356],
    *(ConvertClass **)&stru_B05488.__pad_579C[20240],
    0,
    (ConvertClass *)&v2,
    a2,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
}
}
} // namespace gamemd

// 0x72EA70
namespace gamemd {
void sub_72EA70(int a1, ConvertClass * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall sub_72EA70(int a1, ConvertClass *a2)
{
  int v2; // [esp+8h] [ebp-8h] BYREF
  int v3; // [esp+Ch] [ebp-4h]

  v2 = 0; /*0x72ea7c*/
  v3 = 0; /*0x72ea80*/
  v2 = **(_DWORD **)&stru_B05488.__pad_579C[20472]; /*0x72ea87*/
  v3 = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20472] + 4); /*0x72ea8e*/
  DrawToSurfaceSHP( /*0x72eab8*/
    a1,
    *(int *)&stru_B05488.__pad_579C[20368],
    *(ConvertClass **)&stru_B05488.__pad_579C[20216],
    0,
    (ConvertClass *)&v2,
    a2,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
}
}
} // namespace gamemd

// 0x72EC70
namespace gamemd {
int * MouseClass_SetupResources(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__fastcall MouseClass_SetupResources(int a1, int a2)
{
  int v2; // edi
  int v3; // ebx
  int v4; // esi
  int *v5; // eax
  int v6; // ebp
  int v7; // ebx
  int v8; // esi
  _DWORD *v9; // eax
  int v10; // ebx
  _DWORD *v11; // eax
  int v12; // ebx
  int v13; // edi
  _DWORD *v14; // eax
  int v15; // edi
  int v16; // ebx
  int v17; // ebp
  int v18; // esi
  int *v19; // eax
  int v20; // ebp
  int v21; // ebx
  int v22; // esi
  _DWORD *v23; // eax
  int v24; // ecx
  int v25; // esi
  int v26; // ebp
  int v27; // edi
  _DWORD *v28; // eax
  int v29; // edi
  int v30; // esi
  int *result; // eax
  bool v32; // [esp+12h] [ebp-12h]
  bool v33; // [esp+13h] [ebp-11h]
  int v34; // [esp+14h] [ebp-10h]
  int v35; // [esp+18h] [ebp-Ch]
  int v36; // [esp+1Ch] [ebp-8h]
  int v37; // [esp+20h] [ebp-4h]

  v35 = 0; /*0x72ec81*/
  v34 = a1; /*0x72ec85*/
  if ( a1 >= 1024 ) /*0x72ec89*/
  {
    v35 = (a1 - 800) / 2; /*0x72ec9a*/
    v34 = a1 - v35; /*0x72ec9e*/
  }
  v2 = 0; /*0x72eca2*/
  v37 = a2; /*0x72ecaa*/
  v36 = a2; /*0x72ecae*/
  if ( a2 >= 768 ) /*0x72ecb2*/
  {
    v2 = (a2 - 600) / 2; /*0x72ecc1*/
    v37 = a2 - v2; /*0x72ecc5*/
    v36 = a2 - 2 * v2; /*0x72ecd2*/
  }
  v32 = a1 == 640; /*0x72eceb*/
  v33 = a2 == 480; /*0x72ecf9*/
  if ( a1 == 640 ) /*0x72ecfd*/
    v3 = *((__int16 *)MEMORY[0xB0FB50] + 1); /*0x72ecff*/
  else
    v3 = *((__int16 *)MEMORY[0xB0FA04] + 1); /*0x72ed05*/
  if ( a2 == 480 ) /*0x72ed0b*/
    v4 = *((__int16 *)MEMORY[0xB0FB50] + 2); /*0x72ed0d*/
  else
    v4 = *((__int16 *)MEMORY[0xB0FA04] + 2); /*0x72ed13*/
  v5 = (int *)__2_YAPAXI_Z(0x10u); /*0x72ed19*/
  if ( v5 ) /*0x72ed23*/
  {
    v5[1] = v2; /*0x72ed29*/
    *v5 = v35; /*0x72ed2c*/
    v5[2] = v3; /*0x72ed2e*/
    v5[3] = v4; /*0x72ed31*/
    MEMORY[0xB0FC1C] = v5; /*0x72ed34*/
  }
  else
  {
    MEMORY[0xB0FC1C] = 0; /*0x72ed3b*/
  }
  v6 = *((__int16 *)MEMORY[0xB0FAF8] + 1); /*0x72ed4c*/
  v7 = *((__int16 *)MEMORY[0xB0FAF8] + 2); /*0x72ed50*/
  v8 = v34 - v6; /*0x72ed54*/
  v9 = __2_YAPAXI_Z(0x10u); /*0x72ed56*/
  if ( v9 ) /*0x72ed60*/
  {
    *v9 = v8; /*0x72ed62*/
    v9[1] = v2; /*0x72ed64*/
    v9[2] = v6; /*0x72ed67*/
    v9[3] = v7; /*0x72ed6a*/
    MEMORY[0xB0FC20] = v9; /*0x72ed6d*/
  }
  else
  {
    MEMORY[0xB0FC20] = 0; /*0x72ed74*/
  }
  v10 = *((__int16 *)MEMORY[0xB0FAC0] + 2); /*0x72ed86*/
  v11 = __2_YAPAXI_Z(0x10u); /*0x72ed8a*/
  if ( v11 ) /*0x72ed94*/
  {
    *v11 = v8; /*0x72ed96*/
    v11[1] = v2; /*0x72ed98*/
    v11[2] = v6; /*0x72ed9b*/
    v11[3] = v10; /*0x72ed9e*/
    MEMORY[0xB0FC18] = v11; /*0x72eda1*/
  }
  else
  {
    MEMORY[0xB0FC18] = 0; /*0x72eda8*/
  }
  v12 = v2 + *((_DWORD *)MEMORY[0xB0FC20] + 3); /*0x72edc2*/
  v13 = *((__int16 *)MEMORY[0xB0FA74] + 2); /*0x72edc4*/
  v14 = __2_YAPAXI_Z(0x10u); /*0x72edc8*/
  if ( v14 ) /*0x72edd2*/
  {
    *v14 = v8; /*0x72edd4*/
    v14[1] = v12; /*0x72edd6*/
    v14[2] = v6; /*0x72edd9*/
    v14[3] = v13; /*0x72eddc*/
  }
  else
  {
    v14 = 0; /*0x72ede1*/
  }
  MEMORY[0xB0FC24] = v14; /*0x72ede9*/
  v15 = v14[1]; /*0x72edf1*/
  v16 = *((__int16 *)MEMORY[0xB0FAC4] + 1); /*0x72edf4*/
  v17 = *((__int16 *)MEMORY[0xB0FAC4] + 2); /*0x72edf8*/
  v18 = *v14 + v14[2] - v16; /*0x72ee02*/
  v19 = (int *)__2_YAPAXI_Z(0x10u); /*0x72ee04*/
  if ( v19 ) /*0x72ee0e*/
  {
    *v19 = v18; /*0x72ee10*/
    v19[1] = v15; /*0x72ee12*/
    v19[2] = v16; /*0x72ee15*/
    v19[3] = v17; /*0x72ee18*/
    MEMORY[0xB0FC10] = v19; /*0x72ee1b*/
  }
  else
  {
    MEMORY[0xB0FC10] = 0; /*0x72ee22*/
  }
  v20 = *((__int16 *)MEMORY[0xB0F9DC] + 1); /*0x72ee33*/
  v21 = *((__int16 *)MEMORY[0xB0F9DC] + 2); /*0x72ee37*/
  v22 = *((_DWORD *)MEMORY[0xB0FC24] + 1) + *((_DWORD *)MEMORY[0xB0FC24] + 3) - v21; /*0x72ee48*/
  v23 = __2_YAPAXI_Z(0x10u); /*0x72ee4a*/
  if ( v23 ) /*0x72ee54*/
  {
    v23[1] = v22; /*0x72ee5a*/
    v23[2] = v20; /*0x72ee5f*/
    *v23 = v34 - v20; /*0x72ee62*/
    v23[3] = v21; /*0x72ee64*/
    MEMORY[0xB0FC14] = v23; /*0x72ee67*/
  }
  else
  {
    MEMORY[0xB0FC14] = 0; /*0x72ee6e*/
  }
  MEMORY[0xB0FA20] = (v36 - *((_DWORD *)MEMORY[0xB0FC20] + 3)) / *((_DWORD *)MEMORY[0xB0FC24] + 3); /*0x72ee95*/
  v24 = MEMORY[0xB0FA20] * *((_DWORD *)MEMORY[0xB0FC24] + 3); /*0x72ee9d*/
  v25 = v24 + *((_DWORD *)MEMORY[0xB0FC20] + 3); /*0x72eeab*/
  v26 = *((__int16 *)MEMORY[0xB0FA38] + 1); /*0x72eead*/
  v27 = v24 + *((_DWORD *)MEMORY[0xB0FC24] + 1); /*0x72eeb1*/
  v28 = __2_YAPAXI_Z(0x10u); /*0x72eeb3*/
  if ( v28 ) /*0x72eebd*/
  {
    v28[1] = v27; /*0x72eec3*/
    *v28 = v34 - v26; /*0x72eeca*/
    v28[2] = v26; /*0x72eecc*/
    v28[3] = v36 - v25; /*0x72eecf*/
    MEMORY[0xB0FC28] = v28; /*0x72eed2*/
  }
  else
  {
    MEMORY[0xB0FC28] = 0; /*0x72eed9*/
  }
  if ( v32 ) /*0x72eef4*/
    v29 = *((__int16 *)MEMORY[0xB0FAE8] + 1); /*0x72eef6*/
  else
    v29 = *((__int16 *)MEMORY[0xB0FA54] + 1); /*0x72eefc*/
  if ( v33 ) /*0x72ef06*/
    v30 = *((__int16 *)MEMORY[0xB0FAE8] + 2); /*0x72ef08*/
  else
    v30 = *((__int16 *)MEMORY[0xB0FA54] + 2); /*0x72ef0e*/
  result = (int *)__2_YAPAXI_Z(0x10u); /*0x72ef14*/
  if ( result ) /*0x72ef1e*/
  {
    result[2] = v29; /*0x72ef24*/
    *result = v35; /*0x72ef27*/
    result[3] = v30; /*0x72ef2f*/
    result[1] = v37 - v30; /*0x72ef34*/
    MEMORY[0xB0FC2C] = result; /*0x72ef38*/
  }
  else
  {
    MEMORY[0xB0FC2C] = 0; /*0x72ef45*/
  }
  return result; /*0x72ef32*/
}
}
} // namespace gamemd

// 0x72F4C0
namespace gamemd {
CCINIClass * sub_72F4C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *sub_72F4C0()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20448]; /*0x72f4c5*/
}
}
} // namespace gamemd

// 0x72F4F0
namespace gamemd {
int sub_72F4F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_72F4F0()
{
  return MEMORY[0xB0FC00]; /*0x72f4f5*/
}
}
} // namespace gamemd

// 0x72F500
namespace gamemd {
CCINIClass * sub_72F500()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *sub_72F500()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20432]; /*0x72f505*/
}
}
} // namespace gamemd

// 0x72F520
namespace gamemd {
CCINIClass * sub_72F520()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *sub_72F520()
{
  return *(CCINIClass **)&stru_B05488.__pad_579C[20424]; /*0x72f525*/
}
}
} // namespace gamemd

// 0x72F530
namespace gamemd {
int sub_72F530()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_72F530()
{
  return MEMORY[0xB0FBF0]; /*0x72f535*/
}
}
} // namespace gamemd

// 0x72F540
namespace gamemd {
void RenderCreditsScreen(int a1, ConvertClass * a2, char a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall RenderCreditsScreen(int a1, ConvertClass *a2, char a3)
{
  int v5; // ebp
  int v6; // edx
  int v7; // ebp
  int v8; // [esp+10h] [ebp-28h] BYREF
  int i; // [esp+14h] [ebp-24h]
  _DWORD v10[2]; // [esp+18h] [ebp-20h] BYREF
  int v11; // [esp+20h] [ebp-18h]
  int v12; // [esp+24h] [ebp-14h]
  int v13; // [esp+28h] [ebp-10h]
  int v14; // [esp+2Ch] [ebp-Ch]
  int v15; // [esp+34h] [ebp-4h]

  if ( !stru_B05488.__pad_579C[20456] ) /*0x72f552*/
  {
    LoadingScreen::LoadSHPs(); /*0x72f554*/
    Sides::MixFileYuriFiles3(); /*0x72f559*/
    SetupScreenBuffers(*(int *)&HouseClass_Player.__pad_5568[22736], *(int *)&HouseClass_Player.__pad_5568[22740]); /*0x72f56a*/
    stru_B05488.__pad_579C[20456] = 1; /*0x72f56f*/
  }
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 24))(a1, 0); /*0x72f57d*/
  v8 = 0; /*0x72f585*/
  i = 0; /*0x72f589*/
  v8 = **(_DWORD **)&stru_B05488.__pad_579C[20492]; /*0x72f58f*/
  i = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20492] + 4); /*0x72f59b*/
  if ( *(_DWORD *)&stru_89E138.__pad_14B0[2748] == 640 ) /*0x72f5a4*/
  {
    DrawToSurfaceSHP( /*0x72f5ca*/
      a1,
      *(int *)&stru_B05488.__pad_579C[20428],
      *(ConvertClass **)&stru_B05488.__pad_579C[20144],
      0,
      (ConvertClass *)&v8,
      a2,
      (ConvertClass *)0x400,
      0,
      0,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
  }
  else if ( *(_DWORD *)&stru_89E138.__pad_14B0[2748] == 800 ) /*0x72f5d1*/
  {
    DrawToSurfaceSHP( /*0x72f5f6*/
      a1,
      *(int *)&stru_B05488.__pad_579C[20428],
      *(ConvertClass **)&stru_B05488.__pad_579C[20132],
      0,
      (ConvertClass *)&v8,
      a2,
      (ConvertClass *)0x400,
      0,
      0,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
  }
  else
  {
    DrawToSurfaceSHP( /*0x72f624*/
      a1,
      *(int *)&stru_B05488.__pad_579C[20428],
      *(ConvertClass **)&stru_B05488.__pad_579C[20012],
      0,
      (ConvertClass *)&v8,
      a2,
      (ConvertClass *)0x400,
      0,
      0,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
  }
  v8 = **(_DWORD **)&stru_B05488.__pad_579C[20496]; /*0x72f630*/
  i = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20496] + 4); /*0x72f65a*/
  DrawToSurfaceSHP( /*0x72f667*/
    a1,
    *(int *)&stru_B05488.__pad_579C[20420],
    *(ConvertClass **)&stru_B05488.__pad_579C[20196],
    0,
    (ConvertClass *)&v8,
    a2,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
  v8 = **(_DWORD **)&stru_B05488.__pad_579C[20500]; /*0x72f67a*/
  i = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20500] + 4); /*0x72f681*/
  DrawToSurfaceSHP( /*0x72f6aa*/
    a1,
    *(int *)&stru_B05488.__pad_579C[20420],
    *(ConvertClass **)&stru_B05488.__pad_579C[19900],
    0,
    (ConvertClass *)&v8,
    a2,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
  v8 = **(_DWORD **)&stru_B05488.__pad_579C[20504]; /*0x72f6b6*/
  i = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20504] + 4); /*0x72f6e0*/
  DrawToSurfaceSHP( /*0x72f6ed*/
    a1,
    *(int *)&stru_B05488.__pad_579C[20436],
    *(ConvertClass **)&stru_B05488.__pad_579C[20036],
    0,
    (ConvertClass *)&v8,
    a2,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
  v8 = **(_DWORD **)&stru_B05488.__pad_579C[20512]; /*0x72f700*/
  i = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20512] + 4); /*0x72f707*/
  DrawToSurfaceSHP( /*0x72f730*/
    a1,
    *(int *)&stru_B05488.__pad_579C[20420],
    *(ConvertClass **)&stru_B05488.__pad_579C[20044],
    0,
    (ConvertClass *)&v8,
    a2,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
  v5 = 0; /*0x72f73a*/
  v8 = **(_DWORD **)&stru_B05488.__pad_579C[20516]; /*0x72f73e*/
  for ( i = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20516] + 4); /*0x72f750*/
        v5 < *(int *)&stru_B05488.__pad_579C[20152];
        i += *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20516] + 12) )
  {
    DrawToSurfaceSHP( /*0x72f77d*/
      a1,
      *(int *)&stru_B05488.__pad_579C[20420],
      *(ConvertClass **)&stru_B05488.__pad_579C[19932],
      0,
      (ConvertClass *)&v8,
      a2,
      (ConvertClass *)0x400,
      0,
      0,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
    ++v5; /*0x72f796*/
  }
  v8 = **(_DWORD **)&stru_B05488.__pad_579C[20520]; /*0x72f7a6*/
  i = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20520] + 4); /*0x72f7d0*/
  DrawToSurfaceSHP( /*0x72f7dd*/
    a1,
    *(int *)&stru_B05488.__pad_579C[20420],
    *(ConvertClass **)&stru_B05488.__pad_579C[20072],
    0,
    (ConvertClass *)&v8,
    a2,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
  v8 = **(_DWORD **)&stru_B05488.__pad_579C[20524]; /*0x72f7ec*/
  i = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20524] + 4); /*0x72f7f3*/
  DrawToSurfaceSHP( /*0x72f820*/
    a1,
    *(int *)&stru_B05488.__pad_579C[20420],
    *(ConvertClass **)&stru_B05488.__pad_579C[20004],
    0,
    (ConvertClass *)&v8,
    a2,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
  v10[0] = *(_DWORD *)a2->__pad_0; /*0x72f829*/
  v10[1] = *(_DWORD *)&a2->field_2[2]; /*0x72f830*/
  v11 = *(_DWORD *)&a2->__pad_6[2]; /*0x72f837*/
  v6 = *(_DWORD *)&a2->__pad_6[6]; /*0x72f841*/
  v13 = *(_DWORD *)&stru_87C374.__pad_579C[21664]; /*0x72f849*/
  v12 = v6; /*0x72f857*/
  v11 = *(_DWORD *)&stru_87C374.__pad_579C[21672] - 168; /*0x72f861*/
  v14 = *(_DWORD *)&stru_87C374.__pad_579C[21668]; /*0x72f86a*/
  v15 = *(_DWORD *)&stru_87C374.__pad_579C[21676]; /*0x72f86e*/
  v8 = **(_DWORD **)&stru_B05488.__pad_579C[20536]; /*0x72f874*/
  i = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20536] + 4); /*0x72f882*/
  DrawToSurfaceSHP( /*0x72f8b0*/
    a1,
    *(int *)&stru_B05488.__pad_579C[20420],
    *(ConvertClass **)&stru_B05488.__pad_579C[19992],
    0,
    (ConvertClass *)&v8,
    (ConvertClass *)v10,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
  if ( a3 ) /*0x72f8bb*/
  {
    v8 = **(_DWORD **)&stru_B05488.__pad_579C[20540]; /*0x72f8c8*/
    i = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20540] + 4); /*0x72f8f3*/
    DrawToSurfaceSHP( /*0x72f900*/
      a1,
      *(int *)&stru_B05488.__pad_579C[20420],
      *(ConvertClass **)&stru_B05488.__pad_579C[20076],
      2u,
      (ConvertClass *)&v8,
      a2,
      (ConvertClass *)0x400,
      0,
      0,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
    v7 = 0; /*0x72f90a*/
    v8 = **(_DWORD **)&stru_B05488.__pad_579C[20548]; /*0x72f90e*/
    for ( i = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20548] + 4); /*0x72f920*/
          v7 < *(int *)&stru_B05488.__pad_579C[19904];
          v8 += *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20548] + 8) )
    {
      DrawToSurfaceSHP( /*0x72f952*/
        a1,
        *(int *)&stru_B05488.__pad_579C[20420],
        *(ConvertClass **)&stru_B05488.__pad_579C[20100],
        0,
        (ConvertClass *)&v8,
        a2,
        (ConvertClass *)0x400,
        0,
        0,
        0,
        (ConvertClass *)0x3E8,
        0,
        0,
        0,
        0,
        0);
      ++v7; /*0x72f96a*/
    }
  }
  else
  {
    v8 = **(_DWORD **)&stru_B05488.__pad_579C[20544]; /*0x72f97f*/
    i = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20544] + 4); /*0x72f986*/
    DrawToSurfaceSHP( /*0x72f9b4*/
      a1,
      *(int *)&stru_B05488.__pad_579C[20420],
      *(ConvertClass **)&stru_B05488.__pad_579C[20076],
      2u,
      (ConvertClass *)&v8,
      a2,
      (ConvertClass *)0x400,
      0,
      0,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
  }
  v8 = **(_DWORD **)&stru_B05488.__pad_579C[20552]; /*0x72f9c0*/
  i = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[20552] + 4); /*0x72f9ea*/
  DrawToSurfaceSHP( /*0x72f9f7*/
    a1,
    *(int *)&stru_B05488.__pad_579C[20420],
    *(ConvertClass **)&stru_B05488.__pad_579C[20120],
    0,
    (ConvertClass *)&v8,
    a2,
    (ConvertClass *)0x400,
    0,
    0,
    0,
    (ConvertClass *)0x3E8,
    0,
    0,
    0,
    0,
    0);
}
}
} // namespace gamemd

// 0x72FC60
namespace gamemd {
unsigned int * Screen_SetupBuffers(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__fastcall Screen_SetupBuffers(int a1, int a2)
{
  __int16 *v3; // eax
  int v4; // esi
  int v5; // ebx
  _DWORD *v6; // eax
  int v7; // ebx
  int v8; // esi
  int v9; // edi
  _DWORD *v10; // eax
  int v11; // ebp
  _DWORD *v12; // eax
  int v13; // esi
  int v14; // ebp
  _DWORD *v15; // eax
  int v16; // esi
  int v17; // ebp
  _DWORD *v18; // eax
  int v19; // esi
  int v20; // ebp
  _DWORD *v21; // eax
  int v22; // ebp
  _DWORD *v23; // eax
  int v24; // ebp
  _DWORD *v25; // eax
  int v26; // esi
  int v27; // ecx
  int v28; // esi
  int v29; // edi
  _DWORD *v30; // eax
  int v31; // edi
  int v32; // ebx
  _DWORD *v33; // eax
  int v34; // edi
  int v35; // ebx
  _DWORD *v36; // eax
  _DWORD *v37; // eax
  int v38; // edi
  int v39; // ebx
  _DWORD *v40; // eax
  int v41; // edi
  int v42; // ebx
  int *v43; // eax
  int *v44; // ecx
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // edi
  int v50; // ebx
  int v51; // ebp
  int v52; // esi
  _DWORD *v53; // eax
  int v54; // edi
  int v55; // ebx
  int v56; // ebp
  int v57; // esi
  _DWORD *result; // eax

  if ( a1 == 640 ) /*0x72fc77*/
  {
    v3 = (__int16 *)MEMORY[0xB0FAD4]; /*0x72fc79*/
  }
  else
  {
    v3 = (__int16 *)MEMORY[0xB0FAC8]; /*0x72fc80*/
    if ( a1 != 800 ) /*0x72fc8b*/
      v3 = (__int16 *)MEMORY[0xB0FA50]; /*0x72fc8d*/
  }
  v4 = v3[1]; /*0x72fc92*/
  v5 = v3[2]; /*0x72fc96*/
  v6 = __2_YAPAXI_Z(0x10u); /*0x72fc9c*/
  if ( v6 ) /*0x72fca8*/
  {
    *v6 = 0; /*0x72fcaa*/
    v6[1] = 0; /*0x72fcac*/
    v6[2] = v4; /*0x72fcaf*/
    v6[3] = v5; /*0x72fcb2*/
    MEMORY[0xB0FC30] = v6; /*0x72fcb5*/
  }
  else
  {
    MEMORY[0xB0FC30] = 0; /*0x72fcbc*/
  }
  v7 = *((__int16 *)MEMORY[0xB0FB08] + 1); /*0x72fcc9*/
  v8 = *((__int16 *)MEMORY[0xB0FB08] + 2); /*0x72fccd*/
  v9 = a1 - v7; /*0x72fcd1*/
  v10 = __2_YAPAXI_Z(0x10u); /*0x72fcd3*/
  if ( v10 ) /*0x72fcdd*/
  {
    *v10 = v9; /*0x72fcdf*/
    v10[1] = 0; /*0x72fce1*/
    v10[2] = v7; /*0x72fce4*/
    v10[3] = v8; /*0x72fce7*/
    MEMORY[0xB0FC34] = v10; /*0x72fcea*/
  }
  else
  {
    MEMORY[0xB0FC34] = 0; /*0x72fcf1*/
  }
  v11 = *((__int16 *)MEMORY[0xB0F9E0] + 2); /*0x72fcfe*/
  v12 = __2_YAPAXI_Z(0x10u); /*0x72fd02*/
  if ( v12 ) /*0x72fd0c*/
  {
    *v12 = v9; /*0x72fd0e*/
    v12[1] = v8; /*0x72fd10*/
    v12[2] = v7; /*0x72fd13*/
    v12[3] = v11; /*0x72fd16*/
    MEMORY[0xB0FC38] = v12; /*0x72fd19*/
  }
  else
  {
    MEMORY[0xB0FC38] = 0; /*0x72fd20*/
  }
  v13 = v11 + v8; /*0x72fd30*/
  v14 = *((__int16 *)MEMORY[0xB0FA68] + 2); /*0x72fd34*/
  v15 = __2_YAPAXI_Z(0x10u); /*0x72fd38*/
  if ( v15 ) /*0x72fd42*/
  {
    *v15 = v9; /*0x72fd44*/
    v15[1] = v13; /*0x72fd46*/
    v15[2] = v7; /*0x72fd49*/
    v15[3] = v14; /*0x72fd4c*/
    MEMORY[0xB0FC3C] = v15; /*0x72fd4f*/
  }
  else
  {
    MEMORY[0xB0FC3C] = 0; /*0x72fd56*/
  }
  v16 = v14 + v13; /*0x72fd66*/
  v17 = *((__int16 *)MEMORY[0xB0FA70] + 2); /*0x72fd6a*/
  v18 = __2_YAPAXI_Z(0x10u); /*0x72fd6e*/
  if ( v18 ) /*0x72fd78*/
  {
    *v18 = v9; /*0x72fd7a*/
    v18[1] = v16; /*0x72fd7c*/
    v18[2] = v7; /*0x72fd7f*/
    v18[3] = v17; /*0x72fd82*/
    MEMORY[0xB0FC44] = v18; /*0x72fd85*/
  }
  else
  {
    MEMORY[0xB0FC44] = 0; /*0x72fd8c*/
  }
  v19 = v17 + v16; /*0x72fd9b*/
  v20 = *((__int16 *)MEMORY[0xB0FAFC] + 2); /*0x72fd9f*/
  v21 = __2_YAPAXI_Z(0x10u); /*0x72fda3*/
  if ( v21 ) /*0x72fdad*/
  {
    *v21 = v9; /*0x72fdaf*/
    v21[1] = v19; /*0x72fdb1*/
    v21[2] = v7; /*0x72fdb4*/
    v21[3] = v20; /*0x72fdb7*/
    MEMORY[0xB0FC48] = v21; /*0x72fdba*/
  }
  else
  {
    MEMORY[0xB0FC48] = 0; /*0x72fdc1*/
  }
  v22 = *((__int16 *)MEMORY[0xB0FA8C] + 2); /*0x72fdd3*/
  v23 = __2_YAPAXI_Z(0x10u); /*0x72fdd7*/
  if ( v23 ) /*0x72fde1*/
  {
    *v23 = v9; /*0x72fde3*/
    v23[1] = v19; /*0x72fde5*/
    v23[2] = v7; /*0x72fde8*/
    v23[3] = v22; /*0x72fdeb*/
    MEMORY[0xB0FC4C] = v23; /*0x72fdee*/
  }
  else
  {
    MEMORY[0xB0FC4C] = 0; /*0x72fdf5*/
  }
  v24 = *((__int16 *)MEMORY[0xB0FA48] + 2); /*0x72fe07*/
  v25 = __2_YAPAXI_Z(0x10u); /*0x72fe0b*/
  if ( v25 ) /*0x72fe15*/
  {
    *v25 = v9; /*0x72fe17*/
    v25[1] = v19; /*0x72fe19*/
    v25[2] = v7; /*0x72fe1c*/
    v25[3] = v24; /*0x72fe1f*/
    MEMORY[0xB0FC50] = v25; /*0x72fe22*/
  }
  else
  {
    MEMORY[0xB0FC50] = 0; /*0x72fe29*/
  }
  MEMORY[0xB0FADC] = (a2 /*0x72fe7a*/
                    - *((_DWORD *)MEMORY[0xB0FC4C] + 3)
                    - *((_DWORD *)MEMORY[0xB0FC44] + 3)
                    - *((_DWORD *)MEMORY[0xB0FC3C] + 3)
                    - *((_DWORD *)MEMORY[0xB0FC38] + 3)
                    - *((_DWORD *)MEMORY[0xB0FC34] + 3))
                   / *((_DWORD *)MEMORY[0xB0FC48] + 3);
  v26 = *((_DWORD *)MEMORY[0xB0FC48] + 3) * MEMORY[0xB0FADC] + v19; /*0x72fe83*/
  *((_DWORD *)MEMORY[0xB0FC4C] + 1) = v26; /*0x72fe85*/
  v27 = v26 + *((_DWORD *)MEMORY[0xB0FC4C] + 3); /*0x72fe96*/
  v28 = a2 - 32; /*0x72fe98*/
  *((_DWORD *)MEMORY[0xB0FC50] + 1) = v27; /*0x72fe9b*/
  v29 = MEMORY[0xA8EB84] - 168; /*0x72fea4*/
  v30 = __2_YAPAXI_Z(0x10u); /*0x72feaa*/
  if ( v30 ) /*0x72feb6*/
  {
    *v30 = 0; /*0x72feb8*/
    v30[1] = v28; /*0x72feba*/
    v30[2] = v29; /*0x72febd*/
    v30[3] = 32; /*0x72fec0*/
    MEMORY[0xB0FC58] = v30; /*0x72fec7*/
  }
  else
  {
    MEMORY[0xB0FC58] = 0; /*0x72fece*/
  }
  v31 = *((__int16 *)MEMORY[0xB0FA3C] + 1); /*0x72fedb*/
  v32 = *((__int16 *)MEMORY[0xB0FA3C] + 2); /*0x72fedf*/
  v33 = __2_YAPAXI_Z(0x10u); /*0x72fee3*/
  if ( v33 ) /*0x72feed*/
  {
    *v33 = 0; /*0x72feef*/
    v33[1] = v28; /*0x72fef1*/
    v33[2] = v31; /*0x72fef4*/
    v33[3] = v32; /*0x72fef7*/
    MEMORY[0xB0FC5C] = v33; /*0x72fefa*/
  }
  else
  {
    MEMORY[0xB0FC5C] = 0; /*0x72ff01*/
  }
  v34 = *((__int16 *)MEMORY[0xB0FA90] + 1); /*0x72ff0e*/
  v35 = *((__int16 *)MEMORY[0xB0FA90] + 2); /*0x72ff12*/
  v36 = __2_YAPAXI_Z(0x10u); /*0x72ff16*/
  if ( v36 ) /*0x72ff20*/
  {
    *v36 = 0; /*0x72ff22*/
    v36[1] = v28; /*0x72ff24*/
    v36[2] = v34; /*0x72ff27*/
    v36[3] = v35; /*0x72ff2a*/
    MEMORY[0xB0FC60] = v36; /*0x72ff2d*/
  }
  else
  {
    MEMORY[0xB0FC60] = 0; /*0x72ff34*/
  }
  v37 = __2_YAPAXI_Z(0x10u); /*0x72ff3c*/
  if ( v37 ) /*0x72ff46*/
  {
    *v37 = 0; /*0x72ff48*/
    v37[1] = v28; /*0x72ff4a*/
    v37[2] = v34; /*0x72ff4d*/
    v37[3] = v35; /*0x72ff50*/
    MEMORY[0xB0FC64] = v37; /*0x72ff53*/
  }
  else
  {
    MEMORY[0xB0FC64] = 0; /*0x72ff5a*/
  }
  v38 = *((__int16 *)MEMORY[0xB0FAA8] + 1); /*0x72ff67*/
  v39 = *((__int16 *)MEMORY[0xB0FAA8] + 2); /*0x72ff6b*/
  v40 = __2_YAPAXI_Z(0x10u); /*0x72ff6f*/
  if ( v40 ) /*0x72ff79*/
  {
    *v40 = 0; /*0x72ff7b*/
    v40[1] = v28; /*0x72ff7d*/
    v40[2] = v38; /*0x72ff80*/
    v40[3] = v39; /*0x72ff83*/
    MEMORY[0xB0FC68] = v40; /*0x72ff86*/
  }
  else
  {
    MEMORY[0xB0FC68] = 0; /*0x72ff8d*/
  }
  v41 = *((__int16 *)MEMORY[0xB0FABC] + 1); /*0x72ff9a*/
  v42 = *((__int16 *)MEMORY[0xB0FABC] + 2); /*0x72ff9e*/
  v43 = (int *)__2_YAPAXI_Z(0x10u); /*0x72ffa2*/
  if ( v43 ) /*0x72ffac*/
  {
    *v43 = 0; /*0x72ffae*/
    v43[1] = v28; /*0x72ffb0*/
    v43[2] = v41; /*0x72ffb3*/
    v43[3] = v42; /*0x72ffb6*/
    v44 = v43; /*0x72ffb9*/
  }
  else
  {
    v44 = 0; /*0x72ffbd*/
  }
  MEMORY[0xB0FC6C] = v44; /*0x72ffc9*/
  MEMORY[0xB0F9E4] = (a1 - *((_DWORD *)MEMORY[0xB0FC60] + 2) - *((_DWORD *)MEMORY[0xB0FC34] + 2) - v44[2]) /*0x72ffee*/
                   / *((_DWORD *)MEMORY[0xB0FC68] + 2);
  v45 = *(_DWORD *)MEMORY[0xB0FC34] - v44[2]; /*0x72fff5*/
  *v44 = v45; /*0x72fff8*/
  v46 = v45 - MEMORY[0xB0F9E4] * *((_DWORD *)MEMORY[0xB0FC68] + 2); /*0x73000a*/
  *(_DWORD *)MEMORY[0xB0FC68] = v46; /*0x73000c*/
  v47 = v46 - *((_DWORD *)MEMORY[0xB0FC60] + 2); /*0x730014*/
  *(_DWORD *)MEMORY[0xB0FC60] = v47; /*0x730017*/
  MEMORY[0xB0FAD8] = v47; /*0x73001f*/
  v48 = *(_DWORD *)MEMORY[0xB0FC6C] - *((_DWORD *)MEMORY[0xB0FC64] + 2); /*0x73002e*/
  *(_DWORD *)MEMORY[0xB0FC64] = v48; /*0x730030*/
  MEMORY[0xB0FAA4] = v48; /*0x730038*/
  MEMORY[0xB0FA78] = *(_DWORD *)MEMORY[0xB0FC6C] - *((_DWORD *)MEMORY[0xB0FC60] + 2) - *(_DWORD *)MEMORY[0xB0FC60]; /*0x730058*/
  v49 = *(_DWORD *)MEMORY[0xB0FC38]; /*0x730064*/
  v50 = *((_DWORD *)MEMORY[0xB0FC38] + 1); /*0x730066*/
  v51 = *((_DWORD *)MEMORY[0xB0FC38] + 2); /*0x730069*/
  v52 = *((_DWORD *)MEMORY[0xB0FC38] + 3) + *((_DWORD *)MEMORY[0xB0FC3C] + 3); /*0x73006c*/
  v53 = __2_YAPAXI_Z(0x10u); /*0x73006e*/
  if ( v53 ) /*0x730078*/
  {
    *v53 = v49; /*0x73007a*/
    v53[1] = v50; /*0x73007c*/
    v53[2] = v51; /*0x73007f*/
    v53[3] = v52; /*0x730082*/
    MEMORY[0xB0FC40] = v53; /*0x730085*/
  }
  else
  {
    MEMORY[0xB0FC40] = 0; /*0x73008c*/
  }
  v54 = *(_DWORD *)MEMORY[0xB0FC44]; /*0x7300b9*/
  v55 = *((_DWORD *)MEMORY[0xB0FC44] + 1); /*0x7300bb*/
  v56 = *((_DWORD *)MEMORY[0xB0FC44] + 2); /*0x7300be*/
  v57 = *((_DWORD *)MEMORY[0xB0FC44] + 3) /*0x7300c3*/
      + *((_DWORD *)MEMORY[0xB0FC4C] + 3)
      + MEMORY[0xB0FADC] * *((_DWORD *)MEMORY[0xB0FC48] + 3);
  result = __2_YAPAXI_Z(0x10u); /*0x7300c5*/
  if ( result ) /*0x7300cf*/
  {
    *result = v54; /*0x7300d1*/
    result[3] = v57; /*0x7300d3*/
    result[2] = v56; /*0x7300d7*/
    result[1] = v55; /*0x7300db*/
    MEMORY[0xB0FC54] = result; /*0x7300df*/
  }
  else
  {
    MEMORY[0xB0FC54] = 0; /*0x7300ec*/
  }
  return result; /*0x7300d6*/
}
}
} // namespace gamemd

// 0x7236D0
namespace gamemd {
void nullsub_158()
{
  ;
}
} // namespace gamemd

// 0x726FCE
namespace gamemd {
char _do_always_noconv_codecvt_base_std__MBE_NXZ_20()
{
return 1;
}
} // namespace gamemd
