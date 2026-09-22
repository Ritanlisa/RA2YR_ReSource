// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"

// 0x4FB840
int BuildingPlacement::Activate(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  if ( (#375 *)this != HouseClass_Player ) /*0x4fb84c*/
    return 0; /*0x4fb84c*/
  if ( g_RadarBlipManager ) /*0x4fb859*/
    return 0; /*0x4fb859*/
  int v4 = a2; /*0x4fb85f*/
  if ( !a2 ) /*0x4fb865*/
    return 0; /*0x4fb865*/
  _DWORD * v5 = a3; /*0x4fb86b*/
  if ( !a3 ) /*0x4fb871*/
    return 0; /*0x4fb919*/
  MapClass::UnselectAll_ClearLimboLaunchers(); /*0x4fb877*/
  BuildingClass::TogglePower2(&DataGlobal_87F7E8, 0); /*0x4fb883*/
  BuildingClass::TogglePower(&DataGlobal_87F7E8, 0); /*0x4fb88f*/
  DataGlobal_88099A = 0; /*0x4fb894*/
  DataGlobal_88099B = 0; /*0x4fb89b*/
  DataGlobal_88099C = 0; /*0x4fb8a2*/
  g_BuildingPlacementState = -1; /*0x4fb8a9*/
  int v6 = v5[328]; /*0x4fb8b3*/
  g_RadarBlipPool = (int)v5; /*0x4fb8b9*/
  g_RadarBlipManager = v6; /*0x4fb8bf*/
  DataGlobal_880994 = this->q00C; /*0x4fb8c7*/
  const void * v7 = (const void *)(*(int (__thiscall **)(_DWORD *, int))(*v5 + 264))(v5, 1); /*0x4fb8d3*/
  Mouse::SetBounds((int)&DataGlobal_87F7E8, v7); /*0x4fb8df*/
  _DWORD * v8 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v4 + 440))(v4, &a2); /*0x4fb8ed*/
  Tactical::MouseMove((int)&DataGlobal_87F7E8, &a3, v8); /*0x4fb8fe*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 292))(v4, 2); /*0x4fb909*/
  return 1; /*0x4fb90f*/
}
}

// 0x54C550
int BuildingPlacement::ProcessBuildingPlacementAction()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  void *NeighbourContent; // eax
  char *v12; // eax
  _DWORD *v13; // eax
  _BYTE *v14; // ecx
  char v15; // bl
  int v16; // edx
  int v17; // eax
  int v18; // ebx
  _DWORD *v19; // ecx
  int v20; // ecx
  _DWORD *v21; // edi
  int DeployDir; // ebx
  _DWORD *Value; // eax
  __int16 v24; // cx
  __int16 v25; // dx
  int v26; // ecx
  int v27; // edi
  int *v28; // eax
  _BYTE *v29; // ecx
  int *v30; // eax
  int v31; // edi
  int *v32; // edx
  int v33; // ecx
  _BYTE *v34; // ecx
  _BYTE *v35; // ecx
  int v36; // eax
  int v37; // edi
  _DWORD *v38; // eax
  int v39; // ecx
  _DWORD *v40; // eax
  int v41; // ecx
  int v42; // edi
  int v43; // eax
  int v45; // [esp+44h] [ebp-28h]
  int v46; // [esp+48h] [ebp-24h]
  char v47; // [esp+5Bh] [ebp-11h]
  int v48; // [esp+5Ch] [ebp-10h] BYREF
  int v49; // [esp+60h] [ebp-Ch] BYREF
  int v50; // [esp+64h] [ebp-8h]
  int v51; // [esp+68h] [ebp-4h]
  _DWORD * v2 = (_DWORD *)(this + 64); /*0x54c55e*/
  _DWORD * v3 = Coord::To_Cell(&DataGlobal_87F7E8, (_DWORD *)(this + 64)); /*0x54c562*/
  int v4 = this->BuildingPlacement_field_0x0C; /*0x54c567*/
  _DWORD * v5 = v3; /*0x54c56a*/
  if ( !*(_BYTE *)(v4 + 1709) ) /*0x54c56c*/
  {
    int v6 = v3[59]; /*0x54c57a*/
    if ( (v6 == 2 || v6 == 6) /*0x54c5a6*/
      && *(_DWORD *)(v4 + 180) != 7
      && (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 388))(v4) != 7 )
    {
      if ( ObjectClass::HasLinkedObject(this->BuildingPlacement_field_0x0C) ) /*0x54c5b5*/
      {
        unsigned int v7 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 7); /*0x54c5d6*/
        _DWORD * v8 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(*this->q00C + 444))(this->BuildingPlacement_field_0x0C); /*0x54c5da*/
        int v9 = *this->q00C; /*0x54c5e6*/
        NeighbourContent = Cell::GetNeighbourContent(v8, v7); /*0x54c5ea*/
        (*(void (__thiscall **)(_DWORD, void *, int))(v9 + 1152))(this->BuildingPlacement_field_0x0C, NeighbourContent, 1); /*0x54c5f3*/
        _BYTE * v11 = this->q00C; /*0x54c5f9*/
        LOBYTE(v9) = v11[116]; /*0x54c600*/
        (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v11 + 292))(v11, 0); /*0x54c603*/
        v12 = this->q00C; /*0x54c609*/
        v12[116] = v9; /*0x54c60d*/
        this->q014 = 3; /*0x54c610*/
      }
      else
      {
        v13 = (_DWORD *)(*(int (__stdcall **)(_DWORD))(*this->q00C + 444))(this->BuildingPlacement_field_0x0C); /*0x54c624*/
        CellClass::AttachObject(v13, v46); /*0x54c62c*/
        v14 = this->q00C; /*0x54c631*/
        v15 = v14[116]; /*0x54c638*/
        LOBYTE(v12) = (*(int (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v14 + 292))(v14, 0); /*0x54c63b*/
        *(_BYTE *)(this->BuildingPlacement_field_0x0C + 116) = v15; /*0x54c645*/
        v16 = *(_DWORD *)(this + 44); /*0x54c648*/
        this->q014 = 2; /*0x54c64b*/
        this->q020 = v16; /*0x54c652*/
      }
      return (char)v12; /*0x54c61d*/
    }
    v48 = (*(int (__thiscall **)(_DWORD, _DWORD *, int, int, _DWORD, int))(*this->q00C + 428))( /*0x54c675*/
            this->BuildingPlacement_field_0x0C,
            v5,
            -1,
            -1,
            0,
            1);
    LOBYTE(v17) = Input::OffsetToDirection((_DWORD *)(this + 64)); /*0x54c679*/
    v18 = v17; /*0x54c684*/
    if ( (unsigned __int8)BuildingPlacement::IsPlacementFlagSet(v17, BYTE1(v5[80]) & 1) /*0x54c699*/
      || (v47 = 0, this->q090) )
    {
      v47 = 1; /*0x54c6a8*/
    }
    if ( (*(int (__thiscall **)(_DWORD))(*this->q00C + 44))(this->BuildingPlacement_field_0x0C) == 1 && !v18 ) /*0x54c6bc*/
      v47 = 1; /*0x54c6be*/
    v19 = this->q00C; /*0x54c6c2*/
    if ( v19[45] != 7 && (*(int (__thiscall **)(_DWORD *))(*v19 + 388))(v19) != 7 ) /*0x54c6d9*/
    {
      if ( !v47 /*0x54c70c*/
        || (*((_DWORD *)Coord::To_Cell(&DataGlobal_87F7E8, (_DWORD *)(this + 64)) + 80) & 0x100) == 0
        && (v48 > 2 || v48 == 2 && !this->q090) )
      {
        LOBYTE(v12) = (*(int (__stdcall **)(int))(this->BuildingPlacement_field_0x04 + 72))(this + 4); /*0x54ca43*/
        return (char)v12; /*0x54ca4d*/
      }
      if ( !this->q090 ) /*0x54c71a*/
      {
        v20 = this->BuildingPlacement_field_0x0C; /*0x54c724*/
        this->q090 = 1; /*0x54c727*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v20 + 240))(v20, this + 64); /*0x54c731*/
      }
    }
  }
  v21 = this->q00C; /*0x54c737*/
  if ( v21 ) /*0x54c73c*/
  {
    if ( (*(int (__thiscall **)(_DWORD))(*v21 + 44))(this->BuildingPlacement_field_0x0C) == 1 ) /*0x54c748*/
    {
      if ( *(_BYTE *)(v21[433] + 3603) ) /*0x54c750*/
      {
        if ( !*(_BYTE *)(this->BuildingPlacement_field_0x0C + 1709) ) /*0x54c75d*/
        {
          DeployDir = g_RulesClass_Instance->DeployDir; /*0x54c776*/
          Value = ProgressTimer::GetValue((_WORD *)(this + 84), &v48); /*0x54c77a*/
          LOBYTE(v24) = 0; /*0x54c77f*/
          HIBYTE(v24) = DeployDir; /*0x54c781*/
          if ( *(_WORD *)Value != v24 ) /*0x54c786*/
          {
            LOBYTE(v25) = 0; /*0x54c78d*/
            HIBYTE(v25) = g_RulesClass_Instance->DeployDir; /*0x54c793*/
            LOWORD(v48) = v25; /*0x54c799*/
            FacingClass::Update((char *)(this + 84), &v48); /*0x54c79e*/
          }
        }
      }
    }
  }
  v26 = this->BuildingPlacement_field_0x0C; /*0x54c7a3*/
  this->q020 = 0; /*0x54c7a6*/
  v27 = (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 456))(v26); /*0x54c7b8*/
  v12 = this->q00C; /*0x54c7ba*/
  if ( !v12[140] ) /*0x54c7bd*/
  {
    v28 = (int *)(v12 + 156); /*0x54c7c7*/
    v49 = *v28; /*0x54c7ce*/
    v50 = v28[1]; /*0x54c7da*/
    v51 = v28[2]; /*0x54c7e6*/
    v12 = (char *)Coord::To_Cell(&DataGlobal_87F7E8, &v49); /*0x54c7ea*/
    if ( (*((_DWORD *)v12 + 80) & 0x100) != 0 ) /*0x54c7f8*/
    {
      LOBYTE(v12) = dword_ABC5DC; /*0x54c7fa*/
      if ( v27 >= dword_ABC5DC ) /*0x54c801*/
        v27 -= dword_ABC5DC; /*0x54c803*/
    }
  }
  if ( !v27 )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(*this->q00C + 1348))(this->BuildingPlacement_field_0x0C, 0, 0); /*0x54c814*/
    (*(void (__thiscall **)(_DWORD, _DWORD))(*this->q00C + 292))(this->BuildingPlacement_field_0x0C, 0); /*0x54c820*/
    v29 = this->q00C; /*0x54c826*/
    if ( !v29[1709] ) /*0x54c829*/
      (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v29 + 436))(v29, this + 64); /*0x54c836*/
    v30 = (int *)(this->BuildingPlacement_field_0x0C + 156); /*0x54c83f*/
    v49 = *v30; /*0x54c848*/
    v50 = v30[1]; /*0x54c84f*/
    v31 = v30[2]; /*0x54c853*/
    v49 = *v30; /*0x54c858*/
    v50 = v30[1]; /*0x54c863*/
    v51 = v30[2]; /*0x54c870*/
    if ( v31 > Cell::GetGroundHeight(&v49) ) /*0x54c87b*/
    {
      v32 = (int *)(this->BuildingPlacement_field_0x0C + 156); /*0x54c880*/
      v49 = *v32; /*0x54c888*/
      v50 = v32[1]; /*0x54c894*/
      v51 = v32[2]; /*0x54c8a0*/
      if ( (*((_DWORD *)Coord::To_Cell(&DataGlobal_87F7E8, &v49) + 80) & 0x100) != 0 ) /*0x54c8b2*/
        *(_BYTE *)(this->BuildingPlacement_field_0x0C + 140) = 1; /*0x54c8b7*/
    }
    (*(void (__thiscall **)(_DWORD, int))(*this->q00C + 292))(this->BuildingPlacement_field_0x0C, 1); /*0x54c8c5*/
    *v2 = dword_ABC5A8; /*0x54c8d2*/
    this->q044 = dword_ABC5AC; /*0x54c8db*/
    v33 = this->BuildingPlacement_field_0x0C; /*0x54c8e4*/
    *(_DWORD *)(this + 72) = dword_ABC5B0; /*0x54c8e7*/
    *(_BYTE *)(this + 76) = 0; /*0x54c8ea*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v33 + 396))(v33, 2); /*0x54c8f0*/
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(*this->q00C + 1152))(this->BuildingPlacement_field_0x0C, 0, 1); /*0x54c8ff*/
    v34 = this->q00C; /*0x54c905*/
    LOBYTE(v12) = v34[144]; /*0x54c908*/
    if ( (_BYTE)v12 )
    {
      LOBYTE(v12) = v34[129]; /*0x54c916*/
      if ( !(_BYTE)v12 )
      {
        LOBYTE(v12) = v34[141]; /*0x54c924*/
        if ( !(_BYTE)v12 )
        {
          (*(void (__thiscall **)(_BYTE *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v34 + 1164))(v34, 0, 0, 0, 0); /*0x54c93c*/
          v35 = this->q00C; /*0x54c942*/
          if ( v35[144] ) /*0x54c945*/
            (*(void (__thiscall **)(_BYTE *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v35 + 1160))( /*0x54c95b*/
              v35,
              0,
              0,
              0,
              0,
              0);
          v36 = this->BuildingPlacement_field_0x0C; /*0x54c961*/
          if ( *(_BYTE *)(v36 + 144) ) /*0x54c964*/
          {
            v49 = *(_DWORD *)(v36 + 156); /*0x54c978*/
            v50 = *(_DWORD *)(v36 + 160); /*0x54c97f*/
            v51 = *(_DWORD *)(v36 + 164); /*0x54c986*/
            MapClass::RevealArea2(&v49, *(_DWORD *)(v36 + 608) - 3, *(_DWORD *)(v36 + 608) + 3, 0); /*0x54c9a2*/
          }
          v48 = this->BuildingPlacement_field_0x0C; /*0x54c9ac*/
          v37 = v48; /*0x54c9aa*/
          if ( *(_DWORD *)((*(int (**)(void))(*(_DWORD *)v48 + 444))() + 224) == v37 ) /*0x54c9be*/
          {
            v38 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v37 + 444))(v37); /*0x54c9c6*/
            CellClass::AttachObject(v38, 0); /*0x54c9ce*/
          }
          GadgetGrid::RemoveItem(g_CellClassManager, this->BuildingPlacement_field_0x0C); /*0x54c9dc*/
          v39 = this->BuildingPlacement_field_0x0C; /*0x54c9e1*/
          this->q014 = 0; /*0x54c9e4*/
          v45 = v39; /*0x54c9eb*/
          v40 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v39 + 444))(v39); /*0x54c9ee*/
          CrateClass::ProcessPickup(v40, v45); /*0x54c9f6*/
          v12 = this->q00C; /*0x54c9fb*/
          v12[1710] = 1; /*0x54c9fe*/
          *(_BYTE *)(this->BuildingPlacement_field_0x0C + 1063) = 0; /*0x54ca08*/
          *(_BYTE *)(this->BuildingPlacement_field_0x0C + 1061) = 0; /*0x54ca12*/
          v41 = this->BuildingPlacement_field_0x0C; /*0x54ca19*/
          this->q090 = 0; /*0x54ca1e*/
          if ( v41 )
          {
            v12 = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v41 + 44))(v41); /*0x54ca29*/
            if ( v12 == (char *)1 )
            {
              v42 = this->BuildingPlacement_field_0x0C; /*0x54ca31*/
              if ( v42 )
                v43 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v42 + 44))(this->BuildingPlacement_field_0x0C) == 1 ? v42 : 0;
              else
                v43 = 0; /*0x54ca38*/
              v12 = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v43 + 132))(v43); /*0x54ca62*/
              if ( v12[1709] ) /*0x54ca68*/
              {
                v12 = this->q00C; /*0x54ca72*/
                v12[308] = 0; /*0x54ca75*/
              }
            }
          }
        }
      }
    }
  }
  return (char)v12; /*0x54c60c*/
}
}

// 0x594F40
unsigned int * BuildingPlacement::SelectBuildingPlacementCells(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  _DWORD *v35; // [esp+18h] [ebp-30h]
  int v36; // [esp+1Ch] [ebp-2Ch]
  int v37; // [esp+20h] [ebp-28h]
  double v38; // [esp+20h] [ebp-28h]
  int v39; // [esp+2Ch] [ebp-1Ch]
  int v40; // [esp+2Ch] [ebp-1Ch]
  int v41; // [esp+30h] [ebp-18h]
  int v42; // [esp+30h] [ebp-18h]
  int v43; // [esp+34h] [ebp-14h]
  int v44; // [esp+34h] [ebp-14h]
  int v45; // [esp+38h] [ebp-10h]
  int v46; // [esp+38h] [ebp-10h]
  int v47; // [esp+3Ch] [ebp-Ch]
  _DWORD *v48; // [esp+3Ch] [ebp-Ch]
  double v49; // [esp+40h] [ebp-8h]
  double v50; // [esp+40h] [ebp-8h]

  int v2 = this->q008; /*0x594f51*/
  v49 = -1.0; /*0x594f5f*/
  v41 = -1; /*0x594f6f*/
  int v3 = Math::RoundToInt(((double)dword_ABE030 * 0.01 * 12.0 / (double)dword_ABE028 + 2.0) * (double)v2); /*0x594f8d*/
  int v4 = a2; /*0x594f92*/
  v36 = v3; /*0x594f99*/
  if ( !v2 && *(int *)(a2 + 16) > 0 ) /*0x594fa4*/
  {
    v36 = *(_DWORD *)(a2 + 16); /*0x594fa6*/
    v3 = v36; /*0x594faa*/
  }
  if ( v3 > *(_DWORD *)(a2 + 16) || !v3 ) /*0x594fb5*/
  {
    if ( !v2 ) /*0x594fb9*/
      return 0; /*0x594fc3*/
    v36 = *(_DWORD *)(a2 + 16); /*0x594fc6*/
  }
  _DWORD * v6 = __2_YAPAXI_Z(0x18u); /*0x594fcc*/
  _DWORD * v7 = v6; /*0x594fd1*/
  if ( v6 ) /*0x594fd8*/
  {
    VectorClass::CellConstructor(v6, 0, 0); /*0x594fde*/
    *v7 = &vt_DynamicVectorClass_Cell; /*0x594fe3*/
    v7[5] = 10; /*0x594fe9*/
    v7[4] = 0; /*0x594ff0*/
    v35 = v7; /*0x594ff3*/
  }
  else
  {
    v35 = 0; /*0x594ff9*/
    v7 = 0; /*0x594ffd*/
  }
  int v8 = *(_DWORD *)(a2 + 16); /*0x594fff*/
  int v33 = 0; /*0x595002*/
  _DWORD * v9 = g_MapTileArray; /*0x595006*/
  if ( v8 - 1 > 0 )
  {
    while ( 1 )
    {
      int v10 = *(_DWORD *)(*(_DWORD *)(v4 + 4) + 4 * v33); /*0x595025*/
      if ( v9 ) /*0x59502c*/
        v39 = v9[20 * (__int16)v10 + 14 + 20 * unk_89C2DC * SHIWORD(v10)]; /*0x595053*/
      else
        v39 = -1; /*0x59502e*/
      int v11 = v33 + 1; /*0x59505b*/
      if ( v33 + 1 < v8 )
      {
        v43 = (__int16)v10; /*0x595072*/
        v45 = SHIWORD(v10); /*0x595076*/
        do
        {
          v37 = *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v11); /*0x59508b*/
          if ( v9 ) /*0x59509d*/
            int v12 = v9[20 * (__int16)v37 + 14 + 20 * unk_89C2DC * SHIWORD(v37)]; /*0x5950b3*/
          else
            v12 = -1; /*0x59509f*/
  double v13; // st7
          v13 = Math::Sqrt((double)((v43 - (__int16)v37) * (v43 - (__int16)v37)
                                  + (v45 - SHIWORD(v37)) * (v45 - SHIWORD(v37))))
              + (double)(v39 != v12 ? 0x14 : 0);
          if ( v11 && v13 > v49 ) /*0x5950fd*/
          {
            v49 = v13; /*0x595103*/
            v41 = v33; /*0x595107*/
          }
          v9 = g_MapTileArray; /*0x595112*/
          ++v11; /*0x595118*/
        }
        while ( v11 < *(_DWORD *)(a2 + 16) );
        v11 = v33 + 1; /*0x595122*/
        v7 = v35; /*0x595126*/
      }
      v33 = v11; /*0x59512d*/
      v8 = *(_DWORD *)(a2 + 16); /*0x595131*/
      if ( v11 >= v8 - 1 ) /*0x595139*/
        break; /*0x595139*/
      v4 = a2; /*0x595019*/
    }
    if ( v41 != -1 ) /*0x595146*/
    {
      _DWORD * v14 = (_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v41); /*0x595155*/
      int v15 = v7[2]; /*0x595158*/
      if ( v7[4] < v15 ) /*0x59515d*/
        goto LABEL_35; /*0x59515d*/
      if ( !*((_BYTE *)v7 + 13) && v15 ) /*0x595168*/
        goto LABEL_37; /*0x595168*/
      int v16 = v7[5]; /*0x59516a*/
      if ( v16 <= 0 ) /*0x59516f*/
        goto LABEL_37; /*0x59516f*/
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v7 + 8))(v7, v15 + v16, 0) ) /*0x59517a*/
      {
LABEL_35:
        int v17 = v7[4]; /*0x595181*/
        int v18 = v7[1]; /*0x595184*/
        v7[4] = v17 + 1; /*0x59518a*/
        *(_DWORD *)(v18 + 4 * v17) = *v14; /*0x59518f*/
      }
      v9 = g_MapTileArray; /*0x595192*/
LABEL_37:
      v4 = a2; /*0x595198*/
      goto LABEL_38; /*0x595198*/
    }
    v4 = a2; /*0x5951d7*/
  }
  if ( !*(_DWORD *)(v4 + 16) )
  {
LABEL_38:
    int v19 = v7[4]; /*0x59519b*/
    if ( v19 < v36 )
    {
      while ( 1 )
      {
        v50 = -1.0; /*0x5951ad*/
        v40 = -1; /*0x5951bf*/
        int v34 = 0; /*0x5951c7*/
        if ( *(int *)(v4 + 16) > 0 )
        {
          while ( 1 )
          {
            int v25 = *(_DWORD *)(*(_DWORD *)(v4 + 4) + 4 * v34); /*0x595244*/
            if ( v9 ) /*0x595250*/
              v42 = v9[20 * (__int16)v25 + 14 + 20 * unk_89C2DC * SHIWORD(v25)]; /*0x595275*/
            else
              v42 = -1; /*0x595252*/
            int v26 = 0; /*0x595279*/
            v38 = 9999999.0; /*0x59527b*/
            if ( v19 > 0 )
            {
              v47 = (__int16)v25; /*0x595299*/
              v44 = SHIWORD(v25); /*0x59529d*/
              do
              {
                v46 = *(_DWORD *)(v35[1] + 4 * v26); /*0x5952b3*/
                if ( v9 ) /*0x5952c5*/
                  int v27 = v9[20 * (__int16)v46 + 14 + 20 * unk_89C2DC * SHIWORD(v46)]; /*0x5952db*/
                else
                  v27 = -1; /*0x5952c7*/
  double v28; // st7
                v28 = Math::Sqrt((double)((v47 - (__int16)v46) * (v47 - (__int16)v46)
                                        + (v44 - SHIWORD(v46)) * (v44 - SHIWORD(v46))))
                    + (double)(v42 != v27 ? 0x14 : 0);
                if ( v28 < v38 ) /*0x595321*/
                  v38 = v28; /*0x595323*/
                v9 = g_MapTileArray; /*0x59532f*/
                ++v26; /*0x595335*/
                v19 = v35[4]; /*0x595336*/
              }
              while ( v26 < v19 );
            }
            if ( v38 > v50 ) /*0x59534e*/
            {
              v50 = v38; /*0x595358*/
              v40 = v34; /*0x595364*/
            }
            if ( ++v34 >= *(_DWORD *)(a2 + 16) ) /*0x595379*/
              break; /*0x595379*/
            v4 = a2; /*0x595238*/
          }
          v7 = v35; /*0x59537f*/
          v4 = a2; /*0x595383*/
        }
        int v29 = v7[2]; /*0x59538f*/
        v48 = (_DWORD *)(*(_DWORD *)(v4 + 4) + 4 * v40); /*0x595392*/
        if ( v7[4] < v29 ) /*0x59539b*/
          goto LABEL_70; /*0x59539b*/
        if ( !*((_BYTE *)v7 + 13) && v29 ) /*0x5953a6*/
          goto LABEL_72; /*0x5953a6*/
        int v30 = v7[5]; /*0x5953a8*/
        if ( v30 <= 0 ) /*0x5953ad*/
          goto LABEL_72; /*0x5953ad*/
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v7 + 8))(v7, v29 + v30, 0) ) /*0x5953b8*/
        {
LABEL_70:
          int v31 = v7[4]; /*0x5953bf*/
          int v32 = v7[1]; /*0x5953c2*/
          v7[4] = v31 + 1; /*0x5953c8*/
          *(_DWORD *)(v32 + 4 * v31) = *v48; /*0x5953d1*/
        }
        v9 = g_MapTileArray; /*0x5953d4*/
LABEL_72:
        v19 = v7[4]; /*0x5953da*/
        if ( v19 >= v36 ) /*0x5953e3*/
          return v7; /*0x5953e3*/
      }
    }
    return v7; /*0x5951a4*/
  }
  int v20 = v7[2]; /*0x5951e1*/
  _DWORD * v21 = *(_DWORD **)(v4 + 4); /*0x5951e7*/
  if ( v7[4] < v20 /*0x595211*/
    || (*((_BYTE *)v7 + 13) || !v20)
  int v22; // ecx
    && (v22 = v7[5], v22 > 0)
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v7 + 8))(v7, v20 + v22, 0) )
  {
    int v23 = v7[4]; /*0x59521c*/
    int v24 = v7[1]; /*0x59521f*/
    v7[4] = v23 + 1; /*0x595225*/
    *(_DWORD *)(v24 + 4 * v23) = *v21; /*0x59522a*/
    return v7; /*0x595235*/
  }
  return v7; /*0x594fbd*/
}
}

// 0x500200
unsigned int * BuildingPlacement::FindPosition(int * a0, IUnknown * aP1, IUnknown a3)
{
{
    int *v3;
    IUnknown *v4;
    int *v5;
    int v6;
    int v7;
    int v8;
    int *AttackCoords;
    int *v10;
    int v11;
    int v12;
    IUnknown *TileIndex;
    int v14;
    short v16[2];
    int v17;
    char v18[12];
    int v19;
    v4 = aP1;
    v5 = v3;
    v6 = (*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 732))(aP1);
    v7 = (*(int (__thiscall **)(IUnknown *))(v4->field_0 + 728))(v4) + v6;
    if ( (*(int (__thiscall **)(IUnknown *))(v4->field_0 + 724))(v4) + v7 )
    v8 = Random::Range((int *)(*(int *)&HouseClass_Player[29924] + 536), (IUnknown *)1, (IUnknown *)4);
    else
    v8 = 0;
    AttackCoords = HouseClass::GenerateAttackCoords(v5, (MouseClass *)&aP1, v8);
    v10 = &v4->field_9C;
    v17 = *AttackCoords;
    v11 = v4->field_9C;
    v16[0] = 0;
    v12 = *(int *)v4->__pad_A0;
    v16[1] = 0;
    v19 = v10[2];
    LOWORD(aP1) = v11 / 256;
    HIWORD(aP1) = v12 / 256;
    TileIndex = (IUnknown *)MapClass::GetTileIndex(&DataGlobal_87C374[13428], (IUnknown *)&aP1, 0, 0);
    v14 = *LayerClass::Pathfinding_Find( (IUnknown *)&DataGlobal_87C374[13428], (IUnknown *)v18, (IUnknown *)v18, (IUnknown *)&v17, (IUnknown *)1, TileIndex, 0, 0, (IUnknown *)1, (IUnknown *)1, 0, 0, 0, (IUnknown *)1, (IUnknown *)v16, 0, 0);
    *a0 = v14;
    return a0;
}
}
