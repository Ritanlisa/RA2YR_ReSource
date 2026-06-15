#pragma once

#include <cstdint>
#include "enums.hpp"
#include "object/abstract.hpp"

namespace gamemd {

using target_t = uint32_t;

constexpr unsigned kTargetMantissaBits = 24;
constexpr unsigned kTargetExponentBits = 8;
constexpr target_t kTargetNone = 0xFFFFFFFF;

union target_composite
{
    target_t whole;
    struct
    {
        unsigned mantissa : kTargetMantissaBits;
        unsigned exponent : kTargetExponentBits;
    };
};

inline target_t BuildTarget(AbstractType kind, unsigned value) noexcept
{
    target_composite tc;
    tc.whole = 0;
    tc.exponent = static_cast<unsigned>(kind);
    tc.mantissa = value;
    return tc.whole;
}

inline AbstractType TargetKind(target_t t) noexcept
{
    target_composite tc;
    tc.whole = t;
    return static_cast<AbstractType>(tc.exponent);
}

inline unsigned TargetValue(target_t t) noexcept
{
    target_composite tc;
    tc.whole = t;
    return tc.mantissa;
}

inline bool IsTargetCell(target_t t) noexcept
{
    return TargetKind(t) == AbstractType::Cell;
}

inline bool IsTargetObject(target_t t) noexcept
{
    auto kind = TargetKind(t);
    return kind == AbstractType::Infantry
        || kind == AbstractType::Unit
        || kind == AbstractType::Aircraft
        || kind == AbstractType::Building
        || kind == AbstractType::Terrain
        || kind == AbstractType::Bullet
        || kind == AbstractType::Anim
        || kind == AbstractType::Overlay
        || kind == AbstractType::Smudge
        || kind == AbstractType::Particle
        || kind == AbstractType::ParticleSystem
        || kind == AbstractType::VoxelAnim
        || kind == AbstractType::Wave
        || kind == AbstractType::Tiberium;
}

inline bool IsTargetTechno(target_t t) noexcept
{
    auto kind = TargetKind(t);
    return kind == AbstractType::Infantry
        || kind == AbstractType::Unit
        || kind == AbstractType::Aircraft
        || kind == AbstractType::Building;
}

inline bool IsTargetFoot(target_t t) noexcept
{
    auto kind = TargetKind(t);
    return kind == AbstractType::Infantry
        || kind == AbstractType::Unit
        || kind == AbstractType::Aircraft;
}

using ra2::game::ObjectClass;
using ra2::game::TechnoClass;
using ra2::game::FootClass;

class CellClass;
template <typename T> class DynamicVectorClass;

extern DynamicVectorClass<ObjectClass*>& CurrentObjects;

ObjectClass* AsObject(target_t target);
TechnoClass* AsTechno(target_t target);
FootClass* AsFoot(target_t target);

class TargetClass
{
public:
    TargetClass() noexcept : m_target(kTargetNone) {}
    explicit TargetClass(target_t t) noexcept : m_target(t) {}
    TargetClass(AbstractType kind, int id) noexcept
        : m_target(BuildTarget(kind, static_cast<unsigned>(id))) {}

    TargetClass(const ObjectClass* obj) noexcept;
    TargetClass(const CellClass* cell) noexcept;

    operator target_t() const { return m_target; }

    bool operator==(const TargetClass& rhs) const { return m_target == rhs.m_target; }
    bool operator!=(const TargetClass& rhs) const { return m_target != rhs.m_target; }

    AbstractType Kind() const { return TargetKind(m_target); }
    unsigned Value() const { return TargetValue(m_target); }
    target_t AsTarget() const { return m_target; }

    bool IsValid() const { return m_target != kTargetNone; }
    void Invalidate() { m_target = kTargetNone; }

    ObjectClass* AsObject() const { return gamemd::AsObject(m_target); }
    TechnoClass* AsTechno() const { return gamemd::AsTechno(m_target); }
    FootClass* AsFoot() const { return gamemd::AsFoot(m_target); }

private:
    target_t m_target;
};

} // namespace gamemd
