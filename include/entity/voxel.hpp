#pragma once

#include <cstdint>
#include <cstring>

namespace gamemd
{

// RA2/YR: NormalType=4, 244 normals. TS: NormalType=2, 36 normals.
enum class VxlNormalType : uint8_t { TiberianSun = 2, RedAlert2 = 4 };

struct VxlElement
{
    uint8_t color;
    uint8_t normal;
};

struct VxlLimb
{
    char     Name[16];
    float    Scale;
    float    Bounds[6];    // minX, minY, minZ, maxX, maxY, maxZ
    uint8_t  Size[3];      // x, y, z
    uint8_t  NormalType;

    // Voxel data: array[Size.x][Size.y], each cell is a map z->VxlElement
    int      X, Y, Z;
    uint8_t* VoxelData;    // flat array X*Y*Z*2 bytes (color+normal per voxel)
    int      DataSize;
    uint32_t DataOffset;

    VxlLimb() : Scale(1.0f), NormalType(0), X(0), Y(0), Z(0),
                VoxelData(nullptr), DataSize(0), DataOffset(0) {} // IDA: UNMATCHED — no_callgraph_match, no_git_history

    ~VxlLimb() { delete[] VoxelData; VoxelData = nullptr; } // IDA: UNMATCHED — no_callgraph_match, no_git_history
};

struct VxlFile
{
    int      LimbCount;
    VxlLimb* Limbs;

    VxlFile() : LimbCount(0), Limbs(nullptr) {}
    ~VxlFile();
};

struct HvaMatrix
{
    float m[16];  // column-major 4x4
    HvaMatrix(); // IDA: UNMATCHED — no_callgraph_match, no_git_history
};

struct HvaFile
{
    int        FrameCount;
    int        LimbCount;
    HvaMatrix* Transforms;  // [FrameCount * LimbCount] matrices
    char**     LimbNames;

    HvaFile() : FrameCount(0), LimbCount(0), Transforms(nullptr), LimbNames(nullptr) {}
    ~HvaFile() { delete[] Transforms; if (LimbNames) { for (int i = 0; i < LimbCount; ++i) delete[] LimbNames[i]; delete[] LimbNames; } }

    const HvaMatrix* GetTransform(int frame, int limb) const {  // 0x55A730
        if (frame < 0 || frame >= FrameCount || limb < 0 || limb >= LimbCount) return nullptr;
        return &Transforms[frame * LimbCount + limb];
    }
};

bool VxlLoad(const uint8_t* data, int size, VxlFile* out); // IDA: UNMATCHED — no_callgraph_match, no_git_history
bool HvaLoad(const uint8_t* data, int size, HvaFile* out); // IDA: UNMATCHED — no_callgraph_match, no_git_history

} // namespace gamemd
