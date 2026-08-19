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
        // unmatched: no callgraph reference and no git history record
        : Type(0), Width(0), Height(0), Frames(0)
    {
    }

    // unmatched: no callgraph reference and no git history record
    virtual ~SHPStruct();

    void Load();
    // unmatched: no callgraph reference and no git history record
    void Unload();

    SHPFile* GetData();

    // unmatched: no callgraph reference and no git history record
    RectangleStruct* GetFrameBounds(RectangleStruct& out, int frame_index) const;
    // unmatched: no callgraph reference and no git history record
    RectangleStruct GetFrameBounds(int frame_index) const;

    ColorStruct* GetColor(ColorStruct& out, int frame_index) const;
    ColorStruct GetColor(int frame_index) const;

    // unmatched: no callgraph reference and no git history record
    byte* GetPixels(int frame_index);

    // unmatched: no callgraph reference and no git history record
    bool HasCompression(int frame_index) const;

    // unmatched: no callgraph reference and no git history record
    bool IsReference() const { return Type == 0xFFFF; }

    // unmatched: no callgraph reference and no git history record
    SHPReference* AsReference();
    // unmatched: no callgraph reference and no git history record
    const SHPReference* AsReference() const;

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
    // unmatched: no callgraph reference and no git history record
    const SHPFrame& GetFrameHeader(int frame_index) const
    {
        return (&FirstFrame)[frame_index];
    }

    SHPFrame FirstFrame;
};

class SHPReference : public SHPStruct
{
    // unmatched: no callgraph reference and no git history record
    SHPReference(const char* filename);

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
