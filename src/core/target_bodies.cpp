// 自动生成 by tools/move_hpp_bodies.py — 函数体自 src/core/target.hpp 迁出
// hpp-impl 门控: 头文件只允许声明（= default 析构亦移出）
#include "target.hpp"

namespace gamemd {
target_t BuildTarget(AbstractType kind, unsigned value) noexcept {
    target_composite tc;
    tc.whole = 0;
    tc.exponent = (unsigned)(kind);
    tc.mantissa = value;
    return tc.whole;
}

AbstractType TargetKind(target_t t) noexcept {
    target_composite tc;
    tc.whole = t;
    return (AbstractType)(tc.exponent);
}

unsigned TargetValue(target_t t) noexcept {
    target_composite tc;
    tc.whole = t;
    return tc.mantissa;
}

bool IsTargetCell(target_t t) noexcept {
    return TargetKind(t) == AbstractType::Cell;
}

bool IsTargetObject(target_t t) noexcept {
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

bool IsTargetTechno(target_t t) noexcept {
    auto kind = TargetKind(t);
    return kind == AbstractType::Infantry
        || kind == AbstractType::Unit
        || kind == AbstractType::Aircraft
        || kind == AbstractType::Building;
}

bool IsTargetFoot(target_t t) noexcept {
    auto kind = TargetKind(t);
    return kind == AbstractType::Infantry
        || kind == AbstractType::Unit
        || kind == AbstractType::Aircraft;
}

TargetClass::TargetClass() noexcept : m_target(kTargetNone) {}

TargetClass::TargetClass(target_t t) noexcept : m_target(t) {}

TargetClass::TargetClass(AbstractType kind, int id) noexcept : m_target(BuildTarget(kind, (unsigned)(id))) {}

TargetClass::operator target_t() const { return m_target; }

bool TargetClass::operator==(const TargetClass& rhs) const { return m_target == rhs.m_target; }

bool TargetClass::operator!=(const TargetClass& rhs) const { return m_target != rhs.m_target; }

AbstractType TargetClass::Kind() const { return TargetKind(m_target); }

unsigned TargetClass::Value() const { return TargetValue(m_target); }

target_t TargetClass::AsTarget() const { return m_target; }

bool TargetClass::IsValid() const { return m_target != kTargetNone; }

void TargetClass::Invalidate() { m_target = kTargetNone; }

ObjectClass* TargetClass::AsObject() const { return gamemd::AsObject(m_target); }

TechnoClass* TargetClass::AsTechno() const { return gamemd::AsTechno(m_target); }

FootClass* TargetClass::AsFoot() const { return gamemd::AsFoot(m_target); }
}

