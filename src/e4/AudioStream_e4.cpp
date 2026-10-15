// E4 materialized pending bodies (auto-generated from full_export v3)
#define GAMEMD_E4_VECTOR_TREE_TRUTH 1  // G57a2: G42.55 tree-truth bridge pulls core/vector.hpp templates
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
#include "e4/classes/LoadingScreen_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/Options_e4.hpp"
#include "e4/classes/AudioMixer_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/StreamClass_e4.hpp"
#include "e4/classes/DListNode_e4.hpp"
#include "e4/classes/Random_e4.hpp"
#include "e4/classes/Socket_e4.hpp"
#include "e4/classes/Voice_e4.hpp"
#include "e4/classes/AudioSample_e4.hpp"
#include "e4/classes/Struct_e4.hpp"
#include "classes/Audio_e4.hpp"  // G42.57w9 method-carrier supply
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
#include "e4/classes/AudioCodec_e4.hpp"  // G57w10 D supply

// 0x401910
namespace gamemd {  // G42.18 ns repair
int AudioStream::ReleaseSubsystem()
{

  int (***v2)(unsigned int, int); // ecx
  int result; // eax

  v2 = *(int (****)(unsigned int, int))&this->u32_110; /*0x401913*/
  *&this->q118 = 0; /*0x401919*/
  if ( v2 ) /*0x401925*/
  {
    result = (**v2)(v2, 1); /*0x40192b*/
    *&this->u32_110 = 0; /*0x40192d*/
  }
  return result; /*0x401937*/

}
}  // G42.18 ns repair
// 0x4026B0
namespace gamemd {
int AudioStream::Stop(void *a1, void *a2)
{
  return (*(int (**)(void))(this->u32_D4 + 44))();
}
}
// 0x4026F0
namespace gamemd {
int AudioStream::ReleaseChannel(void *a1)
{

  (*(void (**)(void))(this->u32_D4 + 40))(); /*0x4026f9*/
  *&this->u32_A4 &= ~0x10u; /*0x402705*/
  return (*(int (**)(AudioStream *))(this->u32_D4 + 44))(this);

}
}
// 0x4033C0
namespace gamemd {
void AudioStream::DestroyAll(void * Block)
{

  ++*(unsigned int *)off_815E98[3].__pad_0; /*0x4033cc*/
  LinkedList::Init((LinkedList *)Block); /*0x4033d1*/
  int v2; // eax
  v2 = *(unsigned int *)off_815E98[3].__pad_0 - 1; /*0x4033df*/
  *(unsigned int *)off_815E98[3].__pad_0 = v2; /*0x4033e2*/
  if ( v2 < 0 ) /*0x4033e5*/
    *(unsigned int *)off_815E98[3].__pad_0 = 0; /*0x4033ed*/
  AudioQueue *Next; // edi
  Next = (AudioQueue *)((AudioQueue *)Block->AudioQueue_F8))->GetNext(); /*0x403401*/
  AudioStream *i; // ebx
  for ( i = (AudioStream *)Next; Next; i = (AudioStream *)Next ) /*0x403407*/
  {
    Next = (AudioQueue *)((AudioQueue *)(Next))->GetNextAlt(); /*0x403412*/
    AudioStream::Destructor((unsigned int *)(i)); /*0x403414*/
  }
  Block->u32_18->vt_slot_32(); /*0x403427*/
  *(unsigned int *)(Block->u32_18 + 4 * (int)Block->u32_1C + 28) = 0; /*0x403430*/
  int v5; // eax
  v5 = Block->u32_18; /*0x403438*/
  int v6; // ecx
  v6 = *(unsigned int *)(v5 + 16) - 1; /*0x40343e*/
  *(unsigned int *)(v5 + 16) = v6; /*0x403440*/
  if ( v6 < 0 ) /*0x403446*/
    *(unsigned int *)(Block->u32_18 + 16) = 0; /*0x40344b*/
  operator delete((void *)(Block)); /*0x403453*/
}
}
// 0x403820
namespace gamemd {
int AudioStream::Reset(void *a1, void *a2)
{

  *(unsigned int *)this->__pad_000 = 0; /*0x403822*/
  this->u8_4 = 0; /*0x403824*/
  this->q008 = 0; /*0x403827*/
  this->q00C = 0; /*0x40382a*/
  this->u32_10 = 0; /*0x40382d*/
  this->u32_14 = 0; /*0x403830*/
  this->u32_18 = 0; /*0x403833*/
  this->u32_1C = 0; /*0x403836*/
  this->q028 = 0; /*0x403839*/
  this->u32_2C = 0; /*0x40383c*/
  this->q048 = 0; /*0x40383f*/
  this->q050 = 0; /*0x403842*/
  this->q040 = 5000; /*0x403845*/
  this->q044 = 0; /*0x40384c*/
  this->q030 = 0; /*0x40384f*/
  this->u32_34 = 0; /*0x403852*/
  this->q038 = 0; /*0x403855*/
  this->q03C = 0; /*0x403858*/
  this->q054 = 0; /*0x40385b*/
  this->q04C = 0; /*0x40385e*/
  return 0; /*0x403861*/

}
}
// 0x4038A0
namespace gamemd {
int AudioStream::ResetChannel(int a2, int a3)
{

  this->q008 = (void *)a2; /*0x4038a4*/
  this->q00C = (int)((void *)a3); /*0x4038ab*/
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


  char *v1; // edx
  v1 = (char *)this->u32_A8; /*0x404700*/
  int v2; // eax
  v2 = 0; /*0x404707*/
  int v3; // esi
  v3 = 0; /*0x404709*/
  this->u32_1E0 = (unsigned int)(v1); /*0x40470e*/
  if ( !v1 || (this->u32_18 & 0x20) != 0 ) /*0x40471a*/
    return 0; /*0x40471a*/
  int AudioStream_field_0x24; // edi
  AudioStream_field_0x24 = this->q024; /*0x40471c*/
  if ( *(unsigned int *)(AudioStream_field_0x24 + 88) >= 0x21u ) /*0x404727*/
    return (int)this->q028 + 28; /*0x404727*/
  if ( (*(unsigned char *)(AudioStream_field_0x24 + 16) & 0x20) != 0 ) /*0x40472d*/
  {
    v3 = 1; /*0x404730*/
    this->u32_1E0 = (unsigned int)(v1 - 1); /*0x404735*/
    this->u32_AC = 0; /*0x40473b*/
  }
  else
  {
    this->u32_AC = (unsigned int)((void *)-1); /*0x404743*/
  }
  if ( (*(unsigned char *)(AudioStream_field_0x24 + 16) & 0x40) != 0 ) /*0x404751*/
    --this->u32_1E0; /*0x404753*/
  if ( (int)this->u32_1E0 <= 0 ) /*0x404761*/
  {
    *(unsigned int *)(AudioStream_field_0x24 + 12) = 0; /*0x404763*/
    return 0; /*0x40476a*/
  }
  char *v6; // edx
  v6 = (char *)(&this->q160); /*0x40476b*/
  do /*0x404780*/
  {
    *(unsigned int *)v6 = v3; /*0x404771*/
    ++v2; /*0x404779*/
    v6 += 4; /*0x40477a*/
    ++v3; /*0x40477d*/
  }
  while ( v2 < (int)this->u32_1E0 ); /*0x404780*/
  if ( (this->u32_18 & 8) == 0 && (*(unsigned char *)(this->q024 + 16) & 0x20) != 0 ) /*0x40478f*/
    return (int)this->q028 + 28; /*0x402030*/
  else
    return ((int)this)->SelectRandom(); /*0x404793*/

}
}
// 0x4047B0
namespace gamemd {
int AudioStream::SelectRandom()
{
  int v9; // ecx

  unsigned int *v2; // ecx
  v2 = (unsigned int *)(this->q090); /*0x4047b3*/
  int v3; // edx
  v3 = v2[4]; /*0x4047b9*/
  if ( v2[22] >= 0x21u && (this->u32_18 & 0x20) == 0 ) /*0x4047c5*/
    return 0; /*0x4047c5*/
  int v4; // eax
  v4 = this->u32_1E0; /*0x4047cb*/
  if ( v4 && (this->u32_18 & 0x20) == 0 ) /*0x4047d9*/
  {
    if ( (v3 & 2) != 0 ) /*0x4047de*/
    {
  int v5; // eax
      v5 = Random::Range(&Randomizer_Global, 0, v4 - 1); /*0x4047ea*/
  int v6; // edi
      v6 = this->u32_1E0 - 1; /*0x404803*/
      this->u32_AC = *&this->u8_4 * v5 + 352); /*0x404804*/
      v5 = v5; /*0x40480c*/
      if ( v5 < v6 ) /*0x40480f*/
      {
  unsigned int *v8; // eax
        v8 = &this->u8_4 * v5 + 352); /*0x404811*/
        do /*0x404825*/
        {
          ++v5; /*0x404816*/
          *v8 = v8[1]; /*0x404817*/
          ++v8; /*0x40481f*/
        }
        while ( v5 < this->u32_1E0 - 1 ); /*0x404825*/
      }
    }
    else
    {
      ++this->u32_AC; /*0x404829*/
    }
    --this->u32_1E0; /*0x404836*/
    v9 = *&this->u8_4 * this->u32_AC + 40); /*0x404842*/
    return v9 + 28; /*0x404847*/
  }
  if ( (v3 & 1) != 0 && (this->u32_18 & 0x20) == 0 ) /*0x404855*/
  {
  int v10; // ecx
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
  int v12; // eax
  v12 = this->u32_A8; /*0x404889*/
  if ( v12 < 1 ) /*0x404892*/
    return 0; /*0x4048aa*/
  this->u32_18 |= 0x10u; /*0x40489a*/
  v9 = *&this->u8_4 * v12 + 36); /*0x40489d*/
  return v9 + 28; /*0x404878*/
}
}
// 0x404E70
namespace gamemd {
void AudioStream::CleanupChannels()
{
  DListNode *v3; // edi

  if ( g_AudioConfigState ) /*0x404e7c*/
  {
  int v2; // esi
    v2 = *(unsigned int *)g_AudioStreamObject; /*0x404e82*/
    if ( *(DListNode **)g_AudioStreamObject != &g_AudioStreamObject ) /*0x404e8e*/
    {
  Voice *v1; // edi
      v1 = v1; /*0x404e95*/
      do /*0x404fb6*/
      {
        v3 = *(DListNode **)v2; /*0x404e96*/
  DListNode *v8; // [esp+8h] [ebp-4h]
        v8 = *(DListNode **)v2; /*0x404e98*/
        if ( (v2->nextArrayIndex & 1) == 0 ) /*0x404ea1*/
        {
  int v4; // ecx
          v4 = v2->fallRate; /*0x404ea7*/
          if ( v4 && v2 == *(unsigned int *)(v4 + 192) ) /*0x404eb7*/
          {
            if ( (v2->nextArrayIndex & 2) != 0 ) /*0x404ebd*/
              ((Voice *)(v1))->Stop(); /*0x404ebf*/
            AudioStream::ReleaseChannel(v2->fallRate); /*0x404eca*/
            *(unsigned int *)(v2->fallRate + 192) = 0; /*0x404ed5*/
            *(unsigned int *)(v2->fallRate + 188) = 0; /*0x404ee1*/
            *(unsigned int *)(v2->fallRate + 180) = 0; /*0x404eed*/
            *(unsigned int *)(v2->fallRate + 184) = 0; /*0x404ef9*/
            *(unsigned int *)(v2->fallRate + 144) = 0; /*0x404f05*/
            *(unsigned int *)(v2->fallRate + 152) = 0; /*0x404f11*/
            *(unsigned int *)(v2->fallRate + 156) = 0; /*0x404f1d*/
            v2->fallRate = 0; /*0x404f23*/
          }
  int v5; // ebp
          v5 = 0; /*0x404f2f*/
          if ( v2->lineTrailer > 0 ) /*0x404f33*/
          {
  RefCount **v6; // edi
            v6 = &v2->owningHouseIndex; /*0x404f35*/
            do /*0x404f4d*/
            {
              (*v6)->Decrement(); /*0x404f3a*/
              *v6 = 0; /*0x404f3f*/
              ++v5; /*0x404f47*/
              ++v6; /*0x404f48*/
            }
            while ( v5 < v2->lineTrailer ); /*0x404f4d*/
            v3 = v8; /*0x404f4f*/
          }
          v2->lineTrailer = 0; /*0x404f53*/
          v2->referenceCount = 4; /*0x404f59*/
          v2->q138 = 0; /*0x404f60*/
          v2->q278 = 0; /*0x404f66*/
          v2->nextArrayIndex |= 1u; /*0x404f72*/
        }
        LinkedList::Init((LinkedList *)v2); /*0x404f77*/
        v2->q138 = 0; /*0x404f7c*/
        if ( v2->nextArrayIndex >= 0 ) /*0x404f87*/
          PushFrontLinkedListAlt((unsigned int *)(dword_87E2A8), v2); /*0x404f9c*/
        else
          operator delete((void *)((void *)v2)); /*0x404f8a*/
        v2 = (int)v3; /*0x404fa7*/
        --dword_87E28C; /*0x404fb0*/
      }
      while ( v3 != &g_AudioStreamObject ); /*0x404fb6*/
    }
  }
}
}
// 0x4079C0
namespace gamemd {
int AudioStream::ReadStreamAndSyncPosition()
{


  int v2; // esi
  v2 = this->u32_C0; /*0x4079c4*/
  ReadAudioStream(*(int **)(v2 + 56), *(unsigned int *)(v2 + 144)); /*0x4079d3*/
  AudioStream::ReadStreamAndReturn(*(AudioStream **)(v2 + 56)); /*0x4079db*/
  int v3; // eax
  v3 = *(unsigned int *)(v2 + 160); /*0x4079e3*/
  int v4; // ecx
  v4 = *(unsigned int *)(*(unsigned int *)(v2 + 56) + 8); /*0x4079e9*/
  if ( v3 <= v4 ) /*0x4079ee*/
    *(unsigned int *)(v2 + 144) = v3; /*0x4079f8*/
  else
    *(unsigned int *)(v2 + 144) = v4; /*0x4079f0*/
  int v5; // eax
  v5 = *(unsigned int *)(v2 + 144); /*0x4079fe*/
  *&this->u32_174 = v5; /*0x407a04*/
  *&this->u32_178 = v5; /*0x407a0a*/
  *&this->u32_170 = *(unsigned int *)(*(unsigned int *)(v2 + 56) + 4); /*0x407a16*/
  return 0; /*0x407a1c*/

}
}
// 0x407A30
namespace gamemd {
int AudioStream::SetPlaybackCallback()
{


  int v1; // esi
  v1 = this->u32_C0; /*0x407a31*/
  if ( (*(unsigned char *)(v1 + 12) & 3) != 0 ) /*0x407a3b*/
  {
    *(unsigned int *)(v1 + 32) = Audio::Callback(); /*0x407a42*/
  int v2; // edx
    *(unsigned int *)(v1 + 36) = v2; /*0x407a45*/
  }
  int v3; // eax
  v3 = *(unsigned int *)(v1 + 12); /*0x407a48*/
  LOBYTE(v3) = v3 & 0xF8; /*0x407a4b*/
  *(unsigned int *)(v1 + 12) = v3; /*0x407a4d*/
  *(unsigned int *)(v1 + 128) = 0; /*0x407a50*/
  return 0; /*0x407a5c*/

}
}
// 0x407A60
namespace gamemd {
int AudioStream::ProcessCallback(void *a1_1)
{

  int v1; // esi
  v1 = a1_1->AudioStream_field_0xC0[0]; /*0x407a61*/
  if ( (*(unsigned char *)(v1 + 12) & 3) != 0 ) /*0x407a6b*/
  {
    *(unsigned int *)(v1 + 32) = Audio::Callback(); /*0x407a72*/
  int v2; // edx
    *(unsigned int *)(v1 + 36) = v2; /*0x407a75*/
  }
  int v3; // eax
  v3 = *(unsigned int *)(v1 + 12); /*0x407a78*/
  (*((unsigned char *)&(v3))) = v3 & 0xF8; /*0x407a7b*/
  *(unsigned int *)(v1 + 12) = v3; /*0x407a7d*/
  *(unsigned int *)(v1 + 128) = 0; /*0x407a80*/
  return 0; /*0x407a8c*/
}
}
// 0x4084E0
namespace gamemd {
void AudioStream::InitNodeFields()
{

  *(unsigned int *)this->__pad_000 = 0; /*0x4084e2*/
  this->u8_4 = 0; /*0x4084e4*/
  this->u32_14 = 0; /*0x4084e7*/
  this->u32_18 = 0; /*0x4084ea*/
  (&this->q008)->Init(); /*0x4084f0*/

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
int AudioStream::ReadStreamAndReturn(void *a1_1)
{
  ReadAudioStream((int *)a1_1->__pad_0, 0); /*0x409315*/
  return (int)a1_1->AudioStream_field_0x8; /*0x40931d*/
}
}
// 0x4A33A0
namespace gamemd {
int AudioStream::ReadSamples(const void * a2, void *a2_2)
{

  AudioStream *v2; // ebx
  v2 = (gamemd::AudioStream *)(a2_2); /*0x4a33a7*/
  int v3; // edx
  v3 = *(unsigned int *)&a2_2->__pad_5C[20]; /*0x4a33ac*/
  if ( !v3 ) /*0x4a33b7*/
    return -1; /*0x4a33b7*/
  if ( *(unsigned int *)a2_2->__pad_0 == 2 )
  {
    if ( !dword_8A0E08 || !*(unsigned int *)&dword_8A0E08[112] ) /*0x4a33d8*/
      return -1; /*0x4a33c6*/
  unsigned int v15[4]; // [esp+20h] [ebp-E0h] BYREF
    v15[2] = 256; /*0x4a33e7*/
    v15[3] = 256; /*0x4a33eb*/
  unsigned int v17[25]; // [esp+9Ch] [ebp-64h] BYREF
    memset(v17, 0, sizeof(v17)); /*0x4a33f8*/
    v15[0] = 0; /*0x4a3401*/
    v15[1] = 0; /*0x4a340f*/
    v17[0] = 100; /*0x4a3413*/
    return (*(int (__stdcall **)(int, unsigned int, unsigned int, unsigned int *, int, unsigned int *))(*(unsigned int *)v3 + 20))( /*0x4a3427*/
             v3,
             0,
             *(unsigned int *)&dword_8A0E08[112],
             v15,
             512,
             v17);
  }
  else
  {
  unsigned int v16[27]; // [esp+30h] [ebp-D0h] BYREF
    memset(v16, 0, sizeof(v16)); /*0x4a3443*/
    v16[0] = 108; /*0x4a344e*/
    if ( (*(int (__stdcall **)(int, unsigned int, unsigned int *, int, unsigned int))(*(unsigned int *)v3 + 100))(v3, 0, v16, 2081, 0) )
    {
      return 1; /*0x4a3465*/
    }
    else
    {
      if ( *(unsigned int *)v2->__pad_000 ) /*0x4a3474*/
      {
        if ( *(unsigned int *)v2->__pad_000 == 1 ) /*0x4a347f*/
        {
  int *v5; // ecx
          v5 = (int *)g_ZBufferDescriptor; /*0x4a3485*/
          if ( g_ZBufferDescriptor ) /*0x4a348d*/
          {
            if ( *(unsigned int *)&g_VisibleSurfaceDescriptor ) /*0x4a3499*/
            {
  unsigned short *v6; // ebx
              v6 = (unsigned short *)v16[9]; /*0x4a34a6*/
  unsigned int v7; // edi
              v7 = 0; /*0x4a34aa*/
  int v8; // ebp
              v8 = v16[4] >> 1; /*0x4a34ac*/
  int v14; // [esp+1Ch] [ebp-E4h]
              v14 = v16[4] >> 1; /*0x4a34b0*/
  unsigned int Stream_field_04; // [esp+18h] [ebp-E8h]
              Stream_field_04 = g_ZBufferDescriptor[2].Stream_field_04; /*0x4a34b4*/
              if ( Stream_field_04 ) /*0x4a34b8*/
              {
                do /*0x4a353c*/
                {
  unsigned short *SamplePosition; // esi
                  SamplePosition = (unsigned short *)((Audio *)(v5))->GetSamplePosition(0, v7 - v5->Width); /*0x4a34d4*/
  unsigned short *v10; // eax
                                    v10 = (unsigned short *)StreamClass::ReadAndSeek((int)(/*0x4a34df*/                                    *(int **)&g_VisibleSurfaceDescriptor),                                    0,                                    v7 - *(unsigned int *)(*(unsigned int *)&g_VisibleSurfaceDescriptor + 4));
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
                      v5 = (int *)g_ZBufferDescriptor; /*0x4a3507*/
  unsigned short *v11; // edx
                      v11 = SamplePosition + 1; /*0x4a350d*/
                      ++v6; /*0x4a3510*/
                      if ( (unsigned int)(SamplePosition + 1) >= g_ZBufferDescriptor[1].Stream_field_08 ) /*0x4a3516*/
                        v11 = (unsigned short *)((char *)v11 - g_ZBufferDescriptor[1].Stream_field_0C); /*0x4a3518*/
                      SamplePosition = v11; /*0x4a351b*/
                      if ( (unsigned int)++v10 >= *(unsigned int *)(*(unsigned int *)&g_VisibleSurfaceDescriptor + 28) ) /*0x4a3529*/
                        v10 = (unsigned short *)((char *)v10 - *(unsigned int *)(*(unsigned int *)&g_VisibleSurfaceDescriptor + 32)); /*0x4a352b*/
                      --v8; /*0x4a352e*/
                    }
                    while ( v8 ); /*0x4a352f*/
                    v8 = v14; /*0x4a3531*/
                  }
                  else
                  {
                    v5 = (int *)g_ZBufferDescriptor; /*0x4a3540*/
                  }
                  ++v7; /*0x4a3539*/
                }
                while ( v7 < Stream_field_04 ); /*0x4a353c*/
              }
              v2 = (gamemd::AudioStream *)(a2_2); /*0x4a356f*/
            }
          }
        }
      }
      else if ( a2_2 ) /*0x4a3551*/
      {
        memcpy((void *)v16[9], a2_2, v16[4] * (int)v2->q00C); /*0x4a3564*/
      }
      return (*(int (__stdcall **)(unsigned int, unsigned int))(**&v2->u32_70 + 128))(
               *&v2->u32_70,
               0) != 0
           ? 2
           : 0;
    }
  }
}
}
// 0x4BEAC0
namespace gamemd {
char AudioStream::DrawWaveform(int *a2, unsigned int *a3, unsigned int *a4, uint8_t *a5, int a6, int a7, int a8)
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
  int v20; // ebp
  int v21; // ebx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  unsigned int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  unsigned int v29; // eax
  int Stream_field_04; // edi
  unsigned short *SamplePosition; // edi
  int v32; // ebx
  int v33; // eax
  unsigned short *v34; // ebx
  int v35; // ebp
  int v36; // esi
  int v37; // eax
  int v38; // ecx
  int v39; // eax
  int v40; // edx
  int v41; // ecx
  int v42; // esi
  unsigned __int16 v43; // ax
  unsigned short *v44; // eax
  int v45; // eax
  unsigned short *v46; // eax
  bool v47; // zf
  int v49; // eax
  int v50; // edx
  int v51; // esi
  unsigned __int16 v52; // ax
  unsigned short *v53; // ecx
  unsigned short *v54; // ecx
  int v55; // edx
  int v56; // esi
  unsigned __int16 v57; // ax
  unsigned int Stream_field_08; // ecx
  unsigned int v59; // edi
  int v60; // esi
  unsigned short *v61; // eax
  int v62; // [esp+10h] [ebp-6Ch]
  int v63; // [esp+10h] [ebp-6Ch]
  int v64; // [esp+10h] [ebp-6Ch]
  int v65; // [esp+14h] [ebp-68h]
  int v66; // [esp+18h] [ebp-64h]
  int v67; // [esp+1Ch] [ebp-60h]
  int v68; // [esp+20h] [ebp-5Ch]
  int v69; // [esp+24h] [ebp-58h]
  int v70; // [esp+28h] [ebp-54h]
  int v72; // [esp+30h] [ebp-4Ch]
  int v73; // [esp+30h] [ebp-4Ch]
  int v74; // [esp+30h] [ebp-4Ch]
  int v75[2]; // [esp+34h] [ebp-48h] BYREF
  unsigned short *v76; // [esp+3Ch] [ebp-40h] BYREF
  int v77; // [esp+40h] [ebp-3Ch]
  int v78; // [esp+4Ch] [ebp-30h] BYREF
  int v79; // [esp+50h] [ebp-2Ch]
  int v80; // [esp+5Ch] [ebp-20h] BYREF
  int v81; // [esp+60h] [ebp-1Ch]
  int v82; // [esp+64h] [ebp-18h] BYREF
  int v83; // [esp+68h] [ebp-14h]
  int v84; // [esp+6Ch] [ebp-10h] BYREF
  int v85; // [esp+70h] [ebp-Ch]
  int v86; // [esp+74h] [ebp-8h]
  int v87; // [esp+78h] [ebp-4h]
  int pad_0; // [esp+80h] [ebp+4h]
  char *v89; // [esp+84h] [ebp+8h]
  unsigned int *v90; // [esp+84h] [ebp+8h]
  int v91; // [esp+84h] [ebp+8h]
  char *v92; // [esp+88h] [ebp+Ch]
  int v93; // [esp+88h] [ebp+Ch]
  unsigned __int8 *v94; // [esp+8Ch] [ebp+10h]
  unsigned __int8 *v95; // [esp+8Ch] [ebp+10h]
  unsigned __int8 *v96; // [esp+8Ch] [ebp+10h]
  int v97; // [esp+90h] [ebp+14h]
  int v98; // [esp+90h] [ebp+14h]
  int v99; // [esp+94h] [ebp+18h]
  int v100; // [esp+94h] [ebp+18h]
  int v101; // [esp+94h] [ebp+18h]
  int v102; // [esp+98h] [ebp+1Ch]

  if ( a6 < 8 ) /*0x4bead5*/
    return 0; /*0x4bead5*/
  v8 = (int *)(*(int (**)(AudioStream *, int *))(*(unsigned int *)this->__pad_000 + 120))(this, &v78); /*0x4beae2*/
  v9 = (int *)(ClipRectIntersection((RectangleStruct *)(&v76), a2, v8, 0, 0)); /*0x4beaf5*/
  v10 = *v9; /*0x4beafc*/
  v84 = *v9; /*0x4beafe*/
  v11 = v9->vtable2; /*0x4beb02*/
  v85 = v11; /*0x4beb05*/
  v86 = v9->vtable3; /*0x4beb0c*/
  v12 = v9->vtable4; /*0x4beb10*/
  v87 = v12; /*0x4beb15*/
  if ( !v86 && !v12 ) /*0x4beb1d*/
    return 0; /*0x4beb1d*/
  v13 = v10 + *a3; /*0x4beb3c*/
  v14 = v10 + *a4; /*0x4beb3e*/
  v15 = a8; /*0x4beb40*/
  v16 = v11 + a3[1]; /*0x4beb47*/
  v17 = v13; /*0x4beb49*/
  v18 = v11 + a4[1]; /*0x4beb4b*/
  v19 = a7; /*0x4beb4d*/
  v80 = v13; /*0x4beb56*/
  v81 = v16; /*0x4beb5a*/
  v82 = v14; /*0x4beb5e*/
  v83 = v18; /*0x4beb62*/
  if ( v13 > v14 ) /*0x4beb66*/
  {
    v17 = v14; /*0x4beb68*/
    v19 = a8; /*0x4beb6a*/
    v15 = a7; /*0x4beb6c*/
    v80 = v14; /*0x4beb73*/
    v81 = v18; /*0x4beb77*/
    v82 = v13; /*0x4beb7b*/
    v83 = v16; /*0x4beb7f*/
  }
  v78 = v82; /*0x4beb8f*/
  v20 = v17; /*0x4beb94*/
  v21 = v81; /*0x4beb96*/
  v79 = v83; /*0x4beba2*/
  if ( !(unsigned __int8)ClipLine((IUnknown *)(&v80), &v82, &v84) ) /*0x4beba6*/
    return 0; /*0x4beba6*/
  v92 = (char *)v15; /*0x4bebc1*/
  v89 = (char *)v19; /*0x4bebc8*/
  if ( v82 != v78 || v83 != v79 ) /*0x4bebd5*/
  {
    v75[0] = v20 - v82; /*0x4bebe7*/
    v75[1] = v21 - v83; /*0x4bebeb*/
    v76 = (unsigned short *)(v20 - v78); /*0x4bebfb*/
    v77 = v21 - v79; /*0x4bebff*/
    Vector::TwoDMagnitudeMath((int *)&v76); /*0x4bec07*/
    v99 = v22; /*0x4bec10*/
    Vector::TwoDMagnitudeMath(v75); /*0x4bec17*/
    LOWORD(v24) = Math::RoundToInt((double)v23 / (double)v99 * (double)(v19 - v15)); /*0x4bec45*/
    v25 = abs32(v24); /*0x4bec4d*/
    if ( v19 >= v15 ) /*0x4bec51*/
      v92 = (char *)(v19 - v25); /*0x4bec62*/
    else
      v92 = (char *)(v19 + v25); /*0x4bec55*/
  }
  if ( v80 != v20 || v81 != v21 ) /*0x4bec77*/
  {
    v77 = v81 - v79; /*0x4bec8d*/
    v76 = (unsigned short *)(v80 - v78); /*0x4bec97*/
    v78 = v20 - v78; /*0x4bec9b*/
    v79 = v21 - v79; /*0x4bec9f*/
    Vector::TwoDMagnitudeMath(&v78); /*0x4beca3*/
    v100 = v26; /*0x4becac*/
    Vector::TwoDMagnitudeMath((int *)&v76); /*0x4becb3*/
    LOWORD(v28) = Math::RoundToInt((double)v27 / (double)v100 * (double)(v19 - v15)); /*0x4bece1*/
    v29 = abs32(v28); /*0x4bece9*/
    if ( v15 <= v19 ) /*0x4beced*/
      v89 = (char *)(v15 + v29); /*0x4becfc*/
    else
      v89 = (char *)(v15 - v29); /*0x4becf1*/
  }
  (*(void (**)(AudioStream *))(*(unsigned int *)this->__pad_000 + 112))(this); /*0x4bed0b*/
  v101 = (*(int (**)(AudioStream *, int, int))(*(unsigned int *)this->__pad_000 + 92))(this, v80, v81); /*0x4bed25*/
  if ( !g_ZBufferDescriptor ) /*0x4bed2e*/
    return 0; /*0x4bed2e*/
  Stream_field_04 = g_ZBufferDescriptor->Stream_field_04; /*0x4bed38*/
  v79 = v81; /*0x4bed3f*/
  SamplePosition = (unsigned short *)((int *)g_ZBufferDescriptor)->GetSamplePosition(v80, v81 - Stream_field_04); /*0x4bed56*/
  v32 = *(unsigned int *)(*(unsigned int *)&g_VisibleSurfaceDescriptor + 4); /*0x4bed5c*/
  v79 = v81; /*0x4bed5f*/
  v33 = StreamClass::ReadAndSeek((int)(*(int **)&g_VisibleSurfaceDescriptor), v80, v81 - v32); /*0x4bed67*/
  v34 = (unsigned short *)v33; /*0x4bed7a*/
  LOWORD(v33) = LOWORD(g_ZBufferDescriptor->Stream_field_04) + LOWORD(g_ZBufferDescriptor[1].Stream_field_10); /*0x4bed87*/
  v67 = -1; /*0x4bed8b*/
  v102 = (int)&v89[v33 - v81 - v85]; /*0x4bed99*/
  pad_0 = (int)g_ZBufferDescriptor[2].m_Stream->__pad_0; /*0x4beda3*/
  if ( !v101 ) /*0x4bedb3*/
    return 0; /*0x4bf63e*/
  v35 = 256 - a6; /*0x4bedd0*/
  v70 = (a6 * *a5) >> 8; /*0x4bedd8*/
  v69 = (a6 * a5[1]) >> 8; /*0x4bede7*/
  v68 = (a6 * a5[2]) >> 8; /*0x4bedfa*/
  v36 = v82 - v80; /*0x4bee06*/
  v72 = v82 - v80; /*0x4bee0c*/
  v97 = v83 - v81; /*0x4bee19*/
  v90 = (unsigned int *)(v92 - v89); /*0x4bee2b*/
  v37 = (*(int (**)(AudioStream *))(*(unsigned int *)this->__pad_000 + 116))(this); /*0x4bee32*/
  v66 = v37; /*0x4bee3c*/
  if ( v97 < 0 ) /*0x4bee42*/
  {
    v66 = -v37; /*0x4bee46*/
    pad_0 = -pad_0; /*0x4bee53*/
    v67 = 1; /*0x4bee5a*/
  }
  v65 = 1; /*0x4bee69*/
  v38 = abs32(v97); /*0x4bee7d*/
  if ( (int)v90 < 0 ) /*0x4bee81*/
    v65 = -1; /*0x4bee83*/
  v39 = abs32((int)v90); /*0x4bee8e*/
  v91 = 2 * v36; /*0x4bee93*/
  v98 = 2 * v38; /*0x4bee9d*/
  v93 = 2 * v39; /*0x4beea9*/
  if ( v39 <= v36 || v39 <= v38 ) /*0x4beeb8*/
  {
    if ( v36 <= v38 ) /*0x4bf149*/
    {
      v96 = (unsigned __int8 *)(v91 - v38); /*0x4bf3be*/
      v64 = v93 - v38; /*0x4bf3d0*/
      if ( v38 > 0 ) /*0x4bf3d4*/
      {
        v55 = 0; /*0x4bf3da*/
        v74 = v38; /*0x4bf3dc*/
        v75[0] = 0; /*0x4bf3e0*/
        do /*0x4bf620*/
        {
          v56 = (unsigned __int16)*v34; /*0x4bf3f1*/
          if ( (unsigned __int16)v102 < *SamplePosition && *v34 ) /*0x4bf3ec*/
          {
            v57 = *(unsigned short *)(v55 + v101); /*0x4bf409*/
            LOBYTE(v78) = (unsigned __int8)(v57 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4bf428*/
            BYTE1(v78) = (unsigned __int8)(v57 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4bf439*/
            BYTE2(v78) = (unsigned __int8)(v57 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4bf456*/
            v55 = v75[0]; /*0x4bf4e1*/
            *(unsigned short *)(v75[0] + v101) = ((v56 * (v70 + ((v35 * (unsigned __int8)v78) >> 8))) >> 7 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4bf4e5*/
                                      | ((v56 * (v69 + ((v35 * BYTE1(v78)) >> 8))) >> 7 >> g_BitMask_Blue << g_BitMask_Green)
                                      | ((v56 * (v68 + ((v35 * BYTE2(v78)) >> 8))) >> 7 >> g_BitMask_Red << g_BitShift_Blue);
          }
          if ( (int)v96 > 0 ) /*0x4bf4f2*/
          {
            ++SamplePosition; /*0x4bf4f9*/
            v55 += 2; /*0x4bf4fc*/
            Stream_field_08 = g_ZBufferDescriptor[1].Stream_field_08; /*0x4bf4ff*/
            v75[0] = v55; /*0x4bf502*/
            if ( (unsigned int)SamplePosition >= Stream_field_08 ) /*0x4bf508*/
              SamplePosition = (unsigned short *)((char *)SamplePosition - g_ZBufferDescriptor[1].Stream_field_0C); /*0x4bf50a*/
            if ( (unsigned int)++v34 >= *(unsigned int *)(*(unsigned int *)&g_VisibleSurfaceDescriptor + 28) ) /*0x4bf518*/
              v34 = (unsigned short *)((char *)v34 - *(unsigned int *)(*(unsigned int *)&g_VisibleSurfaceDescriptor + 32)); /*0x4bf51a*/
            v96 -= v98; /*0x4bf52d*/
          }
          if ( v64 > 0 ) /*0x4bf53a*/
          {
            v102 += v65; /*0x4bf54d*/
            v64 -= v98; /*0x4bf55d*/
          }
          v96 += v91; /*0x4bf579*/
          v64 += v93; /*0x4bf592*/
          v101 += v66; /*0x4bf596*/
          v59 = (unsigned int)&SamplePosition[pad_0]; /*0x4bf5a7*/
          if ( pad_0 <= 0 ) /*0x4bf5ab*/
          {
            v76 = (unsigned short *)v59; /*0x4bf5cd*/
            if ( v59 >= g_ZBufferDescriptor[1].Stream_field_04 ) /*0x4bf5d4*/
              v60 = (int)v76; /*0x4bf5dd*/
            else
              v60 = v59 + g_ZBufferDescriptor[1].Stream_field_0C; /*0x4bf5d9*/
            SamplePosition = (unsigned short *)v60; /*0x4bf5e1*/
          }
          else
          {
            v76 = (unsigned short *)v59; /*0x4bf5b3*/
            if ( v59 < g_ZBufferDescriptor[1].Stream_field_08 ) /*0x4bf5ba*/
              SamplePosition = v76; /*0x4bf5c1*/
            else
              SamplePosition = (unsigned short *)(v59 - g_ZBufferDescriptor[1].Stream_field_0C); /*0x4bf5bc*/
          }
          v34 += pad_0; /*0x4bf5e7*/
          v102 += v67; /*0x4bf5e9*/
          if ( pad_0 <= 0 ) /*0x4bf5f2*/
          {
            v61 = v34; /*0x4bf609*/
            if ( (unsigned int)v34 < *(unsigned int *)(*(unsigned int *)&g_VisibleSurfaceDescriptor + 24) ) /*0x4bf60e*/
              v61 = (unsigned short *)((char *)v34 + *(unsigned int *)(*(unsigned int *)&g_VisibleSurfaceDescriptor + 32)); /*0x4bf613*/
            v34 = v61; /*0x4bf615*/
          }
          else if ( (unsigned int)v34 >= *(unsigned int *)(*(unsigned int *)&g_VisibleSurfaceDescriptor + 28) ) /*0x4bf5fc*/
          {
            v34 = (unsigned short *)((char *)v34 - *(unsigned int *)(*(unsigned int *)&g_VisibleSurfaceDescriptor + 32)); /*0x4bf5fe*/
          }
          --v74; /*0x4bf61c*/
        }
        while ( v74 ); /*0x4bf620*/
      }
    }
    else
    {
      v95 = (unsigned __int8 *)(v98 - v36); /*0x4bf158*/
      v63 = v93 - v36; /*0x4bf168*/
      v49 = 0; /*0x4bf16c*/
      v75[0] = 0; /*0x4bf170*/
      if ( v36 > 0 ) /*0x4bf174*/
      {
        v50 = *(unsigned int *)&g_VisibleSurfaceDescriptor; /*0x4bf17a*/
        do /*0x4bf39a*/
        {
          v51 = (unsigned __int16)*v34; /*0x4bf18d*/
          if ( (unsigned __int16)v102 < *SamplePosition && *v34 ) /*0x4bf188*/
          {
            v52 = *(unsigned short *)(v101 + 2 * v49); /*0x4bf1ac*/
            LOBYTE(v76) = (unsigned __int8)(v52 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4bf1c4*/
            BYTE1(v76) = (unsigned __int8)(v52 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4bf1e5*/
            BYTE2(v76) = (unsigned __int8)(v52 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4bf1f1*/
            v49 = v75[0]; /*0x4bf27c*/
            *(unsigned short *)(v101 + 2 * v75[0]) = ((v51 * (v70 + ((v35 * (unsigned __int8)v76) >> 8))) >> 7 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4bf280*/
                                          | ((v51 * (v68 + ((v35 * BYTE2(v76)) >> 8))) >> 7 >> g_BitMask_Red << g_BitShift_Blue)
                                          | ((v51 * (v69 + ((v35 * BYTE1(v76)) >> 8))) >> 7 >> g_BitMask_Blue << g_BitMask_Green);
            v50 = *(unsigned int *)&g_VisibleSurfaceDescriptor; /*0x4bf284*/
          }
          if ( (int)v95 > 0 ) /*0x4bf293*/
          {
            v101 += v66; /*0x4bf2a6*/
            v95 -= v91; /*0x4bf2b6*/
            SamplePosition += pad_0; /*0x4bf2c7*/
            if ( pad_0 <= 0 ) /*0x4bf2cb*/
            {
              v53 = SamplePosition; /*0x4bf2e3*/
              if ( (unsigned int)SamplePosition < g_ZBufferDescriptor[1].Stream_field_04 ) /*0x4bf2e8*/
                v53 = (unsigned short *)((char *)SamplePosition + g_ZBufferDescriptor[1].Stream_field_0C); /*0x4bf2ed*/
              SamplePosition = v53; /*0x4bf2ef*/
            }
            else if ( (unsigned int)SamplePosition >= g_ZBufferDescriptor[1].Stream_field_08 ) /*0x4bf2d6*/
            {
              SamplePosition = (unsigned short *)((char *)SamplePosition - g_ZBufferDescriptor[1].Stream_field_0C); /*0x4bf2d8*/
            }
            v50 = *(unsigned int *)&g_VisibleSurfaceDescriptor; /*0x4bf2f5*/
            v102 += v67; /*0x4bf2fb*/
            v34 += pad_0; /*0x4bf309*/
            if ( pad_0 <= 0 ) /*0x4bf30d*/
            {
              v54 = v34; /*0x4bf31c*/
              if ( (unsigned int)v34 < *(unsigned int *)(*(unsigned int *)&g_VisibleSurfaceDescriptor + 24) ) /*0x4bf320*/
                v54 = (unsigned short *)((char *)v34 + *(unsigned int *)(*(unsigned int *)&g_VisibleSurfaceDescriptor + 32)); /*0x4bf325*/
              v34 = v54; /*0x4bf327*/
            }
            else if ( (unsigned int)v34 >= *(unsigned int *)(*(unsigned int *)&g_VisibleSurfaceDescriptor + 28) ) /*0x4bf312*/
            {
              v34 = (unsigned short *)((char *)v34 - *(unsigned int *)(*(unsigned int *)&g_VisibleSurfaceDescriptor + 32)); /*0x4bf314*/
            }
          }
          if ( v63 > 0 ) /*0x4bf32f*/
          {
            v102 += v65; /*0x4bf335*/
            v63 -= v91; /*0x4bf345*/
          }
          v95 += v98; /*0x4bf360*/
          v63 += v93; /*0x4bf373*/
          if ( (unsigned int)++SamplePosition >= g_ZBufferDescriptor[1].Stream_field_08 ) /*0x4bf37d*/
            SamplePosition = (unsigned short *)((char *)SamplePosition - g_ZBufferDescriptor[1].Stream_field_0C); /*0x4bf37f*/
          if ( (unsigned int)++v34 >= *(unsigned int *)(v50 + 28) ) /*0x4bf38a*/
            v34 = (unsigned short *)((char *)v34 - v50->u32_20); /*0x4bf38c*/
          v75[0] = ++v49; /*0x4bf396*/
        }
        while ( v49 < v72 ); /*0x4bf39a*/
      }
    }
  }
  else
  {
    v62 = v98 - v39; /*0x4beec7*/
    v94 = (unsigned __int8 *)(v91 - v39); /*0x4beed6*/
    if ( v39 > 0 ) /*0x4beedd*/
    {
      v40 = *(unsigned int *)&g_VisibleSurfaceDescriptor; /*0x4beee3*/
      v41 = 0; /*0x4beee9*/
      v73 = 0; /*0x4beeeb*/
      v75[0] = v39; /*0x4beeef*/
      while ( 1 ) /*0x4bef00*/
      {
        v42 = (unsigned __int16)*v34; /*0x4bef00*/
        if ( (unsigned __int16)v102 < *SamplePosition && *v34 ) /*0x4beefb*/
        {
          v43 = *(unsigned short *)(v41 + v101); /*0x4bef18*/
          LOBYTE(v76) = (unsigned __int8)(v43 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4bef37*/
          BYTE1(v76) = (unsigned __int8)(v43 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4bef58*/
          BYTE2(v76) = (unsigned __int8)(v43 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4bef68*/
          v41 = v73; /*0x4befe7*/
          *(unsigned short *)(v73 + v101) = ((v42 * (v70 + ((v35 * (unsigned __int8)v76) >> 8))) >> 7 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4beff4*/
                                 | ((v42 * (v68 + ((v35 * BYTE2(v76)) >> 8))) >> 7 >> g_BitMask_Red << g_BitShift_Blue)
                                 | ((v42 * (v69 + ((v35 * BYTE1(v76)) >> 8))) >> 7 >> g_BitMask_Blue << g_BitMask_Green);
          v40 = *(unsigned int *)&g_VisibleSurfaceDescriptor; /*0x4beff8*/
        }
        if ( v62 <= 0 ) /*0x4bf004*/
        {
          v45 = v102; /*0x4bf0a9*/
          goto LABEL_45; /*0x4bf0a9*/
        }
        v101 += v66; /*0x4bf017*/
        v62 -= v93; /*0x4bf027*/
        SamplePosition += pad_0; /*0x4bf035*/
        if ( pad_0 <= 0 ) /*0x4bf039*/
        {
          v44 = SamplePosition; /*0x4bf050*/
          if ( (unsigned int)SamplePosition < g_ZBufferDescriptor[1].Stream_field_04 ) /*0x4bf055*/
            v44 = (unsigned short *)((char *)SamplePosition + g_ZBufferDescriptor[1].Stream_field_0C); /*0x4bf05a*/
          SamplePosition = v44; /*0x4bf05c*/
        }
        else if ( (unsigned int)SamplePosition >= g_ZBufferDescriptor[1].Stream_field_08 ) /*0x4bf043*/
        {
          SamplePosition = (unsigned short *)((char *)SamplePosition - g_ZBufferDescriptor[1].Stream_field_0C); /*0x4bf045*/
        }
        v40 = *(unsigned int *)&g_VisibleSurfaceDescriptor; /*0x4bf065*/
        v34 += pad_0; /*0x4bf06b*/
        if ( pad_0 <= 0 ) /*0x4bf06f*/
          break; /*0x4bf06f*/
        if ( (unsigned int)v34 < *(unsigned int *)(*(unsigned int *)&g_VisibleSurfaceDescriptor + 28) ) /*0x4bf074*/
          goto LABEL_43; /*0x4bf074*/
        v34 = (unsigned short *)((char *)v34 - *(unsigned int *)(*(unsigned int *)&g_VisibleSurfaceDescriptor + 32)); /*0x4bf07d*/
        v45 = v67 + v102; /*0x4bf086*/
LABEL_45:
        if ( (int)v94 > 0 ) /*0x4bf0b9*/
        {
          ++SamplePosition; /*0x4bf0c1*/
          v41 += 2; /*0x4bf0c4*/
          v73 = v41; /*0x4bf0ca*/
          if ( (unsigned int)SamplePosition >= g_ZBufferDescriptor[1].Stream_field_08 ) /*0x4bf0ce*/
            SamplePosition = (unsigned short *)((char *)SamplePosition - g_ZBufferDescriptor[1].Stream_field_0C); /*0x4bf0d0*/
          if ( (unsigned int)++v34 >= *(unsigned int *)(v40 + 28) ) /*0x4bf0db*/
            v34 = (unsigned short *)((char *)v34 - v40->u32_20); /*0x4bf0dd*/
          v94 -= v93; /*0x4bf0e7*/
        }
        v102 = v65 + v45; /*0x4bf0fb*/
        v94 += v91; /*0x4bf112*/
        v47 = v75[0] == 1; /*0x4bf123*/
        v62 += v98; /*0x4bf124*/
        --v75[0]; /*0x4bf128*/
        if ( v47 ) /*0x4bf12c*/
          goto LABEL_52; /*0x4bf12c*/
      }
      v46 = v34; /*0x4bf08d*/
      if ( (unsigned int)v34 < *(unsigned int *)(*(unsigned int *)&g_VisibleSurfaceDescriptor + 24) ) /*0x4bf091*/
        v46 = (unsigned short *)((char *)v34 + *(unsigned int *)(*(unsigned int *)&g_VisibleSurfaceDescriptor + 32)); /*0x4bf096*/
      v34 = v46; /*0x4bf098*/
LABEL_43:
      v45 = v67 + v102; /*0x4bf09a*/
      goto LABEL_45; /*0x4bf0a7*/
    }
  }
LABEL_52:
  (*(void (**)(AudioStream *))(*(unsigned int *)this->__pad_000 + 96))(this); /*0x4bf132*/
  return 1; /*0x4bf13b*/

}
}
// 0x7BD270
namespace gamemd {
int AudioStream::SetFlag4C(void *a1)
{


  ((void (__cdecl *)(AudioStream *, int, unsigned int, unsigned int))this->q058)(this, 4, 0, 0); /*0x7bd27a*/
  int result; // eax
  result = this->u32_7BC; /*0x7bd27d*/
  LOBYTE(result) = result | 0x40; /*0x7bd286*/
  this->u32_7BC = result; /*0x7bd288*/
  return result; /*0x7bd28e*/

}
}
// 0x7BD2D0
namespace gamemd {
int AudioStream::CalcReadPos()
{


  if ( (this->u32_84 & 1) == 0 ) /*0x7bd2e1*/
    return -1; /*0x7bd2e1*/
  if ( !this->u32_78C ) /*0x7bd2e7*/
    return -1; /*0x7bd2e7*/
  int v2; // ebp
  v2 = this->u32_7B0; /*0x7bd2f5*/
  if ( !v2 ) /*0x7bd2fd*/
    return -1; /*0x7bd2fd*/
  int v3; // eax
  v3 = this->u32_7AC; /*0x7bd303*/
  int v4; // edi
  v4 = this->u32_790; /*0x7bd30f*/
  unsigned int v5; // ecx
  v5 = *(unsigned int *)this->u32_9C; /*0x7bd315*/
  char *v6; // esi
  v6 = (char *)(v3 + this->u32_7A8); /*0x7bd31b*/
  unsigned int v7; // ebp
  v7 = v2 - v3; /*0x7bd31d*/
  unsigned int v17; // [esp+10h] [ebp-Ch]
  v17 = this->u32_790 / v5; /*0x7bd32b*/
  unsigned int v8; // eax
  v8 = (v4 + v7) / v5; /*0x7bd332*/
  unsigned int v9; // ecx
  v9 = this->u32_79C; /*0x7bd334*/
  if ( v8 >= v9 ) /*0x7bd33c*/
    v8 -= v9; /*0x7bd33e*/
  if ( *(unsigned char *)(this->u32_794 + v8) == 1 ) /*0x7bd34a*/
  {
    ++*&this->u32_18C; /*0x7bd355*/
    return -11; /*0x7bd365*/
  }
  if ( v17 > v8 ) /*0x7bd36a*/
  {
  unsigned int v13; // edx
    v13 = (unsigned int)this->q098 - v4; /*0x7bd3cd*/
    memcpy((void *)(this->u32_78C + v4), v6, v13); /*0x7bd3e4*/
    memcpy(this->u32_183), &v6[v13], v7 - v13); /*0x7bd404*/
  unsigned int v14; // ecx
    v14 = v17; /*0x7bd40f*/
  unsigned int v15; // esi
    v15 = this->u32_79C; /*0x7bd413*/
    this->u32_790 = v7 - v13; /*0x7bd41b*/
    this->u32_7B0 = 0; /*0x7bd421*/
    this->u32_7AC = 0; /*0x7bd427*/
    if ( v17 < v15 ) /*0x7bd42d*/
    {
      do /*0x7bd443*/
      {
        ++v14; /*0x7bd435*/
        *(unsigned char *)(this->u32_794 + v14 - 1) = 1; /*0x7bd436*/
      }
      while ( v14 < this->u32_79C ); /*0x7bd443*/
    }
  unsigned int i; // ecx
    for ( i = 0; i < v8; *(unsigned char *)(this->u32_794 + i - 1) = 1 ) /*0x7bd449*/
      ++i; /*0x7bd451*/
    return -1; /*0x7bd459*/
  }
  memcpy((void *)(this->u32_78C + v4), v6, v7); /*0x7bd37b*/
  int v11; // esi
  v11 = this->u32_790; /*0x7bd384*/
  this->u32_7B0 = 0; /*0x7bd38c*/
  this->u32_7AC = 0; /*0x7bd392*/
  unsigned int v12; // ecx
  v12 = v17; /*0x7bd398*/
  this->u32_790 = v7 + v11; /*0x7bd3a0*/
  if ( v17 >= v8 ) /*0x7bd3a6*/
    return -1; /*0x7bd45e*/
  do /*0x7bd3ba*/
  {
    ++v12; /*0x7bd3b2*/
    *(unsigned char *)(this->u32_794 + v12 - 1) = 1; /*0x7bd3b5*/
  }
  while ( v12 < v8 ); /*0x7bd3ba*/
  return -1; /*0x7bd352*/

}
}
// 0x7BEA80
namespace gamemd {
int AudioStream::ProcessStream()
{

  int v19; // edi
  void (__cdecl *v25)(int, int, unsigned int, unsigned int); // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int (__cdecl *v29)(unsigned int, unsigned int); // eax
  int v30; // edx
  char v31; // al
  int v32; // eax
  int v33; // [esp+10h] [ebp-Ch]
  signed int v35; // [esp+18h] [ebp-4h]

  int v1; // esi
  v1 = this; /*0x7bea86*/
  int v2; // ebp
  v2 = this->u32_1A0; /*0x7bea8d*/
  int *v3; // ebx
  v3 = &this->u32_1A0; /*0x7bea93*/
  int v4; // edi
  v4 = &this->q040; /*0x7bea99*/
  if ( (*(unsigned char *)(v2 + 20) & 1) != 0 )
  {
    if ( (this->u32_1A4 & 0x10) != 0 ) /*0x7beafb*/
    {
      this->u32_6D0 = *(unsigned int *)(this->u32_1A0 + 28); /*0x7beb04*/
      this->u32_1A4 |= 8u; /*0x7beb10*/
  int v10; // eax
      v10 = *(unsigned int *)(v2 + 20); /*0x7beb13*/
      LOBYTE(v10) = v10 | 0x80; /*0x7beb16*/
      *(unsigned int *)(v2 + 20) = v10; /*0x7beb18*/
      return -1; /*0x7beb23*/
    }
    if ( (this->u32_84 & 2) != 0 ) /*0x7beb28*/
    {
      this->u32_6D0 = *(unsigned int *)(v2 + 28); /*0x7beb2d*/
      CalcAudioStreamOffset((int)(this), 60 * *(unsigned int *)(v2 + 28) / this->u32_74); /*0x7beb48*/
      return -1; /*0x7beb57*/
    }
  int Position; // ecx
    Position = AudioStream::GetPosition((AudioStream *)this); /*0x7beb5f*/
  int v12; // eax
    v12 = v3[332]; /*0x7beb66*/
  int v13; // eax
    if ( (v3[1] & 2) != 0 ) /*0x7beb6c*/
      v13 = v12 + 2; /*0x7beb71*/
    else
      v13 = v12 + 1; /*0x7beb6e*/
    if ( Position >= 60 * v13 / v4->u32_34 )
    {
  signed int v15; // ecx
      v15 = Audio_Process_7BEE20(v1, v4, (int)v3, v2, Position); /*0x7bebfd*/
      v35 = v15; /*0x7bec04*/
      if ( (*(unsigned char *)(v4 + 64) & 4) != 0 ) /*0x7bec08*/
      {
        v3[332] = *(unsigned int *)(*v3 + 28); /*0x7bec15*/
        return -1; /*0x7bec1f*/
      }
      v33 = *&v4->u32_30 / 3 - 1; /*0x7bec35*/
      if ( v33 < 0 ) /*0x7bec39*/
        v33 = 0; /*0x7bec3b*/
      if ( *(unsigned int *)(v2 + 28) != v15 )
      {
        do
        {
          if ( (*(unsigned char *)(v2 + 20) & 2) != 0 ) /*0x7bec50*/
            break; /*0x7bec50*/
  int v16; // ecx
          v16 = v1->u32_140; /*0x7bec58*/
  int v17; // edi
          v17 = *(unsigned int *)(*v3 + 28); /*0x7bec5e*/
  int v18; // eax
          v18 = v3[332]; /*0x7bec61*/
          if ( v17 < v18 || v17 > v16 )
          {
  int v20; // ecx
            v20 = v16 - v3[332]; /*0x7bec8a*/
            if ( v20 >= 0 )
            {
  int v21; // edi
              v21 = v17 - v1->u32_128; /*0x7bec92*/
              v19 = v21 >= 0 ? v21 + v20 + 1 : v1->u32_70 / 3;
            }
            else
            {
              v19 = *&v1->u32_70 / 3; /*0x7bec8e*/
            }
          }
          else
          {
            v19 = v17 - v18; /*0x7bec6f*/
          }
          if ( v19 > v33 ) /*0x7beca6*/
            break; /*0x7beca6*/
  int v22; // eax
          v22 = *(unsigned int *)(v2 + 20); /*0x7becac*/
          if ( (v22 & 4) != 0 ) /*0x7becb1*/
          {
            if ( (v22 & 8) != 0 ) /*0x7becb5*/
            {
              *(unsigned int *)(v2 + 40) = AudioCodec::Decode( /*0x7beccd*/
                                       (unsigned __int8 *)(*(unsigned int *)(v2 + 8) + *(unsigned int *)(v2 + 36)),
                                       *(char **)(v2 + 8),
                                       v1->u32_770);
  int v23; // eax
              v23 = *(unsigned int *)(v2 + 20); /*0x7becd0*/
              LOBYTE(v23) = v23 & 0xF7; /*0x7becd6*/
              *(unsigned int *)(v2 + 20) = v23; /*0x7becd8*/
            }
            memcpy(v3 + 9, *(const void **)(v2 + 8), *(unsigned int *)(v2 + 40)); /*0x7bece9*/
  int v24; // eax
            v24 = v3[1]; /*0x7becf2*/
            v1 = this; /*0x7becf8*/
            LOBYTE(v24) = v24 | 1; /*0x7becfc*/
            v3[8] = *(unsigned int *)(v2 + 40); /*0x7becfe*/
            v3[1] = v24; /*0x7bed01*/
          }
          v25 = *(void (__cdecl **)(int, int, unsigned int, unsigned int))(v1 + 72); /*0x7bed04*/
          if ( v25 ) /*0x7bed09*/
          {
            if ( (*(unsigned int *)(v2 + 20) & 0x100) != 0 ) /*0x7bed11*/
            {
              v25(v1, 4, *(unsigned int *)(v2 + 28), v1->u32_120); /*0x7bed21*/
              v26 = *(unsigned int *)(v2 + 20); /*0x7bed23*/
              BYTE1(v26) &= ~1u; /*0x7bed29*/
              *(unsigned int *)(v2 + 20) = v26; /*0x7bed2c*/
            }
            if ( (*(unsigned int *)(v2 + 20) & 0x200) != 0 ) /*0x7bed35*/
            {
              (*(void (__cdecl **)(int, int, unsigned int, unsigned int))(v1 + 72))( /*0x7bed45*/
                v1,
                5,
                *(unsigned int *)(v2 + 28),
                v1->u32_120);
              v27 = *(unsigned int *)(v2 + 20); /*0x7bed48*/
              BYTE1(v27) &= ~2u; /*0x7bed4e*/
              *(unsigned int *)(v2 + 20) = v27; /*0x7bed51*/
            }
            if ( (*(unsigned int *)(v2 + 20) & 0x400) != 0 ) /*0x7bed5a*/
            {
              Audio_Process_7BE830(v1, *(unsigned int *)(v2 + 28)); /*0x7bed61*/
              v28 = *(unsigned int *)(v2 + 20); /*0x7bed66*/
              BYTE1(v28) &= ~4u; /*0x7bed69*/
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
          ++v1->u32_1C; /*0x7bed9b*/
          if ( (*(unsigned char *)(v2 + 20) & 1) == 0 ) /*0x7beda3*/
          {
            v31 = *((unsigned char *)v3 + 4); /*0x7beddd*/
            ++v3[334]; /*0x7bede3*/
            if ( (v31 & 4) != 0 && (v1->u32_150 & 4) == 0 ) /*0x7bedf2*/
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
      if ( Audio_Process_7BEE20(v1, v4, (int)v3, v2, Position) == v3[332] && (*(unsigned char *)(v2 + 20) & 0x80) != 0 ) /*0x7beba9*/
      {
        v3[332] = *(unsigned int *)(v2 + 28); /*0x7bebb0*/
        return -1; /*0x7bebb7*/
      }
      else
      {
  int v14; // edx
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
  char v5; // al
    v5 = this->u32_1A4; /*0x7beaa8*/
    ++this->u32_6D8; /*0x7beaae*/
    if ( (v5 & 4) != 0 && (this->u32_150 & 4) == 0 ) /*0x7beac1*/
    {
  int v6; // eax
      v6 = *(unsigned int *)(v2 + 16); /*0x7beac9*/
      *v3 = v6; /*0x7beacc*/
      *(unsigned int *)(v6 + 20) = *(unsigned int *)(v6 + 24); /*0x7bead1*/
  int v7; // eax
      v7 = this->u32_1A4; /*0x7bead4*/
      if ( (v7 & 0x10) != 0 ) /*0x7bead9*/
      {
        LOBYTE(v7) = v7 | 8; /*0x7beadf*/
        this->u32_1A4 = v7; /*0x7beae2*/
  int v8; // eax
        v8 = *(unsigned int *)(v2 + 20); /*0x7beae5*/
        LOBYTE(v8) = v8 | 0x80; /*0x7beae8*/
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
unsigned int AudioStream::GetPosition(void *a1)
{

  return (unsigned int)(60 * ((int (__cdecl *)(AudioStream *))this->q050)(this)) /*0x7c3982*/
       / *&this->u32_78
       + *&this->q148;

}
}
// 0x402550
namespace gamemd {
void AudioStream::Destructor(unsigned int * Block)
{
  void (__thiscall *v2)(AudioStream *); // eax
  int result; // eax

  Block->vt_slot_40(); /*0x402559*/
  if ( (Block->__pad_9C[8] & 5) != 0 ) /*0x402563*/
    Block->u32_10->vt_slot_16(); /*0x40256d*/
  (*(void (__thiscall **)(AudioStream *))(Block->AudioStream_field_0xD4[0] + 44))(Block); /*0x402578*/
  v2 = (void (__thiscall *)(AudioStream *))Block->AudioStream_field_0xBC[0]; /*0x40257b*/
  if ( v2 ) /*0x402583*/
    v2(Block); /*0x402587*/
  *&Block->u32_168 = 0; /*0x40258b*/
  AudioStream::InitListAndCounters(Block); /*0x402595*/
  Block->u32_8->vt_slot_8(); /*0x4025a2*/
  operator delete((void *)(Block)); /*0x4025a6*/
  return result; /*0x4025ae*/
}
} // namespace gamemd

// 0x402800
namespace gamemd {
int AudioStream::CheckFormatChanged(int a1, const void * a2)
{
  int result; // eax

  void *v3; // ebx
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
    memcpy(v3, a2, 0x20u); /*0x402841*/
  }
  return result; /*0x402821*/
}
} // namespace gamemd

// 0x4028B0
namespace gamemd {
int AudioStream::InitListAndCounters(void *a1_1)
{

  unsigned int *AudioStream_field_0xAC; // esi
  AudioStream_field_0xAC = a1_1->AudioStream_field_0xAC; /*0x4028b4*/
  LinkedList::Init((LinkedList *)a1_1); /*0x4028ba*/
  --AudioStream_field_0xAC[60]; /*0x4028c6*/
  ++AudioStream_field_0xAC[65]; /*0x4028d3*/
  LinkedList::Init((LinkedList *)a1_1); /*0x4028db*/
  int result; // eax
  result = AudioStream_field_0xAC[65] - 1; /*0x4028e6*/
  AudioStream_field_0xAC[65] = result; /*0x4028e9*/
  if ( result < 0 ) /*0x4028ef*/
    AudioStream_field_0xAC[65] = 0; /*0x4028f1*/
  return result; /*0x4028fb*/
}
} // namespace gamemd

// 0x404FD0
namespace gamemd {
int AudioStream::UpdateTimers()
{

  int64_t v0; // rax
  (*((unsigned int *)&(v0))) = g_AudioConfigState; /*0x404fd0*/
  if ( g_AudioConfigState ) /*0x404fd8*/
  {
  void **v1; // esi
    v1 = (void **)g_AudioStreamObject; /*0x404fda*/
    if ( g_AudioStreamObject != &g_AudioStreamObject ) /*0x404fe6*/
    {
      do /*0x405031*/
      {
        (*((unsigned int *)&(v0))) = v1[86]; /*0x404fe9*/
        if ( !(unsigned int)v0 ) /*0x404ff1*/
        {
          (*((unsigned int *)&(v0))) = v1[7]; /*0x404ff3*/
          if ( (unsigned int)v0 == 2 ) /*0x404ff9*/
          {
            (*((unsigned int *)&(v0))) = Audio::Callback(); /*0x404ffb*/
            *((unsigned long long *)v1 + 40) -= v0; /*0x405010*/
          }
        }
        v1[86] = v1->q056 + 1; /*0x405023*/
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
  (*((unsigned int *)&(v0))) = g_AudioConfigState; /*0x405040*/
  if ( g_AudioConfigState ) /*0x405048*/
  {
  void **v1; // esi
    v1 = (void **)g_AudioStreamObject; /*0x40504a*/
    if ( g_AudioStreamObject != &g_AudioStreamObject ) /*0x405056*/
    {
      do /*0x4050b9*/
      {
        (*((unsigned int *)&(v0))) = v1[86]; /*0x405059*/
        if ( (unsigned int)v0 ) /*0x405061*/
        {
  int v2; // eax
          v2 = (int)v1[86] - 1; /*0x405069*/
          v1[86] = (void *)v2; /*0x40506c*/
          if ( v2 < 0 ) /*0x405072*/
            v1[86] = 0; /*0x405074*/
          (*((unsigned int *)&(v0))) = v1[86]; /*0x40507e*/
          if ( !(unsigned int)v0 ) /*0x405086*/
          {
            (*((unsigned int *)&(v0))) = v1[7]; /*0x405088*/
            if ( (unsigned int)v0 == 2 ) /*0x40508e*/
            {
  int64_t v3; // rax
              (*((unsigned int *)&(v3))) = Audio::Callback(); /*0x405090*/
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
char * AudioStream::Constructor(uint64_t, void * a2, void * aAudioStream, void *a4)
{

  if ( !this ) /*0x40786b*/
    return 0; /*0x40786e*/
  int v3; // esi
  v3 = (*(((unsigned int *)&(a2)) + 1)); /*0x407876*/
  if ( a2 < 0x1B58 ) /*0x40788a*/
  {
    (*((unsigned int *)&(a2))) = 7000; /*0x407896*/
    v3 = 0; /*0x40789a*/
  }
  int v4; // ebx
  v4 = operator new(0xF8u); /*0x4078a6*/
  memset((void *)v4, 0, 0xF8u); /*0x4078b1*/
  ((DListNode *)v4)->InitEmpty(); /*0x4078b8*/
  *(unsigned int *)(v4 + 16) = this; /*0x4078c6*/
  int v5; // eax
  v5 = sub_4036C0((int)this, 4096); /*0x4078c9*/
  *(unsigned int *)(v4 + 20) = v5; /*0x4078ce*/
  *(unsigned int *)(v5 + 148) = 0; /*0x4078d1*/
  *(unsigned int *)(*(unsigned int *)(v4 + 20) + 144) = 0; /*0x4078da*/
  *(unsigned int *)(*(unsigned int *)(v4 + 20) + 152) = 0; /*0x4078e7*/
  *(unsigned int *)(*(unsigned int *)(v4 + 20) + 156) = 0; /*0x4078f3*/
  *(unsigned int *)(v4 + 24) = a2; /*0x4078f9*/
  *(unsigned int *)(v4 + 28) = v3; /*0x4078fc*/
  ((AudioStream *)(v4 + 60))->InitNodeFields(); /*0x4078ff*/
  ((Struct *)(v4 + 92))->ZeroInit32(); /*0x407907*/
  *(unsigned int *)(v4 + 128) = 0; /*0x40790c*/
  *(unsigned int *)(v4 + 136) = 0; /*0x407912*/
  strcpy((char *)(v4 + 164), aAudioStream); /*0x407937*/
  int v6; // eax
  v6 = *(unsigned int *)(v4 + 20); /*0x407940*/
  unsigned int *v7; // eax
  if ( v6 /*0x407980*/
    && (*(unsigned int *)(v6 + 192) = v4,
        *(unsigned int *)(*(unsigned int *)(v4 + 20) + 176) = AudioStream::ReadStreamAndSyncPosition,
        *(unsigned int *)(*(unsigned int *)(v4 + 20) + 184) = AudioStream::SetPlaybackCallback,
        *(unsigned int *)(*(unsigned int *)(v4 + 20) + 188) = AudioStream::ProcessCallback,
        v7 = sub_4087F0(),
        (*(unsigned int *)(v4 + 48) = v7) != 0) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)&CriticalSection); /*0x407996*/
    InsertBeforeLinkedList((int *)&DataGlobal_87E810, (int *)v4); /*0x4079a3*/
    LeaveCriticalSection((LPCRITICAL_SECTION)&CriticalSection); /*0x4079ad*/
    return (char *)v4; /*0x4079b3*/
  }
  else
  {
    ((AudioSample *)v4)->Destructor(); /*0x407984*/
    return 0; /*0x407989*/
  }
}
} // namespace gamemd
