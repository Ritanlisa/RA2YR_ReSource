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
    virtual void RenderFrame(DSurface* target) = 0;  // Blit current frame to surface  // 0x432AB0
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
    BinkMovieHandle() : totalFrames(0) {} // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual ~BinkMovieHandle() override; // IDA: NOT_FOUND

    virtual int  GetWidth()  const override { return width; } // IDA: NOT_FOUND
    virtual int  GetHeight() const override { return height; } // IDA: NOT_FOUND
    virtual bool IsPlaying() const override { return playing; } // IDA: NOT_FOUND
    virtual bool AdvanceFrame() override; // IDA: NOT_FOUND
    virtual void RenderFrame(DSurface* target) override; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual void Stop() override; // IDA: NOT_FOUND

    void RenderFrameRaw(void* locked_buffer, int pitch_bytes, int height, // IDA: UNMATCHED — no_callgraph_match, no_git_history
                        int dest_x = 0, int dest_y = 0);

    int  GetCurrentFrame() const { return currentFrame; } // IDA: NOT_FOUND
    int  GetTotalFrames()  const { return totalFrames; } // IDA: NOT_FOUND
    uint32_t GetSurfaceFlags() const { return surfaceFlags; } // IDA: NOT_FOUND

    bool OpenFromMemory(const void* data, int size, DSurface* render_target); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    bool OpenFromFile(const char* filename, DSurface* render_target); // IDA: NOT_FOUND

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
    virtual void RenderFrame(DSurface* target) override; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual void Stop() override;

    bool OpenFromMemory(const void* data, int size); // IDA: UNMATCHED — no_callgraph_match, no_git_history

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
    static MoviePlayer& Instance() // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        static MoviePlayer inst;
        return inst;
    }

    // Create a movie handle from a filename
    // Returns nullptr if format unsupported or file not found
    static MovieHandle* CreateMovie(const char* filename, DSurface* render_target);  // 0x5C07D0

    // Play a movie synchronously (blocks until complete or user skip)
    // Implements Movie_Play (0x5BED40) logic
    bool PlayMovie(const char* filename, // IDA: UNMATCHED — no_callgraph_match, no_git_history
                   DSurface* hidden_surface,
                   bool stretch_to_fit = false,
                   bool show_ui = false);

    // Stop current movie
    void StopMovie();

    // Get current movie type for the last opened file
    static MovieType DetectFormat(const char* filename); // IDA: UNMATCHED — no_callgraph_match, no_git_history

    MovieHandle* CurrentMovie() const { return currentMovie; } // IDA: UNMATCHED — no_callgraph_match, no_git_history

private:
    MoviePlayer() = default;
    MovieHandle* currentMovie = nullptr;
};

} // namespace gamemd
