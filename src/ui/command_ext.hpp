#pragma once

#include <cstdint>
#include <windows.h>
#include "core/enums.hpp"
#include "object/abstract.hpp"

namespace gamemd
{

class CommandClass;
class HouseClass;
class ObjectClass;
class TechnoClass;

// ============================================================================
// SelectTeamCommand — team selection command (6 methods)
// IDA: Construct, AddRef, Release
// ============================================================================
class SelectTeamCommand : public CommandClass
{
public:
    SelectTeamCommand() = default;
    virtual ~SelectTeamCommand() = default;

    // IDA 0x48B2A0 area
    virtual void Construct();
    virtual int32_t AddRef();
    virtual int32_t Release();
    virtual const char* GetName() const override;
    virtual const wchar_t* GetUIName() const override;
    virtual void Execute(uint32_t context) const override;

    int32_t     SelectTeamCommand_field_00;       // 0x00
    int32_t     SelectTeamCommand_field_04;       // 0x04
};

// ============================================================================
// AddTeamCommand — add unit to team command (6 methods)
// IDA: Construct, AddRef, Release
// ============================================================================
class AddTeamCommand : public CommandClass
{
public:
    AddTeamCommand() = default;
    virtual ~AddTeamCommand() = default;

    // IDA 0x48B2A0 area
    virtual void Construct();
    virtual int32_t AddRef();
    virtual int32_t Release();
    virtual const char* GetName() const override;
    virtual const wchar_t* GetUIName() const override;
    virtual void Execute(uint32_t context) const override;

    int32_t     AddTeamCommand_field_00;       // 0x00
    int32_t     AddTeamCommand_field_04;       // 0x04
};

// ============================================================================
// TauntCommandClass — taunt command (6 methods)
// ============================================================================
class TauntCommandClass : public CommandClass
{
public:
    TauntCommandClass() = default;
    virtual ~TauntCommandClass() = default;

    virtual void Construct();
    virtual int32_t AddRef();
    virtual int32_t Release();
    virtual const char* GetName() const override;
    virtual const wchar_t* GetUIName() const override;
    virtual void Execute(uint32_t context) const override;

    int32_t     TauntCommandClass_field_00;       // 0x00
    int32_t     TauntCommandClass_field_04;       // 0x04
};

// ============================================================================
// PageUserCommandClass — page user command (6 methods)
// ============================================================================
class PageUserCommandClass : public CommandClass
{
public:
    PageUserCommandClass() = default;
    virtual ~PageUserCommandClass() = default;

    virtual void Construct();
    virtual int32_t AddRef();
    virtual int32_t Release();
    virtual const char* GetName() const override;
    virtual const wchar_t* GetUIName() const override;
    virtual void Execute(uint32_t context) const override;

    int32_t     PageUserCommandClass_field_00;       // 0x00
    int32_t     PageUserCommandClass_field_04;       // 0x04
};

// ============================================================================
// DeleteCommandClass — delete command (6 methods)
// ============================================================================
class DeleteCommandClass : public CommandClass
{
public:
    DeleteCommandClass() = default;
    virtual ~DeleteCommandClass() = default;

    virtual void Construct();
    virtual int32_t AddRef();
    virtual int32_t Release();
    virtual const char* GetName() const override;
    virtual const wchar_t* GetUIName() const override;
    virtual void Execute(uint32_t context) const override;

    int32_t     DeleteCommandClass_field_00;       // 0x00
    int32_t     DeleteCommandClass_field_04;       // 0x04
};

// ============================================================================
// CenterTeamCommand — center on team command (5 methods)
// ============================================================================
class CenterTeamCommand : public CommandClass
{
public:
    CenterTeamCommand() = default;
    virtual ~CenterTeamCommand() = default;

    virtual void Construct();
    virtual int32_t AddRef();
    virtual int32_t Release();
    virtual const char* GetName() const override;
    virtual void Execute(uint32_t context) const override;

    int32_t     CenterTeamCommand_field_00;       // 0x00
};

// ============================================================================
// ScreenCaptureCommandClass — screenshot command (5 methods)
// ============================================================================
class ScreenCaptureCommandClass : public CommandClass
{
public:
    ScreenCaptureCommandClass() = default;
    virtual ~ScreenCaptureCommandClass() = default;

    virtual void Constructor();
    virtual int32_t AddRef();
    virtual void ddtor();
    virtual const char* GetName() const override;
    virtual void Execute(uint32_t context) const override;

    int32_t     ScreenCaptureCommandClass_field_00;       // 0x00
};

// ============================================================================
// CursorPositionCommandClass — cursor position command (1 method)
// ============================================================================
class CursorPositionCommandClass : public CommandClass
{
public:
    CursorPositionCommandClass() = default;
    virtual ~CursorPositionCommandClass() = default;

    virtual void Constructor();
    virtual const char* GetName() const override;
    virtual void Execute(uint32_t context) const override;

    int32_t     CursorPositionCommandClass_field_00;       // 0x00
};

// ============================================================================
// Commands — command aggregator (5 methods)
// IDA: AddRef, ddtor, Release
// ============================================================================
class Commands
{
public:
    Commands() = default;
    ~Commands();

    // IDA 0x48B2A0 area
    int32_t AddRef();
    void ddtor();
    int32_t Release();
    static void BuildBar();
    static void AddAction(CommandClass* cmd);

    int32_t     m_RefCount;     // 0x00
    static DynamicVectorClass<CommandClass*>* Array; // 0x87F658
};


// === Batch-generated MISSING class stubs ===

// 1 methods in IDA
class CursorAnim
{
public:
    virtual ~CursorAnim() = default;

    virtual void Load() {} // 0x6d1800

};
// 3 methods in IDA
class DeleteAndZero
{
public:
    virtual ~DeleteAndZero() = default;

    virtual void OrFree() {} // 0x624480
    virtual void Alt2() {} // 0x7b5340
    virtual void Alt() {} // 0x7b6760

    uint8_t DeleteAndZero_field_0x04[4];
    uint8_t DeleteAndZero_field_0x08[4];
};
// 1 methods in IDA
class ScreenCapture
{
public:
    virtual ~ScreenCapture() = default;

    virtual void Frame() {} // 0x55cc20

};

} // namespace gamemd