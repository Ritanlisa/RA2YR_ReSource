#include "gamemd/object/object.hpp"
#include "gamemd/type/object_type.hpp"
#include "gamemd/core/vector.hpp"

namespace gamemd {
namespace {

using namespace ra2::game;

constexpr uint32_t kObjectFlag = 0x2u;

} // anonymous namespace

double ObjectClass::GetHealthPercentage() const
{
    return m_health > 0 ? static_cast<double>(m_health) / GetType()->m_strength : 0.0;
}

ObjectClass::ObjectClass() noexcept
{
    m_unknown_24 = 0;
    m_unknown_28 = 0;
    m_fall_rate  = 0;

    m_next_object   = nullptr;
    m_attached_tag  = nullptr;
    m_attached_bomb = nullptr;

    m_custom_sound = static_cast<int32_t>(-1);

    m_bomb_visible             = false;
    m_health                   = 0;
    m_estimated_health         = 0;
    m_is_on_map                = true;
    m_needs_redraw             = false;
    m_in_limbo                 = true;
    m_in_open_topped_transport = false;
    m_is_selected              = false;
    m_has_parachute            = false;
    m_parachute                = nullptr;
    m_on_bridge                = false;
    m_is_falling_down          = false;
    m_was_falling_down         = false;
    m_is_a_bomb                = false;
    m_is_alive                 = true;
    m_is_in_logic              = false;
    m_is_visible               = false;

    m_last_layer = 0;

    m_location     = CoordStruct{};
    m_line_trailer = nullptr;

    std::memset(&m_ambient_sound_controller, 0, sizeof(m_ambient_sound_controller));
    std::memset(&m_custom_sound_controller,   0, sizeof(m_custom_sound_controller));

    const auto vtbl = const_cast<void**>(reinterpret_cast<void* const*>(ObjectClass_vftable));
    reinterpret_cast<void**>(this)[0] = vtbl;
    reinterpret_cast<void**>(this)[1] = vtbl;
    reinterpret_cast<void**>(this)[2] = vtbl;
    reinterpret_cast<void**>(this)[3] = vtbl;

    m_abstract_flags |= kObjectFlag;
}

} // namespace game
} // namespace ra2
