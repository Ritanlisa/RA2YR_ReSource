// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_659E30_e4.hpp"
#include "e4/classes/E4Recv_659EE0_e4.hpp"
#include "e4/classes/E4Recv_659FF0_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Math_e4.hpp"

// 0x53AE00
namespace gamemd {
int sub_53AE00()
{
  wchar_t *StringCSF; // eax
  int v1; // ecx

  StringCSF = GetStringCSF(aMsgLightningst, 0, g_Str_File_Ion_cpp, 1123); /*0x53ae11*/
  v1 = 3; /*0x53ae1c*/
  if ( HouseClass_Player ) /*0x53ae23*/
    v1 = *((_DWORD *)HouseClass_Player + 22549); /*0x53ae25*/
  return MessageListClass::AddMessage(g_GameNetworkObject, 0, 0, StringCSF, v1, 16454, 150, 0); /*0x53ae47*/
}
}
// 0x659CA0
namespace gamemd {
void Weapon_Update()
{
  int v3; // eax
  __int64 v4; // rax
  int v5; // ebx
  int v6; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v13[2]; // [esp+8h] [ebp-20h] BYREF
  int v14[2]; // [esp+10h] [ebp-18h] BYREF
  int v15[4]; // [esp+18h] [ebp-10h] BYREF

  if ( !*(_BYTE *)(a1 + 8) ) /*0x659ca7*/
  {
    *(_BYTE *)(a1 + 8) = 1; /*0x659cae*/
    Weapon_Update_Update(a1); /*0x659cb2*/
  }
  if ( *(_BYTE *)(a1 + 9) ) /*0x659cb7*/
  {
    Weapon_Update_Update_659EE0(a1); /*0x659cc4*/
    v3 = *(_DWORD *)(a1 + 140); /*0x659cc9*/
    *(_DWORD *)(a1 + 136) = 0; /*0x659ccf*/
    if ( v3 > 0 ) /*0x659cdb*/
    {
      do /*0x659e01*/
      {
        v4 = Weapon_Update_Update_659FF0(a1); /*0x659ceb*/
        LOWORD(a2) = (unsigned __int8)(*(_BYTE *)(a1 + 194) >> g_BitMask_Red); /*0x659d13*/
        LOWORD(v4) = (unsigned __int8)(*(_BYTE *)(a1 + 193) >> g_BitMask_Blue); /*0x659d28*/
        LODWORD(v4) = (_DWORD)v4 << g_BitMask_Green; /*0x659d30*/
        v5 = v4 | (a2 << g_BitShift_Blue); /*0x659d40*/
        LOWORD(v4) = (unsigned __int8)(*(_BYTE *)(a1 + 192) >> g_BitShift_Green_0); /*0x659d45*/
        a2 = ((_DWORD)v4 << g_BitShift_Red) | v5; /*0x659d55*/
        Coord::To_Screen(g_TacticalClass_Instance, (_DWORD *)(a1 + 156), v14); /*0x659d57*/
        Coord::To_Screen(g_TacticalClass_Instance, (_DWORD *)(a1 + 168), v13); /*0x659d68*/
        v15[1] = g_Map_VisibleRect; /*0x659d7e*/
        v15[0] = DSurface_ViewBounds; /*0x659d86*/
        v15[2] = g_Map_VisibleRectOffset; /*0x659d8f*/
        v15[3] = g_DSurface_WindowOffset; /*0x659d9c*/
        if ( ClipLine(v14, v13, v15) ) /*0x659da0*/
        {
          v6 = *(_DWORD *)(a1 + 12) - ZCoordToScreenY(*(_DWORD *)(a1 + 164)) - 2; /*0x659db9*/
          v7 = ZCoordToScreenY(*(_DWORD *)(a1 + 176)); /*0x659dbc*/
          (*(void (__thiscall **)(int, int *, int *, int *, _DWORD, int, int, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2 /*0x659de7*/
                                                                                     + 52))(
            g_DSurface_Hidden_2,
            &DSurface_ViewBounds,
            v14,
            v13,
            (__int16)a2,
            v6,
            -2 - v7,
            0);
        }
        v8 = *(_DWORD *)(a1 + 140); /*0x659df0*/
        v9 = *(_DWORD *)(a1 + 136) + 1; /*0x659df7*/
        *(_DWORD *)(a1 + 136) = v9; /*0x659df9*/
      }
      while ( v9 < v8 ); /*0x659e01*/
    }
  }
  v10 = *(_DWORD *)(a1 + 60); /*0x659e0c*/
  v11 = *(_DWORD *)(a1 + 124) + 1; /*0x659e12*/
  *(_DWORD *)(a1 + 124) = v11; /*0x659e14*/
  return v11 >= v10; /*0x659e19*/
}
}
// 0x70C690
AbstractClass * * Weapon::DestroyTerrain(int * a1, IUnknown * aP2, InfantryClass * aP3, IUnknown * aP4)
{
  int *v5; // eax
  int v6; // edx
  int v7; // eax
  double v8; // st7
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int *v12; // eax
  _DWORD *v13; // eax
  int *v14; // esi
  int v15; // edx
  int v16; // eax
  double v17; // st7
  double v18; // st6
  double v19; // st5
  double v20; // st4
  double v21; // st3
  double v22; // st2
  double v23; // st7
  double v24; // st7
  int v25; // eax
  int v26; // ecx
  int **v27; // edx
  int GroundHeight; // eax
  int v29; // eax
  int v30; // ecx
  int **v31; // edx
  _DWORD *v32; // eax
  int v33; // esi
  void *v34; // eax
  int v35; // edx
  int v36; // edx
  int v37; // ecx
  int v39; // esi
  int v40; // esi
  int v41; // edx
  int v42; // edx
  int v43; // ecx
  float v44; // [esp+18h] [ebp-C4h]
  char v45; // [esp+2Bh] [ebp-B1h]
  float v46; // [esp+2Ch] [ebp-B0h]
  int v47; // [esp+2Ch] [ebp-B0h]
  void **v48; // [esp+30h] [ebp-ACh] BYREF
  void *Block; // [esp+34h] [ebp-A8h]
  int v50; // [esp+38h] [ebp-A4h]
  int v51; // [esp+3Ch] [ebp-A0h]
  int v52; // [esp+40h] [ebp-9Ch]
  int v53; // [esp+44h] [ebp-98h]
  int v54; // [esp+48h] [ebp-94h]
  float v55; // [esp+4Ch] [ebp-90h]
  float v56; // [esp+50h] [ebp-8Ch]
  float v57; // [esp+54h] [ebp-88h]
  float v58; // [esp+58h] [ebp-84h] BYREF
  int v59; // [esp+5Ch] [ebp-80h] BYREF
  int v60; // [esp+60h] [ebp-7Ch]
  int v61; // [esp+64h] [ebp-78h]
  float v62; // [esp+68h] [ebp-74h] BYREF
  int v63; // [esp+6Ch] [ebp-70h]
  float v64; // [esp+70h] [ebp-6Ch]
  int v65; // [esp+74h] [ebp-68h] BYREF
  int v66; // [esp+78h] [ebp-64h]
  int v67; // [esp+7Ch] [ebp-60h]
  float v68; // [esp+80h] [ebp-5Ch]
  float v69; // [esp+84h] [ebp-58h]
  float v70; // [esp+88h] [ebp-54h]
  float v71; // [esp+8Ch] [ebp-50h]
  float v72; // [esp+90h] [ebp-4Ch]
  float v73; // [esp+94h] [ebp-48h]
  int *v74; // [esp+98h] [ebp-44h]
  int v75; // [esp+9Ch] [ebp-40h]
  int v76; // [esp+A0h] [ebp-3Ch]
  int v77; // [esp+A4h] [ebp-38h]
  float v78; // [esp+A8h] [ebp-34h] BYREF
  float v79; // [esp+ACh] [ebp-30h]
  float v80; // [esp+B0h] [ebp-2Ch]
  double v81; // [esp+B4h] [ebp-28h]
  double v82; // [esp+BCh] [ebp-20h]
  double v83; // [esp+C4h] [ebp-18h]
  int v84[3]; // [esp+D0h] [ebp-Ch] BYREF

  v74 = this; /*0x70c6a0*/
  v5 = (int *)(*(int (__thiscall **)(int *, float *))(*aP3 + 72))(aP3, &v78); /*0x70c6b2*/
  v65 = *v5; /*0x70c6ba*/
  v66 = v5[1]; /*0x70c6c4*/
  v6 = v5[2]; /*0x70c6ca*/
  v7 = *aP2; /*0x70c6cd*/
  v67 = v6; /*0x70c6cf*/
  v54 = v7; /*0x70c6d3*/
  v8 = (double)v7; /*0x70c6d7*/
  v45 = 0; /*0x70c6e5*/
  LOWORD(v46) = v7 / 256; /*0x70c6ed*/
  v9 = aP2[1]; /*0x70c6f2*/
  v71 = v8; /*0x70c6f5*/
  v64 = *(float *)&v9; /*0x70c6f9*/
  v72 = (float)v9; /*0x70c702*/
  v10 = *aP2; /*0x70c711*/
  v73 = (float)aP2[2]; /*0x70c713*/
  HIWORD(v46) = v9 / 256; /*0x70c725*/
  v69 = (float)v66; /*0x70c72e*/
  v58 = v46; /*0x70c736*/
  v11 = aP2[1]; /*0x70c73a*/
  v59 = v10; /*0x70c73d*/
  v60 = v11; /*0x70c741*/
  v70 = (float)v67; /*0x70c745*/
  v61 = aP2[2]; /*0x70c750*/
  v55 = (double)v65 - v71; /*0x70c758*/
  v56 = v69 - v72; /*0x70c764*/
  v57 = v70 - v73; /*0x70c773*/
  ObjectVector::Construct(&v48, 0, 0); /*0x70c777*/
  v48 = &DynamicVectorClass<ObjectClass *>::`vftable'; /*0x70c77c*/
  v53 = 10; /*0x70c784*/
  v52 = 0; /*0x70c78c*/
  v47 = 0; /*0x70c790*/
  while ( 1 ) /*0x70c7aa*/
  {
    v44 = (double)v47 * 0.020408163; /*0x70c7aa*/
    v12 = Color::RGBFromFloat(v84, (int)&v65, v44); /*0x70c7b0*/
    v59 = *v12; /*0x70c7b9*/
    v60 = v12[1]; /*0x70c7c0*/
    v61 = v12[2]; /*0x70c7c7*/
    if ( __PAIR32__(v60 / 256, v59 / 256) != LODWORD(v58) ) /*0x70c7ec*/
    {
      LOWORD(v54) = v59 / 256; /*0x70c7f9*/
      HIWORD(v54) = v60 / 256; /*0x70c802*/
      v58 = *(float *)&v54; /*0x70c811*/
      v13 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v58); /*0x70c815*/
      if ( (v13[80] & 0x100) != 0 && v61 >= dword_B0EB34 * (*((char *)v13 + 283) + 4) ) /*0x70c83c*/
        v14 = (int *)v13[58]; /*0x70c83e*/
      else
        v14 = (int *)v13[57]; /*0x70c846*/
      while ( v14 ) /*0x70c84e*/
      {
        if ( v14 == v74 ) /*0x70c858*/
          goto LABEL_31; /*0x70c858*/
        if ( v14 == aP3 ) /*0x70c860*/
          v45 = 1; /*0x70c862*/
        HIBYTE(v63) = v14[5] & 1; /*0x70c874*/
        if ( !HIBYTE(v63) ) /*0x70c878*/
          goto LABEL_31; /*0x70c878*/
        v15 = *v14; /*0x70c87e*/
        v62 = 0.0; /*0x70c882*/
        if ( (*(int (__thiscall **)(int *))(v15 + 44))(v14) == 6 ) /*0x70c890*/
        {
          v24 = v62; /*0x70c9d3*/
        }
        else
        {
          v75 = v14[39]; /*0x70c8a2*/
          v16 = v14[41]; /*0x70c8b3*/
          v76 = v14[40]; /*0x70c8b6*/
          v77 = v16; /*0x70c8c4*/
          v79 = (float)v76; /*0x70c8cb*/
          v80 = (float)v16; /*0x70c8d9*/
          v17 = (double)v75 - v71; /*0x70c8e0*/
          v18 = v79 - v72; /*0x70c8eb*/
          v19 = v80 - v73; /*0x70c8f6*/
          v20 = v18 * v57 - v19 * v56; /*0x70c906*/
          v21 = v19 * v55 - v57 * v17; /*0x70c914*/
          v22 = v56 * v17 - v18 * v55; /*0x70c922*/
          v68 = v21 * v57 - v22 * v56; /*0x70c932*/
          v69 = v22 * v55 - v57 * v20; /*0x70c942*/
          v82 = v69; /*0x70c95a*/
          v81 = v20 * v56 - v21 * v55; /*0x70c961*/
          v83 = v68; /*0x70c96c*/
          v64 = v81 * v19 + v69 * v18 + v68 * v17; /*0x70c985*/
          v23 = Math::Sqrt(v68 * v68 + v81 * v81 + v69 * v69); /*0x70c9c3*/
          v24 = fabs(v64 / v23); /*0x70c9cf*/
        }
        if ( v24 >= (double)*((int *)g_RulesClass_Instance + 293) && v14 != aP3 ) /*0x70c9f0*/
          goto LABEL_31; /*0x70c9f0*/
        v25 = v52; /*0x70c9f2*/
        if ( v52 ) /*0x70c9f8*/
        {
          v26 = 0; /*0x70c9fa*/
          if ( v52 > 0 ) /*0x70c9fe*/
          {
            v27 = (int **)Block; /*0x70ca00*/
            while ( *v27 != v14 ) /*0x70ca06*/
            {
              ++v26; /*0x70ca08*/
              ++v27; /*0x70ca09*/
              if ( v26 >= v52 ) /*0x70ca0e*/
                goto LABEL_24; /*0x70ca0e*/
            }
            if ( v26 != -1 ) /*0x70ca15*/
              goto LABEL_31; /*0x70ca15*/
          }
        }
  LABEL_24:
        if ( v52 >= v50 ) /*0x70ca1d*/
        {
          if ( !BYTE1(v51) && v50 /*0x70ca40*/
            || v53 <= 0
            || !((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v48[2])(&v48, v53 + v50, 0) )
          {
            goto LABEL_31; /*0x70ca45*/
          }
          v25 = v52; /*0x70ca47*/
        }
        v52 = v25 + 1; /*0x70ca4e*/
        *((_DWORD *)Block + v25) = v14; /*0x70ca56*/
  LABEL_31:
        v14 = (int *)v14[12]; /*0x70ca59*/
      }
      GroundHeight = Cell::GetGroundHeight(&v59); /*0x70ca6e*/
      if ( GroundHeight > v61 ) /*0x70ca77*/
        break; /*0x70ca77*/
    }
    if ( ++v47 >= 50 ) /*0x70ca85*/
    {
      if ( v45 || !aP3 || (aP3[5] & 2) == 0 ) /*0x70caa3*/
        goto LABEL_55; /*0x70caa3*/
      v29 = v52; /*0x70caa9*/
      if ( !v52 ) /*0x70caaf*/
        goto LABEL_48; /*0x70caaf*/
      v30 = 0; /*0x70cab5*/
      if ( v52 <= 0 ) /*0x70cab9*/
        goto LABEL_48; /*0x70cab9*/
      v31 = (int **)Block; /*0x70cabf*/
      while ( *v31 != aP3 ) /*0x70cac5*/
      {
        ++v30; /*0x70cacb*/
        ++v31; /*0x70cacc*/
        if ( v30 >= v52 ) /*0x70cad1*/
          goto LABEL_48; /*0x70cad1*/
      }
      if ( v30 == -1 ) /*0x70cb68*/
      {
  LABEL_48:
        if ( v52 < v50 ) /*0x70cb70*/
          goto LABEL_54; /*0x70cb70*/
        if ( (BYTE1(v51) || !v50) && v53 > 0 ) /*0x70cb84*/
        {
          if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v48[2])(&v48, v53 + v50, 0) ) /*0x70cb93*/
          {
            v29 = v52; /*0x70cb9a*/
  LABEL_54:
            v52 = v29 + 1; /*0x70cb9e*/
            *((_DWORD *)Block + v29) = aP3; /*0x70cba9*/
          }
  LABEL_55:
          v29 = v52; /*0x70cbac*/
        }
      }
      v39 = 0; /*0x70cbb0*/
      if ( v29 > 0 ) /*0x70cbb4*/
      {
        do /*0x70cbf5*/
        {
          v62 = *(float *)(aP4 + 152); /*0x70cbc3*/
          (*(void (__thiscall **)(_DWORD, float *, _DWORD, _DWORD, int *, _DWORD, _DWORD, _DWORD))(**((_DWORD **)Block + v39) /*0x70cbe8*/
                                                                                                 + 364))(
            *((_DWORD *)Block + v39),
            &v62,
            0,
            *(_DWORD *)(aP4 + 172),
            v74,
            0,
            0,
            0);
          ++v39; /*0x70cbf2*/
        }
        while ( v39 < v52 ); /*0x70cbf5*/
      }
      if ( (*(int (__thiscall **)(int *))(*aP3 + 44))(aP3) == 11 && CellClass::IsActiveOrNext(aP3) ) /*0x70cc05*/
      {
        v40 = *((_DWORD *)g_RulesClass_Instance + 1523); /*0x70cc1e*/
        if ( Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 99) < v40 ) /*0x70cc31*/
          LayerClass::DestroyCliff((int *)&MapClass_Instance, v41, (int)aP3); /*0x70cc39*/
      }
      v42 = v66; /*0x70cc45*/
      v48 = &VectorClass<ObjectClass *>::`vftable'; /*0x70cc4b*/
      *a1 = v65; /*0x70cc53*/
      v43 = v67; /*0x70cc55*/
      a1[1] = v42; /*0x70cc59*/
      a1[2] = v43; /*0x70cc5c*/
      if ( Block ) /*0x70cc65*/
      {
        if ( BYTE1(v51) ) /*0x70cc6d*/
          __3_YAXPAX_Z(Block); /*0x70cc70*/
      }
      return a1; /*0x70cc78*/
    }
  }
  v32 = Coord::To_Cell(&MapClass_Instance, &v59); /*0x70cae2*/
  if ( CellClass::IsActiveOrNext(v32) ) /*0x70cae9*/
  {
    v33 = *((_DWORD *)g_RulesClass_Instance + 1523); /*0x70cb01*/
    if ( Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 99) < v33 ) /*0x70cb14*/
    {
      v34 = Coord::To_Cell(&MapClass_Instance, &v59); /*0x70cb20*/
      LayerClass::DestroyCliff((int *)&MapClass_Instance, v35, (int)v34); /*0x70cb2b*/
    }
  }
  v36 = v60; /*0x70cb37*/
  v48 = &VectorClass<ObjectClass *>::`vftable'; /*0x70cb3d*/
  *a1 = v59; /*0x70cb45*/
  v37 = v61; /*0x70cb47*/
  a1[1] = v36; /*0x70cb4b*/
  a1[2] = v37; /*0x70cb4e*/
  ObjectVector::ddtor(&v48); /*0x70cb55*/
  return a1; /*0x70cb5c*/
}
// 0x53B410
namespace gamemd {
int sub_53B410()
{
  wchar_t *StringCSF; // eax
  int v1; // ecx

  StringCSF = GetStringCSF(aMsgDominatorac, 0, g_Str_File_Ion_cpp, 1339); /*0x53b421*/
  v1 = 3; /*0x53b42c*/
  if ( HouseClass_Player ) /*0x53b433*/
    v1 = *((_DWORD *)HouseClass_Player + 22549); /*0x53b435*/
  return MessageListClass::AddMessage(g_GameNetworkObject, 0, 0, StringCSF, v1, 16454, 150, 0); /*0x53b457*/
}
}
// 0x53A0E0
namespace gamemd {
BOOL sub_53A0E0()
{
  return LightningStorm_Active || LightningStorm_Deferment > 0; /*0x53a0f4*/
}
} // namespace gamemd
