// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x430010
namespace gamemd {
void sub_430010()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_430010()
{
  unk_89C448 = 0.0174532925199433 * 45.0; /*0x43001c*/
}
}
} // namespace gamemd

// 0x430030
namespace gamemd {
void sub_430030()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_430030()
{
  unk_89C3A0 = 0.0174532925199433 * 60.0; /*0x43003c*/
}
}
} // namespace gamemd

// 0x430050
namespace gamemd {
void sub_430050()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_430050()
{
  unk_89C378 = 0.0174532925199433 * 90.0; /*0x43005c*/
}
}
} // namespace gamemd

// 0x430070
namespace gamemd {
long long sub_430070()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_430070()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_89C378 - unk_89C3A0); /*0x430082*/
  result = Math::RoundToInt(v0 * unk_89C398 * 0.5); /*0x430096*/
  unk_89C470 = result; /*0x43009b*/
  return result; /*0x4300a0*/
}
}
} // namespace gamemd

// 0x4300B0
namespace gamemd {
void sub_4300B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4300B0()
{
  unk_89C3A8 = Math::ArcTan((double)unk_89C470 * 0.00390625); /*0x4300c7*/
}
}
} // namespace gamemd

// 0x4300E0
namespace gamemd {
void sub_4300E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4300E0()
{
  unk_89C440 = Math::ArcTan((double)(2 * unk_89C470) / unk_89C398); /*0x430102*/
}
}
} // namespace gamemd

// 0x430110
namespace gamemd {
long long sub_430110()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_430110()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * unk_89C470) + 0.5); /*0x43012b*/
  unk_89C464 = result; /*0x430130*/
  return result; /*0x430136*/
}
}
} // namespace gamemd

// 0x430140
namespace gamemd {
int sub_430140()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_430140()
{
  unk_89C390 = 0; /*0x430142*/
  unk_89C392 = 0; /*0x430148*/
  return 0; /*0x43014e*/
}
}
} // namespace gamemd

// 0x430150
namespace gamemd {
int sub_430150()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_430150()
{
  unk_89C430 = 0; /*0x430152*/
  unk_89C434 = 0; /*0x430157*/
  unk_89C438 = 0; /*0x43015c*/
  return 0; /*0x430161*/
}
}
} // namespace gamemd

// 0x430170
namespace gamemd {
int sub_430170()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_430170()
{
  unk_89C460 = 0; /*0x430175*/
  unk_89C458 = 128; /*0x43017f*/
  unk_89C45C = 128; /*0x430184*/
  return 128; /*0x430189*/
}
}
} // namespace gamemd

// 0x430190
namespace gamemd {
int sub_430190()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_430190()
{
  memset(dword_89C3B0, 0, sizeof(dword_89C3B0)); /*0x43019d*/
  unk_89C410 = 0; /*0x4301a4*/
  unk_89C42C = 0; /*0x4301a9*/
  return atexit(sub_4301C0); /*0x4301b6*/
}
}
} // namespace gamemd

// 0x4301C0
namespace gamemd {
void sub_4301C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_4301C0()
{
  void **v0; // esi
  int v1; // ebx
  int v2; // edi

  if ( unk_89C410 ) /*0x4301c7*/
  {
    v0 = (void **)dword_89C3B0; /*0x4301cc*/
    v1 = 8; /*0x4301d1*/
    do /*0x4301f7*/
    {
      v2 = 3; /*0x4301d6*/
      do /*0x4301f4*/
      {
        if ( *v0 ) /*0x4301db*/
        {
          __3_YAXPAX_Z(*v0); /*0x4301e2*/
          *v0 = 0; /*0x4301ea*/
        }
        ++v0; /*0x4301f0*/
        --v2; /*0x4301f3*/
      }
      while ( v2 ); /*0x4301f4*/
      --v1; /*0x4301f6*/
    }
    while ( v1 ); /*0x4301f7*/
    unk_89C410 = 0; /*0x4301fb*/
  }
}
}
} // namespace gamemd

// 0x430580
namespace gamemd {
void nullsub_97(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __stdcall nullsub_97(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  ; /*0x430580*/
}
}
} // namespace gamemd

// 0x430590
namespace gamemd {
char sub_430590(int a2, int a3, int a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_430590(_DWORD *this, int a2, int a3, int a4, int a5)
{
  char result; // al

  if ( a2 != unk_89C430 || a3 != unk_89C434 || a4 != unk_89C438 ) /*0x4305b6*/
  {
    *this = a2; /*0x4305ba*/
    *(this + 1) = a3; /*0x4305bc*/
    *(this + 2) = a4; /*0x4305bf*/
  }
  result = a5; /*0x4305c2*/
  if ( a5 < 8 ) /*0x4305cb*/
  {
    *(this + 68) = a5; /*0x4305cd*/
    result = *((_BYTE *)this + 12) | 1; /*0x4305d6*/
    *((_BYTE *)this + 12) = result; /*0x4305d8*/
  }
  return result; /*0x4305c6*/
}
}
} // namespace gamemd

// 0x4305E0
namespace gamemd {
char sub_4305E0(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_4305E0(_BYTE *this, char a2)
{
  char result; // al

  result = *(this + 12) & 0xFD | (2 * (a2 & 1)); /*0x4305ee*/
  *(this + 12) = result; /*0x4305f0*/
  return result; /*0x4305f3*/
}
}
} // namespace gamemd

// 0x430600
namespace gamemd {
void nullsub_98()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void nullsub_98()
{
  ; /*0x430600*/
}
}
} // namespace gamemd

// 0x430610
namespace gamemd {
void sub_430610()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_430610(_BYTE *this)
{
  *(this + 12) &= ~1u; /*0x430610*/
}
}
} // namespace gamemd

// 0x430F60
namespace gamemd {
unsigned int * sub_430F60(unsigned int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__stdcall sub_430F60(_DWORD *a1)
{
  *a1 = 0; /*0x430f68*/
  a1[1] = 0; /*0x430f6a*/
  return a1; /*0x430f6d*/
}
}
} // namespace gamemd

// 0x4318D0
namespace gamemd {
int sub_4318D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4318D0()
{
  unk_89C480 = 0; /*0x4318d2*/
  unk_89C484 = 0; /*0x4318d7*/
  unk_89C488 = 0; /*0x4318dc*/
  unk_89C48C = 0; /*0x4318e1*/
  return 0; /*0x4318e6*/
}
}
} // namespace gamemd

// 0x431920
namespace gamemd {
int sub_431920()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_431920(_DWORD *this)
{
  *(this + 2) = 0; /*0x431922*/
  *(this + 3) = 0; /*0x431925*/
  *(this + 4) = 0; /*0x431928*/
  return 0; /*0x43192b*/
}
}
} // namespace gamemd

// 0x431930
namespace gamemd {
int sub_431930(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_431930(int *this, int a2)
{
  unsigned int v3; // eax
  int result; // eax
  int v5; // [esp+8h] [ebp-4h]

  if ( (_BYTE)a2 ) /*0x43193c*/
  {
    *(this + 2) = 0; /*0x43193e*/
    *(this + 3) = 0; /*0x431941*/
    *(this + 4) = 0; /*0x431944*/
  }
  v3 = Timer::ReadTSC(&a2); /*0x43194c*/
  result = (a2 << 28) | (v3 >> 4); /*0x431962*/
  *this = result; /*0x431964*/
  *(this + 1) = v5; /*0x431966*/
  return result; /*0x431969*/
}
}
} // namespace gamemd

// 0x431BC0
namespace gamemd {
bool sub_431BC0(int a2, size_t a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall sub_431BC0(size_t *this, int a2, size_t a3)
{
  int v5; // edi
  signed int v6; // eax
  int v7; // edi
  bool v8; // zf
  size_t v9; // eax
  signed int v10; // [esp+24h] [ebp+4h]
  int v11; // [esp+28h] [ebp+8h]

  if ( *(this + 12) ) /*0x431bc8*/
    return !a2 && !a3; /*0x431bdb*/
  if ( (*(unsigned __int8 (__thiscall **)(size_t *, _DWORD))(*this + 20))(this, 0) ) /*0x431bef*/
    *(this + 18) = (*(int (__thiscall **)(size_t *))(*this + 44))(this); /*0x431bfd*/
  else
    *(this + 18) = 0; /*0x431c02*/
  v5 = a2; /*0x431c05*/
  if ( a2 ) /*0x431c0f*/
  {
    if ( a2 < 1024 ) /*0x431c17*/
    {
      v5 = 1024; /*0x431c1b*/
      if ( a3 ) /*0x431c20*/
        (*(void (__thiscall **)(size_t *, int, _DWORD, _DWORD))(*this + 64))(this, 22, 0, 0); /*0x431c2a*/
    }
    *(this + 13) = v5; /*0x431c2f*/
    if ( v5 ) /*0x431c32*/
      goto LABEL_14; /*0x431c32*/
  }
  else
  {
    *(this + 13) = *(this + 18); /*0x431c53*/
  }
  if ( a3 ) /*0x431c36*/
    return 0; /*0x431d83*/
LABEL_14:
  if ( !*(this + 13) ) /*0x431c41*/
    return 0; /*0x431c41*/
  if ( a3 ) /*0x431c49*/
    *(this + 12) = a3; /*0x431c4b*/
  else
    *(this + 12) = (size_t)__2_YAPAXI_Z(*(this + 13)); /*0x431c61*/
  if ( !*(this + 12) ) /*0x431c67*/
  {
    (*(void (__thiscall **)(size_t *, int, _DWORD, _DWORD))(*this + 64))(this, 12, 0, 0); /*0x431d7d*/
    return 0; /*0x431d7d*/
  }
  v6 = *(this + 18); /*0x431c6d*/
  *((_BYTE *)this + 36) = 1; /*0x431c75*/
  *((_BYTE *)this + 38) = 0; /*0x431c79*/
  *(this + 14) = 0; /*0x431c7c*/
  *(this + 15) = 0; /*0x431c7f*/
  *(this + 16) = -1; /*0x431c82*/
  *(this + 17) = -1; /*0x431c85*/
  *(this + 19) = 0; /*0x431c88*/
  *(this + 20) = 0; /*0x431c8b*/
  if ( v6 ) /*0x431c8e*/
  {
    v7 = 0; /*0x431c97*/
    v11 = 0; /*0x431c9b*/
    v10 = v6; /*0x431c9f*/
    if ( v6 > (int)*(this + 13) ) /*0x431ca3*/
      v10 = *(this + 13); /*0x431ca5*/
    v8 = (*(unsigned __int8 (__thiscall **)(size_t *))(*this + 24))(this) == 0; /*0x431cb0*/
    v9 = *this; /*0x431cb2*/
    if ( v8 ) /*0x431cb6*/
    {
      if ( (*(int (__thiscall **)(size_t *, int))(v9 + 28))(this, 1) ) /*0x431d02*/
      {
        *(this + 20) = FileClass::Seek((int *)this, 0, 1u); /*0x431d13*/
        v11 = 1; /*0x431d16*/
      }
    }
    else
    {
      v7 = (*(int (__thiscall **)(size_t *, _DWORD))(v9 + 40))(this, 0); /*0x431cbe*/
      if ( *(this + 5) == -1 ) /*0x431cc5*/
        *(this + 20) = v7; /*0x431cd6*/
      else
        *(this + 20) = FileClass::Seek((int *)this, 0, 1u); /*0x431cd1*/
      if ( (int)*(this + 18) > (int)*(this + 13) ) /*0x431ce1*/
      {
        *(this + 15) = v7; /*0x431cf8*/
        *(this + 19) = v7; /*0x431cfb*/
      }
      else
      {
        if ( v7 ) /*0x431ce5*/
          (*(void (__thiscall **)(size_t *, _DWORD, _DWORD))(*this + 40))(this, 0, 0); /*0x431ced*/
        *(this + 14) = v7; /*0x431cf0*/
        *(this + 19) = v7; /*0x431cf3*/
      }
    }
    if ( (*(int (__thiscall **)(size_t *, _DWORD, signed int))(*this + 36))(this, *(this + 12), v10) != v10 ) /*0x431d30*/
      (*(void (__thiscall **)(size_t *, int, _DWORD, _DWORD))(*this + 64))(this, 5, 0, 0); /*0x431d3a*/
    if ( v11 ) /*0x431d41*/
    {
      (*(void (__thiscall **)(size_t *))(*this + 52))(this); /*0x431d47*/
      *((_BYTE *)this + 39) = 1; /*0x431d4a*/
      *((_BYTE *)this + 41) = 1; /*0x431d4e*/
      return 1; /*0x431d58*/
    }
    (*(void (__thiscall **)(size_t *, int, _DWORD))(*this + 40))(this, v7, 0); /*0x431d61*/
    *((_BYTE *)this + 39) = 1; /*0x431d64*/
  }
  *((_BYTE *)this + 41) = 1; /*0x431d68*/
  return 1; /*0x431be1*/
}
}
} // namespace gamemd

// 0x431D90
namespace gamemd {
void sub_431D90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_431D90(int this)
{
  if ( this->nextObject ) /*0x431d96*/
  {
    if ( *(_BYTE *)(this + 36) ) /*0x431d9d*/
    {
      __3_YAXPAX_Z(*(void **)(this + 48)); /*0x431da3*/
      *(_BYTE *)(this + 36) = 0; /*0x431dab*/
    }
    this->nextObject = 0; /*0x431dae*/
  }
  this->attachedTag = 0; /*0x431db1*/
  *(_BYTE *)(this + 37) = 0; /*0x431db4*/
  *(_BYTE *)(this + 39) = 0; /*0x431db7*/
  *(_BYTE *)(this + 40) = 0; /*0x431dba*/
  *(_BYTE *)(this + 41) = 0; /*0x431dbd*/
}
}
} // namespace gamemd

// 0x432670
namespace gamemd {
int sub_432670()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_432670()
{
  unk_89C498 = 0; /*0x432672*/
  unk_89C49C = 0; /*0x432677*/
  unk_89C4A0 = 0; /*0x43267c*/
  unk_89C4A4 = 0; /*0x432681*/
  return 0; /*0x432686*/
}
}
} // namespace gamemd

// 0x433560
namespace gamemd {
char sub_433560(int a1, unsigned char * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall sub_433560(int a1, _BYTE *a2)
{
  *(_DWORD *)a1 = a2; /*0x433560*/
  *(_BYTE *)(a1 + 4) = 0; /*0x433562*/
  return *a2 & 1; /*0x43356a*/
}
}
} // namespace gamemd

// 0x4335A0
namespace gamemd {
char sub_4335A0(int a1, unsigned char * a2, char a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall sub_4335A0(int a1, _BYTE *a2, char a3)
{
  *(_DWORD *)a1 = a2; /*0x4335a4*/
  *(_BYTE *)(a1 + 4) = 0; /*0x4335a6*/
  *a2 = a3; /*0x4335aa*/
  return a3; /*0x4335ac*/
}
}
} // namespace gamemd

// 0x433860
namespace gamemd {
int sub_433860()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_433860()
{
  unk_89C4A8 = 0; /*0x433862*/
  unk_89C4AC = 0; /*0x433867*/
  unk_89C4B0 = 0; /*0x43386c*/
  unk_89C4B4 = 0; /*0x433871*/
  return 0; /*0x433876*/
}
}
} // namespace gamemd

// 0x433C80
namespace gamemd {
short sub_433C80(short a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int16 __thiscall sub_433C80(_WORD *this, __int16 a2)
{
  *(this + 19) = a2; /*0x433c85*/
  return *(this + 18); /*0x433c8d*/
}
}
} // namespace gamemd

// 0x433CE0
namespace gamemd {
char sub_433CE0(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_433CE0(_BYTE *this, char a2)
{
  char result; // al

  result = *(this + 64); /*0x433ce4*/
  *(this + 64) = a2; /*0x433ce7*/
  return result; /*0x433cea*/
}
}
} // namespace gamemd

// 0x434100
namespace gamemd {
int sub_434100(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_434100(_DWORD *this, int a2)
{
  int result; // eax

  result = *(this + 10); /*0x434104*/
  *(this + 10) = a2; /*0x434107*/
  return result; /*0x43410a*/
}
}
} // namespace gamemd

// 0x434700
namespace gamemd {
unsigned char * sub_434700()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_BYTE *__thiscall sub_434700(_DWORD *this)
{
  _BYTE *result; // eax
  _DWORD *v3; // edx
  int v4; // ecx
  _BYTE *v5; // ecx
  _BYTE *v6; // edi
  int v7; // edx
  unsigned int v8; // ebp
  unsigned int v9; // ecx

  result = malloc(*(_DWORD *)(*(this + 1) + 4) * *(_DWORD *)(*(this + 1) + 8) + 2); /*0x434713*/
  v3 = (_DWORD *)*(this + 1); /*0x434718*/
  *(this + 2) = result; /*0x434720*/
  if ( v3 ) /*0x434723*/
  {
    v4 = *(unsigned __int16 *)(v3[6] + 176); /*0x43472a*/
    if ( (_WORD)v4 ) /*0x434733*/
    {
      v5 = (_BYTE *)(v3[7] + (v4 - 1) * v3[5]); /*0x43473e*/
      if ( v5 ) /*0x434741*/
      {
        v6 = v5 + 1; /*0x434745*/
        *result = *v5; /*0x434748*/
        v7 = *(this + 1); /*0x43474a*/
        v8 = 0; /*0x434750*/
        for ( result = (_BYTE *)(*(this + 2) + 1); v8 < *(_DWORD *)(v7 + 8); ++v8 ) /*0x434752*/
        {
          v9 = 0; /*0x43475e*/
          if ( *(_DWORD *)(v7 + 4) ) /*0x43475b*/
          {
            do /*0x434774*/
            {
              *result++ = ~*v6++; /*0x434769*/
              ++v9; /*0x434770*/
            }
            while ( v9 < *(_DWORD *)(*(this + 1) + 4) ); /*0x434774*/
          }
          v7 = *(this + 1); /*0x434776*/
        }
      }
    }
  }
  return result; /*0x434780*/
}
}
} // namespace gamemd

// 0x434840
namespace gamemd {
char sub_434840(unsigned int * a1, unsigned int * a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall sub_434840(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // edx

  if ( a2[1] > a3[3] || a3[1] > a2[3] || *a2 > a3[2] || *a3 > a2[2] ) /*0x43486d*/
  {
    *a1 = 0; /*0x4348ca*/
    a1[1] = 0; /*0x4348d0*/
    a1[2] = -1; /*0x4348d7*/
    a1[3] = -1; /*0x4348da*/
    return 0; /*0x4348dd*/
  }
  else
  {
    *a1 = *a2; /*0x434878*/
    a1[1] = a2[1]; /*0x43487d*/
    a1[2] = a2[2]; /*0x434883*/
    a1[3] = a2[3]; /*0x43488a*/
    v3 = a3[1]; /*0x43488d*/
    if ( a1[1] < v3 ) /*0x434893*/
      a1[1] = v3; /*0x434895*/
    if ( *a1 < *a3 ) /*0x43489e*/
      *a1 = *a3; /*0x4348a0*/
    v4 = a3[3]; /*0x4348a2*/
    if ( a1[3] > v4 ) /*0x4348aa*/
      a1[3] = v4; /*0x4348ac*/
    v5 = a3[2]; /*0x4348af*/
    if ( a1[2] > v5 ) /*0x4348b7*/
      a1[2] = v5; /*0x4348b9*/
    return 1; /*0x4348bc*/
  }
}
}
} // namespace gamemd

// 0x4349F0
namespace gamemd {
BOOL sub_4349F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __thiscall sub_4349F0(int this)
{
  BOOL result; // eax

  *(_DWORD *)(this + 4) = 0; /*0x4349f9*/
  *(_DWORD *)(this + 32) = 0; /*0x4349fc*/
  *(_DWORD *)(this + 12) = 0; /*0x4349ff*/
  *(_DWORD *)(this + 8) = 0; /*0x434a02*/
  *(_WORD *)(this + 36) = 0x7FFF; /*0x434a0f*/
  *(_WORD *)(this + 38) = 13653; /*0x434a15*/
  this->owningHouseIndex = 64; /*0x434a1b*/
  *(_BYTE *)(this + 64) = 1; /*0x434a22*/
  *(_BYTE *)(this + 65) = 1; /*0x434a25*/
  *(_DWORD *)(this + 24) = 1; /*0x434a28*/
  *(_DWORD *)(this + 28) = 1; /*0x434a2b*/
  result = SetRect((LPRECT)(this + 48), 0, 0, 0, 0); /*0x434a2e*/
  this->fallRate = 1; /*0x434a34*/
  return result; /*0x434a37*/
}
}
} // namespace gamemd

// 0x434AB0
namespace gamemd {
int sub_434AB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_434AB0()
{
  unk_89C4C0 = 0; /*0x434ab2*/
  unk_89C4C4 = 0; /*0x434ab7*/
  unk_89C4C8 = 0; /*0x434abc*/
  unk_89C4CC = 0; /*0x434ac1*/
  return 0; /*0x434ac6*/
}
}
} // namespace gamemd

// 0x434B40
namespace gamemd {
int sub_434B40(AbstractClass * aP0, int * a1, unsigned short aP1, int xLeft, int yTop)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall sub_434B40(AbstractClass *aP0, int *a1, unsigned __int16 aP1, int xLeft, int yTop)
{
  int v5; // edi

  if ( !aP0 ) /*0x434b4c*/
    return xLeft; /*0x434b89*/
  FontRenderer::InitContext(aP0, a1); /*0x434b56*/
  Field::Int_Set(aP0, (AbstractClass *)xLeft); /*0x434b5e*/
  v5 = FontClass::RenderGlyph( /*0x434b7a*/
         (int)aP0,
         (AbstractClass *)aP1,
         (AbstractClass *)xLeft,
         (AbstractClass *)yTop,
         (AbstractClass *)0xFFFFFFFF);
  BufferIO::Cleanup(aP0, (AbstractClass *)a1); /*0x434b7c*/
  return v5; /*0x434b84*/
}
}
} // namespace gamemd

// 0x434BF0
namespace gamemd {
int sub_434BF0(int a1, int * a2, unsigned short * a3, int xLeft, int yTop, int a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall sub_434BF0(int a1, int *a2, unsigned __int16 *a3, int xLeft, int yTop, int a6)
{
  int result; // eax
  int v7; // ebx

  result = 0; /*0x434bf6*/
  if ( a1 ) /*0x434bfb*/
  {
    if ( *(_BYTE *)(a1 + 64) ) /*0x434c01*/
    {
      *(_DWORD *)(a1 + 44) = 2; /*0x434c14*/
      FontRenderer::InitContext((_DWORD *)a1, a2); /*0x434c1b*/
      Field::Int_Set((_DWORD *)a1, xLeft); /*0x434c27*/
      FontClass::RenderText(a1, a3, xLeft, yTop, a6, 0); /*0x434c40*/
      BufferIO::Cleanup((_DWORD *)a1, (int)a2); /*0x434c48*/
      FontRenderer::InitContext((_DWORD *)a1, a2); /*0x434c51*/
      Field::Int_Set((_DWORD *)a1, xLeft + 1); /*0x434c59*/
      v7 = FontClass::RenderText(a1, a3, xLeft + 1, yTop, a6, 0); /*0x434c76*/
      BufferIO::Cleanup((_DWORD *)a1, (int)a2); /*0x434c78*/
      *(_DWORD *)(a1 + 44) = 1; /*0x434c7e*/
    }
    else
    {
      FontRenderer::InitContext((_DWORD *)a1, a2); /*0x434c94*/
      Field::Int_Set((_DWORD *)a1, xLeft); /*0x434ca0*/
      v7 = FontClass::RenderText(a1, a3, xLeft, yTop, a6, 0); /*0x434cc1*/
      BufferIO::Cleanup((_DWORD *)a1, (int)a2); /*0x434cc3*/
    }
    return v7; /*0x434c86*/
  }
  return result; /*0x434c85*/
}
}
} // namespace gamemd

// 0x435340
namespace gamemd {
char sub_435340(int a1, int a2, unsigned short * a3, int a4, int yTop, int a6, int a7, char a8, int a9, int a10)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall sub_435340(int a1, int a2, _WORD *a3, int a4, int yTop, int a6, int a7, char a8, int a9, int a10)
{
  __int16 v11; // bp

  if ( !a1 ) /*0x43534a*/
    return 0; /*0x43534d*/
  Field::Int_Set((_DWORD *)a1, a4); /*0x43535c*/
  v11 = Property::Set((_WORD *)a1, *(_WORD *)(a1 + 38)); /*0x435375*/
  Font::Print(a1, a2, a3, a4 + 1, yTop + 1, a6, a7, a8, a9, a10); /*0x43539f*/
  Property::Set((_WORD *)a1, v11); /*0x4353a7*/
  return Font::Print(a1, a2, a3, a4, yTop, a6, a7, a8, a9, a10); /*0x43534c*/
}
}
} // namespace gamemd

// 0x4353F0
namespace gamemd {
char sub_4353F0(int a1, int a2, unsigned short * a3, int a4, int yTop, int a6, int a7, char a8, int a9, int a10)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall sub_4353F0(int a1, int a2, _WORD *a3, int a4, int yTop, int a6, int a7, char a8, int a9, int a10)
{
  char result; // al

  if ( !a1 ) /*0x4353fa*/
    return 0; /*0x4353fd*/
  Field::Int_Set((_DWORD *)a1, a4); /*0x43540b*/
  if ( !*(_BYTE *)(a1 + 64) ) /*0x435410*/
    return Font::Print(a1, a2, a3, a4, yTop, a6, a7, a8, a9, a10); /*0x4354b8*/
  *(_DWORD *)(a1 + 44) = 2; /*0x435428*/
  Font::Print(a1, a2, a3, a4, yTop, a6, a7, a8, a9, a10); /*0x43544b*/
  result = Font::Print(a1, a2, a3, a4 + 1, yTop, a6, a7, a8, a9, a10); /*0x435479*/
  *(_DWORD *)(a1 + 44) = 1; /*0x43547f*/
  return result; /*0x4353fc*/
}
}
} // namespace gamemd

// 0x4355D0
namespace gamemd {
int PackRGB565(int a1, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall PackRGB565(int a1, int a2, int a3)
{
  return (a1 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) /*0x43560b*/
       | (a2 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
       | (a3 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
}
}
} // namespace gamemd

// 0x435610
namespace gamemd {
void sub_435610()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_435610()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x43561c*/
  unk_89C4F8 = Math::Sqrt(v0 + v0); /*0x43562e*/
}
}
} // namespace gamemd

// 0x435640
namespace gamemd {
void sub_435640()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_435640()
{
  unk_89C548 = unk_89C4F8 / 60.0; /*0x43564c*/
}
}
} // namespace gamemd

// 0x435660
namespace gamemd {
void sub_435660()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_435660()
{
  unk_89C530 = 1.0 / unk_89C548; /*0x43566c*/
}
}
} // namespace gamemd

// 0x435680
namespace gamemd {
void sub_435680()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_435680()
{
  unk_89C528 = 0.0174532925199433 * 45.0; /*0x43568c*/
}
}
} // namespace gamemd

// 0x4356A0
namespace gamemd {
void sub_4356A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4356A0()
{
  unk_89C500 = 0.0174532925199433 * 60.0; /*0x4356ac*/
}
}
} // namespace gamemd

// 0x4356C0
namespace gamemd {
void sub_4356C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4356C0()
{
  unk_89C4D8 = 0.0174532925199433 * 90.0; /*0x4356cc*/
}
}
} // namespace gamemd

// 0x4356E0
namespace gamemd {
long long sub_4356E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4356E0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_89C4D8 - unk_89C500); /*0x4356f2*/
  result = Math::RoundToInt(v0 * unk_89C4F8 * 0.5); /*0x435706*/
  unk_89C550 = result; /*0x43570b*/
  return result; /*0x435710*/
}
}
} // namespace gamemd

// 0x435720
namespace gamemd {
void sub_435720()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_435720()
{
  unk_89C508 = Math::ArcTan((double)unk_89C550 * 0.00390625); /*0x435737*/
}
}
} // namespace gamemd

// 0x435750
namespace gamemd {
void sub_435750()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_435750()
{
  unk_89C520 = Math::ArcTan((double)(2 * unk_89C550) / unk_89C4F8); /*0x435772*/
}
}
} // namespace gamemd

// 0x435780
namespace gamemd {
long long sub_435780()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_435780()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * unk_89C550) + 0.5); /*0x43579b*/
  unk_89C544 = result; /*0x4357a0*/
  return result; /*0x4357a6*/
}
}
} // namespace gamemd

// 0x4357B0
namespace gamemd {
int sub_4357B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4357B0()
{
  unk_89C4F0 = 0; /*0x4357b2*/
  return 0; /*0x4357be*/
}
}
} // namespace gamemd

// 0x4357C0
namespace gamemd {
int sub_4357C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4357C0()
{
  unk_89C510 = 0; /*0x4357c2*/
  unk_89C514 = 0; /*0x4357c7*/
  unk_89C518 = 0; /*0x4357cc*/
  return 0; /*0x4357d1*/
}
}
} // namespace gamemd

// 0x4357E0
namespace gamemd {
int sub_4357E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4357E0()
{
  unk_89C540 = 0; /*0x4357e5*/
  unk_89C538 = 128; /*0x4357ef*/
  unk_89C53C = 128; /*0x4357f4*/
  return 128; /*0x4357f9*/
}
}
} // namespace gamemd

// 0x435800
namespace gamemd {
int sub_435800()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_435800()
{
  unk_89C4E0 = 0; /*0x435802*/
  unk_89C4E4 = 0; /*0x435807*/
  unk_89C4E8 = 0; /*0x43580c*/
  unk_89C4EC = 0; /*0x435811*/
  return 0; /*0x435816*/
}
}
} // namespace gamemd

// 0x436DA0
namespace gamemd {
double sub_436DA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
double __thiscall sub_436DA0(_DWORD **this)
{
  _DWORD *v2; // edi
  _DWORD *v3; // eax
  double v4; // st7
  int v5; // eax
  int v6; // esi
  double result; // st7
  int v8; // [esp+1Ch] [ebp-28h]
  int v9; // [esp+24h] [ebp-20h]
  int v10; // [esp+28h] [ebp-1Ch]
  _BYTE v11[12]; // [esp+2Ch] [ebp-18h] BYREF
  _BYTE v12[12]; // [esp+38h] [ebp-Ch] BYREF

  v2 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(this + 57) + 72))(*(this + 57), v11); /*0x436dbc*/
  v3 = (_DWORD *)((int (__thiscall *)(_DWORD **, _BYTE *))(*this)[18])(this, v12); /*0x436dc3*/
  v9 = v3[1] - v2[1]; /*0x436de0*/
  v10 = v3[2] - v2[2]; /*0x436de4*/
  v4 = Math::Sqrt((double)(*v3 - *v2) * (double)(*v3 - *v2) + (double)v10 * (double)v10 + (double)v9 * (double)v9); /*0x436e10*/
  v5 = Math::RoundToInt(v4); /*0x436e18*/
  v6 = MEMORY[0x8871E0]->NodGateOne[1]; /*0x436e25*/
  if ( v5 >= v6 ) /*0x436e2d*/
    v8 = (v5 - v6) / ((MEMORY[0x8871E0]->NodGateOne[0] - v6) / 10); /*0x436e5b*/
  else
    v8 = 0; /*0x436e2f*/
  result = (double)v8 * 5.973333333333333; /*0x436e63*/
  Math::RoundToInt(result); /*0x436e69*/
  return result; /*0x436e74*/
}
}
} // namespace gamemd

// 0x437190
namespace gamemd {
int sub_437190()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_437190()
{
  unk_89C558 = 0; /*0x437192*/
  unk_89C55C = 0; /*0x437197*/
  unk_89C560 = 0; /*0x43719c*/
  unk_89C564 = 0; /*0x4371a1*/
  return 0; /*0x4371a6*/
}
}
} // namespace gamemd

// 0x437290
namespace gamemd {
char sub_437290(int * a1, int a2, int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall sub_437290(int *a1, int a2, int *a3)
{
  int v6; // ebx
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // edx
  _DWORD v11[4]; // [esp+8h] [ebp-30h] BYREF
  int (__thiscall **v12)(void *, char); // [esp+18h] [ebp-20h] BYREF
  int v13; // [esp+1Ch] [ebp-1Ch]
  int v14; // [esp+20h] [ebp-18h]
  int v15; // [esp+24h] [ebp-14h]
  int v16; // [esp+28h] [ebp-10h]
  _DWORD v17[3]; // [esp+2Ch] [ebp-Ch] BYREF

  if ( *(int *)(a2 + 8) <= 0 || *(int *)(a2 + 12) <= 0 ) /*0x4372a5*/
    return 0; /*0x4372a8*/
  v6 = *a3; /*0x4372ba*/
  v7 = (*(int (__thiscall **)(int *))(*a1 + 112))(a1); /*0x4372bc*/
  v8 = *(_DWORD *)(a2 + 12); /*0x4372c2*/
  v13 = *(_DWORD *)(a2 + 8); /*0x4372c5*/
  v14 = v8; /*0x4372d5*/
  v15 = 0; /*0x4372d9*/
  v12 = &XSurface_Vtable; /*0x4372e1*/
  v16 = v7; /*0x4372e9*/
  Buffer::Init(v17, v6, v7 * v8 * v13); /*0x4372ed*/
  v9 = *(_DWORD *)(a2 + 12); /*0x4372f5*/
  v10 = *a1; /*0x4372f8*/
  v11[2] = *(_DWORD *)(a2 + 8); /*0x4372fa*/
  v11[3] = v9; /*0x4372fe*/
  v12 = &BSurface_Vtable; /*0x437313*/
  v11[0] = 0; /*0x43731b*/
  v11[1] = 0; /*0x437323*/
  LOBYTE(v6) = (*(int (__thiscall **)(int *, int, int (__thiscall ***)(void *, char), _DWORD *, _DWORD, int))(v10 + 8))( /*0x437332*/
                 a1,
                 a2,
                 &v12,
                 v11,
                 0,
                 1);
  Vector::Clear((int)v17); /*0x437334*/
  return v6; /*0x4372a7*/
}
}
} // namespace gamemd

// 0x437350
namespace gamemd {
int BlitterCopySimpleSHP()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall BlitterCopySimpleSHP(
        XSurface *aP0,
        XSurface *aP1,
        XSurface *aP2,
        int arg4,
        int *a4,
        int aP7,
        int aP8,
        int a8,
        int a9)
{
  XSurface *v11; // eax
  XSurface *v13; // [esp-1Ch] [ebp-48h]
  _BYTE v14[20]; // [esp+Ch] [ebp-20h] BYREF
  int v15[3]; // [esp+20h] [ebp-Ch] BYREF

  v13 = (XSurface *)(*(int (__thiscall **)(XSurface *, _BYTE *, int))(*(_DWORD *)aP2->__pad_0 + 120))(aP2, v14, arg4); /*0x43738e*/
  v11 = (XSurface *)(*(int (__thiscall **)(XSurface *))(*(_DWORD *)aP0->__pad_0 + 120))(aP0); /*0x437396*/
  return BlitterCopySHP( /*0x4373a2*/
           aP0,
           v11,
           (XSurface *)v15,
           aP1,
           (int)aP2,
           v13,
           (XSurface *)a4,
           (XSurface *)aP7,
           (XSurface *)aP8,
           a8,
           a9,
           0);
}
}
} // namespace gamemd

// 0x4373B0
namespace gamemd {
int BlitterCopySHP()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall BlitterCopySHP(
        XSurface *aP0,
        XSurface *aP1,
        XSurface *aP2,
        XSurface *aP3,
        int a4,
        XSurface *aP5,
        XSurface *aP6,
        XSurface *aP7,
        XSurface *aP8,
        int a10,
        int a11,
        int a12)
{
  XSurface *v12; // eax
  int Width; // edx
  int Height; // edx
  XSurface *v16; // edx
  int LockCount; // eax
  int v18; // ebp
  int v19; // eax
  int v20; // edx
  int v21; // ebx
  char result; // al
  int v23; // eax
  int v24; // edx
  unsigned __int8 v25; // di
  MouseClass *v26; // ebp
  int v27; // edi
  int v28; // edi
  int v29; // ecx
  XSurface *v30; // edi
  int v31; // eax
  int v32; // esi
  int v33; // esi
  int v34; // eax
  int v35; // edx
  XSurface *v36; // esi
  int v37; // ecx
  int v38; // edx
  int v39; // eax
  int v40; // edx
  int v41; // eax
  int v42; // esi
  int v43; // edx
  unsigned int v44; // ecx
  unsigned int v45; // eax
  int v46; // eax
  int v47; // ecx
  XSurface *v48; // ebx
  XSurface **v49; // esi
  unsigned int v50; // edi
  unsigned int v51; // eax
  int v52; // eax
  unsigned int v53; // eax
  int v54; // eax
  int v55; // ecx
  XSurface **v56; // esi
  unsigned int v57; // edi
  unsigned int v58; // eax
  int v59; // eax
  unsigned int v60; // eax
  unsigned int v61; // [esp+20h] [ebp-4Ch]
  int a7; // [esp+24h] [ebp-48h] BYREF
  unsigned int SamplePosition; // [esp+28h] [ebp-44h]
  int v64; // [esp+2Ch] [ebp-40h]
  int v65; // [esp+30h] [ebp-3Ch]
  int v66; // [esp+34h] [ebp-38h]
  int v67; // [esp+38h] [ebp-34h]
  int v68; // [esp+3Ch] [ebp-30h]
  XSurface *v69; // [esp+40h] [ebp-2Ch]
  int v70; // [esp+44h] [ebp-28h]
  int v71; // [esp+48h] [ebp-24h]
  int v72; // [esp+4Ch] [ebp-20h] BYREF
  int v73; // [esp+50h] [ebp-1Ch]
  int v74; // [esp+54h] [ebp-18h]
  int v75; // [esp+58h] [ebp-14h]
  _DWORD v76[2]; // [esp+5Ch] [ebp-10h] BYREF
  int v77; // [esp+64h] [ebp-8h]
  int v78; // [esp+68h] [ebp-4h]

  v12 = aP5; /*0x4373b3*/
  v76[0] = *(_DWORD *)aP5->__pad_0; /*0x4373c1*/
  v69 = aP0; /*0x4373c5*/
  Width = aP5->Width; /*0x4373c9*/
  LOBYTE(aP5) = 0; /*0x4373cc*/
  v76[1] = Width; /*0x4373d1*/
  a7 = 0; /*0x4373d5*/
  Height = v12->Height; /*0x4373d9*/
  SamplePosition = 0; /*0x4373dc*/
  v77 = Height; /*0x4373e0*/
  v16 = aP2; /*0x4373e4*/
  LockCount = v12->LockCount; /*0x4373e8*/
  aP2 = 0; /*0x4373eb*/
  v78 = LockCount; /*0x4373ef*/
  v72 = *(_DWORD *)v16->__pad_0; /*0x4373f5*/
  v61 = 0; /*0x4373f9*/
  v18 = 0; /*0x437400*/
  v73 = v16->Width; /*0x437402*/
  v65 = 0; /*0x437406*/
  v19 = v16->Height; /*0x43740a*/
  v66 = 0; /*0x43740d*/
  v74 = v19; /*0x437411*/
  v20 = v16->LockCount; /*0x437419*/
  v64 = 0; /*0x43741c*/
  v75 = v20; /*0x437423*/
  v67 = 0; /*0x437427*/
  v68 = 0; /*0x43742b*/
  aP8 = (XSurface *)(24 * (_DWORD)aP8 + 8484624); /*0x43743a*/
  v21 = 0; /*0x43745f*/
  result = CalcSurfaceBlitRects( /*0x437461*/
             (int)aP0,
             (int *)aP1->__pad_0,
             (IUnknown *)&v72,
             (int)aP3,
             (int *)a4,
             (IUnknown *)v76,
             &aP5,
             &a7,
             (int *)&aP2);
  if ( result ) /*0x437468*/
  {
    if ( *(_DWORD *)&stru_87C374.__pad_14B0[4224] ) /*0x43747c*/
    {
      v23 = *(_DWORD *)aP1->__pad_0; /*0x437485*/
      v24 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 4); /*0x43748d*/
      v71 = v73 + aP1->Width; /*0x437490*/
      v25 = v71 - v24; /*0x437494*/
      v70 = v72 + v23; /*0x43749a*/
      v61 = StreamClass::ReadAndSeek( /*0x4374ac*/
              *(int *)&stru_87C374.__pad_14B0[4224],
              (MouseClass *)(v72 + v23),
              (MouseClass *)(v71 - v24));
      v21 = (2 * (v25 & 1)) | ((unsigned __int8)v70 ^ v25) & 1; /*0x4374b7*/
    }
    if ( *(_DWORD *)&stru_87C374.__pad_579C[23348] ) /*0x4374c3*/
    {
      v26 = (MouseClass *)(v72 + *(_DWORD *)aP1->__pad_0); /*0x4374d6*/
      v27 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 4); /*0x4374d8*/
      v71 = v73 + aP1->Width; /*0x4374dd*/
      SamplePosition = Audio::GetSamplePosition(*(int *)&stru_87C374.__pad_579C[23348], v26, (MouseClass *)(v71 - v27)); /*0x4374ea*/
      v64 = 0; /*0x4374f2*/
      v28 = aP8->LockCount; /*0x4374fa*/
      v67 = aP8->Height; /*0x437502*/
      v68 = v28; /*0x437509*/
      v29 = v28 / v67; /*0x43750d*/
      if ( LOBYTE(aP8[1].Width) ) /*0x437513*/
      {
        v18 = aP8->Width /*0x437545*/
            * ((int)&aP7->__pad_0[(unsigned __int16)(*(_WORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 4)
                                                   + *(_WORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 36)
                                                   - v73
                                                   - LOWORD(aP1->Width))]
             / aP8->Width);
      }
      else
      {
        v18 = v29 /*0x437585*/
            * ((int)&aP7->__pad_0[(unsigned __int16)(*(_WORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 4)
                                                   + *(_WORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 36)
                                                   - v75
                                                   - v73
                                                   - LOWORD(aP1->Width)
                                                   + 1)]
             / v29)
            - v75 / v29;
        v64 = v28 - v75 % v29; /*0x437592*/
        if ( v64 == v28 ) /*0x437596*/
        {
          v64 = 0; /*0x43759c*/
          v18 += *(_DWORD *)aP8[1].__pad_0; /*0x4375a4*/
        }
      }
    }
    v30 = v69; /*0x4375a7*/
    v31 = (*(int (__thiscall **)(XSurface *))(*(_DWORD *)v69->__pad_0 + 112))(v69); /*0x4375af*/
    v32 = v74 * v31; /*0x4375b6*/
    if ( v32 == (*(int (__thiscall **)(XSurface *))(*(_DWORD *)v30->__pad_0 + 116))(v30) /*0x4375d8*/
      && (v33 = (*(int (__thiscall **)(XSurface *))(*(_DWORD *)v30->__pad_0 + 116))(v30),
          v33 == (*(int (__thiscall **)(XSurface *))(*(_DWORD *)aP3->__pad_0 + 116))(aP3)) )
    {
      v34 = v78 * v77; /*0x4375e2*/
      if ( v78 * v77 >= v75 * v74 ) /*0x4375ee*/
        v34 = v75 * v74; /*0x4375f0*/
      v35 = *(_DWORD *)aP6->__pad_0; /*0x4375fc*/
      if ( (_BYTE)aP5 ) /*0x4375fe*/
        (*(void (__stdcall **)(int, XSurface *, int, _DWORD, _DWORD, _DWORD, int))(v35 + 12))( /*0x437616*/
          a7,
          aP2,
          v34,
          0,
          0,
          0,
          1000);
      else
        (*(void (__stdcall **)(int, XSurface *, int, _DWORD, _DWORD, _DWORD, int, _DWORD))(v35 + 4))( /*0x437636*/
          a7,
          aP2,
          v34,
          0,
          0,
          0,
          1000,
          0);
    }
    else
    {
      v36 = aP3; /*0x43763e*/
      aP7 = (XSurface *)(*(int (__thiscall **)(XSurface *))(*(_DWORD *)aP3->__pad_0 + 116))(aP3); /*0x437649*/
      v37 = (*(int (__thiscall **)(XSurface *))(*(_DWORD *)v30->__pad_0 + 116))(v30); /*0x437654*/
      a4 = v37; /*0x43765d*/
      if ( *(_DWORD *)&stru_87C374.__pad_579C[23348] ) /*0x437661*/
        v65 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 40); /*0x437666*/
      if ( *(_DWORD *)&stru_87C374.__pad_14B0[4224] ) /*0x437671*/
        v66 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 40); /*0x437676*/
      if ( (_BYTE)aP5 ) /*0x437680*/
      {
        a4 = -v37; /*0x437690*/
        aP7 = (XSurface *)-(int)aP7; /*0x43769c*/
        v38 = *(_DWORD *)v36->__pad_0; /*0x4376a0*/
        v66 = -v66; /*0x4376a4*/
        v65 = -v65; /*0x4376aa*/
        v39 = (*(int (__thiscall **)(XSurface *))(v38 + 116))(v36); /*0x4376ae*/
        v40 = *(_DWORD *)v30->__pad_0; /*0x4376b5*/
        aP2 = (XSurface *)((char *)aP2 + (v78 - 1) * v39); /*0x4376c1*/
        v41 = (*(int (__thiscall **)(XSurface *))(v40 + 116))(v30); /*0x4376c7*/
        v42 = v78; /*0x4376d3*/
        v43 = (v75 - 1) * v41 + a7; /*0x4376da*/
        a7 = v43; /*0x4376e3*/
        if ( *(_DWORD *)&stru_87C374.__pad_579C[23348] ) /*0x4376e7*/
        {
          v44 = SamplePosition + 2 * (v78 + 0x7FFFFFFF * *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 40)); /*0x4376fb*/
          if ( v44 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x437703*/
            v44 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x437705*/
          SamplePosition = v44; /*0x43770d*/
          v18 += 1 - v78; /*0x437713*/
        }
        if ( *(_DWORD *)&stru_87C374.__pad_14B0[4224] ) /*0x43771d*/
        {
          v45 = v61 + 2 * (v78 + 0x7FFFFFFF * *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 40)); /*0x437731*/
          if ( v45 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 28) ) /*0x437739*/
            v45 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 32); /*0x43773b*/
          v61 = v45; /*0x43773e*/
        }
      }
      else
      {
        v42 = v78; /*0x437744*/
        v43 = a7; /*0x437748*/
      }
      if ( v42 >= v75 ) /*0x437752*/
        v42 = v75; /*0x437754*/
      if ( (_BYTE)aP5 ) /*0x43775c*/
      {
        if ( v42 > 0 ) /*0x437764*/
        {
          v46 = a10; /*0x43776a*/
          v47 = a11; /*0x43776e*/
          v48 = aP2; /*0x437775*/
          v70 = v42; /*0x437779*/
          v49 = (XSurface **)aP6; /*0x43777d*/
          while ( 1 ) /*0x43778e*/
          {
            if ( (_WORD)v47 ) /*0x437791*/
            {
              aP6 = *v49; /*0x43779a*/
              v50 = SamplePosition; /*0x43779e*/
              (*(void (__thiscall **)(XSurface **, int, XSurface *, int, int, unsigned int, unsigned int, int, int))aP6[1].__pad_0)( /*0x4377b6*/
                v49,
                v43,
                v48,
                v77,
                v18,
                SamplePosition,
                v61,
                v46,
                v47);
            }
            else
            {
              v50 = SamplePosition; /*0x4377bb*/
              ((void (__thiscall *)(XSurface **, int, XSurface *, int, int, unsigned int, unsigned int, int))(*v49)->LockCount)( /*0x4377d4*/
                v49,
                v43,
                v48,
                v77,
                v18,
                SamplePosition,
                v61,
                v46);
            }
            v43 = a4 + a7; /*0x4377e3*/
            a7 += a4; /*0x4377e9*/
            v48 = (XSurface *)((char *)aP2 + (_DWORD)aP7); /*0x4377ed*/
            aP2 = (XSurface *)((char *)aP2 + (_DWORD)aP7); /*0x4377f7*/
            if ( *(_DWORD *)&stru_87C374.__pad_579C[23348] ) /*0x4377fb*/
            {
              v51 = v50 + 2 * v65; /*0x437801*/
              if ( v51 < *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 24) ) /*0x437809*/
                v51 += *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x43780b*/
              SamplePosition = v51; /*0x437812*/
              v52 = v67 + v64; /*0x43781a*/
              v64 += v67; /*0x437822*/
              if ( v64 >= v68 ) /*0x437826*/
              {
                v18 += *(_DWORD *)aP8[1].__pad_0; /*0x43782c*/
                v64 = v52 - v68; /*0x437831*/
              }
            }
            if ( *(_DWORD *)&stru_87C374.__pad_14B0[4224] ) /*0x43783d*/
            {
              v53 = v61 + 2 * v66; /*0x437847*/
              if ( v53 < *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 24) ) /*0x43784f*/
                v53 += *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 32); /*0x437851*/
              v61 = v53; /*0x437854*/
            }
            if ( !--v70 ) /*0x437861*/
              break; /*0x437861*/
            v46 = a10; /*0x437783*/
            v47 = a11; /*0x437787*/
          }
        }
      }
      else if ( v42 > 0 ) /*0x43786e*/
      {
        v54 = a10; /*0x437874*/
        v55 = a11; /*0x437878*/
        v70 = v42; /*0x43787f*/
        v56 = (XSurface **)aP6; /*0x437883*/
        while ( 1 ) /*0x437894*/
        {
          if ( (_WORD)v55 ) /*0x437897*/
          {
            aP6 = *v56; /*0x4378a1*/
            v57 = SamplePosition; /*0x4378a5*/
            ((void (__thiscall *)(XSurface **, int, XSurface *, int, int, unsigned int, unsigned int, int, int, int))aP6->Height)( /*0x4378c1*/
              v56,
              v43,
              aP2,
              v77,
              v18,
              SamplePosition,
              v61,
              v54,
              v21,
              v55);
          }
          else
          {
            v57 = SamplePosition; /*0x4378c6*/
            ((void (__thiscall *)(XSurface **, int, XSurface *, int, int, unsigned int, unsigned int, int, int))(*v56)->Width)( /*0x4378e4*/
              v56,
              v43,
              aP2,
              v77,
              v18,
              SamplePosition,
              v61,
              v54,
              v21);
          }
          v43 = a4 + a7; /*0x4378f3*/
          v21 ^= 3u; /*0x4378f9*/
          a7 += a4; /*0x4378fe*/
          aP2 = (XSurface *)((char *)aP2 + (_DWORD)aP7); /*0x437902*/
          if ( *(_DWORD *)&stru_87C374.__pad_579C[23348] ) /*0x43790e*/
          {
            v58 = v57 + 2 * v65; /*0x437914*/
            if ( v58 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x43791c*/
              v58 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x43791e*/
            SamplePosition = v58; /*0x437925*/
            v59 = v67 + v64; /*0x43792d*/
            v64 += v67; /*0x437935*/
            if ( v64 >= v68 ) /*0x437939*/
            {
              v18 += *(_DWORD *)aP8[1].__pad_0; /*0x43793f*/
              v64 = v59 - v68; /*0x437944*/
            }
          }
          if ( *(_DWORD *)&stru_87C374.__pad_14B0[4224] ) /*0x437950*/
          {
            v60 = v61 + 2 * v66; /*0x43795a*/
            if ( v60 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 28) ) /*0x437962*/
              v60 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 32); /*0x437964*/
            v61 = v60; /*0x437967*/
          }
          if ( !--v70 ) /*0x437974*/
            break; /*0x437974*/
          v55 = a11; /*0x437889*/
          v54 = a10; /*0x437890*/
        }
      }
      v30 = v69; /*0x43797a*/
    }
    (*(void (__thiscall **)(XSurface *))(*(_DWORD *)v30->__pad_0 + 96))(v30); /*0x437982*/
    (*(void (__thiscall **)(XSurface *))(*(_DWORD *)aP3->__pad_0 + 96))(aP3); /*0x43798b*/
    return 1; /*0x43798e*/
  }
  return result; /*0x43746a*/
}
}
} // namespace gamemd

// 0x4379A0
namespace gamemd {
int sub_4379A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __fastcall sub_4379A0(
        IUnknown *a1,
        IUnknown *a2,
        _DWORD *a4,
        int arg4,
        TechnoClass *aP6,
        int a6,
        int a7,
        TechnoClass *aP9,
        int a9)
{
  int *v11; // eax
  int *v13; // [esp-28h] [ebp-54h]
  _BYTE v14[20]; // [esp+Ch] [ebp-20h] BYREF
  int v15[3]; // [esp+20h] [ebp-Ch] BYREF

  v13 = (int *)(*(int (__thiscall **)(_DWORD *, _BYTE *, int))(*a4 + 120))(a4, v14, arg4); /*0x4379e4*/
  v11 = (int *)(*(int (__thiscall **)(IUnknown *))(a1->field_0 + 120))(a1); /*0x4379ec*/
  return BlitterRLEBlitSHP(a1, v11, (TechnoClass *)v15, a2, a4, v13, aP6, a6, a7, aP9, a9, 0, 0, 0, 0); /*0x4379f8*/
}
}
} // namespace gamemd

// 0x437A10
namespace gamemd {
int BlitterRLEBlitSHP()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __fastcall BlitterRLEBlitSHP(
        IUnknown *aP0,
        int *a1,
        TechnoClass *aP2,
        IUnknown *aP3,
        _DWORD *a4,
        int *a5,
        TechnoClass *aP6,
        int a8,
        int a9,
        TechnoClass *aP9,
        int a11,
        int a12,
        TechnoClass *aP12,
        int a14,
        int a15)
{
  int v16; // edx
  int v17; // esi
  int v18; // ebp
  int v19; // ebx
  bool result; // al
  _DWORD *v21; // eax
  _DWORD *v22; // eax
  MouseClass *v23; // edx
  int v24; // esi
  MouseClass *v25; // esi
  int v26; // ecx
  int v27; // eax
  int *v28; // ebp
  int v29; // eax
  int v30; // ecx
  MouseClass *v31; // ebp
  MouseClass *v32; // edi
  unsigned __int16 *v33; // edi
  int v34; // eax
  IUnknown *v35; // ebp
  int LockCount; // eax
  int v37; // edx
  unsigned int v38; // eax
  char *v39; // eax
  unsigned int v40; // eax
  AbstractClass *v41; // [esp+24h] [ebp-80h]
  char *v42; // [esp+38h] [ebp-6Ch]
  unsigned int SamplePosition; // [esp+3Ch] [ebp-68h]
  unsigned int v44; // [esp+40h] [ebp-64h]
  int v46; // [esp+48h] [ebp-5Ch]
  char *v47; // [esp+4Ch] [ebp-58h]
  int v48; // [esp+50h] [ebp-54h]
  int v49; // [esp+54h] [ebp-50h]
  int v50; // [esp+58h] [ebp-4Ch]
  int v51; // [esp+5Ch] [ebp-48h]
  int v52; // [esp+60h] [ebp-44h]
  char v53[8]; // [esp+64h] [ebp-40h] BYREF
  AbstractClass aP1; // [esp+6Ch] [ebp-38h] BYREF
  int v55; // [esp+90h] [ebp-14h]
  XSurface v56; // [esp+94h] [ebp-10h] BYREF
  int aP2b; // [esp+A8h] [ebp+4h]
  TechnoClass *aP2a; // [esp+A8h] [ebp+4h]
  _DWORD *a4a; // [esp+B0h] [ebp+Ch]
  int *a5a; // [esp+B4h] [ebp+10h]
  int v61; // [esp+BCh] [ebp+18h]
  int v62; // [esp+C0h] [ebp+1Ch]

  v16 = a5[1]; /*0x437a23*/
  *(_DWORD *)v56.__pad_0 = *a5; /*0x437a26*/
  v56.Width = v16; /*0x437a2a*/
  v17 = 0; /*0x437a2e*/
  SamplePosition = 0; /*0x437a33*/
  v56.Height = a5[2]; /*0x437a37*/
  v44 = 0; /*0x437a3b*/
  v56.LockCount = a5[3]; /*0x437a49*/
  v42 = 0; /*0x437a4d*/
  v49 = 0; /*0x437a53*/
  aP1.nextArrayIndex = *(_DWORD *)aP2->__pad_0; /*0x437a57*/
  v51 = 0; /*0x437a5b*/
  a5a = 0; /*0x437a62*/
  aP1.referenceCount = *(_DWORD *)&aP2->__pad_0[4]; /*0x437a69*/
  v46 = 0; /*0x437a6d*/
  v47 = 0; /*0x437a74*/
  aP1.NeedsSaveOrLink = *(void **)&aP2->__pad_0[8]; /*0x437a78*/
  v55 = *(_DWORD *)&aP2->__pad_0[12]; /*0x437a8d*/
  v18 = 24 * a9 + 8484624; /*0x437a9c*/
  v50 = 0; /*0x437aa7*/
  v19 = 0; /*0x437aab*/
  v52 = v18; /*0x437aad*/
  result = IntersectSurfaceRects((IUnknown *)&aP1.nextArrayIndex, (int)a1, &v56, (int)a4); /*0x437ab1*/
  if ( !result ) /*0x437ab8*/
    return result; /*0x437ab8*/
  v62 = *(_DWORD *)v56.__pad_0 - *a4; /*0x437ad6*/
  v48 = v56.Width - a4[1]; /*0x437ae7*/
  v41 = (AbstractClass *)CellStruct::Copy(&aP1.nextArrayIndex, (IUnknown *)v53); /*0x437afd*/
  v21 = CellStruct::Copy(a1, (IUnknown *)&aP1.__pad_0[8]); /*0x437b02*/
  v22 = Coord2D::Add(v21, &aP1, v41); /*0x437b09*/
  a4a = (_DWORD *)(*(int (__thiscall **)(IUnknown *, _DWORD, _DWORD))(aP0->field_0 + 92))(aP0, *v22, v22[1]); /*0x437b28*/
  if ( !a4a ) /*0x437b2f*/
    return 0; /*0x437b3a*/
  if ( *(_DWORD *)&stru_87C374.__pad_579C[23348] ) /*0x437b45*/
  {
    v23 = (MouseClass *)(*a1 + aP1.nextArrayIndex); /*0x437b5c*/
    v24 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 4); /*0x437b5e*/
    *(_DWORD *)&aP1.__pad_0[12] = aP1.referenceCount + a1[1]; /*0x437b61*/
    v25 = (MouseClass *)(*(_DWORD *)&aP1.__pad_0[12] - v24); /*0x437b67*/
    SamplePosition = Audio::GetSamplePosition(*(int *)&stru_87C374.__pad_579C[23348], v23, v25); /*0x437b73*/
    v46 = *(_DWORD *)(v18 + 8); /*0x437b7c*/
    a5a = 0; /*0x437b80*/
    v47 = *(char **)(v18 + 12); /*0x437b91*/
    v49 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 40); /*0x437b95*/
    v26 = (int)v47 / v46; /*0x437b9e*/
    if ( *(_BYTE *)(v18 + 20) ) /*0x437ba0*/
    {
      v27 = a12; /*0x437bcd*/
      v17 = *(_DWORD *)(v18 + 4) /*0x437bd4*/
          * ((a8 + (unsigned __int16)(*(_WORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 36) - (_WORD)v25))
           / *(_DWORD *)(v18 + 4));
      if ( a12 ) /*0x437bd9*/
      {
LABEL_7:
        v28 = (int *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v27 + 120))(v27, &aP1.__pad_0[8]); /*0x437bdf*/
        v29 = *v28; /*0x437bed*/
        v50 = v28[2]; /*0x437bf6*/
        v30 = a14 + v28[1]; /*0x437c0d*/
        aP1.abstractFlags = v28[3]; /*0x437c16*/
        v42 = (char *)(*(int (__thiscall **)(int, char *, int))(*(_DWORD *)a12 + 92))( /*0x437c30*/
                        a12,
                        &aP12->__pad_0[v29 + v62],
                        v30 + v48);
        goto LABEL_12; /*0x437c34*/
      }
    }
    else
    {
      v17 = a8 /*0x437c67*/
          + (unsigned __int16)(*(_WORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 4)
                             + *(_WORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 36)
                             - *((_WORD *)a1 + 2)
                             - *(_WORD *)&aP2->__pad_0[12]
                             - *(_WORD *)&aP2->__pad_0[4]
                             + 1);
      v27 = a12; /*0x437c69*/
      if ( a12 ) /*0x437c72*/
        goto LABEL_7; /*0x437c72*/
      aP2b = *(_DWORD *)&aP2->__pad_0[4] + *(_DWORD *)&aP2->__pad_0[12] - aP1.referenceCount; /*0x437c82*/
      v17 = v26 * (v17 / v26) - aP2b / v26; /*0x437c9d*/
      a5a = (int *)&v47[-(aP2b % v26)]; /*0x437cb3*/
      if ( a5a == (int *)v47 ) /*0x437cba*/
      {
        a5a = 0; /*0x437cbf*/
        v17 += *(_DWORD *)(v18 + 16); /*0x437cca*/
      }
    }
    v42 = (char *)&unk_89C568; /*0x437ccc*/
  }
LABEL_12:
  if ( *(_DWORD *)&stru_87C374.__pad_14B0[4224] ) /*0x437cdc*/
  {
    v31 = (MouseClass *)(*a1 + aP1.nextArrayIndex); /*0x437ce7*/
    v32 = (MouseClass *)(aP1.referenceCount + a1[1] - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 4)); /*0x437cfa*/
    v44 = StreamClass::ReadAndSeek(*(int *)&stru_87C374.__pad_14B0[4224], v31, v32); /*0x437d18*/
    v51 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 40); /*0x437d1c*/
    v19 = (2 * ((unsigned __int8)v32 & 1)) | ((unsigned __int8)v31 ^ (unsigned __int8)v32) & 1; /*0x437d20*/
  }
  v33 = (unsigned __int16 *)(*(int (__thiscall **)(IUnknown *, _DWORD, _DWORD))(aP3->field_0 + 92))(aP3, 0, 0); /*0x437d36*/
  if ( v33 ) /*0x437d3a*/
  {
    v34 = v48; /*0x437d51*/
    if ( v48 > 0 ) /*0x437d57*/
    {
      do /*0x437d64*/
      {
        v19 ^= 3u; /*0x437d5b*/
        v33 = (unsigned __int16 *)((char *)v33 + *v33); /*0x437d61*/
        --v34; /*0x437d63*/
      }
      while ( v34 ); /*0x437d64*/
    }
    v35 = aP0; /*0x437d66*/
    v61 = (*(int (__thiscall **)(IUnknown *))(aP0->field_0 + 116))(aP0); /*0x437d76*/
    LockCount = v56.LockCount; /*0x437d7d*/
    if ( v56.LockCount >= v55 ) /*0x437d83*/
      LockCount = v55; /*0x437d85*/
    if ( LockCount > 0 ) /*0x437d89*/
    {
      aP2a = (TechnoClass *)LockCount; /*0x437d96*/
      do /*0x437eda*/
      {
        v37 = *(_DWORD *)aP6->__pad_0; /*0x437da4*/
        if ( (_WORD)a15 ) /*0x437daa*/
          (*(void (__thiscall **)(TechnoClass *, _DWORD *, unsigned __int16 *, int, int, int, unsigned int, unsigned int, TechnoClass *, int, char *, int))(v37 + 8))( /*0x437de4*/
            aP6,
            a4a,
            v33 + 1,
            v56.Height,
            v62,
            v17,
            SamplePosition,
            v44,
            aP9,
            v19,
            v42,
            a15);
        else
          (*(void (__thiscall **)(TechnoClass *, _DWORD *, unsigned __int16 *, int, int, int, unsigned int, unsigned int, TechnoClass *, int, char *))(v37 + 4))( /*0x437e20*/
            aP6,
            a4a,
            v33 + 1,
            v56.Height,
            v62,
            v17,
            SamplePosition,
            v44,
            aP9,
            v19,
            v42);
        a4a = (_DWORD *)((char *)a4a + v61); /*0x437e38*/
        v19 ^= 3u; /*0x437e45*/
        v33 = (unsigned __int16 *)((char *)v33 + *v33); /*0x437e48*/
        if ( *(_DWORD *)&stru_87C374.__pad_579C[23348] ) /*0x437e4c*/
        {
          v38 = SamplePosition + 2 * v49; /*0x437e56*/
          if ( v38 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x437e5e*/
            v38 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x437e60*/
          SamplePosition = v38; /*0x437e63*/
          if ( a12 ) /*0x437e70*/
          {
            v42 += v50; /*0x437e7c*/
          }
          else
          {
            v39 = (char *)a5a + v46; /*0x437e8d*/
            a5a = (int *)((char *)a5a + v46); /*0x437e95*/
            if ( (int)a5a >= (int)v47 ) /*0x437e9c*/
            {
              v17 += *(_DWORD *)(v52 + 16); /*0x437ea2*/
              a5a = (int *)(v39 - v47); /*0x437ea7*/
            }
          }
          v40 = v44 + 2 * v51; /*0x437eb6*/
          if ( v40 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 28) ) /*0x437ec2*/
            v40 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 32); /*0x437ec4*/
          v44 = v40; /*0x437ec7*/
        }
        aP2a = (TechnoClass *)((char *)aP2a - 1); /*0x437ed3*/
      }
      while ( aP2a ); /*0x437eda*/
      v35 = aP0; /*0x437ee0*/
    }
    (*(void (__thiscall **)(IUnknown *))(v35->field_0 + 96))(v35); /*0x437ee9*/
    (*(void (__thiscall **)(IUnknown *))(aP3->field_0 + 96))(aP3); /*0x437ef5*/
    return 1; /*0x437ef8*/
  }
  else
  {
    (*(void (__thiscall **)(IUnknown *))(aP0->field_0 + 96))(aP0); /*0x437d42*/
    return 0; /*0x437d45*/
  }
}
}
} // namespace gamemd

// 0x437F50
namespace gamemd {
unsigned int * sub_437F50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_437F50(_DWORD *this)
{
  HRESULT v2; // esi
  LPVOID ppv; // [esp+Ch] [ebp-4h] BYREF

  *this = 0; /*0x437f68*/
  v2 = CoCreateInstance(&stru_7E9500, 0, 7u, &riid, &ppv); /*0x437f74*/
  if ( v2 < 0 ) /*0x437f78*/
    goto LABEL_5; /*0x437f78*/
  v2 = OleRun((LPUNKNOWN)ppv); /*0x437f85*/
  if ( v2 >= 0 ) /*0x437f89*/
    v2 = (**(int (__stdcall ***)(LPVOID, void *, _DWORD *))ppv)(ppv, &unk_818C08, this); /*0x437f9a*/
  (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 8))(ppv); /*0x437fa3*/
  if ( v2 < 0 ) /*0x437fa8*/
  {
LABEL_5:
    if ( v2 != -2147467262 ) /*0x437fb0*/
      WinAPI::Wrapper(v2); /*0x437fb3*/
  }
  return this; /*0x437fba*/
}
}
} // namespace gamemd

// 0x438340
namespace gamemd {
void sub_438340()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_438340()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x43834c*/
  unk_89C6A0 = Math::Sqrt(v0 + v0); /*0x43835e*/
}
}
} // namespace gamemd

// 0x438370
namespace gamemd {
void sub_438370()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_438370()
{
  unk_89C6F0 = unk_89C6A0 / 60.0; /*0x43837c*/
}
}
} // namespace gamemd

// 0x438390
namespace gamemd {
void sub_438390()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_438390()
{
  unk_89C6D8 = 1.0 / unk_89C6F0; /*0x43839c*/
}
}
} // namespace gamemd

// 0x4383B0
namespace gamemd {
void sub_4383B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4383B0()
{
  unk_89C6D0 = 0.0174532925199433 * 45.0; /*0x4383bc*/
}
}
} // namespace gamemd

// 0x4383D0
namespace gamemd {
void sub_4383D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4383D0()
{
  unk_89C6A8 = 0.0174532925199433 * 60.0; /*0x4383dc*/
}
}
} // namespace gamemd

// 0x4383F0
namespace gamemd {
void sub_4383F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4383F0()
{
  unk_89C680 = 0.0174532925199433 * 90.0; /*0x4383fc*/
}
}
} // namespace gamemd

// 0x438410
namespace gamemd {
long long sub_438410()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_438410()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_89C680 - unk_89C6A8); /*0x438422*/
  result = Math::RoundToInt(v0 * unk_89C6A0 * 0.5); /*0x438436*/
  unk_89C6F8 = result; /*0x43843b*/
  return result; /*0x438440*/
}
}
} // namespace gamemd

// 0x438450
namespace gamemd {
void sub_438450()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_438450()
{
  unk_89C6B0 = Math::ArcTan((double)unk_89C6F8 * 0.00390625); /*0x438467*/
}
}
} // namespace gamemd

// 0x438480
namespace gamemd {
void sub_438480()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_438480()
{
  unk_89C6C8 = Math::ArcTan((double)(2 * unk_89C6F8) / unk_89C6A0); /*0x4384a2*/
}
}
} // namespace gamemd

// 0x4384B0
namespace gamemd {
long long sub_4384B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_4384B0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * unk_89C6F8) + 0.5); /*0x4384cb*/
  unk_89C6EC = result; /*0x4384d0*/
  return result; /*0x4384d6*/
}
}
} // namespace gamemd

// 0x4384E0
namespace gamemd {
int sub_4384E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4384E0()
{
  unk_89C698 = 0; /*0x4384e2*/
  unk_89C69A = 0; /*0x4384e8*/
  return 0; /*0x4384ee*/
}
}
} // namespace gamemd

// 0x4384F0
namespace gamemd {
int sub_4384F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4384F0()
{
  unk_89C6B8 = 0; /*0x4384f2*/
  unk_89C6BC = 0; /*0x4384f7*/
  unk_89C6C0 = 0; /*0x4384fc*/
  return 0; /*0x438501*/
}
}
} // namespace gamemd

// 0x438510
namespace gamemd {
int sub_438510()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_438510()
{
  unk_89C6E8 = 0; /*0x438515*/
  unk_89C6E0 = 128; /*0x43851f*/
  unk_89C6E4 = 128; /*0x438524*/
  return 128; /*0x438529*/
}
}
} // namespace gamemd

// 0x438530
namespace gamemd {
int sub_438530()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_438530()
{
  unk_89C688 = 0; /*0x438532*/
  unk_89C68C = 0; /*0x438537*/
  unk_89C690 = 0; /*0x43853c*/
  unk_89C694 = 0; /*0x438541*/
  return 0; /*0x438546*/
}
}
} // namespace gamemd

// 0x438590
namespace gamemd {
void sub_438590()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_438590()
{
  dword_89C668 = (int)&VectorClass<BombClass *>::`vftable'; /*0x438598*/
  if ( unk_89C66C && unk_89C675 ) /*0x4385ac*/
  {
    __3_YAXPAX_Z(unk_89C66C); /*0x4385af*/
    unk_89C66C = 0; /*0x4385b7*/
  }
  unk_89C675 = 0; /*0x4385bd*/
  dword_89C670 = 0; /*0x4385c3*/
}
}
} // namespace gamemd

// 0x438A60
namespace gamemd {
Iostream_init * __0Iostream_init_QAE_XZ_1()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
Iostream_init *__thiscall __0Iostream_init_QAE_XZ_1(Iostream_init *this)
{
  return this; /*0x438a62*/
}
}
} // namespace gamemd

// 0x438E60
namespace gamemd {
void nullsub_99()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void nullsub_99()
{
  ; /*0x438e60*/
}
}
} // namespace gamemd

// 0x439480
namespace gamemd {
int sub_439480()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_439480()
{
  unk_89C708 = 0; /*0x439482*/
  unk_89C70C = 0; /*0x439487*/
  unk_89C710 = 0; /*0x43948c*/
  unk_89C714 = 0; /*0x439491*/
  return 0; /*0x439496*/
}
}
} // namespace gamemd

// 0x4394A0
namespace gamemd {
void sub_4394A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4394A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4394ac*/
  unk_89C720 = Math::Sqrt(v0 + v0); /*0x4394be*/
}
}
} // namespace gamemd

// 0x4394D0
namespace gamemd {
void sub_4394D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4394D0()
{
  unk_89C770 = unk_89C720 / 60.0; /*0x4394dc*/
}
}
} // namespace gamemd

// 0x4394F0
namespace gamemd {
void sub_4394F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4394F0()
{
  unk_89C758 = 1.0 / unk_89C770; /*0x4394fc*/
}
}
} // namespace gamemd

// 0x439510
namespace gamemd {
void sub_439510()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_439510()
{
  unk_89C750 = 0.0174532925199433 * 45.0; /*0x43951c*/
}
}
} // namespace gamemd

// 0x439530
namespace gamemd {
void sub_439530()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_439530()
{
  unk_89C728 = 0.0174532925199433 * 60.0; /*0x43953c*/
}
}
} // namespace gamemd

// 0x439550
namespace gamemd {
void sub_439550()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_439550()
{
  unk_89C700 = 0.0174532925199433 * 90.0; /*0x43955c*/
}
}
} // namespace gamemd

// 0x439570
namespace gamemd {
long long sub_439570()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_439570()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_89C700 - unk_89C728); /*0x439582*/
  result = Math::RoundToInt(v0 * unk_89C720 * 0.5); /*0x439596*/
  unk_89C778 = result; /*0x43959b*/
  return result; /*0x4395a0*/
}
}
} // namespace gamemd

// 0x4395B0
namespace gamemd {
void sub_4395B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4395B0()
{
  unk_89C730 = Math::ArcTan((double)unk_89C778 * 0.00390625); /*0x4395c7*/
}
}
} // namespace gamemd

// 0x4395E0
namespace gamemd {
void sub_4395E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_4395E0()
{
  unk_89C748 = Math::ArcTan((double)(2 * unk_89C778) / unk_89C720); /*0x439602*/
}
}
} // namespace gamemd

// 0x439610
namespace gamemd {
long long sub_439610()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_439610()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * unk_89C778) + 0.5); /*0x43962b*/
  unk_89C76C = result; /*0x439630*/
  return result; /*0x439636*/
}
}
} // namespace gamemd

// 0x439640
namespace gamemd {
int sub_439640()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_439640()
{
  unk_89C718 = 0; /*0x439642*/
  unk_89C71A = 0; /*0x439648*/
  return 0; /*0x43964e*/
}
}
} // namespace gamemd

// 0x439650
namespace gamemd {
int sub_439650()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_439650()
{
  unk_89C738 = 0; /*0x439652*/
  unk_89C73C = 0; /*0x439657*/
  unk_89C740 = 0; /*0x43965c*/
  return 0; /*0x439661*/
}
}
} // namespace gamemd

// 0x439670
namespace gamemd {
int sub_439670()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_439670()
{
  unk_89C768 = 0; /*0x439675*/
  unk_89C760 = 128; /*0x43967f*/
  unk_89C764 = 128; /*0x439684*/
  return 128; /*0x439689*/
}
}
} // namespace gamemd

// 0x43A160
namespace gamemd {
void sub_43A160()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_43A160()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x43a16c*/
  unk_89C790 = Math::Sqrt(v0 + v0); /*0x43a17e*/
}
}
} // namespace gamemd

// 0x43A190
namespace gamemd {
void sub_43A190()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_43A190()
{
  unk_89C7E0 = unk_89C790 / 60.0; /*0x43a19c*/
}
}
} // namespace gamemd

// 0x43A1B0
namespace gamemd {
void sub_43A1B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_43A1B0()
{
  unk_89C7C8 = 1.0 / unk_89C7E0; /*0x43a1bc*/
}
}
} // namespace gamemd

// 0x43A1D0
namespace gamemd {
void sub_43A1D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_43A1D0()
{
  unk_89C7C0 = 0.0174532925199433 * 45.0; /*0x43a1dc*/
}
}
} // namespace gamemd

// 0x43A1F0
namespace gamemd {
void sub_43A1F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_43A1F0()
{
  unk_89C798 = 0.0174532925199433 * 60.0; /*0x43a1fc*/
}
}
} // namespace gamemd

// 0x43A210
namespace gamemd {
void sub_43A210()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_43A210()
{
  unk_89C780 = 0.0174532925199433 * 90.0; /*0x43a21c*/
}
}
} // namespace gamemd

// 0x43A230
namespace gamemd {
long long sub_43A230()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_43A230()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_89C780 - unk_89C798); /*0x43a242*/
  result = Math::RoundToInt(v0 * unk_89C790 * 0.5); /*0x43a256*/
  unk_89C7E8 = result; /*0x43a25b*/
  return result; /*0x43a260*/
}
}
} // namespace gamemd

// 0x43A270
namespace gamemd {
void sub_43A270()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_43A270()
{
  unk_89C7A0 = Math::ArcTan((double)unk_89C7E8 * 0.00390625); /*0x43a287*/
}
}
} // namespace gamemd

// 0x43A2A0
namespace gamemd {
void sub_43A2A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_43A2A0()
{
  unk_89C7B8 = Math::ArcTan((double)(2 * unk_89C7E8) / unk_89C790); /*0x43a2c2*/
}
}
} // namespace gamemd

// 0x43A2D0
namespace gamemd {
long long sub_43A2D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_43A2D0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * unk_89C7E8) + 0.5); /*0x43a2eb*/
  unk_89C7DC = result; /*0x43a2f0*/
  return result; /*0x43a2f6*/
}
}
} // namespace gamemd

// 0x43A300
namespace gamemd {
int sub_43A300()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_43A300()
{
  unk_89C788 = 0; /*0x43a302*/
  unk_89C78A = 0; /*0x43a308*/
  return 0; /*0x43a30e*/
}
}
} // namespace gamemd

// 0x43A310
namespace gamemd {
int sub_43A310()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_43A310()
{
  unk_89C7A8 = 0; /*0x43a312*/
  unk_89C7AC = 0; /*0x43a317*/
  unk_89C7B0 = 0; /*0x43a31c*/
  return 0; /*0x43a321*/
}
}
} // namespace gamemd

// 0x43A330
namespace gamemd {
int sub_43A330()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_43A330()
{
  unk_89C7D8 = 0; /*0x43a335*/
  unk_89C7D0 = 128; /*0x43a33f*/
  unk_89C7D4 = 128; /*0x43a344*/
  return 128; /*0x43a349*/
}
}
} // namespace gamemd

// 0x43A600
namespace gamemd {
void sub_43A600()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_43A600(BrainClass *this)
{
  int v2; // esi
  int v3; // ebp
  int v4; // ecx
  void *v5; // eax

  v2 = 0; /*0x43a608*/
  this->vfptr = &BrainClass::`vftable'; /*0x43a60a*/
  v3 = *((_DWORD *)this + 5); /*0x43a610*/
  if ( v3 > 0 ) /*0x43a615*/
  {
    do /*0x43a632*/
    {
      v4 = *(_DWORD *)(*((_DWORD *)this + 2) + 4 * v2); /*0x43a61a*/
      if ( v4 ) /*0x43a61f*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 32))(v4, 1); /*0x43a625*/
      ++v2; /*0x43a62b*/
      *(_DWORD *)(*((_DWORD *)this + 2) + 4 * v2 - 4) = 0; /*0x43a62e*/
    }
    while ( v2 < v3 ); /*0x43a632*/
  }
  (*(void (__thiscall **)(BrainClass *))(*((_DWORD *)this + 1) + 12))(this + 1); /*0x43a63c*/
  v5 = (void *)*((_DWORD *)this + 2); /*0x43a63f*/
  *((_DWORD *)this + 1) = &VectorClass<NeuronClass *>::`vftable'; /*0x43a642*/
  if ( v5 && *((_BYTE *)this + 17) ) /*0x43a64c*/
  {
    __3_YAXPAX_Z(v5); /*0x43a652*/
    *((_DWORD *)this + 2) = 0; /*0x43a65a*/
  }
  *((_BYTE *)this + 17) = 0; /*0x43a65d*/
  *((_DWORD *)this + 3) = 0; /*0x43a660*/
}
}
} // namespace gamemd

// 0x43A670
namespace gamemd {
int sub_43A670()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_43A670(int *this)
{
  int v2; // esi
  int v3; // ebx
  int v4; // ecx

  v2 = 0; /*0x43a675*/
  v3 = *(this + 5); /*0x43a677*/
  if ( v3 > 0 ) /*0x43a67c*/
  {
    do /*0x43a69d*/
    {
      v4 = *(_DWORD *)(*(this + 2) + 4 * v2); /*0x43a681*/
      if ( v4 ) /*0x43a686*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 32))(v4, 1); /*0x43a68c*/
      ++v2; /*0x43a692*/
      *(_DWORD *)(*(this + 2) + 4 * v2 - 4) = 0; /*0x43a695*/
    }
    while ( v2 < v3 ); /*0x43a69d*/
  }
  return (*(int (__thiscall **)(int *))(*(this + 1) + 12))(this + 1); /*0x43a6a8*/
}
}
} // namespace gamemd

// 0x43A6B0
namespace gamemd {
int sub_43A6B0(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_43A6B0(int *this, int a2, int a3)
{
  int v4; // esi
  int v5; // ebx
  int v6; // ecx

  v4 = 0; /*0x43a6b5*/
  v5 = *(this + 5); /*0x43a6b7*/
  if ( v5 > 0 ) /*0x43a6bc*/
  {
    do /*0x43a6dd*/
    {
      v6 = *(_DWORD *)(*(this + 2) + 4 * v4); /*0x43a6c1*/
      if ( v6 ) /*0x43a6c6*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 32))(v6, 1); /*0x43a6cc*/
      ++v4; /*0x43a6d2*/
      *(_DWORD *)(*(this + 2) + 4 * v4 - 4) = 0; /*0x43a6d5*/
    }
    while ( v4 < v5 ); /*0x43a6dd*/
  }
  (*(void (__thiscall **)(int *))(*(this + 1) + 12))(this + 1); /*0x43a6e5*/
  *(this + 7) = a2; /*0x43a6f0*/
  *(this + 8) = a3; /*0x43a6f3*/
  return a2; /*0x43a6f6*/
}
}
} // namespace gamemd

// 0x43A770
namespace gamemd {
int sub_43A770(unsigned int * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_43A770(_DWORD *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // esi
  int result; // eax
  _DWORD *v6; // eax
  int v7; // ecx
  int v8; // edi
  int v9; // ebp
  _DWORD *v10; // [esp-8h] [ebp-20h]
  int v11; // [esp-4h] [ebp-1Ch]

  v3 = a2; /*0x43a773*/
  if ( !a2 ) /*0x43a77c*/
    return -2147467261; /*0x43a781*/
  v6 = (_DWORD *)*(this + 5); /*0x43a78a*/
  v7 = *a2; /*0x43a78d*/
  v10 = a2; /*0x43a798*/
  a2 = v6; /*0x43a799*/
  result = (*(int (__stdcall **)(_DWORD *, _DWORD **, int, _DWORD))(v7 + 16))(v10, &a2, 4, 0); /*0x43a79d*/
  if ( result >= 0 ) /*0x43a7a2*/
  {
    v8 = 0; /*0x43a7a8*/
    if ( (int)a2 <= 0 ) /*0x43a7ac*/
    {
      return 0; /*0x43a7cd*/
    }
    else
    {
      v9 = a3; /*0x43a7ae*/
      while ( 1 ) /*0x43a7ba*/
      {
        v11 = *(_DWORD *)(*(this + 2) + 4 * v8); /*0x43a7ba*/
        result = (*(int (__stdcall **)(int, _DWORD *, int))(*(_DWORD *)v11 + 24))(v11, v3, v9); /*0x43a7bd*/
        if ( result < 0 ) /*0x43a7c2*/
          break; /*0x43a7c2*/
        if ( ++v8 >= (int)a2 ) /*0x43a7cb*/
          return 0; /*0x43a7cb*/
      }
    }
  }
  return result; /*0x43a77e*/
}
}
} // namespace gamemd

// 0x43AA90
namespace gamemd {
unsigned int * sub_43AA90(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_43AA90(BrainClass *this, char a2)
{
  int v3; // esi
  int v4; // ebp
  int v5; // ecx
  void *v6; // eax

  v3 = 0; /*0x43aa95*/
  this->vfptr = &BrainClass::`vftable'; /*0x43aa97*/
  v4 = *((_DWORD *)this + 5); /*0x43aa9d*/
  if ( v4 > 0 ) /*0x43aaa2*/
  {
    do /*0x43aac3*/
    {
      v5 = *(_DWORD *)(*((_DWORD *)this + 2) + 4 * v3); /*0x43aaa7*/
      if ( v5 ) /*0x43aaac*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 32))(v5, 1); /*0x43aab2*/
      ++v3; /*0x43aab8*/
      *(_DWORD *)(*((_DWORD *)this + 2) + 4 * v3 - 4) = 0; /*0x43aabb*/
    }
    while ( v3 < v4 ); /*0x43aac3*/
  }
  (*(void (__thiscall **)(BrainClass *))(*((_DWORD *)this + 1) + 12))(this + 1); /*0x43aacd*/
  v6 = (void *)*((_DWORD *)this + 2); /*0x43aad0*/
  *((_DWORD *)this + 1) = &VectorClass<NeuronClass *>::`vftable'; /*0x43aad3*/
  if ( v6 && *((_BYTE *)this + 17) ) /*0x43aadd*/
  {
    __3_YAXPAX_Z(v6); /*0x43aae5*/
    *((_DWORD *)this + 2) = 0; /*0x43aaed*/
  }
  *((_BYTE *)this + 17) = 0; /*0x43aaf8*/
  *((_DWORD *)this + 3) = 0; /*0x43aafe*/
  if ( (a2 & 1) != 0 ) /*0x43ab05*/
    __3_YAXPAX_Z(this); /*0x43ab08*/
  return &this->vfptr; /*0x43ab12*/
}
}
} // namespace gamemd

// 0x43ADF0
namespace gamemd {
ObjectClass * sub_43ADF0(unsigned int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ObjectClass *__thiscall sub_43ADF0(_BYTE *this, _DWORD *a1)
{
  *(this + 8) = 0; /*0x43adf6*/
  *(_DWORD *)this = *a1; /*0x43adfc*/
  *((_DWORD *)this + 1) = a1[1]; /*0x43ae01*/
  return (ObjectClass *)this; /*0x43ae04*/
}
}
} // namespace gamemd

// 0x43AF10
namespace gamemd {
unsigned int * sub_43AF10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_43AF10(_DWORD *this)
{
  *this = 0; /*0x43af14*/
  *(this + 1) = 0; /*0x43af16*/
  *((_BYTE *)this + 8) = 0; /*0x43af19*/
  return this; /*0x43af1c*/
}
}
} // namespace gamemd

// 0x43AF40
namespace gamemd {
void sub_43AF40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_43AF40()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x43af4c*/
  unk_89C820 = Math::Sqrt(v0 + v0); /*0x43af5e*/
}
}
} // namespace gamemd

// 0x43AF70
namespace gamemd {
void sub_43AF70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_43AF70()
{
  unk_89C880 = unk_89C820 / 60.0; /*0x43af7c*/
}
}
} // namespace gamemd

// 0x43AF90
namespace gamemd {
void sub_43AF90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_43AF90()
{
  unk_89C868 = 1.0 / unk_89C880; /*0x43af9c*/
}
}
} // namespace gamemd

// 0x43AFB0
namespace gamemd {
void sub_43AFB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_43AFB0()
{
  unk_89C860 = 0.0174532925199433 * 45.0; /*0x43afbc*/
}
}
} // namespace gamemd

// 0x43AFD0
namespace gamemd {
void sub_43AFD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_43AFD0()
{
  unk_89C830 = 0.0174532925199433 * 60.0; /*0x43afdc*/
}
}
} // namespace gamemd

// 0x43AFF0
namespace gamemd {
void sub_43AFF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_43AFF0()
{
  unk_89C7F8 = 0.0174532925199433 * 90.0; /*0x43affc*/
}
}
} // namespace gamemd

// 0x43B010
namespace gamemd {
long long sub_43B010()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_43B010()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_89C7F8 - unk_89C830); /*0x43b022*/
  result = Math::RoundToInt(v0 * unk_89C820 * 0.5); /*0x43b036*/
  unk_89C888 = result; /*0x43b03b*/
  return result; /*0x43b040*/
}
}
} // namespace gamemd

// 0x43B050
namespace gamemd {
void sub_43B050()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_43B050()
{
  unk_89C840 = Math::ArcTan((double)unk_89C888 * 0.00390625); /*0x43b067*/
}
}
} // namespace gamemd

// 0x43B080
namespace gamemd {
void sub_43B080()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_43B080()
{
  unk_89C858 = Math::ArcTan((double)(2 * unk_89C888) / unk_89C820); /*0x43b0a2*/
}
}
} // namespace gamemd

// 0x43B0B0
namespace gamemd {
long long sub_43B0B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_43B0B0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * unk_89C888) + 0.5); /*0x43b0cb*/
  unk_89C87C = result; /*0x43b0d0*/
  return result; /*0x43b0d6*/
}
}
} // namespace gamemd

// 0x43B0E0
namespace gamemd {
int sub_43B0E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_43B0E0()
{
  dword_89C818 = 0; /*0x43b0e2*/
  return 0; /*0x43b0ee*/
}
}
} // namespace gamemd

// 0x43B0F0
namespace gamemd {
int sub_43B0F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_43B0F0()
{
  aP5 = 0; /*0x43b0f2*/
  unk_89C84C = 0; /*0x43b0f7*/
  unk_89C850 = 0; /*0x43b0fc*/
  return 0; /*0x43b101*/
}
}
} // namespace gamemd

// 0x43B110
namespace gamemd {
int sub_43B110()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_43B110()
{
  unk_89C878 = 0; /*0x43b115*/
  unk_89C870 = 128; /*0x43b11f*/
  unk_89C874 = 128; /*0x43b124*/
  return 128; /*0x43b129*/
}
}
} // namespace gamemd

// 0x43B130
namespace gamemd {
int sub_43B130()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_43B130()
{
  unk_89C808 = 0; /*0x43b132*/
  unk_89C80C = 0; /*0x43b137*/
  unk_89C810 = 0; /*0x43b13c*/
  unk_89C814 = 0; /*0x43b141*/
  return 0; /*0x43b146*/
}
}
} // namespace gamemd

// 0x43EE50
namespace gamemd {
int sub_43EE50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_43EE50(_DWORD *this)
{
  _DWORD *Value; // eax
  int v3; // esi
  int result; // eax
  int v5; // [esp+8h] [ebp-4h] BYREF

  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 1020))(this) || !*(this + 352) ) /*0x43ee63*/
    return 0; /*0x43eea7*/
  Value = ProgressTimer::GetValue((_WORD *)this + 452, &v5); /*0x43ee76*/
  v3 = *(this + 352); /*0x43ee7d*/
  result = dword_7F4890[((unsigned int)((*Value >> 10) + 1) >> 1) & 0x1F]; /*0x43ee8e*/
  if ( v3 ) /*0x43ee95*/
  {
    *(_DWORD *)(v3 + 172) = result; /*0x43ee97*/
    *(_DWORD *)(v3 + 196) = 0; /*0x43ee9d*/
  }
  return result; /*0x43eea3*/
}
}
} // namespace gamemd
