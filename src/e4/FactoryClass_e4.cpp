// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/FactoryClass_33_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Sidebar_e4.hpp"
#include "e4/classes/FactoryClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/TerrainTypeClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/FileClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/FilePipe_30_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Factory_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/RawFileClass_e4.hpp"
#include "e4/classes/TypeList_flat_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/Connection_e4.hpp"
#include "e4/classes/E4Recv_426620_e4.hpp"
#include "e4/classes/ObjectPtr_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"  // G42.36 C2027 supply
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
#include "e4/classes/TechnoTypeVector_e4.hpp"  // G57w10 D supply

// 0x4C9B20
namespace gamemd {
int FactoryClass::UpdateProduction()
{
  int Speed; // eax
  int *v3; // edi
  int v4; // eax
  int v5; // eax
  int balance; // edi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v11; // [esp+10h] [ebp-8h]

  IDA_LOBYTE(Speed) = this->isSuspended; /*0x4c9b28*/
  if ( !(_BYTE)Speed ) /*0x4c9b2d*/
  {
    Speed = *(_DWORD *)&this->__pad_42[22]; /*0x4c9b33*/
    if ( Speed ) /*0x4c9b38*/
    {
      if ( this->production[0] == 54 ) /*0x4c9b4d*/
        return Speed; /*0x4c9b4d*/
    }
    else if ( !this->specialItem ) /*0x4c9b3f*/
    {
      return Speed; /*0x4c9b3f*/
    }
    if ( this->specialItem == -1 || this->production[0] != 54 ) /*0x4c9b5d*/
    {
      v3 = &this->production[2]; /*0x4c9b63*/
      Speed = Locomotor::GetSpeed((Locomotor *)&this->production[2]); /*0x4c9b68*/
      if ( Speed || (Speed = this->queuedCapacity) == 0 ) /*0x4c9b76*/
      {
        IDA_LOBYTE(this->production[1]) = 0; /*0x4c9bba*/
      }
      else
      {
        this->production[0] += (int)this->object; /*0x4c9b82*/
        IDA_LOBYTE(this->production[1]) = 1; /*0x4c9b89*/
        *v3 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4c9b92*/
        this->queuedObjects[0] = v11; /*0x4c9b94*/
        this->queuedCount = Speed; /*0x4c9b97*/
        v4 = *(_DWORD *)&this->__pad_42[22]; /*0x4c9b9a*/
        this->__pad_42[27] = 1; /*0x4c9b9f*/
        if ( v4 ) /*0x4c9ba2*/
        {
          v5 = this->production[0]; /*0x4c9ba4*/
          if ( v5 == 54 ) /*0x4c9bae*/
            balance = this->balance; /*0x4c9bc5*/
          else
            balance = this->balance / (54 - v5); /*0x4c9bb6*/
        }
        else
        {
          balance = 0; /*0x4c9bca*/
        }
        if ( balance >= this->balance ) /*0x4c9bd1*/
          balance = this->balance; /*0x4c9bd3*/
        if ( balance <= (*(int (__stdcall **)(int *))(this->owner->arrayIndex + 24))(&this->owner->arrayIndex) ) /*0x4c9be3*/
        {
          HouseClass::ProcessPowerDrain((int *)this->owner, balance); /*0x4c9bf5*/
          v8 = this->balance; /*0x4c9bfa*/
          this->__pad_42[26] = 0; /*0x4c9bfd*/
          Speed = v8 - balance; /*0x4c9c01*/
          this->balance = Speed; /*0x4c9c03*/
        }
        else
        {
          v7 = this->production[0]; /*0x4c9be5*/
          this->__pad_42[26] = 1; /*0x4c9be8*/
          Speed = v7 - 1; /*0x4c9beb*/
          this->production[0] = Speed; /*0x4c9bec*/
        }
        if ( this->production[0] == 54 ) /*0x4c9c0a*/
        {
          this->isSuspended = 1; /*0x4c9c0c*/
          v9 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4c9c0f*/
          this->queuedCapacity = 0; /*0x4c9c19*/
          this->production[2] = v9; /*0x4c9c1c*/
          this->queuedObjects[0] = v11; /*0x4c9c22*/
          this->queuedCount = 0; /*0x4c9c25*/
          IDA_LOBYTE(Speed) = HouseClass::ProcessPowerDrain((int *)this->owner, this->balance); /*0x4c9c2f*/
          this->balance = 0; /*0x4c9c34*/
        }
      }
    }
  }
  return Speed; /*0x4c9bbe*/
}
}
// 0x4C9C60
namespace gamemd {
int FactoryClass::HasProgressChanged()
{
  char result; // al

  result = this->__pad_42[27]; /*0x4c9c60*/
  this->__pad_42[27] = 0; /*0x4c9c63*/
  return result; /*0x4c9c67*/
}
}
// 0x4C9C70
namespace gamemd {
int FactoryClass::DemandProduction(int a2, void *a3, char a4)
{
  int v5; // ecx
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // eax
  int v10; // edx
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // [esp+Ch] [ebp-8h]

  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) == 7 ) /*0x4c9c85*/
    BuildingClass::AbandonProduction(); /*0x4c9c89*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) == 7 /*0x4c9ccf*/
    || (!this->queuedCapacity || this->isSuspended)
    && this->u32_50 <= 0
    && (!this->q058 || !this->isSuspended)
    || a4 )
  {
    this->u32_5D = 1; /*0x4c9d6e*/
    this->isSuspended = 1; /*0x4c9d72*/
    this->q02C = dword_A8ED84; /*0x4c9d85*/
    this->queuedCapacity = 0; /*0x4c9d8b*/
    this->queuedObjects = v17; /*0x4c9d8e*/
    this->queuedCount = 0; /*0x4c9d92*/
    this->production = 0; /*0x4c9d95*/
    this->q058 = (*(int (__thiscall **)(int, void *))(*(_DWORD *)a2 + 140))(a2, a3); /*0x4c9da4*/
    if ( !(unsigned __int8)House::IsCurrentPlayer(a3) ) /*0x4c9da7*/
    {
      v12 = this->q058; /*0x4c9db1*/
      if ( v12 ) /*0x4c9db6*/
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 44))(v12) == 6 ) /*0x4c9dc0*/
          *(_BYTE *)(this->q058 + 1738) = 1; /*0x4c9dc5*/
      }
    }
    v13 = this->q058; /*0x4c9dcc*/
    if ( v13 ) /*0x4c9dd1*/
    {
      v14 = *(_DWORD *)(v13 + 540); /*0x4c9dd3*/
      this->owner = v14; /*0x4c9ddb*/
      v15 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a2 + 132))(a2, v14); /*0x4c9de1*/
      v16 = this->q058; /*0x4c9de7*/
      this->balance = v15; /*0x4c9dea*/
      *(_DWORD *)(v16 + 768) = v15; /*0x4c9ded*/
    }
    return this->q058 != 0; /*0x4c9dfc*/
  }
  else if ( this->u32_50 >= dword_8871E0->BaseUnderAttackSound /*0x4c9cea*/
         || HouseClass::ShouldDisableCameo(*(_DWORD **)(&this->u32_288), a2) )
  {
    if ( (unsigned __int8)House::IsHumanPlayer(a3) ) /*0x4c9d3f*/
      PlayVocClass(dword_8871E0->?[3], 0x2000, 1.0, 0); /*0x4c9d5f*/
    return 0; /*0x4c9d65*/
  }
  else
  {
    v5 = this->q048; /*0x4c9cf3*/
    v6 = this->u32_50; /*0x4c9cf6*/
    v7 = &this->onHold; /*0x4c9cf9*/
    if ( v6 < v5 /*0x4c9d1b*/
      || (this->u8_4D || !v5)
      && (v8 = this->q054, v8 > 0)
      && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(this->q048)(v7, v5 + v8, 0) )
    {
      v9 = this->u32_50; /*0x4c9d22*/
      v10 = this->q044; /*0x4c9d25*/
      this->u32_50 = v9 + 1; /*0x4c9d2b*/
      *(_DWORD *)(v10 + 4 * v9) = a2; /*0x4c9d2e*/
    }
    return 1; /*0x4c9d32*/
  }
}
}
// 0x4C9E10
namespace gamemd {
int FactoryClass::SetObject(int a2)
{
  HouseClass *v3; // eax
  int v5; // [esp+8h] [ebp-8h]

  BuildingClass::AbandonProduction(); /*0x4c9e16*/
  *(_DWORD *)&this->__pad_42[22] = a2; /*0x4c9e21*/
  v3 = *(HouseClass **)(a2 + 540); /*0x4c9e27*/
  this->balance = 0; /*0x4c9e2d*/
  this->owner = v3; /*0x4c9e30*/
  this->production[2] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4c9e38*/
  this->queuedCapacity = 0; /*0x4c9e3e*/
  this->queuedObjects[0] = v5; /*0x4c9e41*/
  this->queuedCount = 0; /*0x4c9e46*/
  this->production[0] = 54; /*0x4c9e49*/
  this->__pad_42[27] = 1; /*0x4c9e50*/
  this->isSuspended = 1; /*0x4c9e53*/
  return 1; /*0x4c9e56*/
}
}
// 0x4C9E60
namespace gamemd {
int FactoryClass::StartProduction(char a2)
{
  int v4; // [esp+4h] [ebp-8h]

  if ( this->isSuspended ) /*0x4c9e60*/
  {
    IDA_LOBYTE(v4) = 0; /*0x4c9e98*/
  }
  else
  {
    this->isManual = a2; /*0x4c9e71*/
    this->isSuspended = 1; /*0x4c9e74*/
    dword_A8ED84 = dword_A8ED84; /*0x4c9e78*/
    *(&this->vtable24) = 0; /*0x4c9e80*/
    *(&this->vtable21) = (int)dword_A8ED84; /*0x4c9e83*/
    v4 = v4; /*0x4c9e85*/
    *(&this->vtable22) = v4; /*0x4c9e89*/
    IDA_LOBYTE(v4) = 1; /*0x4c9e8c*/
    *(&this->vtable23) = 0; /*0x4c9e8e*/
  }
}
}
// 0x4C9FB0
namespace gamemd {
int FactoryClass::GetBuildTimeFrames()
{
  HouseClass *v1; // ecx
  int v2; // edx
  int v3; // edx
  int result; // eax

  v1 = *(HouseClass **)&this->__pad_42[22]; /*0x4c9fb0*/
  v2 = 0; /*0x4c9fb3*/
  if ( v1 ) /*0x4c9fb7*/
    v2 = HouseClass::CalcProductionSpeed(v1); /*0x4c9fbe*/
  v3 = v2 / 54; /*0x4c9fcf*/
  result = v3; /*0x4c9fd1*/
  if ( v3 < 1 ) /*0x4c9fd6*/
    return 1; /*0x4c9fd8*/
  if ( v3 > 255 ) /*0x4c9fe3*/
    return 255; /*0x4c9fe5*/
  return result; /*0x4c9fdd*/
}
}
// 0x4CA270
namespace gamemd {
int FactoryClass::LoadFromStream(int a1, int * a2)
{
  int *v2; // ebp
  FactoryClass *v3; // edi
  int result; // eax
  int v5; // edx
  FactoryClass *v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // esi
  int v13; // [esp+28h] [ebp-4h]

  v2 = a2; /*0x4ca273*/
  v3 = a1; /*0x4ca279*/
  result = AbstractClass::SaveLoad_Prefix_0(a1, (int)a2); /*0x4ca27f*/
  if ( result >= 0 ) /*0x4ca288*/
  {
    if ( v3 ) /*0x4ca290*/
    {
      AbstractClass::InitVtables((AbstractClass *)v3, (int)&a2); /*0x4ca299*/
      __4type_info_AAEAAV0_ABV0__Z(&v3->production[2], (int)&a2); /*0x4ca2a6*/
      TechnoTypeVector::Constructor((TechnoTypeVector *)&v3->onHold, 0, 0); /*0x4ca2b2*/
      *(_DWORD *)&v3->onHold = &(void*)(void*)&DynamicVectorClass_TechnoTypeClass_const___vftable; /*0x4ca2b7*/
      *(_DWORD *)&v3->__pad_42[18] = 10; /*0x4ca2bd*/
      *(_DWORD *)&v3->__pad_42[14] = 0; /*0x4ca2c4*/
      v3->vfptr = &(void*)(void*)&FactoryClass_vftable; /*0x4ca2c7*/
      v3->vfptr1 = &(void*)(void*)&FactoryClass_vftable; /*0x4ca2cd*/
      v3->vfptr2 = &(void*)(void*)&FactoryClass_vftable; /*0x4ca2d4*/
      v3->vfptr3 = &(void*)(void*)&FactoryClass_vftable; /*0x4ca2db*/
    }
    v5 = *v2; /*0x4ca2e2*/
    a1 = 0; /*0x4ca2ee*/
    result = (*(int (__stdcall **)(int *, FactoryClass **, int, _DWORD))(v5 + 12))(v2, &a1, 4, 0); /*0x4ca2f2*/
    if ( result >= 0 ) /*0x4ca2f7*/
    {
      v6 = a1; /*0x4ca2fd*/
      v13 = 0; /*0x4ca301*/
      if ( (int)a1 <= 0 ) /*0x4ca307*/
      {
  LABEL_14:
        v12 = 0; /*0x4ca374*/
        if ( (int)v6 > 0 ) /*0x4ca378*/
        {
          do /*0x4ca390*/
            ObjectPtr::RegisterForTracking( /*0x4ca386*/
              (int)&SwizzleManagerClass_Instance,
              (int *)(*(_DWORD *)&v3->__pad_42[2] + 4 * v12++));
          while ( v12 < (int)a1 ); /*0x4ca390*/
        }
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v3->owner); /*0x4ca39b*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v3->__pad_42[22]); /*0x4ca3a9*/
        return 0; /*0x4ca3ae*/
      }
      else
      {
        while ( 1 ) /*0x4ca309*/
        {
          v7 = *v2; /*0x4ca309*/
          a2 = 0; /*0x4ca315*/
          result = (*(int (__stdcall **)(int *, int **, int, _DWORD))(v7 + 12))(v2, &a2, 4, 0); /*0x4ca319*/
          if ( result < 0 ) /*0x4ca31e*/
            break; /*0x4ca31e*/
          v8 = *(_DWORD *)&v3->__pad_42[6]; /*0x4ca324*/
          if ( *(_DWORD *)&v3->__pad_42[14] < v8 /*0x4ca349*/
            || (v3->__pad_42[11] || !v8)
            && (v9 = *(_DWORD *)&v3->__pad_42[18], v9 > 0)
            && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&v3->onHold + 8))(
                 &v3->onHold,
                 v8 + v9,
                 0) )
          {
            v10 = *(_DWORD *)&v3->__pad_42[14]; /*0x4ca350*/
            v11 = *(_DWORD *)&v3->__pad_42[2]; /*0x4ca353*/
            *(_DWORD *)&v3->__pad_42[14] = v10 + 1; /*0x4ca359*/
            *(_DWORD *)(v11 + 4 * v10) = a2; /*0x4ca360*/
          }
          v6 = a1; /*0x4ca367*/
          if ( ++v13 >= (int)a1 ) /*0x4ca372*/
            goto LABEL_14; /*0x4ca372*/
        }
      }
    }
  }
  return result; /*0x4ca3b0*/
}
}
// 0x4CA430
namespace gamemd {
AbstractClass * * FactoryClass::Stat(int * a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // eax

  Debug::Log(); /*0x4ca43f*/
  Debug::Log(); /*0x4ca44d*/
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&this->__pad_42[22] + 44))(*(_DWORD *)&this->__pad_42[22]); /*0x4ca45a*/
  Debug::Log(); /*0x4ca463*/
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&this->__pad_42[22] + 64))(*(_DWORD *)&this->__pad_42[22]); /*0x4ca470*/
  Debug::Log(); /*0x4ca479*/
  Debug::Log(); /*0x4ca489*/
  Debug::Log(); /*0x4ca499*/
  Debug::Log(); /*0x4ca4a7*/
  Debug::Log(); /*0x4ca4b5*/
  Debug::Log(); /*0x4ca4c3*/
  (*((void (__stdcall **)(void **))this->owner->vfptr1 + 4))(&this->owner->vfptr1); /*0x4ca4d4*/
  Debug::Log(); /*0x4ca4dd*/
  (*((void (__stdcall **)(void **))this->vfptr1 + 4))(&this->vfptr1); /*0x4ca4ec*/
  Debug::Log(); /*0x4ca4f5*/
  v3 = AbstractClass::ProcessPower((AbstractClass *)this); /*0x4ca504*/
  IDA_LOBYTE(v3) = this->isSuspended; /*0x4ca509*/
  Power::FlagProcess((Power *)a2, v3); /*0x4ca50f*/
  IDA_LOBYTE(v4) = this->__pad_42[27]; /*0x4ca514*/
  Power::FlagProcess((Power *)a2, v4); /*0x4ca51a*/
  Power::TimerProcess(this->balance); /*0x4ca525*/
  Power::TimerProcess(this->originalBalance); /*0x4ca530*/
  v5 = *(_DWORD *)&this->__pad_42[22]; /*0x4ca535*/
  if ( v5 ) /*0x4ca53a*/
  {
    v6 = (*(int (__stdcall **)(int))(*(_DWORD *)(v5 + 4) + 16))(v5 + 4); /*0x4ca543*/
    Power::TimerProcess(v6); /*0x4ca549*/
  }
  Power::TimerProcess(this->specialItem); /*0x4ca554*/
  v7 = (*((int (__stdcall **)(void **))this->owner->vfptr1 + 4))(&this->owner->vfptr1); /*0x4ca563*/
  return Power::TimerProcess(v7); /*0x4ca56e*/
}
}
// 0x4CA580
namespace gamemd {
int FactoryClass::Revert(int a2, int a3)
{
  int result; // eax

  result = a2; /*0x4ca580*/
  if ( a2 == *(_DWORD *)&this->__pad_42[22] ) /*0x4ca589*/
    *(_DWORD *)&this->__pad_42[22] = 0; /*0x4ca58b*/
  return result; /*0x4ca592*/
}
}
// 0x4CA5A0
namespace gamemd {
int FactoryClass::StartProduction_2()
{
  int v2; // eax
  _BYTE *v3; // edi
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  void *v7; // eax
  int v9; // [esp-Ch] [ebp-14h]
  char v10; // [esp-8h] [ebp-10h]

  v2 = *(_DWORD *)&this->__pad_42[14]; /*0x4ca5a4*/
  if ( v2 ) /*0x4ca5a9*/
  {
    v2 = *(_DWORD *)&this->__pad_42[22]; /*0x4ca5ab*/
    if ( !v2 ) /*0x4ca5b0*/
    {
      if ( !this->queuedCapacity || (IDA_LOBYTE(v2) = this->isSuspended, (_BYTE)v2) ) /*0x4ca5be*/
      {
        v3 = **(_BYTE ***)&this->__pad_42[2]; /*0x4ca5c3*/
        v4 = *(_DWORD *)&this->__pad_42[14]; /*0x4ca5c5*/
        if ( v4 > 0 ) /*0x4ca5ca*/
        {
          v5 = v4 - 1; /*0x4ca5cc*/
          v6 = 0; /*0x4ca5cf*/
          for ( *(_DWORD *)&this->__pad_42[14] = v5; /*0x4ca5d6*/
                v6 < *(_DWORD *)&this->__pad_42[14];
                *(_DWORD *)(*(_DWORD *)&this->__pad_42[2] + 4 * v6 - 4) = *(_DWORD *)(*(_DWORD *)&this->__pad_42[2]
                                                                                    + 4 * v6) )
          {
            ++v6; /*0x4ca5db*/
          }
        }
        v2 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 64))(v3); /*0x4ca5ee*/
        if ( v2 >= 0 ) /*0x4ca5f3*/
        {
          v10 = v3[3278]; /*0x4ca5ff*/
          v9 = v2; /*0x4ca600*/
          v7 = (void *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 44))(v3); /*0x4ca603*/
          IDA_LOBYTE(v2) = Sidebar::StartSidebarProduction((int)this->owner, v7, v9, v10, 1); /*0x4ca60a*/
        }
      }
    }
  }
  return v2; /*0x4ca60f*/
}
}
// 0x4CA670
namespace gamemd {
int FactoryClass::CountType(int aP1)
{
  int v3; // edi
  int v4; // ecx
  int v5; // eax
  _DWORD *v6; // esi

  v3 = 0; /*0x4ca679*/
  v4 = *(_DWORD *)&this->__pad_42[22]; /*0x4ca67b*/
  if ( v4 ) /*0x4ca680*/
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 132))(v4) == aP1; /*0x4ca68e*/
  v5 = *(_DWORD *)&this->__pad_42[14]; /*0x4ca693*/
  if ( v5 > 0 ) /*0x4ca698*/
  {
    v6 = *(_DWORD **)&this->__pad_42[2]; /*0x4ca69a*/
    do /*0x4ca6a6*/
    {
      if ( *v6 == aP1 ) /*0x4ca69f*/
        ++v3; /*0x4ca6a1*/
      ++v6; /*0x4ca6a2*/
      --v5; /*0x4ca6a5*/
    }
    while ( v5 ); /*0x4ca6a6*/
  }
  return v3; /*0x4ca6aa*/
}
}
// 0x4CA6B0
namespace gamemd {
int FactoryClass::IsQueued(int a2)
{
  int v2; // edx
  int v3; // eax
  _DWORD *i; // ecx

  v2 = *(_DWORD *)&this->__pad_42[14]; /*0x4ca6b0*/
  v3 = 0; /*0x4ca6b3*/
  if ( v2 <= 0 ) /*0x4ca6b8*/
    return 0; /*0x4ca6cd*/
  for ( i = *(_DWORD **)&this->__pad_42[2]; a2 != *i; ++i ) /*0x4ca6ba*/
  {
    if ( ++v3 >= v2 ) /*0x4ca6cb*/
      return 0; /*0x4ca6cb*/
  }
  return 1; /*0x4ca6cf*/
}
}
// 0x4CA770
namespace gamemd {
void * FactoryClass::CopyTo(void ** Block, char a2)
{
  int v3; // eax
  int v4; // eax
  void *v5; // eax
  FactoryClass *v7; // [esp+4h] [ebp-4h] BYREF

  Block->vfptr = &(void*)(void*)&FactoryClass_vftable; /*0x4ca776*/
  Block->vfptr1 = &(void*)(void*)&FactoryClass_vftable; /*0x4ca77c*/
  Block->vfptr2 = &(void*)(void*)&FactoryClass_vftable; /*0x4ca783*/
  Block->vfptr3 = &(void*)(void*)&FactoryClass_vftable; /*0x4ca78a*/
  AbstractClass::AnnounceExpiredPointer(&Block->vfptr, 1); /*0x4ca791*/
  v7 = Block; /*0x4ca7a6*/
  v3 = (*(int (__thiscall **)(char *, FactoryClass **))(*(_DWORD *)&stru_A83D50.__pad_C8[24] + 16))( /*0x4ca7aa*/
         &stru_A83D50.__pad_C8[24],
         &v7);
  if ( v3 != -1 && v3 < *(int *)&stru_A83D50.__pad_C8[40] ) /*0x4ca7ba*/
  {
    --*(_DWORD *)&stru_A83D50.__pad_C8[40]; /*0x4ca7bf*/
    for ( ; /*0x4ca7c5*/
          v3 < *(int *)&stru_A83D50.__pad_C8[40];
          *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_C8[28] + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_C8[28]
                                                                                     + 4 * v3) )
    {
      ++v3; /*0x4ca7cd*/
    }
  }
  if ( byte_A8E9A0 ) /*0x4ca7e6*/
    BuildingClass::AbandonProduction((int)Block); /*0x4ca7ea*/
  v7 = Block; /*0x4ca7ff*/
  v4 = (*(int (__thiscall **)(int *, FactoryClass **))(g_BuildingLoadQueue_Array.PowerBonus + 16))( /*0x4ca803*/
         &g_BuildingLoadQueue_Array.PowerBonus,
         &v7);
  if ( v4 != -1 && v4 < g_BuildingLoadQueue_Array.Foundation[0] ) /*0x4ca813*/
  {
    --g_BuildingLoadQueue_Array.Foundation[0]; /*0x4ca818*/
    for ( ; /*0x4ca81e*/
          v4 < g_BuildingLoadQueue_Array.Foundation[0];
          *(_DWORD *)(g_BuildingLoadQueue_Array.PowerDrain + 4 * v4 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.PowerDrain
                                                                                     + 4 * v4) )
    {
      ++v4; /*0x4ca826*/
    }
  }
  v5 = *(void **)&Block->__pad_42[2]; /*0x4ca838*/
  *(_DWORD *)&Block->onHold = &(void*)(void*)&VectorClass_TechnoTypeClass_const___vftable; /*0x4ca83b*/
  if ( v5 && Block->__pad_42[11] ) /*0x4ca846*/
  {
    RA2_OPDEL(v5); /*0x4ca84e*/
    *(_DWORD *)&Block->__pad_42[2] = 0; /*0x4ca856*/
  }
  Block->__pad_42[11] = 0; /*0x4ca85f*/
  *(_DWORD *)&Block->__pad_42[6] = 0; /*0x4ca863*/
  AbstractClass::DTOR((AbstractClass *)Block); /*0x4ca86a*/
  if ( (a2 & 1) != 0 ) /*0x4ca874*/
    RA2_OPDEL(Block); /*0x4ca877*/
  return &Block->vfptr; /*0x4ca881*/
}
}
// 0x635060
namespace gamemd {
int FactoryClass::FinishProduction(int a2)
{
  int v3; // eax
  int result; // eax
  int v5; // ecx

  if ( a2->vtable4 ) /*0x63506c*/
  {
    a2->vtable4 = 0; /*0x635073*/
    v3 = *(&this->uniqueId2) - 1; /*0x63507d*/
    *(&this->uniqueId2) = v3; /*0x63507e*/
    if ( !v3 ) /*0x635084*/
      *(&this->uniqueId4) = -1; /*0x635086*/
  }
  result = a2->vtable3; /*0x63508c*/
  if ( result != -1 ) /*0x635091*/
  {
    result = *(_DWORD *)(this->production + 4 * result); /*0x635096*/
    *(_DWORD *)(result + 116) = -1; /*0x635099*/
    *(&this->uniqueId5) = -1; /*0x63509c*/
    v5 = *(_DWORD *)(result + 112) - 1; /*0x6350a5*/
    *(_DWORD *)(result + 112) = v5; /*0x6350a6*/
    if ( !v5 ) /*0x6350a9*/
    {
      if ( this ) /*0x6350ad*/
      {
        IDA_LOBYTE(result) = this->referenceCount; /*0x6350af*/
        if ( !(_BYTE)result ) /*0x6350b4*/
        {
          this->referenceCount = 1; /*0x6350b6*/
          result = dword_AC4CA0; /*0x6350ba*/
          if ( dword_AC4CA8 < dword_AC4CA0 /*0x6350f4*/
            || (byte_AC4CA5 || !dword_AC4CA0)
            && dword_AC4CAC > 0
            && (result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(dword_AC4C98 + 8))(
                           &dword_AC4C98,
                           dword_AC4CA0 + dword_AC4CAC,
                           0),
                (_BYTE)result) )
          {
            result = dword_AC4CA8++; /*0x6350fc*/
            *((_DWORD *)dword_AC4C9C + result) = this; /*0x63510b*/
          }
        }
      }
    }
  }
  a2->vtable3 = -1; /*0x63510e*/
  return result; /*0x635111*/
}
}
// 0x4CA230
namespace gamemd {
int FactoryClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x4ca236*/
    return -2147467261; /*0x4ca238*/
  *a2 = 887937448; /*0x4ca246*/
  a2[1] = 298977968; /*0x4ca24e*/
  a2[2] = 1610655660; /*0x4ca257*/
  a2[3] = unk_7E982C; /*0x4ca260*/
  return 0; /*0x4ca23d*/
}
} // namespace gamemd

// 0x4CA3C0
namespace gamemd {
int FactoryClass::Seek(int * a1, int * a2, int a3)
{
  int result; // eax
  int v4; // edx
  int i; // ebx

  result = AbstractClass::SaveLoad_Prefix((int *)a1, a2, a3); /*0x4ca3d2*/
  if ( result >= 0 ) /*0x4ca3d9*/
  {
    v4 = *a2; /*0x4ca3de*/
    a3 = *(_DWORD *)&a1->__pad_42[14]; /*0x4ca3ea*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v4 + 16))(a2, &a3, 4, 0); /*0x4ca3ee*/
    if ( result >= 0 ) /*0x4ca3f3*/
    {
      for ( i = 0; i < a3; ++i ) /*0x4ca3fd*/
      {
        if ( (*(int (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, *(_DWORD *)&a1->__pad_42[2] + 4 * i, 4, 0) < 0 ) /*0x4ca412*/
          break; /*0x4ca412*/
      }
      return 0; /*0x4ca41d*/
    }
  }
  return result; /*0x4ca41f*/
}
} // namespace gamemd

// 0x4CA620
namespace gamemd {
char FactoryClass::RemoveOneFromQueue(char a2)
{
  char *p_onHold; // esi
  int v3; // eax
  int v4; // ecx
  int v5; // ecx

  p_onHold = &this->onHold; /*0x4ca624*/
  v3 = (*(int (__thiscall **)(char *, char *))(*(_DWORD *)&this->onHold + 16))(&this->onHold, &a2); /*0x4ca62e*/
  if ( v3 == -1 ) /*0x4ca634*/
    return 0; /*0x4ca634*/
  v4 = *((_DWORD *)p_onHold + 4); /*0x4ca636*/
  if ( v3 >= v4 ) /*0x4ca63b*/
    return 0; /*0x4ca65d*/
  v5 = v4 - 1; /*0x4ca63d*/
  for ( *((_DWORD *)p_onHold + 4) = v5; /*0x4ca643*/
        v3 < *((_DWORD *)p_onHold + 4);
        *(_DWORD *)(*((_DWORD *)p_onHold + 1) + 4 * v3 - 4) = *(_DWORD *)(*((_DWORD *)p_onHold + 1) + 4 * v3) )
  {
    ++v3; /*0x4ca648*/
  }
  return 1; /*0x4ca659*/
}
} // namespace gamemd

// 0x4CA750
namespace gamemd {
int FactoryClass::StubReturn12()
{
  return 12; /*0x4ca755*/
}
} // namespace gamemd

// 0x4CA760
namespace gamemd {
int FactoryClass::StubReturn116()
{
  return 116; /*0x4ca765*/
}
} // namespace gamemd

// 0x4CA8E0
namespace gamemd {
int FactoryClass_33::Seek(int a2, void *a2_2, void *a3_1)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x4ca8ea*/
}
} // namespace gamemd

// 0x4CA8F0
namespace gamemd {
char FactoryClass_33::AddRef(int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x4ca8f2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x4ca8fd*/
  {
    v3 = 0; /*0x4ca8ff*/
    if ( m_8 <= 0 ) /*0x4ca903*/
      return 1; /*0x4ca923*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x4ca905*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4ca90b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4ca914*/
    {
      ++v3; /*0x4ca916*/
      ++v4; /*0x4ca917*/
      if ( v3 >= m_8 ) /*0x4ca91c*/
        return 1; /*0x4ca91c*/
    }
  }
  return 0; /*0x4ca91e*/
}
} // namespace gamemd

// 0x4CA930
namespace gamemd {
char FactoryClass_33::Release(int a2, unsigned int * a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4ca93c*/
  {
    IDA_LOBYTE(this->m_C) = 0; /*0x4ca946*/
    if ( a3 ) /*0x4ca94c*/
      v4 = a3; /*0x4ca962*/
    else
      v4 = (_DWORD *)RA2_OPNEW(4 * a2); /*0x4ca95e*/
    IDA_LOBYTE(this->m_C) = 1; /*0x4ca966*/
    if ( v4 ) /*0x4ca96a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x4ca975*/
      {
        m_8 = this->m_8; /*0x4ca97c*/
        if ( a2 < m_8 ) /*0x4ca981*/
          m_8 = a2; /*0x4ca983*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x4ca989*/
          ++i; /*0x4ca98e*/
        if ( IDA_BYTE1(this->m_C) ) /*0x4ca99b*/
        {
          RA2_OPDEL(*(void **)&this->m_1[3]); /*0x4ca9a6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x4ca9ae*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x4ca9b7*/
      this->m_8 = a2; /*0x4ca9bf*/
      IDA_BYTE1(this->m_C) = a3 == 0; /*0x4ca9c2*/
      return 1; /*0x4ca9c8*/
    }
    else
    {
      return 0; /*0x4ca96f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PBVTechnoTypeClass *))(*(_DWORD *)this->q000 + 12))(this); /*0x4ca9d2*/
    return 1; /*0x4ca9d8*/
  }
}
} // namespace gamemd

// 0x4CA9E0
namespace gamemd {
void FactoryClass_33::ddtor()
{
  if ( *(_DWORD *)&this->m_1[3] && IDA_BYTE1(this->m_C) ) /*0x4ca9ed*/
  {
    RA2_OPDEL(*(void **)&this->m_1[3]); /*0x4ca9f3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4ca9fb*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4ca9fe*/
  this->m_8 = 0; /*0x4caa01*/
}
} // namespace gamemd

// 0x4CAA10
namespace gamemd {
int FactoryClass_33::Read(unsigned int * a2, void *a2_2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !IDA_LOBYTE(a2_2->m_C) ) /*0x4caa10*/
    return 0; /*0x4caa18*/
  m_8 = a2_2->m_8; /*0x4caa1e*/
  result = 0; /*0x4caa21*/
  if ( m_8 <= 0 ) /*0x4caa25*/
    return -1; /*0x4caa3c*/
  for ( i = *(_DWORD **)&a2_2->m_1[3]; *i != *a2_2; ++i ) /*0x4caa2b*/
  {
    if ( ++result >= m_8 ) /*0x4caa3a*/
      return -1; /*0x4caa3a*/
  }
  return result; /*0x4caa1a*/
}
} // namespace gamemd

// 0x4CAA50
namespace gamemd {
unsigned int FactoryClass_33::Write(int a2)
{
  if ( IDA_LOBYTE(this->m_C) ) /*0x4caa50*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4caa65*/
  else
    return 0; /*0x4caa57*/
}
} // namespace gamemd

// 0x4CAB50
namespace gamemd {
VectorClass_flat * FactoryClass_33::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4cab53*/
  *(_DWORD *)Block->q000 = &(void*)(void*)&VectorClass_TechnoTypeClass_const___vftable; /*0x4cab56*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x4cab60*/
  {
    RA2_OPDEL(v3); /*0x4cab68*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x4cab70*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x4cab7b*/
  Block->m_8 = 0; /*0x4cab81*/
  if ( (a2 & 1) != 0 ) /*0x4cab88*/
    RA2_OPDEL(Block); /*0x4cab8b*/
  return Block->q000; /*0x4cab95*/
}
} // namespace gamemd

// 0x636DC0
namespace gamemd {
int FactoryClass::GetState(void *a1)
{
  return a1->abstractFlags; /*0x636dc3*/
}
} // namespace gamemd

// 0x637AA0
namespace gamemd {
char FactoryClass::GetFlag()
{
  int result; // eax

  IDA_LOBYTE(result) = byte_AC4CF4; /*0x637aa0*/
  return result; /*0x637aa5*/
}
} // namespace gamemd
