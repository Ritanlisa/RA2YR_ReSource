// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

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
  *this = &vt_VectorClass_MultiplayerGameMode; /*0x5d8a08*/
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

// 0x5D7F20
MultiplayerGameMode * MultiplayerGameMode::QueryInterface(char a2)
{
{
    int v3;
    void (__thiscall ***v4)(int, int);
    void (__thiscall ***v5)(int, int);
    void *v6;
    v3 = 0;
    for ( *(int *)this = &vt_MultiplayerGameMode; v3 < *(int *)(this + 24); ++v3 )
  {
    v4 = *(void (__thiscall ****)(int, int))(*(int *)(this + 12) + 4 * v3);
    if ( v4 )
    (**v4)(v4, 1);
  }
    (*(void (__thiscall **)(char *))(*(int *)(this + 8) + 12))(this + 8);
    v5 = (void (__thiscall ***)(int, int))*((int *)(this) + 14);
    if ( v5 )
    (**v5)(v5, 1);
    DeleteAndZero((void **)(this) + 12);
    DeleteAndZero((void **)(this) + 11);
    DeleteAndZero::Alt((void **)(this) + 9);
    DeleteAndZero::Alt((void **)(this) + 8);
    v6 = (void *)*(int *)(this + 12);
    *(int *)(this + 8) = &vt_VectorClass_MultiplayerTeam;
    if ( v6 && *(this + 21) )
  {
    __3_YAXPAX_Z(v6);
    *(int *)(this + 12) = 0;
  }
    *(this + 21) = 0;
    *(int *)(this + 16) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (MultiplayerGameMode *)this;
}
}
