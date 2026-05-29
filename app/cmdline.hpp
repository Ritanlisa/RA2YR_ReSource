#pragma once

namespace gamemd {

struct GameConfig {
    bool no_cd = false;
    bool spawn_mode = false;
    bool windowed = false;
    bool enable_log = false;
};

GameConfig ParseCommandLine(LPSTR lpCmdLine);

} // namespace gamemd
