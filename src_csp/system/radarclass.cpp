#include "radarclass.hpp"

int  RadarClass::Destru_vt05(int *this)
{
    int result; // eax
    Debug::Log();
    *(this + 1152) = 140;
    *(this + 1150) = 140;
    *(this + 1145) = 0;
    *(this + 1146) = 16;
    *(this + 1147) = 48;
    *(this + 1153) = 108;
    *(this + 1151) = 108;
    *(this + 1149) = 49;
    DisplayClass::LoadTypeData(this);
    dword_B04A20 = *(this + 1149);
    dword_B04A24 = *(this + 1152);
    dword_B04A28 = *(this + 1153);
    dword_B04A30 = 223;
    result = VocClass::FindByName(aEvaIncomingtra);
    *(this + 1333) = result;
    return result;
}

void RadarClass::Destru_vt50()
{
    if ( byte_B048F9 )
    __3_YAXPAX_Z(dword_B048E0);
    byte_B048F9 = 0;
    dword_B048E0 = 0;
    if ( byte_B048F8 )
    __3_YAXPAX_Z(dword_B048AC);
    byte_B048F8 = 0;
    dword_B048AC = 0;
}

// 0x00652DE0
void  RadarClass::Destru_vt07(int this)
{
    int v2; // eax
    DisplayClass::SetSize(this);
    Debug::Log();
    *(uint32_t *)(this + 5292) = 0;
    *(uint32_t *)(this + 5296) = 0;
    *(uint8_t *)(this + 5309) = 0;
    *(uint8_t *)(this + 5308) = 0;
    *(uint32_t *)(this + 5372) = 0;
    *(uint8_t *)(this + 5336) = 0;
    v2 = *(uint32_t *)(this + 4644);
    *(uint8_t *)(this + 5337) = 1;
    (*(void (**)(void))(v2 + 12))();
    (*(void (__thiscall **)(int))(*(uint32_t *)(this + 4700) + 12))(this + 4700);
    Debug::Log();
}

int  RadarClass::Destru_vt53(uint32_t *this)
{
    int v2; // eax
    int v3; // ecx
    int v4; // eax
    int result; // eax
    Debug::Log();
    (*(void (__thiscall **)(uint32_t *))(*this + 200))(this);
    if ( *((uint32_t *)ScenarioClass_Instance + 3374) )
    *(this + 1148) = 16;
    dword_B04A00 = *(this + 1145) + 14;
    v2 = *(this + 1146) + 5;
    dword_B04A04 = v2;
    v3 = *(this + 1145) + 86;
    else
    *(this + 1148) = 16;
    dword_B04A00 = *(this + 1145) + 11;
    v2 = *(this + 1146) + 4;
    dword_B04A04 = v2;
    v3 = *(this + 1145) + 83;
    dword_B048C8 = v3;
    dword_B048CC = v2;
    dword_B04A1C = *(this + 1148);
    dword_B048E0 = LoadFileSHP(off_8391F4, (bool *)&byte_B048F9);
    dword_B048AC = LoadFileSHP(off_8391F8, (bool *)&byte_B048F8);
    dword_B04A08 = *((__int16 *)dword_B048E0 + 1);
    dword_B04A0C = *((__int16 *)dword_B048E0 + 2);
    dword_B048D0 = *((__int16 *)dword_B048AC + 1);
    v4 = *((__int16 *)dword_B048AC + 2);
    dword_B04A38 = (int)dword_B0FA68;
    dword_B048D4 = v4;
    result = (unsigned __int8)dword_B0FA1C >> g_BitShift_Green_0 << g_BitShift_Red;
    *(this + 1154) = result
    | (BYTE1(dword_B0FA1C) >> g_BitMask_Blue << g_BitMask_Green)
    | (BYTE2(dword_B0FA1C) >> g_BitMask_Red << g_BitShift_Blue);
    return result;
}

char  RadarClass::Destru_vt16(int this, char a2)
{
    int v2; // eax
    char v3; // bl
    bool v5; // al
    char v6; // cl
    bool v7; // al
    void *v8; // edi
    int *v9; // eax
    int v10; // eax
    signed int v11; // edi
    signed int v12; // eax
    DWORD Ticks; // eax
    int v14; // edx
    int v15; // eax
    int v16; // ecx
    int v17; // edi
    int v18; // eax
    int v19; // edi
    int *v20; // eax
    int v21; // ecx
    char v22; // al
    int v23; // edi
    int *v24; // eax
    int v25; // eax
    int v26; // ecx
    int v27; // edx
    int v28; // edi
    int v29; // edi
    int *v30; // eax
    int *v31; // ebp
    int v32; // eax
    int v33; // ecx
    int v34; // edi
    int v35; // ebx
    int v36; // edi
    int v37; // edx
    int *v38; // edi
    int v39; // ecx
    int v40; // esi
    int v41; // ebx
    int v42; // esi
    int v43; // edx
    int v45; // [esp+10h] [ebp-38h] BYREF
    int v46; // [esp+14h] [ebp-34h]
    int v47; // [esp+18h] [ebp-30h] BYREF
    int v48; // [esp+1Ch] [ebp-2Ch]
    int v49; // [esp+20h] [ebp-28h]
    int v50; // [esp+24h] [ebp-24h]
    char v51[16]; // [esp+28h] [ebp-20h] BYREF
    char v52[16]; // [esp+38h] [ebp-10h] BYREF
    LOBYTE(v2) = ArmageddonMode;
    v3 = 0;
    if ( ArmageddonMode )
    *(uint8_t *)(this + 5338) = 0;
    *(uint8_t *)(this + 5337) = 0;
    return v2;
    v5 = *(uint8_t *)(this + 5338) == 1 || a2 == 1;
    v6 = *(uint8_t *)(this + 5337);
    *(uint8_t *)(this + 5338) = v5;
    v7 = v6 == 1 || v5;
    *(uint8_t *)(this + 5337) = v7;
    if ( v7 )
    v8 = dword_B0F9E0;
    v45 = *(uint32_t *)(this + 4580);
    v46 = *(uint32_t *)(this + 4584);
    v9 = (int *)(*(int (__thiscall **)(int, int *))(*(uint32_t *)DSurface_Sidebar + 120))(DSurface_Sidebar, &v47);
    DrawToSurfaceSHP(DSurface_Sidebar, g_SidebarConfig, (int)v8, 0, &v45, v9, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
    ShapeButton::Draw((int)dword_B04978, 1);
    ShapeButton::Draw((int)dword_B04910, 1);
    v10 = *(uint32_t *)(this + 5292);
    if ( v10 != 1 )
    if ( !v10 )
    goto LABEL_25;
    v11 = *(uint32_t *)(this + 5384);
    if ( *(uint32_t *)(this + 5376) != -1 )
    v12 = Timer::GetTicks() - *(uint32_t *)(this + 5376);
    if ( v12 >= v11 )
    goto LABEL_19;
    v11 -= v12;
    if ( v11 )
    goto LABEL_25;
    LABEL_19:
    Ticks = Timer::GetTicks();
    v14 = v48;
    *(uint32_t *)(this + 5376) = Ticks;
    v15 = *(uint32_t *)(this + 5292);
    *(uint32_t *)(this + 5380) = v14;
    *(uint32_t *)(this + 5384) = 4;
    v16 = *(uint32_t *)(this + 5372);
    v3 = 1;
    if ( v15 == 2 )
    *(uint32_t *)(this + 5372) = v16 - 1;
    if ( v16 - 1 > 0 )
    goto LABEL_25;
    v17 = 0;
    *(uint32_t *)(this + 5292) = 0;
    Mixer::ReleaseChannel((int **)(this + 5312));
    else
    v17 = 32;
    *(uint32_t *)(this + 5372) = v16 + 1;
    if ( v16 + 1 < 32 )
    goto LABEL_25;
    Mixer::ReleaseChannel((int **)(this + 5312));
    *(uint32_t *)(this + 5292) = 1;
    *(uint8_t *)(this + 5338) = 1;
    *(uint32_t *)(this + 5372) = v17;
    LABEL_25:
    if ( *(uint32_t *)(this + 5292) != 1 && (*(uint8_t *)(this + 5337) == 1 || v3) )
    v18 = *(uint32_t *)(this + 5372);
    if ( v18 >= 0 && v18 < *(__int16 *)(dword_B04A38 + 6) )
    v19 = VtableStub::72F510();
    v45 = *(uint32_t *)(this + 4580);
    v46 = *(uint32_t *)(this + 4588);
    v20 = (int *)(*(int (__thiscall **)(int, int *))(*(uint32_t *)DSurface_Sidebar + 120))(DSurface_Sidebar, &v47);
    DrawToSurfaceSHP(
    DSurface_Sidebar,
    v19,
    dword_B04A38,
    *(uint32_t *)(this + 5372),
    &v45,
    v20,
    0,
    0,
    0,
    0,
    1000,
    0,
    0,
    0,
    0,
    0);
    v21 = *(uint32_t *)(this + 4588);
    *(uint32_t *)(this + 4620) = *(uint32_t *)(this + 4580);
    *(uint32_t *)(this + 4624) = v21;
    *(uint32_t *)(this + 4628) = 168;
    *(uint32_t *)(this + 4632) = 110;
    sub_65FDD0();
    Radar::RenderMinimap(this);
    if ( *(uint32_t *)(this + 5292) == 1 )
    switch ( *(uint32_t *)(this + 5296) )
    case 1:
    case 4:
    break;
    case 2:
    if ( *(uint8_t *)(this + 5337) )
    v22 = *(uint8_t *)(this + 5338);
    *(uint8_t *)(this + 5337) = 0;
    if ( v22 )
    v23 = VtableStub::72F510();
    v45 = *(uint32_t *)(this + 4580);
    v46 = *(uint32_t *)(this + 4588);
    v24 = (int *)(*(int (__thiscall **)(int, char *))(*(uint32_t *)DSurface_Sidebar + 120))(DSurface_Sidebar, v51);
    DrawToSurfaceSHP(DSurface_Sidebar, v23, dword_B04A38, 0x20u, &v45, v24, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
    RenderScoreboardSidebar((uint32_t *)this, 1);
    goto LABEL_40;
    RenderScoreboardSidebar((uint32_t *)this, 1);
    v25 = *(uint32_t *)(this + 4592);
    v26 = *(uint32_t *)(this + 4596);
    v27 = *(uint32_t *)(this + 4608);
    v28 = *(uint32_t *)(this + 4612);
    goto LABEL_41;
    break;
    case 3:
    Game::ManageGameSpeed(this);
    break;
    default:
    if ( *(uint8_t *)(this + 5337) )
    *(uint8_t *)(this + 5337) = 0;
    v29 = VtableStub::72F510();
    v47 = *(uint32_t *)(this + 4580);
    v48 = *(uint32_t *)(this + 4588);
    v30 = (int *)(*(int (__thiscall **)(int, char *))(*(uint32_t *)DSurface_Sidebar + 120))(DSurface_Sidebar, v52);
    DrawToSurfaceSHP(DSurface_Sidebar, v29, dword_B04A38, 0, &v47, v30, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
    LABEL_40:
    v25 = *(uint32_t *)(this + 4580);
    v26 = *(uint32_t *)(this + 4588);
    v27 = 168;
    v28 = 110;
    LABEL_41:
    *(uint32_t *)(this + 4620) = v25;
    *(uint32_t *)(this + 4624) = v26;
    *(uint32_t *)(this + 4628) = v27;
    *(uint32_t *)(this + 4632) = v28;
    break;
    if ( *(uint8_t *)(this + 5338) )
    *(uint8_t *)(this + 5338) = 0;
    ShapeButton::Draw((int)dword_B0B3A0, 1);
    ShapeButton::Draw((int)dword_B07DF8, 1);
    if ( byte_B049CC )
    v31 = (int *)(this + 4620);
    if ( *(int *)(this + 4628) <= 0 || *(int *)(this + 4632) <= 0 )
    v32 = dword_B04A00;
    v33 = dword_B04A04;
    v37 = dword_B04A08;
    v36 = dword_B04A0C;
    else if ( dword_B04A08 <= 0 || dword_B04A0C <= 0 )
    v32 = *v31;
    v33 = *(uint32_t *)(this + 4624);
    v37 = *(uint32_t *)(this + 4628);
    v36 = *(uint32_t *)(this + 4632);
    else
    v32 = *v31;
    v33 = *(uint32_t *)(this + 4624);
    v34 = *(uint32_t *)(this + 4628);
    v49 = v34;
    v50 = *(uint32_t *)(this + 4632);
    if ( v32 > dword_B04A00 )
    v34 += v32 - dword_B04A00;
    v32 = dword_B04A00;
    v49 = v34;
    if ( v33 > dword_B04A04 )
    v35 = v33 - dword_B04A04 + v50;
    v33 = dword_B04A04;
    v50 = v35;
    if ( v32 + v34 < dword_B04A00 + dword_B04A08 )
    v49 = dword_B04A08 - v32 + dword_B04A00 + 1;
    if ( v50 + v33 >= dword_B04A04 + dword_B04A0C )
    v36 = v50;
    else
    v36 = dword_B04A04 - v33 + dword_B04A0C + 1;
    v37 = v49;
    *v31 = v32;
    *(uint32_t *)(this + 4624) = v33;
    *(uint32_t *)(this + 4628) = v37;
    *(uint32_t *)(this + 4632) = v36;
    g_TooltipActive = 1;
    LOBYTE(v2) = byte_B04964;
    if ( byte_B04964 )
    v38 = (int *)(this + 4620);
    if ( *(int *)(this + 4628) <= 0 || *(int *)(this + 4632) <= 0 )
    v2 = dword_B048C8;
    v39 = dword_B048CC;
    v43 = dword_B048D0;
    v42 = dword_B048D4;
    else if ( dword_B048D0 <= 0 || dword_B048D4 <= 0 )
    v2 = *v38;
    v39 = *(uint32_t *)(this + 4624);
    v43 = *(uint32_t *)(this + 4628);
    v42 = *(uint32_t *)(this + 4632);
    else
    v2 = *v38;
    v39 = *(uint32_t *)(this + 4624);
    v40 = *(uint32_t *)(this + 4628);
    v49 = v38[2];
    v50 = v38[3];
    if ( v2 > dword_B048C8 )
    v40 += v2 - dword_B048C8;
    v2 = dword_B048C8;
    v49 = v40;
    if ( v39 > dword_B048CC )
    v41 = v39 - dword_B048CC + v50;
    v39 = dword_B048CC;
    v50 = v41;
    if ( v2 + v40 < dword_B048C8 + dword_B048D0 )
    v49 = dword_B048D0 - v2 + dword_B048C8 + 1;
    v42 = v50;
    if ( v50 + v39 < dword_B048CC + dword_B048D4 )
    v42 = dword_B048D4 + dword_B048CC - v39 + 1;
    v43 = v49;
    *v38 = v2;
    v38[1] = v39;
    v38[2] = v43;
    v38[3] = v42;
    g_TooltipActive = 1;
    return v2;
}

char  RadarClass::Destru_vt34(int this)
{
    int v2; // esi
    char result; // al
    int v4; // [esp+Ch] [ebp-1Ch] BYREF
    int v5; // [esp+10h] [ebp-18h]
    int v6; // [esp+14h] [ebp-14h]
    int v7; // [esp+18h] [ebp-10h]
    int v8; // [esp+1Ch] [ebp-Ch]
    char *v9; // [esp+20h] [ebp-8h]
    char v10; // [esp+24h] [ebp-4h]
    DisplayClass::Render();
    v2 = byte_A8EB7C != 0 ? g_Map_VisibleRectOffset : 0;
    dword_B049BC = -v2;
    Rect_Point::Set(dword_B04978, v2 + dword_B04A00, dword_B04A04);
    VectorClass_ptr_ConvertClass::MarkDirty(dword_B04978);
    dword_B04954 = -v2;
    Rect_Point::Set(dword_B04910, v2 + dword_B048C8, dword_B048CC);
    VectorClass_ptr_ConvertClass::MarkDirty(dword_B04910);
    Rect_Point::Set(dword_B04A10, v2 + *(uint32_t *)(this + 4592), *(uint32_t *)(this + 4596));
    VectorClass_ptr_ConvertClass::MarkDirty(dword_B04A10);
    v10 = 0;
    v4 = 242;
    v9 = aTipBriefingbut;
    if ( GameMode_Current[0] )
    v9 = aTipDiplomacybu;
    v5 = dword_B04984;
    v8 = dword_B04990;
    v6 = dword_B04988;
    v7 = dword_B0498C;
    HashTable::Remove((int *)g_TacticalRender, 242);
    CommandClass::AddAction(g_TacticalRender, (int)&v4);
    v5 = dword_B0491C;
    v6 = dword_B04920;
    v4 = 243;
    v9 = aTipOptionsbutt;
    v7 = dword_B04924;
    v8 = dword_B04928;
    HashTable::Remove((int *)g_TacticalRender, 243);
    result = CommandClass::AddAction(g_TacticalRender, (int)&v4);
    *(uint8_t *)(this + 5338) = 1;
    return result;
}

char  RadarClass::UpdateFoundationShapesCustom(float *this)
{
    float *v1; // ebp
    int v2; // ebx
    float *v3; // esi
    int v4; // edi
    double v5; // st7
    int v6; // ebp
    double v7; // st7
    double v8; // st7
    int v9; // eax
    int v10; // ecx
    int v11; // edi
    int v12; // edx
    int v13; // ebx
    int v14; // ebp
    int v15; // ecx
    int v16; // edx
    int v19; // [esp+14h] [ebp-14h]
    int v20; // [esp+18h] [ebp-10h]
    int v21; // [esp+1Ch] [ebp-Ch]
    int v22; // [esp+20h] [ebp-8h]
    int v23; // [esp+24h] [ebp-4h]
    v1 = this;
    v2 = 0;
    v3 = this + 1182;
    v22 = 0;
    while ( 1 )
    (*(void (__thiscall **)(float *))(*(uint32_t *)v3 + 12))(v3);
    v4 = *(int *)((char *)dword_819310 + v2);
    if ( *(int *)((char *)dword_8192B8 + v2) == 1 )
    v5 = v1[1314] + 0.5;
    if ( v5 < 1.0 )
    v5 = 1.0;
    v6 = Math::RoundToInt(v5);
    v19 = v6;
    else
    v7 = (double)*(int *)((char *)dword_8192B8 + v2) * v1[1314] + 0.5;
    if ( v7 < 2.0 )
    v7 = 2.0;
    v19 = Math::RoundToInt(v7);
    v6 = v19;
    if ( v4 == 1 )
    v8 = *(this + 1314) + 0.5;
    if ( v8 < 1.0 )
    v8 = 1.0;
    else
    v8 = (double)v4 * *(this + 1314) + 0.5;
    if ( v8 < 2.0 )
    v8 = 2.0;
    v9 = Math::RoundToInt(v8);
    v10 = v9;
    v11 = 0;
    v20 = v9;
    v12 = v9 + v6 - 1;
    v23 = v12;
    if ( v12 > 0 )
    v21 = 0;
    while ( 1 )
    if ( v11 >= v10 )
    v9 = v11 - 2 * v10 + 2;
    else
    v9 = v21;
    if ( v11 >= v6 )
    v13 = 2 * v6 - v11 - 2;
    else
    v13 = v11;
    v14 = v9;
    if ( v9 <= v13 )
    do
    v15 = *((uint32_t *)v3 + 2);
    if ( *((uint32_t *)v3 + 4) < v15
    || ((LOBYTE(v9) = *((uint8_t *)v3 + 13), (uint8_t)v9) || !v15)
    && (v9 = *((uint32_t *)v3 + 5), v9 > 0)
    && (LOBYTE(v9) = (*(int (__thiscall **)(float *, int, uint32_t))(*(uint32_t *)v3 + 8))(v3, v15 + v9, 0),
    (uint8_t)v9) )
    v9 = *((uint32_t *)v3 + 4);
    v16 = *((uint32_t *)v3 + 1);
    *((uint32_t *)v3 + 4) = v9 + 1;
    *(uint32_t *)(v16 + 8 * v9) = v14;
    *(uint32_t *)(v16 + 8 * v9 + 4) = v11;
    ++v14;
    while ( v14 <= v13 );
    v10 = v20;
    v12 = v23;
    ++v11;
    --v21;
    if ( v11 >= v12 )
    break;
    v6 = v19;
    v2 = v22;
    v2 += 4;
    v3 += 6;
    v22 = v2;
    if ( v2 >= 88 )
    break;
    v1 = this;
    return v9;
}

uint32_t * RadarClass::Destru_vt04(uint32_t *Block, char a2)
{
    char *v3; // esi
    int v4; // ebp
    void *v5; // eax
    void *v6; // eax
    void *v7; // eax
    *Block = &RadarClass::`vftable';
    AudioFileClass::Release(Block + 1328);
    TacticalClass::FreeResources((int)Block);
    v3 = (char *)(Block + 1314);
    v4 = 22;
    do
    v5 = (void *)*((uint32_t *)v3 - 5);
    v3 -= 24;
    *(uint32_t *)v3 = &VectorClass<Point2D>::`vftable';
    if ( v5 && v3[13] )
    __3_YAXPAX_Z(v5);
    *((uint32_t *)v3 + 1) = 0;
    --v4;
    v3[13] = 0;
    *((uint32_t *)v3 + 2) = 0;
    while ( v4 );
    v6 = (void *)*(Block + 1176);
    *(Block + 1175) = &VectorClass<Point2D>::`vftable';
    if ( v6 && *((uint8_t *)Block + 4713) )
    __3_YAXPAX_Z(v6);
    *(Block + 1176) = 0;
    *((uint8_t *)Block + 4713) = 0;
    *(Block + 1177) = 0;
    v7 = (void *)*(Block + 1162);
    *(Block + 1161) = &VectorClass<Cell>::`vftable';
    if ( v7 && *((uint8_t *)Block + 4657) )
    __3_YAXPAX_Z(v7);
    *(Block + 1162) = 0;
    *((uint8_t *)Block + 4657) = 0;
    *(Block + 1163) = 0;
    MapClass::Destruct((char *)Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

int  RadarClass::DrawBlip(uint32_t *this, char a2, int a3)
{
    char v3; // dl
    int result; // eax
    int v6; // edi
    int v7; // ebp
    _WORD *v8; // esi
    __int16 v9; // dx
    uint32_t *v10; // eax
    uint32_t *v11; // eax
    void *v12; // eax
    __int16 v13; // dx
    int v14; // edi
    int v15; // ebp
    int *v16; // eax
    int v17; // esi
    int v18; // ecx
    bool v19; // zf
    int v20; // [esp-Ch] [ebp-5Ch]
    int v21; // [esp-8h] [ebp-58h]
    void*375 *v22; // [esp-4h] [ebp-54h]
    int v23; // [esp+10h] [ebp-40h] BYREF
    int v24; // [esp+14h] [ebp-3Ch] BYREF
    int v25; // [esp+18h] [ebp-38h]
    int v26; // [esp+1Ch] [ebp-34h]
    int v27; // [esp+20h] [ebp-30h]
    int v28; // [esp+24h] [ebp-2Ch]
    int i; // [esp+28h] [ebp-28h]
    int v30; // [esp+2Ch] [ebp-24h]
    _WORD *v31; // [esp+30h] [ebp-20h]
    int v32[2]; // [esp+34h] [ebp-1Ch] BYREF
    int v33; // [esp+3Ch] [ebp-14h] BYREF
    uint32_t v34[3]; // [esp+44h] [ebp-Ch] BYREF
    v3 = 0;
    for ( i = 0; i < 8; i += 2 )
    result = a3;
    v24 = a3;
    v6 = 0;
    v28 = *(uint32_t *)(g_RadarBlipPool + 1312);
    v7 = *(int *)(v28 + 1464) >> 8;
    if ( v7 > 0 )
    v8 = (_WORD *)(4 * (v3 & 7) + 9041544);
    v31 = v8;
    while ( 1 )
    v9 = HIWORD(v24) + v8[1];
    LOWORD(v25) = *v8 + result;
    HIWORD(v25) = v9;
    v24 = v25;
    v10 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v24);
    v11 = Cell::IsBridge(v10);
    if ( v11 )
    if ( *(uint8_t *)(v11[328] + 5824) )
    result = House::IsHumanPlayer((void*375 *)v11[135]);
    if ( (uint8_t)result )
    break;
    v22 = HouseClass_Player;
    v21 = v28;
    v20 = *(uint32_t *)(v28 + 1660);
    v12 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v24);
    LOBYTE(result) = CellClass::IsPassable((int)v12, v20, v21, (int)v22);
    if ( !(uint8_t)result )
    goto LABEL_14;
    if ( ++v6 >= v7 )
    goto LABEL_14;
    LOWORD(result) = v24;
    if ( v6 > 0 )
    v13 = HIWORD(a3) + v8[1];
    LOWORD(v26) = a3 + *v8;
    v30 = a2 != 0 ? 67078 : 132614;
    HIWORD(v26) = v13;
    v23 = v26;
    v28 = v6;
    do
    v14 = -1 - 15 * *((char *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v23) + 283);
    v15 = -2 - 15 * *((char *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v23) + 283);
    v34[1] = (((SHIWORD(v23) << 8) + 128) / 256) << 8;
    v34[0] = ((((__int16)v23 << 8) + 128) / 256) << 8;
    v34[2] = 0;
    v16 = Coord::To_ScreenRaw(&v33, v34);
    v17 = *(this + 45);
    v18 = v16[1];
    v32[0] = *v16 - *(this + 44);
    v32[1] = v14 + v18 - v17;
    DrawToSurfaceSHP(
    DSurface_Hidden_2,
    FileSystem_THEATER_PAL,
    dword_8A03FC,
    0,
    v32,
    &DSurface_ViewBounds,
    v30,
    0,
    v15,
    0,
    1000,
    0,
    0,
    0,
    0,
    0);
    LOWORD(v27) = v23 + *v31;
    HIWORD(v27) = HIWORD(v23) + v31[1];
    result = v28 - 1;
    v19 = v28 == 1;
    v23 = v27;
    --v28;
    while ( !v19 );
    LABEL_14:
    v3 = i + 2;
    return result;
}

