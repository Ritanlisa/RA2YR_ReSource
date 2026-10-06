// 自动生成 by tools/move_hpp_bodies.py — 函数体自 src/entity/voxel.hpp 迁出
// hpp-impl 门控: 头文件只允许声明（= default 析构亦移出）
#include "voxel.hpp"

namespace gamemd {
VxlLimb::VxlLimb() : Scale(1.0f), NormalType(0), X(0), Y(0), Z(0),
                                                                               
                VoxelData(nullptr), DataSize(0), DataOffset(0) {}

VxlLimb::~VxlLimb() { delete[] VoxelData; VoxelData = nullptr; }

VxlFile::VxlFile() : LimbCount(0), Limbs(nullptr) {}

HvaFile::HvaFile() : FrameCount(0), LimbCount(0), Transforms(nullptr), LimbNames(nullptr) {}

HvaFile::~HvaFile() { delete[] Transforms; if (LimbNames) { for (int i = 0; i < LimbCount; ++i) delete[] LimbNames[i]; delete[] LimbNames; } }

// g57b5 W2r4: 0x55A730 体移除 — raw 头=Turret::GetTransform(LocomotionClass*,float*,_DWORD*)
// 与 voxel.hpp:64 HvaFile::GetTransform(int,int) 站点错配（名字碰撞误落）；重翻译债。
} // namespace gamemd
