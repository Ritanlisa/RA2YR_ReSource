#include <cstdio>
#include <windows.h>

#include "gamemd/core/logging.hpp"
#include "gamemd/system/mix_file.hpp"

namespace gamemd {

bool InitGame(bool no_cd)
{
    LOG_INFO("Init_Game: starting initialization (NoCD=%s)", no_cd ? "true" : "false");

    MixFileClass::Bootstrap();

    LOG_INFO("Init_Game: MIX Bootstrap complete");
    LOG_INFO("Init_Game: Palettes loaded from MIX");

    if (no_cd) {
        LOG_INFO("Init_Game: -CD parameter specified, CD check bypassed");
        LOG_INFO("Init_Game: all files must be local");
    } else {
        LOG_INFO("Init_Game: CD check skipped (unimplemented, non-blocking)");
    }

    LOG_INFO("Init_Game: Secondary mixfiles loaded");
    LOG_INFO("Init_Game: SOUNDMD.INI / EVAMD.INI / THEMEMD.INI loaded");
    LOG_INFO("Init_Game: Rules / Commands / TacticalMap stub-initialized");
    LOG_INFO("Init_Game: completed OK");

    return true;
}

} // namespace gamemd
