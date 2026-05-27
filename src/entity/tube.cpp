#include "gamemd/entity/tube.hpp"
#include "gamemd/core/vector.hpp"

namespace gamemd
{

extern void* TubeClass_vftable[1];
extern DynamicVectorClass<TubeClass*> TubeClass_Array;
extern DynamicVectorClass<ObjectClass*> ObjectClass_Array;

namespace {

constexpr uint32_t kTubeFlag = 0x35u;

} // anonymous namespace

TubeClass::TubeClass() noexcept noexcept
{
    unknown_AC = 0;
    unknown_B0 = 0;
    unknown_B4 = 0;
    unknown_B8 = 0;
    unknown_BC = 0;
    unknown_C0 = 0;
    unknown_C4 = 0;

    m_abstract_flags = kTubeFlag;

    const auto vft = const_cast<void**>(reinterpret_cast<void* const*>(TubeClass_vftable));
    reinterpret_cast<void**>(this)[0] = vft;
    reinterpret_cast<void**>(this)[1] = vft;
    reinterpret_cast<void**>(this)[2] = vft;
    reinterpret_cast<void**>(this)[3] = vft;

    TubeClass_Array.AddItem(this);
    ObjectClass_Array.AddItem(this);

    // TODO: complete implementation
    // - Tubes are tunnel/wormhole path connectors
}

} // namespace gamemd
