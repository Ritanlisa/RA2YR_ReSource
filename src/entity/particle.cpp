#include "gamemd/entity/particle.hpp"
#include "gamemd/entity/particle_system.hpp"
#include "gamemd/type/particle_type.hpp"
#include "gamemd/core/vector.hpp"

#include <cstring>

namespace gamemd
{

extern void* ParticleClass_vftable[1];
extern DynamicVectorClass<ParticleClass*> ParticleClass_Array;
extern DynamicVectorClass<ObjectClass*> ObjectClass_Array;

namespace {

constexpr uint32_t kParticleFlag = 0x16u;

} // anonymous namespace

ParticleClass::ParticleClass(ParticleTypeClass* pType,
                             const CoordStruct& coords,
                             float velocity,
                             ParticleSystemClass* pSystem) noexcept
{
    Type      = pType;
    unknown_B0 = 0;
    unknown_B1 = 0;
    unknown_B2 = 0;
    unknown_B4 = 0;
    unknown_B8 = 0;
    unknown_BC = 0;
    unknown_C0 = 0;
    unknown_C4 = 0;
    unknown_C8 = 0;
    unknown_CC = 0;
    unknown_double_D0 = 0.0;
    unknown_D8  = 0;
    unknown_DC  = 0;
    unknown_E0  = 0;
    Velocity    = velocity;

    std::memset(&unknown_coords_E8,  0, sizeof(unknown_coords_E8));
    std::memset(&unknown_coords_F4,  0, sizeof(unknown_coords_F4));
    std::memset(&unknown_coords_100, 0, sizeof(unknown_coords_100));
    std::memset(&unknown_vector3d_10C, 0, sizeof(unknown_vector3d_10C));
    std::memset(&unknown_vector3d_118, 0, sizeof(unknown_vector3d_118));

    ParticleSystem  = pSystem;
    RemainingEC     = 0;
    RemainingDC     = 0;
    StateAIAdvance  = 0;
    unknown_12D     = 0;
    StartStateAI    = 0;
    Translucency    = 0;
    unknown_130     = 0;
    unknown_131     = 0;
    unused_134      = 0;

    m_location      = coords;
    m_abstract_flags = kParticleFlag;

    const auto vft = const_cast<void**>(reinterpret_cast<void* const*>(ParticleClass_vftable));
    reinterpret_cast<void**>(this)[0] = vft;
    reinterpret_cast<void**>(this)[1] = vft;
    reinterpret_cast<void**>(this)[2] = vft;
    reinterpret_cast<void**>(this)[3] = vft;

    ParticleClass_Array.AddItem(this);
    ObjectClass_Array.AddItem(this);

    // TODO: complete implementation
    // - Initialize particle state machine
    // - Set up movement vectors from type data
}

} // namespace gamemd
