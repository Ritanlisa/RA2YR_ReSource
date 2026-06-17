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
    ParticleClass_field_B0 = 0;
    ParticleClass_field_B1 = 0;
    ParticleClass_field_B2 = 0;
    ParticleClass_field_B4 = 0;
    ParticleClass_field_B8 = 0;
    ParticleClass_field_BC = 0;
    ParticleClass_field_C0 = 0;
    ParticleClass_field_C4 = 0;
    ParticleClass_field_C8 = 0;
    ParticleClass_field_CC = 0;
    ParticleClass_field_double_D0 = 0.0;
    ParticleClass_field_D8  = 0;
    ParticleClass_field_DC  = 0;
    ParticleClass_field_E0  = 0;
    Velocity    = velocity;

    std::memset(&ParticleClass_field_coords_E8,  0, sizeof(ParticleClass_field_coords_E8));
    std::memset(&ParticleClass_field_coords_F4,  0, sizeof(ParticleClass_field_coords_F4));
    std::memset(&ParticleClass_field_coords_100, 0, sizeof(ParticleClass_field_coords_100));
    std::memset(&ParticleClass_field_vector3d_10C, 0, sizeof(ParticleClass_field_vector3d_10C));
    std::memset(&ParticleClass_field_vector3d_118, 0, sizeof(ParticleClass_field_vector3d_118));

    ParticleSystem  = pSystem;
    RemainingEC     = 0;
    RemainingDC     = 0;
    StateAIAdvance  = 0;
    ParticleClass_field_12D     = 0;
    StartStateAI    = 0;
    Translucency    = 0;
    ParticleClass_field_130     = 0;
    ParticleClass_field_131     = 0;
    unused_134      = 0;

    location      = coords;
    abstractFlags = kParticleFlag;

    // TODO: complete implementation
    // - Initialize particle state machine
    // - Set up movement vectors from type data
}

} // namespace gamemd
