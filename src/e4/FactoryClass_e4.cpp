// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/FactoryClass_33_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Sidebar_e4.hpp"

// 0x4C9B20
namespace gamemd {
int FactoryClass::UpdateProduction()
{
{
  int Speed; // eax
  wchar_t *v9; // eax
  LOBYTE(Speed) = this->isSuspended; /*0x4c9b28*/
  if ( !(_BYTE)Speed ) /*0x4c9b2d*/
  {
    Speed = this->q058; /*0x4c9b33*/
    if ( Speed ) /*0x4c9b38*/
    {
      if ( this->production == 54 ) /*0x4c9b4d*/
        return Speed; /*0x4c9b4d*/
    }
    else if ( !this->specialItem ) /*0x4c9b3f*/
    {
      return Speed; /*0x4c9b3f*/
    }
    if ( this->specialItem == -1 || this->production != 54 ) /*0x4c9b5d*/
    {
      TerrainTypeClass *v3 = (_DWORD *)(this + 44); /*0x4c9b63*/
      Speed = CDTimerClass::TimeRemaining((int *)(this + 44)); /*0x4c9b68*/
      if ( Speed || (Speed = this->queuedCapacity) == 0 ) /*0x4c9b76*/
      {
        this->q028 = 0; /*0x4c9bba*/
      }
      else
      {
  HouseClass *v6; // edi
        this->production += this->object; /*0x4c9b82*/
        this->q028 = 1; /*0x4c9b89*/
        *v3 = g_CurrentFrame; /*0x4c9b92*/
  int v11; // [esp+10h] [ebp-8h]
        this->queuedObjects = v11; /*0x4c9b94*/
        this->queuedCount = Speed; /*0x4c9b97*/
        int v4 = this->q058; /*0x4c9b9a*/
        this->q174 = 1; /*0x4c9b9f*/
        if ( v4 ) /*0x4c9ba2*/
        {
          int v5 = this->production; /*0x4c9ba4*/
          if ( v5 == 54 ) /*0x4c9bae*/
            v6 = this->balance; /*0x4c9bc5*/
          HouseClass *v6 = this->balance / (54 - v5); /*0x4c9bb6*/
        }
        else
        {
          v6 = 0; /*0x4c9bca*/
        }
        if ( v6 >= this->balance ) /*0x4c9bd1*/
          v6 = this->balance; /*0x4c9bd3*/
        if ( v6 <= (*(int (__stdcall **)(int))(*(_DWORD *)(this->owner + 36) + 24))(this->owner + 36) ) /*0x4c9be3*/
        {
          HouseClass::ProcessPowerDrain(this->owner, v6); /*0x4c9bf5*/
          int v8 = this->balance; /*0x4c9bfa*/
          this->q05C = 0; /*0x4c9bfd*/
          Speed = v8 - v6; /*0x4c9c01*/
          this->balance = Speed; /*0x4c9c03*/
        }
        else
        {
          int v7 = this->production; /*0x4c9be5*/
          this->q05C = 1; /*0x4c9be8*/
          Speed = v7 - 1; /*0x4c9beb*/
          this->production = Speed; /*0x4c9bec*/
        }
        if ( this->production == 54 ) /*0x4c9c0a*/
        {
          this->isSuspended = 1; /*0x4c9c0c*/
          v9 = g_CurrentFrame; /*0x4c9c0f*/
          this->queuedCapacity = 0; /*0x4c9c19*/
          this->q02C = v9; /*0x4c9c1c*/
          this->queuedObjects = v11; /*0x4c9c22*/
          this->queuedCount = 0; /*0x4c9c25*/
          LOBYTE(Speed) = HouseClass::ProcessPowerDrain(this->owner, this->balance); /*0x4c9c2f*/
          this->balance = 0; /*0x4c9c34*/
        }
      }
    }
  }
  return Speed; /*0x4c9bbe*/
}
} // namespace gamemd

// 0x4C9C60
namespace gamemd {
int FactoryClass::HasProgressChanged()
{
{
  char result; // al

  result = this->q174; /*0x4c9c60*/
  this->q174 = 0; /*0x4c9c63*/
  return result; /*0x4c9c67*/
}
} // namespace gamemd

// 0x4C9C70
namespace gamemd {
int FactoryClass::DemandProduction(int a2, void * a3, char a4)
{
{

  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) == 7 ) /*0x4c9c85*/
    FactoryClass::AbandonProduction(this); /*0x4c9c89*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) == 7 /*0x4c9ccf*/
    || (!this->queuedCapacity || this->isSuspended)
    && this->q050 <= 0
    && (!this->q058 || !this->isSuspended)
    || a4 )
  {
    this->q174 = 1; /*0x4c9d6e*/
    this->isSuspended = 1; /*0x4c9d72*/
    this->q02C = g_CurrentFrame; /*0x4c9d85*/
    this->queuedCapacity = 0; /*0x4c9d8b*/
  int v17; // [esp+Ch] [ebp-8h]
    this->queuedObjects = v17; /*0x4c9d8e*/
    this->queuedCount = 0; /*0x4c9d92*/
    this->production = 0; /*0x4c9d95*/
    this->q058 = (*(int (__thiscall **)(int, #375 *))(*(_DWORD *)a2 + 140))(a2, a3); /*0x4c9da4*/
    if ( !(unsigned __int8)House::IsCurrentPlayer(a3) ) /*0x4c9da7*/
    {
      int v12 = this->q058; /*0x4c9db1*/
      if ( v12 ) /*0x4c9db6*/
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 44))(v12) == 6 ) /*0x4c9dc0*/
          *(_BYTE *)(this->q058 + 1738) = 1; /*0x4c9dc5*/
      }
    }
    int v13 = this->q058; /*0x4c9dcc*/
    if ( v13 ) /*0x4c9dd1*/
    {
      int v14 = *(_DWORD *)(v13 + 540); /*0x4c9dd3*/
      this->owner = v14; /*0x4c9ddb*/
      int v15 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a2 + 132))(a2, v14); /*0x4c9de1*/
      int v16 = this->q058; /*0x4c9de7*/
      this->balance = v15; /*0x4c9dea*/
      *(_DWORD *)(v16 + 768) = v15; /*0x4c9ded*/
    }
    return this->q058 != 0; /*0x4c9dfc*/
  }
  else if ( this->q050 >= g_RulesClass_Instance->BaseUnderAttackSound /*0x4c9cea*/
         || HouseClass::ShouldDisableCameo(this->owner, a2) )
  {
    if ( (unsigned __int8)House::IsHumanPlayer(a3) ) /*0x4c9d3f*/
      PlayVocClass(g_RulesClass_Instance->?[3], 0x2000, 1.0, 0); /*0x4c9d5f*/
    return 0; /*0x4c9d65*/
  }
  else
  {
    int v5 = this->q048; /*0x4c9cf3*/
    int v6 = this->q050; /*0x4c9cf6*/
    int v7 = this + 64; /*0x4c9cf9*/
    if ( v6 < v5 /*0x4c9d1b*/
      || (*(_BYTE *)(v7 + 13) || !v5)
  int v8; // eax
      && (v8 = *(_DWORD *)(v7 + 20), v8 > 0)
      && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v7 + 8))(v7, v5 + v8, 0) )
    {
      int v9 = *(_DWORD *)(v7 + 16); /*0x4c9d22*/
      int v10 = *(_DWORD *)(v7 + 4); /*0x4c9d25*/
      *(_DWORD *)(v7 + 16) = v9 + 1; /*0x4c9d2b*/
      *(_DWORD *)(v10 + 4 * v9) = a2; /*0x4c9d2e*/
    }
    return 1; /*0x4c9d32*/
  }
}
} // namespace gamemd

// 0x4C9E10
namespace gamemd {
int FactoryClass::SetObject(int a2)
{
{

  FactoryClass::AbandonProduction(this); /*0x4c9e16*/
  this->q058 = a2; /*0x4c9e21*/
  HouseClass *v3 = *(_DWORD *)(a2 + 540); /*0x4c9e27*/
  this->balance = 0; /*0x4c9e2d*/
  this->owner = v3; /*0x4c9e30*/
  this->q02C = g_CurrentFrame; /*0x4c9e38*/
  this->queuedCapacity = 0; /*0x4c9e3e*/
  int v5; // [esp+8h] [ebp-8h]
  this->queuedObjects = v5; /*0x4c9e41*/
  this->queuedCount = 0; /*0x4c9e46*/
  this->production = 54; /*0x4c9e49*/
  this->q174 = 1; /*0x4c9e50*/
  this->isSuspended = 1; /*0x4c9e53*/
  return 1; /*0x4c9e56*/
}
} // namespace gamemd

// 0x4C9E60
namespace gamemd {
int FactoryClass::StartProduction(char a2)
{
{
  wchar_t *v2; // eax
  if ( this->isSuspended ) /*0x4c9e60*/
    return 0; /*0x4c9e98*/
  this->isManual = a2; /*0x4c9e71*/
  this->isSuspended = 1; /*0x4c9e74*/
  v2 = g_CurrentFrame; /*0x4c9e78*/
  this->queuedCapacity = 0; /*0x4c9e80*/
  this->q02C = v2; /*0x4c9e83*/
  int v4; // [esp+4h] [ebp-8h]
  this->queuedObjects = v4; /*0x4c9e89*/
  this->queuedCount = 0; /*0x4c9e8e*/
  return 1; /*0x4c9e92*/
}
} // namespace gamemd

// 0x4C9FB0
namespace gamemd {
int FactoryClass::GetBuildTimeFrames()
{
{
  int result; // eax

  _DWORD * v1 = (_DWORD *)this->q058; /*0x4c9fb0*/
  int v2 = 0; /*0x4c9fb3*/
  if ( v1 ) /*0x4c9fb7*/
    v2 = HouseClass::CalcProductionSpeed(v1); /*0x4c9fbe*/
  int v3 = v2 / 54; /*0x4c9fcf*/
  result = v3; /*0x4c9fd1*/
  if ( v3 < 1 ) /*0x4c9fd6*/
    return 1; /*0x4c9fd8*/
  if ( v3 > 255 ) /*0x4c9fe3*/
    return 255; /*0x4c9fe5*/
  return result; /*0x4c9fdd*/
}
} // namespace gamemd

// 0x4CA270
namespace gamemd {
int FactoryClass::LoadFromStream(int a1, int * a2)
{
{
  int result; // eax

  int * v2 = a2; /*0x4ca273*/
  AbstractClass *v3 = a1; /*0x4ca279*/
  result = AbstractClass::SaveLoad_Prefix_0(a1, a2); /*0x4ca27f*/
  if ( result >= 0 ) /*0x4ca288*/
  {
    if ( v3 ) /*0x4ca290*/
    {
      AbstractClass::InitVtables((_DWORD *)v3, (int)&a2); /*0x4ca299*/
      __4type_info_AAEAAV0_ABV0__Z(&a2); /*0x4ca2a6*/
      TechnoTypeVector::Constructor(0, 0); /*0x4ca2b2*/
      v3->q040 = &vt_DynamicVectorClass_TechnoTypeClass_const; /*0x4ca2b7*/
      v3->q054 = 10; /*0x4ca2bd*/
      v3->q050 = 0; /*0x4ca2c4*/
      *(_DWORD *)v3 = &FactoryClass::`vftable'; /*0x4ca2c7*/
      v3->vtable2 = &FactoryClass::`vftable'; /*0x4ca2cd*/
      v3->vtable3 = &FactoryClass::`vftable'; /*0x4ca2d4*/
      v3->vtable4 = &vt_FactoryClass; /*0x4ca2db*/
    }
    int v5 = *v2; /*0x4ca2e2*/
    a1 = 0; /*0x4ca2ee*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v5 + 12))(v2, &a1, 4, 0); /*0x4ca2f2*/
    if ( result >= 0 ) /*0x4ca2f7*/
    {
      int v6 = a1; /*0x4ca2fd*/
      int v13 = 0; /*0x4ca301*/
      if ( a1 <= 0 ) /*0x4ca307*/
      {
LABEL_14:
        int v12 = 0; /*0x4ca374*/
        if ( v6 > 0 ) /*0x4ca378*/
        {
          do /*0x4ca390*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v3->q044 + 4 * v12++)); /*0x4ca386*/
          while ( v12 < a1 ); /*0x4ca390*/
        }
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v3 + 108)); /*0x4ca39b*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v3 + 88)); /*0x4ca3a9*/
        return 0; /*0x4ca3ae*/
      }
      else
      {
        while ( 1 ) /*0x4ca309*/
        {
          int v7 = *v2; /*0x4ca309*/
          a2 = 0; /*0x4ca315*/
          result = (*(int (__stdcall **)(int *, int **, int, _DWORD))(v7 + 12))(v2, &a2, 4, 0); /*0x4ca319*/
          if ( result < 0 ) /*0x4ca31e*/
            break; /*0x4ca31e*/
          int v8 = v3->q048; /*0x4ca324*/
          if ( v3->q050 < v8 /*0x4ca349*/
            || (v3->q134 || !v8)
  int v9; // eax
            && (v9 = v3->q054, v9 > 0)
            && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(v3->q040 + 8))(v3 + 64, v8 + v9, 0) )
          {
            int v10 = v3->q050; /*0x4ca350*/
            int v11 = v3->q044; /*0x4ca353*/
            v3->q050 = v10 + 1; /*0x4ca359*/
            *(_DWORD *)(v11 + 4 * v10) = a2; /*0x4ca360*/
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
} // namespace gamemd

// 0x4CA430
namespace gamemd {
AbstractClass * * FactoryClass::Stat(int * a2)
{
{

  Debug::Log(); /*0x4ca43f*/
  Debug::Log(); /*0x4ca44d*/
  (*(void (__thiscall **)(_DWORD))(*this->q058 + 44))(this->q058); /*0x4ca45a*/
  Debug::Log(); /*0x4ca463*/
  (*(void (__thiscall **)(_DWORD))(*this->q058 + 64))(this->q058); /*0x4ca470*/
  Debug::Log(); /*0x4ca479*/
  Debug::Log(); /*0x4ca489*/
  Debug::Log(); /*0x4ca499*/
  Debug::Log(); /*0x4ca4a7*/
  Debug::Log(); /*0x4ca4b5*/
  Debug::Log(); /*0x4ca4c3*/
  (*(void (__stdcall **)(int))(*(_DWORD *)(this->owner + 4) + 16))(this->owner + 4); /*0x4ca4d4*/
  Debug::Log(); /*0x4ca4dd*/
  this->vtable1->vt_slot_16((char *)this + 4); /*0x4ca4ec*/
  Debug::Log(); /*0x4ca4f5*/
  int v3 = AbstractClass::ProcessPower(this); /*0x4ca504*/
  LOBYTE(v3) = this->isSuspended; /*0x4ca509*/
  Power::FlagProcess(a2, v3); /*0x4ca50f*/
  int v4; // ecx
  LOBYTE(v4) = this->q174; /*0x4ca514*/
  Power::FlagProcess(a2, v4); /*0x4ca51a*/
  Power::TimerProcess(this->balance); /*0x4ca525*/
  Power::TimerProcess(this->originalBalance); /*0x4ca530*/
  int v5 = this->q058; /*0x4ca535*/
  if ( v5 ) /*0x4ca53a*/
  {
    int v6 = (*(int (__stdcall **)(int))(*(_DWORD *)(v5 + 4) + 16))(v5 + 4); /*0x4ca543*/
    Power::TimerProcess(v6); /*0x4ca549*/
  }
  Power::TimerProcess(this->specialItem); /*0x4ca554*/
  int v7 = (*(int (__stdcall **)(int))(*(_DWORD *)(this->owner + 4) + 16))(this->owner + 4); /*0x4ca563*/
  return Power::TimerProcess(v7); /*0x4ca56e*/
}
} // namespace gamemd

// 0x4CA580
namespace gamemd {
int FactoryClass::Revert(int a2, int a3)
{
{
  int result; // eax

  result = a2; /*0x4ca580*/
  if ( a2 == this->q058 ) /*0x4ca589*/
    this->q058 = 0; /*0x4ca58b*/
  return result; /*0x4ca592*/
}
} // namespace gamemd

// 0x4CA5A0
namespace gamemd {
int FactoryClass::StartProduction_2()
{
{

  int v2 = this->q050; /*0x4ca5a4*/
  if ( v2 ) /*0x4ca5a9*/
  {
    v2 = this->q058; /*0x4ca5ab*/
    if ( !v2 ) /*0x4ca5b0*/
    {
      if ( !this->queuedCapacity || (LOBYTE(v2) = this->isSuspended, (_BYTE)v2) ) /*0x4ca5be*/
      {
        _BYTE * v3 = *this->q044; /*0x4ca5c3*/
        int v4 = this->q050; /*0x4ca5c5*/
        if ( v4 > 0 ) /*0x4ca5ca*/
        {
          int v5 = v4 - 1; /*0x4ca5cc*/
          int v6 = 0; /*0x4ca5cf*/
          for ( this->q050 = v5; /*0x4ca5d6*/
                v6 < this->q050;
                *(_DWORD *)(this->q044 + 4 * v6 - 4) = *(_DWORD *)(this->q044 + 4 * v6) )
          {
            ++v6; /*0x4ca5db*/
          }
        }
        v2 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 64))(v3); /*0x4ca5ee*/
        if ( v2 >= 0 ) /*0x4ca5f3*/
        {
          char v10 = v3[3278]; /*0x4ca5ff*/
          int v9 = v2; /*0x4ca600*/
          void * v7 = (void *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 44))(v3); /*0x4ca603*/
          LOBYTE(v2) = Sidebar::StartSidebarProduction(this->owner, v7, v9, v10, 1); /*0x4ca60a*/
        }
      }
    }
  }
  return v2; /*0x4ca60f*/
}
} // namespace gamemd

// 0x4CA670
namespace gamemd {
int FactoryClass::CountType(IUnknown * aP1)
{
{
  IUnknown **v6; // esi

  int v3 = 0; /*0x4ca679*/
  int v4 = this->q058; /*0x4ca67b*/
  if ( v4 ) /*0x4ca680*/
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 132))(v4) == (_DWORD)aP1; /*0x4ca68e*/
  int v5 = this->abstractFlags; /*0x4ca693*/
  if ( v5 > 0 ) /*0x4ca698*/
  {
    v6 = (IUnknown **)this->q011; /*0x4ca69a*/
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
} // namespace gamemd

// 0x4CA6B0
namespace gamemd {
int FactoryClass::IsQueued(int a2)
{
{
  _DWORD *i; // ecx

  ControlClass *v2 = this->abstractFlags; /*0x4ca6b0*/
  int v3 = 0; /*0x4ca6b3*/
  if ( v2 <= 0 ) /*0x4ca6b8*/
    return 0; /*0x4ca6cd*/
  for ( i = (_DWORD *)this->q011; a2 != *i; ++i ) /*0x4ca6ba*/
  {
    if ( ++v3 >= v2 ) /*0x4ca6cb*/
      return 0; /*0x4ca6cb*/
  }
  return 1; /*0x4ca6cf*/
}
} // namespace gamemd

// 0x4CA770
namespace gamemd {
void * FactoryClass::CopyTo(char a2)
{
{
  void **v7; // [esp+4h] [ebp-4h] BYREF

  *this = &FactoryClass::`vftable'; /*0x4ca776*/
  this->vtable2 = &FactoryClass::`vftable'; /*0x4ca77c*/
  this->vtable3 = &FactoryClass::`vftable'; /*0x4ca783*/
  this->vtable4 = &vt_FactoryClass; /*0x4ca78a*/
  AbstractClass::AnnounceExpiredPointer(this, 1); /*0x4ca791*/
  v7 = this; /*0x4ca7a6*/
  int v3 = (*(int (__thiscall **)(int *, void ***))(DataGlobal_A83E30 + 16))(&DataGlobal_A83E30, &v7); /*0x4ca7aa*/
  if ( v3 != -1 && v3 < g_TeamTypeCapacity && v3 < --g_TeamTypeCapacity ) /*0x4ca7c5*/
  {
    do /*0x4ca7dd*/
    {
      ++v3; /*0x4ca7cd*/
      *((_DWORD *)g_TeamTypeCount + v3 - 1) = *((_DWORD *)g_TeamTypeCount + v3); /*0x4ca7d1*/
    }
    while ( v3 < g_TeamTypeCapacity ); /*0x4ca7dd*/
  }
  if ( g_WTFMode ) /*0x4ca7e6*/
    FactoryClass::AbandonProduction((int)this); /*0x4ca7ea*/
  v7 = this; /*0x4ca7ff*/
  int v4 = (*(int (__thiscall **)(int *, void ***))(AbstractClass_Array + 16))(&AbstractClass_Array, &v7); /*0x4ca803*/
  if ( v4 != -1 && v4 < g_AlphaShapePool && v4 < --g_AlphaShapePool ) /*0x4ca81e*/
  {
    do /*0x4ca836*/
    {
      ++v4; /*0x4ca826*/
      *((_DWORD *)DataGlobal_B0F724 + v4 - 1) = *((_DWORD *)DataGlobal_B0F724 + v4); /*0x4ca82a*/
    }
    while ( v4 < g_AlphaShapePool ); /*0x4ca836*/
  }
  AbstractClass *v5 = this->q011; /*0x4ca838*/
  this->uniqueId = &vt_VectorClass_TechnoTypeClass_const; /*0x4ca83b*/
  if ( v5 && this->q134 ) /*0x4ca846*/
  {
    __3_YAXPAX_Z(v5); /*0x4ca84e*/
    this->q011 = 0; /*0x4ca856*/
  }
  this->q134 = 0; /*0x4ca85f*/
  this->q012 = 0; /*0x4ca863*/
  AbstractClass::DTOR(this); /*0x4ca86a*/
  if ( (a2 & 1) != 0 ) /*0x4ca874*/
    __3_YAXPAX_Z(this); /*0x4ca877*/
  return (FactoryClass *)this; /*0x4ca881*/
}
} // namespace gamemd

// 0x635060
namespace gamemd {
int FactoryClass::FinishProduction(int a2)
{
{

  if ( *(_BYTE *)(a2 + 12) ) /*0x63506c*/
  {
    *(_BYTE *)(a2 + 12) = 0; /*0x635073*/
    int v3 = this->q0A8 - 1; /*0x63507d*/
    this->q0A8 = v3; /*0x63507e*/
    if ( !v3 ) /*0x635084*/
      this->q0B0 = -1; /*0x635086*/
  }
  int v4 = *(_DWORD *)(a2 + 8); /*0x63508c*/
  if ( v4 != -1 ) /*0x635091*/
  {
    v4 = *(_DWORD *)(this->production + 4 * v4); /*0x635096*/
    *(_DWORD *)(v4 + 116) = -1; /*0x635099*/
    this->q0B4 = -1; /*0x63509c*/
    int v5 = *(_DWORD *)(v4 + 112) - 1; /*0x6350a5*/
    *(_DWORD *)(v4 + 112) = v5; /*0x6350a6*/
    if ( !v5 ) /*0x6350a9*/
    {
      if ( this ) /*0x6350ad*/
      {
        LOBYTE(v4) = (unsigned char)this->referenceCount; /*0x6350af*/
        if ( !(_BYTE)v4 ) /*0x6350b4*/
        {
          this->referenceCount = 1; /*0x6350b6*/
          LOBYTE(v4) = DataGlobal_AC4CA0; /*0x6350ba*/
          if ( DataGlobal_AC4CA8 < DataGlobal_AC4CA0 /*0x6350f4*/
            || (DataGlobal_AC4CA5 || !DataGlobal_AC4CA0)
            && DataGlobal_AC4CAC > 0
            && (LOBYTE(v4) = (*(int (__thiscall **)(int *, int, _DWORD))(g_ScriptConfig + 8))(
                               &g_ScriptConfig,
                               DataGlobal_AC4CA0 + DataGlobal_AC4CAC,
                               0),
                (_BYTE)v4) )
          {
            v4 = DataGlobal_AC4CA8++; /*0x6350fc*/
            *((_DWORD *)DataGlobal_AC4C9C + v4) = this; /*0x63510b*/
          }
        }
      }
    }
  }
  *(_DWORD *)(a2 + 8) = -1; /*0x63510e*/
  return v4; /*0x635111*/
}
} // namespace gamemd

// 0x4CA230
namespace gamemd {
int FactoryClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 887937448;
  a2[1] = 298977968;
  a2[2] = 1610655660;
  a2[3] = -1252326136;
  return 0;
}
} // namespace gamemd

// 0x4CA3C0
namespace gamemd {
int FactoryClass::Seek(int * a1, int * a2, int a3)
{
{
    int result;
    int v4;
    int i;
    result = AbstractClass::SaveLoad_Prefix(a1, a2, a3);
    if ( result >= 0 )
  {
    v4 = *a2;
    a3 = *((int*)(a1) + 20);
    result = (*(int (__stdcall **)(int *, int *, int, int))(v4 + 16))(a2, &a3, 4, 0);
    if ( result >= 0 )
    {
    for ( i = 0; i < a3; ++i )
      {
    if ( (*(int (__stdcall **)(int *, int, int, int))(*a2 + 16))(a2, *((int*)(a1) + 17) + 4 * i, 4, 0) < 0 )
    break;
      }
    return 0;
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x4CA620
namespace gamemd {
char FactoryClass::RemoveOneFromQueue(char a2)
{
{
    int *v2;
    int v3;
    int v4;
    int v5;
    v2 = this + 16;
    v3 = (*(int (__thiscall **)(int *, char *))(this->onHold + 16))(this + 16, &a2);
    if ( v3 == -1 )
    return 0;
    v4 = v2[4];
    if ( v3 >= v4 )
    return 0;
    v5 = v4 - 1;
    for ( v2[4] = v5; v3 < v2[4]; *(int *)(v2[1] + 4 * v3 - 4) = *(int *)(v2[1] + 4 * v3) )
    ++v3;
    return 1;
}
}
} // namespace gamemd

// 0x4CA750
namespace gamemd {
int FactoryClass::StubReturn12()
{
return 12;
}
} // namespace gamemd

// 0x4CA760
namespace gamemd {
int FactoryClass::StubReturn116()
{
return 116;
}
} // namespace gamemd

// 0x4CA8E0
namespace gamemd {
int FactoryClass_33::Seek(int a2)
{
{
    return *(int *)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4CA8F0
namespace gamemd {
char FactoryClass_33::AddRef(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int *)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int *)this->Items;
    v5 = *(int *)(a2 + 4) - (int)v4;
    while ( *v4 == *(int *)((char *)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4CA930
namespace gamemd {
char FactoryClass_33::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->FactoryClass_33_field_0x4 )
      {
    v6 = this->FactoryClass_33_field_0x8;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int *)(this->FactoryClass_33_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->FactoryClass_33_field_0x4 = 0;
        }
      }
    this->FactoryClass_33_field_0x4 = v4;
    this->FactoryClass_33_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->ddtor();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4CA9E0
namespace gamemd {
void FactoryClass_33::ddtor()
{
{
    if ( this->FactoryClass_33_field_0x4 && this->IsAllocated )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    this->FactoryClass_33_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->FactoryClass_33_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x4CAA10
namespace gamemd {
int FactoryClass_33::Read(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !(unsigned char)this->FactoryClass_33_field_0xC )
    return 0;
    v3 = this->FactoryClass_33_field_0x8;
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(int **)(this + 4); *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4CAA50
namespace gamemd {
unsigned int FactoryClass_33::Write(int a2)
{
{
    if ( (unsigned char)this->FactoryClass_33_field_0xC )
    return (unsigned int)(a2 - this->FactoryClass_33_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4CAB50
namespace gamemd {
VectorClass * FactoryClass_33::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_TechnoTypeClass_const;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorClass *)this;
}
}
} // namespace gamemd

// 0x636DC0
namespace gamemd {
int FactoryClass::GetState()
{
{
    return this->abstractFlags;
}
}
} // namespace gamemd

// 0x637AA0
namespace gamemd {
char FactoryClass::GetFlag()
{
{
    return DataGlobal_AC4CF4;
}
}
} // namespace gamemd
