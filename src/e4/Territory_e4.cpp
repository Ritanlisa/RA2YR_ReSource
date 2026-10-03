// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Territory_WorldDominationTour_8_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/TextRenderer_e4.hpp"
#include "e4/classes/VtableStub_e4.hpp"

// 0x7718A0
namespace gamemd {
int AddRef(char a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007718A0.json)
}
}
// 0x771900
namespace gamemd {
signed intRelease()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00771900.json)
}
}
// 0x771950
namespace gamemd {
signed int ddtor()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00771950.json)
}
} // namespace gamemd

// 0x771970
namespace gamemd {
int Read(int a2, int a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00771970.json)
}
}
// 0x771980
namespace gamemd {
void Territory_WorldDominationTour_8::Write(int a2, int a3)
{

  ((AudioQueue *)((AudioQueue *)this->field_1C))->Update(); /*0x771983*/

}
}
// 0x7719D0
namespace gamemd {
wchar_t * Close(int a2, void *a2_2)
{
    (void)a2; (void)a2_2; return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x007719D0.json)
}
}
// 0x771A30
namespace gamemd {
unsigned int * QueryInterface(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00771A30.json)
}
}
// 0x771990
namespace gamemd {
unsigned int * Seek(unsigned int * a1, void *a2_1, void *a3_1)
{
    (void)a1; (void)a2_1; (void)a3_1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00771990.json)
}
} // namespace gamemd

// 0x7719C0
namespace gamemd {
unsigned int * Territory_WorldDominationTour_8::Open(void *a1_1, void *a2_1, void *a3_1)
{

  return (unsigned int *)((uint8_t)((gamemd::Audio *)this)->IsPlaying() == 0); /*0x7719ca*/

}
} // namespace gamemd
