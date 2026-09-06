// 自动生成 by tools/move_hpp_bodies.py — 函数体自 src/type/techno_type.hpp 迁出
// hpp-impl 门控: 头文件只允许声明（= default 析构亦移出）
#include "techno_type.hpp"

namespace gamemd {
WeaponStruct::WeaponStruct() noexcept : WeaponType(nullptr)
        , FLH()
        , BarrelLength(0)
        , BarrelThickness(0)
                                                                       
        , TurretLocked(false) {}

bool TechnoTypeClass::InOwners(DWORD bitHouseType) const { return (this->GetOwners() & bitHouseType) != 0; }
}

