#pragma once

#include "..\fundamentals.hpp"
#include "..\core\vector.hpp"

namespace gamemd
{

struct BytePalette;
class DSurface;

struct BlitterCore;
struct RLEBlitterCore;

class ConvertClass
{
public:
    static DynamicVectorClass<ConvertClass*>& Array;

    static ConvertClass* FindOrAllocate(const char* pFilename);
    static void CreateFromFile(const char* pFilename, BytePalette*& pPalette, ConvertClass*& pDestination);

    BlitterCore* SelectPlainBlitter(BlitterFlags flags) const;
    RLEBlitterCore* SelectRLEBlitter(BlitterFlags flags) const;

    virtual ~ConvertClass() = default;

    ConvertClass(
        BytePalette const& palette,
        BytePalette const& palette2,
        DSurface* pSurface,
        std::size_t shadeCount,
        bool skipBlitters);

protected:
    explicit ConvertClass(const noinit_t&) noexcept {}

public:
    int BytesPerPixel = 0;
    BlitterCore* Blitters[50] = {};
    RLEBlitterCore* RLEBlitters[39] = {};
    std::size_t ShadeCount = 0;
    void* PaletteBuffer = nullptr;
    void* PaletteMidpoint = nullptr;
    void* SecondaryBuffer = nullptr;
    uint32_t CurrentZRemap = 0;
    uint32_t HalfColorMask = 0;
    uint32_t QuarterColorMask = 0;
};

class LightConvertClass : public ConvertClass
{
public:
    static DynamicVectorClass<LightConvertClass*>& Array;

    virtual ~LightConvertClass() override = default;

    virtual void UpdateColors(int red, int green, int blue, bool tinted) {}

    LightConvertClass(
        BytePalette const& palette1,
        BytePalette const& palette2,
        DSurface* pSurface,
        int color_R,
        int color_G,
        int color_B,
        bool skipBlitters,
        uint8_t* pBuffer,
        std::size_t shadeCount);

protected:
    explicit LightConvertClass(const noinit_t&) noexcept : ConvertClass(noinit_t()) {}

public:
    BytePalette const* UsedPalette1 = nullptr;
    BytePalette const* UsedPalette2 = nullptr;
    uint8_t* unknown_buffer_190 = nullptr;
    int UsageCount = 0;
    uint32_t Color1 = 0;
    uint32_t Color2 = 0;
    bool Tinted = false;

private:
    uint8_t align_1B1[3] = {};
};

} // namespace gamemd
