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

class ToolTipManager
{
public:
    static ToolTipManager* Instance;

    void updateLogic();
    void Show(const wchar_t* text, const Point2D& location);
    void Hide();

    bool GetToolTipForObject(ObjectClass* pObject, wchar_t* outBuffer, int32_t bufferSize,
                             HouseClass* pHouse, TechnoTypeClass* pTechType);
    bool GetToolTipForCell(const CellStruct& cell, wchar_t* outBuffer, int32_t bufferSize,
                           HouseClass* pHouse);

    bool           IsVisible;
    Point2D        Position;
    wchar_t*       ToolTipText;
    int32_t        Duration;
    TimerStruct    DisplayTimer;

    // TODO: complete ToolTipManager

protected:
    ToolTipManager() = default;
    ~ToolTipManager() = default;
};

} // namespace gamemd
