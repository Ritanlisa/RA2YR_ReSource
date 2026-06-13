#include "gamemd/team/campaign.hpp"
#include "gamemd/system/ini_class.hpp"
#include "gamemd/core/reverse_marker.hpp"

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

// IDA: 0x46ccd0 — CampaignClass::LoadFromINIList (Load campaign entry from INI section)
// Reads: CD (int), FinalMovie (bool), Scenario (string), Description (string/wstring)
REVERSE(0x46ccd0, "CampaignClass::LoadFromINIList: read campaign INI entry", "None")
bool CampaignClass::LoadFromINIList(CCINIClass* ini)
{
    // IDA: ResetSection + AbstractTypeClass::LoadFromINI
    ini->ResetSection();
    // Note: AbstractTypeClass::LoadFromINI is called in original but we handle via
    // base class initialization pattern. Here we read the campaign-specific fields.

    // IDA: ReadInt_Overwrite("CD") → m_idx_cd
    int cd_val = ini->ReadInt("CD", m_idx_cd);
    m_idx_cd = cd_val;

    // IDA: GetBool("FinalMovie") → m_final_movie
    m_final_movie = ini->GetBool("FinalMovie", m_final_movie) ? 1 : 0;

    // IDA: GetString("Scenario") → m_scenario, then _strupr
    ini->GetString("Scenario", m_scenario, sizeof(m_scenario), m_scenario);
    _strupr(m_scenario);

    // IDA: if ReadBool("DebugOnly") → build "Description - for debug/testing"
    if (ini->ReadBool("DebugOnly", false))
    {
        char tmp[1024] = {};
        ini->GetString("Description", "", sizeof(tmp), tmp);
        strcat(tmp, " - for debug/testing");
        // IDA: BulkCharToWide → m_description
        // Simplified: convert ASCII to wide char inline
        for (int i = 0; i < 127 && tmp[i]; ++i)
            m_description[i] = static_cast<wchar_t>(tmp[i]);
    }
    else
    {
        // IDA: GetStringEx → m_description (wide string)
        ini->GetStringEx("Description", m_description, 128);
    }
    return true;
}

// IDA: 0x49e400 — CampaignClass::FindMission (search missions by scenario name)
REVERSE(0x49e400, "CampaignClass::FindMission: search by name", "None")
int CampaignClass::FindMission(const char* name)
{
    if (!name || !*name)
        return -1;

    // IDA: lazy-load INI if not loaded
    // (LoadFromINI would populate the mission array)
    // For now, fall back to linear search pattern
    return FindIndex(name);
}

void CampaignClass::CreateFromINIList(CCINIClass* ini)
{
    LoadFromINIList(ini);
}

int CampaignClass::FindIndex(const char* name)
{
    if (!name || !*name)
        return -1;
    // Compare against m_scenario (case-insensitive)
    if (_strnicmp(m_scenario, name, strlen(name)) == 0
        && strlen(name) == strlen(m_scenario))
        return 0;
    return -1;
}

// IDA: 0x46cfc0 — CampaignClass::Stat (write power/checksum stats)
REVERSE(0x46cfc0, "CampaignClass::Stat: power and checksum", "None")
int CampaignClass::Stat(void* checksum_ctx)
{
    // IDA: AbstractTypeClass::ProcessPower → Power::TimerProcess(m_idx_cd)
    // IDA: Checksum::AddString → checksum m_scenario
    // IDA: Power::TimerProcess(m_final_movie) → return
    (void)checksum_ctx;
    return m_final_movie;
}

} // namespace gamemd
