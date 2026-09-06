// 自动生成 by tools/move_hpp_bodies.py — 函数体自 src/render/shp_struct.hpp 迁出
// hpp-impl 门控: 头文件只允许声明（= default 析构亦移出）
#include "shp_struct.hpp"

namespace gamemd {
SHPStruct::SHPStruct() noexcept : Type(0), Width(0), Height(0), Frames(0) {
    }

bool SHPStruct::IsReference() const { return Type == 0xFFFF; }

const SHPFrame& SHPFile::GetFrameHeader(int frame_index) const {
        return (&FirstFrame)[frame_index];
    }

SHPReference* SHPStruct:: SHPStruct::AsReference() {
    return IsReference() ? static_cast<SHPReference*>(this) : nullptr;
}

const SHPReference* SHPStruct:: SHPStruct::AsReference() const {
    return IsReference() ? static_cast<const SHPReference*>(this) : nullptr;
}

SHPFile* SHPStruct:: SHPStruct::AsFile() {
    return !IsReference() ? static_cast<SHPFile*>(this) : nullptr;
}

const SHPFile* SHPStruct:: SHPStruct::AsFile() const {
    return !IsReference() ? static_cast<const SHPFile*>(this) : nullptr;
}
}

