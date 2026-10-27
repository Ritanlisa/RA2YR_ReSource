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
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Rect_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Coord2D_e4.hpp"  // G42.36 C2027 supply
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
#include "e4/classes/CellLand_e4.hpp"  // G57w10 D supply (IsBuildable 0x4863D0)
#include "e4/classes/TileData_e4.hpp"  // G57w10 D supply
#include "e4/classes/Cliff_e4.hpp"

// 0x574600
namespace gamemd {  // G42.18 ns repair
bool sub_574600(int a1, int a2, int a3)
{

  char v3; // bl
  unsigned __int8 *v4; // edx
  int v5; // eax

  v3 = 2; /*0x574601*/
  if ( a2 == 2 ) /*0x574609*/
  {
    v4 = a3; /*0x574610*/
    v3 = 4; /*0x574616*/
    if ( a1 == dword_ABC1E8 && a3[282] == 4 || a1 == dword_AA0E38 && a3[282] == 4 ) /*0x574634*/
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
    if ( a1 == dword_ABC1D0 && a3[282] == 2 ) /*0x574667*/
      return 1; /*0x57466d*/
    if ( a1 == dword_AA1540 && a3[282] == 2 ) /*0x57467e*/
      return 1; /*0x574684*/
    v5 = g_TerrainSoundConfig; /*0x574687*/
    if ( a1 != g_TerrainSoundConfig && a1 != g_TerrainSoundConfig + 3 && a1 != g_TerrainSoundConfig + 1 ) /*0x57469c*/
      goto LABEL_20; /*0x57469c*/
  }
  return v4[282] == v3; /*0x574669*/

}
}  // G42.18 ns repair
// 0x575EE0
namespace gamemd {
Coord * * sub_575EE0(void * a1, int a2)
{
  void *v4; // eax
  uint16_t v5; // di
  void *v15; // esi
  void *v27; // esi

  uint16_t v2; // bp
  v2 = (*(((unsigned short *)&(a2)) + 1)); /*0x575eea*/
  char v3 = 0; // bl /*0x575eef*/
  if ( (*(((unsigned short *)&(a1)) + 1)) == (*(((unsigned short *)&(a2)) + 1)) ) /*0x575ef6*/
  {
    v4 = a1; /*0x575ef8*/
    v5 = a2; /*0x575efc*/
    v3 = 1; /*0x575f03*/
    if ( (int16_t)a1 > (int16_t)a2 ) /*0x575f05*/
    {
      v4 = (void *)a2; /*0x575f09*/
      v2 = (*(((unsigned short *)&(a1)) + 1)); /*0x575f11*/
      v5 = (uint16_t)a1; /*0x575f11*/
    }
  }
  else if ( (*((signed short *)(((unsigned char *)&(a1)) + 2))) <= (*((signed short *)(((unsigned char *)&(a2)) + 2))) ) /*0x575f18*/
  {
    v5 = a2; /*0x575f2f*/
    v4 = a1; /*0x575f33*/
  }
  else
  {
    v4 = (void *)a2; /*0x575f1e*/
    v5 = (uint16_t)a1; /*0x575f22*/
    a2 = (int)a1; /*0x575f24*/
    v2 = (*(((unsigned short *)&(a1)) + 1)); /*0x575f28*/
  }
  a2 = (int)v4; /*0x575f37*/
  while ( a2 != (((unsigned int)(unsigned short)(v5)) | ((unsigned int)(unsigned short)(v2) << 16)) ) /*0x575f43*/
  {
    unsigned int v6; // eax
    v6 = (int16_t)a2 + ((*((signed short *)(((unsigned char *)&(a2)) + 2))) << 9); /*0x575f5b*/
    void *v7; // eax
    if ( v6 >= 0x40000 || (v7 = *(void **)(dword_87F924 + 4 * v6)) == 0 ) /*0x575f71*/
    {
      dword_ABDC74 = a2; /*0x575f77*/
      v7 = &unk_ABDC50; /*0x575f7c*/
    }
    void **v8; // ecx
    v8 = (void **)*((unsigned int *)v7 + 15); /*0x575f81*/
    if ( v8 ) /*0x575f86*/
      TeamClass::Update_0(v8, 31, 0, dword_ABD480, 0, 0); /*0x575f97*/
    if ( v3 ) /*0x575f9e*/
    {
      unsigned int v9; // eax
      v9 = (int16_t)(dword_89F698 + a2) + ((int16_t)((*(((unsigned short *)&(a2)) + 1)) + (*(((unsigned short *)&(dword_89F698)) + 1))) << 9); /*0x575fcd*/
      void *v10; // eax
      if ( v9 >= 0x40000 || (v10 = *(void **)(dword_87F924 + 4 * v9)) == 0 ) /*0x575fe3*/
      {
        v10 = &unk_ABDC50; /*0x575fe9*/
        int v37; // [esp+30h] [ebp+4h]
        (*((unsigned short *)&(v37))) = dword_89F698 + a2; /*0x575fba*/
        (*(((unsigned short *)&(v37)) + 1)) = (*(((unsigned short *)&(a2)) + 1)) + (*(((unsigned short *)&(dword_89F698)) + 1)); /*0x575fc2*/
        dword_ABDC74 = v37; /*0x575fee*/
      }
      void **v11; // ecx
      v11 = (void **)*((unsigned int *)v10 + 15); /*0x575ff4*/
      if ( v11 ) /*0x575ff9*/
        TeamClass::Update_0(v11, 31, 0, dword_ABD480, 0, 0); /*0x576009*/
      int v12; // ecx
      int v32; // [esp+18h] [ebp-14h] BYREF
      v12 = (int)(*CellStruct::Add(&a2, &v32, dword_89F688)); /*0x576021*/
      unsigned int v13; // eax
      v13 = (int16_t)v12 + ((*((signed short *)(((unsigned char *)&(v12)) + 2))) << 9); /*0x576032*/
      void *v14; // eax
      if ( v13 < 0x40000 && (v14 = *(void **)(dword_87F924 + 4 * v13)) != 0 ) /*0x576048*/
      {
        v15 = v14; /*0x57604a*/
      }
      else
      {
        dword_ABDC74 = v12; /*0x57604e*/
        v15 = &unk_ABDC50; /*0x576054*/
      }
      void **v16; // ecx
      v16 = (void **)*((unsigned int *)v15 + 15); /*0x576059*/
      if ( v16 ) /*0x57605e*/
        TeamClass::Update_0(v16, 31, 0, dword_ABD480, 0, 0); /*0x57606e*/
      int v17; // ecx
      int v33; // [esp+1Ch] [ebp-10h] BYREF
      v17 = (int)(*CellStruct::Add((unsigned short *)v15 + 18, &v33, dword_89F688)); /*0x576085*/
      unsigned int v18; // eax
      v18 = (int16_t)v17 + ((*((signed short *)(((unsigned char *)&(v17)) + 2))) << 9); /*0x576096*/
      if ( v18 >= 0x40000 || (v4 = *(void **)(dword_87F924 + 4 * v18)) == 0 ) /*0x5760ac*/
      {
        dword_ABDC74 = v17; /*0x5760ae*/
        v4 = &unk_ABDC50; /*0x5760b4*/
      }
      void **v19; // ecx
      v19 = (void **)v4->u32_3C; /*0x5760b9*/
      if ( v19 ) /*0x5760be*/
        (*((unsigned char *)&(v4))) = TeamClass::Update_0(v19, 31, 0, dword_ABD480, 0, 0); /*0x5760ce*/
      (*((unsigned short *)&(a2))) = a2 + 1; /*0x5760d3*/
    }
    else
    {
      int v20; // ecx
      int v34; // [esp+20h] [ebp-Ch] BYREF
      v20 = (int)(*CellStruct::Add(&a2, &v34, &dword_89F690)); /*0x5760f0*/
      unsigned int v21; // eax
      v21 = (int16_t)v20 + ((*((signed short *)(((unsigned char *)&(v20)) + 2))) << 9); /*0x576101*/
      void *v22; // eax
      if ( v21 >= 0x40000 || (v22 = *(void **)(dword_87F924 + 4 * v21)) == 0 ) /*0x576117*/
      {
        dword_ABDC74 = v20; /*0x576119*/
        v22 = &unk_ABDC50; /*0x57611f*/
      }
      void **v23; // ecx
      v23 = (void **)*((unsigned int *)v22 + 15); /*0x576124*/
      if ( v23 ) /*0x576129*/
        TeamClass::Update_0(v23, 31, 0, dword_ABD480, 0, 0); /*0x576139*/
      int v24; // ecx
      int v35; // [esp+24h] [ebp-8h] BYREF
      v24 = (int)(*CellStruct::Add(&a2, &v35, &dword_89F6A0)); /*0x576151*/
      unsigned int v25; // eax
      v25 = (int16_t)v24 + ((*((signed short *)(((unsigned char *)&(v24)) + 2))) << 9); /*0x576162*/
      void *v26; // eax
      if ( v25 < 0x40000 && (v26 = *(void **)(dword_87F924 + 4 * v25)) != 0 ) /*0x576178*/
      {
        v27 = v26; /*0x57617a*/
      }
      else
      {
        dword_ABDC74 = v24; /*0x57617e*/
        v27 = &unk_ABDC50; /*0x576184*/
      }
      void **v28; // ecx
      v28 = (void **)*((unsigned int *)v27 + 15); /*0x576189*/
      if ( v28 ) /*0x57618e*/
        TeamClass::Update_0(v28, 31, 0, dword_ABD480, 0, 0); /*0x57619e*/
      int v31; // [esp+14h] [ebp-18h] BYREF
      int v36; // [esp+28h] [ebp-4h] BYREF
      v31 = (int)(*CellStruct::Add((unsigned short *)v27 + 18, &v36, &dword_89F6A0)); /*0x5761c1*/
      v4 = ((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&v31); /*0x5761c5*/
      void **v29; // ecx
      v29 = (void **)v4->u32_3C; /*0x5761ca*/
      if ( v29 ) /*0x5761cf*/
        (*((unsigned char *)&(v4))) = TeamClass::Update_0(v29, 31, 0, dword_ABD480, 0, 0); /*0x5761e0*/
      ++(*(((unsigned short *)&(a2)) + 1)); /*0x5761e5*/
    }
  }
  return (gamemd::Coord **)((char)v4); /*0x5761ef*/
}
}
// 0x578E60
namespace gamemd {
void* CreateMapObject(ProgressScreenClass * aP0, int aP1)
{

  char v2; // bl
  int v3; // esi
  unsigned int *v4; // ebp
  unsigned int *v5; // edi
  int v6; // edi
  int i; // esi
  char *Entry; // eax
  int j; // eax
  int k; // esi
  char v12; // [esp+13h] [ebp-5h]

  v2 = 1; /*0x578e72*/
  v12 = 0; /*0x578e74*/
  if ( !dword_ABED10 ) /*0x578e79*/
  {
    v3 = g_MapCellWidth * g_MapCellWidth; /*0x578e81*/
    v4 = __2_YAPAXI_Z(80 * g_MapCellWidth * g_MapCellWidth); /*0x578e90*/
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
      dword_ABED10 = v4; /*0x578eb2*/
    }
    else
    {
      dword_ABED10 = 0; /*0x578eba*/
    }
    v12 = 1; /*0x578ec4*/
  }
  v6 = g_MapCellWidth * g_MapCellWidth; /*0x578ed1*/
  for ( i = 0; i < v6; Entry[74] = 1 ) /*0x578ed8*/
    Entry = GetTileDataEntry(i++); /*0x578edc*/
  ((Mouse *)&dword_87F7E8)->SetBounds(0); /*0x578ef0*/
  dword_87F8F8 = dword_87F8DC; /*0x578f00*/
  dword_87F8F4 = 1; /*0x578f0d*/
  dword_87F8FC = dword_87F8DC - 1; /*0x578f16*/
  dword_87F900 = (dword_87F8DC << 11) + dword_87F924 + 4; /*0x578f25*/
  for ( j = LayerClass::CellIteratorNext(&dword_87F7E8); j; j = LayerClass::CellIteratorNext(&dword_87F7E8) ) /*0x578f35*/
  {
    if ( !v2 ) /*0x578f39*/
      break; /*0x578f39*/
    v2 = Cliff::ProcessTransitions(j, aP1); /*0x578f4b*/
  }
  dword_87F8F8 = dword_87F8DC; /*0x578f61*/
  dword_87F8F4 = 1; /*0x578f66*/
  dword_87F8FC = dword_87F8DC - 1; /*0x578f72*/
  dword_87F900 = (dword_87F8DC << 11) + dword_87F924 + 4; /*0x578f81*/
  for ( k = LayerClass::CellIteratorNext(&dword_87F7E8); k; k = LayerClass::CellIteratorNext(&dword_87F7E8) ) /*0x578f8f*/
  {
    if ( !v2 ) /*0x578f93*/
      break; /*0x578f93*/
    if ( !*(unsigned char *)(k + 284) && ((Cell *)k)->IsEmpty() ) /*0x578fa1*/
      v2 = Terrain::SelectTileType(k, aP1); /*0x578fb5*/
  }
  dword_880990 = 0; /*0x578fcd*/
  if ( dword_88098C ) /*0x578fd5*/
  {
    (*(void (**)(int, int))(*(unsigned int *)dword_88098C + 32))(dword_88098C, 1); /*0x578fdb*/
    dword_88098C = 0; /*0x578fde*/
  }
  if ( v12 ) /*0x578fea*/
  {
    __3_YAXPAX_Z(dword_ABED10); /*0x578ff2*/
    dword_ABED10 = 0; /*0x578ffa*/
  }
  return v2; /*0x579000*/

}
}
// 0x57A430
namespace gamemd {
MapClass * * RecursiveCellClassNeighbourUpdate(MapClass * aP0, IUnknown * aP1, IUnknown * aP2, int aP1a, int a5)
{
  int v51; // [esp+1Ch] [ebp-Ch] BYREF

  int v3; // ebp
  v3 = *(unsigned int *)i.__pad_0; /*0x57a435*/
  int v5; // eax
  v5 = *(unsigned int *)(*(unsigned int *)i.__pad_0 + 36); /*0x57a43d*/
  Cell *v52; // [esp+24h] [ebp-4h]
  v52 = a1; /*0x57a444*/
  char v44; // [esp+13h] [ebp-15h]
  v44 = 0; /*0x57a448*/
  *(unsigned int *)i.__pad_0 = v5; /*0x57a44d*/
  char *CellData; // esi
  CellData = Tactical::GetCellData(&i); /*0x57a45b*/
  *((unsigned int *)CellData + 16) = Cell::GetTerrainMask(a1, (int *)v3, 2); /*0x57a467*/
  int TerrainMask; // eax
  TerrainMask = Cell::GetTerrainMask(a1, (int *)v3, 0); /*0x57a46a*/
  char v8 = TerrainMask; // bl /*0x57a46f*/
  *(unsigned int *)i.__pad_0 = TerrainMask; /*0x57a473*/
  if ( TerrainMask > 0 ) /*0x57a477*/
  {
    if ( TerrainMask == 11 || TerrainMask == 26 ) /*0x57a485*/
      v44 = 1; /*0x57a487*/
    if ( (TerrainMask & 0xA0) == 0xA0 && (TerrainMask & 0x11) == 0 /*0x57a4cb*/
      || (TerrainMask & 0x82) == 0x82 && (TerrainMask & 0x44) == 0
      || (TerrainMask & 0xA) == 0xA && (TerrainMask & 0x11) == 0
      || (TerrainMask & 0x28) == 0x28 && (TerrainMask & 0x44) == 0 )
    {
      v44 = 1; /*0x57a4cd*/
    }
    if ( (TerrainMask & 0x20) != 0 ) /*0x57a4d5*/
    {
      int v49; // [esp+18h] [ebp-10h]
      v49 = *(unsigned int *)(v3 + 36); /*0x57a4de*/
      unsigned int v9; // eax
      v9 = (int16_t)(v49 + 1) + ((*((signed short *)(((unsigned char *)&(v49)) + 2))) << 9); /*0x57a4fd*/
      CellClass *v10; // eax
      if ( v9 >= 0x40000 || (v10 = *(CellClass **)(dword_87F924 + 4 * v9)) == 0 ) /*0x57a513*/
      {
        v10 = (gamemd::CellClass *)(&unk_ABDC50);
        int v45; // [esp+14h] [ebp-14h]
        (*((unsigned short *)&(v45))) = v49 + 1; /*0x57a4ef*/
        (*(((unsigned short *)&(v45)) + 1)) = (*(((unsigned short *)&(*(unsigned int *)(v3 + 36))) + 1)); /*0x57a4ea*/
        dword_ABDC74 = v45; /*0x57a51e*/
      }
      v51 = Cell::GetTerrainMask(a1, &v10->mapCoords, 0); /*0x57a52e*/
      int v50; // [esp+18h] [ebp-10h]
      v50 = *(unsigned int *)(v3 + 36); /*0x57a535*/
      unsigned int v11; // eax
      v11 = (int16_t)(v50 + 2) + ((*((signed short *)(((unsigned char *)&(v50)) + 2))) << 9); /*0x57a554*/
      CellClass *v12; // eax
      if ( v11 >= 0x40000 || (v12 = *(CellClass **)(dword_87F924 + 4 * v11)) == 0 ) /*0x57a56a*/
      {
        int v46; // [esp+14h] [ebp-14h]
        (*((unsigned short *)&(v46))) = v50 + 2; /*0x57a546*/
        (*(((unsigned short *)&(v46)) + 1)) = (*(((unsigned short *)&(*(unsigned int *)(v3 + 36))) + 1)); /*0x57a541*/
        dword_ABDC74 = v46; /*0x57a570*/
        v12 = (gamemd::CellClass *)(&unk_ABDC50); /*0x57a575*/
      }
      char v13; // al
      v13 = Cell::GetTerrainMask(a1, &v12->mapCoords, 0); /*0x57a57f*/
      if ( (v51 & 2) != 0 || (v13 & 2) != 0 ) /*0x57a58d*/
        v44 = 1; /*0x57a58f*/
    }
    if ( (v8 & 2) != 0 ) /*0x57a597*/
    {
      v51 = *(unsigned int *)(v3 + 36); /*0x57a5a0*/
      int v47; // [esp+14h] [ebp-14h]
      (*(((unsigned short *)&(v47)) + 1)) = (*(((unsigned short *)&(v51)) + 1)); /*0x57a5ac*/
      unsigned int v14; // eax
      v14 = (int16_t)(v51 - 1) + ((*((signed short *)(((unsigned char *)&(v51)) + 2))) << 9); /*0x57a5bf*/
      CellClass *v15; // eax
      if ( v14 >= 0x40000 || (v15 = *(CellClass **)(dword_87F924 + 4 * v14)) == 0 ) /*0x57a5d5*/
      {
        (*((unsigned short *)&(v47))) = v51 - 1; /*0x57a5b1*/
        dword_ABDC74 = v47; /*0x57a5db*/
        v15 = (gamemd::CellClass *)(&unk_ABDC50); /*0x57a5e0*/
      }
      char v16; // bl
      v16 = Cell::GetTerrainMask(a1, &v15->mapCoords, 0); /*0x57a5ef*/
      v51 = *(unsigned int *)(v3 + 36); /*0x57a5f4*/
      int v48; // [esp+14h] [ebp-14h]
      (*(((unsigned short *)&(v48)) + 1)) = (*(((unsigned short *)&(v51)) + 1)); /*0x57a600*/
      unsigned int v17; // eax
      v17 = (int16_t)(v51 - 2) + ((*((signed short *)(((unsigned char *)&(v51)) + 2))) << 9); /*0x57a613*/
      CellClass *v18; // eax
      if ( v17 >= 0x40000 || (v18 = *(CellClass **)(dword_87F924 + 4 * v17)) == 0 ) /*0x57a629*/
      {
        (*((unsigned short *)&(v48))) = v51 - 2; /*0x57a605*/
        dword_ABDC74 = v48; /*0x57a62f*/
        v18 = (gamemd::CellClass *)(&unk_ABDC50); /*0x57a634*/
      }
      char v19; // al
      v19 = Cell::GetTerrainMask(a1, &v18->mapCoords, 0); /*0x57a63e*/
      if ( (v16 & 0x20) != 0 || (v19 & 0x20) != 0 ) /*0x57a64a*/
        v44 = 1; /*0x57a64c*/
      v8 = i.__pad_0[0]; /*0x57a651*/
    }
    if ( (v8 & 8) != 0 ) /*0x57a658*/
    {
      v51 = *(unsigned int *)(v3 + 36); /*0x57a661*/
      unsigned int v20; // eax
      v20 = (int16_t)v51 + ((int16_t)((*(((unsigned short *)&(v51)) + 1)) - 1) << 9); /*0x57a67f*/
      CellClass *v21; // eax
      if ( v20 >= 0x40000 || (v21 = *(CellClass **)(dword_87F924 + 4 * v20)) == 0 ) /*0x57a695*/
      {
        dword_ABDC74 = (unsigned int)((gamemd::CellClass *)(v51 - 0x10000));
        v21 = (gamemd::CellClass *)(&unk_ABDC50); /*0x57a6a0*/
      }
      char v22; // bl
      v22 = Cell::GetTerrainMask(a1, &v21->mapCoords, 0); /*0x57a6b2*/
      v51 = *(unsigned int *)(v3 + 36); /*0x57a6b4*/
      unsigned int v23; // eax
      v23 = (int16_t)v51 + ((int16_t)((*(((unsigned short *)&(v51)) + 1)) - 2) << 9); /*0x57a6d2*/
      CellClass *v24; // eax
      if ( v23 >= 0x40000 || (v24 = *(CellClass **)(dword_87F924 + 4 * v23)) == 0 ) /*0x57a6e8*/
      {
        dword_ABDC74 = (unsigned int)((gamemd::CellClass *)(v51 - 0x20000));
        v24 = (gamemd::CellClass *)(&unk_ABDC50); /*0x57a6f3*/
      }
      char v25; // al
      v25 = Cell::GetTerrainMask(a1, &v24->mapCoords, 0); /*0x57a6fd*/
      if ( v22 < 0 || v25 < 0 ) /*0x57a709*/
        v44 = 1; /*0x57a70b*/
      v8 = i.__pad_0[0]; /*0x57a710*/
    }
    if ( v8 < 0 ) /*0x57a717*/
    {
      v51 = *(unsigned int *)(v3 + 36); /*0x57a720*/
      unsigned int v26; // eax
      v26 = (int16_t)v51 + ((int16_t)((*(((unsigned short *)&(v51)) + 1)) + 1) << 9); /*0x57a73e*/
      CellClass *v27; // eax
      if ( v26 >= 0x40000 || (v27 = *(CellClass **)(dword_87F924 + 4 * v26)) == 0 ) /*0x57a754*/
      {
        dword_ABDC74 = &v51->u32_10000;
        v27 = (gamemd::CellClass *)(&unk_ABDC50); /*0x57a75f*/
      }
      char v28; // bl
      v28 = Cell::GetTerrainMask(a1, &v27->mapCoords, 0); /*0x57a771*/
      v51 = *(unsigned int *)(v3 + 36); /*0x57a773*/
      unsigned int v29; // eax
      v29 = (int16_t)v51 + ((int16_t)((*(((unsigned short *)&(v51)) + 1)) + 2) << 9); /*0x57a791*/
      CellClass *v30; // eax
      if ( v29 >= 0x40000 || (v30 = *(CellClass **)(dword_87F924 + 4 * v29)) == 0 ) /*0x57a7a7*/
      {
        dword_ABDC74 = &v51->u32_20000;
        v30 = (gamemd::CellClass *)(&unk_ABDC50); /*0x57a7b2*/
      }
      char v31; // al
      v31 = Cell::GetTerrainMask(a1, &v30->mapCoords, 0); /*0x57a7bc*/
      if ( (v28 & 8) != 0 || (v31 & 8) != 0 ) /*0x57a7c8*/
        v44 = 1; /*0x57a7ca*/
      v8 = i.__pad_0[0]; /*0x57a7cf*/
    }
    if ( (v8 & 0x88) == 0x88 || (v8 & 0x22) == 0x22 || v44 ) /*0x57a7ee*/
    {
      *(unsigned int *)i.__pad_0 = *(unsigned int *)(v3 + 36); /*0x57a801*/
      int TileDataField14; // eax
      TileDataField14 = MapClass::GetTileDataField14((int16_t *)i.__pad_0); /*0x57a805*/
      int v33; // edx
      v33 = *(unsigned int *)&i.Tactical_field_0x2[2]; /*0x57a80a*/
      char Tactical_field_0x8; // cl
      Tactical_field_0x8 = i.Tactical_field_0x8; /*0x57a80e*/
      if ( TileDataField14 > 0 /*0x57a81c*/
        && TileDataField14 != *(unsigned int *)&i.Tactical_field_0x2[2]
        && !(*((unsigned char *)&(i.Tactical_field_0x8))) )
      {
        return 0; /*0x57a827*/
      }
      int v36 = g_CellPassabilityLUT; // eax /*0x57a82a*/
      *(unsigned char *)(v3 + 282) = 0; /*0x57a82f*/
      *(unsigned int *)(v3 + 56) = v36; /*0x57a838*/
      *(unsigned int *)i.__pad_0 = *(unsigned int *)(v3 + 36); /*0x57a846*/
      if ( Tactical_field_0x8 ) /*0x57a83b*/
        MapClass::SetObstruction((int16_t *)i.__pad_0, 0); /*0x57a84b*/
      else
        MapClass::SetObstruction((int16_t *)i.__pad_0, v33); /*0x57a85f*/
      unsigned int v37 = 0; // eax /*0x57a864*/
      *(unsigned int *)i.__pad_0 = 0; /*0x57a866*/
      do /*0x57a8e6*/
      {
        unsigned int *NeighbourContent; // esi
        NeighbourContent = (unsigned int *)(((Cell *)v3)->GetNeighbourContent(v37));
        int v39; // edx
        v39 = NeighbourContent[9]; /*0x57a87a*/
        v51 = v39; /*0x57a87f*/
        int v40; // edi
        v40 = (*((signed short *)(((unsigned char *)&(v39)) + 2))) + (int16_t)v39; /*0x57a88b*/
        if ( v40 > dword_ABED04 /*0x57a8b0*/
          && (int16_t)v51 - (*((signed short *)(((unsigned char *)&(v51)) + 2))) < dword_ABED04
          && (*((signed short *)(((unsigned char *)&(v51)) + 2))) - (int16_t)v51 < dword_ABED04
          && v40 <= dword_ABED08 )
        {
          v51 = (int)((char *)(v39));
          char *v41; // eax
          v41 = (char *)(((Tactical *)&v51)->GetCellData()); /*0x57a8ba*/
          int v42 = i.Tactical_field_0x8; // edx /*0x57a8bf*/
          Cell *v43 = v52; // ecx /*0x57a8c3*/
          v41->u32_40 = -1; /*0x57a8c7*/
          RecursiveCellClassNeighbourUpdate(v43, v42, (int)NeighbourContent, *(int *)&i.Tactical_field_0x2[2], v42); /*0x57a8d5*/
        }
        v37 = ++*(unsigned int *)i.__pad_0; /*0x57a8de*/
      }
      while ( *(int *)i.__pad_0 < 8 ); /*0x57a8e6*/
    }
  }
  return (gamemd::MapClass **)(1);
}
}
// 0x57ACF0
namespace gamemd {
bool GenerateMapClassCliffTransitions(void * a1, void * a2, void * a3, void * a4, void * a5, void * a6)
{
  int v7; // eax
  void * v8;
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

  v39[1] = (unsigned int)((int)(a1));
  v7 = Range_RandomInt(0, 5u); /*0x57ad04*/
  v8 = (void *)((int)(a4)); /*0x57ad09*/
  v9 = v7; /*0x57ad0d*/
  if ( a4 == (void *)(2) ) /*0x57ad12*/
    TerrainMask = Cell::GetTerrainMask((int *)(a1), &a3->q000, 1); /*0x57ad1b*/
  else
    TerrainMask = Cell::GetTerrainMask((int *)(a1), &a3->q000, 0); /*0x57ad26*/
  v11 = TerrainMask; /*0x57ad2b*/
  if ( !TerrainMask ) /*0x57ad2f*/
    return 1; /*0x57ad2f*/
  if ( v8 != 2 ) /*0x57ad38*/
  {
    if ( (TerrainMask & 2) != 0 ) /*0x57ae12*/
    {
      v39[0] = 1; /*0x57ae1e*/
      NeighbourContent = (Cell *)(a3)->GetNeighbourContent(4u); /*0x57ae2b*/
      v15 = (Cell *)(NeighbourContent)->GetNeighbourContent(2u); /*0x57ae38*/
      v31 = (uint8_t)(NeighbourContent)->IsValidHeight() == 0; /*0x57ae43*/
      IsValidHeight = (v15)->IsValidHeight(); /*0x57ae48*/
      if ( v31 ) /*0x57ae53*/
      {
        do /*0x57ae93*/
        {
          if ( !IsValidHeight ) /*0x57ae57*/
            break; /*0x57ae57*/
          ++v39[0]; /*0x57ae62*/
          NeighbourContent = (Cell *)(NeighbourContent)->GetNeighbourContent(4u); /*0x57ae6f*/
          v15 = (Cell *)(v15)->GetNeighbourContent(4u); /*0x57ae78*/
          v32 = (uint8_t)(NeighbourContent)->IsValidHeight() == 0; /*0x57ae83*/
          IsValidHeight = (v15)->IsValidHeight(); /*0x57ae88*/
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
      v17 = (Cell *)(a3)->GetNeighbourContent(4u); /*0x57aeea*/
      v18 = (Cell *)(v17)->GetNeighbourContent(6u); /*0x57aef7*/
      v33 = (uint8_t)(v17)->IsValidHeight() == 0; /*0x57af02*/
      v19 = (v18)->IsValidHeight(); /*0x57af07*/
      if ( v33 ) /*0x57af12*/
      {
        do /*0x57af52*/
        {
          if ( !v19 ) /*0x57af16*/
            break; /*0x57af16*/
          ++v39[0]; /*0x57af21*/
          v17 = (Cell *)(v17)->GetNeighbourContent(4u); /*0x57af2e*/
          v18 = (Cell *)(v18)->GetNeighbourContent(4u); /*0x57af37*/
          v34 = (uint8_t)(v17)->IsValidHeight() == 0; /*0x57af42*/
          v19 = (v18)->IsValidHeight(); /*0x57af47*/
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
      v20 = (Cell *)(a3)->GetNeighbourContent(2u); /*0x57afa4*/
      v21 = (Cell *)(v20)->GetNeighbourContent(4u); /*0x57afb1*/
      v35 = (uint8_t)(v20)->IsValidHeight() == 0; /*0x57afbc*/
      v22 = (v21)->IsValidHeight(); /*0x57afc1*/
      if ( v35 ) /*0x57afcc*/
      {
        do /*0x57b00c*/
        {
          if ( !v22 ) /*0x57afd0*/
            break; /*0x57afd0*/
          ++v39[0]; /*0x57afdb*/
          v20 = (Cell *)(v20)->GetNeighbourContent(2u); /*0x57afe8*/
          v21 = (Cell *)(v21)->GetNeighbourContent(2u); /*0x57aff1*/
          v36 = (uint8_t)(v20)->IsValidHeight() == 0; /*0x57affc*/
          v22 = (v21)->IsValidHeight(); /*0x57b001*/
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
            return 1; /*0x57b117*/
          v12 = (v9 & 1) + 37; /*0x57b120*/
        }
        goto LABEL_69; /*0x57b0f8*/
      }
      v39[0] = 1; /*0x57b04a*/
      v23 = (Cell *)(a3)->GetNeighbourContent(2u); /*0x57b057*/
      v24 = (Cell *)(v23)->GetNeighbourContent(0); /*0x57b064*/
      v37 = (uint8_t)(v23)->IsValidHeight() == 0; /*0x57b06f*/
      v25 = (v24)->IsValidHeight(); /*0x57b074*/
      if ( v37 ) /*0x57b07f*/
      {
        do /*0x57b0bf*/
        {
          if ( !v25 ) /*0x57b083*/
            break; /*0x57b083*/
          ++v39[0]; /*0x57b08e*/
          v23 = (Cell *)(v23)->GetNeighbourContent(2u); /*0x57b09b*/
          v24 = (Cell *)(v24)->GetNeighbourContent(2u); /*0x57b0a4*/
          v38 = (uint8_t)(v23)->IsValidHeight() == 0; /*0x57b0af*/
          v25 = (v24)->IsValidHeight(); /*0x57b0b4*/
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
        return 1; /*0x57b127*/
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
      return 1; /*0x57ade1*/
    if ( (TerrainMask & 0x44) == 0x44 ) /*0x57adee*/
    {
      v12 = (v9 & 1) + 31; /*0x57adf3*/
      goto LABEL_69; /*0x57adf6*/
    }
    v13 = (TerrainMask & 4) != 0 ? 5 : 29;
  }
  LABEL_71:
  v26 = a3; /*0x57b12d*/
  *(unsigned int *)&g_RadarBlipManager = *(unsigned int *)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[328] + 4 * (v13 + dword_ABAD28) - 4); /*0x57b143*/
  v27 = *&a3->outBuffer; /*0x57b149*/
  v28 = g_MissionQueueFrame.briefing[v13 + 71]; /*0x57b14c*/
  v29 = (*(((unsigned short *)&(g_MissionQueueFrame.briefing[v13 + 71])) + 1)); /*0x57b154*/
  (*((unsigned short *)&(a3))) = v27 + v28; /*0x57b168*/
  (*(((unsigned short *)&(a3)) + 1)) = (*(((unsigned short *)&(v27)) + 1)) + v29; /*0x57b16d*/
  v39[0] = a3; /*0x57b17e*/
  ((Tactical *)&DataGlobal_87F7E8)->MouseMove(&v40, v39); /*0x57b189*/
  (*((unsigned char *)&(a3))) = 1; /*0x57b192*/
  if ( a4 == 1 ) /*0x57b19a*/
  {
    GenerateTerrainMap(0, 0, v26->Cell_field_0x11B, a5, &a3, a6); /*0x57b1b7*/
  }
  else
  {
    if ( a4 != 2 ) /*0x57b1bc*/
      return 1; /*0x57b1bc*/
    GenerateTerrainMap(dword_ABAD28, dword_ABAD28 + 41, v26->Cell_field_0x11B, a5, &a3, a6); /*0x57b1e3*/
  }
  return (unsigned char)a3 != 0; /*0x57b1ee*/
}
}
// 0x57B440
namespace gamemd {
MapClass * * GenerateTerrainMap(MouseClass * aP0, MouseClass * aP1, MouseClass * aP2, MouseClass * aP3, MouseClass * aP4, MouseClass * aP5)
{

  int v6; // ebp
  int v7; // edi
  int v8; // ecx
  __int16 v9; // ax
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  unsigned int v13; // eax
  Cell *v14; // esi
  unsigned int v15; // ebx
  unsigned __int8 *v16; // ebp
  int TileDataField14; // eax
  int v18; // edi
  int v19; // eax
  int v20; // ecx
  __int64 v21; // rax
  int v22; // eax
  int v23; // edi
  int v24; // ebp
  int Cell_field_0x38; // eax
  int v26; // ecx
  int v28; // eax
  int v29; // [esp+10h] [ebp-1Ch]
  int v30; // [esp+14h] [ebp-18h]
  int v31; // [esp+18h] [ebp-14h] BYREF
  int v32; // [esp+1Ch] [ebp-10h]
  int v33; // [esp+20h] [ebp-Ch]
  unsigned int *v34; // [esp+24h] [ebp-8h]
  unsigned __int8 *v35; // [esp+28h] [ebp-4h]

  if ( (*(int (**)(int))(*(unsigned int *)dword_880990 + 44))(dword_880990) != 18 ) /*0x57b455*/
    return 0; /*0x57b455*/
  if ( aP5 ) /*0x57b461*/
    aP3 = 0; /*0x57b463*/
  v6 = dword_880990; /*0x57b46b*/
  v29 = dword_880990; /*0x57b473*/
  v34 = (unsigned int *)(*(int (**)(int))(*(unsigned int *)dword_880990 + 156))(dword_880990); /*0x57b482*/
  if ( !v34 ) /*0x57b486*/
    return 0; /*0x57b486*/
  v30 = 0; /*0x57b492*/
  if ( v6->u32_2E8 <= 0 ) /*0x57b49c*/
    return 1; /*0x57b70e*/
  v7 = dword_87F8DC; /*0x57b4a2*/
  while ( 1 ) /*0x57b4a8*/
  {
    v8 = v6->u32_2E4; /*0x57b4a8*/
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
    (v33) = ((v33) & ~0xFFFF) | ((v9 + dword_88095C) & 0xFFFF); /*0x57b4d0*/
    v10 = (__int16)(v9 + dword_88095C); /*0x57b4d5*/
    (v33) = ((v33) & ~(0xFFFF << 16)) | (((*(&dword_88095C + 1) + v30) & 0xFFFF) << 16); /*0x57b4d8*/
    v11 = (__int16)(*(&dword_88095C + 1) + v30); /*0x57b4e1*/
    v31 = v33; /*0x57b4e4*/
    v12 = (__int16)v10 + v11; /*0x57b4e8*/
    if ( v12 <= v7 || v10 - v11 >= v7 || v11 - v10 >= v7 || v12 > v7 + 2 * dword_87F8E0 ) /*0x57b516*/
      goto LABEL_38; /*0x57b516*/
    v13 = v10 + (v11 << 9); /*0x57b51f*/
    if ( v13 >= 0x40000 || (v14 = *(Cell **)(dword_87F924 + 4 * v13)) == 0 ) /*0x57b535*/
    {
      dword_ABDC74 = v33; /*0x57b537*/
      v14 = (Cell *)&unk_ABDC50; /*0x57b53d*/
    }
    v15 = v32 + v30 * v6->u32_2E4; /*0x57b555*/
    v35 = (unsigned __int8 *)v34[v15 + 4]; /*0x57b55d*/
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
  TileDataField14 = MapClass::GetTileDataField14((__int16 *)&v31); /*0x57b571*/
  if ( aP5 ) /*0x57b57c*/
  {
    TileDataField14 = 0; /*0x57b57e*/
LABEL_18:
    v18 = aP3; /*0x57b580*/
    goto LABEL_19; /*0x57b580*/
  }
  if ( TileDataField14 <= 0 ) /*0x57b5e0*/
    goto LABEL_18; /*0x57b5e0*/
  v18 = aP3; /*0x57b5e2*/
  if ( TileDataField14 == aP3 ) /*0x57b5e8*/
    goto LABEL_20; /*0x57b5e8*/
  if ( aP3 != -1 ) /*0x57b5ed*/
  {
    v23 = v14->q038 - dword_ABAD28; /*0x57b603*/
    v24 = v29->u32_294 - dword_ABAD28; /*0x57b605*/
    if ( !(unsigned __int8)Cell::IsEmpty(v14) ) /*0x57b60e*/
    {
      if ( v23 < 0 || v24 < 0 || v23 > 41 || v24 > 41 || dword_82A7F4[v23] != dword_82A7F4[v24] ) /*0x57b703*/
      {
        *aP4 = 0; /*0x57b718*/
        return 0; /*0x57b721*/
      }
      return 1; /*0x57b703*/
    }
    MapClass::SetObstruction((__int16 *)&v31, aP3); /*0x57b623*/
    v16 = v35; /*0x57b628*/
    goto LABEL_32; /*0x57b628*/
  }
LABEL_19:
  if ( TileDataField14 == v18 ) /*0x57b586*/
  {
LABEL_20:
    v19 = v14->q038 - dword_ABAD28; /*0x57b58c*/
    v20 = v29->u32_294 - dword_ABAD28; /*0x57b5a1*/
    if ( v19 >= 0 && v20 >= 0 && v19 <= 41 && v20 <= 41 ) /*0x57b5b7*/
    {
      v21 = dword_82A89C[v19] - dword_82A89C[v20]; /*0x57b5c9*/
      v22 = ((((v21) >> 32) & 0xFFFFFFFFu) ^ v21) - (((v21) >> 32) & 0xFFFFFFFFu); /*0x57b5cc*/
      if ( v22 >= 3 && v22 <= 5 ) /*0x57b5d6*/
      {
        *aP4 = 0; /*0x57b72b*/
        return 0; /*0x57b734*/
      }
    }
    goto LABEL_32; /*0x57b5d6*/
  }
  if ( !(unsigned __int8)Cell::IsEmpty(v14) ) /*0x57b6bf*/
  {
    if ( v18 != -1 ) /*0x57b6d9*/
      goto LABEL_58; /*0x57b6d9*/
    goto LABEL_36; /*0x57b6d9*/
  }
  MapClass::SetObstruction((__int16 *)&v31, v18); /*0x57b6cc*/
LABEL_32:
  if ( (unsigned __int8)Cell::IsEmpty(v14) /*0x57b64a*/
    || (Cell_field_0x38 = v14->q038, Cell_field_0x38 >= aP0) && Cell_field_0x38 <= aP1 )
  {
    v14->q038 = v29->u32_294; /*0x57b65e*/
    v14->u32_11A = v15; /*0x57b661*/
    v14->Cell_field_0x11B = aP2 + v16[40]; /*0x57b66c*/
LABEL_36:
    v7 = dword_87F8DC; /*0x57b672*/
    goto LABEL_37; /*0x57b672*/
  }
  if ( (unsigned __int8)CellClass::IsTerrainType((CellClass *)v14) && Map_Helper(v29->u32_294, v15) /*0x57b774*/
    || (v28 = v29->u32_294, v28 >= dword_ABAD28)
    && v28 < dword_ABAD28 + 42
    && (unsigned __int8)CellLand::IsBuildable((CellLand *)v14) )
  {
LABEL_58:
    *aP4 = 0; /*0x57b77d*/
  }
  return 0; /*0x57b6aa*/

}
}
// 0x57C870
namespace gamemd {
int sub_57C870(int a1)
{
  int16_t v3; // dx
  bool v5; // sf
  int v8; // eax
  int16_t v9; // dx
  int v13; // eax
  int v15; // [esp+10h] [ebp-Ch]
  int v16; // [esp+10h] [ebp-Ch]

  int v1 = a1; // edi /*0x57c877*/
  int16_t v2 = a1; // bx /*0x57c885*/
  do /*0x57c8e3*/
  {
    v3 = (*(((unsigned short *)&(a1)) + 1)) + (*(((unsigned short *)&(dword_89F688[0])) + 1)); /*0x57c895*/
    (*((unsigned short *)&(v15))) = (*((unsigned short *)&(dword_89F688[0]))) + v2; /*0x57c89a*/
    (*(((unsigned short *)&(v15)) + 1)) = (*(((unsigned short *)&(a1)) + 1)) + (*(((unsigned short *)&(dword_89F688[0])) + 1)); /*0x57c8a5*/
    v2 += (*((unsigned short *)&(dword_89F688[0]))); /*0x57c8aa*/
    int v4; // eax
    v4 = (int16_t)((*(((unsigned short *)&(a1)) + 1)) + (*(((unsigned short *)&(dword_89F688[0])) + 1))) << 9; /*0x57c8ae*/
    v5 = v2 + v4 < 0; /*0x57c8b1*/
    int v6 = v2 + v4; // eax /*0x57c8b1*/
    (*(((unsigned short *)&(a1)) + 1)) += (*(((unsigned short *)&(dword_89F688[0])) + 1)); /*0x57c8b3*/
    unsigned int *v7; // eax
    if ( v5 || v6 >= 0x40000 || (v7 = *(unsigned int **)(dword_87F924 + 4 * v6)) == 0 ) /*0x57c8cb*/
    {
      dword_ABDC74 = v15; /*0x57c8cd*/
      v7 = unk_ABDC50; /*0x57c8d3*/
    }
    v8 = v7[17]; /*0x57c8d8*/
  }
  while ( v8 >= 74 && v8 <= 101 ); /*0x57c8e3*/
  int16_t v19; // [esp+22h] [ebp+6h]
  v19 = (*(((unsigned short *)&(v1)) + 1)); /*0x57c8eb*/
  void *v17; // [esp+14h] [ebp-8h]
  (*((unsigned short *)&(v17))) = v15 + dword_89F698; /*0x57c8f9*/
  (*(((unsigned short *)&(v17)) + 1)) = v3 + (*(((unsigned short *)&(dword_89F698)) + 1)); /*0x57c904*/
  do /*0x57c95d*/
  {
    v9 = v19 + (*(((unsigned short *)&(dword_89F698)) + 1)); /*0x57c90f*/
    (*((unsigned short *)&(v16))) = v1 + dword_89F698; /*0x57c914*/
    (*(((unsigned short *)&(v16)) + 1)) = v19 + (*(((unsigned short *)&(dword_89F698)) + 1)); /*0x57c91f*/
    (*((unsigned short *)&(v1))) = v1 + dword_89F698; /*0x57c924*/
    int v10; // eax
    v10 = (int16_t)(v19 + (*(((unsigned short *)&(dword_89F698)) + 1))) << 9; /*0x57c928*/
    v5 = (int16_t)v1 + v10 < 0; /*0x57c92b*/
    int v11; // eax
    v11 = (int16_t)v1 + v10; /*0x57c92b*/
    v19 += (*(((unsigned short *)&(dword_89F698)) + 1)); /*0x57c92d*/
    unsigned int *v12; // eax
    if ( v5 || v11 >= 0x40000 || (v12 = *(unsigned int **)(dword_87F924 + 4 * v11)) == 0 ) /*0x57c945*/
    {
      dword_ABDC74 = v16; /*0x57c947*/
      v12 = unk_ABDC50; /*0x57c94d*/
    }
    v13 = v12[17]; /*0x57c952*/
  }
  while ( v13 >= 74 && v13 <= 101 ); /*0x57c95d*/
  int v18; // [esp+20h] [ebp+4h]
  (*((unsigned short *)&(v18))) = (*((unsigned short *)&(dword_89F688[0]))) + v16; /*0x57c968*/
  (*(((unsigned short *)&(v18)) + 1)) = (*(((unsigned short *)&(dword_89F688[0])) + 1)) + v9; /*0x57c96d*/
  return UpdateTeamsInAreaMap(v17, v18); /*0x57c985*/
}
}
// 0x57C990
namespace gamemd {
int sub_57C990(int a1)
{
  int16_t v3; // dx
  bool v5; // sf
  int v8; // eax
  int16_t v9; // dx
  int v13; // eax
  int v15; // [esp+10h] [ebp-Ch]
  int v16; // [esp+10h] [ebp-Ch]

  int v1 = a1; // edi /*0x57c997*/
  int16_t v2 = a1; // bx /*0x57c9a5*/
  do /*0x57ca03*/
  {
    v3 = (*(((unsigned short *)&(a1)) + 1)) + (*(((unsigned short *)&(dword_89F6A0)) + 1)); /*0x57c9b5*/
    (*((unsigned short *)&(v15))) = dword_89F6A0 + v2; /*0x57c9ba*/
    (*(((unsigned short *)&(v15)) + 1)) = (*(((unsigned short *)&(a1)) + 1)) + (*(((unsigned short *)&(dword_89F6A0)) + 1)); /*0x57c9c5*/
    v2 += dword_89F6A0; /*0x57c9ca*/
    int v4; // eax
    v4 = (int16_t)((*(((unsigned short *)&(a1)) + 1)) + (*(((unsigned short *)&(dword_89F6A0)) + 1))) << 9; /*0x57c9ce*/
    v5 = v2 + v4 < 0; /*0x57c9d1*/
    int v6 = v2 + v4; // eax /*0x57c9d1*/
    (*(((unsigned short *)&(a1)) + 1)) += (*(((unsigned short *)&(dword_89F6A0)) + 1)); /*0x57c9d3*/
    unsigned int *v7; // eax
    if ( v5 || v6 >= 0x40000 || (v7 = *(unsigned int **)(dword_87F924 + 4 * v6)) == 0 ) /*0x57c9eb*/
    {
      dword_ABDC74 = v15; /*0x57c9ed*/
      v7 = unk_ABDC50; /*0x57c9f3*/
    }
    v8 = v7[17]; /*0x57c9f8*/
  }
  while ( v8 >= 74 && v8 <= 101 ); /*0x57ca03*/
  int16_t v19; // [esp+22h] [ebp+6h]
  v19 = (*(((unsigned short *)&(v1)) + 1)); /*0x57ca0b*/
  void *v17; // [esp+14h] [ebp-8h]
  (*((unsigned short *)&(v17))) = v15 + dword_89F690; /*0x57ca19*/
  (*(((unsigned short *)&(v17)) + 1)) = v3 + (*(((unsigned short *)&(dword_89F690)) + 1)); /*0x57ca24*/
  do /*0x57ca7d*/
  {
    v9 = v19 + (*(((unsigned short *)&(dword_89F690)) + 1)); /*0x57ca2f*/
    (*((unsigned short *)&(v16))) = v1 + dword_89F690; /*0x57ca34*/
    (*(((unsigned short *)&(v16)) + 1)) = v19 + (*(((unsigned short *)&(dword_89F690)) + 1)); /*0x57ca3f*/
    (*((unsigned short *)&(v1))) = v1 + dword_89F690; /*0x57ca44*/
    int v10; // eax
    v10 = (int16_t)(v19 + (*(((unsigned short *)&(dword_89F690)) + 1))) << 9; /*0x57ca48*/
    v5 = (int16_t)v1 + v10 < 0; /*0x57ca4b*/
    int v11; // eax
    v11 = (int16_t)v1 + v10; /*0x57ca4b*/
    v19 += (*(((unsigned short *)&(dword_89F690)) + 1)); /*0x57ca4d*/
    unsigned int *v12; // eax
    if ( v5 || v11 >= 0x40000 || (v12 = *(unsigned int **)(dword_87F924 + 4 * v11)) == 0 ) /*0x57ca65*/
    {
      dword_ABDC74 = v16; /*0x57ca67*/
      v12 = unk_ABDC50; /*0x57ca6d*/
    }
    v13 = v12[17]; /*0x57ca72*/
  }
  while ( v13 >= 74 && v13 <= 101 ); /*0x57ca7d*/
  int v18; // [esp+20h] [ebp+4h]
  (*((unsigned short *)&(v18))) = dword_89F6A0 + v16; /*0x57ca88*/
  (*(((unsigned short *)&(v18)) + 1)) = (*(((unsigned short *)&(dword_89F6A0)) + 1)) + v9; /*0x57ca8d*/
  return UpdateTeamsInAreaMap(v17, v18); /*0x57caa5*/
}
}
// 0x57DAF0
namespace gamemd {
int sub_57DAF0(int a1)
{
  int16_t v3; // dx
  bool v5; // sf
  int v8; // eax
  int16_t v9; // dx
  int v13; // eax
  int v15; // [esp+10h] [ebp-Ch]
  int v16; // [esp+10h] [ebp-Ch]

  int v1 = a1; // edi /*0x57daf7*/
  int16_t v2 = a1; // bx /*0x57db05*/
  do /*0x57db67*/
  {
    v3 = (*(((unsigned short *)&(a1)) + 1)) + (*(((unsigned short *)&(dword_89F688[0])) + 1)); /*0x57db15*/
    (*((unsigned short *)&(v15))) = (*((unsigned short *)&(dword_89F688[0]))) + v2; /*0x57db1a*/
    (*(((unsigned short *)&(v15)) + 1)) = (*(((unsigned short *)&(a1)) + 1)) + (*(((unsigned short *)&(dword_89F688[0])) + 1)); /*0x57db25*/
    v2 += (*((unsigned short *)&(dword_89F688[0]))); /*0x57db2a*/
    int v4; // eax
    v4 = (int16_t)((*(((unsigned short *)&(a1)) + 1)) + (*(((unsigned short *)&(dword_89F688[0])) + 1))) << 9; /*0x57db2e*/
    v5 = v2 + v4 < 0; /*0x57db31*/
    int v6 = v2 + v4; // eax /*0x57db31*/
    (*(((unsigned short *)&(a1)) + 1)) += (*(((unsigned short *)&(dword_89F688[0])) + 1)); /*0x57db33*/
    unsigned int *v7; // eax
    if ( v5 || v6 >= 0x40000 || (v7 = *(unsigned int **)(dword_87F924 + 4 * v6)) == 0 ) /*0x57db4b*/
    {
      dword_ABDC74 = v15; /*0x57db4d*/
      v7 = unk_ABDC50; /*0x57db53*/
    }
    v8 = v7[17]; /*0x57db58*/
  }
  while ( v8 >= 205 && v8 <= 232 ); /*0x57db67*/
  int16_t v19; // [esp+22h] [ebp+6h]
  v19 = (*(((unsigned short *)&(v1)) + 1)); /*0x57db6f*/
  void *v17; // [esp+14h] [ebp-8h]
  (*((unsigned short *)&(v17))) = v15 + dword_89F698; /*0x57db7d*/
  (*(((unsigned short *)&(v17)) + 1)) = v3 + (*(((unsigned short *)&(dword_89F698)) + 1)); /*0x57db88*/
  do /*0x57dbe5*/
  {
    v9 = v19 + (*(((unsigned short *)&(dword_89F698)) + 1)); /*0x57db93*/
    (*((unsigned short *)&(v16))) = v1 + dword_89F698; /*0x57db98*/
    (*(((unsigned short *)&(v16)) + 1)) = v19 + (*(((unsigned short *)&(dword_89F698)) + 1)); /*0x57dba3*/
    (*((unsigned short *)&(v1))) = v1 + dword_89F698; /*0x57dba8*/
    int v10; // eax
    v10 = (int16_t)(v19 + (*(((unsigned short *)&(dword_89F698)) + 1))) << 9; /*0x57dbac*/
    v5 = (int16_t)v1 + v10 < 0; /*0x57dbaf*/
    int v11; // eax
    v11 = (int16_t)v1 + v10; /*0x57dbaf*/
    v19 += (*(((unsigned short *)&(dword_89F698)) + 1)); /*0x57dbb1*/
    unsigned int *v12; // eax
    if ( v5 || v11 >= 0x40000 || (v12 = *(unsigned int **)(dword_87F924 + 4 * v11)) == 0 ) /*0x57dbc9*/
    {
      dword_ABDC74 = v16; /*0x57dbcb*/
      v12 = unk_ABDC50; /*0x57dbd1*/
    }
    v13 = v12[17]; /*0x57dbd6*/
  }
  while ( v13 >= 205 && v13 <= 232 ); /*0x57dbe5*/
  int v18; // [esp+20h] [ebp+4h]
  (*((unsigned short *)&(v18))) = (*((unsigned short *)&(dword_89F688[0]))) + v16; /*0x57dbf0*/
  (*(((unsigned short *)&(v18)) + 1)) = (*(((unsigned short *)&(dword_89F688[0])) + 1)) + v9; /*0x57dbf5*/
  return UpdateTeamsInAreaMap(v17, v18); /*0x57dc0d*/
}
}
// 0x57DC20
namespace gamemd {
int sub_57DC20(int a1)
{
  int16_t v3; // dx
  bool v5; // sf
  int v8; // eax
  int16_t v9; // dx
  int v13; // eax
  int v15; // [esp+10h] [ebp-Ch]
  int v16; // [esp+10h] [ebp-Ch]

  int v1 = a1; // edi /*0x57dc27*/
  int16_t v2 = a1; // bx /*0x57dc35*/
  do /*0x57dc97*/
  {
    v3 = (*(((unsigned short *)&(a1)) + 1)) + (*(((unsigned short *)&(dword_89F6A0)) + 1)); /*0x57dc45*/
    (*((unsigned short *)&(v15))) = dword_89F6A0 + v2; /*0x57dc4a*/
    (*(((unsigned short *)&(v15)) + 1)) = (*(((unsigned short *)&(a1)) + 1)) + (*(((unsigned short *)&(dword_89F6A0)) + 1)); /*0x57dc55*/
    v2 += dword_89F6A0; /*0x57dc5a*/
    int v4; // eax
    v4 = (int16_t)((*(((unsigned short *)&(a1)) + 1)) + (*(((unsigned short *)&(dword_89F6A0)) + 1))) << 9; /*0x57dc5e*/
    v5 = v2 + v4 < 0; /*0x57dc61*/
    int v6 = v2 + v4; // eax /*0x57dc61*/
    (*(((unsigned short *)&(a1)) + 1)) += (*(((unsigned short *)&(dword_89F6A0)) + 1)); /*0x57dc63*/
    unsigned int *v7; // eax
    if ( v5 || v6 >= 0x40000 || (v7 = *(unsigned int **)(dword_87F924 + 4 * v6)) == 0 ) /*0x57dc7b*/
    {
      dword_ABDC74 = v15; /*0x57dc7d*/
      v7 = unk_ABDC50; /*0x57dc83*/
    }
    v8 = v7[17]; /*0x57dc88*/
  }
  while ( v8 >= 205 && v8 <= 232 ); /*0x57dc97*/
  int16_t v19; // [esp+22h] [ebp+6h]
  v19 = (*(((unsigned short *)&(v1)) + 1)); /*0x57dc9f*/
  void *v17; // [esp+14h] [ebp-8h]
  (*((unsigned short *)&(v17))) = v15 + dword_89F690; /*0x57dcad*/
  (*(((unsigned short *)&(v17)) + 1)) = v3 + (*(((unsigned short *)&(dword_89F690)) + 1)); /*0x57dcb8*/
  do /*0x57dd15*/
  {
    v9 = v19 + (*(((unsigned short *)&(dword_89F690)) + 1)); /*0x57dcc3*/
    (*((unsigned short *)&(v16))) = v1 + dword_89F690; /*0x57dcc8*/
    (*(((unsigned short *)&(v16)) + 1)) = v19 + (*(((unsigned short *)&(dword_89F690)) + 1)); /*0x57dcd3*/
    (*((unsigned short *)&(v1))) = v1 + dword_89F690; /*0x57dcd8*/
    int v10; // eax
    v10 = (int16_t)(v19 + (*(((unsigned short *)&(dword_89F690)) + 1))) << 9; /*0x57dcdc*/
    v5 = (int16_t)v1 + v10 < 0; /*0x57dcdf*/
    int v11; // eax
    v11 = (int16_t)v1 + v10; /*0x57dcdf*/
    v19 += (*(((unsigned short *)&(dword_89F690)) + 1)); /*0x57dce1*/
    unsigned int *v12; // eax
    if ( v5 || v11 >= 0x40000 || (v12 = *(unsigned int **)(dword_87F924 + 4 * v11)) == 0 ) /*0x57dcf9*/
    {
      dword_ABDC74 = v16; /*0x57dcfb*/
      v12 = unk_ABDC50; /*0x57dd01*/
    }
    v13 = v12[17]; /*0x57dd06*/
  }
  while ( v13 >= 205 && v13 <= 232 ); /*0x57dd15*/
  int v18; // [esp+20h] [ebp+4h]
  (*((unsigned short *)&(v18))) = dword_89F6A0 + v16; /*0x57dd20*/
  (*(((unsigned short *)&(v18)) + 1)) = (*(((unsigned short *)&(dword_89F6A0)) + 1)) + v9; /*0x57dd25*/
  return UpdateTeamsInAreaMap(v17, v18); /*0x57dd3d*/
}
}
// 0x57DD50
namespace gamemd {
AbstractClass * * CreateCliffRampMap(IUnknown * aP0)
{

  __int16 *v1; // ebp
  int result; // eax
  unsigned int v3; // eax
  House *v4; // eax
  BuildingClass *v5; // edi
  int v6; // eax
  unsigned int v7; // eax
  House *v8; // eax
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
  House *v24; // edi
  House *v25; // edx
  struct tagRECT *v26; // esi
  struct tagRECT *v27; // eax
  LONG left; // edx
  LONG top; // edi
  LONG v30; // ecx
  int v31; // esi
  int v32; // eax
  int v33; // esi
  LONG Height; // esi
  int v35; // eax
  Coord2D *v36; // eax
  int *v37; // eax
  int *v38; // eax
  unsigned short *v39; // eax
  House *v40; // ebp
  unsigned __int8 *v41; // esi
  int v42; // [esp-8h] [ebp-E4h]
  int v43; // [esp-4h] [ebp-E0h]
  const RECT *v44; // [esp+0h] [ebp-DCh]
  const RECT *v45; // [esp+4h] [ebp-D8h]
  int v46; // [esp+10h] [ebp-CCh]
  CellClass *v47; // [esp+10h] [ebp-CCh]
  int right; // [esp+14h] [ebp-C8h] BYREF
  House *v49; // [esp+18h] [ebp-C4h]
  int v50[2]; // [esp+1Ch] [ebp-C0h] BYREF
  House *v51; // [esp+24h] [ebp-B8h]
  unsigned int v52[2]; // [esp+28h] [ebp-B4h] BYREF
  struct tagRECT rcDst; // [esp+30h] [ebp-ACh] BYREF
  unsigned __int8 *v54; // [esp+40h] [ebp-9Ch]
  Rect v55; // [esp+44h] [ebp-98h] BYREF
  int v56; // [esp+54h] [ebp-88h]
  int v57; // [esp+58h] [ebp-84h]
  int v58; // [esp+5Ch] [ebp-80h]
  int v59; // [esp+60h] [ebp-7Ch]
  unsigned int v60[2]; // [esp+64h] [ebp-78h] BYREF
  unsigned int v61[16]; // [esp+6Ch] [ebp-70h] BYREF
  int v62[4]; // [esp+ACh] [ebp-30h] BYREF
  unsigned int v63[4]; // [esp+CCh] [ebp-10h] BYREF

  v1 = aP0; /*0x57dd5d*/
  result = *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, aP0) + 17); /*0x57dd6c*/
  if ( result >= 74 && result <= 101 ) /*0x57dd7b*/
  {
    v3 = *aP0 + (aP0[1] << 9); /*0x57dd92*/
    if ( v3 < 0x40000 && (v4 = *(House **)(dword_87F924 + 4 * v3)) != 0 ) /*0x57dda2*/
    {
      v5 = (BuildingClass *)v4; /*0x57dda4*/
      v49 = v4; /*0x57dda6*/
    }
    else
    {
      v6 = *(unsigned int *)aP0; /*0x57ddac*/
      v49 = (House *)&unk_ABDC50; /*0x57ddaf*/
      v5 = (BuildingClass *)&unk_ABDC50; /*0x57ddb7*/
      dword_ABDC74 = v6; /*0x57ddbb*/
    }
    v46 = *(unsigned int *)aP0 - 0x10000; /*0x57ddcf*/
    v7 = *aP0 + ((short)(((v46) >> 16) & 0xFFFF) << 9); /*0x57dddd*/
    if ( v7 < 0x40000 && (v8 = *(House **)(dword_87F924 + 4 * v7)) != 0 ) /*0x57dded*/
    {
      v51 = v8; /*0x57ddef*/
    }
    else
    {
      v51 = (House *)&unk_ABDC50; /*0x57ddf9*/
      dword_ABDC74 = v46; /*0x57de01*/
    }
    v9 = *aP0 + ((__int16)((unsigned int)(*(unsigned int *)aP0 + 0x10000) >> 16) << 9); /*0x57de23*/
    if ( v9 < 0x40000 && (v10 = *(CellClass **)(dword_87F924 + 4 * v9)) != 0 ) /*0x57de33*/
    {
      v47 = v10; /*0x57de35*/
    }
    else
    {
      v47 = &unk_ABDC50; /*0x57de3f*/
      dword_ABDC74 = *(unsigned int *)aP0 + 0x10000; /*0x57de47*/
    }
    LOBYTE(v54) = 0; /*0x57de54*/
    PlacementRect = BuildingClass::GetPlacementRect(v5, &v55.X); /*0x57de62*/
    StartCoords = House::GetStartCoords((House *)v5, &rcDst); /*0x57de67*/
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
    v56 = v19; /*0x57df0d*/
    v61[2] = 82; /*0x57df16*/
    v61[6] = 82; /*0x57df1a*/
    v59 = v17; /*0x57df26*/
    v61[8] = 81; /*0x57df2d*/
    v61[9] = 81; /*0x57df34*/
    v57 = v15; /*0x57df3d*/
    v58 = v16; /*0x57df41*/
    v61[0] = -1; /*0x57df45*/
    v61[1] = 79; /*0x57df49*/
    v61[3] = -1; /*0x57df51*/
    v61[4] = 78; /*0x57df55*/
    v61[5] = 80; /*0x57df5d*/
    v61[7] = -1; /*0x57df68*/
    v61[10] = 100; /*0x57df6f*/
    memset(&v61[11], 255, 20); /*0x57df7a*/
    result = ((ObjectClass *)(ObjectClass *)v1)->Map_Create(); /*0x57df9d*/
    v20 = *v1 + (v1[1] << 9); /*0x57dfad*/
    if ( v20 >= 0x40000 || (v21 = *(CellClass **)(dword_87F924 + 4 * v20)) == 0 ) /*0x57dfc4*/
    {
      dword_ABDC74 = *(unsigned int *)v1; /*0x57dfc9*/
      v21 = &unk_ABDC50; /*0x57dfcf*/
    }
    v22 = *(unsigned int *)&v21->__pad_28[28]; /*0x57dfd4*/
    if ( result > 0 ) /*0x57dfd9*/
    {
      if ( v22 < 92 ) /*0x57dfe2*/
      {
        v23 = v61[result]; /*0x57dffd*/
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
      v25 = v51; /*0x57e00d*/
      *&v49->ptr_44 = v23; /*0x57e015*/
      *&v25->ptr_44 = v23; /*0x57e018*/
      *(unsigned int *)&v47->__pad_28[28] = v23; /*0x57e01b*/
      v60[1] = dword_886FA4; /*0x57e029*/
      v60[0] = DSurface_ViewBounds.field_0; /*0x57e034*/
      v26 = (struct tagRECT *)House::GetStartCoords(v24, v63); /*0x57e04a*/
      v27 = (struct tagRECT *)BuildingClass::GetPlacementRect((BuildingClass *)v24, v62); /*0x57e04c*/
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
          v55.Width = v26->right; /*0x57e08d*/
          v55.Height = v26->bottom; /*0x57e094*/
          v30 = v27->left; /*0x57e098*/
          if ( left > v27->left ) /*0x57e09c*/
          {
            v31 = left - v30 + v55.Width; /*0x57e0a4*/
            left = v27->left; /*0x57e0a6*/
            v55.Width = v31; /*0x57e0a8*/
          }
          v32 = v27->top; /*0x57e0ac*/
          v50[0] = v32; /*0x57e0b1*/
          if ( top > v32 ) /*0x57e0b5*/
          {
            v33 = top - v32 + v55.Height; /*0x57e0bd*/
            top = v32; /*0x57e0bf*/
            v55.Height = v33; /*0x57e0c1*/
          }
          if ( left + v55.Width < v30 + right ) /*0x57e0d3*/
            v55.Width = v30 - left + right + 1; /*0x57e0df*/
          Height = v55.Height; /*0x57e0eb*/
          if ( v55.Height + top < v52[0] + v50[0] ) /*0x57e0f6*/
            Height = v52[0] + v50[0] - top + 1; /*0x57e0fb*/
          rcDst.left = left; /*0x57e0fd*/
          rcDst.top = top; /*0x57e105*/
          v24 = v49; /*0x57e109*/
          rcDst.right = v55.Width; /*0x57e10d*/
          rcDst.bottom = Height; /*0x57e111*/
        }
      }
      v35 = Rect::Union(&rcDst, v44, v45); /*0x57e15f*/
      v43 = *(unsigned int *)(v35 + 12); /*0x57e16a*/
      v42 = *(unsigned int *)(v35 + 8); /*0x57e16f*/
      v36 = (Coord2D *)CellStruct::Copy((CellStruct *)v35, v52); /*0x57e17d*/
      v37 = Coord2D::Sub(v36, v50, v60); /*0x57e184*/
      v38 = Rect::Construct(&v55, v37, v42, v43); /*0x57e18e*/
      v56 = *v38; /*0x57e19c*/
      v57 = v38->Y; /*0x57e1a3*/
      v58 = v38->Width; /*0x57e1aa*/
      v59 = v38->Height; /*0x57e1b3*/
      Cell::CreateCrater(*v38, v38->Y, v38->Width, v38->Height, 0); /*0x57e1d3*/
      if ( v23 == 100 ) /*0x57e1db*/
      {
        LOBYTE(v54) = 1; /*0x57e1e8*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)v1); /*0x57e1ec*/
        right = 0x10000; /*0x57e1fd*/
        v50[0] = *CellStruct::Add((CellStruct *)v1, v52, &right); /*0x57e21a*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)v50); /*0x57e21e*/
        v39 = CellStruct::Set((CellStruct *)v52, 0, 1); /*0x57e22a*/
        v50[0] = *CellStruct::Sub((CellStruct *)v1, &right, v39); /*0x57e248*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)v50); /*0x57e24c*/
      }
      House::AnnounceUpgrade((int)v24, -1); /*0x57e255*/
      v40 = v51; /*0x57e25a*/
      House::AnnounceUpgrade((int)v51, -1); /*0x57e262*/
      House::AnnounceUpgrade((int)v47, -1); /*0x57e26f*/
      v41 = v54; /*0x57e274*/
      Cell::SearchEnemies((int)v24, (unsigned __int16 *)v54); /*0x57e27b*/
      Cell::SearchEnemies((int)v40, (unsigned __int16 *)v41); /*0x57e283*/
      return Cell::SearchEnemies((int)v47, (unsigned __int16 *)v41); /*0x57e28b*/
    }
  }
  return result; /*0x57e290*/

}
}
// 0x57E2A0
namespace gamemd {
void* CreateCliffStraightMap(IUnknown * aP0)
{

  ObjectClass *v1; // ebx
  int v2; // eax
  unsigned int v3; // eax
  House *v4; // eax
  House *v5; // ebp
  __int16 v6; // cx
  unsigned int v7; // eax
  House *v8; // eax
  __int16 v9; // cx
  unsigned int v10; // eax
  House *v11; // eax
  House *v12; // edx
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
  unsigned int v23; // ebx
  unsigned int *v24; // edx
  House *v25; // eax
  struct tagRECT *v26; // esi
  struct tagRECT *v27; // eax
  LONG left; // edx
  LONG v29; // ecx
  int v30; // ebp
  LONG top; // edi
  LONG bottom; // esi
  bool v33; // cc
  int v34; // eax
  LONG Width; // ecx
  int v36; // eax
  Coord2D *v37; // eax
  int *v38; // eax
  int *v39; // eax
  __int16 v40; // cx
  House *v41; // ebx
  House *v42; // edi
  unsigned __int8 *v43; // esi
  int v45; // [esp-8h] [ebp-E4h]
  int v46; // [esp-4h] [ebp-E0h]
  const RECT *v47; // [esp+0h] [ebp-DCh]
  const RECT *v48; // [esp+4h] [ebp-D8h]
  int right; // [esp+10h] [ebp-CCh] BYREF
  House *v50; // [esp+14h] [ebp-C8h]
  int v51[2]; // [esp+18h] [ebp-C4h] BYREF
  House *v52; // [esp+20h] [ebp-BCh]
  House *v53; // [esp+24h] [ebp-B8h]
  struct tagRECT rcDst; // [esp+28h] [ebp-B4h] BYREF
  unsigned __int8 *v55; // [esp+38h] [ebp-A4h]
  unsigned int v56[2]; // [esp+3Ch] [ebp-A0h] BYREF
  int v57; // [esp+44h] [ebp-98h]
  int v58; // [esp+48h] [ebp-94h]
  int v59; // [esp+4Ch] [ebp-90h]
  int v60; // [esp+50h] [ebp-8Ch]
  unsigned int v61[2]; // [esp+54h] [ebp-88h] BYREF
  Rect v62; // [esp+5Ch] [ebp-80h] BYREF
  unsigned int v63[16]; // [esp+6Ch] [ebp-70h] BYREF
  int v64[4]; // [esp+ACh] [ebp-30h] BYREF
  unsigned int v65[4]; // [esp+CCh] [ebp-10h] BYREF

  v1 = aP0; /*0x57e2ac*/
  v2 = *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)aP0) + 17); /*0x57e2bc*/
  if ( v2 >= 74 && v2 <= 101 ) /*0x57e2cb*/
  {
    v3 = SLOWORD(aP0->ptr_0) + (SHIWORD(aP0->ptr_0) << 9); /*0x57e2e6*/
    if ( v3 < 0x40000 && (v4 = *(House **)(dword_87F924 + 4 * v3)) != 0 ) /*0x57e2f6*/
    {
      v5 = v4; /*0x57e2f8*/
    }
    else
    {
      v5 = (House *)&unk_ABDC50; /*0x57e2fe*/
      dword_ABDC74 = aP0->ptr_0; /*0x57e300*/
    }
    v6 = LOWORD(aP0->ptr_0) - 1; /*0x57e30c*/
    HIWORD(v50) = HIWORD(aP0->ptr_0); /*0x57e30e*/
    LOWORD(v50) = v6; /*0x57e316*/
    v53 = v5; /*0x57e31b*/
    v7 = v6 + (SHIWORD(v50) << 9); /*0x57e325*/
    if ( v7 < 0x40000 && (v8 = *(House **)(dword_87F924 + 4 * v7)) != 0 ) /*0x57e335*/
    {
      v52 = v8; /*0x57e337*/
    }
    else
    {
      v52 = (House *)&unk_ABDC50; /*0x57e341*/
      dword_ABDC74 = (int)v50; /*0x57e345*/
    }
    v9 = LOWORD(aP0->ptr_0) + 1; /*0x57e351*/
    HIWORD(v50) = HIWORD(aP0->ptr_0); /*0x57e353*/
    LOWORD(v50) = v9; /*0x57e35b*/
    v10 = v9 + (SHIWORD(v50) << 9); /*0x57e366*/
    if ( v10 < 0x40000 && (v11 = *(House **)(dword_87F924 + 4 * v10)) != 0 ) /*0x57e376*/
    {
      v50 = v11; /*0x57e378*/
    }
    else
    {
      v12 = v50; /*0x57e37e*/
      v50 = (House *)&unk_ABDC50; /*0x57e382*/
      dword_ABDC74 = (int)v12; /*0x57e386*/
    }
    LOBYTE(v55) = 0; /*0x57e393*/
    PlacementRect = BuildingClass::GetPlacementRect((BuildingClass *)v5, &v62.X); /*0x57e3a1*/
    StartCoords = House::GetStartCoords(v5, &rcDst); /*0x57e3a6*/
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
        v5 = v53; /*0x57e435*/
      }
    }
    v60 = v19; /*0x57e453*/
    v59 = v18; /*0x57e45c*/
    v63[2] = 91; /*0x57e460*/
    v63[6] = 91; /*0x57e464*/
    v57 = v21; /*0x57e46b*/
    v58 = v17; /*0x57e479*/
    v63[0] = -1; /*0x57e47d*/
    v63[1] = 88; /*0x57e481*/
    v63[3] = -1; /*0x57e489*/
    v63[4] = 87; /*0x57e48d*/
    v63[5] = 89; /*0x57e495*/
    v63[7] = -1; /*0x57e4a0*/
    v63[8] = 90; /*0x57e4a7*/
    v63[9] = 90; /*0x57e4ae*/
    v63[10] = 101; /*0x57e4b5*/
    memset(&v63[11], 255, 20); /*0x57e4c0*/
    LOBYTE(v2) = Map_Create_57B990(v1); /*0x57e4e3*/
    v22 = *&v5->ptr_44; /*0x57e4e8*/
    if ( v2 > 0 ) /*0x57e4ed*/
    {
      if ( v22 < 96 ) /*0x57e4f6*/
      {
        v23 = v63[v2]; /*0x57e511*/
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
      v24 = (unsigned int *)v52; /*0x57e51d*/
      v25 = v50; /*0x57e521*/
      *&v5->ptr_44 = v23; /*0x57e525*/
      v24[17] = v23; /*0x57e528*/
      *&v25->ptr_44 = v23; /*0x57e52b*/
      v61[1] = dword_886FA4; /*0x57e539*/
      v61[0] = DSurface_ViewBounds.field_0; /*0x57e547*/
      v26 = (struct tagRECT *)House::GetStartCoords(v5, v65); /*0x57e55a*/
      v27 = (struct tagRECT *)BuildingClass::GetPlacementRect((BuildingClass *)v5, v64); /*0x57e55c*/
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
          v62.Width = v30; /*0x57e5a0*/
          if ( !v33 ) /*0x57e5a4*/
          {
            v30 += left - v29; /*0x57e5a8*/
            left = v29; /*0x57e5aa*/
            v62.Width = v30; /*0x57e5ac*/
          }
          v34 = v27->top; /*0x57e5b0*/
          v51[0] = v34; /*0x57e5b5*/
          if ( top > v34 ) /*0x57e5b9*/
          {
            bottom += top - v34; /*0x57e5bd*/
            top = v34; /*0x57e5bf*/
          }
          if ( left + v30 >= v29 + right ) /*0x57e5cb*/
            Width = v62.Width; /*0x57e5d9*/
          else
            Width = v29 - left + right + 1; /*0x57e5d3*/
          if ( bottom + top < v56[0] + v51[0] ) /*0x57e5ec*/
            bottom = v56[0] + v51[0] - top + 1; /*0x57e5f1*/
          v5 = v53; /*0x57e5f3*/
          rcDst.top = top; /*0x57e5f7*/
          rcDst.left = left; /*0x57e5fb*/
          rcDst.right = Width; /*0x57e5ff*/
          rcDst.bottom = bottom; /*0x57e603*/
        }
      }
      v36 = Rect::Union(&rcDst, v47, v48); /*0x57e654*/
      v46 = *(unsigned int *)(v36 + 12); /*0x57e65f*/
      v45 = *(unsigned int *)(v36 + 8); /*0x57e664*/
      v37 = (Coord2D *)CellStruct::Copy((CellStruct *)v36, v56); /*0x57e672*/
      v38 = Coord2D::Sub(v37, v51, v61); /*0x57e679*/
      v39 = Rect::Construct(&v62, v38, v45, v46); /*0x57e683*/
      v57 = *v39; /*0x57e691*/
      v58 = v39->Y; /*0x57e698*/
      v59 = v39->Width; /*0x57e69f*/
      v60 = v39->Height; /*0x57e6a8*/
      Cell::CreateCrater(*v39, v39->Y, v39->Width, v39->Height, 0); /*0x57e6c8*/
      if ( v23 == 101 ) /*0x57e6d0*/
      {
        LOBYTE(v55) = 1; /*0x57e6e4*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)aP0); /*0x57e6e8*/
        v40 = LOWORD(aP0->ptr_0) + 1; /*0x57e6f4*/
        HIWORD(right) = HIWORD(aP0->ptr_0); /*0x57e6f6*/
        (right) = ((right) & ~0xFFFF) | ((v40) & 0xFFFF); /*0x57e6fb*/
        v51[0] = right; /*0x57e708*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)v51); /*0x57e712*/
        right = 1; /*0x57e723*/
        v51[0] = *CellStruct::Sub((CellStruct *)aP0, v56, &right); /*0x57e73a*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)v51); /*0x57e744*/
      }
      House::AnnounceUpgrade((int)v5, -1); /*0x57e74c*/
      v41 = v52; /*0x57e751*/
      House::AnnounceUpgrade((int)v52, -1); /*0x57e758*/
      v42 = v50; /*0x57e75e*/
      House::AnnounceUpgrade((int)v50, -1); /*0x57e764*/
      v43 = v55; /*0x57e769*/
      Cell::SearchEnemies((int)v5, (unsigned __int16 *)v55); /*0x57e770*/
      Cell::SearchEnemies((int)v41, (unsigned __int16 *)v43); /*0x57e778*/
      (v2) = ((v2) & ~0xFF) | ((Cell::SearchEnemies((int)v42, (unsigned __int16 *)v43)) & 0xFF); /*0x57e780*/
    }
  }
  return v2; /*0x57e785*/

}
}
// 0x57E7A0
namespace gamemd {
AbstractClass * * CreateCliffBridgeMap(IUnknown * aP0)
{

  __int16 *v1; // ebp
  int result; // eax
  unsigned int v3; // eax
  House *v4; // eax
  BuildingClass *v5; // edi
  int v6; // eax
  unsigned int v7; // eax
  House *v8; // eax
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
  House *v24; // edi
  House *v25; // edx
  struct tagRECT *v26; // esi
  struct tagRECT *v27; // eax
  LONG left; // edx
  LONG top; // edi
  LONG v30; // ecx
  int v31; // esi
  int v32; // eax
  int v33; // esi
  LONG Height; // esi
  int v35; // eax
  Coord2D *v36; // eax
  int *v37; // eax
  int *v38; // eax
  unsigned short *v39; // eax
  House *v40; // ebp
  unsigned __int8 *v41; // esi
  int v42; // [esp-8h] [ebp-E4h]
  int v43; // [esp-4h] [ebp-E0h]
  const RECT *v44; // [esp+0h] [ebp-DCh]
  const RECT *v45; // [esp+4h] [ebp-D8h]
  int v46; // [esp+10h] [ebp-CCh]
  CellClass *v47; // [esp+10h] [ebp-CCh]
  int right; // [esp+14h] [ebp-C8h] BYREF
  House *v49; // [esp+18h] [ebp-C4h]
  int v50[2]; // [esp+1Ch] [ebp-C0h] BYREF
  House *v51; // [esp+24h] [ebp-B8h]
  unsigned int v52[2]; // [esp+28h] [ebp-B4h] BYREF
  struct tagRECT rcDst; // [esp+30h] [ebp-ACh] BYREF
  unsigned __int8 *v54; // [esp+40h] [ebp-9Ch]
  Rect v55; // [esp+44h] [ebp-98h] BYREF
  int v56; // [esp+54h] [ebp-88h]
  int v57; // [esp+58h] [ebp-84h]
  int v58; // [esp+5Ch] [ebp-80h]
  int v59; // [esp+60h] [ebp-7Ch]
  unsigned int v60[2]; // [esp+64h] [ebp-78h] BYREF
  unsigned int v61[16]; // [esp+6Ch] [ebp-70h] BYREF
  int v62[4]; // [esp+ACh] [ebp-30h] BYREF
  unsigned int v63[4]; // [esp+CCh] [ebp-10h] BYREF

  v1 = aP0; /*0x57e7ad*/
  result = *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, aP0) + 17); /*0x57e7bc*/
  if ( result >= 205 && result <= 232 ) /*0x57e7cf*/
  {
    v3 = *aP0 + (aP0[1] << 9); /*0x57e7e6*/
    if ( v3 < 0x40000 && (v4 = *(House **)(dword_87F924 + 4 * v3)) != 0 ) /*0x57e7f6*/
    {
      v5 = (BuildingClass *)v4; /*0x57e7f8*/
      v49 = v4; /*0x57e7fa*/
    }
    else
    {
      v6 = *(unsigned int *)aP0; /*0x57e800*/
      v49 = (House *)&unk_ABDC50; /*0x57e803*/
      v5 = (BuildingClass *)&unk_ABDC50; /*0x57e80b*/
      dword_ABDC74 = v6; /*0x57e80f*/
    }
    v46 = *(unsigned int *)aP0 - 0x10000; /*0x57e823*/
    v7 = *aP0 + ((short)(((v46) >> 16) & 0xFFFF) << 9); /*0x57e831*/
    if ( v7 < 0x40000 && (v8 = *(House **)(dword_87F924 + 4 * v7)) != 0 ) /*0x57e841*/
    {
      v51 = v8; /*0x57e843*/
    }
    else
    {
      v51 = (House *)&unk_ABDC50; /*0x57e84d*/
      dword_ABDC74 = v46; /*0x57e855*/
    }
    v9 = *aP0 + ((__int16)((unsigned int)(*(unsigned int *)aP0 + 0x10000) >> 16) << 9); /*0x57e877*/
    if ( v9 < 0x40000 && (v10 = *(CellClass **)(dword_87F924 + 4 * v9)) != 0 ) /*0x57e887*/
    {
      v47 = v10; /*0x57e889*/
    }
    else
    {
      v47 = &unk_ABDC50; /*0x57e893*/
      dword_ABDC74 = *(unsigned int *)aP0 + 0x10000; /*0x57e89b*/
    }
    LOBYTE(v54) = 0; /*0x57e8a8*/
    PlacementRect = BuildingClass::GetPlacementRect(v5, &v55.X); /*0x57e8b6*/
    StartCoords = House::GetStartCoords((House *)v5, &rcDst); /*0x57e8bb*/
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
    v56 = v19; /*0x57e961*/
    v61[2] = 213; /*0x57e96a*/
    v61[6] = 213; /*0x57e96e*/
    v59 = v17; /*0x57e97a*/
    v61[8] = 212; /*0x57e981*/
    v61[9] = 212; /*0x57e988*/
    v57 = v15; /*0x57e991*/
    v58 = v16; /*0x57e995*/
    v61[0] = -1; /*0x57e999*/
    v61[1] = 210; /*0x57e99d*/
    v61[3] = -1; /*0x57e9a5*/
    v61[4] = 209; /*0x57e9a9*/
    v61[5] = 211; /*0x57e9b1*/
    v61[7] = -1; /*0x57e9bc*/
    v61[10] = 231; /*0x57e9c3*/
    memset(&v61[11], 255, 20); /*0x57e9ce*/
    result = ((ObjectClass *)(ObjectClass *)v1)->Map_Create_57CAB0(); /*0x57e9f1*/
    v20 = *v1 + (v1[1] << 9); /*0x57ea01*/
    if ( v20 >= 0x40000 || (v21 = *(CellClass **)(dword_87F924 + 4 * v20)) == 0 ) /*0x57ea18*/
    {
      dword_ABDC74 = *(unsigned int *)v1; /*0x57ea1d*/
      v21 = &unk_ABDC50; /*0x57ea23*/
    }
    v22 = *(unsigned int *)&v21->__pad_28[28]; /*0x57ea28*/
    if ( result > 0 ) /*0x57ea2d*/
    {
      if ( v22 < 223 ) /*0x57ea39*/
      {
        v23 = v61[result]; /*0x57ea57*/
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
      v25 = v51; /*0x57ea67*/
      *&v49->ptr_44 = v23; /*0x57ea6f*/
      *&v25->ptr_44 = v23; /*0x57ea72*/
      *(unsigned int *)&v47->__pad_28[28] = v23; /*0x57ea75*/
      v60[1] = dword_886FA4; /*0x57ea83*/
      v60[0] = DSurface_ViewBounds.field_0; /*0x57ea8e*/
      v26 = (struct tagRECT *)House::GetStartCoords(v24, v63); /*0x57eaa4*/
      v27 = (struct tagRECT *)BuildingClass::GetPlacementRect((BuildingClass *)v24, v62); /*0x57eaa6*/
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
          v55.Width = v26->right; /*0x57eae7*/
          v55.Height = v26->bottom; /*0x57eaee*/
          v30 = v27->left; /*0x57eaf2*/
          if ( left > v27->left ) /*0x57eaf6*/
          {
            v31 = left - v30 + v55.Width; /*0x57eafe*/
            left = v27->left; /*0x57eb00*/
            v55.Width = v31; /*0x57eb02*/
          }
          v32 = v27->top; /*0x57eb06*/
          v50[0] = v32; /*0x57eb0b*/
          if ( top > v32 ) /*0x57eb0f*/
          {
            v33 = top - v32 + v55.Height; /*0x57eb17*/
            top = v32; /*0x57eb19*/
            v55.Height = v33; /*0x57eb1b*/
          }
          if ( left + v55.Width < v30 + right ) /*0x57eb2d*/
            v55.Width = v30 - left + right + 1; /*0x57eb39*/
          Height = v55.Height; /*0x57eb45*/
          if ( v55.Height + top < v52[0] + v50[0] ) /*0x57eb50*/
            Height = v52[0] + v50[0] - top + 1; /*0x57eb55*/
          rcDst.left = left; /*0x57eb57*/
          rcDst.top = top; /*0x57eb5f*/
          v24 = v49; /*0x57eb63*/
          rcDst.right = v55.Width; /*0x57eb67*/
          rcDst.bottom = Height; /*0x57eb6b*/
        }
      }
      v35 = Rect::Union(&rcDst, v44, v45); /*0x57ebb9*/
      v43 = *(unsigned int *)(v35 + 12); /*0x57ebc4*/
      v42 = *(unsigned int *)(v35 + 8); /*0x57ebc9*/
      v36 = (Coord2D *)CellStruct::Copy((CellStruct *)v35, v52); /*0x57ebd7*/
      v37 = Coord2D::Sub(v36, v50, v60); /*0x57ebde*/
      v38 = Rect::Construct(&v55, v37, v42, v43); /*0x57ebe8*/
      v56 = *v38; /*0x57ebf6*/
      v57 = v38->Y; /*0x57ebfd*/
      v58 = v38->Width; /*0x57ec04*/
      v59 = v38->Height; /*0x57ec0d*/
      Cell::CreateCrater(*v38, v38->Y, v38->Width, v38->Height, 0); /*0x57ec2d*/
      if ( v23 == 231 ) /*0x57ec38*/
      {
        LOBYTE(v54) = 1; /*0x57ec45*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)v1); /*0x57ec49*/
        right = 0x10000; /*0x57ec5a*/
        v50[0] = *CellStruct::Add((CellStruct *)v1, v52, &right); /*0x57ec77*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)v50); /*0x57ec7b*/
        v39 = CellStruct::Set((CellStruct *)v52, 0, 1); /*0x57ec87*/
        v50[0] = *CellStruct::Sub((CellStruct *)v1, &right, v39); /*0x57eca5*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)v50); /*0x57eca9*/
      }
      House::AnnounceUpgrade((int)v24, -1); /*0x57ecb2*/
      v40 = v51; /*0x57ecb7*/
      House::AnnounceUpgrade((int)v51, -1); /*0x57ecbf*/
      House::AnnounceUpgrade((int)v47, -1); /*0x57eccc*/
      v41 = v54; /*0x57ecd1*/
      Cell::SearchEnemies((int)v24, (unsigned __int16 *)v54); /*0x57ecd8*/
      Cell::SearchEnemies((int)v40, (unsigned __int16 *)v41); /*0x57ece0*/
      return Cell::SearchEnemies((int)v47, (unsigned __int16 *)v41); /*0x57ece8*/
    }
  }
  return result; /*0x57eced*/

}
}
// 0x57ED00
namespace gamemd {
void* CreateCliffStraightBridgeMap(IUnknown * aP0)
{

  ObjectClass *v1; // ebx
  int v2; // eax
  unsigned int v3; // eax
  House *v4; // eax
  House *v5; // ebp
  __int16 v6; // cx
  unsigned int v7; // eax
  House *v8; // eax
  __int16 v9; // cx
  unsigned int v10; // eax
  House *v11; // eax
  House *v12; // edx
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
  unsigned int v23; // ebx
  unsigned int *v24; // edx
  House *v25; // eax
  struct tagRECT *v26; // esi
  struct tagRECT *v27; // eax
  LONG left; // edx
  LONG v29; // ecx
  int v30; // ebp
  LONG top; // edi
  LONG bottom; // esi
  bool v33; // cc
  int v34; // eax
  LONG Width; // ecx
  int v36; // eax
  Coord2D *v37; // eax
  int *v38; // eax
  int *v39; // eax
  __int16 v40; // cx
  House *v41; // ebx
  House *v42; // edi
  unsigned __int8 *v43; // esi
  int v45; // [esp-8h] [ebp-E4h]
  int v46; // [esp-4h] [ebp-E0h]
  const RECT *v47; // [esp+0h] [ebp-DCh]
  const RECT *v48; // [esp+4h] [ebp-D8h]
  int right; // [esp+10h] [ebp-CCh] BYREF
  House *v50; // [esp+14h] [ebp-C8h]
  int v51[2]; // [esp+18h] [ebp-C4h] BYREF
  House *v52; // [esp+20h] [ebp-BCh]
  House *v53; // [esp+24h] [ebp-B8h]
  struct tagRECT rcDst; // [esp+28h] [ebp-B4h] BYREF
  unsigned __int8 *v55; // [esp+38h] [ebp-A4h]
  unsigned int v56[2]; // [esp+3Ch] [ebp-A0h] BYREF
  int v57; // [esp+44h] [ebp-98h]
  int v58; // [esp+48h] [ebp-94h]
  int v59; // [esp+4Ch] [ebp-90h]
  int v60; // [esp+50h] [ebp-8Ch]
  unsigned int v61[2]; // [esp+54h] [ebp-88h] BYREF
  Rect v62; // [esp+5Ch] [ebp-80h] BYREF
  unsigned int v63[16]; // [esp+6Ch] [ebp-70h] BYREF
  int v64[4]; // [esp+ACh] [ebp-30h] BYREF
  unsigned int v65[4]; // [esp+CCh] [ebp-10h] BYREF

  v1 = aP0; /*0x57ed0c*/
  v2 = *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)aP0) + 17); /*0x57ed1c*/
  if ( v2 >= 205 && v2 <= 232 ) /*0x57ed2f*/
  {
    v3 = SLOWORD(aP0->ptr_0) + (SHIWORD(aP0->ptr_0) << 9); /*0x57ed4a*/
    if ( v3 < 0x40000 && (v4 = *(House **)(dword_87F924 + 4 * v3)) != 0 ) /*0x57ed5a*/
    {
      v5 = v4; /*0x57ed5c*/
    }
    else
    {
      v5 = (House *)&unk_ABDC50; /*0x57ed62*/
      dword_ABDC74 = aP0->ptr_0; /*0x57ed64*/
    }
    v6 = LOWORD(aP0->ptr_0) - 1; /*0x57ed70*/
    HIWORD(v50) = HIWORD(aP0->ptr_0); /*0x57ed72*/
    LOWORD(v50) = v6; /*0x57ed7a*/
    v53 = v5; /*0x57ed7f*/
    v7 = v6 + (SHIWORD(v50) << 9); /*0x57ed89*/
    if ( v7 < 0x40000 && (v8 = *(House **)(dword_87F924 + 4 * v7)) != 0 ) /*0x57ed99*/
    {
      v52 = v8; /*0x57ed9b*/
    }
    else
    {
      v52 = (House *)&unk_ABDC50; /*0x57eda5*/
      dword_ABDC74 = (int)v50; /*0x57eda9*/
    }
    v9 = LOWORD(aP0->ptr_0) + 1; /*0x57edb5*/
    HIWORD(v50) = HIWORD(aP0->ptr_0); /*0x57edb7*/
    LOWORD(v50) = v9; /*0x57edbf*/
    v10 = v9 + (SHIWORD(v50) << 9); /*0x57edca*/
    if ( v10 < 0x40000 && (v11 = *(House **)(dword_87F924 + 4 * v10)) != 0 ) /*0x57edda*/
    {
      v50 = v11; /*0x57eddc*/
    }
    else
    {
      v12 = v50; /*0x57ede2*/
      v50 = (House *)&unk_ABDC50; /*0x57ede6*/
      dword_ABDC74 = (int)v12; /*0x57edea*/
    }
    LOBYTE(v55) = 0; /*0x57edf7*/
    PlacementRect = BuildingClass::GetPlacementRect((BuildingClass *)v5, &v62.X); /*0x57ee05*/
    StartCoords = House::GetStartCoords(v5, &rcDst); /*0x57ee0a*/
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
        v5 = v53; /*0x57ee99*/
      }
    }
    v60 = v19; /*0x57eeb7*/
    v59 = v18; /*0x57eec0*/
    v63[2] = 222; /*0x57eec4*/
    v63[6] = 222; /*0x57eec8*/
    v57 = v21; /*0x57eecf*/
    v58 = v17; /*0x57eedd*/
    v63[0] = -1; /*0x57eee1*/
    v63[1] = 219; /*0x57eee5*/
    v63[3] = -1; /*0x57eeed*/
    v63[4] = 218; /*0x57eef1*/
    v63[5] = 220; /*0x57eef9*/
    v63[7] = -1; /*0x57ef04*/
    v63[8] = 221; /*0x57ef0b*/
    v63[9] = 221; /*0x57ef12*/
    v63[10] = 232; /*0x57ef19*/
    memset(&v63[11], 255, 20); /*0x57ef24*/
    LOBYTE(v2) = Map_Create_57CBE0(v1); /*0x57ef47*/
    v22 = *&v5->ptr_44; /*0x57ef4c*/
    if ( v2 > 0 ) /*0x57ef51*/
    {
      if ( v22 < 227 ) /*0x57ef5d*/
      {
        v23 = v63[v2]; /*0x57ef7b*/
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
      v24 = (unsigned int *)v52; /*0x57ef87*/
      v25 = v50; /*0x57ef8b*/
      *&v5->ptr_44 = v23; /*0x57ef8f*/
      v24[17] = v23; /*0x57ef92*/
      *&v25->ptr_44 = v23; /*0x57ef95*/
      v61[1] = dword_886FA4; /*0x57efa3*/
      v61[0] = DSurface_ViewBounds.field_0; /*0x57efb1*/
      v26 = (struct tagRECT *)House::GetStartCoords(v5, v65); /*0x57efc4*/
      v27 = (struct tagRECT *)BuildingClass::GetPlacementRect((BuildingClass *)v5, v64); /*0x57efc6*/
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
          v62.Width = v30; /*0x57f00a*/
          if ( !v33 ) /*0x57f00e*/
          {
            v30 += left - v29; /*0x57f012*/
            left = v29; /*0x57f014*/
            v62.Width = v30; /*0x57f016*/
          }
          v34 = v27->top; /*0x57f01a*/
          v51[0] = v34; /*0x57f01f*/
          if ( top > v34 ) /*0x57f023*/
          {
            bottom += top - v34; /*0x57f027*/
            top = v34; /*0x57f029*/
          }
          if ( left + v30 >= v29 + right ) /*0x57f035*/
            Width = v62.Width; /*0x57f043*/
          else
            Width = v29 - left + right + 1; /*0x57f03d*/
          if ( bottom + top < v56[0] + v51[0] ) /*0x57f056*/
            bottom = v56[0] + v51[0] - top + 1; /*0x57f05b*/
          v5 = v53; /*0x57f05d*/
          rcDst.top = top; /*0x57f061*/
          rcDst.left = left; /*0x57f065*/
          rcDst.right = Width; /*0x57f069*/
          rcDst.bottom = bottom; /*0x57f06d*/
        }
      }
      v36 = Rect::Union(&rcDst, v47, v48); /*0x57f0be*/
      v46 = *(unsigned int *)(v36 + 12); /*0x57f0c9*/
      v45 = *(unsigned int *)(v36 + 8); /*0x57f0ce*/
      v37 = (Coord2D *)CellStruct::Copy((CellStruct *)v36, v56); /*0x57f0dc*/
      v38 = Coord2D::Sub(v37, v51, v61); /*0x57f0e3*/
      v39 = Rect::Construct(&v62, v38, v45, v46); /*0x57f0ed*/
      v57 = *v39; /*0x57f0fb*/
      v58 = v39->Y; /*0x57f102*/
      v59 = v39->Width; /*0x57f109*/
      v60 = v39->Height; /*0x57f112*/
      Cell::CreateCrater(*v39, v39->Y, v39->Width, v39->Height, 0); /*0x57f132*/
      if ( v23 == 232 ) /*0x57f13d*/
      {
        LOBYTE(v55) = 1; /*0x57f151*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)aP0); /*0x57f155*/
        v40 = LOWORD(aP0->ptr_0) + 1; /*0x57f161*/
        HIWORD(right) = HIWORD(aP0->ptr_0); /*0x57f163*/
        (right) = ((right) & ~0xFFFF) | ((v40) & 0xFFFF); /*0x57f168*/
        v51[0] = right; /*0x57f175*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)v51); /*0x57f17f*/
        right = 1; /*0x57f190*/
        v51[0] = *CellStruct::Sub((CellStruct *)aP0, v56, &right); /*0x57f1a7*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)v51); /*0x57f1b1*/
      }
      House::AnnounceUpgrade((int)v5, -1); /*0x57f1b9*/
      v41 = v52; /*0x57f1be*/
      House::AnnounceUpgrade((int)v52, -1); /*0x57f1c5*/
      v42 = v50; /*0x57f1cb*/
      House::AnnounceUpgrade((int)v50, -1); /*0x57f1d1*/
      v43 = v55; /*0x57f1d6*/
      Cell::SearchEnemies((int)v5, (unsigned __int16 *)v55); /*0x57f1dd*/
      Cell::SearchEnemies((int)v41, (unsigned __int16 *)v43); /*0x57f1e5*/
      (v2) = ((v2) & ~0xFF) | ((Cell::SearchEnemies((int)v42, (unsigned __int16 *)v43)) & 0xFF); /*0x57f1ed*/
    }
  }
  return v2; /*0x57f1f2*/

}
}
// 0x572230
namespace gamemd {
char globalHelper_072230(ObjectClass * a1, int a2)
{

  int v2; // eax
  __int16 v3; // dx
  unsigned int v4; // eax
  unsigned int *v5; // eax
  unsigned __int8 v6; // dl
  int v7; // eax

  v2 = a2 & 7; /*0x572239*/
  v3 = dword_89F688[v2]; /*0x57223c*/
  LOWORD(v2) = a1[1] + HIWORD(dword_89F688[v2]); /*0x572252*/
  LOWORD(a2) = *a1 + v3; /*0x572256*/
  HIWORD(a2) = v2; /*0x57225e*/
  v4 = (__int16)a2 + ((__int16)v2 << 9); /*0x57226d*/
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
    (v7) = ((v7) & ~0xFF) | ((Cell::UpdateTileType((__int16 *)&a2, 1, 0)) & 0xFF); /*0x572327*/
  }
  else if ( v7 == g_TerrainSoundTable2 ) /*0x5722e3*/
  {
    (v7) = ((v7) & ~0xFF) | ((Cell::SetTileType((__int16 *)&a2, g_Cell_BuildabilityLUT + g_TerrainSoundTable2, -1, -1, 0)) & 0xFF); /*0x5722f3*/
  }
  else if ( v7 == g_TerrainSoundTable2 + 2 ) /*0x572303*/
  {
    (v7) = ((v7) & ~0xFF) | ((Cell::SetTileType((__int16 *)&a2, g_TerrainSoundTable2 + g_Cell_BuildabilityLUT + 2, -1, -1, 0)) & 0xFF); /*0x572315*/
  }
  return v7; /*0x5722f8*/

}
} // namespace gamemd

// 0x572330
namespace gamemd {
char globalHelper_072330(IUnknown * a1, int a2)
{

  int v2; // eax
  __int16 v3; // dx
  unsigned int v4; // eax
  unsigned int *v5; // eax
  unsigned __int8 v6; // dl
  int v7; // eax

  v2 = a2 & 7; /*0x572339*/
  v3 = dword_89F688[v2]; /*0x57233c*/
  LOWORD(v2) = a1[1] + HIWORD(dword_89F688[v2]); /*0x572352*/
  LOWORD(a2) = *a1 + v3; /*0x572356*/
  HIWORD(a2) = v2; /*0x57235e*/
  v4 = (__int16)a2 + ((__int16)v2 << 9); /*0x57236d*/
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
    (v7) = ((v7) & ~0xFF) | ((Cell::UpdateTileType((__int16 *)&a2, 1, 0)) & 0xFF); /*0x572429*/
  }
  else if ( v7 == g_TerrainSoundTable2 ) /*0x5723e3*/
  {
    (v7) = ((v7) & ~0xFF) | ((Cell::SetTileType((__int16 *)&a2, g_TerrainSoundTable2 + g_Cell_BuildabilityLUT + 1, -1, -1, 0)) & 0xFF); /*0x5723f5*/
  }
  else if ( v7 == g_TerrainSoundTable2 + 1 ) /*0x572405*/
  {
    (v7) = ((v7) & ~0xFF) | ((Cell::SetTileType((__int16 *)&a2, g_TerrainSoundTable2 + g_Cell_BuildabilityLUT + 2, -1, -1, 0)) & 0xFF); /*0x572417*/
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

  int v2 = this->M256; // edx /*0x578b77*/
  int v3 = this->M252; // esi /*0x578b80*/
  int16_t v4 = v2 + this->M244 - v3; // ax /*0x578b89*/
  int16_t v5 = v2 + v3 + 1; // bp /*0x578b8b*/
  int v6 = this->M260; // edx /*0x578b8f*/
  int v7 = this->M264; // ecx /*0x578b95*/
  int v8 = *a2; // ebx /*0x578bac*/
  int v9; // esi
  v9 = a2[1]; /*0x578baf*/
  int v10; // edi
  v10 = (v8 + v4 - ((2 * v6 - 1) % 3 != 0) - v5 - v9) / ((2 * v6 - 1) / 3); /*0x578bf4*/
  int v11; // esi
  v11 = v9 - ((2 * v7 - 1) % 3 != 0) - v4 - v5; /*0x578c0d*/
  unsigned int v12; // ecx
  v12 = (uint64_t)(1431655766LL * (2 * v7 - 1)) >> 32; /*0x578c16*/
  int v13; // eax
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
unsigned int * E4Recv_578C50::sub_578C50(unsigned int * v9, int a3)
{


  int v3; // esi
  v3 = ((2 * this->M260 - 1) % 3 != 0) + (2 * this->M260 - 1) / 3 * ((a3 - 1) % 3); /*0x578ca4*/
  int v4 = this->M256; // eax /*0x578ccc*/
  int v5; // edi
  v5 = ((2 * this->M264 - 1) % 3 != 0) + (a3 - 1) / 3 * ((2 * this->M264 - 1) / 3); /*0x578cd8*/
  int v6 = this->M252; // edx /*0x578cda*/
  __int16 v8; // [esp+12h] [ebp-Eh]
  v8 = v4 + this->M244 - v6; /*0x578cf0*/
  int v9; // [esp+28h] [ebp+8h]
  (v9) = ((v9) & ~0xFFFF) | ((v4 + v6 + 1 + (v3 + (v5 & 1) + v5 + (v3 & 1)) / 2) & 0xFFFF); /*0x578d34*/
  (v9) = ((v9) & ~(0xFFFF << 16)) | ((((v5 - v3) / 2 + v8) & 0xFFFF) << 16); /*0x578d3f*/
  *v9 = v9; /*0x578d4b*/
  return v9; /*0x578d48*/

}
} // namespace gamemd

// 0x579320
namespace gamemd {
int InitializeTileNeighborTable()
{

  dword_ABDDA8 = 0; /*0x57934e*/
  dword_ABDDAC = 0; /*0x579361*/
  dword_ABDDB0 = 0; /*0x579375*/
  dword_ABDDB4 = 0; /*0x579389*/
  int v1; // [esp+4h] [ebp-4h] BYREF
  v1 = 0; /*0x57938e*/
  dword_ABDDB8 = 0; /*0x57939c*/
  dword_ABDDC4 = 0; /*0x5793b1*/
  dword_ABDDBC = 0; /*0x5793bc*/
  dword_ABDDC0 = 0; /*0x5793c2*/
  dword_ABDDC8 = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x5793d4*/
  dword_ABDDCC = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x5793e7*/
  dword_ABDDD0 = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x5793f4*/
  dword_ABDDD4 = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x57940c*/
  dword_ABDDD8 = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x57941f*/
  dword_ABDDDC = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x57942c*/
  dword_ABDDE0 = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x579444*/
  dword_ABDDE4 = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x579457*/
  dword_ABDDE8 = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x579464*/
  dword_ABDDEC = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x57947c*/
  dword_ABDDF0 = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x57948f*/
  dword_ABDDF4 = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x57949c*/
  dword_ABDDF8 = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x5794b4*/
  dword_ABDDFC = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x5794c7*/
  dword_ABDE00 = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x5794d4*/
  dword_ABDE04 = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x5794ec*/
  dword_ABDE08 = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x5794ff*/
  dword_ABDE0C = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x57950c*/
  dword_ABDE10 = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x579524*/
  dword_ABDE14 = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x579537*/
  dword_ABDE18 = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x579544*/
  dword_ABDE1C = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x57955c*/
  dword_ABDE20 = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x579570*/
  dword_ABDE24 = *(unsigned int *)CellStruct::Set(&v1, 1, 0); /*0x57957d*/
  dword_ABDE28 = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x579595*/
  dword_ABDE2C = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x5795a8*/
  dword_ABDE30 = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x5795b5*/
  dword_ABDE34 = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x5795cd*/
  dword_ABDE38 = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x5795e0*/
  dword_ABDE3C = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x5795ed*/
  dword_ABDE40 = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x579605*/
  int result; // eax
  result = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x579610*/
  dword_ABDE44 = result; /*0x579613*/
  return result; /*0x579612*/
}
} // namespace gamemd

// 0x57A900
namespace gamemd {
int sub_57A900(unsigned int * a1, signed int a2)
{

  unsigned int v12[4]; // [esp+18h] [ebp-10h]
  v12[1] = 4; /*0x57a913*/
  v12[3] = 4; /*0x57a917*/
  v12[0] = 2; /*0x57a91d*/
  v12[2] = 2; /*0x57a921*/
  int v3 = 1; // ebx /*0x57a928*/
  unsigned int v4; // ebp
  v4 = v12[a2 / 2]; /*0x57a92f*/
  Cell *NeighbourContent; // esi
  NeighbourContent = (Cell *)Cell::GetNeighbourContent(a1, v4); /*0x57a939*/
  Cell *v6; // edi
  v6 = (Cell *)Cell::GetNeighbourContent(NeighbourContent, a2); /*0x57a945*/
  bool v10; // [esp+13h] [ebp-15h]
  v10 = (uint8_t)Cell::IsValidHeight(NeighbourContent) == 0; /*0x57a950*/
  char IsValidHeight; // al
  IsValidHeight = Cell::IsValidHeight(v6); /*0x57a955*/
  if ( v10 ) /*0x57a960*/
  {
    while ( IsValidHeight ) /*0x57a96a*/
    {
      int v11; // [esp+14h] [ebp-14h]
      v11 = v3 + 1; /*0x57a970*/
      NeighbourContent = (Cell *)Cell::GetNeighbourContent(NeighbourContent, v4); /*0x57a97b*/
      v6 = (Cell *)Cell::GetNeighbourContent(v6, v4); /*0x57a985*/
      bool v8; // bl
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

  dword_ABDB68 = -65536; /*0x57a9f2*/
  dword_ABDB6C = -65536; /*0x57aa05*/
  dword_ABDB70 = -65536; /*0x57aa1b*/
  int v1; // [esp+8h] [ebp-4h] BYREF
  v1 = -1; /*0x57aa21*/
  dword_ABDB74 = -65536; /*0x57aa31*/
  dword_ABDB78 = -131072; /*0x57aa44*/
  dword_ABDB7C = -65537; /*0x57aa50*/
  dword_ABDB80 = -1; /*0x57aa56*/
  dword_ABDB84 = *(unsigned int *)CellStruct::Set(&v1, -1, -1); /*0x57aa63*/
  dword_ABDB88 = *(unsigned int *)CellStruct::Set(&v1, -1, 0); /*0x57aa7b*/
  dword_ABDB8C = *(unsigned int *)CellStruct::Set(&v1, -1, 0); /*0x57aa8e*/
  dword_ABDB90 = *(unsigned int *)CellStruct::Set(&v1, -1, 0); /*0x57aa9b*/
  dword_ABDB94 = *(unsigned int *)CellStruct::Set(&v1, -1, 0); /*0x57aab4*/
  dword_ABDB98 = *(unsigned int *)CellStruct::Set(&v1, -2, -1); /*0x57aac8*/
  dword_ABDB9C = *(unsigned int *)CellStruct::Set(&v1, -2, 0); /*0x57aad5*/
  dword_ABDBA0 = *(unsigned int *)CellStruct::Set(&v1, -1, 0); /*0x57aae8*/
  dword_ABDBA4 = *(unsigned int *)CellStruct::Set(&v1, -1, 0); /*0x57ab00*/
  dword_ABDBA8 = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x57ab0d*/
  dword_ABDBAC = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x57ab25*/
  dword_ABDBB0 = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x57ab38*/
  dword_ABDBB4 = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x57ab45*/
  dword_ABDBB8 = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x57ab5d*/
  dword_ABDBBC = *(unsigned int *)CellStruct::Set(&v1, -1, 0); /*0x57ab70*/
  dword_ABDBC0 = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x57ab7d*/
  dword_ABDBC4 = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x57ab95*/
  dword_ABDBC8 = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x57aba8*/
  dword_ABDBCC = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x57abb5*/
  dword_ABDBD0 = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x57abcd*/
  dword_ABDBD4 = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x57abe0*/
  dword_ABDBD8 = *(unsigned int *)CellStruct::Set(&v1, 0, -1); /*0x57abed*/
  dword_ABDBDC = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x57ac05*/
  dword_ABDBE0 = *(unsigned int *)CellStruct::Set(&v1, 0, -1); /*0x57ac18*/
  dword_ABDBE4 = *(unsigned int *)CellStruct::Set(&v1, 0, -1); /*0x57ac25*/
  dword_ABDBE8 = *(unsigned int *)CellStruct::Set(&v1, -1, -1); /*0x57ac3d*/
  dword_ABDBEC = *(unsigned int *)CellStruct::Set(&v1, -1, -1); /*0x57ac50*/
  dword_ABDBF0 = *(unsigned int *)CellStruct::Set(&v1, -1, 0); /*0x57ac5d*/
  dword_ABDBF4 = *(unsigned int *)CellStruct::Set(&v1, -1, 0); /*0x57ac75*/
  dword_ABDBF8 = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x57ac88*/
  dword_ABDBFC = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x57ac95*/
  dword_ABDC00 = *(unsigned int *)CellStruct::Set(&v1, 0, -1); /*0x57acad*/
  dword_ABDC04 = *(unsigned int *)CellStruct::Set(&v1, 0, -1); /*0x57acc0*/
  dword_ABDC08 = *(unsigned int *)CellStruct::Set(&v1, 0, 0); /*0x57accd*/
  int *result; // eax
  result = (int *)CellStruct::Set(&v1, 0, 0); /*0x57acd8*/
  dword_ABDC0C = *result; /*0x57ace0*/
  return result; /*0x57acdf*/
}
} // namespace gamemd
