// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AudioStream_e4.hpp"

// 0x4052F0
int VocClass::Release()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void VocClass_Cleanup(int this)
{
  int result; // eax
  _DWORD **v5; // edi

  if ( ((unsigned char)this->Volume & 1) == 0 ) /*0x4052f7*/
  {
    int v2 = this->pVoiceChannel; /*0x4052fd*/
    if ( v2 && this == *(_DWORD *)(v2 + 192) ) /*0x405311*/
    {
      if ( ((unsigned char)this->Volume & 2) != 0 ) /*0x405317*/
        Voice::Stop(v2); /*0x405319*/
      AudioStream::ReleaseChannel(this->pVoiceChannel); /*0x405324*/
      *(_DWORD *)(this->pVoiceChannel + 192) = 0; /*0x40532f*/
      *(_DWORD *)(this->pVoiceChannel + 188) = 0; /*0x40533b*/
      *(_DWORD *)(this->pVoiceChannel + 180) = 0; /*0x405347*/
      *(_DWORD *)(this->pVoiceChannel + 184) = 0; /*0x405353*/
      *(_DWORD *)(this->pVoiceChannel + 144) = 0; /*0x40535f*/
      *(_DWORD *)(this->pVoiceChannel + 152) = 0; /*0x40536b*/
      *(_DWORD *)(this->pVoiceChannel + 156) = 0; /*0x405377*/
      this->pVoiceChannel = 0; /*0x40537d*/
    }
    result = this->ActiveBufferCount; /*0x405383*/
    int v4 = 0; /*0x405389*/
    if ( result > 0 ) /*0x40538d*/
    {
      v5 = (_DWORD **)(this + 40); /*0x405390*/
      do /*0x4053a8*/
      {
        RefCount::Decrement(*v5); /*0x405395*/
        *v5 = 0; /*0x40539a*/
        result = this->ActiveBufferCount; /*0x40539c*/
        ++v4; /*0x4053a2*/
        ++v5; /*0x4053a3*/
      }
      while ( v4 < result ); /*0x4053a8*/
    }
    this->ActiveBufferCount = 0; /*0x4053ab*/
    this->Volume.AudioState = 4; /*0x4053b1*/
    this->Attack = 0; /*0x4053b8*/
    *(_DWORD *)(this + 632) = 0; /*0x4053be*/
    this->Volume |= 1u; /*0x4053ca*/
  }
  return result; /*0x4053cf*/
}
}

// 0x751590
char * VocClass::GetSampleNameByIndex(int a1)
{
{
    char *v1;
    if ( a1 < 0 || a1 >= g_VocPlayState )
    return g_Str__none_;
    v1 = (char *)**((int **)g_VocAudioConfig + a1);
    if ( v1 )
    return VocClass::GetSampleName(v1);
    else
    return g_Str_Invalid_Voc;
}
}

// 0x753250
int VocClass::FindByName()
{
{
    int v3;
    if ( !this )
    return -1;
    v3 = 0;
    if ( *(int *)&DataGlobal_B1D188[808] <= 0 )
    return -1;
    while ( _strcmpi(this, *(const void **)(*(int *)&DataGlobal_B1D188[796] + 4 * v3)) )
  {
    if ( ++v3 >= *(int *)&DataGlobal_B1D188[808] )
    return -1;
  }
    return v3;
}
}
