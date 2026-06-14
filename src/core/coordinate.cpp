#include "gamemd/core/coordinate.hpp"
#include <cmath>

namespace gamemd {

namespace {

constexpr int8_t kCosTable8[256] = {
     0,  3,  6,  9, 12, 15, 18, 21,
    24, 27, 30, 33, 36, 39, 42, 45,
    48, 51, 54, 57, 59, 62, 65, 67,
    70, 73, 75, 78, 80, 82, 85, 87,
    89, 91, 94, 96, 98,100,101,103,
   105,107,108,110,111,113,114,116,
   117,118,119,120,121,122,123,123,
   124,125,125,126,126,126,126,126,

   127,126,126,126,126,126,125,125,
   124,123,123,122,121,120,119,118,
   117,116,114,113,112,110,108,107,
   105,103,102,100, 98, 96, 94, 91,
    89, 87, 85, 82, 80, 78, 75, 73,
    70, 67, 65, 62, 59, 57, 54, 51,
    48, 45, 42, 39, 36, 33, 30, 27,
    24, 21, 18, 15, 12,  9,  6,  3,

     0, -3, -6, -9,-12,-15,-18,-21,
   -24,-27,-30,-33,-36,-39,-42,-45,
   -48,-51,-54,-57,-59,-62,-65,-67,
   -70,-73,-75,-78,-80,-82,-85,-87,
   -89,-91,-94,-96,-98,-100,-101,-103,
  -105,-107,-108,-110,-111,-113,-114,-116,
  -117,-118,-119,-120,-121,-122,-123,-123,
  -124,-125,-125,-126,-126,-126,-126,-126,

  -127,-126,-126,-126,-126,-126,-125,-125,
  -124,-123,-123,-122,-121,-120,-119,-118,
  -117,-116,-114,-113,-112,-110,-108,-107,
  -105,-103,-102,-100, -98, -96, -94, -91,
   -89, -87, -85, -82, -80, -78, -75, -73,
   -70, -67, -65, -62, -59, -57, -54, -51,
   -48, -45, -42, -39, -36, -33, -30, -27,
   -24, -21, -18, -15, -12,  -9,  -6,  -3,
};

constexpr int8_t kSinTable8[256] = {
   127,126,126,126,126,126,125,125,
   124,123,123,122,121,120,119,118,
   117,116,114,113,112,110,108,107,
   105,103,102,100, 98, 96, 94, 91,
    89, 87, 85, 82, 80, 78, 75, 73,
    70, 67, 65, 62, 59, 57, 54, 51,
    48, 45, 42, 39, 36, 33, 30, 27,
    24, 21, 18, 15, 12,  9,  6,  3,

     0, -3, -6, -9,-12,-15,-18,-21,
   -24,-27,-30,-33,-36,-39,-42,-45,
   -48,-51,-54,-57,-59,-62,-65,-67,
   -70,-73,-75,-78,-80,-82,-85,-87,
   -89,-91,-94,-96,-98,-100,-101,-103,
  -105,-107,-108,-110,-111,-113,-114,-116,
  -117,-118,-119,-120,-121,-122,-123,-123,
  -124,-125,-125,-126,-126,-126,-126,-126,

  -127,-126,-126,-126,-126,-126,-125,-125,
  -124,-123,-123,-122,-121,-120,-119,-118,
  -117,-116,-114,-113,-112,-110,-108,-107,
  -105,-103,-102,-100, -98, -96, -94, -91,
   -89, -87, -85, -82, -80, -78, -75, -73,
   -70, -67, -65, -62, -59, -57, -54, -51,
   -48, -45, -42, -39, -36, -33, -30, -27,
   -24, -21, -18, -15, -12,  -9,  -6,  -3,

     0,  3,  6,  9, 12, 15, 18, 21,
    24, 27, 30, 33, 36, 39, 42, 45,
    48, 51, 54, 57, 59, 62, 65, 67,
    70, 73, 75, 78, 80, 82, 85, 87,
    89, 91, 94, 96, 98,100,101,103,
   105,107,108,110,111,113,114,116,
   117,118,119,120,121,122,123,123,
   124,125,125,126,126,126,126,126,
};

constexpr int8_t kAdjacentX[8] = {  0,  1,  1,  1,  0, -1, -1, -1 };
constexpr int8_t kAdjacentY[8] = { -1, -1,  0,  1,  1,  1,  0, -1 };

uint8_t Atan2(int y, int x) noexcept
{
    if (x == 0)
        return y > 0 ? 64 : 192;

    int angle = static_cast<int>(std::atan2(static_cast<double>(y), static_cast<double>(x))
        * 128.0 / 3.14159265358979323846);

    if (angle < 0)
        angle += 256;

    return static_cast<uint8_t>(angle & 0xFF);
}

} // anonymous namespace

uint8_t Direction8(const CoordStruct& from, const CoordStruct& to) noexcept
{
    int dx = to.X - from.X;
    int dy = from.Y - to.Y;

    if (dx == 0 && dy == 0)
        return 0;

    int dir32 = static_cast<int>(Atan2(dx, dy)) + 16;
    if (dir32 < 0) dir32 += 256;
    dir32 &= 0xFF;

    return static_cast<uint8_t>((dir32 / 32) & 0x07);
}

uint8_t Direction32(const CoordStruct& from, const CoordStruct& to) noexcept
{
    int dx = to.X - from.X;
    int dy = from.Y - to.Y;

    if (dx == 0 && dy == 0)
        return 0;

    int dir32 = static_cast<int>(Atan2(dx, dy)) + 16;
    if (dir32 < 0) dir32 += 256;

    return static_cast<uint8_t>(dir32 & 0xFF);
}

CoordStruct CoordMove(const CoordStruct& start, uint8_t dir32, uint16_t distance) noexcept
{
    int x = start.X + (static_cast<int>(kCosTable8[dir32]) * static_cast<int>(distance) * 2);
    int y = start.Y - (static_cast<int>(kSinTable8[dir32]) * static_cast<int>(distance) * 2);
    return CoordStruct(x, y, start.Z);
}

CellStruct AdjacentCell(const CellStruct& cell, uint8_t facing8) noexcept
{
    int idx = facing8 & 0x07;
    return CellStruct(
        static_cast<int16_t>(cell.X + kAdjacentX[idx]),
        static_cast<int16_t>(cell.Y + kAdjacentY[idx])
    );
}

bool IsCloseEnough(const CoordStruct& a, const CoordStruct& b, int range) noexcept
{
    int dx = a.X - b.X;
    if (dx < 0) dx = -dx;
    if (dx > range) return false;

    int dy = a.Y - b.Y;
    if (dy < 0) dy = -dy;
    if (dy > range) return false;

    return true;
}

// IDA: 0x487EA0 — Coord_Neighbor: get neighboring coordinate by direction (0-7)
Point2D* __fastcall Coord_Neighbor(Point2D* out, const Point2D* pos, uint8_t dir)
{
    // IDA: direction X/Y offset table at 0x89F688
    static const int8_t kDirOffsets[8][2] = {
        {0,-1},{1,-1},{1,0},{1,1},{0,1},{-1,1},{-1,0},{-1,-1}
    };
    int idx = dir & 7;
    out->X = pos->X + kDirOffsets[idx][0];
    out->Y = pos->Y + kDirOffsets[idx][1];
    return out;
}

// IDA: 0x6D20E0 — Coord_ZToScreenY: convert Z coordinate to screen Y
int __fastcall Coord_ZToScreenY(int z)
{
    // dbl_B0CD48 = scaling factor for isometric projection
    static const double kZScale = 0.5;  // IDA: dbl_B0CD48
    return (int)floor(kZScale * (double)z + (z >= 728 ? 1.0 : 0.0) + 0.5);
}

// IDA: 0x5C6960 — BitArray_FindHighestBit: find highest set bit in DWORD array
int __fastcall BitArray_FindHighestBit(const uint32_t* bits, int count)
{
    int i = count;
    while (--i >= 0) {
        if (bits[i] != 0) {
            uint32_t v = bits[i];
            int pos = 32 * (i + 1);
            uint32_t mask = 0x80000000;
            while ((v & mask) == 0) {
                mask >>= 1;
                --pos;
            }
            return pos;
        }
    }
    return 0;
}

// IDA: 0x634510 — Bounds_Compute: square centered at (cx,cy) with size w
RectangleStruct* __fastcall Bounds_Compute(RectangleStruct* out, int size, int cx, int cy)
{
    out->X = cx - size / 2;
    out->Y = cy - size / 2;
    out->Width = size;
    out->Height = size;
    return out;
}

// IDA: 0x6D1EB0 — IsoCoord::ToPixel (89B)
// Converts isometric grid coordinates to screen pixel coordinates.
// Tile dimensions: width=60, height=30 (RA2 isometric tile size).
// Formula: px = 30*x - 30*y, py = 15*x + 15*y
Point2D* __fastcall IsoCoord_ToPixel(Point2D* out, int x, int y)
{
    out->X = -60 * y / 2 + 60 * x / 2;   // = 30*x - 30*y
    out->Y =  30 * y / 2 + 30 * x / 2;   // = 15*x + 15*y
    return out;
}

} // namespace gamemd
