#include "core/target.hpp"
#include "object/object.hpp"
#include "core/vector.hpp"

namespace gamemd {

using ra2::game::ObjectClass;
using ra2::game::TechnoClass;
using ra2::game::FootClass;

TargetClass::TargetClass(const ObjectClass* obj) noexcept
{
    if (obj)
    {
        m_target = BuildTarget(obj->whatAmI(), static_cast<unsigned>(obj->arrayIndex()));
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
        if (obj && obj->whatAmI() == kind && obj->arrayIndex() == id)
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
    if (obj && obj->isAliveFlag)
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
