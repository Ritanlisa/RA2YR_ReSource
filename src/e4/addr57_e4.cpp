// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_5785F0_e4.hpp"
#include "e4/classes/E4Recv_578B70_e4.hpp"
#include "e4/classes/E4Recv_578C50_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/E4Recv_583AD0_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Display_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Mission_e4.hpp"
#include "e4/classes/BombClass_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"

// 0x574600
namespace gamemd {
bool sub_574600(int a1, int a2, int a3)
{
  char v3; // bl
  int v4; // edx
  int v5; // eax

  v3 = 2; /*0x574601*/
  if ( a2 == 2 ) /*0x574609*/
  {
    v4 = a3; /*0x574610*/
    v3 = 4; /*0x574616*/
    if ( a1 == dword_ABC1E8 && *(unsigned char *)(a3 + 282) == 4 || a1 == dword_AA0E38 && *(unsigned char *)(a3 + 282) == 4 ) /*0x574634*/
      return 1; /*0x574634*/
    v5 = g_TerrainSoundTable2; /*0x574636*/
    if ( a1 != g_TerrainSoundTable2 && a1 != g_TerrainSoundTable2 + 3 && a1 != g_TerrainSoundTable2 + 1 ) /*0x57464b*/
    {
  LABEL_20:
      if ( a1 != v5 + 2 ) /*0x5746a3*/
        return 0; /*0x5746a3*/
    }
  }
  else
  {
    if ( a2 != 4 ) /*0x574652*/
      return 0; /*0x574652*/
    v4 = a3; /*0x574659*/
    if ( a1 == dword_ABC1D0 && *(unsigned char *)(a3 + 282) == 2 ) /*0x574667*/
      return 1; /*0x57466d*/
    if ( a1 == dword_AA1540 && *(unsigned char *)(a3 + 282) == 2 ) /*0x57467e*/
      return 1; /*0x574684*/
    v5 = g_TerrainSoundConfig; /*0x574687*/
    if ( a1 != g_TerrainSoundConfig && a1 != g_TerrainSoundConfig + 3 && a1 != g_TerrainSoundConfig + 1 ) /*0x57469c*/
      goto LABEL_20; /*0x57469c*/
  }
  return *(unsigned char *)(v4 + 282) == v3; /*0x574669*/
}
}
// 0x575EE0
namespace gamemd {
Coord * * sub_575EE0(void * a1, int a2)
{
  uint16_t v2; // bp
  char v3; // bl
  void *v4; // eax
  uint16_t v5; // di
  unsigned int v6; // eax
  void *v7; // eax
  void **v8; // ecx
  unsigned int v9; // eax
  void *v10; // eax
  void **v11; // ecx
  int v12; // ecx
  unsigned int v13; // eax
  void *v14; // eax
  void *v15; // esi
  void **v16; // ecx
  int v17; // ecx
  unsigned int v18; // eax
  void **v19; // ecx
  int v20; // ecx
  unsigned int v21; // eax
  void *v22; // eax
  void **v23; // ecx
  int v24; // ecx
  unsigned int v25; // eax
  void *v26; // eax
  void *v27; // esi
  void **v28; // ecx
  void **v29; // ecx
  int v31; // [esp+14h] [ebp-18h] BYREF
  int v32; // [esp+18h] [ebp-14h] BYREF
  int v33; // [esp+1Ch] [ebp-10h] BYREF
  int v34; // [esp+20h] [ebp-Ch] BYREF
  int v35; // [esp+24h] [ebp-8h] BYREF
  int v36; // [esp+28h] [ebp-4h] BYREF
  int v37; // [esp+30h] [ebp+4h]

  v2 = IDA_HIWORD(a2); /*0x575eea*/
  v3 = 0; /*0x575eef*/
  if ( IDA_HIWORD(a1) == IDA_HIWORD(a2) ) /*0x575ef6*/
  {
    v4 = a1; /*0x575ef8*/
    v5 = a2; /*0x575efc*/
    v3 = 1; /*0x575f03*/
    if ( (int16_t)a1 > (int16_t)a2 ) /*0x575f05*/
    {
      v4 = (void *)a2; /*0x575f09*/
      v2 = IDA_HIWORD(a1); /*0x575f11*/
      v5 = (uint16_t)a1; /*0x575f11*/
    }
  }
  else if ( IDA_SHIWORD(a1) <= IDA_SHIWORD(a2) ) /*0x575f18*/
  {
    v5 = a2; /*0x575f2f*/
    v4 = a1; /*0x575f33*/
  }
  else
  {
    v4 = (void *)a2; /*0x575f1e*/
    v5 = (uint16_t)a1; /*0x575f22*/
    a2 = (int)a1; /*0x575f24*/
    v2 = IDA_HIWORD(a1); /*0x575f28*/
  }
  a2 = (int)v4; /*0x575f37*/
  while ( a2 != IDA___PAIR32__(v2, v5) ) /*0x575f43*/
  {
    v6 = (int16_t)a2 + (IDA_SHIWORD(a2) << 9); /*0x575f5b*/
    if ( v6 >= 0x40000 || (v7 = *(void **)(dword_87F924 + 4 * v6)) == 0 ) /*0x575f71*/
    {
      dword_ABDC74 = a2; /*0x575f77*/
      v7 = &unk_ABDC50; /*0x575f7c*/
    }
    v8 = (void **)*((unsigned int *)v7 + 15); /*0x575f81*/
    if ( v8 ) /*0x575f86*/
      ((TeamClass *)(v8))->Update_0(31, 0, dword_ABD480, 0, 0); /*0x575f97*/
    if ( v3 ) /*0x575f9e*/
    {
      v9 = (int16_t)(dword_89F698 + a2) + ((int16_t)(IDA_HIWORD(a2) + IDA_HIWORD(dword_89F698)) << 9); /*0x575fcd*/
      if ( v9 >= 0x40000 || (v10 = *(void **)(dword_87F924 + 4 * v9)) == 0 ) /*0x575fe3*/
      {
        v10 = (void **)(&unk_ABDC50);
        IDA_LOWORD(v37) = dword_89F698 + a2; /*0x575fba*/
        IDA_HIWORD(v37) = IDA_HIWORD(a2) + IDA_HIWORD(dword_89F698); /*0x575fc2*/
        dword_ABDC74 = v37; /*0x575fee*/
      }
      v11 = (void **)((int)((void **)*((unsigned int *)v10 + 15)));
      if ( v11 ) /*0x575ff9*/
        ((TeamClass *)(v11))->Update_0(31, 0, dword_ABD480, 0, 0); /*(void *)(0x576009)*/
      v12 = *(void *)(CellStruct)::Add(&a2, &v32, dword_89F688); /*0x576021*/
      v13 = (int16_t)v12 + (IDA_SHIWORD(v12) << 9); /*0x576032*/
      if ( v13 < 0x40000 && (v14 = *(void **)(dword_87F924 + 4 * v13)) != 0 ) /*0x576048*/
      {
        v15 = v14; /*0x57604a*/
      }
      else
      {
        dword_ABDC74 = (unsigned int)((void **)(v12));
        v15 = &unk_ABDC50; /*0x576054*/
      }
      v16 = (void **)((int)((void **)*((unsigned int *)v15 + 15)));
      if ( v16 ) /*0x57605e*/
        ((TeamClass *)(v16))->Update_0(31, 0, dword_ABD480, 0, 0); /*(void *)(0x57606e)*/
      v17 = *(void *)(CellStruct)::Add((unsigned short *)v15 + 18, &v33, dword_89F688); /*0x576085*/
      v18 = (int16_t)v17 + (IDA_SHIWORD(v17) << 9); /*0x576096*/
      if ( v18 >= 0x40000 || (v4 = *(void **)(dword_87F924 + 4 * v18)) == 0 ) /*0x5760ac*/
      {
        dword_ABDC74 = v17; /*0x5760ae*/
        v4 = &unk_ABDC50; /*0x5760b4*/
      }
      v19 = (void **)*((unsigned int *)v4 + 15); /*0x5760b9*/
      if ( v19 ) /*0x5760be*/
        IDA_LOBYTE(v4) = ((TeamClass *)(v19))->Update_0(31, 0, dword_ABD480, 0, 0); /*0x5760ce*/
      IDA_LOWORD(a2) = a2 + 1; /*0x5760d3*/
    }
    else
    {
      v20 = (int)(*(void *)(CellStruct)::Add(&a2, &v34, &dword_89F690));
      v21 = (int16_t)v20 + (IDA_SHIWORD(v20) << 9); /*0x576101*/
      if ( v21 >= 0x40000 || (v22 = *(void **)(dword_87F924 + 4 * v21)) == 0 ) /*0x576117*/
      {
        dword_ABDC74 = (unsigned int)((void **)(v20));
        v22 = &unk_ABDC50; /*0x57611f*/
      }
      v23 = (void **)((int)((void **)*((unsigned int *)v22 + 15)));
      if ( v23 ) /*0x576129*/
        ((TeamClass *)(v23))->Update_0(31, 0, dword_ABD480, 0, 0); /*(void *)(0x576139)*/
      v24 = *(void *)(CellStruct)::Add(&a2, &v35, &dword_89F6A0); /*0x576151*/
      v25 = (int16_t)v24 + (IDA_SHIWORD(v24) << 9); /*0x576162*/
      if ( v25 < 0x40000 && (v26 = *(void **)(dword_87F924 + 4 * v25)) != 0 ) /*0x576178*/
      {
        v27 = v26; /*0x57617a*/
      }
      else
      {
        dword_ABDC74 = (unsigned int)((void **)(v24));
        v27 = &unk_ABDC50; /*0x576184*/
      }
      v28 = (void **)((int)((void **)*((unsigned int *)v27 + 15)));
      if ( v28 ) /*0x57618e*/
        ((TeamClass *)(v28))->Update_0(31, 0, dword_ABD480, 0, 0); /*(void *)(0x57619e)*/
      v31 = *(void *)(CellStruct)::Add((unsigned short *)v27 + 18, &v36, &dword_89F6A0); /*0x5761c1*/
      v4 = ((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&v31); /*0x5761c5*/
      v29 = (void **)*((unsigned int *)v4 + 15); /*0x5761ca*/
      if ( v29 ) /*0x5761cf*/
        IDA_LOBYTE(v4) = ((TeamClass *)(v29))->Update_0(31, 0, dword_ABD480, 0, 0); /*0x5761e0*/
      ++IDA_HIWORD(a2); /*0x5761e5*/
    }
  }
  return (gamemd::Coord **)((char)v4);
}
}
// 0x578E60
namespace gamemd {
void* CreateMapObject(ProgressScreenClass * aP0, int aP1)
{
  char v2; // bl
  unsigned int * v3;
  unsigned int *v4; // ebp
  unsigned int *v5; // edi
  int v6; // edi
  int i; // esi
  char *Entry; // eax
  int j; // eax
  int k; // esi
  unsigned int * v12;

  v2 = (int)(1);
  v12 = (unsigned int *)(0);
  if ( !dword_ABED10 ) /*0x578e79*/
  {
    v3 = (unsigned int *)((int)((unsigned int *)(g_MapCellWidth * g_MapCellWidth)));
    v4 = (unsigned int *)(RA2_OPNEW(80 * g_MapCellWidth * g_MapCellWidth));
    if ( v4 ) /*0x578e97*/
    {
      v5 = v4; /*0x578e9c*/
      if ( v3 - 1 >= 0 ) /*0x578ea0*/
      {
        do /*0x578eb0*/
        {
          TileData::Constructor(v5); /*0x578ea7*/
          v5 += 20; /*0x578eac*/
          --v3; /*0x578eaf*/
        }
        while ( v3 ); /*0x578eb0*/
      }
      dword_ABED10 = (unsigned int)(v4);
    }
    else
    {
      dword_ABED10 = 0; /*0x578eba*/
    }
    v12 = (unsigned int *)(1);
  }
  v6 = g_MapCellWidth * g_MapCellWidth; /*0x578ed1*/
  for ( i = 0; i < v6; Entry[74] = 1 ) /*0x578ed8*/
    Entry = GetTileDataEntry(i++); /*0x578edc*/
  ((Mouse *)((int)&dword_87F7E8))->SetBounds(0); /*0x578ef0*/
  dword_87F8F8 = dword_87F8DC; /*0x578f00*/
  dword_87F8F4 = 1; /*0x578f0d*/
  dword_87F8FC = dword_87F8DC - 1; /*0x578f16*/
  dword_87F900 = (dword_87F8DC << 11) + dword_87F924 + 4; /*0x578f25*/
  for ( j = ((LayerClass *)(&dword_87F7E8))->CellIteratorNext(); j; j = ((LayerClass *)(&dword_87F7E8))->CellIteratorNext() ) /*0x578f35*/
  {
    if ( !v2 ) /*0x578f39*/
      break; /*0x578f39*/
    v2 = Cliff_ProcessTransitions(j, aP1); /*0x578f4b*/
  }
  dword_87F8F8 = dword_87F8DC; /*0x578f61*/
  dword_87F8F4 = 1; /*0x578f66*/
  dword_87F8FC = dword_87F8DC - 1; /*0x578f72*/
  dword_87F900 = (dword_87F8DC << 11) + dword_87F924 + 4; /*0x578f81*/
  for ( k = ((LayerClass *)(&dword_87F7E8))->CellIteratorNext(); k; k = ((LayerClass *)(&dword_87F7E8))->CellIteratorNext() ) /*0x578f8f*/
  {
    if ( !v2 ) /*0x578f93*/
      break; /*0x578f93*/
    if ( !*(unsigned char *)(k + 284) && Cell::IsEmpty((unsigned int *)k) ) /*0x578fa1*/
      v2 = (char)(Terrain::SelectTileType((gamemd::Random *)(k),(IUnknown *)(aP1))); /*0x578fb5*/
  }
  dword_880990 = 0; /*0x578fcd*/
  if ( dword_88098C ) /*0x578fd5*/
  {
    (*(void (**)(int, int))(*(unsigned int *)dword_88098C + 32))(dword_88098C, 1); /*0x578fdb*/
    dword_88098C = 0; /*0x578fde*/
  }
  if ( v12 ) /*0x578fea*/
  {
    RA2_OPDEL(dword_ABED10); /*0x578ff2*/
    dword_ABED10 = 0; /*0x578ffa*/
  }
  return (void *)(v2);
}
}
// 0x57A430
namespace gamemd {
MapClass * * RecursiveCellClassNeighbourUpdate(MapClass * aP0, IUnknown * aP1, IUnknown * aP2, int aP1a, int a5)
{
  MapClass * v7;
  char *CellData; // esi
  int TerrainMask; // eax
  unsigned int v10;
  int * v11;
  unsigned int v12;
  int * v13;
  unsigned int v14;
  IUnknown * v15;
  int * v16;
  unsigned int v17;
  char v18; // bl
  int * v19;
  unsigned int v20;
  char v21; // al
  int * v22;
  unsigned int v23;
  char v24; // bl
  int * v25;
  unsigned int v26;
  char v27; // al
  int * v28;
  unsigned int v29;
  char v30; // bl
  int * v31;
  unsigned int v32;
  char v33; // al
  int v34; // eax
  IUnknown * v39;
  unsigned int *NeighbourContent; // esi
  int v41; // edx
  int v42; // edi
  char *v43; // eax
  unsigned int v45;
  int v46; // [esp+14h] [ebp-14h]
  int v47; // [esp+14h] [ebp-14h]
  int v48; // [esp+14h] [ebp-14h]
  int v49; // [esp+14h] [ebp-14h]
  int v50; // [esp+18h] [ebp-10h]
  int v51; // [esp+18h] [ebp-10h]
  unsigned int v52[3]; // [esp+1Ch] [ebp-Ch] BYREF

  aP2 = (IUnknown *)(aP2);
  v7 = (IUnknown *)(aP2->outBuffer);
  v52[2] = (unsigned int)((IUnknown *)((unsigned int)((IUnknown *)(aP0))));
  v45 = (unsigned int)((IUnknown *)(0));
  aP2 = (IUnknown *)(v7);
  CellData = (char *)((IUnknown *)(((Tactical *)((int16_t *)&aP2))->GetCellData()));
  *((unsigned int *)CellData + 16) = ((Cell *)(aP0))->GetTerrainMask((int *)aP2, 2); /*0x57a467*/
  TerrainMask = ((Cell *)(aP0))->GetTerrainMask((int *)aP2, 0); /*0x57a46a*/
  v10 = TerrainMask; /*0x57a46f*/
  aP2 = (IUnknown *)(TerrainMask); /*0x57a473*/
  if ( TerrainMask > 0 ) /*0x57a477*/
  {
    if ( TerrainMask == 11 || TerrainMask == 26 ) /*0x57a485*/
      v45 = 1; /*0x57a487*/
    if ( (TerrainMask & 0xA0) == 0xA0 && (TerrainMask & 0x11) == 0 /*0x57a4cb*/
      || (TerrainMask & 0x82) == 0x82 && (TerrainMask & 0x44) == 0
      || (TerrainMask & 0xA) == 0xA && (TerrainMask & 0x11) == 0
      || (TerrainMask & 0x28) == 0x28 && (TerrainMask & 0x44) == 0 )
    {
      v45 = 1; /*0x57a4cd*/
    }
    if ( (TerrainMask & 0x20) != 0 ) /*0x57a4d5*/
    {
      v50 = (unsigned int)(aP2->outBuffer);
      v11 = (int *)((unsigned int)((int16_t)(v50 + 1) + (IDA_SHIWORD(v50) << 9)));
      if ( v11 >= (int *)(0x40000) || (v12 = *(int **)(dword_87F924 + 4 * v11)) == 0 ) /*0x57a513*/
      {
        v12 = unk_ABDC50; /*0x57a519*/
        IDA_LOWORD(v46) = v50 + 1; /*0x57a4ef*/
        IDA_HIWORD(v46) = IDA_HIWORD(aP2->outBuffer); /*0x57a4ea*/
        dword_ABDC74 = v46; /*0x57a51e*/
      }
      v52[0] = (unsigned int)(((Cell *)(aP0))->GetTerrainMask((int *)(v12), 0));
      v51 = (int *)((unsigned int)(aP2->outBuffer));
      v13 = (int *)((int16_t)(v51 + 2) + (IDA_SHIWORD(v51) << 9)); /*0x57a554*/
      if ( v13 >= (int *)(0x40000) || (v14 = *(int **)(dword_87F924 + 4 * v13)) == 0 ) /*0x57a56a*/
      {
        IDA_LOWORD(v47) = v51 + 2; /*0x57a546*/
        IDA_HIWORD(v47) = IDA_HIWORD(aP2->outBuffer); /*0x57a541*/
        dword_ABDC74 = v47; /*0x57a570*/
        v14 = unk_ABDC50; /*0x57a575*/
      }
      v15 = (IUnknown *)(((Cell *)(aP0))->GetTerrainMask((int *)(v14), 0));
      if ( (v52[0] & 2) != 0 || ((unsigned int)(v15)& 2) != 0 ) /*0x57a58d*/
        v45 = 1; /*0x57a58f*/
    }
    if ( ((unsigned int)(v10)& 2) != 0 ) /*0x57a597*/
    {
      v52[0] = (unsigned int)(aP2->outBuffer);
      IDA_HIWORD(v48) = IDA_HIWORD(v52[0]); /*0x57a5ac*/
      v16 = (int *)((int16_t)(IDA_LOWORD(v52[0]) - 1) + (IDA_SHIWORD(v52[0]) << 9)); /*0x57a5bf*/
      if ( v16 >= (int *)(0x40000) || (v17 = *(int **)(dword_87F924 + 4 * v16)) == 0 ) /*0x57a5d5*/
      {
        IDA_LOWORD(v48) = IDA_LOWORD(v52[0]) - 1; /*0x57a5b1*/
        dword_ABDC74 = v48; /*0x57a5db*/
        v17 = unk_ABDC50; /*0x57a5e0*/
      }
      v18 = (unsigned int)(((Cell *)(aP0))->GetTerrainMask((int *)(v17), 0));
      v52[0] = (unsigned int)(aP2->outBuffer);
      IDA_HIWORD(v49) = IDA_HIWORD(v52[0]); /*0x57a600*/
      v19 = (int *)((int16_t)(IDA_LOWORD(v52[0]) - 2) + (IDA_SHIWORD(v52[0]) << 9)); /*0x57a613*/
      if ( v19 >= (int *)(0x40000) || (v20 = *(int **)(dword_87F924 + 4 * v19)) == 0 ) /*0x57a629*/
      {
        IDA_LOWORD(v49) = IDA_LOWORD(v52[0]) - 2; /*0x57a605*/
        dword_ABDC74 = v49; /*0x57a62f*/
        v20 = unk_ABDC50; /*0x57a634*/
      }
      v21 = (unsigned int)(((Cell *)(aP0))->GetTerrainMask((int *)(v20), 0));
      if ( (v18 & 0x20) != 0 || (v21 & 0x20) != 0 ) /*0x57a64a*/
        v45 = 1; /*0x57a64c*/
      v10 = (unsigned int)(aP2); /*0x57a651*/
    }
    if ( ((unsigned int)(v10)& 8) != 0 ) /*0x57a658*/
    {
      v52[0] = (unsigned int)(aP2->outBuffer);
      v22 = (unsigned int)(IDA_SLOWORD(v52[0]) + ((int16_t)(IDA_HIWORD(v52[0]) - 1) << 9));
      if ( v22 >= (int *)(0x40000) || (v23 = *(int **)(dword_87F924 + 4 * v22)) == 0 ) /*0x57a695*/
      {
        dword_ABDC74 = v52[0] - 0x10000; /*0x57a69b*/
        v23 = unk_ABDC50; /*0x57a6a0*/
      }
      v24 = (unsigned int)(((Cell *)(aP0))->GetTerrainMask((int *)(v23), 0));
      v52[0] = (unsigned int)(aP2->outBuffer);
      v25 = IDA_SLOWORD(v52[0]) + ((int16_t)(IDA_HIWORD(v52[0]) - 2) << 9); /*0x57a6d2*/
      if ( v25 >= (int *)(0x40000) || (v26 = *(int **)(dword_87F924 + 4 * v25)) == 0 ) /*0x57a6e8*/
      {
        dword_ABDC74 = v52[0] - 0x20000; /*0x57a6ee*/
        v26 = unk_ABDC50; /*0x57a6f3*/
      }
      v27 = (unsigned int)(((Cell *)(aP0))->GetTerrainMask((int *)(v26), 0));
      if ( v24 < 0 || v27 < 0 ) /*0x57a709*/
        v45 = 1; /*0x57a70b*/
      v10 = (unsigned int)(aP2); /*0x57a710*/
    }
    if ( v10 < 0 ) /*0x57a717*/
    {
      v52[0] = (unsigned int)(aP2->outBuffer);
      v28 = (unsigned int)(IDA_SLOWORD(v52[0]) + ((int16_t)(IDA_HIWORD(v52[0]) + 1) << 9));
      if ( v28 >= (int *)(0x40000) || (v29 = *(int **)(dword_87F924 + 4 * v28)) == 0 ) /*0x57a754*/
      {
        dword_ABDC74 = v52[0] + 0x10000; /*0x57a75a*/
        v29 = unk_ABDC50; /*0x57a75f*/
      }
      v30 = (unsigned int)(((Cell *)(aP0))->GetTerrainMask((int *)(v29), 0));
      v52[0] = aP2->outBuffer; /*0x57a773*/
      v31 = IDA_SLOWORD(v52[0]) + ((int16_t)(IDA_HIWORD(v52[0]) + 2) << 9); /*0x57a791*/
      if ( v31 >= (int *)(0x40000) || (v32 = *(int **)(dword_87F924 + 4 * v31)) == 0 ) /*0x57a7a7*/
      {
        dword_ABDC74 = v52[0] + 0x20000; /*0x57a7ad*/
        v32 = unk_ABDC50; /*0x57a7b2*/
      }
      v33 = (unsigned int)(((Cell *)(aP0))->GetTerrainMask((int *)(v32), 0));
      if ( (v30 & 8) != 0 || (v33 & 8) != 0 ) /*0x57a7c8*/
        v45 = 1; /*0x57a7ca*/
      v10 = (unsigned int)(aP2); /*0x57a7cf*/
    }
    if ( ((unsigned int)(v10)& 0x88) == 0x88 || ((unsigned int)(v10)& 0x22) == 0x22 || v45 ) /*0x57a7ee*/
    {
      aP2 = aP2->outBuffer; /*0x57a801*/
      v34 = ((MapClass *)(&aP2))->GetTileDataField14(); /*0x57a805*/
      aP1a = aP1a; /*0x57a80a*/
      a5 = a5; /*0x57a80e*/
      if ( v34 > 0 && v34 != aP1a && !(unsigned char)a5 ) /*0x57a81c*/
        return 0; /*0x57a827*/
      g_CellPassabilityLUT = g_CellPassabilityLUT; /*0x57a82a*/
      aP2->u8_11A = 0; /*0x57a82f*/
      aP2->q038 = g_CellPassabilityLUT; /*0x57a838*/
      aP2 = aP2->outBuffer; /*0x57a846*/
      if ( a5 ) /*0x57a83b*/
        ((MapClass *)((int16_t *)&aP2))->SetObstruction(0); /*0x57a84b*/
      else
        MapClass::SetObstruction((int16_t *)&aP2,(gamemd::MapClass *)(aP1a)); /*0x57a85f*/
      v39 = 0; /*0x57a864*/
      for ( aP2 = 0; aP2 < (IUnknown *)(8); ++aP2 ) /*0x57a866*/
      {
        NeighbourContent = (unsigned int *)(((Cell *)((unsigned int *)aP2))->GetNeighbourContent((unsigned int)(v39)));
        v41 = NeighbourContent[9]; /*0x57a87a*/
        v52[0] = v41; /*0x57a87f*/
        v42 = IDA_SHIWORD(v41) + (int16_t)v41; /*0x57a88b*/
        if ( v42 > dword_ABED04 /*0x57a8b0*/
          && IDA_SLOWORD(v52[0]) - IDA_SHIWORD(v52[0]) < dword_ABED04
          && IDA_SHIWORD(v52[0]) - IDA_SLOWORD(v52[0]) < dword_ABED04
          && v42 <= dword_ABED08 )
        {
          v52[0] = v41; /*0x57a8b6*/
          v43 = (char *)(((Tactical *)((int16_t *)v52))->GetCellData()); /*0x57a8ba*/
          a5 = a5; /*0x57a8bf*/
          *((unsigned int *)v43 + 16) = -1; /*0x57a8c7*/
          RecursiveCellClassNeighbourUpdate(NeighbourContent, aP1a, a5); /*0x57a8d5*/
        }
        v39 = (IUnknown *)((unsigned int)(aP2 + 1));
      }
    }
  }
  return (gamemd::MapClass **)(1);
}
}
// 0x57ACF0
namespace gamemd {
MapClass * * GenerateMapClassCliffTransitions(void * a1, void * a2, void * a3, void * a4, void * a5, void * a6)
{
  int v7; // eax
  int v8; // edi
  int v9; // ebp
  int TerrainMask; // eax
  char v11; // bl
  int v12; // ebp
  int v13; // eax
  Cell *NeighbourContent; // esi
  Cell *v15; // edi
  char IsValidHeight; // al
  Cell *v17; // esi
  Cell *v18; // edi
  char v19; // al
  Cell *v20; // esi
  Cell *v21; // edi
  char v22; // al
  Cell *v23; // esi
  Cell *v24; // edi
  char v25; // al
  Cell *v26; // esi
  int v27; // ecx
  int16_t v28; // dx
  int16_t v29; // ax
  bool v31; // [esp+13h] [ebp-Dh]
  bool v32; // [esp+13h] [ebp-Dh]
  bool v33; // [esp+13h] [ebp-Dh]
  bool v34; // [esp+13h] [ebp-Dh]
  bool v35; // [esp+13h] [ebp-Dh]
  bool v36; // [esp+13h] [ebp-Dh]
  bool v37; // [esp+13h] [ebp-Dh]
  bool v38; // [esp+13h] [ebp-Dh]
  unsigned int v39[2]; // [esp+14h] [ebp-Ch] BYREF
  int v40; // [esp+1Ch] [ebp-4h] BYREF

  v39[1] = (unsigned int)(a1); /*0x57ad00*/
  v7 = Range_RandomInt(0, 5u); /*0x57ad04*/
  v8 = (int)(a4); /*0x57ad09*/
  v9 = v7; /*0x57ad0d*/
  if ( a4 == 2 ) /*0x57ad12*/
    TerrainMask = ((Cell *)(a1))->GetTerrainMask(&a3->Cell_field_0x0, 1); /*0x57ad1b*/
  else
    TerrainMask = ((Cell *)(a1))->GetTerrainMask(&a3->Cell_field_0x0, 0); /*0x57ad26*/
  v11 = TerrainMask; /*0x57ad2b*/
  if ( !TerrainMask ) /*0x57ad2f*/
    return (gamemd::MapClass **)(1); /*0x57ad2f*/
  if ( v8 != 2 ) /*0x57ad38*/
  {
    if ( (TerrainMask & 2) != 0 ) /*0x57ae12*/
    {
      v39[0] = 1; /*0x57ae1e*/
      NeighbourContent = (Cell *)((Cell *)(a3))->GetNeighbourContent(4u); /*0x57ae2b*/
      v15 = (Cell *)((Cell *)(NeighbourContent))->GetNeighbourContent(2u); /*0x57ae38*/
      v31 = (uint8_t)Cell::IsValidHeight(NeighbourContent) == 0; /*0x57ae43*/
      IsValidHeight = Cell::IsValidHeight(v15); /*0x57ae48*/
      if ( v31 ) /*0x57ae53*/
      {
        do /*0x57ae93*/
        {
          if ( !IsValidHeight ) /*0x57ae57*/
            break; /*0x57ae57*/
          ++v39[0]; /*0x57ae62*/
          NeighbourContent = (Cell *)((Cell *)(NeighbourContent))->GetNeighbourContent(4u); /*0x57ae6f*/
          v15 = (Cell *)((Cell *)(v15))->GetNeighbourContent(4u); /*0x57ae78*/
          v32 = (uint8_t)Cell::IsValidHeight(NeighbourContent) == 0; /*0x57ae83*/
          IsValidHeight = Cell::IsValidHeight(v15); /*0x57ae88*/
        }
        while ( v32 ); /*0x57ae93*/
      }
      if ( (v39[0] & 1) != 0 && v11 >= 0 || (v11 & 4) == 0 || (v11 & 0x18) != 0 ) /*0x57aeb3*/
      {
        v13 = 12; /*0x57aea1*/
        goto LABEL_71; /*0x57aea6*/
      }
      v13 = abs32(v9 % 3) + 9; /*0x57aec6*/
    }
    else if ( (TerrainMask & 0x20) != 0 ) /*0x57aed1*/
    {
      v39[0] = 1; /*0x57aedd*/
      v17 = (Cell *)((Cell *)(a3))->GetNeighbourContent(4u); /*0x57aeea*/
      v18 = (Cell *)((Cell *)(v17))->GetNeighbourContent(6u); /*0x57aef7*/
      v33 = (uint8_t)Cell::IsValidHeight(v17) == 0; /*0x57af02*/
      v19 = Cell::IsValidHeight(v18); /*0x57af07*/
      if ( v33 ) /*0x57af12*/
      {
        do /*0x57af52*/
        {
          if ( !v19 ) /*0x57af16*/
            break; /*0x57af16*/
          ++v39[0]; /*0x57af21*/
          v17 = (Cell *)((Cell *)(v17))->GetNeighbourContent(4u); /*0x57af2e*/
          v18 = (Cell *)((Cell *)(v18))->GetNeighbourContent(4u); /*0x57af37*/
          v34 = (uint8_t)Cell::IsValidHeight(v17) == 0; /*0x57af42*/
          v19 = Cell::IsValidHeight(v18); /*0x57af47*/
        }
        while ( v34 ); /*0x57af52*/
      }
      if ( (v39[0] & 1) != 0 && v11 >= 0 || (v11 & 0x10) == 0 || (v11 & 0xC) != 0 ) /*0x57af72*/
      {
        v13 = 28; /*0x57af60*/
        goto LABEL_71; /*0x57af65*/
      }
      v13 = v9 % 3 + 25; /*0x57af80*/
    }
    else if ( (TerrainMask & 8) != 0 ) /*0x57af8b*/
    {
      v39[0] = 1; /*0x57af97*/
      v20 = (Cell *)((Cell *)(a3))->GetNeighbourContent(2u); /*0x57afa4*/
      v21 = (Cell *)((Cell *)(v20))->GetNeighbourContent(4u); /*0x57afb1*/
      v35 = (uint8_t)Cell::IsValidHeight(v20) == 0; /*0x57afbc*/
      v22 = Cell::IsValidHeight(v21); /*0x57afc1*/
      if ( v35 ) /*0x57afcc*/
      {
        do /*0x57b00c*/
        {
          if ( !v22 ) /*0x57afd0*/
            break; /*0x57afd0*/
          ++v39[0]; /*0x57afdb*/
          v20 = (Cell *)((Cell *)(v20))->GetNeighbourContent(2u); /*0x57afe8*/
          v21 = (Cell *)((Cell *)(v21))->GetNeighbourContent(2u); /*0x57aff1*/
          v36 = (uint8_t)Cell::IsValidHeight(v20) == 0; /*0x57affc*/
          v22 = Cell::IsValidHeight(v21); /*0x57b001*/
        }
        while ( v36 ); /*0x57b00c*/
      }
      if ( (v39[0] & 1) != 0 || (v11 & 4) == 0 || (v11 & 3) != 0 ) /*0x57b027*/
      {
        v13 = 4; /*0x57b015*/
        goto LABEL_71; /*0x57b01a*/
      }
      v13 = v9 % 3 + 1; /*0x57b035*/
    }
    else
    {
      if ( (TerrainMask & 0x80u) == 0 ) /*0x57b03e*/
      {
  LABEL_61:
        if ( (v11 & 1) != 0 ) /*0x57b0f0*/
        {
          v12 = (v9 & 1) + 35; /*0x57b0f5*/
        }
        else if ( (v11 & 4) != 0 ) /*0x57b0fd*/
        {
          v12 = (v9 & 1) + 33; /*0x57b102*/
        }
        else if ( (v11 & 0x10) != 0 ) /*0x57b10a*/
        {
          v12 = (v9 & 1) + 39; /*0x57b10f*/
        }
        else
        {
          if ( (v11 & 0x40) == 0 ) /*0x57b117*/
            return (gamemd::MapClass **)(1); /*0x57b117*/
          v12 = (v9 & 1) + 37; /*0x57b120*/
        }
        goto LABEL_69; /*0x57b0f8*/
      }
      v39[0] = 1; /*0x57b04a*/
      v23 = (Cell *)((Cell *)(a3))->GetNeighbourContent(2u); /*0x57b057*/
      v24 = (Cell *)((Cell *)(v23))->GetNeighbourContent(0); /*0x57b064*/
      v37 = (uint8_t)Cell::IsValidHeight(v23) == 0; /*0x57b06f*/
      v25 = Cell::IsValidHeight(v24); /*0x57b074*/
      if ( v37 ) /*0x57b07f*/
      {
        do /*0x57b0bf*/
        {
          if ( !v25 ) /*0x57b083*/
            break; /*0x57b083*/
          ++v39[0]; /*0x57b08e*/
          v23 = (Cell *)((Cell *)(v23))->GetNeighbourContent(2u); /*0x57b09b*/
          v24 = (Cell *)((Cell *)(v24))->GetNeighbourContent(2u); /*0x57b0a4*/
          v38 = (uint8_t)Cell::IsValidHeight(v23) == 0; /*0x57b0af*/
          v25 = Cell::IsValidHeight(v24); /*0x57b0b4*/
        }
        while ( v38 ); /*0x57b0bf*/
      }
      if ( (v39[0] & 1) != 0 || (v11 & 1) == 0 || (v11 & 6) != 0 ) /*0x57b0d7*/
      {
        v13 = 20; /*0x57b0c8*/
        goto LABEL_71; /*0x57b0cd*/
      }
      v13 = v9 % 3 + 17; /*0x57b0e5*/
    }
    if ( v13 != -1 ) /*0x57b0eb*/
      goto LABEL_70; /*0x57b0eb*/
    goto LABEL_61; /*0x57b0eb*/
  }
  if ( (TerrainMask & 0xA0) == 0xA0 )
  {
    if ( (TerrainMask & 0x11) == 0x11 ) /*0x57ad50*/
    {
      v12 = (v9 & 1) + 23; /*0x57ad55*/
  LABEL_69:
      v13 = v12; /*0x57b123*/
  LABEL_70:
      if ( v13 <= 0 ) /*0x57b127*/
        return (gamemd::MapClass **)(1); /*0x57b127*/
      goto LABEL_71; /*0x57b127*/
    }
    v13 = (TerrainMask & 1) != 0 ? 21 : 30;
  }
  else if ( (TerrainMask & 0x82) == 0x82 )
  {
    if ( (TerrainMask & 0x44) == 0x44 ) /*0x57ad86*/
    {
      v12 = (v9 & 1) + 15; /*0x57ad8b*/
      goto LABEL_69; /*0x57ad8e*/
    }
    v13 = (TerrainMask & 4) != 0 ? 14 : 22;
  }
  else if ( (TerrainMask & 0xA) == 0xA )
  {
    if ( (TerrainMask & 0x11) == 0x11 ) /*0x57adb8*/
    {
      v12 = (v9 & 1) + 7; /*0x57adbd*/
      goto LABEL_69; /*0x57adc0*/
    }
    v13 = (TerrainMask & 1) != 0 ? 13 : 6;
  }
  else
  {
    if ( (TerrainMask & 0x28) != 0x28 ) /*0x57ade1*/
      return (gamemd::MapClass **)(1); /*0x57ade1*/
    if ( (TerrainMask & 0x44) == 0x44 ) /*0x57adee*/
    {
      v12 = (v9 & 1) + 31; /*0x57adf3*/
      goto LABEL_69; /*0x57adf6*/
    }
    v13 = (TerrainMask & 4) != 0 ? 5 : 29;
  }
  LABEL_71:
  v26 = (gamemd::Cell *)(a3); /*0x57b12d*/
  *(unsigned int *)&stru_87F5F0.__pad_E12[1422] = *(unsigned int *)(*(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 328) + 4 * (v13 + dword_ABAD28) - 4); /*0x57b143*/
  v27 = *(unsigned int *)&a3->__pad_1C[8]; /*0x57b149*/
  v28 = g_MissionQueueFrame.briefing[v13 + 71]; /*0x57b14c*/
  v29 = IDA_HIWORD(g_MissionQueueFrame.briefing[v13 + 71]); /*0x57b154*/
  IDA_LOWORD(a3) = v27 + v28; /*0x57b168*/
  IDA_HIWORD(a3) = IDA_HIWORD(v27) + v29; /*0x57b16d*/
  v39[0] = (unsigned int)(a3); /*0x57b17e*/
  ((Tactical *)((Tactical *)&stru_87F5F0.__pad_58[416]))->MouseMove(&v40, v39); /*0x57b189*/
  IDA_LOBYTE(a3) = 1; /*0x57b192*/
  if ( a4 == 1 ) /*0x57b19a*/
  {
    GenerateTerrainMap(0, 0,(gamemd::MouseClass *)(v26->Cell_field_0x11B[0]),(gamemd::MouseClass *)(a5),(gamemd::MouseClass *)(&a3), a6); /*0x57b1b7*/
  }
  else
  {
    if ( a4 != 2 ) /*0x57b1bc*/
      return (gamemd::MapClass **)(1); /*0x57b1bc*/
    GenerateTerrainMap((gamemd::MouseClass *)(dword_ABAD28),(gamemd::MouseClass *)(dword_ABAD28 + 41),(gamemd::MouseClass *)(v26->Cell_field_0x11B[0]), a5, &a3, a6); /*0x57b1e3*/
  }
  return (gamemd::MapClass **)((unsigned char)a3 != 0); /*0x57b1ee*/
}
}
// 0x57B440
namespace gamemd {
MapClass * * GenerateTerrainMap(MouseClass * aP0, MouseClass * aP1, MouseClass * aP2, MouseClass * aP3, MouseClass * aP4, MouseClass * aP5)
{
  int v6; // ebp
  int v7; // edi
  int v8; // ecx
  int16_t v9; // ax
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  unsigned int v13; // eax
  unsigned int *v14; // esi
  int v15; // ebx
  int v16; // ebp
  int v17; // eax
  int v18; // edi
  int v19; // eax
  int v20; // ecx
  int64_t v21; // rax
  int v22; // eax
  int v23; // edi
  int v24; // ebp
  int v25; // eax
  int v26; // ecx
  int v28; // eax
  int v29; // [esp+10h] [ebp-1Ch]
  int v30; // [esp+14h] [ebp-18h]
  int v31; // [esp+18h] [ebp-14h] BYREF
  int v32; // [esp+1Ch] [ebp-10h]
  int v33; // [esp+20h] [ebp-Ch]
  int v34; // [esp+24h] [ebp-8h]
  int v35; // [esp+28h] [ebp-4h]

  if ( (*(int (**)(int))(*(unsigned int *)dword_880990 + 44))(dword_880990) != 18 ) /*0x57b455*/
    return 0; /*0x57b455*/
  if ( aP5 ) /*0x57b461*/
    aP3 = 0; /*0x57b463*/
  v6 = dword_880990; /*0x57b46b*/
  v29 = dword_880990; /*0x57b473*/
  v34 = (*(int (**)(int))(*(unsigned int *)dword_880990 + 156))(dword_880990); /*0x57b482*/
  if ( !v34 ) /*0x57b486*/
    return 0; /*0x57b486*/
  v30 = 0; /*0x57b492*/
  if ( *(int *)(v6 + 744) <= 0 ) /*0x57b49c*/
    return 1; /*0x57b70e*/
  v7 = dword_87F8DC; /*0x57b4a2*/
  while ( 1 ) /*0x57b4a8*/
  {
    v8 = *(unsigned int *)(v6 + 740); /*0x57b4a8*/
    v9 = 0; /*0x57b4ae*/
    v32 = 0; /*0x57b4b2*/
    if ( v8 > 0 ) /*0x57b4b6*/
      break; /*0x57b4b6*/
  LABEL_39:
    if ( ++v30 >= *(unsigned int *)(v6 + 744) ) /*0x57b6a4*/
      return 1; /*0x57b6b3*/
  }
  while ( 1 ) /*0x57b4d0*/
  {
    IDA_LOWORD(v33) = v9 + dword_88095C; /*0x57b4d0*/
    v10 = (int16_t)(v9 + dword_88095C); /*0x57b4d5*/
    IDA_HIWORD(v33) = IDA_HIWORD(dword_88095C) + v30; /*0x57b4d8*/
    v11 = (int16_t)(IDA_HIWORD(dword_88095C) + v30); /*0x57b4e1*/
    v31 = v33; /*0x57b4e4*/
    v12 = (int16_t)v10 + v11; /*0x57b4e8*/
    if ( v12 <= v7 || v10 - v11 >= v7 || v11 - v10 >= v7 || v12 > v7 + 2 * dword_87F8E0 ) /*0x57b516*/
      goto LABEL_38; /*0x57b516*/
    v13 = v10 + (v11 << 9); /*0x57b51f*/
    if ( v13 >= 0x40000 || (v14 = *(unsigned int **)(dword_87F924 + 4 * v13)) == 0 ) /*0x57b535*/
    {
      dword_ABDC74 = v33; /*0x57b537*/
      v14 = (unsigned int *)(&unk_ABDC50); /*0x57b53d*/
    }
    v15 = v32 + v30 * *(unsigned int *)(v6 + 740); /*0x57b555*/
    v35 = *(unsigned int *)(v34 + 4 * v15 + 16); /*0x57b55d*/
    v16 = v35; /*0x57b557*/
    if ( v35 ) /*0x57b561*/
      break; /*0x57b561*/
  LABEL_37:
    v6 = v29; /*0x57b678*/
  LABEL_38:
    v26 = *(unsigned int *)(v6 + 740); /*0x57b67c*/
    v9 = ++v32; /*0x57b686*/
    if ( v32 >= v26 ) /*0x57b68d*/
      goto LABEL_39; /*0x57b68d*/
  }
  v17 = MapClass::GetTileDataField14((gamemd::MapResourceClass *)(&v31)); /*0x57b571*/
  if ( aP5 ) /*0x57b57c*/
  {
    v17 = 0; /*0x57b57e*/
  LABEL_18:
    v18 = (int)(aP3); /*0x57b580*/
    goto LABEL_19; /*0x57b580*/
  }
  if ( v17 <= 0 ) /*0x57b5e0*/
    goto LABEL_18; /*0x57b5e0*/
  v18 = (int)(aP3); /*0x57b5e2*/
  if ( v17 == aP3 ) /*0x57b5e8*/
    goto LABEL_20; /*0x57b5e8*/
  if ( aP3 != -1 ) /*0x57b5ed*/
  {
    v23 = v14[14] - dword_ABAD28; /*0x57b603*/
    v24 = *(unsigned int *)(v29 + 660) - dword_ABAD28; /*0x57b605*/
    if ( !Cell::IsEmpty(v14) ) /*0x57b60e*/
    {
      if ( v23 < 0 || v24 < 0 || v23 > 41 || v24 > 41 || (&dword_82A7F4)[v23] != (&dword_82A7F4)[v24] ) /*0x57b703*/
      {
        *aP4 = 0; /*0x57b718*/
        return 0; /*0x57b721*/
      }
      return 1; /*0x57b703*/
    }
    MapClass::SetObstruction((int16_t *)(&v31), aP3); /*0x57b623*/
    v16 = v35; /*0x57b628*/
    goto LABEL_32; /*0x57b628*/
  }
  LABEL_19:
  if ( v17 == v18 ) /*0x57b586*/
  {
  LABEL_20:
    v19 = v14[14] - dword_ABAD28; /*0x57b58c*/
    v20 = *(unsigned int *)(v29 + 660) - dword_ABAD28; /*0x57b5a1*/
    if ( v19 >= 0 && v20 >= 0 && v19 <= 41 && v20 <= 41 ) /*0x57b5b7*/
    {
      v21 = (&dword_82A89C)[v19] - (&dword_82A89C)[v20]; /*0x57b5c9*/
      v22 = (IDA_HIDWORD(v21) ^ v21) - IDA_HIDWORD(v21); /*0x57b5cc*/
      if ( v22 >= 3 && v22 <= 5 ) /*0x57b5d6*/
      {
        *aP4 = 0; /*0x57b72b*/
        return 0; /*0x57b734*/
      }
    }
    goto LABEL_32; /*0x57b5d6*/
  }
  if ( !Cell::IsEmpty(v14) ) /*0x57b6bf*/
  {
    if ( v18 != -1 ) /*0x57b6d9*/
      goto LABEL_58; /*0x57b6d9*/
    goto LABEL_36; /*0x57b6d9*/
  }
  MapClass::SetObstruction((int16_t *)(&v31), v18); /*0x57b6cc*/
  LABEL_32:
  if ( Cell::IsEmpty(v14) || (v25 = v14[14], v25 >= aP0) && v25 <= aP1 ) /*0x57b64a*/
  {
    v14[14] = *(unsigned int *)(v29 + 660); /*0x57b65e*/
    *((unsigned char *)v14 + 282) = v15; /*0x57b661*/
    *((unsigned char *)v14 + 283) = aP2 + *(unsigned char *)(v16 + 40); /*0x57b66c*/
  LABEL_36:
    v7 = dword_87F8DC; /*0x57b672*/
    goto LABEL_37; /*0x57b672*/
  }
  if ( (uint8_t)CellClass::IsTerrainType(v14) && (uint8_t)Map_Helper(*(unsigned int *)(v29 + 660), v15) /*0x57b774*/
    || (v28 = *(unsigned int *)(v29 + 660), v28 >= dword_ABAD28) && v28 < dword_ABAD28 + 42 && CellLand::IsBuildable((int)v14) )
  {
  LABEL_58:
    *aP4 = 0; /*0x57b77d*/
  }
  return 0; /*0x57b6aa*/
}
}
// 0x57C870
namespace gamemd {
void sub_57C870(int a1)
{
  int v1; // edi
  int16_t v2; // bx
  int16_t v3; // dx
  int v4; // eax
  bool v5; // sf
  int v6; // eax
  unsigned int *v7; // eax
  int v8; // eax
  int16_t v9; // dx
  int v10; // eax
  int v11; // eax
  unsigned int *v12; // eax
  int v13; // eax
  int v15; // [esp+10h] [ebp-Ch]
  int v16; // [esp+10h] [ebp-Ch]
  void *v17; // [esp+14h] [ebp-8h]
  int v18; // [esp+20h] [ebp+4h]
  int16_t v19; // [esp+22h] [ebp+6h]

  v1 = a1; /*0x57c877*/
  v2 = a1; /*0x57c885*/
  do /*0x57c8e3*/
  {
    v3 = IDA_HIWORD(a1) + IDA_HIWORD(dword_89F688[0]); /*0x57c895*/
    IDA_LOWORD(v15) = IDA_LOWORD(dword_89F688[0]) + v2; /*0x57c89a*/
    IDA_HIWORD(v15) = IDA_HIWORD(a1) + IDA_HIWORD(dword_89F688[0]); /*0x57c8a5*/
    v2 += IDA_LOWORD(dword_89F688[0]); /*0x57c8aa*/
    v4 = (int16_t)(IDA_HIWORD(a1) + IDA_HIWORD(dword_89F688[0])) << 9; /*0x57c8ae*/
    v5 = v2 + v4 < 0; /*0x57c8b1*/
    v6 = v2 + v4; /*0x57c8b1*/
    IDA_HIWORD(a1) += IDA_HIWORD(dword_89F688[0]); /*0x57c8b3*/
    if ( v5 || v6 >= 0x40000 || (v7 = *(unsigned int **)(dword_87F924 + 4 * v6)) == 0 ) /*0x57c8cb*/
    {
      dword_ABDC74 = v15; /*0x57c8cd*/
      v7 = unk_ABDC50; /*0x57c8d3*/
    }
    v8 = v7[17]; /*0x57c8d8*/
  }
  while ( v8 >= 74 && v8 <= 101 ); /*0x57c8e3*/
  v19 = IDA_HIWORD(v1); /*0x57c8eb*/
  IDA_LOWORD(v17) = v15 + dword_89F698; /*0x57c8f9*/
  IDA_HIWORD(v17) = v3 + IDA_HIWORD(dword_89F698); /*0x57c904*/
  do /*0x57c95d*/
  {
    v9 = v19 + IDA_HIWORD(dword_89F698); /*0x57c90f*/
    IDA_LOWORD(v16) = v1 + dword_89F698; /*0x57c914*/
    IDA_HIWORD(v16) = v19 + IDA_HIWORD(dword_89F698); /*0x57c91f*/
    IDA_LOWORD(v1) = v1 + dword_89F698; /*0x57c924*/
    v10 = (int16_t)(v19 + IDA_HIWORD(dword_89F698)) << 9; /*0x57c928*/
    v5 = (int16_t)v1 + v10 < 0; /*0x57c92b*/
    v11 = (int16_t)v1 + v10; /*0x57c92b*/
    v19 += IDA_HIWORD(dword_89F698); /*0x57c92d*/
    if ( v5 || v11 >= 0x40000 || (v12 = *(unsigned int **)(dword_87F924 + 4 * v11)) == 0 ) /*0x57c945*/
    {
      dword_ABDC74 = v16; /*0x57c947*/
      v12 = unk_ABDC50; /*0x57c94d*/
    }
    v13 = v12[17]; /*0x57c952*/
  }
  while ( v13 >= 74 && v13 <= 101 ); /*0x57c95d*/
  IDA_LOWORD(v18) = IDA_LOWORD(dword_89F688[0]) + v16; /*0x57c968*/
  IDA_HIWORD(v18) = IDA_HIWORD(dword_89F688[0]) + v9; /*0x57c96d*/
  return UpdateTeamsInAreaMap(v17, v18); /*0x57c985*/
}
}
// 0x57C990
namespace gamemd {
void sub_57C990(int a1)
{
  int v1; // edi
  int16_t v2; // bx
  int16_t v3; // dx
  int v4; // eax
  bool v5; // sf
  int v6; // eax
  unsigned int *v7; // eax
  int v8; // eax
  int16_t v9; // dx
  int v10; // eax
  int v11; // eax
  unsigned int *v12; // eax
  int v13; // eax
  int v15; // [esp+10h] [ebp-Ch]
  int v16; // [esp+10h] [ebp-Ch]
  void *v17; // [esp+14h] [ebp-8h]
  int v18; // [esp+20h] [ebp+4h]
  int16_t v19; // [esp+22h] [ebp+6h]

  v1 = a1; /*0x57c997*/
  v2 = a1; /*0x57c9a5*/
  do /*0x57ca03*/
  {
    v3 = IDA_HIWORD(a1) + IDA_HIWORD(dword_89F6A0); /*0x57c9b5*/
    IDA_LOWORD(v15) = dword_89F6A0 + v2; /*0x57c9ba*/
    IDA_HIWORD(v15) = IDA_HIWORD(a1) + IDA_HIWORD(dword_89F6A0); /*0x57c9c5*/
    v2 += dword_89F6A0; /*0x57c9ca*/
    v4 = (int16_t)(IDA_HIWORD(a1) + IDA_HIWORD(dword_89F6A0)) << 9; /*0x57c9ce*/
    v5 = v2 + v4 < 0; /*0x57c9d1*/
    v6 = v2 + v4; /*0x57c9d1*/
    IDA_HIWORD(a1) += IDA_HIWORD(dword_89F6A0); /*0x57c9d3*/
    if ( v5 || v6 >= 0x40000 || (v7 = *(unsigned int **)(dword_87F924 + 4 * v6)) == 0 ) /*0x57c9eb*/
    {
      dword_ABDC74 = v15; /*0x57c9ed*/
      v7 = unk_ABDC50; /*0x57c9f3*/
    }
    v8 = v7[17]; /*0x57c9f8*/
  }
  while ( v8 >= 74 && v8 <= 101 ); /*0x57ca03*/
  v19 = IDA_HIWORD(v1); /*0x57ca0b*/
  IDA_LOWORD(v17) = v15 + dword_89F690; /*0x57ca19*/
  IDA_HIWORD(v17) = v3 + IDA_HIWORD(dword_89F690); /*0x57ca24*/
  do /*0x57ca7d*/
  {
    v9 = v19 + IDA_HIWORD(dword_89F690); /*0x57ca2f*/
    IDA_LOWORD(v16) = v1 + dword_89F690; /*0x57ca34*/
    IDA_HIWORD(v16) = v19 + IDA_HIWORD(dword_89F690); /*0x57ca3f*/
    IDA_LOWORD(v1) = v1 + dword_89F690; /*0x57ca44*/
    v10 = (int16_t)(v19 + IDA_HIWORD(dword_89F690)) << 9; /*0x57ca48*/
    v5 = (int16_t)v1 + v10 < 0; /*0x57ca4b*/
    v11 = (int16_t)v1 + v10; /*0x57ca4b*/
    v19 += IDA_HIWORD(dword_89F690); /*0x57ca4d*/
    if ( v5 || v11 >= 0x40000 || (v12 = *(unsigned int **)(dword_87F924 + 4 * v11)) == 0 ) /*0x57ca65*/
    {
      dword_ABDC74 = v16; /*0x57ca67*/
      v12 = unk_ABDC50; /*0x57ca6d*/
    }
    v13 = v12[17]; /*0x57ca72*/
  }
  while ( v13 >= 74 && v13 <= 101 ); /*0x57ca7d*/
  IDA_LOWORD(v18) = dword_89F6A0 + v16; /*0x57ca88*/
  IDA_HIWORD(v18) = IDA_HIWORD(dword_89F6A0) + v9; /*0x57ca8d*/
  return UpdateTeamsInAreaMap(v17, v18); /*0x57caa5*/
}
}
// 0x57DAF0
namespace gamemd {
void sub_57DAF0(int a1)
{
  int v1; // edi
  int16_t v2; // bx
  int16_t v3; // dx
  int v4; // eax
  bool v5; // sf
  int v6; // eax
  unsigned int *v7; // eax
  int v8; // eax
  int16_t v9; // dx
  int v10; // eax
  int v11; // eax
  unsigned int *v12; // eax
  int v13; // eax
  int v15; // [esp+10h] [ebp-Ch]
  int v16; // [esp+10h] [ebp-Ch]
  void *v17; // [esp+14h] [ebp-8h]
  int v18; // [esp+20h] [ebp+4h]
  int16_t v19; // [esp+22h] [ebp+6h]

  v1 = a1; /*0x57daf7*/
  v2 = a1; /*0x57db05*/
  do /*0x57db67*/
  {
    v3 = IDA_HIWORD(a1) + IDA_HIWORD(dword_89F688[0]); /*0x57db15*/
    IDA_LOWORD(v15) = IDA_LOWORD(dword_89F688[0]) + v2; /*0x57db1a*/
    IDA_HIWORD(v15) = IDA_HIWORD(a1) + IDA_HIWORD(dword_89F688[0]); /*0x57db25*/
    v2 += IDA_LOWORD(dword_89F688[0]); /*0x57db2a*/
    v4 = (int16_t)(IDA_HIWORD(a1) + IDA_HIWORD(dword_89F688[0])) << 9; /*0x57db2e*/
    v5 = v2 + v4 < 0; /*0x57db31*/
    v6 = v2 + v4; /*0x57db31*/
    IDA_HIWORD(a1) += IDA_HIWORD(dword_89F688[0]); /*0x57db33*/
    if ( v5 || v6 >= 0x40000 || (v7 = *(unsigned int **)(dword_87F924 + 4 * v6)) == 0 ) /*0x57db4b*/
    {
      dword_ABDC74 = v15; /*0x57db4d*/
      v7 = unk_ABDC50; /*0x57db53*/
    }
    v8 = v7[17]; /*0x57db58*/
  }
  while ( v8 >= 205 && v8 <= 232 ); /*0x57db67*/
  v19 = IDA_HIWORD(v1); /*0x57db6f*/
  IDA_LOWORD(v17) = v15 + dword_89F698; /*0x57db7d*/
  IDA_HIWORD(v17) = v3 + IDA_HIWORD(dword_89F698); /*0x57db88*/
  do /*0x57dbe5*/
  {
    v9 = v19 + IDA_HIWORD(dword_89F698); /*0x57db93*/
    IDA_LOWORD(v16) = v1 + dword_89F698; /*0x57db98*/
    IDA_HIWORD(v16) = v19 + IDA_HIWORD(dword_89F698); /*0x57dba3*/
    IDA_LOWORD(v1) = v1 + dword_89F698; /*0x57dba8*/
    v10 = (int16_t)(v19 + IDA_HIWORD(dword_89F698)) << 9; /*0x57dbac*/
    v5 = (int16_t)v1 + v10 < 0; /*0x57dbaf*/
    v11 = (int16_t)v1 + v10; /*0x57dbaf*/
    v19 += IDA_HIWORD(dword_89F698); /*0x57dbb1*/
    if ( v5 || v11 >= 0x40000 || (v12 = *(unsigned int **)(dword_87F924 + 4 * v11)) == 0 ) /*0x57dbc9*/
    {
      dword_ABDC74 = v16; /*0x57dbcb*/
      v12 = unk_ABDC50; /*0x57dbd1*/
    }
    v13 = v12[17]; /*0x57dbd6*/
  }
  while ( v13 >= 205 && v13 <= 232 ); /*0x57dbe5*/
  IDA_LOWORD(v18) = IDA_LOWORD(dword_89F688[0]) + v16; /*0x57dbf0*/
  IDA_HIWORD(v18) = IDA_HIWORD(dword_89F688[0]) + v9; /*0x57dbf5*/
  return UpdateTeamsInAreaMap(v17, v18); /*0x57dc0d*/
}
}
// 0x57DC20
namespace gamemd {
void sub_57DC20(int a1)
{
  int v1; // edi
  int16_t v2; // bx
  int16_t v3; // dx
  int v4; // eax
  bool v5; // sf
  int v6; // eax
  unsigned int *v7; // eax
  int v8; // eax
  int16_t v9; // dx
  int v10; // eax
  int v11; // eax
  unsigned int *v12; // eax
  int v13; // eax
  int v15; // [esp+10h] [ebp-Ch]
  int v16; // [esp+10h] [ebp-Ch]
  void *v17; // [esp+14h] [ebp-8h]
  int v18; // [esp+20h] [ebp+4h]
  int16_t v19; // [esp+22h] [ebp+6h]

  v1 = a1; /*0x57dc27*/
  v2 = a1; /*0x57dc35*/
  do /*0x57dc97*/
  {
    v3 = IDA_HIWORD(a1) + IDA_HIWORD(dword_89F6A0); /*0x57dc45*/
    IDA_LOWORD(v15) = dword_89F6A0 + v2; /*0x57dc4a*/
    IDA_HIWORD(v15) = IDA_HIWORD(a1) + IDA_HIWORD(dword_89F6A0); /*0x57dc55*/
    v2 += dword_89F6A0; /*0x57dc5a*/
    v4 = (int16_t)(IDA_HIWORD(a1) + IDA_HIWORD(dword_89F6A0)) << 9; /*0x57dc5e*/
    v5 = v2 + v4 < 0; /*0x57dc61*/
    v6 = v2 + v4; /*0x57dc61*/
    IDA_HIWORD(a1) += IDA_HIWORD(dword_89F6A0); /*0x57dc63*/
    if ( v5 || v6 >= 0x40000 || (v7 = *(unsigned int **)(dword_87F924 + 4 * v6)) == 0 ) /*0x57dc7b*/
    {
      dword_ABDC74 = v15; /*0x57dc7d*/
      v7 = unk_ABDC50; /*0x57dc83*/
    }
    v8 = v7[17]; /*0x57dc88*/
  }
  while ( v8 >= 205 && v8 <= 232 ); /*0x57dc97*/
  v19 = IDA_HIWORD(v1); /*0x57dc9f*/
  IDA_LOWORD(v17) = v15 + dword_89F690; /*0x57dcad*/
  IDA_HIWORD(v17) = v3 + IDA_HIWORD(dword_89F690); /*0x57dcb8*/
  do /*0x57dd15*/
  {
    v9 = v19 + IDA_HIWORD(dword_89F690); /*0x57dcc3*/
    IDA_LOWORD(v16) = v1 + dword_89F690; /*0x57dcc8*/
    IDA_HIWORD(v16) = v19 + IDA_HIWORD(dword_89F690); /*0x57dcd3*/
    IDA_LOWORD(v1) = v1 + dword_89F690; /*0x57dcd8*/
    v10 = (int16_t)(v19 + IDA_HIWORD(dword_89F690)) << 9; /*0x57dcdc*/
    v5 = (int16_t)v1 + v10 < 0; /*0x57dcdf*/
    v11 = (int16_t)v1 + v10; /*0x57dcdf*/
    v19 += IDA_HIWORD(dword_89F690); /*0x57dce1*/
    if ( v5 || v11 >= 0x40000 || (v12 = *(unsigned int **)(dword_87F924 + 4 * v11)) == 0 ) /*0x57dcf9*/
    {
      dword_ABDC74 = v16; /*0x57dcfb*/
      v12 = unk_ABDC50; /*0x57dd01*/
    }
    v13 = v12[17]; /*0x57dd06*/
  }
  while ( v13 >= 205 && v13 <= 232 ); /*0x57dd15*/
  IDA_LOWORD(v18) = dword_89F6A0 + v16; /*0x57dd20*/
  IDA_HIWORD(v18) = IDA_HIWORD(dword_89F6A0) + v9; /*0x57dd25*/
  return UpdateTeamsInAreaMap(v17, v18); /*0x57dd3d*/
}
}
// 0x57DD50
namespace gamemd {
AbstractClass * * CreateCliffRampMap(IUnknown * aP0)
{
  int16_t *v1; // ebp
  int result; // eax
  unsigned int v3; // eax
  int v4; // eax
  CellClass *v5; // edi
  int v6; // eax
  unsigned int v7; // eax
  int v8; // eax
  unsigned int v9; // eax
  CellClass *v10; // eax
  int *PlacementRect; // esi
  int *StartCoords; // eax
  int v13; // ebp
  int v14; // ecx
  int v15; // edx
  int v16; // edi
  int v17; // eax
  int v18; // esi
  int v19; // ecx
  unsigned int v20; // ecx
  CellClass *v21; // ecx
  int v22; // ecx
  int v23; // ebx
  int v24; // edi
  struct tagRECT *v26; // esi
  struct tagRECT *v27; // eax
  LONG left; // edx
  LONG top; // edi
  LONG v30; // ecx
  LONG v31; // esi
  int v32; // eax
  LONG v33; // esi
  LONG v34; // esi
  int *v35; // eax
  unsigned int *v36; // eax
  int *v37; // eax
  int *v38; // eax
  unsigned short *v39; // eax
  int v42; // [esp-8h] [ebp-E4h]
  int v43; // [esp-4h] [ebp-E0h]
  const RECT *v44; // [esp+0h] [ebp-DCh]
  const RECT *v45; // [esp+4h] [ebp-D8h]
  int v46; // [esp+10h] [ebp-CCh]
  CellClass *v47; // [esp+10h] [ebp-CCh]
  int right; // [esp+14h] [ebp-C8h] BYREF
  int v49; // [esp+18h] [ebp-C4h]
  int v50[2]; // [esp+1Ch] [ebp-C0h] BYREF
  int v51; // [esp+24h] [ebp-B8h]
  unsigned int v52[2]; // [esp+28h] [ebp-B4h] BYREF
  struct tagRECT rcDst; // [esp+30h] [ebp-ACh] BYREF
  int v54; // [esp+40h] [ebp-9Ch]
  int v55[2]; // [esp+44h] [ebp-98h] BYREF
  LONG v56; // [esp+4Ch] [ebp-90h]
  LONG bottom; // [esp+50h] [ebp-8Ch]
  int v58; // [esp+54h] [ebp-88h]
  int v59; // [esp+58h] [ebp-84h]
  int v60; // [esp+5Ch] [ebp-80h]
  int v61; // [esp+60h] [ebp-7Ch]
  unsigned int v62[2]; // [esp+64h] [ebp-78h] BYREF
  unsigned int v63[16]; // [esp+6Ch] [ebp-70h] BYREF
  int v64[4]; // [esp+ACh] [ebp-30h] BYREF
  int v65[4]; // [esp+CCh] [ebp-10h] BYREF

  v1 = aP0; /*0x57dd5d*/
  result = *((unsigned int *)((CellCoord *)(&dword_87F7E8))->To_CellObj(aP0) + 17); /*0x57dd6c*/
  if ( result >= 74 && result <= 101 ) /*0x57dd7b*/
  {
    v3 = *aP0 + (aP0[1] << 9); /*0x57dd92*/
    if ( v3 < 0x40000 && (v4 = *(unsigned int *)(dword_87F924 + 4 * v3)) != 0 ) /*0x57dda2*/
    {
      v5 = (CellClass *)v4; /*0x57dda4*/
      v49 = v4; /*0x57dda6*/
    }
    else
    {
      v6 = *(unsigned int *)aP0; /*0x57ddac*/
      v49 = (int)&unk_ABDC50; /*0x57ddaf*/
      v5 = &unk_ABDC50; /*0x57ddb7*/
      unk_ABDC50.smudgeTypeIndex = v6; /*0x57ddbb*/
    }
    v46 = *(unsigned int *)aP0 - 0x10000; /*0x57ddcf*/
    v7 = *aP0 + (IDA_SHIWORD(v46) << 9); /*0x57dddd*/
    if ( v7 < 0x40000 && (v8 = *(unsigned int *)(dword_87F924 + 4 * v7)) != 0 ) /*0x57dded*/
    {
      v51 = v8; /*0x57ddef*/
    }
    else
    {
      v51 = (int)&unk_ABDC50; /*0x57ddf9*/
      unk_ABDC50.smudgeTypeIndex = v46; /*0x57de01*/
    }
    v9 = *aP0 + ((int16_t)((unsigned int)(*(unsigned int *)aP0 + 0x10000) >> 16) << 9); /*0x57de23*/
    if ( v9 < 0x40000 && (v10 = *(CellClass **)(dword_87F924 + 4 * v9)) != 0 ) /*0x57de33*/
    {
      v47 = v10; /*0x57de35*/
    }
    else
    {
      v47 = &unk_ABDC50; /*0x57de3f*/
      unk_ABDC50.smudgeTypeIndex = *(unsigned int *)aP0 + 0x10000; /*0x57de47*/
    }
    IDA_LOBYTE(v54) = 0; /*0x57de54*/
    PlacementRect = BuildingClass::GetPlacementRect((int)v5, v55); /*0x57de62*/
    StartCoords = ((House *)((int)v5))->GetStartCoords(&rcDst); /*0x57de67*/
    if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x57de7c*/
    {
      v19 = *PlacementRect; /*0x57df02*/
      v15 = PlacementRect[1]; /*0x57df04*/
      v16 = PlacementRect[2]; /*0x57df07*/
      v17 = PlacementRect[3]; /*0x57df0a*/
    }
    else
    {
      right = PlacementRect[2]; /*0x57de87*/
      if ( right <= 0 || (v50[0] = PlacementRect[3], v50[0] <= 0) ) /*0x57de96*/
      {
        v19 = *StartCoords; /*0x57def5*/
        v15 = StartCoords[1]; /*0x57def7*/
        v16 = StartCoords[2]; /*0x57defa*/
        v17 = StartCoords[3]; /*0x57defd*/
      }
      else
      {
        v13 = *StartCoords; /*0x57de98*/
        v14 = *PlacementRect; /*0x57de9a*/
        v15 = StartCoords[1]; /*0x57de9c*/
        v16 = StartCoords[2]; /*0x57de9f*/
        v17 = StartCoords[3]; /*0x57dea2*/
        if ( v13 > *PlacementRect ) /*0x57dea7*/
        {
          v16 += v13 - v14; /*0x57deab*/
          v13 = *PlacementRect; /*0x57dead*/
        }
        v18 = PlacementRect[1]; /*0x57deaf*/
        v52[0] = v18; /*0x57deb4*/
        if ( v15 > v18 ) /*0x57deb8*/
        {
          v17 += v15 - v18; /*0x57debc*/
          v15 = v18; /*0x57debe*/
        }
        if ( v16 + v13 < v14 + right ) /*0x57dec8*/
          v16 = v14 - v13 + right + 1; /*0x57ded0*/
        if ( v17 + v15 < v50[0] + v52[0] ) /*0x57dee3*/
          v17 = v50[0] + v52[0] - v15 + 1; /*0x57dee8*/
        v19 = v13; /*0x57deea*/
        v1 = aP0; /*0x57deec*/
      }
    }
    v58 = v19; /*0x57df0d*/
    v63[2] = 82; /*0x57df16*/
    v63[6] = 82; /*0x57df1a*/
    v61 = v17; /*0x57df26*/
    v63[8] = 81; /*0x57df2d*/
    v63[9] = 81; /*0x57df34*/
    v59 = v15; /*0x57df3d*/
    v60 = v16; /*0x57df41*/
    v63[0] = -1; /*0x57df45*/
    v63[1] = 79; /*0x57df49*/
    v63[3] = -1; /*0x57df51*/
    v63[4] = 78; /*0x57df55*/
    v63[5] = 80; /*0x57df5d*/
    v63[7] = -1; /*0x57df68*/
    v63[10] = 100; /*0x57df6f*/
    memset(&v63[11], 255, 20); /*0x57df7a*/
    result = Map_Create(v1); /*0x57df9d*/
    v20 = *v1 + (v1[1] << 9); /*0x57dfad*/
    if ( v20 >= 0x40000 || (v21 = *(CellClass **)(dword_87F924 + 4 * v20)) == 0 ) /*0x57dfc4*/
    {
      unk_ABDC50.smudgeTypeIndex = *(unsigned int *)v1; /*0x57dfc9*/
      v21 = &unk_ABDC50; /*0x57dfcf*/
    }
    v22 = *(unsigned int *)&v21->__pad_28[28]; /*0x57dfd4*/
    if ( result > 0 ) /*0x57dfd9*/
    {
      if ( v22 < 92 ) /*0x57dfe2*/
      {
        v23 = v63[result]; /*0x57dffd*/
        if ( v22 == v23 ) /*0x57e003*/
          return result; /*0x57e003*/
      }
      else if ( v22 == 92 ) /*0x57dfe4*/
      {
        v23 = 93; /*0x57dfe6*/
      }
      else
      {
        if ( v22 != 94 ) /*0x57dff0*/
          return result; /*0x57dff0*/
        v23 = 95; /*0x57dff6*/
      }
      v24 = v49; /*0x57e009*/
      v51 = v51; /*0x57e00d*/
      v49->q011 = v23; /*0x57e015*/
      *(unsigned int *)(v51 + 68) = v23; /*0x57e018*/
      *(unsigned int *)&v47->__pad_28[28] = v23; /*0x57e01b*/
      v62[1] = dword_886FA4; /*0x57e029*/
      v62[0] = DSurface_ViewBounds; /*0x57e034*/
      v26 = (struct tagRECT *)((House *)(v24))->GetStartCoords(v65); /*0x57e04a*/
      v27 = (struct tagRECT *)BuildingClass::GetPlacementRect(v24, v64); /*0x57e04c*/
      if ( v26->right <= 0 || v26->bottom <= 0 ) /*0x57e061*/
      {
        rcDst = *v27; /*0x57e136*/
      }
      else
      {
        right = v27->right; /*0x57e06c*/
        if ( right <= 0 || (v52[0] = v27->bottom, v52[0] <= 0) ) /*0x57e07f*/
        {
          rcDst = *v26; /*0x57e119*/
        }
        else
        {
          left = v26->left; /*0x57e088*/
          top = v26->top; /*0x57e08a*/
          v56 = v26->right; /*0x57e08d*/
          bottom = v26->bottom; /*0x57e094*/
          v30 = v27->left; /*0x57e098*/
          if ( left > v27->left ) /*0x57e09c*/
          {
            v31 = left - v30 + v56; /*0x57e0a4*/
            left = v27->left; /*0x57e0a6*/
            v56 = v31; /*0x57e0a8*/
          }
          v32 = v27->top; /*0x57e0ac*/
          v50[0] = v32; /*0x57e0b1*/
          if ( top > v32 ) /*0x57e0b5*/
          {
            v33 = top - v32 + bottom; /*0x57e0bd*/
            top = v32; /*0x57e0bf*/
            bottom = v33; /*0x57e0c1*/
          }
          if ( left + v56 < v30 + right ) /*0x57e0d3*/
            v56 = v30 - left + right + 1; /*0x57e0df*/
          v34 = bottom; /*0x57e0eb*/
          if ( bottom + top < v52[0] + v50[0] ) /*0x57e0f6*/
            v34 = v52[0] + v50[0] - top + 1; /*0x57e0fb*/
          rcDst.left = left; /*0x57e0fd*/
          rcDst.top = top; /*0x57e105*/
          v24 = v49; /*0x57e109*/
          rcDst.right = v56; /*0x57e10d*/
          rcDst.bottom = v34; /*0x57e111*/
        }
      }
      v35 = (int *)Rect::Union(&rcDst, v44, v45); /*0x57e15f*/
      v43 = v35[3]; /*0x57e16a*/
      v42 = v35[2]; /*0x57e16f*/
      v36 = CellStruct::Copy(v35, v52); /*0x57e17d*/
      v37 = ((Coord2D *)(v36))->Sub(v50, v62); /*0x57e184*/
      v38 = Rect::Construct(v55, v37, v42, v43); /*0x57e18e*/
      v58 = *v38; /*0x57e19c*/
      v59 = v38[1]; /*0x57e1a3*/
      v60 = v38[2]; /*0x57e1aa*/
      v61 = v38[3]; /*0x57e1b3*/
      Cell::CreateCrater(*v38, v38[1], v38[2], v38[3], 0); /*0x57e1d3*/
      if ( v23 == 100 ) /*0x57e1db*/
      {
        IDA_LOBYTE(v54) = 1; /*0x57e1e8*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)v1); /*0x57e1ec*/
        right = 0x10000; /*0x57e1fd*/
        v50[0] = *((CellStruct *)(v1))->Add(v52, &right); /*0x57e21a*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)v50); /*0x57e21e*/
        v39 = ((CellStruct *)(v52))->Set(0, 1); /*0x57e22a*/
        v50[0] = *((CellStruct *)(v1))->Sub(&right, v39); /*0x57e248*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)v50); /*0x57e24c*/
      }
      ((House *)(v24))->AnnounceUpgrade(-1); /*0x57e255*/
      v51 = v51; /*0x57e25a*/
      ((House *)(v51))->AnnounceUpgrade(-1); /*0x57e262*/
      ((House *)((int)v47))->AnnounceUpgrade(-1); /*0x57e26f*/
      v54 = v54; /*0x57e274*/
      Cell::SearchEnemies(v24, v54); /*0x57e27b*/
      Cell::SearchEnemies(v51, v54); /*0x57e283*/
// 0x487a10
      return Cell::SearchEnemies((int)v47, v54); /*0x57e28b*/
    }
  }
  return result; /*0x57e290*/
}
}
// 0x57E2A0
namespace gamemd {
void* CreateCliffStraightMap(IUnknown * aP0)
{
  int16_t *v1; // ebx
  int v2; // eax
  unsigned int v3; // eax
  CellClass *v4; // eax
  CellClass *v5; // ebp
  int16_t v6; // cx
  unsigned int v7; // eax
  int v8; // eax
  int16_t v9; // cx
  unsigned int v10; // eax
  int v11; // eax
  int *PlacementRect; // esi
  int *StartCoords; // eax
  int v15; // ebp
  int v16; // ecx
  int v17; // edx
  int v18; // edi
  int v19; // eax
  int v20; // esi
  int v21; // ecx
  int v22; // ecx
  int v23; // ebx
  struct tagRECT *v26; // esi
  struct tagRECT *v27; // eax
  LONG left; // edx
  LONG v29; // ecx
  LONG v30; // ebp
  LONG top; // edi
  LONG bottom; // esi
  bool v33; // cc
  int v34; // eax
  LONG v35; // ecx
  int *v36; // eax
  unsigned int *v37; // eax
  int *v38; // eax
  int *v39; // eax
  int16_t v40; // cx
  int v45; // [esp-8h] [ebp-E4h]
  int v46; // [esp-4h] [ebp-E0h]
  const RECT *v47; // [esp+0h] [ebp-DCh]
  const RECT *v48; // [esp+4h] [ebp-D8h]
  int right; // [esp+10h] [ebp-CCh] BYREF
  int v50; // [esp+14h] [ebp-C8h]
  int v51[2]; // [esp+18h] [ebp-C4h] BYREF
  int v52; // [esp+20h] [ebp-BCh]
  int v53; // [esp+24h] [ebp-B8h]
  struct tagRECT rcDst; // [esp+28h] [ebp-B4h] BYREF
  int v55; // [esp+38h] [ebp-A4h]
  unsigned int v56[2]; // [esp+3Ch] [ebp-A0h] BYREF
  int v57; // [esp+44h] [ebp-98h]
  int v58; // [esp+48h] [ebp-94h]
  int v59; // [esp+4Ch] [ebp-90h]
  int v60; // [esp+50h] [ebp-8Ch]
  unsigned int v61[2]; // [esp+54h] [ebp-88h] BYREF
  int v62[2]; // [esp+5Ch] [ebp-80h] BYREF
  LONG v63; // [esp+64h] [ebp-78h]
  unsigned int v64[16]; // [esp+6Ch] [ebp-70h] BYREF
  int v65[4]; // [esp+ACh] [ebp-30h] BYREF
  int v66[4]; // [esp+CCh] [ebp-10h] BYREF

  v1 = aP0; /*0x57e2ac*/
  v2 = *((unsigned int *)((CellCoord *)(&dword_87F7E8))->To_CellObj(aP0) + 17); /*0x57e2bc*/
  if ( v2 >= 74 && v2 <= 101 ) /*0x57e2cb*/
  {
    v3 = *aP0 + (aP0[1] << 9); /*0x57e2e6*/
    if ( v3 < 0x40000 && (v4 = *(CellClass **)(dword_87F924 + 4 * v3)) != 0 ) /*0x57e2f6*/
    {
      v5 = v4; /*0x57e2f8*/
    }
    else
    {
      v5 = &unk_ABDC50; /*0x57e2fe*/
      unk_ABDC50.smudgeTypeIndex = *(unsigned int *)aP0; /*0x57e300*/
    }
    v6 = *aP0 - 1; /*0x57e30c*/
    IDA_HIWORD(v50) = aP0[1]; /*0x57e30e*/
    IDA_LOWORD(v50) = v6; /*0x57e316*/
    v53 = (int)v5; /*0x57e31b*/
    v7 = v6 + (IDA_SHIWORD(v50) << 9); /*0x57e325*/
    if ( v7 < 0x40000 && (v8 = *(unsigned int *)(dword_87F924 + 4 * v7)) != 0 ) /*0x57e335*/
    {
      v52 = v8; /*0x57e337*/
    }
    else
    {
      v52 = (int)&unk_ABDC50; /*0x57e341*/
      unk_ABDC50.smudgeTypeIndex = v50; /*0x57e345*/
    }
    v9 = *aP0 + 1; /*0x57e351*/
    IDA_HIWORD(v50) = aP0[1]; /*0x57e353*/
    IDA_LOWORD(v50) = v9; /*0x57e35b*/
    v10 = v9 + (IDA_SHIWORD(v50) << 9); /*0x57e366*/
    if ( v10 < 0x40000 && (v11 = *(unsigned int *)(dword_87F924 + 4 * v10)) != 0 ) /*0x57e376*/
    {
      v50 = v11; /*0x57e378*/
    }
    else
    {
      v50 = v50; /*0x57e37e*/
      v50 = (int)&unk_ABDC50; /*0x57e382*/
      unk_ABDC50.smudgeTypeIndex = v50; /*0x57e386*/
    }
    IDA_LOBYTE(v55) = 0; /*0x57e393*/
    PlacementRect = BuildingClass::GetPlacementRect((int)v5, v62); /*0x57e3a1*/
    StartCoords = ((House *)((int)v5))->GetStartCoords(&rcDst); /*0x57e3a6*/
    if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x57e3bb*/
    {
      v21 = *PlacementRect; /*0x57e448*/
      v17 = PlacementRect[1]; /*0x57e44a*/
      v18 = PlacementRect[2]; /*0x57e44d*/
      v19 = PlacementRect[3]; /*0x57e450*/
    }
    else
    {
      right = PlacementRect[2]; /*0x57e3c6*/
      if ( right <= 0 || (v51[0] = PlacementRect[3], v51[0] <= 0) ) /*0x57e3d5*/
      {
        v21 = *StartCoords; /*0x57e43b*/
        v17 = StartCoords[1]; /*0x57e43d*/
        v18 = StartCoords[2]; /*0x57e440*/
        v19 = StartCoords[3]; /*0x57e443*/
      }
      else
      {
        v15 = *StartCoords; /*0x57e3d7*/
        v16 = *PlacementRect; /*0x57e3d9*/
        v17 = StartCoords[1]; /*0x57e3db*/
        v18 = StartCoords[2]; /*0x57e3de*/
        v19 = StartCoords[3]; /*0x57e3e1*/
        if ( v15 > *PlacementRect ) /*0x57e3e6*/
        {
          v18 += v15 - v16; /*0x57e3ea*/
          v15 = *PlacementRect; /*0x57e3ec*/
        }
        v20 = PlacementRect[1]; /*0x57e3ee*/
        v56[0] = v20; /*0x57e3f3*/
        if ( v17 > v20 ) /*0x57e3f7*/
        {
          v19 += v17 - v20; /*0x57e3fb*/
          v17 = v20; /*0x57e3fd*/
        }
        if ( v18 + v15 < v16 + right ) /*0x57e40a*/
          v18 = v16 - v15 + right + 1; /*0x57e412*/
        if ( v19 + v17 < v51[0] + v56[0] ) /*0x57e425*/
          v19 = v51[0] + v56[0] - v17 + 1; /*0x57e42a*/
        v1 = aP0; /*0x57e42c*/
        v21 = v15; /*0x57e433*/
        v5 = (CellClass *)v53; /*0x57e435*/
      }
    }
    v60 = v19; /*0x57e453*/
    v59 = v18; /*0x57e45c*/
    v64[2] = 91; /*0x57e460*/
    v64[6] = 91; /*0x57e464*/
    v57 = v21; /*0x57e46b*/
    v58 = v17; /*0x57e479*/
    v64[0] = -1; /*0x57e47d*/
    v64[1] = 88; /*0x57e481*/
    v64[3] = -1; /*0x57e489*/
    v64[4] = 87; /*0x57e48d*/
    v64[5] = 89; /*0x57e495*/
    v64[7] = -1; /*0x57e4a0*/
    v64[8] = 90; /*0x57e4a7*/
    v64[9] = 90; /*0x57e4ae*/
    v64[10] = 101; /*0x57e4b5*/
    memset(&v64[11], 255, 20); /*0x57e4c0*/
    IDA_LOBYTE(v2) = Map_Create_57B990(v1); /*0x57e4e3*/
    v22 = *(unsigned int *)&v5->__pad_28[28]; /*0x57e4e8*/
    if ( v2 > 0 ) /*0x57e4ed*/
    {
      if ( v22 < 96 ) /*0x57e4f6*/
      {
        v23 = v64[v2]; /*0x57e511*/
        if ( v23 == v22 ) /*0x57e517*/
          return v2; /*0x57e517*/
      }
      else if ( v22 == 96 ) /*0x57e4f8*/
      {
        v23 = 97; /*0x57e4fa*/
      }
      else
      {
        if ( v22 != 98 ) /*0x57e504*/
          return v2; /*0x57e504*/
        v23 = 99; /*0x57e50a*/
      }
      v52 = v52; /*0x57e51d*/
      v50 = v50; /*0x57e521*/
      *(unsigned int *)&v5->__pad_28[28] = v23; /*0x57e525*/
      *(unsigned int *)(v52 + 68) = v23; /*0x57e528*/
      v50->q044 = v23; /*0x57e52b*/
      v61[1] = dword_886FA4; /*0x57e539*/
      v61[0] = DSurface_ViewBounds; /*0x57e547*/
      v26 = (struct tagRECT *)((House *)((int)v5))->GetStartCoords(v66); /*0x57e55a*/
      v27 = (struct tagRECT *)BuildingClass::GetPlacementRect((int)v5, v65); /*0x57e55c*/
      if ( v26->right <= 0 || v26->bottom <= 0 ) /*0x57e571*/
      {
        rcDst = *v27; /*0x57e62b*/
      }
      else
      {
        right = v27->right; /*0x57e57c*/
        if ( right <= 0 || (v56[0] = v27->bottom, v56[0] <= 0) ) /*0x57e58f*/
        {
          rcDst = *v26; /*0x57e60e*/
        }
        else
        {
          left = v26->left; /*0x57e591*/
          v29 = v27->left; /*0x57e593*/
          v30 = v26->right; /*0x57e595*/
          top = v26->top; /*0x57e598*/
          bottom = v26->bottom; /*0x57e59b*/
          v33 = left <= v27->left; /*0x57e59e*/
          v63 = v30; /*0x57e5a0*/
          if ( !v33 ) /*0x57e5a4*/
          {
            v30 += left - v29; /*0x57e5a8*/
            left = v29; /*0x57e5aa*/
            v63 = v30; /*0x57e5ac*/
          }
          v34 = v27->top; /*0x57e5b0*/
          v51[0] = v34; /*0x57e5b5*/
          if ( top > v34 ) /*0x57e5b9*/
          {
            bottom += top - v34; /*0x57e5bd*/
            top = v34; /*0x57e5bf*/
          }
          if ( left + v30 >= v29 + right ) /*0x57e5cb*/
            v35 = v63; /*0x57e5d9*/
          else
            v35 = v29 - left + right + 1; /*0x57e5d3*/
          if ( bottom + top < v56[0] + v51[0] ) /*0x57e5ec*/
            bottom = v56[0] + v51[0] - top + 1; /*0x57e5f1*/
          v5 = (CellClass *)v53; /*0x57e5f3*/
          rcDst.top = top; /*0x57e5f7*/
          rcDst.left = left; /*0x57e5fb*/
          rcDst.right = v35; /*0x57e5ff*/
          rcDst.bottom = bottom; /*0x57e603*/
        }
      }
      v36 = (int *)Rect::Union(&rcDst, v47, v48); /*0x57e654*/
      v46 = v36[3]; /*0x57e65f*/
      v45 = v36[2]; /*0x57e664*/
      v37 = CellStruct::Copy(v36, v56); /*0x57e672*/
      v38 = ((Coord2D *)(v37))->Sub(v51, v61); /*0x57e679*/
      v39 = Rect::Construct(v62, v38, v45, v46); /*0x57e683*/
      v57 = *v39; /*0x57e691*/
      v58 = v39[1]; /*0x57e698*/
      v59 = v39[2]; /*0x57e69f*/
      v60 = v39[3]; /*0x57e6a8*/
      Cell::CreateCrater(*v39, v39[1], v39[2], v39[3], 0); /*0x57e6c8*/
      if ( v23 == 101 ) /*0x57e6d0*/
      {
        IDA_LOBYTE(v55) = 1; /*0x57e6e4*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)aP0); /*0x57e6e8*/
        v40 = *aP0 + 1; /*0x57e6f4*/
        IDA_HIWORD(right) = aP0[1]; /*0x57e6f6*/
        IDA_LOWORD(right) = v40; /*0x57e6fb*/
        v51[0] = right; /*0x57e708*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)v51); /*0x57e712*/
        right = 1; /*0x57e723*/
        v51[0] = *((CellStruct *)(aP0))->Sub(v56, &right); /*0x57e73a*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)v51); /*0x57e744*/
      }
      ((House *)((int)v5))->AnnounceUpgrade(-1); /*0x57e74c*/
      v52 = v52; /*0x57e751*/
      ((House *)(v52))->AnnounceUpgrade(-1); /*0x57e758*/
      v50 = v50; /*0x57e75e*/
      ((House *)(v50))->AnnounceUpgrade(-1); /*0x57e764*/
      v55 = v55; /*0x57e769*/
      Cell::SearchEnemies((int)v5, v55); /*0x57e770*/
      Cell::SearchEnemies(v52, v55); /*0x57e778*/
      IDA_LOBYTE(v2) = Cell::SearchEnemies(v50, v55); /*0x57e780*/
    }
  }
  return v2; /*0x57e785*/
}
}
// 0x57E7A0
namespace gamemd {
AbstractClass * * CreateCliffBridgeMap(IUnknown * aP0)
{
  int16_t *v1; // ebp
  int result; // eax
  unsigned int v3; // eax
  int v4; // eax
  CellClass *v5; // edi
  int v6; // eax
  unsigned int v7; // eax
  int v8; // eax
  unsigned int v9; // eax
  CellClass *v10; // eax
  int *PlacementRect; // esi
  int *StartCoords; // eax
  int v13; // ebp
  int v14; // ecx
  int v15; // edx
  int v16; // edi
  int v17; // eax
  int v18; // esi
  int v19; // ecx
  unsigned int v20; // ecx
  CellClass *v21; // ecx
  int v22; // ecx
  int v23; // ebx
  int v24; // edi
  struct tagRECT *v26; // esi
  struct tagRECT *v27; // eax
  LONG left; // edx
  LONG top; // edi
  LONG v30; // ecx
  LONG v31; // esi
  int v32; // eax
  LONG v33; // esi
  LONG v34; // esi
  int *v35; // eax
  unsigned int *v36; // eax
  int *v37; // eax
  int *v38; // eax
  unsigned short *v39; // eax
  int v42; // [esp-8h] [ebp-E4h]
  int v43; // [esp-4h] [ebp-E0h]
  const RECT *v44; // [esp+0h] [ebp-DCh]
  const RECT *v45; // [esp+4h] [ebp-D8h]
  int v46; // [esp+10h] [ebp-CCh]
  CellClass *v47; // [esp+10h] [ebp-CCh]
  int right; // [esp+14h] [ebp-C8h] BYREF
  int v49; // [esp+18h] [ebp-C4h]
  int v50[2]; // [esp+1Ch] [ebp-C0h] BYREF
  int v51; // [esp+24h] [ebp-B8h]
  unsigned int v52[2]; // [esp+28h] [ebp-B4h] BYREF
  struct tagRECT rcDst; // [esp+30h] [ebp-ACh] BYREF
  int v54; // [esp+40h] [ebp-9Ch]
  int v55[2]; // [esp+44h] [ebp-98h] BYREF
  LONG v56; // [esp+4Ch] [ebp-90h]
  LONG bottom; // [esp+50h] [ebp-8Ch]
  int v58; // [esp+54h] [ebp-88h]
  int v59; // [esp+58h] [ebp-84h]
  int v60; // [esp+5Ch] [ebp-80h]
  int v61; // [esp+60h] [ebp-7Ch]
  unsigned int v62[2]; // [esp+64h] [ebp-78h] BYREF
  unsigned int v63[16]; // [esp+6Ch] [ebp-70h] BYREF
  int v64[4]; // [esp+ACh] [ebp-30h] BYREF
  int v65[4]; // [esp+CCh] [ebp-10h] BYREF

  v1 = aP0; /*0x57e7ad*/
  result = *((unsigned int *)((CellCoord *)(&dword_87F7E8))->To_CellObj(aP0) + 17); /*0x57e7bc*/
  if ( result >= 205 && result <= 232 ) /*0x57e7cf*/
  {
    v3 = *aP0 + (aP0[1] << 9); /*0x57e7e6*/
    if ( v3 < 0x40000 && (v4 = *(unsigned int *)(dword_87F924 + 4 * v3)) != 0 ) /*0x57e7f6*/
    {
      v5 = (CellClass *)v4; /*0x57e7f8*/
      v49 = v4; /*0x57e7fa*/
    }
    else
    {
      v6 = *(unsigned int *)aP0; /*0x57e800*/
      v49 = (int)&unk_ABDC50; /*0x57e803*/
      v5 = &unk_ABDC50; /*0x57e80b*/
      unk_ABDC50.smudgeTypeIndex = v6; /*0x57e80f*/
    }
    v46 = *(unsigned int *)aP0 - 0x10000; /*0x57e823*/
    v7 = *aP0 + (IDA_SHIWORD(v46) << 9); /*0x57e831*/
    if ( v7 < 0x40000 && (v8 = *(unsigned int *)(dword_87F924 + 4 * v7)) != 0 ) /*0x57e841*/
    {
      v51 = v8; /*0x57e843*/
    }
    else
    {
      v51 = (int)&unk_ABDC50; /*0x57e84d*/
      unk_ABDC50.smudgeTypeIndex = v46; /*0x57e855*/
    }
    v9 = *aP0 + ((int16_t)((unsigned int)(*(unsigned int *)aP0 + 0x10000) >> 16) << 9); /*0x57e877*/
    if ( v9 < 0x40000 && (v10 = *(CellClass **)(dword_87F924 + 4 * v9)) != 0 ) /*0x57e887*/
    {
      v47 = v10; /*0x57e889*/
    }
    else
    {
      v47 = &unk_ABDC50; /*0x57e893*/
      unk_ABDC50.smudgeTypeIndex = *(unsigned int *)aP0 + 0x10000; /*0x57e89b*/
    }
    IDA_LOBYTE(v54) = 0; /*0x57e8a8*/
    PlacementRect = BuildingClass::GetPlacementRect((int)v5, v55); /*0x57e8b6*/
    StartCoords = ((House *)((int)v5))->GetStartCoords(&rcDst); /*0x57e8bb*/
    if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x57e8d0*/
    {
      v19 = *PlacementRect; /*0x57e956*/
      v15 = PlacementRect[1]; /*0x57e958*/
      v16 = PlacementRect[2]; /*0x57e95b*/
      v17 = PlacementRect[3]; /*0x57e95e*/
    }
    else
    {
      right = PlacementRect[2]; /*0x57e8db*/
      if ( right <= 0 || (v50[0] = PlacementRect[3], v50[0] <= 0) ) /*0x57e8ea*/
      {
        v19 = *StartCoords; /*0x57e949*/
        v15 = StartCoords[1]; /*0x57e94b*/
        v16 = StartCoords[2]; /*0x57e94e*/
        v17 = StartCoords[3]; /*0x57e951*/
      }
      else
      {
        v13 = *StartCoords; /*0x57e8ec*/
        v14 = *PlacementRect; /*0x57e8ee*/
        v15 = StartCoords[1]; /*0x57e8f0*/
        v16 = StartCoords[2]; /*0x57e8f3*/
        v17 = StartCoords[3]; /*0x57e8f6*/
        if ( v13 > *PlacementRect ) /*0x57e8fb*/
        {
          v16 += v13 - v14; /*0x57e8ff*/
          v13 = *PlacementRect; /*0x57e901*/
        }
        v18 = PlacementRect[1]; /*0x57e903*/
        v52[0] = v18; /*0x57e908*/
        if ( v15 > v18 ) /*0x57e90c*/
        {
          v17 += v15 - v18; /*0x57e910*/
          v15 = v18; /*0x57e912*/
        }
        if ( v16 + v13 < v14 + right ) /*0x57e91c*/
          v16 = v14 - v13 + right + 1; /*0x57e924*/
        if ( v17 + v15 < v50[0] + v52[0] ) /*0x57e937*/
          v17 = v50[0] + v52[0] - v15 + 1; /*0x57e93c*/
        v19 = v13; /*0x57e93e*/
        v1 = aP0; /*0x57e940*/
      }
    }
    v58 = v19; /*0x57e961*/
    v63[2] = 213; /*0x57e96a*/
    v63[6] = 213; /*0x57e96e*/
    v61 = v17; /*0x57e97a*/
    v63[8] = 212; /*0x57e981*/
    v63[9] = 212; /*0x57e988*/
    v59 = v15; /*0x57e991*/
    v60 = v16; /*0x57e995*/
    v63[0] = -1; /*0x57e999*/
    v63[1] = 210; /*0x57e99d*/
    v63[3] = -1; /*0x57e9a5*/
    v63[4] = 209; /*0x57e9a9*/
    v63[5] = 211; /*0x57e9b1*/
    v63[7] = -1; /*0x57e9bc*/
    v63[10] = 231; /*0x57e9c3*/
    memset(&v63[11], 255, 20); /*0x57e9ce*/
    result = Map_Create_57CAB0(v1); /*0x57e9f1*/
    v20 = *v1 + (v1[1] << 9); /*0x57ea01*/
    if ( v20 >= 0x40000 || (v21 = *(CellClass **)(dword_87F924 + 4 * v20)) == 0 ) /*0x57ea18*/
    {
      unk_ABDC50.smudgeTypeIndex = *(unsigned int *)v1; /*0x57ea1d*/
      v21 = &unk_ABDC50; /*0x57ea23*/
    }
    v22 = *(unsigned int *)&v21->__pad_28[28]; /*0x57ea28*/
    if ( result > 0 ) /*0x57ea2d*/
    {
      if ( v22 < 223 ) /*0x57ea39*/
      {
        v23 = v63[result]; /*0x57ea57*/
        if ( v22 == v23 ) /*0x57ea5d*/
          return result; /*0x57ea5d*/
      }
      else if ( v22 == 223 ) /*0x57ea3b*/
      {
        v23 = 224; /*0x57ea3d*/
      }
      else
      {
        if ( v22 != 225 ) /*0x57ea4a*/
          return result; /*0x57ea4a*/
        v23 = 226; /*0x57ea50*/
      }
      v24 = v49; /*0x57ea63*/
      v51 = v51; /*0x57ea67*/
      v49->q011 = v23; /*0x57ea6f*/
      *(unsigned int *)(v51 + 68) = v23; /*0x57ea72*/
      *(unsigned int *)&v47->__pad_28[28] = v23; /*0x57ea75*/
      v62[1] = dword_886FA4; /*0x57ea83*/
      v62[0] = DSurface_ViewBounds; /*0x57ea8e*/
      v26 = (struct tagRECT *)((House *)(v24))->GetStartCoords(v65); /*0x57eaa4*/
      v27 = (struct tagRECT *)BuildingClass::GetPlacementRect(v24, v64); /*0x57eaa6*/
      if ( v26->right <= 0 || v26->bottom <= 0 ) /*0x57eabb*/
      {
        rcDst = *v27; /*0x57eb90*/
      }
      else
      {
        right = v27->right; /*0x57eac6*/
        if ( right <= 0 || (v52[0] = v27->bottom, v52[0] <= 0) ) /*0x57ead9*/
        {
          rcDst = *v26; /*0x57eb73*/
        }
        else
        {
          left = v26->left; /*0x57eae2*/
          top = v26->top; /*0x57eae4*/
          v56 = v26->right; /*0x57eae7*/
          bottom = v26->bottom; /*0x57eaee*/
          v30 = v27->left; /*0x57eaf2*/
          if ( left > v27->left ) /*0x57eaf6*/
          {
            v31 = left - v30 + v56; /*0x57eafe*/
            left = v27->left; /*0x57eb00*/
            v56 = v31; /*0x57eb02*/
          }
          v32 = v27->top; /*0x57eb06*/
          v50[0] = v32; /*0x57eb0b*/
          if ( top > v32 ) /*0x57eb0f*/
          {
            v33 = top - v32 + bottom; /*0x57eb17*/
            top = v32; /*0x57eb19*/
            bottom = v33; /*0x57eb1b*/
          }
          if ( left + v56 < v30 + right ) /*0x57eb2d*/
            v56 = v30 - left + right + 1; /*0x57eb39*/
          v34 = bottom; /*0x57eb45*/
          if ( bottom + top < v52[0] + v50[0] ) /*0x57eb50*/
            v34 = v52[0] + v50[0] - top + 1; /*0x57eb55*/
          rcDst.left = left; /*0x57eb57*/
          rcDst.top = top; /*0x57eb5f*/
          v24 = v49; /*0x57eb63*/
          rcDst.right = v56; /*0x57eb67*/
          rcDst.bottom = v34; /*0x57eb6b*/
        }
      }
      v35 = (int *)Rect::Union(&rcDst, v44, v45); /*0x57ebb9*/
      v43 = v35[3]; /*0x57ebc4*/
      v42 = v35[2]; /*0x57ebc9*/
      v36 = CellStruct::Copy(v35, v52); /*0x57ebd7*/
      v37 = ((Coord2D *)(v36))->Sub(v50, v62); /*0x57ebde*/
      v38 = Rect::Construct(v55, v37, v42, v43); /*0x57ebe8*/
      v58 = *v38; /*0x57ebf6*/
      v59 = v38[1]; /*0x57ebfd*/
      v60 = v38[2]; /*0x57ec04*/
      v61 = v38[3]; /*0x57ec0d*/
      Cell::CreateCrater(*v38, v38[1], v38[2], v38[3], 0); /*0x57ec2d*/
      if ( v23 == 231 ) /*0x57ec38*/
      {
        IDA_LOBYTE(v54) = 1; /*0x57ec45*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)v1); /*0x57ec49*/
        right = 0x10000; /*0x57ec5a*/
        v50[0] = *((CellStruct *)(v1))->Add(v52, &right); /*0x57ec77*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)v50); /*0x57ec7b*/
        v39 = ((CellStruct *)(v52))->Set(0, 1); /*0x57ec87*/
        v50[0] = *((CellStruct *)(v1))->Sub(&right, v39); /*0x57eca5*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)v50); /*0x57eca9*/
      }
      ((House *)(v24))->AnnounceUpgrade(-1); /*0x57ecb2*/
      v51 = v51; /*0x57ecb7*/
      ((House *)(v51))->AnnounceUpgrade(-1); /*0x57ecbf*/
      ((House *)((int)v47))->AnnounceUpgrade(-1); /*0x57eccc*/
      v54 = v54; /*0x57ecd1*/
      Cell::SearchEnemies(v24, v54); /*0x57ecd8*/
      Cell::SearchEnemies(v51, v54); /*0x57ece0*/
// 0x487a10
      return Cell::SearchEnemies((int)v47, v54); /*0x57ece8*/
    }
  }
  return result; /*0x57eced*/
}
}
// 0x57ED00
namespace gamemd {
void* CreateCliffStraightBridgeMap(IUnknown * aP0)
{
  int16_t *v1; // ebx
  int v2; // eax
  unsigned int v3; // eax
  CellClass *v4; // eax
  CellClass *v5; // ebp
  int16_t v6; // cx
  unsigned int v7; // eax
  int v8; // eax
  int16_t v9; // cx
  unsigned int v10; // eax
  int v11; // eax
  int v12; // edx
  int *PlacementRect; // esi
  int *StartCoords; // eax
  int v15; // ebp
  int v16; // ecx
  int v17; // edx
  int v18; // edi
  int v19; // eax
  int v20; // esi
  int v21; // ecx
  int v22; // ecx
  int v23; // ebx
  struct tagRECT *v26; // esi
  struct tagRECT *v27; // eax
  LONG left; // edx
  LONG v29; // ecx
  LONG v30; // ebp
  LONG top; // edi
  LONG bottom; // esi
  bool v33; // cc
  int v34; // eax
  LONG v35; // ecx
  int *v36; // eax
  unsigned int *v37; // eax
  int *v38; // eax
  int *v39; // eax
  int16_t v40; // cx
  int v45; // [esp-8h] [ebp-E4h]
  int v46; // [esp-4h] [ebp-E0h]
  const RECT *v47; // [esp+0h] [ebp-DCh]
  const RECT *v48; // [esp+4h] [ebp-D8h]
  int right; // [esp+10h] [ebp-CCh] BYREF
  int v50; // [esp+14h] [ebp-C8h]
  int v51[2]; // [esp+18h] [ebp-C4h] BYREF
  int v52; // [esp+20h] [ebp-BCh]
  int v53; // [esp+24h] [ebp-B8h]
  struct tagRECT rcDst; // [esp+28h] [ebp-B4h] BYREF
  int v55; // [esp+38h] [ebp-A4h]
  unsigned int v56[2]; // [esp+3Ch] [ebp-A0h] BYREF
  int v57; // [esp+44h] [ebp-98h]
  int v58; // [esp+48h] [ebp-94h]
  int v59; // [esp+4Ch] [ebp-90h]
  int v60; // [esp+50h] [ebp-8Ch]
  unsigned int v61[2]; // [esp+54h] [ebp-88h] BYREF
  int v62[2]; // [esp+5Ch] [ebp-80h] BYREF
  LONG v63; // [esp+64h] [ebp-78h]
  unsigned int v64[16]; // [esp+6Ch] [ebp-70h] BYREF
  int v65[4]; // [esp+ACh] [ebp-30h] BYREF
  int v66[4]; // [esp+CCh] [ebp-10h] BYREF

  v1 = aP0; /*0x57ed0c*/
  v2 = *((unsigned int *)((CellCoord *)(&dword_87F7E8))->To_CellObj(aP0) + 17); /*0x57ed1c*/
  if ( v2 >= 205 && v2 <= 232 ) /*0x57ed2f*/
  {
    v3 = *aP0 + (aP0[1] << 9); /*0x57ed4a*/
    if ( v3 < 0x40000 && (v4 = *(CellClass **)(dword_87F924 + 4 * v3)) != 0 ) /*0x57ed5a*/
    {
      v5 = v4; /*0x57ed5c*/
    }
    else
    {
      v5 = &unk_ABDC50; /*0x57ed62*/
      unk_ABDC50.smudgeTypeIndex = *(unsigned int *)aP0; /*0x57ed64*/
    }
    v6 = *aP0 - 1; /*0x57ed70*/
    IDA_HIWORD(v50) = aP0[1]; /*0x57ed72*/
    IDA_LOWORD(v50) = v6; /*0x57ed7a*/
    v53 = (int)v5; /*0x57ed7f*/
    v7 = v6 + (IDA_SHIWORD(v50) << 9); /*0x57ed89*/
    if ( v7 < 0x40000 && (v8 = *(unsigned int *)(dword_87F924 + 4 * v7)) != 0 ) /*0x57ed99*/
    {
      v52 = v8; /*0x57ed9b*/
    }
    else
    {
      v52 = (int)&unk_ABDC50; /*0x57eda5*/
      unk_ABDC50.smudgeTypeIndex = v50; /*0x57eda9*/
    }
    v9 = *aP0 + 1; /*0x57edb5*/
    IDA_HIWORD(v50) = aP0[1]; /*0x57edb7*/
    IDA_LOWORD(v50) = v9; /*0x57edbf*/
    v10 = v9 + (IDA_SHIWORD(v50) << 9); /*0x57edca*/
    if ( v10 < 0x40000 && (v11 = *(unsigned int *)(dword_87F924 + 4 * v10)) != 0 ) /*0x57edda*/
    {
      v50 = v11; /*0x57eddc*/
    }
    else
    {
      v50 = v50; /*0x57ede2*/
      v50 = (int)&unk_ABDC50; /*0x57ede6*/
      unk_ABDC50.smudgeTypeIndex = v50; /*0x57edea*/
    }
    IDA_LOBYTE(v55) = 0; /*0x57edf7*/
    PlacementRect = BuildingClass::GetPlacementRect((int)v5, v62); /*0x57ee05*/
    StartCoords = ((House *)((int)v5))->GetStartCoords(&rcDst); /*0x57ee0a*/
    if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x57ee1f*/
    {
      v21 = *PlacementRect; /*0x57eeac*/
      v17 = PlacementRect[1]; /*0x57eeae*/
      v18 = PlacementRect[2]; /*0x57eeb1*/
      v19 = PlacementRect[3]; /*0x57eeb4*/
    }
    else
    {
      right = PlacementRect[2]; /*0x57ee2a*/
      if ( right <= 0 || (v51[0] = PlacementRect[3], v51[0] <= 0) ) /*0x57ee39*/
      {
        v21 = *StartCoords; /*0x57ee9f*/
        v17 = StartCoords[1]; /*0x57eea1*/
        v18 = StartCoords[2]; /*0x57eea4*/
        v19 = StartCoords[3]; /*0x57eea7*/
      }
      else
      {
        v15 = *StartCoords; /*0x57ee3b*/
        v16 = *PlacementRect; /*0x57ee3d*/
        v17 = StartCoords[1]; /*0x57ee3f*/
        v18 = StartCoords[2]; /*0x57ee42*/
        v19 = StartCoords[3]; /*0x57ee45*/
        if ( v15 > *PlacementRect ) /*0x57ee4a*/
        {
          v18 += v15 - v16; /*0x57ee4e*/
          v15 = *PlacementRect; /*0x57ee50*/
        }
        v20 = PlacementRect[1]; /*0x57ee52*/
        v56[0] = v20; /*0x57ee57*/
        if ( v17 > v20 ) /*0x57ee5b*/
        {
          v19 += v17 - v20; /*0x57ee5f*/
          v17 = v20; /*0x57ee61*/
        }
        if ( v18 + v15 < v16 + right ) /*0x57ee6e*/
          v18 = v16 - v15 + right + 1; /*0x57ee76*/
        if ( v19 + v17 < v51[0] + v56[0] ) /*0x57ee89*/
          v19 = v51[0] + v56[0] - v17 + 1; /*0x57ee8e*/
        v1 = aP0; /*0x57ee90*/
        v21 = v15; /*0x57ee97*/
        v5 = (CellClass *)v53; /*0x57ee99*/
      }
    }
    v60 = v19; /*0x57eeb7*/
    v59 = v18; /*0x57eec0*/
    v64[2] = 222; /*0x57eec4*/
    v64[6] = 222; /*0x57eec8*/
    v57 = v21; /*0x57eecf*/
    v58 = v17; /*0x57eedd*/
    v64[0] = -1; /*0x57eee1*/
    v64[1] = 219; /*0x57eee5*/
    v64[3] = -1; /*0x57eeed*/
    v64[4] = 218; /*0x57eef1*/
    v64[5] = 220; /*0x57eef9*/
    v64[7] = -1; /*0x57ef04*/
    v64[8] = 221; /*0x57ef0b*/
    v64[9] = 221; /*0x57ef12*/
    v64[10] = 232; /*0x57ef19*/
    memset(&v64[11], 255, 20); /*0x57ef24*/
    IDA_LOBYTE(v2) = Map_Create_57CBE0(v1); /*0x57ef47*/
    v22 = *(unsigned int *)&v5->__pad_28[28]; /*0x57ef4c*/
    if ( v2 > 0 ) /*0x57ef51*/
    {
      if ( v22 < 227 ) /*0x57ef5d*/
      {
        v23 = v64[v2]; /*0x57ef7b*/
        if ( v23 == v22 ) /*0x57ef81*/
          return v2; /*0x57ef81*/
      }
      else if ( v22 == 227 ) /*0x57ef5f*/
      {
        v23 = 228; /*0x57ef61*/
      }
      else
      {
        if ( v22 != 229 ) /*0x57ef6e*/
          return v2; /*0x57ef6e*/
        v23 = 230; /*0x57ef74*/
      }
      v52 = v52; /*0x57ef87*/
      v50 = v50; /*0x57ef8b*/
      *(unsigned int *)&v5->__pad_28[28] = v23; /*0x57ef8f*/
      *(unsigned int *)(v52 + 68) = v23; /*0x57ef92*/
      v50->q044 = v23; /*0x57ef95*/
      v61[1] = dword_886FA4; /*0x57efa3*/
      v61[0] = DSurface_ViewBounds; /*0x57efb1*/
      v26 = (struct tagRECT *)((House *)((int)v5))->GetStartCoords(v66); /*0x57efc4*/
      v27 = (struct tagRECT *)BuildingClass::GetPlacementRect((int)v5, v65); /*0x57efc6*/
      if ( v26->right <= 0 || v26->bottom <= 0 ) /*0x57efdb*/
      {
        rcDst = *v27; /*0x57f095*/
      }
      else
      {
        right = v27->right; /*0x57efe6*/
        if ( right <= 0 || (v56[0] = v27->bottom, v56[0] <= 0) ) /*0x57eff9*/
        {
          rcDst = *v26; /*0x57f078*/
        }
        else
        {
          left = v26->left; /*0x57effb*/
          v29 = v27->left; /*0x57effd*/
          v30 = v26->right; /*0x57efff*/
          top = v26->top; /*0x57f002*/
          bottom = v26->bottom; /*0x57f005*/
          v33 = left <= v27->left; /*0x57f008*/
          v63 = v30; /*0x57f00a*/
          if ( !v33 ) /*0x57f00e*/
          {
            v30 += left - v29; /*0x57f012*/
            left = v29; /*0x57f014*/
            v63 = v30; /*0x57f016*/
          }
          v34 = v27->top; /*0x57f01a*/
          v51[0] = v34; /*0x57f01f*/
          if ( top > v34 ) /*0x57f023*/
          {
            bottom += top - v34; /*0x57f027*/
            top = v34; /*0x57f029*/
          }
          if ( left + v30 >= v29 + right ) /*0x57f035*/
            v35 = v63; /*0x57f043*/
          else
            v35 = v29 - left + right + 1; /*0x57f03d*/
          if ( bottom + top < v56[0] + v51[0] ) /*0x57f056*/
            bottom = v56[0] + v51[0] - top + 1; /*0x57f05b*/
          v5 = (CellClass *)v53; /*0x57f05d*/
          rcDst.top = top; /*0x57f061*/
          rcDst.left = left; /*0x57f065*/
          rcDst.right = v35; /*0x57f069*/
          rcDst.bottom = bottom; /*0x57f06d*/
        }
      }
      v36 = (int *)Rect::Union(&rcDst, v47, v48); /*0x57f0be*/
      v46 = v36[3]; /*0x57f0c9*/
      v45 = v36[2]; /*0x57f0ce*/
      v37 = CellStruct::Copy(v36, v56); /*0x57f0dc*/
      v38 = ((Coord2D *)(v37))->Sub(v51, v61); /*0x57f0e3*/
      v39 = Rect::Construct(v62, v38, v45, v46); /*0x57f0ed*/
      v57 = *v39; /*0x57f0fb*/
      v58 = v39[1]; /*0x57f102*/
      v59 = v39[2]; /*0x57f109*/
      v60 = v39[3]; /*0x57f112*/
      Cell::CreateCrater(*v39, v39[1], v39[2], v39[3], 0); /*0x57f132*/
      if ( v23 == 232 ) /*0x57f13d*/
      {
        IDA_LOBYTE(v55) = 1; /*0x57f151*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)aP0); /*0x57f155*/
        v40 = *aP0 + 1; /*0x57f161*/
        IDA_HIWORD(right) = aP0[1]; /*0x57f163*/
        IDA_LOWORD(right) = v40; /*0x57f168*/
        v51[0] = right; /*0x57f175*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)v51); /*0x57f17f*/
        right = 1; /*0x57f190*/
        v51[0] = *((CellStruct *)(aP0))->Sub(v56, &right); /*0x57f1a7*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)v51); /*0x57f1b1*/
      }
      ((House *)((int)v5))->AnnounceUpgrade(-1); /*0x57f1b9*/
      v52 = v52; /*0x57f1be*/
      ((House *)(v52))->AnnounceUpgrade(-1); /*0x57f1c5*/
      v50 = v50; /*0x57f1cb*/
      ((House *)(v50))->AnnounceUpgrade(-1); /*0x57f1d1*/
      v55 = v55; /*0x57f1d6*/
      Cell::SearchEnemies((int)v5, v55); /*0x57f1dd*/
      Cell::SearchEnemies(v52, v55); /*0x57f1e5*/
      IDA_LOBYTE(v2) = Cell::SearchEnemies(v50, v55); /*0x57f1ed*/
    }
  }
  return v2; /*0x57f1f2*/
}
}
// 0x572230
namespace gamemd {
char globalHelper_072230(ObjectClass * aP0, int a2)
{
  int v2; // eax
  int16_t v3; // dx
  unsigned int v4; // eax
  unsigned int *v5; // eax
  uint8_t v6; // dl
  int v7; // eax

  v2 = a2 & 7; /*0x572239*/
  v3 = dword_89F688[v2]; /*0x57223c*/
  IDA_LOWORD(v2) = aP0[1] + IDA_HIWORD(dword_89F688[v2]); /*0x572252*/
  IDA_LOWORD(a2) = *aP0 + v3; /*0x572256*/
  IDA_HIWORD(a2) = v2; /*0x57225e*/
  v4 = (int16_t)a2 + ((int16_t)v2 << 9); /*0x57226d*/
  if ( v4 >= 0x40000 || (v5 = *(unsigned int **)(dword_87F924 + 4 * v4)) == 0 ) /*0x572287*/
  {
    dword_ABDC74 = a2; /*0x572289*/
    v5 = unk_ABDC50; /*0x57228f*/
  }
  if ( *((char *)v5 + 320) < 0 ) /*0x57229b*/
  {
    v6 = *((unsigned char *)v5 + 286); /*0x57229d*/
    if ( v6 <= 3u ) /*0x5722a6*/
    {
      *((unsigned char *)v5 + 286) = 4; /*0x5722b6*/
    }
    else if ( v6 == 5 ) /*0x5722ab*/
    {
      *((unsigned char *)v5 + 286) = 6; /*0x5722ad*/
    }
  }
  v7 = v5[14] - g_Cell_BuildabilityLUT + 1; /*0x5722ce*/
  if ( v7 == dword_ABC1E8 || v7 == dword_AA0E38 ) /*0x5722d9*/
  {
    IDA_LOBYTE(v7) = Cell::UpdateTileType((int16_t *)&a2, 1, 0); /*0x572327*/
  }
  else if ( v7 == g_TerrainSoundTable2 ) /*0x5722e3*/
  {
    IDA_LOBYTE(v7) = Cell::SetTileType((int16_t *)&a2, g_Cell_BuildabilityLUT + g_TerrainSoundTable2, -1, -1, 0); /*0x5722f3*/
  }
  else if ( v7 == g_TerrainSoundTable2 + 2 ) /*0x572303*/
  {
    IDA_LOBYTE(v7) = Cell::SetTileType((int16_t *)&a2, g_TerrainSoundTable2 + g_Cell_BuildabilityLUT + 2, -1, -1, 0); /*0x572315*/
  }
  return v7; /*0x5722f8*/
}
} // namespace gamemd

// 0x572330
namespace gamemd {
char globalHelper_072330(IUnknown * aP0, int a2)
{
  int v2; // eax
  int16_t v3; // dx
  unsigned int v4; // eax
  unsigned int *v5; // eax
  uint8_t v6; // dl
  int v7; // eax

  v2 = a2 & 7; /*0x572339*/
  v3 = dword_89F688[v2]; /*0x57233c*/
  IDA_LOWORD(v2) = aP0[1] + IDA_HIWORD(dword_89F688[v2]); /*0x572352*/
  IDA_LOWORD(a2) = *aP0 + v3; /*0x572356*/
  IDA_HIWORD(a2) = v2; /*0x57235e*/
  v4 = (int16_t)a2 + ((int16_t)v2 << 9); /*0x57236d*/
  if ( v4 >= 0x40000 || (v5 = *(unsigned int **)(dword_87F924 + 4 * v4)) == 0 ) /*0x572387*/
  {
    dword_ABDC74 = a2; /*0x572389*/
    v5 = unk_ABDC50; /*0x57238f*/
  }
  if ( *((char *)v5 + 320) < 0 ) /*0x57239b*/
  {
    v6 = *((unsigned char *)v5 + 286); /*0x57239d*/
    if ( v6 <= 3u ) /*0x5723a6*/
    {
      *((unsigned char *)v5 + 286) = 5; /*0x5723b6*/
    }
    else if ( v6 == 4 ) /*0x5723ab*/
    {
      *((unsigned char *)v5 + 286) = 6; /*0x5723ad*/
    }
  }
  v7 = v5[14] - g_Cell_BuildabilityLUT + 1; /*0x5723ce*/
  if ( v7 == dword_ABC2B4 || v7 == dword_AA1130 ) /*0x5723d9*/
  {
    IDA_LOBYTE(v7) = Cell::UpdateTileType((int16_t *)&a2, 1, 0); /*0x572429*/
  }
  else if ( v7 == g_TerrainSoundTable2 ) /*0x5723e3*/
  {
    IDA_LOBYTE(v7) = Cell::SetTileType((int16_t *)&a2, g_TerrainSoundTable2 + g_Cell_BuildabilityLUT + 1, -1, -1, 0); /*0x5723f5*/
  }
  else if ( v7 == g_TerrainSoundTable2 + 1 ) /*0x572405*/
  {
    IDA_LOBYTE(v7) = Cell::SetTileType((int16_t *)&a2, g_TerrainSoundTable2 + g_Cell_BuildabilityLUT + 2, -1, -1, 0); /*0x572417*/
  }
  return v7; /*0x5723fa*/
}
} // namespace gamemd

// 0x5746C0
namespace gamemd {
bool sub_5746C0(int a1, int a2)
{
  if ( a1 == dword_AA1548 && *(unsigned char *)(a2 + 282) == 12 ) /*0x5746d3*/
    return 1; /*0x5746d6*/
  if ( a1 == dword_AA0740 && *(unsigned char *)(a2 + 282) == 12 ) /*0x5746e7*/
    return 1; /*0x5746ea*/
  if ( (a1 == g_TerrainSoundTable2 /*0x574712*/
     || a1 == g_TerrainSoundTable2 + 3
     || a1 == g_TerrainSoundTable2 + 1
     || a1 == g_TerrainSoundTable2 + 2)
    && *(unsigned char *)(a2 + 282) == 4 )
  {
    return 1; /*0x574715*/
  }
  if ( a1 == dword_ABC2B4 && *(unsigned char *)(a2 + 282) == 8 ) /*0x57472a*/
    return 1; /*0x57472d*/
  if ( a1 == dword_AA1130 && *(unsigned char *)(a2 + 282) == 8 ) /*0x57473e*/
    return 1; /*0x574741*/
  return (a1 == g_TerrainSoundConfig /*0x5746d5*/
       || a1 == g_TerrainSoundConfig + 3
       || a1 == g_TerrainSoundConfig + 1
       || a1 == g_TerrainSoundConfig + 2)
      && *(unsigned char *)(a2 + 282) == 2;
}
} // namespace gamemd

// 0x578B70
namespace gamemd {
int E4Recv_578B70::sub_578B70(short * a2)
{

  int v2; // edx
  int v3; // esi
  int16_t v4; // ax
  int16_t v5; // bp
  int v6; // edx
  int v7; // ecx
  int v8; // ebx
  int v9; // esi
  int v10; // edi
  int v11; // esi
  unsigned int v12; // ecx
  int v13; // eax

  v2 = *((unsigned int *)this + 64); /*0x578b77*/
  v3 = *((unsigned int *)this + 63); /*0x578b80*/
  v4 = v2 + *((unsigned int *)this + 61) - v3; /*0x578b89*/
  v5 = v2 + v3 + 1; /*0x578b8b*/
  v6 = *((unsigned int *)this + 65); /*0x578b8f*/
  v7 = *((unsigned int *)this + 66); /*0x578b95*/
  v8 = *a2; /*0x578bac*/
  v9 = a2[1]; /*0x578baf*/
  v10 = (v8 + v4 - ((2 * v6 - 1) % 3 != 0) - v5 - v9) / ((2 * v6 - 1) / 3); /*0x578bf4*/
  v11 = v9 - ((2 * v7 - 1) % 3 != 0) - v4 - v5; /*0x578c0d*/
  v12 = (uint64_t)(1431655766LL * (2 * v7 - 1)) >> 32; /*0x578c16*/
  v13 = (v8 + v11) / (int)((v12 >> 31) + v12); /*0x578c24*/
  if ( v10 == 3 ) /*0x578c28*/
    v10 = 2; /*0x578c2a*/
  if ( v13 == 3 ) /*0x578c32*/
    v13 = 2; /*0x578c34*/
  return v13 + v10 + 2 * v13 + 1; /*0x578c3c*/

}
} // namespace gamemd

// 0x578C50
namespace gamemd {
unsigned int * E4Recv_578C50::sub_578C50(unsigned int * a2, int a3)
{

  int v3; // esi
  int v4; // eax
  int v5; // edi
  int v6; // edx
  int16_t v8; // [esp+12h] [ebp-Eh]
  int v9; // [esp+28h] [ebp+8h]

  v3 = ((2 * *((unsigned int *)this + 65) - 1) % 3 != 0) + (2 * *((unsigned int *)this + 65) - 1) / 3 * ((a3 - 1) % 3); /*0x578ca4*/
  v4 = *((unsigned int *)this + 64); /*0x578ccc*/
  v5 = ((2 * *((unsigned int *)this + 66) - 1) % 3 != 0) + (a3 - 1) / 3 * ((2 * *((unsigned int *)this + 66) - 1) / 3); /*0x578cd8*/
  v6 = *((unsigned int *)this + 63); /*0x578cda*/
  v8 = v4 + *((unsigned int *)this + 61) - v6; /*0x578cf0*/
  LOWORD(v9) = v4 + v6 + 1 + (v3 + (v5 & 1) + v5 + (v3 & 1)) / 2; /*0x578d34*/
  HIWORD(v9) = (v5 - v3) / 2 + v8; /*0x578d3f*/
  *a2 = v9; /*0x578d4b*/
  return a2; /*0x578d48*/

}
} // namespace gamemd

// 0x579320
namespace gamemd {
int InitializeTileNeighborTable()
{
  int result; // eax
  int v1; // [esp+4h] [ebp-4h] BYREF

  dword_ABDDA8 = 0; /*0x57934e*/
  dword_ABDDAC = 0; /*0x579361*/
  dword_ABDDB0 = 0; /*0x579375*/
  dword_ABDDB4 = 0; /*0x579389*/
  v1 = 0; /*0x57938e*/
  dword_ABDDB8 = 0; /*0x57939c*/
  dword_ABDDC4 = 0; /*0x5793b1*/
  dword_ABDDBC = 0; /*0x5793bc*/
  dword_ABDDC0 = 0; /*0x5793c2*/
  dword_ABDDC8 = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x5793d4*/
  dword_ABDDCC = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x5793e7*/
  dword_ABDDD0 = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x5793f4*/
  dword_ABDDD4 = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x57940c*/
  dword_ABDDD8 = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x57941f*/
  dword_ABDDDC = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x57942c*/
  dword_ABDDE0 = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x579444*/
  dword_ABDDE4 = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x579457*/
  dword_ABDDE8 = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x579464*/
  dword_ABDDEC = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x57947c*/
  dword_ABDDF0 = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x57948f*/
  dword_ABDDF4 = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x57949c*/
  dword_ABDDF8 = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x5794b4*/
  dword_ABDDFC = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x5794c7*/
  dword_ABDE00 = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x5794d4*/
  dword_ABDE04 = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x5794ec*/
  dword_ABDE08 = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x5794ff*/
  dword_ABDE0C = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x57950c*/
  dword_ABDE10 = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x579524*/
  dword_ABDE14 = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x579537*/
  dword_ABDE18 = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x579544*/
  dword_ABDE1C = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x57955c*/
  dword_ABDE20 = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x579570*/
  dword_ABDE24 = *(unsigned int *)((CellStruct *)(&v1))->Set(1, 0); /*0x57957d*/
  dword_ABDE28 = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x579595*/
  dword_ABDE2C = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x5795a8*/
  dword_ABDE30 = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x5795b5*/
  dword_ABDE34 = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x5795cd*/
  dword_ABDE38 = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x5795e0*/
  dword_ABDE3C = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x5795ed*/
  dword_ABDE40 = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x579605*/
  result = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x579610*/
  dword_ABDE44 = result; /*0x579613*/
  return result; /*0x579612*/
}
} // namespace gamemd

// 0x57A900
namespace gamemd {
int sub_57A900(unsigned int * a1, signed int a2)
{
  int v3; // ebx
  unsigned int v4; // ebp
  Cell *NeighbourContent; // esi
  Cell *v6; // edi
  char IsValidHeight; // al
  bool v8; // bl
  bool v10; // [esp+13h] [ebp-15h]
  int v11; // [esp+14h] [ebp-14h]
  unsigned int v12[4]; // [esp+18h] [ebp-10h]

  v12[1] = 4; /*0x57a913*/
  v12[3] = 4; /*0x57a917*/
  v12[0] = 2; /*0x57a91d*/
  v12[2] = 2; /*0x57a921*/
  v3 = 1; /*0x57a928*/
  v4 = v12[a2 / 2]; /*0x57a92f*/
  NeighbourContent = (Cell *)((Cell *)(a1))->GetNeighbourContent(v4); /*0x57a939*/
  v6 = (Cell *)((Cell *)(NeighbourContent))->GetNeighbourContent(a2); /*0x57a945*/
  v10 = (uint8_t)Cell::IsValidHeight(NeighbourContent) == 0; /*0x57a950*/
  IsValidHeight = Cell::IsValidHeight(v6); /*0x57a955*/
  if ( v10 ) /*0x57a960*/
  {
    while ( IsValidHeight ) /*0x57a96a*/
    {
      v11 = v3 + 1; /*0x57a970*/
      NeighbourContent = (Cell *)((Cell *)(NeighbourContent))->GetNeighbourContent(v4); /*0x57a97b*/
      v6 = (Cell *)((Cell *)(v6))->GetNeighbourContent(v4); /*0x57a985*/
      v8 = (uint8_t)Cell::IsValidHeight(NeighbourContent) == 0; /*0x57a990*/
      IsValidHeight = Cell::IsValidHeight(v6); /*0x57a993*/
      if ( !v8 ) /*0x57a99a*/
        return v11; /*0x57a9a7*/
      v3 = v11; /*0x57a964*/
    }
  }
  return v3; /*0x57a9a0*/
}
} // namespace gamemd

// 0x57A9C0
namespace gamemd {
int * InitializeCliffRampTable()
{
  int *result; // eax
  int v1; // [esp+8h] [ebp-4h] BYREF

  dword_ABDB68 = -65536; /*0x57a9f2*/
  dword_ABDB6C = -65536; /*0x57aa05*/
  dword_ABDB70 = -65536; /*0x57aa1b*/
  v1 = -1; /*0x57aa21*/
  dword_ABDB74 = -65536; /*0x57aa31*/
  dword_ABDB78 = -131072; /*0x57aa44*/
  dword_ABDB7C = -65537; /*0x57aa50*/
  dword_ABDB80 = -1; /*0x57aa56*/
  dword_ABDB84 = *(unsigned int *)((CellStruct *)(&v1))->Set(-1, -1); /*0x57aa63*/
  dword_ABDB88 = *(unsigned int *)((CellStruct *)(&v1))->Set(-1, 0); /*0x57aa7b*/
  dword_ABDB8C = *(unsigned int *)((CellStruct *)(&v1))->Set(-1, 0); /*0x57aa8e*/
  dword_ABDB90 = *(unsigned int *)((CellStruct *)(&v1))->Set(-1, 0); /*0x57aa9b*/
  dword_ABDB94 = *(unsigned int *)((CellStruct *)(&v1))->Set(-1, 0); /*0x57aab4*/
  dword_ABDB98 = *(unsigned int *)((CellStruct *)(&v1))->Set(-2, -1); /*0x57aac8*/
  dword_ABDB9C = *(unsigned int *)((CellStruct *)(&v1))->Set(-2, 0); /*0x57aad5*/
  dword_ABDBA0 = *(unsigned int *)((CellStruct *)(&v1))->Set(-1, 0); /*0x57aae8*/
  dword_ABDBA4 = *(unsigned int *)((CellStruct *)(&v1))->Set(-1, 0); /*0x57ab00*/
  dword_ABDBA8 = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x57ab0d*/
  dword_ABDBAC = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x57ab25*/
  dword_ABDBB0 = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x57ab38*/
  dword_ABDBB4 = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x57ab45*/
  dword_ABDBB8 = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x57ab5d*/
  dword_ABDBBC = *(unsigned int *)((CellStruct *)(&v1))->Set(-1, 0); /*0x57ab70*/
  dword_ABDBC0 = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x57ab7d*/
  dword_ABDBC4 = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x57ab95*/
  dword_ABDBC8 = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x57aba8*/
  dword_ABDBCC = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x57abb5*/
  dword_ABDBD0 = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x57abcd*/
  dword_ABDBD4 = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x57abe0*/
  dword_ABDBD8 = *(unsigned int *)((CellStruct *)(&v1))->Set(0, -1); /*0x57abed*/
  dword_ABDBDC = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x57ac05*/
  dword_ABDBE0 = *(unsigned int *)((CellStruct *)(&v1))->Set(0, -1); /*0x57ac18*/
  dword_ABDBE4 = *(unsigned int *)((CellStruct *)(&v1))->Set(0, -1); /*0x57ac25*/
  dword_ABDBE8 = *(unsigned int *)((CellStruct *)(&v1))->Set(-1, -1); /*0x57ac3d*/
  dword_ABDBEC = *(unsigned int *)((CellStruct *)(&v1))->Set(-1, -1); /*0x57ac50*/
  dword_ABDBF0 = *(unsigned int *)((CellStruct *)(&v1))->Set(-1, 0); /*0x57ac5d*/
  dword_ABDBF4 = *(unsigned int *)((CellStruct *)(&v1))->Set(-1, 0); /*0x57ac75*/
  dword_ABDBF8 = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x57ac88*/
  dword_ABDBFC = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x57ac95*/
  dword_ABDC00 = *(unsigned int *)((CellStruct *)(&v1))->Set(0, -1); /*0x57acad*/
  dword_ABDC04 = *(unsigned int *)((CellStruct *)(&v1))->Set(0, -1); /*0x57acc0*/
  dword_ABDC08 = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 0); /*0x57accd*/
  result = (int *)((CellStruct *)(&v1))->Set(0, 0); /*0x57acd8*/
  dword_ABDC0C = *result; /*0x57ace0*/
  return result; /*0x57acdf*/
}
} // namespace gamemd
