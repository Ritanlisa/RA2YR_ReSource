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
namespace gamemd {  // G42.18 ns repair
int VocClass::Release(void *a1)
{

  int result; // eax

  if ( (this->Volume[0] & 1) == 0 ) /*0x4052f7*/
  {
    VocClass **pVoiceChannel; // ecx
    pVoiceChannel = (VocClass **)this->pVoiceChannel; /*0x4052fd*/
    if ( pVoiceChannel && this == pVoiceChannel[48] ) /*0x405311*/
    {
      Voice *v1; // ebp
      if ( (this->Volume[0] & 2) != 0 ) /*0x405317*/
        (v1)->Stop(); /*0x405319*/
      ((AudioStream *)this->pVoiceChannel)->ReleaseChannel(); /*0x405324*/
      *((unsigned int *)this->pVoiceChannel + 48) = 0; /*0x40532f*/
      *((unsigned int *)this->pVoiceChannel + 47) = 0; /*0x40533b*/
      *((unsigned int *)this->pVoiceChannel + 45) = 0; /*0x405347*/
      *((unsigned int *)this->pVoiceChannel + 46) = 0; /*0x405353*/
      *((unsigned int *)this->pVoiceChannel + 36) = 0; /*0x40535f*/
      *((unsigned int *)this->pVoiceChannel + 38) = 0; /*0x40536b*/
      *((unsigned int *)this->pVoiceChannel + 39) = 0; /*0x405377*/
      this->pVoiceChannel = 0; /*0x40537d*/
    }
    result = this->ActiveBufferCount; /*0x405383*/
    int v5 = 0; // ebx /*0x405389*/
    if ( result > 0 ) /*0x40538d*/
    {
      RefCount **v6 = &this->VocClass_field_98; // edi /*0x405390*/
      do /*0x4053a8*/
      {
        (*v6)->Decrement(); /*0x405395*/
        *v6 = 0; /*0x40539a*/
        result = this->ActiveBufferCount; /*0x40539c*/
        ++v5; /*0x4053a2*/
        ++v6; /*0x4053a3*/
      }
      while ( v5 < result ); /*0x4053a8*/
    }
    this->ActiveBufferCount = 0; /*0x4053ab*/
    this->Volume[1] = 4; /*0x4053b1*/
    this->Attack = 0; /*0x4053b8*/
    this->u32_278 = 0; /*0x4053be*/
    this->Volume[0] |= 1u; /*0x4053ca*/
  }
  return result; /*0x4053cf*/

}
} // namespace gamemd
// 0x751590
namespace gamemd {
char * VocClass::GetSampleNameByIndex(int a1)
{

  if ( a1 < 0 || a1 >= g_VocPlayState ) /*0x75159a*/
    return g_Str__none_; /*0x7515b5*/
  char *v1; // ecx
  v1 = (char *)**((unsigned int **)g_VocAudioConfig + a1); /*0x7515a4*/
  if ( v1 ) /*0x7515a8*/
    return VocClass::GetSampleName(v1); /*0x7515aa*/
  else
    return (char *)(g_Str_Invalid_Voc); /*0x7515af*/
}
} // namespace gamemd
// 0x753250
namespace gamemd {
int VocClass::FindByName(void *a1)
{

  if ( !this ) /*0x753255*/
    return -1; /*0x753257*/
  int v3 = 0; // esi /*0x753262*/
  if ( g_InfantrySelectState <= 0 ) /*0x753266*/
    return -1; /*0x753288*/
  while ( _strcmpi((char *)this, *((char **)g_InfantryRenderPool + v3)) ) /*0x75327c*/
  {
    if ( ++v3 >= g_InfantrySelectState ) /*0x753286*/
      return -1; /*0x753286*/
  }
  return v3; /*0x75325a*/
}
} // namespace gamemd