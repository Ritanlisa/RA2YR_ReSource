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
namespace gamemd {
}

namespace gamemd {
// 0x50af10
int SuperWeapon::UpdateSuperWeaponsOwnedHouseClass(HouseClass* ownerHouse)
{
  int result; // eax
  unsigned char *v3; // eax
  char HasPower; // bl
  int v5; // eax
  BuildingClass *v6; // edi
  int *Upgrades; // ecx
  int v8; // edx
  int v9; // eax
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

  (*((unsigned char *)&(result))) = byte_A8E9A0; /*0x50af10*/
  if ( byte_A8E9A0 ) /*0x50af1d*/
  {
    v16 = dword_A83D4C == (Object *)ownerHouse; /*0x50af31*/
    result = 0; /*0x50af36*/
    for ( i = 0; i < ownerHouse->lastBuiltInfantryType; ++i ) /*0x50af3a*/
    {
      v3 = *(unsigned char **)(ownerHouse->supersCount + 4 * result); /*0x50af4d*/
      if ( !v3[109] || (!v3[96] || v3[110] && v3[109]) && !ownerHouse->defeated ) /*0x50af70*/
        goto LABEL_55; /*0x50af78*/
      HasPower = 0; /*0x50af84*/
      v15 = 0; /*0x50af88*/
      if ( !ownerHouse->defeated ) /*0x50af7e*/
      {
        v5 = 0; /*0x50af99*/
        for ( j = 0; v5 < stru_A8EB00.vfptr[20]; j = ++v5 ) /*0x50afa1*/
        {
          v6 = *(BuildingClass **)(stru_A8EB00.vfptr[17] + 4 * v5); /*0x50afad*/
          if ( !v6->inLimbo && v6->isAliveFlag ) /*0x50afbe*/
          {
            v19 = (*((int (__stdcall **)(void **))v6->owner->vfptr1 + 4))(&v6->owner->vfptr1); /*0x50afe3*/
            if ( v19 == (*(int (__stdcall **)(SuperWeapon *))(*((unsigned int *)ownerHouse + 1) + 16))(ownerHouse + 4) ) /*0x50aff0*/
            {
              Upgrades = (int *)(v6->Upgrades); /*0x50aff2*/
              v8 = 3; /*0x50aff8*/
              do /*0x50b02a*/
              {
                v9 = *Upgrades; /*0x50affd*/
                if ( *Upgrades && (*(unsigned int *)(v9 + 5872) == i || *(unsigned int *)(v9 + 5876) == i) ) /*0x50b015*/
                {
                  v15 = 1; /*0x50b019*/
                  if ( !HasPower ) /*0x50b01e*/
                    HasPower = v6->HasPower; /*0x50b020*/
                }
                ++Upgrades; /*0x50b026*/
                --v8; /*0x50b029*/
              }
              while ( v8 ); /*0x50b02a*/
              if ( (v6)->SWAvailable() == i || (v6)->SW2Available() == i ) /*0x50b044*/
              {
                v15 = 1; /*0x50b048*/
                if ( HasPower ) /*0x50b04d*/
                  break; /*0x50b04d*/
                HasPower = v6->HasPower; /*0x50b04f*/
              }
              if ( HasPower && v15 ) /*0x50b05f*/
                break; /*0x50b05f*/
            }
            v5 = j; /*0x50b061*/
          }
        }
      }
      v10 = *(unsigned char **)(*(unsigned int *)(ownerHouse->supersCount + 4 * i) + 40); /*0x50b078*/
      if ( v10[231] && !SWAllowed ) /*0x50b099*/
        v15 = 0; /*0x50b09b*/
      v11 = (int)(ownerHouse->powerOutput); /*0x50b0a0*/
      v12 = (int)(ownerHouse->powerDrain); /*0x50b0a6*/
      if ( v11 < v12 && v12 && (!v11 || (double)*((int *)ownerHouse + 5353) / (double)*((int *)ownerHouse + 5354) < 1.0) ) /*0x50b0d3*/
        HasPower = 0; /*0x50b0d5*/
      (*(void (__thiscall **)(unsigned char *))(*(unsigned int *)v10 + 64))(v10); /*0x50b0d9*/
      Status = HouseClass::GetStatus((HouseClass *)0x39, 0); /*0x50b0ea*/
      if ( !v15 || ownerHouse->defeated ) /*0x50b0f4*/
      {
        if ( !(*(SuperClass **)(ownerHouse->supersCount + 4 * i))->Lose() || !dword_A83D4C ) /*0x50b179*/
          goto LABEL_55; /*0x50b179*/
        if ( !v16 ) /*0x50b181*/
          goto LABEL_54; /*0x50b181*/
        if ( *(unsigned int *)&g_BuildingPlacementState == i ) /*0x50b18e*/
  LABEL_52:
          *(unsigned int *)&g_BuildingPlacementState = -1; /*0x50b190*/
  LABEL_53:
        ((int *)&DataGlobal_87F7E8)->ActivateTab(Status); /*0x50b19a*/
        goto LABEL_54; /*0x50b1a0*/
      }
      if ( HasPower ) /*0x50b100*/
      {
        v14 = i; /*0x50b12e*/
      }
      else
      {
        v14 = i; /*0x50b108*/
        if ( SuperWeapon::GetField10(*(SuperWeapon **)(ownerHouse->supersCount + 4 * i)) /*0x50b123*/
          && (uint8_t)(*(unsigned int *)(ownerHouse->supersCount + 4 * i))->SetOnHold(1) )
        {
          goto LABEL_45; /*0x50b12a*/
        }
      }
      if ( !HasPower || !(uint8_t)(*(unsigned int *)(ownerHouse->supersCount + 4 * v14))->SetOnHold(0) ) /*0x50b141*/
        goto LABEL_55; /*0x50b148*/
  LABEL_45:
      if ( v16 ) /*0x50b150*/
      {
        if ( *(unsigned int *)&g_BuildingPlacementState == v14 ) /*0x50b158*/
          goto LABEL_52; /*0x50b158*/
        goto LABEL_53; /*0x50b158*/
      }
  LABEL_54:
      ownerHouse->recheckTechTree = 1; /*0x50b1a5*/
  LABEL_55:
      result = i + 1; /*0x50b1ac*/
    }
  }
  return result; /*0x50b1c6*/
}