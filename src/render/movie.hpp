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
    // unmatched: no callgraph reference and no git history record
    BinkMovieHandle() : totalFrames(0) {}
    // design: virtual function, no binary implementation matched in IDA
    virtual ~BinkMovieHandle() override;

    // design: inline accessor, inlined at all call sites
    virtual int  GetWidth()  const override { return width; }
    // design: inline accessor, inlined at all call sites
    virtual int  GetHeight() const override { return height; }
    // design: inline accessor, inlined at all call sites
    virtual bool IsPlaying() const override { return playing; }
    // design: virtual function, no binary implementation matched in IDA
    virtual bool AdvanceFrame() override;
    // unmatched: no callgraph reference and no git history record
    virtual void RenderFrame(DSurface* target) override;
    // design: virtual function, no binary implementation matched in IDA
    virtual void Stop() override;

    // unmatched: no callgraph reference and no git history record
    void RenderFrameRaw(void* locked_buffer, int pitch_bytes, int height,
                        int dest_x = 0, int dest_y = 0);

    int  GetCurrentFrame() const { return currentFrame; } // 0x438a00
    // design: inline accessor, inlined at all call sites
    int  GetTotalFrames()  const { return totalFrames; }
    // design: inline accessor, inlined at all call sites
    uint32_t GetSurfaceFlags() const { return surfaceFlags; }

    // unmatched: no callgraph reference and no git history record
    bool OpenFromMemory(const void* data, int size, DSurface* render_target);
    // wrapper: delegates to BombClass::GetCurrentFrame at 0x438A00
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
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int Check(int a1);  // 0x432bd0 -- BinkMovieHandle::Check
    void* CopyFrameToSurface();  // 0x433060 -- BinkMovieHandle::CopyFrameToSurface
    int InitFromFile();  // 0x5c0550 -- BinkMovieHandle::InitFromFile
    int COMStub();  // 0x5c0570 -- BinkMovieHandle::COMStub
    bool AddRef();  // 0x5c0580 -- BinkMovieHandle::AddRef
    int Release();  // 0x5c0590 -- BinkMovieHandle::Release
    int Pause(int a1, int a2);  // 0x5c05a0 -- BinkMovieHandle::Pause
    int RenderLoop(int a1);  // 0x5c05c0 -- BinkMovieHandle::RenderLoop
    int AdjustSurfaceFormat(int a1);  // 0x5c05d0 -- BinkMovieHandle::AdjustSurfaceFormat
    int BlitToTarget();  // 0x5c05e0 -- BinkMovieHandle::BlitToTarget
    void* Close();  // 0x5c05f0 -- BinkMovieHandle::Close
    void* QueryInterface(int a1);  // 0x5c0a30 -- BinkMovieHandle::QueryInterface
    // === SYMBOL-ANCHOR (END) ===
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
    // unmatched: no callgraph reference and no git history record
    virtual void RenderFrame(DSurface* target) override;
    virtual void Stop() override;

    // unmatched: no callgraph reference and no git history record
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
    // unmatched: no callgraph reference and no git history record
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
    // unmatched: no callgraph reference and no git history record
    bool PlayMovie(const char* filename,
                   DSurface* hidden_surface,
                   bool stretch_to_fit = false,
                   bool show_ui = false);

    // Stop current movie
    void StopMovie();

    // Get current movie type for the last opened file
    // unmatched: no callgraph reference and no git history record
    static MovieType DetectFormat(const char* filename);

    // unmatched: no callgraph reference and no git history record
    MovieHandle* CurrentMovie() const { return currentMovie; }

private:
    MoviePlayer() = default;
    MovieHandle* currentMovie = nullptr;
};

} // namespace gamemd
