#pragma once

#include <cstdint>
#include <windows.h>

#include "core/enums.hpp"
#include "core/math.hpp"
#include "core/vector.hpp"
#include "object/abstract.hpp"

namespace gamemd
{

#ifndef GAMEMD_USING_ObjectClass
#define GAMEMD_USING_ObjectClass
using ra2::game::ObjectClass;
#endif
class HouseClass;
#ifndef GAMEMD_USING_TechnoClass
#define GAMEMD_USING_TechnoClass
using ra2::game::TechnoClass;
#endif
class CellClass;

// ============================================================================
// CommandClass — base for all UI command buttons
// vtbl layout: [0]=dtor, [1]=GetName, [2]=GetUIName, [3]=GetUICategory,
//              [4]=GetUIDescription, [5]=IsValid, [6]=IsEnabled,
//              [7]=IsActive, [8]=Execute
// Static data: Array @ 0x87F658, Hotkeys @ 0x87F680
// Key methods: BuildBar @ 0x6D1200, AddAction @ 0x724580
// ============================================================================
class CommandClass
{
public:
    static DynamicVectorClass<CommandClass*>* Array; // data: 0x87F658

    // design: defaulted virtual destructor, no binary equivalent
    virtual ~CommandClass() = default;                   // vt[0]

    // design: virtual function, no binary implementation matched in IDA
    virtual const char*    GetName() const          = 0; // vt[1]
    virtual const wchar_t* GetUIName() const        = 0; // vt[2]  // 0x484FF0
    // wrapper: delegates to CellClass::GetUIName at 0x484FF0
    virtual const wchar_t* GetUICategory() const    = 0; // vt[3]
    // wrapper: delegates to CellClass::GetUIName at 0x484FF0
    virtual const wchar_t* GetUIDescription() const = 0; // vt[4]

    virtual bool IsValid(uint32_t context) const         // vt[5] 0x724BD0
        { return false; }

    virtual bool IsEnabled(uint32_t context) const       // vt[6]
        { return true; }

    virtual bool IsActive(uint32_t context) const        // vt[7] 0x724BD0
        { return false; }

    // design: virtual function, no binary implementation matched in IDA
    virtual void Execute(uint32_t context) const = 0;    // vt[8]
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    bool executeAction(void* a1);  // 0x724FA0
    int BinarySearchAction();  // 0x724FC0
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int BuildBar();  // 0x6d1200 -- CommandClass::BuildBar
    int AddAction(int a1);  // 0x724580 -- CommandClass::AddAction
    // === SYMBOL-ANCHOR (END) ===
};

// ============================================================================
// 18 Command subclasses
// Each overrides vt[1-4] (GetName/GetUIName/GetUICategory/GetUIDescription)
// and vt[8] (Execute). Defaults from base for vt[5..7].
// ============================================================================

// --- Basic Commands (11) ---

class MoveCommandClass : public CommandClass       // RTTI @ 0x826F58
{
public:
    virtual ~MoveCommandClass() = default;
    virtual const char*    GetName() const override;             // vt[1]
    virtual const wchar_t* GetUIName() const override;           // vt[2]  // 0x484FF0
    virtual const wchar_t* GetUICategory() const override;       // vt[3]
    virtual const wchar_t* GetUIDescription() const override;    // vt[4]
    virtual void           Execute(uint32_t context) const override; // vt[8]
};

class AttackCommandClass : public CommandClass      // RTTI @ 0x826F68
{
public:
    virtual ~AttackCommandClass() = default;
    virtual const char*    GetName() const override;
    virtual const wchar_t* GetUIName() const override;  // 0x484FF0
    virtual const wchar_t* GetUICategory() const override;
    virtual const wchar_t* GetUIDescription() const override;
    virtual void           Execute(uint32_t context) const override;
};

class SelectCommandClass : public CommandClass      // RTTI @ 0x826F78
{
public:
    virtual ~SelectCommandClass() = default;
    virtual const char*    GetName() const override;
    virtual const wchar_t* GetUIName() const override;  // 0x484FF0
    virtual const wchar_t* GetUICategory() const override;
    virtual const wchar_t* GetUIDescription() const override;
    virtual void           Execute(uint32_t context) const override;
};

class StopCommandClass : public CommandClass        // RTTI @ 0x826AF8
{
public:
    virtual ~StopCommandClass() = default;
    virtual const char*    GetName() const override;             // returns "Stop"
    virtual const wchar_t* GetUIName() const override;  // 0x484FF0
    virtual const wchar_t* GetUICategory() const override;
    virtual const wchar_t* GetUIDescription() const override;
    virtual void           Execute(uint32_t context) const override; // 0x71e4e0
};

class GuardCommandClass : public CommandClass       // RTTI @ 0x826F20
{
public:
    virtual ~GuardCommandClass() = default;
    virtual const char*    GetName() const override;             // returns "Guard"
    virtual const wchar_t* GetUIName() const override;  // 0x484FF0
    virtual const wchar_t* GetUICategory() const override;
    virtual const wchar_t* GetUIDescription() const override;
    virtual void           Execute(uint32_t context) const override; // 0x71E520
};

class DeployCommandClass : public CommandClass      // RTTI @ 0x8269D0
{
public:
    virtual ~DeployCommandClass() = default;
    virtual const char*    GetName() const override;             // returns "Deploy"
    virtual const wchar_t* GetUIName() const override;  // 0x484FF0
    virtual const wchar_t* GetUICategory() const override;
    virtual const wchar_t* GetUIDescription() const override;
    virtual void           Execute(uint32_t context) const override; // 0x71E550
};

class WaypointCommandClass : public CommandClass    // RTTI @ 0x826FE8
{
public:
    virtual ~WaypointCommandClass() = default;
    virtual const char*    GetName() const override;             // returns "Waypoint"
    virtual const wchar_t* GetUIName() const override;  // 0x484FF0
    virtual const wchar_t* GetUICategory() const override;
    virtual const wchar_t* GetUIDescription() const override;
    virtual void           Execute(uint32_t context) const override; // 0x71E580
};

class SellCommandClass : public CommandClass        // RTTI @ 0x826ED0
{
public:
    virtual ~SellCommandClass() = default;
    virtual const char*    GetName() const override;             // returns "Sell"
    virtual const wchar_t* GetUIName() const override;  // 0x484FF0
    virtual const wchar_t* GetUICategory() const override;
    virtual const wchar_t* GetUIDescription() const override;
    virtual void           Execute(uint32_t context) const override; // 0x71E5B0
};

class RepairCommandClass : public CommandClass      // RTTI @ 0x826980
{
public:
    virtual ~RepairCommandClass() = default;
    virtual const char*    GetName() const override;             // returns "Repair"
    virtual const wchar_t* GetUIName() const override;  // 0x484FF0
    virtual const wchar_t* GetUICategory() const override;
    virtual const wchar_t* GetUIDescription() const override;
    virtual void           Execute(uint32_t context) const override; // 0x71E5E0
};

class EnterCommandClass : public CommandClass       // RTTI @ 0x826F90
{
public:
    virtual ~EnterCommandClass() = default;
    virtual const char*    GetName() const override;             // returns "Enter"
    virtual const wchar_t* GetUIName() const override;  // 0x484FF0
    virtual const wchar_t* GetUICategory() const override;
    virtual const wchar_t* GetUIDescription() const override;
    virtual void           Execute(uint32_t context) const override; // 0x71e600
};

class TogglePowerCommandClass : public CommandClass // RTTI @ 0x826FB0
{
public:
    virtual ~TogglePowerCommandClass() = default;
    virtual const char*    GetName() const override;             // returns "TogglePower"
    virtual const wchar_t* GetUIName() const override;  // 0x484FF0
    virtual const wchar_t* GetUICategory() const override;
    virtual const wchar_t* GetUIDescription() const override;
    virtual void           Execute(uint32_t context) const override; // 0x71e620
};

// --- Extended Commands (7 new) ---

class AreaGuardCommandClass : public CommandClass   // RTTI @ 0x826F30
{
public:
    virtual ~AreaGuardCommandClass() = default;
    virtual const char*    GetName() const override;             // returns "AreaGuard"
    virtual const wchar_t* GetUIName() const override;  // 0x484FF0
    virtual const wchar_t* GetUICategory() const override;
    virtual const wchar_t* GetUIDescription() const override;
    virtual void           Execute(uint32_t context) const override; // 0x71e660
};

class C4CommandClass : public CommandClass          // RTTI @ 0x826FE0
{
public:
    virtual ~C4CommandClass() = default;
    virtual const char*    GetName() const override;             // returns "C4"
    virtual const wchar_t* GetUIName() const override;  // 0x484FF0
    virtual const wchar_t* GetUICategory() const override;
    virtual const wchar_t* GetUIDescription() const override;
    virtual void           Execute(uint32_t context) const override;
};

class ChronoCommandClass : public CommandClass      // RTTI @ 0x827000
{
public:
    virtual ~ChronoCommandClass() = default;
    virtual const char*    GetName() const override;             // returns "Chrono"
    virtual const wchar_t* GetUIName() const override;  // 0x484FF0
    virtual const wchar_t* GetUICategory() const override;
    virtual const wchar_t* GetUIDescription() const override;
    virtual void           Execute(uint32_t context) const override;
};

class NukeCommandClass : public CommandClass        // RTTI @ 0x827028
{
public:
    virtual ~NukeCommandClass() = default;
    virtual const char*    GetName() const override;             // returns "Nuke"
    virtual const wchar_t* GetUIName() const override;  // 0x484FF0
    virtual const wchar_t* GetUICategory() const override;
    virtual const wchar_t* GetUIDescription() const override;
    virtual void           Execute(uint32_t context) const override;
};

class ToggleSellCommandClass : public CommandClass  // RTTI @ 0x826ED0
{
public:
    virtual ~ToggleSellCommandClass() = default;
    virtual const char*    GetName() const override;             // returns "ToggleSell"
    virtual const wchar_t* GetUIName() const override;  // 0x484FF0
    virtual const wchar_t* GetUICategory() const override;
    virtual const wchar_t* GetUIDescription() const override;
    virtual void           Execute(uint32_t context) const override; // 0x536f80
};

class ToggleRepairCommandClass : public CommandClass // RTTI @ 0x826980
{
public:
    virtual ~ToggleRepairCommandClass() = default;
    virtual const char*    GetName() const override;             // returns "ToggleRepair"
    virtual const wchar_t* GetUIName() const override;  // 0x484FF0
    virtual const wchar_t* GetUICategory() const override;
    virtual const wchar_t* GetUIDescription() const override;
    virtual void           Execute(uint32_t context) const override; // 0x536FA0
};

class ScatterCommandClass : public CommandClass     // RTTI @ 0x826E78
{
public:
    virtual ~ScatterCommandClass() = default;
    virtual const char*    GetName() const override;             // returns "Scatter"
    virtual const wchar_t* GetUIName() const override;  // 0x484FF0
    virtual const wchar_t* GetUICategory() const override;
    virtual const wchar_t* GetUIDescription() const override;
    virtual void           Execute(uint32_t context) const override; // 0x71E6A0
};

} // namespace gamemd
