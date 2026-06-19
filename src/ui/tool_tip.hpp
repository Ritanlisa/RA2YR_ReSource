#pragma once

#include <cstdint>
#include <windows.h>

#include "core/enums.hpp"
#include "core/math.hpp"

namespace gamemd
{

class ObjectClass;
class TechnoTypeClass;
class HouseClass;

// ============================================================================
// ToolTipManager — tooltip display system
// IDA vtbl @ 0x7E3D20, Constructor @ 0x724000
// Virtual methods: Update, MarkToRedraw, Draw, DrawText, GetToolTipText
// Non-virtual: SetState @ 0x7241A0, ProcessMessage @ 0x724200,
//              GetTimerDelay @ 0x724510, SetTimerDelay @ 0x724520,
//              Process @ 0x724AD0, Hide @ 0x724BE0,
//              IsToolTipShowing @ 0x724C00
// ============================================================================
class ToolTipManager
{
public:
    static ToolTipManager* Instance;

    void updateLogic();     // calls Process @ 0x724AD0 // IDA: NOT_FOUND
    void Show(const wchar_t* text, const Point2D& location); // calls SetState(true) // IDA: NOT_FOUND
    void Hide();            // 0x724BE0

    bool GetToolTipForObject(ObjectClass* pObject, wchar_t* outBuffer, int32_t bufferSize, // IDA: UNMATCHED — no_callgraph_match, no_git_history
                             HouseClass* pHouse, TechnoTypeClass* pTechType);
    // calls ObjectClass::GetTooltipText @ 0x6AC210

    bool GetToolTipForCell(const CellStruct& cell, wchar_t* outBuffer, int32_t bufferSize, // IDA: UNMATCHED — no_callgraph_match, no_git_history
                           HouseClass* pHouse);

    // --- Member variables ---
    // (simplified subset)

    bool           IsVisible;
    Point2D        Position;
    wchar_t*       ToolTipText;
    int32_t        Duration;
    TimerStruct    DisplayTimer;
    wchar_t        TextBuffer[0x100];

protected:
    ToolTipManager() = default;  // 0x724000
    ~ToolTipManager() = default; // 0x724B80
};

} // namespace gamemd
