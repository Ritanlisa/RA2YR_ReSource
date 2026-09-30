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

// 0x4080F0
namespace gamemd {
void ThemeManager::ProcessCallback()
{
  int v2; // ebp
  uint64_t v3; // rax
  uint64_t v4; // kr00_8

    v2 = Audio::Callback();
    LODWORD(v3) = *((unsigned int *)this + 80);
  v4 = *(unsigned long long *)(v3 + 32) + IDA___PAIR64__(IDA_HIDWORD(v3), v2); /*0x408104*/
    while ( (*((unsigned char *)this + 48) & 1) != 0 )
  {
        LODWORD(v3) = *((unsigned int *)this + 80);
    if ( *(unsigned int *)(v3 + 20) == *(unsigned int *)(v3 + 24) ) /*0x408118*/
      break; /*0x408118*/
        LODWORD(v3) = Audio::Callback();
    if ( v3 >= v4 ) /*0x408127*/
      break; /*0x408127*/
        LOBYTE(v3) = Event::Dispatch();
  }
  return v3; /*0x408130*/
}
} // namespace gamemd
// 0x720770
namespace gamemd {
void ThemeManager::Cleanup()
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  unsigned int *v5; // ecx

    while ( *((int *)this + 144) > 0 )
  {
    RA2_OPDEL(*(unsigned int *)(this->u32_18)); /*0x720780*/
        v2 = *((unsigned int *)this + 144);
    if ( v2 > 0 ) /*0x72078d*/
    {
      v3 = v2 - 1; /*0x72078f*/
      v4 = 0; /*0x720792*/
            for ( *((unsigned int *)this + 144) = v3;
            v4 < this->q024;
            *(unsigned int *)(this->u32_18 + 4 * v4 - 4) = *(unsigned int *)(this->u32_18 + 4 * v4) )
      {
        ++v4; /*0x72079e*/
      }
    }
  }
  v5 = *(unsigned int **)(&this->u32_104); /*0x7207b4*/
  if ( v5 ) /*0x7207b9*/
  {
    ThemeClass::RequestBuffer(v5); /*0x7207bb*/
        ThemeManager::ProcessCallback(*((unsigned int *)this + 176));
        Audio::Release(*(unsigned int **)((char *)this + 176));
    AudioSample::Destructor(*(void **)(&this->u32_104)); /*0x7207d3*/
        *((unsigned int *)this + 176) = 0;
  }
}
} // namespace gamemd