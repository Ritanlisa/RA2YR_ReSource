// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AudioController_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/FileTreeNode_e4.hpp"
#include "e4/classes/String_e4.hpp"

// 0x409DE0
namespace gamemd {  // G42.18 ns repair
int AudioController::LoadThemeBank(int a1, char * a2, signed int * a3, char * a4, signed int * a5)
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
  if ( !*(unsigned int *)(a1 + 144) || !*(unsigned int *)(a1 + 124) ) /*0x409e0d*/
    return 0; /*0x409fd0*/
  if ( a5 ) /*0x409e1c*/
    v17 = *a5; /*0x409e20*/
  if ( a3 ) /*0x409e2a*/
    v18 = *a3; /*0x409e2e*/
  while ( 2 ) /*0x409e3e*/
  {
    switch ( *(unsigned int *)(a1 + 116) ) /*0x409e3e*/
    {
      case 0: /*0x409e3e*/
        v7 = *(unsigned int *)(a1 + 132); /*0x409e45*/
        if ( v7 && a4 ) /*0x409e51*/
        {
          v8 = *(unsigned int *)(a1 + 132); /*0x409e57*/
          if ( v7 > v17 ) /*0x409e5b*/
            v8 = v17; /*0x409e5d*/
          if ( !v8 ) /*0x409e61*/
            goto LABEL_25; /*0x409e61*/
          v9 = a4; /*0x409e78*/
          a4 += v8; /*0x409e7a*/
          memcpy((void *)(*(unsigned int *)(a1 + 124) + *(unsigned int *)(a1 + 128) - v7), v9, v8); /*0x409e7f*/
          v20 += v8; /*0x409e9c*/
          v17 -= v8; /*0x409ea0*/
          *(unsigned int *)(a1 + 132) -= v8; /*0x409ea4*/
          *(unsigned int *)(a1 + 168) = 1; /*0x409eaa*/
        }
        else
        {
          v10 = *(unsigned int *)(a1 + 120); /*0x409ebb*/
          *(unsigned int *)(a1 + 132) = 0; /*0x409ebe*/
          *(unsigned int *)(a1 + 116) = v10; /*0x409ec4*/
        }
        continue; /*0x409eb6*/
      case 1: /*0x409e3e*/
        v11 = *(unsigned int *)(a1 + 152); /*0x409ecc*/
        if ( !v11 ) /*0x409ed4*/
        {
          v12 = *(unsigned int *)(a1 + 120); /*0x409ed6*/
          *(unsigned int *)(a1 + 168) = 0; /*0x409ed9*/
          *(unsigned int *)(a1 + 116) = v12; /*0x409edf*/
          continue; /*0x409ee2*/
        }
        v13 = *(unsigned int *)(a1 + 152); /*0x409eeb*/
        if ( v11 > v18 ) /*0x409eef*/
          v13 = v18; /*0x409ef1*/
        if ( v13 ) /*0x409ef5*/
        {
          memcpy(a2, (const void *)(*(unsigned int *)(a1 + 144) + *(unsigned int *)(a1 + 148) - v11), v13); /*0x409f16*/
          v21 += v13; /*0x409f39*/
          a2 += v13; /*0x409f3d*/
          v18 -= v13; /*0x409f41*/
          *(unsigned int *)(a1 + 152) -= v13; /*0x409f45*/
          continue; /*0x409f4d*/
        }
  LABEL_25:
        if ( a5 ) /*0x409fa8*/
          *a5 = v20; /*0x409fae*/
        if ( a3 ) /*0x409fb6*/
          *a3 = v21; /*0x409fbc*/
        return 1;
      case 2: /*0x409e3e*/
        if ( !(*(int (**)(int))(a1 + 176))(a1) ) /*0x409f5c*/
          return 0; /*0x409f5c*/
        v14 = *(unsigned int *)(a1 + 148); /*0x409f5e*/
        *(unsigned int *)(a1 + 116) = 1; /*0x409f64*/
        *(unsigned int *)(a1 + 152) = v14; /*0x409f6b*/
        *(unsigned int *)(a1 + 120) = 3; /*0x409f71*/
        continue; /*0x409f78*/
      case 3: /*0x409e3e*/
        if ( !a4 ) /*0x409f7f*/
          goto LABEL_25; /*0x409f7f*/
        v15 = *(unsigned int *)(a1 + 172); /*0x409f81*/
        *(unsigned int *)(a1 + 116) = 0; /*0x409f87*/
        *(unsigned int *)(a1 + 128) = v15; /*0x409f8a*/
        *(unsigned int *)(a1 + 132) = v15; /*0x409f90*/
        *(unsigned int *)(a1 + 120) = 2; /*0x409f96*/
        continue; /*0x409f9d*/
      default:
        continue;
    }
  }
}  // G42.18 ns repair
} // namespace ra2

// 0x72D170
namespace gamemd {
void AudioController::GetVolume()
{
  void *v1; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1310] ) /*0x72d17a*/
  {
    if ( g_BuildingLoadQueue_Array.__pad_F70[1309] ) /*0x72d182*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[776]; /*0x72d185*/
      if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[776] ) /*0x72d18d*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[776]); /*0x72d191*/
        operator delete((void *)(v1)); /*0x72d197*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1309] = 0; /*0x72d19f*/
    }
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[776] = 0; /*0x72d1ab*/
    if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1312] ) /*0x72d1b3*/
    {
      operator delete((void *)(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1312])); /*0x72d1b6*/
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1312] = 0; /*0x72d1be*/
    }
    if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1316] ) /*0x72d1cc*/
    {
      (***(void (****)(unsigned int, int))&g_BuildingLoadQueue_Array.__pad_F70[1316])( /*0x72d1d2*/
        *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1316],
        1);
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1316] = 0; /*0x72d1d4*/
    }
  }
  g_BuildingLoadQueue_Array.__pad_F70[1310] = 0; /*0x72d1da*/
}
} // namespace gamemd
