#include "system/factory.hpp"

namespace gamemd
{

// FactoryClass stub: factory construction is handled by building/house
// production systems. Full implementation deferred to Stage 11.

} // namespace gamemd

#include "system/factory.hpp"
#include "e4/e4_globals.hpp"

namespace gamemd {

// --- FactoryClass ---

HRESULT __stdcall FactoryClass::GetClassID(CLSID* class_id) { return 0; }
HRESULT __stdcall FactoryClass::Load(IStream* stream) { return 0; }
HRESULT __stdcall FactoryClass::Save(IStream* stream, int clear_dirty) { return 0; }
AbstractType __stdcall FactoryClass::whatAmI() const { return AbstractType::Factory; }
int FactoryClass::objectSize() const { return 0; }
void FactoryClass::calculateChecksum(void* checksum) const {}

// owner fix 2026-09-10: FactoryClass (not BuildingClass) — YRpp layout owner@0x6C/object@0x58 tri-mapped
// 0x4c9ff0
HouseClass * * FactoryClass::AbandonProduction() {
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  wchar_t *v7; // eax
  #375 *v8; // ecx
  int v9; // ecx
  int v11; // [esp+Ch] [ebp-8h]

  v2 = *(_DWORD *)(this + 88); /*0x4c9ff9*/
  if ( !v2 ) /*0x4c9ffe*/
    return 0; /*0x4ca116*/
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 136))(v2); /*0x4ca007*/
  Debug::Log("Abandoning production of %s\n", (const char *)(v3 + 100)); /*0x4ca016*/
  v4 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 88) + 136))(*(_DWORD *)(this + 88)); /*0x4ca023*/
  v5 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 132))(v4, *(_DWORD *)(*(_DWORD *)(this + 88) + 540)); /*0x4ca037*/
  HouseClass::AddPower(*(_DWORD **)(this + 108), v5 - *(_DWORD *)(this + 96)); /*0x4ca046*/
  v6 = *(_DWORD *)(this + 104); /*0x4ca04b*/
  *(_DWORD *)(this + 96) = 0; /*0x4ca053*/
  if ( v6 ) /*0x4ca056*/
    *(_DWORD *)(this + 104) = -1; /*0x4ca058*/
  v7 = g_CurrentFrame; /*0x4ca05b*/
  *(_DWORD *)(this + 56) = 0; /*0x4ca065*/
  *(_DWORD *)(this + 44) = v7; /*0x4ca068*/
  *(_DWORD *)(this + 48) = v11; /*0x4ca06e*/
  *(_DWORD *)(this + 52) = 0; /*0x4ca071*/
  v8 = *(#375 **)(this + 108); /*0x4ca074*/
  *(_DWORD *)(this + 36) = 0; /*0x4ca077*/
  *(_BYTE *)(this + 112) = 1; /*0x4ca07a*/
  *(_BYTE *)(this + 93) = 1; /*0x4ca07e*/
  if ( !(unsigned __int8)House::IsCurrentPlayer(v8) ) /*0x4ca082*/
  {
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 88) + 44))(*(_DWORD *)(this + 88)) == 15 ) /*0x4ca096*/
      *(_DWORD *)(*(_DWORD *)(this + 108) + 22100) = -1; /*0x4ca09b*/
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 88) + 44))(*(_DWORD *)(this + 88)) == 1 ) /*0x4ca0ac*/
      *(_DWORD *)(*(_DWORD *)(this + 108) + 22096) = -1; /*0x4ca0b1*/
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 88) + 44))(*(_DWORD *)(this + 88)) == 2 ) /*0x4ca0c2*/
      *(_DWORD *)(*(_DWORD *)(this + 108) + 22104) = -1; /*0x4ca0c7*/
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 88) + 44))(*(_DWORD *)(this + 88)) == 6 ) /*0x4ca0d8*/
      *(_DWORD *)(*(_DWORD *)(this + 108) + 22092) = -1; /*0x4ca0dd*/
  }
  ++g_IKnowWhatImDoing; /*0x4ca0eb*/
  v9 = *(_DWORD *)(this + 88); /*0x4ca0f1*/
  if ( v9 ) /*0x4ca0f6*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 32))(v9, 1); /*0x4ca0fc*/
  *(_DWORD *)(this + 88) = 0; /*0x4ca0ff*/
  --g_IKnowWhatImDoing; /*0x4ca109*/
  return 1; /*0x4ca108*/
}