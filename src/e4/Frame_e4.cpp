// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Frame_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/AudioFileClass_e4.hpp"
#include "e4/classes/Mixer_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"

// 0x4F4780
namespace gamemd {
TechnoTypeClass * Frame::Present(void * a1, void * a2, void * a3, void * a4, void * a5, void * a6, void * a7, void * a8)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4F4780)
}
} // namespace gamemd
// 0x724C00
namespace gamemd {
TechnoTypeClass * Frame::Init()
{

  return (gamemd::TechnoTypeClass *)(this->q004 != 0);

}
} // namespace gamemd