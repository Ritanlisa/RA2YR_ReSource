#include "enums.hpp"

namespace gamemd
{

// AbstractFlags
constexpr AbstractFlags operator|(AbstractFlags a, AbstractFlags b) noexcept
{
    return (AbstractFlags)(
        (unsigned)(a) | (unsigned)(b));
}

constexpr AbstractFlags operator&(AbstractFlags a, AbstractFlags b) noexcept
{
    return (AbstractFlags)(
        (unsigned)(a) & (unsigned)(b));
}

constexpr AbstractFlags operator~(AbstractFlags a) noexcept
{
    return (AbstractFlags)(~(unsigned)(a));
}

constexpr AbstractFlags& operator|=(AbstractFlags& a, AbstractFlags b) noexcept
{
    a = a | b;
    return a;
}

constexpr AbstractFlags& operator&=(AbstractFlags& a, AbstractFlags b) noexcept
{
    a = a & b;
    return a;
}

// SpotlightFlags
constexpr SpotlightFlags operator|(SpotlightFlags a, SpotlightFlags b) noexcept
{
    return (SpotlightFlags)(
        (unsigned)(a) | (unsigned)(b));
}

constexpr SpotlightFlags operator&(SpotlightFlags a, SpotlightFlags b) noexcept
{
    return (SpotlightFlags)(
        (unsigned)(a) & (unsigned)(b));
}

constexpr SpotlightFlags operator~(SpotlightFlags a) noexcept
{
    return (SpotlightFlags)(~(unsigned)(a));
}

constexpr SpotlightFlags& operator|=(SpotlightFlags& a, SpotlightFlags b) noexcept
{
    a = a | b;
    return a;
}

constexpr SpotlightFlags& operator&=(SpotlightFlags& a, SpotlightFlags b) noexcept
{
    a = a & b;
    return a;
}

// SoundType
constexpr SoundType operator|(SoundType a, SoundType b) noexcept
{
    return (SoundType)(
        (unsigned)(a) | (unsigned)(b));
}

constexpr SoundType operator&(SoundType a, SoundType b) noexcept
{
    return (SoundType)(
        (unsigned)(a) & (unsigned)(b));
}

constexpr SoundType operator~(SoundType a) noexcept
{
    return (SoundType)(~(unsigned)(a));
}

constexpr SoundType& operator|=(SoundType& a, SoundType b) noexcept
{
    a = a | b;
    return a;
}

constexpr SoundType& operator&=(SoundType& a, SoundType b) noexcept
{
    a = a & b;
    return a;
}

// SoundControl
constexpr SoundControl operator|(SoundControl a, SoundControl b) noexcept
{
    return (SoundControl)(
        (unsigned)(a) | (unsigned)(b));
}

constexpr SoundControl operator&(SoundControl a, SoundControl b) noexcept
{
    return (SoundControl)(
        (unsigned)(a) & (unsigned)(b));
}

constexpr SoundControl operator~(SoundControl a) noexcept
{
    return (SoundControl)(~(unsigned)(a));
}

constexpr SoundControl& operator|=(SoundControl& a, SoundControl b) noexcept
{
    a = a | b;
    return a;
}

constexpr SoundControl& operator&=(SoundControl& a, SoundControl b) noexcept
{
    a = a & b;
    return a;
}

// TargetFlags
constexpr TargetFlags operator|(TargetFlags a, TargetFlags b) noexcept
{
    return (TargetFlags)(
        (unsigned)(a) | (unsigned)(b));
}

constexpr TargetFlags operator&(TargetFlags a, TargetFlags b) noexcept
{
    return (TargetFlags)(
        (unsigned)(a) & (unsigned)(b));
}

constexpr TargetFlags operator~(TargetFlags a) noexcept
{
    return (TargetFlags)(~(unsigned)(a));
}

constexpr TargetFlags& operator|=(TargetFlags& a, TargetFlags b) noexcept
{
    a = a | b;
    return a;
}

constexpr TargetFlags& operator&=(TargetFlags& a, TargetFlags b) noexcept
{
    a = a & b;
    return a;
}

// BlitterFlags
constexpr BlitterFlags operator|(BlitterFlags a, BlitterFlags b) noexcept
{
    return (BlitterFlags)(
        (unsigned)(a) | (unsigned)(b));
}

constexpr BlitterFlags operator&(BlitterFlags a, BlitterFlags b) noexcept
{
    return (BlitterFlags)(
        (unsigned)(a) & (unsigned)(b));
}

constexpr BlitterFlags operator~(BlitterFlags a) noexcept
{
    return (BlitterFlags)(~(unsigned)(a));
}

constexpr BlitterFlags& operator|=(BlitterFlags& a, BlitterFlags b) noexcept
{
    a = a | b;
    return a;
}

constexpr BlitterFlags& operator&=(BlitterFlags& a, BlitterFlags b) noexcept
{
    a = a & b;
    return a;
}

// MouseEvent
constexpr MouseEvent operator|(MouseEvent a, MouseEvent b) noexcept
{
    return (MouseEvent)(
        (unsigned char)(a) | (unsigned char)(b));
}

constexpr MouseEvent operator&(MouseEvent a, MouseEvent b) noexcept
{
    return (MouseEvent)(
        (unsigned char)(a) & (unsigned char)(b));
}

constexpr MouseEvent operator~(MouseEvent a) noexcept
{
    return (MouseEvent)(~(unsigned char)(a));
}

constexpr MouseEvent& operator|=(MouseEvent& a, MouseEvent b) noexcept
{
    a = a | b;
    return a;
}

constexpr MouseEvent& operator&=(MouseEvent& a, MouseEvent b) noexcept
{
    a = a & b;
    return a;
}

} // namespace gamemd
