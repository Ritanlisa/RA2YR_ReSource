#include "core/coordinate.hpp"
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

} // namespace gamemd
