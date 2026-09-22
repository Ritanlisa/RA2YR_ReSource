// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Game_e4.hpp"

// 0x77D710
namespace gamemd {
int GameLoop::Thunk()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
int GameLoop::Thunk()
{
  return Game::ProcessIdle(this);
}
}
}