// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/DamageArea_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/ProgressTimer_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Delegate_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/DSurface_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/BombClass_e4.hpp"
#include "e4/classes/GameClass_e4.hpp"
#include "e4/classes/DeleteCommandClass_28_e4.hpp"
#include "e4/classes/AudioController_e4.hpp"
#include "e4/classes/GenericNode_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/CoordStruct_e4.hpp"
#include "e4/classes/LocomotionClass_e4.hpp"
#include "e4/classes/MPCooperative_e4.hpp"
#include "e4/classes/Return_e4.hpp"
#include "e4/classes/SlaveManagerClass_e4.hpp"
#include "e4/classes/ThemeClass_e4.hpp"
#include "e4/classes/TriggerClass_e4.hpp"

// 0x4CD600
namespace gamemd {
int DamageArea::ApplyScatter()
{

  double v1; // st7
  int v3; // edi
  unsigned short *v4; // eax
  DamageArea *v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  TechnoClass *v11; // ecx
  int health; // edi
  unsigned int *v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  int result; // eax
  AnimClass *v18; // esi
  int v19; // ebx
  void *WarheadVersusMultiplier; // eax
  int *DamageArea_field_00; // ecx
  unsigned int *v22; // ecx
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  int v26; // ebx
  int v27; // edi
  unsigned int v28; // ebx
  unsigned int v29; // ebp
  int v30; // eax
  int v31; // eax
  int v32; // ecx
  int v33; // edi
  int v34; // eax
  int v35; // eax
  int *v36; // eax
  int v37; // ecx
  int v38; // edi
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // ecx
  unsigned int *v43; // ebp
  int v44; // ebx
  int v45; // ebp
  int v46; // eax
  int v47; // eax
  bool v48; // bl
  int v49; // ebp
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // ebx
  int v54; // ebx
  int v55; // eax
  int v56; // ecx
  int v57; // eax
  int v58; // edx
  int v59; // eax
  int v60; // eax
  int v61; // edi
  int *v62; // ecx
  int v63; // ecx
  int v64; // kr44_4
  unsigned int *v65; // eax
  int v66; // edi
  unsigned int v67; // ebp
  unsigned int v68; // ebx
  int v69; // eax
  int v70; // eax
  int v71; // ecx
  int *v72; // ecx
  int (__stdcall ***v73)(unsigned int, void *, double *); // eax
  int v74; // edi
  int v75; // eax
  int *v86; // edi
  int v87; // edx
  int v89; // eax
  int v91; // ecx
  int v94; // ecx
  int *v96; // ecx
  int v97; // edi
  int v98; // ebx
  unsigned short *v99; // eax
  int v101; // eax
  int *v102; // ecx
  double v108; // [esp+28h] [ebp-78h]
  int64_t v109; // [esp+30h] [ebp-70h]
  double v110; // [esp+30h] [ebp-70h]
  double v111; // [esp+30h] [ebp-70h]
  char v112; // [esp+4Bh] [ebp-55h]
  int v113; // [esp+4Ch] [ebp-54h]
  int16_t v114[4]; // [esp+50h] [ebp-50h] BYREF
  int16_t v115[6]; // [esp+58h] [ebp-48h] BYREF
  int16_t v116[2]; // [esp+64h] [ebp-3Ch] BYREF
  double v117; // [esp+68h] [ebp-38h] BYREF
  int v118; // [esp+70h] [ebp-30h]
  double v119; // [esp+78h] [ebp-28h] BYREF
  int v120; // [esp+80h] [ebp-20h]
  unsigned char v121[12]; // [esp+88h] [ebp-18h] BYREF
  int v122; // [esp+94h] [ebp-Ch] BYREF
  int v123; // [esp+98h] [ebp-8h]
  int v124; // [esp+9Ch] [ebp-4h]
}
} // namespace gamemd

// 0x4D0180
namespace gamemd {
int DamageArea::CheckOccupancyEligibility()
{
  _DWORD *v2; // esi
  int (__stdcall ***v3)(_DWORD, void *, int *); // ecx
  int v4; // eax
  int v5; // esi
  int v8; // [esp+18h] [ebp-8h] BYREF
  int v9; // [esp+1Ch] [ebp-4h] BYREF

  v2 = (_DWORD *)this->u32_C; /*0x4d0187*/
  if ( v2 ) /*0x4d018c*/
  {
    if ( (*(int (__thiscall **)(_DWORD))(*v2 + 44))(this->u32_C) == 2 ) /*0x4d0198*/
    {
      if ( (*(int (__stdcall **)(_DWORD *))(v2[432] + 32))(v2 + 432) ) /*0x4d01ab*/
        return 0; /*0x4d01b0*/
    }
    else
    {
      v2 = 0; /*0x4d019a*/
    }
  }
  if ( this->u32_51 || !this->u32_5C ) /*0x4d01c1*/
    return 1; /*0x4d01c6*/
  if ( !v2 || !*(_BYTE *)(v2[433] + 3595) ) /*0x4d01d6*/
  {
    v3 = (int (__stdcall ***)(_DWORD, void *, int *))this->u32_C; /*0x4d01e4*/
    v4 = 0; /*0x4d01e7*/
    v8 = 0; /*0x4d01eb*/
    if ( v3 ) /*0x4d01ef*/
    {
      v5 = (**v3)(v3, &unk_822410, &v9); /*0x4d0204*/
      if ( v5 >= 0 ) /*0x4d0208*/
      {
        v9 = v9; /*0x4d021c*/
        Release3COM((ObjectClass *)&v8); /*0x4d0224*/
        v4 = v9; /*0x4d0229*/
        v8 = v9; /*0x4d022c*/
      }
      else
      {
        Release3COM((ObjectClass *)&v8); /*0x4d020e*/
        v4 = 0; /*0x4d0213*/
        v8 = 0; /*0x4d0215*/
      }
      if ( v5 < 0 && v5 != -2147467262 ) /*0x4d023a*/
        sub_7DC720(v5); /*0x4d023d*/
      if ( v4 ) /*0x4d0248*/
      {
        if ( !(*(int (__stdcall **)(int))(*(_DWORD *)v4 + 24))(v4) ) /*0x4d024d*/
        {
          if ( !v8 ) /*0x4d025a*/
            sub_7DC720(-2147467261); /*0x4d0261*/
          if ( !(*(int (__stdcall **)(int))(*(_DWORD *)v8 + 28))(v8) ) /*0x4d026d*/
          {
            v4 = v8; /*0x4d0274*/
            goto LABEL_24; /*0x4d0278*/
          }
        }
        v4 = v8; /*0x4d027a*/
      }
    }
    if ( !*(_DWORD *)(this->u32_C + 764) ) /*0x4d0281*/
    {
  LABEL_24:
      if ( v4 ) /*0x4d028d*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v4 + 8))(v4); /*0x4d0292*/
      return 1; /*0x4d029c*/
    }
    if ( v4 ) /*0x4d029f*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v4 + 8))(v4); /*0x4d02a4*/
  }
  return 0; /*0x4d0295*/
}
} // namespace gamemd
// 0x565660
namespace gamemd {
unsigned int * DamageArea::CalcScatterOffset(unsigned int * v11, int16_t * a3)
{
  int v3; // ebx
  int v4; // ebp
  int v5; // esi
  __int16 v6; // di
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  __int16 *v11; // [esp+20h] [ebp+8h]

  v3 = this->u32_F4; /*0x565668*/
  v4 = this->u32_FC; /*0x56566f*/
  v5 = a3[1]; /*0x565676*/
  v6 = *a3; /*0x56567b*/
  v7 = this->u32_100; /*0x56567e*/
  v8 = *a3; /*0x565684*/
  if ( (v3 & 1) != 0 ) /*0x56568d*/
    v9 = v8 - v5 + 1; /*0x565691*/
  else
    v9 = v8 - v5; /*0x565694*/
  IDA_LOWORD(v11) = v3 / 2 + (v9 >> 1) - v4; /*0x5656b1*/
  IDA_HIWORD(v11) = v6 + v5 - v3 - v7; /*0x5656b6*/
  *v11 = v11; /*0x5656c2*/
}
} // namespace gamemd