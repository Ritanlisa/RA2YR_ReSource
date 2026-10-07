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
    int v3; // eax
    int v4; // eax
    int v5; // eax
    int v6; // eax
    wchar_t *v7; // eax
    void *v8; // ecx
    int v9; // ecx
    int v11; // [esp+Ch] [ebp-8h]

    v2 = *(unsigned int *)(this + 88); /*0x4c9ff9*/
    if ( !v2 ) /*0x4c9ffe*/
      return 0; /*0x4ca116*/
    v3 = (*(int (__thiscall **)(int))(*(unsigned int *)v2 + 136))(v2); /*0x4ca007*/
    Debug::Log("Abandoning production of %s\n", (const char *)(v3 + 100)); /*0x4ca016*/
    v4 = (*(int (__thiscall **)(unsigned int))(**(unsigned int **)(this + 88) + 136))(*(unsigned int *)(this + 88)); /*0x4ca023*/
    v5 = (unsigned int)((*(int (__thiscall **)(int, unsigned int))(*(unsigned int *)v4 + 132))(v4, *(unsigned int *)(*(unsigned int *)(this + 88) + 540)))); /*0x4ca037*/
    HouseClass::AddPower(*(unsigned int **)(this + 108), v5 - *(unsigned int *)(this + 96)); /*0x4ca046*/
    v6 = *(unsigned int *)(this + 104); /*0x4ca04b*/
    *(unsigned int *)(this + 96) = 0; /*0x4ca053*/
    if ( v6 ) /*0x4ca056*/
      *(unsigned int *)(this + 104) = -1; /*0x4ca058*/
 v7 = (wchar_t *)(dword_A8ED84); /*0x4ca05b*/
    *(unsigned int *)(this + 56) = 0; /*0x4ca065*/
    *(unsigned int *)(this + 44) = v7; /*0x4ca068*/
    *(unsigned int *)(this + 48) = v11; /*0x4ca06e*/
    *(unsigned int *)(this + 52) = 0; /*0x4ca071*/
    v8 = *(void **)(this + 108); /*0x4ca074*/
    *(unsigned int *)(this + 36) = 0; /*0x4ca077*/
    *(unsigned char *)(this + 112) = 1; /*0x4ca07a*/
    *(unsigned char *)(this + 93) = 1; /*0x4ca07e*/
    if ( !(unsigned __int8)House::IsCurrentPlayer(v8) ) /*0x4ca082*/
    {
      if ( (*(int (__thiscall **)(unsigned int))(**(unsigned int **)(this + 88) + 44))(*(unsigned int *)(this + 88)) == 15 ) /*0x4ca096*/
        *(unsigned int *)(*(unsigned int *)(this + 108) + 22100) = -1; /*0x4ca09b*/
      if ( (*(int (__thiscall **)(unsigned int))(**(unsigned int **)(this + 88) + 44))(*(unsigned int *)(this + 88)) == 1 ) /*0x4ca0ac*/
        *(unsigned int *)(*(unsigned int *)(this + 108) + 22096) = -1; /*0x4ca0b1*/
      if ( (*(int (__thiscall **)(unsigned int))(**(unsigned int **)(this + 88) + 44))(*(unsigned int *)(this + 88)) == 2 ) /*0x4ca0c2*/
        *(unsigned int *)(*(unsigned int *)(this + 108) + 22104) = -1; /*0x4ca0c7*/
      if ( (*(int (__thiscall **)(unsigned int))(**(unsigned int **)(this + 88) + 44))(*(unsigned int *)(this + 88)) == 6 ) /*0x4ca0d8*/
        *(unsigned int *)(*(unsigned int *)(this + 108) + 22092) = -1; /*0x4ca0dd*/
    }
    ++dword_A8E7AC; /*0x4ca0eb*/
    v9 = *(unsigned int *)(this + 88); /*0x4ca0f1*/
    if ( v9 ) /*0x4ca0f6*/
      (*(void (__thiscall **)(int, int))(*(unsigned int *)v9 + 32))(v9, 1); /*0x4ca0fc*/
    *(unsigned int *)(this + 88) = 0; /*0x4ca0ff*/
    --dword_A8E7AC; /*0x4ca109*/
    return 1; /*0x4ca108*/
}
}
