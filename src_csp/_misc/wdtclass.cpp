#include "wdtclass.hpp"

char  WDTClass::ParseTerritories(int this, int a2, int a3)
{
    int v3; // eax
    int v5; // esi
    void *v7; // eax
    int v8; // eax
    __int16 v9; // cx
    int v10; // esi
    char v11; // dl
    __int16 v12; // ax
    unsigned int v13; // eax
    char v14; // dl
    char v15; // dl
    int v16; // ecx
    int v17; // esi
    char v18; // al
    int v19; // esi
    char v20; // al
    int v21; // esi
    char v22; // al
    int v23; // esi
    char v24; // al
    int v25; // esi
    char v26; // al
    int v27; // esi
    char v28; // al
    int v29; // esi
    char v30; // al
    int v31; // esi
    char v32; // al
    int v33; // esi
    char v34; // al
    int v35; // esi
    char v36; // al
    int v37; // esi
    char v38; // al
    int v39; // esi
    char v40; // al
    int v41; // esi
    char v42; // al
    int v43; // esi
    char v44; // al
    int v45; // esi
    char v46; // al
    int v47; // esi
    char v48; // al
    int v49; // esi
    char v50; // al
    int v51; // esi
    char v52; // al
    int v53; // esi
    char v54; // al
    int v55; // esi
    char v56; // al
    int v57; // esi
    char v58; // al
    int v59; // esi
    char v60; // al
    int v61; // esi
    char v62; // al
    int v63; // esi
    char v64; // al
    int v65; // esi
    int v66; // eax
    int v67; // ecx
    int v68; // edx
    int v69; // ebx
    int v70; // eax
    int v71; // ecx
    int v72; // edx
    int v73; // edx
    int v74; // eax
    int v75; // ecx
    int v76; // eax
    int v77; // ecx
    int v78; // [esp-4h] [ebp-1Ch]
    void **v79; // [esp+10h] [ebp-8h] BYREF
    int v80; // [esp+14h] [ebp-4h]
    v3 = a3;
    v5 = 0;
    *(uint32_t *)(this + 32) = 0;
    if ( a3 >= 28 )
    while ( v5 + 28 <= v3 )
    v7 = __2_YAPAXI_Z(0x40u);
    if ( v7 )
    v8 = sub_76AAF0(v7);
    else
    v8 = 0;
    sub_76B790(v8);
    LOBYTE(v9) = 0;
    v10 = v5 + 1;
    *(uint32_t *)(v80 + 8) = *(uint32_t *)(this + 32);
    HIBYTE(v9) = *(uint8_t *)(v10 + a2 - 1);
    *(_WORD *)(v80 + 12) = v9;
    *(_WORD *)(v80 + 12) += *(unsigned __int8 *)(v10 + a2);
    v11 = *(uint8_t *)(v10 + a2 + 1);
    v10 += 2;
    *(uint8_t *)(v80 + 14) = v11 + 0x80;
    LOBYTE(v12) = 0;
    LOBYTE(v9) = *(uint8_t *)(v10 + a2) + 0x80;
    ++v10;
    *(uint8_t *)(v80 + 15) = v9;
    HIBYTE(v12) = *(uint8_t *)(v10 + a2);
    ++v10;
    *(_WORD *)(v80 + 16) = v12;
    *(_WORD *)(v80 + 16) += *(unsigned __int8 *)(v10 + a2);
    v13 = *(unsigned __int8 *)(++v10 + a2) - 128;
    ++v10;
    *(uint8_t *)(v80 + 28) = v13 & 0xF;
    *(uint8_t *)(v80 + 29) = (v13 >> 4) & 0xF;
    v14 = *(uint8_t *)(v10 + a2) + 0x80;
    ++v10;
    *(uint8_t *)(v80 + 30) = v14;
    LOBYTE(v9) = *(uint8_t *)(v10 + a2) + 0x80;
    ++v10;
    *(uint8_t *)(v80 + 18) = v9;
    LOBYTE(v13) = *(uint8_t *)(v10 + a2) + 0x80;
    ++v10;
    *(uint8_t *)(v80 + 19) = v13;
    v15 = *(uint8_t *)(v10 + a2) + 0x80;
    ++v10;
    *(uint8_t *)(v80 + 20) = v15;
    v16 = *(unsigned __int8 *)(v10 + a2) - 128;
    v17 = v10 + 1;
    *(uint32_t *)(v80 + 24) = v16;
    if ( *(uint8_t *)(v17 + a2) <= 0x7Fu )
    v18 = *(uint8_t *)(v17 + a2);
    else
    v18 = *(uint8_t *)(v17 + a2) + 0x80;
    v19 = v17 + 1;
    *(uint8_t *)(v80 + 31) = v18;
    if ( *(uint8_t *)(v19 + a2) <= 0x7Fu )
    v20 = *(uint8_t *)(v19 + a2);
    else
    v20 = *(uint8_t *)(v19 + a2) + 0x80;
    v21 = v19 + 1;
    *(uint8_t *)(v80 + 32) = v20;
    if ( *(uint8_t *)(v21 + a2) <= 0x7Fu )
    v22 = *(uint8_t *)(v21 + a2);
    else
    v22 = *(uint8_t *)(v21 + a2) + 0x80;
    v23 = v21 + 1;
    *(uint8_t *)(v80 + 33) = v22;
    if ( *(uint8_t *)(v23 + a2) <= 0x7Fu )
    v24 = *(uint8_t *)(v23 + a2);
    else
    v24 = *(uint8_t *)(v23 + a2) + 0x80;
    v25 = v23 + 1;
    *(uint8_t *)(v80 + 34) = v24;
    if ( *(uint8_t *)(v25 + a2) <= 0x7Fu )
    v26 = *(uint8_t *)(v25 + a2);
    else
    v26 = *(uint8_t *)(v25 + a2) + 0x80;
    v27 = v25 + 1;
    *(uint8_t *)(v80 + 35) = v26;
    if ( *(uint8_t *)(v27 + a2) <= 0x7Fu )
    v28 = *(uint8_t *)(v27 + a2);
    else
    v28 = *(uint8_t *)(v27 + a2) + 0x80;
    v29 = v27 + 1;
    *(uint8_t *)(v80 + 36) = v28;
    if ( *(uint8_t *)(v29 + a2) <= 0x7Fu )
    v30 = *(uint8_t *)(v29 + a2);
    else
    v30 = *(uint8_t *)(v29 + a2) + 0x80;
    v31 = v29 + 1;
    *(uint8_t *)(v80 + 37) = v30;
    if ( *(uint8_t *)(v31 + a2) <= 0x7Fu )
    v32 = *(uint8_t *)(v31 + a2);
    else
    v32 = *(uint8_t *)(v31 + a2) + 0x80;
    v33 = v31 + 1;
    *(uint8_t *)(v80 + 38) = v32;
    if ( *(uint8_t *)(v33 + a2) <= 0x7Fu )
    v34 = *(uint8_t *)(v33 + a2);
    else
    v34 = *(uint8_t *)(v33 + a2) + 0x80;
    v35 = v33 + 1;
    *(uint8_t *)(v80 + 39) = v34;
    if ( *(uint8_t *)(v35 + a2) <= 0x7Fu )
    v36 = *(uint8_t *)(v35 + a2);
    else
    v36 = *(uint8_t *)(v35 + a2) + 0x80;
    v37 = v35 + 1;
    *(uint8_t *)(v80 + 43) = v36;
    if ( *(uint8_t *)(v37 + a2) <= 0x7Fu )
    v38 = *(uint8_t *)(v37 + a2);
    else
    v38 = *(uint8_t *)(v37 + a2) + 0x80;
    v39 = v37 + 1;
    *(uint8_t *)(v80 + 44) = v38;
    if ( *(uint8_t *)(v39 + a2) <= 0x7Fu )
    v40 = *(uint8_t *)(v39 + a2);
    else
    v40 = *(uint8_t *)(v39 + a2) + 0x80;
    v41 = v39 + 1;
    *(uint8_t *)(v80 + 45) = v40;
    if ( *(uint8_t *)(v41 + a2) <= 0x7Fu )
    v42 = *(uint8_t *)(v41 + a2);
    else
    v42 = *(uint8_t *)(v41 + a2) + 0x80;
    v43 = v41 + 1;
    *(uint8_t *)(v80 + 46) = v42;
    if ( *(uint8_t *)(v43 + a2) <= 0x7Fu )
    v44 = *(uint8_t *)(v43 + a2);
    else
    v44 = *(uint8_t *)(v43 + a2) + 0x80;
    v45 = v43 + 1;
    *(uint8_t *)(v80 + 47) = v44;
    if ( *(uint8_t *)(v45 + a2) <= 0x7Fu )
    v46 = *(uint8_t *)(v45 + a2);
    else
    v46 = *(uint8_t *)(v45 + a2) + 0x80;
    v47 = v45 + 1;
    *(uint8_t *)(v80 + 48) = v46;
    if ( *(uint8_t *)(v47 + a2) <= 0x7Fu )
    v48 = *(uint8_t *)(v47 + a2);
    else
    v48 = *(uint8_t *)(v47 + a2) + 0x80;
    v49 = v47 + 1;
    *(uint8_t *)(v80 + 40) = v48;
    if ( *(uint8_t *)(v49 + a2) <= 0x7Fu )
    v50 = *(uint8_t *)(v49 + a2);
    else
    v50 = *(uint8_t *)(v49 + a2) + 0x80;
    v51 = v49 + 1;
    *(uint8_t *)(v80 + 41) = v50;
    if ( *(uint8_t *)(v51 + a2) <= 0x7Fu )
    v52 = *(uint8_t *)(v51 + a2);
    else
    v52 = *(uint8_t *)(v51 + a2) + 0x80;
    v53 = v51 + 1;
    *(uint8_t *)(v80 + 42) = v52;
    if ( *(uint8_t *)(v53 + a2) <= 0x7Fu )
    v54 = *(uint8_t *)(v53 + a2);
    else
    v54 = *(uint8_t *)(v53 + a2) + 0x80;
    v55 = v53 + 1;
    *(uint8_t *)(v80 + 49) = v54;
    if ( *(uint8_t *)(v55 + a2) <= 0x7Fu )
    v56 = *(uint8_t *)(v55 + a2);
    else
    v56 = *(uint8_t *)(v55 + a2) + 0x80;
    v57 = v55 + 1;
    *(uint8_t *)(v80 + 50) = v56;
    if ( *(uint8_t *)(v57 + a2) <= 0x7Fu )
    v58 = *(uint8_t *)(v57 + a2);
    else
    v58 = *(uint8_t *)(v57 + a2) + 0x80;
    v59 = v57 + 1;
    *(uint8_t *)(v80 + 51) = v58;
    if ( *(uint8_t *)(v59 + a2) <= 0x7Fu )
    v60 = *(uint8_t *)(v59 + a2);
    else
    v60 = *(uint8_t *)(v59 + a2) + 0x80;
    v61 = v59 + 1;
    *(uint8_t *)(v80 + 52) = v60;
    if ( *(uint8_t *)(v61 + a2) <= 0x7Fu )
    v62 = *(uint8_t *)(v61 + a2);
    else
    v62 = *(uint8_t *)(v61 + a2) + 0x80;
    v63 = v61 + 1;
    *(uint8_t *)(v80 + 53) = v62;
    if ( *(uint8_t *)(v63 + a2) <= 0x7Fu )
    v64 = *(uint8_t *)(v63 + a2);
    else
    v64 = *(uint8_t *)(v63 + a2) + 0x80;
    v65 = v63 + 1;
    *(uint8_t *)(v80 + 54) = v64;
    v66 = *(unsigned __int8 *)(v65 + a2) << 24;
    ++v65;
    *(uint32_t *)(v80 + 60) = v66;
    v67 = (*(unsigned __int8 *)(v65 + a2) << 16) + *(uint32_t *)(v80 + 60);
    ++v65;
    *(uint32_t *)(v80 + 60) = v67;
    v68 = (*(unsigned __int8 *)(v65 + a2) << 8) + *(uint32_t *)(v80 + 60);
    ++v65;
    *(uint32_t *)(v80 + 60) = v68;
    v69 = *(unsigned __int8 *)(v65 + a2) + *(uint32_t *)(v80 + 60);
    ++v65;
    *(uint32_t *)(v80 + 60) = v69;
    v70 = *(unsigned __int8 *)(v65 + a2) << 24;
    ++v65;
    *(uint32_t *)(v80 + 56) = v70;
    v71 = (*(unsigned __int8 *)(v65 + a2) << 16) + *(uint32_t *)(v80 + 56);
    ++v65;
    *(uint32_t *)(v80 + 56) = v71;
    v72 = (*(unsigned __int8 *)(v65 + a2) << 8) + *(uint32_t *)(v80 + 56);
    ++v65;
    *(uint32_t *)(v80 + 56) = v72;
    v73 = *(unsigned __int8 *)(v65 + a2);
    v5 = v65 + 1;
    *(uint32_t *)(v80 + 56) += v73;
    v74 = *(uint32_t *)(this + 52);
    if ( *(uint32_t *)(this + 60) < v74
    || (*(uint8_t *)(this + 57) || !v74)
    && (v75 = *(uint32_t *)(this + 64), v75 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, uint32_t))(*(uint32_t *)(this + 44) + 8))(this + 44, v75 + v74, 0) )
    v76 = *(uint32_t *)(this + 60);
    v78 = v80;
    *(uint32_t *)(this + 60) = v76 + 1;
    ComPtr::Set((uint32_t *)(*(uint32_t *)(this + 48) + 8 * v76), v78);
    v77 = *(uint32_t *)(this + 32);
    v79 = &rc_ptr<WDTTerritory>::`vftable';
    *(uint32_t *)(this + 32) = v77 + 1;
    ComPtr::Release(&v79);
    if ( v5 >= a3 )
    return 1;
    v3 = a3;
    return 0;
}

