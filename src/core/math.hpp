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
    constexpr Vector2D(T x, T y) noexcept;

    // unmatched: no callgraph reference and no git history record
    Vector2D operator+(const Vector2D& rhs) const;

    // unmatched: no callgraph reference and no git history record
    Vector2D& operator+=(const Vector2D& rhs);

    // unmatched: no callgraph reference and no git history record
    Vector2D operator-(const Vector2D& rhs) const;

    // unmatched: no callgraph reference and no git history record
    Vector2D& operator-=(const Vector2D& rhs);

    // unmatched: no callgraph reference and no git history record
    Vector2D operator-() const;

    // unmatched: no callgraph reference and no git history record
    bool operator==(const Vector2D& rhs) const;

    // unmatched: no callgraph reference and no git history record
    bool operator!=(const Vector2D& rhs) const;

    // unmatched: no callgraph reference and no git history record
    Vector2D operator*(double scalar) const;

    // unmatched: no callgraph reference and no git history record
    Vector2D& operator*=(double scalar);

    // unmatched: no callgraph reference and no git history record
    double operator*(const Vector2D& rhs) const;

    // unmatched: no callgraph reference and no git history record
    double MagnitudeSquared() const;

    double Magnitude() const;

    // unmatched: no callgraph reference and no git history record
    double DistanceFrom(const Vector2D& rhs) const;

    // unmatched: no callgraph reference and no git history record
    double DistanceFromSquared(const Vector2D& rhs) const;

    bool IsCollinearTo(const Vector2D& rhs) const;
};

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
    constexpr Vector3D(T x, T y, T z) noexcept;

    // unmatched: no callgraph reference and no git history record
    Vector3D operator+(const Vector3D& rhs) const;

    // unmatched: no callgraph reference and no git history record
    Vector3D& operator+=(const Vector3D& rhs);

    // unmatched: no callgraph reference and no git history record
    Vector3D operator-(const Vector3D& rhs) const;

    // unmatched: no callgraph reference and no git history record
    Vector3D& operator-=(const Vector3D& rhs);

    // unmatched: no callgraph reference and no git history record
    Vector3D operator-() const;

    // unmatched: no callgraph reference and no git history record
    bool operator==(const Vector3D& rhs) const;

    // unmatched: no callgraph reference and no git history record
    bool operator!=(const Vector3D& rhs) const;

    // unmatched: no callgraph reference and no git history record
    Vector3D operator*(double scalar) const;

    // unmatched: no callgraph reference and no git history record
    Vector3D& operator*=(double scalar);

    // unmatched: no callgraph reference and no git history record
    double operator*(const Vector3D& rhs) const;

    // unmatched: no callgraph reference and no git history record
    double MagnitudeSquared() const;

    double Magnitude() const;

    // unmatched: no callgraph reference and no git history record
    double DistanceFrom(const Vector3D& rhs) const;

    // unmatched: no callgraph reference and no git history record
    double DistanceFromSquared(const Vector3D& rhs) const;

    bool IsCollinearTo(const Vector3D& rhs) const;

    // unmatched: no callgraph reference and no git history record
    Vector3D CrossProduct(const Vector3D& rhs) const;
};

#if !defined(GAMEMD_E4_UNIVERSE) || defined(GAMEMD_E4_MATH_ALIASES)  // G57w7: e4 TUs carry flat CellStruct/Point2D/CoordStruct (CellStruct_e4.hpp / e4_protos.h); alias TUs set GAMEMD_E4_MATH_ALIASES to take these instead
using CellStruct   = Vector2D<short>;
using Point2D      = Vector2D<int>;
using CoordStruct  = Vector3D<int>;

#endif // G57w7 e4-universe math alias gate
using RGBClass     = Vector3D<std::uint8_t>;

// ostream output for hook DLL comparison logs
template <typename T>
// design: likely inlined by compiler (no standalone symbol), no callgraph/git history reference
std::ostream& operator<<(std::ostream& os, const Vector2D<T>& v);

struct Matrix3D
{
    float Data[12] = {};  // data: 0x840b4c
    unsigned char __pad_0;  // 0x0
    unsigned int q080;  // 0x80
    unsigned int u32_0;   // 0x0 (g57w10 r4: raw RotateZ 0x5af0aa fld [esi] float 元素词表)
    unsigned int u32_8;   // 0x8 (raw fld [esi+8])
    unsigned int u32_10;  // 0x10
    unsigned int u32_18;  // 0x18
    unsigned int u32_28;  // 0x28
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void* Constructor(float a1, float a2);  // 0x5AE6F0
    void RotateZ(float a1);  // 0x5AF080
    // --- gap2 auto-generated stub declarations (END) ---
};

struct RectangleStruct
{
    int X = 0;
    int Y = 0;
    int Width = 0;
    int Height = 0;
};

// design: likely inlined by compiler (no standalone symbol), no callgraph/git history reference
std::ostream& operator<<(std::ostream& os, const RectangleStruct& r);

#ifndef GAMEMD_G2_ColorStruct_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_ColorStruct_DEF 1
struct ColorStruct
{
    std::uint8_t R = 0;
    std::uint8_t G = 0;
    std::uint8_t B = 0;

    constexpr ColorStruct() noexcept = default;  // 0x4A35A0
    ColorStruct(std::uint8_t r, std::uint8_t g, std::uint8_t b) noexcept;   // 0x4A35A0

    // unmatched: no callgraph reference and no git history record
    bool operator==(const ColorStruct& rhs) const;

    // unmatched: no callgraph reference and no git history record
    bool operator!=(const ColorStruct& rhs) const;
};
#endif  // GAMEMD_G2_ColorStruct_DEF

struct TimerStruct
{
    int32_t StartTime = -1;
    int32_t __padding = 0;
    int32_t TimeLeft = 0;

    constexpr TimerStruct() noexcept = default;
    TimerStruct(int duration) noexcept;

    bool IsActive() const;
    void Update();
};

#include "math.inl"

} // namespace gamemd

namespace gamemd::math
{

constexpr double Pi     = 3.14159265358979323846;
constexpr double TwoPi  = 6.28318530717958647692;
constexpr double HalfPi = 1.57079632679489661923;
constexpr double Sqrt2  = 1.41421356237309504880;

double Deg2Rad(double deg) noexcept;

double Rad2Deg(double rad) noexcept;

} // namespace gamemd::math
