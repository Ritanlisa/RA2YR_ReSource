// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/AudioSample_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/BinkMovie_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/Frame_e4.hpp"
#include "e4/classes/MovieClass_e4.hpp"
#include "e4/classes/MultiplayerGameMode_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Bink_e4.hpp"
#include "core/ddraw_init.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/MultiplayerManBattle_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/AudioMixer_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/Mixer_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/AudioFrame_e4.hpp"
#include "e4/classes/AudioTimer_e4.hpp"
#include "e4/classes/MovieContext_e4.hpp"
#include "e4/classes/Random_e4.hpp"
#include "e4/classes/ThemeClass_e4.hpp"
#include "e4/classes/RulesClass_e4.hpp"

// 0x49CAF0
namespace gamemd {
AbstractClass * * Movie::SetupScreen(int aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x49CAF0)
}
}
// 0x49E3B0
namespace gamemd {
CampaignClass * * Movie::GetSection(CCINIClass * aP1, CCINIClass * aP2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x49E3B0)
}
}
// 0x5BED40
namespace gamemd {
int Movie::Play(int a1, int a2, int a3, const char *a4, char a5, char a6, char a7, char a8, int aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5BED40)
}
}
// 0x5BF260
namespace gamemd {
void Movie_PlayWrapper(void * a1, void * a2, void * a3, void * a4, void * a5, void * a6)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5BF260)
}
}
// 0x7209D0
namespace gamemd {
int Movie::Update(void *a1_1, void *a2_1, void *a3_1, void *a4_1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7209D0)
}
}
// 0x720A80
namespace gamemd {
unsigned int Movie::SelectNextBuildableType(int aP1)
{

  unsigned int v2; // ebp
  int v4; // edi
  unsigned int v5; // eax
  unsigned int v6; // ebx
  bool v7; // zf
  int v9; // edi

  v2 = aP1; /*0x720a81*/
  if ( (aP1 <= -1 || *(unsigned char *)(*(unsigned int *)(*((unsigned int *)this + 6) + 4 * aP1) + 649) || *((unsigned char *)this + 16)) && aP1 >= 0 ) /*0x720aa7*/
    return v2; /*0x720b18*/
  if ( *((unsigned char *)this + 18) == 1 ) /*0x720aad*/
  {
    v4 = 0; /*0x720ab0*/
    while ( 1 ) /*0x720abe*/
    {
      v5 = Random::Range(&Randomizer_Global, 0, *((unsigned int *)this + 9) - 1); /*0x720abe*/
      ++v4; /*0x720ac3*/
      v6 = v5; /*0x720ac4*/
      v7 = v4 == 1000; /*0x720ac6*/
      if ( v4 >= 1000 ) /*0x720acc*/
        break; /*0x720acc*/
      if ( v5 != aP1 && (uint8_t)((RulesClass *)((RulesClass *)this))->IsTypeBuildable(v5) ) /*0x720ad5*/
      {
        v7 = v4 == 1000; /*0x720ade*/
        break; /*0x720ade*/
      }
    }
    if ( v7 ) /*0x720ae4*/
      return 0; /*0x720ae6*/
    return v6; /*0x720ae8*/
  }
  else
  {
    v9 = *((unsigned int *)this + 9) + 1; /*0x720af4*/
    while ( 1 ) /*0x720af8*/
    {
      if ( (signed int)++v2 >= *((unsigned int *)this + 9) ) /*0x720afb*/
        v2 = 0; /*0x720afd*/
      if ( !--v9 ) /*0x720b00*/
        break; /*0x720b00*/
      if ( (uint8_t)((RulesClass *)((RulesClass *)this))->IsTypeBuildable(v2) ) /*0x720b05*/
        return v2; /*0x720b0c*/
    }
    return 0; /*0x720b12*/
  }

}
}
char Movie::GetSectionID(unsigned int *a2)
{

  int result; // eax

  if ( *((unsigned char *)this + 108) ) /*0x49bc80*/
  {
    result = *((char *)this + 17); /*0x49bc8c*/
    *a2 = result; /*0x49bc93*/
    LOBYTE(result) = 1; /*0x49bc95*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x49bc87*/
  }
  return result; /*0x49bc89*/

}
} // namespace gamemd

// 0x49BCC0
namespace gamemd {
char Movie::GetState(unsigned int *aP1)
{

  int result; // eax

  if ( *((unsigned char *)this + 108) ) /*0x49bcc0*/
  {
    result = *((char *)this + 14); /*0x49bccc*/
    *aP1 = result; /*0x49bcd3*/
    LOBYTE(result) = 1; /*0x49bcd5*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x49bcc7*/
  }
  return result; /*0x49bcc9*/

}
} // namespace gamemd
