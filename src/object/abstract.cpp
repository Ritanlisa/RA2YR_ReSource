#include "gamemd/object/abstract.hpp"

namespace ra2 {
namespace game {

extern void* AbstractClass_vftable[1];
extern void* INoticeSink_vftable[1];
extern void* INoticeSource_vftable[1];

AbstractClass::AbstractClass() noexcept
{
    reinterpret_cast<void**>(this)[2]
        = const_cast<void**>(reinterpret_cast<void* const*>(INoticeSink_vftable));
    reinterpret_cast<void**>(this)[3]
        = const_cast<void**>(reinterpret_cast<void* const*>(INoticeSource_vftable));

    m_unknown_18 = 0;
    m_ref_count  = 0;
    m_dirty      = false;

    const auto preserved = static_cast<uint8_t>(m_abstract_flags & 0xF8u);
    m_unique_id = static_cast<uint32_t>(-1);

    const auto vtbl = const_cast<void**>(reinterpret_cast<void* const*>(AbstractClass_vftable));
    reinterpret_cast<void**>(this)[0] = vtbl;
    reinterpret_cast<void**>(this)[1] = vtbl;
    reinterpret_cast<void**>(this)[2] = vtbl;
    reinterpret_cast<void**>(this)[3] = vtbl;

    m_abstract_flags = preserved;
}

} // namespace game
} // namespace ra2
