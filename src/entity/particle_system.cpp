#include "gamemd/entity/particle_system.hpp"
#include "gamemd/type/particle_system_type.hpp"
#include "gamemd/entity/particle.hpp"
#include "gamemd/core/vector.hpp"

#include <cstring>

namespace gamemd
{

extern void* ParticleSystemClass_vftable[1];
extern DynamicVectorClass<ParticleSystemClass*> ParticleSystemClass_Array;
extern DynamicVectorClass<ObjectClass*> ObjectClass_Array;

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
    unknown_bool_F9   = false;

    // Particles DynamicVectorClass is default-constructed inline

    m_abstract_flags = kParticleSystemFlag;

    const auto vft = const_cast<void**>(reinterpret_cast<void* const*>(ParticleSystemClass_vftable));
    reinterpret_cast<void**>(this)[0] = vft;
    reinterpret_cast<void**>(this)[1] = vft;
    reinterpret_cast<void**>(this)[2] = vft;
    reinterpret_cast<void**>(this)[3] = vft;

    ParticleSystemClass_Array.AddItem(this);
    ObjectClass_Array.AddItem(this);

    // TODO: complete implementation
    // - Initialize particle spawn timer
}

} // namespace gamemd
