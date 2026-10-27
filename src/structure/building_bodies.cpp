// G42.32 P: tree-universe marker -- e4 tree-owned decls suppressed
#define GAMEMD_TREE_UNIVERSE 1
// G42.32 S: guard-order tree-bridge -- ra2::game full defs precede e4 leaf headers
#include "object/abstract.hpp"
#ifdef GAMEMD_TREE_UNIVERSE
namespace gamemd {
using ra2::game::AbstractClass;
}
#endif
// 自动生成 by tools/move_hpp_bodies.py — 函数体自 src/structure/building.hpp 迁出
// hpp-impl 门控: 头文件只允许声明（= default 析构亦移出）
#include "building.hpp"
#include "e4/classes/SuperClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "core/globals_core.hpp"
#include "e4/e4_globals_decls.hpp"
#include "structure/globals_structure.hpp"
#include "e4/classes/Sidebar_e4.hpp"
#include "structure/minimal_carriers.hpp"  // G42.42q minimal carriers
#include "e4/classes/Math_e4.hpp"  // g57c5 W5e Math single-source (minimal twin removed)
#include "e4/classes/ScenarioClass_e4.hpp"
namespace gamemd {
}

namespace gamemd {
// 0x50af10
int SuperWeapon::UpdateSuperWeaponsOwnedHouseClass(HouseClass* ownerHouse)
{

  int result; // eax
  unsigned char *v3; // eax
  char v4; // bl
  int v5; // eax
  BuildingClass *v6; // edi
  unsigned int **Upgrades; // ecx
  int v8; // edx
  unsigned int *v9; // eax
  unsigned char *v10; // ecx
  int v11; // edx
  int v12; // eax
  int Status; // esi
  int v14; // edi
  char v15; // [esp+8h] [ebp-Eh]
  bool v16; // [esp+9h] [ebp-Dh]
  int i; // [esp+Ah] [ebp-Ch]
  int j; // [esp+Eh] [ebp-8h]
  int v19; // [esp+12h] [ebp-4h]

  LOBYTE(result) = stru_A8E960.nextScenario[64]; /*0x50af10*/
  if ( stru_A8E960.nextScenario[64] ) /*0x50af1d*/
  {
    v16 = *(int *)((char *)&stru_A83CD9.estimatedHealth + 3) == (unsigned int)this; /*0x50af31*/
    result = 0; /*0x50af36*/
    for ( i = 0; i < this->q264; ++i ) /*0x50af3a*/
    {
      v3 = *(unsigned char **)(this->q258 + 4 * result); /*0x50af4d*/
      if ( !v3[109] || (!v3[96] || v3[110] && v3[109]) && !this->u8_1F5 ) /*0x50af70*/
        goto LABEL_55; /*0x50af78*/
      v4 = 0; /*0x50af84*/
      v15 = 0; /*0x50af88*/
      if ( !this->u8_1F5 ) /*0x50af7e*/
      {
        v5 = 0; /*0x50af99*/
        for ( j = 0; v5 < *(int *)&stru_A8E960.altNextScenario[236]; j = ++v5 ) /*0x50afa1*/
        {
          v6 = *(BuildingClass **)(*(unsigned int *)&stru_A8E960.altNextScenario[224] + 4 * v5); /*0x50afad*/
          if ( !*(bool *)&v6->inLimbo && *(bool *)&v6->isAliveFlag ) /*0x50afbe*/
          {
            v19 = (*(int (**)(void *))(*(unsigned int *)((char *)v6->owner + 4) + 16))((char *)v6->owner + 4); /*0x50afe3*/
            if ( v19 == (*(int (**)(void *))(this->q004 + 16))((void *)&this->q21C) ) /*0x50aff0*/
            {
              Upgrades = (unsigned int **)v6->Upgrades; /*0x50aff2*/
              v8 = 3; /*0x50aff8*/
              do /*0x50b02a*/
              {
                v9 = *Upgrades; /*0x50affd*/
                if ( *Upgrades && (v9[1468] == i || v9[1469] == i) ) /*0x50b015*/
                {
                  v15 = 1; /*0x50b019*/
                  if ( !v4 ) /*0x50b01e*/
                    v4 = v6->HasPower; /*0x50b020*/
                }
                ++Upgrades; /*0x50b026*/
                --v8; /*0x50b029*/
              }
              while ( v8 ); /*0x50b02a*/
              if ( v6->SWAvailable() == i || v6->SW2Available() == i ) /*0x50b044*/
              {
                v15 = 1; /*0x50b048*/
                if ( v4 ) /*0x50b04d*/
                  break; /*0x50b04d*/
                v4 = v6->HasPower; /*0x50b04f*/
              }
              if ( v4 && v15 ) /*0x50b05f*/
                break; /*0x50b05f*/
            }
            v5 = j; /*0x50b061*/
          }
        }
      }
      v10 = *(unsigned char **)(*(unsigned int *)(this->q258 + 4 * i) + 40); /*0x50b078*/
      if ( v10[231] && !stru_A8B250.__pad_0[19] ) /*0x50b099*/
        v15 = 0; /*0x50b09b*/
      v11 = this->u32_53A4; /*0x50b0a0*/
      v12 = this->u32_53A8; /*0x50b0a6*/
      if ( v11 < v12 && v12 && (!v11 || (double)this->u32_53A4 / (double)this->u32_53A8 < 1.0) ) /*0x50b0d3*/
        v4 = 0; /*0x50b0d5*/
      (*(void (**)(unsigned char *))(*(unsigned int *)v10 + 64))(v10); /*0x50b0d9*/
      Status = ((HouseClass *)0x39)->GetStatus(0); /*0x50b0ea*/
      if ( !v15 || this->u8_1F5 ) /*0x50b0f4*/
      {
        if ( !((SuperClass *)*(unsigned int *)(this->q258 + 4 * i))->Lose() /*0x50b179*/
          || !*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) )
        {
          goto LABEL_55; /*0x50b179*/
        }
        if ( !v16 ) /*0x50b181*/
          goto LABEL_54; /*0x50b181*/
        if ( dword_8809A0 == i ) /*0x50b18e*/
LABEL_52:
          dword_8809A0 = -1; /*0x50b190*/
LABEL_53:
        ((Sidebar *)&dword_87F7E8.field_0)->ActivateTab(Status); /*0x50b19a*/
        goto LABEL_54; /*0x50b1a0*/
      }
      if ( v4 ) /*0x50b100*/
      {
        v14 = i; /*0x50b12e*/
      }
      else
      {
        v14 = i; /*0x50b108*/
        if ( (*(SuperWeapon **)(this->q258 + 4 * i))->GetField10() /*0x50b123*/
          && (unsigned __int8)((SuperClass *)*(unsigned int *)(this->q258 + 4 * i))->SetOnHold(1) )
        {
          goto LABEL_45; /*0x50b12a*/
        }
      }
      if ( !v4 || !(unsigned __int8)((SuperClass *)*(unsigned int *)(this->q258 + 4 * v14))->SetOnHold(0) ) /*0x50b141*/
        goto LABEL_55; /*0x50b148*/
LABEL_45:
      if ( v16 ) /*0x50b150*/
      {
        if ( dword_8809A0 == v14 ) /*0x50b158*/
          goto LABEL_52; /*0x50b158*/
        goto LABEL_53; /*0x50b158*/
      }
LABEL_54:
      this->q1FC = 1; /*0x50b1a5*/
LABEL_55:
      result = i + 1; /*0x50b1ac*/
    }
  }
  return result; /*0x50b1c6*/

}
} // namespace gamemd