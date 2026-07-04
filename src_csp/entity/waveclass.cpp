#include "waveclass.hpp"

void ** WaveClass::Constructor(void **this, int *a2, uint32_t *a3, void *a4, void *a5, void *a6)
{
    int v7; // edx
    int v9; // eax
    int v10; // eax
    uint32_t *v11; // edx
    int v12; // eax
    int v13; // edx
    int v14; // edx
    ObjectClass::ctor(this);
    *(this + 78) = 0;
    *(this + 80) = 0;
    *(this + 43) = a6;
    *(this + 44) = a5;
    *((uint8_t *)this + 300) = 1;
    *((uint8_t *)this + 301) = 0;
    *(this + 76) = (void *)100;
    *(this + 77) = 0;
    *(this + 79) = 0;
    *(this + 81) = 0;
    *(this + 82) = 0;
    *(this + 83) = 0;
    *(this + 104) = 0;
    *(this + 105) = 0;
    *(this + 106) = 0;
    *(this + 116) = 0;
    *(this + 117) = a4;
    FrameSnapshot::Init((_WORD *)this + 236);
    *(this + 125) = 0;
    *(this + 126) = (void *)5;
    *((uint8_t *)this + 508) = 1;
    *((uint8_t *)this + 509) = 0;
    *(this + 124) = &VectorClass<CellClass *>::`vftable';
    *(this + 125) = __2_YAPAXI_Z(0x14u);
    *((uint8_t *)this + 509) = 1;
    *(this + 124) = &DynamicVectorClass<CellClass *>::`vftable';
    *(this + 129) = (void *)10;
    *(this + 128) = 0;
    *this = &WaveClass::`vftable';
    *(this + 1) = &WaveClass::`vftable';
    *(this + 2) = &WaveClass::`vftable';
    *(this + 3) = &off_7F6BC8;
    v7 = a2[1] - a3[1];
    if ( Math::Sqrt((double)((*a2 - *a3) * (*a2 - *a3) + v7 * v7)) >= 240.0 )
    AbstractClass::GenerateUniqueID((int)(this + 1));
    if ( dword_A8EC48 < dword_A8EC40
    || (byte_A8EC45 || !dword_A8EC40)
    && dword_A8EC4C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(dword_A8EC38 + 8))(
    &dword_A8EC38,
    dword_A8EC40 + dword_A8EC4C,
    0) )
    v9 = dword_A8EC48++;
    *((uint32_t *)dword_A8EC3C + v9) = this;
    if ( !byte_B725CC )
    Voxel::InitDistanceTable();
    if ( *(this + 44) == (void *)3 )
    Voxel::LightRender(this, a2, (int)a3);
    else
    Voxel::SectionProject(this, a2, (int)a3);
    *(this + 106) = 0;
    *(this + 115) = (void *)CalcMathFacing8(this + 51, this + 57);
    WaveClass::DrawWave(this + 45, 0);
    v10 = (int)*(this + 44);
    if ( v10 > 0 && v10 <= 2 )
    v11 = *(this + 83);
    v12 = (int)*(this + 55);
    *(this + 78) = 0;
    *(this + 79) = (void *)1072693248;
    *(this + 116) = (void *)160;
    *v11 = v12;
    v11[1] = *(this + 56);
    v13 = (int)*(this + 83);
    *(uint32_t *)(v13 + 8) = *(this + 53);
    *(uint32_t *)(v13 + 12) = *(this + 54);
    v14 = (int)*(this + 83);
    *(uint32_t *)(v14 + 16) = *(this + 57);
    *(uint32_t *)(v14 + 20) = *(this + 58);
    Voxel::TransformMatrix((int)this);
    return this;
    else
    ObjectClass::Destroy((void*374 *)this);
    return this;
}

char  WaveClass::DamageArea(int *this, uint32_t *a2)
{
    int v3; // eax
    uint32_t *v4; // ecx
    uint32_t *v5; // edi
    int v6; // eax
    int v7; // ebx
    int v8; // esi
    int v9; // eax
    int v10; // eax
    int v11; // esi
    int v12; // esi
    int v13; // edx
    int v15; // [esp+14h] [ebp-8h]
    int v16; // [esp+18h] [ebp-4h] BYREF
    v3 = *(this + 117);
    if ( v3 )
    v4 = a2;
    LOWORD(a2) = *a2 / 256;
    HIWORD(a2) = v4[1] / 256;
    v5 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2);
    v6 = (*(int (__thiscall **)(uint32_t, uint32_t))(*(uint32_t *)*(this + 117) + 1016))(*(this + 117), 0);
    v7 = *(uint32_t *)v6;
    v15 = *(uint32_t *)(*(uint32_t *)v6 + 172);
    v16 = *(uint32_t *)(*(uint32_t *)v6 + 152);
    if ( (v5[80] & 0x100) != 0 && *(this + 47) >= dword_B725C8 * (*((char *)v5 + 283) + 4) )
    v8 = v5[58];
    else
    v8 = v5[57];
    for ( ; v8; v8 = *(uint32_t *)(v8 + 48) )
    v9 = *(this + 117);
    if ( v8 != v9 && *(uint8_t *)(v8 + 144) && *(uint8_t *)(v8 + 116) && !*(uint8_t *)(v8 + 129) && *(int *)(v8 + 108) > 0 )
    (*(void (__thiscall **)(int, int *, uint32_t, int, int, uint32_t, uint32_t, uint32_t))(*(uint32_t *)v8 + 364))(
    v8,
    &v16,
    0,
    v15,
    v9,
    0,
    0,
    0);
    v10 = v5[17];
    if ( v10 != -1 )
    v11 = *(uint32_t *)&BuildingTypeClass_Array->gap0[4 * v10];
    if ( *(uint8_t *)(v11 + 689) )
    a2 = (uint32_t *)v5[9];
    CellChainReact(&a2);
    if ( *(uint8_t *)(v11 + 680) )
    BuildingClass::SellEffects((int)v5, *(uint32_t *)(v7 + 152));
    LOBYTE(v3) = CellClass::IsActiveOrNext(v5);
    if ( (uint8_t)v3 )
    v12 = RulesClass_Instance[1].RadarEventVisibilityDurations[0];
    v3 = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 99);
    if ( v3 < v12 )
    LOBYTE(v3) = LayerClass::DestroyCliff((int *)&MapClass_Instance, v13, (int)v5);
    return v3;
}

int  WaveClass::_vt10(int this, int a2, int a3)
{
    int result; // eax
    Object::Unlink((void*374 *)this);
    result = 0;
    if ( *(uint32_t *)(this + 468) == a2 )
    *(uint32_t *)(this + 468) = 0;
    if ( *(uint32_t *)(this + 172) == a2 )
    *(uint32_t *)(this + 172) = 0;
    return result;
}

int  WaveClass::_vt05(#374 *this, int a2, int a3)
{
    int v3; // ebx
    int v4; // edi
    int Register; // ebp
    int v6; // eax
    int v7; // ecx
    int v8; // eax
    int v9; // eax
    int v10; // edx
    int v11; // esi
    int v13; // [esp+28h] [ebp-4h] BYREF
    v3 = a3;
    v4 = a2;
    Register = BuildingClass::SaveLoad_Register(this);
    if ( Register >= 0 )
    if ( v4 )
    ObjectClass::Init((uint32_t *)v4, (int)&a3);
    *(uint32_t *)(v4 + 332) = 0;
    *(uint32_t *)(v4 + 424) = 0;
    FrameSnapshot::Init((_WORD *)(v4 + 472));
    WaveClass::Constructor_7632D0((uint32_t *)(v4 + 496), 0, 0);
    *(uint32_t *)v4 = &WaveClass::`vftable';
    *(uint32_t *)(v4 + 4) = &WaveClass::`vftable';
    *(uint32_t *)(v4 + 8) = &WaveClass::`vftable';
    *(uint32_t *)(v4 + 12) = &off_7F6BC8;
    *(uint32_t *)(v4 + 332) = *(uint32_t *)(v4 + 176) == 3 ? v4 + 384 : v4 + 336;
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v4 + 172));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v4 + 468));
    Register = (*(int (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v3 + 12))(v3, &a2, 4, 0);
    if ( Register >= 0 )
    v6 = a2;
    a3 = 0;
    if ( a2 <= 0 )
    LABEL_17:
    v11 = 0;
    if ( v6 > 0 )
    do
    ObjectPtr::RegisterForTracking(
    (int)&SwizzleManagerClass_Instance,
    (int *)(*(uint32_t *)(v4 + 500) + 4 * v11++));
    while ( v11 < a2 );
    else
    while ( 1 )
    Register = (*(int (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v3 + 12))(v3, &v13, 4, 0);
    if ( Register < 0 )
    break;
    v7 = *(uint32_t *)(v4 + 504);
    if ( *(uint32_t *)(v4 + 512) < v7
    || (*(uint8_t *)(v4 + 509) || !v7)
    && (v8 = *(uint32_t *)(v4 + 516), v8 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, uint32_t))(*(uint32_t *)(v4 + 496) + 8))(v4 + 496, v7 + v8, 0) )
    v9 = *(uint32_t *)(v4 + 512);
    v10 = *(uint32_t *)(v4 + 500);
    *(uint32_t *)(v4 + 512) = v9 + 1;
    *(uint32_t *)(v10 + 4 * v9) = v13;
    v6 = a2;
    if ( ++a3 >= a2 )
    goto LABEL_17;
    return Register;
}

int __stdcall WaveClass::_vt06(int *a1, int *a2, int a3)
{
    int v3; // edx
    int result; // eax
    int i; // ebx
    AbstractClass::SaveLoad_Prefix(a1, a2, a3);
    v3 = *a2;
    a3 = a1[128];
    result = (*(int (__stdcall **)(int *, int *, int, uint32_t))(v3 + 16))(a2, &a3, 4, 0);
    if ( result >= 0 )
    for ( i = 0; i < a3; ++i )
    result = (*(int (__stdcall **)(int *, int, int, uint32_t))(*a2 + 16))(a2, a1[125] + 4 * i, 4, 0);
    if ( result < 0 )
    break;
    return result;
}

int __stdcall WaveClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 237448653;
    a2[1] = 298949647;
    a2[2] = -1610610249;
    a2[3] = -777003740;
    return 0;
}

int WaveClass::_vt12()
{
    return 576;
}

int WaveClass::_vt30()
{
    return 3;
}

int WaveClass::_vt34()
{
    return 0;
}

char  WaveClass::_vt54(uint8_t *this, uint32_t *a2, int a3)
{
    int v4; // ebp
    void *v5; // eax
    int v6; // edx
    int v8; // [esp-10h] [ebp-18h]
    if ( !WTFMode )
    return 0;
    if ( !*(this + 129) )
    return 0;
    if ( *(this + 116) )
    return 0;
    if ( !IKnowWhatImDoing )
    v4 = *(uint32_t *)this;
    v8 = a2[2];
    v5 = Coord::To_Cell(&MapClass_Instance, a2);
    if ( (*(int (__thiscall **)(uint8_t *, void *, int, int, uint32_t, int))(v4 + 428))(this, v5, -1, v8, 0, 1) )
    return 0;
    v6 = *(uint32_t *)this;
    *(this + 129) = 0;
    *(this + 128) = 0;
    (*(void (__thiscall **)(uint8_t *, uint32_t *))(v6 + 436))(this, a2);
    if ( !(*(unsigned __int8 (__thiscall **)(uint8_t *, int))(*(uint32_t *)this + 292))(this, 1) )
    return 0;
    if ( *(this + 144) )
    if ( (*(int (__thiscall **)(uint8_t *))(*(uint32_t *)this + 120))(this) != -1 )
    Targeting::Readd(this);
    ObjectClass::SetDeployState((int)this, 0);
    return 1;
}

char  WaveClass::_vt53(uint8_t *this)
{
    if ( !WTFMode || *(this + 129) )
    return 0;
    (*(void (__thiscall **)(uint8_t *, int))(*(uint32_t *)this + 220))(this, 1);
    (*(void (__thiscall **)(uint8_t *, uint32_t))(*(uint32_t *)this + 292))(this, 0);
    RemoveTarget((int)this);
    VectorClass::RemoveItem(&g_GameConfigManager, (int)this);
    (*(void (__thiscall **)(uint8_t *))(*(uint32_t *)this + 284))(this);
    *(this + 129) = 1;
    *(this + 128) = 0;
    return 1;
}

void  WaveClass::_vt69(uint32_t *this, uint32_t *a2, int *a3)
{
    if ( (*(uint32_t *)ScenarioClass_Instance & 0x1000) == 0
    || !Game::Stub3((int)(this + 45))
    || !Game::Stub3((int)(this + 48)) )
    switch ( *(this + 44) )
    case 0:
    Voxel::ShadowCalc((int)this, a2, a3);
    break;
    case 1:
    case 2:
    Voxel::FaceDraw(this, a2, a3);
    break;
    case 3:
    Surface::RenderToSurfaceVoxel((int)this, a2, a3);
    break;
    default:
    return;
}

int  WaveClass::Update(#374 *this)
{
    int result; // eax
    int v3; // eax
    int i; // edi
    int *Coords; // eax
    int v6; // eax
    int v7[3]; // [esp+4h] [ebp-Ch] BYREF
    result = *((uint32_t *)this + 44);
    switch ( result )
    case 0:
    Voxel::TransformMatrix((int)this);
    for ( i = 0; i < *((uint32_t *)this + 128); ++i )
    Coords = CellClass::GetCoords(*(uint32_t **)(*((uint32_t *)this + 125) + 4 * i), v7);
    WaveClass::DamageArea((int *)this, Coords);
    v6 = *((uint32_t *)this + 76) - 1;
    *((uint32_t *)this + 76) = v6;
    if ( v6 >= 0 )
    goto LABEL_3;
    result = (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 248))(this);
    break;
    case 1:
    case 2:
    result = *((uint32_t *)this + 116) - 6;
    *((uint32_t *)this + 116) = result;
    if ( result < 32 )
    goto LABEL_9;
    break;
    case 3:
    Voxel::TransformMatrix((int)this);
    v3 = *((uint32_t *)this + 76) - 1;
    *((uint32_t *)this + 76) = v3;
    if ( v3 < 0 )
    LABEL_9:
    result = (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 248))(this);
    else
    LABEL_3:
    result = ObjectClass::DetectCloaked(this);
    break;
    default:
    return result;
    return result;
}

int WaveClass::_vt11()
{
    return 43;
}

void ** WaveClass::_vt08(void **Block, char a2)
{
    int v3; // eax
    void *v4; // eax
    void **v6; // [esp+4h] [ebp-4h] BYREF
    *Block = &WaveClass::`vftable';
    *(Block + 1) = &WaveClass::`vftable';
    *(Block + 2) = &WaveClass::`vftable';
    *(Block + 3) = &off_7F6BC8;
    AbstractClass::AnnounceExpiredPointer(Block, 1);
    v6 = Block;
    v3 = (*(int (__thiscall **)(int *, void ***))(dword_A8EC38 + 16))(&dword_A8EC38, &v6);
    if ( v3 != -1 && v3 < dword_A8EC48 && v3 < --dword_A8EC48 )
    do
    ++v3;
    *((uint32_t *)dword_A8EC3C + v3 - 1) = *((uint32_t *)dword_A8EC3C + v3);
    while ( v3 < dword_A8EC48 );
    (*((void (__thiscall **)(char *))*(Block + 124) + 3))((char *)Block + 496);
    v4 = *(Block + 125);
    *(Block + 124) = &VectorClass<CellClass *>::`vftable';
    if ( v4 && *((uint8_t *)Block + 509) )
    __3_YAXPAX_Z(v4);
    *(Block + 125) = 0;
    *((uint8_t *)Block + 509) = 0;
    *(Block + 126) = 0;
    ObjectClass::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

