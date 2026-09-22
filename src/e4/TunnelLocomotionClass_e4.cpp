// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Math_e4.hpp"

// 0x728C00
void TunnelLocomotionClass::ProcessFormationPosition(unsigned int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int TileIndexMapClass; // eax
  __int16 v9[2]; // [esp+18h] [ebp-1Ch] BYREF
  __int16 v10[2]; // [esp+1Ch] [ebp-18h] BYREF
  unsigned __int16 v16; // [esp+3Ah] [ebp+6h]
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
      a1[6] = DataGlobal_B0F910; /*0x728de0*/
      a1[7] = DataGlobal_B0F914; /*0x728df0*/
      a1[8] = DataGlobal_B0F918; /*0x728df9*/
      break; /*0x728df9*/
    case 4: /*0x728c17*/
      _DWORD * v2 = a1 + 6; /*0x728c29*/
      int v3 = *(_DWORD *)(a1[2] + 156); /*0x728c31*/
      int v4 = *(_DWORD *)(a1[2] + 164); /*0x728c38*/
      int v14 = *(_DWORD *)(a1[2] + 160) - a1[7]; /*0x728c3b*/
      int v15 = v4; /*0x728c43*/
      int v13 = v3 - a1[6]; /*0x728c4b*/
      double v5 = Math::Sqrt((double)v13 * (double)v13 + (double)v14 * (double)v14); /*0x728c64*/
      if ( (double)(int)Math::RoundToInt(v5) > DataGlobal_B0F8F8 ) /*0x728c84*/
      {
  _BYTE v11[4]; // [esp+20h] [ebp-14h] BYREF
        int v8 = *(_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(*(_DWORD *)a1[2] + 440))(a1[2], v11); /*0x728c9e*/
        v9[0] = 0; /*0x728cc4*/
        v9[1] = 0; /*0x728cc9*/
        TileIndexMapClass = MapClass::GetTileIndex(&DataGlobal_87F7E8, (__int16 *)&v8, 0, 0); /*0x728cce*/
  int v7; // eax
        v7 = *LayerClass::Pathfinding_Find( /*0x728cea*/
                &DataGlobal_87F7E8,
  int v12; // [esp+24h] [ebp-10h] BYREF
                (int)&v12,
                &v12,
                (__int16 *)&v8,
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
        v16 = HIWORD(v7); /*0x728cf3*/
        if ( (_WORD)v7 != (_WORD)DataGlobal_B0F8F0 ) /*0x728cf7*/
          goto LABEL_8; /*0x728cf7*/
        if ( HIWORD(v7) == HIWORD(DataGlobal_B0F8F0) ) /*0x728d09*/
        {
          v10[0] = 0; /*0x728d33*/
          v10[1] = 0; /*0x728d38*/
          v7 = *LayerClass::Pathfinding_Find( /*0x728d42*/
                  &DataGlobal_87F7E8,
                  (int)v10,
                  &v13,
                  (__int16 *)&v8,
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
          v16 = HIWORD(v7); /*0x728d44*/
        }
        if ( __PAIR32__(v16, v7) == DataGlobal_B0F8F0 ) /*0x728d4f*/
        {
          (*(void (__stdcall **)(int, _DWORD, int, _DWORD, int, int, _DWORD))(*(_DWORD *)a1[2] + 364))( /*0x728d7c*/
            a1[2] + 108,
            0,
            g_RulesClass_Instance->?[5],
            0,
            1,
            1,
            0);
          *v2 = DataGlobal_B0F910; /*0x728d88*/
          a1[7] = DataGlobal_B0F914; /*0x728d90*/
          a1[8] = DataGlobal_B0F918; /*0x728d99*/
        }
        else
        {
LABEL_8:
          *v2 = ((__int16)v7 << 8) + 128; /*0x728dbf*/
          a1[7] = ((__int16)v16 << 8) + 128; /*0x728dc1*/
          a1[8] = 0; /*0x728dc4*/
        }
      }
      break; /*0x728da1*/
    default:
      return;
  }
}
}

// 0x72A110
int TunnelLocomotionClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1247291203;
  a2[1] = 298948665;
  a2[2] = -1610610249;
  a2[3] = -777003740;
  return 0;
}

// 0x72A150
int TunnelLocomotionClass::BeginMove(int * a1, int * a2)
{
{
    int result;
    wchar_t *v3;
    result = SwizzleManager::SaveLoad(a1, a2);
    if ( result >= 0 )
  {
    if ( a1 )
    {
    *a1 = (int)(unsigned int)vt_LocomotionClass;
    *((int*)(a1) + 1) = (int)&vt_LocomotionClass;
    v3 = g_CurrentFrame;
    *((int*)(a1) + 12) = 0;
    *((int*)(a1) + 10) = (int)v3;
    *((int*)(a1) + 13) = 0;
    *a1 = (int)(unsigned int)vt_TunnelLocomotionClass;
    *((int*)(a1) + 1) = (int)&vt_TunnelLocomotionClass;
    }
  }
    return result;
}
}

// 0x72A200
int TunnelLocomotionClass::StubReturn60()
{
return 60;
}

// 0x72A210
TunnelLocomotionClass * TunnelLocomotionClass::ProcessMove(char a2)
{
{
    LocomotionClass::Construct(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (TunnelLocomotionClass *)this;
}
}
