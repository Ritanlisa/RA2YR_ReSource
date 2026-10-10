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
; // unmatched: no callgraph reference and no git history record

    // unmatched: no callgraph reference and no git history record
    virtual ~SHPStruct();

    int Load();
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
    bool IsReference() const;

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
    const SHPFrame& GetFrameHeader(int frame_index) const;

    SHPFrame FirstFrame;
};

class SHPReference : public SHPStruct
{
    // unmatched: no callgraph reference and no git history record
    SHPReference(const char* filename);

    char*            Filename;  // data: 0xb783f8
    SHPStruct*       Data;  // data: 0x840b4c
    bool             Loaded;
    int32_t          Index;
    SHPReference*    Next;
    SHPReference*    Prev;
    uint32_t         SHPReference_field_20;
};

} // namespace gamemd
