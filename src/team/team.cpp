#include "team/team.hpp"
#include "team/script.hpp"
#include "team/tag.hpp"
#include "house/house.hpp"
#include "object/foot.hpp"

#include <cstring>

namespace gamemd
{


// TODO: complete implementation
void TeamClass::GetTaskForceMissingMemberTypes(TechnoTypeClass** dest, int& dest_count) const
{
    // TODO: iterate TaskForce members and find missing types
}

void TeamClass::LiberateMember(FootClass* foot, int idx, uint8_t count)
{
    // TODO: remove foot from team, update counts
}

} // namespace gamemd
