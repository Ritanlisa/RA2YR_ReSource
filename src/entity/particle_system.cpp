#include "entity/particle_system.hpp"
#include "type/particle_system_type.hpp"
#include "entity/particle.hpp"
#include "core/vector.hpp"

#include <cstring>

namespace gamemd
{
namespace {

constexpr uint32_t kParticleSystemFlag = 0x18u;

} // anonymous namespace

ParticleSystemClass::ParticleSystemClass(ParticleSystemTypeClass* pType) noexcept
{
    Type       = pType;
    Target     = nullptr;
    Owner      = nullptr;
    OwnerHouse = nullptr;

    std::memset(&SpawnDistanceToOwner, 0, sizeof(SpawnDistanceToOwner));
    std::memset(&TargetCoords, 0, sizeof(TargetCoords));

    SpawnFrames       = 0;
    Lifetime          = 0;
    SparkSpawnFrames  = 0;
    SpotlightRadius   = 0;
    TimeToDie         = false;
    ParticleSystemClass_field_bool_F9   = false;

    // Particles DynamicVectorClass is default-constructed inline

    abstractFlags = kParticleSystemFlag;

    // TODO: complete implementation
    // - Initialize particle spawn timer
}

} // namespace gamemd
