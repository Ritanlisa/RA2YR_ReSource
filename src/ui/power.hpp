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
    int TimerProcess(int a1);  // 0x4a1d50 -- Power::TimerProcess (G42.42d supply decl)
    void* UpdateAll();  // 0x67c6e0 -- Power::UpdateAll
    int ComputeHousePowerChecksum(int a1);  // 0x68b940 -- Power::ComputeHousePowerChecksum
    int ChangedHouse(int a1);  // 0x750090 -- Power::ChangedHouse
    // === SYMBOL-ANCHOR (END) ===

    unsigned int q008;  // X10 supply (member_lookup)
    unsigned char q1510[16];  /* char[16] */  // X10 supply (member_lookup)
    unsigned int q1514;  // X10 supply (member_lookup)
    unsigned int q1518;  // X10 supply (member_lookup)
    unsigned int q151C;  // X10 supply (member_lookup)
    unsigned char q1524[4];  /* char[4] */  // X10 supply (member_lookup)
    unsigned char q152C[4];  /* char[4] */  // X10 supply (member_lookup)
    unsigned char q1534[4];  /* char[4] */  // X10 supply (member_lookup)
    int q1538;  // X10 supply (member_lookup)
    unsigned int u32_153C;  // X10 supply (member_lookup)
    unsigned int u32_1540;  // X10 supply (member_lookup)
    void* ptr_0;  // X10 supply (csp_canon_members)
};

} // namespace gamemd
