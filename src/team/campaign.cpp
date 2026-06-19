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

#include "team/campaign.hpp"

namespace gamemd {

// --- CampaignClass ---

HRESULT __stdcall CampaignClass::GetClassID(CLSID* class_id) { return 0; }
HRESULT __stdcall CampaignClass::Load(IStream* stream) { return 0; }
HRESULT __stdcall CampaignClass::Save(IStream* stream, int clear_dirty) { return 0; }
AbstractType __stdcall CampaignClass::whatAmI() const { return AbstractType::Campaign; }
int CampaignClass::objectSize() const { return 0; }

} // namespace gamemd
