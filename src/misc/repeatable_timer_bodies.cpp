// 自动生成 by tools/move_hpp_bodies.py — 函数体自 src/misc/repeatable_timer.hpp 迁出
// hpp-impl 门控: 头文件只允许声明（= default 析构亦移出）
#include "repeatable_timer.hpp"

namespace gamemd {
bool RepeatableTimerStruct::IsActive() const { return data[0] != 0; }

void RepeatableTimerStruct::Update() { if (data[0]) --data[0]; }
}

