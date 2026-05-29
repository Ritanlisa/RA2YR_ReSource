#include <windows.h>
#include <cstring>

#include "cmdline.hpp"

namespace gamemd {

GameConfig ParseCommandLine(LPSTR lpCmdLine)
{
    GameConfig config;

    if (!lpCmdLine || !*lpCmdLine) return config;

    char* token = nullptr;
    char* next  = nullptr;

    token = strtok_s(lpCmdLine, " \t\r\n", &next);
    while (token) {
        if (_stricmp(token, "-SPAWN") == 0) {
            config.spawn_mode = true;
        }
        else if (_stricmp(token, "-CD") == 0) {
            config.no_cd = true;
        }
        else if (_stricmp(token, "-WINDOW") == 0) {
            config.windowed = true;
        }
        else if (_stricmp(token, "-LOG") == 0) {
            config.enable_log = true;
        }

        token = strtok_s(nullptr, " \t\r\n", &next);
    }

    return config;
}

} // namespace gamemd
