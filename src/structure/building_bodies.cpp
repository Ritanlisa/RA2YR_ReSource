// 自动生成 by tools/move_hpp_bodies.py — 函数体自 src/structure/building.hpp 迁出
// hpp-impl 门控: 头文件只允许声明（= default 析构亦移出）
#include "building.hpp"

namespace gamemd {
namespace Math {
int RoundToInt(double value) {
    return (int)(value >= 0.0 ? value + 0.5 : value - 0.5);
}
}
}

namespace gamemd {
// 0x50af10
void SuperWeapon::UpdateSuperWeaponsOwnedHouseClass(HouseClass* ownerHouse) {
        (void)ownerHouse;  // refresh owning house's super-weapon collection (callee body out of scope)
    }
}

