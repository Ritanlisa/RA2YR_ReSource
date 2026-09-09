// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x718000
int TeleportLocomotionClass::TeleportLocomotionClass()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall TeleportLocomotionClass::TeleportLocomotionClass(int this)
{
  wchar_t *v2; // ecx

  LocomotionClass::Init((_DWORD *)this); /*0x718003*/
  *(_DWORD *)(this + 28) = MEMORY[0xB0EBF8]; /*0x718011*/
  *(_DWORD *)(this + 32) = MEMORY[0xB0EBFC]; /*0x71801a*/
  *(_DWORD *)(this + 36) = MEMORY[0xB0EC00]; /*0x718026*/
  *(_DWORD *)(this + 40) = MEMORY[0xB0EBF8]; /*0x71802e*/
  *(_DWORD *)(this + 44) = MEMORY[0xB0EBFC]; /*0x718036*/
  *(_DWORD *)(this + 48) = MEMORY[0xB0EC00]; /*0x71803e*/
  this->Moving = 0; /*0x718043*/
  this->TeleportLocomotionClass_field_bool_35 = 0; /*0x718046*/
  this->TeleportLocomotionClass_field_bool_36 = 0; /*0x718049*/
  this->State = 0; /*0x71804c*/
  v2 = MEMORY[0xA8ED84]; /*0x71804f*/
  this->Timer.TimeLeft = 0; /*0x718055*/
  *(_DWORD *)(this + 60) = v2; /*0x718058*/
  this->Piggybackee = 0; /*0x71805b*/
  *(_DWORD *)this = &TeleportLocomotionClass::`vftable'; /*0x71805e*/
  *(_DWORD *)(this + 4) = &TeleportLocomotionClass::`vftable'; /*0x718064*/
  *(_DWORD *)(this + 24) = &TeleportLocomotionClass::`vftable'; /*0x71806b*/
  return this; /*0x718074*/
}
}
