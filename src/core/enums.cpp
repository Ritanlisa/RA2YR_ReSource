#include "enums.hpp"

namespace gamemd
{

// AbstractFlags
constexpr AbstractFlags operator|(AbstractFlags a, AbstractFlags b) noexcept
{
    return static_cast<AbstractFlags>(
        static_cast<unsigned>(a) | static_cast<unsigned>(b));
}

constexpr AbstractFlags operator&(AbstractFlags a, AbstractFlags b) noexcept
{
    return static_cast<AbstractFlags>(
        static_cast<unsigned>(a) & static_cast<unsigned>(b));
}

constexpr AbstractFlags operator~(AbstractFlags a) noexcept
{
    return static_cast<AbstractFlags>(~static_cast<unsigned>(a));
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
    return static_cast<SpotlightFlags>(
        static_cast<unsigned>(a) | static_cast<unsigned>(b));
}

constexpr SpotlightFlags operator&(SpotlightFlags a, SpotlightFlags b) noexcept
{
    return static_cast<SpotlightFlags>(
        static_cast<unsigned>(a) & static_cast<unsigned>(b));
}

constexpr SpotlightFlags operator~(SpotlightFlags a) noexcept
{
    return static_cast<SpotlightFlags>(~static_cast<unsigned>(a));
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
    return static_cast<SoundType>(
        static_cast<unsigned>(a) | static_cast<unsigned>(b));
}

constexpr SoundType operator&(SoundType a, SoundType b) noexcept
{
    return static_cast<SoundType>(
        static_cast<unsigned>(a) & static_cast<unsigned>(b));
}

constexpr SoundType operator~(SoundType a) noexcept
{
    return static_cast<SoundType>(~static_cast<unsigned>(a));
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
    return static_cast<SoundControl>(
        static_cast<unsigned>(a) | static_cast<unsigned>(b));
}

constexpr SoundControl operator&(SoundControl a, SoundControl b) noexcept
{
    return static_cast<SoundControl>(
        static_cast<unsigned>(a) & static_cast<unsigned>(b));
}

constexpr SoundControl operator~(SoundControl a) noexcept
{
    return static_cast<SoundControl>(~static_cast<unsigned>(a));
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
    return static_cast<TargetFlags>(
        static_cast<unsigned>(a) | static_cast<unsigned>(b));
}

constexpr TargetFlags operator&(TargetFlags a, TargetFlags b) noexcept
{
    return static_cast<TargetFlags>(
        static_cast<unsigned>(a) & static_cast<unsigned>(b));
}

constexpr TargetFlags operator~(TargetFlags a) noexcept
{
    return static_cast<TargetFlags>(~static_cast<unsigned>(a));
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
    return static_cast<BlitterFlags>(
        static_cast<unsigned>(a) | static_cast<unsigned>(b));
}

constexpr BlitterFlags operator&(BlitterFlags a, BlitterFlags b) noexcept
{
    return static_cast<BlitterFlags>(
        static_cast<unsigned>(a) & static_cast<unsigned>(b));
}

constexpr BlitterFlags operator~(BlitterFlags a) noexcept
{
    return static_cast<BlitterFlags>(~static_cast<unsigned>(a));
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
    return static_cast<MouseEvent>(
        static_cast<unsigned char>(a) | static_cast<unsigned char>(b));
}

constexpr MouseEvent operator&(MouseEvent a, MouseEvent b) noexcept
{
    return static_cast<MouseEvent>(
        static_cast<unsigned char>(a) & static_cast<unsigned char>(b));
}

constexpr MouseEvent operator~(MouseEvent a) noexcept
{
    return static_cast<MouseEvent>(~static_cast<unsigned char>(a));
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
