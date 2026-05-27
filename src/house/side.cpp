#include "gamemd/house/side.hpp"

#include <cstring>

namespace gamemd
{

extern void* SideClass_vftable[1];

SideClass::SideClass() noexcept
    : m_zero_3C(0)
    , m_ui_name(nullptr)
    , m_house_types(nullptr)
    , m_house_types_count(0)
{
    std::memset(m_id, 0, sizeof(m_id));
    std::memset(m_ui_name_label, 0, sizeof(m_ui_name_label));
    std::memset(m_name, 0, sizeof(m_name));

    const auto vtbl = const_cast<void**>(reinterpret_cast<void* const*>(SideClass_vftable));
    reinterpret_cast<void**>(this)[0] = vtbl;
    reinterpret_cast<void**>(this)[1] = vtbl;
    reinterpret_cast<void**>(this)[2] = vtbl;
    reinterpret_cast<void**>(this)[3] = vtbl;
}

} // namespace gamemd
