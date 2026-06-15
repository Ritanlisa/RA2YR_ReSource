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

    field_BC      = 0;
    field_C0      = 0;
    field_C4      = 0;
    field_C8      = 0;
    field_CC      = 0;
    field_D0      = 0;
    field_D4      = 0;
    field_D8      = 0;
    field_DC      = 0;
    field_E0      = 0;
    field_E4      = 0;
    field_E8      = 0;
    field_EC      = 0;
    field_F0      = 0;
    field_F4      = 0;
    field_F8      = 0;
    field_FC      = 0;
    field_100     = 0;
    field_104     = 0;
    field_108     = 0;
    field_10C     = 0;
    field_110     = 0;
    field_114     = 0;
    field_118     = 0;
    field_11C     = 0;
    field_120     = 0;
    field_124     = 0;
    field_128     = 0;

    field_12C = 0;
    field_12D = 0;
    field_12E = 0;
    field_12F = 0;

    WaveIntensity = intensity;
    LaserIntensity = 0;
    Owner          = nullptr;

    std::memset(&Facing, 0, sizeof(Facing));
    std::memset(unknown_208, 0, sizeof(unknown_208));

    field_134 = 0;
    field_138 = 0;
    field_13C = 0;
    field_140 = 0;
    field_144 = 0;
    field_148 = 0;
    field_14C = 0;
    field_150 = 0;
    field_154 = 0;
    field_158 = 0;
    field_15C = 0;
    field_160 = 0;
    field_164 = 0;
    field_168 = 0;
    field_16C = 0;
    field_170 = 0;
    field_174 = 0;
    field_178 = 0;
    field_17C = 0;
    field_180 = 0;
    field_184 = 0;
    field_188 = 0;
    field_18C = 0;
    field_190 = 0;
    field_194 = 0;
    field_198 = 0;
    field_19C = 0;
    field_1A0 = 0;
    field_1A4 = 0;
    field_1A8 = 0;
    field_1AC = 0;
    field_1B0 = 0;
    field_1B4 = 0;
    field_1B8 = 0;
    field_1BC = 0;
    field_1C0 = 0;
    field_1C4 = 0;
    field_1C8 = 0;
    field_1CC = 0;

    abstractFlags = kWaveFlag;

    // TODO: complete implementation
    // - Set up wave cell propagation from type
}

} // namespace gamemd
