// 自动生成 by tools/move_hpp_bodies.py — 函数体自 src/system/file_system.hpp 迁出
// hpp-impl 门控: 头文件只允许声明（= default 析构亦移出）
#include "file_system.hpp"

namespace gamemd {
void* FileSystem::LoadFile(const char* pFileName) {
        return LoadFile(pFileName, false);
    }

void* FileSystem::LoadSHPFile(const char* pFileName) {
        return LoadFile(pFileName, true);
    }
}

