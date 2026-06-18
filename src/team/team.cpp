#include "team/team.hpp"
#include "object/foot.hpp"

#include <cstring>

namespace gamemd
{

void TeamClass::GetTaskForceMissingMemberTypes(
    TechnoTypeClass** dest, int& dest_count) const
{
    // Iterates the 6 type slots (countObjects[i]) and reports
    // which types are missing (count == 0).
    int missing = 0;

    for (int i = 0; i < 6; ++i)
    {
        if (countObjects[i] <= 0)
        {
            if (dest && missing < dest_count)
                dest[missing] = nullptr;
            ++missing;
        }
    }

    dest_count = missing;
}

void TeamClass::LiberateMember(FootClass* foot, int idx,
                                uint8_t count)
{
    (void)count;
    if (!foot)
        return;

    // Unlink from firstUnit chain
    if (firstUnit == foot)
        firstUnit = nullptr;

    // Decrement type-specific count
    if (idx >= 0 && idx < 6)
    {
        if (countObjects[idx] > 0)
            --countObjects[idx];
    }

    if (totalObjects > 0)
        --totalObjects;
}

} // namespace gamemd
