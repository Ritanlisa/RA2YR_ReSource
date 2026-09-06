// 自动生成 by tools/move_hpp_bodies.py — 函数体自 src/render/bink_control.hpp 迁出
// hpp-impl 门控: 头文件只允许声明（= default 析构亦移出）
#include "bink_control.hpp"

namespace gamemd {
int BinkPlayerControl::GetWidth() const { return movie ? movie->GetWidth() : 0; }

int BinkPlayerControl::GetHeight() const { return movie ? movie->GetHeight() : 0; }
}

