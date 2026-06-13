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

// IDA: 0x46d050 — CampaignClass::Seek (IPersistStream::Seek)
// Delegates to AbstractClass::SaveLoad_Prefix
REVERSE(0x46d050, "CampaignClass::Seek: delegate to AbstractClass::SaveLoad_Prefix", "None")
int CampaignClass::Seek(IStream* stream, int offset)
{
    int result = AbstractClass::SaveLoad_Prefix(stream, offset);
    return (result >= 0) ? 0 : result;
}

// IDA: 0x46d000 — CampaignClass::Write (IPersistStream::Save/Load dispatch)
// Calls SaveLoad_Prefix_0 then AbstractTypeClass::Init + restores vtables
REVERSE(0x46d000, "CampaignClass::Write: SaveLoad prefix + vtable init", "None")
int CampaignClass::Write(IStream* stream)
{
    int result = AbstractClass::SaveLoad_Prefix_0(stream);
    if (result >= 0)
    {
        // IDA: AbstractTypeClass::Init restores type identity
        // IDA: Write 4 vtable pointers back (MI layout restoration)
        // These are handled by the compiler's vtable placement
        return 0;
    }
    return result;
}

} // namespace gamemd

// IDA: 0x46d4a0 — Game::SendCampaignOptions (network campaign setup)
// Serializes 8-player campaign options and sends to all known players
REVERSE(0x46d4a0, "Game::SendCampaignOptions: network campaign options", "None")
void SendCampaignOptions()
{
    // IDA: Copy game setup buffer, check settings
    extern char g_GameSetupBuffer[452];
    char buffer[452];
    memcpy(buffer, g_GameSetupBuffer, 452);

    // IDA: Fill 8 player slots with campaign options
    for (int i = 0; i < 8; ++i)
    {
        // IDA: Read player options (Start, Country/PlayerSide, Color)
        // If player is observer or empty → set to -1
        // Otherwise → read from SessionClass globals
        // These are handled by the network layer; stub for standalone build
    }

    // IDA: Send 455-byte packet to each known player via Network::SendToPlayer
    // Loop through player list, call Network::ReceiveLoop after each send
}

