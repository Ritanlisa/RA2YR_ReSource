#include "dial8class.hpp"

uint32_t * Dial8Class::Constructor(uint32_t *this, int a2, int a3, int a4, int a5, unsigned int a6, int a7)
{
    unsigned int v7; // ebx
    __int16 v10; // cx
    unsigned int v11; // eax
    int v12; // edi
    int v13; // ecx
    int v14; // edx
    int v16; // [esp+14h] [ebp+4h]
    int v17; // [esp+18h] [ebp+8h]
    int v18; // [esp+20h] [ebp+10h]
    int v19; // [esp+24h] [ebp+14h]
    int v20; // [esp+24h] [ebp+14h]
    v7 = a6;
    ControlClass::Construct(this, a2, a3, a4, a5, a6, 7, 1);
    *this = &Dial8Class::`vftable';
    LOBYTE(v10) = 0;
    *(this + 11) = *(this + 3) + *(this + 5) / 2;
    *(this + 12) = *(this + 4) + *(this + 6) / 2;
    HIBYTE(v10) = a7;
    *(this + 45) = a7;
    LOWORD(a6) = v10;
    v11 = (((a6 >> 12) + 1) >> 1) & 7;
    *(this + 46) = v11;
    *(this + 47) = v11;
    *(this + 13) = *(this + 11);
    v12 = *(this + 12);
    *(this + 14) = v12 - (int)(8 * v7) / 2 / 10;
    v13 = *(this + 11);
    v19 = 56 * a5 / 2 / 100;
    *(this + 15) = v19 + v13;
    *(this + 18) = v12;
    *(this + 21) = v13;
    *(this + 26) = v12;
    *(this + 29) = v13;
    v16 = v12 - (int)(56 * v7) / 2 / 100;
    *(this + 16) = v16;
    v17 = 8 * a5 / 2 / 10;
    *(this + 17) = v13 + v17;
    *(this + 19) = v19 + v13;
    *(this + 20) = v12 + (int)(56 * v7) / 2 / 100;
    *(this + 22) = v12 + (int)(8 * v7) / 2 / 10;
    *(this + 23) = v13 - v19;
    *(this + 24) = v12 + (int)(56 * v7) / 2 / 100;
    *(this + 25) = v13 - v17;
    *(this + 28) = v16;
    *(this + 27) = v13 - v19;
    *(this + 30) = v12 - (int)(6 * v7) / 2 / 10;
    *(this + 37) = v13;
    *(this + 34) = v12;
    *(this + 42) = v12;
    v20 = 42 * a5 / 2 / 100;
    *(this + 31) = v20 + v13;
    v18 = (int)(42 * v7) / 2 / 100;
    *(this + 32) = v12 - v18;
    *(this + 44) = v12 - v18;
    v14 = 6 * a5 / 2 / 10;
    *(this + 33) = v14 + v13;
    *(this + 35) = v13 + v20;
    *(this + 36) = v18 + v12;
    *(this + 38) = v12 + (int)(6 * v7) / 2 / 10;
    *(this + 40) = v18 + v12;
    *(this + 41) = v13 - v14;
    *(this + 39) = v13 - v20;
    *(this + 43) = v13 - v20;
    return this;
}

int  Dial8Class::_vt31(int *this, unsigned int a2, uint32_t *a3, int a4)
{
    int v4; // ebx
    int *v7; // eax
    double v8; // st7
    __int16 v9; // dx
    int v10; // ecx
    unsigned int v11; // eax
    uint8_t v12[8]; // [esp+30h] [ebp-8h] BYREF
    v4 = a2;
    (*(void (__thiscall **)(int *, unsigned int))(*this + 120))(this, a2);
    if ( (a2 & 1) != 0 )
    dword_8A0148 = 1;
    goto LABEL_8;
    if ( (a2 & 2) != 0 && dword_8A0148 )
    LABEL_8:
    v7 = (int *)(*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)WWMouseClass_Instance + 52))(
    WWMouseClass_Instance,
    v12);
    v8 = Math::CalcAngle((double)*(this + 12) - (double)v7[1], (double)*v7 - (double)*(this + 11));
    LOWORD(a2) = Math::RoundToInt((v8 - 1.570796326794897) * -10430.06004058427);
    LOBYTE(v9) = 0;
    v10 = *(this + 47);
    HIBYTE(v9) = ((a2 >> 7) + 1) >> 1;
    *(this + 45) = HIBYTE(v9);
    LOWORD(a2) = v9;
    v11 = (((a2 >> 12) + 1) >> 1) & 7;
    *(this + 46) = v11;
    if ( v11 == v10 )
    *a3 = 0;
    CellClass::Draw((int)this, 0, a3, 0);
    else
    *(this + 47) = v11;
    CellClass::Draw((int)this, v4, a3, 0);
    return 1;
    if ( (a2 & 4) != 0 )
    *a3 = 0;
    dword_8A0148 = 0;
    return CellClass::Draw((int)this, 0, a3, 0);
}

int __userpurge Dial8Class::_vt27@<eax>(uint32_t *a1@<ecx>, int a2@<ebx>, int a3@<ebp>, int a4@<edi>, int a5)
{
    void *v6; // ecx
    uint32_t *v7; // edi
    int v8; // ebx
    void *v9; // edx
    int v10; // edi
    int v11; // eax
    int v12; // edx
    int v13; // ecx
    int v14; // eax
    int v15; // ecx
    int v16; // eax
    int v17; // eax
    int v18; // edx
    int v19; // eax
    int v20; // ecx
    int v21; // eax
    int v23; // [esp+18h] [ebp-Ch] BYREF
    int v24; // [esp+1Ch] [ebp-8h]
    int v25; // [esp+20h] [ebp-4h] BYREF
    _UNKNOWN *retaddr; // [esp+24h] [ebp+0h]
    BuildingAnim::GetType();
    if ( !Control::DispatchClick(a1, a5) )
    return 0;
    (*(void (__thiscall **)(int, int, int, int))(*(uint32_t *)WWMouseClass_Instance + 12))(
    WWMouseClass_Instance,
    a4,
    a3,
    a2);
    v6 = (void *)a1[4];
    v25 = a1[3];
    retaddr = v6;
    DrawBuildingTilesSHP(&v25, 0, 1);
    v7 = a1 + 14;
    v8 = 8;
    do
    v9 = (void *)(*v7 - 1);
    v25 = *(v7 - 1) - 1;
    retaddr = v9;
    DrawBuildingTilesSHP(&v25, 1, 0);
    v7 += 2;
    --v8;
    while ( v8 );
    v10 = v23;
    v11 = *(uint32_t *)(*((uint32_t *)BuildingTypeClass_AnimTable + v23) + 796);
    if ( *(uint32_t *)(FileSystem_THEATER_PAL + 4) == 1 )
    v12 = *(unsigned __int8 *)(*(uint32_t *)(FileSystem_THEATER_PAL + 372) + v11);
    else
    v12 = *(unsigned __int16 *)(*(uint32_t *)(FileSystem_THEATER_PAL + 372) + 2 * v11);
    v13 = a1[46];
    v14 = a1[2 * v13 + 30];
    v15 = a1[2 * v13 + 29] + 1;
    v24 = v14 + 1;
    v16 = a1[11];
    v23 = v15;
    retaddr = (_UNKNOWN *)(a1[12] + 1);
    v25 = v16 + 1;
    (*(void (__thiscall **)(int, int *, int *, int))(*(uint32_t *)DSurface_Hidden_2 + 48))(
    DSurface_Hidden_2,
    &v25,
    &v23,
    v12);
    v17 = *(uint32_t *)(*((uint32_t *)BuildingTypeClass_AnimTable + v10) + 808);
    if ( *(uint32_t *)(FileSystem_THEATER_PAL + 4) == 1 )
    v18 = *(unsigned __int8 *)(*(uint32_t *)(FileSystem_THEATER_PAL + 372) + v17);
    else
    v18 = *(unsigned __int16 *)(*(uint32_t *)(FileSystem_THEATER_PAL + 372) + 2 * v17);
    v19 = a1[46];
    retaddr = (_UNKNOWN *)a1[2 * v19 + 30];
    v20 = a1[11];
    v25 = a1[2 * v19 + 29];
    v21 = a1[12];
    v23 = v20;
    v24 = v21;
    (*(void (__thiscall **)(int, int *, int *, int))(*(uint32_t *)DSurface_Hidden_2 + 48))(
    DSurface_Hidden_2,
    &v23,
    &v25,
    v18);
    (*(void (__thiscall **)(int))(*(uint32_t *)WWMouseClass_Instance + 16))(WWMouseClass_Instance);
    return 1;
}

uint32_t * Dial8Class::_vt00(uint32_t *Block, char a2)
{
    GadgetClass::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

