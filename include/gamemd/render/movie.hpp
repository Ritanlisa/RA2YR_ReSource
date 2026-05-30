#pragma once

#include <cstdint>
#include "gamemd/core/math.hpp"

namespace gamemd
{

class DSurface;

//
// MovieHandle — abstract base for movie playback
// Matches BinkMovieHandle/VQMovieHandle vtable from IDA
//
class MovieHandle
{
public:
    virtual ~MovieHandle() = default;

    virtual int  GetWidth()  const = 0;   // Movie pixel width
    virtual int  GetHeight() const = 0;   // Movie pixel height
    virtual bool IsPlaying() const = 0;   // Is a frame currently playing?
    virtual bool AdvanceFrame() = 0;      // Advance to next frame
    virtual void RenderFrame(DSurface* target) = 0;  // Blit current frame to surface
    virtual void Stop() = 0;              // Stop playback
};

//
// MovieType — format detection result
//
enum class MovieType : uint8_t
{
    Unknown = 0,    // Not a valid movie file
    BINK    = 1,    // .bik — BINK video (RAD Game Tools)
    VQA     = 2,    // Westwood VQA format (older)
};

//
// BINK Movie (binkw32.dll wrapper)
// Imports: _BinkOpen, _BinkDoFrame, _BinkCopyToBuffer, _BinkNextFrame, _BinkClose
//
class BinkMovieHandle : public MovieHandle
{
public:
    BinkMovieHandle() : m_total_frames(0) {}
    virtual ~BinkMovieHandle() override;

    virtual int  GetWidth()  const override { return m_width; }
    virtual int  GetHeight() const override { return m_height; }
    virtual bool IsPlaying() const override { return m_playing; }
    virtual bool AdvanceFrame() override;
    virtual void RenderFrame(DSurface* target) override;
    virtual void Stop() override;

    void RenderFrameRaw(void* locked_buffer, int pitch_bytes, int height,
                        int dest_x = 0, int dest_y = 0);

    int  GetCurrentFrame() const { return m_current_frame; }
    int  GetTotalFrames()  const { return m_total_frames; }
    uint32_t GetSurfaceFlags() const { return m_surface_flags; }

    bool OpenFromMemory(const void* data, int size, DSurface* render_target);
    bool OpenFromFile(const char* filename, DSurface* render_target);

private:
    void*     m_bink_handle   = nullptr;
    char*     m_temp_path     = nullptr;
    DSurface* m_render_target = nullptr;
    int       m_width         = 0;
    int       m_height        = 0;
    int       m_current_frame = 0;
    int       m_total_frames  = 0;
    int       m_throttle_counter = 0;
    bool      m_frame_decoded = false;
    int       m_data_size     = 0;
    uint32_t  m_surface_flags = 0x20000000;  // from _BinkDDSurfaceType (sub_432750)
    bool      m_playing       = false;
    bool      m_memory_owned  = false;
    void*     m_memory_buffer = nullptr;
};

//
// VQA Movie (Westwood VQA format)
//
class VQMovieHandle : public MovieHandle
{
public:
    VQMovieHandle() = default;
    virtual ~VQMovieHandle() override;

    virtual int  GetWidth()  const override { return m_width; }
    virtual int  GetHeight() const override { return m_height; }
    virtual bool IsPlaying() const override { return m_playing; }
    virtual bool AdvanceFrame() override;
    virtual void RenderFrame(DSurface* target) override;
    virtual void Stop() override;

    bool OpenFromMemory(const void* data, int size);

private:
    void*   m_vqa_data      = nullptr;
    int     m_data_size     = 0;
    int     m_width         = 0;
    int     m_height        = 0;
    int     m_current_frame = 0;
    bool    m_playing       = false;
};

//
// MoviePlayer — High-level movie playback
// Implements Movie_Play + Movie_Create from IDA (0x5BED40, 0x5C07D0)
//
class MoviePlayer
{
public:
    static MoviePlayer& Instance()
    {
        static MoviePlayer inst;
        return inst;
    }

    // Create a movie handle from a filename
    // Returns nullptr if format unsupported or file not found
    static MovieHandle* CreateMovie(const char* filename, DSurface* render_target);

    // Play a movie synchronously (blocks until complete or user skip)
    // Implements Movie_Play (0x5BED40) logic
    bool PlayMovie(const char* filename,
                   DSurface* hidden_surface,
                   bool stretch_to_fit = false,
                   bool show_ui = false);

    // Stop current movie
    void StopMovie();

    // Get current movie type for the last opened file
    static MovieType DetectFormat(const char* filename);

    MovieHandle* CurrentMovie() const { return m_current_movie; }

private:
    MoviePlayer() = default;
    MovieHandle* m_current_movie = nullptr;
};

} // namespace gamemd
