#include "gamemd/object/object.hpp"
#include "gamemd/type/object_type.hpp"

#include <cstring>

namespace ra2 {
namespace game {

namespace {

constexpr uint32_t kObjectFlag = 0x2u;

} // anonymous namespace

double ObjectClass::GetHealthPercentage() const
{
    return m_health > 0 ? static_cast<double>(m_health) / reinterpret_cast<gamemd::ObjectTypeClass*>(GetType())->Strength : 0.0;
}

bool ObjectClass::Put(const CoordStruct& coords, unsigned int face_dir)
{
    if (m_in_limbo)
        return false;

    m_is_on_map = true;
    m_in_limbo = false;
    SetLocation(coords);

    auto* cell = GetCell();
    if (cell)
        MarkAllOccupationBits(coords);

    return true;
}

bool ObjectClass::Remove()
{
    if (!m_is_on_map)
        return false;

    UnmarkAllOccupationBits(m_location);
    m_is_on_map = false;
    m_in_limbo = true;
    m_is_alive = false;

    return true;
}

void ObjectClass::Destroy()
{
    Remove();
    m_is_alive = false;
}

ObjectClass::ObjectClass() noexcept
    : m_unknown_24(0)
    , m_unknown_28(0)
    , m_fall_rate(0)
    , m_next_object(nullptr)
    , m_attached_tag(nullptr)
    , m_attached_bomb(nullptr)
    , m_custom_sound(static_cast<int32_t>(-1))
    , m_bomb_visible(false)
    , m_health(0)
    , m_estimated_health(0)
    , m_is_on_map(true)
    , m_unknown_78(0)
    , m_unknown_7C(0)
    , m_needs_redraw(false)
    , m_in_limbo(true)
    , m_in_open_topped_transport(false)
    , m_is_selected(false)
    , m_has_parachute(false)
    , m_parachute(nullptr)
    , m_on_bridge(false)
    , m_is_falling_down(false)
    , m_was_falling_down(false)
    , m_is_a_bomb(false)
    , m_is_alive(true)
    , m_last_layer(0)
    , m_is_in_logic(false)
    , m_is_visible(false)
    , m_location{}
    , m_line_trailer(nullptr)
{
    std::memset(&m_ambient_sound_controller, 0, sizeof(m_ambient_sound_controller));
    std::memset(&m_custom_sound_controller, 0, sizeof(m_custom_sound_controller));

    m_abstract_flags |= kObjectFlag;
}

} // namespace game
} // namespace ra2
