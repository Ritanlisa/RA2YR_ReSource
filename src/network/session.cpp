#include "network/session.hpp"

namespace gamemd
{

SessionClass* SessionClass::Instance = nullptr;

SessionClass::SessionClass() noexcept
    : GameMode(GameMode::Skirmish)
    , MPGameMode(nullptr)
    , field_08(0)
    , field_0C(0)
    , field_10(0)
    , field_14(0)
    , Config{}
    , UniqueID(0)
    , PlayerColor(-1)
    , field_160(0)
    , field_164(0)
    , field_168(0)
    , field_16C(0)
    , field_170(0)
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
    std::memset(field_304, 0, sizeof(field_304));
    std::memset(field_310, 0, sizeof(field_310));
    std::memset(ScenarioFilename, 0, sizeof(ScenarioFilename));
    std::memset(field_8AA, 0, sizeof(field_8AA));
    std::memset(field_2854, 0, sizeof(field_2854));
}

SessionClass::~SessionClass()
{
}

// TODO: complete SessionClass implementation

} // namespace gamemd
