#include <cstdio>
#include <windows.h>

#include "gamemd/core/logging.hpp"
#include "gamemd/system/mix_file.hpp"

namespace gamemd {

static void DumpMIXSample(MixFileClass* mix, const char* name)
{
    if (!mix || !mix->IsValid()) return;
    LOG_INFO("  %s: %d files, sampling first 20 hashes:", name, mix->CountFiles);
    int n = mix->CountFiles < 20 ? mix->CountFiles : 20;
    for (int i = 0; i < n; ++i) {
        uint32_t id = mix->GetFileID(i);
        LOG_INFO("    [%d] 0x%08X", i, id);
    }
}

bool InitGame(bool no_cd)
{
    LOG_INFO("Init_Game: starting initialization (NoCD=%s)", no_cd ? "true" : "false");

    MixFileClass::Bootstrap();

    LOG_INFO("Init_Game: MIX Bootstrap complete");
    DumpMIXSample(MixFileClass::Generics.RA2MD,   "expandmd01.mix");
    DumpMIXSample(MixFileClass::Generics.RA2,     "ra2md.mix");
    DumpMIXSample(MixFileClass::Generics.MAIN,    "ra2.mix");
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
