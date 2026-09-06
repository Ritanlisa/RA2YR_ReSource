// 自动生成 by tools/move_hpp_bodies.py — 函数体自 src/system/scenario.hpp 迁出
// hpp-impl 门控: 头文件只允许声明（= default 析构亦移出）
#include "scenario.hpp"

namespace gamemd {
CellStruct ScenarioClass::GetWaypointCoords(int idx) {
        CellStruct dest;
        GetWaypointCoords(&dest, idx);
        return dest;
    }
}

