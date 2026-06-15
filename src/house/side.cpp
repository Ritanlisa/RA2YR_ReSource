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
