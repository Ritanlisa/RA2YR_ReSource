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
    bool Check(FootClass* foot);  // 0x4A5360
    // IDA 0x487E00 area
    void Update(FootClass* foot);
    // IDA 0x487E00 area
    void Reset();
    // IDA 0x487E00 area
    void SetTarget(const CoordStruct& target);
    // IDA 0x487E00 area
    CoordStruct GetTarget() const;  // 0x6F9DC0

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
    static float CalcVelocity(float speed, int32_t dir);  // 0x5B20F0
    // IDA 0x5B2970 area
    static bool Check(FootClass* foot, const CoordStruct& dest);  // 0x5B2930
    // IDA 0x5B2970 area
    static void sub_5B2970();
    // IDA 0x5B2970 area
    static bool IsMoving(TechnoClass* tech);
    // IDA 0x5B2970 area
    static void StopMoving(TechnoClass* tech);

    int32_t     Movement_field_00;       // 0x00
};


// === Batch-generated MISSING class stubs ===

// 1 methods in IDA
class Locomotor
{
public:
    virtual ~Locomotor() = default;

    virtual void GetSpeed(); // 0x426630

};
// 14 methods in IDA
class MoveFeedback
{
public:
    virtual ~MoveFeedback() = default;

    virtual void ClearBuffer(); // 0x40B640
    virtual void PointerToIndex(); // 0x40B670
    virtual void Update(); // 0x40B6D0
    virtual void Show(); // 0x40B6F0
    virtual void FindItem(); // 0x40B930
    // +9 more virtual methods

    uint8_t MoveFeedback_field_0x04[4];
    uint8_t MoveFeedback_field_0x08[4];
    uint8_t MoveFeedback_field_0x0C[4];
    uint8_t MoveFeedback_field_0x10[4];
    uint8_t MoveFeedback_field_0x14[4];
    uint8_t MoveFeedback_field_0x18[4];
    uint8_t MoveFeedback_field_0x1C[4];
    uint8_t MoveFeedback_field_0x20[4];
    uint8_t MoveFeedback_field_0x24[4];
    uint8_t MoveFeedback_field_0x28[4];
    uint8_t MoveFeedback_field_0x2C[4];
    uint8_t MoveFeedback_field_0x30[4];
    uint8_t MoveFeedback_field_0x34[4];
};
// 2 methods in IDA
class MovementClass
{
public:
    virtual ~MovementClass() = default;

    virtual void CompareAbsCoords(); // 0x4C9530
    virtual void CalcSpeed(); // 0x54BFF0

    uint8_t MovementClass_field_0x04[4];
};
// 7 methods in IDA
class Pathfinding
{
public:
    virtual ~Pathfinding() = default;

    virtual void AStar(); // 0x42C290
    virtual void CalcDistance(); // 0x42D170
    virtual void sub_42DCA0(); // 0x42DCA0
    virtual void CrossBridge(); // 0x583180
    virtual void SelectRegionPath(); // 0x5833F0
    // +2 more virtual methods

    uint8_t Pathfinding_field_0x04[4];
    uint8_t Pathfinding_field_0x08[4];
    uint8_t Pathfinding_field_0x0C[4];
    uint8_t Pathfinding_field_0x10[4];
    uint8_t Pathfinding_field_0x14[4];
    uint8_t Pathfinding_field_0x18[4];
};
// 1 methods in IDA
class PathfindingClass
{
public:
    virtual ~PathfindingClass() = default;

    virtual void FindPath(); // 0x4FFB20

};

} // namespace gamemd
