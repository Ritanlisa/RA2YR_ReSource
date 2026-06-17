#pragma once

namespace gamemd {

// ============================================================================
// MenuResult / ShowMainMenu — main menu screen
// ShowMainMenu is a custom implementation (not from original binary).
// The original binary uses the 19-case state machine (docs/menu_architecture.md).
// ============================================================================

enum class MenuResult {
    None = 0,
    Skirmish,
    Campaign,
    Network,
    Options,
    Exit
};

MenuResult ShowMainMenu(); // custom replacement for original menu state machine

} // namespace gamemd
