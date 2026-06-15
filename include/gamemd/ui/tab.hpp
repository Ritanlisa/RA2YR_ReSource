#pragma once

#include <cstdint>
#include <windows.h>

#include "sidebar.hpp"
#include "..\core\enums.hpp"
#include "..\object\abstract.hpp"

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

    virtual ~TabClass() = default;

    TabDataClass  TabData;
    TimerStruct   tabFlashTimer;
    TimerStruct   InsufficientFundsBlinkTimer;
    uint8_t       tabStateFlags;
    bool          MissionTimerPinged;
    uint8_t       tabFlashState;
    uint8_t       padding_5547;

    // TODO: complete TabClass members

protected:
    TabClass() = default;
};

} // namespace gamemd
