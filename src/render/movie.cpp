#include "gamemd/render/movie.hpp"
#include "gamemd/render/surface.hpp"
#include "gamemd/system/file_system.hpp"
#include "gamemd/core/logging.hpp"

#include <cstring>
#include <cstdio>
#include <cstdlib>

namespace gamemd
{

// ---------------------------------------------------------------------------
// BINK Format Header (from binkw32.h / RAD Game Tools)
// ---------------------------------------------------------------------------
struct BinkFileHeader
{
    uint32_t signature;      // 'BIKb' or 'BIKi' or 'KB2a' etc
    uint32_t file_size;
    uint32_t num_frames;
    uint32_t largest_frame_size;
    uint32_t flags;
    uint32_t width;
    uint32_t height;
    uint32_t frame_rate_div;
    uint32_t frame_rate;
    // ... more fields
};

// ---------------------------------------------------------------------------
// VQA Format Header (Westwood VQA)
// ---------------------------------------------------------------------------
struct VQAFileHeader
{
    uint32_t signature;      // 'WVQZ' or 'FORM'
    uint32_t header_size;
    uint32_t version;
    uint32_t flags;
    uint16_t num_frames;
    uint16_t width;
    uint16_t height;
    uint16_t block_w;
    uint16_t block_h;
    uint16_t frame_rate;
    uint16_t cb_parts;
    uint16_t colors;
    uint16_t max_blocks;
    uint16_t offset_x;
    uint16_t offset_y;
    uint16_t max_v_scale;
    uint16_t max_h_scale;
};

// ---------------------------------------------------------------------------
// Format Detection
// ---------------------------------------------------------------------------
MovieType MoviePlayer::DetectFormat(const char* filename)
{
    if (!filename) return MovieType::Unknown;

    // Check extension first
    const char* ext = strrchr(filename, '.');
    if (ext && _stricmp(ext, ".bik") == 0)
        return MovieType::BINK;

    if (ext && _stricmp(ext, ".vqa") == 0)
        return MovieType::VQA;

    // Try to read header bytes to detect format
    void* data = FileSystem::LoadFile(filename, false);
    if (!data) return MovieType::Unknown;

    MovieType result = MovieType::Unknown;
    auto* hdr = static_cast<const uint32_t*>(data);

    // BINK signatures: 'BIKb', 'BIKi', 'BIKf', 'KB2a', 'KB2i', 'KB2f'
    uint32_t sig = hdr[0];
    if (sig == 0x624B4942 || sig == 0x694B4942 || sig == 0x664B4942 ||  // BIKb/i/f
        sig == 0x6132424B || sig == 0x6932424B || sig == 0x6632424B)    // KB2a/i/f
    {
        result = MovieType::BINK;
    }
    // VQA signature: 'FORM' (IFF container)
    else if (sig == 0x4D524F46)
    {
        result = MovieType::VQA;
    }

    free(data);
    return result;
}

// ---------------------------------------------------------------------------
// Movie_Create (0x5C07D0)
// ---------------------------------------------------------------------------
MovieHandle* MoviePlayer::CreateMovie(const char* filename, DSurface* render_target)
{
    MovieType type = DetectFormat(filename);
    if (type == MovieType::Unknown) {
        LOG_TRACE("MoviePlayer::CreateMovie: unknown format for '%s'", filename);
        return nullptr;
    }

    // Load file data
    void* data = FileSystem::LoadFile(filename, false);
    if (!data) return nullptr;

    int size = 0;
    {
        FILE* fp = fopen(filename, "rb");
        if (fp) {
            fseek(fp, 0, SEEK_END);
            size = static_cast<int>(ftell(fp));
            fclose(fp);
        }
    }
    if (size <= 0) { free(data); return nullptr; }

    if (type == MovieType::BINK) {
        auto* movie = new BinkMovieHandle();
        if (!movie) { free(data); return nullptr; }

        LOG_INFO("Movie_Create: opening BINK '%s' (%d bytes)", filename, size);
        if (movie->OpenFromMemory(data, size, render_target)) {
            return movie;
        }
        delete movie;
    }
    else if (type == MovieType::VQA) {
        auto* movie = new VQMovieHandle();
        if (!movie) { free(data); return nullptr; }

        LOG_INFO("Movie_Create: opening VQA '%s' (%d bytes)", filename, size);
        if (movie->OpenFromMemory(data, size)) {
            return movie;
        }
        delete movie;
    }

    free(data);
    return nullptr;
}

// ---------------------------------------------------------------------------
// Movie_Play (0x5BED40)
// ---------------------------------------------------------------------------
bool MoviePlayer::PlayMovie(const char* filename,
                            DSurface* hidden_surface,
                            bool stretch_to_fit,
                            bool show_ui)
{
    StopMovie();

    LOG_INFO("Movie_Play: '%s' (stretch=%d, show_ui=%d)", filename, stretch_to_fit, show_ui);

    m_current_movie = CreateMovie(filename, hidden_surface);
    if (!m_current_movie) {
        LOG_TRACE("Movie_Play: failed to create movie handle");
        return false;
    }

    int movie_w = m_current_movie->GetWidth();
    int movie_h = m_current_movie->GetHeight();
    LOG_INFO("Movie: %dx%d, stretching to fit", movie_w, movie_h);

    // Main playback loop — advance frames until complete
    while (m_current_movie->IsPlaying()) {
        if (!m_current_movie->AdvanceFrame())
            break;

        if (hidden_surface) {
            m_current_movie->RenderFrame(hidden_surface);
        }

        // In the original, this is where Frame_Present is called
        // to flip the buffer to screen
    }

    StopMovie();
    return true;
}

void MoviePlayer::StopMovie()
{
    if (m_current_movie) {
        m_current_movie->Stop();
        delete m_current_movie;
        m_current_movie = nullptr;
    }
}

// ---------------------------------------------------------------------------
// BinkMovieHandle Implementation
// ---------------------------------------------------------------------------
BinkMovieHandle::~BinkMovieHandle()
{
    Stop();
}

bool BinkMovieHandle::OpenFromMemory(const void* data, int size, DSurface* render_target)
{
    m_render_target = render_target;

    auto* hdr = static_cast<const BinkFileHeader*>(data);
    m_width  = hdr->width;
    m_height = hdr->height;
    m_current_frame = 0;
    m_playing = true;

    // Store buffer (the caller frees, unless we copy)
    m_memory_buffer = const_cast<void*>(data);
    m_memory_owned  = false;
    m_bink_handle   = const_cast<void*>(data);  // In real implementation: _BinkOpen(data)

    LOG_INFO("BinkMovie: %dx%d, %d frames", m_width, m_height, hdr->num_frames);
    return true;
}

bool BinkMovieHandle::AdvanceFrame()
{
    if (!m_playing || !m_bink_handle) return false;

    auto* hdr = static_cast<const BinkFileHeader*>(m_bink_handle);
    if (m_current_frame >= static_cast<int>(hdr->num_frames))
        return false;

    ++m_current_frame;
    return true;
}

void BinkMovieHandle::RenderFrame(DSurface* target)
{
    (void)target;
    // Real implementation: _BinkCopyToBuffer → Lock → memcpy → Unlock
    LOG_TRACE("BinkMovieHandle::RenderFrame: frame %d", m_current_frame);
}

void BinkMovieHandle::Stop()
{
    m_playing = false;
    if (m_memory_owned && m_memory_buffer) {
        free(m_memory_buffer);
    }
    m_memory_buffer = nullptr;
    m_bink_handle   = nullptr;
}

// ---------------------------------------------------------------------------
// VQMovieHandle Implementation
// ---------------------------------------------------------------------------
VQMovieHandle::~VQMovieHandle()
{
    Stop();
}

bool VQMovieHandle::OpenFromMemory(const void* data, int size)
{
    m_vqa_data  = const_cast<void*>(data);
    m_data_size = size;

    auto* hdr = static_cast<const VQAFileHeader*>(data);
    m_width  = hdr->width;
    m_height = hdr->height;
    m_current_frame = 0;
    m_playing = true;

    LOG_INFO("VQMovie: %dx%d, %d frames", m_width, m_height, hdr->num_frames);
    return true;
}

bool VQMovieHandle::AdvanceFrame()
{
    if (!m_playing || !m_vqa_data) return false;

    auto* hdr = static_cast<const VQAFileHeader*>(m_vqa_data);
    if (m_current_frame >= hdr->num_frames)
        return false;

    ++m_current_frame;
    return true;
}

void VQMovieHandle::RenderFrame(DSurface* target)
{
    (void)target;
    LOG_TRACE("VQMovieHandle::RenderFrame: frame %d", m_current_frame);
}

void VQMovieHandle::Stop()
{
    m_playing = false;
    m_vqa_data  = nullptr;
    m_data_size = 0;
}

} // namespace gamemd
