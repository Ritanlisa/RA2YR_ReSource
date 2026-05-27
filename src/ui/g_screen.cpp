#include "gamemd/ui/g_screen.hpp"

#include <cstring>

namespace gamemd
{

GScreenClass* GScreenClass::Instance = nullptr;

// --- DisplayClass ---

Action DisplayClass::DecideAction(const CellStruct& cell, ObjectClass* pObject, uint32_t flags)
{
    (void)cell;
    (void)pObject;
    (void)flags;
    return static_cast<Action>(0);
}

bool DisplayClass::ProcessClickCoords(Point2D* src, CellStruct* cellXY, CoordStruct* coordXYZ,
                                      ObjectClass** outTarget, uint8_t* a5, uint8_t* a6)
{
    (void)src;
    (void)cellXY;
    (void)coordXYZ;
    (void)outTarget;
    (void)a5;
    (void)a6;
    return false;
}

} // namespace gamemd
