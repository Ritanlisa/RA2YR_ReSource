// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MultiplayerGameMode_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/MovieClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/Frame_e4.hpp"
#include "e4/classes/BinkMovie_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/MultiplayerManBattle_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"

// 0x5D89F0
namespace gamemd {
unsigned int * MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass(int a2, int a3, void *a3_2)
{

  this->MultiplayerGameMode_field_0x04 = 0; /*0x5d89fb*/
  this->MultiplayerGameMode_field_0x08 = a2; /*0x5d89fe*/
  LOBYTE(this->MultiplayerGameMode_field_0x0C) = 1; /*0x5d8a01*/
  BYTE1(this->MultiplayerGameMode_field_0x0C) = 0; /*0x5d8a05*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(&vt_VectorClass); /*0x5d8a08*/
  if ( a2 ) /*0x5d8a0e*/
  {
    if ( a3 ) /*0x5d8a16*/
    {
      this->MultiplayerGameMode_field_0x04 = (unsigned int)((unsigned int *)(a3));
      return (unsigned int *)(this->__pad_0);
    }
    this->MultiplayerGameMode_field_0x04 = (unsigned int)(__2_YAPAXI_Z(4 * a2)); /*0x5d8a2d*/
    BYTE1(this->MultiplayerGameMode_field_0x0C) = 1; /*0x5d8a30*/
  }
  return (unsigned int *)(this->__pad_0);

}
} // namespace gamemd
// 0x5D7F20
namespace gamemd {
MultiplayerGameMode * MultiplayerGameMode::QueryInterface(char * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D7F20)
}
} // namespace gamemd
