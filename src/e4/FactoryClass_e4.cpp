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

// 0x4C9B20
namespace gamemd {
int FactoryClass::UpdateProduction()
{
    unsigned int v7 = 0;  /* G37 hoist */
    unsigned int v4 = 0;  /* G37 hoist */
    unsigned int v7 = 0;  /* G37 hoist */
    unsigned int v4 = 0;  /* G37 hoist */
    unsigned int v9 = 0;  /* G37 hoist */

  int Speed; // eax
  unsigned int *v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // eax
  void *v9; // eax
  int v11; // [esp+10h] [ebp-8h]

  IDA_LOBYTE(Speed) = *((unsigned char *)this + 112); /*0x4c9b28*/
  if ( !(unsigned char)Speed ) /*0x4c9b2d*/
  {
    Speed = *((unsigned int *)this + 22); /*0x4c9b33*/
    if ( Speed ) /*0x4c9b38*/
    {
      if ( *((unsigned int *)this + 9) == 54 ) /*0x4c9b4d*/
        return Speed; /*0x4c9b4d*/
    }
    else if ( !*((unsigned int *)this + 26) ) /*0x4c9b3f*/
    {
      return Speed; /*0x4c9b3f*/
    }
    if ( *((unsigned int *)this + 26) == -1 || *((unsigned int *)this + 9) != 54 ) /*0x4c9b5d*/
    {
      v3 = (unsigned int *)((char *)this + 44); /*0x4c9b63*/
      Speed = Locomotor::GetSpeed((int *)((char *)this + 44)); /*0x4c9b68*/
      if ( Speed || (Speed = *((unsigned int *)this + 14)) == 0 ) /*0x4c9b76*/
      {
        *((unsigned char *)this + 40) = 0; /*0x4c9bba*/
      }
      else
      {
        *((unsigned int *)this + 9) += *((unsigned int *)this + 15); /*0x4c9b82*/
        *((unsigned char *)this + 40) = 1; /*0x4c9b89*/
        *v3 = g_abs_A8ED84; /*0x4c9b92*/
        *((unsigned int *)this + 12) = v11; /*0x4c9b94*/
        *((unsigned int *)this + 13) = Speed; /*0x4c9b97*/
        v4 = *((unsigned int *)this + 22); /*0x4c9b9a*/
        *((unsigned char *)this + 93) = 1; /*0x4c9b9f*/
        if ( v4 ) /*0x4c9ba2*/
        {
          v5 = *((unsigned int *)this + 9); /*0x4c9ba4*/
          if ( v5 == 54 ) /*0x4c9bae*/
            v6 = *((unsigned int *)this + 24); /*0x4c9bc5*/
          else
            v6 = *((unsigned int *)this + 24) / (54 - v5); /*0x4c9bb6*/
        }
        else
        {
          v6 = 0; /*0x4c9bca*/
        }
        if ( v6 >= *((unsigned int *)this + 24) ) /*0x4c9bd1*/
          v6 = *((unsigned int *)this + 24); /*0x4c9bd3*/
        if ( v6 <= (*(int (**)(int))(*(unsigned int *)(*((unsigned int *)this + 27) + 36) + 24))(*((unsigned int *)this + 27) + 36) ) /*0x4c9be3*/
        {
          HouseClass::ProcessPowerDrain(*((unsigned int *)this + 27), v6); /*0x4c9bf5*/
          v8 = *((unsigned int *)this + 24); /*0x4c9bfa*/
          *((unsigned char *)this + 92) = 0; /*0x4c9bfd*/
          Speed = v8 - v6; /*0x4c9c01*/
          *((unsigned int *)this + 24) = Speed; /*0x4c9c03*/
        }
        else
        {
          v7 = *((unsigned int *)this + 9); /*0x4c9be5*/
          *((unsigned char *)this + 92) = 1; /*0x4c9be8*/
          Speed = v7 - 1; /*0x4c9beb*/
          *((unsigned int *)this + 9) = Speed; /*0x4c9bec*/
        }
        if ( *((unsigned int *)this + 9) == 54 ) /*0x4c9c0a*/
        {
          *((unsigned char *)this + 112) = 1; /*0x4c9c0c*/
          v9 = g_abs_A8ED84; /*0x4c9c0f*/
          *((unsigned int *)this + 14) = 0; /*0x4c9c19*/
          *((unsigned int *)this + 11) = v9; /*0x4c9c1c*/
          *((unsigned int *)this + 12) = v11; /*0x4c9c22*/
          *((unsigned int *)this + 13) = 0; /*0x4c9c25*/
          IDA_LOBYTE(Speed) = HouseClass::ProcessPowerDrain(*((unsigned int *)this + 27), *((unsigned int *)this + 24)); /*0x4c9c2f*/
          *((unsigned int *)this + 24) = 0; /*0x4c9c34*/
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

  result = *((unsigned char *)this + 93); /*0x4c9c60*/
  *((unsigned char *)this + 93) = 0; /*0x4c9c63*/
  return result; /*0x4c9c67*/

}
}
// 0x4C9C70
namespace gamemd {
int FactoryClass::DemandProduction(int a2, void * a3, char a4)
{

  int v5; // ecx
  int v6; // eax
  int v7;
  int v8; // eax
  int v9; // eax
  int v10; // edx
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // [esp+Ch] [ebp-8h]

  if ( (*(int (**)(int))(*(unsigned int *)a2 + 44))(a2) == 7 ) /*0x4c9c85*/
    FactoryClass::AbandonProduction(this); /*0x4c9c89*/
  if ( (*(int (**)(int))(*(unsigned int *)a2 + 44))(a2) == 7 /*0x4c9ccf*/
    || (!*((unsigned int *)this + 14) || *((unsigned char *)this + 112))
    && *((int *)this + 20) <= 0
    && (!*((unsigned int *)this + 22) || !*((unsigned char *)this + 112))
    || a4 )
  {
    *((unsigned char *)this + 93) = 1; /*0x4c9d6e*/
    *((unsigned char *)this + 112) = 1; /*0x4c9d72*/
    *((unsigned int *)this + 11) = MEMORY[0xA8ED84]; /*0x4c9d85*/
    *((unsigned int *)this + 14) = 0; /*0x4c9d8b*/
    *((unsigned int *)this + 12) = v17; /*0x4c9d8e*/
    *((unsigned int *)this + 13) = 0; /*0x4c9d92*/
    *((unsigned int *)this + 9) = 0; /*0x4c9d95*/
    *((unsigned int *)this + 22) = (*(int (**)(int, #375 *))(*(unsigned int *)a2 + 140))(a2, a3); /*0x4c9da4*/
    if ( !(uint8_t)House::IsCurrentPlayer(a3) ) /*0x4c9da7*/
    {
      v12 = *((unsigned int *)this + 22); /*0x4c9db1*/
      if ( v12 ) /*0x4c9db6*/
      {
        if ( (*(int (**)(int))(*(unsigned int *)v12 + 44))(v12) == 6 ) /*0x4c9dc0*/
          *(unsigned char *)(*((unsigned int *)this + 22) + 1738) = 1; /*0x4c9dc5*/
      }
    }
    v13 = *((unsigned int *)this + 22); /*0x4c9dcc*/
    if ( v13 ) /*0x4c9dd1*/
    {
      v14 = *(unsigned int *)(v13 + 540); /*0x4c9dd3*/
      *((unsigned int *)this + 27) = v14; /*0x4c9ddb*/
      v15 = (*(int (**)(int, int))(*(unsigned int *)a2 + 132))(a2, v14); /*0x4c9de1*/
      v16 = *((unsigned int *)this + 22); /*0x4c9de7*/
      *((unsigned int *)this + 24) = v15; /*0x4c9dea*/
      *(unsigned int *)(v16 + 768) = v15; /*0x4c9ded*/
    }
    return *((unsigned int *)this + 22) != 0; /*0x4c9dfc*/
  }
  else if ( *((unsigned int *)this + 20) >= MEMORY[0x8871E0]->BaseUnderAttackSound /*0x4c9cea*/
         || HouseClass::ShouldDisableCameo(*(unsigned int **)((char *)this + 108), a2) )
  {
    if ( (uint8_t)House::IsHumanPlayer(a3) ) /*0x4c9d3f*/
      PlayVocClass(MEMORY[0x8871E0]->?[3], 0x2000, 1.0, 0); /*0x4c9d5f*/
    return 0; /*0x4c9d65*/
  }
  else
  {
    v5 = (int)(*((unsigned int *)this + 18));
    v6 = *((unsigned int *)this + 20); /*0x4c9cf6*/
    v7 = (char *)this + 64; /*0x4c9cf9*/
    if ( v6 < v5 /*0x4c9d1b*/
      || (*(unsigned char *)(v7 + 13) || !v5)
      && (v8 = *(unsigned int *)(v7 + 20), v8 > 0)
      && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)v7 + 8))(v7, v5 + v8, 0) )
    {
      v9 = *(unsigned int *)(v7 + 16); /*0x4c9d22*/
      v10 = *(unsigned int *)(v7 + 4); /*0x4c9d25*/
      *(unsigned int *)(v7 + 16) = v9 + 1; /*0x4c9d2b*/
      *(unsigned int *)(v10 + 4 * v9) = a2; /*0x4c9d2e*/
    }
    return 1; /*0x4c9d32*/
  }

}
}
// 0x4C9E10
namespace gamemd {
int FactoryClass::SetObject(int a2)
{

  int v3; // eax
  int v5; // [esp+8h] [ebp-8h]

  FactoryClass::AbandonProduction(this); /*0x4c9e16*/
  *((unsigned int *)this + 22) = a2; /*0x4c9e21*/
  v3 = *(unsigned int *)(a2 + 540); /*0x4c9e27*/
  *((unsigned int *)this + 24) = 0; /*0x4c9e2d*/
  *((unsigned int *)this + 27) = v3; /*0x4c9e30*/
  *((unsigned int *)this + 11) = g_abs_A8ED84; /*0x4c9e38*/
  *((unsigned int *)this + 14) = 0; /*0x4c9e3e*/
  *((unsigned int *)this + 12) = v5; /*0x4c9e41*/
  *((unsigned int *)this + 13) = 0; /*0x4c9e46*/
  *((unsigned int *)this + 9) = 54; /*0x4c9e49*/
  *((unsigned char *)this + 93) = 1; /*0x4c9e50*/
  *((unsigned char *)this + 112) = 1; /*0x4c9e53*/
  return 1; /*0x4c9e56*/

}
}
// 0x4C9E60
namespace gamemd {
int FactoryClass::StartProduction(char a2)
{

  unsigned int v2;
  int v4; // [esp+4h] [ebp-8h]

  if ( *((unsigned char *)this + 112) ) /*0x4c9e60*/
    return 0; /*0x4c9e98*/
  *((unsigned char *)this + 113) = a2; /*0x4c9e71*/
  *((unsigned char *)this + 112) = 1; /*0x4c9e74*/
  v2 = g_abs_A8ED84; /*0x4c9e78*/
  *((unsigned int *)this + 14) = 0; /*0x4c9e80*/
  *((unsigned int *)this + 11) = v2; /*0x4c9e83*/
  *((unsigned int *)this + 12) = v4; /*0x4c9e89*/
  *((unsigned int *)this + 13) = 0; /*0x4c9e8e*/
  return 1; /*0x4c9e92*/

}
}
// 0x4C9FB0
namespace gamemd {
int FactoryClass::GetBuildTimeFrames()
{

  unsigned int *v1; // ecx
  int v2; // edx
  int v3; // edx
  int result; // eax

  v1 = (unsigned int *)*((unsigned int *)this + 22); /*0x4c9fb0*/
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
  int v3; // edi
  int result; // eax
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // esi
  int v13; // [esp+28h] [ebp-4h]

  v2 = a2; /*0x4ca273*/
  v3 = a1; /*0x4ca279*/
  result = AbstractClass::SaveLoad_Prefix_0(a1, a2); /*0x4ca27f*/
  if ( result >= 0 ) /*0x4ca288*/
  {
    if ( v3 ) /*0x4ca290*/
    {
      AbstractClass::InitVtables((unsigned int *)v3, (int)&a2); /*0x4ca299*/
      __4type_info_AAEAAV0_ABV0__Z(&a2); /*0x4ca2a6*/
      TechnoTypeVector::Constructor(0, 0); /*0x4ca2b2*/
      *(unsigned int *)(v3 + 64) = &vt_DynamicVectorClass_TechnoTypeClass_const; /*0x4ca2b7*/
      *(unsigned int *)(v3 + 84) = 10; /*0x4ca2bd*/
      *(unsigned int *)(v3 + 80) = 0; /*0x4ca2c4*/
      *(unsigned int *)v3 = &vt_FactoryClass; /*0x4ca2c7*/
      *(unsigned int *)(v3 + 4) = &vt_FactoryClass; /*0x4ca2cd*/
      *(unsigned int *)(v3 + 8) = &vt_FactoryClass; /*0x4ca2d4*/
      *(unsigned int *)(v3 + 12) = &vt_FactoryClass; /*0x4ca2db*/
    }
    v5 = *v2; /*0x4ca2e2*/
    a1 = 0; /*0x4ca2ee*/
    result = (*(int (**)(int *, int *, int, unsigned int))(v5 + 12))(v2, &a1, 4, 0); /*0x4ca2f2*/
    if ( result >= 0 ) /*0x4ca2f7*/
    {
      v6 = a1; /*0x4ca2fd*/
      v13 = 0; /*0x4ca301*/
      if ( a1 <= 0 ) /*0x4ca307*/
      {
LABEL_14:
        v12 = 0; /*0x4ca374*/
        if ( v6 > 0 ) /*0x4ca378*/
        {
          do /*0x4ca390*/
            ObjectPtr::RegisterForTracking((int)&g_abs_B0C110, (int *)(*(unsigned int *)(v3 + 68) + 4 * v12++)); /*0x4ca386*/
          while ( v12 < a1 ); /*0x4ca390*/
        }
        ObjectPtr::RegisterForTracking((int)&g_abs_B0C110, (int *)(v3 + 108)); /*0x4ca39b*/
        ObjectPtr::RegisterForTracking((int)&g_abs_B0C110, (int *)(v3 + 88)); /*0x4ca3a9*/
        return 0; /*0x4ca3ae*/
      }
      else
      {
        while ( 1 ) /*0x4ca309*/
        {
          v7 = *v2; /*0x4ca309*/
          a2 = 0; /*0x4ca315*/
          result = (*(int (**)(int *, int **, int, unsigned int))(v7 + 12))(v2, &a2, 4, 0); /*0x4ca319*/
          if ( result < 0 ) /*0x4ca31e*/
            break; /*0x4ca31e*/
          v8 = *(unsigned int *)(v3 + 72); /*0x4ca324*/
          if ( *(unsigned int *)(v3 + 80) < v8 /*0x4ca349*/
            || (*(unsigned char *)(v3 + 77) || !v8)
            && (v9 = *(unsigned int *)(v3 + 84), v9 > 0)
            && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)(v3 + 64) + 8))(v3 + 64, v8 + v9, 0) )
          {
            v10 = *(unsigned int *)(v3 + 80); /*0x4ca350*/
            v11 = *(unsigned int *)(v3 + 68); /*0x4ca353*/
            *(unsigned int *)(v3 + 80) = v10 + 1; /*0x4ca359*/
            *(unsigned int *)(v11 + 4 * v10) = a2; /*0x4ca360*/
          }
          v6 = a1; /*0x4ca367*/
          if ( ++v13 >= a1 ) /*0x4ca372*/
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

  this->Debug::Log(); /*0x4ca43f*/
  this->Debug::Log(); /*0x4ca44d*/
  (*(void (**)(unsigned int))(**((unsigned int **)this + 22) + 44))(*((unsigned int *)this + 22)); /*0x4ca45a*/
  this->Debug::Log(); /*0x4ca463*/
  (*(void (**)(unsigned int))(**((unsigned int **)this + 22) + 64))(*((unsigned int *)this + 22)); /*0x4ca470*/
  this->Debug::Log(); /*0x4ca479*/
  this->Debug::Log(); /*0x4ca489*/
  this->Debug::Log(); /*0x4ca499*/
  this->Debug::Log(); /*0x4ca4a7*/
  this->Debug::Log(); /*0x4ca4b5*/
  this->Debug::Log(); /*0x4ca4c3*/
  (*(void (**)(int))(*(unsigned int *)(*((unsigned int *)this + 27) + 4) + 16))(*((unsigned int *)this + 27) + 4); /*0x4ca4d4*/
  this->Debug::Log(); /*0x4ca4dd*/
  (*(void (**)(char *))(*((unsigned int *)this + 1) + 16))((char *)this + 4); /*0x4ca4ec*/
  this->Debug::Log(); /*0x4ca4f5*/
  v3 = AbstractClass::ProcessPower(this); /*0x4ca504*/
  IDA_LOBYTE(v3) = *((unsigned char *)this + 112); /*0x4ca509*/
  Power::FlagProcess(a2, v3); /*0x4ca50f*/
  IDA_LOBYTE(v4) = *((unsigned char *)this + 93); /*0x4ca514*/
  Power::FlagProcess(a2, v4); /*0x4ca51a*/
  Power::TimerProcess(*((unsigned int *)this + 24)); /*0x4ca525*/
  Power::TimerProcess(*((unsigned int *)this + 25)); /*0x4ca530*/
  v5 = *((unsigned int *)this + 22); /*0x4ca535*/
  if ( v5 ) /*0x4ca53a*/
  {
    v6 = (*(int (**)(int))(*(unsigned int *)(v5 + 4) + 16))(v5 + 4); /*0x4ca543*/
    Power::TimerProcess(v6); /*0x4ca549*/
  }
  Power::TimerProcess(*((unsigned int *)this + 26)); /*0x4ca554*/
  v7 = (*(int (**)(int))(*(unsigned int *)(*((unsigned int *)this + 27) + 4) + 16))(*((unsigned int *)this + 27) + 4); /*0x4ca563*/
  return Power::TimerProcess(v7); /*0x4ca56e*/

}
}
// 0x4CA580
namespace gamemd {
int FactoryClass::Revert(int a2, int a3)
{

  int result; // eax

  result = a2; /*0x4ca580*/
  if ( a2 == *((unsigned int *)this + 22) ) /*0x4ca589*/
    *((unsigned int *)this + 22) = 0; /*0x4ca58b*/
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

  v2 = *((unsigned int *)this + 20); /*0x4ca5a4*/
  if ( v2 ) /*0x4ca5a9*/
  {
    v2 = *((unsigned int *)this + 22); /*0x4ca5ab*/
    if ( !v2 ) /*0x4ca5b0*/
    {
      if ( !*((unsigned int *)this + 14) || (IDA_LOBYTE(v2) = *((unsigned char *)this + 112), (unsigned char)v2) ) /*0x4ca5be*/
      {
        v3 = **(unsigned char ***)((char *)this + 68); /*0x4ca5c3*/
        v4 = *((unsigned int *)this + 20); /*0x4ca5c5*/
        if ( v4 > 0 ) /*0x4ca5ca*/
        {
          v5 = v4 - 1; /*0x4ca5cc*/
          v6 = 0; /*0x4ca5cf*/
          for ( *((unsigned int *)this + 20) = v5; /*0x4ca5d6*/
                v6 < *((unsigned int *)this + 20);
                *(unsigned int *)(*((unsigned int *)this + 17) + 4 * v6 - 4) = *(unsigned int *)(*((unsigned int *)this + 17) + 4 * v6) )
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
          IDA_LOBYTE(v2) = Sidebar::StartSidebarProduction(*((unsigned int *)this + 27), v7, v9, v10, 1); /*0x4ca60a*/
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
  IUnknown **v6; // esi

  v3 = 0; /*0x4ca679*/
  v4 = *((char *)this + 22); /*0x4ca67b*/
  if ( v4 ) /*0x4ca680*/
    v3 = (*(int (**)(int))(*(unsigned int *)v4 + 132))(v4) == (unsigned int)aP1; /*0x4ca68e*/
  v5 = *((char *)this + 20); /*0x4ca693*/
  if ( v5 > 0 ) /*0x4ca698*/
  {
    v6 = (IUnknown **)*((char *)this + 17); /*0x4ca69a*/
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
  unsigned int *i; // ecx

  v2 = *((char *)this + 20); /*0x4ca6b0*/
  v3 = 0; /*0x4ca6b3*/
  if ( v2 <= 0 ) /*0x4ca6b8*/
    return 0; /*0x4ca6cd*/
  for ( i = (unsigned int *)*((char *)this + 17); a2 != *i; ++i ) /*0x4ca6ba*/
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
  void **v7; // [esp+4h] [ebp-4h] BYREF

  *Block = &vt_FactoryClass; /*0x4ca776*/
  *(Block + 1) = &vt_FactoryClass; /*0x4ca77c*/
  *(Block + 2) = &vt_FactoryClass; /*0x4ca783*/
  *(Block + 3) = &vt_FactoryClass; /*0x4ca78a*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x4ca791*/
  v7 = Block; /*0x4ca7a6*/
  v3 = (*(int (**)(int *, void ***))(g_abs_A83E30 + 16))(&g_abs_A83E30, &v7); /*0x4ca7aa*/
  if ( v3 != -1 && v3 < (int)((int))((int))(g_abs_A83E40) && v3 < --g_abs_A83E40 ) /*0x4ca7c5*/
  {
    do /*0x4ca7dd*/
    {
      ++v3; /*0x4ca7cd*/
      *((unsigned int *)g_abs_A83E34 + v3 - 1) = *((unsigned int *)g_abs_A83E34 + v3); /*0x4ca7d1*/
    }
    while ( v3 < (int)((int))((int))(g_abs_A83E40) ); /*0x4ca7dd*/
  }
  if ( g_abs_A8E9A0 ) /*0x4ca7e6*/
    FactoryClass::AbandonProduction((int)Block); /*0x4ca7ea*/
  v7 = Block; /*0x4ca7ff*/
  v4 = (*(int (**)(int *, void ***))(g_abs_B0F720 + 16))(&g_abs_B0F720, &v7); /*0x4ca803*/
  if ( v4 != -1 && v4 < (int)((int))((int))(g_abs_B0F730) && v4 < --g_abs_B0F730 ) /*0x4ca81e*/
  {
    do /*0x4ca836*/
    {
      ++v4; /*0x4ca826*/
      *((unsigned int *)g_abs_B0F724 + v4 - 1) = *((unsigned int *)g_abs_B0F724 + v4); /*0x4ca82a*/
    }
    while ( v4 < (int)((int))((int))(g_abs_B0F730) ); /*0x4ca836*/
  }
  v5 = *(Block + 17); /*0x4ca838*/
  *(Block + 16) = &vt_VectorClass_TechnoTypeClass_const; /*0x4ca83b*/
  if ( v5 && *((unsigned char *)Block + 77) ) /*0x4ca846*/
  {
    RA2_OPDEL(v5); /*0x4ca84e*/
    *(Block + 17) = 0; /*0x4ca856*/
  }
  *((unsigned char *)Block + 77) = 0; /*0x4ca85f*/
  *(Block + 18) = 0; /*0x4ca863*/
  AbstractClass::DTOR(Block); /*0x4ca86a*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x4ca874*/
    RA2_OPDEL(Block); /*0x4ca877*/
  return (FactoryClass *)Block; /*0x4ca881*/

}
}
// 0x635060
namespace gamemd {
int FactoryClass::FinishProduction(int a2)
{

  int v3; // eax
  int v4; // eax
  int v5; // ecx

  if ( *(unsigned char *)(a2 + 12) ) /*0x63506c*/
  {
    *(unsigned char *)(a2 + 12) = 0; /*0x635073*/
    v3 = *((unsigned int *)this + 42) - 1; /*0x63507d*/
    *((unsigned int *)this + 42) = v3; /*0x63507e*/
    if ( !v3 ) /*0x635084*/
      *((unsigned int *)this + 44) = -1; /*0x635086*/
  }
  v4 = *(unsigned int *)(a2 + 8); /*0x63508c*/
  if ( v4 != -1 ) /*0x635091*/
  {
    v4 = *(unsigned int *)(*((unsigned int *)this + 9) + 4 * v4); /*0x635096*/
    *(unsigned int *)(v4 + 116) = -1; /*0x635099*/
    *((unsigned int *)this + 45) = -1; /*0x63509c*/
    v5 = *(unsigned int *)(v4 + 112) - 1; /*0x6350a5*/
    *(unsigned int *)(v4 + 112) = v5; /*0x6350a6*/
    if ( !v5 ) /*0x6350a9*/
    {
      if ( this ) /*0x6350ad*/
      {
        LOBYTE(v4) = *((unsigned char *)this + 28); /*0x6350af*/
        if ( !(unsigned char)v4 ) /*0x6350b4*/
        {
          *((unsigned char *)this + 28) = 1; /*0x6350b6*/
          LOBYTE(v4) = MEMORY[0xAC4CA0]; /*0x6350ba*/
          if ( MEMORY[0xAC4CA8] < MEMORY[0xAC4CA0] /*0x6350f4*/
            || (MEMORY[0xAC4CA5] || !MEMORY[0xAC4CA0])
            && MEMORY[0xAC4CAC] > 0
            && (LOBYTE(v4) = (*(int (**)(int *, int, unsigned int))(MEMORY[0xAC4C98] + 8))(
                               &MEMORY[0xAC4C98],
                               MEMORY[0xAC4CA0] + MEMORY[0xAC4CAC],
                               0),
                (unsigned char)v4) )
          {
            v4 = MEMORY[0xAC4CA8]++; /*0x6350fc*/
            *((unsigned int *)MEMORY[0xAC4C9C] + v4) = this; /*0x63510b*/
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

  if (!a2, unsigned int a3) /*0x4ca236*/
    return -2147467261; /*0x4ca238*/
  *a2 = 887937448; /*0x4ca246*/
  a2[1] = 298977968; /*0x4ca24e*/
  a2[2] = 1610655660; /*0x4ca257*/
  a2[3] = -1252326136; /*0x4ca260*/
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

  result = AbstractClass::SaveLoad_Prefix(a1, a2, a3); /*0x4ca3d2*/
  if ( result >= 0 ) /*0x4ca3d9*/
  {
    v4 = *a2; /*0x4ca3de*/
    a3 = a1[20]; /*0x4ca3ea*/
    result = (*(int (**)(int *, int *, int, unsigned int))(v4 + 16))(a2, &a3, 4, 0); /*0x4ca3ee*/
    if ( result >= 0 ) /*0x4ca3f3*/
    {
      for ( i = 0; i < a3; ++i ) /*0x4ca3fd*/
      {
        if ( (*(int (**)(int *, int, int, unsigned int))(*a2 + 16))(a2, a1[17] + 4 * i, 4, 0) < 0 ) /*0x4ca412*/
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

  unsigned int *v2; // esi
  int v3; // eax
  int v4; // ecx
  int v5; // ecx

  v2 = (unsigned int *)this + 16; /*0x4ca624*/
  v3 = (*(int (**)(unsigned int *, char *))(*((unsigned int *)this + 16) + 16))((unsigned int *)this + 16, &a2); /*0x4ca62e*/
  if ( v3 == -1 ) /*0x4ca634*/
    return 0; /*0x4ca634*/
  v4 = v2[4]; /*0x4ca636*/
  if ( v3 >= v4 ) /*0x4ca63b*/
    return 0; /*0x4ca65d*/
  v5 = v4 - 1; /*0x4ca63d*/
  for ( v2[4] = v5; v3 < v2[4]; *(unsigned int *)(v2[1] + 4 * v3 - 4) = *(unsigned int *)(v2[1] + 4 * v3) ) /*0x4ca643*/
    ++v3; /*0x4ca648*/
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

  return *(unsigned int *)(*((unsigned int *)this + 1) + 4 * a2); /*0x4ca8ea*/

}
} // namespace gamemd

// 0x4CA8F0
namespace gamemd {
char FactoryClass_33::AddRef(int a2)
{

  int v2; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  v2 = *((char *)this + 2); /*0x4ca8f2*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x4ca8fd*/
  {
    v3 = 0; /*0x4ca8ff*/
    if ( v2 <= 0 ) /*0x4ca903*/
      return 1; /*0x4ca923*/
    v4 = (unsigned int *)*((char *)this + 1); /*0x4ca905*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4ca90b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4ca914*/
    {
      ++v3; /*0x4ca916*/
      ++v4; /*0x4ca917*/
      if ( v3 >= v2 ) /*0x4ca91c*/
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
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4ca93c*/
  {
    *((unsigned char *)this + 12) = 0; /*0x4ca946*/
    if ( a3 ) /*0x4ca94c*/
      v4 = a3; /*0x4ca962*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4ca95e*/
    *((unsigned char *)this + 12) = 1; /*0x4ca966*/
    if ( v4 ) /*0x4ca96a*/
    {
      if ( *((unsigned int *)this + 1) ) /*0x4ca975*/
      {
        v6 = *((unsigned int *)this + 2); /*0x4ca97c*/
        if ( a2 < v6 ) /*0x4ca981*/
          v6 = a2; /*0x4ca983*/
        for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x4ca989*/
          ++i; /*0x4ca98e*/
        if ( *((unsigned char *)this + 13) ) /*0x4ca99b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4ca9a6*/
          *((unsigned int *)this + 1) = 0; /*0x4ca9ae*/
        }
      }
      *((unsigned int *)this + 1) = v4; /*0x4ca9b7*/
      *((unsigned int *)this + 2) = a2; /*0x4ca9bf*/
      *((unsigned char *)this + 13) = a3 == 0; /*0x4ca9c2*/
      return 1; /*0x4ca9c8*/
    }
    else
    {
      return 0; /*0x4ca96f*/
    }
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this + 12))(this); /*0x4ca9d2*/
    return 1; /*0x4ca9d8*/
  }

}
} // namespace gamemd

// 0x4CA9E0
namespace gamemd {
void FactoryClass_33::ddtor()
{

  if ( *((unsigned int *)this + 1) && *((unsigned char *)this + 13) ) /*0x4ca9ed*/
  {
    RA2_OPDEL(*(void **)((char *)this + 4)); /*0x4ca9f3*/
    *((unsigned int *)this + 1) = 0; /*0x4ca9fb*/
  }
  *((unsigned char *)this + 13) = 0; /*0x4ca9fe*/
  *((unsigned int *)this + 2) = 0; /*0x4caa01*/

}
} // namespace gamemd

// 0x4CAA10
namespace gamemd {
int FactoryClass_33::Read(unsigned int * a2)
{

  int result; // eax
  int v3; // edx
  unsigned int *i; // ecx

  if ( !*((unsigned char *)this + 12) ) /*0x4caa10*/
    return 0; /*0x4caa18*/
  v3 = *((unsigned int *)this + 2); /*0x4caa1e*/
  result = 0; /*0x4caa21*/
  if ( v3 <= 0 ) /*0x4caa25*/
    return -1; /*0x4caa3c*/
  for ( i = *(unsigned int **)((char *)this + 4); *i != *a2; ++i ) /*0x4caa2b*/
  {
    if ( ++result >= v3 ) /*0x4caa3a*/
      return -1; /*0x4caa3a*/
  }
  return result; /*0x4caa1a*/

}
} // namespace gamemd

// 0x4CAA50
namespace gamemd {
unsigned int FactoryClass_33::Write(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x4caa50*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x4caa65*/
  else
    return 0; /*0x4caa57*/

}
} // namespace gamemd

// 0x4CAB50
namespace gamemd {
VectorClass_flat * FactoryClass_33::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4cab53*/
  *Block = &vt_VectorClass_TechnoTypeClass_const; /*0x4cab56*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x4cab60*/
  {
    __3_YAXPAX_Z(v3); /*0x4cab68*/
    *(Block + 1) = 0; /*0x4cab70*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x4cab7b*/
  *(Block + 2) = 0; /*0x4cab81*/
  if ( (a2 & 1) != 0 ) /*0x4cab88*/
    __3_YAXPAX_Z(Block); /*0x4cab8b*/
  return (VectorClass *)Block; /*0x4cab95*/

}
} // namespace gamemd

// 0x636DC0
namespace gamemd {
int FactoryClass::GetState()
{

  return *((unsigned int *)this + 5); /*0x636dc3*/

}
} // namespace gamemd

// 0x637AA0
namespace gamemd {
char FactoryClass::GetFlag()
{

  return g_abs_AC4CF4; /*0x637aa5*/

}
} // namespace gamemd
