#include "gamemd/team/campaign.hpp"

#include <cstring>

namespace gamemd
{

CampaignClass::CampaignClass() noexcept
    : m_idx_cd(-1)
    , m_final_movie(-1)
{
    std::memset(m_scenario, 0, sizeof(m_scenario));
    std::memset(m_description, 0, sizeof(m_description));
}

void CampaignClass::CreateFromINIList(CCINIClass* ini)
{
    // TODO: read all campaign entries from INI (BATTLESD.BATTLES list)
    (void)ini;
}

int CampaignClass::FindIndex(const char* name)
{
    // TODO: linear search through campaign array by scenario name
    (void)name;
    return -1;
}

} // namespace gamemd
