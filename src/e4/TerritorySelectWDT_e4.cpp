// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_7665D0_e4.hpp"
#include "e4/classes/E4Recv_76FEB0_e4.hpp"
#include "e4/classes/E4Recv_7714B0_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/TextBuffer_e4.hpp"
#include "e4/classes/VectorCursor_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/TerrainClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/TerrainTypeClass_e4.hpp"
#include "e4/classes/GameOption_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"
#include "e4/classes/Random_e4.hpp"

// 0x7665D0
namespace gamemd {
wchar_t ** sub_7665D0(wchar_t ** a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x007665D0.json)
}
}
// 0x7714B0
namespace gamemd {
void E4Recv_7714B0::sub_7714B0(int a2, char a3, int a4)
{

  int v5; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // edi
  int v10; // edx
  int vtable0; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  DeleteAndZero v17; // [esp+Ch] [ebp-10h] BYREF

  v5 = *(unsigned int *)this->isUseless; /*0x7714c4*/
  v6 = v5 - 1; /*0x7714c6*/
  if ( v5 > (&this->targetLaserTimer)[0] ) /*0x7714c9*/
  {
    do /*0x77150b*/
    {
      v7 = *(unsigned int *)this->isUseless; /*0x7714cb*/
      if ( v6 < v7 ) /*0x7714d3*/
      {
        v8 = v7 - 1; /*0x7714d5*/
        v9 = v6; /*0x7714d6*/
        for ( *(unsigned int *)this->isUseless = v8; v9 < *(unsigned int *)this->isUseless; ++v9 ) /*0x7714e0*/
          ((String*)/*0x7714f0*/
            (String *)((&this->targetLaserTimer)[2] + 4 * v9))->Reassign(/*0x7714f0*/ (const char **)((&this->targetLaserTimer)[2] + 4 * v9 + 4));
      }
      v10 = v6--; /*0x771506*/
    }
    while ( v10 > (&this->targetLaserTimer)[0] ); /*0x77150b*/
  }
  if ( !(&this->targetLaserTimer)[0] ) /*0x77150d*/
    LOBYTE(this->currentBurstIndex) = 1; /*0x771517*/
  unknown_libname_73(&v17); /*0x771522*/
  vtable0 = (int)(this->vtable1); /*0x77152b*/
  ((DeleteAndZero*)&v17)->Alt2(); /*0x77153b*/
  v12 = (&this->primaryFacing)[6 * a2 + 1]; /*0x771540*/
  if ( v12 > 0 )
  {
    v13 = v12 == 1 ? 0 : Random::Range(&Randomizer_Global, 0, v12 - 1);
    if ( Map_Remove_770CE0(vtable0, *(unsigned int *)((&this->barrelFacing)[6 * a2 + 4] + 4 * v13), (char **)&v17) ) /*0x77156f*/
    {
      if ( !(uint8_t)Audio::IsPlaying() ) /*0x77157c*/
      {
        (&this->secondaryFacing)[3] = TimerGetTicks(); /*0x771598*/
        (&this->secondaryFacing)[4] = v17.DeleteAndZero_field_0x08; /*0x7715a2*/
        (&this->secondaryFacing)[5] = a4; /*0x7715a5*/
      }
      v14 = *(unsigned int *)this->unknown_short_3C8; /*0x7715a8*/
      if ( *(unsigned int *)this->isUseless < v14 /*0x7715d9*/
        || ((&this->isSinking)[0] || !v14)
        && (v15 = *(unsigned int *)this->isALoaner, v15 > 0)
        && (*(uint8_t (**)(int *, int, unsigned int))((&this->targetLaserTimer)[1] + 8))(
             (int *)&(&this->targetLaserTimer)[1],
             v14 + v15,
             0) )
      {
        v16 = *(unsigned int *)this->isUseless; /*0x7715e0*/
        *(unsigned int *)this->isUseless = v16 + 1; /*0x7715eb*/
        ((String *)((String *)((&this->targetLaserTimer)[2] + 4 * v16)))->Reassign((const char **)&v17); /*0x7715f4*/
      }
      if ( a3 ) /*0x7715ff*/
        ++(&this->targetLaserTimer)[0]; /*0x771601*/
    }
  }
  j_DeleteAndZero((ObjectClass *)&v17); /*0x77160b*/

}
}
