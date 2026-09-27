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

// 0x5D89F0
namespace gamemd {
unsigned int * MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass(int a2, int a3)
{
  this->q004 = 0; /*0x5d89fb*/
  this->u32_8 = a2; /*0x5d89fe*/
  this->q00C = 1; /*0x5d8a01*/
  this->u8_D = 0; /*0x5d8a05*/
  if ( a2 ) /*0x5d8a0e*/
  {
    if ( a3 ) /*0x5d8a16*/
    {
      this->q004 = (unsigned int *)(a3);
      return (unsigned int *)(this);
    }
    this->q004 = (unsigned char)(operator new(4 * a2));
    this->u8_D = 1; /*0x5d8a30*/
  }
  return (unsigned int *)(this);
}
} // namespace gamemd
// 0x5D7F20
namespace gamemd {
MultiplayerGameMode * MultiplayerGameMode::QueryInterface(char a2)
{
  void * v3;
  void (__thiscall ***v4)(unsigned int, int); // ecx
  void (__thiscall ***v5)(unsigned int, int); // ecx
  void *v6; // eax
v3 = (void *)((unsigned int)((void *)((unsigned int)(0))));
  for ( *(unsigned int *)this = (void*)&MultiplayerGameMode_vftable; v3 < this->q018; ++v3 ) /*0x5d7f31*/
  {
    v4 = *(void (__thiscall ****)(unsigned int, int))(this->q00C + 4 * v3); /*0x5d7f36*/
    if ( v4 ) /*0x5d7f3b*/
      (**v4)(v4, 1); /*0x5d7f41*/
  }
  (*(void (__thiscall **)(char *))(this->u32_8 + 12))&this->q020; /*0x5d7f53*/
  v5 = (void (__thiscall ***)(unsigned int, int))this->q038; /*0x5d7f56*/
  if ( v5 ) /*0x5d7f5b*/
    (**v5)(v5, 1); /*0x5d7f61*/
  DeleteAndZero((void **)&this->q0042); /*0x5d7f66*/
  DeleteAndZero((void **)&this->q0041); /*0x5d7f6e*/
  DeleteAndZero::Alt(void *)&this->q024; /*0x5d7f76*/
  DeleteAndZero::Alt(void *)&this->q020; /*0x5d7f7e*/
  v6 = (void *)this->q00C; /*0x5d7f83*/
  if ( v6 && *(&this->u32_81) ) /*0x5d7f90*/
  {
    RA2_OPDEL(v6); /*0x5d7f98*/
    this->q00C = 0; /*0x5d7fa0*/
  }
  *(&this->u32_81) = 0; /*0x5d7fab*/
  this->q010 = 0; /*0x5d7fb1*/
  if ( (a2 & 1) != 0 ) /*0x5d7fb8*/
    RA2_OPDEL(); /*0x5d7fbb*/
  return this; /*0x5d7fc5*/
}
} // namespace gamemd