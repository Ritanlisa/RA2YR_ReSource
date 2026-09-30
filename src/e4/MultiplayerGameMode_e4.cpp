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
  this->MultiplayerGameMode_field_0x04 = (unsigned int)(0);
  this->MultiplayerGameMode_field_0x08 = (unsigned int)(a2);
    *((unsigned char *)this + 12) = 1;
    *((unsigned char *)this + 13) = 0;
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_MultiplayerGameMode___vftable; /*0x5d8a08*/
  if ( a2 ) /*0x5d8a0e*/
  {
    if ( a3 ) /*0x5d8a16*/
    {
      this->MultiplayerGameMode_field_0x04 = (unsigned int *)(a3);
      return (unsigned int *)(this->__pad_0);
    }
    this->MultiplayerGameMode_field_0x04 = (unsigned int)(RA2_OPNEW(4 * a2));
        *((unsigned char *)this + 13) = 1;
  }
  return (unsigned int *)(this->__pad_0);
}
} // namespace gamemd
// 0x5D7F20
namespace gamemd {
MultiplayerGameMode * MultiplayerGameMode::QueryInterface(char a2)
{
  void * v3;
  void (***v4)(unsigned int, int); // ecx
  void (***v5)(unsigned int, int); // ecx
  void *MultiplayerGameMode_field_0x0C; // eax

  v3 = (void *)((unsigned int)(0));
    for ( *(unsigned int *)Block = &vt_MultiplayerGameMode; v3 < *((unsigned int *)Block + 6); ++v3 )
  {
        v4 = *(void (****)(unsigned int, int))(*((unsigned int *)Block + 3) + 4 * v3);
    if ( v4 ) /*0x5d7f3b*/
      (**v4)(v4, 1); /*0x5d7f41*/
  }
    (*(void (**)(char *))(*((unsigned int *)Block + 2) + 12))(Block + 8);
    v5 = (void (***)(unsigned int, int))*((unsigned int *)Block + 14);
  if ( v5 ) /*0x5d7f5b*/
    (**v5)(v5, 1); /*0x5d7f61*/
  DeleteAndZero((ObjectClass *)((char *)&this->q0108)); /*0x5d7f66*/
  DeleteAndZero((ObjectClass *)((char *)&this->q0104)); /*0x5d7f6e*/
  DeleteAndZero::Alt((DeleteAndZero *)this + 3); /*0x5d7f76*/
  DeleteAndZero::Alt((DeleteAndZero *)((char *)&this->q00C2)); /*0x5d7f7e*/
  MultiplayerGameMode_field_0x0C = (void *)this->MultiplayerGameMode_field_0x0C; /*0x5d7f83*/
  this->MultiplayerGameMode_field_0x08 = (int)&VectorClass_MultiplayerTeam___vftable; /*0x5d7f86*/
  if ( MultiplayerGameMode_field_0x0C && IDA_BYTE1(this->MultiplayerGameMode_field_0x14) ) /*0x5d7f90*/
  {
    RA2_OPDEL(MultiplayerGameMode_field_0x0C); /*0x5d7f98*/
    this->MultiplayerGameMode_field_0x0C = 0; /*0x5d7fa0*/
  }
  IDA_BYTE1(this->MultiplayerGameMode_field_0x14) = 0; /*0x5d7fab*/
  this->MultiplayerGameMode_field_0x10 = 0; /*0x5d7fb1*/
  if ( (a2 & 1) != 0 ) /*0x5d7fb8*/
    RA2_OPDEL(); /*0x5d7fbb*/
  return this; /*0x5d7fc5*/
}
} // namespace gamemd