#pragma once

#include "fundamentals.hpp"
#include "core/vector.hpp"
#include "core/enums.hpp"

namespace gamemd
{
    // X27: member-decl type supply (log-driven hygiene)
class LightConvertClass;
    class CampaignClass;

struct BytePalette;
class DSurface;

struct BlitterCore;
struct RLEBlitterCore;

class ConvertClass
{
public:
    static DynamicVectorClass<ConvertClass*>& Array;
    // IDA 0x48E740 -- ConvertClass::Construct (builds palette+blitter tables)

    static unsigned int * Construct(void *aP0, int aP1, int aP2, int aP3, int aP4, int aP5);  // 0x48E740 G42.35 static-form sync (ui/supplied site 0x5D301C)
    // wrapper: delegates to ConvertClass::Construct at 0x48E740
    static ConvertClass* FindOrCreate(const char* pFilename);
    // unmatched: no callgraph reference and no git history record
    static void CreateFromFile(const char* pFilename, BytePalette*& pPalette, ConvertClass*& pDestination);

    // unmatched: no callgraph reference and no git history record
    BlitterCore* SelectPlainBlitter(BlitterFlags flags) const;
    RLEBlitterCore* SelectRLEBlitter(BlitterFlags flags) const;

    virtual ~ConvertClass();  // 0x491430

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
    unsigned int q0908;  // 0x908 (offset-truth)
    unsigned int q16C;  // 0x16C (canon-mt)
    int q188;  // 0x188 (canon-mt)
    unsigned int q190;  // 0x190 (canon-mt)
    LightConvertClass* q198;  // 0x198 (canon-mt)
    unsigned int q19C;  // 0x19C (canon-mt)
    LightConvertClass* q1A4;  // 0x1A4 (canon-mt)
    unsigned int q1A8;  // 0x1A8 (canon-mt)

    CampaignClass* ConvertClass_field_0x170;  // X10 supply (member_types)
    CampaignClass* ConvertClass_field_0x178;  // X10 supply (member_types)
    unsigned char __pad_004;  // X10 supply (csp_canon_members)
    unsigned char __pad_6[362];  /* char[362] */  // X10 supply (member_lookup)
    unsigned int q0D0;  // X10 supply (member_lookup)
    unsigned int q0D4;  // X10 supply (member_lookup)
    unsigned int q0E0;  // X10 supply (member_lookup)
    unsigned int q0E8;  // X10 supply (member_lookup)
    unsigned int q0F0;  // X10 supply (member_lookup)
    unsigned int q0F8;  // X10 supply (member_lookup)
    unsigned int q168;  // X10 supply (member_lookup)
    int q170;  // X10 supply (member_lookup)
    unsigned char q174[4];  /* char[4] */  // X10 supply (member_lookup)
    int q178;  // X10 supply (member_lookup)
    unsigned int u32_180;  // X10 supply (member_lookup)
    unsigned int u32_184;  // X10 supply (member_lookup)
    void* ptr_0;  // X10 supply (csp_canon_members)

    unsigned int q008;  // X10 supply (member_lookup)
    unsigned int q00C;  // X10 supply (member_lookup)
    unsigned int q010;  // X10 supply (member_lookup)
    unsigned int q014;  // X10 supply (member_lookup)
    unsigned int q018;  // X10 supply (member_lookup)
    unsigned int q01C;  // X10 supply (member_lookup)
    unsigned int q020;  // X10 supply (member_lookup)
    unsigned int q028;  // X10 supply (member_lookup)
    unsigned int q02C;  // X10 supply (member_lookup)
    unsigned int q038;  // X10 supply (member_lookup)
    unsigned int q040;  // X10 supply (member_lookup)
    unsigned int q048;  // X10 supply (member_lookup)
    unsigned int q050;  // X10 supply (member_lookup)
    unsigned int q054;  // X10 supply (member_lookup)
    unsigned int q060;  // X10 supply (member_lookup)
    unsigned int q068;  // X10 supply (member_lookup)
    unsigned int q070;  // X10 supply (member_lookup)
    unsigned int q078;  // X10 supply (member_lookup)
    unsigned int q080;  // X10 supply (member_lookup)
    unsigned int q088;  // X10 supply (member_lookup)
    unsigned int q090;  // X10 supply (member_lookup)
    unsigned int q098;  // X10 supply (member_lookup)
    unsigned int q0A0;  // X10 supply (member_lookup)
    unsigned int q0A8;  // X10 supply (member_lookup)
    unsigned int q0B0;  // X10 supply (member_lookup)
    unsigned int q0B8;  // X10 supply (member_lookup)
    unsigned int q0C0;  // X10 supply (member_lookup)
    unsigned int q0C8;  // X10 supply (member_lookup)
    unsigned int q100;  // X10 supply (member_lookup)
    unsigned int q108;  // X10 supply (member_lookup)
    unsigned int q10C;  // X10 supply (member_lookup)
    unsigned int q110;  // X10 supply (member_lookup)
    unsigned int q114;  // X10 supply (member_lookup)
    unsigned int q118;  // X10 supply (member_lookup)
    unsigned int q11C;  // X10 supply (member_lookup)
    unsigned int q120;  // X10 supply (member_lookup)
    unsigned int q128;  // X10 supply (member_lookup)
    unsigned int q130;  // X10 supply (member_lookup)
    unsigned int q138;  // X10 supply (member_lookup)
    unsigned int q140;  // X10 supply (member_lookup)
    unsigned int q148;  // X10 supply (member_lookup)
    unsigned int q150;  // X10 supply (member_lookup)
    unsigned int q158;  // X10 supply (member_lookup)
    unsigned int q160;  // X10 supply (member_lookup)
};

class LightConvertClass : public ConvertClass
{
public:
    static DynamicVectorClass<LightConvertClass*>& Array;

    // design: virtual function, no binary implementation matched in IDA
    virtual ~LightConvertClass() override;

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
    explicit LightConvertClass(const noinit_t&) noexcept;

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
    unsigned int u32_1A0;  // 0x1A0
    unsigned int u32_1AC;  // 0x1AC
    unsigned int u8_1B0;  // 0x1B0
    unsigned char __pad_190[5];  // 0x190
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int Constructor(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);  // 0x555DA0
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int SelectRLEBlitter(int a1);  // 0x490e50 -- LightConvertClass::SelectRLEBlitter
    // === SYMBOL-ANCHOR (END) ===

    unsigned int q06C;  // X10 supply (member_lookup)
    unsigned int q170;  // X10 supply (member_lookup)
    int q18C;  // X10 supply (member_lookup)
    unsigned int u32_16C;  // X10 supply (member_lookup)
    unsigned int u32_188;  // X10 supply (member_lookup)
    unsigned int u32_194;  // X10 supply (member_lookup)
    unsigned int u32_198;  // X10 supply (member_lookup)
    unsigned int u32_19C;  // X10 supply (member_lookup)
    unsigned int u32_1A4;  // X10 supply (member_lookup)
    unsigned int u32_1A8;  // X10 supply (member_lookup)
};

} // namespace gamemd
