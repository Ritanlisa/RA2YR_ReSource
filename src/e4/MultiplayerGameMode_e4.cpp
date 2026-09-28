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

// 0x5D89F0
namespace gamemd {
unsigned int * MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass(int a2, int a3)
{
  this->MultiplayerGameMode_field_0x04 = (unsigned int)(0);
  this->MultiplayerGameMode_field_0x08 = (unsigned int)(a2);
  IDA_LOBYTE(this->MultiplayerGameMode_field_0x0C) = 1; /*0x5d8a01*/
  IDA_BYTE1(this->MultiplayerGameMode_field_0x0C) = 0; /*0x5d8a05*/
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_MultiplayerGameMode___vftable; /*0x5d8a08*/
  if ( a2 ) /*0x5d8a0e*/
  {
    if ( a3 ) /*0x5d8a16*/
    {
      this->MultiplayerGameMode_field_0x04 = (unsigned int *)(a3);
      return this->__pad_0; /*0x5d8a1e*/
    }
    this->MultiplayerGameMode_field_0x04 = (unsigned int)(RA2_OPNEW(4 * a2));
    IDA_BYTE1(this->MultiplayerGameMode_field_0x0C) = 1; /*0x5d8a30*/
  }
  return (unsigned int *)(this->__pad_0);
}
} // namespace gamemd
// 0x5D7F20
namespace gamemd {
MultiplayerGameMode * MultiplayerGameMode::QueryInterface(char a2)
{
  int v3; // edi
  void (__thiscall ***v4)(unsigned int, int); // ecx
  void (__thiscall ***v5)(unsigned int, int); // ecx
  void *MultiplayerGameMode_field_0x0C; // eax

  v3 = (unsigned int)(0);
  for ( *(unsigned int *)this->__pad_0 = (void*)&MultiplayerGameMode_vftable; v3 < this->MultiplayerGameMode_field_0x18; ++v3 ) /*0x5d7f31*/
  {
    v4 = *(void (__thiscall ****)(unsigned int, int))(this->MultiplayerGameMode_field_0x0C + 4 * v3); /*0x5d7f36*/
    if ( v4 ) /*0x5d7f3b*/
      (**v4)(v4, 1); /*0x5d7f41*/
  }
  (*(void (__thiscall **)(int *))(this->MultiplayerGameMode_field_0x08 + 12))(&this->MultiplayerGameMode_field_0x08); /*0x5d7f53*/
  v5 = (void (__thiscall ***)(unsigned int, int))this->u32_38; /*0x5d7f56*/
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
    RA2_OPDEL(this); /*0x5d7fbb*/
  return this->__pad_0; /*0x5d7fc5*/
}
} // namespace gamemd