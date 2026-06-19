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
    virtual ~SelectTeamCommand() = default;  // 0x536030

    // IDA 0x48B2A0 area
    virtual void Construct();  // 0x535FC0
    virtual int32_t AddRef();  // 0x535FE0
    virtual int32_t Release();  // 0x536000
    virtual const char* GetName() const override; // IDA: NOT_FOUND
    virtual const wchar_t* GetUIName() const override;  // 0x484FF0
    virtual void Execute(uint32_t context) const override; // IDA: NOT_FOUND

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
    virtual ~AddTeamCommand() = default;  // 0x536120

    // IDA 0x48B2A0 area
    virtual void Construct();  // 0x5360B0
    virtual int32_t AddRef();  // 0x5360D0
    virtual int32_t Release();  // 0x5360F0
    virtual const char* GetName() const override; // IDA: NOT_FOUND
    virtual const wchar_t* GetUIName() const override;  // IDA: 0x484FF0
    virtual void Execute(uint32_t context) const override; // IDA: NOT_FOUND

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
    virtual ~TauntCommandClass() = default;  // 0x536300

    virtual void Construct();  // 0x536290
    virtual int32_t AddRef();  // 0x5362B0
    virtual int32_t Release();  // 0x5362D0
    virtual const char* GetName() const override; // IDA: NOT_FOUND
    virtual const wchar_t* GetUIName() const override;  // IDA: 0x484FF0
    virtual void Execute(uint32_t context) const override; // IDA: NOT_FOUND

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
    virtual ~PageUserCommandClass() = default;  // 0x537E10

    virtual void Construct();  // 0x537DD0
    virtual int32_t AddRef();  // 0x537DE0
    virtual int32_t Release();  // 0x537DF0
    virtual const char* GetName() const override; // IDA: NOT_FOUND
    virtual const wchar_t* GetUIName() const override;  // IDA: 0x484FF0
    virtual void Execute(uint32_t context) const override; // IDA: NOT_FOUND

    int32_t     PageUserCommandClass_field_00;       // 0x00
    int32_t     PageUserCommandClass_field_04;       // 0x04
};

// ============================================================================
// DeleteCommandClass — delete command (6 methods)
// ============================================================================
class DeleteCommandClass : public CommandClass
{
public:
    DeleteCommandClass() = default; // 0x537F10
    virtual ~DeleteCommandClass() = default;  // 0x537F50

    virtual void Construct(); // IDA: NOT_FOUND
    virtual int32_t AddRef();  // 0x537F20
    virtual int32_t Release();  // 0x537F30
    virtual const char* GetName() const override; // IDA: NOT_FOUND
    virtual const wchar_t* GetUIName() const override;  // IDA: 0x484FF0
    virtual void Execute(uint32_t context) const override; // IDA: NOT_FOUND

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
    virtual ~CenterTeamCommand() = default; // IDA: NOT_FOUND

    virtual void Construct();  // 0x5361A0
    virtual int32_t AddRef();  // 0x5361C0
    virtual int32_t Release();  // 0x5361E0
    virtual const char* GetName() const override; // IDA: NOT_FOUND
    virtual void Execute(uint32_t context) const override; // IDA: NOT_FOUND

    int32_t     CenterTeamCommand_field_00;       // 0x00
};

// ============================================================================
// ScreenCaptureCommandClass — screenshot command (5 methods)
// ============================================================================
class ScreenCaptureCommandClass : public CommandClass
{
public:
    ScreenCaptureCommandClass() = default;
    virtual ~ScreenCaptureCommandClass() = default;  // 0x537B60

    virtual void Constructor();  // 0x537B40
    virtual int32_t AddRef();  // 0x537B50
    virtual void ddtor();  // IDA: 0x537B60
    virtual const char* GetName() const override; // IDA: NOT_FOUND
    virtual void Execute(uint32_t context) const override;  // 0x537BA0

    int32_t     ScreenCaptureCommandClass_field_00;       // 0x00
};

// ============================================================================
// CursorPositionCommandClass — cursor position command (1 method)
// ============================================================================
class CursorPositionCommandClass : public CommandClass
{
public:
    CursorPositionCommandClass() = default;
    virtual ~CursorPositionCommandClass() = default; // IDA: NOT_FOUND

    virtual void Constructor();  // 0x537E70
    virtual const char* GetName() const override; // IDA: NOT_FOUND
    virtual void Execute(uint32_t context) const override; // IDA: NOT_FOUND

    int32_t     CursorPositionCommandClass_field_00;       // 0x00
};

// ============================================================================
// Commands — command aggregator (5 methods)
// IDA: AddRef, ddtor, Release
// ============================================================================
class Commands
{
public:
    Commands() = default; // IDA: UNMATCHED — defaulted_special_member, default_ctor, no_callgraph_match
    ~Commands(); // IDA: UNMATCHED — no_callgraph_match, no_git_history

    // IDA 0x48B2A0 area
    int32_t AddRef();  // 0x537A50
    void ddtor();  // 0x537A60
    int32_t Release();  // 0x537A70
    static void BuildBar();  // 0x6D1200
    static void AddAction(CommandClass* cmd);  // 0x724580

    int32_t     m_RefCount;     // 0x00
    static DynamicVectorClass<CommandClass*>* Array; // 0x87F658
};


// === Batch-generated MISSING class stubs ===

// 1 methods in IDA
class CursorAnim
{
public:
    virtual ~CursorAnim() = default; // IDA: NOT_FOUND

    virtual void Load() {} // IDA: 0x6D1800

};
// 3 methods in IDA
class DeleteAndZero
{
public:
    virtual ~DeleteAndZero() = default; // IDA: NOT_FOUND

    virtual void OrFree() {} // IDA: 0x624480
    virtual void Alt2() {} // IDA: 0x7B5340
    virtual void Alt() {} // IDA: 0x7B6760

    uint8_t DeleteAndZero_field_0x04[4];
    uint8_t DeleteAndZero_field_0x08[4];
};
// 1 methods in IDA
class ScreenCapture
{
public:
    virtual ~ScreenCapture() = default; // IDA: NOT_FOUND

    virtual void Frame() {} // IDA: 0x55CC20

};

} // namespace gamemd
