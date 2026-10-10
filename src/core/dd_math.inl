// dd_math.inl — double-double arithmetic helpers (≈106-bit precision)
//
// Included from core/math.cpp only. Static internal-linkage helpers used by
// Math::LogChop. Operation order follows the reference implementation in
// ra2-reverse-AI code/rewrite/rmg/dd_log.h exactly (dd arithmetic is
// order-sensitive at the last ulp).
//
// A dd value is std::pair<double,double> {hi, lo} with |lo| <= ulp(hi)/2.
// All primitives require round-to-nearest (the caller switches modes).

#include <utility>

namespace gamemd::Math::dd {

using Dd = std::pair<double, double>;  // {hi, lo}

// Requires |a| >= |b|.
static Dd QuickTwoSum(double a, double b)
{
    const double s = a + b;
    return Dd(s, b - (s - a));
}

static Dd TwoSum(double a, double b)
{
    const double s = a + b;
    const double bb = s - a;
    return Dd(s, (a - (s - bb)) + (b - bb));
}

static Dd TwoProd(double a, double b)
{
    const double kSplitter = 134217729.0;  // 2^27 + 1
    const double p = a * b;
    const double ta = kSplitter * a;
    const double ahi = ta - (ta - a);
    const double alo = a - ahi;
    const double tb = kSplitter * b;
    const double bhi = tb - (tb - b);
    const double blo = b - bhi;
    const double err = ((ahi * bhi - p) + ahi * blo + alo * bhi) + alo * blo;
    return Dd(p, err);
}

static Dd Add(Dd a, Dd b)
{
    Dd s = TwoSum(a.first, b.first);
    const Dd t = TwoSum(a.second, b.second);
    s.second += t.first;
    s = QuickTwoSum(s.first, s.second);
    s.second += t.second;
    return QuickTwoSum(s.first, s.second);
}

static Dd Mul(Dd a, Dd b)
{
    Dd p = TwoProd(a.first, b.first);
    p.second += a.first * b.second + a.second * b.first;
    return QuickTwoSum(p.first, p.second);
}

static Dd Div(Dd a, Dd b)
{
    const double q1 = a.first / b.first;
    Dd r = Add(a, Mul(Dd(-q1, 0.0), b));
    const double q2 = r.first / b.first;
    r = Add(r, Mul(Dd(-q2, 0.0), b));
    const double q3 = r.first / b.first;
    return Add(QuickTwoSum(q1, q2), Dd(q3, 0.0));
}

} // namespace gamemd::Math::dd
