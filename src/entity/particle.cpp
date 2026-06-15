#include "gamemd/entity/particle.hpp"
#include "gamemd/entity/particle_system.hpp"
#include "gamemd/type/particle_type.hpp"
#include "gamemd/core/vector.hpp"

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
    particleField_B0 = 0;
    particleField_B1 = 0;
    particleField_B2 = 0;
    particleField_B4 = 0;
    particleField_B8 = 0;
    particleField_BC = 0;
    particleField_C0 = 0;
    particleField_C4 = 0;
    particleField_C8 = 0;
    particleField_CC = 0;
    particleField_double_D0 = 0.0;
    particleField_D8  = 0;
    particleField_DC  = 0;
    particleField_E0  = 0;
    Velocity    = velocity;

    std::memset(&particleField_coords_E8,  0, sizeof(particleField_coords_E8));
    std::memset(&particleField_coords_F4,  0, sizeof(particleField_coords_F4));
    std::memset(&particleField_coords_100, 0, sizeof(particleField_coords_100));
    std::memset(&particleField_vector3d_10C, 0, sizeof(particleField_vector3d_10C));
    std::memset(&particleField_vector3d_118, 0, sizeof(particleField_vector3d_118));

    ParticleSystem  = pSystem;
    RemainingEC     = 0;
    RemainingDC     = 0;
    StateAIAdvance  = 0;
    particleField_12D     = 0;
    StartStateAI    = 0;
    Translucency    = 0;
    particleField_130     = 0;
    particleField_131     = 0;
    unused_134      = 0;

    m_location      = coords;
    m_abstract_flags = kParticleFlag;

    // TODO: complete implementation
    // - Initialize particle state machine
    // - Set up movement vectors from type data
}

} // namespace gamemd
