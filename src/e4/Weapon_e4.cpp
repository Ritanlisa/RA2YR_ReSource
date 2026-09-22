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
{
  wchar_t *StringCSF; // eax

  StringCSF = GetStringCSF(aMsgLightningst, 0, g_Str_File_Ion_cpp, 1123); /*0x53ae11*/
  int v1 = 3; /*0x53ae1c*/
  if ( HouseClass_Player ) /*0x53ae23*/
    v1 = *((_DWORD *)HouseClass_Player + 22549); /*0x53ae25*/
  return MessageListClass::AddMessage(g_GameNetworkObject, 0, 0, StringCSF, v1, 16454, 150, 0); /*0x53ae47*/
}
} // namespace gamemd
}

// 0x659CA0
namespace gamemd {
void Weapon_Update()
{
{

  if ( !*(_BYTE *)(a1 + 8) ) /*0x659ca7*/
  {
    *(_BYTE *)(a1 + 8) = 1; /*0x659cae*/
    Weapon_Update_Update(a1); /*0x659cb2*/
  }
  if ( *(_BYTE *)(a1 + 9) ) /*0x659cb7*/
  {
    Weapon_Update_Update_659EE0(a1); /*0x659cc4*/
    int v3 = *(_DWORD *)(a1 + 140); /*0x659cc9*/
    *(_DWORD *)(a1 + 136) = 0; /*0x659ccf*/
    if ( v3 > 0 ) /*0x659cdb*/
    {
  AnimClass *v9; // eax
  int v8; // ecx
      do /*0x659e01*/
      {
        __int64 v4 = Weapon_Update_Update_659FF0(a1); /*0x659ceb*/
        LOWORD(a2) = (unsigned __int8)(*(_BYTE *)(a1 + 194) >> g_BitShift_Blue); /*0x659d13*/
        LOWORD(v4) = (unsigned __int8)(*(_BYTE *)(a1 + 193) >> g_BitMask_Blue); /*0x659d28*/
        LODWORD(v4) = (_DWORD)v4 << g_BitMask_Green; /*0x659d30*/
        int v5 = v4 | (a2 << g_BitShift_Blue); /*0x659d40*/
        LOWORD(v4) = (unsigned __int8)(*(_BYTE *)(a1 + 192) >> g_BitShift_Green_0); /*0x659d45*/
        a2 = ((_DWORD)v4 << g_DDraw_BlueMask) | v5; /*0x659d55*/
  int v14[2]; // [esp+10h] [ebp-18h] BYREF
        Coord::To_Screen(g_TacticalClass_Instance, (_DWORD *)(a1 + 156), v14); /*0x659d57*/
  int v13[2]; // [esp+8h] [ebp-20h] BYREF
        Coord::To_Screen(g_TacticalClass_Instance, (_DWORD *)(a1 + 168), v13); /*0x659d68*/
  int v15[4]; // [esp+18h] [ebp-10h] BYREF
        v15[1] = g_Map_VisibleRect; /*0x659d7e*/
        v15[0] = DSurface_ViewBounds; /*0x659d86*/
        v15[2] = g_Map_VisibleRectOffset; /*0x659d8f*/
        v15[3] = g_DSurface_WindowOffset; /*0x659d9c*/
        if ( ClipLine(v14, v13, v15) ) /*0x659da0*/
        {
          int v6 = *(_DWORD *)(a1 + 12) - ZCoordToScreenY(*(_DWORD *)(a1 + 164)) - 2; /*0x659db9*/
          int v7 = ZCoordToScreenY(*(_DWORD *)(a1 + 176)); /*0x659dbc*/
          (*(void (__thiscall **)(int, int *, int *, int *, _DWORD, int, int, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2 + 52))( /*0x659de7*/
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
  AudioController *v10 = *(_DWORD *)(a1 + 60); /*0x659e0c*/
  int v11 = *(_DWORD *)(a1 + 124) + 1; /*0x659e12*/
  *(_DWORD *)(a1 + 124) = v11; /*0x659e14*/
  return v11 >= v10; /*0x659e19*/
}
} // namespace gamemd
}

// 0x70C690
AbstractClass * * Weapon::DestroyTerrain(int * a1, IUnknown * aP2, InfantryClass * aP3, IUnknown * aP4)
{
{
  CCINIClass *v27; // edx
  int GroundHeight; // eax
  CCINIClass *v31; // edx
  CCINIClass *v36; // edx
  VectorClass *v37; // ecx
  ObjectClass *v42; // edx
  IUnknown *v44; // [esp+18h] [ebp-C4h]
  CCINIClass *v46; // [esp+2Ch] [ebp-B0h]
  void **v48; // [esp+30h] [ebp-ACh] BYREF
  void *Block; // [esp+34h] [ebp-A8h]
  CCINIClass *v54; // [esp+48h] [ebp-94h]
  VectorClass *v55; // [esp+4Ch] [ebp-90h]
  CCINIClass *v58; // [esp+58h] [ebp-84h] BYREF
  ObjectClass *v66; // [esp+78h] [ebp-64h]
  Weapon *v74 = this; /*0x70c6a0*/
  float v78; // [esp+A8h] [ebp-34h] BYREF
  int v5 = (*(int (__thiscall **)(InfantryClass *, float *))(*(_DWORD *)aP3->__pad_0 + 72))(aP3, &v78); /*0x70c6b2*/
  int v65 = *(_DWORD *)v5; /*0x70c6ba*/
  v66 = *(ObjectClass **)(v5 + 4); /*0x70c6c4*/
  int v6 = *(_DWORD *)(v5 + 8); /*0x70c6ca*/
  int v7 = aP2->field_0; /*0x70c6cd*/
  int v67 = v6; /*0x70c6cf*/
  v54 = (CCINIClass *)v7; /*0x70c6d3*/
  double v8 = (double)v7; /*0x70c6d7*/
  char v45 = 0; /*0x70c6e5*/
  LOWORD(v46) = v7 / 256; /*0x70c6ed*/
  int v9 = aP2->field_4; /*0x70c6f2*/
  float v71 = v8; /*0x70c6f5*/
  float v64 = *(float *)&v9; /*0x70c6f9*/
  float v72 = (float)v9; /*0x70c702*/
  int v10 = aP2->field_0; /*0x70c711*/
  float v73 = (float)aP2->field_8; /*0x70c713*/
  HIWORD(v46) = v9 / 256; /*0x70c725*/
  float v69 = (float)(int)v66; /*0x70c72e*/
  v58 = v46; /*0x70c736*/
  int v11 = aP2->field_4; /*0x70c73a*/
  int v59 = v10; /*0x70c73d*/
  int v60 = v11; /*0x70c741*/
  float v70 = (float)v67; /*0x70c745*/
  int v61 = aP2->field_8; /*0x70c750*/
  *(float *)&v55 = (double)v65 - v71; /*0x70c758*/
  float v56 = v69 - v72; /*0x70c764*/
  float v57 = v70 - v73; /*0x70c773*/
  ObjectVector::Construct(&v48, 0, 0); /*0x70c777*/
  v48 = &vt_DynamicVectorClass_ObjectClass; /*0x70c77c*/
  int v53 = 10; /*0x70c784*/
  AbstractClass *v52 = 0; /*0x70c78c*/
  int v47 = 0; /*0x70c790*/
  while ( 1 ) /*0x70c7aa*/
  {
  float v62; // [esp+68h] [ebp-74h] BYREF
  int v51; // [esp+3Ch] [ebp-A0h]
  int v50; // [esp+38h] [ebp-A4h]
    *(float *)&v44 = (double)v47 * 0.020408163; /*0x70c7aa*/
  _DWORD v84[3]; // [esp+D0h] [ebp-Ch] BYREF
    int * v12 = Color::RGBFromFloat(v84, (IUnknown *)&v65, *(float *)&v44); /*0x70c7b0*/
    v59 = *v12; /*0x70c7b9*/
    v60 = v12[1]; /*0x70c7c0*/
    v61 = v12[2]; /*0x70c7c7*/
    if ( (CCINIClass *)__PAIR32__(v60 / 256, v59 / 256) != v58 ) /*0x70c7ec*/
    {
      LOWORD(v54) = v59 / 256; /*0x70c7f9*/
      HIWORD(v54) = v60 / 256; /*0x70c802*/
      v58 = v54; /*0x70c811*/
      _DWORD * v13 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v58); /*0x70c815*/
      if ( (v13[80] & 0x100) != 0 && v61 >= *(_DWORD *)&g_OverlayTypeConfig[29500] * (*((char *)v13 + 283) + 4) ) /*0x70c83c*/
        int v14 = v13[58]; /*0x70c83e*/
      else
        v14 = v13[57]; /*0x70c846*/
      while ( v14 ) /*0x70c84e*/
      {
  double v24; // st7
        if ( (int *)v14 == v74 ) /*0x70c858*/
          goto LABEL_31; /*0x70c858*/
        if ( (InfantryClass *)v14 == aP3 ) /*0x70c860*/
          v45 = 1; /*0x70c862*/
  int v63; // [esp+6Ch] [ebp-70h]
        HIBYTE(v63) = *(_BYTE *)(v14 + 20) & 1; /*0x70c874*/
        if ( !HIBYTE(v63) ) /*0x70c878*/
          goto LABEL_31; /*0x70c878*/
        int v15 = *(_DWORD *)v14; /*0x70c87e*/
        v62 = 0.0; /*0x70c882*/
        if ( (*(int (__thiscall **)(int))(v15 + 44))(v14) == 6 ) /*0x70c890*/
        {
          v24 = v62; /*0x70c9d3*/
        }
        else
        {
          int v75 = *(_DWORD *)(v14 + 156); /*0x70c8a2*/
          int v16 = *(_DWORD *)(v14 + 164); /*0x70c8b3*/
          int v76 = *(_DWORD *)(v14 + 160); /*0x70c8b6*/
          int v77 = v16; /*0x70c8c4*/
          float v79 = (float)v76; /*0x70c8cb*/
          float v80 = (float)v16; /*0x70c8d9*/
          double v17 = (double)v75 - v71; /*0x70c8e0*/
          double v18 = v79 - v72; /*0x70c8eb*/
          double v19 = v80 - v73; /*0x70c8f6*/
          double v20 = v18 * v57 - v19 * v56; /*0x70c906*/
          double v21 = v19 * *(float *)&v55 - v57 * v17; /*0x70c914*/
          double v22 = v56 * v17 - v18 * *(float *)&v55; /*0x70c922*/
          float v68 = v21 * v57 - v22 * v56; /*0x70c932*/
          v69 = v22 * *(float *)&v55 - v57 * v20; /*0x70c942*/
          double v82 = v69; /*0x70c95a*/
          double v81 = v20 * v56 - v21 * *(float *)&v55; /*0x70c961*/
          double v83 = v68; /*0x70c96c*/
          v64 = v81 * v19 + v69 * v18 + v68 * v17; /*0x70c985*/
          double v23 = Math::Sqrt(v68 * v68 + v81 * v81 + v69 * v69); /*0x70c9c3*/
          v24 = fabs(v64 / v23); /*0x70c9cf*/
        }
        if ( v24 >= (double)*(int *)(*(_DWORD *)&DataGlobal_87F8E4[30972] + 1172) /*0x70c9f0*/
          && (InfantryClass *)v14 != aP3 )
        {
          goto LABEL_31; /*0x70c9f0*/
        }
        AbstractClass *v25 = v52; /*0x70c9f2*/
        if ( v52 ) /*0x70c9f8*/
        {
          int v26 = 0; /*0x70c9fa*/
          if ( v52 > 0 ) /*0x70c9fe*/
          {
            v27 = (CCINIClass *)Block; /*0x70ca00*/
            while ( *(_DWORD *)v27->__pad_0 != v14 ) /*0x70ca06*/
            {
              ++v26; /*0x70ca08*/
              v27 = (CCINIClass *)((char *)v27 + 4); /*0x70ca09*/
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
        v14 = *(_DWORD *)(v14 + 48); /*0x70ca59*/
      }
      GroundHeight = Cell::GetGroundHeight(&v59); /*0x70ca6e*/
      if ( GroundHeight > v61 ) /*0x70ca77*/
        break; /*0x70ca77*/
    }
    if ( ++v47 >= 50 ) /*0x70ca85*/
    {
      if ( v45 || !aP3 || (aP3->abstractFlags & 2) == 0 ) /*0x70caa3*/
        goto LABEL_55; /*0x70caa3*/
      AbstractClass *v29 = v52; /*0x70caa9*/
      if ( !v52 ) /*0x70caaf*/
        goto LABEL_48; /*0x70caaf*/
      int v30 = 0; /*0x70cab5*/
      if ( v52 <= 0 ) /*0x70cab9*/
        goto LABEL_48; /*0x70cab9*/
      v31 = (CCINIClass *)Block; /*0x70cabf*/
      while ( *(InfantryClass **)v31->__pad_0 != aP3 ) /*0x70cac5*/
      {
        ++v30; /*0x70cacb*/
        v31 = (CCINIClass *)((char *)v31 + 4); /*0x70cacc*/
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
      int v39 = 0; /*0x70cbb0*/
      if ( v29 > 0 ) /*0x70cbb4*/
      {
        do /*0x70cbf5*/
        {
          v62 = *(float *)&aP4->__pad_8C[12]; /*0x70cbc3*/
          (*(void (__thiscall **)(_DWORD, float *, _DWORD, _DWORD, int *, _DWORD, _DWORD, _DWORD))(**((_DWORD **)Block + v39) /*0x70cbe8*/
                                                                                                 + 364))(
            *((_DWORD *)Block + v39),
            &v62,
            0,
            *(_DWORD *)&aP4->__pad_A8[4],
            v74,
            0,
            0,
            0);
          ++v39; /*0x70cbf2*/
        }
        while ( v39 < v52 ); /*0x70cbf5*/
      }
      if ( (*(int (__thiscall **)(InfantryClass *))(*(_DWORD *)aP3->__pad_0 + 44))(aP3) == 11 /*0x70cc05*/
        && CellClass::IsActiveOrNext(aP3) )
      {
        int v40 = *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[30972] + 6092); /*0x70cc1e*/
        if ( Random::Range(&g_ScenarioClass_Instance->random[1], 0, (IUnknown *)0x63) < v40 ) /*0x70cc31*/
  int v41; // edx
          LayerClass::DestroyCliff((int *)&DataGlobal_87F7E8, v41, (int)aP3); /*0x70cc39*/
      }
      v42 = v66; /*0x70cc45*/
      v48 = &vt_VectorClass_ObjectClass; /*0x70cc4b*/
      *a1 = v65; /*0x70cc53*/
      int v43 = v67; /*0x70cc55*/
      a1[1] = (int)v42; /*0x70cc59*/
      a1[2] = v43; /*0x70cc5c*/
      if ( Block ) /*0x70cc65*/
      {
        if ( BYTE1(v51) ) /*0x70cc6d*/
          __3_YAXPAX_Z(Block); /*0x70cc70*/
      }
      return a1; /*0x70cc78*/
    }
  }
  _DWORD * v32 = Coord::To_Cell(&DataGlobal_87F7E8, (IUnknown *)&v59); /*0x70cae2*/
  if ( CellClass::IsActiveOrNext(v32) ) /*0x70cae9*/
  {
    int v33 = *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[30972] + 6092); /*0x70cb01*/
    if ( Random::Range(&g_ScenarioClass_Instance->random[1], 0, (IUnknown *)0x63) < v33 ) /*0x70cb14*/
    {
      void * v34 = Coord::To_Cell(&DataGlobal_87F7E8, (IUnknown *)&v59); /*0x70cb20*/
  int v35; // edx
      LayerClass::DestroyCliff((int *)&DataGlobal_87F7E8, v35, (int)v34); /*0x70cb2b*/
    }
  }
  v36 = (CCINIClass *)v60; /*0x70cb37*/
  v48 = &vt_VectorClass_ObjectClass; /*0x70cb3d*/
  *a1 = v59; /*0x70cb45*/
  v37 = (VectorClass *)v61; /*0x70cb47*/
  a1[1] = (int)v36; /*0x70cb4b*/
  a1[2] = (int)v37; /*0x70cb4e*/
  ObjectVector::ddtor((int)&v48); /*0x70cb55*/
  return a1; /*0x70cb5c*/
}
}

// 0x53B410
namespace gamemd {
int sub_53B410()
{
{
  wchar_t *StringCSF; // eax

  StringCSF = GetStringCSF(aMsgDominatorac, 0, g_Str_File_Ion_cpp, 1339); /*0x53b421*/
  int v1 = 3; /*0x53b42c*/
  if ( HouseClass_Player ) /*0x53b433*/
    v1 = *((_DWORD *)HouseClass_Player + 22549); /*0x53b435*/
  return MessageListClass::AddMessage(g_GameNetworkObject, 0, 0, StringCSF, v1, 16454, 150, 0); /*0x53b457*/
}
} // namespace gamemd
}

// 0x53A0E0
namespace gamemd {
BOOL sub_53A0E0()
{
{
    return LightningStorm_Active || LightningStorm_Deferment > 0;
}
}
} // namespace gamemd
