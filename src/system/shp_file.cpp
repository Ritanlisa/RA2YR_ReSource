#include "render/shp_struct.hpp"

#include <cstdio>
#include <cstdlib>
#include <cstring>

namespace gamemd {

#pragma pack(push, 1)
struct ShpFrameRaw {
    int32_t offset;
    uint8_t format;
    uint8_t ref_offset;
    uint16_t ref_offset2;
};
#pragma pack(pop)

void SHPStruct::Load()
{
    Unload();
}

void SHPStruct::Unload()
{
}

SHPFile* SHPStruct::GetData()
{
    return AsFile();
}

bool SHPStruct::HasCompression(int frame_index) const
{
    if (!AsFile()) return true;
    return true;
}

RectangleStruct* SHPStruct::GetFrameBounds(RectangleStruct& out, int frame_index) const
{
    out.X      = 0;
    out.Y      = 0;
    out.Width  = Width;
    out.Height = Height;
    return &out;
}

RectangleStruct SHPStruct::GetFrameBounds(int frame_index) const
{
    RectangleStruct out;
    GetFrameBounds(out, frame_index);
    return out;
}

ColorStruct* SHPStruct::GetColor(ColorStruct& out, int frame_index) const
{
    out.R = out.G = out.B = 0;
    return &out;
}

ColorStruct SHPStruct::GetColor(int frame_index) const
{
    ColorStruct out;
    GetColor(out, frame_index);
    return out;
}

byte* SHPStruct::GetPixels(int frame_index)
{
    (void)frame_index;
    return nullptr;
}

SHPStruct::~SHPStruct()
{
    Unload();
}

SHPReference::SHPReference(const char* filename)
    : Filename(nullptr)
    , Data(nullptr)
    , Loaded(false)
    , Index(0)
    , Next(nullptr)
    , Prev(nullptr)
    , unknown_20(0)
{
    Type = 0xFFFF;
}

} // namespace gamemd
