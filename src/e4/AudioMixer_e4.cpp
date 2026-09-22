// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"

// 0x406650
void AudioMixer::SetVolume()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  result = 1; /*0x406653*/
  if ( ((unsigned char)this->AudioMixer_field_10 & 1) == 0 || this->q04C ) /*0x40665c*/
    return 0; /*0x406663*/
  return result; /*0x406665*/
}
}

// 0x4071C0
void AudioMixer::PlaySample()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v2 = this->AudioMixer_field_08; /*0x4071c7*/
  int v3 = this->AudioMixer_field_04; /*0x4071ca*/
  int v4 = v2 - v3; /*0x4071cf*/
  if ( v2 == v3 ) /*0x4071d1*/
    return 0; /*0x40729e*/
  if ( (*(_BYTE *)this & 1) != 0 ) /*0x4071da*/
  {
    this->AudioMixer_field_04 = v2; /*0x4071dc*/
    int v5 = *this; /*0x4071df*/
    LOBYTE(v5) = *this | 2; /*0x4071e1*/
    *this = v5; /*0x4071e3*/
    return 1; /*0x4071e6*/
  }
  else
  {
    int v7 = Audio::Callback(); /*0x4071f2*/
    unsigned int v8 = this->q018; /*0x4071f7*/
    unsigned int v9 = this->q01C; /*0x4071fa*/
    int v10 = v7; /*0x4071fd*/
    this->q018 = v7; /*0x4071ff*/
    unsigned int v11 = this->AudioMixer_field_14; /*0x407202*/
  unsigned int v15; // edx
    this->q01C = v15; /*0x407209*/
    unsigned __int64 v14 = __PAIR64__(v15, v10) - __PAIR64__(v9, v8); /*0x407205*/
    unsigned int v13 = (__PAIR64__(v15, v10) - __PAIR64__(v9, v8)) >> 32; /*0x407205*/
    int v12 = v14; /*0x407205*/
    if ( __PAIR64__(v13, v14) > __PAIR64__(v11, this->AudioMixer_field_10) ) /*0x40721b*/
      v12 = this->AudioMixer_field_10; /*0x40721d*/
    int v16 = v12 * this->AudioMixer_field_0C; /*0x407226*/
    if ( v4 >= 0 ) /*0x40722b*/
    {
  int v19; // eax
      if ( v16 <= v4 ) /*0x407269*/
      {
        int v20 = v16 + this->AudioMixer_field_04; /*0x407287*/
        v19 = *this; /*0x407289*/
        LOBYTE(v19) = *this | 2; /*0x40728b*/
        this->AudioMixer_field_04 = v20; /*0x40728d*/
      }
      else
      {
        this->AudioMixer_field_04 += v4; /*0x407270*/
        v19 = *this; /*0x407273*/
        LOBYTE(v19) = *this | 2; /*0x407275*/
      }
      *this = v19; /*0x407277*/
      return 1; /*0x40727a*/
    }
    else
    {
  int v17; // eax
      if ( v16 <= -v4 ) /*0x407233*/
      {
        int v18 = this->AudioMixer_field_04 - v16; /*0x407251*/
        v17 = *this; /*0x407253*/
        LOBYTE(v17) = *this | 2; /*0x407255*/
        this->AudioMixer_field_04 = v18; /*0x407257*/
      }
      else
      {
        this->AudioMixer_field_04 += v4; /*0x40723a*/
        v17 = *this; /*0x40723d*/
        LOBYTE(v17) = *this | 2; /*0x40723f*/
      }
      *this = v17; /*0x407241*/
      return 1; /*0x407244*/
    }
  }
}
}

// 0x401000
int AudioMixer::Init()
{
{
    SetupSampleAudioMixer(this, (ObjectClass *)0x4000);
    SetupSampleAudioMixer(this + 10, (ObjectClass *)0x64);
    SetupSampleAudioMixer(this + 20, (ObjectClass *)0x2000);
    SetRateMixerSample(this + 10, 10, 0x3E8u, 0);
    SetRateMixerSample(this, 0x4000, 0x3E8u, 0);
    SetRateMixerSample(this + 20, 0x4000, 0x3E8u, 0);
    return EndBufferMixer(this, 0x4000);
}
}

// 0x4061D0
int AudioMixer::PlayBuffer(unsigned int * a1, unsigned int a2)
{
{
    int v2;
    int *v4;
    v2 = a2;
    if ( *((int*)(a1) + 7) == 3 )
  {
    if ( a2 > 0x4000 )
    v2 = 0x4000;
    return RequestBufferMixer(a1 + 46, (unsigned int)(v2 * HIWORD(*(int *)(*((int*)(a1) + 9) + 28))) >> 14);
  }
    else
  {
    if ( a2 > 0x4000 )
    v2 = 0x4000;
    v4 = a1 + 46;
    EndBufferMixer(a1 + 46, (unsigned int)(v2 * HIWORD(*(int *)(*((int*)(a1) + 9) + 28))) >> 14);
    return AudioMixer::PlaySample(v4);
  }
}
}

// 0x406270
int AudioMixer::RequestOrEndBuffer(int a1, unsigned int a2)
{
{
    if ( *(int *)(a1 + 28) == 3 )
  {
    if ( a2 > 0x4000 )
    a2 = 0x4000;
    return RequestBufferMixer((unsigned int *)(a1 + 264), a2);
  }
    else
  {
    if ( a2 > 0x4000 )
    a2 = 0x4000;
    return EndBufferMixer((int *)(a1 + 264), a2);
  }
}
}

// 0x406E80
int AudioMixer::Shutdown()
{
{
    if ( DataGlobal_87E728 )
    AudioQueue::StopAllVoices(DataGlobal_87E728, 1);
    return AudioStream::CleanupChannels();
}
}

// 0x753620
int AudioMixer::Pump()
{
{
    int result;
    if ( g_InfantryDrawState )
    AudioMixer::ProcessAudioFrame();
    result = DataGlobal_B1D428;
    if ( DataGlobal_B1D428 )
  {
    result = --DataGlobal_B1D428;
    if ( DataGlobal_B1D428 < 0 )
    DataGlobal_B1D428 = 0;
  }
    return result;
}
}
