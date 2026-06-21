#include "render/palette.hpp"

#include <cstring>
#include <cmath>
#include <cstdio>

namespace gamemd
{

// ============================================================================
// RGB <-> HSV conversion utilities
// ============================================================================

void RGBToHSV(const RGBColor& rgb, HSVClass& hsv)
{
    // Normalize to 0.0-1.0
    float r = rgb.R / 255.0f;
    float g = rgb.G / 255.0f;
    float b = rgb.B / 255.0f;

    float max_val = r;
    if (g > max_val) max_val = g;
    if (b > max_val) max_val = b;

    float min_val = r;
    if (g < min_val) min_val = g;
    if (b < min_val) min_val = b;

    float delta = max_val - min_val;

    // Value
    hsv.Value = (int32_t)(max_val * 100.0f);

    // Saturation
    if (max_val > 0.0f)
        hsv.Saturation = (int32_t)((delta / max_val) * 100.0f);
    else
        hsv.Saturation = 0;

    // Hue
    if (delta == 0.0f)
    {
        hsv.Hue = 0;
    }
    else
    {
        float hue = 0.0f;
        if (max_val == r)
            hue = 60.0f * fmodf((g - b) / delta, 6.0f);
        else if (max_val == g)
            hue = 60.0f * ((b - r) / delta + 2.0f);
        else
            hue = 60.0f * ((r - g) / delta + 4.0f);

        if (hue < 0.0f) hue += 360.0f;
        hsv.Hue = (int32_t)(hue);
    }
}

void HSVToRGB(const HSVClass& hsv, RGBColor& rgb)
{
    float h = (float)(hsv.Hue);
    float s = hsv.Saturation / 100.0f;
    float v = hsv.Value / 100.0f;

    if (s == 0.0f)
    {
        uint8_t c = (uint8_t)(v * 255.0f);
        rgb.R = c;
        rgb.G = c;
        rgb.B = c;
        return;
    }

    float hh = h / 60.0f;
    int i = (int)(hh);
    float f = hh - i;
    float p = v * (1.0f - s);
    float q = v * (1.0f - s * f);
    float t = v * (1.0f - s * (1.0f - f));

    float r, g, b;
    switch (i % 6)
    {
        case 0: r = v; g = t; b = p; break;
        case 1: r = q; g = v; b = p; break;
        case 2: r = p; g = v; b = t; break;
        case 3: r = p; g = q; b = v; break;
        case 4: r = t; g = p; b = v; break;
        case 5: r = v; g = p; b = q; break;
        default: r = 0; g = 0; b = 0; break;
    }

    rgb.R = (uint8_t)(r * 255.0f);
    rgb.G = (uint8_t)(g * 255.0f);
    rgb.B = (uint8_t)(b * 255.0f);
}

// ============================================================================
// TintStruct: Apply tint to an RGB color
// ============================================================================

void ApplyTint(const TintStruct& tint, RGBColor& color)
{
    int r = (int)(color.R) + tint.Red;
    int g = (int)(color.G) + tint.Green;
    int b = (int)(color.B) + tint.Blue;

    color.R = (uint8_t)(r < 0 ? 0 : (r > 255 ? 255 : r));
    color.G = (uint8_t)(g < 0 ? 0 : (g > 255 ? 255 : g));
    color.B = (uint8_t)(b < 0 ? 0 : (b > 255 ? 255 : b));
}

// ============================================================================
// Nearest-color lookup in palette
// ============================================================================

uint8_t FindClosestColor(const uint8_t* palette, int num_entries, const RGBColor& target)
{
    if (!palette || num_entries <= 0) return 0;

    uint8_t best_index = 0;
    int best_dist = 2147483647;

    for (int i = 0; i < num_entries; ++i)
    {
        int r = (int)(palette[i * 4 + 0]);
        int g = (int)(palette[i * 4 + 1]);
        int b = (int)(palette[i * 4 + 2]);

        int dr = r - (int)(target.R);
        int dg = g - (int)(target.G);
        int db = b - (int)(target.B);

        int dist = dr * dr + dg * dg + db * db;
        if (dist < best_dist)
        {
            best_dist = dist;
            best_index = (uint8_t)(i);
            if (dist == 0) break;
        }
    }

    return best_index;
}

// ============================================================================
// BytePalette: load/save .pal files and conversion utilities
// ============================================================================

bool LoadPaletteFromFile(const char* filename, uint8_t* out_palette, int max_entries)
{
    if (!filename || !out_palette) return false;

    FILE* fp = fopen(filename, "rb");
    if (!fp) return false;

    // Standard .pal format: 768 bytes (256 * 3 RGB)
    uint8_t raw[768];
    size_t read_count = fread(raw, 1, sizeof(raw), fp);
    fclose(fp);

    if (read_count < sizeof(raw))
    {
        std::memset(out_palette, 0, max_entries * 4);
        return false;
    }

    int entries = max_entries < 256 ? max_entries : 256;
    for (int i = 0; i < entries; ++i)
    {
        out_palette[i * 4 + 0] = raw[i * 3 + 0];
        out_palette[i * 4 + 1] = raw[i * 3 + 1];
        out_palette[i * 4 + 2] = raw[i * 3 + 2];
        out_palette[i * 4 + 3] = 0;
    }

    return true;
}

bool SavePaletteToFile(const char* filename, const uint8_t* palette, int num_entries)
{
    if (!filename || !palette) return false;

    FILE* fp = fopen(filename, "wb");
    if (!fp) return false;

    int entries = num_entries < 256 ? num_entries : 256;
    for (int i = 0; i < entries; ++i)
    {
        uint8_t rgb[3] = {
            palette[i * 4 + 0],
            palette[i * 4 + 1],
            palette[i * 4 + 2]
        };
        fwrite(rgb, 1, 3, fp);
    }

    fclose(fp);
    return true;
}

void PaletteToRGBA(const uint8_t* in_palette, int num_entries, uint8_t* out_rgba)
{
    if (!in_palette || !out_rgba) return;
    for (int i = 0; i < num_entries; ++i)
    {
        out_rgba[i * 4 + 0] = in_palette[i * 3 + 0];
        out_rgba[i * 4 + 1] = in_palette[i * 3 + 1];
        out_rgba[i * 4 + 2] = in_palette[i * 3 + 2];
        out_rgba[i * 4 + 3] = 255;
    }
}

void PaletteToRGB(const uint8_t* in_palette, int num_entries, uint8_t* out_rgb)
{
    if (!in_palette || !out_rgb) return;
    std::memcpy(out_rgb, in_palette, num_entries * 3);
}

// ============================================================================
// Gamma adjustment
// ============================================================================

void ApplyGamma(const uint8_t* in_palette, uint8_t* out_palette, int num_entries, float gamma)
{
    if (!in_palette || !out_palette) return;

    for (int i = 0; i < num_entries; ++i)
    {
        for (int c = 0; c < 3; ++c)
        {
            float val = in_palette[i * 4 + c] / 255.0f;
            float adjusted = powf(val, 1.0f / gamma);
            out_palette[i * 4 + c] = (uint8_t)(adjusted * 255.0f);
        }
        out_palette[i * 4 + 3] = in_palette[i * 4 + 3];
    }
}

} // namespace gamemd
