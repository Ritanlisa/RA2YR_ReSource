#include "gamemd/render/shp_render.hpp"
#include <cstring>
#include <cstdlib>

namespace gamemd {

ShpImage::~ShpImage()
{
    Free();
}

bool ShpImage::LoadFromMemory(const uint8_t* data, int data_size)
{
    Free();
    if (!data || data_size < 8) return false;

    m_raw_data = data;
    m_raw_size = data_size;

    // Detect SHP format:
    // TS (RA2/TS): 4-byte prefix (usually 0x00000000), then standard header at +4
    // TD (C&C1/RA1): header starts at offset 0
    // Heuristic: read frames from offset 0 and 4, pick the one that looks valid
    int hdr_offset = 0;
    uint16_t frames_at0 = *(const uint16_t*)(data + 0);
    uint16_t frames_at4 = *(const uint16_t*)(data + 4);

    if (frames_at0 == 0 && frames_at4 > 0 && frames_at4 <= 500) {
        // TS prefix format: 0x00000000 prefix at offset 0, header at offset 4
        hdr_offset = 4;
    }

    m_header.frames     = *(const uint16_t*)(data + hdr_offset + 0);
    m_header.max_width  = *(const uint16_t*)(data + hdr_offset + 2);
    m_header.max_height = *(const uint16_t*)(data + hdr_offset + 4);
    m_header.frames_dup = *(const uint16_t*)(data + hdr_offset + 6);
    m_header.data_size  = 0;

    m_frame_count = m_header.frames;
    if (m_frame_count <= 0 || m_frame_count > 1024) return false;

    m_frames = static_cast<ShpFrameInfo*>(
        calloc(m_frame_count, sizeof(ShpFrameInfo)));
    m_pixel_data = static_cast<uint8_t**>(
        calloc(m_frame_count, sizeof(uint8_t*)));

    if (!m_frames || !m_pixel_data) { Free(); return false; }

    // Frame table starts after header (8 bytes TD, 12 bytes TS)
    int frame_table_start = hdr_offset + 8;

    for (int i = 0; i < m_frame_count; ++i) {
        const uint8_t* fhdr = data + frame_table_start + i * 8;
        m_frames[i].offset = *(const int32_t*)(fhdr + 0);
        m_frames[i].format = fhdr[4];

        // Decode frame dimensions from pixel data header
        int offset = m_frames[i].offset;
        if (offset < 0 || offset >= data_size - 4) continue;

        int16_t w = *(const int16_t*)(data + offset + 0);
        int16_t h = *(const int16_t*)(data + offset + 2);
        m_frames[i].width  = w;
        m_frames[i].height = h;

        // For RLE3 format, skip the encoder-specific header
        int px_offset;
        if (m_frames[i].format == 3) {
            // EncoderType (byte), BlockSize (byte), then actual data
            px_offset = offset + 4;
            m_frames[i].size = 0;
        } else if (m_frames[i].format == 0) {
            px_offset = offset + 4;
            m_frames[i].size = w * h;
        } else {
            px_offset = offset + 4;
            m_frames[i].size = 0;
        }

        if (px_offset < 0 || px_offset >= data_size) continue;

        m_pixel_data[i] = static_cast<uint8_t*>(malloc(w * h));
        if (!m_pixel_data[i]) continue;

        memset(m_pixel_data[i], 0, w * h);

        if (m_frames[i].format == 3 && w > 0 && h > 0) {
            DecodeRLE3(data + px_offset, data_size - px_offset,
                       m_pixel_data[i], w, h);
        } else if (m_frames[i].format == 0) {
            int sz = (w * h < data_size - px_offset) ? w * h : data_size - px_offset;
            memcpy(m_pixel_data[i], data + px_offset, sz);
        }
    }

    return true;
}

void ShpImage::Free()
{
    if (m_pixel_data && m_frame_count > 0) {
        for (int i = 0; i < m_frame_count; ++i) {
            free(m_pixel_data[i]);
        }
        free(m_pixel_data);
        m_pixel_data = nullptr;
    }
    free(m_frames);
    m_frames = nullptr;
    m_frame_count = 0;
    m_raw_data = nullptr;
    m_raw_size = 0;
}

const uint8_t* ShpImage::GetPixelData(int frame_index) const
{
    if (frame_index < 0 || frame_index >= m_frame_count) return nullptr;
    return m_pixel_data[frame_index];
}

bool ShpImage::DecodeRLE3(const uint8_t* src, int src_size,
                           uint8_t* dst, int dst_width, int dst_height)
{
    if (!src || !dst) return false;

    int src_pos = 0;
    int line = 0;
    int pos_in_line = 0;

    while (line < dst_height && src_pos < src_size) {
        if (pos_in_line >= dst_width) {
            pos_in_line = 0;
            ++line;
        }
        if (line >= dst_height) break;

        if (src_pos >= src_size) break;
        uint8_t cmd = src[src_pos++];

        if (cmd == 0) {
            // End of line or section marker
            if (src_pos < src_size) {
                uint8_t sub = src[src_pos++];
                if (sub == 0) {
                    // End of line
                    pos_in_line = 0;
                    ++line;
                } else {
                    // Skip sub pixels
                    int skip = sub;
                    if (src_pos < src_size) {
                        uint8_t color = src[src_pos++];
                        for (int j = 0; pos_in_line < dst_width && j < skip; ++j) {
                            dst[line * dst_width + pos_in_line] = color;
                            ++pos_in_line;
                        }
                    }
                }
            }
        } else if (cmd <= 0x7F) {
            // Copy cmd literal bytes
            int count = cmd;
            for (int j = 0; j < count && src_pos < src_size; ++j) {
                dst[line * dst_width + pos_in_line] = src[src_pos++];
                ++pos_in_line;
                if (pos_in_line >= dst_width) {
                    pos_in_line = 0;
                    ++line;
                    if (line >= dst_height) break;
                }
            }
        } else {
            // RLE run: repeat next byte (cmd - 0x80) times
            int count = cmd - 0x80;
            if (src_pos < src_size) {
                uint8_t color = src[src_pos++];
                for (int j = 0; j < count; ++j) {
                    if (pos_in_line < dst_width) {
                        dst[line * dst_width + pos_in_line] = color;
                    }
                    ++pos_in_line;
                    if (pos_in_line >= dst_width) {
                        pos_in_line = 0;
                        ++line;
                        if (line >= dst_height) break;
                    }
                }
            }
        }
    }

    return true;
}

void ShpImage::RenderToSurface(
    Surface* surface, int frame_index,
    int dest_x, int dest_y,
    const uint8_t palette[256][4])
{
    if (!surface || !palette || frame_index < 0 || frame_index >= m_frame_count)
        return;

    const uint8_t* src = m_pixel_data[frame_index];
    if (!src) return;

    int fw = m_frames[frame_index].width;
    int fh = m_frames[frame_index].height;

    DDSURFACEDESC2 desc = {};
    desc.dwSize = sizeof(desc);

    auto* dsurf = dynamic_cast<DSurface*>(surface);
    if (!dsurf || !dsurf->Surface) return;

    if (FAILED(dsurf->Surface->Lock(nullptr, &desc, DDLOCK_WAIT, nullptr)))
        return;

    uint16_t* buf = static_cast<uint16_t*>(desc.lpSurface);
    int pitch = desc.lPitch / 2;

    for (int y = 0; y < fh; ++y) {
        int sy = dest_y + y;
        if (sy < 0 || sy >= surface->Height) continue;

        for (int x = 0; x < fw; ++x) {
            int sx = dest_x + x;
            if (sx < 0 || sx >= surface->Width) continue;

            uint8_t idx = src[y * fw + x];
            if (idx == 0) continue;

            const uint8_t* px = palette[idx];
            uint16_t r5 = px[0] >> 3;
            uint16_t g6 = px[1] >> 2;
            uint16_t b5 = px[2] >> 3;
            buf[sy * pitch + sx] = static_cast<uint16_t>((r5 << 11) | (g6 << 5) | b5);
        }
    }

    dsurf->Surface->Unlock(nullptr);
}

} // namespace gamemd
