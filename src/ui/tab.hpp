#pragma once

#include <cstdint>
#include <windows.h>

#include "sidebar.hpp"
#include "core/enums.hpp"
#include "object/abstract.hpp"

namespace gamemd
{

struct TabDataClass
{
    int32_t  TargetValue;
    int32_t  LastValue;
    bool     NeedsRedraw;
    bool     ValueIncreased;
    bool     ValueChanged;
    uint8_t  padding_B;
    int32_t  ValueDelta;
};

class TabClass : public SidebarClass
{
public:
    static TabClass* Instance;

    virtual ~TabClass() = default; // IDA: NOT_FOUND

    TabDataClass  TabData;
    TimerStruct   TabClass_field_timer_552C;
    TimerStruct   InsufficientFundsBlinkTimer;
    uint8_t       TabClass_field_byte_5544;
    bool          MissionTimerPinged;
    uint8_t       TabClass_field_byte_5546;
    uint8_t       padding_5547;

    // TODO: complete TabClass members

protected:
    TabClass() = default; // 0x4A2350
};

} // namespace gamemd
