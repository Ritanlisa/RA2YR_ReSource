#include "skirmishsetup.hpp"

char  SkirmishSetup::PlayButtonClickAnim(HWND hWnd)
{
    HWND *v2; // eax
    uint32_t *v4; // eax
    bool v5; // bl
    bool v6; // al
    HWND v7; // [esp+8h] [ebp-4h] BYREF
    if ( SessionClass::GetGameSpeed(GameMode_Current) )
    return 0;
    v7 = hWnd;
    if ( !g_DialogHashMap_Count )
    return 0;
    v2 = (HWND *)*((uint32_t *)g_DialogHashMap_Base + (g_DialogHashMap_Hasher(&v7) & ((1 << g_DialogHashMap_Buckets) - 1)));
    if ( !v2 )
    return 0;
    while ( *v2 != v7 )
    v2 = (HWND *)v2[129];
    if ( !v2 )
    return 0;
    v4 = v2 + 1;
    if ( !v4 )
    return 0;
    v5 = *((uint8_t *)v4 + 189) && v4[44] == 1;
    v6 = IsWindowVisible(hWnd);
    if ( !v5 || !v6 )
    return 0;
    PlayVocClass(RulesClass_Instance->AddPlanningModeCommandSound, 0x2000, 1.0, 0);
    LOBYTE(v7) = IsWindowEnabled(hWnd);
    EnableWindow(hWnd, 0);
    EnumChildWindows(hWnd, Dialog::MapControlToAction, 1);
    RenderGadgetClassAnimation(hWnd, 1);
    EnumChildWindows(hWnd, Dialog::MapControlToAction, 0);
    EnableWindow(hWnd, (unsigned __int8)v7);
    InvalidateRect(hWnd, 0, 0);
    return 1;
}

