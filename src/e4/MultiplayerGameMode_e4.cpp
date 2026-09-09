// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5D7F20
MultiplayerGameMode * MultiplayerGameMode::QueryInterface(char * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
MultiplayerGameMode *__thiscall MultiplayerGameMode::QueryInterface(char *Block, char a2)
{
  int v3; // edi
  void (__thiscall ***v4)(_DWORD, int); // ecx
  void (__thiscall ***v5)(_DWORD, int); // ecx
  void *v6; // eax

  v3 = 0; /*0x5d7f24*/
  for ( *(_DWORD *)Block = &MultiplayerGameMode::`vftable'; v3 < *((_DWORD *)Block + 6); ++v3 ) /*0x5d7f31*/
  {
    v4 = *(void (__thiscall ****)(_DWORD, int))(*((_DWORD *)Block + 3) + 4 * v3); /*0x5d7f36*/
    if ( v4 ) /*0x5d7f3b*/
      (**v4)(v4, 1); /*0x5d7f41*/
  }
  (*(void (__thiscall **)(char *))(*((_DWORD *)Block + 2) + 12))(Block + 8); /*0x5d7f53*/
  v5 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)Block + 14); /*0x5d7f56*/
  if ( v5 ) /*0x5d7f5b*/
    (**v5)(v5, 1); /*0x5d7f61*/
  DeleteAndZero((void **)Block + 12); /*0x5d7f66*/
  DeleteAndZero((void **)Block + 11); /*0x5d7f6e*/
  DeleteAndZero::Alt((void **)Block + 9); /*0x5d7f76*/
  DeleteAndZero::Alt((void **)Block + 8); /*0x5d7f7e*/
  v6 = (void *)*((_DWORD *)Block + 3); /*0x5d7f83*/
  *((_DWORD *)Block + 2) = &VectorClass<MultiplayerTeam *>::`vftable'; /*0x5d7f86*/
  if ( v6 && *(Block + 21) ) /*0x5d7f90*/
  {
    __3_YAXPAX_Z(v6); /*0x5d7f98*/
    *((_DWORD *)Block + 3) = 0; /*0x5d7fa0*/
  }
  *(Block + 21) = 0; /*0x5d7fab*/
  *((_DWORD *)Block + 4) = 0; /*0x5d7fb1*/
  if ( (a2 & 1) != 0 ) /*0x5d7fb8*/
    __3_YAXPAX_Z(Block); /*0x5d7fbb*/
  return (MultiplayerGameMode *)Block; /*0x5d7fc5*/
}
}

// 0x5D89F0
unsigned int * MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall VectorClass_Constructor_MultiplayerGameMode(_DWORD *this, int a2, int a3)
{
  *(this + 1) = 0; /*0x5d89fb*/
  *(this + 2) = a2; /*0x5d89fe*/
  *((_BYTE *)this + 12) = 1; /*0x5d8a01*/
  *((_BYTE *)this + 13) = 0; /*0x5d8a05*/
  *this = &VectorClass<MultiplayerGameMode *>::`vftable'; /*0x5d8a08*/
  if ( a2 ) /*0x5d8a0e*/
  {
    if ( a3 ) /*0x5d8a16*/
    {
      *(this + 1) = a3; /*0x5d8a18*/
      return this; /*0x5d8a1e*/
    }
    *(this + 1) = __2_YAPAXI_Z(4 * a2); /*0x5d8a2d*/
    *((_BYTE *)this + 13) = 1; /*0x5d8a30*/
  }
  return this; /*0x5d8a1d*/
}
}
