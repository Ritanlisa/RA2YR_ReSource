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
namespace gamemd {
char ThemeManager::ProcessCallback(void *a1)
{

  int v2; // ebp
  uint64_t v3; // rax
  uint64_t v4; // kr00_8

  v2 = ((gamemd::Audio *)this)->Callback(); /*0x4080fa*/
  LODWORD(v3) = *((unsigned int *)this + 5); /*0x4080fc*/
  v4 = *(unsigned long long *)(v3 + 32) + __PAIR64__(HIDWORD(v3), v2); /*0x408104*/
  while ( (*(unsigned char *)((unsigned int *)this + 12) & 1) != 0 ) /*0x408107*/
  {
    LODWORD(v3) = *((unsigned int *)this + 5); /*0x40810d*/
    if ( *(unsigned int *)(v3 + 20) == *(unsigned int *)(v3 + 24) ) /*0x408118*/
      break; /*0x408118*/
    LODWORD(v3) = ((gamemd::Audio *)this)->Callback(); /*0x40811a*/
    if ( v3 >= v4 ) /*0x408127*/
      break; /*0x408127*/
    LOBYTE(v3) = ((gamemd::Event *)this)->Dispatch(); /*0x408129*/
  }
  return v3; /*0x408130*/

}
} // namespace gamemd
// 0x720770
namespace gamemd {
void ThemeManager::Cleanup()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x720770)
}
} // namespace gamemd