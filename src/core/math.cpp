#include "math.hpp"
#include "core/reverse_marker.hpp"

#include <cstdint>
#include <cstring>
#include <cfenv>
#include <cmath>

#include "dd_math.inl"

namespace gamemd
{

// ── ColorStruct ────────────────────────────────────────────────────────────

bool ColorStruct::operator==(const ColorStruct& rhs) const
{
    return R == rhs.R && G == rhs.G && B == rhs.B;
}

bool ColorStruct::operator!=(const ColorStruct& rhs) const
{
    return !(*this == rhs);
}

// ── TimerStruct ────────────────────────────────────────────────────────────

bool TimerStruct::IsActive() const { return TimeLeft > 0; }

void TimerStruct::Update() { if (TimeLeft > 0) --TimeLeft; }

// ── ostream operators ──────────────────────────────────────────────────────

// design: likely inlined by compiler (no standalone symbol), no callgraph/git history reference
std::ostream& operator<<(std::ostream& os, const RectangleStruct& r)
{
    return os << "<RectangleStruct,X=" << std::dec << r.X << ",Y=" << r.Y
              << ",W=" << r.Width << ",H=" << r.Height << ">";
}

} // namespace gamemd

namespace gamemd::math
{

double Deg2Rad(double deg) noexcept
{
    return deg * Pi / 180.0;
}

double Rad2Deg(double rad) noexcept
{
    return rad * 180.0 / Pi;
}

} // namespace gamemd::math

namespace gamemd::Math
{

// Lookup tables extracted verbatim from the original binary (.rdata).
// These are mathematical constant tables, not game data.

// FastSqrt lookup table (gamemd.exe 0x8650BC, 16384 dwords).
// Entry i = isqrt(m >= 2^23 ? 2m*2^23 : (2^23+m)*2^23) - 2^23  with m = i*1024,
// i.e. the result mantissa of the square root of the input's mantissa range.
static const uint32_t fast_sqrt_table[16384] = {
#include "sqrt_table.inl"
};

// ArcTan lookup table (gamemd.exe 0x8610B4, 4097 float bit patterns).
// entry[i] = (float)atan(x) with x accumulated by repeated chopped float
// addition of the step — generated under the same RC=chop environment the
// original runs in, which is why the tail deviates from i*step by ~13 float ulp.
static const uint32_t atan_table_bits[4097] = {
#include "atan_table.inl"
};

// 0x8650B8: index step as a float bit pattern (0.024413354694843292f).
// The original divides by it with fdiv dword — no decimal literal here so no
// parsing-rounding ambiguity.
static const uint32_t atan_step_bits = 0x3CC7FE84u;
// 0x7E897C: float pi/2 returned when the index runs off the table.
static const uint32_t atan_half_pi_bits = 0x3FC90FDBu;

// IDA: 0x4CAC40 -- Math::Sqrt (cdecl: double on the stack; result in st(0))
// Table-lookup square root: halve the exponent, look up the mantissa's root.
// ~14 bits of precision — the original's deliberate speed/accuracy trade.
REVERSE(0x4cac40, "Math::Sqrt: table-lookup sqrt (16384-entry, ~14-bit)", "None")
double Sqrt(double x)
{
    // 0x4CAC44: fcom 0.0f — zero returns zero
    if (x == 0.0)
        return 0.0;
    // 0x4CAC67: fmul -1.0 — negatives taken by absolute value (as double)
    if (x < 0.0)
        x = x * -1.0;

    // 0x4CAC6D: fstp dword — narrow double->float under the process-global
    // RC=chop (the original sets _control87(_RC_CHOP) at startup)
    float f = (float)x;
    uint32_t bits;
    memcpy(&bits, &f, sizeof(bits));  // fstp dword [esp] / mov eax,[esp]

    uint32_t mantissa = bits & 0x7FFFFF;
    // 0x4CAC7D: shr 23 / sub 0x7F — 16-bit arithmetic (ax)
    int16_t exponent = (int16_t)((bits >> 23) - 0x7F);
    if (exponent & 1)
        mantissa |= 0x800000;

    // 0x4CAC8B: sar ax,1 — halve the exponent in 16-bit arithmetic
    int16_t half = (int16_t)(exponent >> 1);
    uint32_t out = fast_sqrt_table[mantissa >> 10]
                 + ((uint32_t)(half + 0x7F) << 23);

    float result;
    memcpy(&result, &out, sizeof(result));
    return result;  // fld dword — widened to double, exact
}

// IDA: 0x4CADE0 -- Math::ArcTan (cdecl)
// Table-lookup atan: index = trunc(x / step) into a 4097-entry table.
// |x| past the table returns float pi/2 — a visible 0.01-rad discontinuity
// (table[4096] = 1.5607948, the fallback = 1.5707964).
REVERSE(0x4cade0, "Math::ArcTan: table-lookup atan (4097-entry, quantized)", "None")
double ArcTan(double x)
{
    // 0x4CADE4: fst dword [esp+4] — narrowed copy used ONLY for the sign test;
    // the index is computed from the un-narrowed double
    float narrowed = (float)x;

    float step;
    memcpy(&step, &atan_step_bits, sizeof(step));
    // 0x4CADE8: fdiv dword / 0x4CADEE: _ftol (fistp qword under RC=chop)
    double scaled = x / (double)step;
    int32_t raw;
    if (!(scaled > -9.2233720368547758e18 && scaled < 9.2233720368547758e18))
        raw = 0;  // fistp overflow stores the integer-indefinite value; low 32 bits are 0
    else
        raw = (int32_t)(uint32_t)(uint64_t)(int64_t)scaled;  // truncation toward zero

    // 0x4CADF3: cdq / xor eax,edx / sub eax,edx — integer abs (wraps on INT32_MIN)
    uint32_t k = (raw < 0) ? (0u - (uint32_t)raw) : (uint32_t)raw;

    // 0x4CADF8: cmp eax,0x1001 / jge — signed; k < 2^31 always, so same as unsigned
    uint32_t rbits;
    if ((int32_t)k >= 4097)
        rbits = atan_half_pi_bits;
    else
        rbits = atan_table_bits[k];
    float r;
    memcpy(&r, &rbits, sizeof(r));

    // 0x4CAE0E-0x4CAE1F: compare the NARROWED float against 0.0f; fchs only if x<0
    return (narrowed < 0.0f) ? -(double)r : (double)r;
}

// design: models the inline x87 `fyl2x` at 0x598126 (in Random::Gaussian).
// Semantics: exact ln(s) truncated toward zero to double. Double-double
// atanh series under round-to-nearest, then a manual chop toward zero.
// Verified bit-identical to an arbitrary-precision model on 20000/20000
// samples (ra2-reverse-AI build/scratch/dd_probe.cpp).
double LogChop(double s)
{
    // TwoSum/Dekker splitting require round-to-nearest; the process runs
    // chop-toward-zero (as the original does), so switch for the computation.
    const int saved_round = std::fegetround();
    std::fesetround(FE_TONEAREST);

    // ln(s) = e*ln2 + ln(m) with s = m * 2^e, m reduced to [1/sqrt(2), sqrt(2))
    int e = 0;
    double m = std::frexp(s, &e);  // m in [0.5, 1)
    if (m < 0.70710678118654752440)
    {
        m *= 2.0;
        e -= 1;
    }

    // z = (m-1)/(m+1);  ln(m) = 2*atanh(z) = 2*(z + z^3/3 + z^5/5 + ...)
    // |z| <= 0.1716, so 22 terms reach 2^-107. The coefficients 1/(2k+1) are
    // not exact doubles, so the division is done in double-double too.
    const dd::Dd z  = dd::Div(dd::Dd(m - 1.0, 0.0), dd::TwoSum(m, 1.0));
    const dd::Dd z2 = dd::Mul(z, z);

    dd::Dd acc(0.0, 0.0);
    for (int k = 22; k >= 0; --k)
        acc = dd::Add(dd::Mul(acc, z2), dd::Div(dd::Dd(1.0, 0.0), dd::Dd((double)(2 * k + 1), 0.0)));

    const dd::Dd kLn2(6.9314718055994530942e-01, 2.3190468138462996e-17);
    const dd::Dd l = dd::Add(dd::Mul(dd::Dd((double)e, 0.0), kLn2),
                             dd::Mul(dd::Dd(2.0, 0.0), dd::Mul(z, acc)));

    std::fesetround(saved_round);

    // Manual chop toward zero: if lo has the opposite sign of hi, the exact
    // value (hi+lo) is nearer to zero than hi, so hi sits one ulp too far out.
    if (l.second != 0.0 && (l.first < 0.0) != (l.second < 0.0))
        return std::nextafter(l.first, 0.0);
    return l.first;
}

} // namespace gamemd::Math
