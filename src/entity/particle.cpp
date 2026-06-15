#include "entity/particle.hpp"
#include "entity/particle_system.hpp"
#include "type/particle_type.hpp"
#include "core/vector.hpp"

#include <cstring>

namespace gamemd
{
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

    location      = coords;
    abstractFlags = kParticleFlag;

    // TODO: complete implementation
    // - Initialize particle state machine
    // - Set up movement vectors from type data
}

} // namespace gamemd
