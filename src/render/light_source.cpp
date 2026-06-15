#include "render/light_source.hpp"

#include <cmath>
#include <cstring>

namespace gamemd
{

LightSourceClass::LightSourceClass(const CoordStruct& location,
                                   int intensity,
                                   int visibility,
                                   const TintStruct& tint,
                                   int detail_level) noexcept
{
    LightIntensity  = intensity;
    LightTint       = tint;
    DetailLevel     = detail_level;
    Location        = location;
    LightVisibility = visibility;
    Activated       = false;

    uniqueId      = static_cast<uint32_t>(-1);
    abstractFlags = 0;
    nextArrayIndex     = 0;
    referenceCount      = 0;
    needsSave          = false;

    // TODO: complete implementation
    // - Register with current map's light source list
}

void LightSourceClass::Activate(uint32_t zero)
{
    Activated = true;
    // TODO: complete implementation
    // - Add to active light sources
    // - Notify cells in range to recalculate lighting
}

void LightSourceClass::Deactivate(uint32_t zero)
{
    Activated = false;
    // TODO: complete implementation
    // - Remove from active light sources
    // - Notify cells to recalculate lighting
}

void LightSourceClass::ChangeLevels(int intensity, const TintStruct& tint, int8_t mode)
{
    LightIntensity = intensity;
    LightTint      = tint;
    // TODO: complete implementation
    // - mode determines how to transition levels
    // - Recalculate affected cell lighting
}

} // namespace gamemd
