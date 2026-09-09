// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4CC9A0
int FlyLocomotionClass::LocomotionClass()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall FlyLocomotionClass::LocomotionClass(int this)
{
  int v2; // edx

  LocomotionClass::Init((_DWORD *)this); /*0x4cc9a3*/
  this->AirportBound = 0; /*0x4cc9ad*/
  *(_DWORD *)(this + 28) = MEMORY[0x8B3C78]; /*0x4cc9b6*/
  *(_DWORD *)(this + 32) = MEMORY[0x8B3C7C]; /*0x4cc9be*/
  *(_DWORD *)(this + 36) = MEMORY[0x8B3C80]; /*0x4cc9c7*/
  *(_DWORD *)(this + 40) = MEMORY[0x8B3C78]; /*0x4cc9d3*/
  *(_DWORD *)(this + 44) = MEMORY[0x8B3C7C]; /*0x4cc9dc*/
  v2 = MEMORY[0x8B3C80]; /*0x4cc9df*/
  *(_DWORD *)(this + 64) = 0; /*0x4cc9e5*/
  *(_DWORD *)(this + 72) = 0; /*0x4cc9e8*/
  this->HasMoveOrder = 0; /*0x4cc9eb*/
  this->FlightLevel = 0; /*0x4cc9ee*/
  *(_DWORD *)(this + 68) = 0; /*0x4cc9f1*/
  *(_DWORD *)(this + 76) = 0; /*0x4cc9f4*/
  *(_BYTE *)(this + 80) = 0; /*0x4cc9f7*/
  *(_BYTE *)(this + 81) = 0; /*0x4cc9fa*/
  *(_BYTE *)(this + 82) = 0; /*0x4cc9fd*/
  this->FlyLocomotionClass_field_bool_53 = 0; /*0x4cca00*/
  this->FlyLocomotionClass_field_54 = 0; /*0x4cca03*/
  this->FlyLocomotionClass_field_58 = 0; /*0x4cca06*/
  this->IsElevating = 0; /*0x4cca09*/
  *(_DWORD *)this = &FlyLocomotionClass::`vftable'; /*0x4cca0c*/
  *(_DWORD *)(this + 4) = &FlyLocomotionClass::`vftable'; /*0x4cca12*/
  *(_DWORD *)(this + 48) = v2; /*0x4cca1b*/
  return this; /*0x4cca1e*/
}
}

// 0x4CFC80
int FlyLocomotionClass::ddtor(int a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall FlyLocomotionClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x4cfc86*/
    return -2147467261; /*0x4cfc88*/
  *a2 = 1247291206; /*0x4cfc96*/
  a2[1] = 298948665; /*0x4cfc9e*/
  a2[2] = -1610610249; /*0x4cfca7*/
  a2[3] = -777003740; /*0x4cfcb0*/
  return 0; /*0x4cfc8d*/
}
}

// 0x4CFCC0
int FlyLocomotionClass::BeginMove(int * a1, int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall FlyLocomotionClass::_vt05(int *a1, int *a2)
{
  int result; // eax

  result = SwizzleManager::SaveLoad(a1, a2); /*0x4cfccb*/
  if ( result >= 0 ) /*0x4cfcd2*/
  {
    if ( a1 ) /*0x4cfcd6*/
    {
      *a1 = (int)&FlyLocomotionClass::`vftable'; /*0x4cfcd8*/
      a1[1] = (int)&FlyLocomotionClass::`vftable'; /*0x4cfcde*/
    }
  }
  return result; /*0x4cfce5*/
}
}

// 0x4CFE80
void FlyLocomotionClass::ILocomotion_AcquireHunterSeekerTarget(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __stdcall FlyLocomotionClass::ILocomotion_AcquireHunterSeekerTarget(int a1)
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
  v16 = &DynamicVectorClass<ObjectClass *>::`vftable'; /*0x4cfeb7*/
  v21 = 10; /*0x4cfebb*/
  v20 = 0; /*0x4cfebf*/
  ObjectVector::Construct(&v10, 0, 0); /*0x4cfec3*/
  v10 = &DynamicVectorClass<ObjectClass *>::`vftable'; /*0x4cfecd*/
  v15 = 10; /*0x4cfed3*/
  v14 = 0; /*0x4cfed7*/
  if ( !MEMORY[0xA8B238][0] /*0x4cfeef*/
    || (v2 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 540), *(_DWORD *)(v2 + 22016) == -1)
    || (v22 = 1, (unsigned __int8)House::IsCurrentPlayer((#375 *)v2)) )
  {
    v22 = 0; /*0x4cfefd*/
  }
  for ( i = MEMORY[0xA8EC88] - 1; i >= 0; --i ) /*0x4cff0c*/
  {
    v4 = *((_DWORD *)MEMORY[0xA8EC7C] + i); /*0x4cff17*/
    if ( v22 ) /*0x4cff20*/
    {
      if ( *(_DWORD *)(v4 + 540) != *(_DWORD *)&HouseClass_Array->__pad_0[4 /*0x4cff5e*/
                                                                        * *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 8)
                                                                                                + 540)
                                                                                    + 22016)] )
        continue; /*0x4cff5e*/
    }
    else if ( (unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(*(_DWORD *)(a1 + 8) + 540), *(#375 **)(v4 + 540)) ) /*0x4cff32*/
    {
      continue; /*0x4cff39*/
    }
    if ( *(int *)(v4 + 108) > 0 /*0x4cffd0*/
      && !*(_BYTE *)(v4 + 129)
      && *(_BYTE *)(v4 + 144)
      && !*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v4 + 132))(v4) + 3226)
      && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v4 + 132))(v4) + 561)
      && ((*(_DWORD *)MEMORY[0xA8B230] & 0x800) == 0
       || (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) != 1
       || !*(_BYTE *)(*(_DWORD *)(v4 + 1732) + 3598)) )
    {
      if ( MEMORY[0xA8B238][0] /*0x4d003d*/
        && (unsigned __int8)House::IsCurrentPlayer(*(#375 **)(*(_DWORD *)(a1 + 8) + 540))
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
    v7 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, v20 - 1); /*0x4d0109*/
    v8 = v17; /*0x4d0111*/
    v9 = **(_DWORD **)(a1 + 8); /*0x4d0115*/
  }
  else
  {
    v7 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, v14 - 1); /*0x4d00e2*/
    v8 = Block; /*0x4d00ea*/
    v9 = **(_DWORD **)(a1 + 8); /*0x4d00ee*/
  }
  (*(void (__stdcall **)(_DWORD))(v9 + 968))(v8[v7]); /*0x4d011b*/
LABEL_45:
  v10 = &VectorClass<ObjectClass *>::`vftable'; /*0x4d0121*/
  if ( Block && v13 ) /*0x4d0136*/
  {
    __3_YAXPAX_Z(Block); /*0x4d0139*/
    Block = 0; /*0x4d0141*/
  }
  v16 = &VectorClass<ObjectClass *>::`vftable'; /*0x4d0149*/
  v13 = 0; /*0x4d0150*/
  v12 = 0; /*0x4d0154*/
  if ( v17 ) /*0x4d0159*/
  {
    if ( v19 ) /*0x4d015f*/
      __3_YAXPAX_Z(v17); /*0x4d0162*/
  }
}
}

// 0x4D0390
int FlyLocomotionClass::StubReturn96()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int FlyLocomotionClass::_vt09()
{
  return 96; /*0x4d0395*/
}
}

// 0x4D03A0
FlyLocomotionClass * FlyLocomotionClass::ProcessMove(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
FlyLocomotionClass *__thiscall FlyLocomotionClass::ProcessMove(_DWORD *Block, char a2)
{
  *Block = &FlyLocomotionClass::`vftable'; /*0x4d03a3*/
  *(Block + 1) = &FlyLocomotionClass::`vftable'; /*0x4d03a9*/
  LocomotionClass::Construct(Block); /*0x4d03b0*/
  if ( (a2 & 1) != 0 ) /*0x4d03ba*/
    __3_YAXPAX_Z(Block); /*0x4d03bd*/
  return (FlyLocomotionClass *)Block; /*0x4d03c7*/
}
}
