// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x409DE0
namespace ra2 {
namespace game {
int AudioController::LoadThemeBank(int a1, char * a2, signed int * a3, char * a4, signed int * a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_409DE0(int a1, char *a2, signed int *a3, char *a4, signed int *a5)
{
  signed int v7; // edx
  unsigned int v8; // eax
  const void *v9; // esi
  int v10; // eax
  signed int v11; // edx
  int v12; // ecx
  unsigned int v13; // eax
  int v14; // eax
  int v15; // eax
  signed int v17; // [esp+10h] [ebp-14h]
  signed int v18; // [esp+14h] [ebp-10h]
  signed int v20; // [esp+1Ch] [ebp-8h]
  signed int v21; // [esp+20h] [ebp-4h]

  v17 = 0; /*0x409df7*/
  v18 = 0; /*0x409dfb*/
  v20 = 0; /*0x409dff*/
  v21 = 0; /*0x409e03*/
  if ( !*(_DWORD *)(a1 + 144) || !*(_DWORD *)(a1 + 124) ) /*0x409e0d*/
    return 0; /*0x409fd0*/
  if ( a5 ) /*0x409e1c*/
    v17 = *a5; /*0x409e20*/
  if ( a3 ) /*0x409e2a*/
    v18 = *a3; /*0x409e2e*/
  while ( 2 ) /*0x409e3e*/
  {
    switch ( *(_DWORD *)(a1 + 116) ) /*0x409e3e*/
    {
      case 0: /*0x409e3e*/
        v7 = *(_DWORD *)(a1 + 132); /*0x409e45*/
        if ( v7 && a4 ) /*0x409e51*/
        {
          v8 = *(_DWORD *)(a1 + 132); /*0x409e57*/
          if ( v7 > v17 ) /*0x409e5b*/
            v8 = v17; /*0x409e5d*/
          if ( !v8 ) /*0x409e61*/
            goto LABEL_25; /*0x409e61*/
          v9 = a4; /*0x409e78*/
          a4 += v8; /*0x409e7a*/
          qmemcpy((void *)(*(_DWORD *)(a1 + 124) + *(_DWORD *)(a1 + 128) - v7), v9, v8); /*0x409e7f*/
          v20 += v8; /*0x409e9c*/
          v17 -= v8; /*0x409ea0*/
          *(_DWORD *)(a1 + 132) -= v8; /*0x409ea4*/
          *(_DWORD *)(a1 + 168) = 1; /*0x409eaa*/
        }
        else
        {
          v10 = *(_DWORD *)(a1 + 120); /*0x409ebb*/
          *(_DWORD *)(a1 + 132) = 0; /*0x409ebe*/
          *(_DWORD *)(a1 + 116) = v10; /*0x409ec4*/
        }
        continue; /*0x409eb6*/
      case 1: /*0x409e3e*/
        v11 = *(_DWORD *)(a1 + 152); /*0x409ecc*/
        if ( !v11 ) /*0x409ed4*/
        {
          v12 = *(_DWORD *)(a1 + 120); /*0x409ed6*/
          *(_DWORD *)(a1 + 168) = 0; /*0x409ed9*/
          *(_DWORD *)(a1 + 116) = v12; /*0x409edf*/
          continue; /*0x409ee2*/
        }
        v13 = *(_DWORD *)(a1 + 152); /*0x409eeb*/
        if ( v11 > v18 ) /*0x409eef*/
          v13 = v18; /*0x409ef1*/
        if ( v13 ) /*0x409ef5*/
        {
          qmemcpy(a2, (const void *)(*(_DWORD *)(a1 + 144) + *(_DWORD *)(a1 + 148) - v11), v13); /*0x409f16*/
          v21 += v13; /*0x409f39*/
          a2 += v13; /*0x409f3d*/
          v18 -= v13; /*0x409f41*/
          *(_DWORD *)(a1 + 152) -= v13; /*0x409f45*/
          continue; /*0x409f4d*/
        }
LABEL_25:
        if ( a5 ) /*0x409fa8*/
          *a5 = v20; /*0x409fae*/
        if ( a3 ) /*0x409fb6*/
          *a3 = v21; /*0x409fbc*/
        return 1;
      case 2: /*0x409e3e*/
        if ( !(*(int (__thiscall **)(int))(a1 + 176))(a1) ) /*0x409f5c*/
          return 0; /*0x409f5c*/
        v14 = *(_DWORD *)(a1 + 148); /*0x409f5e*/
        *(_DWORD *)(a1 + 116) = 1; /*0x409f64*/
        *(_DWORD *)(a1 + 152) = v14; /*0x409f6b*/
        *(_DWORD *)(a1 + 120) = 3; /*0x409f71*/
        continue; /*0x409f78*/
      case 3: /*0x409e3e*/
        if ( !a4 ) /*0x409f7f*/
          goto LABEL_25; /*0x409f7f*/
        v15 = *(_DWORD *)(a1 + 172); /*0x409f81*/
        *(_DWORD *)(a1 + 116) = 0; /*0x409f87*/
        *(_DWORD *)(a1 + 128) = v15; /*0x409f8a*/
        *(_DWORD *)(a1 + 132) = v15; /*0x409f90*/
        *(_DWORD *)(a1 + 120) = 2; /*0x409f96*/
        continue; /*0x409f9d*/
      default:
        continue;
    }
  }
}
}
} // namespace game
} // namespace ra2

// 0x72D170
namespace ra2 {
namespace game {
void AudioController::GetVolume()
{
{
    void *v0;
    if ( DataGlobal_B0FCCE )
  {
    if ( DataGlobal_B0FCCD )
    {
    v0 = DataGlobal_B0FAB8;
    if ( DataGlobal_B0FAB8 )
      {
    FileTreeNode::Destroy(DataGlobal_B0FAB8);
    __3_YAXPAX_Z(v0);
      }
    DataGlobal_B0FCCD = 0;
    }
    DataGlobal_B0FAB8 = 0;
    if ( DataGlobal_B0FCD0 )
    {
    __3_YAXPAX_Z(DataGlobal_B0FCD0);
    DataGlobal_B0FCD0 = 0;
    }
    if ( DataGlobal_B0FCD4 )
    {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FCD4)(DataGlobal_B0FCD4, 1);
    DataGlobal_B0FCD4 = 0;
    }
  }
    DataGlobal_B0FCCE = 0;
}
}
} // namespace game
} // namespace ra2
