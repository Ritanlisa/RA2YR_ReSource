#include "entity/wave.hpp"
#include "core/vector.hpp"

#include <cstring>

namespace gamemd
{
namespace {

constexpr uint32_t kWaveFlag = 0x2Bu;

} // anonymous namespace

WaveClass::WaveClass(TechnoClass* pTarget, WaveType waveType,
                     const Point2D& coords, uint32_t intensity) noexcept
{
    Target        = pTarget;
    Type           = waveType;
    someCoords     = coords;

    WaveClass_field_BC      = 0;
    WaveClass_field_C0      = 0;
    WaveClass_field_C4      = 0;
    WaveClass_field_C8      = 0;
    WaveClass_field_CC      = 0;
    WaveClass_field_D0      = 0;
    WaveClass_field_D4      = 0;
    WaveClass_field_D8      = 0;
    WaveClass_field_DC      = 0;
    WaveClass_field_E0      = 0;
    WaveClass_field_E4      = 0;
    WaveClass_field_E8      = 0;
    WaveClass_field_EC      = 0;
    WaveClass_field_F0      = 0;
    WaveClass_field_F4      = 0;
    WaveClass_field_F8      = 0;
    WaveClass_field_FC      = 0;
    WaveClass_field_100     = 0;
    WaveClass_field_104     = 0;
    WaveClass_field_108     = 0;
    WaveClass_field_10C     = 0;
    WaveClass_field_110     = 0;
    WaveClass_field_114     = 0;
    WaveClass_field_118     = 0;
    WaveClass_field_11C     = 0;
    WaveClass_field_120     = 0;
    WaveClass_field_124     = 0;
    WaveClass_field_128     = 0;

    WaveClass_field_12C = 0;
    WaveClass_field_12D = 0;
    WaveClass_field_12E = 0;
    WaveClass_field_12F = 0;

    WaveIntensity = intensity;
    LaserIntensity = 0;
    Owner          = nullptr;

    std::memset(&Facing, 0, sizeof(Facing));
    std::memset(WaveClass_field_208, 0, sizeof(WaveClass_field_208));

    WaveClass_field_134 = 0;
    WaveClass_field_138 = 0;
    WaveClass_field_13C = 0;
    WaveClass_field_140 = 0;
    WaveClass_field_144 = 0;
    WaveClass_field_148 = 0;
    WaveClass_field_14C = 0;
    WaveClass_field_150 = 0;
    WaveClass_field_154 = 0;
    WaveClass_field_158 = 0;
    WaveClass_field_15C = 0;
    WaveClass_field_160 = 0;
    WaveClass_field_164 = 0;
    WaveClass_field_168 = 0;
    WaveClass_field_16C = 0;
    WaveClass_field_170 = 0;
    WaveClass_field_174 = 0;
    WaveClass_field_178 = 0;
    WaveClass_field_17C = 0;
    WaveClass_field_180 = 0;
    WaveClass_field_184 = 0;
    WaveClass_field_188 = 0;
    WaveClass_field_18C = 0;
    WaveClass_field_190 = 0;
    WaveClass_field_194 = 0;
    WaveClass_field_198 = 0;
    WaveClass_field_19C = 0;
    WaveClass_field_1A0 = 0;
    WaveClass_field_1A4 = 0;
    WaveClass_field_1A8 = 0;
    WaveClass_field_1AC = 0;
    WaveClass_field_1B0 = 0;
    WaveClass_field_1B4 = 0;
    WaveClass_field_1B8 = 0;
    WaveClass_field_1BC = 0;
    WaveClass_field_1C0 = 0;
    WaveClass_field_1C4 = 0;
    WaveClass_field_1C8 = 0;
    WaveClass_field_1CC = 0;

    abstractFlags = kWaveFlag;

    // TODO: complete implementation
    // - Set up wave cell propagation from type
}

} // namespace gamemd
