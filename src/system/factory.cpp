// G42.32 P: tree-universe marker -- e4 tree-owned decls suppressed
#define GAMEMD_TREE_UNIVERSE 1
#include "system/factory.hpp"
#include "e4/classes/House_e4.hpp"

namespace gamemd
{

// FactoryClass stub: factory construction is handled by building/house
// production systems. Full implementation deferred to Stage 11.

} // namespace gamemd

#include "system/factory.hpp"
#include "e4/e4_globals_decls.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"

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
bool * FactoryClass::AbandonProduction()
{

  int v2; // ecx
  char *v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  House *v7; // ecx
  int v8; // ecx
  TechnoTypeClass **v11; // [esp+Ch] [ebp-8h]

  v2 = this->q058; /*0x4c9ff9*/
  if ( !v2 ) /*0x4c9ffe*/
    return 0; /*0x4ca116*/
  (*(void (**)(int))(*(unsigned int *)v2 + 136))(v2); /*0x4ca007*/
  Debug::Log(); /*0x4ca016*/
  v3 = (char *)(*(int (**)(unsigned int))(**&this->q058 + 136))(this->q058); /*0x4ca023*/
  v4 = (*(int (**)(char *, unsigned int))(*(unsigned int *)v3 + 132))(v3, *(unsigned int *)(this->q058 + 540)); /*0x4ca037*/
  HouseClass::AddPower(*&this->owner, v4 - this->balance); /*0x4ca046*/
  v5 = this->specialItem; /*0x4ca04b*/
  this->balance = 0; /*0x4ca053*/
  if ( v5 ) /*0x4ca056*/
    this->specialItem = -1; /*0x4ca058*/
  v6 = *(unsigned int *)&stru_A8E960.random[528]; /*0x4ca05b*/
  this->queuedCapacity = 0; /*0x4ca065*/
  this->q02C = v6; /*0x4ca068*/
  this->queuedObjects = v11; /*0x4ca06e*/
  this->queuedCount = 0; /*0x4ca071*/
  v7 = *&this->owner; /*0x4ca074*/
  this->production = 0; /*0x4ca077*/
  this->isSuspended = 1; /*0x4ca07a*/
  this->u8_5D = 1; /*0x4ca07e*/
  if ( !(unsigned __int8)House::IsCurrentPlayer(v7) ) /*0x4ca082*/
  {
    if ( (*(int (**)(unsigned int))(**&this->q058 + 44))(this->q058) == 15 ) /*0x4ca096*/
      *(unsigned int *)&this->owner->baseDefenseTeamCount = -1; /*0x4ca09b*/
    if ( (*(int (**)(unsigned int))(**&this->q058 + 44))(this->q058) == 1 ) /*0x4ca0ac*/
      *(unsigned int *)&this->owner->ratioTeamBuildings = -1; /*0x4ca0b1*/
    if ( (*(int (**)(unsigned int))(**&this->q058 + 44))(this->q058) == 2 ) /*0x4ca0c2*/
      *(unsigned int *)&this->owner->dropshipData = -1; /*0x4ca0c7*/
    if ( (*(int (**)(unsigned int))(**&this->q058 + 44))(this->q058) == 6 ) /*0x4ca0d8*/
      *(unsigned int *)&this->owner->ratioTeamInfantry = -1; /*0x4ca0dd*/
  }
  ++dword_A8E7AC; /*0x4ca0eb*/
  v8 = this->q058; /*0x4ca0f1*/
  if ( v8 ) /*0x4ca0f6*/
    (*(void (**)(int, int))(*(unsigned int *)v8 + 32))(v8, 1); /*0x4ca0fc*/
  this->q058 = 0; /*0x4ca0ff*/
  --dword_A8E7AC; /*0x4ca109*/
  return 1; /*0x4ca108*/

}
} // namespace gamemd