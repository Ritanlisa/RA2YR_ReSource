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
};

} // namespace gamemd
