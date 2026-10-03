// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/Progress_e4.hpp"
#include "e4/classes/Random_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Multiplayer_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/NetworkGameSetup_e4.hpp"
#include "e4/classes/NetworkAddress_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/PlayerClass_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/RadarClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/Screen_e4.hpp"
#include "e4/classes/MultiplayerSiege_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/NetworkClass_e4.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/String_e4.hpp"

// 0x688380
namespace gamemd {
void * Multiplayer::FindStartPositions()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x688380)
}
} // namespace gamemd
// 0x68C2B0
namespace gamemd {
unsigned int * Multiplayer::CopyDataArray(unsigned int *aP1)
{

  int v3; // edi
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == (Multiplayer *)aP1 ) /*0x68c2bb*/
    return (unsigned int *)(this); /*0x68c2bb*/
  (*(void (**)(Multiplayer *))(*(unsigned int *)this + 12))(this); /*0x68c2bf*/
  v3 = (int)(aP1[2]); /*0x68c2c2*/
  *((unsigned int *)this + 2) = v3; /*0x68c2c7*/
  if ( !v3 ) /*0x68c2ca*/
  {
    *((unsigned int *)this + 1) = 0; /*0x68c319*/
    *((unsigned char *)this + 13) = 0; /*0x68c320*/
    return (unsigned int *)(this); /*0x68c324*/
  }
  v4 = (int)(__2_YAPAXI_Z(4 * v3)); /*0x68c2d4*/
  if ( !v4 ) /*0x68c2de*/
    v4 = 0; /*0x68c2e7*/
  *((unsigned int *)this + 1) = v4; /*0x68c2eb*/
  if ( !v4 ) /*0x68c2ee*/
    return (unsigned int *)(this); /*0x68c2ee*/
  v5 = *((unsigned int *)this + 2); /*0x68c2f0*/
  v6 = 0; /*0x68c2f3*/
  *((unsigned char *)this + 13) = 1; /*0x68c2f7*/
  if ( v5 <= 0 ) /*0x68c2fb*/
    return (unsigned int *)(this); /*0x68c2fb*/
  do /*0x68c30f*/
  {
    *(unsigned int *)(*((unsigned int *)this + 1) + 4 * v6) = *(unsigned int *)(aP1[1] + 4 * v6); /*0x68c306*/
    ++v6; /*0x68c30c*/
  }
  while ( v6 < *((unsigned int *)this + 2) ); /*0x68c30f*/
  return (unsigned int *)(this); /*0x68c313*/

}
} // namespace gamemd
// 0x69AE90
namespace gamemd {
void Multiplayer::ShowProgress(int a2)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x69AE90)
}
} // namespace gamemd
// 0x53F1F0
namespace gamemd {
void Multiplayer::Screen()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x53F1F0)
}
} // namespace gamemd