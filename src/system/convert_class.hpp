#pragma once

#include "fundamentals.hpp"
#include "core/vector.hpp"
#include "core/enums.hpp"

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
    // IDA 0x48E740 -- ConvertClass::Construct (builds palette+blitter tables)

    // wrapper: delegates to ConvertClass::Construct at 0x48E740
    static ConvertClass* FindOrCreate(const char* pFilename);
    // unmatched: no callgraph reference and no git history record
    static void CreateFromFile(const char* pFilename, BytePalette*& pPalette, ConvertClass*& pDestination);

    // unmatched: no callgraph reference and no git history record
    BlitterCore* SelectPlainBlitter(BlitterFlags flags) const;
    RLEBlitterCore* SelectRLEBlitter(BlitterFlags flags) const;

    virtual ~ConvertClass() = default;  // 0x491430

    ConvertClass(
        BytePalette const& palette,
        BytePalette const& palette2,
        DSurface* pSurface,
        std::size_t shadeCount,
        bool skipBlitters);

protected:
    // design: no binary equivalent found in IDA
    explicit ConvertClass(const noinit_t&) noexcept;

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
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void* InitTables();  // 0x48EBF0
    void AddRef(int a1, void* a2, int a3, int a4, int a5, int a6, int a7, int a8);  // 0x4913F0
    int Release(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);  // 0x491460
    int Convert(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8);  // 0x491490
    // --- gap2 auto-generated stub declarations (END) ---
};

class LightConvertClass : public ConvertClass
{
public:
    static DynamicVectorClass<LightConvertClass*>& Array;

    // design: virtual function, no binary implementation matched in IDA
    virtual ~LightConvertClass() override = default;

    virtual void UpdateColors(int red, int green, int blue, bool tinted);  // 0x556090

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
    uint8_t* LightConvertClass_field_buffer_190 = nullptr;
    int UsageCount = 0;
    uint32_t Color1 = 0;
    uint32_t Color2 = 0;
    bool Tinted = false;

private:
    uint8_t align_1B1[3] = {};
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int Constructor(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);  // 0x555DA0
    // --- gap2 auto-generated stub declarations (END) ---
};

} // namespace gamemd
