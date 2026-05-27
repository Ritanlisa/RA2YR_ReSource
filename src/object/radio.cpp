#include "gamemd/object/radio.hpp"

namespace ra2 {
namespace game {

RadioClass::RadioClass() noexcept
    : m_last_commands{0, 0, 0}
    , m_radio_links{}
{
}

} // namespace game
} // namespace ra2
