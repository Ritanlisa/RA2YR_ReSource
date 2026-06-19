#pragma once

#include <cstdint>

#include "core/math.hpp"
#include "fundamentals.hpp"

namespace gamemd
{

class SHPReference;
class SHPFile;

struct SHPStruct
{
    SHPStruct() noexcept
        : Type(0), Width(0), Height(0), Frames(0) // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
    }

    virtual ~SHPStruct(); // IDA: UNMATCHED — no_callgraph_match, no_git_history

    void Load();
    void Unload(); // IDA: UNMATCHED — no_callgraph_match, no_git_history

    SHPFile* GetData();

    RectangleStruct* GetFrameBounds(RectangleStruct& out, int frame_index) const; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    RectangleStruct GetFrameBounds(int frame_index) const; // IDA: UNMATCHED — no_callgraph_match, no_git_history

    ColorStruct* GetColor(ColorStruct& out, int frame_index) const;
    ColorStruct GetColor(int frame_index) const;

    byte* GetPixels(int frame_index); // IDA: UNMATCHED — no_callgraph_match, no_git_history

    bool HasCompression(int frame_index) const; // IDA: UNMATCHED — no_callgraph_match, no_git_history

    bool IsReference() const { return Type == 0xFFFF; } // IDA: UNMATCHED — no_callgraph_match, no_git_history

    SHPReference* AsReference(); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    const SHPReference* AsReference() const; // IDA: UNMATCHED — no_callgraph_match, no_git_history

    SHPFile* AsFile();
    const SHPFile* AsFile() const;

    uint16_t  Type;
    int16_t  Width;
    int16_t  Height;
    int16_t  Frames;
};

struct SHPFrame
{
    int16_t     Left;
    int16_t     Top;
    int16_t     Width;
    int16_t     Height;
    uint32_t    Flags;
    ColorStruct Color;
    uint32_t    SHPFrame_field_10;
    int32_t     Offset;
};

class SHPFile : public SHPStruct
{
    const SHPFrame& GetFrameHeader(int frame_index) const // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        return (&FirstFrame)[frame_index];
    }

    SHPFrame FirstFrame;
};

class SHPReference : public SHPStruct
{
    SHPReference(const char* filename); // IDA: UNMATCHED — no_callgraph_match, no_git_history

    char*            Filename;
    SHPStruct*       Data;
    bool             Loaded;
    int32_t          Index;
    SHPReference*    Next;
    SHPReference*    Prev;
    uint32_t         SHPReference_field_20;
};

inline SHPReference* SHPStruct::AsReference()
{
    return IsReference() ? static_cast<SHPReference*>(this) : nullptr;
}

inline const SHPReference* SHPStruct::AsReference() const
{
    return IsReference() ? static_cast<const SHPReference*>(this) : nullptr;
}

inline SHPFile* SHPStruct::AsFile()
{
    return !IsReference() ? static_cast<SHPFile*>(this) : nullptr;
}

inline const SHPFile* SHPStruct::AsFile() const
{
    return !IsReference() ? static_cast<const SHPFile*>(this) : nullptr;
}

} // namespace gamemd
