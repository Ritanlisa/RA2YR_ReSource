#include "render/voxel.hpp"

namespace gamemd {

// --- VoxelAnimTypeClass ---

HRESULT __stdcall VoxelAnimTypeClass::GetClassID(CLSID* class_id) { return E_NOTIMPL; }
AbstractType __stdcall VoxelAnimTypeClass::WhatAmI() const { return AbstractType::VoxelAnimType; }
int VoxelAnimTypeClass::Size() const { return sizeof(*this); }
bool VoxelAnimTypeClass::SpawnAtMapCoords(CellStruct* coords, HouseClass* owner) { return false; }
ObjectClass* VoxelAnimTypeClass::CreateObject(HouseClass* owner) { return nullptr; }
 VoxelAnimTypeClass::VoxelAnimTypeClass(noinit_t) noexcept {}

// --- VoxelAnimClass ---

AbstractType __stdcall VoxelAnimClass::WhatAmI() const { return AbstractType::VoxelAnim; }
int VoxelAnimClass::Size() const { return sizeof(*this); }
 VoxelAnimClass::VoxelAnimClass(noinit_t) noexcept {}

} // namespace gamemd
