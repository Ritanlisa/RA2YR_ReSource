#include "entity/voxel_anim.hpp"

namespace gamemd {

// --- VoxelAnimClass ---

HRESULT __stdcall VoxelAnimClass::GetClassID(CLSID* pClassID) { return E_NOTIMPL; }
HRESULT __stdcall VoxelAnimClass::Save(IStream* pStm, BOOL fClearDirty) { return S_OK; }
AbstractType __stdcall VoxelAnimClass::whatAmI() const { return kObjectTypeId; }
int VoxelAnimClass::objectSize() const { return sizeof(VoxelAnimClass); }

} // namespace gamemd
