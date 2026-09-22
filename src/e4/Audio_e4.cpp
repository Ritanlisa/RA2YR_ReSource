// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/E4Recv_5E9340_e4.hpp"
#include "e4/classes/E4Recv_6C6B00_e4.hpp"
#include "e4/classes/E4Recv_6C8870_e4.hpp"
#include "e4/classes/E4Recv_76BF00_e4.hpp"
#include "e4/classes/E4Recv_7BD170_e4.hpp"
#include "e4/classes/E4Recv_7BD290_e4.hpp"
#include "e4/classes/E4Recv_7BD2B0_e4.hpp"
#include "e4/classes/E4Recv_7BE4A0_e4.hpp"
#include "e4/classes/E4Recv_7BE660_e4.hpp"
#include "e4/classes/E4Recv_7BE670_e4.hpp"
#include "e4/classes/E4Recv_7C0490_e4.hpp"
#include "e4/classes/E4Recv_7C1150_e4.hpp"
#include "e4/classes/E4Recv_7C1A70_e4.hpp"
#include "e4/classes/E4Recv_7C1BE0_e4.hpp"
#include "e4/classes/E4Recv_7C3750_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Vector_e4.hpp"

// 0x402720
namespace gamemd {
int Audio::GetChannelStatus()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  if ( (*(_BYTE *)(this + 164) & 5) != 0 ) /*0x40272a*/
    return -2146500608; /*0x40272c*/
  if ( !*(_DWORD *)(this + 360) ) /*0x402733*/
    return -2147024896; /*0x40273d*/
  ((Audio *)((char *)this + 16)).InitChannels((char *)(this + 16)); /*0x402748*/
  ObjectClass::Cleanup((int *)this); /*0x40274f*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(this + 212) + 40))(this); /*0x40275c*/
  int v3 = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 212) + 12))(this); /*0x40276a*/
  if ( !v3 ) /*0x40276e*/
  {
    int v4 = *(_DWORD *)(this + 164); /*0x402770*/
    LOBYTE(v4) = v4 | 1; /*0x402776*/
    *(_DWORD *)(this + 164) = v4; /*0x402778*/
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)(this + 212) + 44))(this); /*0x402786*/
  return v3; /*0x402731*/
}
}
} // namespace gamemd

// 0x404D80
namespace gamemd {
int Audio::ReleaseChannelRefs()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  _DWORD **v4; // esi

  int v2 = 0; /*0x404d84*/
  result = *(this + 42); /*0x404d86*/
  if ( result <= 0 ) /*0x404d8e*/
  {
    *(this + 42) = 0; /*0x404dbd*/
  }
  else
  {
    v4 = (_DWORD **)(this + 10); /*0x404d91*/
    do /*0x404dad*/
    {
      RefCount::Decrement(*v4); /*0x404d96*/
      *v4 = 0; /*0x404d9b*/
      result = *(this + 42); /*0x404da1*/
      ++v2; /*0x404da7*/
      ++v4; /*0x404da8*/
    }
    while ( v2 < result ); /*0x404dad*/
    *(this + 42) = 0; /*0x404daf*/
  }
  return result; /*0x404dba*/
}
}
} // namespace gamemd

// 0x4054A0
namespace gamemd {
int Audio::UpdatePlaybackPosition()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  _DWORD * v2 = (_DWORD *)this->q02C; /*0x4054a4*/
  if ( this != (int *)v2[48] ) /*0x4054b0*/
    return 0; /*0x4054b3*/
  AudioFile::GetCallback(v2); /*0x4054b7*/
  _DWORD * v4 = (_DWORD *)*(this + 82); /*0x4054bc*/
  int v5 = this->q006; /*0x4054c2*/
  LOBYTE(v5) = v5 | 8; /*0x4054c5*/
  this->q006 = v5; /*0x4054c7*/
  BindChannelAudioStream((_DWORD *)this->q02C, v4); /*0x4054d2*/
  EndBufferMixer((int *)(this->q02C + 56), *(this + 83)); /*0x4054e6*/
  int v6 = *(this + 84); /*0x4054eb*/
  int v7 = 0x4000; /*0x4054f1*/
  if ( v6 > 0 ) /*0x4054f8*/
    v7 = 0x4000 - (v6 << 14) / 0x64u; /*0x40550e*/
  EndBufferMixer((int *)(this->q02C + 16), v7); /*0x405519*/
  this->q007 = 3; /*0x40551e*/
  this->q006 |= 2u; /*0x40552b*/
  *(this + 82) = 0; /*0x40552e*/
  if ( Audio::GetChannelStatus(this->q02C) ) /*0x40553e*/
  {
    this->q007 = 1; /*0x405547*/
    *(this + 82) = (int)v4; /*0x40554e*/
    int v8 = this->q006; /*0x405554*/
    LOBYTE(v8) = v8 & 0xFD; /*0x405557*/
    this->q006 = v8; /*0x405559*/
    AudioStream::Stop((_DWORD *)this->q02C); /*0x405562*/
    return 0; /*0x405567*/
  }
  else
  {
    AudioStream::Stop((_DWORD *)this->q02C); /*0x405572*/
    return 1; /*0x405577*/
  }
}
}
} // namespace gamemd

// 0x4063B0
namespace gamemd {
void * Audio::ProcessMixerOutput()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int *Next; // esi
  ObjectClass *v4; // esi
  if ( !*(_DWORD *)&stru_87C374[7980] ) /*0x4063bb*/
    return 0; /*0x4063be*/
  Next = (int *)AudioQueue::GetNext((int *)&stru_87C374[7900]); /*0x4063cc*/
  if ( Next ) /*0x4063d0*/
  {
    while ( _strcmpi(this, Next + 27) ) /*0x4063e1*/
    {
      Next = (int *)AudioQueue::GetNextAlt(Next); /*0x4063ee*/
      if ( !Next ) /*0x4063f2*/
        goto LABEL_6; /*0x4063f2*/
    }
    if ( Next ) /*0x406487*/
      return (ObjectClass *)Next; /*0x40648d*/
  }
LABEL_6:
  v4 = (ObjectClass *)__2_YAPAXI_Z(0x148u); /*0x4063f4*/
  memset(v4, 0, 0x148u); /*0x40640a*/
  memset(v4, 0, 0x148u); /*0x406413*/
  DListNode::InitEmpty(v4); /*0x40641a*/
  *(_DWORD *)&v4->__pad_0[12] = 1; /*0x406427*/
  v4->uniqueId = 0; /*0x40642e*/
  v4->abstractFlags = 32; /*0x406435*/
  v4->ambientSoundController[3] = 3; /*0x40643c*/
  v4->ambientSoundController[1] = 2; /*0x406443*/
  v4->customSound_controller[0] = 10; /*0x40644a*/
  v4->customSound_controller[1] = 1045220557; /*0x406451*/
  SetupSampleAudioMixer(&v4->nextArrayIndex, (ObjectClass *)0x4000); /*0x406458*/
  strncpy((char *)&v4->health, this, (IUnknown *)0x1F); /*0x406464*/
  HIBYTE(v4->parachute) = 0; /*0x406473*/
  InsertAfterDListNode((int)&stru_87C374[7900], v4); /*0x40647a*/
  return v4; /*0x4063bd*/
}
}
} // namespace gamemd

// 0x406870
namespace gamemd {
int Audio::ApplyFormatFlags(int * a1, char * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  const void **v4; // esi

  v4 = (const void **)dword_816048; /*0x40687e*/
  if ( dword_816048[0] ) /*0x406883*/
  {
  const void *v5; // eax
    do /*0x40689d*/
    {
      if ( !_strcmpi(a2, *v4) ) /*0x406889*/
        break; /*0x406893*/
      v5 = v4[2]; /*0x406895*/
      v4 += 2; /*0x406898*/
    }
    while ( v5 ); /*0x40689d*/
  }
  if ( a1 ) /*0x4068a1*/
  {
  int v7; // eax
    const void * v6 = v4[1]; /*0x4068a3*/
    if ( ((unsigned __int8)v6 & 0x60) != 0 ) /*0x4068a8*/
    {
      v7 = *a1; /*0x4068aa*/
      LOBYTE(v7) = *a1 & 0x9F; /*0x4068ac*/
    }
    else
    {
      if ( (BYTE1(v6) & 0xC) == 0 ) /*0x4068b3*/
      {
LABEL_10:
        *a1 |= (unsigned int)v4[1]; /*0x4068bc*/
        return *v4 != 0; /*0x4068c3*/
      }
      v7 = *a1; /*0x4068b5*/
      BYTE1(v7) = BYTE1(*a1) & 0xF3; /*0x4068b7*/
    }
    *a1 = v7; /*0x4068ba*/
    goto LABEL_10; /*0x4068ba*/
  }
  return *v4 != 0; /*0x4068cb*/
}
}
} // namespace gamemd

// 0x4070B0
namespace gamemd {
int Audio::WaitForCallback()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v2 = Audio::Callback(); /*0x4070bd*/
  unsigned __int64 v3; // rax
  LODWORD(v3) = this->q010; /*0x4070c9*/
  unsigned __int64 v4 = this->q010 + __PAIR64__(HIDWORD(v3), v2); /*0x4070cc*/
  if ( (_DWORD)v3 != this->q002 ) /*0x4070d0*/
  {
    do /*0x4070ee*/
    {
      LODWORD(v3) = Audio::Callback(); /*0x4070d2*/
      if ( v3 >= v4 ) /*0x4070df*/
        break; /*0x4070df*/
      Event::Dispatch(); /*0x4070e1*/
      LODWORD(v3) = this->q002; /*0x4070e9*/
    }
    while ( this->q010 != (_DWORD)v3 ); /*0x4070ee*/
  }
  return v3; /*0x4070f0*/
}
}
} // namespace gamemd

// 0x407F40
namespace gamemd {
void Audio::Release()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  if ( !this->q022 ) /*0x407f43*/
  {
    if ( this->q014 ) /*0x407f4d*/
    {
      EnterCriticalSection(&CriticalSection); /*0x407f59*/
      Voice::Stop(this->q014); /*0x407f62*/
      LeaveCriticalSection(&CriticalSection); /*0x407f6c*/
    }
  }
}
}
} // namespace gamemd

// 0x408070
namespace gamemd {
int Audio::IsSoundPlaying()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  return this->q00C & 1; /*0x408076*/
}
}
} // namespace gamemd

// 0x408540
namespace gamemd {
int Audio::CalcRate(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  return a2 * this->q014 / 1000; /*0x40855b*/
}
}
} // namespace gamemd

// 0x409320
namespace gamemd {
int Audio::GetSampleSize()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  return this->q034 - this->q038; /*0x409328*/
}
}
} // namespace gamemd

// 0x53E1D0
namespace gamemd {
void sub_53E1D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  signed int SampleSize; // eax

  if ( unk_AA0448 ) /*0x53e1dc*/
  {
    EnterCriticalSection(&unk_AA0418); /*0x53e1ed*/
    if ( unk_AA0468 && unk_AA045C && unk_AA0444 == 1 && unk_AA0464 ) /*0x53e210*/
    {
      SampleSize = Audio::GetSampleSize((_DWORD *)unk_AA0464); /*0x53e213*/
      WriteAudioStreamToFile(unk_AA0464, unk_AA0468, SampleSize, 0); /*0x53e225*/
      fflush(unk_AA0468); /*0x53e230*/
    }
    LeaveCriticalSection(&unk_AA0418); /*0x53e243*/
    if ( unk_AA0448 ) /*0x53e24b*/
    {
      EnterCriticalSection(&unk_AA0418); /*0x53e256*/
      if ( unk_AA0448 ) /*0x53e25e*/
      {
        EnterCriticalSection(&unk_AA0418); /*0x53e265*/
        if ( unk_AA0468 && unk_AA045C && unk_AA0444 == 1 && unk_AA0464 ) /*0x53e288*/
        {
          signed int v1 = Audio::GetSampleSize((_DWORD *)unk_AA0464); /*0x53e28b*/
          WriteAudioStreamToFile(unk_AA0464, unk_AA0468, v1, 0); /*0x53e29d*/
          fflush(unk_AA0468); /*0x53e2a9*/
        }
        LeaveCriticalSection(&unk_AA0418); /*0x53e2b6*/
      }
      unk_AA0444 = 0; /*0x53e2bd*/
      if ( unk_AA0468 ) /*0x53e2c5*/
      {
        fclose(unk_AA0468); /*0x53e2c8*/
        unk_AA0468 = 0; /*0x53e2d0*/
      }
      LeaveCriticalSection(&unk_AA0418); /*0x53e2db*/
    }
  }
  if ( unk_AA044C ) /*0x53e2e4*/
  {
    __3_YAXPAX_Z(unk_AA044C); /*0x53e2e7*/
    unk_AA044C = 0; /*0x53e2ef*/
  }
  unk_AA0450 = 0; /*0x53e2fa*/
  if ( unk_AA0458 ) /*0x53e302*/
  {
    unk_AA0378 = 1; /*0x53e304*/
    while ( !unk_AA0380 ) /*0x53e315*/
      Sleep(0); /*0x53e31e*/
    WaitForSingleObject(unk_AA03F8, 0x1388u); /*0x53e335*/
    CloseHandle(unk_AA03F8); /*0x53e341*/
    unk_AA0458 = 0; /*0x53e347*/
  }
  if ( unk_AA0460 ) /*0x53e355*/
  {
    Count::DecrementRefCountsAudio((_DWORD *)unk_AA0460); /*0x53e357*/
    unk_AA0460 = 0; /*0x53e35c*/
  }
  if ( unk_AA0464 ) /*0x53e36a*/
  {
    Count::DecrementRefCountsAudio((_DWORD *)unk_AA0464); /*0x53e36c*/
    unk_AA0464 = 0; /*0x53e371*/
  }
  if ( unk_AA045C ) /*0x53e37f*/
  {
    AudioSample::InitLinkedList((_DWORD *)unk_AA045C); /*0x53e381*/
    unk_AA045C = 0; /*0x53e386*/
  }
  if ( unk_AA0454 ) /*0x53e392*/
  {
    DeleteCriticalSection(&unk_AA0418); /*0x53e39f*/
    DeleteCriticalSection(&unk_AA0400); /*0x53e3a6*/
    unk_AA0454 = 0; /*0x53e3a8*/
  }
  unk_AA0448 = 0; /*0x53e3ae*/
}
}
} // namespace gamemd

// 0x5D0470
namespace gamemd {
ObjectClass * Audio::ParseVolume(const char ** a1, ObjectClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  ObjectClass *v8; // [esp+8h] [ebp-4h] BYREF
  String::Assign((char **)this, 0); /*0x5d0478*/
  this->q010 = 0; /*0x5d0483*/
  this->q002 = 0; /*0x5d0487*/
  this->Audio_field_0xC = 255; /*0x5d048e*/
  if ( String::NotEquals(a1, 0) && Audio::IsSoundEnabled() ) /*0x5d04a2*/
  {
    unknown_libname_73(&v8); /*0x5d04b5*/
    int v4 = String::Tokenize((const char **)aP2, 0, &Delimiter, (ObjectClass *)&v8); /*0x5d04d5*/
  int v7; // [esp+4h] [ebp-8h] BYREF
    unknown_libname_73(&v7); /*0x5d04d7*/
    String::Tokenize((const char **)aP2, v4, &Delimiter, (ObjectClass *)&v7); /*0x5d04e9*/
    if ( String::NotEquals((const char **)&v7, 0) ) /*0x5d04f4*/
    {
      __1_Timevec_std__QAE_XZ((std::_Timevec *)&v7); /*0x5d0503*/
  int v5; // eax
      this->Audio_field_0xC = v5; /*0x5d050b*/
      if ( v5 <= 100 ) /*0x5d050e*/
      {
        if ( v5 < 0 ) /*0x5d051b*/
          this->Audio_field_0xC = 0; /*0x5d051d*/
      }
      else
      {
        this->Audio_field_0xC = 100; /*0x5d0510*/
      }
      this->Audio_field_0xC = 255 * this->Audio_field_0xC / 100; /*0x5d053f*/
    }
    if ( this->q00C > 0 && String::NotEquals((const char **)&v8, 0) ) /*0x5d054f*/
      String::Reassign((char **)this, (AbstractClass *)a1); /*0x5d055f*/
    DeleteAndZero((void **)&v7); /*0x5d0568*/
    DeleteAndZero((void **)&v8); /*0x5d0571*/
  }
  return this; /*0x5d0578*/
}
}
} // namespace gamemd

// 0x5D5820
namespace gamemd {
char ** Audio::SetSoundFileName(char * Source, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  *this = 0; /*0x5d5825*/
  this->q010 = 0; /*0x5d5827*/
  this->q002 = 0; /*0x5d582a*/
  if ( Audio::IsSoundEnabled() ) /*0x5d582d*/
    *this = _strdup(Source); /*0x5d5843*/
  return this; /*0x5d5847*/
}
}
} // namespace gamemd

// 0x63F2E0
namespace gamemd {
void sub_63F2E0(int a1, int a2, int a3, int a4, int a5, int a6, unsigned int ** a7)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  _DWORD * v7 = *a7; /*0x63f2ec*/
  int v8 = a3 - a1; /*0x63f2f2*/
  _DWORD * v17 = *a7; /*0x63f2f6*/
  signed int v9 = a4 - a2; /*0x63f300*/
  result = a3 - a1 <= 0 ? -1 : 1;
  int v18 = result; /*0x63f308*/
  if ( a4 - a2 <= 0 ) /*0x63f30c*/
    return result; /*0x63f30c*/
  result = v8; /*0x63f315*/
  signed int v11 = abs32(v8); /*0x63f31a*/
  if ( !v11 ) /*0x63f31c*/
  {
    int v12 = v9 - a6; /*0x63f322*/
    int v13 = v9 - a6 - 1; /*0x63f324*/
    if ( v12 > 0 ) /*0x63f327*/
    {
      result = v13 + 1; /*0x63f331*/
      do /*0x63f344*/
      {
        if ( a5 == 1 ) /*0x63f337*/
          *v7 = a1; /*0x63f339*/
        else
          v7[1] = a1; /*0x63f33d*/
        v7 += 2; /*0x63f340*/
        --result; /*0x63f343*/
      }
      while ( result ); /*0x63f344*/
      *a7 = v7; /*0x63f34d*/
      return result; /*0x63f351*/
    }
    goto LABEL_50; /*0x63f327*/
  }
  if ( v9 == v11 ) /*0x63f356*/
  {
    if ( a6 ) /*0x63f362*/
      a1 += v18; /*0x63f364*/
    result = v9 - a6; /*0x63f368*/
    if ( v9 - a6 <= 0 ) /*0x63f36d*/
      goto LABEL_50; /*0x63f36d*/
    do /*0x63f38c*/
    {
      if ( a5 == 1 ) /*0x63f37d*/
        *v7 = a1; /*0x63f37f*/
      else
        v7[1] = a1; /*0x63f383*/
      a1 += v18; /*0x63f386*/
      v7 += 2; /*0x63f388*/
      --result; /*0x63f38b*/
    }
    while ( result ); /*0x63f38c*/
    *a7 = v7; /*0x63f395*/
  }
  else
  {
    if ( v9 <= v11 ) /*0x63f39c*/
    {
      int v15 = v18 * (v11 / v9); /*0x63f40c*/
      int v16 = v11 % v9; /*0x63f412*/
      if ( v8 < 0 ) /*0x63f416*/
        result = 1 - v9; /*0x63f421*/
      else
        result = 0; /*0x63f418*/
      if ( a6 ) /*0x63f429*/
      {
        result += v16; /*0x63f42b*/
        a1 += v15; /*0x63f42d*/
        if ( result > 0 ) /*0x63f431*/
        {
          a1 += v18; /*0x63f437*/
          result -= v9; /*0x63f439*/
        }
      }
      if ( v9 - a6 > 0 ) /*0x63f444*/
      {
        int v19 = v9 - a6; /*0x63f44b*/
        do /*0x63f483*/
        {
          if ( a5 == 1 ) /*0x63f45a*/
            *v17 = a1; /*0x63f45c*/
          else
            v17[1] = a1; /*0x63f460*/
          result += v16; /*0x63f463*/
          a1 += v15; /*0x63f465*/
          if ( result > 0 ) /*0x63f469*/
          {
            a1 += v18; /*0x63f46b*/
            result -= v9; /*0x63f46d*/
          }
          v17 += 2; /*0x63f476*/
          --v19; /*0x63f47f*/
        }
        while ( v19 ); /*0x63f483*/
      }
      v7 = v17; /*0x63f485*/
      goto LABEL_50; /*0x63f485*/
    }
    if ( v8 < 0 ) /*0x63f3a0*/
      result = 1 - v9; /*0x63f3ab*/
    else
      result = 0; /*0x63f3a2*/
    if ( a6 ) /*0x63f3b3*/
    {
      result += v11; /*0x63f3b5*/
      if ( result > 0 ) /*0x63f3b9*/
      {
        a1 += v18; /*0x63f3bf*/
        result -= v9; /*0x63f3c1*/
      }
    }
    if ( v9 - a6 <= 0 ) /*0x63f3cc*/
    {
LABEL_50:
      *a7 = v7; /*0x63f489*/
      return result; /*0x63f48e*/
    }
    int v14 = v9 - a6; /*0x63f3d6*/
    do /*0x63f3f3*/
    {
      if ( a5 == 1 ) /*0x63f3da*/
        *v7 = a1; /*0x63f3dc*/
      else
        v7[1] = a1; /*0x63f3e0*/
      result += v11; /*0x63f3e3*/
      if ( result > 0 ) /*0x63f3e7*/
      {
        a1 += v18; /*0x63f3e9*/
        result -= v9; /*0x63f3ed*/
      }
      v7 += 2; /*0x63f3ef*/
      --v14; /*0x63f3f2*/
    }
    while ( v14 ); /*0x63f3f3*/
    *a7 = v7; /*0x63f3fc*/
  }
  return result; /*0x63f34b*/
}
}
} // namespace gamemd

// 0x7207F0
namespace gamemd {
int Audio::LoadWAVFiles()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int IsSoundEnabled; // eax
  int i; // ebx
  size_t v8[2]; // [esp+8h] [ebp-294h] BYREF
  char Buffer[512]; // [esp+9Ch] [ebp-200h] BYREF

  LOBYTE(IsSoundEnabled) = g_ThemeMIXLoaded; /*0x7207f0*/
  if ( g_ThemeMIXLoaded ) /*0x720801*/
  {
    IsSoundEnabled = Audio::IsSoundEnabled(); /*0x720807*/
    if ( IsSoundEnabled ) /*0x72080e*/
    {
      LOBYTE(IsSoundEnabled) = DataGlobal_A8ED64; /*0x720814*/
      if ( !DataGlobal_A8ED64 ) /*0x72081b*/
      {
        IsSoundEnabled = this->q009; /*0x720821*/
        for ( i = 0; i < IsSoundEnabled; ++i ) /*0x720828*/
        {
          _makepath(Buffer, 0, 0, (const char *)(*(_DWORD *)(this->q018 + 4 * i) + 256), g_Str_File__WAV); /*0x720855*/
  int v10[22]; // [esp+30h] [ebp-26Ch] BYREF
          CCFileClass::Construct(v10, Buffer); /*0x720869*/
          int v4 = 4 * i + this->q018; /*0x720877*/
          *(_BYTE *)(*(_DWORD *)v4 + 650) = CCFileClass::Open(v10, 0); /*0x720881*/
          if ( *(_BYTE *)(*(_DWORD *)(this->q018 + 4 * i) + 650) ) /*0x72088d*/
          {
  _DWORD v9[8]; // [esp+10h] [ebp-28Ch] BYREF
            Struct::ZeroInit32(v9); /*0x72089b*/
            FileClass::Load(v10, 1); /*0x7208a6*/
            if ( ParseWaveFileHeader((int)v10, v9, v8) ) /*0x7208b8*/
            {
              _DWORD * v5 = (_DWORD *)(4 * i + this->q018); /*0x7208cc*/
              unsigned __int64 v6 = sub_408560(v9, v8[0]) / 0x3E8uLL; /*0x7208dc*/
              HIDWORD(v6) = *v5; /*0x7208e1*/
              v8[1] = v6; /*0x7208e4*/
              *(float *)(HIDWORD(v6) + 644) = (float)(int)v6; /*0x7208ec*/
            }
          }
          v10[0] = (int)&vt_CCFileClass; /*0x7208f9*/
          int v12 = 0; /*0x720901*/
  _BYTE v11[12]; // [esp+88h] [ebp-214h] BYREF
          Vector::Clear((int)v11); /*0x72090c*/
          v10[0] = (int)&off_7E1668; /*0x720915*/
          BufferIOFileClass::Dtor(v10); /*0x72091d*/
          IsSoundEnabled = this->q009; /*0x720922*/
        }
      }
    }
  }
  return IsSoundEnabled; /*0x720930*/
}
}
} // namespace gamemd

// 0x7510D0
namespace gamemd {
int Audio::InitFromINI()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  CCINIClass *KeyCount; // eax
  CCINIClass *v7; // esi
  CCINIClass *v6; // ebp
  unsigned __int8 *StringByIndex; // eax
  char **v11; // eax
  char **v12; // esi
  CCINIClass *i; // [esp+14h] [ebp-824h]
  INIClass Destination[32]; // [esp+18h] [ebp-820h] BYREF

  DListNode::Init(&g_OverlayTypeConfig[88872]); /*0x7510e0*/
  *(_DWORD *)&g_OverlayTypeConfig[89004] = AllocLinkedListMemory(200, 60); /*0x7510f6*/
  *(_DWORD *)&g_OverlayTypeConfig[89008] = 0; /*0x751100*/
  *(_DWORD *)&g_OverlayTypeConfig[89012] = 0; /*0x75110a*/
  if ( INIClass::BinarySearchSection((int)this, (INIClass *)&stru_830620[89964]) ) /*0x751114*/
  {
    *(float *)&stru_830620[89748] = INIClass::ReadDouble_Overwrite( /*0x751143*/
                                                 (int)this,
                                                 (INIClass *)&stru_830620[89964],
                                                 (unsigned __int8 *)&stru_830620[89928],
                                                 (INIClass *)COERCE_UNSIGNED_INT64(*(float *)&stru_830620[89748]));
    *(float *)&stru_830620[89752] = INIClass::ReadDouble_Overwrite( /*0x751166*/
                                                 (int)this,
                                                 (INIClass *)&stru_830620[89964],
                                                 (unsigned __int8 *)&stru_830620[89908],
                                                 (INIClass *)COERCE_UNSIGNED_INT64(*(float *)&stru_830620[89752]));
    INIClass::GetString( /*0x751187*/
      this,
      (INIClass *)&stru_830620[89964],
      (unsigned __int8 *)&stru_830620[76284],
      &g_INI_Key_NORMAL,
      (INIClass *)Destination[0].__pad_20,
      2048);
    sub_4067D0(Destination[0].__pad_20, &stru_830620[89744]); /*0x751195*/
    INIClass::GetString( /*0x7511b5*/
      this,
      (INIClass *)&stru_830620[89964],
      (unsigned __int8 *)&stru_830620[89892],
      (INIClass *)&DataGlobal_87F8E4[42624],
      (INIClass *)Destination[0].__pad_20,
      2048);
    char * v2 = strtok(Destination[0].__pad_20, &stru_830620[89936]); /*0x7511c4*/
    if ( v2 ) /*0x7511ce*/
    {
      *(_DWORD *)&g_OverlayTypeConfig[89016] = 0; /*0x7511d0*/
      do /*0x7511f7*/
      {
        sub_406820(&g_OverlayTypeConfig[89016], v2); /*0x7511e1*/
        v2 = strtok(0, &stru_830620[89936]); /*0x7511ed*/
      }
      while ( v2 ); /*0x7511f7*/
    }
    INIClass::GetString( /*0x751214*/
      this,
      (INIClass *)&stru_830620[89964],
      (unsigned __int8 *)g_INI_Key_Type,
      (INIClass *)&DataGlobal_87F8E4[42624],
      (INIClass *)Destination[0].__pad_20,
      2048);
    char * v3 = strtok(Destination[0].__pad_20, &stru_830620[89936]); /*0x751223*/
    if ( v3 ) /*0x75122d*/
    {
      *(_DWORD *)&stru_830620[89756] = 32; /*0x75122f*/
      do /*0x751256*/
      {
        Audio::ApplyFormatFlags((int *)&stru_830620[89756], v3); /*0x751240*/
        v3 = strtok(0, &stru_830620[89936]); /*0x75124c*/
      }
      while ( v3 ); /*0x751256*/
    }
    *(_DWORD *)&stru_830620[89764] = INIClass::ReadInt_Overwrite( /*0x751270*/
                                                  (int)this,
                                                  (unsigned __int8 *)&stru_830620[89964],
                                                  (CCINIClass *)&stru_830620[89884],
                                                  *(INIClass **)&stru_830620[89764]);
    *(_DWORD *)&stru_830620[89760] = INIClass::ReadInt_Overwrite( /*0x75128c*/
                                                  (int)this,
                                                  (unsigned __int8 *)&stru_830620[89964],
                                                  (CCINIClass *)&stru_830620[73840],
                                                  *(INIClass **)&stru_830620[89760]);
  }
  LOBYTE(KeyCount) = INIClass::BinarySearchSection((int)this, (INIClass *)&stru_830620[89952]) != 0; /*0x75129f*/
  if ( (_BYTE)KeyCount )
  {
    KeyCount = (CCINIClass *)INIClass::GetKeyCount((char *)this, (INIClass *)&stru_830620[89952]); /*0x7512b1*/
    v7 = KeyCount; /*0x7512b6*/
    v6 = 0; /*0x7512b8*/
    for ( i = KeyCount; (int)v6 < (int)v7; v6 = (CCINIClass *)((char *)v6 + 1) )
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex( /*0x7512da*/
                                           (char *)this,
                                           (CCINIClass *)&stru_830620[89952],
                                           v6);
      KeyCount = (CCINIClass *)INIClass::GetString( /*0x7512e7*/
                                 this,
                                 (INIClass *)&stru_830620[89952],
                                 StringByIndex,
                                 (INIClass *)&DataGlobal_87F8E4[42624],
                                 Destination,
                                 32);
      if ( KeyCount )
      {
  int v15; // [esp+8h] [ebp-830h] BYREF
        if ( &v15 == (int *)-16 ) /*0x7512fa*/
          goto LABEL_21; /*0x7512fa*/
        int v8 = 0; /*0x751301*/
        if ( *(int *)&g_OverlayTypeConfig[88976] <= 0 ) /*0x751305*/
          goto LABEL_21; /*0x751305*/
        while ( 1 )
        {
          char * v9 = **(char ***)(*(_DWORD *)&g_OverlayTypeConfig[88964] + 4 * v8); /*0x75130f*/
          char * v10 = v9 ? VocClass::GetSampleName(v9) : &stru_830620[89940];
          if ( !_strcmpi(Destination[0].__pad_0, v10) ) /*0x751327*/
            break; /*0x751327*/
          if ( ++v8 >= *(int *)&g_OverlayTypeConfig[88976] ) /*0x75133b*/
            goto LABEL_21; /*0x75133b*/
        }
        if ( v8 == -1 ) /*0x751342*/
        {
LABEL_21:
          v11 = (char **)__2_YAPAXI_Z(4u); /*0x751344*/
          v12 = v11; /*0x75134b*/
          if ( v11 ) /*0x751352*/
          {
            *v11 = 0; /*0x751354*/
            if ( *(int *)&g_OverlayTypeConfig[88976] < *(int *)&g_OverlayTypeConfig[88968] /*0x75138f*/
              || (g_OverlayTypeConfig[88973] || !*(_DWORD *)&g_OverlayTypeConfig[88968])
              && *(int *)&g_OverlayTypeConfig[88980] > 0
              && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&g_OverlayTypeConfig[88960]
                                                                        + 8))(
                   &g_OverlayTypeConfig[88960],
                   *(_DWORD *)&g_OverlayTypeConfig[88968] + *(_DWORD *)&g_OverlayTypeConfig[88980],
                   0) )
            {
              int v13 = (*(_DWORD *)&g_OverlayTypeConfig[88976])++; /*0x75139c*/
              *(_DWORD *)(*(_DWORD *)&g_OverlayTypeConfig[88964] + 4 * v13) = v12; /*0x7513ab*/
            }
            *v12 = (char *)Audio::ProcessMixerOutput(Destination[0].__pad_0); /*0x7513b7*/
          }
          else
          {
            v12 = 0; /*0x7513bb*/
          }
        }
        else
        {
          v12 = *(char ***)(*(_DWORD *)&g_OverlayTypeConfig[88964] + 4 * v8); /*0x7513c5*/
        }
        LOBYTE(KeyCount) = LoadVocFromINI(v12, (CCINIClass *)this); /*0x7513cb*/
        v7 = i; /*0x7513d0*/
      }
    }
  }
  return (char)KeyCount; /*0x7513dd*/
}
}
} // namespace gamemd

// 0x7513F0
namespace gamemd {
void * Audio::LoadSoundINI()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  void *result; // eax

  while ( g_VocPlayState > 0 ) /*0x7513f9*/
  {
    void * v0 = *(void **)g_VocAudioConfig; /*0x751400*/
    if ( *(_DWORD *)g_VocAudioConfig ) /*0x751400*/
    {
      int v5 = *(_DWORD *)g_VocAudioConfig; /*0x751416*/
      int v1 = (*(int (__thiscall **)(int *, int *))(DataGlobal_B1D378 + 16))(&DataGlobal_B1D378, &v5); /*0x75141a*/
      if ( v1 != -1 && v1 < g_VocPlayState && v1 < --g_VocPlayState ) /*0x751435*/
      {
        do /*0x75144d*/
        {
          ++v1; /*0x75143d*/
          *((_DWORD *)g_VocAudioConfig + v1 - 1) = *((_DWORD *)g_VocAudioConfig + v1); /*0x751441*/
        }
        while ( v1 < g_VocPlayState ); /*0x75144d*/
      }
      __3_YAXPAX_Z(v0); /*0x751450*/
    }
  }
  result = DataGlobal_B1D3A4; /*0x751461*/
  if ( DataGlobal_B1D3A4 ) /*0x751468*/
  {
    int v3 = AudioQueue::GetNext(&DataGlobal_B1D320); /*0x751474*/
    if ( v3 ) /*0x751478*/
    {
  int v4; // edi
      do /*0x7514b1*/
      {
        v4 = AudioQueue::GetNextAlt(v3); /*0x751485*/
        AudioController::Stop((_DWORD *)(v3 + 12)); /*0x751487*/
        LinkedList::Init(v3); /*0x75148e*/
        PushFrontLinkedListAlt(DataGlobal_B1D3A4, v3); /*0x75149b*/
        v3 = v4; /*0x7514a6*/
        --DataGlobal_B1D3A8; /*0x7514ab*/
      }
      while ( v4 ); /*0x7514b1*/
    }
    result = (void *)VtableStub::Push_407510(DataGlobal_B1D3A4); /*0x7514ba*/
    DataGlobal_B1D3A4 = 0; /*0x7514bf*/
  }
  return result; /*0x7514c9*/
}
}
} // namespace gamemd

// 0x752590
namespace gamemd {
void sub_752590(int a1, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  _DWORD * v5 = __2_YAPAXI_Z(0x20u); /*0x75259f*/
  DListNode::InitEmpty(v5); /*0x7525a6*/
  v5[3] = a1; /*0x7525af*/
  v5[5] = a3; /*0x7525b2*/
  v5[6] = a2; /*0x7525b5*/
  v5[7] = DataGlobal_B1D4C0 % 100; /*0x7525c5*/
  ++DataGlobal_B1D4C0; /*0x7525d2*/
  *(_DWORD *)(a1 + 80) = 1; /*0x7525d8*/
  if ( a2 == 3 ) /*0x7525df*/
  {
    InsertAfterDListNode((int)&DataGlobal_B1D3C8, v5); /*0x7525e8*/
  }
  else if ( a2 == 1 ) /*0x7525f7*/
  {
    InsertAfterDListNode(12 * a3 + 11654224, v5); /*0x752605*/
  }
  else if ( a3 == 3 ) /*0x752614*/
  {
    InsertAfterDListNode((int)&DataGlobal_B1D3F0, v5); /*0x75261d*/
  }
  else if ( (int *)DataGlobal_B1D3CC == &DataGlobal_B1D3C8 /*0x75264d*/
         && (int *)DataGlobal_B1D3F4 == &DataGlobal_B1D3F0
         && (!DataGlobal_B1D4B8 || *((_DWORD *)DataGlobal_B1D4B8 + 5) < a3) )
  {
    DataGlobal_B1D4B8 = v5; /*0x75264f*/
  }
  else
  {
    *(_DWORD *)(a1 + 80) = 2; /*0x75265d*/
    __3_YAXPAX_Z(v5); /*0x752664*/
  }
}
}
} // namespace gamemd

// 0x7BD130
namespace gamemd {
unsigned int Audio::GetSamplePosition(MouseClass * aP1, MouseClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  unsigned int result; // eax

  int v4; // edi
  v4 = (*(int (__thiscall **)(_DWORD, MouseClass *, MouseClass *))(*this->q014 + 92))( /*0x7bd149*/
         this->Audio_field_0x14,
         aP1,
         aP2);
  (*(void (__thiscall **)(_DWORD))(*this->q014 + 96))(this->Audio_field_0x14); /*0x7bd14d*/
  result = v4 + this->q010; /*0x7bd156*/
  if ( result >= this->q007 ) /*0x7bd15a*/
    result -= *(_DWORD *)(this + 32); /*0x7bd15c*/
  return result; /*0x7bd15f*/
}
}
} // namespace gamemd

// 0x7C1E10
namespace gamemd {
int sub_7C1E10(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  unsigned __int16 *v5; // edx

  int v3 = a2; /*0x7c1e16*/
  _DWORD * v4 = *(_DWORD **)(a1 + 356); /*0x7c1e1f*/
  if ( !*(_BYTE *)(a1 + 245) && !*(_DWORD *)(a1 + 376) ) /*0x7c1e2d*/
  {
  int v8; // eax
    v5 = *(unsigned __int16 **)(a1 + 1876); /*0x7c1e37*/
    int v6 = *(unsigned __int16 *)(a1 + 1868); /*0x7c1e3f*/
    int v7 = 0; /*0x7c1e46*/
    if ( (_WORD)v6 ) /*0x7c1e4a*/
    {
      while ( *v5 <= *(int *)(a1 + 384) ) /*0x7c1e59*/
      {
        ++v7; /*0x7c1e5b*/
        v5 += 3; /*0x7c1e5c*/
        if ( v7 >= v6 ) /*0x7c1e61*/
          goto LABEL_6; /*0x7c1e61*/
      }
      v8 = *(_DWORD *)(*(_DWORD *)(a1 + 1876) + 6 * v7 + 2); /*0x7c1e70*/
    }
    else
    {
LABEL_6:
      v8 = 0; /*0x7c1e63*/
    }
    v3 = a2; /*0x7c1e74*/
    *(_DWORD *)(a1 + 380) = v8; /*0x7c1e78*/
  }
  if ( (*(int (__cdecl **)(int, int, int, unsigned int))(a1 + 64))( /*0x7c1e93*/
         a1,
         5,
         *(_DWORD *)(a1 + 376) + *v4,
         (v3 + 1) & 0xFFFFFFFE) )
  {
    return -4; /*0x7c1ea7*/
  }
  int v10 = v3 + *(_DWORD *)(a1 + 376); /*0x7c1eae*/
  int v11 = *(_DWORD *)(a1 + 372) + 1; /*0x7c1eb6*/
  *(_DWORD *)(a1 + 376) = v10; /*0x7c1eb7*/
  *(_DWORD *)(a1 + 372) = v11; /*0x7c1ebd*/
  if ( *(_BYTE *)(a1 + 245) ) /*0x7c1ec3*/
  {
    if ( v11 != *(unsigned __int8 *)(a1 + 245) ) /*0x7c1edb*/
      return -1; /*0x7c1f0f*/
LABEL_13:
    v4[5] = v10; /*0x7c1edd*/
    *(_DWORD *)(a1 + 372) = 0; /*0x7c1ee2*/
    *(_DWORD *)(a1 + 376) = 0; /*0x7c1ee8*/
    v4[4] = 0; /*0x7c1eee*/
    v4[3] = 8; /*0x7c1ef1*/
    *(_DWORD *)(a1 + 360) = v4; /*0x7c1ef8*/
    *(_DWORD *)(a1 + 356) = v4[1]; /*0x7c1f01*/
    return -1; /*0x7c1f01*/
  }
  int v12 = *(_DWORD *)(a1 + 380); /*0x7c1f10*/
  if ( v10 == v12 ) /*0x7c1f18*/
    goto LABEL_13; /*0x7c1f18*/
  if ( v10 <= v12 ) /*0x7c1f1a*/
    return -1; /*0x7c1f1a*/
  return -4; /*0x7c1e9d*/
}
}
} // namespace gamemd

// 0x7C1F30
namespace gamemd {
int sub_7C1F30(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  unsigned __int16 *v6; // edx

  _DWORD * v3 = *(_DWORD **)(a1 + 356); /*0x7c1f41*/
  int v4 = *(unsigned __int8 *)(a1 + 245); /*0x7c1f4a*/
  unsigned int v5 = (a2 + 1) & 0xFFFFFFFE; /*0x7c1f52*/
  if ( !*(_DWORD *)(a1 + 376) ) /*0x7c1f4c*/
  {
    if ( *(_BYTE *)(a1 + 245) ) /*0x7c1f3b*/
    {
      *(_DWORD *)(a1 + 380) = ((v4 + 1) & 0xFFFFFFFE) + v5 * v4; /*0x7c1f7a*/
    }
    else
    {
  int v9; // eax
      v6 = *(unsigned __int16 **)(a1 + 1876); /*0x7c1f82*/
      int v7 = *(unsigned __int16 *)(a1 + 1868); /*0x7c1f8a*/
      int v8 = 0; /*0x7c1f91*/
      if ( (_WORD)v7 ) /*0x7c1f95*/
      {
        while ( *v6 <= *(int *)(a1 + 384) ) /*0x7c1fa4*/
        {
          ++v8; /*0x7c1fa6*/
          v6 += 3; /*0x7c1fa7*/
          if ( v8 >= v7 ) /*0x7c1fac*/
            goto LABEL_7; /*0x7c1fac*/
        }
        v9 = *(_DWORD *)(*(_DWORD *)(a1 + 1876) + 6 * v8 + 2); /*0x7c1fcb*/
      }
      else
      {
LABEL_7:
        v9 = 0; /*0x7c1fb6*/
      }
      *(_DWORD *)(a1 + 380) = v9; /*0x7c1fcf*/
    }
    if ( (*(_BYTE *)(a1 + 340) & 1) != 0 ) /*0x7c1fdc*/
      v3[4] = 0; /*0x7c1ff1*/
    else
      v3[4] = *(_DWORD *)(a1 + 1896) - *(_DWORD *)(a1 + 380); /*0x7c1fec*/
  }
  if ( (*(int (__cdecl **)(int, int, int, unsigned int))(a1 + 64))(a1, 5, *(_DWORD *)(a1 + 376) + *v3 + v3[4], v5) ) /*0x7c200c*/
    return -4; /*0x7c2022*/
  int v11 = *(_DWORD *)(a1 + 372); /*0x7c202d*/
  int v12 = a2 + *(_DWORD *)(a1 + 376); /*0x7c2033*/
  *(_DWORD *)(a1 + 376) = v12; /*0x7c2035*/
  int v13 = v11 + 1; /*0x7c203f*/
  *(_DWORD *)(a1 + 372) = v13; /*0x7c2042*/
  if ( v4 ) /*0x7c2048*/
  {
    if ( v13 == v4 ) /*0x7c204c*/
      goto LABEL_17; /*0x7c204c*/
    return -1; /*0x7c204c*/
  }
  int v14 = *(_DWORD *)(a1 + 380); /*0x7c2097*/
  if ( v12 == v14 ) /*0x7c209f*/
  {
LABEL_17:
    *(_DWORD *)(a1 + 372) = 0; /*0x7c204e*/
    *(_DWORD *)(a1 + 376) = 0; /*0x7c2054*/
    v3[3] = 10; /*0x7c205a*/
    *(_DWORD *)(a1 + 360) = v3; /*0x7c2061*/
    *(_DWORD *)(a1 + 356) = v3[1]; /*0x7c206a*/
    if ( *(_WORD *)(a1 + 232) < 3u ) /*0x7c2078*/
      *(_BYTE *)(v3[4] + *(_DWORD *)(a1 + 380) + *v3 + 1) = 0x80; /*0x7c2087*/
    return -1; /*0x7c2087*/
  }
  if ( v12 <= v14 ) /*0x7c20a1*/
    return -1; /*0x7c2096*/
  return -4; /*0x7c2016*/
}
}
} // namespace gamemd

// 0x7C2250
namespace gamemd {
int sub_7C2250(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  unsigned __int16 v12; // [esp+Ch] [ebp-4h] BYREF
  __int16 v13; // [esp+Eh] [ebp-2h]

  unsigned int v3 = (a2 + 1) & 0xFFFFFFFE; /*0x7c225f*/
  if ( (*(_BYTE *)(a1 + 132) & 1) != 0 && *(_DWORD *)(a1 + 1932) ) /*0x7c226a*/
  {
    if ( (*(int (__cdecl **)(int, int, unsigned __int16 *, int))(a1 + 64))(a1, 5, &v12, 4) ) /*0x7c2282*/
      return -4; /*0x7c2295*/
    unsigned int v5 = *(_DWORD *)(a1 + 1972); /*0x7c229a*/
    unsigned int v6 = v3 - 4; /*0x7c22a2*/
    if ( v12 <= v5 || *(_DWORD *)(a1 + 1936) ) /*0x7c22b3*/
    {
      if ( v12 == v13 ) /*0x7c237c*/
      {
        if ( (*(int (__cdecl **)(int, int, _DWORD, unsigned int))(a1 + 64))(a1, 5, *(_DWORD *)(a1 + 1960), v6) ) /*0x7c2389*/
          return -4; /*0x7c239c*/
      }
      else
      {
        _WORD * v10 = (_WORD *)(v5 + *(_DWORD *)(a1 + 1960) - v6); /*0x7c23a6*/
        if ( (*(int (__cdecl **)(int, int, _WORD *, unsigned int))(a1 + 64))(a1, 5, v10, v6) ) /*0x7c23ac*/
          return -4; /*0x7c23bf*/
        Audio_Helper_7C7F20(v12, v10, *(_BYTE **)(a1 + 1960), v12); /*0x7c23d3*/
      }
      *(_DWORD *)(a1 + 1968) = v12; /*0x7c23e9*/
      return -1; /*0x7c23e6*/
    }
    else
    {
      if ( v12 == v13 ) /*0x7c22c6*/
      {
        if ( (*(int (__cdecl **)(int, int, _DWORD, unsigned int))(a1 + 64))(a1, 5, *(_DWORD *)(a1 + 1932), v6) ) /*0x7c22d3*/
          return -4; /*0x7c22e6*/
      }
      else
      {
        _WORD * v7 = (_WORD *)(*(_DWORD *)(a1 + 1932) + *(_DWORD *)(a1 + 152) - v6); /*0x7c22f6*/
        if ( (*(int (__cdecl **)(int, int, _WORD *, unsigned int))(a1 + 64))(a1, 5, v7, v6) ) /*0x7c22fc*/
          return -4; /*0x7c230f*/
        Audio_Helper_7C7F20(*(_DWORD *)(a1 + 1932), v7, *(_BYTE **)(a1 + 1932), v12); /*0x7c2323*/
      }
      int v8 = 0; /*0x7c233a*/
      __int64 v9 = v12; /*0x7c233e*/
      *(_DWORD *)(a1 + 1936) += v12; /*0x7c233f*/
      if ( (int)(v9 / *(int *)(a1 + 156)) > 0 ) /*0x7c234d*/
      {
        do /*0x7c236d*/
        {
          ++v8; /*0x7c2355*/
          *(_BYTE *)(*(_DWORD *)(a1 + 1940) + v8 - 1) = 1; /*0x7c2356*/
        }
        while ( v8 < v12 / *(int *)(a1 + 156) ); /*0x7c236d*/
      }
      return -1; /*0x7c2371*/
    }
  }
  else
  {
    int v11 = -((*(int (__cdecl **)(int, int, int, unsigned int))(a1 + 64))(a1, 7, 1, (a2 + 1) & 0xFFFFFFFE) != 0); /*0x7c2401*/
    LOBYTE(v11) = v11 & 0xFB; /*0x7c2404*/
    return v11 - 1; /*0x7c2407*/
  }
}
}
} // namespace gamemd

// 0x7C7F20
namespace gamemd {
void Audio_Helper_7C7F20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  unsigned int i; // ecx
  unsigned __int8 v14; // ah

  unsigned int v4 = __readeflags(); /*0x7c7f2b*/
  int v34 = 0; /*0x7c7f2d*/
  if ( a2 && a3 && a4 ) /*0x7c7f4c*/
  {
    _WORD * v5 = a2; /*0x7c7f52*/
    _BYTE * v6 = a3; /*0x7c7f55*/
    int v7 = a4; /*0x7c7f58*/
    LOBYTE(a1) = 0x80; /*0x7c7f5b*/
    while ( v7 > 0 ) /*0x7c7f60*/
    {
      int v8 = *(unsigned __int8 *)v5; /*0x7c7f68*/
      ++v34; /*0x7c7f6a*/
      v5 = (_WORD *)((char *)v5 + 1); /*0x7c7f6d*/
      unsigned int v9 = 4 * v8; /*0x7c7f6e*/
      LOBYTE(v9) = (unsigned __int8)v9 >> 2; /*0x7c7f71*/
      if ( BYTE1(v9) == 2 ) /*0x7c7f77*/
      {
        if ( (v9 & 0x20) != 0 ) /*0x7c7f7b*/
        {
          LOBYTE(a1) = ((char)(8 * v9) >> 3) + a1; /*0x7c7f83*/
          *v6 = a1; /*0x7c7f85*/
          --v7; /*0x7c7f87*/
          ++v6; /*0x7c7f88*/
        }
        else
        {
          int v10 = v7; /*0x7c7f8b*/
          LOWORD(v9) = (unsigned __int8)(v9 + 1); /*0x7c7f8f*/
          for ( i = v9 >> 1; i; --i ) /*0x7c7f93*/
          {
            *(_WORD *)v6 = *v5++; /*0x7c7f95*/
            v6 += 2; /*0x7c7f95*/
          }
          unsigned int v12 = v9 & 1; /*0x7c7f98*/
          qmemcpy(v6, v5, v12); /*0x7c7f9a*/
          v5 = (_WORD *)((char *)v5 + v12); /*0x7c7f9a*/
          _BYTE * v13 = &v6[v12]; /*0x7c7f9a*/
          v34 += v9; /*0x7c7f9e*/
          v7 = v10 - v9; /*0x7c7fa1*/
          LOBYTE(a1) = *--v13; /*0x7c7fa4*/
          v6 = v13 + 1; /*0x7c7fa6*/
        }
      }
      else
      {
  char v18; // cf
        LOBYTE(v9) = v9 + 1; /*0x7c7fa9*/
        if ( BYTE1(v9) == 1 ) /*0x7c7fae*/
        {
          do /*0x7c8007*/
          {
            v14 = *(_BYTE *)v5; /*0x7c7fb0*/
            char v15 = *(_BYTE *)v5; /*0x7c7fb2*/
            ++v34; /*0x7c7fb4*/
            v5 = (_WORD *)((char *)v5 + 1); /*0x7c7fb7*/
            int v16 = v15 & 0xF; /*0x7c7fb8*/
            LOBYTE(a1) = byte_7C80F6[v16] + a1; /*0x7c7fbb*/
            unsigned int v17 = __readeflags(); /*0x7c7fc1*/
            if ( byte_7C80F6[v16] < 0 ) /*0x7c7fc9*/
            {
              __writeeflags(v17); /*0x7c7fd2*/
              if ( !v18 ) /*0x7c7fd3*/
                LOBYTE(a1) = 0; /*0x7c7fd5*/
            }
            else
            {
              __writeeflags(v17); /*0x7c7fcb*/
              if ( v18 ) /*0x7c7fcc*/
                LOBYTE(a1) = -1; /*0x7c7fce*/
            }
            LOBYTE(v16) = v14 >> 4; /*0x7c7fdb*/
            BYTE1(a1) = byte_7C80F6[v16] + a1; /*0x7c7fde*/
            unsigned int v19 = __readeflags(); /*0x7c7fe4*/
            if ( byte_7C80F6[v16] < 0 ) /*0x7c7fec*/
            {
              __writeeflags(v19); /*0x7c7ff5*/
              if ( !v18 ) /*0x7c7ff6*/
                BYTE1(a1) = 0; /*0x7c7ff8*/
            }
            else
            {
              __writeeflags(v19); /*0x7c7fee*/
              if ( v18 ) /*0x7c7fef*/
                BYTE1(a1) = -1; /*0x7c7ff1*/
            }
            *(_WORD *)v6 = a1; /*0x7c7ffa*/
            v7 -= 2; /*0x7c7ffd*/
            v6 += 2; /*0x7c8000*/
            LOBYTE(a1) = BYTE1(a1); /*0x7c8003*/
            LOBYTE(v9) = v9 - 1; /*0x7c8005*/
          }
          while ( (_BYTE)v9 ); /*0x7c8007*/
        }
        else if ( BYTE1(v9) ) /*0x7c8011*/
        {
          memset(v6, a1, (unsigned __int8)v9); /*0x7c80de*/
          v6 += (unsigned __int8)v9; /*0x7c80de*/
          v7 -= (unsigned __int8)v9; /*0x7c80e0*/
        }
        else
        {
          do /*0x7c80c9*/
          {
            char v20 = *(_BYTE *)v5; /*0x7c8017*/
            ++v34; /*0x7c8019*/
            v5 = (_WORD *)((char *)v5 + 1); /*0x7c801c*/
            unsigned int v21 = v20 & 3; /*0x7c801f*/
            LOBYTE(a1) = byte_7C80F2[v21] + a1; /*0x7c8022*/
            unsigned int v22 = __readeflags(); /*0x7c8028*/
            if ( byte_7C80F2[v21] < 0 ) /*0x7c8030*/
            {
              __writeeflags(v22); /*0x7c8039*/
              if ( !v18 ) /*0x7c803a*/
                LOBYTE(a1) = 0; /*0x7c803c*/
            }
            else
            {
              __writeeflags(v22); /*0x7c8032*/
              if ( v18 ) /*0x7c8033*/
                LOBYTE(a1) = -1; /*0x7c8035*/
            }
            BYTE1(a1) = a1; /*0x7c803e*/
            int v24 = __ROR4__(a1, 8); /*0x7c8040*/
            LOBYTE(v21) = v20; /*0x7c8043*/
            unsigned int v23 = v21 >> 2; /*0x7c8045*/
            LOBYTE(v23) = v23 & 3; /*0x7c8048*/
            LOBYTE(v24) = byte_7C80F2[v23] + v24; /*0x7c804b*/
            unsigned int v25 = __readeflags(); /*0x7c8051*/
            if ( byte_7C80F2[v23] < 0 ) /*0x7c8059*/
            {
              __writeeflags(v25); /*0x7c8062*/
              if ( !v18 ) /*0x7c8063*/
                LOBYTE(v24) = 0; /*0x7c8065*/
            }
            else
            {
              __writeeflags(v25); /*0x7c805b*/
              if ( v18 ) /*0x7c805c*/
                LOBYTE(v24) = -1; /*0x7c805e*/
            }
            BYTE1(v24) = v24; /*0x7c8067*/
            int v27 = __ROR4__(v24, 8); /*0x7c8069*/
            LOBYTE(v23) = v20; /*0x7c806c*/
            unsigned int v26 = v23 >> 4; /*0x7c806e*/
            LOBYTE(v26) = v26 & 3; /*0x7c8071*/
            LOBYTE(v27) = byte_7C80F2[v26] + v27; /*0x7c8074*/
            unsigned int v28 = __readeflags(); /*0x7c807a*/
            if ( byte_7C80F2[v26] < 0 ) /*0x7c8082*/
            {
              __writeeflags(v28); /*0x7c808b*/
              if ( !v18 ) /*0x7c808c*/
                LOBYTE(v27) = 0; /*0x7c808e*/
            }
            else
            {
              __writeeflags(v28); /*0x7c8084*/
              if ( v18 ) /*0x7c8085*/
                LOBYTE(v27) = -1; /*0x7c8087*/
            }
            BYTE1(v27) = v27; /*0x7c8090*/
            int v30 = __ROR4__(v27, 8); /*0x7c8092*/
            LOBYTE(v26) = v20; /*0x7c8095*/
            unsigned int v29 = v26 >> 6; /*0x7c8097*/
            LOBYTE(v29) = v29 & 3; /*0x7c809a*/
            LOBYTE(v30) = byte_7C80F2[v29] + v30; /*0x7c809d*/
            unsigned int v31 = __readeflags(); /*0x7c80a3*/
            if ( byte_7C80F2[v29] < 0 ) /*0x7c80ab*/
            {
              __writeeflags(v31); /*0x7c80b4*/
              if ( !v18 ) /*0x7c80b5*/
                LOBYTE(v30) = 0; /*0x7c80b7*/
            }
            else
            {
              __writeeflags(v31); /*0x7c80ad*/
              if ( v18 ) /*0x7c80ae*/
                LOBYTE(v30) = -1; /*0x7c80b0*/
            }
            int v32 = __ROR4__(v30, 8); /*0x7c80b9*/
            *(_DWORD *)v6 = v32; /*0x7c80bc*/
            v7 -= 4; /*0x7c80be*/
            v6 += 4; /*0x7c80c1*/
            a1 = __ROL4__(v32, 8); /*0x7c80c4*/
            LOBYTE(v9) = v9 - 1; /*0x7c80c7*/
          }
          while ( (_BYTE)v9 ); /*0x7c80c9*/
        }
      }
    }
  }
  __writeeflags(v4); /*0x7c80e7*/
  return v34; /*0x7c80ef*/
}
}
} // namespace gamemd

// 0x7BE830
namespace gamemd {
int sub_7BE830(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  bool v9; // zf
  int result; // eax
  int v11; // ebp

  int v3 = 0; /*0x7be838*/
  if ( *(_DWORD *)(a1 + 1828) ) /*0x7be83b*/
  {
    int v17 = 0; /*0x7be849*/
    int v21 = *(_DWORD *)(a1 + 1828); /*0x7be84d*/
    do /*0x7be8b7*/
    {
      int v4 = *(_DWORD *)(*(_DWORD *)(a1 + 1844) + v3); /*0x7be861*/
      int * v5 = (int *)(v17 + *(_DWORD *)(a1 + 1848)); /*0x7be864*/
      int v6 = v5[2]; /*0x7be867*/
      int v7 = *v5; /*0x7be86b*/
      if ( v7 ) /*0x7be86f*/
      {
        _DWORD * v8 = (_DWORD *)(v6 + 4); /*0x7be871*/
        int v19 = v7; /*0x7be874*/
        do /*0x7be89e*/
        {
          if ( v8[1] == a2 ) /*0x7be881*/
            (*(void (__cdecl **)(int, int, _DWORD, _DWORD))(a1 + 72))(a1, v4, *(v8 - 1), *v8); /*0x7be88c*/
          v8 += 3; /*0x7be896*/
          --v19; /*0x7be89a*/
        }
        while ( v19 ); /*0x7be89e*/
      }
      v3 += 16; /*0x7be8a8*/
      v9 = v21 == 1; /*0x7be8ae*/
      v17 += 12; /*0x7be8af*/
      --v21; /*0x7be8b3*/
    }
    while ( !v9 ); /*0x7be8b7*/
  }
  result = *(_DWORD *)(a1 + 1852); /*0x7be8b9*/
  v11 = 0; /*0x7be8bf*/
  if ( result ) /*0x7be8c3*/
  {
    int v18 = 0; /*0x7be8c5*/
    int v20 = *(_DWORD *)(a1 + 1852); /*0x7be8c9*/
    do /*0x7be933*/
    {
      int v12 = *(_DWORD *)(*(_DWORD *)(a1 + 1860) + v11); /*0x7be8dd*/
      int * v13 = (int *)(*(_DWORD *)(a1 + 1864) + v18); /*0x7be8e0*/
      int v14 = v13[2]; /*0x7be8e3*/
      int v15 = *v13; /*0x7be8e7*/
      if ( v15 ) /*0x7be8eb*/
      {
        _DWORD * v16 = (_DWORD *)(v14 + 4); /*0x7be8ed*/
        int v22 = v15; /*0x7be8f0*/
        do /*0x7be91a*/
        {
          if ( v16[1] == a2 ) /*0x7be8fd*/
            (*(void (__cdecl **)(int, int, _DWORD, _DWORD))(a1 + 72))(a1, v12, *(v16 - 1), *v16); /*0x7be908*/
          v16 += 3; /*0x7be912*/
          --v22; /*0x7be916*/
        }
        while ( v22 ); /*0x7be91a*/
      }
      v11 += 16; /*0x7be924*/
      result = v20 - 1; /*0x7be92a*/
      v9 = v20 == 1; /*0x7be92a*/
      v18 += 12; /*0x7be92b*/
      --v20; /*0x7be92f*/
    }
    while ( !v9 ); /*0x7be933*/
  }
  return result; /*0x7be935*/
}
}
} // namespace gamemd

// 0x7BEE20
namespace gamemd {
void int sub_7BEE20(int a1, int a2, int a3, int a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  signed int result; // eax
  unsigned int Position; // eax

  int v5 = *(_DWORD *)(a2 + 48); /*0x7bee25*/
  signed int v7 = *(_DWORD *)(a4 + 28); /*0x7bee37*/
  result = a5 * v5 / 0x3Cu; /*0x7bee4b*/
  signed int v21 = v7; /*0x7bee51*/
  if ( (*(_BYTE *)(a3 + 4) & 2) != 0 ) /*0x7bee58*/
    --result; /*0x7bee5a*/
  char v9 = 0; /*0x7bee61*/
  signed int v22 = *(_DWORD *)(a1 + 300); /*0x7bee63*/
  int v10 = *(_DWORD *)(a1 + 336); /*0x7bee67*/
  if ( (v10 & 0x80u) != 0 ) /*0x7bee70*/
  {
  bool v13; // zf
    if ( (v10 & 0x100) != 0 ) /*0x7bee75*/
      v22 = *(_DWORD *)(a1 + 320); /*0x7bee7d*/
    do /*0x7beeee*/
    {
      if ( ((*(_DWORD *)(a2 + 64) & 4) != 0 || result <= v22) /*0x7beea1*/
        && ((*(_DWORD *)(a2 + 64) & 4) == 0 || v7 != *(_DWORD *)(a1 + 296) || v9) )
      {
        break; /*0x7beea1*/
      }
      int v11 = *(_DWORD *)(a1 + 296) - v22 - 1; /*0x7beeb1*/
      Audio_Process_7C3950(a1, 60 * v11 / v5); /*0x7beec0*/
      Position = AudioStream::GetPosition(a1); /*0x7beec7*/
      v9 = 1; /*0x7beeda*/
      v13 = v11 == 0; /*0x7beee6*/
      v7 = v21; /*0x7beee8*/
      result = (int)(v5 * Position) / 60; /*0x7beeec*/
    }
    while ( !v13 ); /*0x7beeee*/
  }
  int v14 = a2; /*0x7beef0*/
  if ( (*(_BYTE *)(a2 + 64) & 4) != 0 ) /*0x7beef8*/
  {
    if ( result <= v7 ) /*0x7beefc*/
    {
      int v16 = *(_DWORD *)(a1 + 336); /*0x7bef3e*/
      BYTE1(v16) &= ~8u; /*0x7bef44*/
      *(_DWORD *)(a1 + 336) = v16; /*0x7bef47*/
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 234) & 1) == 0 || (*(_BYTE *)(a2 + 68) & 1) == 0 ) /*0x7bef10*/
        Audio_Process_7C3950(a1, 60 * (v7 - result) / v5); /*0x7bef22*/
      int v15 = *(_DWORD *)(a1 + 336); /*0x7bef27*/
      v14 = a2; /*0x7bef2d*/
      BYTE1(v15) |= 8u; /*0x7bef31*/
      result = v7; /*0x7bef34*/
      *(_DWORD *)(a1 + 336) = v15; /*0x7bef36*/
    }
  }
  if ( v9 ) /*0x7bef4f*/
  {
    if ( (*(_BYTE *)(a3 + 4) & 2) != 0 && (*(_BYTE *)(v14 + 64) & 4) == 0 && --result < *(_DWORD *)(a1 + 296) ) /*0x7bef6a*/
      result = v22; /*0x7bef6c*/
    int v17 = *(_DWORD *)(a1 + 312); /*0x7bef70*/
    if ( v17 != -1 ) /*0x7bef7b*/
    {
      int v18 = *(_DWORD *)(a1 + 316); /*0x7bef7d*/
      *(_DWORD *)(a1 + 316) = -1; /*0x7bef83*/
      *(_DWORD *)(a1 + 296) = v18; /*0x7bef89*/
      *(_DWORD *)(a1 + 300) = v17; /*0x7bef8f*/
      *(_DWORD *)(a1 + 312) = -1; /*0x7bef95*/
    }
    int v19 = *(_DWORD *)(a1 + 336); /*0x7bef9b*/
    if ( (v19 & 0x100) == 0 ) /*0x7befa4*/
    {
      *(_DWORD *)(a1 + 324) = *(_DWORD *)(a1 + 296); /*0x7befac*/
      *(_DWORD *)(a1 + 320) = *(_DWORD *)(a1 + 300); /*0x7befb8*/
    }
    *(_DWORD *)(a1 + 336) = v19 & 0xFFFFFE7F; /*0x7befc4*/
  }
  return result; /*0x7befca*/
}
}
} // namespace gamemd

// 0x7C0530
namespace gamemd {
int Audio_Process_7C0530(int a1, int edx0, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  DSurface *v7; // eax
  DSurface *v9; // eax
  int result; // eax
  int a2; // [esp+10h] [ebp-10h] BYREF
  int v15; // [esp+14h] [ebp-Ch] BYREF
  int v16; // [esp+18h] [ebp-8h]
  int v17; // [esp+1Ch] [ebp-4h]
  int v4 = -1; /*0x7c0539*/
  int v5 = *(_DWORD *)(a1 + 368); /*0x7c053c*/
  v16 = -1; /*0x7c0542*/
  v17 = v5; /*0x7c0546*/
  if ( edx0 > *(_DWORD *)(a1 + 284) ) /*0x7c0552*/
    return -6; /*0x7c0552*/
  int v6 = *(_DWORD *)(a1 + 1892); /*0x7c0558*/
  if ( !v6 ) /*0x7c0562*/
    return -6; /*0x7c069d*/
  if ( *(_DWORD *)(a1 + 1888) ) /*0x7c0568*/
  {
    Audio_Process_7C06B0((DSurface *)a1, edx0, &a2, 0); /*0x7c0578*/
    if ( a3 ) /*0x7c0581*/
    {
      v4 = a2; /*0x7c060b*/
    }
    else
    {
      Audio_Process_7C06B0((DSurface *)a1, *(_DWORD *)(a1 + 388), &v15, 0); /*0x7c0595*/
      v4 = a2; /*0x7c059a*/
      if ( a2 == v15 ) /*0x7c05a2*/
        return v16; /*0x7c0697*/
    }
  }
  else
  {
    a2 = -1; /*0x7c05ac*/
    v7 = (DSurface *)edx0; /*0x7c05b0*/
    if ( edx0 >= 0 ) /*0x7c05b2*/
    {
      _DWORD * v8 = (_DWORD *)(v6 + 4 * edx0); /*0x7c05b4*/
      while ( (*v8 & 0x40000000) == 0 ) /*0x7c05bd*/
      {
        v7 = (DSurface *)((char *)v7 - 1); /*0x7c05bf*/
        --v8; /*0x7c05c0*/
        if ( (int)v7 < 0 ) /*0x7c05c5*/
          goto LABEL_13; /*0x7c05c5*/
      }
      v4 = (int)v7; /*0x7c05c9*/
      a2 = (int)v7; /*0x7c05cb*/
    }
LABEL_13:
    if ( !a3 ) /*0x7c05d3*/
    {
      v9 = *(DSurface **)(a1 + 388); /*0x7c05d5*/
      int v10 = -1; /*0x7c05db*/
      v15 = -1; /*0x7c05e0*/
      if ( (int)v9 >= 0 ) /*0x7c05e4*/
      {
        _DWORD * v11 = (_DWORD *)(v6 + 4 * (_DWORD)v9); /*0x7c05e6*/
        while ( (*v11 & 0x40000000) == 0 ) /*0x7c05ef*/
        {
          v9 = (DSurface *)((char *)v9 - 1); /*0x7c05f1*/
          --v11; /*0x7c05f2*/
          if ( (int)v9 < 0 ) /*0x7c05f7*/
            goto LABEL_20; /*0x7c05f7*/
        }
        v10 = (int)v9; /*0x7c05fb*/
        v15 = (int)v9; /*0x7c05fd*/
      }
LABEL_20:
      if ( v4 == v10 ) /*0x7c0603*/
        return v16; /*0x7c0603*/
    }
  }
  if ( v4 < 0 ) /*0x7c0611*/
    return v16; /*0x7c0611*/
  if ( (*(int (__cdecl **)(int, int, _DWORD, int))(a1 + 64))( /*0x7c0629*/
         a1,
         7,
         0,
         2 * (*(_DWORD *)(*(_DWORD *)(a1 + 1892) + 4 * v4) & 0xFFFFFFF)) )
  {
    return -6; /*0x7c0684*/
  }
  if ( a3 ) /*0x7c0637*/
  {
    int v12 = v17; /*0x7c0639*/
    *(_DWORD *)(a1 + 372) = 0; /*0x7c063d*/
    *(_DWORD *)(a1 + 376) = 0; /*0x7c0643*/
    *(_DWORD *)(a1 + 360) = *(_DWORD *)(a1 + 1772); /*0x7c064f*/
    *(_DWORD *)(a1 + 356) = *(_DWORD *)(a1 + 1772); /*0x7c065b*/
    *(_DWORD *)(a1 + 384) = 0; /*0x7c0661*/
    *(_DWORD *)(v12 + 20) = 0; /*0x7c0667*/
  }
  result = FillAudioStreamBuffer(a1, 30); /*0x7c0671*/
  v16 = result; /*0x7c0676*/
  return result; /*0x7c067a*/
}
}
} // namespace gamemd

// 0x7C06B0
namespace gamemd {
void Audio_Process_7C06B0(DSurface * aP0, int edx0, unsigned int * a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  unsigned __int16 *v8; // ebx

  int v4 = *(_DWORD *)&aP0->__pad_518[584]; /*0x7c06b2*/
  int v5 = *(unsigned __int16 *)&aP0->__pad_518[576]; /*0x7c06bd*/
  int v6 = 1; /*0x7c06c4*/
  result = 0; /*0x7c06c9*/
  if ( (unsigned __int16)v5 <= 1u ) /*0x7c06d1*/
  {
LABEL_7:
    result = v5 - 1; /*0x7c06f6*/
  }
  else
  {
    v8 = (unsigned __int16 *)(v4 + 2); /*0x7c06d3*/
    while ( edx0 < *(v8 - 1) || edx0 >= *v8 ) /*0x7c06e7*/
    {
      ++result; /*0x7c06e9*/
      ++v6; /*0x7c06ea*/
      ++v8; /*0x7c06eb*/
      if ( v6 >= v5 ) /*0x7c06f0*/
      {
        v4 = *(_DWORD *)&aP0->__pad_518[584]; /*0x7c06f2*/
        goto LABEL_7; /*0x7c06f2*/
      }
    }
    v4 = *(_DWORD *)&aP0->__pad_518[584]; /*0x7c06fb*/
  }
  if ( a2 ) /*0x7c0705*/
    *a2 = *(unsigned __int16 *)(v4 + 2 * result); /*0x7c070d*/
  if ( a3 ) /*0x7c0715*/
  {
    if ( result >= v5 - 1 ) /*0x7c071a*/
      *a3 = aP0->field_10; /*0x7c0731*/
    else
      *a3 = *(unsigned __int16 *)(v4 + 2 * result + 2) - 1; /*0x7c0727*/
  }
  return result; /*0x7c071e*/
}
}
} // namespace gamemd

// 0x7C19F0
namespace gamemd {
void Audio_Process_7C19F0(int a1, DSurface * aP1, unsigned int * a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  unsigned __int16 *v8; // edi
  int v9; // ecx
  int v10; // edx

  int v4 = *(_DWORD *)(a1 + 1876); /*0x7c19f1*/
  result = 0; /*0x7c19fb*/
  int v6 = *(unsigned __int16 *)(a1 + 1868); /*0x7c19fd*/
  int v7 = 1; /*0x7c1a04*/
  if ( (unsigned __int16)v6 <= 1u ) /*0x7c1a0c*/
  {
LABEL_6:
    result = v6 - 1; /*0x7c1a2d*/
  }
  else
  {
    v8 = (unsigned __int16 *)(v4 + 6); /*0x7c1a0e*/
    while ( (int)aP1 < *(v8 - 3) || (int)aP1 >= *v8 ) /*0x7c1a22*/
    {
      ++result; /*0x7c1a24*/
      ++v7; /*0x7c1a25*/
      v8 += 3; /*0x7c1a26*/
      if ( v7 >= v6 ) /*0x7c1a2b*/
        goto LABEL_6; /*0x7c1a2b*/
    }
  }
  if ( result ) /*0x7c1a32*/
  {
    v9 = result - 1; /*0x7c1a3a*/
    v10 = result; /*0x7c1a3d*/
  }
  else
  {
    v9 = 0; /*0x7c1a34*/
    v10 = 0; /*0x7c1a36*/
  }
  if ( a2 ) /*0x7c1a45*/
    *a2 = *(unsigned __int16 *)(v4 + 6 * v9); /*0x7c1a50*/
  if ( a3 ) /*0x7c1a58*/
    *a3 = *(unsigned __int16 *)(v4 + 6 * v10) - 1; /*0x7c1a64*/
  return result; /*0x7c1a66*/
}
}
} // namespace gamemd

// 0x7C3270
namespace gamemd {
BuildingTypeClass * Audio_Process_7C3270(int a1, int a2, unsigned int a3, ObjectClass * aP3, int a5, int a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  ObjectClass *v9; // edx
  int v12; // eax
  int v13; // edi
  int v14; // eax
  char v15; // bl
  int v16; // eax
  int v6 = *(_DWORD *)(a1 + 128); /*0x7c3271*/
  unsigned int v7 = a3; /*0x7c327a*/
  int v8 = v6 & 0x30; /*0x7c3285*/
  if ( !a3 ) /*0x7c328a*/
    LOWORD(v7) = *(_WORD *)(a1 + 238); /*0x7c328c*/
  v9 = aP3; /*0x7c3293*/
  if ( !aP3 ) /*0x7c3299*/
  {
    LOWORD(v9) = *(_WORD *)(a1 + 240); /*0x7c329b*/
    aP3 = (ObjectClass *)(unsigned __int16)v9; /*0x7c32a2*/
  }
  int v10 = a5; /*0x7c32a6*/
  int v11 = a6; /*0x7c32aa*/
  if ( a5 >= 0 || a6 >= 0 ) /*0x7c32b8*/
  {
    if ( (v6 & 0x40) != 0 ) /*0x7c3366*/
    {
      v10 = a5 / 2; /*0x7c336f*/
      v9 = aP3; /*0x7c3376*/
      v11 = a6 / 2; /*0x7c337c*/
    }
    if ( v8 == 32 ) /*0x7c3381*/
    {
      *(_DWORD *)(a1 + 436) = v7 - v10; /*0x7c339a*/
    }
    else
    {
      *(_DWORD *)(a1 + 436) = v10; /*0x7c3386*/
      if ( v8 != 48 ) /*0x7c338c*/
      {
        *(_DWORD *)(a1 + 440) = v11; /*0x7c338e*/
        goto LABEL_22; /*0x7c3394*/
      }
    }
    v12 = (int)&v9->__pad_0[-v11]; /*0x7c33a2*/
LABEL_21:
    *(_DWORD *)(a1 + 440) = v12; /*0x7c33a4*/
    goto LABEL_22; /*0x7c33a4*/
  }
  if ( (v6 & 8) != 0 ) /*0x7c32c0*/
  {
    if ( (v6 & 0x40) != 0 ) /*0x7c32c4*/
    {
      *(_DWORD *)(a1 + 436) = *(unsigned __int16 *)(a1 + 250) >> 1; /*0x7c32d1*/
      v12 = *(unsigned __int16 *)(a1 + 252) >> 1; /*0x7c32e0*/
    }
    else
    {
      *(_DWORD *)(a1 + 436) = *(unsigned __int16 *)(a1 + 250); /*0x7c32f0*/
      v12 = *(unsigned __int16 *)(a1 + 252); /*0x7c32f8*/
    }
    goto LABEL_21; /*0x7c32e2*/
  }
  if ( (v6 & 0x40) != 0 ) /*0x7c3306*/
  {
    *(_DWORD *)(a1 + 436) = (v7 - (*(unsigned __int16 *)(a1 + 238) >> 1)) >> 1; /*0x7c331b*/
    *(_DWORD *)(a1 + 440) = ((unsigned int)v9 - (*(unsigned __int16 *)(a1 + 240) >> 1)) >> 1; /*0x7c3330*/
  }
  else
  {
    *(_DWORD *)(a1 + 436) = (v7 - *(unsigned __int16 *)(a1 + 238)) >> 1; /*0x7c3349*/
    *(_DWORD *)(a1 + 440) = ((unsigned int)v9 - *(unsigned __int16 *)(a1 + 240)) >> 1; /*0x7c335c*/
  }
LABEL_22:
  v13 = *(_DWORD *)(a1 + 436); /*0x7c33aa*/
  if ( v13 < 0 ) /*0x7c33b2*/
    return -24; /*0x7c33b2*/
  v14 = *(_DWORD *)(a1 + 440); /*0x7c33b4*/
  if ( v14 < 0 || v13 >= v7 || v14 >= (unsigned int)v9 ) /*0x7c33c4*/
    return -24; /*0x7c341e*/
  v15 = *(_BYTE *)(a1 + 264); /*0x7c33c6*/
  if ( v15 == 1 || v15 == 4 ) /*0x7c33d4*/
  {
    v13 *= 2; /*0x7c33d6*/
    v14 *= 2; /*0x7c33d8*/
  }
  *(_DWORD *)(a1 + 428) = v7; /*0x7c33df*/
  *(_DWORD *)(a1 + 444) = v13 + v7 * v14; /*0x7c33e5*/
  *(_DWORD *)(a1 + 432) = v9; /*0x7c33f1*/
  if ( a2 ) /*0x7c33f7*/
  {
    *(_DWORD *)(a1 + 424) = a2; /*0x7c33f9*/
    *(_DWORD *)(a1 + 8) = a2; /*0x7c33ff*/
  }
  v16 = *(_DWORD *)(a1 + 336); /*0x7c3402*/
  LOBYTE(v16) = v16 | 0x10; /*0x7c3409*/
  *(_DWORD *)(a1 + 336) = v16; /*0x7c340c*/
  return -1; /*0x7c3408*/
}
}
} // namespace gamemd

// 0x7DF7C0
namespace gamemd {
int sub_7DF7C0(int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  char *i; // edi
  int savedregs; // [esp+18h] [ebp+0h] BYREF

  int v1 = *((__int16 *)a1 + 21); /*0x7df7cf*/
  int v2 = *((__int16 *)a1 + 22); /*0x7df7d3*/
  int v3 = *((unsigned __int8 *)a1 + 50); /*0x7df7d9*/
  int * v4 = g_VoxelOffsetTable; /*0x7df7dc*/
  int v5 = 0; /*0x7df7e1*/
  int v6 = 0; /*0x7df7e3*/
  do /*0x7df7fb*/
  {
    *(_WORD *)v4 = v5; /*0x7df7ea*/
    _WORD * v7 = (_WORD *)v4 + 1; /*0x7df7ed*/
    v5 += v1; /*0x7df7f0*/
    *v7 = v6; /*0x7df7f2*/
    v4 = (int *)(v7 + 1); /*0x7df7f5*/
    v6 += v2; /*0x7df7f8*/
    --v3; /*0x7df7fa*/
  }
  while ( v3 ); /*0x7df7fb*/
  int * v8 = &savedregs; /*0x7df7fd*/
  int v23 = a1[6]; /*0x7df806*/
  BYTE1(v3) = *((_BYTE *)a1 + 49); /*0x7df809*/
  do /*0x7df851*/
  {
    *(v8 - 1) = a1[3]; /*0x7df80f*/
    *(v8 - 2) = *(v8 - 3); /*0x7df815*/
    LOBYTE(v3) = *((_BYTE *)a1 + 48); /*0x7df818*/
    do /*0x7df83b*/
    {
      a1[6] = *(v8 - 3); /*0x7df81e*/
      int v9 = *a1; /*0x7df826*/
      int v10 = *(_DWORD *)(*a1 + 4 * a1[3]); /*0x7df828*/
      if ( v10 >= 0 ) /*0x7df82b*/
      {
        int v22 = v3; /*0x7df861*/
        int * v21 = v8; /*0x7df862*/
        _BYTE * v12 = (_BYTE *)(a1[2] + v10); /*0x7df865*/
        int v13 = *((unsigned __int8 *)a1 + 50); /*0x7df868*/
        LOWORD(v9) = *((_WORD *)a1 + 13); /*0x7df86b*/
        unsigned int v15 = v9 << 16; /*0x7df86f*/
        int v14 = *(int *)((char *)a1 + 42); /*0x7df872*/
        LOWORD(v15) = *((_WORD *)a1 + 12); /*0x7df875*/
        while ( 1 ) /*0x7df879*/
        {
          int v16 = 0; /*0x7df879*/
          if ( !v13 ) /*0x7df87e*/
            break; /*0x7df87e*/
          LOBYTE(v16) = *v12; /*0x7df880*/
          _BYTE * v17 = v12 + 1; /*0x7df882*/
          LOBYTE(v13) = v13 - v16; /*0x7df883*/
          v15 += g_VoxelOffsetTable[v16]; /*0x7df885*/
          BYTE1(v13) = *v17; /*0x7df88c*/
  char v20; // dl
  unsigned int v19; // eax
          for ( i = v17 + 1; BYTE1(v13); g_VoxelRenderBuffer[v19] = v20 ) /*0x7df891*/
          {
            LOBYTE(v13) = v13 - 1; /*0x7df895*/
            v19 = HIWORD(v15); /*0x7df897*/
            v20 = *i; /*0x7df89a*/
            LOBYTE(v19) = BYTE1(v15); /*0x7df89c*/
            i += 2; /*0x7df89e*/
            v15 += v14; /*0x7df8a1*/
            --BYTE1(v13); /*0x7df8a3*/
          }
          v12 = i + 1; /*0x7df8ad*/
        }
        v8 = v21; /*0x7df8b0*/
        v3 = v22; /*0x7df8b1*/
      }
      *(v8 - 3) += *(int *)((char *)a1 + 30); /*0x7df830*/
      a1[3] += a1[4]; /*0x7df836*/
      LOBYTE(v3) = v3 - 1; /*0x7df839*/
    }
    while ( (_BYTE)v3 ); /*0x7df83b*/
    *(v8 - 3) = a1[9] + *(v8 - 2); /*0x7df843*/
    result = a1[5] + *(v8 - 1); /*0x7df849*/
    a1[3] = result; /*0x7df84c*/
    --BYTE1(v3); /*0x7df84f*/
  }
  while ( BYTE1(v3) ); /*0x7df851*/
  return result; /*0x7df855*/
}
}
} // namespace gamemd

// 0x7DF8C0
namespace gamemd {
int sub_7DF8C0(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  unsigned __int8 *v12; // edi
  unsigned __int8 *i; // edi
  unsigned __int8 *v20; // edi
  int savedregs; // [esp+18h] [ebp+0h] BYREF

  int v1 = *(__int16 *)(a1 + 42); /*0x7df8cf*/
  int v2 = *(__int16 *)(a1 + 44); /*0x7df8d3*/
  int v3 = *(unsigned __int8 *)(a1 + 50); /*0x7df8d9*/
  int * v4 = g_VoxelOffsetTable; /*0x7df8dc*/
  int v5 = 0; /*0x7df8e1*/
  int v6 = 0; /*0x7df8e3*/
  do /*0x7df8fb*/
  {
    *(_WORD *)v4 = v5; /*0x7df8ea*/
    _WORD * v7 = (_WORD *)v4 + 1; /*0x7df8ed*/
    v5 += v1; /*0x7df8f0*/
    *v7 = v6; /*0x7df8f2*/
    v4 = (int *)(v7 + 1); /*0x7df8f5*/
    v6 += v2; /*0x7df8f8*/
    --v3; /*0x7df8fa*/
  }
  while ( v3 ); /*0x7df8fb*/
  int * v8 = &savedregs; /*0x7df8fd*/
  int v24 = *(_DWORD *)(a1 + 24); /*0x7df906*/
  BYTE1(v3) = *(_BYTE *)(a1 + 49); /*0x7df909*/
  do /*0x7df952*/
  {
    *(v8 - 1) = *(_DWORD *)(a1 + 12); /*0x7df90f*/
    *(v8 - 2) = *(v8 - 3); /*0x7df915*/
    LOBYTE(v3) = *(_BYTE *)(a1 + 48); /*0x7df918*/
    do /*0x7df93c*/
    {
      *(_DWORD *)(a1 + 24) = *(v8 - 3); /*0x7df91e*/
      int v9 = *(_DWORD *)(a1 + 4); /*0x7df926*/
      int v10 = *(_DWORD *)(v9 + 4 * *(_DWORD *)(a1 + 12)); /*0x7df929*/
      if ( v10 >= 0 ) /*0x7df92c*/
      {
        int v23 = v3; /*0x7df961*/
        int * v22 = v8; /*0x7df962*/
        v12 = (unsigned __int8 *)(*(_DWORD *)(a1 + 8) + v10); /*0x7df965*/
        int v13 = *(unsigned __int8 *)(a1 + 50); /*0x7df968*/
        LOWORD(v9) = *(_WORD *)(a1 + 26); /*0x7df96b*/
        unsigned int v15 = v9 << 16; /*0x7df96f*/
        int v14 = *(_DWORD *)(a1 + 42); /*0x7df972*/
        LOWORD(v15) = *(_WORD *)(a1 + 24); /*0x7df975*/
        while ( v13 ) /*0x7df97c*/
        {
          BYTE1(v13) = *v12; /*0x7df97e*/
  char v19; // dl
  unsigned int v18; // eax
          for ( i = v12 - 1; BYTE1(v13); g_VoxelRenderBuffer[v18] = v19 ) /*0x7df983*/
          {
            LOBYTE(v13) = v13 - 1; /*0x7df987*/
            char * v17 = (char *)(i - 1); /*0x7df989*/
            v18 = HIWORD(v15); /*0x7df98a*/
            v19 = *v17; /*0x7df98d*/
            LOBYTE(v18) = BYTE1(v15); /*0x7df98f*/
            i = (unsigned __int8 *)(v17 - 1); /*0x7df991*/
            v15 += v14; /*0x7df992*/
            --BYTE1(v13); /*0x7df994*/
          }
          v20 = i - 1; /*0x7df99e*/
          int v21 = *v20; /*0x7df9a1*/
          v12 = v20 - 1; /*0x7df9a3*/
          LOBYTE(v13) = v13 - v21; /*0x7df9a4*/
          v15 += g_VoxelOffsetTable[v21]; /*0x7df9a6*/
        }
        v8 = v22; /*0x7df9af*/
        v3 = v23; /*0x7df9b0*/
      }
      *(v8 - 3) += *(_DWORD *)(a1 + 30); /*0x7df931*/
      *(_DWORD *)(a1 + 12) += *(_DWORD *)(a1 + 16); /*0x7df937*/
      LOBYTE(v3) = v3 - 1; /*0x7df93a*/
    }
    while ( (_BYTE)v3 ); /*0x7df93c*/
    *(v8 - 3) = *(_DWORD *)(a1 + 36) + *(v8 - 2); /*0x7df944*/
    result = *(_DWORD *)(a1 + 20) + *(v8 - 1); /*0x7df94a*/
    *(_DWORD *)(a1 + 12) = result; /*0x7df94d*/
    --BYTE1(v3); /*0x7df950*/
  }
  while ( BYTE1(v3) ); /*0x7df952*/
  return result; /*0x7df956*/
}
}
} // namespace gamemd

// 0x7DFD00
namespace gamemd {
int sub_7DFD00(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  unsigned __int8 *v12; // edi
  char *i; // edi
  int savedregs; // [esp+18h] [ebp+0h] BYREF

  int v1 = *(__int16 *)(a1 + 42); /*0x7dfd0f*/
  int v2 = *(__int16 *)(a1 + 44); /*0x7dfd13*/
  int v3 = 255; /*0x7dfd17*/
  LOBYTE(v3) = -1 - *(_BYTE *)(a1 + 50); /*0x7dfd1c*/
  int * v4 = g_VoxelOffsetTable; /*0x7dfd1f*/
  int v5 = 0; /*0x7dfd24*/
  int v6 = 0; /*0x7dfd26*/
  do /*0x7dfd3e*/
  {
    *(_WORD *)v4 = v5; /*0x7dfd2d*/
    _WORD * v7 = (_WORD *)v4 + 1; /*0x7dfd30*/
    v5 += v1; /*0x7dfd33*/
    *v7 = v6; /*0x7dfd35*/
    v4 = (int *)(v7 + 1); /*0x7dfd38*/
    v6 += v2; /*0x7dfd3b*/
    --v3; /*0x7dfd3d*/
  }
  while ( v3 ); /*0x7dfd3e*/
  int * v8 = &savedregs; /*0x7dfd40*/
  int v23 = *(_DWORD *)(a1 + 24); /*0x7dfd49*/
  BYTE1(v3) = *(_BYTE *)(a1 + 49); /*0x7dfd4c*/
  do /*0x7dfd95*/
  {
    *(v8 - 1) = *(_DWORD *)(a1 + 12); /*0x7dfd52*/
    *(v8 - 2) = *(v8 - 3); /*0x7dfd58*/
    LOBYTE(v3) = *(_BYTE *)(a1 + 48); /*0x7dfd5b*/
    do /*0x7dfd7f*/
    {
      *(_DWORD *)(a1 + 24) = *(v8 - 3); /*0x7dfd61*/
      int v9 = *(_DWORD *)(a1 + 4); /*0x7dfd69*/
      int v10 = *(_DWORD *)(v9 + 4 * *(_DWORD *)(a1 + 12)); /*0x7dfd6c*/
      if ( v10 >= 0 ) /*0x7dfd6f*/
      {
        int v22 = v3; /*0x7dfda1*/
        int * v21 = v8; /*0x7dfda2*/
        v12 = (unsigned __int8 *)(*(_DWORD *)(a1 + 8) + v10); /*0x7dfda5*/
        int v13 = *(unsigned __int8 *)(a1 + 50); /*0x7dfda8*/
        LOWORD(v9) = *(_WORD *)(a1 + 26); /*0x7dfdab*/
        unsigned int v15 = v9 << 16; /*0x7dfdaf*/
        int v14 = *(_DWORD *)(a1 + 42); /*0x7dfdb2*/
        LOWORD(v15) = *(_WORD *)(a1 + 24); /*0x7dfdb5*/
        while ( v13 ) /*0x7dfdbc*/
        {
          BYTE1(v13) = *v12; /*0x7dfdbe*/
  char v18; // dl
  unsigned int v17; // eax
          for ( i = (char *)(v12 - 1); BYTE1(v13); g_VoxelRenderBuffer[v17] = v18 ) /*0x7dfdc3*/
          {
            LOBYTE(v13) = v13 - 1; /*0x7dfdc7*/
            v17 = HIWORD(v15); /*0x7dfdc9*/
            v18 = *i; /*0x7dfdcc*/
            LOBYTE(v17) = BYTE1(v15); /*0x7dfdce*/
            --i; /*0x7dfdd0*/
            v15 += v14; /*0x7dfdd1*/
            --BYTE1(v13); /*0x7dfdd3*/
          }
          char * v19 = i - 1; /*0x7dfddd*/
          int v20 = (unsigned __int8)*v19; /*0x7dfde0*/
          v12 = (unsigned __int8 *)(v19 - 1); /*0x7dfde2*/
          LOBYTE(v13) = v13 - v20; /*0x7dfde3*/
          v15 += g_VoxelOffsetTable[v20]; /*0x7dfde5*/
        }
        v8 = v21; /*0x7dfdee*/
        v3 = v22; /*0x7dfdef*/
      }
      *(v8 - 3) += *(_DWORD *)(a1 + 30); /*0x7dfd74*/
      *(_DWORD *)(a1 + 12) += *(_DWORD *)(a1 + 16); /*0x7dfd7a*/
      LOBYTE(v3) = v3 - 1; /*0x7dfd7d*/
    }
    while ( (_BYTE)v3 ); /*0x7dfd7f*/
    *(v8 - 3) = *(_DWORD *)(a1 + 36) + *(v8 - 2); /*0x7dfd87*/
    result = *(_DWORD *)(a1 + 20) + *(v8 - 1); /*0x7dfd8d*/
    *(_DWORD *)(a1 + 12) = result; /*0x7dfd90*/
    --BYTE1(v3); /*0x7dfd93*/
  }
  while ( BYTE1(v3) ); /*0x7dfd95*/
  return result; /*0x7dfd99*/
}
}
} // namespace gamemd

// 0x6C6D00
namespace gamemd {
AbstractClass * sub_6C6D00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v0 = 0; /*0x6c6d08*/
  if ( g_SidebarButtonState ) /*0x6c6d0c*/
  {
    if ( g_SidebarButtonState <= 0 ) /*0x6c6d12*/
      v0 = g_SidebarButtonState - 1; /*0x6c6d14*/
    memcpy( /*0x6c6d45*/
      (char *)g_SidebarPool + 32776 * v0,
      (char *)g_SidebarPool + 32776 * v0 + 32776,
      32776 * g_SidebarButtonState - 32776 * (v0 + 1));
    --g_SidebarButtonState; /*0x6c6d59*/
    if ( 3 * g_SidebarButtonState <= DataGlobal_B0BD54 ) /*0x6c6d63*/
    {
      int v1 = DataGlobal_B0BD54 / 2; /*0x6c6d6c*/
      if ( DataGlobal_B0BD54 / 2 < 10 ) /*0x6c6d71*/
        v1 = 10; /*0x6c6d73*/
      if ( v1 < DataGlobal_B0BD54 ) /*0x6c6d7a*/
      {
        char * v2 = (char *)__2_YAPAXI_Z(32776 * v1); /*0x6c6d88*/
        char * v3 = (char *)g_SidebarPool; /*0x6c6d8d*/
        void * v4 = v2; /*0x6c6d98*/
        if ( g_SidebarPool ) /*0x6c6d9a*/
        {
          char v5 = 8 * g_SidebarButtonState; /*0x6c6dae*/
          unsigned int v6 = (unsigned int)(32776 * g_SidebarButtonState) >> 2; /*0x6c6db0*/
          qmemcpy(v2, g_SidebarPool, 4 * v6); /*0x6c6db3*/
          qmemcpy(&v2[4 * v6], &v3[4 * v6], v5 & 3); /*0x6c6dba*/
          v3 = (char *)g_SidebarPool; /*0x6c6dbc*/
        }
        __3_YAXPAX_Z(v3); /*0x6c6dc4*/
        g_SidebarPool = v4; /*0x6c6dcc*/
        DataGlobal_B0BD54 = v1; /*0x6c6dd2*/
      }
    }
  }
}
}
} // namespace gamemd

// 0x6C6DE0
namespace gamemd {
AbstractClass * sub_6C6DE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v0 = g_SidebarButtonState; /*0x6c6dea*/
  _DWORD v5[8194]; // [esp+14h] [ebp-8008h] BYREF
  v5[0] = 0; /*0x6c6df8*/
  v5[1] = 0; /*0x6c6dfc*/
  if ( g_SidebarButtonState ) /*0x6c6e00*/
  {
    if ( g_SidebarButtonState > 0 ) /*0x6c6e06*/
    {
      Audio_Read_6C6B00(v5, g_SidebarPool); /*0x6c6e12*/
      v0 = g_SidebarButtonState; /*0x6c6e17*/
    }
LABEL_4:
    char * v1 = (char *)g_SidebarPool; /*0x6c6e1d*/
    while ( v5[1] < 1 || v5[0] > 10 ) /*0x6c6e31*/
    {
      int v2 = 0; /*0x6c6e37*/
      if ( !v0 ) /*0x6c6e3b*/
        return; /*0x6c6e3b*/
      if ( v0 <= 0 ) /*0x6c6e41*/
        v2 = v0 - 1; /*0x6c6e43*/
      memcpy(&v1[32776 * v2], &v1[32776 * v2 + 32776], 32776 * v0 - 32776 * (v2 + 1)); /*0x6c6e6e*/
      v0 = g_SidebarButtonState - 1; /*0x6c6e81*/
      g_SidebarButtonState = v0; /*0x6c6e82*/
      if ( 3 * v0 <= DataGlobal_B0BD54 ) /*0x6c6e8d*/
      {
        Audio_Read_6C8870(&g_SidebarButtonState); /*0x6c6e94*/
        v0 = g_SidebarButtonState; /*0x6c6e99*/
      }
      if ( !v0 ) /*0x6c6ea1*/
        return; /*0x6c6ea1*/
      if ( v0 <= 0 ) /*0x6c6ea7*/
        goto LABEL_4; /*0x6c6ea7*/
      v1 = (char *)g_SidebarPool; /*0x6c6ead*/
      v5[0] = *(_DWORD *)g_SidebarPool; /*0x6c6eb5*/
      v5[1] = *((_DWORD *)g_SidebarPool + 1); /*0x6c6ec2*/
      if ( v5[1] <= 0x8000 ) /*0x6c6ec6*/
        qmemcpy(&v5[2], (char *)g_SidebarPool + 8, v5[1]); /*0x6c6edd*/
      else
        v5[1] = 0; /*0x6c6ec8*/
    }
    if ( g_UIPointerTable ) /*0x6c6ef2*/
    {
      (*(void (__stdcall **)(LPVOID, char *, int, _DWORD *, _DWORD))(*(_DWORD *)g_UIPointerTable + 12))( /*0x6c6f09*/
        g_UIPointerTable,
        byte_B77930,
        dword_B76184,
        &v5[2],
        v5[1]);
      int v3 = 0; /*0x6c6f17*/
      ++v5[0]; /*0x6c6f1b*/
      if ( g_SidebarButtonState ) /*0x6c6f1f*/
      {
        if ( g_SidebarButtonState <= 0 ) /*0x6c6f21*/
          v3 = g_SidebarButtonState - 1; /*0x6c6f23*/
        char * v4 = (char *)g_SidebarPool + 32776 * v3; /*0x6c6f32*/
        if ( v4 ) /*0x6c6f37*/
          qmemcpy(v4, v5, 0x8008u); /*0x6c6f42*/
      }
    }
  }
}
}
} // namespace gamemd

// 0x7C2410
namespace gamemd {
int sub_7C2410(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  unsigned int i; // ecx

  int v3 = a2 + 1; /*0x7c2418*/
  LOBYTE(v3) = (a2 + 1) & 0xFE; /*0x7c2421*/
  int v4; // edi
  if ( (*(_BYTE *)(a1 + 132) & 1) != 0 && (v4 = *(_DWORD *)(a1 + 1932)) != 0 ) /*0x7c2434*/
  {
    unsigned int v5 = *(_DWORD *)(a1 + 1972); /*0x7c2441*/
    unsigned int v6 = a2 * (*(unsigned __int8 *)(a1 + 63) >> 2); /*0x7c244a*/
    if ( v6 <= v5 || *(_DWORD *)(a1 + 1936) ) /*0x7c2455*/
    {
      int v11 = v5 + *(_DWORD *)(a1 + 1960) - v3; /*0x7c2521*/
      if ( (*(int (__cdecl **)(int, int, int, int))(a1 + 64))(a1, 5, v11, v3) ) /*0x7c2527*/
      {
        return -4; /*0x7c2534*/
      }
      else
      {
        Render::DrawTileBitmap( /*0x7c2557*/
          v11,
          *(_WORD **)(a1 + 1960),
          *(unsigned __int8 *)(a1 + 63),
          *(unsigned __int8 *)(a1 + 62),
          v6,
          a1 + 2000);
        *(_DWORD *)(a1 + 1968) = v6; /*0x7c255f*/
        return -1; /*0x7c2565*/
      }
    }
    else
    {
      int v7 = v4 + *(_DWORD *)(a1 + 152) - v3; /*0x7c246c*/
      if ( (*(int (__cdecl **)(int, int, int, int))(a1 + 64))(a1, 5, v7, v3) ) /*0x7c2472*/
      {
        return -4; /*0x7c247f*/
      }
      else
      {
        Render::DrawTileBitmap( /*0x7c24a2*/
          v7,
          *(_WORD **)(a1 + 1932),
          *(unsigned __int8 *)(a1 + 63),
          *(unsigned __int8 *)(a1 + 62),
          v6,
          a1 + 2000);
        int v9 = *(_DWORD *)(a1 + 1964); /*0x7c24a7*/
        if ( v9 ) /*0x7c24b2*/
        {
          v6 -= v9; /*0x7c24ba*/
          qmemcpy(*(void **)(a1 + 1932), (const void *)(v9 + *(_DWORD *)(a1 + 1932)), v6); /*0x7c24c6*/
          *(_DWORD *)(a1 + 1964) = 0; /*0x7c24cf*/
        }
        *(_DWORD *)(a1 + 1936) += v6; /*0x7c24e5*/
        for ( i = 0; i < v6 / *(_DWORD *)(a1 + 156); ++i ) /*0x7c24ed*/
          *(_BYTE *)(i + *(_DWORD *)(a1 + 1940)) = 1; /*0x7c24ff*/
        return -1; /*0x7c2513*/
      }
    }
  }
  else
  {
    int v12 = -((*(int (__cdecl **)(int, int, int, int))(a1 + 64))(a1, 7, 1, v3) != 0); /*0x7c257b*/
    LOBYTE(v12) = v12 & 0xFB; /*0x7c257e*/
    return v12 - 1; /*0x7c2582*/
  }
}
}
} // namespace gamemd

// 0x7C3860
namespace gamemd {
int sub_7C3860(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  unsigned __int16 *v3; // ebp

  result = 0; /*0x7c386d*/
  int v11 = 0; /*0x7c3871*/
  if ( *(_WORD *)(a1 + 1812) ) /*0x7c3864*/
  {
  int v9; // esi
  int v8; // edi
  int v7; // esi
  int v6; // ebx
  int v5; // edi
  int v4; // esi
    v3 = *(unsigned __int16 **)(a1 + 1820); /*0x7c387d*/
    int v12 = *(unsigned __int16 *)(a1 + 1812); /*0x7c3887*/
    while ( 1 ) /*0x7c3892*/
    {
      v4 = v3[1]; /*0x7c3892*/
      v5 = *v3; /*0x7c3896*/
      if ( (unsigned __int16)v4 != *(_DWORD *)(a1 + 16) - 1 ) /*0x7c389c*/
        break; /*0x7c389c*/
      if ( a2 <= 0 ) /*0x7c38ac*/
      {
        v6 = *(_DWORD *)(a1 + 1892); /*0x7c38c5*/
        v7 = *(_DWORD *)(v6 + 4 * v4); /*0x7c38cb*/
        goto LABEL_8; /*0x7c38cb*/
      }
      v8 = 2 * (*(_DWORD *)(*(_DWORD *)(a1 + 1892) + 4 * v5) & 0xFFFFFFF); /*0x7c38bf*/
      v9 = a2; /*0x7c38c1*/
LABEL_9:
      int v10 = v9 - v8; /*0x7c38e1*/
      if ( v10 > v11 ) /*0x7c38e9*/
        v11 = v10; /*0x7c38eb*/
      v3 += 2; /*0x7c38f3*/
      if ( !--v12 ) /*0x7c38fb*/
        return v11; /*0x7c38fd*/
    }
    v6 = *(_DWORD *)(a1 + 1892); /*0x7c389e*/
    v7 = *(_DWORD *)(v6 + 4 * v4 + 4); /*0x7c38a4*/
LABEL_8:
    v9 = 2 * (v7 & 0xFFFFFFF); /*0x7c38ce*/
    v8 = 2 * (*(_DWORD *)(v6 + 4 * v5) & 0xFFFFFFF); /*0x7c38df*/
    goto LABEL_9; /*0x7c38df*/
  }
  return result; /*0x7c3904*/
}
}
} // namespace gamemd

// 0x401080
namespace gamemd {
int Audio::InitChannels()
{
{
    ((void (*)(void))AudioMixer::PlaySample)();
    AudioMixer::PlaySample(this + 40);
    return AudioMixer::PlaySample(this + 80);
}
}
} // namespace gamemd

// 0x404DD0
namespace gamemd {
int Audio::FlushChannel()
{
{
    LinkedList::Init(this);
    *(this + 78) = 0;
    if ( *((char *)(this) + 24) >= 0 )
    PushFrontLinkedListAlt(DataGlobal_87E2A8, (int)this);
    else
    __3_YAXPAX_Z(this);
    return --DataGlobal_87E28C;
}
}
} // namespace gamemd

// 0x406D40
namespace gamemd {
void Audio::Shutdown()
{
{
    if ( DataGlobal_87E728 )
    AudioQueue::StopAllVoices((int)DataGlobal_87E728, 1);
    AudioStream::CleanupChannels();
    AudioQueue::HaltVoices();
    Audio_Cleanup();
    Audio_Cleanup_752B40();
    sub_403FA0();
    sub_407780();
    if ( g_AudioFileData )
  {
    sub_401580((void **)g_AudioFileData);
    g_AudioFileData = 0;
  }
    if ( g_MixFile_AUDIO )
  {
    (**(void (__thiscall ***)(int, int))g_MixFile_AUDIO)(g_MixFile_AUDIO, 1);
    g_MixFile_AUDIO = 0;
  }
    if ( g_MixFile_THEME )
  {
    (**(void (__thiscall ***)(int, int))g_MixFile_THEME)(g_MixFile_THEME, 1);
    g_MixFile_THEME = 0;
  }
    if ( DataGlobal_87E728 )
  {
    AudioStream::DestroyAll(DataGlobal_87E728);
    DataGlobal_87E728 = 0;
  }
    sub_402990();
}
}
} // namespace gamemd

// 0x407000
namespace gamemd {
BOOL Audio::IsSoundEnabled()
{
{
    return DataGlobal_87E728 != 0;
}
}
} // namespace gamemd

// 0x407010
namespace gamemd {
void * Audio::GetEnabled()
{
{
    return DataGlobal_87E728;
}
}
} // namespace gamemd

// 0x407070
namespace gamemd {
int Audio::GetFlag()
{
{
    return RequestBufferMixer(this, 0);
}
}
} // namespace gamemd

// 0x4093B0
namespace gamemd {
int Audio::Callback()
{
{
    if ( DataGlobal_87E848 )
    return DataGlobal_87E848();
    else
    return 0;
}
}
} // namespace gamemd

// 0x40A7A0
namespace gamemd {
LPDIRECTSOUND Audio::GetDirectSound()
{
{
    return DataGlobal_87E89C;
}
}
} // namespace gamemd

// 0x5EF240
namespace gamemd {
unsigned int sub_5EF240(int a1, int a2)
{
{
    unsigned int result;
    int i;
    int v4;
    result = 0;
    for ( i = 0; i < a2; result = v4 + 2 * result )
  {
    v4 = *(unsigned char *)(i + a1) + (result >> 31);
    ++i;
  }
    return result;
}
}
} // namespace gamemd

// 0x752290
namespace gamemd {
int sub_752290()
{
{
    char *v0;
    int result;
    void *Enabled;
    DataGlobal_B1D3D8 = 0;
    DataGlobal_B1D428 = 0;
    v0 = DataGlobal_B1D450;
    do
  {
    DListNode::Init(v0);
    v0 += 12;
  }
    while ( (int)v0 < (int)&DataGlobal_B1D480 );
    DListNode::Init(&DataGlobal_B1D3F0);
    DListNode::Init(&DataGlobal_B1D3C8);
    result = (int)g_InfantryDrawState;
    DataGlobal_B1D4B8 = 0;
    DataGlobal_B1D4BC = 1;
    if ( g_InfantryDrawState || (Enabled = Audio::GetEnabled(), result = (int)AudioStream::Constructor(Enabled, 0xBB8u), (g_InfantryDrawState = (void *)result) != 0) )
  {
    SetAudioFileName(result, DataGlobal_84667C);
    AudioQueue::IsEmpty((int)g_InfantryDrawState, g_MixerChannel_Voice);
    AudioQueue::IsNotEmpty((int)g_InfantryDrawState, g_MixerChannel_Ambient);
    return 1;
  }
    return result;
}
}
} // namespace gamemd

// 0x752340
namespace gamemd {
void sub_752340()
{
{
    ThemeClass::ClearQueues();
    if ( g_InfantryDrawState )
  {
    Audio::Release(g_InfantryDrawState);
    AudioSample::Destructor(g_InfantryDrawState);
    g_InfantryDrawState = 0;
  }
}
}
} // namespace gamemd

// 0x7529E0
namespace gamemd {
int Audio::IsPlaying()
{
{
    char *v0;
    UpdateThemes();
    if ( !g_InfantryDrawState )
    return 0;
    if ( !Audio::IsSoundPlaying(g_InfantryDrawState) && (_UNKNOWN *)DataGlobal_B1D3CC == &DataGlobal_B1D3C8 && (_UNKNOWN *)DataGlobal_B1D3F4 == &DataGlobal_B1D3F0 && !DataGlobal_B1D4B8 )
  {
    v0 = DataGlobal_B1D450;
    while ( *((char **)(v0) + 1) == v0 )
    {
    v0 += 12;
    if ( (int)v0 >= (int)&DataGlobal_B1D480 )
    return 0;
    }
  }
    return 1;
}
}
} // namespace gamemd

// 0x752AD0
namespace gamemd {
int sub_752AD0()
{
{
    int result;
    void *Enabled;
    result = (int)DataGlobal_B1D4D8;
    if ( DataGlobal_B1D4D8 || (Enabled = Audio::GetEnabled(), result = (int)AudioStream::Constructor(Enabled, 0xBB8u), (DataGlobal_B1D4D8 = (void *)result) != 0) )
  {
    SetAudioFileName(result, DataGlobal_846688);
    AudioQueue::IsEmpty((int)g_InfantryDrawState, g_MixerChannel_Voice);
    AudioQueue::IsNotEmpty((int)g_InfantryDrawState, g_MixerChannel_Ambient);
    DataGlobal_B1D480 = 0;
    return 1;
  }
    return result;
}
}
} // namespace gamemd

// 0x752B40
namespace gamemd {
void sub_752B40()
{
{
    if ( DataGlobal_B1D4D8 )
  {
    Audio::Release(DataGlobal_B1D4D8);
    AudioSample::Destructor(DataGlobal_B1D4D8);
    DataGlobal_B1D4D8 = 0;
  }
}
}
} // namespace gamemd

// 0x753D00
namespace gamemd {
char Audio_Render(unsigned int * a0, SomeVoxelCache * edx0, ObjectClass * aP2, float * a3, float * a4, float * a5, float a7)
{
{
    float *v9;
    float *v10;
    int Info;
    float v13[3];
    float v14[3];
    float v15[3];
    float v16[3];
    float v17[12];
    float v18[12];
    float v19[12];
    qmemcpy(v18, InvertMatrix3x3Signs(v19, a3), sizeof(v18));
    qmemcpy(v17, InvertMatrix3x3Signs(v19, a4), sizeof(v17));
    v9 = Matrix3x3::TransformPoint(v18, (IUnknown *)v13, a5);
    v15[0] = *v9;
    v15[1] = v9[1];
    v15[2] = v9[2];
    v13[0] = 0.0;
    v13[1] = 0.0;
    v13[2] = 1.0;
    v10 = Matrix3x3::TransformPoint(v17, (IUnknown *)v16, v13);
    v14[0] = *v10;
    v14[1] = v10[1];
    v14[2] = v10[2];
    Info = VoxelSection::GetInfo(a0, edx0, (SomeVoxelCache *)aP2);
    return VoxelAnim::ComputeTransform(v15, v14, a7, *(unsigned char *)(Info + 163));
}
}
} // namespace gamemd

// 0x764B30
namespace gamemd {
rc_ptr * Audio_Create(rc_ptr_base * a1, const char ** a2, int a3)
{
{
    char *v6;
    ReferenceCounted *v7;
    if ( *(int *)(a3 + 4) )
  {
    v6 = (char *)__2_YAPAXI_Z(0x4Cu);
    if ( v6 )
    v7 = (ReferenceCounted *)CampaignConstructorWDT(v6, a2, a3);
    else
    v7 = 0;
    ComPtr::Constructor(a1);
    a1->vfptr = &vt_rc_ptr_WorldDominationTour_Campaign;
    ComPtr::Set(a1, (int)v7);
    return (rc_ptr *)a1;
  }
    else
  {
    ComPtr::Constructor(a1);
    a1->vfptr = &vt_rc_ptr_WorldDominationTour_Campaign;
    return (rc_ptr *)a1;
  }
}
}
} // namespace gamemd

// 0x76ABA0
namespace gamemd {
rc_ptr * Audio_Set(rc_ptr_base * a1, void * a2)
{
{
    char *v4;
    WDTState *WDT;
    v4 = (char *)__2_YAPAXI_Z(0x4Cu);
    if ( v4 )
    WDT = (WDTState *)File::LoadWDT(v4, a2);
    else
    WDT = 0;
    ComPtr::Constructor(a1);
    a1->vfptr = &vt_rc_ptr_WDTState;
    ComPtr::Set(a1, (int)WDT);
    return (rc_ptr *)a1;
}
}
} // namespace gamemd

// 0x76BE90
namespace gamemd {
rc_ptr * Audio_Create_76BE90(rc_ptr_base * a1, int a2)
{
{
    char *v4;
    ReferenceCounted *v5;
    v4 = (char *)__2_YAPAXI_Z(0x18u);
    if ( v4 )
    v5 = (ReferenceCounted *)Audio_Create_76BF00(v4, a2);
    else
    v5 = 0;
    ComPtr::Constructor(a1);
    a1->vfptr = &vt_rc_ptr_WorldDominationTour_CampaignProperties;
    ComPtr::Set(a1, (int)v5);
    return (rc_ptr *)a1;
}
}
} // namespace gamemd

// 0x7B84D0
namespace gamemd {
int sub_7B84D0()
{
{
    int result;
    result = DataGlobal_B7816C;
    if ( !DataGlobal_B7816C )
  {
    if ( DataGlobal_B78164 )
    return WWMouseClass::UpdateCursorMovement((LONG *)DataGlobal_B78164);
  }
    return result;
}
}
} // namespace gamemd

// 0x7C04E0
namespace gamemd {
char sub_7C04E0(int a1, int a2)
{
{
    int v3;
    unsigned short *v4;
    int v5;
    if ( !a2 )
    return 1;
    v3 = *(unsigned short *)(a1 + 1812);
    if ( (short)v3 && (*(char *)(a1 + 1814) & 3) != 0 )
  {
    v4 = *(unsigned short **)(a1 + 1820);
    v5 = 0;
    while ( a2 != *v4 )
    {
    ++v5;
    v4 += 2;
    if ( v5 >= v3 )
    return 0;
    }
    return 1;
  }
    return 0;
}
}
} // namespace gamemd

// 0x7C1130
namespace gamemd {
int sub_7C1130(int a1, int a2)
{
{
    int v2;
    v2 = -((*(int (__cdecl **)(int, int, int, unsigned int))(a1 + 64))(a1, 5, a1 + 274, (a2 + 1) & 0xFFFFFFFE) != 0);
    LOBYTE(v2) = v2 & 0xFD;
    return v2 - 1;
}
}
} // namespace gamemd

// 0x7C1D40
namespace gamemd {
int sub_7C1D40(int a1, int a2)
{
{
    int v2;
    v2 = *(int *)(a1 + 1892);
    if ( v2 )
  {
    if ( (*(int (__cdecl **)(int, int, int, unsigned int))(a1 + 64))(a1, 5, v2, (a2 + 1) & 0xFFFFFFFE) )
    return -4;
  }
    else if ( (*(int (__cdecl **)(int, int, int, unsigned int))(a1 + 64))(a1, 7, 1, (a2 + 1) & 0xFFFFFFFE) )
  {
    return -6;
  }
    return -1;
}
}
} // namespace gamemd

// 0x7C1D90
namespace gamemd {
int sub_7C1D90(int a1, int a2)
{
{
    int v3;
    int *v4;
    int v5;
    int v6;
    v3 = a2 + 1;
    v4 = *(int **)(a1 + 356);
    LOBYTE(v3) = (a2 + 1) & 0xFE;
    v5 = *(int *)(a1 + 1896) - v3;
    v6 = v5 + *v4;
    if ( (*(int (__cdecl **)(int, int, int, int))(a1 + 64))(a1, 5, v6, v3) )
    return -4;
    *(int *)(a1 + 372) = 0;
    v4[3] = 10;
    v4[4] = v5;
    *(int *)(a1 + 360) = v4;
    *(int *)(a1 + 356) = v4[1];
    if ( *(short *)(a1 + 232) < 3u )
    *(char *)(v6 + a2 + 1) = 0x80;
    return -1;
}
}
} // namespace gamemd

// 0x7C20B0
namespace gamemd {
int sub_7C20B0(int a1, int a2)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    int v8;
    char *v9;
    const void *v10;
    int v11;
    v3 = a2 + 1;
    v4 = *(int *)(a1 + 368);
    LOBYTE(v3) = (a2 + 1) & 0xFE;
    v5 = *(int *)(a1 + 1904) - v3;
    v6 = v5 + *(int *)(v4 + 8);
    if ( (*(int (__cdecl **)(int, int, int, int))(a1 + 64))(a1, 5, v6, v3) )
    return -4;
    v8 = *(int *)(v4 + 20) | 8;
    *(int *)(v4 + 36) = v5;
    *(int *)(v4 + 20) = v8;
    *(int *)(v4 + 40) = a2;
    if ( *(short *)(a1 + 232) < 3u )
    *(char *)(v6 + a2 + 1) = 0x80;
    if ( *(short *)(a1 + 1880) == 1 )
  {
    v9 = AudioCodec::Decode( (unsigned char *)(*(int *)(v4 + 8) + *(int *)(v4 + 36)), *(char **)(v4 + 8), *(int *)(a1 + 1904));
    *(int *)(v4 + 20) &= ~8u;
    v10 = *(const void **)(v4 + 8);
    *(int *)(v4 + 40) = v9;
    qmemcpy((void *)(a1 + 452), v10, (unsigned int)v9);
    v11 = *(int *)(a1 + 420);
    LOBYTE(v11) = v11 | 1;
    *(int *)(a1 + 448) = *(int *)(v4 + 40);
    *(int *)(a1 + 420) = v11;
  }
    return -1;
}
}
} // namespace gamemd

// 0x7C2180
namespace gamemd {
int sub_7C2180(int a1, unsigned int a2)
{
{
    unsigned int v4;
    int v5;
    unsigned int v7;
    int v8;
    v4 = a2 + 1;
    LOBYTE(v4) = (a2 + 1) & 0xFE;
    if ( (*(char *)(a1 + 132) & 1) != 0 && (v5 = *(int *)(a1 + 1932)) != 0 )
  {
    if ( v4 <= *(int *)(a1 + 1972) || *(int *)(a1 + 1936) )
    {
    if ( (*(int (__cdecl **)(int, int, int, unsigned int))(a1 + 64))(a1, 5, *(int *)(a1 + 1960), v4) )
      {
    return -4;
      }
    else
      {
    *(int *)(a1 + 1968) = a2;
    return -1;
      }
    }
    else if ( (*(int (__cdecl **)(int, int, int, unsigned int))(a1 + 64))(a1, 5, v5, v4) )
    {
    return -4;
    }
    else
    {
    v7 = 0;
    *(int *)(a1 + 1936) += a2;
    if ( a2 / *(int *)(a1 + 156) )
      {
    do
    *(char *)(*(int *)(a1 + 1940) + v7++) = 1;
    while ( v7 < a2 / *(int *)(a1 + 156) );
      }
    return -1;
    }
  }
    else
  {
    v8 = -((*(int (__cdecl **)(int, int, int, unsigned int))(a1 + 64))(a1, 7, 1, v4) != 0);
    LOBYTE(v8) = v8 & 0xFB;
    return v8 - 1;
  }
}
}
} // namespace gamemd

// 0x7C3430
namespace gamemd {
int Audio_Render_7C3430(DSurface * aP0, int a2, int a3, unsigned int a4)
{
{
    int v6;
    unsigned short v7;
    int result;
    if ( a2 >= *(unsigned short *)&aP0->__pad_518[508] || a2 < 0 || (aP0->__pad_2C[88] & 1) != 0 && !*(short *)&aP0->__pad_518[508] )
  {
    return -23;
  }
    v6 = *(int *)&aP0->__pad_518[516];
    v7 = *(short *)(v6 + 4 * a2 + 2);
    LOWORD(v6) = *(short *)(v6 + 4 * a2);
    *(int *)&aP0->__pad_11F[1] = a2;
    result = SeekAudioStream((int)aP0, (DSurface *)(unsigned short)v6, (DSurface *)v7, a3, a4);
    if ( result == -1 )
    *(int *)&aP0->__pad_11F[1] = a2;
    return result;
}
}
} // namespace gamemd

// 0x7C3950
namespace gamemd {
void sub_7C3950(int a1, int a2)
{
{
    *(int *)(a1 + 328) += a2;
}
}
} // namespace gamemd

// 0x7C7350
namespace gamemd {
int sub_7C7350(int a1)
{
{
    *(short *)(a1 + 4) = 0;
    *(int *)a1 = 0;
    *(short *)(a1 + 10) = 0;
    *(int *)(a1 + 6) = 0;
    return a1;
}
}
} // namespace gamemd

// 0x7C94BC
namespace gamemd {
size_t sub_7C94BC(void * Buffer, size_t ElementSize, size_t ElementCount, FILE * Stream)
{
{
    size_t v4;
    _lock_file(Stream);
    v4 = fread(Buffer, ElementSize, ElementCount, Stream);
    _unlock_file(Stream);
    return v4;
}
}
} // namespace gamemd

// 0x7C95D3
namespace gamemd {
size_t sub_7C95D3(void * Buffer, size_t ElementSize, size_t ElementCount, FILE * Stream)
{
{
    size_t v4;
    _lock_file(Stream);
    v4 = fwrite(Buffer, ElementSize, ElementCount, Stream);
    _unlock_file(Stream);
    return v4;
}
}
} // namespace gamemd
