// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_752CB0_e4.hpp"
#include "e4/classes/E4Recv_7531A0_e4.hpp"
#include "e4/classes/E4Recv_754900_e4.hpp"
#include "e4/classes/E4Recv_755CB0_e4.hpp"
#include "e4/classes/E4Recv_7564A0_e4.hpp"
#include "e4/classes/E4Recv_7564E0_e4.hpp"
#include "e4/classes/E4Recv_756570_e4.hpp"
#include "e4/classes/E4Recv_7589F0_e4.hpp"
#include "e4/classes/E4Recv_758AD0_e4.hpp"
#include "e4/classes/E4Recv_758E10_e4.hpp"
#include "e4/classes/E4Recv_759760_e4.hpp"
#include "e4/classes/E4Recv_759790_e4.hpp"
#include "e4/classes/E4Recv_759BC0_e4.hpp"
#include "e4/classes/E4Recv_75A120_e4.hpp"

// 0x7500F0
namespace gamemd {
int sub_7500F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_7500F0()
{
  MEMORY[0xB1D300] = 0; /*0x7500f2*/
  MEMORY[0xB1D304] = 0; /*0x7500f7*/
  MEMORY[0xB1D308] = 0; /*0x7500fc*/
  MEMORY[0xB1D30C] = 0; /*0x750101*/
  return 0; /*0x750106*/
}
}
} // namespace gamemd

// 0x750110
namespace gamemd {
void sub_750110()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_750110()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x75011c*/
  MEMORY[0xB1D318] = Math::Sqrt(v0 + v0); /*0x75012e*/
}
}
} // namespace gamemd

// 0x750140
namespace gamemd {
void sub_750140()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_750140()
{
  MEMORY[0xB1D398] = MEMORY[0xB1D318] / 60.0; /*0x75014c*/
}
}
} // namespace gamemd

// 0x750160
namespace gamemd {
void sub_750160()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_750160()
{
  MEMORY[0xB1D360] = 1.0 / MEMORY[0xB1D398]; /*0x75016c*/
}
}
} // namespace gamemd

// 0x750180
namespace gamemd {
void sub_750180()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_750180()
{
  MEMORY[0xB1D358] = 0.0174532925199433 * 45.0; /*0x75018c*/
}
}
} // namespace gamemd

// 0x7501A0
namespace gamemd {
void sub_7501A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_7501A0()
{
  MEMORY[0xB1D330] = 0.0174532925199433 * 60.0; /*0x7501ac*/
}
}
} // namespace gamemd

// 0x7501C0
namespace gamemd {
void sub_7501C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_7501C0()
{
  MEMORY[0xB1D2F8] = 0.0174532925199433 * 90.0; /*0x7501cc*/
}
}
} // namespace gamemd

// 0x7501E0
namespace gamemd {
long long sub_7501E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_7501E0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB1D2F8] - MEMORY[0xB1D330]); /*0x7501f2*/
  result = Math::RoundToInt(v0 * MEMORY[0xB1D318] * 0.5); /*0x750206*/
  MEMORY[0xB1D3A0] = result; /*0x75020b*/
  return result; /*0x750210*/
}
}
} // namespace gamemd

// 0x750220
namespace gamemd {
void sub_750220()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_750220()
{
  MEMORY[0xB1D338] = Math::ArcTan((double)MEMORY[0xB1D3A0] * 0.00390625); /*0x750237*/
}
}
} // namespace gamemd

// 0x750250
namespace gamemd {
void sub_750250()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_750250()
{
  MEMORY[0xB1D350] = Math::ArcTan((double)(2 * MEMORY[0xB1D3A0]) / MEMORY[0xB1D318]); /*0x750272*/
}
}
} // namespace gamemd

// 0x750280
namespace gamemd {
long long sub_750280()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_750280()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB1D3A0]) + 0.5); /*0x75029b*/
  MEMORY[0xB1D390] = result; /*0x7502a0*/
  return result; /*0x7502a6*/
}
}
} // namespace gamemd

// 0x7502B0
namespace gamemd {
int sub_7502B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_7502B0()
{
  MEMORY[0xB1D310] = 0; /*0x7502b2*/
  MEMORY[0xB1D312] = 0; /*0x7502b8*/
  return 0; /*0x7502be*/
}
}
} // namespace gamemd

// 0x7502C0
namespace gamemd {
int sub_7502C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_7502C0()
{
  MEMORY[0xB1D340] = 0; /*0x7502c2*/
  MEMORY[0xB1D344] = 0; /*0x7502c7*/
  MEMORY[0xB1D348] = 0; /*0x7502cc*/
  return 0; /*0x7502d1*/
}
}
} // namespace gamemd

// 0x7502E0
namespace gamemd {
int sub_7502E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_7502E0()
{
  MEMORY[0xB1D370] = 0; /*0x7502e5*/
  MEMORY[0xB1D368] = 128; /*0x7502ef*/
  MEMORY[0xB1D36C] = 128; /*0x7502f4*/
  return 128; /*0x7502f9*/
}
}
} // namespace gamemd

// 0x750300
namespace gamemd {
int sub_750300()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_750300()
{
  MEMORY[0xB1D37C] = 0; /*0x750307*/
  MEMORY[0xB1D380] = 0; /*0x75030c*/
  MEMORY[0xB1D384] = 1; /*0x750311*/
  MEMORY[0xB1D385] = 0; /*0x750318*/
  MEMORY[0xB1D378] = (int)&DynamicVectorClass<VocClass *>::`vftable'; /*0x75031d*/
  MEMORY[0xB1D38C] = 10; /*0x750327*/
  MEMORY[0xB1D388] = 0; /*0x750331*/
  return atexit(sub_750340); /*0x75033c*/
}
}
} // namespace gamemd

// 0x750340
namespace gamemd {
void sub_750340()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_750340()
{
  MEMORY[0xB1D378] = (int)&VectorClass<VocClass *>::`vftable'; /*0x750348*/
  if ( MEMORY[0xB1D37C] && MEMORY[0xB1D385] ) /*0x75035c*/
  {
    __3_YAXPAX_Z(MEMORY[0xB1D37C]); /*0x75035f*/
    MEMORY[0xB1D37C] = 0; /*0x750367*/
  }
  MEMORY[0xB1D385] = 0; /*0x75036d*/
  MEMORY[0xB1D380] = 0; /*0x750373*/
}
}
} // namespace gamemd

// 0x750920
namespace gamemd {
int VocClass_Play(int a1, int a2, float a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall VocClass_Play(int a1, int a2, float a3, int a4)
{
  int v5; // ebx
  int v6; // esi
  int v7; // eax
  unsigned int v8; // edi

  if ( !MEMORY[0x8464AC] ) /*0x75092c*/
    return 0; /*0x75092e*/
  v5 = 0; /*0x750935*/
  if ( a1 >= 0 && a1 < MEMORY[0xB1D388] ) /*0x750943*/
    v5 = **((_DWORD **)MEMORY[0xB1D37C] + a1); /*0x75094d*/
  v6 = 0; /*0x750953*/
  if ( a4 ) /*0x750957*/
  {
    v7 = AudioSource::Get(a4); /*0x75095b*/
    v6 = v7; /*0x750960*/
    if ( v7 ) /*0x750964*/
    {
      if ( sub_406310(v7) != v5 ) /*0x75096f*/
      {
        VocClass::Release(v6); /*0x750973*/
        v6 = 0; /*0x750978*/
      }
    }
  }
  if ( v5 ) /*0x75097d*/
  {
    v8 = Math::RoundToInt(a3 * 16384.0); /*0x75098e*/
    if ( v8 >= 0x4000 ) /*0x750996*/
      v8 = 0x4000; /*0x750998*/
    if ( v6 || (v6 = AudioPool::ProcessQueue(v5)) != 0 ) /*0x7509ac*/
    {
      AudioMixer::PlayBuffer(v6, v8); /*0x7509b2*/
      AudioMixer::RequestOrEndBuffer(v6, a2); /*0x7509bd*/
    }
  }
  if ( a4 ) /*0x7509c5*/
    SetAudioSource(v5); /*0x7509cc*/
  return v6; /*0x750931*/
}
}
} // namespace gamemd

// 0x7509E0
namespace gamemd {
int StartAudioControllerAt(AudioController * aP0, int a2, int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall StartAudioControllerAt(AudioController *aP0, int a2, int a1)
{
  int *v5; // esi
  _DWORD *v6; // edi
  AudioMixer *v7; // ebp
  int *eax7; // eax
  double v9; // st7
  CCINIClass *v8; // ebx

  if ( !stru_830620.__pad_579C[67312] ) /*0x7509ea*/
    return 0; /*0x7509ec*/
  v5 = 0; /*0x7509f5*/
  v6 = 0; /*0x7509f7*/
  if ( (int)aP0 >= 0 && (int)aP0 < *(int *)&stru_B1D188.__pad_1D8[40] ) /*0x750a03*/
    v6 = **(_DWORD ***)(*(_DWORD *)&stru_B1D188.__pad_1D8[28] + 4 * (_DWORD)aP0); /*0x750a0d*/
  v7 = (AudioMixer *)a1; /*0x750a0f*/
  if ( a1 ) /*0x750a15*/
  {
    eax7 = AudioSource::Get((int **)a1); /*0x750a19*/
    v5 = eax7; /*0x750a1e*/
    if ( eax7 ) /*0x750a22*/
    {
      if ( (_DWORD *)sub_406310(eax7) != v6 ) /*0x750a2d*/
      {
        VocClass::Release((int)v5); /*0x750a31*/
        v5 = 0; /*0x750a36*/
      }
    }
  }
  if ( v6 ) /*0x750a3a*/
  {
    v9 = ComputeAudioPosition((AudioMixer *)a2, &a1, (int)v6); /*0x750a43*/
    if ( v9 <= 0.0 ) /*0x750a53*/
    {
      if ( v5 ) /*0x750a9a*/
      {
        VocClass::Release((int)v5); /*0x750a9e*/
        v5 = 0; /*0x750aa3*/
      }
    }
    else
    {
      v8 = (CCINIClass *)Math::RoundToInt(v9 * 16384.0); /*0x750a60*/
      if ( (unsigned int)v8 >= 0x4000 ) /*0x750a68*/
        v8 = (CCINIClass *)0x4000; /*0x750a6a*/
      if ( v5 || (v5 = AudioPool::ProcessQueue(v6)) != 0 ) /*0x750a7e*/
      {
        AudioMixer::PlayBuffer(v5, (unsigned int)v8); /*0x750a84*/
        AudioMixer::RequestOrEndBuffer((int)v5, a1); /*0x750a8f*/
      }
    }
  }
  if ( v7 ) /*0x750aa7*/
    SetAudioSource(v7, v5, (int)v6); /*0x750aae*/
  return (int)v5; /*0x7509ee*/
}
}
} // namespace gamemd

// 0x750AC0
namespace gamemd {
double ComputeAudioPosition(AudioMixer * aP0, unsigned int * a1, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
double __fastcall ComputeAudioPosition(AudioMixer *aP0, _DWORD *a1, int a3)
{
  float *v4; // edi
  __int16 v6; // ax
  char v7; // bl
  int v8; // ecx
  int v9; // eax
  double v11; // st7
  double v12; // st7
  double v13; // st6
  double v14; // st7
  double v15; // st7
  float v16; // [esp+10h] [ebp-24h]
  float v17; // [esp+14h] [ebp-20h]
  float v18; // [esp+18h] [ebp-1Ch]
  float v19; // [esp+1Ch] [ebp-18h]
  float v20; // [esp+20h] [ebp-14h]
  float v21; // [esp+20h] [ebp-14h]
  float v22; // [esp+24h] [ebp-10h]
  _DWORD v23[2]; // [esp+2Ch] [ebp-8h] BYREF

  v4 = (float *)a3; /*0x750ac9*/
  *a1 = 0; /*0x750acd*/
  v18 = 0.0; /*0x750ade*/
  v20 = (double)*(int *)&stru_87C374.__pad_579C[21656] * 0.5; /*0x750aec*/
  v22 = (double)*(int *)&stru_87C374.__pad_579C[21660] * 0.5; /*0x750afc*/
  v19 = v20 + v20; /*0x750b06*/
  a3 = 60 * sub_405130(v4); /*0x750b1a*/
  v17 = (float)a3; /*0x750b22*/
  v6 = sub_405160(v4); /*0x750b26*/
  v7 = v6; /*0x750b2b*/
  if ( (v6 & 0x800) == 0 ) /*0x750b30*/
    goto LABEL_7; /*0x750b30*/
  v8 = aP0->AudioMixer_field_00 / 256; /*0x750b4b*/
  v9 = aP0->AudioMixer_field_04 / 256; /*0x750b4e*/
  LOWORD(a3) = v8; /*0x750b58*/
  HIWORD(a3) = v9; /*0x750b5d*/
  if ( (_WORD)v8 == *(_WORD *)stru_B1D188.__pad_188 && (_WORD)v9 == *(_WORD *)&stru_B1D188.__pad_188[2] ) /*0x750b73*/
    return 0.0; /*0x750b82*/
  if ( (*((_BYTE *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&a3) + 300) & 0x18) == 0 ) /*0x750b9b*/
    return 0.0; /*0x750b9d*/
LABEL_7:
  Coord::To_Screen(*(_DWORD **)&stru_87C374.__pad_579C[22548], aP0, (IUnknown *)v23); /*0x750bb9*/
  v11 = (double)v23[0] - v20; /*0x750bc2*/
  v16 = v11; /*0x750bc6*/
  *(float *)&a3 = (float)(int)abs32(Math::RoundToInt(v11)); /*0x750bdc*/
  v12 = (double)(int)abs32(Math::RoundToInt((double)v23[1] - v22)); /*0x750bf6*/
  if ( (v7 & 0x40) == 0 ) /*0x750bfd*/
  {
    v13 = *(float *)&a3 - v20; /*0x750c03*/
    *(float *)&a3 = v13; /*0x750c07*/
    v12 = v12 - v22; /*0x750c11*/
    if ( v13 < 0.0 ) /*0x750c1e*/
      *(float *)&a3 = 0.0; /*0x750c20*/
    if ( v12 < 0.0 ) /*0x750c33*/
      v12 = 0.0; /*0x750c37*/
  }
  v21 = v12 + v12; /*0x750c3f*/
  if ( *(float *)&a3 < (double)v17 && v21 < (double)v17 && v17 > 0.0 ) /*0x750c70*/
  {
    if ( *(float *)&a3 <= (double)v21 ) /*0x750c7f*/
      v14 = v21; /*0x750c87*/
    else
      v14 = *(float *)&a3; /*0x750c81*/
    v18 = (v17 - v14) / v17; /*0x750c95*/
  }
  if ( (v7 & 0x10) != 0 && sub_405140(v4) > v18 ) /*0x750cb0*/
    v18 = sub_405140(v4); /*0x750cb9*/
  if ( v18 < 0.05 ) /*0x750ccc*/
    return 0.0; /*0x750cce*/
  v15 = -v19; /*0x750ce2*/
  if ( v16 >= v15 ) /*0x750cef*/
  {
    if ( v16 > (double)v19 ) /*0x750d06*/
      v16 = v19; /*0x750d0c*/
  }
  else
  {
    v16 = v15; /*0x750cf1*/
  }
  *a1 = Math::RoundToInt(v16 * 8192.0 / v19 + 8192.0); /*0x750d2e*/
  return v18; /*0x750b7b*/
}
}
} // namespace gamemd

// 0x750D40
namespace gamemd {
int * StartAudioController(AudioMixer * ecx0, int ** a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__fastcall StartAudioController(AudioMixer *ecx0, int **a2)
{
  int *result; // eax
  int *v5; // esi
  AudioMixer *eax2; // eax
  AudioMixer *v6; // edi
  double v8; // st7
  int *v9; // eax
  unsigned int v10; // eax
  float v11; // [esp+8h] [ebp-8h]
  unsigned int a1; // [esp+Ch] [ebp-4h] BYREF

  result = 0; /*0x750d43*/
  if ( !a2 ) /*0x750d4d*/
    return result; /*0x750d4d*/
  v5 = AudioSource::Get(a2); /*0x750d5e*/
  eax2 = (AudioMixer *)VocClass::Check((int)a2); /*0x750d60*/
  v6 = eax2; /*0x750d65*/
  if ( !eax2 ) /*0x750d69*/
    goto LABEL_15; /*0x750d69*/
  v8 = ComputeAudioPosition(ecx0, &a1, (int)eax2); /*0x750d76*/
  if ( v8 <= 0.0 ) /*0x750d8a*/
  {
    if ( v5 ) /*0x750e01*/
    {
      VocClass::Release((int)v5); /*0x750e05*/
      v5 = 0; /*0x750e0a*/
    }
    goto LABEL_15; /*0x750e0a*/
  }
  if ( !v5 ) /*0x750d8e*/
  {
    if ( AudioMixer::SetVolume((int)v6) && stru_830620.__pad_579C[67312] ) /*0x750da2*/
    {
      v9 = AudioPool::ProcessQueue(v6); /*0x750da6*/
      v5 = v9; /*0x750dab*/
      if ( !v9 ) /*0x750daf*/
        goto LABEL_15; /*0x750daf*/
      sub_4052E0(v9); /*0x750db3*/
    }
    if ( v5 ) /*0x750dba*/
      goto LABEL_10; /*0x750dba*/
LABEL_15:
    SetAudioSource((AudioMixer *)a2, v5, (int)v6); /*0x750e0c*/
    return v5; /*0x750e16*/
  }
LABEL_10:
  v11 = v8; /*0x750dbc*/
  v10 = Math::RoundToInt(v11 * 16384.0); /*0x750dc6*/
  if ( v10 >= 0x4000 ) /*0x750dd0*/
    v10 = 0x4000; /*0x750dd2*/
  AudioMixer::PlayBuffer(v5, v10); /*0x750ddb*/
  AudioMixer::RequestOrEndBuffer((int)v5, a1); /*0x750de6*/
  SetAudioSource((AudioMixer *)a2, v5, (int)v6); /*0x750df0*/
  return v5; /*0x750df9*/
}
}
} // namespace gamemd

// 0x750E20
namespace gamemd {
int PlayAudioAt2(IUnknown * aP0, unsigned int * a1, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall PlayAudioAt2(IUnknown *aP0, _DWORD *a1, int a3)
{
  int result; // eax
  _DWORD *v6; // esi
  int started; // edi
  int v8; // eax

  if ( (int)aP0 < 0 ) /*0x750e29*/
    return 0; /*0x750e2d*/
  result = (int)LinkedList::Next((int **)stru_B1D188.field_21C); /*0x750e39*/
  v6 = (_DWORD *)result; /*0x750e3e*/
  if ( result ) /*0x750e42*/
  {
    AudioController::Init((_DWORD *)(result + 12)); /*0x750e50*/
    DListNode::InitEmpty(v6); /*0x750e57*/
    v6[12] = 0; /*0x750e5c*/
    v6[8] = *a1; /*0x750e6b*/
    v6[9] = a1[1]; /*0x750e70*/
    v6[10] = a1[2]; /*0x750e76*/
    v6[11] = a3; /*0x750e7f*/
    started = StartAudioControllerAt((AudioController *)aP0, (int)(v6 + 8), (int)(v6 + 3)); /*0x750e8e*/
    InsertAfterDListNode((int)&stru_B1D188.__pad_188[16], v6); /*0x750e90*/
    v8 = ++*(_DWORD *)stru_B1D188.__pad_220; /*0x750ea0*/
    if ( *(int *)stru_B1D188.__pad_220 > *(int *)&stru_B1D188.__pad_220[4] ) /*0x750ea9*/
      *(_DWORD *)&stru_B1D188.__pad_220[4] = v8; /*0x750eab*/
    return started; /*0x750eb0*/
  }
  return result; /*0x750e2b*/
}
}
} // namespace gamemd

// 0x750EC0
namespace gamemd {
int VocClass_Update()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int VocClass_Update()
{
  int result; // eax
  int v1; // esi
  int v2; // ebx
  int v3; // eax

  result = AudioQueue::GetNext(&MEMORY[0xB1D320]); /*0x750ec6*/
  v1 = result; /*0x750ecb*/
  if ( result ) /*0x750ecf*/
  {
    do /*0x750f30*/
    {
      v2 = AudioQueue::GetNextAlt(v1); /*0x750eda*/
      if ( !*(_DWORD *)(v1 + 48) ) /*0x750edc*/
        StartAudioController(v1 + 32, v1 + 12); /*0x750ee9*/
      result = AudioSource::Get(v1 + 12); /*0x750ef3*/
      if ( !result ) /*0x750efa*/
      {
        v3 = VocClass::Check(v1 + 12); /*0x750efe*/
        if ( !v3 || (result = AudioMixer::SetVolume(v3)) == 0 ) /*0x750f10*/
        {
          LinkedList::Init(v1); /*0x750f14*/
          result = PushFrontLinkedListAlt(MEMORY[0xB1D3A4], v1); /*0x750f21*/
          --MEMORY[0xB1D3A8]; /*0x750f26*/
        }
      }
      v1 = v2; /*0x750f2e*/
    }
    while ( v2 ); /*0x750f30*/
  }
  return result; /*0x750f34*/
}
}
} // namespace gamemd

// 0x750F40
namespace gamemd {
int sub_750F40(unsigned int * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_750F40(_DWORD *a1, int a2)
{
  int result; // eax
  int *i; // esi

  result = AudioQueue::GetNext(MEMORY[0xB1D320]); /*0x750f4c*/
  for ( i = (int *)result; result; i = (int *)result ) /*0x750f55*/
  {
    if ( (a2 & i[11]) != 0 && i[8] == *a1 && i[9] == a1[1] && i[10] == a1[2] ) /*0x750f77*/
      AudioFile::Stop(i + 3); /*0x750f7c*/
    result = AudioQueue::GetNextAlt(i); /*0x750f83*/
  }
  return result; /*0x750f8e*/
}
}
} // namespace gamemd

// 0x751040
namespace gamemd {
int sub_751040()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_751040()
{
  int result; // eax
  int i; // esi
  int *v2; // eax

  result = AudioQueue::GetNext(MEMORY[0xB1D320]); /*0x751046*/
  for ( i = result; result; i = result ) /*0x75104f*/
  {
    ++*(_DWORD *)(i + 48); /*0x751055*/
    v2 = AudioSource::Get((int **)(i + 12)); /*0x75105b*/
    if ( v2 ) /*0x751062*/
      sub_4053E0((int)v2); /*0x751066*/
    result = AudioQueue::GetNextAlt((int *)i); /*0x75106d*/
  }
  return result; /*0x751078*/
}
}
} // namespace gamemd

// 0x751080
namespace gamemd {
int sub_751080()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_751080()
{
  int result; // eax
  int i; // esi
  int v2; // eax
  int *v3; // eax

  result = AudioQueue::GetNext(MEMORY[0xB1D320]); /*0x751086*/
  for ( i = result; result; i = result ) /*0x75108f*/
  {
    if ( *(_DWORD *)(i + 48) ) /*0x751091*/
    {
      v2 = *(_DWORD *)(i + 48) - 1; /*0x75109b*/
      *(_DWORD *)(i + 48) = v2; /*0x75109e*/
      if ( v2 < 0 ) /*0x7510a1*/
        *(_DWORD *)(i + 48) = 0; /*0x7510a3*/
      v3 = AudioSource::Get((int **)(i + 12)); /*0x7510ad*/
      if ( v3 ) /*0x7510b4*/
        sub_405430((int)v3); /*0x7510b8*/
    }
    result = AudioQueue::GetNextAlt((int *)i); /*0x7510bf*/
  }
  return result; /*0x7510ca*/
}
}
} // namespace gamemd

// 0x7518C0
namespace gamemd {
void VocClass_SetEnabled(char a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall VocClass_SetEnabled(char a1)
{
  MEMORY[0x8464AC] = a1; /*0x7518c0*/
}
}
} // namespace gamemd

// 0x751DD0
namespace gamemd {
char sub_751DD0(LPCSTR lpRootPathName, UINT * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall sub_751DD0(LPCSTR lpRootPathName, UINT *a2)
{
  DWORD v5; // eax
  bool v6; // zf
  DWORD SectorsPerCluster; // [esp+Ch] [ebp-18h] BYREF
  DWORD BytesPerSector; // [esp+10h] [ebp-14h] BYREF
  DWORD NumberOfFreeClusters; // [esp+14h] [ebp-10h] BYREF
  DWORD TotalNumberOfClusters; // [esp+18h] [ebp-Ch] BYREF
  DWORD FileSystemFlags; // [esp+1Ch] [ebp-8h] BYREF
  DWORD MaximumComponentLength; // [esp+20h] [ebp-4h] BYREF

  memset(a2, 0, 0x90u); /*0x751de4*/
  *a2 = GetDriveTypeA(lpRootPathName); /*0x751dec*/
  if ( !GetDiskFreeSpaceA( /*0x751e03*/
          lpRootPathName,
          &SectorsPerCluster,
          &BytesPerSector,
          &NumberOfFreeClusters,
          &TotalNumberOfClusters) )
    goto LABEL_2; /*0x751e0b*/
  v5 = BytesPerSector * SectorsPerCluster; /*0x751e2c*/
  v6 = NumberOfFreeClusters == 0; /*0x751e36*/
  a2[34] = NumberOfFreeClusters * BytesPerSector * SectorsPerCluster; /*0x751e38*/
  if ( !v6 ) /*0x751e3e*/
    return 0; /*0x751e42*/
  a2[35] = TotalNumberOfClusters * v5; /*0x751e4e*/
  if ( !GetVolumeInformationA( /*0x751e77*/
          lpRootPathName,
          (LPSTR)a2 + 4,
          0x40u,
          a2 + 17,
          &MaximumComponentLength,
          &FileSystemFlags,
          (LPSTR)a2 + 72,
          0x40u) )
  {
LABEL_2:
    Debug::Log(); /*0x751e0d*/
    return 0; /*0x751e23*/
  }
  return 1; /*0x751e1d*/
}
}
} // namespace gamemd

// 0x751EA0
namespace gamemd {
HANDLE sub_751EA0(const CHAR * a1, unsigned int * a2, unsigned int * a3, unsigned int * a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HANDLE __fastcall sub_751EA0(const CHAR *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  const char *v4; // edi
  HANDLE result; // eax
  void *v7; // esi
  HANDLE v9; // [esp+10h] [ebp-248h]
  CHAR FileName[260]; // [esp+14h] [ebp-244h] BYREF
  struct _WIN32_FIND_DATAA FindFileData; // [esp+118h] [ebp-140h] BYREF

  v4 = a1; /*0x751eb0*/
  result = FindFirstFileA(a1, &FindFileData); /*0x751eba*/
  v7 = result; /*0x751ec0*/
  v9 = result; /*0x751ec5*/
  if ( result != (HANDLE)-1 ) /*0x751ec9*/
  {
    do /*0x751fef*/
    {
      if ( (FindFileData.dwFileAttributes & 0x10) != 0 ) /*0x751edf*/
      {
        if ( _strcmpi(FindFileData.cFileName, stru_826598) ) /*0x751ef2*/
        {
          if ( _strcmpi(FindFileData.cFileName, MEMORY[0x846610]) ) /*0x751f0f*/
          {
            ++*a2; /*0x751f29*/
            strcpy(FileName, v4); /*0x751f43*/
            FileName[strlen(FileName) - 1] = 0; /*0x751f61*/
            strcat(FileName, FindFileData.cFileName); /*0x751f7f*/
            strcat(FileName, MEMORY[0x84660C]); /*0x751fab*/
            sub_751EA0(a3, a4); /*0x751fc2*/
            v7 = v9; /*0x751fc7*/
            v4 = a1; /*0x751fcb*/
          }
        }
      }
      else
      {
        ++*a3; /*0x751fdb*/
        *a4 += FindFileData.nFileSizeLow; /*0x751fe4*/
      }
    }
    while ( FindNextFileA(v7, &FindFileData) ); /*0x751fef*/
    return (HANDLE)FindClose(v7); /*0x751ffe*/
  }
  return result; /*0x752005*/
}
}
} // namespace gamemd

// 0x752020
namespace gamemd {
void sub_752020()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_752020()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x75202c*/
  MEMORY[0xB1D3E8] = Math::Sqrt(v0 + v0); /*0x75203e*/
}
}
} // namespace gamemd

// 0x752050
namespace gamemd {
void sub_752050()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_752050()
{
  MEMORY[0xB1D490] = MEMORY[0xB1D3E8] / 60.0; /*0x75205c*/
}
}
} // namespace gamemd

// 0x752070
namespace gamemd {
void sub_752070()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_752070()
{
  MEMORY[0xB1D438] = 1.0 / MEMORY[0xB1D490]; /*0x75207c*/
}
}
} // namespace gamemd

// 0x752090
namespace gamemd {
void sub_752090()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_752090()
{
  MEMORY[0xB1D430] = 0.0174532925199433 * 45.0; /*0x75209c*/
}
}
} // namespace gamemd

// 0x7520B0
namespace gamemd {
void sub_7520B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_7520B0()
{
  MEMORY[0xB1D400] = 0.0174532925199433 * 60.0; /*0x7520bc*/
}
}
} // namespace gamemd

// 0x7520D0
namespace gamemd {
void sub_7520D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_7520D0()
{
  MEMORY[0xB1D3C0] = 0.0174532925199433 * 90.0; /*0x7520dc*/
}
}
} // namespace gamemd

// 0x7520F0
namespace gamemd {
long long sub_7520F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_7520F0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB1D3C0] - MEMORY[0xB1D400]); /*0x752102*/
  result = Math::RoundToInt(v0 * MEMORY[0xB1D3E8] * 0.5); /*0x752116*/
  MEMORY[0xB1D498] = result; /*0x75211b*/
  return result; /*0x752120*/
}
}
} // namespace gamemd

// 0x752130
namespace gamemd {
void sub_752130()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_752130()
{
  MEMORY[0xB1D408] = Math::ArcTan((double)MEMORY[0xB1D498] * 0.00390625); /*0x752147*/
}
}
} // namespace gamemd

// 0x752160
namespace gamemd {
void sub_752160()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_752160()
{
  MEMORY[0xB1D420] = Math::ArcTan((double)(2 * MEMORY[0xB1D498]) / MEMORY[0xB1D3E8]); /*0x752182*/
}
}
} // namespace gamemd

// 0x752190
namespace gamemd {
long long sub_752190()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_752190()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB1D498]) + 0.5); /*0x7521ab*/
  MEMORY[0xB1D488] = result; /*0x7521b0*/
  return result; /*0x7521b6*/
}
}
} // namespace gamemd

// 0x7521C0
namespace gamemd {
int sub_7521C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_7521C0()
{
  MEMORY[0xB1D3D4] = 0; /*0x7521c2*/
  MEMORY[0xB1D3D6] = 0; /*0x7521c8*/
  return 0; /*0x7521ce*/
}
}
} // namespace gamemd

// 0x7521D0
namespace gamemd {
int sub_7521D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_7521D0()
{
  MEMORY[0xB1D410] = 0; /*0x7521d2*/
  MEMORY[0xB1D414] = 0; /*0x7521d7*/
  MEMORY[0xB1D418] = 0; /*0x7521dc*/
  return 0; /*0x7521e1*/
}
}
} // namespace gamemd

// 0x7521F0
namespace gamemd {
int sub_7521F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_7521F0()
{
  MEMORY[0xB1D448] = 0; /*0x7521f5*/
  MEMORY[0xB1D440] = 128; /*0x7521ff*/
  MEMORY[0xB1D444] = 128; /*0x752204*/
  return 128; /*0x752209*/
}
}
} // namespace gamemd

// 0x752210
namespace gamemd {
int sub_752210()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_752210()
{
  MEMORY[0xB1D4A4] = 0; /*0x752217*/
  MEMORY[0xB1D4A8] = 0; /*0x75221c*/
  MEMORY[0xB1D4AC] = 1; /*0x752221*/
  MEMORY[0xB1D4AD] = 0; /*0x752228*/
  MEMORY[0xB1D4A0] = (int)&DynamicVectorClass<VoxClass *>::`vftable'; /*0x75222d*/
  MEMORY[0xB1D4B4] = 10; /*0x752237*/
  MEMORY[0xB1D4B0] = 0; /*0x752241*/
  return atexit(sub_752250); /*0x75224c*/
}
}
} // namespace gamemd

// 0x752250
namespace gamemd {
void sub_752250()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_752250()
{
  MEMORY[0xB1D4A0] = (int)&VectorClass<VoxClass *>::`vftable'; /*0x752258*/
  if ( MEMORY[0xB1D4A4] && MEMORY[0xB1D4AD] ) /*0x75226c*/
  {
    __3_YAXPAX_Z(MEMORY[0xB1D4A4]); /*0x75226f*/
    MEMORY[0xB1D4A4] = 0; /*0x752277*/
  }
  MEMORY[0xB1D4AD] = 0; /*0x75227d*/
  MEMORY[0xB1D4A8] = 0; /*0x752283*/
}
}
} // namespace gamemd

// 0x752480
namespace gamemd {
void ThemeManager_Update(int a1, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall ThemeManager_Update(int a1, int a2, int a3)
{
  int v3; // ebp
  int v4; // ebx
  int i; // esi
  int v6; // eax

  v3 = a2; /*0x752487*/
  if ( MEMORY[0xB1D4CC] ) /*0x75248b*/
  {
    if ( a1 >= 0 && a1 < MEMORY[0xB1D4B0] && !MEMORY[0xB1D3D8] ) /*0x7524ac*/
    {
      v4 = *((_DWORD *)MEMORY[0xB1D4A4] + a1); /*0x7524b7*/
      if ( v4 != MEMORY[0xB1D4C4] ) /*0x7524c1*/
      {
        if ( a2 == -1 ) /*0x7524ca*/
          v3 = *(_DWORD *)(v4 + 76); /*0x7524cc*/
        if ( a3 == -1 ) /*0x7524d4*/
          a3 = *(_DWORD *)(v4 + 72); /*0x7524d9*/
        if ( MEMORY[0xB1D4C4] && v3 == 2 ) /*0x7524e4*/
        {
          for ( i = AudioQueue::GetNext(&MEMORY[0xB1D3C8]); i; i = AudioQueue::GetNext(&MEMORY[0xB1D3C8]) ) /*0x7524f5*/
          {
            LinkedList::Init((_DWORD **)i); /*0x7524f9*/
            *(_DWORD *)(*(_DWORD *)(i + 12) + 80) = 2; /*0x752502*/
            __3_YAXPAX_Z((void *)i); /*0x752509*/
          }
          if ( MEMORY[0xB1D4C4] ) /*0x752529*/
          {
            *(_DWORD *)(MEMORY[0xB1D4C4] + 80) = 2; /*0x75252b*/
            MEMORY[0xB1D4C4] = 0; /*0x752532*/
          }
          if ( MEMORY[0xB1D4CC] ) /*0x752544*/
            Audio::Release(MEMORY[0xB1D4CC]); /*0x752546*/
          ThemeClass::ClearQueues(); /*0x75254b*/
          MEMORY[0xB1D4D0] = 0; /*0x752552*/
        }
        v6 = AudioQueue::FindByData(v4); /*0x75255e*/
        if ( !v6 || *(_DWORD *)(v6 + 24) != v3 ) /*0x75256a*/
          Audio_Load(a3); /*0x752575*/
        UpdateThemes(); /*0x75257a*/
      }
    }
  }
}
}
} // namespace gamemd

// 0x752760
namespace gamemd {
void ThemeClass_Update()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void ThemeClass_Update()
{
  unsigned __int64 v0; // rdi
  unsigned __int64 v1; // rax
  int v2; // eax
  _DWORD *v3; // esi
  int v4; // eax
  char *v5; // edi
  int v6; // eax
  int v7; // ebp
  const char *v8; // edi
  _BYTE v9[16]; // [esp+0h] [ebp-118h] BYREF
  int v10; // [esp+10h] [ebp-108h]
  int v11; // [esp+14h] [ebp-104h]
  char v12[5]; // [esp+18h] [ebp-100h] BYREF

  if ( MEMORY[0xA8ED64] ) /*0x752773*/
    return; /*0x752773*/
  if ( !Audio::IsSoundEnabled() ) /*0x752779*/
    return; /*0x752779*/
  if ( !MEMORY[0xB1D4CC] ) /*0x75278e*/
    return; /*0x75278e*/
  if ( Audio::IsSoundPlaying() ) /*0x752794*/
    return; /*0x752794*/
  v0 = MEMORY[0xB1D4D0] + ThemeClass::GetValue(MEMORY[0xB1D4CC]); /*0x7527b4*/
  LODWORD(v1) = Audio::Callback(); /*0x7527be*/
  if ( v1 <= v0 || MEMORY[0xB1D428] ) /*0x7527dc*/
    return; /*0x7527dc*/
  if ( MEMORY[0xB1D4C4] ) /*0x7527e9*/
  {
    *(_DWORD *)(MEMORY[0xB1D4C4] + 80) = 2; /*0x7527eb*/
    MEMORY[0xB1D4C4] = 0; /*0x7527f2*/
  }
  v11 = 0; /*0x7527fd*/
  v10 = 0; /*0x752801*/
  v2 = AudioQueue::GetNext(&MEMORY[0xB1D3C8]); /*0x752805*/
  v3 = (_DWORD *)v2; /*0x75280a*/
  if ( v2 ) /*0x75280e*/
  {
    LinkedList::Init(v2); /*0x752812*/
    if ( !MEMORY[0xB1D4B8] ) /*0x75281e*/
      goto LABEL_22; /*0x75281e*/
    goto LABEL_11; /*0x75281e*/
  }
  v4 = AudioQueue::GetNext(&MEMORY[0xB1D3F0]); /*0x75283a*/
  v3 = (_DWORD *)v4; /*0x75283f*/
  if ( !v4 ) /*0x752843*/
  {
    v3 = MEMORY[0xB1D4B8]; /*0x752866*/
    if ( MEMORY[0xB1D4B8] ) /*0x75286e*/
    {
      MEMORY[0xB1D4B8] = 0; /*0x752870*/
    }
    else
    {
      v5 = (char *)&MEMORY[0xB1D474]; /*0x752878*/
      while ( 1 ) /*0x75287f*/
      {
        v6 = AudioQueue::GetNext(v5); /*0x75287f*/
        v3 = (_DWORD *)v6; /*0x752884*/
        if ( v6 ) /*0x752888*/
          break; /*0x752888*/
        v5 -= 12; /*0x75288a*/
        if ( (int)v5 < (int)MEMORY[0xB1D450] ) /*0x752893*/
          return; /*0x752893*/
      }
      LinkedList::Init(v6); /*0x7528a2*/
    }
    goto LABEL_22; /*0x752876*/
  }
  LinkedList::Init(v4); /*0x752847*/
  if ( MEMORY[0xB1D4B8] ) /*0x752853*/
  {
LABEL_11:
    __3_YAXPAX_Z(MEMORY[0xB1D4B8]); /*0x752824*/
    MEMORY[0xB1D4B8] = 0; /*0x75282d*/
  }
LABEL_22:
  if ( v3 ) /*0x7528a9*/
  {
    v7 = v3[3]; /*0x7528af*/
    if ( v9 != (_BYTE *)-20 ) /*0x7528b8*/
      v11 = v3[6]; /*0x7528bd*/
    if ( v9 != (_BYTE *)-16 ) /*0x7528c7*/
      v10 = v3[5]; /*0x7528cc*/
    __3_YAXPAX_Z(v3); /*0x7528d1*/
    if ( v7 ) /*0x7528db*/
    {
      *(_DWORD *)(v7 + 80) = 2; /*0x7528e1*/
      if ( MEMORY[0xB1D4C8] ) /*0x7528ef*/
      {
        v8 = (const char *)(v7 + 53); /*0x7528f9*/
        if ( MEMORY[0xB1D4C8] != 1 ) /*0x7528fc*/
          v8 = (const char *)(v7 + 44); /*0x7528fe*/
      }
      else
      {
        v8 = (const char *)(v7 + 62); /*0x7528f1*/
      }
      strcpy(v12, v8); /*0x75291d*/
      strcat(v12, MEMORY[0x844768]); /*0x752949*/
      if ( ThreadAudioMixerMain(MEMORY[0xB1D4CC], 1) ) /*0x75295c*/
      {
        MEMORY[0xB1D4D0] = 500; /*0x75296d*/
        MEMORY[0xB1D4C4] = v7; /*0x75297d*/
        MEMORY[0xB1D3B8] = v11; /*0x752983*/
        MEMORY[0xB1D3E0] = v10; /*0x752988*/
        *(_DWORD *)(v7 + 80) = 0; /*0x75298e*/
      }
    }
  }
}
}
} // namespace gamemd

// 0x7529A0
namespace gamemd {
void ThemeClass_Stop(char a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall ThemeClass_Stop(char a1)
{
  if ( MEMORY[0xB1D4C4] ) /*0x7529aa*/
  {
    *(_DWORD *)(MEMORY[0xB1D4C4] + 80) = 2; /*0x7529ac*/
    MEMORY[0xB1D4C4] = 0; /*0x7529b3*/
  }
  if ( MEMORY[0xB1D4CC] ) /*0x7529c5*/
    Audio::Release(MEMORY[0xB1D4CC]); /*0x7529c7*/
  if ( a1 ) /*0x7529cf*/
    ThemeClass::ClearQueues(); /*0x7529d1*/
}
}
} // namespace gamemd

// 0x752A40
namespace gamemd {
void ThemeQueue_ClearPlaylist(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall ThemeQueue_ClearPlaylist(int a1)
{
  int i; // esi

  if ( a1 >= 0 && a1 < MEMORY[0xB1D4B0] ) /*0x752a4e*/
  {
    for ( i = AudioQueue::FindByData(*((_DWORD *)MEMORY[0xB1D4A4] + a1)); /*0x752a61*/
          i;
          i = AudioQueue::FindByData(*((_DWORD *)MEMORY[0xB1D4A4] + a1)) )
    {
      if ( *(_DWORD *)(i + 4) != i ) /*0x752a66*/
        LinkedList::Init((_DWORD **)i); /*0x752a6a*/
      if ( (void *)i == MEMORY[0xB1D4B8] ) /*0x752a75*/
        MEMORY[0xB1D4B8] = 0; /*0x752a77*/
      *(_DWORD *)(*(_DWORD *)(i + 12) + 80) = 2; /*0x752a85*/
      __3_YAXPAX_Z((void *)i); /*0x752a8c*/
    }
  }
}
}
} // namespace gamemd

// 0x752B70
namespace gamemd {
int TauntClass_Play(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall TauntClass_Play(int a1)
{
  char v1; // al
  int result; // eax
  const char *v3; // [esp-8h] [ebp-1Ch]
  int v4; // [esp-4h] [ebp-18h]
  char Buffer[20]; // [esp+0h] [ebp-14h] BYREF

  if ( !MEMORY[0xB1D4D8] ) /*0x752b7a*/
    return 0; /*0x752b7a*/
  if ( MEMORY[0xB1D480] ) /*0x752b87*/
    return 0; /*0x752b87*/
  v1 = a1 & 0xF; /*0x752b8f*/
  if ( (a1 & 0xF) == 0 || (a1 & 0xFu) > 8 ) /*0x752b9b*/
    return 0; /*0x752c63*/
  switch ( (a1 >> 4) & 0xF ) /*0x752bb0*/
  {
    case 0: /*0x752bb0*/
      v4 = v1; /*0x752bba*/
      v3 = aTauntsTauam02i; /*0x752bbb*/
      goto LABEL_16; /*0x752bc0*/
    case 1: /*0x752bb0*/
      sprintf(Buffer, "taunts\\tauko%02i.wav", v1); /*0x752bd0*/
      goto LABEL_17; /*0x752bd0*/
    case 2: /*0x752bb0*/
      sprintf(Buffer, MEMORY[0x846740], v1); /*0x752be0*/
      goto LABEL_17; /*0x752be0*/
    case 3: /*0x752bb0*/
      v4 = v1; /*0x752be5*/
      v3 = MEMORY[0x846728]; /*0x752be6*/
      goto LABEL_16; /*0x752beb*/
    case 4: /*0x752bb0*/
      sprintf(Buffer, MEMORY[0x846710], v1); /*0x752bfb*/
      goto LABEL_17; /*0x752bfb*/
    case 5: /*0x752bb0*/
      sprintf(Buffer, MEMORY[0x8466F8], v1); /*0x752c0b*/
      goto LABEL_17; /*0x752c0b*/
    case 6: /*0x752bb0*/
      v4 = v1; /*0x752c10*/
      v3 = MEMORY[0x8466E0]; /*0x752c11*/
      goto LABEL_16; /*0x752c16*/
    case 7: /*0x752bb0*/
      sprintf(Buffer, MEMORY[0x8466C8], v1); /*0x752c26*/
      goto LABEL_17; /*0x752c26*/
    case 8: /*0x752bb0*/
      sprintf(Buffer, MEMORY[0x8466B0], v1); /*0x752c36*/
      goto LABEL_17; /*0x752c36*/
    case 9: /*0x752bb0*/
      v4 = v1; /*0x752c3b*/
      v3 = stru_846698; /*0x752c3c*/
LABEL_16:
      sprintf(Buffer, v3, v4); /*0x752c41*/
LABEL_17:
      result = ThreadAudioMixerMain(MEMORY[0xB1D4D8], Buffer, 0); /*0x752c4b*/
      break; /*0x752c62*/
    default:
      return 0;
  }
  return result; /*0x752c5f*/
}
}
} // namespace gamemd

// 0x752CA0
namespace gamemd {
void ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ()
{
  if ( MEMORY[0xB1D4D8] ) /*0x752ca8*/
    Audio::Release(MEMORY[0xB1D4D8]); /*0x752caa*/
}
}
} // namespace gamemd

// 0x752CB0
namespace gamemd {
int E4Recv_752CB0::sub_752CB0(const char * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_752CB0(int this, const char *a2)
{
  int v3; // eax

  this->M40 = 1065353216; /*0x752cbe*/
  strcpy((char *)this, a2); /*0x752cd4*/
  *(_BYTE *)(this + 44) = 0; /*0x752cdf*/
  *(_BYTE *)(this + 53) = 0; /*0x752ce2*/
  *(_BYTE *)(this + 62) = 0; /*0x752ce5*/
  this->M72 = 1; /*0x752ce8*/
  this->M76 = 0; /*0x752cef*/
  this->M80 = 2; /*0x752cf2*/
  if ( MEMORY[0xB1D4B0] < MEMORY[0xB1D4A8] /*0x752d2e*/
    || (MEMORY[0xB1D4AD] || !MEMORY[0xB1D4A8])
    && MEMORY[0xB1D4B4] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xB1D4A0] + 8))(
         &MEMORY[0xB1D4A0],
         MEMORY[0xB1D4A8] + MEMORY[0xB1D4B4],
         0) )
  {
    v3 = MEMORY[0xB1D4B0]++; /*0x752d3b*/
    *((_DWORD *)MEMORY[0xB1D4A4] + v3) = this; /*0x752d4a*/
  }
  return this; /*0x752d4d*/
}
}
} // namespace gamemd

// 0x753000
namespace gamemd {
char CCINIClass::InitFromINIEVA()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall InitFromINIEVA(CCINIClass *this)
{
  CCINIClass *v1; // edi
  unsigned int KeyCount; // eax
  int v3; // ebp
  CCINIClass *v4; // esi
  unsigned __int8 *StringByIndex; // eax
  int v6; // esi
  int v7; // ebp
  int v8; // eax
  int v9; // ecx
  CCINIClass *v11; // [esp+0h] [ebp-E4h] BYREF
  CCINIClass *i; // [esp+10h] [ebp-D4h]
  CCINIClass *aP1; // [esp+14h] [ebp-D0h]
  unsigned int v14; // [esp+18h] [ebp-CCh]
  INIClass Destination[3]; // [esp+1Ch] [ebp-C8h] BYREF

  v1 = this; /*0x75300a*/
  aP1 = this; /*0x753011*/
  LOBYTE(KeyCount) = INIClass::BinarySearchSection((int)this, &g_INI_Key_DialogList) != 0; /*0x75301c*/
  if ( (_BYTE)KeyCount ) /*0x753023*/
  {
    KeyCount = INIClass::GetKeyCount(v1->__pad_0, &g_INI_Key_DialogList); /*0x753030*/
    v3 = KeyCount; /*0x753035*/
    v4 = 0; /*0x753037*/
    v14 = KeyCount; /*0x75303b*/
    for ( i = 0; (int)v4 < v3; i = v4 ) /*0x753043*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex( /*0x753060*/
                                           v1->__pad_0,
                                           (CCINIClass *)&g_INI_Key_DialogList,
                                           v4);
      KeyCount = INIClass::GetString( /*0x75306d*/
                   (unsigned __int8 ***)v1,
                   &g_INI_Key_DialogList,
                   StringByIndex,
                   (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
                   Destination,
                   200);
      if ( KeyCount ) /*0x753074*/
      {
        if ( &v11 == (CCINIClass **)-28 ) /*0x753080*/
          goto LABEL_10; /*0x753080*/
        v6 = 0; /*0x753087*/
        if ( *(int *)&MEMORY[0xB077F8].__pad_579C[66844] <= 0 ) /*0x75308b*/
          goto LABEL_10; /*0x75308b*/
        while ( _strcmpi(Destination[0].__pad_0, *(char **)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[66832] + 4 * v6)) ) /*0x7530a6*/
        {
          if ( ++v6 >= *(int *)&MEMORY[0xB077F8].__pad_579C[66844] ) /*0x7530b0*/
            goto LABEL_10; /*0x7530b0*/
        }
        if ( v6 == -1 ) /*0x7530b7*/
        {
LABEL_10:
          v7 = __2_YAPAXI_Z(0x54u); /*0x7530bd*/
          if ( v7 ) /*0x7530cb*/
          {
            *(_DWORD *)(v7 + 40) = 1065353216; /*0x7530da*/
            strcpy((char *)v7, Destination[0].__pad_0); /*0x7530f0*/
            *(_BYTE *)(v7 + 44) = 0; /*0x7530f9*/
            *(_BYTE *)(v7 + 53) = 0; /*0x7530fc*/
            *(_BYTE *)(v7 + 62) = 0; /*0x7530ff*/
            *(_DWORD *)(v7 + 72) = 1; /*0x753102*/
            *(_DWORD *)(v7 + 76) = 0; /*0x753109*/
            *(_DWORD *)(v7 + 80) = 2; /*0x75310c*/
            if ( *(int *)&MEMORY[0xB077F8].__pad_579C[66844] < *(int *)&MEMORY[0xB077F8].__pad_579C[66836] /*0x753146*/
              || (MEMORY[0xB077F8].__pad_579C[66841] || !*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[66836])
              && *(int *)&MEMORY[0xB077F8].__pad_579C[66848] > 0
              && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[66828]
                                                                        + 8))(
                   &MEMORY[0xB077F8].__pad_579C[66828],
                   *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[66836] + *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[66848],
                   0) )
            {
              v8 = (*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[66844])++; /*0x753153*/
              *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[66832] + 4 * v8) = v7; /*0x753162*/
            }
            v1 = aP1; /*0x753165*/
            v9 = v7; /*0x753169*/
          }
          else
          {
            v9 = 0; /*0x75316d*/
          }
        }
        else
        {
          v9 = *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[66832] + 4 * v6); /*0x753177*/
        }
        LOBYTE(KeyCount) = AudioEvent::LoadFromINI(v9, v1); /*0x75317b*/
        v4 = i; /*0x753180*/
        v3 = v14; /*0x753184*/
      }
      v4 = (CCINIClass *)((char *)v4 + 1); /*0x753188*/
    }
  }
  return KeyCount; /*0x753195*/
}
}
} // namespace gamemd

// 0x7531A0
namespace gamemd {
int E4Recv_7531A0::EVA_LoadINI()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall EVA_LoadINI(void *this)
{
  int result; // eax
  void *v2; // esi
  int v3; // eax
  void *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x7531a0*/
  if ( MEMORY[0xB1D4C4] ) /*0x7531a8*/
  {
    *(_DWORD *)(MEMORY[0xB1D4C4] + 80) = 2; /*0x7531aa*/
    MEMORY[0xB1D4C4] = 0; /*0x7531b1*/
  }
  if ( MEMORY[0xB1D4CC] ) /*0x7531c3*/
    Audio::Release(MEMORY[0xB1D4CC]); /*0x7531c5*/
  ThemeClass::ClearQueues(v4); /*0x7531ca*/
  for ( result = MEMORY[0xB1D4B0]; MEMORY[0xB1D4B0] > 0; result = MEMORY[0xB1D4B0] ) /*0x7531d6*/
  {
    v2 = *(void **)MEMORY[0xB1D4A4]; /*0x7531de*/
    if ( *(_DWORD *)MEMORY[0xB1D4A4] ) /*0x7531de*/
    {
      v4 = *(void **)MEMORY[0xB1D4A4]; /*0x7531f4*/
      v3 = (*(int (__thiscall **)(int *, void **))(MEMORY[0xB1D4A0] + 16))(&MEMORY[0xB1D4A0], &v4); /*0x7531f8*/
      if ( v3 != -1 && v3 < MEMORY[0xB1D4B0] && v3 < --MEMORY[0xB1D4B0] ) /*0x753213*/
      {
        do /*0x75322b*/
        {
          ++v3; /*0x75321b*/
          *((_DWORD *)MEMORY[0xB1D4A4] + v3 - 1) = *((_DWORD *)MEMORY[0xB1D4A4] + v3); /*0x75321f*/
        }
        while ( v3 < MEMORY[0xB1D4B0] ); /*0x75322b*/
      }
      __3_YAXPAX_Z(v2); /*0x75322e*/
    }
  }
  return result; /*0x753241*/
}
}
} // namespace gamemd

// 0x7532A0
namespace gamemd {
bool sub_7532A0(std::codecvt_base * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __fastcall sub_7532A0(std::codecvt_base *a1)
{
  if ( (int)a1 < 0 || (int)a1 >= MEMORY[0xB1D4B0] ) /*0x7532aa*/
    return _do_always_noconv_codecvt_base_std__MBE_NXZ_21(a1); /*0x7532a2*/
  else
    return *(_DWORD *)(*((_DWORD *)MEMORY[0xB1D4A4] + (_DWORD)a1) + 80) == 2; /*0x7532ba*/
}
}
} // namespace gamemd

// 0x753510
namespace gamemd {
void ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ_1()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ_1()
{
  if ( MEMORY[0xB1D4D8] ) /*0x753518*/
    AudioMixer::ProcessAudioFrame((int)MEMORY[0xB1D4D8]); /*0x75351a*/
}
}
} // namespace gamemd

// 0x7539B0
namespace gamemd {
int sub_7539B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_7539B0()
{
  MEMORY[0xB2D810] = 0; /*0x7539b2*/
  MEMORY[0xB2D814] = 0; /*0x7539b7*/
  MEMORY[0xB2D818] = 0; /*0x7539bc*/
  MEMORY[0xB2D81C] = 0; /*0x7539c1*/
  return 0; /*0x7539c6*/
}
}
} // namespace gamemd

// 0x7539D0
namespace gamemd {
int sub_7539D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_7539D0()
{
  MEMORY[0xB2D92C] = 256; /*0x7539e4*/
  MEMORY[0xB2D930] = 256; /*0x7539e9*/
  MEMORY[0xB2D934] = 0; /*0x7539ee*/
  MEMORY[0xB2D928] = (int)&XSurface_Vtable; /*0x7539f8*/
  MEMORY[0xB2D938] = 1; /*0x753a02*/
  Buffer::Init(MEMORY[0xB2D93C], (int)MEMORY[0xB2FF78], 0x10000); /*0x753a0c*/
  MEMORY[0xB2D928] = (int)&BSurface_Vtable; /*0x753a16*/
  return atexit(sub_753A30); /*0x753a26*/
}
}
} // namespace gamemd

// 0x753A30
namespace gamemd {
void sub_753A30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_753A30()
{
  Vector::Clear((int)&MEMORY[0xB2D93C]); /*0x753a35*/
  MEMORY[0xB2D928] = (int)&Surface_Vtable; /*0x753a3a*/
}
}
} // namespace gamemd

// 0x753A50
namespace gamemd {
int sub_753A50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_753A50()
{
  MEMORY[0xB2D7F4] = 256; /*0x753a64*/
  MEMORY[0xB2D7F8] = 256; /*0x753a69*/
  MEMORY[0xB2D7FC] = 0; /*0x753a6e*/
  MEMORY[0xB2D7F0] = (int)&XSurface_Vtable; /*0x753a78*/
  MEMORY[0xB2D800] = 1; /*0x753a82*/
  Buffer::Init(MEMORY[0xB2D804], (int)MEMORY[0xB1D5E0], 0x10000); /*0x753a8c*/
  MEMORY[0xB2D7F0] = (int)&BSurface_Vtable; /*0x753a96*/
  return atexit(sub_753AB0); /*0x753aa6*/
}
}
} // namespace gamemd

// 0x753AB0
namespace gamemd {
void sub_753AB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_753AB0()
{
  Vector::Clear((int)&MEMORY[0xB2D804]); /*0x753ab5*/
  MEMORY[0xB2D7F0] = (int)&Surface_Vtable; /*0x753aba*/
}
}
} // namespace gamemd

// 0x753AF0
namespace gamemd {
int sub_753AF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_753AF0()
{
  MEMORY[0xB2FB60] = 0; /*0x753af2*/
  MEMORY[0xB2FB64] = 0; /*0x753af7*/
  MEMORY[0xB2FB68] = 255; /*0x753b01*/
  MEMORY[0xB2FB6C] = 255; /*0x753b06*/
  return 255; /*0x753b0b*/
}
}
} // namespace gamemd

// 0x753B10
namespace gamemd {
int sub_753B10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_753B10()
{
  char *v0; // esi
  int v1; // edi
  int result; // eax

  v0 = (char *)&MEMORY[0xB2D980]; /*0x753b12*/
  v1 = 64; /*0x753b17*/
  do /*0x753b32*/
  {
    result = Array::ForEach((int)v0, 12, 8, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_8); /*0x753b26*/
    v0 += 136; /*0x753b2b*/
    --v1; /*0x753b31*/
  }
  while ( v1 ); /*0x753b32*/
  return result; /*0x753b34*/
}
}
} // namespace gamemd

// 0x753B40
namespace gamemd {
int sub_753B40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_753B40()
{
  char *v0; // esi
  int v1; // edi
  int result; // eax

  v0 = (char *)&stru_B3FF84; /*0x753b42*/
  v1 = 64; /*0x753b47*/
  do /*0x753b5f*/
  {
    result = Array::ForEach((int)v0, 12, 4, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_8); /*0x753b56*/
    v0 += 72; /*0x753b5b*/
    --v1; /*0x753b5e*/
  }
  while ( v1 ); /*0x753b5f*/
  return result; /*0x753b61*/
}
}
} // namespace gamemd

// 0x753BF0
namespace gamemd {
int sub_753BF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__userpurge sub_753BF0@<eax>(
        char a1@<dl>,
        char a2@<cl>,
        int a3@<ebx>,
        int a4@<ebp>,
        char a5,
        char a6,
        char a7,
        char a8)
{
  _WORD *v8; // esi
  char *result; // eax
  int v10; // ebx
  int v11; // ebp

  v8 = &MEMORY[0xB2D5EC]; /*0x753bf6*/
  result = (char *)&MEMORY[0xB2FB79]; /*0x753bfd*/
  do /*0x753c4a*/
  {
    LOBYTE(a3) = (unsigned __int8)*(result - 1) >> a2; /*0x753c07*/
    result += 3; /*0x753c0b*/
    ++v8; /*0x753c0e*/
    LOWORD(a4) = (unsigned __int8)a3; /*0x753c11*/
    LOWORD(a3) = (unsigned __int8)((unsigned __int8)*(result - 2) >> a7); /*0x753c24*/
    v10 = a3 << a8; /*0x753c28*/
    v11 = v10 | (a4 << a1); /*0x753c2e*/
    LOWORD(v10) = (unsigned __int8)((unsigned __int8)*(result - 3) >> a5); /*0x753c39*/
    a3 = v10 << a6; /*0x753c3d*/
    a4 = a3 | v11; /*0x753c3f*/
    *(v8 - 1) = a4; /*0x753c46*/
  }
  while ( result < MEMORY[0xB2FE79] ); /*0x753c4a*/
  return result; /*0x753c4c*/
}
}
} // namespace gamemd

// 0x753C60
namespace gamemd {
char * sub_753C60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *sub_753C60()
{
  return MEMORY[0xB2FF78]; /*0x753c65*/
}
}
} // namespace gamemd

// 0x753C80
namespace gamemd {
char globalHelper_053C80(unsigned int * a1, SomeVoxelCache * edx0, SomeVoxelCache * aP2, float * a4, float * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall globalHelper_053C80(_DWORD *a1, SomeVoxelCache *edx0, SomeVoxelCache *aP2, float *a4, float *a2)
{
  float *v7; // eax
  int Info; // eax
  float v10[3]; // [esp+10h] [ebp-78h] BYREF
  float v11[3]; // [esp+1Ch] [ebp-6Ch] BYREF
  float v12[12]; // [esp+28h] [ebp-60h] BYREF
  float v13[12]; // [esp+58h] [ebp-30h] BYREF

  qmemcpy(v12, InvertMatrix3x3Signs(v13, a4), sizeof(v12)); /*0x753cad*/
  v7 = Matrix3x3::TransformPoint(v12, (IUnknown *)v11, a2); /*0x753cb9*/
  v10[0] = *v7; /*0x753cc0*/
  v10[1] = v7[1]; /*0x753cc7*/
  v10[2] = v7[2]; /*0x753cd9*/
  Info = VoxelSection::GetInfo(a1, edx0, aP2); /*0x753cdd*/
  return GlobalHelper_053C80_Helper(v10, *(unsigned __int8 *)(Info + 163)); /*0x753cf3*/
}
}
} // namespace gamemd

// 0x753F90
namespace gamemd {
char * globalHelper_053F90(unsigned int * a0, ObjectClass * aP1, SomeVoxelCache * aP2, float * a3, float * a4, float * a5, int a7, int a8, int a9)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__fastcall globalHelper_053F90(
        _DWORD *a0,
        ObjectClass *aP1,
        SomeVoxelCache *aP2,
        float *a3,
        float *a4,
        float *a5,
        int a7,
        int a8,
        int a9)
{
  int Info; // eax
  int v12; // ebp
  int v13; // ecx
  Tactical *v14; // esi
  Tactical *v15; // ebx
  float *v16; // eax
  float *v17; // eax
  double v18; // st7
  float v20; // [esp+10h] [ebp-24h]
  float v21; // [esp+14h] [ebp-20h]
  float v22; // [esp+18h] [ebp-1Ch]
  float v23[3]; // [esp+1Ch] [ebp-18h] BYREF
  float v24[3]; // [esp+28h] [ebp-Ch] BYREF

  Info = VoxelSection::GetInfo(a0, (SomeVoxelCache *)aP1, aP2); /*0x753fa1*/
  v12 = 4; /*0x753fac*/
  v13 = 72 * *(_DWORD *)&stru_B1D188.__pad_579C[53836] + 11796344; /*0x753fb8*/
  *(_DWORD *)(v13 + 60) = a7; /*0x753fbf*/
  *(_DWORD *)(v13 + 64) = a8; /*0x753fc6*/
  *(_DWORD *)v13 = a0; /*0x753fcd*/
  *(_DWORD *)(v13 + 4) = aP1; /*0x753fd3*/
  *(_DWORD *)(v13 + 8) = aP2; /*0x753fd6*/
  *(_DWORD *)(v13 + 68) = a9; /*0x753fd9*/
  v14 = (Tactical *)(v13 + 12); /*0x753fdc*/
  v15 = (Tactical *)(Info + 64); /*0x753fdf*/
  do /*0x7540c6*/
  {
    v16 = TransformMatrix3x4Point((AbstractClass *)v23, (IUnknown *)a4, (IUnknown *)v15); /*0x753feb*/
    *(float *)v14->__pad_0 = *v16; /*0x753ff5*/
    *(float *)&v14->field_2[2] = v16[1]; /*0x753ffa*/
    v14->field_8 = (void *)v16[2]; /*0x754004*/
    v14->field_8 = 0; /*0x75400b*/
    v17 = TransformMatrix3x4Point((AbstractClass *)v24, (IUnknown *)a3, (IUnknown *)v14); /*0x754012*/
    *(float *)v14->__pad_0 = *v17; /*0x75401b*/
    *(float *)&v14->field_2[2] = v17[1]; /*0x754020*/
    v14->field_8 = (void *)v17[2]; /*0x754026*/
    v20 = *a5 + *(float *)v14->__pad_0; /*0x75402d*/
    v21 = *(float *)&v14->field_2[2] + a5[1]; /*0x75403b*/
    v18 = a5[2] + *(float *)&v14->field_8; /*0x754042*/
    *(float *)v14->__pad_0 = v20; /*0x754049*/
    v22 = v18; /*0x75404b*/
    *(float *)&v14->field_2[2] = v21; /*0x754053*/
    *(float *)&v14->field_8 = v22; /*0x754056*/
    *(float *)&v14->field_2[2] = -*(float *)&v14->field_2[2]; /*0x75405e*/
    if ( *(float *)v14->__pad_0 < (double)*(float *)&stru_B1D188.__pad_579C[44220] ) /*0x75406e*/
      *(_DWORD *)&stru_B1D188.__pad_579C[44220] = *(_DWORD *)v14->__pad_0; /*0x754072*/
    if ( *(float *)&v14->field_2[2] < (double)*(float *)&stru_B1D188.__pad_579C[44224] ) /*0x754085*/
      *(_DWORD *)&stru_B1D188.__pad_579C[44224] = *(_DWORD *)&v14->field_2[2]; /*0x75408a*/
    if ( *(float *)v14->__pad_0 > (double)*(float *)&stru_B1D188.__pad_579C[45092] ) /*0x75409d*/
      *(_DWORD *)&stru_B1D188.__pad_579C[45092] = *(_DWORD *)v14->__pad_0; /*0x7540a1*/
    if ( *(float *)&v14->field_2[2] > (double)*(float *)&stru_B1D188.__pad_579C[45096] ) /*0x7540b5*/
      *(_DWORD *)&stru_B1D188.__pad_579C[45096] = *(_DWORD *)&v14->field_2[2]; /*0x7540ba*/
    v15 = (Tactical *)((char *)v15 + 12); /*0x7540bf*/
    v14 = (Tactical *)((char *)v14 + 12); /*0x7540c2*/
    --v12; /*0x7540c5*/
  }
  while ( v12 ); /*0x7540c6*/
  return (char *)++*(_DWORD *)&stru_B1D188.__pad_579C[53836]; /*0x7540d1*/
}
}
} // namespace gamemd

// 0x7540F0
namespace gamemd {
int TransformVoxelVertex(unsigned int * a1, SomeVoxelCache * a2, SomeVoxelCache * aP2, float * a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall TransformVoxelVertex(_DWORD *a1, SomeVoxelCache *a2, SomeVoxelCache *aP2, float *a4)
{
  int Info; // eax
  float *v7; // esi
  _DWORD *v8; // ecx
  int v9; // ebp
  int v10; // edx
  int v11; // edx
  float *v12; // edi
  float *v13; // ebx
  float *v14; // eax
  int v15; // edx
  int v17; // [esp+10h] [ebp-Ch] BYREF
  int v18; // [esp+14h] [ebp-8h]
  int v19; // [esp+18h] [ebp-4h]
  float *aP2a; // [esp+20h] [ebp+4h]

  Info = VoxelSection::GetInfo(a1, a2, aP2); /*0x754101*/
  v18 = 1176256512; /*0x75411b*/
  v19 = 1176256512; /*0x754123*/
  v7 = (float *)(136 * MEMORY[0xB2D820] + 11721048); /*0x75412b*/
  v17 = -971227136; /*0x754136*/
  v8 = (_DWORD *)(136 * MEMORY[0xB2D820] + 11721064); /*0x75413e*/
  *((_DWORD *)v7 + 2) = aP2; /*0x754141*/
  v9 = 0; /*0x754144*/
  *v8 = 1176256512; /*0x754149*/
  v10 = v18; /*0x75414b*/
  v18 = -971227136; /*0x75414f*/
  *((_DWORD *)v7 + 1) = a2; /*0x754157*/
  v8[1] = v10; /*0x75415a*/
  v11 = v19; /*0x75415d*/
  v19 = -971227136; /*0x754161*/
  *(_DWORD *)v7 = a1; /*0x754169*/
  v8[2] = v11; /*0x75416b*/
  v12 = v7 + 11; /*0x754175*/
  aP2a = (float *)(Info + 64); /*0x754178*/
  *((_DWORD *)v7 + 7) = v17; /*0x75417c*/
  *((_DWORD *)v7 + 8) = v18; /*0x754182*/
  *((_DWORD *)v7 + 9) = v19; /*0x754189*/
  do /*0x754238*/
  {
    v13 = v12 - 1; /*0x754199*/
    v14 = TransformMatrix3x4Point((float *)&v17, a4, aP2a); /*0x75419c*/
    *(v12 - 1) = *v14; /*0x7541a5*/
    *v12 = v14[1]; /*0x7541aa*/
    v12[1] = v14[2]; /*0x7541b0*/
    *v12 = -*v12; /*0x7541b7*/
    if ( *(v12 - 1) < (double)v7[4] ) /*0x7541c3*/
      v7[4] = *v13; /*0x7541c7*/
    if ( *v13 > (double)v7[7] ) /*0x7541d4*/
      v7[7] = *v13; /*0x7541d8*/
    if ( *v12 < (double)v7[5] ) /*0x7541e5*/
      v7[5] = *v12; /*0x7541e9*/
    if ( *v12 > (double)v7[8] ) /*0x7541f6*/
      v7[8] = *v12; /*0x7541fa*/
    if ( v12[1] < (double)v7[6] ) /*0x754208*/
    {
      v15 = *((_DWORD *)v12 + 1); /*0x75420a*/
      *((_DWORD *)v7 + 3) = v9; /*0x75420d*/
      *((_DWORD *)v7 + 6) = v15; /*0x754210*/
    }
    if ( v12[1] > (double)v7[9] ) /*0x75421e*/
      v7[9] = v12[1]; /*0x754223*/
    ++v9; /*0x75422a*/
    v12 += 3; /*0x75422e*/
    aP2a += 3; /*0x754234*/
  }
  while ( v9 < 8 ); /*0x754238*/
  if ( v7[4] < (double)*(float *)&MEMORY[0xB2D5E0] ) /*0x75424c*/
    MEMORY[0xB2D5E0] = *((_DWORD *)v7 + 4); /*0x754251*/
  if ( v7[5] < (double)*(float *)&MEMORY[0xB2D5E4] ) /*0x754265*/
    MEMORY[0xB2D5E4] = *((_DWORD *)v7 + 5); /*0x75426a*/
  if ( v7[6] < (double)*(float *)&MEMORY[0xB2D5E8] ) /*0x75427e*/
    MEMORY[0xB2D5E8] = *((_DWORD *)v7 + 6); /*0x754283*/
  if ( v7[7] > (double)*(float *)&MEMORY[0xB2D948] ) /*0x754296*/
    MEMORY[0xB2D948] = *((_DWORD *)v7 + 7); /*0x75429b*/
  if ( v7[8] > (double)*(float *)&MEMORY[0xB2D94C] ) /*0x7542af*/
    MEMORY[0xB2D94C] = *((_DWORD *)v7 + 8); /*0x7542b4*/
  if ( v7[9] > (double)*(float *)&MEMORY[0xB2D950] ) /*0x7542c8*/
    MEMORY[0xB2D950] = *((_DWORD *)v7 + 9); /*0x7542cd*/
  return ++MEMORY[0xB2D820]; /*0x7542d7*/
}
}
} // namespace gamemd

// 0x7542F0
namespace gamemd {
int InitializeAudioOcclusion(IUnknown * aP0, unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall InitializeAudioOcclusion(IUnknown *aP0, _DWORD *a1, _DWORD *a2)
{
  int v3; // edi
  _DWORD **v5; // esi
  int v6; // ebp
  char *v7; // ecx
  char *v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  char *v12; // edi
  char *v13; // ecx
  int v14; // ebp
  int v15; // edx
  _DWORD ***v16; // esi
  int v17; // edi
  int v18; // esi
  char *v19; // edi
  int v20; // eax
  int v21; // ecx
  double v22; // st7
  int v23; // eax
  int v24; // edx
  int v25; // esi
  int v26; // esi
  int v27; // eax
  double v28; // st7
  int v29; // esi
  int result; // eax
  int v31; // [esp+10h] [ebp-14h]
  float v33; // [esp+18h] [ebp-Ch] BYREF
  float v34; // [esp+1Ch] [ebp-8h]
  float v35; // [esp+20h] [ebp-4h]

  v3 = 0; /*0x75430e*/
  v33 = (*(float *)&stru_B1D188.__pad_579C[44220] + *(float *)&stru_B1D188.__pad_579C[45092]) * 0.5; /*0x754318*/
  v34 = (*(float *)&stru_B1D188.__pad_579C[44224] + *(float *)&stru_B1D188.__pad_579C[45096]) * 0.5; /*0x75432e*/
  v35 = (*(float *)&stru_B1D188.__pad_579C[44228] + *(float *)&stru_B1D188.__pad_579C[45100]) * 0.5; /*0x754344*/
  if ( *(int *)&stru_B1D188.__pad_579C[53836] > 0 ) /*0x754348*/
  {
    v5 = (_DWORD **)&unk_B3FF78; /*0x75434a*/
    do /*0x754367*/
    {
      InitializeTileAudioOcclusion(*v5, (int)v5, &v33); /*0x754357*/
      ++v3; /*0x754361*/
      v5 += 18; /*0x754362*/
    }
    while ( v3 < *(int *)&stru_B1D188.__pad_579C[53836] ); /*0x754367*/
  }
  v6 = *(_DWORD *)&stru_B1D188.__pad_579C[44796]; /*0x754369*/
  if ( *(int *)&stru_B1D188.__pad_579C[44796] > 0 ) /*0x754371*/
  {
    v7 = &stru_B1D188.__pad_579C[54612]; /*0x754373*/
    v8 = &stru_B1D188.__pad_579C[45108]; /*0x754378*/
    v9 = *(_DWORD *)&stru_B1D188.__pad_579C[44796]; /*0x75437d*/
    do /*0x75438a*/
    {
      *(_DWORD *)v7 = v8; /*0x75437f*/
      v8 += 136; /*0x754381*/
      v7 += 4; /*0x754386*/
      --v9; /*0x754389*/
    }
    while ( v9 ); /*0x75438a*/
  }
  v10 = v6 - 1; /*0x75438c*/
  if ( v6 - 1 > 0 ) /*0x754391*/
  {
    v11 = 1; /*0x754393*/
    v12 = &stru_B1D188.__pad_579C[54612]; /*0x754398*/
    v31 = 1; /*0x75439d*/
    do /*0x7543df*/
    {
      if ( v11 < v6 ) /*0x7543a3*/
      {
        v13 = v12 + 4; /*0x7543a5*/
        v14 = v6 - v11; /*0x7543a8*/
        do /*0x7543c3*/
        {
          v15 = *(_DWORD *)v12; /*0x7543aa*/
          if ( *(float *)(*(_DWORD *)v12 + 36) > (double)*(float *)(*(_DWORD *)v13 + 36) ) /*0x7543b9*/
          {
            *(_DWORD *)v12 = *(_DWORD *)v13; /*0x7543bb*/
            *(_DWORD *)v13 = v15; /*0x7543bd*/
          }
          v13 += 4; /*0x7543bf*/
          --v14; /*0x7543c2*/
        }
        while ( v14 ); /*0x7543c3*/
        v11 = v31; /*0x7543c5*/
        v6 = *(_DWORD *)&stru_B1D188.__pad_579C[44796]; /*0x7543c9*/
      }
      ++v11; /*0x7543cf*/
      v10 = v6 - 1; /*0x7543d0*/
      v12 += 4; /*0x7543d3*/
      v31 = v11; /*0x7543d6*/
    }
    while ( v11 - 1 < v6 - 1 ); /*0x7543df*/
  }
  if ( dword_B43180 ) /*0x7543e8*/
  {
    if ( v10 >= 0 ) /*0x7543ec*/
    {
      v16 = (_DWORD ***)(4 * v10 + 11730552); /*0x7543ee*/
      v17 = v10 + 1; /*0x7543f5*/
      do /*0x75440b*/
      {
        Voxel::ProcessColor(**v16, *v16, &v33); /*0x754402*/
        --v16; /*0x754407*/
        --v17; /*0x75440a*/
      }
      while ( v17 ); /*0x75440b*/
    }
  }
  else
  {
    v18 = 0; /*0x75440f*/
    if ( v6 > 0 ) /*0x754413*/
    {
      v19 = &stru_B1D188.__pad_579C[54612]; /*0x754415*/
      do /*0x754434*/
      {
        Voxel::ProcessColor(**(_DWORD ***)v19, *(_DWORD **)v19, &v33); /*0x754424*/
        ++v18; /*0x75442e*/
        v19 += 4; /*0x75442f*/
      }
      while ( v18 < *(int *)&stru_B1D188.__pad_579C[44796] ); /*0x754434*/
    }
  }
  aP0->field_8 = Math::RoundToInt(*(float *)&stru_B1D188.__pad_579C[45092] - *(float *)&stru_B1D188.__pad_579C[44220]); /*0x754447*/
  v20 = Math::RoundToInt(*(float *)&stru_B1D188.__pad_579C[45096] - *(float *)&stru_B1D188.__pad_579C[44224]); /*0x754456*/
  v21 = aP0->field_8; /*0x75445b*/
  aP0->field_C = v20; /*0x75445e*/
  v22 = v33; /*0x754467*/
  v23 = aP0->field_C; /*0x754476*/
  aP0->field_0 = 128 - v21 / 2; /*0x754478*/
  v24 = 128 - v23 / 2; /*0x754487*/
  aP0->field_C = v23 + 8; /*0x754489*/
  v25 = aP0->field_0; /*0x75448c*/
  aP0->field_4 = v24; /*0x75448e*/
  aP0->field_8 = v21 + 8; /*0x75449c*/
  aP0->field_0 = v25 - 4; /*0x75449f*/
  aP0->field_4 = v24 - 4; /*0x7544a1*/
  *(_DWORD *)&stru_B1D188.__pad_579C[53820] = aP0->field_0; /*0x7544a6*/
  *(_DWORD *)&stru_B1D188.__pad_579C[53824] = aP0->field_4; /*0x7544af*/
  *(_DWORD *)&stru_B1D188.__pad_579C[53828] = aP0->field_8; /*0x7544b8*/
  *(_DWORD *)&stru_B1D188.__pad_579C[53832] = aP0->field_C; /*0x7544c1*/
  v26 = aP0->field_8 / 2; /*0x7544cf*/
  v27 = Math::RoundToInt(v22); /*0x7544d1*/
  v28 = v34; /*0x7544dc*/
  *a1 = v27 - v26; /*0x7544e0*/
  v29 = aP0->field_C / 2; /*0x7544ea*/
  result = Math::RoundToInt(v28) - v29; /*0x7544f5*/
  *a2 = result; /*0x7544fa*/
  return result; /*0x7544f7*/
}
}
} // namespace gamemd

// 0x754740
namespace gamemd {
int sub_754740(int a1, int a2, unsigned int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_754740(int a1, int a2, unsigned int a3, int a4)
{
  int result; // eax
  char *v5; // esi
  int v6; // edx
  char *v7; // edi

  if ( a1 < 0 || a2 < 0 || (int)(a1 + a3) > 255 || (result = a2 + a4, a2 + a4 > 255) ) /*0x754763*/
  {
    memset(MEMORY[0xB2FF78], 0, 0x10000u); /*0x7547ac*/
    return 0; /*0x7547a5*/
  }
  else if ( a2 <= result ) /*0x754767*/
  {
    v5 = &MEMORY[0xB2FF78][256 * a2 + a1]; /*0x754773*/
    v6 = a4 + 1; /*0x75477a*/
    do /*0x754797*/
    {
      result = 0; /*0x75477e*/
      memset(v5, 0, 4 * (a3 >> 2)); /*0x754787*/
      v7 = &v5[4 * (a3 >> 2)]; /*0x754787*/
      v5 += 256; /*0x75478b*/
      --v6; /*0x754794*/
      memset(v7, 0, a3 & 3); /*0x754795*/
    }
    while ( v6 ); /*0x754797*/
  }
  return result; /*0x75479b*/
}
}
} // namespace gamemd

// 0x754900
namespace gamemd {
Iostream_init * E4Recv_754900::__0Iostream_init_QAE_XZ_8()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
Iostream_init *__thiscall __0Iostream_init_QAE_XZ_8(Iostream_init *this)
{
  return this; /*0x754902*/
}
}
} // namespace gamemd

// 0x754910
namespace gamemd {
void sub_754910()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_754910()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x75491c*/
  dbl_B43EF8 = Math::Sqrt(v0 + v0); /*0x75492e*/
}
}
} // namespace gamemd

// 0x754940
namespace gamemd {
void sub_754940()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_754940()
{
  dbl_B45180 = dbl_B43EF8 / 60.0; /*0x75494c*/
}
}
} // namespace gamemd

// 0x754960
namespace gamemd {
void sub_754960()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_754960()
{
  dbl_B450A0 = 1.0 / dbl_B45180; /*0x75496c*/
}
}
} // namespace gamemd

// 0x754980
namespace gamemd {
void sub_754980()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_754980()
{
  dbl_B44498 = 0.0174532925199433 * 45.0; /*0x75498c*/
}
}
} // namespace gamemd

// 0x7549A0
namespace gamemd {
void sub_7549A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_7549A0()
{
  dbl_B43F00 = 0.0174532925199433 * 60.0; /*0x7549ac*/
}
}
} // namespace gamemd

// 0x7549C0
namespace gamemd {
void sub_7549C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_7549C0()
{
  dbl_B43ED8 = 0.0174532925199433 * 90.0; /*0x7549cc*/
}
}
} // namespace gamemd

// 0x7549E0
namespace gamemd {
long long sub_7549E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_7549E0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B43ED8 - dbl_B43F00); /*0x7549f2*/
  result = Math::RoundToInt(v0 * dbl_B43EF8 * 0.5); /*0x754a06*/
  dword_B45578 = result; /*0x754a0b*/
  return result; /*0x754a10*/
}
}
} // namespace gamemd

// 0x754A20
namespace gamemd {
void sub_754A20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_754A20()
{
  dbl_B43F08 = Math::ArcTan((double)dword_B45578 * 0.00390625); /*0x754a37*/
}
}
} // namespace gamemd

// 0x754A50
namespace gamemd {
void sub_754A50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_754A50()
{
  dbl_B44310 = Math::ArcTan((double)(2 * dword_B45578) / dbl_B43EF8); /*0x754a72*/
}
}
} // namespace gamemd

// 0x754A80
namespace gamemd {
long long sub_754A80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_754A80()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B45578) + 0.5); /*0x754a9b*/
  dword_B45178 = result; /*0x754aa0*/
  return result; /*0x754aa6*/
}
}
} // namespace gamemd

// 0x754AB0
namespace gamemd {
int sub_754AB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_754AB0()
{
  word_B43EF0 = 0; /*0x754ab2*/
  word_B43EF2 = 0; /*0x754ab8*/
  return 0; /*0x754abe*/
}
}
} // namespace gamemd

// 0x754AC0
namespace gamemd {
int sub_754AC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_754AC0()
{
  dword_B44300 = 0; /*0x754ac2*/
  dword_B44304 = 0; /*0x754ac7*/
  dword_B44308 = 0; /*0x754acc*/
  return 0; /*0x754ad1*/
}
}
} // namespace gamemd

// 0x754AE0
namespace gamemd {
int sub_754AE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_754AE0()
{
  dword_B450B0 = 0; /*0x754ae5*/
  dword_B450A8 = 128; /*0x754aef*/
  dword_B450AC = 128; /*0x754af4*/
  return 128; /*0x754af9*/
}
}
} // namespace gamemd

// 0x754B00
namespace gamemd {
int sub_754B00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_754B00()
{
  dword_B43EE0 = 0; /*0x754b02*/
  dword_B43EE4 = 0; /*0x754b07*/
  dword_B43EE8 = 0; /*0x754b0c*/
  dword_B43EEC = 0; /*0x754b11*/
  return 0; /*0x754b16*/
}
}
} // namespace gamemd

// 0x754B40
namespace gamemd {
unsigned int * sub_754B40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *sub_754B40()
{
  _DWORD *v0; // esi
  int v1; // edi
  _DWORD *result; // eax

  v0 = &flt_B44348; /*0x754b42*/
  v1 = 21; /*0x754b47*/
  do /*0x754b62*/
  {
    result = Int4::Set(v0, 0, 0, 0, 1065353216); /*0x754b59*/
    v0 += 4; /*0x754b5e*/
    --v1; /*0x754b61*/
  }
  while ( v1 ); /*0x754b62*/
  return result; /*0x754b64*/
}
}
} // namespace gamemd

// 0x754B70
namespace gamemd {
unsigned int * sub_754B70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *sub_754B70()
{
  _DWORD *v0; // esi
  int v1; // edi
  _DWORD *result; // eax

  v0 = &dword_B43188; /*0x754b72*/
  v1 = 21; /*0x754b77*/
  do /*0x754b92*/
  {
    result = Int4::Set(v0, 0, 0, 0, 1065353216); /*0x754b89*/
    v0 += 4; /*0x754b8e*/
    --v1; /*0x754b91*/
  }
  while ( v1 ); /*0x754b92*/
  return result; /*0x754b94*/
}
}
} // namespace gamemd

// 0x7559B0
namespace gamemd {
char * AudioData_Copy(char * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__fastcall AudioData_Copy(char *a1, int a2)
{
  qmemcpy(a1, (char *)&unk_B45188 + 48 * a2, 0x30u); /*0x7559c7*/
  return a1; /*0x7559c9*/
}
}
} // namespace gamemd

// 0x7559D0
namespace gamemd {
float * sub_7559D0(float * a1, float * a2, void * a3, double a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
float *__fastcall sub_7559D0(float *a1, float *a2, void *a3, double a4)
{
  float *result; // eax
  float *v5; // eax
  float v6; // [esp+0h] [ebp-4Ch]
  _DWORD v7[4]; // [esp+Ch] [ebp-40h] BYREF
  float v8[12]; // [esp+1Ch] [ebp-30h] BYREF

  result = a2; /*0x7559d3*/
  if ( a1 == a2 ) /*0x7559d9*/
  {
    qmemcpy(a3, (char *)&unk_B43F10 + 48 * (_DWORD)a2, 0x30u); /*0x7559f0*/
  }
  else
  {
    v6 = a4; /*0x755a04*/
    v5 = (float *)Math::QuaternionSlerp(v7, &flt_B44348[4 * (_DWORD)a1], &flt_B44348[4 * (_DWORD)a2], v6); /*0x755a1a*/
    result = ToQuaternionMatrix(v8, v5); /*0x755a25*/
    qmemcpy(a3, result, 0x30u); /*0x755a35*/
  }
  return result; /*0x7559f2*/
}
}
} // namespace gamemd

// 0x755A40
namespace gamemd {
void * VoxelAnim_InterpolatePose(void * a1, int a2, int a3, double a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *__fastcall VoxelAnim_InterpolatePose(void *a1, int a2, int a3, double a4)
{
  int v5; // eax
  const void *v6; // esi
  float v8; // [esp+0h] [ebp-50h]
  _BYTE v9[48]; // [esp+20h] [ebp-30h] BYREF

  if ( a2 == a3 ) /*0x755a4e*/
  {
    qmemcpy(a1, (char *)&unk_B45188 + 48 * a3, 0x30u); /*0x755aa7*/
    return a1; /*0x755aaa*/
  }
  else
  {
    v8 = a4; /*0x755a5c*/
    v5 = Math::QuaternionSlerp((int)&dword_B43188 + 16 * a3, v8); /*0x755a6e*/
    v6 = (const void *)ToQuaternionMatrix(v9, v5); /*0x755a83*/
    qmemcpy(a1, v6, 0x30u); /*0x755a89*/
    return a1; /*0x755a87*/
  }
}
}
} // namespace gamemd

// 0x755AC0
namespace gamemd {
int sub_755AC0(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_755AC0(int a1)
{
  return MEMORY[0x8467FC][a1]; /*0x755ac7*/
}
}
} // namespace gamemd

// 0x755AD0
namespace gamemd {
char sub_755AD0(unsigned int * a1, int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall sub_755AD0(unsigned int *a1, int *a2)
{
  double v2; // st7
  unsigned int v4; // [esp+14h] [ebp-4h]

  v4 = *a1; /*0x755ad8*/
  v2 = Math::CalcAngle((double)(int)a1[1] - (double)a2[1], (double)*a2 - (double)(int)*a1); /*0x755afa*/
  LOWORD(v4) = Math::RoundToInt((v2 - 1.570796326794897) * -10430.06004058427); /*0x755b10*/
  return 32 - (((v4 >> 7) + 1) >> 1); /*0x755b26*/
}
}
} // namespace gamemd

// 0x755BF0
namespace gamemd {
float * sub_755BF0(float * a1, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
float *__fastcall sub_755BF0(float *a1, int a2, int a3)
{
  double v4; // st7
  int v5; // edx
  double v6; // st7
  float v7; // [esp+0h] [ebp-Ch]
  float v8; // [esp+4h] [ebp-8h]
  float v9; // [esp+8h] [ebp-4h]

  v4 = flt_B432D8[3 * a2] * 1.5; /*0x755bff*/
  v5 = 12 * a2 + 11809496; /*0x755c05*/
  v7 = v4; /*0x755c0c*/
  v8 = *(float *)(v5 + 4) * 1.5; /*0x755c1d*/
  v6 = *(float *)(v5 + 8) * 1.5; /*0x755c24*/
  *a1 = v7; /*0x755c2c*/
  v9 = v6; /*0x755c32*/
  a1[1] = v8; /*0x755c36*/
  a1[2] = v9; /*0x755c3d*/
  return a1; /*0x755c40*/
}
}
} // namespace gamemd

// 0x755C50
namespace gamemd {
int j_TechnoClass_ClearArrays()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
int j_TechnoClass_ClearArrays()
{
  return TechnoClass::ClearArrays();
}
}
} // namespace gamemd

// 0x755C90
namespace gamemd {
int sub_755C90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_755C90()
{
  dword_B45580 = 0; /*0x755c92*/
  dword_B45584 = 0; /*0x755c97*/
  dword_B45588 = 0; /*0x755c9c*/
  dword_B4558C = 0; /*0x755ca1*/
  return 0; /*0x755ca6*/
}
}
} // namespace gamemd

// 0x755CB0
namespace gamemd {
unsigned int * E4Recv_755CB0::sub_755CB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_755CB0(_DWORD *this)
{
  *(_BYTE *)this = 0; /*0x755cb4*/
  *(this + 1) = 0; /*0x755cb6*/
  *(this + 2) = 0; /*0x755cb9*/
  *(this + 3) = 0; /*0x755cbc*/
  *(this + 4) = 0; /*0x755cbf*/
  *(this + 5) = 0; /*0x755cc2*/
  *(this + 6) = 0; /*0x755cc5*/
  return this; /*0x755cc8*/
}
}
} // namespace gamemd

// 0x7564A0
namespace gamemd {
int E4Recv_7564A0::sub_7564A0(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_7564A0(_DWORD *this, int a2)
{
  return *(this + 4) + 12 * a2; /*0x7564ad*/
}
}
} // namespace gamemd

// 0x7564E0
namespace gamemd {
float * E4Recv_7564E0::sub_7564E0(float * a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
float *__thiscall sub_7564E0(_DWORD *this, float *a2, int a3, int a4)
{
  int v4; // edx
  int v5; // ecx
  int v6; // eax
  double v7; // st7
  float *v8; // eax
  double v9; // st6
  float v11; // [esp+0h] [ebp-18h]
  float v12; // [esp+4h] [ebp-14h]
  float v13; // [esp+8h] [ebp-10h]
  float v14; // [esp+10h] [ebp-8h]
  float v15; // [esp+14h] [ebp-4h]

  v4 = *(this + 4); /*0x7564e7*/
  v5 = *(this + 5); /*0x7564ea*/
  v6 = 41 * (a4 + *(_DWORD *)(v4 + 12 * a3)); /*0x7564fc*/
  v7 = *(float *)(v5 + 4 * v6 + 112) + *(float *)(v5 + 4 * v6 + 88); /*0x756503*/
  v8 = (float *)(v5 + 164 * (a4 + *(_DWORD *)(v4 + 12 * a3))); /*0x75650b*/
  v14 = v8[29] + v8[23]; /*0x756511*/
  v9 = v8[30] + v8[24]; /*0x756518*/
  v15 = v9; /*0x756521*/
  v11 = v7 * 0.5; /*0x75652b*/
  *a2 = v11; /*0x75653d*/
  v12 = v14 * 0.5; /*0x75653f*/
  a2[1] = v12; /*0x756551*/
  v13 = v15 * 0.5; /*0x756554*/
  a2[2] = v13; /*0x75655c*/
  return a2; /*0x75655f*/
}
}
} // namespace gamemd

// 0x756570
namespace gamemd {
int E4Recv_756570::sub_756570()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_756570(_DWORD *this)
{
  return 12 * *(this + 1) + 164 * *(this + 2) + *(this + 3) + 28; /*0x75658c*/
}
}
} // namespace gamemd

// 0x757120
namespace gamemd {
int RenderVoxels()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __usercall Voxel_Render@<al>(int *a1@<ebx>, int a2@<ebp>, int a3@<edi>, int *a4)
{
  int *v4; // ecx
  unsigned int v5; // esi
  _WORD *v6; // eax
  __int16 v7; // dx
  char result; // al
  int *v9; // eax
  int *v10; // edx
  int *v11; // eax
  _BYTE *v12; // esi
  unsigned __int8 *v13; // esi
  unsigned __int8 v14; // al
  int v15; // eax
  char *v16; // esi
  int v17; // edx
  int v18; // eax
  bool v19; // zf
  unsigned int v20; // edx
  unsigned int v21; // edx
  int *v22; // [esp+Ch] [ebp-30h]
  char v23; // [esp+10h] [ebp-2Ch]
  int v24; // [esp+14h] [ebp-28h]
  unsigned int v25; // [esp+18h] [ebp-24h]
  unsigned int v26; // [esp+1Ch] [ebp-20h]
  __int16 v27; // [esp+20h] [ebp-1Ch]
  __int16 v28; // [esp+24h] [ebp-18h]
  __int16 v29; // [esp+28h] [ebp-14h]
  __int16 v30; // [esp+2Ch] [ebp-10h]
  __int16 v31; // [esp+30h] [ebp-Ch]
  __int16 v32; // [esp+34h] [ebp-8h]
  int v33; // [esp+38h] [ebp-4h]

  v4 = a4; /*0x757120*/
  g_VoxelOffsetTable[0] = 0; /*0x757127*/
  v5 = 1; /*0x757141*/
  if ( *((_BYTE *)a4 + 50) > 1u ) /*0x757146*/
  {
    v6 = (_WORD *)(g_VoxelOffsetTable + 2); /*0x757148*/
    do /*0x75716f*/
    {
      v7 = *(v6 - 1); /*0x75714d*/
      v6 += 2; /*0x757151*/
      *(v6 - 1) = *((_WORD *)a4 + 21) + v7; /*0x757158*/
      ++v5; /*0x757164*/
      *v6 = *(v6 - 2) + *((_WORD *)a4 + 22); /*0x757165*/
    }
    while ( v5 < *((unsigned __int8 *)a4 + 50) ); /*0x75716f*/
  }
  LOWORD(a3) = *((_WORD *)a4 + 12); /*0x757175*/
  LOWORD(a2) = *((_WORD *)a4 + 13); /*0x757179*/
  LOWORD(a4) = *((_WORD *)a4 + 14); /*0x75717d*/
  result = *((_BYTE *)v4 + 49); /*0x757182*/
  v26 = 0; /*0x757185*/
  if ( result ) /*0x75718f*/
  {
    do /*0x757347*/
    {
      HIWORD(v9) = HIWORD(a4); /*0x757196*/
      v32 = (__int16)a4; /*0x75719d*/
      v33 = v4[3]; /*0x7571a6*/
      v30 = a3; /*0x7571aa*/
      v31 = a2; /*0x7571ae*/
      v25 = 0; /*0x7571b2*/
      if ( *((_BYTE *)v4 + 48) ) /*0x7571a1*/
      {
        do /*0x757306*/
        {
          v29 = (__int16)a4; /*0x7571c7*/
          v10 = (int *)*v4; /*0x7571cb*/
          v27 = a3; /*0x7571cd*/
          v28 = a2; /*0x7571d1*/
          v11 = *(int **)(*v4 + 4 * v4[3]); /*0x7571d5*/
          if ( v11 != (int *)-1 ) /*0x7571db*/
          {
            v12 = (char *)v11 + v4[2]; /*0x7571e4*/
            v11 = (int *)*((unsigned __int8 *)v4 + 50); /*0x7571e8*/
            v22 = v11; /*0x7571ed*/
            if ( *((_BYTE *)v4 + 50) ) /*0x7571e8*/
            {
              do /*0x7572c6*/
              {
                LOBYTE(v10) = *v12; /*0x7571f7*/
                v13 = v12 + 1; /*0x7571f9*/
                v14 = (unsigned __int8)v10; /*0x7571fe*/
                LOWORD(v10) = *((_WORD *)v4 + 23) * (unsigned __int8)v10; /*0x757206*/
                LOWORD(a1) = g_VoxelOffsetTable[v14]; /*0x757210*/
                a3 += (int)a1; /*0x757218*/
                LOWORD(a1) = HIWORD(g_VoxelOffsetTable[v14]); /*0x75721a*/
                a2 += (int)a1; /*0x757222*/
                a1 = (int *)((char *)a4 + (_DWORD)v10); /*0x757228*/
                v10 = (int *)((char *)v22 - v14); /*0x75722e*/
                v15 = *v13; /*0x757232*/
                v16 = (char *)(v13 + 1); /*0x757234*/
                a4 = a1; /*0x757237*/
                v22 = v10; /*0x75723b*/
                if ( v15 ) /*0x75723f*/
                {
                  v24 = v15; /*0x757243*/
                  v22 = (int *)((char *)v10 - v15); /*0x757247*/
                  do /*0x7572bd*/
                  {
                    v23 = *v16; /*0x75724f*/
                    v17 = BYTE1(a3); /*0x757260*/
                    v18 = v17 | a2 & 0xFF00; /*0x757263*/
                    v16 += 2; /*0x757276*/
                    if ( (unsigned __int16)((unsigned __int16)a4 >> 8) > (unsigned __int8)MEMORY[0xB1D5E0][v18] ) /*0x75727c*/
                    {
                      MEMORY[0xB1D5E0][v18] = BYTE1(a4); /*0x757282*/
                      MEMORY[0xB2FF78][v18] = v23; /*0x757288*/
                      MEMORY[0xB2FF79][v18] = v23; /*0x75728e*/
                      MEMORY[0xB1D5E1][v18] = BYTE1(a4); /*0x757294*/
                    }
                    LOWORD(v18) = *((_WORD *)v4 + 21); /*0x75729a*/
                    LOWORD(v17) = *((_WORD *)v4 + 22); /*0x75729e*/
                    a3 += v18; /*0x7572a2*/
                    LOWORD(v18) = *((_WORD *)v4 + 23); /*0x7572a4*/
                    a2 += v17; /*0x7572a8*/
                    v10 = (int *)((char *)a4 + v18); /*0x7572ae*/
                    v19 = v24 == 1; /*0x7572b4*/
                    a4 = (int *)((char *)a4 + v18); /*0x7572b5*/
                    --v24; /*0x7572b9*/
                  }
                  while ( !v19 ); /*0x7572bd*/
                }
                HIWORD(v11) = HIWORD(v22); /*0x7572bf*/
                v12 = v16 + 1; /*0x7572c3*/
              }
              while ( v22 ); /*0x7572c6*/
            }
          }
          LOWORD(v11) = v29 + *((_WORD *)v4 + 17); /*0x7572d3*/
          LOWORD(a3) = v27 + *((_WORD *)v4 + 15); /*0x7572e0*/
          LOWORD(a2) = v28 + *((_WORD *)v4 + 16); /*0x7572e5*/
          a4 = v11; /*0x7572ea*/
          v20 = *((unsigned __int8 *)v4 + 48); /*0x7572f5*/
          v4[3] += v4[4]; /*0x7572f8*/
          v9 = (int *)++v25; /*0x7572ff*/
        }
        while ( v25 < v20 ); /*0x757306*/
      }
      LOWORD(v9) = v32 + *((_WORD *)v4 + 20); /*0x757314*/
      LOWORD(a3) = v30 + *((_WORD *)v4 + 18); /*0x757321*/
      LOWORD(a2) = v31 + *((_WORD *)v4 + 19); /*0x757326*/
      a4 = v9; /*0x75732b*/
      v21 = *((unsigned __int8 *)v4 + 49); /*0x757336*/
      v4[3] = v33 + v4[5]; /*0x757339*/
      result = ++v26; /*0x757340*/
    }
    while ( v26 < v21 ); /*0x757347*/
  }
  return result; /*0x75734e*/
}
}
} // namespace gamemd

// 0x757360
namespace gamemd {
int ProcessVoxelDepthSamples()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __usercall ProcessVoxelDepthSamples@<al>(unsigned int a1@<ebx>, int a2@<ebp>, int a3@<edi>, unsigned int a4)
{
  unsigned int v4; // ecx
  unsigned int v5; // esi
  _WORD *v6; // eax
  __int16 v7; // di
  char result; // al
  unsigned int v9; // eax
  unsigned int v10; // edx
  unsigned int v11; // eax
  unsigned __int8 *v12; // esi
  int v13; // eax
  unsigned __int8 *v14; // esi
  int v15; // edx
  int v16; // eax
  bool v17; // zf
  unsigned int v18; // edx
  unsigned int v19; // [esp+10h] [ebp-30h]
  char v20; // [esp+14h] [ebp-2Ch]
  unsigned __int8 v21; // [esp+14h] [ebp-2Ch]
  int v22; // [esp+18h] [ebp-28h]
  unsigned int v23; // [esp+1Ch] [ebp-24h]
  unsigned int v24; // [esp+20h] [ebp-20h]
  __int16 v25; // [esp+24h] [ebp-1Ch]
  __int16 v26; // [esp+28h] [ebp-18h]
  __int16 v27; // [esp+2Ch] [ebp-14h]
  __int16 v28; // [esp+30h] [ebp-10h]
  __int16 v29; // [esp+34h] [ebp-Ch]
  __int16 v30; // [esp+38h] [ebp-8h]
  int v31; // [esp+3Ch] [ebp-4h]

  v4 = a4; /*0x757360*/
  g_VoxelOffsetTable[0] = 0; /*0x757369*/
  v5 = 1; /*0x757380*/
  if ( *(_BYTE *)(a4 + 50) > 1u ) /*0x757385*/
  {
    v6 = (_WORD *)(g_VoxelOffsetTable + 2); /*0x757387*/
    do /*0x7573ae*/
    {
      v7 = *(_WORD *)(a4 + 42) + *(v6 - 1); /*0x757392*/
      v6 += 2; /*0x757396*/
      *(v6 - 1) = v7; /*0x757399*/
      ++v5; /*0x7573a5*/
      *v6 = *(_WORD *)(a4 + 44) + *(v6 - 2); /*0x7573a6*/
      a1 = *(unsigned __int8 *)(a4 + 50); /*0x7573a9*/
    }
    while ( v5 < a1 ); /*0x7573ae*/
  }
  LOWORD(a3) = *(_WORD *)(a4 + 24); /*0x7573b4*/
  LOWORD(a2) = *(_WORD *)(a4 + 26); /*0x7573b8*/
  LOWORD(a4) = *(_WORD *)(a4 + 28); /*0x7573bc*/
  result = *(_BYTE *)(v4 + 49); /*0x7573c1*/
  v24 = 0; /*0x7573c4*/
  if ( result ) /*0x7573ca*/
  {
    do /*0x757585*/
    {
      v28 = a3; /*0x7573d7*/
      v31 = *(_DWORD *)(v4 + 12); /*0x7573db*/
      HIWORD(v9) = HIWORD(a4); /*0x7573df*/
      v30 = a4; /*0x7573e3*/
      v29 = a2; /*0x7573ec*/
      v23 = 0; /*0x7573f0*/
      if ( *(_BYTE *)(v4 + 48) ) /*0x7573e7*/
      {
        do /*0x757544*/
        {
          v27 = a4; /*0x757401*/
          v10 = *(_DWORD *)(v4 + 4); /*0x757405*/
          v25 = a3; /*0x757408*/
          v26 = a2; /*0x75740c*/
          v11 = *(_DWORD *)(v10 + 4 * *(_DWORD *)(v4 + 12)); /*0x757410*/
          if ( v11 != -1 ) /*0x757416*/
          {
            v12 = (unsigned __int8 *)(v11 + *(_DWORD *)(v4 + 8)); /*0x75741f*/
            v11 = *(unsigned __int8 *)(v4 + 50); /*0x757423*/
            v19 = v11; /*0x757428*/
            if ( *(_BYTE *)(v4 + 50) ) /*0x757423*/
            {
              do /*0x757504*/
              {
                v13 = *v12; /*0x757434*/
                v14 = v12 - 1; /*0x757436*/
                if ( v13 ) /*0x757439*/
                {
                  v22 = v13; /*0x757443*/
                  v19 -= v13; /*0x757449*/
                  do /*0x7574bf*/
                  {
                    v20 = *(v14 - 1); /*0x757453*/
                    v14 -= 2; /*0x757464*/
                    v15 = BYTE1(a3); /*0x757465*/
                    v16 = v15 | a2 & 0xFF00; /*0x757468*/
                    if ( (unsigned __int16)BYTE1(a4) > (unsigned __int8)MEMORY[0xB1D5E0][v16] ) /*0x75747e*/
                    {
                      MEMORY[0xB1D5E0][v16] = BYTE1(a4); /*0x757484*/
                      MEMORY[0xB2FF78][v16] = v20; /*0x75748a*/
                      MEMORY[0xB2FF79][v16] = v20; /*0x757490*/
                      MEMORY[0xB1D5E1][v16] = BYTE1(a4); /*0x757496*/
                    }
                    LOWORD(v16) = *(_WORD *)(v4 + 42); /*0x75749c*/
                    LOWORD(v15) = *(_WORD *)(v4 + 44); /*0x7574a0*/
                    a3 += v16; /*0x7574a4*/
                    LOWORD(v16) = *(_WORD *)(v4 + 46); /*0x7574a6*/
                    a2 += v15; /*0x7574aa*/
                    v10 = v16 + a4; /*0x7574b0*/
                    v17 = v22 == 1; /*0x7574b6*/
                    a4 += v16; /*0x7574b7*/
                    --v22; /*0x7574bb*/
                  }
                  while ( !v17 ); /*0x7574bf*/
                }
                v21 = *(v14 - 1); /*0x7574c5*/
                v12 = v14 - 2; /*0x7574c9*/
                LOWORD(v10) = *(_WORD *)(v4 + 46) * v21; /*0x7574d2*/
                v11 = v21; /*0x7574d7*/
                LOWORD(a1) = g_VoxelOffsetTable[v21]; /*0x7574dc*/
                a3 += a1; /*0x7574e4*/
                LOWORD(a1) = HIWORD(g_VoxelOffsetTable[v21]); /*0x7574e6*/
                a2 += a1; /*0x7574ee*/
                a1 = v10 + a4; /*0x7574f4*/
                v10 = v19 - v21; /*0x7574fa*/
                v17 = v19 == v21; /*0x7574fa*/
                a4 = a1; /*0x7574fc*/
                v19 = v10; /*0x757500*/
              }
              while ( !v17 ); /*0x757504*/
            }
          }
          LOWORD(v11) = v27 + *(_WORD *)(v4 + 34); /*0x757511*/
          LOWORD(a3) = v25 + *(_WORD *)(v4 + 30); /*0x75751e*/
          LOWORD(a2) = v26 + *(_WORD *)(v4 + 32); /*0x757523*/
          a4 = v11; /*0x757528*/
          *(_DWORD *)(v4 + 12) += *(_DWORD *)(v4 + 16); /*0x757535*/
          v9 = v23 + 1; /*0x75753d*/
          v23 = v9; /*0x757540*/
        }
        while ( v9 < *(unsigned __int8 *)(v4 + 48) ); /*0x757544*/
      }
      LOWORD(v9) = v30 + *(_WORD *)(v4 + 40); /*0x757552*/
      LOWORD(a3) = v28 + *(_WORD *)(v4 + 36); /*0x75755f*/
      LOWORD(a2) = v29 + *(_WORD *)(v4 + 38); /*0x757564*/
      a4 = v9; /*0x757569*/
      v18 = *(unsigned __int8 *)(v4 + 49); /*0x757574*/
      *(_DWORD *)(v4 + 12) = v31 + *(_DWORD *)(v4 + 20); /*0x757577*/
      result = ++v24; /*0x75757e*/
    }
    while ( v24 < v18 ); /*0x757585*/
  }
  return result; /*0x75758b*/
}
}
} // namespace gamemd

// 0x757980
namespace gamemd {
int ProcessVoxelColorScanline()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __usercall ProcessVoxelColorScanline@<al>(unsigned int a1@<edx>, int a2@<ebx>, int a3@<ebp>, int a4@<edi>, int a5)
{
  unsigned int v6; // esi
  _WORD *v7; // eax
  __int16 v8; // dx
  unsigned int v9; // eax
  int v10; // eax
  unsigned __int8 *v11; // esi
  unsigned __int8 v12; // al
  unsigned __int8 *v13; // esi
  int v14; // eax
  unsigned __int8 *v15; // esi
  int v16; // eax
  unsigned __int16 v17; // dx
  unsigned __int8 v18; // bl
  unsigned __int8 *v19; // esi
  unsigned __int8 v20; // bp
  bool v21; // zf
  unsigned int v22; // eax
  unsigned __int8 v24; // [esp+10h] [ebp-34h]
  unsigned int v25; // [esp+14h] [ebp-30h]
  int v26; // [esp+18h] [ebp-2Ch]
  int v27; // [esp+1Ch] [ebp-28h]
  unsigned int v28; // [esp+20h] [ebp-24h]
  unsigned int v29; // [esp+24h] [ebp-20h]
  __int16 v30; // [esp+28h] [ebp-1Ch]
  __int16 v31; // [esp+2Ch] [ebp-18h]
  __int16 v32; // [esp+30h] [ebp-14h]
  __int16 v33; // [esp+34h] [ebp-10h]
  __int16 v34; // [esp+38h] [ebp-Ch]
  __int16 v35; // [esp+3Ch] [ebp-8h]
  int v36; // [esp+40h] [ebp-4h]
  int v37; // [esp+48h] [ebp+4h]

  g_VoxelOffsetTable[0] = 0; /*0x757987*/
  v6 = 1; /*0x7579a1*/
  if ( *(_BYTE *)(a5 + 50) > 1u ) /*0x7579a6*/
  {
    v7 = (_WORD *)(g_VoxelOffsetTable + 2); /*0x7579a8*/
    do /*0x7579cf*/
    {
      v8 = *(v7 - 1); /*0x7579ad*/
      v7 += 2; /*0x7579b1*/
      *(v7 - 1) = *(_WORD *)(a5 + 42) + v8; /*0x7579b8*/
      ++v6; /*0x7579c4*/
      *v7 = *(_WORD *)(a5 + 44) + *(v7 - 2); /*0x7579c5*/
      a1 = *(unsigned __int8 *)(a5 + 50); /*0x7579ca*/
    }
    while ( v6 < a1 ); /*0x7579cf*/
  }
  LOBYTE(v9) = *(_BYTE *)(a5 + 49); /*0x7579d1*/
  LOWORD(a4) = *(_WORD *)(a5 + 24); /*0x7579d4*/
  LOWORD(a3) = *(_WORD *)(a5 + 26); /*0x7579d8*/
  LOWORD(a1) = *(_WORD *)(a5 + 28); /*0x7579dc*/
  v29 = 0; /*0x7579e2*/
  if ( (_BYTE)v9 ) /*0x7579ea*/
  {
    do /*0x757bd7*/
    {
      v33 = a4; /*0x7579f4*/
      v36 = *(_DWORD *)(a5 + 12); /*0x7579f8*/
      v34 = a3; /*0x757a01*/
      v35 = a1; /*0x757a05*/
      v28 = 0; /*0x757a09*/
      if ( *(_BYTE *)(a5 + 48) ) /*0x7579fc*/
      {
        do /*0x757b9a*/
        {
          v30 = a4; /*0x757a1c*/
          v31 = a3; /*0x757a20*/
          v10 = *(_DWORD *)(*(_DWORD *)a5 + 4 * *(_DWORD *)(a5 + 12)); /*0x757a24*/
          v32 = a1; /*0x757a27*/
          if ( v10 != -1 ) /*0x757a2e*/
          {
            v11 = (unsigned __int8 *)(v10 + *(_DWORD *)(a5 + 8)); /*0x757a37*/
            v37 = *(unsigned __int8 *)(a5 + 50); /*0x757a40*/
            if ( *(_BYTE *)(a5 + 50) ) /*0x757a3b*/
            {
              do /*0x757b5e*/
              {
                v12 = *v11; /*0x757a4a*/
                v13 = v11 + 1; /*0x757a4c*/
                LOWORD(a2) = g_VoxelOffsetTable[v12]; /*0x757a5a*/
                a4 += a2; /*0x757a62*/
                LOWORD(a2) = HIWORD(g_VoxelOffsetTable[v12]); /*0x757a64*/
                a3 += a2; /*0x757a6c*/
                LOWORD(a2) = *(_WORD *)(a5 + 46) * v12; /*0x757a74*/
                a1 += a2; /*0x757a79*/
                a2 = v37 - v12; /*0x757a7f*/
                v14 = *v13; /*0x757a83*/
                v15 = v13 + 1; /*0x757a85*/
                v26 = a3; /*0x757a88*/
                v25 = a1; /*0x757a8c*/
                v37 = a2; /*0x757a90*/
                if ( v14 ) /*0x757a94*/
                {
                  v27 = v14; /*0x757a9c*/
                  v37 = a2 - v14; /*0x757aa0*/
                  do /*0x757b51*/
                  {
                    a2 = BYTE1(a4); /*0x757ab3*/
                    v16 = a2 | a3 & 0xFF00; /*0x757ab6*/
                    v17 = BYTE1(a1); /*0x757ab8*/
                    if ( v17 <= (unsigned __int8)MEMORY[0xB1D5E0][v16] ) /*0x757ac7*/
                    {
                      v15 += 2; /*0x757b27*/
                    }
                    else
                    {
                      v18 = *v15; /*0x757ac9*/
                      v19 = v15 + 1; /*0x757acb*/
                      v20 = v18; /*0x757ad2*/
                      v24 = *v19; /*0x757ad6*/
                      v15 = v19 + 1; /*0x757ada*/
                      MEMORY[0xB1D5E0][v16] = v17; /*0x757adf*/
                      MEMORY[0xB1D5E1][v16] = v17; /*0x757aeb*/
                      a2 = (unsigned __int8)g_VoxelShadeTable[v24] << 8; /*0x757b05*/
                      LOBYTE(a2) = g_VoxelColorPalette[a2 + v20]; /*0x757b0e*/
                      a3 = v26; /*0x757b15*/
                      MEMORY[0xB2FF78][v16] = a2; /*0x757b19*/
                      MEMORY[0xB2FF79][v16] = a2; /*0x757b1f*/
                    }
                    LOWORD(v16) = *(_WORD *)(a5 + 42); /*0x757b2a*/
                    a4 += v16; /*0x757b32*/
                    LOWORD(v16) = *(_WORD *)(a5 + 44); /*0x757b34*/
                    a3 += v16; /*0x757b38*/
                    LOWORD(v16) = *(_WORD *)(a5 + 46); /*0x757b3a*/
                    a1 = v16 + v25; /*0x757b3e*/
                    v21 = v27 == 1; /*0x757b44*/
                    v26 = a3; /*0x757b45*/
                    v25 += v16; /*0x757b49*/
                    --v27; /*0x757b4d*/
                  }
                  while ( !v21 ); /*0x757b51*/
                }
                v11 = v15 + 1; /*0x757b5b*/
              }
              while ( v37 ); /*0x757b5e*/
            }
          }
          LOWORD(a4) = v30 + *(_WORD *)(a5 + 30); /*0x757b76*/
          LOWORD(a3) = v31 + *(_WORD *)(a5 + 32); /*0x757b7b*/
          LOWORD(a1) = v32 + *(_WORD *)(a5 + 34); /*0x757b80*/
          v22 = *(unsigned __int8 *)(a5 + 48); /*0x757b89*/
          *(_DWORD *)(a5 + 12) += *(_DWORD *)(a5 + 16); /*0x757b8c*/
          ++v28; /*0x757b96*/
        }
        while ( v28 < v22 ); /*0x757b9a*/
      }
      LOWORD(a4) = v33 + *(_WORD *)(a5 + 36); /*0x757bb3*/
      LOWORD(a3) = v34 + *(_WORD *)(a5 + 38); /*0x757bb8*/
      LOWORD(a1) = v35 + *(_WORD *)(a5 + 40); /*0x757bbd*/
      *(_DWORD *)(a5 + 12) = v36 + *(_DWORD *)(a5 + 20); /*0x757bc8*/
      v9 = *(unsigned __int8 *)(a5 + 49); /*0x757bcd*/
      ++v29; /*0x757bd3*/
    }
    while ( v29 < v9 ); /*0x757bd7*/
  }
  return v9; /*0x757bde*/
}
}
} // namespace gamemd

// 0x757BF0
namespace gamemd {
int VoxelDrawScanline()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __usercall VoxelDrawScanline@<al>(unsigned int a1@<ebx>, int a2@<ebp>, int a3@<edi>, int a4)
{
  unsigned int v5; // esi
  _WORD *v6; // eax
  __int16 v7; // di
  int v8; // eax
  int v9; // edx
  int v10; // eax
  unsigned __int8 *v11; // esi
  int v12; // eax
  unsigned __int8 *v13; // esi
  int v14; // eax
  int v15; // ebx
  int v16; // ebp
  bool v17; // zf
  unsigned int v18; // edx
  bool v19; // cf
  unsigned int v21; // [esp+10h] [ebp-38h]
  unsigned __int8 v22; // [esp+14h] [ebp-34h]
  int v23; // [esp+18h] [ebp-30h]
  unsigned __int8 v24; // [esp+1Ch] [ebp-2Ch]
  int v25; // [esp+20h] [ebp-28h]
  unsigned int v26; // [esp+24h] [ebp-24h]
  int v27; // [esp+28h] [ebp-20h]
  __int16 v28; // [esp+2Ch] [ebp-1Ch]
  __int16 v29; // [esp+30h] [ebp-18h]
  __int16 v30; // [esp+34h] [ebp-14h]
  __int16 v31; // [esp+38h] [ebp-10h]
  __int16 v32; // [esp+3Ch] [ebp-Ch]
  __int16 v33; // [esp+40h] [ebp-8h]
  int v34; // [esp+44h] [ebp-4h]
  int v35; // [esp+4Ch] [ebp+4h]

  g_VoxelOffsetTable[0] = 0; /*0x757bf9*/
  v5 = 1; /*0x757c10*/
  if ( *(_BYTE *)(a4 + 50) > 1u ) /*0x757c15*/
  {
    v6 = (_WORD *)(g_VoxelOffsetTable + 2); /*0x757c17*/
    do /*0x757c3e*/
    {
      v7 = *(_WORD *)(a4 + 42) + *(v6 - 1); /*0x757c22*/
      v6 += 2; /*0x757c26*/
      *(v6 - 1) = v7; /*0x757c29*/
      ++v5; /*0x757c35*/
      *v6 = *(v6 - 2) + *(_WORD *)(a4 + 44); /*0x757c36*/
      a1 = *(unsigned __int8 *)(a4 + 50); /*0x757c39*/
    }
    while ( v5 < a1 ); /*0x757c3e*/
  }
  LOBYTE(v8) = *(_BYTE *)(a4 + 49); /*0x757c40*/
  LOWORD(a1) = *(_WORD *)(a4 + 26); /*0x757c43*/
  LOWORD(a2) = *(_WORD *)(a4 + 28); /*0x757c47*/
  LOWORD(a3) = *(_WORD *)(a4 + 24); /*0x757c4b*/
  v21 = a1; /*0x757c51*/
  v35 = a2; /*0x757c55*/
  v27 = 0; /*0x757c59*/
  if ( (_BYTE)v8 ) /*0x757c5d*/
  {
    do /*0x757e5d*/
    {
      v31 = a3; /*0x757c6a*/
      v34 = *(_DWORD *)(a4 + 12); /*0x757c6e*/
      v32 = a1; /*0x757c77*/
      v33 = a2; /*0x757c7b*/
      v26 = 0; /*0x757c7f*/
      if ( *(_BYTE *)(a4 + 48) ) /*0x757c72*/
      {
        do /*0x757e18*/
        {
          v9 = *(_DWORD *)(a4 + 12); /*0x757c89*/
          v28 = a3; /*0x757c8f*/
          v29 = a1; /*0x757c93*/
          v10 = *(_DWORD *)(*(_DWORD *)(a4 + 4) + 4 * v9); /*0x757c97*/
          v30 = a2; /*0x757c9a*/
          if ( v10 != -1 ) /*0x757ca1*/
          {
            v11 = (unsigned __int8 *)(v10 + *(_DWORD *)(a4 + 8)); /*0x757caa*/
            v23 = *(unsigned __int8 *)(a4 + 50); /*0x757cb3*/
            if ( *(_BYTE *)(a4 + 50) ) /*0x757cae*/
            {
              do /*0x757dd4*/
              {
                v12 = *v11; /*0x757cbf*/
                v13 = v11 - 1; /*0x757cc1*/
                if ( v12 ) /*0x757cc4*/
                {
                  v25 = v12; /*0x757cce*/
                  v23 -= v12; /*0x757cd4*/
                  do /*0x757d89*/
                  {
                    v9 = BYTE1(a3); /*0x757ce7*/
                    v14 = v9 | a1 & 0xFF00; /*0x757cea*/
                    LOWORD(v9) = BYTE1(a2); /*0x757cef*/
                    if ( (unsigned __int16)BYTE1(a2) <= (unsigned __int8)MEMORY[0xB1D5E0][v14] ) /*0x757cfe*/
                    {
                      v13 -= 2; /*0x757d5f*/
                    }
                    else
                    {
                      v24 = *v13; /*0x757d03*/
                      v13 -= 2; /*0x757d11*/
                      v15 = (unsigned __int8)g_VoxelShadeTable[v24] << 8; /*0x757d31*/
                      v16 = v13[1]; /*0x757d34*/
                      MEMORY[0xB1D5E0][v14] = v9; /*0x757d3a*/
                      MEMORY[0xB1D5E1][v14] = v9; /*0x757d40*/
                      LOBYTE(v15) = g_VoxelColorPalette[v15 + v16]; /*0x757d46*/
                      MEMORY[0xB2FF78][v14] = v15; /*0x757d4d*/
                      MEMORY[0xB2FF79][v14] = v15; /*0x757d53*/
                      a1 = v21; /*0x757d59*/
                    }
                    LOWORD(v14) = *(_WORD *)(a4 + 42); /*0x757d62*/
                    LOWORD(v9) = *(_WORD *)(a4 + 44); /*0x757d6a*/
                    a3 += v14; /*0x757d6e*/
                    LOWORD(v14) = *(_WORD *)(a4 + 46); /*0x757d70*/
                    a1 += v9; /*0x757d74*/
                    a2 = v14 + v35; /*0x757d76*/
                    v17 = v25 == 1; /*0x757d7c*/
                    v21 = a1; /*0x757d7d*/
                    v35 += v14; /*0x757d81*/
                    --v25; /*0x757d85*/
                  }
                  while ( !v17 ); /*0x757d89*/
                }
                v22 = *(v13 - 1); /*0x757d93*/
                v11 = v13 - 2; /*0x757d97*/
                LOWORD(v9) = g_VoxelOffsetTable[v22]; /*0x757da1*/
                a3 += v9; /*0x757da9*/
                LOWORD(v9) = HIWORD(g_VoxelOffsetTable[v22]); /*0x757dab*/
                a1 += v9; /*0x757db3*/
                LOWORD(v9) = *(_WORD *)(a4 + 46) * v22; /*0x757dbb*/
                a2 += v9; /*0x757dc0*/
                v9 = v23 - v22; /*0x757dc6*/
                v17 = v23 == v22; /*0x757dc6*/
                v21 = a1; /*0x757dc8*/
                v35 = a2; /*0x757dcc*/
                v23 = v9; /*0x757dd0*/
              }
              while ( !v17 ); /*0x757dd4*/
            }
          }
          LOWORD(a3) = v28 + *(_WORD *)(a4 + 30); /*0x757dec*/
          LOWORD(a1) = v29 + *(_WORD *)(a4 + 32); /*0x757df1*/
          LOWORD(a2) = v30 + *(_WORD *)(a4 + 34); /*0x757df6*/
          v18 = *(unsigned __int8 *)(a4 + 48); /*0x757dff*/
          *(_DWORD *)(a4 + 12) += *(_DWORD *)(a4 + 16); /*0x757e02*/
          v21 = a1; /*0x757e09*/
          v35 = a2; /*0x757e0e*/
          ++v26; /*0x757e14*/
        }
        while ( v26 < v18 ); /*0x757e18*/
      }
      LOWORD(a3) = v31 + *(_WORD *)(a4 + 36); /*0x757e31*/
      LOWORD(a1) = v32 + *(_WORD *)(a4 + 38); /*0x757e36*/
      LOWORD(a2) = v33 + *(_WORD *)(a4 + 40); /*0x757e3b*/
      v8 = v34 + *(_DWORD *)(a4 + 20); /*0x757e40*/
      v21 = a1; /*0x757e4c*/
      v19 = v27 + 1 < (unsigned int)*(unsigned __int8 *)(a4 + 49); /*0x757e50*/
      v35 = a2; /*0x757e52*/
      *(_DWORD *)(a4 + 12) = v8; /*0x757e56*/
      ++v27; /*0x757e59*/
    }
    while ( v19 ); /*0x757e5d*/
  }
  return v8; /*0x757e63*/
}
}
} // namespace gamemd

// 0x7581F0
namespace gamemd {
int ProcessVoxelColorSamples()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __usercall ProcessVoxelColorSamples@<al>(int *a1@<ebx>, int a2@<ebp>, int a3@<edi>, int *a4)
{
  int *v4; // ecx
  unsigned int v5; // esi
  _WORD *v6; // eax
  __int16 v7; // dx
  char result; // al
  int *v9; // eax
  int *v10; // edx
  int *v11; // eax
  _BYTE *v12; // esi
  unsigned __int8 *v13; // esi
  unsigned __int8 v14; // al
  int v15; // eax
  char *v16; // esi
  int v17; // edx
  int v18; // eax
  bool v19; // zf
  unsigned int v20; // edx
  unsigned int v21; // edx
  int *v22; // [esp+Ch] [ebp-30h]
  char v23; // [esp+10h] [ebp-2Ch]
  int v24; // [esp+14h] [ebp-28h]
  unsigned int v25; // [esp+18h] [ebp-24h]
  unsigned int v26; // [esp+1Ch] [ebp-20h]
  __int16 v27; // [esp+20h] [ebp-1Ch]
  __int16 v28; // [esp+24h] [ebp-18h]
  __int16 v29; // [esp+28h] [ebp-14h]
  __int16 v30; // [esp+2Ch] [ebp-10h]
  __int16 v31; // [esp+30h] [ebp-Ch]
  __int16 v32; // [esp+34h] [ebp-8h]
  int v33; // [esp+38h] [ebp-4h]

  v4 = a4; /*0x7581f0*/
  g_VoxelOffsetTable[0] = 0; /*0x7581f7*/
  v5 = 1; /*0x758211*/
  if ( *((_BYTE *)a4 + 50) > 1u ) /*0x758216*/
  {
    v6 = (_WORD *)(g_VoxelOffsetTable + 2); /*0x758218*/
    do /*0x75823f*/
    {
      v7 = *(v6 - 1); /*0x75821d*/
      v6 += 2; /*0x758221*/
      *(v6 - 1) = *((_WORD *)a4 + 21) + v7; /*0x758228*/
      ++v5; /*0x758234*/
      *v6 = *((_WORD *)a4 + 22) + *(v6 - 2); /*0x758235*/
    }
    while ( v5 < *((unsigned __int8 *)a4 + 50) ); /*0x75823f*/
  }
  LOWORD(a3) = *((_WORD *)a4 + 12); /*0x758245*/
  LOWORD(a2) = *((_WORD *)a4 + 13); /*0x758249*/
  LOWORD(a4) = *((_WORD *)a4 + 14); /*0x75824d*/
  result = *((_BYTE *)v4 + 49); /*0x758252*/
  v26 = 0; /*0x758255*/
  if ( result ) /*0x75825f*/
  {
    do /*0x758415*/
    {
      HIWORD(v9) = HIWORD(a4); /*0x758266*/
      v32 = (__int16)a4; /*0x75826d*/
      v33 = v4[3]; /*0x758276*/
      v30 = a3; /*0x75827a*/
      v31 = a2; /*0x75827e*/
      v25 = 0; /*0x758282*/
      if ( *((_BYTE *)v4 + 48) ) /*0x758271*/
      {
        do /*0x7583d4*/
        {
          v29 = (__int16)a4; /*0x758297*/
          v10 = (int *)*v4; /*0x75829b*/
          v27 = a3; /*0x75829d*/
          v28 = a2; /*0x7582a1*/
          v11 = *(int **)(*v4 + 4 * v4[3]); /*0x7582a5*/
          if ( v11 != (int *)-1 ) /*0x7582ab*/
          {
            v12 = (char *)v11 + v4[2]; /*0x7582b4*/
            v11 = (int *)*((unsigned __int8 *)v4 + 50); /*0x7582b8*/
            v22 = v11; /*0x7582bd*/
            if ( *((_BYTE *)v4 + 50) ) /*0x7582b8*/
            {
              do /*0x758394*/
              {
                LOBYTE(v10) = *v12; /*0x7582c7*/
                v13 = v12 + 1; /*0x7582c9*/
                v14 = (unsigned __int8)v10; /*0x7582ce*/
                LOWORD(v10) = *((_WORD *)v4 + 23) * (unsigned __int8)v10; /*0x7582d6*/
                LOWORD(a1) = g_VoxelOffsetTable[v14]; /*0x7582e0*/
                a3 += (int)a1; /*0x7582e8*/
                LOWORD(a1) = HIWORD(g_VoxelOffsetTable[v14]); /*0x7582ea*/
                a2 += (int)a1; /*0x7582f2*/
                a1 = (int *)((char *)a4 + (_DWORD)v10); /*0x7582f8*/
                v10 = (int *)((char *)v22 - v14); /*0x7582fe*/
                v15 = *v13; /*0x758302*/
                v16 = (char *)(v13 + 1); /*0x758304*/
                a4 = a1; /*0x758307*/
                v22 = v10; /*0x75830b*/
                if ( v15 ) /*0x75830f*/
                {
                  v24 = v15; /*0x758313*/
                  v22 = (int *)((char *)v10 - v15); /*0x758317*/
                  do /*0x75838b*/
                  {
                    v23 = *v16; /*0x75831f*/
                    v17 = BYTE1(a3); /*0x758330*/
                    v18 = v17 | a2 & 0xFF00; /*0x758333*/
                    ++v16; /*0x758346*/
                    if ( (unsigned __int16)((unsigned __int16)a4 >> 8) > (unsigned __int8)MEMORY[0xB1D5E0][v18] ) /*0x75834a*/
                    {
                      MEMORY[0xB1D5E0][v18] = BYTE1(a4); /*0x758350*/
                      MEMORY[0xB2FF78][v18] = v23; /*0x758356*/
                      MEMORY[0xB2FF79][v18] = v23; /*0x75835c*/
                      MEMORY[0xB1D5E1][v18] = BYTE1(a4); /*0x758362*/
                    }
                    LOWORD(v18) = *((_WORD *)v4 + 21); /*0x758368*/
                    LOWORD(v17) = *((_WORD *)v4 + 22); /*0x75836c*/
                    a3 += v18; /*0x758370*/
                    LOWORD(v18) = *((_WORD *)v4 + 23); /*0x758372*/
                    a2 += v17; /*0x758376*/
                    v10 = (int *)((char *)a4 + v18); /*0x75837c*/
                    v19 = v24 == 1; /*0x758382*/
                    a4 = (int *)((char *)a4 + v18); /*0x758383*/
                    --v24; /*0x758387*/
                  }
                  while ( !v19 ); /*0x75838b*/
                }
                HIWORD(v11) = HIWORD(v22); /*0x75838d*/
                v12 = v16 + 1; /*0x758391*/
              }
              while ( v22 ); /*0x758394*/
            }
          }
          LOWORD(v11) = v29 + *((_WORD *)v4 + 17); /*0x7583a1*/
          LOWORD(a3) = v27 + *((_WORD *)v4 + 15); /*0x7583ae*/
          LOWORD(a2) = v28 + *((_WORD *)v4 + 16); /*0x7583b3*/
          a4 = v11; /*0x7583b8*/
          v20 = *((unsigned __int8 *)v4 + 48); /*0x7583c3*/
          v4[3] += v4[4]; /*0x7583c6*/
          v9 = (int *)++v25; /*0x7583cd*/
        }
        while ( v25 < v20 ); /*0x7583d4*/
      }
      LOWORD(v9) = v32 + *((_WORD *)v4 + 20); /*0x7583e2*/
      LOWORD(a3) = v30 + *((_WORD *)v4 + 18); /*0x7583ef*/
      LOWORD(a2) = v31 + *((_WORD *)v4 + 19); /*0x7583f4*/
      a4 = v9; /*0x7583f9*/
      v21 = *((unsigned __int8 *)v4 + 49); /*0x758404*/
      v4[3] = v33 + v4[5]; /*0x758407*/
      result = ++v26; /*0x75840e*/
    }
    while ( v26 < v21 ); /*0x758415*/
  }
  return result; /*0x75841c*/
}
}
} // namespace gamemd

// 0x758430
namespace gamemd {
int ProcessVoxelScanSamples()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __usercall ProcessVoxelScanSamples@<al>(unsigned int a1@<ebx>, int a2@<ebp>, int a3@<edi>, unsigned int a4)
{
  unsigned int v4; // ecx
  unsigned int v5; // esi
  _WORD *v6; // eax
  __int16 v7; // di
  char result; // al
  unsigned int v9; // eax
  unsigned int v10; // edx
  unsigned int v11; // eax
  char *v12; // esi
  int v13; // eax
  char *v14; // esi
  int v15; // edx
  int v16; // eax
  bool v17; // zf
  unsigned int v18; // edx
  unsigned int v19; // [esp+10h] [ebp-30h]
  char v20; // [esp+14h] [ebp-2Ch]
  unsigned __int8 v21; // [esp+14h] [ebp-2Ch]
  int v22; // [esp+18h] [ebp-28h]
  unsigned int v23; // [esp+1Ch] [ebp-24h]
  unsigned int v24; // [esp+20h] [ebp-20h]
  __int16 v25; // [esp+24h] [ebp-1Ch]
  __int16 v26; // [esp+28h] [ebp-18h]
  __int16 v27; // [esp+2Ch] [ebp-14h]
  __int16 v28; // [esp+30h] [ebp-10h]
  __int16 v29; // [esp+34h] [ebp-Ch]
  __int16 v30; // [esp+38h] [ebp-8h]
  int v31; // [esp+3Ch] [ebp-4h]

  v4 = a4; /*0x758430*/
  g_VoxelOffsetTable[0] = 0; /*0x758439*/
  v5 = 1; /*0x758450*/
  if ( *(_BYTE *)(a4 + 50) > 1u ) /*0x758455*/
  {
    v6 = (_WORD *)(g_VoxelOffsetTable + 2); /*0x758457*/
    do /*0x75847e*/
    {
      v7 = *(_WORD *)(a4 + 42) + *(v6 - 1); /*0x758462*/
      v6 += 2; /*0x758466*/
      *(v6 - 1) = v7; /*0x758469*/
      ++v5; /*0x758475*/
      *v6 = *(_WORD *)(a4 + 44) + *(v6 - 2); /*0x758476*/
      a1 = *(unsigned __int8 *)(a4 + 50); /*0x758479*/
    }
    while ( v5 < a1 ); /*0x75847e*/
  }
  LOWORD(a3) = *(_WORD *)(a4 + 24); /*0x758484*/
  LOWORD(a2) = *(_WORD *)(a4 + 26); /*0x758488*/
  LOWORD(a4) = *(_WORD *)(a4 + 28); /*0x75848c*/
  result = *(_BYTE *)(v4 + 49); /*0x758491*/
  v24 = 0; /*0x758494*/
  if ( result ) /*0x75849a*/
  {
    do /*0x758653*/
    {
      v28 = a3; /*0x7584a7*/
      v31 = *(_DWORD *)(v4 + 12); /*0x7584ab*/
      HIWORD(v9) = HIWORD(a4); /*0x7584af*/
      v30 = a4; /*0x7584b3*/
      v29 = a2; /*0x7584bc*/
      v23 = 0; /*0x7584c0*/
      if ( *(_BYTE *)(v4 + 48) ) /*0x7584b7*/
      {
        do /*0x758612*/
        {
          v27 = a4; /*0x7584d1*/
          v10 = *(_DWORD *)(v4 + 4); /*0x7584d5*/
          v25 = a3; /*0x7584d8*/
          v26 = a2; /*0x7584dc*/
          v11 = *(_DWORD *)(v10 + 4 * *(_DWORD *)(v4 + 12)); /*0x7584e0*/
          if ( v11 != -1 ) /*0x7584e6*/
          {
            v12 = (char *)(v11 + *(_DWORD *)(v4 + 8)); /*0x7584ef*/
            v11 = *(unsigned __int8 *)(v4 + 50); /*0x7584f3*/
            v19 = v11; /*0x7584f8*/
            if ( *(_BYTE *)(v4 + 50) ) /*0x7584f3*/
            {
              do /*0x7585d2*/
              {
                v13 = (unsigned __int8)*v12; /*0x758504*/
                v14 = v12 - 1; /*0x758506*/
                if ( v13 ) /*0x758509*/
                {
                  v22 = v13; /*0x758513*/
                  v19 -= v13; /*0x758519*/
                  do /*0x75858d*/
                  {
                    v20 = *v14; /*0x758521*/
                    v15 = BYTE1(a3); /*0x758532*/
                    v16 = v15 | a2 & 0xFF00; /*0x758535*/
                    --v14; /*0x758548*/
                    if ( (unsigned __int16)BYTE1(a4) > (unsigned __int8)MEMORY[0xB1D5E0][v16] ) /*0x75854c*/
                    {
                      MEMORY[0xB1D5E0][v16] = BYTE1(a4); /*0x758552*/
                      MEMORY[0xB2FF78][v16] = v20; /*0x758558*/
                      MEMORY[0xB2FF79][v16] = v20; /*0x75855e*/
                      MEMORY[0xB1D5E1][v16] = BYTE1(a4); /*0x758564*/
                    }
                    LOWORD(v16) = *(_WORD *)(v4 + 42); /*0x75856a*/
                    LOWORD(v15) = *(_WORD *)(v4 + 44); /*0x75856e*/
                    a3 += v16; /*0x758572*/
                    LOWORD(v16) = *(_WORD *)(v4 + 46); /*0x758574*/
                    a2 += v15; /*0x758578*/
                    v10 = v16 + a4; /*0x75857e*/
                    v17 = v22 == 1; /*0x758584*/
                    a4 += v16; /*0x758585*/
                    --v22; /*0x758589*/
                  }
                  while ( !v17 ); /*0x75858d*/
                }
                v21 = *(v14 - 1); /*0x758593*/
                v12 = v14 - 2; /*0x758597*/
                LOWORD(v10) = *(_WORD *)(v4 + 46) * v21; /*0x7585a0*/
                v11 = v21; /*0x7585a5*/
                LOWORD(a1) = g_VoxelOffsetTable[v21]; /*0x7585aa*/
                a3 += a1; /*0x7585b2*/
                LOWORD(a1) = HIWORD(g_VoxelOffsetTable[v21]); /*0x7585b4*/
                a2 += a1; /*0x7585bc*/
                a1 = v10 + a4; /*0x7585c2*/
                v10 = v19 - v21; /*0x7585c8*/
                v17 = v19 == v21; /*0x7585c8*/
                a4 = a1; /*0x7585ca*/
                v19 = v10; /*0x7585ce*/
              }
              while ( !v17 ); /*0x7585d2*/
            }
          }
          LOWORD(v11) = v27 + *(_WORD *)(v4 + 34); /*0x7585df*/
          LOWORD(a3) = v25 + *(_WORD *)(v4 + 30); /*0x7585ec*/
          LOWORD(a2) = v26 + *(_WORD *)(v4 + 32); /*0x7585f1*/
          a4 = v11; /*0x7585f6*/
          *(_DWORD *)(v4 + 12) += *(_DWORD *)(v4 + 16); /*0x758603*/
          v9 = v23 + 1; /*0x75860b*/
          v23 = v9; /*0x75860e*/
        }
        while ( v9 < *(unsigned __int8 *)(v4 + 48) ); /*0x758612*/
      }
      LOWORD(v9) = v30 + *(_WORD *)(v4 + 40); /*0x758620*/
      LOWORD(a3) = v28 + *(_WORD *)(v4 + 36); /*0x75862d*/
      LOWORD(a2) = v29 + *(_WORD *)(v4 + 38); /*0x758632*/
      a4 = v9; /*0x758637*/
      v18 = *(unsigned __int8 *)(v4 + 49); /*0x758642*/
      *(_DWORD *)(v4 + 12) = v31 + *(_DWORD *)(v4 + 20); /*0x758645*/
      result = ++v24; /*0x75864c*/
    }
    while ( v24 < v18 ); /*0x758653*/
  }
  return result; /*0x758659*/
}
}
} // namespace gamemd

// 0x7589F0
namespace gamemd {
BOOL E4Recv_7589F0::sub_7589F0(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __thiscall sub_7589F0(_DWORD *this, int a2)
{
  BOOL v4; // ebx

  (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 28))(a2, 1); /*0x758a01*/
  v4 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)a2 + 36))(a2, *(this + 4), 768) != 768; /*0x758a1b*/
  (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 52))(a2); /*0x758a24*/
  return v4; /*0x758a27*/
}
}
} // namespace gamemd

// 0x758AD0
namespace gamemd {
int E4Recv_758AD0::sub_758AD0(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_758AD0(_DWORD *this, int *a2)
{
  int v3; // ebx
  int v4; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // edx
  _DWORD v9[4]; // [esp+Ch] [ebp-10h] BYREF

  v3 = 0; /*0x758ae2*/
  if ( !(*(int (__thiscall **)(int *, int))(*a2 + 28))(a2, 2) ) /*0x758ae4*/
    goto LABEL_5; /*0x758ae4*/
  v4 = *(this + 2); /*0x758aed*/
  v5 = *(this + 1); /*0x758af0*/
  v9[0] = *this; /*0x758af3*/
  v6 = *(this + 3); /*0x758af7*/
  v9[2] = v4; /*0x758afa*/
  v9[1] = v5; /*0x758afe*/
  v7 = *a2; /*0x758b02*/
  v9[3] = v6; /*0x758b08*/
  if ( (*(int (__thiscall **)(int *, _DWORD *, int))(v7 + 48))(a2, v9, 16) != 16 /*0x758b4a*/
    || (*(int (__thiscall **)(int *, _DWORD, int))(*a2 + 48))(a2, *(this + 4), 768) != 768
    || (*(int (__thiscall **)(int *, _DWORD, _DWORD))(*a2 + 48))(a2, *(this + 5), *(this + 2) << 8) != *(this + 2) << 8 )
  {
LABEL_5:
    v3 = 1; /*0x758b4c*/
  }
  (*(void (__thiscall **)(int *))(*a2 + 52))(a2); /*0x758b55*/
  return v3; /*0x758b58*/
}
}
} // namespace gamemd

// 0x758E10
namespace gamemd {
char E4Recv_758E10::sub_758E10(float a2, float a3, float a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_758E10(_DWORD *this, float a2, float a3, float a4)
{
  unsigned __int8 *v4; // ecx
  char v5; // bl
  int i; // edx
  double v7; // st6
  double v8; // st5
  double v9; // st4
  float v11; // [esp+4h] [ebp-8h]

  v4 = (unsigned __int8 *)*(this + 4); /*0x758e13*/
  v5 = 0; /*0x758e17*/
  v11 = 100000.0; /*0x758e19*/
  for ( i = 0; i < 256; ++i ) /*0x758e21*/
  {
    v7 = a3 - (double)v4[1]; /*0x758e49*/
    v8 = a4 - (double)v4[2]; /*0x758e51*/
    v9 = v8 * v8 + v7 * v7 + (a2 - (double)*v4) * (a2 - (double)*v4); /*0x758e63*/
    if ( v9 < v11 ) /*0x758e74*/
    {
      v11 = v9; /*0x758e76*/
      v5 = i; /*0x758e7a*/
    }
    v4 += 3; /*0x758e81*/
  }
  return v5; /*0x758e8e*/
}
}
} // namespace gamemd

// 0x758F70
namespace gamemd {
int sub_758F70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_758F70()
{
  dword_B45B18 = 0; /*0x758f72*/
  dword_B45B1C = 0; /*0x758f77*/
  dword_B45B20 = 0; /*0x758f7c*/
  dword_B45B24 = 0; /*0x758f81*/
  return 0; /*0x758f86*/
}
}
} // namespace gamemd

// 0x758F90
namespace gamemd {
void sub_758F90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_758F90()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x758f9c*/
  dbl_B45B30 = Math::Sqrt(v0 + v0); /*0x758fae*/
}
}
} // namespace gamemd

// 0x758FC0
namespace gamemd {
void sub_758FC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_758FC0()
{
  dbl_B45B98 = dbl_B45B30 / 60.0; /*0x758fcc*/
}
}
} // namespace gamemd

// 0x758FE0
namespace gamemd {
void sub_758FE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_758FE0()
{
  dbl_B45B80 = 1.0 / dbl_B45B98; /*0x758fec*/
}
}
} // namespace gamemd

// 0x759000
namespace gamemd {
void sub_759000()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_759000()
{
  dbl_B45B78 = 0.0174532925199433 * 45.0; /*0x75900c*/
}
}
} // namespace gamemd

// 0x759020
namespace gamemd {
void sub_759020()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_759020()
{
  dbl_B45B38 = 0.0174532925199433 * 60.0; /*0x75902c*/
}
}
} // namespace gamemd

// 0x759040
namespace gamemd {
void sub_759040()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_759040()
{
  dbl_B45B10 = 0.0174532925199433 * 90.0; /*0x75904c*/
}
}
} // namespace gamemd

// 0x759060
namespace gamemd {
long long sub_759060()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_759060()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B45B10 - dbl_B45B38); /*0x759072*/
  result = Math::RoundToInt(v0 * dbl_B45B30 * 0.5); /*0x759086*/
  dword_B45BA0 = result; /*0x75908b*/
  return result; /*0x759090*/
}
}
} // namespace gamemd

// 0x7590A0
namespace gamemd {
void sub_7590A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_7590A0()
{
  dbl_B45B40 = Math::ArcTan((double)dword_B45BA0 * 0.00390625); /*0x7590b7*/
}
}
} // namespace gamemd

// 0x7590D0
namespace gamemd {
void sub_7590D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_7590D0()
{
  dbl_B45B70 = Math::ArcTan((double)(2 * dword_B45BA0) / dbl_B45B30); /*0x7590f2*/
}
}
} // namespace gamemd

// 0x759100
namespace gamemd {
long long sub_759100()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_759100()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B45BA0) + 0.5); /*0x75911b*/
  dword_B45B94 = result; /*0x759120*/
  return result; /*0x759126*/
}
}
} // namespace gamemd

// 0x759130
namespace gamemd {
int sub_759130()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_759130()
{
  word_B45B28 = 0; /*0x759132*/
  word_B45B2A = 0; /*0x759138*/
  return 0; /*0x75913e*/
}
}
} // namespace gamemd

// 0x759140
namespace gamemd {
int sub_759140()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_759140()
{
  dword_B45B48 = 0; /*0x759142*/
  dword_B45B4C = 0; /*0x759147*/
  dword_B45B50 = 0; /*0x75914c*/
  return 0; /*0x759151*/
}
}
} // namespace gamemd

// 0x759160
namespace gamemd {
int sub_759160()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_759160()
{
  dword_B45B90 = 0; /*0x759165*/
  dword_B45B88 = 128; /*0x75916f*/
  dword_B45B8C = 128; /*0x759174*/
  return 128; /*0x759179*/
}
}
} // namespace gamemd

// 0x759180
namespace gamemd {
int sub_759180()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_759180()
{
  AsyncIO_Instance = 0; /*0x759187*/
  dword_B45B60 = 0; /*0x75918c*/
  byte_B45B64 = 1; /*0x759191*/
  byte_B45B65 = 0; /*0x759198*/
  dword_B45B58 = (int)&DynamicVectorClass<MovieHandle *>::`vftable'; /*0x75919d*/
  dword_B45B6C = 10; /*0x7591a7*/
  g_AsyncIOState = 0; /*0x7591b1*/
  return atexit(sub_7591C0); /*0x7591bc*/
}
}
} // namespace gamemd

// 0x7591C0
namespace gamemd {
void sub_7591C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_7591C0()
{
  dword_B45B58 = (int)&VectorClass<MovieHandle *>::`vftable'; /*0x7591c8*/
  if ( AsyncIO_Instance && byte_B45B65 ) /*0x7591dc*/
  {
    __3_YAXPAX_Z(AsyncIO_Instance); /*0x7591df*/
    AsyncIO_Instance = 0; /*0x7591e7*/
  }
  byte_B45B65 = 0; /*0x7591ed*/
  dword_B45B60 = 0; /*0x7591f3*/
}
}
} // namespace gamemd

// 0x759200
namespace gamemd {
char sub_759200()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_759200()
{
  MSG Msg; // [esp+0h] [ebp-1Ch] BYREF

  ++unk_AA0430; /*0x759210*/
  if ( !GameLoopMessagePump(&Msg, 0, 0, 0, 0) ) /*0x759223*/
    return 1; /*0x759223*/
  if ( IsMessageDialog(&Msg, 0, 0, 0) ) /*0x75922f*/
  {
    TranslateMessage(&Msg); /*0x75923d*/
    DispatchMessageA(&Msg); /*0x759248*/
    return 1; /*0x759253*/
  }
  return 0; /*0x759250*/
}
}
} // namespace gamemd

// 0x759760
namespace gamemd {
unsigned char * E4Recv_759760::sub_759760(const void * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_BYTE *__thiscall sub_759760(_BYTE *this, const void *a2)
{
  qmemcpy(this + 516, a2, 0x300u); /*0x759773*/
  *(this + 1320) = 1; /*0x759776*/
  return this; /*0x759775*/
}
}
} // namespace gamemd

// 0x759790
namespace gamemd {
LPDIRECTDRAW E4Recv_759790::sub_759790()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LPDIRECTDRAW __thiscall sub_759790(int this)
{
  return Surface::CreateSurfacePalette((void *)(this + 516));
}
}
} // namespace gamemd

// 0x759BC0
namespace gamemd {
unsigned int E4Recv_759BC0::sub_759BC0(signed int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall sub_759BC0(int this, signed int a2)
{
  signed int v2; // edi
  unsigned int result; // eax

  v2 = a2; /*0x759bc2*/
  if ( a2 == -1 ) /*0x759bcb*/
    v2 = this->M1288 - 1; /*0x759bd3*/
  if ( this->M1284 != v2 ) /*0x759bda*/
  {
    if ( ProcessAudioStreamBuffer(this->M512, v2, 0) != -6 ) /*0x759bee*/
      this->M1284 = v2; /*0x759bf0*/
    this->M1284 = v2; /*0x759bf6*/
  }
  MovieClass::RenderLoop((char *)this, v2, 0); /*0x759c01*/
  result = this->M1284; /*0x759c06*/
  if ( result >= this->M1288 ) /*0x759c14*/
    this->M1284 = 0; /*0x759c16*/
  return result; /*0x759c20*/
}
}
} // namespace gamemd

// 0x75A100
namespace gamemd {
BOOL sub_75A100(int a1, int a2, unsigned int * a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __cdecl sub_75A100(int a1, int a2, _DWORD *a3, int a4)
{
  return VoxelRenderer::InitializeBuffers(*(_DWORD *)(a1 + 172), a2, a3, a4); /*0x75a11e*/
}
}
} // namespace gamemd

// 0x75A120
namespace gamemd {
BOOL E4Recv_75A120::sub_75A120(int a2, int * a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __thiscall sub_75A120(int this, int a2, int *a3, int a4)
{
  BOOL result; // eax
  bool v6; // zf
  int v7; // eax
  int v8; // esi
  int v9; // esi
  int v10; // esi
  int v11; // eax
  int v12; // [esp-Ch] [ebp-10h]

  result = 1; /*0x75a127*/
  switch ( a2 ) /*0x75a136*/
  {
    case 1: /*0x75a136*/
    case 2: /*0x75a136*/
      goto LABEL_14;
    case 3: /*0x75a136*/
      a2 = 0; /*0x75a143*/
      a3 = 0; /*0x75a147*/
      if ( !LookupFileInfoCache((const char *)(this + 113), 0, &a3, &a2, 0) ) /*0x75a15e*/
        goto LABEL_5; /*0x75a15e*/
      v6 = (*(int (__thiscall **)(int, int, int))(this->M4 + 32))(this + 4, a3[3], 1) == 0; /*0x75a17c*/
      v7 = this->M4; /*0x75a17e*/
      v12 = a2; /*0x75a180*/
      *(_BYTE *)(this + 112) = !v6; /*0x75a186*/
      result = (*(int (__thiscall **)(int, int, int))(v7 + 40))(this + 4, v12, 1) == 0; /*0x75a191*/
      break; /*0x75a193*/
    case 4: /*0x75a136*/
      (*(void (__thiscall **)(int))(this->M4 + 52))(this + 4); /*0x75a273*/
      *(_BYTE *)(this + 112) = 0; /*0x75a278*/
      return 0; /*0x75a276*/
    case 5: /*0x75a136*/
      v8 = a4; /*0x75a1a0*/
      return (*(int (__thiscall **)(int, int *, int))(this->M4 + 36))(this + 4, a3, a4) != v8; /*0x75a1b3*/
    case 6: /*0x75a136*/
LABEL_5:
      result = 1; /*0x75a1b6*/
      break; /*0x75a1bc*/
    case 7: /*0x75a136*/
      result = (*(int (__thiscall **)(int, int, int *))(this->M4 + 40))(this + 4, a4, a3) == 0; /*0x75a1d7*/
      break; /*0x75a1d8*/
    case 8: /*0x75a136*/
      if ( a4 <= 0 ) /*0x75a1e1*/
      {
        v10 = this + 4; /*0x75a21c*/
        result = (*(int (__thiscall **)(int, int, int *))(this->M4 + 40))(this + 4, a4, a3) == 0; /*0x75a22a*/
        if ( !result ) /*0x75a22b*/
        {
          result = (*(int (__thiscall **)(int, int *, int))(*(_DWORD *)v10 + 36))(v10, &a4, 1) != 1; /*0x75a240*/
          if ( !result ) /*0x75a242*/
            result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v10 + 40))(v10, -1, 1) == 0; /*0x75a254*/
        }
      }
      else
      {
        v9 = this + 4; /*0x75a1ea*/
        result = (*(int (__thiscall **)(int, int, int *))(this->M4 + 40))(this + 4, a4 - 1, a3) == 0; /*0x75a1f9*/
        if ( !result ) /*0x75a1fa*/
          result = (*(int (__thiscall **)(int, int *, int))(*(_DWORD *)v9 + 36))(v9, &a4, 1) != 1; /*0x75a210*/
      }
      break; /*0x75a212*/
    case 9: /*0x75a136*/
      v11 = (*(int (__thiscall **)(int))(this->M4 + 44))(this + 4); /*0x75a25e*/
      *a3 = v11; /*0x75a265*/
LABEL_14:
      result = 0; /*0x75a267*/
      break; /*0x75a267*/
    default:
      return result;
  }
  return result; /*0x75a192*/
}
}
} // namespace gamemd

// 0x75A2B0
namespace gamemd {
BOOL sub_75A2B0(int a1, int a2, int * a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __cdecl sub_75A2B0(int a1, int a2, int *a3, int a4)
{
  return sub_75A120(*(_DWORD *)(a1 + 172), a2, a3, a4); /*0x75a2ce*/
}
}
} // namespace gamemd

// 0x75A2F0
namespace gamemd {
CCINIClass * sub_75A2F0(int a1, int a2, unsigned int * Block, size_t Size)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *sub_75A2F0(int a1, int a2, _DWORD *Block, size_t Size)
{
  CCINIClass *result; // eax

  switch ( a2 ) /*0x75a2fc*/
  {
    case 2: /*0x75a2fc*/
      result = (CCINIClass *)malloc((AbstractClass *)Size); /*0x75a308*/
      break; /*0x75a310*/
    case 3: /*0x75a2fc*/
      free(Block); /*0x75a316*/
      result = 0; /*0x75a31e*/
      break; /*0x75a320*/
    case 4: /*0x75a2fc*/
    case 5: /*0x75a2fc*/
      result = (CCINIClass *)Block; /*0x75a321*/
      break; /*0x75a325*/
    case 6: /*0x75a2fc*/
      *Block = -1; /*0x75a32a*/
      goto LABEL_6; /*0x75a32a*/
    default:
LABEL_6:
      result = 0; /*0x75a330*/
      break; /*0x75a330*/
  }
  return result; /*0x75a310*/
}
}
} // namespace gamemd

// 0x75A350
namespace gamemd {
int sub_75A350(int a1, int a2, unsigned char * a3, unsigned int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl sub_75A350(int a1, int a2, _BYTE *a3, unsigned int a4)
{
  int v4; // ebx
  int i; // eax
  int result; // eax

  v4 = *(_DWORD *)(a1 + 172); /*0x75a359*/
  switch ( a2 ) /*0x75a367*/
  {
    case 2: /*0x75a367*/
      for ( i = 0; i < 256; ++i ) /*0x75a374*/
        a3[i] *= 4; /*0x75a37c*/
      qmemcpy((void *)(v4 + 516), a3, 0x300u); /*0x75a392*/
      *(_BYTE *)(v4 + 1320) = 1; /*0x75a395*/
      result = 0; /*0x75a39d*/
      break; /*0x75a3a0*/
    case 3: /*0x75a367*/
      if ( *(_DWORD *)(v4 + 1296) != -1 ) /*0x75a3a8*/
        sub_748380((unsigned __int16 *)a3, a4 >> 1); /*0x75a3b4*/
      *(_DWORD *)(v4 + 1356) = *(_DWORD *)(v4 + 1284); /*0x75a3c1*/
      result = 0; /*0x75a3bf*/
      break; /*0x75a3c8*/
    case 6: /*0x75a367*/
      result = (*(int (**)(void))(v4 + 1344))(); /*0x75a3c9*/
      break; /*0x75a3d0*/
    case 7: /*0x75a367*/
      (*(void (**)(void))(v4 + 1348))(); /*0x75a3d1*/
      goto LABEL_10; /*0x75a3d1*/
    default:
LABEL_10:
      result = 0; /*0x75a3d7*/
      break; /*0x75a3d7*/
  }
  return result; /*0x75a39f*/
}
}
} // namespace gamemd

// 0x75A7D0
namespace gamemd {
int AnimSystem_Reset(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall AnimSystem_Reset(int a1)
{
  byte_B45BA8[a1 >> 3] |= 1 << (a1 & 7); /*0x75a7dc*/
  return a1 >> 3; /*0x75a7e2*/
}
}
} // namespace gamemd

// 0x75A810
namespace gamemd {
bool BitArray_Test(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __fastcall BitArray_Test(int a1)
{
  return ((unsigned __int8)(1 << (a1 & 7)) & (unsigned __int8)byte_B45BA8[a1 >> 3]) != 0; /*0x75a827*/
}
}
} // namespace gamemd

// 0x75A880
namespace gamemd {
int sub_75A880()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_75A880()
{
  dword_B45BB8 = 0; /*0x75a882*/
  dword_B45BBC = 0; /*0x75a887*/
  dword_B45BC0 = 0; /*0x75a88c*/
  dword_B45BC4 = 0; /*0x75a891*/
  return 0; /*0x75a896*/
}
}
} // namespace gamemd

// 0x75A8A0
namespace gamemd {
void sub_75A8A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_75A8A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x75a8ac*/
  dbl_B45BD0 = Math::Sqrt(v0 + v0); /*0x75a8be*/
}
}
} // namespace gamemd

// 0x75A8D0
namespace gamemd {
void sub_75A8D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_75A8D0()
{
  MEMORY[0xB45C20] = dbl_B45BD0 / 60.0; /*0x75a8dc*/
}
}
} // namespace gamemd

// 0x75A8F0
namespace gamemd {
void sub_75A8F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_75A8F0()
{
  MEMORY[0xB45C08] = 1.0 / MEMORY[0xB45C20]; /*0x75a8fc*/
}
}
} // namespace gamemd

// 0x75A910
namespace gamemd {
void sub_75A910()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_75A910()
{
  MEMORY[0xB45C00] = 0.0174532925199433 * 45.0; /*0x75a91c*/
}
}
} // namespace gamemd

// 0x75A930
namespace gamemd {
void sub_75A930()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_75A930()
{
  dbl_B45BD8 = 0.0174532925199433 * 60.0; /*0x75a93c*/
}
}
} // namespace gamemd

// 0x75A950
namespace gamemd {
void sub_75A950()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_75A950()
{
  dbl_B45BB0 = 0.0174532925199433 * 90.0; /*0x75a95c*/
}
}
} // namespace gamemd

// 0x75A970
namespace gamemd {
long long sub_75A970()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_75A970()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B45BB0 - dbl_B45BD8); /*0x75a982*/
  result = Math::RoundToInt(v0 * dbl_B45BD0 * 0.5); /*0x75a996*/
  MEMORY[0xB45C28] = result; /*0x75a99b*/
  return result; /*0x75a9a0*/
}
}
} // namespace gamemd

// 0x75A9B0
namespace gamemd {
void sub_75A9B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_75A9B0()
{
  dbl_B45BE0 = Math::ArcTan((double)MEMORY[0xB45C28] * 0.00390625); /*0x75a9c7*/
}
}
} // namespace gamemd

// 0x75A9E0
namespace gamemd {
void sub_75A9E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_75A9E0()
{
  MEMORY[0xB45BF8] = Math::ArcTan((double)(2 * MEMORY[0xB45C28]) / dbl_B45BD0); /*0x75aa02*/
}
}
} // namespace gamemd

// 0x75AA10
namespace gamemd {
long long sub_75AA10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_75AA10()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB45C28]) + 0.5); /*0x75aa2b*/
  MEMORY[0xB45C1C] = result; /*0x75aa30*/
  return result; /*0x75aa36*/
}
}
} // namespace gamemd

// 0x75AA40
namespace gamemd {
int sub_75AA40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_75AA40()
{
  word_B45BC8 = 0; /*0x75aa42*/
  word_B45BCA = 0; /*0x75aa48*/
  return 0; /*0x75aa4e*/
}
}
} // namespace gamemd

// 0x75AA50
namespace gamemd {
int sub_75AA50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_75AA50()
{
  g_AsyncMovieState = 0; /*0x75aa52*/
  MEMORY[0xB45BEC] = 0; /*0x75aa57*/
  MEMORY[0xB45BF0] = 0; /*0x75aa5c*/
  return 0; /*0x75aa61*/
}
}
} // namespace gamemd

// 0x75AA70
namespace gamemd {
int sub_75AA70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_75AA70()
{
  MEMORY[0xB45C18] = 0; /*0x75aa75*/
  MEMORY[0xB45C10] = 128; /*0x75aa7f*/
  MEMORY[0xB45C14] = 128; /*0x75aa84*/
  return 128; /*0x75aa89*/
}
}
} // namespace gamemd

// 0x75CC90
namespace gamemd {
void sub_75CC90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_75CC90()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x75cc9c*/
  MEMORY[0xB45C40] = Math::Sqrt(v0 + v0); /*0x75ccae*/
}
}
} // namespace gamemd

// 0x75CCC0
namespace gamemd {
void sub_75CCC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_75CCC0()
{
  MEMORY[0xB45C90] = MEMORY[0xB45C40] / 60.0; /*0x75cccc*/
}
}
} // namespace gamemd

// 0x75CCE0
namespace gamemd {
void sub_75CCE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_75CCE0()
{
  MEMORY[0xB45C78] = 1.0 / MEMORY[0xB45C90]; /*0x75ccec*/
}
}
} // namespace gamemd

// 0x75CD00
namespace gamemd {
void sub_75CD00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_75CD00()
{
  MEMORY[0xB45C70] = 0.0174532925199433 * 45.0; /*0x75cd0c*/
}
}
} // namespace gamemd

// 0x75CD20
namespace gamemd {
void sub_75CD20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_75CD20()
{
  MEMORY[0xB45C48] = 0.0174532925199433 * 60.0; /*0x75cd2c*/
}
}
} // namespace gamemd

// 0x75CD40
namespace gamemd {
void sub_75CD40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_75CD40()
{
  MEMORY[0xB45C30] = 0.0174532925199433 * 90.0; /*0x75cd4c*/
}
}
} // namespace gamemd

// 0x75CD60
namespace gamemd {
long long sub_75CD60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_75CD60()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB45C30] - MEMORY[0xB45C48]); /*0x75cd72*/
  result = Math::RoundToInt(v0 * MEMORY[0xB45C40] * 0.5); /*0x75cd86*/
  MEMORY[0xB45C98] = result; /*0x75cd8b*/
  return result; /*0x75cd90*/
}
}
} // namespace gamemd

// 0x75CDA0
namespace gamemd {
void sub_75CDA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_75CDA0()
{
  MEMORY[0xB45C50] = Math::ArcTan((double)MEMORY[0xB45C98] * 0.00390625); /*0x75cdb7*/
}
}
} // namespace gamemd

// 0x75CDD0
namespace gamemd {
void sub_75CDD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_75CDD0()
{
  MEMORY[0xB45C68] = Math::ArcTan((double)(2 * MEMORY[0xB45C98]) / MEMORY[0xB45C40]); /*0x75cdf2*/
}
}
} // namespace gamemd

// 0x75CE00
namespace gamemd {
long long sub_75CE00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_75CE00()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB45C98]) + 0.5); /*0x75ce1b*/
  MEMORY[0xB45C8C] = result; /*0x75ce20*/
  return result; /*0x75ce26*/
}
}
} // namespace gamemd

// 0x75CE30
namespace gamemd {
int sub_75CE30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_75CE30()
{
  MEMORY[0xB45C38] = 0; /*0x75ce32*/
  MEMORY[0xB45C3A] = 0; /*0x75ce38*/
  return 0; /*0x75ce3e*/
}
}
} // namespace gamemd

// 0x75CE40
namespace gamemd {
int sub_75CE40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_75CE40()
{
  MEMORY[0xB45C58] = 0; /*0x75ce42*/
  MEMORY[0xB45C5C] = 0; /*0x75ce47*/
  MEMORY[0xB45C60] = 0; /*0x75ce4c*/
  return 0; /*0x75ce51*/
}
}
} // namespace gamemd

// 0x75CE60
namespace gamemd {
int sub_75CE60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_75CE60()
{
  MEMORY[0xB45C88] = 0; /*0x75ce65*/
  MEMORY[0xB45C80] = 128; /*0x75ce6f*/
  MEMORY[0xB45C84] = 128; /*0x75ce74*/
  return 128; /*0x75ce79*/
}
}
} // namespace gamemd

// 0x75E740
namespace gamemd {
void sub_75E740()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_75E740()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x75e74c*/
  MEMORY[0xB45D80] = Math::Sqrt(v0 + v0); /*0x75e75e*/
}
}
} // namespace gamemd

// 0x75E770
namespace gamemd {
void sub_75E770()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_75E770()
{
  dbl_B725C0 = MEMORY[0xB45D80] / 60.0; /*0x75e77c*/
}
}
} // namespace gamemd

// 0x75E790
namespace gamemd {
void sub_75E790()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_75E790()
{
  MEMORY[0xB46688] = 1.0 / dbl_B725C0; /*0x75e79c*/
}
}
} // namespace gamemd

// 0x75E7B0
namespace gamemd {
void sub_75E7B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_75E7B0()
{
  MEMORY[0xB46680] = 0.0174532925199433 * 45.0; /*0x75e7bc*/
}
}
} // namespace gamemd

// 0x75E7D0
namespace gamemd {
void sub_75E7D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_75E7D0()
{
  MEMORY[0xB45D90] = 0.0174532925199433 * 60.0; /*0x75e7dc*/
}
}
} // namespace gamemd

// 0x75E7F0
namespace gamemd {
void sub_75E7F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_75E7F0()
{
  MEMORY[0xB45D60] = 0.0174532925199433 * 90.0; /*0x75e7fc*/
}
}
} // namespace gamemd

// 0x75E810
namespace gamemd {
long long sub_75E810()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_75E810()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB45D60] - MEMORY[0xB45D90]); /*0x75e822*/
  result = Math::RoundToInt(v0 * MEMORY[0xB45D80] * 0.5); /*0x75e836*/
  dword_B725C8 = result; /*0x75e83b*/
  return result; /*0x75e840*/
}
}
} // namespace gamemd

// 0x75E850
namespace gamemd {
void sub_75E850()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_75E850()
{
  MEMORY[0xB45D98] = Math::ArcTan((double)dword_B725C8 * 0.00390625); /*0x75e867*/
}
}
} // namespace gamemd

// 0x75E880
namespace gamemd {
void sub_75E880()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_75E880()
{
  MEMORY[0xB46640] = Math::ArcTan((double)(2 * dword_B725C8) / MEMORY[0xB45D80]); /*0x75e8a2*/
}
}
} // namespace gamemd

// 0x75E8B0
namespace gamemd {
long long sub_75E8B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_75E8B0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B725C8) + 0.5); /*0x75e8cb*/
  dword_B725BC = result; /*0x75e8d0*/
  return result; /*0x75e8d6*/
}
}
} // namespace gamemd

// 0x75E8E0
namespace gamemd {
int sub_75E8E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_75E8E0()
{
  MEMORY[0xB45D78] = 0; /*0x75e8e2*/
  MEMORY[0xB45D7A] = 0; /*0x75e8e8*/
  return 0; /*0x75e8ee*/
}
}
} // namespace gamemd

// 0x75E8F0
namespace gamemd {
int sub_75E8F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_75E8F0()
{
  MEMORY[0xB46248] = 0; /*0x75e8f2*/
  MEMORY[0xB4624C] = 0; /*0x75e8f7*/
  MEMORY[0xB46250] = 0; /*0x75e8fc*/
  return 0; /*0x75e901*/
}
}
} // namespace gamemd

// 0x75E910
namespace gamemd {
int sub_75E910()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_75E910()
{
  MEMORY[0xB46698] = 0; /*0x75e915*/
  MEMORY[0xB46690] = 128; /*0x75e91f*/
  MEMORY[0xB46694] = 128; /*0x75e924*/
  return 128; /*0x75e929*/
}
}
} // namespace gamemd

// 0x75E930
namespace gamemd {
int sub_75E930()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_75E930()
{
  MEMORY[0xB45D68] = 0; /*0x75e932*/
  MEMORY[0xB45D6C] = 0; /*0x75e937*/
  MEMORY[0xB45D70] = 0; /*0x75e93c*/
  MEMORY[0xB45D74] = 0; /*0x75e941*/
  return 0; /*0x75e946*/
}
}
} // namespace gamemd

// 0x75EF30
namespace gamemd {
int sub_75EF30(unsigned short * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall sub_75EF30(_WORD *a1, int a2)
{
  int v2; // edx
  int v3; // eax
  int result; // eax

  v2 = (unsigned __int8)((unsigned __int8)(*a1 >> MEMORY[0x8A0DD0]) << MEMORY[0x8A0DD4]) + (char)(a2 >> 2); /*0x75efa7*/
  v3 = (unsigned __int8)((unsigned __int8)(*a1 >> MEMORY[0x8A0DD8]) << MEMORY[0x8A0DDC]) + ((96 * a2) >> 8); /*0x75efbf*/
  if ( v3 > 255 ) /*0x75efc6*/
    v3 = 255; /*0x75efc8*/
  if ( v2 > 255 ) /*0x75efe0*/
    v2 = 255; /*0x75efe2*/
  result = v3 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]; /*0x75f00f*/
  *a1 = result /*0x75f013*/
      | ((int)(unsigned __int8)((unsigned __int8)(*a1 >> MEMORY[0x8A0DE0]) << MEMORY[0x8A0DE4]) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
      | (v2 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]);
  return result; /*0x75f016*/
}
}
} // namespace gamemd

// 0x75F230
namespace gamemd {
int sub_75F230(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_75F230(_DWORD *a1, _DWORD *a2)
{
  int v2; // esi
  int v3; // edi
  double v4; // st7
  double v5; // st6
  int v6; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  double v11; // [esp+10h] [ebp-8h]

  v2 = *a2 - *a1; /*0x75f239*/
  v3 = a1[1] - a2[1]; /*0x75f246*/
  v11 = Math::SinCos(0.3926990816987241); /*0x75f25a*/
  v4 = v11 / Math::ArcTan2(0.3926990816987241); /*0x75f26d*/
  if ( !v2 ) /*0x75f276*/
    goto LABEL_11; /*0x75f276*/
  v5 = (double)v3 / (double)v2; /*0x75f280*/
  if ( v5 >= 1.0 / v4 ) /*0x75f299*/
  {
    if ( v5 >= v4 ) /*0x75f2ba*/
      goto LABEL_8; /*0x75f2ba*/
  }
  else if ( v5 >= v4 ) /*0x75f29e*/
  {
    v6 = (v2 <= 0) - 1; /*0x75f2a8*/
    LOBYTE(v6) = v6 & 0xFC; /*0x75f2ac*/
    return v6 + 5; /*0x75f2b6*/
  }
  if ( v5 >= -v4 ) /*0x75f2c9*/
  {
    v8 = (v2 <= 0) - 1; /*0x75f2d3*/
    LOBYTE(v8) = v8 & 0xFC; /*0x75f2d7*/
    return v8 + 6; /*0x75f2e1*/
  }
LABEL_8:
  if ( v5 < -v4 && v5 >= -1.0 / v4 ) /*0x75f304*/
  {
    v9 = (v2 <= 0) - 1; /*0x75f30e*/
    LOBYTE(v9) = v9 & 0xFC; /*0x75f310*/
    return v9 + 7; /*0x75f318*/
  }
LABEL_11:
  v10 = (v3 <= 0) - 1; /*0x75f31d*/
  LOBYTE(v10) = v10 & 0xFC; /*0x75f326*/
  return v10 + 4; /*0x75f2b3*/
}
}
} // namespace gamemd

// 0x7532BE
namespace gamemd {
char _do_always_noconv_codecvt_base_std__MBE_NXZ_21()
{
return 1;
}
} // namespace gamemd

// 0x7533A0
namespace gamemd {
char _do_always_noconv_codecvt_base_std__MBE_NXZ_22()
{
return 1;
}
} // namespace gamemd

// 0x75A400
namespace gamemd {
int ReturnNull2()
{
return 0;
}
} // namespace gamemd

// 0x75A410
namespace gamemd {
void nullsub_257()
{
  ;
}
} // namespace gamemd

// 0x75A420
namespace gamemd {
void nullsub_258()
{
  ;
}
} // namespace gamemd

// 0x75E080
namespace gamemd {
int WarheadTypeClass__vt_03_(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = -1463464540;
  a2[1] = 298979195;
  a2[2] = 1610642049;
  a2[3] = -1252326136;
  return 0;
}
} // namespace gamemd
