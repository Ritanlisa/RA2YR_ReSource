#include "house/side.hpp"

#include <cstring>

namespace gamemd
{

SideClass::SideClass() noexcept
    : m_zero_3C(0)
    , uiName(nullptr)
    , houseTypes(nullptr)
    , houseTypesCount(0)
{
    std::memset(id, 0, sizeof(id));
    std::memset(uiNameLabel, 0, sizeof(uiNameLabel));
    std::memset(name, 0, sizeof(name));
}

} // namespace gamemd

#include "house/side.hpp"

namespace gamemd {

// --- SideClass ---

HRESULT __stdcall SideClass::GetClassID(CLSID* class_id) { return 0; }
HRESULT __stdcall SideClass::Load(IStream* stream) { return 0; }
HRESULT __stdcall SideClass::Save(IStream* stream, int clear_dirty) { return 0; }
AbstractType __stdcall SideClass::whatAmI() const { return AbstractType::Side; }
int SideClass::objectSize() const { return 0; }

} // namespace gamemd
