// 自动生成 by tools/move_hpp_bodies.py — 函数体自 src/structure/unit.hpp 迁出
// hpp-impl 门控: 头文件只允许声明（= default 析构亦移出）
#include "unit.hpp"

namespace gamemd {
IdleOrderEntry* IdleOrderArray::operator[](int i) const { return base[i]; }

IdleOrderEntry** UnitClass::idleOrderBase() const {
        return (IdleOrderEntry**)(uintptr_t)this->ambientSoundController.AudioController_field_00;
    }

int UnitClass::idleOrderCount() const {
        return (int)this->ambientSoundController.AudioController_field_0C;
    }
}

