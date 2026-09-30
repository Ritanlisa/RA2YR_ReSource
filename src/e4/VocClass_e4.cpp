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

  int v2; // ecx
  int result; // eax
  int v4; // ebx
  unsigned int **v5; // edi

  if ( (*((unsigned char *)this + 24) & 1) == 0 ) /*0x4052f7*/
  {
    v2 = *((unsigned int *)this + 44); /*0x4052fd*/
    if ( v2 && this == *(unsigned int *)(v2 + 192) ) /*0x405311*/
    {
      if ( (*((unsigned char *)this + 24) & 2) != 0 ) /*0x405317*/
        Voice::Stop(v2); /*0x405319*/
      AudioStream::ReleaseChannel(*(unsigned int **)((char *)this + 176)); /*0x405324*/
      *(unsigned int *)(*((unsigned int *)this + 44) + 192) = 0; /*0x40532f*/
      *(unsigned int *)(*((unsigned int *)this + 44) + 188) = 0; /*0x40533b*/
      *(unsigned int *)(*((unsigned int *)this + 44) + 180) = 0; /*0x405347*/
      *(unsigned int *)(*((unsigned int *)this + 44) + 184) = 0; /*0x405353*/
      *(unsigned int *)(*((unsigned int *)this + 44) + 144) = 0; /*0x40535f*/
      *(unsigned int *)(*((unsigned int *)this + 44) + 152) = 0; /*0x40536b*/
      *(unsigned int *)(*((unsigned int *)this + 44) + 156) = 0; /*0x405377*/
      *((unsigned int *)this + 44) = 0; /*0x40537d*/
    }
    result = *((unsigned int *)this + 42); /*0x405383*/
    v4 = 0; /*0x405389*/
    if ( result > 0 ) /*0x40538d*/
    {
      v5 = (unsigned int **)((char *)this + 40); /*0x405390*/
      do /*0x4053a8*/
      {
        RefCount::Decrement(*v5); /*0x405395*/
        *v5 = 0; /*0x40539a*/
        result = *((unsigned int *)this + 42); /*0x40539c*/
        ++v4; /*0x4053a2*/
        ++v5; /*0x4053a3*/
      }
      while ( v4 < result ); /*0x4053a8*/
    }
    *((unsigned int *)this + 42) = 0; /*0x4053ab*/
    *((unsigned int *)this + 7) = 4; /*0x4053b1*/
    *((unsigned int *)this + 78) = 0; /*0x4053b8*/
    *((unsigned int *)this + 158) = 0; /*0x4053be*/
    *((unsigned int *)this + 6) |= 1u; /*0x4053ca*/
  }
  return result; /*0x4053cf*/

}
} // namespace gamemd
// 0x751590
namespace gamemd {
char * VocClass::GetSampleNameByIndex(int a1)
{

  char *v1; // ecx

  if ( a1 < 0 || a1 >= (int)((int))((int))(g_abs_B1D388) ) /*0x75159a*/
    return g_abs_817474; /*0x7515b5*/
  v1 = (char *)**((unsigned int **)g_abs_B1D37C + a1); /*0x7515a4*/
  if ( v1 ) /*0x7515a8*/
    return VocClass::GetSampleName(v1); /*0x7515aa*/
  else
    return g_abs_846574; /*0x7515af*/

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
  if ( *(int *)&stru_B1D188.__pad_2B8[112] <= 0 ) /*0x753266*/
    return -1; /*0x753288*/
  while ( _strcmpi(this, *(const void **)(*(unsigned int *)&stru_B1D188.__pad_2B8[100] + 4 * v3)) ) /*0x75327c*/
  {
    if ( ++v3 >= *(int *)&stru_B1D188.__pad_2B8[112] ) /*0x753286*/
      return -1; /*0x753286*/
  }
  return v3; /*0x75325a*/

}
} // namespace gamemd