// 自动生成 by tools/move_hpp_bodies.py — 函数体自 src/system/xcc_names.hpp 迁出
// hpp-impl 门控: 头文件只允许声明（= default 析构亦移出）
#include "xcc_names.hpp"

namespace gamemd {
namespace xcc {
const char* XccLookup(uint32_t hash) {
    int lo = 0, hi = kXccNameCount - 1;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (kXccNames[mid].hash == hash) return kXccNames[mid].name;
        if (kXccNames[mid].hash < hash) lo = mid + 1;
        else hi = mid - 1;
    }
    return nullptr;
}
}
}

