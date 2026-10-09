// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/SlaveManagerClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
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
#include "e4/classes/Type_e4.hpp"
#include "e4/classes/Random_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/FactoryClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"

// 0x4D4DC0
namespace gamemd {
int InfantryClass::ScanTarget(int * a1)
{
  void (__thiscall **vtable0)(FootClass *, void *, int); // edi
  __int16 *PlacementCellsAlt; // eax
  void *v4; // eax
  int (__thiscall **v5)(FootClass *, int, int *, _DWORD); // edx
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
  _BYTE v20[12]; // [esp+54h] [ebp-18h] BYREF
  _BYTE v21[12]; // [esp+60h] [ebp-Ch] BYREF

  if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))a1->vfptr + 33))(a1) + 912) /*0x4d4dde*/
    && !(*((int (__thiscall **)(FootClass *))a1->vfptr + 114))(a1) )
  {
    vtable0 = (void (__thiscall **)(FootClass *, void *, int))a1->vfptr; /*0x4d4de8*/
    PlacementCellsAlt = (__int16 *)MapClass::FindPlacementCellsAlt((char *)a1, &v17, (int)a1); /*0x4d4df4*/
    v4 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], PlacementCellsAlt); /*0x4d4dff*/
    vtable0[288](a1, v4, 1); /*0x4d4e07*/
  }
  if ( a1->FootClass_field_bool_68E ) /*0x4d4e0d*/
  {
    v17 = a1->location[0]; /*0x4d4e21*/
    v5 = (int (__thiscall **)(FootClass *, int, int *, _DWORD))a1->vfptr; /*0x4d4e25*/
    v18 = a1->location[1]; /*0x4d4e2a*/
    v19 = a1->location[2]; /*0x4d4e36*/
    v6 = v5[241](a1, 1, &v17, 0); /*0x4d4e3e*/
    if ( v6 ) /*0x4d4e46*/
    {
      (*((void (__thiscall **)(FootClass *, int))a1->vfptr + 242))(a1, v6); /*0x4d4e4d*/
      a1->FootClass_field_bool_68E = 0; /*0x4d4e53*/
    }
  }
  if ( a1->target ) /*0x4d4e5a*/
    (*((void (__thiscall **)(FootClass *, _DWORD))a1->vfptr + 335))(a1, 0); /*0x4d4e6a*/
  else
    (*((void (__thiscall **)(FootClass *, _DWORD, int))a1->vfptr + 289))(a1, 0, 1); /*0x4d4e7a*/
  v7 = *((double *)MissionClass::GetMissionControl((MissionClass *)a1) + 2) * 900.0; /*0x4d4e8a*/
  IDA_LOWORD(v8) = Math::RoundToInt(v7); /*0x4d4e90*/
  v9 = v8 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x4d4eb3*/
  if ( !a1->target
    || (!a1
     || (*((int (__thiscall **)(FootClass *))a1->vfptr + 11))(a1) != 15
     || !*((_BYTE *)((*((int (__thiscall **)(FootClass *))a1->vfptr + 11))(a1) == 15 ? a1 + 1 : (FootClass *)1728)->vfptr
         + 1685))
    && (!*(_DWORD *)(*((int (__thiscall **)(FootClass *, _DWORD))a1->vfptr + 254))(a1, 0)
     || *(int *)(*(_DWORD *)(*((int (__thiscall **)(FootClass *, _DWORD))a1->vfptr + 254))(a1, 0) + 180) > 512) )
  {
    return v9; /*0x4d4f1c*/
  }
  v10 = (int *)(*((int (__thiscall **)(AbstractClass *, _BYTE *))a1->target->vfptr + 18))(a1->target, v20); /*0x4d4f30*/
  v11 = *v10; /*0x4d4f33*/
  v12 = v10[1]; /*0x4d4f35*/
  v13 = (int *)(*((int (__thiscall **)(FootClass *, _BYTE *))a1->vfptr + 18))(a1, v21); /*0x4d4f41*/
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
  _BYTE *v5; // eax
  AbstractClass *target; // ecx
  FactoryClass *slaveManager; // ecx
  void (__thiscall **vtable0)(FootClass *, void *, int); // edi
  void *v9; // eax
  char *MissionControl; // eax
  int v11; // eax
  __int16 v13[2]; // [esp+8h] [ebp-14h] BYREF
  int v14; // [esp+Ch] [ebp-10h] BYREF
  _DWORD v15[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))a1->vfptr + 33))(a1) + 1748) /*0x4d5392*/
    || (v15[0] = a1->location[0],
        v2 = a1->vfptr,
        v15[1] = a1->location[1],
        v15[2] = a1->location[2],
        !(*((unsigned __int8 (__thiscall **)(FootClass *, _DWORD *, _DWORD))v2 + 231))(a1, v15, 0)) )
  {
    if ( (unsigned __int8)House::IsCurrentPlayer((House *)a1->owner) || *(_DWORD *)&dword_A8B238 ) /*0x4d5504*/
    {
      (*((void (__thiscall **)(FootClass *))a1->vfptr + 286))(a1); /*0x4d557c*/
    }
    else
    {
      *(_DWORD *)v13 = g_FootClass_Pool; /*0x4d5510*/
      *(_DWORD *)v13 = *HouseClass::GetCurrentOption((HouseClass *)dword_A83D4C, &v14); /*0x4d5529*/
      if ( *(_DWORD *)v13 != g_FootClass_Pool ) /*0x4d552d*/
      {
        slaveManager = (FactoryClass *)a1->slaveManager; /*0x4d553d*/
        if ( slaveManager ) /*0x4d5545*/
          FactoryClass::ResetProductionTimers(slaveManager); /*0x4d5547*/
        vtable0 = (void (__thiscall **)(FootClass *, void *, int))a1->vfptr; /*0x4d554c*/
        v9 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v13); /*0x4d555a*/
        vtable0[288](a1, v9, 1); /*0x4d5562*/
        (*((void (__thiscall **)(FootClass *, int, int))a1->vfptr + 122))(a1, 2, 1); /*0x4d5570*/
      }
    }
    goto LABEL_25; /*0x4d5576*/
  }
  v3 = (*((int (__thiscall **)(FootClass *))a1->vfptr + 11))(a1); /*0x4d53a4*/
  v4 = v3 == 15 ? (int *)a1 : 0;
  if ( !v4 ) /*0x4d53b4*/
  {
    (*((void (__thiscall **)(FootClass *, _DWORD))a1->vfptr + 335))(a1, 0); /*0x4d54e3*/
    goto LABEL_25; /*0x4d54e9*/
  }
  v5 = (v3 == 15 ? a1 + 1 : (FootClass *)1728)->vfptr;
  if ( v5[3779] && !v5[3778] && !(unsigned __int8)TechnoTypeClass::HasVoiceResponse(v4, 14) ) /*0x4d53df*/
  {
  LABEL_14:
    (*((void (__thiscall **)(FootClass *, AbstractClass *, int))a1->vfptr + 288))(a1, a1->target, 1); /*0x4d547c*/
    (*((void (__thiscall **)(FootClass *, int, _DWORD))a1->vfptr + 122))(a1, 8, 0); /*0x4d5497*/
    if ( !(*((unsigned __int8 (__thiscall **)(FootClass *))a1->vfptr + 128))(a1) ) /*0x4d54a9*/
      goto LABEL_25; /*0x4d54a9*/
    goto LABEL_12; /*0x4d54a9*/
  }
  if ( !*(_BYTE *)(v4[432] + 3778) && !(unsigned __int8)TechnoTypeClass::HasVoiceResponse(v4, 14) /*0x4d5428*/
    || (target = a1->target) == 0
    || (*((int (__thiscall **)(AbstractClass *))target->vfptr + 11))(target) != 6 )
  {
    if ( !*(_BYTE *)(v4[432] + 3782) ) /*0x4d547a*/
    {
      (*((void (__thiscall **)(FootClass *, _DWORD, int))a1->vfptr + 288))(a1, 0, 1); /*0x4d54c6*/
      (*((void (__thiscall **)(FootClass *, _DWORD))a1->vfptr + 335))(a1, 0); /*0x4d54d2*/
      goto LABEL_25; /*0x4d54d8*/
    }
    goto LABEL_14; /*0x4d547a*/
  }
  (*((void (__thiscall **)(FootClass *, AbstractClass *, int))a1->vfptr + 288))(a1, a1->target, 1); /*0x4d5437*/
  (*((void (__thiscall **)(FootClass *, int, _DWORD))a1->vfptr + 122))(a1, 17, 0); /*0x4d5445*/
  if ( (*((unsigned __int8 (__thiscall **)(FootClass *))a1->vfptr + 128))(a1) ) /*0x4d544f*/
  LABEL_12:
    (*((void (__thiscall **)(FootClass *))a1->vfptr + 123))(a1); /*0x4d545d*/
  LABEL_25:
  MissionControl = MissionClass::GetMissionControl((MissionClass *)a1); /*0x4d5582*/
  IDA_LOWORD(v11) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4d5592*/
  return v11 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x4d55b0*/
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
  _DWORD *v15; // eax
  int v17[2]; // [esp+Ch] [ebp-8h] BYREF

  p_vtable1 = (AbstractClass *)&this->vfptr1; /*0x517d9a*/
  this->vfptr = &(void*)(void*)&InfantryClass_vftable; /*0x517d9d*/
  this->vfptr2 = &(void*)(void*)&InfantryClass_vftable; /*0x517da3*/
  this->vfptr3 = &off_7EB02C; /*0x517daa*/
  this->vfptr1 = &(void*)(void*)&InfantryClass_vftable; /*0x517db1*/
  if ( byte_A8E9A0 ) /*0x517dbe*/
  {
    Type = this->Type; /*0x517dc4*/
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
      HouseClass::DecrementUnitCount(); /*0x517e2e*/
      if ( !this->locomotor[0] ) /*0x517e33*/
        sub_7DC720(-2147467261); /*0x517e40*/
      (*(void (__stdcall **)(int))(*(_DWORD *)this->locomotor[0] + 172))(this->locomotor[0]); /*0x517e4e*/
      this->unknown_int_6E8 = 2; /*0x517e56*/
      this->Crawling = 0; /*0x517e60*/
      this->SequenceAnim[0] = 0; /*0x517e66*/
      TechnoClass::CleanupDirection(); /*0x517e6c*/
    }
  }
  AbstractClass::AnnounceExpiredPointer(&this->vfptr, 1); /*0x517e75*/
  v17[0] = (int)this; /*0x517e89*/
  v7 = (*(int (__thiscall **)(char *, int *))(*(_DWORD *)&stru_A83D50.__pad_80[24] + 16))( /*0x517e8d*/
         &stru_A83D50.__pad_80[24],
         v17);
  if ( v7 != -1 && v7 < *(int *)&stru_A83D50.__pad_80[40] ) /*0x517e9d*/
  {
    --*(_DWORD *)&stru_A83D50.__pad_80[40]; /*0x517ea2*/
    for ( ; /*0x517ea8*/
          v7 < *(int *)&stru_A83D50.__pad_80[40];
          *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_80[28] + 4 * v7 - 4) = *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_80[28]
                                                                                     + 4 * v7) )
    {
      ++v7; /*0x517eb0*/
    }
  }
  Vtable3 = AbstractClass::GetVtable3(p_vtable1); /*0x517ec3*/
  vtable1 = g_BuildingLoadQueue_Array.vfptr1; /*0x517ec8*/
  v10 = Vtable3; /*0x517ece*/
  if ( g_BuildingLoadQueue_Array.vfptr1 ) /*0x517ed2*/
  {
    if ( !IDA_LOBYTE(g_BuildingLoadQueue_Array.vfptr3) ) /*0x517ede*/
    {
      qsort( /*0x517eee*/
        g_BuildingLoadQueue_Array.vfptr,
        (size_t)g_BuildingLoadQueue_Array.vfptr1,
        8u,
        (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
      vtable1 = g_BuildingLoadQueue_Array.vfptr1; /*0x517ef3*/
      g_BuildingLoadQueue_Array.uniqueId = 0; /*0x517efc*/
      IDA_LOBYTE(g_BuildingLoadQueue_Array.vfptr3) = 1; /*0x517f02*/
    }
    v17[0] = v10; /*0x517f0d*/
    v11 = BinaryArraySearch((int)g_BuildingLoadQueue_Array.vfptr, (int)vtable1, v17); /*0x517f18*/
    if ( v11 ) /*0x517f1f*/
    {
      v12 = (signed int)(v11 - (unsigned int)g_BuildingLoadQueue_Array.vfptr) >> 3; /*0x517f27*/
      if ( v12 != -1 ) /*0x517f2d*/
      {
        v13 = v12 + 1; /*0x517f2f*/
        for ( i = (char *)g_BuildingLoadQueue_Array.vfptr1; /*0x517f39*/
              v13 < (int)g_BuildingLoadQueue_Array.vfptr1;
              i = (char *)g_BuildingLoadQueue_Array.vfptr1 )
        {
          v15 = (char *)g_BuildingLoadQueue_Array.vfptr + 8 * v13++; /*0x517f41*/
          *(v15 - 2) = *v15; /*0x517f47*/
          *(v15 - 1) = v15[1]; /*0x517f4d*/
        }
        g_BuildingLoadQueue_Array.vfptr1 = i - 1; /*0x517f62*/
        *((_DWORD *)g_BuildingLoadQueue_Array.vfptr + 2 * (int)g_BuildingLoadQueue_Array.vfptr1) = 0; /*0x517f67*/
        *((_DWORD *)g_BuildingLoadQueue_Array.vfptr + 2 * (int)g_BuildingLoadQueue_Array.vfptr1 + 1) = 0; /*0x517f77*/
        g_BuildingLoadQueue_Array.uniqueId = 0; /*0x517f7b*/
      }
    }
  }
  this->isAliveFlag = 0; /*0x517f83*/
  return FootClass::Destruct(); /*0x517f8e*/
}
}
// 0x7447A0
int InfantryClass_ScanTarget_0(void * a1)
{
  return InfantryClass::ScanTarget(a1);
}