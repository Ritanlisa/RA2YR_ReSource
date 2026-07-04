#include "particleclass.hpp"

int  ParticleClass::Construct(int this, int a2, uint32_t *a3, float a4, int a5)
{
    float v6; // eax
    double v7; // st7
    int v8; // edx
    float *v9; // ebp
    int v10; // ecx
    double v11; // st7
    double v12; // st6
    uint8_t *v13; // eax
    int v14; // eax
    int v15; // eax
    __int16 v16; // ax
    double v17; // st7
    float v18; // eax
    float v19; // ecx
    float v20; // edx
    int v21; // edi
    double v22; // st7
    int v23; // eax
    int v24; // edx
    uint8_t *v25; // eax
    float v27; // [esp+Ch] [ebp-2Ch]
    int v28; // [esp+28h] [ebp-10h]
    float v29; // [esp+2Ch] [ebp-Ch]
    int v30; // [esp+2Ch] [ebp-Ch]
    float v31; // [esp+30h] [ebp-8h]
    float v32; // [esp+34h] [ebp-4h]
    float v33; // [esp+3Ch] [ebp+4h]
    ObjectClass::ctor((uint32_t *)this);
    *(uint32_t *)(this + 172) = a2;
    *(uint8_t *)(this + 176) = 0;
    *(uint8_t *)(this + 177) = 0;
    *(uint8_t *)(this + 178) = 0;
    *(uint32_t *)(this + 184) = 0;
    *(uint32_t *)(this + 180) = 0;
    *(uint32_t *)(this + 188) = 0;
    v6 = a4;
    *(uint32_t *)(this + 192) = 0;
    *(uint32_t *)(this + 196) = 0;
    *(uint32_t *)(this + 200) = 0;
    *(uint32_t *)(this + 204) = 0;
    *(uint32_t *)(this + 208) = 0;
    *(uint32_t *)(this + 212) = -1082130432;
    *(uint32_t *)(this + 216) = 0;
    *(uint32_t *)(this + 220) = 0;
    *(uint32_t *)(this + 224) = 0;
    *(uint32_t *)(this + 228) = *(uint32_t *)(*(uint32_t *)(this + 172) + 764);
    *(uint32_t *)(this + 232) = *(uint32_t *)LODWORD(v6);
    *(uint32_t *)(this + 236) = *(uint32_t *)(LODWORD(v6) + 4);
    *(uint32_t *)(this + 240) = *(uint32_t *)(LODWORD(v6) + 8);
    *(uint32_t *)(this + 244) = *a3;
    *(uint32_t *)(this + 248) = a3[1];
    *(uint32_t *)(this + 252) = a3[2];
    *(uint32_t *)(this + 256) = dword_AC49D8;
    *(uint32_t *)(this + 260) = dword_AC49DC;
    *(uint32_t *)(this + 264) = dword_AC49E0;
    v7 = (double)(*(uint32_t *)(LODWORD(v6) + 8) - a3[2]);
    v8 = *(uint32_t *)(LODWORD(v6) + 4) - a3[1];
    v9 = (float *)(this + 268);
    v10 = a5;
    *(float *)(this + 268) = (float)(*(uint32_t *)LODWORD(v6) - *a3);
    *(float *)(this + 272) = (float)v8;
    *(float *)(this + 276) = v7;
    v11 = (double)(int)a3[2];
    v12 = (double)(int)a3[1];
    *(float *)(this + 280) = (float)(int)*a3;
    *(float *)(this + 284) = v12;
    *(float *)(this + 288) = v11;
    *(uint32_t *)(this + 292) = v10;
    v13 = *(uint8_t **)(this + 172);
    LOBYTE(v8) = v13[779];
    *(uint8_t *)(this + 301) = 0;
    *(uint8_t *)(this + 300) = v8;
    *(uint8_t *)(this + 302) = v13[778];
    *(uint8_t *)(this + 303) = v13[756];
    *(uint8_t *)(this + 304) = 0;
    *(uint8_t *)(this + 305) = 0;
    *(uint32_t *)this = &ParticleClass::`vftable';
    *(uint32_t *)(this + 4) = &ParticleClass::`vftable';
    *(uint32_t *)(this + 8) = &ParticleClass::`vftable';
    *(uint32_t *)(this + 12) = &ParticleClass::`vftable';
    AbstractClass::GenerateUniqueID(this + 4);
    if ( dword_A83DD8 < dword_A83DD0
    || (byte_A83DD5 || !dword_A83DD0)
    && dword_A83DDC > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(dword_A83DC8 + 8))(
    &dword_A83DC8,
    dword_A83DDC + dword_A83DD0,
    0) )
    v14 = dword_A83DD8++;
    *((uint32_t *)dword_A83DCC + v14) = this;
    if ( *(uint32_t *)(*(uint32_t *)(this + 172) + 788) == 1 )
    *(float *)(this + 228) = (double)(Random::State((uint32_t *)ScenarioClass_Instance + 134) % 2)
    + *(float *)(this + 228);
    v15 = *(uint32_t *)(this + 172);
    *(_WORD *)(this + 298) = *(_WORD *)(v15 + 732);
    if ( *(uint32_t *)(v15 + 788) == 4 )
    v16 = *(_WORD *)(*(uint32_t *)(this + 172) + 736) + abs32(Random::State((uint32_t *)ScenarioClass_Instance + 134) % 10);
    else
    v16 = *(_WORD *)(*(uint32_t *)(this + 172) + 736)
    + abs32(Random::State((uint32_t *)ScenarioClass_Instance + 134) % *(uint32_t *)(*(uint32_t *)(this + 172) + 736));
    *(_WORD *)(this + 296) = v16;
    v28 = a3[2];
    if ( v28 <= Cell::GetGroundHeight(a3) )
    Cell::GetGroundHeight(a3);
    ObjectClass::SetPosition((void*374 *)this);
    v17 = Math::Sqrt(*v9 * *v9 + *(float *)(this + 272) * *(float *)(this + 272) + *(float *)(this + 276)
    * *(float *)(this + 276));
    if ( v17 == 0.0 )
    v18 = *v9;
    v19 = *(float *)(this + 272);
    v20 = *(float *)(this + 276);
    else
    v29 = *v9 / v17;
    v18 = v29;
    v31 = *(float *)(this + 272) / v17;
    v19 = v31;
    v32 = *(float *)(this + 276) / v17;
    v20 = v32;
    *v9 = v18;
    *(float *)(this + 272) = v19;
    *(float *)(this + 276) = v20;
    if ( *(uint8_t *)(*(uint32_t *)(this + 172) + 783) )
    v30 = *a3 - *(uint32_t *)LODWORD(a4);
    v21 = a3[1] - *(uint32_t *)(LODWORD(a4) + 4);
    a4 = (float)(int)abs32(Math::RoundToInt(*v9 * *(float *)(this + 228)));
    v33 = (float)(int)abs32(Math::RoundToInt(*(float *)(this + 272) * *(float *)(this + 228)));
    v22 = 9999.0;
    if ( a4 > 0.000001 )
    v22 = (double)(int)abs32(v30) / a4;
    if ( v33 > 0.000001 )
    a4 = (double)(int)abs32(v21) / v33;
    if ( v22 >= a4 )
    v22 = a4;
    LODWORD(a4) = *(char *)(*(uint32_t *)(this + 172) + 780) + 1;
    *(uint8_t *)(this + 300) = Math::RoundToInt(v22);
    v23 = *(uint32_t *)(this + 172);
    if ( *(int *)(v23 + 712) > 0 )
    if ( *(uint8_t *)(v23 + 724)
    || *(uint8_t *)(v23 + 725)
    || *(uint8_t *)(v23 + 726)
    || *(uint8_t *)(v23 + 727)
    || *(uint8_t *)(v23 + 728)
    || *(uint8_t *)(v23 + 729) )
    v27 = (double)Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 2147483646) * 4.656612877414201e-10;
    v25 = Color::Lerp2(&a4, *(uint32_t *)(this + 172) + 724, *(uint32_t *)(this + 172) + 727, v27);
    *(_WORD *)(this + 176) = *(_WORD *)v25;
    *(uint8_t *)(this + 178) = v25[2];
    else
    v24 = *(uint32_t *)(v23 + 700);
    *(_WORD *)(this + 176) = *(_WORD *)v24;
    *(uint8_t *)(this + 178) = *(uint8_t *)(v24 + 2);
    ObjectClass::Deploy((void*374 *)this);
    return this;
}

void  ParticleClass::Update(void *this)
{
    double WeatherConBoltExplosion; // st7
    float v3; // eax
    int v4; // eax
    int v5; // eax
    int v6; // ebx
    uint32_t *v7; // esi
    bool v8; // bl
    double v9; // st7
    uint32_t *v10; // edi
    int Byte284; // eax
    float *v12; // eax
    float *v13; // eax
    int v14; // eax
    int v15; // eax
    int v16; // ecx
    double v17; // st7
    int v18; // eax
    int v19; // [esp+0h] [ebp-13Ch]
    int v20; // [esp+0h] [ebp-13Ch]
    int v21; // [esp+0h] [ebp-13Ch]
    int v22; // [esp+0h] [ebp-13Ch]
    int v23; // [esp+4h] [ebp-138h]
    int v24; // [esp+4h] [ebp-138h]
    int v25; // [esp+4h] [ebp-138h]
    char v26; // [esp+1Ah] [ebp-122h]
    char v27; // [esp+1Bh] [ebp-121h]
    int v28; // [esp+1Ch] [ebp-120h] BYREF
    float v29; // [esp+20h] [ebp-11Ch]
    float v30; // [esp+24h] [ebp-118h]
    float v31; // [esp+28h] [ebp-114h]
    float v32; // [esp+2Ch] [ebp-110h]
    float v33; // [esp+30h] [ebp-10Ch]
    float v34; // [esp+34h] [ebp-108h]
    int v35; // [esp+38h] [ebp-104h]
    int v36; // [esp+3Ch] [ebp-100h] BYREF
    float v37; // [esp+40h] [ebp-FCh]
    int v38; // [esp+44h] [ebp-F8h]
    int GroundHeight; // [esp+48h] [ebp-F4h]
    uint32_t v40[2]; // [esp+4Ch] [ebp-F0h] BYREF
    int v41; // [esp+54h] [ebp-E8h]
    uint32_t v42[3]; // [esp+58h] [ebp-E4h] BYREF
    float v43[3]; // [esp+64h] [ebp-D8h] BYREF
    float v44[3]; // [esp+70h] [ebp-CCh] BYREF
    float v45[12]; // [esp+7Ch] [ebp-C0h] BYREF
    float v46[12]; // [esp+ACh] [ebp-90h] BYREF
    char v47[48]; // [esp+DCh] [ebp-60h] BYREF
    float v48[12]; // [esp+10Ch] [ebp-30h] BYREF
    v28 = *((int *)this + 39);
    WeatherConBoltExplosion = (double)RulesClass_Instance[1].WeatherConBoltExplosion;
    v3 = *((float *)this + 41);
    v29 = *((float *)this + 40);
    v30 = v3;
    *((float *)this + 69) = *((float *)this + 69) - WeatherConBoltExplosion;
    v36 = *((int *)this + 67);
    v37 = *((float *)this + 68);
    v38 = *((int *)this + 69);
    v32 = (float)v28;
    v33 = (float)SLODWORD(v29);
    v34 = (float)SLODWORD(v30);
    *(float *)&v38 = *(float *)&v38 - (double)RulesClass_Instance[1].WeatherConBoltExplosion;
    v23 = Math::RoundToInt(v34);
    v19 = Math::RoundToInt(v33);
    v4 = Math::RoundToInt(v32);
    Coord3D::Set(v40, v4, v19, v23);
    Vector3::AddAssign(&v36);
    v24 = Math::RoundToInt(v34);
    v20 = Math::RoundToInt(v33);
    v5 = Math::RoundToInt(v32);
    Coord3D::Set(v42, v5, v20, v24);
    GroundHeight = Cell::GetGroundHeight(v42);
    v6 = GroundHeight + dword_AC4A0C;
    v35 = GroundHeight + dword_AC4A0C;
    v7 = Coord::To_Cell(&MapClass_Instance, v42);
    v26 = 0;
    v27 = 0;
    if ( (v7[80] & 0x100) != 0 || (*((uint32_t *)Coord::To_Cell(&MapClass_Instance, v40) + 80) & 0x100) != 0 )
    if ( v42[2] < v6 )
    if ( v41 >= v6 )
    v26 = 1;
    else if ( v41 < v6 )
    v27 = 1;
    v8 = 0;
    if ( !v26 && !v27 )
    v9 = (double)GroundHeight;
    if ( v34 >= v9 && v34 - 150.0 < v9 )
    v10 = Cell::IsBridge(v7);
    if ( v10 || BuildingPlacement::ValidateType(v7, -1, -1) )
    v8 = 1;
    if ( v10 )
    if ( *(uint8_t *)(v10[328] + 5823) )
    v8 = v10[390] < 8;
    if ( (*(unsigned __int8 (__thiscall **)(uint32_t *))(*v10 + 128))(v10) )
    v8 = 0;
    v31 = (float)GroundHeight;
    if ( v34 < (double)v31 )
    if ( !v26 )
    if ( !v27 )
    LABEL_28:
    v35 = GroundHeight - 100;
    if ( (double)(GroundHeight - 100) < v34 )
    v34 = v31;
    goto LABEL_30;
    goto LABEL_27;
    LABEL_25:
    v34 = (float)v35;
    LABEL_30:
    Byte284 = CellClass::GetByte284(v42);
    qmemcpy(v45, CopyAudioData(v47, Byte284), sizeof(v45));
    qmemcpy(v46, InvertMatrix3x3Signs(v48, v45), sizeof(v46));
    *(float *)&v21 = -v37;
    Triple::Set(&v28, v36, v21, v38);
    v12 = Matrix3x3::TransformPoint(v46, v44, (float *)&v28);
    v28 = *(int *)v12;
    v29 = v12[1];
    v30 = v12[2];
    Coord::Scale((float *)&v28, 1.0);
    v30 = -v30;
    v13 = Matrix3x3::TransformPoint(v45, v43, (float *)&v28);
    v28 = *(int *)v13;
    v29 = v13[1];
    v14 = *((int *)v13 + 2);
    v36 = v28;
    v37 = -v29;
    v30 = *(float *)&v14;
    v38 = v14;
    *((uint8_t *)this + 305) = 1;
    goto LABEL_31;
    if ( v26 )
    goto LABEL_25;
    if ( v27 )
    LABEL_27:
    LODWORD(v31) = v35 - 20;
    v34 = (float)(v35 - 20);
    goto LABEL_30;
    if ( v8 )
    goto LABEL_28;
    LABEL_31:
    v25 = Math::RoundToInt(v34);
    v22 = Math::RoundToInt(v33);
    v15 = Math::RoundToInt(v32);
    Coord::Subtract(v40, v15, v22, v25);
    (*(void (__thiscall **)(void *, uint32_t *))(*(uint32_t *)this + 436))(this, v40);
    v31 = COERCE_FLOAT(Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 2147483646));
    v16 = *((uint32_t *)this + 43);
    v17 = (double)SLODWORD(v31) * 4.656612877414201e-10 * 0.05 + *(double *)(v16 + 688) + *((double *)this + 23);
    *((double *)this + 23) = v17;
    if ( v17 > 1.0 )
    v18 = *((uint32_t *)this + 45);
    if ( v18 >= *(uint32_t *)(v16 + 712) - 2 )
    *((uint32_t *)this + 46) = 0;
    *((uint32_t *)this + 47) = 1072693248;
    else
    *((uint32_t *)this + 46) = 0;
    *((uint32_t *)this + 47) = 0;
    *((uint32_t *)this + 45) = v18 + 1;
}

void  ParticleClass::_vt69(void *this, int *a2, int *a3)
{
    int v4; // eax
    int v5; // eax
    int v6; // eax
    int v7; // ebx
    int v8; // ebp
    int v9; // esi
    unsigned int v10; // eax
    char v11; // cl
    int v12; // eax
    int v13; // edx
    int v14; // ebx
    int v15; // ebp
    int v16; // eax
    int v17; // esi
    int v18; // ecx
    int v19; // eax
    __int16 v20; // dx
    char v21; // al
    double v22; // st7
    int v23; // esi
    int v24; // ebp
    int v25; // eax
    int v26[3]; // [esp+1Ch] [ebp-18h] BYREF
    int v27; // [esp+28h] [ebp-Ch] BYREF
    int v28; // [esp+2Ch] [ebp-8h]
    int v29; // [esp+30h] [ebp-4h]
    if ( (unsigned int)dword_ABCD44 >= PingPongBuffer::GetWriteOffset() || *(uint32_t *)(*((uint32_t *)this + 43) + 744) )
    if ( lParam || (v4 = *(uint32_t *)(*((uint32_t *)this + 43) + 788), v4 != 1) && v4 != 3 )
    if ( ArmageddonMode
    || !g_hWnd
    || (*(uint32_t *)ScenarioClass_Instance & 0x1000) == 0
    || (v27 = *((uint32_t *)this + 39),
    v28 = *((uint32_t *)this + 40),
    v29 = *((uint32_t *)this + 41),
    !Game::Stub3((int)&v27)) )
    v5 = *(uint32_t *)(*((uint32_t *)this + 43) + 788);
    if ( v5 == 3 || v5 == 4 )
    v26[0] = *((uint32_t *)this + 39);
    v26[1] = *((uint32_t *)this + 40);
    v26[2] = *((uint32_t *)this + 41);
    Coord::To_Screen(TacticalClass_Instance, v26, &v27);
    v12 = Map_VisibleRect + v28;
    v28 += Map_VisibleRect;
    if ( v27 >= *a3 && v27 < *a3 + a3[2] )
    v13 = a3[1];
    if ( v12 >= v13 && v12 < v13 + a3[3] )
    v14 = *(unsigned __int16 *)StreamClass::ReadAndSeek(
    (int)g_VisibleSurfaceDescriptor,
    v27,
    v12 - *((uint32_t *)g_VisibleSurfaceDescriptor + 1));
    if ( (_WORD)v14 )
    v15 = v28 - *((uint32_t *)g_ZBufferDescriptor + 1);
    v26[0] = v27;
    v16 = ZCoordToScreenY(*((uint32_t *)this + 41));
    v17 = (unsigned __int16)(*((_WORD *)g_ZBufferDescriptor + 2) + *((_WORD *)g_ZBufferDescriptor + 18) - v28)
    - v16
    - 50;
    if ( v17 < *(unsigned __int16 *)Audio::GetSamplePosition((int)g_ZBufferDescriptor, v26[0], v15) )
    v18 = *((uint32_t *)this + 45);
    if ( v18 )
    v19 = *(uint32_t *)(*((uint32_t *)this + 43) + 700) + 3 * v18;
    else
    v19 = (int)this + 176;
    v20 = *(_WORD *)v19;
    v21 = *(uint8_t *)(v19 + 2);
    LOWORD(v26[0]) = v20;
    BYTE2(v26[0]) = v21;
    v22 = 1.0 - *((double *)this + 23);
    v23 = Math::RoundToInt(v22);
    v24 = Math::RoundToInt(v22);
    v25 = Math::RoundToInt(v22);
    if ( v14 < 127 )
    v23 = (v14 * v23) >> 7;
    v24 = (v14 * v24) >> 7;
    v25 = (v14 * v25) >> 7;
    (*(void (__thiscall **)(int, int *, int))(*(uint32_t *)DSurface_Hidden_2 + 36))(
    DSurface_Hidden_2,
    &v27,
    (unsigned __int16)(v23 >> g_BitShift_Green_0 << g_BitShift_Red)
    | (unsigned __int16)(v24 >> g_BitMask_Blue << g_BitMask_Green)
    | (unsigned __int16)(v25 >> g_BitMask_Red << g_BitShift_Blue));
    else
    v6 = (*(int (__thiscall **)(void *))(*(uint32_t *)this + 464))(this);
    v7 = -15 - ZCoordToScreenY(v6);
    v8 = (*(int (__thiscall **)(void *))(*(uint32_t *)this + 108))(this);
    if ( v8 )
    v9 = 10240;
    v10 = (*(int (__thiscall **)(void *))(*(uint32_t *)this + 488))(this);
    if ( lParam == 2 )
    v11 = *((uint8_t *)this + 303);
    if ( v11 == 25 )
    v9 = 10242;
    else if ( v11 == 50 )
    v9 = 10244;
    else if ( v11 >= 75 )
    v9 = 10246;
    DrawToSurfaceSHP(
    DSurface_Hidden_2,
    FileSystem_ANIM_PAL,
    v8,
    v10,
    a2,
    a3,
    v9 | 0xE00,
    0,
    v7,
    2,
    1000,
    0,
    0,
    0,
    0,
    0);
}

bool  ParticleClass::_vt73(#374 *this, int a2)
{
    return (unsigned __int8)ObjectClass::UpdateProductionDisplay(this) != 0;
}

int *__stdcall ParticleClass::_vt66(int a1)
{
    if ( (byte_AC4998 & 1) == 0 )
    byte_AC4998 |= 1u;
    dword_AC49D0 = 2147450879;
    atexit(nullsub_214);
    return &dword_AC49D0;
}

int ParticleClass::_vt30()
{
    return 3;
}

int  ParticleClass::_vt05(#374 *this, uint32_t *a2, int a3)
{
    int result; // eax
    result = BuildingClass::SaveLoad_Register(this);
    if ( result >= 0 )
    if ( a2 )
    ObjectClass::Init(a2, (int)&a3);
    *a2 = &ParticleClass::`vftable';
    a2[1] = &ParticleClass::`vftable';
    a2[2] = &ParticleClass::`vftable';
    a2[3] = &ParticleClass::`vftable';
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 43);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 73);
    return 0;
    return result;
}

int __stdcall ParticleClass::_vt06(int a1, int *a2, int a3)
{
    int result; // eax
    result = AbstractClass::SaveLoad_Prefix((int *)a1, a2, a3);
    *(uint8_t *)(a1 + 304) = 1;
    return result;
}

int  ParticleClass::vt_entry_1E8(int this)
{
    int v2; // eax
    int v3; // eax
    int v5[2]; // [esp+4h] [ebp-10h] BYREF
    int v6[2]; // [esp+Ch] [ebp-8h] BYREF
    v2 = *(uint32_t *)(*(uint32_t *)(this + 172) + 788);
    if ( v2 >= 0 )
    if ( v2 <= 1 )
    return *(char *)(this + 302);
    if ( v2 == 2 )
    Coord::To_Screen(TacticalClass_Instance, (uint32_t *)(this + 244), v6);
    Coord::To_Screen(TacticalClass_Instance, (uint32_t *)(this + 232), v5);
    v3 = CalcMathFacing8(v6, v5);
    if ( v3 == 2 || v3 == 6 )
    return *(char *)(this + 302) + 2 * *(char *)(*(uint32_t *)(this + 172) + 777);
    if ( v3 != 4 && v3 )
    if ( v3 == 1 || v3 == 5 )
    return *(char *)(this + 302) + *(char *)(*(uint32_t *)(this + 172) + 777);
    if ( v3 == 3 || v3 == 7 )
    return *(char *)(this + 302) + 3 * *(char *)(*(uint32_t *)(this + 172) + 777);
    return 0;
    return *(char *)(this + 302);
    return 0;
}

int __stdcall ParticleClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 237448652;
    a2[1] = 298949647;
    a2[2] = -1610610249;
    a2[3] = -777003740;
    return 0;
}

int ParticleClass::_vt12()
{
    return 312;
}

int ParticleClass::_vt11()
{
    return 22;
}

int  ParticleClass::_vt34(uint32_t *this)
{
    return *(this + 43);
}

void ** ParticleClass::_vt08(void **this, char a2)
{
    int v3; // edx
    int v4; // eax
    void **v6; // [esp+4h] [ebp-4h] BYREF
    *this = &ParticleClass::`vftable';
    *(this + 1) = &ParticleClass::`vftable';
    *(this + 2) = &ParticleClass::`vftable';
    *(this + 3) = &ParticleClass::`vftable';
    ObjectClass::Undeploy((void*374 *)this);
    LOBYTE(v3) = 1;
    AbstractClass::AnnounceExpiredPointer(this, v3);
    *(this + 43) = 0;
    v6 = this;
    v4 = (*(int (__thiscall **)(int *, void ***))(dword_A83DC8 + 16))(&dword_A83DC8, &v6);
    if ( v4 != -1 && v4 < dword_A83DD8 && v4 < --dword_A83DD8 )
    do
    ++v4;
    *((uint32_t *)dword_A83DCC + v4 - 1) = *((uint32_t *)dword_A83DCC + v4);
    while ( v4 < dword_A83DD8 );
    ObjectClass::Dtor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}

