#include "network/session.hpp"

namespace gamemd
{

SessionClass* SessionClass::Instance = nullptr;

SessionClass::SessionClass() noexcept
    : GameMode(GameMode::Skirmish)
    , MPGameMode(nullptr)
    , SessionClass_field_08(0)
    , SessionClass_field_0C(0)
    , SessionClass_field_10(0)
    , SessionClass_field_14(0)
    , Config{}
    , UniqueID(0)
    , PlayerColor(-1)
    , SessionClass_field_160(0)
    , SessionClass_field_164(0)
    , SessionClass_field_168(0)
    , SessionClass_field_16C(0)
    , SessionClass_field_170(0)
    , idxSide(-1)
    , idxSide2(-1)
    , Color(-1)
    , Color2(-1)
    , Side(-1)
    , Side2(-1)
    , MuteSWLaunches(false)
    , WOLLimitResolution(false)
    , LastNickSlot(-1)
    , CurrentlyInGame(false)
{
    std::memset(Handle, 0, sizeof(Handle));
    std::memset(&SkirmishPreferences, 0, sizeof(SkirmishPreferences));
    std::memset(&LANPreferences, 0, sizeof(LANPreferences));
    std::memset(&WOLPreferences, 0, sizeof(WOLPreferences));
    std::memset(SessionClass_field_304, 0, sizeof(SessionClass_field_304));
    std::memset(SessionClass_field_310, 0, sizeof(SessionClass_field_310));
    std::memset(ScenarioFilename, 0, sizeof(ScenarioFilename));
    std::memset(SessionClass_field_8AA, 0, sizeof(SessionClass_field_8AA));
    std::memset(SessionClass_field_2854, 0, sizeof(SessionClass_field_2854));
}

SessionClass::~SessionClass()
{
}

// TODO: complete SessionClass implementation

} // namespace gamemd

#include "network/session.hpp"

namespace gamemd {

// --- SessionClass ---

bool SessionClass::IsCampaign() const { return GameMode == GameMode::Campaign; }
bool SessionClass::IsSkirmish() const { return GameMode == GameMode::Skirmish; }
bool SessionClass::IsMultiplayer() const { return GameMode == GameMode::Internet || GameMode == GameMode::Skirmish; }

} // namespace gamemd
