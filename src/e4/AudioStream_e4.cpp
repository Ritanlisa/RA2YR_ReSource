// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/LinkedList_flat_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/RefCount_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Init_e4.hpp"

// 0x401910
namespace gamemd {
int AudioStream::ReleaseSubsystem()
{
  int (__thiscall ***v2)(unsigned int, int); // ecx
  int result; // eax

  v2 = (int (__thiscall ***)(unsigned int, int))*(&this->u32_188); /*0x401913*/
  *(&this->q01C0) = 0; /*0x401919*/
  if ( v2 ) /*0x401925*/
  {
    result = (**v2)(v2, 1); /*0x40192b*/
    *(&this->u32_188) = 0; /*0x40192d*/
  }
  return result; /*0x401937*/
}
}
// 0x4026B0
namespace gamemd {
int AudioStream::Stop()
{
  return (*(int (**)(void))(*(&this->u32_143) + 44))();
}
}
// 0x4026F0
namespace gamemd {
int AudioStream::ReleaseChannel()
{
  (*(void (**)(void))(*(&this->u32_143) + 40))(); /*0x4026f9*/
  *(&this->u32_101) &= ~0x10u; /*0x402705*/
  return 0;
}
}
// 0x4033C0
namespace gamemd {
void AudioStream::DestroyAll()
{
  int v2; // eax
  int *Next; // edi
  int *i; // ebx
  int v5; // eax
  int v6; // ecx

  ++*((unsigned int *)off_815E98 + 6); /*0x4033cc*/
  LinkedList::Init((unsigned int **)Block); /*0x4033d1*/
  v2 = *((unsigned int *)off_815E98 + 6) - 1; /*0x4033df*/
  *((unsigned int *)off_815E98 + 6) = v2; /*0x4033e2*/
  if ( v2 < 0 ) /*0x4033e5*/
    *((unsigned int *)off_815E98 + 6) = 0; /*0x4033ed*/
  Next = (int *)AudioQueue::GetNext((int *)Block + 62); /*0x403401*/
  for ( i = Next; Next; i = Next ) /*0x403407*/
  {
    Next = (int *)AudioQueue::GetNextAlt(Next); /*0x403412*/
    AudioStream::Destructor(i); /*0x403414*/
  }
  (*(void (__thiscall **)(void *))(*(unsigned int *)(*((unsigned int *)Block + 6) + 12) + 32))(Block); /*0x403427*/
  *(unsigned int *)(*((unsigned int *)Block + 6) + 4 * *((unsigned int *)Block + 7) + 28) = 0; /*0x403430*/
  v5 = *((unsigned int *)Block + 6); /*0x403438*/
  v6 = *(unsigned int *)(v5 + 16) - 1; /*0x40343e*/
  *(unsigned int *)(v5 + 16) = v6; /*0x403440*/
  if ( v6 < 0 ) /*0x403446*/
    *(unsigned int *)(*((unsigned int *)Block + 6) + 16) = 0; /*0x40344b*/
  RA2_OPDEL(Block); /*0x403453*/
}
}
// 0x403820
namespace gamemd {
int AudioStream::Reset()
{
  *(unsigned int *)this = 0; /*0x403822*/
  this->u8_4 = 0; /*0x403824*/
  this->q008 = 0; /*0x403827*/
  this->q00C = 0; /*0x40382a*/
  this->u32_10 = 0; /*0x40382d*/
  this->u32_14 = 0; /*0x403830*/
  this->u32_18 = 0; /*0x403833*/
  this->q01C = 0; /*0x403836*/
  *(&this->u8_40) = 0; /*0x403839*/
  *(&this->u8_41) = 0; /*0x40383c*/
  *(&this->u8_48) = 0; /*0x40383f*/
  *(&this->q0080) = 0; /*0x403842*/
  *(&this->u8_46) = 5000; /*0x403845*/
  *(&this->u8_47) = 0; /*0x40384c*/
  *(&this->u8_42) = 0; /*0x40384f*/
  *(&this->u8_43) = 0; /*0x403852*/
  *(&this->u8_44) = 0; /*0x403855*/
  *(&this->u8_45) = 0; /*0x403858*/
  *(&this->q0081) = 0; /*0x40385b*/
  *(&this->u8_49) = 0; /*0x40385e*/
  return 0; /*0x403861*/
}
}
// 0x4038A0
namespace gamemd {
int AudioStream::ResetChannel(int a2, int a3)
{
  this->q008 = a2; /*0x4038a4*/
  this->q00C = a3; /*0x4038ab*/
  return a2; /*0x4038ae*/
}
}
// 0x4038C0
namespace gamemd {
int AudioStream::ResetChannel2(int a2, int a3)
{
  this->q020 = a2; /*0x4038c4*/
  this->q024 = a3; /*0x4038cb*/
  return a2; /*0x4038ce*/
}
}
// 0x404700
namespace gamemd {
int AudioStream::SetupPlayback()
{
  int v1; // edx
  int v2; // eax
  int v3; // esi
  void * v4;
  int *v6; // edx

  v1 = (int)(this->u32_A8);
  v2 = (int)(0);
  v3 = (int)(0);
  this->q1E0 = (int)(v1);
  if ( !v1 || (this->u32_18 & 0x20) != 0 ) /*0x40471a*/
    return 0; /*0x40471a*/
  v4 = this->q024; /*0x40471c*/
  if ( *(unsigned int *)(v4 + 88) >= 0x21u ) /*0x404727*/
    return this->q028 + 28; /*0x404727*/
  if ( (*(unsigned char *)(v4 + 16) & 0x20) != 0 ) /*0x40472d*/
  {
    v3 = 1; /*0x404730*/
    this->q1E0 = v1 - 1; /*0x404735*/
    this->q0AC = 0; /*0x40473b*/
  }
  else
  {
    this->q0AC = -1; /*0x404743*/
  }
  if ( (*(unsigned char *)(v4 + 16) & 0x40) != 0 ) /*0x404751*/
    --this->q1E0; /*0x404753*/
  if ( this->q1E0 <= 0 ) /*0x404761*/
  {
    *(unsigned int *)(v4 + 12) = 0; /*0x404763*/
    return 0; /*0x40476a*/
  }
  v6 = (int *)(&this->u32_8C2); /*0x40476b*/
  do /*0x404780*/
  {
    *v6 = v3; /*0x404771*/
    ++v2; /*0x404779*/
    ++v6; /*0x40477a*/
    ++v3; /*0x40477d*/
  }
  while ( v2 < this->q1E0 ); /*0x404780*/
  if ( (this->u32_18 & 8) == 0 && (*(unsigned char *)(this->q024 + 16) & 0x20) != 0 ) /*0x40478f*/
    return this->q028 + 28; /*0x402030*/
  else
    return AudioStream::SelectRandom(); /*0x404793*/
}
}
// 0x4047B0
namespace gamemd {
int AudioStream::SelectRandom()
{
  unsigned int *v2; // ecx
  void * v3;
  void * v4;
  int v5; // eax
  void * v6;
  unsigned int *v8; // eax
  int v9; // ecx
  int v10; // ecx
  int v12; // eax

  v2 = (unsigned int *)((void *)(*(unsigned int **)(&this->q00C6)));
  v3 = (void *)((int)((void *)(v2[4])));
  if ( v2[22] >= 0x21u && (this->u32_18 & 0x20) == 0 ) /*0x4047c5*/
    return 0; /*0x4047c5*/
  v4 = this->q1E0; /*0x4047cb*/
  if ( v4 && (this->u32_18 & 0x20) == 0 ) /*0x4047d9*/
  {
    if ( (v3 & 2) != 0 ) /*0x4047de*/
    {
      v5 = (void *)(Random::Range(Randomizer_Global, 0, v4 - 1));
      v6 = (void *)(this->q1E0 - 1);
      this->q0AC = *(unsigned int *)(&this->u32_10 * v5 + 352); /*0x404804*/
      v5 = v5; /*0x40480c*/
      if ( v5 < v6 ) /*0x40480f*/
      {
        v8 = (unsigned int *)(&this->u32_10 * v5 + 352); /*0x404811*/
        do /*0x404825*/
        {
          ++v5; /*0x404816*/
          *v8 = v8[1]; /*0x404817*/
          ++v8; /*0x40481f*/
        }
        while ( v5 < this->q1E0 - 1 ); /*0x404825*/
      }
    }
    else
    {
      ++this->q0AC; /*0x404829*/
    }
    --this->q1E0; /*0x404836*/
    v9 = *(unsigned int *)(&this->u32_10 * this->q0AC + 40); /*0x404842*/
    return v9 + 28; /*0x404847*/
  }
  if ( (v3 & 1) != 0 && (this->u32_18 & 0x20) == 0 ) /*0x404855*/
  {
    v10 = v2[19]; /*0x404857*/
    if ( !v10 || this->u32_1E4 < v10 - 1 ) /*0x404867*/
    {
      ++this->u32_1E4; /*0x404872*/
      return AudioStream::SetupPlayback(); /*0x404879*/
    }
  }
  if ( (v3 & 0x40) == 0 ) /*0x404881*/
    return 0; /*0x404881*/
  if ( (this->u32_18 & 0x10) != 0 ) /*0x404887*/
    return 0; /*0x404887*/
  v12 = this->u32_A8; /*0x404889*/
  if ( v12 < 1 ) /*0x404892*/
    return 0; /*0x4048aa*/
  this->u32_18 |= 0x10u; /*0x40489a*/
  v9 = *(unsigned int *)(&this->u32_10 * v12 + 36); /*0x40489d*/
  return v9 + 28; /*0x404878*/
}
}
// 0x404E70
namespace gamemd {
void AudioStream::CleanupChannels()
{
  void **v0; // esi
  void **v1; // edi
  int v2; // ecx
  int v3; // ebp
  unsigned int **v4; // edi
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
        if ( ((unsigned char)v0[6] & 1) == 0 ) /*0x404ea1*/
        {
          v2 = (int)v0[44]; /*0x404ea7*/
          if ( v2 && v0 == *(void ***)(v2 + 192) ) /*0x404eb7*/
          {
            if ( ((unsigned char)v0[6] & 2) != 0 ) /*0x404ebd*/
              Voice::Stop(v2); /*0x404ebf*/
            AudioStream::ReleaseChannel(v0[44]); /*0x404eca*/
            *((unsigned int *)v0[44] + 48) = 0; /*0x404ed5*/
            *((unsigned int *)v0[44] + 47) = 0; /*0x404ee1*/
            *((unsigned int *)v0[44] + 45) = 0; /*0x404eed*/
            *((unsigned int *)v0[44] + 46) = 0; /*0x404ef9*/
            *((unsigned int *)v0[44] + 36) = 0; /*0x404f05*/
            *((unsigned int *)v0[44] + 38) = 0; /*0x404f11*/
            *((unsigned int *)v0[44] + 39) = 0; /*0x404f1d*/
            v0[44] = 0; /*0x404f23*/
          }
          v3 = 0; /*0x404f2f*/
          if ( (int)v0[42] > 0 ) /*0x404f33*/
          {
            v4 = (unsigned int **)(v0 + 10); /*0x404f35*/
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
        LinkedList::Init((unsigned int **)v0); /*0x404f77*/
        v0[78] = 0; /*0x404f7c*/
        if ( *((char *)v0 + 24) >= 0 ) /*0x404f87*/
          PushFrontLinkedListAlt(dword_87E2A8, (int)v0); /*0x404f9c*/
        else
          RA2_OPDEL(v0); /*0x404f8a*/
        v0 = v1; /*0x404fa7*/
        --dword_87E28C; /*0x404fb0*/
      }
      while ( v1 != &g_AudioStreamObject ); /*0x404fb6*/
    }
  }
}
}
// 0x4079C0
namespace gamemd {
int AudioStream::ReadStreamAndSyncPosition()
{
  int v2; // esi
  int v3; // eax
  int v4; // ecx
  int v5; // eax

  v2 = *(&this->u32_108); /*0x4079c4*/
  ReadAudioStream(*(int **)(v2 + 56), *(unsigned int *)(v2 + 144)); /*0x4079d3*/
  AudioStream::ReadStreamAndReturn(*(int **)(v2 + 56)); /*0x4079db*/
  v3 = *(unsigned int *)(v2 + 160); /*0x4079e3*/
  v4 = *(unsigned int *)(*(unsigned int *)(v2 + 56) + 8); /*0x4079e9*/
  if ( v3 <= v4 ) /*0x4079ee*/
    *(unsigned int *)(v2 + 144) = v3; /*0x4079f8*/
  else
    *(unsigned int *)(v2 + 144) = v4; /*0x4079f0*/
  v5 = *(unsigned int *)(v2 + 144); /*0x4079fe*/
  *(&this->q0243) = v5; /*0x407a04*/
  *(&this->q0244) = v5; /*0x407a0a*/
  *(&this->q0242) = *(unsigned int *)(*(unsigned int *)(v2 + 56) + 4); /*0x407a16*/
  return 0; /*0x407a1c*/
}
}
// 0x407A30
namespace gamemd {
int AudioStream::SetPlaybackCallback()
{
  int v1; // esi
  int v2; // edx
  int v3; // eax

  v1 = *(&this->u32_108); /*0x407a31*/
  if ( (*(unsigned char *)(v1 + 12) & 3) != 0 ) /*0x407a3b*/
  {
    *(unsigned int *)(v1 + 32) = Audio::Callback(); /*0x407a42*/
    *(unsigned int *)(v1 + 36) = v2; /*0x407a45*/
  }
  v3 = *(unsigned int *)(v1 + 12); /*0x407a48*/
  IDA_LOBYTE(v3) = v3 & 0xF8; /*0x407a4b*/
  *(unsigned int *)(v1 + 12) = v3; /*0x407a4d*/
  *(unsigned int *)(v1 + 128) = 0; /*0x407a50*/
  return 0; /*0x407a5c*/
}
}
// 0x407A60
namespace gamemd {
int AudioStream::ProcessCallback()
{
  int v1; // esi
  int v2; // edx
  int v3; // eax

  v1 = *(&this->u32_108); /*0x407a61*/
  if ( (*(unsigned char *)(v1 + 12) & 3) != 0 ) /*0x407a6b*/
  {
    *(unsigned int *)(v1 + 32) = Audio::Callback(); /*0x407a72*/
    *(unsigned int *)(v1 + 36) = v2; /*0x407a75*/
  }
  v3 = *(unsigned int *)(v1 + 12); /*0x407a78*/
  IDA_LOBYTE(v3) = v3 & 0xF8; /*0x407a7b*/
  *(unsigned int *)(v1 + 12) = v3; /*0x407a7d*/
  *(unsigned int *)(v1 + 128) = 0; /*0x407a80*/
  return 0; /*0x407a8c*/
}
}
// 0x4084E0
namespace gamemd {
void AudioStream::InitNodeFields()
{
  *(unsigned int *)this = 0; /*0x4084e2*/
  this->u8_4 = 0; /*0x4084e4*/
  this->u32_14 = 0; /*0x4084e7*/
  this->u32_18 = 0; /*0x4084ea*/
  this->DListNode_2.Init(); /*0x4084f0*/
}
}
// 0x408D50
namespace gamemd {
int AudioStream::GetChannel()
{
  return this->u32_14; /*0x408d53*/
}
}
// 0x409310
namespace gamemd {
int AudioStream::ReadStreamAndReturn()
{
  ReadAudioStream(0); /*0x409315*/
  return this->vtable3; /*0x40931d*/
}
}
// 0x4A33A0
namespace gamemd {
int AudioStream::ReadSamples(const void * a2)
{
  unsigned int *v2; // ebx
  int v3; // edx
  unsigned int v5;
  unsigned short *v6; // ebx
  unsigned int v7; // edi
  int v8; // ebp
  unsigned short *SamplePosition; // esi
  unsigned short *v10; // eax
  unsigned short *v11; // edx
  unsigned int v13; // [esp+18h] [ebp-E8h]
  int v14; // [esp+1Ch] [ebp-E4h]
  unsigned int v15[4]; // [esp+20h] [ebp-E0h] BYREF
  unsigned int v16[27]; // [esp+30h] [ebp-D0h] BYREF
  unsigned int v17[25]; // [esp+9Ch] [ebp-64h] BYREF

  v2 = (unsigned int *)(this);
  v3 = *(&this->vtable38); /*0x4a33ac*/
  if ( !v3 ) /*0x4a33b7*/
    return -1; /*0x4a33b7*/
  if ( *this == 2 )
  {
    if ( !dword_8A0E08 || !*((unsigned int *)dword_8A0E08 + 28) ) /*0x4a33d8*/
      return -1; /*0x4a33c6*/
    v15[2] = 256; /*0x4a33e7*/
    v15[3] = 256; /*0x4a33eb*/
    memset(v17, 0, sizeof(v17)); /*0x4a33f8*/
    v15[0] = 0; /*0x4a3401*/
    v15[1] = 0; /*0x4a340f*/
    v17[0] = 100; /*0x4a3413*/
    return (*(int (__stdcall **)(int, unsigned int, unsigned int, unsigned int *, int, unsigned int *))(*(unsigned int *)v3 + 20))( /*0x4a3427*/
             v3,
             0,
             *((unsigned int *)dword_8A0E08 + 28),
             v15,
             512,
             v17);
  }
  else
  {
    memset(v16, 0, sizeof(v16)); /*0x4a3443*/
    v16[0] = 108; /*0x4a344e*/
    if ( (*(int (__stdcall **)(int, unsigned int, unsigned int *, int, unsigned int))(*(unsigned int *)v3 + 100))(v3, 0, v16, 2081, 0) )
    {
      return 1; /*0x4a3465*/
    }
    else
    {
      if ( *v2 ) /*0x4a3474*/
      {
        if ( *v2 == 1 ) /*0x4a347f*/
        {
          v5 = g_ZBufferDescriptor; /*0x4a3485*/
          if ( g_ZBufferDescriptor ) /*0x4a348d*/
          {
            if ( g_VisibleSurfaceDescriptor ) /*0x4a3499*/
            {
              v6 = (unsigned short *)v16[9]; /*0x4a34a6*/
              v7 = 0; /*0x4a34aa*/
              v8 = v16[4] >> 1; /*0x4a34ac*/
              v14 = v16[4] >> 1; /*0x4a34b0*/
              v13 = *((unsigned int *)g_ZBufferDescriptor + 11); /*0x4a34b4*/
              if ( v13 ) /*0x4a34b8*/
              {
                do /*0x4a353c*/
                {
                  SamplePosition = (unsigned short *)Audio::GetSamplePosition((int)v5, 0, v7 - v5[1]); /*0x4a34d4*/
                  v10 = (unsigned short *)StreamClass::ReadAndSeek( /*0x4a34df*/
                                   (int)g_VisibleSurfaceDescriptor,
                                   0,
                                   v7 - *((unsigned int *)g_VisibleSurfaceDescriptor + 1));
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
                      v11 = SamplePosition + 1; /*0x4a350d*/
                      ++v6; /*0x4a3510*/
                      if ( (unsigned int)(SamplePosition + 1) >= *((unsigned int *)g_ZBufferDescriptor + 7) ) /*0x4a3516*/
                        v11 = (unsigned short *)((char *)v11 - *((unsigned int *)g_ZBufferDescriptor + 8)); /*0x4a3518*/
                      SamplePosition = v11; /*0x4a351b*/
                      if ( (unsigned int)++v10 >= *((unsigned int *)g_VisibleSurfaceDescriptor + 7) ) /*0x4a3529*/
                        v10 = (unsigned short *)((char *)v10 - *((unsigned int *)g_VisibleSurfaceDescriptor + 8)); /*0x4a352b*/
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
              v2 = (unsigned int *)(this);
            }
          }
        }
      }
      else if ( a2 ) /*0x4a3551*/
      {
        qmemcpy((void *)v16[9], a2, v16[4] * v2->q00C); /*0x4a3564*/
      }
      return (*(int (__stdcall **)(unsigned int, unsigned int))(*(unsigned int *)v2->q070 + 128))(v2->q070, 0) != 0 ? 2 : 0;
    }
  }
}
}
// 0x4BEAC0
namespace gamemd {
MouseClass * * AudioStream::DrawWaveform(IUnknown * aP1, IUnknown * aP2, IUnknown * aP3, IUnknown * aP4, int a6, int a7, int a8)
{
  int *v8; // eax
  int *v9; // eax
  int v10; // esi
  int v11; // edi
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // esi
  int v16; // edx
  int v17; // ebx
  int v18; // ebp
  int v19; // edi
  int v22; // eax
  int v23; // eax
  unsigned int v24; // eax
  int v25; // eax
  int v26; // eax
  unsigned int v27; // eax
  int v28; // edi
  unsigned short *SamplePosition; // edi
  int v30; // ebx
  unsigned int v31; // eax
  unsigned short *v32; // ebx
  int v33; // ebp
  int v34; // esi
  int v35; // eax
  int v36; // ecx
  int v37; // eax
  unsigned int v38;
  int v39; // ecx
  int v40; // esi
  uint16_t v41; // ax
  unsigned short *v42; // eax
  int v43; // eax
  unsigned short *v44; // eax
  bool v45; // zf
  int v47; // eax
  unsigned int v48;
  int v49; // esi
  uint16_t v50; // ax
  unsigned short *v51; // ecx
  unsigned short *v52; // ecx
  int v53; // edx
  int v54; // esi
  uint16_t v55; // ax
  unsigned int v56; // ecx
  unsigned int v57; // edi
  int v58; // esi
  unsigned short *v59; // eax
  int v60; // [esp+10h] [ebp-6Ch]
  int v61; // [esp+10h] [ebp-6Ch]
  int v62; // [esp+10h] [ebp-6Ch]
  int v63; // [esp+14h] [ebp-68h]
  int v64; // [esp+18h] [ebp-64h]
  int v65; // [esp+1Ch] [ebp-60h]
  int v66; // [esp+20h] [ebp-5Ch]
  int v67; // [esp+24h] [ebp-58h]
  int v68; // [esp+28h] [ebp-54h]
  int v70; // [esp+30h] [ebp-4Ch]
  int v71; // [esp+30h] [ebp-4Ch]
  int v73[2]; // [esp+34h] [ebp-48h] BYREF
  unsigned short *v74; // [esp+3Ch] [ebp-40h] BYREF
  int v75; // [esp+40h] [ebp-3Ch]
  int v76; // [esp+4Ch] [ebp-30h] BYREF
  int v77; // [esp+50h] [ebp-2Ch]
  int v78; // [esp+5Ch] [ebp-20h] BYREF
  int v79; // [esp+60h] [ebp-1Ch]
  int v80; // [esp+64h] [ebp-18h] BYREF
  int v81; // [esp+68h] [ebp-14h]
  int v82; // [esp+6Ch] [ebp-10h] BYREF
  int v84; // [esp+74h] [ebp-8h]
  int v86; // [esp+80h] [ebp+4h]
  int v87; // [esp+84h] [ebp+8h]
  int v88; // [esp+84h] [ebp+8h]
  int v89; // [esp+84h] [ebp+8h]
  int v90; // [esp+88h] [ebp+Ch]
  int v91; // [esp+88h] [ebp+Ch]
  int v92; // [esp+8Ch] [ebp+10h]
  int v93; // [esp+8Ch] [ebp+10h]
  int v94; // [esp+8Ch] [ebp+10h]
  int v95; // [esp+90h] [ebp+14h]
  int v96; // [esp+90h] [ebp+14h]
  int v99; // [esp+94h] [ebp+18h]
  int v100; // [esp+98h] [ebp+1Ch]

  if ( a6 < 8 ) /*0x4bead5*/
    return 0; /*0x4bead5*/
  v8 = (int *)(*(int (__thiscall **)(void *, int *))(((unsigned int)(this->u32_300))))(this, &v76); /*0x4beae2*/
  v9 = ClipRectIntersection(&v74, aP1, v8, 0, 0); /*0x4beaf5*/
  v10 = *v9; /*0x4beafc*/
  v82 = *v9; /*0x4beafe*/
  v11 = v9[1]; /*0x4beb02*/
  v11 = v11; /*0x4beb05*/
  v84 = v9[2]; /*0x4beb0c*/
  v12 = v9[3]; /*0x4beb10*/
  v12 = v12; /*0x4beb15*/
  if ( !v84 && !v12 ) /*0x4beb1d*/
    return 0; /*0x4beb1d*/
  v13 = v10 + *aP2; /*0x4beb3c*/
  v14 = v10 + *aP3; /*0x4beb3e*/
  v15 = a8; /*0x4beb40*/
  v16 = v11 + aP2[1]; /*0x4beb47*/
  v17 = v13; /*0x4beb49*/
  v18 = v11 + aP3[1]; /*0x4beb4b*/
  v19 = a7; /*0x4beb4d*/
  v78 = v13; /*0x4beb56*/
  v79 = v16; /*0x4beb5a*/
  v80 = v14; /*0x4beb5e*/
  v81 = v18; /*0x4beb62*/
  if ( v13 > v14 ) /*0x4beb66*/
  {
    v17 = v14; /*0x4beb68*/
    v19 = a8; /*0x4beb6a*/
    v15 = a7; /*0x4beb6c*/
    v78 = v14; /*0x4beb73*/
    v79 = v18; /*0x4beb77*/
    v80 = v13; /*0x4beb7b*/
    v81 = v16; /*0x4beb7f*/
  }
  v76 = v80; /*0x4beb8f*/
  v17 = v17; /*0x4beb94*/
  v79 = v79; /*0x4beb96*/
  v77 = v81; /*0x4beba2*/
  if ( !ClipLine(&v78, &v80, &v82) ) /*0x4beba6*/
    return 0; /*0x4beba6*/
  v90 = v15; /*0x4bebc1*/
  v87 = v19; /*0x4bebc8*/
  if ( v80 != v76 || v81 != v77 ) /*0x4bebd5*/
  {
    v73[0] = v17 - v80; /*0x4bebe7*/
    v73[1] = v79 - v81; /*0x4bebeb*/
    v74 = (unsigned short *)(v17 - v76); /*0x4bebfb*/
    v75 = v79 - v77; /*0x4bebff*/
    Vector::2DMagnitudeMath((int *)&v74); /*0x4bec07*/
    v22 = v22; /*0x4bec10*/
    Vector::2DMagnitudeMath(v73); /*0x4bec17*/
    v24 = abs32(Math::RoundToInt((double)v23 / (double)v22 * (double)(v19 - v15))); /*0x4bec4d*/
    if ( v19 >= v15 ) /*0x4bec51*/
      v90 = v19 - v24; /*0x4bec62*/
    else
      v90 = v19 + v24; /*0x4bec55*/
  }
  if ( v78 != v17 || v79 != v79 ) /*0x4bec77*/
  {
    v75 = v79 - v77; /*0x4bec8d*/
    v74 = (unsigned short *)(v78 - v76); /*0x4bec97*/
    v76 = v17 - v76; /*0x4bec9b*/
    v77 = v79 - v77; /*0x4bec9f*/
    Vector::2DMagnitudeMath(&v76); /*0x4beca3*/
    v25 = v25; /*0x4becac*/
    Vector::2DMagnitudeMath((int *)&v74); /*0x4becb3*/
    v27 = abs32(Math::RoundToInt((double)v26 / (double)v25 * (double)(v19 - v15))); /*0x4bece9*/
    if ( v15 <= v19 ) /*0x4beced*/
      v87 = v15 + v27; /*0x4becfc*/
    else
      v87 = v15 - v27; /*0x4becf1*/
  }
  (*(void (__thiscall **)(void *))(((unsigned int)(this->q02C2))))(this); /*0x4bed0b*/
  v99 = (*(int (__thiscall **)(void *, int, int))(((unsigned int)(this->q0242))))(this, v78, v79); /*0x4bed25*/
  if ( !g_ZBufferDescriptor ) /*0x4bed2e*/
    return 0; /*0x4bed2e*/
  v28 = *((unsigned int *)g_ZBufferDescriptor + 1); /*0x4bed38*/
  v77 = v79; /*0x4bed3f*/
  SamplePosition = (unsigned short *)Audio::GetSamplePosition((int)g_ZBufferDescriptor, v78, v79 - v28); /*0x4bed56*/
  v30 = *((unsigned int *)g_VisibleSurfaceDescriptor + 1); /*0x4bed5c*/
  v77 = v79; /*0x4bed5f*/
  v31 = StreamClass::ReadAndSeek((int)g_VisibleSurfaceDescriptor, v78, v79 - v30); /*0x4bed67*/
  v32 = (unsigned short *)v31; /*0x4bed7a*/
  IDA_LOWORD(v31) = *((unsigned short *)g_ZBufferDescriptor + 2) + *((unsigned short *)g_ZBufferDescriptor + 18); /*0x4bed87*/
  v65 = -1; /*0x4bed8b*/
  v100 = v87 + v31 - v79 - v11; /*0x4bed99*/
  v86 = *((unsigned int *)g_ZBufferDescriptor + 10); /*0x4beda3*/
  if ( !v99 ) /*0x4bedb3*/
    return 0; /*0x4bf63e*/
  v33 = 256 - a6; /*0x4bedd0*/
  v68 = (a6 * *aP4) >> 8; /*0x4bedd8*/
  v67 = (a6 * aP4[1]) >> 8; /*0x4bede7*/
  v66 = (a6 * aP4[2]) >> 8; /*0x4bedfa*/
  v34 = v80 - v78; /*0x4bee06*/
  v70 = v80 - v78; /*0x4bee0c*/
  v95 = v81 - v79; /*0x4bee19*/
  v88 = v90 - v87; /*0x4bee2b*/
  v35 = (*(int (__thiscall **)(void *))(((unsigned int)(this->q02C6))))(this); /*0x4bee32*/
  v64 = v35; /*0x4bee3c*/
  if ( v95 < 0 ) /*0x4bee42*/
  {
    v64 = -v35; /*0x4bee46*/
    v86 = -v86; /*0x4bee53*/
    v65 = 1; /*0x4bee5a*/
  }
  v63 = 1; /*0x4bee69*/
  v36 = abs32(v95); /*0x4bee7d*/
  if ( v88 < 0 ) /*0x4bee81*/
    v63 = -1; /*0x4bee83*/
  v37 = abs32(v88); /*0x4bee8e*/
  v89 = 2 * v34; /*0x4bee93*/
  v96 = 2 * v36; /*0x4bee9d*/
  v91 = 2 * v37; /*0x4beea9*/
  if ( v37 <= v34 || v37 <= v36 ) /*0x4beeb8*/
  {
    if ( v34 <= v36 ) /*0x4bf149*/
    {
      v94 = v89 - v36; /*0x4bf3be*/
      v62 = v91 - v36; /*0x4bf3d0*/
      if ( v36 > 0 ) /*0x4bf3d4*/
      {
        v53 = 0; /*0x4bf3da*/
        v36 = v36; /*0x4bf3dc*/
        v73[0] = 0; /*0x4bf3e0*/
        do /*0x4bf620*/
        {
          v54 = (uint16_t)*v32; /*0x4bf3f1*/
          if ( (uint16_t)v100 < *SamplePosition && *v32 ) /*0x4bf3ec*/
          {
            v55 = *(unsigned short *)(v53 + v99); /*0x4bf409*/
            IDA_LOBYTE(v76) = (uint8_t)(v55 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4bf428*/
            IDA_BYTE1(v76) = (uint8_t)(v55 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4bf439*/
            IDA_BYTE2(v76) = (uint8_t)(v55 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4bf456*/
            v53 = v73[0]; /*0x4bf4e1*/
            *(unsigned short *)(v73[0] + v99) = ((v54 * (v68 + ((v33 * (uint8_t)v76) >> 8))) >> 7 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4bf4e5*/
                                     | ((v54 * (v67 + ((v33 * IDA_BYTE1(v76)) >> 8))) >> 7 >> g_BitMask_Blue << g_BitMask_Green)
                                     | ((v54 * (v66 + ((v33 * IDA_BYTE2(v76)) >> 8))) >> 7 >> g_BitMask_Red << g_BitShift_Blue);
          }
          if ( v94 > 0 ) /*0x4bf4f2*/
          {
            ++SamplePosition; /*0x4bf4f9*/
            v53 += 2; /*0x4bf4fc*/
            v56 = *((unsigned int *)g_ZBufferDescriptor + 7); /*0x4bf4ff*/
            v73[0] = v53; /*0x4bf502*/
            if ( (unsigned int)SamplePosition >= v56 ) /*0x4bf508*/
              SamplePosition = (unsigned short *)((char *)SamplePosition - *((unsigned int *)g_ZBufferDescriptor + 8)); /*0x4bf50a*/
            if ( (unsigned int)++v32 >= *((unsigned int *)g_VisibleSurfaceDescriptor + 7) ) /*0x4bf518*/
              v32 = (unsigned short *)((char *)v32 - *((unsigned int *)g_VisibleSurfaceDescriptor + 8)); /*0x4bf51a*/
            v94 -= v96; /*0x4bf52d*/
          }
          if ( v62 > 0 ) /*0x4bf53a*/
          {
            v100 += v63; /*0x4bf54d*/
            v62 -= v96; /*0x4bf55d*/
          }
          v94 += v89; /*0x4bf579*/
          v62 += v91; /*0x4bf592*/
          v99 += v64; /*0x4bf596*/
          v57 = (unsigned int)&SamplePosition[v86]; /*0x4bf5a7*/
          if ( v86 <= 0 ) /*0x4bf5ab*/
          {
            v74 = (unsigned short *)v57; /*0x4bf5cd*/
            if ( v57 >= *((unsigned int *)g_ZBufferDescriptor + 6) ) /*0x4bf5d4*/
              v58 = (int)v74; /*0x4bf5dd*/
            else
              v58 = v57 + *((unsigned int *)g_ZBufferDescriptor + 8); /*0x4bf5d9*/
            SamplePosition = (unsigned short *)v58; /*0x4bf5e1*/
          }
          else
          {
            v74 = (unsigned short *)v57; /*0x4bf5b3*/
            if ( v57 < *((unsigned int *)g_ZBufferDescriptor + 7) ) /*0x4bf5ba*/
              SamplePosition = v74; /*0x4bf5c1*/
            else
              SamplePosition = (unsigned short *)(v57 - *((unsigned int *)g_ZBufferDescriptor + 8)); /*0x4bf5bc*/
          }
          v32 += v86; /*0x4bf5e7*/
          v100 += v65; /*0x4bf5e9*/
          if ( v86 <= 0 ) /*0x4bf5f2*/
          {
            v59 = v32; /*0x4bf609*/
            if ( (unsigned int)v32 < *((unsigned int *)g_VisibleSurfaceDescriptor + 6) ) /*0x4bf60e*/
              v59 = (unsigned short *)((char *)v32 + *((unsigned int *)g_VisibleSurfaceDescriptor + 8)); /*0x4bf613*/
            v32 = v59; /*0x4bf615*/
          }
          else if ( (unsigned int)v32 >= *((unsigned int *)g_VisibleSurfaceDescriptor + 7) ) /*0x4bf5fc*/
          {
            v32 = (unsigned short *)((char *)v32 - *((unsigned int *)g_VisibleSurfaceDescriptor + 8)); /*0x4bf5fe*/
          }
          --v36; /*0x4bf61c*/
        }
        while ( v36 ); /*0x4bf620*/
      }
    }
    else
    {
      v93 = v96 - v34; /*0x4bf158*/
      v61 = v91 - v34; /*0x4bf168*/
      v47 = 0; /*0x4bf16c*/
      v73[0] = 0; /*0x4bf170*/
      if ( v34 > 0 ) /*0x4bf174*/
      {
        v48 = g_VisibleSurfaceDescriptor; /*0x4bf17a*/
        do /*0x4bf39a*/
        {
          v49 = (uint16_t)*v32; /*0x4bf18d*/
          if ( (uint16_t)v100 < *SamplePosition && *v32 ) /*0x4bf188*/
          {
            v50 = *(unsigned short *)(v99 + 2 * v47); /*0x4bf1ac*/
            IDA_LOBYTE(v74) = (uint8_t)(v50 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4bf1c4*/
            IDA_BYTE1(v74) = (uint8_t)(v50 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4bf1e5*/
            IDA_BYTE2(v74) = (uint8_t)(v50 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4bf1f1*/
            v47 = v73[0]; /*0x4bf27c*/
            *(unsigned short *)(v99 + 2 * v73[0]) = ((v49 * (v68 + ((v33 * (uint8_t)v74) >> 8))) >> 7 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4bf280*/
                                         | ((v49 * (v66 + ((v33 * IDA_BYTE2(v74)) >> 8))) >> 7 >> g_BitMask_Red << g_BitShift_Blue)
                                         | ((v49 * (v67 + ((v33 * IDA_BYTE1(v74)) >> 8))) >> 7 >> g_BitMask_Blue << g_BitMask_Green);
            v48 = g_VisibleSurfaceDescriptor; /*0x4bf284*/
          }
          if ( v93 > 0 ) /*0x4bf293*/
          {
            v99 += v64; /*0x4bf2a6*/
            v93 -= v89; /*0x4bf2b6*/
            SamplePosition += v86; /*0x4bf2c7*/
            if ( v86 <= 0 ) /*0x4bf2cb*/
            {
              v51 = SamplePosition; /*0x4bf2e3*/
              if ( (unsigned int)SamplePosition < *((unsigned int *)g_ZBufferDescriptor + 6) ) /*0x4bf2e8*/
                v51 = (unsigned short *)((char *)SamplePosition + *((unsigned int *)g_ZBufferDescriptor + 8)); /*0x4bf2ed*/
              SamplePosition = v51; /*0x4bf2ef*/
            }
            else if ( (unsigned int)SamplePosition >= *((unsigned int *)g_ZBufferDescriptor + 7) ) /*0x4bf2d6*/
            {
              SamplePosition = (unsigned short *)((char *)SamplePosition - *((unsigned int *)g_ZBufferDescriptor + 8)); /*0x4bf2d8*/
            }
            v48 = g_VisibleSurfaceDescriptor; /*0x4bf2f5*/
            v100 += v65; /*0x4bf2fb*/
            v32 += v86; /*0x4bf309*/
            if ( v86 <= 0 ) /*0x4bf30d*/
            {
              v52 = v32; /*0x4bf31c*/
              if ( (unsigned int)v32 < *((unsigned int *)g_VisibleSurfaceDescriptor + 6) ) /*0x4bf320*/
                v52 = (unsigned short *)((char *)v32 + *((unsigned int *)g_VisibleSurfaceDescriptor + 8)); /*0x4bf325*/
              v32 = v52; /*0x4bf327*/
            }
            else if ( (unsigned int)v32 >= *((unsigned int *)g_VisibleSurfaceDescriptor + 7) ) /*0x4bf312*/
            {
              v32 = (unsigned short *)((char *)v32 - *((unsigned int *)g_VisibleSurfaceDescriptor + 8)); /*0x4bf314*/
            }
          }
          if ( v61 > 0 ) /*0x4bf32f*/
          {
            v100 += v63; /*0x4bf335*/
            v61 -= v89; /*0x4bf345*/
          }
          v93 += v96; /*0x4bf360*/
          v61 += v91; /*0x4bf373*/
          if ( (unsigned int)++SamplePosition >= *((unsigned int *)g_ZBufferDescriptor + 7) ) /*0x4bf37d*/
            SamplePosition = (unsigned short *)((char *)SamplePosition - *((unsigned int *)g_ZBufferDescriptor + 8)); /*0x4bf37f*/
          if ( (unsigned int)++v32 >= v48[7] ) /*0x4bf38a*/
            v32 = (unsigned short *)((char *)v32 - v48[8]); /*0x4bf38c*/
          v73[0] = ++v47; /*0x4bf396*/
        }
        while ( v47 < v70 ); /*0x4bf39a*/
      }
    }
  }
  else
  {
    v60 = v96 - v37; /*0x4beec7*/
    v92 = v89 - v37; /*0x4beed6*/
    if ( v37 > 0 ) /*0x4beedd*/
    {
      v38 = g_VisibleSurfaceDescriptor; /*0x4beee3*/
      v39 = 0; /*0x4beee9*/
      v71 = 0; /*0x4beeeb*/
      v73[0] = v37; /*0x4beeef*/
      while ( 1 ) /*0x4bef00*/
      {
        v40 = (uint16_t)*v32; /*0x4bef00*/
        if ( (uint16_t)v100 < *SamplePosition && *v32 ) /*0x4beefb*/
        {
          v41 = *(unsigned short *)(v39 + v99); /*0x4bef18*/
          IDA_LOBYTE(v74) = (uint8_t)(v41 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4bef37*/
          IDA_BYTE1(v74) = (uint8_t)(v41 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4bef58*/
          IDA_BYTE2(v74) = (uint8_t)(v41 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4bef68*/
          v39 = v71; /*0x4befe7*/
          *(unsigned short *)(v71 + v99) = ((v40 * (v68 + ((v33 * (uint8_t)v74) >> 8))) >> 7 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4beff4*/
                                | ((v40 * (v66 + ((v33 * IDA_BYTE2(v74)) >> 8))) >> 7 >> g_BitMask_Red << g_BitShift_Blue)
                                | ((v40 * (v67 + ((v33 * IDA_BYTE1(v74)) >> 8))) >> 7 >> g_BitMask_Blue << g_BitMask_Green);
          v38 = g_VisibleSurfaceDescriptor; /*0x4beff8*/
        }
        if ( v60 <= 0 ) /*0x4bf004*/
        {
          v43 = v100; /*0x4bf0a9*/
          goto LABEL_45; /*0x4bf0a9*/
        }
        v99 += v64; /*0x4bf017*/
        v60 -= v91; /*0x4bf027*/
        SamplePosition += v86; /*0x4bf035*/
        if ( v86 <= 0 ) /*0x4bf039*/
        {
          v42 = SamplePosition; /*0x4bf050*/
          if ( (unsigned int)SamplePosition < *((unsigned int *)g_ZBufferDescriptor + 6) ) /*0x4bf055*/
            v42 = (unsigned short *)((char *)SamplePosition + *((unsigned int *)g_ZBufferDescriptor + 8)); /*0x4bf05a*/
          SamplePosition = v42; /*0x4bf05c*/
        }
        else if ( (unsigned int)SamplePosition >= *((unsigned int *)g_ZBufferDescriptor + 7) ) /*0x4bf043*/
        {
          SamplePosition = (unsigned short *)((char *)SamplePosition - *((unsigned int *)g_ZBufferDescriptor + 8)); /*0x4bf045*/
        }
        v38 = g_VisibleSurfaceDescriptor; /*0x4bf065*/
        v32 += v86; /*0x4bf06b*/
        if ( v86 <= 0 ) /*0x4bf06f*/
          break; /*0x4bf06f*/
        if ( (unsigned int)v32 < *((unsigned int *)g_VisibleSurfaceDescriptor + 7) ) /*0x4bf074*/
          goto LABEL_43; /*0x4bf074*/
        v32 = (unsigned short *)((char *)v32 - *((unsigned int *)g_VisibleSurfaceDescriptor + 8)); /*0x4bf07d*/
        v43 = v65 + v100; /*0x4bf086*/
  LABEL_45:
        if ( v92 > 0 ) /*0x4bf0b9*/
        {
          ++SamplePosition; /*0x4bf0c1*/
          v39 += 2; /*0x4bf0c4*/
          v71 = v39; /*0x4bf0ca*/
          if ( (unsigned int)SamplePosition >= *((unsigned int *)g_ZBufferDescriptor + 7) ) /*0x4bf0ce*/
            SamplePosition = (unsigned short *)((char *)SamplePosition - *((unsigned int *)g_ZBufferDescriptor + 8)); /*0x4bf0d0*/
          if ( (unsigned int)++v32 >= v38[7] ) /*0x4bf0db*/
            v32 = (unsigned short *)((char *)v32 - v38[8]); /*0x4bf0dd*/
          v92 -= v91; /*0x4bf0e7*/
        }
        v100 = v63 + v43; /*0x4bf0fb*/
        v92 += v89; /*0x4bf112*/
        v45 = v73[0] == 1; /*0x4bf123*/
        v60 += v96; /*0x4bf124*/
        --v73[0]; /*0x4bf128*/
        if ( v45 ) /*0x4bf12c*/
          goto LABEL_52; /*0x4bf12c*/
      }
      v44 = v32; /*0x4bf08d*/
      if ( (unsigned int)v32 < *((unsigned int *)g_VisibleSurfaceDescriptor + 6) ) /*0x4bf091*/
        v44 = (unsigned short *)((char *)v32 + *((unsigned int *)g_VisibleSurfaceDescriptor + 8)); /*0x4bf096*/
      v32 = v44; /*0x4bf098*/
  LABEL_43:
      v43 = v65 + v100; /*0x4bf09a*/
      goto LABEL_45; /*0x4bf0a7*/
    }
  }
  LABEL_52:
  (*(void (__thiscall **)(void *))(((unsigned int)(this->q0246))))(this); /*0x4bf132*/
  return 1; /*0x4bf13b*/
}
}
// 0x7BD270
namespace gamemd {
int AudioStream::SetFlag4C()
{
  int result; // eax

  (*(void (__cdecl **)(int, int, unsigned int, unsigned int))&this->q160)(this, 4, 0, 0); /*0x7bd27a*/
  result = *(unsigned int *)((char *)&this->q1992 + 1374); /*0x7bd27d*/
  IDA_LOBYTE(result) = result | 0x40; /*0x7bd286*/
  *(unsigned int *)((char *)&this->q1992 + 1374) = result; /*0x7bd288*/
  return result; /*0x7bd28e*/
}
}
// 0x7BD2D0
namespace gamemd {
int AudioStream::CalcReadPos()
{
  int v2; // ebp
  int v3; // eax
  int v4; // edi
  unsigned int v5; // ecx
  char *v6; // esi
  unsigned int v7; // ebp
  unsigned int v8; // eax
  unsigned int v9; // ecx
  int v11; // esi
  void * v13;
  unsigned int v15; // esi
  unsigned int i; // ecx
  unsigned int v17; // [esp+10h] [ebp-Ch]

  if ( (this->u8_84 & 1) == 0 ) /*0x7bd2e1*/
    return -1; /*0x7bd2e1*/
  if ( !this->u32_78C ) /*0x7bd2e7*/
    return -1; /*0x7bd2e7*/
  v2 = this->u32_7B0; /*0x7bd2f5*/
  if ( !v2 ) /*0x7bd2fd*/
    return -1; /*0x7bd2fd*/
  v3 = this->u32_7AC; /*0x7bd303*/
  v4 = this->u32_790; /*0x7bd30f*/
  v5 = this->u32_9C; /*0x7bd315*/
  v6 = (char *)(v3 + this->u32_7A8); /*0x7bd31b*/
  v7 = v2 - v3; /*0x7bd31d*/
  v17 = this->u32_790 / v5; /*0x7bd32b*/
  v8 = (v4 + v7) / v5; /*0x7bd332*/
  v9 = this->u32_79C; /*0x7bd334*/
  if ( v8 >= v9 ) /*0x7bd33c*/
    v8 -= v9; /*0x7bd33e*/
  if ( *(unsigned char *)(this->u32_794 + v8) == 1 ) /*0x7bd34a*/
  {
    ++this->u32_18C; /*0x7bd355*/
    return -11; /*0x7bd365*/
  }
  if ( v17 > v8 ) /*0x7bd36a*/
  {
    v13 = this->q098 - v4; /*0x7bd3cd*/
    qmemcpy((void *)(this->u32_78C + v4), v6, v13); /*0x7bd3e4*/
    qmemcpy(*(void **)(&this->q3042), &v6[v13], v7 - v13); /*0x7bd404*/
    v17 = v17; /*0x7bd40f*/
    v15 = this->u32_79C; /*0x7bd413*/
    this->u32_790 = v7 - v13; /*0x7bd41b*/
    this->u32_7B0 = 0; /*0x7bd421*/
    this->u32_7AC = 0; /*0x7bd427*/
    if ( v17 < v15 ) /*0x7bd42d*/
    {
      do /*0x7bd443*/
      {
        ++v17; /*0x7bd435*/
        *(unsigned char *)(this->u32_794 + v17 - 1) = 1; /*0x7bd436*/
      }
      while ( v17 < this->u32_79C ); /*0x7bd443*/
    }
    for ( i = 0; i < v8; *(unsigned char *)(this->u32_794 + i - 1) = 1 ) /*0x7bd449*/
      ++i; /*0x7bd451*/
    return -1; /*0x7bd459*/
  }
  qmemcpy((void *)(this->u32_78C + v4), v6, v7); /*0x7bd37b*/
  v11 = this->u32_790; /*0x7bd384*/
  this->u32_7B0 = 0; /*0x7bd38c*/
  this->u32_7AC = 0; /*0x7bd392*/
  v17 = v17; /*0x7bd398*/
  this->u32_790 = v7 + v11; /*0x7bd3a0*/
  if ( v17 >= v8 ) /*0x7bd3a6*/
    return -1; /*0x7bd45e*/
  do /*0x7bd3ba*/
  {
    ++v17; /*0x7bd3b2*/
    *(unsigned char *)(this->u32_794 + v17 - 1) = 1; /*0x7bd3b5*/
  }
  while ( v17 < v8 ); /*0x7bd3ba*/
  return -1; /*0x7bd352*/
}
}
// 0x7BEA80
namespace gamemd {
int AudioStream::ProcessStream()
{
  AudioStream * v1;
  int v2; // ebp
  unsigned int *v3; // ebx
  AudioStream * v4;
  char v5; // al
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v10; // eax
  signed int Position; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // ecx
  int v17; // edi
  int v18; // eax
  int v19; // edi
  int v20; // ecx
  int v21; // edi
  int v22; // eax
  int v23; // eax
  int v24; // eax
  void (__cdecl *v25)(int, int, unsigned int, unsigned int); // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int (__cdecl *v29)(unsigned int, unsigned int); // eax
  int v30; // edx
  char v31; // al
  int v32; // eax
  int v33; // [esp+10h] [ebp-Ch]
  int v35; // [esp+18h] [ebp-4h]

  v1 = (gamemd::AudioStream *)(this);
  v2 = *(unsigned int *)((char *)&this->__pad_666 + 26); /*0x7bea8d*/
  v3 = (unsigned int *)((char *)&this->__pad_666 + 26); /*0x7bea93*/
  v4 = &this->q040; /*0x7bea99*/
  if ( (*(unsigned char *)(v2 + 20) & 1) != 0 )
  {
    if ( (*(unsigned char *)&this->u8_1A4 & 0x10) != 0 ) /*0x7beafb*/
    {
      *(unsigned int *)((char *)&this->q1992 + 430) = *(unsigned int *)(*(unsigned int *)((char *)&this->__pad_666 + 26) + 28); /*0x7beb04*/
      *(unsigned int *)((char *)&this->__pad_666 + 42) |= 8u; /*0x7beb10*/
      v10 = *(unsigned int *)(v2 + 20); /*0x7beb13*/
      IDA_LOBYTE(v10) = v10 | 0x80; /*0x7beb16*/
      *(unsigned int *)(v2 + 20) = v10; /*0x7beb18*/
      return -1; /*0x7beb23*/
    }
    if ( (*(unsigned char *)&this->u8_84 & 2) != 0 ) /*0x7beb28*/
    {
      *(unsigned int *)((char *)&this->q1992 + 430) = *(unsigned int *)(v2 + 28); /*0x7beb2d*/
      CalcAudioStreamOffset(60 * *(unsigned int *)(v2 + 28) / *(unsigned int *)((char *)&this->u32_1C0 + 16)); /*0x7beb48*/
      return -1; /*0x7beb57*/
    }
    Position = AudioStream::GetPosition(this); /*0x7beb5f*/
    v12 = v3[332]; /*0x7beb66*/
    if ( (v3[1] & 2) != 0 ) /*0x7beb6c*/
      v13 = v12 + 2; /*0x7beb71*/
    else
      v13 = v12 + 1; /*0x7beb6e*/
    if ( Position >= 60 * v13 / *(unsigned int *)(v4 + 52) )
    {
      v15 = Audio_Process_7BEE20(v3, v2, Position); /*0x7bebfd*/
      v35 = v15; /*0x7bec04*/
      if ( (*(unsigned char *)(v4 + 64) & 4) != 0 ) /*0x7bec08*/
      {
        v3[332] = *(unsigned int *)(*v3 + 28); /*0x7bec15*/
        return -1; /*0x7bec1f*/
      }
      v33 = *(unsigned int *)(v4 + 48) / 3 - 1; /*0x7bec35*/
      if ( v33 < 0 ) /*0x7bec39*/
        v33 = 0; /*0x7bec3b*/
      if ( *(unsigned int *)(v2 + 28) != v15 )
      {
        do
        {
          if ( (*(unsigned char *)(v2 + 20) & 2) != 0 ) /*0x7bec50*/
            break; /*0x7bec50*/
          v16 = *(unsigned int *)(v1 + 320); /*0x7bec58*/
          v17 = *(unsigned int *)(*v3 + 28); /*0x7bec5e*/
          v18 = v3[332]; /*0x7bec61*/
          if ( v17 < v18 || v17 > v16 )
          {
            v20 = v16 - v3[332]; /*0x7bec8a*/
            if ( v20 >= 0 )
            {
              v21 = v17 - *(unsigned int *)(v1 + 296); /*0x7bec92*/
              v19 = v21 >= 0 ? v21 + v20 + 1 : *(unsigned int *)(v1 + 112) / 3;
            }
            else
            {
              v19 = *(unsigned int *)(v1 + 112) / 3; /*0x7bec8e*/
            }
          }
          else
          {
            v19 = v17 - v18; /*0x7bec6f*/
          }
          if ( v19 > v33 ) /*0x7beca6*/
            break; /*0x7beca6*/
          v22 = *(unsigned int *)(v2 + 20); /*0x7becac*/
          if ( (v22 & 4) != 0 ) /*0x7becb1*/
          {
            if ( (v22 & 8) != 0 ) /*0x7becb5*/
            {
              *(unsigned int *)(v2 + 40) = AudioCodec::Decode( /*0x7beccd*/
                                       (uint8_t *)(*(unsigned int *)(v2 + 8) + *(unsigned int *)(v2 + 36)),
                                       *(char **)(v2 + 8),
                                       *(unsigned int *)(v1 + 1904));
              v23 = *(unsigned int *)(v2 + 20); /*0x7becd0*/
              IDA_LOBYTE(v23) = v23 & 0xF7; /*0x7becd6*/
              *(unsigned int *)(v2 + 20) = v23; /*0x7becd8*/
            }
            qmemcpy(v3 + 9, *(const void **)(v2 + 8), *(unsigned int *)(v2 + 40)); /*0x7bece9*/
            v24 = v3[1]; /*0x7becf2*/
            v1 = this; /*0x7becf8*/
            IDA_LOBYTE(v24) = v24 | 1; /*0x7becfc*/
            v3[8] = *(unsigned int *)(v2 + 40); /*0x7becfe*/
            v3[1] = v24; /*0x7bed01*/
          }
          v25 = *(void (__cdecl **)(int, int, unsigned int, unsigned int))(v1 + 72); /*0x7bed04*/
          if ( v25 ) /*0x7bed09*/
          {
            if ( (*(unsigned int *)(v2 + 20) & 0x100) != 0 ) /*0x7bed11*/
            {
              v25(v1, 4, *(unsigned int *)(v2 + 28), *(unsigned int *)(v1 + 288)); /*0x7bed21*/
              v26 = *(unsigned int *)(v2 + 20); /*0x7bed23*/
              IDA_BYTE1(v26) &= ~1u; /*0x7bed29*/
              *(unsigned int *)(v2 + 20) = v26; /*0x7bed2c*/
            }
            if ( (*(unsigned int *)(v2 + 20) & 0x200) != 0 ) /*0x7bed35*/
            {
              (*(void (__cdecl **)(int, int, unsigned int, unsigned int))(v1 + 72))( /*0x7bed45*/
                v1,
                5,
                *(unsigned int *)(v2 + 28),
                *(unsigned int *)(v1 + 288));
              v27 = *(unsigned int *)(v2 + 20); /*0x7bed48*/
              IDA_BYTE1(v27) &= ~2u; /*0x7bed4e*/
              *(unsigned int *)(v2 + 20) = v27; /*0x7bed51*/
            }
            if ( (*(unsigned int *)(v2 + 20) & 0x400) != 0 ) /*0x7bed5a*/
            {
              Audio_Process_7BE830(v1, *(unsigned int *)(v2 + 28)); /*0x7bed61*/
              v28 = *(unsigned int *)(v2 + 20); /*0x7bed66*/
              IDA_BYTE1(v28) &= ~4u; /*0x7bed69*/
              *(unsigned int *)(v2 + 20) = v28; /*0x7bed6c*/
            }
          }
          v29 = *(int (__cdecl **)(unsigned int, unsigned int))(v1 + 76); /*0x7bed6f*/
          if ( v29 && v29(0, *(unsigned int *)(v2 + 28)) ) /*0x7bed7c*/
            return -2; /*0x7bedd6*/
          v30 = *(unsigned int *)(v2 + 20); /*0x7bed85*/
          *(unsigned int *)(v2 + 20) = 0; /*0x7bed88*/
          *(unsigned int *)(v2 + 24) = v30; /*0x7bed8f*/
          v2 = *(unsigned int *)(v2 + 12); /*0x7bed92*/
          *v3 = v2; /*0x7bed95*/
          ++*(unsigned int *)(v1 + 28); /*0x7bed9b*/
          if ( (*(unsigned char *)(v2 + 20) & 1) == 0 ) /*0x7beda3*/
          {
            v31 = *((unsigned char *)v3 + 4); /*0x7beddd*/
            ++v3[334]; /*0x7bede3*/
            if ( (v31 & 4) != 0 && (*(unsigned char *)(v1 + 336) & 4) == 0 ) /*0x7bedf2*/
            {
              v32 = *(unsigned int *)(*v3 + 16); /*0x7bedf9*/
              *v3 = v32; /*0x7bedfc*/
              *(unsigned int *)(v32 + 20) = *(unsigned int *)(v32 + 24); /*0x7bee02*/
              return -1; /*0x7bee0b*/
            }
            return -9; /*0x7bedf2*/
          }
        }
        while ( *(unsigned int *)(v2 + 28) != v35 );
      }
      v3[332] = *(unsigned int *)(*v3 + 28); /*0x7bedb4*/
      return -1; /*0x7bedb9*/
    }
    if ( (v3[1] & 4) != 0 ) /*0x7beb89*/
    {
      if ( Audio_Process_7BEE20(v3, v2, Position) == v3[332] && (*(unsigned char *)(v2 + 20) & 0x80) != 0 ) /*0x7beba9*/
      {
        v3[332] = *(unsigned int *)(v2 + 28); /*0x7bebb0*/
        return -1; /*0x7bebb7*/
      }
      else
      {
        v14 = v3[1] | 8; /*0x7bebc5*/
        v3[332] = *(unsigned int *)(v2 + 28); /*0x7bebc8*/
        v3[1] = v14; /*0x7bebce*/
        *(unsigned int *)(v2 + 20) |= 0x80u; /*0x7bebd7*/
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
    v5 = *(unsigned char *)&this->u8_1A4; /*0x7beaa8*/
    ++*(unsigned int *)((char *)&this->q1992 + 462); /*0x7beaae*/
    if ( (v5 & 4) != 0 && (*(unsigned char *)&this->q150 & 4) == 0 ) /*0x7beac1*/
    {
      v6 = *(unsigned int *)(v2 + 16); /*0x7beac9*/
      *v3 = v6; /*0x7beacc*/
      *(unsigned int *)(v6 + 20) = *(unsigned int *)(v6 + 24); /*0x7bead1*/
      v7 = *(unsigned int *)((char *)&this->__pad_666 + 42); /*0x7bead4*/
      if ( (v7 & 0x10) != 0 ) /*0x7bead9*/
      {
        IDA_LOBYTE(v7) = v7 | 8; /*0x7beadf*/
        *(unsigned int *)((char *)&this->__pad_666 + 42) = v7; /*0x7beae2*/
        v8 = *(unsigned int *)(v2 + 20); /*0x7beae5*/
        IDA_LOBYTE(v8) = v8 | 0x80; /*0x7beae8*/
        *(unsigned int *)(v2 + 20) = v8; /*0x7beaeb*/
        return -1; /*0x7beaf6*/
      }
      return -1; /*0x7bedc9*/
    }
    return -9; /*0x7bee0c*/
  }
}
}
// 0x7C3960
namespace gamemd {
unsigned int AudioStream::GetPosition()
{
  return (unsigned int)(60 * (*(int (__cdecl **)(int))&this->q140)(this)) / this->q1E0 /*0x7c3982*/
       + this->q520;
}
}
// 0x402550
namespace gamemd {
void AudioStream::Destructor()
{
  void (__thiscall *v2)(unsigned int *); // eax

  (*(void (**)(void))(*(Block + 53) + 40))(); /*0x402559*/
  if ( (*(unsigned char *)(Block + 41) & 5) != 0 ) /*0x402563*/
    (*(void (__thiscall **)(unsigned int *))(*(Block + 53) + 16))(Block); /*0x40256d*/
  (*(void (__thiscall **)(unsigned int *))(*(Block + 53) + 44))(Block); /*0x402578*/
  v2 = (void (__thiscall *)(unsigned int *))*(Block + 47); /*0x40257b*/
  if ( v2 ) /*0x402583*/
    v2(Block); /*0x402587*/
  *(Block + 90) = 0; /*0x40258b*/
  AudioStream::InitListAndCounters(Block); /*0x402595*/
  (*(void (__thiscall **)(unsigned int *))(*(Block + 53) + 8))(Block); /*0x4025a2*/
  RA2_OPDEL(Block); /*0x4025a6*/
}
} // namespace gamemd

// 0x402800
namespace gamemd {
int AudioStream::CheckFormatChanged(int a1, const void * a2)
{
  void *v3; // ebx
  int result; // eax

  v3 = (void *)(a1 + 380); /*0x402805*/
  if ( !memcmp(a2, (const void *)(a1 + 380), 0x20u) ) /*0x402817*/
  {
    *(unsigned int *)(a1 + 412) = 0; /*0x40281b*/
    return 0; /*0x402822*/
  }
  else
  {
    *(unsigned int *)(a1 + 412) = 1; /*0x402831*/
    result = *(unsigned int *)(a1 + 412); /*0x40283b*/
    qmemcpy(v3, a2, 0x20u); /*0x402841*/
  }
  return result; /*0x402821*/
}
} // namespace gamemd

// 0x4028B0
namespace gamemd {
int AudioStream::InitListAndCounters()
{
  int v2; // esi
  int result; // eax

  v2 = *(unsigned int *)((char *)&this->q296 + 26); /*0x4028b4*/
  LinkedList::Init(); /*0x4028ba*/
  --*(unsigned int *)(v2 + 240); /*0x4028c6*/
  ++*(unsigned int *)(v2 + 260); /*0x4028d3*/
  LinkedList::Init(); /*0x4028db*/
  result = *(unsigned int *)(v2 + 260) - 1; /*0x4028e6*/
  *(unsigned int *)(v2 + 260) = result; /*0x4028e9*/
  if ( result < 0 ) /*0x4028ef*/
    *(unsigned int *)(v2 + 260) = 0; /*0x4028f1*/
  return result; /*0x4028fb*/
}
} // namespace gamemd

// 0x404FD0
namespace gamemd {
int AudioStream::UpdateTimers()
{
  int64_t v0; // rax
  void **v1; // esi

  IDA_LODWORD(v0) = g_AudioConfigState; /*0x404fd0*/
  if ( g_AudioConfigState ) /*0x404fd8*/
  {
    v1 = (void **)g_AudioStreamObject; /*0x404fda*/
    if ( g_AudioStreamObject != &g_AudioStreamObject ) /*0x404fe6*/
    {
      do /*0x405031*/
      {
        IDA_LODWORD(v0) = v1[86]; /*0x404fe9*/
        if ( !(unsigned int)v0 ) /*0x404ff1*/
        {
          IDA_LODWORD(v0) = v1[7]; /*0x404ff3*/
          if ( (unsigned int)v0 == 2 ) /*0x404ff9*/
          {
            IDA_LODWORD(v0) = Audio::Callback(); /*0x404ffb*/
            *((unsigned long long *)v1 + 40) -= v0; /*0x405010*/
          }
        }
        v1[86] = (char *)v1[86] + 1; /*0x405023*/
        v1 = (void **)*v1; /*0x405029*/
      }
      while ( v1 != &g_AudioStreamObject ); /*0x405031*/
    }
  }
  return v0; /*0x405034*/
}
} // namespace gamemd

// 0x405040
namespace gamemd {
int AudioStream::UpdateCountdowners()
{
  int64_t v0; // rax
  void **v1; // esi
  int v2; // eax
  int64_t v3; // rax

  IDA_LODWORD(v0) = g_AudioConfigState; /*0x405040*/
  if ( g_AudioConfigState ) /*0x405048*/
  {
    v1 = (void **)g_AudioStreamObject; /*0x40504a*/
    if ( g_AudioStreamObject != &g_AudioStreamObject ) /*0x405056*/
    {
      do /*0x4050b9*/
      {
        IDA_LODWORD(v0) = v1[86]; /*0x405059*/
        if ( (unsigned int)v0 ) /*0x405061*/
        {
          v2 = (int)v1[86] - 1; /*0x405069*/
          v1[86] = (void *)v2; /*0x40506c*/
          if ( v2 < 0 ) /*0x405072*/
            v1[86] = 0; /*0x405074*/
          IDA_LODWORD(v0) = v1[86]; /*0x40507e*/
          if ( !(unsigned int)v0 ) /*0x405086*/
          {
            IDA_LODWORD(v0) = v1[7]; /*0x405088*/
            if ( (unsigned int)v0 == 2 ) /*0x40508e*/
            {
              IDA_LODWORD(v3) = Audio::Callback(); /*0x405090*/
              v0 = *((unsigned long long *)v1 + 40) + v3; /*0x4050a3*/
              *((unsigned long long *)v1 + 40) = v0; /*0x4050a5*/
            }
          }
        }
        v1 = (void **)*v1; /*0x4050b1*/
      }
      while ( v1 != &g_AudioStreamObject ); /*0x4050b9*/
    }
  }
  return v0; /*0x4050bc*/
}
} // namespace gamemd

// 0x407860
namespace gamemd {
char * AudioStream::Constructor(unsigned long long a2)
{
  int v3; // esi
  char *v4; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // eax

  if ( !this ) /*0x40786b*/
    return 0; /*0x40786e*/
  v3 = IDA_HIDWORD(a2); /*0x407876*/
  if ( a2 < 0x1B58 ) /*0x40788a*/
  {
    IDA_LODWORD(a2) = 7000; /*0x407896*/
    v3 = 0; /*0x40789a*/
  }
  v4 = (char *)operator new(0xF8u); /*0x4078a6*/
  memset(v4, 0, 0xF8u); /*0x4078b1*/
  DListNode::InitEmpty(v4); /*0x4078b8*/
  *((unsigned int *)v4 + 4) = this; /*0x4078c6*/
  v5 = sub_4036C0(); /*0x4078c9*/
  *((unsigned int *)v4 + 5) = v5; /*0x4078ce*/
  *(unsigned int *)(v5 + 148) = 0; /*0x4078d1*/
  *(unsigned int *)(*((unsigned int *)v4 + 5) + 144) = 0; /*0x4078da*/
  *(unsigned int *)(*((unsigned int *)v4 + 5) + 152) = 0; /*0x4078e7*/
  *(unsigned int *)(*((unsigned int *)v4 + 5) + 156) = 0; /*0x4078f3*/
  *((unsigned int *)v4 + 6) = a2; /*0x4078f9*/
  *((unsigned int *)v4 + 7) = v3; /*0x4078fc*/
  AudioStream::InitNodeFields(v4 + 60); /*0x4078ff*/
  Struct::ZeroInit32(v4 + 92); /*0x407907*/
  *((unsigned int *)v4 + 32) = 0; /*0x40790c*/
  *((unsigned int *)v4 + 34) = 0; /*0x407912*/
  strcpy(v4 + 164, aAudioStream); /*0x407937*/
  v6 = *((unsigned int *)v4 + 5); /*0x407940*/
  if ( v6 /*0x407980*/
    && (*(unsigned int *)(v6 + 192) = v4,
        *(unsigned int *)(*((unsigned int *)v4 + 5) + 176) = AudioStream::ReadStreamAndSyncPosition,
        *(unsigned int *)(*((unsigned int *)v4 + 5) + 184) = AudioStream::SetPlaybackCallback,
        *(unsigned int *)(*((unsigned int *)v4 + 5) + 188) = AudioStream::ProcessCallback,
        v7 = sub_4087F0(),
        (*((unsigned int *)v4 + 12) = v7) != 0) )
  {
    EnterCriticalSection(&CriticalSection); /*0x407996*/
    InsertBeforeLinkedList(dword_87E810, v4); /*0x4079a3*/
    LeaveCriticalSection(&CriticalSection); /*0x4079ad*/
    return v4; /*0x4079b3*/
  }
  else
  {
    AudioSample::Destructor(v4); /*0x407984*/
    return 0; /*0x407989*/
  }
}
} // namespace gamemd
