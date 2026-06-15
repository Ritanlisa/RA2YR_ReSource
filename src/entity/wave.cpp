#include "gamemd/entity/wave.hpp"
#include "gamemd/core/vector.hpp"

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

    std::memset(waveSectorAngles, 0, sizeof(waveSectorAngles));
    waveStateFlag0 = 0;
    waveStateFlag1 = 0;
    waveStateFlag2 = 0;
    waveStateFlag3 = 0;

    WaveIntensity          = 100;
    waveStepIndex          = 0;
    waveCurrentAmplitude   = 0;
    waveDecayRate          = 0;
    waveDirectionX         = 0;
    waveDirectionY         = 0;
    waveOriginX            = 0;
    waveOriginY            = 0;
    std::memset(waveSpreadTiming, 0, sizeof(waveSpreadTiming));
    waveSegmentCount       = 0;
    waveAnimFrame          = 0;
    waveCollisionState     = 0;
    std::memset(waveCollisionDirs, 0, sizeof(waveCollisionDirs));

    WaveIntensity = intensity;
    LaserIntensity = 0;
    Owner          = nullptr;

    std::memset(&Facing, 0, sizeof(Facing));
    std::memset(waveAnimPositions, 0, sizeof(waveAnimPositions));

    m_abstract_flags = kWaveFlag;

    // TODO: complete implementation
    // - Set up wave cell propagation from type
}

} // namespace gamemd
