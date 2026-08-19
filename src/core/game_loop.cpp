#include "core/game_loop.hpp"

namespace gamemd {

// --- WTFMode ---

bool WTFMode::Init(int* mode) { (void)mode; return false; }
bool WTFMode::Shutdown(int* mode) { (void)mode; return false; }

// --- ScreenSaver ---

void ScreenSaver::Process(bool enable) { (void)enable; }

} // namespace gamemd
