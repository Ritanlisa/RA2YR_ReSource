// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5D89F0
unsigned int * MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass(int a2, int a3)
{
{
  this->q004 = 0; /*0x5d89fb*/
  this->q008 = a2; /*0x5d89fe*/
  this->q030 = 1; /*0x5d8a01*/
  this->q034 = 0; /*0x5d8a05*/
  *this = &vt_VectorClass_MultiplayerGameMode; /*0x5d8a08*/
  if ( a2 ) /*0x5d8a0e*/
  {
    if ( a3 ) /*0x5d8a16*/
    {
      this->q004 = a3; /*0x5d8a18*/
      return this; /*0x5d8a1e*/
    }
    this->q004 = __2_YAPAXI_Z(4 * a2); /*0x5d8a2d*/
    this->q034 = 1; /*0x5d8a30*/
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
    for ( *(int *)this = &vt_MultiplayerGameMode; v3 < this->q018; ++v3 )
  {
    v4 = *(void (__thiscall ****)(int, int))(this->q00C + 4 * v3);
    if ( v4 )
    (**v4)(v4, 1);
  }
    (*(void (__thiscall **)(char *))(this->q008 + 12))(this + 8);
    v5 = (void (__thiscall ***)(int, int))this->q038;
    if ( v5 )
    (**v5)(v5, 1);
    DeleteAndZero((void **)(this) + 12);
    DeleteAndZero((void **)(this) + 11);
    DeleteAndZero::Alt((void **)(this) + 9);
    DeleteAndZero::Alt((void **)(this) + 8);
    v6 = (void *)this->q00C;
    this->q008 = &vt_VectorClass_MultiplayerTeam;
    if ( v6 && *(&this->u32_81) )
  {
    __3_YAXPAX_Z(v6);
    this->q00C = 0;
  }
    *(&this->u32_81) = 0;
    this->q010 = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (MultiplayerGameMode *)this;
}
}
