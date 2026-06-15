#pragma once

#include <cstdint>

#include "g_screen.hpp"
#include "..\core\enums.hpp"
#include "..\system\radar.hpp"

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

    bool         powerField_bool_150C;
    uint8_t      padding_150D[3];
    TimerStruct  powerField_timer_1510;
    uint32_t     powerField_151C;
    TimerStruct  powerField_timer_1520;
    uint32_t     powerField_152C;
    uint32_t     powerField_1530;
    uint32_t     powerField_1534;
    bool         powerField_bool_1538;
    uint8_t      padding_1539[3];

    // TODO: complete PowerClass members

protected:
    PowerClass() = default;
};

} // namespace gamemd
