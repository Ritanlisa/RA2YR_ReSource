#include "colorlistclass.hpp"

int  ColorListClass::_vt51(int this, int a2, int a3)
{
    int v4; // ecx
    int v5; // eax
    int v6; // eax
    int v7; // edx
    v4 = *(uint32_t *)(this + 380);
    if ( *(uint32_t *)(this + 388) < v4
    || (*(uint8_t *)(this + 385) || !v4)
    && (v5 = *(uint32_t *)(this + 392), v5 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, uint32_t))(*(uint32_t *)(this + 372) + 8))(this + 372, v4 + v5, 0) )
    v6 = *(uint32_t *)(this + 388);
    v7 = *(uint32_t *)(this + 376);
    *(uint32_t *)(this + 388) = v6 + 1;
    *(uint32_t *)(v7 + 4 * v6) = a3;
    return ListClass::AddItem((uint32_t *)this, a2);
}

int  ColorListClass::_vt43(int *this, int a2)
{
    int result; // eax
    int v4; // ecx
    int v5; // ecx
    result = (*(int (__thiscall **)(int *, int *))(*(this + 13) + 16))(this + 13, &a2);
    if ( result != -1 )
    v4 = *(this + 97);
    if ( result < v4 )
    v5 = v4 - 1;
    for ( *(this + 97) = v5;
    result < *(this + 97);
    *(uint32_t *)(*(this + 94) + 4 * result - 4) = *(uint32_t *)(*(this + 94) + 4 * result) )
    ++result;
    return ListClass::Destru_vt43(this, a2);
    return result;
}

void  ColorListClass::_vt42(unsigned int *this, signed int a2)
{
    signed int v2; // eax
    unsigned int v3; // edx
    signed int v4; // eax
    if ( a2 != -1 )
    v2 = *(this + 97);
    if ( a2 < v2 )
    v3 = v2 - 1;
    v4 = a2;
    for ( *(this + 97) = v3;
    v4 < (int)*(this + 97);
    *(uint32_t *)(*(this + 94) + 4 * v4 - 4) = *(uint32_t *)(*(this + 94) + 4 * v4) )
    ++v4;
    ListClass::RemoveItem(this, a2);
}

int  ColorListClass::_vt52(uint32_t *this, int a2, int a3)
{
    *(this + 99) = a2;
    *(this + 100) = a3;
    return a2;
}

uint32_t * ColorListClass::DrawColorRect(int *this, int a2, int a3, int a4, int a5, int a6)
{
    int v7; // edi
    int v8; // eax
    uint32_t *result; // eax
    int v10; // ecx
    int v11; // ecx
    int *v12; // ebx
    int v13; // eax
    int v14; // eax
    int *v15; // edi
    int v16; // eax
    int *v17; // edi
    int v18; // eax
    int v19; // ecx
    int v20; // edx
    int v21; // eax
    int v22; // ecx
    int v23; // ecx
    int v24; // edi
    int v25; // edx
    int v26; // eax
    int v27; // ecx
    int v28; // edx
    bool v29; // zf
    int v30; // edx
    int v31; // eax
    int v32; // edx
    int v33; // ecx
    int v34; // edi
    int v35; // edx
    int v36; // eax
    int v37; // edx
    int v38; // eax
    int v39; // edx
    int v40; // ecx
    int v41; // edi
    int v42; // edx
    int v43; // eax
    int v44; // ecx
    int v45; // eax
    int v46; // edx
    int v47; // [esp-14h] [ebp-124h]
    int v48; // [esp-14h] [ebp-124h]
    int v49; // [esp-14h] [ebp-124h]
    int v50; // [esp-14h] [ebp-124h]
    int v51; // [esp-10h] [ebp-120h]
    int v52; // [esp-10h] [ebp-120h]
    int v53; // [esp-10h] [ebp-120h]
    int v54; // [esp-Ch] [ebp-11Ch]
    int v55; // [esp-Ch] [ebp-11Ch]
    int v56; // [esp-Ch] [ebp-11Ch]
    int v57; // [esp-Ch] [ebp-11Ch]
    int v58; // [esp-8h] [ebp-118h]
    int v59; // [esp-8h] [ebp-118h]
    int v60; // [esp-8h] [ebp-118h]
    int v61; // [esp-4h] [ebp-114h]
    int v62; // [esp-4h] [ebp-114h]
    int v63; // [esp-4h] [ebp-114h]
    int v64; // [esp-4h] [ebp-114h]
    int v65; // [esp+10h] [ebp-100h] BYREF
    int v66; // [esp+14h] [ebp-FCh]
    int v67; // [esp+18h] [ebp-F8h] BYREF
    uint32_t v68[2]; // [esp+1Ch] [ebp-F4h] BYREF
    int v69; // [esp+24h] [ebp-ECh] BYREF
    uint32_t v70[3]; // [esp+28h] [ebp-E8h] BYREF
    int v71; // [esp+34h] [ebp-DCh] BYREF
    uint32_t v72[2]; // [esp+38h] [ebp-D8h] BYREF
    uint32_t v73[4]; // [esp+40h] [ebp-D0h] BYREF
    uint32_t v74[4]; // [esp+50h] [ebp-C0h] BYREF
    uint32_t v75[4]; // [esp+60h] [ebp-B0h] BYREF
    uint32_t v76[4]; // [esp+70h] [ebp-A0h] BYREF
    int v77; // [esp+80h] [ebp-90h] BYREF
    int v78; // [esp+88h] [ebp-88h] BYREF
    int v79; // [esp+90h] [ebp-80h] BYREF
    int v80; // [esp+98h] [ebp-78h] BYREF
    int v81; // [esp+A0h] [ebp-70h] BYREF
    int v82; // [esp+A8h] [ebp-68h] BYREF
    uint8_t v83[20]; // [esp+B0h] [ebp-60h] BYREF
    uint8_t v84[12]; // [esp+C4h] [ebp-4Ch] BYREF
    uint8_t v85[20]; // [esp+D0h] [ebp-40h] BYREF
    uint8_t v86[12]; // [esp+E4h] [ebp-2Ch] BYREF
    uint8_t v87[20]; // [esp+F0h] [ebp-20h] BYREF
    uint8_t v88[12]; // [esp+104h] [ebp-Ch] BYREF
    if ( a6 )
    v10 = *(this + 100);
    if ( !v10 )
    v10 = a2;
    result = (uint32_t *)*(this + 99);
    switch ( (unsigned int)result )
    case 0u:
    v11 = *(this + 12);
    v65 = a3;
    v66 = a4;
    v62 = v11;
    v55 = *(this + 11);
    v12 = (int *)(4 * a2 + *(this + 14));
    v48 = *((uint32_t *)BuildingTypeClass_AnimTable + *(uint32_t *)(*(this + 94) + 4 * a2));
    v13 = (*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)DSurface_Hidden_2 + 120))(DSurface_Hidden_2, v83);
    result = FillRectangle(&v82, *v12, DSurface_Hidden_2, v13, (int)&v65, v48, 0, v55, a5, v62);
    break;
    case 1u:
    v14 = *(this + 11);
    if ( (v14 & 6) != 0 )
    v72[0] = a3;
    v72[1] = a4;
    BYTE1(v14) |= 0x20u;
    v15 = (int *)(*(this + 14) + 4 * a2);
    v63 = *(this + 12);
    v56 = v14;
    v49 = *((uint32_t *)BuildingTypeClass_AnimTable + v10);
    v16 = (*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)DSurface_Hidden_2 + 120))(DSurface_Hidden_2, v85);
    result = FillRectangle(&v81, *v15, DSurface_Hidden_2, v16, (int)v72, v49, 0, v56, a5, v63);
    else
    v70[0] = a3;
    v70[1] = a4;
    v17 = (int *)(*(this + 14) + 4 * a2);
    v64 = *(this + 12);
    v57 = v14;
    v50 = *((uint32_t *)BuildingTypeClass_AnimTable + v10);
    v18 = (*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)DSurface_Hidden_2 + 120))(DSurface_Hidden_2, v87);
    result = FillRectangle(&v78, *v17, DSurface_Hidden_2, v18, (int)v70, v50, 0, v57, a5, v64);
    break;
    case 2u:
    v19 = *(uint32_t *)(*((uint32_t *)BuildingTypeClass_AnimTable + v10) + 788);
    v20 = *(uint32_t *)(FileSystem_THEATER_PAL + 372);
    if ( *(uint32_t *)(FileSystem_THEATER_PAL + 4) == 1 )
    v21 = *(unsigned __int8 *)(v20 + v19);
    else
    v21 = *(unsigned __int16 *)(v20 + 2 * v19);
    v22 = *(this + 19);
    v74[2] = a3 + a5 - 2;
    v74[0] = a3;
    v74[1] = a4;
    v74[3] = v22 + a4 - 2;
    (*(void (__thiscall **)(int, uint32_t *, int))(*(uint32_t *)DSurface_Hidden_2 + 88))(DSurface_Hidden_2, v74, v21);
    v23 = *(this + 11);
    v24 = *(this + 14);
    v25 = *(this + 94);
    v71 = a3;
    v72[0] = a4;
    v58 = v23;
    v51 = *((uint32_t *)BuildingTypeClass_AnimTable + *(uint32_t *)(v25 + 4 * a2));
    v26 = (*(int (__thiscall **)(int))(*(uint32_t *)DSurface_Hidden_2 + 120))(DSurface_Hidden_2);
    result = FillRectangle(
    &v80,
    *(uint32_t *)(4 * a2 + v24),
    DSurface_Hidden_2,
    v26,
    (int)v84,
    (int)&v71,
    v51,
    0,
    v58,
    a6);
    break;
    case 3u:
    v27 = *(uint32_t *)(*((uint32_t *)BuildingTypeClass_AnimTable + v10) + 788);
    v28 = *(uint32_t *)(FileSystem_THEATER_PAL + 4);
    if ( (*(uint8_t *)(this + 11) & 6) != 0 )
    v29 = v28 == 1;
    v30 = *(uint32_t *)(FileSystem_THEATER_PAL + 372);
    if ( v29 )
    v31 = *(unsigned __int8 *)(v30 + v27);
    else
    v31 = *(unsigned __int16 *)(v30 + 2 * v27);
    v32 = *(this + 19);
    v75[2] = a5;
    v75[0] = a3;
    v75[1] = a4;
    v75[3] = v32;
    (*(void (__thiscall **)(int, uint32_t *, int))(*(uint32_t *)DSurface_Hidden_2 + 20))(DSurface_Hidden_2, v75, v31);
    v33 = *(this + 11);
    v34 = *(this + 14);
    v35 = *(this + 94);
    BYTE1(v33) |= 0x20u;
    v69 = a3;
    v70[0] = a4;
    v59 = v33;
    v52 = *((uint32_t *)BuildingTypeClass_AnimTable + *(uint32_t *)(v35 + 4 * a2));
    v36 = (*(int (__thiscall **)(int))(*(uint32_t *)DSurface_Hidden_2 + 120))(DSurface_Hidden_2);
    result = FillRectangle(
    &v77,
    *(uint32_t *)(4 * a2 + v34),
    DSurface_Hidden_2,
    v36,
    (int)v86,
    (int)&v69,
    v52,
    0,
    v59,
    a6);
    else
    v29 = v28 == 1;
    v37 = *(uint32_t *)(FileSystem_THEATER_PAL + 372);
    if ( v29 )
    v38 = *(unsigned __int8 *)(v37 + v27);
    else
    v38 = *(unsigned __int16 *)(v37 + 2 * v27);
    v39 = *(this + 19) - 1;
    v76[2] = a5 - 1;
    v76[0] = a3;
    v76[1] = a4;
    v76[3] = v39;
    (*(void (__thiscall **)(int, uint32_t *, int))(*(uint32_t *)DSurface_Hidden_2 + 20))(DSurface_Hidden_2, v76, v38);
    v40 = *(this + 11);
    v41 = *(this + 14);
    v42 = *(this + 94);
    v68[0] = a3;
    v68[1] = a4;
    v60 = v40;
    v53 = *((uint32_t *)BuildingTypeClass_AnimTable + *(uint32_t *)(v42 + 4 * a2));
    v43 = (*(int (__thiscall **)(int))(*(uint32_t *)DSurface_Hidden_2 + 120))(DSurface_Hidden_2);
    result = FillRectangle(
    &v79,
    *(uint32_t *)(4 * a2 + v41),
    DSurface_Hidden_2,
    v43,
    (int)v88,
    (int)v68,
    v53,
    0,
    v60,
    a6);
    break;
    case 4u:
    v44 = *(uint32_t *)(*((uint32_t *)BuildingTypeClass_AnimTable + *(uint32_t *)(*(this + 94) + 4 * a2)) + 788);
    if ( *(uint32_t *)(FileSystem_THEATER_PAL + 4) == 1 )
    v45 = *(unsigned __int8 *)(*(uint32_t *)(FileSystem_THEATER_PAL + 372) + v44);
    else
    v45 = *(unsigned __int16 *)(*(uint32_t *)(FileSystem_THEATER_PAL + 372) + 2 * v44);
    v73[0] = a3;
    v73[1] = a4;
    v46 = *(this + 19);
    v73[2] = a5;
    v73[3] = v46;
    result = (uint32_t *)(*(int (__thiscall **)(int, uint32_t *, int))(*(uint32_t *)DSurface_Hidden_2 + 20))(
    DSurface_Hidden_2,
    v73,
    v45);
    break;
    default:
    return result;
    else
    v7 = *(this + 14);
    v65 = a3;
    v66 = a4;
    v61 = *(this + 12);
    v54 = *(this + 11);
    v47 = *((uint32_t *)BuildingTypeClass_AnimTable + *(uint32_t *)(*(this + 94) + 4 * a2));
    v8 = (*(int (__thiscall **)(int, uint32_t *))(*(uint32_t *)DSurface_Hidden_2 + 120))(DSurface_Hidden_2, v73);
    return FillRectangle(&v67, *(uint32_t *)(4 * a2 + v7), DSurface_Hidden_2, v8, (int)&v65, v47, 0, v54, a5, v61);
    return result;
}

int  ColorListClass::_vt34(void *this, int a2)
{
    return (*(int (__thiscall **)(void *, int, uint32_t))(*(uint32_t *)this + 204))(this, a2, 0);
}

char * ColorListClass::_vt00(char *Block, char a2)
{
    int v3; // eax
    char *v4; // esi
    void *v5; // eax
    v3 = *((uint32_t *)Block + 93);
    v4 = Block + 372;
    *(uint32_t *)Block = &ColorListClass::`vftable';
    (*(void (__thiscall **)(char *))(v3 + 12))(Block + 372);
    *((uint32_t *)Block + 100) = 0;
    v5 = (void *)*((uint32_t *)v4 + 1);
    *(uint32_t *)v4 = &VectorClass<int>::`vftable';
    if ( v5 && v4[13] )
    __3_YAXPAX_Z(v5);
    *((uint32_t *)v4 + 1) = 0;
    v4[13] = 0;
    *((uint32_t *)v4 + 2) = 0;
    ListClass::Destruct(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

int  ColorListClass::_vt39(uint32_t *this)
{
    int v1; // eax
    v1 = *(this + 91);
    if ( *(this + 17) > v1 )
    return *(uint32_t *)(*(this + 14) + 4 * v1);
    else
    return 0;
}

int  ColorListClass::_vt46(int *this, unsigned int a2)
{
    int result; // eax
    int v4; // ecx
    result = a2;
    if ( a2 >= *(this + 17) )
    *(this + 91) = 0;
    else
    *(this + 91) = a2;
    (*(void (__thiscall **)(int *))(*this + 72))(this);
    if ( *(this + 91) < *(this + 92) )
    (*(void (__thiscall **)(int *, uint32_t))(*this + 192))(this, *(this + 91));
    v4 = *(this + 20);
    result = *(this + 91);
    if ( result >= v4 + *(this + 92) )
    return (*(int (__thiscall **)(int *, int))(*this + 192))(this, result - v4 + 1);
    return result;
}

void  ColorListClass::_vt45(uint32_t *this, wchar_t *String2)
{
    int v3; // esi
    if ( String2 && (int)*(this + 17) > 0 )
    v3 = 0;
    while ( _wcsicmp(*(const wchar_t **)(*(this + 14) + 4 * v3), String2) )
    if ( ++v3 >= *(this + 17) )
    return;
    (*(void (__thiscall **)(uint32_t *, int))(*this + 184))(this, v3);
}

