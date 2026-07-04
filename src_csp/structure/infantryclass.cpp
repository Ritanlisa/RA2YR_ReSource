#include "infantryclass.hpp"

// 0x005176A0
bool  InfantryClass::SetField6(uint32_t *this)
{
    return (*this & 1) == 0;
}

int  InfantryClass::ProcessDeployment(uint8_t *this, int *a2, int a3, int a4, int *a5, int a6, int a7, int a8)
{
    int v9; // eax
    int result; // eax
    int v11; // ebp
    int v12; // eax
    int v13; // ecx
    int v14; // edi
    int v15; // eax
    void **v16; // eax
    int *v17; // edi
    void **v18; // eax
    void **v19; // eax
    int v20; // edx
    int v21; // ebx
    int v22; // edi
    int v23; // eax
    void **v24; // eax
    int v25; // edi
    void **v26; // eax
    void **v27; // edi
    uint32_t *v28; // edx
    int v29; // eax
    int v30; // ecx
    void **v31; // eax
    void **v32; // eax
    void **v33; // edi
    uint32_t *v34; // edx
    int v35; // edx
    void **v36; // eax
    void **v37; // eax
    void **v38; // eax
    void **v39; // eax
    void **v40; // eax
    void **v41; // eax
    void **v42; // eax
    uint32_t *v43; // ebp
    int v44; // eax
    uint32_t *v45; // eax
    uint32_t *v46; // ebx
    uint32_t *i; // edi
    int v48; // edx
    uint32_t *v49; // eax
    int *v50; // eax
    int v51; // edx
    void **v52; // eax
    int v53; // edx
    int v54; // ecx
    void **v55; // edi
    void **v56; // eax
    int *v57; // eax
    int v58; // ecx
    int v59; // edx
    int v60; // eax
    void*375 *v61; // ecx
    int v62; // eax
    int v63; // edi
    int v64; // eax
    char v65; // [esp+28h] [ebp-BEh]
    char v66; // [esp+29h] [ebp-BDh]
    int v67; // [esp+2Ah] [ebp-BCh] BYREF
    int v68; // [esp+2Eh] [ebp-B8h]
    int v69; // [esp+32h] [ebp-B4h]
    int v70; // [esp+36h] [ebp-B0h] BYREF
    int v71; // [esp+3Ah] [ebp-ACh]
    int v72; // [esp+3Eh] [ebp-A8h]
    int v73; // [esp+42h] [ebp-A4h]
    int v74; // [esp+46h] [ebp-A0h] BYREF
    int v75; // [esp+4Ah] [ebp-9Ch]
    int v76; // [esp+4Eh] [ebp-98h]
    void *v77; // [esp+52h] [ebp-94h] BYREF
    void *v78; // [esp+56h] [ebp-90h]
    void *v79; // [esp+5Ah] [ebp-8Ch]
    int v80; // [esp+5Eh] [ebp-88h] BYREF
    int v81[3]; // [esp+62h] [ebp-84h] BYREF
    uint32_t v82[3]; // [esp+6Eh] [ebp-78h] BYREF
    int v83[3]; // [esp+7Ah] [ebp-6Ch] BYREF
    uint32_t v84[3]; // [esp+86h] [ebp-60h] BYREF
    int v85[3]; // [esp+92h] [ebp-54h] BYREF
    uint32_t v86[3]; // [esp+9Eh] [ebp-48h] BYREF
    int v87[3]; // [esp+AAh] [ebp-3Ch] BYREF
    uint32_t v88[3]; // [esp+B6h] [ebp-30h] BYREF
    int v89[3]; // [esp+C2h] [ebp-24h] BYREF
    int v90[3]; // [esp+CEh] [ebp-18h] BYREF
    int v91[3]; // [esp+DAh] [ebp-Ch] BYREF
    if ( *(this + 1755) )
    v73 = *a2;
    if ( v73 > 0 && !(uint8_t)a6 )
    v9 = Math::RoundToInt((double)v73 * *(double *)(a4 + 248));
    *a2 = v9;
    if ( v9 < 1 )
    *a2 = 1;
    if ( a4 && *(uint32_t *)(a4 + 288) == 9 && (*(int (__thiscall **)(uint8_t *))(*(uint32_t *)this + 456))(this) > 0 )
    *a2 = 0;
    result = FootClass::ProcessDeploy(this, (int)a2, a2, a3, a4, (int)a5, a6, a7, (void*375 *)a8);
    v11 = result;
    if ( result != 5 )
    if ( !result )
    return 0;
    if ( result == 4 )
    v12 = *((uint32_t *)this + 183);
    if ( v12 && *(uint32_t *)(v12 + 728) )
    SlaveManagerClass::LostSlave(this);
    v13 = *((uint32_t *)this + 71);
    if ( v13
    && (*(int (__thiscall **)(int))(*(uint32_t *)v13 + 44))(v13) == 1
    && *(uint8_t *)((*(int (__thiscall **)(uint32_t))(**((uint32_t **)this + 71) + 132))(*((uint32_t *)this + 71)) + 2053) )
    v14 = *((uint32_t *)this + 71);
    if ( v14 )
    v15 = (*(int (__thiscall **)(uint32_t))(*(uint32_t *)v14 + 44))(*((uint32_t *)this + 71)) == 1 ? v14 : 0;
    else
    v15 = 0;
    (*(void (__thiscall **)(int, uint8_t *))(*(uint32_t *)v15 + 1240))(v15, this);
    (*(void (__thiscall **)(uint8_t *, int *))(*(uint32_t *)this + 952))(this, a5);
    (*(void (__thiscall **)(uint8_t *))(*(uint32_t *)this + 1280))(this);
    (*(void (__thiscall **)(uint8_t *))(*(uint32_t *)this + 928))(this);
    (*(void (__thiscall **)(uint8_t *, int, uint32_t))(*(uint32_t *)this + 488))(this, -1, 0);
    (*(void (__thiscall **)(uint8_t *, int, uint32_t))(*(uint32_t *)this + 488))(this, 5, 0);
    (*(void (__thiscall **)(uint8_t *))(*(uint32_t *)this + 492))(this);
    TechnoClass::CleanupAll(this, (int)a5);
    v65 = 0;
    if ( (uint8_t)a6 )
    if ( *(uint8_t *)(*((uint32_t *)this + 432) + 3756) )
    v65 = 1;
    if ( *(this + 143) )
    v16 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v16 )
    v67 = *((uint32_t *)this + 39);
    v68 = *((uint32_t *)this + 40);
    v69 = *((uint32_t *)this + 41);
    AnimClass::ctor(v16, *((void **)RulesClass_Instance + 39), &v67, 0, 1, (void *)0x600, 0, 0);
    if ( (*(int (__thiscall **)(uint8_t *))(*(uint32_t *)this + 456))(this) <= 10 )
    v17 = (int *)(this + 156);
    v67 = *((uint32_t *)this + 39);
    v68 = *((uint32_t *)this + 40);
    v69 = *((uint32_t *)this + 41);
    if ( *((uint32_t *)Coord::To_Cell(&MapClass_Instance, &v67) + 59) == 2 )
    if ( *(this + 143) )
    v18 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v18 )
    v67 = *v17;
    v68 = *((uint32_t *)this + 40);
    v69 = *((uint32_t *)this + 41);
    AnimClass::ctor(v18, *((void **)RulesClass_Instance + 37), &v67, 0, 1, (void *)0x600, 0, 0);
    v19 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v19 )
    v20 = *v17;
    v21 = *((uint32_t *)this + 40);
    v22 = *((uint32_t *)this + 41);
    v67 = v20;
    v68 = v21;
    v69 = v22 + 3;
    AnimClass::ctor(v19, **((void ***)RulesClass_Instance + 753), &v67, 0, 1, (void *)0x600, 0, 0);
    goto LABEL_73;
    v23 = *((uint32_t *)this + 432);
    if ( *(uint8_t *)(v23 + 3756) && *(this + 1755) )
    v24 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( !v24 )
    goto LABEL_73;
    else
    if ( !*(uint8_t *)(v23 + 3476) )
    v25 = *(uint32_t *)(a4 + 288);
    if ( *((uint32_t *)this + 433) == 33 )
    if ( v25 == 8 )
    v26 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v26 )
    v67 = *((uint32_t *)this + 39);
    v68 = *((uint32_t *)this + 40);
    v69 = *((uint32_t *)this + 41);
    v27 = AnimClass::ctor(v26, *((void **)RulesClass_Instance + 43), &v67, 0, 1, (void *)0x600, 0, 0);
    else
    v27 = 0;
    v70 = *((uint32_t *)this + 39);
    v71 = *((uint32_t *)this + 40);
    v28 = v27[50];
    v72 = *((uint32_t *)this + 41);
    CreateFireAtSW((uint32_t *)dword_A8ED78, *((uint32_t *)g_BuildingProductionQueue + v28[179]), (int)&v70);
    if ( v27 )
    (*((void (__thiscall **)(void **, int))*v27 + 8))(v27, 1);
    v25 = 3;
    if ( a5 && (*(int (__thiscall **)(int *))(*a5 + 44))(a5) == 6 && *(uint8_t *)(a5[328] + 5823) )
    v25 = 5;
    v29 = *((uint32_t *)this + 432);
    v30 = *(uint32_t *)(v29 + 3708);
    if ( v30 <= 0 )
    if ( *(uint8_t *)(v29 + 3757) )
    (*(void (__thiscall **)(uint8_t *, int, int, uint32_t))(*(uint32_t *)this + 1368))(this, 11, 1, 0);
    if ( v25 == 8 )
    v32 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v32 )
    v70 = *((uint32_t *)this + 39);
    v71 = *((uint32_t *)this + 40);
    v72 = *((uint32_t *)this + 41);
    v33 = AnimClass::ctor(v32, *((void **)RulesClass_Instance + 43), &v70, 0, 1, (void *)0x600, 0, 0);
    else
    v33 = 0;
    v67 = *((uint32_t *)this + 39);
    v68 = *((uint32_t *)this + 40);
    v34 = v33[50];
    v69 = *((uint32_t *)this + 41);
    CreateFireAtSW((uint32_t *)dword_A8ED78, *((uint32_t *)g_BuildingProductionQueue + v34[179]), (int)&v67);
    if ( v33 )
    (*((void (__thiscall **)(void **, int))*v33 + 8))(v33, 1);
    LABEL_72:
    if ( !v65 )
    return 4;
    else
    switch ( v25 )
    case 1:
    (*(void (__thiscall **)(uint8_t *, int, int, uint32_t))(*(uint32_t *)this + 1368))(this, 11, 1, 0);
    goto LABEL_72;
    case 2:
    goto LABEL_76;
    case 3:
    v36 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v36 )
    v70 = *((uint32_t *)this + 39);
    v71 = *((uint32_t *)this + 40);
    v72 = *((uint32_t *)this + 41);
    AnimClass::ctor(v36, *((void **)RulesClass_Instance + 39), &v70, 0, 1, (void *)0x600, 0, 0);
    break;
    case 4:
    v37 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v37 )
    v67 = *((uint32_t *)this + 39);
    v68 = *((uint32_t *)this + 40);
    v69 = *((uint32_t *)this + 41);
    AnimClass::ctor(v37, *((void **)RulesClass_Instance + 40), &v67, 0, 1, (void *)0x600, 0, 0);
    break;
    case 5:
    v38 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v38 )
    v89[0] = *((uint32_t *)this + 39);
    v89[1] = *((uint32_t *)this + 40);
    v89[2] = *((uint32_t *)this + 41);
    AnimClass::ctor(v38, *((void **)g_AnimTypeCount + 1), v89, 0, 1, (void *)0x600, 0, 0);
    break;
    case 6:
    v39 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v39 )
    v85[0] = *((uint32_t *)this + 39);
    v85[1] = *((uint32_t *)this + 40);
    v85[2] = *((uint32_t *)this + 41);
    AnimClass::ctor(v39, *((void **)RulesClass_Instance + 41), v85, 0, 1, (void *)0x600, 0, 0);
    break;
    case 7:
    v40 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v40 )
    v87[0] = *((uint32_t *)this + 39);
    v87[1] = *((uint32_t *)this + 40);
    v87[2] = *((uint32_t *)this + 41);
    AnimClass::ctor(v40, *((void **)RulesClass_Instance + 42), v87, 0, 1, (void *)0x600, 0, 0);
    break;
    case 8:
    v41 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v41 )
    v81[0] = *((uint32_t *)this + 39);
    v81[1] = *((uint32_t *)this + 40);
    v81[2] = *((uint32_t *)this + 41);
    v42 = AnimClass::ctor(v41, *((void **)RulesClass_Instance + 43), v81, 0, 1, (void *)0x600, 0, 0);
    else
    v42 = 0;
    if ( a5 )
    Function::424CA0(v42, a5[135]);
    else if ( a8 )
    Function::424CA0(v42, a8);
    break;
    case 9:
    v43 = this + 156;
    v84[0] = *((uint32_t *)this + 39);
    v44 = *(uint32_t *)this;
    v84[1] = *((uint32_t *)this + 40);
    v84[2] = *((uint32_t *)this + 41);
    (*(void (__thiscall **)(uint8_t *, uint32_t *))(v44 + 244))(this, v84);
    v45 = (uint32_t *)(*(int (__thiscall **)(uint8_t *, int *))(*(uint32_t *)this + 72))(this, v90);
    LOWORD(v73) = *v45 / 256;
    HIWORD(v73) = v45[1] / 256;
    v80 = v73;
    v46 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v80);
    v66 = 0;
    for ( i = (uint32_t *)v46[57]; i; i = (uint32_t *)i[12] )
    if ( (*(int (__thiscall **)(uint32_t *))(*i + 44))(i) == 6 )
    v66 = 1;
    if ( flt_89EA40[9 * v46[59]] == 0.0 && !*(this + 140) )
    goto LABEL_76;
    v88[0] = *v43;
    v88[1] = *((uint32_t *)this + 40);
    v48 = *((uint32_t *)this + 41);
    v86[0] = *v43;
    v88[2] = v48;
    v86[1] = *((uint32_t *)this + 40);
    v86[2] = *((uint32_t *)this + 41);
    v49 = Coord::To_Cell(&MapClass_Instance, v86);
    v50 = ObjectPlacement::CalcPosition(v49, v91, v88, 0, 0, 0);
    if ( *v50 == dword_A8F200 && v50[1] == dword_A8F204 && v50[2] == dword_A8F208 )
    goto LABEL_76;
    if ( v66 )
    LABEL_76:
    (*(void (__thiscall **)(uint8_t *, int, int, uint32_t))(*(uint32_t *)this + 1368))(this, 12, 1, 0);
    goto LABEL_72;
    v82[0] = *v43;
    v51 = *(uint32_t *)this;
    v82[1] = *((uint32_t *)this + 40);
    v82[2] = *((uint32_t *)this + 41);
    (*(void (__thiscall **)(uint8_t *, uint32_t *))(v51 + 240))(this, v82);
    v52 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v52 )
    v53 = *((uint32_t *)this + 40);
    v83[0] = *v43;
    v54 = *((uint32_t *)this + 41);
    v83[1] = v53;
    v83[2] = v54;
    v55 = AnimClass::ctor(v52, *((void **)RulesClass_Instance + 45), v83, 0, 1, (void *)0x600, 0, 0);
    else
    v55 = 0;
    if ( a5 )
    Function::424CA0(v55, a5[135]);
    v55[53] = *(void **)(*((uint32_t *)BuildingTypeClass_AnimTable + *(uint32_t *)(a5[135] + 90196)) + 780);
    else if ( a8 )
    Function::424CA0(v55, a8);
    v55[53] = *(void **)(*((uint32_t *)BuildingTypeClass_AnimTable + *(uint32_t *)(a8 + 90196)) + 780);
    v77 = v55[39];
    v78 = v55[40];
    v79 = v55[41];
    (*((void (__thiscall **)(void **, void **))*v55 + 60))(v55, &v77);
    break;
    case 10:
    v56 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v56 )
    v74 = *((uint32_t *)this + 39);
    v75 = *((uint32_t *)this + 40);
    v76 = *((uint32_t *)this + 41);
    AnimClass::ctor(v56, *((void **)RulesClass_Instance + 44), &v74, 0, 1, (void *)0x600, 0, 0);
    break;
    default:
    break;
    else
    if ( v25 < 0 || v25 >= v30 || !*(uint32_t *)(*(uint32_t *)(v29 + 3696) + 4 * v25) )
    v25 = 0;
    if ( *(uint32_t *)(*(uint32_t *)(v29 + 3696) + 4 * v25) )
    v31 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v31 )
    v70 = *((uint32_t *)this + 39);
    v71 = *((uint32_t *)this + 40);
    v72 = *((uint32_t *)this + 41);
    AnimClass::ctor(
    v31,
    *(void **)(*(uint32_t *)(*((uint32_t *)this + 432) + 3696) + 4 * v25),
    &v70,
    0,
    1,
    (void *)0x600,
    0,
    0);
    LABEL_73:
    v35 = *(uint32_t *)this;
    if ( *(uint8_t *)(*((uint32_t *)this + 432) + 3477) )
    if ( !(*(unsigned __int8 (__thiscall **)(uint8_t *, uint32_t))(v35 + 988))(this, 0) )
    (*(void (__thiscall **)(uint8_t *))(*(uint32_t *)this + 248))(this);
    return 4;
    else
    (*(void (__thiscall **)(uint8_t *))(v35 + 248))(this);
    return 4;
    v24 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( !v24 )
    goto LABEL_73;
    v67 = *((uint32_t *)this + 39);
    v68 = *((uint32_t *)this + 40);
    v69 = *((uint32_t *)this + 41);
    AnimClass::ctor(v24, *((void **)RulesClass_Instance + 39), &v67, 0, 1, (void *)0x600, 0, 0);
    goto LABEL_73;
    if ( a5 )
    v74 = a5[39];
    v75 = a5[40];
    v76 = a5[41];
    v57 = &v74;
    else
    v57 = &dword_A8F200;
    v58 = *v57;
    v59 = v57[1];
    v60 = v57[2];
    v77 = (void *)v58;
    v61 = (void*375 *)*((uint32_t *)this + 135);
    v78 = (void *)v59;
    v79 = (void *)v60;
    if ( !(unsigned __int8)House::IsCurrentPlayer(v61)
    && *(uint8_t *)(*((uint32_t *)this + 432) + 3779)
    && ((*(int (__thiscall **)(uint8_t *))(*(uint32_t *)this + 388))(this) == 5
    || (*(int (__thiscall **)(uint8_t *))(*(uint32_t *)this + 388))(this) == 11) )
    (*(void (__thiscall **)(uint8_t *, int, uint32_t))(*(uint32_t *)this + 488))(this, 15, 0);
    if ( a5
    && ((*(void (__thiscall **)(uint8_t *, void **, uint32_t, uint32_t))(*(uint32_t *)this + 372))(this, &v77, 0, 0),
    *((int *)this + 437) < 100) )
    v62 = *((uint32_t *)this + 432);
    if ( *(uint8_t *)(v62 + 3775) )
    *((uint32_t *)this + 437) = 300;
    return v11;
    if ( !*(uint8_t *)(v62 + 3772) && !TechnoTypeClass::HasVoiceResponse((float *)this, 13) )
    *((uint32_t *)this + 437) = 100;
    return v11;
    else if ( !*(uint8_t *)(*((uint32_t *)this + 432) + 3772) && !TechnoTypeClass::HasVoiceResponse((float *)this, 13) )
    v63 = 50;
    if ( BuildingClass::GetHealthRatio((int *)this) > *((double *)RulesClass_Instance + 737) )
    v63 = 25;
    if ( BuildingClass::GetHealthRatio((int *)this) > *((double *)RulesClass_Instance + 736) )
    v63 /= 2;
    v64 = *((uint32_t *)this + 437) + v63;
    if ( v64 >= 300 )
    v64 = 300;
    *((uint32_t *)this + 437) = v64;
    return v11;
    return result;
}

char __userpurge InfantryClass::RepairBridge@<al>(int a1@<ecx>, uint32_t *a2@<edi>, int *a3)
{
    int v4; // ebp
    int v5; // eax
    int v6; // ecx
    uint32_t *v7; // edi
    int v8; // ebx
    int v9; // eax
    char result; // al
    void **v11; // ecx
    int *v12; // eax
    int *v13; // ebx
    void **v14; // ecx
    int v15; // edx
    int v16; // edi
    unsigned int v17; // edx
    int v18; // eax
    int v19; // ecx
    int v20; // eax
    int v21; // edx
    int v22; // edi
    unsigned int v23; // eax
    int v24; // eax
    void **v25; // ecx
    int v26; // eax
    uint8_t *v27; // ecx
    uint32_t *v28; // edi
    _WORD *v29; // ebx
    _WORD *v30; // eax
    void **v31; // ecx
    int v32; // edx
    uint32_t *v33; // ecx
    void **v34; // ecx
    int *v35; // eax
    int v36; // ecx
    int v37; // ebx
    int v38; // eax
    int v39; // edi
    int v40; // ebx
    _WORD *v41; // eax
    int *v42; // eax
    int *v43; // edi
    void **v44; // ecx
    int v45; // eax
    __int64 v46; // rax
    int v47; // ebx
    _WORD *v48; // eax
    int v49; // ebp
    _WORD *v50; // eax
    int v51; // eax
    __int16 *v52; // eax
    int v53; // eax
    int i; // ebx
    char v55; // bl
    int v56; // eax
    int v57; // edx
    int v58; // eax
    int v59; // eax
    uint32_t *v60; // ebx
    int v61; // eax
    double v62; // st7
    void **v63; // ecx
    uint32_t *v64; // ecx
    int v65; // eax
    int v66; // ebx
    int v67; // eax
    uint32_t *v68; // eax
    uint32_t *v69; // eax
    uint32_t *Building; // edi
    uint32_t *v71; // eax
    uint32_t *v72; // eax
    uint32_t *v73; // eax
    uint32_t *v74; // eax
    uint32_t *v75; // eax
    uint32_t *v76; // eax
    int v77; // ecx
    uint32_t *v78; // ebx
    uint32_t *v79; // eax
    uint32_t *v80; // ebp
    uint32_t *v81; // eax
    void **v82; // ecx
    uint32_t *v83; // eax
    int v84; // eax
    int v85; // eax
    int v86; // eax
    _WORD *v87; // ebx
    _WORD *v88; // eax
    int v89; // eax
    uint32_t *v90; // eax
    uint32_t *v91; // edi
    void **v92; // ecx
    int v93; // eax
    int v94; // ebx
    int v95; // eax
    int v96; // ebx
    __int64 v97; // rax
    wchar_t *v98; // ebx
    int v99; // eax
    int v100; // edx
    int v101; // eax
    int v102; // ebx
    int v103; // eax
    uint32_t *v104; // eax
    int *v105; // ebx
    uint32_t *Value; // eax
    int v107; // edx
    unsigned int v108; // eax
    int v109; // edi
    int v110; // ecx
    int v111; // eax
    int v112; // eax
    int v113; // edx
    int v114; // ecx
    uint32_t *v115; // eax
    int v116; // eax
    int v117; // ecx
    int v118; // ecx
    int v119; // edx
    int v120; // ebx
    int v121; // edx
    char v122; // [esp+0h] [ebp-54h]
    char v123; // [esp+0h] [ebp-54h]
    char v124; // [esp+0h] [ebp-54h]
    char v125; // [esp+0h] [ebp-54h]
    uint32_t *v126; // [esp+18h] [ebp-3Ch]
    int v127; // [esp+18h] [ebp-3Ch]
    int v128; // [esp+1Ch] [ebp-38h]
    int v129; // [esp+20h] [ebp-34h]
    int v130; // [esp+24h] [ebp-30h] BYREF
    int v131; // [esp+28h] [ebp-2Ch] BYREF
    int v132; // [esp+2Ch] [ebp-28h] BYREF
    double v133; // [esp+30h] [ebp-24h] BYREF
    int v134; // [esp+38h] [ebp-1Ch]
    int v135; // [esp+3Ch] [ebp-18h] BYREF
    int v136; // [esp+40h] [ebp-14h]
    int v137; // [esp+44h] [ebp-10h]
    int v138; // [esp+48h] [ebp-Ch] BYREF
    int v139; // [esp+4Ch] [ebp-8h]
    int v140; // [esp+50h] [ebp-4h]
    v4 = a1 + 156;
    v135 = *(uint32_t *)(a1 + 156);
    v136 = *(uint32_t *)(a1 + 160);
    v137 = *(uint32_t *)(a1 + 164);
    v126 = Coord::To_Cell(&MapClass_Instance, &v135);
    if ( a3 != (int *)2 )
    LABEL_216:
    result = *(uint8_t *)(a1 + 144);
    if ( result )
    return FootClass::UpdateAI((__int16 *)a1, v4, (int)a2, (int)a3);
    return result;
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 388))(a1) == 8 )
    v5 = *(uint32_t *)(a1 + 1728);
    if ( *(uint8_t *)(v5 + 3765) || *(uint8_t *)(v5 + 3764) )
    v6 = *(uint32_t *)(a1 + 1444);
    if ( v6 )
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)v6 + 44))(v6) == 6 )
    v7 = *(uint32_t **)(a1 + 1444);
    if ( v7 == Cell::IsBridge(v126) )
    if ( BuildingClass::CanRepair(v7, a1) )
    v11 = (void **)v7[13];
    if ( v11 )
    TeamClass::Update_0(v11, 1, a1, dword_A8F1E0, 0, 0);
    return TechnoClass::GarrisonBuilding(v7);
    else
    (*(void (__thiscall **)(int, uint32_t, int))(*(uint32_t *)a1 + 1152))(a1, 0, 1);
    v8 = *(uint32_t *)a1;
    v9 = (*(int (__thiscall **)(uint32_t *, int *, int, int))(*v7 + 72))(v7, &v138, 1, 1);
    return (*(int (__thiscall **)(int, int))(v8 + 372))(a1, v9);
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 388))(a1) == 9 )
    v12 = Cell::IsBridge(v126);
    v13 = v12;
    if ( v12 )
    if ( v12 == *(int **)(a1 + 1444) || v12 == *(int **)(a1 + 692) )
    v14 = (void **)v12[13];
    if ( v14 )
    TeamClass::Update_0(v14, 1, a1, dword_A8F1E0, 0, 0);
    if ( *(int *)((*(int (__thiscall **)(int))(*(uint32_t *)a1 + 132))(a1) + 1228) > 0
    && (unsigned __int8)House::IsHumanPlayer(*(void*375 **)(a1 + 540)) )
    v135 = *(uint32_t *)v4;
    v15 = *(uint32_t *)a1;
    v136 = *(uint32_t *)(v4 + 4);
    v137 = *(uint32_t *)(v4 + 8);
    v16 = (*(int (__thiscall **)(int))(v15 + 132))(a1) + 1212;
    v17 = (unsigned int)Random::State(Randomizer_Global) % *(uint32_t *)(v16 + 16);
    v18 = *(uint32_t *)(v16 + 4);
    a3 = &v135;
    StartAudioControllerAt(*(uint32_t *)(v18 + 4 * v17), (int)&v135, 0);
    if ( *(int *)((*(int (__thiscall **)(int))(*(uint32_t *)a1 + 132))(a1) + 1312) > 0 )
    v19 = *(uint32_t *)v4;
    v20 = *(uint32_t *)(v4 + 8);
    v136 = *(uint32_t *)(v4 + 4);
    v21 = *(uint32_t *)a1;
    v135 = v19;
    v137 = v20;
    v22 = (*(int (__thiscall **)(int))(v21 + 132))(a1) + 1296;
    v23 = Random::State(Randomizer_Global);
    StartAudioControllerAt(*(uint32_t *)(*(uint32_t *)(v22 + 4) + 4 * (v23 % *(uint32_t *)(v22 + 16))), (int)&v135, 0);
    v24 = (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 700))(a1);
    HouseClass::AddPower((uint32_t *)v13[135], v24);
    v25 = *(void ***)(a1 + 52);
    if ( v25 )
    TeamClass::Update_0(v25, 48, a1, dword_A8F1E0, 0, 0);
    if ( *(uint8_t *)(v13[328] + 5805) )
    v26 = (*(int (__thiscall **)(int, int *))(*(uint32_t *)a1 + 72))(a1, &v138);
    StartAudioControllerAt(*((uint32_t *)RulesClass_Instance + 154), v26, 0);
    if ( v13[346] )
    BuildingClass::ClearAnims(v13, 3);
    if ( BuildingClass::GetHealthRatio(v13) > *((double *)RulesClass_Instance + 736) )
    BuildingClass::PlayUpgradeAnim(v13, 10, 0, 0, 0);
    else
    BuildingClass::PlayUpgradeAnim(v13, 10, 1, 0, 0);
    return (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 248))(a1);
    return (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 248))(a1);
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 388))(a1) == 8
    || (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 388))(a1) == 11
    || (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 388))(a1) == 25 )
    v27 = *(uint8_t **)(a1 + 1444);
    if ( v27 )
    if ( (v27[20] & 1) != 0 )
    if ( (*(unsigned __int8 (__thiscall **)(uint8_t *))(*(uint32_t *)v27 + 128))(v27) )
    v28 = *(uint32_t **)(a1 + 1444);
    if ( v28 )
    if ( (*(int (__thiscall **)(uint32_t))(*v28 + 44))(*(uint32_t *)(a1 + 1444)) == 6 )
    v29 = (_WORD *)(*(int (__thiscall **)(uint32_t *, int *))(*v28 + 440))(v28, &v131);
    v30 = (_WORD *)(*(int (__thiscall **)(int, int *))(*(uint32_t *)a1 + 440))(a1, &v130);
    if ( *v30 == *v29 && v30[1] == v29[1] )
    v31 = (void **)v28[13];
    if ( v31 )
    TeamClass::Update_0(v31, 1, a1, dword_A8F1E0, 0, 0);
    (*(void (__thiscall **)(uint32_t *, uint32_t))(*v28 + 220))(v28, 0);
    (*(void (__thiscall **)(uint32_t *, uint32_t, int))(*v28 + 980))(v28, *(uint32_t *)(a1 + 540), 1);
    v32 = *v28;
    v28[206] = *(uint32_t *)(*(uint32_t *)(a1 + 1728) + 3576);
    (*(void (__thiscall **)(uint32_t *))(v32 + 736))(v28);
    v33 = *(uint32_t **)(a1 + 52);
    if ( v33 && TechnoClass::HasAnyMission(v33) )
    ObjectClass::SetReference(v28, *(uint32_t *)(a1 + 52));
    v34 = *(void ***)(a1 + 52);
    if ( !v34 )
    return (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 248))(a1);
    goto LABEL_113;
    if ( !*(uint32_t *)(a1 + 1652) )
    WinAPI::Wrapper(-2147467261);
    v35 = (int *)(*(int (__stdcall **)(uint32_t, int *))(**(uint32_t **)(a1 + 1652) + 20))(
    *(uint32_t *)(a1 + 1652),
    &v138);
    v36 = *v35;
    v37 = v35[1];
    v38 = v35[2];
    if ( v36 == dword_A8F200 && v37 == dword_A8F204 && v38 == dword_A8F208 )
    return (*(int (__thiscall **)(int, uint32_t, int))(*(uint32_t *)a1 + 1152))(a1, *(uint32_t *)(a1 + 1444), 1);
    v39 = v36 / 256;
    v40 = v37 / 256;
    v41 = (_WORD *)(*(int (__thiscall **)(int, int *))(*(uint32_t *)a1 + 440))(a1, &v131);
    if ( *v41 == (_WORD)v39 && v41[1] == (_WORD)v40 )
    return (*(int (__thiscall **)(int, uint32_t, int))(*(uint32_t *)a1 + 1152))(a1, *(uint32_t *)(a1 + 1444), 1);
    v42 = Cell::IsBridge(v126);
    v43 = v42;
    if ( v42 && (v42 == *(int **)(a1 + 1444) || v42 == *(int **)(a1 + 692)) )
    v44 = (void **)v42[13];
    if ( v44 )
    TeamClass::Update_0(v44, 1, a1, dword_A8F1E0, 0, 0);
    v45 = *(uint32_t *)(a1 + 1728);
    if ( *(uint8_t *)(v45 + 3779) )
    if ( (*(int (__thiscall **)(int *))(*v43 + 44))(v43) == 6 && *(uint8_t *)(v43[328] + 5814) )
    if ( (unsigned __int8)House::IsHumanPlayer(*(void*375 **)(a1 + 540)) )
    v46 = ((__int64 (__thiscall *)(int, int **))*(uint32_t *)(*(uint32_t *)a1 + 440))(a1, &a3);
    if ( CreateTriggerClassIfFarEnough(14, SHIDWORD(v46), *(uint32_t *)v46) )
    VoxClass::FindAndPlay(aEvaBridgerepai, -1);
    if ( *((uint32_t *)RulesClass_Instance + 146) != -1 )
    v135 = v43[39];
    v136 = v43[40];
    v137 = v43[41];
    StartAudioControllerAt(*((uint32_t *)RulesClass_Instance + 146), (int)&v135, 0);
    LOBYTE(a3) = 0;
    v127 = -2;
    do
    v47 = -2;
    do
    v48 = (_WORD *)(*(int (__thiscall **)(int, int *))(*(uint32_t *)a1 + 440))(a1, &v132);
    LOWORD(v128) = *v48 + v47;
    HIWORD(v128) = v127 + v48[1];
    v130 = v128;
    v49 = *((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v130) + 14);
    v50 = (_WORD *)(*(int (__thiscall **)(int, double *))(*(uint32_t *)a1 + 440))(a1, &v133);
    LOWORD(v129) = v47 + *v50;
    HIWORD(v129) = v127 + v50[1];
    v131 = v129;
    v51 = *((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v131) + 17);
    if ( v49 >= g_TerrainBridgeIndex && v49 < g_TerrainBridgeIndex + 16 || v51 >= 74 && v51 <= 101 )
    LOBYTE(a3) = 1;
    ++v47;
    while ( v47 < 3 );
    ++v127;
    while ( v127 < 3 );
    if ( (uint8_t)a3 )
    v52 = (__int16 *)(*(int (__thiscall **)(int, int **))(*(uint32_t *)a1 + 440))(a1, &a3);
    Terrain::ProcessCellModification((int *)&MapClass_Instance, v52);
    else
    v53 = (*(int (__thiscall **)(int, int **))(*(uint32_t *)a1 + 440))(a1, &a3);
    Terrain::RecursiveModify(&MapClass_Instance, v53);
    for ( i = g_BuildingClass_Count - 1; i >= 0; --i )
    (*(void (__thiscall **)(uint32_t, int *, uint32_t))(**((uint32_t **)g_InfantryClassLimit + i) + 40))(
    *((uint32_t *)g_InfantryClassLimit + i),
    v43,
    0);
    (*(void (__thiscall **)(int *))(*v43 + 736))(v43);
    goto LABEL_112;
    if ( Object::IsAlliedWithObjectHouse(*(uint32_t **)(a1 + 540), (int)v43)
    || *(uint8_t *)(*(uint32_t *)(v43[135] + 52) + 422) && *(uint8_t *)(v43[328] + 5499) )
    if ( v43[27] != *(uint32_t *)((*(int (__thiscall **)(int *))(*v43 + 132))(v43) + 160) )
    (*(void (__thiscall **)(int *))(*v43 + 1036))(v43);
    goto LABEL_112;
    else
    v55 = 0;
    if ( (*(int (__thiscall **)(int *))(*v43 + 44))(v43) == 6 )
    v55 = *(uint8_t *)(v43[328] + 5490);
    if ( GameMode_Current[0]
    && MultiEngineer
    && BuildingClass::GetHealthRatio(v43) > *((double *)RulesClass_Instance + 737) )
    v56 = (*(int (__thiscall **)(int *))(*v43 + 132))(v43);
    v57 = v43[27] - Math::RoundToInt((double)*(int *)(v56 + 160) * *((double *)RulesClass_Instance + 737) * 0.5);
    v58 = *v43;
    a3 = (int *)v57;
    v133 = (double)v57;
    v59 = (*(int (__thiscall **)(int *))(v58 + 132))(v43);
    v60 = RulesClass_Instance;
    if ( (double)*(int *)(v59 + 160) * ((1.0 - *((double *)RulesClass_Instance + 737) * 0.5) * 0.5) >= v133 )
    v62 = v133;
    else
    v61 = (*(int (__thiscall **)(int *))(*v43 + 132))(v43);
    v60 = RulesClass_Instance;
    v62 = (double)*(int *)(v61 + 160) * ((1.0 - *((double *)RulesClass_Instance + 737) * 0.5) * 0.5);
    v131 = Math::RoundToInt(v62);
    (*(void (__thiscall **)(int *, int *, uint32_t, uint32_t, int, int, uint32_t, uint32_t))(*v43 + 364))(
    v43,
    &v131,
    0,
    v60[1002],
    a1,
    1,
    0,
    0);
    goto LABEL_112;
    if ( !v55 )
    goto LABEL_112;
    if ( v43[43] != 19 && !(*(unsigned __int8 (__thiscall **)(int *))(*v43 + 468))(v43) )
    v63 = (void **)v43[13];
    if ( v63 )
    TeamClass::Update_0(v63, 1, a1, dword_A8F1E0, 0, 0);
    *(uint8_t *)(v43[135] + 580) = 1;
    v64 = *(uint32_t **)(a1 + 52);
    if ( v64 && TechnoClass::HasAnyMission(v64) )
    ObjectClass::SetReference(v43, *(uint32_t *)(a1 + 52));
    (*(void (__thiscall **)(int *, uint32_t, int))(*v43 + 980))(v43, *(uint32_t *)(a1 + 540), 1);
    v65 = *v43;
    v43[206] = *(uint32_t *)(*(uint32_t *)(a1 + 1728) + 3576);
    (*(void (__thiscall **)(int *))(v65 + 736))(v43);
    LABEL_112:
    v34 = *(void ***)(a1 + 52);
    if ( !v34 )
    return (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 248))(a1);
    LABEL_113:
    TeamClass::Update_0(v34, 48, a1, dword_A8F1E0, 0, 0);
    return (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 248))(a1);
    else if ( *(uint8_t *)(v45 + 3780) )
    BuildingClass::Infiltrate(*(void*375 **)(a1 + 540));
    goto LABEL_112;
    (*(void (__thiscall **)(int, uint32_t, int))(*(uint32_t *)a1 + 1152))(a1, 0, 1);
    v66 = *(uint32_t *)a1;
    v67 = (*(int (__thiscall **)(int *, int *, int, int))(*v43 + 72))(v43, &v138, 1, 1);
    return (*(int (__thiscall **)(int, int))(v66 + 372))(a1, v67);
    if ( !*(uint32_t *)(a1 + 1444) )
    if ( *(uint32_t *)(a1 + 172) != 11 )
    (*(void (__thiscall **)(int, uint32_t, int))(*(uint32_t *)a1 + 1156))(a1, 0, 1);
    v133 = *(double *)v4;
    v134 = *(uint32_t *)(v4 + 8);
    v68 = Coord::To_Cell(&MapClass_Instance, &v133);
    if ( Cell::IsBridge(v68) )
    (*(void (__thiscall **)(int, int *, int, uint32_t))(*(uint32_t *)a1 + 372))(a1, &dword_A8F200, 1, 0);
    if ( *(uint8_t *)(*(uint32_t *)(a1 + 1728) + 3782) )
    v122 = *(uint8_t *)(a1 + 140);
    v69 = (uint32_t *)(*(int (__thiscall **)(int))(*(uint32_t *)a1 + 444))(a1);
    Building = CellClass::FindBuilding(v69, v122);
    if ( !Building )
    v123 = *(uint8_t *)(a1 + 140);
    v71 = (uint32_t *)(*(int (__thiscall **)(int))(*(uint32_t *)a1 + 444))(a1);
    Building = PlacementList::FindByType(v71, v123);
    if ( !Building )
    v72 = (uint32_t *)(*(int (__thiscall **)(int))(*(uint32_t *)a1 + 444))(a1);
    v73 = Cell::IsBridge(v72);
    LABEL_128:
    Building = v73;
    else
    v74 = (uint32_t *)(*(int (__thiscall **)(int))(*(uint32_t *)a1 + 444))(a1);
    Building = Cell::IsBridge(v74);
    if ( !Building )
    v124 = *(uint8_t *)(a1 + 140);
    v75 = (uint32_t *)(*(int (__thiscall **)(int))(*(uint32_t *)a1 + 444))(a1);
    Building = PlacementList::FindByType(v75, v124);
    if ( !Building )
    v125 = *(uint8_t *)(a1 + 140);
    v76 = (uint32_t *)(*(int (__thiscall **)(int))(*(uint32_t *)a1 + 444))(a1);
    v73 = CellClass::FindBuilding(v76, v125);
    goto LABEL_128;
    v77 = *(uint32_t *)(a1 + 1444);
    v78 = 0;
    if ( v77 && (*(int (__thiscall **)(int))(*(uint32_t *)v77 + 44))(v77) == 11 )
    v79 = (uint32_t *)(*(int (__thiscall **)(uint32_t, int *))(**(uint32_t **)(a1 + 1444) + 72))(
    *(uint32_t *)(a1 + 1444),
    &v138);
    v80 = Coord::To_Cell(&MapClass_Instance, v79);
    if ( *(uint8_t *)(*(uint32_t *)(a1 + 1728) + 3782) )
    v78 = CellClass::FindBuilding(v80, 1);
    if ( !v78 )
    v78 = PlacementList::FindByType(v80, 1);
    if ( !v78 )
    v81 = Cell::IsBridge(v80);
    LABEL_138:
    v78 = v81;
    else
    v78 = Cell::IsBridge(v80);
    if ( !v78 )
    v78 = PlacementList::FindByType(v80, 1);
    if ( !v78 )
    v81 = CellClass::FindBuilding(v80, 1);
    goto LABEL_138;
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 388))(a1) == 7
    && Building
    && (*(uint32_t **)(a1 + 1444) == Building || *(uint32_t **)(a1 + 692) == Building || v78 && Building == v78) )
    v82 = (void **)Building[13];
    if ( v82 )
    TeamClass::Update_0(v82, 1, a1, dword_A8F1E0, 0, 0);
    if ( (*(int (__thiscall **)(uint32_t *))(*Building + 44))(Building) == 6 )
    v83 = (uint32_t *)(*(int (__thiscall **)(int))(*(uint32_t *)a1 + 444))(a1);
    if ( Building == Cell::IsBridge(v83) && (*(int (__thiscall **)(int, int))(*(uint32_t *)a1 + 628))(a1, 21) == 1 )
    *(uint32_t *)(a1 + 196) = 0;
    TechnoClass::SetMember81((uint32_t *)a1, 0);
    TechnoClass::SetSpread((uint32_t *)a1, 0);
    v84 = *(uint32_t *)(a1 + 704);
    if ( v84 && *(uint32_t *)(v84 + 700) )
    CaptureManagerClass::FreeUnit(a1);
    if ( *(uint8_t *)(Building[328] + 5807) )
    v85 = (*(int (__thiscall **)(int, int *))(*(uint32_t *)a1 + 72))(a1, &v138);
    StartAudioControllerAt(*((uint32_t *)RulesClass_Instance + 156), v85, 0);
    *(uint8_t *)(a1 + 1081) = 1;
    (*(void (__thiscall **)(int))(*(uint32_t *)a1 + 212))(a1);
    if ( (unsigned __int8)InfantryClass::updateDeployAnimation(Building) && *(uint8_t *)(a1 + 1080) )
    --*(uint32_t *)(*(uint32_t *)(a1 + 540) + 756);
    *(uint8_t *)(a1 + 1080) = 0;
    v86 = Building[328];
    if ( *(uint8_t *)(v86 + 5807) )
    if ( *(int *)(v86 + 3816) > 0 )
    *(uint8_t *)(Building[135] + 22392) = 1;
    else
    (*(void (__thiscall **)(int, int, uint32_t *))(*(uint32_t *)a1 + 632))(a1, 2, Building);
    CellClass::AddObject(Building + 69, (uint32_t *)a1);
    return FootClass::ClearPathIndex((uint32_t *)a1);
    else
    v87 = (_WORD *)(*(int (__thiscall **)(uint32_t *, double *))(*Building + 440))(Building, &v133);
    v88 = (_WORD *)(*(int (__thiscall **)(int, int *))(*(uint32_t *)a1 + 440))(a1, &v132);
    if ( *v88 == *v87 && v88[1] == v87[1] && Building == *(uint32_t **)(a1 + 1444) )
    if ( (*(int (__thiscall **)(int, int, uint32_t *))(*(uint32_t *)a1 + 632))(a1, 15, Building) == 1 )
    TechnoClass::SetFocus((uint32_t *)a1, 0);
    *(uint8_t *)(a1 + 140) = 0;
    *(uint32_t *)(a1 + 196) = 0;
    TechnoClass::SetMember81((uint32_t *)a1, 0);
    TechnoClass::SetSpread((uint32_t *)a1, 0);
    v89 = *(uint32_t *)(a1 + 704);
    if ( v89 && *(uint32_t *)(v89 + 700) )
    CaptureManagerClass::FreeUnit(a1);
    (*(void (__thiscall **)(int))(*(uint32_t *)a1 + 212))(a1);
    if ( *(uint8_t *)((*(int (__thiscall **)(uint32_t *))(*Building + 132))(Building) + 1508) )
    TechnoClass::EnteredOpenTopped(a1);
    *(uint32_t *)(a1 + 284) = Building;
    (*(void (__thiscall **)(uint32_t *, int))(*Building + 916))(Building, a1);
    return (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 284))(a1);
    else
    (*(void (__thiscall **)(int, uint32_t, int))(*(uint32_t *)a1 + 1152))(a1, 0, 1);
    (*(void (__thiscall **)(int, int, uint32_t))(*(uint32_t *)a1 + 488))(a1, 5, 0);
    return (*(int (__thiscall **)(int, int *, int, int))(*(uint32_t *)a1 + 372))(a1, &dword_A8F200, 1, 1);
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 388))(a1) != 17 || !*(uint8_t *)(*(uint32_t *)(a1 + 1728) + 3778) )
    v4 = (int)v126;
    LABEL_193:
    if ( *(uint8_t *)(a1 + 1048) )
    (*(void (__thiscall **)(int, int))(*(uint32_t *)a1 + 628))(a1, 8);
    v116 = *(uint32_t *)(a1 + 1728);
    if ( *(int *)(v116 + 3736) > 1 )
    v138 = *(uint32_t *)(a1 + 156);
    v139 = *(uint32_t *)(a1 + 160);
    v140 = *(uint32_t *)(a1 + 164);
    StartAudioControllerAt(*(uint32_t *)(*(uint32_t *)(v116 + 3724) + 4), (int)&v138, 0);
    if ( *(uint8_t *)(a1 + 140) )
    if ( (*(uint8_t *)(v4 + 296) & 0x1C) == 0x1C )
    Cell::ApplyDamage((uint32_t *)v4, (int)&dword_A8F200, 1, 1, 1);
    else if ( (*(uint8_t *)(v4 + 292) & 0x1C) == 0x1C )
    Cell::ApplyDamage((uint32_t *)v4, (int)&dword_A8F200, 1, 1, 0);
    if ( *(uint32_t *)(a1 + 180) == -1
    && !*(uint32_t *)(a1 + 1444)
    && !*(uint32_t *)(a1 + 692)
    && !Team::AllMembersValid((int *)a1) )
    (*(void (__thiscall **)(int, uint32_t, int))(*(uint32_t *)a1 + 1156))(a1, 0, 1);
    (*(void (__thiscall **)(int))(*(uint32_t *)a1 + 492))(a1);
    (*(void (__thiscall **)(int, uint32_t, uint32_t, uint32_t, uint32_t))(*(uint32_t *)a1 + 1164))(a1, 0, 0, 0, 0);
    (*(void (__thiscall **)(int, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))(*(uint32_t *)a1 + 1160))(a1, 0, 0, 0, 0, 0);
    v138 = *(uint32_t *)(a1 + 156);
    v117 = *(uint32_t *)(a1 + 608);
    v139 = *(uint32_t *)(a1 + 160);
    v140 = *(uint32_t *)(a1 + 164);
    MapClass::RevealArea2(&v138, 0, v117 + 3, 0);
    v118 = *(uint32_t *)(a1 + 160);
    v119 = *(uint32_t *)(a1 + 164);
    v138 = *(uint32_t *)(a1 + 156);
    v139 = v118;
    v140 = v119;
    a2 = Coord::To_Cell(&MapClass_Instance, &v138);
    v120 = a2[59];
    if ( !*(uint32_t *)(a1 + 1652) )
    WinAPI::Wrapper(-2147467261);
    if ( !(*(unsigned __int8 (__stdcall **)(uint32_t))(**(uint32_t **)(a1 + 1652) + 16))(*(uint32_t *)(a1 + 1652))
    && !*(uint8_t *)(*(uint32_t *)(a1 + 1728) + 3778)
    && !TechnoTypeClass::HasVoiceResponse((float *)a1, 14)
    && (v120 == 3 || v120 == 2)
    && (!*(uint8_t *)(a1 + 140) || (a2[80] & 0x100) == 0) )
    v121 = *(uint32_t *)a1;
    a3 = *(int **)(a1 + 108);
    return (*(int (__thiscall **)(int, int **, uint32_t, uint32_t, uint32_t, int, uint32_t, uint32_t))(v121 + 364))(
    a1,
    &a3,
    0,
    *((uint32_t *)RulesClass_Instance + 1002),
    0,
    1,
    0,
    0);
    goto LABEL_216;
    v4 = (int)v126;
    v90 = Cell::IsBridge(v126);
    v91 = v90;
    if ( !v90 || v90 != *(uint32_t **)(a1 + 1444) )
    v104 = (uint32_t *)(*(int (__thiscall **)(int, int *))(*(uint32_t *)a1 + 72))(a1, &v138);
    if ( Coord::To_Cell(&MapClass_Instance, v104) == *(void **)(a1 + 1444) )
    v105 = (int *)(a1 + 156);
    v133 = *(double *)(a1 + 156);
    v134 = *(uint32_t *)(a1 + 164);
    PlaySoundEffectAt(
    &v133,
    *((uint32_t *)RulesClass_Instance + 1488),
    (uint32_t *)a1,
    *((uint32_t *)RulesClass_Instance + 1002),
    1,
    0);
    (*(void (__thiscall **)(int))(*(uint32_t *)a1 + 1280))(a1);
    Value = ProgressTimer::GetValue((_WORD *)(a1 + 904), &v133);
    v107 = *(uint32_t *)(a1 + 160);
    v108 = ((unsigned int)((*Value >> 12) + 1) >> 1) & 7;
    v109 = *(uint32_t *)(a1 + 164);
    v110 = dword_89F6D8[2 * v108] + *(uint32_t *)(a1 + 156);
    v111 = dword_89F6DC[2 * v108];
    v138 = v110;
    v112 = v107 + v111;
    v113 = *(uint32_t *)a1;
    v139 = v112;
    v140 = v109;
    (*(void (__thiscall **)(int, int *, int, int))(v113 + 372))(a1, &v138, 1, 1);
    (*(void (__thiscall **)(int, int, uint32_t))(*(uint32_t *)a1 + 488))(a1, 2, 0);
    v114 = *(uint32_t *)(a1 + 1444);
    if ( !v114
    || (v115 = (uint32_t *)(*(int (__thiscall **)(int, int *))(*(uint32_t *)v114 + 72))(v114, &v138),
    *((uint32_t *)Coord::To_Cell(&MapClass_Instance, v115) + 59) == 2) )
    (*(void (__thiscall **)(int, int))(*(uint32_t *)a1 + 292))(a1, 1);
    v138 = *v105;
    v139 = *(uint32_t *)(a1 + 160);
    v140 = *(uint32_t *)(a1 + 164);
    PlaySoundEffectAt(
    &v138,
    *((uint32_t *)RulesClass_Instance + 1488),
    0,
    *((uint32_t *)RulesClass_Instance + 1002),
    1,
    0);
    v138 = *v105;
    v139 = *(uint32_t *)(a1 + 160);
    v140 = *(uint32_t *)(a1 + 164);
    PlaySoundEffectAt(
    &v138,
    *((uint32_t *)RulesClass_Instance + 1488),
    0,
    *((uint32_t *)RulesClass_Instance + 1002),
    1,
    0);
    result = *(uint8_t *)(a1 + 144);
    if ( !result )
    return result;
    (*(void (__thiscall **)(int, int))(*(uint32_t *)a1 + 292))(a1, 1);
    goto LABEL_193;
    v92 = (void **)v90[13];
    if ( v92 )
    TeamClass::Update_0(v92, 1, a1, dword_A8F1E0, 0, 0);
    if ( (*(int (__thiscall **)(uint32_t *))(*v91 + 388))(v91) != 19
    && !(*(unsigned __int8 (__thiscall **)(uint32_t *))(*v91 + 352))(v91) )
    if ( *((uint8_t *)v91 + 1759) )
    (*(void (__thiscall **)(int, uint32_t, int))(*(uint32_t *)a1 + 1152))(a1, 0, 1);
    v93 = (*(int (__thiscall **)(int, int))(*(uint32_t *)a1 + 792))(a1, 1);
    v94 = *(uint32_t *)a1;
    *(uint32_t *)(a1 + 748) = CurrentFrame;
    *(uint32_t *)(a1 + 752) = v139;
    *(uint32_t *)(a1 + 756) = v93;
    v95 = (*(int (__thiscall **)(uint32_t *, int *, int, int))(*v91 + 72))(v91, &v138, 1, 1);
    return (*(int (__thiscall **)(int, int))(v94 + 372))(a1, v95);
    *((uint8_t *)v91 + 1759) = 1;
    v96 = *v91;
    v97 = Math::RoundToInt(*((double *)RulesClass_Instance + 746) * 900.0 * 0.5);
    (*(void (__fastcall **)(uint32_t *, uint32_t, uint32_t))(v96 + 328))(v91, HIDWORD(v97), v97);
    v98 = CurrentFrame;
    v99 = Math::RoundToInt(*((double *)RulesClass_Instance + 746) * 900.0);
    v100 = v139;
    v91[336] = a1;
    v91[330] = v98;
    v91[331] = v100;
    v91[332] = v99;
    FootClass::ClearPathIndex((uint32_t *)a1);
    (*(void (__thiscall **)(int, uint32_t))(*(uint32_t *)a1 + 1116))(a1, 0);
    v101 = (*(int (__thiscall **)(int, int))(*(uint32_t *)a1 + 792))(a1, 1);
    v102 = *(uint32_t *)a1;
    *(uint32_t *)(a1 + 748) = CurrentFrame;
    *(uint32_t *)(a1 + 752) = v139;
    *(uint32_t *)(a1 + 756) = v101;
    v103 = (*(int (__thiscall **)(uint32_t *, int *, int, int))(*v91 + 72))(v91, &v138, 1, 1);
    return (*(int (__thiscall **)(int, int))(v102 + 372))(a1, v103);
}

// 0x0051AA10
int  InfantryClass::HandleTargetDestroyed(int *this, int *a2, int *a3)
{
    int result; // eax
    result = FootClass::HandleTargetDestroyed(this, a2, a3);
    if ( (int *)*(this + 432) == a2 )
    *(this + 432) = 0;
    return result;
}

char  InfantryClass::AssignDestination_SyncLog(int this, int *a2, int a3)
{
    void*375 *v4; // eax
    void *v5; // eax
    int *v6; // ebx
    uint32_t *v7; // eax
    void *v8; // esi
    int v9; // edx
    uint32_t *v10; // eax
    int v11; // eax
    uint32_t *v12; // eax
    void *v13; // eax
    int v14; // eax
    int *v15; // eax
    int *v16; // esi
    int *v17; // eax
    int v18; // eax
    int v19; // ecx
    int v20; // eax
    int v21; // ecx
    int v22; // eax
    int v23; // ecx
    int v24; // eax
    uint32_t *v25; // eax
    int v26; // edx
    uint32_t *v27; // eax
    bool v28; // al
    int v29; // ebx
    bool v30; // zf
    int v31; // eax
    uint32_t *v32; // esi
    int v33; // eax
    int *v34; // eax
    int v35; // eax
    int v36; // eax
    int *v37; // eax
    int v38; // eax
    uint32_t *v39; // esi
    int v40; // eax
    int *v41; // eax
    int v43; // [esp+44h] [ebp-58h]
    bool v44; // [esp+73h] [ebp-29h]
    LPVOID ppv; // [esp+74h] [ebp-28h] BYREF
    void *v46; // [esp+78h] [ebp-24h] BYREF
    void *v47; // [esp+7Ch] [ebp-20h] BYREF
    uint8_t v48[12]; // [esp+80h] [ebp-1Ch] BYREF
    char v49[16]; // [esp+8Ch] [ebp-10h] BYREF
    v4 = (void*375 *)(*(int (__thiscall **)(int))(*(uint32_t *)this + 60))(this);
    if ( (unsigned __int8)House::IsCurrentPlayer(v4) )
    v5 = *(void **)(this + 1732);
    if ( v5 == (void *)27 || v5 == (void *)28 || v5 == (void *)29 || v5 == (void *)30 )
    return (char)v5;
    v6 = a2;
    if ( *(uint8_t *)(*(uint32_t *)(this + 1728) + 3476) )
    if ( a2 )
    v7 = (uint32_t *)(*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)this + 72))(this, v48);
    v8 = *(void **)CellStruct::Set(&v47, *v7 / 256, v7[1] / 256);
    v9 = *v6;
    ppv = v8;
    v10 = (uint32_t *)(*(int (__thiscall **)(int *, char *))(v9 + 72))(v6, v49);
    v5 = *(void **)CellStruct::Set(&v46, *v10 / 256, v10[1] / 256);
    v46 = v5;
    if ( v5 == v8 )
    return (char)v5;
    v11 = *(uint32_t *)(this + 680);
    if ( v11 )
    *(uint32_t *)(v11 + 680) = 0;
    *(uint32_t *)(this + 680) = 0;
    if ( !*(uint32_t *)(this + 1652) )
    WinAPI::Wrapper(-2147467261);
    if ( (*(unsigned __int8 (__stdcall **)(uint32_t))(**(uint32_t **)(this + 1652) + 16))(*(uint32_t *)(this + 1652)) )
    if ( v6 )
    v43 = *(uint32_t *)(*(uint32_t *)(this + 1728) + 1660);
    v12 = (uint32_t *)(*(int (__thiscall **)(int, char *))(*(uint32_t *)this + 72))(this, v49);
    v13 = Coord::To_Cell(&MapClass_Instance, v12);
    if ( Cell::IsBuildable((int)v13, v43, 1, 0, -1, 0, -1, 1)
    && (*(uint8_t *)(*(uint32_t *)(this + 1728) + 3476) || *(uint32_t *)(this + 172) != 1 || *(int **)(this + 1444) != v6) )
    (*(void (__thiscall **)(int))(*(uint32_t *)this + 1280))(this);
    if ( (unsigned __int8)House::IsCurrentPlayer(*(void*375 **)(this + 540)) )
    if ( v6 )
    if ( *(int **)(this + 1444) == v6 )
    if ( *(uint8_t *)(this + 1755) )
    v14 = *(uint32_t *)(this + 1728);
    if ( !*(uint8_t *)(v14 + 3775) && !*(uint8_t *)(v14 + 3756) )
    (*(void (__thiscall **)(int, int, uint32_t, uint32_t))(*(uint32_t *)this + 1368))(this, 7, 0, 0);
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)this + 388))(this) != 7 && *(uint32_t *)(this + 180) != 7
    || Team::AllMembersValid((int *)this) )
    *(uint32_t *)(this + 1504) = -1;
    goto LABEL_48;
    v15 = (int *)AbstractClass::IsTechnoType(v6);
    v16 = v15;
    if ( !v15 )
    LABEL_48:
    if ( v6 && *(uint8_t *)(*(uint32_t *)(this + 1728) + 3476) )
    if ( !*(uint32_t *)(this + 1652) )
    WinAPI::Wrapper(-2147467261);
    if ( (*(unsigned __int8 (__stdcall **)(uint32_t))(**(uint32_t **)(this + 1652) + 16))(*(uint32_t *)(this + 1652)) )
    v19 = *(uint32_t *)(this + 1652);
    ppv = 0;
    if ( !v19 )
    goto LABEL_58;
    v20 = StreamClass::Set2(&ppv, (uint32_t *)(this + 1652));
    if ( v20 < 0 && v20 != -2147467262 )
    WinAPI::Wrapper(v20);
    if ( !ppv )
    LABEL_58:
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(LPVOID, char *))(*(uint32_t *)ppv + 12))(ppv, v49);
    if ( !memcmp(v49, &g_CLSID_WalkLocomotion, 0x10u) )
    v21 = *(uint32_t *)(this + 1460);
    if ( *(uint32_t *)(this + 1468) < v21
    || (*(uint8_t *)(this + 1465) || !v21)
    && (v22 = *(uint32_t *)(this + 1472), v22 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, uint32_t))(*(uint32_t *)(this + 1452) + 8))(
    this + 1452,
    v21 + v22,
    0) )
    v23 = *(uint32_t *)(this + 1468);
    if ( v23 )
    memcpy((void *)(*(uint32_t *)(this + 1456) + 4), *(const void **)(this + 1456), 4 * v23);
    **(uint32_t **)(this + 1456) = v6;
    ++*(uint32_t *)(this + 1468);
    v24 = (*(int (__thiscall **)(int))(*(uint32_t *)this + 452))(this);
    v6 = (int *)v24;
    a2 = (int *)v24;
    if ( v24 && (*(uint32_t *)(v24 + 320) & 0x100) != 0 )
    v6 = 0;
    a2 = 0;
    if ( ppv )
    (*(void (__stdcall **)(LPVOID))(*(uint32_t *)ppv + 8))(ppv);
    goto LABEL_73;
    if ( !Team::AllMembersValid(v15) )
    if ( (*(int (__thiscall **)(int, int, int *))(*(uint32_t *)this + 632))(this, 2, v16) == 1 )
    v5 = (void *)(*(int (__thiscall **)(int, int))(*(uint32_t *)this + 628))(this, 14);
    if ( v5 == (void *)14 )
    return (char)v5;
    if ( v5 != (void *)1 )
    (*(void (__thiscall **)(int, int))(*(uint32_t *)this + 628))(this, 3);
    goto LABEL_48;
    if ( (*(int (__thiscall **)(int *))(*v16 + 44))(v16) != 1 )
    if ( (*(int (__thiscall **)(int *))(*v16 + 44))(v16) == 6 )
    if ( !v6 )
    v17 = 0;
    goto LABEL_41;
    v18 = (*(int (__thiscall **)(int *))(*v6 + 44))(v6) - 6;
    LABEL_40:
    v17 = v18 == 0 ? v6 : 0;
    goto LABEL_41;
    TechnoClass::SetFocus((uint32_t *)this, (int)v6);
    goto LABEL_48;
    if ( v6 )
    v18 = (*(int (__thiscall **)(int *))(*v6 + 44))(v6) - 1;
    goto LABEL_40;
    v17 = 0;
    LABEL_41:
    *(uint32_t *)(this + 1280) = v17;
    TechnoClass::SetFocus((uint32_t *)this, 0);
    v6 = 0;
    a2 = 0;
    LABEL_73:
    if ( *(uint8_t *)(*(uint32_t *)(this + 1728) + 3476) && v6 )
    if ( !*(uint32_t *)(this + 1652) )
    WinAPI::Wrapper(-2147467261);
    if ( !(*(unsigned __int8 (__stdcall **)(uint32_t))(**(uint32_t **)(this + 1652) + 16))(*(uint32_t *)(this + 1652)) )
    v25 = (uint32_t *)(*(int (__thiscall **)(int *, char *))(*v6 + 72))(v6, v49);
    LOWORD(v46) = *v25 / 256;
    v26 = *(uint32_t *)this;
    HIWORD(v46) = v25[1] / 256;
    ppv = v46;
    v27 = (uint32_t *)(*(int (__thiscall **)(int, uint8_t *, uint32_t))(v26 + 76))(this, v48, 0);
    LOWORD(v46) = *v27 / 256;
    HIWORD(v46) = v27[1] / 256;
    v47 = v46;
    v44 = InfantryClass::CanDeployAtCell((void*375 **)this, (__int16 *)&v47, (__int16 *)&ppv);
    if ( *(uint8_t *)(*(uint32_t *)(this + 1728) + 3476) )
    InfantryClass::updateOccupiedBuilding(&ppv, (int (__stdcall ****)(uint32_t, void *, uint32_t *))(this + 1652));
    if ( !ppv )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(LPVOID, char *))(*(uint32_t *)ppv + 12))(ppv, v49);
    v29 = memcmp(v49, (const char *)&g_CLSID_JumpjetLocomotion, 16);
    ComPtr::Release_Alt((int *)&ppv);
    v30 = v29 == 0;
    v6 = a2;
    v28 = v30;
    else
    v28 = 0;
    if ( *(uint8_t *)(*(uint32_t *)(this + 1728) + 912) )
    v44 = 1;
    if ( v28 )
    if ( !v44 )
    v31 = *(uint32_t *)(this + 1652);
    v32 = (uint32_t *)(this + 1652);
    a2 = 0;
    if ( v31 )
    v33 = StreamClass::Set(&a2, (uint32_t *)(this + 1652));
    if ( v33 < 0 && v33 != -2147467262 )
    WinAPI::Wrapper(v33);
    if ( a2 && (*(unsigned __int8 (__stdcall **)(int *))(*a2 + 28))(a2) )
    if ( !a2 )
    WinAPI::Wrapper(-2147467261);
    if ( (*(unsigned __int8 (__stdcall **)(int *))(*a2 + 20))(a2) )
    if ( *v32 )
    (*(void (__stdcall **)(uint32_t))(*(uint32_t *)*v32 + 8))(*v32);
    v34 = a2;
    *v32 = 0;
    if ( !v34 )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(int *, int))(*v34 + 16))(v34, this + 1652);
    ppv = 0;
    v35 = CreateInstanceCOM(&ppv, (IID *)&g_CLSID_WalkLocomotion, 0, 7u);
    if ( v35 < 0 && v35 != -2147467262 )
    WinAPI::Wrapper(v35);
    if ( !ppv )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(LPVOID, int))(*(uint32_t *)ppv + 12))(ppv, this);
    v46 = 0;
    if ( ppv )
    v36 = StreamClass::Set(&v46, &ppv);
    if ( v36 < 0 && v36 != -2147467262 )
    WinAPI::Wrapper(v36);
    COMObject::SwapReference((int *)&a2, (int)v46);
    if ( v46 )
    (*(void (__stdcall **)(void *))(*(uint32_t *)v46 + 8))(v46);
    v37 = a2;
    if ( a2 )
    (*(void (__stdcall **)(int *, uint32_t))(*a2 + 12))(a2, *v32);
    InfantryClass::checkBridgeClearance((int *)(this + 1652), (int)ppv);
    v37 = a2;
    if ( ppv )
    (*(void (__stdcall **)(LPVOID))(*(uint32_t *)ppv + 8))(ppv);
    v37 = a2;
    if ( v37 )
    (*(void (__stdcall **)(int *))(*v37 + 8))(v37);
    else if ( v44 )
    v38 = *(uint32_t *)(this + 1652);
    v39 = (uint32_t *)(this + 1652);
    a2 = 0;
    if ( v38 )
    v40 = StreamClass::Set(&a2, (uint32_t *)(this + 1652));
    if ( v40 < 0 && v40 != -2147467262 )
    WinAPI::Wrapper(v40);
    if ( a2 )
    if ( (*(unsigned __int8 (__stdcall **)(int *))(*a2 + 28))(a2) )
    if ( !a2 )
    WinAPI::Wrapper(-2147467261);
    if ( (*(unsigned __int8 (__stdcall **)(int *))(*a2 + 20))(a2) )
    if ( *v39 )
    (*(void (__stdcall **)(uint32_t))(*(uint32_t *)*v39 + 8))(*v39);
    v41 = a2;
    *v39 = 0;
    if ( !v41 )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(int *, int))(*v41 + 16))(v41, this + 1652);
    if ( a2 )
    (*(void (__stdcall **)(int *))(*a2 + 8))(a2);
    LOBYTE(v5) = FootClass::AssignDestination(this, (int)v6, a3);
    return (char)v5;
}

// 0x0051B1F0
char  InfantryClass::AssignTarget_SyncLog(int this, int a2)
{
    int v3; // eax
    int v4; // eax
    int v5; // eax
    if ( a2 != *(uint32_t *)(this + 692) )
    if ( *(int *)(this + 108) > 0 )
    v3 = *(uint32_t *)(this + 1732);
    *(uint8_t *)(this + 1677) = 0;
    if ( v3 == 27 || v3 == 28 || v3 == 29 || v3 == 30 )
    (*(void (__thiscall **)(int, int, uint32_t, uint32_t))(*(uint32_t *)this + 1368))(this, 28, 0, 0);
    else if ( *(uint8_t *)(this + 1755) )
    (*(void (__thiscall **)(int, int, uint32_t, uint32_t))(*(uint32_t *)this + 1368))(this, 2, 0, 0);
    else
    (*(void (__thiscall **)(int, uint32_t, uint32_t, uint32_t))(*(uint32_t *)this + 1368))(this, 0, 0, 0);
    if ( a2 != *(uint32_t *)(this + 692) )
    v4 = *(uint32_t *)(this + 680);
    if ( v4 )
    *(uint32_t *)(v4 + 680) = 0;
    *(uint32_t *)(this + 680) = 0;
    v5 = *(uint32_t *)(this + 1732);
    if ( v5 != 27 && v5 != 28 && v5 != 29 && v5 != 30 || *(uint8_t *)(*(uint32_t *)(this + 1728) + 1708) )
    *(uint32_t *)(this + 1504) = -1;
    LOBYTE(v5) = TechnoClass::AssignTarget_SyncLog((uint32_t *)this, a2);
    if ( !*(uint32_t *)(this + 1444) && *(uint8_t *)(*(uint32_t *)(this + 1728) + 3774) )
    if ( a2 && (*(int (__thiscall **)(int))(*(uint32_t *)a2 + 44))(a2) == 6 )
    v5 = a2;
    else
    v5 = 0;
    if ( *(uint8_t *)(*(uint32_t *)(this + 1728) + 3780) )
    if ( v5 && *(uint8_t *)(*(uint32_t *)(v5 + 1312) + 5494) )
    LOBYTE(v5) = (*(int (__thiscall **)(int, int, int))(*(uint32_t *)this + 1152))(this, a2, 1);
    else if ( v5 && *(uint8_t *)(*(uint32_t *)(v5 + 1312) + 5490) )
    LOBYTE(v5) = (*(int (__thiscall **)(int, int, int))(*(uint32_t *)this + 1152))(this, a2, 1);
    *(uint8_t *)(this + 1678) = 0;
    return v5;
    *(uint8_t *)(this + 1678) = 0;
    return v5;
}

char  InfantryClass::Update(int this)
{
    int v2; // eax
    void **v3; // eax
    int v4; // edi
    int v5; // ebp
    int v6; // ecx
    int v7; // eax
    uint32_t *v8; // eax
    uint32_t *v9; // eax
    uint32_t *v10; // edi
    uint8_t *v11; // eax
    int v12; // eax
    uint32_t *v13; // eax
    void *v14; // eax
    int v15; // eax
    int v16; // eax
    int v17; // edx
    int v18; // eax
    int v20; // [esp+28h] [ebp-Ch] BYREF
    int v21; // [esp+2Ch] [ebp-8h]
    int v22; // [esp+30h] [ebp-4h]
    if ( *(char *)(this + 1668) >= 0 )
    InfantryClass::CalcMoveTarget((int *)this);
    LOBYTE(v2) = (*(int (__thiscall **)(int, uint32_t))(*(uint32_t *)this + 1184))(this, 0);
    return v2;
    if ( ((*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)this + 468))(this)
    || (*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)this + 472))(this))
    && !((int)CurrentFrame % 24) )
    if ( RulesClass_Instance->PrerequisiteTech[2] )
    v3 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v3 )
    v4 = *(uint32_t *)(this + 160);
    v20 = *(uint32_t *)(this + 156) + 120;
    v5 = *(uint32_t *)(this + 164);
    v21 = v4 + 120;
    v22 = v5;
    AnimClass::ctor(v3, (void *)RulesClass_Instance->PrerequisiteTech[2], &v20, 0, 1, (void *)0x600, 0, 0);
    v6 = *(uint32_t *)(this + 632);
    if ( v6 )
    (*(void (__thiscall **)(int))(*(uint32_t *)v6 + 92))(v6);
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)this + 472))(this)
    && (!(*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)this + 468))(this) || !*(uint8_t *)(this + 636)) )
    goto LABEL_98;
    if ( !*(uint32_t *)(this + 1652) )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(uint32_t))(**(uint32_t **)(this + 1652) + 64))(*(uint32_t *)(this + 1652));
    LOBYTE(v2) = *(uint8_t *)(this + 144);
    if ( (uint8_t)v2 )
    LABEL_98:
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)this + 468))(this) )
    if ( *(uint32_t *)(this + 692) )
    (*(void (__thiscall **)(int, uint32_t))(*(uint32_t *)this + 968))(this, 0);
    v2 = *(uint32_t *)(this + 1444);
    if ( v2 )
    LOBYTE(v2) = (*(int (__thiscall **)(int, uint32_t, int))(*(uint32_t *)this + 1152))(this, 0, 1);
    return v2;
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)this + 512))(this) )
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)this + 388))(this) == -1 && *(uint32_t *)(this + 180) == -1 )
    (*(void (__thiscall **)(int, uint32_t, int))(*(uint32_t *)this + 1156))(this, 0, 1);
    (*(void (__thiscall **)(int))(*(uint32_t *)this + 492))(this);
    if ( *(int *)(this + 108) <= 0 )
    v7 = *(uint32_t *)(this + 1732);
    if ( v7 != 11
    && v7 != 12
    && v7 != 13
    && v7 != 14
    && v7 != 15
    && v7 != 34
    && v7 != 35
    && v7 != 36
    && v7 != 20
    && v7 != 21 )
    *(uint32_t *)(this + 108) = 1;
    FootClass::MovementAI(this);
    LOBYTE(v2) = *(uint8_t *)(this + 144);
    if ( (uint8_t)v2 )
    if ( *(uint8_t *)(this + 129)
    || (*(int (__thiscall **)(int))(*(uint32_t *)this + 388))(this) != 5
    && (*(int (__thiscall **)(int))(*(uint32_t *)this + 388))(this) != 11 )
    goto LABEL_61;
    v20 = *(uint32_t *)(this + 156);
    v21 = *(uint32_t *)(this + 160);
    v22 = *(uint32_t *)(this + 164);
    v8 = Coord::To_Cell(&MapClass_Instance, &v20);
    v9 = Cell::IsBridge(v8);
    v10 = v9;
    if ( !v9 )
    goto LABEL_61;
    v11 = (uint8_t *)v9[328];
    if ( !v11[5889] )
    if ( v11[5823] )
    v12 = v10[390];
    if ( v12 != 12 && v12 != 8 )
    goto LABEL_55;
    else if ( v11[5824] )
    if ( *(uint8_t *)(v10[135] + 506) )
    goto LABEL_55;
    else if ( !v11[5815] || !BuildingClass::IsPoweredOn(v10) )
    goto LABEL_55;
    v10 = 0;
    LABEL_55:
    v13 = *(uint32_t **)(this + 732);
    if ( !v13
    || !v13[182]
    || v10 != v13
    || (v14 = (void *)(*(int (__thiscall **)(int))(*(uint32_t *)this + 444))(this),
    !BuildingClass::CheckBridge(*(uint32_t **)(*(uint32_t *)(this + 732) + 728), this, v14)) )
    if ( v10 )
    (*(void (__thiscall **)(int, int *, int, int))(*(uint32_t *)this + 372))(this, &dword_A8F200, 1, 1);
    LABEL_61:
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)this + 120))(this) != 2 )
    (*(void (__thiscall **)(int, int))(*(uint32_t *)this + 292))(this, 2);
    if ( *(uint8_t *)(this + 1677) && !*(uint32_t *)(this + 268) )
    v15 = *(uint32_t *)(this + 1732);
    *(uint8_t *)(this + 1677) = 0;
    if ( v15 == 27 || v15 == 28 || v15 == 29 || v15 == 30 )
    (*(void (__thiscall **)(int, int, uint32_t, uint32_t))(*(uint32_t *)this + 1368))(this, 28, 0, 0);
    else
    (*(void (__thiscall **)(int, uint32_t, uint32_t, uint32_t))(*(uint32_t *)this + 1368))(this, 0, 0, 0);
    v16 = *(uint32_t *)(this + 1492);
    if ( v16 && *(uint8_t *)(this + 981) )
    *(uint8_t *)(v16 + 130) = 1;
    if ( !*(uint32_t *)(this + 1492) && (*(int (__thiscall **)(int))(*(uint32_t *)this + 388))(this) == 5 )
    v20 = *(uint32_t *)(this + 156);
    v21 = *(uint32_t *)(this + 160);
    v22 = *(uint32_t *)(this + 164);
    if ( !Tactical::IsCellVisible(&MapClass_Instance, &v20) )
    (*(void (__thiscall **)(int))(*(uint32_t *)this + 928))(this);
    LOBYTE(v2) = (*(int (__thiscall **)(int))(*(uint32_t *)this + 248))(this);
    return v2;
    LOBYTE(v2) = ProcessTechnoSquadResponse(this);
    if ( (uint8_t)v2 )
    return v2;
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)this + 512))(this) )
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)this + 388))(this) == -1 && *(uint32_t *)(this + 180) == -1 )
    (*(void (__thiscall **)(int, uint32_t, int))(*(uint32_t *)this + 1156))(this, 0, 1);
    (*(void (__thiscall **)(int))(*(uint32_t *)this + 492))(this);
    InfantryClass::ProcessIdleDeploy(this);
    if ( *(uint32_t *)(this + 1444) || *(uint8_t *)(this + 1755) || !*(uint8_t *)(this + 1754) )
    goto LABEL_92;
    v17 = *(uint32_t *)(this + 1736);
    v18 = *(uint32_t *)(this + 1744);
    if ( v17 != -1 )
    if ( (int)CurrentFrame - v17 >= v18 )
    goto LABEL_91;
    v18 -= (int)CurrentFrame - v17;
    if ( v18 )
    LABEL_92:
    FireTechnoAtTarget(this);
    LOBYTE(v2) = *(uint8_t *)(this + 144);
    if ( (uint8_t)v2 )
    Mission::ExecuteTechnoMissionAction(this);
    LOBYTE(v2) = *(uint8_t *)(this + 144);
    if ( (uint8_t)v2 )
    LOBYTE(v2) = Mission::ProcessUnitMissionAI(this);
    return v2;
    LABEL_91:
    *(uint8_t *)(this + 1754) = 0;
    goto LABEL_92;
    return v2;
}

int  InfantryClass::EvaluateTarget(int this, int a2, int a3, int a4, int a5, int a6)
{
    __int64 v7; // rax
    int v8; // edx
    bool v9; // al
    uint32_t *Type; // eax
    int result; // eax
    int v12; // eax
    __int16 *NeighbourContent; // eax
    int v14; // ecx
    int v15; // eax
    int v16; // ecx
    bool v17; // al
    int v18; // eax
    int v19; // ebx
    int v20; // esi
    uint32_t *v21; // eax
    int v22; // edi
    uint32_t *v23; // esi
    int v24; // eax
    int v25; // ecx
    _WORD *v26; // edi
    _WORD *v27; // eax
    uint32_t *v28; // eax
    uint32_t *v29; // ecx
    uint32_t *v30; // eax
    uint32_t *v31; // edi
    uint32_t *v32; // eax
    uint32_t *v33; // ecx
    uint8_t *v34; // eax
    int v35; // ecx
    uint32_t *v36; // eax
    int v37; // edi
    char v38; // al
    bool v39; // zf
    bool v40; // [esp+29h] [ebp-23h] BYREF
    bool v41; // [esp+2Ah] [ebp-22h]
    char v42; // [esp+2Bh] [ebp-21h]
    int v43; // [esp+2Ch] [ebp-20h]
    int v44; // [esp+30h] [ebp-1Ch] BYREF
    uint32_t v45[3]; // [esp+34h] [ebp-18h] BYREF
    uint8_t v46[12]; // [esp+40h] [ebp-Ch] BYREF
    int v47; // [esp+54h] [ebp+8h]
    v40 = (*(uint32_t *)(a2 + 320) & 0x100) != 0
    && (a4 == -1 || (v7 = a4 - *(char *)(a2 + 283), (int)((HIDWORD(v7) ^ v7) - HIDWORD(v7)) > 1));
    v8 = *(uint32_t *)(a2 + 84);
    v42 = *(uint8_t *)(a2 + 292);
    v9 = (*(uint32_t *)(a2 + 292) & 0x20) != 0;
    v43 = v8;
    v41 = v9;
    Type = (uint32_t *)InfantryClass::GetType((__int16 *)a2);
    if ( a3 == 8 )
    if ( Type && __PAIR32__(Type[10], HIWORD(Type[9])) != __PAIR32__(Type[9], HIWORD(Type[10])) )
    return 0;
    return 7;
    if ( Type )
    v12 = abs32(a3 - Type[11]);
    if ( v12 > 2 && v12 < 6 && a3 != -1 )
    return 7;
    NeighbourContent = (__int16 *)Cell::GetNeighbourContent((uint32_t *)a2, ((uint8_t)a3 - 4) & 7);
    v14 = InfantryClass::GetType(NeighbourContent);
    if ( v14 )
    v15 = abs32((((uint8_t)a3 - 4) & 7) - *(uint32_t *)(v14 + 44));
    if ( v15 > 2 && v15 < 6 && a3 != -1 )
    return 7;
    if ( a4 - *(char *)(a2 + 283) > 4 )
    return 0;
    result = (*(int (__thiscall **)(int, int, int, int *, bool *, int))(*(uint32_t *)this + 432))(
    this,
    a2,
    a3,
    &a4,
    &v40,
    a5);
    if ( result != 7 )
    if ( a4 != -1 && (*(uint32_t *)(a2 + 320) & 0x100) != 0 && a4 == *(char *)(a2 + 283) + 4 )
    v16 = *(uint32_t *)(a2 + 88);
    v42 = *(uint8_t *)(a2 + 296);
    v17 = (*(uint32_t *)(a2 + 296) & 0x20) != 0;
    v43 = v16;
    v41 = v17;
    if ( *(uint8_t *)(this + 981)
    && !IKnowWhatImDoing
    && !Type::CheckAmbiguity(&MapClass_Instance, a2, 1)
    && !(*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)this + 800))(this) )
    return 7;
    v18 = *(uint32_t *)(a2 + 68);
    v19 = 0;
    if ( v18 != -1 )
    v20 = *((uint32_t *)BuildingTypeClass_Array + v18);
    if ( *(uint8_t *)(v20 + 682) && !(unsigned __int8)House::IsCurrentPlayer(*(void*375 **)(this + 540)) )
    return 7;
    if ( *(uint8_t *)(v20 + 680) && *(unsigned __int8 *)(a2 + 286) >> 4 != *(uint32_t *)(v20 + 672) )
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)this + 684))(this) )
    return 7;
    v21 = (uint32_t *)(*(int (__thiscall **)(int, uint32_t))(*(uint32_t *)this + 1016))(this, 0);
    if ( !(unsigned __int8)InfantryClass::startPanic(*v21) )
    return 7;
    v19 = 5 - HouseClass::IsAllied(*(uint32_t **)(this + 540), *(uint32_t *)(a2 + 80));
    v22 = 0;
    v47 = 0;
    if ( v40 )
    v23 = *(uint32_t **)(a2 + 232);
    else
    v23 = *(uint32_t **)(a2 + 228);
    if ( v23 )
    while ( 1 )
    if ( v23 != (uint32_t *)this )
    v24 = *(uint32_t *)(this + 1692);
    if ( v24 )
    v25 = *(uint32_t *)(v24 + 40);
    if ( v25 )
    v26 = (_WORD *)(*(int (__thiscall **)(int, int *))(*(uint32_t *)v25 + 440))(v25, &a5);
    v27 = (_WORD *)(*(int (__thiscall **)(uint32_t *, int *))(*v23 + 440))(v23, &v44);
    if ( *v27 == *v26 && v27[1] == v26[1] )
    return 0;
    v28 = *(uint32_t **)(this + 732);
    if ( v28 && (v29 = (uint32_t *)v28[182]) != 0 && v23 == v28 && BuildingClass::CheckBridge(v29, this, (void *)a2) )
    v41 = 0;
    else
    if ( !(*(unsigned __int8 (__thiscall **)(uint32_t *))(*v23 + 468))(v23)
    && ((*(int (__thiscall **)(int))(*(uint32_t *)this + 388))(this) == 7
    || (*(int (__thiscall **)(int))(*(uint32_t *)this + 388))(this) == 8
    || (*(int (__thiscall **)(int))(*(uint32_t *)this + 388))(this) == 9
    || (*(int (__thiscall **)(int))(*(uint32_t *)this + 388))(this) == 17
    && *(uint8_t *)(*(uint32_t *)(this + 1728) + 3778)
    || ((*(int (__thiscall **)(int))(*(uint32_t *)this + 388))(this) == 11
    || (*(int (__thiscall **)(int))(*(uint32_t *)this + 388))(this) == 25
    || (*(int (__thiscall **)(int))(*(uint32_t *)this + 388))(this) == 5)
    && *(uint8_t *)(*(uint32_t *)(this + 1728) + 3779)) )
    if ( v23 == *(uint32_t **)(this + 1444)
    || (v45[0] = v23[39],
    v45[1] = v23[40],
    v45[2] = v23[41],
    Coord::To_Cell(&MapClass_Instance, v45) == *(void **)(this + 1444))
    || v23 == *(uint32_t **)(this + 692) )
    if ( (*(unsigned __int8 (__thiscall **)(uint32_t *))(*v23 + 352))(v23) )
    return 7;
    if ( !*(uint8_t *)(this + 1048)
    && !v40
    && flt_89EA40[9 * *(uint32_t *)(a2 + 236) + *(uint32_t *)(*(uint32_t *)(this + 1728) + 1660)] == 0.0 )
    return 7;
    return 0;
    v30 = Cell::IsBridge((uint32_t *)a2);
    v31 = v30;
    if ( v30 )
    if ( v23 != v30 )
    if ( v30 == *(uint32_t **)(this + 1444) )
    goto LABEL_134;
    v32 = (uint32_t *)(*(int (__thiscall **)(uint32_t *, uint8_t *))(*v30 + 72))(v30, v46);
    if ( Coord::To_Cell(&MapClass_Instance, v32) == *(void **)(this + 1444)
    || v31 == *(uint32_t **)(this + 692) )
    goto LABEL_134;
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)this + 388))(this) == 11 )
    v33 = *(uint32_t **)(this + 536);
    if ( v33 == v23 && (*(int (__thiscall **)(uint32_t *))(*v33 + 44))(v33) == 1 )
    return 7;
    if ( *(uint8_t *)(*(uint32_t *)(this + 1728) + 3782)
    && (*(unsigned __int8 (__thiscall **)(uint32_t *))(*v23 + 128))(v23)
    && *(uint32_t **)(this + 1444) == v23
    && !*(uint8_t *)((*(int (__thiscall **)(uint32_t *))(*v23 + 132))(v23) + 3220) )
    return 0;
    if ( (*(int (__thiscall **)(uint32_t *))(*v23 + 44))(v23) != 6 )
    LABEL_96:
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)this + 388))(this) == 7
    && v23 == *(uint32_t **)(this + 1444)
    && *(uint8_t *)(this + 1048) )
    return 0;
    if ( Object::IsAlliedWithObjectHouse(*(uint32_t **)(this + 540), (int)v23) || IKnowWhatImDoing )
    switch ( (*(int (__thiscall **)(uint32_t *))(*v23 + 44))(v23) )
    case 1:
    if ( !v23[413] )
    WinAPI::Wrapper(-2147467261);
    if ( (*(unsigned __int8 (__stdcall **)(uint32_t))(*(uint32_t *)v23[413] + 16))(v23[413]) || v23[361] )
    if ( *((uint8_t *)v23 + 1718) )
    goto LABEL_128;
    if ( !v23[413] )
    WinAPI::Wrapper(-2147467261);
    if ( (*(unsigned __int8 (__stdcall **)(uint32_t))(*(uint32_t *)v23[413] + 164))(v23[413]) )
    LABEL_128:
    if ( v19 < 2 )
    v19 = 2;
    else if ( v19 < 6 )
    v19 = 6;
    goto LABEL_134;
    case 2:
    case 6:
    return 7;
    case 15:
    if ( !v23[413] )
    WinAPI::Wrapper(-2147467261);
    if ( !(*(unsigned __int8 (__stdcall **)(uint32_t))(*(uint32_t *)v23[413] + 16))(v23[413]) )
    ++v47;
    goto LABEL_134;
    default:
    goto LABEL_134;
    v36 = AbstractClass::IsTechnoType(v23);
    if ( v36 && v36[136] == 2 )
    if ( v19 < 1 )
    v19 = 1;
    else
    v37 = (*(int (__thiscall **)(uint32_t *))(*v23 + 44))(v23);
    if ( TechnoClass::GetValue((uint32_t *)this, -1) <= 0 && v37 != 36 )
    return 7;
    if ( v37 == 6 )
    if ( *(uint8_t *)(v23[328] + 5814) )
    return 7;
    if ( v19 < 5 )
    v19 = 5;
    else if ( v37 == 15 )
    if ( (*(unsigned __int8 (__thiscall **)(uint32_t *, uint32_t))(*v23 + 200))(v23, *(uint32_t *)(this + 540)) )
    v19 = 6;
    else if ( v37 != 36 && v19 < 5 )
    v19 = 5;
    goto LABEL_134;
    v34 = (uint8_t *)v23[328];
    if ( !v34[5889] )
    if ( !v34[5823] || (v35 = v23[390], v35 != 12) && v35 != 8 )
    if ( v34[5824] )
    if ( *(uint8_t *)(v23[135] + 506) )
    return 7;
    else
    if ( !v34[5815] )
    goto LABEL_96;
    if ( !BuildingClass::IsPoweredOn(v23) )
    if ( (unsigned __int8)House::IsAlliedWith((void*375 *)v23[135], *(void*375 **)(this + 540)) )
    if ( v19 < 3 )
    v19 = 3;
    else
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)this + 684))(this) )
    return 7;
    if ( v19 < 5 )
    v19 = 5;
    LABEL_134:
    v23 = (uint32_t *)v23[12];
    if ( !v23 )
    v22 = v47;
    break;
    if ( !*(uint8_t *)(this + 1048)
    && !v40
    && flt_89EA40[9 * *(uint32_t *)(a2 + 236) + *(uint32_t *)(*(uint32_t *)(this + 1728) + 1660)] == 0.0 )
    return 7;
    if ( !v19 && v41 )
    return 2;
    if ( v43 != -1 )
    if ( HouseClass::IsAllied(*(uint32_t **)(this + 540), v43) )
    v38 = v42;
    if ( (v42 & 0x1C) == 0x1C && v19 < 2 )
    return v22 != 3 ? 2 : 6;
    goto LABEL_159;
    if ( TechnoClass::GetValue((uint32_t *)this, -1) <= 0 )
    return 7;
    if ( v19 < 5 )
    return 5;
    v38 = v42;
    LABEL_159:
    if ( v19 )
    return v19;
    v39 = (v38 & 0x1C) == 28;
    result = 7;
    if ( !v39 )
    return v19;
    return result;
}

int __fastcall InfantryClass::GetFireError(int a1, int a2, int *a3, int a4, int a5)
{
    int v6; // eax
    int result; // eax
    int *v8; // edi
    int v9; // ecx
    int v10; // eax
    int v11; // eax
    int v12; // ecx
    int v13; // eax
    int v14; // ebp
    int v15; // esi
    int v16; // esi
    char v17[16]; // [esp+14h] [ebp-10h] BYREF
    v6 = *(uint32_t *)(a1 + 1732);
    if ( v6 == 11
    || v6 == 12
    || v6 == 13
    || v6 == 14
    || v6 == 15
    || v6 == 34
    || v6 == 35
    || v6 == 36
    || v6 == 20
    || v6 == 21 )
    return 6;
    v8 = a3;
    if ( TechnoClass::GetValue((uint32_t *)a1, -1) < 0
    && (!a3
    || (*(int (__thiscall **)(int *))(*a3 + 44))(a3) != 15
    || BuildingClass::GetHealthRatio(a3) >= *(double *)&RulesClass_Instance[1].ChronoBeam) )
    return 5;
    if ( a3 )
    if ( (*(int (__thiscall **)(int *))(*a3 + 44))(a3) == 1 )
    if ( *(uint8_t *)((*(int (__thiscall **)(int))(*(uint32_t *)a1 + 132))(a1) + 1682) )
    v9 = a3[170];
    if ( v9 )
    v10 = a1 ? ((*(uint8_t *)(a1 + 20) & 1) != 0 ? a1 : 0) : 0;
    if ( v9 != v10 )
    return 5;
    result = TriggerTypeClass::ReadINI((uint32_t *)a1, a4, a3, a4, a5);
    if ( !result )
    if ( *(double *)(a1 + 1400) > 0.1 )
    return 7;
    if ( *(uint32_t *)(a1 + 1444) )
    v11 = *(uint32_t *)(a1 + 1732);
    if ( v11 != -1 && !byte_7EAF7C[4 * v11] )
    return 7;
    if ( *(uint8_t *)(*(uint32_t *)(a1 + 1728) + 3476) )
    v12 = *(uint32_t *)(a1 + 1652);
    a5 = 0;
    if ( !v12 )
    goto LABEL_37;
    v13 = StreamClass::Set2(&a5, (uint32_t *)(a1 + 1652));
    if ( v13 < 0 && v13 != -2147467262 )
    WinAPI::Wrapper(v13);
    if ( !a5 )
    LABEL_37:
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(int, char *))(*(uint32_t *)a5 + 12))(a5, v17);
    v14 = memcmp(v17, (const char *)&g_CLSID_JumpjetLocomotion, 16);
    ComPtr::Release_Alt(&a5);
    if ( !v14 && *(uint8_t *)(*(uint32_t *)(a1 + 1728) + 3787) )
    if ( !*(uint32_t *)(a1 + 1652) )
    WinAPI::Wrapper(-2147467261);
    if ( (*(unsigned __int8 (__stdcall **)(uint32_t))(**(uint32_t **)(a1 + 1652) + 128))(*(uint32_t *)(a1 + 1652)) )
    return 7;
    v8 = a3;
    v15 = *(uint32_t *)(*(int (__thiscall **)(int, int))(*(uint32_t *)a1 + 1016))(a1, a4);
    if ( !v15 )
    goto LABEL_64;
    if ( *(uint8_t *)(v15 + 297) && *(uint32_t *)(a1 + 1444) )
    return 7;
    if ( *(uint8_t *)(v15 + 336) && v8 != (int *)(*(int (__thiscall **)(int))(*(uint32_t *)a1 + 444))(a1) )
    return 5;
    v16 = *(uint32_t *)(v15 + 172);
    if ( v16 && *(uint8_t *)(v16 + 343) && v8 && (v8[5] & 2) != 0 && v8[14] )
    return 5;
    else
    LABEL_64:
    if ( !*(uint32_t *)(a1 + 1652) )
    WinAPI::Wrapper(-2147467261);
    result = (*(int (__stdcall **)(uint32_t))(**(uint32_t **)(a1 + 1652) + 140))(*(uint32_t *)(a1 + 1652));
    if ( !result )
    return 0;
    return result;
}

char __userpurge InfantryClass::ValidatePlacement@<al>(int a1@<ecx>, __int16 a2@<bx>, int a3@<ebp>, int a4, int a5)
{
    char v6; // bl
    int v8; // edi
    int v9; // eax
    int v10; // eax
    v6 = FootClass::ValidatePlacement((uint32_t **)a1, a2, a3, a4, a5);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)a1 + 1196))(a1) )
    return v6;
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 388))(a1) == 28 )
    return v6;
    if ( *(uint32_t *)(a1 + 692) )
    v8 = 1;
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 388))(a1) == 17 )
    v8 = 17;
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 388))(a1) == 8 )
    v8 = 8;
    goto LABEL_37;
    InfantryClass::ProcessExitQueue(a1);
    if ( *(uint32_t *)(a1 + 1444) )
    v8 = 2;
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 388))(a1) == 8 )
    v8 = 8;
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 388))(a1) == 17 )
    v8 = 17;
    goto LABEL_37;
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 388))(a1) == 5
    || (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 388))(a1) == 11
    || (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 388))(a1) != -1
    && (MissionClass::GetMissionControl((uint32_t *)a1)[5] || MissionClass::GetMissionControl((uint32_t *)a1)[7]) )
    return 0;
    if ( (unsigned __int8)House::IsCurrentPlayer(*(void*375 **)(a1 + 540)) || *(uint32_t *)(a1 + 1492) )
    if ( *(uint32_t *)(a1 + 172) != 11
    && (!TechnoTypeClass::HasVoiceResponse((float *)a1, 16) && !*(uint8_t *)(*(uint32_t *)(a1 + 1728) + 3385)
    || *(uint32_t *)(a1 + 1492)) )
    v8 = 5;
    goto LABEL_37;
    goto LABEL_36;
    if ( *(uint32_t *)(*(uint32_t *)(a1 + 540) + 588) >= SLODWORD(RulesClass_Instance[1].TunnelSpeed)
    || *(uint32_t *)(a1 + 172) == 11 )
    if ( *(uint32_t *)(a1 + 732) )
    v8 = 5;
    goto LABEL_37;
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)a1 + 684))(a1) )
    v9 = *(uint32_t *)(a1 + 1728);
    if ( !*(uint8_t *)(v9 + 3779) && !*(uint8_t *)(v9 + 3782) )
    v8 = 5;
    goto LABEL_37;
    LABEL_36:
    v8 = 11;
    goto LABEL_37;
    v8 = 5;
    LABEL_37:
    v10 = *(uint32_t *)(a1 + 172);
    if ( v10 != 25 && v10 != 11 )
    (*(void (__thiscall **)(int, int, uint32_t))(*(uint32_t *)a1 + 488))(a1, v8, 0);
    return v6;
}

char  InfantryClass::ProcessIdleAction(uint32_t *this)
{
    wchar_t *v2; // edi
    int v3; // eax
    int v4; // ecx
    char result; // al
    int v6; // edi
    char v7; // bl
    __int16 v8; // ax
    int v9; // eax
    __int16 v10; // cx
    __int16 v11; // dx
    unsigned int v12; // [esp+8h] [ebp-24h]
    __int16 v13; // [esp+Ch] [ebp-20h] BYREF
    double v14; // [esp+10h] [ebp-1Ch] BYREF
    double v15; // [esp+18h] [ebp-14h] BYREF
    int v16; // [esp+20h] [ebp-Ch] BYREF
    int v17; // [esp+24h] [ebp-8h]
    int v18; // [esp+28h] [ebp-4h]
    if ( !(*(unsigned __int8 (__thiscall **)(uint32_t *))(*this + 1140))(this) )
    return 0;
    v14 = *(double *)&RulesClass_Instance[1].ForceShieldInvokeAnim * 1800.0;
    v15 = *(double *)&RulesClass_Instance[1].ForceShieldInvokeAnim * 450.0;
    v12 = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 2147483646);
    v2 = CurrentFrame;
    v3 = Math::RoundToInt((v14 - v15) * ((double)(int)v12 * 4.656612877414201e-10) + v15);
    v4 = v17;
    *(this + 90) = v2;
    *(this + 91) = v4;
    *(this + 92) = v3;
    if ( !*(uint8_t *)(*(this + 432) + 3775)
    || (unsigned __int8)House::IsCurrentPlayer((void*375 *)*(this + 135))
    || (int)*(this + 437) <= 50 )
    v6 = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 10);
    v7 = ObjectClass::StepCleanup(this, aCow);
    if ( v7 && Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 10) < 5 )
    v6 = 8;
    switch ( v6 )
    case 1:
    case 2:
    case 7:
    (*(void (__thiscall **)(uint32_t *, int, uint32_t, uint32_t))(*this + 1368))(this, 10, 0, 0);
    if ( *((uint8_t *)this + 131)
    || !(unsigned __int8)House::IsHumanPlayer((void*375 *)*(this + 135))
    || *(int *)(*(this + 432) + 3736) <= 0
    || Random::Range(Randomizer_Global, 0, 2) )
    goto LABEL_22;
    v16 = *(this + 39);
    v17 = *(this + 40);
    v9 = *(this + 432);
    v18 = *(this + 41);
    StartAudioControllerAt(**(uint32_t **)(v9 + 3724), (int)&v16, 0);
    result = 1;
    break;
    case 3:
    case 4:
    case 5:
    (*(void (__thiscall **)(uint32_t *, int, uint32_t, uint32_t))(*this + 1368))(this, 9, 0, 0);
    result = 1;
    break;
    case 6:
    LOWORD(v12) = (unsigned __int16)Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 7) << 13;
    LOBYTE(v8) = 0;
    HIBYTE(v8) = ((v12 >> 7) + 1) >> 1;
    v13 = v8;
    FacingClass::Set_SyncLog(&v13);
    result = 1;
    break;
    case 8:
    LOWORD(v12) = (unsigned __int16)Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 7) << 13;
    LOBYTE(v10) = 0;
    HIBYTE(v10) = ((v12 >> 7) + 1) >> 1;
    LOWORD(v14) = v10;
    FacingClass::Set_SyncLog(&v14);
    if ( !v7
    && ((unsigned __int8)House::IsCurrentPlayer((void*375 *)*(this + 135)) || !*(uint8_t *)(*(this + 432) + 3775)) )
    goto LABEL_22;
    (*(void (__thiscall **)(uint32_t *, int *, int, uint32_t))(*this + 372))(this, &dword_A8F200, 1, 0);
    result = 1;
    break;
    case 9:
    case 10:
    LOWORD(v12) = (unsigned __int16)Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 7) << 13;
    LOBYTE(v11) = 0;
    HIBYTE(v11) = ((v12 >> 7) + 1) >> 1;
    LOWORD(v15) = v11;
    FacingClass::Set_SyncLog(&v15);
    goto LABEL_22;
    default:
    LABEL_22:
    result = 1;
    break;
    else
    (*(void (__thiscall **)(uint32_t *, int *, int, uint32_t))(*this + 372))(this, &dword_A8F200, 1, 0);
    return 1;
    return result;
}

char  InfantryClass::FindMoveTarget(int *this, int *a2, int a3, int a4)
{
    char v4; // bl
    int v6; // eax
    char *MissionControl; // eax
    double v8; // st7
    int v9; // eax
    int v10; // edi
    uint32_t *v11; // eax
    int v12; // ecx
    double v13; // st7
    unsigned int v14; // edi
    int v15; // eax
    float v16; // edx
    uint32_t *v17; // eax
    int v18; // eax
    float v19; // edi
    void *v20; // eax
    float v21; // edx
    uint32_t *v22; // eax
    char *v23; // edi
    int v24; // edi
    int v25; // eax
    char v26; // di
    int v27; // edi
    int v28; // edx
    __int16 v29; // cx
    void *v30; // ebp
    float v31; // ebx
    int LandHeight; // eax
    int v33; // kr04_4
    uint32_t *v34; // eax
    float v35; // edi
    void *v36; // eax
    int v38; // [esp+40h] [ebp-40h] BYREF
    int *v39; // [esp+44h] [ebp-3Ch] BYREF
    int v40; // [esp+48h] [ebp-38h] BYREF
    unsigned int v41; // [esp+4Ch] [ebp-34h]
    int v42; // [esp+50h] [ebp-30h]
    int v43; // [esp+54h] [ebp-2Ch] BYREF
    int v44; // [esp+58h] [ebp-28h] BYREF
    int v45; // [esp+5Ch] [ebp-24h] BYREF
    int v46; // [esp+60h] [ebp-20h]
    int v47; // [esp+64h] [ebp-1Ch]
    uint32_t v48[3]; // [esp+68h] [ebp-18h] BYREF
    _WORD v49[4]; // [esp+74h] [ebp-Ch] BYREF
    int v50; // [esp+7Ch] [ebp-4h]
    v4 = a3;
    v6 = *(this + 433);
    if ( (v6 == 27 || v6 == 28 || v6 == 29 || v6 == 30) && (uint8_t)a3 && (uint8_t)a4 )
    (*(void (__thiscall **)(int *, int, uint32_t, uint32_t))(*this + 1368))(this, 31, 0, 0);
    else if ( (unsigned __int8)House::IsCurrentPlayer((void*375 *)*(this + 135)) )
    MissionControl = (char *)*(this + 433);
    if ( MissionControl == (char *)27
    || MissionControl == (char *)28
    || MissionControl == (char *)29
    || MissionControl == (char *)30 )
    return (char)MissionControl;
    if ( !*(this + 413) )
    WinAPI::Wrapper(-2147467261);
    if ( (*(unsigned __int8 (__stdcall **)(uint32_t))(*(uint32_t *)*(this + 413) + 16))(*(this + 413)) )
    v4 = 0;
    MissionControl = MissionClass::GetMissionControl(this);
    if ( MissionControl[9] || v4 )
    LOBYTE(MissionControl) = *(uint8_t *)(*(this + 432) + 3775);
    if ( (uint8_t)MissionControl || !*(this + 173) || v4 )
    MissionControl = (char *)*(this + 433);
    if ( MissionControl == (char *)-1 || MissionControl == (char *)31 || byte_7EAF7C[4 * (uint32_t)MissionControl] )
    if ( *((uint8_t *)RulesClass_Instance + 6125)
    || TechnoTypeClass::HasVoiceResponse((float *)this, 3)
    || (uint8_t)a4
    || (LOBYTE(MissionControl) = House::IsCurrentPlayer((void*375 *)*(this + 135)), !(uint8_t)MissionControl) )
    if ( !v4 )
    LABEL_33:
    LOBYTE(MissionControl) = *(uint8_t *)(*(this + 432) + 3775);
    if ( !(uint8_t)MissionControl )
    return (char)MissionControl;
    else if ( !v4 )
    if ( !*(this + 373) )
    return (char)MissionControl;
    goto LABEL_33;
    a4 = *a2;
    if ( a4 == dword_A8F200 && a2[1] == dword_A8F204 && a2[2] == dword_A8F208 )
    v10 = (*(int (__thiscall **)(int *, _WORD *))(*this + 72))(this, v49);
    v11 = (uint32_t *)(*(int (__thiscall **)(int *, uint32_t *))(*this + 72))(this, v48);
    v12 = (unsigned __int8)*(uint32_t *)(v10 + 4);
    v45 = (unsigned __int8)*v11;
    v46 = v12;
    if ( v45 == 128 && v12 == 128 )
    v14 = *ProgressTimer::GetValue((_WORD *)this + 452, &v44);
    else
    v13 = Math::CalcAngle(128.0 - (double)v46, (double)v45 - 128.0);
    LOWORD(a4) = Math::RoundToInt((v13 - 1.570796326794897) * -10430.06004058427);
    v14 = a4;
    v15 = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 4);
    v16 = *(float *)this;
    v41 = ((((v14 >> 12) + 1) >> 1) & 7) + v15 - 2;
    a3 = 0;
    v17 = (uint32_t *)(*(int (__thiscall **)(int *, _WORD *, uint32_t))(LODWORD(v16) + 76))(this, v49, 0);
    LOWORD(a4) = *v17 / 256;
    v18 = v17[1] / 256;
    HIWORD(a4) = v18;
    LOBYTE(v18) = *((uint8_t *)this + 140);
    a2 = (int *)a4;
    v40 = *LayerClass::Pathfinding_Find(
    &MapClass_Instance,
    *(uint32_t *)(*(this + 432) + 1660),
    &v43,
    (__int16 *)&a2,
    *(uint32_t *)(*(this + 432) + 1660),
    -1,
    0,
    v18,
    1,
    1,
    0,
    1,
    0,
    1,
    (__int16 *)&a3,
    0,
    0);
    if ( v40 != dword_A8F1E0 )
    v19 = *(float *)this;
    v20 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v40);
    (*(void (__thiscall **)(int *, void *, int))(LODWORD(v19) + 1152))(this, v20, 1);
    if ( !*(this + 413) )
    WinAPI::Wrapper(-2147467261);
    LOBYTE(MissionControl) = (*(int (__stdcall **)(uint32_t))(*(uint32_t *)*(this + 413) + 64))(*(this + 413));
    return (char)MissionControl;
    else
    v45 = *(this + 39);
    v46 = *(this + 40);
    v47 = *(this + 41);
    v8 = Math::CalcAngle((double)a2[1] - (double)v46, (double)v45 - (double)a4);
    LOWORD(a4) = Math::RoundToInt((v8 - 1.570796326794897) * -10430.06004058427);
    v9 = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 4);
    v41 = v9 + (((((unsigned int)a4 >> 12) + 1) >> 1) & 7) - 2;
    v21 = *(float *)this;
    a2 = 0;
    a3 = 0;
    v22 = (uint32_t *)(*(int (__thiscall **)(int *, _WORD *, uint32_t))(LODWORD(v21) + 76))(this, v49, 0);
    LOWORD(a4) = *v22 / 256;
    HIWORD(a4) = v22[1] / 256;
    v38 = a4;
    v23 = (char *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v38);
    v24 = v23[283] + (*(unsigned __int8 (__thiscall **)(int *, uint32_t))(*this + 188))(this, 0) != 0 ? 4 : 0;
    (*(void (__thiscall **)(int *, _WORD *, uint32_t))(*this + 76))(this, v49, 0);
    v25 = v24 * dword_A8F240;
    v26 = 0;
    v50 = v25;
    v43 = 0;
    while ( 1 )
    v27 = ((uint8_t)v41 + v26) & 7;
    v28 = v27 & 7;
    v29 = LOWORD(Direction_X_Offsets[v28]) + v38;
    LOWORD(v28) = HIWORD(Direction_X_Offsets[v28]);
    LOWORD(v42) = v29;
    HIWORD(v42) = HIWORD(v38) + v28;
    a4 = v42;
    v30 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a4);
    if ( LayerClass::IsWithinUsableArea(&MapClass_Instance, (__int16 *)&a4, 1) )
    v31 = *(float *)this;
    LandHeight = ObjectClass::GetLandHeight(this);
    if ( !(*(int (__thiscall **)(int *, void *, int, int, uint32_t, int))(LODWORD(v31) + 428))(
    this,
    v30,
    v27,
    LandHeight,
    0,
    1) )
    v33 = dword_A8F1E0;
    if ( a2 == (int *)dword_A8F1E0 )
    a2 = (int *)a4;
    if ( dword_A8F1E0 )
    goto LABEL_55;
    v48[1] = (SHIWORD(a4) << 8) + 128;
    v48[0] = ((__int16)a4 << 8) + 128;
    v48[2] = v50;
    v34 = Terrain::ClimbCheck(&v45, v48);
    if ( a4 == *v34
    && (*((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a4) + 80) & 0x100) == 0 )
    a3 = a4;
    v33 = dword_A8F1E0;
    LABEL_58:
    LOWORD(MissionControl) = a3;
    v39 = (int *)a3;
    if ( (_WORD)a3 != (_WORD)v33 )
    goto LABEL_62;
    if ( HIWORD(a3) == HIWORD(v33) )
    LOWORD(MissionControl) = (_WORD)a2;
    v39 = a2;
    if ( __PAIR32__(HIWORD(v39), (unsigned __int16)MissionControl) != v33 )
    LABEL_62:
    (*(void (__thiscall **)(int *, int, uint32_t))(*this + 488))(this, 2, 0);
    v35 = *(float *)this;
    v36 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v39);
    LOBYTE(MissionControl) = (*(int (__thiscall **)(int *, void *, int))(LODWORD(v35) + 1152))(
    this,
    v36,
    1);
    return (char)MissionControl;
    v33 = dword_A8F1E0;
    LABEL_55:
    v26 = ++v43;
    if ( v43 >= 8 )
    goto LABEL_58;
    return (char)MissionControl;
}

// 0x0051D6F0
char  InfantryClass::ProcessDeployAction(uint32_t *this, int a2, char a3, char a4)
{
    int v4; // edi
    __int16 *v6; // eax
    int v7; // eax
    int v8; // ebp
    int v9; // eax
    int v10; // eax
    int v11; // eax
    int v12; // eax
    int v13; // edx
    int v14; // ecx
    int v15; // edx
    int v16; // ecx
    char *ProductionTimeMult; // eax
    char *v18; // edx
    int v19; // ecx
    int v20; // eax
    int v21; // edi
    int v22; // edi
    int v24; // [esp+Ch] [ebp-Ch] BYREF
    int v25; // [esp+10h] [ebp-8h]
    int v26; // [esp+14h] [ebp-4h]
    v4 = a2;
    if ( a2 == -1
    || !*(uint32_t *)(*(uint32_t *)(*(this + 432) + 3644) + 36 * a2 + 4)
    || *(this + 433) == 33 && *((uint8_t *)this + 141) )
    return 0;
    if ( *(this + 183)
    && *(uint32_t *)((*(int (__thiscall **)(uint32_t *))(*this + 132))(this) + 2048)
    && ((double (__thiscall *)(uint32_t *))*(uint32_t *)(*this + 692))(this) == 1.0
    && v4 == 3 )
    v4 = 39;
    goto LABEL_12;
    if ( v4 == 5 && !*(uint8_t *)(*(this + 432) + 3773) )
    return 0;
    LABEL_12:
    if ( *(uint32_t *)(*(this + 432) + 1460) == 3 )
    v6 = (__int16 *)(*(int (__thiscall **)(uint32_t *, int *))(*this + 440))(this, &a2);
    v7 = *((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, v6) + 59);
    v8 = 1;
    if ( (v7 == 6 || v7 == 2) && !*((uint8_t *)this + 140) )
    v8 = 0;
    switch ( v4 )
    case 3:
    case 6:
    v4 = 17;
    break;
    case 2:
    case 0:
    v4 = 16;
    break;
    case 9:
    v4 = 18;
    break;
    case 10:
    v4 = 19;
    break;
    case 11:
    v4 = 20;
    break;
    case 12:
    v4 = 21;
    break;
    case 4:
    case 8:
    v4 = 22;
    break;
    v9 = *(this + 442);
    if ( v9 || v8 != 1 )
    if ( v9 == 1 && !v8 )
    v24 = *(this + 39);
    v25 = *(this + 40);
    v11 = *(this + 432);
    v26 = *(this + 41);
    StartAudioControllerAt(*(uint32_t *)(v11 + 3748), (int)&v24, 0);
    else
    v24 = *(this + 39);
    v25 = *(this + 40);
    v10 = *(this + 432);
    v26 = *(this + 41);
    StartAudioControllerAt(*(uint32_t *)(v10 + 3752), (int)&v24, 0);
    *(this + 442) = v8;
    if ( !(*(unsigned __int8 (__thiscall **)(uint32_t *))(*this + 84))(this)
    || *((uint8_t *)this + 140)
    || *(int *)(*(uint32_t *)(*(this + 432) + 3644) + 828) <= 0
    || v4 )
    if ( v4 == 3 && (int)*(this + 437) >= 200 )
    v4 = 37;
    else
    v4 = 23;
    v12 = *(this + 433);
    if ( v4 == v12 || v12 != -1 && !a3 && !byte_7EAF7C[4 * v12] )
    return 0;
    if ( v4 == 27 )
    if ( *(uint32_t *)((*(int (__thiscall **)(uint32_t *))(*this + 132))(this) + 1388) != -1 )
    v24 = *(this + 39);
    v25 = *(this + 40);
    v13 = *this;
    v26 = *(this + 41);
    v14 = *(uint32_t *)((*(int (__thiscall **)(uint32_t *))(v13 + 132))(this) + 1388);
    StartAudioControllerAt(v14, (int)&v24, 0);
    else if ( v4 == 31 && *(uint32_t *)((*(int (__thiscall **)(uint32_t *))(*this + 132))(this) + 1392) != -1 )
    v24 = *(this + 39);
    v15 = *this;
    v25 = *(this + 40);
    v26 = *(this + 41);
    v16 = *(uint32_t *)((*(int (__thiscall **)(uint32_t *))(v15 + 132))(this) + 1392);
    StartAudioControllerAt(v16, (int)&v24, 0);
    *(this + 433) = v4;
    if ( v4 == 9 || v4 == 10 || v4 == 18 || v4 == 19 || v4 == 23 || v4 == 32 )
    ProductionTimeMult = Rules::GetProductionTimeMult((int *)g_GameModeOptions, (unsigned __int8)byte_7EAF7F[4 * v4]);
    v18 = (char *)(this + 64);
    *(this + 64) = CurrentFrame;
    v19 = v25;
    else
    ProductionTimeMult = (char *)(unsigned __int8)byte_7EAF7F[4 * v4];
    v18 = (char *)(this + 64);
    *(this + 64) = CurrentFrame;
    v19 = v25;
    *((uint32_t *)v18 + 1) = v19;
    *((uint32_t *)v18 + 2) = ProductionTimeMult;
    *(this + 67) = ProductionTimeMult;
    if ( a4 )
    v20 = *(uint32_t *)(*(uint32_t *)(*(this + 432) + 3644) + 36 * v4 + 4);
    if ( v20 <= 1 )
    v20 = 1;
    *(this + 62) = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, v20 - 1);
    else
    *(this + 62) = 0;
    if ( !*(this + 27) )
    (*(void (__thiscall **)(uint32_t *))(*this + 1280))(this);
    v21 = v4 - 5;
    if ( v21 )
    v22 = v21 - 2;
    if ( !v22 || v22 == 20 )
    *((uint8_t *)this + 1755) = 0;
    return 1;
    else
    *((uint8_t *)this + 1755) = 1;
    return 1;
}

char  InfantryClass::PlayIdleAnim(uint8_t *this)
{
    int v2; // eax
    unsigned int v3; // edi
    int v4; // ebx
    int v5; // eax
    int v6; // edx
    void *v7; // eax
    int LandHeight; // [esp-Ch] [ebp-28h]
    int v10; // [esp+Ch] [ebp-10h] BYREF
    uint32_t v11[3]; // [esp+10h] [ebp-Ch] BYREF
    v2 = *((uint32_t *)this + 433);
    if ( v2 == 27 || v2 == 28 || v2 == 29 || v2 == 30 )
    (*(void (__thiscall **)(uint8_t *, int, uint32_t, uint32_t))(*(uint32_t *)this + 1368))(this, 28, 0, 0);
    else if ( *(this + 1755) )
    (*(void (__thiscall **)(uint8_t *, int, uint32_t, uint32_t))(*(uint32_t *)this + 1368))(this, 2, 0, 0);
    else
    (*(void (__thiscall **)(uint8_t *, uint32_t, uint32_t, uint32_t))(*(uint32_t *)this + 1368))(this, 0, 0, 0);
    v3 = *ProgressTimer::GetValue((_WORD *)this + 452, &v10);
    v4 = *(uint32_t *)this;
    v5 = *((uint32_t *)this + 39);
    v6 = *((uint32_t *)this + 41);
    v11[1] = *((uint32_t *)this + 40);
    v11[0] = v5;
    v11[2] = v6;
    LandHeight = ObjectClass::GetLandHeight(this);
    v7 = Coord::To_Cell(&MapClass_Instance, v11);
    if ( (*(int (__thiscall **)(uint8_t *, void *, unsigned int, int, uint32_t, int))(v4 + 428))(
    this,
    v7,
    (((v3 >> 12) + 1) >> 1) & 7,
    LandHeight,
    0,
    1) )
    *(this + 1756) = 1;
    else
    *(this + 1756) = 0;
    return FootClass::PlayCOM_audio(this);
}

// 0x0051DBD0
char  InfantryClass::CalcFacingToTarget(uint8_t *this, int *a2)
{
    int v3; // edx
    int *v4; // ebx
    double v5; // st7
    __int16 v6; // ax
    int v7; // ebx
    double v8; // st7
    double v9; // st7
    int v10; // eax
    uint32_t *v11; // eax
    int *v12; // eax
    int v13; // ebx
    void *v14; // eax
    int *v15; // ebx
    double v16; // st7
    __int16 v17; // ax
    int v18; // ebx
    double v19; // st7
    double v20; // st7
    int v21; // eax
    uint32_t *v22; // eax
    int *v23; // eax
    int v24; // edx
    char v26; // [esp+24h] [ebp-58h]
    char v27; // [esp+24h] [ebp-58h]
    double v28; // [esp+3Ch] [ebp-40h]
    double v29; // [esp+3Ch] [ebp-40h]
    double v30; // [esp+44h] [ebp-38h]
    double v31; // [esp+44h] [ebp-38h]
    int v32; // [esp+4Ch] [ebp-30h] BYREF
    int v33; // [esp+50h] [ebp-2Ch]
    int v34; // [esp+54h] [ebp-28h]
    int v35; // [esp+58h] [ebp-24h] BYREF
    int v36; // [esp+5Ch] [ebp-20h]
    int v37; // [esp+60h] [ebp-1Ch]
    int v38[3]; // [esp+64h] [ebp-18h] BYREF
    int v39[3]; // [esp+70h] [ebp-Ch] BYREF
    v32 = *a2;
    v33 = a2[1];
    v3 = *(uint32_t *)this;
    v34 = a2[2];
    v4 = (int *)(*(int (__thiscall **)(uint8_t *, int *))(v3 + 72))(this, v38);
    Int64::Equal(v4, a2);
    v5 = Math::CalcAngle((double)v4[1] - (double)a2[1], (double)*a2 - (double)*v4);
    v6 = Math::RoundToInt((v5 - 1.570796326794897) * -10430.06004058427);
    v7 = a2[2];
    v30 = (double)((__int16)(v6 + 0x7FFF) - 0x3FFF) * -0.00009587672516830327;
    v28 = (double)a2[1];
    v8 = Math::SinCos(v30);
    LODWORD(v28) = Math::RoundToInt(v28 - v8 * 124.0);
    v9 = Math::ArcTan2(v30);
    v10 = Math::RoundToInt(v9 * 124.0 + (double)*a2);
    v36 = LODWORD(v28);
    v35 = v10;
    v37 = v7;
    v26 = BYTE1(*((uint32_t *)Coord::To_Cell(&MapClass_Instance, a2) + 80)) & 1;
    v11 = Coord::To_Cell(&MapClass_Instance, a2);
    v12 = ObjectPlacement::CalcPosition(v11, v39, &v35, 0, v26, 0);
    *a2 = *v12;
    a2[1] = v12[1];
    a2[2] = v12[2];
    if ( *a2 == dword_A8F200 && a2[1] == dword_A8F204 && a2[2] == dword_A8F208 )
    v13 = *(uint32_t *)this;
    v14 = Coord::To_Cell(&MapClass_Instance, &v32);
    if ( !(*(int (__thiscall **)(uint8_t *, void *, int, int, uint32_t, int))(v13 + 428))(this, v14, -1, -1, 0, 1) )
    v15 = (int *)(*(int (__thiscall **)(uint8_t *, int *))(*(uint32_t *)this + 72))(this, v39);
    Int64::Equal(v15, a2);
    v16 = Math::CalcAngle((double)v15[1] - (double)a2[1], (double)*a2 - (double)*v15);
    v17 = Math::RoundToInt((v16 - 1.570796326794897) * -10430.06004058427);
    v18 = v34;
    v31 = (double)((__int16)(v17 + 0x7FFF) - 0x3FFF) * -0.00009587672516830327;
    v29 = (double)v33;
    v19 = Math::SinCos(v31);
    LODWORD(v29) = Math::RoundToInt(v29 - v19 * 128.0);
    v20 = Math::ArcTan2(v31);
    v21 = Math::RoundToInt(v20 * 128.0 + (double)v32);
    v36 = LODWORD(v29);
    v35 = v21;
    v37 = v18;
    v27 = BYTE1(*((uint32_t *)Coord::To_Cell(&MapClass_Instance, &v32) + 80)) & 1;
    v22 = Coord::To_Cell(&MapClass_Instance, &v32);
    v23 = ObjectPlacement::CalcPosition(v22, v38, &v35, 1, v27, 0);
    *a2 = *v23;
    a2[1] = v23[1];
    a2[2] = v23[2];
    if ( *a2 == dword_A8F200 && a2[1] == dword_A8F204 && a2[2] == dword_A8F208
    || !(unsigned __int8)FootClass::Destru_vt319(a2)
    || !*(this + 144) )
    return 0;
    v35 = *((uint32_t *)this + 39);
    v24 = *(uint32_t *)this;
    v36 = *((uint32_t *)this + 40);
    v37 = *((uint32_t *)this + 41);
    (*(void (__thiscall **)(uint8_t *, int *))(v24 + 244))(this, &v35);
    (*(void (__thiscall **)(uint8_t *, int *))(*(uint32_t *)this + 240))(this, a2);
    return 1;
}

int  InfantryClass::CancelMovement(int this)
{
    if ( !*(uint32_t *)(this + 1652) )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(uint32_t))(**(uint32_t **)(this + 1652) + 172))(*(uint32_t *)(this + 1652));
    *(uint32_t *)(this + 1768) = 2;
    *(uint8_t *)(this + 1755) = 0;
    *(uint32_t *)(this + 1732) = 0;
    return TechnoClass::CleanupDirection((uint8_t *)this);
}

int  InfantryClass::FireWeaponWithCleanup(#377 *this, int a2, int a3)
{
    int v4; // edi
    int v5; // eax
    *((uint8_t *)this + 1677) = 0;
    v4 = TechnoClass::FireWeapon(this);
    if ( v4 )
    if ( !*((uint8_t *)this + 129) )
    if ( *(uint8_t *)(*((uint32_t *)this + 432) + 3775) )
    if ( !*((uint32_t *)this + 191) )
    v5 = *(uint32_t *)this;
    *((uint32_t *)this + 437) = 300;
    if ( (*(int (__thiscall **)(void*377 *))(v5 + 388))(this) == 1
    || (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 388))(this) == 15 )
    (*(void (__thiscall **)(void*377 *, int, uint32_t))(*(uint32_t *)this + 488))(this, 5, 0);
    return v4;
}

char  InfantryClass::MoveToCell(int this, int *a2, int a3)
{
    int *v3; // esi
    int GroundHeight; // ebx
    bool v6; // al
    uint32_t *v7; // eax
    int *v8; // eax
    int v9; // ecx
    char v11; // [esp-Ch] [ebp-30h]
    int v12; // [esp+Ch] [ebp-18h] BYREF
    int v13; // [esp+10h] [ebp-14h]
    int v14; // [esp+14h] [ebp-10h]
    int v15[3]; // [esp+18h] [ebp-Ch] BYREF
    v3 = a2;
    GroundHeight = Cell::GetGroundHeight(a2);
    v12 = *v3;
    v13 = v3[1];
    v14 = v3[2];
    if ( v14 == GroundHeight )
    v6 = 1;
    if ( !IKnowWhatImDoing )
    LOWORD(a2) = *v3 / 256;
    HIWORD(a2) = v3[1] / 256;
    if ( LayerClass::IsWithinUsableArea(&MapClass_Instance, (__int16 *)&a2, 1) )
    v6 = 0;
    v11 = v6;
    v7 = Coord::To_Cell(&MapClass_Instance, v3);
    v8 = ObjectPlacement::CalcPosition(v7, v15, v3, v11, 0, 0);
    v12 = *v8;
    v9 = v8[1];
    v13 = v9;
    if ( v12 == dword_A8F200 && v9 == dword_A8F204 && v8[2] == dword_A8F208 )
    return 0;
    v14 = GroundHeight;
    if ( !FootClass::DispatchInput((double *)this, (int)&v12, a3) )
    return 0;
    if ( !*(uint32_t *)(*(uint32_t *)(this + 1728) + 1512) )
    *(uint8_t *)(this + 1051) = 0;
    if ( v14 <= GroundHeight + dword_A8F234 )
    (*(void (__thiscall **)(int, int *))(*(uint32_t *)this + 240))(this, &v12);
    *(uint32_t *)(this + 1768) = 2;
    return 1;
}

int  InfantryClass::SelectAutoTarget(int this, unsigned int a2, __int64 a3)
{
    int v4; // ecx
    uint32_t *v5; // edi
    uint32_t *v6; // eax
    double v7; // st7
    unsigned int v9; // edi
    uint8_t *v10; // ecx
    int v11; // eax
    char v12; // cl
    uint32_t **v13; // eax
    int v14; // eax
    uint32_t **v15; // eax
    int v16; // eax
    int v17; // [esp+1Ch] [ebp-20h]
    int v18; // [esp+20h] [ebp-1Ch]
    uint8_t v19[12]; // [esp+24h] [ebp-18h] BYREF
    uint32_t v20[3]; // [esp+30h] [ebp-Ch] BYREF
    if ( (unsigned __int8)House::IsCurrentPlayer(*(void*375 **)(this + 540)) || !*(uint8_t *)(*(uint32_t *)(this + 1728) + 3779) )
    v9 = a2;
    else
    v4 = *(uint32_t *)(*(uint32_t *)(this + 540) + 21728);
    if ( v4 )
    v5 = (uint32_t *)(*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)v4 + 72))(v4, v19);
    v6 = (uint32_t *)(*(int (__thiscall **)(int, uint32_t *))(*(uint32_t *)this + 72))(this, v20);
    v17 = v6[1] - v5[1];
    v18 = v6[2] - v5[2];
    v7 = Math::Sqrt((double)(*v6 - *v5) * (double)(*v6 - *v5) + (double)v18 * (double)v18 + (double)v17 * (double)v17);
    if ( (int)Math::RoundToInt(v7) < 3840 )
    return *(uint32_t *)(*(uint32_t *)(this + 540) + 21728);
    v9 = a2 | 0x200;
    if ( *(uint8_t *)(*(uint32_t *)(this + 1728) + 3782) )
    v10 = *(uint8_t **)(this + 1444);
    if ( v10 )
    if ( (v10[20] & 1) != 0
    && (*(unsigned __int8 (__thiscall **)(uint8_t *))(*(uint32_t *)v10 + 128))(v10)
    && !*(uint8_t *)((*(int (__thiscall **)(uint32_t))(**(uint32_t **)(this + 1444) + 132))(*(uint32_t *)(this + 1444))
    + 3220)
    && ObjectClass::DistanceTo((void *)this, *(uint32_t *)(this + 1444)) < 3840 )
    return *(uint32_t *)(this + 1444);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)this + 684))(this) )
    goto LABEL_21;
    v11 = *(uint32_t *)(this + 1728);
    v12 = *(uint8_t *)(v11 + 3782);
    if ( !*(uint8_t *)(v11 + 3774) )
    if ( !v12 )
    return 0;
    goto LABEL_20;
    if ( v12 )
    LABEL_20:
    v9 = v9 & 0xFFFFFF4B | 0x10;
    LABEL_21:
    if ( (v9 & 0x1B978) == 0 )
    if ( *(uint32_t *)(*(int (__thiscall **)(int, uint32_t))(*(uint32_t *)this + 1016))(this, 0) )
    v13 = (uint32_t **)(*(int (__thiscall **)(int, uint32_t))(*(uint32_t *)this + 1016))(this, 0);
    LOBYTE(v14) = Building::GetRenderType(*v13);
    v9 |= v14;
    if ( *(uint32_t *)(*(int (__thiscall **)(int, int))(*(uint32_t *)this + 1016))(this, 1) )
    v15 = (uint32_t **)(*(int (__thiscall **)(int, int))(*(uint32_t *)this + 1016))(this, 1);
    LOBYTE(v16) = Building::GetRenderType(*v15);
    v9 |= v16;
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)this + 684))(this)
    && *(uint8_t *)(*(uint32_t *)(*(uint32_t *)(*(int (__thiscall **)(int, uint32_t))(*(uint32_t *)this + 1016))(this, 0) + 172)
    + 329) )
    v9 &= 0xFFFFFF4B;
    if ( (*(uint8_t *)(*(uint32_t *)(this + 1728) + 3778) || TechnoTypeClass::HasVoiceResponse((float *)this, 14))
    && !(unsigned __int8)House::IsCurrentPlayer(*(void*375 **)(this + 540)) )
    v9 |= 0x20u;
    if ( *(uint8_t *)(*(uint32_t *)(this + 1728) + 3781) )
    v9 |= 0x240u;
    return FootClass::SelectAutoTarget_Cloaked(v9, a3, HIDWORD(a3));
}

char  InfantryClass::ValidateTargetAndMove(int *this, int a2, int *a3, int a4)
{
    int v5; // eax
    v5 = ((__int64 (__thiscall *)(int *, int *, int))*(uint32_t *)(*this + 116))(this, a3, a4);
    switch ( v5 )
    case 9:
    case 28:
    case 29:
    v5 = 9;
    break;
    case 27:
    case 57:
    v5 = 5;
    break;
    default:
    break;
    if ( a3 == this && v5 == 5 )
    return 0;
    if ( *((uint8_t *)this + 664) )
    return 0;
    return FootClass::ValidateMove(this, v5, a3, a4);
}

char  InfantryClass::_vt80(uint8_t *this, int a2, __int16 *a3, __int16 *a4, void **a5)
{
    int v6; // eax
    v6 = *((uint32_t *)this + 433);
    if ( (v6 == 27 || v6 == 28 || v6 == 29 || v6 == 30)
    && (*(int (__thiscall **)(uint8_t *, __int16 *, uint32_t, void **))(*(uint32_t *)this + 112))(this, a3, 0, a5) == 2 )
    return 0;
    if ( *(this + 664) )
    return 0;
    return ObjectClass::SpawnInfantry(this, a2, a3, a4, a5);
}

// 0x0051F330
int  InfantryClass::FindPathToBuilding(int *this)
{
    int v2; // eax
    int v3; // ecx
    int result; // eax
    int v5; // edx
    int v6; // edi
    uint32_t v7[3]; // [esp+Ch] [ebp-Ch] BYREF
    v2 = (*(int (__thiscall **)(int *, uint32_t))(*this + 740))(this, 0);
    v3 = *(this + 173);
    if ( !v3 || (result = (*(int (__thiscall **)(int *, int, int))(*this + 936))(this, v3, v2), !(uint8_t)result) )
    if ( (v7[0] = *(this + 39),
    v7[1] = *(this + 40),
    v5 = *this,
    v7[2] = *(this + 41),
    v6 = (*(int (__thiscall **)(int *, int, uint32_t *, uint32_t))(v5 + 964))(this, 1, v7, 0),
    (result = *(this + 173)) == 0)
    && !v6
    || (result = (*(int (__thiscall **)(int *, int))(*this + 968))(this, v6), !v6) )
    if ( *(this + 43) != 5 )
    result = (*(int (__thiscall **)(int *))(*this + 132))(this);
    if ( !*(uint8_t *)(result + 3476) )
    return (*(int (__thiscall **)(int *, uint32_t, int))(*this + 1156))(this, 0, 1);
    return result;
}

int  InfantryClass::EnterBuilding(float *this)
{
    int v2; // ecx
    int v3; // eax
    int v4; // ecx
    int v6; // ecx
    uint8_t *v7; // eax
    int v8; // eax
    char *MissionControl; // eax
    int v10; // esi
    if ( (*(uint8_t *)(*((uint32_t *)this + 432) + 3778) || TechnoTypeClass::HasVoiceResponse(this, 14))
    && (v2 = *((uint32_t *)this + 173)) != 0
    && (*(int (__thiscall **)(int))(*(uint32_t *)v2 + 44))(v2) == 6
    && (v3 = *((uint32_t *)this + 173), v4 = *(uint32_t *)(v3 + 1312), *(uint8_t *)(v4 + 5495))
    && !*(uint8_t *)(v4 + 5889) )
    (*(void (__thiscall **)(float *, int, int))(*(uint32_t *)this + 1152))(this, v3, 1);
    (*(void (__thiscall **)(float *, int, uint32_t))(*(uint32_t *)this + 488))(this, 17, 0);
    return 1;
    else if ( !(unsigned __int8)House::IsCurrentPlayer(*((void*375 **)this + 135))
    && (v6 = *((uint32_t *)this + 173)) != 0
    && (*(int (__thiscall **)(int))(*(uint32_t *)v6 + 44))(v6) == 6
    && ((v7 = (uint8_t *)*((uint32_t *)this + 432), v7[3774])
    || (v7[3764] || v7[3765]) && BuildingClass::CanRepair(*((uint32_t **)this + 173), (int)this)) )
    (*(void (__thiscall **)(float *, uint32_t, int))(*(uint32_t *)this + 1152))(this, *((uint32_t *)this + 173), 1);
    (*(void (__thiscall **)(float *, int))(*(uint32_t *)this + 496))(this, 8);
    return 1;
    else if ( (unsigned __int8)House::IsCurrentPlayer(*((void*375 **)this + 135))
    && ((v8 = *((uint32_t *)this + 433), v8 == 27) || v8 == 28 || v8 == 29 || v8 == 30) )
    (*(void (__thiscall **)(float *))(*(uint32_t *)this + 1064))(this);
    MissionControl = MissionClass::GetMissionControl(this);
    v10 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0);
    return v10 + Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 2);
    else
    return InfantryClass::ScanTarget((int)this);
}

int  InfantryClass::ProcessEnterOrRepair(#375 **this)
{
    int v2; // ecx
    uint8_t *v3; // eax
    int v5; // eax
    if ( !(unsigned __int8)House::IsCurrentPlayer(*(this + 135))
    && (v2 = (int)*(this + 173)) != 0
    && (*(int (__thiscall **)(int))(*(uint32_t *)v2 + 44))(v2) == 6
    && ((v3 = *(this + 432), v3[3774]) || (v3[3764] || v3[3765]) && BuildingClass::CanRepair(*(this + 173), (int)this)) )
    (*((void (__thiscall **)(void*375 **, uint32_t, int))*this + 288))(this, *(this + 173), 1);
    (*((void (__thiscall **)(void*375 **, int))*this + 124))(this, 8);
    return 1;
    else if ( !(unsigned __int8)House::IsCurrentPlayer(*(this + 135))
    && ((v5 = (int)*(this + 433), v5 == 27) || v5 == 28 || v5 == 29 || v5 == 30)
    && !*(this + 173) )
    (*((void (__thiscall **)(void*375 **, int, uint32_t, uint32_t))*this + 342))(this, 31, 0, 0);
    return 1;
    else
    return InfantryClass::ProcessDeploy(this);
}

int  InfantryClass::FindIdleMovePosition(int *this)
{
    int result; // eax
    result = InfantryClass::GetIdleTimer(this);
    if ( result == -1 )
    return FootClass::FindMovePosition((int)this);
    return result;
}

int  InfantryClass::FindIdleAITarget(int *this)
{
    int result; // eax
    result = InfantryClass::GetIdleTimer(this);
    if ( result == -1 )
    return FootClass::FindAITarget(this);
    return result;
}

int  InfantryClass::ProcessIvanBombResult(uint32_t *this)
{
    int v2; // eax
    void*375 *v3; // eax
    v2 = *(this + 433);
    if ( v2 != 27 && v2 != 28 && v2 != 29 && v2 != 30 )
    return FootClass::Destru_vt139(this);
    v3 = (void*375 *)(*(int (__thiscall **)(uint32_t *))(*this + 60))(this);
    if ( (unsigned __int8)House::IsCurrentPlayer(v3) )
    (*(void (__thiscall **)(uint32_t *, uint32_t, int))(*this + 1152))(this, 0, 1);
    return 1;
    if ( *(int *)(*(this + 432) + 1732) > -1 )
    return FootClass::Destru_vt139(this);
    (*(void (__thiscall **)(uint32_t *, int, uint32_t, uint32_t))(*this + 1368))(this, 31, 0, 0);
    return *(uint32_t *)(*(uint32_t *)(*(this + 432) + 3644) + 1120);
}

int  InfantryClass::ProcessIvanBomb(uint32_t *this)
{
    int v2; // ecx
    int v3; // eax
    int v4; // ebx
    uint32_t *v5; // edi
    int v6; // edi
    __int16 *v7; // eax
    void *v8; // eax
    int v9; // edx
    uint8_t v11[4]; // [esp+Ch] [ebp-4h] BYREF
    v2 = *(this + 432);
    if ( !*(uint8_t *)(v2 + 3784) )
    return AbstractClass::COMStub_143();
    v3 = *(this + 433);
    v4 = -1;
    if ( v3 == 27 || v3 == 28 || v3 == 29 || v3 == 30 )
    if ( *(int *)(v2 + 1732) <= -1 )
    (*(void (__thiscall **)(uint32_t *, int, int, uint32_t))(*this + 1368))(this, 31, 1, 0);
    else
    (*(void (__thiscall **)(uint32_t *, int, int, uint32_t))(*this + 1368))(this, 27, 1, 0);
    v5 = (uint32_t *)(*(int (__thiscall **)(uint32_t *))(*this + 1008))(this);
    if ( IsNonNullPtr(v5) && *(uint8_t *)(*v5 + 336) )
    if ( (unsigned __int8)ObjectClass::StepCleanup(this, aDeso) )
    v4 = *(uint32_t *)(*(uint32_t *)(*(this + 432) + 3644) + 976) + 1;
    else
    v6 = *this;
    v7 = (__int16 *)(*(int (__thiscall **)(uint32_t *, uint8_t *))(*this + 440))(this, v11);
    v8 = CellCoord::To_CellObj(&MapClass_Instance, v7);
    (*(void (__thiscall **)(uint32_t *, void *))(v6 + 968))(this, v8);
    v9 = *(this + 432);
    if ( *(int *)(v9 + 1732) > -1 )
    v4 = *(uint32_t *)(v9 + 1732);
    (*(void (__thiscall **)(uint32_t *, int))(*this + 496))(this, 5);
    (*(void (__thiscall **)(uint32_t *, uint32_t, int))(*this + 1152))(this, 0, 1);
    if ( v4 > -1 )
    return v4;
    else
    return AbstractClass::COMStub_143();
}

int  InfantryClass::HandleCursorOverCell(int this, __int16 *a2, char a3, int a4)
{
    int v6; // ebx
    void *v7; // eax
    void *v8; // eax
    int v9; // ecx
    int v10; // eax
    int v11; // eax
    int v12; // ecx
    int v13; // edx
    uint32_t *v14; // eax
    int v15; // ebp
    int v16; // esi
    int v17; // ecx
    int v18; // edx
    int v19; // eax
    int *v20; // ecx
    void *v21; // eax
    uint32_t *v22; // eax
    int v23; // eax
    uint32_t v24[3]; // [esp+Ch] [ebp-Ch] BYREF
    int v25; // [esp+20h] [ebp+8h]
    if ( !(unsigned __int8)House::IsHumanPlayer(*(void*375 **)(this + 540)) )
    return 0;
    v6 = FootClass::HandleCursorWithCheck((int *)this, a2, a3, a4);
    if ( TechnoClass::GetValue((uint32_t *)this, -1) < 0
    && (unsigned __int8)House::IsHumanPlayer(*(void*375 **)(this + 540))
    && v6 == 5 )
    v6 = 26;
    if ( *(uint8_t *)(*(uint32_t *)(this + 1728) + 3476) && (v6 == 1 || v6 == 2) )
    v7 = CellCoord::To_CellObj(&MapClass_Instance, a2);
    if ( InfantryClass::ValidateAttackPosition((int)v7)
    || (v8 = CellCoord::To_CellObj(&MapClass_Instance, a2), (unsigned __int8)InfantryClass::CanMoveThroughCell(v8)) )
    v6 = 0;
    if ( !(unsigned __int8)House::IsHumanPlayer(*(void*375 **)(this + 540)) )
    goto LABEL_33;
    v9 = *(uint32_t *)(this + 1728);
    if ( !*(uint8_t *)(v9 + 3784) )
    goto LABEL_33;
    v10 = *(uint32_t *)(this + 1732);
    if ( v10 != 27 && v10 != 28 && v10 != 29 && v10 != 30 )
    goto LABEL_33;
    if ( v6 != 1 )
    if ( v6 == 5 )
    if ( *(uint8_t *)(v9 + 1708) )
    v11 = (*(int (__thiscall **)(int, uint32_t))(*(uint32_t *)this + 740))(this, 0);
    v12 = *a2 << 8;
    v24[1] = (a2[1] << 8) + 128;
    v13 = *(uint32_t *)this;
    v24[0] = v12 + 128;
    v24[2] = 0;
    if ( (*(unsigned __int8 (__thiscall **)(int, uint32_t *, int))(v13 + 356))(this, v24, v11) )
    goto LABEL_24;
    goto LABEL_23;
    LABEL_33:
    if ( v6 == 1 )
    v21 = CellCoord::To_CellObj(&MapClass_Instance, a2);
    if ( InfantryClass::IsInBounds((int)v21) )
    CellCoord::To_CellObj(&MapClass_Instance, a2);
    return 36 - ((unsigned __int8)globalHelper_084F10(this) != 0);
    goto LABEL_24;
    LABEL_23:
    v6 = 2;
    LABEL_24:
    v14 = CellCoord::To_CellObj(&MapClass_Instance, a2);
    v15 = 0;
    v16 = 0;
    if ( (*(uint32_t *)ScenarioClass_Instance & 0x1000) != 0 )
    if ( a3 )
    v17 = v14[10];
    if ( v17 )
    v18 = *(uint32_t *)(v17 + 16);
    v19 = 0;
    if ( v18 > 0 )
    v20 = *(int **)(v17 + 4);
    while ( 1 )
    v16 = *v20;
    if ( *(uint8_t *)(*v20 + 116) )
    if ( *(uint32_t *)(v16 + 48) == 6 )
    break;
    ++v19;
    ++v20;
    if ( v19 >= v18 )
    goto LABEL_37;
    v15 = **(uint32_t **)(v16 + 96);
    LABEL_37:
    if ( !*(uint8_t *)(*(uint32_t *)(this + 1728) + 3779)
    || !v15
    || !(unsigned __int8)House::IsHumanPlayer(*(void*375 **)(this + 540)) )
    goto LABEL_55;
    if ( *(uint8_t *)(v15 + 5814) )
    v22 = (uint32_t *)(*(int (__thiscall **)(int, uint32_t *))(*(uint32_t *)v16 + 72))(v16, v24);
    LOWORD(v25) = *v22 / 256;
    HIWORD(v25) = v22[1] / 256;
    a4 = v25;
    v23 = -(CellClass::CheckConnectivity((int *)&MapClass_Instance, (int)&a4) != 0);
    LOBYTE(v23) = v23 & 0xFD;
    v6 = v23 + 32;
    goto LABEL_47;
    if ( !*(uint8_t *)(v15 + 3276) )
    LABEL_55:
    if ( v6 == 5 && !(*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)this + 684))(this) )
    v6 = 59;
    goto LABEL_47;
    v6 = 9;
    LABEL_47:
    if ( (unsigned __int8)House::IsHumanPlayer(*(void*375 **)(this + 540))
    && !v6
    && !*(uint8_t *)(*(uint32_t *)(this + 1728) + 3476) )
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)this + 160))(this) )
    return 2;
    return v6;
}

int  InfantryClass::_vt34(uint32_t *this)
{
    return *(this + 432);
}

// 0x005216D0
char  InfantryClass::CanMoveFreely(int this)
{
    char result; // al
    unsigned int v3; // eax
    result = TechnoClass::IsTimerExpired((void*377 *)this);
    if ( result )
    if ( !*(uint32_t *)(this + 1652) )
    WinAPI::Wrapper(-2147467261);
    if ( (*(unsigned __int8 (__stdcall **)(uint32_t))(**(uint32_t **)(this + 1652) + 16))(*(uint32_t *)(this + 1652)) )
    return 0;
    else if ( *(uint8_t *)(this + 1755) )
    return 0;
    else if ( *(uint8_t *)(this + 1677) )
    return 0;
    else
    v3 = *(uint32_t *)(this + 1732);
    return v3 != 27 && v3 != 28 && v3 != 29 && v3 != 30 && (v3 < 2 || v3 == 16);
    return result;
}

// 0x00521760
char  InfantryClass::ParachuteTo(int this, int a2)
{
    if ( !(unsigned __int8)ObjectClass::ParachuteDrop((void*374 *)this) )
    return 0;
    if ( (unsigned __int8)House::IsCurrentPlayer(*(void*375 **)(this + 540)) )
    (*(void (__thiscall **)(int, int, uint32_t))(*(uint32_t *)this + 488))(this, 5, 0);
    else
    (*(void (__thiscall **)(int, int, uint32_t))(*(uint32_t *)this + 488))(this, 15, 0);
    (*(void (__thiscall **)(int, int, int, uint32_t))(*(uint32_t *)this + 1368))(this, 33, 1, 0);
    return 1;
}

// 0x005217C0
int  InfantryClass::MarkCellPassability(void *this, uint32_t *a2)
{
    char v3; // bp
    uint8_t *v4; // esi
    int result; // eax
    v3 = Input::OffsetToDirection(a2);
    v4 = Coord::To_Cell(&MapClass_Instance, a2);
    if ( dword_A8F234 + Cell::GetGroundHeight(a2) <= a2[2] && (*((uint32_t *)v4 + 80) & 0x100) != 0 )
    v4[296] |= 1 << v3;
    result = (*(int (__thiscall **)(void *))(*(uint32_t *)this + 56))(this);
    *((uint32_t *)v4 + 22) = result;
    else
    v4[292] |= 1 << v3;
    result = (*(int (__thiscall **)(void *))(*(uint32_t *)this + 56))(this);
    *((uint32_t *)v4 + 21) = result;
    return result;
}

// 0x00521850
char __stdcall InfantryClass::ClearCellPassability(uint32_t *a1)
{
    char v1; // bl
    uint8_t *v2; // esi
    char result; // al
    v1 = Input::OffsetToDirection(a1);
    v2 = Coord::To_Cell(&MapClass_Instance, a1);
    if ( Cell::GetGroundHeight(a1) + dword_A8F234 > a1[2] )
    result = ~(1 << v1) & v2[292];
    v2[292] = result;
    if ( (result & 0x1C) == 0 )
    *((uint32_t *)v2 + 21) = -1;
    else
    result = ~(1 << v1) & v2[296];
    v2[296] = result;
    if ( (result & 0x1C) == 0 )
    *((uint32_t *)v2 + 22) = -1;
    return result;
}

int  InfantryClass::GetDeployWeaponIndex(#377 *this, int a2)
{
    int v3; // ecx
    int v4; // eax
    v3 = *((uint32_t *)this + 432);
    if ( !*(uint8_t *)(v3 + 1708) )
    return TechnoClass::SelectWeapon(this);
    v4 = *((uint32_t *)this + 433);
    if ( v4 == 27 || v4 == 28 || v4 == 29 || v4 == 30 )
    return *(uint32_t *)(v3 + 1704);
    if ( !*((uint8_t *)this + 130)
    || *(uint32_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 3408) == -1 )
    return 0;
    return *(uint32_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 3408);
}

// 0x00521B20
int  InfantryClass::ResetMissionIfDone(uint32_t *this)
{
    int result; // eax
    result = *(this + 433);
    if ( result == 6 || result == 3 || result == 17 )
    *(this + 433) = -1;
    return result;
}

// 0x00521B40
char  InfantryClass::ProcessMission16(uint8_t *this)
{
    char result; // al
    int v2; // eax
    result = *(this + 1764);
    if ( result )
    v2 = *(uint32_t *)this;
    *(this + 1764) = 0;
    return (*(int (__stdcall **)(int, uint32_t, uint32_t))(v2 + 1368))(27, 0, 0);
    return result;
}

// 0x00521B60
bool  InfantryClass::CanInitiateDeploy(uint32_t *this)
{
    int v2; // eax
    int v3; // esi
    v2 = *(this + 43);
    if ( v2 == 6 || v2 == 21 || *((uint8_t *)this + 1677) || *((uint8_t *)this + 141) )
    return 0;
    if ( !*(this + 413) )
    WinAPI::Wrapper(-2147467261);
    if ( (*(unsigned __int8 (__stdcall **)(uint32_t))(*(uint32_t *)*(this + 413) + 128))(*(this + 413))
    && (*(int (__thiscall **)(uint32_t *))(*this + 388))(this) != 5
    && (*(int (__thiscall **)(uint32_t *))(*this + 388))(this) != 15
    && ((*(int (__thiscall **)(uint32_t *))(*this + 388))(this) != 1 || *(this + 173)) )
    return 0;
    v3 = *(this + 433);
    return v3 == -1 || byte_7EAF7C[4 * v3];
}

char  InfantryClass::InitVoiceResponseTimer(int this)
{
    int v2; // eax
    v2 = *(uint32_t *)(this + 1728);
    if ( !*(uint8_t *)(v2 + 3772) )
    LOBYTE(v2) = TechnoTypeClass::HasVoiceResponse((float *)this, 13);
    if ( !(uint8_t)v2 )
    *(uint32_t *)(this + 1748) = 300;
    return v2;
}

// 0x00521C40
int  InfantryClass::ResetReloadIfNeeded(uint32_t *this)
{
    int result; // eax
    result = *(this + 432);
    if ( !*(uint8_t *)(result + 3772) )
    *(this + 437) = 0;
    return result;
}

// 0x00521C60
int  InfantryClass::SetMissionOnCondition(void *this, int a2)
{
    if ( a2 == 1 )
    return (*(int (__thiscall **)(void *, int, uint32_t, uint32_t))(*(uint32_t *)this + 1368))(this, 10, 0, 0);
    else
    return (*(int (__thiscall **)(void *, int, uint32_t, uint32_t))(*(uint32_t *)this + 1368))(this, 9, 0, 0);
}

// 0x00521D30
uint32_t * InfantryClass::GetTransformMatrix(void *this, uint32_t *a2, int a3)
{
    uint32_t *v3; // ecx
    uint8_t v5[12]; // [esp+Ch] [ebp-Ch] BYREF
    v3 = (uint32_t *)(*(int (__thiscall **)(void *, uint8_t *, int, uint32_t, uint32_t, uint32_t))(*(uint32_t *)this + 176))(
    this,
    v5,
    a3,
    0,
    0,
    0);
    *a2 = *v3;
    a2[1] = v3[1];
    a2[2] = v3[2];
    return a2;
}

// 0x00521D80
int  InfantryClass::ComputeDeploySpeedFactor(int this)
{
    int v2; // ecx
    v2 = TechnoClass::ComputeSpeedFactorEx((double *)this);
    if ( *(uint8_t *)(this + 1755) )
    if ( *(uint8_t *)(*(uint32_t *)(this + 1728) + 3773) )
    return ((unsigned int)(((unsigned __int64)(1431655765LL * v2) >> 32) - v2) >> 31)
    + ((int)(((unsigned __int64)(1431655765LL * v2) >> 32) - v2) >> 1)
    + v2;
    v2 += v2 / 2;
    return v2;
}

int  InfantryClass::CheckAndApplyBomb(int *this)
{
    int result; // eax
    int (__stdcall ***v3)(uint32_t, void *, int *); // esi
    int v4; // esi
    int v5; // eax
    int v6; // edi
    int v7; // [esp+14h] [ebp-18h] BYREF
    int v8; // [esp+18h] [ebp-14h] BYREF
    char v9[16]; // [esp+1Ch] [ebp-10h] BYREF
    FootClass::vt_entry_4F4();
    result = *(this + 361);
    if ( result )
    result = ObjectClass::DistanceTo(this, *(this + 361));
    if ( result < 1024 )
    result = *(this + 432);
    if ( *(uint8_t *)(result + 3476) )
    v3 = (int (__stdcall ***)(uint32_t, void *, int *))*(this + 413);
    v7 = 0;
    if ( !v3 )
    goto LABEL_12;
    v4 = (**v3)(v3, &unk_818858, &v8);
    if ( v4 >= 0 )
    v6 = v8;
    ComPtr::Release_Alt(&v7);
    v5 = v6;
    v7 = v6;
    else
    ComPtr::Release_Alt(&v7);
    v5 = 0;
    v7 = 0;
    if ( v4 < 0 && v4 != -2147467262 )
    WinAPI::Wrapper(v4);
    if ( !v5 )
    LABEL_12:
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(int, char *))(*(uint32_t *)v5 + 12))(v5, v9);
    result = v7;
    if ( v7 )
    return (*(int (__stdcall **)(int))(*(uint32_t *)v7 + 8))(v7);
    return result;
}

// 0x00521EB0
char  InfantryClass::CheckDeployPath(uint32_t *this)
{
    int v2; // esi
    int v3; // eax
    uint32_t *v4; // ecx
    uint32_t *v5; // ebp
    int v6; // eax
    int v7; // eax
    int v8; // eax
    int v9; // eax
    int v10; // eax
    int v11; // ecx
    uint32_t *v12; // eax
    LPVOID ppv; // [esp+30h] [ebp-1Ch] BYREF
    int v15; // [esp+34h] [ebp-18h] BYREF
    BOOL v16; // [esp+38h] [ebp-14h] BYREF
    uint8_t v17[16]; // [esp+3Ch] [ebp-10h] BYREF
    v2 = 0;
    if ( *(this + 361) )
    v3 = 0;
    v4 = this + 376;
    do
    if ( *v4 == -1 )
    break;
    if ( *v4 == 8 )
    break;
    ++v2;
    ++v3;
    ++v4;
    while ( v3 < 24 );
    if ( v2 >= 4 )
    return 0;
    if ( !*(uint8_t *)(*(this + 432) + 3476) )
    return 0;
    v5 = this + 413;
    InfantryClass::updateOccupiedBuilding(this + 413);
    if ( !v15 )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(int, uint8_t *))(*(uint32_t *)v15 + 12))(v15, v17);
    v16 = memcmp(v17, &g_CLSID_JumpjetLocomotion, 0x10u) != 0;
    ComPtr::Release_Alt(&v15);
    if ( v16 )
    return 0;
    v6 = *v5;
    v15 = 0;
    if ( !v6 )
    return 0;
    v7 = StreamClass::Set(&v15, this + 413);
    if ( v7 < 0 && v7 != -2147467262 )
    WinAPI::Wrapper(v7);
    if ( !v15 )
    return 0;
    if ( (*(unsigned __int8 (__stdcall **)(int))(*(uint32_t *)v15 + 28))(v15) )
    goto LABEL_36;
    ppv = 0;
    v8 = CreateInstanceCOM(&ppv, (IID *)&g_CLSID_WalkLocomotion, 0, 7u);
    if ( v8 < 0 && v8 != -2147467262 )
    WinAPI::Wrapper(v8);
    if ( !ppv )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(LPVOID, uint32_t *))(*(uint32_t *)ppv + 12))(ppv, this);
    v16 = 0;
    if ( ppv )
    v9 = StreamClass::Set(&v16, &ppv);
    if ( v9 < 0 && v9 != -2147467262 )
    WinAPI::Wrapper(v9);
    COMObject::SwapReference(&v15, v16);
    Release2COM(&v16);
    v10 = v15;
    if ( !v15 )
    if ( !ppv )
    return 0;
    (*(void (__stdcall **)(LPVOID))(*(uint32_t *)ppv + 8))(ppv);
    LABEL_36:
    if ( v15 )
    (*(void (__stdcall **)(int))(*(uint32_t *)v15 + 8))(v15);
    return 0;
    v11 = *v5;
    *(this + 376) = -1;
    (*(void (__stdcall **)(int, int))(*(uint32_t *)v10 + 12))(v10, v11);
    InfantryClass::checkBridgeClearance(ppv);
    v12 = (uint32_t *)(*(int (__thiscall **)(uint32_t, uint8_t *))(*(uint32_t *)*(this + 361) + 72))(*(this + 361), v17);
    if ( !*v5 )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(uint32_t, uint32_t, uint32_t, uint32_t))(*(uint32_t *)*v5 + 68))(*v5, *v12, v12[1], v12[2]);
    if ( ppv )
    (*(void (__stdcall **)(LPVOID))(*(uint32_t *)ppv + 8))(ppv);
    if ( v15 )
    (*(void (__stdcall **)(int))(*(uint32_t *)v15 + 8))(v15);
    return 1;
}

// 0x005220F0
void  InfantryClass::SetFlag1752(uint8_t *this)
{
    *(this + 1752) = 1;
}

void * InfantryClass::CalculateApproachPath(int this, char a2)
{
    int v3; // eax
    void*375 *v5; // eax
    int v6; // eax
    int v7; // edi
    char v8; // bl
    int v9; // eax
    int v10; // eax
    if ( *(uint32_t *)(this + 692) )
    v3 = *(uint32_t *)(this + 1732);
    if ( v3 != 27 && v3 != 28 && v3 != 29 && v3 != 30 )
    return FootClass::CalculateApproachPath((uint32_t *)this, 0);
    v5 = (void*375 *)(*(int (__thiscall **)(int))(*(uint32_t *)this + 60))(this);
    if ( !(unsigned __int8)House::IsCurrentPlayer(v5) )
    v6 = *(uint32_t *)(this + 1728);
    if ( *(uint8_t *)(v6 + 3784) )
    if ( *(uint8_t *)(v6 + 1708) )
    v7 = *(uint32_t *)(v6 + 1704);
    v8 = (*(int (__thiscall **)(int, uint32_t, int))(*(uint32_t *)this + 936))(this, *(uint32_t *)(this + 692), v7);
    v9 = *(uint32_t *)(*(int (__thiscall **)(int, int))(*(uint32_t *)this + 1016))(this, v7);
    if ( v9 )
    if ( !*(uint8_t *)(v9 + 336) )
    v10 = *(uint32_t *)(this + 1732);
    if ( v10 == 27 || v10 == 28 || v10 == 29 || v10 == 30 )
    if ( !v8 && !a2 )
    (*(void (__thiscall **)(int, int, uint32_t, uint32_t))(*(uint32_t *)this + 1368))(this, 31, 0, 0);
    return 0;
    else if ( v8 && !a2 )
    if ( !*(uint32_t *)(this + 1652) )
    WinAPI::Wrapper(-2147467261);
    if ( !(*(unsigned __int8 (__stdcall **)(uint32_t))(**(uint32_t **)(this + 1652) + 16))(*(uint32_t *)(this + 1652)) )
    (*(void (__thiscall **)(int, int, uint32_t, uint32_t))(*(uint32_t *)this + 1368))(this, 27, 0, 0);
    return 0;
    if ( !*(uint32_t *)(this + 1652) )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(uint32_t))(**(uint32_t **)(this + 1652) + 72))(*(uint32_t *)(this + 1652));
    *(uint8_t *)(this + 1764) = 1;
    MissionClass::GetMissionControl((uint32_t *)this);
    Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 2);
    return 0;
}

// 0x005224D0
char  InfantryClass::IsBridgeRepairEnabled(uint32_t *this)
{
    return *(uint8_t *)(*(this + 432) + 3779);
}

// 0x00522600
int  InfantryClass::FireAtTargetPos(int *this, int a2, int a3, int a4)
{
    int v4; // eax
    int v6; // [esp+0h] [ebp-4h] BYREF
    v4 = *this;
    v6 = *(uint32_t *)(*(this + 432) + 160);
    return (*(int (__thiscall **)(int *, int *, uint32_t, int, uint32_t, int, uint32_t, int))(v4 + 364))(
    this,
    &v6,
    0,
    RulesClass_Instance->SilverCrate[5],
    0,
    1,
    0,
    a3);
}

// 0x00522640
int  InfantryClass::GetProductionLimit(int this, char a2)
{
    int result; // eax
    int v4; // eax
    if ( (unsigned __int8)House::IsAlliedWith(*(void*375 **)(this + 540), HouseClass_Player) && !a2 )
    return *(uint32_t *)(this + 1728);
    result = *(uint32_t *)(this + 1304);
    if ( !result )
    if ( !HouseClass_Player )
    return RulesClass_Instance->BarracksRatio;
    v4 = *((uint32_t *)HouseClass_Player + 122);
    if ( !v4 )
    return RulesClass_Instance->WarLimit;
    if ( v4 == 1 )
    return *(uint32_t *)RulesClass_Instance->gapD5C;
    else
    return RulesClass_Instance->BarracksRatio;
    return result;
}

// 0x00522700
void  InfantryClass::CaptureAttackerInfo(#377 *this, int *a2)
{
    bool v3; // zf
    int v4; // eax
    if ( a2 && (*(int (__thiscall **)(int *))(*a2 + 44))(a2) == 15 )
    TechnoClass::ActivateEffect(this);
    v3 = (*(unsigned __int8 (__thiscall **)(int *))(*a2 + 196))(a2) == 0;
    v4 = *a2;
    if ( v3 )
    *((uint32_t *)this + 326) = (*(int (__thiscall **)(int *))(v4 + 136))(a2);
    *((uint32_t *)this + 327) = (*(int (__thiscall **)(int *))(*a2 + 60))(a2);
    else
    *((uint32_t *)this + 326) = (*(int (__thiscall **)(int *, int))(v4 + 204))(a2, 1);
    *((uint32_t *)this + 327) = (*(int (__thiscall **)(int *, int))(*a2 + 208))(a2, 1);
}

// 0x00522780
int  InfantryClass::InitProductionLimits(int this)
{
    int result; // eax
    int v2; // eax
    int v3; // eax
    result = *(uint32_t *)(this + 1728);
    if ( *(uint8_t *)(result + 3376) )
    v2 = *(uint32_t *)(this + 540);
    *(uint8_t *)(this + 472) = 1;
    *(uint32_t *)(this + 1308) = v2;
    v3 = *(uint32_t *)(v2 + 488);
    if ( v3 )
    if ( v3 == 1 )
    result = *(uint32_t *)RulesClass_Instance->gapD5C;
    else
    result = RulesClass_Instance->BarracksRatio;
    *(uint32_t *)(this + 1304) = result;
    else
    result = RulesClass_Instance->WarLimit;
    *(uint32_t *)(this + 1304) = result;
    else
    *(uint8_t *)(this + 472) = 0;
    return result;
}

bool  InfantryClass::CanAttackTarget(#375 **this, #375 *other)
{
    uint32_t *v3; // eax
    _WORD *v4; // ebx
    void*375 *v5; // esi
    bool result; // al
    int v7; // [esp+Ch] [ebp-14h]
    int v8; // [esp+10h] [ebp-10h] BYREF
    uint8_t v9[12]; // [esp+14h] [ebp-Ch] BYREF
    result = 0;
    if ( (*((unsigned __int8 (__thiscall **)(void*375 **))*this + 49))(this) )
    v3 = (uint32_t *)(*((int (__thiscall **)(void*375 **, uint8_t *))*this + 18))(this, v9);
    LOWORD(v7) = *v3 / 256;
    HIWORD(v7) = v3[1] / 256;
    v8 = v7;
    v4 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v8);
    if ( !(unsigned __int8)House::IsAlliedWith(*(this + 135), other)
    && !HouseClass::HasType(v4, *((uint32_t *)other + 12)) )
    v5 = *(this + 327);
    if ( v5 == other || !v5 || (unsigned __int8)House::IsAlliedWith(other, v5) )
    return 1;
    return result;
}

// 0x00522BC0
bool  InfantryClass::CanEnterBuilding(uint32_t *this)
{
    int v2; // eax
    bool result; // al
    result = 0;
    if ( (*(int (__thiscall **)(uint32_t *))(*this + 388))(this) == 5
    || (*(int (__thiscall **)(uint32_t *))(*this + 388))(this) == 11 )
    v2 = *(this + 433);
    if ( !v2 || v2 == 9 || v2 == 10 || v2 == 32 )
    return 1;
    return result;
}

// 0x00522C00
int  InfantryClass::StartBombDeploy(void *this, char a2)
{
    int result; // eax
    if ( a2 )
    return (*(int (__thiscall **)(void *, int, uint32_t, uint32_t))(*(uint32_t *)this + 1368))(this, 32, 0, 0);
    result = (*(int (__thiscall **)(void *))(*(uint32_t *)this + 900))(this);
    if ( (uint8_t)result )
    return (*(int (__thiscall **)(void *, int, uint32_t, uint32_t))(*(uint32_t *)this + 1368))(this, 32, 0, 0);
    return result;
}

int  InfantryClass::SlaveGiveMoney_RecordBalanceBefore(float *this, uint32_t *a2)
{
    float *v2; // ebp
    char v3; // bl
    int result; // eax
    int v5; // esi
    int v6; // edi
    double v7; // st7
    float v8; // [esp+Ch] [ebp-Ch]
    int v9; // [esp+10h] [ebp-8h]
    float v10; // [esp+10h] [ebp-8h]
    float v11; // [esp+14h] [ebp-4h]
    v2 = this + 207;
    v3 = 0;
    result = FirstFloatPositive(this + 207);
    v5 = result;
    if ( result != -1 )
    do
    v6 = a2[135];
    v9 = *(uint32_t *)(v6 + 21388);
    if ( !*(uint8_t *)(v6 + 492) && GameMode_Current[0] )
    v9 = *(uint32_t *)(RulesClass_Instance->ForceShieldDuration + 4 * *(uint32_t *)(v6 + 388)) + *(uint32_t *)(v6 + 21388);
    if ( v5 == -1 )
    v8 = 0.0;
    else
    v8 = FloatArray::Get(v2, v5);
    v10 = (double)v9 * *(float *)&RulesClass_Instance->gapF38[4] * v8;
    if ( v5 != -1 )
    v7 = Float::SubtractClamped(v2, v8, v5);
    if ( v7 > 0.0 )
    v3 = 1;
    v11 = v7;
    HouseClass::GiveTiberium_Storage((uint32_t *)v6, v11, v5);
    if ( v10 > 0.0 )
    HouseClass::GiveTiberium_Storage((uint32_t *)v6, v10, v5);
    result = FirstFloatPositive(v2);
    v5 = result;
    while ( result != -1 );
    if ( v3 )
    return (*(int (__thiscall **)(uint32_t *))(*a2 + 1128))(a2);
    return result;
}

// 0x00522E70
int  InfantryClass::ProcessTiberiumHarvest(int *this)
{
    int v2; // edx
    uint32_t *v4; // ebx
    int v5; // ebp
    double v6; // st7
    int v7; // eax
    float v8; // [esp+Ch] [ebp-1Ch]
    float v9; // [esp+24h] [ebp-4h]
    float v10; // [esp+24h] [ebp-4h]
    int v11; // [esp+24h] [ebp-4h]
    v2 = *this;
    if ( *(uint32_t *)(*(this + 432) + 2048) )
    v4 = (uint32_t *)(*(int (__thiscall **)(int *))(v2 + 444))(this);
    if ( !Cell::IsBridge2(v4) || ((double (__thiscall *)(int *))*(uint32_t *)(*this + 692))(this) == 1.0 )
    (*(void (__thiscall **)(int *, uint32_t, uint32_t, uint32_t))(*this + 1368))(this, 0, 0, 0);
    (*(void (__thiscall **)(int *, int, uint32_t))(*this + 488))(this, 5, 0);
    return 1;
    else
    if ( *(this + 433) != 38 )
    (*(void (__thiscall **)(int *, int, uint32_t, uint32_t))(*this + 1368))(this, 38, 0, 0);
    v5 = BuildingClass::FindByCellHash(v4);
    v9 = (float)*(int *)(*(this + 432) + 2048);
    if ( v9 - Float4::Sum((float *)this + 207) <= 1.0 )
    v10 = (float)*(int *)(*(this + 432) + 2048);
    v6 = v10 - Float4::Sum((float *)this + 207);
    else
    v6 = 1.0;
    v7 = Math::RoundToInt(v6);
    v11 = CellClass::ReduceTiberium((int)v4, v7);
    if ( v11 > 0 )
    v8 = (float)v11;
    Float::Accumulate((float *)this + 207, v8, v5);
    return *(uint32_t *)(*(this + 432) + 3768);
    else
    (*(void (__thiscall **)(int *, uint32_t, uint32_t, uint32_t))(v2 + 1368))(this, 0, 0, 0);
    (*(void (__thiscall **)(int *, int, uint32_t))(*this + 488))(this, 5, 0);
    return 1;
}

char  InfantryClass::_vt322(uint8_t *this, int a2, int a3, int a4)
{
    int v5; // edi
    void *v6; // eax
    int v7; // eax
    int v8; // eax
    LPVOID v9; // edi
    LPVOID v10; // eax
    int v11; // edx
    int v12; // eax
    int v13; // edi
    int v14; // edx
    void *v15; // eax
    LPVOID ppv; // [esp+50h] [ebp-8h] BYREF
    int v18; // [esp+54h] [ebp-4h] BYREF
    if ( (*(unsigned __int8 (__thiscall **)(uint8_t *))(*(uint32_t *)this + 84))(this)
    || (*(unsigned __int8 (__thiscall **)(uint8_t *))(*(uint32_t *)this + 352))(this)
    || *(this + 636)
    || (*(unsigned __int8 (__thiscall **)(uint8_t *))(*(uint32_t *)this + 468))(this)
    || (*(unsigned __int8 (__thiscall **)(uint8_t *))(*(uint32_t *)this + 472))(this) )
    return 0;
    if ( !*((uint32_t *)this + 413) )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(uint32_t, uint32_t))(**((uint32_t **)this + 413) + 156))(*((uint32_t *)this + 413), 0);
    (*(void (__thiscall **)(uint8_t *, int *))(*(uint32_t *)this + 244))(this, &a2);
    v5 = *(uint32_t *)this;
    *(this + 1718) = 1;
    v6 = Coord::To_Cell(&MapClass_Instance, &a2);
    (*(void (__thiscall **)(uint8_t *, void *, int))(v5 + 1152))(this, v6, 1);
    if ( !*((uint32_t *)this + 413) )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(uint32_t, int, int, int))(**((uint32_t **)this + 413) + 120))(*((uint32_t *)this + 413), a2, a3, a4);
    ppv = 0;
    v7 = CreateInstanceCOM(&ppv, (IID *)&g_CLSID_HoverLocomotion, 0, 7u);
    if ( v7 < 0 && v7 != -2147467262 )
    WinAPI::Wrapper(v7);
    v18 = 0;
    if ( ppv )
    v8 = StreamClass::Set(&v18, &ppv);
    if ( v8 < 0 && v8 != -2147467262 )
    WinAPI::Wrapper(v8);
    if ( (*((uint32_t *)Coord::To_Cell(&MapClass_Instance, &a2) + 80) & 0x100) != 0 )
    a4 += dword_A8F234;
    if ( !ppv )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(LPVOID, uint8_t *))(*(uint32_t *)ppv + 12))(ppv, this);
    if ( !v18 )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(int, uint32_t))(*(uint32_t *)v18 + 12))(v18, *((uint32_t *)this + 413));
    v9 = (LPVOID)*((uint32_t *)this + 413);
    v10 = ppv;
    if ( v9 != ppv )
    *((uint32_t *)this + 413) = ppv;
    if ( v10 )
    (*(void (__stdcall **)(LPVOID))(*(uint32_t *)v10 + 4))(v10);
    if ( v9 )
    (*(void (__stdcall **)(LPVOID))(*(uint32_t *)v9 + 8))(v9);
    v11 = a2;
    v12 = a3;
    v13 = *(uint32_t *)this;
    *(this + 636) = 1;
    *((uint32_t *)this + 162) = v11;
    v14 = a4;
    *((uint32_t *)this + 163) = v12;
    *((uint32_t *)this + 164) = v14;
    v15 = Coord::To_Cell(&MapClass_Instance, &a2);
    (*(void (__thiscall **)(uint8_t *, void *, int))(v13 + 1152))(this, v15, 1);
    if ( !*((uint32_t *)this + 413) )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(uint32_t, uint32_t))(**((uint32_t **)this + 413) + 156))(*((uint32_t *)this + 413), 0);
    if ( v18 )
    (*(void (__stdcall **)(int))(*(uint32_t *)v18 + 8))(v18);
    if ( ppv )
    (*(void (__stdcall **)(LPVOID))(*(uint32_t *)ppv + 8))(ppv);
    return 1;
}

uint32_t * InfantryClass::ComputeTransform(int this, uint32_t *a2, int a3, int a4, int a5, int a6)
{
    int v7; // eax
    uint32_t *v8; // eax
    uint32_t *v9; // ecx
    uint32_t v11[3]; // [esp+10h] [ebp-Ch] BYREF
    if ( *(uint8_t *)(this + 130) && *(uint32_t *)(this + 284) && (v7 = TechnoClass::IndexOf(this)) != 0 )
    v8 = (uint32_t *)(*(int (__thiscall **)(uint32_t, uint32_t *, int, uint32_t, uint32_t, uint32_t))(**(uint32_t **)(this + 284) + 176))(
    *(uint32_t *)(this + 284),
    v11,
    -v7,
    0,
    0,
    0);
    else
    v8 = TechnoClass::ComputeTransform((uint32_t **)this, v11, a3, 0, 0, 0);
    v9 = v8;
    *a2 = *v9;
    a2[1] = v9[1];
    a2[2] = v9[2];
    return a2;
}

int InfantryClass::_vt12()
{
    return 1776;
}

// 0x00523300
int __stdcall InfantryClass::GetClassID(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 237448644;
    a2[1] = 298949647;
    a2[2] = -1610610249;
    a2[3] = -777003740;
    return 0;
}

int InfantryClass::_vt11()
{
    return 15;
}

void ** InfantryClass::ScalarDtor(void **Block, char a2)
{
    InfantryClass::Destruct(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

int  InfantryClass::RegisterKill(#377 *this)
{
    int v2; // eax
    int v3; // ebp
    void **v4; // ecx
    void **v5; // ecx
    void **v6; // ecx
    void **v7; // ecx
    void **v8; // ecx
    int result; // eax
    int v10; // eax
    int v11; // eax
    int v12; // [esp+Ch] [ebp-4h]
    uint32_t *v13; // [esp+14h] [ebp+4h]
    v12 = 0;
    v2 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    v3 = (*(int (__thiscall **)(int, uint32_t))(*(uint32_t *)v2 + 132))(v2, *((uint32_t *)this + 135));
    if ( *((uint8_t *)this + 144) )
    v4 = (void **)*((uint32_t *)this + 13);
    if ( v4 )
    if ( v13 )
    TeamClass::Update_0(v4, 6, (int)this, g_TechnoHouseState, 0, 0);
    if ( *((uint8_t *)this + 144) )
    v5 = (void **)*((uint32_t *)this + 13);
    if ( v5 && v13 )
    TeamClass::Update_0(v5, 4, (int)this, g_TechnoHouseState, 0, 0);
    if ( *((uint8_t *)this + 144)
    && (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this) != 1
    && *((uint8_t *)this + 144) )
    v6 = (void **)*((uint32_t *)this + 13);
    if ( v6 && v13 )
    TeamClass::Update_0(v6, 7, (int)this, g_TechnoHouseState, 0, 0);
    if ( *((uint8_t *)this + 144) )
    v7 = (void **)*((uint32_t *)this + 13);
    if ( v7 )
    TeamClass::Update_0(v7, 48, (int)this, g_TechnoHouseState, 0, 0);
    if ( *((uint8_t *)this + 144) )
    v8 = (void **)*((uint32_t *)this + 13);
    if ( v8 )
    TeamClass::Update_0(v8, 29, (int)this, g_TechnoHouseState, 0, 0);
    if ( v13 )
    if ( Object::IsAlliedWithObjectHouse(v13, (int)this) )
    v3 = 0;
    else if ( Audio::IsMediumVolume((float *)this + 84) )
    v3 *= 2;
    else if ( Audio::IsLoud((float *)this + 84) )
    v3 *= 3;
    *(uint32_t *)(*((uint32_t *)this + 135) + 21644) = v13[12];
    v13[5434] += v3;
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this) - 1;
    switch ( result )
    case 0:
    goto LABEL_45;
    case 1:
    if ( !v13 )
    goto LABEL_49;
    if ( !*(uint8_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 3231) )
    HouseClass::IncrementStat(v13 + 2258, *(uint32_t *)(*((uint32_t *)this + 433) + 3576));
    v12 = 1;
    LABEL_41:
    if ( v13 )
    if ( !v12 && !*(uint8_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 3231) )
    HouseClass::IncrementStat(v13 + 2772, *(uint32_t *)(*((uint32_t *)this + 432) + 3576));
    v12 = 1;
    LABEL_45:
    if ( v13 && !v12 && !*(uint8_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 3231) )
    HouseClass::IncrementStat(v13 + 3286, *(uint32_t *)(*((uint32_t *)this + 433) + 3576));
    LABEL_49:
    ++*(uint32_t *)(*((uint32_t *)this + 135) + 21556);
    if ( v13 )
    if ( !*(uint8_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 3231) )
    v11 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 56))(this);
    ++v13[v11 + 5369];
    result = RadarClass::IsActiveMode(&MapClass_Instance);
    if ( (uint8_t)result )
    return RadarClass::SetFlag(&MapClass_Instance, 0);
    return result;
    case 5:
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    if ( !*(uint8_t *)(result + 562) )
    if ( *((uint32_t *)this + 335) != -1 )
    ++*(uint32_t *)(*((uint32_t *)this + 135) + 21640);
    if ( v13 && !*(uint8_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 3231) )
    HouseClass::IncrementStat(v13 + 3800, *(uint32_t *)(*((uint32_t *)this + 328) + 3576));
    v10 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 56))(this);
    ++v13[v10 + 5390];
    result = RadarClass::IsActiveMode(&MapClass_Instance);
    if ( (uint8_t)result )
    return RadarClass::SetFlag(&MapClass_Instance, 0);
    return result;
    case 14:
    goto LABEL_41;
    default:
    return result;
}

// 0x00728E30
char __userpurge InfantryClass::IdleStateMachine@<al>(int a1@<edi>, int a2)
{
    int v2; // edi
    int v3; // eax
    int v4; // edi
    int *v5; // eax
    void **v6; // eax
    int *v7; // edx
    uint32_t *v8; // ecx
    int v9; // edx
    int v10; // eax
    int v11; // edi
    uint8_t *v12; // eax
    int v13; // edi
    int v14; // eax
    int *v15; // edx
    int *v16; // edx
    int v19; // [esp+Ch] [ebp-Ch] BYREF
    int v20; // [esp+10h] [ebp-8h] BYREF
    int v21; // [esp+14h] [ebp-4h]
    int retaddr; // [esp+18h] [ebp+0h]
    int v23; // [esp+20h] [ebp+8h]
    if ( !(*(unsigned __int8 (__stdcall **)(int))(*(uint32_t *)a2 + 16))(a2) )
    return 0;
    v2 = (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(a2 + 8) + 456))(*(uint32_t *)(a2 + 8));
    v3 = (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(a2 + 8) + 464))(*(uint32_t *)(a2 + 8));
    switch ( *(uint32_t *)(a2 + 20) )
    case 1:
    if ( v2 >= 0 )
    InfantryClass::ProcessTunnelMovement(a2 - 4);
    else
    *(uint32_t *)(a2 + 20) = 3;
    break;
    case 2:
    if ( v2 >= 0 )
    if ( !*(uint32_t *)(a2 + 48)
    || (v4 = *(uint32_t *)(a2 + 48), (double)(v4 - Timeout::GetRemaining((int *)(a2 + 36))) / (double)v4 == 1.0) )
    (*(void (__thiscall **)(uint32_t, uint32_t, int, int))(**(uint32_t **)(a2 + 8) + 1348))(
    *(uint32_t *)(a2 + 8),
    0,
    1072693248,
    a1);
    v5 = *(int **)(a2 + 8);
    *(uint32_t *)(a2 + 20) = 3;
    v5 += 39;
    v20 = *v5;
    v21 = v5[1];
    retaddr = v5[2];
    StartAudioControllerAt(RulesClass_Instance->GUICheckboxSound, (int)&v20, 0);
    v6 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v6 )
    v7 = (int *)(*(uint32_t *)(a2 + 8) + 156);
    v20 = *v7;
    v21 = v7[1];
    retaddr = v7[2];
    AnimClass::ctor(v6, (void *)RulesClass_Instance->WeatherConBolts[3], &v20, 0, 1, (void *)0x600, 0, 0);
    (*(void (__thiscall **)(uint32_t, uint32_t))(**(uint32_t **)(a2 + 8) + 220))(*(uint32_t *)(a2 + 8), 0);
    else
    *(uint32_t *)(a2 + 20) = 3;
    break;
    case 3:
    v8 = *(uint32_t **)(a2 + 8);
    if ( v3 == -256 )
    (*(void (__thiscall **)(uint32_t *, uint32_t))(*v8 + 292))(v8, 0);
    *(uint32_t *)(a2 + 20) = 4;
    else
    v19 = v8[39];
    v20 = v8[40];
    v21 = v8[41];
    v9 = *v8;
    if ( v21 <= -256 )
    (*(void (__stdcall **)(uint32_t))(v9 + 292))(0);
    *(uint32_t *)(a2 + 20) = 4;
    else
    v23 = (*(int (__stdcall **)(int))(v9 + 1336))(a1);
    v10 = Math::RoundToInt((double)v23 * *(double *)&RulesClass_Instance->TunnelSpeed);
    if ( v10 <= 5 )
    v10 = 5;
    if ( retaddr - v10 < -256 )
    retaddr = -256;
    (*(void (__thiscall **)(uint32_t, int *))(**(uint32_t **)(a2 + 8) + 436))(*(uint32_t *)(a2 + 8), &v20);
    break;
    case 4:
    FindUnitPlacementTarget(a2 - 4);
    break;
    case 5:
    AnimClass::GetAnimation(a2 - 4);
    break;
    case 6:
    if ( !*(uint32_t *)(a2 + 48)
    || (v11 = *(uint32_t *)(a2 + 48), (double)(v11 - Timeout::GetRemaining((int *)(a2 + 36))) / (double)v11 == 1.0) )
    (*(void (__thiscall **)(uint32_t, int))(**(uint32_t **)(a2 + 8) + 396))(*(uint32_t *)(a2 + 8), 2);
    v12 = *(uint8_t **)(a2 + 8);
    if ( v12[144] )
    if ( !v12[129] && !v12[141] )
    (*(void (__stdcall **)(int))(*(uint32_t *)a2 + 72))(a2);
    goto LABEL_32;
    break;
    case 7:
    if ( !*(uint32_t *)(a2 + 48)
    || (v13 = *(uint32_t *)(a2 + 48), (double)(v13 - Timeout::GetRemaining((int *)(a2 + 36))) / (double)v13 == 1.0) )
    LABEL_32:
    *(uint32_t *)(a2 + 20) = 0;
    FootClass::ClearPathIndex(*(uint32_t **)(a2 + 8));
    break;
    default:
    break;
    v14 = *(uint32_t *)(a2 + 8);
    if ( *(uint8_t *)(v14 + 131) )
    if ( !(unsigned __int8)House::IsHumanPlayer(*(void*375 **)(v14 + 540)) )
    v15 = (int *)(*(uint32_t *)(a2 + 8) + 156);
    v19 = *v15;
    v20 = v15[1];
    v21 = v15[2];
    if ( Cell::IsPassable(&v19)
    || (*(uint32_t *)ScenarioClass_Instance & 0x1000) != 0
    && (v16 = (int *)(*(uint32_t *)(a2 + 8) + 156), v19 = *v16, v20 = v16[1], v21 = v16[2], Game::Stub3((int)&v19)) )
    (*(void (__thiscall **)(uint32_t))(**(uint32_t **)(a2 + 8) + 336))(*(uint32_t *)(a2 + 8));
    InfantryClass::ReleaseInfiltrators(*(uint32_t *)(a2 + 8));
    return 1;
}

// 0x00736579
char __usercall InfantryClass::UpdateBehavior@<al>(int a1@<eax>, int a2@<ecx>, int a3@<ebx>, uint8_t *a4@<esi>, int a5)
{
    void **v5; // eax
    uint32_t *v6; // eax
    int v7; // eax
    int v8; // eax
    int v9; // eax
    int v10; // eax
    int v11; // eax
    int v12; // edi
    int v13; // ecx
    void *v14; // eax
    uint32_t *v15; // eax
    _WORD *v16; // eax
    __int16 v17; // di
    __int16 v18; // bx
    uint32_t *v19; // eax
    uint32_t *v20; // edi
    int v21; // ebx
    __int16 *PlacementCells_Alt; // eax
    void *v23; // eax
    int v25; // [esp-2Eh] [ebp-40h] BYREF
    uint32_t v26[2]; // [esp-26h] [ebp-38h] BYREF
    int *v27; // [esp-1Eh] [ebp-30h]
    uint32_t v28[2]; // [esp-1Ah] [ebp-2Ch] BYREF
    uint32_t v29[4]; // [esp-12h] [ebp-24h] BYREF
    int v30[2]; // [esp-2h] [ebp-14h] BYREF
    int v31; // [esp+6h] [ebp-Ch] BYREF
    int v32; // [esp+Ah] [ebp-8h] BYREF
    int v33; // [esp+Eh] [ebp-4h]
    int vars0; // [esp+12h] [ebp+0h]
    _UNKNOWN *retaddr; // [esp+16h] [ebp+4h]
    v30[0] = a2;
    v30[1] = a3;
    v31 = a1;
    v5 = (void **)__2_YAPAXI_Z((size_t)v27);
    if ( v5 )
    AnimClass::ctor(v5, (void *)RulesClass_Instance->FlamingInfantry, v30, 0, 1, (void *)0x600, 0, 0);
    LOBYTE(v6) = a4[144];
    if ( (uint8_t)v6 )
    if ( (*(int (__thiscall **)(uint8_t *))(*(uint32_t *)a4 + 388))(a4) != 10 )
    a4[1746] = 0;
    UpdateTechnoFiring((void*377 *)a4);
    ((void (__thiscall *)(uint8_t *))UnitClass::UpdateRotation_TurretFacing_EMP)(a4);
    if ( (*(int (__thiscall **)(uint8_t *))(*(uint32_t *)a4 + 388))(a4) == 5
    && (v32 = *((uint32_t *)a4 + 39),
    v7 = *((uint32_t *)a4 + 40),
    v27 = &v32,
    v33 = v7,
    vars0 = *((uint32_t *)a4 + 41),
    !Tactical::IsCellVisible(&MapClass_Instance, &v32))
    && a4[981] )
    v8 = *((uint32_t *)a4 + 373);
    if ( v8 )
    *(uint8_t *)(v8 + 130) = 1;
    (*(void (__thiscall **)(uint8_t *))(*(uint32_t *)a4 + 928))(a4);
    LOBYTE(v6) = (*(int (__thiscall **)(uint8_t *))(*(uint32_t *)a4 + 248))(a4);
    else
    v9 = *((uint32_t *)a4 + 433);
    if ( *(uint8_t *)(v9 + 3608) || *(uint8_t *)(v9 + 3609) )
    ((void (__thiscall *)(uint8_t *))UpdateInfantryIdleWander)(a4);
    (*(void (__thiscall **)(uint8_t *))(*(uint32_t *)a4 + 1060))(a4);
    if ( *(int *)(*((uint32_t *)a4 + 433) + 1504) > 0
    && !Flag::CheckNone(a4 + 848)
    && (*(int (__thiscall **)(uint8_t *))(*(uint32_t *)a4 + 388))(a4) != 16
    && (*(int (__thiscall **)(uint8_t *, int))(*(uint32_t *)a4 + 628))(a4, 17) != 1 )
    Timer::StartDouble(a4 + 848, *(double *)(*((uint32_t *)a4 + 433) + 968));
    if ( (*(unsigned __int8 (__thiscall **)(uint8_t *))(*(uint32_t *)a4 + 512))(a4) )
    (*(void (__thiscall **)(uint8_t *))(*(uint32_t *)a4 + 492))(a4);
    if ( *((uint32_t *)a4 + 136) == 2 && *((uint32_t *)a4 + 435) != -1 )
    (*(void (__thiscall **)(uint8_t *))(*(uint32_t *)a4 + 252))(a4);
    if ( ((unsigned __int8)CurrentFrame & 0xF) == 0 )
    v10 = *((uint32_t *)a4 + 43);
    if ( (v10 == 11 || v10 == 5)
    && !(unsigned __int8)House::IsCurrentPlayer(*((void*375 **)a4 + 135))
    && *((uint32_t *)a4 + 45) == -1 )
    v11 = *((uint32_t *)a4 + 433);
    if ( *((uint32_t *)a4 + 27) < *(uint32_t *)(v11 + 160)
    && (!*((uint32_t *)a4 + 134) || *((uint32_t *)a4 + 43) == 11)
    && !*(uint8_t *)(v11 + 3598)
    && !*(uint8_t *)(v11 + 3599) )
    v12 = ((int (__fastcall *)(uint32_t, uint8_t *))globalHelper_055DD0)(*((uint32_t *)a4 + 135), a4);
    if ( v12 )
    if ( !*((uint32_t *)a4 + 134) )
    v31 = *((uint32_t *)a4 + 39);
    v13 = *((uint32_t *)a4 + 40);
    v26[1] = &v31;
    v32 = v13;
    v33 = *((uint32_t *)a4 + 41);
    v14 = Coord::To_Cell(&MapClass_Instance, &v31);
    TechnoClass::SetFocus(a4, (int)v14);
    (*(void (__thiscall **)(uint8_t *, int, uint32_t))(*(uint32_t *)a4 + 488))(a4, 7, 0);
    (*(void (__thiscall **)(uint8_t *, uint32_t))(*(uint32_t *)a4 + 968))(a4, 0);
    (*(void (__thiscall **)(uint8_t *, int, int))(*(uint32_t *)a4 + 1152))(a4, v12, 1);
    v6 = (uint32_t *)*((uint32_t *)a4 + 433);
    if ( *((uint8_t *)v6 + 3598) )
    LOBYTE(v6) = House::IsCurrentPlayer(*((void*375 **)a4 + 135));
    if ( !(uint8_t)v6 && (int)CurrentFrame - *((uint32_t *)a4 + 48) > 300 )
    if ( !*((uint32_t *)a4 + 413) )
    WinAPI::Wrapper(-2147467261);
    LOBYTE(v6) = (*(int (__cdecl **)(uint32_t))(**((uint32_t **)a4 + 413) + 16))(*((uint32_t *)a4 + 413));
    if ( !(uint8_t)v6 )
    v29[0] = *((uint32_t *)a4 + 39);
    v29[1] = *((uint32_t *)a4 + 40);
    v29[2] = *((uint32_t *)a4 + 41);
    v15 = Coord::To_Cell(&MapClass_Instance, v29);
    v6 = Cell::IsBridge(v15);
    if ( v6 )
    if ( *(uint8_t *)(v6[328] + 5819) )
    v16 = (_WORD *)(*(int (__thiscall **)(uint32_t *, uint32_t *))(*v6 + 440))(v6, v26);
    v17 = *v16 + 3;
    v18 = v16[1] + 1;
    v6 = (uint32_t *)(*(int (__thiscall **)(uint8_t *, uint32_t *))(*(uint32_t *)a4 + 440))(a4, v26);
    if ( *(_WORD *)v6 == v17 && *((_WORD *)v6 + 1) == v18 )
    v28[0] = vars0;
    v28[1] = retaddr;
    v29[0] = a5;
    v19 = Coord::To_Cell(&MapClass_Instance, v28);
    v20 = Cell::IsBridge(v19);
    if ( Team::AllMembersValid((int *)a4) )
    (*(void (__thiscall **)(uint8_t *, int))(*(uint32_t *)a4 + 628))(a4, 3);
    v21 = *(uint32_t *)a4;
    PlacementCells_Alt = (__int16 *)MapClass::FindPlacementCellsAlt(a4, &v25, (int)v20);
    v23 = CellCoord::To_CellObj(&MapClass_Instance, PlacementCells_Alt);
    (*(void (__thiscall **)(uint8_t *, void *))(v21 + 1152))(a4, v23);
    LOBYTE(v6) = (*(int (__thiscall **)(uint8_t *, int, int))(*(uint32_t *)a4 + 488))(a4, 2, 1);
    return (char)v6;
}

