#include "syncdelay.hpp"

signed int SyncDelay::Start()
{
    int v0; // ecx
    signed int v1; // esi
    DWORD Ticks; // eax
    signed int v3; // eax
    int v4; // esi
    signed int v5; // eax
    int v6; // esi
    signed int v7; // eax
    int v8; // esi
    signed int v9; // eax
    signed int v10; // esi
    signed int v11; // eax
    int v12; // ecx
    signed int v13; // esi
    DWORD v14; // eax
    signed int v15; // eax
    signed int v16; // esi
    signed int v17; // eax
    signed int result; // eax
    int v19; // esi
    int v20; // ecx
    bool v21; // cc
    int v22; // [esp+Ch] [ebp-18h] BYREF
    int v23; // [esp+10h] [ebp-14h] BYREF
    uint32_t v24[4]; // [esp+14h] [ebp-10h] BYREF
    v0 = dword_887348;
    v1 = dwMilliseconds;
    if ( dword_887348 != -1 )
    Ticks = Timer::GetTicks();
    v0 = dword_887348;
    v3 = Ticks - dword_887348;
    if ( v3 >= v1 )
    v1 = 0;
    else
    v1 -= v3;
    dword_A8E314 += v1;
    if ( GameMode_Current[0] && GameMode_Current[0] != 5 )
    while ( 1 )
    v4 = dword_887330;
    if ( g_TacticalState != -1 )
    v5 = timeGetTime() - g_TacticalState;
    if ( v5 >= v4 )
    goto LABEL_38;
    v4 -= v5;
    if ( !v4 )
    goto LABEL_38;
    Event::Dispatch();
    if ( !g_MainGameState && g_DDraw_Active == 1 )
    break;
    LABEL_23:
    Sleep(0);
    v6 = dword_887330;
    v22 = 0;
    if ( g_TacticalState != -1 )
    v7 = timeGetTime() - g_TacticalState;
    if ( v7 >= v6 )
    goto LABEL_18;
    v6 -= v7;
    if ( v6 > 10 )
    InputManager_ProcessEvents::Vtable((int *)&MapClass_Instance, &v22, v24, &v23);
    SyncDelayClass::ProcessNetworkSync(&v22);
    ((void (__thiscall *)(LPPERSISTSTREAM))TacticalClass_Instance->lpVtbl[2].GetSizeMax)(TacticalClass_Instance);
    TacticalMap::Redraw(&MapClass_Instance);
    goto LABEL_19;
    LABEL_18:
    Sleep(0);
    LABEL_19:
    v8 = dword_887330;
    if ( g_TacticalState != -1 )
    v9 = timeGetTime() - g_TacticalState;
    if ( v9 >= v8 )
    goto LABEL_38;
    v8 -= v9;
    if ( !v8 )
    goto LABEL_38;
    goto LABEL_23;
    v10 = dwMilliseconds;
    if ( v0 != -1 )
    v11 = Timer::GetTicks() - dword_887348;
    if ( v11 >= v10 )
    goto LABEL_38;
    v10 -= v11;
    if ( v10 )
    DDraw::WaitForIdle();
    while ( 1 )
    while ( 1 )
    v12 = dword_887348;
    v13 = dwMilliseconds;
    if ( dword_887348 != -1 )
    v14 = Timer::GetTicks();
    v12 = dword_887348;
    v15 = v14 - dword_887348;
    if ( v15 >= v13 )
    goto LABEL_38;
    v13 -= v15;
    if ( !v13 )
    goto LABEL_38;
    v16 = dwMilliseconds;
    if ( v12 != -1 )
    break;
    LABEL_37:
    Sleep(v16);
    v17 = Timer::GetTicks() - dword_887348;
    if ( v17 >= v16 )
    v16 = 0;
    goto LABEL_37;
    Sleep(v16 - v17);
    LABEL_38:
    if ( (byte_ABCD94 & 1) == 0 )
    byte_ABCD94 |= 1u;
    dword_ABCD88 = Timer::GetTicks();
    dword_ABCD90 = 0;
    atexit(nullsub_23);
    result = dword_ABCD88;
    v19 = dword_ABCD90;
    if ( dword_ABCD88 == -1 )
    LABEL_43:
    if ( v19 )
    return result;
    goto LABEL_44;
    result = Timer::GetTicks() - dword_ABCD88;
    if ( result < v19 )
    v19 -= result;
    goto LABEL_43;
    LABEL_44:
    v20 = dword_ABCD40 + g_FrameCounter_Total;
    v21 = (unsigned int)(dword_ABCD40 + g_FrameCounter_Total) <= 0x7FFFFFFF;
    dword_ABCD44 = (wchar_t *)dword_ABCD40;
    dword_ABCD40 = 0;
    g_FrameCounter_Total = v20;
    ++g_FrameCounter_Samples;
    if ( !v21 )
    g_FrameCounter_Total = 0;
    g_FrameCounter_Samples = 0;
    result = Timer::GetTicks();
    dword_ABCD88 = result;
    dword_ABCD8C = v24[2];
    dword_ABCD90 = 60;
    return result;
}

