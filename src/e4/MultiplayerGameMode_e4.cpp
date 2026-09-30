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

// 0x5D89F0
namespace gamemd {
unsigned int * MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass(int a2, int a3)
{

  *((unsigned int *)this + 1) = 0; /*0x5d89fb*/
  *((unsigned int *)this + 2) = a2; /*0x5d89fe*/
  *((unsigned char *)this + 12) = 1; /*0x5d8a01*/
  *((unsigned char *)this + 13) = 0; /*0x5d8a05*/
  *this = &vt_VectorClass_MultiplayerGameMode; /*0x5d8a08*/
  if ( a2 ) /*0x5d8a0e*/
  {
    if ( a3 ) /*0x5d8a16*/
    {
      *((unsigned int *)this + 1) = a3; /*0x5d8a18*/
      return this; /*0x5d8a1e*/
    }
    *((unsigned int *)this + 1) = __2_YAPAXI_Z(4 * a2); /*0x5d8a2d*/
    *((unsigned char *)this + 13) = 1; /*0x5d8a30*/
  }
  return (unsigned int *)(this);

}
} // namespace gamemd
// 0x5D7F20
namespace gamemd {
MultiplayerGameMode * MultiplayerGameMode::QueryInterface(char * Block, char a2)
{

  int v3; // edi
  void (***v4)(unsigned int, int); // ecx
  void (***v5)(unsigned int, int); // ecx
  void *v6; // eax

  v3 = (unsigned int)(0);
  for ( *(unsigned int *)Block = &vt_MultiplayerGameMode; v3 < *((unsigned int *)Block + 6); ++v3 ) /*0x5d7f31*/
  {
    v4 = *(void (****)(unsigned int, int))(*((unsigned int *)Block + 3) + 4 * v3); /*0x5d7f36*/
    if ( v4 ) /*0x5d7f3b*/
      (**v4)(v4, 1); /*0x5d7f41*/
  }
  (*(void (**)(char *))(*((unsigned int *)Block + 2) + 12))(Block + 8); /*0x5d7f53*/
  v5 = (void (***)(unsigned int, int))*((unsigned int *)Block + 14); /*0x5d7f56*/
  if ( v5 ) /*0x5d7f5b*/
    (**v5)(v5, 1); /*0x5d7f61*/
  DeleteAndZero((void **)Block + 12); /*0x5d7f66*/
  DeleteAndZero((void **)Block + 11); /*0x5d7f6e*/
  DeleteAndZero::Alt((void **)Block + 9); /*0x5d7f76*/
  DeleteAndZero::Alt((void **)Block + 8); /*0x5d7f7e*/
  v6 = (void *)*((unsigned int *)Block + 3); /*0x5d7f83*/
  *((unsigned int *)Block + 2) = &vt_VectorClass_MultiplayerTeam; /*0x5d7f86*/
  if ( v6 && *(Block + 21) ) /*0x5d7f90*/
  {
    __3_YAXPAX_Z(v6); /*0x5d7f98*/
    *((unsigned int *)Block + 3) = 0; /*0x5d7fa0*/
  }
  *(Block + 21) = 0; /*0x5d7fab*/
  *((unsigned int *)Block + 4) = 0; /*0x5d7fb1*/
  if ( (a2 & 1) != 0 ) /*0x5d7fb8*/
    __3_YAXPAX_Z(Block); /*0x5d7fbb*/
  return (MultiplayerGameMode *)Block; /*0x5d7fc5*/

}
} // namespace gamemd