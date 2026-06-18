#include "team/campaign.hpp"

#include <cstring>

namespace gamemd
{

CampaignClass::CampaignClass() noexcept
    : idxCd(-1)
    , finalMovie(-1)
{
    std::memset(scenario, 0, sizeof(scenario));
    std::memset(description, 0, sizeof(description));
}

void CampaignClass::CreateFromINIList(CCINIClass* ini)
{
    (void)ini;
}

int CampaignClass::FindIndex(const char* name)
{
    (void)name;
    return -1;
}

} // namespace gamemd
