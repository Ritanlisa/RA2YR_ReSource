#include "system/convert_class.hpp"
#include "render/surface.hpp"
#include "render/palette.hpp"

namespace gamemd
{

DynamicVectorClass<ConvertClass*>& ConvertClass::Array = *reinterpret_cast<DynamicVectorClass<ConvertClass*>*>(nullptr);
DynamicVectorClass<LightConvertClass*>& LightConvertClass::Array = *reinterpret_cast<DynamicVectorClass<LightConvertClass*>*>(nullptr);

ConvertClass::ConvertClass(
    BytePalette const& palette,
    BytePalette const& palette2,
    DSurface* pSurface,
    std::size_t shadeCount,
    bool skipBlitters)
    : BytesPerPixel(0)
    , ShadeCount(shadeCount)
    , PaletteBuffer(nullptr)
    , PaletteMidpoint(nullptr)
    , SecondaryBuffer(nullptr)
    , CurrentZRemap(0)
    , HalfColorMask(0)
    , QuarterColorMask(0)
{
    (void)palette;
    (void)palette2;
    (void)pSurface;
    (void)skipBlitters;

    std::memset(Blitters, 0, sizeof(Blitters));
    std::memset(RLEBlitters, 0, sizeof(RLEBlitters));
    // TODO: build blitter lookup tables from palette
}

ConvertClass* ConvertClass::FindOrAllocate(const char* pFilename)
{
    // Search Array for matching convert by filename
    if (!pFilename) return nullptr;

    // Search existing converts
    for (int i = 0; i < Array.Count; ++i)
    {
        ConvertClass* conv = Array[i];
        if (conv && conv->PaletteBuffer)
        {
            // Match by stored filename/palette identity
            // In the original, this matches by the loaded palette file name
            return conv;
        }
    }

    // Not found: allocate new ConvertClass
    // Original game loads the palette file and constructs a ConvertClass
    ConvertClass* newConv = new ConvertClass(noinit_t());
    if (newConv)
    {
        Array.AddItem(newConv);
    }
    return newConv;
}

void ConvertClass::CreateFromFile(const char* pFilename, BytePalette*& pPalette, ConvertClass*& pDestination)
{
    // Load palette file and create ConvertClass
    if (!pFilename) return;

    // In the original game: loads a .PAL file, creates BytePalette,
    // then constructs ConvertClass from it
    // For now, allocate a basic palette and convert
    pPalette = nullptr;
    pDestination = FindOrAllocate(pFilename);
}

BlitterCore* ConvertClass::SelectPlainBlitter(BlitterFlags flags) const
{
    int idx = static_cast<int>(static_cast<unsigned int>(flags));
    if (idx >= 0 && idx < 50)
        return Blitters[idx];
    return nullptr;
}

RLEBlitterCore* ConvertClass::SelectRLEBlitter(BlitterFlags flags) const
{
    int idx = static_cast<int>(static_cast<unsigned int>(flags));
    if (idx >= 0 && idx < 39)
        return RLEBlitters[idx];
    return nullptr;
}

// --- LightConvertClass ---

LightConvertClass::LightConvertClass(
    BytePalette const& palette1,
    BytePalette const& palette2,
    DSurface* pSurface,
    int color_R,
    int color_G,
    int color_B,
    bool skipBlitters,
    uint8_t* pBuffer,
    std::size_t shadeCount)
    : ConvertClass(palette1, palette2, pSurface, shadeCount, skipBlitters)
    , UsedPalette1(&palette1)
    , UsedPalette2(&palette2)
    , LightConvertClass_field_buffer_190(nullptr)
    , UsageCount(0)
    , Color1(static_cast<uint32_t>(color_R) | (static_cast<uint32_t>(color_G) << 8) | (static_cast<uint32_t>(color_B) << 16))
    , Color2(0)
    , Tinted(false)
{
    (void)color_B;
    (void)pBuffer;
    // TODO: initialize light-specific blitter data
}

} // namespace gamemd
