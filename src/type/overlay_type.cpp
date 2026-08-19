#include "type/overlay_type.hpp"

namespace gamemd {

// --- OverlayTypeClass ---

HRESULT __stdcall OverlayTypeClass::GetClassID(CLSID* pClassID) { return E_NOTIMPL; }
HRESULT __stdcall OverlayTypeClass::Load(IStream* pStm) { return S_OK; }
HRESULT __stdcall OverlayTypeClass::Save(IStream* pStm, BOOL fClearDirty) { return S_OK; }
AbstractType __stdcall OverlayTypeClass::whatAmI() const { return AbstractType::OverlayType; }
int OverlayTypeClass::objectSize() const { return 0; }
CoordStruct* OverlayTypeClass::onCellChanged(CoordStruct* pDest, CoordStruct* pSrc) const { return nullptr; }
bool OverlayTypeClass::SpawnAtMapCoords(CellStruct* pMapCoords, HouseClass* pOwner) { return false; }
ObjectClass* OverlayTypeClass::CreateObject(HouseClass* pOwner) { return nullptr; }
void OverlayTypeClass::Draw(Point2D* pClientCoords, RectangleStruct* pClipRect, int nFrame) {}

} // namespace gamemd
