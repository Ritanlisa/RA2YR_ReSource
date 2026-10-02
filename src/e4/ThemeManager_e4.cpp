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
void ThemeManager::ProcessCallback(void *a1)
{

  int v2; // ebp
  uint64_t v3; // rax
  uint64_t v4; // kr00_8

  v2 = ((Audio *)this)->Callback(); /*0x4080fa*/
  LODWORD(v3) = *((unsigned int *)this + 5); /*0x4080fc*/
  v4 = *(unsigned long long *)(v3 + 32) + __PAIR64__(HIDWORD(v3), v2); /*0x408104*/
  while ( (*(unsigned char *)((unsigned int *)this + 12) & 1) != 0 ) /*0x408107*/
  {
    LODWORD(v3) = *((unsigned int *)this + 5); /*0x40810d*/
    if ( *(unsigned int *)(v3 + 20) == *(unsigned int *)(v3 + 24) ) /*0x408118*/
      break; /*0x408118*/
    LODWORD(v3) = ((Audio *)this)->Callback(); /*0x40811a*/
    if ( v3 >= v4 ) /*0x408127*/
      break; /*0x408127*/
    LOBYTE(v3) = ((Event *)this)->Dispatch(); /*0x408129*/
  }
  return v3; /*0x408130*/

}
}  // G42.18 ns repair
} // namespace gamemd
// 0x720770
namespace gamemd {
void ThemeManager::Cleanup(void *a1)
{

  int v2; // eax
  int v3; // ecx
  int v4; // eax
  ThemeClass *v5; // ecx

  while ( *((int *)this + 9) > 0 ) /*0x720778*/
  {
    __3_YAXPAX_Z(**((void ***)this + 6)); /*0x720780*/
    v2 = *((unsigned int *)this + 9); /*0x720785*/
    if ( v2 > 0 ) /*0x72078d*/
    {
      v3 = v2 - 1; /*0x72078f*/
      v4 = 0; /*0x720792*/
      for ( *((unsigned int *)this + 9) = v3; /*0x720799*/
            v4 < *((unsigned int *)this + 9);
            *(unsigned int *)(*((unsigned int *)this + 6) + 4 * v4 - 4) = *(unsigned int *)(*((unsigned int *)this + 6) + 4 * v4) )
      {
        ++v4; /*0x72079e*/
      }
    }
  }
  v5 = (ThemeClass *)*((unsigned int *)this + 11); /*0x7207b4*/
  if ( v5 ) /*0x7207b9*/
  {
    ((ThemeClass *)(v5))->RequestBuffer(); /*0x7207bb*/
    ThemeManager::ProcessCallback(*((ThemeManager **)this + 11)); /*0x7207c3*/
    ((Audio *)(*((Audio **)this + 11)))->Release(); /*0x7207cb*/
    AudioSample::Destructor(*((AudioSample **)this + 11)); /*0x7207d3*/
    *((unsigned int *)this + 11) = 0; /*0x7207d8*/
  }

}
} // namespace gamemd