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
// X129: fresh-render label declarations (auto, idempotent)
#include "e4/classes/ScenarioClass_e4.hpp"  // X136: complete type for stru_A8E960
// X129: fresh-render label declarations (auto, idempotent)
extern gamemd::DynamicVectorClass g_BuildingLoadQueue_Array_x136;  // X136: til alias of g_BuildingLoadQueue_Array (value form; til dump .omo/x136/)

// 0x4D4DC0
namespace gamemd {  // G42.18 ns repair
int InfantryClass::ScanTarget(int * a1)
{

  int ptr_0; // edi
  __int16 *PlacementCellsAlt; // eax
  void *v4; // eax
  int v5; // edx
  int v6; // eax
  double v7; // st7
  unsigned __int16 *v8; // eax
  int v9; // ebp
  int *v10; // eax
  int v11; // edi
  int v12; // ebx
  int *v13; // eax
  int v14; // ecx
  unsigned __int16 *v15; // eax
  int result; // eax
  unsigned __int16 *v17; // [esp+48h] [ebp-24h] BYREF
  int v18; // [esp+4Ch] [ebp-20h]
  int v19; // [esp+50h] [ebp-1Ch]
  unsigned char v20[12]; // [esp+54h] [ebp-18h] BYREF
  unsigned char v21[12]; // [esp+60h] [ebp-Ch] BYREF

  if ( *(unsigned char *)(this->COMStub_Return0_33() + 912) /*0x4d4dde*/
    && !this->GetZAboveGround() )
  {
    ptr_0 = this->ptr_0; /*0x4d4de8*/
    PlacementCellsAlt = (__int16 *)((char *)this)->FindPlacementCellsAlt(&v17, (int)this); /*0x4d4df4*/
    v4 = ((CellCoord *)&dword_87F7E8)->To_CellObj(PlacementCellsAlt); /*0x4d4dff*/
    (*(void (**)(FootClass *, void *, int))(ptr_0 + 1152))(this, v4, 1); /*0x4d4e07*/
  }
  if ( this->q68E[0] ) /*0x4d4e0d*/
  {
    v17 = (unsigned __int16 *)this->location[0]; /*0x4d4e21*/
    v5 = this->ptr_0; /*0x4d4e25*/
    v18 = this->location[1]; /*0x4d4e2a*/
    v19 = this->location[2]; /*0x4d4e36*/
    v6 = (*(int (**)(FootClass *, int, unsigned __int16 **, unsigned int))(v5 + 964))(this, 1, &v17, 0); /*0x4d4e3e*/
    if ( v6 ) /*0x4d4e46*/
    {
      this->vt_slot_968(this, v6); /*0x4d4e4d*/
      this->q68E[0] = 0; /*0x4d4e53*/
    }
  }
  if ( this->target ) /*0x4d4e5a*/
    this->vt_slot_1340(this, 0); /*0x4d4e6a*/
  else
    this->vt_slot_1156(this, 0, 1); /*0x4d4e7a*/
  v7 = *((double *)MissionClass::GetMissionControl((MissionClass *)this) + 2) * 900.0; /*0x4d4e8a*/
  LOWORD(v8) = Math::RoundToInt(v7); /*0x4d4e90*/
  v9 = (int)v8 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x4d4eb3*/
  if ( !this->target
    || (!this
     || this->vt_slot_44(this) != 15
     || !*(unsigned char *)((this->vt_slot_44(this) == 15 ? &this->AbstractClass_1 : (FootClass *)1728)->ptr_0
                  + 1685))
    && (!*(unsigned int *)this->vt_slot_1016(this, 0)
     || *(int *)(*(unsigned int *)this->vt_slot_1016(this, 0) + 180) > 512) )
  {
    return v9; /*0x4d4f1c*/
  }
  v10 = (int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)this->target + 72))(this->target, v20); /*0x4d4f30*/
  v11 = *v10; /*0x4d4f33*/
  v12 = v10[1]; /*0x4d4f35*/
  v13 = (int *)this->vt_slot_72(this, v21); /*0x4d4f41*/
  v14 = *v13; /*0x4d4f44*/
  v18 = v13[1] - v12; /*0x4d4f4d*/
  v17 = (unsigned __int16 *)(v14 - v11); /*0x4d4f51*/
  Math::Sqrt((double)(v14 - v11) * (double)(v14 - v11) + (double)v18 * (double)v18); /*0x4d4f71*/
  LOWORD(v15) = Math::RoundToInt(v7); /*0x4d4f79*/
  v17 = v15; /*0x4d4f83*/
  if ( (int)v15 > 768 ) /*0x4d4f88*/
    return v9; /*0x4d4fa9*/
  result = v9; /*0x4d4f99*/
  if ( (double)(int)v17 >= 281.6 ) /*0x4d4f9b*/
    return v9 / 2; /*0x4d4fa3*/
  return result; /*0x4d4fa0*/

}
}  // G42.18 ns repair
// 0x4D5350
namespace gamemd {
int InfantryClass::ProcessDeploy(void ** a1)
{
  void *v2; // edx
  int v3; // eax
  int *v4; // edi
  unsigned char *v5; // eax
  AbstractClass *target; // ecx
  FactoryClass *slaveManager; // ecx
  void (**ptr_0)(FootClass *, void *, int); // edi
  void *v9; // eax
  char *MissionControl; // eax
  int v11; // eax
  int16_t v13[2]; // [esp+8h] [ebp-14h] BYREF
  int v14; // [esp+Ch] [ebp-10h] BYREF
  unsigned int v15[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( *(unsigned char *)((*((int (**)(FootClass *))a1->ptr_0 + 33))(a1) + 1748) /*0x4d5392*/
    || (v15[0] = a1->location[0],
        v2 = a1->ptr_0,
        v15[1] = a1->location[1],
        v15[2] = a1->location[2],
        !(*((uint8_t (**)(FootClass *, unsigned int *, unsigned int))v2 + 231))(a1, v15, 0)) )
  {
    if ( (uint8_t)((House *)((House *)a1->owner))->IsCurrentPlayer() || *(unsigned int *)&dword_A8B238 ) /*0x4d5504*/
    {
      (*((void (**)(FootClass *))a1->ptr_0 + 286))(a1); /*0x4d557c*/
    }
    else
    {
      *(unsigned int *)v13 = g_FootClass_Pool; /*0x4d5510*/
      *(unsigned int *)v13 = *HouseClass::GetCurrentOption((HouseClass *)dword_A83D4C, &v14); /*0x4d5529*/
      if ( *(unsigned int *)v13 != g_FootClass_Pool ) /*0x4d552d*/
      {
        slaveManager = (FactoryClass *)a1->slaveManager; /*0x4d553d*/
        if ( slaveManager ) /*0x4d5545*/
          (slaveManager)->ResetProductionTimers(); /*0x4d5547*/
        ptr_0 = (void (**)(FootClass *, void *, int))a1->ptr_0; /*0x4d554c*/
        v9 = ((CellCoord *)((CellCoord *)&DataGlobal_87F7E8))->To_CellObj(v13); /*0x4d555a*/
        ptr_0[288](a1, v9, 1); /*0x4d5562*/
        (*((void (**)(FootClass *, int, int))a1->ptr_0 + 122))(a1, 2, 1); /*0x4d5570*/
      }
    }
    goto LABEL_25; /*0x4d5576*/
  }
  v3 = (*((int (**)(FootClass *))a1->ptr_0 + 11))(a1); /*0x4d53a4*/
  v4 = v3 == 15 ? (int *)a1 : 0;
  if ( !v4 ) /*0x4d53b4*/
  {
    (*((void (**)(FootClass *, unsigned int))a1->ptr_0 + 335))(a1, 0); /*0x4d54e3*/
    goto LABEL_25; /*0x4d54e9*/
  }
  v5 = (v3 == 15 ? a1 + 1 : (FootClass *)1728)->ptr_0;
  if ( v5[3779] && !v5[3778] && !(uint8_t)TechnoTypeClass::HasVoiceResponse(v4, 14) ) /*0x4d53df*/
  {
    LABEL_14:
    (*((void (**)(FootClass *, AbstractClass *, int))a1->ptr_0 + 288))(a1, a1->target, 1); /*0x4d547c*/
    (*((void (**)(FootClass *, int, unsigned int))a1->ptr_0 + 122))(a1, 8, 0); /*0x4d5497*/
    if ( !(*((uint8_t (**)(FootClass *))a1->ptr_0 + 128))(a1) ) /*0x4d54a9*/
      goto LABEL_25; /*0x4d54a9*/
    goto LABEL_12; /*0x4d54a9*/
  }
  if ( !*(unsigned char *)(v4[432] + 3778) && !(uint8_t)TechnoTypeClass::HasVoiceResponse(v4, 14) /*0x4d5428*/
    || (target = a1->target) == 0
    || (*((int (**)(AbstractClass *))target->ptr_0 + 11))(target) != 6 )
  {
    if ( !*(unsigned char *)(v4[432] + 3782) ) /*0x4d547a*/
    {
      (*((void (**)(FootClass *, unsigned int, int))a1->ptr_0 + 288))(a1, 0, 1); /*0x4d54c6*/
      (*((void (**)(FootClass *, unsigned int))a1->ptr_0 + 335))(a1, 0); /*0x4d54d2*/
      goto LABEL_25; /*0x4d54d8*/
    }
    goto LABEL_14; /*0x4d547a*/
  }
  (*((void (**)(FootClass *, AbstractClass *, int))a1->ptr_0 + 288))(a1, a1->target, 1); /*0x4d5437*/
  (*((void (**)(FootClass *, int, unsigned int))a1->ptr_0 + 122))(a1, 17, 0); /*0x4d5445*/
  if ( (*((uint8_t (**)(FootClass *))a1->ptr_0 + 128))(a1) ) /*0x4d544f*/
    LABEL_12:
  (*((void (**)(FootClass *))a1->ptr_0 + 123))(a1); /*0x4d545d*/
  LABEL_25:
  MissionControl = MissionClass::GetMissionControl((MissionClass *)a1); /*0x4d5582*/
  (*((unsigned short *)&(v11))) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4d5592*/
  return v11 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x4d55b0*/
}
}
// 0x517D90
namespace gamemd {
void* InfantryClass::Destruct(IUnknown * a1, AbstractClass * edx0)
{

  AbstractClass *p_vfptr1; // edi
  int Type; // eax
  int *team; // ecx
  int slaveOwner; // eax
  SlaveManagerClass *v6; // eax
  int v7; // eax
  int Vtable3; // eax
  int v9; // edx
  int v10; // edi
  int v11; // eax
  int v12; // eax
  signed int v13; // ecx
  size_t i; // eax
  unsigned int *v15; // eax
  int v17[2]; // [esp+Ch] [ebp-8h] BYREF

  p_vfptr1 = (AbstractClass *)&this->ptr_4;  /*0x517d9a*/
  /* X11: vfptr install elided (implicit via InfantryClass_4 virtuals) */
  /* X11: vfptr install elided (implicit via InfantryClass_4 virtuals) */
  /* X11: vfptr install elided (implicit via off_7EB02C virtuals) */
  /* X11: vfptr install elided (implicit via InfantryClass_4 virtuals) */
  if ( stru_A8E960.nextScenario[64] )
  {  /*0x517d9d*/  /*0x517da3*/  /*0x517daa*/  /*0x517db1*/  /*0x517dbe*/
    Type = this->Type;  /*0x517dc4*/
    if ( Type )
    {  /*0x517dcc*/
      if ( ((HouseClass *)this->owner)->CanBuild(Type, 0, 0) == -1 )
        *(unsigned char *)(this->owner + 508) = 1;  /*0x517de3*/  /*0x517deb*/
      team = (int *)this->team;  /*0x517df2*/
      if ( team )
      {  /*0x517dfa*/
        (team)->LiberateMember_Start((int)this, 0xFFFFFFFF, 0);  /*0x517e00*/
        this->team = 0;  /*0x517e05*/
      }
      slaveOwner = this->slaveOwner;  /*0x517e0b*/
      if ( slaveOwner )
      {  /*0x517e13*/
        v6 = *(SlaveManagerClass **)(slaveOwner + 728);  /*0x517e15*/
        if ( v6 )
          (v6)->LostSlave((int)this);  /*0x517e1d*/  /*0x517e22*/
      }
      ((HouseClass *)this->owner)->DecrementUnitCount(this);  /*0x517e2e*/
      if ( !this->locomotor )
        sub_7DC720(-2147467261);  /*0x517e33*/  /*0x517e40*/
      (*(void (**)(int))(*(unsigned int *)this->locomotor + 172))(this->locomotor);  /*0x517e4e*/
      this->unknown_int_6E8 = 2;  /*0x517e56*/
      this->Crawling[0] = 0;  /*0x517e60*/
      this->SequenceAnim = 0;  /*0x517e66*/
      ((FootClass *)this)->CleanupDirection();  /*0x517e6c*/
    }
  }
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, 1);  /*0x517e75*/
  v17[0] = (int)this;  /*0x517e89*/
  v7 = (*(int (**)(int *, int *))(dword_A83DE8 + 16))(&dword_A83DE8, v17);  /*0x517e8d*/
  if ( v7 != -1 && v7 < dword_A83DF8 && v7 < --dword_A83DF8 )
  {
    do
    {
      ++v7;  /*0x517eb0*/
      *((unsigned int *)dword_A83DEC + v7 - 1) = *((unsigned int *)dword_A83DEC + v7);
    }
    while ( v7 < dword_A83DF8 );
  }
  Vtable3 = AbstractClass::GetVtable3(p_vfptr1);  /*0x517ec3*/
  v9 = NumOfElements;  /*0x517ec8*/
  v10 = Vtable3;  /*0x517ece*/
  if ( NumOfElements )
  {  /*0x517ed2*/
    if ( !byte_B0E84C )
    {  /*0x517ede*/
      qsort(
        (void *)(int)g_BuildingLoadQueue_Array_x136.vfptr,
        NumOfElements,
        8u,
        (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);  /*0x517eee*/
      v9 = NumOfElements;  /*0x517ef3*/
      dword_B0E850 = 0;  /*0x517efc*/
      byte_B0E84C = 1;  /*0x517f02*/
    }
    v17[0] = v10;  /*0x517f0d*/
    v11 = BinaryArraySearch((int)g_BuildingLoadQueue_Array_x136.vfptr, v9, v17);  /*0x517f18*/
    if ( v11 )
    {  /*0x517f1f*/
      v12 = (v11 - (int)g_BuildingLoadQueue_Array_x136.vfptr) >> 3;  /*0x517f27*/
      if ( v12 != -1 )
      {  /*0x517f2d*/
        v13 = v12 + 1;  /*0x517f2f*/
        for ( i = NumOfElements; v13 < (int)NumOfElements; i = NumOfElements )
        {  /*0x517f39*/
          v15 = (unsigned int *)((int)g_BuildingLoadQueue_Array_x136.vfptr + 8 * v13++);  /*0x517f41*/
          *(v15 - 2) = *v15;  /*0x517f47*/
          *(v15 - 1) = v15[1];  /*0x517f4d*/
        }
        NumOfElements = i - 1;  /*0x517f62*/
        *(unsigned int *)((int)g_BuildingLoadQueue_Array_x136.vfptr + 8 * NumOfElements) = 0;  /*0x517f67*/
        *(unsigned int *)((int)g_BuildingLoadQueue_Array_x136.vfptr + 8 * NumOfElements + 4) = 0;  /*0x517f77*/
        dword_B0E850 = 0;  /*0x517f7b*/
      }
    }
  }
  this->isAliveFlag[0] = 0;  /*0x517f83*/
  return ((FootClass *)this)->Destruct();  /*0x517f8e*/

}
}
// 0x7447A0
int InfantryClass_ScanTarget_0(void * a1)
{
  return InfantryClass::ScanTarget(a1);
}