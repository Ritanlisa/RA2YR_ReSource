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

  int v3; // edi
  void (***v4)(unsigned int, int); // ecx
  void (***v5)(unsigned int, int); // ecx
  void *MultiplayerGameMode_field_0x0C; // eax

  v3 = 0; /*0x5d7f24*/
  for ( *(unsigned int *)this->__pad_0 = &vt_MultiplayerGameMode; v3 < this->MultiplayerGameMode_field_0x18; ++v3 ) /*0x5d7f31*/
  {
    v4 = *(void (****)(unsigned int, int))(this->MultiplayerGameMode_field_0x0C + 4 * v3); /*0x5d7f36*/
    if ( v4 ) /*0x5d7f3b*/
      (**v4)((unsigned int)v4, 1); /*0x5d7f41*/
  }
  (*(void (**)(int *))(this->MultiplayerGameMode_field_0x08 + 12))( (int *)(&this->MultiplayerGameMode_field_0x08)); /*0x5d7f53*/
  v5 = (void (***)(unsigned int, int))*((unsigned int *)this + 14); /*0x5d7f56*/
  if ( v5 ) /*0x5d7f5b*/
    (**v5)((unsigned int)v5, 1); /*0x5d7f61*/
  j_DeleteAndZero( (void *)((ObjectClass *)((char *)this + 48))); /*0x5d7f66*/
  j_DeleteAndZero( (void *)((ObjectClass *)((char *)this + 44))); /*0x5d7f6e*/
  ((DeleteAndZero*)(DeleteAndZero *)this + 3)->Alt(); /*0x5d7f76*/
  ((DeleteAndZero*)(DeleteAndZero *)((char *)this + 32))->Alt(); /*0x5d7f7e*/
  MultiplayerGameMode_field_0x0C = (void *)this->MultiplayerGameMode_field_0x0C; /*0x5d7f83*/
  this->MultiplayerGameMode_field_0x08 = (int)&vt_VectorClass; /*0x5d7f86*/
  if ( MultiplayerGameMode_field_0x0C && BYTE1(this->MultiplayerGameMode_field_0x14) ) /*0x5d7f90*/
  {
    __3_YAXPAX_Z(MultiplayerGameMode_field_0x0C); /*0x5d7f98*/
    this->MultiplayerGameMode_field_0x0C = 0; /*0x5d7fa0*/
  }
  BYTE1(this->MultiplayerGameMode_field_0x14) = 0; /*0x5d7fab*/
  this->MultiplayerGameMode_field_0x10 = 0; /*0x5d7fb1*/
  if ( (a2 & 1) != 0 ) /*0x5d7fb8*/
    __3_YAXPAX_Z(this); /*0x5d7fbb*/
  return (gamemd::MultiplayerGameMode *)(this->__pad_0); /*0x5d7fc5*/

}
} // namespace gamemd
