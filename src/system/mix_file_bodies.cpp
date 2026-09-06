// 自动生成 by tools/move_hpp_bodies.py — 函数体自 src/system/mix_file.hpp 迁出
// hpp-impl 门控: 头文件只允许声明（= default 析构亦移出）
#include "mix_file.hpp"

namespace gamemd {
GenericNode::GenericNode(const noinit_t&) noexcept {}

MixFileClass::~MixFileClass() {
        if (Headers)
            free(Headers);
        if (MemoryData)
            free(MemoryData);
    }

MixFileClass::MixFileClass() noexcept : Node(noinit_t()) {}

uint32_t MixFileClass::GetFileID(int index) const {
        return (index >= 0 && index < CountFiles) ? Headers[index].ID : 0;
    }

MixFileClass::MixFileClass(const noinit_t&) noexcept : Node(noinit_t()) {}
}

