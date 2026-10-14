// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_580BC0_e4.hpp"
#include "e4/classes/E4Recv_581090_e4.hpp"
#include "e4/classes/E4Recv_583AD0_e4.hpp"
#include "e4/classes/E4Recv_583C60_e4.hpp"
#include "e4/classes/E4Recv_5840C0_e4.hpp"
#include "e4/classes/E4Recv_5851B0_e4.hpp"
#include "e4/classes/E4Recv_585930_e4.hpp"
#include "e4/classes/E4Recv_5868A0_e4.hpp"
#include "e4/classes/E4Recv_587C50_e4.hpp"
#include "e4/classes/E4Recv_58BE20_e4.hpp"
#include "e4/classes/E4Recv_58BEA0_e4.hpp"
#include "e4/classes/E4Recv_58C320_e4.hpp"
#include "e4/classes/E4Recv_58C3B0_e4.hpp"
#include "e4/classes/E4Recv_58C4A0_e4.hpp"
#include "e4/classes/E4Recv_58D120_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/RandomMap_e4.hpp"
#include "e4/classes/unknown_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/AbstractType_e4.hpp"
#include "e4/classes/ProgressTimer_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_MapRegionClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/Cliff_e4.hpp"
#include "e4/classes/TileNode_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Random_e4.hpp"
#include "e4/classes/MapResourceClass_e4.hpp"  // G57w10 D supply
#include "e4/classes/TileSystem_e4.hpp"  // G57w10 D supply (BuildNodes 0x58D620)
#include "e4/classes/IsoCoord_e4.hpp"  // G57w10 D supply
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
    int SeedInitRNG(int p0);  // x4:signals@0x65c6d0
} // namespace gamemd

// 0x5835D0
namespace gamemd {  // G42.18 ns repair
VectorClass_flat * * FindCliffSeedCell(int * a0, IUnknown * aP1, IUnknown * aP2)
{
  unsigned int v3; // eax
  int *v4; // eax
  int *v5; // ecx
  int v7; // eax
  unsigned int v8; // eax
  int *NeighbourContent; // edi
  unsigned int *v10; // ebp
  unsigned int *v11; // ebx
  int *v12; // esi
  int v13; // ebx
  unsigned short *v14; // esi
  double v15; // st7
  double v16; // st7
  int16_t v17; // di
  int16_t v18; // ax
  double v19; // st7
  double v20; // st7
  int v21; // [esp+18h] [ebp-Ch] BYREF
  int v22; // [esp+1Ch] [ebp-8h]
  unsigned int v23; // [esp+20h] [ebp-4h]

  v3 = *aP1 + (aP1[1] << 9); /*0x5835e1*/
  if ( v3 < 0x40000 && (v4 = *(int **)(dword_87F924 + 4 * v3)) != 0 ) /*0x5835f7*/
  {
    v5 = v4; /*0x5835f9*/
  }
  else
  {
    v5 = (int *)(unk_ABDC50);
    dword_ABDC74 = *(unsigned int *)aP1; /*0x583604*/
  }
  if ( (v5[80] & 0x100) != 0 ) /*0x583618*/
  {
    v7 = (int)((IUnknown *)(-((v5[80] & 0x800) != 0)));
    (*((unsigned char *)&(v7))) = v7 & 0xFE; /*0x583634*/
    v8 = v7 + 4; /*0x583637*/
    NeighbourContent = v5; /*0x58363b*/
    v22 = v8; /*0x58363d*/
    v10 = (unsigned int *)(v5 + 80); /*0x583644*/
    v11 = (unsigned int *)(v5 + 80); /*0x583649*/
    v23 = ((unsigned char)v8 - 4) & 7; /*0x58364b*/
    v12 = v5; /*0x58364f*/
    aP1 = (IUnknown *)((int16_t *)dword_ABD480); /*0x583657*/
    v21 = dword_ABD480; /*0x58365b*/
    while ( 1 ) /*0x583665*/
    {
      if ( (*v10 & 0x100) != 0 ) /*0x58366b*/
      {
        NeighbourContent = (int *)((unsigned int *)((int *)Cell::GetNeighbourContent((unsigned int)(NeighbourContent), v8)));
        v10 = (unsigned int *)(NeighbourContent + 80); /*0x583680*/
        if ( (NeighbourContent[80] & 0x100) == 0 /*0x5836a5*/
          && (Cell::IsInRange(NeighbourContent) || Cell::IsInRange2(NeighbourContent))
          && NeighbourContent->u32_EC != 3 )
        {
          aP1 = (IUnknown *)(NeighbourContent->u32_24);
        }
      }
      if ( (*v11 & 0x100) == 0 ) /*0x5836b3*/
        goto LABEL_22; /*0x5836b3*/
      v12 = (int *)Cell::GetNeighbourContent((unsigned int)(v12), v23); /*0x5836c1*/
      v11 = &v12->q050; /*0x5836cc*/
      if ( (v12->u32_140 & 0x100) == 0 ) /*0x5836d2*/
      {
        if ( (Cell::IsInRange(v12) || Cell::IsInRange2(v12)) && v12->u32_EC != 3 ) /*0x5836f1*/
          v21 = v12->u32_24; /*0x5836f6*/
        if ( (*v11 & 0x100) == 0 ) /*0x5836ff*/
        {
  LABEL_22:
          if ( (*v10 & 0x100) == 0 ) /*0x58370b*/
            break; /*0x58370b*/
        }
      }
      v8 = v22; /*0x583661*/
    }
    v13 = dword_ABD480; /*0x583711*/
    v22 = dword_ABD480; /*0x583723*/
    if ( LayerClass::IsWithinUsableArea(&dword_87F7E8, (int16_t *)&aP1, 1) ) /*0x583727*/
    {
      v13 = (int)aP1; /*0x583730*/
      v22 = (int)aP1; /*0x583734*/
    }
    if ( LayerClass::IsWithinUsableArea(&dword_87F7E8, (int16_t *)&v21, 1) ) /*0x583744*/
    {
      if ( (((unsigned int)(unsigned short)(v13)) | ((unsigned int)(unsigned short)((*(((unsigned short *)&(v22)) + 1))) << 16)) == dword_ABD480 ) /*0x583758*/
        goto LABEL_28; /*0x583758*/
      v14 = (unsigned short *)aP2; /*0x58376c*/
      v15 = (double)(int16_t)((*(((unsigned short *)&(v21)) + 1)) - aP2->u32_2); /*0x58378e*/
      aP2 = (IUnknown *)((int16_t)(v21 - *(unsigned short *)aP2)); /*0x583792*/
      v16 = Math::Sqrt((double)aP2 * (double)aP2 + v15 * v15); /*0x5837ab*/
      v17 = Math::RoundToInt(v16); /*0x5837ba*/
      v18 = (unsigned short)aP1 - *v14; /*0x5837c5*/
      aP2 = (IUnknown *)((int16_t)((*(((unsigned short *)&(aP1)) + 1)) - v14[1])); /*0x5837ce*/
      v19 = (double)aP2; /*0x5837d2*/
      aP2 = (IUnknown *)(v18); /*0x5837d6*/
      v20 = Math::Sqrt((double)v18 * (double)v18 + v19 * v19); /*0x5837ef*/
      if ( v17 < (int16_t)Math::RoundToInt(v20) ) /*0x5837ff*/
  LABEL_28:
        v13 = v21; /*0x583801*/
    }
    *a0 = (int)((gamemd::VectorClass_flat **)(v13));
    return (gamemd::VectorClass_flat **)(a0); /*0x583805*/
  }
  else
  {
    *a0 = (int)((gamemd::VectorClass_flat **)(v5[9]));
    return (gamemd::VectorClass_flat **)(a0); /*0x58361a*/
  }
}
}  // G42.18 ns repair
// 0x583AD0
namespace gamemd {
AbstractClass * * E4Recv_583AD0::sub_583AD0(int * a2)
{
  int16_t *i; // eax
  int TileIndex; // eax
  int v5; // esi
  int v6; // ecx
  int v7; // eax
  int v8; // edi
  int Capacity; // eax
  int v10; // eax
  void *Items; // ebp
  int v12; // esi
  int v13; // edx
  int v14; // eax
  int *v15; // edi
  int v16; // esi
  VectorClass v18; // [esp+10h] [ebp-18h] BYREF
  int v19; // [esp+20h] [ebp-8h]
  int v20; // [esp+24h] [ebp-4h]

  VectorClass::Construct(&v18, 0, 0); /*0x583ae1*/
  /* X11: vtable install elided (implicit via DynamicVectorClass virtuals 0x583af1) */
  v20 = 10; /*0x583af9*/
  v19 = 0; /*0x583b05*/
  *(unsigned int *)&dword_87F904 = *(unsigned int *)&DataGlobal_87F8E4 /*0x583b0d*/
                                        + *(unsigned int *)&DataGlobal_87F8E8
                                        + 1;
  *(unsigned int *)&dword_87F908 = *(unsigned int *)&DataGlobal_87F8E8 /*0x583b22*/
                                        + *(unsigned int *)&g_Cell_PositionLUT
                                        - *(unsigned int *)&DataGlobal_87F8E4;
  for ( i = (int16_t *)MapClass::SpiralSearch((MapClass *)&DataGlobal_87F7E8); /*0x583b2f*/
        i;
        i = (int16_t *)MapClass::SpiralSearch((MapClass *)&DataGlobal_87F7E8) )
  {
    if ( i->u32_4C == 4 ) /*0x583b39*/
    {
      TileIndex = ((MapClass *)((MapClass *)this))->GetTileIndex(i + 18, 10, 0); /*0x583b49*/
      v5 = TileIndex; /*0x583b4e*/
      if ( TileIndex >= 0 ) /*0x583b52*/
      {
        v6 = v19; /*0x583b54*/
        if ( TileIndex >= v19 ) /*0x583b5a*/
        {
          v7 = TileIndex - v19 + 1; /*0x583b5e*/
          if ( v7 > 0 ) /*0x583b61*/
          {
            v8 = v7; /*0x583b63*/
            Capacity = v18.Capacity; /*0x583b65*/
            while ( 1 ) /*0x583b6f*/
            {
              if ( v6 < Capacity ) /*0x583b71*/
                goto LABEL_13; /*0x583b71*/
              if ( (v18.IsAllocated || !Capacity) && v20 > 0 ) /*0x583b85*/
                break; /*0x583b85*/
  LABEL_15:
              if ( !--v8 ) /*0x583bb6*/
                goto LABEL_16; /*0x583bb6*/
              v6 = v19; /*0x583b6b*/
            }
            if ( (*((uint8_t (**)(VectorClass *, int, unsigned int))v18.vfptr + 2))( /*0x583b94*/
                   &v18,
                   v20 + Capacity,
                   0) )
            {
  LABEL_13:
              v10 = v19++; /*0x583b9b*/
              *((unsigned int *)v18.Items + v10) = 0; /*0x583baa*/
            }
            Capacity = v18.Capacity; /*0x583bb1*/
            goto LABEL_15; /*0x583bb1*/
          }
        }
  LABEL_16:
        ++*((unsigned int *)v18.Items + v5); /*0x583bb8*/
      }
    }
  }
  Items = v18.Items; /*0x583bd1*/
  v12 = -1; /*0x583bd9*/
  v13 = 0; /*0x583bdc*/
  v14 = 0; /*0x583bde*/
  if ( v19 > 0 ) /*0x583be2*/
  {
    v15 = (int *)v18.Items; /*0x583be4*/
    do /*0x583bf6*/
    {
      if ( *v15 > v13 ) /*0x583bea*/
      {
        v12 = v14; /*0x583bec*/
        v13 = *v15; /*0x583bee*/
      }
      ++v14; /*0x583bf0*/
      ++v15; /*0x583bf1*/
    }
    while ( v14 < v19 ); /*0x583bf6*/
  }
  *a2 = v12; /*0x583bfe*/
  if ( v12 < 0 ) /*0x583c00*/
  {
    /* X11: vtable install elided (implicit via VectorClass virtuals 0x583c31) */
    if ( Items && v18.IsAllocated ) /*0x583c41*/
      operator delete((void *)(Items)); /*0x583c44*/
    return 0; /*0x583c4f*/
  }
  else
  {
    v16 = *((unsigned int *)Items + v12); /*0x583c02*/
    /* X11: vtable install elided (implicit via VectorClass virtuals 0x583c06) */
    if ( Items ) /*0x583c10*/
    {
      if ( v18.IsAllocated ) /*0x583c18*/
        operator delete((void *)(Items)); /*0x583c1b*/
    }
    return (gamemd::AbstractClass **)(v16); /*0x583c23*/
  }
}
}
// 0x585F40
namespace gamemd {
int InterpolateTerrainLighting(int a1, MouseClass * aP1, int a3, int a4)
{
  int v4; // ecx
  int v5; // edx
  int v6; // ebp
  unsigned int v7; // edx
  int16_t v8; // si
  int16_t v9; // di
  int v10; // ecx
  int v11; // edx
  int v12; // ebx
  unsigned int v13; // edx
  int16_t v14; // cx
  int16_t v15; // bx
  bool v16; // cc
  int v18; // eax
  int v19; // eax
  int16_t v20; // bp
  int v22; // eax
  int v23; // esi
  int v24; // edi
  int v25; // [esp+14h] [ebp+4h]
  int16_t v26; // [esp+18h] [ebp+8h]
  int v27; // [esp+18h] [ebp+8h]
  int v28; // [esp+1Ch] [ebp+Ch]
  int v29; // [esp+20h] [ebp+10h]
  int v30; // [esp+20h] [ebp+10h]

  if ( !aP1 ) /*0x585f4b*/
    return 0; /*0x585f4b*/
  if ( aP1 == (gamemd::MouseClass *)(1) ) /*0x585f52*/
    return *(unsigned int *)(a1 + 4 * *(unsigned int *)(dword_87F890 + 36 * a4 + 32) + 22500); /*0x5862a9*/
  if ( aP1 != (gamemd::MouseClass *)(2) ) /*0x585f59*/
    return 0; /*0x5862af*/
  v4 = *(unsigned int *)(dword_87F8A8 + 36 * a3 + 32); /*0x585f71*/
  v5 = (v4 - 1) % 130; /*0x585f79*/
  v6 = 4 * v5; /*0x585f82*/
  v7 = (int)((uint64_t)(2114445439LL * (v4 - v5)) >> 32) >> 6; /*0x585f8b*/
  v28 = 4 * ((v7 >> 31) + v7) - 4; /*0x585fa2*/
  v8 = v6 - (v6 / 4 % 2 != 0); /*0x585fbf*/
  v9 = 4 * ((v7 >> 31) + v7) - 4 - (v28 / 4 % 2 != 0); /*0x585fde*/
  v10 = *(unsigned int *)(dword_87F8A8 + 36 * a4 + 32); /*0x585fe7*/
  v11 = (v10 - 1) % 130; /*0x585ff4*/
  v12 = 4 * v11; /*0x585ffd*/
  v13 = (int)((uint64_t)(2114445439LL * (v10 - v11)) >> 32) >> 6; /*0x586006*/
  v26 = v12; /*0x58600b*/
  v29 = 4 * ((v13 >> 31) + v13) - 4; /*0x586021*/
  v14 = v12 - (v12 / 4 % 2 != 0); /*0x586042*/
  v15 = v29 - (v29 / 4 % 2 != 0); /*0x586061*/
  v16 = v14 <= v8; /*0x586063*/
  if ( v14 == v8 ) /*0x586066*/
  {
    if ( v9 == v15 ) /*0x58606b*/
      return (*(unsigned int *)(a1 + 4 * ((int16_t)v6 / 4 + 130 * ((int16_t)v28 / 4)) + 23024) /*0x5860d1*/
            + *(unsigned int *)(a1 + 4 * (v26 / 4 + 130 * ((int16_t)v29 / 4)) + 23024)) >> 1;
    v16 = v14 <= v8; /*0x5860d4*/
  }
  if ( v16 ) /*0x5860d7*/
  {
    if ( v15 <= v9 ) /*0x5860f5*/
      v18 = (v15 < v9) + 6; /*0x586106*/
    else
      v18 = 5; /*0x5860f7*/
  }
  else if ( v15 <= v9 ) /*0x5860dc*/
  {
    v18 = (v15 >= v9) + 1; /*0x5860ed*/
  }
  else
  {
    v18 = 3; /*0x5860de*/
  }
  v30 = v18; /*0x586117*/
  v27 = *(unsigned int *)(a1 /*0x586174*/
                  + 4
                  * ((int16_t)((*((unsigned short *)&(dword_ABD460[dword_82A984[2 * v18]]))) + v8) / 4
                   + 130 * ((int16_t)(v9 + (*(((unsigned short *)&(dword_ABD460[dword_82A984[2 * v18]])) + 1))) / 4))
                  + 23024);
  v19 = dword_82A988[2 * v18]; /*0x586178*/
  v20 = v8 + (*((unsigned short *)&(((unsigned int *)(dword_ABD460))[v19]))); /*0x58618e*/
  (*((unsigned short *)&(v19))) = v9 + (*(((unsigned short *)&(((unsigned int *)(dword_ABD460))[v19])) + 1)); /*0x586195*/
  v22 = *(unsigned int *)(a1 + 4 * (v20 / 4 + 130 * ((int16_t)v19 / 4)) + 23024); /*0x5861be*/
  v25 = v27; /*0x5861cb*/
  if ( v27 >= v22 ) /*0x5861cf*/
    v25 = v22; /*0x5861d1*/
  v23 = *(unsigned int *)(a1 /*0x58622a*/
                  + 4
                  * ((int16_t)(v14 + (*((unsigned short *)&(dword_ABD460[dword_82A9C4[2 * v30]])))) / 4
                   + 130 * ((int16_t)(v15 + (*(((unsigned short *)&(dword_ABD460[dword_82A9C4[2 * v30]])) + 1))) / 4))
                  + 23024);
  v24 = *(unsigned int *)(a1 /*0x58626d*/
                  + 4
                  * ((int16_t)((*((unsigned short *)&(dword_ABD460[dword_82A9C8[2 * v30]]))) + v14) / 4
                   + 130 * ((int16_t)(v15 + (*(((unsigned short *)&(dword_ABD460[dword_82A9C8[2 * v30]])) + 1))) / 4))
                  + 23024);
  if ( v23 >= v24 ) /*0x586276*/
    v23 = v24; /*0x586278*/
  return (v23 + v25) >> 1; /*0x586076*/
}
}
// 0x586BF0
namespace gamemd {
int MarkCliffEdgePassability(int a1)
{
  int result; // eax
  int v2; // ebp
  int v3; // ebp
  uint16_t v4; // cx
  unsigned short *v5; // ebx
  int i; // edx
  int v7; // esi
  unsigned int v8; // eax
  unsigned int *v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  unsigned int *v12; // eax
  unsigned short *v13; // ebx
  int j; // edx
  bool v15; // zf
  unsigned int v16; // eax
  unsigned int *v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  unsigned int *v20; // eax
  int v21; // [esp+0h] [ebp-34h]
  int v22; // [esp+4h] [ebp-30h]
  int v23; // [esp+8h] [ebp-2Ch]
  int v24; // [esp+10h] [ebp-24h]
  int v25; // [esp+14h] [ebp-20h]
  int v26; // [esp+18h] [ebp-1Ch]
  int v27; // [esp+1Ch] [ebp-18h]
  int v28; // [esp+20h] [ebp-14h]
  int v29; // [esp+24h] [ebp-10h] BYREF
  int v30; // [esp+28h] [ebp-Ch] BYREF
  int v31; // [esp+2Ch] [ebp-8h]

  v28 = a1; /*0x586bf6*/
  result = *(unsigned int *)(a1 + 96) - 1; /*0x586bfa*/
  if ( result >= 0 )
  {
    v2 = 16 * result; /*0x586c06*/
    v26 = 16 * result; /*0x586c0b*/
    v27 = *(unsigned int *)(a1 + 96); /*0x586c0f*/
    while ( 1 )
    {
      v3 = *(unsigned int *)(a1 + 84) + v2; /*0x586c19*/
      v21 = v3; /*0x586c1c*/
      if ( !*(unsigned int *)(v3 + 12) && !*(unsigned char *)(v3 + 8) )
      {
        v4 = *(unsigned short *)(v3 + 4); /*0x586c3a*/
        if ( *(unsigned short *)v3 == v4 )
        {
          v5 = (unsigned short *)(4 * (*(unsigned short *)(v3 + 2) >= *(unsigned short *)(v3 + 6) ? 0 : 4) + 9041544);
          for ( i = *(unsigned int *)(CellStruct)::Add((gamemd::CellStruct *)((unsigned short *)v3), &v29, v5); i != *(unsigned int *)(v3 + 4); i = v23 ) /*0x586c71*/
          {
            v7 = (*((signed short *)(((unsigned char *)&(i)) + 2))) << 9; /*0x586c92*/
            v8 = v7 + (int16_t)i; /*0x586c95*/
            if ( v8 >= 0x40000 || (v9 = *(unsigned int **)(dword_87F924 + 4 * v8)) == 0 ) /*0x586cab*/
            {
              dword_ABDC74 = (unsigned int)((unsigned int *)(i));
              v9 = (unsigned int *)(unk_ABDC50); /*0x586cb3*/
            }
            if ( (v9[80] & 0x100) == 0 ) /*0x586cc1*/
            {
              v10 = -2; /*0x586cc3*/
              (*(((unsigned short *)&(v22)) + 1)) = (*(((unsigned short *)&(i)) + 1)); /*0x586cc8*/
              do /*0x586d1b*/
              {
                v11 = v7 + (int16_t)(v10 + i); /*0x586cd8*/
                if ( v11 >= 0x40000 || (v12 = *(unsigned int **)(dword_87F924 + 4 * v11)) == 0 ) /*0x586cef*/
                {
                  (*((unsigned short *)&(v22))) = v10 + i; /*0x586cd0*/
                  dword_ABDC74 = v22; /*0x586cf5*/
                  v12 = (unsigned int *)(unk_ABDC50); /*0x586cfa*/
                }
                ++v10; /*0x586d11*/
                v12[80] = v12[80] & 0xFFFFF3FF | 0x400; /*0x586d15*/
              }
              while ( v10 <= 1 ); /*0x586d1b*/
              v3 = v21; /*0x586d1d*/
            }
            (*((unsigned short *)&(v23))) = i + *v5; /*0x586d2e*/
            (*(((unsigned short *)&(v23)) + 1)) = (*(((unsigned short *)&(i)) + 1)) + v5[1]; /*0x586d33*/
          }
        }
        else
        {
          v13 = (unsigned short *)(4 * ((*(unsigned short *)v3 >= v4 ? 6 : 2) & 7) + 9041544);
          for ( j = *(unsigned int *)(CellStruct)::Add((gamemd::CellStruct *)((unsigned short *)v3), &v30, v13); ; j = v25 ) /*0x586d69*/
          {
            v15 = (unsigned short)j == *(unsigned short *)(v3 + 4); /*0x586d6b*/
            v31 = j; /*0x586d6f*/
            if ( v15 && (*(((unsigned short *)&(v31)) + 1)) == *(unsigned short *)(v3 + 6) ) /*0x586d7d*/
              break; /*0x586d7d*/
            v16 = (int16_t)j + ((*((signed short *)(((unsigned char *)&(v31)) + 2))) << 9); /*0x586d8c*/
            if ( v16 >= 0x40000 || (v17 = *(unsigned int **)(dword_87F924 + 4 * v16)) == 0 ) /*0x586da2*/
            {
              dword_ABDC74 = (unsigned int)((unsigned int *)(j));
              v17 = (unsigned int *)(unk_ABDC50); /*0x586daa*/
            }
            if ( (v17[80] & 0x100) == 0 ) /*0x586db8*/
            {
              v18 = -2; /*0x586dba*/
              (*((unsigned short *)&(v24))) = j; /*0x586dbf*/
              do /*0x586e08*/
              {
                v19 = (int16_t)j + ((int16_t)((*(((unsigned short *)&(j)) + 1)) + v18) << 9); /*0x586dd2*/
                if ( v19 >= 0x40000 || (v20 = *(unsigned int **)(dword_87F924 + 4 * v19), v3 = v21, !v20) ) /*0x586ded*/
                {
                  (*(((unsigned short *)&(v24)) + 1)) = (*(((unsigned short *)&(j)) + 1)) + v18; /*0x586dc7*/
                  dword_ABDC74 = v24; /*0x586df3*/
                  v20 = (unsigned int *)(unk_ABDC50); /*0x586df8*/
                }
                *((unsigned char *)v20 + 321) |= 0xCu; /*0x586dfd*/
                ++v18; /*0x586e04*/
              }
              while ( v18 <= 1 ); /*0x586e08*/
            }
            (*((unsigned short *)&(v25))) = j + *v13; /*0x586e17*/
            (*(((unsigned short *)&(v25)) + 1)) = (*(((unsigned short *)&(j)) + 1)) + v13[1]; /*0x586e1c*/
          }
        }
      }
      v2 = v26 - 16; /*0x586e32*/
      result = v27 - 1; /*0x586e35*/
      v15 = v27 == 1; /*0x586e35*/
      v26 -= 16; /*0x586e36*/
      --v27; /*0x586e3a*/
      if ( v15 ) /*0x586e3e*/
        break; /*0x586e3e*/
      a1 = v28; /*0x586c15*/
    }
  }
  return result; /*0x586e48*/
}
}
// 0x588570
namespace gamemd {
char globalHelper_088570(MouseClass * aP0, VectorClass_flat * aP1, MouseClass * aP2)
{
  char v3; // cl
  MouseClass * v4;
  int v5; // eax
  unsigned short *v6; // edi
  unsigned int v7; // esi
  unsigned int *v8; // ecx
  int v9; // edx
  unsigned int *v10; // esi
  unsigned int *v11; // ecx
  int v12; // ebx
  int16_t v13; // si
  int *v14; // eax
  int v15; // edx
  int v17; // [esp+10h] [ebp-28h]
  int v18; // [esp+14h] [ebp-24h]
  int16_t v19; // [esp+16h] [ebp-22h]
  int v20; // [esp+18h] [ebp-20h]
  int i; // [esp+24h] [ebp-14h]
  int v22; // [esp+28h] [ebp-10h]
  unsigned int v23[3]; // [esp+2Ch] [ebp-Ch] BYREF

  v3 = 0; /*0x588575*/
  for ( i = 0; i < 8; i += 2 ) /*0x588579*/
  {
    v4 = (gamemd::MouseClass *)((int)(aP2));
    v18 = 0; /*0x588585*/
    v5 = aP2->q5B8 >> 8; /*0x588595*/
    v17 = *(unsigned int *)aP0; /*0x58859a*/
    v22 = v5; /*0x58859e*/
    if ( v5 > 0 ) /*0x5885a2*/
    {
      v6 = (unsigned short *)(4 * (v3 & 7) + 9041544); /*0x5885ab*/
      while ( 1 ) /*0x5885c3*/
      {
        (*(((unsigned short *)&(v20)) + 1)) = (*(((unsigned short *)&(v17)) + 1)) + v6[1]; /*0x5885c3*/
        (*((unsigned short *)&(v20))) = v17 + *v6; /*0x5885c8*/
        v17 = v20; /*0x5885da*/
        v7 = ((*((signed short *)(((unsigned char *)&(v20)) + 2))) << 9) + (int16_t)v20; /*0x5885de*/
        if ( v7 >= 0x40000 || (v8 = *(unsigned int **)(dword_87F924 + 4 * v7)) == 0 ) /*0x5885f7*/
        {
          dword_ABDC74 = (unsigned int)((unsigned int *)(v20));
          v8 = (unsigned int *)(unk_ABDC50); /*0x5885ff*/
        }
        v5 = (int)((Cell *)(v8))->IsBridge(); /*0x588604*/
        if ( v5 ) /*0x58860b*/
        {
          if ( *(unsigned char *)(v5->u32_520 + 5824) ) /*0x588613*/
          {
            v9 = v5->House_21C; /*0x58861d*/
            (*((unsigned char *)&(v5))) = (unsigned char)(aP1); /*0x588623*/
            if ( v9 == (int)(aP1) ) /*0x588629*/
              break; /*0x588629*/
          }
        }
        if ( v7 < 0x40000 && (v10 = *(unsigned int **)(dword_87F924 + 4 * v7)) != 0 ) /*0x588641*/
        {
          v11 = v10; /*0x588643*/
        }
        else
        {
          dword_ABDC74 = (unsigned int)((unsigned int *)(v20));
          v11 = (unsigned int *)(unk_ABDC50); /*0x58864d*/
        }
        (*((unsigned char *)&(v5))) = CellClass::IsPassable((int)v11,(int)(aP2->u32_67C), aP2, aP1); /*0x58865f*/
        if ( (unsigned char)v5 ) /*0x588666*/
        {
          (*((unsigned char *)&(v5))) = ++v18; /*0x588674*/
          if ( v18 < v22 ) /*0x58867b*/
            continue; /*0x58867b*/
        }
        goto LABEL_21; /*0x58867b*/
      }
      v12 = v18; /*0x588686*/
      if ( v18 > 0 ) /*0x58868c*/
      {
        v13 = *v6 + *(unsigned short *)aP0; /*0x5886ae*/
        v19 = aP0->q002_ + v6[1]; /*0x5886b4*/
        while ( 1 ) /*0x5886ca*/
        {
          v14 = (int *)(*(int ((int)(**))(int, int))(*(unsigned int *)v4 + 140))(v4, aP1); /*0x5886ca*/
          v23[1] = (v19 << 8) + 128; /*0x5886ef*/
          v23[0] = (v13 << 8) + 128; /*0x5886f7*/
          v15 = *v14; /*0x5886fb*/
          v23[2] = 0; /*0x588700*/
          (*(void (**)(int *, unsigned int *, unsigned int))(v15 + 216))(v14, v23, 0); /*0x588708*/
          (*((unsigned short *)&(v5))) = v19 + v6[1]; /*0x588718*/
          v13 += *v6; /*0x588725*/
          --v12; /*0x588729*/
          v19 = v5; /*0x58872a*/
          if ( !v12 ) /*0x58872e*/
            break; /*0x58872e*/
          v4 = (gamemd::MouseClass *)((int)(aP2)); /*0x5886bc*/
        }
      }
    }
  LABEL_21:
    v3 = i + 2; /*0x588730*/
  }
  return v5; /*0x588744*/
}
}
// 0x588750
namespace gamemd {
int ScanBuildingPlacementCells(MouseClass * aP0, VectorClass_flat * aP1, MouseClass * aP2)
{
  int *v3; // edi
  int result; // eax
  int v5; // ebp
  int v6; // esi
  unsigned short *v7; // ebx
  unsigned int v8; // eax
  unsigned int *v9; // ecx
  int v10; // ecx
  unsigned int *v11; // ecx
  unsigned int *v12; // eax
  int16_t v14; // si
  int v15; // eax
  int v16; // [esp+4h] [ebp-2Ch]
  int v17; // [esp+8h] [ebp-28h]
  int v18; // [esp+Ch] [ebp-24h]
  int16_t v20; // [esp+12h] [ebp-1Eh]
  int i; // [esp+1Ch] [ebp-14h]
  unsigned int v23[3]; // [esp+24h] [ebp-Ch] BYREF

  v3 = (int *)((int)(aP2));
  result = (int)(aP2[917]); /*0x588758*/
  result = result; /*0x588760*/
  if ( !result ) /*0x588764*/
    return result; /*0x588764*/
  (*((unsigned char *)&(result))) = 0; /*0x58876b*/
  for ( i = 0; i < 8; i += 2 ) /*0x58876f*/
  {
    v5 = (int)(v3[366] >> 8);
    v6 = (int)(*aP0); /*0x588780*/
    v5 = v5; /*0x588782*/
    v18 = (int)(*aP0); /*0x588788*/
    v16 = 0; /*0x58878c*/
    if ( v5 <= 0 ) /*0x588794*/
      goto LABEL_24; /*0x588794*/
    v7 = (unsigned short *)(4 * (result & 7) + 9041544); /*0x58879d*/
    while ( 1 ) /*0x5887b3*/
    {
      (*((unsigned short *)&(v17))) = v6 + *v7; /*0x5887b3*/
      (*(((unsigned short *)&(v17)) + 1)) = (*(((unsigned short *)&(v18)) + 1)) + v7[1]; /*0x5887b8*/
      v8 = ((*((signed short *)(((unsigned char *)&(v17)) + 2))) << 9) + (int16_t)v17; /*0x5887ca*/
      (*(((unsigned short *)&(v18)) + 1)) = (*(((unsigned short *)&(v17)) + 1)); /*0x5887d0*/
      (*((unsigned short *)&(v6))) = v17; /*0x5887d0*/
      if ( v8 >= 0x40000 || (v9 = *(unsigned int **)(dword_87F924 + 4 * v8)) == 0 ) /*0x5887e8*/
      {
        dword_ABDC74 = (unsigned int)((unsigned int *)(v17));
        v9 = (unsigned int *)(unk_ABDC50); /*0x5887f0*/
      }
      v10 = v9[17]; /*0x5887f5*/
      if ( v10 == -1 ) /*0x5887fb*/
        goto LABEL_15; /*0x5887fb*/
      if ( *(unsigned int *)(result + 660) == v10 ) /*0x588807*/
      {
        if ( v8 >= 0x40000 || (v11 = *(unsigned int **)(dword_87F924 + 4 * v8)) == 0 ) /*0x58881f*/
        {
          dword_ABDC74 = (unsigned int)((unsigned int *)(v17));
          v11 = (unsigned int *)(unk_ABDC50); /*0x588827*/
        }
        if ( aP1->relatedTagsCount == v11[20] ) /*0x588836*/
          break; /*0x588836*/
      }
      v5 = v5; /*0x588838*/
  LABEL_15:
      if ( v8 >= 0x40000 || (v12 = *(unsigned int **)(dword_87F924 + 4 * v8)) == 0 ) /*0x588852*/
      {
        dword_ABDC74 = (unsigned int)((unsigned int *)(v17));
        v12 = (unsigned int *)(unk_ABDC50); /*0x58885a*/
      }
      if ( CellClass::IsPassable((int)v12, v3[415], (int)v3, aP1) ) /*0x58886e*/
      {
        if ( ++v16 < v5 ) /*0x588886*/
          continue; /*0x588886*/
      }
      goto LABEL_24; /*0x588886*/
    }
    v16 = v16; /*0x588891*/
    if ( v16 > 0 ) /*0x588897*/
    {
      v14 = *(unsigned short *)aP0 + *v7; /*0x5888bb*/
      v20 = aP0->q002_ + v7[1]; /*0x5888bf*/
      do /*0x588933*/
      {
        v15 = (*(int (**)(int *, int))(*v3 + 140))(v3, aP1); /*0x5888ce*/
        v23[2] = 0; /*0x5888ea*/
        v23[0] = (v14 << 8) + 128; /*0x5888f5*/
        v23[1] = (v20 << 8) + 128; /*0x588903*/
        (*(void (**)(int, unsigned int *, unsigned int))(*(unsigned int *)v15 + 216))(v15, v23, 0); /*0x58890c*/
        v3 = (int *)(aP2); /*0x58891c*/
        v14 += *v7; /*0x58892a*/
        --v16; /*0x58892e*/
        v20 += v7[1]; /*0x58892f*/
      }
      while ( v16 ); /*0x588933*/
    }
  LABEL_24:
    result = i + 2; /*0x588935*/
  }
  return result; /*0x58894c*/
}
}
// 0x588CE0
namespace gamemd {  // G42.18c ns repair
void unknown::ddtor(void *a1)
{
  void *v2; // eax

  v2 = *(void **)&a1->m_1[3]; /*0x588ce6*/
  a1->m_10 = 0; /*0x588ce9*/
  if ( v2 && (((unsigned char *)&(*(unsigned int *)&a1->IsAllocated))[1]) ) /*0x588cf0*/
  {
    operator delete((void *)(v2)); /*0x588cf6*/
    *(unsigned int *)&a1->m_1[3] = 0; /*0x588cfe*/
  }
  (((unsigned char *)&(a1->m_C))[1]) = 0; /*0x588d01*/
  a1->m_8 = 0; /*0x588d04*/
}
}  // G42.18c ns repair
// 0x5896A0
namespace gamemd {  // G42.18c ns repair
int  unknown::Read(unsigned short * a2, void *a2_2, void *a3)
{
  int m_10; // esi
  int result; // eax
  unsigned short *i; // ecx

  m_10 = a2_2->m_10; /*0x5896a2*/
  result = 0; /*0x5896a5*/
  if ( m_10 <= 0 ) /*0x5896aa*/
    return -1; /*0x5896e1*/
  for ( i = *(unsigned short **)&a2_2->m_1[3]; *i != *(unsigned int *)(a2_2) || i[1] != a2_2[1] || i->vtable2 != a2_2[2] || i[3] != a2_2[3]; i += 8 ) /*0x5896b0*/
  {
    if ( ++result >= m_10 ) /*0x5896df*/
      return -1; /*0x5896df*/
  }
  return result; /*0x5896e4*/
}
}  // G42.18c ns repair
// 0x58B670
namespace gamemd {
void sub_58B670()
{
  *(double *)&unk_ABECA0[40] = Math::ArcTan((double)(2 * dword_ABED00) / dbl_ABE368); /*0x58b692*/
}
}
// 0x58B6E0
namespace gamemd {
int sub_58B6E0()
{
  *(unsigned int *)&unk_ABECA0[24] = 0; /*0x58b6e2*/
  *(unsigned int *)&unk_ABECA0[28] = 0; /*0x58b6e7*/
  *(unsigned int *)&unk_ABECA0[32] = 0; /*0x58b6ec*/
  return 0; /*0x58b6f1*/
}
}
// 0x58B7E0
namespace gamemd {
int sub_58B7E0()
{
  return dword_ABDFD4; /*0x58b7e5*/
}
}
// 0x58B7F0
namespace gamemd {
int sub_58B7F0()
{
  return dword_ABDFD0; /*0x58b7f5*/
}
}
// 0x58B800
namespace gamemd {
int sub_58B800()
{
  return dword_ABEC90; /*0x58b805*/
}
}
// 0x58B810
namespace gamemd {
int * sub_58B810()
{
  return (int *)(dword_ABECD0); /*0x58b815*/
}
}
// 0x58B820
namespace gamemd {
ScenarioClass * * ComputeMapCameraBounds()
{
  void *result; // eax
  int v2; // ebp
  int i; // edi
  int16_t *Waypoint_Location; // eax
  void *v5; // esi
  int v6; // eax
  int *v7; // eax
  unsigned int *v8; // eax
  int v9; // ecx
  int v10; // esi
  int v11; // edx
  int v12; // edi
  int v13; // ebx
  int16_t *j; // esi
  int v15; // eax
  int *v16; // eax
  int v17; // edx
  int v18; // edi
  AbstractClass *v19; // ebx
  int v20; // eax
  char *v21; // esi
  int v22; // ecx
  void *v23; // edx
  void *v24; // esi
  int v25; // [esp+10h] [ebp-28h] BYREF
  int v26; // [esp+14h] [ebp-24h] BYREF
  char *k; // [esp+18h] [ebp-20h] BYREF
  char v28[4]; // [esp+1Ch] [ebp-1Ch] BYREF
  char v29[8]; // [esp+20h] [ebp-18h] BYREF
  char v30[4]; // [esp+28h] [ebp-10h] BYREF
  char v31[12]; // [esp+2Ch] [ebp-Ch] BYREF

  result = (void *)(dword_A8B230); /*0x58b820*/
  v2 = 0; /*0x58b82a*/
  g_MissionQueueFrame.localVariables[162] = 0; /*0x58b830*/
  if ( dword_A8B230 && g_TacticalClass_Instance ) /*0x58b842*/
  {
    for ( i = 0; i < 8; ++i ) /*0x58b848*/
    {
      if ( !(uint8_t)ScenarioClass::Is_Waypoint_Valid((char *)dword_A8B230, i) ) /*0x58b851*/
        break; /*0x58b858*/
      Waypoint_Location = (int16_t *)((ScenarioClass *)((char *)dword_A8B230))->Get_Waypoint_Location((unsigned int *)(&k), i); /*0x58b86a*/
      v5 = ((CellCoord *)((CellCoord *)&DataGlobal_87F7E8))->To_CellObj(Waypoint_Location); /*0x58b87e*/
      v6 = (*(int (**)(void *))(*(unsigned int *)v5 + 72))(v5); /*0x58b88f*/
      v7 = (int *)(*(int (**)(void *, char *, unsigned int))(*(unsigned int *)v5 + 72))(v5, v30, *(unsigned int *)(v6 + 4)); /*0x58b89f*/
      IsoCoord::ToScreenOffset(*v7, (int)v29, &v25, &v26); /*0x58b8ab*/
      v8 = ((ScenarioClass *)((char *)dword_A8B230))->Get_Waypoint_Location((unsigned int *)(v28), i); /*0x58b8bc*/
      v9 = g_MissionQueueFrame.localVariables[162]; /*0x58b8c1*/
      v10 = v25; /*0x58b8c9*/
      *(unsigned int *)&g_MissionQueueFrame.globalVariables[4 * g_MissionQueueFrame.localVariables[162] + 132] = *v8; /*0x58b8d2*/
      v11 = (uint64_t)(2290649225LL * v26) >> 32; /*0x58b8f4*/
      *(unsigned int *)&g_MissionQueueFrame.globalVariables[8 * v9 + 168] = v10 / 60; /*0x58b8f6*/
      *(unsigned int *)&g_MissionQueueFrame.globalVariables[8 * v9 + 172] = ((unsigned int)v11 >> 31) + (v11 >> 4); /*0x58b907*/
      g_MissionQueueFrame.localVariables[162] = v9 + 1; /*0x58b910*/
    }
    LayerClass::CellIteratorReset((LayerClass *)&DataGlobal_87F7E8); /*0x58b924*/
    v12 = 10000; /*0x58b929*/
    v25 = 10000; /*0x58b933*/
    v13 = 0; /*0x58b937*/
    for ( j = (int16_t *)LayerClass::CellIteratorNext((LayerClass *)&DataGlobal_87F7E8); /*0x58b942*/
          j;
          j = (int16_t *)LayerClass::CellIteratorNext((LayerClass *)&DataGlobal_87F7E8) )
    {
      if ( (uint8_t)LayerClass::IsWithinUsableArea((LayerClass *)&DataGlobal_87F7E8, j + 18, 1) ) /*0x58b953*/
      {
        v15 = (*(int (**)(int16_t *))(*(unsigned int *)j + 72))(j); /*0x58b973*/
        v16 = (int *)(*(int (**)(int16_t *, char *, unsigned int))(*(unsigned int *)j + 72))( /*0x58b983*/
                       j,
                       v28,
                       *(unsigned int *)(v15 + 4));
        IsoCoord::ToScreenOffset(*v16, (int)v31, &v26, (int *)&k); /*0x58b98f*/
        v17 = (int)k / 30; /*0x58b9c2*/
        if ( v26 / 60 < v12 ) /*0x58b9c6*/
          v12 = v26 / 60; /*0x58b9c8*/
        if ( v26 / 60 > v2 ) /*0x58b9cc*/
          v2 = v26 / 60; /*0x58b9ce*/
        if ( v17 < v25 ) /*0x58b9d4*/
          v25 = (int)k / 30; /*0x58b9d6*/
        if ( v17 > v13 ) /*0x58b9dc*/
          v13 = (int)k / 30; /*0x58b9de*/
      }
    }
    g_MissionQueueFrame.briefing[354] = v25; /*0x58b9fa*/
    result = (void *)(dword_A8B230); /*0x58ba01*/
    g_MissionQueueFrame.briefing[355] = v12; /*0x58ba06*/
    (&g_MissionQueueFrame.localVariables)[131] = v2 - v12; /*0x58ba0e*/
    g_MissionQueueFrame.localVariables[147] = v13 - v25; /*0x58ba14*/
    if ( dword_A8B230 ) /*0x58ba1a*/
    {
      v18 = 0; /*0x58ba26*/
      dword_A8B230[122].abstractFlags = g_MissionQueueFrame.localVariables[162]; /*0x58ba28*/
      v19 = (gamemd::AbstractClass *)(dword_A8B230); /*0x58ba2e*/
      if ( dword_A8B230[122].abstractFlags > 0 ) /*0x58ba3c*/
      {
        v20 = 4416; /*0x58ba3e*/
        v21 = &g_MissionQueueFrame.waypoints[1470]; /*0x58ba48*/
        v22 = 4544; /*0x58ba4f*/
        for ( k = &g_MissionQueueFrame.waypoints[1470]; ; v21 = k ) /*0x58ba54*/
        {
          if ( v20 < 4416 || v18 >= g_MissionQueueFrame.localVariables[162] ) /*0x58ba71*/
          {
            v23 = 0; /*0x58ba7c*/
            v24 = 0; /*0x58ba7e*/
          }
          else
          {
            v23 = *(void **)&v21[v20]; /*0x58ba73*/
            v24 = *(void **)&v21[v20 + 4]; /*0x58ba76*/
          }
          *(void **)v19->q010 + v20) = v23; /*0x58ba80*/
          ++v18; /*0x58ba89*/
          v22 += 4; /*0x58ba8a*/
          *(void **)dword_A8B230->q010 + v20) = v24; /*0x58ba8d*/
          v20 += 8; /*0x58ba9b*/
          *(unsigned int *)((char *)dword_A8B230 + v22 - 4) = *(unsigned int *)&g_MissionQueueFrame.waypoints[v22 + 1302]; /*0x58ba9e*/
          v19 = (gamemd::AbstractClass *)(dword_A8B230); /*0x58baa2*/
          if ( v18 >= (&dword_A8B230)[122].abstractFlags ) /*0x58baae*/
            break; /*0x58baae*/
        }
      }
      v19[122].vfptr1 = (void *)g_MissionQueueFrame.briefing[355]; /*0x58bab5*/
      dword_A8B230[122].vfptr2 = (void *)g_MissionQueueFrame.briefing[354]; /*0x58bac7*/
      dword_A8B230[122].vfptr3 = (void *)g_MissionQueueFrame.localVariables[131]; /*0x58bad8*/
      result = (void *)g_MissionQueueFrame.localVariables[147]; /*0x58bae4*/
      dword_A8B230[122].uniqueId = g_MissionQueueFrame.localVariables[147]; /*0x58bae9*/
    }
  }
  return result; /*0x58baef*/
}
}
// 0x58EBC0
namespace gamemd {
AbstractClass * * BuildRandomMapTiles(ObjectClass *self)
{
  int i; // esi
  unsigned int *v2; // ecx
  int v3; // eax
  int v4; // esi
  int v5; // edx
  int v6; // ecx
  int v7; // edi
  int v8; // ebp
  int v9; // eax
  int v10; // ebx
  int v11; // esi
  int v12; // eax
  int v13; // esi
  int v14; // ecx
  int v15; // eax
  int *v16; // eax
  int v17; // ecx
  int v18; // esi
  int v19; // ecx
  int v20; // esi
  bool v21; // zf
  double v22; // st7
  int v23; // eax
  int v24; // ebx
  int result; // eax
  int j; // edi
  int v27; // esi
  int v28; // eax
  void *v29; // eax
  int v30; // [esp+10h] [ebp-Ch]
  int v31; // [esp+14h] [ebp-8h]
  int v32; // [esp+18h] [ebp-4h] BYREF

  for ( i = 0; i < g_MissionQueueFrame.briefing[342]; v2[3] = 0 ) /*0x58ebd0*/
  {
    (*(void (**)(int))(*(unsigned int *)(*(unsigned int *)(g_MissionQueueFrame.briefing[339] + 4 * i) + 40) + 12))(*(unsigned int *)(g_MissionQueueFrame.briefing[339] + 4 * i) + 40); /*0x58ebe9*/
    *(unsigned int *)(*(unsigned int *)(g_MissionQueueFrame.briefing[339] + 4 * i) + 12) = 0; /*0x58ebf4*/
    v2 = (unsigned int *)(*(unsigned int *)(g_MissionQueueFrame.briefing[339] + 4 * i++) + 64); /*0x58ec07*/
    *v2 = 9999; /*0x58ec0c*/
    v2[1] = 9999; /*0x58ec0e*/
    v2[2] = 0; /*0x58ec11*/
  }
  v3 = g_MapCellWidth * g_MapCellWidth - 1; /*0x58ec28*/
  if ( v3 >= 0 ) /*0x58ec29*/
  {
    v4 = g_MissionQueueFrame.localVariables[160]; /*0x58ec2f*/
    v5 = 80 * v3; /*0x58ec38*/
    v30 = 80 * v3; /*0x58ec3c*/
    v32 = g_MapCellWidth * g_MapCellWidth; /*0x58ec40*/
    while ( 1 ) /*0x58ec49*/
    {
      v6 = *(unsigned int *)(v5 + g_MissionQueueFrame.localVariables[163]); /*0x58ec49*/
      v31 = v6; /*0x58ec4c*/
      v7 = (*((signed short *)(((unsigned char *)&(v6)) + 2))); /*0x58ec50*/
      v8 = (int16_t)v6; /*0x58ec55*/
      v9 = (*((signed short *)(((unsigned char *)&(v6)) + 2))) + (int16_t)v6; /*0x58ec58*/
      if ( v9 > v4 /*0x58ec81*/
        && (int16_t)v6 - (*((signed short *)(((unsigned char *)&(v6)) + 2))) < v4
        && (*((signed short *)(((unsigned char *)&(v6)) + 2))) - (int16_t)v6 < v4
        && v9 <= g_MissionQueueFrame.localVariables[161] )
      {
        v10 = *(unsigned int *)(v5 + g_MissionQueueFrame.localVariables[163] + 56); /*0x58ec8c*/
        if ( v10 >= 0 && v10 < g_MissionQueueFrame.briefing[342] ) /*0x58ec9e*/
          break; /*0x58ec9e*/
      }
  LABEL_30:
      v5 -= 80; /*0x58ed73*/
      v21 = v32 == 1; /*0x58ed7a*/
      v30 = v5; /*0x58ed7b*/
      --v32; /*0x58ed7f*/
      if ( v21 ) /*0x58ed83*/
        goto LABEL_31; /*0x58ed83*/
    }
    ++*(unsigned int *)(*(unsigned int *)(g_MissionQueueFrame.briefing[339] + 4 * v10) + 12); /*0x58ecb0*/
    v11 = *(unsigned int *)(g_MissionQueueFrame.briefing[339] + 4 * v10); /*0x58ecb8*/
    v12 = *(unsigned int *)(v11 + 48); /*0x58ecbb*/
    v13 = v11 + 40; /*0x58ecbe*/
    if ( *(unsigned int *)(v13 + 16) >= v12 ) /*0x58ecc4*/
    {
      if ( !*(unsigned char *)(v13 + 13) && v12 ) /*0x58eccf*/
        goto LABEL_19; /*0x58eccf*/
      v14 = *(unsigned int *)(v13 + 20); /*0x58ecd1*/
      if ( v14 <= 0 ) /*0x58ecd6*/
        goto LABEL_19; /*0x58ecd6*/
      if ( !(*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)v13 + 8))(v13, v12 + v14, 0) ) /*0x58ece6*/
      {
  LABEL_18:
        v5 = v30; /*0x58ecfb*/
  LABEL_19:
        v16 = (int *)(*(unsigned int *)(g_MissionQueueFrame.briefing[339] + 4 * v10) + 64); /*0x58ecff*/
        if ( !*(unsigned int *)(*(unsigned int *)(g_MissionQueueFrame.briefing[339] + 4 * v10) + 72) ) /*0x58ed0a*/
        {
          *v16 = v8; /*0x58ed16*/
          v16[1] = v7; /*0x58ed18*/
          v16[2] = 1; /*0x58ed1b*/
          v16[3] = 1; /*0x58ed1e*/
        }
        v17 = *v16; /*0x58ed21*/
        if ( v8 >= v16[2] + *v16 ) /*0x58ed2c*/
          v16[2] = v8 - v17 + 1; /*0x58ed33*/
        if ( v8 < v17 ) /*0x58ed38*/
        {
          v18 = v16[2]; /*0x58ed3a*/
          *v16 = v8; /*0x58ed41*/
          v16[2] = v17 - v8 + v18; /*0x58ed43*/
        }
        v19 = v16[1]; /*0x58ed46*/
        if ( v7 >= v16[3] + v19 ) /*0x58ed52*/
          v16[3] = v7 - v19 + 1; /*0x58ed59*/
        if ( v7 < v19 ) /*0x58ed5e*/
        {
          v20 = v16[3]; /*0x58ed60*/
          v16[1] = v7; /*0x58ed67*/
          v16[3] = v19 - v7 + v20; /*0x58ed6a*/
        }
        v4 = g_MissionQueueFrame.localVariables[160]; /*0x58ed6d*/
        goto LABEL_30; /*0x58ed6d*/
      }
      v6 = v31; /*0x58ece8*/
    }
    v15 = *(unsigned int *)(v13 + 16); /*0x58ecec*/
    *(unsigned int *)(v13 + 16) = v15 + 1; /*0x58ecf2*/
    *(unsigned int *)(*(unsigned int *)(v13 + 4) + 4 * v15) = v6; /*0x58ecf8*/
    goto LABEL_18; /*0x58ecf8*/
  }
  LABEL_31:
  v22 = ((double)g_MissionQueueFrame.briefing[384] * 0.005 + 0.05) /*0x58ed89*/
      * (double)g_MissionQueueFrame.briefing[453]
      * (double)g_MissionQueueFrame.briefing[452];
  (*((unsigned short *)&(v23))) = Math::RoundToInt(v22 + v22); /*0x58eda9*/
  v24 = v23; /*0x58edae*/
  LABEL_32:
  result = g_MissionQueueFrame.briefing[342]; /*0x58edb5*/
  for ( j = 0; j < g_MissionQueueFrame.briefing[342]; ++j ) /*0x58edbe*/
  {
    v27 = *(unsigned int *)(g_MissionQueueFrame.briefing[339] + 4 * j); /*0x58edca*/
    if ( !v27->u8_1A && !v27->u32_14 ) /*0x58edd4*/
    {
      if ( v27->u32_C <= v24 ) /*0x58edde*/
      {
        v27->u8_1A = 1; /*0x58eded*/
      }
      else if ( TileSystem::BuildNodes(*(TileSystem **)(g_MissionQueueFrame.briefing[339] + 4 * j)) ) /*0x58ede2*/
      {
        if ( v27 ) /*0x58ee03*/
        {
          if ( *(unsigned int *)v27 ) /*0x58ee05*/
          {
            (***(void (****)(unsigned int, int))v27)(*(unsigned int *)v27, 1); /*0x58ee11*/
            *(unsigned int *)v27 = 0; /*0x58ee13*/
          }
          v32 = v27; /*0x58ee25*/
          v28 = (*(int (**)(int *, int *))(g_MissionQueueFrame.briefing[338] + 16))( /*0x58ee29*/
                  &g_MissionQueueFrame.briefing[338],
                  &v32);
          if ( v28 != -1 && v28 < g_MissionQueueFrame.briefing[342] ) /*0x58ee39*/
          {
            --g_MissionQueueFrame.briefing[342]; /*0x58ee3e*/
            for ( ; /*0x58ee44*/
                  v28 < g_MissionQueueFrame.briefing[342];
                  *(unsigned int *)(g_MissionQueueFrame.briefing[339] + 4 * v28 - 4) = *(unsigned int *)(g_MissionQueueFrame.briefing[339]
                                                                                           + 4 * v28) )
            {
              ++v28; /*0x58ee4c*/
            }
          }
          v29 = v27->u32_2C; /*0x58ee5e*/
          v27->q028 = &vt_VectorClass; /*0x58ee61*/
          if ( v29 ) /*0x58ee66*/
          {
            if ( v27->u8_35 ) /*0x58ee68*/
            {
              operator delete((void *)(v29)); /*0x58ee70*/
              v27->u32_2C = 0; /*0x58ee78*/
            }
          }
          v27->u8_35 = 0; /*0x58ee7c*/
          v27->u32_30 = 0; /*0x58ee80*/
          operator delete((void *)((void *)v27)); /*0x58ee83*/
        }
        goto LABEL_32; /*0x58ee8b*/
      }
    }
    result = g_MissionQueueFrame.briefing[342]; /*0x58edf1*/
  }
  return result; /*0x58ee90*/
}
}
// 0x58EF10
namespace gamemd {
AbstractClass * * sub_58EF10()
{
  int i; // eax
  int v2; // ecx
  int v3; // eax
  int v4; // ecx
  int v5; // edi
  void *v6; // esi
  int v7; // esi
  int v8; // edi
  RandomMap *v9; // eax
  unsigned int *Terrain; // eax
  int v11; // esi
  int v12; // esi
  int v13; // esi
  void (***v14)(unsigned int, int); // ecx
  char v16; // [esp+Fh] [ebp-5h]
  unsigned short v17[2]; // [esp+10h] [ebp-4h] BYREF

  v16 = 1; /*0x58ef1e*/
  Mouse::SetBounds((const void *)((int)&DataGlobal_87F7E8), 0); /*0x58ef23*/
  LayerClass::CellIteratorReset((LayerClass *)&DataGlobal_87F7E8); /*0x58ef2d*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)&DataGlobal_87F7E8); /*0x58ef41*/
        i;
        i = LayerClass::CellIteratorNext((LayerClass *)&DataGlobal_87F7E8) )
  {
    if ( !v16 ) /*0x58ef47*/
      break; /*0x58ef47*/
    v16 = Cliff::ProcessTransitions(i, -1); /*0x58ef5a*/
  }
  if ( g_MissionQueueFrame.localVariables[163] ) /*0x58ef6d*/
  {
    v2 = g_MapCellWidth * g_MapCellWidth; /*0x58ef75*/
    if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x58ef7a*/
    {
      v3 = 0; /*0x58ef7c*/
      do /*0x58ef96*/
      {
        v3 += 80; /*0x58ef84*/
        --v2; /*0x58ef87*/
        *(unsigned int *)(v3 + g_MissionQueueFrame.localVariables[163] - 24) = -1; /*0x58ef88*/
        *(unsigned int *)(v3 + g_MissionQueueFrame.localVariables[163] - 20) = -1; /*0x58ef92*/
      }
      while ( v2 ); /*0x58ef96*/
    }
  }
  v4 = g_MissionQueueFrame.briefing[342]; /*0x58ef98*/
  v5 = g_MissionQueueFrame.briefing[342] - 1; /*0x58ef9f*/
  if ( g_MissionQueueFrame.briefing[342] - 1 >= 0 ) /*0x58efa4*/
  {
    do /*0x58efc3*/
    {
      v6 = *(void **)(g_MissionQueueFrame.briefing[339] + 4 * v5); /*0x58efab*/
      if ( v6 ) /*0x58efb0*/
      {
        TileNode::Cleanup(*(TileNode **)(g_MissionQueueFrame.briefing[339] + 4 * v5)); /*0x58efb4*/
        operator delete((void *)(v6)); /*0x58efba*/
      }
      --v5; /*0x58efc2*/
    }
    while ( v5 >= 0 ); /*0x58efc3*/
    v4 = g_MissionQueueFrame.briefing[342]; /*0x58efc5*/
  }
  g_MissionQueueFrame.localVariables[164] = 0; /*0x58efd0*/
  if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x58efdb*/
  {
    v7 = 0; /*0x58efdd*/
    v8 = g_MapCellWidth * g_MapCellWidth; /*0x58efdf*/
    do /*0x58f02b*/
    {
      if ( *(unsigned int *)(v7 + g_MissionQueueFrame.localVariables[163] + 56) == -1 ) /*0x58efec*/
      {
        v17[0] = 0; /*0x58eff2*/
        v17[1] = 0; /*0x58eff8*/
        if ( (uint8_t)Coord::Compare2D((Coord *)(v7 + g_MissionQueueFrame.localVariables[163]), v17) ) /*0x58effd*/
        {
                    v9 = (RandomMap *)CellCoord::To_CellObj((int16_t *)(/*0x58f014*/                               (CellCoord *)&DataGlobal_87F7E8),                               (int16_t *)(v7 + g_MissionQueueFrame.localVariables[163]));
          Terrain = RandomMap::GenerateTerrain(v9); /*0x58f01b*/
          if ( Terrain ) /*0x58f022*/
            *((unsigned char *)Terrain + 26) = 0; /*0x58f024*/
        }
      }
      v7 += 80; /*0x58f027*/
      --v8; /*0x58f02a*/
    }
    while ( v8 ); /*0x58f02b*/
    v4 = g_MissionQueueFrame.briefing[342]; /*0x58f02d*/
  }
  if ( v16 ) /*0x58f03a*/
  {
    v11 = 0; /*0x58f03c*/
    if ( v4 > 0 ) /*0x58f040*/
    {
      do /*0x58f059*/
      {
        RandomMap::CollectBorderCells(*(RandomMap **)(g_MissionQueueFrame.briefing[339] + 4 * v11)); /*0x58f04b*/
        v4 = g_MissionQueueFrame.briefing[342]; /*0x58f050*/
        ++v11; /*0x58f056*/
      }
      while ( v11 < g_MissionQueueFrame.briefing[342] ); /*0x58f059*/
    }
    v12 = 0; /*0x58f05b*/
    if ( v4 > 0 ) /*0x58f05f*/
    {
      do /*0x58f077*/
      {
        RandomMap::AllocateArea(*(RandomMap **)(g_MissionQueueFrame.briefing[339] + 4 * v12)); /*0x58f069*/
        v4 = g_MissionQueueFrame.briefing[342]; /*0x58f06e*/
        ++v12; /*0x58f074*/
      }
      while ( v12 < g_MissionQueueFrame.briefing[342] ); /*0x58f077*/
    }
    v13 = 0; /*0x58f079*/
    if ( v4 > 0 ) /*0x58f07d*/
    {
      do /*0x58f0aa*/
      {
        v14 = *(void ((unsigned int)(****))(unsigned int, int))(*(unsigned int *)(g_MissionQueueFrame.briefing[339] + 4 * v13) + 4); /*0x58f088*/
        if ( v14 ) /*0x58f08d*/
          (**v14)(v14, 1); /*0x58f093*/
        ++v13; /*0x58f09b*/
        *(unsigned int *)(*(unsigned int *)(g_MissionQueueFrame.briefing[339] + 4 * v13 - 4) + 4) = 0; /*0x58f0a0*/
      }
      while ( v13 < g_MissionQueueFrame.briefing[342] ); /*0x58f0aa*/
    }
  }
  return 1; /*0x58f0ac*/
}
}
// 0x585EE0
namespace gamemd {
int sub_585EE0()
{
  dword_ABD460[0] = 0; /*0x585ef6*/
  dword_ABD464 = 4; /*0x585f17*/
  dword_ABD468 = 0x40000; /*0x585f2b*/
  dword_ABD46C = 262148; /*0x585f31*/
  return 4; /*0x585f38*/
}
} // namespace gamemd

// 0x5889F0
namespace gamemd {
int sub_5889F0(int a1, int a2)
{
  int *v2; // ebx
  int *v3; // edi
  char v4; // dl
  int *v5; // esi
  int v6; // ecx
  int v7; // eax
  int v9; // [esp+10h] [ebp-1Ch]
  int v10; // [esp+14h] [ebp-18h]
  int v11; // [esp+18h] [ebp-14h]
  int v12; // [esp+1Ch] [ebp-10h]
  int v13; // [esp+20h] [ebp-Ch]

  v13 = -1; /*0x588a01*/
  v12 = 0; /*0x588a09*/
  v10 = 0; /*0x588a0d*/
  v2 = dword_82A594; /*0x588a11*/
  do /*0x588aa9*/
  {
    v3 = &dword_82A594[8 * a2]; /*0x588a28*/
    v4 = 1; /*0x588a2e*/
    v9 = 0; /*0x588a30*/
    v5 = &dword_82A594[8 * a1]; /*0x588a34*/
    v11 = 8; /*0x588a3a*/
    do /*0x588a7c*/
    {
      v6 = *v3; /*0x588a44*/
      v7 = *v2; /*0x588a46*/
      if ( (*v5 == 2 || v6 == 2) && v7 == 1 ) /*0x588a55*/
        v4 = 0; /*0x588a57*/
      if ( *v5 == v7 && v6 == v7 && v7 == 1 ) /*0x588a64*/
        ++v9; /*0x588a66*/
      ++v5; /*0x588a6e*/
      ++v3; /*0x588a71*/
      ++v2; /*0x588a74*/
      --v11; /*0x588a78*/
    }
    while ( v11 ); /*0x588a7c*/
    if ( v4 && v9 > v12 ) /*0x588a8c*/
    {
      v12 = v9; /*0x588a8e*/
      v13 = v10; /*0x588a96*/
    }
    ++v10; /*0x588aa5*/
  }
  while ( (int)v2 < (int)dword_82A734 ); /*0x588aa9*/
  return v13; /*0x588ab3*/
}
} // namespace gamemd

// 0x588D10
namespace gamemd {  // G42.18c ns repair
unsigned int unknown::Write(int a2)
{

  if ( LOBYTE(this->unknown_field_0C) ) /*0x588d10*/
    return (unsigned int)(a2 - *&this->m_Position) >> 4; /*0x588d25*/
  else
    return 0; /*0x588d17*/

}
}  // G42.18c ns repair
// 0x588D30
namespace gamemd {  // G42.18c ns repair
int unknown::Seek(int a2, int a3, void *a3_2)
{
  int v3; // edx

  v3 = *&a3_2->u32_4 + 16 * a3_2; /*0x588d3a*/
  *(unsigned int *)a3_2 = *(unsigned int *)v3; /*0x588d42*/
  a3_2->u32_4 = *(unsigned int *)(v3 + 4); /*0x588d47*/
  a3_2->VtableStub_8 = *(unsigned char *)(v3 + 8); /*0x588d4d*/
  a3_2->u32_C = *(unsigned int *)(v3 + 12); /*0x588d53*/
  return a3_2; /*0x588d56*/
}
}  // G42.18c ns repair
// 0x58B110
namespace gamemd {
int sub_58B110()
{
  dword_ABDE98 = 0; /*0x58b112*/
  dword_ABDE9C = 0; /*0x58b117*/
  dword_ABDEA0 = 0; /*0x58b11c*/
  dword_ABDEA4 = 0; /*0x58b121*/
  return 0; /*0x58b126*/
}
} // namespace gamemd

// 0x58B130
namespace gamemd {
void sub_58B130()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x58b13c*/
  dbl_ABDEB0 = Math::Sqrt(v0 + v0); /*0x58b14e*/
}
} // namespace gamemd

// 0x58B160
namespace gamemd {
void sub_58B160()
{
  dbl_ABDF00 = dbl_ABDEB0 / 60.0; /*0x58b16c*/
}
} // namespace gamemd

// 0x58B180
namespace gamemd {
void sub_58B180()
{
  dbl_ABDEE8 = 1.0 / dbl_ABDF00; /*0x58b18c*/
}
} // namespace gamemd

// 0x58B1A0
namespace gamemd {
void sub_58B1A0()
{
  dbl_ABDEE0 = 0.0174532925199433 * 45.0; /*0x58b1ac*/
}
} // namespace gamemd

// 0x58B1C0
namespace gamemd {
void sub_58B1C0()
{
  dbl_ABDEB8 = 0.0174532925199433 * 60.0; /*0x58b1cc*/
}
} // namespace gamemd

// 0x58B1E0
namespace gamemd {
void sub_58B1E0()
{
  dbl_ABDE90 = 0.0174532925199433 * 90.0; /*0x58b1ec*/
}
} // namespace gamemd

// 0x58B200
namespace gamemd {
long long sub_58B200()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABDE90 - dbl_ABDEB8); /*0x58b212*/
  result = Math::RoundToInt(v0 * dbl_ABDEB0 * 0.5); /*0x58b226*/
  dword_ABDF08 = result; /*0x58b22b*/
  return result; /*0x58b230*/
}
} // namespace gamemd

// 0x58B240
namespace gamemd {
void sub_58B240()
{
  dbl_ABDEC0 = Math::ArcTan((double)dword_ABDF08 * 0.00390625); /*0x58b257*/
}
} // namespace gamemd

// 0x58B270
namespace gamemd {
void sub_58B270()
{
  dbl_ABDED8 = Math::ArcTan((double)(2 * dword_ABDF08) / dbl_ABDEB0); /*0x58b292*/
}
} // namespace gamemd

// 0x58B2A0
namespace gamemd {
long long sub_58B2A0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABDF08) + 0.5); /*0x58b2bb*/
  dword_ABDEFC = result; /*0x58b2c0*/
  return result; /*0x58b2c6*/
}
} // namespace gamemd

// 0x58B2D0
namespace gamemd {
int sub_58B2D0()
{
  word_ABDEA8 = 0; /*0x58b2d2*/
  word_ABDEAA = 0; /*0x58b2d8*/
  return 0; /*0x58b2de*/
}
} // namespace gamemd

// 0x58B2E0
namespace gamemd {
int sub_58B2E0()
{
  dword_ABDEC8 = 0; /*0x58b2e2*/
  dword_ABDECC = 0; /*0x58b2e7*/
  dword_ABDED0 = 0; /*0x58b2ec*/
  return 0; /*0x58b2f1*/
}
} // namespace gamemd

// 0x58B300
namespace gamemd {
int sub_58B300()
{
  dword_ABDEF8 = 0; /*0x58b305*/
  dword_ABDEF0 = 128; /*0x58b30f*/
  dword_ABDEF4 = 128; /*0x58b314*/
  return 128; /*0x58b319*/
}
} // namespace gamemd

// 0x58B320
namespace gamemd {
int sub_58B320()
{
  dword_ABDF18 = 0; /*0x58b322*/
  dword_ABDF1C = 0; /*0x58b327*/
  dword_ABDF20 = 0; /*0x58b32c*/
  dword_ABDF24 = 0; /*0x58b331*/
  return 0; /*0x58b336*/
}
} // namespace gamemd

// 0x58B340
namespace gamemd {
void sub_58B340()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x58b34c*/
  dbl_ABDF30 = Math::Sqrt(v0 + v0); /*0x58b35e*/
}
} // namespace gamemd

// 0x58B370
namespace gamemd {
void sub_58B370()
{
  dbl_ABDF80 = dbl_ABDF30 / 60.0; /*0x58b37c*/
}
} // namespace gamemd

// 0x58B390
namespace gamemd {
void sub_58B390()
{
  dbl_ABDF68 = 1.0 / dbl_ABDF80; /*0x58b39c*/
}
} // namespace gamemd

// 0x58B3B0
namespace gamemd {
void sub_58B3B0()
{
  dbl_ABDF60 = 0.0174532925199433 * 45.0; /*0x58b3bc*/
}
} // namespace gamemd

// 0x58B3D0
namespace gamemd {
void sub_58B3D0()
{
  dbl_ABDF38 = 0.0174532925199433 * 60.0; /*0x58b3dc*/
}
} // namespace gamemd

// 0x58B3F0
namespace gamemd {
void sub_58B3F0()
{
  dbl_ABDF10 = 0.0174532925199433 * 90.0; /*0x58b3fc*/
}
} // namespace gamemd

// 0x58B410
namespace gamemd {
long long sub_58B410()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABDF10 - dbl_ABDF38); /*0x58b422*/
  result = Math::RoundToInt(v0 * dbl_ABDF30 * 0.5); /*0x58b436*/
  dword_ABDF88 = result; /*0x58b43b*/
  return result; /*0x58b440*/
}
} // namespace gamemd

// 0x58B450
namespace gamemd {
void sub_58B450()
{
  dbl_ABDF40 = Math::ArcTan((double)dword_ABDF88 * 0.00390625); /*0x58b467*/
}
} // namespace gamemd

// 0x58B480
namespace gamemd {
void sub_58B480()
{
  dbl_ABDF58 = Math::ArcTan((double)(2 * dword_ABDF88) / dbl_ABDF30); /*0x58b4a2*/
}
} // namespace gamemd

// 0x58B4B0
namespace gamemd {
long long sub_58B4B0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABDF88) + 0.5); /*0x58b4cb*/
  dword_ABDF7C = result; /*0x58b4d0*/
  return result; /*0x58b4d6*/
}
} // namespace gamemd

// 0x58B4E0
namespace gamemd {
int sub_58B4E0()
{
  word_ABDF28 = 0; /*0x58b4e2*/
  word_ABDF2A = 0; /*0x58b4e8*/
  return 0; /*0x58b4ee*/
}
} // namespace gamemd

// 0x58B4F0
namespace gamemd {
int sub_58B4F0()
{
  dword_ABDF48 = 0; /*0x58b4f2*/
  dword_ABDF4C = 0; /*0x58b4f7*/
  dword_ABDF50 = 0; /*0x58b4fc*/
  return 0; /*0x58b501*/
}
} // namespace gamemd

// 0x58B510
namespace gamemd {
int sub_58B510()
{
  dword_ABDF78 = 0; /*0x58b515*/
  dword_ABDF70 = 128; /*0x58b51f*/
  dword_ABDF74 = 128; /*0x58b524*/
  return 128; /*0x58b529*/
}
} // namespace gamemd

// 0x58B530
namespace gamemd {
void sub_58B530()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x58b53c*/
  dbl_ABE368 = Math::Sqrt(v0 + v0); /*0x58b54e*/
}
} // namespace gamemd

// 0x58B560
namespace gamemd {
void sub_58B560()
{
  dbl_ABECF8 = dbl_ABE368 / 60.0; /*0x58b56c*/
}
} // namespace gamemd

// 0x58B580
namespace gamemd {
void sub_58B580()
{
  dbl_ABECE0 = 1.0 / dbl_ABECF8; /*0x58b58c*/
}
} // namespace gamemd

// 0x58B5A0
namespace gamemd {
void sub_58B5A0()
{
  dbl_ABECD8 = 0.0174532925199433 * 45.0; /*0x58b5ac*/
}
} // namespace gamemd

// 0x58B5C0
namespace gamemd {
void sub_58B5C0()
{
  dbl_ABEC88 = 0.0174532925199433 * 60.0; /*0x58b5cc*/
}
} // namespace gamemd

// 0x58B5E0
namespace gamemd {
void sub_58B5E0()
{
  dbl_ABDFA8 = 0.0174532925199433 * 90.0; /*0x58b5ec*/
}
} // namespace gamemd

// 0x58B640
namespace gamemd {
void sub_58B640()
{
  dbl_ABEC98 = Math::ArcTan((double)dword_ABED00 * 0.00390625); /*0x58b657*/
}
} // namespace gamemd

// 0x58B6A0
namespace gamemd {
long long sub_58B6A0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABED00) + 0.5); /*0x58b6bb*/
  dword_ABECF4 = result; /*0x58b6c0*/
  return result; /*0x58b6c6*/
}
} // namespace gamemd

// 0x58B6D0
namespace gamemd {
int sub_58B6D0()
{
  dword_ABE300 = 0; /*0x58b6d2*/
  return 0; /*0x58b6de*/
}
} // namespace gamemd

// 0x58B700
namespace gamemd {
int sub_58B700()
{
  dword_ABECF0 = 0; /*0x58b705*/
  dword_ABECE8 = 128; /*0x58b70f*/
  dword_ABECEC = 128; /*0x58b714*/
  return 128; /*0x58b719*/
}
} // namespace gamemd

// 0x58B720
namespace gamemd {
int sub_58B720()
{
  dword_ABE2F0 = 0; /*0x58b722*/
  dword_ABE2F4 = 0; /*0x58b727*/
  dword_ABE2F8 = 0; /*0x58b72c*/
  dword_ABE2FC = 0; /*0x58b731*/
  return 0; /*0x58b736*/
}
} // namespace gamemd

// 0x58B740
namespace gamemd {
int sub_58B740()
{
  MapResourceClass::Constructor((MapResourceClass *)byte_ABDFD8); /*0x58b745*/
  return atexit(unknown_libname_23); /*0x58b755*/
}
} // namespace gamemd

// 0x58B760
namespace gamemd {
int unknown_libname_23()
{
  RandomMap::CleanupRandomMapData((int)byte_ABDFD8); /*0x58b765*/
}
} // namespace gamemd

// 0x58B770
namespace gamemd {
int unknown_libname_24()
{
  return SeedInitRNG(&unk_ABE890, 0); /*0x58b77c*/
}
} // namespace gamemd

// 0x58B780
namespace gamemd {
void sub_58B780()
{
  byte_ABDFB8 = 0; /*0x58b780*/
  dword_ABDFC0 = 0; /*0x58b787*/
  dword_ABDFC4 = 0; /*0x58b791*/
  dword_ABDFC8 = (int)sub_598000; /*0x58b79b*/
}
} // namespace gamemd

// 0x58BC30
namespace gamemd {
int sub_58BC30()
{
  dword_ABDF94 = 0; /*0x58bc37*/
  dword_ABDF98 = 0; /*0x58bc3c*/
  byte_ABDF9C = 1; /*0x58bc41*/
  byte_ABDF9D = 0; /*0x58bc48*/
  dword_ABDF90 = (int)&off_7ED858; /*0x58bc4d*/
  dword_ABDFA4 = 10; /*0x58bc57*/
  dword_ABDFA0 = 0; /*0x58bc61*/
  return atexit(sub_58BC70); /*0x58bc6c*/
}
} // namespace gamemd

// 0x58BC70
namespace gamemd {
void sub_58BC70()
{
  if ( (byte_ABDFB0 & 1) == 0 ) /*0x58bc7a*/
  {
    dword_ABDF90 = (int)&vt_VectorClass; /*0x58bc7e*/
    byte_ABDFB0 |= 1u; /*0x58bc91*/
    if ( dword_ABDF94 ) /*0x58bc97*/
    {
      if ( byte_ABDF9D ) /*0x58bca1*/
      {
        operator delete((void *)(dword_ABDF94)); /*0x58bca4*/
        dword_ABDF94 = 0; /*0x58bcac*/
      }
    }
    byte_ABDF9D = 0; /*0x58bcb6*/
    dword_ABDF98 = 0; /*0x58bcbd*/
  }
}
} // namespace gamemd

// 0x58BE20
namespace gamemd {
unsigned int * E4Recv_58BE20::sub_58BE20()
{

  unsigned int v2; // esi
  unsigned int v3; // eax
  unsigned short *v4; // ecx
  int v5; // ecx
  __int64 v7; // [esp+14h] [ebp-10h]

  v2 = g_MapCellWidth * g_MapCellWidth - 1; /*0x58be30*/
  do /*0x58be88*/
  {
    do /*0x58be6f*/
    {
      v7 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x58be52*/
      LOWORD(v3) = Math::RoundToInt((double)v7 * (double)(v2 + 1) * 2.328306437080797e-10); /*0x58be68*/
    }
    while ( v3 > v2 ); /*0x58be6f*/
    v4 = (unsigned short *)(g_MissionQueueFrame.localVariables[163] + 80 * v3); /*0x58be7d*/
  }
  while ( !*v4 && !v4[1] ); /*0x58be88*/
  v5 = 80 * v3; /*0x58be8e*/
  this->AbstractClass = *(void **)(v5 + g_MissionQueueFrame.localVariables[163]); /*0x58be97*/
  return &this->AbstractClass; /*0x58be8d*/

}
} // namespace gamemd

// 0x58BEA0
namespace gamemd {
unsigned int * E4Recv_58BEA0::sub_58BEA0()
{

  int v2; // ebx
  unsigned int v3; // esi
  unsigned int v4; // eax
  unsigned short *v5; // ecx
  Cell *v6; // eax
  __int16 v8[2]; // [esp+10h] [ebp-1Ch] BYREF
  __int64 v9; // [esp+14h] [ebp-18h]
  __int64 v10; // [esp+1Ch] [ebp-10h]
  double v11; // [esp+24h] [ebp-8h]

  v2 = 0; /*0x58beab*/
  do /*0x58bf34*/
  {
    v3 = g_MapCellWidth * g_MapCellWidth - 1; /*0x58beb5*/
    do /*0x58bf0b*/
    {
      v9 = v3 + 1; /*0x58bebf*/
      v11 = (double)v9; /*0x58bec7*/
      do /*0x58bef2*/
      {
        v10 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x58bed5*/
        LOWORD(v4) = Math::RoundToInt((double)v10 * v11 * 2.328306437080797e-10); /*0x58beeb*/
      }
      while ( v4 > v3 ); /*0x58bef2*/
      v5 = (unsigned short *)(g_MissionQueueFrame.localVariables[163] + 80 * v4); /*0x58bf00*/
    }
    while ( !*v5 && !v5[1] ); /*0x58bf0b*/
    ++v2; /*0x58bf13*/
    *(unsigned int *)v8 = *(unsigned int *)(80 * v4 + g_MissionQueueFrame.localVariables[163]); /*0x58bf1d*/
    if ( v2 > 200 ) /*0x58bf21*/
    {
      v8[0] = 0; /*0x58bf42*/
      v8[1] = 0; /*0x58bf47*/
      this->AbstractClass = 0; /*0x58bf51*/
      return &this->AbstractClass; /*0x58bf5c*/
    }
    v6 = (Cell *)CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v8); /*0x58bf2d*/
  }
  while ( !(unsigned __int8)Cell::IsEmpty(v6) ); /*0x58bf34*/
  this->AbstractClass = *(void **)v8; /*0x58bf62*/
  return &this->AbstractClass; /*0x58bf50*/

}
} // namespace gamemd

// 0x58C100
namespace gamemd {
void sub_58C100()
{
  int v1; // edi
  unsigned int *v2; // esi
  int v3; // eax
  void *v4; // eax
  unsigned int *v5; // [esp+8h] [ebp-4h] BYREF

  v1 = g_MissionQueueFrame.briefing[342] - 1; /*0x58c10a*/
  for ( g_MissionQueueFrame.localVariables[164] = 0; v1 >= 0; --v1 ) /*0x58c115*/
  {
    v2 = *(unsigned int **)(g_MissionQueueFrame.briefing[339] + 4 * v1); /*0x58c122*/
    if ( v2 ) /*0x58c127*/
    {
      if ( *v2 ) /*0x58c12d*/
      {
        (**(void (***)(unsigned int, int))*v2)(*v2, 1); /*0x58c137*/
        *v2 = 0; /*0x58c139*/
      }
      v5 = v2; /*0x58c14b*/
      v3 = (*(int (**)(int *, unsigned int **))(g_MissionQueueFrame.briefing[338] + 16))( /*0x58c14f*/
             &g_MissionQueueFrame.briefing[338],
             &v5);
      if ( v3 != -1 && v3 < g_MissionQueueFrame.briefing[342] ) /*0x58c15f*/
      {
        --g_MissionQueueFrame.briefing[342]; /*0x58c164*/
        for ( ; /*0x58c16a*/
              v3 < g_MissionQueueFrame.briefing[342];
              *(unsigned int *)(g_MissionQueueFrame.briefing[339] + 4 * v3 - 4) = *(unsigned int *)(g_MissionQueueFrame.briefing[339]
                                                                                      + 4 * v3) )
        {
          ++v3; /*0x58c172*/
        }
      }
      v4 = (void *)v2[11]; /*0x58c184*/
      v2[10] = &vt_VectorClass; /*0x58c187*/
      if ( v4 ) /*0x58c190*/
      {
        if ( *((unsigned char *)v2 + 53) ) /*0x58c192*/
        {
          operator delete((void *)(v4)); /*0x58c198*/
          v2[11] = 0; /*0x58c1a0*/
        }
      }
      *((unsigned char *)v2 + 53) = 0; /*0x58c1a4*/
      v2[12] = 0; /*0x58c1a7*/
      operator delete((void *)(v2)); /*0x58c1aa*/
    }
  }
}
} // namespace gamemd

// 0x58C2C0
namespace gamemd {
char * TileData_GetEntry(int a1)
{
  return (char *)dword_ABED10 + 80 * a1; /*0x58c2ce*/
}
} // namespace gamemd

// 0x58C320
namespace gamemd {
unsigned int * E4Recv_58C320::sub_58C320(unsigned int * a2)
{

  int v2; // ebx
  unsigned int v4; // eax
  int v5; // ecx
  int v6; // ecx
  __int64 v8; // [esp+18h] [ebp-10h]

  v2 = g_MapCellWidth * g_MapCellWidth; /*0x58c32e*/
  do /*0x58c38f*/
  {
    do /*0x58c372*/
    {
      v8 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x58c355*/
      LOWORD(v4) = Math::RoundToInt((double)v8 * (double)(unsigned int)v2 * 2.328306437080797e-10); /*0x58c36b*/
    }
    while ( v4 > v2 - 1 ); /*0x58c372*/
    v5 = g_MissionQueueFrame.localVariables[163] + 80 * v4; /*0x58c380*/
  }
  while ( *(void **)(v5 + 56) != this->? || !*(unsigned short *)v5 && !*(unsigned short *)(v5 + 2) ); /*0x58c38f*/
  v6 = *(unsigned int *)(80 * v4 + g_MissionQueueFrame.localVariables[163]); /*0x58c39e*/
  *a2 = v6; /*0x58c3a6*/
  return a2; /*0x58c398*/

}
} // namespace gamemd

// 0x58C3B0
namespace gamemd {
unsigned int * E4Recv_58C3B0::sub_58C3B0(unsigned int * a2)
{

  int v3; // ebx
  unsigned int v4; // eax
  int v5; // ecx
  Cell *v6; // eax
  int v8; // [esp+10h] [ebp-20h]
  __int16 v9[2]; // [esp+14h] [ebp-1Ch] BYREF
  __int64 v10; // [esp+18h] [ebp-18h]
  __int64 v11; // [esp+20h] [ebp-10h]
  double v12; // [esp+28h] [ebp-8h]

  v8 = 0; /*0x58c3bb*/
  do /*0x58c457*/
  {
    v3 = g_MapCellWidth * g_MapCellWidth; /*0x58c3c6*/
    do /*0x58c423*/
    {
      v10 = (unsigned int)v3; /*0x58c3d3*/
      v12 = (double)(unsigned int)v3; /*0x58c3db*/
      do /*0x58c406*/
      {
        v11 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x58c3e9*/
        LOWORD(v4) = Math::RoundToInt((double)v11 * v12 * 2.328306437080797e-10); /*0x58c3ff*/
      }
      while ( v4 > v3 - 1 ); /*0x58c406*/
      v5 = g_MissionQueueFrame.localVariables[163] + 80 * v4; /*0x58c414*/
    }
    while ( *(void **)(v5 + 56) != this->? || !*(unsigned short *)v5 && !*(unsigned short *)(v5 + 2) ); /*0x58c423*/
    *(unsigned int *)v9 = *(unsigned int *)(80 * v4 + g_MissionQueueFrame.localVariables[163]); /*0x58c432*/
    if ( ++v8 > 200 ) /*0x58c444*/
    {
      *a2 = 0; /*0x58c47a*/
      return a2; /*0x58c480*/
    }
    v6 = (Cell *)CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v9); /*0x58c450*/
  }
  while ( !(unsigned __int8)Cell::IsEmpty(v6) ); /*0x58c457*/
  *a2 = *(unsigned int *)v9; /*0x58c48e*/
  return a2; /*0x58c477*/

}
} // namespace gamemd

// 0x58C4A0
namespace gamemd {
unsigned int * E4Recv_58C4A0::sub_58C4A0(ObjectClass * aP1)
{

  unsigned short *v2; // ebp
  int v3; // ebx
  unsigned int v4; // eax
  Cell *v5; // eax
  int v7; // [esp+10h] [ebp-20h]
  __int64 v9; // [esp+20h] [ebp-10h]

  v2 = (unsigned short *)g_MissionQueueFrame.localVariables[163]; /*0x58c4b3*/
  v7 = g_MapCellWidth * g_MapCellWidth; /*0x58c4bd*/
  v3 = 0; /*0x58c4c1*/
  while ( 1 ) /*0x58c559*/
  {
    do /*0x58c508*/
    {
      v9 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x58c4eb*/
      LOWORD(v4) = Math::RoundToInt((double)v9 * (double)(unsigned int)v7 * 2.328306437080797e-10); /*0x58c501*/
    }
    while ( v4 > v7 - 1 ); /*0x58c508*/
    ++v3; /*0x58c518*/
    memcpy(v2, (const void *)(g_MissionQueueFrame.localVariables[163] + 80 * v4), 0x50u); /*0x58c523*/
    if ( v3 >= 100 ) /*0x58c525*/
    {
      *aP1 = 0; /*0x58c57e*/
      return aP1; /*0x58c584*/
    }
    if ( (void *)*((unsigned int *)v2 + 14) == this->? && (*v2 || v2[1]) ) /*0x58c53a*/
    {
      if ( *((unsigned char *)v2 + 68) ) /*0x58c541*/
      {
        v5 = (Cell *)CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v2); /*0x58c552*/
        if ( (unsigned __int8)Cell::IsEmpty(v5) ) /*0x58c559*/
          break; /*0x58c559*/
      }
    }
  }
  *aP1 = *(unsigned int *)v2; /*0x58c591*/
  return aP1; /*0x58c569*/

}
} // namespace gamemd

// 0x58C5A0
namespace gamemd {
unsigned int * sub_58C5A0(unsigned int * a1, int a2, int a3)
{
  unsigned short *v3; // ebx
  unsigned int v4; // eax
  bool v5; // cc
  void *v6; // eax
  unsigned int *v7; // esi
  int v9; // [esp+10h] [ebp-28h]
  int v11; // [esp+18h] [ebp-20h]
  int64_t v13; // [esp+28h] [ebp-10h]

  v3 = dword_ABED10; /*0x58c5b2*/
  v11 = g_MapCellWidth * g_MapCellWidth; /*0x58c5c1*/
  v9 = 0; /*0x58c5c5*/
  do /*0x58c67e*/
  {
    do /*0x58c60a*/
    {
      v13 = (unsigned int)Random::State(&unk_ABE890); /*0x58c5ed*/
      v4 = Math::RoundToInt((double)v13 * (double)(unsigned int)v11 * 2.328306437080797e-10); /*0x58c603*/
    }
    while ( v4 > v11 - 1 ); /*0x58c60a*/
    v5 = v9 + 1 < 100; /*0x58c626*/
    memcpy(v3, (char *)dword_ABED10 + 80 * v4, 0x50u); /*0x58c629*/
    ++v9; /*0x58c62b*/
    if ( !v5 ) /*0x58c62f*/
    {
      *a1 = 0; /*0x58c69a*/
      return a1; /*0x58c6a0*/
    }
    v6 = ((CellCoord *)(&dword_87F7E8))->To_CellObj(v3); /*0x58c637*/
    v7 = v6; /*0x58c63f*/
  }
  while ( !*v3 && !v3->u32_2 /*0x58c67e*/
       || ((MapClass *)(&dword_87F7E8))->GetTileIndex(&v6->u32_48, 0, 0) != a2
       || !Cell::IsEmpty(v7)
       || a3 != -1 && v3->u32_38 != a3 );
  *a1 = *(unsigned int *)v3; /*0x58c6ac*/
  return a1; /*0x58c697*/
}
} // namespace gamemd

// 0x58D070
namespace gamemd {
int Map_SetLayerData(short * a1, int a2)
{
  int result; // eax

  if ( dword_ABED10 ) /*0x58d079*/
  {
    result = 80 * (*a1 + g_MapCellWidth * a1[1]); /*0x58d08e*/
    *(unsigned int *)((char *)dword_ABED10 + result + 56) = a2; /*0x58d091*/
  }
  return result; /*0x58d095*/
}
} // namespace gamemd

// 0x58D120
namespace gamemd {
int E4Recv_58D120::sub_58D120(int a2, int a3)
{

  int result; // eax
  int v4; // ebx
  int v5; // esi
  unsigned int *v6; // eax
  ObjectClass *v7; // [esp+4h] [ebp-8h]
  int v8; // [esp+8h] [ebp-4h]

  result = g_MapCellWidth * g_MapCellWidth; /*0x58d129*/
  v7 = this; /*0x58d12e*/
  if ( g_MapCellWidth * g_MapCellWidth <= 0 ) /*0x58d134*/
  {
    this->M12 = 0; /*0x58d1b3*/
  }
  else
  {
    v4 = a3; /*0x58d137*/
    v5 = 0; /*0x58d141*/
    v8 = g_MapCellWidth * g_MapCellWidth; /*0x58d143*/
    do /*0x58d1a4*/
    {
      if ( *(void **)(v5 + g_MissionQueueFrame.localVariables[163] + 56) == this->M8 ) /*0x58d153*/
      {
        *(unsigned int *)(v5 + g_MissionQueueFrame.localVariables[163] + 56) = a2; /*0x58d155*/
        *(unsigned char *)(v5 + g_MissionQueueFrame.localVariables[163] + 75) = 0; /*0x58d15e*/
        a3 = *(unsigned int *)(v5 + g_MissionQueueFrame.localVariables[163]); /*0x58d176*/
        v6 = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, (__int16 *)&a3); /*0x58d17a*/
        v6->u32_38 = 0; /*0x58d182*/
        v6->Tactical_11A = 0; /*0x58d185*/
        if ( v4 != -1 ) /*0x58d18c*/
          v6->u32_11B = v4; /*0x58d18e*/
        this = v7; /*0x58d194*/
      }
      v5 += 80; /*0x58d19c*/
      result = --v8; /*0x58d19f*/
    }
    while ( v8 ); /*0x58d1a4*/
    this->M12 = 0; /*0x58d1a8*/
  }
  return result; /*0x58d1ac*/

}
} // namespace gamemd
