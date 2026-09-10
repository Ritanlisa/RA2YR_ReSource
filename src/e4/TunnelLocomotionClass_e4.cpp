// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x728C00
void TunnelLocomotionClass::ProcessFormationPosition(unsigned int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __stdcall TunnelLocomotionClass::ProcessFormationPosition(_DWORD *a1)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // edx
  double v5; // st7
  int TileIndexMapClass; // eax
  int v7; // eax
  int v8; // [esp+14h] [ebp-20h] BYREF
  __int16 v9[2]; // [esp+18h] [ebp-1Ch] BYREF
  __int16 v10[2]; // [esp+1Ch] [ebp-18h] BYREF
  _BYTE v11[4]; // [esp+20h] [ebp-14h] BYREF
  int v12; // [esp+24h] [ebp-10h] BYREF
  int v13; // [esp+28h] [ebp-Ch] BYREF
  int v14; // [esp+2Ch] [ebp-8h]
  int v15; // [esp+30h] [ebp-4h]
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
      a1[6] = MEMORY[0xB0F910]; /*0x728de0*/
      a1[7] = MEMORY[0xB0F914]; /*0x728df0*/
      a1[8] = MEMORY[0xB0F918]; /*0x728df9*/
      break; /*0x728df9*/
    case 4: /*0x728c17*/
      v2 = a1 + 6; /*0x728c29*/
      v3 = *(_DWORD *)(a1[2] + 156); /*0x728c31*/
      v4 = *(_DWORD *)(a1[2] + 164); /*0x728c38*/
      v14 = *(_DWORD *)(a1[2] + 160) - a1[7]; /*0x728c3b*/
      v15 = v4; /*0x728c43*/
      v13 = v3 - a1[6]; /*0x728c4b*/
      v5 = Math::Sqrt((double)v13 * (double)v13 + (double)v14 * (double)v14); /*0x728c64*/
      if ( (double)(int)Math::RoundToInt(v5) > MEMORY[0xB0F8F8] ) /*0x728c84*/
      {
        v8 = *(_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(*(_DWORD *)a1[2] + 440))(a1[2], v11); /*0x728c9e*/
        v9[0] = 0; /*0x728cc4*/
        v9[1] = 0; /*0x728cc9*/
        TileIndexMapClass = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v8, 0, 0); /*0x728cce*/
        v7 = *LayerClass::Pathfinding_Find( /*0x728cea*/
                &MEMORY[0x87F7E8],
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
        if ( (_WORD)v7 != (_WORD)MEMORY[0xB0F8F0] ) /*0x728cf7*/
          goto LABEL_8; /*0x728cf7*/
        if ( HIWORD(v7) == HIWORD(MEMORY[0xB0F8F0]) ) /*0x728d09*/
        {
          v10[0] = 0; /*0x728d33*/
          v10[1] = 0; /*0x728d38*/
          v7 = *LayerClass::Pathfinding_Find( /*0x728d42*/
                  &MEMORY[0x87F7E8],
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
        if ( __PAIR32__(v16, v7) == MEMORY[0xB0F8F0] ) /*0x728d4f*/
        {
          (*(void (__stdcall **)(int, _DWORD, int, _DWORD, int, int, _DWORD))(*(_DWORD *)a1[2] + 364))( /*0x728d7c*/
            a1[2] + 108,
            0,
            MEMORY[0x8871E0]->?[5],
            0,
            1,
            1,
            0);
          *v2 = MEMORY[0xB0F910]; /*0x728d88*/
          a1[7] = MEMORY[0xB0F914]; /*0x728d90*/
          a1[8] = MEMORY[0xB0F918]; /*0x728d99*/
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

// 0x72A150
int TunnelLocomotionClass::BeginMove(int * a1, int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall TunnelLocomotionClass::_vt05(int *a1, int *a2)
{
  int result; // eax
  wchar_t *v3; // edx

  result = SwizzleManager::SaveLoad(a1, a2); /*0x72a15b*/
  if ( result >= 0 ) /*0x72a164*/
  {
    if ( a1 ) /*0x72a168*/
    {
      *a1 = (int)&LocomotionClass::`vftable'; /*0x72a16a*/
      a1[1] = (int)&LocomotionClass::`vftable'; /*0x72a170*/
      v3 = MEMORY[0xA8ED84]; /*0x72a177*/
      a1[12] = 0; /*0x72a17d*/
      a1[10] = (int)v3; /*0x72a180*/
      a1[13] = 0; /*0x72a183*/
      *a1 = (int)&TunnelLocomotionClass::`vftable'; /*0x72a186*/
      a1[1] = (int)&TunnelLocomotionClass::`vftable'; /*0x72a18c*/
    }
  }
  return result; /*0x72a193*/
}
}

// 0x72A210
TunnelLocomotionClass * TunnelLocomotionClass::ProcessMove(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
TunnelLocomotionClass *__thiscall TunnelLocomotionClass::ProcessMove(_DWORD *Block, char a2)
{
  LocomotionClass::Construct(Block); /*0x72a213*/
  if ( (a2 & 1) != 0 ) /*0x72a21d*/
    __3_YAXPAX_Z(Block); /*0x72a220*/
  return (TunnelLocomotionClass *)Block; /*0x72a22a*/
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

// 0x72A200
int TunnelLocomotionClass::StubReturn60()
{
return 60;
}
