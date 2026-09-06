#include "core/game_loop.hpp"

namespace gamemd {

// --- WTFMode ---

// 0x69bab0
bool WTFMode::Init(int* mode) { (void)mode; return false; }
// 0x69bb40
bool WTFMode::Shutdown(int* mode) { (void)mode; return false; }

// --- ScreenSaver ---

// 0x532100
void ScreenSaver::Process(bool enable) { (void)enable; }

} // namespace gamemd
