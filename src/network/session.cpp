#include "gamemd/network/session.hpp"

namespace gamemd
{

SessionClass* SessionClass::Instance = nullptr;

SessionClass::SessionClass() noexcept
    : GameMode(GameMode::Skirmish)
    , MPGameMode(nullptr)
    , sessionField_08(0)
    , sessionField_0C(0)
    , sessionField_10(0)
    , sessionField_14(0)
    , Config{}
    , UniqueID(0)
    , PlayerColor(-1)
    , sessionField_160(0)
    , sessionField_164(0)
    , sessionField_168(0)
    , sessionField_16C(0)
    , sessionField_170(0)
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
    std::memset(sessionField_304, 0, sizeof(sessionField_304));
    std::memset(sessionField_310, 0, sizeof(sessionField_310));
    std::memset(ScenarioFilename, 0, sizeof(ScenarioFilename));
    std::memset(sessionField_8AA, 0, sizeof(sessionField_8AA));
    std::memset(sessionField_2854, 0, sizeof(sessionField_2854));
}

SessionClass::~SessionClass()
{
}

// TODO: complete SessionClass implementation

} // namespace gamemd
