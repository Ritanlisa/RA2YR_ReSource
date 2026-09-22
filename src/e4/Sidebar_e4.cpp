// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Sidebar_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/House_e4.hpp"

// 0x4FA350
namespace gamemd {
AbstractClass * * Sidebar::StartSidebarProduction(void * a1, BuildingTypeClass * aP2, HouseClass * aP3, char a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  IUnknown *v6; // ebx
  int v7; // esi
  int v9; // ebp
  FactoryClass *v10; // esi
  int result; // eax
  char v13; // bl
  IUnknown *Status; // eax
  int v19; // ecx
  int v20; // ecx
  char v21; // [esp+23h] [ebp-11h]
  int v22; // [esp+24h] [ebp-10h]
  char *v23; // [esp+28h] [ebp-Ch]
  char v24; // [esp+2Ch] [ebp-8h]
  if ( (int)aP2 >= 0 ) /*0x4fa35f*/
  {
    v6 = (IUnknown *)a1; /*0x4fa36d*/
    int v8 = TechnoTypeClass::GetByTypeAndIndex((int)a1, (int)aP2); /*0x4fa375*/
    if ( a1 == (void *)6 || a1 == (void *)7 ) /*0x4fa382*/
      v22 = *(_DWORD *)(v8 + 3592); /*0x4fa394*/
    else
      v22 = 0; /*0x4fa384*/
    v7 = v22; /*0x4fa398*/
  }
  else
  {
    v6 = (IUnknown *)a1; /*0x4fa361*/
    v7 = 0; /*0x4fa365*/
    v22 = 0; /*0x4fa367*/
  }
  v23 = &v6[-1].__tail_1602E[1]; /*0x4fa3a2*/
  switch ( (unsigned int)v6 ) /*0x4fa3b0*/
  {
    case 1u: /*0x4fa3b0*/
    case 0x28u: /*0x4fa3b0*/
      if ( (_BYTE)aP3 ) /*0x4fa3c9*/
        v21 = *(_BYTE *)(this + 21459); /*0x4fa3d1*/
      else
        v21 = *(_BYTE *)(this + 21458); /*0x4fa3dd*/
      break; /*0x4fa3d5*/
    case 2u: /*0x4fa3b0*/
    case 3u: /*0x4fa3b0*/
      v21 = this->q53D0; /*0x4fa406*/
      break; /*0x4fa40a*/
    case 6u: /*0x4fa3b0*/
    case 7u: /*0x4fa3b0*/
      if ( v7 == 5 ) /*0x4fa3e6*/
        v21 = this->q53D8; /*0x4fa3ee*/
      else
        v21 = this->q53D4; /*0x4fa3fa*/
      break; /*0x4fa3f2*/
    case 0xFu: /*0x4fa3b0*/
    case 0x10u: /*0x4fa3b0*/
      v21 = *(_BYTE *)(this + 21457); /*0x4fa3bd*/
      break; /*0x4fa3c1*/
    default:
      v21 = 0; /*0x4fa40c*/
      break; /*0x4fa40c*/
  }
  Sidebar::Dispatch((_BYTE *)this, v6, (char)aP3, v7, 0); /*0x4fa41c*/
  v9 = TechnoTypeClass::GetByTypeAndIndex((int)v6, (int)aP2); /*0x4fa42a*/
  v24 = 0; /*0x4fa440*/
  if ( !(*(int (__thiscall **)(int, _DWORD, int, int, int))(*(_DWORD *)v9 + 148))(v9, 0, 1, 1, this) ) /*0x4fa438*/
  {
    if ( !a5 || !(*(int (__thiscall **)(int, int, _DWORD, int, int))(*(_DWORD *)v9 + 148))(v9, 1, 0, 1, this) ) /*0x4fa45b*/
    {
LABEL_40:
      Debug::Log(); /*0x4fa533*/
      return 3; /*0x4fa550*/
    }
    v24 = 1; /*0x4fa465*/
  }
  switch ( (unsigned int)v6 ) /*0x4fa47b*/
  {
    case 1u: /*0x4fa47b*/
    case 0x28u: /*0x4fa47b*/
      if ( (_BYTE)aP3 ) /*0x4fa4b0*/
        v10 = *(_DWORD *)(this + 21432); /*0x4fa4b2*/
      FactoryClass *v10 = *(_DWORD *)(this + 21428); /*0x4fa4ba*/
      break; /*0x4fa4b8*/
    case 2u: /*0x4fa47b*/
    case 3u: /*0x4fa47b*/
      v10 = *(_DWORD *)(this + 21420); /*0x4fa4d7*/
      break; /*0x4fa4dd*/
    case 6u: /*0x4fa47b*/
    case 7u: /*0x4fa47b*/
      if ( v7 == 5 ) /*0x4fa4c5*/
        v10 = *(_DWORD *)(this + 21452); /*0x4fa4c7*/
      FactoryClass *v10 = *(_DWORD *)(this + 21436); /*0x4fa4cf*/
      break; /*0x4fa4cd*/
    case 0xFu: /*0x4fa47b*/
    case 0x10u: /*0x4fa47b*/
      v10 = *(_DWORD *)(this + 21424); /*0x4fa482*/
      break; /*0x4fa488*/
    default:
      v10 = 0; /*0x4fa4df*/
      break; /*0x4fa4df*/
  }
  if ( !v10 ) /*0x4fa4e3*/
  {
    int v11 = __2_YAPAXI_Z(0x74u); /*0x4fa4e7*/
    if ( !v11 ) /*0x4fa4f1*/
      goto LABEL_40; /*0x4fa4f1*/
    v10 = TeamTypeClass::Construct(v11); /*0x4fa4fa*/
    if ( !v10 ) /*0x4fa4fe*/
      goto LABEL_40; /*0x4fa4fe*/
  }
  if ( v10->queuedCapacity && !v10->isSuspended && v6 == (IUnknown *)7 ) /*0x4fa531*/
    goto LABEL_40; /*0x4fa531*/
  switch ( (unsigned int)v6 ) /*0x4fa564*/
  {
    case 1u: /*0x4fa564*/
    case 0x28u: /*0x4fa564*/
      if ( (_BYTE)aP3 ) /*0x4fa571*/
        *(_DWORD *)(this + 21432) = v10; /*0x4fa573*/
      else
        *(_DWORD *)(this + 21428) = v10; /*0x4fa57b*/
      break; /*0x4fa579*/
    case 2u: /*0x4fa564*/
    case 3u: /*0x4fa564*/
      *(_DWORD *)(this + 21420) = v10; /*0x4fa5a2*/
      break; /*0x4fa5a2*/
    case 6u: /*0x4fa564*/
    case 7u: /*0x4fa564*/
      if ( v22 == 5 ) /*0x4fa590*/
        *(_DWORD *)(this + 21452) = v10; /*0x4fa592*/
      else
        *(_DWORD *)(this + 21436) = v10; /*0x4fa59a*/
      break; /*0x4fa598*/
    case 0xFu: /*0x4fa564*/
    case 0x10u: /*0x4fa564*/
      *(_DWORD *)(this + 21424) = v10; /*0x4fa583*/
      break; /*0x4fa589*/
    default:
      break;
  }
  v13 = 0; /*0x4fa5a8*/
  if ( v10->isSuspended ) /*0x4fa5a8*/
  {
    int v14 = v10->q058; /*0x4fa5b1*/
    if ( v14 ) /*0x4fa5b6*/
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 132))(v14) == v9 ) /*0x4fa5c2*/
      {
        v13 = 1; /*0x4fa5c4*/
LABEL_55:
        if ( !v10->q050 || a5 || v13 ) /*0x4fa5f6*/
        {
          bool v16 = v10->isSuspended; /*0x4fa622*/
          ProductionClass::StartTimer(v10, v24); /*0x4fa628*/
          if ( !v16 && g_GameMode_Current && *(_BYTE *)(this + 492) ) /*0x4fa63a*/
          {
            int v17 = (*(int (__thiscall **)(_DWORD))(*v10->q058 + 132))(v10->q058); /*0x4fa649*/
  int v18; // eax
            v18 = (int)(54 * ((int)DataGlobal_A8B558 * (int)g_ScenarioState / 0x3Cu)) /*0x4fa67b*/
                / (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 136))(v17);
            if ( v18 >= 53 ) /*0x4fa680*/
              v18 = 53; /*0x4fa682*/
            if ( v21 ) /*0x4fa68d*/
              v10->production = v18; /*0x4fa68f*/
          }
          if ( HouseClass_Player == (IUnknown *)this ) /*0x4fa698*/
            Sidebar::FindProductionType(&DataGlobal_87F7E8, (FactoryClass *)v10, (MouseClass *)a1, (int)aP2); /*0x4fa6aa*/
          return 0; /*0x4fa6b2*/
        }
        else
        {
          Status = (IUnknown *)HouseClass::GetStatus((IUnknown *)a1, 0); /*0x4fa602*/
          Sidebar::ActivateTab((int)&DataGlobal_87F7E8, Status); /*0x4fa60d*/
          return 0; /*0x4fa615*/
        }
      }
    }
  }
  if ( FactoryClass::DemandProduction(v10, v9, (#375 *)this, a5) ) /*0x4fa5d1*/
    goto LABEL_55; /*0x4fa5df*/
  Debug::Log(); /*0x4fa6c4*/
  if ( v10->q050 || v10->q058 ) /*0x4fa6d9*/
    return 3; /*0x4fa807*/
  Debug::Log(); /*0x4fa6ec*/
  Debug::Log(); /*0x4fa6fc*/
  Debug::Log(); /*0x4fa70a*/
  v19 = v10->q058; /*0x4fa70f*/
  if ( v19 ) /*0x4fa717*/
    (*(void (__thiscall **)(int))(*(_DWORD *)v19 + 44))(v19); /*0x4fa71b*/
  Debug::Log(); /*0x4fa729*/
  v20 = v10->q058; /*0x4fa72e*/
  if ( v20 ) /*0x4fa736*/
    (*(void (__thiscall **)(int))(*(_DWORD *)v20 + 64))(v20); /*0x4fa73a*/
  Debug::Log(); /*0x4fa748*/
  Debug::Log(); /*0x4fa758*/
  v10->CopyTo_0(1); /*0x4fa76a*/
  switch ( (unsigned int)v23 ) /*0x4fa782*/
  {
    case 0u: /*0x4fa782*/
    case 0x27u: /*0x4fa782*/
      if ( (_BYTE)aP3 ) /*0x4fa78f*/
        *(_DWORD *)(this + 21432) = 0; /*0x4fa791*/
      else
        *(_DWORD *)(this + 21428) = 0; /*0x4fa7a6*/
      result = 3; /*0x4fa79a*/
      break; /*0x4fa7a3*/
    case 1u: /*0x4fa782*/
    case 2u: /*0x4fa782*/
      *(_DWORD *)(this + 21420) = 0; /*0x4fa801*/
      return 3; /*0x4fa801*/
    case 5u: /*0x4fa782*/
    case 6u: /*0x4fa782*/
      if ( v22 == 5 ) /*0x4fa7d5*/
        *(_DWORD *)(this + 21452) = 0; /*0x4fa7d7*/
      else
        *(_DWORD *)(this + 21436) = 0; /*0x4fa7ec*/
      result = 3; /*0x4fa7e0*/
      break; /*0x4fa7e9*/
    case 0xEu: /*0x4fa782*/
    case 0xFu: /*0x4fa782*/
      *(_DWORD *)(this + 21424) = 0; /*0x4fa7bb*/
      result = 3; /*0x4fa7c4*/
      break; /*0x4fa7cd*/
    default:
      return 3;
  }
  return result; /*0x4fa4a0*/
}
}
} // namespace gamemd

// 0x5007A0
namespace gamemd {
int Sidebar::Dispatch(IUnknown * aP1, char a3, int a4, char a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char result; // al

  result = (_BYTE)aP1 - 1; /*0x5007a5*/
  switch ( (unsigned int)aP1 ) /*0x5007b7*/
  {
    case 1u: /*0x5007b7*/
    case 0x28u: /*0x5007b7*/
      goto LABEL_3;
    case 2u: /*0x5007b7*/
    case 3u: /*0x5007b7*/
      this->q53D0 = a5; /*0x500807*/
      break; /*0x500807*/
    case 6u: /*0x5007b7*/
    case 7u: /*0x5007b7*/
      if ( a4 == 5 ) /*0x5007e5*/
      {
        this->q53D8 = a5; /*0x5007ec*/
      }
      else
      {
        this->q53D4 = a5; /*0x5007fa*/
        result = a5; /*0x5007f5*/
      }
      break; /*0x5007f2*/
    case 0xFu: /*0x5007b7*/
    case 0x10u: /*0x5007b7*/
      *(this + 21457) = a5; /*0x5007be*/
LABEL_3:
      result = a3; /*0x5007c4*/
      if ( a3 ) /*0x5007ca*/
        *(this + 21459) = a5; /*0x5007cc*/
      else
        *(this + 21458) = a5; /*0x5007d6*/
      break; /*0x5007d3*/
    default:
      return result;
  }
  return result; /*0x5007d2*/
}
}
} // namespace gamemd

// 0x533F50
namespace gamemd {
CreateTeamCommand * * Sidebar::ScrollSidebarSkipGame()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  result = g_CommandClassVector_State; /*0x533f50*/
  int v2 = 0; /*0x533f59*/
  if ( g_CommandClassVector_State > 0 ) /*0x533f5f*/
  {
    while ( strcmp( /*0x533f9f*/
              (const char *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)g_CommandClass_Capacity + v2) + 4))(*((_DWORD *)g_CommandClass_Capacity + v2)),
              this) )
    {
      result = g_CommandClassVector_State; /*0x533fa1*/
      if ( ++v2 >= g_CommandClassVector_State ) /*0x533fa9*/
        return result; /*0x533fa9*/
    }
    return (*(int (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)g_CommandClass_Capacity + v2) + 32))( /*0x533fbc*/
             *((_DWORD *)g_CommandClass_Capacity + v2),
             0);
  }
  return result; /*0x533fab*/
}
}
} // namespace gamemd

// 0x636310
namespace gamemd {
TechnoClass * * Sidebar::CancelSidebarProductionQueue()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // ebp
  VectorClass *v4; // edi
  int Value; // eax
  int j; // ebp
  BuildingClass *LeaderIndexTeamClass; // eax
  void *Blocka; // [esp+14h] [ebp-8h] BYREF

  int v2 = this->q014; /*0x636319*/
  for ( i = 0; i < v2; ++i ) /*0x636327*/
  {
    v4 = *(VectorClass **)(this->q008 + 4 * i); /*0x63632c*/
    Value = Array::FindValue((int *)v4, (IUnknown *)*this); /*0x636334*/
    if ( Value == -1 ) /*0x63633c*/
      void * v6 = 0; /*0x63633e*/
    else
      v6 = (void *)*((_DWORD *)v4->Items + Value); /*0x636345*/
    Blocka = v6; /*0x63634a*/
    if ( v6 ) /*0x63634e*/
    {
      FactoryClass::FinishProduction((int)v4, (int)v6); /*0x636353*/
      __3_YAXPAX_Z(*((void **)Blocka + 1)); /*0x636360*/
      int v7 = (*((int (__thiscall **)(VectorClass *, void **))v4->vtable0 + 4))(v4, &Blocka); /*0x636371*/
      if ( v7 != -1 ) /*0x636377*/
        Vector4::EraseAt_Copy(v4, (CCINIClass *)v7); /*0x63637c*/
      __3_YAXPAX_Z(Blocka); /*0x636386*/
      if ( !v4[1].vtable0 && v4 ) /*0x636397*/
        FactoryClass::RemoveFromArrays((int *)v4, 1); /*0x63639d*/
    }
  }
  if ( v2 ) /*0x6363ad*/
  {
    Blocka = (void *)*this; /*0x6363b1*/
    int v8 = *((_DWORD *)Blocka + 135); /*0x6363b5*/
    unsigned int v9 = *(_DWORD *)(v8 + 48); /*0x6363bb*/
    if ( (unsigned __int8)House::IsHumanPlayer((#375 *)v8) && HouseClass_Player.field_0 ) /*0x6363ce*/
      v9 = *(_DWORD *)(HouseClass_Player.field_0 + 48); /*0x6363d0*/
    DecFactoryClassCounter(v9); /*0x6363d5*/
    VectorClass::EraseAt((int *)&g_MatrixTransformState + 6028, (IUnknown *)&Blocka); /*0x6363e4*/
  }
  _DWORD * v10 = this + 1; /*0x6363ec*/
  this->q004->vt_slot_12(); /*0x6363f1*/
  *((_BYTE *)this + 152) = 0; /*0x6363f7*/
  *(this + 35) = -1; /*0x636400*/
  this->q024 = -1; /*0x636406*/
  *(this + 37) = -1; /*0x63640c*/
  *((_BYTE *)this + 153) = 0; /*0x636412*/
  *this = 0; /*0x636419*/
  if ( this ) /*0x63641f*/
  {
    if ( *this ) /*0x636425*/
      BuildingClass::SetPlanningToken((_DWORD *)*this, 0); /*0x63642d*/
    Blocka = this; /*0x636437*/
    if ( !*((_BYTE *)&(&g_MatrixTransformState)[506] + 5) ) /*0x63643d*/
    {
  int v11; // eax
      v11 = ((int (__thiscall *)(CoordStruct **, void **))(*(&g_MatrixTransformState + 6042))[1].Y)( /*0x63644f*/
              &g_MatrixTransformState + 6042,
              &Blocka);
      if ( v11 != -1 ) /*0x636454*/
        Sidebar::RemoveItem(&g_MatrixTransformState + 6042, v11); /*0x63645c*/
    }
    int v12 = this->q014; /*0x636461*/
    for ( j = 0; j < v12; ++j ) /*0x63646f*/
      TeamClass::DestroyAllMembers(*(_DWORD **)(this->q008 + 4 * j), (TechnoClass *)*this); /*0x63647a*/
    if ( v12 ) /*0x63648a*/
    {
      _DWORD * v17 = (_DWORD *)*this; /*0x63648e*/
      LeaderIndexTeamClass = (BuildingClass *)TeamClass::GetLeaderIndex(v17); /*0x636492*/
      DecFactoryClassCounter((unsigned int)LeaderIndexTeamClass); /*0x636499*/
      VectorClass::EraseAt((int *)&g_MatrixTransformState + 6028, (IUnknown *)&v17); /*0x6364a8*/
    }
    (*(void (__thiscall **)(int *))(*v10 + 12))(this + 1); /*0x6364b1*/
    *((_BYTE *)this + 152) = 0; /*0x6364b7*/
    *(this + 35) = -1; /*0x6364be*/
    this->q024 = -1; /*0x6364c4*/
    *(this + 37) = -1; /*0x6364ca*/
    *((_BYTE *)this + 153) = 0; /*0x6364d0*/
    AbstractClass *v15 = (void *)this->q008; /*0x6364d7*/
    *v10 = &vt_VectorClass_PlanningNodeClass; /*0x6364de*/
    if ( v15 ) /*0x6364e4*/
    {
      if ( this->q044 ) /*0x6364e6*/
      {
        __3_YAXPAX_Z(v15); /*0x6364ee*/
        this->q008 = 0; /*0x6364f6*/
      }
    }
    this->q044 = 0; /*0x6364fa*/
    this->q00C = 0; /*0x6364fe*/
    __3_YAXPAX_Z(this); /*0x636501*/
  }
}
}
} // namespace gamemd

// 0x63F040
namespace gamemd {
int Sidebar::RemoveItem(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v2 = this->q010; /*0x63f040*/
  int v3 = a2; /*0x63f043*/
  if ( a2 >= v2 ) /*0x63f049*/
    return 0; /*0x63f06c*/
  int v4 = v2 - 1; /*0x63f04b*/
  this->q010 = v4; /*0x63f04e*/
  if ( a2 < v4 ) /*0x63f051*/
  {
    do /*0x63f064*/
    {
      ++v3; /*0x63f057*/
      *(_DWORD *)(this->q004 + 4 * v3 - 4) = *(_DWORD *)(this->q004 + 4 * v3); /*0x63f05b*/
    }
    while ( v3 < this->q010 ); /*0x63f064*/
  }
  return 1; /*0x63f069*/
}
}
} // namespace gamemd

// 0x63FB20
namespace gamemd {
ObjectClass * * Sidebar::Render(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  if ( (a2 || *(_BYTE *)(this + 5388)) && DataGlobal_884B8D ) /*0x63fb43*/
  {
  int v17; // [esp+8h] [ebp-1Ch]
    *(_BYTE *)(this + 5388) = 0; /*0x63fb49*/
    g_TooltipActive = 1; /*0x63fb55*/
    if ( *((_DWORD *)g_ScenarioClass_Instance + 3374) ) /*0x63fb5d*/
      int v3 = 0; /*0x63fb70*/
    else
      v3 = 5; /*0x63fb69*/
    int v16 = *((_DWORD *)g_ScenarioClass_Instance + 3374); /*0x63fb78*/
    int v4 = g_DSurface_SidebarBounds + 69; /*0x63fb80*/
    int * v5 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)DSurface_Sidebar + 120))(DSurface_Sidebar, &v16); /*0x63fb8c*/
    ObjectClass *v6 = *(_DWORD *)(this + 5424); /*0x63fb91*/
  int v18[4]; // [esp+14h] [ebp-10h] BYREF
    v18[0] = *v5; /*0x63fb97*/
    v18[1] = v5[1]; /*0x63fb9e*/
    v18[2] = v5[2]; /*0x63fba5*/
    v18[3] = v5[3]; /*0x63fbb1*/
    int v7 = *(_DWORD *)(this + 5428); /*0x63fbc6*/
    int v8 = *(_DWORD *)(this + 5420); /*0x63fbce*/
    if ( (DataGlobal_B0B504 + 3) / 3 - v7 - v6 - v8 > 0 ) /*0x63fbdc*/
    {
      int v9 = (DataGlobal_B0B504 + 3) / 3 - v7 - v6 - v8; /*0x63fbde*/
      do /*0x63fc24*/
      {
        v16 = v3; /*0x63fc13*/
        v17 = v4; /*0x63fc17*/
        DrawToSurfaceSHP( /*0x63fc1b*/
          DSurface_Sidebar,
          g_SidebarConfig,
          (int)DataGlobal_AC4E74,
          0,
          &v16,
          v18,
          1024,
          0,
          0,
          0,
          1000,
          0,
          0,
          0,
          0,
          0);
        v4 += 3; /*0x63fc20*/
        --v9; /*0x63fc23*/
      }
      while ( v9 ); /*0x63fc24*/
    }
    int v10 = *(_DWORD *)(this + 5404); /*0x63fc26*/
    int v11 = 0; /*0x63fc2c*/
    if ( v10 > 0 && (v10 & 1) == 0 ) /*0x63fc3e*/
    {
      v16 = v3; /*0x63fc75*/
      v17 = v4; /*0x63fc79*/
      DrawToSurfaceSHP( /*0x63fc7d*/
        DSurface_Sidebar,
        g_SidebarConfig,
        (int)DataGlobal_AC4E74,
        4u,
        &v16,
        v18,
        1024,
        0,
        0,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
      v4 += 3; /*0x63fc82*/
      v11 = 1; /*0x63fc85*/
    }
    int v12 = *(_DWORD *)(this + 5420); /*0x63fc8a*/
    if ( v12 > 0 ) /*0x63fc92*/
    {
      if ( v11 < v12 ) /*0x63fc96*/
      {
        do /*0x63fce4*/
        {
          v16 = v3; /*0x63fccb*/
          v17 = v4; /*0x63fccf*/
          DrawToSurfaceSHP( /*0x63fcd3*/
            DSurface_Sidebar,
            g_SidebarConfig,
            (int)DataGlobal_AC4E74,
            1u,
            &v16,
            v18,
            1024,
            0,
            0,
            0,
            1000,
            0,
            0,
            0,
            0,
            0);
          v4 += 3; /*0x63fcde*/
          ++v11; /*0x63fce1*/
        }
        while ( v11 < *(_DWORD *)(this + 5420) ); /*0x63fce4*/
      }
      v11 = 0; /*0x63fce6*/
    }
    ObjectClass *v13 = *(_DWORD *)(this + 5424); /*0x63fce8*/
    if ( v13 > 0 ) /*0x63fcf0*/
    {
      if ( v11 < v13 ) /*0x63fcf4*/
      {
        do /*0x63fd42*/
        {
          v16 = v3; /*0x63fd29*/
          v17 = v4; /*0x63fd2d*/
          DrawToSurfaceSHP( /*0x63fd31*/
            DSurface_Sidebar,
            g_SidebarConfig,
            (int)DataGlobal_AC4E74,
            2u,
            &v16,
            v18,
            1024,
            0,
            0,
            0,
            1000,
            0,
            0,
            0,
            0,
            0);
          v4 += 3; /*0x63fd3c*/
          ++v11; /*0x63fd3f*/
        }
        while ( v11 < *(_DWORD *)(this + 5424) ); /*0x63fd42*/
      }
      v11 = 0; /*0x63fd44*/
    }
    int v14 = *(_DWORD *)(this + 5428); /*0x63fd46*/
    if ( v14 > 0 && v11 < v14 ) /*0x63fd52*/
    {
      do /*0x63fda0*/
      {
        v16 = v3; /*0x63fd87*/
        v17 = v4; /*0x63fd8b*/
        DrawToSurfaceSHP( /*0x63fd8f*/
          DSurface_Sidebar,
          g_SidebarConfig,
          (int)DataGlobal_AC4E74,
          3u,
          &v16,
          v18,
          1024,
          0,
          0,
          0,
          1000,
          0,
          0,
          0,
          0,
          0);
        v4 += 3; /*0x63fd9a*/
        ++v11; /*0x63fd9d*/
      }
      while ( v11 < *(_DWORD *)(this + 5428) ); /*0x63fda0*/
    }
  }
  return RadarClass::Destru_vt16(a2); /*0x63fdb1*/
}
}
} // namespace gamemd

// 0x6A60A0
namespace gamemd {
int Sidebar::ActivateTab(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  IUnknown *result; // eax

  result = aP1; /*0x6a60a0*/
  if ( aP1 == this->q539C ) /*0x6a60ac*/
  {
    this->__pad_53A6 = 1; /*0x6a60b8*/
    *(_BYTE *)(this + 3988 * (_DWORD)aP1 + 5504) = 1; /*0x6a60c6*/
    return MapClass::MarkForRedraw(&DataGlobal_87F7E8, 0); /*0x6a60d2*/
  }
  return (int)result; /*0x6a60d8*/
}
}
} // namespace gamemd

// 0x6A70E0
namespace gamemd {
AbstractClass * * Sidebar::FlushSidebarTooltip(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  struct tagPOINT Point; // [esp+1Ch] [ebp-38h] BYREF
  int v10; // [esp+24h] [ebp-30h] BYREF
  LONG y; // [esp+28h] [ebp-2Ch]
  int v12; // [esp+2Ch] [ebp-28h]
  int v13; // [esp+30h] [ebp-24h]
  int v14; // [esp+34h] [ebp-20h] BYREF
  LONG v15; // [esp+38h] [ebp-1Ch]
  int v16; // [esp+3Ch] [ebp-18h]
  int v17; // [esp+40h] [ebp-14h]
  struct tagRECT Rect; // [esp+44h] [ebp-10h] BYREF

  if ( !*(this + 21413) || !g_WTFMode || !g_BounceClassInit ) /*0x6a7109*/
    goto LABEL_25; /*0x6a7109*/
  GetClientRect(g_hWnd, &Rect); /*0x6a711b*/
  Point.x = Rect.left; /*0x6a7129*/
  Point.y = Rect.top; /*0x6a7137*/
  ClientToScreen(g_hWnd, &Point); /*0x6a713d*/
  if ( g_TooltipActive || a2 ) /*0x6a7153*/
  {
    g_TooltipActive = 1; /*0x6a723a*/
    goto LABEL_13; /*0x6a723a*/
  }
  g_TooltipActive = 0; /*0x6a7166*/
  if ( DataGlobal_8809F4 != DataGlobal_B07DC8
    || DataGlobal_8809F8 != DataGlobal_B07DCC
    || DataGlobal_8809FC != DataGlobal_B07DD0
    || DataGlobal_880A00 != DataGlobal_B07DD4 )
  {
LABEL_13:
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)g_WWMouseClass_Instance + 60))(g_WWMouseClass_Instance, DSurface_Sidebar, 1); /*0x6a7241*/
    if ( DataGlobal_8809F4 == DataGlobal_B07DC8
      && DataGlobal_8809F8 == DataGlobal_B07DCC
      && DataGlobal_8809FC == DataGlobal_B07DD0
      && DataGlobal_880A00 == DataGlobal_B07DD4
      && !a2 )
    {
      if ( *(this + 21416) )
      {
        y = Point.y; /*0x6a72d1*/
        v10 = Point.x + (DataGlobal_A8EB7C != 0 ? g_Map_VisibleRectOffset : 0);
        v14 = 0; /*0x6a72f3*/
        v15 = 0; /*0x6a72f7*/
        v16 = DataGlobal_886F98; /*0x6a72fb*/
        v17 = 16; /*0x6a72ff*/
        v12 = DataGlobal_886F98; /*0x6a7303*/
        v13 = 16; /*0x6a7307*/
        (*(void (__thiscall **)(int, int *, int, int *, _DWORD, int))(*(_DWORD *)g_DSurface_Primary + 8))( /*0x6a7312*/
          g_DSurface_Primary,
          &v10,
          DSurface_Sidebar,
          &v14,
          0,
          1);
        *(this + 21416) = 0; /*0x6a7315*/
      }
      int v3 = DataGlobal_886F98; /*0x6a7332*/
      v17 = g_DSurface_ViewBounds; /*0x6a733e*/
      v14 = 0; /*0x6a7348*/
      int v4 = g_DSurface_SidebarBounds + Point.y; /*0x6a734e*/
      v15 = g_DSurface_SidebarBounds; /*0x6a7357*/
      v16 = DataGlobal_886F98; /*0x6a735b*/
      int v5 = (DataGlobal_A8EB7C != 0 ? g_Map_VisibleRectOffset : 0) + Point.x;
      int v6 = (*(int (__thiscall **)(int))(*(_DWORD *)DSurface_Sidebar + 128))(DSurface_Sidebar); /*0x6a7363*/
      v10 = v5; /*0x6a7386*/
      y = v4; /*0x6a738a*/
      v12 = v3; /*0x6a738e*/
      v13 = v6 - g_DSurface_SidebarBounds; /*0x6a7392*/
      (*(void (__thiscall **)(int, int *, int, int *, _DWORD, int))(*(_DWORD *)g_DSurface_Primary + 8))( /*0x6a739d*/
        g_DSurface_Primary,
        &v10,
        DSurface_Sidebar,
        &v14,
        0,
        1);
    }
    else if ( g_TooltipActive )
    {
      int v7 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)DSurface_Sidebar + 120))(DSurface_Sidebar, &v10); /*0x6a73be*/
      v14 = 0; /*0x6a73dd*/
      v15 = 0; /*0x6a73e5*/
      v16 = *(_DWORD *)(v7 + 8); /*0x6a73ec*/
      int v8 = *(_DWORD *)(v7 + 12); /*0x6a73f0*/
      y = Point.y; /*0x6a73fd*/
      v10 = Point.x + (DataGlobal_A8EB7C != 0 ? g_Map_VisibleRectOffset : 0);
      v17 = v8; /*0x6a741b*/
      v12 = v16; /*0x6a741f*/
      v13 = v8; /*0x6a7423*/
      (*(void (__thiscall **)(int, int *, int, int *, _DWORD, int))(*(_DWORD *)g_DSurface_Primary + 8))( /*0x6a742e*/
        g_DSurface_Primary,
        &v10,
        DSurface_Sidebar,
        &v14,
        0,
        1);
    }
    else
    {
      v15 = Point.y + DataGlobal_8809F8; /*0x6a7458*/
      v14 = Point.x + DataGlobal_8809F4 + (DataGlobal_A8EB7C != 0 ? g_Map_VisibleRectOffset : 0);
      v16 = DataGlobal_8809FC; /*0x6a746f*/
      v17 = DataGlobal_880A00; /*0x6a7473*/
      (*(void (__thiscall **)(int, int *, int, int *, _DWORD, int))(*(_DWORD *)g_DSurface_Primary + 8))( /*0x6a747e*/
        g_DSurface_Primary,
        &v14,
        DSurface_Sidebar,
        &DataGlobal_8809F4,
        0,
        1);
    }
    goto LABEL_24; /*0x6a73a0*/
  }
  if ( *(this + 21416) )
  {
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)g_WWMouseClass_Instance + 60))(g_WWMouseClass_Instance, DSurface_Sidebar, 1); /*0x6a71c7*/
    v15 = Point.y; /*0x6a71eb*/
    v14 = Point.x + (DataGlobal_A8EB7C != 0 ? g_Map_VisibleRectOffset : 0);
    v10 = 0; /*0x6a720d*/
    y = 0; /*0x6a7211*/
    v12 = DataGlobal_886F98; /*0x6a7215*/
    v13 = 16; /*0x6a7219*/
    v16 = DataGlobal_886F98; /*0x6a721d*/
    v17 = 16; /*0x6a7221*/
    (*(void (__thiscall **)(int, int *, int, int *, _DWORD, int))(*(_DWORD *)g_DSurface_Primary + 8))( /*0x6a722c*/
      g_DSurface_Primary,
      &v14,
      DSurface_Sidebar,
      &v10,
      0,
      1);
    *(this + 21416) = 0; /*0x6a722f*/
LABEL_24:
    DataGlobal_B0B519 = 1; /*0x6a7481*/
  }
LABEL_25:
  g_TooltipActive = 0; /*0x6a7488*/
}
}
} // namespace gamemd

// 0x6A9540
namespace gamemd {
void Sidebar_UpdateProductionDisplay()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char result; // al
  IUnknown *v6; // ebx
  IUnknown *v7; // ebp
  IUnknown *v23; // ebx
  char ShouldDisableCameo; // al
  int Member09; // eax
  IUnknown *v34; // eax
  int eax73; // eax
  CampaignScore *v37; // ebx
  _DWORD *TextBoundingRect; // eax
  wchar_t *StringCSF; // ebp
  int eax100; // eax
  ConvertClass *v51; // eax
  int eax108; // eax
  ConvertClass *v56; // esi
  int updated; // eax
  ObjectClass *v62; // esi
  wchar_t *v64; // eax
  wchar_t *v65; // eax
  wchar_t *v66; // eax
  wchar_t *v67; // eax
  wchar_t *v68; // eax
  IUnknown *v69; // [esp-Ah] [ebp-494h]
  CampaignScore *v70; // [esp-2h] [ebp-48Ch]
  CampaignScore *v71; // [esp-2h] [ebp-48Ch]
  CampaignScore *v72; // [esp-2h] [ebp-48Ch]
  __int16 v73; // [esp+10h] [ebp-47Ah]
  bool IsCliffWall; // [esp+12h] [ebp-478h]
  int *BuildLimit; // [esp+16h] [ebp-474h]
  IUnknown *aP1; // [esp+32h] [ebp-458h]
  int ProductionState; // [esp+36h] [ebp-454h]
  size_t BufferCount; // [esp+3Eh] [ebp-44Ch]
  ConvertClass *aP2; // [esp+46h] [ebp-444h]
  int i; // [esp+4Eh] [ebp-43Ch]
  ConvertClass aP3; // [esp+52h] [ebp-438h] BYREF
  wchar_t v98[20]; // [esp+1EAh] [ebp-2A0h] BYREF
  wchar_t v99[20]; // [esp+212h] [ebp-278h] BYREF
  wchar_t Format[20]; // [esp+23Ah] [ebp-250h] BYREF
  wchar_t v101[20]; // [esp+262h] [ebp-228h] BYREF
  CampaignScore Buffer[14]; // [esp+28Ah] [ebp-200h] BYREF

  int v84 = a1;
  result = *(_BYTE *)(a1 + 28);
  if ( result )
  {
    if ( *(_BYTE *)(a1 + 60) || (result = a3) != 0 )
    {
  int v86; // [esp+2Ah] [ebp-460h]
  int v82; // [esp+1Ah] [ebp-470h] BYREF
      v70 = a2;
      *(_BYTE *)(a1 + 60) = 0;
      stru_B05488[24720] = 1;
      *(_DWORD *)aP3[0] = 0;
      *(_DWORD *)&aP3.field_2[2] = 0;
      *(_DWORD *)&aP3[8] = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374[44940] + 124))(*(_DWORD *)&stru_87C374[44940]);
      int v5 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374[44940] + 128))(*(_DWORD *)&stru_87C374[44940]);
      v6 = (IUnknown *)HouseClass_Player.field_0;
      v7 = (IUnknown *)*(&g_MatrixTransformState + 2274);
      *(_DWORD *)&aP3[12] = v5;
      int v8 = 0;
      char v79 = 0;
      if ( (CoordStruct *)HouseClass_Player.field_0 == *(&g_MatrixTransformState + 2274) )
        v8 = *(_DWORD *)(a1 + 84);
      int v9 = *(_DWORD *)(a1 + 84);
      if ( v8 < v9 )
      {
        _DWORD * v10 = (_DWORD *)(a1 + 4 * (v8 + 4 * (3 * v8 + 6) + 2));
        while ( *v10 != 1 && *v10 != 2 )
        {
          ++v8;
          v10 += 13;
          if ( v8 >= v9 )
            goto LABEL_13;
        }
        v79 = 1;
      }
LABEL_13:
      int v11 = 26;
      if ( *(_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 13496) )
        v11 = 18;
      int v85 = 0;
  int v12; // eax
      v12 = (*(_BYTE *)(a1 + 63) != 0)
          + (*(_DWORD *)&stru_87C374[44072]
           - *(_DWORD *)&stru_B05488[24688]
           - v11
           + *(_DWORD *)&stru_87C374[44064]
           - 7)
          / 50;
      int v92 = v12;
      if ( (CoordStruct *)HouseClass_Player.field_0 != *(&g_MatrixTransformState + 2274) )
      {
        if ( v12 > 0 )
        {
          do
          {
            for ( i = 0; i < 2; ++i )
            {
              char v78 = a3;
              int v13 = *(_DWORD *)(v84 + 68);
              ProductionState = 0;
              aP2 = 0;
              v86 = 0;
              BufferCount = 0;
              int v14 = *(_DWORD *)(v84 + 32);
              int v90 = i + 2 * (v13 + v85);
              int v15 = v14 + i * *(_DWORD *)&stru_B05488[24692] - *(_DWORD *)&stru_87C374[44060];
              char v16 = 0;
              v73 = 0;
              int v17 = v85 * *(_DWORD *)&stru_B05488[24696] + *(_DWORD *)(v84 + 36) + 1;
              int v18 = *(_DWORD *)(v84 + 56);
              IsCliffWall = 0;
              int v94 = v17;
              int v19 = 56 * (i + 2 * v85 + 60 * v18) + 11566720;
              if ( *(_BYTE *)(v84 + 63) )
              {
                v17 += *(_DWORD *)(v84 + 76) - *(_DWORD *)&stru_B05488[24696];
                v94 = v17;
              }
              int v20 = *(_DWORD *)(v84 + 84);
              int * v80 = 0;
              aP1 = 0;
              if ( v90 >= v20 )
              {
                LOBYTE(v73) = 0;
              }
              else
              {
                if ( !*(_BYTE *)(v19 + 52) || (HIBYTE(v73) = 1, HouseClass_Player[45136]) )
                  HIBYTE(v73) = 0;
                int v21 = *(_DWORD *)(v84 + 52 * v90 + 92);
                int * v22 = (int *)(v84 + 52 * v90);
                int * v87 = v22;
                if ( v21 == 31 )
                {
                  unsigned int v31 = v22[22];
                  int v32 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player[42472] + 4 * v31);
                  v80 = *(int **)(v32 + 96);
                  if ( v31 >= *(_DWORD *)&HouseClass_Player[42484] )
                    aP2 = 0;
                  else
                    aP2 = *(ConvertClass **)(v32 + 184);
                  LOBYTE(v73) = 1;
                  IsCliffWall = !SuperClass::ShouldDrawProgress(*(_DWORD *)(*(_DWORD *)(HouseClass_Player.field_0 + 600)
                                                                          + 4 * v31));
                  BufferCount = (size_t)SuperClass::NameReadiness(*(_DWORD *)(*(_DWORD *)(HouseClass_Player.field_0 + 600)
                                                                            + 4 * v31));
                  ProductionState = SidebarClass::GetProductionState(*(_DWORD *)(*(_DWORD *)(HouseClass_Player.field_0
                                                                                           + 600)
                                                                               + 4 * v31));
                  v16 = 0;
                  v78 = 1;
                }
                else
                {
                  v23 = (IUnknown *)TechnoTypeClass::GetByTypeAndIndex(v21, v22[22]);
                  aP1 = v23;
                  if ( v23 )
                  {
  int v27; // ecx
                    v80 = (int *)v23->field_60;
                    char v77 = 0;
                    if ( (*(int (__thiscall **)(IUnknown *))(v23->field_0 + 44))(v23) == 7 && v79
                      || !(*(int (__thiscall **)(IUnknown *, int, int, int, int))(v23->field_0 + 148))(
                            v23,
                            1,
                            1,
                            1,
                            HouseClass_Player.field_0)
                      || (v86 = TechnoTypeClass::GetByTypeAndIndex(v87[23], v87[22]),
  bool v74; // [esp+10h] [ebp-47Ah]
                          v74 = HouseClass::CanBuild(HouseClass_Player.field_0, (IUnknown *)v86, 0, 0) == -1,
                          ShouldDisableCameo = HouseClass::ShouldDisableCameo(HouseClass_Player.field_0, v86),
                          v74)
                      || ShouldDisableCameo )
                    {
                      v77 = 1;
                    }
                    aP2 = (ConvertClass *)(*(int (__thiscall **)(IUnknown *))(v23->field_0 + 152))(v23);
                    v86 = v87[25];
                    if ( !v86 )
                    {
                      v16 = v77;
                      LOBYTE(v73) = 0;
                      _DWORD * v28 = (_DWORD *)(v84 + 4 * (v90 + 4 * (3 * v90 + 6) + 2));
                      switch ( *v28 )
                      {
                        case 0:
                          if ( a3 )
                            goto LABEL_59;
                          continue;
                        case 1:
                          Member09 = 0;
                          v78 = 1;
                          LOBYTE(v73) = 1;
                          if ( *v28 != 1 )
                            goto LABEL_45;
                          v27 = v87[27];
                          goto LABEL_43;
                        case 2:
                          int v29 = 0;
                          LOBYTE(v73) = 1;
                          IsCliffWall = 0;
                          v16 = 1;
                          if ( *v28 == 1 )
                          {
                            int v30 = v87[27];
                            if ( v30 > 0 )
                              v29 = v30 / 2;
                          }
                          ProductionState = v29;
                          goto LABEL_59;
                        case 3:
                          LOBYTE(v73) = 1;
                          IsCliffWall = 1;
                          v16 = 0;
                          goto LABEL_59;
                        default:
                          goto LABEL_59;
                      }
                    }
                    LOBYTE(v73) = 1;
                    IsCliffWall = ObjectClass::IsCliffWall((_DWORD *)v86);
                    if ( IsCliffWall )
                      BufferCount = (size_t)GetStringCSF(g_Str_TXT_READY, 0, &stru_830620[62628], 3411);
                    else
                      v78 = 1;
                    Member09 = 0;
                    _DWORD * v26 = (_DWORD *)v87[25];
                    if ( v26 )
                      Member09 = ObjectClass::GetMember09(v26);
                    if ( *(_DWORD *)(v84 + 4 * (v90 + 4 * (3 * v90 + 6) + 2)) == 1 )
                    {
                      v27 = v87[27];
LABEL_43:
                      if ( v27 > Member09 )
                        Member09 = (v27 + Member09) / 2;
                    }
LABEL_45:
                    ProductionState = Member09;
                  }
                  v16 = 0;
                }
              }
LABEL_59:
              *(_DWORD *)&aP3[88] = 0;
              *(_DWORD *)&aP3[92] = 0;
              *(_DWORD *)&aP3[96] = v15 + 60;
              *(_DWORD *)&aP3[100] = v17 + 48;
              if ( v78 )
              {
                if ( aP2 )
                {
                  *(_DWORD *)&aP3[128] = v15;
                  *(_DWORD *)&aP3[132] = v17;
                  DrawToSurfaceSHP(
                    *(int *)&stru_87C374[44940],
                    *(int *)&stru_87C374[13116],
                    aP2,
                    0,
                    (ConvertClass *)&aP3[128],
                    (ConvertClass *)&aP3[88],
                    (ConvertClass *)0x400,
                    0,
                    0,
                    0,
                    (ConvertClass *)0x3E8,
                    0,
                    0,
                    0,
                    0,
                    0);
                }
                if ( HIBYTE(v73) )
                {
                  *(_DWORD *)&aP3[152] = v15;
                  *(_DWORD *)&aP3[156] = v17;
                  *(_DWORD *)&aP3[160] = 60;
                  *(_DWORD *)&aP3[164] = 48;
                  BYTE2(v82) = stru_B05488[42390];
                  int v33 = **(_DWORD **)&stru_87C374[44940];
                  LOWORD(v82) = *(_WORD *)&stru_B05488[42388];
                  (*(void (__thiscall **)(_DWORD, char *, char *, int))(v33 + 84))(
                    *(_DWORD *)&stru_87C374[44940],
                    &aP3[88],
                    &aP3[152],
                    ((unsigned __int8)stru_B05488[42388] >> stru_89E138[11420] << stru_89E138[11416])
                  | ((unsigned __int8)stru_B05488[42389] >> stru_89E138[11436] << stru_89E138[11432])
                  | ((unsigned __int8)stru_B05488[42390] >> stru_89E138[11428] << stru_89E138[11424]));
                }
                if ( v16 )
                {
                  *(_DWORD *)&aP3[144] = v15;
                  *(_DWORD *)&aP3[148] = v17;
                  DrawToSurfaceSHP(
                    *(int *)&stru_87C374[44940],
                    *(int *)&stru_87C374[13144],
                    *(ConvertClass **)&stru_B05488[10040],
                    0,
                    (ConvertClass *)&aP3[144],
                    (ConvertClass *)&aP3[88],
                    (ConvertClass *)0x401,
                    0,
                    0,
                    0,
                    (ConvertClass *)0x3E8,
                    0,
                    0,
                    0,
                    0,
                    0);
                }
                if ( *(_DWORD *)(v84 + 52 * v90 + 136) > *(int *)&HouseClass_Player[45112]
                  && *(_DWORD *)&HouseClass_Player[45112] % 16 > 8 )
                {
                  *(_DWORD *)&aP3[120] = v15;
                  *(_DWORD *)&aP3[124] = v17;
                  DrawToSurfaceSHP(
                    *(int *)&stru_87C374[44940],
                    *(int *)&stru_87C374[13144],
                    *(ConvertClass **)&stru_B05488[10040],
                    0,
                    (ConvertClass *)&aP3[120],
                    (ConvertClass *)&aP3[88],
                    (ConvertClass *)0x404,
                    0,
                    0,
                    0,
                    (ConvertClass *)0x3E8,
                    0,
                    0,
                    0,
                    0,
                    0);
                }
                if ( v80 )
                {
                  *(_DWORD *)&aP3[140] = v17 + 36;
                  *(_DWORD *)&aP3[136] = v15;
                  UI_Update_6AC480((int)v80, (int *)&aP3[136], &aP3, 60);
                }
                char v75 = 0;
                v34 = aP1;
  int v35; // edi
                v35 = ((unsigned __int8)stru_B05488[42388] >> stru_89E138[11420] << stru_89E138[11416])
                    | ((unsigned __int8)stru_B05488[42389] >> stru_89E138[11436] << stru_89E138[11432])
                    | ((unsigned __int8)stru_B05488[42390] >> stru_89E138[11428] << stru_89E138[11424]);
                if ( aP1 )
                {
                  LOBYTE(v34) = aP1->__pad_BC0[270];
                  v69 = v34;
                  int v36 = (*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 44))(aP1);
                  BuildLimit = (int *)HouseClass::GetBuildLimit(HouseClass_Player.field_0, v36, v69, 0);
                  if ( BuildLimit )
                  {
                    eax73 = FactoryClass::CountType(BuildLimit, aP1);
                    v37 = (CampaignScore *)eax73;
                    if ( eax73 > 1
                      || eax73 > 0
  int v39; // ecx
                      && ((v39 = BuildLimit[22]) == 0
                       || (*(int (__thiscall **)(int))(*(_DWORD *)v39 + 132))(v39)
                       && (IUnknown *)(*(int (__thiscall **)(int))(*(_DWORD *)BuildLimit[22] + 132))(BuildLimit[22]) != aP1) )
                    {
                      swprintf((wchar_t *const)Buffer, (const size_t)&g_Str_Fmt_PctD, (const wchar_t *const)v37, v70);
                      *(_DWORD *)&aP3[116] = v17 + 1;
                      *(_DWORD *)&aP3[112] = v15 + 60;
                      TextBoundingRect = GetTextBoundingRect(&aP3[360], Buffer, v15 + 60, v17 + 1, 578, 2, 1);
                      *(_DWORD *)&aP3[168] = *TextBoundingRect;
                      *(_DWORD *)&aP3[172] = TextBoundingRect[1];
                      *(_DWORD *)&aP3[176] = TextBoundingRect[2];
                      *(_DWORD *)&aP3[180] = TextBoundingRect[3];
                      DSurface::FillRectWithColor(
                        (int *)&aP3[168],
                        *(ObjectClass **)&stru_87C374[44940],
                        0,
                        0xAFu);
                      TextRenderer::Printf(
                        (ConvertClass *)&aP3[184],
                        (size_t)&g_Str_Fmt_PctD,
                        *(ObjectClass **)&stru_87C374[44940],
                        &aP3,
                        (int)&aP3[112],
                        v35,
                        0,
                        578,
                        v37);
                      v75 = 1;
                    }
                  }
                }
                if ( (_BYTE)v73 )
                {
                  if ( BufferCount )
                  {
                    *(_DWORD *)&aP3[108] = v17 + 1;
                    *(_DWORD *)&aP3[104] = v15 + 30;
  _DWORD *v41; // eax
                    v41 = GetTextBoundingRect(
                            &aP3.field_178,
                            (CampaignScore *)BufferCount,
                            v15 + 30,
                            v17 + 1,
                            322,
                            2,
                            1);
                    *(_DWORD *)&aP3[56] = *v41;
                    *(_DWORD *)&aP3[60] = v41[1];
                    *(_DWORD *)&aP3[64] = v41[2];
                    *(_DWORD *)&aP3[68] = v41[3];
                    DSurface::FillRectWithColor(
                      (int *)&aP3[56],
                      *(ObjectClass **)&stru_87C374[44940],
                      0,
                      0xAFu);
                    TextRenderer::Printf(
                      (ConvertClass *)&aP3[200],
                      BufferCount,
                      *(ObjectClass **)&stru_87C374[44940],
                      &aP3,
                      (int)&aP3[104],
                      v35,
                      0,
                      322,
                      v70);
                  }
                  if ( !IsCliffWall )
                  {
                    if ( (*(_DWORD *)&aP3[16] = v15,
                          *(_DWORD *)&aP3[20] = v17,
                          DrawToSurfaceSHP(
                            *(int *)&stru_87C374[44940],
                            *(int *)&stru_87C374[13144],
                            *(ConvertClass **)&stru_B05488[24572],
                            ProductionState + 1,
                            (ConvertClass *)&aP3[16],
                            (ConvertClass *)&aP3[88],
                            (ConvertClass *)0x404,
                            0,
                            0,
                            0,
                            (ConvertClass *)0x3E8,
                            0,
                            0,
                            0,
                            0,
                            0),
                          v86)
                      && (!*(_DWORD *)(v86 + 56) || *(_BYTE *)(v86 + 112))
                      || *(_DWORD *)(v84 + 4 * (v90 + 4 * (3 * v90 + 6) + 2)) == 2 )
                    {
                      StringCSF = GetStringCSF(
                                    (wchar_t *)&stru_830620[62732],
                                    0,
                                    &stru_830620[62628],
                                    3636);
                      if ( v75 )
                      {
                        *(_DWORD *)&aP3[24] = v15 + 2;
                        *(_DWORD *)&aP3[28] = v94 + 1;
  int v97[4]; // [esp+1DAh] [ebp-2B0h] BYREF
                        _DWORD * v43 = GetTextBoundingRect(v97, (CampaignScore *)StringCSF, v15 + 2, v94 + 1, 66, 2, 1);
                        *(_DWORD *)&aP3[72] = *v43;
                        *(_DWORD *)&aP3[76] = v43[1];
                        *(_DWORD *)&aP3[80] = v43[2];
                        *(_DWORD *)&aP3[84] = v43[3];
                        DSurface::FillRectWithColor(
                          (int *)&aP3[72],
                          *(ObjectClass **)&stru_87C374[44940],
                          0,
                          0xAFu);
                        TextRenderer::Printf(
                          (ConvertClass *)&aP3[208],
                          (size_t)StringCSF,
                          *(ObjectClass **)&stru_87C374[44940],
                          &aP3,
                          (int)&aP3[24],
                          v35,
                          0,
                          66,
                          v70);
                      }
                      else
                      {
                        *(_DWORD *)&aP3[32] = v15 + 30;
                        *(_DWORD *)&aP3[36] = v94 + 1;
  _DWORD *v44; // eax
                        v44 = GetTextBoundingRect(
                                &aP3[344],
                                (CampaignScore *)StringCSF,
                                v15 + 30,
                                v94 + 1,
                                322,
                                2,
                                1);
                        *(_DWORD *)&aP3[40] = *v44;
                        *(_DWORD *)&aP3[44] = v44[1];
                        *(_DWORD *)&aP3[48] = v44[2];
                        *(_DWORD *)&aP3[52] = v44[3];
                        DSurface::FillRectWithColor(
                          (int *)&aP3[40],
                          *(ObjectClass **)&stru_87C374[44940],
                          0,
                          0xAFu);
                        TextRenderer::Printf(
                          (ConvertClass *)&aP3[192],
                          (size_t)StringCSF,
                          *(ObjectClass **)&stru_87C374[44940],
                          &aP3,
                          (int)&aP3[32],
                          v35,
                          0,
                          322,
                          v70);
                      }
                    }
                  }
                }
              }
            }
            ++v85;
          }
          while ( v85 < v92 );
          v7 = (IUnknown *)*(&g_MatrixTransformState + 2274);
          v6 = (IUnknown *)HouseClass_Player.field_0;
        }
        if ( v6 != v7 )
        {
LABEL_135:
          result = v84;
          *(_DWORD *)(v84 + 80) = *(_DWORD *)(v84 + 76);
          return result;
        }
        v12 = v92;
      }
      v85 = 0;
      v86 = v12 / 2;
      if ( v12 / 2 > 0 )
      {
        while ( 1 )
        {
          int v45 = *(_DWORD *)(v84 + 68) + v85;
          int v46 = *(_DWORD *)(v84 + 36) + 2 * v85 * *(_DWORD *)&stru_B05488[24696] + 1;
          int v47 = *(_DWORD *)(v84 + 32) - *(_DWORD *)&stru_87C374[44060];
          if ( v45 >= *(int *)&stru_87C374[35204] )
            goto LABEL_135;
          v92 = *(_DWORD *)&stru_87C374[22428][4 * v45 + 12420];
          int v48 = v92;
          if ( !v92 )
            goto LABEL_135;
          int v49 = *(_DWORD *)(v92 + 52);
          if ( v49 )
          {
            int v50 = *(_DWORD *)(v49 + 188);
            if ( !v50 )
            {
              v51 = *(ConvertClass **)&stru_B05488[24584];
LABEL_105:
              if ( v51 )
              {
                int v53 = v47 + *(__int16 *)v51->field_2;
                *(_DWORD *)&aP3[40] = 0;
                *(_DWORD *)&aP3[48] = v53;
                *(_DWORD *)&aP3[44] = 0;
                int v54 = v46 + *(__int16 *)&v51->field_2[2];
                *(_DWORD *)&aP3[32] = v47;
                *(_DWORD *)&aP3[52] = v54;
                *(_DWORD *)&aP3[36] = v46;
                DrawToSurfaceSHP(
                  *(int *)&stru_87C374[44940],
                  *(int *)&stru_87C374[13148],
                  v51,
                  0,
                  (ConvertClass *)&aP3[32],
                  (ConvertClass *)&aP3[40],
                  (ConvertClass *)0x400,
                  0,
                  0,
                  0,
                  (ConvertClass *)0x3E8,
                  0,
                  0,
                  0,
                  0,
                  0);
              }
              goto LABEL_107;
            }
            eax100 = v50 - 1;
            if ( !eax100 )
            {
              v51 = *(ConvertClass **)&stru_B05488[24588];
              goto LABEL_105;
            }
            if ( eax100 == 1 )
            {
              v51 = *(ConvertClass **)&stru_B05488[24592];
              goto LABEL_105;
            }
          }
LABEL_107:
          int v55 = *(_DWORD *)(v48 + 52);
          if ( v55 )
          {
            eax108 = *(_DWORD *)(v55 + 184);
            switch ( eax108 )
            {
              case -3:
                v56 = *(ConvertClass **)&stru_B05488[24600];
                goto LABEL_121;
              case -2:
                v56 = *(ConvertClass **)&stru_B05488[24596];
                goto LABEL_121;
              case 0:
                v56 = *(ConvertClass **)&stru_B05488[24604];
                goto LABEL_121;
              case 1:
                v56 = *(ConvertClass **)&stru_B05488[24608];
                goto LABEL_121;
              case 2:
                v56 = *(ConvertClass **)&stru_B05488[24612];
                goto LABEL_121;
              case 3:
                v56 = *(ConvertClass **)&stru_B05488[24616];
                goto LABEL_121;
              case 4:
                v56 = *(ConvertClass **)&stru_B05488[24620];
                goto LABEL_121;
              case 5:
                v56 = *(ConvertClass **)&stru_B05488[24624];
                goto LABEL_121;
              case 6:
                v56 = *(ConvertClass **)&stru_B05488[24628];
                goto LABEL_121;
              case 7:
                v56 = *(ConvertClass **)&stru_B05488[24632];
                goto LABEL_121;
              case 8:
                v56 = *(ConvertClass **)&stru_B05488[24636];
                goto LABEL_121;
              case 9:
                v56 = *(ConvertClass **)&stru_B05488[24640];
LABEL_121:
                if ( v56 )
                {
                  if ( eax108 == 9 )
                  {
                    updated = UI_Update_72F4D0();
                    int v59 = *(__int16 *)v56->field_2 + v47 + 70;
                    *(_DWORD *)&aP3[72] = 0;
                    *(_DWORD *)&aP3[80] = v59;
                    *(_DWORD *)&aP3[76] = 0;
                    *(_DWORD *)&aP3[84] = *(__int16 *)&v56->field_2[2] + v46 + 70;
                    *(_DWORD *)&aP3[24] = v47 + 70;
                    *(_DWORD *)&aP3[28] = v46 + 70;
                    DrawToSurfaceSHP(
                      *(int *)&stru_87C374[44940],
                      updated,
                      v56,
                      0,
                      (ConvertClass *)&aP3[24],
                      (ConvertClass *)&aP3[72],
                      (ConvertClass *)0x400,
                      0,
                      0,
                      0,
                      (ConvertClass *)0x3E8,
                      0,
                      0,
                      0,
                      0,
                      0);
                  }
                  else
                  {
                    int v60 = *(__int16 *)v56->field_2 + v47 + 70;
                    *(_DWORD *)&aP3[56] = 0;
                    int v61 = *(__int16 *)&v56->field_2[2];
                    *(_DWORD *)&aP3[64] = v60;
                    *(_DWORD *)&aP3[60] = 0;
                    *(_DWORD *)&aP3[68] = v61 + v46 + 70;
                    *(_DWORD *)&aP3[16] = v47 + 70;
                    *(_DWORD *)&aP3[20] = v46 + 70;
                    DrawToSurfaceSHP(
                      *(int *)&stru_87C374[44940],
                      *(int *)&stru_87C374[13148],
                      v56,
                      0,
                      (ConvertClass *)&aP3[16],
                      (ConvertClass *)&aP3[56],
                      (ConvertClass *)0x400,
                      0,
                      0,
                      0,
                      (ConvertClass *)0x3E8,
                      0,
                      0,
                      0,
                      0,
                      0);
                  }
                }
                break;
              default:
                break;
            }
          }
          wcscpy((wchar_t *)&stru_B05488[9256], (const wchar_t *)(v92 + 90154));
          if ( *(_DWORD *)&HouseClass_Player[29932] == 4 )
            _itow(*(_DWORD *)&stru_87C374[22428][4 * v45 + 12580], Format, 10);
          _itow(*(_DWORD *)&stru_87C374[22428][4 * v45 + 12452], v98, 10);
          _itow(*(_DWORD *)&stru_87C374[22428][4 * v45 + 12484], v101, 10);
          _itow(*(_DWORD *)&stru_87C374[22428][4 * v45 + 12516], v99, 10);
          v62 = *(ObjectClass **)&stru_87C374[22428][4 * v45 + 12548];
          if ( *(_BYTE *)(v84 + 63) )
            v46 += *(_DWORD *)(v84 + 76) - *(_DWORD *)&stru_B05488[24696];
          v82 = v47 + 8;
          int v83 = v46 + 4;
          TextRenderer::DrawText(
            (int *)&aP3[192],
            (size_t)&stru_B05488[9256],
            *(IUnknown **)&stru_87C374[44940],
            &aP3,
            (int)&v82,
            v62,
            0,
            66);
          if ( *(_DWORD *)&HouseClass_Player[29932] == 4 )
          {
            int v63 = *(_DWORD *)&stru_87C374[22428][4 * v45 + 12580];
            v83 += 17;
            if ( v63 >= 1 )
            {
              v65 = GetStringCSF((wchar_t *)&stru_830620[62704], 0, &stru_830620[62628], 3785);
              swprintf((wchar_t *const)&aP3[216], (const size_t)v65, Format, v70);
            }
            else
            {
              v64 = GetStringCSF((wchar_t *)&stru_830620[62716], 0, &stru_830620[62628], 3781);
              wcscpy((wchar_t *)&aP3[216], v64);
            }
            TextRenderer::DrawText(
              (int *)&aP3[208],
              (size_t)&aP3[216],
              *(IUnknown **)&stru_87C374[44940],
              &aP3,
              (int)&v82,
              v62,
              0,
              66);
          }
          v83 += 17;
          v66 = GetStringCSF((wchar_t *)&stru_830620[62688], 0, &stru_830620[62628], 3807);
          swprintf((wchar_t *const)&aP3[216], (const size_t)v66, v98, v70);
          TextRenderer::DrawText(
            (int *)&aP3[200],
            (size_t)&aP3[216],
            *(IUnknown **)&stru_87C374[44940],
            &aP3,
            (int)&v82,
            v62,
            0,
            66);
          v83 += 17;
          v67 = GetStringCSF((wchar_t *)&stru_830620[62672], 0, &stru_830620[62628], 3822);
          swprintf((wchar_t *const)&aP3[216], (const size_t)v67, v101, v71);
          TextRenderer::DrawText(
            (int *)&aP3[184],
            (size_t)&aP3[216],
            *(IUnknown **)&stru_87C374[44940],
            &aP3,
            (int)&v82,
            v62,
            0,
            66);
          v83 += 17;
          v68 = GetStringCSF((wchar_t *)&stru_830620[62656], 0, &stru_830620[62628], 3835);
          swprintf((wchar_t *const)&aP3[216], (const size_t)v68, v99, v72);
          TextRenderer::DrawText(
            (int *)&aP3[104],
            (size_t)&aP3[216],
            *(IUnknown **)&stru_87C374[44940],
            &aP3,
            (int)&v82,
            v62,
            0,
            66);
          if ( ++v85 >= v86 )
            goto LABEL_135;
        }
      }
      goto LABEL_135;
    }
  }
  return result;
}
}
} // namespace gamemd

// 0x6A6140
namespace gamemd {
char Sidebar::FindProductionType(FactoryClass * aP1, MouseClass * aP2, int a4)
{
{
    int v5;
    int v6;
    int v7;
    int *v8;
    int v9;
    int *i;
    if ( aP2 == (MouseClass *)15 || aP2 == (MouseClass *)16 )
  {
    v5 = 2;
  }
    else if ( aP2 == (MouseClass *)1 || aP2 == (MouseClass *)40 || aP2 == (MouseClass *)2 || aP2 == (MouseClass *)3 )
  {
    v5 = 3;
  }
    else if ( aP2 == (MouseClass *)6 || aP2 == (MouseClass *)7 )
  {
    v5 = GetHouseTechLevel((int)aP2, a4) == 5;
  }
    else if ( aP2 == (MouseClass *)57 || aP2 == (MouseClass *)32 || aP2 == (MouseClass *)31 )
  {
    v5 = 1;
  }
    else
  {
    v5 = -1;
  }
    v6 = 997 * v5;
    v7 = 0;
    v8 = this + v6 + 1361;
    v9 = *(this + v6 + 1382);
    if ( v9 <= 0 )
    return 0;
    for ( i = v8 + 22; (MouseClass *)i[1] != aP2 || *i != a4; i += 13 )
  {
    if ( ++v7 >= v9 )
    return 0;
  }
    v8[13 * v7 + 25] = aP1;
    *((char *)(v8) + 61) = 1;
    *((char *)(v8) + 60) = 1;
    MapClass::MarkForRedraw(&DataGlobal_87F7E8, 0);
    return 1;
}
}
} // namespace gamemd
