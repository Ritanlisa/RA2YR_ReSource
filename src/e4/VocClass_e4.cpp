// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/VocClass_e4.hpp"
#include "e4/classes/RefCount_e4.hpp"
#include "e4/classes/Voice_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x4052F0
namespace gamemd {
int VocClass::Release()
{
  void * v2;
  int result; // eax
  int v4; // ebx
  _DWORD **v5; // edi

  if ( (this->Volume & 1) == 0 ) /*0x4052f7*/
  {
    v2 = this->pVoiceChannel; /*0x4052fd*/
    if ( v2 && this == *(_DWORD *)(v2 + 192) ) /*0x405311*/
    {
      if ( (this->Volume & 2) != 0 ) /*0x405317*/
        Voice::Stop(v2); /*0x405319*/
      AudioStream::ReleaseChannel(*(_DWORD **)(&this->VocClass_field_446)); /*0x405324*/
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
    v4 = 0; /*0x405389*/
    if ( result > 0 ) /*0x40538d*/
    {
      v5 = (_DWORD **)(&this->u32_100); /*0x405390*/
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
    this->u32_1C = 4; /*0x4053b1*/
    this->Attack = 0; /*0x4053b8*/
    this->u32_278 = 0; /*0x4053be*/
    this->Volume |= 1u; /*0x4053ca*/
  }
  return result; /*0x4053cf*/
}
} // namespace gamemd
// 0x751590
namespace gamemd {
char * VocClass::GetSampleNameByIndex(int a1)
{
  char *v1; // ecx

  if ( a1 < 0 || a1 >= g_VocPlayState ) /*0x75159a*/
    return g_Str__none_; /*0x7515b5*/
  v1 = (char *)**((_DWORD **)g_VocAudioConfig + a1); /*0x7515a4*/
  if ( v1 ) /*0x7515a8*/
    return VocClass::GetSampleName(v1); /*0x7515aa*/
  else
    return g_Str_Invalid_Voc; /*0x7515af*/
}
} // namespace gamemd
// 0x753250
namespace gamemd {
int VocClass::FindByName()
{
  int v3; // esi

  if ( !this ) /*0x753255*/
    return -1; /*0x753257*/
  v3 = 0; /*0x753262*/
  if ( g_InfantrySelectState <= 0 ) /*0x753266*/
    return -1; /*0x753288*/
  while ( _strcmpi(this, *((const void **)g_InfantryRenderPool + v3)) ) /*0x75327c*/
  {
    if ( ++v3 >= g_InfantrySelectState ) /*0x753286*/
      return -1; /*0x753286*/
  }
  return v3; /*0x75325a*/
}
} // namespace gamemd