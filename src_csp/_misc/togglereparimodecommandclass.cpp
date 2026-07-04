#include "togglereparimodecommandclass.hpp"

char __stdcall ToggleRepariModeCommandClass::Execute_PlayerAutoRepair(int a1)
{
    return BuildingClass::TogglePower2(&MapClass_Instance, -1);
}

