#pragma once
#include <cstdint>
#include "core/math.hpp"
#include "render/surface.hpp"

namespace gamemd {

struct ShpHeader {
    uint16_t frames;
    uint16_t max_width;
    uint16_t max_height;
    uint16_t frames_dup;
    uint32_t data_size;
};

struct ShpFrameInfo {
    int32_t offset;
    uint8_t format;
    int16_t width;
    int16_t height;
    int16_t x_hot;
    int16_t y_hot;
    int32_t size;
};

class ShpImage {
public:
    // unmatched: no callgraph reference and no git history record
    ~ShpImage();

    // unmatched: no callgraph reference and no git history record
    bool LoadFromMemory(const uint8_t* data, int data_size);
    // unmatched: no callgraph reference and no git history record
    void Free();

    int GetFrameCount() const;  // 0x74AA30 // IDA: VoxelAnimClass::GetFrameCount
    int GetWidth() const;
    int GetHeight() const;

    const uint8_t* GetPixelData(int frame_index) const;

    void RenderToSurface( // 0x5d1e70
        Surface* surface, int frame_index,
        int dest_x, int dest_y,
        const uint8_t palette[256][4]);

private:
    // unmatched: no callgraph reference and no git history record
    bool DecodeRLE3(const uint8_t* src, int src_size, uint8_t* dst,
                    int dst_width, int dst_height);

    ShpHeader         m_header{};
    ShpFrameInfo*     m_frames = nullptr;
    int               m_frame_count = 0;
    uint8_t**         m_pixel_data = nullptr;
    const uint8_t*          m_raw_data = nullptr;
    int               m_raw_size = 0;
};

} // namespace gamemd
