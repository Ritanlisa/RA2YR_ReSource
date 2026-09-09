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

// design: likely inlined by compiler (no standalone symbol), no callgraph/git history reference
target_t BuildTarget(AbstractType kind, unsigned value) noexcept;

// design: likely inlined by compiler (no standalone symbol), no callgraph/git history reference
AbstractType TargetKind(target_t t) noexcept;

// design: likely inlined by compiler (no standalone symbol), no callgraph/git history reference
unsigned TargetValue(target_t t) noexcept;

bool IsTargetCell(target_t t) noexcept;

bool IsTargetObject(target_t t) noexcept;

bool IsTargetTechno(target_t t) noexcept;

bool IsTargetFoot(target_t t) noexcept;

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
    // unmatched: no callgraph reference and no git history record
    TargetClass() noexcept;
    // unmatched: no callgraph reference and no git history record
    explicit TargetClass(target_t t) noexcept;
    TargetClass(AbstractType kind, int id) noexcept
; // unmatched: no callgraph reference and no git history record

    // unmatched: no callgraph reference and no git history record
    TargetClass(const ObjectClass* obj) noexcept;
    // unmatched: no callgraph reference and no git history record
    TargetClass(const CellClass* cell) noexcept;

    // unmatched: no callgraph reference and no git history record
    operator target_t() const;

    // unmatched: no callgraph reference and no git history record
    bool operator==(const TargetClass& rhs) const;
    // unmatched: no callgraph reference and no git history record
    bool operator!=(const TargetClass& rhs) const;

    AbstractType Kind() const;
    // unmatched: no callgraph reference and no git history record
    unsigned Value() const;
    target_t AsTarget() const;

    bool IsValid() const;
    // unmatched: no callgraph reference and no git history record
    void Invalidate();

    ObjectClass* AsObject() const;
    TechnoClass* AsTechno() const;
    FootClass* AsFoot() const;

private:
    target_t m_target;
};

} // namespace gamemd
