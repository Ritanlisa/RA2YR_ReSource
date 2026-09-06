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

    VxlLimb();

    // unmatched: no callgraph reference and no git history record
    ~VxlLimb();
};

struct VxlFile
{
    int      LimbCount;
    VxlLimb* Limbs;

    VxlFile();
    ~VxlFile();
};

struct HvaMatrix
{
    float m[16];  // column-major 4x4
    // unmatched: no callgraph reference and no git history record
    HvaMatrix();
};

struct HvaFile
{
    int        FrameCount;
    int        LimbCount;
    HvaMatrix* Transforms;  // [FrameCount * LimbCount] matrices
    char**     LimbNames;

    HvaFile();
    ~HvaFile();

    const HvaMatrix* GetTransform(int frame, int limb) const;
};

// unmatched: no callgraph reference and no git history record
bool VxlLoad(const uint8_t* data, int size, VxlFile* out);
// unmatched: no callgraph reference and no git history record
bool HvaLoad(const uint8_t* data, int size, HvaFile* out);

} // namespace gamemd
