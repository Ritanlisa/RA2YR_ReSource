#pragma once

#include <cstdint>
#include "core/enums.hpp"
#include "core/math.hpp"
#include "misc/locomotion.hpp"

namespace gamemd
{

class FootClass;
class TechnoClass;

// ============================================================================
// MovementAI — Movement AI state machine (7 methods)
// IDA: sub_487E00, sub_4A5150, Check
// ============================================================================
class MovementAI
{
public:
    MovementAI() = default;

    // IDA 0x487E00
    void sub_487E00();
    // IDA 0x4A5150
    void sub_4A5150();
    // IDA 0x487E00 area
    bool Check(FootClass* foot);
    // IDA 0x487E00 area
    void Update(FootClass* foot);
    // IDA 0x487E00 area
    void Reset();
    // IDA 0x487E00 area
    void SetTarget(const CoordStruct& target);
    // IDA 0x487E00 area
    CoordStruct GetTarget() const;

    CoordStruct m_Target;       // 0x00
    int32_t     m_State;        // 0x0C
    int32_t     MovementAI_field_10;       // 0x10
    int32_t     MovementAI_field_14;       // 0x14
    int32_t     MovementAI_field_18;       // 0x18
};

// ============================================================================
// Movement — generic movement utilities (5 methods)
// IDA: CalcVelocity, Check, sub_5B2970
// ============================================================================
class Movement
{
public:
    // IDA 0x5B2970
    static float CalcVelocity(float speed, int32_t dir);
    // IDA 0x5B2970 area
    static bool Check(FootClass* foot, const CoordStruct& dest);
    // IDA 0x5B2970 area
    static void sub_5B2970();
    // IDA 0x5B2970 area
    static bool IsMoving(TechnoClass* tech);
    // IDA 0x5B2970 area
    static void StopMoving(TechnoClass* tech);

    int32_t     Movement_field_00;       // 0x00
};

} // namespace gamemd
