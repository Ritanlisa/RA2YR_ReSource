// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/TunnelLocomotionClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x728C00
namespace gamemd {
void TunnelLocomotionClass::ProcessFormationPosition(unsigned int * a1)
{
  unsigned int *v2; // esi
  int v3; // eax
  int v4; // edx
  double v5; // st7
  int TileIndexMapClass; // eax
  int v7; // eax
  int v8; // [esp+14h] [ebp-20h] BYREF
  int16_t v9[2]; // [esp+18h] [ebp-1Ch] BYREF
  int16_t v10[2]; // [esp+1Ch] [ebp-18h] BYREF
  unsigned char v11[4]; // [esp+20h] [ebp-14h] BYREF
  int v12; // [esp+24h] [ebp-10h] BYREF
  int v13; // [esp+28h] [ebp-Ch] BYREF
  int v14; // [esp+2Ch] [ebp-8h]
  int v15; // [esp+30h] [ebp-4h]
  uint16_t v16; // [esp+3Ah] [ebp+6h]

  switch ( a1[5] ) /*0x728c17*/
  {
    case 1: /*0x728c17*/
    case 5: /*0x728c17*/
    case 6: /*0x728c17*/
    case 7: /*0x728c17*/
      goto LABEL_11;
    case 2: /*0x728c17*/
      a1[5] = 7; /*0x728dd9*/
      goto LABEL_11; /*0x728dd9*/
    case 3: /*0x728c17*/
      a1[5] = 5; /*0x728dd0*/
  LABEL_11:
      a1[6] = dword_B0F910; /*0x728de0*/
      a1[7] = dword_B0F914; /*0x728df0*/
      a1[8] = dword_B0F918; /*0x728df9*/
      break; /*0x728df9*/
    case 4: /*0x728c17*/
      v2 = a1 + 6; /*0x728c29*/
      v3 = *(unsigned int *)(a1[2] + 156); /*0x728c31*/
      v4 = *(unsigned int *)(a1[2] + 164); /*0x728c38*/
      v14 = *(unsigned int *)(a1[2] + 160) - a1[7]; /*0x728c3b*/
      v15 = v4; /*0x728c43*/
      v13 = v3 - a1[6]; /*0x728c4b*/
      v5 = Math::Sqrt((double)v13 * (double)v13 + (double)v14 * (double)v14); /*0x728c64*/
      if ( (double)(int)Math::RoundToInt(v5) > dbl_B0F8F8 ) /*0x728c84*/
      {
        v8 = *(unsigned int *)(*(int (__thiscall **)(unsigned int, unsigned char *))(*(unsigned int *)a1[2] + 440))(a1[2], v11); /*0x728c9e*/
        v9[0] = 0; /*0x728cc4*/
        v9[1] = 0; /*0x728cc9*/
        TileIndexMapClass = MapClass::GetTileIndex(&MapClass_Instance, (int16_t *)&v8, 0, 0); /*0x728cce*/
        v7 = *LayerClass::Pathfinding_Find( /*0x728cea*/
                &MapClass_Instance,
                (int)&v12,
                &v12,
                (int16_t *)&v8,
                1,
                TileIndexMapClass,
                0,
                0,
                1,
                1,
                0,
                0,
                1,
                1,
                v9,
                0,
                0);
        v16 = IDA_HIWORD(v7); /*0x728cf3*/
        if ( (unsigned short)v7 != (unsigned short)dword_B0F8F0 ) /*0x728cf7*/
          goto LABEL_8; /*0x728cf7*/
        if ( IDA_HIWORD(v7) == IDA_HIWORD(dword_B0F8F0) ) /*0x728d09*/
        {
          v10[0] = 0; /*0x728d33*/
          v10[1] = 0; /*0x728d38*/
          v7 = *LayerClass::Pathfinding_Find( /*0x728d42*/
                  &MapClass_Instance,
                  (int)v10,
                  &v13,
                  (int16_t *)&v8,
                  1,
                  -1,
                  0,
                  0,
                  1,
                  1,
                  0,
                  0,
                  1,
                  1,
                  v10,
                  0,
                  0);
          v16 = IDA_HIWORD(v7); /*0x728d44*/
        }
        if ( IDA___PAIR32__(v16, v7) == dword_B0F8F0 ) /*0x728d4f*/
        {
          (*(void (__stdcall **)(int, unsigned int, int, unsigned int, int, int, unsigned int))(*(unsigned int *)a1[2] + 364))( /*0x728d7c*/
            a1[2] + 108,
            0,
            g_RulesClass_Instance->SilverCrate[5],
            0,
            1,
            1,
            0);
          *v2 = dword_B0F910; /*0x728d88*/
          a1[7] = dword_B0F914; /*0x728d90*/
          a1[8] = dword_B0F918; /*0x728d99*/
        }
        else
        {
  LABEL_8:
          *v2 = ((int16_t)v7 << 8) + 128; /*0x728dbf*/
          a1[7] = ((int16_t)v16 << 8) + 128; /*0x728dc1*/
          a1[8] = 0; /*0x728dc4*/
        }
      }
      break; /*0x728da1*/
    default:
      return;
  }
}
} // namespace gamemd
// 0x72A110
namespace gamemd {
int TunnelLocomotionClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x72a116*/
    return -2147467261; /*0x72a118*/
  *a2 = 1247291203; /*0x72a126*/
  a2[1] = 298948665; /*0x72a12e*/
  a2[2] = -1610610249; /*0x72a137*/
  a2[3] = -777003740; /*0x72a140*/
  return 0; /*0x72a11d*/
}
} // namespace gamemd
// 0x72A150
namespace gamemd {
int TunnelLocomotionClass::BeginMove(int * a1, int * a2)
{
  int result; // eax
  unsigned int v3;

  result = SwizzleManager::SaveLoad(a1, a2); /*0x72a15b*/
  if ( result >= 0 ) /*0x72a164*/
  {
    if ( a1 ) /*0x72a168*/
    {
      *a1 = (int)&LocomotionClass_vftable; /*0x72a16a*/
      a1[1] = (int)&LocomotionClass_vftable; /*0x72a170*/
      v3 = g_CurrentFrame; /*0x72a177*/
      a1[12] = 0; /*0x72a17d*/
      a1[10] = (int)v3; /*0x72a180*/
      a1[13] = 0; /*0x72a183*/
      *a1 = (int)&TunnelLocomotionClass_vftable; /*0x72a186*/
      a1[1] = (int)&TunnelLocomotionClass_vftable; /*0x72a18c*/
    }
  }
  return result; /*0x72a193*/
}
} // namespace gamemd
// 0x72A200
namespace gamemd {
int TunnelLocomotionClass::StubReturn60()
{
  return 60; /*0x72a205*/
}
} // namespace gamemd
// 0x72A210
namespace gamemd {
TunnelLocomotionClass * TunnelLocomotionClass::ProcessMove(char a2)
{
  LocomotionClass::Construct(); /*0x72a213*/
  if ( (a2 & 1) != 0 ) /*0x72a21d*/
    RA2_OPDEL(); /*0x72a220*/
  return this; /*0x72a22a*/
}
} // namespace gamemd