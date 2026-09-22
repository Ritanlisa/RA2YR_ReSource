// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Vector_e4.hpp"

// 0x401910
namespace gamemd {
void AudioStream::ReleaseSubsystem()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = (int (__thiscall ***)(_DWORD, int))this->q044; /*0x401913*/
  this->q046 = 0; /*0x401919*/
  if ( v2 ) /*0x401925*/
  {
    result = (**v2)(v2, 1); /*0x40192b*/
    this->q044 = 0; /*0x40192d*/
  }
  return result; /*0x401937*/
}
}
} // namespace gamemd

// 0x4026B0
namespace gamemd {
void AudioStream::Stop()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  return (*(int (**)(void))(this->q0D4 + 44))();
}
}
} // namespace gamemd

// 0x4026F0
namespace gamemd {
void AudioStream::ReleaseChannel()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  (*(void (**)(void))(this->q0D4 + 40))(); /*0x4026f9*/
  this->q029 &= ~0x10u; /*0x402705*/
  return (*(int (__thiscall **)(_DWORD *))(this->q0D4 + 44))(this);
}
}
} // namespace gamemd

// 0x4033C0
namespace gamemd {
void AudioStream::DestroyAll()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int *Next; // edi
  int *i; // ebx

  ++*((_DWORD *)off_815E98 + 6); /*0x4033cc*/
  LinkedList::Init((_DWORD **)this); /*0x4033d1*/
  int v2 = *((_DWORD *)off_815E98 + 6) - 1; /*0x4033df*/
  *((_DWORD *)off_815E98 + 6) = v2; /*0x4033e2*/
  if ( v2 < 0 ) /*0x4033e5*/
    *((_DWORD *)off_815E98 + 6) = 0; /*0x4033ed*/
  Next = (int *)AudioQueue::GetNext((int *)this + 62); /*0x403401*/
  for ( i = Next; Next; i = Next ) /*0x403407*/
  {
    Next = (int *)AudioQueue::GetNextAlt(Next); /*0x403412*/
    AudioStream::Destructor(i); /*0x403414*/
  }
  (*(void (__thiscall **)(void *))(*(_DWORD *)(this->AudioStream_field_0x18 + 12) + 32))(this); /*0x403427*/
  *(_DWORD *)(this->AudioStream_field_0x18 + 4 * this->AudioStream_field_0x1C + 28) = 0; /*0x403430*/
  int v5 = this->AudioStream_field_0x18; /*0x403438*/
  int v6 = *(_DWORD *)(v5 + 16) - 1; /*0x40343e*/
  *(_DWORD *)(v5 + 16) = v6; /*0x403440*/
  if ( v6 < 0 ) /*0x403446*/
    *(_DWORD *)(this->AudioStream_field_0x18 + 16) = 0; /*0x40344b*/
  __3_YAXPAX_Z(this); /*0x403453*/
}
}
} // namespace gamemd

// 0x403820
namespace gamemd {
void AudioStream::Reset()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  *this = 0; /*0x403822*/
  this->q004 = 0; /*0x403824*/
  this->q008 = 0; /*0x403827*/
  this->q00C = 0; /*0x40382a*/
  this->q010 = 0; /*0x40382d*/
  this->q014 = 0; /*0x403830*/
  this->q018 = 0; /*0x403833*/
  this->q01C = 0; /*0x403836*/
  this->q028 = 0; /*0x403839*/
  this->q02C = 0; /*0x40383c*/
  this->q048 = 0; /*0x40383f*/
  this->q050 = 0; /*0x403842*/
  this->q040 = 5000; /*0x403845*/
  this->q044 = 0; /*0x40384c*/
  this->q030 = 0; /*0x40384f*/
  this->q034 = 0; /*0x403852*/
  this->q038 = 0; /*0x403855*/
  this->q03C = 0; /*0x403858*/
  this->q054 = 0; /*0x40385b*/
  this->q04C = 0; /*0x40385e*/
  return 0; /*0x403861*/
}
}
} // namespace gamemd

// 0x4038A0
namespace gamemd {
void AudioStream::ResetChannel(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  this->q008 = a2; /*0x4038a4*/
  this->q00C = a3; /*0x4038ab*/
  return a2; /*0x4038ae*/
}
}
} // namespace gamemd

// 0x4038C0
namespace gamemd {
void AudioStream::ResetChannel2(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  this->q020 = a2; /*0x4038c4*/
  this->q024 = a3; /*0x4038cb*/
  return a2; /*0x4038ce*/
}
}
} // namespace gamemd

// 0x404700
namespace gamemd {
void AudioStream::SetupPlayback()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v1 = this->AudioStream_field_0xA8; /*0x404700*/
  int v2 = 0; /*0x404707*/
  int v3 = 0; /*0x404709*/
  this->AudioStream_field_0x1E0 = v1; /*0x40470e*/
  if ( !v1 || ((unsigned char)this->AudioStream_field_0x18 & 0x20) != 0 ) /*0x40471a*/
    return 0; /*0x40471a*/
  int v4 = this->AudioStream_field_0x24; /*0x40471c*/
  if ( *(_DWORD *)(v4 + 88) >= 0x21u ) /*0x404727*/
    return this->AudioStream_field_0x28 + 28; /*0x404727*/
  if ( (*(_BYTE *)(v4 + 16) & 0x20) != 0 ) /*0x40472d*/
  {
    v3 = 1; /*0x404730*/
    this->AudioStream_field_0x1E0 = v1 - 1; /*0x404735*/
    this->AudioStream_field_0xAC = 0; /*0x40473b*/
  }
  else
  {
    this->AudioStream_field_0xAC = -1; /*0x404743*/
  }
  if ( (*(_BYTE *)(v4 + 16) & 0x40) != 0 ) /*0x404751*/
    --this->AudioStream_field_0x1E0; /*0x404753*/
  if ( this->q1E0 <= 0 ) /*0x404761*/
  {
    *(_DWORD *)(v4 + 12) = 0; /*0x404763*/
    return 0; /*0x40476a*/
  }
  int * v6 = (int *)(this + 352); /*0x40476b*/
  do /*0x404780*/
  {
    *v6 = v3; /*0x404771*/
    ++v2; /*0x404779*/
    ++v6; /*0x40477a*/
    ++v3; /*0x40477d*/
  }
  while ( v2 < this->AudioStream_field_0x1E0 ); /*0x404780*/
  if ( ((unsigned char)this->AudioStream_field_0x18 & 8) == 0 && (*(_BYTE *)(this->AudioStream_field_0x24 + 16) & 0x20) != 0 ) /*0x40478f*/
    return this->AudioStream_field_0x28 + 28; /*0x402030*/
  else
    return AudioStream::SelectRandom(); /*0x404793*/
}
}
} // namespace gamemd

// 0x4047B0
namespace gamemd {
void AudioStream::SelectRandom()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int v9; // ecx
  int v10; // ecx
  int v12; // eax
  _DWORD * v2 = this->q024; /*0x4047b3*/
  int v3 = v2[4]; /*0x4047b9*/
  if ( v2[22] >= 0x21u && ((unsigned char)this->AudioStream_field_0x18 & 0x20) == 0 ) /*0x4047c5*/
    return 0; /*0x4047c5*/
  int v4 = this->AudioStream_field_0x1E0; /*0x4047cb*/
  if ( v4 && ((unsigned char)this->AudioStream_field_0x18 & 0x20) == 0 ) /*0x4047d9*/
  {
    if ( (v3 & 2) != 0 ) /*0x4047de*/
    {
      int v5 = Random::Range(Randomizer_Global, 0, v4 - 1); /*0x4047ea*/
      int v6 = this->AudioStream_field_0x1E0 - 1; /*0x404803*/
      this->AudioStream_field_0xAC = *(_DWORD *)(this + 4 * v5 + 352); /*0x404804*/
      int v7 = v5; /*0x40480c*/
      if ( v5 < v6 ) /*0x40480f*/
      {
        _DWORD * v8 = (_DWORD *)(this + 4 * v5 + 352); /*0x404811*/
        do /*0x404825*/
        {
          ++v7; /*0x404816*/
          *v8 = v8[1]; /*0x404817*/
          ++v8; /*0x40481f*/
        }
        while ( v7 < this->AudioStream_field_0x1E0 - 1 ); /*0x404825*/
      }
    }
    else
    {
      ++this->AudioStream_field_0xAC; /*0x404829*/
    }
    --this->AudioStream_field_0x1E0; /*0x404836*/
    v9 = *(_DWORD *)(this + 4 * this->AudioStream_field_0xAC + 40); /*0x404842*/
    return v9 + 28; /*0x404847*/
  }
  if ( (v3 & 1) != 0 && ((unsigned char)this->AudioStream_field_0x18 & 0x20) == 0 ) /*0x404855*/
  {
    v10 = v2[19]; /*0x404857*/
    if ( !v10 || *(_DWORD *)(this + 484) < v10 - 1 ) /*0x404867*/
    {
      ++*(_DWORD *)(this + 484); /*0x404872*/
      return AudioStream::SetupPlayback(this); /*0x404879*/
    }
  }
  if ( (v3 & 0x40) == 0 ) /*0x404881*/
    return 0; /*0x404881*/
  if ( ((unsigned char)this->AudioStream_field_0x18 & 0x10) != 0 ) /*0x404887*/
    return 0; /*0x404887*/
  v12 = this->AudioStream_field_0xA8; /*0x404889*/
  if ( v12 < 1 ) /*0x404892*/
    return 0; /*0x4048aa*/
  this->AudioStream_field_0x18 |= 0x10u; /*0x40489a*/
  v9 = *(_DWORD *)(this + 4 * v12 + 36); /*0x40489d*/
  return v9 + 28; /*0x404878*/
}
}
} // namespace gamemd

// 0x404E70
namespace gamemd {
void AudioStream::CleanupChannels()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  void **v0; // esi
  void **v1; // edi
  _DWORD **v4; // edi
  void **v5; // [esp+8h] [ebp-4h]

  if ( g_AudioConfigState ) /*0x404e7c*/
  {
    v0 = (void **)g_AudioStreamObject; /*0x404e82*/
    if ( g_AudioStreamObject != &g_AudioStreamObject ) /*0x404e8e*/
    {
      do /*0x404fb6*/
      {
        v1 = (void **)*v0; /*0x404e96*/
        v5 = (void **)*v0; /*0x404e98*/
        if ( ((_BYTE)v0[6] & 1) == 0 ) /*0x404ea1*/
        {
          int v2 = (int)v0[44]; /*0x404ea7*/
          if ( v2 && v0 == *(void ***)(v2 + 192) ) /*0x404eb7*/
          {
            if ( ((_BYTE)v0[6] & 2) != 0 ) /*0x404ebd*/
              Voice::Stop(v2); /*0x404ebf*/
            AudioStream::ReleaseChannel(v0[44]); /*0x404eca*/
            *((_DWORD *)v0[44] + 48) = 0; /*0x404ed5*/
            *((_DWORD *)v0[44] + 47) = 0; /*0x404ee1*/
            *((_DWORD *)v0[44] + 45) = 0; /*0x404eed*/
            *((_DWORD *)v0[44] + 46) = 0; /*0x404ef9*/
            *((_DWORD *)v0[44] + 36) = 0; /*0x404f05*/
            *((_DWORD *)v0[44] + 38) = 0; /*0x404f11*/
            *((_DWORD *)v0[44] + 39) = 0; /*0x404f1d*/
            v0[44] = 0; /*0x404f23*/
          }
          int v3 = 0; /*0x404f2f*/
          if ( (int)v0[42] > 0 ) /*0x404f33*/
          {
            v4 = (_DWORD **)(v0 + 10); /*0x404f35*/
            do /*0x404f4d*/
            {
              RefCount::Decrement(*v4); /*0x404f3a*/
              *v4 = 0; /*0x404f3f*/
              ++v3; /*0x404f47*/
              ++v4; /*0x404f48*/
            }
            while ( v3 < (int)v0[42] ); /*0x404f4d*/
            v1 = v5; /*0x404f4f*/
          }
          v0[42] = 0; /*0x404f53*/
          v0[7] = (void *)4; /*0x404f59*/
          v0[78] = 0; /*0x404f60*/
          v0[158] = 0; /*0x404f66*/
          v0[6] = (void *)((unsigned int)v0[6] | 1); /*0x404f72*/
        }
        LinkedList::Init((_DWORD **)v0); /*0x404f77*/
        v0[78] = 0; /*0x404f7c*/
        if ( *((char *)v0 + 24) >= 0 ) /*0x404f87*/
          PushFrontLinkedListAlt(DataGlobal_87E2A8, (int)v0); /*0x404f9c*/
        else
          __3_YAXPAX_Z(v0); /*0x404f8a*/
        v0 = v1; /*0x404fa7*/
        --DataGlobal_87E28C; /*0x404fb0*/
      }
      while ( v1 != &g_AudioStreamObject ); /*0x404fb6*/
    }
  }
}
}
} // namespace gamemd

// 0x4079C0
namespace gamemd {
void AudioStream::ReadStreamAndSyncPosition()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v2 = this->q0C0; /*0x4079c4*/
  ReadAudioStream(*(int **)(v2 + 56), *(_DWORD *)(v2 + 144)); /*0x4079d3*/
  AudioStream::ReadStreamAndReturn(*(int **)(v2 + 56)); /*0x4079db*/
  int v3 = *(_DWORD *)(v2 + 160); /*0x4079e3*/
  int v4 = *(_DWORD *)(*(_DWORD *)(v2 + 56) + 8); /*0x4079e9*/
  if ( v3 <= v4 ) /*0x4079ee*/
    *(_DWORD *)(v2 + 144) = v3; /*0x4079f8*/
  else
    *(_DWORD *)(v2 + 144) = v4; /*0x4079f0*/
  int v5 = *(_DWORD *)(v2 + 144); /*0x4079fe*/
  this->q05D = v5; /*0x407a04*/
  this->q05E = v5; /*0x407a0a*/
  this->q05C = *(_DWORD *)(*(_DWORD *)(v2 + 56) + 4); /*0x407a16*/
  return 0; /*0x407a1c*/
}
}
} // namespace gamemd

// 0x407A30
namespace gamemd {
void AudioStream::SetPlaybackCallback()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v1 = this->q0C0; /*0x407a31*/
  if ( (*(_BYTE *)(v1 + 12) & 3) != 0 ) /*0x407a3b*/
  {
    *(_DWORD *)(v1 + 32) = Audio::Callback(); /*0x407a42*/
  int v2; // edx
    *(_DWORD *)(v1 + 36) = v2; /*0x407a45*/
  }
  int v3 = *(_DWORD *)(v1 + 12); /*0x407a48*/
  LOBYTE(v3) = v3 & 0xF8; /*0x407a4b*/
  *(_DWORD *)(v1 + 12) = v3; /*0x407a4d*/
  *(_DWORD *)(v1 + 128) = 0; /*0x407a50*/
  return 0; /*0x407a5c*/
}
}
} // namespace gamemd

// 0x407A60
namespace gamemd {
void AudioStream::ProcessCallback()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v1 = this->q0C0; /*0x407a61*/
  if ( (*(_BYTE *)(v1 + 12) & 3) != 0 ) /*0x407a6b*/
  {
    *(_DWORD *)(v1 + 32) = Audio::Callback(); /*0x407a72*/
  int v2; // edx
    *(_DWORD *)(v1 + 36) = v2; /*0x407a75*/
  }
  int v3 = *(_DWORD *)(v1 + 12); /*0x407a78*/
  LOBYTE(v3) = v3 & 0xF8; /*0x407a7b*/
  *(_DWORD *)(v1 + 12) = v3; /*0x407a7d*/
  *(_DWORD *)(v1 + 128) = 0; /*0x407a80*/
  return 0; /*0x407a8c*/
}
}
} // namespace gamemd

// 0x4084E0
namespace gamemd {
void AudioStream::InitNodeFields()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  *this = 0; /*0x4084e2*/
  this->q004 = 0; /*0x4084e4*/
  this->q014 = 0; /*0x4084e7*/
  this->q018 = 0; /*0x4084ea*/
  DListNode::Init(this + 2); /*0x4084f0*/
}
}
} // namespace gamemd

// 0x408D50
namespace gamemd {
void AudioStream::GetChannel()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  return this->q014; /*0x408d53*/
}
}
} // namespace gamemd

// 0x409310
namespace gamemd {
void AudioStream::ReadStreamAndReturn()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  ReadAudioStream(this, 0); /*0x409315*/
  return this->q008; /*0x40931d*/
}
}
} // namespace gamemd

// 0x4A33A0
namespace gamemd {
void AudioStream::ReadSamples(const void * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  _WORD *SamplePosition; // esi

  AudioStream *v2 = this; /*0x4a33a7*/
  int v3 = this->q01C; /*0x4a33ac*/
  if ( !v3 ) /*0x4a33b7*/
    return -1; /*0x4a33b7*/
  if ( *this == 2 )
  {
    if ( !DataGlobal_8A0E08 || !*((_DWORD *)DataGlobal_8A0E08 + 28) ) /*0x4a33d8*/
      return -1; /*0x4a33c6*/
  _DWORD v15[4]; // [esp+20h] [ebp-E0h] BYREF
    v15[2] = 256; /*0x4a33e7*/
    v15[3] = 256; /*0x4a33eb*/
  _DWORD v17[25]; // [esp+9Ch] [ebp-64h] BYREF
    memset(v17, 0, sizeof(v17)); /*0x4a33f8*/
    v15[0] = 0; /*0x4a3401*/
    v15[1] = 0; /*0x4a340f*/
    v17[0] = 100; /*0x4a3413*/
    return (*(int (__stdcall **)(int, _DWORD, _DWORD, _DWORD *, int, _DWORD *))(*(_DWORD *)v3 + 20))( /*0x4a3427*/
             v3,
             0,
             *((_DWORD *)DataGlobal_8A0E08 + 28),
             v15,
             512,
             v17);
  }
  else
  {
  _DWORD v16[27]; // [esp+30h] [ebp-D0h] BYREF
    memset(v16, 0, sizeof(v16)); /*0x4a3443*/
    v16[0] = 108; /*0x4a344e*/
    if ( (*(int (__stdcall **)(int, _DWORD, _DWORD *, int, _DWORD))(*(_DWORD *)v3 + 100))(v3, 0, v16, 2081, 0) )
    {
      return 1; /*0x4a3465*/
    }
    else
    {
      if ( *v2 ) /*0x4a3474*/
      {
        if ( *v2 == 1 ) /*0x4a347f*/
        {
          _DWORD * v5 = g_ZBufferDescriptor; /*0x4a3485*/
          if ( g_ZBufferDescriptor ) /*0x4a348d*/
          {
            if ( g_VisibleSurfaceDescriptor ) /*0x4a3499*/
            {
              _WORD * v6 = (_WORD *)v16[9]; /*0x4a34a6*/
              unsigned int v7 = 0; /*0x4a34aa*/
              int v8 = v16[4] >> 1; /*0x4a34ac*/
              int v14 = v16[4] >> 1; /*0x4a34b0*/
              unsigned int v13 = *((_DWORD *)g_ZBufferDescriptor + 11); /*0x4a34b4*/
              if ( v13 ) /*0x4a34b8*/
              {
                do /*0x4a353c*/
                {
                  SamplePosition = (_WORD *)Audio::GetSamplePosition((int)v5, 0, v7 - v5[1]); /*0x4a34d4*/
  _WORD *v10; // eax
                  v10 = (_WORD *)StreamClass::ReadAndSeek( /*0x4a34df*/
                                   (int)g_VisibleSurfaceDescriptor,
                                   0,
                                   v7 - *((_DWORD *)g_VisibleSurfaceDescriptor + 1));
                  if ( !SamplePosition || !v10 ) /*0x4a34ee*/
                    break; /*0x4a34ee*/
                  if ( v8 ) /*0x4a34f2*/
                  {
                    do /*0x4a352f*/
                    {
                      if ( *v10 < 8u ) /*0x4a34f8*/
                        *v6 = 0; /*0x4a3502*/
                      else
                        *v6 = *SamplePosition; /*0x4a34fd*/
                      v5 = g_ZBufferDescriptor; /*0x4a3507*/
                      _WORD * v11 = SamplePosition + 1; /*0x4a350d*/
                      ++v6; /*0x4a3510*/
                      if ( (unsigned int)(SamplePosition + 1) >= *((_DWORD *)g_ZBufferDescriptor + 7) ) /*0x4a3516*/
                        v11 = (_WORD *)((char *)v11 - *((_DWORD *)g_ZBufferDescriptor + 8)); /*0x4a3518*/
                      SamplePosition = v11; /*0x4a351b*/
                      if ( (unsigned int)++v10 >= *((_DWORD *)g_VisibleSurfaceDescriptor + 7) ) /*0x4a3529*/
                        v10 = (_WORD *)((char *)v10 - *((_DWORD *)g_VisibleSurfaceDescriptor + 8)); /*0x4a352b*/
                      --v8; /*0x4a352e*/
                    }
                    while ( v8 ); /*0x4a352f*/
                    v8 = v14; /*0x4a3531*/
                  }
                  else
                  {
                    v5 = g_ZBufferDescriptor; /*0x4a3540*/
                  }
                  ++v7; /*0x4a3539*/
                }
                while ( v7 < v13 ); /*0x4a353c*/
              }
              v2 = this; /*0x4a356f*/
            }
          }
        }
      }
      else if ( a2 ) /*0x4a3551*/
      {
        qmemcpy((void *)v16[9], a2, v16[4] * v2[3]); /*0x4a3564*/
      }
      return (*(int (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)v2[28] + 128))(v2[28], 0) != 0 ? 2 : 0;
    }
  }
}
}
} // namespace gamemd

// 0x4BEAC0
namespace gamemd {
void AudioStream::DrawWaveform(IUnknown * aP1, IUnknown * aP2, IUnknown * aP3, IUnknown * aP4, int a6, int a7, int a8)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  IUnknown **v9; // eax
  IUnknown *v10; // esi
  IUnknown *v11; // edi
  IUnknown *v12; // ecx
  MouseClass *v13; // eax
  MouseClass *v14; // ecx
  MouseClass *v17; // ebx
  MouseClass *v20; // ebp
  _WORD *SamplePosition; // edi
  TacticalClass *v38; // edx
  unsigned __int16 v41; // ax
  TacticalClass *v48; // edx
  unsigned __int16 v50; // ax
  unsigned __int16 v55; // ax
  int v73[2]; // [esp+34h] [ebp-48h] BYREF
  _WORD *v74; // [esp+3Ch] [ebp-40h] BYREF
  int v75; // [esp+40h] [ebp-3Ch]
  MouseClass *v76; // [esp+4Ch] [ebp-30h] BYREF
  int v77; // [esp+50h] [ebp-2Ch]
  MouseClass *aP1a; // [esp+5Ch] [ebp-20h] BYREF
  int v79; // [esp+60h] [ebp-1Ch]
  MouseClass *v80; // [esp+64h] [ebp-18h] BYREF
  int v81; // [esp+68h] [ebp-14h]
  IUnknown *v82; // [esp+6Ch] [ebp-10h] BYREF
  IUnknown *v83; // [esp+70h] [ebp-Ch]
  IUnknown *v84; // [esp+74h] [ebp-8h]
  IUnknown *v85; // [esp+78h] [ebp-4h]
  int v86; // [esp+80h] [ebp+4h]
  IUnknown *aP2a; // [esp+84h] [ebp+8h]
  IUnknown *aP2b; // [esp+84h] [ebp+8h]
  int aP2c; // [esp+84h] [ebp+8h]
  IUnknown *aP3a; // [esp+88h] [ebp+Ch]
  int aP3b; // [esp+88h] [ebp+Ch]
  IUnknown *aP4a; // [esp+8Ch] [ebp+10h]
  IUnknown *aP4b; // [esp+8Ch] [ebp+10h]
  IUnknown *aP4c; // [esp+8Ch] [ebp+10h]
  int v95; // [esp+90h] [ebp+14h]
  int v96; // [esp+90h] [ebp+14h]
  int v97; // [esp+94h] [ebp+18h]
  int v98; // [esp+94h] [ebp+18h]
  int v99; // [esp+94h] [ebp+18h]
  int v100; // [esp+98h] [ebp+1Ch]
  if ( a6 < 8 ) /*0x4bead5*/
    return 0; /*0x4bead5*/
  int * v8 = (int *)(*(int (__thiscall **)(void *, MouseClass **))(this->q1E0)(this, &v76); /*0x4beae2*/
  v9 = (IUnknown **)ClipRectIntersection(&v74, &aP1->field_0, v8, 0, 0); /*0x4beaf5*/
  v10 = *v9; /*0x4beafc*/
  v82 = *v9; /*0x4beafe*/
  v11 = v9[1]; /*0x4beb02*/
  v83 = v11; /*0x4beb05*/
  v84 = v9[2]; /*0x4beb0c*/
  v12 = v9[3]; /*0x4beb10*/
  v85 = v12; /*0x4beb15*/
  if ( !v84 && !v12 ) /*0x4beb1d*/
    return 0; /*0x4beb1d*/
  v13 = (MouseClass *)((char *)v10 + aP2->field_0); /*0x4beb3c*/
  v14 = (MouseClass *)((char *)v10 + aP3->field_0); /*0x4beb3e*/
  int v15 = a8; /*0x4beb40*/
  int v16 = (int)v11 + aP2->field_4; /*0x4beb47*/
  v17 = v13; /*0x4beb49*/
  int v18 = (int)v11 + aP3->field_4; /*0x4beb4b*/
  int v19 = a7; /*0x4beb4d*/
  aP1a = v13; /*0x4beb56*/
  v79 = v16; /*0x4beb5a*/
  v80 = v14; /*0x4beb5e*/
  v81 = v18; /*0x4beb62*/
  if ( (int)v13 > (int)v14 ) /*0x4beb66*/
  {
    v17 = v14; /*0x4beb68*/
    v19 = a8; /*0x4beb6a*/
    v15 = a7; /*0x4beb6c*/
    aP1a = v14; /*0x4beb73*/
    v79 = v18; /*0x4beb77*/
    v80 = v13; /*0x4beb7b*/
    v81 = v16; /*0x4beb7f*/
  }
  v76 = v80; /*0x4beb8f*/
  v20 = v17; /*0x4beb94*/
  int v21 = v79; /*0x4beb96*/
  v77 = v81; /*0x4beba2*/
  if ( !ClipLine((int *)&aP1a, (int *)&v80, (int *)&v82) ) /*0x4beba6*/
    return 0; /*0x4beba6*/
  aP3a = (IUnknown *)v15; /*0x4bebc1*/
  aP2a = (IUnknown *)v19; /*0x4bebc8*/
  if ( v80 != v76 || v81 != v77 ) /*0x4bebd5*/
  {
    v73[0] = (char *)v20 - (char *)v80; /*0x4bebe7*/
    v73[1] = v21 - v81; /*0x4bebeb*/
    v74 = (_WORD *)((char *)v20 - (char *)v76); /*0x4bebfb*/
    v75 = v21 - v77; /*0x4bebff*/
    Vector::TwoDMagnitudeMath((int *)&v74); /*0x4bec07*/
    int v22 = v22; /*0x4bec10*/
    Vector::TwoDMagnitudeMath(v73); /*0x4bec17*/
    int v23 = abs32(Math::RoundToInt((double)v23 / (double)v97 * (double)(v19 - v15))); /*0x4bec4d*/
    if ( v19 >= v15 ) /*0x4bec51*/
  unsigned int v24; // eax
      aP3a = (IUnknown *)(v19 - v24); /*0x4bec62*/
    else
      aP3a = (IUnknown *)(v19 + v24); /*0x4bec55*/
  }
  if ( aP1a != v20 || v79 != v21 ) /*0x4bec77*/
  {
    v75 = v79 - v77; /*0x4bec8d*/
    v74 = (_WORD *)((char *)aP1a - (char *)v76); /*0x4bec97*/
    v76 = (MouseClass *)((char *)v20 - (char *)v76); /*0x4bec9b*/
    v77 = v21 - v77; /*0x4bec9f*/
    Vector::TwoDMagnitudeMath((int *)&v76); /*0x4beca3*/
    int v25 = v25; /*0x4becac*/
    Vector::TwoDMagnitudeMath((int *)&v74); /*0x4becb3*/
    int v26 = abs32(Math::RoundToInt((double)v26 / (double)v98 * (double)(v19 - v15))); /*0x4bece9*/
    if ( v15 <= v19 ) /*0x4beced*/
  unsigned int v27; // eax
      aP2a = (IUnknown *)(v15 + v27); /*0x4becfc*/
    else
      aP2a = (IUnknown *)(v15 - v27); /*0x4becf1*/
  }
  (*(void (__thiscall **)(void *))(this->q01C)(this); /*0x4bed0b*/
  v99 = (*(int (__thiscall **)(void *, MouseClass *, int))(this->q05C)(this, aP1a, v79); /*0x4bed25*/
  if ( !*(_DWORD *)&DataGlobal_87F8E4[32096] ) /*0x4bed2e*/
    return 0; /*0x4bed2e*/
  int v28 = *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 4); /*0x4bed38*/
  v77 = v79; /*0x4bed3f*/
  SamplePosition = (_WORD *)Audio::GetSamplePosition( /*0x4bed56*/
                              *(int *)&DataGlobal_87F8E4[32096],
                              aP1a,
                              (MouseClass *)(v79 - v28));
  void * v30 = g_VisibleSurfaceDescriptor->field_4; /*0x4bed5c*/
  v77 = v79; /*0x4bed5f*/
  unsigned int v31 = StreamClass::ReadAndSeek((int)g_VisibleSurfaceDescriptor, aP1a, (MouseClass *)(v79 - (_DWORD)v30)); /*0x4bed67*/
  _WORD * v32 = (_WORD *)v31; /*0x4bed7a*/
  LOWORD(v31) = *(_WORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 4) /*0x4bed87*/
              + *(_WORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 36);
  int v65 = -1; /*0x4bed8b*/
  v100 = (int)aP2a + v31 - v79 - (_DWORD)v83; /*0x4bed99*/
  v86 = *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 40); /*0x4beda3*/
  if ( !v99 ) /*0x4bedb3*/
    return 0; /*0x4bf63e*/
  int v33 = 256 - a6; /*0x4bedd0*/
  int v68 = (a6 * LOBYTE(aP4->field_0)) >> 8; /*0x4bedd8*/
  int v67 = (a6 * BYTE1(aP4->field_0)) >> 8; /*0x4bede7*/
  int v66 = (a6 * BYTE2(aP4->field_0)) >> 8; /*0x4bedfa*/
  int v34 = (char *)v80 - (char *)aP1a; /*0x4bee06*/
  int v70 = (char *)v80 - (char *)aP1a; /*0x4bee0c*/
  v95 = v81 - v79; /*0x4bee19*/
  aP2b = (IUnknown *)((char *)aP3a - (char *)aP2a); /*0x4bee2b*/
  int v35 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 116))(this); /*0x4bee32*/
  int v64 = v35; /*0x4bee3c*/
  if ( v95 < 0 ) /*0x4bee42*/
  {
    v64 = -v35; /*0x4bee46*/
    v86 = -v86; /*0x4bee53*/
    v65 = 1; /*0x4bee5a*/
  }
  int v63 = 1; /*0x4bee69*/
  int v36 = abs32(v95); /*0x4bee7d*/
  if ( (int)aP2b < 0 ) /*0x4bee81*/
    v63 = -1; /*0x4bee83*/
  int v37 = abs32((int)aP2b); /*0x4bee8e*/
  aP2c = 2 * v34; /*0x4bee93*/
  v96 = 2 * v36; /*0x4bee9d*/
  aP3b = 2 * v37; /*0x4beea9*/
  if ( v37 <= v34 || v37 <= v36 ) /*0x4beeb8*/
  {
    if ( v34 <= v36 ) /*0x4bf149*/
    {
      aP4c = (IUnknown *)(aP2c - v36); /*0x4bf3be*/
      int v62 = aP3b - v36; /*0x4bf3d0*/
      if ( v36 > 0 ) /*0x4bf3d4*/
      {
        int v53 = 0; /*0x4bf3da*/
        int v72 = v36; /*0x4bf3dc*/
        v73[0] = 0; /*0x4bf3e0*/
        do /*0x4bf620*/
        {
          int v54 = (unsigned __int16)*v32; /*0x4bf3f1*/
          if ( (unsigned __int16)v100 < *SamplePosition && *v32 ) /*0x4bf3ec*/
          {
            v55 = *(_WORD *)(v53 + v99); /*0x4bf409*/
            LOBYTE(v76) = (unsigned __int8)(v55 >> g_CellDirectionOffsets[5952]) << g_CellDirectionOffsets[5956]; /*0x4bf428*/
            BYTE1(v76) = (unsigned __int8)(v55 >> g_CellDirectionOffsets[5968]) << g_CellDirectionOffsets[5972]; /*0x4bf439*/
            BYTE2(v76) = (unsigned __int8)(v55 >> g_CellDirectionOffsets[5960]) << g_CellDirectionOffsets[5964]; /*0x4bf456*/
            v53 = v73[0]; /*0x4bf4e1*/
            *(_WORD *)(v73[0] + v99) = ((v54 * (v68 + ((v33 * (unsigned __int8)v76) >> 8))) >> 7 >> g_CellDirectionOffsets[5956] << g_CellDirectionOffsets[5952]) /*0x4bf4e5*/
                                     | ((v54 * (v67 + ((v33 * BYTE1(v76)) >> 8))) >> 7 >> g_CellDirectionOffsets[5972] << g_CellDirectionOffsets[5968])
                                     | ((v54 * (v66 + ((v33 * BYTE2(v76)) >> 8))) >> 7 >> g_CellDirectionOffsets[5964] << g_CellDirectionOffsets[5960]);
          }
          if ( (int)aP4c > 0 ) /*0x4bf4f2*/
          {
            ++SamplePosition; /*0x4bf4f9*/
            v53 += 2; /*0x4bf4fc*/
            unsigned int v56 = *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 28); /*0x4bf4ff*/
            v73[0] = v53; /*0x4bf502*/
            if ( (unsigned int)SamplePosition >= v56 ) /*0x4bf508*/
              SamplePosition = (_WORD *)((char *)SamplePosition /*0x4bf50a*/
                                       - *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 32));
            if ( (unsigned int)++v32 >= *(_DWORD *)&g_VisibleSurfaceDescriptor->__pad_18[4] ) /*0x4bf518*/
              v32 = (_WORD *)((char *)v32 - *(_DWORD *)&g_VisibleSurfaceDescriptor->__pad_18[8]); /*0x4bf51a*/
            aP4c = (IUnknown *)((char *)aP4c - v96); /*0x4bf52d*/
          }
          if ( v62 > 0 ) /*0x4bf53a*/
          {
            v100 += v63; /*0x4bf54d*/
            v62 -= v96; /*0x4bf55d*/
          }
          aP4c = (IUnknown *)((char *)aP4c + aP2c); /*0x4bf579*/
          v62 += aP3b; /*0x4bf592*/
          v99 += v64; /*0x4bf596*/
          unsigned int v57 = (unsigned int)&SamplePosition[v86]; /*0x4bf5a7*/
          if ( v86 <= 0 ) /*0x4bf5ab*/
          {
            v74 = (_WORD *)v57; /*0x4bf5cd*/
            if ( v57 >= *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 24) ) /*0x4bf5d4*/
              int v58 = (int)v74; /*0x4bf5dd*/
            else
              v58 = v57 + *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 32); /*0x4bf5d9*/
            SamplePosition = (_WORD *)v58; /*0x4bf5e1*/
          }
          else
          {
            v74 = (_WORD *)v57; /*0x4bf5b3*/
            if ( v57 < *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 28) ) /*0x4bf5ba*/
              SamplePosition = v74; /*0x4bf5c1*/
            else
              SamplePosition = (_WORD *)(v57 - *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 32)); /*0x4bf5bc*/
          }
          v32 += v86; /*0x4bf5e7*/
          v100 += v65; /*0x4bf5e9*/
          if ( v86 <= 0 ) /*0x4bf5f2*/
          {
            _WORD * v59 = v32; /*0x4bf609*/
            if ( (unsigned int)v32 < *(_DWORD *)g_VisibleSurfaceDescriptor->__pad_18 ) /*0x4bf60e*/
              v59 = (_WORD *)((char *)v32 + *(_DWORD *)&g_VisibleSurfaceDescriptor->__pad_18[8]); /*0x4bf613*/
            v32 = v59; /*0x4bf615*/
          }
          else if ( (unsigned int)v32 >= *(_DWORD *)&g_VisibleSurfaceDescriptor->__pad_18[4] ) /*0x4bf5fc*/
          {
            v32 = (_WORD *)((char *)v32 - *(_DWORD *)&g_VisibleSurfaceDescriptor->__pad_18[8]); /*0x4bf5fe*/
          }
          --v72; /*0x4bf61c*/
        }
        while ( v72 ); /*0x4bf620*/
      }
    }
    else
    {
      aP4b = (IUnknown *)(v96 - v34); /*0x4bf158*/
      int v61 = aP3b - v34; /*0x4bf168*/
      int v47 = 0; /*0x4bf16c*/
      v73[0] = 0; /*0x4bf170*/
      if ( v34 > 0 ) /*0x4bf174*/
      {
        v48 = (TacticalClass *)g_VisibleSurfaceDescriptor; /*0x4bf17a*/
        do /*0x4bf39a*/
        {
          int v49 = (unsigned __int16)*v32; /*0x4bf18d*/
          if ( (unsigned __int16)v100 < *SamplePosition && *v32 ) /*0x4bf188*/
          {
            v50 = *(_WORD *)(v99 + 2 * v47); /*0x4bf1ac*/
            LOBYTE(v74) = (unsigned __int8)(v50 >> g_CellDirectionOffsets[5952]) << g_CellDirectionOffsets[5956]; /*0x4bf1c4*/
            BYTE1(v74) = (unsigned __int8)(v50 >> g_CellDirectionOffsets[5968]) << g_CellDirectionOffsets[5972]; /*0x4bf1e5*/
            BYTE2(v74) = (unsigned __int8)(v50 >> g_CellDirectionOffsets[5960]) << g_CellDirectionOffsets[5964]; /*0x4bf1f1*/
            v47 = v73[0]; /*0x4bf27c*/
            *(_WORD *)(v99 + 2 * v73[0]) = ((v49 * (v68 + ((v33 * (unsigned __int8)v74) >> 8))) >> 7 >> g_CellDirectionOffsets[5956] << g_CellDirectionOffsets[5952]) /*0x4bf280*/
                                         | ((v49 * (v66 + ((v33 * BYTE2(v74)) >> 8))) >> 7 >> g_CellDirectionOffsets[5964] << g_CellDirectionOffsets[5960])
                                         | ((v49 * (v67 + ((v33 * BYTE1(v74)) >> 8))) >> 7 >> g_CellDirectionOffsets[5972] << g_CellDirectionOffsets[5968]);
            v48 = (TacticalClass *)g_VisibleSurfaceDescriptor; /*0x4bf284*/
          }
          if ( (int)aP4b > 0 ) /*0x4bf293*/
          {
            v99 += v64; /*0x4bf2a6*/
            aP4b = (IUnknown *)((char *)aP4b - aP2c); /*0x4bf2b6*/
            SamplePosition += v86; /*0x4bf2c7*/
            if ( v86 <= 0 ) /*0x4bf2cb*/
            {
              _WORD * v51 = SamplePosition; /*0x4bf2e3*/
              if ( (unsigned int)SamplePosition < *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 24) ) /*0x4bf2e8*/
                v51 = (_WORD *)((char *)SamplePosition + *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 32)); /*0x4bf2ed*/
              SamplePosition = v51; /*0x4bf2ef*/
            }
            else if ( (unsigned int)SamplePosition >= *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 28) ) /*0x4bf2d6*/
            {
              SamplePosition = (_WORD *)((char *)SamplePosition /*0x4bf2d8*/
                                       - *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 32));
            }
            v48 = (TacticalClass *)g_VisibleSurfaceDescriptor; /*0x4bf2f5*/
            v100 += v65; /*0x4bf2fb*/
            v32 += v86; /*0x4bf309*/
            if ( v86 <= 0 ) /*0x4bf30d*/
            {
              _WORD * v52 = v32; /*0x4bf31c*/
              if ( (unsigned int)v32 < *(_DWORD *)g_VisibleSurfaceDescriptor->__pad_18 ) /*0x4bf320*/
                v52 = (_WORD *)((char *)v32 + *(_DWORD *)&g_VisibleSurfaceDescriptor->__pad_18[8]); /*0x4bf325*/
              v32 = v52; /*0x4bf327*/
            }
            else if ( (unsigned int)v32 >= *(_DWORD *)&g_VisibleSurfaceDescriptor->__pad_18[4] ) /*0x4bf312*/
            {
              v32 = (_WORD *)((char *)v32 - *(_DWORD *)&g_VisibleSurfaceDescriptor->__pad_18[8]); /*0x4bf314*/
            }
          }
          if ( v61 > 0 ) /*0x4bf32f*/
          {
            v100 += v63; /*0x4bf335*/
            v61 -= aP2c; /*0x4bf345*/
          }
          aP4b = (IUnknown *)((char *)aP4b + v96); /*0x4bf360*/
          v61 += aP3b; /*0x4bf373*/
          if ( (unsigned int)++SamplePosition >= *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 28) ) /*0x4bf37d*/
            SamplePosition = (_WORD *)((char *)SamplePosition /*0x4bf37f*/
                                     - *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 32));
          if ( (unsigned int)++v32 >= v48->referenceCount ) /*0x4bf38a*/
            v32 = (_WORD *)((char *)v32 - (unsigned int)v48->NeedsSaveOrLink); /*0x4bf38c*/
          v73[0] = ++v47; /*0x4bf396*/
        }
        while ( v47 < v70 ); /*0x4bf39a*/
      }
    }
  }
  else
  {
    int v60 = v96 - v37; /*0x4beec7*/
    aP4a = (IUnknown *)(aP2c - v37); /*0x4beed6*/
    if ( v37 > 0 ) /*0x4beedd*/
    {
  int v43; // eax
      v38 = (TacticalClass *)g_VisibleSurfaceDescriptor; /*0x4beee3*/
      int v39 = 0; /*0x4beee9*/
      int v71 = 0; /*0x4beeeb*/
      v73[0] = v37; /*0x4beeef*/
      while ( 1 ) /*0x4bef00*/
      {
        int v40 = (unsigned __int16)*v32; /*0x4bef00*/
        if ( (unsigned __int16)v100 < *SamplePosition && *v32 ) /*0x4beefb*/
        {
          v41 = *(_WORD *)(v39 + v99); /*0x4bef18*/
          LOBYTE(v74) = (unsigned __int8)(v41 >> g_CellDirectionOffsets[5952]) << g_CellDirectionOffsets[5956]; /*0x4bef37*/
          BYTE1(v74) = (unsigned __int8)(v41 >> g_CellDirectionOffsets[5968]) << g_CellDirectionOffsets[5972]; /*0x4bef58*/
          BYTE2(v74) = (unsigned __int8)(v41 >> g_CellDirectionOffsets[5960]) << g_CellDirectionOffsets[5964]; /*0x4bef68*/
          v39 = v71; /*0x4befe7*/
          *(_WORD *)(v71 + v99) = ((v40 * (v68 + ((v33 * (unsigned __int8)v74) >> 8))) >> 7 >> g_CellDirectionOffsets[5956] << g_CellDirectionOffsets[5952]) /*0x4beff4*/
                                | ((v40 * (v66 + ((v33 * BYTE2(v74)) >> 8))) >> 7 >> g_CellDirectionOffsets[5964] << g_CellDirectionOffsets[5960])
                                | ((v40 * (v67 + ((v33 * BYTE1(v74)) >> 8))) >> 7 >> g_CellDirectionOffsets[5972] << g_CellDirectionOffsets[5968]);
          v38 = (TacticalClass *)g_VisibleSurfaceDescriptor; /*0x4beff8*/
        }
        if ( v60 <= 0 ) /*0x4bf004*/
        {
          v43 = v100; /*0x4bf0a9*/
          goto LABEL_45; /*0x4bf0a9*/
        }
        v99 += v64; /*0x4bf017*/
        v60 -= aP3b; /*0x4bf027*/
        SamplePosition += v86; /*0x4bf035*/
        if ( v86 <= 0 ) /*0x4bf039*/
        {
          _WORD * v42 = SamplePosition; /*0x4bf050*/
          if ( (unsigned int)SamplePosition < *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 24) ) /*0x4bf055*/
            v42 = (_WORD *)((char *)SamplePosition + *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 32)); /*0x4bf05a*/
          SamplePosition = v42; /*0x4bf05c*/
        }
        else if ( (unsigned int)SamplePosition >= *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 28) ) /*0x4bf043*/
        {
          SamplePosition = (_WORD *)((char *)SamplePosition /*0x4bf045*/
                                   - *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 32));
        }
        v38 = (TacticalClass *)g_VisibleSurfaceDescriptor; /*0x4bf065*/
        v32 += v86; /*0x4bf06b*/
        if ( v86 <= 0 ) /*0x4bf06f*/
          break; /*0x4bf06f*/
        if ( (unsigned int)v32 < *(_DWORD *)&g_VisibleSurfaceDescriptor->__pad_18[4] ) /*0x4bf074*/
          goto LABEL_43; /*0x4bf074*/
        v32 = (_WORD *)((char *)v32 - *(_DWORD *)&g_VisibleSurfaceDescriptor->__pad_18[8]); /*0x4bf07d*/
        v43 = v65 + v100; /*0x4bf086*/
LABEL_45:
        if ( (int)aP4a > 0 ) /*0x4bf0b9*/
        {
          ++SamplePosition; /*0x4bf0c1*/
          v39 += 2; /*0x4bf0c4*/
          v71 = v39; /*0x4bf0ca*/
          if ( (unsigned int)SamplePosition >= *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 28) ) /*0x4bf0ce*/
            SamplePosition = (_WORD *)((char *)SamplePosition /*0x4bf0d0*/
                                     - *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 32));
          if ( (unsigned int)++v32 >= v38->referenceCount ) /*0x4bf0db*/
            v32 = (_WORD *)((char *)v32 - (unsigned int)v38->NeedsSaveOrLink); /*0x4bf0dd*/
          aP4a = (IUnknown *)((char *)aP4a - aP3b); /*0x4bf0e7*/
        }
        v100 = v63 + v43; /*0x4bf0fb*/
        aP4a = (IUnknown *)((char *)aP4a + aP2c); /*0x4bf112*/
        bool v45 = v73[0] == 1; /*0x4bf123*/
        v60 += v96; /*0x4bf124*/
        --v73[0]; /*0x4bf128*/
        if ( v45 ) /*0x4bf12c*/
          goto LABEL_52; /*0x4bf12c*/
      }
      _WORD * v44 = v32; /*0x4bf08d*/
      if ( (unsigned int)v32 < *(_DWORD *)g_VisibleSurfaceDescriptor->__pad_18 ) /*0x4bf091*/
        v44 = (_WORD *)((char *)v32 + *(_DWORD *)&g_VisibleSurfaceDescriptor->__pad_18[8]); /*0x4bf096*/
      v32 = v44; /*0x4bf098*/
LABEL_43:
      v43 = v65 + v100; /*0x4bf09a*/
      goto LABEL_45; /*0x4bf0a7*/
    }
  }
LABEL_52:
  (*(void (__thiscall **)(void *))(this->q018)(this); /*0x4bf132*/
  return 1; /*0x4bf13b*/
}
}
} // namespace gamemd

// 0x7BD270
namespace gamemd {
void AudioStream::SetFlag4C()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  (*(void (__cdecl **)(int, int, _DWORD, _DWORD))(this + 88))(this, 4, 0, 0); /*0x7bd27a*/
  result = *(_DWORD *)(this + 1980); /*0x7bd27d*/
  LOBYTE(result) = result | 0x40; /*0x7bd286*/
  *(_DWORD *)(this + 1980) = result; /*0x7bd288*/
  return result; /*0x7bd28e*/
}
}
} // namespace gamemd

// 0x7BD2D0
namespace gamemd {
void AudioStream::CalcReadPos()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  unsigned int i; // ecx

  if ( (*(_BYTE *)(this + 132) & 1) == 0 ) /*0x7bd2e1*/
    return -1; /*0x7bd2e1*/
  if ( !*(_DWORD *)(this + 1932) ) /*0x7bd2e7*/
    return -1; /*0x7bd2e7*/
  int v2 = *(_DWORD *)(this + 1968); /*0x7bd2f5*/
  if ( !v2 ) /*0x7bd2fd*/
    return -1; /*0x7bd2fd*/
  int v3 = *(_DWORD *)(this + 1964); /*0x7bd303*/
  int v4 = *(_DWORD *)(this + 1936); /*0x7bd30f*/
  unsigned int v5 = this->q09C; /*0x7bd315*/
  char * v6 = (char *)(v3 + *(_DWORD *)(this + 1960)); /*0x7bd31b*/
  unsigned int v7 = v2 - v3; /*0x7bd31d*/
  unsigned int v17 = *(_DWORD *)(this + 1936) / v5; /*0x7bd32b*/
  unsigned int v8 = (v4 + v7) / v5; /*0x7bd332*/
  unsigned int v9 = *(_DWORD *)(this + 1948); /*0x7bd334*/
  if ( v8 >= v9 ) /*0x7bd33c*/
    v8 -= v9; /*0x7bd33e*/
  if ( *(_BYTE *)(*(_DWORD *)(this + 1940) + v8) == 1 ) /*0x7bd34a*/
  {
    ++*(_DWORD *)(this + 396); /*0x7bd355*/
    return -11; /*0x7bd365*/
  }
  if ( v17 > v8 ) /*0x7bd36a*/
  {
    unsigned int v13 = this->AudioStream_field_0x98 - v4; /*0x7bd3cd*/
    qmemcpy((void *)(*(_DWORD *)(this + 1932) + v4), v6, v13); /*0x7bd3e4*/
    qmemcpy(*(void **)(this + 1932), &v6[v13], v7 - v13); /*0x7bd404*/
    unsigned int v14 = v17; /*0x7bd40f*/
    unsigned int v15 = *(_DWORD *)(this + 1948); /*0x7bd413*/
    *(_DWORD *)(this + 1936) = v7 - v13; /*0x7bd41b*/
    *(_DWORD *)(this + 1968) = 0; /*0x7bd421*/
    *(_DWORD *)(this + 1964) = 0; /*0x7bd427*/
    if ( v17 < v15 ) /*0x7bd42d*/
    {
      do /*0x7bd443*/
      {
        ++v14; /*0x7bd435*/
        *(_BYTE *)(*(_DWORD *)(this + 1940) + v14 - 1) = 1; /*0x7bd436*/
      }
      while ( v14 < *(_DWORD *)(this + 1948) ); /*0x7bd443*/
    }
    for ( i = 0; i < v8; *(_BYTE *)(*(_DWORD *)(this + 1940) + i - 1) = 1 ) /*0x7bd449*/
      ++i; /*0x7bd451*/
    return -1; /*0x7bd459*/
  }
  qmemcpy((void *)(*(_DWORD *)(this + 1932) + v4), v6, v7); /*0x7bd37b*/
  int v11 = *(_DWORD *)(this + 1936); /*0x7bd384*/
  *(_DWORD *)(this + 1968) = 0; /*0x7bd38c*/
  *(_DWORD *)(this + 1964) = 0; /*0x7bd392*/
  unsigned int v12 = v17; /*0x7bd398*/
  *(_DWORD *)(this + 1936) = v7 + v11; /*0x7bd3a0*/
  if ( v17 >= v8 ) /*0x7bd3a6*/
    return -1; /*0x7bd45e*/
  do /*0x7bd3ba*/
  {
    ++v12; /*0x7bd3b2*/
    *(_BYTE *)(*(_DWORD *)(this + 1940) + v12 - 1) = 1; /*0x7bd3b5*/
  }
  while ( v12 < v8 ); /*0x7bd3ba*/
  return -1; /*0x7bd352*/
}
}
} // namespace gamemd

// 0x7BEA80
namespace gamemd {
void AudioStream::ProcessStream()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  AudioStream *v1; // esi
  signed int Position; // ecx
  void (__cdecl *v25)(int, int, _DWORD, _DWORD); // eax
  int (__cdecl *v29)(_DWORD, _DWORD); // eax

  v1 = this; /*0x7bea86*/
  int v2 = *(_DWORD *)(this + 416); /*0x7bea8d*/
  _DWORD * v3 = (_DWORD *)(this + 416); /*0x7bea93*/
  int v4 = this + 64; /*0x7bea99*/
  if ( (*(_BYTE *)(v2 + 20) & 1) != 0 )
  {
    if ( (*(_BYTE *)(this + 420) & 0x10) != 0 ) /*0x7beafb*/
    {
      *(_DWORD *)(this + 1744) = *(_DWORD *)(*(_DWORD *)(this + 416) + 28); /*0x7beb04*/
      *(_DWORD *)(this + 420) |= 8u; /*0x7beb10*/
      int v10 = *(_DWORD *)(v2 + 20); /*0x7beb13*/
      LOBYTE(v10) = v10 | 0x80; /*0x7beb16*/
      *(_DWORD *)(v2 + 20) = v10; /*0x7beb18*/
      return -1; /*0x7beb23*/
    }
    if ( (*(_BYTE *)(this + 132) & 2) != 0 ) /*0x7beb28*/
    {
      *(_DWORD *)(this + 1744) = *(_DWORD *)(v2 + 28); /*0x7beb2d*/
      CalcAudioStreamOffset(this, 60 * *(_DWORD *)(v2 + 28) / *(_DWORD *)(this + 116)); /*0x7beb48*/
      return -1; /*0x7beb57*/
    }
    Position = AudioStream::GetPosition(this); /*0x7beb5f*/
    int v12 = v3[332]; /*0x7beb66*/
    if ( (v3[1] & 2) != 0 ) /*0x7beb6c*/
      int v13 = v12 + 2; /*0x7beb71*/
    else
      v13 = v12 + 1; /*0x7beb6e*/
    if ( Position >= 60 * v13 / *(_DWORD *)(v4 + 52) )
    {
      int v15 = Audio_Process_7BEE20(v3, v2, Position); /*0x7bebfd*/
      int v35 = v15; /*0x7bec04*/
      if ( (*(_BYTE *)(v4 + 64) & 4) != 0 ) /*0x7bec08*/
      {
        v3[332] = *(_DWORD *)(*v3 + 28); /*0x7bec15*/
        return -1; /*0x7bec1f*/
      }
      int v33 = *(_DWORD *)(v4 + 48) / 3 - 1; /*0x7bec35*/
      if ( v33 < 0 ) /*0x7bec39*/
        v33 = 0; /*0x7bec3b*/
      if ( *(_DWORD *)(v2 + 28) != v15 )
      {
        do
        {
  int v19; // edi
          if ( (*(_BYTE *)(v2 + 20) & 2) != 0 ) /*0x7bec50*/
            break; /*0x7bec50*/
          int v16 = v1->q050; /*0x7bec58*/
          int v17 = *(_DWORD *)(*v3 + 28); /*0x7bec5e*/
          int v18 = v3[332]; /*0x7bec61*/
          if ( v17 < v18 || v17 > v16 )
          {
            int v20 = v16 - v3[332]; /*0x7bec8a*/
            if ( v20 >= 0 )
            {
              int v21 = v17 - *(_DWORD *)(v1 + 296); /*0x7bec92*/
              v19 = v21 >= 0 ? v21 + v20 + 1 : v1->q01C / 3;
            }
            else
            {
              v19 = v1->q01C / 3; /*0x7bec8e*/
            }
          }
          else
          {
            v19 = v17 - v18; /*0x7bec6f*/
          }
          if ( v19 > v33 ) /*0x7beca6*/
            break; /*0x7beca6*/
          int v22 = *(_DWORD *)(v2 + 20); /*0x7becac*/
          if ( (v22 & 4) != 0 ) /*0x7becb1*/
          {
            if ( (v22 & 8) != 0 ) /*0x7becb5*/
            {
              *(_DWORD *)(v2 + 40) = AudioCodec::Decode( /*0x7beccd*/
                                       (unsigned __int8 *)(*(_DWORD *)(v2 + 8) + *(_DWORD *)(v2 + 36)),
                                       *(char **)(v2 + 8),
                                       *(_DWORD *)(v1 + 1904));
              int v23 = *(_DWORD *)(v2 + 20); /*0x7becd0*/
              LOBYTE(v23) = v23 & 0xF7; /*0x7becd6*/
              *(_DWORD *)(v2 + 20) = v23; /*0x7becd8*/
            }
            qmemcpy(v3 + 9, *(const void **)(v2 + 8), *(_DWORD *)(v2 + 40)); /*0x7bece9*/
            int v24 = v3[1]; /*0x7becf2*/
            v1 = this; /*0x7becf8*/
            LOBYTE(v24) = v24 | 1; /*0x7becfc*/
            v3[8] = *(_DWORD *)(v2 + 40); /*0x7becfe*/
            v3[1] = v24; /*0x7bed01*/
          }
          v25 = *(void (__cdecl **)(int, int, _DWORD, _DWORD))(v1 + 72); /*0x7bed04*/
          if ( v25 ) /*0x7bed09*/
          {
            if ( (*(_DWORD *)(v2 + 20) & 0x100) != 0 ) /*0x7bed11*/
            {
              v25(v1, 4, *(_DWORD *)(v2 + 28), v1->q048); /*0x7bed21*/
              int v26 = *(_DWORD *)(v2 + 20); /*0x7bed23*/
              BYTE1(v26) &= ~1u; /*0x7bed29*/
              *(_DWORD *)(v2 + 20) = v26; /*0x7bed2c*/
            }
            if ( (*(_DWORD *)(v2 + 20) & 0x200) != 0 ) /*0x7bed35*/
            {
              (*(void (__cdecl **)(int, int, _DWORD, _DWORD))(v1 + 72))( /*0x7bed45*/
                v1,
                5,
                *(_DWORD *)(v2 + 28),
                v1->q048);
              int v27 = *(_DWORD *)(v2 + 20); /*0x7bed48*/
              BYTE1(v27) &= ~2u; /*0x7bed4e*/
              *(_DWORD *)(v2 + 20) = v27; /*0x7bed51*/
            }
            if ( (*(_DWORD *)(v2 + 20) & 0x400) != 0 ) /*0x7bed5a*/
            {
              Audio_Process_7BE830(v1, *(_DWORD *)(v2 + 28)); /*0x7bed61*/
              int v28 = *(_DWORD *)(v2 + 20); /*0x7bed66*/
              BYTE1(v28) &= ~4u; /*0x7bed69*/
              *(_DWORD *)(v2 + 20) = v28; /*0x7bed6c*/
            }
          }
          v29 = *(int (__cdecl **)(_DWORD, _DWORD))(v1 + 76); /*0x7bed6f*/
          if ( v29 && v29(0, *(_DWORD *)(v2 + 28)) ) /*0x7bed7c*/
            return -2; /*0x7bedd6*/
          int v30 = *(_DWORD *)(v2 + 20); /*0x7bed85*/
          *(_DWORD *)(v2 + 20) = 0; /*0x7bed88*/
          *(_DWORD *)(v2 + 24) = v30; /*0x7bed8f*/
          v2 = *(_DWORD *)(v2 + 12); /*0x7bed92*/
          *v3 = v2; /*0x7bed95*/
          ++v1->q01C; /*0x7bed9b*/
          if ( (*(_BYTE *)(v2 + 20) & 1) == 0 ) /*0x7beda3*/
          {
            char v31 = *((_BYTE *)v3 + 4); /*0x7beddd*/
            ++v3[334]; /*0x7bede3*/
            if ( (v31 & 4) != 0 && (v1->q054 & 4) == 0 ) /*0x7bedf2*/
            {
              int v32 = *(_DWORD *)(*v3 + 16); /*0x7bedf9*/
              *v3 = v32; /*0x7bedfc*/
              *(_DWORD *)(v32 + 20) = *(_DWORD *)(v32 + 24); /*0x7bee02*/
              return -1; /*0x7bee0b*/
            }
            return -9; /*0x7bedf2*/
          }
        }
        while ( *(_DWORD *)(v2 + 28) != v35 );
      }
      v3[332] = *(_DWORD *)(*v3 + 28); /*0x7bedb4*/
      return -1; /*0x7bedb9*/
    }
    if ( (v3[1] & 4) != 0 ) /*0x7beb89*/
    {
      if ( Audio_Process_7BEE20(v3, v2, Position) == v3[332] && (*(_BYTE *)(v2 + 20) & 0x80) != 0 ) /*0x7beba9*/
      {
        v3[332] = *(_DWORD *)(v2 + 28); /*0x7bebb0*/
        return -1; /*0x7bebb7*/
      }
      else
      {
        int v14 = v3[1] | 8; /*0x7bebc5*/
        v3[332] = *(_DWORD *)(v2 + 28); /*0x7bebc8*/
        v3[1] = v14; /*0x7bebce*/
        *(_DWORD *)(v2 + 20) |= 0x80u; /*0x7bebd7*/
        return -1; /*0x7bebdc*/
      }
    }
    else
    {
      return -10; /*0x7bebe7*/
    }
  }
  else
  {
    char v5 = *(_BYTE *)(this + 420); /*0x7beaa8*/
    ++*(_DWORD *)(this + 1752); /*0x7beaae*/
    if ( (v5 & 4) != 0 && (this->q054 & 4) == 0 ) /*0x7beac1*/
    {
      int v6 = *(_DWORD *)(v2 + 16); /*0x7beac9*/
      *v3 = v6; /*0x7beacc*/
      *(_DWORD *)(v6 + 20) = *(_DWORD *)(v6 + 24); /*0x7bead1*/
      int v7 = *(_DWORD *)(this + 420); /*0x7bead4*/
      if ( (v7 & 0x10) != 0 ) /*0x7bead9*/
      {
        LOBYTE(v7) = v7 | 8; /*0x7beadf*/
        *(_DWORD *)(this + 420) = v7; /*0x7beae2*/
        int v8 = *(_DWORD *)(v2 + 20); /*0x7beae5*/
        LOBYTE(v8) = v8 | 0x80; /*0x7beae8*/
        *(_DWORD *)(v2 + 20) = v8; /*0x7beaeb*/
        return -1; /*0x7beaf6*/
      }
      return -1; /*0x7bedc9*/
    }
    return -9; /*0x7bee0c*/
  }
}
}
} // namespace gamemd

// 0x7C3960
namespace gamemd {
unsigned int AudioStream::GetPosition()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  return (unsigned int)(60 * (*(int (__cdecl **)(int))(this + 80))(this)) / this->q1E0 /*0x7c3982*/
       + *(_DWORD *)(this + 328);
}
}
} // namespace gamemd

// 0x402550
namespace gamemd {
void AudioStream::Destructor()
{
{
    void (__thiscall *v2)(int *);
    (*(void (**)(void))(*(this + 53) + 40))();
    if ( (*(char *)(this + 41) & 5) != 0 )
    (*(void (__thiscall **)(int *))(*(this + 53) + 16))(this);
    (*(void (__thiscall **)(int *))(*(this + 53) + 44))(this);
    v2 = (void (__thiscall *)(int *))*(this + 47);
    if ( v2 )
    v2(this);
    *(this + 90) = 0;
    AudioStream::InitListAndCounters((int)this);
    (*(void (__thiscall **)(int *))(*(this + 53) + 8))(this);
    __3_YAXPAX_Z(this);
}
}
} // namespace gamemd

// 0x402800
namespace gamemd {
int AudioStream::CheckFormatChanged(int a1, const void * a2)
{
{
    void *v3;
    int result;
    v3 = (void *)(a1 + 380);
    if ( !memcmp(a2, (const void *)(a1 + 380), 0x20u) )
  {
    *(int *)(a1 + 412) = 0;
    return 0;
  }
    else
  {
    *(int *)(a1 + 412) = 1;
    result = *(int *)(a1 + 412);
    qmemcpy(v3, a2, 0x20u);
  }
    return result;
}
}
} // namespace gamemd

// 0x4028B0
namespace gamemd {
int AudioStream::InitListAndCounters()
{
{
    int v2;
    int result;
    v2 = this->AudioStream_field_0xAC;
    LinkedList::Init((int **)this);
    --*(int *)(v2 + 240);
    ++*(int *)(v2 + 260);
    LinkedList::Init((int **)this);
    result = *(int *)(v2 + 260) - 1;
    *(int *)(v2 + 260) = result;
    if ( result < 0 )
    *(int *)(v2 + 260) = 0;
    return result;
}
}
} // namespace gamemd

// 0x404FD0
namespace gamemd {
int AudioStream::UpdateTimers()
{
{
    __int64 v0;
    void **v1;
    LODWORD(v0) = g_AudioConfigState;
    if ( g_AudioConfigState )
  {
    v1 = (void **)g_AudioStreamObject;
    if ( g_AudioStreamObject != &g_AudioStreamObject )
    {
    do
      {
    LODWORD(v0) = v1[86];
    if ( !(int)v0 )
        {
    LODWORD(v0) = v1[7];
    if ( (int)v0 == 2 )
          {
    LODWORD(v0) = Audio::Callback();
    *((__int64 *)(v1) + 40) -= v0;
          }
        }
    v1[86] = (char *)v1[86] + 1;
    v1 = (void **)*v1;
      }
    while ( v1 != &g_AudioStreamObject );
    }
  }
    return v0;
}
}
} // namespace gamemd

// 0x405040
namespace gamemd {
int AudioStream::UpdateCountdowners()
{
{
    __int64 v0;
    void **v1;
    int v2;
    __int64 v3;
    LODWORD(v0) = g_AudioConfigState;
    if ( g_AudioConfigState )
  {
    v1 = (void **)g_AudioStreamObject;
    if ( g_AudioStreamObject != &g_AudioStreamObject )
    {
    do
      {
    LODWORD(v0) = v1[86];
    if ( (int)v0 )
        {
    v2 = (int)v1[86] - 1;
    v1[86] = (void *)v2;
    if ( v2 < 0 )
    v1[86] = 0;
    LODWORD(v0) = v1[86];
    if ( !(int)v0 )
          {
    LODWORD(v0) = v1[7];
    if ( (int)v0 == 2 )
            {
    LODWORD(v3) = Audio::Callback();
    v0 = *((__int64 *)(v1) + 40) + v3;
    *((__int64 *)(v1) + 40) = v0;
            }
          }
        }
    v1 = (void **)*v1;
      }
    while ( v1 != &g_AudioStreamObject );
    }
  }
    return v0;
}
}
} // namespace gamemd

// 0x407860
namespace gamemd {
char * AudioStream::Constructor(unsigned long long a2)
{
{
    int v3;
    char *v4;
    int v5;
    int v6;
    int v7;
    if ( !this )
    return 0;
    v3 = HIDWORD(a2);
    if ( a2 < 0x1B58 )
  {
    LODWORD(a2) = 7000;
    v3 = 0;
  }
    v4 = (char *)__2_YAPAXI_Z(0xF8u);
    memset(v4, 0, 0xF8u);
    DListNode::InitEmpty(v4);
    *((int *)(v4) + 4) = this;
    v5 = sub_4036C0();
    *((int *)(v4) + 5) = v5;
    *(int *)(v5 + 148) = 0;
    *(int *)(*((int *)(v4) + 5) + 144) = 0;
    *(int *)(*((int *)(v4) + 5) + 152) = 0;
    *(int *)(*((int *)(v4) + 5) + 156) = 0;
    *((int *)(v4) + 6) = a2;
    *((int *)(v4) + 7) = v3;
    AudioStream::InitNodeFields(v4 + 60);
    Struct::ZeroInit32(v4 + 92);
    *((int *)(v4) + 32) = 0;
    *((int *)(v4) + 34) = 0;
    strcpy(v4 + 164, DataGlobal_8162C8);
    v6 = *((int *)(v4) + 5);
    if ( v6 && (*(int *)(v6 + 192) = v4, *(int *)(*((int *)(v4) + 5) + 176) = AudioStream::ReadStreamAndSyncPosition, *(int *)(*((int *)(v4) + 5) + 184) = AudioStream::SetPlaybackCallback, *(int *)(*((int *)(v4) + 5) + 188) = AudioStream::ProcessCallback, v7 = sub_4087F0(), (*((int *)(v4) + 12) = v7) != 0) )
  {
    EnterCriticalSection(&CriticalSection);
    InsertBeforeLinkedList(DataGlobal_87E810, v4);
    LeaveCriticalSection(&CriticalSection);
    return v4;
  }
    else
  {
    AudioSample::Destructor(v4);
    return 0;
  }
}
}
} // namespace gamemd
