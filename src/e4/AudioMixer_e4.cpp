// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/AudioMixer_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x406650
namespace gamemd {
int AudioMixer::SetVolume()
{

  int result; // eax

  result = 1; /*0x406653*/
  if ( (this->AudioMixer_field_10 & 1) == 0 || *((unsigned int *)this + 19) ) /*0x40665c*/
    return 0; /*0x406663*/
  return result; /*0x406665*/

}
} // namespace gamemd
// 0x4071C0
namespace gamemd {
int AudioMixer::PlaySample(void *a1)
{

  int AudioMixer_field_08; // eax
  int AudioMixer_field_04; // ecx
  int v4; // ebx
  int AudioMixer_field_00; // eax
  int v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // ebp
  int v10; // ecx
  int AudioMixer_field_14; // eax
  int AudioMixer_field_10; // ecx
  unsigned int v13; // edi
  uint64_t v14; // kr00_8
  unsigned int v15; // edx
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // ecx

  AudioMixer_field_08 = this->AudioMixer_field_08; /*0x4071c7*/
  AudioMixer_field_04 = this->AudioMixer_field_04; /*0x4071ca*/
  v4 = AudioMixer_field_08 - AudioMixer_field_04; /*0x4071cf*/
  if ( AudioMixer_field_08 == AudioMixer_field_04 ) /*0x4071d1*/
    return 0; /*0x40729e*/
  if ( (this->AudioMixer_field_00 & 1) != 0 ) /*0x4071da*/
  {
    this->AudioMixer_field_04 = AudioMixer_field_08; /*0x4071dc*/
    AudioMixer_field_00 = this->AudioMixer_field_00; /*0x4071df*/
    LOBYTE(AudioMixer_field_00) = this->AudioMixer_field_00 | 2; /*0x4071e1*/
    this->AudioMixer_field_00 = AudioMixer_field_00; /*0x4071e3*/
    return 1; /*0x4071e6*/
  }
  else
  {
    v7 = this->Audio::Callback(); /*0x4071f2*/
    v8 = *((unsigned int *)this + 6); /*0x4071f7*/
    v9 = *((unsigned int *)this + 7); /*0x4071fa*/
    v10 = v7; /*0x4071fd*/
    *((unsigned int *)this + 6) = v7; /*0x4071ff*/
    AudioMixer_field_14 = this->AudioMixer_field_14; /*0x407202*/
    *((unsigned int *)this + 7) = v15; /*0x407209*/
    v14 = __PAIR64__(v15, v10) - __PAIR64__(v9, v8); /*0x407205*/
    v13 = (__PAIR64__(v15, v10) - __PAIR64__(v9, v8)) >> 32; /*0x407205*/
    AudioMixer_field_10 = v14; /*0x407205*/
    if ( __PAIR64__(v13, v14) > __PAIR64__(AudioMixer_field_14, this->AudioMixer_field_10) ) /*0x40721b*/
      AudioMixer_field_10 = this->AudioMixer_field_10; /*0x40721d*/
    v16 = AudioMixer_field_10 * this->AudioMixer_field_0C; /*0x407226*/
    if ( v4 >= 0 ) /*0x40722b*/
    {
      if ( v16 <= v4 ) /*0x407269*/
      {
        v20 = v16 + this->AudioMixer_field_04; /*0x407287*/
        v19 = this->AudioMixer_field_00; /*0x407289*/
        LOBYTE(v19) = this->AudioMixer_field_00 | 2; /*0x40728b*/
        this->AudioMixer_field_04 = v20; /*0x40728d*/
      }
      else
      {
        this->AudioMixer_field_04 += v4; /*0x407270*/
        v19 = this->AudioMixer_field_00; /*0x407273*/
        LOBYTE(v19) = this->AudioMixer_field_00 | 2; /*0x407275*/
      }
      this->AudioMixer_field_00 = v19; /*0x407277*/
      return 1; /*0x40727a*/
    }
    else
    {
      if ( v16 <= -v4 ) /*0x407233*/
      {
        v18 = this->AudioMixer_field_04 - v16; /*0x407251*/
        v17 = this->AudioMixer_field_00; /*0x407253*/
        LOBYTE(v17) = this->AudioMixer_field_00 | 2; /*0x407255*/
        this->AudioMixer_field_04 = v18; /*0x407257*/
      }
      else
      {
        this->AudioMixer_field_04 += v4; /*0x40723a*/
        v17 = this->AudioMixer_field_00; /*0x40723d*/
        LOBYTE(v17) = this->AudioMixer_field_00 | 2; /*0x40723f*/
      }
      this->AudioMixer_field_00 = v17; /*0x407241*/
      return 1; /*0x407244*/
    }
  }

}
} // namespace gamemd
// 0x401000
namespace gamemd {
int AudioMixer::Init(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{

  SetupSampleAudioMixer(&this->AudioMixer_field_00, 0x4000); /*0x40100a*/
  SetupSampleAudioMixer((int *)this + 10, 100); /*0x401019*/
  SetupSampleAudioMixer((int *)this + 20, 0x2000); /*0x401028*/
  SetRateMixerSample((unsigned int *)this + 10, 10, 0x3E8u, 0); /*0x40103b*/
  SetRateMixerSample(this, 0x4000, 0x3E8u, 0); /*0x40104e*/
  SetRateMixerSample((unsigned int *)this + 20, 0x4000, 0x3E8u, 0); /*0x401061*/
  return EndBufferMixer(&this->AudioMixer_field_00, 0x4000); /*0x40106d*/

}
} // namespace gamemd
// 0x4061D0
namespace gamemd {
int AudioMixer::PlayBuffer(unsigned int * a1, unsigned int a2)
{

  int v2; // eax
  unsigned int *v4; // esi

  v2 = a2; /*0x4061d6*/
  if ( a1[7] == 3 ) /*0x4061d8*/
  {
    if ( a2 > 0x4000 ) /*0x4061e0*/
      v2 = 0x4000; /*0x4061e2*/
    return RequestBufferMixer(a1 + 46, (unsigned int)(v2 * HIWORD(*(unsigned int *)(a1[9] + 28))) >> 14); /*0x406204*/
  }
  else
  {
    if ( a2 > 0x4000 ) /*0x40620f*/
      v2 = 0x4000; /*0x406211*/
    v4 = a1 + 46; /*0x40621f*/
    EndBufferMixer(a1 + 46, (unsigned int)(v2 * HIWORD(*(unsigned int *)(a1[9] + 28))) >> 14); /*0x406236*/
    return AudioMixer::PlaySample(v4); /*0x40623e*/
  }

}
} // namespace gamemd
// 0x406270
namespace gamemd {
int AudioMixer::RequestOrEndBuffer(int a1, unsigned int a2)
{

  if ( *(unsigned int *)(a1 + 28) == 3 ) /*0x406276*/
  {
    if ( a2 > 0x4000 ) /*0x40627e*/
      a2 = 0x4000; /*0x406280*/
    return RequestBufferMixer((unsigned int *)(a1 + 264), a2); /*0x406293*/
  }
  else
  {
    if ( a2 > 0x4000 ) /*0x40629e*/
      a2 = 0x4000; /*0x4062a0*/
    return EndBufferMixer((int *)(a1 + 264), a2); /*0x4062b3*/
  }

}
} // namespace gamemd
// 0x406E80
namespace gamemd {
int AudioMixer::Shutdown(void *a1)
{

  if ( g_Audio_Enabled ) /*0x406e88*/
    ((AudioQueue *)(g_Audio_Enabled))->StopAllVoices(1); /*0x406e8f*/
  return this->AudioStream::CleanupChannels();

}
} // namespace gamemd
// 0x753620
namespace gamemd {
int AudioMixer::Pump()
{

  int result; // eax

  if ( g_InfantryDrawState ) /*0x753628*/
    AudioMixer::ProcessAudioFrame(); /*0x75362a*/
  result = dword_B1D428; /*0x75362f*/
  if ( dword_B1D428 ) /*0x753636*/
  {
    result = --dword_B1D428; /*0x75363d*/
    if ( dword_B1D428 < 0 ) /*0x753643*/
      dword_B1D428 = 0; /*0x753645*/
  }
  return result; /*0x75364f*/

}
} // namespace gamemd