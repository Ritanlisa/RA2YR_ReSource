#include "render/movie.hpp"
#include "render/surface.hpp"
#include "system/file_system.hpp"
#include "misc/audio.hpp"
#include "core/logging.hpp"

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

    currentMovie = CreateMovie(filename, hidden_surface);
    if (!currentMovie) {
        LOG_TRACE("Movie_Play: failed to create movie handle");
        return false;
    }

    int movie_w = currentMovie->GetWidth();
    int movie_h = currentMovie->GetHeight();
    LOG_INFO("Movie: %dx%d, stretching to fit", movie_w, movie_h);

    // Main playback loop -- advance frames until complete
    while (currentMovie->IsPlaying()) {
        if (!currentMovie->AdvanceFrame())
            break;

        if (hidden_surface) {
            currentMovie->RenderFrame(hidden_surface);
        }

        // In the original, this is where FramePresent is called
        // to flip the buffer to screen
    }

    StopMovie();
    return true;
}

void MoviePlayer::StopMovie()
{
    if (currentMovie) {
        currentMovie->Stop();
        delete currentMovie;
        currentMovie = nullptr;
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
typedef int32_t(__stdcall *BinkWait_t)(void* bnk);
typedef const char*(__stdcall *BinkGetError_t)(void);
typedef int32_t(__stdcall *BinkDDSurfaceType_t)(void* lpDDS);  // 0x7e15a8
typedef int32_t(__stdcall *BinkGoto_t)(void* bnk, uint32_t frame, uint32_t flags);
typedef int32_t(__stdcall *BinkOpenDirectSound_t)(void* ds);  // 0x7e1594
typedef void   (__stdcall *BinkSetSoundSystem_t)(BinkOpenDirectSound_t open_func, void* param);  // 0x7e1590
typedef void   (__stdcall *BinkSetVolume_t)(void* bnk, int32_t volume);  // 0x7e15a0
typedef void   (__stdcall *BinkPause_t)(void* bnk, int32_t pause);  // 0x7e15b0

static HMODULE s_binkDLL = nullptr;
static BinkOpen_t s_BinkOpen = nullptr;
static BinkClose_t s_BinkClose = nullptr;
static BinkDoFrame_t s_BinkDoFrame = nullptr;
static BinkCopyToBuffer_t s_BinkCopyToBuffer = nullptr;
static BinkNextFrame_t s_BinkNextFrame = nullptr;
static BinkWait_t s_BinkWait = nullptr;
static BinkGetError_t s_BinkGetError = nullptr;
static BinkDDSurfaceType_t s_BinkDDSurfaceType = nullptr;
static BinkGoto_t s_BinkGoto = nullptr;
static BinkSetSoundSystem_t s_BinkSetSoundSystem = nullptr;
static BinkOpenDirectSound_t s_BinkOpenDirectSound = nullptr;
static BinkSetVolume_t s_BinkSetVolume = nullptr;
static BinkPause_t s_BinkPause = nullptr;
static int32_t s_binkVolume = 32768;  // default max volume (1.0 * 32768)

static bool BinkInit()
{
    if (s_binkDLL) return true;
    
    // Try exact path first (EXE directory)
    char exeDir[MAX_PATH];
    GetModuleFileNameA(nullptr, exeDir, sizeof(exeDir));
    char* sep = strrchr(exeDir, '\\');
    if (sep) { *sep = '\0'; strcat_s(exeDir, "\\binkw32.dll"); }
    s_binkDLL = LoadLibraryA(exeDir);
    if (!s_binkDLL) s_binkDLL = LoadLibraryA("binkw32.dll");
    if (!s_binkDLL) return false;

    s_BinkOpen          = (BinkOpen_t)GetProcAddress(s_binkDLL, "_BinkOpen@8");
    s_BinkClose         = (BinkClose_t)GetProcAddress(s_binkDLL, "_BinkClose@4");
    s_BinkDoFrame       = (BinkDoFrame_t)GetProcAddress(s_binkDLL, "_BinkDoFrame@4");
    s_BinkCopyToBuffer  = (BinkCopyToBuffer_t)GetProcAddress(s_binkDLL, "_BinkCopyToBuffer@28");
    s_BinkNextFrame     = (BinkNextFrame_t)GetProcAddress(s_binkDLL, "_BinkNextFrame@4");
    s_BinkWait          = (BinkWait_t)GetProcAddress(s_binkDLL, "_BinkWait@4");
    s_BinkGetError      = (BinkGetError_t)GetProcAddress(s_binkDLL, "_BinkGetError@0");
    s_BinkDDSurfaceType = (BinkDDSurfaceType_t)GetProcAddress(s_binkDLL, "_BinkDDSurfaceType@4");
    s_BinkGoto          = (BinkGoto_t)GetProcAddress(s_binkDLL, "_BinkGoto@12");
    s_BinkSetSoundSystem    = (BinkSetSoundSystem_t)GetProcAddress(s_binkDLL, "_BinkSetSoundSystem@8");
    s_BinkOpenDirectSound   = (BinkOpenDirectSound_t)GetProcAddress(s_binkDLL, "_BinkOpenDirectSound@4");
    s_BinkSetVolume         = (BinkSetVolume_t)GetProcAddress(s_binkDLL, "_BinkSetVolume@8");
    s_BinkPause             = (BinkPause_t)GetProcAddress(s_binkDLL, "_BinkPause@8");

    if (!s_BinkOpen || !s_BinkDoFrame || !s_BinkCopyToBuffer || !s_BinkClose) {
        FreeLibrary(s_binkDLL);
        s_binkDLL = nullptr;
        return false;
    }
    char dllPath[MAX_PATH];
    GetModuleFileNameA(s_binkDLL, dllPath, sizeof(dllPath));
    LOG_INFO("binkw32.dll loaded: %s", dllPath);

    if (s_BinkSetSoundSystem && s_BinkOpenDirectSound && AudioIsSoundEnabled()) {
        IDirectSound* pDS = Audio_GetDirectSound();
        if (pDS) {
            s_BinkSetSoundSystem(s_BinkOpenDirectSound, pDS);
            LOG_INFO("BinkSetSoundSystem: DirectSound configured");
        }
    }
    return true;
}

// ---------------------------------------------------------------------------
// BinkMovieHandle Implementation (uses binkw32.dll via dynamic loading)
// ---------------------------------------------------------------------------
BinkMovieHandle::~BinkMovieHandle()
{
    Stop();
}

bool BinkMovieHandle::OpenFromFile(const char* filename, DSurface* render_target)
{
    renderTarget = render_target;

    if (!BinkInit()) {
        LOG_TRACE("BinkMovie::OpenFromFile: binkw32.dll not available");
        return false;
    }

    // Direct file open -- matches original sub_432750: BinkOpen(filename, 0)
    binkHandle = s_BinkOpen(filename, 0);
    if (!binkHandle) {
        LOG_TRACE("BinkMovie::OpenFromFile: _BinkOpen('%s') failed", filename);
        return false;
    }

    // Read dimensions from BINK handle (first 3 DWORDs: Width, Height, Frames)
    uint32_t* hdr = (uint32_t*)binkHandle;
    width  = hdr[0];
    height = hdr[1];
    totalFrames = hdr[2];
    currentFrame = 0;

    // Query surface pixel format
    if (render_target && render_target->Surface && s_BinkDDSurfaceType) {
        surfaceFlags = s_BinkDDSurfaceType(render_target->Surface);
        LOG_DEBUG("BinkMovie: _BinkDDSurfaceType returned fmt_code=%d", surfaceFlags);
        if (surfaceFlags < 0 || surfaceFlags > 15) {
            surfaceFlags = 10;
            LOG_DEBUG("BinkMovie: invalid code, defaulting to 10 (RGB565)");
        }
    } else {
        surfaceFlags = 10;
    }

    playing = true;
    LOG_INFO("BinkMovie::OpenFromFile: %dx%d, %d frames, fmt_code=%d",
        width, height, totalFrames, surfaceFlags);

    if (s_BinkSetVolume) {
        s_BinkSetVolume(binkHandle, s_binkVolume);
    }
    return true;
}

bool BinkMovieHandle::OpenFromMemory(const void* data, int size, DSurface* render_target)
{
    renderTarget = render_target;
    dataSize = size;

    auto* hdr = static_cast<const BinkFileHeader*>(data);
    width  = hdr->width;
    height = hdr->height;
    totalFrames = hdr->num_frames;
    currentFrame = 0;

    if (!BinkInit()) {
        memoryBuffer = const_cast<void*>(data);
        memoryOwned  = true;
        playing = true;
        LOG_INFO("BinkMovie: %dx%d, %d frames (software decode mode)", width, height, hdr->num_frames);
        return true;
    }

    // Write BINK data to CWD matching original: sub_432750 opens from game dir
    tempPath = _strdup("_ra2yr_bink_tmp.bik");
    FILE* fp = nullptr;
    if (fopen_s(&fp, tempPath, "wb") == 0 && fp) {
        fwrite(data, 1, size, fp);
        fclose(fp);
    } else {
        LOG_TRACE("BinkMovie: failed to write temp file '%s'", tempPath);
        return false;
    }

    // Open BINK: sub_432750 -- BinkOpen(filename, 0)
    binkHandle = s_BinkOpen(tempPath, 0);
    if (!binkHandle) {
        LOG_TRACE("BinkMovie: _BinkOpen('%s') failed", tempPath);
        return false;
    }

    // Query surface pixel format code from BinkDDSurfaceType
    if (render_target && render_target->Surface && s_BinkDDSurfaceType) {
        surfaceFlags = s_BinkDDSurfaceType(render_target->Surface);
        LOG_DEBUG("BinkMovie: _BinkDDSurfaceType returned format code %d", surfaceFlags);
        if (surfaceFlags < 0 || surfaceFlags > 15) {
            surfaceFlags = 10;  // default RGB565
            LOG_DEBUG("BinkMovie: invalid code, defaulting to 10 (RGB565)");
        }
    } else {
        surfaceFlags = 10;
    }

    playing = true;
    LOG_INFO("BinkMovie: %dx%d, %d frames, surface_flags=0x%08X (binkw32.dll)",
        width, height, hdr->num_frames, surfaceFlags);

    if (s_BinkSetVolume) {
        s_BinkSetVolume(binkHandle, s_binkVolume);
    }
    return true;
}

bool BinkMovieHandle::AdvanceFrame()
{
    if (!playing || !binkHandle) return false;

    // Frame pacing: BinkWait blocks until next frame is due for display
    // Returns 0 = frame ready, 1 = not yet time
    if (s_BinkWait && s_BinkWait(binkHandle)) return false;

    int doFrameResult = s_BinkDoFrame(binkHandle);
    if (doFrameResult != 0) {
        if (s_BinkGoto) {
            int gotoResult = s_BinkGoto(binkHandle, 0, 0);
            if (gotoResult < 0) { playing = false; return false; }
            currentFrame = 0;
            LOG_DEBUG("BINK: BinkGoto(0) looped");
            doFrameResult = s_BinkDoFrame(binkHandle);
            if (doFrameResult != 0) { playing = false; return false; }
        } else {
            playing = false;
            return false;
        }
    }
    if (s_BinkWait) s_BinkWait(binkHandle);
    if (s_BinkNextFrame) s_BinkNextFrame(binkHandle);
    ++currentFrame;
    return true;
}

void BinkMovieHandle::RenderFrame(DSurface* target)
{
    if (!target || !playing) return;

    if (binkHandle && s_BinkCopyToBuffer) {
        DDSURFACEDESC2 desc = {};
        desc.dwSize = sizeof(desc);
        if (SUCCEEDED(target->Surface->Lock(nullptr, &desc, DDLOCK_WAIT, nullptr))) {
            if (s_BinkWait) s_BinkWait(binkHandle);
            s_BinkCopyToBuffer(binkHandle, desc.lpSurface,
                               desc.lPitch, height, 0, 0,
                               surfaceFlags);
            target->Surface->Unlock(nullptr);
        }
    }

    // Software fallback
    if (memoryBuffer) {
        DDSURFACEDESC2 desc = {};
        desc.dwSize = sizeof(desc);
        if (SUCCEEDED(target->Surface->Lock(nullptr, &desc, DDLOCK_WAIT, nullptr))) {
            auto* buf = static_cast<uint16_t*>(desc.lpSurface);
            int pitch = desc.lPitch / 2;
            for (int y = 0; y < height && y < 600; y++)
                for (int x = 0; x < width && x < 800; x++)
                    buf[y * pitch + x] = 0x39E7;
            target->Surface->Unlock(nullptr);
        }
    }
}

void BinkMovieHandle::RenderFrameRaw(void* locked_buffer, int pitch_bytes, int height,
                                     int dest_x, int dest_y)
{
    if (!locked_buffer || !playing) return;

    if (binkHandle && s_BinkCopyToBuffer) {
        if (s_BinkWait) s_BinkWait(binkHandle);
        s_BinkCopyToBuffer(binkHandle, locked_buffer,
                           pitch_bytes, height, dest_x, dest_y,
                           surfaceFlags);
    }
    // _BinkNextFrame is called in AdvanceFrame after _BinkDoFrame (sub_432E40 order)
}

void BinkMovieHandle::Stop()
{
    playing = false;
    if (binkHandle && s_BinkClose) {
        s_BinkClose(binkHandle);
    }
    binkHandle = nullptr;

    if (memoryOwned && memoryBuffer) {
        free(memoryBuffer);
    }
    memoryBuffer = nullptr;

    // Clean up temp file (in CWD, not system temp)
    if (tempPath) {
        DeleteFileA(tempPath);
        free(tempPath);
        tempPath = nullptr;
    }
}

VQMovieHandle::~VQMovieHandle()
{
    Stop();
}

bool VQMovieHandle::OpenFromMemory(const void* data, int size)
{
    vqaData  = const_cast<void*>(data);
    dataSize = size;

    auto* hdr = static_cast<const VQAFileHeader*>(data);
    width  = hdr->width;
    height = hdr->height;
    currentFrame = 0;
    playing = true;

    LOG_INFO("VQMovie: %dx%d, %d frames", width, height, hdr->num_frames);
    return true;
}

bool VQMovieHandle::AdvanceFrame()
{
    if (!playing || !vqaData) return false;

    auto* hdr = static_cast<const VQAFileHeader*>(vqaData);
    if (currentFrame >= hdr->num_frames)
        return false;

    ++currentFrame;
    return true;
}

void VQMovieHandle::RenderFrame(DSurface* target)
{
    (void)target;
    LOG_TRACE("VQMovieHandle::RenderFrame: frame %d", currentFrame);
}

void VQMovieHandle::Stop()
{
    playing = false;
    vqaData  = nullptr;
    dataSize = 0;
}

} // namespace gamemd
