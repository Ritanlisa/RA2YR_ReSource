// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/FlyLocomotionClass_e4.hpp"
#include "e4/classes/FogOfWar_e4.hpp"
#include "e4/classes/LocomotionClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ObjectVector_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
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
  unsigned int * v5;
  unsigned int *v6; // ecx
  int v7; // eax
  unsigned int *v8; // esi
  int v9; // edx
  void* v10;
  void *Block; // [esp+10h] [ebp-2Ch]
  int v12; // [esp+14h] [ebp-28h]
  char v13; // [esp+19h] [ebp-23h]
  int v14; // [esp+1Ch] [ebp-20h]
  int v15; // [esp+20h] [ebp-1Ch]
  void* v16;
  void *v17; // [esp+28h] [ebp-14h]
  int v18; // [esp+2Ch] [ebp-10h]
  char v19; // [esp+31h] [ebp-Bh]
  int v20; // [esp+34h] [ebp-8h]
  int v21; // [esp+38h] [ebp-4h]
  char v22; // [esp+40h] [ebp+4h]

  if ( *(unsigned int *)(*(unsigned int *)(a1 + 8) + 692) ) /*0x4cfe8e*/
    return; /*0x4cfe94*/
  ObjectVector::Construct(&v16, 0, 0); /*0x4cfea2*/
  v21 = 10; /*0x4cfebb*/
  v20 = 0; /*0x4cfebf*/
  ObjectVector::Construct(&v10, 0, 0); /*0x4cfec3*/
  v15 = 10; /*0x4cfed3*/
  v14 = 0; /*0x4cfed7*/
  if ( !g_GameMode_Current[0] /*0x4cfeef*/
    || (v2 = *(unsigned int *)(*(unsigned int *)(a1 + 8) + 540), *(unsigned int *)(v2 + 22016) == -1)
    || (v22 = 1, (uint8_t)House::IsCurrentPlayer((void *)v2)) )
  {
    v22 = 0; /*0x4cfefd*/
  }
  for ( i = g_SidebarState - 1; i >= 0; --i ) /*0x4cff0c*/
  {
    v4 = *((unsigned int *)g_TechnoClass_Count + i); /*0x4cff17*/
    if ( v22 ) /*0x4cff20*/
    {
      if ( *(unsigned int *)(v4 + 540) != *(unsigned int *)&HouseClass_Array->gap0[4 /*0x4cff5e*/
                                                                     * *(unsigned int *)(*(unsigned int *)(*(unsigned int *)(a1 + 8) + 540)
                                                                                 + 22016)] )
        continue; /*0x4cff5e*/
    }
    else if ( (uint8_t)HouseClass::IsAlliedWith(*(void **)(*(unsigned int *)(a1 + 8) + 540), *(void **)(v4 + 540)) ) /*0x4cff32*/
    {
      continue; /*0x4cff39*/
    }
    if ( *(int *)(v4 + 108) > 0 /*0x4cffd0*/
      && !*(unsigned char *)(v4 + 129)
      && *(unsigned char *)(v4 + 144)
      && !*(unsigned char *)((*(int (__thiscall **)(int))(*(unsigned int *)v4 + 132))(v4) + 3226)
      && *(unsigned char *)((*(int (__thiscall **)(int))(*(unsigned int *)v4 + 132))(v4) + 561)
      && ((*(unsigned int *)g_ScenarioClass_Instance & 0x800) == 0
       || (*(int (__thiscall **)(int))(*(unsigned int *)v4 + 44))(v4) != 1
       || !*(unsigned char *)(*(unsigned int *)(v4 + 1732) + 3598)) )
    {
      if ( g_GameMode_Current[0] /*0x4d003d*/
        && (uint8_t)House::IsCurrentPlayer(*(void **)(*(unsigned int *)(a1 + 8) + 540))
        && !*(unsigned char *)(*(unsigned int *)(*(unsigned int *)(v4 + 540) + 52) + 422)
        && ((*(int (__thiscall **)(int))(*(unsigned int *)v4 + 44))(v4) == 1
         || (*(int (__thiscall **)(int))(*(unsigned int *)v4 + 44))(v4) == 6
         || (*(int (__thiscall **)(int))(*(unsigned int *)v4 + 44))(v4) == 15
         || (*(int (__thiscall **)(int))(*(unsigned int *)v4 + 44))(v4) == 2) )
      {
        if ( v14 >= v12 /*0x4d0069*/
          && (!v13 && v12
           || v15 <= 0
           || !((uint8_t (__thiscall *)(void ***, int, unsigned int))v10[2])(&v10, v15 + v12, 0)) )
        {
          continue; /*0x4d006e*/
        }
        v5 = (int)((unsigned int *)(v14++));
        v6 = (unsigned int *)(Block);
      }
      else
      {
        if ( v20 >= v18 /*0x4d00ab*/
          && (!v19 && v18
           || v21 <= 0
           || !((uint8_t (__thiscall *)(void ***, int, unsigned int))v16[2])(&v16, v21 + v18, 0)) )
        {
          continue; /*0x4d00b0*/
        }
        v5 = (int)((unsigned int *)(v20++));
        v6 = (unsigned int *)(v17);
      }
      v6[v5] = v4; /*0x4d00c1*/
    }
  }
  if ( v14 <= 0 ) /*0x4d00d1*/
  {
    if ( v20 <= 0 ) /*0x4d00f8*/
      goto LABEL_45; /*0x4d00f8*/
    v7 = Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 0, v20 - 1); /*0x4d0109*/
    v8 = v17; /*0x4d0111*/
    v9 = **(unsigned int **)(a1 + 8); /*0x4d0115*/
  }
  else
  {
    v7 = (unsigned int *)(Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 0, v14 - 1));
    v8 = (unsigned int *)(Block);
    v9 = **(unsigned int **)(a1 + 8); /*0x4d00ee*/
  }
  (*(void (__stdcall **)(unsigned int))(v9 + 968))(v8[v7]); /*0x4d011b*/
  LABEL_45:
  if ( Block && v13 ) /*0x4d0136*/
  {
    RA2_OPDEL(Block); /*0x4d0139*/
    Block = 0; /*0x4d0141*/
  }
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
      *a1 = (int)&FlyLocomotionClass_vftable; /*0x4cfcd8*/
      a1[1] = (int)&FlyLocomotionClass_vftable; /*0x4cfcde*/
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
  LocomotionClass::Construct(); /*0x4d03b0*/
  if ( (a2 & 1) != 0 ) /*0x4d03ba*/
    RA2_OPDEL(); /*0x4d03bd*/
  return this; /*0x4d03c7*/
}
} // namespace gamemd