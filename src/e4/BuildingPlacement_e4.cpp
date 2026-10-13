// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Input_e4.hpp"
#include "e4/classes/GadgetGrid_e4.hpp"
#include "e4/classes/FacingClass_e4.hpp"
#include "e4/classes/CrateClass_e4.hpp"
#include "e4/classes/Random_e4.hpp"

#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/BuildingPlacement_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/BuildingLight_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/BulletTypeClass_e4.hpp"
#include "e4/classes/CChatEventSink_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/GadgetClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/BulkData_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/ProgressTimer_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"

// 0x4FB840
namespace gamemd {  // G42.18 ns repair
void* BuildingPlacement::Activate(int a2, unsigned int *a3)
{

  int v4; // edi
  unsigned int *v5; // esi
  int v6; // eax
  const void *v7; // eax
  unsigned int *v8; // eax
  MapClass *v10; // [esp+0h] [ebp-Ch]

  if ( this != dword_A83D4C ) /*0x4fb84c*/
    return 0; /*0x4fb84c*/
  if ( *(unsigned int *)&g_RadarBlipManager ) /*0x4fb859*/
    return 0; /*0x4fb859*/
  v4 = a2; /*0x4fb85f*/
  if ( !a2 ) /*0x4fb865*/
    return 0; /*0x4fb865*/
  v5 = a3; /*0x4fb86b*/
  if ( !a3 ) /*0x4fb871*/
    return 0; /*0x4fb919*/
  MapClass::UnselectAll_ClearLimboLaunchers(v10); /*0x4fb877*/
  BuildingClass::TogglePower2((BuildingClass *)&DataGlobal_87F7E8, 0); /*0x4fb883*/
  BuildingClass::TogglePower((BuildingClass *)&DataGlobal_87F7E8, 0); /*0x4fb88f*/
  DataGlobal_88099A = 0; /*0x4fb894*/
  DataGlobal_88099B = 0; /*0x4fb89b*/
  DataGlobal_88099C = 0; /*0x4fb8a2*/
  *(unsigned int *)&g_BuildingPlacementState = -1; /*0x4fb8a9*/
  v6 = v5->q520; /*0x4fb8b3*/
  *(unsigned int *)&g_RadarBlipPool = v5; /*0x4fb8b9*/
  *(unsigned int *)&g_RadarBlipManager = v6; /*0x4fb8bf*/
  *(unsigned int *)&DataGlobal_880994 = this->q030; /*0x4fb8c7*/
  v7 = (const void *)v5->vt_slot_264(1); /*0x4fb8d3*/
  Mouse::SetBounds((int)&DataGlobal_87F7E8, v7); /*0x4fb8df*/
  v8 = (unsigned int *)(*(int (**)(int, int *))(*(unsigned int *)v4 + 440))(v4, &a2); /*0x4fb8ed*/
  Tactical::MouseMove((Tactical *)&DataGlobal_87F7E8, &a3, v8); /*0x4fb8fe*/
  (*(void (**)(int, int))(*(unsigned int *)v4 + 292))(v4, 2); /*0x4fb909*/
  return 1; /*0x4fb90f*/

}
} // namespace gamemd
// 0x54C550
namespace gamemd {
VectorClass_flat * * BuildingPlacement::ProcessBuildingPlacementAction()
{

  BuildingPlacement *v2; // ebp
  CellClass *v3; // eax
  int BuildingPlacement_field_0x0C; // ecx
  BuildingPlacement *v5; // edi
  int landType; // eax
  unsigned int v7; // edi
  Cell *v8; // eax
  int v9; // ebx
  void *NeighbourContent; // eax
  unsigned char *v11; // ecx
  CellClass *v12; // eax
  CellClass *v13; // eax
  unsigned char *v14; // ecx
  char v15; // bl
  int v16; // edx
  unsigned int v17; // ebx
  unsigned int *v18; // ecx
  int v19; // ecx
  unsigned int *v20; // edi
  int v21; // ebx
  unsigned int *Value; // eax
  __int16 v23; // cx
  __int16 v24; // dx
  int v25; // ecx
  int v26; // edi
  int *v27; // eax
  unsigned char *v28; // ecx
  int *v29; // eax
  int v30; // edi
  int *v31; // edx
  int v32; // ecx
  unsigned char *v33; // ecx
  unsigned char *v34; // ecx
  int v35; // eax
  int v36; // edi
  CellClass *v37; // eax
  int v38; // ecx
  CrateClass *v39; // eax
  int v40; // ecx
  int v41; // edi
  int v42; // eax
  int v44; // [esp+44h] [ebp-28h]
  int v45; // [esp+48h] [ebp-24h]
  char v46; // [esp+5Bh] [ebp-11h]
  int v47; // [esp+5Ch] [ebp-10h] BYREF
  int v48; // [esp+60h] [ebp-Ch] BYREF
  int v49; // [esp+64h] [ebp-8h]
  int v50; // [esp+68h] [ebp-4h]

  v2 = &this->q040; /*0x54c55e*/
  v3 = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, &this->q040); /*0x54c562*/
  BuildingPlacement_field_0x0C = this->q00C; /*0x54c567*/
  v5 = (BuildingPlacement *)v3; /*0x54c56a*/
  if ( !*(unsigned char *)(BuildingPlacement_field_0x0C + 1709) ) /*0x54c56c*/
  {
    landType = v3->landType; /*0x54c57a*/
    if ( (landType == 2 || landType == 6) /*0x54c5a6*/
      && *(unsigned int *)(BuildingPlacement_field_0x0C + 180) != 7
      && (*(int (**)(int))(*(unsigned int *)BuildingPlacement_field_0x0C + 388))(BuildingPlacement_field_0x0C) != 7 )
    {
      if ( (unsigned __int8)ObjectClass::HasLinkedObject(this->q00C) ) /*0x54c5b5*/
      {
        v7 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 7); /*0x54c5d6*/
        v8 = (Cell *)(*(int (**)(int))(*(unsigned int *)this->q00C + 444))(this->q00C); /*0x54c5da*/
        v9 = *(unsigned int *)this->q00C; /*0x54c5e6*/
        NeighbourContent = Cell::GetNeighbourContent(v8, v7); /*0x54c5ea*/
        (*(void (**)(int, void *, int))(v9 + 1152))(this->q00C, NeighbourContent, 1); /*0x54c5f3*/
        v11 = (unsigned char *)this->q00C; /*0x54c5f9*/
        LOBYTE(v9) = v11[116]; /*0x54c600*/
        (*(void (**)(unsigned char *, unsigned int))(*(unsigned int *)v11 + 292))(v11, 0); /*0x54c603*/
        v12 = (CellClass *)this->q00C; /*0x54c609*/
        LOBYTE(v12->unknown74) = v9; /*0x54c60d*/
        this->u32_50 = 3; /*0x54c610*/
      }
      else
      {
        v13 = (CellClass *)(*(int (**)(int))(*(unsigned int *)this->q00C + 444))(this->q00C); /*0x54c624*/
        CellClass::AttachObject(v13, v45); /*0x54c62c*/
        v14 = (unsigned char *)this->q00C; /*0x54c631*/
        v15 = v14[116]; /*0x54c638*/
        LOBYTE(v12) = (*(int (**)(unsigned char *, unsigned int))(*(unsigned int *)v14 + 292))(v14, 0); /*0x54c63b*/
        *(unsigned char *)(this->q00C + 116) = v15; /*0x54c645*/
        v16 = this->u32_2C; /*0x54c648*/
        this->u32_50 = 2; /*0x54c64b*/
        this->u32_80 = v16; /*0x54c652*/
      }
      return (char)v12; /*0x54c61d*/
    }
    v47 = (*(int (**)(int, BuildingPlacement *, int, int, unsigned int, int))(*(unsigned int *)this->q00C /*0x54c675*/
                                                                                 + 428))(
            this->q00C,
            v5,
            -1,
            -1,
            0,
            1);
    v17 = Input::OffsetToDirection(&this->q040); /*0x54c684*/
    if ( BuildingPlacement::IsPlacementFlagSet(v5, v17, BYTE1(v5[8].BuildingPlacement_field_0x20) & 1) /*0x54c699*/
      || (v46 = 0, this->u32_90) )
    {
      v46 = 1; /*0x54c6a8*/
    }
    if ( (*(int (**)(int))(*(unsigned int *)this->q00C + 44))(this->q00C) == 1 /*0x54c6bc*/
      && !v17 )
    {
      v46 = 1; /*0x54c6be*/
    }
    v18 = (unsigned int *)this->q00C; /*0x54c6c2*/
    if ( v18[45] != 7 && (*(int (**)(unsigned int *))(*v18 + 388))(v18) != 7 ) /*0x54c6d9*/
    {
      if ( !v46 /*0x54c70c*/
        || (Coord::To_Cell((Coord *)&DataGlobal_87F7E8, &this->q040)->flags[0] & 0x100) == 0
        && (v47 > 2 || v47 == 2 && !this->u32_90) )
      {
        LOBYTE(v12) = (*(char (**)(int *))(this->q004 + 72))(&this->q004); /*0x54ca43*/
        return (char)v12; /*0x54ca4d*/
      }
      if ( !this->u32_90 ) /*0x54c71a*/
      {
        v19 = this->q00C; /*0x54c724*/
        this->u32_90 = 1; /*0x54c727*/
        (*(void (**)(int, char *))(*(unsigned int *)v19 + 240))(v19, &this->q040); /*0x54c731*/
      }
    }
  }
  v20 = (unsigned int *)this->q00C; /*0x54c737*/
  if ( v20 ) /*0x54c73c*/
  {
    if ( (*(int (**)(int))(*v20 + 44))(this->q00C) == 1 ) /*0x54c748*/
    {
      if ( *(unsigned char *)(v20[433] + 3603) ) /*0x54c750*/
      {
        if ( !*(unsigned char *)(this->q00C + 1709) ) /*0x54c75d*/
        {
          v21 = *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 72); /*0x54c776*/
          Value = ProgressTimer::GetValue(&this->q054, &v47); /*0x54c77a*/
          LOBYTE(v23) = 0; /*0x54c77f*/
          HIBYTE(v23) = v21; /*0x54c781*/
          if ( *(unsigned short *)Value != v23 ) /*0x54c786*/
          {
            LOBYTE(v24) = 0; /*0x54c78d*/
            HIBYTE(v24) = *(unsigned char *)(*(unsigned int *)&g_RulesClass_Instance + 72); /*0x54c793*/
            LOWORD(v47) = v24; /*0x54c799*/
            FacingClass::Update(&this->q054, &v47); /*0x54c79e*/
          }
        }
      }
    }
  }
  v25 = this->q00C; /*0x54c7a3*/
  this->u32_80 = 0; /*0x54c7a6*/
  v26 = (*(int (**)(int))(*(unsigned int *)v25 + 456))(v25); /*0x54c7b8*/
  v12 = (CellClass *)this->q00C; /*0x54c7ba*/
  if ( !LOBYTE(v12->sensorsOfHouses[4]) ) /*0x54c7bd*/
  {
    v27 = &v12->sensorsOfHouses[8]; /*0x54c7c7*/
    v48 = *v27; /*0x54c7ce*/
    v49 = v27[1]; /*0x54c7da*/
    v50 = v27[2]; /*0x54c7e6*/
    v12 = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, &v48); /*0x54c7ea*/
    if ( (v12->flags[0] & 0x100) != 0 ) /*0x54c7f8*/
    {
      LOBYTE(v12) = dword_ABC5DC; /*0x54c7fa*/
      if ( v26 >= dword_ABC5DC ) /*0x54c801*/
        v26 -= dword_ABC5DC; /*0x54c803*/
    }
  }
  if ( !v26 )
  {
    (*(void (**)(int, unsigned int, unsigned int))(*(unsigned int *)this->q00C + 1348))( /*0x54c814*/
      this->q00C,
      0,
      0);
    (*(void (**)(int, unsigned int))(*(unsigned int *)this->q00C + 292))( /*0x54c820*/
      this->q00C,
      0);
    v28 = (unsigned char *)this->q00C; /*0x54c826*/
    if ( !v28[1709] ) /*0x54c829*/
      (*(void (**)(unsigned char *, char *))(*(unsigned int *)v28 + 436))(v28, &this->q040); /*0x54c836*/
    v29 = (int *)(this->q00C + 156); /*0x54c83f*/
    v48 = *v29; /*0x54c848*/
    v49 = v29[1]; /*0x54c84f*/
    v30 = v29[2]; /*0x54c853*/
    v48 = *v29; /*0x54c858*/
    v49 = v29[1]; /*0x54c863*/
    v50 = v29[2]; /*0x54c870*/
    if ( v30 > Cell::GetGroundHeight(&v48) ) /*0x54c87b*/
    {
      v31 = (int *)(this->q00C + 156); /*0x54c880*/
      v48 = *v31; /*0x54c888*/
      v49 = v31[1]; /*0x54c894*/
      v50 = v31[2]; /*0x54c8a0*/
      if ( (Coord::To_Cell((Coord *)&DataGlobal_87F7E8, &v48)->flags[0] & 0x100) != 0 ) /*0x54c8b2*/
        *(unsigned char *)(this->q00C + 140) = 1; /*0x54c8b7*/
    }
    (*(void (**)(int, int))(*(unsigned int *)this->q00C + 292))( /*0x54c8c5*/
      this->q00C,
      1);
    *(unsigned int *)v2->__pad_000 = dword_ABC5A8; /*0x54c8d2*/
    this->u32_44 = dword_ABC5AC; /*0x54c8db*/
    v32 = this->q00C; /*0x54c8e4*/
    this->u32_48 = dword_ABC5B0; /*0x54c8e7*/
    this->u32_4C = 0; /*0x54c8ea*/
    (*(void (**)(int, int))(*(unsigned int *)v32 + 396))(v32, 2); /*0x54c8f0*/
    (*(void (**)(int, unsigned int, int))(*(unsigned int *)this->q00C + 1152))( /*0x54c8ff*/
      this->q00C,
      0,
      1);
    v33 = (unsigned char *)this->q00C; /*0x54c905*/
    LOBYTE(v12) = v33[144]; /*0x54c908*/
    if ( (unsigned char)v12 )
    {
      LOBYTE(v12) = v33[129]; /*0x54c916*/
      if ( !(unsigned char)v12 )
      {
        LOBYTE(v12) = v33[141]; /*0x54c924*/
        if ( !(unsigned char)v12 )
        {
          (*(void (**)(unsigned char *, unsigned int, unsigned int, unsigned int, unsigned int))(*(unsigned int *)v33 + 1164))(v33, 0, 0, 0, 0); /*0x54c93c*/
          v34 = (unsigned char *)this->q00C; /*0x54c942*/
          if ( v34[144] ) /*0x54c945*/
            (*(void (**)(unsigned char *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int))(*(unsigned int *)v34 + 1160))( /*0x54c95b*/
              v34,
              0,
              0,
              0,
              0,
              0);
          v35 = this->q00C; /*0x54c961*/
          if ( *(unsigned char *)(v35 + 144) ) /*0x54c964*/
          {
            v48 = *(unsigned int *)(v35 + 156); /*0x54c978*/
            v49 = *(unsigned int *)(v35 + 160); /*0x54c97f*/
            v50 = *(unsigned int *)(v35 + 164); /*0x54c986*/
            MapClass::RevealArea2( /*0x54c9a2*/
              (MapClass *)&DataGlobal_87F7E8,
              &v48,
              *(unsigned int *)(v35 + 608) - 3,
              *(unsigned int *)(v35 + 608) + 3,
              0);
          }
          v47 = this->q00C; /*0x54c9ac*/
          v36 = v47; /*0x54c9aa*/
          if ( *(unsigned int *)((*(int (**)(void))(*(unsigned int *)v47 + 444))() + 224) == v36 ) /*0x54c9be*/
          {
            v37 = (CellClass *)(*(int (**)(int))(*(unsigned int *)v36 + 444))(v36); /*0x54c9c6*/
            CellClass::AttachObject(v37, 0); /*0x54c9ce*/
          }
          GadgetGrid::RemoveItem((GadgetGrid *)&g_CellClassManager, this->q00C); /*0x54c9dc*/
          v38 = this->q00C; /*0x54c9e1*/
          this->u32_50 = 0; /*0x54c9e4*/
          v44 = v38; /*0x54c9eb*/
          v39 = (CrateClass *)(*(int (**)(int))(*(unsigned int *)v38 + 444))(v38); /*0x54c9ee*/
          CrateClass::ProcessPickup(v39, v44); /*0x54c9f6*/
          v12 = (CellClass *)this->q00C; /*0x54c9fb*/
          v12[5].__pad_28[30] = 1; /*0x54c9fe*/
          *(unsigned char *)(this->q00C + 1063) = 0; /*0x54ca08*/
          *(unsigned char *)(this->q00C + 1061) = 0; /*0x54ca12*/
          v40 = this->q00C; /*0x54ca19*/
          this->u32_90 = 0; /*0x54ca1e*/
          if ( v40 )
          {
            v12 = (CellClass *)(*(int (**)(int))(*(unsigned int *)v40 + 44))(v40); /*0x54ca29*/
            if ( v12 == 1 )
            {
              v41 = this->q00C; /*0x54ca31*/
              if ( v41 )
                v42 = (*(int (**)(int))(*(unsigned int *)v41 + 44))(this->q00C) == 1
                    ? v41
                    : 0;
              else
                v42 = 0; /*0x54ca38*/
              v12 = (CellClass *)(*(int (**)(int))(*(unsigned int *)v42 + 132))(v42); /*0x54ca62*/
              if ( v12[5].__pad_28[29] ) /*0x54ca68*/
              {
                v12 = (CellClass *)this->q00C; /*0x54ca72*/
                LOBYTE(v12->gapsCoveringThisCell) = 0; /*0x54ca75*/
              }
            }
          }
        }
      }
    }
  }
  return (char)v12; /*0x54c60c*/

}
} // namespace gamemd
// 0x594F40
namespace gamemd {
unsigned int * BuildingPlacement::SelectBuildingPlacementCells(int a2)
{

  double v2; // st7
  int BuildingPlacement_field_0x20; // esi
  int v4; // eax
  int v5; // ebx
  VectorClass *v7; // eax
  VectorClass *v8; // esi
  int v9; // edx
  int v10; // edi
  int v11; // ecx
  int v12; // ebx
  int v13; // esi
  unsigned int *v15; // ebx
  int Capacity; // eax
  int Items; // ecx
  void *vtable0; // eax
  unsigned int *v19; // edx
  int v20; // edx
  int v21; // eax
  unsigned int *v22; // ebx
  int v23; // ecx
  void *v24; // eax
  unsigned int *v25; // edx
  int v26; // ecx
  int v27; // ebx
  int v28; // esi
  int v31; // eax
  int v32; // ecx
  void *v33; // eax
  unsigned int *v34; // edx
  double v35; // [esp+0h] [ebp-48h]
  double v36; // [esp+0h] [ebp-48h]
  int v37; // [esp+14h] [ebp-34h]
  int v38; // [esp+14h] [ebp-34h]
  VectorClass *v39; // [esp+18h] [ebp-30h]
  int v40; // [esp+1Ch] [ebp-2Ch]
  int v41; // [esp+20h] [ebp-28h]
  int v42; // [esp+20h] [ebp-28h]
  int v43; // [esp+20h] [ebp-28h]
  double v44; // [esp+20h] [ebp-28h]
  int v45; // [esp+2Ch] [ebp-1Ch]
  int v46; // [esp+2Ch] [ebp-1Ch]
  int v47; // [esp+2Ch] [ebp-1Ch]
  int v48; // [esp+30h] [ebp-18h]
  int v49; // [esp+30h] [ebp-18h]
  int v50; // [esp+34h] [ebp-14h]
  int v51; // [esp+34h] [ebp-14h]
  int v52; // [esp+38h] [ebp-10h]
  int v53; // [esp+38h] [ebp-10h]
  int v54; // [esp+38h] [ebp-10h]
  int v55; // [esp+38h] [ebp-10h]
  int v56; // [esp+3Ch] [ebp-Ch]
  unsigned int *v57; // [esp+3Ch] [ebp-Ch]
  double v58; // [esp+40h] [ebp-8h]
  unsigned __int64 v59; // [esp+40h] [ebp-8h]

  __asm { fild dword_ABE030 } /*0x594f49*/
  BuildingPlacement_field_0x20 = this->u32_20; /*0x594f51*/
  __asm { fmul ds:dbl_7E3808 } /*0x594f55*/
  v45 = BuildingPlacement_field_0x20; /*0x594f5b*/
  v58 = -1.0; /*0x594f5f*/
  v48 = -1; /*0x594f6f*/
  __asm /*0x594f77*/
  {
    fmul ds:dbl_7ED8D8
    fidiv dword_ABE028
    fadd ds:dbl_7E1708
    fimul [esp+40h+var_1C]
  }
  LOWORD(v4) = Math::RoundToInt(v2); /*0x594f8d*/
  v5 = a2; /*0x594f92*/
  v40 = v4; /*0x594f99*/
  if ( !BuildingPlacement_field_0x20 && a2->q010 > 0 ) /*0x594fa4*/
  {
    v40 = a2->q010; /*0x594fa6*/
    v4 = v40; /*0x594faa*/
  }
  if ( v4 > a2->q010 || !v4 ) /*0x594fb5*/
  {
    if ( !BuildingPlacement_field_0x20 ) /*0x594fb9*/
      return 0; /*0x594fc3*/
    v40 = a2->q010; /*0x594fc6*/
  }
  v7 = (VectorClass *)__2_YAPAXI_Z(0x18u); /*0x594fcc*/
  v8 = v7; /*0x594fd1*/
  if ( v7 ) /*0x594fd8*/
  {
    VectorClass::CellConstructor(v7, 0, 0); /*0x594fde*/
    /* X11: vtable install elided (implicit via DynamicVectorClass virtuals 0x594fe3) */
    v8[1].Items = (void *)10; /*0x594fe9*/
    v8[1].vtable0 = 0; /*0x594ff0*/
    v39 = v8; /*0x594ff3*/
  }
  else
  {
    v39 = 0; /*0x594ff9*/
    v8 = 0; /*0x594ffd*/
  }
  v9 = a2->q010; /*0x594fff*/
  v37 = 0; /*0x595002*/
  v10 = g_MissionQueueFrame.localVariables[163]; /*0x595006*/
  if ( v9 - 1 > 0 )
  {
    while ( 1 )
    {
      v11 = *(unsigned int *)(*(unsigned int *)(v5 + 4) + 4 * v37); /*0x595025*/
      if ( v10 ) /*0x59502c*/
        v46 = *(unsigned int *)(80 * ((__int16)v11 + g_MapCellWidth * SHIWORD(v11)) + v10 + 56); /*0x595053*/
      else
        v46 = -1; /*0x59502e*/
      v12 = v37 + 1; /*0x59505b*/
      if ( v37 + 1 < v9 )
      {
        v50 = (__int16)v11; /*0x595072*/
        v52 = SHIWORD(v11); /*0x595076*/
        do
        {
          v41 = *(unsigned int *)(*(unsigned int *)(a2 + 4) + 4 * v12); /*0x59508b*/
          if ( v10 ) /*0x59509d*/
            v13 = *(unsigned int *)(80 * ((__int16)v41 + g_MapCellWidth * SHIWORD(v41)) + v10 + 56); /*0x5950b3*/
          else
            v13 = -1; /*0x59509f*/
          v42 = (v50 - (__int16)v41) * (v50 - (__int16)v41) + (v52 - SHIWORD(v41)) * (v52 - SHIWORD(v41)); /*0x5950c6*/
          __asm /*0x5950ca*/
          {
            fild [esp+48h+var_28]
            fstp [esp+48h+var_48]; double
          }
          Math::Sqrt(v35); /*0x5950d1*/
          v43 = v46 != v13 ? 0x14 : 0;
          __asm { fild [esp+40h+var_28] } /*0x5950ea*/
          __asm { faddp st(1), st }
          if ( !v12 ) /*0x5950f2*/
            goto LABEL_26; /*0x5950f2*/
          __asm /*0x5950f4*/
          {
            fcom [esp+40h+var_C+4]
            fnstsw ax
          }
          if ( (_AX & 0x4100) != 0 ) /*0x5950fd*/
          {
LABEL_26:
            __asm { fstp st } /*0x59510d*/
          }
          else
          {
            __asm { fstp [esp+40h+var_C+4] } /*0x595103*/
            v48 = v37; /*0x595107*/
          }
          v10 = g_MissionQueueFrame.localVariables[163]; /*0x595112*/
          ++v12; /*0x595118*/
        }
        while ( v12 < a2->q010 );
        v12 = v37 + 1; /*0x595122*/
        v8 = v39; /*0x595126*/
      }
      v37 = v12; /*0x59512d*/
      v9 = a2->q010; /*0x595131*/
      if ( v12 >= v9 - 1 ) /*0x595139*/
        break; /*0x595139*/
      v5 = a2; /*0x595019*/
    }
    if ( v48 != -1 ) /*0x595146*/
    {
      v15 = (unsigned int *)(*(unsigned int *)(a2 + 4) + 4 * v48); /*0x595155*/
      Capacity = v8->Capacity; /*0x595158*/
      if ( (int)v8[1].vtable0 < Capacity ) /*0x59515d*/
        goto LABEL_36; /*0x59515d*/
      if ( !v8->IsAllocated && Capacity ) /*0x595168*/
        goto LABEL_38; /*0x595168*/
      Items = (int)v8[1].Items; /*0x59516a*/
      if ( Items <= 0 ) /*0x59516f*/
        goto LABEL_38; /*0x59516f*/
      if ( (*((unsigned __int8 (**)(VectorClass *, int, unsigned int))v8->vtable0 + 2))(v8, Capacity + Items, 0) ) /*0x59517a*/
      {
LABEL_36:
        vtable0 = v8[1].vtable0; /*0x595181*/
        v19 = v8->Items; /*0x595184*/
        v8[1].vtable0 = &vtable0->AbstractClass_1; /*0x59518a*/
        v19[(unsigned int)vtable0] = *v15; /*0x59518f*/
      }
      v10 = g_MissionQueueFrame.localVariables[163]; /*0x595192*/
LABEL_38:
      v5 = a2; /*0x595198*/
      goto LABEL_39; /*0x595198*/
    }
    v5 = a2; /*0x5951d7*/
  }
  if ( !v5->q010 )
  {
LABEL_39:
    v20 = (int)v8[1].vtable0; /*0x59519b*/
    if ( v20 < v40 )
    {
      while ( 1 )
      {
        v59 = 0xBFF0000000000000uLL; /*0x5951ad*/
        v47 = -1; /*0x5951bf*/
        v38 = 0; /*0x5951c7*/
        if ( v5->q010 > 0 )
        {
          while ( 1 )
          {
            v26 = *(unsigned int *)(*(unsigned int *)(v5 + 4) + 4 * v38); /*0x595244*/
            if ( v10 ) /*0x595250*/
              v49 = *(unsigned int *)(80 * ((__int16)v26 + g_MapCellWidth * SHIWORD(v26)) + v10 + 56); /*0x595275*/
            else
              v49 = -1; /*0x595252*/
            v27 = 0; /*0x595279*/
            v44 = 9999999.0; /*0x59527b*/
            if ( v20 > 0 )
            {
              v56 = (__int16)v26; /*0x595299*/
              v51 = SHIWORD(v26); /*0x59529d*/
              do
              {
                v53 = *((unsigned int *)v39->Items + v27); /*0x5952b3*/
                if ( v10 ) /*0x5952c5*/
                  v28 = *(unsigned int *)(80 * ((__int16)v53 + g_MapCellWidth * SHIWORD(v53)) + v10 + 56); /*0x5952db*/
                else
                  v28 = -1; /*0x5952c7*/
                v54 = (v56 - (__int16)v53) * (v56 - (__int16)v53) + (v51 - SHIWORD(v53)) * (v51 - SHIWORD(v53)); /*0x5952ee*/
                __asm /*0x5952f2*/
                {
                  fild [esp+48h+var_10]
                  fstp [esp+48h+var_48]; double
                }
                Math::Sqrt(v36); /*0x5952f9*/
                v55 = v49 != v28 ? 0x14 : 0;
                __asm /*0x595312*/
                {
                  fild [esp+40h+var_10]
                  faddp st(1), st
                  fcom qword ptr [esp+40h+var_28]
                  fnstsw ax
                }
                if ( (_AX & 0x100) != 0 ) /*0x595321*/
                  __asm { fstp qword ptr [esp+40h+var_28] } /*0x595323*/
                else
                  __asm { fstp st } /*0x595329*/
                v10 = g_MissionQueueFrame.localVariables[163]; /*0x59532f*/
                ++v27; /*0x595335*/
                v20 = (int)v39[1].vtable0; /*0x595336*/
              }
              while ( v27 < v20 );
            }
            __asm /*0x595341*/
            {
              fld qword ptr [esp+40h+var_28]
              fcomp [esp+40h+var_C+4]
              fnstsw ax
            }
            if ( (_AX & 0x4100) == 0 ) /*0x59534e*/
            {
              v59 = *(unsigned long long *)&v44; /*0x595358*/
              v47 = v38; /*0x595364*/
            }
            if ( ++v38 >= a2->q010 ) /*0x595379*/
              break; /*0x595379*/
            v5 = a2; /*0x595238*/
          }
          v8 = v39; /*0x59537f*/
          v5 = a2; /*0x595383*/
        }
        v31 = v8->Capacity; /*0x59538f*/
        v57 = (unsigned int *)(*(unsigned int *)(v5 + 4) + 4 * v47); /*0x595392*/
        if ( (int)v8[1].vtable0 < v31 ) /*0x59539b*/
          goto LABEL_72; /*0x59539b*/
        if ( !v8->IsAllocated && v31 ) /*0x5953a6*/
          goto LABEL_74; /*0x5953a6*/
        v32 = (int)v8[1].Items; /*0x5953a8*/
        if ( v32 <= 0 ) /*0x5953ad*/
          goto LABEL_74; /*0x5953ad*/
        if ( (*((unsigned __int8 (**)(VectorClass *, int, unsigned int))v8->vtable0 + 2))(v8, v31 + v32, 0) ) /*0x5953b8*/
        {
LABEL_72:
          v33 = v8[1].vtable0; /*0x5953bf*/
          v34 = v8->Items; /*0x5953c2*/
          v8[1].vtable0 = &v33->AbstractClass_1; /*0x5953c8*/
          v34[(unsigned int)v33] = *v57; /*0x5953d1*/
        }
        v10 = g_MissionQueueFrame.localVariables[163]; /*0x5953d4*/
LABEL_74:
        v20 = (int)v8[1].vtable0; /*0x5953da*/
        if ( v20 >= v40 ) /*0x5953e3*/
          return &v8->vtable0; /*0x5953e3*/
      }
    }
    return &v8->vtable0; /*0x5951a4*/
  }
  v21 = v8->Capacity; /*0x5951e1*/
  v22 = v5->__pad_004; /*0x5951e7*/
  if ( (int)v8[1].vtable0 < v21 /*0x595211*/
    || (v8->IsAllocated || !v21)
    && (v23 = (int)v8[1].Items, v23 > 0)
    && (*((unsigned __int8 (**)(VectorClass *, int, unsigned int))v8->vtable0 + 2))(v8, v21 + v23, 0) )
  {
    v24 = v8[1].vtable0; /*0x59521c*/
    v25 = v8->Items; /*0x59521f*/
    v8[1].vtable0 = &v24->AbstractClass_1; /*0x595225*/
    v25[(unsigned int)v24] = *v22; /*0x59522a*/
    return &v8->vtable0; /*0x595235*/
  }
  return &v8->vtable0; /*0x594fbd*/

}
} // namespace gamemd
// 0x500200
namespace gamemd {
unsigned int * BuildingPlacement::FindPosition(int * a0, IUnknown * aP1, IUnknown)
{
  unsigned int *v3; // esi
  int v5; // ebx
  int v6; // ebx
  int v7; // eax
  int *v8; // eax
  unsigned int *v9; // edx
  int v10; // eax
  int v11; // esi
  int TileIndex; // eax
  int v13; // ecx
  int16_t v15[2]; // [esp+Ch] [ebp-18h] BYREF
  int v16; // [esp+10h] [ebp-14h] BYREF
  unsigned int v17[4]; // [esp+14h] [ebp-10h] BYREF

  v3 = IUnknown; /*0x500205*/
  v5 = (*(int (**)(unsigned int *))(*IUnknown + 732))(IUnknown); /*0x50021a*/
  v6 = (*(int (**)(unsigned int *))(*v3 + 728))(v3) + v5; /*0x500222*/
  if ( (*(int (**)(unsigned int *))(*v3 + 724))(v3) + v6 ) /*0x50022e*/
    v7 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, 4); /*0x50024b*/
  else
    v7 = 0; /*0x500237*/
  v8 = HouseClass::GenerateAttackCoords(a0, &IUnknown, v7); /*0x500258*/
  v9 = v3 + 39; /*0x500265*/
  v16 = *v8; /*0x500267*/
  v10 = v3[39]; /*0x500271*/
  v15[0] = 0; /*0x500276*/
  v11 = v3[40]; /*0x50027b*/
  v15[1] = 0; /*0x50027e*/
  v17[3] = v9[2]; /*0x500286*/
  (*((unsigned short *)&(IUnknown))) = v10 / 256; /*0x500296*/
  (*(((unsigned short *)&(IUnknown)) + 1)) = v11 / 256; /*0x5002b2*/
  TileIndex = ((MapClass *)((MapClass *)&DataGlobal_87F7E8))->GetTileIndex((int16_t *)&IUnknown, 0, 0); /*0x5002cf*/
  v13 = *LayerClass::Pathfinding_Find( /*0x5002ea*/
           &DataGlobal_87F7E8,
           (int)v17,
           v17,
           (int16_t *)&v16,
           1,
           TileIndex,
           0,
           0,
           1,
           1,
           0,
           0,
           0,
           1,
           v15,
           0,
           0);
  *aP1 = v13; /*0x5002f2*/
  return aP1; /*0x5002f0*/
}
} // namespace gamemd