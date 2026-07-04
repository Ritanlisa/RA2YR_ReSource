#include "disklaserclass.hpp"

// 0x004A7340
char  DiskLaserClass::Update(int this)
{
    int v2; // eax
    int v3; // eax
    int *v4; // eax
    int v5; // ebx
    int v6; // ebp
    int v7; // edi
    uint32_t *v8; // eax
    int *v9; // eax
    int v10; // edi
    int v11; // ebx
    int FoundationHeight; // ebp
    uint8_t *v13; // ecx
    int *v14; // eax
    int v15; // ecx
    int v16; // edx
    int v17; // ebp
    int v18; // edi
    int v19; // eax
    int v20; // edx
    int v21; // ebx
    int v22; // edi
    int v23; // edx
    bool v24; // zf
    __int16 *v25; // edx
    int v26; // ecx
    int v27; // eax
    uint8_t *v28; // ecx
    int *v29; // eax
    int v30; // ecx
    char *v31; // eax
    int v32; // ecx
    int v33; // edx
    int v34; // ecx
    int v35; // edx
    int v36; // eax
    int v37; // eax
    int v38; // edi
    int v39; // edi
    int v40; // ecx
    int *v41; // ecx
    char v42; // dl
    int v43; // eax
    int v44; // ebx
    int v45; // edi
    int v46; // ebx
    int v47; // edi
    char *v48; // eax
    int *v49; // ecx
    int v50; // eax
    int **v52; // [esp-Ch] [ebp-70h]
    int **v53; // [esp-Ch] [ebp-70h]
    int v54; // [esp-Ch] [ebp-70h]
    int *v55; // [esp-8h] [ebp-6Ch] BYREF
    int v56; // [esp-4h] [ebp-68h] BYREF
    int v57; // [esp+0h] [ebp-64h]
    int v58; // [esp+4h] [ebp-60h]
    int v59; // [esp+8h] [ebp-5Ch]
    int v60; // [esp+Ch] [ebp-58h]
    int v61; // [esp+10h] [ebp-54h]
    uint8_t *v62; // [esp+24h] [ebp-40h]
    __int16 v63; // [esp+28h] [ebp-3Ch] BYREF
    char v64; // [esp+2Ah] [ebp-3Ah]
    __int16 *v65; // [esp+2Ch] [ebp-38h]
    int v66; // [esp+30h] [ebp-34h]
    int v67; // [esp+34h] [ebp-30h] BYREF
    char *v68; // [esp+38h] [ebp-2Ch]
    int v69; // [esp+3Ch] [ebp-28h]
    int v70; // [esp+40h] [ebp-24h] BYREF
    int v71; // [esp+44h] [ebp-20h]
    int v72; // [esp+48h] [ebp-1Ch]
    int v73; // [esp+4Ch] [ebp-18h] BYREF
    int v74; // [esp+50h] [ebp-14h]
    int v75; // [esp+54h] [ebp-10h]
    int v76[3]; // [esp+58h] [ebp-Ch] BYREF
    v2 = *(uint32_t *)(this + 48);
    if ( v2 < 0 )
    goto LABEL_2;
    if ( v2 > 0 )
    v3 = v2 - 1;
    *(uint32_t *)(this + 48) = v3;
    return v3;
    v4 = (int *)(*(int (__thiscall **)(uint32_t, int *))(**(uint32_t **)(this + 36) + 72))(*(uint32_t *)(this + 36), v76);
    v5 = *v4;
    v6 = v4[1];
    v7 = v4[2];
    if ( (*(unsigned __int8 (__thiscall **)(uint32_t))(**(uint32_t **)(this + 36) + 84))(*(uint32_t *)(this + 36)) )
    v7 = *(uint32_t *)((*(int (__thiscall **)(uint32_t, int *))(**(uint32_t **)(this + 40) + 72))(*(uint32_t *)(this + 40), v76)
    + 8);
    v8 = (uint32_t *)(*(int (__thiscall **)(uint32_t, int *))(**(uint32_t **)(this + 40) + 72))(*(uint32_t *)(this + 40), v76);
    v9 = Coord::Subtract(&v70, v5 - *v8, v6 - v8[1], v7 - v8[2]);
    v73 = *v9;
    v74 = v9[1];
    v75 = v9[2];
    v10 = Coord::Length(&v73);
    if ( (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(this + 40) + 44))(*(uint32_t *)(this + 40)) == 6 )
    v11 = *(uint32_t *)(this + 40);
    if ( v11 )
    FoundationHeight = BuildingTypeClass::GetFoundationHeight(*(uint32_t *)(v11 + 1312), 0);
    v10 += -64 * (BuildingTypeClass::GetFoundationWidth(*(uint32_t **)(v11 + 1312)) + FoundationHeight);
    if ( v10 < 0 )
    v10 = 0;
    if ( v10 > *(uint32_t *)(*(uint32_t *)(this + 44) + 180) )
    *(uint32_t *)(this + 48) = -1;
    v67 = this;
    LOBYTE(v3) = VectorClass::AppendCopy(&g_DiskLaserManager, &v67);
    return v3;
    v13 = *(uint8_t **)(this + 36);
    if ( v13[1061] )
    LABEL_2:
    v61 = (int)&v67;
    *(uint32_t *)(this + 48) = -1;
    v67 = this;
    LOBYTE(v3) = VectorClass::AppendCopy(&g_DiskLaserManager, (uint32_t *)v61);
    else
    v14 = (int *)(*(int (__thiscall **)(uint8_t *, int *, uint32_t, uint32_t, uint32_t, uint32_t))(*(uint32_t *)v13 + 176))(
    v13,
    v76,
    0,
    0,
    0,
    0);
    v73 = *v14;
    v15 = *(uint32_t *)(this + 56);
    v74 = v14[1];
    v16 = *(uint32_t *)(this + 52);
    v17 = v14[2];
    v18 = v16 + v15;
    v19 = (v16 + v15) % 16;
    v20 = v16 - v15;
    v21 = (v20 + 16) % 16;
    v22 = (v18 + 1) % 16;
    v69 = (v20 + 15) % 16;
    v23 = *(uint32_t *)(this + 44);
    v63 = 0;
    v24 = *(uint8_t *)(v23 + 333) == 0;
    v64 = 0;
    if ( v24 )
    v62 = (uint8_t *)(v23 + 288);
    v25 = (__int16 *)(*(uint32_t *)(this + 44) + 291);
    else
    v62 = (uint8_t *)(*(uint32_t *)(*(uint32_t *)(this + 36) + 540) + 22268);
    LOBYTE(v63) = *v62 >> 1;
    HIBYTE(v63) = v62[1] >> 1;
    v64 = v62[2] >> 1;
    v25 = &v63;
    v65 = v25;
    v66 = *(uint32_t *)(this + 44) + 294;
    if ( v19 == v21 && v15 )
    v26 = dword_8A0180[2 * v19];
    v27 = v74 + dword_8A0184[2 * v19];
    v70 = v73 + v26;
    v28 = *(uint8_t **)(this + 40);
    v71 = v27;
    v72 = v17;
    if ( v28 && (v28[20] & 2) != 0 )
    v29 = (int *)(*(int (__thiscall **)(uint8_t *, int *))(*(uint32_t *)v28 + 164))(v28, v76);
    else
    v29 = (int *)(*(int (__thiscall **)(uint8_t *, int *))(*(uint32_t *)v28 + 88))(v28, v76);
    v30 = *v29;
    v61 = 92;
    v73 = v30;
    v74 = v29[1];
    v75 = v29[2];
    v31 = (char *)__2_YAPAXI_Z(0x5Cu);
    if ( v31 )
    v32 = *(uint32_t *)(this + 44);
    v61 = 0;
    v60 = 1065353216;
    v59 = 1;
    v33 = *(char *)(v32 + 334);
    v58 = 0;
    v57 = v33;
    v56 = v32;
    LOBYTE(v33) = *(uint8_t *)(v66 + 2);
    LOWORD(v56) = *(_WORD *)v66;
    v55 = &v56;
    BYTE2(v56) = v33;
    LOBYTE(v33) = *((uint8_t *)v65 + 2);
    LOWORD(v55) = *v65;
    v52 = &v55;
    BYTE2(v55) = v33;
    LOWORD(v52) = *(_WORD *)v62;
    BYTE2(v52) = v62[2];
    TimerClass::Construct(
    v31,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75,
    0,
    1,
    (int)v52,
    (int)v55,
    v56,
    v57,
    0,
    1,
    1065353216,
    0);
    PlaySoundEffectAt(
    &v73,
    *(uint32_t *)(this + 60),
    *(uint32_t **)(this + 36),
    *(uint32_t *)(*(uint32_t *)(this + 44) + 172),
    1,
    0);
    v34 = *(uint32_t *)(this + 44);
    v3 = *(uint32_t *)(v34 + 204);
    if ( v3 > 0 )
    LOBYTE(v3) = StartAudioControllerAt(
    *(uint32_t *)(*(uint32_t *)(v34 + 192)
    + 4
    * ((unsigned int)*(unsigned __int16 *)(*(uint32_t *)(this + 36) + 968)
    % *(uint32_t *)(v34 + 204))),
    (int)&v70,
    0);
    *(uint32_t *)(this + 48) = -1;
    else
    v72 = v17;
    v67 = 8 - v15;
    v35 = dword_8A0180[2 * v19] + v73;
    v36 = dword_8A0184[2 * v19];
    v70 = v35;
    v71 = v74 + v36;
    v37 = dword_8A0180[2 * v22];
    v38 = dword_8A0184[2 * v22];
    v76[0] = v73 + v37;
    v39 = v74 + v38;
    if ( !v15 )
    v40 = *((uint32_t *)RulesClass_Instance + 163);
    if ( v40 != -1 )
    StartAudioControllerAt(v40, (int)&v70, 0);
    v68 = (char *)__2_YAPAXI_Z(0x5Cu);
    if ( v68 )
    HIWORD(v41) = HIWORD(v67);
    v61 = 1056964608;
    v60 = 1065353216;
    v59 = 1;
    v58 = 0;
    v57 = v67;
    v56 = v67;
    LOWORD(v41) = *(_WORD *)v66;
    v55 = v41;
    v42 = *(uint8_t *)(v66 + 2);
    LOWORD(v56) = (_WORD)v41;
    BYTE2(v56) = v42;
    LOWORD(v55) = *v65;
    v53 = &v55;
    BYTE2(v55) = *((uint8_t *)v65 + 2);
    LOWORD(v53) = *(_WORD *)v62;
    BYTE2(v53) = v62[2];
    TimerClass::Construct(
    v68,
    v70,
    v71,
    v72,
    v76[0],
    v39,
    v17,
    0,
    1,
    (int)v53,
    (int)v55,
    v56,
    v67,
    0,
    1,
    1065353216,
    1056964608);
    v43 = dword_8A0180[2 * v21];
    v44 = v74 + dword_8A0184[2 * v21];
    v70 = v73 + v43;
    v71 = v44;
    v61 = 92;
    v45 = dword_8A0184[2 * v69];
    v46 = v73 + dword_8A0180[2 * v69];
    v72 = v17;
    v47 = v74 + v45;
    v48 = (char *)__2_YAPAXI_Z(0x5Cu);
    if ( v48 )
    v61 = 1056964608;
    v60 = 1065353216;
    v59 = 1;
    v58 = 0;
    v57 = v67;
    v56 = v67;
    LOWORD(v56) = *(_WORD *)v66;
    v49 = (int *)v66;
    BYTE2(v56) = *(uint8_t *)(v66 + 2);
    LOBYTE(v49) = BYTE2(v56);
    v55 = v49;
    LOWORD(v55) = *v65;
    BYTE2(v55) = *((uint8_t *)v65 + 2);
    HIBYTE(v54) = HIBYTE(v65);
    LOWORD(v54) = *(_WORD *)v62;
    BYTE2(v54) = v62[2];
    TimerClass::Construct(
    v48,
    v70,
    v71,
    v72,
    v46,
    v47,
    v17,
    0,
    1,
    v54,
    (int)v55,
    v56,
    v67,
    0,
    1,
    1065353216,
    1056964608);
    v50 = *(uint32_t *)(this + 56);
    *(uint32_t *)(this + 48) = 1;
    v3 = v50 + 1;
    *(uint32_t *)(this + 56) = v3;
    return v3;
}

// 0x004A7900
void  DiskLaserClass::PointerGotInvalid(uint32_t *this, int a2)
{
    int v3; // eax
    int v4; // eax
    if ( a2 == *(this + 9) )
    *(this + 12) = -1;
    if ( g_LaserDrawConfig < dword_B0F6A0
    || (byte_B0F6A5 || !dword_B0F6A0)
    && dword_B0F6AC > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(g_DiskLaserManager + 8))(
    &g_DiskLaserManager,
    dword_B0F6A0 + dword_B0F6AC,
    0) )
    v3 = g_LaserDrawConfig++;
    *((uint32_t *)dword_B0F69C + v3) = this;
    if ( a2 == *(this + 10) )
    *(this + 12) = -1;
    if ( g_LaserDrawConfig < dword_B0F6A0
    || (byte_B0F6A5 || !dword_B0F6A0)
    && dword_B0F6AC > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(g_DiskLaserManager + 8))(
    &g_DiskLaserManager,
    dword_B0F6A0 + dword_B0F6AC,
    0) )
    v4 = g_LaserDrawConfig++;
    *((uint32_t *)dword_B0F69C + v4) = this;
}

int  DiskLaserClass::DiskLaserClass(int this)
{
    int v2; // eax
    AbstractClass::Constructor((AbstractClass *)this);
    *(uint32_t *)this = &DiskLaserClass::`vftable';
    *(uint32_t *)(this + 4) = &DiskLaserClass::`vftable';
    *(uint32_t *)(this + 8) = &DiskLaserClass::`vftable';
    *(uint32_t *)(this + 12) = &DiskLaserClass::`vftable';
    *(uint32_t *)(this + 36) = 0;
    *(uint32_t *)(this + 40) = 0;
    *(uint32_t *)(this + 44) = 0;
    *(uint32_t *)(this + 48) = 0;
    *(uint32_t *)(this + 52) = 0;
    *(uint32_t *)(this + 56) = 0;
    *(uint32_t *)(this + 60) = 0;
    if ( dword_8A0218 < dword_8A0210
    || (byte_8A0215 || !dword_8A0210)
    && dword_8A021C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(dword_8A0208 + 8))(
    &dword_8A0208,
    dword_8A0210 + dword_8A021C,
    0) )
    v2 = dword_8A0218++;
    *((uint32_t *)dword_8A020C + v2) = this;
    return this;
}

int  DiskLaserClass::_vt13(#378 *this, int a2)
{
    return AbstractClass::ProcessPower(this);
}

int __stdcall DiskLaserClass::_vt05(int *a1, int a2)
{
    int Prefix_0; // edi
    Prefix_0 = AbstractClass::SaveLoad_Prefix_0(a1, a2);
    if ( Prefix_0 >= 0 )
    if ( a1 )
    AbstractClass::InitVtables(a1, (int)&a2);
    *a1 = (int)&DiskLaserClass::`vftable';
    a1[1] = (int)&DiskLaserClass::`vftable';
    a1[2] = (int)&DiskLaserClass::`vftable';
    a1[3] = (int)&DiskLaserClass::`vftable';
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 9);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 10);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 11);
    return Prefix_0;
}

int __stdcall DiskLaserClass::_vt06(int *a1, int *a2, int a3)
{
    return AbstractClass::SaveLoad_Prefix(a1, a2, a3);
}

int __stdcall DiskLaserClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 1378929064;
    a2[1] = 1206682730;
    a2[2] = -1786862915;
    a2[3] = 1226661444;
    return 0;
}

int DiskLaserClass::_vt12()
{
    return 64;
}

int DiskLaserClass::_vt11()
{
    return 73;
}

uint32_t * DiskLaserClass::_vt08(uint32_t *Block, char a2)
{
    int v3; // eax
    uint32_t *v5; // [esp+4h] [ebp-4h] BYREF
    *Block = &DiskLaserClass::`vftable';
    *(Block + 1) = &DiskLaserClass::`vftable';
    *(Block + 2) = &DiskLaserClass::`vftable';
    *(Block + 3) = &DiskLaserClass::`vftable';
    v5 = Block;
    v3 = (*(int (__thiscall **)(int *, uint32_t **))(dword_8A0208 + 16))(&dword_8A0208, &v5);
    if ( v3 != -1 && v3 < dword_8A0218 && v3 < --dword_8A0218 )
    do
    ++v3;
    *((uint32_t *)dword_8A020C + v3 - 1) = *((uint32_t *)dword_8A020C + v3);
    while ( v3 < dword_8A0218 );
    AbstractClass::DTOR(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

