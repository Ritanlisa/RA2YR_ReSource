#include "gamemd/entity/voxel.hpp"
#include <cstdlib>
#include <cstring>

namespace gamemd
{

static inline uint32_t ReadU32(const uint8_t* d, int off) {
    return *(const uint32_t*)(d + off);
}
static inline float ReadFloat(const uint8_t* d, int off) {
    uint32_t v = ReadU32(d, off);
    float f;
    std::memcpy(&f, &v, 4);
    return f;
}

// IDA 0x755CD0 -- File::LoadFileVXL
bool VxlLoad(const uint8_t* data, int size, VxlFile* out)
{
    if (!data || size < 802 || !out) return false;

    // Header: "Voxel Animation" (16B) + 4B unk + 4B limbCount + 4B unk + 4B bodySize
    if (std::memcmp(data, "Voxel Animation", 16) != 0) return false;

    int limbCount = ReadU32(data, 20);
    int bodySize  = ReadU32(data, 28);
    if (limbCount <= 0 || limbCount > 256 || bodySize <= 0) return false;

    // Limb headers: each is 16B name + 12B padding = 28B
    // Then 770B skip? Actually: 802B fixed offset
    // Total limb header area: 802 bytes
    int limbHdrStart = 802;
    int limbFooterStart = limbHdrStart + limbCount * 28 + bodySize;
    if (limbFooterStart + limbCount * 84 > size) return false;

    out->LimbCount = limbCount;
    out->Limbs = new VxlLimb[limbCount]();

    for (int i = 0; i < limbCount; ++i) {
        VxlLimb& limb = out->Limbs[i];

        // Limb header: 16B name + 12B skip
        std::memcpy(limb.Name, data + limbHdrStart + i * 28, 16);
        limb.Name[15] = '\0';

        // Limb footer: 4B dataOffset + 8B skip + 4B scale + 48B skip + 24B bounds + 3B size + 1B normalType
        int footerOff = limbFooterStart + i * 84;
        limb.DataOffset = ReadU32(data, footerOff);
        limb.Scale      = ReadFloat(data, footerOff + 12);

        // Bounds: min_x, min_z, min_y, max_x, max_z, max_y (6 floats = 24B)
        limb.Bounds[0] = ReadFloat(data, footerOff + 64);
        limb.Bounds[1] = ReadFloat(data, footerOff + 68);
        limb.Bounds[2] = ReadFloat(data, footerOff + 72);
        limb.Bounds[3] = ReadFloat(data, footerOff + 76);
        limb.Bounds[4] = ReadFloat(data, footerOff + 80);
        limb.Bounds[5] = ReadFloat(data, footerOff + 84);

        limb.Size[0]   = data[footerOff + 88];  // X
        limb.Size[1]   = data[footerOff + 89];  // Y
        limb.Size[2]   = data[footerOff + 90];  // Z
        limb.NormalType= data[footerOff + 91];
        limb.X = limb.Size[0];
        limb.Y = limb.Size[1];
        limb.Z = limb.Size[2];

        // Parse voxel column data
        int xSize = limb.Size[0];
        int ySize = limb.Size[1];
        int zSize = limb.Size[2];
        if (xSize <= 0 || ySize <= 0 || zSize <= 0 || limb.DataOffset == 0)
            continue;

        limb.DataSize = xSize * ySize * zSize * 2;
        limb.VoxelData = new uint8_t[limb.DataSize]();
        std::memset(limb.VoxelData, 0, limb.DataSize);

        // Column offset table: xSize * ySize entries, each 4 bytes
        int colTableOff = limbHdrStart + limbCount * 28 + limb.DataOffset;
        if (colTableOff + xSize * ySize * 4 > size) continue;

        for (int x = 0; x < xSize; ++x) {
            for (int y = 0; y < ySize; ++y) {
                uint32_t colStart = ReadU32(data, colTableOff + (x * ySize + y) * 4);
                if (colStart == 0) continue;

                int colPos = limbHdrStart + limbCount * 28 + colStart;
                if (colPos >= size) continue;

                int z = 0;
                while (z < zSize && colPos < size) {
                    // RLE: z += skipByte; count = readByte
                    uint8_t skip = data[colPos++];
                    z += skip;
                    if (z >= zSize) break;

                    uint8_t count = data[colPos++];
                    for (int k = 0; k < count && z < zSize && colPos + 2 <= size; ++k, ++z) {
                        int idx = (x * ySize + y) * zSize + z;
                        limb.VoxelData[idx * 2 + 0] = data[colPos++];  // color
                        limb.VoxelData[idx * 2 + 1] = data[colPos++];  // normal
                    }
                    colPos++;  // skip duplicate count byte
                }
            }
        }
    }

    return true;
}

// IDA 0x5BD570 -- File::LoadFileHVA
bool HvaLoad(const uint8_t* data, int size, HvaFile* out)
{
    if (!data || size < 40 || !out) return false;

    // Header: 16B skip + 4B frameCount + 4B limbCount + 16B*limbCount (limb names)
    int frameCount = ReadU32(data, 16);
    int limbCount  = ReadU32(data, 20);
    if (frameCount <= 0 || limbCount <= 0 || frameCount > 256 || limbCount > 256)
        return false;

    int nameArea = 24;
    int dataStart = nameArea + limbCount * 16;

    // Data section: 16 floats x FrameCount x LimbCount x 4 bytes
    int dataSize = frameCount * limbCount * 64;
    if (dataStart + dataSize > size) return false;

    out->FrameCount = frameCount;
    out->LimbCount = limbCount;
    out->LimbNames = new char*[limbCount];

    for (int l = 0; l < limbCount; ++l) {
        out->LimbNames[l] = new char[16];
        std::memcpy(out->LimbNames[l], data + nameArea + l * 16, 16);
        out->LimbNames[l][15] = '\0';
    }

    out->Transforms = new HvaMatrix[frameCount * limbCount];
    const uint8_t* src = data + dataStart;

    for (int f = 0; f < frameCount; ++f) {
        for (int l = 0; l < limbCount; ++l) {
            // Input is row-major 3x4 (12 floats), stored as 16 floats (4 floats padding)
            // Output is column-major 4x4 (16 floats)
            HvaMatrix& m = out->Transforms[f * limbCount + l];
            float row0[4] = { ReadFloat(src, 0), ReadFloat(src, 4), ReadFloat(src, 8),  0.0f };
            float row1[4] = { ReadFloat(src, 16), ReadFloat(src, 20), ReadFloat(src, 24), 0.0f };
            float row2[4] = { ReadFloat(src, 32), ReadFloat(src, 36), ReadFloat(src, 40), 0.0f };
            float row3[4] = { 0.0f, 0.0f, 0.0f, 1.0f };

            // Transpose: row-major input -> column-major output
            m.m[0]  = row0[0]; m.m[4]  = row1[0]; m.m[8]  = row2[0]; m.m[12] = row3[0];
            m.m[1]  = row0[1]; m.m[5]  = row1[1]; m.m[9]  = row2[1]; m.m[13] = row3[1];
            m.m[2]  = row0[2]; m.m[6]  = row1[2]; m.m[10] = row2[2]; m.m[14] = row3[2];
            m.m[3]  = row0[3]; m.m[7]  = row1[3]; m.m[11] = row2[3]; m.m[15] = row3[3];

            src += 64;  // 16 floats x 4 bytes
        }
    }

    return true;
}

constexpr float RA2Normals[244][3] = {
    {0,0,1}, {0.119f,0.009f,0.992f}, {0.149f,-0.006f,0.988f}, {0.186f,-0.015f,0.981f},
    {0.243f,-0.023f,0.969f}, {0.318f,-0.024f,0.947f}, {0.399f,-0.015f,0.916f},
    {0.483f,-0.001f,0.875f}, {0.569f,0.011f,0.822f}, {0.647f,0.018f,0.761f},
    {0.718f,0.023f,0.695f}, {0.78f,0.026f,0.625f}, {0.832f,0.027f,0.554f},
    {0.875f,0.026f,0.483f}, {0.909f,0.023f,0.415f}, {0.934f,0.02f,0.356f},
    {0.95f,0.018f,0.309f}, {0.96f,0.016f,0.275f}, {0.971f,0.006f,0.238f},
    {0.982f,-0.005f,0.186f}, {0.99f,-0.014f,0.136f}, {0.993f,-0.016f,0.109f},
    {0.996f,-0.017f,0.079f}, {0.998f,-0.017f,0.043f}, {1,-0.017f,0},{0.998f,-0.017f,-0.043f},
    {0.996f,-0.017f,-0.079f},{0.993f,-0.016f,-0.109f},{0.99f,-0.014f,-0.136f},
    {0.982f,-0.005f,-0.186f},{0.971f,0.006f,-0.238f},{0.96f,0.016f,-0.275f},
    {0.95f,0.018f,-0.309f},{0.934f,0.02f,-0.356f},{0.909f,0.023f,-0.415f},
    {0.875f,0.026f,-0.483f},{0.832f,0.027f,-0.554f},{0.78f,0.026f,-0.625f},
    {0.718f,0.023f,-0.695f},{0.647f,0.018f,-0.761f},{0.569f,0.011f,-0.822f},
    {0.483f,-0.001f,-0.875f},{0.399f,-0.015f,-0.916f},{0.318f,-0.024f,-0.947f},
    {0.243f,-0.023f,-0.969f},{0.186f,-0.015f,-0.981f},{0.149f,-0.006f,-0.988f},
    {0.119f,0.009f,-0.992f},{0,0,-1},{0,0,0},
    {0,0,1},{0.084f,0.008f,0.995f},{0.112f,-0.008f,0.993f},{0.152f,-0.013f,0.988f},
    {0.208f,-0.012f,0.977f},{0.276f,-0.009f,0.96f},{0.348f,-0.002f,0.937f},
    {0.426f,0.004f,0.904f},{0.506f,0.008f,0.862f},{0.582f,0.01f,0.812f},
    {0.655f,0.011f,0.755f},{0.721f,0.011f,0.692f},{0.778f,0.011f,0.627f},
    {0.825f,0.011f,0.563f},{0.862f,0.012f,0.504f},{0.891f,0.012f,0.452f},
    {0.912f,0.012f,0.408f},{0.929f,0.012f,0.369f},{0.944f,0.009f,0.324f},
    {0.96f,0,0.278f},{0.975f,-0.012f,0.219f},{0.982f,-0.018f,0.185f},
    {0.988f,-0.021f,0.16f},{0.992f,-0.024f,0.119f},{0.996f,-0.027f,0.069f},
    {0.998f,-0.029f,0.044f},{0.999f,-0.03f,0},{0.998f,-0.029f,-0.044f},
    {0.996f,-0.027f,-0.069f},{0.992f,-0.024f,-0.119f},{0.988f,-0.021f,-0.16f},
    {0.982f,-0.018f,-0.185f},{0.975f,-0.012f,-0.219f},{0.96f,0,-0.278f},
    {0.944f,0.009f,-0.324f},{0.929f,0.012f,-0.369f},{0.912f,0.012f,-0.408f},
    {0.891f,0.012f,-0.452f},{0.862f,0.012f,-0.504f},{0.825f,0.011f,-0.563f},
    {0.778f,0.011f,-0.627f},{0.721f,0.011f,-0.692f},{0.655f,0.011f,-0.755f},
    {0.582f,0.01f,-0.812f},{0.506f,0.008f,-0.862f},{0.426f,0.004f,-0.904f},
    {0.348f,-0.002f,-0.937f},{0.276f,-0.009f,-0.96f},{0.208f,-0.012f,-0.977f},
    {0.152f,-0.013f,-0.988f},{0.112f,-0.008f,-0.993f},{0.084f,0.008f,-0.995f},
    {0,0,-1},{0,0,0},
    {0,0,1},{0.039f,0.008f,0.998f},{0.062f,-0.008f,0.997f},{0.091f,-0.015f,0.995f},
    {0.14f,-0.017f,0.989f},{0.193f,-0.015f,0.98f},{0.25f,-0.01f,0.967f},
    {0.314f,-0.005f,0.948f},{0.376f,0,0.926f},{0.438f,0.003f,0.898f},
    {0.5f,0.005f,0.865f},{0.558f,0.006f,0.829f},{0.614f,0.006f,0.789f},
    {0.664f,0.007f,0.747f},{0.708f,0.007f,0.705f},{0.746f,0.008f,0.665f},
    {0.778f,0.009f,0.627f},{0.803f,0.01f,0.594f},{0.825f,0.007f,0.564f},
    {0.846f,0,0.532f},{0.87f,-0.012f,0.491f},{0.887f,-0.019f,0.459f},
    {0.898f,-0.023f,0.437f},{0.917f,-0.03f,0.395f},{0.934f,-0.038f,0.354f},
    {0.944f,-0.042f,0.324f},{0.953f,-0.047f,0.296f},{0.959f,-0.049f,0.275f},
    {0.962f,-0.047f,0.264f},{0.967f,-0.046f,0.247f},{0.974f,-0.045f,0.218f},
    {0.98f,-0.043f,0.19f},{0.984f,-0.039f,0.169f},{0.987f,-0.034f,0.152f},
    {0.99f,-0.024f,0.13f},{0.993f,-0.012f,0.108f},{0.974f,-0.045f,-0.218f},
    {0.967f,-0.046f,-0.247f},{0.962f,-0.047f,-0.264f},{0.959f,-0.049f,-0.275f},
    {0.953f,-0.047f,-0.296f},{0.944f,-0.042f,-0.324f},{0.934f,-0.038f,-0.354f},
    {0.917f,-0.03f,-0.395f},{0.898f,-0.023f,-0.437f},{0.887f,-0.019f,-0.459f},
    {0.87f,-0.012f,-0.491f},{0.846f,0,-0.532f},{0.825f,0.007f,-0.564f},
    {0.803f,0.01f,-0.594f},{0.778f,0.009f,-0.627f},{0.746f,0.008f,-0.665f},
    {0.708f,0.007f,-0.705f},{0.664f,0.007f,-0.747f},{0.614f,0.006f,-0.789f},
    {0.558f,0.006f,-0.829f},{0.5f,0.005f,-0.865f},{0.438f,0.003f,-0.898f},
    {0.376f,0,-0.926f},{0.314f,-0.005f,-0.948f},{0.25f,-0.01f,-0.967f},
    {0.193f,-0.015f,-0.98f},{0.14f,-0.017f,-0.989f},{0.091f,-0.015f,-0.995f},
    {0.062f,-0.008f,-0.997f},{0.039f,0.008f,-0.998f},{0,0,-1},{0,0,0},
};

constexpr float TSNormals[36][3] = {
    {0.526f,0,0.85f},{-0.526f,0,0.85f},{0.526f,0,-0.85f},{-0.526f,0,-0.85f},
    {0,0.526f,0.85f},{0,-0.526f,0.85f},{0,0.526f,-0.85f},{0,-0.526f,-0.85f},
    {0.85f,0,0.526f},{-0.85f,0,0.526f},{0.85f,0,-0.526f},{-0.85f,0,-0.526f},
    {0,0.85f,0.526f},{0,-0.85f,0.526f},{0,0.85f,-0.526f},{0,-0.85f,-0.526f},
    {0,0,1.0f},{0,0,-1.0f},{0,1.0f,0},{0,-1.0f,0},{1.0f,0,0},{-1.0f,0,0},
    {0.447f,0.447f,0.774f},{-0.447f,-0.447f,0.774f},{0.447f,-0.447f,0.774f},{-0.447f,0.447f,0.774f},
    {0.447f,0.447f,-0.774f},{-0.447f,-0.447f,-0.774f},{0.447f,-0.447f,-0.774f},{-0.447f,0.447f,-0.774f},
    {0.774f,0.447f,0.447f},{-0.774f,0.447f,0.447f},{0.774f,-0.447f,0.447f},{-0.774f,-0.447f,0.447f},
    {0.774f,0.447f,-0.447f},{-0.774f,0.447f,-0.447f},
};

} // namespace gamemd
