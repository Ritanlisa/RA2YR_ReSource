// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"

// 0x406650
int AudioMixer::SetVolume()
{
  int result; // eax

  result = 1; /*0x406653*/
  if ( (*(_BYTE *)(this + 16) & 1) == 0 || *(_DWORD *)(this + 76) ) /*0x40665c*/
    return 0; /*0x406663*/
  return result; /*0x406665*/
}
// 0x4071C0
int AudioMixer::PlaySample()
{
  int v2; // eax
  int v3; // ecx
  int v4; // ebx
  int v5; // eax
  int v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // ebp
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // ecx
  unsigned int v13; // edi
  unsigned __int64 v14; // kr00_8
  unsigned int v15; // edx
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // ecx

  v2 = *(this + 2); /*0x4071c7*/
  v3 = *(this + 1); /*0x4071ca*/
  v4 = v2 - v3; /*0x4071cf*/
  if ( v2 == v3 ) /*0x4071d1*/
    return 0; /*0x40729e*/
  if ( (*(_BYTE *)this & 1) != 0 ) /*0x4071da*/
  {
    *(this + 1) = v2; /*0x4071dc*/
    v5 = *this; /*0x4071df*/
    LOBYTE(v5) = *this | 2; /*0x4071e1*/
    *this = v5; /*0x4071e3*/
    return 1; /*0x4071e6*/
  }
  else
  {
    v7 = Audio::Callback(); /*0x4071f2*/
    v8 = *(this + 6); /*0x4071f7*/
    v9 = *(this + 7); /*0x4071fa*/
    v10 = v7; /*0x4071fd*/
    *(this + 6) = v7; /*0x4071ff*/
    v11 = *(this + 5); /*0x407202*/
    *(this + 7) = v15; /*0x407209*/
    v14 = __PAIR64__(v15, v10) - __PAIR64__(v9, v8); /*0x407205*/
    v13 = (__PAIR64__(v15, v10) - __PAIR64__(v9, v8)) >> 32; /*0x407205*/
    v12 = v14; /*0x407205*/
    if ( __PAIR64__(v13, v14) > __PAIR64__(v11, *(this + 4)) ) /*0x40721b*/
      v12 = *(this + 4); /*0x40721d*/
    v16 = v12 * *(this + 3); /*0x407226*/
    if ( v4 >= 0 ) /*0x40722b*/
    {
      if ( v16 <= v4 ) /*0x407269*/
      {
        v20 = v16 + *(this + 1); /*0x407287*/
        v19 = *this; /*0x407289*/
        LOBYTE(v19) = *this | 2; /*0x40728b*/
        *(this + 1) = v20; /*0x40728d*/
      }
      else
      {
        *(this + 1) += v4; /*0x407270*/
        v19 = *this; /*0x407273*/
        LOBYTE(v19) = *this | 2; /*0x407275*/
      }
      *this = v19; /*0x407277*/
      return 1; /*0x40727a*/
    }
    else
    {
      if ( v16 <= -v4 ) /*0x407233*/
      {
        v18 = *(this + 1) - v16; /*0x407251*/
        v17 = *this; /*0x407253*/
        LOBYTE(v17) = *this | 2; /*0x407255*/
        *(this + 1) = v18; /*0x407257*/
      }
      else
      {
        *(this + 1) += v4; /*0x40723a*/
        v17 = *this; /*0x40723d*/
        LOBYTE(v17) = *this | 2; /*0x40723f*/
      }
      *this = v17; /*0x407241*/
      return 1; /*0x407244*/
    }
  }
}
// 0x401000
int AudioMixer::Init()
{
  SetupSampleAudioMixer(this, 0x4000); /*0x40100a*/
  SetupSampleAudioMixer(this + 10, 100); /*0x401019*/
  SetupSampleAudioMixer(this + 20, 0x2000); /*0x401028*/
  SetRateMixerSample(1000, 0); /*0x40103b*/
  SetRateMixerSample(1000, 0); /*0x40104e*/
  SetRateMixerSample(1000, 0); /*0x401061*/
  return EndBufferMixer(this, 0x4000); /*0x40106d*/
}
// 0x4061D0
int AudioMixer::PlayBuffer(unsigned int * a1, unsigned int a2)
{
  int v2; // eax
  _DWORD *v4; // esi

  v2 = a2; /*0x4061d6*/
  if ( a1[7] == 3 ) /*0x4061d8*/
  {
    if ( a2 > 0x4000 ) /*0x4061e0*/
      v2 = 0x4000; /*0x4061e2*/
    return RequestBufferMixer(a1 + 46, (unsigned int)(v2 * HIWORD(*(_DWORD *)(a1[9] + 28))) >> 14); /*0x406204*/
  }
  else
  {
    if ( a2 > 0x4000 ) /*0x40620f*/
      v2 = 0x4000; /*0x406211*/
    v4 = a1 + 46; /*0x40621f*/
    EndBufferMixer(a1 + 46, (unsigned int)(v2 * HIWORD(*(_DWORD *)(a1[9] + 28))) >> 14); /*0x406236*/
    return AudioMixer::PlaySample(v4); /*0x40623e*/
  }
}
// 0x406270
int AudioMixer::RequestOrEndBuffer(int a1, unsigned int a2)
{
  if ( *(_DWORD *)(a1 + 28) == 3 ) /*0x406276*/
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
// 0x406E80
int AudioMixer::Shutdown()
{
  if ( g_Audio_Enabled ) /*0x406e88*/
    AudioQueue::StopAllVoices(g_Audio_Enabled, 1); /*0x406e8f*/
  return AudioStream::CleanupChannels();
}
// 0x753620
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