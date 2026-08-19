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

    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TabClass() = default;

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
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void processTabInput();  // 0x637060
    void* initTabData();  // 0x6A4E60
    void* updateTabProduction(int a1);  // 0x6A80A0
    int drawTabBackground();  // 0x6AC7C0
    void* Constructor();  // 0x6CFE20
    // --- gap2 auto-generated stub declarations (END) ---
};

} // namespace gamemd
