// G42.32 P: tree-universe marker -- e4 tree-owned decls suppressed
#define GAMEMD_TREE_UNIVERSE 1
// G42.32 S: guard-order tree-bridge -- ra2::game full defs precede e4 leaf headers
#include "object/abstract.hpp"
#ifdef GAMEMD_TREE_UNIVERSE
namespace gamemd {
using ra2::game::AbstractClass;
}
#endif
// GENERATED supplied bodies (supply_missing_bodies.py) -- no-body
// no-file FAIL family; bodies are cache-verbatim transforms.
#include "core/utility_ext.hpp"
#include "e4/classes/Voice_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "misc/audio.hpp"
#include "misc/misc_ext.hpp"
#include "object/techno.hpp"
#include "render/surface.hpp"
#include "structure/building.hpp"
#include "system/cell.hpp"
#include "system/factory.hpp"
#include "team/tag.hpp"
#include "e4/classes/ArrayClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/ScriptAction_e4.hpp"
#include "e4/e4_globals.hpp"  // G42.32 S R5: DSurface_ViewBounds flat + g_TacticalClass_Instance

// 0x637DB0
namespace gamemd {
bool ScriptAction::SetField10()
{
    return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x637DB0)
}
} // namespace gamemd

// 0x638CE0
namespace gamemd {
int ScriptAction::ClassifyAction(int *a1, char *a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000638CE0.json)
}
} // namespace gamemd

// 0x6E47C0
namespace gamemd {
void * ScriptAction::CopyStructField(void *a2, const void *a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0006E47C0.json)
}
} // namespace gamemd

// 0x403730
namespace gamemd {
int AudioQueue::StopAllVoices()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000403730.json)
}
} // namespace gamemd

// 0x633FA0
namespace gamemd {
int ScriptAction::CreatePlacementAction(unsigned int *a2, const void *a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000633FA0.json)
}
} // namespace gamemd

// 0x6343C0
namespace gamemd {
unsigned int * ScriptAction::GetCoords(unsigned int *a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0006343C0.json)
}
} // namespace gamemd

// 0x634400
namespace gamemd {
unsigned int * ScriptAction::GetScreenPos(unsigned int *a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000634400.json)
}
} // namespace gamemd

// 0x634550
namespace gamemd {
BOOL ScriptAction::GetActionCoordinates(int a2, int a3, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000634550.json)
}
} // namespace gamemd

// 0x6346B0
namespace gamemd {
unsigned int * ScriptAction::FindItemByValue(int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0006346B0.json)
}
} // namespace gamemd

// 0x634CC0
namespace gamemd {
int ScriptAction::FindBuildingMatch(unsigned int *a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000634CC0.json)
}
} // namespace gamemd

// 0x6351E0
namespace gamemd {
int ScriptAction::DecrementRefCount(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0006351E0.json)
}
} // namespace gamemd

// 0x635F20
namespace gamemd {
unsigned int * ScriptAction::Constructor(int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000635F20.json)
}
} // namespace gamemd

// 0x636570
namespace gamemd {
BOOL ScriptAction::Check()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000636570.json)
}
} // namespace gamemd

// 0x636CE0
namespace gamemd {
int ScriptAction::ClearBuildingState()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000636CE0.json)
}
} // namespace gamemd

// 0x638C70
namespace gamemd {
char ScriptAction::IsBuildingTypeMatch()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000638C70.json)
}
} // namespace gamemd

// 0x63A8E0
namespace gamemd {
char ScriptAction::HitTest(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00063A8E0.json)
}
} // namespace gamemd

// 0x63B550
namespace gamemd {
char ScriptAction::ProcessIdleAction()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00063B550.json)
}
} // namespace gamemd

// 0x63CE40
namespace gamemd {
int ScriptAction::DrawPlacementMarker()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00063CE40.json)
}
} // namespace gamemd

// 0x65AD50
namespace gamemd {
int Array::Contains(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00065AD50.json)
}
} // namespace gamemd

// 0x6DD5B0
namespace gamemd {
const char * ScriptAction::ParseScriptActionParams()
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0006DD5B0.json)
}
} // namespace gamemd

// 0x6E1830
namespace gamemd {
unsigned int * ScriptAction::ReadParameter()
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0006E1830.json)
}
} // namespace gamemd

// 0x6E3B60
namespace gamemd {
int ScriptAction::GetActionTypeInfo()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0006E3B60.json)
}
} // namespace gamemd

// 0x6E4790
namespace gamemd {
void * ScriptAction::CopyStringField(char *Destination, char *Source)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0006E4790.json)
}
} // namespace gamemd

// 0x6E6AB0
namespace gamemd {
unsigned char * ScriptAction::GetWaypointCoords(void * aP1, void *a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0006E6AB0.json)
}
} // namespace gamemd

// 0x6FFBE0
namespace gamemd {
int ScriptAction::ExecuteMissionCmd()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0006FFBE0.json)
}
} // namespace gamemd

// 0x721270
namespace gamemd {
ObjectClass * ScriptAction::GetArgumentString(int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000721270.json)
}
} // namespace gamemd

