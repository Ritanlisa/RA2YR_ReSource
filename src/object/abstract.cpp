#include "gamemd/object/abstract.hpp"

namespace ra2 {
namespace game {

AbstractClass::AbstractClass() noexcept
    : m_unique_id(static_cast<uint32_t>(-1))
    , m_abstract_flags(0)
    , m_unknown_18(0)
    , m_ref_count(0)
    , m_dirty(false)
{
    const auto preserved = static_cast<uint8_t>(m_abstract_flags & 0xF8u);
    m_abstract_flags = preserved;
}

} // namespace game
} // namespace ra2
