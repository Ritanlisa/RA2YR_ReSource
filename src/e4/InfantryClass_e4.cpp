// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/InfantryClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/MissionClass_e4.hpp"
#include "e4/classes/InfantryTypeVector_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/InfantryTypeClass_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/Map_e4.hpp"

// 0x4D4DC0
namespace gamemd {
int InfantryClass::ScanTarget(int * a1)
{

  int v2; // edi
  int16_t *PlacementCellsAlt; // eax
  void *v4; // eax
  int v5; // edx
  int v6; // eax
  char *MissionControl; // eax
  int v8; // edi
  int v9; // ebp
  int *v10; // eax
  int v11; // edi
  int v12; // ebx
  int *v13; // eax
  int v14; // ecx
  double v15; // st7
  int result; // eax
  int v17; // [esp+48h] [ebp-24h] BYREF
  int v18; // [esp+4Ch] [ebp-20h]
  int v19; // [esp+50h] [ebp-1Ch]
  unsigned char v20[12]; // [esp+54h] [ebp-18h] BYREF
  unsigned char v21[12]; // [esp+60h] [ebp-Ch] BYREF

  if ( *(unsigned char *)((*(int (**)(int *))(*a1 + 132))(a1) + 912) /*0x4d4dde*/
    && !(*(int (**)(int *))(*a1 + 456))(a1) )
  {
    v2 = *a1; /*0x4d4de8*/
    PlacementCellsAlt = (int16_t *)MapClass::FindPlacementCellsAlt((char *)a1, (IUnknown *)&v17, (IUnknown *)a1); /*0x4d4df4*/
    v4 = CellCoord::To_CellObj(&g_abs_87F7E8, PlacementCellsAlt); /*0x4d4dff*/
    (*(void (**)(int *, void *, int))(v2 + 1152))(a1, v4, 1); /*0x4d4e07*/
  }
  if ( *((unsigned char *)a1 + 1678) ) /*0x4d4e0d*/
  {
    v17 = a1[39]; /*0x4d4e21*/
    v5 = *a1; /*0x4d4e25*/
    v18 = a1[40]; /*0x4d4e2a*/
    v19 = a1[41]; /*0x4d4e36*/
    v6 = (*(int (**)(int *, int, int *, unsigned int))(v5 + 964))(a1, 1, &v17, 0); /*0x4d4e3e*/
    if ( v6 ) /*0x4d4e46*/
    {
      (*(void (**)(int *, int))(*a1 + 968))(a1, v6); /*0x4d4e4d*/
      *((unsigned char *)a1 + 1678) = 0; /*0x4d4e53*/
    }
  }
  if ( a1[173] ) /*0x4d4e5a*/
    (*(void (**)(int *, unsigned int))(*a1 + 1340))(a1, 0); /*0x4d4e6a*/
  else
    (*(void (**)(int *, unsigned int, int))(*a1 + 1156))(a1, 0, 1); /*0x4d4e7a*/
  MissionControl = MissionClass::GetMissionControl(a1); /*0x4d4e82*/
  v8 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4d4e95*/
  v9 = v8 + Random::Range(&g_abs_A8B230->random[1], 0, (IUnknown *)2); /*0x4d4eb3*/
  if ( !a1[173]
    || (!a1
     || (*(int (**)(int *))(*a1 + 44))(a1) != 15
     || !*(unsigned char *)(*((*(int (**)(int *))(*a1 + 44))(a1) == 15 ? a1 + 432 : (int *)1728) + 1685))
    && (!*(unsigned int *)(*(int (**)(int *, unsigned int))(*a1 + 1016))(a1, 0)
     || *(int *)(*(unsigned int *)(*(int (**)(int *, unsigned int))(*a1 + 1016))(a1, 0) + 180) > 512) )
  {
    return v9; /*0x4d4f1c*/
  }
  v10 = (int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)a1[173] + 72))(a1[173], v20); /*0x4d4f30*/
  v11 = *v10; /*0x4d4f33*/
  v12 = v10[1]; /*0x4d4f35*/
  v13 = (int *)(*(int (**)(int *, unsigned char *))(*a1 + 72))(a1, v21); /*0x4d4f41*/
  v14 = *v13; /*0x4d4f44*/
  v18 = v13[1] - v12; /*0x4d4f4d*/
  v17 = v14 - v11; /*0x4d4f51*/
  v15 = Math::Sqrt((double)(v14 - v11) * (double)(v14 - v11) + (double)v18 * (double)v18); /*0x4d4f71*/
  v17 = Math::RoundToInt(v15); /*0x4d4f83*/
  if ( v17 > 768 ) /*0x4d4f88*/
    return v9; /*0x4d4fa9*/
  result = v9; /*0x4d4f99*/
  if ( (double)v17 >= 281.6 ) /*0x4d4f9b*/
    return v9 / 2; /*0x4d4fa3*/
  return result; /*0x4d4fa0*/

}
}
// 0x4D5350
namespace gamemd {
AbstractClass * * InfantryClass::ProcessDeploy(void ** a1)
{

  #375 *v2; // edx
  int v3; // eax
  #375 **v4; // edi
  int v5; // eax
  #375 *v6; // ecx
  #375 *v7; // edi
  void *v8; // eax
  char *MissionControl; // eax
  int v10; // esi
  int v12; // [esp+8h] [ebp-14h] BYREF
  int v13; // [esp+Ch] [ebp-10h] BYREF
  unsigned int v14[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( *(unsigned char *)((*((int (**)(#375 **))*a1 + 33))(a1) + 1748) /*0x4d5392*/
    || (v14[0] = a1[39],
        v2 = *a1,
        v14[1] = a1[40],
        v14[2] = a1[41],
        !(*((uint8_t (**)(#375 **, unsigned int *, unsigned int))v2 + 231))(a1, v14, 0)) )
  {
    if ( (uint8_t)House::IsCurrentPlayer(a1[135]) || g_abs_A8B238[0] ) /*0x4d5504*/
    {
      (*((void (**)(#375 **))*a1 + 286))(a1); /*0x4d557c*/
    }
    else
    {
      v12 = g_abs_8B3D88; /*0x4d5510*/
      v12 = *HouseClass::GetCurrentOption(HouseClass_Player, &v13); /*0x4d5529*/
      if ( v12 != g_abs_8B3D88 ) /*0x4d552d*/
      {
        if ( a1[182] ) /*0x4d553d*/
          ((void (*)(void))FactoryClass::ResetProductionTimers)(); /*0x4d5547*/
        v7 = *a1; /*0x4d554c*/
        v8 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v12); /*0x4d555a*/
        (*((void (**)(#375 **, void *, int))v7 + 288))(a1, v8, 1); /*0x4d5562*/
        (*((void (**)(#375 **, int, int))*a1 + 122))(a1, 2, 1); /*0x4d5570*/
      }
    }
    goto LABEL_25; /*0x4d5576*/
  }
  v3 = (*((int (**)(#375 **))*a1 + 11))(a1); /*0x4d53a4*/
  v4 = v3 == 15 ? a1 : 0;
  if ( !v4 ) /*0x4d53b4*/
  {
    (*((void (**)(#375 **, unsigned int))*a1 + 335))(a1, 0); /*0x4d54e3*/
    goto LABEL_25; /*0x4d54e9*/
  }
  v5 = (int)*(v3 == 15 ? a1 + 432 : (#375 **)1728);
  if ( *(unsigned char *)(v5 + 3779) && !*(unsigned char *)(v5 + 3778) && !TechnoClass::HasVoiceResponse((float *)v4, 14) ) /*0x4d53df*/
  {
LABEL_14:
    (*((void (**)(#375 **, #375 *, int))*a1 + 288))(a1, a1[173], 1); /*0x4d547c*/
    (*((void (**)(#375 **, int, unsigned int))*a1 + 122))(a1, 8, 0); /*0x4d5497*/
    if ( !(*((uint8_t (**)(#375 **))*a1 + 128))(a1) ) /*0x4d54a9*/
      goto LABEL_25; /*0x4d54a9*/
    goto LABEL_12; /*0x4d54a9*/
  }
  if ( !*((unsigned char *)v4[432] + 3778) && !TechnoClass::HasVoiceResponse((float *)v4, 14) /*0x4d5428*/
    || (v6 = a1[173]) == 0
    || (*(int (**)(#375 *))(*(unsigned int *)v6 + 44))(v6) != 6 )
  {
    if ( !*((unsigned char *)v4[432] + 3782) ) /*0x4d547a*/
    {
      (*((void (**)(#375 **, unsigned int, int))*a1 + 288))(a1, 0, 1); /*0x4d54c6*/
      (*((void (**)(#375 **, unsigned int))*a1 + 335))(a1, 0); /*0x4d54d2*/
      goto LABEL_25; /*0x4d54d8*/
    }
    goto LABEL_14; /*0x4d547a*/
  }
  (*((void (**)(#375 **, #375 *, int))*a1 + 288))(a1, a1[173], 1); /*0x4d5437*/
  (*((void (**)(#375 **, int, unsigned int))*a1 + 122))(a1, 17, 0); /*0x4d5445*/
  if ( (*((uint8_t (**)(#375 **))*a1 + 128))(a1) ) /*0x4d544f*/
LABEL_12:
    (*((void (**)(#375 **))*a1 + 123))(a1); /*0x4d545d*/
LABEL_25:
  MissionControl = MissionClass::GetMissionControl(a1); /*0x4d5582*/
  v10 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4d55a7*/
  return v10 + Random::Range((unsigned int *)g_abs_A8B230 + 134, 0, 2); /*0x4d55b0*/

}
}
// 0x517D90
namespace gamemd {
void* InfantryClass::Destruct(IUnknown * a1, AbstractClass * edx0)
{

  AbstractClass *edi1; // edi
  InfantryTypeClass *v3; // eax
  int v5; // ecx
  unsigned int *v6; // eax
  unsigned int *eax8; // eax
  int v8; // eax
  int Vtable3; // eax
  IUnknown *v7; // edx
  int v11; // edi
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  IUnknown *i; // eax
  unsigned int *v16; // eax
  int a2[2]; // [esp+Ch] [ebp-8h] BYREF

  edi1 = (AbstractClass *)&a1->field_4; /*0x517d9a*/
  a1->field_0 = (int)&InfantryClass::`vftable'; /*0x517d9d*/
  a1->field_8 = (int)&vt_InfantryClass; /*0x517da3*/
  a1->field_C = (int)&off_7EB02C; /*0x517daa*/
  a1->field_4 = (int)&InfantryClass::`vftable'; /*0x517db1*/
  if ( HouseClass_Player.__pad_5568[22252] ) /*0x517dbe*/
  {
    v3 = *(InfantryTypeClass **)&a1->__pad_690[48]; /*0x517dc4*/
    if ( v3 ) /*0x517dcc*/
    {
      if ( HouseClass::CanBuild((unsigned int *)a1->field_21C, (IUnknown *)v3, 0, 0) == -1 ) /*0x517de3*/
        *(unsigned char *)(a1->field_21C + 508) = 1; /*0x517deb*/
      v5 = *(unsigned int *)&a1->__pad_524[176]; /*0x517df2*/
      if ( v5 ) /*0x517dfa*/
      {
        TeamClass::LiberateMember_Start(v5, a1, 0xFFFFFFFF, 0); /*0x517e00*/
        *(unsigned int *)&a1->__pad_524[176] = 0; /*0x517e05*/
      }
      v6 = *(unsigned int **)&a1->__pad_2B8[36]; /*0x517e0b*/
      if ( v6 ) /*0x517e13*/
      {
        eax8 = (unsigned int *)v6[182]; /*0x517e15*/
        if ( eax8 ) /*0x517e1d*/
          SlaveManagerClass::LostSlave(eax8, (ObjectClass *)a1); /*0x517e22*/
      }
      HouseClass::DecrementUnitCount((unsigned int *)a1->field_21C, (TechnoClass *)a1); /*0x517e2e*/
      if ( !*(unsigned int *)&a1->__pad_524[336] ) /*0x517e33*/
        WinAPI::Wrapper(-2147467261); /*0x517e40*/
      (*(void (**)(void *))(**(unsigned int **)&a1->__pad_524[336] + 172))(*(void **)&a1->__pad_524[336]); /*0x517e4e*/
      *(unsigned int *)&a1->__pad_690[88] = 2; /*0x517e56*/
      a1->__pad_690[75] = 0; /*0x517e60*/
      *(unsigned int *)&a1->__pad_690[52] = 0; /*0x517e66*/
      TechnoClass::CleanupDirection(a1); /*0x517e6c*/
    }
  }
  IDA_LOBYTE(edx0) = 1; /*0x517e71*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)a1, edx0); /*0x517e75*/
  a2[0] = (int)a1; /*0x517e89*/
  v8 = (*(int (**)(char *, int *))(*(unsigned int *)&HouseClass_Player.__pad_74[40] + 16))( /*0x517e8d*/
         &HouseClass_Player.__pad_74[40],
         a2);
  if ( v8 != -1 && v8 < *(int *)&HouseClass_Player.__pad_74[56] ) /*0x517e9d*/
  {
    --*(unsigned int *)&HouseClass_Player.__pad_74[56]; /*0x517ea2*/
    for ( ; /*0x517ea8*/
          v8 < *(int *)&HouseClass_Player.__pad_74[56];
          *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_74[44] + 4 * v8 - 4) = *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_74[44]
                                                                                           + 4 * v8) )
    {
      ++v8; /*0x517eb0*/
    }
  }
  Vtable3 = AbstractClass::GetVtable3(edi1); /*0x517ec3*/
  v7 = *(IUnknown **)&stru_B05488.__pad_579C[15392]; /*0x517ec8*/
  v11 = Vtable3; /*0x517ece*/
  if ( *(unsigned int *)&stru_B05488.__pad_579C[15392] ) /*0x517ed2*/
  {
    if ( !stru_B05488.__pad_579C[15400] ) /*0x517ede*/
    {
      qsort( /*0x517eee*/
        *(AbstractClass **)&stru_B05488.__pad_579C[15388],
        *(IUnknown **)&stru_B05488.__pad_579C[15392],
        8u,
        (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
      v7 = *(IUnknown **)&stru_B05488.__pad_579C[15392]; /*0x517ef3*/
      *(unsigned int *)&stru_B05488.__pad_579C[15404] = 0; /*0x517efc*/
      stru_B05488.__pad_579C[15400] = 1; /*0x517f02*/
    }
    a2[0] = v11; /*0x517f0d*/
    v12 = BinaryArraySearch(*(AbstractClass **)&stru_B05488.__pad_579C[15388], (int)v7, a2); /*0x517f18*/
    if ( v12 ) /*0x517f1f*/
    {
      v13 = (v12 - *(unsigned int *)&stru_B05488.__pad_579C[15388]) >> 3; /*0x517f27*/
      if ( v13 != -1 ) /*0x517f2d*/
      {
        v14 = v13 + 1; /*0x517f2f*/
        for ( i = *(IUnknown **)&stru_B05488.__pad_579C[15392]; /*0x517f39*/
              v14 < *(int *)&stru_B05488.__pad_579C[15392];
              i = *(IUnknown **)&stru_B05488.__pad_579C[15392] )
        {
          v16 = (unsigned int *)(*(unsigned int *)&stru_B05488.__pad_579C[15388] + 8 * v14++); /*0x517f41*/
          *(v16 - 2) = *v16; /*0x517f47*/
          *(v16 - 1) = v16[1]; /*0x517f4d*/
        }
        *(unsigned int *)&stru_B05488.__pad_579C[15392] = (char *)i - 1; /*0x517f62*/
        *(unsigned int *)(*(unsigned int *)&stru_B05488.__pad_579C[15388] + 8 * *(unsigned int *)&stru_B05488.__pad_579C[15392]) = 0; /*0x517f67*/
        *(unsigned int *)(*(unsigned int *)&stru_B05488.__pad_579C[15388] + 8 * *(unsigned int *)&stru_B05488.__pad_579C[15392] + 4) = 0; /*0x517f77*/
        *(unsigned int *)&stru_B05488.__pad_579C[15404] = 0; /*0x517f7b*/
      }
    }
  }
  a1->__pad_8C[4] = 0; /*0x517f83*/
  return FootClass::Destruct(a1); /*0x517f8e*/

}
// 0x7447A0
namespace gamemd {
int InfantryClass_ScanTarget_0(void * a1)
{
  return InfantryClass::ScanTarget(a1);
}
} // namespace gamemd
