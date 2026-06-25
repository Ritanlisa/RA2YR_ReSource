#pragma once

#include <cstdint>
#include "core/enums.hpp"
#include "core/math.hpp"

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
    // wrapper: delegates to MovementAI::IsPathMovementAllowed at 0x487E00
    void sub_487E00();
    // IDA 0x4A5150
    // wrapper: delegates to MovementAI::IsProgressAtEnd at 0x4A5150
    void sub_4A5150();
    // IDA 0x487E00 area
    bool Check(FootClass* foot);  // 0x4A5360
    // IDA 0x487E00 area
    // design: no binary equivalent found in IDA
    void Update(FootClass* foot);
    // IDA 0x487E00 area
    // design: no binary equivalent found in IDA
    void Reset();
    // IDA 0x487E00 area
    // design: no binary equivalent found in IDA
    void SetTarget(const CoordStruct& target);
    // IDA 0x487E00 area
    CoordStruct GetTarget() const;

    CoordStruct m_Target;       // 0x00
    int32_t     m_State;        // 0x0C
    int32_t     MovementAI_field_10;       // 0x10
    int32_t     MovementAI_field_14;       // 0x14
    int32_t     MovementAI_field_18;       // 0x18
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int MainFootClass(int a1);  // 0x514F70
    int MarkOccupiedPathCell();  // 0x5163B0
    int StepFootClass(int a1);  // 0x5164D0
    int Begin();  // 0x6F9E50
    // --- gap2 auto-generated stub declarations (END) ---
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
    // design: static function, no direct binary match in IDA
    static void sub_5B2970();
    // IDA 0x5B2970 area
    // design: static function, no direct binary match in IDA
    static bool IsMoving(TechnoClass* tech);
    // IDA 0x5B2970 area
    // design: static function, no direct binary match in IDA
    static void StopMoving(TechnoClass* tech);

    int32_t     Movement_field_00;       // 0x00
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int CompareAbsCoords(void* a1, void* a2);  // 0x5B29C0
    void UpdateLocomotion(void* a1);  // 0x5B2A30
    // --- gap2 auto-generated stub declarations (END) ---
};


// === Batch-generated MISSING class stubs ===

// 1 methods in IDA
class Locomotor
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Locomotor() = default;

    virtual void GetSpeed(); // 0x426630

};
// 14 methods in IDA
class MoveFeedback
{
public:
    // design: defaulted virtual destructor, no binary equivalent
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
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MovementClass() = default;

    virtual void CompareAbsCoords(); // 0x4C9530
    virtual void CalcSpeed(); // 0x54BFF0

    uint8_t MovementClass_field_0x04[4];
};
// 7 methods in IDA
class Pathfinding
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Pathfinding() = default;

    virtual void AStar(); // 0x42C290
    virtual void CalcDistance(); // 0x42D170
    virtual void SiftDown(); // 0x42DCA0
    virtual void CrossBridge(); // 0x583180
    virtual void SelectRegionPath(); // 0x5833F0
    // +2 more virtual methods

    uint8_t Pathfinding_field_0x04[4];
    uint8_t Pathfinding_field_0x08[4];
    uint8_t Pathfinding_field_0x0C[4];
    uint8_t Pathfinding_field_0x10[4];
    uint8_t Pathfinding_field_0x14[4];
    uint8_t Pathfinding_field_0x18[4];
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void* CheckCliff(void* a1, void* a2, int a3, int a4);  // 0x583820
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    void* ExpandNode(int a1, int a2);  // 0x5a5360
    // === FUNCS-MOVE (END) ===
};
// 1 methods in IDA
class PathfindingClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~PathfindingClass() = default;

    virtual void FindPath(); // 0x4FFB20

};

} // namespace gamemd
