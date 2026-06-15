#pragma once

#include <cstdint>
#include <unknwn.h>

#include "..\core\enums.hpp"
#include "..\core\math.hpp"
#include "..\core\vector.hpp"
#include "..\object\object.hpp"

namespace gamemd {

#ifndef GAMEMD_USING_ObjectClass
#define GAMEMD_USING_ObjectClass
using ra2::game::ObjectClass;
#endif
#ifndef GAMEMD_USING_TechnoClass
#define GAMEMD_USING_TechnoClass
using ra2::game::TechnoClass;
#endif
#ifndef GAMEMD_USING_FacingStruct
#define GAMEMD_USING_FacingStruct
using ra2::game::FacingStruct;
#endif


class CellClass;

class WaveClass : public ra2::game::ObjectClass
{
public:
    static constexpr AbstractType kAbsID = AbstractType::Wave;

    WaveClass(ra2::game::TechnoClass* pTarget, WaveType waveType,
              const Point2D& coords, uint32_t intensity) noexcept;

    virtual HRESULT __stdcall Load(IStream* pStm) override { return S_OK; }
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override { return S_OK; }
    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override { return E_NOTIMPL; }

    virtual ~WaveClass() override = default;

    virtual AbstractType __stdcall WhatAmI() const override { return kAbsID; }
    virtual int Size() const override { return sizeof(WaveClass); }

    ra2::game::TechnoClass*          Target;
    WaveType                         Type;
    Point2D                          someCoords;
    // Wave sector angle data — 28 entries (IDA: dwords 47-74, init to 0)
    uint32_t                         waveSectorAngles[28];
    // Wave state flags — 4 bytes at +0x12C (IDA: byte init sequence)
    uint8_t                          waveStateFlag0;
    uint8_t                          waveStateFlag1;
    uint8_t                          waveStateFlag2;
    uint8_t                          waveStateFlag3;
    uint32_t                         WaveIntensity;         // +0x130 (dword 76), init 100
    uint32_t                         waveStepIndex;         // +0x134 (dword 77), init 0
    uint32_t                         waveCurrentAmplitude;  // +0x138 (dword 78), init 0
    uint32_t                         waveDecayRate;         // +0x13C (dword 79), init 1.875f
    uint32_t                         waveDirectionX;        // +0x140 (dword 80)
    uint32_t                         waveDirectionY;        // +0x144 (dword 81)
    uint32_t                         waveOriginX;           // +0x148 (dword 82)
    uint32_t                         waveOriginY;           // +0x14C (dword 83)
    // Wave spread timing data — 16 entries (IDA: dwords 84-103, init to 0)
    uint32_t                         waveSpreadTiming[16];
    uint32_t                         waveSegmentCount;      // +0x1A0 (dword 104), init 0
    uint32_t                         waveAnimFrame;         // +0x1A4 (dword 105), init 0
    uint32_t                         waveCollisionState;    // +0x1A8 (dword 106), init 0
    // Wave collision direction data — 8 entries
    uint32_t                         waveCollisionDirs[8];  // +0x1AC (dword 107-114)
    uint32_t                         LaserIntensity;
    ra2::game::TechnoClass*          Owner;
    ra2::game::FacingStruct          Facing;
    DynamicVectorClass<CellClass*>   Cells;
    // Wave animation position data — 14 entries × 4 bytes
    uint32_t                         waveAnimPositions[14];

protected:
    WaveClass() = default;
};

} // namespace gamemd
