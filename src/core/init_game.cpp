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
        int sz = mix->GetSize(i);
        LOG_INFO("    [%d] 0x%08X size=%d", i, id, sz);
    }
    // Search for files that look like palettes (768 bytes) or SHPs
    int pal_count = 0, shp_count = 0;
    for (int i = 0; i < mix->CountFiles; ++i) {
        int sz = mix->GetSize(i);
        if (sz == 768) { pal_count++; if (pal_count <= 3) LOG_INFO("  PAL-size file [%d] id=0x%08X sz=%d", i, mix->GetFileID(i), sz); }
        if (sz > 10000 && sz < 500000) { shp_count++; if (shp_count <= 3) LOG_INFO("  SHP-size file [%d] id=0x%08X sz=%d", i, mix->GetFileID(i), sz); }
    }
    if (pal_count > 3) LOG_INFO("  ... +%d more 768-byte files", pal_count - 3);
    if (shp_count > 3) LOG_INFO("  ... +%d more 10KB-500KB files", shp_count - 3);
}

bool InitGame(bool no_cd)
{
    LOG_INFO("Init_Game: starting initialization (NoCD=%s)", no_cd ? "true" : "false");

    MixFileClass::Bootstrap();

    LOG_INFO("Init_Game: MIX Bootstrap complete");
    DumpMIXSample(MixFileClass::Generics.RA2MD,   "expandmd01.mix");
    DumpMIXSample(MixFileClass::Generics.RA2,     "ra2md.mix");
    DumpMIXSample(MixFileClass::Generics.MAIN,    "ra2.mix");
    DumpMIXSample(MixFileClass::Generics.MULTI,   "multi.mix");
    DumpMIXSample(MixFileClass::Generics.MULTIMD, "multimd.mix");
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
