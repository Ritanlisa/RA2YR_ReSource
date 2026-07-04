#include "veinholemonsterclass.hpp"

char  VeinholeMonsterClass::UpdateGrowth(int this)
{
    uint32_t *v2; // edi
    int v3; // eax
    int v4; // ecx
    int v5; // edx
    int v6; // eax
    int v7; // edx
    int v8; // eax
    int v9; // eax
    int v10; // eax
    int GroundHeight; // eax
    int v12; // edx
    int v13; // eax
    uint32_t *FireAtSW; // edi
    unsigned int v15; // ebp
    unsigned int v16; // ebx
    double v17; // st7
    double v18; // st7
    int v19; // edx
    int v20; // eax
    int v21; // edx
    int v22; // eax
    int v23; // edx
    int VeinAttack; // ecx
    int v25; // ebx
    int v26; // edi
    int *v27; // ecx
    int v28; // edi
    __int16 *v29; // eax
    int v30; // eax
    __int16 *v31; // ebp
    __int16 *v32; // eax
    void *v33; // eax
    int v34; // edx
    int VeinDamage; // eax
    int v36; // eax
    int v37; // ecx
    int v38; // ecx
    int v40; // [esp-4h] [ebp-34h]
    double v41; // [esp+Ch] [ebp-24h] BYREF
    int v42; // [esp+14h] [ebp-1Ch]
    uint32_t v43[3]; // [esp+18h] [ebp-18h] BYREF
    int v44; // [esp+24h] [ebp-Ch] BYREF
    int v45; // [esp+28h] [ebp-8h]
    int v46; // [esp+2Ch] [ebp-4h]
    v2 = (uint32_t *)(this + 216);
    if ( Locomotor::GetSpeed((int *)(this + 216)) || !*(uint32_t *)(this + 228) )
    *(uint8_t *)(this + 212) = 0;
    else
    v40 = *(uint32_t *)(this + 228);
    *(uint32_t *)(this + 208) += *(uint32_t *)(this + 232);
    *(uint8_t *)(this + 212) = 1;
    Timer::Start(&v41, v40);
    v3 = HIDWORD(v41);
    v4 = v42;
    *v2 = LODWORD(v41);
    v2[1] = v3;
    v2[2] = v4;
    switch ( *(uint32_t *)(this + 200) )
    case 0:
    v5 = *(uint32_t *)(this + 236);
    v6 = *(uint32_t *)(this + 244);
    if ( v5 == -1 )
    goto LABEL_9;
    if ( (int)CurrentFrame - v5 >= v6 )
    goto LABEL_12;
    v6 -= (int)CurrentFrame - v5;
    LABEL_9:
    if ( v6 )
    if ( *(uint32_t *)(this + 204) != 3 )
    *(uint32_t *)(this + 204) = 2;
    else
    LABEL_12:
    if ( *(uint32_t *)(this + 204) != 3 )
    if ( (unsigned __int8)sub_5862C0(this + 248, 2) )
    *(uint32_t *)(this + 204) = 1;
    else if ( *(uint32_t *)(this + 208) == dword_846024[*(uint32_t *)(this + 200)] )
    LODWORD(v41) = (int)abs32(Random::State((uint32_t *)ScenarioClass_Instance + 134)) % 10000;
    if ( (double)SLODWORD(v41) * 0.0001 < 0.004 )
    *(uint32_t *)(this + 208) = dword_846034[*(uint32_t *)(this + 200)] - 1;
    *(uint32_t *)(this + 232) = -1;
    goto LABEL_48;
    case 1:
    v7 = *(uint32_t *)(this + 236);
    v8 = *(uint32_t *)(this + 244);
    if ( v7 == -1 )
    goto LABEL_21;
    if ( (int)CurrentFrame - v7 >= v8 )
    goto LABEL_27;
    v8 -= (int)CurrentFrame - v7;
    LABEL_21:
    if ( v8 )
    if ( *(uint32_t *)(this + 204) != 3 )
    *(uint32_t *)(this + 204) = 2;
    else
    LABEL_27:
    if ( (unsigned __int8)sub_5862C0(this + 248, 2) || *(uint32_t *)(this + 204) != 1 )
    goto LABEL_48;
    *(uint32_t *)(this + 204) = 0;
    *(uint32_t *)(this + 232) = 1;
    if ( *(int *)(this + 208) < 0 )
    *(uint32_t *)(this + 208) = 0;
    LABEL_48:
    v21 = *(uint32_t *)(this + 184);
    v22 = *(uint32_t *)(this + 192);
    if ( v21 == -1 )
    goto LABEL_51;
    if ( (int)CurrentFrame - v21 < v22 )
    v22 -= (int)CurrentFrame - v21;
    LABEL_51:
    if ( v22 )
    goto LABEL_63;
    if ( *(uint8_t *)(this + 256) )
    if ( *(uint32_t *)(this + 176) )
    v25 = 0;
    v26 = (int)abs32(Random::State((uint32_t *)ScenarioClass_Instance + 134)) % 4;
    v27 = *(int **)(this + 176);
    v28 = v26 + 1;
    if ( *v27 )
    v30 = v27[2];
    v31 = *(__int16 **)(v30 + 4);
    *(uint32_t *)(v30 + 4) = *(uint32_t *)(v30 + 4 * *v27);
    *(uint32_t *)(v27[2] + 4 * (*v27)--) = 0;
    Heap::SiftDown(v27, 1);
    v29 = v31;
    else
    v29 = 0;
    if ( v28 > 0 )
    while ( v29 )
    v32 = (__int16 *)CellCoord::To_CellObj(&MapClass_Instance, v29);
    v33 = CellCoord::To_CellObj(&MapClass_Instance, v32 + 18);
    RandomMap::RemoveMatching((void *)this, (int)v33);
    if ( ++v25 >= v28 )
    break;
    v29 = (__int16 *)PriorityQueue::Pop(*(int **)(this + 176));
    v34 = v45;
    VeinDamage = RulesClass_Instance->VeinDamage;
    *(uint32_t *)(this + 184) = CurrentFrame;
    *(uint32_t *)(this + 188) = v34;
    *(uint32_t *)(this + 192) = VeinDamage;
    else
    UpdateVeinholeMonster((uint32_t *)this);
    v23 = v45;
    VeinAttack = RulesClass_Instance->VeinAttack;
    *(uint32_t *)(this + 184) = CurrentFrame;
    *(uint32_t *)(this + 188) = v23;
    *(uint32_t *)(this + 192) = VeinAttack;
    LABEL_63:
    LOBYTE(v36) = *(uint8_t *)(this + 256);
    if ( !(uint8_t)v36 )
    v36 = *(uint32_t *)(this + 200);
    v37 = *(uint32_t *)(this + 208);
    if ( v37 == dword_846024[v36] )
    v38 = *(uint32_t *)(this + 204);
    if ( v38 != v36 )
    *(uint32_t *)(this + 200) = v38;
    v36 = dword_846044[v38];
    *(uint32_t *)(this + 232) = v36;
    *(uint32_t *)(this + 208) = dword_846054[*(uint32_t *)(this + 200)];
    return v36;
    else if ( v37 != -1 )
    v36 += v37 + 12 * v36;
    *(uint32_t *)(this + 252) = dword_845F54[v36] - 1;
    return v36;
    *(uint32_t *)(this + 232) = 0;
    return v36;
    case 2:
    v9 = *(uint32_t *)(this + 208);
    if ( v9 >= 0 && dword_845FBC[v9] == 11 )
    if ( !*(uint8_t *)(this + 257) )
    v10 = (*(__int16 *)(this + 250) << 8) + 128;
    v43[0] = (*(__int16 *)(this + 248) << 8) + 128;
    v43[1] = v10;
    v43[2] = 0;
    GroundHeight = Cell::GetGroundHeight(v43);
    v12 = (*(__int16 *)(this + 250) << 8) + 128;
    v44 = (*(__int16 *)(this + 248) << 8) + 128;
    v45 = v12;
    v46 = GroundHeight + 400;
    v13 = BuildingTypeClass::FindOrCreateEx(aGascloudm1);
    FireAtSW = (uint32_t *)CreateFireAtSW(
    (uint32_t *)dword_A8ED78,
    *((uint32_t *)g_BuildingProductionQueue + v13),
    (int)&v44);
    FireAtSW[50] = 12;
    v41 = (double)Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 2147483646)
    * 4.656612877414201e-10
    * 6.283185307179586;
    v15 = HIDWORD(v41);
    v16 = LODWORD(v41);
    v17 = Math::ArcTan2(v41);
    FireAtSW[48] = Math::RoundToInt(v17 * 8.0);
    v18 = Math::SinCos(COERCE_DOUBLE(__PAIR64__(v15, v16)));
    FireAtSW[49] = Math::RoundToInt(v18 * 8.0);
    *(uint8_t *)(this + 257) = 1;
    else
    *(uint8_t *)(this + 257) = 0;
    v19 = *(uint32_t *)(this + 236);
    v20 = *(uint32_t *)(this + 244);
    if ( v19 == -1 )
    goto LABEL_37;
    if ( (int)CurrentFrame - v19 < v20 )
    v20 -= (int)CurrentFrame - v19;
    LABEL_37:
    if ( v20 )
    goto LABEL_73;
    if ( *(uint8_t *)(this + 257) )
    LABEL_73:
    if ( *(uint32_t *)(this + 208) == dword_846024[*(uint32_t *)(this + 200)] )
    LODWORD(v41) = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 2147483646);
    if ( (double)SLODWORD(v41) * 4.656612877414201e-10 < 0.1 )
    *(uint32_t *)(this + 208) = dword_846034[*(uint32_t *)(this + 200)] - 1;
    *(uint32_t *)(this + 232) = -1;
    else
    if ( *(uint32_t *)(this + 204) != 3 )
    *(uint32_t *)(this + 204) = 0;
    *(uint32_t *)(this + 232) = -1;
    goto LABEL_48;
    case 3:
    if ( *(uint32_t *)(this + 208) == dword_846030 && !*(uint8_t *)(this + 256) )
    VeinholeMonsterClass::PlaceGrowth(this);
    goto LABEL_48;
    default:
    goto LABEL_48;
}

int  VeinholeMonsterClass::_vt91(void **this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    int DestructionEffect; // eax
    int v10; // edx
    int v11; // edi
    int v12; // eax
    void **v13; // esi
    void *v15; // [esp+Ch] [ebp-8h]
    DestructionEffect = TechnoClass::CreateDestructionEffect((void*374 *)this);
    v11 = DestructionEffect;
    if ( !DestructionEffect )
    return v11;
    v12 = DestructionEffect - 4;
    if ( !v12 )
    LOBYTE(v10) = 0;
    *(this + 51) = (void *)3;
    AbstractClass::AnnounceExpiredPointer(this, v10);
    return v11;
    if ( v12 == 1 )
    return 5;
    *(this + 51) = (void *)2;
    v13 = this + 59;
    *v13 = CurrentFrame;
    v13[1] = v15;
    v13[2] = (void *)120;
    return v11;
}

void  VeinholeMonsterClass::Update(uint32_t *this)
{
    __int16 *v2; // ebp
    int VeinholeShrinkRate; // eax
    int v4; // et2
    int *v5; // ecx
    int v6; // edx
    int v7; // ebx
    bool v8; // zf
    int v9; // eax
    __int16 *v10; // edi
    uint8_t *v11; // eax
    uint8_t *v12; // ebx
    int v13; // edi
    char v14; // al
    int v15; // eax
    __int16 v16; // dx
    char *v17; // edi
    __int64 v18; // rax
    int v19; // ebx
    int v20; // eax
    signed int v21; // ecx
    int v22; // edx
    int v23; // eax
    int v24; // eax
    uint32_t *v25; // edi
    unsigned int v26; // ebp
    unsigned int v27; // ecx
    unsigned int v28; // edx
    int v29; // ebx
    unsigned int v30; // eax
    int *v31; // ecx
    int v32; // eax
    int v33; // ebx
    __int16 *v34; // edi
    int v35; // eax
    int v36; // edx
    int v37; // edi
    int v38; // edx
    int v39; // eax
    int v40; // edi
    int v41; // ebp
    bool v42; // cc
    __int16 *v43; // [esp+10h] [ebp-28h]
    int v44; // [esp+14h] [ebp-24h] BYREF
    int v45; // [esp+18h] [ebp-20h]
    int v46; // [esp+1Ch] [ebp-1Ch]
    uint8_t *v47; // [esp+20h] [ebp-18h]
    int i; // [esp+24h] [ebp-14h]
    int v49; // [esp+28h] [ebp-10h]
    __int16 *v50; // [esp+2Ch] [ebp-Ch]
    float v51; // [esp+30h] [ebp-8h]
    int v52; // [esp+34h] [ebp-4h]
    v2 = 0;
    if ( *(this + 44) )
    VeinholeShrinkRate = RulesClass_Instance->VeinholeShrinkRate;
    if ( *(this + 43) <= VeinholeShrinkRate - 40
    && *(this + 65) <= VeinholeShrinkRate - 100
    && *((uint8_t *)ScenarioClass_Instance + 13479) )
    v49 = 0;
    v4 = (int)abs32(Random::State((uint32_t *)ScenarioClass_Instance + 134)) % 5;
    v5 = (int *)*(this + 44);
    v6 = *v5;
    v7 = v4 + 1;
    v8 = *v5 == 0;
    v52 = v4 + 1;
    if ( v8 )
    v43 = 0;
    else
    v9 = v5[2];
    v10 = *(__int16 **)(v9 + 4);
    *(uint32_t *)(v9 + 4) = *(uint32_t *)(v9 + 4 * v6);
    *(uint32_t *)(v5[2] + 4 * (*v5)--) = 0;
    Heap::SiftDown(v5, 1);
    v43 = v10;
    v2 = v10;
    if ( v7 > 0 )
    while ( 1 )
    while ( 1 )
    if ( !v2 )
    return;
    v11 = CellCoord::To_CellObj(&MapClass_Instance, v2);
    v12 = v11;
    v47 = v11;
    if ( v11[286] < 0x30u )
    BuildingClass::VisualizePlacement(v11);
    ++*(this + 65);
    if ( *((uint32_t *)v12 + 17) == 126 )
    v13 = Cell::PosToIndex(v2);
    if ( v13 >= 0 && v13 < Object::ComputeAllocationSize() )
    *(uint8_t *)(*(this + 49) + v13) = 1;
    if ( v12[286] >= 0x30u )
    v14 = 0;
    for ( i = 0; i < 8; i += 2 )
    v15 = v14 & 7;
    v16 = v2[1] + HIWORD(Direction_X_Offsets[v15]);
    LOWORD(v45) = LOWORD(Direction_X_Offsets[v15]) + *v2;
    HIWORD(v45) = v16;
    v44 = v45;
    if ( LayerClass::IsWithinUsableArea(&MapClass_Instance, (__int16 *)&v44, 1) )
    v17 = (char *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v44);
    v18 = v17[283] - (char)v12[283];
    if ( (int)((HIDWORD(v18) ^ v18) - HIDWORD(v18)) < 2 )
    v19 = Cell::PosToIndex((__int16 *)&v44);
    v46 = v19;
    if ( v19 >= 0 && v19 < Object::ComputeAllocationSize() )
    if ( BuildingClass::CheckAdjacentCells((int)v17) )
    if ( !*((uint8_t *)g_VeinholeMonsterPool + v19) )
    v20 = *(this + 43);
    if ( v20 < RulesClass_Instance->VeinholeShrinkRate )
    *(uint32_t *)(*(this + 45) + 8 * v20) = v44;
    v21 = (int)CurrentFrame / 50
    + abs32(Random::State((uint32_t *)ScenarioClass_Instance + 134) % 50)
    + 1;
    v22 = *(this + 43);
    v23 = *(this + 45);
    v50 = (__int16 *)v21;
    *(float *)(v23 + 8 * v22 + 4) = (float)v21;
    *((uint8_t *)g_VeinholeMonsterPool + v19) = 1;
    v24 = *(this + 43);
    v25 = (uint32_t *)*(this + 44);
    v26 = *(this + 45) + 8 * v24;
    *(this + 43) = v24 + 1;
    v27 = *v25 + 1;
    v51 = *(float *)(v26 + 4);
    v28 = v27 >> 1;
    if ( v27 < v25[1] )
    if ( v27 > 1 )
    do
    v29 = v25[2];
    if ( *(float *)(*(uint32_t *)(v29 + 4 * v28) + 4) <= (double)v51 )
    break;
    *(uint32_t *)(v29 + 4 * v27) = *(uint32_t *)(v29 + 4 * v28);
    v27 = v28;
    v28 >>= 1;
    while ( v27 > 1 );
    v19 = v46;
    *(uint32_t *)(v25[2] + 4 * v27) = v26;
    v30 = v25[3];
    ++*v25;
    if ( v26 > v30 )
    v25[3] = v26;
    if ( v26 < v25[4] )
    v25[4] = v26;
    v2 = v43;
    *(uint8_t *)(*(this + 49) + v19) = 1;
    v12 = v47;
    v14 = i + 2;
    if ( ++v49 >= v52 )
    return;
    v31 = (int *)*(this + 44);
    if ( *v31 )
    break;
    v43 = 0;
    v2 = 0;
    v32 = v31[2];
    v33 = 1;
    v34 = *(__int16 **)(v32 + 4);
    *(uint32_t *)(v32 + 4) = *(uint32_t *)(v32 + 4 * *v31);
    v35 = *v31;
    v36 = v31[2];
    v50 = v34;
    *(uint32_t *)(v36 + 4 * v35) = 0;
    v37 = *v31 - 1;
    *v31 = v37;
    if ( v37 < 2
    || (v38 = 2, *(float *)(*(uint32_t *)(v31[2] + 4) + 4) <= (double)*(float *)(*(uint32_t *)(v31[2] + 8) + 4)) )
    v38 = 1;
    if ( v37 < 3
    || *(float *)(*(uint32_t *)(v31[2] + 4 * v38) + 4) <= (double)*(float *)(*(uint32_t *)(v31[2] + 12) + 4) )
    if ( v38 == 1 )
    goto LABEL_55;
    else
    v38 = 3;
    do
    v39 = v31[2];
    v40 = *(uint32_t *)(v39 + 4 * v33);
    *(uint32_t *)(v39 + 4 * v33) = *(uint32_t *)(v39 + 4 * v38);
    v33 = v38;
    *(uint32_t *)(v31[2] + 4 * v38) = v40;
    v41 = *v31;
    v42 = 2 * v38 <= *v31;
    v44 = 2 * v38 + 1;
    if ( v42
    && *(float *)(*(uint32_t *)(v31[2] + 4 * v38) + 4) > (double)*(float *)(*(uint32_t *)(v31[2] + 8 * v38) + 4) )
    v38 *= 2;
    if ( v44 <= v41
    && *(float *)(*(uint32_t *)(v31[2] + 4 * v38) + 4) > (double)*(float *)(*(uint32_t *)(v31[2] + 4 * v44) + 4) )
    v38 = v44;
    while ( v38 != v33 );
    LABEL_55:
    v43 = v50;
    v2 = v50;
}

int __stdcall VeinholeMonsterClass::_vt06(int *a1, int *a2, int a3)
{
    return AbstractClass::SaveLoad_Prefix(a1, a2, a3);
}

int VeinholeMonsterClass::_vt34()
{
    return RulesClass_Instance->DropZoneAnim;
}

int __stdcall VeinholeMonsterClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 1368576106;
    a2[1] = 299025970;
    a2[2] = 1610615737;
    a2[3] = -318126072;
    return 0;
}

int VeinholeMonsterClass::_vt11()
{
    return 63;
}

int VeinholeMonsterClass::_vt12()
{
    return 264;
}

void ** VeinholeMonsterClass::_vt08(void **Block, char a2)
{
    DestroyVeinholeMonster(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

