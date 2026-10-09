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
  a3_2->q004 = 0; /*0x5d89fb*/
  a3_2->u32_8 = a3_2; /*0x5d89fe*/
  IDA_LOBYTE(a3_2->q00C) = 1; /*0x5d8a01*/
  IDA_BYTE1(a3_2->q00C) = 0; /*0x5d8a05*/
  *(_DWORD *)a3_2->q000 = &(void*)(void*)&VectorClass_MultiplayerGameMode___vftable; /*0x5d8a08*/
  if ( a3_2 ) /*0x5d8a0e*/
  {
    if ( a3_2 ) /*0x5d8a16*/
    {
      a3_2->q004 = a3_2; /*0x5d8a18*/
      return a3_2->q000; /*0x5d8a1e*/
    }
    a3_2->q004 = RA2_OPNEW(4 * a3_2); /*0x5d8a2d*/
    IDA_BYTE1(a3_2->q00C) = 1; /*0x5d8a30*/
  }
  return a3_2->q000; /*0x5d8a1d*/
}
} // namespace gamemd
// 0x5D7F20
namespace gamemd {
MultiplayerGameMode * MultiplayerGameMode::QueryInterface(char * Block, char a2)
{
  int v3; // edi
  void (__thiscall ***v4)(_DWORD, int); // ecx
  void (__thiscall ***v5)(_DWORD, int); // ecx
  void *q00C; // eax

  v3 = 0; /*0x5d7f24*/
  for ( *(_DWORD *)Block->q000 = &(void*)(void*)&MultiplayerGameMode_vftable; v3 < Block->q018; ++v3 ) /*0x5d7f31*/
  {
    v4 = *(void (__thiscall ****)(_DWORD, int))(Block->q00C + 4 * v3); /*0x5d7f36*/
    if ( v4 ) /*0x5d7f3b*/
      (**v4)(v4, 1); /*0x5d7f41*/
  }
  (*(void (__thiscall **)(int *))(Block->u32_8 + 12))(&Block->u32_8); /*0x5d7f53*/
  v5 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)Block + 14); /*0x5d7f56*/
  if ( v5 ) /*0x5d7f5b*/
    (**v5)(v5, 1); /*0x5d7f61*/
  DeleteAndZero((ObjectClass *)((char *)Block + 48)); /*0x5d7f66*/
  DeleteAndZero((ObjectClass *)((char *)Block + 44)); /*0x5d7f6e*/
  DeleteAndZero::Alt((DeleteAndZero *)Block + 3); /*0x5d7f76*/
  DeleteAndZero::Alt((DeleteAndZero *)((char *)Block + 32)); /*0x5d7f7e*/
  q00C = (void *)Block->q00C; /*0x5d7f83*/
  Block->u32_8 = (int)&(void*)(void*)&VectorClass_MultiplayerTeam___vftable; /*0x5d7f86*/
  if ( q00C && IDA_BYTE1(Block->q014) ) /*0x5d7f90*/
  {
    RA2_OPDEL(q00C); /*0x5d7f98*/
    Block->q00C = 0; /*0x5d7fa0*/
  }
  IDA_BYTE1(Block->q014) = 0; /*0x5d7fab*/
  Block->q010 = 0; /*0x5d7fb1*/
  if ( (a2 & 1) != 0 ) /*0x5d7fb8*/
    RA2_OPDEL(Block); /*0x5d7fbb*/
  return Block->q000; /*0x5d7fc5*/
}
} // namespace gamemd
