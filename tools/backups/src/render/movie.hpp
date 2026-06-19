#pragma once

#include <cstdint>
#include "core/math.hpp"

namespace gamemd
{

class DSurface;

//
// MovieHandle -- abstract base for movie playback
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
// MovieType -- format detection result
//
enum class MovieType : uint8_t
{
    Unknown = 0,    // Not a valid movie file
    BINK    = 1,    // .bik -- BINK video (RAD Game Tools)
    VQA     = 2,    // Westwood VQA format (older)
};

//
// BINK Movie (binkw32.dll wrapper)
// Imports: _BinkOpen, _BinkDoFrame, _BinkCopyToBuffer, _BinkNextFrame, _BinkClose
//
class BinkMovieHandle : public MovieHandle
{
public:
    BinkMovieHandle() : totalFrames(0) {}
    virtual ~BinkMovieHandle() override;

    virtual int  GetWidth()  const override { return width; }
    virtual int  GetHeight() const override { return height; }
    virtual bool IsPlaying() const override { return playing; }
    virtual bool AdvanceFrame() override;
    virtual void RenderFrame(DSurface* target) override;
    virtual void Stop() override;

    void RenderFrameRaw(void* locked_buffer, int pitch_bytes, int height,
                        int dest_x = 0, int dest_y = 0);

    int  GetCurrentFrame() const { return currentFrame; }
    int  GetTotalFrames()  const { return totalFrames; }
    uint32_t GetSurfaceFlags() const { return surfaceFlags; }

    bool OpenFromMemory(const void* data, int size, DSurface* render_target);
    bool OpenFromFile(const char* filename, DSurface* render_target);

private:
    void*     binkHandle   = nullptr;
    char*     tempPath     = nullptr;
    DSurface* renderTarget = nullptr;
    int       width         = 0;
    int       height        = 0;
    int       currentFrame = 0;
    int       totalFrames  = 0;
    int       throttleCounter = 0;
    bool      frameDecoded = false;
    int       dataSize     = 0;
    uint32_t  surfaceFlags = 0x20000000;  // from _BinkDDSurfaceType (sub_432750)
    bool      playing       = false;
    bool      memoryOwned  = false;
    void*     memoryBuffer = nullptr;
};

//
// VQA Movie (Westwood VQA format)
//
class VQMovieHandle : public MovieHandle
{
public:
    VQMovieHandle() = default;
    virtual ~VQMovieHandle() override;

    virtual int  GetWidth()  const override { return width; }
    virtual int  GetHeight() const override { return height; }
    virtual bool IsPlaying() const override { return playing; }
    virtual bool AdvanceFrame() override;
    virtual void RenderFrame(DSurface* target) override;
    virtual void Stop() override;

    bool OpenFromMemory(const void* data, int size);

private:
    void*   vqaData      = nullptr;
    int     dataSize     = 0;
    int     width         = 0;
    int     height        = 0;
    int     currentFrame = 0;
    bool    playing       = false;
};

//
// MoviePlayer -- High-level movie playback
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
    static MovieHandle* CreateMovie(const char* filename, DSurface* render_target);  // 0x5c07d0

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

    MovieHandle* CurrentMovie() const { return currentMovie; }

private:
    MoviePlayer() = default;
    MovieHandle* currentMovie = nullptr;
};

} // namespace gamemd
