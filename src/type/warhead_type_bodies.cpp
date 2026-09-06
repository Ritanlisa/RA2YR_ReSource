// 自动生成 by tools/move_hpp_bodies.py — 函数体自 src/type/warhead_type.hpp 迁出
// hpp-impl 门控: 头文件只允许声明（= default 析构亦移出）
#include "warhead_type.hpp"

namespace gamemd {
WarheadFlags::WarheadFlags(bool FF , bool Retal , bool Acquire) : ForceFire(FF), Retaliate(Retal), PassiveAcquire(Acquire) {}

HRESULT __stdcall WarheadTypeClass::GetClassID(CLSID* pClassID) { return E_NOTIMPL; }

HRESULT __stdcall WarheadTypeClass::Load(IStream* pStm) { return S_OK; }

HRESULT __stdcall WarheadTypeClass::Save(IStream* pStm, BOOL fClearDirty) { return S_OK; }

AbstractType __stdcall WarheadTypeClass::whatAmI() const { return AbstractType::WarheadType; }

int WarheadTypeClass::objectSize() const { return 0; }
}

