#include "powerclass.hpp"

// 0x0063F7C0
void  PowerClass::checkBlackout(PowerClass *this)
{
    RadarClass::Destru_vt53(this);
    dword_AC4E74 = LoadFileSHP(aPowerpShp, (bool *)&byte_AC4E78);
}

// 0x0063F7E0
void  PowerClass::checkLowPower(PowerClass *this)
{
    RadarClass::Destru_vt50();
    if ( byte_AC4E78 )
    __3_YAXPAX_Z(dword_AC4E74);
    byte_AC4E78 = 0;
}

void  PowerClass::updatePowerBarAnimation(PowerClass *this)
{
    signed int v2; // edi
    signed int v3; // eax
    int v4; // ecx
    signed int v5; // edi
    signed int v6; // eax
    int v7; // eax
    bool v8; // zf
    bool v9; // cc
    int v10; // eax
    int v11; // eax
    int v12; // eax
    int v13; // eax
    int v14; // eax
    int v15; // eax
    int v16; // eax
    int v17; // eax
    bool v18; // cc
    int v19; // eax
    int v20; // eax
    int v21; // eax
    int v22; // eax
    int v23; // eax
    int v24; // eax
    bool v25; // cc
    int v26; // eax
    int v27; // eax
    int v28; // eax
    int v29; // eax
    int v30; // eax
    int v31; // eax
    int v32; // ecx
    DWORD Ticks; // edi
    int v34; // eax
    int v35; // edx
    int v36; // [esp+18h] [ebp-24h] BYREF
    int v37; // [esp+1Ch] [ebp-20h] BYREF
    int v38; // [esp+20h] [ebp-1Ch] BYREF
    int v39; // [esp+24h] [ebp-18h] BYREF
    int v40; // [esp+28h] [ebp-14h] BYREF
    int v41; // [esp+2Ch] [ebp-10h] BYREF
    int v42; // [esp+34h] [ebp-8h]
    uint32_t *v43; // [esp+40h] [ebp+4h]
    uint32_t *v44; // [esp+44h] [ebp+8h]
    if ( !byte_884B8D )
    goto LABEL_66;
    if ( !*((uint8_t *)this + 5432) && *((int *)this + 1351) > 0 )
    v2 = *((uint32_t *)this + 1350);
    if ( *((uint32_t *)this + 1348) != -1 )
    v3 = Timer::GetTicks() - *((uint32_t *)this + 1348);
    if ( v3 >= v2 )
    LABEL_8:
    v4 = *((uint32_t *)this + 1351);
    *((uint8_t *)this + 5388) = 1;
    *((uint32_t *)this + 1351) = v4 - 1;
    byte_884B8E = 1;
    MapClass::MarkForRedraw(&MapClass_Instance, 0);
    *((uint32_t *)this + 1348) = Timer::GetTicks();
    *((uint32_t *)this + 1349) = v42;
    *((uint32_t *)this + 1350) = 3;
    goto LABEL_9;
    v2 -= v3;
    if ( !v2 )
    goto LABEL_8;
    LABEL_9:
    if ( (*(int (__stdcall **)(char *))(*((uint32_t *)HouseClass_Player + 9) + 36))((char *)HouseClass_Player + 36) == *((uint32_t *)this + 1359)
    && (*(int (__stdcall **)(char *))(*((uint32_t *)HouseClass_Player + 9) + 32))((char *)HouseClass_Player + 36) == *((uint32_t *)this + 1360)
    && !*((uint8_t *)this + 5432) )
    goto LABEL_66;
    *((uint8_t *)this + 5388) = 1;
    byte_884B8E = 1;
    MapClass::MarkForRedraw(&MapClass_Instance, 0);
    if ( (*(int (__stdcall **)(char *))(*((uint32_t *)HouseClass_Player + 9) + 36))((char *)HouseClass_Player + 36) != *((uint32_t *)this + 1359)
    || (*(int (__stdcall **)(char *))(*((uint32_t *)HouseClass_Player + 9) + 32))((char *)HouseClass_Player + 36) != *((uint32_t *)this + 1360) )
    *((uint8_t *)this + 5432) = 1;
    *((uint32_t *)this + 1351) = 10;
    *((uint32_t *)this + 1348) = Timer::GetTicks();
    *((uint32_t *)this + 1349) = v42;
    *((uint32_t *)this + 1350) = 3;
    *((uint32_t *)this + 1359) = (*(int (__stdcall **)(char *))(*((uint32_t *)HouseClass_Player + 9) + 36))((char *)HouseClass_Player + 36);
    *((uint32_t *)this + 1360) = (*(int (__stdcall **)(char *))(*((uint32_t *)HouseClass_Player + 9) + 32))((char *)HouseClass_Player + 36);
    PowerBar::ComputeFill(&v40, &v41, &v37);
    v5 = *((uint32_t *)this + 1354);
    if ( *((uint32_t *)this + 1352) != -1 )
    v6 = Timer::GetTicks() - *((uint32_t *)this + 1352);
    if ( v6 >= v5 )
    goto LABEL_19;
    v5 -= v6;
    if ( v5 )
    goto LABEL_66;
    LABEL_19:
    v7 = *((uint32_t *)this + 1357);
    v8 = v7 == v37;
    v9 = v7 <= v37;
    *((uint8_t *)this + 5432) = 0;
    if ( !v8 )
    *((uint8_t *)this + 5432) = 1;
    if ( !v9 )
    *((uint32_t *)this + 1357) = v7 - 1;
    PowerBar::ComputeFill(&v38, &v39, &v36);
    v10 = *((uint32_t *)this + 1357);
    if ( v10 < v36 )
    *((uint32_t *)this + 1357) = v10 + 1;
    goto LABEL_62;
    v11 = *((uint32_t *)this + 1355);
    if ( v11 < v38 )
    *((uint32_t *)this + 1355) = v11 + 1;
    goto LABEL_62;
    v12 = *((uint32_t *)this + 1356);
    if ( v12 < v39 )
    v13 = v12 + 1;
    LABEL_61:
    *((uint32_t *)this + 1356) = v13;
    goto LABEL_62;
    goto LABEL_62;
    *((uint32_t *)this + 1357) = v7 + 1;
    PowerBar::ComputeFill(&v39, &v36, &v38);
    v14 = *((uint32_t *)this + 1355);
    if ( v14 > v39 )
    *((uint32_t *)this + 1355) = v14 - 1;
    goto LABEL_62;
    v15 = *((uint32_t *)this + 1357);
    if ( v15 > v38 )
    *((uint32_t *)this + 1357) = v15 - 1;
    goto LABEL_62;
    v16 = *((uint32_t *)this + 1356);
    if ( v16 <= v36 )
    goto LABEL_62;
    LABEL_60:
    v13 = v16 - 1;
    goto LABEL_61;
    v17 = *((uint32_t *)this + 1355);
    v18 = v17 <= v40;
    if ( v17 == v40 )
    v24 = *((uint32_t *)this + 1356);
    v25 = v24 <= v41;
    if ( v24 == v41 )
    goto LABEL_62;
    *((uint8_t *)this + 5432) = 1;
    if ( !v25 )
    *((uint32_t *)this + 1356) = v24 - 1;
    PowerBar::ComputeFill(&v38, &v36, &v39);
    v26 = *((uint32_t *)this + 1357);
    if ( v26 < v39 )
    *((uint32_t *)this + 1357) = v26 + 1;
    goto LABEL_62;
    v27 = *((uint32_t *)this + 1355);
    if ( v27 < v38 )
    *((uint32_t *)this + 1355) = v27 + 1;
    goto LABEL_62;
    v28 = *((uint32_t *)this + 1356);
    if ( v28 < v36 )
    v13 = v28 + 1;
    goto LABEL_61;
    goto LABEL_62;
    *((uint32_t *)this + 1356) = v24 + 1;
    PowerBar::ComputeFill(&v39, &v36, &v38);
    v29 = *((uint32_t *)this + 1355);
    if ( v29 > v39 )
    *((uint32_t *)this + 1355) = v29 - 1;
    goto LABEL_62;
    v30 = *((uint32_t *)this + 1357);
    if ( v30 > v38 )
    *((uint32_t *)this + 1357) = v30 - 1;
    goto LABEL_62;
    v16 = *((uint32_t *)this + 1356);
    if ( v16 <= v36 )
    goto LABEL_62;
    goto LABEL_60;
    *((uint8_t *)this + 5432) = 1;
    if ( v18 )
    *((uint32_t *)this + 1355) = v17 + 1;
    PowerBar::ComputeFill(&v39, &v36, &v38);
    v22 = *((uint32_t *)this + 1355);
    if ( v22 > v39 )
    *((uint32_t *)this + 1355) = v22 - 1;
    goto LABEL_62;
    v23 = *((uint32_t *)this + 1357);
    if ( v23 > v38 )
    *((uint32_t *)this + 1357) = v23 - 1;
    goto LABEL_62;
    v16 = *((uint32_t *)this + 1356);
    if ( v16 <= v36 )
    goto LABEL_62;
    goto LABEL_60;
    *((uint32_t *)this + 1355) = v17 - 1;
    PowerBar::ComputeFill(&v38, &v36, &v39);
    v19 = *((uint32_t *)this + 1357);
    if ( v19 < v39 )
    *((uint32_t *)this + 1357) = v19 + 1;
    goto LABEL_62;
    v20 = *((uint32_t *)this + 1355);
    if ( v20 < v38 )
    *((uint32_t *)this + 1355) = v20 + 1;
    goto LABEL_62;
    v21 = *((uint32_t *)this + 1356);
    if ( v21 < v36 )
    v13 = v21 + 1;
    goto LABEL_61;
    LABEL_62:
    if ( *((uint8_t *)this + 5432) )
    v31 = PowerBar::CalcFill();
    v32 = *((uint32_t *)this + 1357) + *((uint32_t *)this + 1355) + *((uint32_t *)this + 1356);
    v39 = v31;
    v36 = v32;
    if ( v32 > v31 )
    v36 = v31;
    Ticks = Timer::GetTicks();
    v34 = Math::RoundToInt((double)v36 / (double)v39 * 5.0);
    v35 = v42;
    *((uint32_t *)this + 1352) = Ticks;
    *((uint32_t *)this + 1353) = v35;
    *((uint32_t *)this + 1354) = v34;
    LABEL_66:
    TacticalClass::MouseInput(this, v43, v44);
}

char  PowerClass::_vt34(void *this)
{
    int v1; // eax
    int v3; // [esp+4h] [ebp-1Ch] BYREF
    int v4; // [esp+8h] [ebp-18h]
    int v5; // [esp+Ch] [ebp-14h]
    int v6; // [esp+10h] [ebp-10h]
    int v7; // [esp+14h] [ebp-Ch]
    int v8; // [esp+18h] [ebp-8h]
    char v9; // [esp+1Ch] [ebp-4h]
    RadarClass::Destru_vt34((int)this);
    v1 = 0;
    if ( g_TacticalRender )
    v4 = 0;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v9 = 0;
    v3 = 999;
    v8 = 0;
    if ( !*((uint32_t *)ScenarioClass_Instance + 3374) )
    v1 = 5;
    v4 = v1 + DSurface_SidebarBounds;
    v5 = g_DSurface_SidebarBounds + 69;
    v6 = 8;
    v7 = dword_B0B504;
    HashTable::Remove((int *)g_TacticalRender, 999);
    LOBYTE(v1) = CommandClass::AddAction(g_TacticalRender, (int)&v3);
    return v1;
}

uint32_t * PowerClass::_vt04(uint32_t *Block, char a2)
{
    RadarClass::Destruct(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

