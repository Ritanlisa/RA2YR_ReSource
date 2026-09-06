// 自动生成 by tools/move_hpp_bodies.py — 函数体自 src/system/waypoint.hpp 迁出
// hpp-impl 门控: 头文件只允许声明（= default 析构亦移出）
#include "waypoint.hpp"

namespace gamemd {
bool WaypointClass::IsCoordinateUsed(const CellStruct&) const { return false; }

bool WaypointClass::FindOrCreate(int, unsigned int*, unsigned char*) { return false; }
}
