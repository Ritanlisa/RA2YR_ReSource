#pragma once

#include <cstdint>

#include "g_screen.hpp"
#include "..\core\enums.hpp"

namespace gamemd
{

class HouseClass;

class PowerClass : public RadarClass
{
public:
    static PowerClass* Instance;

    virtual ~PowerClass() = default;

    int32_t      PowerOutput;
    int32_t      PowerDrain;

    bool         unknown_bool_150C;
    uint8_t      padding_150D[3];
    TimerStruct  unknown_timer_1510;
    uint32_t     unknown_151C;
    TimerStruct  unknown_timer_1520;
    uint32_t     unknown_152C;
    uint32_t     unknown_1530;
    uint32_t     unknown_1534;
    bool         unknown_bool_1538;
    uint8_t      padding_1539[3];

    // TODO: complete PowerClass members

protected:
    PowerClass() = default;
};

} // namespace gamemd
