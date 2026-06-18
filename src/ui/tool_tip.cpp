#include "ui/tool_tip.hpp"

#include <cstring>

namespace gamemd
{

ToolTipManager* ToolTipManager::Instance = nullptr;

void ToolTipManager::updateLogic()
{
    // Update tooltip timer; hide when expired
    if (!IsVisible)
        return;

    if (Duration > 0)
    {
        --Duration;
        if (Duration == 0)
        {
            Hide();
        }
    }
}

void ToolTipManager::Show(const wchar_t* text, const Point2D& location)
{
    // Display tooltip at screen location with text
    if (!text || !*text)
    {
        Hide();
        return;
    }
    ToolTipText = const_cast<wchar_t*>(text);
    Position = location;
    IsVisible = true;
    Duration = 120; // ~2 seconds at 60fps
}

void ToolTipManager::Hide()
{
    IsVisible = false;
    ToolTipText = nullptr;
}

bool ToolTipManager::GetToolTipForObject(ObjectClass* pObject, wchar_t* outBuffer, int32_t bufferSize,
                                         HouseClass* pHouse, TechnoTypeClass* pTechType)
{
    // Build tooltip string from object type/name/house
    // In the original: calls ObjectClass::GetTooltipText to fill buffer
    (void)pObject;
    (void)pHouse;
    (void)pTechType;

    if (!outBuffer || bufferSize <= 0)
        return false;

    // Default tooltip text
    swprintf_s(outBuffer, bufferSize, L"Object");
    return true;
}

bool ToolTipManager::GetToolTipForCell(const CellStruct& cell, wchar_t* outBuffer, int32_t bufferSize,
                                        HouseClass* pHouse)
{
    // Build tooltip string from cell contents
    (void)pHouse;
    if (!outBuffer || bufferSize <= 0)
        return false;

    // Default: show cell coordinates
    swprintf_s(outBuffer, bufferSize, L"Cell (%d, %d)", cell.X, cell.Y);
    return true;
}

} // namespace gamemd
