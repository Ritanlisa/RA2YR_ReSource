#include "mouseclass.hpp"

int  MouseClass::_vt40(uint32_t *this)
{
    return *(this + 5465);
}

char * MouseClass::_vt04(char *Block, char a2)
{
    char *v3; // esi
    int v4; // edi
    *(uint32_t *)Block = &MouseClass::`vftable';
    *((uint32_t *)Block + 5446) = &MouseClass::`vftable';
    v3 = Block + 21404;
    v4 = 4;
    do
    v3 -= 3988;
    Array::ForEachReverse((int)(v3 + 80), 52, 75, (int (__thiscall *)(int))nullsub_56);
    nullsub_57(v3);
    --v4;
    while ( v4 );
    RadarClass::Destruct(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

void  MouseClass::sub_40D540(int this)
{
    void *v2; // eax
    v2 = *(void **)(this + 4);
    *(uint32_t *)(this + 16) = 0;
    if ( v2 && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(v2);
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

unsigned int  MouseClass::sub_40D570(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

char  MouseClass::sub_40D720(void *this, int a2, uint32_t *a3)
{
    uint32_t *v4; // edi
    int v5; // ecx
    int i; // eax
    int v7; // eax
    if ( a2 )
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    *((uint8_t *)this + 12) = 1;
    if ( !v4 )
    return 0;
    if ( *((uint32_t *)this + 1) )
    v5 = *((uint32_t *)this + 2);
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(uint32_t *)(*((uint32_t *)this + 1) + 4 * i - 4) )
    ++i;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v4;
    *((uint32_t *)this + 2) = a2;
    *((uint8_t *)this + 13) = a3 == 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    v7 = *((uint32_t *)this + 2);
    if ( v7 < *((uint32_t *)this + 4) )
    *((uint32_t *)this + 4) = v7;
    return 1;
}

int  MouseClass::sub_40D7D0(int *this, uint32_t *a2)
{
    int v2; // edx
    int result; // eax
    uint32_t *i; // ecx
    v2 = *(this + 4);
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (uint32_t *)*(this + 1); *i != *a2; ++i )
    if ( ++result >= v2 )
    return -1;
    return result;
}

uint32_t * MouseClass::sub_40D850(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<MixFileClass *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

int  MouseClass::_vt20(uint32_t *this)
{
    return (*(int (__thiscall **)(uint32_t *, uint32_t, uint32_t))(*this + 76))(this, *(this + 5465), 0);
}

char  MouseClass::_vt21(int this, char a2)
{
    char result; // al
    int v3; // eax
    int v4; // ebx
    int v5; // edi
    int v6; // esi
    int v7; // ebp
    uint32_t v8[2]; // [esp+4h] [ebp-8h] BYREF
    int v9; // [esp+10h] [ebp+4h]
    result = *(uint8_t *)(this + 21852);
    if ( result != a2 )
    v3 = *(uint32_t *)(this + 21856);
    *(uint8_t *)(this + 21852) = a2;
    if ( !a2 || dword_82D034[7 * v3] == -1 )
    v9 = MouseClass_Cursors[7 * v3];
    else
    v9 = dword_82D034[7 * v3];
    v4 = dword_82D03C[7 * v3];
    v5 = 0;
    v6 = 0;
    if ( v4 == 12345 )
    v5 = *((__int16 *)dword_ABF294 + 1) / 2;
    if ( v4 == 54321 )
    v5 = *((__int16 *)dword_ABF294 + 1);
    v7 = dword_82D040[7 * v3];
    if ( v7 == 12345 )
    v6 = *((__int16 *)dword_ABF294 + 2) / 2;
    if ( v7 == 54321 )
    v6 = *((__int16 *)dword_ABF294 + 2);
    v8[1] = v6;
    v8[0] = v5;
    return (*(int (__thiscall **)(int, uint32_t *, void *, int))(*(uint32_t *)WWMouseClass_Instance + 4))(
    WWMouseClass_Instance,
    v8,
    dword_ABF294,
    v9 + *(uint32_t *)(this + 21864));
    return result;
}

void * MouseClass::_vt05(int *this)
{
    void *result; // eax
    BlowStraw_29_::Stub(this);
    result = LoadFileSHP(g_Str_File_MOUSE_SHA, (bool *)&byte_ABF2DC);
    dword_ABF294 = result;
    return result;
}

int  MouseClass::_vt07(int this)
{
    HouseClass::InitSubsystems((uint8_t *)this);
    *(uint8_t *)(this + 21852) = 0;
    *(uint32_t *)(this + 21860) = 0;
    return 0;
}

int  MouseClass::LoadGameAssets(int *this, LPSTREAM pStm)
{
    LPSTREAM v3; // esi
    int result; // eax
    void *v5; // ecx
    uint32_t *v6; // esi
    int *v7; // esi
    int v8; // edi
    void **v9; // esi
    int v10; // edi
    uint32_t **v11; // edi
    int v12; // ebx
    uint32_t *v13; // esi
    int *v14; // ebx
    int *v15; // esi
    int v16; // edi
    int v17; // eax
    void *v18; // eax
    int v19; // esi
    uint8_t *v20; // eax
    int v21; // esi
    uint8_t *v22; // ecx
    int v23; // edx
    uint32_t *v24; // eax
    uint32_t *v25; // esi
    int v26; // ebx
    uint32_t *v27; // eax
    uint32_t *v28; // edi
    uint32_t *v29; // eax
    int v30; // ecx
    int v31; // eax
    int v32; // ecx
    int v33; // eax
    int v34; // edi
    int v35; // edx
    int v36; // esi
    uint32_t *v37; // eax
    uint32_t *v38; // edi
    uint32_t *v39; // eax
    uint32_t *v40; // esi
    int v41; // ebx
    uint32_t *v42; // eax
    int v43; // ecx
    int v44; // eax
    int v45; // ecx
    uint32_t *v46; // ecx
    int v47; // edx
    IStream *v48; // edi
    int v49; // ebx
    uint32_t *v50; // esi
    void *v51; // eax
    struct IStreamVtbl *lpVtbl; // eax
    IStream v53; // eax
    int v54; // ecx
    int v55; // eax
    int v56; // eax
    int v57; // edx
    uint32_t *v58; // eax
    int i; // esi
    int v60; // ecx
    int j; // esi
    int v62; // ecx
    int v63; // eax
    int v64; // eax
    int v65; // edx
    int v66; // ecx
    int v67; // eax
    int v68; // eax
    int v69; // edx
    int v70; // ecx
    void*376 *v71; // [esp+D0h] [ebp-40h]
    char v72; // [esp+E3h] [ebp-2Dh] BYREF
    int v73; // [esp+E4h] [ebp-2Ch] BYREF
    int v74; // [esp+E8h] [ebp-28h]
    int v75; // [esp+ECh] [ebp-24h] BYREF
    uint32_t *v76; // [esp+F0h] [ebp-20h]
    uint32_t *v77; // [esp+F4h] [ebp-1Ch]
    int v78; // [esp+F8h] [ebp-18h] BYREF
    int v79; // [esp+FCh] [ebp-14h] BYREF
    int v80; // [esp+100h] [ebp-10h] BYREF
    int v81; // [esp+104h] [ebp-Ch]
    int v82; // [esp+108h] [ebp-8h]
    int v83; // [esp+10Ch] [ebp-4h]
    (*(void (__thiscall **)(int *))(*(this + 1111) + 12))(this + 1111);
    (*(void (__thiscall **)(int *))(*(this + 53) + 12))(this + 53);
    v3 = pStm;
    result = SidebarClass::saveLoadPrefix(this, (int)pStm);
    if ( result >= 0 )
    result = v3->lpVtbl->Read(v3, &v79, 4, 0);
    if ( result >= 0 )
    dword_822CF8 = -1;
    (*(void (__thiscall **)(int *))(*this + 92))(this);
    __3_YAXPAX_Z((void *)*(this + 28));
    v5 = (void *)*(this + 26);
    *(this + 28) = 0;
    __3_YAXPAX_Z(v5);
    v6 = (uint32_t *)*(this + 5);
    *(this + 26) = 0;
    if ( v6 )
    if ( *v6 )
    (**(void (__thiscall ***)(uint32_t, int))*v6)(*v6, 3);
    __3_YAXPAX_Z(v6);
    *(this + 5) = 0;
    v7 = this + 35;
    v8 = 3;
    do
    (*(void (__thiscall **)(int *))(*v7 + 12))(v7);
    v7 += 6;
    --v8;
    while ( v8 );
    v9 = (void **)(this + 6);
    v10 = 13;
    do
    __3_YAXPAX_Z(*v9);
    *v9++ = 0;
    --v10;
    while ( v10 );
    v11 = (uint32_t **)(this + 32);
    v12 = 3;
    do
    v13 = *v11;
    if ( *v11 )
    if ( *v13 )
    (**(void (__thiscall ***)(uint32_t, int))*v13)(*v13, 3);
    __3_YAXPAX_Z(v13);
    *v11 = 0;
    ++v11;
    --v12;
    while ( v12 );
    (*(void (__thiscall **)(int *))(*(this + 78) + 12))(this + 78);
    result = pStm->lpVtbl->Read(pStm, this, 21868, 0);
    if ( result >= 0 )
    if ( this )
    MouseClass::drawCursor(&v72);
    *this = (int)&MouseClass::`vftable';
    *(this + 5446) = (int)&MouseClass::`vftable';
    v14 = this + 1386;
    v74 = 4;
    do
    v15 = v14;
    v16 = 75;
    do
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v15);
    v15 += 13;
    --v16;
    while ( v16 );
    v14 += 997;
    --v74;
    while ( v74 );
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 1129);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 1130);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this + 1128);
    (*(void (__thiscall **)(int *))(*this + 88))(this);
    (*(void (__thiscall **)(int *))(*this + 96))(this);
    v17 = *this;
    *(this + 28) = 0;
    *(this + 26) = 0;
    (*(void (__thiscall **)(int *, int *, int, uint32_t, uint32_t))(v17 + 112))(this, this + 59, 1, 0, 0);
    if ( *(this + 28) )
    __3_YAXPAX_Z((void *)*(this + 28));
    *(this + 28) = 0;
    if ( *(this + 26) )
    __3_YAXPAX_Z((void *)*(this + 26));
    *(this + 26) = 0;
    v18 = __2_YAPAXI_Z(10 * *(this + 27));
    v19 = *(this + 27);
    *(this + 28) = (int)v18;
    v20 = __2_YAPAXI_Z(4 * v19);
    if ( v20 )
    v21 = v19 - 1;
    v22 = v20;
    if ( v21 >= 0 )
    v23 = v21 + 1;
    do
    *v22 = 7;
    v22[1] = 0;
    v22 += 4;
    --v23;
    while ( v23 );
    else
    v20 = 0;
    *(this + 26) = (int)v20;
    v24 = __2_YAPAXI_Z(0x10u);
    v25 = v24;
    v26 = 256;
    if ( v24 )
    v24[1] = Cell::DecodeFlags;
    v24[2] = 256;
    v24[3] = 20;
    v27 = __2_YAPAXI_Z(0x1804u);
    if ( v27 )
    *v27 = 256;
    v76 = v27 + 1;
    v28 = v27 + 1;
    do
    MouseClass::loadCursor(0, 0);
    v28 += 6;
    --v26;
    while ( v26 );
    v29 = v76;
    else
    v29 = 0;
    v30 = v25[2];
    *v25 = v29;
    v31 = 0;
    if ( v30 > 0 )
    v32 = 0;
    do
    ++v31;
    *(uint32_t *)(*v25 + v32 + 20) = 20;
    v32 += 24;
    while ( v31 < v25[2] );
    else
    v25 = 0;
    *(this + 5) = (int)v25;
    v76 = this + 32;
    v33 = 0;
    v74 = (int)(this + 35);
    do
    v34 = v74;
    v35 = *(uint32_t *)v74;
    v78 = v33 + 1;
    v36 = 1 << (v33 + 1);
    (*(void (__thiscall **)(int))(v35 + 12))(v74);
    *(uint32_t *)(v34 + 20) = 4 * *(this + 61) * *(this + 62) / (v36 * v36);
    v37 = __2_YAPAXI_Z(0x10u);
    v38 = v37;
    if ( v37 )
    v37[1] = Cell::DecodeFlags;
    v37[2] = 256;
    v37[3] = 20;
    v39 = __2_YAPAXI_Z(0x1804u);
    if ( v39 )
    *v39 = 256;
    v77 = v39 + 1;
    v40 = v39 + 1;
    v41 = 256;
    do
    SubzoneHashVector::Construct(0, 0);
    *v40 = &DynamicVectorClass<HashObject<unsigned int,SubzoneConnectionStruct>>::`vftable';
    v40[5] = 10;
    v40[4] = 0;
    v40 += 6;
    --v41;
    while ( v41 );
    v42 = v77;
    else
    v42 = 0;
    v43 = v38[2];
    *v38 = v42;
    v44 = 0;
    if ( v43 > 0 )
    v45 = 0;
    do
    ++v44;
    *(uint32_t *)(v45 + *v38 + 20) = 20;
    v45 += 24;
    while ( v44 < v38[2] );
    else
    v38 = 0;
    v46 = v76;
    v33 = v78;
    v47 = v74 + 24;
    *v76 = v38;
    v76 = v46 + 1;
    v74 = v47;
    while ( v33 < 3 );
    v48 = pStm;
    result = pStm->lpVtbl->Read(pStm, (void *)*(this + 26), 4 * *(this + 27), 0);
    if ( result >= 0 )
    v49 = 0;
    v50 = this + 6;
    while ( 1 )
    v51 = __2_YAPAXI_Z(2 * *(this + 19));
    *v50 = v51;
    result = v48->lpVtbl->Read(v48, v51, 2 * *(this + 19), 0);
    if ( result < 0 )
    break;
    ++v49;
    ++v50;
    if ( v49 >= 13 )
    lpVtbl = v48->lpVtbl;
    v75 = 0;
    result = lpVtbl->Read(v48, &v75, 4, 0);
    if ( result >= 0 )
    (*(void (__thiscall **)(int *))(*(this + 20) + 12))(this + 20);
    pStm = 0;
    if ( v75 <= 0 )
    LABEL_72:
    for ( i = 0; i < *(this + 80); ++i )
    v60 = *(uint32_t *)(*(this + 79) + 4 * i);
    if ( v60 )
    (*(void (__thiscall **)(int, int))(*(uint32_t *)v60 + 32))(v60, 1);
    *(uint32_t *)(*(this + 79) + 4 * i) = 0;
    result = v48->lpVtbl->Read(v48, &v73, 4, 0);
    if ( result >= 0 )
    for ( j = 0; j < v73; ++j )
    OleLoadFromStream(v48, &IID_IUnknown, (LPVOID *)&pStm);
    result = v48->lpVtbl->Read(v48, &v73, 4, 0);
    if ( result >= 0 )
    pStm = 0;
    if ( v73 <= 0 )
    LABEL_89:
    result = v48->lpVtbl->Read(v48, &v73, 4, 0);
    if ( result >= 0 )
    pStm = 0;
    if ( v73 <= 0 )
    LABEL_99:
    LoadObjectTypeClassTheaterSHP(*((uint32_t *)ScenarioClass_Instance + 1174));
    v70 = *((uint32_t *)ScenarioClass_Instance + 1174);
    if ( v70 == dword_822CF8 )
    ResetAllTechnoField776();
    else
    LoadTerrainTypeClassTheatre(v70, 1);
    LoadMapClassIsometricTiles(0, 0);
    LoadBuildingTypeClassSHPs(*((uint32_t *)ScenarioClass_Instance + 1174));
    BuildingTypeClass::LoadRepairAnimations(v71);
    LoadBuildingTypeClassTheatreSHP(*((uint32_t *)ScenarioClass_Instance + 1174));
    LoadFactoryClassTheaterSHP(*((uint32_t *)ScenarioClass_Instance + 1174));
    *(this + 1135) = 0;
    dword_822CF8 = *((uint32_t *)ScenarioClass_Instance + 1174);
    return 0;
    else
    while ( 1 )
    result = v48->lpVtbl->Read(v48, &v78, 4, 0);
    if ( result < 0 )
    break;
    v66 = *(this + 55);
    if ( *(this + 57) < v66
    || (*((uint8_t *)this + 225) || !v66)
    && (v67 = *(this + 58), v67 > 0)
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(*(this + 53) + 8))(
    this + 53,
    v67 + v66,
    0) )
    v68 = *(this + 57);
    v69 = *(this + 54);
    *(this + 57) = v68 + 1;
    *(uint32_t *)(v69 + 4 * v68) = v78;
    pStm = (LPSTREAM)((char *)pStm + 1);
    if ( (int)pStm >= v73 )
    goto LABEL_99;
    else
    while ( 1 )
    result = v48->lpVtbl->Read(v48, &v78, 4, 0);
    if ( result < 0 )
    break;
    v62 = *(this + 1113);
    if ( *(this + 1115) < v62
    || (*((uint8_t *)this + 4457) || !v62)
    && (v63 = *(this + 1116), v63 > 0)
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(*(this + 1111) + 8))(
    this + 1111,
    v63 + v62,
    0) )
    v64 = *(this + 1115);
    v65 = *(this + 1112);
    *(this + 1115) = v64 + 1;
    *(uint32_t *)(v65 + 4 * v64) = v78;
    pStm = (LPSTREAM)((char *)pStm + 1);
    if ( (int)pStm >= v73 )
    goto LABEL_89;
    else
    while ( 1 )
    v53.lpVtbl = v48->lpVtbl;
    v80 = 0;
    v81 = 0;
    LOBYTE(v82) = 0;
    v83 = -1;
    result = v53.lpVtbl->Read(v48, &v80, 16, 0);
    if ( result < 0 )
    break;
    v54 = *(this + 22);
    if ( *(this + 24) < v54
    || (*((uint8_t *)this + 93) || !v54)
    && (v55 = *(this + 25), v55 > 0)
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(*(this + 20) + 8))(
    this + 20,
    v55 + v54,
    0) )
    v56 = *(this + 24);
    v57 = v80;
    *(this + 24) = v56 + 1;
    v58 = (uint32_t *)(*(this + 21) + 16 * v56);
    *v58 = v57;
    v58[1] = v81;
    v58[2] = v82;
    v58[3] = v83;
    pStm = (LPSTREAM)((char *)pStm + 1);
    if ( (int)pStm >= v75 )
    goto LABEL_72;
    return result;
    return result;
}

bool  MouseClass::_vt26(uint8_t *this)
{
    return *(this + 21850)
    || g_GameActive
    || TacticalClass_Instance && *(float *)&TacticalClass_Instance[54].lpVtbl != 0.0;
}

int  MouseClass::_vt49(uint8_t *this, int a2)
{
    uint8_t *v2; // esi
    int result; // eax
    v2 = this;
    if ( !*(this + 21848) )
    return TacticalClass::DispatchMode((int *)this, a2);
    LOBYTE(this) = byte_884D44;
    result = (*(int (__thiscall **)(uint8_t *, uint32_t, uint8_t *))(*(uint32_t *)v2 + 72))(v2, 0, this);
    v2[21848] = 0;
    return result;
}

char  MouseClass::_vt44(int this, uint32_t *a2)
{
    char result; // al
    result = g_GameActive;
    if ( !g_GameActive )
    DisplayClass::vt_entry_B0(a2);
    *(uint32_t *)(this + 21840) = *a2;
    *(uint32_t *)(this + 21844) = a2[1];
    *(uint8_t *)(this + 21848) = 0;
    return (*(int (__thiscall **)(int))(*(uint32_t *)WWMouseClass_Instance + 16))(WWMouseClass_Instance);
    return result;
}

char __stdcall MouseClass::sub_6D1770(int a1, int a2)
{
    unsigned int v2; // eax
    char *v3; // ecx
    unsigned int v5; // eax
    char *v6; // ecx
    if ( a1 == 4551 )
    v2 = g_ObjectTrackingPool[dword_B0CC1C];
    if ( v2 <= 0x18 )
    v3 = (char *)&unk_B0C1C0 + 96 * v2;
    if ( v3 )
    if ( !v3[45] )
    GadgetClass::Show(v3);
    return 1;
    else if ( a1 == 4552 )
    v5 = g_ObjectTrackingPool[dword_B0CC1C];
    if ( v5 <= 0x18 )
    v6 = (char *)&unk_B0C1C0 + 96 * v5;
    if ( v6 )
    if ( v6[45] )
    GadgetClass::Hide(v6);
    return 1;
    else
    return 0;
}

