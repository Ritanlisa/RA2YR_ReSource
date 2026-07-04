#include "abstractclass.hpp"

int AbstractClass::sub_410100()
{
    word_887660 = 0;
    word_887662 = 0;
    return 0;
}

void  AbstractClass::DTOR(uint32_t *this)
{
    *this = &AbstractClass::`vftable';
    *(this + 1) = &AbstractClass::`vftable';
    *(this + 2) = &AbstractClass::`vftable';
    *(this + 3) = &AbstractClass::`vftable';
}

// 0x00410260
int  AbstractClass::QueryInterface(#374 *this)
{
    int *v2; // ecx
    AbstractClass *thisa; // [esp+8h] [ebp+4h]
    const void *iid; // [esp+Ch] [ebp+8h]
    void **ppv; // [esp+10h] [ebp+Ch]
    if ( !ppv )
    return -2147467261;
    *ppv = 0;
    if ( !memcmp(iid, &IID_IUnknown, 0x10u) )
    *ppv = thisa;
    if ( !memcmp(iid, &IID_IPersistStream, 0x10u) )
    *ppv = thisa;
    if ( !memcmp(iid, &IID_IPersist, 0x10u) )
    *ppv = thisa;
    if ( !memcmp(iid, &IID_IRTTITypeInfo, 0x10u) )
    if ( thisa )
    v2 = &thisa->parent_gap[1];
    else
    v2 = 0;
    *ppv = v2;
    if ( !*ppv )
    return -2147467262;
    (*(void (__stdcall **)(AbstractClass *))(thisa->parent_gap[0] + 4))(thisa);
    return 0;
}

int  AbstractClass::_vt1(#374 *this)
{
    return 1;
}

int  AbstractClass::_vt2(#374 *this)
{
    return 1;
}

// 0x00410320
int __stdcall AbstractClass::SaveLoad_Prefix(int *a1, int *a2, int a3)
{
    int *v3; // esi
    int result; // eax
    int v5; // eax
    int v6; // ebx
    int v7; // eax
    int *v8; // [esp-4h] [ebp-18h]
    v3 = a2;
    if ( !a2 )
    return -2147467261;
    v5 = *a2;
    v8 = a2;
    a2 = a1;
    result = (*(int (__stdcall **)(int *, int **, int, uint32_t))(v5 + 16))(v8, &a2, 4, 0);
    if ( result >= 0 )
    v6 = *v3;
    v7 = (*(int (__thiscall **)(int *, uint32_t))(*a1 + 48))(a1, 0);
    result = (*(int (__stdcall **)(int *, int *, int))(v6 + 16))(v3, a1, v7);
    if ( result >= 0 )
    if ( a3 )
    *((uint8_t *)a1 + 32) = 0;
    return result;
}

// 0x00410380
int __stdcall AbstractClass::SaveLoad_Prefix_0(uint32_t *a1, int a2)
{
    int *v2; // edi
    int result; // eax
    int v4; // ebx
    int v5; // ebp
    int v6; // eax
    v2 = (int *)a2;
    if ( !a2 )
    return -2147467261;
    result = (*(int (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, &a2, 4, 0);
    if ( result >= 0 )
    SwizzleManagerClass::Here_I_Am((int)&SwizzleManagerClass_Instance, a2, (int)a1);
    v4 = a1[7];
    v5 = *v2;
    v6 = (*(int (__thiscall **)(uint32_t *, uint32_t))(*a1 + 48))(a1, 0);
    result = (*(int (__stdcall **)(int *, uint32_t *, int))(v5 + 12))(v2, a1, v6);
    a1[7] = v4;
    return result;
}

int  AbstractClass::ProcessPower(#378 *this)
{
    int v2; // ecx
    int *v4; // [esp+Ch] [ebp+4h]
    Power::TimerProcess(*((uint32_t *)this + 4));
    LOBYTE(v2) = *((uint8_t *)this + 32);
    return Power::FlagProcess(v4, v2);
}

// 0x00410450
int  AbstractClass::IsClean(#374 *this)
{
    int v2; // [esp+4h] [ebp+4h]
    return *(uint8_t *)(v2 + 32) == 0;
}

int  AbstractClass::_vt15(#374 *this)
{
    return 0;
}

int  AbstractClass::_vt16(#374 *this)
{
    return 0;
}

// 0x004104F0
int  AbstractClass::GetCoordsEx(#374 *this)
{
    uint32_t *v1; // ecx
    uint8_t v3[12]; // [esp+4h] [ebp-Ch] BYREF
    uint32_t *v4; // [esp+14h] [ebp+4h]
    v1 = (uint32_t *)(*(int (__thiscall **)(void*374 *, uint8_t *))(*(uint32_t *)this + 72))(this, v3);
    *v4 = *v1;
    v4[1] = v1[1];
    v4[2] = v1[2];
    return (int)v4;
}

int  AbstractClass::_vt20(#376 *this)
{
    int result; // eax
    LOBYTE(result) = 0;
    return result;
}

int  AbstractClass::_vt21(#378 *this)
{
    int result; // eax
    LOBYTE(result) = 0;
    return result;
}

// 0x00410540
int  AbstractClass::GetCoords(#374 *this)
{
    int *v1; // ecx
    uint8_t v3[12]; // [esp+4h] [ebp-Ch] BYREF
    CoordStruct *out; // [esp+14h] [ebp+4h]
    v1 = (int *)(*(int (__thiscall **)(void*374 *, uint8_t *))(*(uint32_t *)this + 72))(this, v3);
    out->X = *v1;
    out->Y = v1[1];
    out->Z = v1[2];
    return (int)out;
}

int  AbstractClass::_vt08(AbstractClass *this)
{
    char v3; // [esp+8h] [ebp+4h]
    this->parent_gap[0] = (int)&AbstractClass::`vftable';
    this->parent_gap[1] = (int)&AbstractClass::`vftable';
    this->parent_gap[2] = (int)&AbstractClass::`vftable';
    this->parent_gap[3] = (int)&AbstractClass::`vftable';
    if ( (v3 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (int)this->parent_gap;
}

int AbstractClass::GetField9()
{
    return RulesClass_Instance->PoseDir;
}

int  AbstractClass::_vt25(#374 *this)
{
    int result; // eax
    LOBYTE(result) = 0;
    return result;
}

int  AbstractClass::_vt26(#374 *this)
{
    return 0;
}

int  AbstractClass::_vt32(#374 *this)
{
    int result; // eax
    LOBYTE(result) = 0;
    return result;
}

int  AbstractClass::_vt36(#374 *this)
{
    return (int)aNoName_0;
}

int  AbstractClass::_vt49(#374 *this)
{
    int result; // eax
    LOBYTE(result) = 0;
    return result;
}

int  AbstractClass::_vt50(#374 *this)
{
    int result; // eax
    LOBYTE(result) = 0;
    return result;
}

int  AbstractClass::_vt88(#374 *this)
{
    int result; // eax
    LOBYTE(result) = 0;
    return result;
}

int  AbstractClass::_vt107(#374 *this)
{
    return 0;
}

int  AbstractClass::_vt108(#374 *this)
{
    return 0;
}

int  AbstractClass::_vt117(#374 *this)
{
    int result; // eax
    LOBYTE(result) = 0;
    return result;
}

int  AbstractClass::_vt118(#374 *this)
{
    int result; // eax
    LOBYTE(result) = 0;
    return result;
}

int  AbstractClass::_vt119(#374 *this)
{
    int result; // eax
    LOBYTE(result) = 0;
    return result;
}

int  AbstractClass::_vt121(#374 *this)
{
    return 0;
}

int  AbstractClass::sub_426A80(unsigned __int16 *this)
{
    return *(this + 81);
}

char  AbstractClass::sub_45E800(void *this, __int16 *a2, int a3)
{
    void *v4; // eax
    int v5; // eax
    int v6; // edx
    uint32_t v8[3]; // [esp+4h] [ebp-Ch] BYREF
    v4 = __2_YAPAXI_Z(0x720u);
    if ( !v4 )
    return 0;
    v5 = BuildingClass::Construct((int)v4, (int)this, a3);
    if ( !v5 )
    return 0;
    v8[2] = 0;
    v6 = *a2 << 8;
    v8[1] = (a2[1] << 8) + 128;
    v8[0] = v6 + 128;
    return (*(int (__thiscall **)(int, uint32_t *, uint32_t))(*(uint32_t *)v5 + 216))(v5, v8, 0);
}

int  AbstractClass::sub_45E880(void *this, int a2)
{
    void *v3; // eax
    v3 = __2_YAPAXI_Z(0x720u);
    if ( v3 )
    return BuildingClass::Construct((int)v3, (int)this, a2);
    else
    return 0;
}

uint32_t * AbstractClass::sub_45EBD0(void *this, uint32_t *a2)
{
    uint32_t *FoundationSize; // eax
    int v3; // ecx
    int v4; // edx
    uint32_t v6[4]; // [esp+10h] [ebp-10h] BYREF
    if ( (*(int (__thiscall **)(void *))(*(uint32_t *)this + 156))(this) )
    FoundationSize = Building::GetFoundationSize(v6, 0);
    v3 = FoundationSize[2];
    v4 = FoundationSize[3];
    else
    v3 = 0;
    v4 = 0;
    *a2 = v3;
    a2[1] = v3;
    a2[2] = v4;
    return a2;
}

int * AbstractClass::sub_45EC20(int **this, int a2)
{
    int *result; // eax
    if ( (byte_89C890 & 1) == 0 )
    byte_89C890 |= 1u;
    dword_89C8E8 = 2147450879;
    atexit(nullsub_107);
    result = *(this + 895);
    if ( !result )
    return &dword_89C8E8;
    return result;
}

int  AbstractClass::sub_45ED50(uint32_t *this)
{
    int Member388; // esi
    int *v3; // eax
    int v4; // edi
    int v5; // ebp
    int v6; // ebx
    int v7; // eax
    Member388 = TechnoClass::GetMember388(this);
    v3 = (int *)RulesClass_Instance->OverloadCount[0];
    v4 = *v3;
    if ( this == **(uint32_t ***)(*v3 + 1004) && !LOBYTE(RulesClass_Instance[1].RadarEventDurations[3]) )
    v5 = (*(int (__thiscall **)(int))(*(uint32_t *)v3[1] + 172))(v3[1]);
    Member388 += (v5 + (*(int (__thiscall **)(int))(*(uint32_t *)v4 + 172))(v4)) / -2;
    v6 = *(this + 936);
    if ( !v6 )
    return Member388;
    v7 = (*(int (__thiscall **)(int))(*(uint32_t *)v6 + 172))(v6);
    return (Member388 - v7) & ((Member388 - v7 <= 0) - 1);
}

int  AbstractClass::sub_45EDD0(uint32_t *this, int a2)
{
    int v4; // esi
    int *v5; // eax
    int v6; // edi
    int v7; // ebx
    int v8; // eax
    int v10; // [esp+14h] [ebp+4h]
    v4 = TechnoTypeClass::ComputeValueSimple(this, a2);
    v5 = (int *)RulesClass_Instance->OverloadCount[0];
    v6 = *v5;
    if ( this == **(uint32_t ***)(*v5 + 1004) && !LOBYTE(RulesClass_Instance[1].RadarEventDurations[3]) )
    v10 = (*(int (__thiscall **)(int, int))(*(uint32_t *)v5[1] + 132))(v5[1], a2);
    v4 += (v10 + (*(int (__thiscall **)(int, int))(*(uint32_t *)v6 + 132))(v6, a2)) / 2;
    v7 = *(this + 936);
    if ( !v7 )
    return v4;
    v8 = (*(int (__thiscall **)(int, int))(*(uint32_t *)v7 + 132))(v7, a2);
    return v8 + v4 <= 0 ? 0 : v8 + v4;
}

int  AbstractClass::sub_45F040(int this)
{
    int result; // eax
    void *EntireFile; // eax
    void *v4; // eax
    uint32_t v5[22]; // [esp+4h] [ebp-1DCh] BYREF
    uint8_t v6[12]; // [esp+5Ch] [ebp-184h] BYREF
    int v7; // [esp+68h] [ebp-178h]
    uint32_t v8[22]; // [esp+70h] [ebp-170h] BYREF
    uint8_t v9[12]; // [esp+C8h] [ebp-118h] BYREF
    int v10; // [esp+D4h] [ebp-10Ch]
    char Destination[260]; // [esp+DCh] [ebp-104h] BYREF
    result = *(uint32_t *)(this + 164);
    if ( !result && *(uint8_t *)(this + 5984) )
    if ( *(uint8_t *)(this + 5994) )
    CCFileClass::Construct(v5, (char *)(this + 5994));
    CCFileClass::Open(v5, 0);
    EntireFile = CCFileClass::ReadEntireFile(v5);
    *(uint32_t *)(this + 164) = EntireFile;
    if ( EntireFile )
    *(uint8_t *)(this + 168) = 1;
    else
    strncpy(Destination, (const char *)(this + 5994), 0x13u);
    ObjectTypeClass::SetRTTI71(Destination);
    CCFileClass::Construct(v8, Destination);
    v4 = CCFileClass::ReadEntireFile(v8);
    *(uint32_t *)(this + 164) = v4;
    if ( v4 )
    *(uint8_t *)(this + 168) = 1;
    v8[0] = &CCFileClass::`vftable';
    v10 = 0;
    Vector::Clear((int)v9);
    v8[0] = &off_7E1668;
    BufferIOFileClass::Dtor(v8);
    v5[0] = &CCFileClass::`vftable';
    v7 = 0;
    Vector::Clear((int)v6);
    v5[0] = &off_7E1668;
    BufferIOFileClass::Dtor(v5);
    return *(uint32_t *)(this + 164);
    return result;
}

uint32_t *__userpurge AbstractClass::sub_464A70@<eax>(int a1@<esi>, uint32_t *a2, int *a3)
{
    int GroundHeight; // eax
    int v5; // [esp+4h] [ebp-Ch] BYREF
    int v6; // [esp+8h] [ebp-8h]
    int v7; // [esp+Ch] [ebp-4h]
    v5 = *a3;
    v6 = a3[1];
    v7 = a3[2];
    GroundHeight = Cell::GetGroundHeight(&v5);
    *a2 = a1;
    a2[1] = v6;
    a2[2] = GroundHeight;
    return a2;
}

bool  AbstractClass::sub_464AC0(int this, _WORD *a2, int a3)
{
    return *(uint8_t *)(this + 5891) || BuildingClass::ValidatePath((int *)this, a2, a3);
}

char AbstractClass::sub_465910()
{
    return 0;
}

char AbstractClass::sub_465920()
{
    return 0;
}

int  AbstractClass::sub_465960(int this)
{
    int result; // eax
    __int16 *EntireFile; // edi
    int v4; // ecx
    int v5; // edi
    int v6; // [esp+4h] [ebp-1E0h]
    uint32_t v7[22]; // [esp+8h] [ebp-1DCh] BYREF
    uint8_t v8[12]; // [esp+60h] [ebp-184h] BYREF
    int v9; // [esp+6Ch] [ebp-178h]
    uint32_t v10[22]; // [esp+74h] [ebp-170h] BYREF
    uint8_t v11[12]; // [esp+CCh] [ebp-118h] BYREF
    int v12; // [esp+D8h] [ebp-10Ch]
    char Buffer[260]; // [esp+E0h] [ebp-104h] BYREF
    result = *(uint32_t *)(this + 3584);
    if ( !result && *(uint8_t *)(this + 5985) )
    if ( strlen((const char *)(this + 3676)) )
    _makepath(Buffer, 0, 0, (const char *)(this + 3676), Ext);
    TheaterObjectTypeClassSpecificID(Buffer, *((uint32_t *)ScenarioClass_Instance + 1174));
    CCFileClass::Construct(v10, Buffer);
    EntireFile = (__int16 *)CCFileClass::ReadEntireFile(v10);
    if ( !EntireFile )
    ObjectTypeClass::SetRTTI71(Buffer);
    CCFileClass::Construct(v7, Buffer);
    EntireFile = (__int16 *)CCFileClass::ReadEntireFile(v7);
    v7[0] = &CCFileClass::`vftable';
    v9 = 0;
    Vector::Clear((int)v8);
    v7[0] = &off_7E1668;
    BufferIOFileClass::Dtor(v7);
    *(uint32_t *)(this + 3584) = EntireFile;
    if ( EntireFile )
    v4 = 1;
    *(uint8_t *)(this + 3588) = 1;
    v5 = EntireFile[3] / 2;
    v6 = v5;
    if ( *(uint8_t *)(this + 5815) )
    v5 = *(uint32_t *)(this + 5880) + 1;
    v6 = v5;
    if ( v5 > 0 )
    v4 = Math::RoundToInt(*(double *)&RulesClass_Instance[1].WaterCrateImg * 900.0 / (double)v6);
    *(uint32_t *)(this + 3844) = 0;
    *(uint32_t *)(this + 3848) = v5;
    *(uint32_t *)(this + 3852) = v4;
    v10[0] = &CCFileClass::`vftable';
    v12 = 0;
    Vector::Clear((int)v11);
    v10[0] = &off_7E1668;
    BufferIOFileClass::Dtor(v10);
    return *(uint32_t *)(this + 3584);
    return result;
}

int __stdcall AbstractClass::sub_487E50(int a1)
{
    return 11;
}

int  AbstractClass::sub_491500(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, uint32_t))(*(uint32_t *)this + 4))(
    this,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    0);
}

int  AbstractClass::sub_491560(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, uint32_t))(*(uint32_t *)this + 4))(
    this,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    0);
}

int  AbstractClass::sub_4915E0(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, uint32_t))(*(uint32_t *)this + 4))(
    this,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    0);
}

int  AbstractClass::sub_491640(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, uint32_t))(*(uint32_t *)this + 4))(
    this,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    0);
}

void  AbstractClass::sub_4CA890(int this)
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

unsigned int  AbstractClass::sub_4CA8C0(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

char  AbstractClass::sub_4CAA70(void *this, int a2, uint32_t *a3)
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

int  AbstractClass::sub_4CAB20(int *this, uint32_t *a2)
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

uint32_t * AbstractClass::sub_4CABA0(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<TechnoTypeClass const *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

void  AbstractClass::sub_4D2930(int this)
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

unsigned int  AbstractClass::sub_4D2960(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 4;
    else
    return 0;
}

int  AbstractClass::_vt34(#374 *this)
{
    return 0;
}

void  AbstractClass::sub_4E0190(int this)
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

unsigned int  AbstractClass::sub_4E01C0(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

uint32_t * AbstractClass::sub_4E0270(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<AbstractClass *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

char  AbstractClass::sub_4E04A0(void *this, int a2, uint32_t *a3)
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

int AbstractClass::sub_50E360()
{
    return 13;
}

int  AbstractClass::sub_50E370(uint32_t *this)
{
    return *(this + 12);
}

void * AbstractClass::sub_50E380(void *Block, char a2)
{
    HouseClass::Destruct((int)Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

void  AbstractClass::sub_50E5D0(int this)
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

unsigned int  AbstractClass::sub_50E600(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 3;
    else
    return 0;
}

char  AbstractClass::sub_50F3A0(void *this, int a2, char *a3)
{
    int v3; // ebp
    char *v5; // edi
    char *v6; // eax
    char *v7; // ecx
    int v8; // edx
    char *v9; // eax
    int v10; // ecx
    int v11; // edx
    int v12; // ecx
    int v13; // eax
    uint32_t *v14; // ebx
    int v15; // eax
    v3 = a2;
    if ( a2 )
    v5 = a3;
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    v9 = a3;
    if ( a2 - 1 >= 0 )
    v10 = a2;
    do
    *(uint32_t *)v9 = 0;
    v9[4] = 0;
    v9 += 8;
    --v10;
    while ( v10 );
    else
    v6 = (char *)__2_YAPAXI_Z(8 * a2);
    if ( v6 )
    v7 = v6;
    if ( a2 - 1 >= 0 )
    v8 = a2;
    do
    *(uint32_t *)v7 = 0;
    v7[4] = 0;
    v7 += 8;
    --v8;
    while ( v8 );
    v5 = v6;
    else
    v5 = 0;
    *((uint8_t *)this + 12) = 1;
    if ( !v5 )
    return 0;
    if ( *((uint32_t *)this + 1) )
    v11 = *((uint32_t *)this + 2);
    if ( a2 < v11 )
    v11 = a2;
    v12 = 0;
    if ( v11 > 0 )
    do
    v13 = 8 * v12;
    v14 = (uint32_t *)(*((uint32_t *)this + 1) + 8 * v12++);
    *(uint32_t *)&v5[v13] = *v14;
    *(uint32_t *)&v5[v13 + 4] = v14[1];
    while ( v12 < v11 );
    v3 = a2;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v5;
    *((uint32_t *)this + 2) = v3;
    *((uint8_t *)this + 13) = a3 == 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    v15 = *((uint32_t *)this + 2);
    if ( v15 < *((uint32_t *)this + 4) )
    *((uint32_t *)this + 4) = v15;
    return 1;
}

int  AbstractClass::sub_50F4A0(int *this, int a2)
{
    int v2; // esi
    int result; // eax
    int i; // ecx
    v2 = *(this + 4);
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = *(this + 1); *(uint32_t *)i != *(uint32_t *)a2 || *(uint8_t *)(i + 4) != *(uint8_t *)(a2 + 4); i += 8 )
    if ( ++result >= v2 )
    return -1;
    return result;
}

uint32_t * AbstractClass::sub_510220(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<ScoutStruct>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

int __stdcall AbstractClass::sub_510A20(int a1, const void *a2, uint32_t *a3)
{
    return HouseClass::QueryInterface(a1 - 4, a2, a3);
}

int __stdcall AbstractClass::sub_510A30(int a1)
{
    return HouseClass::COMStub_Ret1_1(a1 - 4);
}

int __stdcall AbstractClass::sub_510A40(int a1)
{
    return HouseClass::COMStub_Ret1_2(a1 - 4);
}

char  AbstractClass::ModifyCellTiles(#374 *this, int a2)
{
    void*374 *v2; // edi
    int v3; // esi
    int v4; // eax
    int v5; // ecx
    int v6; // ebp
    _WORD *v7; // eax
    uint32_t *v8; // esi
    int v9; // eax
    int v10; // ebx
    int v11; // eax
    int v12; // eax
    int v13; // eax
    int v14; // edx
    int v15; // eax
    int v16; // edx
    uint32_t *v17; // eax
    int v18; // edx
    uint32_t *v19; // ecx
    bool v20; // cc
    void *NeighbourContent; // eax
    void *v22; // eax
    void *v23; // eax
    void *v24; // eax
    int v25; // eax
    int v27; // [esp+Ch] [ebp-40h]
    char *v28; // [esp+10h] [ebp-3Ch]
    int v30; // [esp+18h] [ebp-34h]
    int v31; // [esp+1Ch] [ebp-30h]
    int v32; // [esp+20h] [ebp-2Ch] BYREF
    int v33; // [esp+24h] [ebp-28h]
    int v34; // [esp+28h] [ebp-24h]
    int v35; // [esp+2Ch] [ebp-20h]
    int v36; // [esp+30h] [ebp-1Ch] BYREF
    int v37; // [esp+38h] [ebp-14h]
    int v38; // [esp+3Ch] [ebp-10h]
    uint8_t v39[12]; // [esp+40h] [ebp-Ch] BYREF
    v2 = this;
    v30 = (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 108))(this);
    if ( !v30 )
    return 0;
    v3 = a2;
    if ( !(unsigned __int8)ObjectClass::UpdateProductionDisplay(v2) )
    return 0;
    v4 = *((uint32_t *)v2 + 43);
    v27 = 0;
    if ( *(int *)(v4 + 744) > 0 )
    while ( 1 )
    v5 = *(uint32_t *)(v4 + 740);
    v6 = 0;
    v34 = 0;
    if ( v5 <= 0 )
    goto LABEL_45;
    do
    v7 = (_WORD *)(*(int (__thiscall **)(void*374 *, int *))(*(uint32_t *)v2 + 440))(v2, &v36);
    LOWORD(v31) = *v7 + v6;
    HIWORD(v31) = v27 + v7[1];
    v32 = v31;
    if ( !LayerClass::CoordinatesLegal(&MapClass_Instance, (__int16 *)&v32) )
    goto LABEL_44;
    v8 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v32);
    v9 = *((uint32_t *)v2 + 43);
    v10 = v6 + v27 * *(uint32_t *)(v9 + 740);
    if ( !*(uint32_t *)(v30 + 4 * v10 + 16) )
    goto LABEL_44;
    if ( !a2 )
    if ( v8[14] == *(uint32_t *)(v9 + 660) && *((unsigned __int8 *)v8 + 282) == v10 )
    v8[14] = 0xFFFF;
    *((uint8_t *)v8 + 282) = 0;
    *((uint8_t *)v8 + 283) -= *(uint8_t *)(*(uint32_t *)(v30 + 4 * v10 + 16) + 40);
    goto LABEL_43;
    if ( a2 != 1 && a2 != 3 )
    goto LABEL_43;
    v11 = *(uint32_t *)(v9 + 660);
    if ( v11 == dword_AA10B0 )
    v8[14] = 0xFFFF;
    else
    v8[14] = v11;
    *((uint8_t *)v8 + 282) = v10;
    *((uint8_t *)v8 + 284) = HouseClass::GetCameoTypeIndex(v10);
    if ( v8[14] == g_TerrainTypeTable2 + 5 )
    switch ( *((uint8_t *)v8 + 282) )
    case 0:
    case 3:
    case 6:
    case 9:
    v12 = g_CellTileLookup;
    *((uint8_t *)v8 + 282) = 0;
    v8[14] = v12 + 1;
    break;
    default:
    break;
    if ( v8[14] == dword_AA1098 + 5 )
    switch ( *((uint8_t *)v8 + 282) )
    case 0:
    case 3:
    case 6:
    case 9:
    v13 = dword_AA109C;
    *((uint8_t *)v8 + 282) = 0;
    v8[14] = v13 + 1;
    break;
    default:
    break;
    if ( v8[14] == g_TerrainTypeTable2 + 8 && *((uint8_t *)v8 + 282) <= 3u )
    v14 = g_CellTileLookup;
    *((uint8_t *)v8 + 282) = 0;
    v8[14] = v14;
    if ( v8[14] != dword_AA1098 + 8 || *((uint8_t *)v8 + 282) > 3u )
    goto LABEL_28;
    v8[14] = dword_AA109C;
    *((uint8_t *)v8 + 282) = 0;
    LABEL_28:
    v15 = v8[17];
    v8[18] = -1;
    *((uint8_t *)v8 + 287) = 0;
    if ( v15 < 27 )
    goto LABEL_42;
    if ( v15 >= 38 )
    goto LABEL_42;
    v16 = *v8;
    v8[80] &= ~0x20000u;
    v17 = (uint32_t *)(*(int (__thiscall **)(uint32_t *, uint8_t *))(v16 + 72))(v8, v39);
    v18 = *v17 + 384;
    v37 = v17[1] + 384;
    v38 = v17[2];
    v33 = 0;
    if ( g_AnimClassCount <= 0 )
    goto LABEL_42;
    v35 = *(uint32_t *)(*(uint32_t *)&BuildingTypeClass_Array->gap0[4 * v8[17]] + 668);
    v28 = (char *)g_AnimClassPool;
    while ( 1 )
    v19 = *(uint32_t **)v28;
    if ( *(uint32_t *)(*(uint32_t *)v28 + 200) == v35 )
    break;
    LABEL_37:
    v20 = ++v33 < g_AnimClassCount;
    v28 += 4;
    if ( !v20 )
    goto LABEL_42;
    if ( v19[39] != v18 || v19[40] != v37 || v19[41] != v38 )
    v2 = this;
    goto LABEL_37;
    if ( v19 )
    (*(void (__thiscall **)(uint32_t *, int))(*v19 + 32))(v19, 1);
    v2 = this;
    LABEL_42:
    v8[17] = -1;
    *((uint8_t *)v8 + 286) = 0;
    *((uint8_t *)v8 + 283) += *(uint8_t *)(*(uint32_t *)(v30 + 4 * v10 + 16) + 40);
    CellClass::DetermineTileType((int)v8);
    NeighbourContent = Cell::GetNeighbourContent(v8, 0);
    CellClass::DetermineTileType((int)NeighbourContent);
    v22 = Cell::GetNeighbourContent(v8, 2u);
    CellClass::DetermineTileType((int)v22);
    v23 = Cell::GetNeighbourContent(v8, 4u);
    CellClass::DetermineTileType((int)v23);
    v24 = Cell::GetNeighbourContent(v8, 6u);
    CellClass::DetermineTileType((int)v24);
    v6 = v34;
    LABEL_43:
    House::AnnounceUpgrade((int)v8, -1);
    LABEL_44:
    v25 = *((uint32_t *)v2 + 43);
    v34 = ++v6;
    while ( v6 < *(uint32_t *)(v25 + 740) );
    LABEL_45:
    v4 = *((uint32_t *)v2 + 43);
    if ( ++v27 >= *(uint32_t *)(v4 + 744) )
    v3 = a2;
    break;
    if ( v3 == 1 || v3 == 3 )
    *((uint8_t *)v2 + 116) = 0;
    if ( v2 )
    (*(void (__thiscall **)(void*374 *, int))(*(uint32_t *)v2 + 32))(v2, 1);
    return 1;
}

int  AbstractClass::_vt5(#374 *this, uint32_t *a2, int a3)
{
    int Register; // edi
    Register = BuildingClass::SaveLoad_Register(this);
    if ( Register >= 0 )
    if ( a2 )
    ObjectClass::Init(a2, (int)&a3);
    *a2 = &IsometricTileClass::`vftable';
    a2[1] = &IsometricTileClass::`vftable';
    a2[2] = &IsometricTileClass::`vftable';
    a2[3] = &IsometricTileClass::`vftable';
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 43);
    return Register;
}

int __stdcall AbstractClass::_vt6(int *a1, int *a2, int a3)
{
    int result; // eax
    result = AbstractClass::SaveLoad_Prefix(a1, a2, a3);
    if ( result >= 0 )
    return 0;
    return result;
}

int  AbstractClass::_vt54(uint8_t *this, int a2, int a3)
{
    int v4; // eax
    v4 = *(uint32_t *)this;
    *(this + 129) = 0;
    (*(void (__thiscall **)(uint8_t *, int))(v4 + 436))(this, a2);
    return (*(int (__thiscall **)(uint8_t *, int))(*(uint32_t *)this + 292))(this, 1);
}

char  AbstractClass::_vt53(uint8_t *this)
{
    if ( !WTFMode || *(this + 129) )
    return 0;
    (*(void (__thiscall **)(uint8_t *))(*(uint32_t *)this + 336))(this);
    (*(void (__thiscall **)(uint8_t *, int))(*(uint32_t *)this + 220))(this, 1);
    (*(void (__thiscall **)(uint8_t *, uint32_t))(*(uint32_t *)this + 292))(this, 0);
    *(this + 129) = 1;
    *(this + 128) = 0;
    return 1;
}

int AbstractClass::_vt12()
{
    return 176;
}

int AbstractClass::_vt11()
{
    return 17;
}

void ** AbstractClass::_vt8(void **Block, char a2)
{
    int v3; // eax
    int v4; // eax
    void **v6; // [esp+Ch] [ebp-4h] BYREF
    *Block = &IsometricTileClass::`vftable';
    *(Block + 1) = &IsometricTileClass::`vftable';
    *(Block + 2) = &IsometricTileClass::`vftable';
    *(Block + 3) = &IsometricTileClass::`vftable';
    AbstractClass::AnnounceExpiredPointer(Block, 1);
    if ( WTFMode && !*((uint8_t *)Block + 129) )
    (*((void (__thiscall **)(void **))*Block + 84))(Block);
    (*((void (__thiscall **)(void **, int))*Block + 55))(Block, 1);
    (*((void (__thiscall **)(void **, uint32_t))*Block + 73))(Block, 0);
    *((uint8_t *)Block + 129) = 1;
    *((uint8_t *)Block + 128) = 0;
    *(Block + 43) = 0;
    v6 = Block;
    v3 = (*(int (__thiscall **)(int *, void ***))(dword_87F750 + 16))(&dword_87F750, &v6);
    if ( v3 != -1 && v3 < dword_87F760 && v3 < --dword_87F760 )
    do
    ++v3;
    *((uint32_t *)dword_87F754 + v3 - 1) = *((uint32_t *)dword_87F754 + v3);
    while ( v3 < dword_87F760 );
    v6 = Block;
    v4 = (*(int (__thiscall **)(int *, void ***))(g_AnimPoolManager + 16))(&g_AnimPoolManager, &v6);
    if ( v4 != -1 && v4 < g_AnimManager && v4 < --g_AnimManager )
    do
    ++v4;
    *((uint32_t *)g_AnimPoolCount + v4 - 1) = *((uint32_t *)g_AnimPoolCount + v4);
    while ( v4 < g_AnimManager );
    ObjectClass::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

int  AbstractClass::_vt134(#377 *this)
{
    return 450;
}

int  AbstractClass::_vt138(#377 *this)
{
    return 450;
}

int  AbstractClass::_vt139(#377 *this)
{
    return 450;
}

int  AbstractClass::_vt140(#377 *this)
{
    return 450;
}

int  AbstractClass::_vt144(#377 *this)
{
    return 450;
}

int  AbstractClass::_vt150(#377 *this)
{
    return 450;
}

int  AbstractClass::_vt151(#377 *this)
{
    return 450;
}

int  AbstractClass::_vt125(int this, int a2, int a3, int a4)
{
    int result; // eax
    int v5; // edx
    result = *(uint32_t *)(this + 172);
    if ( (result != 28 || a2 != 5) && result != 19 )
    v5 = *(uint32_t *)(this + 180);
    if ( v5 == -1 )
    *(uint32_t *)(this + 176) = result;
    *(uint32_t *)(this + 172) = a2;
    else
    *(uint32_t *)(this + 172) = a2;
    *(uint32_t *)(this + 176) = v5;
    *(uint8_t *)(this + 184) = 0;
    return result;
}

char  AbstractClass::_vt126(int this)
{
    int v1; // eax
    v1 = *(uint32_t *)(this + 176);
    if ( v1 == -1 )
    return 0;
    *(uint32_t *)(this + 172) = v1;
    *(uint32_t *)(this + 176) = -1;
    *(uint8_t *)(this + 184) = 0;
    return 1;
}

int  AbstractClass::_vt13(int this, int a2)
{
    int v3; // edx
    int v4; // eax
    HouseClass::ProcessPower((void*374 *)this);
    Power::TimerProcess(*(uint32_t *)(this + 172));
    Power::TimerProcess(*(uint32_t *)(this + 176));
    Power::TimerProcess(*(uint32_t *)(this + 180));
    Power::TimerProcess(*(uint32_t *)(this + 188));
    v3 = *(uint32_t *)(this + 200);
    v4 = *(uint32_t *)(this + 208);
    if ( v3 != -1 )
    if ( (int)CurrentFrame - v3 >= v4 )
    v4 = 0;
    else
    v4 -= (int)CurrentFrame - v3;
    Power::TimerProcess(v4);
    return Power::TimerProcess(*(uint32_t *)(this + 192));
}

uint32_t * AbstractClass::sub_5B3A60(uint32_t *Block, char a2)
{
    *Block = &MissionClass::`vftable';
    *(Block + 1) = &MissionClass::`vftable';
    *(Block + 2) = &MissionClass::`vftable';
    *(Block + 3) = &MissionClass::`vftable';
    ObjectClass::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

uint32_t * AbstractClass::sub_5B46E0(uint32_t *Block, char a2)
{
    int v3; // eax
    int v4; // ecx
    int v5; // edx
    int v6; // edx
    int v7; // ecx
    int v8; // edx
    int v9; // ecx
    *Block = &GenericList::`vftable';
    while ( 1 )
    v3 = *(Block + 2);
    if ( !v3 )
    break;
    if ( !*(uint32_t *)(v3 + 4) )
    break;
    v4 = *(uint32_t *)(v3 + 8);
    if ( !v4 )
    break;
    v5 = *(uint32_t *)(v3 + 4);
    if ( v5 )
    *(uint32_t *)(v4 + 4) = v5;
    *(uint32_t *)(*(uint32_t *)(v3 + 4) + 8) = *(uint32_t *)(v3 + 8);
    *(uint32_t *)(v3 + 8) = 0;
    *(uint32_t *)(v3 + 4) = 0;
    *(Block + 4) = &GenericNode::`vftable';
    if ( Block != (uint32_t *)-16 )
    v6 = *(Block + 5);
    if ( v6 )
    v7 = *(Block + 6);
    if ( v7 )
    *(uint32_t *)(v7 + 4) = v6;
    *(uint32_t *)(*(Block + 5) + 8) = *(Block + 6);
    *(Block + 6) = 0;
    *(Block + 5) = 0;
    *(Block + 1) = &GenericNode::`vftable';
    if ( Block != (uint32_t *)-4 )
    v8 = *(Block + 2);
    if ( v8 )
    v9 = *(Block + 3);
    if ( v9 )
    *(uint32_t *)(v9 + 4) = v8;
    *(uint32_t *)(*(Block + 2) + 8) = *(Block + 3);
    *(Block + 3) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

void  AbstractClass::sub_5C0280(int **this, char a2)
{
    int *v2; // eax
    int v3; // eax
    uint8_t *v4; // eax
    v2 = *(this + 4);
    if ( a2 )
    if ( v2 )
    v3 = *v2;
    if ( v3 )
    AbstractClass::processConstruction(v3);
    else if ( v2 )
    v4 = (uint8_t *)*v2;
    if ( v4 )
    AbstractClass::checkBuildProgress(v4);
}

char  AbstractClass::sub_5C02C0(int *this)
{
    char result; // al
    dword_ABF3F8 = (int)this;
    result = RenderMovieFrame(*(this + 4), 1, -1, 0);
    dword_ABF3F8 = 0;
    return result;
}

char  AbstractClass::sub_5C02E0(uint8_t *this)
{
    return *(this + 20);
}

char  AbstractClass::sub_5C02F0(int this)
{
    char **v1; // eax
    char result; // al
    v1 = *(char ***)(this + 16);
    if ( (*v1)[1360] || !*((uint8_t *)v1 + 69) || g_BigIntPool )
    return 0;
    g_BigIntPool = *(uint32_t *)(this + 16);
    result = VQAClass::AdvanceFrame(*v1, (uint8_t *)(this + 20));
    g_BigIntPool = 0;
    return result;
}

int  AbstractClass::sub_5C0340(uint32_t *this, int a2, int a3)
{
    uint32_t *v3; // ecx
    uint32_t *v4; // eax
    int result; // eax
    *(uint32_t *)(*(this + 4) + 36) = a2;
    *(uint32_t *)(*(this + 4) + 40) = a3;
    v3 = (uint32_t *)*(this + 4);
    v4 = v3 + 9;
    v3 += 13;
    *v3 = *v4;
    v3[1] = v4[1];
    v3[2] = v4[2];
    result = v4[3];
    v3[3] = result;
    return result;
}

int  AbstractClass::sub_5C0380(uint32_t *this, int a2)
{
    return AbstractClass::getTotalValue(*(uint32_t **)(*(this + 4) + 72), a2);
}

void  AbstractClass::sub_5C03A0(int ***this, signed int a2)
{
    AbstractClass::finalizeConstruction(**(this + 4));
    AbstractClass::updateBuildingState(**(this + 4), a2);
}

int AbstractClass::sub_5C03C0()
{
    return 33;
}

char __usercall AbstractClass::sub_5C03D0@<al>(int a1@<ebx>, int a2@<ebp>, int a3@<edi>)
{
    char result; // al
    int v4; // edx
    int v5; // ecx
    int v6; // edi
    int v7; // [esp+4h] [ebp-20h] BYREF
    int v8; // [esp+8h] [ebp-1Ch]
    int *v9; // [esp+Ch] [ebp-18h]
    int v10; // [esp+10h] [ebp-14h]
    struct tagRECT Rect; // [esp+14h] [ebp-10h] BYREF
    result = g_BigIntPool;
    if ( g_BigIntPool )
    (*(void (__thiscall **)(int, uint32_t))(*(uint32_t *)DSurface_Alternate + 24))(DSurface_Alternate, 0);
    Frame::Present(DSurface_Alternate, a1, a2, a3, 0, v7, v8, v9);
    result = TestBitArray(15);
    if ( !result )
    GetClientRect(g_hWnd, &Rect);
    ClientToScreen(g_hWnd, (LPPOINT)&Rect);
    v4 = *(uint32_t *)(g_BigIntPool + 64);
    v5 = Rect.top + *(uint32_t *)(g_BigIntPool + 56);
    v6 = *(uint32_t *)(g_BigIntPool + 52);
    v9 = *(int **)(g_BigIntPool + 60);
    v8 = v5;
    v7 = Rect.left + v6;
    v10 = v4;
    return (*(int (__thiscall **)(int, int *, uint32_t, int, uint32_t, int))(*(uint32_t *)DSurface_Primary + 8))(
    DSurface_Primary,
    &v7,
    *(uint32_t *)(g_BigIntPool + 8),
    g_BigIntPool + 36,
    0,
    1);
    return result;
}

uint32_t * AbstractClass::sub_5C09B0(uint32_t *Block, char a2)
{
    uint32_t **v3; // esi
    void *v4; // edi
    uint32_t *v5; // edi
    v3 = (uint32_t **)*(Block + 4);
    *Block = &VQMovieHandle::`vftable';
    if ( v3 )
    if ( *v3 )
    DSurface::FlipIfNeeded((int)*v3);
    v4 = *v3;
    if ( *v3 )
    CCFileClass::Cleanup(*v3);
    __3_YAXPAX_Z(v4);
    *v3 = 0;
    v5 = v3[18];
    if ( v5 )
    BinkMovie::FreeSurfaceTracker(v3[18]);
    __3_YAXPAX_Z(v5);
    v3[18] = 0;
    *((uint8_t *)v3 + 69) = 0;
    *Block = &MovieHandle::`vftable';
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

char  AbstractClass::sub_5C0B10(void *this, int a2, uint32_t *a3)
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

void  AbstractClass::sub_5C0BC0(int this)
{
    if ( *(uint32_t *)(this + 4) && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(*(void **)(this + 4));
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

int  AbstractClass::sub_5C0BF0(int this, uint32_t *a2)
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

unsigned int  AbstractClass::sub_5C0C30(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

uint32_t * AbstractClass::sub_5C0D30(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<char const *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

char AbstractClass::_vt7()
{
    return 0;
}

int  AbstractClass::_vt29(#374 *this)
{
    return 0;
}

int  AbstractClass::_vt28(#374 *this)
{
    return 0;
}

int  AbstractClass::_vt35(#374 *this)
{
    return 0x7FFFFFFF;
}

int  AbstractClass::_vt37(#374 *this)
{
    int result; // eax
    LOBYTE(result) = 0;
    return result;
}

int  AbstractClass::_vt38(#374 *this)
{
    int result; // eax
    LOBYTE(result) = 0;
    return result;
}

int  AbstractClass::_vt39(#374 *this)
{
    int result; // eax
    LOBYTE(result) = 0;
    return result;
}

int  AbstractClass::_vt40(#374 *this)
{
    int result; // eax
    LOBYTE(result) = 0;
    return result;
}

int  AbstractClass::_vt64(#374 *this)
{
    return 0;
}

int  AbstractClass::_vt81(#374 *this)
{
    int result; // eax
    LOBYTE(result) = 0;
    return result;
}

int  AbstractClass::_vt80(#374 *this)
{
    int result; // eax
    LOBYTE(result) = 0;
    return result;
}

int  AbstractClass::_vt89(#374 *this)
{
    int result; // eax
    LOBYTE(result) = 0;
    return result;
}

int  AbstractClass::_vt90(#374 *this)
{
    return 0;
}

int  AbstractClass::_vt96(#374 *this)
{
    return 0;
}

int  AbstractClass::IsNotNull(#374 *this)
{
    int v2; // [esp+4h] [ebp+4h]
    return v2 != 0;
}

int  AbstractClass::_vt33(#374 *this)
{
    return 0;
}

int  AbstractClass::_vt79(#374 *this)
{
    return (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 312))(this);
}

uint32_t * AbstractClass::sub_645B10(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<RGBClass>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

int  AbstractClass::sub_65C2E0(uint32_t *this)
{
    if ( (*(unsigned __int8 (__thiscall **)(uint32_t *))(*this + 24))(this) )
    return 0;
    *(this + 4) = 0;
    return 1;
}

char __stdcall AbstractClass::sub_65C320(int a1)
{
    return 1;
}

char  AbstractClass::sub_65C330(uint8_t *this)
{
    return *(this + 28);
}

int  AbstractClass::sub_65C340(void *this, int a2, int a3)
{
    return (*(int (__thiscall **)(void *, int))(*(uint32_t *)this + 28))(this, a3);
}

int  AbstractClass::sub_65C4A0(uint32_t *this)
{
    return *(this + 4);
}

void  AbstractClass::sub_65C540(uint8_t *this)
{
    *(this + 28) = 0;
}

uint32_t * AbstractClass::sub_65D4D0(uint32_t *Block, char a2)
{
    int v3; // ecx
    v3 = *(Block + 1);
    *Block = &rc_ptr_base::`vftable';
    if ( v3 )
    *(Block + 1) = 0;
    (*(void (__thiscall **)(int))(*(uint32_t *)v3 + 8))(v3);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

char  AbstractClass::sub_6B14B0(void *this, int a2, uint32_t *a3)
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

void  AbstractClass::sub_6B1560(int this)
{
    if ( *(uint32_t *)(this + 4) && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(*(void **)(this + 4));
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

int  AbstractClass::sub_6B1590(int this, uint32_t *a2)
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

unsigned int  AbstractClass::sub_6B15D0(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

uint32_t * AbstractClass::sub_6B1930(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<SlaveManagerClass::SlaveControl *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

char  AbstractClass::sub_6B8260(void *this, int a2, uint32_t *a3)
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

void  AbstractClass::sub_6B8310(int this)
{
    if ( *(uint32_t *)(this + 4) && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(*(void **)(this + 4));
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

int  AbstractClass::sub_6B8340(int this, uint32_t *a2)
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

unsigned int  AbstractClass::sub_6B8380(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

uint32_t * AbstractClass::sub_6B8740(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<SpawnManagerClass::SpawnControl *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

// 0x006C9600
int  AbstractClass::GetTotalValue(float *this)
{
    int v1; // edx
    float *v2; // esi
    char *v3; // edi
    int v4; // ebx
    int v6; // [esp+Ch] [ebp-4h]
    v1 = 0;
    v2 = this;
    v6 = 0;
    v3 = (char *)((char *)BuildingClass_InstanceArray - (char *)this);
    v4 = 4;
    do
    if ( *v2 > 0.0 )
    v1 = Math::RoundToInt((double)*(int *)(*(uint32_t *)((char *)v2 + (uint32_t)v3) + 184) * *v2 + (double)v6);
    v6 = v1;
    ++v2;
    --v4;
    while ( v4 );
    return v1;
}

int __stdcall AbstractClass::sub_6CE1F0(int a1)
{
    return 57;
}

void __fastcall AbstractClass::ClearTargetToMeClearManagerTarget(int a1)
{
    int v2; // edi
    int i; // ebx
    bool v4; // cl
    uint32_t *v5; // esi
    int v6; // eax
    int j; // ecx
    int v8; // eax
    if ( a1 )
    v2 = (*(uint8_t *)(a1 + 20) & 1) != 0 ? a1 : 0;
    else
    v2 = 0;
    for ( i = g_SidebarState - 1; i >= 0; --i )
    v4 = 1;
    v5 = (uint32_t *)*((uint32_t *)g_TechnoClass_Count + i);
    if ( v2 )
    v6 = v5[165];
    if ( v6 )
    if ( *(uint32_t *)(v6 + 80) == a1 && *(int *)(v2 + 108) > 0 )
    v4 = *(uint8_t *)(v2 + 144) == 0;
    if ( v5[173] == a1 && v4 )
    (*(void (__thiscall **)(uint32_t))(*v5 + 504))(*((uint32_t *)g_TechnoClass_Count + i));
    if ( (*(int (__thiscall **)(uint32_t *))(*v5 + 44))(v5) == 2 && v5[43] == 25 )
    v5[47] = 0;
    *((uint8_t *)v5 + 1746) = 0;
    if ( v5[173] == a1 )
    (*(void (__thiscall **)(uint32_t *, uint32_t))(*v5 + 968))(v5, 0);
    for ( j = g_HouseClass_AIProductionState - 1; j >= 0; --j )
    v8 = *((uint32_t *)g_TeamClassPool + j);
    if ( *(uint32_t *)(v8 + 60) == a1 )
    *(uint32_t *)(v8 + 60) = 0;
    if ( *(uint32_t *)(v8 + 64) == a1 )
    *(uint32_t *)(v8 + 64) = 0;
}

int  AbstractClass::sub_71FFE0(uint32_t *this, int a2)
{
    if ( !Control::DispatchClick(this, a2) )
    return 0;
    (*(void (__thiscall **)(uint32_t *))(*this + 144))(this);
    (*(void (__thiscall **)(uint32_t *, uint32_t))(*this + 148))(this, *(this + 14));
    return 1;
}

char  AbstractClass::sub_720020(int *this, int a2, char a3)
{
    int v4; // edx
    int v5; // eax
    int Instance; // edi
    v4 = *this;
    *(this + 14) = a2;
    (*(void (**)(void))(v4 + 72))();
    LOBYTE(v5) = a3;
    if ( a3 )
    v5 = *(this + 14);
    if ( v5 )
    Instance = TextRenderer::GetInstance();
    v5 = Text::MeasureWidth(*(this + 14), 0) + 8;
    *(this + 5) = v5;
    *(this + 6) = *(uint32_t *)(Instance + 28) + 2;
    return v5;
}

char  AbstractClass::sub_720070(int this)
{
    char result; // al
    int v3; // eax
    int v4; // edx
    int v5; // eax
    int v6; // ecx
    int v7; // edx
    int v8; // eax
    int v9; // ecx
    int v10; // eax
    int v11; // [esp+8h] [ebp-10h] BYREF
    int v12; // [esp+Ch] [ebp-Ch]
    int v13; // [esp+10h] [ebp-8h]
    int v14; // [esp+14h] [ebp-4h]
    result = *(uint8_t *)(this + 53);
    if ( !result )
    if ( *(uint8_t *)(this + 52) )
    v3 = *(uint32_t *)(*((uint32_t *)BuildingTypeClass_AnimTable + BuildingAnim::GetType()) + 780);
    if ( *(uint32_t *)(v3 + 4) == 1 )
    v4 = *(unsigned __int8 *)(*(uint32_t *)(v3 + 372) + 12);
    else
    v4 = *(unsigned __int16 *)(*(uint32_t *)(v3 + 372) + 24);
    v5 = *(uint32_t *)(this + 12);
    v11 = v5 - 1;
    v6 = *(uint32_t *)(this + 16);
    v12 = v6 - 1;
    v13 = *(uint32_t *)(this + 20) + v5 + 2;
    v14 = *(uint32_t *)(this + 24) + v6 + 2;
    (*(void (__thiscall **)(int, int *, int))(*(uint32_t *)DSurface_Hidden_2 + 88))(DSurface_Hidden_2, &v11, v4);
    if ( *(uint8_t *)(this + 30) )
    v7 = 3;
    else
    v7 = *(uint8_t *)(this + 44) == 0;
    v8 = *(uint32_t *)(this + 12);
    v12 = *(uint32_t *)(this + 16);
    v9 = *(uint32_t *)(this + 24);
    v11 = v8;
    v10 = *(uint32_t *)(this + 20);
    v14 = v9;
    v13 = v10;
    return DrawBuildingTilesSHP(&v11, v7, 1);
    return result;
}

int * AbstractClass::sub_720140(int this, int a2)
{
    int *result; // eax
    int v4; // edx
    int v5; // ecx
    uint32_t *v6; // eax
    int v7; // [esp-14h] [ebp-38h]
    int v8; // [esp-Ch] [ebp-30h]
    uint32_t v9[2]; // [esp+4h] [ebp-20h] BYREF
    int v10; // [esp+Ch] [ebp-18h] BYREF
    uint8_t v11[16]; // [esp+14h] [ebp-10h] BYREF
    result = (int *)BuildingAnim::GetType();
    if ( *(uint32_t *)(this + 56) )
    if ( *(uint8_t *)(this + 30) )
    v4 = 0;
    else if ( *(uint8_t *)(this + 44) || (v4 = 20480, *(uint8_t *)(this + 45)) )
    v4 = 24576;
    if ( g_AnimClass_SaveState )
    if ( (int)result <= 0 || (int)result >= g_AnimClass_SaveState )
    result = 0;
    result = (int *)*((uint32_t *)BuildingTypeClass_AnimTable + (uint32_t)result);
    if ( result )
    v9[0] = (*(int *)(this + 20) >> 1) + *(uint32_t *)(this + 12) - 1;
    v9[1] = *(uint32_t *)(this + 16) + 1;
    v5 = v4 | *(uint32_t *)(this + 60);
    BYTE1(v5) |= 1u;
    v8 = v5;
    v7 = (int)result;
    v6 = (uint32_t *)(*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)DSurface_Hidden_2 + 120))(
    DSurface_Hidden_2,
    v11);
    return globalHelper_0A6010(&v10, a2, DSurface_Hidden_2, v6, (int)v9, v7, 0, v8, 1);
    return result;
}

int  AbstractClass::sub_720200(uint32_t *this, int a2)
{
    *(this + 15) = a2;
    return a2;
}

uint32_t * AbstractClass::sub_720210(uint32_t *Block, char a2)
{
    GadgetClass::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

void __fastcall AbstractClass::AnnounceExpiredPointer(void **a1, int a2)
{
    int v4; // ebx
    int v5; // ebp
    int k; // ebp
    int i; // ebx
    int j; // ebx
    int m; // ebx
    int kk; // ebx
    int jj; // ebx
    int n; // ebx
    int mm; // ebx
    int nn; // ebx
    int ii; // ebx
    int i1; // ebx
    v4 = (*((int (__thiscall **)(void **))*a1 + 11))(a1);
    v5 = 0;
    if ( (void **)g_RadarBlipPool == a1 )
    g_RadarBlipPool = 0;
    if ( (void **)g_RadarBlipManager == a1 )
    g_RadarBlipManager = 0;
    Mouse::SetBounds((int)&MapClass_Instance, 0);
    switch ( v4 )
    case 24:
    if ( a1 == (void **)dword_A8ED78 )
    dword_A8ED78 = 0;
    break;
    case 13:
    for ( i = 0; i < dword_B0F6D8; ++i )
    (*(void (__thiscall **)(uint32_t, void **, int))(**((uint32_t **)dword_B0F6CC + i) + 40))(
    *((uint32_t *)dword_B0F6CC + i),
    a1,
    a2);
    goto LABEL_20;
    case 4:
    for ( j = 0; j < g_BuildingTypeInstanceCount; ++j )
    (*(void (__thiscall **)(uint32_t, void **, int))(**((uint32_t **)g_BuildingClassPoolManager + j) + 40))(
    *((uint32_t *)g_BuildingClassPoolManager + j),
    a1,
    a2);
    return;
    if ( a1 && ((uint8_t)a1[5] & 2) != 0 )
    if ( g_AlphaShapePool > 0 )
    do
    (*(void (__thiscall **)(uint32_t, void **, int))(**((uint32_t **)dword_B0F724 + v5) + 40))(
    *((uint32_t *)dword_B0F724 + v5),
    a1,
    a2);
    ++v5;
    while ( v5 < g_AlphaShapePool );
    AbstractClass::processDetection(&dword_87F5D8, (int)a1);
    AbstractClass::processStateTransition(&dword_ABC5F8, (int)a1);
    for ( k = dword_8A0218 - 1; k >= 0; --k )
    DiskLaserClass::PointerGotInvalid(*((uint32_t **)dword_8A020C + k), (int)a1);
    if ( v4 == 15 || v4 == 1 || v4 == 2 )
    nullsub_3(a1);
    AbstractClass::processRadarEvent(a1);
    if ( TacticalClass_Instance )
    ((void (__thiscall *)(LPPERSISTSTREAM, void **, int))TacticalClass_Instance->lpVtbl[1].Release)(
    TacticalClass_Instance,
    a1,
    1);
    LABEL_20:
    Array::RemoveItemByValue((int)a1, a2);
    return;
    if ( __RTDynamicCast(a1, 0, &AbstractClass `RTTI Type Descriptor', &AbstractTypeClass `RTTI Type Descriptor', 0) )
    for ( m = 0; m < g_AnimManager; ++m )
    (*(void (__thiscall **)(uint32_t, void **, int))(**((uint32_t **)g_AnimPoolCount + m) + 40))(
    *((uint32_t *)g_AnimPoolCount + m),
    a1,
    a2);
    InitInterfaceStubsCOM(RulesClass_Instance);
    else
    switch ( v4 )
    case 12:
    for ( n = 0; n < dword_B0F650; ++n )
    (*(void (__thiscall **)(uint32_t, void **, int))(**((uint32_t **)dword_B0F644 + n) + 40))(
    *((uint32_t *)dword_B0F644 + n),
    a1,
    a2);
    MapClass::RemoveTriggerRef((int *)&MapClass_Instance, (int)a1, 1);
    break;
    case 34:
    for ( ii = 0; ii < dword_B0F5E8; ++ii )
    (*(void (__thiscall **)(uint32_t, void **, int))(**((uint32_t **)dword_B0F5DC + ii) + 40))(
    *((uint32_t *)dword_B0F5DC + ii),
    a1,
    a2);
    break;
    case 38:
    for ( jj = 0; jj < dword_B0F718; ++jj )
    (*(void (__thiscall **)(uint32_t, void **, int))(**((uint32_t **)dword_B0F70C + jj) + 40))(
    *((uint32_t *)dword_B0F70C + jj),
    a1,
    a2);
    break;
    case 44:
    for ( kk = 0; kk < dword_B0F628; ++kk )
    (*(void (__thiscall **)(uint32_t, void **, int))(**((uint32_t **)dword_B0F61C + kk) + 40))(
    *((uint32_t *)dword_B0F61C + kk),
    a1,
    a2);
    MapClass::RemoveTriggerRef((int *)&MapClass_Instance, (int)a1, 1);
    Array::RemoveItemByValue((int)a1, a2);
    break;
    case 47:
    case 48:
    for ( mm = 0; mm < g_TActionClassState; ++mm )
    (*(void (__thiscall **)(uint32_t, void **, int))(**((uint32_t **)dword_B0F65C + mm) + 40))(
    *((uint32_t *)dword_B0F65C + mm),
    a1,
    a2);
    break;
    case 51:
    for ( nn = 0; nn < dword_B0F600; ++nn )
    (*(void (__thiscall **)(uint32_t, void **, int))(**((uint32_t **)dword_B0F5F4 + nn) + 40))(
    *((uint32_t *)dword_B0F5F4 + nn),
    a1,
    a2);
    break;
    case 60:
    for ( i1 = 0; i1 < dword_B0F700; ++i1 )
    (*(void (__thiscall **)(uint32_t, void **, int))(**((uint32_t **)dword_B0F6F4 + i1) + 40))(
    *((uint32_t *)dword_B0F6F4 + i1),
    a1,
    a2);
    break;
    default:
    return;
}

void  AbstractClass::sub_763EF0(int this)
{
    int v2; // eax
    v2 = *(uint32_t *)(this + 4);
    *(uint32_t *)(this + 16) = 0;
    if ( v2 && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z((void *)(v2 - 4));
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

unsigned int  AbstractClass::sub_763F30(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (a2 - *(uint32_t *)(this + 4)) / 0xCu;
    else
    return 0;
}

uint32_t * AbstractClass::sub_763F60(uint32_t *this, uint32_t *a2, int a3)
{
    uint32_t *v3; // edx
    v3 = (uint32_t *)(*(this + 1) + 12 * a3);
    *a2 = *v3;
    a2[1] = v3[1];
    a2[2] = v3[2];
    return a2;
}

uint32_t * AbstractClass::sub_763FF0(uint32_t *Block, char a2)
{
    int v3; // eax
    v3 = *(Block + 1);
    *Block = &VectorClass<WaypointClass>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z((void *)(v3 - 4));
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

uint32_t * AbstractClass::sub_764050(uint32_t *Block, char a2)
{
    int v3; // eax
    v3 = *(Block + 1);
    *Block = &VectorClass<WaypointClass>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z((void *)(v3 - 4));
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

char  AbstractClass::sub_7640B0(int *this, int a2)
{
    int v2; // edi
    int v3; // esi
    int v4; // edx
    uint32_t *v5; // eax
    uint32_t *v6; // ecx
    int v7; // edx
    v2 = *(this + 2);
    if ( v2 == *(uint32_t *)(a2 + 8) )
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = *(uint32_t *)(a2 + 4);
    v5 = (uint32_t *)*(this + 1);
    v6 = (uint32_t *)(v4 + 8);
    v7 = v4 - (uint32_t)v5;
    while ( *v5 == *(uint32_t *)((char *)v5 + v7) && v5[1] == *(v6 - 1) && v5[2] == *v6 )
    ++v3;
    v6 += 3;
    v5 += 3;
    if ( v3 >= v2 )
    return 1;
    return 0;
}

char  AbstractClass::sub_764110(void *this, int a2, int *a3)
{
    int v3; // ebp
    int *v5; // eax
    uint32_t *v6; // edi
    uint32_t *v7; // eax
    int v8; // ecx
    uint32_t *v9; // eax
    int v10; // ecx
    int v12; // ecx
    int v13; // eax
    uint32_t *v14; // edx
    uint32_t *v15; // ebx
    int v16; // eax
    v3 = a2;
    if ( a2 )
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    v6 = a3 + 1;
    *a3 = a2;
    v9 = a3 + 1;
    if ( a2 - 1 >= 0 )
    v10 = a2;
    do
    *v9 = 0;
    v9[1] = 0;
    v9[2] = 0;
    v9 += 3;
    --v10;
    while ( v10 );
    else
    v5 = (int *)__2_YAPAXI_Z(12 * a2 + 4);
    if ( v5 )
    v6 = v5 + 1;
    *v5 = a2;
    v7 = v5 + 1;
    if ( a2 - 1 >= 0 )
    v8 = a2;
    do
    *v7 = 0;
    v7[1] = 0;
    v7[2] = 0;
    v7 += 3;
    --v8;
    while ( v8 );
    else
    v6 = 0;
    *((uint8_t *)this + 12) = 1;
    if ( v6 )
    if ( *((uint32_t *)this + 1) )
    v12 = *((uint32_t *)this + 2);
    if ( a2 < v12 )
    v12 = a2;
    if ( v12 > 0 )
    v13 = 0;
    do
    v14 = (uint32_t *)(*((uint32_t *)this + 1) + v13 * 4);
    v15 = &v6[v13];
    v13 += 3;
    --v12;
    *v15 = *v14;
    v15[1] = v14[1];
    v15[2] = v14[2];
    while ( v12 );
    v3 = a2;
    if ( *((uint8_t *)this + 13) )
    v16 = *((uint32_t *)this + 1);
    if ( v16 )
    __3_YAXPAX_Z((void *)(v16 - 4));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v6;
    *((uint32_t *)this + 2) = v3;
    *((uint8_t *)this + 13) = a3 == 0;
    return 1;
    else
    return 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    return 1;
}

void  AbstractClass::sub_764220(int this)
{
    int v2; // eax
    v2 = *(uint32_t *)(this + 4);
    if ( v2 && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z((void *)(v2 - 4));
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

int  AbstractClass::sub_764260(int this, uint32_t *a2)
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
    for ( i = *(uint32_t **)(this + 4); *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 3 )
    if ( ++result >= v3 )
    return -1;
    return result;
}

unsigned int  AbstractClass::sub_7642B0(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (a2 - *(uint32_t *)(this + 4)) / 0xCu;
    else
    return 0;
}

char  AbstractClass::sub_7642E0(void *this, int a2, int *a3)
{
    int v3; // ebx
    int *v5; // ebp
    int *v6; // eax
    uint32_t *v7; // edi
    int v8; // ebp
    uint32_t *v9; // edi
    int v10; // ebp
    int v11; // ecx
    int v12; // eax
    uint32_t *v13; // ebx
    uint32_t *v14; // edx
    uint32_t *v15; // ecx
    int v16; // eax
    uint32_t *v18; // [esp+10h] [ebp-4h]
    v3 = a2;
    if ( a2 )
    v5 = a3;
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    *a3 = a2;
    v9 = a3 + 1;
    if ( a2 - 1 >= 0 )
    v10 = a2;
    do
    Coord::Subtract(v9, 0, 0, 0);
    v9 += 3;
    --v10;
    while ( v10 );
    v5 = a3;
    v7 = v5 + 1;
    else
    v6 = (int *)__2_YAPAXI_Z(12 * a2 + 4);
    if ( v6 )
    *v6 = a2;
    v7 = v6 + 1;
    v18 = v6 + 1;
    if ( a2 - 1 >= 0 )
    v8 = a2;
    do
    Coord3D::Set(v7, 0, 0, 0);
    v7 += 3;
    --v8;
    while ( v8 );
    v7 = v18;
    v5 = 0;
    else
    v7 = 0;
    *((uint8_t *)this + 12) = 1;
    if ( !v7 )
    return 0;
    if ( *((uint32_t *)this + 1) )
    v11 = *((uint32_t *)this + 2);
    if ( a2 < v11 )
    v11 = a2;
    if ( v11 > 0 )
    v12 = 0;
    do
    v13 = &v7[v12];
    v14 = (uint32_t *)(v12 * 4 + *((uint32_t *)this + 1));
    v12 += 3;
    --v11;
    *v13 = *v14;
    v13[1] = v14[1];
    v13[2] = v14[2];
    while ( v11 );
    v3 = a2;
    v5 = a3;
    if ( *((uint8_t *)this + 13) )
    v15 = (uint32_t *)*((uint32_t *)this + 1);
    if ( v15 )
    AbstractClass::processCleanup(v15, 3);
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v7;
    *((uint32_t *)this + 2) = v3;
    *((uint8_t *)this + 13) = v5 == 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    v16 = *((uint32_t *)this + 2);
    if ( v16 < *((uint32_t *)this + 4) )
    *((uint32_t *)this + 4) = v16;
    return 1;
}

int  AbstractClass::sub_764420(int *this, uint32_t *a2)
{
    int v2; // edx
    int result; // eax
    uint32_t *i; // ecx
    v2 = *(this + 4);
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (uint32_t *)*(this + 1); *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 3 )
    if ( ++result >= v2 )
    return -1;
    return result;
}

