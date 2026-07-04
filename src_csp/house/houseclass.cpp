#include "houseclass.hpp"

int __stdcall HouseClass::sub_429210(int a1, const void *a2, uint32_t *a3)
{
    if ( !a3 )
    return -2147467261;
    if ( memcmp(a2, &unk_7F7CA0, 0x10u) && memcmp(a2, &IID_IUnknown, 0x10u) )
    return -2147467262;
    *a3 = a1;
    (*(void (__stdcall **)(int))(*(uint32_t *)a1 + 4))(a1);
    return 0;
}

int __stdcall HouseClass::sub_429270(int a1, int a2, const IID *a3, void **a4)
{
    void **v4; // eax
    int v6; // ebx
    v4 = a4;
    if ( !a4 )
    return -2147024809;
    *a4 = 0;
    if ( a2 )
    return -2147221232;
    v6 = -2147467262;
    if ( !memcmp(a3, &unk_7E36C0, 0x10u) || !memcmp(a3, &IID_IUnknown, 0x10u) )
    if ( !&punk )
    return -2147024882;
    v6 = punk.lpVtbl->QueryInterface(&punk, a3, a4);
    if ( v6 < 0 )
    __3_YAXPAX_Z(&punk);
    v4 = a4;
    if ( !memcmp(a3, &unk_7EA6E8, 0x10u) )
    if ( !&MapClass_Instance )
    return -2147024882;
    v6 = MapClass_Instance.lpVtbl->QueryInterface(&MapClass_Instance, a3, v4);
    if ( v6 < 0 )
    __3_YAXPAX_Z(&MapClass_Instance);
    return v6;
}

// 0x0042F380
int __stdcall HouseClass::FailedToPlaceNode(int a1)
{
    int result; // eax
    int v2; // ecx
    result = a1;
    if ( a1 )
    v2 = *(uint32_t *)(a1 + 12) + 1;
    *(uint32_t *)(a1 + 12) = v2;
    return v2;
    return result;
}

void **__fastcall HouseClass::PsiWarn(int a1, int a2, int a3, void *a4)
{
    void *v6; // edi
    int *v7; // eax
    void **v8; // eax
    void **v9; // esi
    int v11[3]; // [esp+Ch] [ebp-18h] BYREF
    uint8_t v12[12]; // [esp+18h] [ebp-Ch] BYREF
    v6 = (void *)*((uint32_t *)g_AnimTypeCount + AnimTypeClass::FindIndex(a4));
    v7 = (int *)(*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)a2 + 72))(a2, v12);
    v11[0] = *v7;
    v11[1] = v7[1];
    v11[2] = v7[2];
    v8 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v8 )
    v9 = AnimClass::ctor(v8, v6, v11, 0, 1, (void *)0x600, 0, 0);
    else
    v9 = 0;
    BuildingClass::SetField95(v9, a3);
    Function::424CA0(v9, a1);
    *((uint8_t *)v9 + 413) = 1;
    return v9;
}

int __stdcall HouseClass::sub_4E8240(int a1)
{
    return 1;
}

int __stdcall HouseClass::sub_4E8250(int a1)
{
    return 1;
}

int __stdcall HouseClass::sub_4E8260(int a1, int a2)
{
    return 0;
}

void  HouseClass::_vt03(int this)
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

unsigned int  HouseClass::_vt05(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

int  HouseClass::_vt06(uint32_t *this, int a2)
{
    return *(uint32_t *)(*(this + 1) + 4 * a2);
}

char  HouseClass::_vt01(int *this, int a2)
{
    int v2; // esi
    int v3; // edx
    uint32_t *v4; // eax
    int v5; // ecx
    v2 = *(this + 2);
    if ( v2 == *(uint32_t *)(a2 + 8) )
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (uint32_t *)*(this + 1);
    v5 = *(uint32_t *)(a2 + 4) - (uint32_t)v4;
    while ( *v4 == *(uint32_t *)((char *)v4 + v5) )
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    return 0;
}

char  HouseClass::vt_02_(void *this, int a2, uint32_t *a3)
{
    uint32_t *v4; // edi
    int v6; // ecx
    int i; // eax
    if ( a2 )
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    *((uint8_t *)this + 12) = 1;
    if ( v4 )
    if ( *((uint32_t *)this + 1) )
    v6 = *((uint32_t *)this + 2);
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(uint32_t *)(*((uint32_t *)this + 1) + 4 * i - 4) )
    ++i;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v4;
    *((uint32_t *)this + 2) = a2;
    *((uint8_t *)this + 13) = a3 == 0;
    return 1;
    else
    return 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    return 1;
}

void  HouseClass::vt_03_(int this)
{
    if ( *(uint32_t *)(this + 4) && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(*(void **)(this + 4));
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

int  HouseClass::vt_04_(int this, uint32_t *a2)
{
    int result; // eax
    int v3; // edx
    uint32_t *i; // ecx
    if ( !*(uint8_t *)(this + 12) )
    return 0;
    v3 = *(uint32_t *)(this + 8);
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(uint32_t **)(this + 4); *i != *a2; ++i )
    if ( ++result >= v3 )
    return -1;
    return result;
}

unsigned int  HouseClass::vt_05_(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

char  HouseClass::_vt02(void *this, int a2, uint32_t *a3)
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

int  HouseClass::_vt04(int *this, uint32_t *a2)
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

uint32_t * HouseClass::vt_00_(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<TagClass *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

uint32_t * HouseClass::_vt00(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<TagClass *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

// 0x00410170
int  HouseClass::Constructor(int this, int a2)
{
    int v3; // ebp
    int v5; // [esp+10h] [ebp-4h]
    AbstractClass::InitVtables((uint32_t *)this, a2);
    TagClassVector::Construct(0, 0);
    *(uint32_t *)(this + 56) = &DynamicVectorClass<TagClass *>::`vftable';
    *(uint32_t *)(this + 76) = 10;
    *(uint32_t *)(this + 72) = 0;
    VectorClass::BuildingConstructor((uint32_t *)(this + 80), 0, 0);
    *(uint32_t *)(this + 80) = &DynamicVectorClass<BuildingClass *>::`vftable';
    *(uint32_t *)(this + 100) = 10;
    *(uint32_t *)(this + 96) = 0;
    VectorClass::BuildingConstructor((uint32_t *)(this + 104), 0, 0);
    *(uint32_t *)(this + 104) = &DynamicVectorClass<BuildingClass *>::`vftable';
    *(uint32_t *)(this + 124) = 10;
    *(uint32_t *)(this + 120) = 0;
    VectorClass::BuildingConstructor((uint32_t *)(this + 128), 0, 0);
    *(uint32_t *)(this + 128) = &DynamicVectorClass<BuildingClass *>::`vftable';
    *(uint32_t *)(this + 148) = 10;
    *(uint32_t *)(this + 144) = 0;
    VectorClass::BuildingConstructor((uint32_t *)(this + 152), 0, 0);
    *(uint32_t *)(this + 152) = &DynamicVectorClass<BuildingClass *>::`vftable';
    *(uint32_t *)(this + 172) = 10;
    *(uint32_t *)(this + 168) = 0;
    VectorClass::BuildingConstructor((uint32_t *)(this + 176), 0, 0);
    *(uint32_t *)(this + 176) = &DynamicVectorClass<BuildingClass *>::`vftable';
    *(uint32_t *)(this + 196) = 10;
    *(uint32_t *)(this + 192) = 0;
    VectorClass::BuildingConstructor((uint32_t *)(this + 200), 0, 0);
    *(uint32_t *)(this + 200) = &DynamicVectorClass<BuildingClass *>::`vftable';
    *(uint32_t *)(this + 220) = 10;
    *(uint32_t *)(this + 216) = 0;
    VectorClass::BuildingConstructor((uint32_t *)(this + 224), 0, 0);
    *(uint32_t *)(this + 224) = &DynamicVectorClass<BuildingClass *>::`vftable';
    *(uint32_t *)(this + 244) = 10;
    *(uint32_t *)(this + 240) = 0;
    VectorClass::BuildingConstructor((uint32_t *)(this + 248), 0, 0);
    *(uint32_t *)(this + 248) = &DynamicVectorClass<BuildingClass *>::`vftable';
    *(uint32_t *)(this + 268) = 10;
    *(uint32_t *)(this + 264) = 0;
    VectorClass::BuildingConstructor((uint32_t *)(this + 272), 0, 0);
    *(uint32_t *)(this + 272) = &DynamicVectorClass<BuildingClass *>::`vftable';
    *(uint32_t *)(this + 292) = 10;
    *(uint32_t *)(this + 288) = 0;
    VectorClass::BuildingConstructor((uint32_t *)(this + 296), 0, 0);
    *(uint32_t *)(this + 296) = &DynamicVectorClass<BuildingClass *>::`vftable';
    *(uint32_t *)(this + 316) = 10;
    *(uint32_t *)(this + 312) = 0;
    VectorClass::BuildingConstructor((uint32_t *)(this + 320), 0, 0);
    *(uint32_t *)(this + 320) = &DynamicVectorClass<BuildingClass *>::`vftable';
    *(uint32_t *)(this + 340) = 10;
    *(uint32_t *)(this + 336) = 0;
    StartingTechnoVector::Construct(0, 0);
    *(uint32_t *)(this + 364) = &DynamicVectorClass<HouseClass::StartingTechnoStruct *>::`vftable';
    *(uint32_t *)(this + 384) = 10;
    *(uint32_t *)(this + 380) = 0;
    SuperClassVector::Construct(0, 0);
    *(uint32_t *)(this + 596) = &DynamicVectorClass<SuperClass *>::`vftable';
    *(uint32_t *)(this + 616) = 10;
    *(uint32_t *)(this + 612) = 0;
    *(uint32_t *)(this + 640) = CurrentFrame;
    *(uint32_t *)(this + 648) = 0;
    CounterClass::Construct((uint32_t *)(this + 21760));
    CounterClass::Construct((uint32_t *)(this + 21780));
    CounterClass::Construct((uint32_t *)(this + 21800));
    CounterClass::Construct((uint32_t *)(this + 21820));
    CounterClass::Construct((uint32_t *)(this + 21840));
    CounterClass::Construct((uint32_t *)(this + 21860));
    CounterClass::Construct((uint32_t *)(this + 21880));
    CounterClass::Construct((uint32_t *)(this + 21900));
    CounterClass::Construct((uint32_t *)(this + 21920));
    CounterClass::Construct((uint32_t *)(this + 21940));
    CounterClass::Construct((uint32_t *)(this + 21960));
    CounterClass::Construct((uint32_t *)(this + 21980));
    AngerVector::Construct(0, 0);
    *(uint32_t *)(this + 22020) = &DynamicVectorClass<AngerStruct>::`vftable';
    *(uint32_t *)(this + 22040) = 10;
    *(uint32_t *)(this + 22036) = 0;
    ScoutVector::Construct(0, 0);
    *(uint32_t *)(this + 22044) = &DynamicVectorClass<ScoutStruct>::`vftable';
    *(uint32_t *)(this + 22064) = 10;
    *(uint32_t *)(this + 22060) = 0;
    v3 = this + 22128;
    v5 = 3;
    do
    HouseClass::initDropshipData(v3);
    v3 += 44;
    --v5;
    while ( v5 );
    BaseClass::Construct(a2);
    *(uint32_t *)(this + 90216) = 0;
    *(uint32_t *)(this + 90220) = 0;
    *(uint8_t *)(this + 90224) = 1;
    *(uint8_t *)(this + 90225) = 0;
    *(uint32_t *)(this + 90212) = &DynamicVectorClass<IConnectionPoint *>::`vftable';
    *(uint32_t *)(this + 90232) = 10;
    *(uint32_t *)(this + 90228) = 0;
    *(uint32_t *)this = &HouseClass::`vftable';
    *(uint32_t *)(this + 4) = &HouseClass::`vftable';
    *(uint32_t *)(this + 8) = &HouseClass::`vftable';
    *(uint32_t *)(this + 12) = &HouseClass::`vftable';
    *(uint32_t *)(this + 36) = &HouseClass::`vftable';
    *(uint32_t *)(this + 40) = &HouseClass::`vftable';
    *(uint32_t *)(this + 44) = &HouseClass::`vftable';
    return this;
}

// 0x004F83C0
int  HouseClass::GetFactoryProducing(void *this, int a2)
{
    int v2; // esi
    uint32_t *v4; // eax
    uint32_t *v5; // ecx
    int Type; // eax
    v2 = 0;
    if ( g_TeamTypeCapacity <= 0 )
    return 0;
    v4 = g_TeamTypeCount;
    while ( 1 )
    v5 = (uint32_t *)v4[v2];
    if ( (void *)v5[27] == this )
    break;
    LABEL_7:
    if ( ++v2 >= g_TeamTypeCapacity )
    return 0;
    if ( !AbstractClass::GetType(v5)
    || (Type = AbstractClass::GetType(*((uint32_t **)g_TeamTypeCount + v2)),
    (*(int (__thiscall **)(int))(*(uint32_t *)Type + 132))(Type) != a2) )
    v4 = g_TeamTypeCount;
    goto LABEL_7;
    return *((uint32_t *)g_TeamTypeCount + v2);
}

// 0x004F8440
void  HouseClass::Update_TogglePower(#375 *this)
{
    int v2; // ecx
    int v3; // eax
    int v4; // ecx
    int v5; // edx
    int v6; // eax
    int v7; // ecx
    int v8; // edx
    int v9; // eax
    int v10; // ecx
    uint32_t *v11; // eax
    int v12; // eax
    char v13; // al
    int v14; // edx
    int v15; // ecx
    int v16; // edi
    signed int v17; // eax
    char v18; // al
    int v19; // edx
    int v20; // ecx
    int v21; // edi
    signed int v22; // eax
    int v23; // ecx
    int v24; // eax
    int v25; // ecx
    int *v26; // eax
    int v27; // eax
    uint32_t *v28; // eax
    int ClosestObject; // eax
    int v30; // edi
    int v31; // ebx
    char v32; // al
    int v33; // ebx
    int v34; // ecx
    int v35; // eax
    int v36; // edx
    int v37; // eax
    char v38; // al
    int i; // edi
    int v40; // ecx
    int v41; // edx
    void *v42; // eax
    int v43; // edx
    int v44; // eax
    int *v45; // edi
    int v46; // eax
    char *ProductionTimeMult; // eax
    int v48; // edx
    int v49; // ecx
    int v50; // ebx
    double v51; // st7
    int v52; // eax
    char *v53; // eax
    signed int v54; // eax
    wchar_t *String; // eax
    int v56; // eax
    char *v57; // eax
    int v58; // edi
    int v59; // edx
    int v60; // eax
    int v61; // edx
    int j; // ebx
    int v63; // edi
    int Status; // eax
    uint32_t *v65; // ebp
    int v66; // edi
    int v67; // edi
    int v68; // edi
    int v69; // edi
    int v70; // edi
    int v71; // edi
    int v72; // edi
    int v73; // eax
    int k; // edi
    int v75; // edx
    int v76; // eax
    char v77; // al
    int v78; // eax
    char v79; // al
    int v80; // eax
    int v81; // eax
    int *p_AICaptureLowMoneyMark; // edi
    int v83; // edx
    int v84; // ecx
    int v85; // eax
    int v86; // edi
    int v87; // ebx
    int *v88; // edi
    int v89; // edx
    int v90; // ecx
    int v91; // eax
    int v92; // edi
    int v93; // ebx
    int v94; // eax
    int v95; // eax
    bool v96; // bl
    int v97; // eax
    int v98; // eax
    char v99; // al
    int v100; // ebp
    int m; // ebx
    int v102; // edi
    int v103; // ecx
    int v104; // eax
    int v105; // ecx
    int v106; // [esp+10h] [ebp-6Ch]
    int v107; // [esp+18h] [ebp-64h]
    int v108; // [esp+34h] [ebp-48h] BYREF
    signed int Ticks; // [esp+38h] [ebp-44h] BYREF
    int v110; // [esp+3Ch] [ebp-40h]
    int v111; // [esp+40h] [ebp-3Ch]
    void **v112; // [esp+44h] [ebp-38h]
    void *Block; // [esp+48h] [ebp-34h]
    char v114; // [esp+51h] [ebp-2Bh]
    int v115; // [esp+54h] [ebp-28h]
    uint32_t v116[7]; // [esp+60h] [ebp-1Ch] BYREF
    v2 = *((uint32_t *)this + 169);
    v3 = *((uint32_t *)this + 171);
    if ( v2 != -1 )
    if ( (int)CurrentFrame - v2 >= v3 )
    goto LABEL_6;
    v3 -= (int)CurrentFrame - v2;
    if ( v3 == 1 )
    v4 = v110;
    *((uint32_t *)this + 169) = CurrentFrame;
    *((uint32_t *)this + 170) = v4;
    *((uint32_t *)this + 171) = 0;
    *((uint8_t *)this + 22392) = 1;
    LABEL_6:
    v5 = *((uint32_t *)this + 172);
    v6 = *((uint32_t *)this + 174);
    if ( v5 != -1 )
    if ( (int)CurrentFrame - v5 >= v6 )
    goto LABEL_11;
    v6 -= (int)CurrentFrame - v5;
    if ( v6 == 1 )
    v7 = v110;
    *((uint32_t *)this + 172) = CurrentFrame;
    *((uint32_t *)this + 173) = v7;
    *((uint32_t *)this + 174) = 0;
    *((uint8_t *)this + 22393) = 1;
    LABEL_11:
    if ( *((uint8_t *)this + 22392) )
    HouseClass::UpdatePower(this);
    *((uint8_t *)this + 22393) = 1;
    if ( *((uint8_t *)this + 22393) )
    if ( !MuteSWLaunches )
    HouseClass::CanTogglePower((int)this);
    HouseClass::ToggleGapGeneratorReveal(this);
    v8 = (int)CurrentFrame % 100;
    if ( !((int)CurrentFrame % 100) && *((int *)this + 5509) > 0 )
    do
    v9 = *((uint32_t *)this + 5506);
    v10 = *(uint32_t *)(v9 + 8 * v8 + 4);
    v11 = (uint32_t *)(v9 + 8 * v8 + 4);
    if ( v10 > 1 )
    *v11 = v10 - 1;
    ++v8;
    while ( v8 < *((uint32_t *)this + 5509) );
    v12 = *((uint32_t *)this + 5624);
    if ( v12 )
    v108 = 0;
    (*(void (__stdcall **)(int, int *))(*(uint32_t *)v12 + 16))(v12, &v108);
    v13 = *((uint8_t *)this + 492);
    if ( !GameMode_Current[0] )
    v13 = v13 || *((uint8_t *)this + 493);
    if ( !v13 && (*((uint8_t *)this + 499) || *((uint32_t *)this + 147) >= *(uint32_t *)RulesClass_Instance[1].gap1C) )
    *((uint8_t *)this + 499) = 1;
    *((uint8_t *)this + 494) = 1;
    *((uint8_t *)this + 495) = 1;
    if ( !*((uint8_t *)this + 503) )
    goto LABEL_65;
    v14 = *((uint32_t *)this + 166);
    v15 = *((uint32_t *)this + 168);
    if ( v14 != -1 )
    if ( (int)CurrentFrame - v14 >= v15 )
    goto LABEL_38;
    v15 -= (int)CurrentFrame - v14;
    if ( v15 )
    goto LABEL_65;
    LABEL_38:
    if ( GameMode_Current[0] || *((int *)this + 159) <= 0 )
    Ticks = Timer::GetTicks();
    v111 = 120;
    while ( (unsigned __int8)Audio::IsPlaying() )
    v16 = v111;
    if ( Ticks != -1 )
    v17 = Timer::GetTicks() - Ticks;
    if ( v17 >= v16 )
    break;
    v16 -= v17;
    if ( !v16 )
    break;
    Event::Dispatch();
    *((uint8_t *)this + 503) = 0;
    if ( GameMode_Current[0] )
    if ( this != HouseClass_Player )
    if ( (GameMode_Current[0] == 3 || GameMode_Current[0] == 4)
    && g_GameStateFlags
    && (*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)g_GameStateFlags + 4))(g_GameStateFlags)
    && (*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)g_GameStateFlags + 8))(g_GameStateFlags) )
    v18 = *((uint8_t *)this + 492);
    if ( !GameMode_Current[0] )
    v18 = v18 || *((uint8_t *)this + 493);
    if ( v18 )
    byte_A83D49 = 1;
    goto LABEL_65;
    goto LABEL_64;
    else if ( !*((uint8_t *)this + 492) )
    if ( *((uint8_t *)this + 493) )
    byte_A83D49 = 1;
    goto LABEL_65;
    LABEL_64:
    g_NetResponseActive = 1;
    goto LABEL_65;
    byte_A83D49 = 1;
    LABEL_65:
    if ( !*((uint8_t *)this + 504) )
    goto LABEL_83;
    v19 = *((uint32_t *)this + 166);
    v20 = *((uint32_t *)this + 168);
    if ( v19 != -1 )
    if ( (int)CurrentFrame - v19 >= v20 )
    goto LABEL_70;
    v20 -= (int)CurrentFrame - v19;
    if ( v20 )
    goto LABEL_83;
    LABEL_70:
    Ticks = Timer::GetTicks();
    v111 = 120;
    while ( (unsigned __int8)Audio::IsPlaying() )
    v21 = v111;
    if ( Ticks != -1 )
    v22 = Timer::GetTicks() - Ticks;
    if ( v22 >= v21 )
    break;
    v21 -= v22;
    if ( !v21 )
    break;
    Event::Dispatch();
    if ( !GameMode_Current[0] )
    if ( !*((uint8_t *)this + 492) )
    if ( *((uint8_t *)this + 493) )
    g_NetResponseActive = 1;
    goto LABEL_83;
    goto LABEL_82;
    LABEL_81:
    g_NetResponseActive = 1;
    goto LABEL_83;
    if ( this == HouseClass_Player )
    goto LABEL_81;
    LABEL_82:
    byte_A83D49 = 1;
    LABEL_83:
    if ( !*((uint8_t *)this + 502) )
    goto LABEL_89;
    v23 = *((uint32_t *)this + 166);
    v24 = *((uint32_t *)this + 168);
    if ( v23 == -1 )
    LABEL_87:
    if ( v24 )
    goto LABEL_89;
    goto LABEL_88;
    v25 = (int)CurrentFrame - v23;
    if ( v25 < v24 )
    v24 -= v25;
    goto LABEL_87;
    LABEL_88:
    *((uint8_t *)this + 502) = 0;
    HouseClass::ClearLowPowerTargets(this);
    LABEL_89:
    *((uint32_t *)this + 5353) &= (*((uint32_t *)this + 5353) <= 0) - 1;
    *((uint32_t *)this + 5354) &= (*((uint32_t *)this + 5354) <= 0) - 1;
    if ( *((uint32_t *)HouseClass_Player + 12) == *((uint32_t *)this + 12)
    && (GameMode_Current[0] == 3 || GameMode_Current[0] == 4)
    && g_GameStateFlags
    && !(*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)g_GameStateFlags + 4))(g_GameStateFlags) )
    if ( (byte_A8F03C & 1) == 0 )
    byte_A8F03C |= 1u;
    dword_A8EFE8 = Random::Range(Randomizer_Global, 0, 1);
    if ( !Random::Range(Randomizer_Global, 0, 2) )
    v26 = (int *)(dword_A8EFE8
    ? (g_Cell_PositionLUT << 11) + g_Shroud_CellArray + 22580
    : g_Shroud_CellArray
    + 4 * (g_CellPositionOffset + ((g_CellPositionOffset + g_Cell_PositionLUT) << 9))
    - 30668);
    v27 = *v26;
    if ( v27 )
    if ( *(uint32_t *)(v27 + 304) != 1 || (*(uint8_t *)(v27 + 300) & 0x18) != 0 )
    Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 2);
    if ( *((uint32_t *)this + 5368) != g_ControlGroupState && !((int)CurrentFrame % 15) )
    Ticks = 0;
    v110 = 0;
    v28 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)this + 10736);
    ClosestObject = Object::FindClosestObjectCell(v28, &Ticks, 0, 0);
    v30 = ClosestObject;
    if ( ClosestObject )
    if ( (*(uint8_t *)(ClosestObject + 20) & 4) != 0 )
    v31 = ClosestObject;
    if ( *(uint32_t *)(ClosestObject + 1444) )
    v32 = 1;
    goto LABEL_112;
    else
    v31 = 0;
    (*(void (__thiscall **)(int, int *, int, int))(*(uint32_t *)ClosestObject + 372))(
    ClosestObject,
    &g_ControlGroupPool,
    1,
    1);
    v32 = 0;
    LABEL_112:
    if ( (!v31 || !*(uint32_t *)(v31 + 1444)) && !v32 )
    v33 = 0;
    while ( !*(uint8_t *)(v30 + 129) )
    v34 = v33++;
    if ( v34 >= 5 )
    break;
    v35 = *(uint32_t *)v30;
    v108 = *(uint32_t *)(v30 + 108);
    (*(void (__thiscall **)(int, int *, uint32_t, int, uint32_t, int, uint32_t, uint32_t))(v35 + 364))(
    v30,
    &v108,
    0,
    RulesClass_Instance->SilverCrate[5],
    0,
    1,
    0,
    0);
    v36 = *((uint32_t *)this + 5606);
    v37 = *((uint32_t *)this + 5608);
    if ( v36 == -1 )
    goto LABEL_121;
    if ( (int)CurrentFrame - v36 < v37 )
    v37 -= (int)CurrentFrame - v36;
    LABEL_121:
    if ( v37 )
    goto LABEL_135;
    v38 = *((uint8_t *)this + 492);
    if ( !GameMode_Current[0] )
    v38 = v38 || *((uint8_t *)this + 493);
    if ( !v38 && !*(uint8_t *)(*((uint32_t *)this + 13) + 422) )
    AISelectTeamHouseClass(0);
    TeamTypeVector::CopyConstruct(v116);
    v112 = &TypeList<TeamTypeClass const *>::`vftable';
    v116[0] = &VectorClass<TeamTypeClass const *>::`vftable';
    VectorClass::ClearAndFree3((int)v116);
    if ( v115 > 0 )
    for ( i = 0; i < v115; ++i )
    TeamClass::CreateOneOf(*((uint32_t *)Block + i), (int)this);
    v40 = *(uint32_t *)(RulesClass_Instance->Difficult[3] + 4 * *((uint32_t *)this + 97));
    v41 = v110;
    *((uint32_t *)this + 5606) = CurrentFrame;
    v42 = Block;
    *((uint32_t *)this + 5607) = v41;
    *((uint32_t *)this + 5608) = v40;
    v112 = &VectorClass<TeamTypeClass const *>::`vftable';
    if ( v42 && v114 )
    __3_YAXPAX_Z(v42);
    LABEL_135:
    if ( HouseClass_Player == this )
    if ( !*((uint32_t *)this + 188) && byte_880999 )
    BuildingClass::TogglePower(&MapClass_Instance, 0);
    if ( HouseClass_Player == this )
    v43 = *((uint32_t *)this + 5621);
    v44 = *((uint32_t *)this + 5623);
    v45 = (int *)((char *)this + 22484);
    if ( v43 != -1 )
    if ( (int)CurrentFrame - v43 >= v44 )
    LABEL_144:
    if ( (*(int (__stdcall **)(int))(*((uint32_t *)this + 9) + 24))((int)this + 36) < 100
    && *((uint32_t *)this + 5343) + *((uint32_t *)this + 5344) + *((uint32_t *)this + 5345) + *((uint32_t *)this + 5346) > 0 )
    VoxClass::FindAndPlay(aEvaInsufficien, -1);
    HouseClass::updateFactoryQueue(&MapClass_Instance);
    v46 = Math::RoundToInt(*(double *)RulesClass_Instance[1].WeatherConBolts * 900.0);
    ProductionTimeMult = Rules::GetProductionTimeMult((int *)g_GameModeOptions, v46);
    *v45 = (int)CurrentFrame;
    *((uint32_t *)this + 5622) = v110;
    *((uint32_t *)this + 5623) = ProductionTimeMult;
    LABEL_147:
    v48 = *v45;
    v49 = *((uint32_t *)this + 5623);
    if ( *v45 != -1 )
    if ( (int)CurrentFrame - v48 >= v49 )
    goto LABEL_151;
    v49 -= (int)CurrentFrame - v48;
    if ( v49 )
    LABEL_154:
    v54 = *((uint32_t *)this + 5354);
    v108 = *((uint32_t *)this + 5353);
    Ticks = v54;
    if ( v108 >= v54 || !v54 || v108 && (double)v108 / (double)Ticks >= 1.0 )
    dword_A8F040 = 0;
    else if ( DynamicVector::GetOrGrow(
    (uint32_t *)this + 5460,
    *(uint32_t *)(*(uint32_t *)RulesClass_Instance->BuildDummy[2] + 3576)) > 0
    || DynamicVector::GetOrGrow(
    (uint32_t *)this + 5460,
    *(uint32_t *)(*(uint32_t *)(RulesClass_Instance->BuildDummy[2] + 4) + 3576)) > 0
    || DynamicVector::GetOrGrow(
    (uint32_t *)this + 5460,
    *(uint32_t *)(*(uint32_t *)(RulesClass_Instance->BuildDummy[2] + 8) + 3576)) > 0 )
    if ( !dword_A8F040 )
    VoxClass::FindAndPlay(aEvaLowpower, -1);
    v107 = Math::RoundToInt(*(double *)&RulesClass_Instance[1].InfantryVirus * 900.0);
    v106 = *((uint32_t *)this + 22549);
    String = GetStringCSF(aTxtLowPower, 0, g_Str_File_House_CPP, 2377);
    MessageListClass::AddMessage(g_GameNetworkObject, 0, 0, String, v106, 16454, v107, 0);
    dword_A8F040 = 1;
    v56 = Math::RoundToInt(*(double *)RulesClass_Instance[1].WeatherConBolts * 900.0);
    v57 = Rules::GetProductionTimeMult((int *)g_GameModeOptions, v56);
    *((uint32_t *)this + 5615) = CurrentFrame;
    *((uint32_t *)this + 5616) = v110;
    *((uint32_t *)this + 5617) = v57;
    goto LABEL_165;
    LABEL_151:
    v50 = *((uint32_t *)this + 196);
    v51 = Float4::Sum((float *)this + 191);
    if ( (int)(v50 - Math::RoundToInt(v51)) < 30 && v50 > 50 )
    v52 = Math::RoundToInt(*(double *)RulesClass_Instance[1].WeatherConBolts * 900.0);
    v53 = Rules::GetProductionTimeMult((int *)g_GameModeOptions, v52);
    *v45 = (int)CurrentFrame;
    *((uint32_t *)this + 5622) = v110;
    *((uint32_t *)this + 5623) = v53;
    goto LABEL_154;
    v44 -= (int)CurrentFrame - v43;
    if ( v44 )
    goto LABEL_147;
    goto LABEL_144;
    LABEL_165:
    v58 = *((uint32_t *)this + 5367);
    if ( v58 && (*(int (__thiscall **)(uint32_t))(*(uint32_t *)v58 + 44))(*((uint32_t *)this + 5367)) == 1 )
    (*(void (__thiscall **)(int, int))(*(uint32_t *)v58 + 292))(v58, 2);
    v59 = *((uint32_t *)this + 5609);
    v60 = *((uint32_t *)this + 5611);
    if ( v59 != -1 )
    if ( (int)CurrentFrame - v59 >= v60 )
    LABEL_173:
    v61 = v110;
    *((uint32_t *)this + 5609) = CurrentFrame;
    *((uint32_t *)this + 5610) = v61;
    *((uint32_t *)this + 5611) = 90;
    *((uint8_t *)this + 582) = 0;
    goto LABEL_174;
    v60 -= (int)CurrentFrame - v59;
    if ( !v60 || *((uint8_t *)this + 582) )
    goto LABEL_173;
    LABEL_174:
    for ( j = 0; j < *((uint32_t *)this + 153); ++j )
    v63 = *(uint32_t *)(*((uint32_t *)this + 150) + 4 * j);
    if ( (unsigned __int8)SuperWeapon::UpdateSuperWeaponReadyState(this == HouseClass_Player)
    && this == HouseClass_Player )
    (*(void (__thiscall **)(uint32_t))(**(uint32_t **)(v63 + 40) + 64))(*(uint32_t *)(v63 + 40));
    Status = HouseClass::GetStatus((void *)0x39, 0);
    Sidebar::ActivateTab((int)&MapClass_Instance, Status);
    if ( GameMode_Current[0]
    && !*((uint8_t *)this + 501)
    && (int)CurrentFrame > 0
    && !*(uint8_t *)(*((uint32_t *)this + 13) + 422) )
    if ( ShortGame )
    v65 = (uint32_t *)RulesClass_Instance->AICaptureLowPower[2];
    v66 = DynamicVector::GetOrGrow((uint32_t *)this + 5445, *(uint32_t *)(v65[1] + 3576));
    v67 = DynamicVector::GetOrGrow((uint32_t *)this + 5445, *(uint32_t *)(v65[2] + 3576)) + v66;
    v68 = DynamicVector::GetOrGrow((uint32_t *)this + 5445, *(uint32_t *)(*v65 + 3576)) + v67;
    if ( *((int *)this + 188) <= 0 && v68 <= 0 )
    LABEL_190:
    HouseClass::ClearLowPowerTargets(this);
    HouseClass::DefeatPlayer(this);
    else
    v69 = *((uint32_t *)this + 188);
    v70 = VectorClass::GetCount((uint32_t *)this + 5465) + v69;
    v71 = VectorClass::GetCount((uint32_t *)this + 5470) + v70;
    v72 = VectorClass::GetCount((uint32_t *)this + 5475) + v71;
    v73 = *(uint32_t *)(RulesClass_Instance->ComputerBaseDefenseResponse + 8);
    if ( v73 )
    v72 += DynamicVector::GetOrGrow((uint32_t *)this + 5460, *(uint32_t *)(v73 + 3576));
    if ( !v72 )
    goto LABEL_190;
    if ( !((int)CurrentFrame % 8) )
    for ( k = *((uint32_t *)this + 18) - 1; k >= 0; --k )
    TeamClass::Update_0(*(void ***)(*((uint32_t *)this + 15) + 4 * k), 8, 0, g_ControlGroupState, 0, 0);
    v75 = *((uint32_t *)this + 5517);
    v76 = *((uint32_t *)this + 5519);
    if ( v75 == -1 )
    LABEL_197:
    if ( v76 )
    goto LABEL_206;
    goto LABEL_198;
    if ( (int)CurrentFrame - v75 < v76 )
    v76 -= (int)CurrentFrame - v75;
    goto LABEL_197;
    LABEL_198:
    v77 = *((uint8_t *)this + 492);
    if ( !GameMode_Current[0] )
    v77 = v77 || *((uint8_t *)this + 493);
    if ( !v77 && !*(uint8_t *)(*((uint32_t *)this + 13) + 422) )
    v78 = House::UpdateHouseAI(this);
    *((uint32_t *)this + 5517) = CurrentFrame;
    *((uint32_t *)this + 5518) = v110;
    *((uint32_t *)this + 5519) = v78;
    LABEL_206:
    v79 = *((uint8_t *)this + 492);
    if ( !GameMode_Current[0] )
    v79 = v79 || *((uint8_t *)this + 493);
    if ( !v79 && !*(uint8_t *)(*((uint32_t *)this + 13) + 422) && !((int)CurrentFrame % 8) )
    v80 = *((uint32_t *)this + 121);
    if ( !v80 || !GameMode_Current[0] )
    HouseClass::AutoBuild((int)this);
    LABEL_251:
    HouseClass::AIUnitProduction(this);
    HouseClass::AIInfantryProduction(this);
    HouseClass::AIAircraftProduction(this);
    goto LABEL_252;
    if ( v80 == 1 )
    HouseClass::AutoBuild((int)this);
    v81 = *((uint32_t *)this + 5523);
    if ( v81 == -1
    || !(*(int (__thiscall **)(uint32_t, int, int, int, void*375 *))(**((uint32_t **)g_TriggerTypeCount + v81) + 148))(
    *((uint32_t *)g_TriggerTypeCount + v81),
    1,
    1,
    1,
    this) )
    goto LABEL_251;
    else if ( v80 == 2 )
    HouseClass::AIUnitProduction(this);
    p_AICaptureLowMoneyMark = &RulesClass_Instance->AICaptureLowMoneyMark;
    v83 = 1 << SuperWeaponTypeClass::FindByName((void *)(*((uint32_t *)this + 13) + 152));
    v84 = p_AICaptureLowMoneyMark[4];
    v85 = 0;
    if ( v84 <= 0 )
    goto LABEL_233;
    v86 = p_AICaptureLowMoneyMark[1];
    v87 = v86;
    while ( (v83 & *(uint32_t *)(*(uint32_t *)v87 + 1740)) == 0 )
    ++v85;
    v87 += 4;
    if ( v85 >= v84 )
    goto LABEL_233;
    if ( !*(uint32_t *)(v86 + 4 * v85) )
    goto LABEL_233;
    v88 = &RulesClass_Instance->AICaptureLowMoneyMark;
    v89 = 1 << SuperWeaponTypeClass::FindByName((void *)(*((uint32_t *)this + 13) + 152));
    v90 = v88[4];
    v91 = 0;
    if ( v90 <= 0 )
    LABEL_231:
    v94 = 0;
    else
    v92 = v88[1];
    v93 = v92;
    while ( (v89 & *(uint32_t *)(*(uint32_t *)v93 + 1740)) == 0 )
    ++v91;
    v93 += 4;
    if ( v91 >= v90 )
    goto LABEL_231;
    v94 = *(uint32_t *)(v92 + 4 * v91);
    if ( *((uint32_t *)this + 5524) != *(uint32_t *)(v94 + 3576) )
    LABEL_233:
    HouseClass::AIInfantryProduction(this);
    HouseClass::AIAircraftProduction(this);
    v95 = *((uint32_t *)this + 5524);
    v96 = v95 == -1 && *((uint32_t *)this + 5525) == -1 && *((uint32_t *)this + 5526) == -1;
    if ( v95 != -1
    && !(*(int (__thiscall **)(uint32_t, int, int, int, void*375 *))(**((uint32_t **)g_UnitTypeCount2 + v95) + 148))(
    *((uint32_t *)g_UnitTypeCount2 + v95),
    1,
    1,
    1,
    this) )
    v96 = 1;
    v97 = *((uint32_t *)this + 5525);
    if ( v97 != -1
    && !(*(int (__thiscall **)(uint32_t, int, int, int, void*375 *))(**((uint32_t **)Factory_ExitCellTable + v97) + 148))(
    *((uint32_t *)Factory_ExitCellTable + v97),
    1,
    1,
    1,
    this) )
    v96 = 1;
    v98 = *((uint32_t *)this + 5526);
    if ( v98 != -1
    && !(*(int (__thiscall **)(uint32_t, int, int, int, void*375 *))(**((uint32_t **)g_AircraftTypeCount + v98) + 148))(
    *((uint32_t *)g_AircraftTypeCount + v98),
    1,
    1,
    1,
    this)
    || v96 )
    HouseClass::AutoBuild((int)this);
    LABEL_252:
    v99 = *((uint8_t *)this + 508);
    if ( HouseClass_Player == this )
    if ( !v99 )
    goto LABEL_267;
    *((uint8_t *)this + 508) = 0;
    v100 = *((uint32_t *)this + 30);
    for ( m = 0; m < v100; ++m )
    v102 = *(uint32_t *)(*((uint32_t *)this + 27) + 4 * m);
    if ( v102
    && *(uint8_t *)(v102 + 144)
    && *(int *)(v102 + 108) > 0
    && (*(int (__thiscall **)(int))(*(uint32_t *)v102 + 388))(v102) != 19
    && *(uint32_t *)(v102 + 180) != 19
    && HouseClass_Player == *(void*375 **)(v102 + 540) )
    (*(void (__thiscall **)(int))(*(uint32_t *)v102 + 1248))(v102);
    HouseClass::UpdateAllProductionTabs(&MapClass_Instance);
    else
    if ( !v99 )
    goto LABEL_267;
    *((uint8_t *)this + 508) = 0;
    SuperWeapon::UpdateSuperWeaponsOwnedHouseClass((int)this);
    SuperWeapon::UpdateSuperWeaponsUnavailableHouseClass(this);
    LABEL_267:
    if ( !*((uint8_t *)this + 581) )
    goto LABEL_273;
    v103 = *((uint32_t *)this + 160);
    v104 = *((uint32_t *)this + 162);
    if ( v103 == -1 )
    LABEL_271:
    if ( v104 )
    goto LABEL_273;
    goto LABEL_272;
    v105 = (int)CurrentFrame - v103;
    if ( v105 < v104 )
    v104 -= v105;
    goto LABEL_271;
    LABEL_272:
    *((uint8_t *)this + 581) = 0;
    LABEL_273:
    if ( this == HouseClass_Player )
    if ( *((uint8_t *)this + 587) )
    *((uint8_t *)this + 587) = 0;
    Radar::UpdateReveal(0, 0);
}

// 0x004F9610
double  HouseClass::GiveTiberium_Storage(uint32_t *this, float a2, int a3)
{
    *(this + 5434) = Math::RoundToInt(a2 * 5.0 + (double)(int)*(this + 5434));
    *(this + 195) = Math::RoundToInt(
    (double)*(int *)(*(uint32_t *)&BuildingClass_InstanceArray->gap0[4 * a3] + 184)
    * *(float *)(*(this + 13) + 328)
    * a2
    + (double)(int)*(this + 195));
    return a2;
}

// 0x004F9970
char  HouseClass::UpdateAllSilos(int this, int a2, int a3)
{
    int v3; // esi
    int v5; // eax
    double v6; // st7
    int v7; // ebx
    int i; // esi
    int v9; // ecx
    v3 = 0;
    if ( a3 )
    v3 = Math::RoundToInt((double)a2 / (double)a3 * 4.0 + 0.5);
    v5 = 0;
    if ( *(uint32_t *)(this + 784) )
    v6 = Float4::Sum((float *)(this + 764));
    v5 = Math::RoundToInt(v6 / (double)*(int *)(this + 784) * 4.0 + 0.5);
    if ( v3 != v5 )
    v7 = *(uint32_t *)(this + 120);
    for ( i = 0; i < v7; ++i )
    v5 = *(uint32_t *)(this + 108);
    v9 = *(uint32_t *)(v5 + 4 * i);
    if ( v9 )
    LOBYTE(v5) = *(uint8_t *)(v9 + 129);
    if ( !(uint8_t)v5 )
    LOBYTE(v5) = *(uint8_t *)(*(uint32_t *)(v9 + 1312) + 5800);
    if ( (uint8_t)v5 )
    LOBYTE(v5) = (*(int (__thiscall **)(int, int))(*(uint32_t *)v9 + 292))(v9, 2);
    return v5;
}

// 0x004F9B50
int  HouseClass::MakeAlly(void *this, int a2, char a3)
{
    return HouseClass::HandleAlliance((int)this, *(uint32_t *)&HouseClass_Array->gap0[4 * a2], a3);
}

// 0x004FA2E0
int  HouseClass::SetThreat_Bounds(char *this, int a2, int a3)
{
    int v3; // esi
    int v5; // edi
    int v6; // edx
    int v7; // eax
    int *v8; // ecx
    int result; // eax
    int v10; // [esp+18h] [ebp+8h]
    v3 = a3;
    if ( a3 >= 0 )
    v5 = 0;
    else
    v3 = -a3;
    v5 = 1;
    v6 = 0;
    v10 = 9;
    do
    v7 = v3 >> dword_8243EC[v6];
    v8 = (int *)(this + 4 * a2 + 4 * dword_8243C8[v6] + 22500);
    if ( v5 )
    *v8 -= v7;
    else
    *v8 += v7;
    if ( *v8 < 0 )
    *v8 = 0;
    ++v6;
    result = --v10;
    while ( v10 );
    return result;
}

// 0x004FB920
uint32_t * HouseClass::SDDTORAllAndTriggers(uint32_t *this)
{
    int v1; // esi
    uint32_t *v3; // eax
    uint32_t *v4; // ecx
    uint32_t *result; // eax
    int v6; // esi
    int v7; // ecx
    v1 = 0;
    if ( g_SidebarState > 0 )
    v3 = g_TechnoClass_Count;
    do
    v4 = (uint32_t *)v3[v1];
    if ( (uint32_t *)v4[135] == this )
    if ( v4 )
    (*(void (__thiscall **)(uint32_t *, int))(*v4 + 32))(v4, 1);
    v3 = g_TechnoClass_Count;
    --v1;
    ++v1;
    while ( v1 < g_SidebarState );
    result = (uint32_t *)g_ProductionQueueState;
    v6 = 0;
    if ( g_ProductionQueueState > 0 )
    result = g_TriggerClassCapacity;
    do
    if ( *(uint32_t *)(*(uint32_t *)(result[v6] + 36) + 164) == *(this + 13) )
    v7 = result[v6];
    if ( v7 )
    (*(void (__thiscall **)(int, int))(*(uint32_t *)v7 + 32))(v7, 1);
    result = g_TriggerClassCapacity;
    --v6;
    ++v6;
    while ( v6 < g_ProductionQueueState );
    if ( this )
    return (uint32_t *)(*(int (__thiscall **)(uint32_t *, int))(*this + 32))(this, 1);
    return result;
}

// 0x004FBF60
char  HouseClass::DroppedFlag(int *this, __int16 *a2, int a3)
{
    __int16 *v3; // edi
    int v5; // eax
    void *v6; // eax
    char v7; // bl
    void *v8; // eax
    int v10; // [esp-8h] [ebp-14h]
    int v11; // [esp-8h] [ebp-14h]
    int v12; // [esp+8h] [ebp-4h] BYREF
    v3 = a2;
    if ( !LayerClass::CoordinatesLegal(&MapClass_Instance, a2) )
    return 0;
    HouseClass::IsCellOccupied((int)this, *(this + 5367), a3);
    v5 = *(this + 13);
    a2 = *(__int16 **)v3;
    v10 = *(uint32_t *)(v5 + 184);
    v6 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2);
    v7 = HouseClass::MarkCellBuildable((int)v6, v10);
    if ( v7
    || (a3 = 0,
    a2 = (__int16 *)*LayerClass::Pathfinding_Find(
    &MapClass_Instance,
    0,
    &v12,
    v3,
    1,
    -1,
    0,
    0,
    1,
    1,
    0,
    0,
    0,
    1,
    (__int16 *)&a3,
    0,
    0),
    a2 != (__int16 *)g_ControlGroupState)
    && (v11 = *(uint32_t *)(*(this + 13) + 184),
    v8 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2),
    (v7 = HouseClass::MarkCellBuildable((int)v8, v11)) != 0) )
    *(this + 5367) = (int)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2);
    return v7;
}

// 0x004FC060
char  HouseClass::PickedUpFlag(int *this, int a2, char a3)
{
    if ( !a2 || *(uint8_t *)(a2 + 129) )
    return 0;
    HouseClass::IsCellOccupied((int)this, *(this + 5367), a3);
    HouseClass::SetPrimaryFactory((uint32_t *)a2, *(uint32_t *)(*(this + 13) + 184));
    *(this + 5367) = a2;
    return 1;
}

// 0x004FC790
char  HouseClass::DestroyAllBuildings(void *this)
{
    int PriorityTarget; // eax
    int v2; // ebx
    int v3; // edi
    int v5; // esi
    int v6; // ecx
    int v8; // [esp+Ch] [ebp-4h] BYREF
    LOBYTE(PriorityTarget) = g_SidebarState;
    v2 = 0;
    v3 = 0;
    while ( v2 < g_SidebarState )
    v5 = *((uint32_t *)g_TechnoClass_Count + v2);
    PriorityTarget = ObjectClass::GetPriorityTarget((uint32_t *)v5);
    if ( (void *)PriorityTarget != this
    || (PriorityTarget = (*(int (__thiscall **)(int))(*(uint32_t *)v5 + 44))(v5), PriorityTarget != 6)
    || (LOBYTE(PriorityTarget) = *(uint8_t *)(v5 + 129), (uint8_t)PriorityTarget)
    || v5 == v3 )
    ++v2;
    else
    v8 = *(uint32_t *)(v5 + 108);
    v6 = *(uint32_t *)(v5 + 632);
    if ( v6 )
    TriggerClass::UnlinkTags(v6);
    LOBYTE(PriorityTarget) = (*(int (__thiscall **)(int, int *, uint32_t, int, uint32_t, int, int, uint32_t))(*(uint32_t *)v5 + 364))(
    v5,
    &v8,
    0,
    RulesClass_Instance->SilverCrate[5],
    0,
    1,
    1,
    0);
    v3 = v5;
    return PriorityTarget;
}

// 0x004FC820
char  HouseClass::DestroyAllNonBuildingsNonNaval(void *this)
{
    int PriorityTarget; // eax
    int v2; // ebx
    int v3; // edi
    int v5; // esi
    int v6; // ecx
    int v8; // [esp+Ch] [ebp-4h] BYREF
    LOBYTE(PriorityTarget) = g_SidebarState;
    v2 = 0;
    v3 = 0;
    while ( v2 < g_SidebarState )
    v5 = *((uint32_t *)g_TechnoClass_Count + v2);
    PriorityTarget = ObjectClass::GetPriorityTarget((uint32_t *)v5);
    if ( (void *)PriorityTarget != this
    || (PriorityTarget = (*(int (__thiscall **)(int))(*(uint32_t *)v5 + 44))(v5), PriorityTarget == 6)
    || (LOBYTE(PriorityTarget) = *(uint8_t *)(v5 + 129), (uint8_t)PriorityTarget)
    || (PriorityTarget = (*(int (__thiscall **)(int))(*(uint32_t *)v5 + 132))(v5), *(uint8_t *)(PriorityTarget + 3278))
    || v5 == v3 )
    ++v2;
    else
    v8 = *(uint32_t *)(v5 + 108);
    v6 = *(uint32_t *)(v5 + 632);
    if ( v6 )
    TriggerClass::UnlinkTags(v6);
    LOBYTE(PriorityTarget) = (*(int (__thiscall **)(int, int *, uint32_t, int, uint32_t, int, int, uint32_t))(*(uint32_t *)v5 + 364))(
    v5,
    &v8,
    0,
    RulesClass_Instance->SilverCrate[5],
    0,
    1,
    1,
    0);
    v3 = v5;
    return PriorityTarget;
}

// 0x004FC8D0
char  HouseClass::DestroyAllNonBuildingsNaval(void *this)
{
    int PriorityTarget; // eax
    int v2; // ebx
    int v3; // edi
    int v5; // esi
    int v6; // ecx
    int v8; // [esp+Ch] [ebp-4h] BYREF
    LOBYTE(PriorityTarget) = g_SidebarState;
    v2 = 0;
    v3 = 0;
    while ( v2 < g_SidebarState )
    v5 = *((uint32_t *)g_TechnoClass_Count + v2);
    PriorityTarget = ObjectClass::GetPriorityTarget((uint32_t *)v5);
    if ( (void *)PriorityTarget != this
    || (PriorityTarget = (*(int (__thiscall **)(int))(*(uint32_t *)v5 + 44))(v5), PriorityTarget == 6)
    || (LOBYTE(PriorityTarget) = *(uint8_t *)(v5 + 129), (uint8_t)PriorityTarget)
    || (PriorityTarget = (*(int (__thiscall **)(int))(*(uint32_t *)v5 + 132))(v5), !*(uint8_t *)(PriorityTarget + 3278))
    || v5 == v3 )
    ++v2;
    else
    v8 = *(uint32_t *)(v5 + 108);
    v6 = *(uint32_t *)(v5 + 632);
    if ( v6 )
    TriggerClass::UnlinkTags(v6);
    LOBYTE(PriorityTarget) = (*(int (__thiscall **)(int, int *, uint32_t, int, uint32_t, int, int, uint32_t))(*(uint32_t *)v5 + 364))(
    v5,
    &v8,
    0,
    RulesClass_Instance->SilverCrate[5],
    0,
    1,
    1,
    0);
    v3 = v5;
    return PriorityTarget;
}

// 0x004FD060
int  HouseClass::FindBuildingOfType(int *this, int a2, int a3)
{
    int v4; // ebp
    int v5; // edi
    int v6; // esi
    int v7; // eax
    uint32_t *v8; // ecx
    unsigned int *v9; // eax
    int v11; // [esp+10h] [ebp-10h]
    uint8_t v12[12]; // [esp+14h] [ebp-Ch] BYREF
    if ( DynamicVector::GetOrGrow(this + 5440, a2) <= 0 )
    return 0;
    v4 = 0;
    v11 = *(this + 30);
    if ( v11 <= 0 )
    return 0;
    v5 = g_TriggerClassCount;
    while ( 1 )
    v6 = *(uint32_t *)(*(this + 27) + 4 * v4);
    if ( !v6 || *(uint8_t *)(v6 + 129) )
    goto LABEL_15;
    v7 = 0;
    if ( v5 <= 0 )
    LABEL_10:
    v7 = -1;
    else
    v8 = g_TriggerTypeCount;
    while ( *v8 != *(uint32_t *)(v6 + 1312) )
    ++v7;
    ++v8;
    if ( v7 >= v5 )
    goto LABEL_10;
    if ( v7 != a2 )
    goto LABEL_15;
    if ( a3 == -1 )
    return v6;
    v9 = (unsigned int *)(*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)v6 + 72))(v6, v12);
    if ( PathfindingClass::FindPath(this, v9) == a3 )
    return v6;
    v5 = g_TriggerClassCount;
    LABEL_15:
    if ( ++v4 >= v11 )
    return 0;
}

int  HouseClass::AI_Update(unsigned int this)
{
    int v2; // ebp
    int v3; // edx
    int v4; // eax
    int v5; // eax
    void *v6; // eax
    unsigned int v7; // ecx
    __int64 v8; // rax
    int v9; // edi
    int v10; // esi
    int v11; // eax
    int v12; // eax
    int v13; // ecx
    int v14; // edx
    void *v15; // eax
    int *v16; // edx
    double v17; // st7
    int v18; // eax
    int v19; // esi
    int v20; // edx
    int v21; // eax
    uint32_t *v22; // ecx
    int v23; // eax
    int v24; // edi
    int v25; // esi
    int v26; // ecx
    int *v27; // edx
    int v28; // eax
    int v29; // eax
    int i; // ebp
    int j; // edi
    int v33; // [esp+8h] [ebp-48h]
    int v34; // [esp+20h] [ebp-30h] BYREF
    uint32_t v35[2]; // [esp+24h] [ebp-2Ch] BYREF
    int v36; // [esp+2Ch] [ebp-24h]
    unsigned int v37; // [esp+30h] [ebp-20h]
    int v38; // [esp+34h] [ebp-1Ch]
    uint32_t v39[3]; // [esp+38h] [ebp-18h] BYREF
    uint8_t v40[12]; // [esp+44h] [ebp-Ch] BYREF
    v2 = 0;
    v3 = *(uint32_t *)(this + 22080);
    v4 = *(uint32_t *)(this + 22088);
    if ( v3 == -1 )
    LABEL_4:
    if ( v4 )
    goto LABEL_29;
    goto LABEL_5;
    if ( (int)CurrentFrame - v3 < v4 )
    v4 -= (int)CurrentFrame - v3;
    goto LABEL_4;
    LABEL_5:
    if ( *(uint32_t *)(this + 22016) == -1 && GameMode_Current[0] && !*(uint8_t *)(*(uint32_t *)(this + 52) + 422) )
    v5 = CellStruct::Equals((_WORD *)(this + 21652), &g_ControlGroupState)
    ? *(uint32_t *)(this + 21648)
    : *(uint32_t *)(this + 21652);
    v34 = v5;
    if ( !CellStruct::Equals(&v34, &g_ControlGroupState) )
    v6 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v34);
    LODWORD(v8) = (*(int (__thiscall **)(void *, uint32_t *))(*(uint32_t *)v6 + 72))(v6, v39);
    v36 = *(uint32_t *)v8;
    v7 = *(uint32_t *)(v8 + 4);
    v37 = v7;
    HIDWORD(v8) = *(uint32_t *)(v8 + 8);
    v38 = HIDWORD(v8);
    if ( v36 != g_ControlGroupPool
    || __PAIR64__(HIDWORD(v8), v7) != __PAIR64__(g_ControlGroupLimit, g_ControlGroupConfig) )
    v9 = 0x7FFFFFFF;
    v34 = 0;
    if ( HouseClass_Count > 0 )
    do
    v10 = *(uint32_t *)&HouseClass_Array->gap0[4 * v34];
    if ( v10 != this )
    HIDWORD(v8) = *(uint32_t *)(v10 + 52);
    if ( !*(uint8_t *)(HIDWORD(v8) + 422) && !*(uint8_t *)(v10 + 501) )
    v11 = CellStruct::Equals((_WORD *)(this + 21652), &g_ControlGroupState)
    ? *(uint32_t *)(this + 21648)
    : *(uint32_t *)(this + 21652);
    v35[0] = v11;
    if ( CellStruct::Equals(v35, &g_ControlGroupState) )
    v12 = g_ControlGroupPool;
    v13 = g_ControlGroupConfig;
    v14 = g_ControlGroupLimit;
    else
    v15 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)v35);
    v16 = (int *)(*(int (__thiscall **)(void *, uint8_t *))(*(uint32_t *)v15 + 72))(v15, v40);
    v12 = *v16;
    v13 = v16[1];
    v14 = v16[2];
    v39[0] = v12 - v36;
    v39[1] = v13 - v37;
    v39[2] = v14 - v38;
    v17 = Math::Sqrt(
    (double)(v12 - v36) * (double)(v12 - v36)
    + (double)(v14 - v38) * (double)(v14 - v38)
    + (double)(int)(v13 - v37) * (double)(int)(v13 - v37));
    v8 = Math::RoundToInt(v17);
    if ( (int)v8 < v9 )
    v2 = v10;
    v9 = v8;
    ++v34;
    while ( v34 < HouseClass_Count );
    if ( v2 )
    UpdateHouseClassAnger(this, SHIDWORD(v8), 1, v2);
    LABEL_29:
    v18 = *(uint32_t *)(this + 22016);
    if ( v18 != -1 )
    v19 = *(uint32_t *)&HouseClass_Array->gap0[4 * v18];
    if ( *(uint8_t *)(v19 + 501) )
    v20 = *(uint32_t *)(this + 22036);
    v21 = 0;
    if ( v20 > 0 )
    v22 = *(uint32_t **)(this + 22024);
    while ( *v22 != v19 )
    ++v21;
    v22 += 2;
    if ( v21 >= v20 )
    goto LABEL_37;
    v33 = -*(uint32_t *)(*(uint32_t *)(this + 22024) + 8 * v21 + 4);
    UpdateHouseClassAnger(this, v33, v33, v19);
    LABEL_37:
    *(uint32_t *)(this + 22016) = -1;
    if ( GameMode_Current[0] || *(uint32_t *)(this + 588) >= RulesClass_Instance[1].AttackingAircraftSightRange )
    HouseClass::UpdateAITryFireSW(this);
    v23 = *(uint32_t *)(this + 592);
    if ( v23 == 4 )
    (*(void (__stdcall **)(unsigned int))(*(uint32_t *)(this + 36) + 52))(this + 36);
    (*(void (__stdcall **)(unsigned int))(*(uint32_t *)(this + 36) + 56))(this + 36);
    else
    if ( !v23 && (*(int (__stdcall **)(unsigned int))(*(uint32_t *)(this + 36) + 24))(this + 36) < 25 )
    *(uint32_t *)(this + 592) = 1;
    if ( *(uint32_t *)(this + 592) == 1
    && (*(int (__stdcall **)(unsigned int))(*(uint32_t *)(this + 36) + 24))(this + 36) >= 25 )
    *(uint32_t *)(this + 592) = 0;
    if ( *(uint32_t *)(this + 592) != 3 )
    goto LABEL_53;
    if ( *(uint32_t *)(this + 21720) + 900 < (int)CurrentFrame )
    *(uint32_t *)(this + 592) = 0;
    if ( *(uint32_t *)(this + 592) != 3 )
    LABEL_53:
    if ( *(uint32_t *)(this + 21720) + 900 > (int)CurrentFrame )
    *(uint32_t *)(this + 592) = 3;
    if ( GameMode_Current[0] )
    v24 = 0;
    while ( 1 )
    v35[v24] = 0;
    if ( v24 )
    if ( v24 == 1 )
    v35[1] = ValidateAIBuildAffordability(this);
    else
    v35[v24] = 0;
    goto LABEL_72;
    if ( *(uint32_t *)(this + 592) == 3 )
    goto LABEL_70;
    v25 = *(uint32_t *)(this + 120);
    v26 = 0;
    if ( v25 > 0 )
    break;
    LABEL_69:
    v29 = 4;
    LABEL_71:
    v35[0] = v29;
    LABEL_72:
    if ( ++v24 >= 2 )
    for ( i = 4; i >= 1; --i )
    for ( j = 0; j < 2; ++j )
    if ( v35[j] == i )
    if ( j )
    if ( j == 1 )
    HouseClass::ManageProduction(this, i);
    else if ( i == 4 )
    (*(void (__stdcall **)(unsigned int))(*(uint32_t *)(this + 36) + 52))(this + 36);
    (*(void (__stdcall **)(unsigned int))(*(uint32_t *)(this + 36) + 56))(this + 36);
    return Random::Range((uint32_t *)ScenarioClass_Instance + 134, 1, 7) + 105;
    v27 = *(int **)(this + 108);
    while ( 1 )
    v28 = *v27;
    if ( *v27 )
    if ( *(uint8_t *)(v28 + 144) && !*(uint8_t *)(v28 + 129) && *(uint32_t *)(*(uint32_t *)(v28 + 1312) + 3768) )
    break;
    ++v26;
    ++v27;
    if ( v26 >= v25 )
    goto LABEL_69;
    LABEL_70:
    v29 = 0;
    goto LABEL_71;
    return Random::Range((uint32_t *)ScenarioClass_Instance + 134, 1, 7) + 105;
}

// 0x004FEA60
int  HouseClass::AIUnitProduction(uint32_t *this)
{
    int v1; // ebp
    int *p_AICaptureLowMoneyMark; // esi
    int v3; // edx
    int v4; // ecx
    int v5; // eax
    int v6; // esi
    int v7; // edi
    uint32_t *BuildableFromArray; // eax
    int v9; // eax
    int v11; // edi
    int v12; // ebx
    int v13; // esi
    char v14; // al
    int v15; // esi
    int v16; // ecx
    int v17; // ebx
    int v18; // edi
    uint32_t *v19; // esi
    int v20; // eax
    int v21; // ecx
    uint32_t *v22; // eax
    int i; // edi
    uint32_t *v24; // esi
    uint32_t *v25; // eax
    int v26; // ebx
    int v27; // esi
    int v28; // ebp
    int v29; // [esp+10h] [ebp-4DCh]
    int v30; // [esp+10h] [ebp-4DCh]
    int v31; // [esp+14h] [ebp-4D8h]
    int v33; // [esp+1Ch] [ebp-4D0h]
    int v34; // [esp+20h] [ebp-4CCh]
    void **v35; // [esp+24h] [ebp-4C8h] BYREF
    void *Block; // [esp+28h] [ebp-4C4h]
    int v37; // [esp+2Ch] [ebp-4C0h]
    char v38; // [esp+30h] [ebp-4BCh]
    char v39; // [esp+31h] [ebp-4BBh]
    int v40; // [esp+34h] [ebp-4B8h]
    int v41; // [esp+38h] [ebp-4B4h]
    uint32_t v42[100]; // [esp+3Ch] [ebp-4B0h] BYREF
    uint32_t v43[200]; // [esp+1CCh] [ebp-320h] BYREF
    v1 = (int)this;
    if ( *(this + 5524) == -1 )
    p_AICaptureLowMoneyMark = &RulesClass_Instance->AICaptureLowMoneyMark;
    v3 = 1 << SuperWeaponTypeClass::FindByName((void *)(*(this + 13) + 152));
    v4 = p_AICaptureLowMoneyMark[4];
    v5 = 0;
    if ( v4 <= 0 )
    goto LABEL_6;
    v6 = p_AICaptureLowMoneyMark[1];
    v7 = v6;
    while ( (v3 & *(uint32_t *)(*(uint32_t *)v7 + 1740)) == 0 )
    ++v5;
    v7 += 4;
    if ( v5 >= v4 )
    goto LABEL_6;
    v11 = *(uint32_t *)(v6 + 4 * v5);
    if ( v11 )
    v12 = *(uint32_t *)(v1 + 344);
    v13 = *(uint32_t *)(v1 + 348) * *(uint32_t *)(RulesClass_Instance->EMPulseSparkles + 4 * *(uint32_t *)(v1 + 388));
    if ( !HouseClass::FirstBuildableFromArray((uint32_t *)v1, (int)&RulesClass_Instance->GDIBaseDefenseCoefficient + 4) )
    v13 = *(uint32_t *)(LODWORD(RulesClass_Instance->ExtraInfantryLight) + 4 * *(uint32_t *)(v1 + 388));
    if ( *(uint32_t *)(v1 + 588) >= RulesClass_Instance[1].SelfHealUnitFrames && !*(uint8_t *)(v1 + 578) )
    v14 = *(uint8_t *)(v1 + 492);
    if ( !GameMode_Current[0] )
    v14 = v14 || *(uint8_t *)(v1 + 493);
    if ( !v14 && v13 > v12 && *(uint32_t *)(v11 + 1588) <= *(uint32_t *)(v1 + 468) )
    *(uint32_t *)(v1 + 22096) = *(uint32_t *)(v11 + 3576);
    return 15;
    else
    LABEL_6:
    if ( *(uint32_t *)(v1 + 344) < *(uint32_t *)(LODWORD(RulesClass_Instance->ExtraInfantryLight)
    + 4 * *(uint32_t *)(v1 + 388)) )
    BuildableFromArray = HouseClass::FirstBuildableFromArray(
    (uint32_t *)v1,
    (int)&RulesClass_Instance->GDIBaseDefenseCoefficient + 4);
    if ( BuildableFromArray )
    v9 = BuildableFromArray[258];
    if ( v9 )
    *(uint32_t *)(v1 + 22096) = *(uint32_t *)(v9 + 3576);
    return 15;
    v15 = 0;
    memset(v42, 0, sizeof(v42));
    v29 = 0;
    memset32(v43, 0x7FFFFFFF, 0x64u);
    if ( g_HouseClass_AIProductionState > 0 )
    do
    v16 = *((uint32_t *)g_TeamClassPool + v15);
    if ( v16 )
    if ( (v17 = *(uint32_t *)(v16 + 80), *(uint8_t *)(*(uint32_t *)(v16 + 36) + 171)) && !*(uint8_t *)(v16 + 121)
    || !*(uint8_t *)(v16 + 119) && !*(uint8_t *)(v16 + 120) )
    if ( *(uint32_t *)(v16 + 44) == v1 )
    v18 = 0;
    Block = 0;
    v37 = 0;
    v38 = 1;
    v39 = 0;
    v35 = &DynamicVectorClass<TechnoTypeClass const *>::`vftable';
    v41 = 10;
    v40 = 0;
    HouseClass::UpdateProductionQueue((uint32_t *)v16, (int)&v35);
    if ( v40 > 0 )
    do
    v19 = (uint32_t *)*((uint32_t *)Block + v18);
    if ( (*(int (__thiscall **)(uint32_t *))(*v19 + 44))(v19) == 40 )
    v20 = v19[894];
    v21 = v43[v20];
    ++v42[v20];
    v22 = &v43[v20];
    if ( v17 < v21 )
    *v22 = v17;
    ++v18;
    while ( v18 < v40 );
    v15 = v29;
    v35 = &VectorClass<TechnoTypeClass const *>::`vftable';
    if ( Block && v39 )
    __3_YAXPAX_Z(Block);
    Block = 0;
    v39 = 0;
    v37 = 0;
    v29 = ++v15;
    while ( v15 < g_HouseClass_AIProductionState );
    for ( i = 0; i < g_HouseClass_BuildState; ++i )
    v24 = (uint32_t *)*((uint32_t *)g_UnitClassPool + i);
    if ( v24 && (int)v42[*(uint32_t *)(v24[433] + 3576)] > 0 && FootClass::CanBeRecruited(v24, v1) )
    v25 = &v42[*(uint32_t *)(v24[433] + 3576)];
    --*v25;
    v26 = 0;
    v27 = 0;
    v34 = -1;
    v30 = -1;
    v33 = 0x7FFFFFFF;
    if ( g_CrateCount > 0 )
    do
    v28 = v42[v27];
    if ( v28 > 0 )
    if ( HouseClass::CanBuild(this, *((uint32_t *)g_UnitTypeCount2 + v27), 0, 0) )
    v31 = (*(int (__thiscall **)(uint32_t, uint32_t *))(**((uint32_t **)g_UnitTypeCount2 + v27) + 132))(
    *((uint32_t *)g_UnitTypeCount2 + v27),
    this);
    if ( v31 <= (*(int (__stdcall **)(uint32_t *))(*(this + 9) + 24))(this + 9) )
    if ( v34 == -1 || v34 < v28 )
    v34 = v28;
    v26 = 0;
    v43[v26++ + 100] = v27;
    if ( v30 == -1 || v43[v27] < v33 )
    v30 = v27;
    v33 = v43[v27];
    ++v27;
    while ( v27 < g_CrateCount );
    v1 = (int)this;
    if ( (double)*(int *)(RulesClass_Instance->MagnaBeamColor[0] + 4 * *(uint32_t *)(v1 + 388)) * 0.01 > (double)Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 2147483646) * 4.656612877414201e-10 )
    *(uint32_t *)(v1 + 22096) = v30;
    return 15;
    if ( v26 )
    *(uint32_t *)(v1 + 22096) = v43[Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, v26 - 1) + 100];
    return 15;
}

// 0x004FEEE0
int  HouseClass::AIInfantryProduction(uint32_t *this)
{
    int v1; // ebp
    int v3; // eax
    int v4; // esi
    int v5; // ebx
    int v6; // edi
    uint32_t *v7; // esi
    int v8; // eax
    int v9; // ecx
    uint32_t *v10; // eax
    int j; // edi
    uint32_t *v12; // esi
    uint32_t *v13; // eax
    int v14; // ebx
    int v15; // esi
    int v16; // ebp
    int i; // [esp+8h] [ebp-4DCh]
    int v18; // [esp+8h] [ebp-4DCh]
    int v20; // [esp+10h] [ebp-4D4h]
    int v21; // [esp+14h] [ebp-4D0h]
    int v22; // [esp+18h] [ebp-4CCh]
    void **v23; // [esp+1Ch] [ebp-4C8h] BYREF
    void *Block; // [esp+20h] [ebp-4C4h]
    int v25; // [esp+24h] [ebp-4C0h]
    char v26; // [esp+29h] [ebp-4BBh]
    int v27; // [esp+2Ch] [ebp-4B8h]
    int v28; // [esp+30h] [ebp-4B4h]
    uint32_t v29[100]; // [esp+34h] [ebp-4B0h] BYREF
    uint32_t v30[200]; // [esp+1C4h] [ebp-320h] BYREF
    v1 = (int)this;
    if ( *(this + 5525) != -1 )
    return 15;
    memset(v29, 0, sizeof(v29));
    memset32(v30, 0x7FFFFFFF, 0x64u);
    v3 = 0;
    for ( i = 0; v3 < g_HouseClass_AIProductionState; i = v3 )
    v4 = *((uint32_t *)g_TeamClassPool + v3);
    if ( v4 )
    if ( (v5 = *(uint32_t *)(v4 + 80), *(uint8_t *)(*(uint32_t *)(v4 + 36) + 171)) && !*(uint8_t *)(v4 + 121)
    || !*(uint8_t *)(v4 + 119) && !*(uint8_t *)(v4 + 120) )
    if ( *(uint32_t *)(v4 + 44) == v1 )
    TechnoTypeVector::Constructor(&v23, 0, 0);
    v6 = 0;
    v23 = &DynamicVectorClass<TechnoTypeClass const *>::`vftable';
    v28 = 10;
    v27 = 0;
    HouseClass::UpdateProductionQueue((uint32_t *)v4, (int)&v23);
    if ( v27 > 0 )
    do
    v7 = (uint32_t *)*((uint32_t *)Block + v6);
    if ( (*(int (__thiscall **)(uint32_t *))(*v7 + 44))(v7) == 16 )
    v8 = v7[894];
    v9 = v30[v8];
    ++v29[v8];
    v10 = &v30[v8];
    if ( v5 < v9 )
    *v10 = v5;
    ++v6;
    while ( v6 < v27 );
    v23 = &VectorClass<TechnoTypeClass const *>::`vftable';
    if ( Block && v26 )
    __3_YAXPAX_Z(Block);
    Block = 0;
    v3 = i;
    v25 = 0;
    v1 = (int)this;
    v26 = 0;
    ++v3;
    for ( j = 0; j < g_BuildingClass_Count; ++j )
    v12 = (uint32_t *)*((uint32_t *)g_InfantryClassLimit + j);
    if ( v12 && (int)v29[*(uint32_t *)(v12[432] + 3576)] > 0 && FootClass::CanBeRecruited(v12, v1) )
    v13 = &v29[*(uint32_t *)(v12[432] + 3576)];
    --*v13;
    v14 = 0;
    v22 = -1;
    v18 = -1;
    v15 = 0;
    v21 = 0x7FFFFFFF;
    if ( g_LoadScreenProgress > 0 )
    do
    v16 = v29[v15];
    if ( v16 > 0 )
    if ( HouseClass::CanBuild(this, *((uint32_t *)Factory_ExitCellTable + v15), 0, 0) )
    v20 = (*(int (__thiscall **)(uint32_t, uint32_t *))(**((uint32_t **)Factory_ExitCellTable + v15) + 132))(
    *((uint32_t *)Factory_ExitCellTable + v15),
    this);
    if ( v20 <= (*(int (__stdcall **)(uint32_t *))(*(this + 9) + 24))(this + 9) )
    if ( v22 == -1 || v22 < v16 )
    v22 = v16;
    v14 = 0;
    v30[v14++ + 100] = v15;
    if ( v18 == -1 || v30[v15] < v21 )
    v18 = v15;
    v21 = v30[v15];
    ++v15;
    while ( v15 < g_LoadScreenProgress );
    v1 = (int)this;
    if ( (double)*(int *)(RulesClass_Instance->MagnaBeamColor[0] + 4 * *(uint32_t *)(v1 + 388)) * 0.01 <= (double)Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 2147483646) * 4.656612877414201e-10 )
    if ( v14 )
    *(uint32_t *)(v1 + 22100) = v30[Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, v14 - 1) + 100];
    return 15;
    else
    *(uint32_t *)(v1 + 22100) = v18;
    return 15;
}

// 0x004FF210
int  HouseClass::AIAircraftProduction(uint32_t *this)
{
    int v1; // ebp
    int v3; // eax
    int v4; // esi
    int v5; // ebx
    int v6; // edi
    uint32_t *v7; // esi
    int v8; // eax
    int v9; // ecx
    uint32_t *v10; // eax
    int j; // edi
    uint32_t *v12; // esi
    uint32_t *v13; // eax
    int v14; // ebx
    int v15; // esi
    int v16; // ebp
    int i; // [esp+8h] [ebp-4DCh]
    int v18; // [esp+8h] [ebp-4DCh]
    int v20; // [esp+10h] [ebp-4D4h]
    int v21; // [esp+14h] [ebp-4D0h]
    int v22; // [esp+18h] [ebp-4CCh]
    void **v23; // [esp+1Ch] [ebp-4C8h] BYREF
    void *Block; // [esp+20h] [ebp-4C4h]
    int v25; // [esp+24h] [ebp-4C0h]
    char v26; // [esp+29h] [ebp-4BBh]
    int v27; // [esp+2Ch] [ebp-4B8h]
    int v28; // [esp+30h] [ebp-4B4h]
    uint32_t v29[100]; // [esp+34h] [ebp-4B0h] BYREF
    uint32_t v30[200]; // [esp+1C4h] [ebp-320h] BYREF
    v1 = (int)this;
    if ( *(this + 5526) != -1 )
    return 15;
    memset(v29, 0, sizeof(v29));
    memset32(v30, 0x7FFFFFFF, 0x64u);
    v3 = 0;
    for ( i = 0; v3 < g_HouseClass_AIProductionState; i = v3 )
    v4 = *((uint32_t *)g_TeamClassPool + v3);
    if ( v4 )
    if ( (v5 = *(uint32_t *)(v4 + 80), *(uint8_t *)(*(uint32_t *)(v4 + 36) + 171)) && !*(uint8_t *)(v4 + 121)
    || !*(uint8_t *)(v4 + 119) && !*(uint8_t *)(v4 + 120) )
    if ( *(uint32_t *)(v4 + 44) == v1 )
    TechnoTypeVector::Constructor(&v23, 0, 0);
    v6 = 0;
    v23 = &DynamicVectorClass<TechnoTypeClass const *>::`vftable';
    v28 = 10;
    v27 = 0;
    HouseClass::UpdateProductionQueue((uint32_t *)v4, (int)&v23);
    if ( v27 > 0 )
    do
    v7 = (uint32_t *)*((uint32_t *)Block + v6);
    if ( (*(int (__thiscall **)(uint32_t *))(*v7 + 44))(v7) == 3 )
    v8 = v7[894];
    v9 = v30[v8];
    ++v29[v8];
    v10 = &v30[v8];
    if ( v5 < v9 )
    *v10 = v5;
    ++v6;
    while ( v6 < v27 );
    v23 = &VectorClass<TechnoTypeClass const *>::`vftable';
    if ( Block && v26 )
    __3_YAXPAX_Z(Block);
    Block = 0;
    v3 = i;
    v25 = 0;
    v1 = (int)this;
    v26 = 0;
    ++v3;
    for ( j = 0; j < g_AircraftClassCount; ++j )
    v12 = (uint32_t *)*((uint32_t *)dword_A8E394 + j);
    if ( v12 && (int)v29[*(uint32_t *)(v12[433] + 3576)] > 0 && FootClass::CanBeRecruited(v12, v1) )
    v13 = &v29[*(uint32_t *)(v12[433] + 3576)];
    --*v13;
    v14 = 0;
    v22 = -1;
    v18 = -1;
    v15 = 0;
    v21 = 0x7FFFFFFF;
    if ( g_TypeClass_FindCache > 0 )
    do
    v16 = v29[v15];
    if ( v16 > 0 )
    if ( HouseClass::CanBuild(this, *((uint32_t *)g_AircraftTypeCount + v15), 0, 0) )
    v20 = (*(int (__thiscall **)(uint32_t, uint32_t *))(**((uint32_t **)g_AircraftTypeCount + v15) + 132))(
    *((uint32_t *)g_AircraftTypeCount + v15),
    this);
    if ( v20 <= (*(int (__stdcall **)(uint32_t *))(*(this + 9) + 24))(this + 9) )
    if ( v22 == -1 || v22 < v16 )
    v22 = v16;
    v14 = 0;
    v30[v14++ + 100] = v15;
    if ( v18 == -1 || v30[v15] < v21 )
    v18 = v15;
    v21 = v30[v15];
    ++v15;
    while ( v15 < g_TypeClass_FindCache );
    v1 = (int)this;
    if ( (double)*(int *)(RulesClass_Instance->MagnaBeamColor[0] + 4 * *(uint32_t *)(v1 + 388)) * 0.01 <= (double)Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 2147483646) * 4.656612877414201e-10 )
    if ( v14 )
    *(uint32_t *)(v1 + 22104) = v30[Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, v14 - 1) + 100];
    return 15;
    else
    *(uint32_t *)(v1 + 22104) = v18;
    return 15;
}

// 0x00500910
int  HouseClass::GetFactoryCount(int *this, int a2, char a3)
{
    int *v3; // eax
    int result; // eax
    switch ( a2 )
    case 1:
    case 40:
    if ( a3 )
    v3 = this + 5346;
    else
    v3 = this + 5344;
    goto LABEL_8;
    case 2:
    case 3:
    v3 = this + 5342;
    goto LABEL_8;
    case 6:
    case 7:
    v3 = this + 5345;
    goto LABEL_8;
    case 15:
    case 16:
    v3 = this + 5343;
    LABEL_8:
    if ( !v3 )
    goto LABEL_10;
    result = *v3;
    break;
    default:
    LABEL_10:
    result = 0;
    break;
    return result;
}

// 0x00501540
bool  HouseClass::CanAlly(int this, int a2)
{
    int v3; // ecx
    int v5; // edi
    int v6; // ebp
    HouseClass *v7; // edx
    int v8; // ebx
    int v9; // eax
    int v10; // eax
    if ( a2 )
    if ( a2 == this )
    return 0;
    v3 = *(uint32_t *)(a2 + 48);
    if ( v3 == *(uint32_t *)(this + 48) || v3 != -1 && (*(uint32_t *)(this + 22408) & (1 << v3)) != 0 )
    return 0;
    if ( *(uint32_t *)(*(uint32_t *)(a2 + 52) + 188) == HouseTypeClass::Find(g_INI_Key_Civilian) && GameMode_Current[0] )
    return 0;
    if ( IKnowWhatImDoing )
    return 1;
    if ( *(uint8_t *)(this + 501) )
    return 0;
    v5 = 0;
    v6 = 0;
    if ( HouseClass_Count > 0 )
    v7 = HouseClass_Array;
    v8 = HouseClass_Count;
    do
    v9 = *(uint32_t *)v7->gap0;
    if ( !*(uint8_t *)(*(uint32_t *)v7->gap0 + 501) && !*(uint8_t *)(*(uint32_t *)(v9 + 52) + 422) )
    ++v5;
    if ( v9 )
    if ( v9 == this
    || (v10 = *(uint32_t *)(v9 + 48), v10 == *(uint32_t *)(this + 48))
    || v10 != -1 && ((1 << v10) & *(uint32_t *)(this + 22408)) != 0 )
    ++v6;
    v7 = (HouseClass *)((char *)v7 + 4);
    --v8;
    while ( v8 );
    return v5 != v6 + 1;
}

// 0x005025F0
uint32_t * HouseClass::RegisterGain(int this, int a2, char a3)
{
    int v5; // eax
    int v6; // ecx
    int v7; // ebx
    int v8; // ebp
    uint32_t *result; // eax
    int v10; // eax
    int v11; // eax
    int v12; // eax
    int v13; // edx
    float *v14; // ebx
    int i; // esi
    double v16; // st7
    double v17; // st7
    int v18; // eax
    int v19; // eax
    int v20; // eax
    int v21; // eax
    int v22; // eax
    int v23; // eax
    int v24; // eax
    int v25; // eax
    int v26; // eax
    int v27; // eax
    int v28; // eax
    int v29; // [esp+Ch] [ebp-14h]
    uint32_t v30[4]; // [esp+10h] [ebp-10h] BYREF
    char v31; // [esp+24h] [ebp+4h]
    if ( *(uint8_t *)((*(int (__thiscall **)(int))(*(uint32_t *)a2 + 132))(a2) + 1516) )
    --*(uint32_t *)(this + 344);
    if ( *(uint8_t *)((*(int (__thiscall **)(int))(*(uint32_t *)a2 + 132))(a2) + 1517) )
    --*(uint32_t *)(this + 348);
    SidebarClass::UpdateCameoProductionState((int)&MapClass_Instance, (uint32_t *)a2);
    if ( *(uint32_t *)((*(int (__thiscall **)(int))(*(uint32_t *)a2 + 132))(a2) + 1036) )
    if ( a2 )
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)a2 + 44))(a2) == 6 )
    if ( *(uint8_t *)((*(int (__thiscall **)(int))(*(uint32_t *)a2 + 44))(a2) == 6 ? a2 + 0x662 : 1634) )
    *(uint8_t *)((*(int (__thiscall **)(int))(*(uint32_t *)a2 + 44))(a2) == 6 ? a2 + 0x662 : 1634) = 0;
    v5 = *(uint32_t *)((*(int (__thiscall **)(int))(*(uint32_t *)a2 + 132))(a2) + 1036);
    v6 = *(uint32_t *)(this + 728) - 1;
    v29 = v5;
    *(uint32_t *)(this + 728) = v6;
    if ( !v6 )
    if ( v5 )
    v31 = 0;
    v7 = g_SidebarState - 1;
    if ( g_SidebarState - 1 >= 0 )
    do
    v8 = *((uint32_t *)g_TechnoClass_Count + v7);
    if ( *(uint32_t *)(v8 + 540) == this
    && (*(int (__thiscall **)(uint32_t))(*(uint32_t *)v8 + 132))(*((uint32_t *)g_TechnoClass_Count + v7)) == v29
    && !*(uint8_t *)(v8 + 129) )
    TechnoClass::Deactivate((uint32_t *)v8);
    v31 = 1;
    --v7;
    while ( v7 >= 0 );
    if ( v31 && WTFMode )
    if ( GameMode_Current[0] )
    if ( (void*375 *)this != HouseClass_Player )
    goto LABEL_26;
    else if ( !*(uint8_t *)(this + 492) && !*(uint8_t *)(this + 493) )
    goto LABEL_26;
    if ( !IKnowWhatImDoing )
    VoxClass::FindAndPlay(g_Str_EVA_RobotTanksOffline, -1);
    LABEL_26:
    result = (uint32_t *)((*(int (__thiscall **)(int))(*(uint32_t *)a2 + 44))(a2) - 1);
    switch ( (unsigned int)result )
    case 0u:
    if ( *(uint8_t *)((*(int (__thiscall **)(int))(*(uint32_t *)a2 + 132))(a2) + 3478)
    || *(uint32_t *)((*(int (__thiscall **)(int))(*(uint32_t *)a2 + 132))(a2) + 3416) )
    v26 = (*(int (__thiscall **)(int))(*(uint32_t *)a2 + 132))(a2);
    *(uint32_t *)(this + 90288) -= (*(int (__thiscall **)(int, int))(*(uint32_t *)v26 + 132))(v26, this);
    else
    v25 = (*(int (__thiscall **)(int))(*(uint32_t *)a2 + 132))(a2);
    *(uint32_t *)(this + 90284) -= (*(int (__thiscall **)(int, int))(*(uint32_t *)v25 + 132))(v25, this);
    result = (uint32_t *)(*(int (__thiscall **)(int))(*(uint32_t *)a2 + 132))(a2);
    if ( !*((uint8_t *)result + 3231) )
    v27 = (*(int (__thiscall **)(int))(*(uint32_t *)a2 + 132))(a2);
    v28 = (*(int (__thiscall **)(int))(*(uint32_t *)v27 + 64))(v27);
    result = (uint32_t *)CounterClass::Decrement((uint32_t *)(this + 21860), v28);
    break;
    case 1u:
    v18 = (*(int (__thiscall **)(int))(*(uint32_t *)a2 + 132))(a2);
    *(uint32_t *)(this + 90288) -= (*(int (__thiscall **)(int, int))(*(uint32_t *)v18 + 132))(v18, this);
    result = (uint32_t *)(*(int (__thiscall **)(int))(*(uint32_t *)a2 + 132))(a2);
    if ( !*((uint8_t *)result + 3231) )
    v19 = (*(int (__thiscall **)(int))(*(uint32_t *)a2 + 132))(a2);
    v20 = (*(int (__thiscall **)(int))(*(uint32_t *)v19 + 64))(v19);
    result = (uint32_t *)CounterClass::Decrement((uint32_t *)(this + 21900), v20);
    break;
    case 5u:
    result = (uint32_t *)(*(int (__thiscall **)(int))(*(uint32_t *)a2 + 132))(a2);
    if ( !*((uint8_t *)result + 3231) )
    v10 = (*(int (__thiscall **)(int))(*(uint32_t *)a2 + 132))(a2);
    v11 = (*(int (__thiscall **)(int))(*(uint32_t *)v10 + 64))(v10);
    result = (uint32_t *)CounterClass::Decrement((uint32_t *)(this + 21840), v11);
    if ( a2 )
    v12 = *(uint32_t *)(a2 + 1312);
    if ( *(uint8_t *)(v12 + 5821) && !*(uint8_t *)(v12 + 3278) )
    --*(uint32_t *)(this + 352);
    v13 = *(uint32_t *)(this + 784);
    *(uint8_t *)(this + 22392) = 1;
    *(uint32_t *)(this + 784) = v13 - *(uint32_t *)(*(uint32_t *)(a2 + 1312) + 2048);
    if ( a3 )
    v14 = (float *)(a2 + 828);
    result = (uint32_t *)FirstFloatPositive((float *)(a2 + 828));
    for ( i = (int)result; result != (uint32_t *)-1; i = (int)result )
    v16 = Float::SubtractClamped(v14, 2147483600.0, i);
    v17 = (double)(int)Math::RoundToInt(v16);
    *(uint32_t *)(this + 21736) = Math::RoundToInt(v17);
    *(uint32_t *)(this + 780) = Math::RoundToInt(v17);
    result = (uint32_t *)FirstFloatPositive(v14);
    else
    result = HouseClass::ComputeResourceDelta((float *)(this + 764), v30, a2 + 828);
    break;
    case 0xEu:
    if ( *(uint8_t *)((*(int (__thiscall **)(int))(*(uint32_t *)a2 + 132))(a2) + 3478) )
    v21 = (*(int (__thiscall **)(int))(*(uint32_t *)a2 + 132))(a2);
    *(uint32_t *)(this + 90288) -= (*(int (__thiscall **)(int, int))(*(uint32_t *)v21 + 132))(v21, this);
    else
    v22 = (*(int (__thiscall **)(int))(*(uint32_t *)a2 + 132))(a2);
    *(uint32_t *)(this + 90280) -= (*(int (__thiscall **)(int, int))(*(uint32_t *)v22 + 132))(v22, this);
    result = (uint32_t *)(*(int (__thiscall **)(int))(*(uint32_t *)a2 + 132))(a2);
    if ( !*((uint8_t *)result + 3231) )
    v23 = (*(int (__thiscall **)(int))(*(uint32_t *)a2 + 132))(a2);
    v24 = (*(int (__thiscall **)(int))(*(uint32_t *)v23 + 64))(v23);
    result = (uint32_t *)CounterClass::Decrement((uint32_t *)(this + 21880), v24);
    break;
    default:
    return result;
    return result;
}

// 0x00502A80
char  HouseClass::RegisterGain_0(int this, uint32_t *a2, int a3)
{
    int v4; // eax
    int v5; // eax
    int v6; // eax
    int v7; // eax
    int PowerDrain; // eax
    int v9; // eax
    int v10; // eax
    int v11; // eax
    int v12; // eax
    int v13; // eax
    int v14; // eax
    int v15; // eax
    int v16; // eax
    int v17; // eax
    int v18; // eax
    int v19; // eax
    uint32_t v21[4]; // [esp+8h] [ebp-10h] BYREF
    if ( *(uint8_t *)((*(int (__thiscall **)(uint32_t *))(*a2 + 132))(a2) + 1516) )
    ++*(uint32_t *)(this + 344);
    if ( *(uint8_t *)((*(int (__thiscall **)(uint32_t *))(*a2 + 132))(a2) + 1517) )
    ++*(uint32_t *)(this + 348);
    v4 = (*(int (__thiscall **)(uint32_t *))(*a2 + 44))(a2) - 1;
    switch ( v4 )
    case 0:
    if ( *(uint8_t *)((*(int (__thiscall **)(uint32_t *))(*a2 + 132))(a2) + 3478)
    || *(uint32_t *)((*(int (__thiscall **)(uint32_t *))(*a2 + 132))(a2) + 3416) )
    v17 = (*(int (__thiscall **)(uint32_t *))(*a2 + 132))(a2);
    *(uint32_t *)(this + 90288) += (*(int (__thiscall **)(int, int))(*(uint32_t *)v17 + 132))(v17, this);
    else
    v16 = (*(int (__thiscall **)(uint32_t *))(*a2 + 132))(a2);
    *(uint32_t *)(this + 90284) += (*(int (__thiscall **)(int, int))(*(uint32_t *)v16 + 132))(v16, this);
    v18 = (*(int (__thiscall **)(uint32_t *))(*a2 + 132))(a2);
    v19 = (*(int (__thiscall **)(int))(*(uint32_t *)v18 + 64))(v18);
    LOBYTE(v4) = RefCount::Increment((uint32_t *)(this + 21860), v19);
    break;
    case 1:
    v9 = (*(int (__thiscall **)(uint32_t *))(*a2 + 132))(a2);
    *(uint32_t *)(this + 90288) += (*(int (__thiscall **)(int, int))(*(uint32_t *)v9 + 132))(v9, this);
    v4 = (*(int (__thiscall **)(uint32_t *))(*a2 + 132))(a2);
    if ( !*(uint8_t *)(v4 + 3231) )
    v10 = (*(int (__thiscall **)(uint32_t *))(*a2 + 132))(a2);
    v11 = (*(int (__thiscall **)(int))(*(uint32_t *)v10 + 64))(v10);
    LOBYTE(v4) = RefCount::Increment((uint32_t *)(this + 21900), v11);
    break;
    case 5:
    v4 = (*(int (__thiscall **)(uint32_t *))(*a2 + 132))(a2);
    if ( !*(uint8_t *)(v4 + 3231) )
    v5 = (*(int (__thiscall **)(uint32_t *))(*a2 + 132))(a2);
    v6 = (*(int (__thiscall **)(int))(*(uint32_t *)v5 + 64))(v5);
    LOBYTE(v4) = RefCount::Increment((uint32_t *)(this + 21840), v6);
    if ( a2 )
    v4 = (*(int (__thiscall **)(uint32_t *))(*a2 + 44))(a2);
    if ( v4 == 6 )
    v7 = a2[328];
    if ( *(uint8_t *)(v7 + 5821) && !*(uint8_t *)(v7 + 3278) )
    ++*(uint32_t *)(this + 352);
    PowerDrain = BuildingClass::GetPowerDrain(a2);
    HouseClass::NotifyPowerStateChange((uint32_t *)this, PowerDrain);
    *(uint32_t *)(this + 784) += *(uint32_t *)(a2[328] + 2048);
    LOBYTE(v4) = (unsigned __int8)HouseClass::AccumulateFloat4((float *)(this + 764), v21, (int)(a2 + 207));
    break;
    case 14:
    if ( *(uint8_t *)((*(int (__thiscall **)(uint32_t *))(*a2 + 132))(a2) + 3478) )
    v12 = (*(int (__thiscall **)(uint32_t *))(*a2 + 132))(a2);
    *(uint32_t *)(this + 90288) += (*(int (__thiscall **)(int, int))(*(uint32_t *)v12 + 132))(v12, this);
    else
    v13 = (*(int (__thiscall **)(uint32_t *))(*a2 + 132))(a2);
    *(uint32_t *)(this + 90280) += (*(int (__thiscall **)(int, int))(*(uint32_t *)v13 + 132))(v13, this);
    LOBYTE(v4) = *((uint8_t *)a2 + 1753);
    if ( !(uint8_t)v4 )
    v4 = (*(int (__thiscall **)(uint32_t *))(*a2 + 132))(a2);
    if ( !*(uint8_t *)(v4 + 3231) )
    v14 = (*(int (__thiscall **)(uint32_t *))(*a2 + 132))(a2);
    v15 = (*(int (__thiscall **)(int))(*(uint32_t *)v14 + 64))(v14);
    LOBYTE(v4) = RefCount::Increment((uint32_t *)(this + 21880), v15);
    break;
    default:
    return v4;
    return v4;
}

// 0x00502D60
int  HouseClass::UpdatePowerTimers(int this, int *a2)
{
    int v3; // eax
    int v4; // ecx
    int v5; // edx
    int v6; // eax
    int v7; // ecx
    int v8; // edx
    int v9; // eax
    int v10; // edx
    int v11; // eax
    int v12; // edx
    int v13; // eax
    int v14; // ecx
    AbstractClass::ProcessPower((void*378 *)this);
    Power::TimerProcess(*(uint32_t *)(this + 388));
    Power::TimerProcess(*(uint32_t *)(*(uint32_t *)(this + 52) + 184));
    Checksummer::Add_double(*(uint32_t *)(this + 392), *(uint32_t *)(this + 396));
    Checksummer::Add_double(*(uint32_t *)(this + 400), *(uint32_t *)(this + 404));
    Checksummer::Add_double(*(uint32_t *)(this + 408), *(uint32_t *)(this + 412));
    Checksummer::Add_double(*(uint32_t *)(this + 416), *(uint32_t *)(this + 420));
    Checksummer::Add_double(*(uint32_t *)(this + 424), *(uint32_t *)(this + 428));
    Checksummer::Add_double(*(uint32_t *)(this + 432), *(uint32_t *)(this + 436));
    Checksummer::Add_double(*(uint32_t *)(this + 440), *(uint32_t *)(this + 444));
    Checksummer::Add_double(*(uint32_t *)(this + 448), *(uint32_t *)(this + 452));
    v3 = Checksummer::Add_double(*(uint32_t *)(this + 456), *(uint32_t *)(this + 460));
    LOBYTE(v3) = *(uint8_t *)(this + 492);
    Power::FlagProcess(a2, v3);
    LOBYTE(v4) = *(uint8_t *)(this + 494);
    Power::FlagProcess(a2, v4);
    LOBYTE(v5) = *(uint8_t *)(this + 495);
    v6 = Power::FlagProcess(a2, v5);
    LOBYTE(v6) = *(uint8_t *)(this + 498);
    Power::FlagProcess(a2, v6);
    LOBYTE(v7) = *(uint8_t *)(this + 501);
    Power::FlagProcess(a2, v7);
    Power::TimerProcess(*(uint32_t *)(this + 588));
    Power::TimerProcess(*(uint32_t *)(this + 592));
    Power::TimerProcess(*(uint32_t *)(this + 636));
    v8 = *(uint32_t *)(this + 640);
    v9 = *(uint32_t *)(this + 648);
    if ( v8 != -1 )
    if ( (int)CurrentFrame - v8 >= v9 )
    v9 = 0;
    else
    v9 -= (int)CurrentFrame - v8;
    Power::TimerProcess(v9);
    v10 = *(uint32_t *)(this + 652);
    v11 = *(uint32_t *)(this + 660);
    if ( v10 != -1 )
    if ( (int)CurrentFrame - v10 >= v11 )
    v11 = 0;
    else
    v11 -= (int)CurrentFrame - v10;
    Power::TimerProcess(v11);
    v12 = *(uint32_t *)(this + 664);
    v13 = *(uint32_t *)(this + 672);
    if ( v12 != -1 )
    if ( (int)CurrentFrame - v12 >= v13 )
    v13 = 0;
    else
    v13 -= (int)CurrentFrame - v12;
    Power::TimerProcess(v13);
    Power::TimerProcess(*(uint32_t *)(this + 744));
    Power::TimerProcess(*(uint32_t *)(this + 752));
    Power::TimerProcess(*(uint32_t *)(this + 756));
    Power::TimerProcess(*(uint32_t *)(this + 760));
    Power::TimerProcess(*(uint32_t *)(this + 780));
    Power::TimerProcess(*(uint32_t *)(this + 784));
    Power::TimerProcess(*(uint32_t *)(this + 21368));
    Power::TimerProcess(*(uint32_t *)(this + 21372));
    Power::TimerProcess(*(uint32_t *)(this + 21376));
    Power::TimerProcess(*(uint32_t *)(this + 21384));
    Power::TimerProcess(*(uint32_t *)(this + 21380));
    Power::TimerProcess(*(uint32_t *)(this + 21388));
    Power::TimerProcess(*(uint32_t *)(this + 21412));
    Power::TimerProcess(*(uint32_t *)(this + 21416));
    LOBYTE(v14) = *(uint8_t *)(this + 577);
    Power::FlagProcess(a2, v14);
    Power::TimerProcess(*(uint32_t *)(this + 21644));
    Power::TimerProcess(*(uint32_t *)(this + 22016));
    return (*(int (__thiscall **)(int, int *))(*(uint32_t *)(this + 22272) + 8))(this + 22272, a2);
}

// 0x00504740
int  HouseClass::EnsurePlanningPathExists(uint32_t *this, unsigned int a2)
{
    int result; // eax
    void *v4; // eax
    result = *(this + a2 + 132);
    if ( !result )
    v4 = __2_YAPAXI_Z(0x40u);
    if ( v4 )
    result = WaypointPathClass::Construct((int)v4, a2);
    *(this + a2 + 132) = result;
    else
    *(this + a2 + 132) = 0;
    return 0;
    return result;
}

// 0x005051E0
uint32_t * HouseClass::FirstBuildableFromArray(uint32_t *this, int a2)
{
    char v3; // cl
    int v4; // esi
    int v5; // ebx
    uint32_t *v6; // eax
    uint32_t *result; // eax
    int v8; // edx
    int v9; // edx
    int v10; // ecx
    int v11; // edi
    int v12; // ecx
    int v13; // esi
    uint32_t *v14; // edx
    int v16; // [esp+10h] [ebp-8h]
    int v17; // [esp+14h] [ebp-4h]
    uint32_t *i; // [esp+1Ch] [ebp+4h]
    v3 = SuperWeaponTypeClass::FindByName((void *)(*(this + 13) + 152));
    v16 = 0;
    v4 = *(uint32_t *)(a2 + 16);
    v5 = 1 << v3;
    v17 = v4;
    if ( v4 <= 0 )
    return 0;
    v6 = *(uint32_t **)(a2 + 4);
    for ( i = v6; ; ++i )
    result = (uint32_t *)*v6;
    if ( (v5 & result[435]) != 0 )
    v8 = result[872];
    if ( v8 == -1 || ((1 << *(uint32_t *)(*(this + 13) + 184)) & v8) != 0 )
    v9 = result[873];
    if ( v9 == -1 || ((1 << *(uint32_t *)(*(this + 13) + 184)) & v9) == 0 )
    v10 = result[436];
    if ( v10 == -1 || v10 == *(uint32_t *)(*(this + 13) + 188) )
    break;
    LABEL_18:
    v6 = i + 1;
    if ( ++v16 >= v4 )
    return 0;
    if ( SWAllowed )
    return result;
    v11 = result[1468];
    if ( v11 == -1 )
    return result;
    v12 = 0;
    v13 = RulesClass_Instance->OnFire[3];
    if ( v13 <= 0 )
    LABEL_16:
    if ( !*(uint8_t *)(*(uint32_t *)(*(uint32_t *)(*(this + 150) + 4 * v11) + 40) + 231) )
    return result;
    v4 = v17;
    goto LABEL_18;
    v14 = (uint32_t *)RulesClass_Instance->OnFire[0];
    while ( (uint32_t *)*v14 != result )
    ++v12;
    ++v14;
    if ( v12 >= v13 )
    goto LABEL_16;
    return result;
}

// 0x00508C30
char  HouseClass::UpdatePower(int this)
{
    int v2; // ecx
    int v3; // eax
    int v4; // ebp
    int v5; // edi
    int v6; // edx
    int v7; // eax
    int v8; // ecx
    int v9; // eax
    int v10; // eax
    char v12; // [esp+Bh] [ebp-Dh]
    int v13; // [esp+10h] [ebp-8h]
    bool v14; // [esp+14h] [ebp-4h]
    v2 = *(uint32_t *)(this + 21412);
    v3 = *(uint32_t *)(this + 21416);
    v14 = v2 < v3 && v3 && (!v2 || (double)v2 / (double)*(int *)(this + 21416) < 1.0);
    *(uint8_t *)(this + 22392) = 0;
    *(uint32_t *)(this + 21412) = 0;
    *(uint32_t *)(this + 21416) = 0;
    v4 = 0;
    v12 = 0;
    v13 = *(uint32_t *)(this + 120);
    if ( v13 > 0 )
    do
    v5 = *(uint32_t *)(*(uint32_t *)(this + 108) + 4 * v4);
    if ( v5 && !*(uint8_t *)(v5 + 129) && *(uint8_t *)(v5 + 116) )
    if ( GameMode_Current[0] )
    if ( (void*375 *)this != HouseClass_Player )
    goto LABEL_18;
    else if ( !*(uint8_t *)(this + 492) && !*(uint8_t *)(this + 493) )
    LABEL_18:
    *(uint32_t *)(this + 21412) += BuildingClass::GetPowerOutput((int *)v5);
    *(uint32_t *)(this + 21416) += BuildingClass::GetPowerDrain((uint8_t *)v5);
    if ( ObjectClass::HasLocation((uint32_t *)v5) && BuildingClass::GetPowerOutput((int *)v5) > 0 )
    v12 = 1;
    goto LABEL_21;
    if ( *(uint8_t *)(v5 + 1051) || GameMode_Current[0] )
    goto LABEL_18;
    LABEL_21:
    ++v4;
    while ( v4 < v13 );
    *(uint8_t *)(this + 22395) = v12;
    v6 = *(uint32_t *)(this + 676);
    v7 = *(uint32_t *)(this + 684);
    if ( v6 != -1 )
    if ( (int)CurrentFrame - v6 >= v7 )
    goto LABEL_26;
    v7 -= (int)CurrentFrame - v6;
    if ( v7 )
    LABEL_27:
    *(uint32_t *)(this + 21412) = 0;
    goto LABEL_28;
    LABEL_26:
    if ( v12 )
    goto LABEL_27;
    LABEL_28:
    nullsub_5(this);
    HouseClass::UpdateTeamProductionSpeed((void *)this);
    v8 = *(uint32_t *)(this + 21412);
    v9 = *(uint32_t *)(this + 21416);
    v10 = v8 < v9 && v9 && (!v8 || (double)*(int *)(this + 21412) / (double)*(int *)(this + 21416) < 1.0);
    if ( v14 != v10 )
    LOBYTE(v10) = SuperWeapon::UpdateSuperWeaponsOwnedHouseClass(this);
    *(uint8_t *)(this + 22393) = 1;
    return v10;
}

// 0x00509130
void  HouseClass::AcquiredThreatNode(uint8_t *this)
{
    *(this + 507) = 1;
}

// 0x005098F0
char  HouseClass::UpdateAITryFireSW(int this)
{
    int v2; // eax
    int i; // edi
    int v4; // eax
    bool v5; // zf
    int v6; // eax
    int *v7; // eax
    int v8; // eax
    int v9; // eax
    int v11; // [esp+8h] [ebp-10h] BYREF
    int v12; // [esp+Ch] [ebp-Ch] BYREF
    int v13; // [esp+10h] [ebp-8h] BYREF
    int v14; // [esp+14h] [ebp-4h] BYREF
    LOBYTE(v2) = *(uint8_t *)(this + 492);
    if ( !GameMode_Current[0] )
    LOBYTE(v2) = (uint8_t)v2 || *(uint8_t *)(this + 493);
    if ( !(uint8_t)v2 )
    v2 = *(uint32_t *)(this + 612);
    for ( i = 0; i < v2; ++i )
    v4 = *(uint32_t *)(*(uint32_t *)(this + 600) + 4 * i);
    if ( v4 && *(uint8_t *)(v4 + 111) )
    switch ( *(uint32_t *)(*(uint32_t *)(v4 + 40) + 180) )
    case 0:
    v12 = *(uint32_t *)(*(uint32_t *)(this + 600) + 4 * i);
    if ( *(uint32_t *)(this + 22016) != -1 )
    v5 = *(_WORD *)(this + 21744) == (unsigned __int16)g_ControlGroupState;
    v11 = g_ControlGroupState;
    if ( v5 && *(_WORD *)(this + 21746) == HIWORD(g_ControlGroupState) )
    v7 = *(uint32_t *)(this + 21740) == 1
    ? HouseClass::FindSWBuilding((uint32_t *)this, &v13)
    : HouseClass::FindSWTarget((void *)this, &v14, *(uint32_t *)(this + 21740));
    v6 = *v7;
    else
    v6 = *(uint32_t *)(this + 21744);
    v11 = v6;
    if ( v6 != g_ControlGroupState )
    goto LABEL_32;
    break;
    case 2:
    HouseClass::Fire_LightningStorm(this, *(uint32_t *)(*(uint32_t *)(this + 600) + 4 * i));
    break;
    case 5:
    case 6:
    case 8:
    case 0xB:
    HouseClass::Fire_ParaDrop((uint32_t *)this, *(uint32_t *)(*(uint32_t *)(this + 600) + 4 * i));
    break;
    case 7:
    HouseClass::Fire_PsyDom(this, *(uint32_t *)(*(uint32_t *)(this + 600) + 4 * i));
    break;
    case 9:
    HouseClass::Fire_GenMutator(this, *(uint32_t *)(*(uint32_t *)(this + 600) + 4 * i));
    break;
    case 0xA:
    v5 = *(_WORD *)(this + 21752) == (unsigned __int16)g_ControlGroupState;
    v12 = *(uint32_t *)(*(uint32_t *)(this + 600) + 4 * i);
    v11 = g_ControlGroupState;
    if ( !v5 || *(_WORD *)(this + 21754) != HIWORD(g_ControlGroupState) )
    v8 = *(uint32_t *)(this + 21752);
    goto LABEL_31;
    if ( *(uint32_t *)(this + 21748) != g_ControlGroupState
    && RulesClass_Instance->AIExtraRefineries[2] + *(uint32_t *)(this + 21756) > (int)CurrentFrame )
    v8 = *(uint32_t *)(this + 21748);
    LABEL_31:
    v11 = v8;
    if ( v8 != g_ControlGroupState )
    LABEL_32:
    v9 = (*(int (__thiscall **)(int, int *))(*(uint32_t *)(this + 596) + 16))(this + 596, &v12);
    SuperWeapon::FireSuperWeaponHouseClass((void*375 *)this, v9, (int)&v11);
    break;
    break;
    default:
    break;
    v2 = *(uint32_t *)(this + 612);
    return v2;
}

// 0x00509CD0
char  HouseClass::Fire_ParaDrop(uint32_t *this, char a2)
{
    uint32_t *v2; // esi
    int v3; // eax
    __int16 v4; // dx
    bool v5; // zf
    int v6; // eax
    int v7; // edx
    char result; // al
    int v9; // eax
    int v10; // [esp+4h] [ebp-Ch] BYREF
    int v11; // [esp+8h] [ebp-8h] BYREF
    int v12; // [esp+Ch] [ebp-4h] BYREF
    v2 = this;
    v3 = *(this + 5504);
    if ( v3 != -1 )
    this = *(uint32_t **)&HouseClass_Array->gap0[4 * v3];
    v4 = g_ControlGroupState;
    v5 = *((_WORD *)v2 + 10872) == (unsigned __int16)g_ControlGroupState;
    v10 = g_ControlGroupState;
    if ( v5 && *((_WORD *)v2 + 10873) == HIWORD(g_ControlGroupState) )
    if ( v2[5435] == 1 )
    if ( *(this + 5413) == g_ControlGroupState )
    v6 = *(this + 5412);
    else
    v6 = *(this + 5413);
    v10 = v6;
    v11 = 0;
    v7 = *LayerClass::Pathfinding_Find(
    &MapClass_Instance,
    0,
    &v12,
    (__int16 *)&v10,
    0,
    -1,
    0,
    0,
    5,
    5,
    0,
    0,
    0,
    1,
    (__int16 *)&v11,
    0,
    0);
    LOWORD(v10) = v7 + 2;
    HIWORD(v10) = HIWORD(v7) + 2;
    else
    v10 = *HouseClass::FindSWTarget(v2, &v11, v2[5435]);
    v4 = g_ControlGroupState;
    else
    v10 = v2[5436];
    if ( (_WORD)v10 != v4 || (result = BYTE2(g_ControlGroupState), HIWORD(v10) != HIWORD(g_ControlGroupState)) )
    v9 = (*(int (__thiscall **)(uint32_t *, char *))(v2[149] + 16))(v2 + 149, &a2);
    return SuperWeapon::FireSuperWeaponHouseClass((void*375 *)v2, v9, (int)&v10);
    return result;
}

// 0x00509E00
char  HouseClass::Fire_LightningStorm(int this, char a2)
{
    char result; // al
    bool v4; // zf
    int v5; // eax
    int *SWBuilding; // eax
    int v7; // eax
    int v8; // [esp+4h] [ebp-8h] BYREF
    int v9; // [esp+8h] [ebp-4h] BYREF
    result = LightningStorm::IsActive();
    if ( !result && *(uint32_t *)(this + 22016) != -1 )
    v4 = *(_WORD *)(this + 21744) == (unsigned __int16)g_ControlGroupState;
    v8 = g_ControlGroupState;
    if ( v4 && *(_WORD *)(this + 21746) == HIWORD(g_ControlGroupState) )
    if ( *(uint32_t *)(this + 21740) == 1 )
    SWBuilding = HouseClass::FindSWBuilding((uint32_t *)this, &v9);
    else
    SWBuilding = HouseClass::FindSWTarget((void *)this, &v9, *(uint32_t *)(this + 21740));
    v5 = *SWBuilding;
    else
    v5 = *(uint32_t *)(this + 21744);
    v8 = v5;
    if ( (_WORD)v5 != (_WORD)g_ControlGroupState
    || (result = BYTE2(g_ControlGroupState), HIWORD(v8) != HIWORD(g_ControlGroupState)) )
    v7 = (*(int (__thiscall **)(int, char *))(*(uint32_t *)(this + 596) + 16))(this + 596, &a2);
    return SuperWeapon::FireSuperWeaponHouseClass((void*375 *)this, v7, (int)&v8);
    return result;
}

// 0x00509F60
char  HouseClass::Fire_GenMutator(int this, char a2)
{
    __int16 v2; // ax
    int v4; // edi
    uint8_t *v5; // ecx
    int v6; // ebp
    int *v7; // edi
    __int16 v8; // dx
    uint32_t *v9; // eax
    uint32_t *ObjectByType; // esi
    int v11; // eax
    int v12; // ecx
    bool v13; // al
    int v14; // eax
    int v15; // eax
    int v17; // [esp+8h] [ebp-20h] BYREF
    int v18; // [esp+Ch] [ebp-1Ch]
    int v19; // [esp+10h] [ebp-18h]
    int v20; // [esp+14h] [ebp-14h]
    int v21; // [esp+18h] [ebp-10h]
    int v22; // [esp+1Ch] [ebp-Ch]
    int v23; // [esp+20h] [ebp-8h]
    int v24; // [esp+24h] [ebp-4h] BYREF
    LOBYTE(v2) = g_ControlGroupState;
    v17 = g_ControlGroupState;
    v19 = 0;
    if ( *(_WORD *)(this + 21744) == (_WORD)g_ControlGroupState )
    v2 = *(_WORD *)(this + 21746);
    if ( v2 == HIWORD(g_ControlGroupState) )
    v4 = g_BuildingClass_Count - 1;
    v23 = g_BuildingClass_Count - 1;
    if ( g_BuildingClass_Count - 1 >= 0 )
    do
    v18 = 0;
    v5 = (uint8_t *)*((uint32_t *)g_InfantryClassLimit + v4);
    if ( !v5[129] )
    LOBYTE(v21) = v5[140] != 0;
    v6 = (*(int (__thiscall **)(uint8_t *))(*(uint32_t *)v5 + 444))(v5);
    v22 = 0;
    v7 = dword_ABD490;
    do
    v8 = *(_WORD *)(v6 + 38) + *((_WORD *)v7 + 1);
    LOWORD(v20) = *(_WORD *)v7 + *(_WORD *)(v6 + 36);
    HIWORD(v20) = v8;
    v24 = v20;
    v9 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v24);
    ObjectByType = WTFMode::FindObjectByType(v9, v21);
    if ( ObjectByType )
    do
    v11 = (*(int (__thiscall **)(uint32_t *))(*ObjectByType + 60))(ObjectByType);
    if ( !v11
    || v11 != this
    && ((v12 = *(uint32_t *)(v11 + 48), v12 != *(uint32_t *)(this + 48))
    ? (v12 == -1
    ? (v13 = 0)
    : (v13 = (*(uint32_t *)(this + 22408) & (1 << v12)) != 0))
    : (v13 = 1),
    !v13) )
    if ( !(*(unsigned __int8 (__thiscall **)(uint32_t *))(*ObjectByType + 84))(ObjectByType) )
    ++v18;
    ObjectByType = (uint32_t *)ObjectByType[12];
    while ( ObjectByType && (*(int (__thiscall **)(uint32_t *))(*ObjectByType + 44))(ObjectByType) == 15 );
    ++v7;
    ++v22;
    while ( v22 <= 9 );
    v4 = v23;
    if ( v18 > v19 )
    v14 = *(uint32_t *)(v6 + 36);
    v19 = v18;
    v17 = v14;
    v23 = --v4;
    while ( v4 >= 0 );
    LOBYTE(v2) = v19;
    if ( v19 )
    if ( v17 != g_ControlGroupState )
    LOBYTE(v2) = LayerClass::IsWithinUsableArea(&MapClass_Instance, (__int16 *)&v17, 1);
    if ( (uint8_t)v2 )
    v15 = (*(int (__thiscall **)(int, char *))(*(uint32_t *)(this + 596) + 16))(this + 596, &a2);
    LOBYTE(v2) = SuperWeapon::FireSuperWeaponHouseClass((void*375 *)this, v15, (int)&v17);
    return v2;
}

// 0x0050A150
char  HouseClass::Fire_PsyDom(int this, char a2)
{
    __int16 v3; // ax
    bool v4; // zf
    int v5; // ebp
    uint8_t *v6; // ecx
    int v7; // ebx
    int *v8; // ebp
    __int16 v9; // dx
    uint8_t *i; // eax
    uint32_t *v11; // esi
    int v12; // eax
    int v13; // ecx
    int v15; // eax
    int v16; // eax
    int v18; // [esp+8h] [ebp-1Ch] BYREF
    int v19; // [esp+Ch] [ebp-18h]
    int v20; // [esp+10h] [ebp-14h]
    int v21; // [esp+14h] [ebp-10h]
    int v22; // [esp+18h] [ebp-Ch]
    int v23; // [esp+1Ch] [ebp-8h]
    int v24; // [esp+20h] [ebp-4h] BYREF
    LOBYTE(v3) = PsyDom::IsActive();
    if ( !(uint8_t)v3 && *(uint32_t *)(this + 22016) != -1 )
    LOBYTE(v3) = g_ControlGroupState;
    v20 = 0;
    v4 = *(_WORD *)(this + 21744) == (unsigned __int16)g_ControlGroupState;
    v18 = g_ControlGroupState;
    if ( v4 )
    v3 = *(_WORD *)(this + 21746);
    if ( v3 == HIWORD(g_ControlGroupState) )
    v5 = dword_8B3DD0 - 1;
    v23 = dword_8B3DD0 - 1;
    if ( dword_8B3DD0 - 1 >= 0 )
    do
    v19 = 0;
    v6 = (uint8_t *)*((uint32_t *)dword_8B3DC4 + v5);
    if ( !v6[129] )
    v7 = (*(int (__thiscall **)(uint8_t *))(*(uint32_t *)v6 + 444))(v6);
    v22 = 0;
    v8 = dword_ABD490;
    do
    v9 = *(_WORD *)(v7 + 38) + *((_WORD *)v8 + 1);
    LOWORD(v21) = *(_WORD *)(v7 + 36) + *(_WORD *)v8;
    HIWORD(v21) = v9;
    v24 = v21;
    for ( i = (uint8_t *)*((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v24) + 57);
    i && (i[20] & 4) != 0;
    i = (uint8_t *)v11[12] )
    v11 = i;
    v12 = (*(int (__thiscall **)(uint8_t *))(*(uint32_t *)i + 60))(i);
    if ( v12 )
    if ( v12 == this )
    continue;
    v13 = *(uint32_t *)(v12 + 48);
    if ( v13 == *(uint32_t *)(this + 48) || v13 != -1 && ((1 << v13) & *(uint32_t *)(this + 22408)) != 0 )
    continue;
    if ( !(*(unsigned __int8 (__thiscall **)(uint32_t *))(*v11 + 84))(v11) && TechnoClass::CanBePermaMC(v11) )
    ++v19;
    ++v8;
    ++v22;
    while ( v22 <= 37 );
    v5 = v23;
    if ( v19 > v20 )
    v15 = *(uint32_t *)(v7 + 36);
    v20 = v19;
    v18 = v15;
    v23 = --v5;
    while ( v5 >= 0 );
    LOBYTE(v3) = v20;
    if ( v20 )
    if ( v18 != g_ControlGroupState )
    LOBYTE(v3) = LayerClass::IsWithinUsableArea(&MapClass_Instance, (__int16 *)&v18, 1);
    if ( (uint8_t)v3 )
    v16 = (*(int (__thiscall **)(int, char *))(*(uint32_t *)(this + 596) + 16))(this + 596, &a2);
    LOBYTE(v3) = SuperWeapon::FireSuperWeaponHouseClass((void*375 *)this, v16, (int)&v18);
    return v3;
}

// 0x0050B370
char  HouseClass::ShouldDisableCameo(uint32_t *this, int a2)
{
    uint32_t *v3; // ebp
    int v4; // edx
    int v5; // ebx
    int *v7; // edi
    int v8; // edi
    int v9; // eax
    int v10; // eax
    int v11; // eax
    int v12; // eax
    int i; // ebx
    int v14; // edi
    int v15; // esi
    bool v16; // cc
    int v17; // edi
    int v18; // eax
    RulesClass *v19; // eax
    int v20; // esi
    int v21; // ebx
    uint32_t *v22; // ebp
    int v23; // ecx
    int v24; // eax
    int v26; // edi
    int v27; // eax
    int v28; // [esp-4h] [ebp-1Ch]
    int v29; // [esp-4h] [ebp-1Ch]
    int v30; // [esp-4h] [ebp-1Ch]
    int v31; // [esp+10h] [ebp-8h]
    char v33; // [esp+1Ch] [ebp+4h]
    int v34; // [esp+1Ch] [ebp+4h]
    int v35; // [esp+1Ch] [ebp+4h]
    v3 = this;
    if ( a2 )
    v4 = *(uint32_t *)a2;
    v5 = 0;
    v31 = 0;
    v33 = *(uint8_t *)(a2 + 3278);
    switch ( (*(int (__thiscall **)(int))(v4 + 44))(a2) )
    case 1:
    case 40:
    if ( v33 )
    v7 = (int *)v3[5358];
    else
    v7 = (int *)v3[5357];
    goto LABEL_4;
    case 2:
    case 3:
    v7 = (int *)v3[5355];
    goto LABEL_4;
    case 6:
    case 7:
    v7 = (int *)v3[5359];
    goto LABEL_4;
    case 15:
    case 16:
    v7 = (int *)v3[5356];
    LABEL_4:
    if ( v7 )
    v31 = FactoryClass::CountType(v7, a2);
    v5 = v31;
    break;
    default:
    v7 = 0;
    break;
    switch ( (*(int (__thiscall **)(int))(*(uint32_t *)a2 + 44))(a2) )
    case 3:
    if ( *(uint8_t *)(a2 + 3597) )
    v19 = RulesClass_Instance;
    v20 = 0;
    v21 = 0;
    v35 = 0;
    if ( RulesClass_Instance->OverloadCount[3] > 0 )
    v22 = v3 + 5475;
    do
    v23 = *(uint32_t *)(v19->OverloadCount[0] + 4 * v20);
    v24 = (*(int (__thiscall **)(int))(*(uint32_t *)v23 + 64))(v23);
    v21 += DynamicVector::GetOrGrow(v22, v24);
    if ( v7 )
    v35 += FactoryClass::CountType(v7, *(uint32_t *)(RulesClass_Instance->OverloadCount[0] + 4 * v20));
    v19 = RulesClass_Instance;
    ++v20;
    while ( v20 < RulesClass_Instance->OverloadCount[3] );
    v3 = this;
    return v21 + v35 >= v3[181];
    else
    v26 = *(uint32_t *)(a2 + 952);
    if ( v26 > 0 )
    v30 = (*(int (__thiscall **)(int))(*(uint32_t *)a2 + 64))(a2);
    v10 = DynamicVector::GetOrGrow(v3 + 5455, v30);
    goto LABEL_46;
    v27 = (*(int (__thiscall **)(int))(*(uint32_t *)a2 + 64))(a2);
    return v5 + DynamicVector::GetOrGrow(v3 + 5495, v27) >= (int)abs32(v26);
    case 7:
    v17 = *(uint32_t *)(a2 + 952);
    if ( v17 > 0 )
    v29 = (*(int (__thiscall **)(int))(*(uint32_t *)a2 + 64))(a2);
    v10 = DynamicVector::GetOrGrow(v3 + 5440, v29);
    goto LABEL_46;
    v18 = (*(int (__thiscall **)(int))(*(uint32_t *)a2 + 64))(a2);
    return v5 + DynamicVector::GetOrGrow(v3 + 5480, v18) >= (int)abs32(v17);
    case 16:
    if ( *(int *)(a2 + 952) <= 0 )
    v11 = (*(int (__thiscall **)(int))(*(uint32_t *)a2 + 64))(a2);
    if ( v5 + DynamicVector::GetOrGrow(v3 + 5490, v11) >= (int)abs32(*(uint32_t *)(a2 + 952)) )
    return 1;
    v12 = (*(int (__thiscall **)(int))(*(uint32_t *)a2 + 64))(a2);
    v34 = DynamicVector::GetOrGrow(v3 + 5450, v12);
    if ( *(uint8_t *)(a2 + 3782) )
    for ( i = 0; i < g_HouseClass_BuildState; ++i )
    v14 = *((uint32_t *)g_UnitClassPool + i);
    if ( *(uint32_t **)(v14 + 540) == v3
    && *(uint32_t *)(v14 + 824) == (*(int (__thiscall **)(int))(*(uint32_t *)a2 + 64))(a2) )
    ++v34;
    v5 = v31;
    v15 = *(uint32_t *)(a2 + 952);
    if ( v15 <= 0 )
    return 0;
    v16 = v5 + v34 < v15;
    goto LABEL_47;
    case 40:
    v8 = *(uint32_t *)(a2 + 952);
    if ( v8 <= 0 )
    v9 = (*(int (__thiscall **)(int))(*(uint32_t *)a2 + 64))(a2);
    return v5 + DynamicVector::GetOrGrow(v3 + 5485, v9) >= (int)abs32(v8);
    v28 = (*(int (__thiscall **)(int))(*(uint32_t *)a2 + 64))(a2);
    v10 = DynamicVector::GetOrGrow(v3 + 5445, v28);
    LABEL_46:
    v16 = v5 + v10 < *(uint32_t *)(a2 + 952);
    LABEL_47:
    if ( v16 )
    return 0;
    break;
    default:
    return 0;
    return 1;
}

// 0x0050BC90
int  HouseClass::CreatePowerOutage(int this, int a2)
{
    wchar_t *v2; // eax
    int v4; // [esp+8h] [ebp-8h]
    v2 = CurrentFrame;
    *(uint8_t *)(this + 22392) = 1;
    *(uint32_t *)(this + 676) = v2;
    *(uint32_t *)(this + 680) = v4;
    *(uint32_t *)(this + 684) = a2;
    return v4;
}

// 0x0050BCD0
int  HouseClass::CreateRadarOutage(int this, int a2)
{
    wchar_t *v2; // eax
    int v4; // [esp+8h] [ebp-8h]
    v2 = CurrentFrame;
    *(uint8_t *)(this + 22393) = 1;
    *(uint32_t *)(this + 688) = v2;
    *(uint32_t *)(this + 692) = v4;
    *(uint32_t *)(this + 696) = a2;
    return v4;
}

// 0x0050BD10
char  HouseClass::ReshroudMap(uint8_t *this)
{
    char result; // al
    result = *(this + 22394);
    if ( !result )
    return ShroudClass::Reset(&MapClass_Instance, (int)this);
    return result;
}

// 0x0050BF60
int  HouseClass::CalculateCostMultipliers(float *this)
{
    int result; // eax
    *(this + 5348) = 1.0;
    *(this + 5349) = 1.0;
    *(this + 5350) = 1.0;
    *(this + 5351) = 1.0;
    *(this + 5352) = 1.0;
    for ( result = 0;
    result < *((uint32_t *)this + 84);
    *(this + 5352) = *(float *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)this + 81) + 4 * result - 4) + 1312) + 5856)
    * *(this + 5352) )
    ++result;
    *(this + 5348) = *(float *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)this + 81) + 4 * result - 4) + 1312) + 5840)
    * *(this + 5348);
    *(this + 5349) = *(float *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)this + 81) + 4 * result - 4) + 1312) + 5844)
    * *(this + 5349);
    *(this + 5350) = *(float *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)this + 81) + 4 * result - 4) + 1312) + 5848)
    * *(this + 5350);
    *(this + 5351) = *(float *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)this + 81) + 4 * result - 4) + 1312) + 5852)
    * *(this + 5351);
    return result;
}

// 0x0050C8C0
int  HouseClass::NotifyImpactWater(void *this)
{
    int v1; // edi
    int i; // esi
    uint32_t *v4; // ecx
    v1 = g_SidebarState;
    for ( i = 0; i < v1; ++i )
    v4 = (uint32_t *)*((uint32_t *)g_TechnoClass_Count + i);
    if ( v4 && (void *)v4[135] == this )
    (*(void (__thiscall **)(uint32_t *, uint32_t))(*v4 + 904))(v4, 0);
    return PlayVocClass(RulesClass_Instance->ImpactWaterSound, 0x2000, 1.0, 0);
}

// 0x0050D9E0
int  HouseClass::GetInfSelfHealStep(uint32_t *this)
{
    return *(this + 89) * RulesClass_Instance->SelfHealInfantryAmount;
}

// 0x0050D9F0
int  HouseClass::GetUnitSelfHealStep(uint32_t *this)
{
    return *(this + 90) * RulesClass_Instance->SelfHealUnitAmount;
}

// 0x0050E0E0
void  HouseClass::LostPoweredCenter(int this, int a2)
{
    int v3; // eax
    char v4; // bl
    int v5; // edi
    int v6; // esi
    v3 = *(uint32_t *)(this + 728) - 1;
    *(uint32_t *)(this + 728) = v3;
    if ( !v3 )
    if ( a2 )
    v4 = 0;
    v5 = g_SidebarState - 1;
    if ( g_SidebarState - 1 >= 0 )
    do
    v6 = *((uint32_t *)g_TechnoClass_Count + v5);
    if ( *(uint32_t *)(v6 + 540) == this
    && (*(int (__thiscall **)(uint32_t))(*(uint32_t *)v6 + 132))(*((uint32_t *)g_TechnoClass_Count + v5)) == a2
    && !*(uint8_t *)(v6 + 129) )
    TechnoClass::Deactivate((uint32_t *)v6);
    v4 = 1;
    --v5;
    while ( v5 >= 0 );
    if ( v4 && WTFMode )
    if ( GameMode_Current[0] )
    if ( (void*375 *)this != HouseClass_Player )
    return;
    goto LABEL_16;
    if ( *(uint8_t *)(this + 492) || *(uint8_t *)(this + 493) )
    LABEL_16:
    if ( !IKnowWhatImDoing )
    VoxClass::FindAndPlay(g_Str_EVA_RobotTanksOffline, -1);
}

// 0x005471B0
int  HouseClass::GetCameoTypeIndex(void *this, int a2)
{
    uint32_t *v2; // eax
    int v3; // ecx
    v2 = (uint32_t *)(*(int (__thiscall **)(void *))(*(uint32_t *)this + 156))(this);
    if ( v2 && (v3 = v2[a2 % (*v2 * v2[1]) + 4]) != 0 )
    return *(char *)(v3 + 42);
    else
    return 0;
}

// 0x00410410
int  HouseClass::ProcessPower(#374 *this)
{
    int v2; // eax
    int v3; // eax
    int v4; // eax
    int v5; // eax
    int v6; // ecx
    int v7; // edx
    int v8; // ecx
    int v9; // eax
    int v10; // edx
    int v11; // eax
    int v12; // ecx
    int v13; // edx
    int v14; // eax
    int *v16; // [esp+Ch] [ebp+4h]
    AbstractClass::ProcessPower(this);
    v2 = *((uint32_t *)this + 12);
    if ( v2 )
    v3 = (*(int (__stdcall **)(int))(*(uint32_t *)(v2 + 4) + 16))(v2 + 4);
    Power::TimerProcess(v3);
    v4 = *((uint32_t *)this + 13);
    if ( v4 )
    v5 = (*(int (__stdcall **)(int))(*(uint32_t *)(v4 + 4) + 16))(v4 + 4);
    Power::TimerProcess(v5);
    Power::TimerProcess(*((uint32_t *)this + 27));
    LOBYTE(v6) = *((uint8_t *)this + 116);
    Power::FlagProcess(v16, v6);
    if ( !GameMode_Current[0] || GameMode_Current[0] == 5 )
    LOBYTE(v7) = *((uint8_t *)this + 128);
    v9 = Power::FlagProcess(v16, v7);
    LOBYTE(v9) = *((uint8_t *)this + 131);
    Power::FlagProcess(v16, v9);
    LOBYTE(v8) = *((uint8_t *)this + 129);
    Power::FlagProcess(v16, v8);
    LOBYTE(v10) = *((uint8_t *)this + 132);
    v11 = Power::FlagProcess(v16, v10);
    LOBYTE(v11) = *((uint8_t *)this + 140);
    Power::FlagProcess(v16, v11);
    LOBYTE(v12) = *((uint8_t *)this + 141);
    Power::FlagProcess(v16, v12);
    LOBYTE(v13) = *((uint8_t *)this + 143);
    v14 = Power::FlagProcess(v16, v13);
    LOBYTE(v14) = *((uint8_t *)this + 144);
    Power::FlagProcess(v16, v14);
    Power::TimerProcess(*((uint32_t *)this + 39));
    Power::TimerProcess(*((uint32_t *)this + 40));
    return Power::TimerProcess(*((uint32_t *)this + 41));
}

char  HouseClass::HasType26Building(uint32_t *this)
{
    int v1; // ecx
    char result; // al
    v1 = *(this + 43);
    result = 0;
    if ( v1 )
    while ( *(uint32_t *)(v1 + 44) != 26 )
    v1 = *(uint32_t *)(v1 + 40);
    if ( !v1 )
    return result;
    return 1;
    return result;
}

char  HouseClass::HasType25Building(uint32_t *this)
{
    int v1; // ecx
    char result; // al
    v1 = *(this + 43);
    result = 0;
    if ( v1 )
    while ( *(uint32_t *)(v1 + 44) != 25 )
    v1 = *(uint32_t *)(v1 + 40);
    if ( !v1 )
    return result;
    return 1;
    return result;
}

