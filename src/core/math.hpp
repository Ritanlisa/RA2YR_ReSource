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

    constexpr Vector2D() noexcept = default; // IDA: UNMATCHED — defaulted_special_member, default_ctor, no_callgraph_match
    constexpr Vector2D(T x, T y) noexcept : X(x), Y(y) {} // IDA: UNMATCHED — constexpr_no_runtime, no_callgraph_match, no_git_history

    Vector2D operator+(const Vector2D& rhs) const // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        return { static_cast<T>(X + rhs.X), static_cast<T>(Y + rhs.Y) };
    }

    Vector2D& operator+=(const Vector2D& rhs) // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        X += rhs.X;
        Y += rhs.Y;
        return *this;
    }

    Vector2D operator-(const Vector2D& rhs) const // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        return { static_cast<T>(X - rhs.X), static_cast<T>(Y - rhs.Y) };
    }

    Vector2D& operator-=(const Vector2D& rhs) // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        X -= rhs.X;
        Y -= rhs.Y;
        return *this;
    }

    Vector2D operator-() const // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        return { static_cast<T>(-X), static_cast<T>(-Y) };
    }

    bool operator==(const Vector2D& rhs) const // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        return X == rhs.X && Y == rhs.Y;
    }

    bool operator!=(const Vector2D& rhs) const // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        return !(*this == rhs);
    }

    Vector2D operator*(double scalar) const // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        return { static_cast<T>(X * scalar), static_cast<T>(Y * scalar) };
    }

    Vector2D& operator*=(double scalar) // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        X = static_cast<T>(X * scalar);
        Y = static_cast<T>(Y * scalar);
        return *this;
    }

    double operator*(const Vector2D& rhs) const // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        return static_cast<double>(X) * rhs.X + static_cast<double>(Y) * rhs.Y;
    }

    double MagnitudeSquared() const // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        return static_cast<double>(X) * X + static_cast<double>(Y) * Y;
    }

    double Magnitude() const
    {
        return std::sqrt(MagnitudeSquared());
    }

    double DistanceFrom(const Vector2D& rhs) const // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        return (*this - rhs).Magnitude();
    }

    double DistanceFromSquared(const Vector2D& rhs) const // IDA: UNMATCHED — no_callgraph_match, no_git_history
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

    constexpr Vector3D() noexcept = default; // IDA: UNMATCHED — defaulted_special_member, default_ctor, no_callgraph_match
    constexpr Vector3D(T x, T y, T z) noexcept : X(x), Y(y), Z(z) {} // IDA: UNMATCHED — constexpr_no_runtime, no_callgraph_match, no_git_history

    Vector3D operator+(const Vector3D& rhs) const // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        return { static_cast<T>(X + rhs.X), static_cast<T>(Y + rhs.Y), static_cast<T>(Z + rhs.Z) };
    }

    Vector3D& operator+=(const Vector3D& rhs) // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        X += rhs.X;
        Y += rhs.Y;
        Z += rhs.Z;
        return *this;
    }

    Vector3D operator-(const Vector3D& rhs) const // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        return { static_cast<T>(X - rhs.X), static_cast<T>(Y - rhs.Y), static_cast<T>(Z - rhs.Z) };
    }

    Vector3D& operator-=(const Vector3D& rhs) // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        X -= rhs.X;
        Y -= rhs.Y;
        Z -= rhs.Z;
        return *this;
    }

    Vector3D operator-() const // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        return { static_cast<T>(-X), static_cast<T>(-Y), static_cast<T>(-Z) };
    }

    bool operator==(const Vector3D& rhs) const // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        return X == rhs.X && Y == rhs.Y && Z == rhs.Z;
    }

    bool operator!=(const Vector3D& rhs) const // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        return !(*this == rhs);
    }

    Vector3D operator*(double scalar) const // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        return { static_cast<T>(X * scalar), static_cast<T>(Y * scalar), static_cast<T>(Z * scalar) };
    }

    Vector3D& operator*=(double scalar) // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        X = static_cast<T>(X * scalar);
        Y = static_cast<T>(Y * scalar);
        Z = static_cast<T>(Z * scalar);
        return *this;
    }

    double operator*(const Vector3D& rhs) const // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        return static_cast<double>(X) * rhs.X
             + static_cast<double>(Y) * rhs.Y
             + static_cast<double>(Z) * rhs.Z;
    }

    double MagnitudeSquared() const // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        return static_cast<double>(X) * X + static_cast<double>(Y) * Y + static_cast<double>(Z) * Z;
    }

    double Magnitude() const
    {
        return std::sqrt(MagnitudeSquared());
    }

    double DistanceFrom(const Vector3D& rhs) const // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        return (*this - rhs).Magnitude();
    }

    double DistanceFromSquared(const Vector3D& rhs) const // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        return (*this - rhs).MagnitudeSquared();
    }

    bool IsCollinearTo(const Vector3D& rhs) const
    {
        return CrossProduct(rhs).MagnitudeSquared() == 0;
    }

    Vector3D CrossProduct(const Vector3D& rhs) const // IDA: UNMATCHED — no_callgraph_match, no_git_history
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
inline std::ostream& operator<<(std::ostream& os, const Vector2D<T>& v) { // IDA: UNMATCHED — inline_likely_inlined, no_callgraph_match, no_git_history
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

inline std::ostream& operator<<(std::ostream& os, const RectangleStruct& r) { // IDA: UNMATCHED — inline_likely_inlined, no_callgraph_match, no_git_history
    return os << "<RectangleStruct,X=" << std::dec << r.X << ",Y=" << r.Y
              << ",W=" << r.Width << ",H=" << r.Height << ">";
}

struct ColorStruct
{
    std::uint8_t R = 0;
    std::uint8_t G = 0;
    std::uint8_t B = 0;

    constexpr ColorStruct() noexcept = default;  // IDA: 0x4A35A0
    constexpr ColorStruct(std::uint8_t r, std::uint8_t g, std::uint8_t b) noexcept
        : R(r), G(g), B(b) {}   // IDA: 0x4A35A0

    bool operator==(const ColorStruct& rhs) const // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        return R == rhs.R && G == rhs.G && B == rhs.B;
    }

    bool operator!=(const ColorStruct& rhs) const // IDA: UNMATCHED — no_callgraph_match, no_git_history
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
