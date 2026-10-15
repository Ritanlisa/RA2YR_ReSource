// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/ThemeManager_e4.hpp"
#include "e4/classes/HouseTypeClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/Theme_e4.hpp"
#include "e4/classes/ThemeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/AudioSample_e4.hpp"

// 0x4080F0
namespace gamemd {  // G42.18 ns repair
char ThemeManager::ProcessCallback(void *a1)
{

  int v2; // ebp
  v2 = Audio::Callback(); /*0x4080fa*/
  uint64_t v3; // rax
  (*((unsigned int *)&(v3))) = *((unsigned int *)a1 + 5); /*0x4080fc*/
  uint64_t v4; // kr00_8
  v4 = *(unsigned long long *)(v3 + 32) + (((unsigned long)(unsigned int)(v2)) | ((unsigned long)(unsigned int)((*(((unsigned int *)&(v3)) + 1))) << 32)); /*0x408104*/
  while ( (*(unsigned char *)((unsigned int)(a1)+ 12) & 1) != 0 ) /*0x408107*/
  {
    (*((unsigned int *)&(v3))) = *((unsigned int *)a1 + 5); /*0x40810d*/
    if ( *(unsigned int *)(v3 + 20) == v3->q018 ) /*0x408118*/
      break; /*0x408118*/
    (*((unsigned int *)&(v3))) = Audio::Callback(); /*0x40811a*/
    if ( v3 >= v4 ) /*0x408127*/
      break; /*0x408127*/
    (*((unsigned char *)&(v3))) = Event::Dispatch(); /*0x408129*/
  }
  return v3; /*0x408130*/
}  // G42.18 ns repair
} // namespace gamemd
// 0x720770
namespace gamemd {
void ThemeManager::Cleanup(void *a1, void *a2)
{

  while ( this->q024 > 0 ) /*0x720778*/
  {
    operator delete((void *)(**&this->u32_18)); /*0x720780*/
  int v2; // eax
    v2 = this->q024; /*0x720785*/
    if ( v2 > 0 ) /*0x72078d*/
    {
  int v3; // ecx
      v3 = v2 - 1; /*0x72078f*/
  int v4; // eax
      v4 = 0; /*0x720792*/
      for ( this->q024 = v3; /*0x720799*/
            v4 < this->q024;
            *(unsigned int *)(this->u32_18 + 4 * v4 - 4) = *(unsigned int *)(this->u32_18 + 4 * v4) )
      {
        ++v4; /*0x72079e*/
      }
    }
  }
  ThemeClass *v5; // ecx
  v5 = (ThemeClass *)this->u32_2C; /*0x7207b4*/
  if ( v5 ) /*0x7207b9*/
  {
    (v5)->RequestBuffer(); /*0x7207bb*/
    ThemeManager::ProcessCallback(*&this->u32_2C); /*0x7207c3*/
    Audio::Release(*&this->u32_2C); /*0x7207cb*/
    AudioSample::Destructor(*&this->u32_2C); /*0x7207d3*/
    this->u32_2C = 0; /*0x7207d8*/
  }
}
} // namespace gamemd