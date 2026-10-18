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
namespace gamemd {  // G42.18 ns repair
unsigned int * MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass(int a2, int a3, void *a3_2)
{
  a3_2->MultiplayerGameMode_field_0x04 = 0; /*0x5d89fb*/
  a3_2->MultiplayerGameMode_field_0x08 = a3_2; /*0x5d89fe*/
  (*((unsigned char *)&(a3_2->MultiplayerGameMode_field_0x0C))) = 1; /*0x5d8a01*/
  (((unsigned char *)&(a3_2->MultiplayerGameMode_field_0x0C))[1]) = 0; /*0x5d8a05*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_VectorClass) */  /*0x5d8a08*/
  if ( a3_2 ) /*0x5d8a0e*/
  {
    if ( a3_2 ) /*0x5d8a16*/
    {
      a3_2->MultiplayerGameMode_field_0x04 = a3_2; /*0x5d8a18*/
      return a3_2->__pad_0; /*0x5d8a1e*/
    }
    a3_2->MultiplayerGameMode_field_0x04 = operator new(4 * a3_2); /*0x5d8a2d*/
    (((unsigned char *)&(a3_2->MultiplayerGameMode_field_0x0C))[1]) = 1; /*0x5d8a30*/
  }
  return a3_2->__pad_0; /*0x5d8a1d*/
}  // G42.18 ns repair
} // namespace gamemd
// 0x5D7F20
namespace gamemd {
MultiplayerGameMode * MultiplayerGameMode::QueryInterface(char * Block, char a2)
{
  void (***v4)(unsigned int, int); // ecx
  void (***v5)(unsigned int, int); // ecx
  void *MultiplayerGameMode_field_0x0C; // eax

  int v3 = 0; // edi /*0x5d7f24*/
  for ( *(unsigned int *)Block->tail_0 = &vt_MultiplayerGameMode; v3 < Block->u32_18; ++v3 ) /*0x5d7f31*/
  {
    v4 = *(void (****)(unsigned int, int))(Block->u32_C + 4 * v3); /*0x5d7f36*/
    if ( v4 ) /*0x5d7f3b*/
      (**v4)(v4, 1); /*0x5d7f41*/
  }
  (*(void (**)(int *))(Block->u32_8 + 12))(&Block->u32_8); /*0x5d7f53*/
  v5 = (void (***)(unsigned int, int))*((unsigned int *)Block + 14); /*0x5d7f56*/
  if ( v5 ) /*0x5d7f5b*/
    (**v5)(v5, 1); /*0x5d7f61*/
  DeleteAndZero((ObjectClass *)((char *)Block + 48)); /*0x5d7f66*/
  DeleteAndZero((ObjectClass *)((char *)Block + 44)); /*0x5d7f6e*/
  ((DeleteAndZero *)Block + 3)->Alt(); /*0x5d7f76*/
  ((DeleteAndZero *)((char *)Block + 32))->Alt(); /*0x5d7f7e*/
  MultiplayerGameMode_field_0x0C = (void *)Block->u32_C; /*0x5d7f83*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_VectorClass) */  /*0x5d7f86*/
  if ( MultiplayerGameMode_field_0x0C && (Block->u8_15) ) /*0x5d7f90*/
  {
    operator delete((MultiplayerGameMode_field_0x0C)); /*0x5d7f98*/
    Block->u32_C = 0; /*0x5d7fa0*/
  }
  (Block->u8_15) = 0; /*0x5d7fab*/
  Block->u32_10 = 0; /*0x5d7fb1*/
  if ( (a2 & 1) != 0 ) /*0x5d7fb8*/
    operator delete((Block)); /*0x5d7fbb*/
  return Block->tail_0; /*0x5d7fc5*/
}
} // namespace gamemd
