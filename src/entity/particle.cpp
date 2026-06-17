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
    field_B0 = 0;
    field_B1 = 0;
    field_B2 = 0;
    field_B4 = 0;
    field_B8 = 0;
    field_BC = 0;
    field_C0 = 0;
    field_C4 = 0;
    field_C8 = 0;
    field_CC = 0;
    field_double_D0 = 0.0;
    field_D8  = 0;
    field_DC  = 0;
    field_E0  = 0;
    Velocity    = velocity;

    std::memset(&field_coords_E8,  0, sizeof(field_coords_E8));
    std::memset(&field_coords_F4,  0, sizeof(field_coords_F4));
    std::memset(&field_coords_100, 0, sizeof(field_coords_100));
    std::memset(&field_vector3d_10C, 0, sizeof(field_vector3d_10C));
    std::memset(&field_vector3d_118, 0, sizeof(field_vector3d_118));

    ParticleSystem  = pSystem;
    RemainingEC     = 0;
    RemainingDC     = 0;
    StateAIAdvance  = 0;
    field_12D     = 0;
    StartStateAI    = 0;
    Translucency    = 0;
    field_130     = 0;
    field_131     = 0;
    unused_134      = 0;

    location      = coords;
    abstractFlags = kParticleFlag;

    // TODO: complete implementation
    // - Initialize particle state machine
    // - Set up movement vectors from type data
}

} // namespace gamemd
