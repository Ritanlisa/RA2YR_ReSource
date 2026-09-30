// 自动生成 by tools/move_hpp_bodies.py — 函数体自 src/structure/building.hpp 迁出
// hpp-impl 门控: 头文件只允许声明（= default 析构亦移出）
#include "building.hpp"
#include "core/globals_core.hpp"
#include "core/globals_core.hpp"
#include "core/globals_core.hpp"
#include "e4/e4_globals_decls.hpp"
#include "core/globals_core.hpp"
#include "structure/globals_structure.hpp"

namespace gamemd {
namespace Math {
int unknown::RoundToInt(double value) {
    return (int)(value >= 0.0 ? value + 0.5 : value - 0.5);
}
}
}

namespace gamemd {
// 0x50af10
void SuperWeapon::UpdateSuperWeaponsOwnedHouseClass(HouseClass* ownerHouse) {
  int v1; // eax
  unsigned char *v3; // eax
  char v4; // bl
  int v5; // eax
  int v6; // edi
  int *v7; // ecx
  int v8; // edx
  int v9; // eax
  unsigned char *v10; // ecx
  int v11; // edx
  int v12; // eax
  int Status; // esi
  int v14; // edi
  char v16; // [esp+8h] [ebp-Eh]
  bool v17; // [esp+9h] [ebp-Dh]
  int i; // [esp+Ah] [ebp-Ch]
  int j; // [esp+Eh] [ebp-8h]
  int v20; // [esp+12h] [ebp-4h]

  IDA_LOBYTE(v1) = g_WTFMode; /*0x50af10*/
  if ( g_WTFMode ) /*0x50af1d*/
  {
    v17 = HouseClass_Player == (void *)ownerHouse; /*0x50af31*/
    v1 = 0; /*0x50af36*/
    for ( i = 0; i < ownerHouse->lastBuiltInfantryType; ++i ) /*0x50af3a*/
    {
      v3 = *(unsigned char **)(ownerHouse->supersCount + 4 * v1); /*0x50af4d*/
      if ( !v3[109] || (!v3[96] || v3[110] && v3[109]) && !ownerHouse->defeated ) /*0x50af70*/
        goto LABEL_55; /*0x50af78*/
      v4 = 0; /*0x50af84*/
      v16 = 0; /*0x50af88*/
      if ( !ownerHouse->defeated ) /*0x50af7e*/
      {
        v5 = 0; /*0x50af99*/
        for ( j = 0; v5 < g_BuildingProductionState; j = ++v5 ) /*0x50afa1*/
        {
          v6 = *((unsigned int *)g_BuildingClass_InstanceCount + v5); /*0x50afad*/
          if ( !*(unsigned char *)(v6 + 129) && *(unsigned char *)(v6 + 144) ) /*0x50afbe*/
          {
            v20 = (*(int (__stdcall **)(int))(*(unsigned int *)(*(unsigned int *)(v6 + 540) + 4) + 16))(*(unsigned int *)(v6 + 540) + 4); /*0x50afe3*/
            if ( v20 == (*(int (__stdcall **)(int))(ownerHouse->vtable2 + 16))((unsigned int)(ownerHouse)+ 4) ) /*0x50aff0*/
            {
              v7 = (int *)(v6 + 1516); /*0x50aff2*/
              v8 = 3; /*0x50aff8*/
              do /*0x50b02a*/
              {
                v9 = *v7; /*0x50affd*/
                if ( *v7 && (*(unsigned int *)(v9 + 5872) == i || *(unsigned int *)(v9 + 5876) == i) ) /*0x50b015*/
                {
                  v16 = 1; /*0x50b019*/
                  if ( !v4 ) /*0x50b01e*/
                    v4 = *(unsigned char *)(v6 + 1632); /*0x50b020*/
                }
                ++v7; /*0x50b026*/
                --v8; /*0x50b029*/
              }
              while ( v8 ); /*0x50b02a*/
              if ( BuildingClass::SWAvailable(v6) == i || BuildingClass::SW2Available(v6) == i ) /*0x50b044*/
              {
                v16 = 1; /*0x50b048*/
                if ( v4 ) /*0x50b04d*/
                  break; /*0x50b04d*/
                v4 = *(unsigned char *)(v6 + 1632); /*0x50b04f*/
              }
              if ( v4 && v16 ) /*0x50b05f*/
                break; /*0x50b05f*/
            }
            v5 = j; /*0x50b061*/
          }
        }
      }
      v10 = *(unsigned char **)(*(unsigned int *)(ownerHouse->supersCount + 4 * i) + 40); /*0x50b078*/
      if ( v10[231] && !SWAllowed ) /*0x50b099*/
        v16 = 0; /*0x50b09b*/
      v11 = ownerHouse->powerOutput; /*0x50b0a0*/
      v12 = ownerHouse->powerDrain; /*0x50b0a6*/
      if ( v11 < v12 && v12 && (!v11 || (double)ownerHouse->powerOutput / (double)ownerHouse->powerDrain < 1.0) ) /*0x50b0d3*/
        v4 = 0; /*0x50b0d5*/
      (*(void (**)(unsigned char *))(*(unsigned int *)v10 + 64))(v10); /*0x50b0d9*/
      Status = HouseClass::GetStatus((void *)0x39, 0); /*0x50b0ea*/
      if ( !v16 || ownerHouse->defeated ) /*0x50b0f4*/
      {
        if ( !(uint8_t)SuperClass::Lose(*(unsigned int *)(ownerHouse->supersCount + 4 * i)) || !HouseClass_Player ) /*0x50b179*/
          goto LABEL_55; /*0x50b179*/
        if ( !v17 ) /*0x50b181*/
          goto LABEL_54; /*0x50b181*/
        if ( g_BuildingPlacementState == i ) /*0x50b18e*/
  LABEL_52:
          g_BuildingPlacementState = -1; /*0x50b190*/
  LABEL_53:
        Sidebar::ActivateTab((int)&MapClass_Instance, Status); /*0x50b19a*/
        goto LABEL_54; /*0x50b1a0*/
      }
      if ( v4 ) /*0x50b100*/
      {
        v14 = i; /*0x50b12e*/
      }
      else
      {
        v14 = i; /*0x50b108*/
        if ( (uint8_t)SuperWeapon::GetField10(*(unsigned int *)(ownerHouse->supersCount + 4 * i)) /*0x50b123*/
          && (uint8_t)SuperClass::SetOnHold(1) )
        {
          goto LABEL_45; /*0x50b12a*/
        }
      }
      if ( !v4 || !(uint8_t)SuperClass::SetOnHold(0) ) /*0x50b141*/
        goto LABEL_55; /*0x50b148*/
  LABEL_45:
      if ( v17 ) /*0x50b150*/
      {
        if ( g_BuildingPlacementState == v14 ) /*0x50b158*/
          goto LABEL_52; /*0x50b158*/
        goto LABEL_53; /*0x50b158*/
      }
  LABEL_54:
      ownerHouse->recheckTechTree = 1; /*0x50b1a5*/
  LABEL_55:
      v1 = i + 1; /*0x50b1ac*/
    }
  }
  return v1; /*0x50b1c6*/
}
}
