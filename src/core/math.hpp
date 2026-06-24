#pragma once

#include <cstdint>
#include <cmath>
#include <ostream>

namespace gamemd
{

template <typename T>
struct Vector2D
{
    static const Vector2D Empty;

    T X = T();
    T Y = T();

    // design: default constructor (compiler-generated), no callgraph reference
    constexpr Vector2D() noexcept = default;
    // design: constexpr only (no runtime address), no callgraph/git history reference
    constexpr Vector2D(T x, T y) noexcept : X(x), Y(y) {}

    // unmatched: no callgraph reference and no git history record
    Vector2D operator+(const Vector2D& rhs) const
    {
        return { static_cast<T>(X + rhs.X), static_cast<T>(Y + rhs.Y) };
    }

    // unmatched: no callgraph reference and no git history record
    Vector2D& operator+=(const Vector2D& rhs)
    {
        X += rhs.X;
        Y += rhs.Y;
        return *this;
    }

    // unmatched: no callgraph reference and no git history record
    Vector2D operator-(const Vector2D& rhs) const
    {
        return { static_cast<T>(X - rhs.X), static_cast<T>(Y - rhs.Y) };
    }

    // unmatched: no callgraph reference and no git history record
    Vector2D& operator-=(const Vector2D& rhs)
    {
        X -= rhs.X;
        Y -= rhs.Y;
        return *this;
    }

    // unmatched: no callgraph reference and no git history record
    Vector2D operator-() const
    {
        return { static_cast<T>(-X), static_cast<T>(-Y) };
    }

    // unmatched: no callgraph reference and no git history record
    bool operator==(const Vector2D& rhs) const
    {
        return X == rhs.X && Y == rhs.Y;
    }

    // unmatched: no callgraph reference and no git history record
    bool operator!=(const Vector2D& rhs) const
    {
        return !(*this == rhs);
    }

    // unmatched: no callgraph reference and no git history record
    Vector2D operator*(double scalar) const
    {
        return { static_cast<T>(X * scalar), static_cast<T>(Y * scalar) };
    }

    // unmatched: no callgraph reference and no git history record
    Vector2D& operator*=(double scalar)
    {
        X = static_cast<T>(X * scalar);
        Y = static_cast<T>(Y * scalar);
        return *this;
    }

    // unmatched: no callgraph reference and no git history record
    double operator*(const Vector2D& rhs) const
    {
        return static_cast<double>(X) * rhs.X + static_cast<double>(Y) * rhs.Y;
    }

    // unmatched: no callgraph reference and no git history record
    double MagnitudeSquared() const
    {
        return static_cast<double>(X) * X + static_cast<double>(Y) * Y;
    }

    double Magnitude() const
    {
        return std::sqrt(MagnitudeSquared());
    }

    // unmatched: no callgraph reference and no git history record
    double DistanceFrom(const Vector2D& rhs) const
    {
        return (*this - rhs).Magnitude();
    }

    // unmatched: no callgraph reference and no git history record
    double DistanceFromSquared(const Vector2D& rhs) const
    {
        return (*this - rhs).MagnitudeSquared();
    }

    bool IsCollinearTo(const Vector2D& rhs) const
    {
        return static_cast<double>(X) * rhs.Y == static_cast<double>(Y) * rhs.X;
    }
};

template <typename T>
const Vector2D<T> Vector2D<T>::Empty = Vector2D<T>();

template <typename T>
struct Vector3D
{
    static const Vector3D Empty;

    T X = T();
    T Y = T();
    T Z = T();

    // design: default constructor (compiler-generated), no callgraph reference
    constexpr Vector3D() noexcept = default;
    // design: constexpr only (no runtime address), no callgraph/git history reference
    constexpr Vector3D(T x, T y, T z) noexcept : X(x), Y(y), Z(z) {}

    // unmatched: no callgraph reference and no git history record
    Vector3D operator+(const Vector3D& rhs) const
    {
        return { static_cast<T>(X + rhs.X), static_cast<T>(Y + rhs.Y), static_cast<T>(Z + rhs.Z) };
    }

    // unmatched: no callgraph reference and no git history record
    Vector3D& operator+=(const Vector3D& rhs)
    {
        X += rhs.X;
        Y += rhs.Y;
        Z += rhs.Z;
        return *this;
    }

    // unmatched: no callgraph reference and no git history record
    Vector3D operator-(const Vector3D& rhs) const
    {
        return { static_cast<T>(X - rhs.X), static_cast<T>(Y - rhs.Y), static_cast<T>(Z - rhs.Z) };
    }

    // unmatched: no callgraph reference and no git history record
    Vector3D& operator-=(const Vector3D& rhs)
    {
        X -= rhs.X;
        Y -= rhs.Y;
        Z -= rhs.Z;
        return *this;
    }

    // unmatched: no callgraph reference and no git history record
    Vector3D operator-() const
    {
        return { static_cast<T>(-X), static_cast<T>(-Y), static_cast<T>(-Z) };
    }

    // unmatched: no callgraph reference and no git history record
    bool operator==(const Vector3D& rhs) const
    {
        return X == rhs.X && Y == rhs.Y && Z == rhs.Z;
    }

    // unmatched: no callgraph reference and no git history record
    bool operator!=(const Vector3D& rhs) const
    {
        return !(*this == rhs);
    }

    // unmatched: no callgraph reference and no git history record
    Vector3D operator*(double scalar) const
    {
        return { static_cast<T>(X * scalar), static_cast<T>(Y * scalar), static_cast<T>(Z * scalar) };
    }

    // unmatched: no callgraph reference and no git history record
    Vector3D& operator*=(double scalar)
    {
        X = static_cast<T>(X * scalar);
        Y = static_cast<T>(Y * scalar);
        Z = static_cast<T>(Z * scalar);
        return *this;
    }

    // unmatched: no callgraph reference and no git history record
    double operator*(const Vector3D& rhs) const
    {
        return static_cast<double>(X) * rhs.X
             + static_cast<double>(Y) * rhs.Y
             + static_cast<double>(Z) * rhs.Z;
    }

    // unmatched: no callgraph reference and no git history record
    double MagnitudeSquared() const
    {
        return static_cast<double>(X) * X + static_cast<double>(Y) * Y + static_cast<double>(Z) * Z;
    }

    double Magnitude() const
    {
        return std::sqrt(MagnitudeSquared());
    }

    // unmatched: no callgraph reference and no git history record
    double DistanceFrom(const Vector3D& rhs) const
    {
        return (*this - rhs).Magnitude();
    }

    // unmatched: no callgraph reference and no git history record
    double DistanceFromSquared(const Vector3D& rhs) const
    {
        return (*this - rhs).MagnitudeSquared();
    }

    bool IsCollinearTo(const Vector3D& rhs) const
    {
        return CrossProduct(rhs).MagnitudeSquared() == 0;
    }

    // unmatched: no callgraph reference and no git history record
    Vector3D CrossProduct(const Vector3D& rhs) const
    {
        return {
            static_cast<T>(Y * rhs.Z - Z * rhs.Y),
            static_cast<T>(Z * rhs.X - X * rhs.Z),
            static_cast<T>(X * rhs.Y - Y * rhs.X)
        };
    }
};

template <typename T>
const Vector3D<T> Vector3D<T>::Empty = Vector3D<T>();

using CellStruct   = Vector2D<short>;
using Point2D      = Vector2D<int>;
using CoordStruct  = Vector3D<int>;
using RGBClass     = Vector3D<std::uint8_t>;

// ostream output for hook DLL comparison logs
template <typename T>
// design: likely inlined by compiler (no standalone symbol), no callgraph/git history reference
inline std::ostream& operator<<(std::ostream& os, const Vector2D<T>& v) {
    return os << "<Vector2D,X=" << std::dec << v.X << ",Y=" << v.Y << ">";
}

struct Matrix3D
{
    float Data[12] = {};
};

struct RectangleStruct
{
    int X = 0;
    int Y = 0;
    int Width = 0;
    int Height = 0;
};

// design: likely inlined by compiler (no standalone symbol), no callgraph/git history reference
inline std::ostream& operator<<(std::ostream& os, const RectangleStruct& r) {
    return os << "<RectangleStruct,X=" << std::dec << r.X << ",Y=" << r.Y
              << ",W=" << r.Width << ",H=" << r.Height << ">";
}

struct ColorStruct
{
    std::uint8_t R = 0;
    std::uint8_t G = 0;
    std::uint8_t B = 0;

    constexpr ColorStruct() noexcept = default;  // 0x4A35A0
    constexpr ColorStruct(std::uint8_t r, std::uint8_t g, std::uint8_t b) noexcept
        : R(r), G(g), B(b) {}   // 0x4A35A0

    // unmatched: no callgraph reference and no git history record
    bool operator==(const ColorStruct& rhs) const
    {
        return R == rhs.R && G == rhs.G && B == rhs.B;
    }

    // unmatched: no callgraph reference and no git history record
    bool operator!=(const ColorStruct& rhs) const
    {
        return !(*this == rhs);
    }
};

struct TimerStruct
{
    int32_t StartTime = -1;
    int32_t __padding = 0;
    int32_t TimeLeft = 0;

    constexpr TimerStruct() noexcept = default;
    explicit TimerStruct(int duration) noexcept : StartTime(-1), __padding(0), TimeLeft(duration) {}

    bool IsActive() const { return TimeLeft > 0; }
    void Update() { if (TimeLeft > 0) --TimeLeft; }
};

} // namespace gamemd

namespace gamemd::math
{

constexpr double Pi     = 3.14159265358979323846;
constexpr double TwoPi  = 6.28318530717958647692;
constexpr double HalfPi = 1.57079632679489661923;
constexpr double Sqrt2  = 1.41421356237309504880;

constexpr double Deg2Rad(double deg) noexcept
{
    return deg * Pi / 180.0;
}

constexpr double Rad2Deg(double rad) noexcept
{
    return rad * 180.0 / Pi;
}

} // namespace gamemd::math
