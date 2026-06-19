#include "ui/tool_tip.hpp"

#include <cstring>

namespace gamemd
{

ToolTipManager* ToolTipManager::Instance = nullptr;

void ToolTipManager::updateLogic()
{
    // TODO: update tooltip timer, hide when expired
}

void ToolTipManager::Show(const wchar_t* text, const Point2D& location)
{
    // TODO: display tooltip at location with text
    (void)text;
    (void)location;
    IsVisible = true;
}

void ToolTipManager::Hide()
{
    IsVisible = false;
    ToolTipText = nullptr;
}

bool ToolTipManager::GetToolTipForObject(ObjectClass* pObject, wchar_t* outBuffer, int32_t bufferSize,
                                         HouseClass* pHouse, TechnoTypeClass* pTechType)
{
    (void)pObject;
    (void)outBuffer;
    (void)bufferSize;
    (void)pHouse;
    (void)pTechType;
    // TODO: build tooltip string from object type/name/house
    return false;
}

bool ToolTipManager::GetToolTipForCell(const CellStruct& cell, wchar_t* outBuffer, int32_t bufferSize,
                                       HouseClass* pHouse)
{
    (void)cell;
    (void)outBuffer;
    (void)bufferSize;
    (void)pHouse;
    // TODO: build tooltip string from cell contents
    return false;
}

// TODO: complete ToolTipManager implementation

} // namespace gamemd
