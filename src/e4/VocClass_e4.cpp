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
  Voice *v1; // ebp
  VocClass **pVoiceChannel; // ecx
  int result; // eax
  int v5; // ebx
  RefCount **v6; // edi

    if ( (*((unsigned char *)this + 96) & 1) == 0 )
  {
        v2 = *((unsigned int *)this + 704);
    if ( pVoiceChannel && this == pVoiceChannel[48] ) /*0x405311*/
    {
            if ( (*((unsigned char *)this + 96) & 2) != 0 )
        Voice::Stop(v1); /*0x405319*/
            AudioStream::ReleaseChannel(*(unsigned int **)((char *)this + 704));
            *(unsigned int *)(*((unsigned int *)this + 704) + 192) = 0;
            *(unsigned int *)(*((unsigned int *)this + 704) + 188) = 0;
            *(unsigned int *)(*((unsigned int *)this + 704) + 180) = 0;
            *(unsigned int *)(*((unsigned int *)this + 704) + 184) = 0;
            *(unsigned int *)(*((unsigned int *)this + 704) + 144) = 0;
            *(unsigned int *)(*((unsigned int *)this + 704) + 152) = 0;
            *(unsigned int *)(*((unsigned int *)this + 704) + 156) = 0;
            *((unsigned int *)this + 704) = 0;
    }
        result = *((unsigned int *)this + 672);
    v5 = 0; /*0x405389*/
    if ( result > 0 ) /*0x40538d*/
    {
            v5 = (unsigned int **)((char *)this + 160);
      do /*0x4053a8*/
      {
        RefCount::Decrement(*v6); /*0x405395*/
        *v6 = 0; /*0x40539a*/
                result = *((unsigned int *)this + 672);
        ++v5; /*0x4053a2*/
        ++v6; /*0x4053a3*/
      }
      while ( v5 < result ); /*0x4053a8*/
    }
        *((unsigned int *)this + 672) = 0;
        *((unsigned int *)this + 112) = 4;
        *((unsigned int *)this + 1248) = 0;
        *((unsigned int *)this + 2528) = 0;
        *((unsigned int *)this + 96) |= 1u;
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
  v1 = (char *)**((unsigned int **)g_VocAudioConfig + a1); /*0x7515a4*/
  if ( v1 ) /*0x7515a8*/
// 0x405170
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
  while ( _strcmpi((char *)this, *((char **)g_InfantryRenderPool + v3)) ) /*0x75327c*/
  {
    if ( ++v3 >= g_InfantrySelectState ) /*0x753286*/
      return -1; /*0x753286*/
  }
  return v3; /*0x75325a*/
}
} // namespace gamemd