#include "system/factory.hpp"
#include "e4/classes/House_e4.hpp"

namespace gamemd
{

// FactoryClass stub: factory construction is handled by building/house
// production systems. Full implementation deferred to Stage 11.

} // namespace gamemd

#include "system/factory.hpp"
#include "e4/e4_globals_decls.hpp"

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
  void *v8; // ecx
  int v9; // ecx
  int v11; // [esp+Ch] [ebp-8h]

  v2 = (int)((gamemd::TechnoTypeClass **)(((unsigned char *)(this) + 0x058)));
  if ( !v2 ) /*0x4c9ffe*/
    return 0; /*0x4ca116*/
  v3 = (*(int (**)(int))(*(unsigned int *)v2 + 136))(v2); /*0x4ca007*/
  Debug::Log("Abandoning production of %s\n", (const char *)(v3 + 100)); /*0x4ca016*/
  v4 = (*(int (**)(unsigned int))(**(unsigned int **)(&this->NeedsSaveOrLink8) + 136))(((unsigned char *)(this) + 0x058)); /*0x4ca023*/
  v5 = (*(int (**)(int, unsigned int))(*(unsigned int *)v4 + 132))(v4, *(unsigned int *)(((unsigned char *)(this) + 0x058) + 540)); /*0x4ca037*/
  HouseClass::AddPower(*(unsigned int **)(&this->u32_288), v5 - this->balance); /*0x4ca046*/
  v6 = this->specialItem; /*0x4ca04b*/
  this->balance = 0; /*0x4ca053*/
  if ( v6 ) /*0x4ca056*/
    this->specialItem = -1; /*0x4ca058*/
  dword_A8ED84 = dword_A8ED84; /*0x4ca05b*/
  this->queuedCapacity = 0; /*0x4ca065*/
  ((unsigned char *)(this) + 0x02C) = (unsigned char *)(dword_A8ED84); /*0x4ca068*/
  this->queuedObjects = (gamemd::TechnoTypeClass **)(v11); /*0x4ca06e*/
  this->queuedCount = 0; /*0x4ca071*/
  v8 = *(void **)(&this->u32_288); /*0x4ca074*/
  this->production = 0; /*0x4ca077*/
  this->isSuspended = 1; /*0x4ca07a*/
  this->u8_5D = 1; /*0x4ca07e*/
  if ( !(uint8_t)House::IsCurrentPlayer(v8) ) /*0x4ca082*/
  {
    if ( (*(int (**)(unsigned int))(**(unsigned int **)(&this->NeedsSaveOrLink8) + 44))(((unsigned char *)(this) + 0x058)) == 15 ) /*0x4ca096*/
      this->owner->baseDefenseTeamCount = -1; /*0x4ca09b*/
    if ( (*(int (**)(unsigned int))(**(unsigned int **)(&this->NeedsSaveOrLink8) + 44))(((unsigned char *)(this) + 0x058)) == 1 ) /*0x4ca0ac*/
      this->owner->ratioTeamBuildings = -1; /*0x4ca0b1*/
    if ( (*(int (**)(unsigned int))(**(unsigned int **)(&this->NeedsSaveOrLink8) + 44))(((unsigned char *)(this) + 0x058)) == 2 ) /*0x4ca0c2*/
      this->owner->dropshipData = -1; /*0x4ca0c7*/
    if ( (*(int (**)(unsigned int))(**(unsigned int **)(&this->NeedsSaveOrLink8) + 44))(((unsigned char *)(this) + 0x058)) == 6 ) /*0x4ca0d8*/
      this->owner->ratioTeamInfantry = -1; /*0x4ca0dd*/
  }
  ++dword_A8E7AC; /*0x4ca0eb*/
  v9 = (int)(((unsigned char *)(this) + 0x058)); /*0x4ca0f1*/
  if ( v9 ) /*0x4ca0f6*/
    (*(void (**)(int, int))(*(unsigned int *)v9 + 32))(v9, 1); /*0x4ca0fc*/
  ((unsigned char *)(this) + 0x058) = 0; /*0x4ca0ff*/
  --dword_A8E7AC; /*0x4ca109*/
  return 1; /*0x4ca108*/
}