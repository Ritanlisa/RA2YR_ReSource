// 自动生成 by tools/move_hpp_bodies.py — 函数体自 src/structure/unit.hpp 迁出
// hpp-impl 门控: 头文件只允许声明（= default 析构亦移出）
#include "unit.hpp"

namespace gamemd {
IdleOrderEntry* IdleOrderArray::operator[](int i) const { return base[i]; }

IdleOrderEntry** UnitClass::idleOrderBase() const {
        // ambientSoundController is a 4-byte X10 slot; ptr at +0, count at +0xC
        // (unit.hpp comment: pointer at +0x3C, count at +0x48)
        return *(IdleOrderEntry ***)(void *)this->ambientSoundController;
    }

int UnitClass::idleOrderCount() const {
        return (int)*(unsigned int *)(void *)((unsigned char *)this->ambientSoundController + 12);
    }
}

