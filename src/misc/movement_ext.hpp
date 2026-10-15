#pragma once

#include <cstdint>
#include "core/enums.hpp"
#include "core/math.hpp"
namespace ra2 { namespace game { class AbstractClass; } }  // X27: member-decl type supply

namespace gamemd
{

} // namespace gamemd (bridge re-own, G42.29h)
namespace ra2 { namespace game { class FootClass; } }
namespace gamemd {
#ifndef GAMEMD_USING_FootClass
#define GAMEMD_USING_FootClass
using ::ra2::game::FootClass;
#endif
} // namespace gamemd (bridge re-own, G42.29h)
namespace ra2 { namespace game { class TechnoClass; } }
namespace gamemd {
    // X27: member-decl type supply (log-driven hygiene)
    using ra2::game::AbstractClass;
#ifndef GAMEMD_USING_TechnoClass
#define GAMEMD_USING_TechnoClass
using ::ra2::game::TechnoClass;
#endif

// ============================================================================
// MovementAI — Movement AI state machine (7 methods)
// IDA: sub_487E00, sub_4A5150, Check
// ============================================================================
// CSP: MovementAI matched via T1
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
    int Reset();
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
    unsigned int q028;  // 0x28
    unsigned int q0B0;  // 0xB0
    void* q0048;  // 0x48
    unsigned int q0049;  // 0x49
    unsigned int u32_81;  // 0x81
    unsigned int q024;  // 0x24
    void* Cell_9;  // 0x0 (no offset truth)
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int MainFootClass(int a1, char a2);  // 0x514F70
    int MarkOccupiedPathCell();  // 0x5163B0
    int StepFootClass(int a1, int a2);  // 0x5164D0
    int Begin();  // 0x6F9E50
    // --- gap2 auto-generated stub declarations (END) ---
    unsigned int q01C;  // 0x1C
    void *ptr_24;  // 0x24

    AbstractClass * q544;  // X10 supply (member_lookup)
    void* q558;  // X10 supply (member_lookup)
    unsigned int u32_100;  // X10 supply (member_lookup)
    unsigned int u32_1C4;  // X10 supply (member_types)
    unsigned int u32_20;  // X10 supply (member_lookup)
    int u32_2C;  // X10 supply (member_lookup)
    unsigned int u32_3B8;  // X10 supply (member_lookup)
    uint32_t u32_480;  // X10 supply (member_lookup)
    int u32_4C;  // X10 supply (member_lookup)
    int u32_54;  // X10 supply (member_lookup)
    unsigned int u32_550;  // X10 supply (member_types)
    unsigned int u32_564;  // X10 supply (member_types)
    unsigned int u32_5B0;  // X10 supply (member_lookup)
    unsigned int u32_5EC;  // X10 supply (member_lookup)
    unsigned int u32_674;  // X10 supply (member_types)
    unsigned int u32_67C;  // X10 supply (member_types)
    unsigned int u32_697;  // X10 supply (member_types)
    unsigned int u32_6C3;  // X10 supply (member_types)
    unsigned int u32_8;  // X10 supply (member_lookup)
    int u32_8D;  // X10 supply (member_lookup)
    unsigned int u32_98;  // X10 supply (member_types)
    int u32_9C;  // X10 supply (member_lookup)
    unsigned int u32_A8;  // X10 supply (member_types)
    unsigned int u32_AC;  // X10 supply (member_types)
    unsigned int u32_FC;  // X10 supply (member_types)
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
     bool Check(FootClass* foot, const CoordStruct& dest);  // 0x5B2930
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
    void UpdateLocomotion(int16_t *a2);  // 0x5B2A30
    // --- gap2 auto-generated stub declarations (END) ---
};


// === Batch-generated MISSING class stubs ===

// Locomotor class removed 2026-09-07: fabricated stub class. Its single method
// 0x426630 is the CDTimerClass countdown helper (reads {StartTime@0,?@4,TimeLeft@8},
// called by FacingClass::Set_SyncLog with &RotationTimer) — declared in
// locomotion.hpp as CDTimerClass::TimeRemaining.

// 14 methods in IDA
// CSP: MoveFeedback matched via T1
// 2 methods in IDA
class MovementClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MovementClass() = default;

    virtual void CompareAbsCoords(); // 0x4C9530
    virtual void CalcSpeed(); // 0x54BFF0

    uint8_t MovementClass_field_0x04[4];
    unsigned int * CompareAbsCoords(unsigned int *a2);

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q004;  // X10 supply (member_lookup)
    unsigned int u32_10;  // X10 supply (member_lookup)
    unsigned int u32_14;  // X10 supply (member_lookup)
    unsigned int u32_8;  // X10 supply (member_lookup)
};
// 7 methods in IDA
// CSP: Pathfinding matched via T1
class Pathfinding
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Pathfinding() = default;

    virtual void AStar(); // 0x42C290
    virtual void CalcDistance(); // 0x42D170
    static int CalcDistance(Pathfinding * aP1, short *a2, short *a3, int a4, int a5, int a6, int a7);  // 0x42D170 static-call twin (g57w10; mirrors e4 Pathfinding_e4 G57w10-S supply)
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
    void* CheckCliff(unsigned int *a2, int16_t *a3, int a4, int a5); // 0x583820
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    void* ExpandNode(int a1, int a2);  // 0x5a5360
    // === FUNCS-MOVE (END) ===
    char AStar(int16_t *a2, int16_t *a3, int a4, int a5);
    void SiftDown(int a2);

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    unsigned char __pad_068;  // X10 supply (member_lookup)
    int q004;  // X10 supply (member_lookup)
    int q008;  // X10 supply (member_lookup)
    unsigned char q028;  // X10 supply (member_lookup)
    unsigned char q064;  // X10 supply (member_lookup)
    unsigned int u32_6C;  // X10 supply (member_lookup)
    unsigned int u32_70;  // X10 supply (member_lookup)
    unsigned int u32_F4;  // X10 supply (member_lookup)
    unsigned int u32_F8;  // X10 supply (member_lookup)
};
// 1 methods in IDA
// CSP: PathfindingClass matched via T1
class PathfindingClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~PathfindingClass() = default;

    virtual void FindPath(); // 0x4FFB20

    int FindPath(unsigned int *a2);

    unsigned char CellStruct_1525[4];  /* CellStruct */  // X10 supply (member_lookup)
    unsigned int u32_5490;  // X10 supply (member_lookup)
    unsigned int u32_5494;  // X10 supply (member_lookup)
    unsigned int u32_5496;  // X10 supply (member_lookup)
    unsigned int u32_5498;  // X10 supply (member_lookup)
};

} // namespace gamemd
