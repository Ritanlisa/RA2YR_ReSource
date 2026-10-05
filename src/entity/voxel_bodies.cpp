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

const HvaMatrix* HvaFile::GetTransform(int frame, int limb) const {  // 0x55A730
    LocomotionClass *v3; // edi
    unsigned int *v4; // esi
    float *result; // eax
    float v6; // [esp+0h] [ebp-40h]
    int v7; // [esp+Ch] [ebp-34h] BYREF
    Matrix3x4 v8; // [esp+10h] [ebp-30h] BYREF

    Matrix3x4::Identity(&v8); /*0x55a739*/
    v3 = this; /*0x55a73e*/
    this = (LocomotionClass *)((((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)this->Owner->?, &v7) >> 10) + 1) >> 1) /*0x55a763*/
                              & 0x1F)
                             - 8);
    v6 = (double)(int)this * -0.1963495408493621; /*0x55a776*/
    Matrix2D::Rotate(v8.m_Data, v6); /*0x55a779*/
    v4 = a3; /*0x55a77e*/
    if ( a3 && *a3 != -1 ) /*0x55a78b*/
    {
      *a3 *= 32; /*0x55a790*/
      *v4 |= ((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)v3->Owner->?, &this) >> 10) + 1) >> 1) & 0x1F; /*0x55a7b4*/
    }
    result = a2; /*0x55a7b6*/
    qmemcpy(a2, &v8, 0x30u); /*0x55a7c5*/
    return result; /*0x55a7c7*/
    }
}

