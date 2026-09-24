// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x718000
T TeleportLocomotionClass::TeleportLocomotionClass()
{
  wchar_t *v2; // ecx

  LocomotionClass::Init((_DWORD *)this); /*0x718003*/
  *(_DWORD *)(this + 28) = dword_B0EBF8; /*0x718011*/
  *(_DWORD *)(this + 32) = dword_B0EBFC; /*0x71801a*/
  *(_DWORD *)(this + 36) = dword_B0EC00; /*0x718026*/
  *(_DWORD *)(this + 40) = dword_B0EBF8; /*0x71802e*/
  *(_DWORD *)(this + 44) = dword_B0EBFC; /*0x718036*/
  *(_DWORD *)(this + 48) = dword_B0EC00; /*0x71803e*/
  *(_BYTE *)(this + 52) = 0; /*0x718043*/
  *(_BYTE *)(this + 53) = 0; /*0x718046*/
  *(_BYTE *)(this + 54) = 0; /*0x718049*/
  *(_DWORD *)(this + 56) = 0; /*0x71804c*/
  v2 = g_CurrentFrame; /*0x71804f*/
  *(_DWORD *)(this + 68) = 0; /*0x718055*/
  *(_DWORD *)(this + 60) = v2; /*0x718058*/
  *(_DWORD *)(this + 72) = 0; /*0x71805b*/
  *(_DWORD *)this = &TeleportLocomotionClass::`vftable'; /*0x71805e*/
  *(_DWORD *)(this + 4) = &TeleportLocomotionClass::`vftable'; /*0x718064*/
  *(_DWORD *)(this + 24) = &TeleportLocomotionClass::`vftable'; /*0x71806b*/
  return this; /*0x718074*/
}