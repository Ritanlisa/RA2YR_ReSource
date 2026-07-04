#include "aircrafttrackerclass.hpp"

int  AircraftTrackerClass::FillCurrentVector(int this, int a2, int a3)
{
    uint32_t *v4; // eax
    int v5; // eax
    int v6; // esi
    int v7; // edi
    int v8; // eax
    int v9; // esi
    int v10; // eax
    int v11; // eax
    int v12; // eax
    int v13; // esi
    int v14; // ebx
    int v15; // edi
    uint32_t *v16; // ebp
    int v17; // edi
    int v18; // esi
    int v19; // eax
    int v20; // esi
    int v21; // eax
    int i; // esi
    int v23; // edi
    int v24; // ebp
    int v25; // edx
    int v26; // eax
    int v27; // esi
    __int16 v28; // ax
    int v29; // esi
    int v30; // edi
    int v31; // eax
    int v32; // esi
    int v33; // eax
    int v34; // eax
    int j; // esi
    int v36; // edi
    int v37; // ebp
    int v38; // ecx
    int v39; // edx
    int v40; // eax
    int v41; // eax
    __int16 v42; // ax
    int v43; // esi
    int v44; // edi
    int v45; // eax
    int v46; // esi
    int v47; // eax
    int v48; // eax
    int k; // esi
    int v50; // edi
    int v51; // ebp
    int v52; // ecx
    int v53; // edx
    int v54; // eax
    int v55; // eax
    int v56; // esi
    int v57; // edi
    int v58; // eax
    int v59; // esi
    int v60; // eax
    int v61; // eax
    int m; // esi
    int v63; // edi
    int v64; // ebp
    int v65; // edx
    int v66; // eax
    int v67; // esi
    int v68; // eax
    int v69; // esi
    int v70; // edx
    int v71; // eax
    int v72; // esi
    int v73; // eax
    int v74; // eax
    int v75; // edi
    int v76; // ebp
    int v77; // ebp
    int v78; // edx
    int v79; // eax
    int v80; // ecx
    int v81; // eax
    int v82; // eax
    int v83; // esi
    int v84; // ecx
    int v85; // ebx
    int v86; // edi
    int v87; // eax
    int v88; // ecx
    int v89; // eax
    int v90; // eax
    int v91; // eax
    int v92; // ecx
    int v93; // ebp
    int v94; // edi
    char *v95; // esi
    int v96; // ebx
    int v97; // eax
    int v98; // eax
    int result; // eax
    int v100; // ebp
    int v101; // ebx
    int v102; // eax
    int v103; // eax
    int v104; // ebp
    int v105; // ebx
    int v106; // eax
    int v107; // eax
    int v109; // [esp+24h] [ebp-30h] BYREF
    int v110; // [esp+28h] [ebp-2Ch]
    int v111; // [esp+2Ch] [ebp-28h]
    int v112; // [esp+30h] [ebp-24h]
    int v113; // [esp+34h] [ebp-20h] BYREF
    int v114; // [esp+38h] [ebp-1Ch]
    int v115; // [esp+40h] [ebp-14h] BYREF
    int v116; // [esp+44h] [ebp-10h]
    uint32_t v117[3]; // [esp+48h] [ebp-Ch] BYREF
    int v118; // [esp+58h] [ebp+4h]
    if ( a3 <= 1 )
    a3 = 1;
    v4 = (uint32_t *)(*(int (__thiscall **)(int, uint32_t *))(*(uint32_t *)a2 + 72))(a2, v117);
    v5 = *Coord::ToCell(v4, &v115);
    v114 = v5;
    if ( (v5 & 0x8000u) == 0 )
    v6 = (__int16)v5;
    else
    v6 = 0;
    if ( v114 >= 0 )
    v7 = SHIWORD(v114);
    else
    v7 = 0;
    v8 = v6;
    v9 = 19;
    v10 = v8 / (g_AircraftTrackerPool / 20);
    if ( v10 <= 19 )
    v9 = v10;
    v11 = v7 / (g_AircraftTrackerState / 20);
    if ( v11 > 19 )
    v11 = 19;
    v12 = v9 + 20 * v11;
    v13 = 0;
    v118 = v12;
    v14 = *(uint32_t *)(this + 24 * v12 + 16);
    v15 = this + 24 * v12;
    if ( v14 > 0 )
    v16 = (uint32_t *)(this + 9600);
    do
    v113 = (*(int (__thiscall **)(int, int))(*(uint32_t *)v15 + 24))(v15, v13);
    DynamicVector::Add_Float(v16, &v113);
    ++v13;
    while ( v13 < v14 );
    v109 = v114;
    v17 = 0;
    v111 = 0;
    v113 = 0;
    v112 = 0;
    v110 = 0;
    if ( (__int16)(a3 + v114) >= 0 )
    v18 = (__int16)(a3 + v114);
    else
    v18 = 0;
    if ( v109 >= 0 )
    v17 = SHIWORD(v109);
    v19 = v18 / (g_AircraftTrackerPool / 20);
    v20 = 19;
    if ( v19 <= 19 )
    v20 = v19;
    v21 = v17 / (g_AircraftTrackerState / 20);
    if ( v21 > 19 )
    v21 = 19;
    for ( i = v20 + 20 * v21; i != v118; i = v27 + 20 * v25 )
    v23 = 0;
    ++v112;
    v24 = *(uint32_t *)(this + 24 * i + 16);
    if ( v24 > 0 )
    do
    v109 = (*(int (__thiscall **)(int, int))(*(uint32_t *)(this + 24 * i) + 24))(this + 24 * i, v23);
    DynamicVector::Add_Float((uint32_t *)(this + 9600), &v109);
    ++v23;
    while ( v23 < v24 );
    v25 = i / 20;
    v26 = i % 20 - 1;
    if ( v26 < 20 )
    v27 = v26 < 0 ? 0 : v26;
    else
    v27 = 19;
    if ( v25 < 0 )
    v25 = 0;
    else if ( v25 > 19 )
    v25 = 19;
    v109 = v114;
    v28 = HIWORD(v114) - a3;
    if ( (v114 & 0x8000u) == 0 )
    v29 = (__int16)v114;
    else
    v29 = 0;
    if ( v28 >= 0 )
    v30 = v28;
    else
    v30 = 0;
    v31 = v29;
    v32 = 19;
    v33 = v31 / (g_AircraftTrackerPool / 20);
    if ( v33 <= 19 )
    v32 = v33;
    v34 = v30 / (g_AircraftTrackerState / 20);
    if ( v34 > 19 )
    v34 = 19;
    for ( j = v32 + 20 * v34; j != v118; j = v38 + 20 * v41 )
    v36 = 0;
    ++v111;
    v37 = *(uint32_t *)(this + 24 * j + 16);
    if ( v37 > 0 )
    do
    v109 = (*(int (__thiscall **)(int, int))(*(uint32_t *)(this + 24 * j) + 24))(this + 24 * j, v36);
    DynamicVector::Add_Float((uint32_t *)(this + 9600), &v109);
    ++v36;
    while ( v36 < v37 );
    v38 = j % 20;
    v39 = j / 20;
    if ( j % 20 < 0 )
    v38 = 0;
    else if ( v38 > 19 )
    v38 = 19;
    v40 = v39 + 1;
    if ( v39 + 1 < 0 || v40 <= 19 )
    v41 = v40 < 0 ? 0 : v40;
    else
    v41 = 19;
    v42 = a3 + HIWORD(v114);
    v109 = v114;
    if ( (v114 & 0x8000u) == 0 )
    v43 = (__int16)v114;
    else
    v43 = 0;
    if ( v42 >= 0 )
    v44 = v42;
    else
    v44 = 0;
    v45 = v43;
    v46 = 19;
    v47 = v45 / (g_AircraftTrackerPool / 20);
    if ( v47 <= 19 )
    v46 = v47;
    v48 = v44 / (g_AircraftTrackerState / 20);
    if ( v48 > 19 )
    v48 = 19;
    for ( k = v46 + 20 * v48; k != v118; k = v52 + 20 * v55 )
    v50 = 0;
    ++v113;
    v51 = *(uint32_t *)(this + 24 * k + 16);
    if ( v51 > 0 )
    do
    v109 = (*(int (__thiscall **)(int, int))(*(uint32_t *)(this + 24 * k) + 24))(this + 24 * k, v50);
    DynamicVector::Add_Float((uint32_t *)(this + 9600), &v109);
    ++v50;
    while ( v50 < v51 );
    v52 = k % 20;
    v53 = k / 20;
    if ( k % 20 < 0 )
    v52 = 0;
    else if ( v52 > 19 )
    v52 = 19;
    v54 = v53 - 1;
    if ( v53 - 1 < 0 || v54 <= 19 )
    v55 = v54 < 0 ? 0 : v54;
    else
    v55 = 19;
    v109 = v114;
    if ( (__int16)(v114 - a3) >= 0 )
    v56 = (__int16)(v114 - a3);
    else
    v56 = 0;
    if ( v109 >= 0 )
    v57 = SHIWORD(v109);
    else
    v57 = 0;
    v58 = v56;
    v59 = 19;
    v60 = v58 / (g_AircraftTrackerPool / 20);
    if ( v60 <= 19 )
    v59 = v60;
    v61 = v57 / (g_AircraftTrackerState / 20);
    if ( v61 > 19 )
    v61 = 19;
    for ( m = v59 + 20 * v61; m != v118; m = v67 + 20 * v65 )
    v63 = 0;
    ++v110;
    v64 = *(uint32_t *)(this + 24 * m + 16);
    if ( v64 > 0 )
    do
    a3 = (*(int (__thiscall **)(int, int))(*(uint32_t *)(this + 24 * m) + 24))(this + 24 * m, v63);
    DynamicVector::Add_Float((uint32_t *)(this + 9600), &a3);
    ++v63;
    while ( v63 < v64 );
    v65 = m / 20;
    v66 = m % 20 + 1;
    if ( v66 < 20 )
    v67 = v66 < 0 ? 0 : v66;
    else
    v67 = 19;
    if ( v65 < 0 )
    v65 = 0;
    else if ( v65 > 19 )
    v65 = 19;
    if ( v111 )
    v68 = v110;
    if ( v110 )
    if ( v111 < v110 )
    v68 = v111;
    v69 = v118;
    if ( v68 > 0 )
    a3 = v68;
    do
    v70 = v69 / 20;
    v71 = v69 % 20 - 1;
    if ( v71 < 20 )
    v72 = v71 < 0 ? 0 : v71;
    else
    v72 = 19;
    v73 = v70 - 1;
    if ( v70 - 1 < 0 || v73 <= 19 )
    v74 = v73 < 0 ? 0 : v73;
    else
    v74 = 19;
    v75 = 0;
    v69 = v72 + 20 * v74;
    v76 = *(uint32_t *)(this + 24 * v69 + 16);
    if ( v76 > 0 )
    do
    v109 = (*(int (__thiscall **)(int, int))(*(uint32_t *)(this + 24 * v69) + 24))(this + 24 * v69, v75);
    DynamicVector::Add_Float((uint32_t *)(this + 9600), &v109);
    ++v75;
    while ( v75 < v76 );
    --a3;
    while ( a3 );
    if ( v111 >= 2 && v110 >= 2 )
    v77 = v118 % 20;
    v109 = v118 % 20;
    v78 = v118 / 20;
    v79 = v118 % 20 - 2;
    v114 = v118 / 20;
    if ( v79 < 20 )
    v80 = v79 < 0 ? 0 : v79;
    else
    v80 = 19;
    v81 = v78 - 1;
    if ( v78 - 1 < 0 || v81 <= 19 )
    v82 = v81 < 0 ? 0 : v81;
    else
    v82 = 19;
    v83 = 0;
    v84 = 3 * (v80 + 20 * v82);
    v85 = *(uint32_t *)(this + 8 * v84 + 16);
    v86 = this + 8 * v84;
    if ( v85 > 0 )
    do
    a3 = (*(int (__thiscall **)(int, int))(*(uint32_t *)v86 + 24))(v86, v83);
    DynamicVector::Add_Float((uint32_t *)(this + 9600), &a3);
    ++v83;
    while ( v83 < v85 );
    v77 = v109;
    v78 = v114;
    v87 = v77 - 1;
    if ( v77 - 1 < 0 || v87 <= 19 )
    v88 = v87 < 0 ? 0 : v87;
    else
    v88 = 19;
    v89 = v78 - 2;
    if ( v78 - 2 < 0 || v89 <= 19 )
    v90 = v89 < 0 ? 0 : v89;
    else
    v90 = 19;
    DynamicArray::AddFromList((char *)this, v88 + 20 * v90);
    v91 = v113;
    if ( v113 && (v92 = v110) != 0 )
    v93 = v113;
    if ( v113 >= v110 )
    v93 = v110;
    v94 = v118;
    v95 = (char *)this;
    v96 = v118;
    if ( v93 > 0 )
    do
    v96 = Slider::CalcPosition(v96, -1, 1);
    DynamicArray::AddFromList((char *)this, v96);
    --v93;
    while ( v93 );
    v91 = v113;
    v92 = v110;
    if ( v91 >= 2 && v92 >= 2 )
    v97 = Slider::CalcPosition(v118, -2, 1);
    DynamicArray::AddFromList((char *)this, v97);
    v98 = Slider::CalcPosition(v118, -1, 2);
    DynamicArray::AddFromList((char *)this, v98);
    else
    v95 = (char *)this;
    v94 = v118;
    result = v111;
    if ( v111 )
    v100 = v112;
    if ( v112 )
    if ( v111 < v112 )
    v100 = v111;
    v101 = v94;
    if ( v100 > 0 )
    do
    v101 = Slider::CalcPosition(v101, 1, -1);
    DynamicArray::AddFromList(v95, v101);
    --v100;
    while ( v100 );
    result = v111;
    if ( result >= 2 && v112 >= 2 )
    v102 = Slider::CalcPosition(v94, 2, -1);
    DynamicArray::AddFromList(v95, v102);
    v103 = Slider::CalcPosition(v94, 1, -2);
    result = DynamicArray::AddFromList(v95, v103);
    v104 = v113;
    if ( v113 )
    result = v112;
    if ( v112 )
    if ( v113 >= v112 )
    v104 = v112;
    v105 = v94;
    if ( v104 > 0 )
    v116 = 1;
    do
    v105 = Slider::CalcPosition(v105, 1, v116);
    DynamicArray::AddFromList(v95, v105);
    --v104;
    while ( v104 );
    result = v112;
    if ( v113 >= 2 && result >= 2 )
    v106 = Slider::CalcPosition(v94, 2, 1);
    DynamicArray::AddFromList(v95, v106);
    v107 = Slider::CalcPosition(v94, 1, 2);
    return DynamicArray::AddFromList(v95, v107);
    return result;
}

