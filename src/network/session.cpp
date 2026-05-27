#include "gamemd/network/session.hpp"

namespace gamemd
{

SessionClass* SessionClass::Instance = nullptr;

SessionClass::SessionClass() noexcept
    : GameMode(GameMode::Skirmish)
    , MPGameMode(nullptr)
    , unknown_08(0)
    , unknown_0C(0)
    , unknown_10(0)
    , unknown_14(0)
    , Config{}
    , UniqueID(0)
    , PlayerColor(-1)
    , unknown_160(0)
    , unknown_164(0)
    , unknown_168(0)
    , unknown_16C(0)
    , unknown_170(0)
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
    std::memset(unknown_304, 0, sizeof(unknown_304));
    std::memset(unknown_310, 0, sizeof(unknown_310));
    std::memset(ScenarioFilename, 0, sizeof(ScenarioFilename));
    std::memset(unknown_8AA, 0, sizeof(unknown_8AA));
    std::memset(unknown_2854, 0, sizeof(unknown_2854));
}

SessionClass::~SessionClass()
{
}

// TODO: complete SessionClass implementation

} // namespace gamemd
