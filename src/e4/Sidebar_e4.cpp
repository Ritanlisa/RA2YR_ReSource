// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Sidebar_e4.hpp"

// 0x4FA350
namespace gamemd {
int Sidebar::StartSidebarProduction(void * a1, BuildingTypeClass * aP2, HouseClass * aP3, char a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Sidebar::StartSidebarProduction(int this, void *a1, BuildingTypeClass *aP2, HouseClass *aP3, char a5)
{
  IUnknown *v6; // ebx
  int v7; // esi
  int v8; // eax
  int v9; // ebp
  int v10; // esi
  int v11; // eax
  int result; // eax
  char v13; // bl
  int v14; // ecx
  IUnknown *Status; // eax
  char v16; // bl
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // ecx
  char v21; // [esp+23h] [ebp-11h]
  int v22; // [esp+24h] [ebp-10h]
  char *v23; // [esp+28h] [ebp-Ch]
  char v24; // [esp+2Ch] [ebp-8h]

  if ( (int)aP2 >= 0 ) /*0x4fa35f*/
  {
    v6 = (IUnknown *)a1; /*0x4fa36d*/
    v8 = TechnoTypeClass::GetByTypeAndIndex((int)a1, (int)aP2); /*0x4fa375*/
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
      else
        v10 = *(_DWORD *)(this + 21428); /*0x4fa4ba*/
      break; /*0x4fa4b8*/
    case 2u: /*0x4fa47b*/
    case 3u: /*0x4fa47b*/
      v10 = *(_DWORD *)(this + 21420); /*0x4fa4d7*/
      break; /*0x4fa4dd*/
    case 6u: /*0x4fa47b*/
    case 7u: /*0x4fa47b*/
      if ( v7 == 5 ) /*0x4fa4c5*/
        v10 = *(_DWORD *)(this + 21452); /*0x4fa4c7*/
      else
        v10 = *(_DWORD *)(this + 21436); /*0x4fa4cf*/
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
    v11 = __2_YAPAXI_Z(0x74u); /*0x4fa4e7*/
    if ( !v11 ) /*0x4fa4f1*/
      goto LABEL_40; /*0x4fa4f1*/
    v10 = TeamTypeClass::Construct(v11); /*0x4fa4fa*/
    if ( !v10 ) /*0x4fa4fe*/
      goto LABEL_40; /*0x4fa4fe*/
  }
  if ( *(_DWORD *)(v10 + 56) && !*(_BYTE *)(v10 + 112) && v6 == (IUnknown *)7 ) /*0x4fa531*/
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
  if ( *(_BYTE *)(v10 + 112) ) /*0x4fa5a8*/
  {
    v14 = *(_DWORD *)(v10 + 88); /*0x4fa5b1*/
    if ( v14 ) /*0x4fa5b6*/
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 132))(v14) == v9 ) /*0x4fa5c2*/
      {
        v13 = 1; /*0x4fa5c4*/
LABEL_55:
        if ( !*(_DWORD *)(v10 + 80) || a5 || v13 ) /*0x4fa5f6*/
        {
          v16 = *(_BYTE *)(v10 + 112); /*0x4fa622*/
          ProductionClass::StartTimer(v10, v24); /*0x4fa628*/
          if ( !v16 && g_GameMode_Current && *(_BYTE *)(this + 492) ) /*0x4fa63a*/
          {
            v17 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v10 + 88) + 132))(*(_DWORD *)(v10 + 88)); /*0x4fa649*/
            v18 = (int)(54 * ((int)MEMORY[0xA8B558] * (int)g_ScenarioState / 0x3Cu)) /*0x4fa67b*/
                / (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 136))(v17);
            if ( v18 >= 53 ) /*0x4fa680*/
              v18 = 53; /*0x4fa682*/
            if ( v21 ) /*0x4fa68d*/
              *(_DWORD *)(v10 + 36) = v18; /*0x4fa68f*/
          }
          if ( HouseClass_Player == (IUnknown *)this ) /*0x4fa698*/
            Sidebar::FindProductionType(&MEMORY[0x87F7E8], (FactoryClass *)v10, (MouseClass *)a1, (int)aP2); /*0x4fa6aa*/
          return 0; /*0x4fa6b2*/
        }
        else
        {
          Status = (IUnknown *)HouseClass::GetStatus((IUnknown *)a1, 0); /*0x4fa602*/
          Sidebar::ActivateTab((int)&MEMORY[0x87F7E8], Status); /*0x4fa60d*/
          return 0; /*0x4fa615*/
        }
      }
    }
  }
  if ( FactoryClass::DemandProduction(v10, v9, (#375 *)this, a5) ) /*0x4fa5d1*/
    goto LABEL_55; /*0x4fa5df*/
  Debug::Log(); /*0x4fa6c4*/
  if ( *(_DWORD *)(v10 + 80) || *(_DWORD *)(v10 + 88) ) /*0x4fa6d9*/
    return 3; /*0x4fa807*/
  Debug::Log(); /*0x4fa6ec*/
  Debug::Log(); /*0x4fa6fc*/
  Debug::Log(); /*0x4fa70a*/
  v19 = *(_DWORD *)(v10 + 88); /*0x4fa70f*/
  if ( v19 ) /*0x4fa717*/
    (*(void (__thiscall **)(int))(*(_DWORD *)v19 + 44))(v19); /*0x4fa71b*/
  Debug::Log(); /*0x4fa729*/
  v20 = *(_DWORD *)(v10 + 88); /*0x4fa72e*/
  if ( v20 ) /*0x4fa736*/
    (*(void (__thiscall **)(int))(*(_DWORD *)v20 + 64))(v20); /*0x4fa73a*/
  Debug::Log(); /*0x4fa748*/
  Debug::Log(); /*0x4fa758*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 32))(v10, 1); /*0x4fa76a*/
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
char Sidebar::Dispatch(IUnknown * aP1, char a3, int a4, char a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall Sidebar::Dispatch(_BYTE *this, IUnknown *aP1, char a3, int a4, char a5)
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
int Sidebar::ScrollSidebarSkipGame()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Sidebar::ScrollSidebarSkipGame(const char *this)
{
  int result; // eax
  int v2; // edi

  result = g_CommandClassVector_State; /*0x533f50*/
  v2 = 0; /*0x533f59*/
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
void Sidebar::CancelSidebarProductionQueue()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall Sidebar::CancelSidebarProductionQueue(int *this)
{
  int v2; // ebx
  int i; // ebp
  VectorClass *v4; // edi
  int Value; // eax
  void *v6; // eax
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // edi
  _DWORD *v10; // edi
  int v11; // eax
  int v12; // ebx
  int j; // ebp
  BuildingClass *LeaderIndexTeamClass; // eax
  void *v15; // eax
  void *Blocka; // [esp+14h] [ebp-8h] BYREF
  _DWORD *v17; // [esp+18h] [ebp-4h] BYREF

  v2 = this->q014; /*0x636319*/
  for ( i = 0; i < v2; ++i ) /*0x636327*/
  {
    v4 = *(VectorClass **)(this->q008 + 4 * i); /*0x63632c*/
    Value = Array::FindValue((int *)v4, (IUnknown *)*this); /*0x636334*/
    if ( Value == -1 ) /*0x63633c*/
      v6 = 0; /*0x63633e*/
    else
      v6 = (void *)*((_DWORD *)v4->Items + Value); /*0x636345*/
    Blocka = v6; /*0x63634a*/
    if ( v6 ) /*0x63634e*/
    {
      FactoryClass::FinishProduction((int)v4, (int)v6); /*0x636353*/
      __3_YAXPAX_Z(*((void **)Blocka + 1)); /*0x636360*/
      v7 = (*((int (__thiscall **)(VectorClass *, void **))v4->vtable0 + 4))(v4, &Blocka); /*0x636371*/
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
    v8 = *((_DWORD *)Blocka + 135); /*0x6363b5*/
    v9 = *(_DWORD *)(v8 + 48); /*0x6363bb*/
    if ( (unsigned __int8)House::IsHumanPlayer((#375 *)v8) && HouseClass_Player.field_0 ) /*0x6363ce*/
      v9 = *(_DWORD *)(HouseClass_Player.field_0 + 48); /*0x6363d0*/
    DecFactoryClassCounter(v9); /*0x6363d5*/
    VectorClass::EraseAt((int *)&g_MatrixTransformState + 6028, (IUnknown *)&Blocka); /*0x6363e4*/
  }
  v10 = this + 1; /*0x6363ec*/
  (*(void (__thiscall **)(int *))(this->q004 + 12))(this + 1); /*0x6363f1*/
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
      v11 = ((int (__thiscall *)(CoordStruct **, void **))(*(&g_MatrixTransformState + 6042))[1].Y)( /*0x63644f*/
              &g_MatrixTransformState + 6042,
              &Blocka);
      if ( v11 != -1 ) /*0x636454*/
        Sidebar::RemoveItem(&g_MatrixTransformState + 6042, v11); /*0x63645c*/
    }
    v12 = this->q014; /*0x636461*/
    for ( j = 0; j < v12; ++j ) /*0x63646f*/
      TeamClass::DestroyAllMembers(*(_DWORD **)(this->q008 + 4 * j), (TechnoClass *)*this); /*0x63647a*/
    if ( v12 ) /*0x63648a*/
    {
      v17 = (_DWORD *)*this; /*0x63648e*/
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
    v15 = (void *)this->q008; /*0x6364d7*/
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
char Sidebar::RemoveItem(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_63F040(_DWORD *this, int a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx

  v2 = this->q010; /*0x63f040*/
  v3 = a2; /*0x63f043*/
  if ( a2 >= v2 ) /*0x63f049*/
    return 0; /*0x63f06c*/
  v4 = v2 - 1; /*0x63f04b*/
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
int Sidebar::Render(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Sidebar_Render(int this, char a2)
{
  int v3; // ebx
  int v4; // esi
  int *v5; // eax
  int v6; // edi
  int v7; // ecx
  int v8; // edx
  int v9; // edi
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v16; // [esp+4h] [ebp-20h] BYREF
  int v17; // [esp+8h] [ebp-1Ch]
  int v18[4]; // [esp+14h] [ebp-10h] BYREF

  if ( (a2 || *(_BYTE *)(this + 5388)) && MEMORY[0x884B8D] ) /*0x63fb43*/
  {
    *(_BYTE *)(this + 5388) = 0; /*0x63fb49*/
    g_TooltipActive = 1; /*0x63fb55*/
    if ( *((_DWORD *)g_ScenarioClass_Instance + 3374) ) /*0x63fb5d*/
      v3 = 0; /*0x63fb70*/
    else
      v3 = 5; /*0x63fb69*/
    v16 = *((_DWORD *)g_ScenarioClass_Instance + 3374); /*0x63fb78*/
    v4 = g_DSurface_SidebarBounds + 69; /*0x63fb80*/
    v5 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)DSurface_Sidebar + 120))(DSurface_Sidebar, &v16); /*0x63fb8c*/
    v6 = *(_DWORD *)(this + 5424); /*0x63fb91*/
    v18[0] = *v5; /*0x63fb97*/
    v18[1] = v5[1]; /*0x63fb9e*/
    v18[2] = v5[2]; /*0x63fba5*/
    v18[3] = v5[3]; /*0x63fbb1*/
    v7 = *(_DWORD *)(this + 5428); /*0x63fbc6*/
    v8 = *(_DWORD *)(this + 5420); /*0x63fbce*/
    if ( (MEMORY[0xB0B504] + 3) / 3 - v7 - v6 - v8 > 0 ) /*0x63fbdc*/
    {
      v9 = (MEMORY[0xB0B504] + 3) / 3 - v7 - v6 - v8; /*0x63fbde*/
      do /*0x63fc24*/
      {
        v16 = v3; /*0x63fc13*/
        v17 = v4; /*0x63fc17*/
        DrawToSurfaceSHP( /*0x63fc1b*/
          DSurface_Sidebar,
          g_SidebarConfig,
          (int)MEMORY[0xAC4E74],
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
    v10 = *(_DWORD *)(this + 5404); /*0x63fc26*/
    v11 = 0; /*0x63fc2c*/
    if ( v10 > 0 && (v10 & 1) == 0 ) /*0x63fc3e*/
    {
      v16 = v3; /*0x63fc75*/
      v17 = v4; /*0x63fc79*/
      DrawToSurfaceSHP( /*0x63fc7d*/
        DSurface_Sidebar,
        g_SidebarConfig,
        (int)MEMORY[0xAC4E74],
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
    v12 = *(_DWORD *)(this + 5420); /*0x63fc8a*/
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
            (int)MEMORY[0xAC4E74],
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
    v13 = *(_DWORD *)(this + 5424); /*0x63fce8*/
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
            (int)MEMORY[0xAC4E74],
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
    v14 = *(_DWORD *)(this + 5428); /*0x63fd46*/
    if ( v14 > 0 && v11 < v14 ) /*0x63fd52*/
    {
      do /*0x63fda0*/
      {
        v16 = v3; /*0x63fd87*/
        v17 = v4; /*0x63fd8b*/
        DrawToSurfaceSHP( /*0x63fd8f*/
          DSurface_Sidebar,
          g_SidebarConfig,
          (int)MEMORY[0xAC4E74],
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
int __thiscall Sidebar::ActivateTab(int this, IUnknown *aP1)
{
  IUnknown *result; // eax

  result = aP1; /*0x6a60a0*/
  if ( aP1 == *(IUnknown **)(this + 21404) ) /*0x6a60ac*/
  {
    this->__pad_53A6 = 1; /*0x6a60b8*/
    *(_BYTE *)(this + 3988 * (_DWORD)aP1 + 5504) = 1; /*0x6a60c6*/
    return MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 0); /*0x6a60d2*/
  }
  return (int)result; /*0x6a60d8*/
}
}
} // namespace gamemd

// 0x6A70E0
namespace gamemd {
void Sidebar::FlushSidebarTooltip(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall FlushSidebarTooltip(_BYTE *this, char a2)
{
  int v3; // esi
  int v4; // ebp
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // esi
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

  if ( !*(this + 21413) || !g_WTFMode || !MEMORY[0xA8ED5C] ) /*0x6a7109*/
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
  if ( MEMORY[0x8809F4] != MEMORY[0xB07DC8]
    || MEMORY[0x8809F8] != MEMORY[0xB07DCC]
    || MEMORY[0x8809FC] != MEMORY[0xB07DD0]
    || MEMORY[0x880A00] != MEMORY[0xB07DD4] )
  {
LABEL_13:
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)g_WWMouseClass_Instance + 60))(g_WWMouseClass_Instance, DSurface_Sidebar, 1); /*0x6a7241*/
    if ( MEMORY[0x8809F4] == MEMORY[0xB07DC8]
      && MEMORY[0x8809F8] == MEMORY[0xB07DCC]
      && MEMORY[0x8809FC] == MEMORY[0xB07DD0]
      && MEMORY[0x880A00] == MEMORY[0xB07DD4]
      && !a2 )
    {
      if ( *(this + 21416) )
      {
        y = Point.y; /*0x6a72d1*/
        v10 = Point.x + (MEMORY[0xA8EB7C] != 0 ? g_Map_VisibleRectOffset : 0);
        v14 = 0; /*0x6a72f3*/
        v15 = 0; /*0x6a72f7*/
        v16 = MEMORY[0x886F98]; /*0x6a72fb*/
        v17 = 16; /*0x6a72ff*/
        v12 = MEMORY[0x886F98]; /*0x6a7303*/
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
      v3 = MEMORY[0x886F98]; /*0x6a7332*/
      v17 = g_DSurface_ViewBounds; /*0x6a733e*/
      v14 = 0; /*0x6a7348*/
      v4 = g_DSurface_SidebarBounds + Point.y; /*0x6a734e*/
      v15 = g_DSurface_SidebarBounds; /*0x6a7357*/
      v16 = MEMORY[0x886F98]; /*0x6a735b*/
      v5 = (MEMORY[0xA8EB7C] != 0 ? g_Map_VisibleRectOffset : 0) + Point.x;
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)DSurface_Sidebar + 128))(DSurface_Sidebar); /*0x6a7363*/
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
      v7 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)DSurface_Sidebar + 120))(DSurface_Sidebar, &v10); /*0x6a73be*/
      v14 = 0; /*0x6a73dd*/
      v15 = 0; /*0x6a73e5*/
      v16 = *(_DWORD *)(v7 + 8); /*0x6a73ec*/
      v8 = *(_DWORD *)(v7 + 12); /*0x6a73f0*/
      y = Point.y; /*0x6a73fd*/
      v10 = Point.x + (MEMORY[0xA8EB7C] != 0 ? g_Map_VisibleRectOffset : 0);
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
      v15 = Point.y + MEMORY[0x8809F8]; /*0x6a7458*/
      v14 = Point.x + MEMORY[0x8809F4] + (MEMORY[0xA8EB7C] != 0 ? g_Map_VisibleRectOffset : 0);
      v16 = MEMORY[0x8809FC]; /*0x6a746f*/
      v17 = MEMORY[0x880A00]; /*0x6a7473*/
      (*(void (__thiscall **)(int, int *, int, int *, _DWORD, int))(*(_DWORD *)g_DSurface_Primary + 8))( /*0x6a747e*/
        g_DSurface_Primary,
        &v14,
        DSurface_Sidebar,
        &MEMORY[0x8809F4],
        0,
        1);
    }
    goto LABEL_24; /*0x6a73a0*/
  }
  if ( *(this + 21416) )
  {
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)g_WWMouseClass_Instance + 60))(g_WWMouseClass_Instance, DSurface_Sidebar, 1); /*0x6a71c7*/
    v15 = Point.y; /*0x6a71eb*/
    v14 = Point.x + (MEMORY[0xA8EB7C] != 0 ? g_Map_VisibleRectOffset : 0);
    v10 = 0; /*0x6a720d*/
    y = 0; /*0x6a7211*/
    v12 = MEMORY[0x886F98]; /*0x6a7215*/
    v13 = 16; /*0x6a7219*/
    v16 = MEMORY[0x886F98]; /*0x6a721d*/
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
    MEMORY[0xB0B519] = 1; /*0x6a7481*/
  }
LABEL_25:
  g_TooltipActive = 0; /*0x6a7488*/
}
}
} // namespace gamemd

// 0x6A9540
namespace gamemd {
int Sidebar_UpdateProductionDisplay()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __userpurge Sidebar::UpdateProductionDisplay@<al>(int a1@<ecx>, CampaignScore *a2@<edi>, char a3)
{
  char result; // al
  int v5; // eax
  IUnknown *v6; // ebx
  IUnknown *v7; // ebp
  int v8; // eax
  int v9; // edi
  _DWORD *v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // ebp
  int v15; // esi
  char v16; // bl
  int v17; // ebp
  int v18; // eax
  int v19; // eax
  int v20; // edx
  int v21; // ecx
  int *v22; // eax
  IUnknown *v23; // ebx
  char ShouldDisableCameo; // al
  int Member09; // eax
  _DWORD *v26; // ecx
  int v27; // ecx
  _DWORD *v28; // edi
  int v29; // eax
  int v30; // ecx
  unsigned int v31; // edi
  int v32; // eax
  int v33; // edx
  IUnknown *v34; // eax
  int v35; // edi
  int v36; // eax
  int eax73; // eax
  CampaignScore *v37; // ebx
  int v39; // ecx
  _DWORD *TextBoundingRect; // eax
  _DWORD *v41; // eax
  wchar_t *StringCSF; // ebp
  _DWORD *v43; // eax
  _DWORD *v44; // eax
  int v45; // ebp
  int v46; // ebx
  int v47; // edi
  int v48; // esi
  int v49; // eax
  int v50; // eax
  int eax100; // eax
  ConvertClass *v51; // eax
  int v53; // edx
  int v54; // edx
  int v55; // eax
  int eax108; // eax
  ConvertClass *v56; // esi
  int updated; // eax
  int v59; // edx
  int v60; // edx
  int v61; // ecx
  ObjectClass *v62; // esi
  int v63; // eax
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
  bool v74; // [esp+10h] [ebp-47Ah]
  char v75; // [esp+11h] [ebp-479h]
  bool IsCliffWall; // [esp+12h] [ebp-478h]
  char v77; // [esp+13h] [ebp-477h]
  char v78; // [esp+14h] [ebp-476h]
  char v79; // [esp+15h] [ebp-475h]
  int *v80; // [esp+16h] [ebp-474h]
  int *BuildLimit; // [esp+16h] [ebp-474h]
  int v82; // [esp+1Ah] [ebp-470h] BYREF
  int v83; // [esp+1Eh] [ebp-46Ch]
  int v84; // [esp+22h] [ebp-468h]
  int v85; // [esp+26h] [ebp-464h]
  int v86; // [esp+2Ah] [ebp-460h]
  int *v87; // [esp+2Eh] [ebp-45Ch]
  IUnknown *aP1; // [esp+32h] [ebp-458h]
  int ProductionState; // [esp+36h] [ebp-454h]
  int v90; // [esp+3Ah] [ebp-450h]
  size_t BufferCount; // [esp+3Eh] [ebp-44Ch]
  int v92; // [esp+42h] [ebp-448h]
  ConvertClass *aP2; // [esp+46h] [ebp-444h]
  int v94; // [esp+4Ah] [ebp-440h]
  int i; // [esp+4Eh] [ebp-43Ch]
  ConvertClass aP3; // [esp+52h] [ebp-438h] BYREF
  int v97[4]; // [esp+1DAh] [ebp-2B0h] BYREF
  wchar_t v98[20]; // [esp+1EAh] [ebp-2A0h] BYREF
  wchar_t v99[20]; // [esp+212h] [ebp-278h] BYREF
  wchar_t Format[20]; // [esp+23Ah] [ebp-250h] BYREF
  wchar_t v101[20]; // [esp+262h] [ebp-228h] BYREF
  CampaignScore Buffer[14]; // [esp+28Ah] [ebp-200h] BYREF

  v84 = a1;
  result = *(_BYTE *)(a1 + 28);
  if ( result )
  {
    if ( *(_BYTE *)(a1 + 60) || (result = a3) != 0 )
    {
      v70 = a2;
      *(_BYTE *)(a1 + 60) = 0;
      stru_B05488.__pad_579C[2292] = 1;
      *(_DWORD *)aP3.__pad_0 = 0;
      *(_DWORD *)&aP3.field_2[2] = 0;
      *(_DWORD *)&aP3.__pad_6[2] = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22512] + 124))(*(_DWORD *)&stru_87C374.__pad_579C[22512]);
      v5 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22512] + 128))(*(_DWORD *)&stru_87C374.__pad_579C[22512]);
      v6 = (IUnknown *)HouseClass_Player.field_0;
      v7 = (IUnknown *)*(&g_MatrixTransformState + 2274);
      *(_DWORD *)&aP3.__pad_6[6] = v5;
      v8 = 0;
      v79 = 0;
      if ( (CoordStruct *)HouseClass_Player.field_0 == *(&g_MatrixTransformState + 2274) )
        v8 = *(_DWORD *)(a1 + 84);
      v9 = *(_DWORD *)(a1 + 84);
      if ( v8 < v9 )
      {
        v10 = (_DWORD *)(a1 + 4 * (v8 + 4 * (3 * v8 + 6) + 2));
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
      v11 = 26;
      if ( *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13496) )
        v11 = 18;
      v85 = 0;
      v12 = (*(_BYTE *)(a1 + 63) != 0)
          + (*(_DWORD *)&stru_87C374.__pad_579C[21644]
           - *(_DWORD *)&stru_B05488.__pad_579C[2260]
           - v11
           + *(_DWORD *)&stru_87C374.__pad_579C[21636]
           - 7)
          / 50;
      v92 = v12;
      if ( (CoordStruct *)HouseClass_Player.field_0 != *(&g_MatrixTransformState + 2274) )
      {
        if ( v12 > 0 )
        {
          do
          {
            for ( i = 0; i < 2; ++i )
            {
              v78 = a3;
              v13 = *(_DWORD *)(v84 + 68);
              ProductionState = 0;
              aP2 = 0;
              v86 = 0;
              BufferCount = 0;
              v14 = *(_DWORD *)(v84 + 32);
              v90 = i + 2 * (v13 + v85);
              v15 = v14 + i * *(_DWORD *)&stru_B05488.__pad_579C[2264] - *(_DWORD *)&stru_87C374.__pad_579C[21632];
              v16 = 0;
              v73 = 0;
              v17 = v85 * *(_DWORD *)&stru_B05488.__pad_579C[2268] + *(_DWORD *)(v84 + 36) + 1;
              v18 = *(_DWORD *)(v84 + 56);
              IsCliffWall = 0;
              v94 = v17;
              v19 = 56 * (i + 2 * v85 + 60 * v18) + 11566720;
              if ( *(_BYTE *)(v84 + 63) )
              {
                v17 += *(_DWORD *)(v84 + 76) - *(_DWORD *)&stru_B05488.__pad_579C[2268];
                v94 = v17;
              }
              v20 = *(_DWORD *)(v84 + 84);
              v80 = 0;
              aP1 = 0;
              if ( v90 >= v20 )
              {
                LOBYTE(v73) = 0;
              }
              else
              {
                if ( !*(_BYTE *)(v19 + 52) || (HIBYTE(v73) = 1, HouseClass_Player.__pad_5568[23272]) )
                  HIBYTE(v73) = 0;
                v21 = *(_DWORD *)(v84 + 52 * v90 + 92);
                v22 = (int *)(v84 + 52 * v90);
                v87 = v22;
                if ( v21 == 31 )
                {
                  v31 = v22[22];
                  v32 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[20608] + 4 * v31);
                  v80 = *(int **)(v32 + 96);
                  if ( v31 >= *(_DWORD *)&HouseClass_Player.__pad_5568[20620] )
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
                    v80 = (int *)v23->field_60;
                    v77 = 0;
                    if ( (*(int (__thiscall **)(IUnknown *))(v23->field_0 + 44))(v23) == 7 && v79
                      || !(*(int (__thiscall **)(IUnknown *, int, int, int, int))(v23->field_0 + 148))(
                            v23,
                            1,
                            1,
                            1,
                            HouseClass_Player.field_0)
                      || (v86 = TechnoTypeClass::GetByTypeAndIndex(v87[23], v87[22]),
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
                      v28 = (_DWORD *)(v84 + 4 * (v90 + 4 * (3 * v90 + 6) + 2));
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
                          v29 = 0;
                          LOBYTE(v73) = 1;
                          IsCliffWall = 0;
                          v16 = 1;
                          if ( *v28 == 1 )
                          {
                            v30 = v87[27];
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
                      BufferCount = (size_t)GetStringCSF(g_Str_TXT_READY, 0, &stru_830620.__pad_579C[40200], 3411);
                    else
                      v78 = 1;
                    Member09 = 0;
                    v26 = (_DWORD *)v87[25];
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
              *(_DWORD *)&aP3.__pad_6[82] = 0;
              *(_DWORD *)&aP3.__pad_6[86] = 0;
              *(_DWORD *)&aP3.__pad_6[90] = v15 + 60;
              *(_DWORD *)&aP3.__pad_6[94] = v17 + 48;
              if ( v78 )
              {
                if ( aP2 )
                {
                  *(_DWORD *)&aP3.__pad_6[122] = v15;
                  *(_DWORD *)&aP3.__pad_6[126] = v17;
                  DrawToSurfaceSHP(
                    *(int *)&stru_87C374.__pad_579C[22512],
                    *(int *)&stru_87C374.__pad_14B0[7820],
                    aP2,
                    0,
                    (ConvertClass *)&aP3.__pad_6[122],
                    (ConvertClass *)&aP3.__pad_6[82],
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
                  *(_DWORD *)&aP3.__pad_6[146] = v15;
                  *(_DWORD *)&aP3.__pad_6[150] = v17;
                  *(_DWORD *)&aP3.__pad_6[154] = 60;
                  *(_DWORD *)&aP3.__pad_6[158] = 48;
                  BYTE2(v82) = stru_B05488.__pad_579C[19962];
                  v33 = **(_DWORD **)&stru_87C374.__pad_579C[22512];
                  LOWORD(v82) = *(_WORD *)&stru_B05488.__pad_579C[19960];
                  (*(void (__thiscall **)(_DWORD, char *, char *, int))(v33 + 84))(
                    *(_DWORD *)&stru_87C374.__pad_579C[22512],
                    &aP3.__pad_6[82],
                    &aP3.__pad_6[146],
                    ((unsigned __int8)stru_B05488.__pad_579C[19960] >> stru_89E138.__pad_14B0[6124] << stru_89E138.__pad_14B0[6120])
                  | ((unsigned __int8)stru_B05488.__pad_579C[19961] >> stru_89E138.__pad_14B0[6140] << stru_89E138.__pad_14B0[6136])
                  | ((unsigned __int8)stru_B05488.__pad_579C[19962] >> stru_89E138.__pad_14B0[6132] << stru_89E138.__pad_14B0[6128]));
                }
                if ( v16 )
                {
                  *(_DWORD *)&aP3.__pad_6[138] = v15;
                  *(_DWORD *)&aP3.__pad_6[142] = v17;
                  DrawToSurfaceSHP(
                    *(int *)&stru_87C374.__pad_579C[22512],
                    *(int *)&stru_87C374.__pad_14B0[7848],
                    *(ConvertClass **)&stru_B05488.__pad_14B0[4744],
                    0,
                    (ConvertClass *)&aP3.__pad_6[138],
                    (ConvertClass *)&aP3.__pad_6[82],
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
                if ( *(_DWORD *)(v84 + 52 * v90 + 136) > *(int *)&HouseClass_Player.__pad_5568[23248]
                  && *(_DWORD *)&HouseClass_Player.__pad_5568[23248] % 16 > 8 )
                {
                  *(_DWORD *)&aP3.__pad_6[114] = v15;
                  *(_DWORD *)&aP3.__pad_6[118] = v17;
                  DrawToSurfaceSHP(
                    *(int *)&stru_87C374.__pad_579C[22512],
                    *(int *)&stru_87C374.__pad_14B0[7848],
                    *(ConvertClass **)&stru_B05488.__pad_14B0[4744],
                    0,
                    (ConvertClass *)&aP3.__pad_6[114],
                    (ConvertClass *)&aP3.__pad_6[82],
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
                  *(_DWORD *)&aP3.__pad_6[134] = v17 + 36;
                  *(_DWORD *)&aP3.__pad_6[130] = v15;
                  UI_Update_6AC480((int)v80, (int *)&aP3.__pad_6[130], &aP3, 60);
                }
                v75 = 0;
                v34 = aP1;
                v35 = ((unsigned __int8)stru_B05488.__pad_579C[19960] >> stru_89E138.__pad_14B0[6124] << stru_89E138.__pad_14B0[6120])
                    | ((unsigned __int8)stru_B05488.__pad_579C[19961] >> stru_89E138.__pad_14B0[6140] << stru_89E138.__pad_14B0[6136])
                    | ((unsigned __int8)stru_B05488.__pad_579C[19962] >> stru_89E138.__pad_14B0[6132] << stru_89E138.__pad_14B0[6128]);
                if ( aP1 )
                {
                  LOBYTE(v34) = aP1->__pad_BC0[270];
                  v69 = v34;
                  v36 = (*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 44))(aP1);
                  BuildLimit = (int *)HouseClass::GetBuildLimit(HouseClass_Player.field_0, v36, v69, 0);
                  if ( BuildLimit )
                  {
                    eax73 = FactoryClass::CountType(BuildLimit, aP1);
                    v37 = (CampaignScore *)eax73;
                    if ( eax73 > 1
                      || eax73 > 0
                      && ((v39 = BuildLimit[22]) == 0
                       || (*(int (__thiscall **)(int))(*(_DWORD *)v39 + 132))(v39)
                       && (IUnknown *)(*(int (__thiscall **)(int))(*(_DWORD *)BuildLimit[22] + 132))(BuildLimit[22]) != aP1) )
                    {
                      swprintf((wchar_t *const)Buffer, (const size_t)&g_Str_Fmt_PctD, (const wchar_t *const)v37, v70);
                      *(_DWORD *)&aP3.__pad_6[110] = v17 + 1;
                      *(_DWORD *)&aP3.__pad_6[106] = v15 + 60;
                      TextBoundingRect = GetTextBoundingRect(&aP3.__pad_6[354], Buffer, v15 + 60, v17 + 1, 578, 2, 1);
                      *(_DWORD *)&aP3.__pad_6[162] = *TextBoundingRect;
                      *(_DWORD *)&aP3.__pad_6[166] = TextBoundingRect[1];
                      *(_DWORD *)&aP3.__pad_6[170] = TextBoundingRect[2];
                      *(_DWORD *)&aP3.__pad_6[174] = TextBoundingRect[3];
                      DSurface::FillRectWithColor(
                        (int *)&aP3.__pad_6[162],
                        *(ObjectClass **)&stru_87C374.__pad_579C[22512],
                        0,
                        0xAFu);
                      TextRenderer::Printf(
                        (ConvertClass *)&aP3.__pad_6[178],
                        (size_t)&g_Str_Fmt_PctD,
                        *(ObjectClass **)&stru_87C374.__pad_579C[22512],
                        &aP3,
                        (int)&aP3.__pad_6[106],
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
                    *(_DWORD *)&aP3.__pad_6[102] = v17 + 1;
                    *(_DWORD *)&aP3.__pad_6[98] = v15 + 30;
                    v41 = GetTextBoundingRect(
                            &aP3.field_178,
                            (CampaignScore *)BufferCount,
                            v15 + 30,
                            v17 + 1,
                            322,
                            2,
                            1);
                    *(_DWORD *)&aP3.__pad_6[50] = *v41;
                    *(_DWORD *)&aP3.__pad_6[54] = v41[1];
                    *(_DWORD *)&aP3.__pad_6[58] = v41[2];
                    *(_DWORD *)&aP3.__pad_6[62] = v41[3];
                    DSurface::FillRectWithColor(
                      (int *)&aP3.__pad_6[50],
                      *(ObjectClass **)&stru_87C374.__pad_579C[22512],
                      0,
                      0xAFu);
                    TextRenderer::Printf(
                      (ConvertClass *)&aP3.__pad_6[194],
                      BufferCount,
                      *(ObjectClass **)&stru_87C374.__pad_579C[22512],
                      &aP3,
                      (int)&aP3.__pad_6[98],
                      v35,
                      0,
                      322,
                      v70);
                  }
                  if ( !IsCliffWall )
                  {
                    if ( (*(_DWORD *)&aP3.__pad_6[10] = v15,
                          *(_DWORD *)&aP3.__pad_6[14] = v17,
                          DrawToSurfaceSHP(
                            *(int *)&stru_87C374.__pad_579C[22512],
                            *(int *)&stru_87C374.__pad_14B0[7848],
                            *(ConvertClass **)&stru_B05488.__pad_579C[2144],
                            ProductionState + 1,
                            (ConvertClass *)&aP3.__pad_6[10],
                            (ConvertClass *)&aP3.__pad_6[82],
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
                                    (wchar_t *)&stru_830620.__pad_579C[40304],
                                    0,
                                    &stru_830620.__pad_579C[40200],
                                    3636);
                      if ( v75 )
                      {
                        *(_DWORD *)&aP3.__pad_6[18] = v15 + 2;
                        *(_DWORD *)&aP3.__pad_6[22] = v94 + 1;
                        v43 = GetTextBoundingRect(v97, (CampaignScore *)StringCSF, v15 + 2, v94 + 1, 66, 2, 1);
                        *(_DWORD *)&aP3.__pad_6[66] = *v43;
                        *(_DWORD *)&aP3.__pad_6[70] = v43[1];
                        *(_DWORD *)&aP3.__pad_6[74] = v43[2];
                        *(_DWORD *)&aP3.__pad_6[78] = v43[3];
                        DSurface::FillRectWithColor(
                          (int *)&aP3.__pad_6[66],
                          *(ObjectClass **)&stru_87C374.__pad_579C[22512],
                          0,
                          0xAFu);
                        TextRenderer::Printf(
                          (ConvertClass *)&aP3.__pad_6[202],
                          (size_t)StringCSF,
                          *(ObjectClass **)&stru_87C374.__pad_579C[22512],
                          &aP3,
                          (int)&aP3.__pad_6[18],
                          v35,
                          0,
                          66,
                          v70);
                      }
                      else
                      {
                        *(_DWORD *)&aP3.__pad_6[26] = v15 + 30;
                        *(_DWORD *)&aP3.__pad_6[30] = v94 + 1;
                        v44 = GetTextBoundingRect(
                                &aP3.__pad_6[338],
                                (CampaignScore *)StringCSF,
                                v15 + 30,
                                v94 + 1,
                                322,
                                2,
                                1);
                        *(_DWORD *)&aP3.__pad_6[34] = *v44;
                        *(_DWORD *)&aP3.__pad_6[38] = v44[1];
                        *(_DWORD *)&aP3.__pad_6[42] = v44[2];
                        *(_DWORD *)&aP3.__pad_6[46] = v44[3];
                        DSurface::FillRectWithColor(
                          (int *)&aP3.__pad_6[34],
                          *(ObjectClass **)&stru_87C374.__pad_579C[22512],
                          0,
                          0xAFu);
                        TextRenderer::Printf(
                          (ConvertClass *)&aP3.__pad_6[186],
                          (size_t)StringCSF,
                          *(ObjectClass **)&stru_87C374.__pad_579C[22512],
                          &aP3,
                          (int)&aP3.__pad_6[26],
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
          v45 = *(_DWORD *)(v84 + 68) + v85;
          v46 = *(_DWORD *)(v84 + 36) + 2 * v85 * *(_DWORD *)&stru_B05488.__pad_579C[2268] + 1;
          v47 = *(_DWORD *)(v84 + 32) - *(_DWORD *)&stru_87C374.__pad_579C[21632];
          if ( v45 >= *(int *)&stru_87C374.__pad_579C[12776] )
            goto LABEL_135;
          v92 = *(_DWORD *)&stru_87C374.__pad_579C[4 * v45 + 12420];
          v48 = v92;
          if ( !v92 )
            goto LABEL_135;
          v49 = *(_DWORD *)(v92 + 52);
          if ( v49 )
          {
            v50 = *(_DWORD *)(v49 + 188);
            if ( !v50 )
            {
              v51 = *(ConvertClass **)&stru_B05488.__pad_579C[2156];
LABEL_105:
              if ( v51 )
              {
                v53 = v47 + *(__int16 *)v51->field_2;
                *(_DWORD *)&aP3.__pad_6[34] = 0;
                *(_DWORD *)&aP3.__pad_6[42] = v53;
                *(_DWORD *)&aP3.__pad_6[38] = 0;
                v54 = v46 + *(__int16 *)&v51->field_2[2];
                *(_DWORD *)&aP3.__pad_6[26] = v47;
                *(_DWORD *)&aP3.__pad_6[46] = v54;
                *(_DWORD *)&aP3.__pad_6[30] = v46;
                DrawToSurfaceSHP(
                  *(int *)&stru_87C374.__pad_579C[22512],
                  *(int *)&stru_87C374.__pad_14B0[7852],
                  v51,
                  0,
                  (ConvertClass *)&aP3.__pad_6[26],
                  (ConvertClass *)&aP3.__pad_6[34],
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
              v51 = *(ConvertClass **)&stru_B05488.__pad_579C[2160];
              goto LABEL_105;
            }
            if ( eax100 == 1 )
            {
              v51 = *(ConvertClass **)&stru_B05488.__pad_579C[2164];
              goto LABEL_105;
            }
          }
LABEL_107:
          v55 = *(_DWORD *)(v48 + 52);
          if ( v55 )
          {
            eax108 = *(_DWORD *)(v55 + 184);
            switch ( eax108 )
            {
              case -3:
                v56 = *(ConvertClass **)&stru_B05488.__pad_579C[2172];
                goto LABEL_121;
              case -2:
                v56 = *(ConvertClass **)&stru_B05488.__pad_579C[2168];
                goto LABEL_121;
              case 0:
                v56 = *(ConvertClass **)&stru_B05488.__pad_579C[2176];
                goto LABEL_121;
              case 1:
                v56 = *(ConvertClass **)&stru_B05488.__pad_579C[2180];
                goto LABEL_121;
              case 2:
                v56 = *(ConvertClass **)&stru_B05488.__pad_579C[2184];
                goto LABEL_121;
              case 3:
                v56 = *(ConvertClass **)&stru_B05488.__pad_579C[2188];
                goto LABEL_121;
              case 4:
                v56 = *(ConvertClass **)&stru_B05488.__pad_579C[2192];
                goto LABEL_121;
              case 5:
                v56 = *(ConvertClass **)&stru_B05488.__pad_579C[2196];
                goto LABEL_121;
              case 6:
                v56 = *(ConvertClass **)&stru_B05488.__pad_579C[2200];
                goto LABEL_121;
              case 7:
                v56 = *(ConvertClass **)&stru_B05488.__pad_579C[2204];
                goto LABEL_121;
              case 8:
                v56 = *(ConvertClass **)&stru_B05488.__pad_579C[2208];
                goto LABEL_121;
              case 9:
                v56 = *(ConvertClass **)&stru_B05488.__pad_579C[2212];
LABEL_121:
                if ( v56 )
                {
                  if ( eax108 == 9 )
                  {
                    updated = UI_Update_72F4D0();
                    v59 = *(__int16 *)v56->field_2 + v47 + 70;
                    *(_DWORD *)&aP3.__pad_6[66] = 0;
                    *(_DWORD *)&aP3.__pad_6[74] = v59;
                    *(_DWORD *)&aP3.__pad_6[70] = 0;
                    *(_DWORD *)&aP3.__pad_6[78] = *(__int16 *)&v56->field_2[2] + v46 + 70;
                    *(_DWORD *)&aP3.__pad_6[18] = v47 + 70;
                    *(_DWORD *)&aP3.__pad_6[22] = v46 + 70;
                    DrawToSurfaceSHP(
                      *(int *)&stru_87C374.__pad_579C[22512],
                      updated,
                      v56,
                      0,
                      (ConvertClass *)&aP3.__pad_6[18],
                      (ConvertClass *)&aP3.__pad_6[66],
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
                    v60 = *(__int16 *)v56->field_2 + v47 + 70;
                    *(_DWORD *)&aP3.__pad_6[50] = 0;
                    v61 = *(__int16 *)&v56->field_2[2];
                    *(_DWORD *)&aP3.__pad_6[58] = v60;
                    *(_DWORD *)&aP3.__pad_6[54] = 0;
                    *(_DWORD *)&aP3.__pad_6[62] = v61 + v46 + 70;
                    *(_DWORD *)&aP3.__pad_6[10] = v47 + 70;
                    *(_DWORD *)&aP3.__pad_6[14] = v46 + 70;
                    DrawToSurfaceSHP(
                      *(int *)&stru_87C374.__pad_579C[22512],
                      *(int *)&stru_87C374.__pad_14B0[7852],
                      v56,
                      0,
                      (ConvertClass *)&aP3.__pad_6[10],
                      (ConvertClass *)&aP3.__pad_6[50],
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
          wcscpy((wchar_t *)&stru_B05488.__pad_14B0[3960], (const wchar_t *)(v92 + 90154));
          if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 )
            _itow(*(_DWORD *)&stru_87C374.__pad_579C[4 * v45 + 12580], Format, 10);
          _itow(*(_DWORD *)&stru_87C374.__pad_579C[4 * v45 + 12452], v98, 10);
          _itow(*(_DWORD *)&stru_87C374.__pad_579C[4 * v45 + 12484], v101, 10);
          _itow(*(_DWORD *)&stru_87C374.__pad_579C[4 * v45 + 12516], v99, 10);
          v62 = *(ObjectClass **)&stru_87C374.__pad_579C[4 * v45 + 12548];
          if ( *(_BYTE *)(v84 + 63) )
            v46 += *(_DWORD *)(v84 + 76) - *(_DWORD *)&stru_B05488.__pad_579C[2268];
          v82 = v47 + 8;
          v83 = v46 + 4;
          TextRenderer::DrawText(
            (int *)&aP3.__pad_6[186],
            (size_t)&stru_B05488.__pad_14B0[3960],
            *(IUnknown **)&stru_87C374.__pad_579C[22512],
            &aP3,
            (int)&v82,
            v62,
            0,
            66);
          if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 )
          {
            v63 = *(_DWORD *)&stru_87C374.__pad_579C[4 * v45 + 12580];
            v83 += 17;
            if ( v63 >= 1 )
            {
              v65 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[40276], 0, &stru_830620.__pad_579C[40200], 3785);
              swprintf((wchar_t *const)&aP3.__pad_6[210], (const size_t)v65, Format, v70);
            }
            else
            {
              v64 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[40288], 0, &stru_830620.__pad_579C[40200], 3781);
              wcscpy((wchar_t *)&aP3.__pad_6[210], v64);
            }
            TextRenderer::DrawText(
              (int *)&aP3.__pad_6[202],
              (size_t)&aP3.__pad_6[210],
              *(IUnknown **)&stru_87C374.__pad_579C[22512],
              &aP3,
              (int)&v82,
              v62,
              0,
              66);
          }
          v83 += 17;
          v66 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[40260], 0, &stru_830620.__pad_579C[40200], 3807);
          swprintf((wchar_t *const)&aP3.__pad_6[210], (const size_t)v66, v98, v70);
          TextRenderer::DrawText(
            (int *)&aP3.__pad_6[194],
            (size_t)&aP3.__pad_6[210],
            *(IUnknown **)&stru_87C374.__pad_579C[22512],
            &aP3,
            (int)&v82,
            v62,
            0,
            66);
          v83 += 17;
          v67 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[40244], 0, &stru_830620.__pad_579C[40200], 3822);
          swprintf((wchar_t *const)&aP3.__pad_6[210], (const size_t)v67, v101, v71);
          TextRenderer::DrawText(
            (int *)&aP3.__pad_6[178],
            (size_t)&aP3.__pad_6[210],
            *(IUnknown **)&stru_87C374.__pad_579C[22512],
            &aP3,
            (int)&v82,
            v62,
            0,
            66);
          v83 += 17;
          v68 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[40228], 0, &stru_830620.__pad_579C[40200], 3835);
          swprintf((wchar_t *const)&aP3.__pad_6[210], (const size_t)v68, v99, v72);
          TextRenderer::DrawText(
            (int *)&aP3.__pad_6[98],
            (size_t)&aP3.__pad_6[210],
            *(IUnknown **)&stru_87C374.__pad_579C[22512],
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
