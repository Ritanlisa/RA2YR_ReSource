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

    LOBYTE(Speed) = *((unsigned char *)this + 448);
  if ( !(unsigned char)Speed ) /*0x4c9b2d*/
  {
        Speed = *((unsigned int *)this + 352);
    if ( Speed ) /*0x4c9b38*/
    {
            if ( *((unsigned int *)this + 144) == 54 )
        return Speed; /*0x4c9b4d*/
    }
        else if ( !*((unsigned int *)this + 416) )
    {
      return Speed; /*0x4c9b3f*/
    }
        if ( *((unsigned int *)this + 416) == -1 || *((unsigned int *)this + 144) != 54 )
    {
      v3 = (int)(&this-((unsigned int *)(>production))[2]);
      Speed = (int)(Locomotor::GetSpeed((Locomotor *)&this-((unsigned int *)(>production))[2]));
            if ( Speed || (Speed = *((unsigned int *)this + 224)) == 0 )
      {
                *((unsigned char *)this + 160) = 0;
      }
      else
      {
                *((unsigned int *)this + 144) += *((unsigned int *)this + 240);
                *((unsigned char *)this + 160) = 1;
        *v3 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x4c9b92*/
        this-((unsigned int *)(>queuedObjects))[0] = v11; /*0x4c9b94*/
                *((unsigned int *)this + 208) = Speed;
        v4 = *(unsigned int *)&this-((unsigned int *)(>__pad_42))[22]; /*0x4c9b9a*/
        this-((unsigned int *)(>__pad_42))[27] = 1; /*0x4c9b9f*/
        if ( v4 ) /*0x4c9ba2*/
        {
                    v5 = *((unsigned int *)this + 144);
          if ( v5 == 54 ) /*0x4c9bae*/
                        v6 = *((unsigned int *)this + 384);
          else
                        v6 = *((unsigned int *)this + 384) / (54 - v5);
        }
        else
        {
          balance = 0; /*0x4c9bca*/
        }
                if ( v6 >= *((unsigned int *)this + 384) )
                    v6 = *((unsigned int *)this + 384);
                if ( v6 <= (*(int (__stdcall **)(int))(*(unsigned int *)(*((unsigned int *)this + 432) + 36) + 24))(*((unsigned int *)this + 432) + 36) )
        {
                    HouseClass::ProcessPowerDrain(*((unsigned int *)this + 432), v6);
                    v8 = *((unsigned int *)this + 384);
          this-((unsigned int *)(>__pad_42))[26] = 0; /*0x4c9bfd*/
          Speed = v8 - balance; /*0x4c9c01*/
                    *((unsigned int *)this + 384) = Speed;
        }
        else
        {
                    v7 = *((unsigned int *)this + 144);
          this-((unsigned int *)(>__pad_42))[26] = 1; /*0x4c9be8*/
          Speed = v7 - 1; /*0x4c9beb*/
          this-((unsigned int *)(>production))[0] = Speed; /*0x4c9bec*/
        }
        if ( this-((unsigned int *)(>production))[0] == 54 ) /*0x4c9c0a*/
        {
          this->isSuspended = (gamemd::TechnoTypeClass *)(1);
          v9 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x4c9c0f*/
                    *((unsigned int *)this + 224) = 0;
          this-((unsigned int *)(>production))[2] = v9; /*0x4c9c1c*/
          this-((unsigned int *)(>queuedObjects))[0] = v11; /*0x4c9c22*/
                    *((unsigned int *)this + 208) = 0;
                    LOBYTE(Speed) = HouseClass::ProcessPowerDrain(*((unsigned int *)this + 432), *((unsigned int *)this + 384));
                    *((unsigned int *)this + 384) = 0;
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

    result = *((unsigned int *)this + 372);
  this-((unsigned int *)(>__pad_42))[27] = 0; /*0x4c9c63*/
  return result; /*0x4c9c67*/
}
}
// 0x4C9C70
namespace gamemd {
int FactoryClass::DemandProduction(int a2, void * a3, char a4)
{
  void * v5;
  int v6; // eax
  bool * v7;
  int v8; // eax
  int v9; // eax
  void * v10;
  void * v12;
  void * v13;
  int v14; // eax
  void * v15;
  void * v16;
  int v17; // [esp+Ch] [ebp-8h]

  if ( (*(int (**)(int))(*(unsigned int *)a2 + 44))(a2) == 7 ) /*0x4c9c85*/
    BuildingClass::AbandonProduction(); /*0x4c9c89*/
  if ( (*(int (**)(int))(*(unsigned int *)a2 + 44))(a2) == 7 /*0x4c9ccf*/
    || (!this->queuedCapacity || this->isSuspended)
    && this->u32_50 <= 0
    && (!this->q058 || !this->isSuspended)
    || a4 )
  {
    this->u8_5D = (unsigned char)((void *)(1));
    *(void **)&this->isSuspended = (void *)(1);
    this->q02C = (unsigned int)((void *)(dword_A8ED84));
        *((unsigned int *)this + 224) = 0;
        *((unsigned int *)this + 192) = v17;
        *((unsigned int *)this + 208) = 0;
        *((unsigned int *)this + 144) = 0;
        *((unsigned int *)this + 352) = (*(int (**)(int, #375 *))(*(unsigned int *)a2 + 140))(a2, a3);
    if ( !(uint8_t)House::IsCurrentPlayer(a3) ) /*0x4c9da7*/
    {
      v12 = (void *)((int)(this->q058));
      if ( v12 ) /*0x4c9db6*/
      {
        if ( (*(int (**)(int))(*(unsigned int *)v12 + 44))(v12) == 6 ) /*0x4c9dc0*/
                    *(unsigned char *)(*((unsigned int *)this + 352) + 1738) = 1;
      }
    }
    v13 = (void *)((int)(this->q058));
    if ( v13 ) /*0x4c9dd1*/
    {
      v14 = (int)(*(unsigned int *)((unsigned int)(v13)+ 540));
      this->owner = (int)((unsigned int)((void *)(v14)));
      v15 = (void *)((int)((void *)((*(int (**)(int, int))(*(unsigned int *)a2 + 132))(a2, v14))));
      v16 = (void *)(*(unsigned int *)&this->q058);
      this->balance = (unsigned int)(v15);
      *(unsigned int *)((unsigned int)(v16)+ 768) = v15; /*0x4c9ded*/
    }
        return *((unsigned int *)this + 352) != 0;
  }
    else if ( *((unsigned int *)this + 320) >= MEMORY[0x8871E0]->BaseUnderAttackSound
         || HouseClass::ShouldDisableCameo(*(unsigned int **)(&this->u32_288), a2) )
  {
    if ( (uint8_t)House::IsHumanPlayer(a3) ) /*0x4c9d3f*/
      PlayVocClass(dword_8871E0->?[3], 0x2000, 1.0, 0); /*0x4c9d5f*/
    return 0; /*0x4c9d65*/
  }
  else
  {
    v5 = (void *)((int)(this->q048));
        v6 = *((unsigned int *)this + 320);
        v7 = (char *)this + 256;
    if ( v6 < (int)(v5) /*0x4c9d1b*/
      || (this->u8_4D || !v5)
      && (v8 = this->q054, v8 > 0)
      && (*(uint8_t (**)(int, int, unsigned int))(this->q048)(v7, (unsigned int)(v5)+ v8, 0) )
    {
      v9 = (int)(this->u32_50);
      v10 = (void *)(*(unsigned int *)&this->q044);
            *(unsigned int *)(v7 + 16) = v9 + 1;
      *(unsigned int *)((unsigned int)(v10)+ 4 * v9) = a2; /*0x4c9d2e*/
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
    *((unsigned int *)this + 352) = a2;
  v3 = *(HouseClass **)(a2 + 540); /*0x4c9e27*/
    *((unsigned int *)this + 384) = 0;
    *((unsigned int *)this + 432) = v3;
    *((unsigned int *)this + 176) = MEMORY[0xA8ED84];
    *((unsigned int *)this + 224) = 0;
    *((unsigned int *)this + 192) = v5;
    *((unsigned int *)this + 208) = 0;
    *((unsigned int *)this + 144) = 54;
    *((unsigned char *)this + 372) = 1;
    *((unsigned char *)this + 448) = 1;
  return 1; /*0x4c9e56*/
}
}
// 0x4C9E60
namespace gamemd {
int FactoryClass::StartProduction(char a2)
{
  int v4; // [esp+4h] [ebp-8h]

    if ( *((unsigned char *)this + 448) )
  {
    IDA_LOBYTE(v4) = 0; /*0x4c9e98*/
  }
  else
  {
      *((unsigned char *)this + 452) = a2;
      *((unsigned char *)this + 448) = 1;
    dword_A8ED84 = dword_A8ED84; /*0x4c9e78*/
      *((unsigned int *)this + 224) = 0;
      *((unsigned int *)this + 176) = v2;
    v4 = v4; /*0x4c9e85*/
      *((unsigned int *)this + 192) = v4;
    IDA_LOBYTE(v4) = 1; /*0x4c9e8c*/
      *((unsigned int *)this + 208) = 0;
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

    v1 = (unsigned int *)*((unsigned int *)this + 88);
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
  unsigned int v3;
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

  v2 = (int *)((gamemd::FactoryClass *)(a2));
  v3 = a1; /*0x4ca279*/
  result = AbstractClass::SaveLoad_Prefix_0(a1, (int)a2); /*0x4ca27f*/
  if ( result >= 0 ) /*0x4ca288*/
  {
    if ( v3 ) /*0x4ca290*/
    {
      AbstractClass::InitVtables((AbstractClass *)v3, (int)&a2); /*0x4ca299*/
      __4type_info_AAEAAV0_ABV0__Z(&v3->production[2], (int)&a2); /*0x4ca2a6*/
      TechnoTypeVector::Constructor((TechnoTypeVector *)&v3->onHold, 0, 0); /*0x4ca2b2*/
      *(void **)&v3->onHold = (void*)&DynamicVectorClass_TechnoTypeClass_const___vftable; /*0x4ca2b7*/
      *(unsigned int *)&v3->__pad_42[18] = 10; /*0x4ca2bd*/
      *(unsigned int *)&v3->__pad_42[14] = 0; /*0x4ca2c4*/
      v3->AbstractClass = (void*)&FactoryClass_vftable; /*0x4ca2c7*/
      v3->? = (void*)&FactoryClass_vftable; /*0x4ca2cd*/
      v3->? = (void*)&FactoryClass_vftable; /*0x4ca2d4*/
      v3->? = (void*)&FactoryClass_vftable; /*0x4ca2db*/
    }
    v5 = *v2; /*0x4ca2e2*/
    a1 = 0; /*0x4ca2ee*/
    result = (*(int (__stdcall **)(int *, FactoryClass **, int, unsigned int))(v5 + 12))(v2, &a1, 4, 0); /*0x4ca2f2*/
    if ( result >= 0 ) /*0x4ca2f7*/
    {
      v6 = (gamemd::FactoryClass *)(a1);
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
              (int *)(*(unsigned int *)&v3->__pad_42[2] + 4 * v12++));
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
          result = (*(int (__stdcall **)(int *, int **, int, unsigned int))(v7 + 12))(v2, &a2, 4, 0); /*0x4ca319*/
          if ( result < 0 ) /*0x4ca31e*/
            break; /*0x4ca31e*/
          v8 = *(unsigned int *)&v3->__pad_42[6]; /*0x4ca324*/
          if ( *(unsigned int *)&v3->__pad_42[14] < v8 /*0x4ca349*/
            || (v3->__pad_42[11] || !v8)
            && (v9 = *(unsigned int *)&v3->__pad_42[18], v9 > 0)
            && (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)&v3->onHold + 8))(
                 &v3->onHold,
                 v8 + v9,
                 0) )
          {
            v10 = *(unsigned int *)&v3->__pad_42[14]; /*0x4ca350*/
            v11 = *(unsigned int *)&v3->__pad_42[2]; /*0x4ca353*/
            *(unsigned int *)&v3->__pad_42[14] = v10 + 1; /*0x4ca359*/
            *(unsigned int *)(v11 + 4 * v10) = a2; /*0x4ca360*/
          }
          v6 = (gamemd::FactoryClass *)(a1);
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

    Debug::Log();
    Debug::Log();
    (*(void (**)(unsigned int))(**((unsigned int **)this + 22) + 44))(*((unsigned int *)this + 22));
    Debug::Log();
    (*(void (**)(unsigned int))(**((unsigned int **)this + 22) + 64))(*((unsigned int *)this + 22));
    Debug::Log();
    Debug::Log();
    Debug::Log();
    Debug::Log();
    Debug::Log();
    Debug::Log();
    (*(void (__stdcall **)(int))(*(unsigned int *)(*((unsigned int *)this + 27) + 4) + 16))(*((unsigned int *)this + 27) + 4);
    Debug::Log();
    (*(void (__stdcall **)(char *))(*((unsigned int *)this + 1) + 16))((char *)this + 4);
    Debug::Log();
  v3 = AbstractClass::ProcessPower((AbstractClass *)this); /*0x4ca504*/
    LOBYTE(v3) = *((unsigned char *)this + 112);
  Power::FlagProcess((Power *)a2, v3); /*0x4ca50f*/
    LOBYTE(v4) = *((unsigned char *)this + 93);
  Power::FlagProcess((Power *)a2, v4); /*0x4ca51a*/
    Power::TimerProcess(*((unsigned int *)this + 24));
    Power::TimerProcess(*((unsigned int *)this + 25));
    v5 = *((unsigned int *)this + 22);
  if ( v5 ) /*0x4ca53a*/
  {
    v6 = (*(int (__stdcall **)(int))(*(unsigned int *)(v5 + 4) + 16))(v5 + 4); /*0x4ca543*/
    Power::TimerProcess(v6); /*0x4ca549*/
  }
    Power::TimerProcess(*((unsigned int *)this + 26));
    v7 = (*(int (__stdcall **)(int))(*(unsigned int *)(*((unsigned int *)this + 27) + 4) + 16))(*((unsigned int *)this + 27) + 4);
// 0x4a1d50
  return Power::TimerProcess(v7); /*0x4ca56e*/
}
}
// 0x4CA580
namespace gamemd {
int FactoryClass::Revert(int a2, int a3)
{
  int result; // eax

  result = a2; /*0x4ca580*/
    if ( a2 == *((unsigned int *)this + 88) )
        *((unsigned int *)this + 88) = 0;
  return result; /*0x4ca592*/
}
}
// 0x4CA5A0
namespace gamemd {
int FactoryClass::StartProduction_2()
{
  int v2; // eax
  unsigned char *v3; // edi
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  void *v7; // eax
  int v9; // [esp-Ch] [ebp-14h]
  char v10; // [esp-8h] [ebp-10h]

    v2 = *((unsigned int *)this + 320);
  if ( v2 ) /*0x4ca5a9*/
  {
        v2 = *((unsigned int *)this + 352);
    if ( !v2 ) /*0x4ca5b0*/
    {
            if ( !*((unsigned int *)this + 224) || (LOBYTE(v2) = *((unsigned char *)this + 448), (unsigned char)v2) )
      {
        v3 = **(unsigned char ***)&this->q044; /*0x4ca5c3*/
        v4 = *(unsigned int *)&this-((unsigned int *)(>__pad_42))[14]; /*0x4ca5c5*/
        if ( v4 > 0 ) /*0x4ca5ca*/
        {
          v5 = v4 - 1; /*0x4ca5cc*/
          v6 = 0; /*0x4ca5cf*/
          for ( *(unsigned int *)&this-((unsigned int *)(>__pad_42))[14] = v5; /*0x4ca5d6*/
                v6 < *(unsigned int *)&this-((unsigned int *)(>__pad_42))[14];
                *(unsigned int *)(*(unsigned int *)&this-((unsigned int *)(>__pad_42))[2] + 4 * v6 - 4) = *(unsigned int *)(*(unsigned int *)&this->__pad_42[2]
                                                                                    + 4 * v6) )
          {
            ++v6; /*0x4ca5db*/
          }
        }
        v2 = (*(int (**)(unsigned char *))(*(unsigned int *)v3 + 64))(v3); /*0x4ca5ee*/
        if ( v2 >= 0 ) /*0x4ca5f3*/
        {
          v10 = v3[3278]; /*0x4ca5ff*/
          v9 = v2; /*0x4ca600*/
          v7 = (void *)(*(int (**)(unsigned char *))(*(unsigned int *)v3 + 44))(v3); /*0x4ca603*/
                    LOBYTE(v2) = Sidebar::StartSidebarProduction(*((unsigned int *)this + 432), v7, v9, v10, 1);
        }
      }
    }
  }
  return v2; /*0x4ca60f*/
}
}
// 0x4CA670
namespace gamemd {
int FactoryClass::CountType(IUnknown * aP1)
{
  int v3; // edi
  int v4; // ecx
  int v5; // eax
  unsigned int *v6; // esi

  v3 = 0; /*0x4ca679*/
    v4 = *((unsigned int *)this + 88);
  if ( v4 ) /*0x4ca680*/
    v3 = (*(int (**)(int))(*(unsigned int *)v4 + 132))(v4) == (int)(aP1); /*0x4ca68e*/
    v5 = *((unsigned int *)this + 80);
  if ( v5 > 0 ) /*0x4ca698*/
  {
        v6 = (IUnknown **)*((unsigned int *)this + 68);
    do /*0x4ca6a6*/
    {
      if ( *(unsigned int)(v6) == aP1 ) /*0x4ca69f*/
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
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 80);
  v3 = 0; /*0x4ca6b3*/
  if ( v2 <= 0 ) /*0x4ca6b8*/
    return 0; /*0x4ca6cd*/
  for ( i = *(unsigned int **)&this-((unsigned int *)(>__pad_42))[2]; a2 != *i; ++i ) /*0x4ca6ba*/
  {
    if ( ++v3 >= v2 ) /*0x4ca6cb*/
      return 0; /*0x4ca6cb*/
  }
  return 1; /*0x4ca6cf*/
}
}
// 0x4CA770
namespace gamemd {
void * FactoryClass::CopyTo(char a2)
{
  int v3; // eax
  int v4; // eax
  void *v5; // eax
  FactoryClass *v7; // [esp+4h] [ebp-4h] BYREF

    *Block = &FactoryClass::`vftable';
    *(Block + 1) = &FactoryClass::`vftable';
    *(Block + 2) = &FactoryClass::`vftable';
    *(Block + 3) = &vt_FactoryClass;
    AbstractClass::AnnounceExpiredPointer(Block, 1);
  v7 = this; /*0x4ca7a6*/
  v3 = (*(int (**)(char *, FactoryClass **))(*(unsigned int *)&stru_A83D50.__pad_C8[24] + 16))( /*0x4ca7aa*/
         &stru_A83D50.__pad_C8[24],
         &v7);
  if ( v3 != -1 && v3 < *(int *)&stru_A83D50.__pad_C8[40] ) /*0x4ca7ba*/
  {
    --*(unsigned int *)&stru_A83D50.__pad_C8[40]; /*0x4ca7bf*/
    for ( ; /*0x4ca7c5*/
          v3 < *(int *)&stru_A83D50.__pad_C8[40];
          *(unsigned int *)(*(unsigned int *)&stru_A83D50.__pad_C8[28] + 4 * v3 - 4) = *(unsigned int *)(*(unsigned int *)&stru_A83D50.__pad_C8[28]
                                                                                     + 4 * v3) )
    {
      ++v3; /*0x4ca7cd*/
    }
  }
  if ( byte_A8E9A0 ) /*0x4ca7e6*/
    BuildingClass::AbandonProduction(); /*0x4ca7ea*/
  v7 = this; /*0x4ca7ff*/
  v4 = (*(int (**)(int *, FactoryClass **))(g_BuildingLoadQueue_Array.PowerBonus + 16))( /*0x4ca803*/
         &g_BuildingLoadQueue_Array.PowerBonus,
         &v7);
  if ( v4 != -1 && v4 < g_BuildingLoadQueue_Array.Foundation[0] ) /*0x4ca813*/
  {
    --g_BuildingLoadQueue_Array.Foundation[0]; /*0x4ca818*/
    for ( ; /*0x4ca81e*/
          v4 < g_BuildingLoadQueue_Array.Foundation[0];
          *(unsigned int *)(g_BuildingLoadQueue_Array.PowerDrain + 4 * v4 - 4) = *(unsigned int *)(g_BuildingLoadQueue_Array.PowerDrain
                                                                                     + 4 * v4) )
    {
      ++v4; /*0x4ca826*/
    }
  }
  v5 = *(void **)&this->q044; /*0x4ca838*/
    *(Block + 16) = &vt_VectorClass_TechnoTypeClass_const;
    if ( v5 && *((unsigned char *)Block + 77) )
  {
    RA2_OPDEL(v5); /*0x4ca84e*/
    *(unsigned int *)&this->q044 = 0; /*0x4ca856*/
  }
    *((unsigned char *)Block + 77) = 0;
    *(Block + 18) = 0;
  AbstractClass::DTOR(); /*0x4ca86a*/
  if ( (a2 & 1) != 0 ) /*0x4ca874*/
    RA2_OPDEL(); /*0x4ca877*/
    return (FactoryClass *)Block;
}
}
// 0x635060
namespace gamemd {
int FactoryClass::FinishProduction(int a2)
{
  int v3; // eax
  FactoryClass * v4;
  int v5; // ecx

  if ( *(unsigned char *)(a2 + 12) ) /*0x63506c*/
  {
    *(unsigned char *)(a2 + 12) = 0; /*0x635073*/
        v3 = *((unsigned int *)this + 672) - 1;
        *((unsigned int *)this + 672) = v3;
    if ( !v3 ) /*0x635084*/
            *((unsigned int *)this + 704) = -1;
  }
  v4 = (gamemd::FactoryClass *)(*(unsigned int *)(a2 + 8));
  if ( v4 != -1 ) /*0x635091*/
  {
        v4 = *(unsigned int *)(*((unsigned int *)this + 144) + 4 * v4);
    *(unsigned int *)(v4 + 116) = -1; /*0x635099*/
        *((unsigned int *)this + 720) = -1;
    v5 = *(unsigned int *)(v4 + 112) - 1; /*0x6350a5*/
    *(unsigned int *)(v4 + 112) = v5; /*0x6350a6*/
    if ( !v5 ) /*0x6350a9*/
    {
      if ( this ) /*0x6350ad*/
      {
                LOBYTE(v4) = *((unsigned char *)this + 112);
        if ( !(unsigned char)v4 ) /*0x6350b4*/
        {
                    *((unsigned char *)this + 112) = 1;
          IDA_LOBYTE(v4) = dword_AC4CA0; /*0x6350ba*/
          if ( dword_AC4CA8 < dword_AC4CA0 /*0x6350f4*/
            || (byte_AC4CA5 || !dword_AC4CA0)
            && dword_AC4CAC > 0
            && (IDA_LOBYTE(v4) = (*(int (**)(int *, int, unsigned int))(g_ScriptConfig + 8))(
                               &g_ScriptConfig,
                               dword_AC4CA0 + dword_AC4CAC,
                               0),
                (unsigned char)v4) )
          {
            v4 = (gamemd::FactoryClass *)((unsigned int)(dword_AC4CA8++));
            *((unsigned int *)dword_AC4C9C + v4) = this; /*0x63510b*/
          }
        }
      }
    }
  }
  *(unsigned int *)(a2 + 8) = -1; /*0x63510e*/
  return v4; /*0x635111*/
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
    a3 = *(unsigned int *)&a1->__pad_42[14]; /*0x4ca3ea*/
    result = (*(int (__stdcall **)(int *, int *, int, unsigned int))(v4 + 16))(a2, &a3, 4, 0); /*0x4ca3ee*/
    if ( result >= 0 ) /*0x4ca3f3*/
    {
      for ( i = 0; i < a3; ++i ) /*0x4ca3fd*/
      {
        if ( (*(int (__stdcall **)(int *, int, int, unsigned int))(*a2 + 16))(a2, *(unsigned int *)&a1->__pad_42[2] + 4 * i, 4, 0) < 0 ) /*0x4ca412*/
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
    v3 = (*(int (**)(unsigned int *, char *))(*((unsigned int *)this + 64) + 16))((char *)this + 64, &a2);
  if ( v3 == -1 ) /*0x4ca634*/
    return 0; /*0x4ca634*/
  v4 = *((unsigned int *)p_onHold + 4); /*0x4ca636*/
  if ( v3 >= v4 ) /*0x4ca63b*/
    return 0; /*0x4ca65d*/
  v5 = v4 - 1; /*0x4ca63d*/
  for ( *((unsigned int *)p_onHold + 4) = v5; /*0x4ca643*/
        v3 < *((unsigned int *)p_onHold + 4);
        *(unsigned int *)(*((unsigned int *)p_onHold + 1) + 4 * v3 - 4) = *(unsigned int *)(*((unsigned int *)p_onHold + 1) + 4 * v3) )
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
int FactoryClass_33::Seek(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4CA8F0
namespace gamemd {
char FactoryClass_33::AddRef(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4ca8fd*/
  {
    v3 = 0; /*0x4ca8ff*/
    if ( m_8 <= 0 ) /*0x4ca903*/
      return 1; /*0x4ca923*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4ca90b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4ca914*/
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
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4ca93c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4ca94c*/
      v4 = a3; /*0x4ca962*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4ca95e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4ca96a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4ca981*/
          m_8 = a2; /*0x4ca983*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4ca98e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->q004); /*0x4ca9a6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4ca9c8*/
    }
    else
    {
      return 0; /*0x4ca96f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4ca9d8*/
  }
}
} // namespace gamemd

// 0x4CA9E0
namespace gamemd {
void FactoryClass_33::ddtor()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->q004); /*0x4ca9f3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4CAA10
namespace gamemd {
int FactoryClass_33::Read(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4caa18*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4caa21*/
  if ( m_8 <= 0 ) /*0x4caa25*/
    return -1; /*0x4caa3c*/
  for ( i = *(unsigned int **)&this->q004; *i != *a2; ++i ) /*0x4caa2b*/
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
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4caa57*/
}
} // namespace gamemd

// 0x4CAB50
namespace gamemd {
VectorClass_flat * FactoryClass_33::QueryInterface(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_TechnoTypeClass_const;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4cab68*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4cab88*/
    RA2_OPDEL(); /*0x4cab8b*/
  return this; /*0x4cab95*/
}
} // namespace gamemd

// 0x636DC0
namespace gamemd {
int FactoryClass::GetState()
{
    return *((unsigned int *)this + 20);
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
