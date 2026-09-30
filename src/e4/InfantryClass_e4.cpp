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
  void (**vtable0)(FootClass *, void *, int); // edi
  int16_t *PlacementCellsAlt; // eax
  void *v4; // eax
  int (**v5)(FootClass *, int, int *, unsigned int); // edx
  int v6; // eax
  double v7; // st7
  int v8; // eax
  int v9; // ebp
  int *v10; // eax
  int v11; // edi
  int v12; // ebx
  int *v13; // eax
  int v14; // ecx
  int v15; // eax
  int result; // eax
  int v17; // [esp+48h] [ebp-24h] BYREF
  int v18; // [esp+4Ch] [ebp-20h]
  int v19; // [esp+50h] [ebp-1Ch]
  unsigned char v20[12]; // [esp+54h] [ebp-18h] BYREF
  unsigned char v21[12]; // [esp+60h] [ebp-Ch] BYREF

  if ( *(unsigned char *)((*((int (**)(FootClass *))a1->TechnoClass + 33))(a1) + 912) /*0x4d4dde*/
    && !(*((int (**)(FootClass *))a1->TechnoClass + 114))(a1) )
  {
    vtable0 = (void (**)(FootClass *, void *, int))a1->TechnoClass; /*0x4d4de8*/
    PlacementCellsAlt = (int16_t *)MapClass::FindPlacementCellsAlt((char *)a1, &v17, (int)a1); /*0x4d4df4*/
    v4 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], PlacementCellsAlt); /*0x4d4dff*/
    vtable0[288](a1, v4, 1); /*0x4d4e07*/
  }
  if ( a1->FootClass_field_bool_68E ) /*0x4d4e0d*/
  {
    v17 = *(unsigned int *)&a1->attachedTag; /*0x4d4e21*/
    v5 = (int (**)(FootClass *, int, int *, unsigned int))a1->TechnoClass; /*0x4d4e25*/
    v18 = *(unsigned int *)&a1->attachedTag; /*0x4d4e2a*/
    v19 = *(unsigned int *)&a1->attachedBomb; /*0x4d4e36*/
    v6 = v5[241](a1, 1, &v17, 0); /*0x4d4e3e*/
    if ( v6 ) /*0x4d4e46*/
    {
      (*((void (**)(FootClass *, int))a1->TechnoClass + 242))(a1, v6); /*0x4d4e4d*/
      a1->FootClass_field_bool_68E = 0; /*0x4d4e53*/
    }
  }
  if ( a1->target ) /*0x4d4e5a*/
    (*((void (**)(FootClass *, unsigned int))a1->TechnoClass + 335))(a1, 0); /*0x4d4e6a*/
  else
    (*((void (**)(FootClass *, unsigned int, int))a1->TechnoClass + 289))(a1, 0, 1); /*0x4d4e7a*/
  v7 = *((double *)MissionClass::GetMissionControl((MissionClass *)a1) + 2) * 900.0; /*0x4d4e8a*/
  IDA_LOWORD(v8) = Math::RoundToInt(v7); /*0x4d4e90*/
  v9 = v8 + Random::Range((Random *)&((unsigned int *)(dword_A8B230))[14].NeedsSaveOrLink, 0, 2); /*0x4d4eb3*/
  if ( !a1->?
    || (!a1
     || (*((int (**)(FootClass *))a1->TechnoClass + 11))(a1) != 15
     || !*((unsigned char *)((*((int (**)(FootClass *))a1->TechnoClass + 11))(a1) == 15
                   ? a1 + 1
                   : (FootClass *)1728)->TechnoClass
         + 1685))
    && (!*(unsigned int *)(*((int (**)(FootClass *, unsigned int))a1->TechnoClass + 254))(a1, 0)
     || *(int *)(*(unsigned int *)(*((int (**)(FootClass *, unsigned int))a1->TechnoClass + 254))(a1, 0) + 180) > 512) )
  {
    return v9; /*0x4d4f1c*/
  }
  v10 = (int *)(*((int (**)(AbstractClass *, unsigned char *))*(unsigned short *)&a1->q048->TechnoClass::vtable0 + 18))(*(unsigned short *)&a1->q048, v20); /*0x4d4f30*/
  v11 = *v10; /*0x4d4f33*/
  v12 = v10[1]; /*0x4d4f35*/
  v13 = (int *)(*((int (**)(FootClass *, unsigned char *))a1->TechnoClass + 18))(a1, v21); /*0x4d4f41*/
  v14 = *v13; /*0x4d4f44*/
  v18 = v13[1] - v12; /*0x4d4f4d*/
  v17 = v14 - v11; /*0x4d4f51*/
  Math::Sqrt((double)(v14 - v11) * (double)(v14 - v11) + (double)v18 * (double)v18); /*0x4d4f71*/
  IDA_LOWORD(v15) = Math::RoundToInt(v7); /*0x4d4f79*/
  v17 = v15; /*0x4d4f83*/
  if ( v15 > 768 ) /*0x4d4f88*/
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
  void *v2; // edx
  int v3; // eax
  int *v4; // edi
  unsigned char *v5; // eax
  AbstractClass *target; // ecx
  FactoryClass *slaveManager; // ecx
  void (**vtable0)(FootClass *, void *, int); // edi
  void *v9; // eax
  char *MissionControl; // eax
  int v11; // eax
  int16_t v13[2]; // [esp+8h] [ebp-14h] BYREF
  int v14; // [esp+Ch] [ebp-10h] BYREF
  unsigned int v15[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( *(unsigned char *)((*((int (**)(FootClass *))a1->TechnoClass + 33))(a1) + 1748) /*0x4d5392*/
    || (v15[0] = a1->?[0],
        v2 = a1->TechnoClass,
        v15[1] = a1->?[1],
        v15[2] = a1->?[2],
        !(*((uint8_t (**)(FootClass *, unsigned int *, unsigned int))v2 + 231))(a1, v15, 0)) )
  {
    if ( (uint8_t)House::IsCurrentPlayer((House *)a1->?) || *(unsigned int *)&dword_A8B238 ) /*0x4d5504*/
    {
      (*((void (**)(FootClass *))a1->TechnoClass + 286))(a1); /*0x4d557c*/
    }
    else
    {
      *(unsigned int *)v13 = g_FootClass_Pool; /*0x4d5510*/
      *(unsigned int *)v13 = *HouseClass::GetCurrentOption((HouseClass *)dword_A83D4C, &v14); /*0x4d5529*/
      if ( *(unsigned int *)v13 != g_FootClass_Pool ) /*0x4d552d*/
      {
        slaveManager = (FactoryClass *)a1->?; /*0x4d553d*/
        if ( slaveManager ) /*0x4d5545*/
          FactoryClass::ResetProductionTimers(slaveManager); /*0x4d5547*/
        vtable0 = (void (**)(FootClass *, void *, int))a1->TechnoClass; /*0x4d554c*/
        v9 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v13); /*0x4d555a*/
        vtable0[288](a1, v9, 1); /*0x4d5562*/
        (*((void (**)(FootClass *, int, int))a1->TechnoClass + 122))(a1, 2, 1); /*0x4d5570*/
      }
    }
    goto LABEL_25; /*0x4d5576*/
  }
  v3 = (*((int (**)(FootClass *))a1->TechnoClass + 11))(a1); /*0x4d53a4*/
  v4 = v3 == 15 ? (int *)a1 : 0;
  if ( !v4 ) /*0x4d53b4*/
  {
    (*((void (**)(FootClass *, unsigned int))a1->TechnoClass + 335))(a1, 0); /*0x4d54e3*/
    goto LABEL_25; /*0x4d54e9*/
  }
  v5 = (v3 == 15 ? a1 + 1 : (FootClass *)1728)->TechnoClass;
  if ( v5[3779] && !v5[3778] && !(uint8_t)TechnoTypeClass::HasVoiceResponse(v4, 14) ) /*0x4d53df*/
  {
  LABEL_14:
    (*((void (**)(FootClass *, AbstractClass *, int))a1->TechnoClass + 288))(a1, a1->?, 1); /*0x4d547c*/
    (*((void (**)(FootClass *, int, unsigned int))a1->TechnoClass + 122))(a1, 8, 0); /*0x4d5497*/
    if ( !(*((uint8_t (**)(FootClass *))a1->TechnoClass + 128))(a1) ) /*0x4d54a9*/
      goto LABEL_25; /*0x4d54a9*/
    goto LABEL_12; /*0x4d54a9*/
  }
  if ( !*(unsigned char *)(v4[432] + 3778) && !(uint8_t)TechnoTypeClass::HasVoiceResponse(v4, 14) /*0x4d5428*/
    || (target = a1->?) == 0
    || (*((int (**)(AbstractClass *))target->vtable0 + 11))(target) != 6 )
  {
    if ( !*(unsigned char *)(v4[432] + 3782) ) /*0x4d547a*/
    {
      (*((void (**)(FootClass *, unsigned int, int))a1->TechnoClass + 288))(a1, 0, 1); /*0x4d54c6*/
      (*((void (**)(FootClass *, unsigned int))a1->TechnoClass + 335))(a1, 0); /*0x4d54d2*/
      goto LABEL_25; /*0x4d54d8*/
    }
    goto LABEL_14; /*0x4d547a*/
  }
  (*((void (**)(FootClass *, AbstractClass *, int))a1->TechnoClass + 288))(a1, a1->?, 1); /*0x4d5437*/
  (*((void (**)(FootClass *, int, unsigned int))a1->TechnoClass + 122))(a1, 17, 0); /*0x4d5445*/
  if ( (*((uint8_t (**)(FootClass *))a1->TechnoClass + 128))(a1) ) /*0x4d544f*/
  LABEL_12:
    (*((void (**)(FootClass *))a1->TechnoClass + 123))(a1); /*0x4d545d*/
  LABEL_25:
  MissionControl = MissionClass::GetMissionControl((MissionClass *)a1); /*0x4d5582*/
  IDA_LOWORD(v11) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4d5592*/
  return v11 + Random::Range((Random *)&((unsigned int *)(dword_A8B230))[14].NeedsSaveOrLink, 0, 2); /*0x4d55b0*/
}
}
// 0x517D90
namespace gamemd {
void* InfantryClass::Destruct(IUnknown * a1, AbstractClass * edx0)
{
  AbstractClass *p_vtable1; // edi
  InfantryTypeClass *Type; // eax
  int *team; // ecx
  TechnoClass *slaveOwner; // eax
  SlaveManagerClass *slaveManager; // eax
  int v7; // eax
  int Vtable3; // eax
  void *vtable1; // edx
  int v10; // edi
  int v11; // eax
  signed int v12; // eax
  int v13; // ecx
  char *i; // eax
  unsigned int *v15; // eax
  int v17[2]; // [esp+Ch] [ebp-8h] BYREF

  p_vtable1 = (AbstractClass *)&this->vtable1; /*0x517d9a*/
  this->vtable0 = (void*)&InfantryClass_vftable; /*0x517d9d*/
  this->vtable2 = (void*)&InfantryClass_vftable; /*0x517da3*/
  *(void **)&this->vtable3 = &off_7EB02C; /*0x517daa*/
  this->vtable1 = (void*)&InfantryClass_vftable; /*0x517db1*/
  if ( unk_A8E9A0 ) /*0x517dbe*/
  {
    Type = *(unsigned int *)&this->Type; /*0x517dc4*/
    if ( Type ) /*0x517dcc*/
    {
      if ( HouseClass::CanBuild(this->owner, (int)Type, 0, 0) == -1 ) /*0x517de3*/
        this->owner->recheckTechTree = 1; /*0x517deb*/
      team = (int *)this->team; /*0x517df2*/
      if ( team ) /*0x517dfa*/
      {
        TeamClass::LiberateMember_Start(team, (int)this, 0xFFFFFFFF, 0); /*0x517e00*/
        this->team = 0; /*0x517e05*/
      }
      slaveOwner = this->slaveOwner; /*0x517e0b*/
      if ( slaveOwner ) /*0x517e13*/
      {
        slaveManager = slaveOwner->slaveManager; /*0x517e15*/
        if ( slaveManager ) /*0x517e1d*/
          SlaveManagerClass::LostSlave(slaveManager, (int)this); /*0x517e22*/
      }
      HouseClass::DecrementUnitCount(this->owner, this); /*0x517e2e*/
      if ( !this->locomotor[0] ) /*0x517e33*/
        WinAPI::Wrapper(-2147467261); /*0x517e40*/
      (*(void (__stdcall **)(int))(*(unsigned int *)this->locomotor[0] + 172))(this->locomotor[0]); /*0x517e4e*/
      this->unknown_int_6E8 = 2; /*0x517e56*/
      this->Crawling = 0; /*0x517e60*/
      this->SequenceAnim[0] = 0; /*0x517e66*/
      TechnoClass::CleanupDirection((FootClass *)this); /*0x517e6c*/
    }
  }
  AbstractClass::AnnounceExpiredPointer(&this->vtable0, 1); /*0x517e75*/
  v17[0] = (int)this; /*0x517e89*/
  v7 = (*(int (**)(char *, int *))(*(unsigned int *)&stru_A83D50.__pad_80[24] + 16))( /*0x517e8d*/
         &stru_A83D50.__pad_80[24],
         v17);
  if ( v7 != -1 && v7 < *(int *)&stru_A83D50.__pad_80[40] ) /*0x517e9d*/
  {
    --*(unsigned int *)&stru_A83D50.__pad_80[40]; /*0x517ea2*/
    for ( ; /*0x517ea8*/
          v7 < *(int *)&stru_A83D50.__pad_80[40];
          *(unsigned int *)(*(unsigned int *)&stru_A83D50.__pad_80[28] + 4 * v7 - 4) = *(unsigned int *)(*(unsigned int *)&stru_A83D50.__pad_80[28]
                                                                                     + 4 * v7) )
    {
      ++v7; /*0x517eb0*/
    }
  }
  Vtable3 = ((AbstractClass *)(p_vtable1))->GetVtable3(); /*0x517ec3*/
  vtable1 = *(unsigned int *)&g_BuildingLoadQueue_Array.vtable1; /*0x517ec8*/
  v10 = Vtable3; /*0x517ece*/
  if ( g_BuildingLoadQueue_Array.vtable1 ) /*0x517ed2*/
  {
    if ( !IDA_LOBYTE(g_BuildingLoadQueue_Array.vtable3) ) /*0x517ede*/
    {
      qsort( /*0x517eee*/
        g_BuildingLoadQueue_Array.vtable0,
        (size_t)g_BuildingLoadQueue_Array.vtable1,
        8u,
        (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
      vtable1 = *(unsigned int *)&g_BuildingLoadQueue_Array.vtable1; /*0x517ef3*/
      g_BuildingLoadQueue_Array.uniqueId = 0; /*0x517efc*/
      IDA_LOBYTE(g_BuildingLoadQueue_Array.vtable3) = 1; /*0x517f02*/
    }
    v17[0] = v10; /*0x517f0d*/
    v11 = BinaryArraySearch((int)g_BuildingLoadQueue_Array.vtable0, (int)vtable1, v17); /*0x517f18*/
    if ( v11 ) /*0x517f1f*/
    {
      v12 = (signed int)(v11 - (unsigned int)g_BuildingLoadQueue_Array.vtable0) >> 3; /*0x517f27*/
      if ( v12 != -1 ) /*0x517f2d*/
      {
        v13 = v12 + 1; /*0x517f2f*/
        for ( i = (char *)g_BuildingLoadQueue_Array.vtable1; /*0x517f39*/
              v13 < (int)g_BuildingLoadQueue_Array.vtable1;
              i = (char *)g_BuildingLoadQueue_Array.vtable1 )
        {
          v15 = (char *)g_BuildingLoadQueue_Array.vtable0 + 8 * v13++; /*0x517f41*/
          *(v15 - 2) = *v15; /*0x517f47*/
          *(v15 - 1) = v15[1]; /*0x517f4d*/
        }
        g_BuildingLoadQueue_Array.vtable1 = i - 1; /*0x517f62*/
        *((unsigned int *)g_BuildingLoadQueue_Array.vtable0 + 2 * (int)g_BuildingLoadQueue_Array.vtable1) = 0; /*0x517f67*/
        *((unsigned int *)g_BuildingLoadQueue_Array.vtable0 + 2 * (int)g_BuildingLoadQueue_Array.vtable1 + 1) = 0; /*0x517f77*/
        g_BuildingLoadQueue_Array.uniqueId = 0; /*0x517f7b*/
      }
    }
  }
  *(unsigned int *)&this->isAliveFlag = 0; /*0x517f83*/
// 0x4d3590
  return FootClass::Destruct((FootClass *)this); /*0x517f8e*/
}
// 0x7447A0
namespace gamemd {
int InfantryClass_ScanTarget_0(void * a1)
{
  return InfantryClass::ScanTarget(a1);
}
} // namespace gamemd
