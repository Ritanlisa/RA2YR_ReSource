// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/GameLoop_e4.hpp"
#include "e4/e4_protos.h"

// 0x77D710
namespace gamemd {
int GameLoop::Thunk()
{
  return Game::ProcessIdle();
}
}