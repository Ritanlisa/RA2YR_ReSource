#pragma once

#include <cstdint>

#include "g_screen.hpp"
#include "core/enums.hpp"
#include "system/radar.hpp"

namespace gamemd
{

class HouseClass;

class PowerClass : public RadarClass
{
public:
    static PowerClass* Instance;

    // design: defaulted virtual destructor, no binary equivalent
    virtual ~PowerClass() = default;

    int32_t      PowerOutput;
    int32_t      PowerDrain;

    bool         PowerClass_field_bool_150C;
    uint8_t      padding_150D[3];
    TimerStruct  PowerClass_field_timer_1510;
    uint32_t     PowerClass_field_151C;
    TimerStruct  PowerClass_field_timer_1520;
    uint32_t     PowerClass_field_152C;
    uint32_t     PowerClass_field_1530;
    uint32_t     PowerClass_field_1534;
    bool         PowerClass_field_bool_1538;
    uint8_t      padding_1539[3];

    // TODO: complete PowerClass members

protected:
    PowerClass() = default;
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void* updateDrain();  // 0x63F730
    void checkBlackout();  // 0x63F7C0
    void updatePowerBarAnimation();  // 0x63FEA0
    int getDrain();  // 0x6403A0
    void* getAvailable(int a1);  // 0x640450
    void* Initialize(int a1);  // 0x6404B0
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int Update(int a1);  // 0x43a5d0 -- Power::Update
    int FinalizeDrain(int a1);  // 0x4a1c10 -- Power::FinalizeDrain
    int FlagProcess(int a1);  // 0x4a1ca0 -- Power::FlagProcess
    void* UpdateAll();  // 0x67c6e0 -- Power::UpdateAll
    int ComputeHousePowerChecksum(int a1);  // 0x68b940 -- Power::ComputeHousePowerChecksum
    int ChangedHouse(int a1);  // 0x750090 -- Power::ChangedHouse
    // === SYMBOL-ANCHOR (END) ===
};

} // namespace gamemd
