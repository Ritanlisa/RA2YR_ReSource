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

    // Initialize AbstractClass base fields
    uniqueId      = (uint32_t)(-1);
    abstractFlags = 0;
    nextArrayIndex     = 0;
    referenceCount      = 0;
    NeedsSaveOrLink    = nullptr;
}

void LightSourceClass::Activate(uint32_t zero)
{
    (void)zero;
    if (Activated) return;

    Activated = true;

    // Light intensity determines cell illumination radius
    // Each cell within radius gets the light contribution added
    int radius = LightIntensity / 256;
    if (radius < 1) radius = 1;
    if (radius > 10) radius = 10;

    // Activate cells in range - when integrated with map system,
    // this would call MapClass::IlluminateCells(Location, radius, LightTint)
}

void LightSourceClass::Deactivate(uint32_t zero)
{
    (void)zero;
    if (!Activated) return;

    Activated = false;

    // Remove light contribution from cells
    // When integrated with map system:
    // MapClass::DeIlluminateCells(Location, radius, LightTint)
}

void LightSourceClass::ChangeLevels(int intensity, const TintStruct& tint, int8_t mode)
{
    // Save old values for transition
    int32_t old_intensity = LightIntensity;
    TintStruct old_tint = LightTint;

    switch (mode)
    {
        case 0: // Instant
            LightIntensity = intensity;
            LightTint = tint;
            break;

        case 1: // Smooth transition - interpolate
        {
            float step = 0.1f;
            int steps = (int)(1.0f / step) + 1;
            for (int i = 1; i <= steps; ++i)
            {
                float t = (float)(i) * step;
                if (t > 1.0f) t = 1.0f;

                LightIntensity = old_intensity + (int32_t)((intensity - old_intensity) * t);
                LightTint.Red   = old_tint.Red   + (int32_t)((tint.Red   - old_tint.Red)   * t);
                LightTint.Green = old_tint.Green + (int32_t)((tint.Green - old_tint.Green) * t);
                LightTint.Blue  = old_tint.Blue  + (int32_t)((tint.Blue  - old_tint.Blue)  * t);
            }
            break;
        }

        case 2: // Fade to new levels with slower transition
            LightIntensity = old_intensity + (intensity - old_intensity) / 2;
            LightTint.Red   = old_tint.Red   + (tint.Red   - old_tint.Red)   / 2;
            LightTint.Green = old_tint.Green + (tint.Green - old_tint.Green) / 2;
            LightTint.Blue  = old_tint.Blue  + (tint.Blue  - old_tint.Blue)  / 2;
            break;

        default:
            LightIntensity = intensity;
            LightTint = tint;
            break;
    }
}

} // namespace gamemd

#include "render/light_source.hpp"

namespace gamemd {

// --- LightSourceClass ---

HRESULT __stdcall LightSourceClass::GetClassID(CLSID* class_id) { return E_NOTIMPL; }
HRESULT __stdcall LightSourceClass::Load(IStream* stream) { return S_OK; }
HRESULT __stdcall LightSourceClass::Save(IStream* stream, int clear_dirty) { return S_OK; }
AbstractType __stdcall LightSourceClass::whatAmI() const { return AbstractType::LightSource; }
int LightSourceClass::objectSize() const { return sizeof(*this); }
 LightSourceClass::LightSourceClass(noinit_t) noexcept {}

} // namespace gamemd
