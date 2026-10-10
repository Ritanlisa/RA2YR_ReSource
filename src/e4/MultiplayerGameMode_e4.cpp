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
  *(unsigned int *)a3_2->__pad_0 = &vt_VectorClass; /*0x5d8a08*/
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
  int v3; // edi
  void (***v4)(unsigned int, int); // ecx
  void (***v5)(unsigned int, int); // ecx
  void *MultiplayerGameMode_field_0x0C; // eax

  v3 = 0; /*0x5d7f24*/
  for ( *(unsigned int *)Block->__pad_0 = &vt_MultiplayerGameMode; v3 < Block->MultiplayerGameMode_field_0x18; ++v3 ) /*0x5d7f31*/
  {
    v4 = *(void (****)(unsigned int, int))(Block->MultiplayerGameMode_field_0x0C + 4 * v3); /*0x5d7f36*/
    if ( v4 ) /*0x5d7f3b*/
      (**v4)(v4, 1); /*0x5d7f41*/
  }
  (*(void (**)(int *))(Block->MultiplayerGameMode_field_0x08 + 12))(&Block->MultiplayerGameMode_field_0x08); /*0x5d7f53*/
  v5 = (void (***)(unsigned int, int))*((unsigned int *)Block + 14); /*0x5d7f56*/
  if ( v5 ) /*0x5d7f5b*/
    (**v5)(v5, 1); /*0x5d7f61*/
  DeleteAndZero((ObjectClass *)((char *)Block + 48)); /*0x5d7f66*/
  DeleteAndZero((ObjectClass *)((char *)Block + 44)); /*0x5d7f6e*/
  DeleteAndZero::Alt((DeleteAndZero *)Block + 3); /*0x5d7f76*/
  DeleteAndZero::Alt((DeleteAndZero *)((char *)Block + 32)); /*0x5d7f7e*/
  MultiplayerGameMode_field_0x0C = (void *)Block->MultiplayerGameMode_field_0x0C; /*0x5d7f83*/
  Block->MultiplayerGameMode_field_0x08 = (int)&vt_VectorClass; /*0x5d7f86*/
  if ( MultiplayerGameMode_field_0x0C && (((unsigned char *)&(Block->MultiplayerGameMode_field_0x14))[1]) ) /*0x5d7f90*/
  {
    operator delete((void *)(MultiplayerGameMode_field_0x0C)); /*0x5d7f98*/
    Block->MultiplayerGameMode_field_0x0C = 0; /*0x5d7fa0*/
  }
  (((unsigned char *)&(Block->MultiplayerGameMode_field_0x14))[1]) = 0; /*0x5d7fab*/
  Block->MultiplayerGameMode_field_0x10 = 0; /*0x5d7fb1*/
  if ( (a2 & 1) != 0 ) /*0x5d7fb8*/
    operator delete((void *)(Block)); /*0x5d7fbb*/
  return Block->__pad_0; /*0x5d7fc5*/
}
} // namespace gamemd
