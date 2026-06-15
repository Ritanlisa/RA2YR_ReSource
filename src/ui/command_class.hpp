#pragma once

#include <cstdint>
#include <windows.h>

#include "core/enums.hpp"
#include "core/math.hpp"
#include "core/vector.hpp"

namespace gamemd
{

class ObjectClass;
class HouseClass;
class TechnoClass;
class CellClass;

class CommandClass
{
public:
    static DynamicVectorClass<CommandClass*>* Array;

    virtual ~CommandClass() = default;

    virtual const char*    GetName() const               = 0;
    virtual const wchar_t* GetUIName() const             = 0;
    virtual const wchar_t* GetUICategory() const         = 0;
    virtual const wchar_t* GetUIDescription() const      = 0;
    virtual bool           IsValid(uint32_t context) const     { return false; }
    virtual bool           IsEnabled(uint32_t context) const   { return true; }
    virtual bool           IsActive(uint32_t context) const    { return false; }
    virtual void           Execute(uint32_t context) const     = 0;

    // TODO: complete CommandClass members
};

class MoveCommandClass : public CommandClass
{
public:
    virtual ~MoveCommandClass() = default;
    virtual const char*    GetName() const override               { return "Move"; }
    virtual const wchar_t* GetUIName() const override             { return nullptr; }
    virtual const wchar_t* GetUICategory() const override         { return nullptr; }
    virtual const wchar_t* GetUIDescription() const override      { return nullptr; }
    virtual void           Execute(uint32_t context) const override {}
    // TODO: complete MoveCommandClass
};

class AttackCommandClass : public CommandClass
{
public:
    virtual ~AttackCommandClass() = default;
    virtual const char*    GetName() const override               { return "Attack"; }
    virtual const wchar_t* GetUIName() const override             { return nullptr; }
    virtual const wchar_t* GetUICategory() const override         { return nullptr; }
    virtual const wchar_t* GetUIDescription() const override      { return nullptr; }
    virtual void           Execute(uint32_t context) const override {}
    // TODO: complete AttackCommandClass
};

class SelectCommandClass : public CommandClass
{
public:
    virtual ~SelectCommandClass() = default;
    virtual const char*    GetName() const override               { return "Select"; }
    virtual const wchar_t* GetUIName() const override             { return nullptr; }
    virtual const wchar_t* GetUICategory() const override         { return nullptr; }
    virtual const wchar_t* GetUIDescription() const override      { return nullptr; }
    virtual void           Execute(uint32_t context) const override {}
    // TODO: complete SelectCommandClass
};

class StopCommandClass : public CommandClass
{
public:
    virtual ~StopCommandClass() = default;
    virtual const char*    GetName() const override               { return "Stop"; }
    virtual const wchar_t* GetUIName() const override             { return nullptr; }
    virtual const wchar_t* GetUICategory() const override         { return nullptr; }
    virtual const wchar_t* GetUIDescription() const override      { return nullptr; }
    virtual void           Execute(uint32_t context) const override {}
    // TODO: complete StopCommandClass
};

class GuardCommandClass : public CommandClass
{
public:
    virtual ~GuardCommandClass() = default;
    virtual const char*    GetName() const override               { return "Guard"; }
    virtual const wchar_t* GetUIName() const override             { return nullptr; }
    virtual const wchar_t* GetUICategory() const override         { return nullptr; }
    virtual const wchar_t* GetUIDescription() const override      { return nullptr; }
    virtual void           Execute(uint32_t context) const override {}
    // TODO: complete GuardCommandClass
};

class DeployCommandClass : public CommandClass
{
public:
    virtual ~DeployCommandClass() = default;
    virtual const char*    GetName() const override               { return "Deploy"; }
    virtual const wchar_t* GetUIName() const override             { return nullptr; }
    virtual const wchar_t* GetUICategory() const override         { return nullptr; }
    virtual const wchar_t* GetUIDescription() const override      { return nullptr; }
    virtual void           Execute(uint32_t context) const override {}
    // TODO: complete DeployCommandClass
};

class WaypointCommandClass : public CommandClass
{
public:
    virtual ~WaypointCommandClass() = default;
    virtual const char*    GetName() const override               { return "Waypoint"; }
    virtual const wchar_t* GetUIName() const override             { return nullptr; }
    virtual const wchar_t* GetUICategory() const override         { return nullptr; }
    virtual const wchar_t* GetUIDescription() const override      { return nullptr; }
    virtual void           Execute(uint32_t context) const override {}
    // TODO: complete WaypointCommandClass
};

class SellCommandClass : public CommandClass
{
public:
    virtual ~SellCommandClass() = default;
    virtual const char*    GetName() const override               { return "Sell"; }
    virtual const wchar_t* GetUIName() const override             { return nullptr; }
    virtual const wchar_t* GetUICategory() const override         { return nullptr; }
    virtual const wchar_t* GetUIDescription() const override      { return nullptr; }
    virtual void           Execute(uint32_t context) const override {}
    // TODO: complete SellCommandClass
};

class RepairCommandClass : public CommandClass
{
public:
    virtual ~RepairCommandClass() = default;
    virtual const char*    GetName() const override               { return "Repair"; }
    virtual const wchar_t* GetUIName() const override             { return nullptr; }
    virtual const wchar_t* GetUICategory() const override         { return nullptr; }
    virtual const wchar_t* GetUIDescription() const override      { return nullptr; }
    virtual void           Execute(uint32_t context) const override {}
    // TODO: complete RepairCommandClass
};

class EnterCommandClass : public CommandClass
{
public:
    virtual ~EnterCommandClass() = default;
    virtual const char*    GetName() const override               { return "Enter"; }
    virtual const wchar_t* GetUIName() const override             { return nullptr; }
    virtual const wchar_t* GetUICategory() const override         { return nullptr; }
    virtual const wchar_t* GetUIDescription() const override      { return nullptr; }
    virtual void           Execute(uint32_t context) const override {}
    // TODO: complete EnterCommandClass
};

class TogglePowerCommandClass : public CommandClass
{
public:
    virtual ~TogglePowerCommandClass() = default;
    virtual const char*    GetName() const override               { return "TogglePower"; }
    virtual const wchar_t* GetUIName() const override             { return nullptr; }
    virtual const wchar_t* GetUICategory() const override         { return nullptr; }
    virtual const wchar_t* GetUIDescription() const override      { return nullptr; }
    virtual void           Execute(uint32_t context) const override {}
    // TODO: complete TogglePowerCommandClass
};

// TODO: add remaining command subclasses (AreaGuard, C4, Chrono, Nuke, etc.)

} // namespace gamemd
