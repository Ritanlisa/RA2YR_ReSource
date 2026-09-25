// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/FlyLocomotionClass_e4.hpp"
#include "e4/classes/FogOfWar_e4.hpp"
#include "e4/classes/LocomotionClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ObjectVector_e4.hpp"
#include "e4/e4_protos.h"

// 0x4CC9A0
namespace gamemd {
int FlyLocomotionClass::LocomotionClass()
{

  LocomotionClass::Init(); /*0x4cc9a3*/
  this->AirportBound = 0; /*0x4cc9ad*/
  this->MovingDestination = dword_8B3C78; /*0x4cc9b6*/
  this->u32_20 = dword_8B3C7C; /*0x4cc9be*/
  this->q024 = dword_8B3C80; /*0x4cc9c7*/
  this->XYZ2 = dword_8B3C78; /*0x4cc9d3*/
  this->u32_2C = dword_8B3C7C; /*0x4cc9dc*/
  dword_8B3C80 = dword_8B3C80; /*0x4cc9df*/
  this->q040 = 0; /*0x4cc9e5*/
  this->q048 = 0; /*0x4cc9e8*/
  this->HasMoveOrder = 0; /*0x4cc9eb*/
  this->FlightLevel = 0; /*0x4cc9ee*/
  this->CurrentSpeed = 0; /*0x4cc9f1*/
  this->IsTakingOff = 0; /*0x4cc9f4*/
  this->q050 = 0; /*0x4cc9f7*/
  this->u8_51 = 0; /*0x4cc9fa*/
  this->u8_52 = 0; /*0x4cc9fd*/
  this->FlyLocomotionClass_field_bool_53 = 0; /*0x4cca00*/
  this->FlyLocomotionClass_field_54 = 0; /*0x4cca03*/
  this->FlyLocomotionClass_field_58 = 0; /*0x4cca06*/
  this->IsElevating = 0; /*0x4cca09*/
  *(_DWORD *)this = &(void*)(void*)&FlyLocomotionClass_vftable; /*0x4cca0c*/
  this->vtable2 = &(void*)(void*)&FlyLocomotionClass_vftable; /*0x4cca12*/
  this->ptr_30 = dword_8B3C80; /*0x4cca1b*/
  return this; /*0x4cca1e*/
}
} // namespace gamemd
// 0x4CFE80
namespace gamemd {
void FlyLocomotionClass::ILocomotion_AcquireHunterSeekerTarget(int a1)
{
  int v2; // ecx
  int i; // edi
  int v4; // esi
  int v5; // eax
  _DWORD *v6; // ecx
  int v7; // eax
  _DWORD *v8; // esi
  int v9; // edx
  void **v10; // [esp+Ch] [ebp-30h] BYREF
  void *Block; // [esp+10h] [ebp-2Ch]
  int v12; // [esp+14h] [ebp-28h]
  char v13; // [esp+19h] [ebp-23h]
  int v14; // [esp+1Ch] [ebp-20h]
  int v15; // [esp+20h] [ebp-1Ch]
  void **v16; // [esp+24h] [ebp-18h] BYREF
  void *v17; // [esp+28h] [ebp-14h]
  int v18; // [esp+2Ch] [ebp-10h]
  char v19; // [esp+31h] [ebp-Bh]
  int v20; // [esp+34h] [ebp-8h]
  int v21; // [esp+38h] [ebp-4h]
  char v22; // [esp+40h] [ebp+4h]

  if ( *(_DWORD *)(*(_DWORD *)(a1 + 8) + 692) ) /*0x4cfe8e*/
    return; /*0x4cfe94*/
  ObjectVector::Construct(&v16, 0, 0); /*0x4cfea2*/
  v16 = &(void*)(void*)&DynamicVectorClass_ObjectClass___vftable; /*0x4cfeb7*/
  v21 = 10; /*0x4cfebb*/
  v20 = 0; /*0x4cfebf*/
  ObjectVector::Construct(&v10, 0, 0); /*0x4cfec3*/
  v10 = &(void*)(void*)&DynamicVectorClass_ObjectClass___vftable; /*0x4cfecd*/
  v15 = 10; /*0x4cfed3*/
  v14 = 0; /*0x4cfed7*/
  if ( !g_GameMode_Current[0] /*0x4cfeef*/
    || (v2 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 540), *(_DWORD *)(v2 + 22016) == -1)
    || (v22 = 1, (unsigned __int8)House::IsCurrentPlayer((void *)v2)) )
  {
    v22 = 0; /*0x4cfefd*/
  }
  for ( i = g_SidebarState - 1; i >= 0; --i ) /*0x4cff0c*/
  {
    v4 = *((_DWORD *)g_TechnoClass_Count + i); /*0x4cff17*/
    if ( v22 ) /*0x4cff20*/
    {
      if ( *(_DWORD *)(v4 + 540) != *(_DWORD *)&HouseClass_Array->gap0[4 /*0x4cff5e*/
                                                                     * *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 540)
                                                                                 + 22016)] )
        continue; /*0x4cff5e*/
    }
    else if ( (unsigned __int8)HouseClass::IsAlliedWith(*(void **)(*(_DWORD *)(a1 + 8) + 540), *(void **)(v4 + 540)) ) /*0x4cff32*/
    {
      continue; /*0x4cff39*/
    }
    if ( *(int *)(v4 + 108) > 0 /*0x4cffd0*/
      && !*(_BYTE *)(v4 + 129)
      && *(_BYTE *)(v4 + 144)
      && !*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v4 + 132))(v4) + 3226)
      && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v4 + 132))(v4) + 561)
      && ((*(_DWORD *)g_ScenarioClass_Instance & 0x800) == 0
       || (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) != 1
       || !*(_BYTE *)(*(_DWORD *)(v4 + 1732) + 3598)) )
    {
      if ( g_GameMode_Current[0] /*0x4d003d*/
        && (unsigned __int8)House::IsCurrentPlayer(*(void **)(*(_DWORD *)(a1 + 8) + 540))
        && !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v4 + 540) + 52) + 422)
        && ((*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 1
         || (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 6
         || (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 15
         || (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 2) )
      {
        if ( v14 >= v12 /*0x4d0069*/
          && (!v13 && v12
           || v15 <= 0
           || !((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v10[2])(&v10, v15 + v12, 0)) )
        {
          continue; /*0x4d006e*/
        }
        v5 = v14++; /*0x4d0074*/
        v6 = Block; /*0x4d007b*/
      }
      else
      {
        if ( v20 >= v18 /*0x4d00ab*/
          && (!v19 && v18
           || v21 <= 0
           || !((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v16[2])(&v16, v21 + v18, 0)) )
        {
          continue; /*0x4d00b0*/
        }
        v5 = v20++; /*0x4d00b6*/
        v6 = v17; /*0x4d00bd*/
      }
      v6[v5] = v4; /*0x4d00c1*/
    }
  }
  if ( v14 <= 0 ) /*0x4d00d1*/
  {
    if ( v20 <= 0 ) /*0x4d00f8*/
      goto LABEL_45; /*0x4d00f8*/
    v7 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, v20 - 1); /*0x4d0109*/
    v8 = v17; /*0x4d0111*/
    v9 = **(_DWORD **)(a1 + 8); /*0x4d0115*/
  }
  else
  {
    v7 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, v14 - 1); /*0x4d00e2*/
    v8 = Block; /*0x4d00ea*/
    v9 = **(_DWORD **)(a1 + 8); /*0x4d00ee*/
  }
  (*(void (__stdcall **)(_DWORD))(v9 + 968))(v8[v7]); /*0x4d011b*/
  LABEL_45:
  v10 = &(void*)(void*)&VectorClass_ObjectClass___vftable; /*0x4d0121*/
  if ( Block && v13 ) /*0x4d0136*/
  {
    RA2_OPDEL(Block); /*0x4d0139*/
    Block = 0; /*0x4d0141*/
  }
  v16 = &(void*)(void*)&VectorClass_ObjectClass___vftable; /*0x4d0149*/
  v13 = 0; /*0x4d0150*/
  v12 = 0; /*0x4d0154*/
  if ( v17 ) /*0x4d0159*/
  {
    if ( v19 ) /*0x4d015f*/
      RA2_OPDEL(v17); /*0x4d0162*/
  }
}
} // namespace gamemd
// 0x4CFC80
namespace gamemd {
int FlyLocomotionClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x4cfc86*/
    return -2147467261; /*0x4cfc88*/
  *a2 = 1247291206; /*0x4cfc96*/
  a2[1] = 298948665; /*0x4cfc9e*/
  a2[2] = -1610610249; /*0x4cfca7*/
  a2[3] = -777003740; /*0x4cfcb0*/
  return 0; /*0x4cfc8d*/
}
} // namespace gamemd
// 0x4CFCC0
namespace gamemd {
int FlyLocomotionClass::BeginMove(int * a1, int * a2)
{
  int result; // eax

  result = SwizzleManager::SaveLoad(a1, a2); /*0x4cfccb*/
  if ( result >= 0 ) /*0x4cfcd2*/
  {
    if ( a1 ) /*0x4cfcd6*/
    {
      *a1 = (int)&(void*)(void*)&FlyLocomotionClass_vftable; /*0x4cfcd8*/
      a1[1] = (int)&(void*)(void*)&FlyLocomotionClass_vftable; /*0x4cfcde*/
    }
  }
  return result; /*0x4cfce5*/
}
} // namespace gamemd
// 0x4D0390
namespace gamemd {
int FlyLocomotionClass::StubReturn96()
{
  return 96; /*0x4d0395*/
}
} // namespace gamemd
// 0x4D03A0
namespace gamemd {
FlyLocomotionClass * FlyLocomotionClass::ProcessMove(char a2)
{
  *this = &(void*)(void*)&FlyLocomotionClass_vftable; /*0x4d03a3*/
  *(this + 1) = &(void*)(void*)&FlyLocomotionClass_vftable; /*0x4d03a9*/
  LocomotionClass::Construct(); /*0x4d03b0*/
  if ( (a2 & 1) != 0 ) /*0x4d03ba*/
    RA2_OPDEL(); /*0x4d03bd*/
  return this; /*0x4d03c7*/
}
} // namespace gamemd