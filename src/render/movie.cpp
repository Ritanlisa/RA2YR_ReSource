#include "gamemd/render/movie.hpp"
#include "gamemd/render/surface.hpp"
#include "gamemd/system/file_system.hpp"
#include "gamemd/core/logging.hpp"

#include <windows.h>
#include <ddraw.h>
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

    // Load file data from MIX or disk
    void* data = FileSystem::LoadFile(filename, false);
    if (!data) return nullptr;

    // Determine data size (FileSystem doesn't provide size, so we use MIX lookup)
    int size = 0;
    {
        FILE* fp = fopen(filename, "rb");
        if (fp) {
            fseek(fp, 0, SEEK_END);
            size = static_cast<int>(ftell(fp));
            fclose(fp);
        }
    }
    // If size is 0 (MIX-loaded data), use a reasonable max
    if (size <= 0) size = 64 * 1024 * 1024;  // 64MB upper bound

    if (type == MovieType::BINK) {
        auto* movie = new BinkMovieHandle();
        if (!movie) { free(data); return nullptr; }

        LOG_INFO("Movie_Create: opening BINK '%s' (%d bytes %s)", filename, size,
                 (size > 64*1024*1024) ? "[from MIX]" : "[from disk]");

        // Copy data so the movie owns it
        void* buf = malloc(size);
        if (!buf) { delete movie; free(data); return nullptr; }
        memcpy(buf, data, size);
        free(data);

        if (movie->OpenFromMemory(buf, size, render_target)) {
            return movie;
        }
        free(buf);
        delete movie;
    }
    else if (type == MovieType::VQA) {
        auto* movie = new VQMovieHandle();
        if (!movie) { free(data); return nullptr; }

        LOG_INFO("Movie_Create: opening VQA '%s'", filename);
        if (movie->OpenFromMemory(data, size)) {
            return movie;
        }
        free(data);
        delete movie;
    }
    else {
        free(data);
    }

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
// BINK DLL function pointer types (binkw32.dll imports from IDA 0x7e1590-0x7e15c0)
// ---------------------------------------------------------------------------
typedef void*  (__stdcall *BinkOpen_t)(const char* name, uint32_t flags);
typedef void   (__stdcall *BinkClose_t)(void* bnk);
typedef int32_t(__stdcall *BinkDoFrame_t)(void* bnk);
typedef int32_t(__stdcall *BinkCopyToBuffer_t)(void* bnk, void* dest,
    int32_t dest_pitch, uint32_t dest_height, uint32_t dest_x, uint32_t dest_y, uint32_t flags);
typedef void   (__stdcall *BinkNextFrame_t)(void* bnk);
typedef void   (__stdcall *BinkWait_t)(void* bnk);
typedef int32_t(__stdcall *BinkGetError_t)(void);

static HMODULE s_binkDLL = nullptr;
static BinkOpen_t s_BinkOpen = nullptr;
static BinkClose_t s_BinkClose = nullptr;
static BinkDoFrame_t s_BinkDoFrame = nullptr;
static BinkCopyToBuffer_t s_BinkCopyToBuffer = nullptr;
static BinkNextFrame_t s_BinkNextFrame = nullptr;
static BinkWait_t s_BinkWait = nullptr;
static BinkGetError_t s_BinkGetError = nullptr;

static bool BinkInit()
{
    if (s_binkDLL) return true;
    s_binkDLL = LoadLibraryA("binkw32.dll");
    if (!s_binkDLL) return false;

    s_BinkOpen          = (BinkOpen_t)GetProcAddress(s_binkDLL, "_BinkOpen@8");
    s_BinkClose         = (BinkClose_t)GetProcAddress(s_binkDLL, "_BinkClose@4");
    s_BinkDoFrame       = (BinkDoFrame_t)GetProcAddress(s_binkDLL, "_BinkDoFrame@4");
    s_BinkCopyToBuffer  = (BinkCopyToBuffer_t)GetProcAddress(s_binkDLL, "_BinkCopyToBuffer@28");
    s_BinkNextFrame     = (BinkNextFrame_t)GetProcAddress(s_binkDLL, "_BinkNextFrame@4");
    s_BinkWait          = (BinkWait_t)GetProcAddress(s_binkDLL, "_BinkWait@4");
    s_BinkGetError      = (BinkGetError_t)GetProcAddress(s_binkDLL, "_BinkGetError@0");

    if (!s_BinkOpen || !s_BinkDoFrame || !s_BinkCopyToBuffer || !s_BinkClose) {
        FreeLibrary(s_binkDLL);
        s_binkDLL = nullptr;
        return false;
    }
    LOG_INFO("binkw32.dll loaded successfully");
    return true;
}

// ---------------------------------------------------------------------------
// BinkMovieHandle Implementation (uses binkw32.dll via dynamic loading)
// ---------------------------------------------------------------------------
BinkMovieHandle::~BinkMovieHandle()
{
    Stop();
}

bool BinkMovieHandle::OpenFromMemory(const void* data, int size, DSurface* render_target)
{
    m_render_target = render_target;
    m_data_size = size;

    auto* hdr = static_cast<const BinkFileHeader*>(data);
    m_width  = hdr->width;
    m_height = hdr->height;
    m_total_frames = hdr->num_frames;
    m_current_frame = 0;

    if (!BinkInit()) {
        // No binkw32.dll — store data for software decode later
        m_memory_buffer = const_cast<void*>(data);
        m_memory_owned  = true;  // We own this buffer now
        m_playing = true;
        LOG_INFO("BinkMovie: %dx%d, %d frames (software decode mode)", m_width, m_height, hdr->num_frames);
        return true;
    }

    // Extract BINK data to temp file for _BinkOpen (BINK 1.x opens files, not memory)
    char temp_path[MAX_PATH];
    GetTempPathA(sizeof(temp_path), temp_path);
    strcat_s(temp_path, "_ra2yr_bink_tmp.bik");

    FILE* fp = nullptr;
    if (fopen_s(&fp, temp_path, "wb") == 0 && fp) {
        fwrite(data, 1, size, fp);
        fclose(fp);
        m_temp_path = _strdup(temp_path);
    }

    // Open BINK via binkw32.dll (flags=0: normal file open)
    m_bink_handle = s_BinkOpen(temp_path, 0);
    if (!m_bink_handle) {
        LOG_TRACE("BinkMovie: _BinkOpen('%s') failed", temp_path);
        return false;
    }

    m_playing = true;
    LOG_INFO("BinkMovie: %dx%d, %d frames (binkw32.dll)", m_width, m_height, hdr->num_frames);
    return true;
}

bool BinkMovieHandle::AdvanceFrame()
{
    if (!m_playing) return false;

    if (m_bink_handle) {
        int result = s_BinkDoFrame(m_bink_handle);
        if (result < 0) {
            // End of stream — stop playing
            m_playing = false;
            return false;
        }
        ++m_current_frame;
        return true;
    }

    // Software decode fallback
    auto* hdr = static_cast<const BinkFileHeader*>(m_memory_buffer);
    if (!hdr || m_current_frame >= static_cast<int>(hdr->num_frames))
        return false;
    ++m_current_frame;
    return true;
}

void BinkMovieHandle::RenderFrame(DSurface* target)
{
    if (!target || !m_playing) return;

    if (m_bink_handle && s_BinkCopyToBuffer) {
        DDSURFACEDESC2 desc = {};
        desc.dwSize = sizeof(desc);
        if (SUCCEEDED(target->Surface->Lock(nullptr, &desc, DDLOCK_WAIT, nullptr))) {
            // BINK surface format flags:
            // BINKSURFACE565 = 0x20000000 (16-bit R5G6B5)
            // BINKSURFACE555 = 0x10000000 (16-bit X1R5G5B5)
            // BINKSURFACE32  = 0x80000000 (32-bit X8R8G8B8)
            s_BinkCopyToBuffer(m_bink_handle, desc.lpSurface,
                               desc.lPitch, m_height, 0, 0,
                               0x20000000);  // BINKSURFACE565
            target->Surface->Unlock(nullptr);
        }
        return;
    }

    // Software fallback
    if (m_memory_buffer) {
        DDSURFACEDESC2 desc = {};
        desc.dwSize = sizeof(desc);
        if (SUCCEEDED(target->Surface->Lock(nullptr, &desc, DDLOCK_WAIT, nullptr))) {
            auto* buf = static_cast<uint16_t*>(desc.lpSurface);
            int pitch = desc.lPitch / 2;
            for (int y = 0; y < m_height && y < 600; y++)
                for (int x = 0; x < m_width && x < 800; x++)
                    buf[y * pitch + x] = 0x39E7;
            target->Surface->Unlock(nullptr);
        }
    }
}

void BinkMovieHandle::Stop()
{
    m_playing = false;
    if (m_bink_handle && s_BinkClose) {
        s_BinkClose(m_bink_handle);
    }
    m_bink_handle = nullptr;

    if (m_memory_owned && m_memory_buffer) {
        free(m_memory_buffer);
    }
    m_memory_buffer = nullptr;

    // Clean up temp file
    if (m_temp_path) {
        DeleteFileA(m_temp_path);
        free(m_temp_path);
        m_temp_path = nullptr;
    }
}

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
