// GENERATED supplied bodies (supply_missing_bodies.py) -- no-body
// no-file FAIL family; bodies are cache-verbatim transforms.
#include "core/utility_ext.hpp"
#include "entity/anim.hpp"
#include "entity/bullet.hpp"
#include "entity/rad_site.hpp"
#include "entity/terrain.hpp"
#include "entity/tiberium.hpp"
#include "house/house.hpp"
#include "misc/locomotion.hpp"
#include "misc/misc_ext.hpp"
#include "object/abstract.hpp"
#include "object/object.hpp"
#include "render/display.hpp"
#include "structure/building.hpp"
#include "system/cell.hpp"
#include "system/tactical.hpp"

// 0x422720
namespace gamemd {
int AnimClass::SimpleCtor()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00422720.json)
}
} // namespace gamemd

// 0x422B80
namespace gamemd {
void TerrainClass::ClearAnimationLinkFlags()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00422B80.json)
}
} // namespace gamemd

// 0x422BC0
namespace gamemd {
int AnimClass::SetAnimSpeed()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x422BC0)
}
} // namespace gamemd

// 0x422BE0
namespace gamemd {
int * AnimClass::UpdateZAdjust(int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00422BE0.json)
}
} // namespace gamemd

// 0x422C70
namespace gamemd {
char AnimClass::CheckLayerFlags(int a2, int a3, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00422C70.json)
}
} // namespace gamemd

// 0x4238B0
namespace gamemd {
bool AnimClass::UpdateMirrorState(int a2)
{
    return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4238B0)
}
} // namespace gamemd

// 0x423930
namespace gamemd {
int AnimClass::UpdateProjectileTrajectory()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00423930.json)
}
} // namespace gamemd

// 0x425280
namespace gamemd {
int AnimClass::SaveLoad_Prefix(int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00425280.json)
}
} // namespace gamemd

// 0x425410
namespace gamemd {
int AnimClass::ProcessPower(int *a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00425410.json)
}
} // namespace gamemd

// 0x449540
namespace gamemd {
int AnimClass::resetAnimation()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00449540.json)
}
} // namespace gamemd

// 0x449A50
namespace gamemd {
int AnimClass::setLoopCount()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00449A50.json)
}
} // namespace gamemd

// 0x4666C0
namespace gamemd {
bool BulletClass::CheckMirrorState(int a2)
{
    return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4666C0)
}
} // namespace gamemd

// 0x65B4B0
namespace gamemd {
int RadSiteClass::GetSpread() const
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x65B4B0)
}
} // namespace gamemd

// 0x421EA0
namespace gamemd {
void* AnimClass::ctor(void* a1, void* a2, void* a3, int a4, void* a5, void* a6, int a7)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00421EA0.json)
}
} // namespace gamemd

// 0x425150
namespace gamemd {
int AnimClass::ClearTargetReferences(int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00425150.json)
}
} // namespace gamemd

// 0x65B4D0
namespace gamemd {
void RadSiteClass::SetSpread(int a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0065B4D0.json)
}
} // namespace gamemd

// 0x65B4F0
namespace gamemd {
void RadSiteClass::SetRadLevel(int a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0065B4F0.json)
}
} // namespace gamemd

// 0x65B530
namespace gamemd {
void RadSiteClass::Add(int a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0065B530.json)
}
} // namespace gamemd

// 0x65B8F0
namespace gamemd {
int RadSiteClass::GetRadLevelAt(CellStruct* cell)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0065B8F0.json)
}
} // namespace gamemd

// 0x65B9C0
namespace gamemd {
void RadSiteClass::Radiate()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0065B9C0.json)
}
} // namespace gamemd

// 0x65BB50
namespace gamemd {
void RadSiteClass::Deactivate()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0065BB50.json)
}
} // namespace gamemd

// 0x65BD00
namespace gamemd {
void RadSiteClass::DecreaseRadiation()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0065BD00.json)
}
} // namespace gamemd

// 0x65BE90
namespace gamemd {
void RadSiteClass::DecreaseLight()
{
    // TODO stub - quarantined G42 T9 (truth = 0x65BE90)
}
} // namespace gamemd

// 0x7220A0
namespace gamemd {
int TiberiumClass::SpreadGrowth(int a2, unsigned int *a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007220A0.json)
}
} // namespace gamemd

