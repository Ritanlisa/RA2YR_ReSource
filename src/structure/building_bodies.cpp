// G42.32 P: tree-universe marker -- e4 tree-owned decls suppressed
#define GAMEMD_TREE_UNIVERSE 1
// G42.32 S: guard-order tree-bridge -- ra2::game full defs precede e4 leaf headers
#include "object/abstract.hpp"
#ifdef GAMEMD_TREE_UNIVERSE
namespace gamemd {
using ra2::game::AbstractClass;
}
#endif
// 自动生成 by tools/move_hpp_bodies.py — 函数体自 src/structure/building.hpp 迁出
// hpp-impl 门控: 头文件只允许声明（= default 析构亦移出）
#include "building.hpp"
#include "e4/classes/SuperWeapon_e4.hpp"
#include "e4/classes/SuperClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "core/globals_core.hpp"
#include "core/globals_core.hpp"
#include "core/globals_core.hpp"
#include "e4/e4_globals_decls.hpp"
#include "core/globals_core.hpp"
#include "structure/globals_structure.hpp"
#include "e4/classes/unknown_e4.hpp"
#include "e4/classes/Sidebar_e4.hpp"

namespace gamemd {
namespace Math {
int unknown::RoundToInt(double value) {
    return (int)(value >= 0.0 ? value + 0.5 : value - 0.5);
}
}
}

namespace gamemd {
// 0x50af10
void SuperWeapon::UpdateSuperWeaponsOwnedHouseClass(HouseClass* ownerHouse)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x50af10)
}
}
