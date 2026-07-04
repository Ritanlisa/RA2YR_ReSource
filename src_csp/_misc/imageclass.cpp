#include "imageclass.hpp"

int * ImageClass::GenerateThumbnail(float *this, int *a2, int *a3, int *a4, char a5)
{
    float *v6; // ebx
    int *v7; // esi
    int v8; // edi
    char *v9; // eax
    int v10; // edi
    uint8_t *v11; // ecx
    int v12; // edx
    void *v13; // edi
    int v14; // ecx
    double v15; // st7
    double v16; // st6
    double v17; // st5
    int v18; // edi
    uint32_t *v19; // esi
    double v20; // st7
    int v21; // eax
    int v22; // ebp
    int v23; // edi
    int v24; // ebp
    int v25; // eax
    int v26; // esi
    int v27; // ebp
    int v28; // edx
    int v29; // eax
    int v30; // esi
    int v31; // ebp
    double v32; // st7
    int v33; // eax
    double v34; // st6
    double v35; // st5
    double v36; // st4
    int v37; // eax
    int v38; // esi
    int v39; // edi
    int v40; // edx
    int v41; // esi
    int v42; // eax
    int v43; // ebp
    double v44; // st3
    int v45; // ecx
    int v46; // ebp
    int v47; // eax
    int v48; // esi
    int v49; // edi
    double v50; // st2
    double v51; // st2
    unsigned __int8 *v52; // eax
    int v53; // eax
    int v54; // edi
    int v55; // eax
    int v56; // esi
    int v57; // eax
    bool v58; // zf
    size_t v59; // esi
    void *v60; // edi
    int v62; // [esp+10h] [ebp-6Ch]
    int v63; // [esp+14h] [ebp-68h]
    int v64; // [esp+18h] [ebp-64h]
    float v65; // [esp+1Ch] [ebp-60h]
    float v66; // [esp+20h] [ebp-5Ch]
    float v67; // [esp+24h] [ebp-58h]
    int v68; // [esp+28h] [ebp-54h]
    int v69; // [esp+2Ch] [ebp-50h]
    int v70; // [esp+30h] [ebp-4Ch]
    int v71; // [esp+34h] [ebp-48h]
    float v72; // [esp+38h] [ebp-44h]
    int v73; // [esp+3Ch] [ebp-40h]
    int v74; // [esp+40h] [ebp-3Ch]
    int v75; // [esp+44h] [ebp-38h]
    int v76; // [esp+48h] [ebp-34h]
    int v77; // [esp+4Ch] [ebp-30h]
    int v78; // [esp+50h] [ebp-2Ch]
    int v79; // [esp+54h] [ebp-28h]
    int v80; // [esp+58h] [ebp-24h]
    float v81; // [esp+5Ch] [ebp-20h]
    float v82; // [esp+60h] [ebp-1Ch]
    int v83; // [esp+60h] [ebp-1Ch]
    int v84; // [esp+60h] [ebp-1Ch]
    int v85; // [esp+64h] [ebp-18h]
    int v86; // [esp+68h] [ebp-14h]
    int i; // [esp+6Ch] [ebp-10h]
    float v88; // [esp+70h] [ebp-Ch]
    int v90; // [esp+84h] [ebp+8h]
    float v91; // [esp+88h] [ebp+Ch]
    float v92; // [esp+8Ch] [ebp+10h]
    int v93; // [esp+8Ch] [ebp+10h]
    v6 = this;
    v7 = a4;
    if ( a5 && (a4[2] <= 0 || a4[3] <= 0) )
    *a4 = *a3;
    a4[1] = a3[1];
    a4[2] = a3[2];
    a4[3] = a3[3];
    if ( !*((uint32_t *)this + 1167) )
    v8 = a3[3] * a3[2];
    v9 = (char *)__2_YAPAXI_Z(3 * v8);
    if ( v9 )
    v10 = v8 - 1;
    if ( v10 >= 0 )
    v11 = v9 + 2;
    v12 = v10 + 1;
    do
    *(v11 - 2) = 0;
    *(v11 - 1) = 0;
    *v11 = 0;
    v11 += 3;
    --v12;
    while ( v12 );
    v13 = v9;
    else
    v13 = 0;
    *((uint32_t *)v6 + 1167) = v13;
    memset(v13, 0, 3 * a3[3] * a3[2]);
    *((uint32_t *)v6 + 1168) = a3[2];
    *((uint32_t *)v6 + 1169) = a3[3];
    if ( a5 )
    RadarClass::UpdateBlips(a3, a4);
    v14 = *((uint32_t *)v6 + 1160);
    v68 = a3[2];
    v92 = v6[1314];
    if ( v14 )
    v90 = (*(int (__thiscall **)(int))(*(uint32_t *)v14 + 124))(v14);
    v62 = (*(int (__thiscall **)(uint32_t))(**((uint32_t **)v6 + 1160) + 128))(*((uint32_t *)v6 + 1160));
    else
    v15 = (double)v68;
    v92 = 140.0 / v15;
    v16 = (double)a3[3];
    v17 = v16 * v92;
    if ( v17 >= 108.0 )
    v92 = 108.0 / v16;
    v90 = Math::RoundToInt(v15 * v92);
    v62 = 108;
    v18 = v90;
    else
    v18 = 140;
    v90 = 140;
    v82 = v17;
    v62 = Math::RoundToInt(v82);
    v6[1314] = v92;
    v19 = __2_YAPAXI_Z(0x20u);
    if ( v19 )
    v19[2] = v62;
    v19[1] = v18;
    v19[3] = 0;
    *v19 = &XSurface_Vtable;
    v19[4] = 2;
    Buffer::Init(v19 + 5, 0, 2 * v18 * v62);
    *v19 = &BSurface_Vtable;
    else
    v19 = 0;
    *((uint32_t *)v6 + 1160) = v19;
    (*(void (__thiscall **)(uint32_t *, uint32_t))(*v19 + 24))(v19, 0);
    v7 = a4;
    v67 = (double)a3[2] / (double)v90;
    v20 = (double)a3[3] / (double)v62;
    v66 = v20;
    v88 = 1.0 / (v20 * v67);
    v21 = (*(int (__thiscall **)(uint32_t, uint32_t, uint32_t))(**((uint32_t **)v6 + 1160) + 92))(*((uint32_t *)v6 + 1160), 0, 0);
    v22 = *v7;
    v83 = v21;
    v23 = Math::RoundToInt((double)*v7 * v92);
    v75 = v23;
    v76 = Math::RoundToInt((double)(v22 + v7[2]) * v92) + 1;
    if ( v76 >= v90 )
    v76 = v90;
    v24 = v7[1];
    v77 = Math::RoundToInt((double)v24 * v92);
    v25 = Math::RoundToInt((double)(v24 + v7[3]) * v92);
    v26 = v62;
    v27 = v25 + 1;
    if ( v25 + 1 >= v62 )
    v74 = v62;
    v27 = v62;
    else
    v74 = v25 + 1;
    v81 = (double)v23 / v92;
    v91 = v81;
    v65 = (double)v77 / v92;
    if ( v77 < v27 )
    v28 = v83;
    v84 = v27 - v77;
    v73 = v28 + 2 * (v23 + v90 * v77);
    do
    v29 = Math::RoundToInt(v65);
    v30 = *((uint32_t *)v6 + 1169);
    if ( v30 >= v29 )
    v64 = v29;
    v31 = v29;
    else
    v31 = *((uint32_t *)v6 + 1169);
    v64 = v31;
    v32 = v65 + v66;
    v33 = Math::RoundToInt(v32) + 1;
    v63 = v30;
    if ( v30 >= v33 )
    v63 = v33;
    if ( v23 < v76 )
    v79 = v73;
    v80 = v76 - v23;
    do
    v34 = 0.0;
    v35 = 0.0;
    v36 = 0.0;
    v37 = Math::RoundToInt(v32);
    v38 = *((uint32_t *)v6 + 1168);
    v86 = v38;
    if ( v38 >= v37 )
    v93 = v37;
    v39 = v37;
    else
    v39 = *((uint32_t *)v6 + 1168);
    v93 = v39;
    v40 = Math::RoundToInt(v32) + 1;
    if ( v38 < v40 )
    v40 = v38;
    v41 = v31;
    v69 = v31;
    if ( v31 < v63 )
    v85 = v63 - v31;
    v42 = v31;
    v43 = v68;
    v71 = v39 + v68 * v42;
    v70 = 3 * v71;
    do
    if ( v85 > 1 )
    if ( v41 == v64 )
    v44 = (double)(v41 + 1) - v65;
    else if ( v41 == v63 - 1 )
    v44 = v32 - (double)v69;
    else
    v44 = 1.0;
    else
    v44 = v66;
    v45 = v39;
    v78 = v39;
    if ( v39 < v40 )
    v46 = v71;
    v47 = v40 - v39;
    v48 = v86 * *((uint32_t *)v6 + 1169);
    v49 = v70;
    for ( i = v47; ; v47 = i )
    if ( v47 > 1 )
    if ( v45 == v93 )
    v50 = (double)(v45 + 1) - v91;
    else if ( v45 == v40 - 1 )
    v72 = v91 + v67;
    v50 = v72 - (double)v78;
    else
    v50 = 1.0;
    else
    v50 = v67;
    v51 = v50 * v44 * v88;
    if ( v46 < v48 )
    v52 = (unsigned __int8 *)(*((uint32_t *)v6 + 1167) + v49);
    v34 = v34 + (double)*v52 * v51;
    v6 = this;
    v35 = v35 + (double)v52[1] * v51;
    v36 = v36 + (double)v52[2] * v51;
    ++v45;
    v49 += 3;
    ++v46;
    v78 = v45;
    if ( v45 >= v40 )
    break;
    v41 = v69;
    v39 = v93;
    v43 = v68;
    v70 += 3 * v68;
    v69 = ++v41;
    v71 += v43;
    while ( v41 < v63 );
    v31 = v64;
    v53 = Math::RoundToInt(v32);
    v54 = 255;
    if ( v53 <= 255 )
    v54 = v53;
    v55 = Math::RoundToInt(v32);
    v56 = 255;
    if ( v55 <= 255 )
    v56 = v55;
    v57 = Math::RoundToInt(v32);
    if ( v57 > 255 )
    v57 = 255;
    v91 = v91 + v67;
    v79 += 2;
    *(_WORD *)(v79 - 2) = (v54 >> g_BitMask_Red << g_BitShift_Blue)
    | (v56 >> g_BitMask_Blue << g_BitMask_Green)
    | (v57 >> g_BitShift_Green_0 << g_BitShift_Red);
    --v80;
    while ( v80 );
    v23 = v75;
    v91 = v81;
    v65 = v32;
    v58 = v84 == 1;
    v73 += 2 * v90;
    --v84;
    while ( !v58 );
    v27 = v74;
    v26 = v62;
    (*(void (__thiscall **)(uint32_t))(**((uint32_t **)v6 + 1160) + 96))(*((uint32_t *)v6 + 1160));
    v59 = v90 * v26 / 8 + 1;
    if ( !*((uint32_t *)v6 + 1181) )
    v60 = __2_YAPAXI_Z(v59);
    *((uint32_t *)v6 + 1181) = v60;
    memset(v60, 0, v59);
    v23 = v75;
    *a2 = v23;
    a2[1] = v77;
    a2[2] = v76 - v23;
    a2[3] = v27 - v77;
    return a2;
}

