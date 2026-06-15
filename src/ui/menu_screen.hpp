#pragma once
namespace gamemd {

enum class MenuResult {
    None = 0,
    Skirmish,
    Campaign,
    Network,
    Options,
    Exit
};

MenuResult ShowMainMenu();

} // namespace gamemd
