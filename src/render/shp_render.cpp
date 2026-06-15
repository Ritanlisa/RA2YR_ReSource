#include "render/shp_render.hpp"
#include <cstring>
#include <cstdlib>
#include "core/logging.hpp"

namespace gamemd {

ShpImage::~ShpImage()
{
    Free();
}

// TS SHP format header (8 bytes): skip(2B=0) | width(2B) | height(2B) | frameCount(2B)
// Per-frame entry (24 bytes): x(2B) | y(2B) | w(2B) | h(2B) | format(1B) | 11B padding | fileOffset(4B)

bool ShpImage::LoadFromMemory(const uint8_t* data, int data_size)
{
    Free();
    if (!data || data_size < 8) {
        LOG_WARN("SHP: null data or too small (size=%d)", data_size);
        return false;
    }

    m_raw_data = data;
    m_raw_size = data_size;

    // IDA: TS SHP format -- header is 8 bytes: 0x0000, width(2B), height(2B), frames(2B)
    uint16_t first = *(const uint16_t*)(data + 0);
    if (first != 0) {
        // TD format: frames(2B) at offset 0 + width(2B) + height(2B)
        // TD SHP has offset table after the 6-byte header
        m_header.frames     = first;
        m_header.max_width  = *(const uint16_t*)(data + 2);
        m_header.max_height = *(const uint16_t*)(data + 4);
        LOG_WARN("SHP: TD format detected, limited support (w=%d h=%d f=%d)",
            m_header.max_width, m_header.max_height, m_header.frames);
    } else {
        m_header.max_width  = *(const uint16_t*)(data + 2);
        m_header.max_height = *(const uint16_t*)(data + 4);
        m_header.frames     = *(const uint16_t*)(data + 6);
    }
    m_header.frames_dup = m_header.frames;
    m_header.data_size  = 0;

    m_frame_count = m_header.frames;
    LOG_TRACE("SHP: w=%d h=%d frames=%d size=%d",
        m_header.max_width, m_header.max_height, m_frame_count, data_size);
    if (m_frame_count <= 0 || m_frame_count > 1024) return false;

    // Sanity: 24 bytes per frame entry must fit
    if (8 + m_frame_count * 24 > data_size) return false;

    m_frames = static_cast<ShpFrameInfo*>(
        calloc(m_frame_count, sizeof(ShpFrameInfo)));
    m_pixel_data = static_cast<uint8_t**>(
        calloc(m_frame_count, sizeof(uint8_t*)));

    if (!m_frames || !m_pixel_data) { Free(); return false; }

    // Frame table starts at offset 8 (after 8-byte header)
    for (int i = 0; i < m_frame_count; ++i) {
        const uint8_t* fhdr = data + 8 + i * 24;
        // Per-frame entry: x(2B), y(2B), width(2B), height(2B), format(1B), 11B padding, fileOffset(4B)
        int16_t fx = *(const int16_t*)(fhdr + 0);
        int16_t fy = *(const int16_t*)(fhdr + 2);
        int16_t fw = *(const int16_t*)(fhdr + 4);
        int16_t fh = *(const int16_t*)(fhdr + 6);
        uint8_t fmt = fhdr[8];
        uint32_t fileOffset = *(const uint32_t*)(fhdr + 20);

        m_frames[i].width  = fw > 0 ? fw : 0;
        m_frames[i].height = fh > 0 ? fh : 0;
        m_frames[i].offset = fileOffset;
        m_frames[i].format = fmt;
        m_frames[i].size   = fw * fh;

        if (fw <= 0 || fh <= 0 || fileOffset == 0 || fileOffset >= (uint32_t)data_size)
            continue;

        // Pad to even dimensions (OpenRA approach)
        int dataWidth  = fw;
        int dataHeight = fh;
        if (dataWidth  % 2 == 1) dataWidth++;
        if (dataHeight % 2 == 1) dataHeight++;

        m_pixel_data[i] = static_cast<uint8_t*>(malloc(dataWidth * dataHeight));
        if (!m_pixel_data[i]) continue;
        memset(m_pixel_data[i], 0, dataWidth * dataHeight);

        if (fmt == 3) {
            // Format 3: scanline-based RLE-zero compression
            // Each scanline: length(2B) followed by RLE-zero data
            DecodeRLE3(data + fileOffset, data_size - fileOffset,
                       m_pixel_data[i], dataWidth, fh);
        } else if (fmt == 0 || fmt == 1) {
            // Format 0/1: uncompressed full-width rows
            const uint8_t* src = data + fileOffset;
            for (int y = 0; y < fh && fileOffset + y * fw + fw <= (uint32_t)data_size; y++) {
                memcpy(m_pixel_data[i] + y * dataWidth, src + y * fw, fw);
            }
        } else if (fmt == 2) {
            // Format 2: uncompressed length-prefixed scanlines
            const uint8_t* src = data + fileOffset;
            for (int y = 0; y < fh && fileOffset + 2 <= (uint32_t)data_size; y++) {
                int len = *(const uint16_t*)src - 2;
                src += 2;
                fileOffset += 2;
                if (len > 0 && fileOffset + len <= (uint32_t)data_size) {
                    int copy = (len < fw) ? len : fw;
                    memcpy(m_pixel_data[i] + y * dataWidth, src, copy);
                    src += len;
                    fileOffset += len;
                }
            }
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
    // Format 3: scanline-based RLE-zero compression (OpenRA ShpTSLoader)
    // Each scanline: uint16 length (total bytes including this 2B prefix, minus 2)
    // Followed by RLE-zero data:
    //   cmd == 0x00: next byte is count -> write 'count' zeros
    //   cmd != 0x00: write byte directly
    if (!src || !dst) return false;

    const uint8_t* p = src;
    const uint8_t* end = src + src_size;

    for (int y = 0; y < dst_height && p + 2 <= end; y++) {
        int lineLen = *(const uint16_t*)p - 2;
        p += 2;
        const uint8_t* lineEnd = p + lineLen;
        if (lineEnd > end) lineEnd = end;

        int x = 0;
        while (p < lineEnd && x < dst_width) {
            uint8_t cmd = *p++;
            if (cmd == 0) {
                if (p < lineEnd) {
                    int count = *p++;
                    while (count-- > 0 && x < dst_width) {
                        dst[y * dst_width + x] = 0;
                        x++;
                    }
                }
            } else {
                dst[y * dst_width + x] = cmd;
                x++;
            }
        }
        p = lineEnd;
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
