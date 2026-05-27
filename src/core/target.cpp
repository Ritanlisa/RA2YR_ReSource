#include "gamemd/core/target.hpp"
#include "gamemd/object/object.hpp"
#include "gamemd/core/vector.hpp"

namespace gamemd {

using ra2::game::ObjectClass;
using ra2::game::TechnoClass;
using ra2::game::FootClass;

TargetClass::TargetClass(const ObjectClass* obj) noexcept
{
    if (obj)
    {
        m_target = BuildTarget(obj->WhatAmI(), static_cast<unsigned>(obj->GetArrayIndex()));
    }
    else
    {
        m_target = kTargetNone;
    }
}

TargetClass::TargetClass(const CellClass* /*cell*/) noexcept
{
    m_target = kTargetNone;
}

namespace {

ObjectClass* FindObjectByTypeAndId(AbstractType kind, int id)
{
    auto& objects = CurrentObjects;
    for (int i = 0; i < objects.Count; ++i)
    {
        auto* obj = objects.Items[i];
        if (obj && obj->WhatAmI() == kind && obj->GetArrayIndex() == id)
        {
            return obj;
        }
    }
    return nullptr;
}

} // anonymous namespace

ObjectClass* AsObject(target_t target)
{
    if (target == kTargetNone)
        return nullptr;

    auto kind = TargetKind(target);
    auto id = static_cast<int>(TargetValue(target));

    auto* obj = FindObjectByTypeAndId(kind, id);
    if (obj && obj->m_is_alive)
        return obj;

    return nullptr;
}

TechnoClass* AsTechno(target_t target)
{
    if (!IsTargetTechno(target))
        return nullptr;

    auto* obj = AsObject(target);
    return reinterpret_cast<TechnoClass*>(obj);
}

FootClass* AsFoot(target_t target)
{
    if (!IsTargetFoot(target))
        return nullptr;

    auto* obj = AsObject(target);
    return reinterpret_cast<FootClass*>(obj);
}

} // namespace gamemd
