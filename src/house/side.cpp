#include "gamemd/house/side.hpp"

#include <cstring>

namespace gamemd
{

SideClass::SideClass() noexcept
    : m_zero_3C(0)
    , m_ui_name(nullptr)
    , m_house_types(nullptr)
    , m_house_types_count(0)
{
    std::memset(m_id, 0, sizeof(m_id));
    std::memset(m_ui_name_label, 0, sizeof(m_ui_name_label));
    std::memset(m_name, 0, sizeof(m_name));
}

} // namespace gamemd
