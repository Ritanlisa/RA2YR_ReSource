#include "buildingtypeclass.hpp"

// 0x0045ECE0
int  BuildingTypeClass::GetMaxPips(int this)
{
    int result; // eax
    int v2; // ecx
    int v3; // ecx
    result = 60 * dword_8192B8[*(uint32_t *)(this + 3824)] / 8;
    if ( *(uint32_t *)(this + 980) == 2 )
    if ( *(uint8_t *)(this + 5820) )
    v2 = RulesClass_Instance[1].RadarEventVisibilityDurations[1];
    if ( v2 >= 0 )
    if ( v2 <= result )
    return RulesClass_Instance[1].RadarEventVisibilityDurations[1];
    else
    return 0;
    else
    v3 = *(uint32_t *)(this + 2048);
    if ( v3 >= 0 )
    if ( v3 <= result )
    return v3;
    else
    return 0;
    else if ( *(uint32_t *)(this + 980) != 4 )
    return ObjectClass::GetModeSpecificValue((int *)this);
    return result;
}

// 0x00464AF0
uint32_t * BuildingTypeClass::GetSizeInLeptons(uint32_t *this, uint32_t *a2)
{
    int v2; // eax
    int v3; // ecx
    int v4; // edx
    int v5; // eax
    v2 = *(this + 956);
    v3 = dword_89DDB8 * *(this + 957);
    v2 *= 4;
    v4 = *(int *)((char *)dword_8192B8 + v2);
    v5 = *(int *)((char *)dword_819310 + v2);
    *a2 = v4 << 8;
    a2[1] = v5 << 8;
    a2[2] = v3;
    return a2;
}

// 0x00464B30
int  BuildingTypeClass::UpdatePower(#376 *this)
{
    int v2; // eax
    int v3; // ecx
    int v4; // edx
    int v5; // eax
    int v6; // ecx
    int v7; // edx
    int v8; // eax
    int v9; // ecx
    int v10; // edx
    int v11; // eax
    int v12; // ecx
    int v13; // edx
    int v14; // eax
    int v15; // ecx
    int v16; // edx
    int v17; // eax
    int v18; // edx
    int v19; // eax
    int v20; // ecx
    int v21; // edx
    int v22; // eax
    int v23; // ecx
    int v24; // edx
    int v25; // eax
    int v26; // ecx
    int v27; // edx
    int v28; // eax
    int v29; // ecx
    int v30; // edx
    int v31; // eax
    int v32; // ecx
    int v33; // edx
    int v34; // eax
    int v35; // ecx
    int v36; // edx
    int v37; // eax
    int v38; // ecx
    int v39; // edx
    int v40; // eax
    int v41; // ecx
    int v42; // edx
    int v43; // eax
    int v44; // eax
    int v45; // ecx
    int v46; // edx
    int v47; // eax
    int v48; // ecx
    int v49; // eax
    int v50; // ecx
    int v51; // edx
    int v52; // edx
    int *v54; // [esp+Ch] [ebp+4h]
    BuildingTypeClass::ProcessPower((int)this, v54);
    Checksummer::Add_double(*((uint32_t *)this + 906), *((uint32_t *)this + 907));
    Power::TimerProcess(*((uint32_t *)this + 908));
    Power::TimerProcess(*((uint32_t *)this + 909));
    Power::TimerProcess(*((uint32_t *)this + 910));
    Power::TimerProcess(*((uint32_t *)this + 911));
    Power::TimerProcess(*((uint32_t *)this + 912));
    Checksum::AddString((unsigned int *)v54, (unsigned __int8 *)this + 3676);
    Checksum::AddString((unsigned int *)v54, (unsigned __int8 *)this + 3720);
    Power::TimerProcess(*((uint32_t *)this + 941));
    Power::TimerProcess(*((uint32_t *)this + 942));
    Power::TimerProcess(*((uint32_t *)this + 952));
    Power::TimerProcess(*((uint32_t *)this + 953));
    Power::TimerProcess(*((uint32_t *)this + 954));
    Power::TimerProcess(*((uint32_t *)this + 955));
    Power::TimerProcess(*((uint32_t *)this + 956));
    Power::TimerProcess(*((uint32_t *)this + 957));
    Power::TimerProcess(*((uint32_t *)this + 958));
    Power::TimerProcess(*((uint32_t *)this + 959));
    Power::TimerProcess(*((uint32_t *)this + 960));
    Checksummer::Add_Buffer((unsigned int *)v54, (unsigned __int8 *)this + 3844, 72);
    Checksummer::Add_Buffer((unsigned int *)v54, (unsigned __int8 *)this + 3916, 1428);
    Power::TimerProcess(*((uint32_t *)this + 1336));
    v2 = Power::TimerProcess(*((uint32_t *)this + 1349));
    LOBYTE(v2) = *((uint8_t *)this + 5454);
    Power::FlagProcess(v54, v2);
    LOBYTE(v3) = *((uint8_t *)this + 5453);
    Power::FlagProcess(v54, v3);
    LOBYTE(v4) = *((uint8_t *)this + 5452);
    v5 = Power::FlagProcess(v54, v4);
    LOBYTE(v5) = *((uint8_t *)this + 5451);
    Power::FlagProcess(v54, v5);
    LOBYTE(v6) = *((uint8_t *)this + 5455);
    Power::FlagProcess(v54, v6);
    LOBYTE(v7) = *((uint8_t *)this + 5456);
    v8 = Power::FlagProcess(v54, v7);
    LOBYTE(v8) = *((uint8_t *)this + 5458);
    Power::FlagProcess(v54, v8);
    LOBYTE(v9) = *((uint8_t *)this + 5488);
    Power::FlagProcess(v54, v9);
    LOBYTE(v10) = *((uint8_t *)this + 5489);
    v11 = Power::FlagProcess(v54, v10);
    LOBYTE(v11) = *((uint8_t *)this + 5490);
    Power::FlagProcess(v54, v11);
    LOBYTE(v12) = *((uint8_t *)this + 5491);
    Power::FlagProcess(v54, v12);
    LOBYTE(v13) = *((uint8_t *)this + 5497);
    v14 = Power::FlagProcess(v54, v13);
    LOBYTE(v14) = *((uint8_t *)this + 5796);
    Power::FlagProcess(v54, v14);
    LOBYTE(v15) = *((uint8_t *)this + 5797);
    Power::FlagProcess(v54, v15);
    LOBYTE(v16) = *((uint8_t *)this + 5798);
    v17 = Power::FlagProcess(v54, v16);
    LOBYTE(v17) = *((uint8_t *)this + 5799);
    Power::FlagProcess(v54, v17);
    Power::TimerProcess(*((uint32_t *)this + 1467));
    LOBYTE(v18) = *((uint8_t *)this + 5800);
    v19 = Power::FlagProcess(v54, v18);
    LOBYTE(v19) = *((uint8_t *)this + 5801);
    Power::FlagProcess(v54, v19);
    LOBYTE(v20) = *((uint8_t *)this + 5802);
    Power::FlagProcess(v54, v20);
    LOBYTE(v21) = *((uint8_t *)this + 5804);
    v22 = Power::FlagProcess(v54, v21);
    LOBYTE(v22) = *((uint8_t *)this + 5805);
    Power::FlagProcess(v54, v22);
    LOBYTE(v23) = *((uint8_t *)this + 5806);
    Power::FlagProcess(v54, v23);
    LOBYTE(v24) = *((uint8_t *)this + 5807);
    v25 = Power::FlagProcess(v54, v24);
    LOBYTE(v25) = *((uint8_t *)this + 5808);
    Power::FlagProcess(v54, v25);
    LOBYTE(v26) = *((uint8_t *)this + 5810);
    Power::FlagProcess(v54, v26);
    LOBYTE(v27) = *((uint8_t *)this + 5811);
    v28 = Power::FlagProcess(v54, v27);
    LOBYTE(v28) = *((uint8_t *)this + 5812);
    Power::FlagProcess(v54, v28);
    LOBYTE(v29) = *((uint8_t *)this + 5814);
    Power::FlagProcess(v54, v29);
    LOBYTE(v30) = *((uint8_t *)this + 5815);
    v31 = Power::FlagProcess(v54, v30);
    LOBYTE(v31) = *((uint8_t *)this + 5816);
    Power::FlagProcess(v54, v31);
    LOBYTE(v32) = *((uint8_t *)this + 5817);
    Power::FlagProcess(v54, v32);
    LOBYTE(v33) = *((uint8_t *)this + 5818);
    v34 = Power::FlagProcess(v54, v33);
    LOBYTE(v34) = *((uint8_t *)this + 5819);
    Power::FlagProcess(v54, v34);
    LOBYTE(v35) = *((uint8_t *)this + 5821);
    Power::FlagProcess(v54, v35);
    LOBYTE(v36) = *((uint8_t *)this + 5822);
    v37 = Power::FlagProcess(v54, v36);
    LOBYTE(v37) = *((uint8_t *)this + 5823);
    Power::FlagProcess(v54, v37);
    LOBYTE(v38) = *((uint8_t *)this + 5824);
    Power::FlagProcess(v54, v38);
    LOBYTE(v39) = *((uint8_t *)this + 5835);
    v40 = Power::FlagProcess(v54, v39);
    LOBYTE(v40) = *((uint8_t *)this + 5836);
    Power::FlagProcess(v54, v40);
    LOBYTE(v41) = *((uint8_t *)this + 5892);
    Power::FlagProcess(v54, v41);
    LOBYTE(v42) = *((uint8_t *)this + 5825);
    v43 = Power::FlagProcess(v54, v42);
    LOBYTE(v43) = *((uint8_t *)this + 5826);
    Power::FlagProcess(v54, v43);
    Power::TimerProcess(*((uint32_t *)this + 1470));
    v44 = Power::TimerProcess(*((uint32_t *)this + 1471));
    LOBYTE(v44) = *((uint8_t *)this + 5888);
    Power::FlagProcess(v54, v44);
    LOBYTE(v45) = *((uint8_t *)this + 5889);
    Power::FlagProcess(v54, v45);
    LOBYTE(v46) = *((uint8_t *)this + 5890);
    v47 = Power::FlagProcess(v54, v46);
    LOBYTE(v47) = *((uint8_t *)this + 5829);
    Power::FlagProcess(v54, v47);
    LOBYTE(v48) = *((uint8_t *)this + 5830);
    Power::FlagProcess(v54, v48);
    Checksum::AddString((unsigned int *)v54, (unsigned __int8 *)this + 5908);
    Checksummer::Add_double(*((uint32_t *)this + 1482), *((uint32_t *)this + 1483));
    Checksummer::Add_Buffer((unsigned int *)v54, (unsigned __int8 *)this + 5936, 12);
    Checksummer::Add_Buffer((unsigned int *)v54, (unsigned __int8 *)this + 5948, 12);
    Checksummer::Add_Buffer((unsigned int *)v54, (unsigned __int8 *)this + 5960, 12);
    v49 = Checksummer::Add_Buffer((unsigned int *)v54, (unsigned __int8 *)this + 5972, 12);
    LOBYTE(v49) = *((uint8_t *)this + 5991);
    Power::FlagProcess(v54, v49);
    LOBYTE(v50) = *((uint8_t *)this + 5992);
    Power::FlagProcess(v54, v50);
    LOBYTE(v51) = *((uint8_t *)this + 5993);
    Power::FlagProcess(v54, v51);
    Power::TimerProcess(*((uint32_t *)this + 1504));
    Power::TimerProcess(*((uint32_t *)this + 1476));
    LOBYTE(v52) = *((uint8_t *)this + 5896);
    return Power::FlagProcess(v54, v52);
}

// 0x00465010
int  BuildingTypeClass::SaveLoad_Prefix(#376 *this)
{
    int v1; // esi
    int v2; // edi
    int result; // eax
    int v4; // ecx
    int v5; // ebp
    int v6; // eax
    uint32_t *v7; // edx
    int v8; // eax
    int v9; // eax
    int v10; // [esp+28h] [ebp-Ch] BYREF
    int v11; // [esp+2Ch] [ebp-8h]
    int v12; // [esp+30h] [ebp-4h]
    int v13; // [esp+38h] [ebp+4h] BYREF
    int v14; // [esp+3Ch] [ebp+8h] BYREF
    v1 = v13;
    if ( *(uint8_t *)(v13 + 5986) && *(uint32_t *)(v13 + 3584) )
    __3_YAXPAX_Z(*(void **)(v13 + 3584));
    *(uint32_t *)(v1 + 3584) = 0;
    *(uint8_t *)(v1 + 3588) = 0;
    if ( *(uint8_t *)(v1 + 5404) && *(uint32_t *)(v1 + 5400) )
    __3_YAXPAX_Z(*(void **)(v1 + 5400));
    *(uint32_t *)(v1 + 5400) = 0;
    *(uint8_t *)(v1 + 5404) = 0;
    if ( *(uint8_t *)(v1 + 5352) && *(uint32_t *)(v1 + 5348) )
    __3_YAXPAX_Z(*(void **)(v1 + 5348));
    *(uint32_t *)(v1 + 5348) = 0;
    *(uint8_t *)(v1 + 5352) = 0;
    if ( *(uint8_t *)(v1 + 5360) && *(uint32_t *)(v1 + 5356) )
    __3_YAXPAX_Z(*(void **)(v1 + 5356));
    *(uint32_t *)(v1 + 5356) = 0;
    *(uint8_t *)(v1 + 5360) = 0;
    if ( *(uint8_t *)(v1 + 5368) && *(uint32_t *)(v1 + 5364) )
    __3_YAXPAX_Z(*(void **)(v1 + 5364));
    *(uint32_t *)(v1 + 5364) = 0;
    *(uint8_t *)(v1 + 5368) = 0;
    if ( *(uint8_t *)(v1 + 5376) && *(uint32_t *)(v1 + 5372) )
    __3_YAXPAX_Z(*(void **)(v1 + 5372));
    *(uint32_t *)(v1 + 5372) = 0;
    *(uint8_t *)(v1 + 5376) = 0;
    if ( *(uint8_t *)(v1 + 5384) && *(uint32_t *)(v1 + 5380) )
    __3_YAXPAX_Z(*(void **)(v1 + 5380));
    *(uint32_t *)(v1 + 5380) = 0;
    *(uint8_t *)(v1 + 5384) = 0;
    v2 = v14;
    result = TechnoTypeClass::SaveLoad_Prefix(v1, v14);
    if ( result >= 0 )
    if ( v1 )
    BuildingTypeClass::loadBuildingProperty_b_545E520((uint32_t *)v1, (int)&v13);
    result = (*(int (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v2 + 12))(v2, &v14, 4, 0);
    if ( result >= 0 )
    v4 = v1 + 6020;
    if ( v1 != -6020 )
    *(uint32_t *)(v1 + 6024) = 0;
    *(uint32_t *)(v1 + 6028) = 0;
    *(uint8_t *)(v1 + 6032) = 1;
    *(uint8_t *)(v1 + 6033) = 0;
    *(uint32_t *)v4 = &VectorClass<TPoint3D<int>>::`vftable';
    (*(void (__thiscall **)(int, int, uint32_t))(*(uint32_t *)v4 + 8))(v4, v14, 0);
    v5 = 0;
    if ( v14 <= 0 )
    LABEL_32:
    BuildingTypeClass::LoadVoxel(v1);
    ObjectTypeClass::Load2DArt((char *)v1);
    v9 = *(uint32_t *)(v1 + 3824);
    *(uint32_t *)(v1 + 3672) = 0;
    v9 *= 120;
    *(uint32_t *)(v1 + 3580) = (char *)&dword_89C900 + v9;
    *(uint32_t *)(v1 + 3796) = (char *)&dword_89D368 + v9;
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v1 + 3668));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v1 + 3744));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v1 + 3748));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v1 + 3752));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v1 + 3756));
    BuildingTypeClass::LoadVoxel(v1);
    *(uint32_t *)(v1 + 3584) = 0;
    *(uint8_t *)(v1 + 3588) = 0;
    *(uint32_t *)(v1 + 5400) = 0;
    *(uint8_t *)(v1 + 5404) = 0;
    *(uint32_t *)(v1 + 5348) = 0;
    *(uint8_t *)(v1 + 5352) = 0;
    *(uint32_t *)(v1 + 5356) = 0;
    *(uint8_t *)(v1 + 5360) = 0;
    *(uint32_t *)(v1 + 5364) = 0;
    *(uint8_t *)(v1 + 5368) = 0;
    *(uint32_t *)(v1 + 5372) = 0;
    *(uint8_t *)(v1 + 5376) = 0;
    *(uint32_t *)(v1 + 5380) = 0;
    *(uint8_t *)(v1 + 5384) = 0;
    BuildingTypeClass::LoadAnimations(v1, *((uint32_t *)ScenarioClass_Instance + 1174));
    return 0;
    else
    v13 = 0;
    while ( 1 )
    v6 = *(uint32_t *)v2;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    result = (*(int (__stdcall **)(int, int *, int, uint32_t))(v6 + 12))(v2, &v10, 12, 0);
    if ( result < 0 )
    break;
    v7 = (uint32_t *)(v13 + *(uint32_t *)(v1 + 6024));
    v8 = v13 + 12;
    ++v5;
    *v7 = v10;
    v13 = v8;
    v7[1] = v11;
    v7[2] = v12;
    if ( v5 >= v14 )
    goto LABEL_32;
    return result;
}

// 0x00465300
int  BuildingTypeClass::SaveLoad_Prefix_0(#376 *this)
{
    int result; // eax
    int v2; // edx
    int v3; // ebp
    int i; // edi
    int v5; // [esp+4h] [ebp-10h]
    uint32_t *v6; // [esp+18h] [ebp+4h]
    int *v7; // [esp+1Ch] [ebp+8h]
    int v8; // [esp+20h] [ebp+Ch] BYREF
    result = TechnoTypeClass::SaveLoad_Prefix_0((int)v6, v6, v7, v8, v5);
    if ( result >= 0 )
    v2 = *v7;
    v8 = v6[1507];
    result = (*(int (__stdcall **)(int *, int *, int, uint32_t))(v2 + 16))(v7, &v8, 4, 0);
    if ( result >= 0 )
    v3 = 0;
    if ( v8 <= 0 )
    return 0;
    else
    for ( i = 0; ; i += 12 )
    result = (*(int (__stdcall **)(int *, int, int, uint32_t))(*v7 + 16))(v7, i + v6[1506], 12, 0);
    if ( result < 0 )
    break;
    if ( ++v3 >= v8 )
    return 0;
    return result;
}

int  BuildingTypeClass::_vt03(#376 *this)
{
    uint32_t *v2; // [esp+8h] [ebp+8h]
    if ( !v2 )
    return -2147467261;
    *v2 = -1366608933;
    v2[1] = 298976796;
    v2[2] = 1610654892;
    v2[3] = -1252326136;
    return 0;
}

int  BuildingTypeClass::_vt11(#376 *this)
{
    return 7;
}

int  BuildingTypeClass::_vt12(#376 *this)
{
    return 6040;
}

int  BuildingTypeClass::_vt16(#376 *this)
{
    return *((uint32_t *)this + 894);
}

int  BuildingTypeClass::_vt08(#376 *this)
{
    char v3; // [esp+8h] [ebp+4h]
    BuildingTypeClass::CleanupMembers((void **)this);
    if ( (v3 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (int)this;
}

