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
  bool v48; //... [31505 chars total]
}
} // namespace gamemd

// 0x4D0180
namespace gamemd {
int DamageArea::CheckOccupancyEligibility()
{

  unsigned int *v2; // esi
  int (***v3)(unsigned int, void *, int *); // ecx
  int v4; // eax
  int v5; // esi
  int v8; // [esp+18h] [ebp-8h] BYREF
  int v9; // [esp+1Ch] [ebp-4h] BYREF

  v2 = (unsigned int *)this->u32_C; /*0x4d0187*/
  if ( v2 ) /*0x4d018c*/
  {
    if ( (*(int (**)(unsigned int))(*v2 + 44))(this->u32_C) == 2 ) /*0x4d0198*/
    {
      if ( (*(int (**)(unsigned int *))(v2[432] + 32))(v2 + 432) ) /*0x4d01ab*/
        return 0; /*0x4d01b0*/
    }
    else
    {
      v2 = 0; /*0x4d019a*/
    }
  }
  if ( this->u32_51 || !this->u32_5C ) /*0x4d01c1*/
    return 1; /*0x4d01c6*/
  if ( !v2 || !*(unsigned char *)(v2[433] + 3595) ) /*0x4d01d6*/
  {
    v3 = (int (***)(unsigned int, void *, int *))this->u32_C; /*0x4d01e4*/
    v4 = 0; /*0x4d01e7*/
    v8 = 0; /*0x4d01eb*/
    if ( v3 ) /*0x4d01ef*/
    {
      v5 = (**v3)((unsigned int)v3, &unk_822410, &v9); /*0x4d0204*/
      if ( v5 >= 0 ) /*0x4d0208*/
      {
        v9 = v9; /*0x4d021c*/
        Release3COM((gamemd::IUnknown **)((ObjectClass *)&v8)); /*0x4d0224*/
        v4 = v9; /*0x4d0229*/
        v8 = v9; /*0x4d022c*/
      }
      else
      {
        Release3COM((gamemd::IUnknown **)((ObjectClass *)&v8)); /*0x4d020e*/
        v4 = 0; /*0x4d0213*/
        v8 = 0; /*0x4d0215*/
      }
      if ( v5 < 0 && v5 != -2147467262 ) /*0x4d023a*/
        WinAPI::Wrapper(v5); /*0x4d023d*/
      if ( v4 ) /*0x4d0248*/
      {
        if ( !(*(int (**)(int))(*(unsigned int *)v4 + 24))(v4) ) /*0x4d024d*/
        {
          if ( !v8 ) /*0x4d025a*/
            WinAPI::Wrapper(-2147467261); /*0x4d0261*/
          if ( !(*(int (**)(int))(*(unsigned int *)v8 + 28))(v8) ) /*0x4d026d*/
          {
            v4 = v8; /*0x4d0274*/
            goto LABEL_24; /*0x4d0278*/
          }
        }
        v4 = v8; /*0x4d027a*/
      }
    }
    if ( !*(unsigned int *)(this->u32_C + 764) ) /*0x4d0281*/
    {
LABEL_24:
      if ( v4 ) /*0x4d028d*/
        (*(void (**)(int))(*(unsigned int *)v4 + 8))(v4); /*0x4d0292*/
      return 1; /*0x4d029c*/
    }
    if ( v4 ) /*0x4d029f*/
      (*(void (**)(int))(*(unsigned int *)v4 + 8))(v4); /*0x4d02a4*/
  }
  return 0; /*0x4d0295*/

}
} // namespace gamemd
// 0x565660
namespace gamemd {
unsigned int * DamageArea::CalcScatterOffset(unsigned int * a2, int16_t * a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x565660)
}
} // namespace gamemd