// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/ObjectVector_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_6B0A90_e4.hpp"
#include "e4/classes/E4Recv_6B1EE0_e4.hpp"
#include "e4/classes/E4Recv_6B93E0_e4.hpp"
#include "e4/classes/E4Recv_6B9450_e4.hpp"
#include "e4/classes/E4Recv_6B94E0_e4.hpp"
#include "e4/classes/E4Recv_6BB990_e4.hpp"
#include "e4/classes/E4Recv_6BEC50_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/BSurface_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/GameClass_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/LinkedList_flat_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/GameSettings_e4.hpp"
#include "e4/classes/Skirmish_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/BombClass_e4.hpp"
#include "e4/classes/Compare_e4.hpp"
#include "e4/classes/GadgetClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/MapSeed_e4.hpp"
#include "src/e4/classes/BufferIOFileClass_e4.hpp"
#include "src/e4/classes/CCFileClass_e4.hpp"

// 0x6B2430
namespace gamemd {
unsigned int * sub_6B2430(int * a1, int a2)
{
  unsigned int *result; // eax
  unsigned int * v3;
  unsigned int * v4;
  unsigned int * v6;

  result = (unsigned int *)((int)((unsigned int *)dword_B0B658));
  v3 = (unsigned int *)((int)((unsigned int *)(a1[1])));
  v4 = (unsigned int *)((int)((unsigned int *)(*a1)));
  if ( g_SlaveMgrPool < dword_B0B658 /*0x6b2475*/
    || (byte_B0B65D || !dword_B0B658)
    && dword_B0B664 > 0
    && (result = (unsigned int *)(*(int (**)(int *, int, unsigned int))(dword_B0B650 + 8))(
                             (int *)&dword_B0B650,
                             dword_B0B658 + dword_B0B664,
                             0),
        (unsigned char)result) )
  {
    v6 = (unsigned int *)((int)((unsigned int *)(g_SlaveMgrPool++)));
    result = (unsigned int *)((char *)dword_B0B654 + 12 * v6);
    *result = (unsigned int)(v4);
    result[1] = (unsigned int)(v3);
    result[2] = a2; /*0x6b2498*/
  }
  return result; /*0x6b249b*/
}
}
// 0x6B2700
namespace gamemd {
CellClass * * InitializeBuildabilityGrid(int a1)
{
  int v1; // esi
  char *v2; // eax
  unsigned char *v3; // ecx
  int v4; // edx
  int result; // eax
  int16_t v6; // cx
  int16_t v7; // di
  int v8; // esi
  int v9; // ebx
  int v10; // ebp
  int v11; // edi
  char *v12; // esi
  int v13; // eax
  int16_t v14; // dx
  int v15; // edi
  void *v16; // eax
  void *v17; // eax
  void *v18; // eax
  void *v19; // eax
  int v20; // [esp+14h] [ebp-28h]
  int v21; // [esp+1Ch] [ebp-20h]
  int v22; // [esp+20h] [ebp-1Ch]
  int v23; // [esp+24h] [ebp-18h]
  int v24; // [esp+2Ch] [ebp-10h] BYREF
  int v25; // [esp+30h] [ebp-Ch]
  uint16_t v26[4]; // [esp+34h] [ebp-8h] BYREF

  if ( g_SlaveManagerPool ) /*0x6b2714*/
  {
    RA2_OPDEL(g_SlaveManagerPool); /*0x6b2717*/
    g_SlaveManagerPool = 0; /*0x6b271f*/
  }
  v1 = (dword_87F914 + 1) * (dword_87F918 + 1); /*0x6b2734*/
  v2 = (char *)RA2_OPNEW(8 * v1); /*0x6b273f*/
  if ( v2 ) /*0x6b2749*/
  {
    if ( v1 - 1 >= 0 ) /*0x6b2750*/
    {
      v3 = (unsigned char *)(v2 + 5);
      v4 = v1; /*0x6b2755*/
      do /*0x6b2764*/
      {
        *(unsigned int *)(v3 - 5) = 0; /*0x6b2756*/
        *(v3 - 1) = 0; /*0x6b2759*/
        *v3 = 0; /*0x6b275d*/
        v3 += 8; /*0x6b2760*/
        --v4; /*0x6b2763*/
      }
      while ( v4 ); /*0x6b2764*/
    }
    g_SlaveManagerPool = (int)(v2);
  }
  else
  {
    g_SlaveManagerPool = 0; /*0x6b276d*/
  }
  dword_8759A0 = dword_87F918 + 1; /*0x6b2784*/
  dword_8759AC = dword_87F910; /*0x6b2790*/
  result = dword_87F914 + 1; /*0x6b27e4*/
  dword_8759A4 = dword_87F914 + 1; /*0x6b27ec*/
  v6 = dword_87F914 - dword_87F90C; /*0x6b27f8*/
  dword_8759A8 = dword_87F90C; /*0x6b27fe*/
  v7 = (IDA_HIWORD(a1) - 14) & (((int16_t)(IDA_HIWORD(a1) - 14) < 0) - 1); /*0x6b2804*/
  if ( dword_87F914 - dword_87F90C >= (int16_t)(a1 + 14) ) /*0x6b2807*/
    v6 = a1 + 14; /*0x6b2809*/
  IDA_LOWORD(v8) = dword_87F918 - dword_87F910; /*0x6b2818*/
  if ( dword_87F918 - dword_87F910 >= (int16_t)(IDA_HIWORD(a1) + 14) ) /*0x6b2821*/
    IDA_LOWORD(v8) = IDA_HIWORD(a1) + 14; /*0x6b2823*/
  v9 = v7; /*0x6b2826*/
  v8 = (int16_t)v8; /*0x6b2829*/
  v20 = v7; /*0x6b282e*/
  v25 = (int16_t)v8; /*0x6b2832*/
  if ( v7 <= (int16_t)v8 ) /*0x6b2836*/
  {
    v23 = v6; /*0x6b2846*/
    do /*0x6b2a52*/
    {
      v10 = (int16_t)((a1 - 14) & (((int16_t)(a1 - 14) < 0) - 1)); /*0x6b284a*/
      if ( v10 <= v23 ) /*0x6b2854*/
      {
        do /*0x6b2a41*/
        {
          v11 = -1; /*0x6b2865*/
          v12 = (char *)g_SlaveManagerPool + 8 * v10 + 8 * v9 * result; /*0x6b2868*/
          v12[4] = 0; /*0x6b286b*/
          v12[5] = 0; /*0x6b286f*/
          v12[6] = 0; /*0x6b2873*/
          v26[0] = v10 + dword_8759A8; /*0x6b2884*/
          v13 = (int16_t)(v10 + dword_8759A8); /*0x6b2889*/
          v14 = v9 + dword_8759AC; /*0x6b288c*/
          v26[1] = v9 + dword_8759AC; /*0x6b2897*/
          if ( v13 >= dword_87F90C ) /*0x6b289c*/
          {
            if ( v13 <= dword_87F914 + dword_87F90C && v14 >= dword_87F910 && v14 <= dword_87F918 + dword_87F910 ) /*0x6b28cd*/
            {
              v15 = *((uint8_t *)((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)v26) + 284); /*0x6b28ef*/
              v11 = 15 * *((char *)((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)v26) + 283) /*0x6b291b*/
                  + *(unsigned int *)*(&off_83FF18 + v15);
              v16 = ((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)v26); /*0x6b291d*/
              if ( !((CellClass *)((int)v16))->IsBuildable() ) /*0x6b292a*/
                goto LABEL_24; /*0x6b292a*/
              v24 = *(unsigned int *)v26 - 0x10000; /*0x6b2959*/
              v17 = ((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&v24); /*0x6b295d*/
              if ( !((CellClass *)((int)v17))->IsBuildable() ) /*0x6b2966*/
                goto LABEL_24; /*0x6b2966*/
              IDA_LOWORD(v21) = v26[0] - 1; /*0x6b2979*/
              IDA_HIWORD(v21) = v26[1] - 1; /*0x6b2982*/
              v24 = v21; /*0x6b2991*/
              v18 = ((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&v24); /*0x6b2995*/
              if ( !((CellClass *)((int)v18))->IsBuildable() /*0x6b29d6*/
                || (IDA_HIWORD(v22) = v26[1],
                    IDA_LOWORD(v22) = v26[0] - 1,
                    v24 = v22,
                    v19 = ((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&v24),
                    !((CellClass *)((int)v19))->IsBuildable()) )
              {
  LABEL_24:
                v12[4] = 1; /*0x6b29df*/
              }
              if ( *(unsigned int *)v26 == a1 /*0x6b2a22*/
                || IDA___PAIR32__(v26[1] - 1, v26[0]) == a1
                || v26[0] - 1 == (unsigned short)a1 && (v26[1] - 1 == IDA_HIWORD(a1) || IDA___PAIR32__(v26[1], v26[0] - 1) == a1) )
              {
                v12[6] = 1; /*0x6b2a2b*/
              }
            }
            v9 = v20; /*0x6b2a2f*/
          }
          ++v10; /*0x6b2a37*/
          *(unsigned int *)v12 = v11; /*0x6b2a38*/
          result = dword_8759A4; /*0x6b2a3c*/
        }
        while ( v10 <= v23 ); /*0x6b2a41*/
        v8 = v25; /*0x6b2a47*/
      }
      v20 = ++v9; /*0x6b2a4e*/
    }
    while ( v9 <= v8 ); /*0x6b2a52*/
  }
  return (gamemd::CellClass **)(result);
}
}
// 0x6B2A70
namespace gamemd {
AbstractClass * * SlaveManager_InitGrid()
{
  int v1; // esi
  char *v2; // eax
  unsigned char *v3; // ecx
  int v4; // edx
  int result; // eax
  int v6; // ecx
  int v7; // esi
  int v8; // edx
  int16_t v9; // dx
  int *j; // esi
  int v11; // ebp
  int16_t v12; // ax
  int v13; // ecx
  int v14; // edx
  int v15; // esi
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // edi
  int *v20; // esi
  int v21; // esi
  int v22; // edx
  int v23; // ecx
  unsigned int *v24; // esi
  int v25; // esi
  int v26; // edx
  int v27; // esi
  ObjectClass *v28; // eax
  ObjectClass *v29; // eax
  char *v30; // [esp+8h] [ebp-4Ch]
  int16_t v31[2]; // [esp+Ch] [ebp-48h] BYREF
  int16_t v32[2]; // [esp+10h] [ebp-44h] BYREF
  int i; // [esp+14h] [ebp-40h]
  int v34; // [esp+18h] [ebp-3Ch]
  int v35; // [esp+1Ch] [ebp-38h]
  int v36; // [esp+20h] [ebp-34h]
  unsigned short v37[2]; // [esp+24h] [ebp-30h] BYREF
  unsigned int v38;
  int v39; // [esp+2Ch] [ebp-28h]
  MapSeed v40; // [esp+30h] [ebp-24h] BYREF

  if ( g_SlaveManagerPool ) /*0x6b2a7e*/
  {
    RA2_OPDEL(g_SlaveManagerPool); /*0x6b2a81*/
    g_SlaveManagerPool = 0; /*0x6b2a89*/
  }
  v1 = (*(unsigned int *)&stru_87F5F0.__pad_58[716] + 1) * (*(unsigned int *)&stru_87F5F0.__pad_58[720] + 1); /*0x6b2a9e*/
  v2 = (char *)RA2_OPNEW(8 * v1); /*0x6b2aa9*/
  if ( v2 ) /*0x6b2ab3*/
  {
    if ( v1 - 1 >= 0 ) /*0x6b2aba*/
    {
      v3 = (unsigned char *)(v2 + 5);
      v4 = v1; /*0x6b2abf*/
      do /*0x6b2ace*/
      {
        *(unsigned int *)(v3 - 5) = 0; /*0x6b2ac0*/
        *(v3 - 1) = 0; /*0x6b2ac3*/
        *v3 = 0; /*0x6b2ac7*/
        v3 += 8; /*0x6b2aca*/
        --v4; /*0x6b2acd*/
      }
      while ( v4 ); /*0x6b2ace*/
    }
    g_SlaveManagerPool = (int)(v2);
  }
  else
  {
    g_SlaveManagerPool = 0; /*0x6b2ad7*/
  }
  dword_8759A8 = *(unsigned int *)&stru_87F5F0.__pad_58[708]; /*0x6b2ae8*/
  dword_8759AC = *(unsigned int *)&stru_87F5F0.__pad_58[712]; /*0x6b2afa*/
  v40.MapSeed_field_0x18 = -65536; /*0x6b2b11*/
  result = *(unsigned int *)&stru_87F5F0.__pad_58[716] + 1; /*0x6b2b23*/
  v6 = *(unsigned int *)&stru_87F5F0.__pad_58[720] + 1; /*0x6b2b24*/
  v40.MapSeed_field_0x1C = -1; /*0x6b2b25*/
  v7 = 0; /*0x6b2b37*/
  dword_8759A4 = *(unsigned int *)&stru_87F5F0.__pad_58[716] + 1; /*0x6b2b3b*/
  dword_8759A0 = *(unsigned int *)&stru_87F5F0.__pad_58[720] + 1; /*0x6b2b40*/
  v40.MapSeed_field_0x20 = 0xFFFF; /*0x6b2b46*/
  for ( i = 0; v7 < v6; i = v7 ) /*0x6b2b4e*/
  {
    v8 = 0; /*0x6b2b56*/
    v39 = 0; /*0x6b2b5a*/
    if ( result > 0 ) /*0x6b2b5e*/
    {
      while ( 1 ) /*0x6b2b77*/
      {
        v38 = (unsigned int)((int *)(0));
        *(unsigned int *)v32 = 0; /*0x6b2b7b*/
        v30 = (char *)g_SlaveManagerPool + 8 * v8 + 8 * v7 * result; /*0x6b2b82*/
        v30[4] = 0; /*0x6b2b86*/
        v30[5] = 0; /*0x6b2b8a*/
        IDA_HIWORD(v40.MapSeed_field_0x10) = dword_8759AC + v7; /*0x6b2ba8*/
        v9 = dword_8759A8 + v8; /*0x6b2bad*/
        IDA_LOWORD(v40.MapSeed_field_0x10) = v9; /*0x6b2ba3*/
        *(unsigned int *)v31 = v40.MapSeed_field_0x10; /*0x6b2bb1*/
        for ( j = &v40.MapSeed_field_0x18; ; ++j ) /*0x6b2bb5*/
        {
          v11 = v31[1] + v9; /*0x6b2bc1*/
          if ( v11 > g_MissionQueueFrame.localVariables[160] /*0x6b2bdc*/
            && v9 - v31[1] < g_MissionQueueFrame.localVariables[160]
            && v31[1] - v9 < g_MissionQueueFrame.localVariables[160]
            && v11 <= g_MissionQueueFrame.localVariables[161] )
          {
            break; /*0x6b2bdc*/
          }
          if ( *(int *)v32 >= 3 ) /*0x6b2be3*/
            break; /*0x6b2be3*/
          v12 = IDA_HIWORD(v40.MapSeed_field_0x10) + *((unsigned short *)j + 1); /*0x6b2bf1*/
          IDA_LOWORD(v34) = IDA_LOWORD(v40.MapSeed_field_0x10) + *(unsigned short *)j; /*0x6b2bfa*/
          IDA_HIWORD(v34) = v12; /*0x6b2bff*/
          v9 = v34; /*0x6b2c04*/
          *(unsigned int *)v31 = v34; /*0x6b2c09*/
          ++*(unsigned int *)v32; /*0x6b2c0d*/
        }
        v13 = v9; /*0x6b2c1b*/
        v14 = v31[1] + v9; /*0x6b2c1e*/
        if ( v14 <= g_MissionQueueFrame.localVariables[160] /*0x6b2c45*/
          || v13 - v31[1] >= g_MissionQueueFrame.localVariables[160]
          || v31[1] - v13 >= g_MissionQueueFrame.localVariables[160]
          || v14 > g_MissionQueueFrame.localVariables[161] )
        {
          v30[4] = 1; /*0x6b2ee4*/
        }
        else
        {
          v15 = *((uint8_t *)((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj(v31) + 284); /*0x6b2c6c*/
          v16 = 15 * *((char *)((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj(v31) + 283) /*0x6b2c95*/
              + *(unsigned int *)*(&off_83FF18 + v15);
          v17 = (unsigned int)(int *)(g_MissionQueueFrame.localVariables[160]);
          v38 = v16; /*0x6b2c9c*/
          v18 = (int16_t)(IDA_HIWORD(v40.MapSeed_field_0x10) - 1); /*0x6b2ca3*/
          v19 = v18 + IDA_SLOWORD(v40.MapSeed_field_0x10); /*0x6b2ca6*/
          if ( v19 > g_MissionQueueFrame.localVariables[160] /*0x6b2ccd*/
            && IDA_SLOWORD(v40.MapSeed_field_0x10) - v18 < g_MissionQueueFrame.localVariables[160]
            && v18 - IDA_SLOWORD(v40.MapSeed_field_0x10) < g_MissionQueueFrame.localVariables[160]
            && v19 <= g_MissionQueueFrame.localVariables[161] )
          {
            v35 = v40.MapSeed_field_0x10 - 0x10000; /*0x6b2cdc*/
            *(unsigned int *)v32 = v40.MapSeed_field_0x10 - 0x10000; /*0x6b2ceb*/
            v20 = (int *)((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj(v32); /*0x6b2cf4*/
            *(unsigned int *)v40.__pad_0 = v20[9]; /*0x6b2cfd*/
            if ( !(uint8_t)((MapSeed*)&v40)->IsCellInBounds() /*0x6b2d4e*/
              || v20[17] != -1
              || v20[57]
              || (v40.MapSeed_field_0x04 = v20[9], ((Tactical *)((Tactical *)&v40.MapSeed_field_0x04))->GetCellData()[69])
              || (v21 = v20[14], v21 < *(int *)(unsigned int *)((char *)&stru_A8EB00 + 340))
              && v21 != 0xFFFF
              && !*(unsigned char *)(*(unsigned int *)(*(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 328) + 4 * v21) + 736) )
            {
              v30[4] = 1; /*0x6b2d5c*/
            }
            v17 = g_MissionQueueFrame.localVariables[160]; /*0x6b2d60*/
          }
          v22 = (int16_t)(IDA_LOWORD(v40.MapSeed_field_0x10) - 1); /*0x6b2d73*/
          v23 = (int16_t)(IDA_HIWORD(v40.MapSeed_field_0x10) - 1); /*0x6b2d76*/
          if ( v23 + v22 > v17 /*0x6b2da0*/
            && v22 - v23 < v17
            && v23 - v22 < v17
            && v23 + v22 <= g_MissionQueueFrame.localVariables[161] )
          {
            IDA_LOWORD(v36) = IDA_LOWORD(v40.MapSeed_field_0x10) - 1; /*0x6b2daa*/
            IDA_HIWORD(v36) = IDA_HIWORD(v40.MapSeed_field_0x10) - 1; /*0x6b2daf*/
            v40.MapSeed_field_0x04 = v36; /*0x6b2dbe*/
            v24 = ((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj((int16_t *)&v40.MapSeed_field_0x04); /*0x6b2dc7*/
            *(unsigned int *)v40.__pad_0 = v24[9]; /*0x6b2dd0*/
            if ( !(uint8_t)((MapSeed*)&v40)->IsCellInBounds() /*0x6b2e21*/
              || v24[17] != -1
              || v24[57]
              || (*(unsigned int *)v32 = v24[9], ((Tactical *)((Tactical *)v32))->GetCellData()[69])
              || (v25 = v24[14], v25 < *(int *)(unsigned int *)((char *)&stru_A8EB00 + 340))
              && v25 != 0xFFFF
              && !*(unsigned char *)(*(unsigned int *)(*(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 328) + 4 * v25) + 736) )
            {
              v30[4] = 1; /*0x6b2e2f*/
            }
            v17 = g_MissionQueueFrame.localVariables[160]; /*0x6b2e33*/
          }
          v26 = (int16_t)(IDA_LOWORD(v40.MapSeed_field_0x10) - 1); /*0x6b2e3d*/
          v27 = IDA_SHIWORD(v40.MapSeed_field_0x10) + v26; /*0x6b2e45*/
          if ( v27 > v17 /*0x6b2e60*/
            && v26 - IDA_SHIWORD(v40.MapSeed_field_0x10) < v17
            && IDA_SHIWORD(v40.MapSeed_field_0x10) - v26 < v17
            && v27 <= g_MissionQueueFrame.localVariables[161] )
          {
            v37[0] = (unsigned char)(-1);
            v37[1] = 0; /*0x6b2e77*/
            v40.MapSeed_field_0x08 = *(unsigned int *)(CellStruct)::Add( /*0x6b2e89*/
                                        (CellStruct *)&v40.MapSeed_field_0x10,
                                        &v40.MapSeed_field_0x0C,
                                        v37);
            v28 = (ObjectClass *)((CellCoord*)/*0x6b2e93*/
                                   (CellCoord *)&stru_87F5F0.__pad_58[416])->To_CellObj(/*0x6b2e93*/ (int16_t *)&v40.MapSeed_field_0x08);
            if ( !System_Init_6B2520(v28) ) /*0x6b2e9c*/
              v30[4] = 1; /*0x6b2ea9*/
          }
          if ( (uint8_t)((MapSeed*)(MapSeed *)&v40.MapSeed_field_0x10)->IsCellInBounds() ) /*0x6b2eb1*/
          {
            v29 = (ObjectClass *)/*0x6b2ec4*/
                                   ((CellCoord*)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj(/*0x6b2ec4*/ (int16_t *)&v40.MapSeed_field_0x10);
            if ( !System_Init_6B2520(v29) ) /*0x6b2ecd*/
              v30[4] = 1; /*0x6b2eda*/
          }
        }
        *(unsigned int *)v30 = v38; /*0x6b2ef0*/
        result = dword_8759A4; /*0x6b2ef6*/
        v8 = ++v39; /*0x6b2efb*/
        if ( v39 >= dword_8759A4 ) /*0x6b2f02*/
          break; /*0x6b2f02*/
        v7 = i; /*0x6b2b66*/
      }
      v6 = dword_8759A0; /*0x6b2f08*/
      v7 = i; /*0x6b2f0e*/
    }
    ++v7; /*0x6b2f14*/
  }
  return (gamemd::AbstractClass **)(result);
}
}
// 0x6B2F30
namespace gamemd {
AbstractClass * * sub_6B2F30(char a1, int a2, int a3)
{
  int v3; // esi
  int16_t v4; // bp
  int16_t v5; // bx
  int16_t v6; // di
  int v7; // esi
  int v8; // ecx
  int v9; // edx
  unsigned int v10;
  int16_t v11; // di
  unsigned int *v12; // ebx
  int v13; // ecx
  int v14; // edx
  int v15; // esi
  int v16; // ecx
  int v17; // edx
  int v18; // edi
  int v19; // edx
  int *v20; // esi
  int v21; // ebp
  int v22; // eax
  int i; // esi
  int v24; // eax
  int j; // esi
  int *ScreenRect; // eax
  int v27; // esi
  char v28; // dl
  int v29; // eax
  int v30; // edi
  int v31; // ecx
  int16_t v32; // ax
  int16_t v33; // bp
  int v34; // esi
  int v35; // edx
  int v36; // edx
  int *v37; // eax
  int v38; // ecx
  int v39; // ebp
  int v40; // edx
  unsigned int *v41; // ecx
  unsigned int *v42; // eax
  int v43; // edi
  int v44; // ebx
  int v45; // ebp
  int v46; // esi
  int v47; // ecx
  int *v48; // eax
  int v49; // esi
  int v50; // edi
  int v51; // ecx
  int v52; // edx
  int v53; // ebp
  int v54; // eax
  int v55; // ecx
  int v56; // eax
  int v57; // eax
  int v58; // ecx
  int v59; // edx
  int v60; // esi
  int v61; // eax
  int v62; // ecx
  void *v63; // edi
  int *v64; // eax
  int v65; // ebp
  int v66; // esi
  int v67; // ebx
  int *v68; // eax
  int v69; // edi
  int v70; // edx
  int v71; // ecx
  int v72; // eax
  int v73; // eax
  int v74; // ecx
  int v75; // edx
  int v77; // [esp+10h] [ebp-ACh] BYREF
  int16_t v78; // [esp+14h] [ebp-A8h]
  int16_t v79; // [esp+16h] [ebp-A6h]
  int16_t v80; // [esp+18h] [ebp-A4h]
  int16_t v81; // [esp+1Ah] [ebp-A2h]
  int v82; // [esp+1Ch] [ebp-A0h]
  int v83; // [esp+20h] [ebp-9Ch]
  char v84; // [esp+27h] [ebp-95h]
  int v85; // [esp+28h] [ebp-94h]
  int v86; // [esp+2Ch] [ebp-90h]
  int v87; // [esp+30h] [ebp-8Ch]
  int v88; // [esp+34h] [ebp-88h]
  int v89; // [esp+38h] [ebp-84h]
  int v90; // [esp+40h] [ebp-7Ch]
  int v91; // [esp+44h] [ebp-78h]
  int k; // [esp+48h] [ebp-74h]
  int v93; // [esp+4Ch] [ebp-70h]
  int v94; // [esp+50h] [ebp-6Ch]
  int v95; // [esp+54h] [ebp-68h] BYREF
  int v96; // [esp+58h] [ebp-64h] BYREF
  int v97; // [esp+5Ch] [ebp-60h] BYREF
  int v98; // [esp+60h] [ebp-5Ch] BYREF
  int v99; // [esp+64h] [ebp-58h]
  int v100; // [esp+68h] [ebp-54h]
  void* v101;
  void *Block; // [esp+70h] [ebp-4Ch]
  int v103; // [esp+74h] [ebp-48h]
  char v104; // [esp+79h] [ebp-43h]
  int v105; // [esp+7Ch] [ebp-40h]
  int v106; // [esp+80h] [ebp-3Ch]
  unsigned int v107;
  int v108; // [esp+88h] [ebp-34h]
  int v109; // [esp+8Ch] [ebp-30h] BYREF
  int v110; // [esp+90h] [ebp-2Ch]
  int v111; // [esp+94h] [ebp-28h]
  int v112; // [esp+98h] [ebp-24h]
  int v113[4]; // [esp+9Ch] [ebp-20h] BYREF
  int v114[4]; // [esp+ACh] [ebp-10h] BYREF

  v84 = a1; /*0x6b2f46*/
  IDA_LOWORD(v77) = a3 - 14; /*0x6b2f51*/
  IDA_HIWORD(v77) = IDA_HIWORD(a3) - 14; /*0x6b2f56*/
  v3 = v77; /*0x6b2f5b*/
  IDA_HIWORD(v77) = IDA_HIWORD(a3) + 14; /*0x6b2f62*/
  v89 = v3; /*0x6b2f73*/
  IDA_LOWORD(v77) = a3 + 14; /*0x6b2f87*/
  IDA_HIWORD(v83) = IDA_HIWORD(a3) + 14; /*0x6b2f93*/
  v4 = (int16_t)(a3 - 14) < 0 ? 0 : v3;
  v5 = v3 < 0 ? 0 : IDA_HIWORD(v3);
  IDA_LOWORD(v83) = dword_87F914 - dword_87F90C; /*0x6b2fad*/
  if ( dword_87F914 - dword_87F90C >= (int16_t)(a3 + 14) ) /*0x6b2fb2*/
    IDA_LOWORD(v83) = a3 + 14; /*0x6b2fb4*/
  v6 = IDA_HIWORD(v83); /*0x6b2fc4*/
  if ( dword_87F918 - dword_87F910 < IDA_SHIWORD(v83) ) /*0x6b2fcd*/
    v6 = dword_87F918 - dword_87F910; /*0x6b2fcf*/
  v7 = 0; /*0x6b2fd2*/
  v90 = 0; /*0x6b2fdf*/
  v91 = 0; /*0x6b2fe3*/
  k = 0; /*0x6b2fe7*/
  v93 = 0; /*0x6b2feb*/
  v78 = 0x7FFF; /*0x6b2fef*/
  v79 = 0x7FFF; /*0x6b2ff4*/
  v80 = 0; /*0x6b2ff9*/
  v81 = 0; /*0x6b2ffe*/
  ((ObjectVector*)&v101)->Construct(0, 0); /*0x6b3003*/
  v8 = v5; /*0x6b3008*/
  v9 = v6; /*0x6b300b*/
  v101 = (void*)&DynamicVectorClass_ObjectClass___vftable; /*0x6b3010*/
  v106 = 10; /*0x6b3018*/
  v105 = 0; /*0x6b3023*/
  v100 = v5; /*0x6b3027*/
  v108 = v6; /*0x6b302b*/
  if ( v5 <= v6 ) /*0x6b3032*/
  {
    v107 = v4; /*0x6b303b*/
    v98 = (int16_t)v83; /*0x6b3047*/
    v10 = g_SlaveManagerPool; /*0x6b304b*/
    while ( 1 ) /*0x6b3050*/
    {
      v11 = v107; /*0x6b3050*/
      v83 = v107; /*0x6b305d*/
      if ( v107 <= v98 ) /*0x6b3061*/
        break; /*0x6b3061*/
  LABEL_107:
      v100 = ++v8; /*0x6b361a*/
      if ( v8 > v9 ) /*0x6b361e*/
        goto LABEL_110; /*0x6b361e*/
    }
    while ( 1 ) /*0x6b3080*/
    {
      IDA_HIWORD(v96) = dword_8759AC + v8; /*0x6b3080*/
      IDA_LOWORD(v96) = dword_8759A8 + v11; /*0x6b308f*/
      v12 = (unsigned int *)(((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&v96)); /*0x6b3099*/
      if ( !((CellClass *)((int)v12))->IsBuildable() ) /*0x6b30a8*/
        goto LABEL_104; /*0x6b30a8*/
      v13 = v100 * dword_8759A4 + v83; /*0x6b30c5*/
      v10 = g_SlaveManagerPool; /*0x6b30c8*/
      v14 = dword_8759A4 * (v100 + 1) + v83; /*0x6b30cd*/
      if ( *((unsigned char *)g_SlaveManagerPool + 8 * v13 + 5) /*0x6b30e5*/
        || *((unsigned char *)g_SlaveManagerPool + 8 * v13 + 13)
        || *((unsigned char *)g_SlaveManagerPool + 8 * v14 + 13)
        || *((unsigned char *)g_SlaveManagerPool + 8 * v14 + 5) )
      {
        v15 = *((unsigned int *)g_SlaveManagerPool + 2 * v13); /*0x6b30f0*/
        v110 = *((unsigned int *)g_SlaveManagerPool + 2 * v13 + 2); /*0x6b30f7*/
        v16 = *((unsigned int *)g_SlaveManagerPool + 2 * v14 + 2); /*0x6b30fe*/
        v17 = *((unsigned int *)g_SlaveManagerPool + 2 * v14); /*0x6b3102*/
        v18 = 1000; /*0x6b3105*/
        v109 = v15; /*0x6b310a*/
        v112 = v17; /*0x6b3111*/
        v111 = v16; /*0x6b3118*/
        v82 = 1000; /*0x6b311f*/
        v19 = 0; /*0x6b3123*/
        v20 = &v109; /*0x6b3125*/
        v21 = 4; /*0x6b312c*/
        do /*0x6b3143*/
        {
          if ( *v20 < v18 ) /*0x6b3135*/
            v18 = *v20; /*0x6b3137*/
          if ( *v20 > v19 ) /*0x6b313b*/
            v19 = *v20; /*0x6b313d*/
          ++v20; /*0x6b313f*/
          --v21; /*0x6b3142*/
        }
        while ( v21 ); /*0x6b3143*/
        v82 = v18; /*0x6b3147*/
        if ( v19 - v18 <= 15 ) /*0x6b314e*/
          break; /*0x6b314e*/
      }
  LABEL_105:
      if ( ++v83 > v98 ) /*0x6b3602*/
      {
        v8 = v100; /*0x6b3608*/
        v7 = v91; /*0x6b360c*/
        v9 = v108; /*0x6b3610*/
        goto LABEL_107; /*0x6b3610*/
      }
      v11 = v83; /*0x6b3069*/
      IDA_LOWORD(v8) = v100; /*0x6b306d*/
    }
    v105 = 0; /*0x6b315c*/
    if ( Block && v104 ) /*0x6b3168*/
    {
      RA2_OPDEL(Block); /*0x6b316b*/
      Block = 0; /*0x6b3173*/
    }
    v22 = 0; /*0x6b3177*/
    v104 = 0; /*0x6b3179*/
    v103 = 0; /*0x6b317e*/
    for ( i = v12[57]; i; i = *(unsigned int *)(i + 48) ) /*0x6b318a*/
    {
      if ( v105 < v22 ) /*0x6b3190*/
        goto LABEL_31; /*0x6b3190*/
      if ( !v104 && v22 || v106 <= 0 ) /*0x6b31a7*/
        continue; /*0x6b31a7*/
      if ( ((uint8_t (*)(void ***, int, unsigned int))v101[2])(&v101, v106 + v22, 0) ) /*0x6b31b5*/
      {
  LABEL_31:
        v24 = v105++; /*0x6b31c0*/
        *((unsigned int *)Block + v24) = i; /*0x6b31cb*/
      }
      v22 = v103; /*0x6b31ce*/
    }
    for ( j = 0; j < v105; ++j ) /*0x6b31e1*/
      (*(void (**)(unsigned int, unsigned int))(**((unsigned int **)Block + j) + 292))(*((unsigned int *)Block + j), 0); /*0x6b31ee*/
    ScreenRect = ((CellClass *)((int)v12))->GetScreenRect(v114); /*0x6b3205*/
    v85 = *ScreenRect; /*0x6b320c*/
    v86 = ScreenRect[1]; /*0x6b3213*/
    v87 = ScreenRect[2]; /*0x6b321e*/
    v88 = ScreenRect[3]; /*0x6b3225*/
    v27 = *((char *)v12 + 283); /*0x6b3232*/
    v28 = ((int)((uint64_t)(2290649225LL * v82) >> 32) >> 3 < 0) /*0x6b3241*/
        + ((int)((uint64_t)(2290649225LL * v82) >> 32) >> 3);
    *((unsigned char *)v12 + 283) = v28; /*0x6b3248*/
    Object_Create(v28); /*0x6b3252*/
    if ( v27 != *((char *)v12 + 283) ) /*0x6b3260*/
      CellClass::ClearCellContents(v12); /*0x6b3264*/
    ((House *)((int)v12))->AnnounceUpgrade(-1); /*0x6b326d*/
    v29 = v12[18]; /*0x6b3272*/
    if ( v29 != -1 ) /*0x6b3278*/
    {
      v89 = v12[9]; /*0x6b3287*/
      v99 = 0; /*0x6b328b*/
      v30 = *((unsigned int *)dword_A8EC1C + v29); /*0x6b3293*/
      v31 = *(unsigned int *)(v30 + 664); /*0x6b329e*/
      v32 = *((uint8_t *)v12 + 287) / v31; /*0x6b32af*/
      IDA_LOWORD(v89) = v89 - *((uint8_t *)v12 + 287) % v31; /*0x6b32b1*/
      IDA_HIWORD(v89) -= v32; /*0x6b32b6*/
      if ( *(int *)(v30 + 668) > 0 ) /*0x6b32c3*/
      {
        v33 = v89; /*0x6b32c5*/
        do /*0x6b3320*/
        {
          v34 = 0; /*0x6b32c9*/
          if ( v31 > 0 ) /*0x6b32cd*/
          {
            IDA_HIWORD(v94) = v99 + IDA_HIWORD(v89); /*0x6b32d9*/
            do /*0x6b330d*/
            {
              IDA_LOWORD(v94) = v34 + v33; /*0x6b32e5*/
              v95 = v94; /*0x6b32ee*/
              *((unsigned int *)((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&v95) + 18) = -1; /*0x6b32fd*/
              v31 = *(unsigned int *)(v30 + 664); /*0x6b3304*/
              ++v34; /*0x6b330a*/
            }
            while ( v34 < v31 ); /*0x6b330d*/
          }
          v35 = *(unsigned int *)(v30 + 668); /*0x6b3313*/
          ++v99; /*0x6b331c*/
        }
        while ( v99 < v35 ); /*0x6b3320*/
      }
    }
    v97 = v12[9]; /*0x6b332a*/
    ((BuildingClass *)(int)&dword_87F7E8)->AddUpgrade( (int)&v97); /*0x6b3333*/
    if ( (int16_t)v97 < v78 ) /*0x6b3341*/
      v78 = v97; /*0x6b3343*/
    if ( (int16_t)v97 > v80 ) /*0x6b334d*/
      v80 = v97; /*0x6b334f*/
    if ( IDA_SHIWORD(v97) < v79 ) /*0x6b335e*/
      v79 = IDA_HIWORD(v97); /*0x6b3360*/
    if ( IDA_SHIWORD(v97) > v81 ) /*0x6b336a*/
      v81 = IDA_HIWORD(v97); /*0x6b336c*/
    v36 = v82; /*0x6b3371*/
    v37 = &v109; /*0x6b3375*/
    v38 = 4; /*0x6b337c*/
    do /*0x6b338c*/
    {
      v39 = *v37++; /*0x6b3381*/
      --v38; /*0x6b3388*/
      *(v37 - 1) = v39 - v36; /*0x6b3389*/
    }
    while ( v38 ); /*0x6b338c*/
    v40 = 0; /*0x6b339c*/
    v41 = (unsigned int *)(&off_83FF18); /*0x6b339e*/
    while ( 1 ) /*0x6b33a3*/
    {
      v42 = (unsigned int *)*v41; /*0x6b33a3*/
      if ( *(unsigned int *)*v41 == v109 && v42[1] == v110 && v42[2] == v111 && v42[3] == v112 ) /*0x6b33c4*/
        break; /*0x6b33c4*/
      ++v41; /*0x6b33c6*/
      ++v40; /*0x6b33c9*/
      if ( (int)v41 >= (int)&off_83FF64 ) /*0x6b33d0*/
      {
        v43 = v85; /*0x6b33d2*/
        v44 = k; /*0x6b33d6*/
        v45 = v86; /*0x6b33da*/
        v46 = v88; /*0x6b33de*/
        goto LABEL_88; /*0x6b33e2*/
      }
    }
    *((unsigned char *)v12 + 284) = v40; /*0x6b33e9*/
    if ( v40 ) /*0x6b33ef*/
      v47 = v40 + g_CellTileLookup - 1; /*0x6b33fe*/
    else
      v47 = dword_AA10B0; /*0x6b33f1*/
    v12[14] = v47; /*0x6b3402*/
    ((House *)((int)v12))->AnnounceUpgrade(-1); /*0x6b3409*/
    v77 = v12[9]; /*0x6b341b*/
    ((BuildingClass *)(int)&dword_87F7E8)->AddUpgrade( (int)&v77); /*0x6b341f*/
    v48 = ((CellClass *)((int)v12))->GetScreenRect(v113); /*0x6b342e*/
    v49 = v87; /*0x6b3433*/
    if ( v87 <= 0 || v88 <= 0 ) /*0x6b3445*/
    {
      v55 = *v48; /*0x6b34c5*/
      v52 = v48[1]; /*0x6b34c7*/
      v49 = v48[2]; /*0x6b34ca*/
      v56 = v48[3]; /*0x6b34cd*/
    }
    else
    {
      v82 = v48[2]; /*0x6b344c*/
      if ( v82 <= 0 || (v99 = v48[3], v99 <= 0) ) /*0x6b345b*/
      {
        v55 = v85; /*0x6b34b9*/
        v52 = v86; /*0x6b34bd*/
        v56 = v88; /*0x6b34c1*/
      }
      else
      {
        v50 = v85; /*0x6b345d*/
        v51 = *v48; /*0x6b3461*/
        v52 = v86; /*0x6b3463*/
        v53 = v88; /*0x6b3467*/
        if ( v85 > *v48 ) /*0x6b346d*/
        {
          v49 = v85 + v87 - v51; /*0x6b3471*/
          v50 = *v48; /*0x6b3473*/
        }
        v54 = v48[1]; /*0x6b3475*/
        v95 = v54; /*0x6b347a*/
        if ( v86 > v54 ) /*0x6b347e*/
        {
          v53 = v86 - v54 + v88; /*0x6b3482*/
          v52 = v54; /*0x6b3484*/
        }
        if ( v49 + v50 < v51 + v82 ) /*0x6b3491*/
          v49 = v51 - v50 + v82 + 1; /*0x6b3499*/
        if ( v52 + v53 < v95 + v99 ) /*0x6b34ac*/
          v53 = v95 + v99 - v52 + 1; /*0x6b34b1*/
        v55 = v50; /*0x6b34b3*/
        v56 = v53; /*0x6b34b5*/
      }
    }
    v44 = k; /*0x6b34d0*/
    v87 = v49; /*0x6b34d4*/
    v46 = v56; /*0x6b34d8*/
    v43 = v55; /*0x6b34e3*/
    v45 = v52; /*0x6b34e5*/
    v85 = v55; /*0x6b34e7*/
    v86 = v52; /*0x6b34eb*/
    v88 = v56; /*0x6b34ef*/
    if ( (int16_t)v77 < v78 ) /*0x6b34f3*/
      v78 = v77; /*0x6b34f5*/
    if ( (int16_t)v77 > v80 ) /*0x6b34ff*/
      v80 = v77; /*0x6b3501*/
    if ( IDA_SHIWORD(v77) < v79 ) /*0x6b3510*/
      v79 = IDA_HIWORD(v77); /*0x6b3512*/
    if ( IDA_SHIWORD(v77) > v81 ) /*0x6b351c*/
      v81 = IDA_HIWORD(v77); /*0x6b351e*/
  LABEL_88:
    if ( v44 <= 0 || v93 <= 0 ) /*0x6b352d*/
    {
      v59 = v87; /*0x6b35a3*/
      v57 = v43; /*0x6b35a7*/
      v58 = v45; /*0x6b35a9*/
    }
    else if ( v87 <= 0 || v46 <= 0 ) /*0x6b3539*/
    {
      v57 = v90; /*0x6b3593*/
      v58 = v91; /*0x6b3597*/
      v46 = v93; /*0x6b359b*/
      v59 = v44; /*0x6b359f*/
    }
    else
    {
      v57 = v90; /*0x6b353b*/
      v58 = v91; /*0x6b353f*/
      v46 = v93; /*0x6b3543*/
      v59 = v44; /*0x6b3549*/
      if ( v90 > v43 ) /*0x6b354b*/
      {
        v57 = v43; /*0x6b3551*/
        v59 = v90 + v44 - v43; /*0x6b3553*/
      }
      if ( v91 > v45 ) /*0x6b3557*/
      {
        v46 = v91 - v45 + v93; /*0x6b355b*/
        v58 = v45; /*0x6b355d*/
      }
      if ( v59 + v57 < v43 + v87 ) /*0x6b356a*/
        v59 = v87 - v57 + v43 + 1; /*0x6b3572*/
      if ( v46 + v58 < v86 + v88 ) /*0x6b3585*/
        v46 = v86 - v58 + v88 + 1; /*0x6b358d*/
    }
    v90 = v57; /*0x6b35ab*/
    v93 = v46; /*0x6b35b3*/
    v60 = 0; /*0x6b35b7*/
    v91 = v58; /*0x6b35bb*/
    for ( k = v59; v60 < v105; ++v60 ) /*0x6b35c3*/
    {
      (*(void (**)(unsigned int, int))(**((unsigned int **)Block + v60) + 292))(*((unsigned int *)Block + v60), 1); /*0x6b35d0*/
      (*(void (**)(unsigned int, unsigned int))(**((unsigned int **)Block + v60) + 460))(*((unsigned int *)Block + v60), 0); /*0x6b35e1*/
    }
  LABEL_104:
    v10 = g_SlaveManagerPool; /*0x6b35ee*/
    goto LABEL_105; /*0x6b35ee*/
  }
  v10 = g_SlaveManagerPool; /*0x6b3626*/
  LABEL_110:
  RA2_OPDEL(v10); /*0x6b362b*/
  g_SlaveManagerPool = 0; /*0x6b3649*/
  Cell::CreateCrater(v90, v7 - dword_886FA4, k, v93, 0); /*0x6b366a*/
  v61 = v79 - 1; /*0x6b3679*/
  v62 = v81 + 1; /*0x6b367a*/
  v82 = v61; /*0x6b367d*/
  v97 = v62; /*0x6b3681*/
  if ( v61 <= v62 ) /*0x6b3685*/
  {
    v108 = v78 - 1; /*0x6b3691*/
    v96 = v80 + 1; /*0x6b369e*/
    do /*0x6b3811*/
    {
      v77 = v108; /*0x6b36af*/
      if ( v108 <= v96 ) /*0x6b36b3*/
      {
        do /*0x6b37fc*/
        {
          IDA_LOWORD(v98) = v77; /*0x6b36c7*/
          IDA_HIWORD(v98) = v82; /*0x6b36d2*/
          v63 = ((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&v98); /*0x6b36dc*/
          v64 = ((CellClass *)((int)v63))->GetScreenRect(v113); /*0x6b36e8*/
          v65 = *v64; /*0x6b36ed*/
          v110 = v64[1]; /*0x6b36f2*/
          v66 = v64[2]; /*0x6b36fb*/
          v67 = v64[3]; /*0x6b36fe*/
          if ( CellClass::DetermineTileType((int)v63) ) /*0x6b3701*/
          {
            v68 = (int *)(((CellClass *)((int)v63))->GetScreenRect(v114));
            if ( v66 <= 0 || v67 <= 0 ) /*0x6b3727*/
            {
              v71 = *v68; /*0x6b37ad*/
              v70 = v68[1]; /*0x6b37af*/
              v66 = v68[2]; /*0x6b37b2*/
              v73 = v68[3]; /*0x6b37b5*/
            }
            else
            {
              v94 = v68[2]; /*0x6b3732*/
              if ( v94 <= 0 || (v95 = v68[3], v95 <= 0) ) /*0x6b3741*/
              {
                v70 = v110; /*0x6b37a0*/
                v71 = v65; /*0x6b37a7*/
                v73 = v67; /*0x6b37a9*/
              }
              else
              {
                v69 = *v68; /*0x6b3743*/
                v70 = v110; /*0x6b3745*/
                v71 = v65; /*0x6b374e*/
                if ( v65 > *v68 ) /*0x6b3750*/
                {
                  v71 = *v68; /*0x6b3754*/
                  v66 = v65 + v66 - v69; /*0x6b3756*/
                }
                v72 = v68[1]; /*0x6b3758*/
                v107 = v72; /*0x6b375d*/
                if ( v110 > v72 ) /*0x6b3764*/
                {
                  v67 += v110 - v72; /*0x6b3768*/
                  v70 = v72; /*0x6b376a*/
                }
                if ( v66 + v71 < v69 + v94 ) /*0x6b3777*/
                  v66 = v69 - v71 + v94 + 1; /*0x6b377f*/
                if ( v67 + v70 < v107 + v95 ) /*0x6b3795*/
                  v67 = v107 + v95 - v70 + 1; /*0x6b379a*/
                v73 = v67; /*0x6b379c*/
              }
            }
            v74 = v71 - DSurface_ViewBounds; /*0x6b37c4*/
            v75 = v70 - dword_886FA4; /*0x6b37c6*/
            if ( v66 > 0 && v73 > 0 ) /*0x6b37ce*/
              Cell::CreateCrater(v74, v75, v66, v73, 0); /*0x6b37e8*/
          }
          ++v77; /*0x6b37f8*/
        }
        while ( v77 <= v96 ); /*0x6b37fc*/
        v62 = v97; /*0x6b3802*/
        v61 = v82; /*0x6b3806*/
      }
      v82 = ++v61; /*0x6b380d*/
    }
    while ( v61 <= v62 ); /*0x6b3811*/
  }
  v101 = (gamemd::AbstractClass **)((void*)&VectorClass_ObjectClass___vftable);
  if ( Block && v104 ) /*0x6b382d*/
    RA2_OPDEL(Block); /*0x6b3830*/
  return (gamemd::AbstractClass **)(1); /*0x6b3838*/
}
}
// 0x6B3850
namespace gamemd {
char ProcessSlaveManagerTerrain()
{
  int v1; // eax
  int v2; // ebx
  int v3; // ecx
  int v4; // edx
  int v5; // esi
  int v6; // ecx
  int v7; // edi
  int v8; // eax
  int v9; // esi
  int v10; // ecx
  int *v11; // edx
  int v12; // edi
  int v13; // eax
  int v14; // ecx
  int *v15; // eax
  int v16; // ebp
  int v17; // edx
  unsigned int *v18; // ecx
  unsigned int *v19; // eax
  int v20; // ecx
  int i; // [esp+0h] [ebp-18h]
  int v23; // [esp+4h] [ebp-14h] BYREF
  int v24; // [esp+8h] [ebp-10h] BYREF
  int v25; // [esp+Ch] [ebp-Ch]
  int v26; // [esp+10h] [ebp-8h]
  int v27; // [esp+14h] [ebp-4h]

  ((LayerClass *)((LayerClass *)&stru_87F5F0.__pad_58[416]))->CellIteratorReset(); /*0x6b3858*/
  v1 = ((LayerClass *)((LayerClass *)&stru_87F5F0.__pad_58[416]))->CellIteratorNext(); /*0x6b3862*/
  for ( i = v1; v1; i = v1 ) /*0x6b386d*/
  {
    v2 = *(unsigned int *)(v1 + 36); /*0x6b3877*/
    v23 = v2; /*0x6b3886*/
    v3 = (int16_t)v2 - dword_8759A8; /*0x6b3892*/
    v4 = IDA_SHIWORD(v2) - dword_8759AC; /*0x6b389a*/
    v5 = v4 * dword_8759A4 + v3; /*0x6b38a5*/
    v6 = dword_8759A4 * (v4 + 1) + v3; /*0x6b38ad*/
    if ( *((unsigned char *)g_SlaveManagerPool + 8 * v5 + 5) /*0x6b38c7*/
      || *((unsigned char *)g_SlaveManagerPool + 8 * v5 + 13)
      || *((unsigned char *)g_SlaveManagerPool + 8 * v6 + 13)
      || *((unsigned char *)g_SlaveManagerPool + 8 * v6 + 5) )
    {
      v7 = 4; /*0x6b38d6*/
      v24 = *((unsigned int *)g_SlaveManagerPool + 2 * v5); /*0x6b38db*/
      v25 = *((unsigned int *)g_SlaveManagerPool + 2 * v5 + 2); /*0x6b38e3*/
      v8 = *((unsigned int *)g_SlaveManagerPool + 2 * v6); /*0x6b38eb*/
      v26 = *((unsigned int *)g_SlaveManagerPool + 2 * v6 + 2); /*0x6b38ee*/
      v27 = v8; /*0x6b38f2*/
      v9 = 1000; /*0x6b38f6*/
      v10 = 0; /*0x6b38fb*/
      v11 = &v24; /*0x6b38fd*/
      do /*0x6b3913*/
      {
        if ( *v11 < v9 ) /*0x6b3905*/
          v9 = *v11; /*0x6b3907*/
        if ( *v11 > v10 ) /*0x6b390b*/
          v10 = *v11; /*0x6b390d*/
        ++v11; /*0x6b390f*/
        --v7; /*0x6b3912*/
      }
      while ( v7 ); /*0x6b3913*/
      if ( v10 - v9 <= 15 ) /*0x6b391a*/
      {
        v23 = v2; /*0x6b3928*/
        v12 = IDA_SHIWORD(v2) + (int16_t)v2; /*0x6b3934*/
        if ( v12 > g_MissionQueueFrame.localVariables[160] /*0x6b396f*/
          && (int16_t)v2 - IDA_SHIWORD(v2) < g_MissionQueueFrame.localVariables[160]
          && IDA_SHIWORD(v2) - (int16_t)v2 < g_MissionQueueFrame.localVariables[160]
          && v12 <= g_MissionQueueFrame.localVariables[161]
          && *(unsigned int *)(i + 68) == -1
          && !*(unsigned int *)(i + 228) )
        {
          v23 = v2; /*0x6b3981*/
          if ( !((Tactical *)((Tactical *)&v23))->GetCellData()[69] ) /*0x6b398a*/
          {
            v13 = *(unsigned int *)(i + 56); /*0x6b3995*/
            if ( v13 >= *(int *)(unsigned int *)((char *)&stru_A8EB00 + 340) /*0x6b39b2*/
              || v13 == 0xFFFF
              || *(unsigned char *)(*(unsigned int *)(*(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 328) + 4 * v13) + 736) )
            {
              v14 = 4; /*0x6b39c5*/
              v15 = &v24; /*0x6b39d8*/
              *(unsigned char *)(i + 283) = v9 / 15; /*0x6b39dc*/
              do /*0x6b39ed*/
              {
                v16 = *v15++; /*0x6b39e2*/
                --v14; /*0x6b39e9*/
                *(v15 - 1) = v16 - v9; /*0x6b39ea*/
              }
              while ( v14 ); /*0x6b39ed*/
              v17 = 0; /*0x6b39f7*/
              v18 = (unsigned int *)(&off_83FF18); /*0x6b39f9*/
              while ( 1 ) /*0x6b39fe*/
              {
                v19 = (unsigned int *)*v18; /*0x6b39fe*/
                if ( *(unsigned int *)*v18 == v24 && v19[1] == v25 && v19[2] == v26 && v19[3] == v27 ) /*0x6b3a19*/
                  break; /*0x6b3a19*/
                ++v18; /*0x6b3a1b*/
                ++v17; /*0x6b3a1e*/
                if ( (int)v18 >= (int)&off_83FF64 ) /*0x6b3a25*/
                  goto LABEL_36; /*0x6b3a25*/
              }
              *(unsigned char *)(i + 284) = v17; /*0x6b3a2b*/
              if ( v17 ) /*0x6b3a31*/
                v20 = g_CellTileLookup + v17 - 1; /*0x6b3a40*/
              else
                v20 = dword_AA10B0; /*0x6b3a33*/
              *(unsigned int *)(i + 56) = v20; /*0x6b3a44*/
            }
          }
        }
      }
    }
  LABEL_36:
    v1 = ((LayerClass *)((LayerClass *)&stru_87F5F0.__pad_58[416]))->CellIteratorNext(); /*0x6b3a47*/
  }
  RA2_OPDEL(g_SlaveManagerPool); /*0x6b3a68*/
  g_SlaveManagerPool = 0; /*0x6b3a6d*/
  return 1; /*0x6b3a7c*/
}
}
// 0x6B3A80
namespace gamemd {
int Terrain_FlowCompute(int a1, char a2, int a3, int a4)
{
  int result; // eax
  int v5; // ebp
  int v6; // edi
  int v7; // ecx
  int v8; // edi
  int v9; // ebp
  char *v10; // esi
  int v11; // ebx
  int v12; // eax
  int *v13; // edx
  int v14; // eax
  int *v15; // edx
  char v16; // [esp+13h] [ebp-19h]
  int v17; // [esp+14h] [ebp-18h]
  int v18; // [esp+18h] [ebp-14h]
  int v20; // [esp+20h] [ebp-Ch]

  result = dword_8759A4; /*0x6b3a83*/
  v5 = -1; /*0x6b3aa3*/
  v6 = -1; /*0x6b3aa6*/
  v7 = *((unsigned int *)g_SlaveManagerPool + 2 * a3 + 2 * a4 * dword_8759A4); /*0x6b3aa9*/
  v16 = a2; /*0x6b3aac*/
  v17 = v7; /*0x6b3ab0*/
  v18 = -1; /*0x6b3ab4*/
  v20 = -1; /*0x6b3ab8*/
  while ( 1 ) /*0x6b3ae5*/
  {
    if ( !v6 && !v5 ) /*0x6b3aeb*/
      goto LABEL_39; /*0x6b3aeb*/
    v8 = a3 + v6; /*0x6b3af5*/
    v9 = a4 + v5; /*0x6b3afb*/
    if ( v8 >= 0 && v9 >= 0 && v8 < result && v9 < dword_8759A0 ) /*0x6b3b23*/
      break; /*0x6b3b23*/
    if ( !a2 ) /*0x6b3c8d*/
      goto LABEL_42; /*0x6b3c8d*/
  LABEL_39:
    v6 = ++v20; /*0x6b3c8f*/
    if ( v20 < 2 ) /*0x6b3c9b*/
    {
      a2 = v16; /*0x6b3ad4*/
      v7 = v17; /*0x6b3ad8*/
      v5 = v18; /*0x6b3adc*/
      result = dword_8759A4; /*0x6b3ae0*/
    }
    else
    {
      v5 = ++v18; /*0x6b3ca5*/
      if ( v18 >= 2 ) /*0x6b3cad*/
      {
        IDA_LOBYTE(result) = 1; /*0x6b3cb6*/
        return result; /*0x6b3cbc*/
      }
      a2 = v16; /*0x6b3abe*/
      v7 = v17; /*0x6b3ac2*/
      result = dword_8759A4; /*0x6b3ac6*/
      v6 = -1; /*0x6b3acb*/
      v20 = -1; /*0x6b3ace*/
    }
  }
  v10 = (char *)g_SlaveManagerPool + 8 * v8 + 8 * v9 * result; /*0x6b3b34*/
  if ( v10[4] && (!a2 || !v10[6]) ) /*0x6b3b42*/
  {
    result = abs32(*(unsigned int *)v10 - v7); /*0x6b3b50*/
    if ( result > 15 ) /*0x6b3b55*/
      goto LABEL_42; /*0x6b3b55*/
    goto LABEL_39; /*0x6b3b55*/
  }
  v11 = *(unsigned int *)v10; /*0x6b3b60*/
  result = abs32(*(unsigned int *)v10 - v7); /*0x6b3b69*/
  if ( result <= 15 ) /*0x6b3b6e*/
    goto LABEL_39; /*0x6b3b6e*/
  if ( a1 == 1 ) /*0x6b3b79*/
  {
    if ( v11 < v7 ) /*0x6b3b7d*/
    {
      if ( g_SlaveMgrPool < dword_B0B658 /*0x6b3bba*/
        || (byte_B0B65D || !dword_B0B658)
        && dword_B0B664 > 0
        && (*(uint8_t (**)(int *, int, unsigned int))(dword_B0B650 + 8))(
             (int *)&dword_B0B650,
             dword_B0B658 + dword_B0B664,
             0) )
      {
        v12 = g_SlaveMgrPool++; /*0x6b3bc7*/
        v13 = (int *)((char *)dword_B0B654 + 12 * v12); /*0x6b3bd9*/
        *v13 = v8; /*0x6b3bdc*/
        v13[1] = v9; /*0x6b3bdf*/
        v13[2] = v11; /*0x6b3be2*/
      }
      result = v17 - 15; /*0x6b3be9*/
      goto LABEL_33; /*0x6b3bec*/
    }
  }
  else if ( v11 > v7 ) /*0x6b3bf0*/
  {
    if ( g_SlaveMgrPool < dword_B0B658 /*0x6b3c29*/
      || (byte_B0B65D || !dword_B0B658)
      && dword_B0B664 > 0
      && (*(uint8_t (**)(int *, int, unsigned int))(dword_B0B650 + 8))(
           (int *)&dword_B0B650,
           dword_B0B664 + dword_B0B658,
           0) )
    {
      v14 = g_SlaveMgrPool++; /*0x6b3c36*/
      v15 = (int *)((char *)dword_B0B654 + 12 * v14); /*0x6b3c48*/
      *v15 = v8; /*0x6b3c4b*/
      v15[1] = v9; /*0x6b3c4e*/
      v15[2] = v11; /*0x6b3c51*/
    }
    result = v17 + 15; /*0x6b3c58*/
  LABEL_33:
    *(unsigned int *)v10 = result; /*0x6b3c5b*/
    v10[5] = 1; /*0x6b3c5d*/
  }
  if ( v10[4] ) /*0x6b3c61*/
    goto LABEL_39; /*0x6b3c61*/
  result = FlowTerrainCompute(a1, v16, v8, v9); /*0x6b3c7c*/
  if ( (unsigned char)result || v16 ) /*0x6b3c87*/
    goto LABEL_39; /*0x6b3c87*/
  LABEL_42:
  IDA_LOBYTE(result) = 0; /*0x6b3cbf*/
  return result; /*0x6b3cb3*/
}
}
// 0x6B3CD0
namespace gamemd {
char sub_6B3CD0(int a1, char a2, int a3, unsigned int a4)
{
  int v5; // esi
  unsigned int v7; // ebp
  int v8; // ecx
  int v9; // edi
  int v10; // edx
  int v11; // eax
  int v12; // esi
  char *v13; // eax
  bool v14; // sf
  int v15; // ecx
  int v18; // [esp+14h] [ebp-8h]
  int v19; // [esp+18h] [ebp-4h]
  int v20; // [esp+24h] [ebp+8h]

  g_SlaveMgrPool = 0; /*0x6b3ce6*/
  if ( dword_B0B654 && byte_B0B65D ) /*0x6b3cf6*/
  {
    RA2_OPDEL(dword_B0B654); /*0x6b3cf9*/
    dword_B0B654 = 0; /*0x6b3d01*/
  }
  dword_B0B658 = 0; /*0x6b3d0b*/
  v5 = a3; /*0x6b3d11*/
  byte_B0B65D = 0; /*0x6b3d15*/
  InitializeBuildabilityGrid(a3); /*0x6b3d1d*/
  v20 = 1; /*0x6b3d32*/
  v7 = a4 & 3 | (2 * (a4 & 4)) | (a4 >> 1) & 4; /*0x6b3d4d*/
  v8 = (int16_t)a3 - dword_8759A8; /*0x6b3d59*/
  v18 = v8; /*0x6b3d5b*/
  v9 = IDA_SHIWORD(a3) - dword_8759AC; /*0x6b3d5f*/
  v10 = v9 + 2; /*0x6b3d61*/
  v19 = v9 + 2; /*0x6b3d66*/
  if ( !__OFSUB__(v9, v9 + 2) ) /*0x6b3d6a*/
  {
    v11 = v8 + 2; /*0x6b3d70*/
    do /*0x6b3df7*/
    {
      v12 = v8; /*0x6b3d75*/
      if ( v8 < v11 ) /*0x6b3d77*/
      {
        while ( 1 ) /*0x6b3d79*/
        {
          if ( (v7 & v20) != 0 ) /*0x6b3d7d*/
          {
            v13 = (char *)g_SlaveManagerPool + 8 * v12 + 8 * v9 * dword_8759A4; /*0x6b3d90*/
            if ( v13[4] && !a2 ) /*0x6b3da1*/
              goto LABEL_20; /*0x6b3da1*/
            v14 = 15 * a1 + *(unsigned int *)v13 < 0; /*0x6b3dab*/
            v15 = 15 * a1 + *(unsigned int *)v13; /*0x6b3dab*/
            *(unsigned int *)v13 = v15; /*0x6b3dad*/
            if ( v14 || v15 > 180 ) /*0x6b3db7*/
              *(unsigned int *)v13 = v15 - 15 * a1; /*0x6b3dbb*/
            v13[5] = 1; /*0x6b3dc5*/
            if ( !(uint8_t)FlowTerrainCompute(a1, a2, v12, v9) && !a2 ) /*0x6b3dd8*/
            {
  LABEL_20:
              RA2_OPDEL(g_SlaveManagerPool); /*0x6b3dff*/
              g_SlaveManagerPool = 0; /*0x6b3e07*/
              return 0; /*0x6b3e1a*/
            }
            v8 = v18; /*0x6b3dda*/
          }
          v11 = v8 + 2; /*0x6b3de2*/
          ++v12; /*0x6b3de7*/
          v20 *= 2; /*0x6b3de8*/
          if ( v12 >= v8 + 2 ) /*0x6b3dee*/
          {
            v10 = v19; /*0x6b3df0*/
            break; /*0x6b3df0*/
          }
        }
      }
      ++v9; /*0x6b3df4*/
    }
    while ( v9 < v10 ); /*0x6b3df7*/
    v5 = a3; /*0x6b3e41*/
  }
  return ProcessBuildingClassConstruction(a2, v10, v5); /*0x6b3e13*/
}
}
// 0x6B3E60
namespace gamemd {
AbstractClass * * ComputeTerrainFlowField(int a1, char a2, int a3, unsigned int a4)
{
  int v4; // ebx
  unsigned int v5;
  AbstractClass ** v6;
  int v7; // ebp
  int v8; // esi
  int v9; // eax
  unsigned int v10;
  char *v11; // esi
  int v12; // ecx
  bool v13; // sf
  int v14; // eax
  int v15; // ebx
  int v16; // eax
  int *v17; // edx
  int v19; // edx
  int v20; // eax
  int v21; // eax
  int v22; // ecx
  int v24; // [esp+14h] [ebp-14h]
  int v25; // [esp+18h] [ebp-10h]
  AbstractClass ** v26;
  int v28; // [esp+24h] [ebp-4h]
  AbstractClass ** v29;
  int v30; // [esp+30h] [ebp+8h]

  v4 = a1; /*0x6b3e6d*/
  g_SlaveMgrPool = 0; /*0x6b3e7a*/
  if ( dword_B0B654 && byte_B0B65D ) /*0x6b3e8a*/
  {
    RA2_OPDEL(dword_B0B654); /*0x6b3e8d*/
    dword_B0B654 = 0; /*0x6b3e95*/
  }
  v5 = (unsigned int)((gamemd::AbstractClass **)((int)((gamemd::AbstractClass **)(a4 & 3 | (2 * (a4 & 4)) | (a4 >> 1) & 4))));
  v6 = (gamemd::AbstractClass **)((int)((gamemd::AbstractClass **)((int16_t)a3 - dword_8759A8)));
  dword_B0B658 = (unsigned int)((gamemd::AbstractClass **)(0));
  byte_B0B65D = 0; /*0x6b3ed3*/
  v7 = IDA_SHIWORD(a3) - dword_8759AC; /*0x6b3eda*/
  v26 = (gamemd::AbstractClass **)(v5); /*0x6b3edc*/
  v8 = v7 + 2; /*0x6b3ee0*/
  v25 = (int)(v6); /*0x6b3ee3*/
  v24 = 1; /*0x6b3ee9*/
  v30 = v7; /*0x6b3ef1*/
  v28 = v7 + 2; /*0x6b3ef5*/
  if ( __OFSUB__(v7, v7 + 2) ) /*0x6b3ef9*/
    return (gamemd::AbstractClass **)(1); /*0x6b4036*/
  v9 = (int)(v6 + 2); /*0x6b3eff*/
  while ( 1 ) /*0x6b3f02*/
  {
    v10 = (unsigned int)((gamemd::AbstractClass **)((int)((gamemd::AbstractClass **)(v6))));
    v29 = (gamemd::AbstractClass **)((int)((gamemd::AbstractClass **)(v6)));
    if ( v6 < v9 ) /*0x6b3f0a*/
      break; /*0x6b3f0a*/
  LABEL_27:
    v30 = ++v7; /*0x6b4023*/
    if ( v7 >= v8 ) /*0x6b4027*/
      return (gamemd::AbstractClass **)(1); /*0x6b4027*/
  }
  while ( 1 ) /*0x6b3f10*/
  {
    if ( ((unsigned int)(v5)& v24) == 0 ) /*0x6b3f14*/
      goto LABEL_25; /*0x6b3f14*/
    v11 = (char *)g_SlaveManagerPool + 8 * v10 + 8 * v7 * dword_8759A4; /*0x6b3f2a*/
    if ( v11[4] ) /*0x6b3f2d*/
      break; /*0x6b3f2d*/
    v12 = 15 * v4; /*0x6b3f3b*/
    v13 = 15 * v4 + *(unsigned int *)v11 < 0; /*0x6b3f40*/
    v14 = 15 * v4 + *(unsigned int *)v11; /*0x6b3f40*/
    *(unsigned int *)v11 = v14; /*0x6b3f42*/
    if ( v13 || v14 > 180 ) /*0x6b3f4f*/
    {
      *(unsigned int *)v11 = v14 - v12; /*0x6b3fe8*/
    }
    else
    {
      v15 = v14 - v12; /*0x6b3f5d*/
      if ( g_SlaveMgrPool < dword_B0B658 /*0x6b3f90*/
        || (byte_B0B65D || !dword_B0B658)
        && dword_B0B664 > 0
        && (*(uint8_t (**)(int *, int, unsigned int))(dword_B0B650 + 8))(
             (int *)&dword_B0B650,
             dword_B0B658 + dword_B0B664,
             0) )
      {
        v16 = (int)(g_SlaveMgrPool++);
        v17 = (int *)((char *)dword_B0B654 + 12 * v16); /*0x6b3faf*/
        *v17 = v10; /*0x6b3fb2*/
        v17[1] = v7; /*0x6b3fb5*/
        v17[2] = v15; /*0x6b3fb8*/
      }
      v7 = (int)((gamemd::AbstractClass **)(v30));
      v10 = (unsigned int)(v29); /*0x6b3fbf*/
    }
    v4 = a1; /*0x6b3fc3*/
    v11[5] = 1; /*0x6b3fcf*/
    if ( !FlowTerrainCompute(a1, a2, v10, v7) && !a2 ) /*0x6b3fe2*/
    {
      if ( g_SlaveMgrPool - 1 >= 0 ) /*0x6b4045*/
      {
        v19 = g_SlaveMgrPool; /*0x6b404a*/
        v20 = 12 * (g_SlaveMgrPool - 1); /*0x6b404d*/
        do /*0x6b4078*/
        {
          v20 -= 12; /*0x6b4056*/
          --v19; /*0x6b4074*/
          *((unsigned int *)g_SlaveManagerPool /*0x6b4075*/
          + 2 * *(unsigned int *)((char *)dword_B0B654 + v20 + 12)
          + 2 * dword_8759A4 * *(unsigned int *)((char *)dword_B0B654 + v20 + 16)) = *(unsigned int *)((char *)dword_B0B654
                                                                                         + v20
                                                                                         + 20);
        }
        while ( v19 ); /*0x6b4078*/
      }
      goto LABEL_36; /*0x6b4078*/
    }
    v6 = (gamemd::AbstractClass **)((int)(v25));
    v5 = (unsigned int)(v26); /*0x6b3ffe*/
  LABEL_25:
    v9 = (int)(v6 + 2); /*0x6b4002*/
    ++v10; /*0x6b400b*/
    v24 *= 2; /*0x6b400c*/
    v29 = (gamemd::AbstractClass **)(v10); /*0x6b4012*/
    if ( v10 >= (gamemd::AbstractClass **)(v6) + 2 ) /*0x6b4016*/
    {
      v8 = v28; /*0x6b401c*/
      goto LABEL_27; /*0x6b401c*/
    }
  }
  if ( a2 ) /*0x6b3ff2*/
    goto LABEL_25; /*0x6b3ff2*/
  if ( g_SlaveMgrPool - 1 >= 0 ) /*0x6b4089*/
  {
    v21 = 12 * (g_SlaveMgrPool - 1); /*0x6b408e*/
    v22 = g_SlaveMgrPool; /*0x6b4091*/
    do /*0x6b40ba*/
    {
      v21 -= 12; /*0x6b4098*/
      --v22; /*0x6b40b6*/
      *((unsigned int *)g_SlaveManagerPool /*0x6b40b7*/
      + 2 * *(unsigned int *)((char *)dword_B0B654 + v21 + 12)
      + 2 * dword_8759A4 * *(unsigned int *)((char *)dword_B0B654 + v21 + 16)) = *(unsigned int *)((char *)dword_B0B654 + v21 + 20);
    }
    while ( v22 ); /*0x6b40ba*/
  }
  LABEL_36:
  g_SlaveMgrPool = 0; /*0x6b40bc*/
  if ( dword_B0B654 ) /*0x6b40c9*/
  {
    if ( byte_B0B65D ) /*0x6b40d3*/
    {
      RA2_OPDEL(dword_B0B654); /*0x6b40d6*/
      dword_B0B654 = 0; /*0x6b40de*/
    }
  }
  dword_B0B658 = 0; /*0x6b40e4*/
  byte_B0B65D = 0; /*0x6b40ed*/
  return 0; /*0x6b402d*/
}
}
// 0x6B5490
namespace gamemd {
int FactoryClass_LoadTheaterSHP(int a1)
{
  int result; // eax
  int i; // ebp
  int v4; // esi
  unsigned int v5[22]; // [esp+8h] [ebp-26Ch] BYREF
  unsigned char v6[12]; // [esp+60h] [ebp-214h] BYREF
  int v7; // [esp+6Ch] [ebp-208h]
  char Buffer[512]; // [esp+74h] [ebp-200h] BYREF

  result = dword_A8EC28; /*0x6b5490*/
  for ( i = 0; i < dword_A8EC28; ++i ) /*0x6b54a3*/
  {
    v4 = *((unsigned int *)dword_A8EC1C + i); /*0x6b54af*/
    if ( *(unsigned char *)(v4 + 556) ) /*0x6b54b2*/
    {
      _makepath(Buffer, 0, 0, (const char *)(v4 + 36), (const char *)&off_7E1BC6 + 112 * a1); /*0x6b54dc*/
      ((CCFileClass*)v5)->Construct(Buffer); /*0x6b54ed*/
      *(unsigned int *)(v4 + 164) = ((CCFileClass *)(v5))->ReadEntireFile(); /*0x6b54ff*/
      v5[0] = (unsigned int)((void*)&CCFileClass_vftable); /*0x6b5505*/
      v7 = 0; /*0x6b550d*/
      ((Vector *)((int)v6))->Clear(); /*0x6b5515*/
      v5[0] = (unsigned int)&off_7E1668; /*0x6b551e*/
      ((BufferIOFileClass *)(v5))->Dtor(); /*0x6b5526*/
    }
    result = dword_A8EC28; /*0x6b552b*/
  }
  return result; /*0x6b553a*/
}
}
// 0x6B59A0
namespace gamemd {
void StandardCreateUnitAtCoords(unsigned int * a0, IUnknown * aP1, int a3, char a4)
{
  unsigned int *v4; // ebp
  int v6; // edi
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  int v10; // edi
  int v11; // edx
  int v12; // eax
  int v13; // esi
  int v14; // edx
  int v15; // eax
  UnitClass *v16; // esi
  int v17; // eax
  UnitClass *v18; // esi
  int v19; // eax
  int v20; // [esp+4h] [ebp-40h]
  void **v24; // [esp+14h] [ebp-30h] BYREF
  void *Block; // [esp+18h] [ebp-2Ch]
  int v26; // [esp+1Ch] [ebp-28h]
  int v27; // [esp+20h] [ebp-24h]
  int v28; // [esp+24h] [ebp-20h]
  int v29; // [esp+28h] [ebp-1Ch]
  void* v30;
  void *v31; // [esp+30h] [ebp-14h]
  int v32; // [esp+34h] [ebp-10h]
  char v33; // [esp+39h] [ebp-Bh]
  int i; // [esp+3Ch] [ebp-8h]
  int v35; // [esp+40h] [ebp-4h]

  v4 = (unsigned int *)((void **)(a0));
  aP1 = (IUnknown *)((void **)(aP1));
  a0 = a0; /*0x6b59aa*/
  if ( IDA___PAIR32__(a0[1] / 256, *a0 / 256) == Map_BottomRightCell ) /*0x6b59d5*/
    return 0; /*0x6b59e6*/
  ((Game *)(Game *)&v30)->LockMutex( 0, 0); /*0x6b59f4*/
  v6 = 0; /*0x6b59fe*/
  v30 = (void*)&DynamicVectorClass_SmudgeTypeClass_const___vftable; /*0x6b5a02*/
  v35 = 10; /*0x6b5a0a*/
  for ( i = 0; v6 < *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 68); ++v6 ) /*0x6b5a16*/
  {
    v7 = *(unsigned int *)(*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 56) + 4 * v6); /*0x6b5a21*/
    if ( v7->q2A1 ) /*0x6b5a24*/
    {
      IDA_LOWORD(v20) = *v4 / 256; /*0x6b5a3f*/
      IDA_HIWORD(v20) = v4[1] / 256; /*0x6b5a57*/
      v20 = v20; /*0x6b5a64*/
      if ( (uint8_t)((Cell *)(Cell *)v7)->IsWalkable( &v20, a4) ) /*0x6b5a6c*/
      {
        if ( i < v32 /*0x6b5a9f*/
          || (v33 || !v32)
          && v35 > 0
          && ((uint8_t (*)(void ***, int, unsigned int))v30[2])(&v30, v35 + v32, 0) )
        {
          v8 = i++; /*0x6b5aaa*/
          *((unsigned int *)v31 + v8) = v7; /*0x6b5ab5*/
        }
      }
    }
  }
  ((Game *)(Game *)&v24)->LockMutex( 0, 0); /*0x6b5acc*/
  v9 = 10; /*0x6b5ad1*/
  v10 = 0; /*0x6b5ad6*/
  v11 = i; /*0x6b5ad8*/
  v24 = (void*)&DynamicVectorClass_SmudgeTypeClass_const___vftable; /*0x6b5adc*/
  v29 = 10; /*0x6b5ae6*/
  v28 = 0; /*0x6b5aea*/
  if ( i > 0 ) /*0x6b5aee*/
  {
    v12 = v26; /*0x6b5af4*/
    while ( 1 ) /*0x6b5b01*/
    {
      v13 = *((unsigned int *)v31 + v10); /*0x6b5b01*/
      v14 = *(unsigned int *)(v13 + 664); /*0x6b5b0a*/
      if ( !a4 ) /*0x6b5b10*/
        break; /*0x6b5b10*/
      if ( v14 <= 1 || *(int *)(v13 + 668) <= 1 ) /*0x6b5b5f*/
        goto LABEL_35; /*0x6b5b5f*/
      if ( v28 < v12 ) /*0x6b5b65*/
        goto LABEL_33; /*0x6b5b65*/
      if ( !IDA_BYTE1(v27) && v12 || v9 <= 0 ) /*0x6b5b73*/
        goto LABEL_35; /*0x6b5b73*/
      if ( ((uint8_t (*)(void ***, int, unsigned int))v24[2])(&v24, v9 + v12, 0) ) /*0x6b5b81*/
        goto LABEL_33; /*0x6b5b86*/
  LABEL_34:
      v12 = v26; /*0x6b5b9a*/
      v9 = v29; /*0x6b5b9e*/
  LABEL_35:
      v11 = i; /*0x6b5ba2*/
      if ( ++v10 >= i ) /*0x6b5ba9*/
      {
        v4 = a0; /*0x6b5baf*/
        goto LABEL_37; /*0x6b5baf*/
      }
    }
    if ( (v14 != 1 || *(unsigned int *)(v13 + 668) != 1) && (aP1 <= 60 || a3 <= 50) ) /*0x6b5b2a*/
      goto LABEL_35; /*0x6b5b2a*/
    if ( v28 >= v12 ) /*0x6b5b30*/
    {
      if ( !IDA_BYTE1(v27) && v12 || v9 <= 0 ) /*0x6b5b3e*/
        goto LABEL_35; /*0x6b5b3e*/
      if ( !((uint8_t (*)(void ***, int, unsigned int))v24[2])(&v24, v9 + v12, 0) ) /*0x6b5b51*/
        goto LABEL_34; /*0x6b5b51*/
    }
  LABEL_33:
    v15 = v28++; /*0x6b5b88*/
    *((unsigned int *)Block + v15) = v13; /*0x6b5b97*/
    goto LABEL_34; /*0x6b5b97*/
  }
  LABEL_37:
  if ( v28 <= 0 ) /*0x6b5bb7*/
  {
    if ( v11 > 0 ) /*0x6b5bf2*/
    {
      v18 = (UnitClass *)RA2_OPNEW(0xB0u); /*0x6b5bfe*/
      if ( v18 ) /*0x6b5c05*/
      {
        v19 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, i - 1); /*0x6b5c1a*/
        ((UnitClass *)v18)->Create( *((void **)v31 + v19), v4, -1); /*0x6b5c2c*/
      }
    }
  }
  else
  {
    v16 = (UnitClass *)RA2_OPNEW(0xB0u); /*0x6b5bc3*/
    if ( v16 ) /*0x6b5bca*/
    {
      v17 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v28 - 1); /*0x6b5bde*/
      ((UnitClass *)v16)->Create( *((void **)Block + v17), v4, -1); /*0x6b5bee*/
    }
  }
  v24 = (void*)&VectorClass_SmudgeTypeClass_const___vftable; /*0x6b5c3c*/
  if ( Block && IDA_BYTE1(v27) ) /*0x6b5c46*/
  {
    RA2_OPDEL(Block); /*0x6b5c49*/
    Block = 0; /*0x6b5c51*/
  }
  IDA_BYTE1(v27) = 0; /*0x6b5c59*/
  v26 = 0; /*0x6b5c5f*/
  v30 = (void*)&VectorClass_SmudgeTypeClass_const___vftable; /*0x6b5c63*/
  if ( v31 ) /*0x6b5c67*/
  {
    if ( v33 ) /*0x6b5c6d*/
      RA2_OPDEL(v31); /*0x6b5c70*/
  }
  return 0; /*0x6b59e2*/
}
}
// 0x6B5C90
namespace gamemd {
void TimedCreateUnitAtCoords(unsigned int * a0, IUnknown * aP1, int a3, char a4)
{
  unsigned int *v4; // ebp
  int v5; // kr00_4
  int result; // eax
  int v7; // edi
  int v8; // esi
  int v9; // eax
  int v10; // ecx
  int v11; // edi
  int v12; // edx
  int v13; // eax
  int v14; // esi
  int v15; // edx
  int v16; // eax
  UnitClass *v17; // esi
  int v18; // eax
  UnitClass *v19; // esi
  int v20; // eax
  int v21; // [esp+4h] [ebp-40h]
  void **v25; // [esp+14h] [ebp-30h] BYREF
  void *Block; // [esp+18h] [ebp-2Ch]
  int v27; // [esp+1Ch] [ebp-28h]
  int v28; // [esp+20h] [ebp-24h]
  int v29; // [esp+24h] [ebp-20h]
  int v30; // [esp+28h] [ebp-1Ch]
  void **v31; // [esp+2Ch] [ebp-18h] BYREF
  void *v32; // [esp+30h] [ebp-14h]
  int v33; // [esp+34h] [ebp-10h]
  char v34; // [esp+39h] [ebp-Bh]
  int i; // [esp+3Ch] [ebp-8h]
  int v36; // [esp+40h] [ebp-4h]

  v4 = a0; /*0x6b5c94*/
  aP1 = aP1; /*0x6b5c96*/
  a0 = a0; /*0x6b5c9a*/
  v5 = a0[1]; /*0x6b5cb6*/
  result = v5 / 256; /*0x6b5cbb*/
  if ( IDA___PAIR32__(v5 / 256, *a0 / 256) == Map_BottomRightCell ) /*0x6b5cc5*/
  {
    IDA_LOBYTE(result) = 0; /*0x6b5cd0*/
    return result; /*0x6b5cd6*/
  }
  ((Game *)(Game *)&v31)->LockMutex( 0, 0); /*0x6b5ce4*/
  v7 = 0; /*0x6b5cee*/
  v31 = (void*)&DynamicVectorClass_SmudgeTypeClass_const___vftable; /*0x6b5cf2*/
  v36 = 10; /*0x6b5cfa*/
  for ( i = 0; v7 < *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 68); ++v7 ) /*0x6b5d06*/
  {
    v8 = *(unsigned int *)(*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 56) + 4 * v7); /*0x6b5d11*/
    if ( v8->q2A0 ) /*0x6b5d14*/
    {
      IDA_LOWORD(v21) = *v4 / 256; /*0x6b5d2f*/
      IDA_HIWORD(v21) = v4[1] / 256; /*0x6b5d47*/
      v21 = v21; /*0x6b5d54*/
      if ( (uint8_t)((Cell *)(Cell *)v8)->IsWalkable( &v21, a4) ) /*0x6b5d5c*/
      {
        if ( i < v33 /*0x6b5d8f*/
          || (v34 || !v33)
          && v36 > 0
          && ((uint8_t (*)(void ***, int, unsigned int))v31[2])(&v31, v36 + v33, 0) )
        {
          v9 = i++; /*0x6b5d9a*/
          *((unsigned int *)v32 + v9) = v8; /*0x6b5da5*/
        }
      }
    }
  }
  ((Game *)(Game *)&v25)->LockMutex( 0, 0); /*0x6b5dbc*/
  v10 = 10; /*0x6b5dc1*/
  v11 = 0; /*0x6b5dc6*/
  v12 = i; /*0x6b5dc8*/
  v25 = (void*)&DynamicVectorClass_SmudgeTypeClass_const___vftable; /*0x6b5dcc*/
  v30 = 10; /*0x6b5dd6*/
  v29 = 0; /*0x6b5dda*/
  if ( i > 0 ) /*0x6b5dde*/
  {
    v13 = v27; /*0x6b5de4*/
    while ( 1 ) /*0x6b5df1*/
    {
      v14 = *((unsigned int *)v32 + v11); /*0x6b5df1*/
      v15 = *(unsigned int *)(v14 + 664); /*0x6b5dfa*/
      if ( !a4 ) /*0x6b5e00*/
        break; /*0x6b5e00*/
      if ( v15 <= 1 || *(int *)(v14 + 668) <= 1 ) /*0x6b5e4f*/
        goto LABEL_35; /*0x6b5e4f*/
      if ( v29 < v13 ) /*0x6b5e55*/
        goto LABEL_33; /*0x6b5e55*/
      if ( !IDA_BYTE1(v28) && v13 || v10 <= 0 ) /*0x6b5e63*/
        goto LABEL_35; /*0x6b5e63*/
      if ( ((uint8_t (*)(void ***, int, unsigned int))v25[2])(&v25, v10 + v13, 0) ) /*0x6b5e71*/
        goto LABEL_33; /*0x6b5e76*/
  LABEL_34:
      v13 = v27; /*0x6b5e8a*/
      v10 = v30; /*0x6b5e8e*/
  LABEL_35:
      v12 = i; /*0x6b5e92*/
      if ( ++v11 >= i ) /*0x6b5e99*/
      {
        v4 = a0; /*0x6b5e9f*/
        goto LABEL_37; /*0x6b5e9f*/
      }
    }
    if ( (v15 != 1 || *(unsigned int *)(v14 + 668) != 1) && (aP1 <= 60 || a3 <= 50) ) /*0x6b5e1a*/
      goto LABEL_35; /*0x6b5e1a*/
    if ( v29 >= v13 ) /*0x6b5e20*/
    {
      if ( !IDA_BYTE1(v28) && v13 || v10 <= 0 ) /*0x6b5e2e*/
        goto LABEL_35; /*0x6b5e2e*/
      if ( !((uint8_t (*)(void ***, int, unsigned int))v25[2])(&v25, v10 + v13, 0) ) /*0x6b5e41*/
        goto LABEL_34; /*0x6b5e41*/
    }
  LABEL_33:
    v16 = v29++; /*0x6b5e78*/
    *((unsigned int *)Block + v16) = v14; /*0x6b5e87*/
    goto LABEL_34; /*0x6b5e87*/
  }
  LABEL_37:
  if ( v29 <= 0 ) /*0x6b5ea7*/
  {
    if ( v12 > 0 ) /*0x6b5ee2*/
    {
      v19 = (UnitClass *)RA2_OPNEW(0xB0u); /*0x6b5eee*/
      if ( v19 ) /*0x6b5ef5*/
      {
        v20 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, i - 1); /*0x6b5f0a*/
        ((UnitClass *)v19)->Create( *((void **)v32 + v20), v4, -1); /*0x6b5f1c*/
      }
    }
  }
  else
  {
    v17 = (UnitClass *)RA2_OPNEW(0xB0u); /*0x6b5eb3*/
    if ( v17 ) /*0x6b5eba*/
    {
      v18 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v29 - 1); /*0x6b5ece*/
      ((UnitClass *)v17)->Create( *((void **)Block + v18), v4, -1); /*0x6b5ede*/
    }
  }
  v25 = (void*)&VectorClass_SmudgeTypeClass_const___vftable; /*0x6b5f2c*/
  if ( Block && IDA_BYTE1(v28) ) /*0x6b5f36*/
  {
    RA2_OPDEL(Block); /*0x6b5f39*/
    Block = 0; /*0x6b5f41*/
  }
  result = (int)v32; /*0x6b5f45*/
  IDA_BYTE1(v28) = 0; /*0x6b5f49*/
  v27 = 0; /*0x6b5f4f*/
  v31 = (void*)&VectorClass_SmudgeTypeClass_const___vftable; /*0x6b5f53*/
  if ( v32 ) /*0x6b5f57*/
  {
    if ( v34 ) /*0x6b5f5d*/
      RA2_OPDEL(v32); /*0x6b5f60*/
  }
  IDA_LOBYTE(result) = 0; /*0x6b5f6b*/
  return result; /*0x6b5cd2*/
}
}
// 0x6B6230
namespace gamemd {
void sub_6B6230()
{
  uint16_t v0; // cx
  HWND Dialog_v; // esi
  int v2; // ecx
  LONG dwNewLong; // [esp+0h] [ebp-4h] BYREF

  dwNewLong = -1; /*0x6b624f*/
  Debug::Log(); /*0x6b6253*/
  byte_B0B800 = 0; /*0x6b6262*/
  v0 = 214; /*0x6b6270*/
  if ( byte_A8E9A0 ) /*0x6b6275*/
    v0 = 184; /*0x6b6277*/
  Dialog_v = (HWND)CreateDialog(v0, (INT_PTR (*)(HWND, UINT, WPARAM, LPARAM))AudioSettings::DlgProc, 0); /*0x6b6281*/
  if ( Dialog_v ) /*0x6b6285*/
  {
    SetWindowLongA(Dialog_v, 8, (LONG)&dwNewLong); /*0x6b628f*/
    ((Dialog *)(Dialog_v))->Show(); /*0x6b6297*/
    while ( dwNewLong == -1 ) /*0x6b62a0*/
    {
      if ( Dialog::PumpMessages() == 1 ) /*0x6b62a9*/
        dwNewLong = 2; /*0x6b62ab*/
      if ( !byte_A8E9A0 ) /*0x6b62ba*/
      {
        IDA_LOBYTE(v2) = 0; /*0x6b62bc*/
        ScreenSaver::Process(v2); /*0x6b62be*/
      }
    }
    ((Dialog *)Dialog_v)->Destroy(); /*0x6b62cb*/
  }
  Debug::Log(); /*0x6b62e9*/
}
}
// 0x6B8F00
namespace gamemd {
int Texture_DrawAffine(int a1, unsigned int * a2, int * a3, int a4, unsigned char a5)
{
  int v6; // eax
  int v7; // edi
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // esi
  int v13; // ebp
  int v14; // edi
  int v15; // esi
  int v16; // edi
  int v17; // ebx
  int v18; // esi
  int v19; // edx
  int v20; // ecx
  int v21; // eax
  unsigned char *v22; // edx
  unsigned int *v23; // ebp
  int v24; // edi
  char v25; // al
  int v26; // ecx
  int v27; // edi
  int v28; // ecx
  int v29; // ecx
  int v30; // edx
  bool v31; // cc
  unsigned char *v33; // edx
  int v34; // edi
  char v35; // al
  int v36; // ecx
  int v37; // edi
  int v38; // ecx
  int v39; // ecx
  int v40; // eax
  int v41; // [esp+10h] [ebp-44h]
  int v42; // [esp+14h] [ebp-40h]
  int v43; // [esp+18h] [ebp-3Ch]
  int v44; // [esp+1Ch] [ebp-38h]
  int v46; // [esp+24h] [ebp-30h]
  int v47; // [esp+28h] [ebp-2Ch]
  int v48; // [esp+28h] [ebp-2Ch]
  int v50; // [esp+30h] [ebp-24h]
  int v51; // [esp+34h] [ebp-20h]
  int v52; // [esp+38h] [ebp-1Ch]
  int v53; // [esp+3Ch] [ebp-18h]
  int v54; // [esp+40h] [ebp-14h]
  int v55; // [esp+44h] [ebp-10h]
  int v56; // [esp+48h] [ebp-Ch]
  int v57; // [esp+48h] [ebp-Ch]
  int v58; // [esp+48h] [ebp-Ch]
  int v59; // [esp+50h] [ebp-4h]
  int v60; // [esp+58h] [ebp+4h]
  int v61; // [esp+58h] [ebp+4h]
  int v62; // [esp+5Ch] [ebp+8h]
  int v63; // [esp+5Ch] [ebp+8h]
  int v64; // [esp+60h] [ebp+Ch]
  int v65; // [esp+60h] [ebp+Ch]

  v59 = (*(int (**)(unsigned int, unsigned int))(*(unsigned int *)a1 + 92))(0, 0); /*0x6b8f27*/
  v42 = 0; /*0x6b8f3a*/
  v6 = a5; /*0x6b8f3e*/
  v44 = 0; /*0x6b8f41*/
  v41 = 0; /*0x6b8f45*/
  v7 = dword_84066C[v6]; /*0x6b8f49*/
  v8 = (a4 * *a2) >> 1; /*0x6b8f55*/
  v56 = dword_84026C[v6]; /*0x6b8f59*/
  v9 = (a4 * a2[1]) >> 1; /*0x6b8f62*/
  v10 = v56 * v9; /*0x6b8f64*/
  v11 = v7 * v9; /*0x6b8f69*/
  v12 = (v56 * v8) >> 8; /*0x6b8f7e*/
  v64 = *a3; /*0x6b8f8a*/
  v13 = *a3 + (((v11 >> 8) - v12) >> 8); /*0x6b8f91*/
  v60 = a3[1]; /*0x6b8f9a*/
  v62 = (v7 * v8) >> 8; /*0x6b8fa5*/
  v14 = (v11 >> 8) + v12; /*0x6b8fbc*/
  v15 = v64 + (((-v11 >> 8) - v12) >> 8); /*0x6b8fe3*/
  v55 = v60 + (((v10 >> 8) - v62) >> 8); /*0x6b8ff7*/
  v43 = v64 + (v14 >> 8) - v13; /*0x6b8fff*/
  v16 = v60 + (((-v10 >> 8) - v62) >> 8); /*0x6b9003*/
  v17 = ((v62 + (-v10 >> 8)) >> 8) - (((-v10 >> 8) - v62) >> 8); /*0x6b9009*/
  v61 = 0; /*0x6b900b*/
  v51 = 1; /*0x6b9013*/
  v50 = (*(int (**)(int))(*(unsigned int *)a1 + 116))(a1); /*0x6b9022*/
  v18 = v15 - v13; /*0x6b902a*/
  v57 = v18; /*0x6b9030*/
  v46 = v55 - v16; /*0x6b9034*/
  v63 = 0; /*0x6b9038*/
  v52 = 1; /*0x6b9040*/
  v53 = (*(int (**)(int))(*(unsigned int *)a1 + 116))(a1); /*0x6b904d*/
  if ( v17 < 0 ) /*0x6b9051*/
  {
    v17 = -v17; /*0x6b9057*/
    v50 = -(*(int (**)(int))(*(unsigned int *)a1 + 116))(a1); /*0x6b9060*/
  }
  if ( v43 < 0 ) /*0x6b906a*/
  {
    v43 = -v43; /*0x6b906e*/
    v51 = -1; /*0x6b9072*/
  }
  if ( v46 < 0 ) /*0x6b9080*/
  {
    v46 = v16 - v55; /*0x6b908a*/
    v53 = -(*(int (**)(int))(*(unsigned int *)a1 + 116))(a1); /*0x6b9093*/
  }
  if ( v18 < 0 ) /*0x6b9099*/
  {
    v18 = -v18; /*0x6b909b*/
    v57 = v18; /*0x6b909d*/
    v52 = -1; /*0x6b90a1*/
  }
  v19 = v13 + v16 * (*(int (**)(int))(*(unsigned int *)a1 + 116))(a1); /*0x6b90b7*/
  v65 = v19; /*0x6b90b9*/
  if ( v19 >= 0 ) /*0x6b90bd*/
  {
    v20 = v43; /*0x6b90c3*/
    if ( v43 <= v17 ) /*0x6b90c9*/
    {
      v48 = 0; /*0x6b921e*/
      if ( v18 > 0 ) /*0x6b9222*/
      {
        while ( v19 >= 0 ) /*0x6b9230*/
        {
          if ( v17 <= 0 ) /*0x6b9238*/
          {
            v34 = v41; /*0x6b9343*/
          }
          else
          {
            v58 = v17; /*0x6b9242*/
            v33 = (unsigned char *)(v59 + v19); /*0x6b9246*/
            do /*0x6b92b1*/
            {
              v34 = v41; /*0x6b924c*/
              v35 = *(unsigned char *)(v41 + a2[2]); /*0x6b9253*/
              if ( v35 ) /*0x6b9258*/
                *v33 = v35; /*0x6b925a*/
              v42 += *a2; /*0x6b9265*/
              v36 = v42; /*0x6b9260*/
              if ( v42 > v17 ) /*0x6b9269*/
              {
                do /*0x6b9270*/
                {
                  v36 -= v17; /*0x6b926b*/
                  ++v34; /*0x6b926d*/
                }
                while ( v36 > v17 ); /*0x6b9270*/
                v42 = v36; /*0x6b9272*/
                v41 = v34; /*0x6b9276*/
              }
              v33 += v50; /*0x6b9282*/
              v61 += v43; /*0x6b928c*/
              if ( v61 > v17 ) /*0x6b9290*/
              {
                if ( v35 ) /*0x6b9294*/
                  *v33 = v35; /*0x6b9296*/
                v33 += v51; /*0x6b92a2*/
                v61 -= v17; /*0x6b92a4*/
              }
              --v58; /*0x6b92ad*/
            }
            while ( v58 ); /*0x6b92b1*/
          }
          v42 = 0; /*0x6b92be*/
          v37 = 1 - *a2 + v34; /*0x6b92c6*/
          v41 = v37; /*0x6b92cf*/
          v44 += a2[1]; /*0x6b92d5*/
          v38 = v44; /*0x6b92cc*/
          if ( v44 > v18 ) /*0x6b92d9*/
          {
            do /*0x6b92e1*/
            {
              v38 -= v18; /*0x6b92db*/
              v37 += *a2; /*0x6b92dd*/
            }
            while ( v38 > v18 ); /*0x6b92e1*/
            v44 = v38; /*0x6b92e3*/
            v41 = v37; /*0x6b92e7*/
          }
          v39 = v52 + v65; /*0x6b92f7*/
          v65 += v52; /*0x6b92fd*/
          v40 = v46 + v63; /*0x6b9301*/
          v61 = 0; /*0x6b9303*/
          v63 += v46; /*0x6b9309*/
          if ( v63 > v18 ) /*0x6b930d*/
          {
            v63 = v40 - v18; /*0x6b9311*/
            v65 = v53 + v39; /*0x6b931b*/
          }
          if ( ++v48 >= v18 ) /*0x6b932a*/
            break; /*0x6b932a*/
          v19 = v65; /*0x6b922a*/
        }
      }
    }
    else
    {
      v21 = v46; /*0x6b90cf*/
      v47 = 0; /*0x6b90d3*/
      if ( v46 > 0 ) /*0x6b90dd*/
      {
        while ( v19 >= 0 ) /*0x6b90ef*/
        {
          if ( v20 <= 0 ) /*0x6b90f7*/
          {
            v23 = a2; /*0x6b920d*/
            v24 = v41; /*0x6b9211*/
          }
          else
          {
            v54 = v20; /*0x6b9101*/
            v22 = (unsigned char *)(v59 + v19); /*0x6b9105*/
            do /*0x6b9172*/
            {
              v23 = a2; /*0x6b9107*/
              v24 = v41; /*0x6b910b*/
              v25 = *(unsigned char *)(v41 + a2[2]); /*0x6b9112*/
              if ( v25 ) /*0x6b9117*/
                *v22 = v25; /*0x6b9119*/
              v42 += *a2; /*0x6b912a*/
              v26 = v42; /*0x6b9122*/
              if ( v42 > v43 ) /*0x6b912e*/
              {
                do /*0x6b9135*/
                {
                  v26 -= v43; /*0x6b9130*/
                  ++v24; /*0x6b9132*/
                }
                while ( v26 > v43 ); /*0x6b9135*/
                v42 = v26; /*0x6b9137*/
                v41 = v24; /*0x6b913b*/
              }
              v22 += v51; /*0x6b9143*/
              v61 += v17; /*0x6b914d*/
              if ( v61 > v43 ) /*0x6b9151*/
              {
                if ( v25 ) /*0x6b9155*/
                  *v22 = v25; /*0x6b9157*/
                v22 += v50; /*0x6b9163*/
                v61 -= v43; /*0x6b9165*/
              }
              --v54; /*0x6b916e*/
            }
            while ( v54 ); /*0x6b9172*/
            v18 = v57; /*0x6b9174*/
            v21 = v46; /*0x6b9178*/
          }
          v42 = 0; /*0x6b9186*/
          v27 = 1 - *v23 + v24; /*0x6b918e*/
          v41 = v27; /*0x6b9197*/
          v44 += v23[1]; /*0x6b919d*/
          v28 = v44; /*0x6b9194*/
          if ( v44 > v21 ) /*0x6b91a1*/
          {
            do /*0x6b91a9*/
            {
              v28 -= v21; /*0x6b91a3*/
              v27 += *v23; /*0x6b91a5*/
            }
            while ( v28 > v21 ); /*0x6b91a9*/
            v44 = v28; /*0x6b91ab*/
            v41 = v27; /*0x6b91af*/
          }
          v29 = v53 + v65; /*0x6b91bb*/
          v30 = v18 + v63; /*0x6b91c1*/
          v61 = 0; /*0x6b91c3*/
          v31 = v18 + v63 <= v21; /*0x6b91cb*/
          v65 += v53; /*0x6b91cd*/
          v63 += v18; /*0x6b91d1*/
          if ( !v31 ) /*0x6b91d5*/
          {
            v63 = v30 - v21; /*0x6b91e1*/
            v65 = v52 + v29; /*0x6b91e5*/
          }
          if ( ++v47 >= v21 ) /*0x6b91f4*/
            break; /*0x6b91f4*/
          v19 = v65; /*0x6b90e5*/
          v20 = v43; /*0x6b90e9*/
        }
      }
    }
  }
  return (*(int (**)(int))(*(unsigned int *)a1 + 96))(a1); /*0x6b9203*/
}
}
// 0x6B9D00
namespace gamemd {
AbstractClass * * Palette_LoadFromFile(int a1, int a2, char * Source, int a4, int a5)
{
  int v5; // ebx
  unsigned char *v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // edi
  unsigned int *v10; // ebp
  int v12; // eax
  unsigned int *v13; // esi
  unsigned char *v14; // eax
  int v15; // ebp
  int v16; // ebx
  int v17; // edx
  int *v18; // eax
  int v19; // esi
  int v20; // ebx
  unsigned int *v21; // eax
  int v22; // eax
  int v23; // edx
  int v24; // eax
  int v25; // edx
  int v26; // ecx
  int v27; // esi
  int v28; // ebx
  int v29; // eax
  int v30; // edx
  int v31; // edi
  int v32; // eax
  int v33; // edx
  int v34; // ecx
  int i; // esi
  int v36; // eax
  int v37; // eax
  void (***v38)(unsigned int, int); // edi
  int v39; // esi
  const void *v40; // esi
  unsigned int *v41; // eax
  unsigned int *v42; // ebp
  int v43; // edx
  int v44; // eax
  int v45; // edx
  int v46; // eax
  double v47; // st7
  void *v48; // [esp+14h] [ebp-9ACh] BYREF
  int64_t v49; // [esp+18h] [ebp-9A8h]
  int v50; // [esp+24h] [ebp-99Ch]
  int v51; // [esp+28h] [ebp-998h]
  unsigned char v52[16]; // [esp+2Ch] [ebp-994h] BYREF
  int v53; // [esp+3Ch] [ebp-984h]
  int v54; // [esp+40h] [ebp-980h]
  unsigned int v55[22]; // [esp+4Ch] [ebp-974h] BYREF
  unsigned short v56[6]; // [esp+A4h] [ebp-91Ch] BYREF
  int v57; // [esp+B0h] [ebp-910h]
  unsigned int v58[193]; // [esp+B8h] [ebp-908h] BYREF
  unsigned char v59[768]; // [esp+3BCh] [ebp-604h] BYREF
  unsigned int v60[193]; // [esp+6BCh] [ebp-304h] BYREF

  v5 = a1; /*0x6b9d08*/
  IDA_LODWORD(v49) = a1; /*0x6b9d0c*/
  v6 = &v59[2]; /*0x6b9d10*/
  v7 = 256; /*0x6b9d17*/
  do /*0x6b9d2b*/
  {
    *(v6 - 2) = 0; /*0x6b9d1c*/
    *(v6 - 1) = 0; /*0x6b9d20*/
    *v6 = 0; /*0x6b9d24*/
    v6 += 3; /*0x6b9d27*/
    --v7; /*0x6b9d2a*/
  }
  while ( v7 ); /*0x6b9d2b*/
  v60[0] = 0; /*0x6b9d3b*/
  ((CCFileClass*)v55)->Construct(Source); /*0x6b9d42*/
  v9 = (unsigned int)DecodeFrameSHP(0, 0); /*0x6b9d59*/
  v10 = (unsigned int *)v9; /*0x6b9d5d*/
  if ( v9 ) /*0x6b9d5f*/
  {
    v12 = a4; /*0x6b9d9c*/
    if ( a4 == 2 ) /*0x6b9da6*/
    {
      v13 = v58; /*0x6b9dac*/
      v14 = &v59[1]; /*0x6b9db3*/
      v15 = 256; /*0x6b9dba*/
      do /*0x6b9e13*/
      {
        IDA_LOBYTE(v8) = v14[1] >> g_BitMask_Red; /*0x6b9dc8*/
        IDA_LOBYTE(v5) = *(v14 - 1); /*0x6b9dd0*/
        v14 += 3; /*0x6b9dd3*/
        v13 = (unsigned int *)((char *)v13 + 2); /*0x6b9dd6*/
        IDA_LOWORD(v8) = (uint8_t)v8; /*0x6b9dd9*/
        IDA_LOWORD(v5) = (uint8_t)((uint8_t)v5 >> g_BitShift_Green_0); /*0x6b9ded*/
        v16 = v5 << g_BitShift_Red; /*0x6b9df1*/
        v17 = v16 | (v8 << g_BitShift_Blue); /*0x6b9df9*/
        IDA_LOWORD(v16) = (uint8_t)(*(v14 - 3) >> g_BitMask_Blue); /*0x6b9e06*/
        v5 = v16 << g_BitMask_Green; /*0x6b9e0a*/
        v8 = v5 | v17; /*0x6b9e0c*/
        --v15; /*0x6b9e0e*/
        *((unsigned short *)v13 - 1) = v8; /*0x6b9e0f*/
      }
      while ( v15 ); /*0x6b9e13*/
      v18 = (int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)v9 + 120))(v9, v52); /*0x6b9e1e*/
      v53 = *v18; /*0x6b9e25*/
      v54 = v18[1]; /*0x6b9e2c*/
      v19 = v18[2]; /*0x6b9e30*/
      v20 = v18[3]; /*0x6b9e33*/
      v21 = RA2_OPNEW(0x20u); /*0x6b9e36*/
      v10 = v21; /*0x6b9e3b*/
      if ( v21 ) /*0x6b9e42*/
      {
        v21[1] = v19; /*0x6b9e51*/
        v21[2] = v20; /*0x6b9e54*/
        v21[3] = 0; /*0x6b9e57*/
        *v21 = &XSurface_Vtable; /*0x6b9e5e*/
        v21[4] = 2; /*0x6b9e65*/
        ((Buffer *)0)->Init( 2 * v20 * v19); /*0x6b9e6c*/
        *v10 = &BSurface_Vtable; /*0x6b9e71*/
      }
      else
      {
        v10 = 0; /*0x6b9e7a*/
      }
      v22 = (*(int (**)(unsigned int *, unsigned int, unsigned int))(*v10 + 92))(v10, 0, 0); /*0x6b9e87*/
      v23 = *(unsigned int *)v9; /*0x6b9e8a*/
      v51 = v22; /*0x6b9e8c*/
      v24 = (*(int (**)(int, unsigned int, unsigned int))(v23 + 92))(v9, 0, 0); /*0x6b9e98*/
      v25 = 0; /*0x6b9e9d*/
      v26 = v20 * v19; /*0x6b9e9f*/
      if ( v20 * v19 > 0 ) /*0x6b9ea4*/
      {
        v27 = v51; /*0x6b9ea6*/
        do /*0x6b9ec1*/
        {
          v27 += 2; /*0x6b9eac*/
          v28 = *(uint8_t *)(v24 + v25++); /*0x6b9eaf*/
          *(unsigned short *)(v27 - 2) = *((unsigned short *)v58 + v28); /*0x6b9ebd*/
        }
        while ( v25 < v26 ); /*0x6b9ec1*/
      }
      (*(void (**)(int))(*(unsigned int *)v9 + 96))(v9); /*0x6b9ec7*/
      (*(void (**)(unsigned int *))(*v10 + 96))(v10); /*0x6b9ecf*/
      (**(void (***)(int, int))v9)(v9, 1); /*0x6b9ed8*/
      v5 = v49; /*0x6b9eda*/
      v12 = 2; /*0x6b9ede*/
    }
    else if ( a4 == 1 ) /*0x6b9eea*/
    {
      qmemcpy(&v60[1], v59, 0x300u); /*0x6b9eff*/
    }
    if ( a5 && v12 == 1 ) /*0x6b9f0f*/
    {
      v29 = (*(int (**)(unsigned int *, unsigned char *))(*v10 + 120))(v10, v52); /*0x6b9f1b*/
      v49 = *(unsigned long long *)v29; /*0x6b9f20*/
      v30 = *v10; /*0x6b9f2e*/
      v31 = *(unsigned int *)(v29 + 8); /*0x6b9f31*/
      v50 = *(unsigned int *)(v29 + 12); /*0x6b9f39*/
      v32 = (*(int (**)(unsigned int *, unsigned int, unsigned int))(v30 + 92))(v10, 0, 0); /*0x6b9f40*/
      v33 = 0; /*0x6b9f47*/
      v34 = v31 * v50; /*0x6b9f49*/
      for ( i = v32; v33 < v34; *(unsigned char *)(i + v33 - 1) = v59[2 * v36 + v36] ) /*0x6b9f50*/
        v36 = *(uint8_t *)(i + v33++); /*0x6b9f54*/
      (*(void (**)(unsigned int *))(*v10 + 96))(v10); /*0x6b9f71*/
    }
    v60[0] = v10; /*0x6b9f80*/
    ((String *)((char **)&v48))->Assign(Source); /*0x6b9f87*/
    ((String *)(&v48))->ToLower(); /*0x6b9f90*/
    v37 = *(unsigned int *)(v5 + 4); /*0x6b9f95*/
    v38 = 0; /*0x6b9f98*/
    v58[0] = 0; /*0x6b9f9c*/
    if ( v37 ) /*0x6b9fa3*/
    {
      v39 = *(unsigned int *)(*(unsigned int *)v5 /*0x6b9fbf*/
                      + 4 * ((*(int (**)(void **))(v5 + 24))( (void **)(&v48)) & ((1 << *(unsigned int *)(v5 + 12)) - 1)));
      if ( v39 ) /*0x6b9fc4*/
      {
        while ( !(uint8_t)String::Compare( (const char)(&v48)) ) /*0x6b9fd4*/
        {
          v39 = *(unsigned int *)(v39 + 776); /*0x6b9fd6*/
          if ( !v39 ) /*0x6b9fde*/
            goto LABEL_31; /*0x6b9fde*/
        }
        v40 = (const void *)(v39 + 4); /*0x6b9fe6*/
        if ( v40 ) /*0x6b9feb*/
        {
          qmemcpy(v58, v40, sizeof(v58)); /*0x6b9ff9*/
          v38 = (void (***)(unsigned int, int))v58[0]; /*0x6b9ffb*/
        }
        v58[0] = 0; /*0x6ba011*/
        HashTable::RemoveHashTableEntry( (void)(&v48), v58); /*0x6ba01c*/
        if ( v38 ) /*0x6ba023*/
          (**v38)(v38, 1); /*0x6ba02b*/
      }
    }
  LABEL_31:
    v41 = RA2_OPNEW(0x30Cu); /*0x6ba02d*/
    v42 = v41; /*0x6ba037*/
    if ( v41 ) /*0x6ba03e*/
    {
      unknown_libname_73(v41); /*0x6ba042*/
      v42[1] = 0; /*0x6ba047*/
    }
    else
    {
      v42 = 0; /*0x6ba050*/
    }
    String::Reassign( (const char)(&v48)); /*0x6ba059*/
    qmemcpy(v42 + 1, v60, 0x304u); /*0x6ba06d*/
    v42[194] = 0; /*0x6ba075*/
    v43 = (*(int (**)(void **))(v5 + 24))( (void **)(&v48)) & ((1 << *(unsigned int *)(v5 + 12)) - 1); /*0x6ba08b*/
    v44 = *(unsigned int *)(*(unsigned int *)v5 + 4 * v43); /*0x6ba08d*/
    *(unsigned int *)(*(unsigned int *)v5 + 4 * v43) = v42; /*0x6ba095*/
    if ( v44 ) /*0x6ba097*/
      v42[194] = v44; /*0x6ba099*/
    v45 = *(unsigned int *)(v5 + 8); /*0x6ba0a2*/
    v46 = *(unsigned int *)(v5 + 4) + 1; /*0x6ba0a5*/
    v49 = (unsigned int)v46; /*0x6ba0aa*/
    *(unsigned int *)(v5 + 4) = v46; /*0x6ba0ae*/
    v47 = (double)v49; /*0x6ba0b1*/
    v49 = (unsigned int)v45; /*0x6ba0b5*/
    if ( v47 / (double)v45 >= *(double *)(v5 + 40) ) /*0x6ba0c9*/
      Render_Load_6BAFA0(v5); /*0x6ba0cd*/
    j_DeleteAndZero(&v48); /*0x6ba0d6*/
    v55[0] = (void*)&CCFileClass_vftable; /*0x6ba0e2*/
    v57 = 0; /*0x6ba0ea*/
    ((Vector *)((int)v56))->Clear(); /*0x6ba0f1*/
    v55[0] = (unsigned int)&off_7E1668; /*0x6ba0fa*/
    ((BufferIOFileClass *)(v55))->Dtor(); /*0x6ba102*/
    return 1; /*0x6ba10a*/
  }
  else
  {
    v55[0] = (void*)&CCFileClass_vftable; /*0x6b9d68*/
    v57 = 0; /*0x6b9d70*/
    ((Vector *)((int)v56))->Clear(); /*0x6b9d77*/
    v55[0] = (unsigned int)&off_7E1668; /*0x6b9d80*/
    ((BufferIOFileClass *)(v55))->Dtor(); /*0x6b9d88*/
    return 0; /*0x6b9d90*/
  }
}
}
// 0x6BB390
namespace gamemd {
int sub_6BB390()
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  unsigned char v7[16]; // [esp+0h] [ebp-2F0h] BYREF
  HKEY phkResult; // [esp+10h] [ebp-2E0h] BYREF
  ITypeLib *pptlib; // [esp+14h] [ebp-2DCh] BYREF
  CHAR MultiByteStr[40]; // [esp+18h] [ebp-2D8h] BYREF
  CHAR String1[48]; // [esp+40h] [ebp-2B0h] BYREF
  CHAR SubKey[260]; // [esp+70h] [ebp-280h] BYREF
  CHAR String[40]; // [esp+174h] [ebp-17Ch] BYREF
  OLECHAR sz[40]; // [esp+19Ch] [ebp-154h] BYREF
  CHAR Filename[260]; // [esp+1ECh] [ebp-104h] BYREF

  GetModuleFileNameA(g_hInstance, Filename, 0x104u); /*0x6bb3ae*/
  StringFromGUID2(&rguid, sz, 39); /*0x6bb3c9*/
  WideCharToMultiByte(0, 0, sz, -1, MultiByteStr, 39, 0, 0); /*0x6bb3ea*/
  StringFromGUID2(&stru_7E9510, sz, 39); /*0x6bb3fb*/
  WideCharToMultiByte(0, 0, sz, -1, String, 39, 0, 0); /*0x6bb419*/
  lstrcpyA(String1, aClsid); /*0x6bb42b*/
  lstrcatA(String1, MultiByteStr); /*0x6bb43d*/
  lstrcpyA(SubKey, (LPCSTR)g_Str_WW_TiberianSun_1); /*0x6bb449*/
  if ( !RegCreateKeyExA(HKEY_CLASSES_ROOT, SubKey, 0, 0, 0, 0xF003Fu, 0, &phkResult, 0) ) /*0x6bb472*/
  {
    if ( Data ) /*0x6bb486*/
    {
      v1 = lstrlenA((LPCSTR)Data); /*0x6bb48d*/
      RegSetValueExA(phkResult, 0, 0, 1u, Data, v1 + 1); /*0x6bb4a5*/
    }
    RegCloseKey(phkResult); /*0x6bb4ac*/
  }
  lstrcpyA(SubKey, (LPCSTR)g_Str_WW_TiberianSun_1); /*0x6bb4bc*/
  if ( g_INI_Key_CLSID ) /*0x6bb4c5*/
  {
    lstrcatA(SubKey, asc_815E74); /*0x6bb4d1*/
    lstrcatA(SubKey, g_INI_Key_CLSID); /*0x6bb4dd*/
  }
  if ( !RegCreateKeyExA(HKEY_CLASSES_ROOT, SubKey, 0, 0, 0, 0xF003Fu, 0, &phkResult, 0) ) /*0x6bb500*/
  {
    if ( v7 != (unsigned char *)-24 ) /*0x6bb50c*/
    {
      v2 = lstrlenA(MultiByteStr); /*0x6bb513*/
      RegSetValueExA(phkResult, 0, 0, 1u, (const BYTE *)MultiByteStr, v2 + 1); /*0x6bb52b*/
    }
    RegCloseKey(phkResult); /*0x6bb532*/
  }
  lstrcpyA(SubKey, g_Str_WW_TiberianSun); /*0x6bb542*/
  if ( !RegCreateKeyExA(HKEY_CLASSES_ROOT, SubKey, 0, 0, 0, 0xF003Fu, 0, &phkResult, 0) ) /*0x6bb562*/
  {
    if ( Data ) /*0x6bb570*/
    {
      v3 = lstrlenA((LPCSTR)Data); /*0x6bb577*/
      RegSetValueExA(phkResult, 0, 0, 1u, Data, v3 + 1); /*0x6bb58f*/
    }
    RegCloseKey(phkResult); /*0x6bb596*/
  }
  lstrcpyA(SubKey, g_Str_WW_TiberianSun); /*0x6bb5a6*/
  if ( aCurver ) /*0x6bb5b0*/
  {
    lstrcatA(SubKey, asc_815E74); /*0x6bb5bc*/
    lstrcatA(SubKey, aCurver); /*0x6bb5c8*/
  }
  if ( !RegCreateKeyExA(HKEY_CLASSES_ROOT, SubKey, 0, 0, 0, 0xF003Fu, 0, &phkResult, 0) ) /*0x6bb5eb*/
  {
    if ( g_Str_WW_TiberianSun_1 ) /*0x6bb5f9*/
    {
      v4 = lstrlenA((LPCSTR)g_Str_WW_TiberianSun_1); /*0x6bb600*/
      RegSetValueExA(phkResult, 0, 0, 1u, g_Str_WW_TiberianSun_1, v4 + 1); /*0x6bb618*/
    }
    RegCloseKey(phkResult); /*0x6bb61f*/
  }
  lstrcpyA(SubKey, g_Str_WW_TiberianSun); /*0x6bb62f*/
  if ( g_INI_Key_CLSID ) /*0x6bb639*/
  {
    lstrcatA(SubKey, asc_815E74); /*0x6bb645*/
    lstrcatA(SubKey, g_INI_Key_CLSID); /*0x6bb651*/
  }
  if ( !RegCreateKeyExA(HKEY_CLASSES_ROOT, SubKey, 0, 0, 0, 0xF003Fu, 0, &phkResult, 0) ) /*0x6bb674*/
  {
    if ( v7 != (unsigned char *)-24 ) /*0x6bb680*/
    {
      v5 = lstrlenA(MultiByteStr); /*0x6bb687*/
      RegSetValueExA(phkResult, 0, 0, 1u, (const BYTE *)MultiByteStr, v5 + 1); /*0x6bb69f*/
    }
    RegCloseKey(phkResult); /*0x6bb6a6*/
  }
  WriteRegistryKeyCOM(String1, 0, (LPCSTR)Data); /*0x6bb6b7*/
  WriteRegistryKeyCOM(String1, aProgid, (LPCSTR)g_Str_WW_TiberianSun_1); /*0x6bb6ca*/
  WriteRegistryKeyCOM(String1, aVersionindepen, g_Str_WW_TiberianSun); /*0x6bb6dd*/
  WriteRegistryKeyCOM(String1, aNotinsertable, 0); /*0x6bb6ed*/
  WriteRegistryKeyCOM(String1, aInprocserver32, Filename); /*0x6bb703*/
  WriteRegistryKeyCOM(String1, aTypelib, String); /*0x6bb719*/
  pptlib = 0; /*0x6bb722*/
  LoadTypeLib(&szFile, &pptlib); /*0x6bb730*/
  if ( pptlib ) /*0x6bb740*/
    pptlib->lpVtbl->Release(pptlib); /*0x6bb745*/
  return 0; /*0x6bb73a*/
}
}
// 0x6BB9A0
namespace gamemd {
int WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
  HWND WindowA; // eax
  HWND v6; // esi
  CCINIClass *v12; // eax
  int Int_Overwrite; // eax
  char *i; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v21; // eax
  IID **v22; // esi
  HMODULE LibraryA; // eax
  HMODULE v25; // edi
  void (*ProcAddress)(void); // eax
  TClassFactory_VCStreamClass__ *v27; // eax
  IUnknown *v28; // eax
  TClassFactory_VWaveClass__ *v29; // eax
  IUnknown *v30; // eax
  TClassFactory_VTerrainTypeClass__ *v31; // eax
  IUnknown *v32; // eax
  TClassFactory_VTerrainClass__ *v33; // eax
  IUnknown *v34; // eax
  TClassFactory_VSuperWeaponTypeClass__ *v35; // eax
  IUnknown *v36; // eax
  TClassFactory_VSuperClass__ *v37; // eax
  IUnknown *v38; // eax
  TClassFactory_VTactical__ *v39; // eax
  IUnknown *v40; // eax
  TClassFactory_VCellClass__ *v41; // eax
  IUnknown *v42; // eax
  TClassFactory_VEMPulseClass__ *v43; // eax
  IUnknown *v44; // eax
  TClassFactory_VLightSourceClass__ *v45; // eax
  IUnknown *v46; // eax
  TClassFactory_VSideClass__ *v47; // eax
  IUnknown *v48; // eax
  TClassFactory_VTiberiumClass__ *v49; // eax
  IUnknown *v50; // eax
  TClassFactory_VTubeClass__ *v51; // eax
  IUnknown *v52; // eax
  TClassFactory_VCampaignClass__ *v53; // eax
  IUnknown *v54; // eax
  TClassFactory_VBuildingLightClass__ *v55; // eax
  IUnknown *v56; // eax
  TClassFactory_VWaypointPathClass__ *v57; // eax
  IUnknown *v58; // eax
  TClassFactory_VTemporalClass__ *v59; // eax
  IUnknown *v60; // eax
  TClassFactory_VAirstrikeClass__ *v61; // eax
  IUnknown *v62; // eax
  TClassFactory_VSpawnManagerClass__ *v63; // eax
  IUnknown *v64; // eax
  TClassFactory_VSlaveManagerClass__ *v65; // eax
  IUnknown *Instance; // eax
  TClassFactory_VCaptureManagerClass__ *v67; // eax
  IUnknown *v68; // eax
  TClassFactory_VDiskLaserClass__ *v69; // eax
  IUnknown *v70; // eax
  TClassFactory_VParasiteClass__ *v71; // eax
  IUnknown *v72; // eax
  TClassFactory_VBombClass__ *v73; // eax
  IUnknown *v74; // eax
  TClassFactory_VRadSiteClass__ *v75; // eax
  IUnknown *v76; // eax
  TClassFactory_VTEventClass__ *v77; // eax
  IUnknown *v78; // eax
  TClassFactory_VVoxelAnimTypeClass__ *v79; // eax
  IUnknown *v80; // eax
  TClassFactory_VVoxelAnimClass__ *v81; // eax
  IUnknown *v82; // eax
  TClassFactory_VTActionClass__ *v83; // eax
  IUnknown *v84; // eax
  TClassFactory_VTriggerClass__ *v85; // eax
  IUnknown *v86; // eax
  TClassFactory_VTriggerTypeClass__ *v87; // eax
  IUnknown *v88; // eax
  TClassFactory_VScriptClass__ *v89; // eax
  IUnknown *v90; // eax
  TClassFactory_VScriptTypeClass__ *v91; // eax
  IUnknown *v92; // eax
  TClassFactory_VTagClass__ *v93; // eax
  IUnknown *v94; // eax
  TClassFactory_VTagTypeClass__ *v95; // eax
  IUnknown *v96; // eax
  TClassFactory_VTeamClass__ *v97; // eax
  IUnknown *v98; // eax
  TClassFactory_VTeamTypeClass__ *v99; // eax
  IUnknown *v100; // eax
  TClassFactory_VTaskForceClass__ *v101; // eax
  IUnknown *v102; // eax
  TClassFactory_VUnitTypeClass__ *v103; // eax
  IUnknown *v104; // eax
  TClassFactory_VBuildingTypeClass__ *v105; // eax
  IUnknown *v106; // eax
  TClassFactory_VAircraftTypeClass__ *v107; // eax
  IUnknown *v108; // eax
  TClassFactory_VInfantryTypeClass__ *v109; // eax
  IUnknown *v110; // eax
  TClassFactory_VBulletTypeClass__ *v111; // eax
  IUnknown *v112; // eax
  TClassFactory_VIsometricTileTypeClass__ *v113; // eax
  IUnknown *v114; // eax
  TClassFactory_VOverlayTypeClass__ *v115; // eax
  IUnknown *v116; // eax
  TClassFactory_VSmudgeTypeClass__ *v117; // eax
  IUnknown *v118; // eax
  TClassFactory_VUnitClass__ *v119; // eax
  IUnknown *v120; // eax
  TClassFactory_VBuildingClass__ *v121; // eax
  IUnknown *v122; // eax
  TClassFactory_VAircraftClass__ *v123; // eax
  IUnknown *v124; // eax
  TClassFactory_VInfantryClass__ *v125; // eax
  IUnknown *v126; // eax
  TClassFactory_VAnimClass__ *v127; // eax
  IUnknown *v128; // eax
  TClassFactory_VAnimTypeClass__ *v129; // eax
  IUnknown *v130; // eax
  TClassFactory_VHouseTypeClass__ *v131; // eax
  IUnknown *v132; // eax
  TClassFactory_VHouseClass__ *v133; // eax
  IUnknown *v134; // eax
  TClassFactory_VDriveLocomotionClass__ *v135; // eax
  IUnknown *v136; // eax
  TClassFactory_VJumpjetLocomotionClass__ *v137; // eax
  IUnknown *v138; // eax
  TClassFactory_VHoverLocomotionClass__ *v139; // eax
  IUnknown *v140; // eax
  TClassFactory_VRocketLocomotionClass__ *v141; // eax
  IUnknown *v142; // eax
  TClassFactory_VTunnelLocomotionClass__ *v143; // eax
  IUnknown *v144; // eax
  TClassFactory_VWalkLocomotionClass__ *v145; // eax
  IUnknown *v146; // eax
  TClassFactory_VDropPodLocomotionClass__ *v147; // eax
  IUnknown *v148; // eax
  TClassFactory_VFlyLocomotionClass__ *v149; // eax
  IUnknown *v150; // eax
  TClassFactory_VTeleportLocomotionClass__ *v151; // eax
  IUnknown *v152; // eax
  TClassFactory_VMechLocomotionClass__ *v153; // eax
  IUnknown *v154; // eax
  TClassFactory_VShipLocomotionClass__ *v155; // eax
  IUnknown *v156; // eax
  TClassFactory_VBulletClass__ *v157; // eax
  IUnknown *v158; // eax
  TClassFactory_VFactoryClass__ *v159; // eax
  IUnknown *v160; // eax
  TClassFactory_VWarheadTypeClass__ *v161; // eax
  IUnknown *v162; // eax
  TClassFactory_VWeaponTypeClass__ *v163; // eax
  IUnknown *v164; // eax
  TClassFactory_VParticleClass__ *v165; // eax
  IUnknown *v166; // eax
  TClassFactory_VParticleTypeClass__ *v167; // eax
  IUnknown *v168; // eax
  TClassFactory_VParticleSystemClass__ *v169; // eax
  IUnknown *v170; // eax
  TClassFactory_VParticleSystemTypeClass__ *v171; // eax
  IUnknown *v172; // eax
  TClassFactory_VAITriggerTypeClass__ *v173; // eax
  IUnknown *v174; // eax
  TClassFactory_VNeuronClass__ *v175; // eax
  IUnknown *v176; // eax
  TClassFactory_VFoggedObjectClass__ *v177; // eax
  IUnknown *v178; // eax
  TClassFactory_VAlphaShapeClass__ *v179; // eax
  IUnknown *v180; // eax
  wchar_t *v181; // eax
  std::codecvt_base *v185; // ecx
  wchar_t *v186; // eax
  wchar_t *v187; // eax
  wchar_t *v189; // eax
  int edi325; // edi
  wchar_t *v191; // eax
  int eax333; // eax
  wchar_t *v193; // eax
  Frame *v194; // ecx
  CCINIClass *v197; // esi
  MouseClass *v190; // eax
  int v201; // ecx
  ObjectClass *v192; // eax
  Frame *v203; // ecx
  wchar_t *v204; // eax
  wchar_t *v205; // [esp-4h] [ebp-E40h]
  wchar_t *v206; // [esp-4h] [ebp-E40h]
  wchar_t *v207; // [esp-4h] [ebp-E40h]
  wchar_t *v208; // [esp-4h] [ebp-E40h]
  wchar_t *v209; // [esp-4h] [ebp-E40h]
  CampaignScore *v210; // [esp+4h] [ebp-E38h]
  unsigned char v211[516]; // [esp+60h] [ebp-DDCh] BYREF
  RAMFileClass v212; // [esp+264h] [ebp-BD8h] BYREF
  void *v213[95]; // [esp+284h] [ebp-BB8h] BYREF
  LPVOID ppv[2]; // [esp+400h] [ebp-A3Ch] BYREF
  DynamicVector dwRegister; // [esp+408h] [ebp-A34h] BYREF
  int16_t v216; // [esp+434h] [ebp-A08h]
  INIClass String_v[8]; // [esp+444h] [ebp-9F8h] BYREF
  ObjectClass aP2; // [esp+680h] [ebp-7BCh] BYREF
  CCINIClass *aP1; // [esp+730h] [ebp-70Ch]
  char Drive[4]; // [esp+73Ch] [ebp-700h] BYREF
  char Dir[260]; // [esp+740h] [ebp-6FCh] BYREF
  CHAR Filename[132]; // [esp+844h] [ebp-5F8h] BYREF
  wchar_t Buffer[512]; // [esp+8C8h] [ebp-574h] BYREF
  char *FullPath; // [esp+CC8h] [ebp-174h] BYREF
  char v225; // [esp+CCCh] [ebp-170h] BYREF
  CHAR PathName[260]; // [esp+D1Ch] [ebp-120h] BYREF
  int v227; // [esp+E20h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+E24h] [ebp-18h]

  g_hInstance = (unsigned int)(ObjectClass *)hInstance;
  dword_B730E8 = GetCurrentThreadId();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  if ( !CopyProtection::CheckLauncher() )
  {
LABEL_2:
    Debug::Log();
    return 0;
  }
  *(unsigned int *)&stru_B05488[26716] = CreateMutexA(0, 0, &stru_830620[67828]);
  if ( GetLastError() == 183 )
  {
    WindowA = FindWindowA(&stru_830620[67828], 0);
    v6 = WindowA;
    if ( WindowA )
    {
      SetForegroundWindow(WindowA);
      ShowWindow(v6, 9);
    }
    if ( *(unsigned int *)&stru_B05488[26716] )
    {
      CloseHandle(*(HANDLE *)&stru_B05488[26716]);
      *(unsigned int *)&stru_B05488[26716] = 0;
    }
    goto LABEL_2;
  }
  Debug::Log();
  do
  {
    *(unsigned int *)&stru_B05488[26720] = OpenMutexA(0x1F0001u, 0, &stru_830620[67728]);
    if ( *(unsigned int *)&stru_B05488[26720] )
    {
      Debug::Log();
      if ( WaitForSingleObject(*(HANDLE *)&stru_B05488[26720], 0x7530u) == -1 )
      {
        Debug::Log();
        CloseHandle(*(HANDLE *)&stru_B05488[26720]);
        *(unsigned int *)&stru_B05488[26720] = 0;
      }
    }
    if ( *(unsigned int *)&stru_B05488[26720] )
      break;
    *(unsigned int *)&stru_B05488[26720] = CreateMutexA(0, 0, &stru_830620[67728]);
    if ( GetLastError() == 183 )
    {
      CloseHandle(*(HANDLE *)&stru_B05488[26720]);
      *(unsigned int *)&stru_B05488[26720] = 0;
      Sleep(0x9C4u);
    }
    else
    {
      Debug::Log();
    }
  }
  while ( !*(unsigned int *)&stru_B05488[26720] );
  Debug::Log();
  _controlfp(0x300u, 0x300u);
  CRT_FPU_InitControlWord();
  GetModuleFileNameA(hInstance, Filename, 0x84u);
  int v7 = 1;
  v227 = 1;
  FullPath = Filename;
  char * v8 = strtok(lpCmdLine, (ObjectClass *)&stru_830620[1012]);
  char * v9 = &v225;
  do
  {
    if ( !v8 )
      break;
    *(unsigned int *)v9 = ((String*)v8)->Trim();
    ++v7;
    v9 += 4;
    v8 = strtok(0, (ObjectClass *)&stru_830620[1012]);
  }
  while ( v7 < 20 );
  v227 = v7;
  _splitpath(FullPath, Drive, Dir, 0, 0);
  _makepath(PathName, Drive, Dir, 0, 0);
  SetCurrentDirectoryA(PathName);
  int v10 = 1;
  if ( !ParseCommandLine(v7, (int)&FullPath) )
    goto LABEL_374;
  unsigned int * v11 = (unsigned int *)operator new(0x24u);
  if ( v11 )
    v12 = (CCINIClass *)((RawFileClass*)v11)->Construct((RawFileClass *)&stru_826420[36]);
  CCINIClass *v12 = 0;
  aP1 = v12;
  ((CCINIClass *)(&stru_87C374[44364]))->Load((MultiplayerGameMode *)v12, 0, 0);
  stru_830620[66636] = INIClass::ReadBool_Overwrite(
                                    (int)&stru_87C374[44364],
                                    (uint8_t *)&stru_830620[11072],
                                    (CCINIClass *)&stru_830620[67592],
                                    1);
  HouseClass_Player[45079] = INIClass::ReadBool_Overwrite(
                                          (int)&stru_87C374[44364],
                                          (uint8_t *)&stru_830620[11072],
                                          (CCINIClass *)&stru_830620[10940],
                                          0);
  *(unsigned int *)&HouseClass_Player[44600] = INIClass::ReadInt_Overwrite(
                                                      (int)&stru_87C374[44364],
                                                      (uint8_t *)&stru_830620[11072],
                                                      (CCINIClass *)&stru_830620[11080],
                                                      *(INIClass **)&HouseClass_Player[44600]);
  *(unsigned int *)&HouseClass_Player[44604] = INIClass::ReadInt_Overwrite(
                                                      (int)&stru_87C374[44364],
                                                      (uint8_t *)&stru_830620[11072],
                                                      (CCINIClass *)&stru_830620[11056],
                                                      *(INIClass **)&HouseClass_Player[44604]);
  Int_Overwrite = INIClass::ReadInt_Overwrite(
                    (int)&stru_87C374[44364],
                    (uint8_t *)&stru_830620[10816],
                    (CCINIClass *)&stru_830620[10748],
                    0);
  if ( Int_Overwrite > 0 )
  {
    int v14 = Int_Overwrite + 0x4000;
    if ( v14 >= 0x4000 && v14 < 0x8000 )
      Network::GetField( (HWND)(&HouseClass_Player[44148]), (void *)(v14));
  }
  memset(String_v, 0, sizeof(String_v));
  if ( ((INIClass*)((uint8_t ***)&stru_87C374[44364]))->GetString((INIClass *)&stru_830620[10816], (uint8_t *)&stru_830620[10732], 0, String_v, 512)
    && String_v
    && strlen(String_v[0].__pad_0) )
  {
    int v15 = 0;
    for ( i = strtok(String_v[0].__pad_0, &stru_826598); i; i = strtok(0, &stru_826598) )
    {
      sscanf(i, (const char *const)&stru_825BAC.owningHouseIndex, dwRegister[32]);
      dwRegister[32][v15++ + 4] = dwRegister[32];
    }
    if ( v15 >= 4 )
    {
      *(unsigned int *)&HouseClass_Player[39088] = 1;
      dwRegister.field_28 = -1;
      v216 = -1;
      unsigned int * v17 = ((NetworkAddress *)&dwRegister.field_10)->Assign( &dwRegister[36], (IUnknown *)&dwRegister.field_28, 0);
      *(unsigned int *)&HouseClass_Player[39092] = *v17;
      *(unsigned int *)&HouseClass_Player[39096] = v17[1];
      *(unsigned int *)&HouseClass_Player[39100] = v17[2];
    }
  }
  unsigned int * v18 = (unsigned int *)operator new(0x320u);
  unsigned int * v19 = v18;
  if ( v18 )
  {
    NetworkSession::ResetState(v18);
    v19[199] = 1;
    *(unsigned int *)&stru_87C374[13308] = v19;
  }
  else
  {
    *(unsigned int *)&stru_87C374[13308] = 0;
  }
  if ( DiskSpace::CheckAvailable() < 0x2000 )
  {
    StringCSF = GetStringCSF( (wchar_t *)&stru_830620[67544], 0, (const char *)(&stru_830620[67564]), 1931);
    swprintf(Buffer, (const size_t)StringCSF, 0, v210);
    v21 = GetStringCSF( (wchar_t *)(g_Str_TXT_SHORT_TITLE), 0, (const char *)(&stru_830620[67564]), 1932);
    if ( WideMessageBox(0, Buffer, v21, 0x24u) == 7 )
    {
      OleUninitialize();
      return 1;
    }
  }
  OleInitialize(0);
  v22 = &off_7F3710;
  while ( 1 )
  {
    ppv[0] = 0;
    int v23 = COMClassFactory::Register(ppv, *v22, 0, 7u);
    IDA_LOBYTE(dwRegister.field_8) = v23 < 0;
    if ( v23 < 0 )
    {
      IDA_LOBYTE(dwRegister.field_8) = 0;
      LibraryA = LoadLibraryA(v22[1]->Data2);
      v25 = LibraryA;
      if ( LibraryA )
      {
        ProcAddress = (void (*)(void))GetProcAddress(LibraryA, &stru_830620[67524]);
        if ( !ProcAddress || (ProcAddress(), COMClassFactory::Register(ppv, *v22, 0, 7u) < 0) )
          IDA_LOBYTE(dwRegister.field_8) = 1;
        FreeLibrary(v25);
      }
      else
      {
        IDA_LOBYTE(dwRegister.field_8) = 1;
      }
    }
    if ( IDA_LOBYTE(dwRegister.field_8) )
      break;
    if ( !ppv[0] )
      WinAPI::Wrapper(-2147467261);
    (*(void (**)(LPVOID))(*(unsigned int *)ppv[0] + 8))(ppv[0]);
    ppv[0] = 0;
    COM_SafeRelease((int *)ppv);
    v22 += 2;
    if ( (int)v22 >= (int)&stru_7F3718 )
      goto LABEL_56;
  }
  COM_SafeRelease((int *)ppv);
LABEL_56:
  RegisterClassesCOM();
  CoRegisterClassObject(&rguid, (LPUNKNOWN)&HouseClass_Player[43900], 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v27 = (TClassFactory_VCStreamClass__ *)operator new(8u);
  if ( v27 )
    v28 = (IUnknown *)ClassFactory_CStream::Construct(v27);
  IUnknown *v28 = 0;
  CoRegisterClassObject(&stru_7E9540, v28, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v29 = (TClassFactory_VWaveClass__ *)operator new(8u);
  if ( v29 )
    v30 = (IUnknown *)ClassFactory_Wave::Construct(v29);
  IUnknown *v30 = 0;
  CoRegisterClassObject(&stru_7E9720, v30, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v31 = (TClassFactory_VTerrainTypeClass__ *)operator new(8u);
  if ( v31 )
    v32 = (IUnknown *)COMClassFactory_3::Construct(v31);
  IUnknown *v32 = 0;
  CoRegisterClassObject(&stru_7E95E0, v32, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v33 = (TClassFactory_VTerrainClass__ *)operator new(8u);
  if ( v33 )
    v34 = (IUnknown *)COMClassFactory_4::Construct(v33);
  IUnknown *v34 = 0;
  CoRegisterClassObject(&stru_7E9740, v34, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v35 = (TClassFactory_VSuperWeaponTypeClass__ *)operator new(8u);
  if ( v35 )
    v36 = (IUnknown *)COMClassFactory_5::Construct(v35);
  IUnknown *v36 = 0;
  CoRegisterClassObject(&stru_7E9570, v36, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v37 = (TClassFactory_VSuperClass__ *)operator new(8u);
  if ( v37 )
    v38 = (IUnknown *)COMClassFactory_6::Construct(v37);
  IUnknown *v38 = 0;
  CoRegisterClassObject(&stru_7E9580, v38, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v39 = (TClassFactory_VTactical__ *)operator new(8u);
  if ( v39 )
    v40 = (IUnknown *)COMClassFactory_7::Construct(v39);
  IUnknown *v40 = 0;
  CoRegisterClassObject(&stru_7E9950, v40, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v41 = (TClassFactory_VCellClass__ *)operator new(8u);
  if ( v41 )
    v42 = (IUnknown *)COMClassFactory_8::Construct(v41);
  IUnknown *v42 = 0;
  CoRegisterClassObject(&stru_7E9930, v42, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v43 = (TClassFactory_VEMPulseClass__ *)operator new(8u);
  if ( v43 )
    v44 = (IUnknown *)COMClassFactory_9::Construct(v43);
  IUnknown *v44 = 0;
  CoRegisterClassObject(&stru_7E9940, v44, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v45 = (TClassFactory_VLightSourceClass__ *)operator new(8u);
  if ( v45 )
    v46 = (IUnknown *)COMClassFactory_10::Construct(v45);
  IUnknown *v46 = 0;
  CoRegisterClassObject(&stru_7E98F0, v46, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v47 = (TClassFactory_VSideClass__ *)operator new(8u);
  if ( v47 )
    v48 = (IUnknown *)WinMain_Helper_6BFD40(v47);
  IUnknown *v48 = 0;
  CoRegisterClassObject(&stru_7E9910, v48, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v49 = (TClassFactory_VTiberiumClass__ *)operator new(8u);
  if ( v49 )
    v50 = (IUnknown *)WinMain_Helper_6BFEC0(v49);
  IUnknown *v50 = 0;
  CoRegisterClassObject(&stru_7E9920, v50, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v51 = (TClassFactory_VTubeClass__ *)operator new(8u);
  if ( v51 )
    v52 = (IUnknown *)WinMain_Helper_6C0040(v51);
  IUnknown *v52 = 0;
  CoRegisterClassObject(&stru_7E9750, v52, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v53 = (TClassFactory_VCampaignClass__ *)operator new(8u);
  if ( v53 )
    v54 = (IUnknown *)WinMain_Helper_6C01C0(v53);
  IUnknown *v54 = 0;
  CoRegisterClassObject(&stru_7E9900, v54, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v55 = (TClassFactory_VBuildingLightClass__ *)operator new(8u);
  if ( v55 )
    v56 = (IUnknown *)WinMain_Helper_6C0340(v55);
  IUnknown *v56 = 0;
  CoRegisterClassObject(&stru_7E9730, v56, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v57 = (TClassFactory_VWaypointPathClass__ *)operator new(8u);
  if ( v57 )
    v58 = (IUnknown *)WinMain_Helper_6C04C0(v57);
  IUnknown *v58 = 0;
  CoRegisterClassObject(&stru_7E9850, v58, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v59 = (TClassFactory_VTemporalClass__ *)operator new(8u);
  if ( v59 )
    v60 = (IUnknown *)WinMain_Helper_6C0640(v59);
  IUnknown *v60 = 0;
  CoRegisterClassObject(&stru_7E98D0, v60, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v61 = (TClassFactory_VAirstrikeClass__ *)operator new(8u);
  if ( v61 )
    v62 = (IUnknown *)WinMain_Helper_6C07C0(v61);
  IUnknown *v62 = 0;
  CoRegisterClassObject(&stru_7E98E0, v62, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v63 = (TClassFactory_VSpawnManagerClass__ *)operator new(8u);
  if ( v63 )
    v64 = (IUnknown *)WinMain_Helper_6C0940(v63);
  IUnknown *v64 = 0;
  CoRegisterClassObject(&stru_7E9860, v64, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v65 = (TClassFactory_VSlaveManagerClass__ *)operator new(8u);
  if ( v65 )
    Instance = (IUnknown *)COMClassFactory::CreateInstance(v65);
  else
    Instance = 0;
  CoRegisterClassObject(&stru_7E9870, Instance, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v67 = (TClassFactory_VCaptureManagerClass__ *)operator new(8u);
  if ( v67 )
    v68 = (IUnknown *)WinMain_Helper_6C0C40(v67);
  IUnknown *v68 = 0;
  CoRegisterClassObject(&stru_7E9880, v68, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v69 = (TClassFactory_VDiskLaserClass__ *)operator new(8u);
  if ( v69 )
    v70 = (IUnknown *)WinMain_Helper_6C0DC0(v69);
  IUnknown *v70 = 0;
  CoRegisterClassObject(&stru_7E9890, v70, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v71 = (TClassFactory_VParasiteClass__ *)operator new(8u);
  if ( v71 )
    v72 = (IUnknown *)WinMain_Helper_6C0F40(v71);
  IUnknown *v72 = 0;
  CoRegisterClassObject(&stru_7E98A0, v72, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v73 = (TClassFactory_VBombClass__ *)operator new(8u);
  if ( v73 )
    v74 = (IUnknown *)WinMain_Helper_6C10C0(v73);
  IUnknown *v74 = 0;
  CoRegisterClassObject(&stru_7E98B0, v74, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v75 = (TClassFactory_VRadSiteClass__ *)operator new(8u);
  if ( v75 )
    v76 = (IUnknown *)WinMain_Helper_6C1240(v75);
  IUnknown *v76 = 0;
  CoRegisterClassObject(&stru_7E98C0, v76, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v77 = (TClassFactory_VTEventClass__ *)operator new(8u);
  if ( v77 )
    v78 = (IUnknown *)WinMain_Helper_6C13C0(v77);
  IUnknown *v78 = 0;
  CoRegisterClassObject(&stru_7E9810, v78, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v79 = (TClassFactory_VVoxelAnimTypeClass__ *)operator new(8u);
  if ( v79 )
    v80 = (IUnknown *)WinMain_Helper_6C1540(v79);
  IUnknown *v80 = 0;
  CoRegisterClassObject(&stru_7E9790, v80, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v81 = (TClassFactory_VVoxelAnimClass__ *)operator new(8u);
  if ( v81 )
    v82 = (IUnknown *)WinMain_Helper_6C16C0(v81);
  IUnknown *v82 = 0;
  CoRegisterClassObject(&stru_7E9650, v82, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v83 = (TClassFactory_VTActionClass__ *)operator new(8u);
  if ( v83 )
    v84 = (IUnknown *)WinMain_Helper_6C1840(v83);
  IUnknown *v84 = 0;
  CoRegisterClassObject(&stru_7E9800, v84, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v85 = (TClassFactory_VTriggerClass__ *)operator new(8u);
  if ( v85 )
    v86 = (IUnknown *)WinMain_Helper_6C19C0(v85);
  IUnknown *v86 = 0;
  CoRegisterClassObject(&stru_7E97E0, v86, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v87 = (TClassFactory_VTriggerTypeClass__ *)operator new(8u);
  if ( v87 )
    v88 = (IUnknown *)WinMain_Helper_6C1B40(v87);
  IUnknown *v88 = 0;
  CoRegisterClassObject(&stru_7E97F0, v88, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v89 = (TClassFactory_VScriptClass__ *)operator new(8u);
  if ( v89 )
    v90 = (IUnknown *)WinMain_Helper_6C1CC0(v89);
  IUnknown *v90 = 0;
  CoRegisterClassObject(&stru_7E97A0, v90, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v91 = (TClassFactory_VScriptTypeClass__ *)operator new(8u);
  if ( v91 )
    v92 = (IUnknown *)WinMain_Helper_6C1E40(v91);
  IUnknown *v92 = 0;
  CoRegisterClassObject(&stru_7E97B0, v92, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v93 = (TClassFactory_VTagClass__ *)operator new(8u);
  if ( v93 )
    v94 = (IUnknown *)WinMain_Helper_6C1FC0(v93);
  IUnknown *v94 = 0;
  CoRegisterClassObject(&stru_7E97C0, v94, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v95 = (TClassFactory_VTagTypeClass__ *)operator new(8u);
  if ( v95 )
    v96 = (IUnknown *)WinMain_Helper_6C2140(v95);
  IUnknown *v96 = 0;
  CoRegisterClassObject(&stru_7E97D0, v96, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v97 = (TClassFactory_VTeamClass__ *)operator new(8u);
  if ( v97 )
    v98 = (IUnknown *)WinMain_Helper_6C22C0(v97);
  IUnknown *v98 = 0;
  CoRegisterClassObject(&stru_7E9760, v98, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v99 = (TClassFactory_VTeamTypeClass__ *)operator new(8u);
  if ( v99 )
    v100 = (IUnknown *)WinMain_Helper_6C2440(v99);
  IUnknown *v100 = 0;
  CoRegisterClassObject(&stru_7E9780, v100, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v101 = (TClassFactory_VTaskForceClass__ *)operator new(8u);
  if ( v101 )
    v102 = (IUnknown *)WinMain_Helper_6C25C0(v101);
  IUnknown *v102 = 0;
  CoRegisterClassObject(&stru_7E9770, v102, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v103 = (TClassFactory_VUnitTypeClass__ *)operator new(8u);
  if ( v103 )
    v104 = (IUnknown *)WinMain_Helper_6C2740(v103);
  IUnknown *v104 = 0;
  CoRegisterClassObject(&stru_7E9590, v104, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v105 = (TClassFactory_VBuildingTypeClass__ *)operator new(8u);
  if ( v105 )
    v106 = (IUnknown *)WinMain_Helper_6C28C0(v105);
  IUnknown *v106 = 0;
  CoRegisterClassObject(&stru_7E95C0, v106, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v107 = (TClassFactory_VAircraftTypeClass__ *)operator new(8u);
  if ( v107 )
    v108 = (IUnknown *)WinMain_Helper_6C2A40(v107);
  IUnknown *v108 = 0;
  CoRegisterClassObject(&stru_7E95B0, v108, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v109 = (TClassFactory_VInfantryTypeClass__ *)operator new(8u);
  if ( v109 )
    v110 = (IUnknown *)WinMain_Helper_6C2BC0(v109);
  IUnknown *v110 = 0;
  CoRegisterClassObject(&stru_7E95A0, v110, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v111 = (TClassFactory_VBulletTypeClass__ *)operator new(8u);
  if ( v111 )
    v112 = (IUnknown *)WinMain_Helper_6C2D40(v111);
  IUnknown *v112 = 0;
  CoRegisterClassObject(&stru_7E95D0, v112, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v113 = (TClassFactory_VIsometricTileTypeClass__ *)operator new(8u);
  if ( v113 )
    v114 = (IUnknown *)WinMain_Helper_6C2EC0(v113);
  IUnknown *v114 = 0;
  CoRegisterClassObject(&stru_7E95F0, v114, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v115 = (TClassFactory_VOverlayTypeClass__ *)operator new(8u);
  if ( v115 )
    v116 = (IUnknown *)WinMain_Helper_6C3040(v115);
  IUnknown *v116 = 0;
  CoRegisterClassObject(&stru_7E9600, v116, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v117 = (TClassFactory_VSmudgeTypeClass__ *)operator new(8u);
  if ( v117 )
    v118 = (IUnknown *)WinMain_Helper_6C31C0(v117);
  IUnknown *v118 = 0;
  CoRegisterClassObject(&stru_7E9610, v118, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v119 = (TClassFactory_VUnitClass__ *)operator new(8u);
  if ( v119 )
    v120 = (IUnknown *)WinMain_Helper_6C3340(v119);
  IUnknown *v120 = 0;
  CoRegisterClassObject(&stru_7E96F0, v120, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v121 = (TClassFactory_VBuildingClass__ *)operator new(8u);
  if ( v121 )
    v122 = (IUnknown *)WinMain_Helper_6C34C0(v121);
  IUnknown *v122 = 0;
  CoRegisterClassObject(&stru_7E96A0, v122, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v123 = (TClassFactory_VAircraftClass__ *)operator new(8u);
  if ( v123 )
    v124 = (IUnknown *)WinMain_Helper_6C3640(v123);
  IUnknown *v124 = 0;
  CoRegisterClassObject(&stru_7E9660, v124, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v125 = (TClassFactory_VInfantryClass__ *)operator new(8u);
  if ( v125 )
    v126 = (IUnknown *)WinMain_Helper_6C37C0(v125);
  IUnknown *v126 = 0;
  CoRegisterClassObject(&stru_7E9680, v126, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v127 = (TClassFactory_VAnimClass__ *)operator new(8u);
  if ( v127 )
    v128 = (IUnknown *)WinMain_Helper_6C3940(v127);
  IUnknown *v128 = 0;
  CoRegisterClassObject(&stru_7E9670, v128, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v129 = (TClassFactory_VAnimTypeClass__ *)operator new(8u);
  if ( v129 )
    v130 = (IUnknown *)WinMain_Helper_6C3AC0(v129);
  IUnknown *v130 = 0;
  CoRegisterClassObject(&stru_7E9620, v130, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v131 = (TClassFactory_VHouseTypeClass__ *)operator new(8u);
  if ( v131 )
    v132 = (IUnknown *)WinMain_Helper_6C3C40(v131);
  IUnknown *v132 = 0;
  CoRegisterClassObject(&stru_7E9630, v132, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v133 = (TClassFactory_VHouseClass__ *)operator new(8u);
  if ( v133 )
    v134 = (IUnknown *)WinMain_Helper_6C3DC0(v133);
  IUnknown *v134 = 0;
  CoRegisterClassObject(&stru_7E9560, v134, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v135 = (TClassFactory_VDriveLocomotionClass__ *)operator new(8u);
  if ( v135 )
    v136 = (IUnknown *)WinMain_Helper_6C3F40(v135);
  IUnknown *v136 = 0;
  CoRegisterClassObject(&stru_7E9A30, v136, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v137 = (TClassFactory_VJumpjetLocomotionClass__ *)operator new(8u);
  if ( v137 )
    v138 = (IUnknown *)WinMain_Helper_6C40C0(v137);
  IUnknown *v138 = 0;
  CoRegisterClassObject(&g_CLSID_JumpjetLocomotion, v138, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v139 = (TClassFactory_VHoverLocomotionClass__ *)operator new(8u);
  if ( v139 )
    v140 = (IUnknown *)WinMain_Helper_6C4240(v139);
  IUnknown *v140 = 0;
  CoRegisterClassObject(&stru_7E9A40, v140, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v141 = (TClassFactory_VRocketLocomotionClass__ *)operator new(8u);
  if ( v141 )
    v142 = (IUnknown *)WinMain_Helper_6C43C0(v141);
  IUnknown *v142 = 0;
  CoRegisterClassObject(&g_CLSID_ShipLocomotion, v142, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v143 = (TClassFactory_VTunnelLocomotionClass__ *)operator new(8u);
  if ( v143 )
    v144 = (IUnknown *)WinMain_Helper_6C4540(v143);
  IUnknown *v144 = 0;
  CoRegisterClassObject(&stru_7E9A50, v144, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v145 = (TClassFactory_VWalkLocomotionClass__ *)operator new(8u);
  if ( v145 )
    v146 = (IUnknown *)WinMain_Helper_6C46C0(v145);
  IUnknown *v146 = 0;
  CoRegisterClassObject(&g_CLSID_WalkLocomotion, v146, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v147 = (TClassFactory_VDropPodLocomotionClass__ *)operator new(8u);
  if ( v147 )
    v148 = (IUnknown *)WinMain_Helper_6C4840(v147);
  IUnknown *v148 = 0;
  CoRegisterClassObject(&g_CLSID_DriveLocomotion, v148, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v149 = (TClassFactory_VFlyLocomotionClass__ *)operator new(8u);
  if ( v149 )
    v150 = (IUnknown *)WinMain_Helper_6C49C0(v149);
  IUnknown *v150 = 0;
  CoRegisterClassObject(&g_CLSID_FlyLocomotion, v150, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v151 = (TClassFactory_VTeleportLocomotionClass__ *)operator new(8u);
  if ( v151 )
    v152 = (IUnknown *)WinMain_Helper_6C4B40(v151);
  IUnknown *v152 = 0;
  CoRegisterClassObject(&g_CLSID_HoverLocomotion, v152, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v153 = (TClassFactory_VMechLocomotionClass__ *)operator new(8u);
  if ( v153 )
    v154 = (IUnknown *)WinMain_Helper_6C4CC0(v153);
  IUnknown *v154 = 0;
  CoRegisterClassObject(&g_CLSID_TunnelLocomotion, v154, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v155 = (TClassFactory_VShipLocomotionClass__ *)operator new(8u);
  if ( v155 )
    v156 = (IUnknown *)WinMain_Helper_6C4E40(v155);
  IUnknown *v156 = 0;
  CoRegisterClassObject(&g_CLSID_DriveLocomotion2, v156, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v157 = (TClassFactory_VBulletClass__ *)operator new(8u);
  if ( v157 )
    v158 = (IUnknown *)WinMain_Helper_6C4FC0(v157);
  IUnknown *v158 = 0;
  CoRegisterClassObject(&rclsid, v158, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v159 = (TClassFactory_VFactoryClass__ *)operator new(8u);
  if ( v159 )
    v160 = (IUnknown *)WinMain_Helper_6C5140(v159);
  IUnknown *v160 = 0;
  CoRegisterClassObject(&stru_7E9820, v160, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v161 = (TClassFactory_VWarheadTypeClass__ *)operator new(8u);
  if ( v161 )
    v162 = (IUnknown *)WinMain_Helper_6C52C0(v161);
  IUnknown *v162 = 0;
  CoRegisterClassObject(&stru_7E9840, v162, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v163 = (TClassFactory_VWeaponTypeClass__ *)operator new(8u);
  if ( v163 )
    v164 = (IUnknown *)WinMain_Helper_6C5440(v163);
  IUnknown *v164 = 0;
  CoRegisterClassObject(&stru_7E9830, v164, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v165 = (TClassFactory_VParticleClass__ *)operator new(8u);
  if ( v165 )
    v166 = (IUnknown *)WinMain_Helper_6C55C0(v165);
  IUnknown *v166 = 0;
  CoRegisterClassObject(&stru_7E9700, v166, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v167 = (TClassFactory_VParticleTypeClass__ *)operator new(8u);
  if ( v167 )
    v168 = (IUnknown *)WinMain_Helper_6C5740(v167);
  IUnknown *v168 = 0;
  CoRegisterClassObject(&stru_7E9710, v168, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v169 = (TClassFactory_VParticleSystemClass__ *)operator new(8u);
  if ( v169 )
    v170 = (IUnknown *)WinMain_Helper_6C58C0(v169);
  IUnknown *v170 = 0;
  CoRegisterClassObject(&stru_7E96C0, v170, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v171 = (TClassFactory_VParticleSystemTypeClass__ *)operator new(8u);
  if ( v171 )
    v172 = (IUnknown *)WinMain_Helper_6C5A40(v171);
  IUnknown *v172 = 0;
  CoRegisterClassObject(&stru_7E96D0, v172, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v173 = (TClassFactory_VAITriggerTypeClass__ *)operator new(8u);
  if ( v173 )
    v174 = (IUnknown *)WinMain_Helper_6C5BC0(v173);
  IUnknown *v174 = 0;
  CoRegisterClassObject(&stru_7E9960, v174, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v175 = (TClassFactory_VNeuronClass__ *)operator new(8u);
  if ( v175 )
    v176 = (IUnknown *)WinMain_Helper_6C5D40(v175);
  IUnknown *v176 = 0;
  CoRegisterClassObject(&stru_7E9980, v176, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v177 = (TClassFactory_VFoggedObjectClass__ *)operator new(8u);
  if ( v177 )
    v178 = (IUnknown *)WinMain_Helper_6C5EC0(v177);
  IUnknown *v178 = 0;
  CoRegisterClassObject(&stru_7E9990, v178, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  v179 = (TClassFactory_VAlphaShapeClass__ *)operator new(8u);
  if ( v179 )
    v180 = (IUnknown *)WinMain_Helper_6C6040(v179);
  IUnknown *v180 = 0;
  CoRegisterClassObject(&stru_7E99A0, v180, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488[26624], &dwRegister);
  RegisterActiveObject(&unk_89A29C, &rguid, 1u, (DWORD *)&stru_B05488[26724]);
  if ( IDA_LOBYTE(dwRegister.field_8) )
  {
    v205 = GetStringCSF( (wchar_t *)(g_Str_TXT_SHORT_TITLE), 0, (const char *)(&stru_830620[67564]), 1618);
    v181 = GetStringCSF( (wchar_t *)&stru_830620[67500], 0, (const char *)(&stru_830620[67564]), 1618);
    WideMessageBox(0, v181, v205, 0x30u);
    if ( IDA_LOBYTE(dwRegister.field_8) )
      exit(1);
  }
  Debug::Log();
  Debug::Log();
  WinMain_Helper_65C250(
    &v212,
    (int)"[PublicKey]\n1=AihRvNoIbTn85FZRYNZRcT+i6KpU+maCsEqr3Q5q+LDB5tH7Tz2qQ38V\n\n",
    (MixFileClass *)strlen("[PublicKey]\n1=AihRvNoIbTn85FZRYNZRcT+i6KpU+maCsEqr3Q5q+LDB5tH7Tz2qQ38V\n\n"));
  INIClass::INIClass(v213);
  Debug::Log();
  ((FileStraw *)(v213))->Open((int)&v212, 0);
  Debug::Log();
  qmemcpy(&stru_87C374[42508], WinMain_Init(v213, v211, 1), 0x204u);
  HashTable_flat::DestroyHashTableINIClass(v213);
  WinMain_Helper_65C2A0(&v212);
  int v182 = dword_81C1D0;
  SetSoundWarning(-2);
  unsigned int * v183 = (unsigned int *)operator new(0x28u);
  if ( v183 )
    *(unsigned int *)&stru_87C374[35472] = ((MixFileClass*)v183)->FromFile((MixFileClass *)&stru_830620[67388], (int)&stru_87C374[42508]);
  else
    *(unsigned int *)&stru_87C374[35472] = 0;
  unsigned int * v184 = (unsigned int *)operator new(0x28u);
  if ( v184 )
    *(unsigned int *)&stru_87C374[35468] = ((MixFileClass*)v184)->FromFile((MixFileClass *)&stru_830620[67372], (int)&stru_87C374[42508]);
  else
    *(unsigned int *)&stru_87C374[35468] = 0;
  SetSoundWarning(v182);
  atexit(WinMainSetup);
  WinMain_Helper_7B84F0();
  if ( !CSFClass::LoadFile(&stru_830620[67360]) )
  {
    MessageBoxA(0, &stru_830620[67128], &stru_830620[67348], 0x10u);
    return 0;
  }
  IDA_LOBYTE(v185) = 1;
  if ( !_do_always_noconv_codecvt_base_std__MBE_NXZ_3(v185) )
    return 0;
  if ( !GetSystemMetrics(19) || !GetSystemMetrics(43) )
  {
    v209 = GetStringCSF( (wchar_t *)(g_Str_TXT_SHORT_TITLE), 0, (const char *)(&stru_830620[67564]), 1999);
    v204 = GetStringCSF( (wchar_t *)&stru_830620[66984], 0, (const char *)(&stru_830620[67564]), 1999);
    WideMessageBox(0, v204, v209, 0x10u);
    exit(1);
  }
  if ( (unsigned int)sub_4AECD0(&stru_830620[67112]) < 0x40046 )
  {
    v186 = GetStringCSF( (wchar_t *)&stru_830620[67096], 0, (const char *)(&stru_830620[67564]), 2009);
    swprintf(Buffer, (const size_t)v186, (const wchar_t *const)&stru_830620[67112], (CampaignScore *)4);
    v187 = GetStringCSF( (wchar_t *)(g_Str_TXT_SHORT_TITLE), 0, (const char *)(&stru_830620[67564]), 2010);
    WideMessageBox(0, Buffer, v187, 0x10u);
    exit(1);
  }
  RegisterActiveObject((IUnknown *)&stru_87C374[13428], &rguid, 1u, (DWORD *)&stru_830620[66644]);
  if ( *(unsigned int *)&HouseClass_Player[44600] == -1 || *(unsigned int *)&HouseClass_Player[44604] == -1 )
  {
    bool v188 = stru_87C374[45745] && *(int *)&stru_87C374[45604] < 5;
    if ( v188 || sub_4A4130() > 0x200000 )
    {
      *(unsigned int *)&HouseClass_Player[44600] = 800;
      *(unsigned int *)&HouseClass_Player[44604] = 600;
    }
    else
    {
      *(unsigned int *)&HouseClass_Player[44600] = 640;
      *(unsigned int *)&HouseClass_Player[44604] = 480;
    }
  }
  if ( HouseClass_Player[45079] )
  {
    InitWindowCreation((ObjectClass *)hInstance, nShowCmd, 640, 480);
    sub_4A3FD0();
    if ( stru_89E138[6208] )
    {
      *(unsigned int *)&stru_87C374[44092] = 0;
      *(unsigned int *)&stru_87C374[44096] = 0;
      *(unsigned int *)&stru_87C374[44100] = 640;
      *(unsigned int *)&stru_87C374[44104] = 480;
      *(unsigned int *)&stru_89E138[8044] = 640;
      *(unsigned int *)&stru_89E138[8048] = 480;
      *(unsigned int *)&stru_89E138[8052] = g_Is16BitMode != 0 ? 16 : 8;
    }
    else
    {
aP2.location[0] = (uint8_t)InitializeDDraw( (int)g_hWnd, (int)((ObjectClass *)0x280), 0x1E0u, g_Is16BitMode != 0 ? 16 : 8);




      *(unsigned int *)&stru_87C374[44092] = 0;
      *(unsigned int *)&stru_87C374[44096] = 0;
      *(unsigned int *)&stru_87C374[44100] = 640;
      *(unsigned int *)&stru_87C374[44104] = 480;
      if ( !aP2.location[0] )
      {
        sub_4A40C0();
        v206 = GetStringCSF( (wchar_t *)(g_Str_TXT_SHORT_TITLE), 0, (const char *)(&stru_830620[67564]), 2160);
        v189 = GetStringCSF( (wchar_t *)&stru_830620[67068], 0, (const char *)(&stru_830620[67564]), 2159);
        WideMessageBox((CampaignScore *)g_hWnd, v189, v206, 0x30u);
        exit(1);
      }
    }
  }
  else
  {
    InitWindowCreation(
      (ObjectClass *)hInstance,
      nShowCmd,
      *(int *)&HouseClass_Player[44608],
      *(int *)&HouseClass_Player[44612]);
    sub_4A3FD0();
    if ( stru_89E138[6208] )
    {
      *(unsigned int *)&stru_87C374[44092] = 0;
      *(unsigned int *)&stru_87C374[44096] = 0;
      *(unsigned int *)&stru_87C374[44100] = *(unsigned int *)&HouseClass_Player[44608];
      *(unsigned int *)&stru_87C374[44104] = *(unsigned int *)&HouseClass_Player[44612];
      *(unsigned int *)&stru_89E138[8044] = *(unsigned int *)&HouseClass_Player[44608];
      *(unsigned int *)&stru_89E138[8048] = *(unsigned int *)&HouseClass_Player[44612];
      *(unsigned int *)&stru_89E138[8052] = g_Is16BitMode != 0 ? 16 : 8;
    }
    else
    {
      edi325 = (uint8_t)InitializeDDraw(
                                  (int)g_hWnd,
                                  *(ObjectClass **)&HouseClass_Player[44608],
                                  *(DWORD *)&HouseClass_Player[44612],
                                  g_Is16BitMode != 0 ? 16 : 8);
      *(unsigned int *)&stru_87C374[44092] = 0;
      *(unsigned int *)&stru_87C374[44096] = 0;
      *(unsigned int *)&stru_87C374[44100] = *(unsigned int *)&HouseClass_Player[44608];
      *(unsigned int *)&stru_87C374[44104] = *(unsigned int *)&HouseClass_Player[44612];
      if ( !edi325 )
      {
        if ( *(unsigned int *)&HouseClass_Player[44600] != 640
          || *(unsigned int *)&HouseClass_Player[44604] != 480 )
        {
          *(unsigned int *)&HouseClass_Player[44600] = 640;
          *(unsigned int *)&HouseClass_Player[44604] = 480;
edi325 = (uint8_t)InitializeDDraw( (int)g_hWnd, (int)((ObjectClass *)0x280), 0x1E0u, g_Is16BitMode != 0 ? 16 : 8);




          *(unsigned int *)&stru_87C374[44092] = 0;
          *(unsigned int *)&stru_87C374[44096] = 0;
          *(unsigned int *)&stru_87C374[44100] = *(unsigned int *)&HouseClass_Player[44600];
          *(unsigned int *)&stru_87C374[44104] = *(unsigned int *)&HouseClass_Player[44604];
        }
        if ( !edi325 )
        {
          sub_4A40C0();
          v207 = GetStringCSF( (wchar_t *)(g_Str_TXT_SHORT_TITLE), 0, (const char *)(&stru_830620[67564]), 2216);
          v191 = GetStringCSF( (wchar_t *)&stru_830620[67068], 0, (const char *)(&stru_830620[67564]), 2215);
          WideMessageBox((CampaignScore *)g_hWnd, v191, v207, 0x30u);
          exit(1);
        }
      }
    }
  }
  if ( *(unsigned int *)&HouseClass_Player[47672] && InitializeAudioStreaming(1000, 102400) )
  {
    if ( *(unsigned int *)&HouseClass_Player[47672] == 1 )
    {
      WinMain_Helper_53E4F0(&stru_830620[67084]);
    }
    else if ( *(unsigned int *)&HouseClass_Player[47672] == 2 )
    {
      WinMain_Write(&stru_830620[67084]);
    }
  }
  *(unsigned int *)&stru_87C374[44948] = ((DSurface *)0)->CreatePrimary();
  eax333 = (*(int (**)(unsigned int))(**(unsigned int **)&stru_87C374[44948] + 112))(*(unsigned int *)&stru_87C374[44948]);
  g_Is16BitMode = eax333 == 2;
  if ( eax333 != 2 )
  {
    v208 = GetStringCSF( (wchar_t *)(g_Str_TXT_SHORT_TITLE), 0, (const char *)(&stru_830620[67564]), 2245);
    v193 = GetStringCSF( (wchar_t *)&stru_830620[67052], 0, (const char *)(&stru_830620[67564]), 2245);
    WideMessageBox((CampaignScore *)g_hWnd, v193, v208, 0x30u);
    GameClass::Shutdown();
  }
  do
    MessageLoop();
  while ( !HouseClass_Player[45108] );
  if ( !CopyProtection::NotifyLauncher() )
  {
    Debug::Log();
    exit(1);
  }
  do
    MessageLoop();
  while ( !HouseClass_Player[45108] );
  stru_89E138[8040] = 0;
  if ( !stru_89E138[6208] )
    (*(void (**)(unsigned int, unsigned int))(**(unsigned int **)&stru_87C374[44948] + 24))(
      *(unsigned int *)&stru_87C374[44948],
      0);
  WinMain_Create(g_hInstance, g_hWnd, stru_89E138[6208]);
  WinMain_Helper_637070();
  nullsub_18();
  if ( stru_89E138[11447] )
  {
    if ( !sub_4C1600() )
      goto LABEL_345;
    DDraw::CleanupSurfaces();
    stru_89E138[11447] = 0;
  }
  stru_89E138[11448] = 0;
LABEL_345:
  aP2.NeedsSaveOrLink = 0;
  aP2.objectTypeFlags = 0;
  aP2.owningHouseIndex = 168;
  aP2.fallRate = *(unsigned int *)&stru_87C374[44104];
  aP2.uniqueId = 0;
  aP2.abstractFlags = 0;
  aP2.nextArrayIndex = *(unsigned int *)&stru_87C374[44100] - 168;
  aP2.referenceCount = *(unsigned int *)&stru_87C374[44104];
  *(unsigned int *)aP2[0] = 0;
  *(unsigned int *)&aP2[4] = 0;
  *(unsigned int *)&aP2[8] = *(unsigned int *)&stru_87C374[44100] - 168;
  *(unsigned int *)&aP2[12] = *(unsigned int *)&stru_87C374[44104];
AllocateSurfaceScreenSurfaces( (int)&stru_87C374[44092], (ObjectClass *)(&aP2), (ObjectClass *)&aP2.uniqueId, (int)&aP2.NeedsSaveOrLink, 0);





  if ( stru_89E138[11447] && InitializeRadialGradientTexture() )
  {
    DDraw::CleanupSurfaces();
    stru_89E138[11447] = 0;
    stru_89E138[11448] = 0;
  }
  *(unsigned int *)&stru_87C374[44960] = *(unsigned int *)&stru_87C374[44952];
  IDA_LOBYTE(v194) = 1;
  Frame::Present(v194, 0);
  unsigned int * v195 = (unsigned int *)operator new(0x30u);
  unsigned int *v196; // eax
  if ( v195 )
    v196 = BSurface::ConstructEx(
             v195,
             *(int *)&stru_87C374[44076],
             *(int *)&stru_87C374[44080],
             480,
             480 - *(unsigned int *)&stru_87C374[44080]);
  else
    v196 = 0;
  *(unsigned int *)&stru_87C374[45776] = v196;
  v197 = aP1;
  v196[9] = 0x8000;
  unsigned int * v198 = (unsigned int *)operator new(0x30u);
  if ( v198 )
  {
    *(unsigned int *)&stru_87C374[9520] = BSurface::Construct(
                                                 v198,
                                                 *(int *)&stru_87C374[44076],
                                                 *(int *)&stru_87C374[44080],
                                                 480,
                                                 480 - *(unsigned int *)&stru_87C374[44080]);
    v197 = aP1;
  }
  else
  {
    *(unsigned int *)&stru_87C374[9520] = 0;
  }
  unsigned int * v199 = (unsigned int *)operator new(0x98u);
  if ( v199 )
    v190 = (MouseClass *)MouseClass::Construct(
                           v199,
                           *(ObjectClass **)&stru_87C374[44948],
                           (IUnknown *)g_hWnd);
  else
    v190 = 0;
  *(unsigned int *)&stru_87C374[45772] = v190;
  (*(void (**)(MouseClass *))(v190->field_0 + 12))(v190);
  *(unsigned int *)&HouseClass_Player[44040] = 0;
  if ( *(unsigned int *)&HouseClass_Player[44036] )
  {
    v201 = *(unsigned int *)&HouseClass_Player[43932];
    *(unsigned int *)&HouseClass_Player[44040] = 1;
  }
  else
  {
    v201 = -1;
  }
  CD::SetCurrentInstance((void *)v201);
  Performance::Profile();
  *(unsigned int *)&HouseClass_Player[44052] = *(unsigned int *)&HouseClass_Player[44052] & 0xFFFFFFFB
                                                  | (4
                                                   * (INIClass::ReadBool_Overwrite(
                                                        (int)&stru_87C374[44364],
                                                        (uint8_t *)&g_INI_Key_Intro,
                                                        (CCINIClass *)&stru_830620[67016],
                                                        1)
                                                    & 1));
  aP2.location[1] = 0;
  IDA_LOBYTE(aP2.location[2]) = 0;
  ReadRegistryOptionsWOL(&aP2.location[1]);
  if ( !((InfantryClass *)&aP2.location[1])->SetField6()
    && !WinMain_Helper(&aP2.location[1])
    && !((Flag *)(&aP2.location[1]))->IsNot2() )
  {
    v192 = *(ObjectClass **)&HouseClass_Player[44052];
    IDA_LOBYTE(v192) = HouseClass_Player[44052] | 8;
    *(unsigned int *)&HouseClass_Player[44052] = v192;
  }
  if ( (HouseClass_Player[44052] & 4) == 4 )
  {
    INIClass::SetBool(&stru_87C374[44364], &g_INI_Key_Intro, &stru_830620[67016], 0);
    (*(void (**)(CCINIClass *))(*(unsigned int *)v197->__pad_0 + 52))(v197);
    (*(void (**)(CCINIClass *, int))(*(unsigned int *)v197->__pad_0 + 28))(v197, 1);
    INIClass::WriteDigest(&stru_87C374[44364], v197, 0);
  }
  (*(void (**)(CCINIClass *))(*(unsigned int *)v197->__pad_0 + 52))(v197);
  if ( v197 )
    (**(void (***)(CCINIClass *, int))v197->__pad_0)(v197, 1);
  if ( HouseClass_Player[47712] )
  {
    MainGame();
  }
  else
  {
    ms_exc.registration.TryLevel = 0;
    Debug::Log();
    MainGame();
    ms_exc.registration.TryLevel = -1;
    SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)TopLevelExceptionFilter);
  }
  (*(void (**)(unsigned int))(**(unsigned int **)&stru_87C374[45772] + 12))(*(unsigned int *)&stru_87C374[45772]);
  (*(void (**)(unsigned int, unsigned int))(**(unsigned int **)&stru_87C374[44952] + 24))(
    *(unsigned int *)&stru_87C374[44952],
    0);
  IDA_LOBYTE(v203) = 1;
  Frame::Present(v203, 0);
  *(unsigned int *)&HouseClass_Player[45196] = 1;
  ((ThemeManager *)(int)&g_BuildingTypeClass_Count)->Cleanup();
  Audio::Shutdown();
  PostMessageA(g_hWnd, 2u, 0, 0);
  do
    MessageLoop();
  while ( *(unsigned int *)&HouseClass_Player[45196] == 1 );
  v10 = 0;
LABEL_374:
  WinMain_Helper_5D7E50();
  WinMainSetup_Setup_65FD50();
  TacticalClass::CleanupResources();
  WinMainSetup_Setup_626FF0();
  _ioterm();
  ObjectTypeClass::UnloadPipsSHP();
  nullsub_31();
  j_PlanningNodeClass_CleanupAll();
  WinMainSetup_Setup_72AC40();
  WinMainSetup_Setup_730970();
  LoadProgressMgr::Destroy();
  WinMainSetup_Setup_5BE940();
  WinMainSetup_Setup_5DB6F0();
  if ( *(unsigned int *)&stru_830620[66644] != -1 )
  {
    RevokeActiveObject(*(DWORD *)&stru_830620[66644], 0);
    *(unsigned int *)&stru_830620[66644] = -1;
  }
  CoDisconnectObject(&unk_89A29C, 0);
  OleUninitialize();
  return v10;
}

} // namespace gamemd

// 0x6BE1C0
namespace gamemd {
void WinMain_Setup()
{
  void *v0; // esi
  void *v1; // esi
  bool v2; // zf
  int v3; // eax
  int v4; // esi
  void (***v5)(unsigned int, int); // ecx
  void *v6; // esi
  void *v7; // esi
  int i; // esi
  void (***v9)(unsigned int, int); // ecx
  int v10; // edx
  unsigned int *v11; // esi
  int v12; // eax
  int v13; // edx
  unsigned int *v14; // esi
  int v15; // eax
  void *v16; // esi
  void *v17; // esi
  unsigned int *v18; // esi
  void *v19; // eax
  void *v20; // eax
  void *v21; // eax
  int j; // esi

  v0 = dword_A8F794; /*0x6be1c2*/
  byte_A8E9A0 = 0; /*0x6be1cc*/
  if ( dword_A8F794 ) /*0x6be1d2*/
  {
    ((FileTreeNode *)(dword_A8F794))->Destroy(); /*0x6be1d6*/
    RA2_OPDEL(v0); /*0x6be1dc*/
    dword_A8F794 = 0; /*0x6be1e4*/
  }
  if ( dword_A8F798 ) /*0x6be1f2*/
  {
    (**(void (***)(int, int))dword_A8F798)(dword_A8F798, 1); /*0x6be1f8*/
    dword_A8F798 = 0; /*0x6be1fa*/
  }
  if ( dword_A8F790 ) /*0x6be207*/
  {
    RA2_OPDEL(dword_A8F790); /*0x6be20a*/
    dword_A8F790 = 0; /*0x6be212*/
  }
  ((WinMain *)&dword_A8B238)->Constructor_VectorClass_Wstring_(); /*0x6be21d*/
  while ( dword_B054E0 ) /*0x6be228*/
  {
    v1 = *(void **)dword_B054D4; /*0x6be230*/
    if ( *(unsigned int *)dword_B054D4 ) /*0x6be230*/
    {
      ColorScheme::Destructor(*(unsigned int *)dword_B054D4); /*0x6be238*/
      RA2_OPDEL(v1); /*0x6be23e*/
    }
  }
  dword_B054E0 = 0; /*0x6be253*/
  if ( dword_B054D4 && byte_B054DD ) /*0x6be263*/
  {
    RA2_OPDEL(dword_B054D4); /*0x6be266*/
    dword_B054D4 = 0; /*0x6be26e*/
  }
  byte_B054DD = 0; /*0x6be274*/
  dword_B054D8 = 0; /*0x6be27a*/
  Game::DestroyAllObjects(); /*0x6be280*/
  MixFileClass::DestroyCache(); /*0x6be285*/
  MixFileClass::CleanupCache(); /*0x6be28a*/
  WinMainSetup_Setup_5B4310(); /*0x6be28f*/
  if ( dword_ABF3A0 ) /*0x6be29a*/
  {
    do /*0x6be2de*/
    {
      free(*(void **)dword_ABF394); /*0x6be2a5*/
      v2 = dword_ABF3A0 == 0; /*0x6be2b3*/
      if ( dword_ABF3A0 > 0 ) /*0x6be2b5*/
      {
        v3 = 0; /*0x6be2b8*/
        v2 = dword_ABF3A0-- == 1; /*0x6be2ba*/
        if ( dword_ABF3A0 > 0 ) /*0x6be2c2*/
        {
          do /*0x6be2da*/
          {
            ++v3; /*0x6be2ca*/
            *((unsigned int *)dword_ABF394 + v3 - 1) = *((unsigned int *)dword_ABF394 + v3); /*0x6be2ce*/
          }
          while ( v3 < dword_ABF3A0 ); /*0x6be2da*/
          v2 = dword_ABF3A0 == 0; /*0x6be2dc*/
        }
      }
    }
    while ( !v2 ); /*0x6be2de*/
  }
  dword_ABF3A0 = 0; /*0x6be2e5*/
  if ( dword_ABF394 && byte_ABF39D ) /*0x6be2f5*/
  {
    RA2_OPDEL(dword_ABF394); /*0x6be2f8*/
    dword_ABF394 = 0; /*0x6be300*/
  }
  v4 = 0; /*0x6be30b*/
  byte_ABF39D = 0; /*0x6be30f*/
  for ( dword_ABF398 = 0; v4 < dword_87F668; ++v4 ) /*0x6be31b*/
  {
    v5 = (void (***)(unsigned int, int))*((unsigned int *)dword_87F65C + v4); /*0x6be322*/
    if ( v5 ) /*0x6be327*/
      (**v5)(v5, 1); /*0x6be32d*/
  }
  dword_87F668 = 0; /*0x6be33e*/
  if ( dword_87F65C && byte_87F665 ) /*0x6be34e*/
  {
    RA2_OPDEL(dword_87F65C); /*0x6be351*/
    dword_87F65C = 0; /*0x6be359*/
  }
  byte_87F665 = 0; /*0x6be365*/
  dword_87F660 = 0; /*0x6be36d*/
  if ( dword_887048 ) /*0x6be373*/
  {
    (**(void (***)(int, int))dword_887048)(dword_887048, 1); /*0x6be379*/
    dword_887048 = 0; /*0x6be37b*/
  }
  ((INIClass *)0)->ClearSection( 0); /*0x6be388*/
  ((INIClass *)0)->ClearSection( 0); /*0x6be394*/
  ((INIClass *)0)->ClearSection( 0); /*0x6be3a0*/
  ((INIClass *)0)->ClearSection( 0); /*0x6be3ac*/
  ((INIClass *)0)->ClearSection( 0); /*0x6be3b8*/
  ((INIClass *)0)->ClearSection( 0); /*0x6be3c4*/
  WinMainSetup_Setup_5FF800(); /*0x6be3c9*/
  WinMainSetup_Setup(); /*0x6be3ce*/
  if ( dword_887640 ) /*0x6be3db*/
  {
    (**(void (***)(int, int))dword_887640)(dword_887640, 1); /*0x6be3e1*/
    dword_887640 = 0; /*0x6be3e3*/
  }
  ((MapClass *)&dword_87F7E8)->FreeAllCells(); /*0x6be3ee*/
  TacticalClass::FreeResources( &dword_87F7E8); /*0x6be3f8*/
  WinMainSetup_Setup_6BB8E0(); /*0x6be3fd*/
  v6 = g_ZBufferDescriptor; /*0x6be402*/
  if ( g_ZBufferDescriptor ) /*0x6be40a*/
  {
    Stream::GetField(g_ZBufferDescriptor); /*0x6be40e*/
    RA2_OPDEL(v6); /*0x6be414*/
    g_ZBufferDescriptor = 0; /*0x6be41c*/
  }
  v7 = dword_87E8A4; /*0x6be422*/
  if ( dword_87E8A4 ) /*0x6be42a*/
  {
    StreamObj::Release(dword_87E8A4); /*0x6be42e*/
    RA2_OPDEL(v7); /*0x6be434*/
    dword_87E8A4 = 0; /*0x6be43c*/
  }
  if ( g_GameFontObject ) /*0x6be44a*/
  {
    (**(void (***)(int, int))g_GameFontObject)(g_GameFontObject, 1); /*0x6be450*/
    g_GameFontObject = 0; /*0x6be452*/
  }
  if ( dword_87F6B8 ) /*0x6be460*/
  {
    (**(void (***)(int, int))dword_87F6B8)(dword_87F6B8, 1); /*0x6be466*/
    dword_87F6B8 = 0; /*0x6be468*/
  }
  if ( dword_87F6C0 ) /*0x6be476*/
  {
    (**(void (***)(int, int))dword_87F6C0)(dword_87F6C0, 1); /*0x6be47c*/
    dword_87F6C0 = 0; /*0x6be47e*/
  }
  if ( dword_87F6C4 ) /*0x6be48c*/
  {
    (**(void (***)(int, int))dword_87F6C4)(dword_87F6C4, 1); /*0x6be492*/
    dword_87F6C4 = 0; /*0x6be494*/
  }
  if ( dword_87F6B4 ) /*0x6be4a2*/
  {
    (**(void (***)(int, int))dword_87F6B4)(dword_87F6B4, 1); /*0x6be4a8*/
    dword_87F6B4 = 0; /*0x6be4aa*/
  }
  if ( dword_87F6C8 ) /*0x6be4b8*/
  {
    (**(void (***)(int, int))dword_87F6C8)(dword_87F6C8, 1); /*0x6be4be*/
    dword_87F6C8 = 0; /*0x6be4c0*/
  }
  if ( dword_87F6CC ) /*0x6be4ce*/
  {
    (**(void (***)(int, int))dword_87F6CC)(dword_87F6CC, 1); /*0x6be4d4*/
    dword_87F6CC = 0; /*0x6be4d6*/
  }
  if ( dword_87F6D0 ) /*0x6be4e4*/
  {
    (**(void (***)(int, int))dword_87F6D0)(dword_87F6D0, 1); /*0x6be4ea*/
    dword_87F6D0 = 0; /*0x6be4ec*/
  }
  if ( dword_87F6B0 ) /*0x6be4fa*/
  {
    (**(void (***)(int, int))dword_87F6B0)(dword_87F6B0, 1); /*0x6be500*/
    dword_87F6B0 = 0; /*0x6be502*/
  }
  if ( dword_B1D140 ) /*0x6be510*/
  {
    (**(void (***)(int, int))dword_B1D140)(dword_B1D140, 1); /*0x6be516*/
    dword_B1D140 = 0; /*0x6be518*/
  }
  if ( dword_B1D13C ) /*0x6be526*/
  {
    (**(void (***)(int, int))dword_B1D13C)(dword_B1D13C, 1); /*0x6be52c*/
    dword_B1D13C = 0; /*0x6be52e*/
  }
  if ( dword_89DDC0 ) /*0x6be53c*/
  {
    (**(void (***)(int, int))dword_89DDC0)(dword_89DDC0, 1); /*0x6be542*/
    dword_89DDC0 = 0; /*0x6be544*/
  }
  if ( dword_89DDBC ) /*0x6be551*/
  {
    RA2_OPDEL(dword_89DDBC); /*0x6be554*/
    dword_89DDBC = 0; /*0x6be55c*/
  }
  CleanupMapSystems(&dword_87F7E8); /*0x6be567*/
  for ( i = 0; i < dword_87F6A8; ++i ) /*0x6be575*/
  {
    v9 = (void (***)(unsigned int, int))*((unsigned int *)dword_87F69C + i); /*0x6be57c*/
    if ( v9 ) /*0x6be581*/
      (**v9)(v9, 1); /*0x6be587*/
  }
  dword_87F6A8 = 0; /*0x6be598*/
  if ( dword_87F69C && byte_87F6A5 ) /*0x6be5a8*/
  {
    RA2_OPDEL(dword_87F69C); /*0x6be5ab*/
    dword_87F69C = 0; /*0x6be5b3*/
  }
  byte_87F6A5 = 0; /*0x6be5bf*/
  dword_87F6A0 = 0; /*0x6be5c7*/
  if ( dword_884E08 ) /*0x6be5cd*/
  {
    (**(void (***)(int, int))dword_884E08)(dword_884E08, 1); /*0x6be5d3*/
    dword_884E08 = 0; /*0x6be5d5*/
  }
  if ( dword_884E0C ) /*0x6be5e3*/
  {
    (**(void (***)(int, int))dword_884E0C)(dword_884E0C, 1); /*0x6be5e9*/
    dword_884E0C = 0; /*0x6be5eb*/
  }
  if ( dword_884E10 ) /*0x6be5f9*/
  {
    (**(void (***)(int, int))dword_884E10)(dword_884E10, 1); /*0x6be5ff*/
    dword_884E10 = 0; /*0x6be601*/
  }
  if ( g_MixFile_GENERIC ) /*0x6be60f*/
  {
    (**(void (***)(int, int))g_MixFile_GENERIC)(g_MixFile_GENERIC, 1); /*0x6be615*/
    g_MixFile_GENERIC = 0; /*0x6be617*/
  }
  if ( g_MixFile_GENERMD ) /*0x6be625*/
  {
    (**(void (***)(int, int))g_MixFile_GENERMD)(g_MixFile_GENERMD, 1); /*0x6be62b*/
    g_MixFile_GENERMD = 0; /*0x6be62d*/
  }
  if ( dword_884E1C ) /*0x6be63b*/
  {
    (**(void (***)(int, int))dword_884E1C)(dword_884E1C, 1); /*0x6be641*/
    dword_884E1C = 0; /*0x6be643*/
  }
  if ( dword_884E20 ) /*0x6be651*/
  {
    (**(void (***)(int, int))dword_884E20)(dword_884E20, 1); /*0x6be657*/
    dword_884E20 = 0; /*0x6be659*/
  }
  if ( g_MixFile_ISOGEN ) /*0x6be667*/
  {
    (**(void (***)(int, int))g_MixFile_ISOGEN)(g_MixFile_ISOGEN, 1); /*0x6be66d*/
    g_MixFile_ISOGEN = 0; /*0x6be66f*/
  }
  if ( g_MixFile_ISOGENMD ) /*0x6be67d*/
  {
    (**(void (***)(int, int))g_MixFile_ISOGENMD)(g_MixFile_ISOGENMD, 1); /*0x6be683*/
    g_MixFile_ISOGENMD = 0; /*0x6be685*/
  }
  if ( lpBuffer ) /*0x6be692*/
  {
    RA2_OPDEL(lpBuffer); /*0x6be695*/
    lpBuffer = 0; /*0x6be69d*/
  }
  if ( dword_AA1060 ) /*0x6be6aa*/
  {
    RA2_OPDEL(dword_AA1060); /*0x6be6ad*/
    dword_AA1060 = 0; /*0x6be6b5*/
  }
  if ( dword_AA1064 ) /*0x6be6c2*/
  {
    RA2_OPDEL(dword_AA1064); /*0x6be6c5*/
    dword_AA1064 = 0; /*0x6be6cd*/
  }
  if ( dword_AA1068 ) /*0x6be6da*/
  {
    RA2_OPDEL(dword_AA1068); /*0x6be6dd*/
    dword_AA1068 = 0; /*0x6be6e5*/
  }
  if ( dword_AA106C ) /*0x6be6f2*/
  {
    RA2_OPDEL(dword_AA106C); /*0x6be6f5*/
    dword_AA106C = 0; /*0x6be6fd*/
  }
  if ( dword_887320 ) /*0x6be70b*/
  {
    (**(void (***)(int, int))dword_887320)(dword_887320, 1); /*0x6be711*/
    dword_887320 = 0; /*0x6be713*/
  }
  if ( g_MixFile_MOVIES ) /*0x6be721*/
  {
    (**(void (***)(int, int))g_MixFile_MOVIES)(g_MixFile_MOVIES, 1); /*0x6be727*/
    g_MixFile_MOVIES = 0; /*0x6be729*/
  }
  if ( dword_884E30 ) /*0x6be737*/
  {
    (**(void (***)(int, int))dword_884E30)(dword_884E30, 1); /*0x6be73d*/
    dword_884E30 = 0; /*0x6be73f*/
  }
  if ( dword_884E34 ) /*0x6be74d*/
  {
    (**(void (***)(int, int))dword_884E34)(dword_884E34, 1); /*0x6be753*/
    dword_884E34 = 0; /*0x6be755*/
  }
  if ( g_MixFile_CONQUER ) /*0x6be763*/
  {
    (**(void (***)(int, int))g_MixFile_CONQUER)(g_MixFile_CONQUER, 1); /*0x6be769*/
    g_MixFile_CONQUER = 0; /*0x6be76b*/
  }
  if ( g_MixFile_CONQMD ) /*0x6be779*/
  {
    (**(void (***)(int, int))g_MixFile_CONQMD)(g_MixFile_CONQMD, 1); /*0x6be77f*/
    g_MixFile_CONQMD = 0; /*0x6be781*/
  }
  if ( g_MixFile_CAMEO ) /*0x6be78f*/
  {
    (**(void (***)(int, int))g_MixFile_CAMEO)(g_MixFile_CAMEO, 1); /*0x6be795*/
    g_MixFile_CAMEO = 0; /*0x6be797*/
  }
  if ( g_MixFile_CAMEOMD ) /*0x6be7a5*/
  {
    (**(void (***)(int, int))g_MixFile_CAMEOMD)(g_MixFile_CAMEOMD, 1); /*0x6be7ab*/
    g_MixFile_CAMEOMD = 0; /*0x6be7ad*/
  }
  v10 = g_MixFilePool_Count; /*0x6be7b3*/
  if ( g_MixFilePool_Count > 0 ) /*0x6be7bb*/
  {
    v11 = g_MixFilePool; /*0x6be7bd*/
    do /*0x6be806*/
    {
      if ( *v11 ) /*0x6be7c3*/
      {
        (**(void (***)(unsigned int, int))*v11)(*v11, 1); /*0x6be7cd*/
        v11 = g_MixFilePool; /*0x6be7cf*/
        v10 = g_MixFilePool_Count; /*0x6be7d5*/
      }
      if ( v10 <= 0 ) /*0x6be7dd*/
        break; /*0x6be7dd*/
      v12 = 0; /*0x6be7e0*/
      g_MixFilePool_Count = v10 - 1; /*0x6be7e4*/
      if ( v10 - 1 <= 0 ) /*0x6be7ea*/
        break; /*0x6be7ea*/
      do /*0x6be802*/
      {
        v11[v12] = v11[v12 + 1]; /*0x6be7f0*/
        v10 = g_MixFilePool_Count; /*0x6be7f3*/
        v11 = g_MixFilePool; /*0x6be7f9*/
        ++v12; /*0x6be7ff*/
      }
      while ( v12 < g_MixFilePool_Count ); /*0x6be802*/
    }
    while ( g_MixFilePool_Count > 0 ); /*0x6be806*/
  }
  if ( g_MixFile_CACHE ) /*0x6be810*/
  {
    (**(void (***)(int, int))g_MixFile_CACHE)(g_MixFile_CACHE, 1); /*0x6be816*/
    g_MixFile_CACHE = 0; /*0x6be818*/
  }
  if ( g_MixFile_CACHEMD ) /*0x6be826*/
  {
    (**(void (***)(int, int))g_MixFile_CACHEMD)(g_MixFile_CACHEMD, 1); /*0x6be82c*/
    g_MixFile_CACHEMD = 0; /*0x6be82e*/
  }
  if ( g_MixFile_LOCAL ) /*0x6be83c*/
  {
    (**(void (***)(int, int))g_MixFile_LOCAL)(g_MixFile_LOCAL, 1); /*0x6be842*/
    g_MixFile_LOCAL = 0; /*0x6be844*/
  }
  if ( g_MixFile_LOCALMD ) /*0x6be852*/
  {
    (**(void (***)(int, int))g_MixFile_LOCALMD)(g_MixFile_LOCALMD, 1); /*0x6be858*/
    g_MixFile_LOCALMD = 0; /*0x6be85a*/
  }
  if ( dword_884E5C ) /*0x6be868*/
  {
    (**(void (***)(int, int))dword_884E5C)(dword_884E5C, 1); /*0x6be86e*/
    dword_884E5C = 0; /*0x6be870*/
  }
  if ( dword_884E58 ) /*0x6be87e*/
  {
    (**(void (***)(int, int))dword_884E58)(dword_884E58, 1); /*0x6be884*/
    dword_884E58 = 0; /*0x6be886*/
  }
  if ( dword_884E68 ) /*0x6be894*/
  {
    (**(void (***)(int, int))dword_884E68)(dword_884E68, 1); /*0x6be89a*/
    dword_884E68 = 0; /*0x6be89c*/
  }
  if ( dword_884E6C ) /*0x6be8aa*/
  {
    (**(void (***)(int, int))dword_884E6C)(dword_884E6C, 1); /*0x6be8b0*/
    dword_884E6C = 0; /*0x6be8b2*/
  }
  v13 = dword_884DD0; /*0x6be8b8*/
  if ( dword_884DD0 > 0 ) /*0x6be8c0*/
  {
    v14 = dword_884DC4; /*0x6be8c2*/
    do /*0x6be90b*/
    {
      if ( *v14 ) /*0x6be8c8*/
      {
        (**(void (***)(unsigned int, int))*v14)(*v14, 1); /*0x6be8d2*/
        v14 = dword_884DC4; /*0x6be8d4*/
        v13 = dword_884DD0; /*0x6be8da*/
      }
      if ( v13 <= 0 ) /*0x6be8e2*/
        break; /*0x6be8e2*/
      v15 = 0; /*0x6be8e5*/
      dword_884DD0 = v13 - 1; /*0x6be8e9*/
      if ( v13 - 1 <= 0 ) /*0x6be8ef*/
        break; /*0x6be8ef*/
      do /*0x6be907*/
      {
        v14[v15] = v14[v15 + 1]; /*0x6be8f5*/
        v13 = dword_884DD0; /*0x6be8f8*/
        v14 = dword_884DC4; /*0x6be8fe*/
        ++v15; /*0x6be904*/
      }
      while ( v15 < dword_884DD0 ); /*0x6be907*/
    }
    while ( dword_884DD0 > 0 ); /*0x6be90b*/
  }
  if ( g_MixFile_MAPSFirst ) /*0x6be915*/
  {
    (**(void (***)(int, int))g_MixFile_MAPSFirst)(g_MixFile_MAPSFirst, 1); /*0x6be91b*/
    g_MixFile_MAPSFirst = 0; /*0x6be91d*/
  }
  if ( g_MixFile_MAPSMDFirst ) /*0x6be92b*/
  {
    (**(void (***)(int, int))g_MixFile_MAPSMDFirst)(g_MixFile_MAPSMDFirst, 1); /*0x6be931*/
    g_MixFile_MAPSMDFirst = 0; /*0x6be933*/
  }
  if ( MixFileClass_MULTI ) /*0x6be941*/
  {
    (**(void (***)(int, int))MixFileClass_MULTI)(MixFileClass_MULTI, 1); /*0x6be947*/
    MixFileClass_MULTI = 0; /*0x6be949*/
  }
  if ( g_MixFile_MULTIMD ) /*0x6be957*/
  {
    (**(void (***)(int, int))g_MixFile_MULTIMD)(g_MixFile_MULTIMD, 1); /*0x6be95d*/
    g_MixFile_MULTIMD = 0; /*0x6be95f*/
  }
  if ( dword_884E74 ) /*0x6be96d*/
  {
    (**(void (***)(int, int))dword_884E74)(dword_884E74, 1); /*0x6be973*/
    dword_884E74 = 0; /*0x6be975*/
  }
  if ( dword_884E70 ) /*0x6be983*/
  {
    (**(void (***)(int, int))dword_884E70)(dword_884E70, 1); /*0x6be989*/
    dword_884E70 = 0; /*0x6be98b*/
  }
  if ( dword_884E78 ) /*0x6be999*/
  {
    (**(void (***)(int, int))dword_884E78)(dword_884E78, 1); /*0x6be99f*/
    dword_884E78 = 0; /*0x6be9a1*/
  }
  if ( g_MixFile_RA2 ) /*0x6be9af*/
  {
    (**(void (***)(int, int))g_MixFile_RA2)(g_MixFile_RA2, 1); /*0x6be9b5*/
    g_MixFile_RA2 = 0; /*0x6be9b7*/
  }
  if ( g_MixFile_RA2MD ) /*0x6be9c5*/
  {
    (**(void (***)(int, int))g_MixFile_RA2MD)(g_MixFile_RA2MD, 1); /*0x6be9cb*/
    g_MixFile_RA2MD = 0; /*0x6be9cd*/
  }
  if ( dword_884E00 ) /*0x6be9db*/
  {
    (**(void (***)(int, int))dword_884E00)(dword_884E00, 1); /*0x6be9e1*/
    dword_884E00 = 0; /*0x6be9e3*/
  }
  if ( dword_884E04 ) /*0x6be9f1*/
  {
    (**(void (***)(int, int))dword_884E04)(dword_884E04, 1); /*0x6be9f7*/
    dword_884E04 = 0; /*0x6be9f9*/
  }
  if ( g_TacticalClass_Instance ) /*0x6bea07*/
  {
    ((void (*)(LPPERSISTSTREAM, int))g_TacticalClass_Instance->__tail_0[1].QueryInterface)( /*0x6bea0d*/
      g_TacticalClass_Instance,
      1);
    g_TacticalClass_Instance = 0; /*0x6bea10*/
  }
  WinMainSetup_Setup_65FD50(); /*0x6bea16*/
  ((TacticalClass *)&dword_87F7E8)->CleanupResources(); /*0x6bea20*/
  WinMainSetup_Setup_626FF0(); /*0x6bea25*/
  _ioterm(); /*0x6bea2a*/
  ObjectTypeClass::UnloadPipsSHP(); /*0x6bea2f*/
  nullsub_31(); /*0x6bea34*/
  j_PlanningNodeClass_CleanupAll(); /*0x6bea39*/
  WinMainSetup_Setup_72AC40(); /*0x6bea3e*/
  WinMainSetup_Setup_730970(); /*0x6bea43*/
  LoadProgressMgr::Destroy(); /*0x6bea48*/
  WinMainSetup_Setup_5BE940(); /*0x6bea4d*/
  WinMainSetup_Setup_5DB6F0(); /*0x6bea52*/
  Audio::LoadSoundINI(); /*0x6bea57*/
  LoadINIEVA(); /*0x6bea5c*/
  sub_47ADC0(); /*0x6bea61*/
  if ( dword_87F770 ) /*0x6bea6d*/
  {
    RA2_OPDEL(dword_87F770); /*0x6bea70*/
    dword_87F770 = 0; /*0x6bea78*/
  }
  Network::ShutdownInterface(); /*0x6bea7e*/
  v16 = dword_A83DB8; /*0x6bea83*/
  if ( dword_A83DB8 ) /*0x6bea8b*/
  {
    ((Vector *)(dword_A83DB8))->Clear(); /*0x6bea8f*/
    RA2_OPDEL(v16); /*0x6bea95*/
    dword_A83DB8 = 0; /*0x6bea9d*/
  }
  v17 = dword_8871E0; /*0x6beaa3*/
  if ( dword_8871E0 ) /*0x6beaab*/
  {
    RulesClass::DTOR(dword_8871E0); /*0x6beaaf*/
    RA2_OPDEL(v17); /*0x6beab5*/
    dword_8871E0 = 0; /*0x6beabd*/
  }
  v18 = dword_A8B230; /*0x6beac3*/
  if ( dword_A8B230 ) /*0x6beacc*/
  {
    v19 = (void *)*((unsigned int *)dword_A8B230 + 3396); /*0x6bead2*/
    *((unsigned int *)dword_A8B230 + 3395) = (void*)&VectorClass_int_vftable; /*0x6beadf*/
    if ( v19 && *((unsigned char *)v18 + 13593) ) /*0x6beae7*/
    {
      RA2_OPDEL(v19); /*0x6beaf0*/
      v18[3396] = 0; /*0x6beaf8*/
    }
    *((unsigned char *)v18 + 13593) = 0; /*0x6beafe*/
    v18[3397] = 0; /*0x6beb04*/
    v20 = (void *)v18[3389]; /*0x6beb0a*/
    v18[3388] = (void*)&VectorClass_int_vftable; /*0x6beb10*/
    if ( v20 && *((unsigned char *)v18 + 13565) ) /*0x6beb1a*/
    {
      RA2_OPDEL(v20); /*0x6beb23*/
      v18[3389] = 0; /*0x6beb2b*/
    }
    *((unsigned char *)v18 + 13565) = 0; /*0x6beb31*/
    v18[3390] = 0; /*0x6beb37*/
    v21 = (void *)v18[3382]; /*0x6beb3d*/
    v18[3381] = (void*)&VectorClass_TechnoTypeClass___vftable; /*0x6beb43*/
    if ( v21 && *((unsigned char *)v18 + 13537) ) /*0x6beb51*/
    {
      RA2_OPDEL(v21); /*0x6beb5a*/
      v18[3382] = 0; /*0x6beb62*/
    }
    *((unsigned char *)v18 + 13537) = 0; /*0x6beb69*/
    v18[3383] = 0; /*0x6beb6f*/
    RA2_OPDEL(v18); /*0x6beb75*/
    dword_A8B230 = 0; /*0x6beb7d*/
  }
  for ( j = 0; j < dword_B0BC98; ++j ) /*0x6beb8c*/
    CoRevokeClassObject(*((unsigned int *)dword_B0BC8C + j)); /*0x6beb9e*/
  dword_B0BC98 = 0; /*0x6bebaf*/
  if ( dword_B0BC8C && byte_B0BC95 ) /*0x6bebc0*/
  {
    RA2_OPDEL(dword_B0BC8C); /*0x6bebc3*/
    dword_B0BC8C = 0; /*0x6bebcb*/
  }
  byte_B0BC95 = 0; /*0x6bebd8*/
  dword_B0BC90 = 0; /*0x6bebde*/
  RevokeActiveObject( (void *)(pdwRegister), 0); /*0x6bebe4*/
  if ( hLibModule ) /*0x6bebf1*/
    FreeLibrary(hLibModule); /*0x6bebf4*/
  if ( dword_B0BCE8 ) /*0x6bec07*/
  {
    CloseHandle(dword_B0BCE8); /*0x6bec0a*/
    dword_B0BCE8 = 0; /*0x6bec0c*/
  }
  if ( dword_B0BCE4 ) /*0x6bec19*/
  {
    CloseHandle(dword_B0BCE4); /*0x6bec1c*/
    dword_B0BCE4 = 0; /*0x6bec1e*/
  }
  Audio_Init(); /*0x6bec24*/
  ((ThemeManager *)&unk_A83D10)->Cleanup(); /*0x6bec2e*/
  Audio::Shutdown(); /*0x6bec33*/
  WinMain::ShutdownCleanup(); /*0x6bec38*/
  WinMain::CleanupResource(); /*0x6bec3d*/
  if ( dword_B7816C ) /*0x7b86be*/
  {
    dword_B78138 = 1; /*0x7b86c0*/
    while ( !dword_B78140 ) /*0x7b86d1*/
      Sleep(0); /*0x7b86dc*/
    WaitForSingleObject(dword_B78154, 0x1388u); /*0x7b86f3*/
    CloseHandle(dword_B78154); /*0x7b8700*/
    dword_B7816C = 0; /*0x7b8702*/
  }
  if ( hMutex ) /*0x7b8713*/
  {
    CloseHandle(hMutex); /*0x7b8716*/
    hMutex = 0; /*0x7b8718*/
  }
}
}
// 0x6B0A90
namespace gamemd {
unsigned int * E4Recv_6B0A90::sub_6B0A90(int a2)
{

  unsigned int *v2; // eax
  ObjectClass *nextObject; // ecx
  unsigned int *result; // eax
  int v5; // [esp+4h] [ebp-8h]

  v2 = *(unsigned int **)(this->ambientSoundController[0] + 4 * a2); /*0x6b0a9a*/
  if ( *v2 ) /*0x6b0a9d*/
    *(unsigned int *)(*v2 + 732) = 0; /*0x6b0aa3*/
  *v2 = 0; /*0x6b0aad*/
  v2[1] = 6; /*0x6b0ab3*/
  nextObject = this->nextObject; /*0x6b0ac0*/
  result = v2 + 2; /*0x6b0ac3*/
  *result = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6b0ac6*/
  result[1] = v5; /*0x6b0acc*/
  result[2] = nextObject; /*0x6b0acf*/
  return result; /*0x6b0ad2*/

}
} // namespace gamemd

// 0x6B1B00
namespace gamemd {
int sub_6B1B00()
{
  dword_B0B638 = 0; /*0x6b1b02*/
  dword_B0B63C = 0; /*0x6b1b07*/
  dword_B0B640 = 0; /*0x6b1b0c*/
  dword_B0B644 = 0; /*0x6b1b11*/
  return 0; /*0x6b1b16*/
}
} // namespace gamemd

// 0x6B1EE0
namespace gamemd {
long long E4Recv_6B1EE0::sub_6B1EE0()
{

  int abstractFlags; // ebx
  double nextObject; // st7
  int v4; // eax
  int v5; // edi
  int64_t result; // rax
  int v7; // kr00_4

  if ( BYTE2(this->fallRate) ) /*0x6b1ee6*/
    abstractFlags = ((unsigned int *)this)[0]; /*0x6b1eed*/
  else
    abstractFlags = ((unsigned int *)this)[0]; /*0x6b1ef2*/
  nextObject = (double)(int)this->nextObject; /*0x6b1ef5*/
  LOWORD(v4) = Math::RoundToInt(nextObject); /*0x6b1f07*/
  v5 = v4; /*0x6b1f0f*/
  if ( v4 <= 4 ) /*0x6b1f11*/
    v5 = 4; /*0x6b1f13*/
  this->ambientSoundController[4] = v5; /*0x6b1f1b*/
  v7 = Math::RoundToInt(nextObject); /*0x6b1f22*/
  WORD2(result) = HIWORD(v7); /*0x6b1f22*/
  LOWORD(result) = v7; /*0x6b1f22*/
  if ( (int)result >= abstractFlags - v5 ) /*0x6b1f31*/
    this->customSound_controller[0] = abstractFlags - v5; /*0x6b1f3b*/
  else
    this->customSound_controller[0] = result; /*0x6b1f33*/
  return result; /*0x6b1f36*/

}
} // namespace gamemd

// 0x6B21A0
namespace gamemd {
void sub_6B21A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6b21ac*/
  dbl_B0B680 = Math::Sqrt(v0 + v0); /*0x6b21be*/
}
} // namespace gamemd

// 0x6B21D0
namespace gamemd {
void sub_6B21D0()
{
  dbl_B0B6D0 = dbl_B0B680 / 60.0; /*0x6b21dc*/
}
} // namespace gamemd

// 0x6B21F0
namespace gamemd {
void sub_6B21F0()
{
  dbl_B0B6B8 = 1.0 / dbl_B0B6D0; /*0x6b21fc*/
}
} // namespace gamemd

// 0x6B2210
namespace gamemd {
void sub_6B2210()
{
  dbl_B0B6B0 = 0.0174532925199433 * 45.0; /*0x6b221c*/
}
} // namespace gamemd

// 0x6B2230
namespace gamemd {
void sub_6B2230()
{
  dbl_B0B688 = 0.0174532925199433 * 60.0; /*0x6b223c*/
}
} // namespace gamemd

// 0x6B2250
namespace gamemd {
void sub_6B2250()
{
  dbl_B0B648 = 0.0174532925199433 * 90.0; /*0x6b225c*/
}
} // namespace gamemd

// 0x6B2270
namespace gamemd {
long long sub_6B2270()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0B648 - dbl_B0B688); /*0x6b2282*/
  result = Math::RoundToInt(v0 * dbl_B0B680 * 0.5); /*0x6b2296*/
  dword_B0B6D8 = result; /*0x6b229b*/
  return result; /*0x6b22a0*/
}
} // namespace gamemd

// 0x6B22B0
namespace gamemd {
void sub_6B22B0()
{
  dbl_B0B690 = Math::ArcTan((double)dword_B0B6D8 * 0.00390625); /*0x6b22c7*/
}
} // namespace gamemd

// 0x6B22E0
namespace gamemd {
void sub_6B22E0()
{
  dbl_B0B6A8 = Math::ArcTan((double)(2 * dword_B0B6D8) / dbl_B0B680); /*0x6b2302*/
}
} // namespace gamemd

// 0x6B2310
namespace gamemd {
long long sub_6B2310()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0B6D8) + 0.5); /*0x6b232b*/
  dword_B0B6CC = result; /*0x6b2330*/
  return result; /*0x6b2336*/
}
} // namespace gamemd

// 0x6B2340
namespace gamemd {
int sub_6B2340()
{
  word_B0B678 = 0; /*0x6b2342*/
  word_B0B67A = 0; /*0x6b2348*/
  return 0; /*0x6b234e*/
}
} // namespace gamemd

// 0x6B2350
namespace gamemd {
int sub_6B2350()
{
  dword_B0B698 = 0; /*0x6b2352*/
  dword_B0B69C = 0; /*0x6b2357*/
  dword_B0B6A0 = 0; /*0x6b235c*/
  return 0; /*0x6b2361*/
}
} // namespace gamemd

// 0x6B2370
namespace gamemd {
int sub_6B2370()
{
  dword_B0B6C8 = 0; /*0x6b2375*/
  dword_B0B6C0 = 128; /*0x6b237f*/
  dword_B0B6C4 = 128; /*0x6b2384*/
  return 128; /*0x6b2389*/
}
} // namespace gamemd

// 0x6B2390
namespace gamemd {
int sub_6B2390()
{
  dword_B0B668 = 0; /*0x6b2392*/
  dword_B0B66C = 0; /*0x6b2397*/
  dword_B0B670 = 0; /*0x6b239c*/
  dword_B0B674 = 0; /*0x6b23a1*/
  return 0; /*0x6b23a6*/
}
} // namespace gamemd

// 0x6B23B0
namespace gamemd {
int sub_6B23B0()
{
  dword_B0B654 = 0; /*0x6b23b7*/
  dword_B0B658 = 0; /*0x6b23bc*/
  byte_B0B65C = 1; /*0x6b23c1*/
  byte_B0B65D = 0; /*0x6b23c8*/
  dword_B0B650 = (int)&DynamicVectorClass_UndoInfoStruct_vftable; /*0x6b23cd*/
  dword_B0B664 = 10; /*0x6b23d7*/
  g_SlaveMgrPool = 0; /*0x6b23e1*/
  return atexit(sub_6B23F0); /*0x6b23ec*/
}
} // namespace gamemd

// 0x6B23F0
namespace gamemd {
void sub_6B23F0()
{
  dword_B0B650 = (int)&VectorClass_UndoInfoStruct_vftable; /*0x6b23f8*/
  if ( dword_B0B654 && byte_B0B65D ) /*0x6b240c*/
  {
    RA2_OPDEL(dword_B0B654); /*0x6b240f*/
    dword_B0B654 = 0; /*0x6b2417*/
  }
  byte_B0B65D = 0; /*0x6b241d*/
  dword_B0B658 = 0; /*0x6b2423*/
}
} // namespace gamemd

// 0x6B4840
namespace gamemd {
void sub_6B4840()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6b484c*/
  dbl_B0B710 = Math::Sqrt(v0 + v0); /*0x6b485e*/
}
} // namespace gamemd

// 0x6B4870
namespace gamemd {
void sub_6B4870()
{
  dbl_B0B760 = dbl_B0B710 / 60.0; /*0x6b487c*/
}
} // namespace gamemd

// 0x6B4890
namespace gamemd {
void sub_6B4890()
{
  dbl_B0B748 = 1.0 / dbl_B0B760; /*0x6b489c*/
}
} // namespace gamemd

// 0x6B48B0
namespace gamemd {
void sub_6B48B0()
{
  dbl_B0B740 = 0.0174532925199433 * 45.0; /*0x6b48bc*/
}
} // namespace gamemd

// 0x6B48D0
namespace gamemd {
void sub_6B48D0()
{
  dbl_B0B718 = 0.0174532925199433 * 60.0; /*0x6b48dc*/
}
} // namespace gamemd

// 0x6B48F0
namespace gamemd {
void sub_6B48F0()
{
  dbl_B0B6F0 = 0.0174532925199433 * 90.0; /*0x6b48fc*/
}
} // namespace gamemd

// 0x6B4910
namespace gamemd {
long long sub_6B4910()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0B6F0 - dbl_B0B718); /*0x6b4922*/
  result = Math::RoundToInt(v0 * dbl_B0B710 * 0.5); /*0x6b4936*/
  dword_B0B768 = result; /*0x6b493b*/
  return result; /*0x6b4940*/
}
} // namespace gamemd

// 0x6B4950
namespace gamemd {
void sub_6B4950()
{
  dbl_B0B720 = Math::ArcTan((double)dword_B0B768 * 0.00390625); /*0x6b4967*/
}
} // namespace gamemd

// 0x6B4980
namespace gamemd {
void sub_6B4980()
{
  dbl_B0B738 = Math::ArcTan((double)(2 * dword_B0B768) / dbl_B0B710); /*0x6b49a2*/
}
} // namespace gamemd

// 0x6B49B0
namespace gamemd {
long long sub_6B49B0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0B768) + 0.5); /*0x6b49cb*/
  dword_B0B75C = result; /*0x6b49d0*/
  return result; /*0x6b49d6*/
}
} // namespace gamemd

// 0x6B49E0
namespace gamemd {
int sub_6B49E0()
{
  word_B0B708 = 0; /*0x6b49e2*/
  word_B0B70A = 0; /*0x6b49e8*/
  return 0; /*0x6b49ee*/
}
} // namespace gamemd

// 0x6B49F0
namespace gamemd {
int sub_6B49F0()
{
  dword_B0B728 = 0; /*0x6b49f2*/
  dword_B0B72C = 0; /*0x6b49f7*/
  dword_B0B730 = 0; /*0x6b49fc*/
  return 0; /*0x6b4a01*/
}
} // namespace gamemd

// 0x6B4A10
namespace gamemd {
int sub_6B4A10()
{
  dword_B0B758 = 0; /*0x6b4a15*/
  dword_B0B750 = 128; /*0x6b4a1f*/
  dword_B0B754 = 128; /*0x6b4a24*/
  return 128; /*0x6b4a29*/
}
} // namespace gamemd

// 0x6B4A30
namespace gamemd {
int sub_6B4A30()
{
  dword_B0B6F8 = 0; /*0x6b4a32*/
  dword_B0B6FC = 0; /*0x6b4a37*/
  dword_B0B700 = 0; /*0x6b4a3c*/
  dword_B0B704 = 0; /*0x6b4a41*/
  return 0; /*0x6b4a46*/
}
} // namespace gamemd

// 0x6B4C70
namespace gamemd {
void nullsub_232(int a1)
{
  ; /*0x6b4c70*/
}
} // namespace gamemd

// 0x6B4F90
namespace gamemd {
void nullsub_233(int a1, int a2)
{
  ; /*0x6b4f90*/
}
} // namespace gamemd

// 0x6B5050
namespace gamemd {
int sub_6B5050()
{
  dword_B0B778 = 0; /*0x6b5052*/
  dword_B0B77C = 0; /*0x6b5057*/
  dword_B0B780 = 0; /*0x6b505c*/
  dword_B0B784 = 0; /*0x6b5061*/
  return 0; /*0x6b5066*/
}
} // namespace gamemd

// 0x6B5070
namespace gamemd {
void sub_6B5070()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6b507c*/
  dbl_B0B790 = Math::Sqrt(v0 + v0); /*0x6b508e*/
}
} // namespace gamemd

// 0x6B50A0
namespace gamemd {
void sub_6B50A0()
{
  dbl_B0B7E0 = dbl_B0B790 / 60.0; /*0x6b50ac*/
}
} // namespace gamemd

// 0x6B50C0
namespace gamemd {
void sub_6B50C0()
{
  dbl_B0B7C8 = 1.0 / dbl_B0B7E0; /*0x6b50cc*/
}
} // namespace gamemd

// 0x6B50E0
namespace gamemd {
void sub_6B50E0()
{
  dbl_B0B7C0 = 0.0174532925199433 * 45.0; /*0x6b50ec*/
}
} // namespace gamemd

// 0x6B5100
namespace gamemd {
void sub_6B5100()
{
  dbl_B0B798 = 0.0174532925199433 * 60.0; /*0x6b510c*/
}
} // namespace gamemd

// 0x6B5120
namespace gamemd {
void sub_6B5120()
{
  dbl_B0B770 = 0.0174532925199433 * 90.0; /*0x6b512c*/
}
} // namespace gamemd

// 0x6B5140
namespace gamemd {
long long sub_6B5140()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0B770 - dbl_B0B798); /*0x6b5152*/
  result = Math::RoundToInt(v0 * dbl_B0B790 * 0.5); /*0x6b5166*/
  dword_B0B7E8 = result; /*0x6b516b*/
  return result; /*0x6b5170*/
}
} // namespace gamemd

// 0x6B5180
namespace gamemd {
void sub_6B5180()
{
  dbl_B0B7A0 = Math::ArcTan((double)dword_B0B7E8 * 0.00390625); /*0x6b5197*/
}
} // namespace gamemd

// 0x6B51B0
namespace gamemd {
void sub_6B51B0()
{
  dbl_B0B7B8 = Math::ArcTan((double)(2 * dword_B0B7E8) / dbl_B0B790); /*0x6b51d2*/
}
} // namespace gamemd

// 0x6B51E0
namespace gamemd {
long long sub_6B51E0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0B7E8) + 0.5); /*0x6b51fb*/
  dword_B0B7DC = result; /*0x6b5200*/
  return result; /*0x6b5206*/
}
} // namespace gamemd

// 0x6B5210
namespace gamemd {
int sub_6B5210()
{
  Map_BottomRightCell = 0; /*0x6b5212*/
  return 0; /*0x6b521e*/
}
} // namespace gamemd

// 0x6B5220
namespace gamemd {
int sub_6B5220()
{
  dword_B0B7A8 = 0; /*0x6b5222*/
  dword_B0B7AC = 0; /*0x6b5227*/
  dword_B0B7B0 = 0; /*0x6b522c*/
  return 0; /*0x6b5231*/
}
} // namespace gamemd

// 0x6B6210
namespace gamemd {
int sub_6B6210()
{
  dword_B0B7F0 = 0; /*0x6b6212*/
  dword_B0B7F4 = 0; /*0x6b6217*/
  dword_B0B7F8 = 0; /*0x6b621c*/
  dword_B0B7FC = 0; /*0x6b6221*/
  return 0; /*0x6b6226*/
}
} // namespace gamemd

// 0x6B6A00
namespace gamemd {
void sub_6B6A00()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6b6a0c*/
  dbl_B0B828 = Math::Sqrt(v0 + v0); /*0x6b6a1e*/
}
} // namespace gamemd

// 0x6B6A30
namespace gamemd {
void sub_6B6A30()
{
  dbl_B0B878 = dbl_B0B828 / 60.0; /*0x6b6a3c*/
}
} // namespace gamemd

// 0x6B6A50
namespace gamemd {
void sub_6B6A50()
{
  dbl_B0B860 = 1.0 / dbl_B0B878; /*0x6b6a5c*/
}
} // namespace gamemd

// 0x6B6A70
namespace gamemd {
void sub_6B6A70()
{
  dbl_B0B858 = 0.0174532925199433 * 45.0; /*0x6b6a7c*/
}
} // namespace gamemd

// 0x6B6A90
namespace gamemd {
void sub_6B6A90()
{
  dbl_B0B830 = 0.0174532925199433 * 60.0; /*0x6b6a9c*/
}
} // namespace gamemd

// 0x6B6AB0
namespace gamemd {
void sub_6B6AB0()
{
  dbl_B0B808 = 0.0174532925199433 * 90.0; /*0x6b6abc*/
}
} // namespace gamemd

// 0x6B6AD0
namespace gamemd {
long long sub_6B6AD0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0B808 - dbl_B0B830); /*0x6b6ae2*/
  result = Math::RoundToInt(v0 * dbl_B0B828 * 0.5); /*0x6b6af6*/
  dword_B0B898 = result; /*0x6b6afb*/
  return result; /*0x6b6b00*/
}
} // namespace gamemd

// 0x6B6B10
namespace gamemd {
void sub_6B6B10()
{
  dbl_B0B838 = Math::ArcTan((double)dword_B0B898 * 0.00390625); /*0x6b6b27*/
}
} // namespace gamemd

// 0x6B6B40
namespace gamemd {
void sub_6B6B40()
{
  dbl_B0B850 = Math::ArcTan((double)(2 * dword_B0B898) / dbl_B0B828); /*0x6b6b62*/
}
} // namespace gamemd

// 0x6B6B70
namespace gamemd {
long long sub_6B6B70()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0B898) + 0.5); /*0x6b6b8b*/
  dword_B0B874 = result; /*0x6b6b90*/
  return result; /*0x6b6b96*/
}
} // namespace gamemd

// 0x6B6BA0
namespace gamemd {
int sub_6B6BA0()
{
  word_B0B820 = 0; /*0x6b6ba2*/
  word_B0B822 = 0; /*0x6b6ba8*/
  return 0; /*0x6b6bae*/
}
} // namespace gamemd

// 0x6B6BB0
namespace gamemd {
int sub_6B6BB0()
{
  dword_B0B840 = 0; /*0x6b6bb2*/
  dword_B0B844 = 0; /*0x6b6bb7*/
  dword_B0B848 = 0; /*0x6b6bbc*/
  return 0; /*0x6b6bc1*/
}
} // namespace gamemd

// 0x6B6BD0
namespace gamemd {
int sub_6B6BD0()
{
  dword_B0B870 = 0; /*0x6b6bd5*/
  dword_B0B868 = 128; /*0x6b6bdf*/
  dword_B0B86C = 128; /*0x6b6be4*/
  return 128; /*0x6b6be9*/
}
} // namespace gamemd

// 0x6B6BF0
namespace gamemd {
int sub_6B6BF0()
{
  dword_B0B810 = 0; /*0x6b6bf2*/
  dword_B0B814 = 0; /*0x6b6bf7*/
  dword_B0B818 = 0; /*0x6b6bfc*/
  dword_B0B81C = 0; /*0x6b6c01*/
  return 0; /*0x6b6c06*/
}
} // namespace gamemd

// 0x6B6C10
namespace gamemd {
int sub_6B6C10()
{
  dword_B0B884 = 0; /*0x6b6c17*/
  dword_B0B888 = 0; /*0x6b6c1c*/
  byte_B0B88C = 1; /*0x6b6c21*/
  byte_B0B88D = 0; /*0x6b6c28*/
  SpawnManagerClass_Array = (int)&DynamicVectorClass_SpawnManagerClass___vftable; /*0x6b6c2d*/
  dword_B0B894 = 10; /*0x6b6c37*/
  dword_B0B890 = 0; /*0x6b6c41*/
  return atexit(sub_6B6C50); /*0x6b6c4c*/
}
} // namespace gamemd

// 0x6B6C50
namespace gamemd {
void sub_6B6C50()
{
  SpawnManagerClass_Array = (int)&VectorClass_SpawnManagerClass___vftable; /*0x6b6c58*/
  if ( dword_B0B884 && byte_B0B88D ) /*0x6b6c6c*/
  {
    RA2_OPDEL(dword_B0B884); /*0x6b6c6f*/
    dword_B0B884 = 0; /*0x6b6c77*/
  }
  byte_B0B88D = 0; /*0x6b6c7d*/
  dword_B0B888 = 0; /*0x6b6c83*/
}
} // namespace gamemd

// 0x6B88D0
namespace gamemd {
int sub_6B88D0()
{
  dword_B0B8A8 = 0; /*0x6b88d2*/
  dword_B0B8AC = 0; /*0x6b88d7*/
  dword_B0B8B0 = 0; /*0x6b88dc*/
  dword_B0B8B4 = 0; /*0x6b88e1*/
  return 0; /*0x6b88e6*/
}
} // namespace gamemd

// 0x6B88F0
namespace gamemd {
void sub_6B88F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6b88fc*/
  dbl_B0B8C0 = Math::Sqrt(v0 + v0); /*0x6b890e*/
}
} // namespace gamemd

// 0x6B8920
namespace gamemd {
void sub_6B8920()
{
  dbl_B0B910 = dbl_B0B8C0 / 60.0; /*0x6b892c*/
}
} // namespace gamemd

// 0x6B8940
namespace gamemd {
void sub_6B8940()
{
  dbl_B0B8F8 = 1.0 / dbl_B0B910; /*0x6b894c*/
}
} // namespace gamemd

// 0x6B8960
namespace gamemd {
void sub_6B8960()
{
  dbl_B0B8F0 = 0.0174532925199433 * 45.0; /*0x6b896c*/
}
} // namespace gamemd

// 0x6B8980
namespace gamemd {
void sub_6B8980()
{
  dbl_B0B8C8 = 0.0174532925199433 * 60.0; /*0x6b898c*/
}
} // namespace gamemd

// 0x6B89A0
namespace gamemd {
void sub_6B89A0()
{
  dbl_B0B8A0 = 0.0174532925199433 * 90.0; /*0x6b89ac*/
}
} // namespace gamemd

// 0x6B89C0
namespace gamemd {
long long sub_6B89C0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0B8A0 - dbl_B0B8C8); /*0x6b89d2*/
  result = Math::RoundToInt(v0 * dbl_B0B8C0 * 0.5); /*0x6b89e6*/
  dword_B0B918 = result; /*0x6b89eb*/
  return result; /*0x6b89f0*/
}
} // namespace gamemd

// 0x6B8A00
namespace gamemd {
void sub_6B8A00()
{
  dbl_B0B8D0 = Math::ArcTan((double)dword_B0B918 * 0.00390625); /*0x6b8a17*/
}
} // namespace gamemd

// 0x6B8A30
namespace gamemd {
void sub_6B8A30()
{
  dbl_B0B8E8 = Math::ArcTan((double)(2 * dword_B0B918) / dbl_B0B8C0); /*0x6b8a52*/
}
} // namespace gamemd

// 0x6B8A60
namespace gamemd {
long long sub_6B8A60()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0B918) + 0.5); /*0x6b8a7b*/
  dword_B0B90C = result; /*0x6b8a80*/
  return result; /*0x6b8a86*/
}
} // namespace gamemd

// 0x6B8A90
namespace gamemd {
int sub_6B8A90()
{
  word_B0B8B8 = 0; /*0x6b8a92*/
  word_B0B8BA = 0; /*0x6b8a98*/
  return 0; /*0x6b8a9e*/
}
} // namespace gamemd

// 0x6B8AA0
namespace gamemd {
int sub_6B8AA0()
{
  dword_B0B8D8 = 0; /*0x6b8aa2*/
  dword_B0B8DC = 0; /*0x6b8aa7*/
  dword_B0B8E0 = 0; /*0x6b8aac*/
  return 0; /*0x6b8ab1*/
}
} // namespace gamemd

// 0x6B8AC0
namespace gamemd {
int sub_6B8AC0()
{
  dword_B0B908 = 0; /*0x6b8ac5*/
  dword_B0B900 = 128; /*0x6b8acf*/
  dword_B0B904 = 128; /*0x6b8ad4*/
  return 128; /*0x6b8ad9*/
}
} // namespace gamemd

// 0x6B8B10
namespace gamemd {
void ObjectClass::nullsub_37()
{

  ; /*0x6b8b10*/

}
} // namespace gamemd

// 0x6B8B20
namespace gamemd {
void ObjectClass::nullsub_38()
{

  ; /*0x6b8b20*/

}
} // namespace gamemd

// 0x6B8EE0
namespace gamemd {
int sub_6B8EE0()
{
  dword_B0B920 = 0; /*0x6b8ee2*/
  dword_B0B924 = 0; /*0x6b8ee7*/
  dword_B0B928 = 0; /*0x6b8eec*/
  dword_B0B92C = 0; /*0x6b8ef1*/
  return 0; /*0x6b8ef6*/
}
} // namespace gamemd

// 0x6B9350
namespace gamemd {
int sub_6B9350()
{
  dword_B0B938 = 0; /*0x6b9352*/
  dword_B0B93C = 0; /*0x6b9357*/
  dword_B0B940 = 0; /*0x6b935c*/
  dword_B0B944 = 0; /*0x6b9361*/
  return 0; /*0x6b9366*/
}
} // namespace gamemd

// 0x6B93E0
namespace gamemd {
int E4Recv_6B93E0::sub_6B93E0()
{

  uint8_t *v1; // ecx
  int v2; // ebp
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  int result; // eax

  v1 = (uint8_t *)&this->u32_8; /*0x6b93e4*/
  v2 = 256; /*0x6b93e7*/
  do /*0x6b943e*/
  {
    v3 = *v1; /*0x6b93f7*/
    v4 = *(v1 - 2); /*0x6b93fe*/
    LOBYTE(v5) = -1; /*0x6b9415*/
    if ( 15 * *(v1 - 1) / 10 <= 255 ) /*0x6b9422*/
      v5 = 15 * *(v1 - 1) / 10; /*0x6b9424*/
    *(v1 - 2) = v5; /*0x6b9426*/
    *(v1 - 1) = v4; /*0x6b942f*/
    v1 += 3; /*0x6b9434*/
    result = v3 / 4; /*0x6b9437*/
    *(v1 - 3) = v3 / 4; /*0x6b943a*/
    --v2; /*0x6b943d*/
  }
  while ( v2 ); /*0x6b943e*/
  return result; /*0x6b9440*/

}
} // namespace gamemd

// 0x6B9450
namespace gamemd {
unsigned int * E4Recv_6B9450::sub_6B9450()
{

  char *v2; // ecx
  unsigned int v3; // edi
  int v4; // eax
  void *v5; // edi
  unsigned int v6; // edx

  ((unsigned int *)this)[0] = (void *)-1717986918; /*0x6b945a*/
  this->owningHouseIndex = -1717986918; /*0x6b945d*/
  this->occupant = 1070176665; /*0x6b9466*/
  this->fallRate = 1072273817; /*0x6b946d*/
  this->nextObject = (ObjectClass *)128; /*0x6b9474*/
  ((unsigned int *)this)[0] = 128; /*0x6b9477*/
  ((unsigned int *)this)[0] = (void *)128; /*0x6b947a*/
  ((unsigned int *)this)[0] = 0; /*0x6b947d*/
  v2 = 0; /*0x6b9480*/
  v3 = 128; /*0x6b9482*/
  do /*0x6b9489*/
  {
    ++v2; /*0x6b9484*/
    v3 >>= 1; /*0x6b9485*/
  }
  while ( v3 ); /*0x6b9489*/
  ((unsigned int *)this)[0] = v2; /*0x6b948b*/
  ((unsigned int *)this)[0] = 0; /*0x6b9496*/
  v4 = 1 << ((unsigned char)v2 - 1); /*0x6b9499*/
  ((unsigned int *)this)[0] = v2 - 1; /*0x6b949b*/
  ((unsigned int *)this)[0] = 0; /*0x6b949e*/
  LOBYTE(((unsigned int *)this)[0]) = 0; /*0x6b94a1*/
  ((unsigned int *)this)[0] = (void *)v4; /*0x6b94a4*/
  v5 = (void *)__2_YAPAXI_Z(4 * v4); /*0x6b94b3*/
  v6 = 4 * (int)((unsigned int *)this)[0]; /*0x6b94b8*/
  this->AbstractClass = v5; /*0x6b94bf*/
  memset(v5, 0, v6); /*0x6b94c4*/
  ((unsigned int *)this)[0] = (int)sub_6B94E0; /*0x6b94cd*/
  return this; /*0x6b94d6*/

}
} // namespace gamemd

// 0x6B94E0
namespace gamemd {
unsigned int E4Recv_6B94E0::sub_6B94E0()
{

  unsigned int v2; // esi
  unsigned int i; // edi
  char *v4; // eax

  v2 = ((String*)((String *)this))->Length(); /*0x6b94ec*/
  for ( i = 0; i < ((String*)((String *)this))->Length(); ++i ) /*0x6b94f0*/
  {
    v4 = ((String *)((String *)this))->GetOrEmpty(); /*0x6b94fb*/
    v2 = ((i + v4[i] + v2) >> 24) ^ ((i + v4[i] + v2) << 8); /*0x6b9510*/
  }
  return v2; /*0x6b9520*/

}
} // namespace gamemd

// 0x6BA220
namespace gamemd {
void nullsub_39()
{
  ; /*0x6ba220*/
}
} // namespace gamemd

// 0x6BA680
namespace gamemd {
char sub_6BA680(int a1, int a2, int a3)
{
  return 0; /*0x6ba682*/
}
} // namespace gamemd

// 0x6BB050
namespace gamemd {
int sub_6BB050()
{
  dword_B0BC58 = 0; /*0x6bb052*/
  dword_B0BC5C = 0; /*0x6bb057*/
  dword_B0BC60 = 0; /*0x6bb05c*/
  dword_B0BC64 = 0; /*0x6bb061*/
  return 0; /*0x6bb066*/
}
} // namespace gamemd

// 0x6BB070
namespace gamemd {
void sub_6BB070()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6bb07c*/
  dbl_B0BC70 = Math::Sqrt(v0 + v0); /*0x6bb08e*/
}
} // namespace gamemd

// 0x6BB0A0
namespace gamemd {
void sub_6BB0A0()
{
  dbl_B0BCD8 = dbl_B0BC70 / 60.0; /*0x6bb0ac*/
}
} // namespace gamemd

// 0x6BB0C0
namespace gamemd {
void sub_6BB0C0()
{
  dbl_B0BCC0 = 1.0 / dbl_B0BCD8; /*0x6bb0cc*/
}
} // namespace gamemd

// 0x6BB0E0
namespace gamemd {
void sub_6BB0E0()
{
  dbl_B0BCB8 = 0.0174532925199433 * 45.0; /*0x6bb0ec*/
}
} // namespace gamemd

// 0x6BB100
namespace gamemd {
void sub_6BB100()
{
  dbl_B0BC78 = 0.0174532925199433 * 60.0; /*0x6bb10c*/
}
} // namespace gamemd

// 0x6BB120
namespace gamemd {
void sub_6BB120()
{
  dbl_B0BC50 = 0.0174532925199433 * 90.0; /*0x6bb12c*/
}
} // namespace gamemd

// 0x6BB140
namespace gamemd {
long long sub_6BB140()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0BC50 - dbl_B0BC78); /*0x6bb152*/
  result = Math::RoundToInt(v0 * dbl_B0BC70 * 0.5); /*0x6bb166*/
  dword_B0BCE0 = result; /*0x6bb16b*/
  return result; /*0x6bb170*/
}
} // namespace gamemd

// 0x6BB180
namespace gamemd {
void sub_6BB180()
{
  dbl_B0BC80 = Math::ArcTan((double)dword_B0BCE0 * 0.00390625); /*0x6bb197*/
}
} // namespace gamemd

// 0x6BB1B0
namespace gamemd {
void sub_6BB1B0()
{
  dbl_B0BCB0 = Math::ArcTan((double)(2 * dword_B0BCE0) / dbl_B0BC70); /*0x6bb1d2*/
}
} // namespace gamemd

// 0x6BB1E0
namespace gamemd {
long long sub_6BB1E0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0BCE0) + 0.5); /*0x6bb1fb*/
  dword_B0BCD4 = result; /*0x6bb200*/
  return result; /*0x6bb206*/
}
} // namespace gamemd

// 0x6BB210
namespace gamemd {
int sub_6BB210()
{
  word_B0BC68 = 0; /*0x6bb212*/
  word_B0BC6A = 0; /*0x6bb218*/
  return 0; /*0x6bb21e*/
}
} // namespace gamemd

// 0x6BB220
namespace gamemd {
int sub_6BB220()
{
  dword_B0BCA0 = 0; /*0x6bb222*/
  dword_B0BCA4 = 0; /*0x6bb227*/
  dword_B0BCA8 = 0; /*0x6bb22c*/
  return 0; /*0x6bb231*/
}
} // namespace gamemd

// 0x6BB240
namespace gamemd {
int sub_6BB240()
{
  dword_B0BCD0 = 0; /*0x6bb245*/
  dword_B0BCC8 = 128; /*0x6bb24f*/
  dword_B0BCCC = 128; /*0x6bb254*/
  return 128; /*0x6bb259*/
}
} // namespace gamemd

// 0x6BB260
namespace gamemd {
int sub_6BB260()
{
  dword_B0BC8C = 0; /*0x6bb267*/
  dword_B0BC90 = 0; /*0x6bb26c*/
  byte_B0BC94 = 1; /*0x6bb271*/
  byte_B0BC95 = 0; /*0x6bb278*/
  g_AnimationManager = (int)&DynamicVectorClass_unsigned_long_vftable; /*0x6bb27d*/
  dword_B0BC9C = 10; /*0x6bb287*/
  dword_B0BC98 = 0; /*0x6bb291*/
  return atexit(sub_6BB2A0); /*0x6bb29c*/
}
} // namespace gamemd

// 0x6BB2A0
namespace gamemd {
void sub_6BB2A0()
{
  g_AnimationManager = (int)&VectorClass_unsigned_long_vftable; /*0x6bb2a8*/
  if ( dword_B0BC8C && byte_B0BC95 ) /*0x6bb2bc*/
  {
    RA2_OPDEL(dword_B0BC8C); /*0x6bb2bf*/
    dword_B0BC8C = 0; /*0x6bb2c7*/
  }
  byte_B0BC95 = 0; /*0x6bb2cd*/
  dword_B0BC90 = 0; /*0x6bb2d3*/
}
} // namespace gamemd

// 0x6BB2E0
namespace gamemd {
char WriteRegistryKeyCOM(LPCSTR lpString2, LPCSTR a2, LPCSTR lpString)
{
  char v4; // bl
  int result; // eax
  int v6; // eax
  HKEY phkResult; // [esp+8h] [ebp-108h] BYREF
  CHAR String1[260]; // [esp+Ch] [ebp-104h] BYREF

  v4 = 0; /*0x6bb2f0*/
  lstrcpyA(String1, lpString2); /*0x6bb2f2*/
  if ( a2 ) /*0x6bb2fa*/
  {
    lstrcatA(String1, asc_815E74); /*0x6bb30d*/
    lstrcatA(String1, a2); /*0x6bb315*/
  }
  result = RegCreateKeyExA(HKEY_CLASSES_ROOT, String1, 0, 0, 0, 0xF003Fu, 0, &phkResult, 0); /*0x6bb336*/
  if ( !result ) /*0x6bb33e*/
  {
    if ( !lpString || (v6 = lstrlenA(lpString), !RegSetValueExA(phkResult, 0, 0, 1u, (const BYTE *)lpString, v6 + 1)) ) /*0x6bb360*/
      v4 = 1; /*0x6bb36a*/
    result = RegCloseKey(phkResult); /*0x6bb371*/
  }
  IDA_LOBYTE(result) = v4; /*0x6bb377*/
  return result; /*0x6bb379*/
}
} // namespace gamemd

// 0x6BB760
namespace gamemd {
int sub_6BB760()
{
  CHAR String1[72]; // [esp+8h] [ebp-1ECh] BYREF
  CHAR MultiByteStr[40]; // [esp+50h] [ebp-1A4h] BYREF
  CHAR SubKey[300]; // [esp+78h] [ebp-17Ch] BYREF
  OLECHAR sz[40]; // [esp+1A4h] [ebp-50h] BYREF

  StringFromGUID2(&rguid, sz, 39); /*0x6bb777*/
  WideCharToMultiByte(0, 0x20u, sz, -1, MultiByteStr, 39, 0, 0); /*0x6bb796*/
  lstrcpyA(String1, aClsid); /*0x6bb7a6*/
  lstrcatA(String1, MultiByteStr); /*0x6bb7b6*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, aWwTiberiansunC); /*0x6bb7cc*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, aWwTiberiansunC_0); /*0x6bb7d8*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, g_Str_WW_TiberianSun); /*0x6bb7e4*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, aWwTiberiansun1_0); /*0x6bb7f0*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, (LPCSTR)g_Str_WW_TiberianSun_1); /*0x6bb7fc*/
  wsprintfA(SubKey, "%s\\%s", String1, aProgid); /*0x6bb81b*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, SubKey); /*0x6bb82a*/
  wsprintfA(SubKey, "%s\\%s", String1, aVersionindepen); /*0x6bb840*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, SubKey); /*0x6bb84f*/
  wsprintfA(SubKey, "%s\\%s", String1, aNotinsertable); /*0x6bb865*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, SubKey); /*0x6bb874*/
  wsprintfA(SubKey, "%s\\%s", String1, aInprocserver32); /*0x6bb88d*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, SubKey); /*0x6bb89c*/
  wsprintfA(SubKey, "%s\\%s", String1, aTypelib); /*0x6bb8b2*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, SubKey); /*0x6bb8c1*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, String1); /*0x6bb8cd*/
  return 0; /*0x6bb8d1*/
}
} // namespace gamemd

// 0x6BEC50
namespace gamemd {
void  __noreturn E4Recv_6BEC50::ExitProgram(void * Code)
{

  exit((int)Code); /*0x6bec51*/

}
} // namespace gamemd
