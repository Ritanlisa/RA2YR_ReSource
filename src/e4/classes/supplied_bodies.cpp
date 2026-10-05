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
bool ScriptAction::SetField10() {
    return !stru_AC4B30.__pad_EC[216] || this != (ScriptAction *)4; /*0x637dc0*/
}
} // namespace gamemd

// 0x638CE0
namespace gamemd {
int ScriptAction::ClassifyAction(int *a1, char *a2) {
    char v3; // cl
    int *Type; // eax
    int v6; // ecx
    Array *v7; // esi
    int Value; // eax
    int v9; // eax
    unsigned char *v10; // esi
    unsigned char v11[108]; // [esp+8h] [ebp-70h] BYREF
    int16_t v12; // [esp+74h] [ebp-4h]
    char v13; // [esp+76h] [ebp-2h]

    v3 = *a2; /*0x638ce8*/
    if ( *a2 == 9 || v3 == 6 || v3 == 7 ) /*0x638cf8*/
      return 0; /*0x638d01*/
    if ( Team_Load(a1, a2[12], *(unsigned int *)(a2 + 14), a2[18]) ) /*0x638d1a*/
      return 0; /*0x638d2a*/
    Type = (int *)BuildingClass::GetType((BuildingClass *)a1); /*0x638d2d*/
    if ( !Type ) /*0x638d34*/
      return -1; /*0x638d34*/
    v6 = Type[5]; /*0x638d36*/
    if ( v6 <= 0 ) /*0x638d3b*/
      return -1; /*0x638d3b*/
    v7 = *(Array **)(Type[2] + 4 * v6 - 4); /*0x638d43*/
    Value = ((Array*)v7)->FindValue(*Type); /*0x638d49*/
    if ( Value == -1 ) /*0x638d51*/
      v9 = 0; /*0x638d53*/
    else
      v9 = *((unsigned int *)v7->Array_field_0x4 + Value); /*0x638d5a*/
    v10 = *(unsigned char **)(v9 + 4); /*0x638d5d*/
    qmemcpy(v11, v10, sizeof(v11)); /*0x638d69*/
    v10 += 108; /*0x638d69*/
    v12 = *(unsigned short *)v10; /*0x638d6b*/
    v13 = v10[2]; /*0x638d6d*/
    if ( v11[12] == 7 || v11[12] == 8 || v11[12] == 9 ) /*0x638d80*/
      return 1; /*0x638d8c*/
    if ( (v11[12] == 1 || v11[12] == 11) && (v11[18] == 11 || v11[12] == 11 && !v11[18]) ) /*0x638da7*/
      return 2; /*0x638da9*/
    else
      return -1; /*0x638db5*/
}
} // namespace gamemd

// 0x6E47C0
namespace gamemd {
void * ScriptAction::CopyStructField(void *a2, const void *a3) {
    if ( a3 != this ) /*0x6e47ca*/
      qmemcpy(this, a3, 0x20u); /*0x6e47d3*/
    qmemcpy(a2, this, 0x20u); /*0x6e47e2*/
    return a2; /*0x6e47e4*/
}
} // namespace gamemd

// 0x403730
namespace gamemd {
int AudioQueue::StopAllVoices() {
    int v1; // edx
    int v2; // ecx
    int v3; // ebx
    int result; // eax
    AudioQueue *v5; // esi
    int v6; // edi
    Voice *v7; // [esp+0h] [ebp-Ch]

    v3 = v1; /*0x403733*/
    result = ((AudioQueue*)(AudioQueue *)(v2 + 248))->GetNext(); /*0x40373b*/
    v5 = (AudioQueue *)result; /*0x403740*/
    v6 = result; /*0x403744*/
    if ( result ) /*0x403746*/
    {
      do /*0x403766*/
      {
        result = ((AudioQueue*)v5)->GetNextAlt(); /*0x40374a*/
        v5 = (AudioQueue *)result; /*0x403752*/
        if ( v3 == -1 || *(unsigned int *)(v6 + 12) == v3 ) /*0x403759*/
          result = ((Voice*)v7)->Stop(); /*0x40375d*/
        v6 = (int)v5; /*0x403764*/
      }
      while ( v5 ); /*0x403766*/
    }

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

